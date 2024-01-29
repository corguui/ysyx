#include <common.h>
#include <cstdint>
#include <stdio.h>
#include <string.h>

void init_mem();
void init_log();
void init_sdb();
extern "C" void init_disasm(const char *triple);


#ifdef CONFIG_FTRACE
#include <elf.h>
#include <monitor.h>
char *elf_file =(char*)ELF;
int times=0;
int fun_num=0;
void elf_read(char *elf_file);
void show_symbol_table(int symtab_ind,uint32_t entry_num,char *string_table,FILE* fp,Elf32_Shdr* sec_headers);
void elf_read_fun(char* elf_file);
/*
transfer to momitor.h
typedef struct function
{
	uint32_t value;
	int      size;
	char     name[128];
}FUN;

*/
FUN fun_buff[128];

#endif

void init_monitor() {

    init_log();

	init_mem();

	init_disasm("riscv32");

	init_sdb();

    #ifdef CONFIG_FTRACE
    elf_read(elf_file);
    #endif
}

//elf_file handle

#ifdef CONFIG_FTRACE
void elf_read(char *elf_file)
{
	elf_read_fun(elf_file);
   Log("read elf file: %s",elf_file ?elf_file:"stdout");
}


void elf_read_fun(char *elf_file) {
	FILE* fp;
	Elf32_Ehdr elf_header;
	fp=fopen(elf_file,"r");
	if(fp==NULL)   exit(0);
	int ret=fread(&elf_header,sizeof(Elf32_Ehdr),1,fp);
	assert(ret==1);
	if(elf_header.e_ident[0] !=0x7f||elf_header.e_ident[1]!='E')  {printf("no elf file\n");exit(0);} 
	
	Elf32_Shdr* sec_headers=(Elf32_Shdr*)malloc(sizeof(Elf32_Shdr)*elf_header.e_shnum);
	fseek(fp,elf_header.e_shoff,SEEK_SET);
	int ret1=fread(sec_headers,sizeof(Elf32_Shdr)*elf_header.e_shnum,1,fp);
	assert(ret1==1);
	//printf("There are %d section headers, starting at offset 0x%x\n\n", elf_header.e_shnum, elf_header.e_shoff);
	rewind(fp);
	int str_tab_ind=elf_header.e_shstrndx;
	fseek(fp,sec_headers[str_tab_ind].sh_offset,SEEK_SET);
	char* string_table = (char*)malloc(sec_headers[str_tab_ind].sh_size * sizeof(char));
	int ret2=fread(string_table,sec_headers[str_tab_ind].sh_size,1,fp);
	assert(ret2==1);
	int dynsym_ind = -1;//默认.dynsym符号表索引为-1
    int symtab_ind = -1;//默认.symtab符号表索引为-1
    int dynstr_ind = -1;//默认.dynstr字符串表索引为-1
    int strtab_ind = -1;//默认.strtab字符串索引为-1

    //遍历段表section_headers获取符号表.dynsym;.symtab;.dynstr;.strtab四张表在段表中的索引
    	for (int i = 0; i < elf_header.e_shnum; i++) {
        	if (sec_headers[i].sh_type == SHT_DYNSYM)//是.dynsym符号表
            		dynsym_ind = i;
        	else if (sec_headers[i].sh_type == SHT_SYMTAB)//是.symtab符号表
            		symtab_ind = i;
        	if (strcmp(&string_table[sec_headers[i].sh_name], ".strtab") == 0)//是.strtab字符串表
            		strtab_ind = i;
        	else if (strcmp(&string_table[sec_headers[i].sh_name], ".dynstr") == 0)//是.dynstr字符串表
            		dynstr_ind = i;
    }

	if ((symtab_ind != -1) && (strtab_ind != -1)) {
        fseek(fp, sec_headers[strtab_ind].sh_offset, SEEK_SET);
		char strtab_string_table [sec_headers[str_tab_ind].sh_size];
        int ret5=fread(strtab_string_table, sec_headers[strtab_ind].sh_size,1, fp);
		assert(ret5==1);

        uint32_t entry_num = sec_headers[symtab_ind].sh_size / sec_headers[symtab_ind].sh_entsize;
		show_symbol_table(symtab_ind,entry_num,strtab_string_table,fp,sec_headers);

		//printf("%d\n",sec_headers[symtab_ind].sh_size);
		//printf("%d\n",sec_headers[symtab_ind].sh_entsize);
		//printf("%d\n",entry_num);
		//printf("%ld\n",sizeof(Elf32_Sym));


	//printf("  NUM:\tValue\t\tSize\tType\tName\n");
	/*
	for(int i=0;i<entry_num;i++)
	{
	   if((sym_entries[i].st_info & 0x0000000f)==STT_FUNC)
	   {
 	    printf("  %3d:\t", i);
        printf("0x%08x:\t", sym_entries[i].st_value);
        printf("%4d\t", sym_entries[i].st_size);
	    printf("FUN\t");
        printf("%s", &strtab_string_table[sym_entries[i].st_name]);
        printf("\n");
	    fun_buff[fun_num].value=sym_entries[i].st_value;
	    fun_buff[fun_num].size=sym_entries[i].st_size;
	    strcpy(fun_buff[fun_num].name,&strtab_string_table[sym_entries[i].st_name]);

	    fun_num++;
	    }
	}
	*/

	/*
	//   print the fun_buff
	for(int i=0;i<fun_num;i++)
	{
		printf("0x%08x:\t",fun_buff[i].value);
		printf("%4d\t",fun_buff[i].size);
		printf("%s",fun_buff[i].name);
		printf("\n");
	}
	*/

    
	//free (strtab_string_table);
    } 
	else {
        printf("No symbol table!\n");
    }
    //释放堆内存
    free (string_table);
    free (sec_headers);
    fclose (fp);	



}
void show_symbol_table(int symtab_ind,uint32_t entry_num,char *strtab_string_table,FILE* fp,Elf32_Shdr* sec_headers)
{
	fseek(fp, sec_headers[symtab_ind].sh_offset, SEEK_SET);//将指针移动到符号表对应的偏移地址
    //Elf32_Sym* sym_entries = (Elf32_Sym*)malloc(sizeof(Elf32_Sym)*entry_num);//开辟堆内存用来存储符号表中所有entry
	Elf32_Sym sym_entries[entry_num];
    int ret3=fread(sym_entries, sizeof(sym_entries),1, fp);//读符号表
	printf("%x\n",sec_headers[symtab_ind].sh_offset);
	printf("%lx\n",sizeof(sym_entries));
	assert(ret3==1);
/*
	for(int i=0;i<entry_num;i++)
	{
	   if((sym_entries[i].st_info & 0x0000000f)==STT_FUNC)
	   {
 	    printf("  %3d:\t", i);
        printf("0x%08x:\t", sym_entries[i].st_value);
        printf("%4d\t", sym_entries[i].st_size);
	    printf("FUN\t");
        printf("%s", &strtab_string_table[sym_entries[i].st_name]);
        printf("\n");
	    fun_buff[fun_num].value=sym_entries[i].st_value;
	    fun_buff[fun_num].size=sym_entries[i].st_size;
	    strcpy(fun_buff[fun_num].name,&strtab_string_table[sym_entries[i].st_name]);

	    fun_num++;
	    }
	}
		//free (sym_entries);
		//sym_entries=NULL;
		*/
}
#endif
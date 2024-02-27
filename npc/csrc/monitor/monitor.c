#include <common.h>
#include <stdio.h>
#include <string.h>

void init_mem();
void init_log(char * log_file);
void init_sdb();
void cpu_init();
void sdb_set_batch_mode();

char* img_file=NULL;
char* log_file=NULL;

#if defined(CONFIG_FTRACE) or defined(CONFIG_ITRACE)
extern "C" void init_disasm(const char *triple);
#endif


#ifdef CONFIG_FTRACE
#include <elf.h>
#include <monitor.h>
char *elf_file =NULL; 
void elf_read(char *elf_file);

FUN *symbol = NULL;  //dynamic allocate memory  or direct allocate memory (Symbol symbol[NUM])

int func_num=0;

#endif

#ifdef CONFIG_DIFFTEST
extern long img_size;
int difftest_port =1234;
char *diff_so_file=NULL;
void init_difftest(char *ref_so_file, long img_size, int port);
#endif

enum {npc_batch,npc_log};
void init_mode()
{
   if(CONFIG_MODE==npc_batch) 
   {
        sdb_set_batch_mode();
   }
}
//get the files
void parse_args(int argc,char **argv)
{
    int elf_flat=0;
    img_file=argv[1];
    log_file=argv[2];
    #ifdef CONFIG_FTRACE
    elf_file=argv[3];
    elf_flat=1;
    #endif
    #ifdef CONFIG_DIFFTEST
    if(elf_flat==1)
    diff_so_file=argv[4];
    else 
    diff_so_file=argv[3];
    #endif
}


void init_monitor() {

    init_log(log_file);

	init_mem();

    cpu_init();

    #ifdef CONFIG_DIFFTEST
    if(diff_so_file!=NULL)
    {
        Log(" succeed read The ref_so_file %s ", diff_so_file ); 
    }
    init_difftest(diff_so_file,img_size,difftest_port);
    #endif

	init_sdb();

    #if defined(CONFIG_FTRACE) or defined(CONFIG_ITRACE)
    //反汇编
	init_disasm("riscv32");
    #endif

    #ifdef CONFIG_FTRACE
    elf_read(elf_file);
    #endif
}

//elf_file handle



#ifdef CONFIG_FTRACE

void elf_read(char *elf_file)
{
    
    if(elf_file == NULL) return;
    
    FILE *fp;
    fp = fopen(elf_file, "rb");
    
    if(fp == NULL)
    {
        printf("failed to open the elf file!\n");
        exit(0);
    }
    else {
    Log("read elf file: %s",elf_file ?elf_file:"stdout");
    }
	
    Elf32_Ehdr edhr;
	//读取elf头
    if(fread(&edhr, sizeof(Elf32_Ehdr), 1, fp) <= 0)
    {
        printf("fail to read the elf_head!\n");
        exit(0);
    }

    if(edhr.e_ident[0] != 0x7f || edhr.e_ident[1] != 'E' || 
       edhr.e_ident[2] != 'L' ||edhr.e_ident[3] != 'F')
    {
        printf("The opened file isn't a elf file!\n");
        exit(0);
    }
    
    fseek(fp, edhr.e_shoff, SEEK_SET);

    Elf32_Shdr shdr;
    char *string_table = NULL;
    //寻找字符串表
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }
        
        if(shdr.sh_type == SHT_STRTAB)
        {
            //获取字符串表
            string_table = (char*)malloc(shdr.sh_size);
            fseek(fp, shdr.sh_offset, SEEK_SET);
            if(fread(string_table, shdr.sh_size, 1, fp) <= 0)
            {
                printf("fail to read the strtab\n");
                exit(0);
            }
        }
    }
    
    //寻找符号表
    fseek(fp, edhr.e_shoff, SEEK_SET);
    
    for(int i = 0; i < edhr.e_shnum; i++)
    {
        if(fread(&shdr, sizeof(Elf32_Shdr), 1, fp) <= 0)
        {
            printf("fail to read the shdr\n");
            exit(0);
        }

        if(shdr.sh_type == SHT_SYMTAB)
        {
            fseek(fp, shdr.sh_offset, SEEK_SET);

            Elf32_Sym sym;

            size_t sym_count = shdr.sh_size / shdr.sh_entsize;
            symbol = (FUN*)malloc(sizeof(FUN) * sym_count);

            for(size_t j = 0; j < sym_count; j++)
            {
                if(fread(&sym, sizeof(Elf32_Sym), 1, fp) <= 0)
                {
                    printf("fail to read the symtab\n");
                    exit(0);
                }

                if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC)
                {
                    const char *name = string_table + sym.st_name;
                    strncpy(symbol[func_num].name, name, sizeof(symbol[func_num].name) - 1);
                    symbol[func_num].value = sym.st_value;
                    symbol[func_num].size = sym.st_size;
                    func_num++;
                }
            }
        }
    }
    fclose(fp);
    free(string_table);
}
#endif
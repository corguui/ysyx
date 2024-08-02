#include "config.h"
#include "debug.h"
#include "utils.h"
#include <assert.h>
#include <cstdint>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<mem.h>

#ifdef CONFIG_MTRACE
//memory tarce
unsigned int write_buf[100000000];
unsigned int read_buf[100000000];
unsigned int write_data_buf[100000000];
unsigned int read_data_buf[100000000];
int write_num=0;
int read_num=0;
#endif


static long load_img();
static uint8_t pmem[0x8000000] __attribute((aligned(4096)))={};
static uint32_t img[]
{
	0x00110123,
	0x00110008,
	0x00100073, //ebreak
};
long img_size;

void init_mem()
{

	img_size=load_img();

	//memcpy(pmem,img,sizeof(img));
	

	/*   print the pmem
	uint32_t b=0x80000000;
	int i=0;
	for(i=0;i<(size-1)/4;i++)
	{
		printf("%x\n",pmem_read(b,4));
		b=b+0x4;
	i 
	*/
}
static void out_of_bound(uint32_t addr)
{
	printf("error out_of_bound\naddress = 0x%x\npc = 0x%x\n",addr,top->pc);
	#ifdef CONFIG_MTRACE
		log_write("----------write----------\n");
		for(int i=0;i<write_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",write_buf[i],write_data_buf[i]);
  		}
  		log_write("--------  read  ---------\n");
  		for(int i=0;i<read_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",read_buf[i],read_data_buf[i]);
  		}
	#endif
	tfp->close();
	assert(0);

}
//check mem if out_of_bond will excute the fun out_of_bond
static inline bool check_mem(uint32_t addr)
{
	return (addr>=0x80000000&&addr<0x87ffffff);
}


uint8_t* guest_to_host(uint32_t paddr) {return pmem+paddr-0x80000000;}


uint32_t pmem_read(uint32_t addr,int len)
{
	uint32_t ret = host_read(guest_to_host(addr),len);
	return ret;
}
void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}


uint32_t pc_read(uint32_t &pc)
{
	uint32_t val=pmem_read(pc,4);
	return val;
}
uint32_t host_read(void* addr,int len)
{
	switch(len){
	case 1: return *(uint8_t *)addr;
	case 2: return *(uint16_t *)addr;
	case 4: return *(uint32_t *)addr;
	default:
	{ printf("pmem_read error\n"); assert(0);    return 0;}
	}
}
//pmem read in mem.v
extern "C" int vlg_pmem_read(int ad,int len)
{
	uint32_t addr=(uint32_t)ad;
	if(likely(check_mem(addr)))
	{
	uint32_t data=pmem_read(addr, len);
	#ifdef  CONFIG_MTRACE
	 	read_buf[read_num]=addr;
		read_data_buf[read_num]=data;
  		read_num++;
	#endif
	return (int) data; 
	}
	else if(addr == CONFIG_RTC_MMIO || addr ==CONFIG_RTC_MMIO+4) {
	#ifdef CONFIG_DEVICE
		return mmio_read(addr,len);
	#endif

	}
	return 0;
	printf("read\n");
	out_of_bound(addr);
	return 0;
}

extern "C" int vlg_pc_read(int ad)
{
	uint32_t pc=(uint32_t)ad;
	if(pc==0)
	{
		pc=0x80000000;
	}
	if(likely(check_mem(pc)))
	{
	uint32_t data=pmem_read(pc, 4);
	return (int) data; 
	}
	printf("pc_read\n");
	out_of_bound(pc);
	return 0;
}



void host_write(void* addr, int len, uint32_t data)
{
  	switch (len) {
          case 1: *(uint8_t  *)addr = data; return;
    	  case 2: *(uint16_t *)addr = data; return;
    	  case 4: *(uint32_t *)addr = data; return;
    	  default:
	  { assert(0); printf("pmem_write error\n");   }
	}
}
//pmem_write in mem.v
extern "C" void vlg_pmem_write(int ad,int wdata,int len)
{
	uint32_t addr=(uint32_t)ad;
	if(likely(check_mem(addr)))
	{
	uint32_t data=(uint32_t)wdata;
	#ifdef CONFIG_MTRACE
	write_buf[write_num]=addr;
	write_data_buf[write_num]=data;
	write_num++;
	#endif
	pmem_write(addr,len,data);
	return ;
	}
	#ifdef CONFIG_DEVICE
	uint32_t data=(uint32_t)wdata;
		return mmio_write(addr,len,data);
	#endif
	printf("write\n");
	out_of_bound(addr);
}

uint8_t* NPC_guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }

static long load_img(){
   extern char *img_file;
   if (img_file == NULL) {
     printf("No image is given. Use the default build-in image.");
     return 4096; // built-in image size
   }           
               
   FILE *fp = fopen(img_file, "rb");
   //assert(fp==NULL);
               
   fseek(fp, 0, SEEK_END);
   long size = ftell(fp);
   Log("The image is %s, size = %ld", img_file, size); 
   fseek(fp, 0, SEEK_SET);
   int ret = fread(NPC_guest_to_host(0x80000000), size, 1, fp);
   assert(ret == 1);
               
   fclose(fp); 
   return size;
}

void pmem_out()
{
		#ifdef CONFIG_MTRACE
		log_write("----------write----------\n");
		for(int i=0;i<write_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",write_buf[i],write_data_buf[i]);
  		}
  		log_write("--------  read  ---------\n");
  		for(int i=0;i<read_num;i++)
  		{
  			log_write("----addr  0x%x   ----data  0x%x\n",read_buf[i],read_data_buf[i]);
  		}
		#else 
		printf("don't open the mtrace");
		#endif
}
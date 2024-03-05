#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  	char buff[4096];
	va_list arg;
	va_start(arg,fmt);

	int n = vsprintf(buff,fmt,arg);
	for(int i=0;i<n;i++)
	{
	  putch(buff[i]);
	}
	va_end(arg);
	return n;
	//panic("Not implemented");	
}
int vsprintf(char *out, const char *fmt, va_list ap) {
	int len=0;
	while(*fmt!='\0')
	{
		switch(*fmt)
		{
			case '%':
			  fmt++;
			switch(*fmt)
			{
			  case 'd':
			    int val=va_arg(ap,int); 
			    if(val==0)
			    {out[len]='0';
			     len++;
			     break;}
			    else if(val<0)
			    {out[len]='-';
			     len++;
			     val=0-val;}
			     int r;
			     char p[1024];
			     int plen=0;
			     while(val>0)
			     {
			     	r=val%10;
				val=val/10;
				p[plen]=48+r;
				plen++;
			     }
			     for(int i=plen-1;i>=0;i--)
			     {
			       out[len]=p[i];
			       len++;
			     }
			     break;
			     case 's':
			     int i;
			     char *sr=va_arg(ap,char*);
			     for(i=0;sr[i]!='\0';i++)
			     {
			     	out[len]=sr[i];
				len++;
			     }
			    break;
				case 'c':
				char ch= (char)va_arg(ap,int);
				out[len]=ch;
				len++;
				break;
				case 'X':
				unsigned int hex;
				int hval=va_arg(ap,int); 
				out[len]='0';
				len++;
				out[len]='X';
				len++;
			    if(hval==0)
			    {out[len]='0';
			     len++;
			     break;}
			    else
			    {
				 hex=(unsigned int)hval;
				}
			     int u;
			     char q[1024];
			     int qlen=0;
			     while(hex>0)
			     {
					u=hex%16;
			     	if(u>=10)
					{
					q[qlen]=55+u;
					}
					else
					{
					q[qlen]=48+u;
					}
					hex=hex/16;
					qlen++;
			     }
			     for(int i=qlen-1;i>=0;i--)
			     {
			       out[len]=q[i];
			       len++;
			     }
			     break;
				case 'x':
				unsigned int hexx;
				int hxval=va_arg(ap,int); 
				out[len]='0';
				len++;
				out[len]='x';
				len++;
			    if(hxval==0)
			    {out[len]='0';
			     len++;
			     break;}
			    else
			    {
				 hexx=(unsigned int)hxval;
				}
			     int f;
			     char x[1024];
			     int xlen=0;
			     while(hexx>0)
			     {
					f=hexx%16;
			     	if(f>=10)
					{
					x[xlen]=87+f;
					}
					else
					{
					x[xlen]=48+f;
					}
					hexx=hexx/16;
					xlen++;
			     }
			     for(int i=xlen-1;i>=0;i--)
			     {
			       out[len]=x[i];
			       len++;
			     }
			     break;

			}
			break;
			case '\n':
			out[len]='\n';
			len++;
			break;
			default:
			  out[len]=*fmt;
			  len++;
		}
		fmt++;
	}
	out[len]='\0';
	return len;
}

int sprintf(char *out, const char *fmt, ...) {
	   va_list ap;
	   size_t n;
           va_start(ap, fmt);
	   n=vsprintf(out,fmt,ap);
           va_end(ap);
           return n;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

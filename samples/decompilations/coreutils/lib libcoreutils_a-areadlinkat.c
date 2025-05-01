
/* WARNING: Unknown calling convention */

char * areadlinkat(int fd,char *filename)

{
  char *pcVar1;
  
  pcVar1 = (char *)careadlinkat(fd,filename,0,0,0,&readlinkat);
  return pcVar1;
}



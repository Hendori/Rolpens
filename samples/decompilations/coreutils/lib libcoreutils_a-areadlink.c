
/* WARNING: Unknown calling convention */

ssize_t careadlinkatcwd(int fd,char *filename,char *buffer,size_t buffer_size)

{
  ssize_t sVar1;
  
  if (fd == -100) {
    sVar1 = readlink(filename,buffer,buffer_size);
    return sVar1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention */

char * areadlink(char *filename)

{
  char *pcVar1;
  
  pcVar1 = (char *)careadlinkat(0xffffff9c,filename,0,0,0,0x100000);
  return pcVar1;
}



void careadlinkatcwd_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



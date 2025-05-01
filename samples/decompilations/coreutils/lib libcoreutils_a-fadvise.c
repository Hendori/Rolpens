
/* WARNING: Unknown calling convention */

void fdadvise(int fd,off_t offset,off_t len,fadvice_t advice)

{
  posix_fadvise(fd,offset,len,advice);
  return;
}



/* WARNING: Unknown calling convention */

void fadvise(FILE *fp,fadvice_t advice)

{
  int __fd;
  
  if (fp != (FILE *)0x0) {
    __fd = fileno((FILE *)fp);
    posix_fadvise(__fd,0,0,advice);
    return;
  }
  return;
}



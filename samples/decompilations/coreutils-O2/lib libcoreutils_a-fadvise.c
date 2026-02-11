
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int fdadvise(int __fd,__off_t __offset,__off_t __len,int __advise)

{
  int iVar1;
  
  iVar1 = posix_fadvise(__fd,__offset,__len,__advise);
  return iVar1;
}



void fadvise(FILE *param_1,int param_2)

{
  int __fd;
  
  if (param_1 != (FILE *)0x0) {
    __fd = fileno(param_1);
    posix_fadvise(__fd,0,0,param_2);
    return;
  }
  return;
}



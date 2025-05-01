
/* WARNING: Unknown calling convention */

int chmodat(int fd,char *file,mode_t mode)

{
  int iVar1;
  
  iVar1 = fchmodat(fd,file,mode,0);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int lchmodat(int fd,char *file,mode_t mode)

{
  int iVar1;
  
  iVar1 = fchmodat(fd,file,mode,0x100);
  return iVar1;
}



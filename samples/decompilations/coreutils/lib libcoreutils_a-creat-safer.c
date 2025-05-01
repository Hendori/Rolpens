
/* WARNING: Unknown calling convention */

int creat_safer(char *file,mode_t mode)

{
  int iVar1;
  
  iVar1 = creat(file,mode);
  iVar1 = fd_safer(iVar1);
  return iVar1;
}



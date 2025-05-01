
/* WARNING: Unknown calling convention */

int chownat(int fd,char *file,uid_t owner,gid_t group)

{
  int iVar1;
  
  iVar1 = fchownat(fd,file,owner,group,0);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int lchownat(int fd,char *file,uid_t owner,gid_t group)

{
  int iVar1;
  
  iVar1 = fchownat(fd,file,owner,group,0x100);
  return iVar1;
}




/* WARNING: Unknown calling convention */

int dup_safer_flag(int fd,int flag)

{
  int iVar1;
  
  iVar1 = rpl_fcntl(fd,-(uint)((flag & 0x80000U) != 0) & 0x406,3);
  return iVar1;
}



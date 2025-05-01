
/* WARNING: Unknown calling convention */

int rpl_ioctl(int fd,int request,...)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  va_list args;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ioctl(fd,(ulong)(uint)request);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



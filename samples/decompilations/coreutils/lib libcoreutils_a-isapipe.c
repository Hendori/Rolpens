
/* WARNING: Unknown calling convention */

int isapipe(int fd)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  stat st;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = fstat(fd,(stat *)&st);
  if ((uVar2 == 0) && (st.st_nlink < 2)) {
    uVar2 = (uint)((st.st_mode & 0xf000) == 0x1000);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



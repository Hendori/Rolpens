
uint isapipe(int param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = fstat(param_1,&sStack_a8);
  if ((uVar1 == 0) && (sStack_a8.st_nlink < 2)) {
    uVar1 = (uint)((sStack_a8.st_mode & 0xf000) == 0x1000);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



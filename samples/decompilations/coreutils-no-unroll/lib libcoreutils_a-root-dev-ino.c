
__ino_t * get_root_dev_ino(__ino_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  stat local_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = lstat("/",&local_a8);
  if (iVar1 == 0) {
    *param_1 = local_a8.st_ino;
    param_1[1] = local_a8.st_dev;
  }
  else {
    param_1 = (__ino_t *)0x0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



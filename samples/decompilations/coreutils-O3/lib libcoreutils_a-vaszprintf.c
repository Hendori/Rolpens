
long vaszprintf(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *__ptr;
  int *piVar1;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = (void *)vasnprintf(0,&local_18,param_2,param_3);
  if (__ptr != (void *)0x0) {
    if (-1 < local_18) {
      *param_1 = __ptr;
      goto LAB_0010003e;
    }
    free(__ptr);
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  local_18 = -1;
LAB_0010003e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



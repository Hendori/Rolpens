
ulong vsnzprintf(void *param_1,ulong param_2)

{
  void *__src;
  size_t __n;
  int *piVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  __src = (void *)vasnprintf(param_1,&local_38);
  uVar2 = local_38;
  if (__src != (void *)0x0) {
    if (param_1 != __src) {
      if (param_2 != 0) {
        __n = param_2 - 1;
        if (local_38 < param_2) {
          __n = local_38;
        }
        memcpy(param_1,__src,__n);
        *(undefined1 *)((long)param_1 + __n) = 0;
      }
      free(__src);
    }
    if (-1 < (long)uVar2) goto LAB_00100056;
    piVar1 = __errno_location();
    *piVar1 = 0xc;
  }
  uVar2 = 0xffffffffffffffff;
LAB_00100056:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



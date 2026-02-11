
undefined8 gl_scratch_buffer_grow(long *param_1)

{
  ulong __size;
  ulong uVar1;
  void *pvVar2;
  int *piVar3;
  
  uVar1 = param_1[1];
  __size = uVar1 * 2;
  if ((long *)*param_1 != param_1 + 2) {
    free((void *)*param_1);
    uVar1 = param_1[1];
  }
  if (__size < uVar1) {
    piVar3 = __errno_location();
    *piVar3 = 0xc;
  }
  else {
    pvVar2 = malloc(__size);
    if (pvVar2 != (void *)0x0) {
      *param_1 = (long)pvVar2;
      param_1[1] = __size;
      return 1;
    }
  }
  *param_1 = (long)(param_1 + 2);
  param_1[1] = 0x400;
  return 0;
}



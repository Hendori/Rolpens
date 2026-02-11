
undefined8 gl_scratch_buffer_grow_preserve(long *param_1)

{
  ulong uVar1;
  ulong __size;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  size_t __size_00;
  
  uVar1 = param_1[1];
  pvVar2 = (void *)*param_1;
  __size = uVar1 * 2;
  if ((long *)pvVar2 == param_1 + 2) {
    pvVar3 = malloc(__size);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = (void *)__memcpy_chk(pvVar3,pvVar2,uVar1,__size);
LAB_00100045:
      *param_1 = (long)pvVar2;
      param_1[1] = __size;
      return 1;
    }
  }
  else {
    if (__size < uVar1) {
      piVar4 = __errno_location();
      *piVar4 = 0xc;
    }
    else {
      __size_00 = 1;
      if (__size != 0) {
        __size_00 = __size;
      }
      pvVar2 = realloc(pvVar2,__size_00);
      if (pvVar2 != (void *)0x0) goto LAB_00100045;
      pvVar2 = (void *)*param_1;
    }
    free(pvVar2);
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0x400;
  }
  return 0;
}



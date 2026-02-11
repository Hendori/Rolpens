
undefined8 gl_scratch_buffer_set_array_size(long *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  void *pvVar3;
  undefined8 uVar4;
  int *piVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  __size = SUB168(auVar1 * auVar2,0);
  if ((((param_3 | param_2) >> 0x20 == 0) || (param_2 == 0)) || (SUB168(auVar1 * auVar2,8) == 0)) {
    if ((ulong)param_1[1] < __size) {
      if ((long *)*param_1 != param_1 + 2) {
        free((void *)*param_1);
      }
      pvVar3 = malloc(__size);
      if (pvVar3 == (void *)0x0) {
        *param_1 = (long)(param_1 + 2);
        param_1[1] = 0x400;
        return 0;
      }
      *param_1 = (long)pvVar3;
      param_1[1] = __size;
    }
    uVar4 = 1;
  }
  else {
    if ((long *)*param_1 != param_1 + 2) {
      free((long *)*param_1);
    }
    *param_1 = (long)(param_1 + 2);
    param_1[1] = 0x400;
    piVar5 = __errno_location();
    *piVar5 = 0xc;
    uVar4 = 0;
  }
  return uVar4;
}



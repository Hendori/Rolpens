
undefined8 gl_dynarray_emplace_enlarge(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  size_t __size;
  size_t __size_00;
  void *pvVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar6 = 0x10;
    if (3 < param_3) {
      uVar6 = (ulong)(-(uint)(param_3 < 8) & 4) + 4;
    }
  }
  else {
    uVar6 = uVar1 + 1 + (uVar1 >> 1);
    if (uVar6 <= uVar1) {
      piVar5 = __errno_location();
      *piVar5 = 0xc;
      return 0;
    }
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  __size = SUB168(auVar2 * auVar3,0);
  if (SUB168(auVar2 * auVar3,8) != 0) {
    return 0;
  }
  if ((void *)param_1[2] == param_2) {
    pvVar4 = malloc(__size);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (param_2 != (void *)0x0) {
      pvVar4 = (void *)__memcpy_chk(pvVar4,param_2,param_3 * *param_1,__size);
    }
  }
  else {
    __size_00 = 1;
    if (__size != 0) {
      __size_00 = __size;
    }
    pvVar4 = realloc((void *)param_1[2],__size_00);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  param_1[2] = (long)pvVar4;
  param_1[1] = uVar6;
  return 1;
}



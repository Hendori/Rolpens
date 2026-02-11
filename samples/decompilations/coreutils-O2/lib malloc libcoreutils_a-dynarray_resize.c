
undefined8 gl_dynarray_resize(ulong *param_1,ulong param_2,void *param_3,ulong param_4)

{
  void *__ptr;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  size_t __size;
  size_t __size_00;
  void *pvVar3;
  int *piVar4;
  
  if (param_1[1] < param_2) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_4;
    __size = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      piVar4 = __errno_location();
      *piVar4 = 0xc;
      return 0;
    }
    __ptr = (void *)param_1[2];
    if (__ptr == param_3) {
      pvVar3 = malloc(__size);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      if (__ptr != (void *)0x0) {
        pvVar3 = (void *)__memcpy_chk(pvVar3,__ptr,*param_1 * param_4,__size);
      }
    }
    else {
      __size_00 = 1;
      if (__size != 0) {
        __size_00 = __size;
      }
      pvVar3 = realloc(__ptr,__size_00);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
    }
    param_1[2] = (ulong)pvVar3;
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  else {
    *param_1 = param_2;
  }
  return 1;
}




undefined8 gl_dynarray_finalize(long *param_1,void *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  void *__ptr;
  void *pvVar2;
  size_t __size;
  
  if (param_1[1] == -1) {
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if ((void *)param_1[2] != param_2) {
      free((void *)param_1[2]);
    }
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    __size = param_3 * lVar1;
    pvVar2 = malloc(__size);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    __ptr = (void *)param_1[2];
    if (__ptr != (void *)0x0) {
      __memcpy_chk(pvVar2,__ptr,__size,__size);
    }
    if (__ptr != param_2) {
      free(__ptr);
    }
    *param_4 = pvVar2;
    param_4[1] = lVar1;
  }
  return 1;
}



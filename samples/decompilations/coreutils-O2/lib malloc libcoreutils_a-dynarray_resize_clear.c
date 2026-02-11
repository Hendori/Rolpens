
undefined4 gl_dynarray_resize_clear(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *param_1;
  uVar2 = gl_dynarray_resize();
  if ((char)uVar2 != '\0') {
    memset((void *)(lVar1 * param_4 + param_1[2]),0,(param_2 - lVar1) * param_4);
  }
  return uVar2;
}



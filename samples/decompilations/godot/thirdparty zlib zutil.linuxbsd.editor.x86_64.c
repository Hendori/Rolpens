
char * zlibVersion(void)

{
  return "1.3.1";
}



undefined8 zlibCompileFlags(void)

{
  return 0xa9;
}



undefined * zError(int param_1)

{
  undefined *puVar1;
  
  puVar1 = &_LC1;
  if (param_1 + 6U < 9) {
    puVar1 = *(undefined **)(z_errmsg + (long)(2 - param_1) * 8);
  }
  return puVar1;
}



void zcalloc(undefined8 param_1,int param_2,int param_3)

{
  malloc((ulong)(uint)(param_2 * param_3));
  return;
}



void zcfree(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}



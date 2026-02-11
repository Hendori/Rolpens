
size_t strnlen1(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = memchr(param_1,0,param_2);
  if (pvVar1 != (void *)0x0) {
    param_2 = (long)pvVar1 + (1 - (long)param_1);
  }
  return param_2;
}



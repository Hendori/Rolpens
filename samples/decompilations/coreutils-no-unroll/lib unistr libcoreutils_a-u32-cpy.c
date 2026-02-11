
void * u32_cpy(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  
  if (param_3 == 0) {
    return param_1;
  }
  pvVar1 = memcpy(param_1,param_2,param_3 << 2);
  return pvVar1;
}



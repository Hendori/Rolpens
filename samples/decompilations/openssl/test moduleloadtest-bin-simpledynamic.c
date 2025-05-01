
bool sd_load(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = dlopen(param_1,param_3);
  *param_2 = lVar1;
  return lVar1 != 0;
}



bool sd_sym(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = dlsym();
  *param_3 = lVar1;
  return lVar1 != 0;
}



bool sd_close(void)

{
  int iVar1;
  
  iVar1 = dlclose();
  return iVar1 == 0;
}



void sd_error(void)

{
  dlerror();
  return;
}



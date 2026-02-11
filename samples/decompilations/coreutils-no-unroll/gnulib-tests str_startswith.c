
undefined8 str_startswith(char *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  undefined4 extraout_var;
  
  __n = strlen(param_2);
  iVar1 = strncmp(param_1,param_2,__n);
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
}



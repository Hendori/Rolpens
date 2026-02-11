
void chmod_or_fchmod(char *param_1,int param_2,__mode_t param_3)

{
  if (param_2 != -1) {
    fchmod(param_2,param_3);
    return;
  }
  chmod(param_1,param_3);
  return;
}



int set_permissions(__mode_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != -1) {
    iVar1 = fchmod(param_3,*param_1);
    return -(uint)(iVar1 != 0);
  }
  iVar1 = chmod(param_2,*param_1);
  return -(uint)(iVar1 != 0);
}



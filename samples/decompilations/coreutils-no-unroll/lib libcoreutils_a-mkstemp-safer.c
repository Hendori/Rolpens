
void mkstemp_safer(char *param_1)

{
  int iVar1;
  
  iVar1 = mkstemp(param_1);
  fd_safer(iVar1);
  return;
}



void mkostemp_safer(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = mkostemp(param_1,param_2);
  fd_safer_flag(iVar1,param_2);
  return;
}



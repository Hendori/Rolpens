
void creat_safer(char *param_1,__mode_t param_2)

{
  int iVar1;
  
  iVar1 = creat(param_1,param_2);
  fd_safer(iVar1);
  return;
}



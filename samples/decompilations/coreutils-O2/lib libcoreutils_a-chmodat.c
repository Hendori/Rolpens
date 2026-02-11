
void chmodat(int param_1,char *param_2,__mode_t param_3)

{
  fchmodat(param_1,param_2,param_3,0);
  return;
}



void lchmodat(int param_1,char *param_2,__mode_t param_3)

{
  fchmodat(param_1,param_2,param_3,0x100);
  return;
}




void chownat(int param_1,char *param_2,__uid_t param_3,__gid_t param_4)

{
  fchownat(param_1,param_2,param_3,param_4,0);
  return;
}



void lchownat(int param_1,char *param_2,__uid_t param_3,__gid_t param_4)

{
  fchownat(param_1,param_2,param_3,param_4,0x100);
  return;
}



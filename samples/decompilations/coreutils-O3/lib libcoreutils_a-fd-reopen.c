
int fd_reopen(int param_1,char *param_2,int param_3,uint param_4)

{
  int iVar1;
  int __fd;
  int iVar2;
  int *piVar3;
  
  __fd = open(param_2,param_3,(ulong)param_4);
  if ((param_1 != __fd) && (-1 < __fd)) {
    iVar2 = dup2(__fd,param_1);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    close(__fd);
    *piVar3 = iVar1;
    return iVar2;
  }
  return __fd;
}




undefined4 pipe_safer(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = pipe(param_1);
  if (iVar1 == 0) {
    iVar1 = fd_safer(*param_1);
    *param_1 = iVar1;
    if (iVar1 < 0) {
      param_1 = param_1 + 1;
    }
    else {
      iVar1 = fd_safer(param_1[1]);
      param_1[1] = iVar1;
      if (-1 < iVar1) {
        return 0;
      }
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    close(*param_1);
    *piVar2 = iVar1;
  }
  return 0xffffffff;
}



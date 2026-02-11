
int rpl_pipe2(int *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(undefined8 *)param_1;
  if (-1 < have_pipe2_really_0) {
    iVar2 = pipe2(param_1,param_2);
    if ((-1 < iVar2) || (piVar4 = __errno_location(), *piVar4 != 0x26)) {
      have_pipe2_really_0 = 1;
      return iVar2;
    }
    have_pipe2_really_0 = -1;
  }
  if ((param_2 & 0xfff7f7ff) == 0) {
    iVar2 = pipe(param_1);
    if (-1 < iVar2) {
      if (((param_2 & 0x800) == 0) ||
         ((((uVar3 = rpl_fcntl(param_1[1],3,0), -1 < (int)uVar3 &&
            (iVar2 = rpl_fcntl(param_1[1],4,uVar3 | 0x800), iVar2 != -1)) &&
           (uVar3 = rpl_fcntl(*param_1,3,0), -1 < (int)uVar3)) &&
          (iVar2 = rpl_fcntl(*param_1,4,uVar3 | 0x800), iVar2 != -1)))) {
        if ((param_2 & 0x80000) == 0) {
          return 0;
        }
        uVar3 = rpl_fcntl(param_1[1],1,0);
        if (((-1 < (int)uVar3) && (iVar2 = rpl_fcntl(param_1[1],2,uVar3 | 1), iVar2 != -1)) &&
           ((uVar3 = rpl_fcntl(*param_1,1,0), -1 < (int)uVar3 &&
            (iVar2 = rpl_fcntl(*param_1,2,uVar3 | 1), iVar2 != -1)))) {
          return 0;
        }
      }
      piVar4 = __errno_location();
      iVar2 = *piVar4;
      close(*param_1);
      close(param_1[1]);
      *(undefined8 *)param_1 = uVar1;
      *piVar4 = iVar2;
    }
  }
  else {
    piVar4 = __errno_location();
    *piVar4 = 0x16;
  }
  return -1;
}



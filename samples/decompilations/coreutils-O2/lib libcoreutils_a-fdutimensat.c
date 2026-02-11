
int fdutimensat(int param_1,int param_2,char *param_3,timespec *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 < 0) {
    if (param_3 == (char *)0x0) goto LAB_00100070;
LAB_00100023:
    iVar1 = utimensat(param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = futimens(param_1,param_4);
    if ((iVar1 == -1) && (param_3 != (char *)0x0)) {
      piVar2 = __errno_location();
      if (*piVar2 != 0x26) {
        return -1;
      }
      goto LAB_00100023;
    }
  }
  if (iVar1 != 1) {
    return iVar1;
  }
LAB_00100070:
  piVar2 = __errno_location();
  *piVar2 = 9;
  return -1;
}




uint fd_safer(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (2 < param_1) {
    return param_1;
  }
  uVar2 = dup_safer();
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  close(param_1);
  *piVar3 = iVar1;
  return uVar2;
}



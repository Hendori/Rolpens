
void xcopy_acl_part_0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = quote();
  uVar2 = dcgettext("gnulib","preserving permissions for %s",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1);
  return;
}



int xcopy_acl(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = qcopy_acl();
  if (iVar1 == -2) {
    uVar2 = quote(param_1);
    piVar3 = __errno_location();
    error(0,*piVar3,&_LC2,uVar2);
  }
  else if (iVar1 == -1) {
    xcopy_acl_part_0(param_3);
  }
  return iVar1;
}



int copy_acl(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = qcopy_acl();
  if (iVar1 == -2) {
    uVar2 = quote(param_1);
    piVar3 = __errno_location();
    error(0,*piVar3,&_LC2,uVar2);
  }
  else if (iVar1 == -1) {
    xcopy_acl_part_0(param_3);
  }
  return iVar1;
}



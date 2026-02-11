
int xcopy_acl(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = qcopy_acl();
  if (iVar1 == -2) {
    uVar2 = quote(param_1);
    piVar4 = __errno_location();
    error(0,*piVar4,&_LC0,uVar2);
  }
  else if (iVar1 == -1) {
    uVar2 = quote(param_3);
    uVar3 = dcgettext("gnulib","preserving permissions for %s",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar3,uVar2);
  }
  return iVar1;
}



void copy_acl(void)

{
  xcopy_acl();
  return;
}



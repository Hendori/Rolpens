
void xset_acl_part_0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar1 = quote();
  uVar2 = dcgettext("gnulib","setting permissions for %s",5);
  piVar3 = __errno_location();
  error(0,*piVar3,uVar2,uVar1);
  return;
}



ulong xset_acl(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = qset_acl();
  if ((int)uVar1 != 0) {
    xset_acl_part_0(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



ulong set_acl(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = qset_acl();
  if ((int)uVar1 != 0) {
    xset_acl_part_0(param_1);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}




int xset_acl(char *name,int desc,mode_t mode)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  
  uVar2 = quote(name,CONCAT44(in_register_00000034,desc),CONCAT44(in_register_00000014,mode));
  uVar3 = dcgettext("gnulib","setting permissions for %s",5);
  piVar4 = __errno_location();
  iVar1 = error(0,*piVar4,uVar3,uVar2);
  return iVar1;
}



/* WARNING: Unknown calling convention */

int xset_acl(char *name,int desc,mode_t mode)

{
  int iVar1;
  mode_t mode_00;
  
  iVar1 = qset_acl();
  if (iVar1 != 0) {
    xset_acl(name,desc,mode_00);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int set_acl(char *name,int desc,mode_t mode)

{
  int iVar1;
  mode_t mode_00;
  
  iVar1 = qset_acl();
  if (iVar1 != 0) {
    xset_acl(name,desc,mode_00);
  }
  return iVar1;
}



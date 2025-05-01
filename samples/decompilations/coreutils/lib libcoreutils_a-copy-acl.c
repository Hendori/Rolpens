
/* WARNING: Unknown calling convention */

int xcopy_acl(char *src_name,int source_desc,char *dst_name,int dest_desc,mode_t mode)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 in_register_0000000c;
  undefined4 in_register_00000034;
  
  iVar1 = qcopy_acl(src_name,CONCAT44(in_register_00000034,source_desc),dst_name,
                    CONCAT44(in_register_0000000c,dest_desc));
  if (iVar1 == -2) {
    uVar2 = quote(src_name);
    piVar4 = __errno_location();
    error(0,*piVar4,&_LC0,uVar2);
  }
  else if (iVar1 == -1) {
    uVar2 = quote(dst_name);
    uVar3 = dcgettext("gnulib","preserving permissions for %s",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar3,uVar2);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int copy_acl(char *src_name,int source_desc,char *dst_name,int dest_desc,mode_t mode)

{
  int iVar1;
  
  iVar1 = xcopy_acl(src_name,source_desc,dst_name,dest_desc,mode);
  return iVar1;
}



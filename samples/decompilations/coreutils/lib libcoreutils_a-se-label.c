
/* WARNING: Unknown calling convention */

int selabel_lookup(selabel_handle *hnd,char **context,char *key,int type)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return -1;
}



undefined8 selabel_lookup_raw(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return 0xffffffff;
}



/* WARNING: Unknown calling convention */

selabel_handle * selabel_open(int backend,selinux_opt *options,uint nopt)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return (selabel_handle *)0x0;
}



/* WARNING: Unknown calling convention */

void selabel_close(selabel_handle *hnd)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  *piVar1 = 0x5f;
  return;
}



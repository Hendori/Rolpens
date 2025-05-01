
/* WARNING: Unknown calling convention */

char * file_type(stat *st)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = c_file_type();
  pcVar2 = (char *)dcgettext("gnulib",uVar1,5);
  return pcVar2;
}



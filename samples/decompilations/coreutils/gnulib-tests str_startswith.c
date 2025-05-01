
/* WARNING: Unknown calling convention */

_Bool str_startswith(char *string,char *prefix)

{
  int iVar1;
  size_t __n;
  
  __n = strlen(prefix);
  iVar1 = strncmp(string,prefix,__n);
  return iVar1 == 0;
}



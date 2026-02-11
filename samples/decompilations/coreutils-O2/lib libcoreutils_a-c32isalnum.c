
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int c32isalnum(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswalnum(__wc);
  return iVar1;
}



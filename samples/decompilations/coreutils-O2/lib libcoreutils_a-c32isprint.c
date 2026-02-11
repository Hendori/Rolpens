
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int c32isprint(wint_t __wc)

{
  int iVar1;
  
  iVar1 = iswprint(__wc);
  return iVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int c32_apply_type_test(wint_t __wc,wctype_t __desc)

{
  int iVar1;
  
  iVar1 = iswctype(__wc,__desc);
  return iVar1;
}



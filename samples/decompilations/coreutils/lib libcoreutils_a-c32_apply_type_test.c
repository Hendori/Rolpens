
/* WARNING: Unknown calling convention */

int c32_apply_type_test(wint_t wc,c32_type_test_t property)

{
  int iVar1;
  
  iVar1 = iswctype(wc,property);
  return iVar1;
}




/* WARNING: Unknown calling convention */

c32_type_test_t c32_get_type_test(char *name)

{
  wctype_t wVar1;
  
  wVar1 = wctype(name);
  return wVar1;
}



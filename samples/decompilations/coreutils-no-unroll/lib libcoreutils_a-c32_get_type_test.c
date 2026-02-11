
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

wctype_t c32_get_type_test(char *__property)

{
  wctype_t wVar1;
  
  wVar1 = wctype(__property);
  return wVar1;
}




/* WARNING: Unknown calling convention */

wchar_t c32width(char32_t wc)

{
  wchar_t wVar1;
  
  wVar1 = wcwidth(wc);
  return wVar1;
}




bool ossl_ctype_check(uint param_1,ushort param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 < 0x80) {
    bVar1 = (*(ushort *)(ctype_char_map + (long)(int)param_1 * 2) & param_2) != 0;
  }
  return bVar1;
}



bool ossl_isdigit(int param_1)

{
  return param_1 - 0x30U < 10;
}



bool ossl_isupper(int param_1)

{
  return param_1 - 0x41U < 0x1a;
}



bool ossl_islower(int param_1)

{
  return param_1 - 0x61U < 0x1a;
}



uint ossl_tolower(uint param_1)

{
  if (param_1 - 0x41 < 0x1a) {
    param_1 = param_1 ^ 0x20;
  }
  return param_1;
}



uint ossl_toupper(uint param_1)

{
  if (param_1 - 0x61 < 0x1a) {
    param_1 = param_1 ^ 0x20;
  }
  return param_1;
}



bool ossl_ascii_isdigit(int param_1)

{
  return param_1 - 0x30U < 10;
}



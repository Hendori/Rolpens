
bool ossl_eckem_modename2id(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = OPENSSL_strcasecmp(param_1,"DHKEM");
    return iVar1 == 0;
  }
  return false;
}



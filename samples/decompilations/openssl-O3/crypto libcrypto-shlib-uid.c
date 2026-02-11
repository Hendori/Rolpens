
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int OPENSSL_issetugid(void)

{
  long lVar1;
  
  lVar1 = getauxval(0x17);
  return (int)(lVar1 != 0);
}



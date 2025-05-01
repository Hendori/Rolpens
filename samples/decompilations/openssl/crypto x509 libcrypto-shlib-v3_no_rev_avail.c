
undefined8 i2r_NO_REV_AVAIL(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * r2i_NO_REV_AVAIL(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



void i2s_NO_REV_AVAIL(void)

{
  CRYPTO_strdup("NULL","crypto/x509/v3_no_rev_avail.c",0x20);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_NO_REV_AVAIL(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



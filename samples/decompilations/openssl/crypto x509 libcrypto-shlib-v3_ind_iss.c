
undefined8 i2r_INDIRECT_ISSUER(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * r2i_INDIRECT_ISSUER(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



void i2s_INDIRECT_ISSUER(void)

{
  CRYPTO_strdup("NULL","crypto/x509/v3_ind_iss.c",0x20);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_INDIRECT_ISSUER(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



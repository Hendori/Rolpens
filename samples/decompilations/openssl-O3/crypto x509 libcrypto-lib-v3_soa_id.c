
undefined8 i2r_SOA_IDENTIFIER(void)

{
  return 1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * r2i_SOA_IDENTIFIER(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}



void i2s_SOA_IDENTIFIER(void)

{
  CRYPTO_strdup("NULL","crypto/x509/v3_soa_id.c",0x20);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * s2i_SOA_IDENTIFIER(void)

{
  ASN1_NULL *pAVar1;
  
  pAVar1 = ASN1_NULL_new();
  return pAVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_INFO * X509_INFO_new(void)

{
  X509_INFO *pXVar1;
  
  pXVar1 = (X509_INFO *)CRYPTO_zalloc(0x40,"crypto/asn1/x_info.c",0x14);
  return pXVar1;
}



void X509_INFO_free(X509_INFO *a)

{
  if (a != (X509_INFO *)0x0) {
    X509_free(a->x509);
    X509_CRL_free(a->crl);
    X509_PKEY_free(a->x_pkey);
    CRYPTO_free(a->enc_data);
    CRYPTO_free(a);
    return;
  }
  return;
}



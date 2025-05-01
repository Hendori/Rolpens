
void X509_PKEY_free(X509_PKEY *a)

{
  if (a != (X509_PKEY *)0x0) {
    X509_ALGOR_free(a->enc_algor);
    ASN1_OCTET_STRING_free(a->enc_pkey);
    EVP_PKEY_free(a->dec_pkey);
    if (a->key_free != 0) {
      CRYPTO_free(a->key_data);
    }
    CRYPTO_free(a);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_PKEY * X509_PKEY_new(void)

{
  X509_PKEY *a;
  X509_ALGOR *pXVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  a = (X509_PKEY *)CRYPTO_zalloc(0x50,"crypto/asn1/x_pkey.c",0x14);
  if (a != (X509_PKEY *)0x0) {
    pXVar1 = X509_ALGOR_new();
    a->enc_algor = pXVar1;
    pAVar2 = ASN1_OCTET_STRING_new();
    a->enc_pkey = pAVar2;
    if ((a->enc_algor != (X509_ALGOR *)0x0) && (pAVar2 != (ASN1_OCTET_STRING *)0x0)) {
      return a;
    }
    X509_PKEY_free(a);
    ERR_new();
    ERR_set_debug("crypto/asn1/x_pkey.c",0x1c,"X509_PKEY_new");
    ERR_set_error(0xd,0x8000d,0);
  }
  return (X509_PKEY *)0x0;
}



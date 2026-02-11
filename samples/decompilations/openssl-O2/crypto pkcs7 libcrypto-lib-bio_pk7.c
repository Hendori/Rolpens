
BIO * BIO_new_PKCS7(BIO *out,PKCS7 *p7)

{
  ASN1_ITEM *it;
  BIO *pBVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  pBVar1 = BIO_new_NDEF(out,(ASN1_VALUE *)p7,it);
  return pBVar1;
}



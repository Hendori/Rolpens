
X509_REQ * PEM_read_bio_X509_REQ(BIO *bp,X509_REQ **x,undefined1 *cb,void *u)

{
  X509_REQ *pXVar1;
  
  pXVar1 = (X509_REQ *)PEM_ASN1_read_bio(&d2i_X509_REQ,"CERTIFICATE REQUEST",bp,x,cb,u);
  return pXVar1;
}



X509_REQ * PEM_read_X509_REQ(FILE *fp,X509_REQ **x,undefined1 *cb,void *u)

{
  X509_REQ *pXVar1;
  
  pXVar1 = (X509_REQ *)PEM_ASN1_read(&d2i_X509_REQ,"CERTIFICATE REQUEST",fp,x,cb,u);
  return pXVar1;
}



int PEM_write_bio_X509_REQ(BIO *bp,X509_REQ *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_X509_REQ,"CERTIFICATE REQUEST",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0
                             ,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_X509_REQ(FILE *fp,X509_REQ *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_X509_REQ,"CERTIFICATE REQUEST",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_bio_X509_REQ_NEW(BIO *bp,X509_REQ *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_X509_REQ,"NEW CERTIFICATE REQUEST",bp,x,(EVP_CIPHER *)0x0,
                             (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_X509_REQ_NEW(FILE *fp,X509_REQ *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_X509_REQ,"NEW CERTIFICATE REQUEST",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0
                         ,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



X509_CRL * PEM_read_bio_X509_CRL(BIO *bp,X509_CRL **x,undefined1 *cb,void *u)

{
  X509_CRL *pXVar1;
  
  pXVar1 = (X509_CRL *)PEM_ASN1_read_bio(&d2i_X509_CRL,"X509 CRL",bp,x,cb,u);
  return pXVar1;
}



X509_CRL * PEM_read_X509_CRL(FILE *fp,X509_CRL **x,undefined1 *cb,void *u)

{
  X509_CRL *pXVar1;
  
  pXVar1 = (X509_CRL *)PEM_ASN1_read(&d2i_X509_CRL,"X509 CRL",fp,x,cb,u);
  return pXVar1;
}



int PEM_write_bio_X509_CRL(BIO *bp,X509_CRL *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_X509_CRL,"X509 CRL",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_X509_CRL(FILE *fp,X509_CRL *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_X509_CRL,"X509 CRL",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



void PEM_read_bio_X509_PUBKEY(BIO *param_1,void **param_2,undefined1 *param_3,void *param_4)

{
  PEM_ASN1_read_bio(&d2i_X509_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4);
  return;
}



void PEM_read_X509_PUBKEY(FILE *param_1,void **param_2,undefined1 *param_3,void *param_4)

{
  PEM_ASN1_read(&d2i_X509_PUBKEY,"PUBLIC KEY",param_1,param_2,param_3,param_4);
  return;
}



void PEM_write_bio_X509_PUBKEY(BIO *param_1,void *param_2)

{
  PEM_ASN1_write_bio(&i2d_X509_PUBKEY,"PUBLIC KEY",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                     (undefined1 *)0x0,(void *)0x0);
  return;
}



void PEM_write_X509_PUBKEY(FILE *param_1,void *param_2)

{
  PEM_ASN1_write(&i2d_X509_PUBKEY,"PUBLIC KEY",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                 (undefined1 *)0x0,(void *)0x0);
  return;
}



PKCS7 * PEM_read_bio_PKCS7(BIO *bp,PKCS7 **x,undefined1 *cb,void *u)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)PEM_ASN1_read_bio(&d2i_PKCS7,"PKCS7",bp,x,cb,u);
  return pPVar1;
}



PKCS7 * PEM_read_PKCS7(FILE *fp,PKCS7 **x,undefined1 *cb,void *u)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)PEM_ASN1_read(&d2i_PKCS7,"PKCS7",fp,x,cb,u);
  return pPVar1;
}



int PEM_write_bio_PKCS7(BIO *bp,PKCS7 *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_PKCS7,"PKCS7",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_PKCS7(FILE *fp,PKCS7 *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_PKCS7,"PKCS7",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,(undefined1 *)0x0,
                         (void *)0x0);
  return iVar1;
}



NETSCAPE_CERT_SEQUENCE *
PEM_read_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp,NETSCAPE_CERT_SEQUENCE **x,undefined1 *cb,void *u)

{
  NETSCAPE_CERT_SEQUENCE *pNVar1;
  
  pNVar1 = (NETSCAPE_CERT_SEQUENCE *)
           PEM_ASN1_read_bio(&d2i_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",bp,x,cb,u);
  return pNVar1;
}



NETSCAPE_CERT_SEQUENCE *
PEM_read_NETSCAPE_CERT_SEQUENCE(FILE *fp,NETSCAPE_CERT_SEQUENCE **x,undefined1 *cb,void *u)

{
  NETSCAPE_CERT_SEQUENCE *pNVar1;
  
  pNVar1 = (NETSCAPE_CERT_SEQUENCE *)
           PEM_ASN1_read(&d2i_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",fp,x,cb,u);
  return pNVar1;
}



int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(BIO *bp,NETSCAPE_CERT_SEQUENCE *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",bp,x,(EVP_CIPHER *)0x0,
                             (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_NETSCAPE_CERT_SEQUENCE(FILE *fp,NETSCAPE_CERT_SEQUENCE *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_NETSCAPE_CERT_SEQUENCE,"CERTIFICATE",fp,x,(EVP_CIPHER *)0x0,
                         (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



RSA * PEM_read_bio_RSAPrivateKey(BIO *bp,RSA **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  rsa_st *prVar1;
  
  pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    prVar1 = EVP_PKEY_get1_RSA(pkey);
    EVP_PKEY_free(pkey);
    if (prVar1 != (rsa_st *)0x0) {
      if (x != (RSA **)0x0) {
        RSA_free(*x);
        *x = prVar1;
      }
      return prVar1;
    }
  }
  return (RSA *)0x0;
}



RSA * PEM_read_RSAPrivateKey(FILE *fp,RSA **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  rsa_st *prVar1;
  
  pkey = PEM_read_PrivateKey(fp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    prVar1 = EVP_PKEY_get1_RSA(pkey);
    EVP_PKEY_free(pkey);
    if (prVar1 != (rsa_st *)0x0) {
      if (x != (RSA **)0x0) {
        RSA_free(*x);
        *x = prVar1;
      }
      return prVar1;
    }
  }
  return (RSA *)0x0;
}



int PEM_write_bio_RSAPrivateKey
              (BIO *bp,RSA *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_RSAPrivateKey,"RSA PRIVATE KEY",bp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



int PEM_write_RSAPrivateKey
              (FILE *fp,RSA *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_RSAPrivateKey,"RSA PRIVATE KEY",fp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



RSA * PEM_read_bio_RSAPublicKey(BIO *bp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)PEM_ASN1_read_bio(&d2i_RSAPublicKey,"RSA PUBLIC KEY",bp,x,cb,u);
  return pRVar1;
}



RSA * PEM_read_RSAPublicKey(FILE *fp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)PEM_ASN1_read(&d2i_RSAPublicKey,"RSA PUBLIC KEY",fp,x,cb,u);
  return pRVar1;
}



int PEM_write_bio_RSAPublicKey(BIO *bp,RSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_RSAPublicKey,"RSA PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,
                             0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_RSAPublicKey(FILE *fp,RSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_RSAPublicKey,"RSA PUBLIC KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



RSA * PEM_read_bio_RSA_PUBKEY(BIO *bp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)PEM_ASN1_read_bio(&d2i_RSA_PUBKEY,"PUBLIC KEY",bp,x,cb,u);
  return pRVar1;
}



RSA * PEM_read_RSA_PUBKEY(FILE *fp,RSA **x,undefined1 *cb,void *u)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)PEM_ASN1_read(&d2i_RSA_PUBKEY,"PUBLIC KEY",fp,x,cb,u);
  return pRVar1;
}



int PEM_write_bio_RSA_PUBKEY(BIO *bp,RSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_RSA_PUBKEY,"PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_RSA_PUBKEY(FILE *fp,RSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_RSA_PUBKEY,"PUBLIC KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



DSA * PEM_read_bio_DSAPrivateKey(BIO *bp,DSA **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  dsa_st *pdVar1;
  
  pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    pdVar1 = EVP_PKEY_get1_DSA(pkey);
    EVP_PKEY_free(pkey);
    if (pdVar1 != (dsa_st *)0x0) {
      if (x != (DSA **)0x0) {
        DSA_free(*x);
        *x = pdVar1;
      }
      return pdVar1;
    }
  }
  return (DSA *)0x0;
}



int PEM_write_bio_DSAPrivateKey
              (BIO *bp,DSA *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_DSAPrivateKey,"DSA PRIVATE KEY",bp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



int PEM_write_DSAPrivateKey
              (FILE *fp,DSA *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_DSAPrivateKey,"DSA PRIVATE KEY",fp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



DSA * PEM_read_bio_DSA_PUBKEY(BIO *bp,DSA **x,undefined1 *cb,void *u)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)PEM_ASN1_read_bio(&d2i_DSA_PUBKEY,"PUBLIC KEY",bp,x,cb,u);
  return pDVar1;
}



DSA * PEM_read_DSA_PUBKEY(FILE *fp,DSA **x,undefined1 *cb,void *u)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)PEM_ASN1_read(&d2i_DSA_PUBKEY,"PUBLIC KEY",fp,x,cb,u);
  return pDVar1;
}



int PEM_write_bio_DSA_PUBKEY(BIO *bp,DSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_DSA_PUBKEY,"PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_DSA_PUBKEY(FILE *fp,DSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_DSA_PUBKEY,"PUBLIC KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



DSA * PEM_read_DSAPrivateKey(FILE *fp,DSA **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  dsa_st *pdVar1;
  
  pkey = PEM_read_PrivateKey(fp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    pdVar1 = EVP_PKEY_get1_DSA(pkey);
    EVP_PKEY_free(pkey);
    if (pdVar1 != (dsa_st *)0x0) {
      if (x != (DSA **)0x0) {
        DSA_free(*x);
        *x = pdVar1;
      }
      return pdVar1;
    }
  }
  return (DSA *)0x0;
}



DSA * PEM_read_bio_DSAparams(BIO *bp,DSA **x,undefined1 *cb,void *u)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)PEM_ASN1_read_bio(&d2i_DSAparams,"DSA PARAMETERS",bp,x,cb,u);
  return pDVar1;
}



DSA * PEM_read_DSAparams(FILE *fp,DSA **x,undefined1 *cb,void *u)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)PEM_ASN1_read(&d2i_DSAparams,"DSA PARAMETERS",fp,x,cb,u);
  return pDVar1;
}



int PEM_write_bio_DSAparams(BIO *bp,DSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_DSAparams,"DSA PARAMETERS",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_DSAparams(FILE *fp,DSA *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_DSAparams,"DSA PARAMETERS",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



EC_KEY * PEM_read_bio_ECPrivateKey(BIO *bp,EC_KEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  ec_key_st *peVar1;
  
  pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    peVar1 = EVP_PKEY_get1_EC_KEY(pkey);
    EVP_PKEY_free(pkey);
    if (peVar1 != (ec_key_st *)0x0) {
      if (x != (EC_KEY **)0x0) {
        EC_KEY_free(*x);
        *x = peVar1;
      }
      return peVar1;
    }
  }
  return (EC_KEY *)0x0;
}



EC_GROUP * PEM_read_bio_ECPKParameters(BIO *bp,EC_GROUP **x,undefined1 *cb,void *u)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)PEM_ASN1_read_bio(&d2i_ECPKParameters,"EC PARAMETERS",bp,x,cb,u);
  return pEVar1;
}



EC_GROUP * PEM_read_ECPKParameters(FILE *fp,EC_GROUP **x,undefined1 *cb,void *u)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)PEM_ASN1_read(&d2i_ECPKParameters,"EC PARAMETERS",fp,x,cb,u);
  return pEVar1;
}



int PEM_write_bio_ECPKParameters(BIO *bp,EC_GROUP *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_ECPKParameters,"EC PARAMETERS",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0
                             ,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_ECPKParameters(FILE *fp,EC_GROUP *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_ECPKParameters,"EC PARAMETERS",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_bio_ECPrivateKey
              (BIO *bp,EC_KEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_ECPrivateKey,"EC PRIVATE KEY",bp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



int PEM_write_ECPrivateKey
              (FILE *fp,EC_KEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_ECPrivateKey,"EC PRIVATE KEY",fp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



EC_KEY * PEM_read_bio_EC_PUBKEY(BIO *bp,EC_KEY **x,undefined1 *cb,void *u)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)PEM_ASN1_read_bio(&d2i_EC_PUBKEY,"PUBLIC KEY",bp,x,cb,u);
  return pEVar1;
}



EC_KEY * PEM_read_EC_PUBKEY(FILE *fp,EC_KEY **x,undefined1 *cb,void *u)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)PEM_ASN1_read(&d2i_EC_PUBKEY,"PUBLIC KEY",fp,x,cb,u);
  return pEVar1;
}



int PEM_write_bio_EC_PUBKEY(BIO *bp,EC_KEY *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_EC_PUBKEY,"PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_EC_PUBKEY(FILE *fp,EC_KEY *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_EC_PUBKEY,"PUBLIC KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



EC_KEY * PEM_read_ECPrivateKey(FILE *fp,EC_KEY **x,undefined1 *cb,void *u)

{
  EVP_PKEY *pkey;
  ec_key_st *peVar1;
  
  pkey = PEM_read_PrivateKey(fp,(EVP_PKEY **)0x0,cb,u);
  if (pkey != (EVP_PKEY *)0x0) {
    peVar1 = EVP_PKEY_get1_EC_KEY(pkey);
    EVP_PKEY_free(pkey);
    if (peVar1 != (ec_key_st *)0x0) {
      if (x != (EC_KEY **)0x0) {
        EC_KEY_free(*x);
        *x = peVar1;
      }
      return peVar1;
    }
  }
  return (EC_KEY *)0x0;
}



int PEM_write_bio_DHparams(BIO *bp,DH *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_DHparams,"DH PARAMETERS",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_DHparams(FILE *fp,DH *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_DHparams,"DH PARAMETERS",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



void PEM_write_bio_DHxparams(BIO *param_1,void *param_2)

{
  PEM_ASN1_write_bio(&i2d_DHxparams,"X9.42 DH PARAMETERS",param_1,param_2,(EVP_CIPHER *)0x0,
                     (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  return;
}



void PEM_write_DHxparams(FILE *param_1,void *param_2)

{
  PEM_ASN1_write(&i2d_DHxparams,"X9.42 DH PARAMETERS",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0
                 ,0,(undefined1 *)0x0,(void *)0x0);
  return;
}



DH * PEM_read_bio_DHparams(BIO *bp,DH **x,undefined1 *cb,void *u)

{
  int iVar1;
  DH *pDVar2;
  long in_FS_OFFSET;
  char *local_40;
  uchar *local_38;
  uchar *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (char *)0x0;
  local_38 = (uchar *)0x0;
  local_30 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_30,&local_28,&local_40,"DH PARAMETERS",bp,cb,u);
  if (iVar1 == 0) {
    pDVar2 = (DH *)0x0;
  }
  else {
    local_38 = local_30;
    iVar1 = strcmp(local_40,"X9.42 DH PARAMETERS");
    if (iVar1 == 0) {
      pDVar2 = (DH *)d2i_DHxparams();
    }
    else {
      pDVar2 = d2i_DHparams(x,&local_38,local_28);
    }
    if (pDVar2 == (DH *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pem/pem_all.c",0xca,"PEM_read_bio_DHparams");
      ERR_set_error(9,0x8000d,0);
    }
    CRYPTO_free(local_40);
    CRYPTO_free(local_30);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pDVar2;
}



DH * PEM_read_DHparams(FILE *fp,DH **x,undefined1 *cb,void *u)

{
  BIO_METHOD *type;
  BIO *bp;
  DH *pDVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    pDVar1 = (DH *)0x0;
    ERR_set_debug("crypto/pem/pem_all.c",0xd7,"PEM_read_DHparams");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    pDVar1 = PEM_read_bio_DHparams(bp,x,cb,u);
    BIO_free(bp);
  }
  return pDVar1;
}



int PEM_write_bio_PUBKEY(BIO *bp,EVP_PKEY *x)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(x,0x86,&_LC16,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_bio(uVar2,bp);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write_bio(&i2d_PUBKEY,"PUBLIC KEY",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_bio_PUBKEY_ex(BIO *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x86,&_LC16,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_bio(uVar2,param_1);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write_bio(&i2d_PUBKEY,"PUBLIC KEY",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0
                             ,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_PUBKEY(FILE *fp,EVP_PKEY *x)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(x,0x86,&_LC16,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_fp(uVar2,fp);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write(&i2d_PUBKEY,"PUBLIC KEY",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_PUBKEY_ex(FILE *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = OSSL_ENCODER_CTX_new_for_pkey(param_2,0x86,&_LC16,"SubjectPublicKeyInfo");
  iVar1 = OSSL_ENCODER_CTX_get_num_encoders(uVar2);
  if (iVar1 != 0) {
    iVar1 = OSSL_ENCODER_to_fp(uVar2,param_1);
    OSSL_ENCODER_CTX_free(uVar2);
    return iVar1;
  }
  OSSL_ENCODER_CTX_free(uVar2);
  iVar1 = PEM_ASN1_write(&i2d_PUBKEY,"PUBLIC KEY",param_1,param_2,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



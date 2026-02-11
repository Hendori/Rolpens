
void * simple_get_asn1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      ASN1_ITEM *param_5)

{
  ASN1_ITEM *pAVar1;
  undefined8 uVar2;
  BIO *in;
  void *pvVar3;
  
  pAVar1 = (ASN1_ITEM *)X509_CRL_it();
  uVar2 = 0x19000;
  if (param_5 == pAVar1) {
    uVar2 = 0x2000000;
  }
  in = (BIO *)OSSL_HTTP_get(param_1,0,0,param_2,param_3,0,0,0x400,0,0,1,uVar2,param_4);
  pvVar3 = ASN1_item_d2i_bio(param_5,in,(void *)0x0);
  BIO_free(in);
  return pvVar3;
}



int X509_verify(X509 *a,EVP_PKEY *r)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ASIdentifiers_st *pAVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = X509_ALGOR_cmp((X509_ALGOR *)&a->altname,(X509_ALGOR *)&a->name);
  iVar5 = 0;
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(a[1].sha1_hash + 8);
    uVar2 = *(undefined8 *)a[1].sha1_hash;
    pAVar3 = a[1].rfc3779_asid;
    uVar6 = X509_CINF_it();
    iVar5 = ASN1_item_verify_ex(uVar6,&a->altname,&a->rfc3779_addr,a,pAVar3,r,uVar2,uVar1);
  }
  return iVar5;
}



undefined8 X509_REQ_verify_ex(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = X509_REQ_get_version();
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = X509_REQ_INFO_it();
    uVar4 = ASN1_item_verify_ex(uVar3,param_1 + 0x38,uVar1,param_1,uVar4,param_2,param_3,param_4);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/x509/x_all.c",0x2f,"X509_REQ_verify_ex");
    ERR_set_error(0xb,0x91,0);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



int X509_REQ_verify(X509_REQ *a,EVP_PKEY *r)

{
  int iVar1;
  
  iVar1 = X509_REQ_verify_ex(a,r,0,0);
  return iVar1;
}



undefined1  [16] X509_ACERT_verify(long *param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  
  uVar2 = X509_ALGOR_cmp((X509_ALGOR *)(param_1 + 1),(X509_ALGOR *)(*param_1 + 0x40));
  uVar5 = (ulong)uVar2;
  uVar3 = 0;
  if (uVar2 == 0) {
    lVar1 = *param_1;
    uVar3 = X509_ACERT_INFO_it();
    uVar5 = 0;
    uVar3 = ASN1_item_verify_ex(uVar3,(X509_ALGOR *)(param_1 + 1),param_1 + 3,lVar1,0,param_2,0,0);
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



int NETSCAPE_SPKI_verify(NETSCAPE_SPKI *a,EVP_PKEY *r)

{
  NETSCAPE_SPKAC *data;
  ASN1_BIT_STRING *signature;
  ASN1_ITEM *it;
  int iVar1;
  
  data = a->spkac;
  signature = (ASN1_BIT_STRING *)a[1].spkac;
  it = (ASN1_ITEM *)NETSCAPE_SPKAC_it();
  iVar1 = ASN1_item_verify(it,(X509_ALGOR *)&a->sig_algor,signature,data,r);
  return iVar1;
}



int X509_sign(X509 *x,EVP_PKEY *pkey,EVP_MD *md)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (x == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x_all.c",0x50,__func___9);
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  uVar3 = X509_get0_extensions();
  iVar2 = OPENSSL_sk_num(uVar3);
  if ((0 < iVar2) && (iVar2 = X509_set_version(x,2), iVar2 == 0)) {
    return 0;
  }
  uVar3 = *(undefined8 *)(x[1].sha1_hash + 8);
  uVar1 = *(undefined8 *)x[1].sha1_hash;
  *(undefined4 *)&x->crldp = 1;
  uVar4 = X509_CINF_it();
  iVar2 = ASN1_item_sign_ex(uVar4,&x->name,&x->altname,&x->rfc3779_addr,x,0,pkey,md,uVar1,uVar3);
  return iVar2;
}



int X509_sign_ctx(X509 *x,EVP_MD_CTX *ctx)

{
  int iVar1;
  undefined8 uVar2;
  ASN1_ITEM *it;
  
  if (x == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x_all.c",0x67,"X509_sign_ctx");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  uVar2 = X509_get0_extensions();
  iVar1 = OPENSSL_sk_num(uVar2);
  if ((0 < iVar1) && (iVar1 = X509_set_version(x,2), iVar1 == 0)) {
    return 0;
  }
  *(undefined4 *)&x->crldp = 1;
  it = (ASN1_ITEM *)X509_CINF_it();
  iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&x->name,(X509_ALGOR *)&x->altname,
                             (ASN1_BIT_STRING *)&x->rfc3779_addr,x,ctx);
  return iVar1;
}



void X509_load_http(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = X509_it();
  simple_get_asn1(param_1,param_2,param_3,param_4,uVar1);
  return;
}



int X509_REQ_sign(X509_REQ *x,EVP_PKEY *pkey,EVP_MD *md)

{
  ASN1_BIT_STRING *pAVar1;
  X509_ALGOR *pXVar2;
  X509_ALGOR *pXVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (x != (X509_REQ *)0x0) {
    *(undefined4 *)&x->signature = 1;
    pAVar1 = x[3].signature;
    pXVar2 = x[3].sig_alg;
    pXVar3 = x[2].sig_alg;
    uVar5 = X509_REQ_INFO_it();
    iVar4 = ASN1_item_sign_ex(uVar5,&x[1].references,0,pXVar3,x,0,pkey,md,pXVar2,pAVar1);
    return iVar4;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x_all.c",0x90,"X509_REQ_sign");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_REQ_sign_ctx(X509_REQ *x,EVP_MD_CTX *ctx)

{
  ASN1_BIT_STRING *signature;
  int iVar1;
  ASN1_ITEM *it;
  
  if (x != (X509_REQ *)0x0) {
    *(undefined4 *)&x->signature = 1;
    signature = (ASN1_BIT_STRING *)x[2].sig_alg;
    it = (ASN1_ITEM *)X509_REQ_INFO_it();
    iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&x[1].references,(X509_ALGOR *)0x0,signature,x,ctx);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x_all.c",0x9c,"X509_REQ_sign_ctx");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_CRL_sign(X509_CRL *x,EVP_PKEY *pkey,EVP_MD *md)

{
  X509_CRL_INFO *pXVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (x != (X509_CRL *)0x0) {
    x->sha1_hash[8] = '\x01';
    x->sha1_hash[9] = '\0';
    x->sha1_hash[10] = '\0';
    x->sha1_hash[0xb] = '\0';
    pXVar1 = x[2].crl;
    pvVar2 = x[1].meth_data;
    uVar4 = X509_CRL_INFO_it();
    iVar3 = ASN1_item_sign_ex(uVar4,&x->sig_alg,x->sha1_hash + 0x10,&x->meth,x,0,pkey,md,pvVar2,
                              pXVar1);
    return iVar3;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x_all.c",0xa8,"X509_CRL_sign");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



int X509_CRL_sign_ctx(X509_CRL *x,EVP_MD_CTX *ctx)

{
  int iVar1;
  ASN1_ITEM *it;
  
  if (x != (X509_CRL *)0x0) {
    x->sha1_hash[8] = '\x01';
    x->sha1_hash[9] = '\0';
    x->sha1_hash[10] = '\0';
    x->sha1_hash[0xb] = '\0';
    it = (ASN1_ITEM *)X509_CRL_INFO_it();
    iVar1 = ASN1_item_sign_ctx(it,(X509_ALGOR *)&x->sig_alg,(X509_ALGOR *)(x->sha1_hash + 0x10),
                               (ASN1_BIT_STRING *)&x->meth,x,ctx);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x_all.c",0xb4,"X509_CRL_sign_ctx");
  ERR_set_error(0xb,0xc0102,0);
  return 0;
}



void X509_CRL_load_http(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = X509_CRL_it();
  simple_get_asn1(param_1,param_2,param_3,param_4,uVar1);
  return;
}



void X509_ACERT_sign(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = X509_ACERT_INFO_it();
  ASN1_item_sign_ex(uVar2,param_1 + 1,lVar1 + 0x40,param_1 + 3,lVar1,0,param_2,param_3,0,0);
  return;
}



void X509_ACERT_sign_ctx(undefined8 *param_1,EVP_MD_CTX *param_2)

{
  void *asn;
  ASN1_ITEM *it;
  
  asn = (void *)*param_1;
  it = (ASN1_ITEM *)X509_ACERT_INFO_it();
  ASN1_item_sign_ctx(it,(X509_ALGOR *)(param_1 + 1),(X509_ALGOR *)((long)asn + 0x40),
                     (ASN1_BIT_STRING *)(param_1 + 3),asn,param_2);
  return;
}



int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x,EVP_PKEY *pkey,EVP_MD *md)

{
  NETSCAPE_SPKAC *pNVar1;
  NETSCAPE_SPKAC *pNVar2;
  undefined8 uVar3;
  int iVar4;
  
  pNVar1 = x->spkac;
  pNVar2 = x[1].spkac;
  uVar3 = NETSCAPE_SPKAC_it();
  iVar4 = ASN1_item_sign_ex(uVar3,&x->sig_algor,0,pNVar2,pNVar1,0,pkey,md,0,0);
  return iVar4;
}



X509 * d2i_X509_fp(FILE *fp,X509 **x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i_fp(it,fp,x509);
  return pXVar1;
}



int i2d_X509_fp(FILE *fp,X509 *x509)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,x509);
  return iVar1;
}



X509 * d2i_X509_bio(BIO *bp,X509 **x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i_bio(it,bp,x509);
  return pXVar1;
}



int i2d_X509_bio(BIO *bp,X509 *x509)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,x509);
  return iVar1;
}



X509_CRL * d2i_X509_CRL_fp(FILE *fp,X509_CRL **crl)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_d2i_fp(it,fp,crl);
  return pXVar1;
}



int i2d_X509_CRL_fp(FILE *fp,X509_CRL *crl)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,crl);
  return iVar1;
}



X509_CRL * d2i_X509_CRL_bio(BIO *bp,X509_CRL **crl)

{
  ASN1_ITEM *it;
  X509_CRL *pXVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  pXVar1 = (X509_CRL *)ASN1_item_d2i_bio(it,bp,crl);
  return pXVar1;
}



int i2d_X509_CRL_bio(BIO *bp,X509_CRL *crl)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CRL_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,crl);
  return iVar1;
}



PKCS7 * d2i_PKCS7_fp(FILE *fp,PKCS7 **p7)

{
  undefined8 uVar1;
  PKCS7 *pPVar2;
  uchar *puVar3;
  
  if (p7 == (PKCS7 **)0x0) {
    pPVar2 = (PKCS7 *)0x0;
    puVar3 = (uchar *)0x0;
  }
  else {
    pPVar2 = *p7;
    puVar3 = (uchar *)0x0;
    if (pPVar2 != (PKCS7 *)0x0) {
      puVar3 = pPVar2[1].asn1;
      pPVar2 = (PKCS7 *)pPVar2[1].length;
    }
  }
  uVar1 = PKCS7_it();
  pPVar2 = (PKCS7 *)ASN1_item_d2i_fp_ex(uVar1,fp,p7,puVar3,pPVar2);
  if (pPVar2 != (PKCS7 *)0x0) {
    ossl_pkcs7_resolve_libctx(pPVar2);
  }
  return pPVar2;
}



int i2d_PKCS7_fp(FILE *fp,PKCS7 *p7)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,p7);
  return iVar1;
}



PKCS7 * d2i_PKCS7_bio(BIO *bp,PKCS7 **p7)

{
  undefined8 uVar1;
  PKCS7 *pPVar2;
  uchar *puVar3;
  
  if (p7 == (PKCS7 **)0x0) {
    pPVar2 = (PKCS7 *)0x0;
    puVar3 = (uchar *)0x0;
  }
  else {
    pPVar2 = *p7;
    puVar3 = (uchar *)0x0;
    if (pPVar2 != (PKCS7 *)0x0) {
      puVar3 = pPVar2[1].asn1;
      pPVar2 = (PKCS7 *)pPVar2[1].length;
    }
  }
  uVar1 = PKCS7_it();
  pPVar2 = (PKCS7 *)ASN1_item_d2i_bio_ex(uVar1,bp,p7,puVar3,pPVar2);
  if (pPVar2 != (PKCS7 *)0x0) {
    ossl_pkcs7_resolve_libctx(pPVar2);
  }
  return pPVar2;
}



int i2d_PKCS7_bio(BIO *bp,PKCS7 *p7)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,p7);
  return iVar1;
}



X509_REQ * d2i_X509_REQ_fp(FILE *fp,X509_REQ **req)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_d2i_fp(it,fp,req);
  return pXVar1;
}



int i2d_X509_REQ_fp(FILE *fp,X509_REQ *req)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,req);
  return iVar1;
}



X509_REQ * d2i_X509_REQ_bio(BIO *bp,X509_REQ **req)

{
  undefined8 uVar1;
  X509_REQ *pXVar2;
  X509_ALGOR *pXVar3;
  
  if (req == (X509_REQ **)0x0) {
    pXVar2 = (X509_REQ *)0x0;
    pXVar3 = (X509_ALGOR *)0x0;
  }
  else {
    pXVar2 = *req;
    pXVar3 = (X509_ALGOR *)0x0;
    if (pXVar2 != (X509_REQ *)0x0) {
      pXVar3 = pXVar2[3].sig_alg;
      pXVar2 = (X509_REQ *)pXVar2[3].signature;
    }
  }
  uVar1 = X509_REQ_it();
  pXVar2 = (X509_REQ *)ASN1_item_d2i_bio_ex(uVar1,bp,req,pXVar3,pXVar2);
  return pXVar2;
}



int i2d_X509_REQ_bio(BIO *bp,X509_REQ *req)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,req);
  return iVar1;
}



RSA * d2i_RSAPrivateKey_fp(FILE *fp,RSA **rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i_fp(it,fp,rsa);
  return pRVar1;
}



int i2d_RSAPrivateKey_fp(FILE *fp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,rsa);
  return iVar1;
}



RSA * d2i_RSAPublicKey_fp(FILE *fp,RSA **rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i_fp(it,fp,rsa);
  return pRVar1;
}



RSA * d2i_RSA_PUBKEY_fp(FILE *fp,RSA **rsa)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)ASN1_d2i_fp((xnew *)&RSA_new,&d2i_RSA_PUBKEY,fp,rsa);
  return pRVar1;
}



int i2d_RSAPublicKey_fp(FILE *fp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,rsa);
  return iVar1;
}



int i2d_RSA_PUBKEY_fp(FILE *fp,RSA *rsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_RSA_PUBKEY,fp,rsa);
  return iVar1;
}



RSA * d2i_RSAPrivateKey_bio(BIO *bp,RSA **rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i_bio(it,bp,rsa);
  return pRVar1;
}



int i2d_RSAPrivateKey_bio(BIO *bp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,rsa);
  return iVar1;
}



RSA * d2i_RSAPublicKey_bio(BIO *bp,RSA **rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i_bio(it,bp,rsa);
  return pRVar1;
}



RSA * d2i_RSA_PUBKEY_bio(BIO *bp,RSA **rsa)

{
  RSA *pRVar1;
  
  pRVar1 = (RSA *)ASN1_d2i_bio((xnew *)&RSA_new,&d2i_RSA_PUBKEY,bp,rsa);
  return pRVar1;
}



int i2d_RSAPublicKey_bio(BIO *bp,RSA *rsa)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,rsa);
  return iVar1;
}



int i2d_RSA_PUBKEY_bio(BIO *bp,RSA *rsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_RSA_PUBKEY,bp,(uchar *)rsa);
  return iVar1;
}



DSA * d2i_DSAPrivateKey_fp(FILE *fp,DSA **dsa)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_d2i_fp((xnew *)&DSA_new,&d2i_DSAPrivateKey,fp,dsa);
  return pDVar1;
}



int i2d_DSAPrivateKey_fp(FILE *fp,DSA *dsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_DSAPrivateKey,fp,dsa);
  return iVar1;
}



DSA * d2i_DSA_PUBKEY_fp(FILE *fp,DSA **dsa)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_d2i_fp((xnew *)&DSA_new,&d2i_DSA_PUBKEY,fp,dsa);
  return pDVar1;
}



int i2d_DSA_PUBKEY_fp(FILE *fp,DSA *dsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_DSA_PUBKEY,fp,dsa);
  return iVar1;
}



DSA * d2i_DSAPrivateKey_bio(BIO *bp,DSA **dsa)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_d2i_bio((xnew *)&DSA_new,&d2i_DSAPrivateKey,bp,dsa);
  return pDVar1;
}



int i2d_DSAPrivateKey_bio(BIO *bp,DSA *dsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_DSAPrivateKey,bp,(uchar *)dsa);
  return iVar1;
}



DSA * d2i_DSA_PUBKEY_bio(BIO *bp,DSA **dsa)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_d2i_bio((xnew *)&DSA_new,&d2i_DSA_PUBKEY,bp,dsa);
  return pDVar1;
}



int i2d_DSA_PUBKEY_bio(BIO *bp,DSA *dsa)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_DSA_PUBKEY,bp,(uchar *)dsa);
  return iVar1;
}



EC_KEY * d2i_EC_PUBKEY_fp(FILE *fp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ASN1_d2i_fp((xnew *)&EC_KEY_new,&d2i_EC_PUBKEY,fp,eckey);
  return pEVar1;
}



int i2d_EC_PUBKEY_fp(FILE *fp,EC_KEY *eckey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_EC_PUBKEY,fp,eckey);
  return iVar1;
}



EC_KEY * d2i_ECPrivateKey_fp(FILE *fp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ASN1_d2i_fp((xnew *)&EC_KEY_new,&d2i_ECPrivateKey,fp,eckey);
  return pEVar1;
}



int i2d_ECPrivateKey_fp(FILE *fp,EC_KEY *eckey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_ECPrivateKey,fp,eckey);
  return iVar1;
}



EC_KEY * d2i_EC_PUBKEY_bio(BIO *bp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ASN1_d2i_bio((xnew *)&EC_KEY_new,&d2i_EC_PUBKEY,bp,eckey);
  return pEVar1;
}



int i2d_EC_PUBKEY_bio(BIO *bp,EC_KEY *eckey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_EC_PUBKEY,bp,(uchar *)eckey);
  return iVar1;
}



EC_KEY * d2i_ECPrivateKey_bio(BIO *bp,EC_KEY **eckey)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ASN1_d2i_bio((xnew *)&EC_KEY_new,&d2i_ECPrivateKey,bp,eckey);
  return pEVar1;
}



int i2d_ECPrivateKey_bio(BIO *bp,EC_KEY *eckey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_ECPrivateKey,bp,(uchar *)eckey);
  return iVar1;
}



int X509_pubkey_digest(X509 *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  ASN1_BIT_STRING *pAVar2;
  
  pAVar2 = X509_get0_pubkey_bitstr(data);
  if (pAVar2 != (ASN1_BIT_STRING *)0x0) {
    iVar1 = EVP_Digest(pAVar2->data,(long)pAVar2->length,md,len,type,(ENGINE *)0x0);
    return iVar1;
  }
  return 0;
}



int X509_digest(X509 *data,EVP_MD *type,uchar *md,uint *len)

{
  undefined8 uVar1;
  undefined8 uVar2;
  X509_POLICY_CACHE *pXVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = EVP_MD_is_a(type,&_LC1);
  if ((iVar4 != 0) && (((ulong)data[1].name & 0x100100) == 0x100)) {
    if (len != (uint *)0x0) {
      *len = 0x14;
    }
    pXVar3 = data[1].policy_cache;
    *(AUTHORITY_KEYID **)md = data[1].akid;
    *(X509_POLICY_CACHE **)(md + 8) = pXVar3;
    *(undefined4 *)(md + 0x10) = *(undefined4 *)&data[1].crldp;
    return 1;
  }
  uVar1 = *(undefined8 *)(data[1].sha1_hash + 8);
  uVar2 = *(undefined8 *)data[1].sha1_hash;
  uVar5 = X509_it();
  iVar4 = ossl_asn1_item_digest_ex(uVar5,type,data,md,len,uVar2,uVar1);
  return iVar4;
}



ASN1_OCTET_STRING * X509_digest_sig(X509 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  EVP_MD *type;
  ASN1_OCTET_STRING *str;
  RSA_PSS_PARAMS *a;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_98;
  int local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [8];
  long local_80;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (X509 *)0x0) {
    ERR_new();
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("crypto/x509/x_all.c",0x214,"X509_digest_sig");
    ERR_set_error(0xb,0xc0102,0);
    goto LAB_001011c7;
  }
  iVar1 = X509_get_signature_nid(param_1);
  iVar1 = OBJ_find_sigid_algs(iVar1,&local_98,&local_94);
  if (iVar1 == 0) {
    ERR_new();
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("crypto/x509/x_all.c",0x219,"X509_digest_sig");
    ERR_set_error(0xb,0x90,0);
    goto LAB_001011c7;
  }
  if (local_98 == 0) {
    if (local_94 == 0x390) {
      a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(&param_1->altname);
      local_80 = 0;
      if (a != (RSA_PSS_PARAMS *)0x0) {
        iVar1 = ossl_rsa_pss_get_param_unverified(a,&local_80,local_88,local_90,local_8c);
        if ((iVar1 != 0) && (local_80 != 0)) {
          RSA_PSS_PARAMS_free(a);
          uVar4 = *(undefined8 *)(param_1[1].sha1_hash + 8);
          uVar2 = EVP_MD_get0_name(local_80);
          type = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,uVar2,uVar4);
          if (type == (EVP_MD *)0x0) {
            str = (ASN1_OCTET_STRING *)0x0;
            goto LAB_001011c7;
          }
          goto LAB_00101180;
        }
      }
      RSA_PSS_PARAMS_free(a);
      ERR_new();
      uVar4 = 0x229;
    }
    else {
      if (local_94 != 0) {
        pcVar3 = "SHA512";
        if ((local_94 != 0x43f) && (pcVar3 = "SHAKE256", local_94 != 0x440)) {
          pcVar3 = "SHA256";
        }
        type = (EVP_MD *)
               EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,pcVar3,
                            *(undefined8 *)(param_1[1].sha1_hash + 8));
        if (type != (EVP_MD *)0x0) {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 1;
          }
          goto LAB_00101180;
        }
        goto LAB_00101200;
      }
      ERR_new();
      uVar4 = 0x246;
    }
LAB_00101268:
    str = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("crypto/x509/x_all.c",uVar4,"X509_digest_sig");
    ERR_set_error(0xb,0x6f,0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1[1].sha1_hash + 8);
    pcVar3 = OBJ_nid2sn(local_98);
    type = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)param_1[1].sha1_hash,pcVar3,uVar4);
    if (type == (EVP_MD *)0x0) {
      pcVar3 = OBJ_nid2sn(local_98);
      type = EVP_get_digestbyname(pcVar3);
      if (type == (EVP_MD *)0x0) {
        ERR_new();
        uVar4 = 0x24c;
        goto LAB_00101268;
      }
    }
LAB_00101180:
    iVar1 = X509_digest(param_1,type,local_78,(uint *)&local_80);
    if (iVar1 != 0) {
      str = ASN1_OCTET_STRING_new();
      if (str != (ASN1_OCTET_STRING *)0x0) {
        iVar1 = ASN1_OCTET_STRING_set(str,local_78,(uint)local_80);
        if (iVar1 != 0) {
          if (param_2 == (undefined8 *)0x0) {
            EVP_MD_free(type);
          }
          else {
            *param_2 = type;
          }
          goto LAB_001011c7;
        }
        ASN1_OCTET_STRING_free(str);
      }
    }
    EVP_MD_free(type);
LAB_00101200:
    str = (ASN1_OCTET_STRING *)0x0;
  }
LAB_001011c7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509_CRL_digest(X509_CRL *data,EVP_MD *type,uchar *md,uint *len)

{
  X509_CRL_INFO *pXVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (type == (EVP_MD *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x_all.c",0x263,"X509_CRL_digest");
    ERR_set_error(0xb,0xc0102,0);
    return 0;
  }
  iVar3 = EVP_MD_is_a(type,&_LC1);
  if ((iVar3 != 0) && (((ulong)data[1].sig_alg & 0x10010000000000) == 0x10000000000)) {
    if (len != (uint *)0x0) {
      *len = 0x14;
    }
    uVar4 = *(undefined8 *)data[1].sha1_hash;
    *(ASN1_INTEGER **)md = data[1].base_crl_number;
    *(undefined8 *)(md + 8) = uVar4;
    *(undefined4 *)(md + 0x10) = *(undefined4 *)(data[1].sha1_hash + 8);
    return 1;
  }
  pXVar1 = data[2].crl;
  pvVar2 = data[1].meth_data;
  uVar4 = X509_CRL_it();
  iVar3 = ossl_asn1_item_digest_ex(uVar4,type,data,md,len,pvVar2,pXVar1);
  return iVar3;
}



int X509_REQ_digest(X509_REQ *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_BIT_STRING *pAVar1;
  X509_ALGOR *pXVar2;
  undefined8 uVar3;
  int iVar4;
  
  pAVar1 = data[3].signature;
  pXVar2 = data[3].sig_alg;
  uVar3 = X509_REQ_it();
  iVar4 = ossl_asn1_item_digest_ex(uVar3,type,data,md,len,pXVar2,pAVar1);
  return iVar4;
}



int X509_NAME_digest(X509_NAME *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  iVar1 = ASN1_item_digest(it,type,data,md,len);
  return iVar1;
}



int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it();
  iVar1 = ASN1_item_digest(it,type,data,md,len);
  return iVar1;
}



X509_SIG * d2i_PKCS8_fp(FILE *fp,X509_SIG **p8)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)ASN1_d2i_fp((xnew *)&X509_SIG_new,&d2i_X509_SIG,fp,p8);
  return pXVar1;
}



int i2d_PKCS8_fp(FILE *fp,X509_SIG *p8)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_X509_SIG,fp,p8);
  return iVar1;
}



X509_SIG * d2i_PKCS8_bio(BIO *bp,X509_SIG **p8)

{
  X509_SIG *pXVar1;
  
  pXVar1 = (X509_SIG *)ASN1_d2i_bio((xnew *)&X509_SIG_new,&d2i_X509_SIG,bp,p8);
  return pXVar1;
}



int i2d_PKCS8_bio(BIO *bp,X509_SIG *p8)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_X509_SIG,bp,(uchar *)p8);
  return iVar1;
}



void d2i_X509_PUBKEY_fp(FILE *param_1,void **param_2)

{
  ASN1_d2i_fp((xnew *)&X509_PUBKEY_new,&d2i_X509_PUBKEY,param_1,param_2);
  return;
}



void i2d_X509_PUBKEY_fp(FILE *param_1,void *param_2)

{
  ASN1_i2d_fp(&i2d_X509_PUBKEY,param_1,param_2);
  return;
}



void d2i_X509_PUBKEY_bio(BIO *param_1,void **param_2)

{
  ASN1_d2i_bio((xnew *)&X509_PUBKEY_new,&d2i_X509_PUBKEY,param_1,param_2);
  return;
}



void i2d_X509_PUBKEY_bio(BIO *param_1,uchar *param_2)

{
  ASN1_i2d_bio(&i2d_X509_PUBKEY,param_1,param_2);
  return;
}



PKCS8_PRIV_KEY_INFO * d2i_PKCS8_PRIV_KEY_INFO_fp(FILE *fp,PKCS8_PRIV_KEY_INFO **p8inf)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)
           ASN1_d2i_fp((xnew *)&PKCS8_PRIV_KEY_INFO_new,&d2i_PKCS8_PRIV_KEY_INFO,fp,p8inf);
  return pPVar1;
}



int i2d_PKCS8_PRIV_KEY_INFO_fp(FILE *fp,PKCS8_PRIV_KEY_INFO *p8inf)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_PKCS8_PRIV_KEY_INFO,fp,p8inf);
  return iVar1;
}



int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp,EVP_PKEY *key)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8inf;
  
  iVar1 = 0;
  p8inf = EVP_PKEY2PKCS8(key);
  if (p8inf != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = i2d_PKCS8_PRIV_KEY_INFO_fp(fp,p8inf);
    PKCS8_PRIV_KEY_INFO_free(p8inf);
  }
  return iVar1;
}



int i2d_PrivateKey_fp(FILE *fp,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_PrivateKey,fp,pkey);
  return iVar1;
}



EVP_PKEY * d2i_PrivateKey_fp(FILE *fp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_fp((xnew *)&EVP_PKEY_new,&d2i_AutoPrivateKey,fp,a);
  return pEVar1;
}



int i2d_PUBKEY_fp(FILE *fp,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_fp(&i2d_PUBKEY,fp,pkey);
  return iVar1;
}



EVP_PKEY * d2i_PUBKEY_fp(FILE *fp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_fp((xnew *)&EVP_PKEY_new,&d2i_PUBKEY,fp,a);
  return pEVar1;
}



PKCS8_PRIV_KEY_INFO * d2i_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,PKCS8_PRIV_KEY_INFO **p8inf)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)
           ASN1_d2i_bio((xnew *)&PKCS8_PRIV_KEY_INFO_new,&d2i_PKCS8_PRIV_KEY_INFO,bp,p8inf);
  return pPVar1;
}



int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,PKCS8_PRIV_KEY_INFO *p8inf)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_PKCS8_PRIV_KEY_INFO,bp,(uchar *)p8inf);
  return iVar1;
}



int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp,EVP_PKEY *key)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8inf;
  
  iVar1 = 0;
  p8inf = EVP_PKEY2PKCS8(key);
  if (p8inf != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(bp,p8inf);
    PKCS8_PRIV_KEY_INFO_free(p8inf);
  }
  return iVar1;
}



int i2d_PrivateKey_bio(BIO *bp,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_PrivateKey,bp,(uchar *)pkey);
  return iVar1;
}



EVP_PKEY * d2i_PrivateKey_bio(BIO *bp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_bio((xnew *)&EVP_PKEY_new,&d2i_AutoPrivateKey,bp,a);
  return pEVar1;
}



undefined8
d2i_PrivateKey_ex_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_40;
  char *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(param_1,&local_40);
  if (-1 < iVar1) {
    local_38 = local_40->data;
    uVar2 = d2i_AutoPrivateKey_ex(param_2,&local_38,(long)iVar1,param_3,param_4);
  }
  BUF_MEM_free(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
d2i_PrivateKey_ex_fp(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/x509/x_all.c",0x2e5,"d2i_PrivateKey_ex_fp");
    ERR_set_error(0xb,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = d2i_PrivateKey_ex_bio(bp,param_2,param_3,param_4);
    BIO_free(bp);
  }
  return uVar1;
}



int i2d_PUBKEY_bio(BIO *bp,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = ASN1_i2d_bio(&i2d_PUBKEY,bp,(uchar *)pkey);
  return iVar1;
}



undefined8
d2i_PUBKEY_ex_bio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  BUF_MEM *local_40;
  char *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (BUF_MEM *)0x0;
  iVar1 = asn1_d2i_read_bio(param_1,&local_40);
  if (-1 < iVar1) {
    local_38 = local_40->data;
    uVar2 = d2i_PUBKEY_ex(param_2,&local_38,(long)iVar1,param_3,param_4);
  }
  BUF_MEM_free(local_40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 d2i_PUBKEY_ex_fp(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("crypto/x509/x_all.c",0x2fa,"d2i_PUBKEY_ex_fp");
    ERR_set_error(0xb,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_1);
    uVar1 = d2i_PUBKEY_ex_bio(bp,param_2,param_3,param_4);
    BIO_free(bp);
  }
  return uVar1;
}



EVP_PKEY * d2i_PUBKEY_bio(BIO *bp,EVP_PKEY **a)

{
  EVP_PKEY *pEVar1;
  
  pEVar1 = (EVP_PKEY *)ASN1_d2i_bio((xnew *)&EVP_PKEY_new,&d2i_PUBKEY,bp,a);
  return pEVar1;
}



void d2i_X509_ACERT_fp(FILE *param_1,void *param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_d2i_fp(it,param_1,param_2);
  return;
}



void i2d_X509_ACERT_fp(FILE *param_1,void *param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_i2d_fp(it,param_1,param_2);
  return;
}



void d2i_X509_ACERT_bio(BIO *param_1,void *param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_d2i_bio(it,param_1,param_2);
  return;
}



void i2d_X509_ACERT_bio(BIO *param_1,void *param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ACERT_it();
  ASN1_item_i2d_bio(it,param_1,param_2);
  return;
}



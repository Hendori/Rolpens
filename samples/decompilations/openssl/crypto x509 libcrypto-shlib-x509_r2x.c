
X509 * X509_REQ_to_X509(X509_REQ *r,int days,EVP_PKEY *pkey)

{
  int iVar1;
  X509 *x;
  X509_CINF *a;
  X509_NAME *name;
  ASN1_TIME *pAVar2;
  EVP_PKEY *pkey_00;
  EVP_MD *md;
  
  x = X509_new();
  if (x == (X509 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/x509/x509_r2x.c",0x1c,__func___0);
    ERR_set_error(0xb,0x8000d,0);
    return (X509 *)0x0;
  }
  iVar1 = OPENSSL_sk_num(r[1].signature);
  if (iVar1 != 0) {
    a = (X509_CINF *)ASN1_INTEGER_new();
    x->cert_info = a;
    if ((a == (X509_CINF *)0x0) || (iVar1 = ASN1_INTEGER_set((ASN1_INTEGER *)a,2), iVar1 == 0))
    goto LAB_001000e0;
  }
  name = (X509_NAME *)X509_REQ_get_subject_name(r);
  iVar1 = X509_set_subject_name(x,name);
  if (((iVar1 != 0) &&
      (((iVar1 = X509_set_issuer_name(x,name), iVar1 != 0 &&
        (pAVar2 = X509_gmtime_adj((ASN1_TIME *)x->ex_pathlen,0), pAVar2 != (ASN1_TIME *)0x0)) &&
       (pAVar2 = X509_gmtime_adj((ASN1_TIME *)x->ex_pcpathlen,(long)days * 0x15180),
       pAVar2 != (ASN1_TIME *)0x0)))) &&
     ((pkey_00 = (EVP_PKEY *)X509_REQ_get0_pubkey(r), pkey_00 != (EVP_PKEY *)0x0 &&
      (iVar1 = X509_set_pubkey(x,pkey_00), iVar1 != 0)))) {
    md = EVP_md5();
    iVar1 = X509_sign(x,pkey,md);
    if (iVar1 != 0) {
      return x;
    }
  }
LAB_001000e0:
  X509_free(x);
  return (X509 *)0x0;
}



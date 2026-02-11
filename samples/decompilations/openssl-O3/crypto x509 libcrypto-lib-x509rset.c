
int X509_REQ_set_version(X509_REQ *x,long version)

{
  int iVar1;
  
  if ((x != (X509_REQ *)0x0) && (version == 0)) {
    *(undefined4 *)&x->signature = 1;
    iVar1 = ASN1_INTEGER_set(*(ASN1_INTEGER **)&x->references,0);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/x509/x509rset.c",0x15,"X509_REQ_set_version");
  ERR_set_error(0xb,0x80106,0);
  return 0;
}



int X509_REQ_set_subject_name(X509_REQ *req,X509_NAME *name)

{
  int iVar1;
  
  if (req != (X509_REQ *)0x0) {
    *(undefined4 *)&req->signature = 1;
    iVar1 = X509_NAME_set((X509_NAME **)(req + 1),name);
    return iVar1;
  }
  return 0;
}



int X509_REQ_set_pubkey(X509_REQ *x,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (x != (X509_REQ *)0x0) {
    *(undefined4 *)&x->signature = 1;
    iVar1 = X509_PUBKEY_set((X509_PUBKEY **)&x[1].sig_alg,pkey);
    return iVar1;
  }
  return 0;
}



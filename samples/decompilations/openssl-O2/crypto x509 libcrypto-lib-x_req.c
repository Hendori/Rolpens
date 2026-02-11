
undefined1 * X509_REQ_INFO_it(void)

{
  return local_it_2;
}



bool rinf_cb(int param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 1) {
    return true;
  }
  lVar1 = *param_2;
  lVar2 = OPENSSL_sk_new_null();
  *(long *)(lVar1 + 0x30) = lVar2;
  return lVar2 != 0;
}



X509_REQ_INFO * d2i_X509_REQ_INFO(X509_REQ_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_REQ_INFO *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  pXVar1 = (X509_REQ_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_REQ_INFO(X509_REQ_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_REQ_INFO * X509_REQ_INFO_new(void)

{
  ASN1_ITEM *it;
  X509_REQ_INFO *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  pXVar1 = (X509_REQ_INFO *)ASN1_item_new(it);
  return pXVar1;
}



void X509_REQ_INFO_free(X509_REQ_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REQ_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * X509_REQ_it(void)

{
  return local_it_1;
}



X509_REQ * d2i_X509_REQ(X509_REQ **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_REQ(X509_REQ *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_REQ * X509_REQ_new(void)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_new(it);
  return pXVar1;
}



void X509_REQ_free(X509_REQ *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



X509_REQ * X509_REQ_dup(X509_REQ *req)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_dup(it,req);
  return pXVar1;
}



void X509_REQ_set0_distinguishing_id(long param_1,undefined8 param_2)

{
  ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



undefined8 X509_REQ_get0_distinguishing_id(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



bool ossl_x509_req_set0_libctx(long param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
    CRYPTO_free(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    bVar2 = true;
    if (param_3 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_3,"crypto/x509/x_req.c",0x9b);
      bVar2 = pcVar1 != (char *)0x0;
      *(char **)(param_1 + 0x70) = pcVar1;
    }
    return bVar2;
  }
  return true;
}



undefined8 req_cb(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  EVP_PKEY *pkey;
  
  lVar1 = *param_2;
  switch(param_1) {
  case 3:
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(lVar1 + 0x60));
    CRYPTO_free(*(void **)(lVar1 + 0x70));
    break;
  case 4:
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(lVar1 + 0x60));
  case 1:
    *(undefined8 *)(lVar1 + 0x60) = 0;
    break;
  case 0xf:
    iVar2 = ossl_x509_req_set0_libctx(lVar1,param_4[0xd],param_4[0xe]);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_4[5] != 0) && (lVar3 = X509_PUBKEY_get0(), lVar3 != 0)) {
      pkey = (EVP_PKEY *)EVP_PKEY_dup(lVar3);
      if (pkey == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x_req.c",0x4d,"req_cb");
        ERR_set_error(0xb,0x80006,0);
        return 0;
      }
      iVar2 = X509_PUBKEY_set((X509_PUBKEY **)(lVar1 + 0x28),pkey);
      if (iVar2 == 0) {
        EVP_PKEY_free(pkey);
        ERR_new();
        ERR_set_debug("crypto/x509/x_req.c",0x52,"req_cb");
        ERR_set_error(0xb,0xc0103,0);
        return 0;
      }
      EVP_PKEY_free(pkey);
    }
    break;
  case 0x10:
    *param_4 = *(undefined8 *)(lVar1 + 0x68);
    break;
  case 0x11:
    *param_4 = *(undefined8 *)(lVar1 + 0x70);
  }
  return 1;
}



X509_REQ * X509_REQ_new_ex(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ASN1_ITEM *it;
  X509_REQ *a;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  a = (X509_REQ *)ASN1_item_new(it);
  iVar1 = ossl_x509_req_set0_libctx(a,param_1,param_2);
  if (iVar1 != 0) {
    return a;
  }
  X509_REQ_free(a);
  return (X509_REQ *)0x0;
}



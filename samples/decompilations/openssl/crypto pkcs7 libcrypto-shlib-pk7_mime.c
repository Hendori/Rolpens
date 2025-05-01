
int i2d_PKCS7_bio_stream(BIO *out,PKCS7 *p7,BIO *in,int flags)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = i2d_ASN1_bio_stream(out,(ASN1_VALUE *)p7,in,flags,it);
  return iVar1;
}



int PEM_write_bio_PKCS7_stream(BIO *out,PKCS7 *p7,BIO *in,int flags)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS7_it();
  iVar1 = PEM_write_bio_ASN1_stream(out,(ASN1_VALUE *)p7,in,flags,"PKCS7",it);
  return iVar1;
}



int SMIME_write_PKCS7(BIO *bio,PKCS7 *p7,BIO *data,int flags)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  
  iVar1 = OBJ_obj2nid(p7->type);
  uVar2 = ossl_pkcs7_get0_ctx(p7);
  if (iVar1 == 0x16) {
    if ((p7->d).data == (ASN1_OCTET_STRING *)0x0) {
      return 0;
    }
    puVar5 = ((p7->d).data)->data;
  }
  else {
    puVar5 = (uchar *)0x0;
  }
  uVar3 = ossl_pkcs7_ctx_get0_propq(uVar2);
  uVar2 = ossl_pkcs7_ctx_get0_libctx(uVar2);
  uVar4 = PKCS7_it();
  iVar1 = SMIME_write_ASN1_ex(bio,p7,data,flags ^ 0x400,iVar1,0,puVar5,uVar4,uVar2,uVar3);
  return iVar1;
}



long SMIME_read_PKCS7_ex(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (long *)0x0) {
    lVar2 = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = *param_3;
    uVar3 = 0;
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      lVar2 = *(long *)(lVar2 + 0x30);
    }
  }
  uVar1 = PKCS7_it();
  lVar2 = SMIME_read_ASN1_ex(param_1,0,param_2,uVar1,param_3,uVar3,lVar2);
  if (lVar2 != 0) {
    ossl_pkcs7_resolve_libctx(lVar2);
  }
  return lVar2;
}



PKCS7 * SMIME_read_PKCS7(BIO *bio,BIO **bcont)

{
  PKCS7 *pPVar1;
  
  pPVar1 = (PKCS7 *)SMIME_read_PKCS7_ex(bio,bcont,0);
  return pPVar1;
}



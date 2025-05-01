
int CMS_stream(uchar ***boundary,CMS_ContentInfo *cms)

{
  ASN1_OCTET_STRING **ppAVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  ppAVar1 = CMS_get0_content(cms);
  if (ppAVar1 == (ASN1_OCTET_STRING **)0x0) {
    return 0;
  }
  pAVar2 = *ppAVar1;
  if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
    pAVar2 = ASN1_OCTET_STRING_new();
    *ppAVar1 = pAVar2;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_io.c",0x21,"CMS_stream");
      ERR_set_error(0x2e,0x8002e,0);
      return 0;
    }
  }
  pAVar2->flags = pAVar2->flags & 0xffffffffffffffdfU | 0x10;
  *boundary = &pAVar2->data;
  return 1;
}



CMS_ContentInfo * d2i_CMS_bio(BIO *bp,CMS_ContentInfo **cms)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CMS_ContentInfo *pCVar4;
  
  pCVar4 = (CMS_ContentInfo *)0x0;
  if (cms != (CMS_ContentInfo **)0x0) {
    pCVar4 = *cms;
  }
  uVar1 = ossl_cms_get0_cmsctx(pCVar4);
  uVar2 = ossl_cms_ctx_get0_propq(uVar1);
  uVar1 = ossl_cms_ctx_get0_libctx(uVar1);
  uVar3 = CMS_ContentInfo_it();
  pCVar4 = (CMS_ContentInfo *)ASN1_item_d2i_bio_ex(uVar3,bp,cms,uVar1,uVar2);
  if (pCVar4 != (CMS_ContentInfo *)0x0) {
    ERR_set_mark();
    ossl_cms_resolve_libctx(pCVar4);
    ERR_pop_to_mark();
  }
  return pCVar4;
}



int i2d_CMS_bio(BIO *bp,CMS_ContentInfo *cms)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,cms);
  return iVar1;
}



CMS_ContentInfo * PEM_read_bio_CMS(BIO *bp,CMS_ContentInfo **x,undefined1 *cb,void *u)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)PEM_ASN1_read_bio(&d2i_CMS_ContentInfo,"CMS",bp,x,cb,u);
  return pCVar1;
}



CMS_ContentInfo * PEM_read_CMS(FILE *fp,CMS_ContentInfo **x,undefined1 *cb,void *u)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)PEM_ASN1_read(&d2i_CMS_ContentInfo,"CMS",fp,x,cb,u);
  return pCVar1;
}



int PEM_write_bio_CMS(BIO *bp,CMS_ContentInfo *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_CMS_ContentInfo,"CMS",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                             (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_CMS(FILE *fp,CMS_ContentInfo *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_CMS_ContentInfo,"CMS",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



BIO * BIO_new_CMS(BIO *out,CMS_ContentInfo *cms)

{
  ASN1_ITEM *it;
  BIO *pBVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  pBVar1 = BIO_new_NDEF(out,(ASN1_VALUE *)cms,it);
  return pBVar1;
}



int i2d_CMS_bio_stream(BIO *out,CMS_ContentInfo *cms,BIO *in,int flags)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  iVar1 = i2d_ASN1_bio_stream(out,(ASN1_VALUE *)cms,in,flags,it);
  return iVar1;
}



int PEM_write_bio_CMS_stream(BIO *out,CMS_ContentInfo *cms,BIO *in,int flags)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  iVar1 = PEM_write_bio_ASN1_stream(out,(ASN1_VALUE *)cms,in,flags,"CMS",it);
  return iVar1;
}



int SMIME_write_CMS(BIO *bio,CMS_ContentInfo *cms,BIO *data,int flags)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *o;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  o = CMS_get0_eContentType(cms);
  iVar2 = OBJ_obj2nid(o);
  uVar3 = ossl_cms_get0_cmsctx(cms);
  if (iVar1 == 0x16) {
    uVar6 = *(undefined8 *)(*(long *)(cms + 8) + 8);
  }
  uVar4 = ossl_cms_ctx_get0_propq(uVar3);
  uVar3 = ossl_cms_ctx_get0_libctx(uVar3);
  uVar5 = CMS_ContentInfo_it();
  iVar1 = SMIME_write_ASN1_ex(bio,cms,data,flags,iVar1,iVar2,uVar6,uVar5,uVar3,uVar4);
  return iVar1;
}



long SMIME_read_CMS_ex(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = 0;
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = *param_4;
  }
  uVar1 = ossl_cms_get0_cmsctx(uVar1);
  uVar2 = ossl_cms_ctx_get0_propq(uVar1);
  uVar1 = ossl_cms_ctx_get0_libctx(uVar1);
  uVar3 = CMS_ContentInfo_it();
  lVar4 = SMIME_read_ASN1_ex(param_1,param_2,param_3,uVar3,param_4,uVar1,uVar2);
  if (lVar4 != 0) {
    ERR_set_mark();
    ossl_cms_resolve_libctx(lVar4);
    ERR_pop_to_mark();
  }
  return lVar4;
}



CMS_ContentInfo * SMIME_read_CMS(BIO *bio,BIO **bcont)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)SMIME_read_CMS_ex(bio,0,bcont,0);
  return pCVar1;
}



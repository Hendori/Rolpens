
CMS_ContentInfo *
ossl_cms_DigestedData_create(EVP_MD *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  X509_ALGOR *alg;
  CMS_ContentInfo *a;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar2;
  ASN1_OBJECT *pAVar3;
  
  a = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_2,param_3);
  if (a != (CMS_ContentInfo *)0x0) {
    it = (ASN1_ITEM *)CMS_DigestedData_it();
    pAVar2 = ASN1_item_new(it);
    if (pAVar2 != (ASN1_VALUE *)0x0) {
      pAVar3 = OBJ_nid2obj(0x19);
      *(ASN1_VALUE **)(a + 8) = pAVar2;
      puVar1 = *(undefined8 **)(pAVar2 + 0x10);
      *(ASN1_OBJECT **)a = pAVar3;
      *(undefined4 *)pAVar2 = 0;
      pAVar3 = OBJ_nid2obj(0x15);
      alg = *(X509_ALGOR **)(pAVar2 + 8);
      *puVar1 = pAVar3;
      X509_ALGOR_set_md(alg,param_1);
      return a;
    }
    CMS_ContentInfo_free(a);
  }
  return (CMS_ContentInfo *)0x0;
}



void ossl_cms_DigestedData_init_bio(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = ossl_cms_get0_cmsctx();
  ossl_cms_DigestAlgorithm_init_bio(*(undefined8 *)(lVar1 + 8),uVar2);
  return;
}



bool ossl_cms_DigestedData_do_final(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ASN1_STRING *str;
  int iVar2;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar3;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_dd.c",0x45,"ossl_cms_DigestedData_do_final");
    ERR_set_error(0x2e,0x80006,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 8);
    iVar2 = ossl_cms_DigestAlgorithm_find_ctx(ctx,param_2,*(undefined8 *)(lVar1 + 8));
    if (iVar2 != 0) {
      iVar2 = EVP_DigestFinal_ex(ctx,local_78,&local_7c);
      if (0 < iVar2) {
        str = *(ASN1_STRING **)(lVar1 + 0x18);
        if (param_3 == 0) {
          iVar2 = ASN1_STRING_set(str,local_78,local_7c);
          bVar3 = iVar2 != 0;
          goto LAB_00100102;
        }
        if (str->length == local_7c) {
          bVar3 = true;
          iVar2 = memcmp(local_78,str->data,(ulong)local_7c);
          if (iVar2 == 0) goto LAB_00100102;
          ERR_new();
          ERR_set_debug("crypto/cms/cms_dd.c",0x58,"ossl_cms_DigestedData_do_final");
          ERR_set_error(0x2e,0x9e,0);
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_dd.c",0x53,"ossl_cms_DigestedData_do_final");
          ERR_set_error(0x2e,0x79,0);
        }
      }
    }
  }
  bVar3 = false;
LAB_00100102:
  EVP_MD_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



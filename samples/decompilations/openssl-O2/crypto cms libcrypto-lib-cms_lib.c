
long cms_get0_certificate_choices(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if ((iVar1 != 0x17) && (iVar1 != 0x423)) {
    if (iVar1 == 0x16) {
      return param_1[1] + 0x18;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x1fe,"cms_get0_certificate_choices");
    ERR_set_error(0x2e,0x98,0);
    return 0;
  }
  return *(long *)(param_1[1] + 8);
}



undefined8 cms_get0_econtent_type(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x1a) {
    return *(undefined8 *)(param_1[1] + 8);
  }
  if (iVar1 < 0x1b) {
    if (iVar1 == 0x17) {
LAB_00100100:
      return *(undefined8 *)(param_1[1] + 0x18);
    }
    if ((iVar1 == 0x19) || (iVar1 == 0x16)) {
      return *(undefined8 *)(param_1[1] + 0x10);
    }
  }
  else {
    if ((iVar1 == 0x312) || (iVar1 == 0x423)) goto LAB_00100100;
    if (iVar1 == 0xcd) {
      return *(undefined8 *)(param_1[1] + 0x28);
    }
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_lib.c",0x14c,"cms_get0_econtent_type");
  ERR_set_error(0x2e,0x98,0);
  return 0;
}



long cms_get0_revocation_choices(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if ((iVar1 == 0x17) || (iVar1 == 0x423)) {
    if (*(long *)(param_1[1] + 8) != 0) {
      return *(long *)(param_1[1] + 8) + 8;
    }
  }
  else {
    if (iVar1 == 0x16) {
      return param_1[1] + 0x20;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x251,"cms_get0_revocation_choices");
    ERR_set_error(0x2e,0x98,0);
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMS_ContentInfo * CMS_ContentInfo_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  pAVar1 = ASN1_item_new(it);
  return (CMS_ContentInfo *)pAVar1;
}



void CMS_ContentInfo_free(CMS_ContentInfo *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



int CMS_ContentInfo_print_ctx(BIO *out,CMS_ContentInfo *x,int indent,ASN1_PCTX *pctx)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  iVar1 = ASN1_item_print(out,(ASN1_VALUE *)x,indent,it,pctx);
  return iVar1;
}



int i2d_CMS_ContentInfo(CMS_ContentInfo *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)CMS_ContentInfo_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



CMS_ContentInfo * CMS_ContentInfo_new_ex(undefined8 param_1,char *param_2)

{
  undefined8 uVar1;
  CMS_ContentInfo *a;
  char *pcVar2;
  
  uVar1 = CMS_ContentInfo_it();
  a = (CMS_ContentInfo *)ASN1_item_new_ex(uVar1,param_1,param_2);
  if (a != (CMS_ContentInfo *)0x0) {
    *(undefined8 *)(a + 0x10) = param_1;
    *(undefined8 *)(a + 0x18) = 0;
    if (param_2 == (char *)0x0) {
      return a;
    }
    pcVar2 = CRYPTO_strdup(param_2,"crypto/cms/cms_lib.c",0x3f);
    *(char **)(a + 0x18) = pcVar2;
    if (pcVar2 != (char *)0x0) {
      return a;
    }
    CMS_ContentInfo_free(a);
  }
  return (CMS_ContentInfo *)0x0;
}



long ossl_cms_get0_cmsctx(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



undefined8 ossl_cms_ctx_get0_libctx(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 ossl_cms_ctx_get0_propq(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



void ossl_cms_resolve_libctx(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  
  uVar3 = ossl_cms_get0_cmsctx();
  uVar1 = ossl_cms_ctx_get0_libctx(uVar3);
  uVar3 = ossl_cms_ctx_get0_propq(uVar3);
  ossl_cms_SignerInfos_set_cmsctx(param_1);
  ossl_cms_RecipientInfos_set_cmsctx(param_1);
  iVar6 = 0;
  puVar4 = (undefined8 *)cms_get0_certificate_choices(param_1);
  if (puVar4 != (undefined8 *)0x0) {
    for (; iVar2 = OPENSSL_sk_num(*puVar4), iVar6 < iVar2; iVar6 = iVar6 + 1) {
      piVar5 = (int *)OPENSSL_sk_value(*puVar4,iVar6);
      if (*piVar5 == 0) {
        ossl_x509_set0_libctx(*(undefined8 *)(piVar5 + 2),uVar1,uVar3);
      }
    }
  }
  return;
}



CMS_ContentInfo * d2i_CMS_ContentInfo(CMS_ContentInfo **a,uchar **in,long len)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CMS_ContentInfo *pCVar4;
  
  pCVar4 = (CMS_ContentInfo *)0x0;
  if (a != (CMS_ContentInfo **)0x0) {
    pCVar4 = *a;
  }
  uVar1 = ossl_cms_get0_cmsctx(pCVar4);
  uVar2 = ossl_cms_ctx_get0_propq(uVar1);
  uVar1 = ossl_cms_ctx_get0_libctx(uVar1);
  uVar3 = CMS_ContentInfo_it();
  pCVar4 = (CMS_ContentInfo *)ASN1_item_d2i_ex(a,in,len,uVar3,uVar1,uVar2);
  if (pCVar4 != (CMS_ContentInfo *)0x0) {
    ERR_set_mark();
    ossl_cms_resolve_libctx(pCVar4);
    ERR_pop_to_mark();
  }
  return pCVar4;
}



ASN1_OBJECT * CMS_get0_type(CMS_ContentInfo *cms)

{
  return *(ASN1_OBJECT **)cms;
}



ASN1_OCTET_STRING ** CMS_get0_content(CMS_ContentInfo *cms)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 < 0x1b) {
    if (0x14 < iVar1) {
      switch(iVar1) {
      case 0x15:
        return (ASN1_OCTET_STRING **)(cms + 8);
      case 0x16:
      case 0x19:
        return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x10) + 8);
      case 0x17:
        goto switchD_00100494_caseD_17;
      case 0x1a:
        return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 8) + 0x10);
      }
    }
  }
  else {
    if (iVar1 == 0x312) {
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x18) + 8);
    }
    if (iVar1 == 0x423) {
switchD_00100494_caseD_17:
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x18) + 0x10);
    }
    if (iVar1 == 0xcd) {
      return (ASN1_OCTET_STRING **)(*(long *)(*(long *)(cms + 8) + 0x28) + 8);
    }
  }
  if (**(int **)(cms + 8) == 4) {
    return (ASN1_OCTET_STRING **)(*(int **)(cms + 8) + 2);
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_lib.c",0x127,"CMS_get0_content");
  ERR_set_error(0x2e,0x98,0);
  return (ASN1_OCTET_STRING **)0x0;
}



BIO * ossl_cms_content_bio(CMS_ContentInfo *param_1)

{
  ASN1_OCTET_STRING *pAVar1;
  ASN1_OCTET_STRING **ppAVar2;
  BIO *pBVar3;
  BIO_METHOD *pBVar4;
  
  ppAVar2 = CMS_get0_content(param_1);
  if (ppAVar2 == (ASN1_OCTET_STRING **)0x0) {
    return (BIO *)0x0;
  }
  pAVar1 = *ppAVar2;
  if (pAVar1 != (ASN1_OCTET_STRING *)0x0) {
    if (pAVar1->flags != 0x20) {
      pBVar3 = BIO_new_mem_buf(pAVar1->data,pAVar1->length);
      return pBVar3;
    }
    pBVar4 = BIO_s_mem();
    pBVar3 = BIO_new(pBVar4);
    return pBVar3;
  }
  pBVar4 = BIO_s_null();
  pBVar3 = BIO_new(pBVar4);
  return pBVar3;
}



BIO * CMS_dataInit(CMS_ContentInfo *cms,BIO *icont)

{
  int iVar1;
  BIO *pBVar2;
  BIO *pBVar3;
  
  pBVar3 = icont;
  if ((icont == (BIO *)0x0) && (pBVar3 = (BIO *)ossl_cms_content_bio(), pBVar3 == (BIO *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x99,"CMS_dataInit");
    ERR_set_error(0x2e,0x7f,0);
    return (BIO *)0x0;
  }
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 < 0x1b) {
    if (iVar1 < 0x15) goto switchD_00100613_caseD_18;
    pBVar2 = pBVar3;
    switch(iVar1) {
    case 0x15:
      goto switchD_00100613_caseD_15;
    case 0x16:
      pBVar2 = (BIO *)ossl_cms_SignedData_init_bio(cms);
      break;
    case 0x17:
      pBVar2 = (BIO *)ossl_cms_EnvelopedData_init_bio(cms);
      break;
    default:
      goto switchD_00100613_caseD_18;
    case 0x19:
      pBVar2 = (BIO *)ossl_cms_DigestedData_init_bio(cms);
      break;
    case 0x1a:
      pBVar2 = (BIO *)ossl_cms_EncryptedData_init_bio(cms);
    }
LAB_001006c0:
    if (pBVar2 != (BIO *)0x0) {
      pBVar3 = BIO_push(pBVar2,pBVar3);
      return pBVar3;
    }
  }
  else {
    if (iVar1 == 0x423) {
      pBVar2 = (BIO *)ossl_cms_AuthEnvelopedData_init_bio(cms);
      goto LAB_001006c0;
    }
switchD_00100613_caseD_18:
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0xbb,"CMS_dataInit");
    ERR_set_error(0x2e,0x9c,0);
  }
  if (icont == (BIO *)0x0) {
    pBVar2 = (BIO *)0x0;
    BIO_free(pBVar3);
  }
  else {
    pBVar2 = (BIO *)0x0;
  }
switchD_00100613_caseD_15:
  return pBVar2;
}



undefined8
ossl_cms_DataFinal(CMS_ContentInfo *param_1,BIO *param_2,undefined8 param_3,undefined4 param_4)

{
  ASN1_OBJECT *o;
  int iVar1;
  ASN1_OCTET_STRING **ppAVar2;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppAVar2 = CMS_get0_content(param_1);
  if (ppAVar2 == (ASN1_OCTET_STRING **)0x0) {
LAB_00100968:
    uVar4 = 0;
  }
  else if ((*ppAVar2 == (ASN1_OCTET_STRING *)0x0) || (((*ppAVar2)->flags & 0x20) == 0)) {
    iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)param_1);
    if (iVar1 < 0x1b) goto LAB_0010078e;
LAB_00100832:
    if (iVar1 != 0x312) {
      if (iVar1 == 0x423) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = ossl_cms_AuthEnvelopedData_final(param_1,param_2);
          return uVar4;
        }
        goto LAB_001009a7;
      }
      goto switchD_001007b1_caseD_18;
    }
switchD_001007b1_caseD_15:
    uVar4 = 1;
  }
  else {
    bp = BIO_find_type(param_2,0x401);
    if (bp != (BIO *)0x0) {
      lVar3 = BIO_ctrl(bp,3,0,&local_48);
      BIO_set_flags(bp,0x200);
      BIO_ctrl(bp,0x82,0,(void *)0x0);
      local_50 = (int)lVar3;
      ASN1_STRING_set0(*ppAVar2,local_48,local_50);
      o = *(ASN1_OBJECT **)param_1;
      (*ppAVar2)->flags = (*ppAVar2)->flags & 0xffffffffffffffdf;
      iVar1 = OBJ_obj2nid(o);
      if (0x1a < iVar1) goto LAB_00100832;
LAB_0010078e:
      if (0x14 < iVar1) {
        switch(iVar1) {
        case 0x15:
        case 0x1a:
          goto switchD_001007b1_caseD_15;
        case 0x16:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = ossl_cms_SignedData_final(param_1,param_2,param_3,param_4);
            return uVar4;
          }
          break;
        case 0x17:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = ossl_cms_EnvelopedData_final(param_1,param_2);
            return uVar4;
          }
          break;
        default:
          goto switchD_001007b1_caseD_18;
        case 0x19:
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar4 = ossl_cms_DigestedData_do_final(param_1,param_2,0);
            return uVar4;
          }
        }
        goto LAB_001009a7;
      }
switchD_001007b1_caseD_18:
      ERR_new();
      ERR_set_debug("crypto/cms/cms_lib.c",0xfd,"ossl_cms_DataFinal");
      ERR_set_error(0x2e,0x9c,0);
      goto LAB_00100968;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0xdd,"ossl_cms_DataFinal");
    ERR_set_error(0x2e,0x69,0);
    uVar4 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_001009a7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int CMS_dataFinal(CMS_ContentInfo *cms,BIO *bio)

{
  int iVar1;
  
  iVar1 = ossl_cms_DataFinal(cms,bio,0,0);
  return iVar1;
}



ASN1_OBJECT * CMS_get0_eContentType(CMS_ContentInfo *cms)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = (ASN1_OBJECT *)cms_get0_econtent_type();
  if (pAVar1 != (ASN1_OBJECT *)0x0) {
    pAVar1 = (ASN1_OBJECT *)pAVar1->sn;
  }
  return pAVar1;
}



int CMS_set1_eContentType(CMS_ContentInfo *cms,ASN1_OBJECT *oid)

{
  undefined8 *puVar1;
  ASN1_OBJECT *pAVar2;
  
  puVar1 = (undefined8 *)cms_get0_econtent_type();
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  if (oid != (ASN1_OBJECT *)0x0) {
    pAVar2 = OBJ_dup(oid);
    if (pAVar2 == (ASN1_OBJECT *)0x0) {
      return 0;
    }
    ASN1_OBJECT_free((ASN1_OBJECT *)*puVar1);
    *puVar1 = pAVar2;
  }
  return 1;
}



int CMS_is_detached(CMS_ContentInfo *cms)

{
  ASN1_OCTET_STRING **ppAVar1;
  
  ppAVar1 = CMS_get0_content(cms);
  if (ppAVar1 != (ASN1_OCTET_STRING **)0x0) {
    return (int)(*ppAVar1 == (ASN1_OCTET_STRING *)0x0);
  }
  return -1;
}



int CMS_set_detached(CMS_ContentInfo *cms,int detached)

{
  ASN1_OCTET_STRING **ppAVar1;
  ASN1_OCTET_STRING *a;
  
  ppAVar1 = CMS_get0_content(cms);
  if (ppAVar1 == (ASN1_OCTET_STRING **)0x0) {
    return 0;
  }
  a = *ppAVar1;
  if (detached == 0) {
    if (a == (ASN1_OCTET_STRING *)0x0) {
      a = ASN1_OCTET_STRING_new();
      *ppAVar1 = a;
      if (a == (ASN1_OCTET_STRING *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_lib.c",0x18d,"CMS_set_detached");
        ERR_set_error(0x2e,0x8000d,0);
        return 0;
      }
    }
    a->flags = a->flags | 0x20;
  }
  else {
    ASN1_OCTET_STRING_free(a);
    *ppAVar1 = (ASN1_OCTET_STRING *)0x0;
  }
  return 1;
}



CMS_ContentInfo * ossl_cms_Data_create(void)

{
  CMS_ContentInfo *cms;
  ASN1_OBJECT *pAVar1;
  
  cms = (CMS_ContentInfo *)CMS_ContentInfo_new_ex();
  if (cms != (CMS_ContentInfo *)0x0) {
    pAVar1 = OBJ_nid2obj(0x15);
    *(ASN1_OBJECT **)cms = pAVar1;
    CMS_set_detached(cms,0);
  }
  return cms;
}



BIO * ossl_cms_DigestAlgorithm_init_bio(X509_ALGOR *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EVP_MD *pEVar4;
  BIO_METHOD *type;
  BIO *bp;
  long lVar5;
  char *name;
  EVP_MD *parg;
  BIO *pBVar6;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ASN1_OBJECT *local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  X509_ALGOR_get0(&local_c0,(int *)0x0,(void **)0x0,param_1);
  OBJ_obj2txt(local_58,0x32,local_c0,0);
  ERR_set_mark();
  uVar2 = ossl_cms_ctx_get0_propq(param_2);
  uVar3 = ossl_cms_ctx_get0_libctx(param_2);
  pEVar4 = (EVP_MD *)EVP_MD_fetch(uVar3,local_58,uVar2);
  parg = pEVar4;
  if (pEVar4 == (EVP_MD *)0x0) {
    iVar1 = OBJ_obj2nid(local_c0);
    name = OBJ_nid2sn(iVar1);
    parg = EVP_get_digestbyname(name);
    if (parg != (EVP_MD *)0x0) goto LAB_00100be0;
    ERR_clear_last_mark();
    bp = (BIO *)0x0;
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x1aa,"ossl_cms_DigestAlgorithm_init_bio");
    ERR_set_error(0x2e,0x95,0);
  }
  else {
LAB_00100be0:
    ERR_pop_to_mark();
    type = BIO_f_md();
    bp = BIO_new(type);
    if ((bp == (BIO *)0x0) || (lVar5 = BIO_ctrl(bp,0x6f,0,parg), lVar5 < 1)) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_lib.c",0x1b1,"ossl_cms_DigestAlgorithm_init_bio");
      ERR_set_error(0x2e,0x77,0);
    }
    else {
      iVar1 = EVP_MD_xof(parg);
      if (iVar1 == 0) {
LAB_00100cf0:
        EVP_MD_free(pEVar4);
        pBVar6 = bp;
        goto LAB_00100cf8;
      }
      iVar1 = EVP_MD_is_a(parg,"SHAKE128");
      if (iVar1 == 0) {
        iVar1 = EVP_MD_is_a(parg,"SHAKE256");
        if (iVar1 == 0) {
          if (local_b8 == 0) goto LAB_00100cf0;
        }
        else {
          local_b8 = 0x40;
        }
      }
      else {
        local_b8 = 0x20;
      }
      lVar5 = BIO_ctrl(bp,0x78,0,&local_b0);
      if ((0 < lVar5) && (local_b0 != 0)) {
        OSSL_PARAM_construct_size_t(&local_f8,"xoflen",&local_b8);
        local_88 = local_d8;
        local_a8 = local_f8;
        uStack_a0 = uStack_f0;
        local_98 = local_e8;
        uStack_90 = uStack_e0;
        OSSL_PARAM_construct_end(&local_f8);
        local_80 = local_f8;
        uStack_78 = uStack_f0;
        local_60 = local_d8;
        local_70 = local_e8;
        uStack_68 = uStack_e0;
        iVar1 = EVP_MD_CTX_set_params(local_b0,&local_a8);
        if (iVar1 != 0) goto LAB_00100cf0;
      }
    }
  }
  EVP_MD_free(pEVar4);
  pBVar6 = (BIO *)0x0;
  BIO_free(bp);
LAB_00100cf8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pBVar6;
}



int ossl_cms_DigestAlgorithm_find_ctx(EVP_MD_CTX *param_1,BIO *param_2,X509_ALGOR *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  BIO *bp;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_40;
  EVP_MD_CTX *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_40,(int *)0x0,(void **)0x0,param_3);
  iVar1 = OBJ_obj2nid(local_40);
  do {
    bp = BIO_find_type(param_2,0x208);
    if (bp == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_lib.c",0x1dc,"ossl_cms_DigestAlgorithm_find_ctx");
      ERR_set_error(0x2e,0x83,0);
      iVar1 = 0;
LAB_00100f05:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    BIO_ctrl(bp,0x78,0,&local_38);
    uVar3 = EVP_MD_CTX_get0_md(local_38);
    iVar2 = EVP_MD_get_type(uVar3);
    if (iVar2 == iVar1) {
LAB_00100ef8:
      iVar1 = EVP_MD_CTX_copy_ex(param_1,local_38);
      goto LAB_00100f05;
    }
    uVar3 = EVP_MD_CTX_get0_md(local_38);
    iVar2 = EVP_MD_get_pkey_type(uVar3);
    if (iVar2 == iVar1) goto LAB_00100ef8;
    param_2 = BIO_next(bp);
  } while( true );
}



CMS_CertificateChoices * CMS_add0_CertificateChoices(CMS_ContentInfo *cms)

{
  int iVar1;
  long *plVar2;
  ASN1_ITEM *pAVar3;
  ASN1_VALUE *val;
  long lVar4;
  
  plVar2 = (long *)cms_get0_certificate_choices();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 0) {
      lVar4 = OPENSSL_sk_new_null();
      *plVar2 = lVar4;
      if (lVar4 == 0) {
        return (CMS_CertificateChoices *)0x0;
      }
    }
    pAVar3 = (ASN1_ITEM *)CMS_CertificateChoices_it();
    val = ASN1_item_new(pAVar3);
    if (val != (ASN1_VALUE *)0x0) {
      iVar1 = OPENSSL_sk_push(*plVar2,val);
      if (iVar1 == 0) {
        pAVar3 = (ASN1_ITEM *)CMS_CertificateChoices_it();
        ASN1_item_free(val,pAVar3);
        return (CMS_CertificateChoices *)0x0;
      }
      return (CMS_CertificateChoices *)val;
    }
  }
  return (CMS_CertificateChoices *)0x0;
}



int CMS_add0_cert(CMS_ContentInfo *cms,X509 *cert)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  CMS_CertificateChoices *pCVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar2 = (undefined8 *)cms_get0_certificate_choices();
  if (puVar2 != (undefined8 *)0x0) {
    for (; iVar1 = OPENSSL_sk_num(*puVar2), iVar5 < iVar1; iVar5 = iVar5 + 1) {
      piVar3 = (int *)OPENSSL_sk_value(*puVar2,iVar5);
      if ((*piVar3 == 0) && (iVar1 = X509_cmp(*(X509 **)(piVar3 + 2),cert), iVar1 == 0)) {
        X509_free(cert);
        return 1;
      }
    }
    pCVar4 = CMS_add0_CertificateChoices(cms);
    if (pCVar4 != (CMS_CertificateChoices *)0x0) {
      *(undefined4 *)pCVar4 = 0;
      *(X509 **)(pCVar4 + 8) = cert;
      return 1;
    }
  }
  return 0;
}



int CMS_add1_cert(CMS_ContentInfo *cms,X509 *cert)

{
  int iVar1;
  
  iVar1 = X509_up_ref(cert);
  if (iVar1 != 0) {
    iVar1 = CMS_add0_cert(cms,cert);
    if (iVar1 != 0) {
      return 1;
    }
    X509_free(cert);
  }
  return 0;
}



CMS_RevocationInfoChoice * CMS_add0_RevocationInfoChoice(CMS_ContentInfo *cms)

{
  int iVar1;
  long *plVar2;
  ASN1_ITEM *pAVar3;
  ASN1_VALUE *val;
  long lVar4;
  
  plVar2 = (long *)cms_get0_revocation_choices();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 0) {
      lVar4 = OPENSSL_sk_new_null();
      *plVar2 = lVar4;
      if (lVar4 == 0) {
        return (CMS_RevocationInfoChoice *)0x0;
      }
    }
    pAVar3 = (ASN1_ITEM *)CMS_RevocationInfoChoice_it();
    val = ASN1_item_new(pAVar3);
    if (val != (ASN1_VALUE *)0x0) {
      iVar1 = OPENSSL_sk_push(*plVar2,val);
      if (iVar1 == 0) {
        pAVar3 = (ASN1_ITEM *)CMS_RevocationInfoChoice_it();
        ASN1_item_free(val,pAVar3);
        return (CMS_RevocationInfoChoice *)0x0;
      }
      return (CMS_RevocationInfoChoice *)val;
    }
  }
  return (CMS_RevocationInfoChoice *)0x0;
}



int CMS_add0_crl(CMS_ContentInfo *cms,X509_CRL *crl)

{
  CMS_RevocationInfoChoice *pCVar1;
  
  pCVar1 = CMS_add0_RevocationInfoChoice(cms);
  if (pCVar1 != (CMS_RevocationInfoChoice *)0x0) {
    *(undefined4 *)pCVar1 = 0;
    *(X509_CRL **)(pCVar1 + 8) = crl;
    return 1;
  }
  return 0;
}



int CMS_add1_crl(CMS_ContentInfo *cms,X509_CRL *crl)

{
  int iVar1;
  
  iVar1 = X509_CRL_up_ref(crl);
  if (iVar1 != 0) {
    iVar1 = CMS_add0_crl(cms,crl);
    if (iVar1 != 0) {
      return 1;
    }
    X509_CRL_free(crl);
  }
  return 0;
}



undefined8 ossl_cms_get1_certs_ex(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  *param_2 = 0;
  puVar3 = (undefined8 *)cms_get0_certificate_choices();
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*puVar3);
    lVar4 = OPENSSL_sk_new_reserve(0,iVar1);
    *param_2 = lVar4;
    if (lVar4 != 0) {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          piVar5 = (int *)OPENSSL_sk_value(*puVar3,iVar6);
          if ((*piVar5 == 0) &&
             (iVar2 = X509_add_cert(*param_2,*(undefined8 *)(piVar5 + 2),1), iVar2 == 0)) {
            OSSL_STACK_OF_X509_free(*param_2);
            *param_2 = 0;
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      return 1;
    }
  }
  return 0;
}



stack_st_X509 * CMS_get1_certs(CMS_ContentInfo *cms)

{
  int iVar1;
  stack_st_X509 *psVar2;
  long in_FS_OFFSET;
  stack_st_X509 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (stack_st_X509 *)0x0;
  iVar1 = ossl_cms_get1_certs_ex(cms,&local_18);
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_num(local_18);
    psVar2 = local_18;
    if (iVar1 != 0) goto LAB_0010129f;
    OPENSSL_sk_free(local_18);
  }
  psVar2 = (stack_st_X509 *)0x0;
LAB_0010129f:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_cms_get1_crls_ex(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  *param_2 = 0;
  puVar3 = (undefined8 *)cms_get0_revocation_choices();
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*puVar3);
    lVar4 = OPENSSL_sk_new_reserve(0,iVar1);
    *param_2 = lVar4;
    if (lVar4 != 0) {
      iVar6 = 0;
      if (0 < iVar1) {
        do {
          piVar5 = (int *)OPENSSL_sk_value(*puVar3,iVar6);
          if ((*piVar5 == 0) &&
             ((iVar2 = X509_CRL_up_ref(*(undefined8 *)(piVar5 + 2)), iVar2 == 0 ||
              (iVar2 = OPENSSL_sk_push(*param_2,*(undefined8 *)(piVar5 + 2)), iVar2 == 0)))) {
            OPENSSL_sk_pop_free(*param_2,X509_CRL_free);
            *param_2 = 0;
            return 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      return 1;
    }
  }
  return 0;
}



stack_st_X509_CRL * CMS_get1_crls(CMS_ContentInfo *cms)

{
  int iVar1;
  stack_st_X509_CRL *psVar2;
  long in_FS_OFFSET;
  stack_st_X509_CRL *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (stack_st_X509_CRL *)0x0;
  iVar1 = ossl_cms_get1_crls_ex(cms,&local_18);
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_num(local_18);
    psVar2 = local_18;
    if (iVar1 != 0) goto LAB_001013ef;
    OPENSSL_sk_free(local_18);
  }
  psVar2 = (stack_st_X509_CRL *)0x0;
LAB_001013ef:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return psVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_cms_ias_cert_cmp(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  X509_NAME *b;
  ASN1_INTEGER *y;
  
  b = X509_get_issuer_name(param_2);
  iVar1 = X509_NAME_cmp((X509_NAME *)*param_1,b);
  if (iVar1 != 0) {
    return;
  }
  y = (ASN1_INTEGER *)X509_get0_serialNumber(param_2);
  ASN1_INTEGER_cmp((ASN1_INTEGER *)param_1[1],y);
  return;
}



int ossl_cms_keyid_cert_cmp(ASN1_OCTET_STRING *param_1,undefined8 param_2)

{
  int iVar1;
  ASN1_OCTET_STRING *b;
  
  b = (ASN1_OCTET_STRING *)X509_get0_subject_key_id(param_2);
  if (b != (ASN1_OCTET_STRING *)0x0) {
    iVar1 = ASN1_OCTET_STRING_cmp(param_1,b);
    return iVar1;
  }
  return -1;
}



undefined8 ossl_cms_set1_ias(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  ASN1_ITEM *pAVar2;
  ASN1_VALUE *val;
  X509_NAME *name;
  ASN1_STRING *str;
  undefined8 uVar3;
  
  pAVar2 = (ASN1_ITEM *)CMS_IssuerAndSerialNumber_it();
  val = ASN1_item_new(pAVar2);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_new();
    uVar3 = 0x2f4;
  }
  else {
    name = X509_get_issuer_name(param_2);
    iVar1 = X509_NAME_set((X509_NAME **)val,name);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_lib.c",0x2f8,"ossl_cms_set1_ias");
      ERR_set_error(0x2e,0x8000b,0);
      goto LAB_00101548;
    }
    str = (ASN1_STRING *)X509_get0_serialNumber(param_2);
    iVar1 = ASN1_STRING_copy(*(ASN1_STRING **)(val + 8),str);
    if (iVar1 != 0) {
      pAVar2 = (ASN1_ITEM *)CMS_IssuerAndSerialNumber_it();
      ASN1_item_free((ASN1_VALUE *)*param_1,pAVar2);
      *param_1 = val;
      return 1;
    }
    ERR_new();
    uVar3 = 0x2fc;
  }
  ERR_set_debug("crypto/cms/cms_lib.c",uVar3,"ossl_cms_set1_ias");
  ERR_set_error(0x2e,0x8000d,0);
LAB_00101548:
  pAVar2 = (ASN1_ITEM *)CMS_IssuerAndSerialNumber_it();
  ASN1_item_free(val,pAVar2);
  return 0;
}



undefined8 ossl_cms_set1_keyid(undefined8 *param_1,undefined8 param_2)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = (ASN1_STRING *)X509_get0_subject_key_id(param_2);
  if (pAVar1 == (ASN1_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x30d,"ossl_cms_set1_keyid");
    ERR_set_error(0x2e,0xa0,0);
  }
  else {
    pAVar1 = ASN1_STRING_dup(pAVar1);
    if (pAVar1 != (ASN1_STRING *)0x0) {
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*param_1);
      *param_1 = pAVar1;
      return 1;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_lib.c",0x312,"ossl_cms_set1_keyid");
    ERR_set_error(0x2e,0x8000d,0);
  }
  return 0;
}



undefined8
ossl_cms_sign_encrypt
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,long param_6
          ,undefined8 param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10)

{
  void *x;
  int iVar1;
  CMS_ContentInfo *a;
  BIO_METHOD *type;
  BIO *out;
  ASN1_ITEM *it;
  CMS_ContentInfo *a_00;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  if ((((param_1 == 0) || (lVar3 = param_4, param_1 = param_2, param_4 == 0)) || (param_2 == 0)) ||
     (param_6 == 0)) {
    ERR_new(param_1,lVar3);
    ERR_set_debug("crypto/cms/cms_lib.c",0x325,"ossl_cms_sign_encrypt");
    ERR_set_error(0x2e,0xc0102,0);
    return 0;
  }
  a = (CMS_ContentInfo *)CMS_sign_ex();
  if (a != (CMS_ContentInfo *)0x0) {
    type = BIO_s_mem();
    out = BIO_new(type);
    if (out != (BIO *)0x0) {
      x = *(void **)(a + 8);
      it = (ASN1_ITEM *)CMS_SignedData_it();
      iVar1 = ASN1_item_i2d_bio(it,out,x);
      if (iVar1 < 1) {
        a_00 = (CMS_ContentInfo *)0x0;
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        a_00 = (CMS_ContentInfo *)CMS_encrypt_ex(param_6,out,param_7,param_8,param_9,param_10);
        if (a_00 != (CMS_ContentInfo *)0x0) {
          uVar2 = CMS_EnvelopedData_dup();
        }
      }
      goto LAB_00101748;
    }
  }
  a_00 = (CMS_ContentInfo *)0x0;
  out = (BIO *)0x0;
  uVar2 = 0;
LAB_00101748:
  BIO_free((BIO *)0x0);
  BIO_free(out);
  CMS_ContentInfo_free(a);
  CMS_ContentInfo_free(a_00);
  return uVar2;
}



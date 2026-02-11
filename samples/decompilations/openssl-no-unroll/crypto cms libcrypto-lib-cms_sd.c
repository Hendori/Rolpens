
int CMS_SignedData_init(CMS_ContentInfo *cms)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar4;
  ASN1_OBJECT *pAVar5;
  ASN1_OBJECT *pAVar6;
  
  if (*(long *)(cms + 8) == 0) {
    it = (ASN1_ITEM *)CMS_SignedData_it();
    pAVar4 = ASN1_item_new(it);
    *(ASN1_VALUE **)(cms + 8) = pAVar4;
    if (pAVar4 == (ASN1_VALUE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0x29,"cms_signed_data_init");
      ERR_set_error(0x2e,0x8000d,0);
      return 0;
    }
    *(undefined4 *)pAVar4 = 1;
    puVar1 = *(undefined8 **)(pAVar4 + 0x10);
    pAVar5 = OBJ_nid2obj(0x15);
    pAVar6 = *(ASN1_OBJECT **)cms;
    *puVar1 = pAVar5;
    *(undefined4 *)(*(long *)(*(long *)(cms + 8) + 0x10) + 0x10) = 1;
    ASN1_OBJECT_free(pAVar6);
    pAVar6 = OBJ_nid2obj(0x16);
    *(ASN1_OBJECT **)cms = pAVar6;
    lVar3 = *(long *)(cms + 8);
  }
  else {
    iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
    if (iVar2 != 0x16) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0x1e,"cms_get0_signed");
      ERR_set_error(0x2e,0x6c,0);
      return 0;
    }
    lVar3 = *(long *)(cms + 8);
  }
  return (uint)(lVar3 != 0);
}



undefined8 ossl_cms_set1_SignerIdentifier(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    iVar1 = ossl_cms_set1_ias(param_1 + 2);
  }
  else {
    if (param_3 != 1) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0xbe,"ossl_cms_set1_SignerIdentifier");
      ERR_set_error(0x2e,0x96,0);
      return 0;
    }
    iVar1 = ossl_cms_set1_keyid(param_1 + 2);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = param_3;
  return 1;
}



undefined8
ossl_cms_SignerIdentifier_get0_signer_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (*param_1 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = **(undefined8 **)(param_1 + 2);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(param_1 + 2) + 8);
    }
  }
  else {
    if (*param_1 != 1) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 2);
    }
  }
  return 1;
}



undefined8 ossl_cms_SignerIdentifier_cert_cmp(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = ossl_cms_ias_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  if (*param_1 == 1) {
    uVar1 = ossl_cms_keyid_cert_cmp(*(undefined8 *)(param_1 + 2));
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 CMS_SignerInfo_get0_pkey_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 CMS_SignerInfo_get0_md_ctx(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



stack_st_CMS_SignerInfo * CMS_get0_SignerInfos(CMS_ContentInfo *cms)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x16) {
    if (*(long *)(cms + 8) != 0) {
      return *(stack_st_CMS_SignerInfo **)(*(long *)(cms + 8) + 0x28);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x1e,"cms_get0_signed");
    ERR_set_error(0x2e,0x6c,0);
  }
  return (stack_st_CMS_SignerInfo *)0x0;
}



void ossl_cms_SignerInfos_set_cmsctx(CMS_ContentInfo *param_1)

{
  int iVar1;
  undefined8 uVar2;
  stack_st_CMS_SignerInfo *psVar3;
  long lVar4;
  int iVar5;
  
  uVar2 = ossl_cms_get0_cmsctx();
  ERR_set_mark();
  iVar5 = 0;
  psVar3 = CMS_get0_SignerInfos(param_1);
  ERR_pop_to_mark();
  while( true ) {
    iVar1 = OPENSSL_sk_num(psVar3);
    if (iVar1 <= iVar5) break;
    lVar4 = OPENSSL_sk_value(psVar3,iVar5);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x58) = uVar2;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



stack_st_X509 * CMS_get0_signers(CMS_ContentInfo *cms)

{
  int iVar1;
  stack_st_CMS_SignerInfo *psVar2;
  long lVar3;
  stack_st_X509 *psVar4;
  int iVar5;
  long in_FS_OFFSET;
  stack_st_X509 *local_28;
  long local_20;
  
  iVar5 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (stack_st_X509 *)0x0;
  psVar2 = CMS_get0_SignerInfos(cms);
  do {
    iVar1 = OPENSSL_sk_num(psVar2);
    psVar4 = local_28;
    if (iVar1 <= iVar5) {
LAB_0010037c:
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return psVar4;
    }
    lVar3 = OPENSSL_sk_value(psVar2,iVar5);
    if ((*(long *)(lVar3 + 0x38) != 0) &&
       (iVar1 = ossl_x509_add_cert_new(&local_28,*(long *)(lVar3 + 0x38),0), iVar1 == 0)) {
      OPENSSL_sk_free(local_28);
      psVar4 = (stack_st_X509 *)0x0;
      goto LAB_0010037c;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



void CMS_SignerInfo_set1_signer_cert(CMS_SignerInfo *si,X509 *signer)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  
  if (signer != (X509 *)0x0) {
    iVar1 = X509_up_ref(signer);
    if (iVar1 == 0) {
      return;
    }
    EVP_PKEY_free(*(EVP_PKEY **)(si + 0x40));
    pEVar2 = X509_get_pubkey(signer);
    *(EVP_PKEY **)(si + 0x40) = pEVar2;
  }
  X509_free(*(X509 **)(si + 0x38));
  *(X509 **)(si + 0x38) = signer;
  return;
}



int CMS_SignerInfo_get0_signer_id
              (CMS_SignerInfo *si,ASN1_OCTET_STRING **keyid,X509_NAME **issuer,ASN1_INTEGER **sno)

{
  int iVar1;
  
  iVar1 = ossl_cms_SignerIdentifier_get0_signer_id(*(undefined8 *)(si + 8));
  return iVar1;
}



int CMS_SignerInfo_cert_cmp(CMS_SignerInfo *si,X509 *cert)

{
  int iVar1;
  
  iVar1 = ossl_cms_SignerIdentifier_cert_cmp(*(undefined8 *)(si + 8));
  return iVar1;
}



int CMS_set1_signers_certs(CMS_ContentInfo *cms,stack_st_X509 *certs,uint flags)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CMS_SignerInfo *si;
  X509 *pXVar6;
  int *piVar7;
  int local_40;
  
  iVar3 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar3 == 0x16) {
    lVar1 = *(long *)(cms + 8);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      local_40 = 0;
      iVar3 = 0;
      do {
        iVar4 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x28));
        if (iVar4 <= iVar3) {
          return local_40;
        }
        iVar4 = 0;
        si = (CMS_SignerInfo *)OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x28),iVar3);
        if (*(long *)(si + 0x38) == 0) {
          iVar5 = OPENSSL_sk_num(certs);
          if (0 < iVar5) {
            do {
              pXVar6 = (X509 *)OPENSSL_sk_value(certs,iVar4);
              iVar5 = CMS_SignerInfo_cert_cmp(si,pXVar6);
              if (iVar5 == 0) {
                CMS_SignerInfo_set1_signer_cert(si,pXVar6);
                local_40 = local_40 + 1;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = OPENSSL_sk_num(certs);
            } while (iVar4 < iVar5);
          }
          if ((*(long *)(si + 0x38) == 0) && (iVar4 = 0, (flags & 0x10) == 0)) {
            for (; iVar5 = OPENSSL_sk_num(uVar2), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              piVar7 = (int *)OPENSSL_sk_value(uVar2,iVar4);
              if (*piVar7 == 0) {
                pXVar6 = *(X509 **)(piVar7 + 2);
                iVar5 = CMS_SignerInfo_cert_cmp(si,pXVar6);
                if (iVar5 == 0) {
                  CMS_SignerInfo_set1_signer_cert(si,pXVar6);
                  local_40 = local_40 + 1;
                  break;
                }
              }
            }
          }
        }
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x1e,"cms_get0_signed");
    ERR_set_error(0x2e,0x6c,0);
  }
  return -1;
}



void CMS_SignerInfo_get0_algs
               (CMS_SignerInfo *si,EVP_PKEY **pk,X509 **signer,X509_ALGOR **pdig,X509_ALGOR **psig)

{
  if (pk != (EVP_PKEY **)0x0) {
    *pk = *(EVP_PKEY **)(si + 0x40);
  }
  if (signer != (X509 **)0x0) {
    *signer = *(X509 **)(si + 0x38);
  }
  if (pdig != (X509_ALGOR **)0x0) {
    *pdig = *(X509_ALGOR **)(si + 0x10);
  }
  if (psig != (X509_ALGOR **)0x0) {
    *psig = *(X509_ALGOR **)(si + 0x20);
  }
  return;
}



int cms_generic_sign_part_0(CMS_SignerInfo *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ASN1_OBJECT *aobj;
  char *s;
  long in_FS_OFFSET;
  int local_8c;
  X509_ALGOR *local_88;
  X509_ALGOR *local_80;
  int local_78;
  short local_74;
  long local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_PKEY_get_id(uVar1);
  CMS_SignerInfo_get0_algs(param_1,(EVP_PKEY **)0x0,(X509 **)0x0,&local_88,&local_80);
  if ((((local_88 == (X509_ALGOR *)0x0) || (local_88->algorithm == (ASN1_OBJECT *)0x0)) ||
      (iVar3 = OBJ_obj2nid(local_88->algorithm), iVar3 == 0)) ||
     (((((iVar2 < 1 &&
         ((s = (char *)EVP_PKEY_get0_type_name(uVar1), s == (char *)0x0 ||
          (iVar2 = OBJ_txt2nid(s), iVar2 < 1)))) ||
        (iVar4 = EVP_PKEY_get_default_digest_name(uVar1,&local_78,0x50), iVar4 != 2)) ||
       ((local_78 != 0x45444e55 || (local_74 != 0x46)))) &&
      (iVar3 = OBJ_find_sigid_by_algs(&local_8c,iVar3,iVar2), iVar2 = local_8c, iVar3 == 0)))) {
    iVar2 = -1;
  }
  else {
    local_8c = iVar2;
    aobj = OBJ_nid2obj(local_8c);
    iVar2 = X509_ALGOR_set0(local_80,aobj,-1,(void *)0x0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



uint cms_sd_asn1_ctrl(long param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  iVar3 = EVP_PKEY_is_a(lVar1,&_LC2);
  if ((iVar3 == 0) && (iVar3 = EVP_PKEY_is_a(lVar1,&_LC3), iVar3 == 0)) {
    iVar3 = EVP_PKEY_is_a(lVar1,&_LC4);
    if ((iVar3 != 0) || (iVar3 = EVP_PKEY_is_a(lVar1,"RSA-PSS"), iVar3 != 0)) {
      iVar3 = ossl_cms_rsa_sign(param_1,param_2);
      return (uint)(0 < iVar3);
    }
    if ((*(long *)(lVar1 + 8) != 0) &&
       (pcVar2 = *(code **)(*(long *)(lVar1 + 8) + 0xb0), pcVar2 != (code *)0x0)) {
      iVar3 = (*pcVar2)(lVar1,5,(long)(int)param_2,param_1);
      if (iVar3 == -2) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x11c,"cms_sd_asn1_ctrl");
        ERR_set_error(0x2e,0x7d,0);
        return 0;
      }
      if (0 < iVar3) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0x120,"cms_sd_asn1_ctrl");
      ERR_set_error(0x2e,0x6f,0);
      return 0;
    }
  }
  if (param_2 == 0) {
    iVar3 = cms_generic_sign_part_0(param_1);
    param_2 = (uint)(0 < iVar3);
  }
  return param_2;
}



undefined8 CMS_SignerInfo_get0_signature(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



int CMS_SignerInfo_sign(CMS_SignerInfo *si)

{
  EVP_MD_CTX *ctx;
  undefined8 uVar1;
  void *asn;
  ASN1_BIT_STRING *signature;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ASN1_ITEM *pAVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ASN1_TIME *a;
  uchar *ptr;
  char *buf;
  long in_FS_OFFSET;
  long local_f0;
  uchar *local_e8;
  int local_e0 [2];
  char local_d8 [64];
  int local_98;
  short local_94;
  long local_40;
  
  ctx = *(EVP_MD_CTX **)(si + 0x48);
  uVar7 = *(undefined8 *)(si + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  buf = local_d8;
  local_f0 = 0;
  local_e8 = (uchar *)0x0;
  iVar4 = OBJ_obj2txt(buf,0x32,(ASN1_OBJECT *)**(undefined8 **)(si + 0x10),0);
  if (0 < iVar4) {
    iVar4 = EVP_PKEY_get_default_digest_name(*(undefined8 *)(si + 0x40),&local_98,0x50);
    pcVar2 = buf;
    if ((iVar4 == 2) && ((local_98 != 0x45444e55 || (pcVar2 = (char *)0x0, local_94 != 0x46)))) {
      if (*(int *)(si + 0x60) == 0) goto LAB_0010094e;
LAB_00100968:
      iVar4 = ossl_cms_si_check_attributes(si);
      ptr = local_e8;
      if (iVar4 != 0) {
        lVar3 = *(long *)(si + 0x50);
        if (*(long *)(si + 0x50) == 0) {
          EVP_MD_CTX_reset(ctx);
          uVar1 = *(undefined8 *)(si + 0x40);
          uVar6 = ossl_cms_ctx_get0_propq(uVar7);
          uVar7 = ossl_cms_ctx_get0_libctx(uVar7);
          iVar4 = EVP_DigestSignInit_ex(ctx,&local_f0,buf,uVar7,uVar6,uVar1,0);
          ptr = local_e8;
          if (iVar4 < 1) goto LAB_00100abc;
          EVP_MD_CTX_set_flags(ctx,0x400);
          *(long *)(si + 0x50) = local_f0;
          lVar3 = local_f0;
        }
        local_f0 = lVar3;
        if (buf == (char *)0x0) {
          asn = *(void **)(si + 0x18);
          signature = *(ASN1_BIT_STRING **)(si + 0x28);
          pAVar5 = (ASN1_ITEM *)CMS_Attributes_Sign_it();
          iVar4 = ASN1_item_sign_ctx(pAVar5,(X509_ALGOR *)0x0,(X509_ALGOR *)0x0,signature,asn,ctx);
          ptr = local_e8;
          if (0 < iVar4) {
LAB_00100b9a:
            iVar4 = 1;
            goto LAB_00100ad3;
          }
        }
        else {
          pAVar5 = (ASN1_ITEM *)CMS_Attributes_Sign_it();
          iVar4 = ASN1_item_i2d(*(ASN1_VALUE **)(si + 0x18),&local_e8,pAVar5);
          ptr = local_e8;
          if (-1 < iVar4) {
            if (local_e8 == (uchar *)0x0) {
LAB_00100bc7:
              ptr = (uchar *)0x0;
            }
            else {
              iVar4 = EVP_DigestSignUpdate(ctx,local_e8,(long)iVar4);
              ptr = local_e8;
              if (0 < iVar4) {
                iVar4 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_e0);
                ptr = local_e8;
                if (0 < iVar4) {
                  CRYPTO_free(local_e8);
                  local_e8 = (uchar *)CRYPTO_malloc(local_e0[0],"crypto/cms/cms_sd.c",0x389);
                  if (local_e8 == (uchar *)0x0) goto LAB_00100bc7;
                  iVar4 = EVP_DigestSignFinal(ctx,local_e8,(size_t *)local_e0);
                  ptr = local_e8;
                  if (0 < iVar4) {
                    EVP_MD_CTX_reset(ctx);
                    ASN1_STRING_set0(*(ASN1_STRING **)(si + 0x28),local_e8,local_e0[0]);
                    goto LAB_00100b9a;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      buf = pcVar2;
      if (*(int *)(si + 0x60) != 0) goto LAB_00100968;
LAB_0010094e:
      iVar4 = CMS_signed_get_attr_by_NID(si,0x34,-1);
      if (-1 < iVar4) goto LAB_00100968;
      a = X509_gmtime_adj((ASN1_TIME *)0x0,0);
      if (a == (ASN1_TIME *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x24e,"cms_add1_signingTime");
        ERR_set_error(0x2e,0x8000b,0);
        ASN1_TIME_free((ASN1_TIME *)0x0);
        ptr = local_e8;
      }
      else {
        iVar4 = CMS_signed_add1_attr_by_NID(si,0x34,a->type,a,-1);
        if (0 < iVar4) {
          ASN1_TIME_free(a);
          goto LAB_00100968;
        }
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x254,"cms_add1_signingTime");
        ERR_set_error(0x2e,0x8002e,0);
        ASN1_TIME_free(a);
        ptr = local_e8;
      }
    }
LAB_00100abc:
    CRYPTO_free(ptr);
    EVP_MD_CTX_reset(ctx);
  }
  iVar4 = 0;
LAB_00100ad3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



undefined8
ossl_cms_SignedData_final(CMS_ContentInfo *param_1,undefined8 param_2,uchar *param_3,uint param_4)

{
  int iVar1;
  stack_st_CMS_SignerInfo *psVar2;
  CMS_SignerInfo *pCVar3;
  EVP_MD_CTX *ctx;
  undefined8 uVar4;
  void *ptr;
  undefined8 uVar5;
  int iVar6;
  long in_FS_OFFSET;
  EVP_PKEY_CTX *local_b8;
  uchar *local_b0;
  uint local_94;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  psVar2 = CMS_get0_SignerInfos(param_1);
  if (param_3 == (uchar *)0x0) {
    iVar1 = OPENSSL_sk_num(psVar2);
    if (0 < iVar1) {
      do {
        pCVar3 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar2,iVar6);
        local_94 = param_4;
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        uVar4 = ossl_cms_get0_cmsctx(param_1);
        if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100f08;
        if (*(long *)(pCVar3 + 0x40) == 0) goto LAB_00100e70;
        iVar1 = ossl_cms_DigestAlgorithm_find_ctx(ctx,param_2,*(undefined8 *)(pCVar3 + 0x10));
        if ((iVar1 == 0) ||
           ((*(long *)(pCVar3 + 0x50) != 0 && (iVar1 = cms_sd_asn1_ctrl(pCVar3,0), iVar1 == 0))))
        goto LAB_00100e30;
        iVar1 = CMS_signed_get_attr_count(pCVar3);
        if (iVar1 < 0) {
          local_b8 = *(EVP_PKEY_CTX **)(pCVar3 + 0x50);
          if (local_b8 == (EVP_PKEY_CTX *)0x0) {
            iVar1 = EVP_PKEY_get_size(*(undefined8 *)(pCVar3 + 0x40));
            local_90 = CONCAT44(local_90._4_4_,iVar1);
            if ((iVar1 != 0) &&
               (ptr = CRYPTO_malloc(iVar1,"crypto/cms/cms_sd.c",0x32c), ptr != (void *)0x0)) {
              uVar5 = ossl_cms_ctx_get0_propq(uVar4);
              uVar4 = ossl_cms_ctx_get0_libctx(uVar4);
              iVar1 = EVP_SignFinal_ex(ctx,ptr,&local_90,*(undefined8 *)(pCVar3 + 0x40),uVar4,uVar5)
              ;
              if (iVar1 != 0) {
                ASN1_STRING_set0(*(ASN1_STRING **)(pCVar3 + 0x28),ptr,(int)local_90);
                goto LAB_001010df;
              }
              ERR_new();
              ERR_set_debug("crypto/cms/cms_sd.c",0x331,"cms_SignerInfo_content_sign");
              ERR_set_error(0x2e,0x8b,0);
              CRYPTO_free(ptr);
            }
            goto LAB_00100e30;
          }
          *(undefined8 *)(pCVar3 + 0x50) = 0;
          iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_94);
          if (iVar1 == 0) goto LAB_00100eeb;
          iVar1 = EVP_PKEY_get_size(*(undefined8 *)(pCVar3 + 0x40));
          local_90 = (size_t)iVar1;
          if ((local_90 == 0) ||
             (local_b0 = (uchar *)CRYPTO_malloc(iVar1,"crypto/cms/cms_sd.c",0x31c),
             local_b0 == (uchar *)0x0)) goto LAB_00100eeb;
          iVar1 = EVP_PKEY_sign(local_b8,local_b0,&local_90,local_88,(ulong)local_94);
          if (iVar1 < 1) goto LAB_001011e0;
          ASN1_STRING_set0(*(ASN1_STRING **)(pCVar3 + 0x28),local_b0,(int)local_90);
          EVP_MD_CTX_free(ctx);
          EVP_PKEY_CTX_free(local_b8);
        }
        else {
          iVar1 = EVP_DigestFinal_ex(ctx,local_88,&local_94);
          if ((((iVar1 == 0) ||
               (iVar1 = CMS_signed_add1_attr_by_NID(pCVar3,0x33,4,local_88,local_94), iVar1 == 0))
              || (iVar1 = CMS_signed_add1_attr_by_NID
                                    (pCVar3,0x32,6,
                                     (void *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10),-1),
                 iVar1 < 1)) || (iVar1 = CMS_SignerInfo_sign(pCVar3), iVar1 == 0))
          goto LAB_00100e30;
LAB_001010df:
          EVP_MD_CTX_free();
          EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
        }
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(psVar2);
      } while (iVar6 < iVar1);
    }
  }
  else {
    iVar1 = OPENSSL_sk_num(psVar2);
    if (0 < iVar1) {
LAB_00100cf0:
      pCVar3 = (CMS_SignerInfo *)OPENSSL_sk_value(psVar2,iVar6);
      local_94 = param_4;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      ossl_cms_get0_cmsctx(param_1);
      if (ctx == (EVP_MD_CTX *)0x0) goto LAB_00100f08;
      if (*(long *)(pCVar3 + 0x40) == 0) goto LAB_00100e70;
      iVar1 = ossl_cms_DigestAlgorithm_find_ctx(ctx,param_2,*(undefined8 *)(pCVar3 + 0x10));
      if ((iVar1 == 0) ||
         ((*(long *)(pCVar3 + 0x50) != 0 && (iVar1 = cms_sd_asn1_ctrl(pCVar3,0), iVar1 == 0))))
      goto LAB_00100e30;
      iVar1 = CMS_signed_get_attr_count(pCVar3);
      if (-1 < iVar1) {
        iVar1 = CMS_signed_add1_attr_by_NID(pCVar3,0x33,4,param_3,local_94);
        if (((iVar1 == 0) ||
            (iVar1 = CMS_signed_add1_attr_by_NID
                               (pCVar3,0x32,6,
                                (void *)**(undefined8 **)(*(long *)(param_1 + 8) + 0x10),-1),
            iVar1 < 1)) || (iVar1 = CMS_SignerInfo_sign(pCVar3), iVar1 == 0)) goto LAB_00100e30;
        EVP_MD_CTX_free();
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
LAB_00100dd1:
        iVar6 = iVar6 + 1;
        iVar1 = OPENSSL_sk_num(psVar2);
        if (iVar1 <= iVar6) goto LAB_00100de6;
        goto LAB_00100cf0;
      }
      local_b8 = *(EVP_PKEY_CTX **)(pCVar3 + 0x50);
      if (local_b8 != (EVP_PKEY_CTX *)0x0) {
        *(undefined8 *)(pCVar3 + 0x50) = 0;
        iVar1 = EVP_PKEY_get_size(*(undefined8 *)(pCVar3 + 0x40));
        local_90 = (size_t)iVar1;
        if ((local_90 == 0) ||
           (local_b0 = (uchar *)CRYPTO_malloc(iVar1,"crypto/cms/cms_sd.c",0x31c),
           local_b0 == (uchar *)0x0)) goto LAB_00100eeb;
        iVar1 = EVP_PKEY_sign(local_b8,local_b0,&local_90,param_3,(ulong)local_94);
        if (iVar1 < 1) goto LAB_001011e0;
        ASN1_STRING_set0(*(ASN1_STRING **)(pCVar3 + 0x28),local_b0,(int)local_90);
        EVP_MD_CTX_free(ctx);
        EVP_PKEY_CTX_free(local_b8);
        goto LAB_00100dd1;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0x328,"cms_SignerInfo_content_sign");
      ERR_set_error(0x2e,0xb6,0);
LAB_00100e30:
      EVP_MD_CTX_free();
      EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
      goto LAB_00100e3f;
    }
  }
LAB_00100de6:
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10) = 0;
  uVar4 = 1;
  goto LAB_00100e41;
LAB_00100f08:
  ERR_new();
  ERR_set_debug("crypto/cms/cms_sd.c",0x2ec,"cms_SignerInfo_content_sign");
  ERR_set_error(0x2e,0x8002e,0);
  goto LAB_00100e3f;
LAB_00100e70:
  ERR_new();
  ERR_set_debug("crypto/cms/cms_sd.c",0x2f1,"cms_SignerInfo_content_sign");
  ERR_set_error(0x2e,0x85,0);
  EVP_MD_CTX_free();
  EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
  goto LAB_00100e3f;
LAB_001011e0:
  CRYPTO_free(local_b0);
LAB_00100eeb:
  EVP_MD_CTX_free(ctx);
  EVP_PKEY_CTX_free(local_b8);
LAB_00100e3f:
  uVar4 = 0;
LAB_00100e41:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int CMS_SignerInfo_verify(CMS_SignerInfo *si)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  EVP_MD *pEVar8;
  undefined8 uVar9;
  ASN1_ITEM *it;
  undefined8 uVar10;
  char *name;
  EVP_MD *pEVar11;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uchar *local_a0;
  int local_98;
  short local_94;
  long local_40;
  
  uVar7 = *(undefined8 *)(si + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (uchar *)0x0;
  uVar6 = ossl_cms_ctx_get0_libctx(uVar7);
  uVar7 = ossl_cms_ctx_get0_propq(uVar7);
  if (*(long *)(si + 0x40) == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x3a8,"CMS_SignerInfo_verify");
    ERR_set_error(0x2e,0x86,0);
  }
  else {
    iVar4 = ossl_cms_si_check_attributes(si);
    if (iVar4 != 0) {
      iVar4 = EVP_PKEY_get_default_digest_name(*(undefined8 *)(si + 0x40),&local_98,0x50);
      if (((iVar4 == 2) && (local_98 == 0x45444e55)) && (local_94 == 0x46)) {
        uVar1 = *(undefined8 *)(si + 0x40);
        uVar9 = *(undefined8 *)(si + 0x18);
        uVar2 = *(undefined8 *)(si + 0x28);
        uVar3 = *(undefined8 *)(si + 0x20);
        uVar10 = CMS_Attributes_Sign_it();
        iVar4 = ASN1_item_verify_ex(uVar10,uVar3,uVar2,uVar9,0,uVar1);
        if (iVar4 < 1) {
          ERR_new(uVar7,uVar6);
          ERR_set_debug("crypto/cms/cms_sd.c",0x3b5,"CMS_SignerInfo_verify");
          ERR_set_error(0x2e,0x9e,0);
        }
        goto LAB_001014ee;
      }
      OBJ_obj2txt((char *)&local_98,0x32,(ASN1_OBJECT *)**(undefined8 **)(si + 0x10),0);
      ERR_set_mark();
      pEVar8 = (EVP_MD *)EVP_MD_fetch(uVar6,&local_98,uVar7);
      pEVar11 = pEVar8;
      if (pEVar8 == (EVP_MD *)0x0) {
        iVar4 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(si + 0x10));
        name = OBJ_nid2sn(iVar4);
        pEVar11 = EVP_get_digestbyname(name);
        if (pEVar11 == (EVP_MD *)0x0) {
          ERR_clear_last_mark();
          ERR_new();
          ERR_set_debug("crypto/cms/cms_sd.c",0x3c4,"CMS_SignerInfo_verify");
          ERR_set_error(0x2e,0x95,0);
          goto LAB_00101610;
        }
      }
      ERR_pop_to_mark();
      ctx = *(EVP_MD_CTX **)(si + 0x48);
      if (ctx == (EVP_MD_CTX *)0x0) {
        ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
        *(EVP_MD_CTX **)(si + 0x48) = ctx;
        if (ctx != (EVP_MD_CTX *)0x0) goto LAB_001013af;
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x3ca,"CMS_SignerInfo_verify");
        iVar4 = -1;
        ERR_set_error(0x2e,0x80006,0);
      }
      else {
LAB_001013af:
        if (*(EVP_PKEY_CTX **)(si + 0x50) != (EVP_PKEY_CTX *)0x0) {
          EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(si + 0x50));
          *(undefined8 *)(si + 0x50) = 0;
        }
        uVar1 = *(undefined8 *)(si + 0x40);
        uVar9 = EVP_MD_get0_name(pEVar11);
        iVar4 = EVP_DigestVerifyInit_ex(ctx,si + 0x50,uVar9,uVar6,uVar7,uVar1,0);
        if (iVar4 < 1) {
          *(undefined8 *)(si + 0x50) = 0;
        }
        else {
          iVar4 = -1;
          EVP_MD_CTX_set_flags(ctx,0x400);
          iVar5 = cms_sd_asn1_ctrl(si,1);
          if (iVar5 == 0) goto LAB_001014de;
          it = (ASN1_ITEM *)CMS_Attributes_Verify_it();
          iVar4 = ASN1_item_i2d(*(ASN1_VALUE **)(si + 0x18),&local_a0,it);
          if ((-1 < iVar4) && (local_a0 != (uchar *)0x0)) {
            iVar4 = EVP_DigestVerifyUpdate(ctx,local_a0,(long)iVar4);
            CRYPTO_free(local_a0);
            if (0 < iVar4) {
              iVar4 = EVP_DigestVerifyFinal
                                (ctx,*(uchar **)(*(int **)(si + 0x28) + 2),
                                 (long)**(int **)(si + 0x28));
              if (iVar4 < 1) {
                ERR_new();
                ERR_set_debug("crypto/cms/cms_sd.c",0x3e9,"CMS_SignerInfo_verify");
                ERR_set_error(0x2e,0x9e,0);
              }
              goto LAB_001014de;
            }
          }
        }
        iVar4 = -1;
      }
LAB_001014de:
      EVP_MD_free(pEVar8);
      EVP_MD_CTX_reset(ctx);
      goto LAB_001014ee;
    }
  }
LAB_00101610:
  iVar4 = -1;
LAB_001014ee:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * ossl_cms_SignedData_init_bio(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BIO *append;
  int *piVar6;
  BIO *a;
  
  iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar2 == 0x16) {
    piVar1 = (int *)param_1[1];
    if (piVar1 == (int *)0x0) {
LAB_00101748:
      a = (BIO *)0x0;
    }
    else {
      if (*(int *)(*(long *)(piVar1 + 4) + 0x10) != 0) {
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 6)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          piVar6 = (int *)OPENSSL_sk_value(*(undefined8 *)(piVar1 + 6),iVar2);
          iVar3 = *piVar6;
          if (iVar3 == 4) {
            if (*piVar1 < 5) {
              *piVar1 = 5;
            }
          }
          else if (iVar3 == 3) {
            if (*piVar1 < 4) {
              *piVar1 = 4;
            }
          }
          else if ((iVar3 == 2) && (*piVar1 < 3)) {
            *piVar1 = 3;
          }
        }
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 8)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          piVar6 = (int *)OPENSSL_sk_value(*(undefined8 *)(piVar1 + 8),iVar2);
          if ((*piVar6 == 1) && (*piVar1 < 5)) {
            *piVar1 = 5;
          }
        }
        iVar2 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(piVar1 + 4));
        if ((iVar2 != 0x15) && (*piVar1 < 3)) {
          *piVar1 = 3;
        }
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 10)), iVar2 < iVar3;
            iVar2 = iVar2 + 1) {
          piVar6 = (int *)OPENSSL_sk_value(*(undefined8 *)(piVar1 + 10),iVar2);
          if (**(int **)(piVar6 + 2) == 1) {
            if (*piVar6 < 3) {
              *piVar6 = 3;
            }
            if (*piVar1 < 3) {
              *piVar1 = 3;
            }
          }
          else if (*piVar6 < 1) {
            *piVar6 = 1;
          }
        }
        if (*piVar1 < 1) {
          *piVar1 = 1;
        }
      }
      a = (BIO *)0x0;
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar1 + 2)), iVar2 < iVar3;
          iVar2 = iVar2 + 1) {
        uVar4 = OPENSSL_sk_value(*(undefined8 *)(piVar1 + 2),iVar2);
        uVar5 = ossl_cms_get0_cmsctx(param_1);
        append = (BIO *)ossl_cms_DigestAlgorithm_init_bio(uVar4,uVar5);
        if (append == (BIO *)0x0) {
          BIO_free_all(a);
          goto LAB_00101748;
        }
        if (a != (BIO *)0x0) {
          BIO_push(a,append);
          append = a;
        }
        a = append;
      }
    }
  }
  else {
    ERR_new();
    a = (BIO *)0x0;
    ERR_set_debug("crypto/cms/cms_sd.c",0x1e,"cms_get0_signed");
    ERR_set_error(0x2e,0x6c,0);
  }
  return a;
}



int CMS_SignerInfo_verify_content(CMS_SignerInfo *si,BIO *chain)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  ASN1_OBJECT *oid;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *ctx_00;
  undefined8 uVar7;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x41a,"CMS_SignerInfo_verify_content");
    ERR_set_error(0x2e,0x80006,0);
  }
  else {
    iVar2 = CMS_signed_get_attr_count(si);
    if (iVar2 < 0) {
      puVar4 = (uint *)0x0;
    }
    else {
      oid = OBJ_nid2obj(0x33);
      puVar4 = (uint *)CMS_signed_get0_data_by_OBJ(si,oid,-3,4);
      if (puVar4 == (uint *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x423,"CMS_SignerInfo_verify_content");
        iVar2 = -1;
        ERR_set_error(0x2e,0x72,0);
        ctx_00 = (EVP_PKEY_CTX *)0x0;
        goto LAB_00101996;
      }
    }
    iVar2 = ossl_cms_DigestAlgorithm_find_ctx(ctx,chain,*(undefined8 *)(si + 0x10));
    if (iVar2 != 0) {
      iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_8c);
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x42c,"CMS_SignerInfo_verify_content");
        ERR_set_error(0x2e,0x93,0);
      }
      else if (puVar4 == (uint *)0x0) {
        uVar5 = EVP_MD_CTX_get0_md(ctx);
        uVar7 = *(undefined8 *)(si + 0x58);
        uVar6 = ossl_cms_ctx_get0_propq();
        uVar1 = *(undefined8 *)(si + 0x40);
        uVar7 = ossl_cms_ctx_get0_libctx(uVar7);
        ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar7,uVar1,uVar6);
        if (ctx_00 != (EVP_PKEY_CTX *)0x0) {
          iVar2 = EVP_PKEY_verify_init(ctx_00);
          if (0 < iVar2) {
            iVar2 = EVP_PKEY_CTX_set_signature_md(ctx_00,uVar5);
            if (0 < iVar2) {
              *(EVP_PKEY_CTX **)(si + 0x50) = ctx_00;
              iVar2 = cms_sd_asn1_ctrl(si,1);
              *(undefined8 *)(si + 0x50) = 0;
              if (iVar2 != 0) {
                iVar2 = EVP_PKEY_verify(ctx_00,*(uchar **)(*(int **)(si + 0x28) + 2),
                                        (long)**(int **)(si + 0x28),local_88,(ulong)local_8c);
                if (0 < iVar2) goto LAB_00101996;
                ERR_new();
                uVar7 = 0x453;
                goto LAB_001019f1;
              }
            }
          }
          iVar2 = -1;
          goto LAB_00101996;
        }
      }
      else {
        if (*puVar4 == local_8c) {
          iVar2 = 1;
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          iVar3 = memcmp(local_88,*(void **)(puVar4 + 2),(ulong)local_8c);
          if (iVar3 == 0) goto LAB_00101996;
          ERR_new();
          uVar7 = 0x438;
LAB_001019f1:
          iVar2 = 0;
          ERR_set_debug("crypto/cms/cms_sd.c",uVar7,"CMS_SignerInfo_verify_content");
          ERR_set_error(0x2e,0x9e,0);
          goto LAB_00101996;
        }
        ERR_new();
        ERR_set_debug("crypto/cms/cms_sd.c",0x433,"CMS_SignerInfo_verify_content");
        ERR_set_error(0x2e,0x78,0);
      }
    }
  }
  iVar2 = -1;
  ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00101996:
  EVP_PKEY_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * CMS_SignedData_verify
                (long param_1,BIO *param_2,stack_st_X509 *param_3,X509_STORE *param_4,
                undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                undefined8 param_9)

{
  int iVar1;
  int iVar2;
  CMS_ContentInfo *cms;
  BIO_METHOD *type;
  BIO *out;
  ASN1_OBJECT *pAVar3;
  X509 *cert;
  X509_CRL *crl;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x46a,"CMS_SignedData_verify");
    ERR_set_error(0x2e,0xc0102,0);
  }
  else {
    cms = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_8,param_9);
    if (cms != (CMS_ContentInfo *)0x0) {
      type = BIO_s_mem();
      out = BIO_new(type);
      if (out == (BIO *)0x0) {
LAB_00101cf0:
        *(undefined8 *)(cms + 8) = 0;
        CMS_ContentInfo_free(cms);
      }
      else {
        pAVar3 = OBJ_nid2obj(0x16);
        *(long *)(cms + 8) = param_1;
        *(ASN1_OBJECT **)cms = pAVar3;
        for (iVar2 = 0; iVar1 = OPENSSL_sk_num(param_5), iVar2 < iVar1; iVar2 = iVar2 + 1) {
          cert = (X509 *)OPENSSL_sk_value(param_5,iVar2);
          iVar1 = CMS_add1_cert(cms,cert);
          if (iVar1 == 0) goto LAB_00101cf0;
        }
        for (iVar2 = 0; iVar1 = OPENSSL_sk_num(param_6), iVar2 < iVar1; iVar2 = iVar2 + 1) {
          crl = (X509_CRL *)OPENSSL_sk_value(param_6,iVar2);
          iVar1 = CMS_add1_crl(cms,crl);
          if (iVar1 == 0) goto LAB_00101cf0;
        }
        iVar2 = CMS_verify(cms,param_3,param_4,param_2,out,param_7);
        *(undefined8 *)(cms + 8) = 0;
        CMS_ContentInfo_free(cms);
        if (iVar2 != 0) {
          return out;
        }
      }
      BIO_free(out);
    }
  }
  return (BIO *)0x0;
}



int CMS_add_smimecap(CMS_SignerInfo *si,stack_st_X509_ALGOR *algs)

{
  int len;
  int iVar1;
  long in_FS_OFFSET;
  uchar *local_28;
  long local_20;
  
  iVar1 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (uchar *)0x0;
  len = i2d_X509_ALGORS(algs,&local_28);
  if (0 < len) {
    iVar1 = CMS_signed_add1_attr_by_NID(si,0xa7,0x10,local_28,len);
    CRYPTO_free(local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int CMS_add_simple_smimecap(stack_st_X509_ALGOR **algs,int algnid,int keysize)

{
  int iVar1;
  ASN1_INTEGER *a;
  X509_ALGOR *a_00;
  stack_st_X509_ALGOR *psVar2;
  undefined8 uVar3;
  
  if (keysize < 1) {
    a = (ASN1_INTEGER *)0x0;
    uVar3 = 0xffffffff;
  }
  else {
    a = ASN1_INTEGER_new();
    if (a == (ASN1_INTEGER *)0x0) goto LAB_00101e58;
    iVar1 = ASN1_INTEGER_set(a,(long)keysize);
    uVar3 = 2;
    if (iVar1 == 0) goto LAB_00101e58;
  }
  a_00 = (X509_ALGOR *)ossl_X509_ALGOR_from_nid(algnid,uVar3,a);
  if (a_00 == (X509_ALGOR *)0x0) {
LAB_00101e58:
    ASN1_INTEGER_free(a);
    return 0;
  }
  psVar2 = *algs;
  if (psVar2 == (stack_st_X509_ALGOR *)0x0) {
    psVar2 = (stack_st_X509_ALGOR *)OPENSSL_sk_new_null();
    *algs = psVar2;
    if (psVar2 == (stack_st_X509_ALGOR *)0x0) goto LAB_00101e89;
  }
  iVar1 = OPENSSL_sk_push(psVar2,a_00);
  if (iVar1 != 0) {
    return 1;
  }
LAB_00101e89:
  X509_ALGOR_free(a_00);
  return 0;
}



int CMS_add_standard_smimecap(stack_st_X509_ALGOR **smcap)

{
  int iVar1;
  char *pcVar2;
  EVP_CIPHER *pEVar3;
  EVP_MD *pEVar4;
  
  pcVar2 = OBJ_nid2sn(0x1ab);
  pEVar3 = EVP_get_cipherbyname(pcVar2);
  if ((pEVar3 == (EVP_CIPHER *)0x0) || (iVar1 = CMS_add_simple_smimecap(smcap,0x1ab,-1), iVar1 != 0)
     ) {
    pcVar2 = OBJ_nid2sn(0x3d6);
    pEVar4 = EVP_get_digestbyname(pcVar2);
    if ((pEVar4 == (EVP_MD *)0x0) || (iVar1 = CMS_add_simple_smimecap(smcap,0x3d6,-1), iVar1 != 0))
    {
      pcVar2 = OBJ_nid2sn(0x3d7);
      pEVar4 = EVP_get_digestbyname(pcVar2);
      if ((pEVar4 == (EVP_MD *)0x0) || (iVar1 = CMS_add_simple_smimecap(smcap,0x3d7,-1), iVar1 != 0)
         ) {
        pcVar2 = OBJ_nid2sn(0x329);
        pEVar4 = EVP_get_digestbyname(pcVar2);
        if ((pEVar4 == (EVP_MD *)0x0) ||
           (iVar1 = CMS_add_simple_smimecap(smcap,0x329,-1), iVar1 != 0)) {
          pcVar2 = OBJ_nid2sn(0x32d);
          pEVar3 = EVP_get_cipherbyname(pcVar2);
          if ((pEVar3 == (EVP_CIPHER *)0x0) ||
             (iVar1 = CMS_add_simple_smimecap(smcap,0x32d,-1), iVar1 != 0)) {
            pcVar2 = OBJ_nid2sn(0x1a7);
            pEVar3 = EVP_get_cipherbyname(pcVar2);
            if ((pEVar3 == (EVP_CIPHER *)0x0) ||
               (iVar1 = CMS_add_simple_smimecap(smcap,0x1a7,-1), iVar1 != 0)) {
              pcVar2 = OBJ_nid2sn(0x1a3);
              pEVar3 = EVP_get_cipherbyname(pcVar2);
              if ((pEVar3 == (EVP_CIPHER *)0x0) ||
                 (iVar1 = CMS_add_simple_smimecap(smcap,0x1a3,-1), iVar1 != 0)) {
                pcVar2 = OBJ_nid2sn(0x2c);
                pEVar3 = EVP_get_cipherbyname(pcVar2);
                if ((pEVar3 == (EVP_CIPHER *)0x0) ||
                   (iVar1 = CMS_add_simple_smimecap(smcap,0x2c,-1), iVar1 != 0)) {
                  pcVar2 = OBJ_nid2sn(0x25);
                  pEVar3 = EVP_get_cipherbyname(pcVar2);
                  if ((pEVar3 == (EVP_CIPHER *)0x0) ||
                     (iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x80), iVar1 != 0)) {
                    pcVar2 = OBJ_nid2sn(0x25);
                    pEVar3 = EVP_get_cipherbyname(pcVar2);
                    if ((pEVar3 == (EVP_CIPHER *)0x0) ||
                       (iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x40), iVar1 != 0)) {
                      pcVar2 = OBJ_nid2sn(0x1f);
                      pEVar3 = EVP_get_cipherbyname(pcVar2);
                      if ((pEVar3 == (EVP_CIPHER *)0x0) ||
                         (iVar1 = CMS_add_simple_smimecap(smcap,0x1f,-1), iVar1 != 0)) {
                        pcVar2 = OBJ_nid2sn(0x25);
                        pEVar3 = EVP_get_cipherbyname(pcVar2);
                        if (pEVar3 != (EVP_CIPHER *)0x0) {
                          iVar1 = CMS_add_simple_smimecap(smcap,0x25,0x28);
                          return (int)(iVar1 != 0);
                        }
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



CMS_SignerInfo *
CMS_add1_signer(CMS_ContentInfo *cms,X509 *signer,EVP_PKEY *pk,EVP_MD *md,uint flags)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ASN1_ITEM *pAVar6;
  ASN1_VALUE *pAVar7;
  long lVar8;
  undefined8 uVar9;
  EVP_PKEY_CTX *ctx;
  ASN1_OBJECT *pAVar10;
  undefined8 uVar11;
  char *pcVar12;
  X509_ALGOR *pXVar13;
  stack_st_CMS_SignerInfo *psVar14;
  CMS_SignerInfo *si;
  ASN1_OBJECT *pAVar15;
  void *bytes;
  ASN1_STRING *pAVar16;
  int *piVar17;
  long in_FS_OFFSET;
  uint local_a8;
  ASN1_OBJECT *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = ossl_cms_get0_cmsctx();
  iVar2 = X509_check_private_key(signer,pk);
  if (iVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_sd.c",0x163,"CMS_add1_signer");
    ERR_set_error(0x2e,0x88,0);
  }
  else {
    if (*(long *)(cms + 8) == 0) {
      pAVar6 = (ASN1_ITEM *)CMS_SignedData_it();
      pAVar7 = ASN1_item_new(pAVar6);
      *(ASN1_VALUE **)(cms + 8) = pAVar7;
      if (pAVar7 != (ASN1_VALUE *)0x0) {
        *(undefined4 *)pAVar7 = 1;
        puVar1 = *(undefined8 **)(pAVar7 + 0x10);
        pAVar10 = OBJ_nid2obj(0x15);
        pAVar15 = *(ASN1_OBJECT **)cms;
        *puVar1 = pAVar10;
        *(undefined4 *)(*(long *)(*(long *)(cms + 8) + 0x10) + 0x10) = 1;
        ASN1_OBJECT_free(pAVar15);
        pAVar15 = OBJ_nid2obj(0x16);
        piVar17 = *(int **)(cms + 8);
        *(ASN1_OBJECT **)cms = pAVar15;
        goto LAB_0010220c;
      }
      ERR_new();
      pcVar12 = "cms_signed_data_init";
      uVar5 = 0x29;
LAB_001026f9:
      pAVar7 = (ASN1_VALUE *)0x0;
      ERR_set_debug("crypto/cms/cms_sd.c",uVar5,pcVar12);
      ERR_set_error(0x2e,0x8000d,0);
      goto LAB_00102438;
    }
    iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
    if (iVar2 == 0x16) {
      piVar17 = *(int **)(cms + 8);
LAB_0010220c:
      if (piVar17 == (int *)0x0) goto LAB_00102530;
      pAVar6 = (ASN1_ITEM *)CMS_SignerInfo_it();
      pAVar7 = ASN1_item_new(pAVar6);
      if (pAVar7 == (ASN1_VALUE *)0x0) {
        ERR_new();
        pcVar12 = "CMS_add1_signer";
        uVar5 = 0x16b;
        goto LAB_001026f9;
      }
      X509_check_purpose(signer,-1,-1);
      iVar2 = X509_up_ref(signer);
      if (iVar2 != 0) {
        iVar2 = EVP_PKEY_up_ref(pk);
        if (iVar2 == 0) {
          X509_free(signer);
        }
        else {
          *(X509 **)(pAVar7 + 0x38) = signer;
          *(undefined8 *)(pAVar7 + 0x58) = uVar5;
          *(EVP_PKEY **)(pAVar7 + 0x40) = pk;
          lVar8 = EVP_MD_CTX_new();
          *(undefined8 *)(pAVar7 + 0x50) = 0;
          *(long *)(pAVar7 + 0x48) = lVar8;
          *(undefined4 *)(pAVar7 + 0x60) = 0;
          if (lVar8 == 0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_sd.c",0x180,"CMS_add1_signer");
            ERR_set_error(0x2e,0x80006,0);
          }
          else {
            if ((flags & 0x10000) == 0) {
              *(undefined4 *)pAVar7 = 1;
              uVar11 = 0;
            }
            else {
              iVar2 = *piVar17;
              *(undefined4 *)pAVar7 = 3;
              if (iVar2 < 3) {
                *piVar17 = 3;
              }
              uVar11 = 1;
            }
            iVar2 = ossl_cms_set1_SignerIdentifier(*(undefined8 *)(pAVar7 + 8),signer,uVar11,uVar5);
            if (iVar2 != 0) {
              if (md == (EVP_MD *)0x0) {
                iVar2 = EVP_PKEY_get_default_digest_nid(pk,(int *)&local_80);
                if (iVar2 < 1) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_sd.c",0x195,"CMS_add1_signer");
                  uVar4 = EVP_PKEY_get_id(pk);
                  ERR_set_error(0x2e,0x80,"pkey nid=%d",uVar4);
                }
                else {
                  pcVar12 = OBJ_nid2sn((int)local_80);
                  md = EVP_get_digestbyname(pcVar12);
                  if (md != (EVP_MD *)0x0) goto LAB_001022d2;
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_sd.c",0x19b,"CMS_add1_signer");
                  ERR_set_error(0x2e,0x80,"default md nid=%d",(ulong)local_80 & 0xffffffff);
                }
              }
              else {
LAB_001022d2:
                X509_ALGOR_set_md(*(X509_ALGOR **)(pAVar7 + 0x10),md);
                for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar17 + 2)), iVar2 < iVar3;
                    iVar2 = iVar2 + 1) {
                  pXVar13 = (X509_ALGOR *)OPENSSL_sk_value(*(undefined8 *)(piVar17 + 2));
                  X509_ALGOR_get0(&local_80,(int *)0x0,(void **)0x0,pXVar13);
                  OBJ_obj2txt(local_78,0x32,local_80,0);
                  iVar3 = EVP_MD_is_a(md,local_78);
                  if (iVar3 != 0) break;
                }
                iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar17 + 2));
                if (iVar3 == iVar2) {
                  pXVar13 = X509_ALGOR_new();
                  if (pXVar13 == (X509_ALGOR *)0x0) {
                    ERR_new();
                    ERR_set_debug("crypto/cms/cms_sd.c",0x1b1,"CMS_add1_signer");
                    ERR_set_error(0x2e,0x8000d,0);
                    goto LAB_00102438;
                  }
                  X509_ALGOR_set_md(pXVar13,md);
                  iVar2 = OPENSSL_sk_push(*(undefined8 *)(piVar17 + 2),pXVar13);
                  if (iVar2 != 0) goto LAB_00102368;
                  X509_ALGOR_free(pXVar13);
                  ERR_new();
                  uVar5 = 0x1b7;
LAB_00102413:
                  ERR_set_debug("crypto/cms/cms_sd.c",uVar5,"CMS_add1_signer");
                  ERR_set_error(0x2e,0x8000f,0);
                }
                else {
LAB_00102368:
                  local_a8 = flags & 0x40000;
                  if ((flags & 0x40000) == 0) {
                    iVar2 = cms_sd_asn1_ctrl(pAVar7,0);
                    if (iVar2 == 0) {
                      ERR_new();
                      ERR_set_debug("crypto/cms/cms_sd.c",0x1bd,"CMS_add1_signer");
                      uVar4 = EVP_PKEY_get_id(pk);
                      ERR_set_error(0x2e,0xc3,"pkey nid=%d",uVar4);
                      goto LAB_00102438;
                    }
                    if ((flags & 0x100) != 0) {
LAB_00102880:
                      if (((flags & 2) != 0) || (iVar2 = CMS_add1_cert(cms,signer), iVar2 != 0))
                      goto LAB_001023e8;
                      goto LAB_0010289e;
                    }
LAB_00102598:
                    if (*(long *)(pAVar7 + 0x18) == 0) {
                      lVar8 = OPENSSL_sk_new_null();
                      *(long *)(pAVar7 + 0x18) = lVar8;
                      if (lVar8 == 0) {
                        ERR_new();
                        uVar5 = 0x1c9;
                        goto LAB_00102413;
                      }
                    }
                    if ((flags & 0x200) != 0) {
LAB_001025b1:
                      if ((flags & 0x400000) != 0) {
                        *(undefined4 *)(pAVar7 + 0x60) = 1;
                      }
                      if ((flags & 0x100000) == 0) {
LAB_001025d0:
                        if ((flags & 0x8000) == 0) {
LAB_001025de:
                          if (((flags & 2) == 0) && (iVar2 = CMS_add1_cert(cms,signer), iVar2 == 0))
                          goto LAB_0010289e;
                          if (local_a8 != 0) {
                            uVar11 = ossl_cms_ctx_get0_propq(uVar5);
                            uVar5 = ossl_cms_ctx_get0_libctx(uVar5);
                            uVar9 = EVP_MD_get0_name(md);
                            iVar2 = EVP_DigestSignInit_ex
                                              (*(undefined8 *)(pAVar7 + 0x48),pAVar7 + 0x50,uVar9,
                                               uVar5,uVar11,pk,0);
                            if (iVar2 < 1) {
                              *(undefined8 *)(pAVar7 + 0x50) = 0;
                              goto LAB_00102438;
                            }
                            EVP_MD_CTX_set_flags(*(EVP_MD_CTX **)(pAVar7 + 0x48),0x400);
                          }
LAB_001023e8:
                          lVar8 = *(long *)(piVar17 + 10);
                          if (lVar8 == 0) {
                            lVar8 = OPENSSL_sk_new_null();
                            *(long *)(piVar17 + 10) = lVar8;
                            if (lVar8 != 0) goto LAB_001023f6;
                          }
                          else {
LAB_001023f6:
                            iVar2 = OPENSSL_sk_push(lVar8,pAVar7);
                            if (iVar2 != 0) goto LAB_0010244a;
                          }
                          ERR_new();
                          uVar5 = 0x225;
                          goto LAB_00102413;
                        }
                        psVar14 = CMS_get0_SignerInfos(cms);
                        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(psVar14), iVar2 < iVar3;
                            iVar2 = iVar2 + 1) {
                          si = (CMS_SignerInfo *)OPENSSL_sk_value(psVar14,iVar2);
                          if (((pAVar7 != (ASN1_VALUE *)si) &&
                              (iVar3 = CMS_signed_get_attr_count(si), -1 < iVar3)) &&
                             (iVar3 = OBJ_cmp((ASN1_OBJECT *)**(undefined8 **)(pAVar7 + 0x10),
                                              (ASN1_OBJECT *)**(undefined8 **)(si + 0x10)),
                             iVar3 == 0)) {
                            pAVar15 = OBJ_nid2obj(0x33);
                            bytes = CMS_signed_get0_data_by_OBJ(si,pAVar15,-3,4);
                            if (bytes == (void *)0x0) {
                              ERR_new();
                              ERR_set_debug("crypto/cms/cms_sd.c",0xa0,"cms_copy_messageDigest");
                              ERR_set_error(0x2e,0x72,0);
                              goto LAB_00102438;
                            }
                            iVar2 = CMS_signed_add1_attr_by_NID
                                              ((CMS_SignerInfo *)pAVar7,0x33,4,bytes,-1);
                            if ((iVar2 == 0) ||
                               (iVar2 = CMS_signed_add1_attr_by_NID
                                                  ((CMS_SignerInfo *)pAVar7,0x32,6,
                                                   (void *)**(undefined8 **)
                                                             (*(long *)(cms + 8) + 0x10),-1),
                               iVar2 < 1)) goto LAB_00102438;
                            if ((flags & 0x44000) != 0) goto LAB_001025de;
                            iVar2 = CMS_SignerInfo_sign((CMS_SignerInfo *)pAVar7);
                            if (iVar2 == 0) goto LAB_00102438;
                            goto LAB_00102880;
                          }
                        }
                        ERR_new();
                        ERR_set_debug("crypto/cms/cms_sd.c",0xab,"cms_copy_messageDigest");
                        ERR_set_error(0x2e,0x83,0);
                      }
                      else {
                        iVar2 = EVP_MD_is_a(md,&_LC8);
                        if (iVar2 == 0) {
                          lVar8 = OSSL_ESS_signing_cert_v2_new_init(md,signer,0,1);
                          if (lVar8 != 0) {
                            iVar2 = i2d_ESS_SIGNING_CERT_V2(lVar8,0);
                            if ((0 < iVar2) &&
                               (pAVar15 = (ASN1_OBJECT *)
                                          CRYPTO_malloc(iVar2,"crypto/cms/cms_sd.c",0x147),
                               pAVar15 != (ASN1_OBJECT *)0x0)) {
                              local_80 = pAVar15;
                              i2d_ESS_SIGNING_CERT_V2(lVar8,&local_80);
                              pAVar16 = ASN1_STRING_new();
                              if ((pAVar16 != (ASN1_STRING *)0x0) &&
                                 (iVar2 = ASN1_STRING_set(pAVar16,pAVar15,iVar2), iVar2 != 0)) {
                                CRYPTO_free(pAVar15);
                                iVar2 = CMS_signed_add1_attr_by_NID
                                                  ((CMS_SignerInfo *)pAVar7,0x43e,0x10,pAVar16,-1);
                                ASN1_STRING_free(pAVar16);
                                ESS_SIGNING_CERT_V2_free(lVar8);
                                goto LAB_00102a35;
                              }
                              ASN1_STRING_free(pAVar16);
                              CRYPTO_free(pAVar15);
                            }
                            ESS_SIGNING_CERT_V2_free(lVar8);
                          }
                        }
                        else {
                          lVar8 = OSSL_ESS_signing_cert_new_init(signer,0,1);
                          if (lVar8 != 0) {
                            iVar2 = i2d_ESS_SIGNING_CERT(lVar8,0);
                            if ((0 < iVar2) &&
                               (pAVar15 = (ASN1_OBJECT *)
                                          CRYPTO_malloc(iVar2,"crypto/cms/cms_sd.c",0x12e),
                               pAVar15 != (ASN1_OBJECT *)0x0)) {
                              local_80 = pAVar15;
                              i2d_ESS_SIGNING_CERT(lVar8,&local_80);
                              pAVar16 = ASN1_STRING_new();
                              if ((pAVar16 != (ASN1_STRING *)0x0) &&
                                 (iVar2 = ASN1_STRING_set(pAVar16,pAVar15,iVar2), iVar2 != 0)) {
                                CRYPTO_free(pAVar15);
                                iVar2 = CMS_signed_add1_attr_by_NID
                                                  ((CMS_SignerInfo *)pAVar7,0xdf,0x10,pAVar16,-1);
                                ASN1_STRING_free(pAVar16);
                                ESS_SIGNING_CERT_free(lVar8);
LAB_00102a35:
                                if (iVar2 != 0) goto LAB_001025d0;
                                goto LAB_00102438;
                              }
                              ASN1_STRING_free(pAVar16);
                              CRYPTO_free(pAVar15);
                            }
                            ESS_SIGNING_CERT_free(lVar8);
                          }
                        }
                      }
                      goto LAB_00102438;
                    }
                    local_80 = (ASN1_OBJECT *)0x0;
                    iVar2 = CMS_add_standard_smimecap((stack_st_X509_ALGOR **)&local_80);
                    if (iVar2 == 0) {
                      OPENSSL_sk_pop_free(local_80,X509_ALGOR_free);
                    }
                    else {
                      iVar2 = CMS_add_smimecap((CMS_SignerInfo *)pAVar7,
                                               (stack_st_X509_ALGOR *)local_80);
                      OPENSSL_sk_pop_free(local_80,X509_ALGOR_free);
                      if (iVar2 != 0) goto LAB_001025b1;
                    }
                    ERR_new();
                    uVar5 = 0x1d6;
                  }
                  else {
                    if ((flags & 0x100) == 0) goto LAB_00102598;
                    if (((flags & 2) != 0) || (iVar2 = CMS_add1_cert(cms,signer), iVar2 != 0)) {
                      uVar9 = ossl_cms_ctx_get0_propq(uVar5);
                      uVar11 = *(undefined8 *)(pAVar7 + 0x40);
                      uVar5 = ossl_cms_ctx_get0_libctx(uVar5);
                      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar5,uVar11,uVar9);
                      *(EVP_PKEY_CTX **)(pAVar7 + 0x50) = ctx;
                      if (((ctx == (EVP_PKEY_CTX *)0x0) ||
                          (iVar2 = EVP_PKEY_sign_init(ctx), iVar2 < 1)) ||
                         (iVar2 = EVP_PKEY_CTX_set_signature_md(*(undefined8 *)(pAVar7 + 0x50),md),
                         iVar2 < 1)) goto LAB_00102438;
                      goto LAB_001023e8;
                    }
LAB_0010289e:
                    ERR_new();
                    uVar5 = 0x205;
                  }
                  ERR_set_debug("crypto/cms/cms_sd.c",uVar5,"CMS_add1_signer");
                  ERR_set_error(0x2e,0x8002e,0);
                }
              }
            }
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_sd.c",0x1e,"cms_get0_signed");
      ERR_set_error(0x2e,0x6c,0);
LAB_00102530:
      pAVar7 = (ASN1_VALUE *)0x0;
    }
LAB_00102438:
    pAVar6 = (ASN1_ITEM *)CMS_SignerInfo_it();
    ASN1_item_free(pAVar7,pAVar6);
  }
  pAVar7 = (ASN1_VALUE *)0x0;
LAB_0010244a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (CMS_SignerInfo *)pAVar7;
}



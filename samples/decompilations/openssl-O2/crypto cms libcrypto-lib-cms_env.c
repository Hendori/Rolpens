
undefined8 cms_get_key_wrap_cipher(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_1 == 0x18) {
    pcVar3 = "AES-192-WRAP";
  }
  else if (param_1 == 0x20) {
    pcVar3 = "AES-256-WRAP";
  }
  else {
    pcVar3 = "AES-128-WRAP";
    if (param_1 != 0x10) {
      return 0;
    }
  }
  uVar1 = ossl_cms_ctx_get0_propq(param_2);
  uVar2 = ossl_cms_ctx_get0_libctx(param_2);
  uVar1 = EVP_CIPHER_fetch(uVar2,pcVar3,uVar1);
  return uVar1;
}



void cms_env_set_version(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (3 < iVar4) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    iVar4 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*puVar1);
      if (iVar2 <= iVar4) break;
      piVar3 = (int *)OPENSSL_sk_value(*puVar1,iVar4);
      if (*piVar3 == 4) goto LAB_00100158;
      if ((*piVar3 == 3) && (*param_1 < 3)) {
        *param_1 = 3;
      }
      iVar4 = iVar4 + 1;
    }
    iVar4 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(puVar1[1]);
      if (iVar2 <= iVar4) break;
      piVar3 = (int *)OPENSSL_sk_value(puVar1[1],iVar4);
      if (*piVar3 == 1) {
LAB_00100158:
        *param_1 = 4;
        return;
      }
      iVar4 = iVar4 + 1;
    }
    iVar4 = *param_1;
  }
  if (iVar4 < 3) {
    iVar4 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 4));
      if (iVar2 <= iVar4) break;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 4),iVar4);
      if (*piVar3 - 3U < 2) {
        *param_1 = 3;
        return;
      }
      if ((*piVar3 != 0) || (**(int **)(piVar3 + 2) != 0)) {
        *param_1 = 2;
      }
      iVar4 = iVar4 + 1;
    }
    if ((*(long *)(param_1 + 2) == 0) && (*(long *)(param_1 + 8) == 0)) {
      if (*param_1 != 2) {
        *param_1 = 0;
        return;
      }
    }
    else {
      *param_1 = 2;
    }
  }
  return;
}



undefined8 ossl_cms_get0_enveloped(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x17) {
    return param_1[1];
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x39,"ossl_cms_get0_enveloped");
  ERR_set_error(0x2e,0x6b,0);
  return 0;
}



undefined8 ossl_cms_get0_auth_enveloped(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x423) {
    return param_1[1];
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x42,"ossl_cms_get0_auth_enveloped");
  ERR_set_error(0x2e,0x6b,0);
  return 0;
}



undefined8 ossl_cms_env_asn1_ctrl(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY *pEVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    pEVar3 = *(EVP_PKEY **)(*(long *)(param_1 + 2) + 0x28);
  }
  else if (((*param_1 != 1) ||
           (*(EVP_PKEY_CTX **)(*(long *)(param_1 + 2) + 0x28) == (EVP_PKEY_CTX *)0x0)) ||
          (pEVar3 = EVP_PKEY_CTX_get0_pkey(*(EVP_PKEY_CTX **)(*(long *)(param_1 + 2) + 0x28)),
          pEVar3 == (EVP_PKEY *)0x0)) {
    return 0;
  }
  iVar2 = EVP_PKEY_is_a(pEVar3,&_LC4);
  if ((iVar2 != 0) || (iVar2 = EVP_PKEY_is_a(pEVar3,&_LC5), iVar2 != 0)) {
    uVar4 = ossl_cms_dh_envelope(param_1,param_2);
    return uVar4;
  }
  iVar2 = EVP_PKEY_is_a(pEVar3,&_LC6);
  if (iVar2 != 0) {
    uVar4 = ossl_cms_ecdh_envelope(param_1,param_2);
    return uVar4;
  }
  iVar2 = EVP_PKEY_is_a(pEVar3,&_LC7);
  if (iVar2 == 0) {
    if ((*(long *)&pEVar3->references != 0) &&
       (pcVar1 = *(code **)(*(long *)&pEVar3->references + 0xb0), pcVar1 != (code *)0x0)) {
      iVar2 = (*pcVar1)(pEVar3,7,(long)param_2,param_1);
      if (iVar2 == -2) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x8b,"ossl_cms_env_asn1_ctrl");
        ERR_set_error(0x2e,0x7d,0);
        return 0;
      }
      if (iVar2 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x8f,"ossl_cms_env_asn1_ctrl");
        ERR_set_error(0x2e,0x6f,0);
        return 0;
      }
    }
    return 1;
  }
  uVar4 = ossl_cms_rsa_envelope(param_1,param_2);
  return uVar4;
}



undefined8 ossl_cms_get0_env_enc_content(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if ((iVar1 == 0x17) || (iVar1 == 0x423)) {
    if (param_1[1] != 0) {
      return *(undefined8 *)(param_1[1] + 0x18);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x32,"cms_get_enveloped_type");
    ERR_set_error(0x2e,0x6b,0);
  }
  return 0;
}



stack_st_CMS_RecipientInfo * CMS_get0_RecipientInfos(CMS_ContentInfo *cms)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if ((iVar1 != 0x17) && (iVar1 != 0x423)) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x32,"cms_get_enveloped_type");
    ERR_set_error(0x2e,0x6b,0);
    return (stack_st_CMS_RecipientInfo *)0x0;
  }
  return *(stack_st_CMS_RecipientInfo **)(*(long *)(cms + 8) + 0x10);
}



void ossl_cms_RecipientInfos_set_cmsctx(CMS_ContentInfo *param_1)

{
  int iVar1;
  undefined8 uVar2;
  stack_st_CMS_RecipientInfo *psVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  iVar7 = 0;
  uVar2 = ossl_cms_get0_cmsctx();
  psVar3 = CMS_get0_RecipientInfos(param_1);
  do {
    iVar1 = OPENSSL_sk_num(psVar3);
    if (iVar1 <= iVar7) {
      return;
    }
    piVar4 = (int *)OPENSSL_sk_value(psVar3,iVar7);
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      if (iVar1 == 2) {
LAB_00100527:
        *(undefined8 *)(*(long *)(piVar4 + 2) + 0x30) = uVar2;
      }
      else if (iVar1 < 3) {
        if (iVar1 == 0) {
          *(undefined8 *)(*(long *)(piVar4 + 2) + 0x38) = uVar2;
          uVar5 = ossl_cms_ctx_get0_propq(uVar2);
          uVar6 = ossl_cms_ctx_get0_libctx(uVar2);
          ossl_x509_set0_libctx(*(undefined8 *)(*(long *)(piVar4 + 2) + 0x20),uVar6,uVar5);
        }
        else if (iVar1 == 1) {
          *(undefined8 *)(*(long *)(piVar4 + 2) + 0x38) = uVar2;
        }
      }
      else if (iVar1 == 3) goto LAB_00100527;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



int CMS_RecipientInfo_type(CMS_RecipientInfo *ri)

{
  return *(int *)ri;
}



undefined8 CMS_RecipientInfo_get0_pkey_ctx(int *param_1)

{
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  if (*param_1 != 1) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
}



CMS_ContentInfo *
CMS_EnvelopedData_create_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  CMS_ContentInfo *a;
  long lVar3;
  undefined8 uVar4;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar5;
  ASN1_OBJECT *pAVar6;
  ASN1_OBJECT *pAVar7;
  
  a = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_2,param_3);
  if (a != (CMS_ContentInfo *)0x0) {
    if (*(long *)(a + 8) == 0) {
      it = (ASN1_ITEM *)CMS_EnvelopedData_it();
      pAVar5 = ASN1_item_new(it);
      *(ASN1_VALUE **)(a + 8) = pAVar5;
      if (pAVar5 == (ASN1_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x4d,"cms_enveloped_data_init");
        ERR_set_error(0x2e,0x8000d,0);
        goto LAB_0010063f;
      }
      *(undefined4 *)pAVar5 = 0;
      puVar1 = *(undefined8 **)(pAVar5 + 0x18);
      pAVar6 = OBJ_nid2obj(0x15);
      pAVar7 = *(ASN1_OBJECT **)a;
      *puVar1 = pAVar6;
      ASN1_OBJECT_free(pAVar7);
      pAVar7 = OBJ_nid2obj(0x17);
      lVar3 = *(long *)(a + 8);
      *(ASN1_OBJECT **)a = pAVar7;
    }
    else {
      lVar3 = ossl_cms_get0_enveloped(a);
    }
    if (lVar3 != 0) {
      uVar4 = ossl_cms_get0_cmsctx(a);
      iVar2 = ossl_cms_EncryptedContent_init(*(undefined8 *)(lVar3 + 0x18),param_1,0,0,uVar4);
      if (iVar2 != 0) {
        return a;
      }
    }
  }
LAB_0010063f:
  CMS_ContentInfo_free(a);
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0xf6,"CMS_EnvelopedData_create_ex");
  ERR_set_error(0x2e,0x8002e,0);
  return (CMS_ContentInfo *)0x0;
}



CMS_ContentInfo * CMS_EnvelopedData_create(EVP_CIPHER *cipher)

{
  CMS_ContentInfo *pCVar1;
  
  pCVar1 = (CMS_ContentInfo *)CMS_EnvelopedData_create_ex(cipher,0,0);
  return pCVar1;
}



BIO * CMS_EnvelopedData_decrypt
                (long param_1,BIO *param_2,EVP_PKEY *param_3,X509 *param_4,ASN1_STRING *param_5,
                uint param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  CMS_ContentInfo *a;
  BIO_METHOD *type;
  BIO *out;
  ASN1_OBJECT *pAVar2;
  uchar *pass;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x109,"CMS_EnvelopedData_decrypt");
    ERR_set_error(0x2e,0xc0102,0);
    return (BIO *)0x0;
  }
  a = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_7,param_8);
  if (a == (CMS_ContentInfo *)0x0) {
    CMS_ContentInfo_free((CMS_ContentInfo *)0x0);
  }
  else {
    type = BIO_s_mem();
    out = BIO_new(type);
    if (out != (BIO *)0x0) {
      pAVar2 = OBJ_nid2obj(0x17);
      *(long *)(a + 8) = param_1;
      *(ASN1_OBJECT **)a = pAVar2;
      if (param_5 != (ASN1_STRING *)0x0) {
        iVar1 = ASN1_STRING_length(param_5);
        pass = (uchar *)ASN1_STRING_get0_data(param_5);
        iVar1 = CMS_decrypt_set1_password(a,pass,(long)iVar1);
        if (iVar1 != 1) {
          *(undefined1 (*) [16])a = (undefined1  [16])0x0;
          CMS_ContentInfo_free(a);
          goto LAB_0010082a;
        }
        param_4 = (X509 *)0x0;
        param_3 = (EVP_PKEY *)0x0;
      }
      iVar1 = CMS_decrypt(a,param_3,param_4,param_2,out,param_6);
      *(undefined1 (*) [16])a = (undefined1  [16])0x0;
      CMS_ContentInfo_free(a);
      if (iVar1 != 0) {
        return out;
      }
      goto LAB_0010082a;
    }
    *(undefined1 (*) [16])a = (undefined1  [16])0x0;
    CMS_ContentInfo_free(a);
  }
  out = (BIO *)0x0;
LAB_0010082a:
  BIO_free(out);
  return (BIO *)0x0;
}



CMS_ContentInfo *
CMS_AuthEnvelopedData_create_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  CMS_ContentInfo *a;
  long lVar3;
  undefined8 uVar4;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar5;
  ASN1_OBJECT *pAVar6;
  ASN1_OBJECT *pAVar7;
  
  a = (CMS_ContentInfo *)CMS_ContentInfo_new_ex(param_2,param_3);
  if (a != (CMS_ContentInfo *)0x0) {
    if (*(long *)(a + 8) == 0) {
      it = (ASN1_ITEM *)CMS_AuthEnvelopedData_it();
      pAVar5 = ASN1_item_new(it);
      *(ASN1_VALUE **)(a + 8) = pAVar5;
      if (pAVar5 == (ASN1_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x60,"cms_auth_enveloped_data_init");
        ERR_set_error(0x2e,0x8000d,0);
        goto LAB_001008ff;
      }
      *(undefined4 *)pAVar5 = 0;
      puVar1 = *(undefined8 **)(pAVar5 + 0x18);
      pAVar6 = OBJ_nid2obj(0x15);
      pAVar7 = *(ASN1_OBJECT **)a;
      *puVar1 = pAVar6;
      ASN1_OBJECT_free(pAVar7);
      pAVar7 = OBJ_nid2obj(0x423);
      lVar3 = *(long *)(a + 8);
      *(ASN1_OBJECT **)a = pAVar7;
    }
    else {
      lVar3 = ossl_cms_get0_auth_enveloped(a);
    }
    if (lVar3 != 0) {
      uVar4 = ossl_cms_get0_cmsctx(a);
      iVar2 = ossl_cms_EncryptedContent_init(*(undefined8 *)(lVar3 + 0x18),param_1,0,0,uVar4);
      if (iVar2 != 0) {
        return a;
      }
    }
  }
LAB_001008ff:
  CMS_ContentInfo_free(a);
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x13b,"CMS_AuthEnvelopedData_create_ex");
  ERR_set_error(0x2e,0x8002e,0);
  return (CMS_ContentInfo *)0x0;
}



void CMS_AuthEnvelopedData_create(undefined8 param_1)

{
  CMS_AuthEnvelopedData_create_ex(param_1,0,0);
  return;
}



int CMS_RecipientInfo_ktri_get0_algs
              (CMS_RecipientInfo *ri,EVP_PKEY **pk,X509 **recip,X509_ALGOR **palg)

{
  long lVar1;
  
  if (*(int *)ri == 0) {
    lVar1 = *(long *)(ri + 8);
    if (pk != (EVP_PKEY **)0x0) {
      *pk = *(EVP_PKEY **)(lVar1 + 0x28);
    }
    if (recip != (X509 **)0x0) {
      *recip = *(X509 **)(lVar1 + 0x20);
    }
    if (palg != (X509_ALGOR **)0x0) {
      *palg = *(X509_ALGOR **)(lVar1 + 0x10);
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x1c9,"CMS_RecipientInfo_ktri_get0_algs");
  ERR_set_error(0x2e,0x7c,0);
  return 0;
}



int CMS_RecipientInfo_ktri_get0_signer_id
              (CMS_RecipientInfo *ri,ASN1_OCTET_STRING **keyid,X509_NAME **issuer,ASN1_INTEGER **sno
              )

{
  int iVar1;
  
  if (*(int *)ri == 0) {
    iVar1 = ossl_cms_SignerIdentifier_get0_signer_id(*(undefined8 *)(*(long *)(ri + 8) + 8));
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x1df,"CMS_RecipientInfo_ktri_get0_signer_id");
  ERR_set_error(0x2e,0x7c,0);
  return 0;
}



int CMS_RecipientInfo_ktri_cert_cmp(CMS_RecipientInfo *ri,X509 *cert)

{
  int iVar1;
  
  if (*(int *)ri == 0) {
    iVar1 = ossl_cms_SignerIdentifier_cert_cmp(*(undefined8 *)(*(long *)(ri + 8) + 8));
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x1eb,"CMS_RecipientInfo_ktri_cert_cmp");
  ERR_set_error(0x2e,0x7c,0);
  return -2;
}



int CMS_RecipientInfo_set0_pkey(CMS_RecipientInfo *ri,EVP_PKEY *pkey)

{
  if (*(int *)ri == 0) {
    EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(ri + 8) + 0x28));
    *(EVP_PKEY **)(*(long *)(ri + 8) + 0x28) = pkey;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",500,"CMS_RecipientInfo_set0_pkey");
  ERR_set_error(0x2e,0x7c,0);
  return 0;
}



int CMS_RecipientInfo_kekri_id_cmp(CMS_RecipientInfo *ri,uchar *id,size_t idlen)

{
  int iVar1;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)ri == 2) {
    local_28.length = (int)idlen;
    local_28.type = 4;
    local_28.flags = 0;
    local_28.data = id;
    iVar1 = ASN1_OCTET_STRING_cmp
                      (&local_28,(ASN1_OCTET_STRING *)**(undefined8 **)(*(long *)(ri + 8) + 8));
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x296,"CMS_RecipientInfo_kekri_id_cmp");
    ERR_set_error(0x2e,0x7b,0);
    iVar1 = -2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



CMS_RecipientInfo *
CMS_add0_recipient_key
          (CMS_ContentInfo *cms,int nid,uchar *key,size_t keylen,uchar *id,size_t idlen,
          ASN1_GENERALIZEDTIME *date,ASN1_OBJECT *otherTypeId,ASN1_TYPE *otherType)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  stack_st_CMS_RecipientInfo *psVar4;
  ASN1_ITEM *pAVar5;
  ASN1_VALUE *val;
  ASN1_VALUE *pAVar6;
  ASN1_VALUE *pAVar7;
  ASN1_OBJECT *aobj;
  undefined8 uVar8;
  int local_48;
  
  psVar4 = CMS_get0_RecipientInfos(cms);
  if (psVar4 != (stack_st_CMS_RecipientInfo *)0x0) {
    if (nid == 0) {
      if (keylen == 0x18) {
        nid = 0x315;
      }
      else if (keylen == 0x20) {
        nid = 0x316;
      }
      else {
        if (keylen != 0x10) {
          ERR_new();
          uVar8 = 0x2d1;
          goto LAB_00100ca4;
        }
        nid = 0x314;
      }
LAB_00100d03:
      pAVar5 = (ASN1_ITEM *)CMS_RecipientInfo_it();
      val = ASN1_item_new(pAVar5);
      if (val != (ASN1_VALUE *)0x0) {
        pAVar5 = (ASN1_ITEM *)CMS_KEKRecipientInfo_it();
        pAVar6 = ASN1_item_new(pAVar5);
        *(ASN1_VALUE **)(val + 8) = pAVar6;
        if (pAVar6 == (ASN1_VALUE *)0x0) {
          ERR_new();
          uVar8 = 0x2ee;
LAB_00100f09:
          ERR_set_debug("crypto/cms/cms_env.c",uVar8,"CMS_add0_recipient_key");
          ERR_set_error(0x2e,0x8000d,0);
        }
        else {
          *(undefined4 *)val = 2;
          if (otherTypeId != (ASN1_OBJECT *)0x0) {
            pAVar5 = (ASN1_ITEM *)CMS_OtherKeyAttribute_it();
            lVar1 = *(long *)(pAVar6 + 8);
            pAVar7 = ASN1_item_new(pAVar5);
            *(ASN1_VALUE **)(lVar1 + 0x10) = pAVar7;
            if (*(long *)(*(long *)(pAVar6 + 8) + 0x10) == 0) {
              ERR_new();
              uVar8 = 0x2f8;
              goto LAB_00100f09;
            }
          }
          iVar3 = OPENSSL_sk_push(psVar4,val);
          if (iVar3 != 0) {
            local_48 = (int)idlen;
            *(undefined4 *)pAVar6 = 4;
            *(uchar **)(pAVar6 + 0x20) = key;
            *(size_t *)(pAVar6 + 0x28) = keylen;
            ASN1_STRING_set0((ASN1_STRING *)**(undefined8 **)(pAVar6 + 8),id,local_48);
            lVar1 = *(long *)(pAVar6 + 8);
            *(ASN1_GENERALIZEDTIME **)(lVar1 + 8) = date;
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = otherTypeId;
              puVar2[1] = otherType;
            }
            aobj = OBJ_nid2obj(nid);
            X509_ALGOR_set0(*(X509_ALGOR **)(pAVar6 + 0x10),aobj,-1,(void *)0x0);
            return (CMS_RecipientInfo *)val;
          }
          ERR_new();
          ERR_set_debug("crypto/cms/cms_env.c",0x2fe,"CMS_add0_recipient_key");
          ERR_set_error(0x2e,0x8000f,0);
        }
        goto LAB_00100cc5;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x2e8,"CMS_add0_recipient_key");
      ERR_set_error(0x2e,0x8000d,0);
    }
    else if (nid - 0x314U < 3) {
      if (keylen == (long)nid * 8 - 0x1890U) goto LAB_00100d03;
      ERR_new();
      uVar8 = 0x2df;
LAB_00100ca4:
      ERR_set_debug("crypto/cms/cms_env.c",uVar8,"CMS_add0_recipient_key");
      ERR_set_error(0x2e,0x76,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x2da,"CMS_add0_recipient_key");
      ERR_set_error(0x2e,0x99,0);
    }
  }
  val = (ASN1_VALUE *)0x0;
LAB_00100cc5:
  pAVar5 = (ASN1_ITEM *)CMS_RecipientInfo_it();
  ASN1_item_free(val,pAVar5);
  return (CMS_RecipientInfo *)0x0;
}



int CMS_RecipientInfo_kekri_get0_id
              (CMS_RecipientInfo *ri,X509_ALGOR **palg,ASN1_OCTET_STRING **pid,
              ASN1_GENERALIZEDTIME **pdate,ASN1_OBJECT **potherid,ASN1_TYPE **pothertype)

{
  undefined8 *puVar1;
  
  if (*(int *)ri != 2) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x325,"CMS_RecipientInfo_kekri_get0_id");
    ERR_set_error(0x2e,0x7b,0);
    return 0;
  }
  puVar1 = *(undefined8 **)(*(long *)(ri + 8) + 8);
  if (palg != (X509_ALGOR **)0x0) {
    *palg = *(X509_ALGOR **)(*(long *)(ri + 8) + 0x10);
  }
  if (pid != (ASN1_OCTET_STRING **)0x0) {
    *pid = (ASN1_OCTET_STRING *)*puVar1;
  }
  if (pdate != (ASN1_GENERALIZEDTIME **)0x0) {
    *pdate = (ASN1_GENERALIZEDTIME *)puVar1[1];
  }
  if (potherid == (ASN1_OBJECT **)0x0) {
    if (pothertype == (ASN1_TYPE **)0x0) {
      return 1;
    }
    puVar1 = (undefined8 *)puVar1[2];
    if (puVar1 == (undefined8 *)0x0) goto LAB_00100fbe;
  }
  else {
    puVar1 = (undefined8 *)puVar1[2];
    if (puVar1 == (undefined8 *)0x0) {
      *potherid = (ASN1_OBJECT *)0x0;
      if (pothertype == (ASN1_TYPE **)0x0) {
        return 1;
      }
LAB_00100fbe:
      *pothertype = (ASN1_TYPE *)0x0;
      return 1;
    }
    *potherid = (ASN1_OBJECT *)*puVar1;
    if (pothertype == (ASN1_TYPE **)0x0) {
      return 1;
    }
  }
  *pothertype = (ASN1_TYPE *)puVar1[1];
  return 1;
}



int CMS_RecipientInfo_set0_key(CMS_RecipientInfo *ri,uchar *key,size_t keylen)

{
  long lVar1;
  
  if (*(int *)ri == 2) {
    lVar1 = *(long *)(ri + 8);
    *(uchar **)(lVar1 + 0x20) = key;
    *(size_t *)(lVar1 + 0x28) = keylen;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_env.c",0x343,"CMS_RecipientInfo_set0_key");
  ERR_set_error(0x2e,0x7b,0);
  return 0;
}



int CMS_RecipientInfo_decrypt(CMS_ContentInfo *cms,CMS_RecipientInfo *ri)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  EVP_PKEY_CTX *pEVar7;
  undefined8 uVar8;
  long lVar9;
  uchar *out;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *pEVar10;
  char *name;
  EVP_CIPHER *pEVar11;
  long lVar12;
  long in_FS_OFFSET;
  void *local_88;
  int local_80;
  undefined4 uStack_7c;
  char local_78 [56];
  long local_40;
  
  iVar3 = *(int *)ri;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 2) {
    local_80 = 0;
    uVar8 = ossl_cms_get0_cmsctx();
    lVar9 = ossl_cms_get0_env_enc_content(cms);
    if (lVar9 != 0) {
      lVar6 = *(long *)(ri + 8);
      if (*(long *)(lVar6 + 0x20) == 0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x3be,"cms_RecipientInfo_kekri_decrypt");
        ERR_set_error(0x2e,0x82,0);
      }
      else {
        iVar3 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(lVar6 + 0x10));
        lVar12 = 0;
        if (iVar3 - 0x314U < 3) {
          lVar12 = (long)iVar3 * 8 + -0x1890;
        }
        if (*(long *)(lVar6 + 0x28) == lVar12) {
          if (**(int **)(lVar6 + 0x18) < 0x10) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_env.c",0x3cb,"cms_RecipientInfo_kekri_decrypt");
            uVar8 = 0x75;
LAB_001015a7:
            ERR_set_error(0x2e,uVar8,0);
            EVP_CIPHER_free(0);
LAB_001015ba:
            ctx = (EVP_CIPHER_CTX *)0x0;
            out = (uchar *)0x0;
LAB_0010153c:
            iVar3 = 0;
            CRYPTO_free(out);
          }
          else {
            pEVar11 = (EVP_CIPHER *)cms_get_key_wrap_cipher(lVar12,uVar8);
            if (pEVar11 == (EVP_CIPHER *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/cms/cms_env.c",0x3d1,"cms_RecipientInfo_kekri_decrypt");
              uVar8 = 0x76;
              goto LAB_001015a7;
            }
            out = (uchar *)CRYPTO_malloc(**(int **)(lVar6 + 0x18) + -8,"crypto/cms/cms_env.c",0x3d5)
            ;
            if (out == (uchar *)0x0) {
              EVP_CIPHER_free(pEVar11);
              goto LAB_001015ba;
            }
            ctx = EVP_CIPHER_CTX_new();
            if (ctx == (EVP_CIPHER_CTX *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/cms/cms_env.c",0x3db,"cms_RecipientInfo_kekri_decrypt");
              uVar8 = 0x80006;
LAB_00101528:
              ERR_set_error(0x2e,uVar8,0);
              EVP_CIPHER_free(pEVar11);
              goto LAB_0010153c;
            }
            iVar3 = EVP_DecryptInit_ex(ctx,pEVar11,(ENGINE *)0x0,*(uchar **)(lVar6 + 0x20),
                                       (uchar *)0x0);
            if (iVar3 == 0) {
LAB_00101558:
              ERR_new();
              ERR_set_debug("crypto/cms/cms_env.c",0x3e4,"cms_RecipientInfo_kekri_decrypt");
              uVar8 = 0x9d;
              goto LAB_00101528;
            }
            iVar3 = EVP_DecryptUpdate(ctx,out,(int *)&local_88,
                                      *(uchar **)(*(int **)(lVar6 + 0x18) + 2),
                                      **(int **)(lVar6 + 0x18));
            if (iVar3 == 0) goto LAB_00101558;
            iVar3 = EVP_DecryptFinal_ex(ctx,out + (int)local_88,&local_80);
            if (iVar3 == 0) goto LAB_00101558;
            local_88 = (void *)CONCAT44(local_88._4_4_,(int)local_88 + local_80);
            iVar3 = 1;
            CRYPTO_clear_free(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28),
                              "crypto/cms/cms_env.c",0x3e9);
            *(uchar **)(lVar9 + 0x20) = out;
            *(long *)(lVar9 + 0x28) = (long)(int)local_88;
            EVP_CIPHER_free(pEVar11);
          }
          EVP_CIPHER_CTX_free(ctx);
          goto LAB_0010136b;
        }
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x3c4,"cms_RecipientInfo_kekri_decrypt");
        ERR_set_error(0x2e,0x76,0);
      }
    }
LAB_00101368:
    iVar3 = 0;
  }
  else {
    if (iVar3 == 3) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar3 = ossl_cms_RecipientInfo_pwri_crypt(cms,ri,0);
        return iVar3;
      }
      goto LAB_001016bc;
    }
    if (iVar3 != 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x405,"CMS_RecipientInfo_decrypt");
      ERR_set_error(0x2e,0x9b,0);
      goto LAB_00101368;
    }
    lVar9 = *(long *)(ri + 8);
    uVar8 = *(undefined8 *)(lVar9 + 0x28);
    local_88 = (void *)0x0;
    uVar4 = ossl_cms_get0_cmsctx();
    uVar5 = ossl_cms_ctx_get0_libctx(uVar4);
    uVar4 = ossl_cms_ctx_get0_propq(uVar4);
    lVar6 = ossl_cms_get0_env_enc_content(cms);
    iVar3 = 0;
    if (*(long *)(lVar9 + 0x28) == 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x24c,"cms_RecipientInfo_ktri_decrypt");
      ERR_set_error(0x2e,0x85,0);
    }
    else {
      lVar12 = 0;
      if ((*(int *)(*(long *)(*(long *)(cms + 8) + 0x18) + 0x44) != 0) &&
         (*(int *)(*(long *)(*(long *)(cms + 8) + 0x18) + 0x40) == 0)) {
        puVar1 = *(undefined8 **)(lVar6 + 8);
        OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)*puVar1,0);
        ERR_set_mark();
        pEVar10 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar5,local_78,uVar4);
        pEVar11 = pEVar10;
        if (pEVar10 == (EVP_CIPHER *)0x0) {
          iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar1);
          name = OBJ_nid2sn(iVar2);
          pEVar11 = EVP_get_cipherbyname(name);
          if (pEVar11 == (EVP_CIPHER *)0x0) {
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("crypto/cms/cms_env.c",0x260,"cms_RecipientInfo_ktri_decrypt");
            ERR_set_error(0x2e,0x94,0);
            goto LAB_0010136b;
          }
        }
        ERR_pop_to_mark();
        iVar2 = EVP_CIPHER_get_key_length(pEVar11);
        lVar12 = (long)iVar2;
        EVP_CIPHER_free(pEVar10);
      }
      pEVar7 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar5,uVar8,uVar4);
      *(EVP_PKEY_CTX **)(lVar9 + 0x30) = pEVar7;
      if (pEVar7 != (EVP_PKEY_CTX *)0x0) {
        iVar2 = EVP_PKEY_decrypt_init(pEVar7);
        if (0 < iVar2) {
          iVar2 = ossl_cms_env_asn1_ctrl(ri,1);
          if (iVar2 != 0) {
            iVar2 = EVP_PKEY_is_a(uVar8,&_LC7);
            if (iVar2 != 0) {
              EVP_PKEY_CTX_ctrl_str
                        (*(EVP_PKEY_CTX **)(lVar9 + 0x30),"rsa_pkcs1_implicit_rejection","0");
            }
            iVar2 = evp_pkey_decrypt_alloc
                              (*(undefined8 *)(lVar9 + 0x30),&local_88,&local_80,lVar12,
                               *(undefined8 *)(*(int **)(lVar9 + 0x18) + 2),
                               (long)**(int **)(lVar9 + 0x18));
            if (0 < iVar2) {
              iVar3 = 1;
              CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                                "crypto/cms/cms_env.c",0x281);
              pEVar7 = *(EVP_PKEY_CTX **)(lVar9 + 0x30);
              *(void **)(lVar6 + 0x20) = local_88;
              *(ulong *)(lVar6 + 0x28) = CONCAT44(uStack_7c,local_80);
              EVP_PKEY_CTX_free(pEVar7);
              *(undefined8 *)(lVar9 + 0x30) = 0;
              goto LAB_0010136b;
            }
          }
        }
        pEVar7 = *(EVP_PKEY_CTX **)(lVar9 + 0x30);
      }
      EVP_PKEY_CTX_free(pEVar7);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      CRYPTO_free(local_88);
    }
  }
LAB_0010136b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
LAB_001016bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong CMS_RecipientInfo_encrypt(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar6;
  long lVar7;
  uchar *out;
  undefined8 uVar8;
  EVP_PKEY_CTX *ctx_00;
  uchar *puVar9;
  long in_FS_OFFSET;
  int local_4c;
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *param_2;
  if (uVar1 == 2) {
    local_48[0] = 0;
    uVar6 = ossl_cms_get0_cmsctx();
    lVar5 = ossl_cms_get0_env_enc_content(param_1);
    if (lVar5 != 0) {
      lVar7 = *(long *)(param_2 + 2);
      if (*(long *)(lVar7 + 0x20) != 0) {
        cipher = (EVP_CIPHER *)cms_get_key_wrap_cipher(*(undefined8 *)(lVar7 + 0x28),uVar6);
        if (cipher == (EVP_CIPHER *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_env.c",0x37f,"cms_RecipientInfo_kekri_encrypt");
          ERR_set_error(0x2e,0x76,0);
          EVP_CIPHER_free(0);
LAB_00101b52:
          ctx = (EVP_CIPHER_CTX *)0x0;
          puVar9 = (uchar *)0x0;
LAB_001018d1:
          uVar4 = 0;
          CRYPTO_free(puVar9);
        }
        else {
          puVar9 = (uchar *)CRYPTO_malloc((int)*(undefined8 *)(lVar5 + 0x28) + 8,
                                          "crypto/cms/cms_env.c",900);
          if (puVar9 == (uchar *)0x0) {
            EVP_CIPHER_free(cipher);
            goto LAB_00101b52;
          }
          ctx = EVP_CIPHER_CTX_new();
          if (ctx == (EVP_CIPHER_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_env.c",0x38a,"cms_RecipientInfo_kekri_encrypt");
            uVar6 = 0x80006;
LAB_001018bd:
            ERR_set_error(0x2e,uVar6,0);
            EVP_CIPHER_free(cipher);
            goto LAB_001018d1;
          }
          EVP_CIPHER_CTX_set_flags(ctx,1);
          iVar3 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,*(uchar **)(lVar7 + 0x20),(uchar *)0x0
                                    );
          if (iVar3 == 0) {
LAB_0010189d:
            ERR_new();
            uVar6 = 0x392;
LAB_001018ae:
            ERR_set_debug("crypto/cms/cms_env.c",uVar6,"cms_RecipientInfo_kekri_encrypt");
            uVar6 = 0x9f;
            goto LAB_001018bd;
          }
          iVar3 = EVP_EncryptUpdate(ctx,puVar9,&local_4c,*(uchar **)(lVar5 + 0x20),
                                    *(int *)(lVar5 + 0x28));
          if (iVar3 == 0) goto LAB_0010189d;
          iVar3 = EVP_EncryptFinal_ex(ctx,puVar9 + local_4c,local_48);
          if (iVar3 == 0) goto LAB_0010189d;
          local_4c = local_48[0] + local_4c;
          if ((long)local_4c != *(long *)(lVar5 + 0x28) + 8) {
            ERR_new();
            uVar6 = 0x397;
            goto LAB_001018ae;
          }
          ASN1_STRING_set0(*(ASN1_STRING **)(lVar7 + 0x18),puVar9,local_4c);
          uVar4 = 1;
          EVP_CIPHER_free(cipher);
        }
        EVP_CIPHER_CTX_free(ctx);
        goto LAB_001017ab;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x379,"cms_RecipientInfo_kekri_encrypt");
      ERR_set_error(0x2e,0x82,0);
    }
LAB_001017a8:
    uVar4 = 0;
  }
  else {
    if (2 < (int)uVar1) {
      if (uVar1 == 3) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = ossl_cms_RecipientInfo_pwri_crypt(param_1,param_2,1);
          return uVar4;
        }
        goto LAB_00101a7c;
      }
LAB_00101778:
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x41a,"CMS_RecipientInfo_encrypt");
      ERR_set_error(0x2e,0x9a,0);
      goto LAB_001017a8;
    }
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar4 = ossl_cms_RecipientInfo_kari_encrypt();
          return uVar4;
        }
        goto LAB_00101a7c;
      }
      goto LAB_00101778;
    }
    uVar6 = ossl_cms_get0_cmsctx();
    uVar4 = (ulong)*param_2;
    if (*param_2 != 0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x20b,"cms_RecipientInfo_ktri_encrypt");
      ERR_set_error(0x2e,0x7c,0);
      goto LAB_001017a8;
    }
    lVar5 = *(long *)(param_2 + 2);
    lVar7 = ossl_cms_get0_env_enc_content(param_1);
    ctx_00 = *(EVP_PKEY_CTX **)(lVar5 + 0x30);
    if (ctx_00 == (EVP_PKEY_CTX *)0x0) {
      uVar8 = ossl_cms_ctx_get0_propq(uVar6);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      uVar6 = ossl_cms_ctx_get0_libctx(uVar6);
      ctx_00 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,uVar2,uVar8);
      if (ctx_00 == (EVP_PKEY_CTX *)0x0) goto LAB_001017a8;
      iVar3 = EVP_PKEY_encrypt_init(ctx_00);
      if (0 < iVar3) goto LAB_00101940;
      puVar9 = (uchar *)0x0;
    }
    else {
      iVar3 = ossl_cms_env_asn1_ctrl(param_2);
      puVar9 = (uchar *)0x0;
      if (iVar3 != 0) {
LAB_00101940:
        iVar3 = EVP_PKEY_encrypt(ctx_00,(uchar *)0x0,(size_t *)local_48,*(uchar **)(lVar7 + 0x20),
                                 *(size_t *)(lVar7 + 0x28));
        puVar9 = (uchar *)0x0;
        if (0 < iVar3) {
          out = (uchar *)CRYPTO_malloc(local_48[0],"crypto/cms/cms_env.c",0x224);
          puVar9 = out;
          if (out != (uchar *)0x0) {
            iVar3 = EVP_PKEY_encrypt(ctx_00,out,(size_t *)local_48,*(uchar **)(lVar7 + 0x20),
                                     *(size_t *)(lVar7 + 0x28));
            if (0 < iVar3) {
              uVar4 = 1;
              puVar9 = (uchar *)0x0;
              ASN1_STRING_set0(*(ASN1_STRING **)(lVar5 + 0x18),out,local_48[0]);
            }
          }
        }
      }
    }
    EVP_PKEY_CTX_free(ctx_00);
    *(undefined8 *)(lVar5 + 0x30) = 0;
    CRYPTO_free(puVar9);
  }
LAB_001017ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00101a7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * ossl_cms_EnvelopedData_init_bio(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  BIO *a;
  undefined8 uVar5;
  BIO *bp;
  ulong uVar6;
  int iVar7;
  long in_FS_OFFSET;
  EVP_CIPHER_CTX *local_48;
  long local_40;
  
  lVar1 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(lVar1 + 0x18);
  if (*(long *)(lVar2 + 0x18) == 0) {
    uVar4 = ossl_cms_get0_cmsctx();
    bp = (BIO *)ossl_cms_EncryptedContent_init_bio(lVar2,uVar4);
    local_48 = (EVP_CIPHER_CTX *)0x0;
    if (bp != (BIO *)0x0) {
      BIO_ctrl(bp,0x81,0,&local_48);
      if (local_48 != (EVP_CIPHER_CTX *)0x0) {
        uVar4 = EVP_CIPHER_CTX_get0_cipher();
        uVar6 = EVP_CIPHER_get_flags(uVar4);
        if ((uVar6 & 0x2000000) == 0) goto LAB_00101c75;
        iVar7 = EVP_CIPHER_CTX_ctrl(local_48,0x28,0,*(void **)(*(long *)(param_1 + 8) + 0x20));
        if (0 < iVar7) goto LAB_00101c75;
      }
      BIO_free(bp);
    }
  }
  else {
    uVar4 = ossl_cms_get0_cmsctx();
    a = (BIO *)ossl_cms_EncryptedContent_init_bio(lVar2,uVar4);
    if (a != (BIO *)0x0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x10);
      iVar7 = 0;
      while( true ) {
        iVar3 = OPENSSL_sk_num(uVar4);
        if (iVar3 <= iVar7) break;
        uVar5 = OPENSSL_sk_value(uVar4,iVar7);
        iVar3 = CMS_RecipientInfo_encrypt(param_1,uVar5);
        if (iVar3 < 1) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_env.c",0x4a5,"cms_EnvelopedData_Encryption_init_bio");
          ERR_set_error(0x2e,0x74,0);
          *(undefined8 *)(lVar2 + 0x18) = 0;
          CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                            "crypto/cms/cms_env.c",0x46f);
          *(undefined8 *)(lVar2 + 0x20) = 0;
          bp = (BIO *)0x0;
          *(undefined8 *)(lVar2 + 0x28) = 0;
          BIO_free(a);
          goto LAB_00101c75;
        }
        iVar7 = iVar7 + 1;
      }
      cms_env_set_version(lVar1);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                        "crypto/cms/cms_env.c",0x46f);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      bp = a;
      goto LAB_00101c75;
    }
  }
  bp = (BIO *)0x0;
LAB_00101c75:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bp;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



BIO * ossl_cms_AuthEnvelopedData_init_bio(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  BIO *a;
  undefined8 uVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  lVar2 = *(long *)(puVar1 + 6);
  if (*(long *)(lVar2 + 0x18) == 0) {
    iVar6 = **(int **)(puVar1 + 10);
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(int **)(puVar1 + 10) + 2);
    *(long *)(lVar2 + 0x38) = (long)iVar6;
  }
  uVar4 = ossl_cms_get0_cmsctx(param_1);
  a = (BIO *)ossl_cms_EncryptedContent_init_bio(lVar2,uVar4);
  if (a == (BIO *)0x0) {
LAB_00101ef8:
    a = (BIO *)0x0;
  }
  else if (*(long *)(lVar2 + 0x18) != 0) {
    uVar4 = *(undefined8 *)(puVar1 + 4);
    iVar6 = 0;
    while( true ) {
      iVar3 = OPENSSL_sk_num(uVar4);
      if (iVar3 <= iVar6) break;
      uVar5 = OPENSSL_sk_value(uVar4,iVar6);
      iVar3 = CMS_RecipientInfo_encrypt(param_1,uVar5);
      if (iVar3 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x4d9,"ossl_cms_AuthEnvelopedData_init_bio");
        ERR_set_error(0x2e,0x74,0);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                          "crypto/cms/cms_env.c",0x46f);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        *(undefined8 *)(lVar2 + 0x28) = 0;
        BIO_free(a);
        goto LAB_00101ef8;
      }
      iVar6 = iVar6 + 1;
    }
    *puVar1 = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    CRYPTO_clear_free(*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),
                      "crypto/cms/cms_env.c",0x46f);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  return a;
}



undefined8 ossl_cms_EnvelopedData_final(long param_1,BIO *param_2)

{
  int iVar1;
  BIO *bp;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *ptr;
  long in_FS_OFFSET;
  EVP_CIPHER_CTX *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (EVP_CIPHER_CTX *)0x0;
  bp = BIO_find_type(param_2,0x20a);
  lVar2 = ossl_cms_get0_enveloped(param_1);
  if (lVar2 == 0) {
LAB_00102000:
    uVar3 = 0;
  }
  else {
    if (bp == (BIO *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x4f5,"ossl_cms_EnvelopedData_final");
      ERR_set_error(0x2e,0x69,0);
      uVar3 = 0;
      goto LAB_00101fb0;
    }
    BIO_ctrl(bp,0x81,0,&local_28);
    uVar3 = EVP_CIPHER_CTX_get0_cipher(local_28);
    uVar4 = EVP_CIPHER_get_flags(uVar3);
    if ((uVar4 & 0x2000000) != 0) {
      ptr = *(void **)(lVar2 + 0x20);
      if (ptr == (void *)0x0) {
        ptr = (void *)OPENSSL_sk_new_null();
        *(void **)(lVar2 + 0x20) = ptr;
        if (ptr == (void *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_env.c",0x505,"ossl_cms_EnvelopedData_final");
          ERR_set_error(0x2e,0x8000f,0);
          uVar3 = 0;
          goto LAB_00101fb0;
        }
      }
      iVar1 = EVP_CIPHER_CTX_ctrl(local_28,0x28,1,ptr);
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x50b,"ossl_cms_EnvelopedData_final");
        ERR_set_error(0x2e,0x6f,0);
        goto LAB_00102000;
      }
    }
    cms_env_set_version(*(undefined8 *)(param_1 + 8));
    uVar3 = 1;
  }
LAB_00101fb0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_cms_AuthEnvelopedData_final(long param_1,BIO *param_2)

{
  int iVar1;
  int iVar2;
  uchar *data;
  long in_FS_OFFSET;
  bool bVar3;
  EVP_CIPHER_CTX *local_38;
  long local_30;
  
  bVar3 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_ctrl(param_2,0x81,0,&local_38);
  iVar1 = EVP_CIPHER_CTX_is_encrypting(local_38);
  if (iVar1 == 0) goto LAB_001020e5;
  iVar1 = EVP_CIPHER_CTX_get_tag_length(local_38);
  if ((iVar1 < 1) ||
     (data = (uchar *)CRYPTO_malloc(iVar1,"crypto/cms/cms_env.c",0x525), data == (uchar *)0x0)) {
    data = (uchar *)0x0;
LAB_00102182:
    ERR_new();
    bVar3 = false;
    ERR_set_debug("crypto/cms/cms_env.c",0x528,"ossl_cms_AuthEnvelopedData_final");
    ERR_set_error(0x2e,0xb9,0);
  }
  else {
    iVar2 = EVP_CIPHER_CTX_ctrl(local_38,0x10,iVar1,data);
    if (iVar2 < 1) goto LAB_00102182;
    iVar1 = ASN1_OCTET_STRING_set(*(ASN1_OCTET_STRING **)(*(long *)(param_1 + 8) + 0x28),data,iVar1)
    ;
    bVar3 = iVar1 != 0;
  }
  CRYPTO_free(data);
LAB_001020e5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



undefined4 ossl_cms_pkey_get_ri_type(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_PKEY_is_a(param_1,&_LC5);
  if (iVar2 == 0) {
    iVar2 = EVP_PKEY_is_a(param_1,&_LC4);
    if (iVar2 == 0) {
      iVar2 = EVP_PKEY_is_a(param_1,&_LC10);
      if (iVar2 != 0) {
        uVar3 = 0xffffffff;
        goto LAB_00102202;
      }
      iVar2 = EVP_PKEY_is_a(param_1,&_LC6);
      if (iVar2 == 0) {
        iVar2 = EVP_PKEY_is_a(param_1,&_LC7);
        uVar3 = 0;
        if (((iVar2 == 0) && (*(long *)(param_1 + 8) != 0)) &&
           (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xb0), pcVar1 != (code *)0x0)) {
          iVar2 = (*pcVar1)(param_1,8,0,&local_24);
          if (0 < iVar2) {
            uVar3 = local_24;
          }
        }
        goto LAB_00102202;
      }
    }
  }
  uVar3 = 1;
LAB_00102202:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_VALUE *
CMS_add1_recipient(CMS_ContentInfo *param_1,X509 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  stack_st_CMS_RecipientInfo *psVar4;
  ASN1_ITEM *pAVar5;
  ASN1_VALUE *val;
  long lVar6;
  ASN1_VALUE *pAVar7;
  undefined8 uVar8;
  EVP_PKEY_CTX *ctx;
  
  uVar3 = ossl_cms_get0_cmsctx();
  psVar4 = CMS_get0_RecipientInfos(param_1);
  if (psVar4 != (stack_st_CMS_RecipientInfo *)0x0) {
    pAVar5 = (ASN1_ITEM *)CMS_RecipientInfo_it();
    val = ASN1_item_new(pAVar5);
    if (val != (ASN1_VALUE *)0x0) {
      lVar6 = X509_get0_pubkey(param_2);
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_env.c",0x199,"CMS_add1_recipient");
        ERR_set_error(0x2e,0x71,0);
        goto LAB_00102372;
      }
      iVar2 = ossl_cms_pkey_get_ri_type(lVar6);
      if (iVar2 == 0) {
        pAVar5 = (ASN1_ITEM *)CMS_KeyTransRecipientInfo_it();
        pAVar7 = ASN1_item_new(pAVar5);
        *(ASN1_VALUE **)(val + 8) = pAVar7;
        if (pAVar7 == (ASN1_VALUE *)0x0) goto LAB_00102372;
        *(undefined4 *)val = 0;
        *(undefined8 *)(pAVar7 + 0x38) = uVar3;
        *(uint *)pAVar7 = -(uint)((param_5 & 0x10000) != 0) & 2;
        iVar2 = ossl_cms_set1_SignerIdentifier
                          (*(undefined8 *)(pAVar7 + 8),param_2,(param_5 & 0x10000) != 0,uVar3);
        if ((iVar2 == 0) || (iVar2 = X509_up_ref(param_2), iVar2 == 0)) goto LAB_00102372;
        iVar2 = EVP_PKEY_up_ref(lVar6);
        if (iVar2 == 0) {
          X509_free(param_2);
          goto LAB_00102372;
        }
        *(long *)(pAVar7 + 0x28) = lVar6;
        *(X509 **)(pAVar7 + 0x20) = param_2;
        if ((param_5 & 0x40000) == 0) {
          iVar2 = ossl_cms_env_asn1_ctrl(val,0);
          if (iVar2 == 0) goto LAB_00102372;
        }
        else {
          uVar8 = ossl_cms_ctx_get0_propq(uVar3);
          uVar1 = *(undefined8 *)(pAVar7 + 0x28);
          uVar3 = ossl_cms_ctx_get0_libctx(uVar3);
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar3,uVar1,uVar8);
          *(EVP_PKEY_CTX **)(pAVar7 + 0x30) = ctx;
          if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar2 = EVP_PKEY_encrypt_init(ctx), iVar2 < 1))
          goto LAB_00102372;
        }
        iVar2 = OPENSSL_sk_push(psVar4,val);
      }
      else {
        if (iVar2 != 1) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_env.c",0x1ab,"CMS_add1_recipient");
          ERR_set_error(0x2e,0x7d,0);
          goto LAB_00102372;
        }
        iVar2 = ossl_cms_RecipientInfo_kari_init(val,param_2,lVar6,param_4,param_3,param_5);
        if (iVar2 == 0) goto LAB_00102372;
        iVar2 = OPENSSL_sk_push(psVar4,val,uVar3,0x102335);
      }
      if (iVar2 != 0) {
        return val;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_env.c",0x1b1,"CMS_add1_recipient");
      ERR_set_error(0x2e,0x8000f,0);
      goto LAB_00102372;
    }
    ERR_new();
    ERR_set_debug("crypto/cms/cms_env.c",0x193,"CMS_add1_recipient");
    ERR_set_error(0x2e,0x8000d,0);
  }
  val = (ASN1_VALUE *)0x0;
LAB_00102372:
  pAVar5 = (ASN1_ITEM *)CMS_RecipientInfo_it();
  ASN1_item_free(val,pAVar5);
  return (ASN1_VALUE *)0x0;
}



CMS_RecipientInfo * CMS_add1_recipient_cert(CMS_ContentInfo *cms,X509 *recip,uint flags)

{
  CMS_RecipientInfo *pCVar1;
  
  pCVar1 = (CMS_RecipientInfo *)CMS_add1_recipient(cms,recip,0,0,flags);
  return pCVar1;
}



uint ossl_cms_pkey_is_ri_type_supported(long param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_1 + 8) == 0) ||
      (pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xb0), pcVar1 == (code *)0x0)) ||
     (iVar2 = (*pcVar1)(param_1,0xb,(long)param_2,&local_24), iVar2 < 1)) {
    iVar2 = ossl_cms_pkey_get_ri_type(param_1);
    local_24 = 0;
    if (-1 < iVar2) {
      local_24 = (uint)(param_2 == iVar2);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_24;
}



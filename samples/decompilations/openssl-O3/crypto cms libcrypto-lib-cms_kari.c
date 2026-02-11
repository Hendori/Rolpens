
undefined8
cms_kek_cipher(undefined8 *param_1,long *param_2,uchar *param_3,int param_4,long param_5,int param_6
              )

{
  int iVar1;
  uchar *out;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_94;
  ulong local_90;
  uchar local_88 [72];
  long local_40;
  
  uVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_CIPHER_CTX_get_key_length(*(undefined8 *)(param_5 + 0x30));
  local_90 = (ulong)iVar1;
  if (0x40 < local_90) goto LAB_0010004a;
  iVar1 = EVP_PKEY_derive(*(EVP_PKEY_CTX **)(param_5 + 0x28),local_88,&local_90);
  if (iVar1 < 1) {
LAB_001000a4:
    OPENSSL_cleanse(local_88,local_90);
LAB_001000b8:
    out = (uchar *)0x0;
LAB_001000bb:
    uVar2 = 0;
    CRYPTO_free(out);
  }
  else {
    iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                              local_88,(uchar *)0x0,param_6);
    if (iVar1 == 0) goto LAB_001000a4;
    iVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(uchar *)0x0,&local_94,param_3,
                             param_4);
    if (iVar1 == 0) goto LAB_001000a4;
    out = (uchar *)CRYPTO_malloc(local_94,"crypto/cms/cms_kari.c",0xe9);
    if (out == (uchar *)0x0) {
      OPENSSL_cleanse(local_88,local_90);
      goto LAB_001000b8;
    }
    iVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),out,&local_94,param_3,param_4);
    if (iVar1 == 0) {
      OPENSSL_cleanse(local_88,local_90);
      goto LAB_001000bb;
    }
    *param_1 = out;
    uVar2 = 1;
    *param_2 = (long)local_94;
    OPENSSL_cleanse(local_88,local_90);
  }
  EVP_CIPHER_CTX_reset(*(undefined8 *)(param_5 + 0x30));
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(param_5 + 0x28));
  *(undefined8 *)(param_5 + 0x28) = 0;
LAB_0010004a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int CMS_RecipientInfo_kari_get0_alg(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*param_1 != 1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_kari.c",0x21,"CMS_RecipientInfo_kari_get0_alg");
    ERR_set_error(0x2e,0xb5,0);
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x10);
    return iVar1;
  }
  return iVar1;
}



undefined8 CMS_RecipientInfo_kari_get0_reks(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x20);
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_kari.c",0x31,"CMS_RecipientInfo_kari_get0_reks");
  ERR_set_error(0x2e,0xb5,0);
  return 0;
}



undefined4
CMS_RecipientInfo_kari_get0_orig_id
          (int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*param_1 == 1) {
    piVar2 = *(int **)(*(long *)(param_1 + 2) + 8);
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    iVar1 = *piVar2;
    uVar3 = 1;
    if (iVar1 == 0) {
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = **(undefined8 **)(piVar2 + 2);
      }
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
      }
    }
    else if (iVar1 == 1) {
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(piVar2 + 2);
      }
    }
    else if (iVar1 == 2) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = **(undefined8 **)(piVar2 + 2);
      }
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
      }
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_kari.c",0x41,"CMS_RecipientInfo_kari_get0_orig_id");
  ERR_set_error(0x2e,0xb5,0);
  return 0;
}



undefined8 CMS_RecipientInfo_kari_orig_id_cmp(int *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (*param_1 != 1) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_kari.c",0x66,"CMS_RecipientInfo_kari_orig_id_cmp");
    ERR_set_error(0x2e,0xb5,0);
    return 0xfffffffe;
  }
  piVar1 = *(int **)(*(long *)(param_1 + 2) + 8);
  if (*piVar1 != 0) {
    if (*piVar1 == 1) {
      uVar2 = ossl_cms_keyid_cert_cmp(*(undefined8 *)(piVar1 + 2));
      return uVar2;
    }
    return 0xffffffff;
  }
  uVar2 = ossl_cms_ias_cert_cmp(*(undefined8 *)(piVar1 + 2));
  return uVar2;
}



undefined8
CMS_RecipientEncryptedKey_get0_id
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar1 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    if (*piVar1 != 1) {
      return 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar1 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(piVar1 + 2) + 8);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(long *)(piVar1 + 2) + 0x10);
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
  }
  return 1;
}



undefined8 CMS_RecipientEncryptedKey_cert_cmp(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    uVar2 = ossl_cms_ias_cert_cmp(*(undefined8 *)(piVar1 + 2));
    return uVar2;
  }
  if (*piVar1 == 1) {
    uVar2 = ossl_cms_keyid_cert_cmp(**(undefined8 **)(piVar1 + 2));
    return uVar2;
  }
  return 0xffffffff;
}



undefined8 CMS_RecipientInfo_kari_set0_pkey_and_peer(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *peer;
  
  lVar1 = *(long *)(param_1 + 8);
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x28));
  *(undefined8 *)(lVar1 + 0x28) = 0;
  if (param_2 == 0) {
    return 1;
  }
  uVar3 = ossl_cms_ctx_get0_propq(*(undefined8 *)(lVar1 + 0x38));
  uVar4 = ossl_cms_ctx_get0_libctx(*(undefined8 *)(lVar1 + 0x38));
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar4,param_2,uVar3);
  if ((ctx != (EVP_PKEY_CTX *)0x0) && (iVar2 = EVP_PKEY_derive_init(ctx), 0 < iVar2)) {
    if (param_3 != 0) {
      peer = (EVP_PKEY *)X509_get0_pubkey(param_3);
      iVar2 = EVP_PKEY_derive_set_peer(ctx,peer);
      if (iVar2 < 1) goto LAB_001005c8;
    }
    *(EVP_PKEY_CTX **)(lVar1 + 0x28) = ctx;
    return 1;
  }
LAB_001005c8:
  EVP_PKEY_CTX_free(ctx);
  return 0;
}



void CMS_RecipientInfo_kari_set0_pkey(undefined8 param_1,undefined8 param_2)

{
  CMS_RecipientInfo_kari_set0_pkey_and_peer(param_1,param_2,0);
  return;
}



undefined8 CMS_RecipientInfo_kari_get0_ctx(int *param_1)

{
  if (*param_1 != 1) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
}



int CMS_RecipientInfo_kari_decrypt(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *ptr;
  long in_FS_OFFSET;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  ptr = (void *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (void *)0x0;
  iVar3 = **(int **)(param_3 + 8);
  uVar1 = *(undefined8 *)(*(int **)(param_3 + 8) + 2);
  iVar2 = ossl_cms_env_asn1_ctrl(param_2,1);
  if (iVar2 != 0) {
    iVar3 = cms_kek_cipher(&local_50,&local_48,uVar1,(long)iVar3,*(undefined8 *)(param_2 + 8),0);
    if (iVar3 == 0) {
      iVar2 = 0;
      ptr = local_50;
    }
    else {
      lVar4 = ossl_cms_get0_env_enc_content(param_1);
      CRYPTO_clear_free(*(undefined8 *)(lVar4 + 0x20),*(undefined8 *)(lVar4 + 0x28),
                        "crypto/cms/cms_kari.c",0x110);
      *(void **)(lVar4 + 0x20) = local_50;
      *(undefined8 *)(lVar4 + 0x28) = local_48;
      iVar2 = 1;
    }
  }
  CRYPTO_free(ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_cms_RecipientInfo_kari_init
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          uint param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ASN1_ITEM *pAVar4;
  ASN1_VALUE *pAVar5;
  ASN1_VALUE *val;
  undefined8 uVar6;
  undefined8 uVar7;
  EVP_PKEY_CTX *pEVar8;
  ASN1_VALUE *pAVar9;
  ASN1_OCTET_STRING *pAVar10;
  long in_FS_OFFSET;
  EVP_PKEY *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pAVar4 = (ASN1_ITEM *)CMS_KeyAgreeRecipientInfo_it();
  pAVar5 = ASN1_item_new(pAVar4);
  *(ASN1_VALUE **)(param_1 + 2) = pAVar5;
  if (pAVar5 != (ASN1_VALUE *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(pAVar5 + 0x38) = param_7;
    *(undefined4 *)pAVar5 = 3;
    pAVar4 = (ASN1_ITEM *)CMS_RecipientEncryptedKey_it();
    val = ASN1_item_new(pAVar4);
    if (val != (ASN1_VALUE *)0x0) {
      iVar3 = OPENSSL_sk_push(*(undefined8 *)(pAVar5 + 0x20),val);
      if (iVar3 == 0) {
        pAVar4 = (ASN1_ITEM *)CMS_RecipientEncryptedKey_it();
        ASN1_item_free(val,pAVar4);
      }
      else {
        puVar1 = *(undefined4 **)val;
        if ((param_6 & 0x10000) == 0) {
          *puVar1 = 0;
          iVar3 = ossl_cms_set1_ias(puVar1 + 2,param_2);
        }
        else {
          *puVar1 = 1;
          pAVar4 = (ASN1_ITEM *)CMS_RecipientKeyIdentifier_it();
          lVar2 = *(long *)val;
          pAVar9 = ASN1_item_new(pAVar4);
          *(ASN1_VALUE **)(lVar2 + 8) = pAVar9;
          if (*(long *)(*(long *)val + 8) == 0) goto LAB_00100890;
          iVar3 = ossl_cms_set1_keyid(*(long *)(*(long *)val + 8),param_2);
        }
        if (iVar3 != 0) {
          if (param_4 == 0 && param_5 == 0) {
            local_48 = (EVP_PKEY *)0x0;
            uVar7 = *(undefined8 *)(pAVar5 + 0x38);
            uVar6 = ossl_cms_ctx_get0_libctx(uVar7);
            uVar7 = ossl_cms_ctx_get0_propq(uVar7);
            pEVar8 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,param_3,uVar7);
            if (pEVar8 == (EVP_PKEY_CTX *)0x0) {
LAB_00100a00:
              pEVar8 = (EVP_PKEY_CTX *)0x0;
            }
            else {
              iVar3 = EVP_PKEY_keygen_init(pEVar8);
              if ((0 < iVar3) && (iVar3 = EVP_PKEY_keygen(pEVar8,&local_48), 0 < iVar3)) {
                EVP_PKEY_CTX_free(pEVar8);
                pEVar8 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,local_48,uVar7);
                if (pEVar8 == (EVP_PKEY_CTX *)0x0) goto LAB_00100a00;
                iVar3 = EVP_PKEY_derive_init(pEVar8);
                if (iVar3 < 1) goto LAB_00100a02;
                *(EVP_PKEY_CTX **)(pAVar5 + 0x28) = pEVar8;
                EVP_PKEY_free(local_48);
LAB_0010099e:
                iVar3 = EVP_PKEY_up_ref(param_3);
                if (iVar3 != 0) {
                  *(undefined8 *)(val + 0x10) = param_3;
                  uVar7 = 1;
                  goto LAB_00100892;
                }
                goto LAB_00100890;
              }
            }
LAB_00100a02:
            EVP_PKEY_CTX_free(pEVar8);
            EVP_PKEY_free(local_48);
          }
          else {
            puVar1 = *(undefined4 **)(*(long *)(param_1 + 2) + 8);
            if ((param_5 != 0) && (param_4 != 0)) {
              if ((param_6 & 0x200000) == 0) {
                *puVar1 = 0;
                iVar3 = ossl_cms_set1_ias(puVar1 + 2,param_4);
              }
              else {
                *puVar1 = 1;
                pAVar10 = ASN1_OCTET_STRING_new();
                *(ASN1_OCTET_STRING **)(puVar1 + 2) = pAVar10;
                if (pAVar10 == (ASN1_OCTET_STRING *)0x0) goto LAB_00100890;
                iVar3 = ossl_cms_set1_keyid(puVar1 + 2,param_4);
              }
              if (iVar3 != 0) {
                uVar7 = *(undefined8 *)(pAVar5 + 0x38);
                uVar6 = ossl_cms_ctx_get0_propq(uVar7);
                uVar7 = ossl_cms_ctx_get0_libctx(uVar7);
                pEVar8 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar7,param_5,uVar6);
                if ((pEVar8 != (EVP_PKEY_CTX *)0x0) &&
                   (iVar3 = EVP_PKEY_derive_init(pEVar8), 0 < iVar3)) {
                  *(EVP_PKEY_CTX **)(pAVar5 + 0x28) = pEVar8;
                  goto LAB_0010099e;
                }
                EVP_PKEY_CTX_free(pEVar8);
              }
            }
          }
        }
      }
    }
  }
LAB_00100890:
  uVar7 = 0;
LAB_00100892:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_cms_RecipientInfo_kari_encrypt(undefined8 param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  EVP_CIPHER_CTX *ctx;
  int *piVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  EVP_CIPHER *cipher;
  undefined4 uVar14;
  long in_FS_OFFSET;
  void *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 1) {
    lVar1 = *(long *)(param_2 + 2);
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    lVar6 = ossl_cms_get0_env_enc_content();
    uVar7 = *(undefined8 *)(lVar1 + 0x38);
    lVar9 = *(long *)(lVar6 + 0x18);
    ctx = *(EVP_CIPHER_CTX **)(lVar1 + 0x30);
    local_48 = EVP_CIPHER_CTX_get0_cipher(ctx);
    if (local_48 == 0) {
      if (lVar9 != 0) {
        iVar4 = EVP_CIPHER_get_key_length(lVar9);
        uVar10 = EVP_CIPHER_get_flags(lVar9);
        if ((uVar10 & 0x4000000) == 0) {
LAB_00100d10:
          iVar5 = EVP_CIPHER_get_type(lVar9);
          pcVar12 = "id-smime-alg-CMS3DESwrap";
          if (((iVar5 != 0x2c) && (pcVar12 = "id-aes128-wrap", 0x10 < iVar4)) &&
             (pcVar12 = "id-aes256-wrap", iVar4 < 0x19)) {
            pcVar12 = "id-aes192-wrap";
          }
        }
        else {
          pcVar11 = (code *)EVP_CIPHER_meth_get_ctrl(lVar9);
          iVar5 = (*pcVar11)(0,0x29,0);
          if (iVar5 < 1) goto LAB_00100a9b;
          if (local_48 == 0) goto LAB_00100d10;
          iVar4 = EVP_CIPHER_get_mode();
          if (iVar4 != 0x10002) goto LAB_00100a9b;
          pcVar12 = (char *)EVP_CIPHER_get0_name(local_48);
        }
        uVar13 = ossl_cms_ctx_get0_propq(uVar7);
        uVar7 = ossl_cms_ctx_get0_libctx(uVar7);
        cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,pcVar12,uVar13);
        if (cipher != (EVP_CIPHER *)0x0) {
          iVar4 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
          EVP_CIPHER_free(cipher);
          if (iVar4 != 0) goto LAB_00100b24;
        }
      }
    }
    else {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
      iVar4 = EVP_CIPHER_get_mode(uVar7);
      if (iVar4 == 0x10002) {
LAB_00100b24:
        piVar3 = *(int **)(lVar1 + 8);
        if (*piVar3 == -1) {
          *piVar3 = 2;
          it = (ASN1_ITEM *)CMS_OriginatorPublicKey_it();
          pAVar8 = ASN1_item_new(it);
          *(ASN1_VALUE **)(piVar3 + 2) = pAVar8;
          if ((pAVar8 != (ASN1_VALUE *)0x0) &&
             (iVar4 = ossl_cms_env_asn1_ctrl(param_2,0), iVar4 != 0)) {
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar2), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              lVar9 = OPENSSL_sk_value(uVar2,iVar4);
              iVar5 = EVP_PKEY_derive_set_peer
                                (*(EVP_PKEY_CTX **)(lVar1 + 0x28),*(EVP_PKEY **)(lVar9 + 0x10));
              if ((iVar5 < 1) ||
                 (iVar5 = cms_kek_cipher(&local_50,&local_48,*(undefined8 *)(lVar6 + 0x20),
                                         *(undefined8 *)(lVar6 + 0x28),lVar1,1), iVar5 == 0))
              goto LAB_00100a9b;
              ASN1_STRING_set0(*(ASN1_STRING **)(lVar9 + 8),local_50,(int)local_48);
            }
            uVar14 = 1;
            goto LAB_00100a9e;
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_kari.c",0x200,"ossl_cms_RecipientInfo_kari_encrypt");
          ERR_set_error(0x2e,0xc4,0);
        }
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_kari.c",0x1e8,"ossl_cms_RecipientInfo_kari_encrypt");
    ERR_set_error(0x2e,0xb5,0);
  }
LAB_00100a9b:
  uVar14 = 0;
LAB_00100a9e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



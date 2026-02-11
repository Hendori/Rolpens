
BIO * ossl_cms_EncryptedContent_init_bio(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar8;
  EVP_CIPHER *pEVar9;
  ASN1_OBJECT *pAVar10;
  ASN1_TYPE *pAVar11;
  ulong uVar12;
  char *name;
  EVP_CIPHER *cipher;
  uchar *key;
  long in_FS_OFFSET;
  long local_b8;
  uchar *local_b0;
  uchar *local_a8;
  int local_9c;
  ulong local_98;
  EVP_CIPHER_CTX *local_80;
  uchar local_78 [16];
  int local_68;
  int local_64;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 8);
  uVar6 = ossl_cms_ctx_get0_libctx(param_2);
  uVar7 = ossl_cms_ctx_get0_propq(param_2);
  lVar2 = *(long *)(param_1 + 0x18);
  type = BIO_f_cipher();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_enc.c",0x30,"ossl_cms_EncryptedContent_init_bio");
    ERR_set_error(0x2e,0x80020,0);
  }
  else {
    BIO_ctrl(bp,0x81,0,&local_80);
    ERR_set_mark();
    if (lVar2 == 0) {
      iVar4 = OBJ_obj2nid((ASN1_OBJECT *)*puVar1);
      name = OBJ_nid2sn(iVar4);
      cipher = EVP_get_cipherbyname(name);
    }
    else {
      cipher = *(EVP_CIPHER **)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
    if (cipher == (EVP_CIPHER *)0x0) {
      ERR_clear_last_mark();
      pEVar9 = (EVP_CIPHER *)0x0;
      ERR_new();
      ERR_set_debug("crypto/cms/cms_enc.c",0x49,"ossl_cms_EncryptedContent_init_bio");
      ERR_set_error(0x2e,0x94,0);
      local_b8 = 0;
      local_b0 = (uchar *)0x0;
    }
    else {
      uVar8 = EVP_CIPHER_get0_name(cipher);
      pEVar9 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar6,uVar8,uVar7);
      if (pEVar9 != (EVP_CIPHER *)0x0) {
        cipher = pEVar9;
      }
      ERR_pop_to_mark();
      iVar4 = EVP_CipherInit_ex(local_80,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,
                                (uint)(lVar2 != 0));
      if (iVar4 < 1) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_enc.c",0x4f,"ossl_cms_EncryptedContent_init_bio");
        ERR_set_error(0x2e,0x65,0);
LAB_0010052b:
        local_b8 = 0;
        local_b0 = (uchar *)0x0;
      }
      else if (lVar2 == 0) {
        local_a8 = local_78;
        iVar4 = evp_cipher_asn1_to_param_ex(local_80,puVar1[1]);
        if (iVar4 < 1) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_enc.c",0x67,"ossl_cms_EncryptedContent_init_bio");
          ERR_set_error(0x2e,0x66,0);
          goto LAB_0010052b;
        }
        uVar5 = EVP_CIPHER_get_flags(cipher);
        local_98 = (ulong)(uVar5 & 0x200000);
        if ((uVar5 & 0x200000) == 0) {
          iVar4 = EVP_CIPHER_CTX_get_key_length(local_80);
          if (iVar4 < 1) goto LAB_0010052b;
          local_b8 = (long)iVar4;
          local_9c = 0;
          local_a8 = (uchar *)0x0;
        }
        else {
          if ((*(long *)(param_1 + 0x38) != 0) &&
             (iVar4 = EVP_CIPHER_CTX_ctrl(local_80,0x11,(int)*(long *)(param_1 + 0x38),
                                          *(void **)(param_1 + 0x30)), iVar4 < 1)) {
            ERR_new(local_80);
            ERR_set_debug("crypto/cms/cms_enc.c",0x6f,"ossl_cms_EncryptedContent_init_bio");
            ERR_set_error(0x2e,0xb8,0);
            goto LAB_0010052b;
          }
          iVar4 = EVP_CIPHER_CTX_get_key_length();
          if (iVar4 < 1) goto LAB_00100620;
          local_b8 = (long)iVar4;
          local_9c = 0;
          local_98 = 0;
        }
LAB_00100261:
        local_b0 = (uchar *)CRYPTO_malloc((int)local_b8,"crypto/cms/cms_enc.c",0x7b);
        if (local_b0 == (uchar *)0x0) {
          local_b0 = (uchar *)0x0;
        }
        else {
          iVar4 = EVP_CIPHER_CTX_rand_key(local_80,local_b0);
          if (0 < iVar4) {
            if (*(long *)(param_1 + 0x20) != 0) {
LAB_00100362:
              if (*(long *)(param_1 + 0x28) == local_b8) {
                key = *(uchar **)(param_1 + 0x20);
LAB_0010037d:
                iVar4 = EVP_CipherInit_ex(local_80,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,local_a8,
                                          (uint)(lVar2 != 0));
                if (iVar4 < 1) goto LAB_00100840;
                if (lVar2 != 0) {
                  bVar3 = false;
                  goto LAB_001003a4;
                }
                EVP_CIPHER_free(pEVar9);
              }
              else {
                iVar4 = EVP_CIPHER_CTX_set_key_length(local_80,(int)*(long *)(param_1 + 0x28));
                if (0 < iVar4) {
                  key = *(uchar **)(param_1 + 0x20);
                  goto LAB_0010037d;
                }
                if ((lVar2 != 0) || (*(int *)(param_1 + 0x40) != 0)) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_enc.c",0x95,"ossl_cms_EncryptedContent_init_bio");
                  ERR_set_error(0x2e,0x76,0);
                  goto LAB_00100170;
                }
                CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                  "crypto/cms/cms_enc.c",0x99);
                *(uchar **)(param_1 + 0x20) = local_b0;
                *(long *)(param_1 + 0x28) = local_b8;
                ERR_clear_error();
                iVar4 = EVP_CipherInit_ex(local_80,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                          *(uchar **)(param_1 + 0x20),local_a8,0);
                if (iVar4 < 1) goto LAB_00100836;
                EVP_CIPHER_free(pEVar9);
                local_b0 = (uchar *)0x0;
              }
LAB_00100648:
              CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                                "crypto/cms/cms_enc.c",0xc3);
              *(undefined8 *)(param_1 + 0x20) = 0;
LAB_0010045c:
              CRYPTO_clear_free(local_b0,local_b8,"crypto/cms/cms_enc.c",0xc6);
              goto LAB_001001b5;
            }
            *(uchar **)(param_1 + 0x20) = local_b0;
            *(long *)(param_1 + 0x28) = local_b8;
            if (lVar2 == 0) {
              ERR_clear_error();
              local_b0 = (uchar *)0x0;
              goto LAB_00100362;
            }
            iVar4 = EVP_CipherInit_ex(local_80,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_b0,local_a8,1);
            if (iVar4 < 1) {
LAB_00100836:
              local_b0 = (uchar *)0x0;
LAB_00100840:
              ERR_new();
              ERR_set_debug("crypto/cms/cms_enc.c",0xa3,"ossl_cms_EncryptedContent_init_bio");
              ERR_set_error(0x2e,0x65,0);
            }
            else {
              local_b0 = (uchar *)0x0;
              bVar3 = true;
LAB_001003a4:
              pAVar11 = ASN1_TYPE_new();
              puVar1[1] = pAVar11;
              if (pAVar11 == (ASN1_TYPE *)0x0) {
                ERR_new();
                ERR_set_debug("crypto/cms/cms_enc.c",0xa9,"ossl_cms_EncryptedContent_init_bio");
                ERR_set_error(0x2e,0x8000d,0);
              }
              else {
                uVar12 = EVP_CIPHER_get_flags(cipher);
                if ((uVar12 & 0x200000) != 0) {
                  __memcpy_chk(local_78,local_a8,local_98,0x18);
                  local_68 = local_9c;
                  local_64 = EVP_CIPHER_CTX_get_tag_length(local_80);
                  if (local_64 == 0) goto LAB_00100170;
                }
                iVar4 = evp_cipher_param_to_asn1_ex(local_80,puVar1[1],local_78);
                if (0 < iVar4) {
                  if (((ASN1_TYPE *)puVar1[1])->type == -1) {
                    ASN1_TYPE_free((ASN1_TYPE *)puVar1[1]);
                    puVar1[1] = 0;
                  }
                  EVP_CIPHER_free(pEVar9);
                  if (!bVar3) goto LAB_00100648;
                  goto LAB_0010045c;
                }
                ERR_new();
                ERR_set_debug("crypto/cms/cms_enc.c",0xb5,"ossl_cms_EncryptedContent_init_bio");
                ERR_set_error(0x2e,0x66,0);
              }
            }
          }
        }
      }
      else {
        uVar7 = EVP_CIPHER_CTX_get0_cipher();
        iVar4 = EVP_CIPHER_get_type(uVar7);
        pAVar10 = OBJ_nid2obj(iVar4);
        *puVar1 = pAVar10;
        if ((pAVar10 == (ASN1_OBJECT *)0x0) || (pAVar10->nid == 0)) {
          ERR_new();
          local_b0 = (uchar *)0x0;
          ERR_set_debug("crypto/cms/cms_enc.c",0x56,"ossl_cms_EncryptedContent_init_bio");
          ERR_set_error(0x2e,0xc2,0);
          local_b8 = 0;
          goto LAB_00100170;
        }
        local_9c = EVP_CIPHER_CTX_get_iv_length(local_80);
        if (local_9c < 0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_enc.c",0x5c,"ossl_cms_EncryptedContent_init_bio");
          ERR_set_error(0x2e,0x80006,0);
          goto LAB_0010052b;
        }
        if (local_9c == 0) {
          iVar4 = EVP_CIPHER_CTX_get_key_length(local_80);
          if (0 < iVar4) {
            local_98 = 0;
            local_a8 = (uchar *)0x0;
LAB_00100347:
            local_b8 = (long)iVar4;
            local_b0 = (uchar *)0x0;
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_00100261;
            goto LAB_00100362;
          }
        }
        else {
          local_a8 = local_58;
          local_98 = (ulong)local_9c;
          iVar4 = RAND_bytes_ex(uVar6,local_a8,local_98,0);
          if (iVar4 < 1) goto LAB_0010052b;
          iVar4 = EVP_CIPHER_CTX_get_key_length(local_80);
          if (0 < iVar4) goto LAB_00100347;
        }
LAB_00100620:
        local_b8 = 0;
        local_b0 = (uchar *)0x0;
      }
    }
LAB_00100170:
    EVP_CIPHER_free(pEVar9);
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      "crypto/cms/cms_enc.c",0xc3);
    *(undefined8 *)(param_1 + 0x20) = 0;
    CRYPTO_clear_free(local_b0,local_b8,"crypto/cms/cms_enc.c",0xc6);
    BIO_free(bp);
  }
  bp = (BIO *)0x0;
LAB_001001b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bp;
}



undefined8
ossl_cms_EncryptedContent_init(undefined8 *param_1,long param_2,void *param_3,size_t param_4)

{
  void *__dest;
  ASN1_OBJECT *pAVar1;
  
  param_1[3] = param_2;
  if (param_3 != (void *)0x0) {
    __dest = CRYPTO_malloc((int)param_4,"crypto/cms/cms_enc.c",0xd4);
    param_1[4] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,param_3,param_4);
  }
  param_1[5] = param_4;
  if (param_2 != 0) {
    pAVar1 = OBJ_nid2obj(0x15);
    *param_1 = pAVar1;
  }
  return 1;
}



int CMS_EncryptedData_set1_key(CMS_ContentInfo *cms,EVP_CIPHER *ciph,uchar *key,size_t keylen)

{
  undefined8 uVar1;
  int iVar2;
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar3;
  ASN1_OBJECT *pAVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  if ((key != (uchar *)0x0) && (keylen != 0)) {
    if (ciph == (EVP_CIPHER *)0x0) {
      iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
      if (iVar2 != 0x1a) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_enc.c",0xf0,"CMS_EncryptedData_set1_key");
        ERR_set_error(0x2e,0x7a,0);
        return 0;
      }
      puVar5 = *(undefined4 **)(cms + 8);
    }
    else {
      it = (ASN1_ITEM *)CMS_EncryptedData_it();
      pAVar3 = ASN1_item_new(it);
      *(ASN1_VALUE **)(cms + 8) = pAVar3;
      if (pAVar3 == (ASN1_VALUE *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/cms/cms_enc.c",0xea,"CMS_EncryptedData_set1_key");
        ERR_set_error(0x2e,0x8000d,0);
        return 0;
      }
      pAVar4 = OBJ_nid2obj(0x1a);
      *(ASN1_OBJECT **)cms = pAVar4;
      puVar5 = *(undefined4 **)(cms + 8);
      *puVar5 = 0;
    }
    uVar1 = *(undefined8 *)(puVar5 + 2);
    uVar6 = ossl_cms_get0_cmsctx(cms);
    iVar2 = ossl_cms_EncryptedContent_init(uVar1,ciph,key,keylen,uVar6);
    return iVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_enc.c",0xe4,"CMS_EncryptedData_set1_key");
  ERR_set_error(0x2e,0x82,0);
  return 0;
}



void ossl_cms_EncryptedData_init_bio(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if ((*(long *)(*(long *)(puVar1 + 2) + 0x18) != 0) && (*(long *)(puVar1 + 4) != 0)) {
    *puVar1 = 2;
  }
  uVar2 = ossl_cms_get0_cmsctx();
  ossl_cms_EncryptedContent_init_bio(*(undefined8 *)(puVar1 + 2),uVar2);
  return;
}



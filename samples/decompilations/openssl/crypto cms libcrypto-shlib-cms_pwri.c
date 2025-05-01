
int CMS_RecipientInfo_set0_password(CMS_RecipientInfo *ri,uchar *pass,ssize_t passlen)

{
  long lVar1;
  
  if (*(int *)ri == 3) {
    lVar1 = *(long *)(ri + 8);
    *(uchar **)(lVar1 + 0x20) = pass;
    if ((pass != (uchar *)0x0) && (passlen < 0)) {
      passlen = strlen((char *)pass);
    }
    *(ssize_t *)(lVar1 + 0x28) = passlen;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/cms/cms_pwri.c",0x1b,"CMS_RecipientInfo_set0_password");
  ERR_set_error(0x2e,0xb1,0);
  return 0;
}



CMS_RecipientInfo *
CMS_add0_recipient_password
          (CMS_ContentInfo *cms,int iter,int wrap_nid,int pbe_nid,uchar *pass,ssize_t passlen,
          EVP_CIPHER *kekciph)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  stack_st_CMS_RecipientInfo *psVar4;
  X509_ALGOR *a;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar5;
  ASN1_OBJECT *pAVar6;
  ASN1_ITEM *pAVar7;
  ASN1_VALUE *ri;
  ASN1_VALUE *pAVar8;
  X509_ALGOR *pXVar9;
  ASN1_TYPE *pAVar10;
  ASN1_STRING *pAVar11;
  long in_FS_OFFSET;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)ossl_cms_get0_cmsctx();
  lVar3 = ossl_cms_get0_env_enc_content(cms);
  if ((lVar3 != 0) &&
     (psVar4 = CMS_get0_RecipientInfos(cms), psVar4 != (stack_st_CMS_RecipientInfo *)0x0)) {
    if (wrap_nid < 1) {
      if ((kekciph == (EVP_CIPHER *)0x0) &&
         (kekciph = *(EVP_CIPHER **)(lVar3 + 0x18), kekciph == (EVP_CIPHER *)0x0))
      goto LAB_001003dd;
LAB_00100129:
      a = X509_ALGOR_new();
      if (a == (X509_ALGOR *)0x0) {
        ERR_new();
        uVar5 = 0x55;
LAB_00100491:
        ERR_set_debug("crypto/cms/cms_pwri.c",uVar5,"CMS_add0_recipient_password");
        uVar5 = 0x8000d;
LAB_001004a4:
        ERR_set_error(0x2e,uVar5,0);
        EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
      }
      else {
        ctx = EVP_CIPHER_CTX_new();
        if (ctx == (EVP_CIPHER_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_pwri.c",0x5a,"CMS_add0_recipient_password");
          uVar5 = 0x80006;
          goto LAB_001004a4;
        }
        iVar1 = EVP_EncryptInit_ex(ctx,kekciph,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_pwri.c",0x5f,"CMS_add0_recipient_password");
          uVar5 = 0x80006;
LAB_001003ac:
          ERR_set_error(0x2e,uVar5,0);
LAB_001003b8:
          EVP_CIPHER_CTX_free(ctx);
        }
        else {
          iVar1 = EVP_CIPHER_CTX_get_iv_length(ctx);
          if (iVar1 < 0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_pwri.c",0x65,"CMS_add0_recipient_password");
            uVar5 = 0x80006;
            goto LAB_001003ac;
          }
          if (iVar1 != 0) {
            uVar5 = ossl_cms_ctx_get0_libctx(puVar2);
            iVar1 = RAND_bytes_ex(uVar5,local_58,(long)iVar1);
            if (0 < iVar1) {
              iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,local_58);
              if (iVar1 < 1) {
                ERR_new();
                ERR_set_debug("crypto/cms/cms_pwri.c",0x6d,"CMS_add0_recipient_password");
                uVar5 = 0x80006;
              }
              else {
                pAVar10 = ASN1_TYPE_new();
                a->parameter = pAVar10;
                if (pAVar10 == (ASN1_TYPE *)0x0) {
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_pwri.c",0x72,"CMS_add0_recipient_password");
                  uVar5 = 0x8000d;
                }
                else {
                  iVar1 = EVP_CIPHER_param_to_asn1(ctx,pAVar10);
                  if (0 < iVar1) goto LAB_0010017e;
                  ERR_new();
                  ERR_set_debug("crypto/cms/cms_pwri.c",0x76,"CMS_add0_recipient_password");
                  uVar5 = 0x66;
                }
              }
              goto LAB_001003ac;
            }
            goto LAB_001003b8;
          }
LAB_0010017e:
          uVar5 = EVP_CIPHER_CTX_get0_cipher(ctx);
          iVar1 = EVP_CIPHER_get_type(uVar5);
          pAVar6 = OBJ_nid2obj(iVar1);
          a->algorithm = pAVar6;
          EVP_CIPHER_CTX_free(ctx);
          pAVar7 = (ASN1_ITEM *)CMS_RecipientInfo_it();
          ri = ASN1_item_new(pAVar7);
          if (ri == (ASN1_VALUE *)0x0) {
            ERR_new();
            uVar5 = 0x83;
            goto LAB_00100491;
          }
          pAVar7 = (ASN1_ITEM *)CMS_PasswordRecipientInfo_it();
          pAVar8 = ASN1_item_new(pAVar7);
          *(ASN1_VALUE **)(ri + 8) = pAVar8;
          if (pAVar8 == (ASN1_VALUE *)0x0) {
            ERR_new();
            uVar5 = 0x89;
LAB_00100441:
            ERR_set_debug("crypto/cms/cms_pwri.c",uVar5,"CMS_add0_recipient_password");
            ERR_set_error(0x2e,0x8000d,0);
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
          }
          else {
            *(undefined4 *)ri = 3;
            *(undefined8 **)(pAVar8 + 0x30) = puVar2;
            X509_ALGOR_free(*(X509_ALGOR **)(pAVar8 + 0x10));
            pXVar9 = X509_ALGOR_new();
            *(X509_ALGOR **)(pAVar8 + 0x10) = pXVar9;
            if (pXVar9 == (X509_ALGOR *)0x0) {
              ERR_new();
              uVar5 = 0x94;
              goto LAB_00100441;
            }
            pAVar6 = OBJ_nid2obj(0x37d);
            pXVar9->algorithm = pAVar6;
            lVar3 = *(long *)(pAVar8 + 0x10);
            pAVar10 = ASN1_TYPE_new();
            *(ASN1_TYPE **)(lVar3 + 8) = pAVar10;
            lVar3 = *(long *)(*(long *)(pAVar8 + 0x10) + 8);
            if (lVar3 == 0) {
              ERR_new();
              uVar5 = 0x9a;
              goto LAB_00100441;
            }
            pAVar7 = (ASN1_ITEM *)X509_ALGOR_it();
            pAVar11 = ASN1_item_pack(a,pAVar7,(ASN1_OCTET_STRING **)(lVar3 + 8));
            if (pAVar11 == (ASN1_STRING *)0x0) {
              ERR_new();
              uVar5 = 0xa1;
              goto LAB_00100441;
            }
            **(undefined4 **)(*(long *)(pAVar8 + 0x10) + 8) = 0x10;
            X509_ALGOR_free(a);
            lVar3 = PKCS5_pbkdf2_set_ex(iter,0,0,0xffffffff,0xffffffff,*puVar2);
            *(long *)(pAVar8 + 8) = lVar3;
            if (lVar3 != 0) {
              CMS_RecipientInfo_set0_password((CMS_RecipientInfo *)ri,pass,passlen);
              *(undefined4 *)pAVar8 = 0;
              iVar1 = OPENSSL_sk_push(psVar4,ri);
              if (iVar1 != 0) goto LAB_001002cc;
              ERR_new();
              ERR_set_debug("crypto/cms/cms_pwri.c",0xb5,"CMS_add0_recipient_password");
              ERR_set_error(0x2e,0x8000f,0);
            }
            a = (X509_ALGOR *)0x0;
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
          }
          pAVar7 = (ASN1_ITEM *)CMS_RecipientInfo_it();
          ASN1_item_free(ri,pAVar7);
        }
      }
      ri = (ASN1_VALUE *)0x0;
      X509_ALGOR_free(a);
      goto LAB_001002cc;
    }
    if ((kekciph == (EVP_CIPHER *)0x0) &&
       (kekciph = *(EVP_CIPHER **)(lVar3 + 0x18), kekciph == (EVP_CIPHER *)0x0)) {
LAB_001003dd:
      ERR_new();
      ri = (ASN1_VALUE *)0x0;
      ERR_set_debug("crypto/cms/cms_pwri.c",0x4a,"CMS_add0_recipient_password");
      ERR_set_error(0x2e,0x7e,0);
      goto LAB_001002cc;
    }
    if (wrap_nid == 0x37d) goto LAB_00100129;
    ERR_new();
    ERR_set_debug("crypto/cms/cms_pwri.c",0x4e,"CMS_add0_recipient_password");
    ERR_set_error(0x2e,0xb3,0);
  }
  ri = (ASN1_VALUE *)0x0;
LAB_001002cc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (CMS_RecipientInfo *)ri;
}



undefined4 ossl_cms_RecipientInfo_pwri_crypt(undefined8 param_1,long param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  uchar *in;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  X509_ALGOR *a;
  undefined8 uVar10;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *ctx;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  byte bVar18;
  byte *local_c0;
  int local_7c;
  char local_78 [56];
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = ossl_cms_get0_cmsctx();
  lVar8 = ossl_cms_get0_env_enc_content(param_1);
  lVar17 = *(long *)(param_2 + 8);
  if (*(long *)(lVar17 + 0x20) == 0) {
    ERR_new();
    ERR_set_debug("crypto/cms/cms_pwri.c",0x147,"ossl_cms_RecipientInfo_pwri_crypt");
    ERR_set_error(0x2e,0xb2,0);
  }
  else {
    puVar16 = *(undefined8 **)(lVar17 + 0x10);
    if ((puVar16 == (undefined8 *)0x0) ||
       (iVar3 = OBJ_obj2nid((ASN1_OBJECT *)*puVar16), iVar3 != 0x37d)) {
      ERR_new();
      ERR_set_debug("crypto/cms/cms_pwri.c",0x14d,"ossl_cms_RecipientInfo_pwri_crypt");
      ERR_set_error(0x2e,0xb3,0);
    }
    else {
      uVar10 = puVar16[1];
      uVar9 = X509_ALGOR_it();
      a = (X509_ALGOR *)ASN1_TYPE_unpack_sequence(uVar9,uVar10);
      if (a != (X509_ALGOR *)0x0) {
        OBJ_obj2txt(local_78,0x32,a->algorithm,0);
        uVar10 = ossl_cms_ctx_get0_propq(uVar7);
        uVar9 = ossl_cms_ctx_get0_libctx(uVar7);
        cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar9,local_78,uVar10);
        if (cipher == (EVP_CIPHER *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/cms/cms_pwri.c",0x15e,"ossl_cms_RecipientInfo_pwri_crypt");
          ERR_set_error(0x2e,0x94,0);
          EVP_CIPHER_free();
          EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
LAB_00100a08:
          local_c0 = (byte *)0x0;
LAB_00100a11:
          CRYPTO_free(local_c0);
          uVar4 = 0;
        }
        else {
          ctx = EVP_CIPHER_CTX_new();
          if (ctx == (EVP_CIPHER_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_pwri.c",0x164,"ossl_cms_RecipientInfo_pwri_crypt");
            ERR_set_error(0x2e,0x80006,0);
            EVP_CIPHER_free();
            EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
            goto LAB_00100a08;
          }
          iVar3 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,param_3);
          if (iVar3 == 0) {
LAB_001009f0:
            EVP_CIPHER_free(cipher);
            EVP_CIPHER_CTX_free(ctx);
            goto LAB_00100a08;
          }
          EVP_CIPHER_CTX_set_padding(ctx,0);
          iVar3 = EVP_CIPHER_asn1_to_param(ctx,a->parameter);
          if (iVar3 < 1) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_pwri.c",0x16c,"ossl_cms_RecipientInfo_pwri_crypt");
            uVar7 = 0x66;
LAB_00100a9f:
            ERR_set_error(0x2e,uVar7,0);
LAB_00100aab:
            EVP_CIPHER_free(cipher);
            EVP_CIPHER_CTX_free(ctx);
            goto LAB_00100a08;
          }
          iVar3 = EVP_PBE_CipherInit_ex
                            (**(undefined8 **)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x20),
                             *(undefined8 *)(lVar17 + 0x28),(*(undefined8 **)(lVar17 + 8))[1],ctx,
                             param_3);
          if (iVar3 < 0) {
            ERR_new();
            ERR_set_debug("crypto/cms/cms_pwri.c",0x178,"ossl_cms_RecipientInfo_pwri_crypt");
            uVar7 = 0x80006;
            goto LAB_00100a9f;
          }
          if (param_3 == 0) {
            local_c0 = (byte *)CRYPTO_malloc(**(int **)(lVar17 + 0x18),"crypto/cms/cms_pwri.c",0x18d
                                            );
            if (local_c0 != (byte *)0x0) {
              iVar3 = **(int **)(lVar17 + 0x18);
              in = *(uchar **)(*(int **)(lVar17 + 0x18) + 2);
              iVar5 = EVP_CIPHER_CTX_get_block_size(ctx);
              uVar14 = (ulong)iVar5;
              if ((((uVar14 != 0) && (uVar13 = (ulong)iVar3, uVar14 * 2 <= uVar13)) &&
                  (uVar13 % uVar14 == 0)) &&
                 (pbVar12 = (byte *)CRYPTO_malloc(iVar3,"crypto/cms/cms_pwri.c",0xdc),
                 pbVar12 != (byte *)0x0)) {
                lVar17 = uVar13 + uVar14 * -2;
                iVar6 = EVP_DecryptUpdate(ctx,pbVar12 + lVar17,&local_7c,in + lVar17,iVar5 * 2);
                if ((((iVar6 != 0) &&
                     (iVar6 = EVP_DecryptUpdate(ctx,pbVar12,&local_7c,pbVar12 + uVar14 + lVar17,
                                                iVar5), iVar6 != 0)) &&
                    ((iVar5 = EVP_DecryptUpdate(ctx,pbVar12,&local_7c,in,iVar3 - iVar5), iVar5 != 0
                     && ((iVar5 = EVP_DecryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                                     (uchar *)0x0,(uchar *)0x0), iVar5 != 0 &&
                         (iVar3 = EVP_DecryptUpdate(ctx,pbVar12,&local_7c,pbVar12,iVar3), iVar3 != 0
                         )))))) &&
                   ((byte)((pbVar12[1] ^ pbVar12[4]) & (pbVar12[2] ^ pbVar12[5]) &
                          (pbVar12[3] ^ pbVar12[6])) == 0xff)) {
                  bVar1 = *pbVar12;
                  uVar14 = (ulong)bVar1;
                  if ((ulong)(long)(int)(bVar1 - 4) <= uVar13) {
                    if (bVar1 < 8) {
                      if ((bVar1 & 4) == 0) {
                        if ((bVar1 != 0) && (*local_c0 = pbVar12[4], (bVar1 & 2) != 0)) {
                          *(undefined2 *)(local_c0 + (uVar14 - 2)) =
                               *(undefined2 *)(pbVar12 + uVar14 + 2);
                        }
                      }
                      else {
                        *(undefined4 *)local_c0 = *(undefined4 *)(pbVar12 + 4);
                        *(undefined4 *)(local_c0 + (uVar14 - 4)) = *(undefined4 *)(pbVar12 + uVar14)
                        ;
                      }
                    }
                    else {
                      *(undefined8 *)local_c0 = *(undefined8 *)(pbVar12 + 4);
                      *(undefined8 *)(local_c0 + (uVar14 - 8)) =
                           *(undefined8 *)(pbVar12 + (uVar14 - 4));
                      lVar17 = (long)local_c0 - (long)((ulong)(local_c0 + 8) & 0xfffffffffffffff8);
                      pbVar15 = pbVar12 + (4 - lVar17);
                      puVar16 = (undefined8 *)((ulong)(local_c0 + 8) & 0xfffffffffffffff8);
                      for (uVar11 = (ulong)((int)lVar17 + (uint)bVar1 >> 3); uVar11 != 0;
                          uVar11 = uVar11 - 1) {
                        *puVar16 = *(undefined8 *)pbVar15;
                        pbVar15 = pbVar15 + ((ulong)bVar18 * -2 + 1) * 8;
                        puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
                      }
                    }
                    CRYPTO_clear_free(pbVar12,uVar13,"crypto/cms/cms_pwri.c",0xfd);
                    CRYPTO_clear_free(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),
                                      "crypto/cms/cms_pwri.c",0x197);
                    *(ulong *)(lVar8 + 0x28) = uVar14;
                    *(byte **)(lVar8 + 0x20) = local_c0;
                    EVP_CIPHER_free(cipher);
                    EVP_CIPHER_CTX_free(ctx);
                    goto LAB_001009aa;
                  }
                }
                CRYPTO_clear_free(pbVar12,uVar13,"crypto/cms/cms_pwri.c",0xfd);
              }
              ERR_new();
              ERR_set_debug("crypto/cms/cms_pwri.c",0x193,"ossl_cms_RecipientInfo_pwri_crypt");
              ERR_set_error(0x2e,0xb4,0);
              goto LAB_00100d71;
            }
            goto LAB_00100aab;
          }
          uVar14 = *(ulong *)(lVar8 + 0x28);
          iVar3 = EVP_CIPHER_CTX_get_block_size(ctx);
          uVar13 = (ulong)iVar3;
          if (((uVar13 == 0) ||
              (uVar11 = ((uVar14 + 3 + uVar13) / uVar13) * uVar13, uVar11 < uVar13 * 2)) ||
             (0xff < uVar14)) goto LAB_001009f0;
          local_c0 = (byte *)CRYPTO_malloc((int)uVar11,"crypto/cms/cms_pwri.c",0x183);
          if (local_c0 == (byte *)0x0) goto LAB_00100aab;
          uVar14 = *(ulong *)(lVar8 + 0x28);
          pbVar12 = *(byte **)(lVar8 + 0x20);
          iVar3 = EVP_CIPHER_CTX_get_block_size(ctx);
          uVar13 = (ulong)iVar3;
          if (((uVar13 == 0) ||
              (uVar11 = ((uVar14 + 3 + uVar13) / uVar13) * uVar13, uVar11 < uVar13 * 2)) ||
             (0xff < uVar14)) {
LAB_00100d71:
            EVP_CIPHER_free(cipher);
            EVP_CIPHER_CTX_free(ctx);
            goto LAB_00100a11;
          }
          *local_c0 = (byte)uVar14;
          local_c0[1] = ~*pbVar12;
          local_c0[2] = ~pbVar12[1];
          local_c0[3] = ~pbVar12[2];
          memcpy(local_c0 + 4,pbVar12,uVar14);
          if (uVar14 + 4 < uVar11) {
            uVar7 = ossl_cms_ctx_get0_libctx(uVar7);
            iVar3 = RAND_bytes_ex(uVar7,local_c0 + uVar14 + 4,(uVar11 - uVar14) + -4,0);
            if (iVar3 < 1) goto LAB_00100d71;
          }
          iVar5 = (int)uVar11;
          iVar3 = EVP_EncryptUpdate(ctx,local_c0,&local_7c,local_c0,iVar5);
          if ((iVar3 == 0) ||
             (iVar3 = EVP_EncryptUpdate(ctx,local_c0,&local_7c,local_c0,iVar5), iVar3 == 0))
          goto LAB_00100d71;
          piVar2 = *(int **)(lVar17 + 0x18);
          *(byte **)(piVar2 + 2) = local_c0;
          *piVar2 = iVar5;
          EVP_CIPHER_free(cipher);
          EVP_CIPHER_CTX_free(ctx);
LAB_001009aa:
          uVar4 = 1;
        }
        X509_ALGOR_free(a);
        goto LAB_001006dc;
      }
      ERR_new();
      ERR_set_debug("crypto/cms/cms_pwri.c",0x155,"ossl_cms_RecipientInfo_pwri_crypt");
      ERR_set_error(0x2e,0xb0,0);
    }
  }
  uVar4 = 0;
LAB_001006dc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



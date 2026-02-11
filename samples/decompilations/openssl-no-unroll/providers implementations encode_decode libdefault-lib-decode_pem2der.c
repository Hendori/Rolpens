
undefined1 * pem2der_settable_ctx_params(void)

{
  return settables_1;
}



undefined4
pem2der_pass_helper(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined4 local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_4 == (undefined8 *)0x0) || ((code *)*param_4 == (code *)0x0)) ||
     (iVar1 = (*(code *)*param_4)(param_1,(long)param_2,local_18,0,param_4[1]), iVar1 == 0)) {
    local_18[0] = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18[0];
}



ulong pem2der_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
  local_28 = param_1 + 0x28;
  if (lVar2 != 0) {
    uVar3 = OSSL_PARAM_get_utf8_string(lVar2,&local_28,0x100);
    if ((int)uVar3 == 0) goto LAB_001000f4;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"data-structure");
  local_28 = param_1 + 8;
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_28,0x20);
    uVar3 = (ulong)(iVar1 != 0);
  }
LAB_001000f4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pem2der_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void pem2der_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x128,"providers/implementations/encode_decode/decode_pem2der.c",0x3f);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
  }
  return;
}



undefined4
pem2der_decode(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  BIO *bp;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  EVP_CIPHER_INFO *pEVar8;
  EVP_CIPHER_INFO *pEVar9;
  long in_FS_OFFSET;
  undefined1 *local_198;
  EVP_CIPHER *local_178;
  EVP_CIPHER *pEStack_170;
  EVP_CIPHER *local_168;
  EVP_CIPHER *pEStack_160;
  EVP_CIPHER *local_158;
  undefined4 local_13c;
  char *local_138;
  char *local_130;
  uchar *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [16];
  EVP_CIPHER *local_f8;
  EVP_CIPHER *pEStack_f0;
  EVP_CIPHER *local_e8;
  EVP_CIPHER_INFO local_e0 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_13c = 0;
  local_138 = (char *)0x0;
  local_130 = (char *)0x0;
  local_128 = (uchar *)0x0;
  local_120 = 0;
  bp = (BIO *)ossl_bio_new_from_core_bio(*param_1);
  if (bp != (BIO *)0x0) {
    iVar1 = PEM_read_bio(bp,&local_138,&local_130,&local_128,&local_120);
    BIO_free(bp);
    pcVar6 = local_130;
    if (0 < iVar1) {
      sVar3 = strlen(local_130);
      if (sVar3 < 0xb) {
LAB_00100240:
        pcVar6 = local_138;
        iVar1 = strcmp(local_138,"ENCRYPTED PRIVATE KEY");
        if (iVar1 == 0) {
          lVar5 = 0;
LAB_001006cb:
          lVar7 = *(long *)(pem_name_map_0 + lVar5 * 0x20 + 0x10);
          pcVar6 = *(char **)(pem_name_map_0 + lVar5 * 0x20 + 0x18);
          if ((param_3 & 1) == 0) {
            iVar1 = OPENSSL_strcasecmp(param_1 + 1,"EncryptedPrivateKeyInfo");
            if ((iVar1 != 0) &&
               (iVar1 = OPENSSL_strcasecmp(param_1 + 1,"PrivateKeyInfo"), iVar1 != 0))
            goto LAB_001004cb;
          }
          uVar4 = ossl_prov_ctx_get0_libctx(*param_1);
          uVar2 = ossl_epki2pki_der_decode
                            (local_128,local_120,param_3,param_4,param_5,param_6,param_7,uVar4,
                             param_1 + 5);
          pcVar6 = local_138;
        }
        else {
          iVar1 = strcmp(pcVar6,"PRIVATE KEY");
          if (iVar1 == 0) {
            lVar5 = 1;
            goto LAB_001006cb;
          }
          iVar1 = strcmp(pcVar6,"PUBLIC KEY");
          if (iVar1 == 0) {
            lVar5 = 2;
            pcVar6 = "SubjectPublicKeyInfo";
            lVar7 = 0;
LAB_001004cb:
            if (((param_3 & 2) != 0) ||
               (iVar1 = OPENSSL_strcasecmp(param_1 + 1,"SubjectPublicKeyInfo"), iVar1 == 0)) {
              uVar4 = ossl_prov_ctx_get0_libctx(*param_1);
              uVar2 = ossl_spki2typespki_der_decode
                                (local_128,local_120,param_3,param_4,param_5,param_6,param_7,uVar4,
                                 param_1 + 5);
              pcVar6 = local_138;
              goto LAB_001003d2;
            }
          }
          else {
            iVar1 = strcmp(pcVar6,"DH PARAMETERS");
            if (iVar1 == 0) {
              lVar5 = 3;
            }
            else {
              iVar1 = strcmp(pcVar6,"X9.42 DH PARAMETERS");
              if (iVar1 == 0) {
                lVar5 = 4;
              }
              else {
                iVar1 = strcmp(pcVar6,"DSA PRIVATE KEY");
                if (iVar1 == 0) {
                  lVar5 = 5;
                }
                else {
                  iVar1 = strcmp(pcVar6,"DSA PUBLIC KEY");
                  if (iVar1 == 0) {
                    lVar5 = 6;
                  }
                  else {
                    iVar1 = strcmp(pcVar6,"DSA PARAMETERS");
                    if (iVar1 == 0) {
                      lVar5 = 7;
                    }
                    else {
                      iVar1 = strcmp(pcVar6,"EC PRIVATE KEY");
                      if (iVar1 == 0) {
                        lVar5 = 8;
                      }
                      else {
                        iVar1 = strcmp(pcVar6,"EC PARAMETERS");
                        if (iVar1 == 0) {
                          lVar5 = 9;
                        }
                        else {
                          iVar1 = strcmp(pcVar6,"SM2 PARAMETERS");
                          if (iVar1 == 0) {
                            lVar5 = 10;
                          }
                          else {
                            iVar1 = strcmp(pcVar6,"RSA PRIVATE KEY");
                            if (iVar1 == 0) {
                              lVar5 = 0xb;
                            }
                            else {
                              iVar1 = strcmp(pcVar6,"RSA PUBLIC KEY");
                              if (iVar1 == 0) {
                                lVar5 = 0xc;
                              }
                              else {
                                iVar1 = strcmp(pcVar6,"CERTIFICATE");
                                if (iVar1 == 0) {
                                  lVar5 = 0xd;
                                }
                                else {
                                  iVar1 = strcmp(pcVar6,"TRUSTED CERTIFICATE");
                                  if (iVar1 == 0) {
                                    lVar5 = 0xe;
                                  }
                                  else {
                                    iVar1 = strcmp(pcVar6,"X509 CERTIFICATE");
                                    if (iVar1 == 0) {
                                      lVar5 = 0xf;
                                    }
                                    else {
                                      iVar1 = strcmp(pcVar6,"X509 CRL");
                                      if (iVar1 != 0) {
                                        uVar2 = 1;
                                        goto LAB_001003d2;
                                      }
                                      lVar5 = 0x10;
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
              }
            }
            lVar7 = *(long *)(pem_name_map_0 + lVar5 * 0x20 + 0x10);
            pcVar6 = *(char **)(pem_name_map_0 + lVar5 * 0x20 + 0x18);
          }
          local_13c = *(undefined4 *)(pem_name_map_0 + lVar5 * 0x20 + 8);
          if (lVar7 == 0) {
            pEVar8 = (EVP_CIPHER_INFO *)local_108;
          }
          else {
            pEVar8 = local_e0;
            OSSL_PARAM_construct_utf8_string(&local_178,"data-type",lVar7,0);
            local_e8 = local_158;
            local_108._0_8_ = local_178;
            local_108._8_8_ = pEStack_170;
            local_f8 = local_168;
            pEStack_f0 = pEStack_160;
          }
          local_198 = local_108;
          pEVar9 = pEVar8;
          if (pcVar6 != (char *)0x0) {
            OSSL_PARAM_construct_utf8_string(&local_178,"data-structure",pcVar6,0);
            pEVar9 = (EVP_CIPHER_INFO *)(pEVar8[1].iv + 8);
            pEVar8->cipher = local_178;
            *(EVP_CIPHER **)pEVar8->iv = pEStack_170;
            *(EVP_CIPHER **)(pEVar8->iv + 8) = local_168;
            pEVar8[1].cipher = pEStack_160;
            *(EVP_CIPHER **)pEVar8[1].iv = local_158;
          }
          OSSL_PARAM_construct_octet_string(&local_178,&_LC24,local_128,local_120);
          pEVar9->cipher = local_178;
          *(EVP_CIPHER **)pEVar9->iv = pEStack_170;
          *(EVP_CIPHER **)(pEVar9->iv + 8) = local_168;
          pEVar9[1].cipher = pEStack_160;
          *(EVP_CIPHER **)pEVar9[1].iv = local_158;
          OSSL_PARAM_construct_int(&local_178,&_LC25,&local_13c);
          *(EVP_CIPHER **)(pEVar9[1].iv + 8) = local_178;
          pEVar9[2].cipher = pEStack_170;
          *(EVP_CIPHER **)pEVar9[2].iv = local_168;
          *(EVP_CIPHER **)(pEVar9[2].iv + 8) = pEStack_160;
          pEVar9[3].cipher = local_158;
          OSSL_PARAM_construct_end(&local_178);
          *(EVP_CIPHER **)pEVar9[3].iv = local_178;
          *(EVP_CIPHER **)(pEVar9[3].iv + 8) = pEStack_170;
          pEVar9[4].cipher = local_168;
          *(EVP_CIPHER **)pEVar9[4].iv = pEStack_160;
          *(EVP_CIPHER **)(pEVar9[4].iv + 8) = local_158;
          uVar2 = (*param_4)(local_198,param_5);
          pcVar6 = local_138;
        }
      }
      else {
        local_110 = param_7;
        local_118 = param_6;
        iVar1 = PEM_get_EVP_CIPHER_INFO(pcVar6,(EVP_CIPHER_INFO *)local_108);
        if ((iVar1 != 0) &&
           (iVar1 = PEM_do_header((EVP_CIPHER_INFO *)local_108,local_128,&local_120,
                                  pem2der_pass_helper,&local_118), iVar1 != 0)) goto LAB_00100240;
        uVar2 = 0;
        pcVar6 = local_138;
      }
LAB_001003d2:
      CRYPTO_free(pcVar6);
      CRYPTO_free(local_130);
      CRYPTO_free(local_128);
      goto LAB_0010040d;
    }
  }
  uVar2 = 1;
LAB_0010040d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



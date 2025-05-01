
undefined1 * rsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * rsa_settable_ctx_params(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = settable_ctx_params;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    puVar1 = settable_ctx_params_no_digest;
  }
  return puVar1;
}



undefined1 * rsa_sigalg_query_key_types(void)

{
  return keytypes_66;
}



undefined1 * rsa_sigalg_settable_ctx_params(long param_1)

{
  undefined1 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = settable_sigalg_ctx_params;
    if (*(int *)(param_1 + 0x18) != 0x8000) {
      puVar1 = (undefined1 *)0x0;
    }
    return puVar1;
  }
  return (undefined1 *)0x0;
}



undefined8 rsa_settable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = EVP_MD_settable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 rsa_set_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = EVP_MD_CTX_set_params();
    return uVar1;
  }
  return 0;
}



undefined8 rsa_gettable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = EVP_MD_gettable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 rsa_get_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = EVP_MD_CTX_get_params();
    return uVar1;
  }
  return 0;
}



undefined8 rsa_check_padding(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 5) {
    iVar1 = RSA_X931_hash_id(param_4);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0xbd,"rsa_check_padding");
      ERR_set_error(0x39,0xaa,0);
      return 0;
    }
  }
  else if (iVar1 == 6) {
    if ((*(int *)(param_1 + 0xb4) != -1) &&
       (((param_2 != 0 && (iVar1 = EVP_MD_is_a(*(undefined8 *)(param_1 + 0x20)), iVar1 == 0)) ||
        ((param_3 != 0 && (iVar1 = EVP_MD_is_a(*(undefined8 *)(param_1 + 0x70),param_3), iVar1 == 0)
         ))))) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0xc6,"rsa_check_padding");
      ERR_set_error(0x39,0xae,0);
      return 0;
    }
  }
  else if ((iVar1 == 3) && ((param_2 != 0 || (param_4 != 0)))) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0xb7,"rsa_check_padding");
    ERR_set_error(0x39,0xa8,0);
    return 0;
  }
  return 1;
}



undefined8 rsa_setup_mgf1_md(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  lVar3 = EVP_MD_fetch(*param_1,param_2,param_3);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x1da,"rsa_setup_mgf1_md");
    ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
  }
  else {
    iVar1 = ossl_digest_rsa_sign_get_md_nid(lVar3);
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x1e2,"rsa_setup_mgf1_md");
      ERR_set_error(0x39,0xae,"digest=%s",param_2);
      EVP_MD_free(lVar3);
    }
    else {
      iVar2 = rsa_check_padding(param_1,0,param_2,iVar1);
      if (iVar2 == 0) {
        EVP_MD_free(lVar3);
      }
      else {
        uVar4 = OPENSSL_strlcpy((long)param_1 + 0x7c,param_2,0x32);
        if (uVar4 < 0x32) {
          EVP_MD_free(param_1[0xe]);
          *(byte *)((long)param_1 + 0x1c) = *(byte *)((long)param_1 + 0x1c) | 4;
          param_1[0xe] = lVar3;
          *(int *)(param_1 + 0xf) = iVar1;
          return 1;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x1e9,"rsa_setup_mgf1_md");
        ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
        EVP_MD_free(lVar3);
      }
    }
  }
  return 0;
}



bool rsa_sigalg_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if ((((param_2 != (long *)0x0) && (*param_2 != 0)) && (*(int *)(param_1 + 0x18) == 0x8000)) &&
     (lVar2 = OSSL_PARAM_locate_const(param_2,"signature"), lVar2 != 0)) {
    CRYPTO_free(*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0xb8,0,param_1 + 0xc0);
    return iVar1 != 0;
  }
  return true;
}



int rsa_signverify_message_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0)) {
    if ((*(byte *)(param_1 + 0x1c) & 8) != 0) {
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xdf;
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x28),param_2,param_3);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x348,
                  "rsa_signverify_message_update");
    ERR_set_error(0x39,0xf0,0);
    return 0;
  }
  return 0;
}



undefined8 * rsa_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0xd0,"providers/implementations/signature/rsa_sig.c",0xeb);
    if ((ptr != (undefined8 *)0x0) &&
       ((param_2 == (char *)0x0 ||
        (param_2 = CRYPTO_strdup(param_2,"providers/implementations/signature/rsa_sig.c",0xed),
        param_2 != (char *)0x0)))) {
      uVar2 = ossl_prov_ctx_get0_libctx(param_1);
      *(byte *)((long)ptr + 0x1c) = *(byte *)((long)ptr + 0x1c) | 2;
      *ptr = uVar2;
      ptr[1] = param_2;
      ptr[0x16] = 0xfffffffffffffffc;
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool rsa_get_ctx_params(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  int local_13c;
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [64];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    lVar5 = OSSL_PARAM_locate(param_2,"algorithm-id");
    if (lVar5 == 0) {
LAB_0010075d:
      lVar5 = OSSL_PARAM_locate(param_2,"pad-mode");
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 8) == 1) {
          iVar2 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(param_1 + 0x68));
joined_r0x001008c2:
          if (iVar2 == 0) goto LAB_001006c8;
        }
        else {
          if (*(int *)(lVar5 + 8) != 4) goto LAB_001006c8;
          iVar2 = *(int *)(param_1 + 0x68);
          if (iVar2 == 1) {
            lVar5 = 0;
LAB_00100b2d:
            if (*(long *)(padding_item + lVar5 * 0x10 + 8) != 0) {
              iVar2 = OSSL_PARAM_set_utf8_string();
              goto joined_r0x001008c2;
            }
          }
          else {
            if (iVar2 == 3) {
              lVar5 = 1;
              goto LAB_00100b2d;
            }
            if (iVar2 == 5) {
              lVar5 = 2;
              goto LAB_00100b2d;
            }
            if (iVar2 == 6) {
              lVar5 = 3;
              goto LAB_00100b2d;
            }
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x595,"rsa_get_ctx_params");
          ERR_set_error(0x39,0xc0103,0);
        }
      }
      lVar5 = OSSL_PARAM_locate(param_2,"digest");
      if (((lVar5 == 0) || (iVar2 = OSSL_PARAM_set_utf8_string(lVar5,param_1 + 0x34), iVar2 != 0))
         && ((lVar5 = OSSL_PARAM_locate(param_2,"mgf1-digest"), lVar5 == 0 ||
             (iVar2 = OSSL_PARAM_set_utf8_string(lVar5,param_1 + 0x7c), iVar2 != 0)))) {
        lVar5 = OSSL_PARAM_locate(param_2,"saltlen");
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 8) == 1) {
            iVar2 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(param_1 + 0xb0));
            bVar9 = iVar2 != 0;
            goto LAB_001006ca;
          }
          if (*(int *)(lVar5 + 8) == 4) {
            iVar2 = *(int *)(param_1 + 0xb0);
            if (iVar2 == -2) {
              pcVar8 = "auto";
            }
            else if (iVar2 < -1) {
              if (iVar2 == -4) {
                pcVar8 = "auto-digestmax";
              }
              else {
                pcVar8 = "max";
                if (iVar2 != -3) goto LAB_00100b02;
              }
            }
            else {
              pcVar8 = "digest";
              if (iVar2 != -1) {
LAB_00100b02:
                iVar2 = BIO_snprintf(*(char **)(lVar5 + 0x10),*(size_t *)(lVar5 + 0x18),"%d");
                if (iVar2 < 1) goto LAB_001006c8;
                *(long *)(lVar5 + 0x20) = (long)iVar2;
                goto LAB_0010085c;
              }
            }
            iVar2 = OSSL_PARAM_set_utf8_string(lVar5,pcVar8);
            bVar9 = iVar2 != 0;
            goto LAB_001006ca;
          }
        }
LAB_0010085c:
        bVar9 = true;
        goto LAB_001006ca;
      }
    }
    else {
      iVar2 = WPACKET_init_der(local_108,local_c8,0x80);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x140,
                      "rsa_generate_signature_aid");
        ERR_set_error(0x39,0x8000f,0);
      }
      else if (*(int *)(param_1 + 0x68) == 1) {
        iVar2 = ossl_DER_w_algorithmIdentifier_MDWithRSAEncryption
                          (local_108,0xffffffff,*(undefined4 *)(param_1 + 0x30));
        if (iVar2 < 1) {
          if (iVar2 != 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x14f,
                          "rsa_generate_signature_aid");
            uVar1 = *(undefined4 *)(param_1 + 0x30);
            pcVar8 = "Algorithm ID generation - md NID: %d";
            goto LAB_00100897;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x14c,
                        "rsa_generate_signature_aid");
          uVar7 = 0xc0103;
          goto LAB_001006af;
        }
LAB_00100710:
        iVar2 = WPACKET_finish(local_108);
        if (iVar2 == 0) {
LAB_001008a8:
          WPACKET_cleanup(local_108);
        }
        else {
          WPACKET_get_total_written(local_108,&local_130);
          lVar6 = WPACKET_get_curr(local_108);
          WPACKET_cleanup(local_108);
          if ((lVar6 != 0) &&
             (iVar2 = OSSL_PARAM_set_octet_string(lVar5,lVar6,local_130), iVar2 != 0))
          goto LAB_0010075d;
        }
      }
      else {
        if (*(int *)(param_1 + 0x68) != 6) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x164,
                        "rsa_generate_signature_aid");
          uVar1 = *(undefined4 *)(param_1 + 0x68);
          pcVar8 = "Algorithm ID generation - pad mode: %d";
LAB_00100897:
          ERR_set_error(0x39,0x8010c,pcVar8,uVar1);
          goto LAB_001008a8;
        }
        iVar2 = *(int *)(param_1 + 0xb0);
        if (iVar2 == -1) {
          local_13c = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
          if (local_13c < 1) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x10d,
                          "rsa_pss_compute_saltlen");
            uVar7 = 0x7a;
            goto LAB_001006af;
          }
LAB_0010065a:
          if (local_13c < *(int *)(param_1 + 0xb4)) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",300,
                          "rsa_pss_compute_saltlen");
            ERR_set_error(0x39,0xac,"minimum salt length: %d, actual salt length: %d",
                          *(undefined4 *)(param_1 + 0xb4),local_13c);
            WPACKET_cleanup(local_108);
            goto LAB_001006c8;
          }
          iVar2 = ossl_rsa_pss_params_30_set_defaults(local_128);
          if ((((iVar2 != 0) &&
               (iVar2 = ossl_rsa_pss_params_30_set_hashalg
                                  (local_128,*(undefined4 *)(param_1 + 0x30)), iVar2 != 0)) &&
              (iVar2 = ossl_rsa_pss_params_30_set_maskgenhashalg
                                 (local_128,*(undefined4 *)(param_1 + 0x78)), iVar2 != 0)) &&
             ((iVar2 = ossl_rsa_pss_params_30_set_saltlen(local_128,local_13c), iVar2 != 0 &&
              (iVar2 = ossl_DER_w_algorithmIdentifier_RSA_PSS(local_108,0xffffffff,0x1000,local_128)
              , iVar2 != 0)))) goto LAB_00100710;
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x15f,
                        "rsa_generate_signature_aid");
          uVar7 = 0xc0103;
        }
        else if (iVar2 == -4) {
          local_13c = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
          if (0 < local_13c) goto LAB_00100a55;
          ERR_new();
          uVar7 = 0x113;
LAB_00100c38:
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",uVar7,
                        "rsa_pss_compute_saltlen");
          uVar7 = 0x7a;
        }
        else {
          if (iVar2 + 3U < 2) {
            local_13c = -1;
LAB_00100a55:
            iVar2 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
            if (iVar2 < 1) {
              ERR_new();
              uVar7 = 0x11b;
              goto LAB_00100c38;
            }
            iVar3 = RSA_size(*(RSA **)(param_1 + 0x10));
            if ((iVar3 < 3) || (iVar3 + -1 <= iVar2)) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x11f,
                            "rsa_pss_compute_saltlen");
              uVar7 = 0x9e;
              goto LAB_001006af;
            }
            uVar4 = RSA_bits(*(undefined8 *)(param_1 + 0x10));
            iVar2 = (iVar3 - iVar2) + -3 + (uint)((uVar4 & 7) != 1);
            if ((-1 < local_13c) && (local_13c < iVar2)) goto LAB_0010065a;
          }
          local_13c = iVar2;
          if (-1 < iVar2) goto LAB_0010065a;
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x129,
                        "rsa_pss_compute_saltlen");
          uVar7 = 0xc0103;
        }
LAB_001006af:
        ERR_set_error(0x39,uVar7,0);
        WPACKET_cleanup(local_108);
      }
    }
  }
LAB_001006c8:
  bVar9 = false;
LAB_001006ca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rsa_setup_md_isra_0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == 0) {
    param_3 = param_1[1];
  }
  if (param_2 == (char *)0x0) {
LAB_00100d30:
    uVar5 = 1;
  }
  else {
    sVar3 = strlen(param_2);
    lVar4 = EVP_MD_fetch(*param_1,param_2,param_3);
    if (lVar4 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x181,"rsa_setup_md");
      ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
    }
    else {
      iVar1 = ossl_digest_rsa_sign_get_md_nid(lVar4);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x187,"rsa_setup_md");
        ERR_set_error(0x39,0xae,"digest=%s",param_2);
      }
      else {
        iVar2 = EVP_MD_xof(lVar4);
        if (iVar2 == 0) {
          iVar2 = rsa_check_padding(param_1,param_2,0,iVar1);
          if (iVar2 != 0) {
            if (sVar3 < 0x32) {
              if ((*(byte *)((long)param_1 + 0x1c) & 2) != 0) {
                if ((*(byte *)((long)param_1 + 0x1c) & 4) == 0) {
                  iVar2 = EVP_MD_up_ref(lVar4);
                  if (iVar2 == 0) goto LAB_00100d80;
                  EVP_MD_free(param_1[0xe]);
                  param_1[0xe] = lVar4;
                  *(int *)(param_1 + 0xf) = iVar1;
                  OPENSSL_strlcpy((long)param_1 + 0x7c,param_2,0x32);
                }
                EVP_MD_CTX_free(param_1[5]);
                EVP_MD_free(param_1[4]);
                param_1[4] = lVar4;
                param_1[5] = 0;
                *(int *)(param_1 + 6) = iVar1;
                OPENSSL_strlcpy((long)param_1 + 0x34,param_2,0x32);
                goto LAB_00100d30;
              }
              if (*(char *)((long)param_1 + 0x34) != '\0') {
                iVar1 = EVP_MD_is_a(lVar4,(long)param_1 + 0x34);
                if (iVar1 == 0) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x1ae,"rsa_setup_md"
                               );
                  ERR_set_error(0x39,0xae,"digest %s != %s",param_2,(long)param_1 + 0x34);
                  goto LAB_00100d80;
                }
              }
              EVP_MD_free(lVar4);
              goto LAB_00100d30;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x1a7,"rsa_setup_md");
            ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x192,"rsa_setup_md");
          ERR_set_error(0x39,0xb7,0);
        }
      }
    }
LAB_00100d80:
    EVP_MD_free(lVar4);
    uVar5 = 0;
  }
  return uVar5;
}



bool rsa_signverify_init_isra_0
               (long param_1,RSA *param_2,code *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  undefined1 local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if (param_2 == (RSA *)0x0) {
      param_2 = *(RSA **)(param_1 + 0x10);
      if (param_2 != (RSA *)0x0) goto LAB_00100f95;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x202,"rsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = RSA_up_ref(param_2);
      if (iVar1 != 0) {
        RSA_free(*(RSA **)(param_1 + 0x10));
        *(RSA **)(param_1 + 0x10) = param_2;
LAB_00100f95:
        iVar1 = ossl_rsa_key_op_get_protect(param_2,param_5,local_44);
        if (iVar1 != 0) {
          *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 0x38;
          *(undefined4 *)(param_1 + 0x18) = param_5;
          *(undefined8 *)(param_1 + 0xb0) = 0xfffffffffffffffc;
          iVar1 = RSA_test_flags(*(undefined8 *)(param_1 + 0x10),0xf000);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x68) = 1;
LAB_00101047:
            iVar1 = (*param_3)(param_1,param_4);
            bVar11 = iVar1 != 0;
            goto LAB_00100f62;
          }
          if (iVar1 == 0x1000) {
            *(undefined4 *)(param_1 + 0x68) = 6;
            uVar7 = ossl_rsa_get0_pss_params_30(*(undefined8 *)(param_1 + 0x10));
            iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar7);
            if (iVar1 != 0) goto LAB_00101047;
            uVar2 = ossl_rsa_pss_params_30_hashalg(uVar7);
            uVar3 = ossl_rsa_pss_params_30_maskgenhashalg(uVar7);
            iVar1 = ossl_rsa_pss_params_30_saltlen(uVar7);
            lVar8 = ossl_rsa_oaeppss_nid2name(uVar2);
            lVar9 = ossl_rsa_oaeppss_nid2name(uVar3);
            if (lVar8 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x22e,
                            "rsa_signverify_init");
              ERR_set_error(0x39,0x7a,"PSS restrictions lack hash algorithm");
            }
            else if (lVar9 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x233,
                            "rsa_signverify_init");
              ERR_set_error(0x39,0x7a,"PSS restrictions lack MGF1 hash algorithm");
            }
            else {
              uVar10 = OPENSSL_strlcpy(param_1 + 0x34,lVar8,0x32);
              if (uVar10 < 0x32) {
                uVar10 = OPENSSL_strlcpy(param_1 + 0x7c,lVar9,0x32);
                if (uVar10 < 0x32) {
                  *(int *)(param_1 + 0xb0) = iVar1;
                  iVar4 = rsa_setup_mgf1_md(param_1,lVar9,*(undefined8 *)(param_1 + 8));
                  if (iVar4 != 0) {
                    iVar4 = rsa_setup_md_isra_0(param_1,lVar8,*(undefined8 *)(param_1 + 8));
                    if (iVar4 != 0) {
                      if (*(int *)(param_1 + 0x68) == 6) {
                        iVar4 = RSA_size(*(RSA **)(param_1 + 0x10));
                        iVar5 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
                        iVar4 = iVar4 - iVar5;
                        uVar6 = RSA_bits(*(undefined8 *)(param_1 + 0x10));
                        if ((uVar6 & 7) == 1) {
                          iVar4 = iVar4 + -1;
                        }
                        if ((iVar1 < 0) || (iVar4 < iVar1)) {
                          ERR_new();
                          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0xdb,
                                        "rsa_check_parameters");
                          ERR_set_error(0x39,0x70,0);
                          goto LAB_00100f60;
                        }
                        *(int *)(param_1 + 0xb4) = iVar1;
                      }
                      goto LAB_00101047;
                    }
                  }
                }
                else {
                  ERR_new();
                  ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x242,
                                "rsa_signverify_init");
                  ERR_set_error(0x39,0x7a,"MGF1 hash algorithm name too long");
                }
              }
              else {
                ERR_new();
                ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x23b,
                              "rsa_signverify_init");
                ERR_set_error(0x39,0x7a,"hash algorithm name too long");
              }
            }
          }
          else {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x252,
                          "rsa_signverify_init");
            ERR_set_error(4,0xb2,0);
          }
        }
      }
    }
  }
LAB_00100f60:
  bVar11 = false;
LAB_00100f62:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rsa_sign_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init_isra_0(param_1,param_2,rsa_set_ctx_params,param_3,0x10);
  return;
}



void rsa_verify_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init_isra_0(param_1,param_2,rsa_set_ctx_params,param_3,0x20);
  return;
}



void rsa_verify_recover_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  rsa_signverify_init_isra_0(param_1,param_2,rsa_set_ctx_params,param_3,0x40);
  return;
}



undefined8 rsa_digest_verify_init(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_3,rsa_set_ctx_params,param_4,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 != (char *)0x0) &&
     (((*param_2 == '\0' || (iVar1 = OPENSSL_strcasecmp(param_1 + 0x34,param_2), iVar1 != 0)) &&
      (iVar1 = rsa_setup_md_isra_0(param_1,param_2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)))) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001013c5;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001013c5:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_224_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001014aa;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001014aa:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_224_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001015aa;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001015aa:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_224_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001016aa;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001016aa:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_224_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001017aa;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001017aa:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_256_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001018aa;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001018aa:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



bool rsa_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  int local_2e0;
  int local_2dc;
  undefined1 *local_2d8;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined2 local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined2 local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_2b8 = (undefined1  [16])0x0;
  local_288 = 0;
  local_2d8 = (undefined *)0x0;
  local_2a8 = (undefined1  [16])0x0;
  local_298 = (undefined1  [16])0x0;
  local_238 = (undefined1  [16])0x0;
  local_228 = (undefined1  [16])0x0;
  local_218 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1e8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_2d0 = (undefined1 *)0x0;
  local_248 = 0;
  local_2c8 = (undefined1 *)0x0;
  local_2c0 = (undefined1 *)0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  local_258 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if (param_1 == 0) goto LAB_00101c40;
  bVar7 = true;
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) goto LAB_00101c48;
  local_2e0 = *(int *)(param_1 + 0x68);
  local_2dc = *(int *)(param_1 + 0xb0);
  lVar4 = OSSL_PARAM_locate_const(param_2,"digest");
  if (lVar4 == 0) {
LAB_00101b47:
    lVar4 = OSSL_PARAM_locate_const(param_2,"pad-mode");
    if (lVar4 == 0) {
LAB_00101cc5:
      lVar4 = OSSL_PARAM_locate_const(param_2,"saltlen");
      if (lVar4 == 0) goto LAB_00101d80;
      if (local_2e0 != 6) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x685,"rsa_set_ctx_params");
        ERR_set_error(0x39,0x88,
                      "PSS saltlen can only be specified if PSS padding has been specified first");
        bVar7 = false;
        goto LAB_00101c48;
      }
      if (*(int *)(lVar4 + 8) == 1) {
        iVar1 = OSSL_PARAM_get_int(lVar4,&local_2dc);
        if (iVar1 != 0) {
LAB_00101e92:
          if (local_2dc < -4) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x6a6,"rsa_set_ctx_params"
                         );
            ERR_set_error(0x39,0x70,0);
            bVar7 = false;
            goto LAB_00101c48;
          }
          iVar1 = *(int *)(param_1 + 0xb4);
          if (iVar1 != -1) {
            if (local_2dc != -2) {
              if (local_2dc == -1) goto LAB_00101fa2;
              if (local_2dc != -4) goto LAB_00102064;
            }
LAB_00101d6d:
            if ((*(uint *)(param_1 + 0x18) & 0x8020) == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x6b0,
                            "rsa_set_ctx_params");
              ERR_set_error(0x39,0x70,"Cannot use autodetected salt length");
              bVar7 = false;
              goto LAB_00101c48;
            }
          }
          goto LAB_00101d80;
        }
      }
      else if (*(int *)(lVar4 + 8) == 4) {
        pcVar6 = *(char **)(lVar4 + 0x10);
        iVar1 = strcmp(pcVar6,"digest");
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xb4);
          local_2dc = -1;
          if (iVar1 != -1) {
LAB_00101fa2:
            iVar2 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
            if (iVar2 < iVar1) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x6b7,
                            "rsa_set_ctx_params");
              uVar3 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
              ERR_set_error(0x39,0xac,
                            "Should be more than %d, but would be set to match digest size (%d)",
                            *(undefined4 *)(param_1 + 0xb4),uVar3);
              bVar7 = false;
              goto LAB_00101c48;
            }
          }
        }
        else {
          iVar1 = strcmp(pcVar6,"max");
          if (iVar1 == 0) {
            iVar1 = *(int *)(param_1 + 0xb4);
            local_2dc = -3;
            if (iVar1 != -1) {
LAB_00102064:
              if ((-1 < local_2dc) && (local_2dc < iVar1)) {
                ERR_new();
                ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x6c2,
                              "rsa_set_ctx_params");
                ERR_set_error(0x39,0xac,"Should be more than %d, but would be set to %d",
                              *(undefined4 *)(param_1 + 0xb4),local_2dc);
                bVar7 = false;
                goto LAB_00101c48;
              }
            }
          }
          else {
            iVar1 = strcmp(pcVar6,"auto");
            if (iVar1 == 0) {
              iVar1 = *(int *)(param_1 + 0xb4);
              local_2dc = -2;
            }
            else {
              iVar1 = strcmp(pcVar6,"auto-digestmax");
              if (iVar1 != 0) {
                lVar4 = strtol(pcVar6,(char **)0x0,10);
                local_2dc = (int)lVar4;
                goto LAB_00101e92;
              }
              iVar1 = *(int *)(param_1 + 0xb4);
              local_2dc = -4;
            }
            if (iVar1 != -1) goto LAB_00101d6d;
          }
        }
LAB_00101d80:
        lVar4 = OSSL_PARAM_locate_const(param_2,"mgf1-digest");
        if (lVar4 != 0) {
          lVar5 = OSSL_PARAM_locate_const(param_2,"mgf1-properties");
          local_2c8 = local_278;
          iVar1 = OSSL_PARAM_get_utf8_string(lVar4,&local_2c8,0x32);
          if (iVar1 == 0) goto LAB_00101c40;
          if (lVar5 != 0) {
            local_2c0 = local_138;
            iVar1 = OSSL_PARAM_get_utf8_string(lVar5,&local_2c0,0x100);
            if (iVar1 == 0) goto LAB_00101c40;
          }
          if (local_2e0 != 6) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x6df,"rsa_set_ctx_params"
                         );
            ERR_set_error(0x39,0xa7,0);
            bVar7 = false;
            goto LAB_00101c48;
          }
        }
        *(int *)(param_1 + 0x68) = local_2e0;
        *(int *)(param_1 + 0xb0) = local_2dc;
        if (((*(long *)(param_1 + 0x20) == 0) && (local_2d8 == (undefined *)0x0)) &&
           (local_2e0 == 6)) {
          local_2d8 = &_LC30;
          if (local_2c8 != (undefined1 *)0x0) {
LAB_00101e2c:
            iVar1 = rsa_setup_mgf1_md(param_1,local_2c8,local_2c0);
            if (iVar1 == 0) goto LAB_00101c40;
            goto LAB_00101e41;
          }
        }
        else {
          if (local_2c8 != (undefined1 *)0x0) goto LAB_00101e2c;
LAB_00101e41:
          if (local_2d8 == (undefined *)0x0) {
            iVar1 = rsa_check_padding(param_1,0,0,*(undefined4 *)(param_1 + 0x30));
            bVar7 = iVar1 != 0;
            goto LAB_00101c48;
          }
        }
        iVar1 = rsa_setup_md_isra_0(param_1,local_2d8,local_2d0);
        bVar7 = iVar1 != 0;
        goto LAB_00101c48;
      }
    }
    else if (*(int *)(lVar4 + 8) == 1) {
      iVar1 = OSSL_PARAM_get_int(lVar4,&local_2e0);
      if (iVar1 != 0) {
LAB_00101c82:
        switch(local_2e0) {
        default:
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x678,"rsa_set_ctx_params");
          ERR_set_error(0x39,0xa5,0);
          bVar7 = false;
          goto LAB_00101c48;
        case 1:
switchD_00101c99_caseD_1:
          pcVar6 = "PKCS#1 padding not allowed with RSA-PSS";
          break;
        case 3:
switchD_00101c99_caseD_3:
          pcVar6 = "No padding not allowed with RSA-PSS";
          break;
        case 4:
          pcVar6 = "OAEP padding not allowed for signing / verifying";
          goto LAB_00101c08;
        case 5:
switchD_00101c99_caseD_5:
          pcVar6 = "X.931 padding not allowed with RSA-PSS";
          break;
        case 6:
          goto switchD_00101c99_caseD_6;
        }
        iVar1 = RSA_test_flags(*(undefined8 *)(param_1 + 0x10),0xf000);
        if (iVar1 != 0) goto LAB_00101c08;
        goto LAB_00101cc5;
      }
    }
    else if ((*(int *)(lVar4 + 8) == 4) &&
            (pcVar6 = *(char **)(lVar4 + 0x10), pcVar6 != (char *)0x0)) {
      iVar1 = strcmp(pcVar6,"pkcs1");
      if (iVar1 == 0) {
        local_2e0 = 1;
        goto switchD_00101c99_caseD_1;
      }
      iVar1 = strcmp(pcVar6,"none");
      if (iVar1 == 0) {
        local_2e0 = 3;
        goto switchD_00101c99_caseD_3;
      }
      iVar1 = strcmp(pcVar6,"x931");
      if (iVar1 == 0) {
        local_2e0 = 5;
        goto switchD_00101c99_caseD_5;
      }
      iVar1 = strcmp(pcVar6,"pss");
      if (iVar1 != 0) goto LAB_00101c82;
      local_2e0 = 6;
switchD_00101c99_caseD_6:
      if ((*(uint *)(param_1 + 0x18) & 0xc030) != 0) goto LAB_00101cc5;
      pcVar6 = "PSS padding only allowed for sign and verify operations";
LAB_00101c08:
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x67b,"rsa_set_ctx_params");
      ERR_set_error(0x39,0xa5,pcVar6);
    }
  }
  else {
    lVar5 = OSSL_PARAM_locate_const(param_2,"properties");
    local_2d8 = local_2b8;
    iVar1 = OSSL_PARAM_get_utf8_string(lVar4,&local_2d8,0x32);
    if (iVar1 != 0) {
      if (lVar5 != 0) {
        local_2d0 = local_238;
        iVar1 = OSSL_PARAM_get_utf8_string(lVar5,&local_2d0,0x100);
        if (iVar1 == 0) goto LAB_00101c40;
      }
      goto LAB_00101b47;
    }
  }
LAB_00101c40:
  bVar7 = false;
LAB_00101c48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rsa_freectx_part_0(long param_1)

{
  int iVar1;
  void *ptr;
  
  EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0x28));
  EVP_MD_free(*(undefined8 *)(param_1 + 0x20));
  EVP_MD_free(*(undefined8 *)(param_1 + 0x70));
  CRYPTO_free(*(void **)(param_1 + 0xb8));
  CRYPTO_free(*(void **)(param_1 + 8));
  ptr = *(void **)(param_1 + 200);
  if (ptr != (void *)0x0) {
    iVar1 = RSA_size(*(RSA **)(param_1 + 0x10));
    OPENSSL_cleanse(*(void **)(param_1 + 200),(long)iVar1);
    ptr = *(void **)(param_1 + 200);
  }
  CRYPTO_free(ptr);
  *(undefined8 *)(param_1 + 200) = 0;
  RSA_free(*(RSA **)(param_1 + 0x10));
  CRYPTO_clear_free(param_1,0xd0,"providers/implementations/signature/rsa_sig.c",0x533);
  return;
}



void rsa_freectx(long param_1)

{
  if (param_1 != 0) {
    rsa_freectx_part_0();
    return;
  }
  return;
}



undefined8 * rsa_dupctx(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  EVP_MD_CTX *out;
  char *pcVar18;
  RSA *r;
  long lVar19;
  
  iVar16 = ossl_prov_is_running();
  if (iVar16 == 0) {
    return (undefined8 *)0x0;
  }
  puVar17 = (undefined8 *)CRYPTO_zalloc(0xd0,"providers/implementations/signature/rsa_sig.c",0x53e);
  if (puVar17 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar8 = param_1[8];
  uVar9 = param_1[9];
  *(undefined1 (*) [16])(puVar17 + 4) = (undefined1  [16])0x0;
  uVar10 = param_1[10];
  uVar11 = param_1[0xb];
  *puVar17 = uVar2;
  puVar17[1] = uVar3;
  uVar2 = param_1[0xc];
  uVar3 = param_1[0xd];
  puVar17[2] = uVar4;
  puVar17[3] = uVar5;
  uVar4 = param_1[0xe];
  uVar5 = param_1[0xf];
  r = (RSA *)param_1[2];
  uVar12 = param_1[0x10];
  uVar13 = param_1[0x11];
  uVar14 = param_1[0x12];
  uVar15 = param_1[0x13];
  puVar17[6] = uVar6;
  puVar17[7] = uVar7;
  puVar17[8] = uVar8;
  puVar17[9] = uVar9;
  uVar6 = param_1[0x14];
  uVar7 = param_1[0x15];
  uVar8 = param_1[0x16];
  uVar9 = param_1[0x17];
  puVar17[10] = uVar10;
  puVar17[0xb] = uVar11;
  uVar10 = param_1[0x18];
  uVar11 = param_1[0x19];
  puVar17[0xe] = uVar4;
  puVar17[0xf] = uVar5;
  puVar17[0x18] = uVar10;
  puVar17[0x19] = uVar11;
  puVar17[0xe] = 0;
  puVar17[0x19] = 0;
  puVar17[0xc] = uVar2;
  puVar17[0xd] = uVar3;
  puVar17[0x10] = uVar12;
  puVar17[0x11] = uVar13;
  puVar17[0x12] = uVar14;
  puVar17[0x13] = uVar15;
  puVar17[0x14] = uVar6;
  puVar17[0x15] = uVar7;
  puVar17[0x16] = uVar8;
  puVar17[0x17] = uVar9;
  *(undefined1 (*) [16])(puVar17 + 1) = (undefined1  [16])0x0;
  if (r != (RSA *)0x0) {
    iVar16 = RSA_up_ref(r);
    if (iVar16 == 0) goto LAB_00102418;
    r = (RSA *)param_1[2];
  }
  puVar17[2] = r;
  lVar19 = param_1[4];
  if (lVar19 != 0) {
    iVar16 = EVP_MD_up_ref();
    if (iVar16 == 0) goto LAB_00102418;
    lVar19 = param_1[4];
  }
  puVar17[4] = lVar19;
  lVar19 = param_1[0xe];
  if (lVar19 != 0) {
    iVar16 = EVP_MD_up_ref();
    if (iVar16 == 0) goto LAB_00102418;
    lVar19 = param_1[0xe];
  }
  lVar1 = param_1[5];
  puVar17[0xe] = lVar19;
  if (lVar1 != 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    puVar17[5] = out;
    if ((out == (EVP_MD_CTX *)0x0) ||
       (iVar16 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[5]), iVar16 == 0)) goto LAB_00102418;
  }
  if ((char *)param_1[1] == (char *)0x0) {
    return puVar17;
  }
  pcVar18 = CRYPTO_strdup((char *)param_1[1],"providers/implementations/signature/rsa_sig.c",0x55e);
  puVar17[1] = pcVar18;
  if (pcVar18 != (char *)0x0) {
    return puVar17;
  }
LAB_00102418:
  rsa_freectx_part_0(puVar17);
  return (undefined8 *)0x0;
}



undefined8 rsa_digest_sign_init(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_3,rsa_set_ctx_params,param_4,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_2 != (char *)0x0) &&
     (((*param_2 == '\0' || (iVar1 = OPENSSL_strcasecmp(param_1 + 0x34,param_2), iVar1 != 0)) &&
      (iVar1 = rsa_setup_md_isra_0(param_1,param_2,*(undefined8 *)(param_1 + 8)), iVar1 == 0)))) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001024c5;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001024c5:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



int rsa_digest_verify_update(long param_1,void *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  
  if (((param_1 != 0) && (bVar1 = *(byte *)(param_1 + 0x1c), (bVar1 & 1) == 0)) &&
     (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0)) {
    if ((bVar1 & 8) != 0) {
      *(byte *)(param_1 + 0x1c) = bVar1 & 0xdf;
      iVar2 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x28),param_2,param_3);
      return iVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x348,
                  "rsa_signverify_message_update");
    ERR_set_error(0x39,0xf0,0);
    return 0;
  }
  return 0;
}



int rsa_digest_sign_update(long param_1,void *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  
  if (((param_1 != 0) && (bVar1 = *(byte *)(param_1 + 0x1c), (bVar1 & 1) == 0)) &&
     (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0)) {
    if ((bVar1 & 8) != 0) {
      *(byte *)(param_1 + 0x1c) = bVar1 & 0xdf;
      iVar2 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x28),param_2,param_3);
      return iVar2;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x348,
                  "rsa_signverify_message_update");
    ERR_set_error(0x39,0xf0,0);
    return 0;
  }
  return 0;
}



undefined8
rsa_verify_recover(long param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,
                  int param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uchar *puVar7;
  RSA *rsa;
  ulong __n;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) goto LAB_00102745;
  if (param_2 == (uchar *)0x0) {
    iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
    *param_3 = (long)iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x68);
    if (*(long *)(param_1 + 0x20) == 0) {
      iVar2 = RSA_public_decrypt(param_6,param_5,param_2,*(RSA **)(param_1 + 0x10),iVar2);
      if (iVar2 < 0) {
        ERR_new();
        uVar6 = 0x3ee;
LAB_00102871:
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",uVar6,"rsa_verify_recover");
        ERR_set_error(0x39,0x80004,0);
        uVar6 = 0;
        goto LAB_00102775;
      }
      __n = (ulong)iVar2;
    }
    else if (iVar2 == 1) {
      iVar2 = ossl_rsa_verify(*(undefined4 *)(param_1 + 0x30),0,0,param_2,local_48,param_5);
      if (iVar2 < 1) {
        ERR_new();
        uVar6 = 0x3de;
        goto LAB_00102871;
      }
      __n = (ulong)local_48[0];
    }
    else {
      if (iVar2 != 5) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x3e6,"rsa_verify_recover");
        ERR_set_error(0x39,0xa8,"Only X.931 or PKCS#1 v1.5 padding allowed");
LAB_00102745:
        uVar6 = 0;
        goto LAB_00102775;
      }
      puVar7 = *(uchar **)(param_1 + 200);
      rsa = *(RSA **)(param_1 + 0x10);
      if (puVar7 == (uchar *)0x0) {
        iVar2 = RSA_size(rsa);
        puVar7 = (uchar *)CRYPTO_malloc(iVar2,"providers/implementations/signature/rsa_sig.c",0x266)
        ;
        *(uchar **)(param_1 + 200) = puVar7;
        if (puVar7 == (uchar *)0x0) goto LAB_00102745;
        rsa = *(RSA **)(param_1 + 0x10);
      }
      iVar2 = RSA_public_decrypt(param_6,param_5,puVar7,rsa,5);
      if (iVar2 < 1) {
        ERR_new();
        uVar6 = 0x3bc;
        goto LAB_00102871;
      }
      iVar2 = iVar2 + -1;
      __n = (ulong)iVar2;
      bVar1 = *(byte *)(*(long *)(param_1 + 200) + __n);
      uVar3 = RSA_X931_hash_id(*(int *)(param_1 + 0x30));
      if (bVar1 != uVar3) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x3c1,"rsa_verify_recover");
        ERR_set_error(0x39,0xad,0);
        uVar6 = 0;
        goto LAB_00102775;
      }
      iVar4 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
      if (iVar4 != iVar2) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x3c5,"rsa_verify_recover");
        uVar5 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
        ERR_set_error(0x39,0xa6,"Should be %d, but got %d",uVar5,iVar2);
        uVar6 = 0;
        goto LAB_00102775;
      }
      puVar7 = *(uchar **)(param_1 + 200);
      *param_3 = __n;
      if (puVar7 != param_2) {
        if (param_4 < __n) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x3ce,"rsa_verify_recover");
          ERR_set_error(0x39,0x6a,"buffer size is %d, should be %d",param_4,iVar4);
          uVar6 = 0;
          goto LAB_00102775;
        }
        memcpy(param_2,puVar7,__n);
      }
    }
    *param_3 = __n;
  }
  uVar6 = 1;
LAB_00102775:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool rsa_verify_directly(long param_1,uchar *param_2,undefined8 param_3,uchar *param_4,
                        size_t param_5)

{
  int iVar1;
  uchar *puVar2;
  void *pvVar3;
  RSA *pRVar4;
  size_t __n;
  undefined8 uVar5;
  uint siglen;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    siglen = (uint)param_3;
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar2 = *(uchar **)(param_1 + 200);
      pRVar4 = *(RSA **)(param_1 + 0x10);
      if (puVar2 == (uchar *)0x0) {
        iVar1 = RSA_size(pRVar4);
        puVar2 = (uchar *)CRYPTO_malloc(iVar1,"providers/implementations/signature/rsa_sig.c",0x266)
        ;
        *(uchar **)(param_1 + 200) = puVar2;
        if (puVar2 == (uchar *)0x0) goto LAB_00102a55;
        pRVar4 = *(RSA **)(param_1 + 0x10);
      }
      iVar1 = RSA_public_decrypt(siglen,param_2,puVar2,pRVar4,*(int *)(param_1 + 0x68));
      __n = (size_t)iVar1;
      if (iVar1 < 1) {
        ERR_new();
        uVar5 = 0x452;
LAB_00102bd0:
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",uVar5,"rsa_verify_directly");
        ERR_set_error(0x39,0x80004,0);
      }
      else {
LAB_00102a8b:
        if (__n == param_5) {
          iVar1 = memcmp(param_4,*(void **)(param_1 + 200),__n);
          bVar6 = iVar1 == 0;
          goto LAB_001029f4;
        }
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 5) {
        pvVar3 = *(void **)(param_1 + 200);
        if (pvVar3 == (void *)0x0) {
          iVar1 = RSA_size(*(RSA **)(param_1 + 0x10));
          pvVar3 = CRYPTO_malloc(iVar1,"providers/implementations/signature/rsa_sig.c",0x266);
          *(void **)(param_1 + 200) = pvVar3;
          if (pvVar3 == (void *)0x0) goto LAB_00102a55;
        }
        iVar1 = rsa_verify_recover(param_1,pvVar3,&local_48,0,param_2,param_3);
        if (0 < iVar1) {
          __n = CONCAT44(uStack_44,local_48);
          goto LAB_00102a8b;
        }
      }
      else if (iVar1 == 6) {
        iVar1 = EVP_MD_get_size();
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (param_5 == (long)iVar1) {
          puVar2 = *(uchar **)(param_1 + 200);
          pRVar4 = *(RSA **)(param_1 + 0x10);
          if (puVar2 == (uchar *)0x0) {
            iVar1 = RSA_size(pRVar4);
            puVar2 = (uchar *)CRYPTO_malloc(iVar1,"providers/implementations/signature/rsa_sig.c",
                                            0x266);
            *(uchar **)(param_1 + 200) = puVar2;
            if (puVar2 == (uchar *)0x0) goto LAB_00102a55;
            pRVar4 = *(RSA **)(param_1 + 0x10);
          }
          iVar1 = RSA_public_decrypt(siglen,param_2,puVar2,pRVar4,3);
          if (iVar1 < 1) {
            ERR_new();
            uVar5 = 0x433;
          }
          else {
            local_48 = *(undefined4 *)(param_1 + 0xb0);
            bVar6 = true;
            iVar1 = ossl_rsa_verify_PKCS1_PSS_mgf1
                              (*(undefined8 *)(param_1 + 0x10),param_4,
                               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x70),
                               *(undefined8 *)(param_1 + 200),&local_48);
            if (0 < iVar1) goto LAB_001029f4;
            ERR_new();
            uVar5 = 0x43c;
          }
          goto LAB_00102bd0;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x428,"rsa_verify_directly");
        ERR_set_error(0x39,0xa6,"Should be %d, but got %d",(long)iVar1,param_5);
      }
      else {
        if (iVar1 == 1) {
          iVar1 = RSA_verify(*(int *)(param_1 + 0x30),param_4,(uint)param_5,param_2,siglen,
                             *(RSA **)(param_1 + 0x10));
          bVar6 = true;
          if (iVar1 != 0) goto LAB_001029f4;
          ERR_new();
          uVar5 = 0x411;
          goto LAB_00102bd0;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x446,"rsa_verify_directly");
        ERR_set_error(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
      }
    }
  }
LAB_00102a55:
  bVar6 = false;
LAB_001029f4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



undefined8 rsa_verify_message_final(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_6c;
  uchar local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0)) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x476,"rsa_verify_message_final"
                   );
      ERR_set_error(0x39,0xed,0);
    }
    else {
      iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x28),local_68,&local_6c);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 199;
        uVar2 = rsa_verify_directly(param_1,*(undefined8 *)(param_1 + 0xb8),
                                    *(undefined8 *)(param_1 + 0xc0),local_68,local_6c);
        goto LAB_00102d42;
      }
    }
  }
  uVar2 = 0;
LAB_00102d42:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



ulong rsa_digest_verify_final(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_00102df4;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) goto LAB_00102df4;
  OSSL_PARAM_construct_octet_string(&local_a8,"signature",param_2,param_3);
  local_58 = local_88;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  local_68 = local_98;
  uStack_60 = uStack_90;
  OSSL_PARAM_construct_end(&local_a8);
  local_30 = local_88;
  local_50 = local_a8;
  uStack_48 = uStack_a0;
  local_40 = local_98;
  uStack_38 = uStack_90;
  if (((local_78 == 0) || (*(int *)(param_1 + 0x18) != 0x8000)) ||
     (lVar2 = OSSL_PARAM_locate_const(&local_78,"signature"), lVar2 == 0)) {
LAB_00102e92:
    iVar1 = rsa_verify_message_final(param_1);
    uVar3 = (ulong)(iVar1 != 0);
  }
  else {
    CRYPTO_free(*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    uVar3 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0xb8,0,param_1 + 0xc0);
    if ((int)uVar3 != 0) goto LAB_00102e92;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
LAB_00102df4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 rsa_sm3_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC45,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00102fca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00102fca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sm3_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC45,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001030ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001030ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sm3_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC45,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001031ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001031ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sm3_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC45,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001032ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001032ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sm3_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC45,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001033ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001033ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_ripemd160_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"RIPEMD160",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001034ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001034ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_ripemd160_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"RIPEMD160",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001035ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001035ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_ripemd160_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"RIPEMD160",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001036ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001036ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_ripemd160_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"RIPEMD160",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001037ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001037ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_384_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001038ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001038ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_384_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001039ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001039ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_384_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103aca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103aca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_512_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103bca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103bca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_512_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103cca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103cca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_512_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103dca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103dca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_512_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103eca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103eca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_512_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00103fca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00103fca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_256_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001040ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001040ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_256_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001041ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001041ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_256_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001042ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001042ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_256_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001043ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001043ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_224_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001044ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001044ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_224_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001045ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001045ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_224_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001046ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001046ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_224_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001047ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001047ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_224_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001048ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001048ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_256_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001049ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001049ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_256_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104aca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104aca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_256_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104bca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104bca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_256_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104cca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104cca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_256_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104dca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104dca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_384_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104eca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104eca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha3_384_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA3-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00104fca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00104fca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_ripemd160_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"RIPEMD160",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001050ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001050ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha1_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC30,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001051ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001051ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha1_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC30,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001052ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001052ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha1_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC30,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001053ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001053ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha1_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC30,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001054ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001054ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha1_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,&_LC30,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001055ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001055ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha224_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001056ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001056ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha224_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001057ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001057ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha224_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001058ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001058ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha224_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001059ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001059ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha224_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105aca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105aca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha256_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105bca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105bca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha256_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105cca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105cca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha256_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105dca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105dca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha256_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105eca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105eca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha256_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-256",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00105fca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00105fca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha384_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001060ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001060ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha384_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001061ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001061ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha384_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001062ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001062ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha384_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001063ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001063ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha384_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-384",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001064ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001064ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001065ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001065ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_sign_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x4000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001066ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001066ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_verify_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001067ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001067ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_verify_recover_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x40);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001068ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001068ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_verify_message_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x8000);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_001069ca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_001069ca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



undefined8 rsa_sha512_224_sign_init(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = rsa_signverify_init_isra_0(param_1,param_2,rsa_sigalg_set_ctx_params,param_3,0x10);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) == 6) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x790,"rsa_sigalg_signverify_init"
                 );
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  iVar1 = rsa_setup_md_isra_0(param_1,"SHA2-512/224",0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = 1;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x28) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00106aca;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x20),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
LAB_00106aca:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return 0;
}



ulong rsa_verify(long param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (param_1 == 0)) {
LAB_00106c00:
    uVar2 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 0x20) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x496,"rsa_verify");
      ERR_set_error(0x39,0xef,0);
      goto LAB_00106c00;
    }
    if (*(int *)(param_1 + 0x18) != 0x8000) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = rsa_verify_directly(param_1,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      goto LAB_00106d8c;
    }
    OSSL_PARAM_construct_octet_string(&local_c8,"signature",param_2,param_3);
    local_78 = local_a8;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    OSSL_PARAM_construct_end(&local_c8);
    local_50 = local_a8;
    local_70 = local_c8;
    uStack_68 = uStack_c0;
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    if (((local_98 != 0) && (*(int *)(param_1 + 0x18) == 0x8000)) &&
       (lVar3 = OSSL_PARAM_locate_const(&local_98,"signature"), lVar3 != 0)) {
      CRYPTO_free(*(void **)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 0xb8,0,param_1 + 0xc0);
      if (iVar1 == 0) goto LAB_00106c00;
    }
    if (*(EVP_MD_CTX **)(param_1 + 0x28) == (EVP_MD_CTX *)0x0) goto LAB_00106c00;
    if ((*(byte *)(param_1 + 0x1c) & 8) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x348,
                    "rsa_signverify_message_update");
      ERR_set_error(0x39,0xf0,0);
      goto LAB_00106c00;
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xdf;
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x28),param_4,param_5);
    if (iVar1 == 0) goto LAB_00106c00;
    iVar1 = rsa_verify_message_final(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00106d8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
rsa_sign_directly(long param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,
                 size_t param_6)

{
  uchar *from;
  long lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  RSA *pRVar8;
  size_t sVar9;
  uint m_length;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
  uVar6 = (ulong)iVar2;
  if ((*(long *)(param_1 + 0x20) == 0) || (iVar2 = EVP_MD_get_size(), iVar2 < 1)) {
    sVar9 = 0;
    iVar2 = ossl_prov_is_running();
  }
  else {
    sVar9 = (size_t)iVar2;
    iVar2 = ossl_prov_is_running();
  }
  if (iVar2 == 0) {
LAB_00106dfd:
    uVar7 = 0;
    goto LAB_00106ee7;
  }
  if (param_2 == (uchar *)0x0) {
LAB_00106edb:
    *param_3 = uVar6;
    uVar7 = 1;
  }
  else {
    if (param_4 < uVar6) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x2b5,"rsa_sign_directly");
      ERR_set_error(0x39,0xb3,"is %zu, should be at least %zu",param_4,uVar6);
      uVar7 = 0;
      goto LAB_00106ee7;
    }
    m_length = (uint)param_6;
    if (sVar9 == 0) {
      iVar2 = RSA_private_encrypt(m_length,param_5,param_2,*(RSA **)(param_1 + 0x10),
                                  *(int *)(param_1 + 0x68));
      uVar6 = (ulong)iVar2;
LAB_00106ed3:
      if (0 < (int)uVar6) goto LAB_00106edb;
      ERR_new();
      uVar7 = 0x336;
    }
    else {
      if (param_6 != sVar9) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/rsa_sig.c",700,"rsa_sign_directly");
        ERR_set_error(0x39,0xa6,0);
        uVar7 = 0;
        goto LAB_00106ee7;
      }
      iVar2 = EVP_MD_is_a(*(undefined8 *)(param_1 + 0x20),&_LC56);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x68);
        if (iVar2 == 5) {
          iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
          if ((ulong)(long)iVar2 < param_6 + 1) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x2d7,"rsa_sign_directly")
            ;
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            ERR_set_error(0x39,0xab,"RSA key size = %d, expected minimum = %d",iVar2,param_6 + 1);
            uVar7 = 0;
            goto LAB_00106ee7;
          }
          pvVar5 = *(void **)(param_1 + 200);
          if (pvVar5 == (void *)0x0) {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            pvVar5 = CRYPTO_malloc(iVar2,"providers/implementations/signature/rsa_sig.c",0x266);
            *(void **)(param_1 + 200) = pvVar5;
            if (pvVar5 == (void *)0x0) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x2dd,
                            "rsa_sign_directly");
              ERR_set_error(0x39,0x80039,0);
              uVar7 = 0;
              goto LAB_00106ee7;
            }
          }
          memcpy(pvVar5,param_5,param_6);
          iVar2 = RSA_X931_hash_id(*(int *)(param_1 + 0x30));
          *(char *)(*(long *)(param_1 + 200) + param_6) = (char)iVar2;
          iVar2 = RSA_private_encrypt(m_length + 1,*(uchar **)(param_1 + 200),param_2,
                                      *(RSA **)(param_1 + 0x10),5);
          lVar1 = *(long *)(param_1 + 200);
joined_r0x001071bc:
          uVar6 = (ulong)iVar2;
          if (lVar1 != 0) {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            OPENSSL_cleanse(*(void **)(param_1 + 200),(long)iVar2);
          }
          goto LAB_00106ed3;
        }
        if (iVar2 == 6) {
          iVar2 = *(int *)(param_1 + 0xb4);
          if (iVar2 != -1) {
            iVar3 = *(int *)(param_1 + 0xb0);
            if (iVar3 == -1) {
              iVar3 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
              if (iVar3 < iVar2) {
                ERR_new();
                ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x2fd,
                              "rsa_sign_directly");
                uVar4 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x20));
                ERR_set_error(0x39,0xac,
                              "minimum salt length set to %d, but the digest only gives %d",
                              *(undefined4 *)(param_1 + 0xb4),uVar4);
                uVar7 = 0;
                goto LAB_00106ee7;
              }
              iVar3 = *(int *)(param_1 + 0xb0);
            }
            if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0xb4))) {
              ERR_new();
              ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x309,
                            "rsa_sign_directly");
              ERR_set_error(0x39,0xac,
                            "minimum salt length set to %d, but theactual salt length is only set to %d"
                            ,*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb0));
              uVar7 = 0;
              goto LAB_00106ee7;
            }
          }
          pvVar5 = *(void **)(param_1 + 200);
          pRVar8 = *(RSA **)(param_1 + 0x10);
          if (pvVar5 == (void *)0x0) {
            iVar2 = RSA_size(pRVar8);
            pvVar5 = CRYPTO_malloc(iVar2,"providers/implementations/signature/rsa_sig.c",0x266);
            *(void **)(param_1 + 200) = pvVar5;
            if (pvVar5 == (void *)0x0) goto LAB_00106dfd;
            pRVar8 = *(RSA **)(param_1 + 0x10);
          }
          local_44 = *(uint *)(param_1 + 0xb0);
          iVar2 = ossl_rsa_padding_add_PKCS1_PSS_mgf1
                            (pRVar8,pvVar5,param_5,*(undefined8 *)(param_1 + 0x20),
                             *(undefined8 *)(param_1 + 0x70),&local_44);
          if (iVar2 != 0) {
            pRVar8 = *(RSA **)(param_1 + 0x10);
            from = *(uchar **)(param_1 + 200);
            iVar2 = RSA_size(pRVar8);
            iVar2 = RSA_private_encrypt(iVar2,from,param_2,pRVar8,3);
            lVar1 = *(long *)(param_1 + 200);
            goto joined_r0x001071bc;
          }
          ERR_new();
          uVar7 = 0x31b;
        }
        else {
          if (iVar2 != 1) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x329,"rsa_sign_directly")
            ;
            ERR_set_error(0x39,0xa8,"Only X.931, PKCS#1 v1.5 or PSS padding allowed");
            uVar7 = 0;
            goto LAB_00106ee7;
          }
          iVar2 = RSA_sign(*(int *)(param_1 + 0x30),param_5,m_length,param_2,&local_44,
                           *(RSA **)(param_1 + 0x10));
          uVar6 = (ulong)(int)local_44;
          if (0 < iVar2) goto LAB_00106ed3;
          ERR_new();
          uVar7 = 0x2ed;
        }
      }
      else {
        if (*(int *)(param_1 + 0x68) != 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x2c5,"rsa_sign_directly");
          ERR_set_error(0x39,0xa8,"only PKCS#1 padding supported with MDC2");
          uVar7 = 0;
          goto LAB_00106ee7;
        }
        iVar2 = RSA_sign_ASN1_OCTET_STRING
                          (0,param_5,m_length,param_2,&local_44,*(RSA **)(param_1 + 0x10));
        uVar6 = (ulong)(int)local_44;
        if (0 < iVar2) goto LAB_00106ed3;
        ERR_new();
        uVar7 = 0x2cd;
      }
    }
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",uVar7,"rsa_sign_directly");
    ERR_set_error(0x39,0x80004,0);
    uVar7 = 0;
  }
LAB_00106ee7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 rsa_sign_message_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0)) {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) != 0) {
      if (param_2 != 0) {
        iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x28),local_78,&local_7c);
        if (iVar1 == 0) goto LAB_00107470;
        *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 199;
      }
      uVar2 = rsa_sign_directly(param_1,param_2,param_3,param_4,local_78,local_7c);
      goto LAB_0010741a;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x35c,"rsa_sign_message_final");
    ERR_set_error(0x39,0xed,0);
  }
LAB_00107470:
  uVar2 = 0;
LAB_0010741a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool rsa_digest_sign_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  if (param_1 == 0) {
    bVar2 = false;
    goto LAB_001074b2;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) goto LAB_001074b2;
  local_7c = 0;
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (*(EVP_MD_CTX **)(param_1 + 0x28) == (EVP_MD_CTX *)0x0)) {
LAB_00107580:
    bVar2 = false;
  }
  else {
    if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x35c,"rsa_sign_message_final");
      ERR_set_error(0x39,0xed,0);
      goto LAB_00107580;
    }
    if (param_2 != 0) {
      iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x28),local_78,&local_7c);
      if (iVar1 == 0) goto LAB_00107580;
      *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 199;
    }
    iVar1 = rsa_sign_directly(param_1,param_2,param_3,param_4,local_78,local_7c);
    bVar2 = iVar1 != 0;
  }
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
LAB_001074b2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong rsa_sign(long param_1,long param_2,long *param_3,undefined8 param_4,void *param_5,
              size_t param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (param_1 != 0)) {
    bVar1 = *(byte *)(param_1 + 0x1c);
    if ((bVar1 & 0x20) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x380,"rsa_sign");
      ERR_set_error(0x39,0xef,0);
    }
    else {
      if (*(int *)(param_1 + 0x18) != 0x4000) {
        uVar4 = rsa_sign_directly(param_1,param_2,param_3,param_4,param_5,param_6);
        return uVar4;
      }
      if (param_2 == 0) {
        iVar2 = ossl_prov_is_running();
        if ((iVar2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
          if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x35c,
                          "rsa_sign_message_final");
            ERR_set_error(0x39,0xed,0);
          }
          else {
            iVar2 = RSA_size(*(RSA **)(param_1 + 0x10));
            if (*(long *)(param_1 + 0x20) != 0) {
              EVP_MD_get_size();
            }
            iVar3 = ossl_prov_is_running();
            if (iVar3 != 0) {
              *param_3 = (long)iVar2;
              return 1;
            }
          }
        }
      }
      else if (*(EVP_MD_CTX **)(param_1 + 0x28) != (EVP_MD_CTX *)0x0) {
        if ((bVar1 & 8) == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/rsa_sig.c",0x348,
                        "rsa_signverify_message_update");
          ERR_set_error(0x39,0xf0,0);
        }
        else {
          *(byte *)(param_1 + 0x1c) = bVar1 & 0xdf;
          iVar2 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x28),param_5,param_6);
          if (iVar2 != 0) {
            iVar2 = rsa_sign_message_final(param_1,param_2,param_3,param_4);
            return (ulong)(iVar2 != 0);
          }
        }
      }
    }
  }
  return 0;
}



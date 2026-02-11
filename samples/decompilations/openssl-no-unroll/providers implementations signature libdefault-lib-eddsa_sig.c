
undefined1 * ed25519_sigalg_query_key_types(void)

{
  return keytypes_7;
}



undefined1 * ed448_sigalg_query_key_types(void)

{
  return keytypes_2;
}



undefined1 * eddsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * eddsa_settable_ctx_params(void)

{
  return settable_ctx_params;
}



undefined1 * eddsa_settable_variant_ctx_params(void)

{
  return settable_variant_ctx_params;
}



undefined8 eddsa_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined2 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_001000e7;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"instance");
    if (lVar2 != 0) {
      local_28 = 0;
      local_60 = local_58;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      local_38 = (undefined1  [16])0x0;
      if ((*(byte *)(param_1 + 0x11c) & 1) == 0) {
        iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_60,0x32);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_strcasecmp(local_60,"Ed25519");
          if (iVar1 == 0) {
            if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
              *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
              *(undefined4 *)(param_1 + 0x118) = 1;
            }
          }
          else {
            iVar1 = OPENSSL_strcasecmp(local_60,"Ed25519ctx");
            if (iVar1 == 0) {
              if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
                *(undefined4 *)(param_1 + 0x118) = 2;
                *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2 | 0x14;
              }
            }
            else {
              iVar1 = OPENSSL_strcasecmp(local_60,"Ed25519ph");
              if (iVar1 == 0) {
                if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
                  *(undefined4 *)(param_1 + 0x118) = 3;
                  *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2 | 0xc;
                }
              }
              else {
                iVar1 = OPENSSL_strcasecmp(local_60,"Ed448");
                if (iVar1 == 0) {
                  if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
                    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe6;
                    *(undefined4 *)(param_1 + 0x118) = 4;
                  }
                }
                else {
                  iVar1 = OPENSSL_strcasecmp(local_60,"Ed448ph");
                  if (iVar1 != 0) goto LAB_001000e7;
                  if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
                    *(undefined4 *)(param_1 + 0x118) = 5;
                    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe6 | 8;
                  }
                }
              }
            }
          }
          goto LAB_0010013c;
        }
      }
      else {
        ERR_new(lVar2);
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x348,"eddsa_set_ctx_params"
                     );
        ERR_set_error(0x39,0xf2,"the EdDSA instance is preset, you may not try to specify it",0);
      }
LAB_001000e7:
      uVar3 = 0;
      goto LAB_001000e9;
    }
LAB_0010013c:
    lVar2 = OSSL_PARAM_locate_const(param_2,"context-string");
    if (lVar2 != 0) {
      local_60 = (undefined1 *)(param_1 + 0x11d);
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_60,0xff,param_1 + 0x220);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x220) = 0;
        goto LAB_001000e7;
      }
    }
  }
  uVar3 = 1;
LAB_001000e9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool eddsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
    bVar4 = true;
    if (lVar2 != 0) {
      lVar3 = param_1 + 0x10;
      if (*(long *)(param_1 + 0x110) == 0) {
        lVar3 = 0;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,lVar3);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



ulong ed25519_digest_signverify_init(long param_1,char *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if (param_3 == 0) {
      if (*(long *)(param_1 + 8) != 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = eddsa_set_ctx_params(param_1,param_4);
          return uVar2;
        }
        goto LAB_00100659;
      }
      iVar1 = ossl_prov_is_running();
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0x72,0);
      }
      goto LAB_00100448;
    }
    iVar1 = ossl_prov_is_running();
    if (iVar1 == 0) goto LAB_00100448;
    iVar1 = ossl_ecx_key_up_ref(param_3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init");
      ERR_set_error(0x39,0xc0103,0);
      goto LAB_00100448;
    }
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
    *(long *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
    if (*(int *)(param_3 + 0x60) != 2) {
      if (*(int *)(param_3 + 0x60) == 3) {
        if ((iVar1 != 0) &&
           (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_3), iVar1 != 0))
        goto LAB_001005d8;
        goto LAB_001004c8;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,"eddsa_signverify_init")
      ;
      ERR_set_error(0x39,0xc0103,0);
      ossl_ecx_key_free(param_3);
      *(undefined8 *)(param_1 + 8) = 0;
      WPACKET_cleanup(local_68);
      goto LAB_00100448;
    }
    if ((iVar1 == 0) ||
       (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_3), iVar1 == 0)) {
LAB_001004c8:
      WPACKET_cleanup(local_68);
    }
    else {
LAB_001005d8:
      iVar1 = WPACKET_finish(local_68);
      if (iVar1 == 0) goto LAB_001004c8;
      WPACKET_get_total_written(local_68,param_1 + 0x110);
      __src = (void *)WPACKET_get_curr(local_68);
      WPACKET_cleanup(local_68);
      if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
        memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
      }
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x60) != 2) goto LAB_00100448;
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0;
    *(undefined4 *)(param_1 + 0x118) = 1;
    iVar1 = eddsa_set_ctx_params(param_1,param_4);
    uVar2 = (ulong)(iVar1 != 0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x2a7,
                  "ed25519_digest_signverify_init");
    ERR_set_error(0x39,0x7a,"Explicit digest not allowed with EdDSA operations");
LAB_00100448:
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00100659:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void eddsa_freectx(void *param_1)

{
  ossl_ecx_key_free(*(undefined8 *)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



undefined8
ed25519_verify(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if ((param_3 == 0x40) && (iVar3 != 0)) {
    bVar2 = *(byte *)((long)param_1 + 0x11c);
    puVar5 = param_4;
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 2) != 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x260,"ed25519_verify");
        ERR_set_error(0x39,0xf3,0);
        uVar4 = 0;
        goto LAB_00100747;
      }
    }
    else if ((bVar2 & 2) == 0) {
      puVar5 = local_88;
      iVar3 = EVP_Q_digest(*param_1,"SHA512",0,param_4,param_5,puVar5);
      if ((iVar3 == 0) || (local_90 != 0x40)) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x255,"ed25519_verify");
        ERR_set_error(0x39,0xf1,0);
        uVar4 = 0;
        goto LAB_00100747;
      }
      bVar2 = *(byte *)((long)param_1 + 0x11c);
      param_5 = 0x40;
    }
    else if (param_5 != 0x40) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x25b,"ed25519_verify");
      ERR_set_error(0x39,0xa6,0);
      uVar4 = 0;
      goto LAB_00100747;
    }
    uVar4 = ossl_ed25519_verify(puVar5,param_5,param_2,lVar1 + 0x11,bVar2 >> 2 & 1,bVar2 >> 3 & 1,
                                bVar2 >> 4 & 1,(long)param_1 + 0x11d,param_1[0x44],*param_1,
                                *(undefined8 *)(lVar1 + 8));
  }
  else {
    uVar4 = 0;
  }
LAB_00100747:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ed25519_sign(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,undefined1 *param_5,
            long param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
LAB_00100981:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      if (param_4 < 0x40) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",399,"ed25519_sign");
        ERR_set_error(0x39,0x6a,0);
        uVar4 = 0;
        goto LAB_00100994;
      }
      lVar5 = *(long *)(lVar1 + 0x50);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x193,"ed25519_sign");
        ERR_set_error(0x39,0xdd,0);
        uVar4 = 0;
        goto LAB_00100994;
      }
      bVar2 = *(byte *)((long)param_1 + 0x11c);
      local_a0 = param_5;
      if ((bVar2 & 8) == 0) {
        if ((bVar2 & 2) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1bb,"ed25519_sign");
          ERR_set_error(0x39,0xf3,0);
          uVar4 = 0;
          goto LAB_00100994;
        }
      }
      else if ((bVar2 & 2) == 0) {
        local_a0 = local_88;
        iVar3 = EVP_Q_digest(*param_1,"SHA512",0,param_5,param_6,local_a0);
        if ((iVar3 == 0) || (local_90 != 0x40)) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1b0,"ed25519_sign");
          ERR_set_error(0x39,0xf1,0);
          uVar4 = 0;
          goto LAB_00100994;
        }
        lVar5 = *(long *)(lVar1 + 0x50);
        bVar2 = *(byte *)((long)param_1 + 0x11c);
        param_6 = 0x40;
      }
      else if (param_6 != 0x40) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1b6,"ed25519_sign");
        ERR_set_error(0x39,0xa6,0);
        uVar4 = 0;
        goto LAB_00100994;
      }
      iVar3 = ossl_ed25519_sign(param_2,local_a0,param_6,lVar1 + 0x11,lVar5,bVar2 >> 2 & 1,
                                bVar2 >> 3 & 1,bVar2 >> 4 & 1,(long)param_1 + 0x11d,param_1[0x44],
                                *param_1,0);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1c4,"ed25519_sign");
        ERR_set_error(0x39,0xaf,0);
        goto LAB_00100981;
      }
    }
    *param_3 = 0x40;
    uVar4 = 1;
  }
LAB_00100994:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * eddsa_newctx(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x228,"providers/implementations/signature/eddsa_sig.c",0xab);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *puVar2 = uVar3;
    }
  }
  return puVar2;
}



undefined8
ed448_sign(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,undefined1 *param_5,
          size_t param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_98;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
LAB_00100c8e:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      if (param_4 < 0x72) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1fb,__func___0);
        ERR_set_error(0x39,0x6a,0);
        uVar4 = 0;
        goto LAB_00100ca5;
      }
      lVar5 = *(long *)(lVar1 + 0x50);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1ff,__func___0);
        ERR_set_error(0x39,0xdd,0);
        uVar4 = 0;
        goto LAB_00100ca5;
      }
      bVar2 = *(byte *)((long)param_1 + 0x11c);
      local_98 = param_5;
      if ((bVar2 & 8) == 0) {
        if ((bVar2 & 2) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x221,__func___0);
          ERR_set_error(0x39,0xf3,0);
          uVar4 = 0;
          goto LAB_00100ca5;
        }
      }
      else {
        if ((bVar2 & 2) == 0) {
          uVar4 = *param_1;
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          type = (EVP_MD *)EVP_MD_fetch(uVar4,"SHAKE256",0);
          if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
            iVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
            if (iVar3 != 0) {
              iVar3 = EVP_DigestUpdate(ctx,param_5,param_6);
              if (iVar3 != 0) {
                local_98 = local_88;
                iVar3 = EVP_DigestFinalXOF(ctx,local_98,0x40);
                if (iVar3 != 0) {
                  param_6 = 0x40;
                  EVP_MD_CTX_free(ctx);
                  EVP_MD_free(type);
                  lVar5 = *(long *)(lVar1 + 0x50);
                  bVar2 = *(byte *)((long)param_1 + 0x11c);
                  goto LAB_00100c23;
                }
              }
            }
          }
          EVP_MD_CTX_free(ctx);
          EVP_MD_free(type);
          uVar4 = 0;
          goto LAB_00100ca5;
        }
        if (param_6 != 0x40) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x21c,__func___0);
          ERR_set_error(0x39,0xa6,0);
          uVar4 = 0;
          goto LAB_00100ca5;
        }
      }
LAB_00100c23:
      iVar3 = ossl_ed448_sign(*param_1,param_2,local_98,param_6,lVar1 + 0x11,lVar5,
                              (long)param_1 + 0x11d,param_1[0x44],bVar2 >> 3 & 1,
                              *(undefined8 *)(lVar1 + 8));
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x22a,__func___0);
        ERR_set_error(0x39,0xaf,0);
        goto LAB_00100c8e;
      }
    }
    *param_3 = 0x72;
    uVar4 = 1;
  }
LAB_00100ca5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * eddsa_dupctx(undefined8 *param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x228,"providers/implementations/signature/eddsa_sig.c",0x2f5),
     ptr != (undefined8 *)0x0)) {
    puVar3 = param_1;
    puVar4 = ptr;
    for (lVar2 = 0x45; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    }
    lVar2 = param_1[1];
    ptr[1] = 0;
    if (lVar2 != 0) {
      iVar1 = ossl_ecx_key_up_ref();
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x2fd,"eddsa_dupctx");
        ERR_set_error(0x39,0xc0103,0);
        ossl_ecx_key_free(ptr[1]);
        CRYPTO_free(ptr);
        return (undefined8 *)0x0;
      }
      lVar2 = param_1[1];
    }
    ptr[1] = lVar2;
    return ptr;
  }
  return (undefined8 *)0x0;
}



undefined8
ed448_digest_verify(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                   size_t param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if ((iVar3 != 0) && (param_3 == 0x72)) {
    bVar2 = *(byte *)((long)param_1 + 0x11c);
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 2) == 0) {
LAB_00101030:
        uVar4 = ossl_ed448_verify(*param_1,param_4,param_5,param_2,lVar1 + 0x11,
                                  (long)param_1 + 0x11d,param_1[0x44],bVar2 >> 3 & 1,
                                  *(undefined8 *)(lVar1 + 8));
        goto LAB_00100fa6;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x294,"ed448_verify");
      ERR_set_error(0x39,0xf3,0);
    }
    else if ((bVar2 & 2) == 0) {
      uVar4 = *param_1;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      type = (EVP_MD *)EVP_MD_fetch(uVar4,"SHAKE256",0);
      if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
        iVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar3 != 0) {
          iVar3 = EVP_DigestUpdate(ctx,param_4,param_5);
          if (iVar3 != 0) {
            param_4 = local_88;
            iVar3 = EVP_DigestFinalXOF(ctx,param_4,0x40);
            if (iVar3 != 0) {
              param_5 = 0x40;
              EVP_MD_CTX_free(ctx);
              EVP_MD_free(type);
              bVar2 = *(byte *)((long)param_1 + 0x11c);
              goto LAB_00101030;
            }
          }
        }
      }
      EVP_MD_CTX_free(ctx);
      EVP_MD_free(type);
    }
    else {
      if (param_5 == 0x40) goto LAB_00101030;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x28f,"ed448_verify");
      ERR_set_error(0x39,0xa6,0);
    }
  }
  uVar4 = 0;
LAB_00100fa6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ed448_verify(undefined8 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,size_t param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  long in_FS_OFFSET;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if ((iVar3 == 0) || (param_3 != 0x72)) {
    uVar4 = 0;
    goto LAB_001011ff;
  }
  bVar2 = *(byte *)((long)param_1 + 0x11c);
  if ((bVar2 & 8) == 0) {
    if ((bVar2 & 2) != 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x294,"ed448_verify");
      ERR_set_error(0x39,0xf3,0);
      uVar4 = 0;
      goto LAB_001011ff;
    }
  }
  else {
    if ((bVar2 & 2) == 0) {
      uVar4 = *param_1;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      type = (EVP_MD *)EVP_MD_fetch(uVar4,"SHAKE256",0);
      if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
        iVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar3 != 0) {
          iVar3 = EVP_DigestUpdate(ctx,param_4,param_5);
          if (iVar3 != 0) {
            param_4 = local_88;
            iVar3 = EVP_DigestFinalXOF(ctx,param_4,0x40);
            if (iVar3 != 0) {
              param_5 = 0x40;
              EVP_MD_CTX_free(ctx);
              EVP_MD_free(type);
              bVar2 = *(byte *)((long)param_1 + 0x11c);
              goto LAB_001011c9;
            }
          }
        }
      }
      EVP_MD_CTX_free(ctx);
      EVP_MD_free(type);
      uVar4 = 0;
      goto LAB_001011ff;
    }
    if (param_5 != 0x40) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x28f,"ed448_verify");
      ERR_set_error(0x39,0xa6,0);
      uVar4 = 0;
      goto LAB_001011ff;
    }
  }
LAB_001011c9:
  uVar4 = ossl_ed448_verify(*param_1,param_4,param_5,param_2,lVar1 + 0x11,(long)param_1 + 0x11d,
                            param_1[0x44],bVar2 >> 3 & 1,*(undefined8 *)(lVar1 + 8));
LAB_001011ff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ed25519_digest_verify
          (undefined8 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if ((param_3 == 0x40) && (iVar3 != 0)) {
    bVar2 = *(byte *)((long)param_1 + 0x11c);
    if ((bVar2 & 8) == 0) {
      if ((bVar2 & 2) == 0) goto LAB_00101438;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x260,"ed25519_verify");
      ERR_set_error(0x39,0xf3,0);
    }
    else if ((bVar2 & 2) == 0) {
      iVar3 = EVP_Q_digest(*param_1,"SHA512",0,param_4,param_5,local_88);
      if ((iVar3 != 0) && (local_90 == 0x40)) {
        bVar2 = *(byte *)((long)param_1 + 0x11c);
        param_5 = 0x40;
        param_4 = local_88;
        goto LAB_00101438;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x255,"ed25519_verify");
      ERR_set_error(0x39,0xf1,0);
    }
    else {
      if (param_5 == 0x40) {
LAB_00101438:
        uVar4 = ossl_ed25519_verify(param_4,param_5,param_2,lVar1 + 0x11,bVar2 >> 2 & 1,
                                    bVar2 >> 3 & 1,bVar2 >> 4 & 1,(long)param_1 + 0x11d,
                                    param_1[0x44],*param_1,*(undefined8 *)(lVar1 + 8));
        goto LAB_001013b6;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x25b,"ed25519_verify");
      ERR_set_error(0x39,0xa6,0);
    }
  }
  uVar4 = 0;
LAB_001013b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ed448_digest_sign(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,
                 undefined1 *param_5,size_t param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_98;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
LAB_0010164e:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      if (param_4 < 0x72) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1fb,__func___0);
        ERR_set_error(0x39,0x6a,0);
        uVar4 = 0;
        goto LAB_00101665;
      }
      lVar5 = *(long *)(lVar1 + 0x50);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1ff,__func___0);
        ERR_set_error(0x39,0xdd,0);
        uVar4 = 0;
        goto LAB_00101665;
      }
      bVar2 = *(byte *)((long)param_1 + 0x11c);
      local_98 = param_5;
      if ((bVar2 & 8) == 0) {
        if ((bVar2 & 2) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x221,__func___0);
          ERR_set_error(0x39,0xf3,0);
          uVar4 = 0;
          goto LAB_00101665;
        }
      }
      else {
        if ((bVar2 & 2) == 0) {
          uVar4 = *param_1;
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          type = (EVP_MD *)EVP_MD_fetch(uVar4,"SHAKE256",0);
          if ((ctx != (EVP_MD_CTX *)0x0) && (type != (EVP_MD *)0x0)) {
            iVar3 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
            if (iVar3 != 0) {
              iVar3 = EVP_DigestUpdate(ctx,param_5,param_6);
              if (iVar3 != 0) {
                local_98 = local_88;
                iVar3 = EVP_DigestFinalXOF(ctx,local_98,0x40);
                if (iVar3 != 0) {
                  param_6 = 0x40;
                  EVP_MD_CTX_free(ctx);
                  EVP_MD_free(type);
                  lVar5 = *(long *)(lVar1 + 0x50);
                  bVar2 = *(byte *)((long)param_1 + 0x11c);
                  goto LAB_001015e3;
                }
              }
            }
          }
          EVP_MD_CTX_free(ctx);
          EVP_MD_free(type);
          uVar4 = 0;
          goto LAB_00101665;
        }
        if (param_6 != 0x40) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x21c,__func___0);
          ERR_set_error(0x39,0xa6,0);
          uVar4 = 0;
          goto LAB_00101665;
        }
      }
LAB_001015e3:
      iVar3 = ossl_ed448_sign(*param_1,param_2,local_98,param_6,lVar1 + 0x11,lVar5,
                              (long)param_1 + 0x11d,param_1[0x44],bVar2 >> 3 & 1,
                              *(undefined8 *)(lVar1 + 8));
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x22a,__func___0);
        ERR_set_error(0x39,0xaf,0);
        goto LAB_0010164e;
      }
    }
    *param_3 = 0x72;
    uVar4 = 1;
  }
LAB_00101665:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ed25519_digest_sign(undefined8 *param_1,long param_2,undefined8 *param_3,ulong param_4,
                   undefined1 *param_5,long param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_a0;
  long local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_prov_is_running();
  if (iVar3 == 0) {
LAB_00101951:
    uVar4 = 0;
  }
  else {
    if (param_2 != 0) {
      if (param_4 < 0x40) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",399,"ed25519_sign");
        ERR_set_error(0x39,0x6a,0);
        uVar4 = 0;
        goto LAB_00101964;
      }
      lVar5 = *(long *)(lVar1 + 0x50);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x193,"ed25519_sign");
        ERR_set_error(0x39,0xdd,0);
        uVar4 = 0;
        goto LAB_00101964;
      }
      bVar2 = *(byte *)((long)param_1 + 0x11c);
      local_a0 = param_5;
      if ((bVar2 & 8) == 0) {
        if ((bVar2 & 2) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1bb,"ed25519_sign");
          ERR_set_error(0x39,0xf3,0);
          uVar4 = 0;
          goto LAB_00101964;
        }
      }
      else if ((bVar2 & 2) == 0) {
        local_a0 = local_88;
        iVar3 = EVP_Q_digest(*param_1,"SHA512",0,param_5,param_6,local_a0);
        if ((iVar3 == 0) || (local_90 != 0x40)) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1b0,"ed25519_sign");
          ERR_set_error(0x39,0xf1,0);
          uVar4 = 0;
          goto LAB_00101964;
        }
        lVar5 = *(long *)(lVar1 + 0x50);
        bVar2 = *(byte *)((long)param_1 + 0x11c);
        param_6 = 0x40;
      }
      else if (param_6 != 0x40) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1b6,"ed25519_sign");
        ERR_set_error(0x39,0xa6,0);
        uVar4 = 0;
        goto LAB_00101964;
      }
      iVar3 = ossl_ed25519_sign(param_2,local_a0,param_6,lVar1 + 0x11,lVar5,bVar2 >> 2 & 1,
                                bVar2 >> 3 & 1,bVar2 >> 4 & 1,(long)param_1 + 0x11d,param_1[0x44],
                                *param_1,0);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x1c4,"ed25519_sign");
        ERR_set_error(0x39,0xaf,0);
        goto LAB_00101951;
      }
    }
    *param_3 = 0x40;
    uVar4 = 1;
  }
LAB_00101964:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ed448_signverify_message_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00101bc6:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00101d10:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00101bc6;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 4;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe4 | 1;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00101c42;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00101d10;
            goto LAB_00101bc6;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00101c42:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed448ph_signverify_message_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00101e36:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00101f80:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00101e36;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 5;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe4 | 9;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00101eb2;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00101f80;
            goto LAB_00101e36;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00101eb2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed448ph_signverify_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_001020a6:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_001021f0:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_001020a6;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 5;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe4 | 0xb;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102122;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_001021f0;
            goto LAB_001020a6;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102122:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed448_signverify_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00102316:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00102460:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00102316;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 3) {
            *(undefined4 *)(param_1 + 0x118) = 4;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe4 | 2;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102392;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00102460;
            goto LAB_00102316;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102392:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed25519_signverify_message_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00102586:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_001026d0:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00102586;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
            *(undefined4 *)(param_1 + 0x118) = 1;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0 | 1;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102602;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_001026d0;
            goto LAB_00102586;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102602:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed25519ph_signverify_message_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_001027f6:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00102940:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_001027f6;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
            *(undefined4 *)(param_1 + 0x118) = 3;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0 | 0xd;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102872;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00102940;
            goto LAB_001027f6;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102872:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed25519ph_signverify_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00102a66:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00102bb0:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00102a66;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
            *(undefined4 *)(param_1 + 0x118) = 3;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0 | 0xf;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102ae2;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00102bb0;
            goto LAB_00102a66;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102ae2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed25519_signverify_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00102cd6:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00102e20:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00102cd6;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
            *(undefined4 *)(param_1 + 0x118) = 1;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0 | 2;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102d52;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00102e20;
            goto LAB_00102cd6;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102d52:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ed25519ctx_signverify_message_init(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  void *__src;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_ecx_key_up_ref(param_2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0xc0103,0);
      }
      else {
        *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
        *(long *)(param_1 + 8) = param_2;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
        if (*(int *)(param_2 + 0x60) == 2) {
          if ((iVar1 == 0) ||
             (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_2),
             iVar1 == 0)) {
LAB_00102f46:
            WPACKET_cleanup(local_68);
          }
          else {
LAB_00103090:
            iVar1 = WPACKET_finish(local_68);
            if (iVar1 == 0) goto LAB_00102f46;
            WPACKET_get_total_written(local_68,param_1 + 0x110);
            __src = (void *)WPACKET_get_curr(local_68);
            WPACKET_cleanup(local_68);
            if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
              memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
            }
          }
          if (*(int *)(*(long *)(param_1 + 8) + 0x60) == 2) {
            *(undefined4 *)(param_1 + 0x118) = 2;
            *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe0 | 0x15;
            iVar1 = eddsa_set_ctx_params(param_1,param_3);
            bVar2 = iVar1 != 0;
            goto LAB_00102fc2;
          }
        }
        else {
          if (*(int *)(param_2 + 0x60) == 3) {
            if ((iVar1 != 0) &&
               (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_2),
               iVar1 != 0)) goto LAB_00103090;
            goto LAB_00102f46;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,
                        "eddsa_signverify_init");
          ERR_set_error(0x39,0xc0103,0);
          ossl_ecx_key_free(param_2);
          *(undefined8 *)(param_1 + 8) = 0;
          WPACKET_cleanup(local_68);
        }
      }
    }
  }
  bVar2 = false;
LAB_00102fc2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



ulong ed448_digest_signverify_init(long param_1,char *param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if (param_3 == 0) {
      if (*(long *)(param_1 + 8) != 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = eddsa_set_ctx_params(param_1,param_4);
          return uVar2;
        }
        goto LAB_00103419;
      }
      iVar1 = ossl_prov_is_running();
      if (iVar1 != 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf2,"eddsa_signverify_init"
                     );
        ERR_set_error(0x39,0x72,0);
      }
      goto LAB_00103208;
    }
    iVar1 = ossl_prov_is_running();
    if (iVar1 == 0) goto LAB_00103208;
    iVar1 = ossl_ecx_key_up_ref(param_3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0xf7,"eddsa_signverify_init");
      ERR_set_error(0x39,0xc0103,0);
      goto LAB_00103208;
    }
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe2;
    *(long *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x10),0x100);
    if (*(int *)(param_3 + 0x60) != 2) {
      if (*(int *)(param_3 + 0x60) == 3) {
        if ((iVar1 != 0) &&
           (iVar1 = ossl_DER_w_algorithmIdentifier_ED448(local_68,0xffffffff,param_3), iVar1 != 0))
        goto LAB_00103398;
        goto LAB_00103288;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x115,"eddsa_signverify_init")
      ;
      ERR_set_error(0x39,0xc0103,0);
      ossl_ecx_key_free(param_3);
      *(undefined8 *)(param_1 + 8) = 0;
      WPACKET_cleanup(local_68);
      goto LAB_00103208;
    }
    if ((iVar1 == 0) ||
       (iVar1 = ossl_DER_w_algorithmIdentifier_ED25519(local_68,0xffffffff,param_3), iVar1 == 0)) {
LAB_00103288:
      WPACKET_cleanup(local_68);
    }
    else {
LAB_00103398:
      iVar1 = WPACKET_finish(local_68);
      if (iVar1 == 0) goto LAB_00103288;
      WPACKET_get_total_written(local_68,param_1 + 0x110);
      __src = (void *)WPACKET_get_curr(local_68);
      WPACKET_cleanup(local_68);
      if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x110) != 0)) {
        memmove((void *)(param_1 + 0x10),__src,*(size_t *)(param_1 + 0x110));
      }
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x60) != 3) goto LAB_00103208;
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xe4;
    *(undefined4 *)(param_1 + 0x118) = 4;
    iVar1 = eddsa_set_ctx_params(param_1,param_4);
    uVar2 = (ulong)(iVar1 != 0);
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/eddsa_sig.c",0x2c9,
                  "ed448_digest_signverify_init");
    ERR_set_error(0x39,0x7a,"Explicit digest not allowed with EdDSA operations");
LAB_00103208:
    uVar2 = 0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00103419:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



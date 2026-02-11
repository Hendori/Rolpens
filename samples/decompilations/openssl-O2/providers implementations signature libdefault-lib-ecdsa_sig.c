
undefined1 * ecdsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * ecdsa_settable_ctx_params(void)

{
  return settable_ctx_params;
}



undefined1 * ecdsa_sigalg_query_key_types(void)

{
  return keytypes_36;
}



undefined1 * ecdsa_sigalg_settable_ctx_params(long param_1)

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



undefined8 ecdsa_settable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar1 = EVP_MD_settable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 ecdsa_set_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    uVar1 = EVP_MD_CTX_set_params();
    return uVar1;
  }
  return 0;
}



undefined8 ecdsa_gettable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar1 = EVP_MD_gettable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 ecdsa_get_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x168) != 0) {
    uVar1 = EVP_MD_CTX_get_params();
    return uVar1;
  }
  return 0;
}



bool ecdsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x1d;
    if (*(long *)(param_1 + 0x120) == 0) {
      lVar3 = 0;
    }
    iVar1 = OSSL_PARAM_set_octet_string(lVar2,lVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"digest-size");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x170)), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"digest");
  if (lVar2 != 0) {
    lVar3 = param_1 + 0x128;
    if (*(long *)(param_1 + 0x160) != 0) {
      lVar3 = EVP_MD_get0_name(*(long *)(param_1 + 0x160),lVar3);
    }
    iVar1 = OSSL_PARAM_set_utf8_string(lVar2,lVar3);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"nonce-type");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0x198));
  return iVar1 != 0;
}



void ecdsa_freectx(void *param_1)

{
  EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 0x168));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x160));
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(*(void **)((long)param_1 + 0x178));
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 0x10));
  BN_clear_free(*(BIGNUM **)((long)param_1 + 0x188));
  BN_clear_free(*(BIGNUM **)((long)param_1 + 400));
  CRYPTO_free(param_1);
  return;
}



undefined8 * ecdsa_dupctx(undefined8 *param_1)

{
  EC_KEY *key;
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EVP_MD_CTX *out;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)
           CRYPTO_zalloc(0x1a0,"providers/implementations/signature/ecdsa_sig.c",0x27d);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar6 = param_1;
  puVar7 = puVar3;
  for (lVar5 = 0x34; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
    puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
  }
  key = (EC_KEY *)param_1[2];
  *(undefined1 (*) [16])(puVar3 + 1) = (undefined1  [16])0x0;
  if ((((key == (EC_KEY *)0x0) || (iVar2 = EC_KEY_up_ref(key), iVar2 != 0)) && (param_1[0x31] == 0))
     && (param_1[0x32] == 0)) {
    lVar5 = param_1[0x2c];
    puVar3[2] = param_1[2];
    if (lVar5 != 0) {
      iVar2 = EVP_MD_up_ref();
      if (iVar2 == 0) goto LAB_00100380;
      lVar5 = param_1[0x2c];
    }
    lVar1 = param_1[0x2d];
    puVar3[0x2c] = lVar5;
    if (lVar1 != 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      puVar3[0x2d] = out;
      if ((out == (EVP_MD_CTX *)0x0) ||
         (iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2d]), iVar2 == 0))
      goto LAB_00100380;
    }
    if ((char *)param_1[1] == (char *)0x0) {
      return puVar3;
    }
    pcVar4 = CRYPTO_strdup((char *)param_1[1],"providers/implementations/signature/ecdsa_sig.c",
                           0x298);
    puVar3[1] = pcVar4;
    if (pcVar4 != (char *)0x0) {
      return puVar3;
    }
  }
LAB_00100380:
  ecdsa_freectx(puVar3);
  return (undefined8 *)0x0;
}



undefined8
ecdsa_sign_directly(undefined8 *param_1,uchar *param_2,ulong *param_3,ulong param_4,uchar *param_5,
                   ulong param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ECDSA_size((EC_KEY *)param_1[2]);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if (param_2 == (uchar *)0x0) {
      *param_3 = (long)iVar1;
LAB_00100458:
      uVar4 = 1;
      goto LAB_00100462;
    }
    if (((ulong)(long)iVar1 <= param_4) && ((param_1[0x2e] == param_6 || (param_1[0x2e] == 0)))) {
      if (*(int *)(param_1 + 0x33) == 0) {
        iVar1 = ECDSA_sign_ex(0,param_5,(int)param_6,param_2,&local_44,(BIGNUM *)param_1[0x31],
                              (BIGNUM *)param_1[0x32],(EC_KEY *)param_1[2]);
      }
      else {
        puVar3 = (undefined8 *)0x0;
        if (*(char *)(param_1 + 0x25) != '\0') {
          puVar3 = param_1 + 0x25;
        }
        iVar1 = ossl_ecdsa_deterministic_sign
                          (param_5,param_6 & 0xffffffff,param_2,&local_44,(EC_KEY *)param_1[2],
                           *(int *)(param_1 + 0x33),puVar3,*param_1,param_1[1]);
      }
      if (0 < iVar1) {
        *param_3 = (ulong)local_44;
        goto LAB_00100458;
      }
    }
  }
  uVar4 = 0;
LAB_00100462:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecdsa_sign_message_final(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
  if ((((param_1 == 0) || (iVar1 == 0)) || (*(EVP_MD_CTX **)(param_1 + 0x168) == (EVP_MD_CTX *)0x0))
     || ((param_2 != 0 &&
         (iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x168),local_78,&local_7c),
         iVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = ecdsa_sign_directly(param_1,param_2,param_3,param_4,local_78,local_7c);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 * ecdsa_newctx(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x1a0,"providers/implementations/signature/ecdsa_sig.c",0x95),
     ptr != (undefined8 *)0x0)) {
    *(byte *)((long)ptr + 0x1c) = *(byte *)((long)ptr + 0x1c) | 2;
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *ptr = uVar2;
    if (param_2 == (char *)0x0) {
      return ptr;
    }
    pcVar3 = CRYPTO_strdup(param_2,"providers/implementations/signature/ecdsa_sig.c",0x9f);
    ptr[1] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



int ecdsa_verify_message_final(long param_1)

{
  undefined8 uVar1;
  uchar *sig;
  uint dgstlen;
  int iVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  iVar2 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar2 != 0)) && (*(EVP_MD_CTX **)(param_1 + 0x168) != (EVP_MD_CTX *)0x0))
  {
    iVar2 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x168),local_78,&local_7c);
    dgstlen = local_7c;
    if (iVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x180);
      sig = *(uchar **)(param_1 + 0x178);
      iVar2 = ossl_prov_is_running();
      if ((iVar2 != 0) &&
         ((*(ulong *)(param_1 + 0x170) == 0 || ((ulong)dgstlen == *(ulong *)(param_1 + 0x170))))) {
        iVar2 = ECDSA_verify(0,local_78,dgstlen,sig,(int)uVar1,*(EC_KEY **)(param_1 + 0x10));
        goto LAB_0010067d;
      }
    }
  }
  iVar2 = 0;
LAB_0010067d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecdsa_digest_sign_final(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return 0;
  }
  uVar1 = ecdsa_sign_message_final();
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
  return uVar1;
}



undefined8 ecdsa_setup_md_isra_0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  undefined8 uVar6;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
LAB_001007f6:
    uVar6 = 1;
  }
  else {
    sVar4 = strlen(param_2);
    if (sVar4 < 0x32) {
      if (param_3 == 0) {
        param_3 = param_1[1];
      }
      lVar5 = EVP_MD_fetch(*param_1,param_2,param_3);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0xbd,"ecdsa_setup_md");
        ERR_set_error(0x39,0x7a,"%s could not be fetched",param_2);
      }
      else {
        iVar1 = EVP_MD_get_size(lVar5);
        if (iVar1 < 1) {
          ERR_new();
          ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0xc3,"ecdsa_setup_md");
          ERR_set_error(0x39,0x7a,"%s has invalid md size %d",param_2,iVar1);
        }
        else {
          iVar2 = ossl_digest_get_approved_nid(lVar5);
          iVar3 = EVP_MD_xof(lVar5);
          if (iVar3 == 0) {
            if ((*(byte *)((long)param_1 + 0x1c) & 2) != 0) {
              EVP_MD_CTX_free(param_1[0x2d]);
              EVP_MD_free(param_1[0x2c]);
              param_1[0x24] = 0;
              if (iVar2 != 0) {
                iVar3 = WPACKET_init_der(local_78,(void *)((long)param_1 + 0x1d),0x100);
                if (iVar3 != 0) {
                  iVar2 = ossl_DER_w_algorithmIdentifier_ECDSA_with_MD
                                    (local_78,0xffffffff,param_1[2],iVar2);
                  if (iVar2 != 0) {
                    iVar2 = WPACKET_finish(local_78);
                    if (iVar2 != 0) {
                      WPACKET_get_total_written(local_78,param_1 + 0x24);
                      __src = (void *)WPACKET_get_curr(local_78);
                      WPACKET_cleanup(local_78);
                      if ((__src != (void *)0x0) && (param_1[0x24] != 0)) {
                        memmove((void *)((long)param_1 + 0x1d),__src,param_1[0x24]);
                      }
                      goto LAB_0010092c;
                    }
                  }
                }
                WPACKET_cleanup(local_78);
              }
LAB_0010092c:
              param_1[0x2c] = lVar5;
              param_1[0x2d] = 0;
              param_1[0x2e] = (long)iVar1;
              OPENSSL_strlcpy(param_1 + 0x25,param_2,0x32);
              goto LAB_001007f6;
            }
            if (*(char *)(param_1 + 0x25) != '\0') {
              iVar1 = EVP_MD_is_a(lVar5,param_1 + 0x25);
              if (iVar1 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0xe6,
                              "ecdsa_setup_md");
                ERR_set_error(0x39,0xae,"digest %s != %s",param_2,param_1 + 0x25);
                goto LAB_0010084b;
              }
            }
            EVP_MD_free(lVar5);
            goto LAB_001007f6;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0xd1,"ecdsa_setup_md");
          ERR_set_error(0x39,0xb7,0);
        }
LAB_0010084b:
        EVP_MD_free(lVar5);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0xb5,"ecdsa_setup_md");
      ERR_set_error(0x39,0x7a,"%s exceeds name buffer length",param_2);
    }
    uVar6 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecdsa_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined2 local_158;
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
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a0 = 0;
  if (param_1 == 0) goto LAB_00100c80;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"nonce-type");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x198);
      if (iVar1 == 0) goto LAB_00100c80;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar2 != 0) {
      local_158 = 0;
      local_188 = (undefined1  [16])0x0;
      local_178 = (undefined1  [16])0x0;
      local_168 = (undefined1  [16])0x0;
      local_148 = (undefined1  [16])0x0;
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
      local_198 = local_188;
      local_190 = local_148;
      lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_198,0x32);
      if (iVar1 != 0) {
        if (lVar3 != 0) {
          iVar1 = OSSL_PARAM_get_utf8_string(lVar3,&local_190,0x100);
          if (iVar1 == 0) goto LAB_00100c80;
        }
        iVar1 = ecdsa_setup_md_isra_0(param_1,local_188,local_148);
        if (iVar1 != 0) goto LAB_00100c2a;
      }
LAB_00100c80:
      uVar4 = 0;
      goto LAB_00100c82;
    }
LAB_00100c2a:
    lVar2 = OSSL_PARAM_locate_const(param_2,"digest-size");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_1a0);
      if ((iVar1 == 0) ||
         (((*(byte *)(param_1 + 0x1c) & 2) == 0 && (*(long *)(param_1 + 0x170) != local_1a0))))
      goto LAB_00100c80;
      *(long *)(param_1 + 0x170) = local_1a0;
    }
  }
  uVar4 = 1;
LAB_00100c82:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ecdsa_digest_signverify_init_isra_0
          (long param_1,char *param_2,EC_KEY *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (iVar1 = ossl_prov_is_running(), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (param_3 == (EC_KEY *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0x119,"ecdsa_signverify_init")
      ;
      ERR_set_error(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = EC_KEY_up_ref(param_3);
    if (iVar1 == 0) {
      return 0;
    }
    EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
    *(EC_KEY **)(param_1 + 0x10) = param_3;
  }
  *(undefined4 *)(param_1 + 0x18) = param_5;
  iVar1 = ecdsa_set_ctx_params(param_1,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (((param_2 != (char *)0x0) &&
      ((*param_2 == '\0' || (iVar1 = OPENSSL_strcasecmp(param_1 + 0x128,param_2), iVar1 != 0)))) &&
     (iVar1 = ecdsa_setup_md_isra_0(param_1,param_2,0), iVar1 == 0)) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x168) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00100d9f;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x160),param_4);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
LAB_00100d9f:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x168) = 0;
  return 0;
}



void ecdsa_digest_sign_init(void)

{
  ecdsa_digest_signverify_init_isra_0();
  return;
}



void ecdsa_digest_verify_init(void)

{
  ecdsa_digest_signverify_init_isra_0();
  return;
}



int ecdsa_signverify_message_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x168),param_2,param_3);
    return iVar1;
  }
  return 0;
}



int ecdsa_digest_signverify_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (*(EVP_MD_CTX **)(param_1 + 0x168) != (EVP_MD_CTX *)0x0)) &&
     ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x168),param_2,param_3);
    return iVar1;
  }
  return 0;
}



bool ecdsa_sigalg_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"nonce-type");
    if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x198), iVar1 == 0)) {
      return false;
    }
    if ((*(int *)(param_1 + 0x18) == 0x8000) &&
       (lVar2 = OSSL_PARAM_locate_const(param_2,"signature"), lVar2 != 0)) {
      CRYPTO_free(*(void **)(param_1 + 0x178));
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x178,0,param_1 + 0x180);
      return iVar1 != 0;
    }
  }
  return true;
}



undefined8 ecdsa_digest_verify_final(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  uVar2 = 0;
  if ((((iVar1 != 0) && (param_1 != 0)) && (*(long *)(param_1 + 0x168) != 0)) &&
     ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    OSSL_PARAM_construct_octet_string(&local_b8,"signature",param_2,param_3);
    local_68 = local_98;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    local_40 = local_98;
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    uVar2 = ecdsa_sigalg_set_ctx_params(param_1,&local_88);
    if ((int)uVar2 != 0) {
      uVar2 = ecdsa_verify_message_final(param_1);
    }
    *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ecdsa_verify(long param_1,uchar *param_2,undefined8 param_3,uchar *param_4,size_t param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x18) == 0x8000) {
    OSSL_PARAM_construct_octet_string(&local_c8,"signature",param_2,param_3);
    local_78 = local_a8;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    OSSL_PARAM_construct_end(&local_c8);
    local_70 = local_c8;
    uStack_68 = uStack_c0;
    local_50 = local_a8;
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    iVar1 = ecdsa_sigalg_set_ctx_params(param_1,&local_98);
    if (0 < iVar1) {
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x168),param_4,param_5);
      if (0 < iVar1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar1 = ecdsa_verify_message_final(param_1);
          return iVar1;
        }
        goto LAB_001011f9;
      }
    }
  }
  else {
    iVar1 = ossl_prov_is_running();
    if ((iVar1 != 0) &&
       ((param_5 == *(size_t *)(param_1 + 0x170) || (*(size_t *)(param_1 + 0x170) == 0)))) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar1 = ECDSA_verify(0,param_4,(int)param_5,param_2,(int)param_3,
                             *(EC_KEY **)(param_1 + 0x10));
        return iVar1;
      }
      goto LAB_001011f9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001011f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ecdsa_verify_init(long param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if (param_2 == (EC_KEY *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_00101247;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0x119,"ecdsa_signverify_init")
      ;
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
        *(EC_KEY **)(param_1 + 0x10) = param_2;
LAB_00101247:
        *(undefined4 *)(param_1 + 0x18) = 0x20;
        iVar1 = ecdsa_set_ctx_params(param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



bool ecdsa_sign_init(long param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if (param_2 == (EC_KEY *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) goto LAB_00101307;
      ERR_new();
      ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0x119,"ecdsa_signverify_init")
      ;
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
        *(EC_KEY **)(param_1 + 0x10) = param_2;
LAB_00101307:
        *(undefined4 *)(param_1 + 0x18) = 0x10;
        iVar1 = ecdsa_set_ctx_params(param_1,param_3);
        return iVar1 != 0;
      }
    }
  }
  return false;
}



undefined8
ecdsa_sigalg_signverify_init_constprop_0_isra_0
          (long param_1,EC_KEY *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (iVar1 = ossl_prov_is_running(), iVar1 == 0)) || (param_1 == 0)) {
    return 0;
  }
  if (param_2 == (EC_KEY *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/ecdsa_sig.c",0x119,"ecdsa_signverify_init")
      ;
      ERR_set_error(0x39,0x72,0);
      return 0;
    }
  }
  else {
    iVar1 = EC_KEY_up_ref(param_2);
    if (iVar1 == 0) {
      return 0;
    }
    EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
    *(EC_KEY **)(param_1 + 0x10) = param_2;
  }
  *(undefined4 *)(param_1 + 0x18) = param_5;
  iVar1 = ecdsa_sigalg_set_ctx_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = ecdsa_setup_md_isra_0(param_1,param_4,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x168);
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfc | 1;
  if (lVar2 == 0) {
    lVar2 = EVP_MD_CTX_new();
    *(long *)(param_1 + 0x168) = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00101457;
    }
  }
  iVar1 = EVP_DigestInit_ex2(lVar2,*(undefined8 *)(param_1 + 0x160),param_3);
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x168);
LAB_00101457:
  EVP_MD_CTX_free(uVar3);
  *(undefined8 *)(param_1 + 0x168) = 0;
  return 0;
}



void ecdsa_sha1_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha1_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha1_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha1_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha224_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha224_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha224_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha224_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha256_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha256_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha256_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha256_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha384_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha384_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha384_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha384_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha512_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha512_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha512_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha512_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_224_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_224_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_224_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_224_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_256_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_256_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_256_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_256_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_384_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_384_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_384_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_384_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_512_verify_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_512_verify_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_512_sign_message_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



void ecdsa_sha3_512_sign_init(void)

{
  ecdsa_sigalg_signverify_init_constprop_0_isra_0();
  return;
}



undefined8
ecdsa_sign(long param_1,long param_2,long *param_3,undefined8 param_4,void *param_5,size_t param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0x4000) {
    uVar3 = ecdsa_sign_directly();
    return uVar3;
  }
  if (param_2 == 0) {
    iVar1 = ossl_prov_is_running();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x168) != 0)) {
      iVar1 = ECDSA_size(*(EC_KEY **)(param_1 + 0x10));
      iVar2 = ossl_prov_is_running();
      if (iVar2 != 0) {
        *param_3 = (long)iVar1;
        return 1;
      }
    }
  }
  else {
    iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x168),param_5,param_6);
    if (0 < iVar1) {
      uVar3 = ecdsa_sign_message_final(param_1,param_2,param_3,param_4);
      return uVar3;
    }
  }
  return 0;
}



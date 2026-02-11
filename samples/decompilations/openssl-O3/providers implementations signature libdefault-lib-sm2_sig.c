
undefined1 * sm2sig_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined1 * sm2sig_settable_ctx_params(void)

{
  return known_settable_ctx_params;
}



undefined8 sm2sig_settable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x158) != 0) {
    uVar1 = EVP_MD_settable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 sm2sig_set_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar1 = EVP_MD_CTX_set_params();
    return uVar1;
  }
  return 0;
}



undefined8 sm2sig_gettable_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x158) != 0) {
    uVar1 = EVP_MD_gettable_ctx_params();
    return uVar1;
  }
  return 0;
}



undefined8 sm2sig_get_ctx_md_params(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    uVar1 = EVP_MD_CTX_get_params();
    return uVar1;
  }
  return 0;
}



undefined8 sm2sig_set_mdname(undefined8 *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  
  lVar3 = param_1[0x2b];
  if (lVar3 == 0) {
    lVar3 = EVP_MD_fetch(*param_1,(long)param_1 + 0x19,param_1[1]);
    param_1[0x2b] = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = EVP_MD_xof(lVar3);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/sm2_sig.c",0x66,"sm2sig_set_mdname");
    ERR_set_error(0x39,0xb7,0);
    return 0;
  }
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    if ((0x31 < sVar2) || (iVar1 = EVP_MD_is_a(param_1[0x2b],param_2), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("providers/implementations/signature/sm2_sig.c",0x6f,"sm2sig_set_mdname");
      ERR_set_error(0x39,0x7a,"digest=%s",param_2);
      return 0;
    }
    OPENSSL_strlcpy((long)param_1 + 0x19,param_2,0x32);
  }
  return 1;
}



undefined8 sm2sig_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_30;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100320:
      uVar3 = 1;
      goto LAB_001002da;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"distid");
    if (lVar2 != 0) {
      local_30 = 0;
      local_28 = (void *)0x0;
      if (((*(byte *)(param_1 + 0x18) & 1) == 0) ||
         ((*(long *)(lVar2 + 0x18) != 0 &&
          (iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_30,0,&local_28), iVar1 == 0))))
      goto LAB_001002d8;
      CRYPTO_free(*(void **)(param_1 + 0x170));
      *(long *)(param_1 + 0x170) = local_30;
      *(void **)(param_1 + 0x178) = local_28;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"digest-size");
    if ((lVar2 == 0) ||
       ((iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_30), iVar1 != 0 &&
        (*(long *)(param_1 + 0x168) == local_30)))) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 == 0) goto LAB_00100320;
      local_28 = (void *)0x0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_28,0);
      if (iVar1 != 0) {
        iVar1 = sm2sig_set_mdname(param_1,local_28);
        if (iVar1 != 0) {
          CRYPTO_free(local_28);
          goto LAB_00100320;
        }
        CRYPTO_free(local_28);
      }
    }
  }
LAB_001002d8:
  uVar3 = 0;
LAB_001002da:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



bool sm2sig_get_ctx_params(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"algorithm-id");
  if (lVar3 == 0) {
LAB_0010039d:
    lVar3 = OSSL_PARAM_locate(param_2,"digest-size");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_set_size_t(lVar3,*(undefined8 *)(param_1 + 0x168));
      if (iVar2 == 0) goto LAB_00100410;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"digest");
    bVar1 = true;
    if (lVar3 != 0) {
      lVar4 = param_1 + 0x19;
      if (*(long *)(param_1 + 0x158) != 0) {
        lVar4 = EVP_MD_get0_name(*(long *)(param_1 + 0x158),lVar4);
      }
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,lVar4);
      return iVar2 != 0;
    }
  }
  else {
    lVar4 = param_1 + 0x4b;
    if (*(long *)(param_1 + 0x150) == 0) {
      lVar4 = 0;
    }
    iVar2 = OSSL_PARAM_set_octet_string(lVar3,lVar4);
    if (iVar2 != 0) goto LAB_0010039d;
LAB_00100410:
    bVar1 = false;
  }
  return bVar1;
}



void sm2sig_freectx(void *param_1)

{
  EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 0x160));
  EVP_MD_free(*(undefined8 *)((long)param_1 + 0x158));
  *(undefined1 (*) [16])((long)param_1 + 0x158) = (undefined1  [16])0x0;
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 0x10));
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(*(void **)((long)param_1 + 0x170));
  CRYPTO_free(param_1);
  return;
}



undefined8
sm2sig_sign(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,ulong param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ECDSA_size(*(EC_KEY **)(param_1 + 0x10));
  uVar2 = (ulong)iVar1;
  if (param_2 == 0) {
LAB_0010054e:
    *param_3 = uVar2;
    uVar3 = 1;
  }
  else {
    if ((uVar2 <= param_4) &&
       ((*(ulong *)(param_1 + 0x168) == 0 || (*(ulong *)(param_1 + 0x168) == param_6)))) {
      iVar1 = ossl_sm2_internal_sign
                        (param_5,param_6 & 0xffffffff,param_2,&local_44,
                         *(undefined8 *)(param_1 + 0x10));
      if (0 < iVar1) {
        uVar2 = (ulong)local_44;
        goto LAB_0010054e;
      }
    }
    uVar3 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 sm2sig_signature_init(long param_1,EC_KEY *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if (param_2 == (EC_KEY *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar2 = sm2sig_set_ctx_params(param_1,param_3);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/sm2_sig.c",0x93,"sm2sig_signature_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = EC_KEY_up_ref(param_2);
      if (iVar1 != 0) {
        EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
        *(EC_KEY **)(param_1 + 0x10) = param_2;
        uVar2 = sm2sig_set_ctx_params(param_1,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}



undefined8 * sm2sig_newctx(undefined8 param_1,char *param_2)

{
  undefined8 *ptr;
  undefined8 uVar1;
  char *pcVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x180,"providers/implementations/signature/sm2_sig.c",0x7a);
  if (ptr == (undefined8 *)0x0) {
LAB_001006ad:
    ptr = (undefined8 *)0x0;
  }
  else {
    uVar1 = ossl_prov_ctx_get0_libctx(param_1);
    *ptr = uVar1;
    if (param_2 != (char *)0x0) {
      pcVar2 = CRYPTO_strdup(param_2,"providers/implementations/signature/sm2_sig.c",0x80);
      ptr[1] = pcVar2;
      if (pcVar2 == (char *)0x0) {
        CRYPTO_free(ptr);
        goto LAB_001006ad;
      }
    }
    ptr[0x2d] = 0x20;
    *(undefined4 *)((long)ptr + 0x19) = 0x334d53;
  }
  return ptr;
}



undefined8 sm2sig_digest_verify_final(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *d;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x160) != 0)) {
    iVar1 = EVP_MD_get_size(*(undefined8 *)(param_1 + 0x158));
    if (iVar1 - 1U < 0x40) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
LAB_00100728:
        iVar1 = EVP_DigestFinal_ex(*(EVP_MD_CTX **)(param_1 + 0x160),local_78,&local_7c);
        if (iVar1 != 0) {
          if (((ulong)local_7c == *(ulong *)(param_1 + 0x168)) || (*(ulong *)(param_1 + 0x168) == 0)
             ) {
            uVar2 = ossl_sm2_internal_verify
                              (local_78,(ulong)local_7c,param_2,param_3,
                               *(undefined8 *)(param_1 + 0x10));
            goto LAB_001007e2;
          }
        }
      }
      else {
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
        d = (void *)CRYPTO_zalloc(*(undefined8 *)(param_1 + 0x168),
                                  "providers/implementations/signature/sm2_sig.c",0x10b);
        if (d == (void *)0x0) {
          CRYPTO_free((void *)0x0);
        }
        else {
          iVar1 = ossl_sm2_compute_z_digest
                            (d,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x170),
                             *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x10));
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x160),d,
                                     *(size_t *)(param_1 + 0x168));
            if (iVar1 != 0) {
              CRYPTO_free(d);
              goto LAB_00100728;
            }
          }
          CRYPTO_free(d);
        }
      }
    }
  }
  uVar2 = 0;
LAB_001007e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
sm2sig_verify(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  
  if ((*(ulong *)(param_1 + 0x168) != 0) && (*(ulong *)(param_1 + 0x168) != param_5)) {
    return 0;
  }
  uVar1 = ossl_sm2_internal_verify
                    (param_4,param_5 & 0xffffffff,param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}



undefined8
sm2sig_digest_signverify_init(long param_1,undefined8 param_2,EC_KEY *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *__src;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if (param_3 == (EC_KEY *)0x0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/sm2_sig.c",0x93,"sm2sig_signature_init");
        ERR_set_error(0x39,0x72,0);
        uVar3 = 0;
        goto LAB_0010098d;
      }
    }
    else {
      iVar1 = EC_KEY_up_ref(param_3);
      if (iVar1 == 0) goto LAB_001008df;
      EC_KEY_free(*(EC_KEY **)(param_1 + 0x10));
      *(EC_KEY **)(param_1 + 0x10) = param_3;
    }
    iVar1 = sm2sig_set_ctx_params(param_1,param_4);
    if (iVar1 != 0) {
      iVar1 = sm2sig_set_mdname(param_1,param_2);
      if (iVar1 != 0) {
        if (*(long *)(param_1 + 0x160) == 0) {
          lVar4 = EVP_MD_CTX_new();
          *(long *)(param_1 + 0x160) = lVar4;
          if (lVar4 == 0) {
            uVar3 = 0;
            goto LAB_0010098d;
          }
        }
        uVar2 = EVP_MD_get_type(*(undefined8 *)(param_1 + 0x158));
        *(undefined8 *)(param_1 + 0x150) = 0;
        iVar1 = WPACKET_init_der(local_68,(void *)(param_1 + 0x4b),0x100);
        if (iVar1 == 0) {
LAB_0010095e:
          WPACKET_cleanup(local_68);
        }
        else {
          iVar1 = ossl_DER_w_algorithmIdentifier_SM2_with_MD
                            (local_68,0xffffffff,*(undefined8 *)(param_1 + 0x10),uVar2);
          if (iVar1 == 0) goto LAB_0010095e;
          iVar1 = WPACKET_finish(local_68);
          if (iVar1 == 0) goto LAB_0010095e;
          WPACKET_get_total_written(local_68,param_1 + 0x150);
          __src = (void *)WPACKET_get_curr(local_68);
          WPACKET_cleanup(local_68);
          if ((__src != (void *)0x0) && (*(size_t *)(param_1 + 0x150) != 0)) {
            memmove((void *)(param_1 + 0x4b),__src,*(size_t *)(param_1 + 0x150));
          }
        }
        iVar1 = EVP_DigestInit_ex2(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x158)
                                   ,param_4);
        if (iVar1 != 0) {
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
          uVar3 = 1;
          goto LAB_0010098d;
        }
      }
    }
  }
LAB_001008df:
  uVar3 = 0;
LAB_0010098d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * sm2sig_dupctx(undefined8 *param_1)

{
  size_t __n;
  void *__src;
  long lVar1;
  int iVar2;
  undefined8 *ptr;
  char *pcVar3;
  EVP_MD_CTX *out;
  void *__dest;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  EC_KEY *key;
  byte bVar7;
  
  bVar7 = 0;
  ptr = (undefined8 *)CRYPTO_zalloc(0x180,"providers/implementations/signature/sm2_sig.c",0x161);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5 = param_1;
  puVar6 = ptr;
  for (lVar4 = 0x30; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
    puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
  }
  key = (EC_KEY *)param_1[2];
  ptr[0x2e] = 0;
  *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(ptr + 0x2b) = (undefined1  [16])0x0;
  if (key == (EC_KEY *)0x0) {
LAB_00100b22:
    ptr[2] = key;
    if ((char *)param_1[1] != (char *)0x0) {
      pcVar3 = CRYPTO_strdup((char *)param_1[1],"providers/implementations/signature/sm2_sig.c",
                             0x171);
      ptr[1] = pcVar3;
      if (pcVar3 == (char *)0x0) goto LAB_00100bf0;
    }
    lVar4 = param_1[0x2b];
    if (lVar4 != 0) {
      iVar2 = EVP_MD_up_ref();
      if (iVar2 == 0) goto LAB_00100bf0;
      lVar4 = param_1[0x2b];
    }
    lVar1 = param_1[0x2c];
    ptr[0x2b] = lVar4;
    if (lVar1 != 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      ptr[0x2c] = out;
      if (out == (EVP_MD_CTX *)0x0) goto LAB_00100bf7;
      iVar2 = EVP_MD_CTX_copy_ex(out,(EVP_MD_CTX *)param_1[0x2c]);
      if (iVar2 == 0) goto LAB_00100bf0;
    }
    if (param_1[0x2e] == 0) {
      return ptr;
    }
    __dest = CRYPTO_malloc((int)param_1[0x2f],"providers/implementations/signature/sm2_sig.c",0x182)
    ;
    ptr[0x2e] = __dest;
    if (__dest != (void *)0x0) {
      __n = param_1[0x2f];
      __src = (void *)param_1[0x2e];
      ptr[0x2f] = __n;
      memcpy(__dest,__src,__n);
      return ptr;
    }
  }
  else {
    iVar2 = EC_KEY_up_ref(key);
    if (iVar2 != 0) {
      key = (EC_KEY *)param_1[2];
      goto LAB_00100b22;
    }
  }
LAB_00100bf0:
  out = (EVP_MD_CTX *)ptr[0x2c];
LAB_00100bf7:
  EVP_MD_CTX_free(out);
  EVP_MD_free(ptr[0x2b]);
  *(undefined1 (*) [16])(ptr + 0x2b) = (undefined1  [16])0x0;
  EC_KEY_free((EC_KEY *)ptr[2]);
  CRYPTO_free((void *)ptr[1]);
  CRYPTO_free((void *)ptr[0x2e]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



bool sm2sig_digest_signverify_update(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *d;
  EVP_MD_CTX *ctx;
  bool bVar2;
  
  if (param_1 == 0) {
    return false;
  }
  ctx = *(EVP_MD_CTX **)(param_1 + 0x160);
  if (ctx == (EVP_MD_CTX *)0x0) {
LAB_00100d1a:
    bVar2 = false;
  }
  else {
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
      d = (void *)CRYPTO_zalloc(*(undefined8 *)(param_1 + 0x168),
                                "providers/implementations/signature/sm2_sig.c",0x10b);
      if (d == (void *)0x0) {
        CRYPTO_free((void *)0x0);
        return false;
      }
      iVar1 = ossl_sm2_compute_z_digest
                        (d,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x170),
                         *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) {
        CRYPTO_free(d);
        goto LAB_00100d1a;
      }
      iVar1 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x160),d,*(size_t *)(param_1 + 0x168));
      if (iVar1 == 0) {
        CRYPTO_free(d);
        return false;
      }
      CRYPTO_free(d);
      ctx = *(EVP_MD_CTX **)(param_1 + 0x160);
    }
    iVar1 = EVP_DigestUpdate(ctx,param_2,param_3);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



undefined8 sm2sig_digest_sign_final(long param_1,long param_2,ulong *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  void *d;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  uint local_90;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if ((param_1 != 0) && (ctx = *(EVP_MD_CTX **)(param_1 + 0x160), ctx != (EVP_MD_CTX *)0x0)) {
    if (param_2 == 0) {
      iVar2 = ECDSA_size(*(EC_KEY **)(param_1 + 0x10));
      *param_3 = (long)iVar2;
LAB_00100e5e:
      uVar3 = 1;
      goto LAB_00100ed2;
    }
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
LAB_00100df0:
      iVar2 = EVP_DigestFinal_ex(ctx,local_88,&local_90);
      uVar1 = local_90;
      if (iVar2 != 0) {
        iVar2 = ECDSA_size(*(EC_KEY **)(param_1 + 0x10));
        if (((ulong)(long)iVar2 <= param_4) &&
           (((ulong)uVar1 == *(ulong *)(param_1 + 0x168) || (*(ulong *)(param_1 + 0x168) == 0)))) {
          iVar2 = ossl_sm2_internal_sign
                            (local_88,uVar1,param_2,&local_8c,*(undefined8 *)(param_1 + 0x10));
          if (0 < iVar2) {
            *param_3 = (ulong)local_8c;
            goto LAB_00100e5e;
          }
        }
      }
    }
    else {
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
      d = (void *)CRYPTO_zalloc(*(undefined8 *)(param_1 + 0x168),
                                "providers/implementations/signature/sm2_sig.c",0x10b);
      if (d == (void *)0x0) {
        CRYPTO_free((void *)0x0);
      }
      else {
        iVar2 = ossl_sm2_compute_z_digest
                          (d,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x170),
                           *(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x10));
        if (iVar2 != 0) {
          iVar2 = EVP_DigestUpdate(*(EVP_MD_CTX **)(param_1 + 0x160),d,*(size_t *)(param_1 + 0x168))
          ;
          if (iVar2 != 0) {
            CRYPTO_free(d);
            ctx = *(EVP_MD_CTX **)(param_1 + 0x160);
            goto LAB_00100df0;
          }
        }
        CRYPTO_free(d);
      }
    }
  }
  uVar3 = 0;
LAB_00100ed2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



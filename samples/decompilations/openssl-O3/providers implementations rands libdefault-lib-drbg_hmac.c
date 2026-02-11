
undefined1 * drbg_hmac_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_1;
}



undefined1 * drbg_hmac_settable_ctx_params(void)

{
  return known_settable_ctx_params_0;
}



bool do_hmac(undefined8 *param_1,undefined1 param_2,long param_3,long param_4,long param_5,
            long param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_3c [12];
  
  puVar1 = param_1 + 5;
  uVar3 = *param_1;
  local_3c[0] = param_2;
  iVar4 = EVP_MAC_init(uVar3,puVar1,param_1[4],0);
  if (iVar4 != 0) {
    puVar2 = param_1 + 0xd;
    iVar4 = EVP_MAC_update(uVar3,puVar2,param_1[4]);
    if ((((((iVar4 != 0) && (iVar4 = EVP_MAC_update(uVar3,local_3c,1), iVar4 != 0)) &&
          ((param_3 == 0 ||
           ((param_4 == 0 || (iVar4 = EVP_MAC_update(uVar3,param_3,param_4), iVar4 != 0)))))) &&
         ((param_5 == 0 ||
          ((param_6 == 0 || (iVar4 = EVP_MAC_update(uVar3,param_5,param_6), iVar4 != 0)))))) &&
        (((param_7 == 0 ||
          ((param_8 == 0 || (iVar4 = EVP_MAC_update(uVar3,param_7,param_8), iVar4 != 0)))) &&
         (iVar4 = EVP_MAC_final(uVar3,puVar1,0,0x40), iVar4 != 0)))) &&
       ((iVar4 = EVP_MAC_init(uVar3,puVar1,param_1[4],0), iVar4 != 0 &&
        (iVar4 = EVP_MAC_update(uVar3,puVar2,param_1[4]), iVar4 != 0)))) {
      iVar4 = EVP_MAC_final(uVar3,puVar2,0,0x40);
      return iVar4 != 0;
    }
  }
  return false;
}



undefined4 drbg_hmac_verify_zeroization(long *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar1 = param_1[0x1e];
  lVar4 = *param_1;
  if (lVar4 != 0) {
    iVar2 = CRYPTO_THREAD_read_lock();
    if (iVar2 == 0) {
      return 0;
    }
    lVar4 = *param_1;
  }
  pcVar3 = (char *)(lVar1 + 0x28);
  do {
    if (*pcVar3 != '\0') goto LAB_001001d6;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0x68));
  do {
    if (*pcVar3 != '\0') goto LAB_001001d6;
    pcVar3 = pcVar3 + 1;
  } while (pcVar3 != (char *)(lVar1 + 0xa8));
  uVar5 = 1;
LAB_001001d9:
  if (lVar4 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar5;
LAB_001001d6:
  uVar5 = 0;
  goto LAB_001001d9;
}



undefined4 drbg_hmac_get_ctx_params(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  plVar1 = (long *)param_1[0x1e];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  iVar2 = ossl_drbg_get_ctx_params_no_lock(param_1,param_2,&local_34);
  if (iVar2 == 0) {
LAB_00100350:
    uVar3 = 0;
    goto LAB_00100326;
  }
  if (local_34 != 0) {
    uVar3 = 1;
    goto LAB_00100326;
  }
  if (*param_1 != 0) {
    iVar2 = CRYPTO_THREAD_read_lock();
    if (iVar2 == 0) goto LAB_00100350;
  }
  lVar4 = OSSL_PARAM_locate(param_2,&_LC0);
  uVar3 = 0;
  if (lVar4 == 0) {
LAB_001002c6:
    lVar4 = OSSL_PARAM_locate(param_2,"digest");
    if (lVar4 == 0) {
LAB_00100302:
      uVar3 = ossl_drbg_get_ctx_params(param_1,param_2);
    }
    else {
      lVar6 = ossl_prov_digest_md(plVar1 + 1);
      if (lVar6 != 0) {
        uVar5 = EVP_MD_get0_name(lVar6);
        iVar2 = OSSL_PARAM_set_utf8_string(lVar4,uVar5);
        if (iVar2 != 0) goto LAB_00100302;
      }
    }
  }
  else if (*plVar1 != 0) {
    uVar5 = EVP_MAC_CTX_get0_mac();
    uVar5 = EVP_MAC_get0_name(uVar5);
    iVar2 = OSSL_PARAM_set_utf8_string(lVar4,uVar5);
    if (iVar2 != 0) goto LAB_001002c6;
  }
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
LAB_00100326:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void drbg_hmac_reseed_wrapper(void)

{
  ossl_prov_drbg_reseed();
  return;
}



void drbg_hmac_generate_wrapper(void)

{
  ossl_prov_drbg_generate();
  return;
}



void drbg_hmac_uninstantiate(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf0);
  OPENSSL_cleanse((void *)(lVar1 + 0x28),0x40);
  OPENSSL_cleanse((void *)(lVar1 + 0x68),0x40);
  ossl_prov_drbg_uninstantiate(param_1);
  return;
}



void drbg_hmac_free(long param_1)

{
  undefined8 *puVar1;
  
  if ((param_1 != 0) && (puVar1 = *(undefined8 **)(param_1 + 0xf0), puVar1 != (undefined8 *)0x0)) {
    EVP_MAC_CTX_free(*puVar1);
    ossl_prov_digest_reset(puVar1 + 1);
    CRYPTO_secure_clear_free(puVar1,0xa8,"providers/implementations/rands/drbg_hmac.c",0x161);
  }
  ossl_rand_drbg_free(param_1);
  return;
}



void drbg_hmac_new_wrapper(void)

{
  ossl_rand_drbg_new();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 drbg_hmac_new(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = CRYPTO_secure_zalloc(0xa8,"providers/implementations/rands/drbg_hmac.c",0x13e);
  uVar2 = _UNK_00101418;
  uVar1 = __LC3;
  if (lVar3 != 0) {
    *(long *)(param_1 + 0xf0) = lVar3;
    *(undefined8 *)(param_1 + 0x90) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0xb0) = 0x7fffffff;
    *(undefined8 *)(param_1 + 0x80) = 0x10000;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
    return 1;
  }
  return 0;
}



undefined8 drbg_hmac_set_ctx_params_locked(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  plVar1 = *(long **)(param_1 + 0xf0);
  uVar3 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
  ERR_set_mark();
  if ((((plVar1 != (long *)0x0) &&
       (lVar4 = OSSL_PARAM_locate_const(param_2,"provider-name"), lVar4 != 0)) &&
      (*(int *)(lVar4 + 8) == 4)) &&
     (lVar4 = ossl_provider_find(uVar3,*(undefined8 *)(lVar4 + 0x10),1), lVar4 != 0)) {
    lVar6 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar6 == 0) {
LAB_00100685:
      lVar7 = OSSL_PARAM_locate_const(param_2,&_LC0);
      if (lVar7 == 0) {
LAB_001006ec:
        ossl_provider_free(lVar4);
        ERR_clear_last_mark();
        if (lVar6 != 0) {
          ossl_prov_digest_set_md(plVar1 + 1,lVar6);
        }
        goto LAB_00100551;
      }
      if (*(int *)(lVar7 + 8) == 4) {
        EVP_MAC_CTX_free(*plVar1);
        *plVar1 = 0;
        lVar7 = evp_mac_fetch_from_prov(lVar4,*(undefined8 *)(lVar7 + 0x10),0);
        if (lVar7 != 0) {
          lVar8 = EVP_MAC_CTX_new(lVar7);
          *plVar1 = lVar8;
          EVP_MAC_free(lVar7);
          goto LAB_001006ec;
        }
      }
    }
    else if ((*(int *)(lVar6 + 8) == 4) &&
            (lVar6 = evp_digest_fetch_from_prov(lVar4,*(undefined8 *)(lVar6 + 0x10),0), lVar6 != 0))
    {
      EVP_MD_free(0);
      goto LAB_00100685;
    }
    ossl_provider_free(lVar4);
  }
  ERR_pop_to_mark();
  iVar2 = ossl_prov_digest_load_from_params(plVar1 + 1,param_2,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = ossl_prov_macctx_load_from_params(plVar1,param_2,0,0,0,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00100551:
  lVar4 = ossl_prov_digest_md(plVar1 + 1);
  if (lVar4 != 0) {
    iVar2 = ossl_drbg_verify_digest(param_1,uVar3,lVar4);
    if (iVar2 == 0) {
      return 0;
    }
    if (*plVar1 != 0) {
      iVar2 = EVP_MD_get_size(lVar4);
      if (iVar2 < 1) {
        return 0;
      }
      uVar5 = (ulong)iVar2;
      plVar1[4] = uVar5;
      uVar10 = (int)(uVar5 >> 3) * 0x40;
      if ((int)uVar10 < 0x101) {
        uVar9 = (ulong)(uVar10 >> 3);
        uVar11 = (ulong)(uVar10 >> 4);
      }
      else {
        uVar11 = 0x10;
        uVar9 = 0x20;
        uVar10 = 0x100;
      }
      *(uint *)(param_1 + 0x78) = uVar10;
      *(ulong *)(param_1 + 0xe0) = uVar5;
      *(ulong *)(param_1 + 0x88) = uVar9;
      *(ulong *)(param_1 + 0x98) = uVar11;
    }
  }
  uVar3 = ossl_drbg_set_ctx_params(param_1,param_2);
  return uVar3;
}



undefined4 drbg_hmac_set_ctx_params(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  uVar2 = drbg_hmac_set_ctx_params_locked(param_1,param_2);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar2;
}



undefined4
drbg_hmac_instantiate_wrapper
          (long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 != 0) && (iVar1 = CRYPTO_THREAD_write_lock(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (iVar1 = drbg_hmac_set_ctx_params_locked(param_1,param_6), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = ossl_prov_drbg_instantiate(param_1,param_2,param_3,param_4,param_5);
  }
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar2;
}



undefined4 drbg_hmac_uninstantiate_wrapper(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*param_1 != 0) && (iVar2 = CRYPTO_THREAD_write_lock(), iVar2 == 0)) {
    return 0;
  }
  lVar1 = param_1[0x1e];
  OPENSSL_cleanse((void *)(lVar1 + 0x28),0x40);
  OPENSSL_cleanse((void *)(lVar1 + 0x68),0x40);
  uVar3 = ossl_prov_drbg_uninstantiate(param_1);
  if (*param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
  return uVar3;
}



undefined8 drbg_hmac_reseed(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  uVar5 = *puVar3;
  puVar1 = puVar3 + 5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_41 = 0;
  iVar4 = EVP_MAC_init(uVar5,puVar1,puVar3[4],0);
  if (iVar4 != 0) {
    puVar2 = puVar3 + 0xd;
    iVar4 = EVP_MAC_update(uVar5,puVar2,puVar3[4]);
    if (((((iVar4 != 0) && (iVar4 = EVP_MAC_update(uVar5,&local_41,1), iVar4 != 0)) &&
         ((param_2 == 0 ||
          ((param_3 == 0 || (iVar4 = EVP_MAC_update(uVar5,param_2,param_3), iVar4 != 0)))))) &&
        ((param_4 == 0 ||
         ((param_5 == 0 || (iVar4 = EVP_MAC_update(uVar5,param_4,param_5), iVar4 != 0)))))) &&
       ((iVar4 = EVP_MAC_final(uVar5,puVar1,0,0x40), iVar4 != 0 &&
        (((iVar4 = EVP_MAC_init(uVar5,puVar1,puVar3[4],0), iVar4 != 0 &&
          (iVar4 = EVP_MAC_update(uVar5,puVar2,puVar3[4]), iVar4 != 0)) &&
         (iVar4 = EVP_MAC_final(uVar5,puVar2,0,0x40), iVar4 != 0)))))) {
      uVar5 = 1;
      if (param_3 != 0 || param_5 != 0) {
        uVar5 = do_hmac(puVar3,1,param_2,param_3,param_4,param_5,0,0);
      }
      goto LAB_001008da;
    }
  }
  uVar5 = 0;
LAB_001008da:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
ossl_drbg_hmac_init(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                   long param_7)

{
  long *__s;
  long *__s_00;
  long lVar1;
  size_t __n;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/rands/drbg_hmac.c",0x7b,"ossl_drbg_hmac_init");
    ERR_set_error(0x39,0x96,0);
  }
  else {
    __n = param_1[4];
    __s = param_1 + 5;
    memset(__s,0,__n);
    __s_00 = param_1 + 0xd;
    memset(__s_00,1,__n);
    local_41 = 0;
    iVar2 = EVP_MAC_init(lVar1,__s,__n,0);
    if (((((iVar2 != 0) && (iVar2 = EVP_MAC_update(lVar1,__s_00,param_1[4]), iVar2 != 0)) &&
         (iVar2 = EVP_MAC_update(lVar1,&local_41,1), iVar2 != 0)) &&
        (((param_2 == 0 || (param_3 == 0)) ||
         (iVar2 = EVP_MAC_update(lVar1,param_2,param_3), iVar2 != 0)))) &&
       ((((param_4 == 0 || (param_5 == 0)) ||
         (iVar2 = EVP_MAC_update(lVar1,param_4,param_5), iVar2 != 0)) &&
        (((((param_6 == 0 || (param_7 == 0)) ||
           (iVar2 = EVP_MAC_update(lVar1,param_6,param_7), iVar2 != 0)) &&
          ((iVar2 = EVP_MAC_final(lVar1,__s,0,0x40), iVar2 != 0 &&
           (iVar2 = EVP_MAC_init(lVar1,__s,param_1[4],0), iVar2 != 0)))) &&
         ((iVar2 = EVP_MAC_update(lVar1,__s_00,param_1[4]), iVar2 != 0 &&
          (iVar2 = EVP_MAC_final(lVar1,__s_00,0,0x40), iVar2 != 0)))))))) {
      uVar3 = 1;
      if ((param_7 != 0 || param_5 != 0) || param_3 != 0) {
        uVar3 = do_hmac(param_1,1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      goto LAB_00100aae;
    }
  }
  uVar3 = 0;
LAB_00100aae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void drbg_hmac_instantiate(long param_1)

{
  ossl_drbg_hmac_init(*(undefined8 *)(param_1 + 0xf0));
  return;
}



bool ossl_drbg_hmac_generate
               (undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *__src;
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *__dest;
  undefined8 *puVar4;
  
  __src = param_1 + 0xd;
  uVar1 = *param_1;
  if (((param_4 == 0) || (param_5 == 0)) ||
     ((iVar2 = do_hmac(param_1,0,param_4,param_5,0,0,0,0), iVar2 != 0 &&
      (iVar2 = do_hmac(param_1,1,param_4,param_5,0,0,0,0), iVar2 != 0)))) {
    lVar3 = param_1[4];
    puVar4 = __src;
    while( true ) {
      __dest = param_2;
      iVar2 = EVP_MAC_init(uVar1,param_1 + 5,lVar3,0);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = EVP_MAC_update(uVar1,puVar4,param_1[4]);
      if (iVar2 == 0) {
        return false;
      }
      if (param_3 <= (ulong)param_1[4]) break;
      iVar2 = EVP_MAC_final(uVar1,__dest,0);
      if (iVar2 == 0) {
        return false;
      }
      lVar3 = param_1[4];
      param_3 = param_3 - lVar3;
      param_2 = (undefined8 *)((long)__dest + lVar3);
      puVar4 = __dest;
    }
    iVar2 = EVP_MAC_final(uVar1,__src,0,0x40);
    if (iVar2 != 0) {
      memcpy(__dest,__src,param_3);
      iVar2 = do_hmac(param_1,0,param_4,param_5,0,0,0,0);
      if (iVar2 != 0) {
        if (param_5 != 0) {
          iVar2 = do_hmac(param_1,1,param_4,param_5,0,0,0,0);
          return iVar2 != 0;
        }
        return true;
      }
    }
  }
  return false;
}



void drbg_hmac_generate(long param_1)

{
  ossl_drbg_hmac_generate(*(undefined8 *)(param_1 + 0xf0));
  return;
}



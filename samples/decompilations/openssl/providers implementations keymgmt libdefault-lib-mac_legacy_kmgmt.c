
undefined1 * mac_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = mac_key_types;
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * cmac_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = cmac_key_types;
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * mac_gettable_params(void)

{
  return gettable_params_3;
}



undefined1 * cmac_gettable_params(void)

{
  return gettable_params_0;
}



undefined1 * mac_settable_params(void)

{
  return settable_params_4;
}



undefined1 * mac_gen_settable_params(void)

{
  return settable_7;
}



undefined1 * cmac_gen_settable_params(void)

{
  return settable_2;
}



void mac_gen_cleanup(void *param_1)

{
  CRYPTO_secure_clear_free
            (*(undefined8 *)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x18),
             "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20a);
  ossl_prov_cipher_reset((long)param_1 + 0x20);
  CRYPTO_free(param_1);
  return;
}



undefined8 mac_gen_set_params(long param_1,undefined8 param_2)

{
  long lVar1;
  void *__dest;
  
  if (param_1 != 0) {
    lVar1 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(int *)(lVar1 + 8) == 5) {
      __dest = (void *)CRYPTO_secure_malloc
                                 (*(undefined8 *)(lVar1 + 0x18),
                                  "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac);
      *(void **)(param_1 + 0x10) = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(lVar1 + 0x10),*(size_t *)(lVar1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
        return 1;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1a9,
                    "mac_gen_set_params");
      ERR_set_error(0x39,0x80106,0);
    }
  }
  return 0;
}



undefined4 mac_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 == 0) || (iVar1 == 0)) || ((param_2 & 1) == 0)) {
    return 0;
  }
  lVar3 = OSSL_PARAM_BLD_new();
  if (lVar3 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (iVar1 = ossl_param_build_set_octet_string
                        (lVar3,0,&_LC1,*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)),
     iVar1 != 0)) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar4 = EVP_CIPHER_get0_name();
      iVar1 = ossl_param_build_set_utf8_string(lVar3,0,"cipher",uVar4);
      if (iVar1 == 0) goto LAB_001002a8;
    }
    if (*(ENGINE **)(param_1 + 0x30) != (ENGINE *)0x0) {
      pcVar5 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x30));
      iVar1 = ossl_param_build_set_utf8_string(lVar3,0,"engine",pcVar5);
      if (iVar1 == 0) goto LAB_001002a8;
    }
    lVar6 = OSSL_PARAM_BLD_to_param(lVar3);
    if (lVar6 != 0) {
      uVar2 = (*param_3)(lVar6,param_4);
      OSSL_PARAM_free(lVar6);
      goto LAB_00100288;
    }
  }
LAB_001002a8:
  uVar2 = 0;
LAB_00100288:
  OSSL_PARAM_BLD_free(lVar3);
  return uVar2;
}



bool mac_key_fromdata(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
  if (lVar2 == 0) {
LAB_0010037a:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) {
        ERR_new();
        uVar4 = 0xcc;
        goto LAB_001002f2;
      }
      CRYPTO_free((void *)param_1[7]);
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xd0);
      param_1[7] = pcVar3;
      if (pcVar3 == (char *)0x0) goto LAB_00100311;
    }
    if (*(int *)(param_1 + 8) != 0) {
      iVar1 = ossl_prov_cipher_load_from_params(param_1 + 4,param_2,*param_1);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0xd7;
        goto LAB_001002f2;
      }
    }
    bVar6 = param_1[2] != 0;
  }
  else {
    if (*(int *)(lVar2 + 8) == 5) {
      CRYPTO_secure_clear_free
                (param_1[2],param_1[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc0);
      lVar5 = *(long *)(lVar2 + 0x18);
      if (lVar5 == 0) {
        lVar5 = 1;
      }
      __dest = (void *)CRYPTO_secure_malloc
                                 (lVar5,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0xc2)
      ;
      param_1[2] = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
        param_1[3] = *(undefined8 *)(lVar2 + 0x18);
        goto LAB_0010037a;
      }
    }
    else {
      ERR_new();
      uVar4 = 0xbd;
LAB_001002f2:
      ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar4,"mac_key_fromdata")
      ;
      ERR_set_error(0x39,0x80106,0);
    }
LAB_00100311:
    bVar6 = false;
  }
  return bVar6;
}



bool mac_match(long param_1,long param_2,ulong param_3)

{
  void *a;
  void *b;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((param_3 & 1) == 0) {
      return true;
    }
    a = *(void **)(param_1 + 0x10);
    b = *(void **)(param_2 + 0x10);
    if (a == (void *)0x0) {
      if (b != (void *)0x0) {
        return false;
      }
    }
    else if (b == (void *)0x0) {
      return false;
    }
    if (*(size_t *)(param_1 + 0x18) != *(size_t *)(param_2 + 0x18)) {
      return false;
    }
    lVar2 = *(long *)(param_2 + 0x20);
    if (*(long *)(param_1 + 0x20) == 0) {
      if (lVar2 != 0) {
        return false;
      }
      if (a == (void *)0x0) {
        return true;
      }
    }
    else {
      if (lVar2 == 0) {
        return false;
      }
      if (a == (void *)0x0) goto LAB_001004df;
    }
    iVar1 = CRYPTO_memcmp(a,b,*(size_t *)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        return true;
      }
      lVar2 = *(long *)(param_2 + 0x20);
LAB_001004df:
      uVar3 = EVP_CIPHER_get0_name(lVar2);
      iVar1 = EVP_CIPHER_is_a(*(undefined8 *)(param_1 + 0x20),uVar3);
      return iVar1 != 0;
    }
  }
  return false;
}



bool mac_has(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_1 == 0) || (iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if ((param_2 & 1) != 0) {
      return *(long *)(param_1 + 0x10) != 0;
    }
  }
  return bVar1;
}



undefined8 mac_import(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 1) != 0)) {
    uVar2 = mac_key_fromdata(param_1,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 mac_set_params(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = OSSL_PARAM_locate_const(param_2,&_LC1);
  if (lVar1 == 0) {
    return 1;
  }
  uVar2 = mac_key_fromdata(param_1,param_2);
  return uVar2;
}



bool mac_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  bool bVar4;
  
  if (param_1 == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (iVar1 = ossl_param_build_set_octet_string
                        (0,param_2,&_LC1,*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)),
     iVar1 == 0)) {
    return false;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = EVP_CIPHER_get0_name();
    iVar1 = ossl_param_build_set_utf8_string(0,param_2,"cipher",uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  bVar4 = true;
  if (*(ENGINE **)(param_1 + 0x30) != (ENGINE *)0x0) {
    pcVar3 = ENGINE_get_id(*(ENGINE **)(param_1 + 0x30));
    iVar1 = ossl_param_build_set_utf8_string(0,param_2,"engine",pcVar3);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}



undefined8 * mac_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (ptr = (undefined8 *)
            CRYPTO_zalloc(0x38,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x17f),
     ptr != (undefined8 *)0x0)) {
    *ptr = uVar2;
    *(undefined4 *)(ptr + 1) = param_2;
    iVar1 = mac_gen_set_params(ptr,param_3);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_secure_clear_free
              (ptr[2],ptr[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20a);
    ossl_prov_cipher_reset(ptr + 4);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 * cmac_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)
          CRYPTO_zalloc(0x38,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x17f);
    if (ptr != (undefined8 *)0x0) {
      *(undefined4 *)(ptr + 1) = param_2;
      *ptr = uVar2;
      iVar1 = mac_gen_set_params(ptr,param_3);
      if (iVar1 != 0) {
        iVar1 = ossl_prov_cipher_load_from_params(ptr + 4,param_3,*ptr);
        if (iVar1 != 0) {
          return ptr;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1bf,
                      "cmac_gen_set_params");
        ERR_set_error(0x39,0x80106,0);
      }
      CRYPTO_secure_clear_free
                (ptr[2],ptr[3],"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x20a);
      ossl_prov_cipher_reset(ptr + 4);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 cmac_gen_set_params(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) != 5) {
      ERR_new();
      pcVar3 = "mac_gen_set_params";
      uVar4 = 0x1a9;
      goto LAB_00100895;
    }
    __dest = (void *)CRYPTO_secure_malloc
                               (*(undefined8 *)(lVar2 + 0x18),
                                "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ac);
    param_1[2] = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
    param_1[3] = *(undefined8 *)(lVar2 + 0x18);
  }
  iVar1 = ossl_prov_cipher_load_from_params(param_1 + 4,param_2,*param_1);
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  pcVar3 = "cmac_gen_set_params";
  uVar4 = 0x1bf;
LAB_00100895:
  ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",uVar4,pcVar3);
  ERR_set_error(0x39,0x80106,0);
  return 0;
}



undefined8 * ossl_mac_key_new(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x48,"providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x47);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(undefined4 *)(puVar2 + 1) = 1;
      UNLOCK();
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 8) = param_2;
    }
  }
  return puVar2;
}



void mac_new(void)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  ossl_mac_key_new(uVar1,0);
  return;
}



void mac_new_cmac(void)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  ossl_mac_key_new(uVar1,1);
  return;
}



void ossl_mac_key_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_secure_clear_free
            (*(undefined8 *)((long)param_1 + 0x10),*(undefined8 *)((long)param_1 + 0x18),
             "providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x60);
  CRYPTO_free(*(void **)((long)param_1 + 0x38));
  ossl_prov_cipher_reset((long)param_1 + 0x20);
  CRYPTO_free(param_1);
  return;
}



long mac_gen(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != (undefined8 *)0x0) && (iVar1 != 0)) {
    lVar2 = ossl_mac_key_new(*param_1,0);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1e4,"mac_gen");
      ERR_set_error(0x39,0x80039,0);
      return 0;
    }
    if ((*(byte *)(param_1 + 1) & 3) == 0) {
      return lVar2;
    }
    if (param_1[2] == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1ed,"mac_gen");
      ERR_set_error(0x39,0x9e,0);
      ossl_mac_key_free(lVar2);
      return 0;
    }
    iVar1 = ossl_prov_cipher_copy(lVar2 + 0x20,param_1 + 4);
    if (iVar1 != 0) {
      ossl_prov_cipher_reset(param_1 + 4);
      *(undefined8 *)(lVar2 + 0x10) = param_1[2];
      *(undefined8 *)(lVar2 + 0x18) = param_1[3];
      param_1[3] = 0;
      param_1[2] = 0;
      return lVar2;
    }
    ossl_mac_key_free(lVar2);
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/mac_legacy_kmgmt.c",0x1fa,"mac_gen");
    ERR_set_error(0x39,0xc0103,0);
  }
  return 0;
}



void mac_free(void)

{
  ossl_mac_key_free();
  return;
}



undefined8 ossl_mac_key_up_ref(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return 1;
}



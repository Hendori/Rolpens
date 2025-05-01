
undefined1 * ecx_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = ecx_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * x25519_gettable_params(void)

{
  return ecx_gettable_params;
}



undefined1 * ed25519_gettable_params(void)

{
  return ed_gettable_params;
}



undefined8 ed25519_set_params(void)

{
  return 1;
}



undefined1 * x25519_settable_params(void)

{
  return ecx_settable_params;
}



undefined1 * ed25519_settable_params(void)

{
  return ed_settable_params;
}



undefined1 * ecx_gen_settable_params(void)

{
  return settable_2;
}



undefined8 ecx_load(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar2 != 0)) {
    uVar1 = *param_1;
    *param_1 = 0;
    return uVar1;
  }
  return 0;
}



bool ecx_has(long param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == 0)) ||
     (((param_2 & 2) != 0 && ((*(byte *)(param_1 + 0x10) & 1) == 0)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if ((param_2 & 1) != 0) {
      bVar2 = *(long *)(param_1 + 0x50) != 0;
    }
  }
  return bVar2;
}



undefined8 ecx_dup(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_ecx_key_dup(param_1,param_2);
  return uVar2;
}



void ecx_gen_cleanup(void *param_1)

{
  CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x18),*(undefined8 *)((long)param_1 + 0x20),
                    "providers/implementations/keymgmt/ecx_kmgmt.c",0x34e);
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



bool ecx_gen_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate_const(param_2,"group");
  if (lVar2 == 0) {
LAB_00100217:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 == 0) {
LAB_001002c7:
      lVar2 = OSSL_PARAM_locate_const(param_2,"dhkem-ikm");
      if (lVar2 == 0) {
        return true;
      }
      if (*(long *)(lVar2 + 0x18) == 0) {
        return true;
      }
      if (*(long *)(lVar2 + 0x10) == 0) {
        return true;
      }
      CRYPTO_free(*(void **)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x18,0,param_1 + 0x20);
      return iVar1 != 0;
    }
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(*(void **)(param_1 + 8));
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/ecx_kmgmt.c",0x247);
      *(char **)(param_1 + 8) = pcVar3;
      if (pcVar3 != (char *)0x0) goto LAB_001002c7;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      pcVar3 = "x25519";
      if (*(int *)(lVar2 + 8) == 4) goto LAB_0010020a;
    }
    else if ((*(int *)(param_1 + 0x10) == 1) && (*(int *)(lVar2 + 8) == 4)) {
      pcVar3 = "x448";
LAB_0010020a:
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar2 + 0x10),pcVar3);
      if (iVar1 == 0) goto LAB_00100217;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x23e,"ecx_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
  }
  return false;
}



undefined8 x25519_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_ecx_key_new(uVar2,0,0,0);
    return uVar2;
  }
  return 0;
}



undefined8 x448_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_ecx_key_new(uVar2,1,0,0);
    return uVar2;
  }
  return 0;
}



undefined8 ed25519_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_ecx_key_new(uVar2,2,0,0);
    return uVar2;
  }
  return 0;
}



undefined8 ed448_new_key(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_ecx_key_new(uVar2,3,0,0);
    return uVar2;
  }
  return 0;
}



undefined4 ecx_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 3) != 0)) &&
     (lVar3 = OSSL_PARAM_BLD_new(), lVar3 != 0)) {
    iVar1 = ossl_param_build_set_octet_string
                      (lVar3,0,&_LC6,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58));
    if (((iVar1 == 0) ||
        ((((param_2 & 1) != 0 && (*(long *)(param_1 + 0x50) != 0)) &&
         (iVar1 = ossl_param_build_set_octet_string
                            (lVar3,0,&_LC7,*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)
                            ), iVar1 == 0)))) ||
       (lVar4 = OSSL_PARAM_BLD_to_param(lVar3), lVar4 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*param_3)(lVar4,param_4);
      OSSL_PARAM_free(lVar4);
    }
    OSSL_PARAM_BLD_free(lVar3);
    return uVar2;
  }
  return 0;
}



byte ecx_import(long param_1,byte param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return param_2 & 3;
    }
    iVar1 = ossl_ecx_key_fromdata(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}



ulong ecx_match(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    uVar2 = 1;
    if ((param_3 & 4) != 0) {
      uVar2 = (ulong)(*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60));
    }
    if ((param_3 & 3) != 0) {
      if ((((param_3 & 2) == 0) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) ||
         ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
        if ((param_3 & 1) != 0) {
          if ((*(void **)(param_1 + 0x50) != (void *)0x0) &&
             (*(void **)(param_2 + 0x50) != (void *)0x0)) {
            if ((int)uVar2 == 0) {
              return uVar2;
            }
            if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
              if (*(size_t *)(param_2 + 0x58) == *(size_t *)(param_1 + 0x58)) {
                iVar1 = CRYPTO_memcmp(*(void **)(param_1 + 0x50),*(void **)(param_2 + 0x50),
                                      *(size_t *)(param_1 + 0x58));
                return (ulong)(iVar1 == 0);
              }
              return 0;
            }
            return 0;
          }
        }
        return 0;
      }
      if ((int)uVar2 != 0) {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60)) {
          return 0;
        }
        if (*(size_t *)(param_2 + 0x58) != *(size_t *)(param_1 + 0x58)) {
          return 0;
        }
        iVar1 = CRYPTO_memcmp((void *)(param_1 + 0x11),(void *)(param_2 + 0x11),
                              *(size_t *)(param_1 + 0x58));
        uVar2 = (ulong)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}



undefined1 * ed448_settable_params(void)

{
  return ed_settable_params;
}



undefined1 * x448_settable_params(void)

{
  return ecx_settable_params;
}



undefined8 ed448_set_params(void)

{
  return 1;
}



undefined1 * ed448_gettable_params(void)

{
  return ed_gettable_params;
}



undefined1 * x448_gettable_params(void)

{
  return ecx_gettable_params;
}



bool x448_set_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    if (lVar2 != 0) {
      local_28 = param_1 + 0x11;
      if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x58)) {
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0x39,0);
        if (iVar1 != 0) {
          CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                            "providers/implementations/keymgmt/ecx_kmgmt.c",0x1a9);
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
          *(undefined8 *)(param_1 + 0x50) = 0;
          goto LAB_00100780;
        }
      }
LAB_00100716:
      bVar4 = false;
      goto LAB_00100725;
    }
LAB_00100780:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) goto LAB_00100716;
      pcVar3 = *(char **)(lVar2 + 0x10);
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      if (pcVar3 != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(pcVar3,"providers/implementations/keymgmt/ecx_kmgmt.c",0x192);
        bVar4 = pcVar3 != (char *)0x0;
        *(char **)(param_1 + 8) = pcVar3;
        goto LAB_00100725;
      }
    }
  }
  bVar4 = true;
LAB_00100725:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ed448_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  iVar2 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = ossl_ecx_key_new(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x2b2,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)ossl_ecx_key_allocate_privkey(lVar3);
  if (pbVar4 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",699,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
  }
  else {
    if ((param_1[3] == 0) || (param_1[4] == 0)) {
      iVar2 = RAND_priv_bytes_ex(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
      if (iVar2 < 1) goto LAB_001008e8;
    }
    else if ((*(int *)(param_1 + 2) - 2U < 2) ||
            (iVar2 = ossl_ecx_dhkem_derive_private(lVar3,pbVar4), iVar2 == 0)) goto LAB_001008e8;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = ossl_ed25519_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          ossl_x25519_public_from_private(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          ossl_x448_public_from_private(lVar3 + 0x11,pbVar4);
        }
        goto LAB_001008b8;
      }
      if (uVar1 != 3) goto LAB_001008b8;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_001008b8:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_001008e8:
  ossl_ecx_key_free(lVar3);
  return 0;
}



bool x25519_set_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    if (lVar2 != 0) {
      local_28 = param_1 + 0x11;
      if (*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0x58)) {
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0x39,0);
        if (iVar1 != 0) {
          CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                            "providers/implementations/keymgmt/ecx_kmgmt.c",0x1a9);
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
          *(undefined8 *)(param_1 + 0x50) = 0;
          goto LAB_00100ab0;
        }
      }
LAB_00100a46:
      bVar4 = false;
      goto LAB_00100a55;
    }
LAB_00100ab0:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) goto LAB_00100a46;
      pcVar3 = *(char **)(lVar2 + 0x10);
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      if (pcVar3 != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(pcVar3,"providers/implementations/keymgmt/ecx_kmgmt.c",0x192);
        bVar4 = pcVar3 != (char *)0x0;
        *(char **)(param_1 + 8) = pcVar3;
        goto LAB_00100a55;
      }
    }
  }
  bVar4 = true;
LAB_00100a55:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ed448_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC9);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x1c8), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0xe0), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x72), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return false;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if (*(uint *)(param_1 + 0x60) < 2) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,uVar3);
      if (iVar1 == 0) {
        return false;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x58);
    }
  }
  iVar1 = ossl_param_build_set_octet_string(0,param_2,&_LC6,param_1 + 0x11,uVar3);
  if (iVar1 == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (iVar1 = ossl_param_build_set_octet_string
                        (0,param_2,&_LC7,*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
     iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"mandatory-digest");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_utf8_string(lVar2,&_LC13);
  return iVar1 != 0;
}



undefined8 * ed25519_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/keymgmt/ecx_kmgmt.c",499);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(undefined4 *)(ptr + 2) = 2;
      *(undefined4 *)((long)ptr + 0x14) = param_2;
    }
    iVar1 = ecx_gen_set_params(ptr,param_3);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_clear_free(ptr[3],ptr[4],"providers/implementations/keymgmt/ecx_kmgmt.c",0x34e);
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 * ed448_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/keymgmt/ecx_kmgmt.c",499);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(undefined4 *)(ptr + 2) = 3;
      *(undefined4 *)((long)ptr + 0x14) = param_2;
    }
    iVar1 = ecx_gen_set_params(ptr,param_3);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_clear_free(ptr[3],ptr[4],"providers/implementations/keymgmt/ecx_kmgmt.c",0x34e);
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 * x25519_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/keymgmt/ecx_kmgmt.c",499);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(undefined4 *)(ptr + 2) = 0;
      *(undefined4 *)((long)ptr + 0x14) = param_2;
    }
    iVar1 = ecx_gen_set_params(ptr,param_3);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_clear_free(ptr[3],ptr[4],"providers/implementations/keymgmt/ecx_kmgmt.c",0x34e);
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 * x448_gen_init(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *ptr;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x28,"providers/implementations/keymgmt/ecx_kmgmt.c",499);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar2;
      *(undefined4 *)(ptr + 2) = 1;
      *(undefined4 *)((long)ptr + 0x14) = param_2;
    }
    iVar1 = ecx_gen_set_params(ptr,param_3);
    if (iVar1 != 0) {
      return ptr;
    }
    CRYPTO_clear_free(ptr[3],ptr[4],"providers/implementations/keymgmt/ecx_kmgmt.c",0x34e);
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool x25519_validate(long param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_68 [72];
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x58);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar3 = true;
    if ((param_2 & 3) == 0) goto LAB_00101040;
    if (lVar1 == 0x20) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 1) != 0) {
          bVar3 = *(long *)(param_1 + 0x50) != 0;
        }
        goto LAB_00101040;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        bVar3 = (bool)(param_2 & 1);
        if ((param_2 & 1) == 0) {
          bVar3 = true;
          goto LAB_00101040;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          if ((param_2 & 3) == 3) {
            ossl_x25519_public_from_private(auStack_68);
            iVar2 = CRYPTO_memcmp((void *)(param_1 + 0x11),auStack_68,*(size_t *)(param_1 + 0x58));
            bVar3 = iVar2 == 0;
          }
          goto LAB_00101040;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x3b5,"ecx_validate");
      ERR_set_error(0x39,0xad,0);
    }
  }
  bVar3 = false;
LAB_00101040:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ed25519_validate(undefined8 *param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_68 [72];
  long local_20;
  
  lVar1 = param_1[0xb];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar3 = true;
    if ((param_2 & 3) == 0) goto LAB_00101170;
    if (lVar1 == 0x20) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 1) != 0) {
          bVar3 = param_1[10] != 0;
        }
        goto LAB_00101170;
      }
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        bVar3 = (bool)(param_2 & 1);
        if ((param_2 & 1) == 0) {
          bVar3 = true;
          goto LAB_00101170;
        }
        if (param_1[10] != 0) {
          if ((param_2 & 3) != 3) goto LAB_00101170;
          iVar2 = ossl_ed25519_public_from_private(*param_1,auStack_68,param_1[10],param_1[1]);
          if (iVar2 != 0) {
            iVar2 = CRYPTO_memcmp((void *)((long)param_1 + 0x11),auStack_68,param_1[0xb]);
            bVar3 = iVar2 == 0;
            goto LAB_00101170;
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x3b5,"ecx_validate");
      ERR_set_error(0x39,0xad,0);
    }
  }
  bVar3 = false;
LAB_00101170:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool x448_validate(long param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_68 [72];
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x58);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar3 = true;
    if ((param_2 & 3) == 0) goto LAB_00101290;
    if (lVar1 == 0x38) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 1) != 0) {
          bVar3 = *(long *)(param_1 + 0x50) != 0;
        }
        goto LAB_00101290;
      }
      if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
        bVar3 = (bool)(param_2 & 1);
        if ((param_2 & 1) == 0) {
          bVar3 = true;
          goto LAB_00101290;
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          if ((param_2 & 3) == 3) {
            ossl_x448_public_from_private(auStack_68);
            iVar2 = CRYPTO_memcmp((void *)(param_1 + 0x11),auStack_68,*(size_t *)(param_1 + 0x58));
            bVar3 = iVar2 == 0;
          }
          goto LAB_00101290;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x3b5,"ecx_validate");
      ERR_set_error(0x39,0xad,0);
    }
  }
  bVar3 = false;
LAB_00101290:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ed448_validate(undefined8 *param_1,byte param_2)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_68 [72];
  long local_20;
  
  lVar1 = param_1[0xb];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar3 = true;
    if ((param_2 & 3) == 0) goto LAB_001013c0;
    if (lVar1 == 0x39) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 1) != 0) {
          bVar3 = param_1[10] != 0;
        }
        goto LAB_001013c0;
      }
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        bVar3 = (bool)(param_2 & 1);
        if ((param_2 & 1) == 0) {
          bVar3 = true;
          goto LAB_001013c0;
        }
        if (param_1[10] != 0) {
          if ((param_2 & 3) != 3) goto LAB_001013c0;
          iVar2 = ossl_ed448_public_from_private(*param_1,auStack_68,param_1[10],param_1[1]);
          if (iVar2 != 0) {
            iVar2 = CRYPTO_memcmp((void *)((long)param_1 + 0x11),auStack_68,param_1[0xb]);
            bVar3 = iVar2 == 0;
            goto LAB_001013c0;
          }
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x3b5,"ecx_validate");
      ERR_set_error(0x39,0xad,0);
    }
  }
  bVar3 = false;
LAB_001013c0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool x448_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC9);
  if ((((lVar2 == 0) || (iVar1 = OSSL_PARAM_set_int(lVar2,0x1c0), iVar1 != 0)) &&
      ((lVar2 = OSSL_PARAM_locate(param_2,"security-bits"), lVar2 == 0 ||
       (iVar1 = OSSL_PARAM_set_int(lVar2,0xe0), iVar1 != 0)))) &&
     ((lVar2 = OSSL_PARAM_locate(param_2,"max-size"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_set_int(lVar2,0x38), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
    if (lVar2 == 0) {
      if (param_1 == 0) {
        return false;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      if (*(uint *)(param_1 + 0x60) < 2) {
        iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,uVar3);
        if (iVar1 == 0) {
          return false;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x58);
      }
    }
    iVar1 = ossl_param_build_set_octet_string(0,param_2,&_LC6,param_1 + 0x11,uVar3);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        iVar1 = ossl_param_build_set_octet_string
                          (0,param_2,&_LC7,*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)
                          );
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}



bool x25519_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC9);
  if ((((lVar2 == 0) || (iVar1 = OSSL_PARAM_set_int(lVar2,0xfd), iVar1 != 0)) &&
      ((lVar2 = OSSL_PARAM_locate(param_2,"security-bits"), lVar2 == 0 ||
       (iVar1 = OSSL_PARAM_set_int(lVar2,0x80), iVar1 != 0)))) &&
     ((lVar2 = OSSL_PARAM_locate(param_2,"max-size"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_set_int(lVar2,0x20), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
    if (lVar2 == 0) {
      if (param_1 == 0) {
        return false;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      if (*(uint *)(param_1 + 0x60) < 2) {
        iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,uVar3);
        if (iVar1 == 0) {
          return false;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x58);
      }
    }
    iVar1 = ossl_param_build_set_octet_string(0,param_2,&_LC6,param_1 + 0x11,uVar3);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        iVar1 = ossl_param_build_set_octet_string
                          (0,param_2,&_LC7,*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)
                          );
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}



bool ed25519_get_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC9);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x100), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x80), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0x40), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return false;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if (*(uint *)(param_1 + 0x60) < 2) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,uVar3);
      if (iVar1 == 0) {
        return false;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x58);
    }
  }
  iVar1 = ossl_param_build_set_octet_string(0,param_2,&_LC6,param_1 + 0x11,uVar3);
  if (iVar1 == 0) {
    return false;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (iVar1 = ossl_param_build_set_octet_string
                        (0,param_2,&_LC7,*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58)),
     iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"mandatory-digest");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_utf8_string(lVar2,&_LC13);
  return iVar1 != 0;
}



long ed25519_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  iVar2 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = ossl_ecx_key_new(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x2b2,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)ossl_ecx_key_allocate_privkey(lVar3);
  if (pbVar4 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",699,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
  }
  else {
    if ((param_1[3] == 0) || (param_1[4] == 0)) {
      iVar2 = RAND_priv_bytes_ex(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
      if (iVar2 < 1) goto LAB_001018f8;
    }
    else if ((*(int *)(param_1 + 2) - 2U < 2) ||
            (iVar2 = ossl_ecx_dhkem_derive_private(lVar3,pbVar4), iVar2 == 0)) goto LAB_001018f8;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = ossl_ed25519_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          ossl_x25519_public_from_private(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          ossl_x448_public_from_private(lVar3 + 0x11,pbVar4);
        }
        goto LAB_001018c8;
      }
      if (uVar1 != 3) goto LAB_001018c8;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_001018c8:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_001018f8:
  ossl_ecx_key_free(lVar3);
  return 0;
}



long x448_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  iVar2 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = ossl_ecx_key_new(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x2b2,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)ossl_ecx_key_allocate_privkey(lVar3);
  if (pbVar4 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",699,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
  }
  else {
    if ((param_1[3] == 0) || (param_1[4] == 0)) {
      iVar2 = RAND_priv_bytes_ex(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
      if (iVar2 < 1) goto LAB_00101ae8;
    }
    else if ((*(int *)(param_1 + 2) - 2U < 2) ||
            (iVar2 = ossl_ecx_dhkem_derive_private(lVar3,pbVar4), iVar2 == 0)) goto LAB_00101ae8;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = ossl_ed25519_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          ossl_x25519_public_from_private(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          ossl_x448_public_from_private(lVar3 + 0x11,pbVar4);
        }
        goto LAB_00101ab8;
      }
      if (uVar1 != 3) goto LAB_00101ab8;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_00101ab8:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_00101ae8:
  ossl_ecx_key_free(lVar3);
  return 0;
}



long x25519_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  iVar2 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = ossl_ecx_key_new(*param_1,*(undefined4 *)(param_1 + 2),0,param_1[1]);
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x2b2,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x14) & 3) == 0) {
    return lVar3;
  }
  pbVar4 = (byte *)ossl_ecx_key_allocate_privkey(lVar3);
  if (pbVar4 == (byte *)0x0) {
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",699,"ecx_gen");
    ERR_set_error(0x39,0x80010,0);
  }
  else {
    if ((param_1[3] == 0) || (param_1[4] == 0)) {
      iVar2 = RAND_priv_bytes_ex(*param_1,pbVar4,*(undefined8 *)(lVar3 + 0x58),0);
      if (iVar2 < 1) goto LAB_00101cd8;
    }
    else if ((*(int *)(param_1 + 2) - 2U < 2) ||
            (iVar2 = ossl_ecx_dhkem_derive_private(lVar3,pbVar4), iVar2 == 0)) goto LAB_00101cd8;
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 == 2) {
      iVar2 = ossl_ed25519_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    else {
      if (uVar1 < 3) {
        if (uVar1 == 0) {
          *pbVar4 = *pbVar4 & 0xf8;
          pbVar4[0x1f] = pbVar4[0x1f] & 0x7f | 0x40;
          ossl_x25519_public_from_private(lVar3 + 0x11,pbVar4);
        }
        else {
          *pbVar4 = *pbVar4 & 0xfc;
          pbVar4[0x37] = pbVar4[0x37] | 0x80;
          ossl_x448_public_from_private(lVar3 + 0x11,pbVar4);
        }
        goto LAB_00101ca8;
      }
      if (uVar1 != 3) goto LAB_00101ca8;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_00101ca8:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_00101cd8:
  ossl_ecx_key_free(lVar3);
  return 0;
}



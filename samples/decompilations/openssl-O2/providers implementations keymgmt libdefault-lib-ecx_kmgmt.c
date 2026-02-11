
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



long ecx_gen(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  if (param_1 == (undefined8 *)0x0) {
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
      if (iVar2 < 1) goto LAB_0010028e;
    }
    else if ((*(int *)(param_1 + 2) - 2U < 2) ||
            (iVar2 = ossl_ecx_dhkem_derive_private(lVar3,pbVar4), iVar2 == 0)) goto LAB_0010028e;
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
        goto LAB_00100267;
      }
      if (uVar1 != 3) goto LAB_00100267;
      iVar2 = ossl_ed448_public_from_private(*param_1,lVar3 + 0x11,pbVar4,param_1[1]);
    }
    if (iVar2 != 0) {
LAB_00100267:
      *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) | 1;
      return lVar3;
    }
  }
LAB_0010028e:
  ossl_ecx_key_free(lVar3);
  return 0;
}



undefined8 x25519_gen(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ecx_gen(param_1);
    return uVar2;
  }
  return 0;
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
LAB_001003f7:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 == 0) {
LAB_001004a7:
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
      if (pcVar3 != (char *)0x0) goto LAB_001004a7;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      pcVar3 = "x25519";
      if (*(int *)(lVar2 + 8) == 4) goto LAB_001003ea;
    }
    else if ((*(int *)(param_1 + 0x10) == 1) && (*(int *)(lVar2 + 8) == 4)) {
      pcVar3 = "x448";
LAB_001003ea:
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar2 + 0x10),pcVar3);
      if (iVar1 == 0) goto LAB_001003f7;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ecx_kmgmt.c",0x23e,"ecx_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
  }
  return false;
}



bool ecx_set_params(long param_1,long *param_2)

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
          goto LAB_001005f0;
        }
      }
LAB_00100586:
      bVar4 = false;
      goto LAB_00100595;
    }
LAB_001005f0:
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 4) goto LAB_00100586;
      pcVar3 = *(char **)(lVar2 + 0x10);
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      if (pcVar3 != (char *)0x0) {
        pcVar3 = CRYPTO_strdup(pcVar3,"providers/implementations/keymgmt/ecx_kmgmt.c",0x192);
        bVar4 = pcVar3 != (char *)0x0;
        *(char **)(param_1 + 8) = pcVar3;
        goto LAB_00100595;
      }
    }
  }
  bVar4 = true;
LAB_00100595:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void x25519_set_params(void)

{
  ecx_set_params();
  return;
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



uint key_to_params(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = ossl_param_build_set_octet_string
                    (param_2,param_3,&_LC7,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if ((param_4 != 0) && (uVar2 = param_4, *(long *)(param_1 + 0x50) != 0)) {
      iVar1 = ossl_param_build_set_octet_string
                        (param_2,param_3,&_LC8,*(long *)(param_1 + 0x50),
                         *(undefined8 *)(param_1 + 0x58));
      return (uint)(iVar1 != 0);
    }
  }
  return uVar2;
}



undefined4 ecx_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 3) != 0)) {
    lVar3 = OSSL_PARAM_BLD_new();
    if (lVar3 != 0) {
      iVar1 = key_to_params(param_1,lVar3,0,param_2 & 1);
      if ((iVar1 == 0) || (lVar4 = OSSL_PARAM_BLD_to_param(lVar3), lVar4 == 0)) {
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



bool ecx_validate(undefined8 *param_1,byte param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar1 = param_1[0xb];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    bVar3 = true;
    if ((param_2 & 3) == 0) goto LAB_00100a00;
    if (lVar1 == param_4) {
      if ((param_2 & 2) == 0) {
        if ((param_2 & 1) != 0) {
          bVar3 = param_1[10] != 0;
        }
        goto LAB_00100a00;
      }
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        bVar3 = (bool)(param_2 & 1);
        if ((param_2 & 1) == 0) {
          bVar3 = true;
          goto LAB_00100a00;
        }
        if (param_1[10] != 0) {
          if ((param_2 & 3) == 3) {
            if (param_3 - 2U < 2) {
              if (param_3 == 2) {
                iVar2 = ossl_ed25519_public_from_private(*param_1,auStack_78,param_1[10],param_1[1])
                ;
                if (iVar2 == 0) {
                  bVar3 = false;
                  goto LAB_00100a00;
                }
              }
              else {
                iVar2 = ossl_ed448_public_from_private();
                if (iVar2 == 0) {
                  bVar3 = false;
                  goto LAB_00100a00;
                }
              }
            }
            else if (param_3 == 0) {
              ossl_x25519_public_from_private(auStack_78);
            }
            else {
              ossl_x448_public_from_private();
            }
            iVar2 = CRYPTO_memcmp((void *)((long)param_1 + 0x11),auStack_78,param_1[0xb]);
            bVar3 = iVar2 == 0;
          }
          goto LAB_00100a00;
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
LAB_00100a00:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void x25519_validate(undefined8 param_1,undefined8 param_2)

{
  ecx_validate(param_1,param_2,0,0x20);
  return;
}



void x448_validate(undefined8 param_1,undefined8 param_2)

{
  ecx_validate(param_1,param_2,1,0x38);
  return;
}



void ed25519_validate(undefined8 param_1,undefined8 param_2)

{
  ecx_validate(param_1,param_2,2,0x20);
  return;
}



void ed448_validate(undefined8 param_1,undefined8 param_2)

{
  ecx_validate(param_1,param_2,3,0x39);
  return;
}



undefined8
ecx_get_params(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC9);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_3), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_4), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,param_5), iVar1 == 0)) {
    return 0;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (((lVar2 != 0) && (*(uint *)(param_1 + 0x60) < 2)) &&
     (iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x11,*(undefined8 *)(param_1 + 0x58)),
     iVar1 == 0)) {
    return 0;
  }
  uVar3 = key_to_params(param_1,0,param_2,1);
  return uVar3;
}



void x25519_get_params(undefined8 param_1,undefined8 param_2)

{
  ecx_get_params(param_1,param_2,0xfd,0x80,0x20);
  return;
}



void x448_get_params(undefined8 param_1,undefined8 param_2)

{
  ecx_get_params(param_1,param_2,0x1c0,0xe0,0x38);
  return;
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



ulong ed25519_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = ecx_get_params(param_1,param_2,0x100,0x80,0x40);
  if ((int)uVar2 != 0) {
    lVar3 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    uVar2 = 1;
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_set_utf8_string(lVar3,&_LC13);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}



undefined8 ed448_set_params(void)

{
  return 1;
}



undefined1 * x448_settable_params(void)

{
  return ecx_settable_params;
}



undefined1 * ed448_settable_params(void)

{
  return ed_settable_params;
}



undefined1 * x448_gettable_params(void)

{
  return ecx_gettable_params;
}



undefined1 * ed448_gettable_params(void)

{
  return ed_gettable_params;
}



void x448_set_params(void)

{
  ecx_set_params();
  return;
}



ulong ed448_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = ecx_get_params(param_1,param_2,0x1c8,0xe0,0x72);
  if ((int)uVar2 != 0) {
    lVar3 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    uVar2 = 1;
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_set_utf8_string(lVar3,&_LC13);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}



undefined8 x448_gen(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ecx_gen(param_1);
    return uVar2;
  }
  return 0;
}



undefined8 ed25519_gen(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ecx_gen(param_1);
    return uVar2;
  }
  return 0;
}



undefined8 ed448_gen(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ecx_gen(param_1);
    return uVar2;
  }
  return 0;
}



undefined8 *
ecx_gen_init_isra_0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

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
      *(undefined4 *)(ptr + 2) = param_4;
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



void ed448_gen_init(void)

{
  ecx_gen_init_isra_0();
  return;
}



void ed25519_gen_init(void)

{
  ecx_gen_init_isra_0();
  return;
}



void x448_gen_init(void)

{
  ecx_gen_init_isra_0();
  return;
}



void x25519_gen_init(void)

{
  ecx_gen_init_isra_0();
  return;
}



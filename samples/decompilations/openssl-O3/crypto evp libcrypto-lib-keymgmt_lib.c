
undefined8 evp_keymgmt_util_try_import(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  bVar1 = false;
  lVar3 = param_2[1];
  if (lVar3 == 0) {
    bVar1 = true;
    lVar3 = evp_keymgmt_newdata(*param_2);
    param_2[1] = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/keymgmt_lib.c",0x25,"evp_keymgmt_util_try_import");
      ERR_set_error(6,0x80006,0);
      return 0;
    }
  }
  if ((*param_1 != 0) &&
     (iVar2 = evp_keymgmt_import(*param_2,lVar3,*(undefined4 *)(param_2 + 2),param_1), iVar2 == 0))
  {
    if (bVar1) {
      evp_keymgmt_freedata(*param_2,param_2[1]);
      param_2[1] = 0;
    }
    return 0;
  }
  return 1;
}



void op_cache_free(undefined8 *param_1)

{
  evp_keymgmt_freedata(*param_1,param_1[1]);
  EVP_KEYMGMT_free(*param_1);
  CRYPTO_free(param_1);
  return;
}



undefined8 evp_keymgmt_util_export(long param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = evp_keymgmt_export(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                               param_2,param_3,param_4);
    return uVar1;
  }
  return 0;
}



undefined8 evp_keymgmt_util_clear_operation_cache(long param_1)

{
  if (param_1 != 0) {
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x78),op_cache_free);
    *(undefined8 *)(param_1 + 0x78) = 0;
    return 1;
  }
  return 1;
}



long * evp_keymgmt_util_find_operation_cache(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x78));
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      plVar3 = (long *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x78),iVar4);
      if (((*(uint *)(plVar3 + 2) & param_3) == param_3) &&
         ((lVar1 = *plVar3, lVar1 == param_2 ||
          ((*(int *)(param_2 + 4) == *(int *)(lVar1 + 4) &&
           (*(long *)(param_2 + 0x20) == *(long *)(lVar1 + 0x20))))))) {
        return plVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar2);
  }
  return (long *)0x0;
}



undefined8
evp_keymgmt_util_cache_keydata(long param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
  }
  ptr = (undefined8 *)CRYPTO_malloc(0x18,"crypto/evp/keymgmt_lib.c",0x10c);
  if (ptr != (undefined8 *)0x0) {
    ptr[1] = param_3;
    *ptr = param_2;
    *(undefined4 *)(ptr + 2) = param_4;
    iVar1 = EVP_KEYMGMT_up_ref(param_2);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x78),ptr);
      if (iVar1 != 0) {
        return 1;
      }
      EVP_KEYMGMT_free(param_2);
      CRYPTO_free(ptr);
      return 0;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



long evp_keymgmt_util_export_to_provider(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (lVar4 = *(long *)(param_1 + 0x68), lVar4 != 0)) {
    lVar1 = *(long *)(param_1 + 0x60);
    if (lVar1 == param_2) goto LAB_00100451;
    if ((*(int *)(lVar1 + 4) == *(int *)(param_2 + 4)) &&
       (*(long *)(lVar1 + 0x20) == *(long *)(param_2 + 0x20))) goto LAB_00100451;
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 != 0) {
      if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x80)) {
        plVar5 = (long *)evp_keymgmt_util_find_operation_cache(param_1,param_2,param_3);
        uVar3 = *(undefined8 *)(param_1 + 0x38);
        if ((plVar5 != (long *)0x0) && (*plVar5 != 0)) {
          lVar4 = plVar5[1];
          CRYPTO_THREAD_unlock(uVar3);
          goto LAB_00100451;
        }
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x38);
      }
      CRYPTO_THREAD_unlock(uVar3);
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(long *)(lVar4 + 0xe0) != 0) {
        uVar3 = EVP_KEYMGMT_get0_name(param_2);
        iVar2 = EVP_KEYMGMT_is_a(lVar4,uVar3);
        if (iVar2 != 0) {
          local_40 = 0;
          local_48 = param_2;
          local_38 = param_3;
          iVar2 = evp_keymgmt_util_export(param_1,param_3,0x100000,&local_48);
          if (iVar2 != 0) {
            iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x38));
            if (iVar2 != 0) {
              lVar4 = evp_keymgmt_util_find_operation_cache(param_1,param_2,param_3);
              if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 8), lVar4 == 0)) {
                if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x80)) {
                  evp_keymgmt_util_clear_operation_cache(param_1);
                }
                iVar2 = evp_keymgmt_util_cache_keydata(param_1,param_2,local_40,param_3);
                if (iVar2 == 0) {
                  lVar4 = 0;
                  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
                  evp_keymgmt_freedata(param_2,local_40);
                }
                else {
                  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
                  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
                  lVar4 = local_40;
                }
              }
              else {
                CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x38));
                evp_keymgmt_freedata(param_2,local_40);
              }
              goto LAB_00100451;
            }
            evp_keymgmt_freedata(param_2,local_40);
          }
        }
      }
    }
  }
  lVar4 = 0;
LAB_00100451:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void evp_keymgmt_util_cache_keyinfo(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x68) != 0) {
    local_d4 = 0;
    local_d0 = 0;
    local_cc = 0;
    OSSL_PARAM_construct_int(&local_108,&_LC1,&local_d4);
    local_c8 = local_108;
    uStack_c0 = uStack_100;
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    local_a8 = local_e8;
    OSSL_PARAM_construct_int(&local_108,"security-bits",&local_d0);
    local_a0 = local_108;
    uStack_98 = uStack_100;
    local_80 = local_e8;
    local_90 = local_f8;
    uStack_88 = uStack_f0;
    OSSL_PARAM_construct_int(&local_108,"max-size",&local_cc);
    local_58 = local_e8;
    local_78 = local_108;
    uStack_70 = uStack_100;
    local_68 = local_f8;
    uStack_60 = uStack_f0;
    OSSL_PARAM_construct_end(&local_108);
    local_50 = local_108;
    uStack_48 = uStack_100;
    local_30 = local_e8;
    local_40 = local_f8;
    uStack_38 = uStack_f0;
    iVar1 = evp_keymgmt_get_params
                      (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),&local_c8);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x90) = local_cc;
      *(ulong *)(param_1 + 0x88) = CONCAT44(local_d0,local_d4);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 evp_keymgmt_util_assign_pkey(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    iVar1 = EVP_PKEY_set_type_by_keymgmt();
    if (iVar1 != 0) {
      *(long *)(param_1 + 0x68) = param_3;
      evp_keymgmt_util_cache_keyinfo(param_1);
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/evp/keymgmt_lib.c",0x41,"evp_keymgmt_util_assign_pkey");
  ERR_set_error(6,0xc0103,0);
  return 0;
}



EVP_PKEY * evp_keymgmt_util_make_pkey(long param_1,long param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      iVar1 = evp_keymgmt_util_assign_pkey(pkey,param_1,param_2);
      if (iVar1 != 0) {
        return pkey;
      }
      goto LAB_00100782;
    }
  }
  pkey = (EVP_PKEY *)0x0;
LAB_00100782:
  EVP_PKEY_free(pkey);
  return (EVP_PKEY *)0x0;
}



long evp_keymgmt_util_fromdata
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = evp_keymgmt_newdata(param_2);
  if (((lVar2 != 0) && (iVar1 = evp_keymgmt_import(param_2,lVar2,param_3,param_4), iVar1 != 0)) &&
     (iVar1 = evp_keymgmt_util_assign_pkey(param_1,param_2,lVar2), iVar1 != 0)) {
    return lVar2;
  }
  evp_keymgmt_freedata(param_2,lVar2);
  return 0;
}



undefined8 evp_keymgmt_util_has(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = evp_keymgmt_has(*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_2);
    return uVar1;
  }
  return 0;
}



ulong evp_keymgmt_util_match(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0 || param_2 == 0) {
    return (ulong)(param_2 == 0 && param_1 == 0);
  }
  lVar7 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_2 + 0x60);
  uVar5 = *(ulong *)(param_1 + 0x68);
  uVar2 = *(ulong *)(param_2 + 0x68);
  if (lVar7 == lVar6) {
    bVar8 = uVar5 == 0;
    bVar9 = uVar2 == 0;
    uVar4 = uVar2 | uVar5;
LAB_001009a2:
    if (uVar4 == 0) {
      return 1;
    }
    lVar7 = lVar6;
    if (bVar8) {
      return 0;
    }
  }
  else {
    if (lVar7 != 0) {
      if (lVar6 == 0) goto LAB_001008af;
      uVar3 = EVP_KEYMGMT_get0_name(lVar6);
      iVar1 = EVP_KEYMGMT_is_a(lVar7,uVar3);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/keymgmt_lib.c",0x180,"evp_keymgmt_util_match");
        ERR_set_error(6,0x65,0);
        return 0xffffffff;
      }
      if (*(long *)(lVar6 + 0xc0) != 0) goto LAB_00100943;
LAB_001008b8:
      if (*(long *)(lVar7 + 0xc0) == 0) {
        return 0xfffffffe;
      }
      if (uVar2 != 0) {
        uVar2 = evp_keymgmt_util_export_to_provider(param_2,lVar7,param_3);
        if (uVar2 == 0) {
          return 0xfffffffe;
        }
        if (uVar5 == 0) {
          return 0;
        }
        goto LAB_001009b7;
      }
      bVar8 = uVar5 == 0;
      bVar9 = true;
      uVar4 = uVar5;
      lVar6 = lVar7;
      goto LAB_001009a2;
    }
    if (lVar6 == 0) {
LAB_001008af:
      if (lVar7 == 0) {
        bVar8 = uVar5 == 0;
        bVar9 = uVar2 == 0;
        uVar4 = uVar5 | uVar2;
        goto LAB_001009a2;
      }
      goto LAB_001008b8;
    }
    if (*(long *)(lVar6 + 0xc0) == 0) {
      return 0xfffffffe;
    }
LAB_00100943:
    if (uVar5 == 0) {
      bVar9 = uVar2 == 0;
      bVar8 = true;
      uVar4 = uVar2;
      goto LAB_001009a2;
    }
    uVar4 = evp_keymgmt_util_export_to_provider(param_1,lVar6,param_3);
    if (uVar4 == 0) {
      if (lVar7 == 0) {
        return 0xfffffffe;
      }
      goto LAB_001008b8;
    }
    bVar9 = uVar2 == 0;
    lVar7 = lVar6;
    uVar5 = uVar4;
  }
  if (bVar9) {
    return 0;
  }
LAB_001009b7:
  uVar5 = evp_keymgmt_match(lVar7,uVar5,uVar2,param_3);
  return uVar5;
}



undefined8 evp_keymgmt_util_copy(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long lStack_40;
  undefined4 local_38;
  long local_30;
  
  lVar3 = *(long *)(param_1 + 0x60);
  lVar5 = *(long *)(param_1 + 0x68);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != 0) && (*(long *)(param_2 + 0x68) != 0)) {
    lVar4 = *(long *)(param_2 + 0x60);
    if (((lVar3 == 0) || (lVar3 == lVar4)) &&
       ((lVar3 = lVar4, *(long *)(lVar4 + 0xf8) != 0 && (lVar5 == 0)))) {
      lVar3 = evp_keymgmt_dup(lVar4,*(long *)(param_2 + 0x68),param_3);
      lVar5 = lVar3;
      if (lVar3 != 0) {
LAB_00100b67:
        if ((*(long *)(param_1 + 0x60) == 0) &&
           (iVar1 = EVP_PKEY_set_type_by_keymgmt(param_1,lVar4), iVar1 == 0)) {
          evp_keymgmt_freedata(lVar4,lVar3);
          uVar2 = 0;
        }
        else {
          *(long *)(param_1 + 0x68) = lVar5;
          evp_keymgmt_util_cache_keyinfo(param_1);
          uVar2 = 1;
        }
        goto LAB_00100b83;
      }
    }
    else {
      lVar4 = lVar3;
      uVar2 = EVP_KEYMGMT_get0_name();
      iVar1 = EVP_KEYMGMT_is_a(lVar4,uVar2);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/keymgmt_lib.c",0x1e9,"evp_keymgmt_util_copy");
        ERR_set_error(6,0x65,0);
      }
      else {
        local_48 = lVar4;
        lStack_40 = lVar5;
        local_38 = param_3;
        iVar1 = evp_keymgmt_util_export(param_2,param_3,0x100000,&local_48);
        if (iVar1 != 0) {
          lVar3 = 0;
          if (lVar5 == 0) {
            lVar3 = lStack_40;
            lVar5 = lStack_40;
          }
          goto LAB_00100b67;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00100b83:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



long evp_keymgmt_util_gen
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = evp_keymgmt_gen(param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = evp_keymgmt_util_assign_pkey(param_1,param_2,lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
  }
  evp_keymgmt_freedata(param_2,lVar2);
  return 0;
}



int evp_keymgmt_util_get_deflt_digest_name
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulong local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulong local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_48 = 0;
  OSSL_PARAM_construct_utf8_string(&local_1c8,"default-digest",local_118,100);
  local_178 = local_1a8;
  local_198 = local_1c8;
  uStack_190 = uStack_1c0;
  local_188 = local_1b8;
  uStack_180 = uStack_1b0;
  OSSL_PARAM_construct_utf8_string(&local_1c8,"mandatory-digest",local_a8,100);
  local_150 = local_1a8;
  local_170 = local_1c8;
  uStack_168 = uStack_1c0;
  local_160 = local_1b8;
  uStack_158 = uStack_1b0;
  OSSL_PARAM_construct_end(&local_1c8);
  local_128 = local_1a8;
  local_148 = local_1c8;
  uStack_140 = uStack_1c0;
  local_138 = local_1b8;
  uStack_130 = uStack_1b0;
  iVar1 = evp_keymgmt_get_params(param_1,param_2,&local_198);
  if (iVar1 != 0) {
    iVar1 = OSSL_PARAM_modified(&local_170);
    if (iVar1 == 0) {
      iVar1 = OSSL_PARAM_modified(&local_198);
      if (iVar1 == 0) {
        iVar1 = -2;
        goto LAB_00100e40;
      }
      iVar1 = 1;
      pcVar2 = "UNDEF";
      if (1 < local_178) {
        pcVar2 = local_118;
      }
    }
    else {
      iVar1 = 2;
      pcVar2 = "UNDEF";
      if (1 < local_150) {
        pcVar2 = local_a8;
      }
    }
    OPENSSL_strlcpy(param_3,pcVar2,param_4);
  }
LAB_00100e40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



long evp_keymgmt_util_query_operation_name(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0xa8))(param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = EVP_KEYMGMT_get0_name(param_1);
  return lVar1;
}




undefined1 * ml_dsa_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = ml_dsa_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * ml_dsa_gettable_params(void)

{
  return ml_dsa_params;
}



undefined1 * ml_dsa_gen_settable_params(void)

{
  return settable_3;
}



undefined8 ml_dsa_dup_key(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_ml_dsa_key_dup(param_1,param_2);
  return uVar2;
}



bool ml_dsa_gen_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00100150:
    bVar3 = false;
  }
  else {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar2 != 0) {
      local_28 = param_1 + 0x10;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0x20,param_1 + 0x30);
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        goto LAB_00100150;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    bVar3 = true;
    if (lVar2 != 0) {
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 8,0);
      bVar3 = iVar1 != 0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_dsa_gen_cleanup(void *param_1)

{
  OPENSSL_cleanse((void *)((long)param_1 + 0x10),*(size_t *)((long)param_1 + 0x30));
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



void ml_dsa_free_key(void)

{
  ossl_ml_dsa_key_free();
  return;
}



bool ml_dsa_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC3);
  if (lVar3 != 0) {
    iVar1 = ossl_ml_dsa_key_get_pub_len(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,iVar1 * 8);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar2 = ossl_ml_dsa_key_get_collision_strength_bits(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"max-size");
  if (lVar3 != 0) {
    uVar2 = ossl_ml_dsa_key_get_sig_len(param_1);
    iVar1 = OSSL_PARAM_set_int(lVar3,uVar2);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = ossl_ml_dsa_key_get_pub(param_1);
  lVar4 = ossl_ml_dsa_key_get_priv(param_1);
  lVar5 = ossl_ml_dsa_key_get_seed(param_1);
  if (((lVar5 != 0) && (lVar6 = OSSL_PARAM_locate(param_2,&_LC0), lVar6 != 0)) &&
     (iVar1 = OSSL_PARAM_set_octet_string(lVar6,lVar5,0x20), iVar1 == 0)) {
    return false;
  }
  if ((lVar4 != 0) && (lVar5 = OSSL_PARAM_locate(param_2,&_LC6), lVar5 != 0)) {
    uVar7 = ossl_ml_dsa_key_get_priv_len(param_1);
    iVar1 = OSSL_PARAM_set_octet_string(lVar5,lVar4,uVar7);
    if (iVar1 == 0) {
      return false;
    }
  }
  if ((lVar3 != 0) && (lVar4 = OSSL_PARAM_locate(param_2,&_LC8), lVar4 != 0)) {
    uVar7 = ossl_ml_dsa_key_get_pub_len(param_1);
    iVar1 = OSSL_PARAM_set_octet_string(lVar4,lVar3,uVar7);
    if (iVar1 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"mandatory-digest");
  if (lVar3 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_utf8_string(lVar3,&_LC9);
  return iVar1 != 0;
}



long ml_dsa_load(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (param_2 != 8)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 == 0) {
      return 0;
    }
    lVar2 = ossl_ml_dsa_key_get_pub(lVar7);
    if (lVar2 != 0) {
      return lVar7;
    }
    lVar2 = ossl_ml_dsa_key_get_priv(lVar7);
    lVar3 = ossl_ml_dsa_key_get_seed(lVar7);
    if (lVar3 == 0) {
      if (lVar2 == 0) {
        return lVar7;
      }
    }
    else if ((lVar2 == 0) || (uVar4 = ossl_ml_dsa_key_get_prov_flags(lVar7), (uVar4 & 1) != 0)) {
      iVar1 = ossl_ml_dsa_generate_key(lVar7);
      if (iVar1 != 0) {
        return lVar7;
      }
      goto LAB_0010046a;
    }
    uVar5 = ossl_ml_dsa_key_get_priv_len(lVar7);
    iVar1 = ossl_ml_dsa_sk_decode(lVar7,lVar2,uVar5);
    if (iVar1 != 0) {
      return lVar7;
    }
    puVar6 = (undefined8 *)ossl_ml_dsa_key_params(lVar7);
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x1a9,"ml_dsa_load");
    ERR_set_error(0x39,0x9e,"error parsing %s private key",*puVar6);
  }
LAB_0010046a:
  ossl_ml_dsa_key_free(lVar7);
  return 0;
}



undefined8 ml_dsa_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [4];
  undefined8 local_98;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 3) == 0)) {
LAB_00100630:
    uVar3 = 0;
  }
  else {
    uVar4 = param_2 & 1;
    if ((param_2 & 1) == 0) {
LAB_00100618:
      lVar2 = ossl_ml_dsa_key_get_pub(param_1);
      if (lVar2 == 0) goto LAB_00100630;
      uVar3 = ossl_ml_dsa_key_get_pub_len(param_1);
      OSSL_PARAM_construct_octet_string(&local_e8,&_LC8,lVar2,uVar3);
      local_98 = local_c8;
      local_b8[0] = local_e8;
      local_b8[1] = uStack_e0;
      local_b8[2] = local_d8;
      local_b8[3] = uStack_d0;
LAB_001006a2:
      uVar4 = 1;
    }
    else {
      lVar2 = ossl_ml_dsa_key_get_seed(param_1);
      if (lVar2 == 0) {
        lVar2 = ossl_ml_dsa_key_get_priv(param_1);
        if (lVar2 == 0) goto LAB_00100618;
        uVar5 = 0;
      }
      else {
        OSSL_PARAM_construct_octet_string(&local_e8,&_LC0,lVar2,0x20);
        local_98 = local_c8;
        local_b8[0] = local_e8;
        local_b8[1] = uStack_e0;
        local_b8[2] = local_d8;
        local_b8[3] = uStack_d0;
        lVar2 = ossl_ml_dsa_key_get_priv(param_1);
        uVar5 = uVar4;
        uVar4 = 2;
        if (lVar2 == 0) goto LAB_001006a2;
      }
      lVar6 = (long)(int)uVar5;
      uVar3 = ossl_ml_dsa_key_get_priv_len(param_1);
      OSSL_PARAM_construct_octet_string(&local_e8,&_LC6,lVar2,uVar3);
      local_b8[lVar6 * 5] = local_e8;
      local_b8[lVar6 * 5 + 1] = uStack_e0;
      local_b8[lVar6 * 5 + 2] = local_d8;
      local_b8[lVar6 * 5 + 3] = uStack_d0;
      local_b8[lVar6 * 5 + 4] = local_c8;
    }
    lVar2 = (long)(int)uVar4;
    OSSL_PARAM_construct_end(&local_e8);
    local_b8[lVar2 * 5] = local_e8;
    local_b8[lVar2 * 5 + 1] = uStack_e0;
    local_b8[lVar2 * 5 + 2] = local_d8;
    local_b8[lVar2 * 5 + 3] = uStack_d0;
    local_b8[lVar2 * 5 + 4] = local_c8;
    uVar3 = (*param_3)(local_b8,param_4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



uint ml_dsa_import(long param_1,uint param_2,undefined8 param_3)

{
  void *__s2;
  size_t __n;
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  void *__s1;
  ulong uVar5;
  long in_FS_OFFSET;
  void *local_60;
  long local_58;
  long local_50;
  size_t local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((param_1 == 0) || (iVar1 == 0)) goto LAB_00100770;
  uVar2 = param_2 & 3;
  if ((param_2 & 3) == 0) goto LAB_0010070b;
  puVar3 = (undefined8 *)ossl_ml_dsa_key_params(param_1);
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar4 = OSSL_PARAM_locate_const(param_3,&_LC8);
  if ((lVar4 == 0) ||
     (iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar4,&local_60,&local_48), iVar1 != 0)) {
    if ((local_60 == (void *)0x0) || (puVar3[9] == local_48)) {
      if ((param_2 & 1) == 0) {
LAB_00100808:
        if (local_38 == 0) {
          if (local_48 == 0) {
            if (local_40 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0xe8,
                            "ml_dsa_key_fromdata");
              ERR_set_error(0x39,0x80,0);
              uVar2 = 0;
              goto LAB_0010070b;
            }
          }
          else if (local_40 == 0) {
LAB_0010082d:
            iVar1 = ossl_ml_dsa_pk_decode(param_1,local_60,local_48);
            if (iVar1 != 0) goto LAB_00100845;
            goto LAB_00100770;
          }
LAB_00100a21:
          iVar1 = ossl_ml_dsa_sk_decode(param_1,local_58);
          if (iVar1 == 0) {
            uVar2 = 0;
            goto LAB_0010070b;
          }
LAB_00100845:
          __n = local_48;
          __s2 = local_60;
          if ((local_48 != 0) && (local_40 + local_38 != 0)) {
            __s1 = (void *)ossl_ml_dsa_key_get_pub(param_1);
            iVar1 = memcmp(__s1,__s2,__n);
            if (iVar1 != 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x102,
                            "ml_dsa_key_fromdata");
              ERR_set_error(0x39,0x9e,"explicit %s public key does not match private",*puVar3);
              ossl_ml_dsa_key_reset(param_1);
              uVar2 = 0;
              goto LAB_0010070b;
            }
          }
        }
        else {
          if ((local_40 == 0) || (uVar5 = ossl_ml_dsa_key_get_prov_flags(param_1), (uVar5 & 1) != 0)
             ) {
            iVar1 = ossl_ml_dsa_set_prekey(param_1,0,0,local_50,local_38,local_58);
            if (iVar1 == 0) goto LAB_00100770;
            iVar1 = ossl_ml_dsa_generate_key(param_1);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0xf2,
                            "ml_dsa_key_fromdata");
              ERR_set_error(0x39,0x79,0);
              uVar2 = 0;
              goto LAB_0010070b;
            }
            goto LAB_00100845;
          }
          if (local_40 != 0) goto LAB_00100a21;
          if (local_48 != 0) goto LAB_0010082d;
        }
        uVar2 = 1;
        goto LAB_0010070b;
      }
      lVar4 = OSSL_PARAM_locate_const(param_3,&_LC0);
      if ((lVar4 == 0) ||
         (iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar4,&local_50,&local_38), iVar1 != 0)) {
        if ((local_50 != 0) && (local_38 != 0x20)) {
          ERR_new();
          ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0xd8,
                        "ml_dsa_key_fromdata");
          ERR_set_error(0x39,0x9a,0);
          uVar2 = 0;
          goto LAB_0010070b;
        }
        lVar4 = OSSL_PARAM_locate_const(param_3,&_LC6);
        if ((lVar4 == 0) ||
           (iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar4,&local_58,&local_40), iVar1 != 0)) {
          if ((local_58 != 0) && (puVar3[8] != local_40)) {
            ERR_new();
            ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0xe0,
                          "ml_dsa_key_fromdata");
            ERR_set_error(0x39,0x69,"Invalid %s private key length",*puVar3);
            uVar2 = 0;
            goto LAB_0010070b;
          }
          goto LAB_00100808;
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0xcb,"ml_dsa_key_fromdata");
      ERR_set_error(0x39,0x69,"Invalid %s public key length",*puVar3);
    }
  }
LAB_00100770:
  uVar2 = 0;
LAB_0010070b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8 ml_dsa_match(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && (param_2 != 0)) {
    uVar2 = ossl_ml_dsa_key_equal(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 ml_dsa_has(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 3) == 0) {
      return 1;
    }
    uVar2 = ossl_ml_dsa_key_has(param_1,param_2);
    return uVar2;
  }
  return 0;
}



undefined8 ml_dsa_validate(long param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 == 0) || (iVar1 == 0)) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    iVar1 = ossl_ml_dsa_key_has(param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_2 & 3) == 3) {
      uVar2 = ossl_ml_dsa_key_pairwise_check(param_1);
      return uVar2;
    }
  }
  return 1;
}



undefined8 * ml_dsa_gen_init(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x38,"providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x1be)
    ;
    if (ptr != (undefined8 *)0x0) {
      *ptr = param_1;
      lVar2 = OSSL_PARAM_locate_const(param_3,&_LC0);
      if (lVar2 == 0) {
LAB_00100c8d:
        lVar2 = OSSL_PARAM_locate_const(param_3,"properties");
        if (lVar2 == 0) goto LAB_00100ce1;
        CRYPTO_free((void *)ptr[1]);
        ptr[1] = 0;
        iVar1 = OSSL_PARAM_get_utf8_string(lVar2,ptr + 1,0);
        if (iVar1 != 0) goto LAB_00100ce1;
      }
      else {
        local_38 = ptr + 2;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,0x20,ptr + 6);
        if (iVar1 != 0) goto LAB_00100c8d;
        ptr[6] = 0;
      }
      CRYPTO_free(ptr);
    }
  }
  ptr = (undefined8 *)0x0;
LAB_00100ce1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_prov_ml_dsa_new(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    lVar3 = ossl_ml_dsa_key_new(uVar2,param_2,param_3);
    if (lVar3 != 0) {
      iVar1 = ossl_prov_ctx_get_bool_param(param_1,"ml-dsa.retain_seed",1);
      if (iVar1 == 0) {
        uVar5 = 1;
        uVar7 = 3;
        uVar6 = 2;
        uVar4 = 0;
      }
      else {
        uVar5 = 3;
        uVar7 = 1;
        uVar6 = 0;
        uVar4 = 2;
      }
      iVar1 = ossl_prov_ctx_get_bool_param(param_1,"ml-dsa.prefer_seed",1);
      if (iVar1 == 0) {
        uVar6 = uVar7;
        uVar5 = uVar4;
      }
      ossl_ml_dsa_set_prekey(lVar3,uVar5,uVar6,0,0,0,0);
      return lVar3;
    }
  }
  return 0;
}



long ml_dsa_65_gen(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = ossl_prov_ml_dsa_new(*param_1,param_1[1],0x5b2);
  if (lVar2 != 0) {
    if ((param_1[6] == 0) ||
       (iVar1 = ossl_ml_dsa_set_prekey(lVar2,0,0,param_1 + 2,param_1[6],0), iVar1 != 0)) {
      iVar1 = ossl_ml_dsa_generate_key(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x1d7,"ml_dsa_gen");
      ERR_set_error(0x39,0x79,0);
    }
    ossl_ml_dsa_key_free(lVar2);
    return 0;
  }
  return 0;
}



void ml_dsa_44_new_key(undefined8 param_1)

{
  ossl_prov_ml_dsa_new(param_1,0,0x5b1);
  return;
}



void ml_dsa_65_new_key(undefined8 param_1)

{
  ossl_prov_ml_dsa_new(param_1,0,0x5b2);
  return;
}



void ml_dsa_87_new_key(undefined8 param_1)

{
  ossl_prov_ml_dsa_new(param_1,0,0x5b3);
  return;
}



long ml_dsa_87_gen(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = ossl_prov_ml_dsa_new(*param_1,param_1[1],0x5b3);
  if (lVar2 != 0) {
    if ((param_1[6] == 0) ||
       (iVar1 = ossl_ml_dsa_set_prekey(lVar2,0,0,param_1 + 2,param_1[6],0), iVar1 != 0)) {
      iVar1 = ossl_ml_dsa_generate_key(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x1d7,"ml_dsa_gen");
      ERR_set_error(0x39,0x79,0);
    }
    ossl_ml_dsa_key_free(lVar2);
    return 0;
  }
  return 0;
}



long ml_dsa_44_gen(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = ossl_prov_ml_dsa_new(*param_1,param_1[1],0x5b1);
  if (lVar2 != 0) {
    if ((param_1[6] == 0) ||
       (iVar1 = ossl_ml_dsa_set_prekey(lVar2,0,0,param_1 + 2,param_1[6],0), iVar1 != 0)) {
      iVar1 = ossl_ml_dsa_generate_key(lVar2);
      if (iVar1 != 0) {
        return lVar2;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ml_dsa_kmgmt.c",0x1d7,"ml_dsa_gen");
      ERR_set_error(0x39,0x79,0);
    }
    ossl_ml_dsa_key_free(lVar2);
    return 0;
  }
  return 0;
}



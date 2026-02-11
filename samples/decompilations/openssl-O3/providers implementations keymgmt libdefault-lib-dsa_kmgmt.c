
undefined8 dsa_import_types(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 & 0x84) != 0);
  if ((param_1 & 3) != 0) {
    uVar1 = uVar1 + 2;
  }
  return *(undefined8 *)(dsa_types + (long)(int)uVar1 * 8);
}



undefined1 * dsa_gettable_params(void)

{
  return dsa_params;
}



undefined1 * dsa_gen_settable_params(void)

{
  return settable_1;
}



bool dsa_gen_get_params(long param_1)

{
  return param_1 != 0;
}



undefined1 * dsa_gen_gettable_params(void)

{
  return dsa_gen_gettable_params_table_2;
}



undefined8 dsa_load(undefined8 *param_1,long param_2)

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



undefined8 dsa_dup(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_dsa_dup(param_1,param_2);
  return uVar2;
}



undefined8 dsa_gen_set_template(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      return 0;
    }
    uVar1 = ossl_dsa_get0_params(param_2);
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 dsa_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (param_1 == 0)) || ((param_2 & 7) == 0)) ||
     (lVar3 = OSSL_PARAM_BLD_new(), lVar3 == 0)) {
    uVar2 = 0;
    goto LAB_00100190;
  }
  if ((param_2 & 0x84) == 0) {
LAB_001001ce:
    if ((param_2 & 3) != 0) {
      local_40 = 0;
      local_38 = 0;
      DSA_get0_key(param_1,&local_38,&local_40);
      if (((((param_2 & 1) != 0) && (local_40 != 0)) &&
          (iVar1 = ossl_param_build_set_bn(lVar3,0,&_LC0), iVar1 == 0)) ||
         ((local_38 != 0 && (iVar1 = ossl_param_build_set_bn(lVar3,0,&_LC1), iVar1 == 0))))
      goto LAB_00100285;
    }
    lVar4 = OSSL_PARAM_BLD_to_param(lVar3);
    if (lVar4 == 0) goto LAB_00100285;
    uVar2 = (*param_3)(lVar4,param_4);
    OSSL_PARAM_free(lVar4);
  }
  else {
    uVar5 = ossl_dsa_get0_params(param_1);
    iVar1 = ossl_ffc_params_todata(uVar5,lVar3,0);
    if (iVar1 != 0) goto LAB_001001ce;
LAB_00100285:
    uVar2 = 0;
  }
  OSSL_PARAM_BLD_free(lVar3);
LAB_00100190:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



bool dsa_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 7) != 0)) &&
     (iVar1 = ossl_dsa_ffc_params_fromdata(param_1,param_3), iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return true;
    }
    iVar1 = ossl_dsa_key_fromdata(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}



bool dsa_validate(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100400:
    bVar2 = false;
  }
  else {
    if ((param_2 & 7) != 0) {
      if ((param_2 & 4) != 0) {
        local_38 = local_38 & 0xffffffff00000000;
        iVar1 = ossl_dsa_check_params(param_1,param_3,&local_38);
        if (iVar1 == 0) goto LAB_00100400;
      }
      if ((param_2 & 2) != 0) {
        local_3c = 0;
        local_38 = 0;
        DSA_get0_key(param_1,&local_38,0);
        if ((local_38 == 0) ||
           (iVar1 = ossl_dsa_check_pub_key(param_1,local_38,&local_3c), iVar1 == 0))
        goto LAB_00100400;
      }
      if ((param_2 & 1) != 0) {
        local_3c = 0;
        local_38 = 0;
        DSA_get0_key(param_1,0,&local_38);
        if ((local_38 == 0) ||
           (iVar1 = ossl_dsa_check_priv_key(param_1,local_38,&local_3c), iVar1 == 0))
        goto LAB_00100400;
        if ((~param_2 & 3) == 0) {
          iVar1 = ossl_dsa_check_pairwise(param_1);
          bVar2 = iVar1 != 0;
          goto LAB_001003aa;
        }
      }
    }
    bVar2 = true;
  }
LAB_001003aa:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool dsa_match(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return false;
  }
  if ((param_3 & 3) == 0) {
    if ((param_3 & 4) == 0) {
      return true;
    }
    uVar4 = ossl_dsa_get0_params(param_1);
    uVar5 = ossl_dsa_get0_params(param_2);
    goto LAB_001005ae;
  }
  if ((param_3 & 2) == 0) {
LAB_001004a2:
    if ((param_3 & 1) == 0) {
LAB_001004a7:
      if ((param_3 & 4) != 0) {
        ossl_dsa_get0_params(param_1);
        ossl_dsa_get0_params(param_2);
      }
      return false;
    }
    pBVar2 = (BIGNUM *)DSA_get0_priv_key(param_1);
    pBVar3 = (BIGNUM *)DSA_get0_priv_key(param_2);
    if ((pBVar2 == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) goto LAB_001004a7;
    iVar1 = BN_cmp(pBVar2,pBVar3);
  }
  else {
    pBVar2 = (BIGNUM *)DSA_get0_pub_key(param_1);
    pBVar3 = (BIGNUM *)DSA_get0_pub_key(param_2);
    if ((pBVar2 == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) goto LAB_001004a2;
    iVar1 = BN_cmp(pBVar2,pBVar3);
  }
  if ((param_3 & 4) == 0) {
    return iVar1 == 0;
  }
  uVar4 = ossl_dsa_get0_params(param_1);
  uVar5 = ossl_dsa_get0_params(param_2);
  if (iVar1 != 0) {
    return false;
  }
LAB_001005ae:
  iVar1 = ossl_ffc_params_cmp(uVar4,uVar5,1);
  return iVar1 != 0;
}



bool dsa_has(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 7) == 0) {
      return true;
    }
    if ((((param_2 & 2) == 0) || (lVar2 = DSA_get0_pub_key(param_1), lVar2 != 0)) &&
       (((param_2 & 1) == 0 || (lVar2 = DSA_get0_priv_key(param_1), lVar2 != 0)))) {
      if ((param_2 & 4) == 0) {
        return true;
      }
      lVar2 = DSA_get0_p(param_1);
      if (lVar2 != 0) {
        lVar2 = DSA_get0_g(param_1);
        return lVar2 != 0;
      }
    }
  }
  return false;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void dsa_freedata(DSA *r)

{
  DSA_free(r);
  return;
}



DSA * dsa_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  DSA *a;
  long lVar2;
  long *plVar3;
  DSA *pDVar4;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 == (undefined8 *)0x0) || (iVar1 == 0)) ||
     (a = (DSA *)ossl_dsa_new(*param_1), a == (DSA *)0x0)) {
    return (DSA *)0x0;
  }
  if (*(uint *)((long)param_1 + 0x3c) == 2) {
    *(uint *)((long)param_1 + 0x3c) = (uint)((ulong)param_1[3] < 0x800);
LAB_001006d1:
    param_1[0xc] = param_3;
    param_1[0xb] = param_2;
    lVar2 = BN_GENCB_new();
    if (lVar2 != 0) {
      BN_GENCB_set(lVar2,dsa_gencb,param_1);
    }
    plVar3 = (long *)ossl_dsa_get0_params(a);
    if (((param_1[1] == 0) || (iVar1 = ossl_ffc_params_copy(plVar3), iVar1 != 0)) &&
       ((param_1[5] == 0 ||
        (iVar1 = ossl_ffc_params_set_seed(plVar3,param_1[5],param_1[6]), iVar1 != 0)))) {
      if (*(int *)(param_1 + 7) == -1) {
        if (*(int *)((long)param_1 + 0x44) != 0) {
          ossl_ffc_params_set_h(plVar3);
        }
      }
      else {
        ossl_ffc_params_set_gindex(plVar3);
        if (*(int *)(param_1 + 8) != -1) {
          ossl_ffc_params_set_pcounter(plVar3);
        }
      }
      if (param_1[9] != 0) {
        ossl_ffc_set_digest(plVar3,param_1[9],param_1[10]);
      }
      if ((((*(byte *)(param_1 + 2) & 4) == 0) ||
          (iVar1 = ossl_dsa_generate_ffc_parameters
                             (a,*(undefined4 *)((long)param_1 + 0x3c),*(undefined4 *)(param_1 + 3),
                              *(undefined4 *)(param_1 + 4),lVar2), 0 < iVar1)) &&
         ((ossl_ffc_params_enable_flags(plVar3,4,*(int *)((long)param_1 + 0x3c) == 1), pDVar4 = a,
          (*(byte *)(param_1 + 2) & 3) == 0 ||
          ((((*plVar3 != 0 && (plVar3[1] != 0)) && (plVar3[2] != 0)) &&
           (iVar1 = DSA_generate_key(a), 0 < iVar1)))))) goto LAB_001007d2;
    }
  }
  else {
    if (*(uint *)((long)param_1 + 0x3c) < 3) goto LAB_001006d1;
    ERR_new();
    lVar2 = 0;
    ERR_set_debug("providers/implementations/keymgmt/dsa_kmgmt.c",0x278,"dsa_gen");
    ERR_set_error(0x39,0xc0103,"gen_type set to unsupported value %d",
                  *(undefined4 *)((long)param_1 + 0x3c));
  }
  pDVar4 = (DSA *)0x0;
  DSA_free(a);
LAB_001007d2:
  BN_GENCB_free(lVar2);
  return pDVar4;
}



void dsa_gencb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a0;
  undefined4 local_9c;
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
  long local_20;
  
  bVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_2;
  local_9c = param_1;
  lVar1 = BN_GENCB_get_arg(param_3);
  puVar3 = &local_98;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  OSSL_PARAM_construct_int(&local_d8,"potential",&local_9c);
  local_78 = local_b8;
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  uStack_80 = uStack_c0;
  OSSL_PARAM_construct_int(&local_d8,"iteration",&local_a0);
  local_70 = local_d8;
  uStack_68 = uStack_d0;
  local_50 = local_b8;
  local_60 = local_c8;
  uStack_58 = uStack_c0;
  (**(code **)(lVar1 + 0x58))(&local_98,*(undefined8 *)(lVar1 + 0x60));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dsa_gen_set_params(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    return false;
  }
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
LAB_00100a15:
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/dsa_kmgmt.c",0x1e4,"dsa_gen_set_params");
        ERR_set_error(0x39,0x80106,0);
        return false;
      }
      uVar1 = *(undefined8 *)(lVar3 + 0x10);
      iVar2 = OPENSSL_strcasecmp("default",uVar1);
      if (iVar2 == 0) {
        lVar3 = 0;
      }
      else {
        iVar2 = OPENSSL_strcasecmp("fips186_4",uVar1);
        if (iVar2 == 0) {
          lVar3 = 1;
        }
        else {
          iVar2 = OPENSSL_strcasecmp("fips186_2",uVar1);
          if (iVar2 != 0) goto LAB_00100a15;
          lVar3 = 2;
        }
      }
      if (*(int *)(dsatype2id + lVar3 * 0x10 + 8) == -1) goto LAB_00100a15;
      *(int *)(param_1 + 0x3c) = *(int *)(dsatype2id + lVar3 * 0x10 + 8);
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"gindex");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x38), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"pcounter");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x40), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"hindex");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_int(lVar3,param_1 + 0x44), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC13);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 5) {
        return false;
      }
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar3 = *(long *)(lVar3 + 0x18);
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        "providers/implementations/keymgmt/dsa_kmgmt.c",0x1c5);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar4 != 0) && (lVar3 != 0)) {
        lVar4 = CRYPTO_memdup(lVar4,lVar3,"providers/implementations/keymgmt/dsa_kmgmt.c",0x1c9);
        *(long *)(param_1 + 0x28) = lVar4;
        if (lVar4 == 0) {
          return false;
        }
        *(long *)(param_1 + 0x30) = lVar3;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"pbits");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x18), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"qbits");
    if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_get_size_t(lVar3,param_1 + 0x20), iVar2 == 0)) {
      return false;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) != 4) {
        return false;
      }
      CRYPTO_free(*(void **)(param_1 + 0x48));
      pcVar5 = CRYPTO_strdup(*(char **)(lVar3 + 0x10),
                             "providers/implementations/keymgmt/dsa_kmgmt.c",0x20c);
      *(char **)(param_1 + 0x48) = pcVar5;
      if (pcVar5 == (char *)0x0) {
        return false;
      }
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 8) == 4) {
        CRYPTO_free(*(void **)(param_1 + 0x50));
        pcVar5 = CRYPTO_strdup(*(char **)(lVar3 + 0x10),
                               "providers/implementations/keymgmt/dsa_kmgmt.c",0x215);
        *(char **)(param_1 + 0x50) = pcVar5;
        return pcVar5 != (char *)0x0;
      }
      return false;
    }
  }
  return true;
}



undefined8 dsa_newdata(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    uVar2 = ossl_dsa_new(uVar2);
    return uVar2;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * dsa_gen_init(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *ptr;
  
  uVar4 = ossl_prov_ctx_get0_libctx();
  iVar3 = ossl_prov_is_running();
  if ((iVar3 != 0) && ((param_2 & 7) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x68,"providers/implementations/keymgmt/dsa_kmgmt.c",0x1a1);
    uVar2 = _UNK_00101b18;
    uVar1 = __LC18;
    if (ptr == (undefined8 *)0x0) {
      dsa_gen_set_params(0,param_3);
    }
    else {
      *(uint *)(ptr + 2) = param_2;
      *ptr = uVar4;
      ptr[3] = uVar1;
      ptr[4] = uVar2;
      uVar4 = _UNK_00101b28;
      ptr[7] = __LC19;
      ptr[8] = uVar4;
      iVar3 = dsa_gen_set_params(ptr,param_3);
      if (iVar3 != 0) {
        return ptr;
      }
      CRYPTO_free((void *)ptr[9]);
      CRYPTO_free((void *)ptr[10]);
      CRYPTO_clear_free(ptr[5],ptr[6],"providers/implementations/keymgmt/dsa_kmgmt.c",0x2ba);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 dsa_export_types(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 & 0x84) != 0);
  if ((param_1 & 3) != 0) {
    uVar1 = uVar1 + 2;
  }
  return *(undefined8 *)(dsa_types + (long)(int)uVar1 * 8);
}



void dsa_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                      "providers/implementations/keymgmt/dsa_kmgmt.c",0x2ba);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 dsa_get_params(DSA *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OSSL_PARAM_locate(param_2,&_LC20);
  if (lVar3 == 0) {
LAB_00100ee3:
    lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
    if (lVar3 != 0) {
      uVar1 = DSA_security_bits(param_1);
      iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
      if (iVar2 == 0) goto LAB_00100f7d;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"max-size");
    if (lVar3 != 0) {
      iVar2 = DSA_size(param_1);
      iVar2 = OSSL_PARAM_set_int(lVar3,iVar2);
      if (iVar2 == 0) goto LAB_00100f7d;
    }
    lVar3 = OSSL_PARAM_locate(param_2,"default-digest");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_set_utf8_string(lVar3,"SHA256");
      if (iVar2 == 0) goto LAB_00100f7d;
    }
    uVar4 = ossl_dsa_get0_params(param_1);
    iVar2 = ossl_ffc_params_todata(uVar4,0,param_2);
    if (iVar2 != 0) {
      local_30 = 0;
      local_28 = 0;
      if (param_1 != (DSA *)0x0) {
        DSA_get0_key(param_1,&local_28,&local_30);
        if (local_30 != 0) {
          iVar2 = ossl_param_build_set_bn(0,param_2,&_LC0);
          if (iVar2 == 0) goto LAB_00100f7d;
        }
        if (local_28 != 0) {
          iVar2 = ossl_param_build_set_bn(0,param_2,&_LC1);
          if (iVar2 == 0) goto LAB_00100f7d;
        }
        uVar4 = 1;
        goto LAB_00100f7f;
      }
    }
  }
  else {
    uVar1 = DSA_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 != 0) goto LAB_00100ee3;
  }
LAB_00100f7d:
  uVar4 = 0;
LAB_00100f7f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



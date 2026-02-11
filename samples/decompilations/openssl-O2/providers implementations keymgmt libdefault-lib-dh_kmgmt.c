
undefined8 dh_import_types(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 & 0x84) != 0);
  if ((param_1 & 3) != 0) {
    uVar1 = uVar1 + 2;
  }
  return *(undefined8 *)(dh_types + (long)(int)uVar1 * 8);
}



undefined1 * dh_gettable_params(void)

{
  return dh_params;
}



undefined1 * dh_settable_params(void)

{
  return dh_known_settable_params;
}



undefined1 * dh_gen_settable_params(void)

{
  return dh_gen_settable_4;
}



undefined1 * dhx_gen_settable_params(void)

{
  return dhx_gen_settable_1;
}



undefined * dhx_query_operation_name(void)

{
  return &_LC0;
}



undefined8 dh_load(undefined8 *param_1,long param_2)

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



undefined8 dh_dup(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_dh_dup(param_1,param_2);
  return uVar2;
}



undefined4 dh_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 7) != 0)) {
    lVar3 = OSSL_PARAM_BLD_new();
    if (lVar3 != 0) {
      if (((((param_2 & 0x84) == 0) || (iVar1 = ossl_dh_params_todata(param_1,lVar3,0), iVar1 != 0))
          && (((param_2 & 3) == 0 ||
              (iVar1 = ossl_dh_key_todata(param_1,lVar3,0,param_2 & 1), iVar1 != 0)))) &&
         (lVar4 = OSSL_PARAM_BLD_to_param(lVar3), lVar4 != 0)) {
        uVar2 = (*param_3)(lVar4,param_4);
        OSSL_PARAM_free(lVar4);
      }
      else {
        uVar2 = 0;
      }
      OSSL_PARAM_BLD_free(lVar3);
      return uVar2;
    }
    return 0;
  }
  return 0;
}



bool dh_import(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (param_1 != 0)) && ((param_2 & 7) != 0)) &&
     (iVar1 = ossl_dh_params_fromdata(param_1,param_3), iVar1 != 0)) {
    if ((param_2 & 3) == 0) {
      return true;
    }
    iVar1 = ossl_dh_key_fromdata(param_1,param_3,param_2 & 1);
    return iVar1 != 0;
  }
  return false;
}



undefined8 dh_gen_set_template(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      return 0;
    }
    uVar1 = ossl_dh_get0_params(param_2);
    *(undefined8 *)(param_1 + 8) = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



bool dh_match(undefined8 param_1,undefined8 param_2,ulong param_3)

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
    uVar4 = ossl_dh_get0_params(param_1);
    uVar5 = ossl_dh_get0_params(param_2);
    goto LAB_001003ce;
  }
  if ((param_3 & 2) == 0) {
LAB_001002c2:
    if ((param_3 & 1) == 0) {
LAB_001002c7:
      if ((param_3 & 4) != 0) {
        ossl_dh_get0_params(param_1);
        ossl_dh_get0_params(param_2);
      }
      return false;
    }
    pBVar2 = (BIGNUM *)DH_get0_priv_key(param_1);
    pBVar3 = (BIGNUM *)DH_get0_priv_key(param_2);
    if ((pBVar2 == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) goto LAB_001002c7;
    iVar1 = BN_cmp(pBVar2,pBVar3);
  }
  else {
    pBVar2 = (BIGNUM *)DH_get0_pub_key(param_1);
    pBVar3 = (BIGNUM *)DH_get0_pub_key(param_2);
    if ((pBVar2 == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) goto LAB_001002c2;
    iVar1 = BN_cmp(pBVar2,pBVar3);
  }
  if ((param_3 & 4) == 0) {
    return iVar1 == 0;
  }
  uVar4 = ossl_dh_get0_params(param_1);
  uVar5 = ossl_dh_get0_params(param_2);
  if (iVar1 != 0) {
    return false;
  }
LAB_001003ce:
  iVar1 = ossl_ffc_params_cmp(uVar4,uVar5,1);
  return iVar1 != 0;
}



bool dh_has(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 7) == 0) {
      return true;
    }
    if ((((param_2 & 2) == 0) || (lVar2 = DH_get0_pub_key(param_1), lVar2 != 0)) &&
       (((param_2 & 1) == 0 || (lVar2 = DH_get0_priv_key(param_1), lVar2 != 0)))) {
      if ((param_2 & 4) == 0) {
        return true;
      }
      lVar2 = DH_get0_p(param_1);
      if (lVar2 != 0) {
        lVar2 = DH_get0_g(param_1);
        return lVar2 != 0;
      }
    }
  }
  return false;
}



bool dh_set_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
  bVar3 = true;
  if ((lVar2 != 0) && (bVar3 = false, *(int *)(lVar2 + 8) == 5)) {
    iVar1 = ossl_dh_buf2key(param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    return iVar1 != 0;
  }
  return bVar3;
}



bool dh_get_params(DH *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC2);
  if (lVar3 != 0) {
    uVar1 = DH_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar1 = DH_security_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"max-size");
  if (lVar3 != 0) {
    iVar2 = DH_size(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,iVar2);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 8) != 5) {
      return false;
    }
    lVar4 = ossl_dh_key2buf(param_1,lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x18),0);
    *(long *)(lVar3 + 0x20) = lVar4;
    if (lVar4 == 0) {
      return false;
    }
  }
  iVar2 = ossl_dh_params_todata(param_1,0,param_2);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = ossl_dh_key_todata(param_1,0,param_2,1);
  return iVar2 != 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void dh_freedata(DH *dh)

{
  DH_free(dh);
  return;
}



DH * dh_gen(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DH *dh;
  long *plVar3;
  BN_GENCB *cb;
  DH *pDVar4;
  uint uVar5;
  
  iVar1 = ossl_prov_is_running();
  if (param_1 == (undefined8 *)0x0) {
    return (DH *)0x0;
  }
  if (iVar1 == 0) {
    return (DH *)0x0;
  }
  iVar1 = *(int *)((long)param_1 + 0x14);
  if (iVar1 == 0) {
    if (3 < *(uint *)((long)param_1 + 0x3c)) {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/dh_kmgmt.c",0x2d3,"dh_gen");
      ERR_set_error(0x39,0xc0103,"gen_type set to unsupported value %d",
                    *(undefined4 *)((long)param_1 + 0x3c));
      return (DH *)0x0;
    }
    if ((*(uint *)((long)param_1 + 0x3c) != 3) || (param_1[1] != 0)) goto LAB_00100646;
    iVar1 = ossl_dh_get_named_group_uid_from_size(*(undefined4 *)(param_1 + 3));
    *(int *)((long)param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      return (DH *)0x0;
    }
LAB_001007b2:
    dh = (DH *)ossl_dh_new_by_nid_ex(*param_1,iVar1);
    if (dh == (DH *)0x0) {
      return (DH *)0x0;
    }
    cb = (BN_GENCB *)0x0;
    uVar5 = 0;
    plVar3 = (long *)ossl_dh_get0_params(dh);
    uVar2 = *(uint *)(param_1 + 2);
LAB_00100722:
    pDVar4 = dh;
    if ((uVar2 & 3) == 0) {
LAB_00100771:
      DH_clear_flags(dh,0xf000);
      DH_set_flags(dh,*(undefined4 *)(param_1 + 0xe));
      goto LAB_00100789;
    }
    if ((*plVar3 != 0) && (plVar3[2] != 0)) {
      if (0 < *(int *)((long)param_1 + 0x4c)) {
        DH_set_length(dh);
      }
      ossl_ffc_params_enable_flags(plVar3,4,*(int *)((long)param_1 + 0x3c) == 1);
      iVar1 = DH_generate_key(dh);
      if (0 < iVar1) goto LAB_00100771;
    }
    if (uVar5 != 0) goto LAB_00100789;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3c) = 3;
    if (param_1[1] == 0) goto LAB_001007b2;
LAB_00100646:
    dh = (DH *)ossl_dh_new_ex(*param_1);
    if (dh == (DH *)0x0) {
      return (DH *)0x0;
    }
    plVar3 = (long *)ossl_dh_get0_params(dh);
    if (((param_1[1] == 0) || (iVar1 = ossl_ffc_params_copy(plVar3), iVar1 != 0)) &&
       (iVar1 = ossl_ffc_params_set_seed(plVar3,param_1[5],param_1[6]), iVar1 != 0)) {
      if (*(int *)(param_1 + 7) == -1) {
        if (*(int *)(param_1 + 9) != 0) {
          ossl_ffc_params_set_h(plVar3);
        }
      }
      else {
        ossl_ffc_params_set_gindex(plVar3);
        if (*(int *)((long)param_1 + 0x44) != -1) {
          ossl_ffc_params_set_pcounter(plVar3);
        }
      }
      if (param_1[10] != 0) {
        ossl_ffc_set_digest(plVar3,param_1[10],param_1[0xb]);
      }
      param_1[0xd] = param_3;
      param_1[0xc] = param_2;
      cb = (BN_GENCB *)BN_GENCB_new();
      if (cb != (BN_GENCB *)0x0) {
        BN_GENCB_set(cb,dh_gencb,param_1);
      }
      uVar2 = *(uint *)(param_1 + 2);
      uVar5 = uVar2 & 4;
      if (uVar5 != 0) {
        if (*(int *)((long)param_1 + 0x3c) == 0) {
          uVar5 = DH_generate_parameters_ex(dh,*(int *)(param_1 + 3),*(int *)(param_1 + 8),cb);
        }
        else {
          uVar5 = ossl_dh_generate_ffc_parameters
                            (dh,*(int *)((long)param_1 + 0x3c),*(int *)(param_1 + 3),
                             *(undefined4 *)(param_1 + 4),cb);
        }
        if ((int)uVar5 < 1) goto LAB_0010080b;
        uVar2 = *(uint *)(param_1 + 2);
      }
      goto LAB_00100722;
    }
    cb = (BN_GENCB *)0x0;
  }
LAB_0010080b:
  pDVar4 = (DH *)0x0;
  DH_free(dh);
LAB_00100789:
  BN_GENCB_free(cb);
  return pDVar4;
}



void dh_gencb(undefined4 param_1,undefined4 param_2,undefined8 param_3)

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
  (**(code **)(lVar1 + 0x60))(&local_98,*(undefined8 *)(lVar1 + 0x68));
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool dh_gen_common_set_params(long param_1,long *param_2)

{
  char *__s1;
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == (long *)0x0) {
    return true;
  }
  if (*param_2 == 0) {
    return true;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,&_LC9);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 8) != 4) {
LAB_00100b08:
      ERR_new();
      uVar5 = 0x21e;
      goto LAB_00100b19;
    }
    __s1 = *(char **)(lVar4 + 0x10);
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = strcmp(__s1,"default");
    if (iVar1 == 0) {
      uVar3 = (uint)(iVar2 == 0x1000);
    }
    else {
      uVar3 = ossl_dh_gen_type_name2id(__s1,iVar2);
      if (uVar3 == 0xffffffff) goto LAB_00100b08;
    }
    *(uint *)(param_1 + 0x3c) = uVar3;
  }
  lVar4 = OSSL_PARAM_locate_const(param_2,"group");
  if (lVar4 == 0) {
LAB_00100a84:
    lVar4 = OSSL_PARAM_locate_const(param_2,"pbits");
    if ((lVar4 != 0) && (iVar2 = OSSL_PARAM_get_size_t(lVar4,param_1 + 0x18), iVar2 == 0)) {
      return false;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"priv_len");
    if (lVar4 == 0) {
      return true;
    }
    iVar2 = OSSL_PARAM_get_int(lVar4,param_1 + 0x4c);
    return iVar2 != 0;
  }
  if (((*(int *)(lVar4 + 8) == 4) && (*(long *)(lVar4 + 0x10) != 0)) &&
     (lVar4 = ossl_ffc_name_to_dh_named_group(), lVar4 != 0)) {
    iVar2 = ossl_ffc_named_group_get_uid(lVar4);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) goto LAB_00100a84;
  }
  ERR_new();
  uVar5 = 0x22d;
LAB_00100b19:
  ERR_set_debug("providers/implementations/keymgmt/dh_kmgmt.c",uVar5,"dh_gen_common_set_params");
  ERR_set_error(0x39,0x80106,0);
  return false;
}



undefined8 dh_gen_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = dh_gen_common_set_params();
  if ((iVar1 != 0) &&
     ((lVar2 = OSSL_PARAM_locate_const(param_2,"safeprime-generator"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x40), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"gindex");
    if (((lVar2 == 0) &&
        (((lVar2 = OSSL_PARAM_locate_const(param_2,"pcounter"), lVar2 == 0 &&
          (lVar2 = OSSL_PARAM_locate_const(param_2,"hindex"), lVar2 == 0)) &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,&_LC18), lVar2 == 0)))) &&
       (((lVar2 = OSSL_PARAM_locate_const(param_2,"qbits"), lVar2 == 0 &&
         (lVar2 = OSSL_PARAM_locate_const(param_2,"digest"), lVar2 == 0)) &&
        (lVar2 = OSSL_PARAM_locate_const(param_2,"properties"), lVar2 == 0)))) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/dh_kmgmt.c",0x2a7,"dh_gen_set_params");
    ERR_set_error(0x39,0x80106,0);
  }
  return 0;
}



long dh_newdata(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    lVar3 = ossl_dh_new_ex(uVar2);
    if (lVar3 != 0) {
      DH_clear_flags(lVar3,0xf000);
      DH_set_flags(lVar3,0);
    }
  }
  return lVar3;
}



long dhx_newdata(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  lVar2 = ossl_dh_new_ex(uVar1);
  if (lVar2 != 0) {
    DH_clear_flags(lVar2,0xf000);
    DH_set_flags(lVar2,0x1000);
  }
  return lVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * dh_gen_init_base(undefined8 param_1,uint param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *ptr;
  
  uVar4 = ossl_prov_ctx_get0_libctx();
  iVar3 = ossl_prov_is_running();
  if ((iVar3 != 0) && ((param_2 & 7) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x78,"providers/implementations/keymgmt/dh_kmgmt.c",0x1cc);
    uVar2 = _UNK_00102178;
    uVar1 = __LC22;
    if (ptr != (undefined8 *)0x0) {
      *(uint *)(ptr + 2) = param_2;
      *ptr = uVar4;
      ptr[10] = 0;
      ptr[3] = uVar1;
      ptr[4] = uVar2;
      *(undefined4 *)(ptr + 7) = 0xffffffff;
      *(uint *)((long)ptr + 0x3c) = (uint)(param_4 == 0x1000);
      ptr[8] = 0xffffffff00000002;
      *(undefined4 *)(ptr + 9) = 0;
      *(int *)(ptr + 0xe) = param_4;
    }
    iVar3 = dh_gen_set_params(ptr,param_3);
    if (iVar3 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void dh_gen_init(void)

{
  dh_gen_init_base();
  return;
}



void dhx_gen_init(void)

{
  dh_gen_init_base();
  return;
}



undefined8 dhx_gen_set_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  iVar1 = dh_gen_common_set_params();
  if ((((iVar1 != 0) &&
       ((lVar2 = OSSL_PARAM_locate_const(param_2,"gindex"), lVar2 == 0 ||
        (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x38), iVar1 != 0)))) &&
      ((lVar2 = OSSL_PARAM_locate_const(param_2,"pcounter"), lVar2 == 0 ||
       (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x44), iVar1 != 0)))) &&
     ((lVar2 = OSSL_PARAM_locate_const(param_2,"hindex"), lVar2 == 0 ||
      (iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x48), iVar1 != 0)))) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC18);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        return 0;
      }
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar2 = *(long *)(lVar2 + 0x18);
      CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        "providers/implementations/keymgmt/dh_kmgmt.c",0x202);
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      if ((lVar3 != 0) && (lVar2 != 0)) {
        lVar3 = CRYPTO_memdup(lVar3,lVar2,"providers/implementations/keymgmt/dh_kmgmt.c",0x206);
        *(long *)(param_1 + 0x28) = lVar3;
        if (lVar3 == 0) {
          return 0;
        }
        *(long *)(param_1 + 0x30) = lVar2;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"qbits");
    if ((lVar2 == 0) || (iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 0x20), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"digest");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        CRYPTO_free(*(void **)(param_1 + 0x50));
        pcVar4 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                               "providers/implementations/keymgmt/dh_kmgmt.c",0x27b);
        *(char **)(param_1 + 0x50) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 8) != 4) {
          return 0;
        }
        CRYPTO_free(*(void **)(param_1 + 0x58));
        pcVar4 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                               "providers/implementations/keymgmt/dh_kmgmt.c",0x284);
        *(char **)(param_1 + 0x58) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          return 0;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"safeprime-generator");
      if (lVar2 == 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/dh_kmgmt.c",0x28c,"dhx_gen_set_params");
      ERR_set_error(0x39,0x8010c,0);
    }
  }
  return 0;
}



void dh_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x58));
    CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x28),*(undefined8 *)((long)param_1 + 0x30),
                      "providers/implementations/keymgmt/dh_kmgmt.c",0x332);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool dh_validate(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined4 local_3c;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) goto LAB_00101160;
  if ((param_2 & 7) != 0) {
    if ((param_2 & 4) != 0) {
      if (param_3 == 1) {
        iVar1 = DH_check_params_ex(param_1);
      }
      else {
        iVar1 = DH_check_ex();
      }
      if (iVar1 == 0) goto LAB_00101160;
    }
    if ((param_2 & 2) != 0) {
      local_38 = 0;
      local_3c = 0;
      DH_get0_key(param_1,&local_38,0);
      if (local_38 != 0) {
        iVar1 = ossl_dh_is_named_safe_prime_group(param_1);
        if (iVar1 == 0) {
          iVar1 = DH_check_pub_key_ex(param_1,local_38);
        }
        else {
          iVar1 = ossl_dh_check_pub_key_partial(param_1,local_38,&local_3c);
        }
        if (iVar1 != 0) goto LAB_001011f2;
      }
LAB_00101160:
      bVar2 = false;
      goto LAB_00101162;
    }
LAB_001011f2:
    if ((param_2 & 1) != 0) {
      local_3c = 0;
      local_38 = 0;
      DH_get0_key(param_1,0,&local_38);
      if ((local_38 == 0) ||
         (iVar1 = ossl_dh_check_priv_key(param_1,local_38,&local_3c), iVar1 == 0))
      goto LAB_00101160;
      if ((~param_2 & 3) == 0) {
        iVar1 = ossl_dh_check_pairwise(param_1);
        bVar2 = iVar1 != 0;
        goto LAB_00101162;
      }
    }
  }
  bVar2 = true;
LAB_00101162:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



undefined8 dh_export_types(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 & 0x84) != 0);
  if ((param_1 & 3) != 0) {
    uVar1 = uVar1 + 2;
  }
  return *(undefined8 *)(dh_types + (long)(int)uVar1 * 8);
}




undefined1 * ml_kem_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = key_types_10;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * ml_kem_gettable_params(void)

{
  return arr_0;
}



undefined1 * ml_kem_settable_params(void)

{
  return arr_2;
}



undefined1 * ml_kem_gen_settable_params(void)

{
  return settable_4;
}



uint ml_kem_export(long *param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  void *ptr;
  long lVar4;
  uint uVar5;
  void *local_60;
  undefined8 local_58;
  size_t local_50;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 == (long *)0x0) || (iVar1 == 0)) || ((param_2 & 3) == 0)) {
LAB_00100460:
    uVar5 = 0;
  }
  else {
    lVar3 = *param_1;
    if (param_1[8] == 0) {
      if ((param_2 & 1) == 0) {
LAB_00100430:
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x100,"ml_kem_export");
        ERR_set_error(0x39,0x80,0);
        goto LAB_00100460;
      }
      if (param_1[0x16] != 0) {
        lVar4 = param_1[0xc];
        ptr = (void *)0x0;
        goto LAB_001000ca;
      }
      if ((param_1[10] != 0) || (ptr = (void *)0x0, param_1[0xc] == 0)) goto LAB_00100430;
LAB_00100360:
      lVar4 = CRYPTO_secure_zalloc(0x40,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x112);
      if (lVar4 == 0) {
        lVar2 = 0;
        uVar5 = 0;
        local_60 = (void *)0x0;
        local_58 = 0x40;
        local_50 = 0;
      }
      else {
        iVar1 = ossl_ml_kem_encode_seed(lVar4,0x40,param_1);
        local_58 = 0x40;
        if (iVar1 != 0) goto LAB_001000dc;
        local_50 = 0;
        lVar2 = 0;
        local_60 = (void *)0x0;
        uVar5 = 0;
      }
    }
    else {
      ptr = (void *)0x0;
      if ((param_2 & 2) == 0) {
LAB_001000b9:
        uVar5 = param_2 & 1;
        if ((param_2 & 1) == 0) {
          lVar2 = OSSL_PARAM_BLD_new();
          if (lVar2 != 0) {
            local_58 = 0;
            lVar4 = 0;
            local_50 = 0;
            local_60 = (void *)0x0;
            goto LAB_001001df;
          }
          local_60 = (void *)0x0;
          lVar4 = 0;
          local_58 = 0;
          local_50 = 0;
        }
        else {
          lVar4 = param_1[0xc];
LAB_001000ca:
          if (lVar4 != 0) goto LAB_00100360;
          local_58 = 0;
          lVar4 = 0;
LAB_001000dc:
          if (param_1[10] == 0) {
            if (param_1[0x16] == 0) {
              lVar2 = OSSL_PARAM_BLD_new();
              local_60 = (void *)0x0;
              if (lVar2 == 0) {
                local_50 = 0;
                uVar5 = 0;
              }
              else {
                local_50 = 0;
                if (lVar4 != 0) {
LAB_00100145:
                  uVar5 = ossl_param_build_set_octet_string(lVar2,0,&_LC1,lVar4,local_58);
                  if (uVar5 == 0) goto LAB_00100251;
                  if (local_60 != (void *)0x0) goto LAB_0010017b;
                }
LAB_001001df:
                if (((ptr != (void *)0x0) &&
                    (iVar1 = ossl_param_build_set_octet_string
                                       (lVar2,0,&_LC3,ptr,*(undefined8 *)(lVar3 + 0x18)), iVar1 == 0
                    )) || (lVar3 = OSSL_PARAM_BLD_to_param(lVar2), lVar3 == 0)) goto LAB_00100428;
                uVar5 = (*param_3)(lVar3,param_4);
                OSSL_PARAM_free(lVar3);
              }
            }
            else {
              local_50 = *(size_t *)(lVar3 + 8);
              local_60 = (void *)CRYPTO_secure_zalloc
                                           (local_50,
                                            "providers/implementations/keymgmt/ml_kem_kmgmt.c",0x11d
                                           );
              if (local_60 == (void *)0x0) goto LAB_001004cc;
              memcpy(local_60,(void *)param_1[0x16],local_50);
              lVar2 = OSSL_PARAM_BLD_new();
              if (lVar2 != 0) goto LAB_00100140;
LAB_00100428:
              uVar5 = 0;
            }
          }
          else {
            local_50 = *(size_t *)(lVar3 + 8);
            local_60 = (void *)CRYPTO_secure_zalloc
                                         (local_50,
                                          "providers/implementations/keymgmt/ml_kem_kmgmt.c",0x118);
            if (local_60 == (void *)0x0) {
LAB_001004cc:
              lVar2 = 0;
              uVar5 = 0;
            }
            else {
              uVar5 = ossl_ml_kem_encode_private_key(local_60,local_50,param_1);
              lVar2 = 0;
              if (uVar5 != 0) {
                lVar2 = OSSL_PARAM_BLD_new();
                if (lVar2 == 0) goto LAB_00100428;
LAB_00100140:
                if (lVar4 != 0) goto LAB_00100145;
LAB_0010017b:
                iVar1 = ossl_param_build_set_octet_string(lVar2,0,&_LC2,local_60,local_50);
                if (iVar1 != 0) goto LAB_001001df;
                uVar5 = 0;
              }
            }
          }
        }
      }
      else {
        ptr = CRYPTO_malloc((int)*(undefined8 *)(lVar3 + 0x18),
                            "providers/implementations/keymgmt/ml_kem_kmgmt.c",0x104);
        if (ptr == (void *)0x0) {
          lVar4 = 0;
          lVar2 = 0;
          local_60 = (void *)0x0;
          uVar5 = 0;
          local_58 = 0;
          local_50 = 0;
        }
        else {
          iVar1 = ossl_ml_kem_encode_public_key(ptr,*(undefined8 *)(lVar3 + 0x18),param_1);
          if (iVar1 != 0) goto LAB_001000b9;
          local_58 = 0;
          lVar4 = 0;
          lVar2 = 0;
          local_50 = 0;
          local_60 = (void *)0x0;
          uVar5 = 0;
        }
      }
    }
LAB_00100251:
    OSSL_PARAM_BLD_free(lVar2);
    CRYPTO_secure_clear_free
              (lVar4,local_58,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x142);
    CRYPTO_secure_clear_free
              (local_60,local_50,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x143);
    CRYPTO_free(ptr);
  }
  return uVar5;
}



undefined8 ml_kem_set_params(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_18 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    if ((lVar2 != 0) &&
       ((iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar2,&local_20,&local_18), iVar1 != 1 ||
        (*(long *)(*param_1 + 0x18) != local_18)))) {
      ERR_new();
      ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x294,"ml_kem_set_params");
      ERR_set_error(0x39,0x9e,0);
      uVar3 = 0;
      goto LAB_001005d5;
    }
    if (local_18 != 0) {
      if (param_1[8] == 0) {
        uVar3 = ossl_ml_kem_parse_public_key(local_20,local_18,param_1);
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x29d,"ml_kem_set_params");
        ERR_set_error(0x39,0xb2,"ML-KEM keys cannot be mutated");
        uVar3 = 0;
      }
      goto LAB_001005d5;
    }
  }
  uVar3 = 1;
LAB_001005d5:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 check_prvenc(void *param_1,long *param_2)

{
  size_t __n;
  int iVar1;
  void *__s1;
  
  __n = *(size_t *)(*param_2 + 8);
  __s1 = CRYPTO_malloc((int)__n,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x167);
  if (__s1 == (void *)0x0) {
    CRYPTO_clear_free(0,__n,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x16d);
  }
  else {
    iVar1 = ossl_ml_kem_encode_private_key(__s1,__n,param_2);
    if (iVar1 == 0) {
      CRYPTO_clear_free(__s1,__n,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x16d);
    }
    else {
      iVar1 = memcmp(__s1,param_1,__n);
      CRYPTO_clear_free(__s1,__n,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x16d);
      if (iVar1 == 0) {
        return 1;
      }
    }
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x172,"check_prvenc");
    ERR_set_error(0x39,0x9e,"explicit %s private key does not match seed",*(undefined8 *)*param_2);
  }
  ossl_ml_kem_key_reset(param_2);
  return 0;
}



undefined8 ml_kem_dup(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = ossl_ml_kem_key_dup(param_1,param_2);
    return uVar2;
  }
  return 0;
}



void ml_kem_gen_cleanup(void *param_1)

{
  if (*(void **)((long)param_1 + 0x58) != (void *)0x0) {
    OPENSSL_cleanse(*(void **)((long)param_1 + 0x58),0x20);
  }
  CRYPTO_free(*(void **)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}



undefined8 ml_kem_gen_set_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_00100841;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) == 4) {
        CRYPTO_free(*(void **)(param_1 + 8));
        pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                               "providers/implementations/keymgmt/ml_kem_kmgmt.c",0x2b5);
        *(char **)(param_1 + 8) = pcVar3;
        if (pcVar3 != (char *)0x0) goto LAB_001008a3;
      }
LAB_00100841:
      uVar4 = 0;
      goto LAB_0010084d;
    }
LAB_001008a3:
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (lVar2 != 0) {
      *(long *)(param_1 + 0x58) = param_1 + 0x18;
      local_38 = 0x40;
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,param_1 + 0x58,0x40,&local_38);
      if ((iVar1 == 0) || (uVar4 = 1, local_38 != 0x40)) {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x2c3,
                      "ml_kem_gen_set_params");
        ERR_set_error(0x39,0x9a,0);
        *(undefined8 *)(param_1 + 0x58) = 0;
        uVar4 = 0;
      }
      goto LAB_0010084d;
    }
  }
  uVar4 = 1;
LAB_0010084d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ml_kem_get_params(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *__dest;
  int iVar2;
  long lVar3;
  long lVar4;
  void *__src;
  char **ppcVar5;
  long in_FS_OFFSET;
  bool bVar6;
  char *local_58 [3];
  long local_40;
  
  lVar4 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = "pub";
  local_58[1] = "encoded-pub-key";
  lVar3 = OSSL_PARAM_locate(param_2,&_LC8);
  if ((((lVar3 == 0) ||
       (iVar2 = OSSL_PARAM_set_int(lVar3,*(undefined4 *)(lVar4 + 0x44)), iVar2 != 0)) &&
      ((lVar3 = OSSL_PARAM_locate(param_2,"security-bits"), lVar3 == 0 ||
       (iVar2 = OSSL_PARAM_set_int(lVar3,*(undefined4 *)(lVar4 + 0x54)), iVar2 != 0)))) &&
     ((lVar3 = OSSL_PARAM_locate(param_2,"max-size"), lVar3 == 0 ||
      (iVar2 = OSSL_PARAM_set_int(lVar3,*(undefined4 *)(lVar4 + 0x28)), iVar2 != 0)))) {
    if (param_1[8] != 0) {
      ppcVar5 = local_58;
      __src = (void *)0x0;
      do {
        lVar3 = OSSL_PARAM_locate(param_2,*ppcVar5);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 8) != 5) goto LAB_00100a90;
          uVar1 = *(ulong *)(lVar4 + 0x18);
          __dest = *(void **)(lVar3 + 0x10);
          *(ulong *)(lVar3 + 0x20) = uVar1;
          if (__dest != (void *)0x0) {
            if (*(ulong *)(lVar3 + 0x18) < uVar1) goto LAB_00100a90;
            if (__src == (void *)0x0) {
              iVar2 = ossl_ml_kem_encode_public_key(__dest,uVar1,param_1);
              if (iVar2 == 0) goto LAB_00100a90;
              __src = *(void **)(lVar3 + 0x10);
            }
            else {
              memcpy(__dest,__src,uVar1);
            }
          }
        }
        ppcVar5 = ppcVar5 + 1;
      } while (ppcVar5 != local_58 + 2);
    }
    lVar3 = OSSL_PARAM_locate(param_2,&_LC2);
    if ((lVar3 == 0) || (param_1[10] == 0)) {
LAB_00100ae0:
      lVar4 = OSSL_PARAM_locate(param_2,&_LC1);
      if ((lVar4 == 0) || (param_1[0xc] == 0)) {
LAB_00100b60:
        bVar6 = true;
        goto LAB_00100a92;
      }
      if (*(int *)(lVar4 + 8) == 5) {
        *(undefined8 *)(lVar4 + 0x20) = 0x40;
        if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00100b60;
        if (0x3f < *(ulong *)(lVar4 + 0x18)) {
          iVar2 = ossl_ml_kem_encode_seed(*(long *)(lVar4 + 0x10),0x40,param_1);
          bVar6 = iVar2 != 0;
          goto LAB_00100a92;
        }
      }
    }
    else if (*(int *)(lVar3 + 8) == 5) {
      uVar1 = *(ulong *)(lVar4 + 8);
      *(ulong *)(lVar3 + 0x20) = uVar1;
      if ((*(long *)(lVar3 + 0x10) == 0) ||
         ((uVar1 <= *(ulong *)(lVar3 + 0x18) &&
          (iVar2 = ossl_ml_kem_encode_private_key(*(long *)(lVar3 + 0x10),uVar1,param_1), iVar2 != 0
          )))) goto LAB_00100ae0;
    }
  }
LAB_00100a90:
  bVar6 = false;
LAB_00100a92:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



bool ml_kem_has(long param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar1 != 0)) {
    bVar2 = true;
    if ((param_2 & 3) != 0) {
      if ((param_2 & 3) == 2) {
        return *(long *)(param_1 + 0x40) != 0;
      }
      bVar2 = *(long *)(param_1 + 0x50) != 0;
    }
    return bVar2;
  }
  return false;
}



undefined8 check_seed(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)(*(long *)(*param_3 + 8) + -0x20 + param_2);
  if (*(long *)(param_1 + 0x20) == *plVar1 && *(long *)(param_1 + 0x28) == plVar1[1]) {
    if (*(long *)(param_1 + 0x30) == plVar1[2] && *(long *)(param_1 + 0x38) == plVar1[3]) {
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x15e,"check_seed");
  ERR_set_error(0x39,0x9e,"private %s key implicit rejection secret does not match seed",
                *(undefined8 *)*param_3);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ml_kem_pairwise_test(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *ptr;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[10] == 0) || (param_1[8] == 0)) {
    uVar3 = 1;
    goto LAB_00100cb5;
  }
  uVar3 = 1;
  if ((param_2 & 3) == 0) goto LAB_00100cb5;
  puVar1 = (undefined8 *)*param_1;
  ptr = CRYPTO_malloc((int)puVar1[5],"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x69);
  if (ptr == (void *)0x0) {
LAB_00100da0:
    ERR_new();
    uVar3 = 0;
    ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x90,"ml_kem_pairwise_test");
    ERR_set_error(0x39,0x9e,"public part of %s private key fails to match private",*puVar1);
  }
  else {
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    if ((param_2 & 1) == 0) {
      local_98 = __LC13;
      uStack_90 = _UNK_00102298;
      local_a8 = __LC13;
      uStack_a0 = _UNK_00102298;
      iVar2 = ossl_ml_kem_encap_seed(ptr,puVar1[5],&local_88,0x20,&local_a8,0x20,param_1);
    }
    else {
      iVar2 = ossl_ml_kem_encap_rand(ptr,puVar1[5],&local_88,0x20,param_1);
    }
    if ((iVar2 != 1) || (iVar2 = ossl_ml_kem_decap(local_68,0x20,ptr,puVar1[5],param_1), iVar2 != 1)
       ) goto LAB_00100da0;
    if (local_68._0_8_ != local_88 || local_68._8_8_ != local_80) goto LAB_00100da0;
    if (local_58._0_8_ != local_78 || local_58._8_8_ != local_70) goto LAB_00100da0;
    uVar3 = 1;
  }
  CRYPTO_free(ptr);
LAB_00100cb5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int ml_kem_import(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  void *local_70;
  long local_68;
  undefined8 local_60;
  size_t local_58;
  long local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_prov_is_running();
  if (((iVar5 != 0) && (param_1 != (long *)0x0)) && ((param_2 & 3) != 0)) {
    local_70 = (void *)0x0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    if (param_1[8] == 0) {
      puVar1 = (undefined8 *)*param_1;
      if ((param_2 & 1) == 0) {
LAB_00100fc0:
        lVar7 = OSSL_PARAM_locate_const(param_3,&_LC3);
        if ((lVar7 == 0) ||
           (iVar5 = OSSL_PARAM_get_octet_string_ptr(lVar7,&local_70,&local_58), iVar5 == 1)) {
          uVar4 = local_48;
          lVar3 = local_50;
          lVar7 = local_68;
          if (local_58 == 0) {
            if (local_48 == 0) {
              if (local_50 == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x1af,
                              "ml_kem_key_fromdata");
                ERR_set_error(0x39,0x80,0);
                goto LAB_00100e8f;
              }
LAB_00101053:
              iVar5 = ossl_ml_kem_parse_private_key(lVar7,lVar3,param_1);
              bVar2 = 0 < iVar5;
            }
            else {
              if (local_50 != 0) {
LAB_00101112:
                if ((*(byte *)(param_1 + 0xd) & 4) == 0) goto LAB_00101053;
                iVar5 = check_seed(local_60,lVar7,param_1);
                if (iVar5 == 0) goto LAB_00100e8f;
              }
LAB_00101139:
              lVar7 = ossl_ml_kem_set_seed(local_60,local_48,param_1);
              if (((lVar7 == 0) || (iVar5 = ossl_ml_kem_genkey(0,0,param_1), iVar5 == 0)) ||
                 ((local_50 != 0 && (iVar5 = check_prvenc(local_68,param_1), iVar5 == 0))))
              goto LAB_00100e8f;
              bVar2 = true;
              iVar5 = 1;
            }
          }
          else {
            if (local_58 != puVar1[3]) {
              ERR_new();
              uVar8 = 0x1a9;
LAB_00100f98:
              ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",uVar8,
                            "ml_kem_key_fromdata");
              ERR_set_error(0x39,0x69,0);
              goto LAB_00100e8f;
            }
            if (local_48 != 0) {
              if (local_50 == 0) goto LAB_00101139;
LAB_00101023:
              iVar5 = memcmp(local_70,(void *)(((local_50 + -0x40) - local_58) + local_68),local_58)
              ;
              if (iVar5 == 0) {
                if (uVar4 != 0) goto LAB_00101112;
                goto LAB_00101053;
              }
              ERR_new();
              ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x1b8,
                            "ml_kem_key_fromdata");
              ERR_set_error(0x39,0x9e,"explicit %s public key does not match private",*puVar1);
              goto LAB_00100e8f;
            }
            if (local_50 != 0) goto LAB_00101023;
            iVar5 = ossl_ml_kem_parse_public_key(local_70,local_58,param_1);
            bVar2 = 0 < iVar5;
          }
          if ((((param_2 & 1) == 0) || (!bVar2)) ||
             (iVar6 = ml_kem_pairwise_test(param_1,(int)param_1[0xd]), iVar6 != 0))
          goto LAB_00100e98;
          ossl_ml_kem_key_reset(param_1);
        }
      }
      else {
        lVar7 = OSSL_PARAM_locate_const(param_3,&_LC1);
        if ((lVar7 == 0) ||
           (iVar5 = OSSL_PARAM_get_octet_string_ptr(lVar7,&local_60,&local_48), iVar5 == 1)) {
          if ((local_48 & 0xffffffffffffffbf) == 0) {
            lVar7 = OSSL_PARAM_locate_const(param_3,&_LC2);
            if ((lVar7 == 0) ||
               (iVar5 = OSSL_PARAM_get_octet_string_ptr(lVar7,&local_68,&local_50), iVar5 == 1)) {
              if ((local_50 == 0) || (local_50 == puVar1[1])) goto LAB_00100fc0;
              ERR_new();
              uVar8 = 0x19e;
              goto LAB_00100f98;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x196,
                          "ml_kem_key_fromdata");
            ERR_set_error(0x39,0x9a,0);
          }
        }
      }
    }
  }
LAB_00100e8f:
  iVar5 = 0;
LAB_00100e98:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



long * ml_kem_load(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *ptr;
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((param_2 == 8) && (iVar1 != 0)) {
    plVar2 = (long *)*param_1;
    ptr = (void *)plVar2[0x16];
    plVar2[0x16] = 0;
    *param_1 = 0;
    if (ptr == (void *)0x0) {
      if (plVar2[0xc] != 0) {
        iVar1 = ossl_ml_kem_genkey(0,0,plVar2);
joined_r0x00101399:
        if (iVar1 == 0) goto LAB_00101314;
      }
LAB_001012ef:
      CRYPTO_free(ptr);
      plVar3 = plVar2;
      goto LAB_0010132e;
    }
    iVar1 = ossl_ml_kem_encode_seed(auStack_68,0x40,plVar2);
    if ((iVar1 == 0) || (iVar1 = check_seed(auStack_68,ptr,plVar2), iVar1 != 0)) {
      if ((plVar2[0xc] == 0) || ((*(byte *)(plVar2 + 0xd) & 4) == 0)) {
        iVar1 = ossl_ml_kem_parse_private_key(ptr,*(undefined8 *)(*plVar2 + 8),plVar2);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/keymgmt/ml_kem_kmgmt.c",0x216,"ml_kem_load");
          ERR_set_error(0x39,0x9e,"error parsing %s private key",*(undefined8 *)*plVar2);
        }
        else {
          iVar1 = ml_kem_pairwise_test(plVar2,(int)plVar2[0xd]);
          if (iVar1 != 0) goto LAB_001012ef;
        }
      }
      else {
        iVar1 = ossl_ml_kem_genkey(0,0,plVar2);
        if (iVar1 != 0) {
          iVar1 = check_prvenc(ptr,plVar2);
          goto joined_r0x00101399;
        }
      }
    }
  }
  else {
    ptr = (void *)0x0;
    plVar2 = (long *)0x0;
  }
LAB_00101314:
  CRYPTO_free(ptr);
  plVar3 = (long *)0x0;
  ossl_ml_kem_key_free(plVar2);
LAB_0010132e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ml_kem_match(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if (((int)uVar1 != 0) && (uVar1 = 1, (param_3 & 3) != 0)) {
    uVar1 = ossl_ml_kem_pubkey_cmp(param_1,param_2);
    return uVar1;
  }
  return uVar1;
}



ulong ml_kem_validate(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != 0)) {
    if ((param_2 & 3) == 0) {
      return 1;
    }
    if ((param_2 & 3) == 2) {
      return (ulong)(*(long *)(param_1 + 0x40) != 0);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      if ((param_2 & 3) != 3) {
        return 1;
      }
      uVar2 = ml_kem_pairwise_test(param_1,1);
      return uVar2;
    }
  }
  return 0;
}



undefined8 * ml_kem_768_gen_init(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 5) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x60,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x2d6)
    ;
    if (ptr != (undefined8 *)0x0) {
      *(uint *)(ptr + 2) = param_2;
      *(undefined4 *)((long)ptr + 0x14) = 0x5af;
      *ptr = param_1;
      iVar1 = ml_kem_gen_set_params(ptr,param_3);
      if (iVar1 != 0) {
        return ptr;
      }
      if ((void *)ptr[0xb] != (void *)0x0) {
        OPENSSL_cleanse((void *)ptr[0xb],0x20);
      }
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * ml_kem_1024_gen_init(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 5) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x60,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x2d6)
    ;
    if (ptr != (undefined8 *)0x0) {
      *(uint *)(ptr + 2) = param_2;
      *(undefined4 *)((long)ptr + 0x14) = 0x5b0;
      *ptr = param_1;
      iVar1 = ml_kem_gen_set_params(ptr,param_3);
      if (iVar1 != 0) {
        return ptr;
      }
      if ((void *)ptr[0xb] != (void *)0x0) {
        OPENSSL_cleanse((void *)ptr[0xb],0x20);
      }
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined8 * ml_kem_512_gen_init(undefined8 param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *ptr;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && ((param_2 & 5) != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x60,"providers/implementations/keymgmt/ml_kem_kmgmt.c",0x2d6)
    ;
    if (ptr != (undefined8 *)0x0) {
      *(uint *)(ptr + 2) = param_2;
      *(undefined4 *)((long)ptr + 0x14) = 0x5ae;
      *ptr = param_1;
      iVar1 = ml_kem_gen_set_params(ptr,param_3);
      if (iVar1 != 0) {
        return ptr;
      }
      if ((void *)ptr[0xb] != (void *)0x0) {
        OPENSSL_cleanse((void *)ptr[0xb],0x20);
      }
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



long ossl_prov_ml_kem_new(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar3 = ossl_prov_ctx_get0_libctx(param_1);
    lVar4 = ossl_ml_kem_key_new(uVar3,param_2,param_3);
    if (lVar4 != 0) {
      uVar3 = ossl_prov_ctx_get_param(param_1,"ml-kem.import_pct_type","random");
      iVar1 = ossl_prov_ctx_get_bool_param(param_1,"ml-kem.retain_seed",1);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(lVar4 + 0x68) & 0xfffffff7;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x68) | 8;
      }
      *(uint *)(lVar4 + 0x68) = uVar2;
      iVar1 = ossl_prov_ctx_get_bool_param(param_1,"ml-kem.prefer_seed",1);
      if (iVar1 == 0) {
        uVar2 = *(uint *)(lVar4 + 0x68) & 0xfffffffb;
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x68) | 4;
      }
      *(uint *)(lVar4 + 0x68) = uVar2;
      iVar1 = OPENSSL_strcasecmp(uVar3,"random");
      if (iVar1 != 0) {
        iVar1 = OPENSSL_strcasecmp(uVar3,"fixed");
        if (iVar1 == 0) {
          *(uint *)(lVar4 + 0x68) = *(uint *)(lVar4 + 0x68) | 2;
          return lVar4;
        }
        *(uint *)(lVar4 + 0x68) = *(uint *)(lVar4 + 0x68) & 0xfffffffc;
        return lVar4;
      }
      *(uint *)(lVar4 + 0x68) = *(uint *)(lVar4 + 0x68) | 1;
      return lVar4;
    }
  }
  return 0;
}



long ml_kem_gen(undefined8 *param_1)

{
  void *ptr;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if ((param_1 != (undefined8 *)0x0) && ((*(uint *)(param_1 + 2) & 3) != 2)) {
    ptr = (void *)param_1[0xb];
    lVar2 = ossl_prov_ml_kem_new(*param_1,param_1[1],*(undefined4 *)((long)param_1 + 0x14));
    if (lVar2 != 0) {
      if ((*(byte *)(param_1 + 2) & 3) != 0) {
        if (ptr == (void *)0x0) {
          iVar1 = ossl_ml_kem_genkey(0,0,lVar2);
        }
        else {
          lVar3 = ossl_ml_kem_set_seed(ptr,0x40);
          if (lVar3 == 0) {
            return 0;
          }
          iVar1 = ossl_ml_kem_genkey(0,0,lVar2);
          OPENSSL_cleanse(ptr,0x40);
        }
        param_1[0xb] = 0;
        if (iVar1 == 0) {
          ossl_ml_kem_key_free(lVar2);
          return 0;
        }
      }
      return lVar2;
    }
  }
  return 0;
}



void ml_kem_512_new(undefined8 param_1)

{
  ossl_prov_ml_kem_new(param_1,0,0x5ae);
  return;
}



void ml_kem_768_new(undefined8 param_1)

{
  ossl_prov_ml_kem_new(param_1,0,0x5af);
  return;
}



void ml_kem_1024_new(undefined8 param_1)

{
  ossl_prov_ml_kem_new(param_1,0,0x5b0);
  return;
}



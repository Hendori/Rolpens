
undefined1 * mlx_kem_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = key_types_7;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * mlx_kem_gettable_params(void)

{
  return arr_1;
}



undefined1 * mlx_kem_settable_params(void)

{
  return arr_3;
}



undefined1 * mlx_kem_gen_settable_params(void)

{
  return settable_4;
}



undefined8 export_sub(undefined8 *param_1,undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = 0;
  param_1[3] = 0;
  while( true ) {
    puVar1 = *(undefined8 **)(param_3 + 0x18);
    puVar2 = *(undefined8 **)(param_3 + 0x10);
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    uVar6 = puVar2[3];
    uVar7 = puVar2[1];
    if (*(int *)(puVar1 + 5) == (int)lVar10) {
      uVar8 = *puVar2;
      uVar9 = puVar1[2] & -lVar10;
      uVar4 = -lVar10 & puVar1[3];
    }
    else {
      uVar8 = *puVar1;
      lVar3 = (long)(1 - *(int *)(puVar1 + 5));
      uVar9 = uVar6 * lVar3;
      uVar4 = lVar3 * uVar7;
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar5 = *(undefined8 *)(param_3 + 0x28);
    }
    *param_1 = uVar8;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[4] = uVar9;
    param_1[5] = uVar4;
    uVar5 = EVP_PKEY_export(uVar5,param_2,export_sub_cb,param_1);
    if ((int)uVar5 == 0) break;
    if (lVar10 != 0) {
      return 1;
    }
    lVar10 = 1;
  }
  return uVar5;
}



undefined8 export_sub_cb(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    if (param_2[1] != 0) {
      lVar2 = OSSL_PARAM_locate_const(param_1,&_LC0);
      if (lVar2 == 0) goto LAB_001001c0;
      local_28 = param_2[4] + param_2[1];
      iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,param_2[6],&local_30);
      if (iVar1 == 1) {
        if (param_2[6] == local_30) {
          *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
          goto LAB_001001c0;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0xb4,"export_sub_cb");
        ERR_set_error(0x39,0xc0103,"Unexpected %s public key length %lu != %lu",*param_2,local_30,
                      param_2[6]);
      }
      goto LAB_00100268;
    }
LAB_001001c0:
    if (param_2[2] != 0) {
      lVar2 = OSSL_PARAM_locate_const(param_1,&_LC3);
      if (lVar2 != 0) {
        local_28 = param_2[5] + param_2[2];
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,param_2[7],&local_30);
        if (iVar1 == 1) {
          if (param_2[7] == local_30) {
            *(int *)((long)param_2 + 0x1c) = *(int *)((long)param_2 + 0x1c) + 1;
            goto LAB_00100218;
          }
          ERR_new();
          ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0xc3,"export_sub_cb");
          ERR_set_error(0x39,0xc0103,"Unexpected %s private key length %lu != %lu",*param_2,local_30
                        ,param_2[6]);
        }
LAB_00100268:
        uVar3 = 0;
        goto LAB_0010026a;
      }
    }
  }
LAB_00100218:
  uVar3 = 1;
LAB_0010026a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mlx_kem_gen_set_params(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
    return false;
  }
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) &&
     (lVar1 = OSSL_PARAM_locate_const(param_2,"properties"), lVar1 != 0)) {
    if (*(int *)(lVar1 + 8) == 4) {
      CRYPTO_free(*(void **)(param_1 + 8));
      pcVar2 = CRYPTO_strdup(*(char **)(lVar1 + 0x10),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x285);
      *(char **)(param_1 + 8) = pcVar2;
      return pcVar2 != (char *)0x0;
    }
    return false;
  }
  return true;
}



bool mlx_kem_match(long param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar1 = *(int *)(param_2 + 0x30);
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))) {
    if ((param_3 & 3) == 0) {
      return true;
    }
    if ((iVar3 != 0) == (iVar1 != 0)) {
      if (iVar3 == 0) {
        return true;
      }
      iVar3 = EVP_PKEY_eq(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
      if (iVar3 != 0) {
        iVar3 = EVP_PKEY_eq(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
        return iVar3 != 0;
      }
    }
  }
  return false;
}



bool mlx_kem_has(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if ((param_1 != 0) && (iVar2 != 0)) {
    bVar1 = true;
    if ((param_2 & 3) != 0) {
      if ((param_2 & 3) == 2) {
        return *(int *)(param_1 + 0x30) != 0;
      }
      bVar1 = 1 < *(uint *)(param_1 + 0x30);
    }
    return bVar1;
  }
  return false;
}



bool mlx_kem_get_params(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  lVar5 = OSSL_PARAM_locate(param_2,&_LC6);
  if ((((lVar5 != 0) &&
       (iVar4 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x44)),
       iVar4 == 0)) ||
      ((lVar5 = OSSL_PARAM_locate(param_2,"security-bits"), lVar5 != 0 &&
       (iVar4 = OSSL_PARAM_set_int(lVar5,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x54)),
       iVar4 == 0)))) ||
     ((lVar5 = OSSL_PARAM_locate(param_2,"max-size"), lVar5 != 0 &&
      (iVar4 = OSSL_PARAM_set_int(lVar5,(int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) +
                                        *(int *)(*(long *)(param_1 + 0x10) + 0x28)), iVar4 == 0))))
  goto LAB_00100650;
  if (*(int *)(param_1 + 0x30) != 0) {
    local_88 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    lVar5 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 8) == 5) {
        uVar8 = lVar6 + lVar2;
        *(ulong *)(lVar5 + 0x20) = uVar8;
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_00100678;
        if (*(ulong *)(lVar5 + 0x18) < uVar8) {
          ERR_new();
          ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x213,"mlx_kem_get_params");
          ERR_set_error(0x39,0x6a,"public key output buffer too short: %lu < %lu",
                        *(undefined8 *)(lVar5 + 0x18),uVar8);
          goto LAB_00100650;
        }
        local_88._8_8_ = *(long *)(lVar5 + 0x10);
        if ((1 < *(uint *)(param_1 + 0x30)) &&
           (lVar6 = OSSL_PARAM_locate(param_2,&_LC3), lVar6 != 0)) goto LAB_001006a6;
        bVar7 = 0;
        lVar6 = 0;
        goto LAB_001005ae;
      }
      goto LAB_00100650;
    }
LAB_00100678:
    if (1 < *(uint *)(param_1 + 0x30)) {
      lVar6 = OSSL_PARAM_locate(param_2,&_LC3);
      lVar5 = 0;
      if (lVar6 != 0) {
LAB_001006a6:
        if (*(int *)(lVar6 + 8) == 5) {
          uVar8 = lVar3 + lVar1;
          *(ulong *)(lVar6 + 0x20) = uVar8;
          if (*(long *)(lVar6 + 0x10) == 0) {
            if (lVar5 == 0) goto LAB_00100680;
            bVar7 = 0;
            lVar6 = 0;
          }
          else {
            if (*(ulong *)(lVar6 + 0x18) < uVar8) {
              ERR_new();
              ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x225,
                            "mlx_kem_get_params");
              ERR_set_error(0x39,0x6a,"private key output buffer too short: %lu < %lu",
                            *(undefined8 *)(lVar6 + 0x18),uVar8);
              goto LAB_00100650;
            }
            local_78._0_8_ = *(long *)(lVar6 + 0x10);
            bVar7 = 1;
          }
LAB_001005ae:
          bVar7 = (lVar5 != 0) * '\x02' | bVar7;
          if (*(long *)(*(long *)(param_1 + 0x18) + 8) != 0) {
            bVar7 = bVar7 | 4;
          }
          iVar4 = export_sub(local_88,bVar7,param_1);
          if ((iVar4 != 0) && ((lVar5 == 0 || (local_78._8_4_ == 2)))) {
            if (lVar6 != 0) {
              bVar9 = local_78._12_4_ == 2;
              goto LAB_00100652;
            }
            goto LAB_00100680;
          }
        }
LAB_00100650:
        bVar9 = false;
        goto LAB_00100652;
      }
    }
  }
LAB_00100680:
  bVar9 = true;
LAB_00100652:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



undefined4 mlx_kem_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 3) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x30);
    if (uVar2 != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x10) +
              *(long *)(*(long *)(param_1 + 0x10) + 0x18);
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x18) + *(long *)(*(long *)(param_1 + 0x10) + 8)
      ;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      if ((param_2 & 2) == 0) {
LAB_00100801:
        if ((1 < uVar2) && ((param_2 & 1) != 0)) {
          lVar4 = CRYPTO_secure_zalloc(lVar7,"providers/implementations/keymgmt/mlx_kmgmt.c",0x11b);
          local_78._0_8_ = lVar4;
          if (lVar4 == 0) goto LAB_00100968;
        }
        lVar4 = OSSL_PARAM_BLD_new();
        if (lVar4 == 0) goto LAB_00100968;
        iVar1 = export_sub(local_88,param_2,param_1);
        if (iVar1 == 0) {
LAB_00100998:
          uVar3 = 0;
        }
        else if ((local_88._8_8_ == 0) || (local_78._8_4_ != 2)) {
LAB_00100867:
          if ((local_78._0_8_ != 0) && (local_78._12_4_ == 2)) {
            iVar1 = ossl_param_build_set_octet_string(lVar4,0,&_LC3,local_78._0_8_,lVar7);
            if (iVar1 == 0) goto LAB_00100998;
          }
          lVar6 = OSSL_PARAM_BLD_to_param(lVar4);
          if (lVar6 == 0) goto LAB_00100998;
          uVar3 = (*param_3)(lVar6,param_4);
          OSSL_PARAM_free(lVar6);
        }
        else {
          iVar1 = ossl_param_build_set_octet_string(lVar4,0,&_LC0,local_88._8_8_,lVar6);
          if (iVar1 != 0) goto LAB_00100867;
          uVar3 = 0;
        }
      }
      else {
        pvVar5 = CRYPTO_malloc((int)lVar6,"providers/implementations/keymgmt/mlx_kmgmt.c",0x10f);
        local_88._8_8_ = pvVar5;
        if (pvVar5 != (void *)0x0) {
          uVar2 = *(uint *)(param_1 + 0x30);
          goto LAB_00100801;
        }
LAB_00100968:
        uVar3 = 0;
        lVar4 = 0;
      }
      OSSL_PARAM_BLD_free(lVar4);
      CRYPTO_secure_clear_free
                (local_78._0_8_,lVar7,"providers/implementations/keymgmt/mlx_kmgmt.c",0x13b);
      CRYPTO_free((void *)local_88._8_8_);
      goto LAB_00100912;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x107,"mlx_kem_export");
    ERR_set_error(0x39,0x80,0);
  }
  uVar3 = 0;
LAB_00100912:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 * mlx_kem_gen(undefined8 *param_1)

{
  uint uVar1;
  void *ptr;
  int iVar2;
  undefined8 *ptr_00;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_1 != (undefined8 *)0x0) && ((*(uint *)(param_1 + 2) & 3) != 2)) {
    ptr = (void *)param_1[1];
    uVar1 = *(uint *)((long)param_1 + 0x14);
    param_1[1] = 0;
    uVar5 = *param_1;
    iVar2 = ossl_prov_is_running();
    if ((uVar1 < 4) &&
       ((iVar2 != 0 &&
        (ptr_00 = (undefined8 *)
                  CRYPTO_malloc(0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x53),
        ptr_00 != (undefined8 *)0x0)))) {
      *ptr_00 = uVar5;
      lVar3 = (ulong)uVar1 * 0x30;
      puVar4 = (undefined8 *)ossl_ml_kem_get_vinfo(*(undefined4 *)(hybrid_vtable + lVar3 + 0x2c));
      ptr_00[3] = hybrid_vtable + lVar3;
      *(undefined1 (*) [16])(ptr_00 + 4) = (undefined1  [16])0x0;
      *(undefined4 *)(ptr_00 + 6) = 0;
      ptr_00[1] = ptr;
      ptr_00[2] = puVar4;
      if ((*(byte *)(param_1 + 2) & 3) == 0) {
        return ptr_00;
      }
      uVar5 = EVP_PKEY_Q_keygen(*ptr_00,ptr,*puVar4);
      ptr_00[4] = uVar5;
      lVar3 = EVP_PKEY_Q_keygen(*ptr_00,ptr_00[1],*(undefined8 *)ptr_00[3],
                                ((undefined8 *)ptr_00[3])[1]);
      ptr_00[5] = lVar3;
      if ((ptr_00[4] != 0) && (lVar3 != 0)) {
        *(undefined4 *)(ptr_00 + 6) = 2;
        return ptr_00;
      }
      CRYPTO_free((void *)ptr_00[1]);
      EVP_PKEY_free((EVP_PKEY *)ptr_00[4]);
      EVP_PKEY_free((EVP_PKEY *)ptr_00[5]);
      CRYPTO_free(ptr_00);
      return (undefined8 *)0x0;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



bool load_slot_constprop_0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
               long param_6,int param_7,int param_8)

{
  undefined8 *puVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  long local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_40;
  
  puVar1 = *(undefined8 **)(param_4 + 0x18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = local_b8;
  for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar6 = *(int *)(puVar1 + 5);
  if (iVar6 == param_5) {
    iVar6 = iVar6 * param_8;
    local_f8 = param_4 + 0x20;
    lVar3 = 0;
    uVar4 = **(undefined8 **)(param_4 + 0x10);
    param_8 = param_7;
  }
  else {
    local_f8 = param_4 + 0x28;
    uVar4 = *puVar1;
    lVar3 = puVar1[1];
    iVar6 = (1 - iVar6) * param_7;
  }
  ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(param_1,uVar4,param_2);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar2 = EVP_PKEY_fromdata_init(ctx);
    if (0 < iVar2) {
      OSSL_PARAM_construct_octet_string(&local_e8,param_3,param_6 + iVar6,(long)param_8);
      local_b8[0] = local_e8;
      local_b8[1] = uStack_e0;
      local_98 = local_c8;
      local_b8[2] = local_d8;
      local_b8[3] = uStack_d0;
      if (lVar3 != 0) {
        OSSL_PARAM_construct_utf8_string(&local_e8,"group",lVar3,0);
        local_70 = local_c8;
        local_90 = local_e8;
        uStack_88 = uStack_e0;
        local_80 = local_d8;
        uStack_78 = uStack_d0;
      }
      iVar6 = EVP_PKEY_fromdata(ctx,local_f8,5,local_b8);
      bVar5 = 0 < iVar6;
      goto LAB_00100c92;
    }
  }
  bVar5 = false;
LAB_00100c92:
  EVP_PKEY_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mlx_kem_gen_cleanup(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void mlx_kem_key_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x20));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x28));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 mlx_kem_set_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_28 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 6) != 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x25d,"mlx_kem_set_params");
        ERR_set_error(0x39,0xb2,"keys cannot be mutated");
        uVar3 = 0;
        goto LAB_00100e4d;
      }
      iVar1 = OSSL_PARAM_get_octet_string_ptr(lVar2,&local_30,&local_28);
      if (iVar1 == 0) {
LAB_00100e26:
        uVar3 = 0;
        goto LAB_00100e4d;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"properties");
      if (lVar2 != 0) {
        CRYPTO_free((void *)param_1[1]);
        param_1[1] = 0;
        iVar1 = OSSL_PARAM_get_utf8_string(lVar2,param_1 + 1,0);
        if (iVar1 == 0) goto LAB_00100e26;
      }
      uVar3 = local_30;
      lVar2 = *(long *)(param_1[2] + 0x18) + *(long *)(param_1[3] + 0x10);
      if (lVar2 != local_28) {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x26f,"mlx_kem_set_params");
        ERR_set_error(0x39,0x9e,0);
        uVar3 = 0;
        goto LAB_00100e4d;
      }
      if (lVar2 != 0) {
        iVar1 = load_slot_constprop_0
                          (*param_1,param_1[1],&_LC0,param_1,0,local_30,*(long *)(param_1[2] + 0x18)
                           ,*(long *)(param_1[3] + 0x10));
        if (iVar1 != 0) {
          iVar1 = load_slot_constprop_0
                            (*param_1,param_1[1],&_LC0,param_1,1,uVar3,
                             *(undefined8 *)(param_1[2] + 0x18),*(undefined8 *)(param_1[3] + 0x10));
          if (iVar1 != 0) goto LAB_00100e3e;
        }
        EVP_PKEY_free((EVP_PKEY *)param_1[4]);
        EVP_PKEY_free((EVP_PKEY *)param_1[5]);
        *(undefined4 *)(param_1 + 6) = 0;
        uVar3 = 0;
        *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
        goto LAB_00100e4d;
      }
LAB_00100e3e:
      *(undefined4 *)(param_1 + 6) = 1;
    }
  }
  uVar3 = 1;
LAB_00100e4d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * mlx_kem_dup(long param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  void *ptr;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (void *)CRYPTO_memdup(param_1,0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x2e1
                                 ), ptr != (void *)0x0)) {
    if (*(char **)((long)ptr + 8) != (char *)0x0) {
      pcVar3 = CRYPTO_strdup(*(char **)((long)ptr + 8),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x2e5);
      *(char **)((long)ptr + 8) = pcVar3;
      if (pcVar3 == (char *)0x0) {
        CRYPTO_free(ptr);
        return (void *)0x0;
      }
    }
    if (*(long *)((long)ptr + 0x20) == 0) {
      if (*(long *)((long)ptr + 0x28) == 0) {
        return ptr;
      }
      CRYPTO_free(ptr);
    }
    else {
      if ((param_2 & 3) == 0) {
        *(undefined1 (*) [16])((long)ptr + 0x20) = (undefined1  [16])0x0;
        return ptr;
      }
      if ((param_2 & 3) == 3) {
        uVar4 = EVP_PKEY_dup(*(undefined8 *)(param_1 + 0x20));
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 *)((long)ptr + 0x20) = uVar4;
        lVar5 = EVP_PKEY_dup(uVar1);
        *(long *)((long)ptr + 0x28) = lVar5;
        if ((lVar5 != 0) && (*(long *)((long)ptr + 0x20) != 0)) {
          return ptr;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x2fe,"mlx_kem_dup");
        ERR_set_error(0x39,0xfa,"duplication of partial key material not supported");
      }
      CRYPTO_free(*(void **)((long)ptr + 8));
      EVP_PKEY_free(*(EVP_PKEY **)((long)ptr + 0x20));
      EVP_PKEY_free(*(EVP_PKEY **)((long)ptr + 0x28));
      CRYPTO_free(ptr);
    }
  }
  return (void *)0x0;
}



long * mlx_p384_kem_gen_init(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  char *pcVar3;
  void *ptr_00;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && ((param_2 & 5) != 0)) &&
     (ptr = (long *)CRYPTO_zalloc(0x18,"providers/implementations/keymgmt/mlx_kmgmt.c",0x296),
     ptr != (long *)0x0)) {
    *(undefined4 *)((long)ptr + 0x14) = 1;
    *ptr = param_1;
    *(uint *)(ptr + 2) = param_2;
    if (param_3 == (long *)0x0) {
      return ptr;
    }
    if (*param_3 == 0) {
      return ptr;
    }
    lVar2 = OSSL_PARAM_locate_const(param_3,"properties");
    if (lVar2 == 0) {
      return ptr;
    }
    ptr_00 = (void *)ptr[1];
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(ptr_00);
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x285);
      ptr[1] = (long)pcVar3;
      if (pcVar3 != (char *)0x0) {
        return ptr;
      }
      ptr_00 = (void *)0x0;
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



long * mlx_x25519_kem_new(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) ||
     (plVar2 = (long *)CRYPTO_malloc(0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x53),
     plVar2 == (long *)0x0)) {
    plVar2 = (long *)0x0;
    CRYPTO_free((void *)0x0);
  }
  else {
    *plVar2 = param_1;
    lVar3 = ossl_ml_kem_get_vinfo(0x5af);
    plVar2[4] = 0;
    plVar2[2] = lVar3;
    plVar2[3] = 0x102700;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}



long * mlx_x448_kem_new(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) ||
     (plVar2 = (long *)CRYPTO_malloc(0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x53),
     plVar2 == (long *)0x0)) {
    plVar2 = (long *)0x0;
    CRYPTO_free((void *)0x0);
  }
  else {
    *plVar2 = param_1;
    lVar3 = ossl_ml_kem_get_vinfo(0x5b0);
    plVar2[4] = 0;
    plVar2[2] = lVar3;
    plVar2[3] = 0x102730;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}



long * mlx_p256_kem_new(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) ||
     (plVar2 = (long *)CRYPTO_malloc(0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x53),
     plVar2 == (long *)0x0)) {
    plVar2 = (long *)0x0;
    CRYPTO_free((void *)0x0);
  }
  else {
    *plVar2 = param_1;
    lVar3 = ossl_ml_kem_get_vinfo(0x5af);
    plVar2[4] = 0;
    plVar2[2] = lVar3;
    plVar2[3] = (long)hybrid_vtable;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}



long * mlx_p384_kem_new(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) ||
     (plVar2 = (long *)CRYPTO_malloc(0x38,"providers/implementations/keymgmt/mlx_kmgmt.c",0x53),
     plVar2 == (long *)0x0)) {
    plVar2 = (long *)0x0;
    CRYPTO_free((void *)0x0);
  }
  else {
    *plVar2 = param_1;
    lVar3 = ossl_ml_kem_get_vinfo(0x5b0);
    plVar2[4] = 0;
    plVar2[2] = lVar3;
    plVar2[3] = 0x1026d0;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 6) = 0;
    plVar2[1] = 0;
  }
  return plVar2;
}



uint mlx_kem_import(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  byte bVar17;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = ossl_prov_is_running();
  if ((param_1 != (undefined8 *)0x0) && (iVar8 != 0)) {
    uVar9 = param_2 & 3;
    if ((param_2 & 3) == 0) goto LAB_00101565;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    if (*(int *)(param_1 + 6) == 0) {
      lVar13 = *(long *)(param_1[2] + 0x18);
      lVar14 = *(long *)(param_1[2] + 8);
      lVar1 = *(long *)(param_1[3] + 0x10);
      lVar2 = *(long *)(param_1[3] + 0x18);
      lVar11 = OSSL_PARAM_locate_const(param_3,&_LC0);
      if ((lVar11 == 0) ||
         (iVar8 = OSSL_PARAM_get_octet_string_ptr(lVar11,&local_d8,&local_c8), iVar8 == 1)) {
        if (((param_2 & 1) != 0) &&
           ((lVar11 = OSSL_PARAM_locate_const(param_3,&_LC3), lVar11 != 0 &&
            (iVar8 = OSSL_PARAM_get_octet_string_ptr(lVar11,&local_d0,&local_c0), iVar8 != 1)))) {
          uVar9 = 0;
          goto LAB_00101565;
        }
        lVar11 = local_d0;
        uVar15 = local_d8;
        if (local_c8 == 0) {
          if (local_c0 == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",0x1b7,
                          "mlx_kem_key_fromdata");
            ERR_set_error(0x39,0x80,0);
            uVar9 = 0;
            goto LAB_00101565;
          }
          if (local_c0 != lVar14 + lVar2) goto LAB_00101706;
LAB_00101785:
          puVar3 = (undefined8 *)param_1[3];
          puVar4 = (undefined8 *)param_1[2];
          uVar15 = param_1[1];
          uVar5 = *param_1;
          uVar6 = puVar3[3];
          uVar12 = puVar4[1];
          puVar16 = &local_b8;
          for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar16 = 0;
            puVar16 = puVar16 + (ulong)bVar17 * -2 + 1;
          }
          iVar8 = (int)uVar12;
          if (*(int *)(puVar3 + 5) == 0) {
            local_118 = param_1 + 4;
            uVar12 = *puVar4;
            lVar14 = 0;
            lVar13 = 0;
          }
          else {
            local_118 = param_1 + 5;
            uVar12 = *puVar3;
            lVar13 = puVar3[1];
            lVar14 = (long)((1 - *(int *)(puVar3 + 5)) * iVar8);
            iVar8 = (int)uVar6;
          }
          local_120 = (undefined8 *)(long)iVar8;
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar5,uVar12,uVar15);
          if (ctx == (EVP_PKEY_CTX *)0x0) {
LAB_00101a3e:
            EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
          }
          else {
            iVar8 = EVP_PKEY_fromdata_init(ctx);
            if (0 < iVar8) {
              OSSL_PARAM_construct_octet_string(&local_108,&_LC3,lVar11 + lVar14,local_120);
              local_b8 = local_108;
              uStack_b0 = uStack_100;
              local_98 = local_e8;
              local_a8 = local_f8;
              uStack_a0 = uStack_f0;
              if (lVar13 != 0) {
                OSSL_PARAM_construct_utf8_string(&local_108,"group",lVar13,0);
                local_70 = local_e8;
                local_90 = local_108;
                uStack_88 = uStack_100;
                local_80 = local_f8;
                uStack_78 = uStack_f0;
              }
              iVar8 = EVP_PKEY_fromdata(ctx,local_118,5,&local_b8);
              if (0 < iVar8) {
                EVP_PKEY_CTX_free(ctx);
                puVar3 = (undefined8 *)param_1[3];
                puVar4 = (undefined8 *)param_1[2];
                uVar15 = param_1[1];
                uVar5 = *param_1;
                uVar6 = puVar3[3];
                uVar12 = puVar4[1];
                puVar16 = &local_b8;
                for (lVar13 = 0xf; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *puVar16 = 0;
                  puVar16 = puVar16 + (ulong)bVar17 * -2 + 1;
                }
                iVar8 = (int)uVar12;
                if (*(int *)(puVar3 + 5) == 1) {
                  local_120 = param_1 + 4;
                  uVar12 = *puVar4;
                  lVar13 = 0;
                  iVar7 = (int)uVar6;
                }
                else {
                  local_120 = param_1 + 5;
                  uVar12 = *puVar3;
                  lVar13 = puVar3[1];
                  iVar7 = (1 - *(int *)(puVar3 + 5)) * iVar8;
                  iVar8 = (int)uVar6;
                }
                local_118 = (undefined8 *)(long)iVar8;
                ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(uVar5,uVar12,uVar15);
                if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00101a3e;
                iVar8 = EVP_PKEY_fromdata_init(ctx);
                if (0 < iVar8) {
                  OSSL_PARAM_construct_octet_string(&local_108,&_LC3,lVar11 + iVar7,local_118);
                  local_b8 = local_108;
                  uStack_b0 = uStack_100;
                  local_98 = local_e8;
                  local_a8 = local_f8;
                  uStack_a0 = uStack_f0;
                  if (lVar13 != 0) {
                    OSSL_PARAM_construct_utf8_string(&local_108,"group",lVar13,0);
                    local_70 = local_e8;
                    local_90 = local_108;
                    uStack_88 = uStack_100;
                    local_80 = local_f8;
                    uStack_78 = uStack_f0;
                  }
                  iVar8 = EVP_PKEY_fromdata(ctx,local_120,5,&local_b8);
                  if (0 < iVar8) {
                    EVP_PKEY_CTX_free(ctx);
                    uVar10 = 2;
                    goto LAB_001016de;
                  }
                }
              }
            }
            EVP_PKEY_CTX_free(ctx);
          }
LAB_001019f8:
          EVP_PKEY_free((EVP_PKEY *)param_1[4]);
          EVP_PKEY_free((EVP_PKEY *)param_1[5]);
          *(undefined4 *)(param_1 + 6) = 0;
          uVar9 = 0;
          *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
        }
        else {
          if (lVar13 + lVar1 == local_c8) {
            if ((lVar2 + lVar14 == local_c0) || (local_c0 == 0)) {
              if (local_c0 != 0) goto LAB_00101785;
              iVar8 = load_slot_constprop_0
                                (*param_1,param_1[1],&_LC0,param_1,0,local_d8,
                                 *(undefined8 *)(param_1[2] + 0x18),
                                 *(undefined8 *)(param_1[3] + 0x10));
              if ((iVar8 != 0) &&
                 (iVar8 = load_slot_constprop_0
                                    (*param_1,param_1[1],&_LC0,param_1,1,uVar15,
                                     *(undefined8 *)(param_1[2] + 0x18),
                                     *(undefined8 *)(param_1[3] + 0x10)), iVar8 != 0)) {
                uVar10 = 1;
LAB_001016de:
                *(undefined4 *)(param_1 + 6) = uVar10;
                uVar9 = 1;
                goto LAB_00101565;
              }
              goto LAB_001019f8;
            }
LAB_00101706:
            ERR_new();
            uVar15 = 0x1c5;
          }
          else {
            ERR_new();
            uVar15 = 0x1c1;
          }
          ERR_set_debug("providers/implementations/keymgmt/mlx_kmgmt.c",uVar15,
                        "mlx_kem_key_fromdata");
          ERR_set_error(0x39,0x69,0);
          uVar9 = 0;
        }
        goto LAB_00101565;
      }
    }
  }
  uVar9 = 0;
LAB_00101565:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



long * mlx_x448_kem_gen_init(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  char *pcVar3;
  void *ptr_00;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && ((param_2 & 5) != 0)) &&
     (ptr = (long *)CRYPTO_zalloc(0x18,"providers/implementations/keymgmt/mlx_kmgmt.c",0x296),
     ptr != (long *)0x0)) {
    *(undefined4 *)((long)ptr + 0x14) = 3;
    *ptr = param_1;
    *(uint *)(ptr + 2) = param_2;
    if (param_3 == (long *)0x0) {
      return ptr;
    }
    if (*param_3 == 0) {
      return ptr;
    }
    lVar2 = OSSL_PARAM_locate_const(param_3,"properties");
    if (lVar2 == 0) {
      return ptr;
    }
    ptr_00 = (void *)ptr[1];
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(ptr_00);
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x285);
      ptr[1] = (long)pcVar3;
      if (pcVar3 != (char *)0x0) {
        return ptr;
      }
      ptr_00 = (void *)0x0;
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



long * mlx_x25519_kem_gen_init(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  char *pcVar3;
  void *ptr_00;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && ((param_2 & 5) != 0)) &&
     (ptr = (long *)CRYPTO_zalloc(0x18,"providers/implementations/keymgmt/mlx_kmgmt.c",0x296),
     ptr != (long *)0x0)) {
    *(undefined4 *)((long)ptr + 0x14) = 2;
    *ptr = param_1;
    *(uint *)(ptr + 2) = param_2;
    if (param_3 == (long *)0x0) {
      return ptr;
    }
    if (*param_3 == 0) {
      return ptr;
    }
    lVar2 = OSSL_PARAM_locate_const(param_3,"properties");
    if (lVar2 == 0) {
      return ptr;
    }
    ptr_00 = (void *)ptr[1];
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(ptr_00);
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x285);
      ptr[1] = (long)pcVar3;
      if (pcVar3 != (char *)0x0) {
        return ptr;
      }
      ptr_00 = (void *)0x0;
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



long * mlx_p256_kem_gen_init(long param_1,uint param_2,long *param_3)

{
  int iVar1;
  long *ptr;
  long lVar2;
  char *pcVar3;
  void *ptr_00;
  
  if (param_1 != 0) {
    param_1 = ossl_prov_ctx_get0_libctx();
  }
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && ((param_2 & 5) != 0)) &&
     (ptr = (long *)CRYPTO_zalloc(0x18,"providers/implementations/keymgmt/mlx_kmgmt.c",0x296),
     ptr != (long *)0x0)) {
    *(undefined4 *)((long)ptr + 0x14) = 0;
    *ptr = param_1;
    *(uint *)(ptr + 2) = param_2;
    if (param_3 == (long *)0x0) {
      return ptr;
    }
    if (*param_3 == 0) {
      return ptr;
    }
    lVar2 = OSSL_PARAM_locate_const(param_3,"properties");
    if (lVar2 == 0) {
      return ptr;
    }
    ptr_00 = (void *)ptr[1];
    if (*(int *)(lVar2 + 8) == 4) {
      CRYPTO_free(ptr_00);
      pcVar3 = CRYPTO_strdup(*(char **)(lVar2 + 0x10),
                             "providers/implementations/keymgmt/mlx_kmgmt.c",0x285);
      ptr[1] = (long)pcVar3;
      if (pcVar3 != (char *)0x0) {
        return ptr;
      }
      ptr_00 = (void *)0x0;
    }
    CRYPTO_free(ptr_00);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}




undefined1 * kdf_pbkdf2_settable_ctx_params(void)

{
  return known_settable_ctx_params_2;
}



undefined1 * kdf_pbkdf2_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_4;
}



bool kdf_pbkdf2_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0xffffffffffffffff);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



undefined1 (*) [16] kdf_pbkdf2_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 (*ptr) [16];
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined1 (*) [16])CRYPTO_zalloc(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4c),
     ptr != (undefined1 (*) [16])0x0)) {
    *(undefined8 *)*ptr = uVar1;
    iVar2 = ossl_prov_memdup(param_1[3],param_1[4],ptr[1] + 8,ptr + 2);
    if ((iVar2 != 0) &&
       ((iVar2 = ossl_prov_memdup(param_1[1],param_1[2],*ptr + 8,ptr + 1), iVar2 != 0 &&
        (iVar2 = ossl_prov_digest_copy(ptr + 3,param_1 + 6), iVar2 != 0)))) {
      *(undefined8 *)(ptr[2] + 8) = param_1[5];
      *(undefined4 *)(ptr[4] + 8) = *(undefined4 *)(param_1 + 9);
      return ptr;
    }
    ossl_prov_digest_reset(ptr + 3);
    CRYPTO_free(*(void **)(ptr[1] + 8));
    CRYPTO_clear_free(*(undefined8 *)(*ptr + 8),*(undefined8 *)ptr[1],
                      "providers/implementations/kdfs/pbkdf2.c",0x65);
    *ptr = (undefined1  [16])0x0;
    ptr[1] = (undefined1  [16])0x0;
    ptr[2] = (undefined1  [16])0x0;
    ptr[3] = (undefined1  [16])0x0;
    ptr[4] = (undefined1  [16])0x0;
    CRYPTO_free(ptr);
  }
  return (undefined1 (*) [16])0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * kdf_pbkdf2_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4c);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      local_78 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      local_48 = (undefined1  [16])0x0;
      local_38 = (undefined1  [16])0x0;
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      OSSL_PARAM_construct_utf8_string(local_a8,"digest",&_LC2,0);
      local_58._0_8_ = local_88;
      iVar1 = ossl_prov_digest_load_from_params(puVar2 + 6,local_78,uVar3);
      if (iVar1 == 0) {
        ossl_prov_digest_reset(puVar2 + 6);
      }
      puVar2[5] = 0x800;
      *(undefined4 *)(puVar2 + 9) = _ossl_kdf_pbkdf2_default_checks;
      goto LAB_00100262;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_00100262:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void kdf_pbkdf2_free(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    ossl_prov_digest_reset(param_1 + 3);
    CRYPTO_free(*(void **)(param_1[1] + 8));
    CRYPTO_clear_free(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],
                      "providers/implementations/kdfs/pbkdf2.c",0x65);
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    param_1[2] = (undefined1  [16])0x0;
    param_1[3] = (undefined1  [16])0x0;
    param_1[4] = (undefined1  [16])0x0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_pbkdf2_reset(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  puVar1 = param_1 + 6;
  uVar3 = *param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_prov_digest_reset(puVar1);
  CRYPTO_free((void *)param_1[3]);
  CRYPTO_clear_free(param_1[1],param_1[2],"providers/implementations/kdfs/pbkdf2.c",0x65);
  *param_1 = uVar3;
  param_1[9] = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  uVar3 = ossl_prov_ctx_get0_libctx(uVar3);
  OSSL_PARAM_construct_utf8_string(local_b8,"digest",&_LC2,0);
  local_68._0_8_ = local_98;
  iVar2 = ossl_prov_digest_load_from_params(puVar1,local_88,uVar3);
  if (iVar2 == 0) {
    ossl_prov_digest_reset(puVar1);
  }
  param_1[5] = 0x800;
  *(undefined4 *)(param_1 + 9) = _ossl_kdf_pbkdf2_default_checks;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 kdf_pbkdf2_set_ctx_params(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  int local_3c;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar4 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar4 != 0) {
      iVar2 = ossl_prov_digest_load_from_params(param_1 + 6,param_2,uVar3);
      if (iVar2 != 0) {
        uVar3 = ossl_prov_digest_md(param_1 + 6);
        iVar2 = EVP_MD_xof(uVar3);
        if (iVar2 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x10e,"kdf_pbkdf2_set_ctx_params")
          ;
          ERR_set_error(0x39,0xb7,0);
          uVar3 = 0;
          goto LAB_00100685;
        }
        goto LAB_001004f0;
      }
LAB_001004cd:
      uVar3 = 0;
      goto LAB_00100685;
    }
LAB_001004f0:
    lVar4 = OSSL_PARAM_locate_const(param_2,"pkcs5");
    if (lVar4 != 0) {
      iVar2 = OSSL_PARAM_get_int(lVar4,&local_3c);
      if (iVar2 == 0) goto LAB_001004cd;
      *(uint *)(param_1 + 9) = (uint)(local_3c == 0);
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar4 != 0) {
      CRYPTO_clear_free(param_1[1],param_1[2],"providers/implementations/kdfs/pbkdf2.c",0xa7);
      param_1[2] = 0;
      lVar1 = *(long *)(lVar4 + 0x18);
      param_1[1] = 0;
      if (lVar1 == 0) {
        pvVar5 = CRYPTO_malloc(1,"providers/implementations/kdfs/pbkdf2.c",0xac);
        param_1[1] = pvVar5;
        if (pvVar5 == (void *)0x0) {
          uVar3 = 0;
          goto LAB_00100685;
        }
      }
      else if ((*(long *)(lVar4 + 0x10) != 0) &&
              (iVar2 = OSSL_PARAM_get_octet_string(lVar4,param_1 + 1,0,param_1 + 2), iVar2 == 0))
      goto LAB_001004cd;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar4 != 0) {
      if ((*(int *)(param_1 + 9) != 0) && (*(ulong *)(lVar4 + 0x18) < 0x10)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x125,"kdf_pbkdf2_set_ctx_params");
        ERR_set_error(0x39,0x70,0);
        uVar3 = 0;
        goto LAB_00100685;
      }
      CRYPTO_clear_free(param_1[3],param_1[4],"providers/implementations/kdfs/pbkdf2.c",0xa7);
      param_1[4] = 0;
      lVar1 = *(long *)(lVar4 + 0x18);
      param_1[3] = 0;
      if (lVar1 == 0) {
        pvVar5 = CRYPTO_malloc(1,"providers/implementations/kdfs/pbkdf2.c",0xac);
        param_1[3] = pvVar5;
        if (pvVar5 == (void *)0x0) {
          uVar3 = 0;
          goto LAB_00100685;
        }
      }
      else if ((*(long *)(lVar4 + 0x10) != 0) &&
              (iVar2 = OSSL_PARAM_get_octet_string(lVar4,param_1 + 3,0,param_1 + 4), iVar2 == 0))
      goto LAB_001004cd;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,&_LC7);
    if (lVar4 != 0) {
      iVar2 = OSSL_PARAM_get_uint64(lVar4,&local_38);
      if (iVar2 == 0) goto LAB_001004cd;
      if (local_38 < (-(ulong)(*(int *)(param_1 + 9) == 0) & 0xfffffffffffffc19) + 1000) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x131,"kdf_pbkdf2_set_ctx_params");
        ERR_set_error(0x39,0x7b,0);
        uVar3 = 0;
        goto LAB_00100685;
      }
      param_1[5] = local_38;
    }
  }
  uVar3 = 1;
LAB_00100685:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined4 kdf_pbkdf2_derive(long param_1,ulong *param_2,ulong param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  ulong uVar3;
  uchar *data;
  undefined8 uVar4;
  void *key;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  EVP_MD *md;
  HMAC_CTX *ctx;
  HMAC_CTX *dctx;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int local_e0;
  uint local_b0;
  uint local_8c;
  ulong local_88 [4];
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = ossl_prov_is_running();
  if ((iVar8 != 0) && (iVar8 = kdf_pbkdf2_set_ctx_params(param_1,param_4), iVar8 != 0)) {
    if (*(long *)(param_1 + 8) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0xee,"kdf_pbkdf2_derive");
      ERR_set_error(0x39,0x82,0);
    }
    else if (*(long *)(param_1 + 0x18) == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0xf3,"kdf_pbkdf2_derive");
      ERR_set_error(0x39,0x83,0);
    }
    else {
      md = (EVP_MD *)ossl_prov_digest_md(param_1 + 0x30);
      iVar8 = *(int *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = *(ulong *)(param_1 + 0x28);
      data = *(uchar **)(param_1 + 0x18);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      key = *(void **)(param_1 + 8);
      uVar9 = EVP_MD_get_size(md);
      if (0 < (int)uVar9) {
        if (param_3 / (ulong)(long)(int)uVar9 < 0xffffffff) {
          iVar16 = (int)uVar2;
          if (iVar8 == 0) {
LAB_00100910:
            ctx = (HMAC_CTX *)HMAC_CTX_new();
            if (ctx != (HMAC_CTX *)0x0) {
              local_e0 = (int)uVar4;
              iVar8 = HMAC_Init_ex(ctx,key,local_e0,md,(ENGINE *)0x0);
              if ((iVar8 == 0) || (dctx = (HMAC_CTX *)HMAC_CTX_new(), dctx == (HMAC_CTX *)0x0)) {
                dctx = (HMAC_CTX *)0x0;
LAB_00100947:
                uVar13 = 0;
              }
              else {
                local_b0 = (uint)param_3;
                if (local_b0 != 0) {
                  uVar7 = 1;
                  do {
                    uVar5 = local_b0;
                    if ((int)uVar9 <= (int)local_b0) {
                      uVar5 = uVar9;
                    }
                    local_8c = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                               uVar7 << 0x18;
                    iVar8 = HMAC_CTX_copy(dctx,ctx);
                    if (((iVar8 == 0) || (iVar8 = HMAC_Update(dctx,data,(long)iVar16), iVar8 == 0))
                       || (iVar8 = HMAC_Update(dctx,(uchar *)&local_8c,4), iVar8 == 0))
                    goto LAB_00100947;
                    iVar8 = HMAC_Final(dctx,(uchar *)local_88,(uint *)0x0);
                    if (iVar8 == 0) goto LAB_00100947;
                    memcpy(param_2,local_88,(long)(int)uVar5);
                    if (1 < uVar3) {
                      uVar14 = 1;
                      uVar17 = uVar5 & 0xfffffff0;
                      uVar6 = uVar5 >> 4;
                      do {
                        iVar8 = HMAC_CTX_copy(dctx,ctx);
                        if (((iVar8 == 0) ||
                            (iVar8 = HMAC_Update(dctx,(uchar *)local_88,(long)(int)uVar9),
                            iVar8 == 0)) ||
                           (iVar8 = HMAC_Final(dctx,(uchar *)local_88,(uint *)0x0), iVar8 == 0))
                        goto LAB_00100947;
                        if (0 < (int)uVar5) {
                          if (uVar5 - 1 < 0xf) {
                            uVar12 = 0;
                            uVar10 = 0;
                          }
                          else {
                            *param_2 = *param_2 ^ local_88[0];
                            param_2[1] = param_2[1] ^ local_88[1];
                            if (uVar6 != 1) {
                              param_2[2] = param_2[2] ^ local_88[2];
                              param_2[3] = param_2[3] ^ local_88[3];
                              if (uVar6 != 2) {
                                param_2[4] = param_2[4] ^ local_68;
                                param_2[5] = param_2[5] ^ uStack_60;
                                if (uVar6 != 3) {
                                  param_2[6] = param_2[6] ^ local_58;
                                  param_2[7] = param_2[7] ^ uStack_50;
                                }
                              }
                            }
                            if (uVar5 == uVar17) goto LAB_00100bcb;
                            uVar12 = (ulong)uVar17;
                            uVar10 = uVar17;
                          }
                          uVar15 = uVar5 - (int)uVar12;
                          if (6 < uVar15 - 1) {
                            uVar10 = uVar10 + (uVar15 & 0xfffffff8);
                            *(ulong *)((long)param_2 + uVar12) =
                                 *(ulong *)((long)param_2 + uVar12) ^
                                 *(ulong *)((long)local_88 + uVar12);
                            if ((uVar15 & 7) == 0) goto LAB_00100bcb;
                          }
                          pbVar1 = (byte *)((long)param_2 + (long)(int)uVar10);
                          *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)(int)uVar10);
                          iVar8 = uVar10 + 1;
                          if (iVar8 < (int)uVar5) {
                            pbVar1 = (byte *)((long)param_2 + (long)iVar8);
                            *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar8);
                            iVar8 = uVar10 + 2;
                            if (iVar8 < (int)uVar5) {
                              pbVar1 = (byte *)((long)param_2 + (long)iVar8);
                              *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar8);
                              iVar8 = uVar10 + 3;
                              if (iVar8 < (int)uVar5) {
                                pbVar1 = (byte *)((long)param_2 + (long)iVar8);
                                *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar8);
                                iVar8 = uVar10 + 4;
                                if (iVar8 < (int)uVar5) {
                                  pbVar1 = (byte *)((long)param_2 + (long)iVar8);
                                  *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar8);
                                  iVar8 = uVar10 + 5;
                                  if (iVar8 < (int)uVar5) {
                                    iVar11 = uVar10 + 6;
                                    pbVar1 = (byte *)((long)param_2 + (long)iVar8);
                                    *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar8);
                                    if (iVar11 < (int)uVar5) {
                                      pbVar1 = (byte *)((long)param_2 + (long)iVar11);
                                      *pbVar1 = *pbVar1 ^ *(byte *)((long)local_88 + (long)iVar11);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_00100bcb:
                        uVar14 = uVar14 + 1;
                      } while (uVar3 != uVar14);
                    }
                    uVar7 = uVar7 + 1;
                    param_2 = (ulong *)((long)param_2 + (long)(int)uVar5);
                    local_b0 = local_b0 - uVar5;
                  } while (local_b0 != 0);
                }
                uVar13 = 1;
              }
              HMAC_CTX_free(dctx);
              HMAC_CTX_free(ctx);
              goto LAB_001007ef;
            }
          }
          else {
            if (param_3 * 8 < 0x70) {
              uVar13 = 0xab;
            }
            else if (iVar16 < 0x10) {
              uVar13 = 0x70;
            }
            else {
              if (999 < uVar3) goto LAB_00100910;
              uVar13 = 0x7b;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x19c,"pbkdf2_derive");
            ERR_set_error(0x39,uVar13,0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x18e,"pbkdf2_derive");
          ERR_set_error(0x39,0x69,0);
        }
      }
    }
  }
  uVar13 = 0;
LAB_001007ef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



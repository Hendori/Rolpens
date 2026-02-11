
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



bool pbkdf2_set_membuf(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  CRYPTO_clear_free(*param_1,*param_2,"providers/implementations/kdfs/pbkdf2.c",0xa7);
  *param_1 = 0;
  *param_2 = 0;
  if (*(long *)(param_3 + 0x18) != 0) {
    bVar3 = true;
    if (*(long *)(param_3 + 0x10) != 0) {
      iVar1 = OSSL_PARAM_get_octet_string(param_3,param_1,0,param_2);
      bVar3 = iVar1 != 0;
    }
    return bVar3;
  }
  pvVar2 = CRYPTO_malloc(1,"providers/implementations/kdfs/pbkdf2.c",0xac);
  *param_1 = pvVar2;
  return pvVar2 != (void *)0x0;
}



undefined8 kdf_pbkdf2_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_3c;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = ossl_prov_digest_load_from_params(param_1 + 6,param_2,uVar2);
      if (iVar1 != 0) {
        uVar2 = ossl_prov_digest_md(param_1 + 6);
        iVar1 = EVP_MD_xof(uVar2);
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x10e,"kdf_pbkdf2_set_ctx_params")
          ;
          ERR_set_error(0x39,0xb7,0);
          uVar2 = 0;
          goto LAB_001002a5;
        }
        goto LAB_001001a0;
      }
LAB_0010017d:
      uVar2 = 0;
      goto LAB_001002a5;
    }
LAB_001001a0:
    lVar3 = OSSL_PARAM_locate_const(param_2,"pkcs5");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_int(lVar3,&local_3c);
      if (iVar1 == 0) goto LAB_0010017d;
      *(uint *)(param_1 + 9) = (uint)(local_3c == 0);
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC4);
    if (lVar3 != 0) {
      iVar1 = pbkdf2_set_membuf(param_1 + 1,param_1 + 2,lVar3);
      if (iVar1 == 0) goto LAB_0010017d;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC5);
    if (lVar3 != 0) {
      if ((*(int *)(param_1 + 9) != 0) && (*(ulong *)(lVar3 + 0x18) < 0x10)) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x125,"kdf_pbkdf2_set_ctx_params");
        ERR_set_error(0x39,0x70,0);
        uVar2 = 0;
        goto LAB_001002a5;
      }
      iVar1 = pbkdf2_set_membuf(param_1 + 3,param_1 + 4);
      if (iVar1 == 0) goto LAB_0010017d;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC6);
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_38);
      if (iVar1 == 0) goto LAB_0010017d;
      if (local_38 < (-(ulong)(*(int *)(param_1 + 9) == 0) & 0xfffffffffffffc19) + 1000) {
        ERR_new();
        ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x131,"kdf_pbkdf2_set_ctx_params");
        ERR_set_error(0x39,0x7b,0);
        uVar2 = 0;
        goto LAB_001002a5;
      }
      param_1[5] = local_38;
    }
  }
  uVar2 = 1;
LAB_001002a5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void kdf_pbkdf2_cleanup(undefined1 (*param_1) [16])

{
  ossl_prov_digest_reset(param_1 + 3);
  CRYPTO_free(*(void **)(param_1[1] + 8));
  CRYPTO_clear_free(*(undefined8 *)(*param_1 + 8),*(undefined8 *)param_1[1],
                    "providers/implementations/kdfs/pbkdf2.c",0x65);
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  param_1[3] = (undefined1  [16])0x0;
  param_1[4] = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void kdf_pbkdf2_init(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
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
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  OSSL_PARAM_construct_utf8_string(local_a8,"digest",&_LC7,0);
  local_58._0_8_ = local_88;
  iVar1 = ossl_prov_digest_load_from_params(param_1 + 6,local_78,uVar2);
  if (iVar1 == 0) {
    ossl_prov_digest_reset(param_1 + 6);
  }
  param_1[5] = 0x800;
  *(undefined4 *)(param_1 + 9) = _ossl_kdf_pbkdf2_default_checks;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void kdf_pbkdf2_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  kdf_pbkdf2_cleanup();
  *param_1 = uVar1;
  kdf_pbkdf2_init(param_1);
  return;
}



undefined8 * kdf_pbkdf2_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  uVar1 = *param_1;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4c);
    if (ptr != (undefined8 *)0x0) {
      *ptr = uVar1;
      iVar2 = ossl_prov_memdup(param_1[3],param_1[4],ptr + 3,ptr + 4);
      if (iVar2 != 0) {
        iVar2 = ossl_prov_memdup(param_1[1],param_1[2],ptr + 1,ptr + 2);
        if (iVar2 != 0) {
          iVar2 = ossl_prov_digest_copy(ptr + 6,param_1 + 6);
          if (iVar2 != 0) {
            ptr[5] = param_1[5];
            *(undefined4 *)(ptr + 9) = *(undefined4 *)(param_1 + 9);
            return ptr;
          }
        }
      }
      kdf_pbkdf2_cleanup(ptr);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



undefined4 kdf_pbkdf2_derive(long param_1,void *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  uchar *data;
  undefined8 uVar3;
  void *key;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  EVP_MD *md;
  HMAC_CTX *ctx;
  HMAC_CTX *dctx;
  size_t sVar8;
  undefined4 uVar9;
  ulong uVar10;
  int iVar11;
  size_t __n;
  long in_FS_OFFSET;
  int local_c0;
  int local_a8;
  uint local_8c;
  byte local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_prov_is_running();
  if ((iVar5 != 0) && (iVar5 = kdf_pbkdf2_set_ctx_params(param_1,param_4), iVar5 != 0)) {
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
      iVar5 = *(int *)(param_1 + 0x48);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(ulong *)(param_1 + 0x28);
      data = *(uchar **)(param_1 + 0x18);
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      key = *(void **)(param_1 + 8);
      iVar6 = EVP_MD_get_size(md);
      if (0 < iVar6) {
        if (param_3 / (ulong)(long)iVar6 < 0xffffffff) {
          iVar11 = (int)uVar1;
          if (iVar5 == 0) {
LAB_00100728:
            ctx = (HMAC_CTX *)HMAC_CTX_new();
            if (ctx != (HMAC_CTX *)0x0) {
              local_c0 = (int)uVar3;
              iVar5 = HMAC_Init_ex(ctx,key,local_c0,md,(ENGINE *)0x0);
              if ((iVar5 == 0) || (dctx = (HMAC_CTX *)HMAC_CTX_new(), dctx == (HMAC_CTX *)0x0)) {
                dctx = (HMAC_CTX *)0x0;
LAB_0010075e:
                uVar9 = 0;
              }
              else {
                local_a8 = (int)param_3;
                if (local_a8 != 0) {
                  uVar4 = 1;
                  do {
                    iVar5 = local_a8;
                    if (iVar6 <= local_a8) {
                      iVar5 = iVar6;
                    }
                    local_8c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                               uVar4 << 0x18;
                    iVar7 = HMAC_CTX_copy(dctx,ctx);
                    if (((iVar7 == 0) || (iVar7 = HMAC_Update(dctx,data,(long)iVar11), iVar7 == 0))
                       || (iVar7 = HMAC_Update(dctx,(uchar *)&local_8c,4), iVar7 == 0))
                    goto LAB_0010075e;
                    iVar7 = HMAC_Final(dctx,local_88,(uint *)0x0);
                    if (iVar7 == 0) goto LAB_0010075e;
                    __n = (size_t)iVar5;
                    memcpy(param_2,local_88,__n);
                    if (1 < uVar2) {
                      uVar10 = 1;
                      do {
                        iVar7 = HMAC_CTX_copy(dctx,ctx);
                        if (((iVar7 == 0) ||
                            (iVar7 = HMAC_Update(dctx,local_88,(long)iVar6), iVar7 == 0)) ||
                           (iVar7 = HMAC_Final(dctx,local_88,(uint *)0x0), iVar7 == 0))
                        goto LAB_0010075e;
                        if (0 < iVar5) {
                          sVar8 = 0;
                          do {
                            *(byte *)((long)param_2 + sVar8) =
                                 *(byte *)((long)param_2 + sVar8) ^ local_88[sVar8];
                            sVar8 = sVar8 + 1;
                          } while (__n != sVar8);
                        }
                        uVar10 = uVar10 + 1;
                      } while (uVar2 != uVar10);
                    }
                    uVar4 = uVar4 + 1;
                    param_2 = (void *)((long)param_2 + __n);
                    local_a8 = local_a8 - iVar5;
                  } while (local_a8 != 0);
                }
                uVar9 = 1;
              }
              HMAC_CTX_free(dctx);
              HMAC_CTX_free(ctx);
              goto LAB_001005ff;
            }
          }
          else {
            if (param_3 * 8 < 0x70) {
              uVar9 = 0xab;
            }
            else if (iVar11 < 0x10) {
              uVar9 = 0x70;
            }
            else {
              if (999 < uVar2) goto LAB_00100728;
              uVar9 = 0x7b;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/pbkdf2.c",0x19c,"pbkdf2_derive");
            ERR_set_error(0x39,uVar9,0);
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
  uVar9 = 0;
LAB_001005ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



void kdf_pbkdf2_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_pbkdf2_cleanup();
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * kdf_pbkdf2_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x50,"providers/implementations/kdfs/pbkdf2.c",0x4c);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      kdf_pbkdf2_init(puVar2);
    }
  }
  return puVar2;
}




int get_parent_reseed_count(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_b8 [32];
  undefined8 local_98;
  int local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_7c = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  OSSL_PARAM_construct_uint(local_b8,"reseed_counter",&local_7c);
  local_58._0_8_ = local_98;
  if (((*(long *)(param_1 + 0x30) == 0) || (*(code **)(param_1 + 0x40) == (code *)0x0)) ||
     (iVar2 = (**(code **)(param_1 + 0x40))(), iVar2 != 0)) {
    iVar2 = (**(code **)(param_1 + 0x50))(uVar1,local_78);
    if (iVar2 == 0) {
      local_7c = 0;
    }
    iVar2 = local_7c;
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
      (**(code **)(param_1 + 0x48))();
      iVar2 = local_7c;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("providers/implementations/rands/drbg.c",0x46,"ossl_drbg_lock_parent");
    ERR_set_error(0x39,0xb6,0);
    ERR_new();
    ERR_set_debug("providers/implementations/rands/drbg.c",0x75,"get_parent_reseed_count");
    ERR_set_error(0x39,0xc9,0);
    iVar2 = *(int *)(param_1 + 0xd0) + -2;
    if (iVar2 == 0) {
      iVar2 = -1;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8 get_parent_strength(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  if (*(long *)(param_1 + 0x50) == 0) {
    ERR_new();
    uVar2 = 0x5b;
  }
  else {
    OSSL_PARAM_construct_uint(&local_a8,"strength",param_2);
    local_78._8_8_ = uStack_a0;
    local_78._0_8_ = local_a8;
    local_58._0_8_ = local_88;
    local_68._8_8_ = uStack_90;
    local_68._0_8_ = local_98;
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x40) != (code *)0x0)) {
      iVar1 = (**(code **)(param_1 + 0x40))();
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x46,"ossl_drbg_lock_parent");
        ERR_set_error(0x39,0xb6,0);
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x61,"get_parent_strength");
        ERR_set_error(0x39,0xc9,0);
        uVar2 = 0;
        goto LAB_00100232;
      }
    }
    iVar1 = (**(code **)(param_1 + 0x50))(uVar2,local_78);
    if ((*(long *)(param_1 + 0x30) != 0) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
      (**(code **)(param_1 + 0x48))();
    }
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_00100232;
    ERR_new();
    uVar2 = 0x67;
  }
  ERR_set_debug("providers/implementations/rands/drbg.c",uVar2,"get_parent_strength");
  ERR_set_error(0x39,199,0);
  uVar2 = 0;
LAB_00100232:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



size_t get_entropy(DRBG_CTX *ctx,uchar **pout,int entropy,size_t min_len,size_t max_len)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  undefined4 in_R9D;
  long in_FS_OFFSET;
  DRBG_CTX *local_40;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = ctx;
  if (*(long *)(ctx + 0x30) == 0) {
    sVar3 = ossl_prov_get_entropy(*(undefined8 *)(ctx + 8),pout,entropy);
    goto LAB_0010042a;
  }
  if (*(long *)(ctx + 0x60) == 0) {
    ERR_new(ctx,pout,0);
    ERR_set_debug("providers/implementations/rands/drbg.c",0xd0,"get_entropy");
    ERR_set_error(0x39,0xbb,0);
  }
  else {
    iVar2 = get_parent_strength(ctx,&local_34);
    if (iVar2 != 0) {
      if (*(uint *)(local_40 + 0x78) <= local_34) {
        lVar4 = *(long *)(local_40 + 0x30);
        if ((lVar4 != 0) && (*(code **)(local_40 + 0x40) != (code *)0x0)) {
          iVar2 = (**(code **)(local_40 + 0x40))();
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg.c",0x46,"ossl_drbg_lock_parent");
            ERR_set_error(0x39,0xb6,0);
            goto LAB_00100428;
          }
          lVar4 = *(long *)(local_40 + 0x30);
        }
        if (entropy < 1) {
          entropy = *(int *)(local_40 + 0x78);
        }
        sVar3 = (**(code **)(local_40 + 0x60))(lVar4,pout,entropy,min_len,max_len,in_R9D);
        if ((*(long *)(local_40 + 0x30) != 0) &&
           (pcVar1 = *(code **)(local_40 + 0x48), pcVar1 != (code *)0x0)) {
          (*pcVar1)(*(long *)(local_40 + 0x30),8,pcVar1,&local_40);
        }
        goto LAB_0010042a;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0xda,"get_entropy");
      ERR_set_error(0x39,0xc2,0);
    }
  }
LAB_00100428:
  sVar3 = 0;
LAB_0010042a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cleanup_entropy(DRBG_CTX *ctx,uchar *out,size_t olen)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(ctx + 0x30);
  if (lVar3 == 0) {
    ossl_prov_cleanup_entropy(*(undefined8 *)(ctx + 8));
    return;
  }
  pcVar2 = *(code **)(ctx + 0x68);
  if (pcVar2 != (code *)0x0) {
    if (*(code **)(ctx + 0x40) != (code *)0x0) {
      iVar1 = (**(code **)(ctx + 0x40))();
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x46,"ossl_drbg_lock_parent");
        ERR_set_error(0x39,0xb6,0);
        return;
      }
      pcVar2 = *(code **)(ctx + 0x68);
      lVar3 = *(long *)(ctx + 0x30);
    }
    (*pcVar2)(lVar3,out,olen);
    if ((*(long *)(ctx + 0x30) != 0) && (*(code **)(ctx + 0x48) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(ctx + 0x48))();
      return;
    }
  }
  return;
}



undefined8 ossl_drbg_lock(void)

{
  return 1;
}



void ossl_drbg_unlock(void)

{
  return;
}



void ossl_drbg_clear_seed(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CRYPTO_secure_clear_free(param_2,param_3,"providers/implementations/rands/drbg.c",0xbd);
  return;
}



long * ossl_prov_drbg_nonce_ctx_new(void)

{
  long *ptr;
  long lVar1;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"providers/implementations/rands/drbg.c",0x111);
  if (ptr != (long *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *ptr = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void ossl_prov_drbg_nonce_ctx_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool ossl_prov_drbg_instantiate
               (DRBG_CTX *param_1,uint param_2,undefined8 param_3,char *param_4,ulong param_5)

{
  uint entropy;
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  size_t olen;
  time_t tVar5;
  undefined8 *puVar6;
  void *ptr;
  ulong uVar7;
  undefined8 uVar8;
  ulong min_len;
  long in_FS_OFFSET;
  ulong local_98;
  void *local_68;
  uchar *local_60;
  DRBG_CTX *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  entropy = *(uint *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (void *)0x0;
  local_60 = (uchar *)0x0;
  if (entropy < param_2) {
    ERR_new();
    ERR_set_debug("providers/implementations/rands/drbg.c",0x166,"ossl_prov_drbg_instantiate");
    ERR_set_error(0x39,0xb5,0);
  }
  else {
    local_98 = *(ulong *)(param_1 + 0x90);
    min_len = *(ulong *)(param_1 + 0x88);
    if (param_4 == (char *)0x0) {
      param_5 = 0x1d;
      param_4 = "OpenSSL NIST SP 800-90A DRBG";
      if (*(ulong *)(param_1 + 0xa8) < 0x1d) goto LAB_001008fa;
    }
    else if (*(ulong *)(param_1 + 0xa8) < param_5) {
LAB_001008fa:
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x172,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xc3,0);
      goto LAB_00100960;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      uVar4 = *(ulong *)(param_1 + 0x98);
      *(undefined4 *)(param_1 + 0xe8) = 2;
      uVar3 = uVar4;
      if (uVar4 == 0) goto LAB_001007a2;
      lVar1 = *(long *)(param_1 + 0xa0);
      if (*(code **)(param_1 + 0x58) == (code *)0x0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          min_len = min_len + uVar4;
          entropy = entropy + (entropy >> 1);
          uVar3 = 0;
          local_98 = local_98 + lVar1;
          goto LAB_001007a2;
        }
        uVar8 = ossl_prov_ctx_get0_libctx(*(undefined8 *)(param_1 + 8));
        puVar6 = (undefined8 *)ossl_lib_ctx_get_data(uVar8,6);
        if (puVar6 == (undefined8 *)0x0) {
LAB_00100bc9:
          uVar3 = 0;
          if (*(long *)(param_1 + 0x98) != 0) goto LAB_00100bb3;
        }
        else {
          if ((((*(long *)(param_1 + 0x30) == 0) || (*(code **)(param_1 + 0x58) == (code *)0x0)) ||
              (uVar3 = (**(code **)(param_1 + 0x58))
                                 (*(long *)(param_1 + 0x30),0,0,*(undefined8 *)(param_1 + 0x98),
                                  *(undefined8 *)(param_1 + 0xa0)), uVar3 == 0)) ||
             (ptr = CRYPTO_malloc((int)uVar3,"providers/implementations/rands/drbg.c",0x13f),
             ptr == (void *)0x0)) {
LAB_00100b3f:
            local_50[0] = 0;
            local_58 = param_1;
            iVar2 = CRYPTO_atomic_add(puVar6 + 1,1,local_50,*puVar6);
            if (iVar2 == 0) goto LAB_00100bc9;
            uVar3 = ossl_prov_get_nonce(*(undefined8 *)(param_1 + 8),&local_68,uVar4,lVar1,&local_58
                                        ,0x10);
            ptr = local_68;
          }
          else {
            uVar7 = (**(code **)(param_1 + 0x58))
                              (*(undefined8 *)(param_1 + 0x30),ptr,0,*(undefined8 *)(param_1 + 0x98)
                               ,*(undefined8 *)(param_1 + 0xa0));
            if (uVar3 != uVar7) {
              CRYPTO_free(ptr);
              goto LAB_00100b3f;
            }
          }
          local_68 = ptr;
          if ((uVar3 < *(ulong *)(param_1 + 0x98)) || (*(ulong *)(param_1 + 0xa0) < uVar3)) {
LAB_00100bb3:
            ERR_new();
            uVar8 = 0x1a9;
            goto LAB_00100aa9;
          }
        }
LAB_001007a2:
        iVar2 = *(int *)(param_1 + 0xd0);
        if ((iVar2 == 0) || (iVar2 = iVar2 + 1, iVar2 != 0)) {
          *(int *)(param_1 + 0xd4) = iVar2;
        }
        else {
          *(undefined4 *)(param_1 + 0xd4) = 1;
        }
        olen = get_entropy(param_1,&local_60,entropy,min_len,local_98);
        if ((olen < min_len) || (local_98 < olen)) {
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg.c",0x1bc,"ossl_prov_drbg_instantiate")
          ;
          ERR_set_error(0x39,0xbd,0);
        }
        else {
          iVar2 = (**(code **)(param_1 + 0x10))
                            (param_1,local_60,olen,local_68,uVar3,param_4,param_5);
          if (iVar2 == 0) {
            cleanup_entropy(param_1,local_60,olen);
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg.c",0x1c3,
                          "ossl_prov_drbg_instantiate");
            ERR_set_error(0x39,0xbc,0);
          }
          else {
            cleanup_entropy(param_1,local_60,olen);
            *(undefined4 *)(param_1 + 0xe8) = 1;
            *(undefined4 *)(param_1 + 0xb8) = 1;
            tVar5 = time((time_t *)0x0);
            *(time_t *)(param_1 + 0xc0) = tVar5;
            *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
          }
        }
      }
      else {
        uVar3 = (**(code **)(param_1 + 0x58))(*(long *)(param_1 + 0x30),0,entropy,uVar4,lVar1);
        if (uVar3 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg.c",0x186,"ossl_prov_drbg_instantiate")
          ;
          ERR_set_error(0x39,0xbe,0);
          goto LAB_00100960;
        }
        local_68 = CRYPTO_malloc((int)uVar3,"providers/implementations/rands/drbg.c",0x189);
        if (local_68 == (void *)0x0) {
          ERR_new();
          uVar8 = 0x18b;
        }
        else {
          uVar4 = (**(code **)(param_1 + 0x58))
                            (*(undefined8 *)(param_1 + 0x30),local_68,
                             *(undefined4 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x98),
                             *(undefined8 *)(param_1 + 0xa0));
          if (uVar4 == uVar3) goto LAB_001007a2;
          ERR_new();
          uVar8 = 0x192;
        }
LAB_00100aa9:
        ERR_set_debug("providers/implementations/rands/drbg.c",uVar8,"ossl_prov_drbg_instantiate");
        ERR_set_error(0x39,0xbe,0);
      }
      goto LAB_0010084e;
    }
    if (*(int *)(param_1 + 0xe8) == 2) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x178,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xc0,0);
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x17a,"ossl_prov_drbg_instantiate");
      ERR_set_error(0x39,0xb9,0);
    }
  }
LAB_00100960:
  uVar3 = 0;
LAB_0010084e:
  if (local_68 != (void *)0x0) {
    ossl_prov_cleanup_nonce(*(undefined8 *)(param_1 + 8),local_68,uVar3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *(int *)(param_1 + 0xe8) == 1;
}



undefined8 ossl_prov_drbg_uninstantiate(long param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return 1;
}



uint ossl_prov_drbg_reseed
               (DRBG_CTX *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
               ulong param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t olen;
  time_t tVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    uVar1 = CRYPTO_THREAD_write_lock();
    if (uVar1 == 0) goto LAB_00100eb1;
  }
  local_48 = (uchar *)0x0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
LAB_00100f46:
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xe8);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        (**(code **)(param_1 + 0x18))(param_1);
        if (*(int *)(param_1 + 0xe8) == 0) goto LAB_00100ef1;
        if (*(int *)(param_1 + 0xe8) != 2) goto LAB_00100d40;
LAB_00100f8d:
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",500,"ossl_prov_drbg_reseed_unlocked")
        ;
        ERR_set_error(0x39,0xc0,0);
        uVar1 = 0;
        goto LAB_00100e9c;
      }
      if (iVar2 == 0) {
LAB_00100ef1:
        ossl_prov_drbg_instantiate(param_1,*(undefined4 *)(param_1 + 0x78),0,0,0);
        if (*(int *)(param_1 + 0xe8) == 2) goto LAB_00100f8d;
        if (*(int *)(param_1 + 0xe8) == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg.c",0x1f8,
                        "ossl_prov_drbg_reseed_unlocked");
          ERR_set_error(0x39,0xc1,0);
          goto LAB_00100f46;
        }
      }
    }
LAB_00100d40:
    if (param_3 == 0) {
LAB_00100d5f:
      if (param_5 == 0) {
        param_6 = 0;
      }
      else if (*(ulong *)(param_1 + 0xb0) < param_6) {
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x20d,
                      "ossl_prov_drbg_reseed_unlocked");
        ERR_set_error(0x39,0xb8,0);
        uVar1 = 0;
        goto LAB_00100e9c;
      }
      *(undefined4 *)(param_1 + 0xe8) = 2;
      iVar2 = *(int *)(param_1 + 0xd0);
      if ((iVar2 == 0) || (iVar2 = iVar2 + 1, iVar2 != 0)) {
        *(int *)(param_1 + 0xd4) = iVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0xd4) = 1;
      }
      lVar5 = param_5;
      uVar6 = param_6;
      if (param_3 != 0) {
        uVar6 = 0;
        lVar5 = 0;
        iVar2 = (**(code **)(param_1 + 0x20))(param_1,param_3,param_4,param_5,param_6);
        if (iVar2 == 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg.c",0x229,
                        "ossl_prov_drbg_reseed_unlocked");
          ERR_set_error(0x39,0xcc,0);
          uVar1 = 0;
          goto LAB_00100e9c;
        }
      }
      olen = get_entropy(param_1,&local_48,*(int *)(param_1 + 0x78),*(size_t *)(param_1 + 0x88),
                         *(size_t *)(param_1 + 0x90));
      if ((olen < *(ulong *)(param_1 + 0x88)) || (*(ulong *)(param_1 + 0x90) < olen)) {
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x238,
                      "ossl_prov_drbg_reseed_unlocked");
        ERR_set_error(0x39,0xbd,0);
      }
      else {
        iVar2 = (**(code **)(param_1 + 0x20))(param_1,local_48,olen,lVar5,uVar6);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0xe8) = 1;
          *(undefined4 *)(param_1 + 0xb8) = 1;
          tVar4 = time((time_t *)0x0);
          *(time_t *)(param_1 + 0xc0) = tVar4;
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
          if (*(long *)(param_1 + 0x30) != 0) {
            uVar3 = get_parent_reseed_count(param_1);
            *(undefined4 *)(param_1 + 0xd8) = uVar3;
          }
        }
      }
      cleanup_entropy(param_1,local_48,olen);
      uVar1 = (uint)(*(int *)(param_1 + 0xe8) == 1);
    }
    else if (param_4 < *(ulong *)(param_1 + 0x88)) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x1ff,"ossl_prov_drbg_reseed_unlocked")
      ;
      ERR_set_error(0x24,0x7c,0);
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xe8) = 2;
    }
    else {
      if (param_4 <= *(ulong *)(param_1 + 0x90)) goto LAB_00100d5f;
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x204,"ossl_prov_drbg_reseed_unlocked")
      ;
      ERR_set_error(0x24,0x6a,0);
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0xe8) = 2;
    }
  }
LAB_00100e9c:
  if (*(long *)param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
LAB_00100eb1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_prov_drbg_generate
          (DRBG_CTX *param_1,undefined8 param_2,ulong param_3,uint param_4,int param_5,long param_6,
          ulong param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  size_t olen;
  time_t tVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = ossl_prov_is_running();
  if ((iVar2 == 0) || ((*(long *)param_1 != 0 && (iVar2 = CRYPTO_THREAD_write_lock(), iVar2 == 0))))
  {
    uVar5 = 0;
    goto LAB_001013ba;
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  if (iVar2 == 1) {
LAB_00101155:
    if (*(uint *)(param_1 + 0x78) < param_4) {
      ERR_new();
      uVar5 = 0;
      ERR_set_debug("providers/implementations/rands/drbg.c",0x28c,"ossl_prov_drbg_generate");
      ERR_set_error(0x39,0xb5,0);
    }
    else if (*(ulong *)(param_1 + 0x80) < param_3) {
      ERR_new();
      uVar5 = 0;
      ERR_set_debug("providers/implementations/rands/drbg.c",0x291,"ossl_prov_drbg_generate");
      ERR_set_error(0x39,0xc4,0);
    }
    else if (*(ulong *)(param_1 + 0xb0) < param_7) {
      ERR_new();
      uVar5 = 0;
      ERR_set_debug("providers/implementations/rands/drbg.c",0x295,"ossl_prov_drbg_generate");
      ERR_set_error(0x39,0xb8,0);
    }
    else {
      iVar2 = openssl_get_fork_id();
      bVar6 = iVar2 != *(int *)(param_1 + 0x70);
      if (bVar6) {
        *(int *)(param_1 + 0x70) = iVar2;
      }
      if ((*(uint *)(param_1 + 0xbc) != 0) &&
         (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0xb8))) {
        bVar6 = true;
      }
      if (*(long *)(param_1 + 200) < 1) {
LAB_001011bb:
        if (*(long *)(param_1 + 0x30) != 0) {
LAB_001011c6:
          iVar2 = get_parent_reseed_count(param_1);
          if (iVar2 != *(int *)(param_1 + 0xd8)) goto LAB_001011da;
        }
        if (bVar6 || param_5 != 0) goto LAB_001011da;
LAB_00101481:
        iVar2 = (**(code **)(param_1 + 0x28))(param_1,param_2,param_3,param_6,param_7);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xe8) = 2;
          uVar5 = 0;
          ERR_new();
          ERR_set_debug("providers/implementations/rands/drbg.c",0x2ba,"ossl_prov_drbg_generate");
          ERR_set_error(0x39,0xbf,0);
        }
        else {
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
          uVar5 = 1;
        }
      }
      else {
        tVar4 = time((time_t *)0x0);
        if (tVar4 < *(long *)(param_1 + 0xc0)) {
          lVar1 = *(long *)(param_1 + 0x30);
        }
        else {
          lVar1 = *(long *)(param_1 + 0x30);
          if (tVar4 - *(long *)(param_1 + 0xc0) < *(long *)(param_1 + 200)) goto LAB_001011bb;
        }
        bVar6 = true;
        if (lVar1 != 0) goto LAB_001011c6;
LAB_001011da:
        local_48 = (uchar *)0x0;
        iVar2 = ossl_prov_is_running();
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0xe8);
          if (iVar2 != 1) {
            if (iVar2 == 2) {
              (**(code **)(param_1 + 0x18))(param_1);
              if (*(int *)(param_1 + 0xe8) == 0) goto LAB_001015a1;
              if (*(int *)(param_1 + 0xe8) != 2) goto LAB_001011fe;
LAB_001016c5:
              ERR_new();
              ERR_set_debug("providers/implementations/rands/drbg.c",500,
                            "ossl_prov_drbg_reseed_unlocked");
              ERR_set_error(0x39,0xc0,0);
              goto LAB_00101303;
            }
            if (iVar2 == 0) {
LAB_001015a1:
              ossl_prov_drbg_instantiate(param_1,*(undefined4 *)(param_1 + 0x78),0,0,0);
              if (*(int *)(param_1 + 0xe8) == 2) goto LAB_001016c5;
              if (*(int *)(param_1 + 0xe8) == 0) {
                ERR_new();
                ERR_set_debug("providers/implementations/rands/drbg.c",0x1f8,
                              "ossl_prov_drbg_reseed_unlocked");
                ERR_set_error(0x39,0xc1,0);
                goto LAB_00101303;
              }
            }
          }
LAB_001011fe:
          if (param_6 == 0) {
            param_7 = 0;
          }
          else if (*(ulong *)(param_1 + 0xb0) < param_7) {
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg.c",0x20d,
                          "ossl_prov_drbg_reseed_unlocked");
            ERR_set_error(0x39,0xb8,0);
            goto LAB_00101303;
          }
          *(undefined4 *)(param_1 + 0xe8) = 2;
          iVar2 = *(int *)(param_1 + 0xd0);
          if ((iVar2 == 0) || (iVar2 = iVar2 + 1, iVar2 != 0)) {
            *(int *)(param_1 + 0xd4) = iVar2;
          }
          else {
            *(undefined4 *)(param_1 + 0xd4) = 1;
          }
          olen = get_entropy(param_1,&local_48,*(int *)(param_1 + 0x78),*(size_t *)(param_1 + 0x88),
                             *(size_t *)(param_1 + 0x90));
          if ((olen < *(ulong *)(param_1 + 0x88)) || (*(ulong *)(param_1 + 0x90) < olen)) {
            ERR_new();
            ERR_set_debug("providers/implementations/rands/drbg.c",0x238,
                          "ossl_prov_drbg_reseed_unlocked");
            ERR_set_error(0x39,0xbd,0);
          }
          else {
            iVar2 = (**(code **)(param_1 + 0x20))(param_1,local_48,olen,param_6,param_7);
            if (iVar2 != 0) {
              *(undefined4 *)(param_1 + 0xe8) = 1;
              *(undefined4 *)(param_1 + 0xb8) = 1;
              tVar4 = time((time_t *)0x0);
              *(time_t *)(param_1 + 0xc0) = tVar4;
              *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xd4);
              if (*(long *)(param_1 + 0x30) != 0) {
                uVar3 = get_parent_reseed_count(param_1);
                *(undefined4 *)(param_1 + 0xd8) = uVar3;
              }
            }
          }
          cleanup_entropy(param_1,local_48,olen);
          if (*(int *)(param_1 + 0xe8) == 1) {
            param_7 = 0;
            param_6 = 0;
            goto LAB_00101481;
          }
        }
LAB_00101303:
        ERR_new();
        uVar5 = 0;
        ERR_set_debug("providers/implementations/rands/drbg.c",0x2b1,"ossl_prov_drbg_generate");
        ERR_set_error(0x39,0xc5,0);
      }
    }
  }
  else if (iVar2 == 2) {
    (**(code **)(param_1 + 0x18))();
    if (*(int *)(param_1 + 0xe8) == 0) goto LAB_00101351;
    if (*(int *)(param_1 + 0xe8) != 2) goto LAB_00101155;
LAB_0010143d:
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("providers/implementations/rands/drbg.c",0x283,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xc0,0);
  }
  else {
    if (iVar2 != 0) goto LAB_00101155;
LAB_00101351:
    ossl_prov_drbg_instantiate(param_1,*(undefined4 *)(param_1 + 0x78),0,0,0);
    if (*(int *)(param_1 + 0xe8) == 2) goto LAB_0010143d;
    if (*(int *)(param_1 + 0xe8) != 0) goto LAB_00101155;
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("providers/implementations/rands/drbg.c",0x287,"ossl_prov_drbg_generate");
    ERR_set_error(0x39,0xc1,0);
  }
  if (*(long *)param_1 != 0) {
    CRYPTO_THREAD_unlock();
  }
LAB_001013ba:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



ulong ossl_drbg_get_seed(long param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                        undefined4 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < param_3) && (uVar3 = (ulong)(param_3 + 7 >> 3), param_4 < uVar3)) {
    param_4 = uVar3;
  }
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  local_38 = param_1;
  lVar2 = CRYPTO_secure_malloc(param_4,"providers/implementations/rands/drbg.c",0xa1);
  if (lVar2 != 0) {
    iVar1 = ossl_prov_drbg_generate
                      (local_38,lVar2,param_4,*(undefined4 *)(local_38 + 0x78),param_6,&local_38);
    if (iVar1 != 0) {
      *param_2 = lVar2;
      goto LAB_001017f5;
    }
    CRYPTO_secure_clear_free(lVar2,param_4,"providers/implementations/rands/drbg.c",0xb1);
    ERR_new();
    ERR_set_debug("providers/implementations/rands/drbg.c",0xb2,"ossl_drbg_get_seed");
    ERR_set_error(0x39,0xbf,0);
  }
  param_4 = 0;
LAB_001017f5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_drbg_enable_locking(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 == 0) {
    if (((code *)param_1[7] != (code *)0x0) &&
       (iVar1 = (*(code *)param_1[7])(param_1[6]), iVar1 == 0)) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x2fb,"ossl_drbg_enable_locking");
      ERR_set_error(0x39,0xb6,0);
      return 0;
    }
    lVar2 = CRYPTO_THREAD_lock_new();
    *param_1 = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/rands/drbg.c",0x300,"ossl_drbg_enable_locking");
      ERR_set_error(0x39,0xb4,0);
      return 0;
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ossl_rand_drbg_new(undefined8 param_1,long param_2,int *param_3,code *param_4,code *param_5,
                       undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = ossl_prov_is_running();
  if ((iVar4 != 0) &&
     (lVar6 = CRYPTO_zalloc(0x120,"providers/implementations/rands/drbg.c",0x324), lVar6 != 0)) {
    *(undefined8 *)(lVar6 + 0x18) = param_7;
    *(undefined8 *)(lVar6 + 0x20) = param_8;
    *(undefined8 *)(lVar6 + 8) = param_1;
    *(undefined8 *)(lVar6 + 0x28) = param_9;
    *(undefined8 *)(lVar6 + 0x10) = param_6;
    uVar5 = openssl_get_fork_id();
    *(long *)(lVar6 + 0x30) = param_2;
    *(undefined4 *)(lVar6 + 0x70) = uVar5;
    if ((param_3 != (int *)0x0) && (iVar4 = *param_3, piVar7 = param_3, iVar9 = iVar4, iVar4 != 0))
    {
      do {
        piVar8 = param_3;
        iVar10 = iVar4;
        if (iVar9 == 8) {
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(piVar7 + 2);
          break;
        }
        piVar1 = piVar7 + 4;
        piVar7 = piVar7 + 4;
        iVar9 = *piVar1;
      } while (*piVar1 != 0);
      do {
        piVar7 = param_3;
        iVar9 = iVar4;
        if (iVar10 == 9) {
          *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(piVar8 + 2);
          break;
        }
        piVar1 = piVar8 + 4;
        piVar8 = piVar8 + 4;
        iVar10 = *piVar1;
      } while (*piVar1 != 0);
      do {
        piVar8 = param_3;
        iVar10 = iVar4;
        if (iVar9 == 10) {
          *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(piVar7 + 2);
          break;
        }
        piVar1 = piVar7 + 4;
        piVar7 = piVar7 + 4;
        iVar9 = *piVar1;
      } while (*piVar1 != 0);
      do {
        piVar7 = param_3;
        iVar9 = iVar4;
        if (iVar10 == 0xf) {
          *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(piVar8 + 2);
          break;
        }
        piVar1 = piVar8 + 4;
        piVar8 = piVar8 + 4;
        iVar10 = *piVar1;
      } while (*piVar1 != 0);
      do {
        piVar8 = param_3;
        iVar10 = iVar4;
        if (iVar9 == 7) {
          *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(piVar7 + 2);
          break;
        }
        piVar1 = piVar7 + 4;
        piVar7 = piVar7 + 4;
        iVar9 = *piVar1;
      } while (*piVar1 != 0);
      do {
        if (iVar10 == 0x12) {
          *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(piVar8 + 2);
          break;
        }
        piVar7 = piVar8 + 4;
        piVar8 = piVar8 + 4;
        iVar10 = *piVar7;
      } while (*piVar7 != 0);
      do {
        if (iVar4 == 0x13) {
          *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(param_3 + 2);
          break;
        }
        iVar4 = param_3[4];
        param_3 = param_3 + 4;
      } while (iVar4 != 0);
    }
    uVar3 = _UNK_001021e8;
    uVar2 = __LC3;
    *(undefined8 *)(lVar6 + 0x90) = 0x7fffffff;
    *(undefined8 *)(lVar6 + 0xb0) = 0x7fffffff;
    *(undefined4 *)(lVar6 + 0xb8) = 1;
    *(undefined8 *)(lVar6 + 0xa0) = uVar2;
    *(undefined8 *)(lVar6 + 0xa8) = uVar3;
    LOCK();
    *(undefined4 *)(lVar6 + 0xd0) = 1;
    UNLOCK();
    *(undefined4 *)(lVar6 + 0xbc) = 0x100;
    *(undefined8 *)(lVar6 + 200) = 0xe10;
    iVar4 = (*param_4)(lVar6);
    if (iVar4 != 0) {
      if (param_2 == 0) goto LAB_00101b47;
      iVar4 = get_parent_strength(lVar6,&local_44);
      if (iVar4 != 0) {
        if (*(uint *)(lVar6 + 0x78) <= local_44) goto LAB_00101b47;
        ERR_new();
        ERR_set_debug("providers/implementations/rands/drbg.c",0x355,"ossl_rand_drbg_new");
        ERR_set_error(0x39,0xc2,0);
      }
    }
    (*param_5)(lVar6);
  }
  lVar6 = 0;
LAB_00101b47:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_rand_drbg_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_THREAD_lock_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



bool ossl_drbg_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"state");
  if (lVar2 == 0) {
LAB_00101c3a:
    lVar2 = OSSL_PARAM_locate(param_2,"strength");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 0x78));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"min_entropylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x88));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"max_entropylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x90));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"min_noncelen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x98));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"max_noncelen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0xa0));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"max_perslen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0xa8));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"max_adinlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0xb0));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"reseed_requests");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0xbc));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"reseed_time");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_time_t(lVar2,*(undefined8 *)(param_1 + 0xc0));
      if (iVar1 == 0) goto LAB_00101de0;
    }
    lVar2 = OSSL_PARAM_locate(param_2,"reseed_time_interval");
    if (lVar2 == 0) {
      bVar3 = true;
    }
    else {
      iVar1 = OSSL_PARAM_set_time_t(lVar2,*(undefined8 *)(param_1 + 200));
      bVar3 = iVar1 != 0;
    }
  }
  else {
    iVar1 = OSSL_PARAM_set_int(lVar2,*(undefined4 *)(param_1 + 0xe8));
    if (iVar1 != 0) goto LAB_00101c3a;
LAB_00101de0:
    bVar3 = false;
  }
  return bVar3;
}



undefined8 ossl_drbg_get_ctx_params_no_lock(long param_1,long param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = OSSL_PARAM_locate(param_2,"max_request");
  if (lVar2 == 0) {
    lVar4 = 0;
    lVar3 = 0x28;
  }
  else {
    lVar4 = 0x28;
    lVar3 = 0x50;
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x80));
    if (iVar1 == 0) {
      return 0;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"reseed_counter");
  if ((lVar2 != 0) &&
     (iVar1 = OSSL_PARAM_set_uint(lVar2,*(undefined4 *)(param_1 + 0xd0)), lVar4 = lVar3, iVar1 == 0)
     ) {
    return 0;
  }
  *param_3 = (uint)(*(long *)(param_2 + lVar4) == 0);
  return 1;
}



ulong ossl_drbg_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == (long *)0x0) {
    return 1;
  }
  if (*param_2 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"reseed_requests");
    if ((lVar2 != 0) && (uVar3 = OSSL_PARAM_get_uint(lVar2,param_1 + 0xbc), (int)uVar3 == 0)) {
      return uVar3;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"reseed_time_interval");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_time_t(lVar2,param_1 + 200);
      return (ulong)(iVar1 != 0);
    }
  }
  return 1;
}



undefined8 ossl_drbg_verify_digest(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = EVP_MD_xof(param_3);
  if (iVar1 == 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("providers/implementations/rands/drbg.c",0x401,"ossl_drbg_verify_digest");
  ERR_set_error(0x39,0xb7,0);
  return 0;
}



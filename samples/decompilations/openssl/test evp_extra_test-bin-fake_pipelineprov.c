
undefined1 * fake_pipeline_aead_gettable_ctx_params(void)

{
  return fake_pipeline_aead_known_gettable_ctx_params;
}



undefined1 * fake_pipeline_aead_settable_ctx_params(void)

{
  return fake_pipeline_aead_known_settable_ctx_params;
}



undefined1 * fake_pipeline_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fake_ciphers;
  if (param_2 != 2) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fake_pipeline_update
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,long param_6,
          long param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar3 = 0;
    if (param_3 == 0) {
      do {
        iVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar3 * 8),(uchar *)0x0,
                                 &local_44,*(uchar **)(param_6 + lVar3 * 8),
                                 *(int *)(param_7 + lVar3 * 8));
        if (iVar1 == 0) goto LAB_001000cc;
        *(long *)(param_4 + lVar3 * 8) = (long)local_44;
        lVar3 = lVar3 + 1;
      } while (param_2 != lVar3);
    }
    else {
      do {
        iVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar3 * 8),
                                 *(uchar **)(param_3 + lVar3 * 8),&local_44,
                                 *(uchar **)(param_6 + lVar3 * 8),*(int *)(param_7 + lVar3 * 8));
        if (iVar1 == 0) goto LAB_001000cc;
        *(long *)(param_4 + lVar3 * 8) = (long)local_44;
        lVar3 = lVar3 + 1;
      } while (param_2 != lVar3);
    }
  }
  uVar2 = 1;
LAB_0010010d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
LAB_001000cc:
  uVar2 = 0;
  goto LAB_0010010d;
}



int fake_pipeline_final(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      iVar1 = EVP_CipherFinal(*(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar2 * 8),
                              *(uchar **)(param_3 + lVar2 * 8),&local_44);
      if (iVar1 == 0) goto LAB_001001a7;
      *(long *)(param_4 + lVar2 * 8) = (long)local_44;
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
  }
  iVar1 = 1;
LAB_001001a7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fake_pipeline_aead_get_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,param_1[1]);
      if (iVar1 != 0) goto LAB_00100270;
      ERR_new();
      uVar4 = 0xbe;
LAB_00100358:
      ERR_set_debug("test/fake_pipelineprov.c",uVar4,"fake_pipeline_aead_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      uVar4 = 0;
      goto LAB_00100385;
    }
LAB_00100270:
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_set_size_t(lVar2,*param_1);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0xc6;
        goto LAB_00100358;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"pipeline-tag");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_octet_ptr(lVar2,&local_90,&local_98);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0xce;
        goto LAB_00100358;
      }
      if (param_1[2] != 0) {
        uVar3 = 0;
        do {
          OSSL_PARAM_construct_octet_string
                    (&local_c8,&_LC4,*(undefined8 *)(local_90 + uVar3 * 8),local_98);
          local_88._8_8_ = uStack_c0;
          local_88._0_8_ = local_c8;
          local_68._0_8_ = local_a8;
          local_78._8_8_ = uStack_b0;
          local_78._0_8_ = local_b8;
          iVar1 = EVP_CIPHER_CTX_get_params(param_1[uVar3 + 4],local_88);
          if (iVar1 == 0) {
            ERR_new();
            uVar4 = 0xd6;
            goto LAB_00100358;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (ulong)param_1[2]);
      }
    }
  }
  uVar4 = 1;
LAB_00100385:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fake_pipeline_aead_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_90 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar2 = OSSL_PARAM_locate_const(param_2,"pipeline-tag");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_octet_ptr(lVar2,&local_90,&local_98);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0xea;
LAB_0010050c:
      ERR_set_debug("test/fake_pipelineprov.c",uVar4,"fake_pipeline_aead_set_ctx_params");
      ERR_set_error(0x39,0x68,0);
      uVar4 = 0;
      goto LAB_00100535;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar3 = 0;
      do {
        OSSL_PARAM_construct_octet_string
                  (&local_c8,&_LC4,*(undefined8 *)(local_90 + uVar3 * 8),local_98);
        local_88._8_8_ = uStack_c0;
        local_88._0_8_ = local_c8;
        local_68._0_8_ = local_a8;
        local_78._8_8_ = uStack_b0;
        local_78._0_8_ = local_b8;
        iVar1 = EVP_CIPHER_CTX_set_params(*(undefined8 *)(param_1 + 0x20 + uVar3 * 8),local_88);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0xf2;
          goto LAB_0010050c;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(param_1 + 0x10));
    }
  }
  uVar4 = 1;
LAB_00100535:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
fake_pipeline_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_LIB_CTX_new();
  *param_4 = uVar1;
  uVar1 = test_ptr("test/fake_pipelineprov.c",0x143,"*provctx = OSSL_LIB_CTX_new()",uVar1);
  if ((int)uVar1 != 0) {
    *param_3 = fake_pipeline_method;
    uVar1 = 1;
  }
  return uVar1;
}



void aes_256_gcm_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,6,3,0x100,8,0x60);
  return;
}



void fake_pipeline_freectx(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar1));
    } while (uVar2 < *(ulong *)(param_1 + 0x10));
  }
  CRYPTO_clear_free(param_1,0x120,"test/fake_pipelineprov.c",0x44);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * fake_pipeline_aes_256_gcm_newctx(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)0x0;
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0x120,"test/fake_pipelineprov.c",0x2f);
    uVar1 = _UNK_00100cb8;
    uVar4 = __LC6;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[2] = 0;
      *puVar3 = uVar4;
      puVar3[1] = uVar1;
      uVar4 = EVP_CIPHER_fetch(param_1,"AES-256-GCM","provider=default");
      puVar3[3] = uVar4;
    }
  }
  return puVar3;
}



undefined8
fake_pipeline_einit(long param_1,uchar *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  long lVar2;
  
  *(long *)(param_1 + 0x10) = param_4;
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      ctx = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar2 * 8) = ctx;
      if (ctx == (EVP_CIPHER_CTX *)0x0) {
        return 0;
      }
      iVar1 = EVP_CipherInit(ctx,*(EVP_CIPHER **)(param_1 + 0x18),param_2,
                             *(uchar **)(param_5 + lVar2 * 8),1);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (param_4 != lVar2);
  }
  return 1;
}



undefined8
fake_pipeline_dinit(long param_1,uchar *param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  EVP_CIPHER_CTX *ctx;
  long lVar2;
  
  *(long *)(param_1 + 0x10) = param_4;
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      ctx = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x20 + lVar2 * 8) = ctx;
      if (ctx == (EVP_CIPHER_CTX *)0x0) {
        return 0;
      }
      iVar1 = EVP_CipherInit(ctx,*(EVP_CIPHER **)(param_1 + 0x18),param_2,
                             *(uchar **)(param_5 + lVar2 * 8),0);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (param_4 != lVar2);
  }
  return 1;
}



undefined8 fake_pipeline_start(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OSSL_PROVIDER_add_builtin(param_1,"fake-pipeline",fake_pipeline_provider_init);
  iVar1 = test_true("test/fake_pipelineprov.c",0x14d,
                    "OSSL_PROVIDER_add_builtin(libctx, \"fake-pipeline\", fake_pipeline_provider_init)"
                    ,iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = OSSL_PROVIDER_try_load(param_1,"fake-pipeline",1);
    iVar1 = test_ptr("test/fake_pipelineprov.c",0x14f,
                     "p = OSSL_PROVIDER_try_load(libctx, \"fake-pipeline\", 1)",uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  return 0;
}



void fake_pipeline_finish(void)

{
  OSSL_PROVIDER_unload();
  return;
}




undefined8 fake_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  return 1;
}



undefined1 * fake_gettable_ctx_params(void)

{
  return fake_known_gettable_ctx_params;
}



undefined1 * fake_settable_ctx_params(void)

{
  return fake_known_settable_ctx_params;
}



undefined1 * fake_cipher_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = fake_cipher_algs;
  if ((param_2 != 2) && (puVar1 = fake_skeymgmt_algs, param_2 != 0xf)) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined8
fake_cipher_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = OSSL_LIB_CTX_new();
  *param_4 = uVar1;
  uVar1 = test_ptr("test/fake_cipherprov.c",300,"*provctx = OSSL_LIB_CTX_new()",uVar1);
  if ((int)uVar1 != 0) {
    *param_3 = fake_cipher_method;
    uVar1 = 1;
  }
  return uVar1;
}



void fake_skeymgmt_export(char *param_1,uint param_2,code *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8 [5];
  undefined8 local_90 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 & 1) == 0) {
    puVar1 = local_b8;
  }
  else {
    puVar1 = local_90;
    sVar2 = strlen(param_1);
    OSSL_PARAM_construct_utf8_string(&local_e8,"key_name",param_1,sVar2);
  }
  puVar3 = puVar1;
  if ((param_2 & 2) != 0) {
    puVar3 = puVar1 + 5;
    OSSL_PARAM_construct_octet_string(&local_e8,"raw-bytes",param_1 + 0x20,0x10);
    *puVar1 = local_e8;
    puVar1[1] = uStack_e0;
    puVar1[2] = local_d8;
    puVar1[3] = uStack_d0;
    puVar1[4] = local_c8;
  }
  OSSL_PARAM_construct_end(&local_e8);
  *puVar3 = local_e8;
  puVar3[1] = uStack_e0;
  puVar3[2] = local_d8;
  puVar3[3] = uStack_d0;
  puVar3[4] = local_c8;
  (*param_3)(local_b8,param_4);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void fake_newctx(void)

{
  CRYPTO_zalloc(0x30,"test/fake_cipherprov.c",0x77);
  return;
}



void fake_skeymgmt_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void fake_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 fake_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xe4;
      goto LAB_001002e1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x10);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xe9;
LAB_001002e1:
      ERR_set_debug("test/fake_cipherprov.c",uVar3,"fake_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined8 fake_get_params(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_1,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xc5;
      goto LAB_00100391;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xca;
LAB_00100391:
      ERR_set_debug("test/fake_cipherprov.c",uVar3,"fake_get_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined8 fake_skey_einit(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
  }
  return 1;
}



undefined8
fake_cipher(long param_1,void *param_2,ulong *param_3,ulong param_4,void *param_5,ulong param_6)

{
  ulong uVar1;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_6 <= param_4) {
    if (param_2 != param_5) {
      param_2 = memcpy(param_2,param_5,param_6);
    }
    if (param_6 != 0) {
      uVar1 = 0;
      do {
        *(byte *)((long)param_2 + uVar1) =
             *(byte *)((long)param_2 + uVar1) ^
             *(byte *)(param_1 + 0x20 + (ulong)((uint)uVar1 & 0xf));
        uVar1 = uVar1 + 1;
      } while (param_6 != uVar1);
    }
    *param_3 = param_6;
    return 1;
  }
  return 0;
}



undefined8 * fake_skeymgmt_import(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *ptr;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ptr = (undefined8 *)CRYPTO_zalloc(0x30,"test/fake_cipherprov.c",0x44);
  iVar3 = test_ptr("test/fake_cipherprov.c",0x44,
                   "ctx = OPENSSL_zalloc(sizeof(PROV_CIPHER_FAKE_CTX))",ptr);
  if (iVar3 == 0) {
LAB_00100634:
    ptr = (undefined8 *)0x0;
  }
  else {
    local_50 = local_48;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    lVar5 = OSSL_PARAM_locate_const(param_3,"key_name");
    if (lVar5 != 0) {
      iVar3 = OSSL_PARAM_get_utf8_string(lVar5,&local_50,0x20);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("test/fake_cipherprov.c",0x28,"ctx_from_key_params");
        ERR_set_error(0x39,0x68,0);
        CRYPTO_free(ptr);
        goto LAB_00100634;
      }
      *ptr = local_48._0_8_;
      ptr[1] = local_48._8_8_;
      ptr[2] = local_38._0_8_;
      ptr[3] = local_38._8_8_;
    }
    lVar5 = OSSL_PARAM_locate_const(param_3,"raw-bytes");
    if (lVar5 != 0) {
      uVar7 = *(ulong *)(lVar5 + 0x18);
      puVar2 = *(undefined8 **)(lVar5 + 0x10);
      puVar1 = ptr + 4;
      if (0x10 < uVar7) {
        uVar7 = 0x10;
      }
      uVar6 = (uint)uVar7;
      if (uVar6 < 8) {
        if ((uVar7 & 4) == 0) {
          if ((uVar6 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)puVar2, (uVar7 & 2) != 0)) {
            *(undefined2 *)((long)ptr + (uVar7 & 0xffffffff) + 0x1e) =
                 *(undefined2 *)((long)puVar2 + ((uVar7 & 0xffffffff) - 2));
          }
        }
        else {
          *(undefined4 *)puVar1 = *(undefined4 *)puVar2;
          *(undefined4 *)((long)ptr + (uVar7 & 0xffffffff) + 0x1c) =
               *(undefined4 *)((long)puVar2 + ((uVar7 & 0xffffffff) - 4));
        }
      }
      else {
        ptr[4] = *puVar2;
        *(undefined8 *)((long)ptr + (uVar7 & 0xffffffff) + 0x18) =
             *(undefined8 *)((long)puVar2 + ((uVar7 & 0xffffffff) - 8));
        lVar5 = (long)puVar1 - ((ulong)(ptr + 5) & 0xfffffffffffffff8);
        uVar6 = uVar6 + (int)lVar5 & 0xfffffff8;
        if (7 < uVar6) {
          uVar4 = 0;
          do {
            uVar7 = (ulong)uVar4;
            uVar4 = uVar4 + 8;
            *(undefined8 *)(((ulong)(ptr + 5) & 0xfffffffffffffff8) + uVar7) =
                 *(undefined8 *)((long)puVar2 + (uVar7 - lVar5));
          } while (uVar4 < uVar6);
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ptr;
}



undefined8 fake_skey_dinit(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar1;
  }
  return 1;
}



undefined8 fake_cipher_start(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OSSL_PROVIDER_add_builtin(param_1,"fake-cipher",fake_cipher_provider_init);
  iVar1 = test_true("test/fake_cipherprov.c",0x136,
                    "OSSL_PROVIDER_add_builtin(libctx, FAKE_PROV_NAME, fake_cipher_provider_init)",
                    iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = OSSL_PROVIDER_try_load(param_1,"fake-cipher",1);
    iVar1 = test_ptr("test/fake_cipherprov.c",0x138,
                     "p = OSSL_PROVIDER_try_load(libctx, FAKE_PROV_NAME, 1)",uVar2);
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  return 0;
}



void fake_cipher_finish(void)

{
  OSSL_PROVIDER_unload();
  return;
}



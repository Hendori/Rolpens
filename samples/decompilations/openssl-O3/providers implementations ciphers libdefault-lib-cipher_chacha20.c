
undefined1 * chacha20_gettable_ctx_params(void)

{
  return chacha20_known_gettable_ctx_params;
}



undefined1 * chacha20_settable_ctx_params(void)

{
  return chacha20_known_settable_ctx_params;
}



undefined8 chacha20_set_ctx_params(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_18);
      if (iVar1 != 0) {
        if (local_18 != 0x20) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_chacha20.c",0x8b,
                        "chacha20_set_ctx_params");
          ERR_set_error(0x39,0x69,0);
          uVar3 = 0;
          goto LAB_001000b5;
        }
        goto LAB_00100075;
      }
      ERR_new();
      uVar3 = 0x87;
LAB_00100119:
      ERR_set_debug("providers/implementations/ciphers/cipher_chacha20.c",uVar3,
                    "chacha20_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
      goto LAB_001000b5;
    }
LAB_00100075:
    lVar2 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_18);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0x92;
        goto LAB_00100119;
      }
      if (local_18 != 0x10) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_chacha20.c",0x96,
                      "chacha20_set_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        uVar3 = 0;
        goto LAB_001000b5;
      }
    }
  }
  uVar3 = 1;
LAB_001000b5:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int ossl_chacha20_einit(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))(param_1);
    }
    iVar2 = chacha20_set_ctx_params(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}



int ossl_chacha20_dinit(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                       undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))(param_1);
    }
    iVar2 = chacha20_set_ctx_params(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}



undefined8 chacha20_get_ctx_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x10);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x65;
      goto LAB_001002d1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x20);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x6a;
LAB_001002d1:
      ERR_set_debug("providers/implementations/ciphers/cipher_chacha20.c",uVar3,
                    "chacha20_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



void chacha20_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,2,0x100,8,0x80);
  return;
}



void * chacha20_dupctx(long param_1)

{
  void *ptr;
  long lVar1;
  
  if ((param_1 != 0) &&
     (ptr = (void *)CRYPTO_memdup(param_1,0x138,
                                  "providers/implementations/ciphers/cipher_chacha20.c",0x4a),
     ptr != (void *)0x0)) {
    if (*(long *)((long)ptr + 0x78) == 0) {
      return ptr;
    }
    if (*(int *)((long)ptr + 0x80) == 0) {
      return ptr;
    }
    lVar1 = CRYPTO_memdup(*(long *)((long)ptr + 0x78),*(undefined8 *)((long)ptr + 0x88),
                          "providers/implementations/ciphers/cipher_chacha20.c",0x4c);
    *(long *)((long)ptr + 0x78) = lVar1;
    if (lVar1 != 0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void chacha20_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x138,"providers/implementations/ciphers/cipher_chacha20.c",0x40);
    return;
  }
  return;
}



undefined1  [16] ossl_chacha20_initctx(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  
  uVar2 = ossl_prov_cipher_hw_chacha20(0x100);
  ossl_cipher_generic_initkey(param_1,0x100,8,0x80,0,2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



long chacha20_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x138,"providers/implementations/ciphers/cipher_chacha20.c",0x34);
    if (lVar2 != 0) {
      ossl_chacha20_initctx(lVar2);
    }
  }
  return lVar2;
}



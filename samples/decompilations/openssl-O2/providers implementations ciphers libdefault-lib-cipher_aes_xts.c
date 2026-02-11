
undefined1 * aes_xts_settable_ctx_params(void)

{
  return aes_xts_known_settable_ctx_params;
}



undefined8 aes_xts_set_ctx_params(long param_1,long *param_2)

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
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0x10c,
                      "aes_xts_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
      }
      else if (*(long *)(param_1 + 0x48) == local_18) goto LAB_00100068;
      uVar3 = 0;
      goto LAB_0010006d;
    }
  }
LAB_00100068:
  uVar3 = 1;
LAB_0010006d:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aes_256_xts_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10001,2,0x200,8,0x80);
  return;
}



void aes_128_xts_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10001,2,0x100,8,0x80);
  return;
}



undefined8 aes_xts_stream_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



void * aes_xts_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (((*(long *)(param_1 + 0x2b0) == 0) ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x2b0) == param_1 + 0xc0)) &&
       ((*(long *)(param_1 + 0x2b8) == 0 ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x2b8) == param_1 + 0x1b8)))) {
      pvVar2 = CRYPTO_malloc(0x2e0,"providers/implementations/ciphers/cipher_aes_xts.c",0xa9);
      if (pvVar2 != (void *)0x0) {
        (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
      }
    }
    return pvVar2;
  }
  return (void *)0x0;
}



void aes_xts_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x2e0,"providers/implementations/ciphers/cipher_aes_xts.c",0x91);
  return;
}



undefined8
aes_xts_cipher(long param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5,
              ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && (*(long *)(param_1 + 0x2b0) != 0)) && (*(long *)(param_1 + 0x2b8) != 0)) &&
     ((((*(byte *)(param_1 + 0x6c) & 4) != 0 && (param_2 != 0 && param_5 != 0)) && (0xf < param_6)))
     ) {
    if (param_6 < 0x1000001) {
      if (*(code **)(param_1 + 0x2d0) == (code *)0x0) {
        iVar1 = CRYPTO_xts128_encrypt
                          (param_1 + 0x2b0,param_1 + 0x20,param_5,param_2,param_6,
                           *(byte *)(param_1 + 0x6c) >> 1 & 1);
        if (iVar1 != 0) {
          return 0;
        }
      }
      else {
        (**(code **)(param_1 + 0x2d0))
                  (param_5,param_2,param_6,*(long *)(param_1 + 0x2b0),*(long *)(param_1 + 0x2b8),
                   param_1 + 0x20);
      }
      *param_3 = param_6;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0xca,"aes_xts_cipher");
    ERR_set_error(0x39,0x94,0);
  }
  return 0;
}



undefined8 aes_xts_stream_update(void)

{
  int iVar1;
  ulong in_RCX;
  ulong in_R9;
  
  if (in_RCX < in_R9) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0xdf,"aes_xts_stream_update")
    ;
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    iVar1 = aes_xts_cipher();
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0xe4,"aes_xts_stream_update")
    ;
    ERR_set_error(0x39,0x66,0);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aes_xts_init(long param_1,void *param_2,ulong param_3,long param_4,undefined8 param_5,
            undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd | (param_7 & 1) * '\x02';
    if ((param_4 != 0) && (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0))
    {
      return 0;
    }
    if (param_2 == (void *)0x0) {
LAB_001004b0:
      uVar2 = aes_xts_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (*(ulong *)(param_1 + 0x48) == param_3) {
      if (((_ossl_aes_xts_allow_insecure_decrypt == 0) || ((param_7 & 1) != 0)) &&
         (iVar1 = CRYPTO_memcmp(param_2,(void *)((long)param_2 + (param_3 >> 1)),param_3 >> 1),
         iVar1 == 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0x3b,
                      "aes_xts_check_keys_differ");
        ERR_set_error(0x39,0x95,0);
        return 0;
      }
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_001004b0;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_xts.c",0x5a,"aes_xts_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



void aes_xts_dinit(void)

{
  aes_xts_init();
  return;
}



void aes_xts_einit(void)

{
  aes_xts_init();
  return;
}



long aes_xts_newctx_constprop_0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x2e0,"providers/implementations/ciphers/cipher_aes_xts.c",0x83);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_aes_xts(param_1);
      ossl_cipher_generic_initkey(lVar2,param_1,8,0x80,0x10001,2,uVar3,0);
    }
  }
  return lVar2;
}



void aes_128_xts_newctx(void)

{
  aes_xts_newctx_constprop_0(0x100);
  return;
}



void aes_256_xts_newctx(void)

{
  aes_xts_newctx_constprop_0(0x200);
  return;
}




undefined1 * sm4_xts_settable_ctx_params(void)

{
  return sm4_xts_known_settable_ctx_params;
}



undefined8 sm4_xts_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"xts_standard");
    if (lVar3 != 0) {
      local_18 = 0;
      if (*(int *)(lVar3 + 8) == 4) {
        iVar1 = OSSL_PARAM_get_utf8_string_ptr(lVar3,&local_18);
        if (iVar1 != 0) {
          iVar1 = OPENSSL_strcasecmp(local_18,&_LC2);
          if (iVar1 != 0) {
            iVar2 = OPENSSL_strcasecmp(local_18,&_LC3);
            iVar1 = 1;
            if (iVar2 != 0) {
              ERR_new();
              ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0xeb,
                            "sm4_xts_set_ctx_params");
              ERR_set_error(0x39,0x68,0);
              goto LAB_00100059;
            }
          }
          *(int *)(param_1 + 0x1c0) = iVar1;
          goto LAB_001000a8;
        }
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0xe3,
                      "sm4_xts_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
      }
LAB_00100059:
      uVar4 = 0;
      goto LAB_0010005b;
    }
  }
LAB_001000a8:
  uVar4 = 1;
LAB_0010005b:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void sm4_128_xts_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10001,2,0x100,8,0x80);
  return;
}



undefined8 sm4_xts_stream_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



void * sm4_xts_dupctx(long param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (((*(long *)(param_1 + 0x1c8) == 0) ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x1c8) == param_1 + 0xc0)) &&
       ((*(long *)(param_1 + 0x1d0) == 0 ||
        (pvVar2 = (void *)0x0, *(long *)(param_1 + 0x1d0) == param_1 + 0x140)))) {
      pvVar2 = CRYPTO_malloc(0x1f8,"providers/implementations/ciphers/cipher_sm4_xts.c",0x72);
      if (pvVar2 != (void *)0x0) {
        (**(code **)(*(long *)(param_1 + 0xa8) + 0x10))(pvVar2,param_1);
      }
    }
    return pvVar2;
  }
  return (void *)0x0;
}



void sm4_xts_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1f8,"providers/implementations/ciphers/cipher_sm4_xts.c",0x5f);
  return;
}



undefined8
sm4_xts_cipher(long param_1,long param_2,ulong *param_3,undefined8 param_4,long param_5,
              ulong param_6)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (*(long *)(param_1 + 0x1c8) == 0)) || (*(long *)(param_1 + 0x1d0) == 0)) ||
     ((((*(byte *)(param_1 + 0x6c) & 4) == 0 || (param_2 == 0 || param_5 == 0)) || (param_6 < 0x10))
     )) {
    return 0;
  }
  if (0x1000000 < param_6) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0x8e,"sm4_xts_cipher");
    ERR_set_error(0x39,0x94,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x1c0) == 0) {
    pcVar2 = *(code **)(param_1 + 0x1e8);
    if (pcVar2 == (code *)0x0) {
      iVar1 = ossl_crypto_xts128gb_encrypt(param_1 + 0x1c8,param_1 + 0x20,param_5,param_2,param_6);
      if (iVar1 != 0) {
        return 0;
      }
      goto LAB_00100316;
    }
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x1f0);
    if (pcVar2 == (code *)0x0) {
      iVar1 = CRYPTO_xts128_encrypt(param_1 + 0x1c8,param_1 + 0x20,param_5,param_2,param_6);
      if (iVar1 != 0) {
        return 0;
      }
      goto LAB_00100316;
    }
  }
  (*pcVar2)(param_5,param_2,param_6,*(long *)(param_1 + 0x1c8),*(long *)(param_1 + 0x1d0),
            param_1 + 0x20,*(byte *)(param_1 + 0x6c) >> 1 & 1);
LAB_00100316:
  *param_3 = param_6;
  return 1;
}



undefined8
sm4_xts_dinit(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfd;
    if ((param_4 != 0) && (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0))
    {
      return 0;
    }
    if (param_2 == 0) {
LAB_0010042d:
      uVar2 = sm4_xts_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 0x48)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_0010042d;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0x36,"sm4_xts_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



long sm4_128_xts_newctx(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = CRYPTO_zalloc(0x1f8,"providers/implementations/ciphers/cipher_sm4_xts.c",0x50);
  if (lVar1 != 0) {
    uVar2 = ossl_prov_cipher_hw_sm4_xts(0x100);
    ossl_cipher_generic_initkey(lVar1,0x100,8,0x80,0x10001,2,uVar2,0);
  }
  return lVar1;
}



undefined8
sm4_xts_einit(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 2;
    if ((param_4 != 0) && (iVar1 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar1 == 0))
    {
      return 0;
    }
    if (param_2 == 0) {
LAB_0010056d:
      uVar2 = sm4_xts_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 0x48)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xa8))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_0010056d;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0x36,"sm4_xts_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



undefined8
sm4_xts_stream_update
          (long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  int iVar1;
  code *pcVar2;
  
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0xab,"sm4_xts_stream_update")
    ;
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 == 0) || (*(long *)(param_1 + 0x1c8) == 0)) || (*(long *)(param_1 + 0x1d0) == 0)) ||
     ((((*(byte *)(param_1 + 0x6c) & 4) == 0 || (param_2 == 0 || param_5 == 0)) || (param_6 < 0x10))
     )) goto LAB_001006e7;
  if (0x1000000 < param_6) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0x8e,"sm4_xts_cipher");
    ERR_set_error(0x39,0x94,0);
    goto LAB_001006e7;
  }
  if (*(int *)(param_1 + 0x1c0) == 0) {
    pcVar2 = *(code **)(param_1 + 0x1e8);
    if (pcVar2 != (code *)0x0) goto LAB_0010068d;
    iVar1 = ossl_crypto_xts128gb_encrypt(param_1 + 0x1c8,param_1 + 0x20,param_5,param_2,param_6);
  }
  else {
    pcVar2 = *(code **)(param_1 + 0x1f0);
    if (pcVar2 != (code *)0x0) {
LAB_0010068d:
      (*pcVar2)(param_5,param_2,param_6,*(long *)(param_1 + 0x1c8),*(long *)(param_1 + 0x1d0),
                param_1 + 0x20,*(byte *)(param_1 + 0x6c) >> 1 & 1);
      goto LAB_001006a4;
    }
    iVar1 = CRYPTO_xts128_encrypt(param_1 + 0x1c8,param_1 + 0x20,param_5,param_2,param_6);
  }
  if (iVar1 != 0) {
LAB_001006e7:
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_sm4_xts.c",0xb0,"sm4_xts_stream_update")
    ;
    ERR_set_error(0x39,0x66,0);
    return 0;
  }
LAB_001006a4:
  *param_3 = param_6;
  return 1;
}



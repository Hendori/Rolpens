
undefined1 * ossl_aes_gcm_siv_gettable_ctx_params(void)

{
  return aes_gcm_siv_known_gettable_ctx_params;
}



undefined1 * ossl_aes_gcm_siv_settable_ctx_params(void)

{
  return aes_gcm_siv_known_settable_ctx_params;
}



undefined8 ossl_aes_gcm_siv_set_ctx_params(long param_1,long *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_2c;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_2,&_LC0);
    if (lVar3 != 0) {
      if ((*(int *)(lVar3 + 8) == 5) && (*(long *)(lVar3 + 0x18) == 0x10)) {
        if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
          uVar4 = **(undefined8 **)(lVar3 + 0x10);
          uVar1 = (*(undefined8 **)(lVar3 + 0x10))[1];
          *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 2;
          *(undefined8 *)(param_1 + 0x98) = uVar4;
          *(undefined8 *)(param_1 + 0xa0) = uVar1;
        }
        goto LAB_001000c8;
      }
      ERR_new();
      uVar4 = 0xe4;
LAB_0010008d:
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",uVar4,
                    "ossl_aes_gcm_siv_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar4 = 0;
      goto LAB_00100150;
    }
LAB_001000c8:
    lVar3 = OSSL_PARAM_locate_const(param_2,"speed");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_uint(lVar3,&local_2c);
      if (iVar2 == 0) {
        ERR_new();
        uVar4 = 0xef;
        goto LAB_0010008d;
      }
      *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xdf | (local_2c != 0) << 5;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar3 != 0) {
      iVar2 = OSSL_PARAM_get_size_t(lVar3,&local_28);
      if (iVar2 == 0) {
        ERR_new();
        uVar4 = 0xf9;
        goto LAB_0010008d;
      }
      if (*(long *)(param_1 + 0x30) != local_28) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0xfe,
                      "ossl_aes_gcm_siv_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        uVar4 = 0;
        goto LAB_00100150;
      }
    }
  }
  uVar4 = 1;
LAB_00100150:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 ossl_aes_gcm_siv_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 5)) {
    if (((~*(byte *)(param_1 + 0x1b8) & 5) == 0) && (*(long *)(lVar2 + 0x18) == 0x10)) {
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x88,0x10);
      if (iVar1 != 0) goto LAB_0010022a;
    }
    ERR_new();
    uVar3 = 0xb9;
LAB_001002d9:
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",uVar3,
                  "ossl_aes_gcm_siv_get_ctx_params");
    ERR_set_error(0x39,0x68,0);
    return 0;
  }
LAB_0010022a:
  lVar2 = OSSL_PARAM_locate(param_2,"taglen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0x10);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xbf;
      goto LAB_001002d9;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x30));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0xc4;
      goto LAB_001002d9;
    }
  }
  return 1;
}



void ossl_aes_128_gcm_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10005,3,0x80,8,0x60);
  return;
}



void ossl_aes_192_gcm_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10005,3,0xc0,8,0x60);
  return;
}



void ossl_aes_256_gcm_siv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10005,3,0x100,8,0x60);
  return;
}



undefined8
ossl_aes_gcm_siv_init
          (long param_1,void *param_2,size_t param_3,undefined8 *param_4,long param_5,
          undefined8 param_6,byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x1b8) = param_7 & 1 | *(byte *)(param_1 + 0x1b8) & 0xfe;
    if (param_2 != (void *)0x0) {
      if (*(size_t *)(param_1 + 0x30) != param_3) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x68,
                      "ossl_aes_gcm_siv_init");
        ERR_set_error(0x39,0x69,0);
        return 0;
      }
      memcpy((void *)(param_1 + 0x38),param_2,*(size_t *)(param_1 + 0x30));
    }
    if (param_4 != (undefined8 *)0x0) {
      if (param_5 != 0xc) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x6f,
                      "ossl_aes_gcm_siv_init");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = *param_4;
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_4 + 1);
    }
    iVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1);
    if (iVar1 != 0) {
      uVar2 = ossl_aes_gcm_siv_set_ctx_params(param_1,param_6);
      return uVar2;
    }
  }
  return 0;
}



void ossl_aes_gcm_siv_dinit(void)

{
  ossl_aes_gcm_siv_init();
  return;
}



void ossl_aes_gcm_siv_einit(void)

{
  ossl_aes_gcm_siv_init();
  return;
}



undefined8 * ossl_aes_gcm_siv_dupctx(long param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)
        CRYPTO_memdup(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x43);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  ptr[2] = 0;
  *ptr = 0;
  if (lVar2 != 0) {
    lVar2 = CRYPTO_memdup(lVar2,ptr[5] + 0xf & 0xfffffffffffffff0,
                          "providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x4b);
    ptr[2] = lVar2;
    if (lVar2 == 0) goto LAB_001005f0;
  }
  iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(ptr,param_1);
  if (iVar1 != 0) {
    return ptr;
  }
LAB_001005f0:
  CRYPTO_clear_free(ptr[2],ptr[5],"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x55);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



long ossl_aes_gcm_siv_newctx(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x22);
    if (lVar2 != 0) {
      *(ulong *)(lVar2 + 0x30) = param_2 >> 3;
      uVar3 = ossl_prov_cipher_hw_aes_gcm_siv(param_2);
      *(undefined8 *)(lVar2 + 8) = uVar3;
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined8 *)(lVar2 + 0x20) = param_1;
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
    }
  }
  return lVar2;
}



void ossl_aes128_gcm_siv_newctx(undefined8 param_1)

{
  ossl_aes_gcm_siv_newctx(param_1,0x80);
  return;
}



void ossl_aes192_gcm_siv_newctx(undefined8 param_1)

{
  ossl_aes_gcm_siv_newctx(param_1,0xc0);
  return;
}



void ossl_aes256_gcm_siv_newctx(undefined8 param_1)

{
  ossl_aes_gcm_siv_newctx(param_1,0x100);
  return;
}



ulong ossl_aes_gcm_siv_stream_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ossl_prov_is_running();
  if ((int)uVar2 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,param_2,0,0);
    if ((param_3 != (undefined8 *)0x0) && (iVar1 != 0)) {
      *param_3 = 0;
    }
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



bool ossl_aes_gcm_siv_cipher
               (long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
               ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_6 <= param_4) {
      iVar1 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,param_2,param_5,param_6);
      if ((param_3 != (ulong *)0x0) && (iVar1 != 0)) {
        *param_3 = param_6;
      }
      return iVar1 != 0;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x94,
                  "ossl_aes_gcm_siv_cipher");
    ERR_set_error(0x39,0x6a,0);
  }
  return false;
}



void ossl_aes_gcm_siv_freectx(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x28),
                      "providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x33);
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
    CRYPTO_clear_free(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_gcm_siv.c",0x35);
    return;
  }
  return;
}



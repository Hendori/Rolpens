
undefined8 aes_wrap_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_18);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0x113,
                      "aes_wrap_set_ctx_params");
        ERR_set_error(0x39,0x67,0);
        uVar3 = 0;
        goto LAB_00100065;
      }
      if (*(long *)(param_1 + 0x48) != local_18) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0x117,
                      "aes_wrap_set_ctx_params");
        ERR_set_error(0x39,0x69,0);
        uVar3 = 0;
        goto LAB_00100065;
      }
    }
  }
  uVar3 = 1;
LAB_00100065:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void aes_256_wrap_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0x100,0x40,0x40);
  return;
}



void aes_192_wrap_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0xc0,0x40,0x40);
  return;
}



void aes_128_wrap_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0x80,0x40,0x40);
  return;
}



void aes_256_wrappad_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0x100,0x40,0x20);
  return;
}



void aes_192_wrappad_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0xc0,0x40,0x20);
  return;
}



void aes_128_wrappad_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,2,0x80,0x40,0x20);
  return;
}



void aes_256_wrapinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0x100,0x40,0x40);
  return;
}



void aes_192_wrapinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0xc0,0x40,0x40);
  return;
}



void aes_128_wrapinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0x80,0x40,0x40);
  return;
}



void aes_256_wrappadinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0x100,0x40,0x20);
  return;
}



void aes_192_wrappadinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0xc0,0x40,0x20);
  return;
}



void aes_128_wrappadinv_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0x10002,0x202,0x80,0x40,0x20);
  return;
}



undefined8 aes_wrap_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8
aes_wrap_cipher(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,ulong param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  if (param_6 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_4 < param_6) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0xfb,"aes_wrap_cipher");
    ERR_set_error(0x39,0x6a,0);
    return 0;
  }
  if (param_5 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 & 2) == 0) {
    if ((0xf < param_6) && ((param_6 & 7) == 0)) {
      if (param_2 != 0) goto LAB_001003d9;
      iVar2 = (int)param_6 + -8;
LAB_00100451:
      uVar3 = (ulong)iVar2;
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_00100417;
    }
    ERR_new();
    uVar5 = 0xb9;
LAB_001004cc:
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",uVar5,
                  "aes_wrap_cipher_internal");
    ERR_set_error(0x39,0xe6,0);
  }
  else {
    if ((bVar1 & 1) == 0) {
      if ((param_6 & 7) != 0) {
        ERR_new();
        uVar5 = 0xbf;
        goto LAB_001004cc;
      }
      if (param_2 == 0) goto LAB_0010044e;
    }
    else if (param_2 == 0) {
      param_6 = param_6 + 7 & 0xfffffffffffffff8;
LAB_0010044e:
      iVar2 = (int)param_6 + 8;
      goto LAB_00100451;
    }
LAB_001003d9:
    lVar4 = param_1 + 0x20;
    if ((bVar1 & 4) == 0) {
      lVar4 = 0;
    }
    uVar3 = (**(code **)(param_1 + 0x1b8))
                      (param_1 + 0xc0,lVar4,param_2,param_5,param_6,*(undefined8 *)(param_1 + 0x30))
    ;
    if (uVar3 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0xd7,
                    "aes_wrap_cipher_internal");
      ERR_set_error(0x39,0x66,0);
    }
    else {
      if (uVar3 < 0x80000000) goto LAB_00100417;
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0xdb,
                    "aes_wrap_cipher_internal");
      ERR_set_error(0x39,0xd9,0);
    }
  }
  uVar3 = 0xffffffffffffffff;
LAB_00100417:
  *param_3 = uVar3;
  return 1;
}



void * aes_wrap_dupctx(long param_1)

{
  int iVar1;
  void *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((iVar1 != 0) && (param_1 != 0)) &&
     (ptr = (void *)CRYPTO_memdup(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c"
                                  ,0x4f), ptr != (void *)0x0)) {
    if ((*(long *)((long)ptr + 0x78) != 0) && (*(int *)((long)ptr + 0x80) != 0)) {
      lVar2 = CRYPTO_memdup(*(long *)((long)ptr + 0x78),*(undefined8 *)((long)ptr + 0x88),
                            "providers/implementations/ciphers/cipher_aes_wrp.c",0x52);
      *(long *)((long)ptr + 0x78) = lVar2;
      if (lVar2 == 0) {
        CRYPTO_free(ptr);
        return (void *)0x0;
      }
    }
    return ptr;
  }
  return (void *)0x0;
}



void aes_wrap_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x61);
  return;
}



undefined8
aes_wrap_dinit(long param_1,uchar *param_2,long param_3,long param_4,undefined8 param_5,
              undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  *(byte *)(param_1 + 0x6c) = bVar1 & 0xfd;
  if ((bVar1 & 1) == 0) {
    puVar3 = &CRYPTO_128_unwrap;
  }
  else {
    puVar3 = &CRYPTO_128_unwrap_pad;
  }
  *(undefined **)(param_1 + 0x1b8) = puVar3;
  if ((param_4 != 0) && (iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  if (param_2 == (uchar *)0x0) goto LAB_001006fe;
  if (param_3 != *(long *)(param_1 + 0x48)) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0x7c,"aes_wrap_init");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 & 0x40) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_00100780:
      AES_set_encrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0xc0));
      *(undefined **)(param_1 + 0x30) = &AES_encrypt;
      goto LAB_001006fe;
    }
  }
  else if ((bVar1 & 2) == 0) goto LAB_00100780;
  AES_set_decrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0xc0));
  *(undefined **)(param_1 + 0x30) = &AES_decrypt;
LAB_001006fe:
  uVar4 = aes_wrap_set_ctx_params(param_1,param_6);
  return uVar4;
}



long aes_256wrappadinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x100,0x40,0x20,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_128wrapinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x40,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



undefined8
aes_wrap_einit(long param_1,uchar *param_2,long param_3,long param_4,undefined8 param_5,
              undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  *(byte *)(param_1 + 0x6c) = bVar1 | 2;
  if ((bVar1 & 1) == 0) {
    puVar3 = &CRYPTO_128_wrap;
  }
  else {
    puVar3 = &CRYPTO_128_wrap_pad;
  }
  *(undefined **)(param_1 + 0x1b8) = puVar3;
  if ((param_4 != 0) && (iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  if (param_2 == (uchar *)0x0) goto LAB_0010093c;
  if (param_3 != *(long *)(param_1 + 0x48)) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/cipher_aes_wrp.c",0x7c,"aes_wrap_init");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 & 0x40) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_001009b8:
      AES_set_encrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0xc0));
      *(undefined **)(param_1 + 0x30) = &AES_encrypt;
      goto LAB_0010093c;
    }
  }
  else if ((bVar1 & 2) == 0) goto LAB_001009b8;
  AES_set_decrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0xc0));
  *(undefined **)(param_1 + 0x30) = &AES_decrypt;
LAB_0010093c:
  uVar4 = aes_wrap_set_ctx_params(param_1,param_6);
  return uVar4;
}



long aes_128wrap_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x40,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_256wrappad_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x100,0x40,0x20,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_192wrappad_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0xc0,0x40,0x20,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_128wrappad_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x20,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_256wrap_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x100,0x40,0x40,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_192wrap_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0xc0,0x40,0x40,0x10002,2,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_192wrappadinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0xc0,0x40,0x20,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_128wrappadinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x80,0x40,0x20,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_256wrapinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0x100,0x40,0x40,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



long aes_192wrapinv_newctx(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x1c0,"providers/implementations/ciphers/cipher_aes_wrp.c",0x3b);
    if (lVar2 != 0) {
      ossl_cipher_generic_initkey(lVar2,0xc0,0x40,0x40,0x10002,0x202,0,0);
      *(byte *)(lVar2 + 0x6c) = *(byte *)(lVar2 + 0x6c) & 0xfe | *(long *)(lVar2 + 0x50) == 4;
    }
  }
  return lVar2;
}



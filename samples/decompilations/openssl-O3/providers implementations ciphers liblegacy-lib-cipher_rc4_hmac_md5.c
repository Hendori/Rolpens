
undefined1 * rc4_hmac_md5_gettable_ctx_params(void)

{
  return rc4_hmac_md5_known_gettable_ctx_params;
}



undefined1 * rc4_hmac_md5_settable_ctx_params(void)

{
  return rc4_hmac_md5_known_settable_ctx_params;
}



undefined8 rc4_hmac_md5_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    lVar2 = OSSL_PARAM_locate_const(param_2,"keylen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 != 0) {
        if (*(long *)(param_1 + 0x48) != local_28) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/cipher_rc4_hmac_md5.c",0xa6,
                        "rc4_hmac_md5_set_ctx_params");
          ERR_set_error(0x39,0x69,0);
          uVar3 = 0;
          goto LAB_0010019d;
        }
        goto LAB_00100088;
      }
      ERR_new();
      uVar3 = 0xa2;
LAB_00100209:
      ERR_set_debug("providers/implementations/ciphers/cipher_rc4_hmac_md5.c",uVar3,
                    "rc4_hmac_md5_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      uVar3 = 0;
      goto LAB_0010019d;
    }
LAB_00100088:
    lVar2 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_size_t(lVar2,&local_28);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0xae;
        goto LAB_00100209;
      }
      if (*(long *)(param_1 + 0x50) != local_28) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_rc4_hmac_md5.c",0xb2,
                      "rc4_hmac_md5_set_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        uVar3 = 0;
        goto LAB_0010019d;
      }
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tlsaad");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        ERR_new();
        uVar3 = 0xba;
        goto LAB_00100209;
      }
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))
                        (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      local_28 = (long)iVar1;
      if (local_28 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/cipher_rc4_hmac_md5.c",0xbf,
                      "rc4_hmac_md5_set_ctx_params");
        ERR_set_error(0x39,0x73,0);
        uVar3 = 0;
        goto LAB_0010019d;
      }
      *(long *)(param_1 + 0x5e8) = local_28;
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"mackey");
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 5) {
        ERR_new();
        uVar3 = 199;
        goto LAB_00100209;
      }
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))
                (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
    }
    lVar2 = OSSL_PARAM_locate_const(param_2,"tls-version");
    if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x70);
      if (iVar1 == 0) {
        ERR_new();
        uVar3 = 0xcf;
        goto LAB_00100209;
      }
    }
  }
  uVar3 = 1;
LAB_0010019d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 rc4_hmac_md5_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x48));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x79;
      goto LAB_00100371;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x50));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x7f;
      goto LAB_00100371;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x5e8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x84;
LAB_00100371:
      ERR_set_debug("providers/implementations/ciphers/cipher_rc4_hmac_md5.c",uVar3,
                    "rc4_hmac_md5_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



void rc4_hmac_md5_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,0x101,0x80,8,0);
  return;
}



undefined8 rc4_hmac_md5_dinit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = rc4_hmac_md5_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 rc4_hmac_md5_einit(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  iVar1 = ossl_cipher_generic_einit();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = rc4_hmac_md5_set_ctx_params(param_1,in_R9);
  return uVar2;
}



undefined8 rc4_hmac_md5_dupctx(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = CRYPTO_memdup(param_1,0x5f0,"providers/implementations/ciphers/cipher_rc4_hmac_md5.c",
                          0x51);
    return uVar1;
  }
  return 0;
}



void rc4_hmac_md5_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x5f0,"providers/implementations/ciphers/cipher_rc4_hmac_md5.c",0x48);
  return;
}



long rc4_hmac_md5_newctx(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x5f0,"providers/implementations/ciphers/cipher_rc4_hmac_md5.c",0x37);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_cipher_hw_rc4_hmac_md5(0x80);
      ossl_cipher_generic_initkey(lVar2,0x80,8,0,0,0x101,uVar3,0);
    }
  }
  return lVar2;
}



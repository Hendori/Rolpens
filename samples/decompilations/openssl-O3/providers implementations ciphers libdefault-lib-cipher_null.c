
undefined1 * null_gettable_ctx_params(void)

{
  return null_known_gettable_ctx_params;
}



undefined1 * null_settable_ctx_params(void)

{
  return null_known_settable_ctx_params;
}



undefined8 null_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x82;
      goto LAB_001000c1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"keylen");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,0);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x87;
      goto LAB_001000c1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_2,"tls-mac");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_octet_ptr
                      (lVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x8d;
LAB_001000c1:
      ERR_set_debug("providers/implementations/ciphers/cipher_null.c",uVar3,"null_get_ctx_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



void null_get_params(undefined8 param_1)

{
  ossl_cipher_generic_get_params(param_1,0,0,0,8,0);
  return;
}



undefined8 null_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_3 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



bool null_dinit(void)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  return iVar1 != 0;
}



undefined8 null_einit(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *param_1 = 1;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8
null_cipher(int *param_1,void *param_2,ulong *param_3,ulong param_4,void *param_5,ulong param_6)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  if (iVar2 != 0) {
    if ((*param_1 == 0) && (uVar1 = *(ulong *)(param_1 + 2), uVar1 != 0)) {
      if (param_6 < uVar1) {
        return 0;
      }
      param_6 = param_6 - uVar1;
      *(ulong *)(param_1 + 4) = (long)param_5 + param_6;
    }
    if (param_6 <= param_4) {
      if ((param_2 == (void *)0x0) || (param_5 == param_2)) {
        *param_3 = param_6;
      }
      else {
        memcpy(param_2,param_5,param_6);
        *param_3 = param_6;
      }
      return 1;
    }
  }
  return 0;
}



void null_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 null_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x18,"providers/implementations/ciphers/cipher_null.c",0x1e);
    return uVar2;
  }
  return 0;
}



undefined4 null_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = OSSL_PARAM_locate_const(param_2,"tls-mac-size");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_size_t(lVar2,param_1 + 8);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/cipher_null.c",0xa9,"null_set_ctx_params");
      ERR_set_error(0x39,0x67,0);
      return 0;
    }
  }
  return 1;
}



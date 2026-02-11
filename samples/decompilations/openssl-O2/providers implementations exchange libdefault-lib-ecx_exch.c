
undefined1 * ecx_gettable_ctx_params(void)

{
  return known_gettable_ctx_params_3;
}



undefined8 ecx_get_ctx_params(void)

{
  return 1;
}



undefined8 * ecx_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 != 0) &&
     (ptr = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/exchange/ecx_exch.c",0x9f),
     ptr != (undefined8 *)0x0)) {
    uVar1 = param_1[1];
    *ptr = *param_1;
    ptr[1] = uVar1;
    ptr[2] = param_1[2];
    if ((ptr[1] == 0) || (iVar2 = ossl_ecx_key_up_ref(), iVar2 != 0)) {
      if (ptr[2] == 0) {
        return ptr;
      }
      iVar2 = ossl_ecx_key_up_ref();
      if (iVar2 != 0) {
        return ptr;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/exchange/ecx_exch.c",0xab,__func___2);
      ERR_set_error(0x39,0xc0103,0);
      ossl_ecx_key_free(ptr[1]);
      CRYPTO_free(ptr);
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/exchange/ecx_exch.c",0xa5,__func___2);
      ERR_set_error(0x39,0xc0103,0);
      CRYPTO_free(ptr);
    }
  }
  return (undefined8 *)0x0;
}



void ecx_freectx(void *param_1)

{
  ossl_ecx_key_free(*(undefined8 *)((long)param_1 + 8));
  ossl_ecx_key_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}



undefined8 ecx_set_peer(long *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (*(long *)(param_2 + 0x58) == *param_1)) &&
       (iVar1 = ossl_ecx_key_up_ref(param_2), iVar1 != 0)) {
      ossl_ecx_key_free(param_1[2]);
      param_1[2] = param_2;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/ecx_exch.c",0x79,"ecx_set_peer");
    ERR_set_error(0x39,0xc0103,0);
  }
  return 0;
}



undefined8 ecx_derive(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_ecx_compute_key(param_1[2],param_1[1],*param_1,param_2,param_3,param_4);
  return uVar2;
}



undefined8 ecx_init_isra_0(long *param_1,long param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if ((((param_1 != (long *)0x0) && (param_2 != 0)) && (*(long *)(param_2 + 0x58) == *param_1)) &&
       (iVar1 = ossl_ecx_key_up_ref(param_2), iVar1 != 0)) {
      ossl_ecx_key_free(param_1[1]);
      param_1[1] = param_2;
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/exchange/ecx_exch.c",0x53,"ecx_init");
    ERR_set_error(0x39,0xc0103,0);
  }
  return 0;
}



void x448_init(void)

{
  ecx_init_isra_0();
  return;
}



void x25519_init(void)

{
  ecx_init_isra_0();
  return;
}



undefined8 * x448_newctx(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/exchange/ecx_exch.c",0x34);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x38;
    }
  }
  return puVar2;
}



undefined8 * x25519_newctx(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined8 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_zalloc(0x18,"providers/implementations/exchange/ecx_exch.c",0x34);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0x20;
    }
  }
  return puVar2;
}



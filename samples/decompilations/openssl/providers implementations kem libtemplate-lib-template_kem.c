
bool template_set_ctx_params(long param_1)

{
  return param_1 != 0;
}



undefined1 * template_settable_ctx_params(void)

{
  return known_settable_template_ctx_params;
}



undefined8
template_encapsulate
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 *param_5)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  return 1;
}



undefined8 template_decapsulate(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  return 1;
}



void template_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 template_decapsulate_init(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0x2000;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 template_encapsulate_init(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0x1000;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 * template_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"providers/implementations/kem/template_kem.c",0x3e);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = ossl_prov_ctx_get0_libctx(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}



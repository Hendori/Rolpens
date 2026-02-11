
void ossl_indicator_set_callback_new(void)

{
  CRYPTO_zalloc(8,"crypto/indicator_core.c",0x19);
  return;
}



void ossl_indicator_set_callback_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void OSSL_INDICATOR_set_callback(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x16);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



void OSSL_INDICATOR_get_callback(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)ossl_lib_ctx_get_data(param_1,0x16);
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
    }
    *param_2 = uVar2;
  }
  return;
}



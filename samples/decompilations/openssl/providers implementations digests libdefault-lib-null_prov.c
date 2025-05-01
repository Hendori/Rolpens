
undefined8 null_update(void)

{
  return 1;
}



void nullmd_copyctx(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



bool nullmd_internal_init(void)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  return iVar1 != 0;
}



undefined8 nullmd_internal_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_3 = 0;
  return 1;
}



void nullmd_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,0,0,0);
  return;
}



undefined1 * nullmd_dupctx(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  puVar2 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)CRYPTO_malloc(1,"providers/implementations/digests/null_prov.c",0x32);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *param_1;
    }
  }
  return puVar2;
}



void nullmd_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,1,"providers/implementations/digests/null_prov.c",0x32);
  return;
}



undefined8 nullmd_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(1,"providers/implementations/digests/null_prov.c",0x32);
    return uVar2;
  }
  return 0;
}



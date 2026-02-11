
undefined1 * mdc2_settable_ctx_params(void)

{
  return known_mdc2_settable_ctx_params;
}



void mdc2_copyctx(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  return;
}



undefined8 mdc2_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((((param_2 != (long *)0x0) && (*param_2 != 0)) &&
      (lVar2 = OSSL_PARAM_locate_const(param_2,"pad-type"), lVar2 != 0)) &&
     (iVar1 = OSSL_PARAM_get_uint(lVar2,param_1 + 0x1c), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("providers/implementations/digests/mdc2_prov.c",0x33,"mdc2_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    return 0;
  }
  return 1;
}



bool mdc2_internal_init(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = MDC2_Init(param_1);
    if (iVar1 != 0) {
      iVar1 = mdc2_set_ctx_params(param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}



void mdc2_get_params(undefined8 param_1)

{
  ossl_digest_default_get_params(param_1,8,0x10,0);
  return;
}



undefined8 * mdc2_dupctx(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = ossl_prov_is_running();
  puVar5 = (undefined8 *)0x0;
  if (iVar4 != 0) {
    puVar5 = (undefined8 *)CRYPTO_malloc(0x20,"providers/implementations/digests/mdc2_prov.c",0x3a);
    if (puVar5 != (undefined8 *)0x0) {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar5 = *param_1;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
    }
  }
  return puVar5;
}



void mdc2_freectx(undefined8 param_1)

{
  CRYPTO_clear_free(param_1,0x20,"providers/implementations/digests/mdc2_prov.c",0x3a);
  return;
}



undefined8
mdc2_internal_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (((0xf < param_4) && (iVar1 != 0)) && (iVar1 = MDC2_Final(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}



undefined8 mdc2_newctx(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_zalloc(0x20,"providers/implementations/digests/mdc2_prov.c",0x3a);
    return uVar2;
  }
  return 0;
}



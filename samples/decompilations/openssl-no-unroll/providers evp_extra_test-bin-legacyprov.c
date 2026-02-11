
undefined1 * legacy_gettable_params(void)

{
  return legacy_param_types;
}



undefined1 * legacy_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = legacy_ciphers;
  if (((param_2 != 2) && (puVar1 = legacy_kdfs, param_2 != 4)) &&
     (puVar1 = legacy_digests, param_2 != 1)) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



bool legacy_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"OpenSSL Legacy Provider"), iVar1 == 0)
     ) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"version");
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"3.5.0"), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"buildinfo");
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"3.5.0"), iVar1 == 0)) {
    return false;
  }
  lVar3 = OSSL_PARAM_locate(param_2,"status");
  bVar4 = true;
  if (lVar3 != 0) {
    uVar2 = ossl_prov_is_running();
    iVar1 = OSSL_PARAM_set_int(lVar3,uVar2);
    bVar4 = iVar1 != 0;
  }
  return bVar4;
}



void legacy_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx();
  OSSL_LIB_CTX_free(uVar1);
  ossl_prov_ctx_free(param_1);
  return;
}



undefined8
ossl_legacy_provider_init(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_prov_ctx_new();
  *param_4 = lVar1;
  if (lVar1 != 0) {
    lVar1 = OSSL_LIB_CTX_new_child(param_1,param_2);
    if (lVar1 != 0) {
      ossl_prov_ctx_set0_libctx(*param_4,lVar1);
      ossl_prov_ctx_set0_handle(*param_4,param_1);
      *param_3 = legacy_dispatch_table;
      return 1;
    }
  }
  OSSL_LIB_CTX_free(0);
  lVar1 = *param_4;
  uVar2 = ossl_prov_ctx_get0_libctx(lVar1);
  OSSL_LIB_CTX_free(uVar2);
  ossl_prov_ctx_free(lVar1);
  *param_4 = 0;
  return 0;
}



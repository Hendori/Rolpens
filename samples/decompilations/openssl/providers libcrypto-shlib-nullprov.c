
undefined1 * null_gettable_params(void)

{
  return null_param_types;
}



undefined8 null_query(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  return 0;
}



bool null_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"OpenSSL Null Provider"), iVar1 == 0))
  {
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



undefined8
ossl_null_provider_init
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = null_dispatch_table;
  *param_4 = param_1;
  return 1;
}



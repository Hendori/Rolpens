
undefined1 * template_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = template_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined1 * template_gettable_params(void)

{
  return template_gettable_params_arr;
}



undefined1 * template_settable_params(void)

{
  return template_settable_params_arr;
}



bool template_gen_set_params(long param_1)

{
  return param_1 != 0;
}



undefined1 * template_gen_settable_params(void)

{
  return settable_0;
}



undefined8 template_gen(void)

{
  return 0;
}



bool template_match(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ossl_prov_is_running();
  bVar1 = false;
  if ((iVar2 != 0) &&
     (bVar1 = (param_3 & 4) == 0 || param_1 != 0 && param_2 != 0, (param_3 & 3) != 0)) {
    bVar1 = false;
  }
  return bVar1;
}



undefined8 template_has(void)

{
  ossl_prov_is_running();
  return 0;
}



undefined8 template_new(void)

{
  ossl_prov_is_running();
  return 0;
}



undefined8 template_dup(void)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  ossl_prov_is_running();
  return 0;
}



void template_gen_cleanup(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined8 * template_gen_init(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)
             CRYPTO_zalloc(0x10,"providers/implementations/keymgmt/template_kmgmt.c",0x159);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      *(undefined4 *)(puVar2 + 1) = param_2;
      return puVar2;
    }
    CRYPTO_free((void *)0x0);
  }
  return (undefined8 *)0x0;
}



undefined4 template_export(long param_1,ulong param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && ((param_2 & 3) != 0)) {
    lVar3 = OSSL_PARAM_BLD_new();
    if (lVar3 != 0) {
      lVar4 = OSSL_PARAM_BLD_to_param(lVar3);
      if (lVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = (*param_3)(lVar4,param_4);
        OSSL_PARAM_free(lVar4);
      }
      OSSL_PARAM_BLD_free(lVar3);
      return uVar2;
    }
  }
  return 0;
}



byte template_import(long param_1,byte param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = ossl_prov_is_running();
  if ((iVar2 == 0) || (param_1 == 0)) {
    return false;
  }
  bVar1 = param_2 & 3;
  if ((((param_2 & 3) != 0) && (bVar1 = 0, param_3 != (long *)0x0)) && (*param_3 != 0)) {
    lVar3 = OSSL_PARAM_locate_const(param_3,&_LC1);
    lVar4 = 0;
    if ((param_2 & 1) != 0) {
      lVar4 = OSSL_PARAM_locate_const(param_3,&_LC2);
    }
    return lVar3 != 0 || lVar4 != 0;
  }
  return bVar1;
}



undefined8 template_set_params(undefined8 param_1,long *param_2)

{
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    OSSL_PARAM_locate_const(param_2,"encoded-pub-key");
    return 1;
  }
  return 1;
}



bool template_get_params(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return false;
  }
  if (*param_2 == 0) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,&_LC4);
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"security-bits");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"max-size");
  if ((lVar2 != 0) && (iVar1 = OSSL_PARAM_set_int(lVar2,0), iVar1 == 0)) {
    return false;
  }
  lVar2 = OSSL_PARAM_locate(param_2,"encoded-pub-key");
  if (lVar2 == 0) {
    return true;
  }
  iVar1 = OSSL_PARAM_set_octet_string(lVar2,0,0);
  return iVar1 != 0;
}



void template_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}



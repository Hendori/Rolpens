
long OSSL_PROVIDER_try_load_ex
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = ossl_provider_find(param_1,param_2,0);
  if (lVar2 == 0) {
    lVar2 = ossl_provider_new(param_1,param_2,0,param_3,0);
    if (lVar2 != 0) {
      iVar1 = ossl_provider_activate(lVar2,1,0);
      if (iVar1 != 0) {
        local_38 = lVar2;
        iVar1 = ossl_provider_add_to_store(lVar2,&local_38,param_4);
        if (iVar1 == 0) {
          ossl_provider_deactivate(lVar2,1);
          ossl_provider_free(lVar2);
          lVar2 = 0;
        }
        else if ((local_38 != lVar2) &&
                (iVar1 = ossl_provider_activate(local_38,1,0), lVar2 = local_38, iVar1 == 0)) {
          ossl_provider_free(local_38);
          lVar2 = 0;
        }
        goto LAB_00100052;
      }
      goto LAB_001000f0;
    }
  }
  else {
    iVar1 = ossl_provider_activate(lVar2,1,0);
    if (iVar1 != 0) goto LAB_00100052;
LAB_001000f0:
    ossl_provider_free(lVar2);
  }
  lVar2 = 0;
LAB_00100052:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



void OSSL_PROVIDER_try_load(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  OSSL_PROVIDER_try_load_ex(param_1,param_2,0,param_3);
  return;
}



undefined8 OSSL_PROVIDER_load_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_provider_disable_fallback_loading();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OSSL_PROVIDER_try_load_ex(param_1,param_2,param_3,0);
  return uVar2;
}



void OSSL_PROVIDER_load(undefined8 param_1,undefined8 param_2)

{
  OSSL_PROVIDER_load_ex(param_1,param_2,0);
  return;
}



undefined8 OSSL_PROVIDER_unload(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_provider_deactivate(param_1,1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  ossl_provider_free(param_1);
  return 1;
}



void OSSL_PROVIDER_gettable_params(void)

{
  ossl_provider_gettable_params();
  return;
}



void OSSL_PROVIDER_get_params(void)

{
  ossl_provider_get_params();
  return;
}



void OSSL_PROVIDER_query_operation(void)

{
  ossl_provider_query_operation();
  return;
}



void OSSL_PROVIDER_unquery_operation(void)

{
  ossl_provider_unquery_operation();
  return;
}



void OSSL_PROVIDER_get0_provider_ctx(void)

{
  ossl_provider_ctx();
  return;
}



void OSSL_PROVIDER_get0_dispatch(void)

{
  ossl_provider_get0_dispatch();
  return;
}



void OSSL_PROVIDER_self_test(void)

{
  ossl_provider_self_test();
  return;
}



void OSSL_PROVIDER_get_capabilities(void)

{
  ossl_provider_get_capabilities();
  return;
}



undefined8 OSSL_PROVIDER_add_builtin(undefined8 param_1,char *param_2,long param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/provider.c",0x84,"OSSL_PROVIDER_add_builtin");
    ERR_set_error(0xf,0xc0102,0);
  }
  else {
    local_48 = (undefined1  [16])0x0;
    local_28 = 0;
    local_38 = (undefined1  [16])0x0;
    pcVar2 = CRYPTO_strdup(param_2,"crypto/provider.c",0x88);
    local_48._0_8_ = pcVar2;
    if (pcVar2 != (char *)0x0) {
      local_38._0_8_ = param_3;
      iVar1 = ossl_provider_info_add_to_store(param_1,local_48);
      uVar3 = 1;
      if (iVar1 == 0) {
        ossl_provider_info_clear(local_48);
        uVar3 = 0;
      }
      goto LAB_001002cd;
    }
  }
  uVar3 = 0;
LAB_001002cd:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void OSSL_PROVIDER_get0_name(void)

{
  ossl_provider_name();
  return;
}



void OSSL_PROVIDER_do_all(void)

{
  ossl_provider_doall_activated();
  return;
}



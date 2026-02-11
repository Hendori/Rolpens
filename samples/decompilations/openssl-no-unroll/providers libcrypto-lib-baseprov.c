
undefined1 * base_gettable_params(void)

{
  return base_param_types;
}



undefined1 * base_query(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  *param_3 = 0;
  puVar1 = base_decoder;
  if (param_2 != 0x15) {
    if (param_2 < 0x16) {
      puVar1 = base_rands;
      if (param_2 != 5) {
        puVar1 = base_encoder;
        if (param_2 != 0x14) {
          puVar1 = (undefined1 *)0x0;
        }
        return puVar1;
      }
    }
    else {
      puVar1 = base_store;
      if (param_2 != 0x16) {
        puVar1 = (undefined1 *)0x0;
      }
    }
  }
  return puVar1;
}



bool base_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar3 != 0) && (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"OpenSSL Base Provider"), iVar1 == 0))
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



void base_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_core_bio_method();
  BIO_meth_free(uVar1);
  ossl_prov_ctx_free(param_1);
  return;
}



undefined8
ossl_base_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  code *pcVar5;
  
  iVar2 = ossl_prov_bio_from_dispatch(param_2);
  if ((iVar2 != 0) && (iVar2 = *param_2, iVar2 != 0)) {
    bVar1 = false;
    pcVar5 = (code *)0x0;
    do {
      while (iVar2 == 2) {
        unaff_R13 = *(undefined8 *)(param_2 + 2);
        iVar2 = param_2[4];
        param_2 = param_2 + 4;
        bVar1 = true;
        if (iVar2 == 0) goto LAB_001001cd;
      }
      if (iVar2 == 4) {
        pcVar5 = *(code **)(param_2 + 2);
      }
      iVar2 = param_2[4];
      param_2 = param_2 + 4;
    } while (iVar2 != 0);
LAB_001001cd:
    if (bVar1) {
      c_get_params = unaff_R13;
    }
    if (pcVar5 != (code *)0x0) {
      lVar3 = ossl_prov_ctx_new();
      *param_4 = lVar3;
      if (lVar3 != 0) {
        lVar3 = ossl_bio_prov_init_bio_method();
        if (lVar3 != 0) {
          uVar4 = (*pcVar5)(param_1);
          ossl_prov_ctx_set0_libctx(*param_4,uVar4);
          ossl_prov_ctx_set0_handle(*param_4,param_1);
          ossl_prov_ctx_set0_core_bio_method(*param_4,lVar3);
          ossl_prov_ctx_set0_core_get_params(*param_4,c_get_params);
          *param_3 = base_dispatch_table;
          return 1;
        }
        lVar3 = *param_4;
      }
      ossl_prov_ctx_free(lVar3);
      *param_4 = 0;
    }
  }
  return 0;
}



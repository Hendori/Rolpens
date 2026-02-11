
undefined1 * deflt_gettable_params(void)

{
  return deflt_param_types;
}



undefined1 * deflt_query(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = 0;
  switch(param_2) {
  default:
    return (undefined1 *)0x0;
  case 1:
    return deflt_digests;
  case 2:
    return exported_ciphers;
  case 3:
    return deflt_macs;
  case 4:
    return deflt_kdfs;
  case 5:
    return deflt_rands;
  case 10:
    return deflt_keymgmt;
  case 0xb:
    return deflt_keyexch;
  case 0xc:
    return deflt_signature;
  case 0xd:
    return deflt_asym_cipher;
  case 0xe:
    return deflt_asym_kem;
  case 0xf:
    return deflt_skeymgmt;
  case 0x14:
    return deflt_encoder;
  case 0x15:
    return deflt_decoder;
  case 0x16:
    return deflt_store;
  }
}



bool deflt_get_params(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,&_LC0);
  if ((lVar3 != 0) &&
     (iVar1 = OSSL_PARAM_set_utf8_ptr(lVar3,"OpenSSL Default Provider"), iVar1 == 0)) {
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



void deflt_teardown(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_core_bio_method();
  BIO_meth_free(uVar1);
  ossl_prov_ctx_free(param_1);
  return;
}



undefined8
ossl_default_provider_init(undefined8 param_1,int *param_2,undefined8 *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_R13;
  code *pcVar5;
  
  iVar2 = ossl_prov_bio_from_dispatch(param_2);
  if (iVar2 != 0) {
    iVar2 = ossl_prov_seeding_from_dispatch(param_2);
    if ((iVar2 != 0) && (iVar2 = *param_2, iVar2 != 0)) {
      bVar1 = false;
      pcVar5 = (code *)0x0;
      do {
        while (iVar2 == 2) {
          unaff_R13 = *(undefined8 *)(param_2 + 2);
          iVar2 = param_2[4];
          param_2 = param_2 + 4;
          bVar1 = true;
          if (iVar2 == 0) goto LAB_0010029d;
        }
        if (iVar2 == 4) {
          pcVar5 = *(code **)(param_2 + 2);
        }
        iVar2 = param_2[4];
        param_2 = param_2 + 4;
      } while (iVar2 != 0);
LAB_0010029d:
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
            *param_3 = deflt_dispatch_table;
            ossl_prov_cache_exported_algorithms(deflt_ciphers,exported_ciphers);
            return 1;
          }
          lVar3 = *param_4;
        }
        ossl_prov_ctx_free(lVar3);
        *param_4 = 0;
      }
    }
  }
  return 0;
}



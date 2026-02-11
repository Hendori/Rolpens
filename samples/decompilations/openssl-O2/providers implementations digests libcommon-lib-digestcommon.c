
undefined8
ossl_digest_default_get_params
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_1,"blocksize");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,param_2);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x15;
      goto LAB_001000d1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,&_LC2);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_size_t(lVar2,param_3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x1a;
      goto LAB_001000d1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,&_LC3);
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)param_4 & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x20;
      goto LAB_001000d1;
    }
  }
  lVar2 = OSSL_PARAM_locate(param_1,"algid-absent");
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_set_int(lVar2,(uint)(param_4 >> 1) & 1);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x26;
LAB_001000d1:
      ERR_set_debug("providers/implementations/digests/digestcommon.c",uVar3,
                    "ossl_digest_default_get_params");
      ERR_set_error(0x39,0x68,0);
      return 0;
    }
  }
  return 1;
}



undefined1 * ossl_digest_default_gettable_params(void)

{
  return digest_default_known_gettable_params;
}



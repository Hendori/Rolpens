
undefined8 EC_POINT_set_compressed_coordinates(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x88) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x1d,"EC_POINT_set_compressed_coordinates");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x88))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        uVar2 = ossl_ec_GF2m_simple_set_compressed_coordinates();
        return uVar2;
      }
      uVar2 = ossl_ec_GFp_simple_set_compressed_coordinates();
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x21,"EC_POINT_set_compressed_coordinates");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



void EC_POINT_set_compressed_coordinates_GFp(void)

{
  EC_POINT_set_compressed_coordinates();
  return;
}



void EC_POINT_set_compressed_coordinates_GF2m(void)

{
  EC_POINT_set_compressed_coordinates();
  return;
}



undefined8 EC_POINT_point2oct(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x4e,"EC_POINT_point2oct");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    pbVar1 = (byte *)*param_1;
    if ((*(code **)(pbVar1 + 0x90) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_oct.c",0x53,"EC_POINT_point2oct");
      ERR_set_error(0x10,0xc0101,0);
    }
    else {
      if ((pbVar1 == (byte *)*param_2) &&
         (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
          (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
        if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001001d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (**(code **)(pbVar1 + 0x90))();
          return uVar2;
        }
        if (*(int *)(pbVar1 + 4) != 0x196) {
          uVar2 = ossl_ec_GF2m_simple_point2oct();
          return uVar2;
        }
        uVar2 = ossl_ec_GFp_simple_point2oct();
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_oct.c",0x57,"EC_POINT_point2oct");
      ERR_set_error(0x10,0x65,0);
    }
  }
  return 0;
}



undefined8 EC_POINT_oct2point(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  pbVar1 = (byte *)*param_1;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x72,"EC_POINT_oct2point");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == (byte *)*param_2) &&
       (((*(int *)(param_1 + 4) == 0 || (*(int *)(param_2 + 1) == 0)) ||
        (*(int *)(param_1 + 4) == *(int *)(param_2 + 1))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001002ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(pbVar1 + 0x98))();
        return uVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        uVar2 = ossl_ec_GF2m_simple_oct2point();
        return uVar2;
      }
      uVar2 = ossl_ec_GFp_simple_oct2point();
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x76,"EC_POINT_oct2point");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



long EC_POINT_point2buf(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4,
                       undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = EC_POINT_point2oct();
  if ((lVar1 != 0) && (lVar2 = CRYPTO_malloc(lVar1,"crypto/ec/ec_oct.c",0x93), lVar2 != 0)) {
    lVar1 = EC_POINT_point2oct(param_1,param_2,param_3,lVar2,lVar1,param_5);
    if (lVar1 != 0) {
      *param_4 = lVar2;
      return lVar1;
    }
    CRYPTO_free(lVar2,"crypto/ec/ec_oct.c",0x97);
    return 0;
  }
  return 0;
}



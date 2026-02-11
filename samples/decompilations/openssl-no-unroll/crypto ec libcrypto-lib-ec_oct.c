
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



size_t EC_POINT_point2oct(EC_GROUP *group,EC_POINT *p,point_conversion_form_t form,uchar *buf,
                         size_t len,BN_CTX *ctx)

{
  byte *pbVar1;
  size_t sVar2;
  undefined4 in_register_00000014;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_register_00000014,form);
  if (p == (EC_POINT *)0x0) {
    ERR_new(group,0,uVar3);
    ERR_set_debug("crypto/ec/ec_oct.c",0x4e,"EC_POINT_point2oct");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    pbVar1 = *(byte **)group;
    if ((*(code **)(pbVar1 + 0x90) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
      ERR_new(group,p,uVar3);
      ERR_set_debug("crypto/ec/ec_oct.c",0x53,"EC_POINT_point2oct");
      ERR_set_error(0x10,0xc0101,0);
    }
    else {
      if ((pbVar1 == *(byte **)p) &&
         (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
          (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
        if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001001d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          sVar2 = (**(code **)(pbVar1 + 0x90))();
          return sVar2;
        }
        if (*(int *)(pbVar1 + 4) != 0x196) {
          sVar2 = ossl_ec_GF2m_simple_point2oct();
          return sVar2;
        }
        sVar2 = ossl_ec_GFp_simple_point2oct();
        return sVar2;
      }
      ERR_new(group,p,uVar3);
      ERR_set_debug("crypto/ec/ec_oct.c",0x57,"EC_POINT_point2oct");
      ERR_set_error(0x10,0x65,0);
    }
  }
  return 0;
}



int EC_POINT_oct2point(EC_GROUP *group,EC_POINT *p,uchar *buf,size_t len,BN_CTX *ctx)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *(byte **)group;
  if ((*(code **)(pbVar1 + 0x98) == (code *)0x0) && ((*pbVar1 & 1) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x72,"EC_POINT_oct2point");
    ERR_set_error(0x10,0xc0101,0);
  }
  else {
    if ((pbVar1 == *(byte **)p) &&
       (((*(int *)(group + 0x20) == 0 || (*(int *)(p + 8) == 0)) ||
        (*(int *)(group + 0x20) == *(int *)(p + 8))))) {
      if ((*pbVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001002ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (**(code **)(pbVar1 + 0x98))();
        return iVar2;
      }
      if (*(int *)(pbVar1 + 4) != 0x196) {
        iVar2 = ossl_ec_GF2m_simple_oct2point();
        return iVar2;
      }
      iVar2 = ossl_ec_GFp_simple_oct2point();
      return iVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_oct.c",0x76,"EC_POINT_oct2point");
    ERR_set_error(0x10,0x65,0);
  }
  return 0;
}



size_t EC_POINT_point2buf(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t param_3,
                         undefined8 *param_4,BN_CTX *param_5)

{
  size_t sVar1;
  uchar *buf;
  
  sVar1 = EC_POINT_point2oct(param_1,param_2,param_3,(uchar *)0x0,0,(BN_CTX *)0x0);
  if ((sVar1 != 0) &&
     (buf = (uchar *)CRYPTO_malloc((int)sVar1,"crypto/ec/ec_oct.c",0x93), buf != (uchar *)0x0)) {
    sVar1 = EC_POINT_point2oct(param_1,param_2,param_3,buf,sVar1,param_5);
    if (sVar1 != 0) {
      *param_4 = buf;
      return sVar1;
    }
    CRYPTO_free(buf);
    return 0;
  }
  return 0;
}



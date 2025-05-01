
undefined8
ossl_param_build_set_int(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_int(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = OSSL_PARAM_set_int(lVar2,param_4);
  return uVar1;
}



undefined8
ossl_param_build_set_long(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_long(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = OSSL_PARAM_set_long(lVar2,param_4);
  return uVar1;
}



undefined8
ossl_param_build_set_utf8_string
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_utf8_string(param_1,param_3,param_4,0);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = OSSL_PARAM_set_utf8_string(lVar2,param_4);
  return uVar1;
}



undefined8
ossl_param_build_set_octet_string
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_octet_string(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = OSSL_PARAM_set_octet_string(lVar2,param_4,param_5);
  return uVar1;
}



undefined8
ossl_param_build_set_bn_pad
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = OSSL_PARAM_BLD_push_BN_pad(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < param_5) {
      ERR_new();
      ERR_set_debug("crypto/param_build_set.c",0x4d,"ossl_param_build_set_bn_pad");
      ERR_set_error(0xf,0x74,0);
      return 0;
    }
    *(ulong *)(lVar2 + 0x18) = param_5;
    uVar1 = OSSL_PARAM_set_BN(lVar2,param_4);
    return uVar1;
  }
  return 1;
}



ulong ossl_param_build_set_bn(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_1 != 0) {
    uVar2 = OSSL_PARAM_BLD_push_BN(param_1,param_3,param_4);
    return uVar2;
  }
  lVar3 = OSSL_PARAM_locate(param_2,param_3);
  if (lVar3 == 0) {
    return 1;
  }
  iVar1 = OSSL_PARAM_set_BN(lVar3,param_4);
  return (ulong)(0 < iVar1);
}



undefined8
ossl_param_build_set_multi_key_bn(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  iVar1 = OPENSSL_sk_num(param_4);
  if (param_1 == 0) {
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(long *)(param_3 + uVar5 * 8) == 0) {
          return 1;
        }
        lVar3 = OPENSSL_sk_value(param_4,uVar5 & 0xffffffff);
        lVar4 = OSSL_PARAM_locate(param_2,*(undefined8 *)(param_3 + uVar5 * 8));
        if (((lVar4 != 0) && (lVar3 != 0)) && (iVar2 = OSSL_PARAM_set_BN(lVar4,lVar3), iVar2 == 0))
        {
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while ((long)iVar1 != uVar5);
    }
  }
  else {
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(long *)(param_3 + uVar5 * 8) == 0) {
          return 1;
        }
        lVar3 = OPENSSL_sk_value(param_4,uVar5 & 0xffffffff);
        if ((lVar3 != 0) &&
           (iVar2 = OSSL_PARAM_BLD_push_BN(param_1,*(undefined8 *)(param_3 + uVar5 * 8),lVar3),
           iVar2 == 0)) {
          return 0;
        }
        uVar5 = uVar5 + 1;
      } while ((long)iVar1 != uVar5);
    }
  }
  return 1;
}



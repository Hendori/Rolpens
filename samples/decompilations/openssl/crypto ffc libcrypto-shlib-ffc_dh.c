
undefined ** ossl_ffc_name_to_dh_named_group(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &dh_named_groups;
  lVar2 = 0;
  do {
    iVar1 = OPENSSL_strcasecmp(*ppuVar3,param_1);
    if (iVar1 == 0) {
      return &dh_named_groups + lVar2 * 6;
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 6;
  } while (lVar2 != 0xe);
  return (undefined **)0x0;
}



undefined ** ossl_ffc_uid_to_dh_named_group(int param_1)

{
  long lVar1;
  
  if (param_1 == 0x466) {
    lVar1 = 0;
  }
  else if (param_1 == 0x467) {
    lVar1 = 1;
  }
  else if (param_1 == 0x468) {
    lVar1 = 2;
  }
  else if (param_1 == 0x469) {
    lVar1 = 3;
  }
  else if (param_1 == 0x46a) {
    lVar1 = 4;
  }
  else if (param_1 == 0x4bc) {
    lVar1 = 5;
  }
  else if (param_1 == 0x4bd) {
    lVar1 = 6;
  }
  else if (param_1 == 0x4be) {
    lVar1 = 7;
  }
  else if (param_1 == 0x4bf) {
    lVar1 = 8;
  }
  else if (param_1 == 0x4c0) {
    lVar1 = 9;
  }
  else if (param_1 == 0x4c1) {
    lVar1 = 10;
  }
  else if (param_1 == 1) {
    lVar1 = 0xb;
  }
  else if (param_1 == 2) {
    lVar1 = 0xc;
  }
  else {
    if (param_1 != 3) {
      return (undefined **)0x0;
    }
    lVar1 = 0xd;
  }
  return &dh_named_groups + lVar1 * 6;
}



undefined ** ossl_ffc_numbers_to_dh_named_group(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3)

{
  int iVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_2 == (BIGNUM *)0x0) {
    ppuVar2 = &PTR_ossl_bignum_ffdhe2048_p_001003b8;
    lVar3 = 0;
    do {
      iVar1 = BN_cmp(param_1,(BIGNUM *)*ppuVar2);
      if ((iVar1 == 0) && (iVar1 = BN_cmp(param_3,(BIGNUM *)ppuVar2[2]), iVar1 == 0))
      goto LAB_001001b9;
      lVar3 = lVar3 + 1;
      ppuVar2 = ppuVar2 + 6;
    } while (lVar3 != 0xe);
  }
  else {
    ppuVar2 = &PTR_ossl_bignum_ffdhe2048_p_001003b8;
    lVar3 = 0;
    do {
      iVar1 = BN_cmp(param_1,(BIGNUM *)*ppuVar2);
      if (((iVar1 == 0) && (iVar1 = BN_cmp(param_3,(BIGNUM *)ppuVar2[2]), iVar1 == 0)) &&
         (iVar1 = BN_cmp(param_2,(BIGNUM *)ppuVar2[1]), iVar1 == 0)) {
LAB_001001b9:
        return &dh_named_groups + lVar3 * 6;
      }
      lVar3 = lVar3 + 1;
      ppuVar2 = ppuVar2 + 6;
    } while (lVar3 != 0xe);
  }
  return (undefined **)0x0;
}



undefined4 ossl_ffc_named_group_get_uid(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}



undefined8 ossl_ffc_named_group_get_name(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined4 ossl_ffc_named_group_get_keylength(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



undefined8 ossl_ffc_named_group_get_q(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



bool ossl_ffc_named_group_set(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_2 != 0) {
      ossl_ffc_params_set0_pqg
                (param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),
                 *(undefined8 *)(param_2 + 0x28));
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
    }
    return param_2 != 0;
  }
  return false;
}



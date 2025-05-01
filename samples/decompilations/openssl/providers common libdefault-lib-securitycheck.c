
undefined8 ossl_rsa_key_op_get_protect(undefined8 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x400) {
LAB_001000e0:
    uVar2 = 0;
  }
  else if (param_2 < 0x401) {
    if (param_2 == 0x20) {
      uVar2 = 0;
      goto LAB_00100056;
    }
    if (param_2 < 0x21) {
      uVar2 = 1;
      if (param_2 != 0x10) {
LAB_0010008d:
        ERR_new();
        ERR_set_debug("providers/common/securitycheck.c",0x35,"ossl_rsa_key_op_get_protect");
        ERR_set_error(0x39,0xc0103,"invalid operation: %d",param_2);
        return 0;
      }
      goto LAB_00100056;
    }
    if (param_2 == 0x40) goto LAB_001000e0;
    uVar2 = 1;
    if (param_2 != 0x200) goto LAB_0010008d;
  }
  else {
    if (param_2 == 0x4000) {
      uVar2 = 1;
      goto LAB_00100056;
    }
    if (0x4000 < param_2) {
      uVar2 = 0;
      if (param_2 != 0x8000) goto LAB_0010008d;
      goto LAB_00100056;
    }
    if (param_2 == 0x1000) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      if (param_2 != 0x2000) goto LAB_0010008d;
    }
  }
  iVar1 = RSA_test_flags(param_1,0xf000);
  if (iVar1 == 0x1000) {
    ERR_new();
    ERR_set_debug("providers/common/securitycheck.c",0x2e,"ossl_rsa_key_op_get_protect");
    ERR_set_error(0x39,0xb2,"operation: %d",param_2);
    return 0;
  }
LAB_00100056:
  *param_3 = uVar2;
  return 1;
}



bool ossl_rsa_check_key_size(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = RSA_bits();
  if (param_2 != 0) {
    return 0x7ff < iVar1;
  }
  return 0x3ff < iVar1;
}



bool ossl_kdf_check_key_size(long param_1)

{
  return 0x6f < (ulong)(param_1 * 8);
}



void ossl_mac_check_key_size(void)

{
  ossl_kdf_check_key_size();
  return;
}



uint ossl_ec_check_curve_allowed(EC_GROUP *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = EC_GROUP_get_curve_name(param_1);
  if (uVar1 != 0) {
    lVar2 = EC_curve_nid2nist(uVar1);
    uVar1 = (uint)(lVar2 != 0);
  }
  return uVar1;
}



bool ossl_ec_check_security_strength(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = EC_GROUP_order_bits();
  return 0x9f < iVar1 && (param_2 == 0 || 0xdf < iVar1);
}



bool ossl_dsa_check_key(long param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  
  if (param_1 == 0) {
    return false;
  }
  a = (BIGNUM *)DSA_get0_p();
  a_00 = (BIGNUM *)DSA_get0_q(param_1);
  if ((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
LAB_001002e0:
    bVar1 = false;
  }
  else {
    uVar2 = BN_num_bits(a);
    uVar3 = BN_num_bits(a_00);
    if (param_2 == 0) {
      if ((uVar2 < 0x200) || (uVar3 < 0xa0)) goto LAB_001002e0;
      if ((uVar2 < 0x800) || (uVar3 < 0xe0)) {
        return true;
      }
    }
    if ((uVar2 != 0x800) || (bVar1 = true, (uVar3 - 0xe0 & 0xffffffdf) != 0)) {
      return uVar3 == 0x100 && uVar2 == 0xc00;
    }
  }
  return bVar1;
}



bool ossl_dh_check_key(long param_1)

{
  uint uVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  
  if (param_1 == 0) {
    return false;
  }
  a = (BIGNUM *)DH_get0_p();
  a_00 = (BIGNUM *)DH_get0_q(param_1);
  if (((a != (BIGNUM *)0x0) && (a_00 != (BIGNUM *)0x0)) && (uVar1 = BN_num_bits(a), 0x7ff < uVar1))
  {
    iVar2 = DH_get_nid(param_1);
    if (iVar2 != 0) {
      return true;
    }
    iVar2 = BN_num_bits(a_00);
    if (uVar1 == 0x800) {
      return (iVar2 - 0xe0U & 0xffffffdf) == 0;
    }
  }
  return false;
}



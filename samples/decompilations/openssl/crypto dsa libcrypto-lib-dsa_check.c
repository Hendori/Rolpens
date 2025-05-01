
undefined8 ossl_dsa_check_params(long param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((*(BIGNUM **)(param_1 + 8) != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    if (iVar1 < 0x2711) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
      iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
      if (iVar1 < iVar2) {
        if (param_2 != 1) {
          uVar3 = ossl_ffc_params_full_validate();
          return uVar3;
        }
        uVar3 = ossl_ffc_params_simple_validate
                          (*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,param_3);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      ERR_set_error(10,0x66,0);
      *param_3 = 0x800;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
      ERR_set_error(10,0x67,0);
      *param_3 = 0x800;
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
  ERR_set_error(10,0x72,0);
  *param_3 = 0x800;
  return 0;
}



bool ossl_dsa_check_pub_key(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
    ERR_set_error(10,0x72,0);
    *param_3 = 0x800;
    return false;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (iVar1 < 0x2711) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    if (iVar2 <= iVar1) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      ERR_set_error(10,0x66,0);
      *param_3 = 0x800;
      return false;
    }
    iVar1 = ossl_ffc_validate_public_key(param_1 + 8,param_2,param_3);
    if (iVar1 != 0) {
      return *param_3 == 0;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
    ERR_set_error(10,0x67,0);
    *param_3 = 0x800;
  }
  return false;
}



bool ossl_dsa_check_pub_key_partial(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
    ERR_set_error(10,0x72,0);
    *param_3 = 0x800;
    return false;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (iVar1 < 0x2711) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    if (iVar2 <= iVar1) {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      ERR_set_error(10,0x66,0);
      *param_3 = 0x800;
      return false;
    }
    iVar1 = ossl_ffc_validate_public_key_partial(param_1 + 8,param_2,param_3);
    if (iVar1 != 0) {
      return *param_3 == 0;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
    ERR_set_error(10,0x67,0);
    *param_3 = 0x800;
  }
  return false;
}



undefined8 ossl_dsa_check_priv_key(long param_1,undefined8 param_2,undefined4 *param_3)

{
  BIGNUM *a;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  a = *(BIGNUM **)(param_1 + 8);
  *param_3 = 0;
  if ((a != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
    iVar1 = BN_num_bits(a);
    if (iVar1 < 0x2711) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
      iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
      if (iVar1 < iVar2) {
        uVar3 = ossl_ffc_validate_private_key(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      ERR_set_error(10,0x66,0);
      *param_3 = 0x800;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
      ERR_set_error(10,0x67,0);
      *param_3 = 0x800;
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
  ERR_set_error(10,0x72,0);
  *param_3 = 0x800;
  return 0;
}



uint ossl_dsa_check_pairwise(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  BN_CTX *c;
  BIGNUM *a;
  
  if ((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
    ERR_set_error(10,0x72,0);
    return 0;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (10000 < iVar1) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
    ERR_set_error(10,0x67,0);
    return 0;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
  iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
  if (iVar1 < iVar2) {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb8));
        if ((c == (BN_CTX *)0x0) || (a = BN_new(), a == (BIGNUM *)0x0)) {
          uVar3 = 0;
          a = (BIGNUM *)0x0;
        }
        else {
          uVar3 = ossl_dsa_generate_public_key(c,param_1,*(undefined8 *)(param_1 + 0x70),a);
          if (uVar3 != 0) {
            iVar1 = BN_cmp(a,*(BIGNUM **)(param_1 + 0x68));
            uVar3 = (uint)(iVar1 == 0);
          }
        }
        BN_free(a);
        BN_CTX_free(c);
        return uVar3;
      }
      return 0;
    }
    return 0;
  }
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
  ERR_set_error(10,0x66,0);
  return 0;
}




undefined8 dsa_precheck_params(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(BIGNUM **)(param_1 + 8) == (BIGNUM *)0x0) || (*(long *)(param_1 + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_check.c",0x19,"dsa_precheck_params");
    ERR_set_error(10,0x72,0);
    *param_2 = 0x800;
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    if (iVar1 < 0x2711) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
      iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
      if (iVar1 < iVar2) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x25,"dsa_precheck_params");
      ERR_set_error(10,0x66,0);
      *param_2 = 0x800;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_check.c",0x1f,"dsa_precheck_params");
      ERR_set_error(10,0x67,0);
      *param_2 = 0x800;
    }
  }
  return 0;
}



undefined8 ossl_dsa_check_params(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 != 1) {
    uVar2 = ossl_ffc_params_full_validate();
    return uVar2;
  }
  uVar2 = ossl_ffc_params_simple_validate(*(undefined8 *)(param_1 + 0xb8),param_1 + 8,0,param_3);
  return uVar2;
}



bool ossl_dsa_check_pub_key(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = ossl_ffc_validate_public_key(param_1 + 8,param_2,param_3);
    if (iVar1 != 0) {
      return *param_3 == 0;
    }
  }
  return false;
}



bool ossl_dsa_check_pub_key_partial(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 != 0) {
    iVar1 = ossl_ffc_validate_public_key_partial(param_1 + 8,param_2,param_3);
    if (iVar1 != 0) {
      return *param_3 == 0;
    }
  }
  return false;
}



undefined8 ossl_dsa_check_priv_key(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  iVar1 = dsa_precheck_params(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = ossl_ffc_validate_private_key(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return uVar2;
}



uint ossl_dsa_check_pairwise(long param_1)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *a;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  uVar1 = dsa_precheck_params(param_1,&local_34);
  if (uVar1 != 0) {
    uVar1 = 0;
    if (((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x70) != 0)) &&
       (uVar1 = 0, *(long *)(param_1 + 0x68) != 0)) {
      c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb8));
      if (c == (BN_CTX *)0x0) {
        a = (BIGNUM *)0x0;
        uVar1 = local_34;
      }
      else {
        a = BN_new();
        uVar1 = local_34;
        if ((a != (BIGNUM *)0x0) &&
           (iVar2 = ossl_dsa_generate_public_key(c,param_1,*(undefined8 *)(param_1 + 0x70),a),
           uVar1 = local_34, iVar2 != 0)) {
          iVar2 = BN_cmp(a,*(BIGNUM **)(param_1 + 0x68));
          uVar1 = (uint)(iVar2 == 0);
        }
      }
      BN_free(a);
      BN_CTX_free(c);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



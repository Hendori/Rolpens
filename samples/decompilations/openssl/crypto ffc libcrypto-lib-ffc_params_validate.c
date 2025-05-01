
undefined8
ossl_ffc_params_validate_unverifiable_g
          (BN_CTX *param_1,BN_MONT_CTX *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          BIGNUM *param_6,uint *param_7)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = BN_value_one();
  iVar1 = BN_cmp(param_5,pBVar2);
  if ((0 < iVar1) && (iVar1 = BN_cmp(param_5,param_3), iVar1 < 0)) {
    iVar1 = BN_mod_exp_mont(param_6,param_5,param_4,param_3,param_1,param_2);
    if (iVar1 == 0) {
      return 0;
    }
    pBVar2 = BN_value_one();
    iVar1 = BN_cmp(param_6,pBVar2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  *param_7 = *param_7 | 8;
  return 0;
}



undefined1  [16]
ossl_ffc_params_FIPS186_4_validate
          (undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar4 = 0;
    if (((BIGNUM *)*param_2 != (BIGNUM *)0x0) && (param_2[1] != 0)) {
      uVar5 = param_3 & 0xffffffff;
      iVar2 = BN_num_bits((BIGNUM *)*param_2);
      iVar3 = BN_num_bits((BIGNUM *)param_2[1]);
      param_3 = param_4;
      uVar4 = ossl_ffc_params_FIPS186_4_gen_verify
                        (param_1,param_2,0,uVar5,(long)iVar2,(long)iVar3,param_4,param_5);
    }
    auVar6._8_8_ = param_3;
    auVar6._0_8_ = uVar4;
    return auVar6;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



undefined1  [16]
ossl_ffc_params_FIPS186_2_validate
          (undefined8 param_1,undefined8 *param_2,ulong param_3,undefined4 *param_4,
          undefined8 param_5)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  if (((param_2 != (undefined8 *)0x0) && ((BIGNUM *)*param_2 != (BIGNUM *)0x0)) && (param_2[1] != 0)
     ) {
    iVar2 = BN_num_bits((BIGNUM *)*param_2);
    iVar3 = BN_num_bits((BIGNUM *)param_2[1]);
    auVar4._0_8_ = ossl_ffc_params_FIPS186_2_gen_verify
                             (param_1,param_2,0,param_3 & 0xffffffff,(long)iVar2,(long)iVar3,param_4
                              ,param_5);
    auVar4._8_8_ = param_4;
    return auVar4;
  }
  *param_4 = 0x800;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



bool ossl_ffc_params_simple_validate
               (undefined8 param_1,long param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  byte local_9c [4];
  undefined8 local_98 [7];
  undefined4 local_60;
  undefined4 local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_9c[0] = 0;
  local_9c[1] = 0;
  local_9c[2] = 0;
  local_9c[3] = 0;
  puVar3 = local_98;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_2 != 0) {
    if (param_4 == (byte *)0x0) {
      param_4 = local_9c;
    }
    iVar1 = ossl_ffc_params_copy(local_98);
    if (iVar1 != 0) {
      local_58 = 2;
      local_60 = 0xffffffff;
      if ((*(byte *)(param_2 + 0x40) & 4) == 0) {
        iVar1 = ossl_ffc_params_FIPS186_4_validate();
      }
      else {
        iVar1 = ossl_ffc_params_FIPS186_2_validate(param_1,local_98,param_3,param_4,0);
      }
      if ((iVar1 == 0) && ((*param_4 & 8) != 0)) {
        ERR_new();
        ERR_set_debug("crypto/ffc/ffc_params_validate.c",0x7d,"ossl_ffc_params_simple_validate");
        ERR_set_error(5,0x78,0);
      }
      ossl_ffc_params_cleanup(local_98);
      bVar4 = iVar1 != 0;
      goto LAB_00100259;
    }
  }
  bVar4 = false;
LAB_00100259:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_ffc_params_full_validate(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  BN_CTX *c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined8 *)0x0) {
LAB_00100378:
    iVar2 = 0;
    goto LAB_0010031f;
  }
  if (param_2[4] != 0) {
    if ((*(byte *)(param_2 + 8) & 4) == 0) {
      iVar2 = ossl_ffc_params_FIPS186_4_validate();
    }
    else {
      iVar2 = ossl_ffc_params_FIPS186_2_validate();
    }
    goto LAB_0010031f;
  }
  iVar2 = ossl_ffc_params_simple_validate();
  if ((iVar2 == 0) || (c = (BN_CTX *)BN_CTX_new_ex(param_1), c == (BN_CTX *)0x0)) goto LAB_00100378;
  iVar3 = BN_check_prime(param_2[1],c,0);
  if (iVar3 == 1) {
    iVar3 = BN_check_prime(*param_2,c,0);
    if (iVar3 != 1) {
      ERR_new();
      ERR_set_debug("crypto/ffc/ffc_params_validate.c",0xb2,"ossl_ffc_params_full_validate");
      ERR_set_error(10,0x73,0);
      goto LAB_001003c3;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ffc/ffc_params_validate.c",0xac,"ossl_ffc_params_full_validate");
    ERR_set_error(10,0x71,0);
LAB_001003c3:
    iVar2 = 0;
  }
  BN_CTX_free(c);
LAB_0010031f:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



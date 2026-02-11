
void ossl_ec_GFp_mont_group_init(long param_1)

{
  ossl_ec_GFp_simple_group_init();
  *(undefined1 (*) [16])(param_1 + 0x78) = (undefined1  [16])0x0;
  return;
}



void ossl_ec_GFp_mont_group_finish(long param_1)

{
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ossl_ec_GFp_simple_group_finish(param_1);
  return;
}



void ossl_ec_GFp_mont_group_clear_finish(long param_1)

{
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  ossl_ec_GFp_simple_group_clear_finish(param_1);
  return;
}



undefined8 ossl_ec_GFp_mont_group_copy(long param_1,long param_2)

{
  int iVar1;
  BN_MONT_CTX *pBVar2;
  BIGNUM *pBVar3;
  
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = ossl_ec_GFp_simple_group_copy(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    pBVar2 = BN_MONT_CTX_new();
    *(BN_MONT_CTX **)(param_1 + 0x78) = pBVar2;
    if (pBVar2 == (BN_MONT_CTX *)0x0) {
      return 0;
    }
    pBVar2 = BN_MONT_CTX_copy(pBVar2,*(BN_MONT_CTX **)(param_2 + 0x78));
    if (pBVar2 == (BN_MONT_CTX *)0x0) goto LAB_00100140;
  }
  if (*(BIGNUM **)(param_2 + 0x80) == (BIGNUM *)0x0) {
    return 1;
  }
  pBVar3 = BN_dup(*(BIGNUM **)(param_2 + 0x80));
  *(BIGNUM **)(param_1 + 0x80) = pBVar3;
  if (pBVar3 != (BIGNUM *)0x0) {
    return 1;
  }
LAB_00100140:
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}



int ossl_ec_GFp_mont_group_set_curve
              (long param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5)

{
  int iVar1;
  BN_MONT_CTX *mont;
  BIGNUM *a;
  BIGNUM *pBVar2;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (param_5 == (BN_CTX *)0x0) {
    c = (BN_CTX *)BN_CTX_new_ex();
    if (c == (BN_CTX *)0x0) {
      return 0;
    }
    mont = BN_MONT_CTX_new();
    param_5 = c;
  }
  else {
    mont = BN_MONT_CTX_new();
  }
  if (mont == (BN_MONT_CTX *)0x0) {
    a = (BIGNUM *)0x0;
    iVar1 = 0;
  }
  else {
    iVar1 = BN_MONT_CTX_set(mont,param_2,param_5);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_mont.c",0xa6,"ossl_ec_GFp_mont_group_set_curve");
      ERR_set_error(0x10,0x80003,0);
      a = (BIGNUM *)0x0;
      iVar1 = 0;
    }
    else {
      a = BN_new();
      iVar1 = 0;
      if (a != (BIGNUM *)0x0) {
        pBVar2 = BN_value_one();
        iVar1 = BN_to_montgomery(a,pBVar2,mont,param_5);
        if (iVar1 != 0) {
          *(BN_MONT_CTX **)(param_1 + 0x78) = mont;
          *(BIGNUM **)(param_1 + 0x80) = a;
          iVar1 = ossl_ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
          if (iVar1 == 0) {
            BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
            *(undefined8 *)(param_1 + 0x78) = 0;
            BN_free(*(BIGNUM **)(param_1 + 0x80));
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
          a = (BIGNUM *)0x0;
          mont = (BN_MONT_CTX *)0x0;
        }
      }
    }
  }
  BN_free(a);
  BN_CTX_free(c);
  BN_MONT_CTX_free(mont);
  return iVar1;
}



undefined8 ossl_ec_GFp_mont_field_inv(long param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *a;
  undefined8 uVar2;
  BN_CTX *c;
  
  if ((*(long *)(param_1 + 0x78) == 0) ||
     ((c = (BN_CTX *)0x0, param_4 == (BN_CTX *)0x0 &&
      (param_4 = (BN_CTX *)BN_CTX_secure_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_4,
      param_4 == (BN_CTX *)0x0)))) {
    uVar2 = 0;
  }
  else {
    BN_CTX_start(param_4);
    a = BN_CTX_get(param_4);
    if ((((a == (BIGNUM *)0x0) || (iVar1 = BN_set_word(a,2), iVar1 == 0)) ||
        (iVar1 = BN_sub(a,*(BIGNUM **)(param_1 + 0x40),a), iVar1 == 0)) ||
       (iVar1 = BN_mod_exp_mont(param_2,param_3,a,*(BIGNUM **)(param_1 + 0x40),param_4,
                                *(BN_MONT_CTX **)(param_1 + 0x78)), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      iVar1 = BN_is_zero(param_2);
      if (iVar1 != 0) {
        ERR_new();
        uVar2 = 0;
        ERR_set_debug("crypto/ec/ecp_mont.c",0xff,"ossl_ec_GFp_mont_field_inv");
        ERR_set_error(0x10,0xa5,0);
      }
    }
    BN_CTX_end(param_4);
    BN_CTX_free(c);
  }
  return uVar2;
}



bool ossl_ec_GFp_mont_field_set_to_one(long param_1,BIGNUM *param_2)

{
  BIGNUM *pBVar1;
  
  if (*(BIGNUM **)(param_1 + 0x80) != (BIGNUM *)0x0) {
    pBVar1 = BN_copy(param_2,*(BIGNUM **)(param_1 + 0x80));
    return pBVar1 != (BIGNUM *)0x0;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecp_mont.c",0x125,"ossl_ec_GFp_mont_field_set_to_one");
  ERR_set_error(0x10,0x6f,0);
  return false;
}



undefined8 ossl_ec_GFp_mont_field_encode(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = BN_to_montgomery();
    return uVar1;
  }
  ERR_new(param_2,param_3);
  ERR_set_debug("crypto/ec/ecp_mont.c",0x10f,"ossl_ec_GFp_mont_field_encode");
  ERR_set_error(0x10,0x6f,0);
  return 0;
}



int ossl_ec_GFp_mont_field_mul
              (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  
  if (*(BN_MONT_CTX **)(param_1 + 0x78) != (BN_MONT_CTX *)0x0) {
    iVar1 = BN_mod_mul_montgomery(param_2,param_3,param_4,*(BN_MONT_CTX **)(param_1 + 0x78),param_5)
    ;
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecp_mont.c",200,"ossl_ec_GFp_mont_field_mul");
  ERR_set_error(0x10,0x6f,0);
  return 0;
}



int ossl_ec_GFp_mont_field_sqr(long param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  
  if (*(BN_MONT_CTX **)(param_1 + 0x78) != (BN_MONT_CTX *)0x0) {
    iVar1 = BN_mod_mul_montgomery(param_2,param_3,param_3,*(BN_MONT_CTX **)(param_1 + 0x78),param_4)
    ;
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecp_mont.c",0xd3,"ossl_ec_GFp_mont_field_sqr");
  ERR_set_error(0x10,0x6f,0);
  return 0;
}



int ossl_ec_GFp_mont_field_decode(long param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  
  if (*(BN_MONT_CTX **)(param_1 + 0x78) != (BN_MONT_CTX *)0x0) {
    iVar1 = BN_from_montgomery(param_2,param_3,*(BN_MONT_CTX **)(param_1 + 0x78),param_4);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecp_mont.c",0x11a,"ossl_ec_GFp_mont_field_decode");
  ERR_set_error(0x10,0x6f,0);
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EC_METHOD * EC_GFp_mont_method(void)

{
  return (EC_METHOD *)ret_7;
}



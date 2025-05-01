
void ossl_ec_GFp_nist_group_copy(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  ossl_ec_GFp_simple_group_copy();
  return;
}



undefined4
ossl_ec_GFp_nist_group_set_curve
          (long param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,BN_CTX *param_5)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *pBVar3;
  undefined *puVar4;
  BN_CTX *c;
  
  c = (BN_CTX *)0x0;
  if ((param_5 == (BN_CTX *)0x0) &&
     (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_5,
     param_5 == (BN_CTX *)0x0)) {
    return 0;
  }
  BN_CTX_start(param_5);
  pBVar3 = BN_get0_nist_prime_192();
  iVar1 = BN_ucmp(pBVar3,param_2);
  if (iVar1 == 0) {
    puVar4 = &BN_nist_mod_192;
  }
  else {
    pBVar3 = BN_get0_nist_prime_224();
    iVar1 = BN_ucmp(pBVar3,param_2);
    if (iVar1 == 0) {
      puVar4 = &BN_nist_mod_224;
    }
    else {
      pBVar3 = BN_get0_nist_prime_256();
      iVar1 = BN_ucmp(pBVar3,param_2);
      if (iVar1 == 0) {
        puVar4 = &BN_nist_mod_256;
      }
      else {
        pBVar3 = BN_get0_nist_prime_384();
        iVar1 = BN_ucmp(pBVar3,param_2);
        if (iVar1 == 0) {
          puVar4 = &BN_nist_mod_384;
        }
        else {
          pBVar3 = BN_get0_nist_prime_521();
          iVar1 = BN_ucmp(pBVar3,param_2);
          if (iVar1 != 0) {
            ERR_new();
            uVar2 = 0;
            ERR_set_debug("crypto/ec/ecp_nist.c",0x74,"ossl_ec_GFp_nist_group_set_curve");
            ERR_set_error(0x10,0x87,0);
            goto LAB_0010008e;
          }
          puVar4 = &BN_nist_mod_521;
        }
      }
    }
  }
  *(undefined **)(param_1 + 0x88) = puVar4;
  uVar2 = ossl_ec_GFp_simple_group_set_curve(param_1,param_2,param_3,param_4,param_5);
LAB_0010008e:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return uVar2;
}



uint ossl_ec_GFp_nist_field_mul
               (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  
  if ((((param_1 == 0) || (param_2 == (BIGNUM *)0x0)) || (param_3 == (BIGNUM *)0x0)) ||
     (param_4 == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nist.c",0x87,"ossl_ec_GFp_nist_field_mul");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    c = (BN_CTX *)0x0;
    if ((param_5 != (BN_CTX *)0x0) ||
       (param_5 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_5,
       param_5 != (BN_CTX *)0x0)) {
      uVar1 = BN_mul(param_2,param_3,param_4,param_5);
      if (uVar1 != 0) {
        iVar2 = (**(code **)(param_1 + 0x88))
                          (param_2,param_2,*(undefined8 *)(param_1 + 0x40),param_5);
        uVar1 = (uint)(iVar2 != 0);
      }
      goto LAB_0010021c;
    }
  }
  c = (BN_CTX *)0x0;
  uVar1 = 0;
LAB_0010021c:
  BN_CTX_free(c);
  return uVar1;
}



uint ossl_ec_GFp_nist_field_sqr(long param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  
  if ((param_2 == (BIGNUM *)0x0 || param_3 == (BIGNUM *)0x0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nist.c",0xa0,"ossl_ec_GFp_nist_field_sqr");
    ERR_set_error(0x10,0x86,0);
  }
  else {
    c = (BN_CTX *)0x0;
    if ((param_4 != (BN_CTX *)0x0) ||
       (param_4 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), c = param_4,
       param_4 != (BN_CTX *)0x0)) {
      uVar1 = BN_sqr(param_2,param_3,param_4);
      if (uVar1 != 0) {
        iVar2 = (**(code **)(param_1 + 0x88))
                          (param_2,param_2,*(undefined8 *)(param_1 + 0x40),param_4);
        uVar1 = (uint)(iVar2 != 0);
      }
      goto LAB_0010030d;
    }
  }
  c = (BN_CTX *)0x0;
  uVar1 = 0;
LAB_0010030d:
  BN_CTX_free(c);
  return uVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EC_METHOD * EC_GFp_nist_method(void)

{
  return (EC_METHOD *)ret_3;
}



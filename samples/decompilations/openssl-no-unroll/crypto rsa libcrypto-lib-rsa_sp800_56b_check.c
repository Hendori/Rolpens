
bool ossl_rsa_check_crt_components(long param_1,BN_CTX *param_2)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  bool bVar3;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(long *)(param_1 + 0x58) != 0) {
      return false;
    }
    return *(long *)(param_1 + 0x60) == 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return false;
  }
  BN_CTX_start(param_2);
  r = BN_CTX_get(param_2);
  a = BN_CTX_get(param_2);
  a_00 = BN_CTX_get(param_2);
  if (a_00 != (BIGNUM *)0x0) {
    BN_set_flags(r,4);
    BN_set_flags(a,4);
    BN_set_flags(a_00,4);
    pBVar2 = BN_copy(a,*(BIGNUM **)(param_1 + 0x40));
    if ((((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
        (pBVar2 = BN_copy(a_00,*(BIGNUM **)(param_1 + 0x48)), pBVar2 != (BIGNUM *)0x0)) &&
       (iVar1 = BN_sub_word(a_00,1), iVar1 != 0)) {
      pBVar2 = BN_value_one();
      iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x50),pBVar2);
      if ((0 < iVar1) && (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x50),a), iVar1 < 0)) {
        pBVar2 = BN_value_one();
        iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x58),pBVar2);
        if ((0 < iVar1) && (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x58),a_00), iVar1 < 0)) {
          pBVar2 = BN_value_one();
          iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x60),pBVar2);
          if (((((0 < iVar1) &&
                (iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x40)),
                iVar1 < 0)) &&
               (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x50),*(BIGNUM **)(param_1 + 0x30),a,
                                   param_2), iVar1 != 0)) &&
              (((iVar1 = BN_is_one(r), iVar1 != 0 &&
                (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x58),*(BIGNUM **)(param_1 + 0x30),a_00
                                    ,param_2), iVar1 != 0)) && (iVar1 = BN_is_one(r), iVar1 != 0))))
             && (iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x48),
                                    *(BIGNUM **)(param_1 + 0x40),param_2), iVar1 != 0)) {
            iVar1 = BN_is_one(r);
            bVar3 = iVar1 != 0;
            goto LAB_001000ba;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001000ba:
  BN_clear(r);
  BN_clear(a);
  BN_clear(a_00);
  BN_CTX_end(param_2);
  return bVar3;
}



bool ossl_rsa_check_prime_factor_range(BIGNUM *param_1,int param_2,BN_CTX *param_3)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *pBVar3;
  bool bVar4;
  
  iVar1 = BN_num_bits((BIGNUM *)&ossl_bn_inv_sqrt_2);
  iVar2 = BN_num_bits(param_1);
  if (iVar2 != param_2 >> 1) {
    return false;
  }
  BN_CTX_start(param_3);
  a = BN_CTX_get(param_3);
  if ((a != (BIGNUM *)0x0) &&
     (pBVar3 = BN_copy(a,(BIGNUM *)&ossl_bn_inv_sqrt_2), pBVar3 != (BIGNUM *)0x0)) {
    if (iVar2 - iVar1 < 0) {
      iVar1 = BN_rshift(a,a,iVar1 - iVar2);
    }
    else {
      iVar1 = BN_lshift(a,a,iVar2 - iVar1);
    }
    if (iVar1 != 0) {
      iVar1 = BN_cmp(param_1,a);
      bVar4 = 0 < iVar1;
      goto LAB_0010031b;
    }
  }
  bVar4 = false;
LAB_0010031b:
  BN_CTX_end(param_3);
  return bVar4;
}



bool ossl_rsa_check_prime_factor(BIGNUM *param_1,BIGNUM *param_2,undefined4 param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *pBVar2;
  bool bVar3;
  
  iVar1 = BN_check_prime(param_1,param_4,0);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = ossl_rsa_check_prime_factor_range(param_1,param_3,param_4);
  if (iVar1 != 1) {
    return false;
  }
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  r = BN_CTX_get(param_4);
  if (r != (BIGNUM *)0x0) {
    BN_set_flags(a,4);
    BN_set_flags(r,4);
    pBVar2 = BN_copy(a,param_1);
    if (((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
       (iVar1 = BN_gcd(r,a,param_2,param_4), iVar1 != 0)) {
      iVar1 = BN_is_one(r);
      bVar3 = iVar1 != 0;
      goto LAB_00100412;
    }
  }
  bVar3 = false;
LAB_00100412:
  BN_clear(a);
  BN_CTX_end(param_4);
  return bVar3;
}



ulong ossl_rsa_check_public_exponent(BIGNUM *param_1)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *b;
  
  uVar2 = BN_is_odd();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  return (ulong)(0 < iVar1);
}



ulong ossl_rsa_check_pminusq_diff(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = BN_sub(param_1,param_2,param_3);
  if (iVar1 != 0) {
    BN_set_negative(param_1,0);
    iVar1 = BN_is_zero(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = BN_sub_word(param_1,1);
    if (iVar1 != 0) {
      iVar1 = BN_num_bits(param_1);
      return (ulong)((param_4 >> 1) + -100 < iVar1);
    }
  }
  return 0xffffffff;
}



bool ossl_rsa_get_lcm(BN_CTX *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                     BIGNUM *param_5,BIGNUM *param_6,BIGNUM *param_7,BIGNUM *param_8)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = BN_value_one();
  iVar1 = BN_sub(param_6,param_2,pBVar2);
  if (iVar1 != 0) {
    pBVar2 = BN_value_one();
    iVar1 = BN_sub(param_7,param_3,pBVar2);
    if (((iVar1 != 0) && (iVar1 = BN_mul(param_8,param_6,param_7,param_1), iVar1 != 0)) &&
       (iVar1 = BN_gcd(param_5,param_6,param_7,param_1), iVar1 != 0)) {
      iVar1 = BN_div(param_4,(BIGNUM *)0x0,param_8,param_5,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



bool ossl_rsa_check_private_exponent(long param_1,int param_2,BN_CTX *param_3)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *b;
  BIGNUM *pBVar2;
  BIGNUM *a_01;
  bool bVar3;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x38));
  if (iVar1 <= param_2 >> 1) {
    return false;
  }
  BN_CTX_start(param_3);
  r = BN_CTX_get(param_3);
  a = BN_CTX_get(param_3);
  a_00 = BN_CTX_get(param_3);
  b = BN_CTX_get(param_3);
  pBVar2 = BN_CTX_get(param_3);
  a_01 = BN_CTX_get(param_3);
  if (a_01 != (BIGNUM *)0x0) {
    BN_set_flags(r,4);
    BN_set_flags(a,4);
    BN_set_flags(a_00,4);
    BN_set_flags(b,4);
    BN_set_flags(pBVar2,4);
    BN_set_flags(a_01,4);
    iVar1 = ossl_rsa_get_lcm(param_3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48)
                             ,b,a_01,a,a_00,pBVar2);
    if (iVar1 == 1) {
      iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x38),b);
      if (iVar1 < 0) {
        iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x30),*(BIGNUM **)(param_1 + 0x38),b,param_3);
        if (iVar1 != 0) {
          iVar1 = BN_is_one(r);
          bVar3 = iVar1 != 0;
          goto LAB_001006cb;
        }
      }
    }
  }
  bVar3 = false;
LAB_001006cb:
  BN_clear(r);
  BN_clear(a);
  BN_clear(a_00);
  BN_clear(b);
  BN_clear(a_01);
  BN_CTX_end(param_3);
  return bVar3;
}



undefined4 ossl_rsa_sp800_56b_check_public(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(BIGNUM **)(param_1 + 0x28) != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x30) != 0)) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
    if (iVar1 < 0x4001) {
      iVar2 = BN_is_odd(*(undefined8 *)(param_1 + 0x28));
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x134,"ossl_rsa_sp800_56b_check_public");
        ERR_set_error(4,0xae,0);
      }
      else {
        iVar2 = ossl_rsa_check_public_exponent(*(undefined8 *)(param_1 + 0x30));
        if (iVar2 != 0) {
          ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
          r = BN_new();
          if ((ctx == (BN_CTX *)0x0) || (r == (BIGNUM *)0x0)) {
LAB_00100846:
            uVar3 = 0;
          }
          else {
            b = (BIGNUM *)ossl_bn_get0_small_factors();
            iVar2 = BN_gcd(r,*(BIGNUM **)(param_1 + 0x28),b,ctx);
            if (iVar2 == 0) {
LAB_00100816:
              ERR_new();
              uVar4 = 0x148;
LAB_00100827:
              ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",uVar4,
                            "ossl_rsa_sp800_56b_check_public");
              ERR_set_error(4,0xae,0);
              goto LAB_00100846;
            }
            iVar2 = BN_is_one(r);
            if (iVar2 == 0) goto LAB_00100816;
            iVar2 = ossl_bn_miller_rabin_is_prime
                              (*(undefined8 *)(param_1 + 0x28),5,ctx,0,1,&local_34);
            if (iVar2 != 1) {
LAB_00100971:
              ERR_new();
              uVar4 = 0x155;
              goto LAB_00100827;
            }
            uVar3 = 1;
            if ((local_34 != 2) && ((0x1ff < iVar1 || (local_34 != 1)))) goto LAB_00100971;
          }
          BN_free(r);
          BN_CTX_free(ctx);
          goto LAB_0010089a;
        }
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x139,"ossl_rsa_sp800_56b_check_public");
        ERR_set_error(4,0xb2,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x125,"ossl_rsa_sp800_56b_check_public");
      ERR_set_error(4,0x69,0);
    }
  }
  uVar3 = 0;
LAB_0010089a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_rsa_sp800_56b_check_private(long param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    b = BN_value_one();
    iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x38),b);
    if (-1 < iVar1) {
      uVar2 = BN_cmp(*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x28));
      return uVar2 >> 0x1f;
    }
  }
  return 0;
}



uint ossl_rsa_sp800_56b_check_keypair(long param_1,BIGNUM *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x30) == 0)) ||
     ((*(long *)(param_1 + 0x38) == 0 || (*(long *)(param_1 + 0x28) == 0)))) {
    ERR_new();
    uVar4 = 0x182;
LAB_00100ae1:
    ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",uVar4,"ossl_rsa_sp800_56b_check_keypair");
    ERR_set_error(4,0xaf,0);
  }
  else {
    iVar1 = ossl_rsa_sp800_56b_validate_strength(param_4,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    pBVar3 = *(BIGNUM **)(param_1 + 0x30);
    if (param_2 != (BIGNUM *)0x0) {
      iVar1 = BN_cmp(param_2,pBVar3);
      if (iVar1 != 0) {
        ERR_new();
        uVar4 = 0x18d;
        goto LAB_00100ae1;
      }
      pBVar3 = *(BIGNUM **)(param_1 + 0x30);
    }
    iVar1 = ossl_rsa_check_public_exponent(pBVar3);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x194,"ossl_rsa_sp800_56b_check_keypair");
      ERR_set_error(4,0xb2,0);
    }
    else {
      uVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
      if (uVar2 == param_4) {
        if ((0 < (int)param_4) && (uVar2 = param_4 & 1, (param_4 & 1) == 0)) {
          ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
          if (ctx == (BN_CTX *)0x0) {
            return 0;
          }
          BN_CTX_start(ctx);
          pBVar3 = BN_CTX_get(ctx);
          if ((pBVar3 != (BIGNUM *)0x0) &&
             (iVar1 = BN_mul(pBVar3,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),ctx),
             iVar1 != 0)) {
            iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x28),pBVar3);
            if (iVar1 == 0) {
              iVar1 = ossl_rsa_check_prime_factor
                                (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30),
                                 param_4,ctx);
              if ((((iVar1 == 0) ||
                   (iVar1 = ossl_rsa_check_prime_factor
                                      (*(undefined8 *)(param_1 + 0x48),
                                       *(undefined8 *)(param_1 + 0x30),param_4,ctx), iVar1 == 0)) ||
                  (iVar1 = ossl_rsa_check_pminusq_diff
                                     (pBVar3,*(undefined8 *)(param_1 + 0x40),
                                      *(undefined8 *)(param_1 + 0x48),param_4), iVar1 < 1)) ||
                 ((iVar1 = ossl_rsa_check_private_exponent(param_1,param_4,ctx), iVar1 == 0 ||
                  (iVar1 = ossl_rsa_check_crt_components(param_1,ctx), iVar1 == 0)))) {
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x1b9,
                              "ossl_rsa_sp800_56b_check_keypair");
                ERR_set_error(4,0xab,0);
              }
              else {
                uVar2 = 1;
              }
            }
            else {
              ERR_new();
              ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",0x1ac,
                            "ossl_rsa_sp800_56b_check_keypair");
              ERR_set_error(4,0xaf,0);
            }
          }
          BN_clear(pBVar3);
          BN_CTX_end(ctx);
          BN_CTX_free(ctx);
          return uVar2;
        }
        ERR_new();
        uVar4 = 0x19e;
      }
      else {
        ERR_new();
        uVar4 = 0x199;
      }
      ERR_set_debug("crypto/rsa/rsa_sp800_56b_check.c",uVar4,"ossl_rsa_sp800_56b_check_keypair");
      ERR_set_error(4,0xab,0);
    }
  }
  return 0;
}




undefined8
bn_rsa_fips186_4_find_aux_prob_prime
          (BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,undefined4 param_4,BN_GENCB *param_5)

{
  int iVar1;
  BIGNUM *pBVar2;
  int b;
  
  pBVar2 = BN_copy(param_2,param_1);
  if (pBVar2 != (BIGNUM *)0x0) {
    b = 0;
    BN_set_flags(param_2);
    do {
      b = b + 1;
      BN_GENCB_call(param_5,0,b);
      iVar1 = ossl_bn_check_generated_prime(param_2,param_4,param_3,param_5);
      if (0 < iVar1) {
        BN_GENCB_call(param_5,2,b);
        return 1;
      }
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = BN_add_word(param_2,2);
    } while (iVar1 != 0);
  }
  return 0;
}



undefined8
ossl_bn_rsa_fips186_4_derive_prime
          (BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          int param_6,undefined8 param_7,BN_CTX *param_8,BN_GENCB *param_9)

{
  char cVar1;
  int n;
  int iVar2;
  int iVar3;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  BIGNUM *r_01;
  BIGNUM *a;
  BIGNUM *r_02;
  BIGNUM *pBVar5;
  undefined8 uVar6;
  
  n = param_6 >> 1;
  BN_CTX_start(param_8);
  r = BN_CTX_get(param_8);
  r_00 = BN_CTX_get(param_8);
  ret = BN_CTX_get(param_8);
  pBVar4 = BN_CTX_get(param_8);
  r_01 = BN_CTX_get(param_8);
  a = BN_CTX_get(param_8);
  r_02 = BN_CTX_get(param_8);
  if (r_02 == (BIGNUM *)0x0) goto LAB_00100169;
  if (param_3 == (BIGNUM *)0x0) {
    iVar2 = BN_num_bits((BIGNUM *)ossl_bn_inv_sqrt_2);
    if (n < iVar2) goto LAB_00100169;
    iVar2 = BN_num_bits((BIGNUM *)ossl_bn_inv_sqrt_2);
    iVar2 = BN_lshift(r,(BIGNUM *)ossl_bn_inv_sqrt_2,n - iVar2);
    if (iVar2 == 0) goto LAB_00100169;
    pBVar5 = BN_value_one();
    iVar2 = BN_lshift(r_00,pBVar5,n);
    if ((iVar2 == 0) || (iVar2 = BN_sub(r_00,r_00,r), iVar2 == 0)) goto LAB_00100169;
  }
  else {
    pBVar5 = BN_copy(param_2,param_3);
    if (pBVar5 == (BIGNUM *)0x0) goto LAB_00100169;
  }
  iVar2 = BN_lshift1(r_02,param_4);
  if ((((((iVar2 != 0) &&
         (pBVar5 = BN_mod_inverse(pBVar4,r_02,param_5,param_8), pBVar5 != (BIGNUM *)0x0)) &&
        (pBVar5 = BN_mod_inverse(ret,param_5,r_02,param_8), pBVar5 != (BIGNUM *)0x0)) &&
       ((iVar2 = BN_mul(ret,ret,param_5,param_8), iVar2 != 0 &&
        (iVar2 = BN_mul(pBVar4,pBVar4,r_02,param_8), iVar2 != 0)))) &&
      ((iVar2 = BN_sub(ret,ret,pBVar4), iVar2 != 0 &&
       (iVar2 = BN_mul(r_01,r_02,param_5,param_8), iVar2 != 0)))) &&
     ((iVar2 = BN_is_negative(ret), iVar2 == 0 || (iVar2 = BN_add(ret,ret,r_01), iVar2 != 0)))) {
    cVar1 = '\x04';
    if (param_6 < 0xc00) {
      cVar1 = (0x7ff < param_6) * '\x05';
    }
    if (param_3 == (BIGNUM *)0x0) goto LAB_00100423;
    while ((iVar2 = BN_mod_sub(param_1,ret,param_2,r_01,param_8), iVar2 != 0 &&
           (iVar2 = BN_add(param_1,param_1,param_2), iVar2 != 0))) {
      iVar2 = 0;
      while (iVar3 = BN_num_bits(param_1), iVar3 <= n) {
        BN_GENCB_call(param_9,0,2);
        pBVar4 = BN_copy(a,param_1);
        if ((pBVar4 == (BIGNUM *)0x0) || (iVar3 = BN_sub_word(a,1), iVar3 == 0)) goto LAB_00100169;
        iVar3 = BN_are_coprime(a,param_7,param_8);
        if (iVar3 != 0) {
          iVar3 = ossl_bn_check_generated_prime(param_1,cVar1,param_8,param_9);
          if (0 < iVar3) {
            uVar6 = 1;
            BN_GENCB_call(param_9,3,0);
            goto LAB_0010016b;
          }
          if (iVar3 != 0) goto LAB_00100169;
        }
        iVar2 = iVar2 + 1;
        if (n * 0x14 <= iVar2) {
          ERR_new();
          ERR_set_debug("crypto/bn/bn_rsa_fips186_4.c",0x188,"ossl_bn_rsa_fips186_4_derive_prime");
          ERR_set_error(3,0x79,0);
          goto LAB_00100169;
        }
        iVar3 = BN_add(param_1,param_1,r_01);
        if (iVar3 == 0) goto LAB_00100169;
      }
      if (param_3 != (BIGNUM *)0x0) break;
LAB_00100423:
      iVar2 = BN_priv_rand_range_ex(param_2,r_00,0,param_8);
      if ((iVar2 == 0) || (iVar2 = BN_add(param_2,param_2,r), iVar2 == 0)) break;
    }
  }
LAB_00100169:
  uVar6 = 0;
LAB_0010016b:
  BN_clear(a);
  BN_CTX_end(param_8);
  return uVar6;
}



bool ossl_bn_rsa_fips186_4_gen_prob_primes
               (long param_1,long param_2,BIGNUM *param_3,BIGNUM *param_4,undefined8 param_5,
               BIGNUM *param_6,BIGNUM *param_7,int param_8,undefined8 param_9,BN_CTX *param_10,
               undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  undefined4 uVar4;
  bool bVar5;
  BIGNUM *local_70;
  BIGNUM *local_60;
  undefined8 local_58;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return false;
  }
  BN_CTX_start(param_10);
  a_00 = param_3;
  if (param_3 == (BIGNUM *)0x0) {
    a_00 = BN_CTX_get(param_10);
  }
  a = param_4;
  if (param_4 == (BIGNUM *)0x0) {
    a = BN_CTX_get(param_10);
  }
  local_70 = param_6;
  if (param_6 == (BIGNUM *)0x0) {
    local_70 = BN_CTX_get(param_10);
  }
  local_60 = param_7;
  if (param_7 == (BIGNUM *)0x0) {
    local_60 = BN_CTX_get(param_10);
  }
  if ((((a_00 == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) || (local_70 == (BIGNUM *)0x0)) ||
     (local_60 == (BIGNUM *)0x0)) goto LAB_001005ae;
  if (param_8 < 0x1000) {
    if (param_8 < 0xc00) {
      if (param_8 < 0x800) goto LAB_001005ae;
      local_58 = 0x26;
      uVar4 = 0x8d;
    }
    else {
      local_58 = 0x29;
      uVar4 = 0xab;
    }
  }
  else {
    local_58 = 0x2c;
    uVar4 = 0xc9;
  }
  if ((param_6 == (BIGNUM *)0x0) &&
     (iVar1 = BN_priv_rand_ex(local_70,uVar4,0,1,0,param_10), iVar1 == 0)) {
    bVar5 = false;
    if (param_3 == (BIGNUM *)0x0) {
      BN_clear(a_00);
    }
    if (param_4 == (BIGNUM *)0x0) {
      BN_clear(a);
    }
  }
  else {
    if (((param_7 == (BIGNUM *)0x0) &&
        (iVar1 = BN_priv_rand_ex(local_60,uVar4,0,1,0,param_10), iVar1 == 0)) ||
       ((iVar1 = bn_rsa_fips186_4_find_aux_prob_prime(local_70,a_00,param_10,local_58,param_11),
        iVar1 == 0 ||
        (iVar1 = bn_rsa_fips186_4_find_aux_prob_prime(local_60,a,param_10,local_58,param_11),
        iVar1 == 0)))) {
LAB_001005ae:
      bVar5 = false;
    }
    else {
      iVar1 = BN_num_bits(a_00);
      iVar2 = BN_num_bits(a);
      iVar3 = 0x7ee;
      if ((param_8 < 0x1000) && (iVar3 = 0x3ef, 0xbff < param_8)) {
        iVar3 = 0x5ee;
      }
      if (iVar3 <= iVar1 + iVar2) goto LAB_001005ae;
      iVar1 = ossl_bn_rsa_fips186_4_derive_prime
                        (param_1,param_2,param_5,a_00,a,param_8,param_9,param_10,param_11);
      bVar5 = iVar1 != 0;
    }
    if (param_3 == (BIGNUM *)0x0) {
      BN_clear(a_00);
    }
    if (param_4 == (BIGNUM *)0x0) {
      BN_clear(a);
    }
    if (param_6 != (BIGNUM *)0x0) goto LAB_001005cc;
  }
  BN_clear(local_70);
LAB_001005cc:
  if (param_7 == (BIGNUM *)0x0) {
    BN_clear(local_60);
  }
  BN_CTX_end(param_10);
  return bVar5;
}



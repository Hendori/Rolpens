
undefined8
ossl_rsa_fips186_4_gen_prob_primes
          (long param_1,undefined8 param_2,int param_3,undefined8 param_4,BN_CTX *param_5,
          undefined8 param_6)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 < 0x800) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_sp800_56b_gen.c",0x59,"ossl_rsa_fips186_4_gen_prob_primes");
    ERR_set_error(4,0x78,0);
    return 0;
  }
  iVar1 = ossl_rsa_check_public_exponent(param_4);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_sp800_56b_gen.c",0x5e,"ossl_rsa_fips186_4_gen_prob_primes");
    ERR_set_error(4,0xb2,0);
    return 0;
  }
  BN_CTX_start(param_5);
  a = BN_CTX_get(param_5);
  a_00 = BN_CTX_get(param_5);
  a_01 = BN_CTX_get(param_5);
  if ((a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
LAB_00100240:
    BN_clear(a_00);
    BN_clear(a_01);
    BN_clear(a);
  }
  else {
    if (a_01 != (BIGNUM *)0x0) {
      BN_set_flags(a_00,4);
      BN_set_flags(a_01,4);
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 == 0) {
        lVar3 = BN_secure_new();
        *(long *)(param_1 + 0x40) = lVar3;
        lVar2 = lVar3;
        if (*(long *)(param_1 + 0x48) == 0) {
LAB_00100220:
          lVar2 = BN_secure_new(lVar3);
          lVar3 = *(long *)(param_1 + 0x40);
          *(long *)(param_1 + 0x48) = lVar2;
          if (lVar3 == 0) goto LAB_00100240;
        }
        if (lVar2 == 0) goto LAB_00100240;
      }
      else if (*(long *)(param_1 + 0x48) == 0) goto LAB_00100220;
      BN_set_flags(lVar3,4);
      BN_set_flags(*(undefined8 *)(param_1 + 0x48),4);
      iVar1 = ossl_bn_rsa_fips186_4_gen_prob_primes
                        (*(undefined8 *)(param_1 + 0x40),a_00,0,0,0,0,0,param_3,param_4,param_5,
                         param_6);
      if (iVar1 != 0) {
        do {
          do {
            iVar1 = ossl_bn_rsa_fips186_4_gen_prob_primes
                              (*(undefined8 *)(param_1 + 0x48),a_01,0,0,0,0,0,param_3,param_4,
                               param_5,param_6);
            if (iVar1 == 0) goto LAB_00100240;
            iVar1 = ossl_rsa_check_pminusq_diff(a,a_00,a_01);
            if (iVar1 < 0) goto LAB_00100240;
          } while (iVar1 == 0);
          iVar1 = ossl_rsa_check_pminusq_diff
                            (a,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
          if (iVar1 < 0) goto LAB_00100240;
        } while (iVar1 == 0);
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        uVar4 = 1;
        BN_clear(a_00);
        BN_clear(a_01);
        BN_clear(a);
        goto LAB_0010027d;
      }
      goto LAB_00100240;
    }
    BN_clear(a_00);
    BN_clear((BIGNUM *)0x0);
    BN_clear(a);
  }
  BN_clear_free(*(BIGNUM **)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  BN_clear_free(*(BIGNUM **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar4 = 0;
LAB_0010027d:
  BN_CTX_end(param_5);
  return uVar4;
}



undefined8 ossl_rsa_sp800_56b_validate_strength(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = ossl_ifc_ffc_compute_security_bits();
  if ((param_2 != 0xffffffff) && (uVar1 != param_2)) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_sp800_56b_gen.c",0xb9,"ossl_rsa_sp800_56b_validate_strength");
    ERR_set_error(4,0xb0,0);
    return 0;
  }
  return 1;
}



undefined4
ossl_rsa_sp800_56b_derive_params_from_pq(long param_1,int param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *d;
  BIGNUM *d_00;
  BIGNUM *n;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  long lVar3;
  undefined4 uVar4;
  
  BN_CTX_start(param_4);
  d = BN_CTX_get(param_4);
  d_00 = BN_CTX_get(param_4);
  n = BN_CTX_get(param_4);
  a = BN_CTX_get(param_4);
  a_00 = BN_CTX_get(param_4);
  if (a_00 == (BIGNUM *)0x0) {
LAB_0010041d:
    pBVar2 = *(BIGNUM **)(param_1 + 0x30);
    uVar4 = 0xffffffff;
  }
  else {
    BN_set_flags(d,4);
    BN_set_flags(d_00,4);
    BN_set_flags(n,4);
    BN_set_flags(a,4);
    BN_set_flags(a_00,4);
    iVar1 = ossl_rsa_get_lcm(param_4,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48)
                             ,n,a_00,d,d_00,a);
    if (iVar1 != 1) goto LAB_0010041d;
    if (param_3 == (BIGNUM *)0x0) {
LAB_001005a0:
      lVar3 = *(long *)(param_1 + 0x50);
      if (lVar3 == 0) {
        lVar3 = BN_secure_new();
        *(long *)(param_1 + 0x50) = lVar3;
        if (lVar3 == 0) goto LAB_0010041d;
      }
      BN_set_flags(lVar3,4);
      iVar1 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x50),*(BIGNUM **)(param_1 + 0x38),d,
                     param_4);
      if (iVar1 != 0) {
        lVar3 = *(long *)(param_1 + 0x58);
        if (lVar3 == 0) {
          lVar3 = BN_secure_new();
          *(long *)(param_1 + 0x58) = lVar3;
          if (lVar3 == 0) goto LAB_0010041d;
        }
        BN_set_flags(lVar3,4);
        iVar1 = BN_div((BIGNUM *)0x0,*(BIGNUM **)(param_1 + 0x58),*(BIGNUM **)(param_1 + 0x38),d_00,
                       param_4);
        if (iVar1 != 0) {
          BN_free(*(BIGNUM **)(param_1 + 0x60));
          lVar3 = BN_secure_new();
          *(long *)(param_1 + 0x60) = lVar3;
          if (lVar3 != 0) {
            BN_set_flags(lVar3,4);
            pBVar2 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_1 + 0x48),
                                    *(BIGNUM **)(param_1 + 0x40),param_4);
            if (pBVar2 != (BIGNUM *)0x0) {
              *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
              uVar4 = 1;
              goto LAB_00100495;
            }
          }
        }
      }
      goto LAB_0010041d;
    }
    BN_free(*(BIGNUM **)(param_1 + 0x30));
    pBVar2 = BN_dup(param_3);
    *(BIGNUM **)(param_1 + 0x30) = pBVar2;
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_clear_free(*(BIGNUM **)(param_1 + 0x38));
      lVar3 = BN_secure_new();
      *(long *)(param_1 + 0x38) = lVar3;
      if (lVar3 != 0) {
        BN_set_flags(lVar3,4);
        pBVar2 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x38),param_3,n,param_4);
        if (pBVar2 != (BIGNUM *)0x0) {
          iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x38));
          if (iVar1 <= param_2 >> 1) {
            pBVar2 = *(BIGNUM **)(param_1 + 0x30);
            uVar4 = 0;
            goto LAB_00100428;
          }
          pBVar2 = *(BIGNUM **)(param_1 + 0x28);
          if (pBVar2 == (BIGNUM *)0x0) {
            pBVar2 = BN_new();
            *(BIGNUM **)(param_1 + 0x28) = pBVar2;
            if (pBVar2 == (BIGNUM *)0x0) goto LAB_0010041d;
          }
          iVar1 = BN_mul(pBVar2,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),param_4);
          if (iVar1 != 0) goto LAB_001005a0;
        }
      }
      goto LAB_0010041d;
    }
    uVar4 = 0xffffffff;
    pBVar2 = (BIGNUM *)0x0;
  }
LAB_00100428:
  BN_free(pBVar2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x28) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  BN_free(*(BIGNUM **)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
LAB_00100495:
  BN_clear(d);
  BN_clear(d_00);
  BN_clear(n);
  BN_clear(a);
  BN_clear(a_00);
  BN_CTX_end(param_4);
  return uVar4;
}



undefined8 ossl_rsa_sp800_56b_pairwise_test(long param_1,BN_CTX *param_2)

{
  int iVar1;
  BIGNUM *r;
  BIGNUM *a;
  undefined8 uVar2;
  
  BN_CTX_start(param_2);
  r = BN_CTX_get(param_2);
  a = BN_CTX_get(param_2);
  if (a != (BIGNUM *)0x0) {
    BN_set_flags(a,4);
    iVar1 = BN_set_word(a,2);
    if (iVar1 != 0) {
      iVar1 = BN_mod_exp(r,a,*(BIGNUM **)(param_1 + 0x30),*(BIGNUM **)(param_1 + 0x28),param_2);
      if (iVar1 != 0) {
        iVar1 = BN_mod_exp(r,r,*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x28),param_2);
        if (iVar1 != 0) {
          iVar1 = BN_cmp(a,r);
          if (iVar1 == 0) {
            uVar2 = 1;
            goto LAB_00100793;
          }
        }
      }
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_sp800_56b_gen.c",0x1c6,"ossl_rsa_sp800_56b_pairwise_test");
    ERR_set_error(4,0xb1,0);
  }
  uVar2 = 0;
LAB_00100793:
  BN_CTX_end(param_2);
  return uVar2;
}



int ossl_rsa_sp800_56b_generate_key
              (long param_1,undefined4 param_2,BIGNUM *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  BN_CTX *c;
  BIGNUM *a;
  
  iVar2 = ossl_rsa_sp800_56b_validate_strength(param_2,0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = RAND_get0_private(*(undefined8 *)(param_1 + 8));
  if (lVar3 == 0) {
    return 0;
  }
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
  if (c == (BN_CTX *)0x0) {
    return 0;
  }
  a = param_3;
  if (param_3 == (BIGNUM *)0x0) {
    a = BN_new();
    if (a == (BIGNUM *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = BN_set_word(a,0x10001);
      if (iVar2 != 0) goto LAB_00100895;
    }
  }
  else {
LAB_00100895:
    do {
      iVar2 = ossl_rsa_fips186_4_gen_prob_primes(param_1,0,param_2,a,c,param_4);
      if (iVar2 == 0) {
LAB_001008ae:
        iVar2 = 0;
        goto LAB_001008b0;
      }
      iVar2 = BN_cmp(*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48));
      if (iVar2 < 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x48) = uVar1;
      }
      iVar2 = ossl_rsa_sp800_56b_derive_params_from_pq(param_1,param_2,a,c);
      if (iVar2 < 0) goto LAB_001008ae;
    } while (iVar2 == 0);
    iVar2 = ossl_rsa_sp800_56b_pairwise_test(param_1,c);
LAB_001008b0:
    if (param_3 != (BIGNUM *)0x0) goto LAB_001008b5;
  }
  BN_free(a);
LAB_001008b5:
  BN_CTX_free(c);
  return iVar2;
}



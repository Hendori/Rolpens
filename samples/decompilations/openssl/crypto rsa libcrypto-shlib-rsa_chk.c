
uint rsa_validate_keypair_multiprime(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *r_02;
  BIGNUM *r_03;
  BN_CTX *ctx;
  undefined8 *puVar5;
  BIGNUM *pBVar6;
  bool bVar7;
  uint local_6c;
  
  if ((((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x48) == 0)) ||
      (*(long *)(param_1 + 0x28) == 0)) ||
     ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_chk.c",0x1f,"rsa_validate_keypair_multiprime");
    ERR_set_error(4,0x93,0);
    return 0;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x88));
    if (iVar4 < 1) {
LAB_0010048f:
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_chk.c",0x28,"rsa_validate_keypair_multiprime");
      ERR_set_error(4,0xa7,0);
      return 0;
    }
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x28));
    iVar1 = ossl_rsa_multip_cap(iVar1);
    if (iVar1 <= iVar4 + 1) goto LAB_0010048f;
  }
  r = BN_new();
  r_00 = BN_new();
  r_01 = BN_new();
  r_02 = BN_new();
  r_03 = BN_new();
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
  if (((r == (BIGNUM *)0x0) || (r_00 == (BIGNUM *)0x0)) ||
     ((r_01 == (BIGNUM *)0x0 ||
      (((r_02 == (BIGNUM *)0x0 || (r_03 == (BIGNUM *)0x0)) || (ctx == (BN_CTX *)0x0)))))) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_chk.c",0x36,"rsa_validate_keypair_multiprime");
    ERR_set_error(4,0x80003,0);
  }
  else {
    iVar1 = BN_is_one(*(undefined8 *)(param_1 + 0x30));
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_chk.c",0x3c,"rsa_validate_keypair_multiprime");
      ERR_set_error(4,0x65,0);
    }
    local_6c = (uint)(iVar1 == 0);
    iVar1 = BN_is_odd(*(undefined8 *)(param_1 + 0x30));
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_chk.c",0x40,"rsa_validate_keypair_multiprime");
      ERR_set_error(4,0x65,0);
      local_6c = 0;
    }
    iVar1 = BN_check_prime(*(undefined8 *)(param_1 + 0x40),ctx,param_2);
    if (iVar1 != 1) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_chk.c",0x46,"rsa_validate_keypair_multiprime");
      ERR_set_error(4,0x80,0);
      local_6c = 0;
    }
    iVar1 = BN_check_prime(*(undefined8 *)(param_1 + 0x48),ctx,param_2);
    if (iVar1 != 1) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_chk.c",0x4c,"rsa_validate_keypair_multiprime");
      ERR_set_error(4,0x81,0);
      local_6c = 0;
    }
    if (iVar4 == 0) {
      iVar1 = BN_mul(r,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),ctx);
      if (iVar1 != 0) {
        iVar1 = BN_cmp(r,*(BIGNUM **)(param_1 + 0x28));
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_chk.c",0x69,"rsa_validate_keypair_multiprime");
          ERR_set_error(4,0x7f,0);
LAB_00100251:
          local_6c = 0;
        }
LAB_00100259:
        pBVar6 = BN_value_one();
        iVar1 = BN_sub(r,*(BIGNUM **)(param_1 + 0x40),pBVar6);
        if (iVar1 != 0) {
          pBVar6 = BN_value_one();
          iVar1 = BN_sub(r_00,*(BIGNUM **)(param_1 + 0x48),pBVar6);
          if (((iVar1 != 0) && (iVar1 = BN_mul(r_02,r,r_00,ctx), iVar1 != 0)) &&
             ((iVar1 = BN_gcd(r_03,r,r_00,ctx), iVar1 != 0 &&
              (iVar1 = BN_div(r_03,(BIGNUM *)0x0,r_02,r_03,ctx), iVar1 != 0)))) {
            iVar1 = 0;
            if (iVar4 != 0) {
              do {
                puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar1);
                pBVar6 = BN_value_one();
                iVar3 = BN_sub(r_01,(BIGNUM *)*puVar5,pBVar6);
                if (((iVar3 == 0) || (iVar3 = BN_mul(r_02,r_03,r_01,ctx), iVar3 == 0)) ||
                   ((iVar3 = BN_gcd(r_03,r_03,r_01,ctx), iVar3 == 0 ||
                    (iVar3 = BN_div(r_03,(BIGNUM *)0x0,r_02,r_03,ctx), iVar3 == 0))))
                goto LAB_00100418;
                iVar1 = iVar1 + 1;
              } while (iVar4 != iVar1);
            }
            iVar1 = BN_mod_mul(r,*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x30),r_03,ctx)
            ;
            if (iVar1 != 0) {
              iVar1 = BN_is_one(r);
              if (iVar1 == 0) {
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_chk.c",0x9d,"rsa_validate_keypair_multiprime");
                ERR_set_error(4,0x7b,0);
                local_6c = 0;
              }
              if (((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x58) == 0)) ||
                 (*(long *)(param_1 + 0x60) == 0)) {
LAB_00100756:
                for (iVar1 = 0; iVar4 != iVar1; iVar1 = iVar1 + 1) {
                  puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar1);
                  pBVar6 = BN_value_one();
                  iVar3 = BN_sub(r,(BIGNUM *)*puVar5,pBVar6);
                  if ((iVar3 == 0) ||
                     (iVar3 = BN_div((BIGNUM *)0x0,r_00,*(BIGNUM **)(param_1 + 0x38),r,ctx),
                     iVar3 == 0)) goto LAB_00100418;
                  iVar3 = BN_cmp(r_00,(BIGNUM *)puVar5[1]);
                  if (iVar3 != 0) {
                    ERR_new();
                    ERR_set_debug("crypto/rsa/rsa_chk.c",0xd5,"rsa_validate_keypair_multiprime");
                    ERR_set_error(4,0xa9,0);
                    local_6c = 0;
                  }
                  pBVar6 = BN_mod_inverse(r,(BIGNUM *)puVar5[3],(BIGNUM *)*puVar5,ctx);
                  if (pBVar6 == (BIGNUM *)0x0) goto LAB_00100418;
                  iVar3 = BN_cmp(r,(BIGNUM *)puVar5[2]);
                  if (iVar3 != 0) {
                    ERR_new();
                    ERR_set_debug("crypto/rsa/rsa_chk.c",0xde,"rsa_validate_keypair_multiprime");
                    ERR_set_error(4,0xa8,0);
                    local_6c = 0;
                  }
                }
                goto LAB_00100420;
              }
              pBVar6 = BN_value_one();
              iVar1 = BN_sub(r,*(BIGNUM **)(param_1 + 0x40),pBVar6);
              if ((iVar1 != 0) &&
                 (iVar1 = BN_div((BIGNUM *)0x0,r_00,*(BIGNUM **)(param_1 + 0x38),r,ctx), iVar1 != 0)
                 ) {
                iVar1 = BN_cmp(r_00,*(BIGNUM **)(param_1 + 0x50));
                if (iVar1 != 0) {
                  ERR_new();
                  ERR_set_debug("crypto/rsa/rsa_chk.c",0xac,"rsa_validate_keypair_multiprime");
                  ERR_set_error(4,0x7c,0);
                  local_6c = 0;
                }
                pBVar6 = BN_value_one();
                iVar1 = BN_sub(r,*(BIGNUM **)(param_1 + 0x48),pBVar6);
                if ((iVar1 != 0) &&
                   (iVar1 = BN_div((BIGNUM *)0x0,r_00,*(BIGNUM **)(param_1 + 0x38),r,ctx),
                   iVar1 != 0)) {
                  iVar1 = BN_cmp(r_00,*(BIGNUM **)(param_1 + 0x58));
                  if (iVar1 != 0) {
                    ERR_new();
                    ERR_set_debug("crypto/rsa/rsa_chk.c",0xba,"rsa_validate_keypair_multiprime");
                    ERR_set_error(4,0x7d,0);
                    local_6c = 0;
                  }
                  pBVar6 = BN_mod_inverse(r,*(BIGNUM **)(param_1 + 0x48),
                                          *(BIGNUM **)(param_1 + 0x40),ctx);
                  if (pBVar6 != (BIGNUM *)0x0) {
                    iVar1 = BN_cmp(r,*(BIGNUM **)(param_1 + 0x60));
                    if (iVar1 != 0) {
                      ERR_new();
                      ERR_set_debug("crypto/rsa/rsa_chk.c",0xc4,"rsa_validate_keypair_multiprime");
                      ERR_set_error(4,0x7e,0);
                      local_6c = 0;
                    }
                    goto LAB_00100756;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar1 = 0;
      do {
        iVar3 = iVar1;
        puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar3);
        iVar1 = BN_check_prime(*puVar5,ctx,param_2);
        if (iVar1 != 1) {
          ERR_new();
          local_6c = 0;
          ERR_set_debug("crypto/rsa/rsa_chk.c",0x54,"rsa_validate_keypair_multiprime");
          ERR_set_error(4,0xaa,0);
        }
        iVar1 = iVar3 + 1;
      } while (iVar4 != iVar3 + 1);
      iVar2 = BN_mul(r,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),ctx);
      iVar1 = 0;
      if (iVar2 != 0) {
        do {
          puVar5 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar1);
          iVar2 = BN_mul(r,r,(BIGNUM *)*puVar5,ctx);
          if (iVar2 == 0) goto LAB_00100418;
          bVar7 = iVar3 != iVar1;
          iVar1 = iVar1 + 1;
        } while (bVar7);
        iVar1 = BN_cmp(r,*(BIGNUM **)(param_1 + 0x28));
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_chk.c",0x67,"rsa_validate_keypair_multiprime");
          ERR_set_error(4,0xac,0);
          goto LAB_00100251;
        }
        goto LAB_00100259;
      }
    }
  }
LAB_00100418:
  local_6c = 0xffffffff;
LAB_00100420:
  BN_free(r);
  BN_free(r_00);
  BN_free(r_01);
  BN_free(r_02);
  BN_free(r_03);
  BN_CTX_free(ctx);
  return local_6c;
}



void ossl_rsa_validate_public(void)

{
  ossl_rsa_sp800_56b_check_public();
  return;
}



void ossl_rsa_validate_private(void)

{
  ossl_rsa_sp800_56b_check_private();
  return;
}



bool ossl_rsa_validate_pairwise(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = rsa_validate_keypair_multiprime(param_1,0);
  return 0 < iVar1;
}



void RSA_check_key_ex(void)

{
  rsa_validate_keypair_multiprime();
  return;
}



int RSA_check_key(RSA *param_1)

{
  int iVar1;
  
  iVar1 = RSA_check_key_ex(param_1,0);
  return iVar1;
}



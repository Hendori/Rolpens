
undefined8 rsa_ossl_init(long param_1)

{
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 6;
  return 1;
}



undefined8 rsa_ossl_finish(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x88));
    if (iVar1 <= iVar3) break;
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x88),iVar3);
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(lVar2 + 0x20));
    iVar3 = iVar3 + 1;
  }
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xa8));
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xb0));
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0xb8));
  return 1;
}



undefined8 rsa_ossl_mod_exp(BIGNUM *param_1,BIGNUM *param_2,long param_3,BN_CTX *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *rem;
  BIGNUM *r;
  BIGNUM *pBVar4;
  BIGNUM *r_00;
  BIGNUM *mod;
  BIGNUM *pBVar5;
  undefined8 *puVar6;
  BIGNUM *pBVar7;
  BN_MONT_CTX *pBVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_4);
  rem = BN_CTX_get(param_4);
  r = BN_CTX_get(param_4);
  pBVar4 = BN_CTX_get(param_4);
  r_00 = BN_CTX_get(param_4);
  if ((r_00 != (BIGNUM *)0x0) &&
     ((iVar2 = 0, *(int *)(param_3 + 0x10) != 1 ||
      (iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_3 + 0x88)), iVar2 - 1U < 3)))) {
    if ((*(uint *)(param_3 + 0xa4) & 4) == 0) {
      if ((*(uint *)(param_3 + 0xa4) & 2) != 0) {
LAB_00100480:
        pBVar8 = BN_MONT_CTX_set_locked
                           ((BN_MONT_CTX **)(param_3 + 0xa8),(int)*(undefined8 *)(param_3 + 0xd0),
                            *(BIGNUM **)(param_3 + 0x28),param_4);
        if (pBVar8 == (BN_MONT_CTX *)0x0) goto LAB_00100360;
      }
LAB_00100139:
      mod = BN_new();
      if (mod != (BIGNUM *)0x0) {
        BN_with_flags(mod,param_2,4);
        iVar1 = BN_div((BIGNUM *)0x0,rem,mod,*(BIGNUM **)(param_3 + 0x48),param_4);
        if ((iVar1 == 0) || (pBVar5 = BN_new(), pBVar5 == (BIGNUM *)0x0)) goto LAB_00100457;
        BN_with_flags(pBVar5,*(undefined8 *)(param_3 + 0x58),4);
        iVar1 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                          (pBVar4,rem,pBVar5,*(undefined8 *)(param_3 + 0x48),param_4,
                           *(undefined8 *)(param_3 + 0xb8));
        if (iVar1 == 0) {
          BN_free(mod);
          BN_free(pBVar5);
        }
        else {
          BN_free(pBVar5);
          iVar1 = BN_div((BIGNUM *)0x0,rem,mod,*(BIGNUM **)(param_3 + 0x40),param_4);
          if (iVar1 != 0) {
            BN_free(mod);
            mod = BN_new();
            if (mod == (BIGNUM *)0x0) goto LAB_00100360;
            BN_with_flags(mod,*(undefined8 *)(param_3 + 0x50),4);
            iVar1 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                              (param_1,rem,mod,*(undefined8 *)(param_3 + 0x40),param_4,
                               *(undefined8 *)(param_3 + 0xb0));
            if (iVar1 != 0) {
              BN_free(mod);
              if (iVar2 == 0) {
LAB_00100500:
                iVar1 = BN_sub(param_1,param_1,pBVar4);
                if (((iVar1 != 0) &&
                    (((iVar1 = BN_is_negative(param_1), iVar1 == 0 ||
                      (iVar1 = BN_add(param_1,param_1,*(BIGNUM **)(param_3 + 0x40)), iVar1 != 0)) &&
                     (iVar1 = BN_mul(rem,param_1,*(BIGNUM **)(param_3 + 0x60),param_4), iVar1 != 0))
                    )) && (mod = BN_new(), mod != (BIGNUM *)0x0)) {
                  BN_with_flags(mod,rem,4);
                  iVar1 = BN_div((BIGNUM *)0x0,param_1,mod,*(BIGNUM **)(param_3 + 0x40),param_4);
                  if (iVar1 == 0) goto LAB_00100358;
                  BN_free(mod);
                  iVar1 = BN_is_negative(param_1);
                  if (((iVar1 == 0) ||
                      (iVar1 = BN_add(param_1,param_1,*(BIGNUM **)(param_3 + 0x40)), iVar1 != 0)) &&
                     ((iVar1 = BN_mul(rem,param_1,*(BIGNUM **)(param_3 + 0x48),param_4), iVar1 != 0
                      && (iVar1 = BN_add(param_1,rem,pBVar4), iVar1 != 0)))) {
                    if (iVar2 != 0) {
                      pBVar4 = BN_new();
                      if (pBVar4 == (BIGNUM *)0x0) goto LAB_00100360;
                      uVar10 = 0;
                      do {
                        puVar6 = (undefined8 *)
                                 OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),
                                                  uVar10 & 0xffffffff);
                        iVar1 = BN_sub(rem,(BIGNUM *)local_58[uVar10],param_1);
                        if ((iVar1 == 0) ||
                           (iVar1 = BN_mul(r,rem,(BIGNUM *)puVar6[2],param_4), iVar1 == 0)) {
LAB_001009ce:
                          BN_free(pBVar4);
                          goto LAB_00100360;
                        }
                        BN_with_flags(pBVar4,r,4);
                        iVar1 = BN_div((BIGNUM *)0x0,rem,pBVar4,(BIGNUM *)*puVar6,param_4);
                        if ((iVar1 == 0) ||
                           ((((iVar1 = BN_is_negative(rem), iVar1 != 0 &&
                              (iVar1 = BN_add(rem,rem,(BIGNUM *)*puVar6), iVar1 == 0)) ||
                             (iVar1 = BN_mul(rem,rem,(BIGNUM *)puVar6[3],param_4), iVar1 == 0)) ||
                            (iVar1 = BN_add(param_1,param_1,rem), iVar1 == 0)))) goto LAB_001009ce;
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < iVar2);
                      BN_free(pBVar4);
                    }
LAB_0010060f:
                    if ((*(BIGNUM **)(param_3 + 0x30) != (BIGNUM *)0x0) &&
                       (*(BIGNUM **)(param_3 + 0x28) != (BIGNUM *)0x0)) {
                      if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) == BN_mod_exp_mont) {
                        iVar2 = BN_mod_exp_mont(r_00,param_1,*(BIGNUM **)(param_3 + 0x30),
                                                *(BIGNUM **)(param_3 + 0x28),param_4,
                                                *(BN_MONT_CTX **)(param_3 + 0xa8));
                      }
                      else {
                        bn_correct_top(param_1);
                        iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                          (r_00,param_1,*(undefined8 *)(param_3 + 0x30),
                                           *(undefined8 *)(param_3 + 0x28),param_4,
                                           *(undefined8 *)(param_3 + 0xa8));
                      }
                      if ((iVar2 == 0) || (iVar2 = BN_sub(r_00,r_00,param_2), iVar2 == 0))
                      goto LAB_00100360;
                      iVar2 = BN_is_zero();
                      if (iVar2 == 0) {
                        iVar2 = BN_div((BIGNUM *)0x0,r_00,r_00,*(BIGNUM **)(param_3 + 0x28),param_4)
                        ;
                        if ((iVar2 == 0) ||
                           ((iVar2 = BN_is_negative(r_00), iVar2 != 0 &&
                            (iVar2 = BN_add(r_00,r_00,*(BIGNUM **)(param_3 + 0x28)), iVar2 == 0))))
                        goto LAB_00100360;
                        iVar2 = BN_is_zero(r_00);
                        if (iVar2 == 0) {
                          mod = BN_new();
                          if (mod == (BIGNUM *)0x0) goto LAB_00100360;
                          BN_with_flags(mod,*(undefined8 *)(param_3 + 0x38),4);
                          iVar2 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                            (param_1,param_2,mod,*(undefined8 *)(param_3 + 0x28),
                                             param_4,*(undefined8 *)(param_3 + 0xa8));
                          if (iVar2 == 0) goto LAB_00100358;
                          BN_free(mod);
                        }
                      }
                    }
                    uVar9 = 1;
                    bn_correct_top(param_1);
                    goto LAB_00100362;
                  }
                }
                goto LAB_00100360;
              }
              mod = BN_new();
              pBVar5 = BN_new();
              if (pBVar5 != (BIGNUM *)0x0) {
                uVar10 = 0;
                if (mod != (BIGNUM *)0x0) {
                  do {
                    pBVar7 = BN_CTX_get(param_4);
                    local_58[uVar10] = (long)pBVar7;
                    if (pBVar7 == (BIGNUM *)0x0) goto LAB_00100344;
                    puVar6 = (undefined8 *)
                             OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),uVar10 & 0xffffffff);
                    BN_with_flags(pBVar5,param_2,4);
                    BN_with_flags(mod,puVar6[1],4);
                    iVar1 = BN_div((BIGNUM *)0x0,rem,pBVar5,(BIGNUM *)*puVar6,param_4);
                    if ((iVar1 == 0) ||
                       (iVar1 = (**(code **)(*(long *)(param_3 + 0x18) + 0x30))
                                          (pBVar7,rem,mod,*puVar6,param_4,puVar6[4]), iVar1 == 0))
                    goto LAB_00100344;
                    uVar10 = uVar10 + 1;
                  } while (uVar10 != (long)iVar2);
                  BN_free(pBVar5);
                  BN_free(mod);
                  goto LAB_00100500;
                }
              }
LAB_00100344:
              BN_free(pBVar5);
            }
          }
LAB_00100358:
          BN_free(mod);
        }
      }
    }
    else {
      mod = BN_new();
      if (mod == (BIGNUM *)0x0) goto LAB_00100360;
      BN_with_flags(mod,*(undefined8 *)(param_3 + 0x40),4);
      pBVar8 = BN_MONT_CTX_set_locked
                         ((BN_MONT_CTX **)(param_3 + 0xb0),(int)*(undefined8 *)(param_3 + 0xd0),mod,
                          param_4);
      if (pBVar8 != (BN_MONT_CTX *)0x0) {
        BN_with_flags(mod,*(undefined8 *)(param_3 + 0x48),4);
        pBVar8 = BN_MONT_CTX_set_locked
                           ((BN_MONT_CTX **)(param_3 + 0xb8),(int)*(undefined8 *)(param_3 + 0xd0),
                            mod,param_4);
        if (pBVar8 != (BN_MONT_CTX *)0x0) {
          iVar1 = 0;
          if (iVar2 != 0) {
            do {
              puVar6 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_3 + 0x88),iVar1);
              BN_with_flags(mod,*puVar6,4);
              pBVar8 = BN_MONT_CTX_set_locked
                                 ((BN_MONT_CTX **)(puVar6 + 4),(int)*(undefined8 *)(param_3 + 0xd0),
                                  mod,param_4);
              if (pBVar8 == (BN_MONT_CTX *)0x0) goto LAB_00100457;
              iVar1 = iVar1 + 1;
            } while (iVar2 != iVar1);
            BN_free(mod);
LAB_00100470:
            if ((*(byte *)(param_3 + 0xa4) & 2) != 0) goto LAB_00100480;
            goto LAB_00100139;
          }
          BN_free(mod);
          if (*(code **)(*(long *)(param_3 + 0x18) + 0x30) != BN_mod_exp_mont) goto LAB_00100470;
          iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x48));
          iVar3 = BN_num_bits(*(BIGNUM **)(param_3 + 0x40));
          if (iVar1 != iVar3) goto LAB_00100470;
          if ((((((((*(byte *)(param_3 + 0xa4) & 2) != 0) &&
                  (pBVar8 = BN_MONT_CTX_set_locked
                                      ((BN_MONT_CTX **)(param_3 + 0xa8),
                                       (int)*(undefined8 *)(param_3 + 0xd0),
                                       *(BIGNUM **)(param_3 + 0x28),param_4),
                  pBVar8 == (BN_MONT_CTX *)0x0)) ||
                 (iVar2 = bn_from_mont_fixed_top
                                    (pBVar4,param_2,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar2 == 0)) ||
                ((iVar2 = bn_to_mont_fixed_top
                                    (pBVar4,pBVar4,*(undefined8 *)(param_3 + 0xb8),param_4),
                 iVar2 == 0 ||
                 (iVar2 = bn_from_mont_fixed_top
                                    (rem,param_2,*(undefined8 *)(param_3 + 0xb0),param_4),
                 iVar2 == 0)))) ||
               ((iVar2 = bn_to_mont_fixed_top(rem,rem,*(undefined8 *)(param_3 + 0xb0),param_4),
                iVar2 == 0 ||
                ((iVar2 = BN_mod_exp_mont_consttime_x2
                                    (pBVar4,pBVar4,*(undefined8 *)(param_3 + 0x58),
                                     *(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0xb8)
                                     ,rem,rem,*(undefined8 *)(param_3 + 0x50),
                                     *(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0xb0)
                                     ,param_4), iVar2 == 0 ||
                 (iVar2 = bn_mod_sub_fixed_top(rem,rem,pBVar4,*(undefined8 *)(param_3 + 0x40)),
                 iVar2 == 0)))))) ||
              (iVar2 = bn_to_mont_fixed_top(rem,rem,*(undefined8 *)(param_3 + 0xb0),param_4),
              iVar2 == 0)) ||
             (((iVar2 = bn_mul_mont_fixed_top
                                  (rem,rem,*(undefined8 *)(param_3 + 0x60),
                                   *(undefined8 *)(param_3 + 0xb0),param_4), iVar2 == 0 ||
               (iVar2 = bn_mul_fixed_top(param_1,rem,*(undefined8 *)(param_3 + 0x48),param_4),
               iVar2 == 0)) ||
              (iVar2 = bn_mod_add_fixed_top(param_1,param_1,pBVar4,*(undefined8 *)(param_3 + 0x28)),
              iVar2 == 0)))) goto LAB_00100360;
          goto LAB_0010060f;
        }
      }
LAB_00100457:
      BN_free(mod);
    }
  }
LAB_00100360:
  uVar9 = 0;
LAB_00100362:
  BN_CTX_end(param_4);
  if (local_58[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int rsa_ossl_public_decrypt(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *r;
  uchar *f;
  BIGNUM *pBVar3;
  BN_MONT_CTX *pBVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2cb,"rsa_ossl_public_decrypt");
    ERR_set_error(4,0x69,0);
    return -1;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x28),*(BIGNUM **)(param_4 + 0x30));
  if (iVar1 < 1) {
    ERR_new();
    uVar6 = 0x2d0;
LAB_00100c63:
    ERR_set_debug("crypto/rsa/rsa_ossl.c",uVar6,"rsa_ossl_public_decrypt");
    ERR_set_error(4,0x65,0);
    return -1;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x30)), 0x40 < iVar1)) {
    ERR_new();
    uVar6 = 0x2d7;
    goto LAB_00100c63;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    f = (uchar *)0x0;
    lVar7 = 0;
    iVar1 = -1;
    goto LAB_00100ca2;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  if (r == (BIGNUM *)0x0) {
    ERR_new();
    f = (uchar *)0x0;
    lVar7 = 0;
    iVar1 = -1;
    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2e2,"rsa_ossl_public_decrypt");
    ERR_set_error(4,0x80003,0);
    goto LAB_00100ca2;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  lVar7 = (long)iVar2;
  f = (uchar *)CRYPTO_malloc(iVar2,"crypto/rsa/rsa_ossl.c",0x2e6);
  if (f != (uchar *)0x0) {
    if (iVar2 < param_1) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2ef,"rsa_ossl_public_decrypt");
      ERR_set_error(4,0x6c,0);
    }
    else {
      pBVar3 = BN_bin2bn(param_2,param_1,ret);
      if (pBVar3 != (BIGNUM *)0x0) {
        iVar1 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
        if (iVar1 < 0) {
          pBVar3 = *(BIGNUM **)(param_4 + 0x28);
          if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
            pBVar4 = BN_MONT_CTX_set_locked
                               ((BN_MONT_CTX **)(param_4 + 0xa8),
                                (int)*(undefined8 *)(param_4 + 0xd0),pBVar3,ctx);
            if (pBVar4 == (BN_MONT_CTX *)0x0) goto LAB_00100d0c;
            pBVar3 = *(BIGNUM **)(param_4 + 0x28);
          }
          iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                            (r,ret,*(undefined8 *)(param_4 + 0x30),pBVar3,ctx,
                             *(undefined8 *)(param_4 + 0xa8));
          if (iVar1 != 0) {
            if (param_5 == 5) {
              puVar5 = (undefined8 *)bn_get_words(r);
              if (((((uint)*puVar5 & 0xf) == 0xc) ||
                  (iVar1 = BN_sub(r,*(BIGNUM **)(param_4 + 0x28),r), iVar1 != 0)) &&
                 (iVar1 = BN_bn2binpad(r,f,iVar2), -1 < iVar1)) {
                iVar1 = RSA_padding_check_X931(param_3,iVar2,f,iVar1,iVar2);
LAB_00100dd8:
                if (iVar1 < 0) {
                  ERR_new();
                  ERR_set_debug("crypto/rsa/rsa_ossl.c",0x31c,"rsa_ossl_public_decrypt");
                  ERR_set_error(4,0x72,0);
                }
                goto LAB_00100ca2;
              }
            }
            else {
              iVar1 = BN_bn2binpad(r,f,iVar2);
              if (-1 < iVar1) {
                if (param_5 == 1) {
                  iVar1 = RSA_padding_check_PKCS1_type_1(param_3,iVar2,f,iVar1,iVar2);
                  goto LAB_00100dd8;
                }
                if (param_5 == 3) {
                  memcpy(param_3,f,(long)iVar1);
                  goto LAB_00100ca2;
                }
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_ossl.c",0x318,"rsa_ossl_public_decrypt");
                ERR_set_error(4,0x76,0);
              }
            }
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2f7,"rsa_ossl_public_decrypt");
          ERR_set_error(4,0x84,0);
        }
      }
    }
  }
LAB_00100d0c:
  iVar1 = -1;
LAB_00100ca2:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(f,lVar7,"crypto/rsa/rsa_ossl.c",0x321);
  return iVar1;
}



undefined4
rsa_ossl_public_encrypt(int param_1,uchar *param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  uchar *to;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  undefined8 uVar7;
  long lVar8;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if (0x4000 < iVar1) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x6c,"rsa_ossl_public_encrypt");
    ERR_set_error(4,0x69,0);
    return 0xffffffff;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x28),*(BIGNUM **)(param_4 + 0x30));
  if (iVar1 < 1) {
    ERR_new();
    uVar7 = 0x71;
LAB_001010a3:
    ERR_set_debug("crypto/rsa/rsa_ossl.c",uVar7,"rsa_ossl_public_encrypt");
    ERR_set_error(4,0x65,0);
    return 0xffffffff;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x30)), 0x40 < iVar1)) {
    ERR_new();
    uVar7 = 0x78;
    goto LAB_001010a3;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    to = (uchar *)0x0;
    lVar8 = 0;
    uVar3 = 0xffffffff;
    goto LAB_001010e2;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  pBVar4 = BN_CTX_get(ctx);
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar1 = iVar1 >> 3;
  lVar8 = (long)iVar1;
  to = (uchar *)CRYPTO_malloc(iVar1,"crypto/rsa/rsa_ossl.c",0x83);
  if ((pBVar4 != (BIGNUM *)0x0) && (to != (uchar *)0x0)) {
    if (param_5 == 3) {
      iVar2 = RSA_padding_add_none(to,iVar1,param_2,param_1);
    }
    else if (param_5 == 4) {
      iVar2 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                        (*(undefined8 *)(param_4 + 8),to,iVar1,param_2,param_1,0,0,0,0);
    }
    else {
      if (param_5 != 1) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ossl.c",0x95,"rsa_ossl_public_encrypt");
        uVar3 = 0xffffffff;
        ERR_set_error(4,0x76,0);
        goto LAB_001010e2;
      }
      iVar2 = ossl_rsa_padding_add_PKCS1_type_2_ex
                        (*(undefined8 *)(param_4 + 8),to,iVar1,param_2,param_1);
    }
    if ((0 < iVar2) && (pBVar5 = BN_bin2bn(to,iVar1,ret), pBVar5 != (BIGNUM *)0x0)) {
      iVar2 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
      if (iVar2 < 0) {
        pBVar5 = *(BIGNUM **)(param_4 + 0x28);
        if ((*(byte *)(param_4 + 0xa4) & 2) != 0) {
          pBVar6 = BN_MONT_CTX_set_locked
                             ((BN_MONT_CTX **)(param_4 + 0xa8),(int)*(undefined8 *)(param_4 + 0xd0),
                              pBVar5,ctx);
          if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_00101077;
          pBVar5 = *(BIGNUM **)(param_4 + 0x28);
        }
        iVar2 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                          (pBVar4,ret,*(undefined8 *)(param_4 + 0x30),pBVar5,ctx,
                           *(undefined8 *)(param_4 + 0xa8));
        if (iVar2 != 0) {
          uVar3 = BN_bn2binpad(pBVar4,param_3,iVar1);
          goto LAB_001010e2;
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ossl.c",0xb8,"rsa_ossl_public_encrypt");
        ERR_set_error(4,0x84,0);
      }
    }
  }
LAB_00101077:
  uVar3 = 0xffffffff;
LAB_001010e2:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(to,lVar8,"crypto/rsa/rsa_ossl.c",0xce);
  return uVar3;
}



int rsa_blinding_convert(BN_BLINDING *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  
  if (param_3 == (BIGNUM *)0x0) {
    iVar1 = BN_BLINDING_convert_ex(param_2,(BIGNUM *)0x0,param_1,param_4);
    return iVar1;
  }
  iVar1 = BN_BLINDING_lock();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = BN_BLINDING_convert_ex(param_2,param_3,param_1,param_4);
  BN_BLINDING_unlock(param_1);
  return iVar1;
}



BIGNUM * rsa_get_blinding_constprop_0(RSA *param_1,undefined4 *param_2,BN_CTX *param_3)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  
  iVar1 = CRYPTO_THREAD_read_lock(param_1[1].e);
  if (iVar1 == 0) {
    return (BIGNUM *)0x0;
  }
  pBVar2 = (BIGNUM *)param_1[1].engine;
  if (pBVar2 == (BIGNUM *)0x0) {
    CRYPTO_THREAD_unlock(param_1[1].e);
    iVar1 = CRYPTO_THREAD_write_lock(param_1[1].e);
    if (iVar1 == 0) {
      return (BIGNUM *)0x0;
    }
    pBVar2 = (BIGNUM *)param_1[1].engine;
    if (pBVar2 != (BIGNUM *)0x0) goto LAB_0010132f;
    pBVar2 = (BIGNUM *)RSA_setup_blinding(param_1,param_3);
    param_1[1].engine = (ENGINE *)pBVar2;
    if (pBVar2 != (BIGNUM *)0x0) goto LAB_0010132f;
  }
  else {
LAB_0010132f:
    iVar1 = BN_BLINDING_is_current_thread(pBVar2);
    if (iVar1 != 0) {
      *param_2 = 1;
      pBVar3 = param_1[1].e;
      goto LAB_0010135a;
    }
    pBVar2 = param_1[1].n;
    *param_2 = 0;
    pBVar3 = param_1[1].e;
    if (pBVar2 != (BIGNUM *)0x0) goto LAB_0010135a;
    CRYPTO_THREAD_unlock(pBVar3);
    iVar1 = CRYPTO_THREAD_write_lock(param_1[1].e);
    if (iVar1 == 0) {
      return (BIGNUM *)0x0;
    }
    pBVar2 = param_1[1].n;
    if (pBVar2 == (BIGNUM *)0x0) {
      pBVar2 = (BIGNUM *)RSA_setup_blinding(param_1,param_3);
      param_1[1].n = pBVar2;
    }
  }
  pBVar3 = param_1[1].e;
LAB_0010135a:
  CRYPTO_THREAD_unlock(pBVar3);
  return pBVar2;
}



undefined4
rsa_ossl_private_encrypt(int param_1,uchar *param_2,undefined8 param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *n;
  uchar *to;
  BIGNUM *pBVar5;
  BN_MONT_CTX *pBVar6;
  BN_BLINDING *b;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_68;
  BIGNUM *local_60;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    to = (uchar *)0x0;
    uVar4 = 0xffffffff;
    local_68 = 0;
    goto LAB_00101637;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  n = BN_CTX_get(ctx);
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar2 = iVar1 + 7;
  if (iVar1 + 7 < 0) {
    iVar2 = iVar1 + 0xe;
  }
  iVar2 = iVar2 >> 3;
  local_68 = (long)iVar2;
  to = (uchar *)CRYPTO_malloc(iVar2,"crypto/rsa/rsa_ossl.c",0x146);
  if ((n != (BIGNUM *)0x0) && (to != (uchar *)0x0)) {
    if (param_5 == 3) {
      iVar1 = RSA_padding_add_none(to,iVar2,param_2,param_1);
    }
    else if (param_5 == 5) {
      iVar1 = RSA_padding_add_X931(to,iVar2,param_2,param_1);
    }
    else {
      if (param_5 != 1) {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ossl.c",0x155,"rsa_ossl_private_encrypt");
        ERR_set_error(4,0x76,0);
        goto LAB_001016ee;
      }
      iVar1 = RSA_padding_add_PKCS1_type_1(to,iVar2,param_2,param_1);
    }
    if ((0 < iVar1) && (pBVar5 = BN_bin2bn(to,iVar2,ret), pBVar5 != (BIGNUM *)0x0)) {
      iVar1 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x28));
      if (iVar1 < 0) {
        uVar3 = *(uint *)(param_4 + 0xa4);
        if ((uVar3 & 2) != 0) {
          pBVar6 = BN_MONT_CTX_set_locked
                             ((BN_MONT_CTX **)(param_4 + 0xa8),(int)*(undefined8 *)(param_4 + 0xd0),
                              *(BIGNUM **)(param_4 + 0x28),ctx);
          if (pBVar6 == (BN_MONT_CTX *)0x0) goto LAB_001016ee;
          uVar3 = *(uint *)(param_4 + 0xa4);
        }
        local_60 = (BIGNUM *)0x0;
        b = (BN_BLINDING *)0x0;
        if ((uVar3 & 0x80) == 0) {
          local_60 = (BIGNUM *)0x0;
          b = (BN_BLINDING *)rsa_get_blinding_constprop_0(param_4,&local_44,ctx);
          if (b == (BN_BLINDING *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_ossl.c",0x16c,"rsa_ossl_private_encrypt");
            ERR_set_error(4,0xc0103,0);
          }
          else {
            if ((local_44 == 0) && (local_60 = BN_CTX_get(ctx), local_60 == (BIGNUM *)0x0)) {
              ERR_new();
              uVar7 = 0x173;
              goto LAB_001017ab;
            }
            iVar1 = rsa_blinding_convert(b,ret,local_60,ctx);
            if (iVar1 != 0) {
              uVar3 = *(uint *)(param_4 + 0xa4);
              goto LAB_0010158f;
            }
          }
        }
        else {
LAB_0010158f:
          if ((((uVar3 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
             (((*(long *)(param_4 + 0x40) == 0 ||
               (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
                (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
            pBVar5 = BN_new();
            if (pBVar5 == (BIGNUM *)0x0) {
              ERR_new();
              uVar7 = 0x184;
LAB_001017ab:
              ERR_set_debug("crypto/rsa/rsa_ossl.c",uVar7,"rsa_ossl_private_encrypt");
              ERR_set_error(4,0x80003,0);
            }
            else if (*(long *)(param_4 + 0x38) == 0) {
              ERR_new();
              ERR_set_debug("crypto/rsa/rsa_ossl.c",0x188,"rsa_ossl_private_encrypt");
              ERR_set_error(4,0xb3,0);
              BN_free(pBVar5);
            }
            else {
              BN_with_flags(pBVar5,*(long *)(param_4 + 0x38),4);
              iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                (n,ret,pBVar5,*(undefined8 *)(param_4 + 0x28),ctx,
                                 *(undefined8 *)(param_4 + 0xa8));
              if (iVar1 != 0) {
                BN_free(pBVar5);
                goto LAB_001015ed;
              }
              BN_free(pBVar5);
            }
          }
          else {
            iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(n,ret,param_4,ctx);
            if (iVar1 != 0) {
LAB_001015ed:
              if (b != (BN_BLINDING *)0x0) {
                BN_set_flags(n,4);
                iVar1 = BN_BLINDING_invert_ex(n,local_60,b,ctx);
                if (iVar1 == 0) goto LAB_001016ee;
              }
              if (param_5 == 5) {
                iVar1 = BN_sub(ret,*(BIGNUM **)(param_4 + 0x28),n);
                if (iVar1 == 0) goto LAB_001016ee;
                iVar1 = BN_cmp(n,ret);
                if (0 < iVar1) {
                  n = ret;
                }
              }
              uVar4 = BN_bn2binpad(n,param_3,iVar2);
              goto LAB_00101637;
            }
          }
        }
      }
      else {
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_ossl.c",0x160,"rsa_ossl_private_encrypt");
        ERR_set_error(4,0x84,0);
      }
    }
  }
LAB_001016ee:
  uVar4 = 0xffffffff;
LAB_00101637:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(to,local_68,"crypto/rsa/rsa_ossl.c",0x1ae);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong rsa_ossl_private_decrypt(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  BIGNUM *n;
  uchar *data;
  BIGNUM *pBVar4;
  EVP_MD *type;
  HMAC_CTX *ctx_00;
  BN_MONT_CTX *pBVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  long in_FS_OFFSET;
  BN_BLINDING *local_c8;
  size_t local_c0;
  BIGNUM *local_b0;
  int local_90 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90[0] = 0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  if (((*(byte *)(param_4 + 0xa4) & 0x20) != 0) && (param_5 == 1)) {
    param_5 = 8;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 8));
  if (ctx == (BN_CTX *)0x0) {
    data = (uchar *)0x0;
    uVar6 = 0xffffffff;
    local_c0 = 0;
    goto LAB_00101b98;
  }
  BN_CTX_start(ctx);
  pBVar3 = BN_CTX_get(ctx);
  n = BN_CTX_get(ctx);
  if (n == (BIGNUM *)0x0) {
    ERR_new();
    data = (uchar *)0x0;
    uVar6 = 0xffffffff;
    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x224,"rsa_ossl_private_decrypt");
    ERR_set_error(4,0x80003,0);
    local_c0 = 0;
    goto LAB_00101b98;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28));
  iVar8 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar8 = iVar1 + 7;
  }
  iVar8 = iVar8 >> 3;
  local_c0 = (size_t)iVar8;
  data = (uchar *)CRYPTO_malloc(iVar8,"crypto/rsa/rsa_ossl.c",0x228);
  if (data != (uchar *)0x0) {
    if (iVar8 < param_1) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_ossl.c",0x231,"rsa_ossl_private_decrypt");
      ERR_set_error(4,0x6c,0);
    }
    else if (param_1 < 1) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_ossl.c",0x236,"rsa_ossl_private_decrypt");
      ERR_set_error(4,0x6f,0);
    }
    else {
      pBVar4 = BN_bin2bn(param_2,param_1,pBVar3);
      if (pBVar4 != (BIGNUM *)0x0) {
        iVar1 = BN_ucmp(pBVar3,*(BIGNUM **)(param_4 + 0x28));
        if (iVar1 < 0) {
          uVar2 = *(uint *)(param_4 + 0xa4);
          if ((uVar2 & 2) != 0) {
            pBVar5 = BN_MONT_CTX_set_locked
                               ((BN_MONT_CTX **)(param_4 + 0xa8),
                                (int)*(undefined8 *)(param_4 + 0xd0),*(BIGNUM **)(param_4 + 0x28),
                                ctx);
            if (pBVar5 == (BN_MONT_CTX *)0x0) goto LAB_00101b8d;
            uVar2 = *(uint *)(param_4 + 0xa4);
          }
          local_c8 = (BN_BLINDING *)0x0;
          local_b0 = (BIGNUM *)0x0;
          if ((uVar2 & 0x80) == 0) {
            local_c8 = (BN_BLINDING *)rsa_get_blinding_constprop_0(param_4,local_90,ctx);
            if (local_c8 == (BN_BLINDING *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/rsa/rsa_ossl.c",0x263,"rsa_ossl_private_decrypt");
              ERR_set_error(4,0xc0103,0);
              goto LAB_00101b8d;
            }
            if (local_90[0] != 0) {
LAB_00101e5a:
              iVar1 = rsa_blinding_convert(local_c8,pBVar3,local_b0,ctx);
              if (iVar1 == 0) goto LAB_00101b8d;
              uVar2 = *(uint *)(param_4 + 0xa4);
              goto LAB_00101ad0;
            }
            local_b0 = BN_CTX_get(ctx);
            if (local_b0 != (BIGNUM *)0x0) goto LAB_00101e5a;
            ERR_new();
            uVar7 = 0x26a;
LAB_00101f2f:
            ERR_set_debug("crypto/rsa/rsa_ossl.c",uVar7,"rsa_ossl_private_decrypt");
            ERR_set_error(4,0x80003,0);
          }
          else {
LAB_00101ad0:
            if ((((uVar2 & 0x20) == 0) && (*(int *)(param_4 + 0x10) != 1)) &&
               (((*(long *)(param_4 + 0x40) == 0 ||
                 (((*(long *)(param_4 + 0x48) == 0 || (*(long *)(param_4 + 0x50) == 0)) ||
                  (*(long *)(param_4 + 0x58) == 0)))) || (*(long *)(param_4 + 0x60) == 0)))) {
              pBVar4 = BN_new();
              if (pBVar4 == (BIGNUM *)0x0) {
                ERR_new();
                uVar7 = 0x27c;
                goto LAB_00101f2f;
              }
              if (*(long *)(param_4 + 0x38) == 0) {
                ERR_new();
                ERR_set_debug("crypto/rsa/rsa_ossl.c",0x280,"rsa_ossl_private_decrypt");
                ERR_set_error(4,0xb3,0);
                BN_free(pBVar4);
              }
              else {
                BN_with_flags(pBVar4,*(long *)(param_4 + 0x38),4);
                iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x30))
                                  (n,pBVar3,pBVar4,*(undefined8 *)(param_4 + 0x28),ctx);
                if (iVar1 != 0) {
                  BN_free(pBVar4);
                  goto LAB_00101af5;
                }
                BN_free(pBVar4);
              }
            }
            else {
              iVar1 = (**(code **)(*(long *)(param_4 + 0x18) + 0x28))(n,pBVar3,param_4);
              if (iVar1 != 0) {
LAB_00101af5:
                if (local_c8 != (BN_BLINDING *)0x0) {
                  BN_set_flags(n,4);
                  iVar1 = BN_BLINDING_invert_ex(n,local_b0,local_c8,ctx);
                  if (iVar1 == 0) goto LAB_00101b8d;
                }
                if (param_5 == 1) {
                  local_90[1] = 0x20;
                  local_68 = (undefined1  [16])0x0;
                  local_58 = (undefined1  [16])0x0;
                  pBVar3 = BN_new();
                  if (pBVar3 == (BIGNUM *)0x0) {
                    ERR_new();
                    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1c1,"derive_kdk");
                    uVar7 = 0x8000f;
LAB_0010211a:
                    ERR_set_error(4,uVar7,0);
                    HMAC_CTX_free(0);
                    EVP_MD_free(0);
                  }
                  else {
                    if (*(long *)(param_4 + 0x38) == 0) {
                      ERR_new();
                      ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1c5,"derive_kdk");
                      uVar7 = 0xb3;
                    }
                    else {
                      BN_with_flags(pBVar3,*(long *)(param_4 + 0x38),4);
                      iVar1 = BN_bn2binpad(pBVar3,data,iVar8);
                      if (-1 < iVar1) {
                        BN_free(pBVar3);
                        type = (EVP_MD *)EVP_MD_fetch(*(undefined8 *)(param_4 + 8),"sha256",0);
                        if (type == (EVP_MD *)0x0) {
                          ERR_new();
                          ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1da,"derive_kdk");
                          uVar7 = 0x8010d;
                          goto LAB_0010211a;
                        }
                        iVar1 = EVP_Digest(data,local_c0,local_68,(uint *)0x0,type,(ENGINE *)0x0);
                        if (iVar1 < 1) {
                          ERR_new();
                          ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1df,"derive_kdk");
                          uVar7 = 0xc0103;
                        }
                        else {
                          ctx_00 = (HMAC_CTX *)HMAC_CTX_new();
                          if (ctx_00 != (HMAC_CTX *)0x0) {
                            iVar1 = HMAC_Init_ex(ctx_00,local_68,0x20,type,(ENGINE *)0x0);
                            if (iVar1 < 1) {
                              ERR_new();
                              uVar7 = 0x1ea;
                            }
                            else {
                              if (param_1 < iVar8) {
                                memset(data,0,(long)(iVar8 - param_1));
                                iVar1 = HMAC_Update(ctx_00,data,(long)(iVar8 - param_1));
                                if (iVar1 < 1) {
                                  ERR_new();
                                  uVar7 = 0x1f1;
                                  goto LAB_00101dc8;
                                }
                              }
                              iVar1 = HMAC_Update(ctx_00,param_2,(long)param_1);
                              if (iVar1 < 1) {
                                ERR_new();
                                uVar7 = 0x1f6;
                              }
                              else {
                                local_90[1] = 0x20;
                                iVar1 = HMAC_Final(ctx_00,local_88,(uint *)(local_90 + 1));
                                if (0 < iVar1) {
                                  HMAC_CTX_free(ctx_00);
                                  EVP_MD_free(type);
                                  iVar1 = BN_bn2binpad(n,data,iVar8);
                                  if (-1 < iVar1) {
                                    uVar2 = ossl_rsa_padding_check_PKCS1_type_2
                                                      (*(undefined8 *)(param_4 + 8),param_3,iVar8,
                                                       data,iVar1,iVar8,local_88);
                                    uVar6 = (ulong)uVar2;
                                    goto LAB_00101e98;
                                  }
                                  goto LAB_00101b8d;
                                }
                                ERR_new();
                                uVar7 = 0x1fc;
                              }
                            }
LAB_00101dc8:
                            ERR_set_debug("crypto/rsa/rsa_ossl.c",uVar7,"derive_kdk");
                            ERR_set_error(4,0xc0103,0);
                            HMAC_CTX_free(ctx_00);
                            EVP_MD_free(type);
                            goto LAB_00101b8d;
                          }
                          ERR_new();
                          ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1e5,"derive_kdk");
                          uVar7 = 0x8000f;
                        }
                        ERR_set_error(4,uVar7,0);
                        HMAC_CTX_free(0);
                        EVP_MD_free(type);
                        goto LAB_00101b8d;
                      }
                      ERR_new();
                      ERR_set_debug("crypto/rsa/rsa_ossl.c",0x1cb,"derive_kdk");
                      uVar7 = 0xc0103;
                    }
                    ERR_set_error(4,uVar7,0);
                    BN_free(pBVar3);
                    HMAC_CTX_free(0);
                    EVP_MD_free(0);
                  }
                }
                else {
                  uVar2 = BN_bn2binpad(n,data,iVar8);
                  uVar6 = (ulong)uVar2;
                  if (-1 < (int)uVar2) {
                    if (param_5 == 4) {
                      uVar2 = RSA_padding_check_PKCS1_OAEP
                                        (param_3,iVar8,data,uVar2,iVar8,(uchar *)0x0,0);
                      uVar6 = (ulong)uVar2;
                    }
                    else if (param_5 == 8) {
                      uVar2 = RSA_padding_check_PKCS1_type_2(param_3,iVar8,data,uVar2,iVar8);
                      uVar6 = (ulong)uVar2;
                    }
                    else {
                      if (param_5 != 3) {
                        ERR_new();
                        ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2ad,"rsa_ossl_private_decrypt");
                        ERR_set_error(4,0x76,0);
                        goto LAB_00101b8d;
                      }
                      memcpy(param_3,data,(long)(int)uVar2);
                    }
LAB_00101e98:
                    ERR_new();
                    ERR_set_debug("crypto/rsa/rsa_ossl.c",0x2b6,"rsa_ossl_private_decrypt");
                    ERR_set_error(4,0x72,0);
                    err_clear_last_constant_time((uint)(uVar6 >> 0x1f) ^ 1);
                    goto LAB_00101b98;
                  }
                }
              }
            }
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_ossl.c",599,"rsa_ossl_private_decrypt");
          ERR_set_error(4,0x84,0);
        }
      }
    }
  }
LAB_00101b8d:
  uVar6 = 0xffffffff;
LAB_00101b98:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  CRYPTO_clear_free(data,local_c0,"crypto/rsa/rsa_ossl.c",0x2bd);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void RSA_set_default_method(RSA_METHOD *meth)

{
  default_RSA_meth = (undefined *)meth;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_METHOD * RSA_get_default_method(void)

{
  return (RSA_METHOD *)default_RSA_meth;
}



undefined1 * RSA_PKCS1_OpenSSL(void)

{
  return rsa_pkcs1_ossl_meth;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_METHOD * RSA_null_method(void)

{
  return (RSA_METHOD *)0x0;
}



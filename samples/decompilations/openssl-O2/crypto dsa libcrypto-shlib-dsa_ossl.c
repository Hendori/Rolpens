
undefined8 dsa_init(long param_1)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}



undefined8 dsa_finish(long param_1)

{
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x80));
  return 1;
}



ulong dsa_do_verify(uchar *param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *r;
  BN_CTX *ctx;
  BIGNUM *pBVar4;
  BN_MONT_CTX *m_ctx;
  ulong uVar5;
  BIGNUM *mod;
  long in_FS_OFFSET;
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(param_4 + 8) == 0) || (*(BIGNUM **)(param_4 + 0x10) == (BIGNUM *)0x0)) ||
     (*(long *)(param_4 + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ossl.c",0x16f,"dsa_do_verify");
    ERR_set_error(10,0x65,0);
  }
  else {
    uVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x10));
    if (((uVar2 & 0xffffffbf) == 0xa0) || (uVar2 == 0x100)) {
      iVar3 = BN_num_bits(*(BIGNUM **)(param_4 + 8));
      if (iVar3 < 0x2711) {
        ret = BN_new();
        ret_00 = BN_new();
        r = BN_new();
        ctx = (BN_CTX *)BN_CTX_new_ex(0);
        if (((ret == (BIGNUM *)0x0) || (ret_00 == (BIGNUM *)0x0)) ||
           ((r == (BIGNUM *)0x0 || (ctx == (BN_CTX *)0x0)))) {
LAB_001001f8:
          ERR_new();
          uVar5 = 0xffffffff;
          ERR_set_debug("crypto/dsa/dsa_ossl.c",0x1c7,"dsa_do_verify");
          ERR_set_error(10,0x80003,0);
        }
        else {
          DSA_SIG_get0(param_3,&local_50,&local_48);
          iVar3 = BN_is_zero(local_50);
          if (((((iVar3 == 0) && (iVar3 = BN_is_negative(local_50), iVar3 == 0)) &&
               (iVar3 = BN_ucmp(local_50,*(BIGNUM **)(param_4 + 0x10)), iVar3 < 0)) &&
              ((iVar3 = BN_is_zero(local_48), iVar3 == 0 &&
               (iVar3 = BN_is_negative(local_48), iVar3 == 0)))) &&
             (iVar3 = BN_ucmp(local_48,*(BIGNUM **)(param_4 + 0x10)), iVar3 < 0)) {
            pBVar4 = BN_mod_inverse(ret_00,local_48,*(BIGNUM **)(param_4 + 0x10),ctx);
            if (pBVar4 != (BIGNUM *)0x0) {
              if ((int)uVar2 >> 3 <= param_2) {
                param_2 = (int)uVar2 >> 3;
              }
              pBVar4 = BN_bin2bn(param_1,param_2,ret);
              if (((pBVar4 != (BIGNUM *)0x0) &&
                  (iVar3 = BN_mod_mul(ret,ret,ret_00,*(BIGNUM **)(param_4 + 0x10),ctx), iVar3 != 0))
                 && (pBVar4 = ret_00,
                    iVar3 = BN_mod_mul(ret_00,local_50,ret_00,*(BIGNUM **)(param_4 + 0x10),ctx),
                    iVar3 != 0)) {
                mod = *(BIGNUM **)(param_4 + 8);
                m_ctx = (BN_MONT_CTX *)0x0;
                if ((*(byte *)(param_4 + 0x78) & 1) != 0) {
                  pBVar4 = (BIGNUM *)(param_4 + 0x80);
                  m_ctx = BN_MONT_CTX_set_locked
                                    ((BN_MONT_CTX **)pBVar4,(int)*(undefined8 *)(param_4 + 0xb0),mod
                                     ,ctx);
                  if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_001001f8;
                  mod = *(BIGNUM **)(param_4 + 8);
                }
                pcVar1 = *(code **)(*(long *)(param_4 + 0xa0) + 0x20);
                if (pcVar1 == (code *)0x0) {
                  iVar3 = BN_mod_exp2_mont(r,*(BIGNUM **)(param_4 + 0x18),ret,
                                           *(BIGNUM **)(param_4 + 0x68),ret_00,mod,ctx,m_ctx);
                }
                else {
                  iVar3 = (*pcVar1)(param_4,r,*(BIGNUM **)(param_4 + 0x18),ret,
                                    *(BIGNUM **)(param_4 + 0x68),ret_00,mod,ctx,m_ctx,pBVar4);
                }
                if ((iVar3 != 0) &&
                   (iVar3 = BN_div((BIGNUM *)0x0,ret,r,*(BIGNUM **)(param_4 + 0x10),ctx), iVar3 != 0
                   )) {
                  iVar3 = BN_ucmp(ret,local_50);
                  uVar5 = (ulong)(iVar3 == 0);
                  goto LAB_0010022d;
                }
              }
            }
            goto LAB_001001f8;
          }
          uVar5 = 0;
        }
LAB_0010022d:
        BN_CTX_free(ctx);
        BN_free(ret);
        BN_free(ret_00);
        BN_free(r);
        goto LAB_00100175;
      }
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_ossl.c",0x17b,"dsa_do_verify");
      ERR_set_error(10,0x67,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/dsa/dsa_ossl.c",0x176,"dsa_do_verify");
      ERR_set_error(10,0x66,0);
    }
  }
  uVar5 = 0xffffffff;
LAB_00100175:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
dsa_sign_setup_isra_0
          (long param_1,BN_CTX *param_2,undefined8 *param_3,BIGNUM *param_4,long param_5,int param_6
          ,int param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  BIGNUM *a;
  int iVar2;
  int iVar3;
  uint uVar4;
  BIGNUM *a_00;
  BIGNUM *r;
  long lVar5;
  BN_MONT_CTX *pBVar6;
  BIGNUM *a_01;
  BIGNUM *r_00;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  BN_CTX *local_50;
  
  if (((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ossl.c",0xe6,"dsa_sign_setup");
    ERR_set_error(10,0x65,0);
    return 0;
  }
  iVar2 = BN_is_zero();
  if ((((iVar2 != 0) || (iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) ||
      ((iVar2 = BN_is_zero(*(undefined8 *)(param_1 + 0x18)), iVar2 != 0 ||
       ((iVar2 = BN_is_negative(*(undefined8 *)(param_1 + 8)), iVar2 != 0 ||
        (iVar2 = BN_is_negative(*(undefined8 *)(param_1 + 0x10)), iVar2 != 0)))))) ||
     (iVar2 = BN_is_negative(*(undefined8 *)(param_1 + 0x18)), iVar2 != 0)) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ossl.c",0xf1,"dsa_sign_setup");
    ERR_set_error(10,0x70,0);
    return 0;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    ERR_new();
    ERR_set_debug("crypto/dsa/dsa_ossl.c",0xf5,"dsa_sign_setup");
    ERR_set_error(10,0x6f,0);
    return 0;
  }
  a_00 = BN_new();
  r = BN_new();
  if (((a_00 == (BIGNUM *)0x0) || (r == (BIGNUM *)0x0)) ||
     ((local_50 = param_2, param_2 == (BN_CTX *)0x0 &&
      (local_50 = (BN_CTX *)BN_CTX_new_ex(0), local_50 == (BN_CTX *)0x0)))) {
    local_50 = (BN_CTX *)0x0;
  }
  else {
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar3 = bn_get_top(*(undefined8 *)(param_1 + 0x10));
    if (0x7f < iVar2) {
      uVar4 = iVar3 + 2;
      lVar5 = bn_wexpand(a_00,uVar4);
      if ((lVar5 != 0) && (lVar5 = bn_wexpand(r,uVar4), lVar5 != 0)) {
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        if (param_5 == 0) {
          while (iVar3 = ossl_bn_priv_rand_range_fixed_top(a_00,uVar8,0,local_50), iVar3 != 0) {
            iVar3 = ossl_bn_is_word_fixed_top(a_00,0);
            if (iVar3 == 0) goto LAB_00100767;
            uVar8 = *(undefined8 *)(param_1 + 0x10);
          }
        }
        else {
          while( true ) {
            if (param_7 == 1) {
              iVar3 = ossl_gen_deterministic_nonce_rfc6979
                                (a_00,uVar8,*(undefined8 *)(param_1 + 0x70),param_5,(long)param_6,
                                 param_8,param_9,param_10);
            }
            else {
              iVar3 = ossl_bn_gen_dsa_nonce_fixed_top
                                (a_00,uVar8,*(undefined8 *)(param_1 + 0x70),param_5,(long)param_6,
                                 local_50);
            }
            if (iVar3 == 0) goto LAB_00100680;
            iVar3 = ossl_bn_is_word_fixed_top(a_00,0);
            if (iVar3 == 0) break;
            uVar8 = *(undefined8 *)(param_1 + 0x10);
          }
LAB_00100767:
          BN_set_flags(a_00,4);
          BN_set_flags(r,4);
          if (((((*(byte *)(param_1 + 0x78) & 1) == 0) ||
               (pBVar6 = BN_MONT_CTX_set_locked
                                   ((BN_MONT_CTX **)(param_1 + 0x80),
                                    (int)*(undefined8 *)(param_1 + 0xb0),*(BIGNUM **)(param_1 + 8),
                                    local_50), pBVar6 != (BN_MONT_CTX *)0x0)) &&
              (iVar3 = BN_add(r,a_00,*(BIGNUM **)(param_1 + 0x10)), iVar3 != 0)) &&
             (iVar3 = BN_add(a_00,r,*(BIGNUM **)(param_1 + 0x10)), iVar3 != 0)) {
            iVar2 = BN_is_bit_set(r,iVar2);
            uVar7 = (ulong)uVar4;
            BN_consttime_swap((long)iVar2,a_00,r);
            pcVar1 = *(code **)(*(long *)(param_1 + 0xa0) + 0x28);
            if (pcVar1 == (code *)0x0) {
              iVar2 = BN_mod_exp_mont(param_4,*(BIGNUM **)(param_1 + 0x18),a_00,
                                      *(BIGNUM **)(param_1 + 8),local_50,
                                      *(BN_MONT_CTX **)(param_1 + 0x80));
            }
            else {
              iVar2 = (*pcVar1)(param_1,param_4,*(undefined8 *)(param_1 + 0x18),a_00,
                                *(undefined8 *)(param_1 + 8),local_50,
                                *(undefined8 *)(param_1 + 0x80),uVar7);
            }
            if ((iVar2 != 0) &&
               (iVar2 = BN_div((BIGNUM *)0x0,param_4,param_4,*(BIGNUM **)(param_1 + 0x10),local_50),
               iVar2 != 0)) {
              a = *(BIGNUM **)(param_1 + 0x10);
              a_01 = BN_new();
              if (a_01 != (BIGNUM *)0x0) {
                BN_CTX_start(local_50);
                r_00 = BN_CTX_get(local_50);
                if (((r_00 != (BIGNUM *)0x0) && (iVar2 = BN_set_word(a_01,2), iVar2 != 0)) &&
                   ((iVar2 = BN_sub(r_00,a,a_01), iVar2 != 0 &&
                    (iVar2 = BN_mod_exp_mont(a_01,a_00,r_00,a,local_50,(BN_MONT_CTX *)0x0),
                    iVar2 != 0)))) {
                  uVar9 = 1;
                  BN_CTX_end(local_50);
                  BN_clear_free((BIGNUM *)*param_3);
                  *param_3 = a_01;
                  goto LAB_001006b0;
                }
                BN_free(a_01);
                BN_CTX_end(local_50);
              }
            }
          }
        }
      }
    }
  }
LAB_00100680:
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_ossl.c",0x15b,"dsa_sign_setup");
  ERR_set_error(10,0x80003,0);
  uVar9 = 0;
LAB_001006b0:
  if (param_2 != local_50) {
    BN_CTX_free(local_50);
  }
  BN_clear_free(a_00);
  BN_clear_free(r);
  return uVar9;
}



void dsa_sign_setup_no_digest(void)

{
  dsa_sign_setup_isra_0();
  return;
}



void DSA_set_default_method(DSA_METHOD *param_1)

{
  default_DSA_method = (undefined *)param_1;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA_METHOD * DSA_get_default_method(void)

{
  return (DSA_METHOD *)default_DSA_method;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA_METHOD * DSA_OpenSSL(void)

{
  return (DSA_METHOD *)openssl_dsa_meth;
}



DSA_SIG * ossl_dsa_do_sign_int
                    (uchar *param_1,int param_2,long param_3,undefined4 param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  DSA_SIG *a;
  BIGNUM *pBVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a_00;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *pBVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  int local_54;
  BIGNUM *local_48;
  long local_40;
  
  ctx = *(BN_CTX **)(param_3 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  if (((ctx == (BN_CTX *)0x0) || (ctx = *(BN_CTX **)(param_3 + 0x10), ctx == (BN_CTX *)0x0)) ||
     (ctx = *(BN_CTX **)(param_3 + 0x18), ctx == (BN_CTX *)0x0)) {
    pBVar3 = (BIGNUM *)0x0;
    a = (DSA_SIG *)0x0;
    uVar5 = 0x65;
  }
  else if (*(long *)(param_3 + 0x70) == 0) {
    pBVar3 = (BIGNUM *)0x0;
    a = (DSA_SIG *)0x0;
    uVar5 = 0x6f;
    ctx = (BN_CTX *)0x0;
  }
  else {
    a = DSA_SIG_new();
    if (a == (DSA_SIG *)0x0) {
      pBVar3 = (BIGNUM *)0x0;
      ctx = (BN_CTX *)0x0;
      uVar5 = 0x80003;
    }
    else {
      pBVar3 = BN_new();
      a->r = pBVar3;
      pBVar3 = BN_new();
      a->s = pBVar3;
      if (((a->r == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) ||
         (ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_3 + 0xb8)), ctx == (BN_CTX *)0x0)) {
        pBVar3 = (BIGNUM *)0x0;
        uVar5 = 0x80003;
        ctx = (BN_CTX *)0x0;
      }
      else {
        ret = BN_CTX_get(ctx);
        a_00 = BN_CTX_get(ctx);
        r = BN_CTX_get(ctx);
        r_00 = BN_CTX_get(ctx);
        if (r_00 == (BIGNUM *)0x0) {
          uVar5 = 0x80003;
          pBVar3 = (BIGNUM *)0x0;
        }
        else {
          local_54 = 10;
          do {
            iVar1 = dsa_sign_setup_isra_0
                              (param_3,ctx,&local_48,a->r,param_1,param_2,param_4,param_5,param_6,
                               param_7);
            if (iVar1 == 0) {
LAB_00100b76:
              uVar5 = 0x80003;
              pBVar3 = local_48;
              goto LAB_00100b92;
            }
            iVar2 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
            iVar1 = iVar2 + 7;
            if (iVar2 + 7 < 0) {
              iVar1 = iVar2 + 0xe;
            }
            if (iVar1 >> 3 < param_2) {
              iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
              param_2 = iVar1 + 0xe;
              if (-1 < iVar1 + 7) {
                param_2 = iVar1 + 7;
              }
              param_2 = param_2 >> 3;
            }
            pBVar3 = BN_bin2bn(param_1,param_2,ret);
            if (pBVar3 == (BIGNUM *)0x0) goto LAB_00100b76;
            do {
              iVar1 = BN_num_bits(*(BIGNUM **)(param_3 + 0x10));
              iVar1 = BN_priv_rand_ex(a_00,iVar1 + -1,0xffffffff,0,0,ctx);
              if (iVar1 == 0) goto LAB_00100b76;
              iVar1 = BN_is_zero(a_00);
            } while (iVar1 != 0);
            BN_set_flags(a_00,4);
            BN_set_flags(r,4);
            BN_set_flags(r_00,4);
            iVar1 = BN_mod_mul(r_00,a_00,*(BIGNUM **)(param_3 + 0x70),*(BIGNUM **)(param_3 + 0x10),
                               ctx);
            pBVar3 = local_48;
            if (((iVar1 == 0) ||
                (iVar1 = BN_mod_mul(r_00,r_00,a->r,*(BIGNUM **)(param_3 + 0x10),ctx), iVar1 == 0))
               || ((iVar1 = BN_mod_mul(r,a_00,ret,*(BIGNUM **)(param_3 + 0x10),ctx), iVar1 == 0 ||
                   ((((iVar1 = BN_mod_add_quick(a->s,r_00,r,*(BIGNUM **)(param_3 + 0x10)),
                      iVar1 == 0 ||
                      (iVar1 = BN_mod_mul(a->s,a->s,pBVar3,*(BIGNUM **)(param_3 + 0x10),ctx),
                      iVar1 == 0)) ||
                     (pBVar4 = BN_mod_inverse(a_00,a_00,*(BIGNUM **)(param_3 + 0x10),ctx),
                     pBVar4 == (BIGNUM *)0x0)) ||
                    (iVar1 = BN_mod_mul(a->s,a->s,a_00,*(BIGNUM **)(param_3 + 0x10),ctx), iVar1 == 0
                    )))))) {
              uVar5 = 0x80003;
              goto LAB_00100b92;
            }
            iVar1 = BN_is_zero(a->r);
            if ((iVar1 == 0) && (iVar1 = BN_is_zero(a->s), iVar1 == 0)) goto LAB_00100bc9;
            local_54 = local_54 + -1;
          } while (local_54 != 0);
          uVar5 = 0x74;
        }
      }
    }
  }
LAB_00100b92:
  ERR_new();
  ERR_set_debug("crypto/dsa/dsa_ossl.c",0xc3,"ossl_dsa_do_sign_int");
  ERR_set_error(10,uVar5,0);
  DSA_SIG_free(a);
  a = (DSA_SIG *)0x0;
LAB_00100bc9:
  BN_CTX_free(ctx);
  BN_clear_free(pBVar3);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return a;
}



void dsa_do_sign(void)

{
  ossl_dsa_do_sign_int();
  return;
}




undefined8
ecdsa_sign_setup(EC_KEY *param_1,BN_CTX *param_2,undefined8 *param_3,undefined8 *param_4,
                long param_5,int param_6,int param_7,undefined8 param_8,undefined8 param_9,
                undefined8 param_10)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  BIGNUM *pBVar3;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  long lVar4;
  BN_CTX *ctx;
  undefined8 uVar5;
  EC_POINT *local_50;
  
  if ((param_1 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_1), group == (EC_GROUP *)0x0))
  {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x94,"ecdsa_sign_setup");
    ERR_set_error(0x10,0xc0102,0);
    return 0;
  }
  pBVar3 = EC_KEY_get0_private_key(param_1);
  if (pBVar3 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x98,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x7d,0);
    return 0;
  }
  iVar1 = EC_KEY_can_sign(param_1);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x9d,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x9f,0);
    return 0;
  }
  ctx = param_2;
  if ((param_2 == (BN_CTX *)0x0) &&
     (ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0x50)), ctx == (BN_CTX *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0xa3,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x80003,0);
    return 0;
  }
  a = (BIGNUM *)BN_secure_new();
  a_00 = BN_new();
  a_01 = BN_new();
  if ((a == (BIGNUM *)0x0 || a_00 == (BIGNUM *)0x0) || (a_01 == (BIGNUM *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0xac,"ecdsa_sign_setup");
    ERR_set_error(0x10,0x80003,0);
LAB_00100270:
    local_50 = (EC_POINT *)0x0;
  }
  else {
    local_50 = EC_POINT_new(group);
    if (local_50 == (EC_POINT *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecdsa_ossl.c",0xb0,"ecdsa_sign_setup");
      ERR_set_error(0x10,0x80010,0);
      goto LAB_00100270;
    }
    a_02 = (BIGNUM *)EC_GROUP_get0_order(group);
    if (a_02 == (BIGNUM *)0x0) {
      ERR_new();
      uVar5 = 0xb5;
LAB_001003a1:
      ERR_set_debug("crypto/ec/ecdsa_ossl.c",uVar5,"ecdsa_sign_setup");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      iVar1 = BN_num_bits(a_02);
      if ((((0x3f < iVar1) && (iVar2 = BN_set_bit(a,iVar1), iVar2 != 0)) &&
          (iVar2 = BN_set_bit(a_00,iVar1), iVar2 != 0)) &&
         (iVar1 = BN_set_bit(a_01,iVar1), iVar1 != 0)) {
        lVar4 = (long)param_6;
        do {
          do {
            if (param_5 == 0) {
              iVar1 = ossl_bn_priv_rand_range_fixed_top(a,a_02,0);
            }
            else if (param_7 == 1) {
              iVar1 = ossl_gen_deterministic_nonce_rfc6979
                                (a,a_02,pBVar3,param_5,lVar4,param_8,param_9,param_10);
            }
            else {
              iVar1 = ossl_bn_gen_dsa_nonce_fixed_top(a,a_02,pBVar3,param_5,lVar4,ctx,a_00,lVar4);
            }
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("crypto/ec/ecdsa_ossl.c",0xd8,"ecdsa_sign_setup");
              ERR_set_error(0x10,0x9e,0);
              goto LAB_00100279;
            }
            iVar1 = ossl_bn_is_word_fixed_top(a,0);
          } while (iVar1 != 0);
          iVar1 = EC_POINT_mul(group,local_50,a,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0xdf;
            goto LAB_001003a1;
          }
          iVar1 = EC_POINT_get_affine_coordinates(group,local_50,a_01,0);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0xe4;
            goto LAB_001003a1;
          }
          iVar1 = BN_nnmod(a_00,a_01,a_02,ctx);
          if (iVar1 == 0) {
            ERR_new();
            uVar5 = 0xe9;
            goto LAB_001004d4;
          }
          iVar1 = BN_is_zero(a_00);
        } while (iVar1 != 0);
        iVar1 = ossl_ec_group_do_inverse_ord(group,a,a,ctx);
        if (iVar1 != 0) {
          BN_clear_free((BIGNUM *)*param_4);
          BN_clear_free((BIGNUM *)*param_3);
          *param_4 = a_00;
          *param_3 = a;
          uVar5 = 1;
          goto LAB_0010028c;
        }
        ERR_new();
        uVar5 = 0xf0;
LAB_001004d4:
        ERR_set_debug("crypto/ec/ecdsa_ossl.c",uVar5,"ecdsa_sign_setup");
        ERR_set_error(0x10,0x80003,0);
      }
    }
  }
LAB_00100279:
  uVar5 = 0;
  BN_clear_free(a);
  BN_clear_free(a_00);
LAB_0010028c:
  if (ctx != param_2) {
    BN_CTX_free(ctx);
  }
  EC_POINT_free(local_50);
  BN_clear_free(a_01);
  return uVar5;
}



undefined8 ossl_ecdsa_sign_setup(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x2b,"ossl_ecdsa_sign_setup");
  ERR_set_error(0x10,0xaa,0);
  return 0;
}



undefined8 ossl_ecdsa_sign_sig(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_R8;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_R8 + 0x18) + 0x180);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001005a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x37,"ossl_ecdsa_sign_sig");
  ERR_set_error(0x10,0xaa,0);
  return 0;
}



undefined8 ossl_ecdsa_verify_sig(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long in_RCX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_RCX + 0x18) + 0x188);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x43,"ossl_ecdsa_verify_sig");
  ERR_set_error(0x10,0xaa,0);
  return 0;
}



undefined8
ossl_ecdsa_sign(undefined8 param_1,uchar *param_2,int param_3,uchar ****param_4,int *param_5,
               BIGNUM *param_6,BIGNUM *param_7,EC_KEY *param_8)

{
  int iVar1;
  ECDSA_SIG *sig;
  uchar ****pp;
  uchar ***local_20 [2];
  
  local_20[0] = (uchar ***)param_4;
  if ((param_4 == (uchar ****)0x0) && ((param_6 == (BIGNUM *)0x0 || (param_7 == (BIGNUM *)0x0)))) {
    iVar1 = ECDSA_size(param_8);
    *param_5 = iVar1;
  }
  else {
    sig = ECDSA_do_sign_ex(param_2,param_3,param_6,param_7,param_8);
    if (sig == (ECDSA_SIG *)0x0) {
      *param_5 = 0;
      return 0;
    }
    pp = (uchar ****)local_20[0];
    if ((uchar ****)local_20[0] != (uchar ****)0x0) {
      pp = local_20;
    }
    iVar1 = i2d_ECDSA_SIG(sig,(uchar **)pp);
    *param_5 = iVar1;
    ECDSA_SIG_free(sig);
  }
  return 1;
}



bool ossl_ecdsa_deterministic_sign
               (uchar *param_1,int param_2,uchar *param_3,int *param_4,EC_KEY *param_5,
               undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  BIGNUM *a;
  BIGNUM *a_00;
  int iVar1;
  ECDSA_SIG *sig;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_60 [2];
  BIGNUM *local_50;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  local_60[0] = param_3;
  if (param_3 == (uchar *)0x0) {
    ERR_new(0);
    bVar2 = false;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x6a,"ossl_ecdsa_deterministic_sign");
    ERR_set_error(0x10,0xc0102,0);
  }
  else if (param_7 == 0) {
    ERR_new(0);
    bVar2 = false;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x6e,"ossl_ecdsa_deterministic_sign");
    ERR_set_error(0x10,0x97,0);
  }
  else {
    *param_4 = 0;
    iVar1 = ecdsa_sign_setup(param_5,0,&local_50,&local_48,param_1,param_2,param_6,param_7,param_8,
                             param_9);
    a_00 = local_48;
    a = local_50;
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      sig = ECDSA_do_sign_ex(param_1,param_2,local_50,local_48,param_5);
      bVar2 = sig != (ECDSA_SIG *)0x0;
      if (bVar2) {
        iVar1 = i2d_ECDSA_SIG(sig,local_60);
        *param_4 = iVar1;
        ECDSA_SIG_free(sig);
      }
      BN_clear_free(a);
      BN_clear_free(a_00);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_ecdsa_simple_sign_setup(void)

{
  ecdsa_sign_setup();
  return;
}



ECDSA_SIG *
ossl_ecdsa_simple_sign_sig
          (uchar *param_1,int param_2,BIGNUM *param_3,BIGNUM *param_4,EC_KEY *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  EC_GROUP *pEVar4;
  BIGNUM *pBVar5;
  ECDSA_SIG *sig;
  BIGNUM *pBVar6;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  BIGNUM *local_88;
  int local_60;
  BIGNUM *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  pEVar4 = EC_KEY_get0_group(param_5);
  pBVar5 = EC_KEY_get0_private_key(param_5);
  if (pEVar4 == (EC_GROUP *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x11f,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0xc0102,0);
    goto LAB_00100bf8;
  }
  if (pBVar5 == (BIGNUM *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x123,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x7d,0);
    goto LAB_00100bf8;
  }
  iVar1 = EC_KEY_can_sign(param_5);
  if (iVar1 == 0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x128,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x9f,0);
    goto LAB_00100bf8;
  }
  sig = ECDSA_SIG_new();
  if (sig == (ECDSA_SIG *)0x0) {
    ERR_new();
    sig = (ECDSA_SIG *)0x0;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x12e,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x8002a,0);
    goto LAB_00100bf8;
  }
  pBVar6 = BN_new();
  sig->r = pBVar6;
  pBVar6 = BN_new();
  sig->s = pBVar6;
  if ((sig->r == (BIGNUM *)0x0) || (pBVar6 == (BIGNUM *)0x0)) {
    ERR_new();
    pBVar7 = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x134,"ossl_ecdsa_simple_sign_sig");
    ERR_set_error(0x10,0x80003,0);
    local_88 = (BIGNUM *)0x0;
  }
  else {
    ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_5 + 0x50));
    if ((ctx == (BN_CTX *)0x0) || (local_88 = BN_new(), local_88 == (BIGNUM *)0x0)) {
      ERR_new();
      pBVar7 = (BIGNUM *)0x0;
      ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x13b,"ossl_ecdsa_simple_sign_sig");
      ERR_set_error(0x10,0x80003,0);
      local_88 = (BIGNUM *)0x0;
    }
    else {
      a = (BIGNUM *)EC_GROUP_get0_order(pEVar4);
      if (a == (BIGNUM *)0x0) {
        ERR_new();
        pBVar7 = (BIGNUM *)0x0;
        ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x140,"ossl_ecdsa_simple_sign_sig");
        ERR_set_error(0x10,0x80010,0);
      }
      else {
        uVar2 = BN_num_bits(a);
        if ((int)uVar2 < param_2 * 8) {
          local_60 = uVar2 + 0xe;
          if (-1 < (int)(uVar2 + 7)) {
            local_60 = uVar2 + 7;
          }
          local_60 = local_60 >> 3;
          pBVar7 = BN_bin2bn(param_1,local_60,local_88);
          if (pBVar7 == (BIGNUM *)0x0) {
LAB_00100ceb:
            ERR_new();
            pBVar7 = (BIGNUM *)0x0;
            ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x14b,"ossl_ecdsa_simple_sign_sig");
            ERR_set_error(0x10,0x80003,0);
          }
          else {
            if ((local_60 * 8 <= (int)uVar2) ||
               (iVar1 = BN_rshift(local_88,local_88,8 - (uVar2 & 7)), iVar1 != 0))
            goto LAB_00100a25;
            ERR_new();
            pBVar7 = (BIGNUM *)0x0;
            ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x150,"ossl_ecdsa_simple_sign_sig");
            ERR_set_error(0x10,0x80003,0);
          }
        }
        else {
          pBVar7 = BN_bin2bn(param_1,param_2,local_88);
          local_60 = param_2;
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_00100ceb;
LAB_00100a25:
          iVar1 = 10;
          do {
            if (param_4 != (BIGNUM *)0x0 && param_3 != (BIGNUM *)0x0) {
              pBVar8 = BN_copy(sig->r,param_4);
              pBVar7 = param_3;
              if (pBVar8 != (BIGNUM *)0x0) goto LAB_00100a92;
              ERR_new();
              uVar9 = 0x15e;
LAB_00100e71:
              ERR_set_debug("crypto/ec/ecdsa_ossl.c",uVar9,"ossl_ecdsa_simple_sign_sig");
              ERR_set_error(0x10,0x80003,0);
              pBVar7 = local_48;
              goto LAB_00100bd5;
            }
            iVar3 = ecdsa_sign_setup(param_5,ctx,&local_48,sig,param_1,local_60,0,0,0,0);
            pBVar7 = local_48;
            if (iVar3 == 0) {
              ERR_new();
              ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x157,"ossl_ecdsa_simple_sign_sig");
              ERR_set_error(0x10,0x8002a,0);
              pBVar7 = local_48;
              goto LAB_00100bd5;
            }
LAB_00100a92:
            iVar3 = bn_to_mont_fixed_top(pBVar6,sig->r,*(undefined8 *)(pEVar4 + 0x90),ctx);
            if ((iVar3 == 0) ||
               (iVar3 = bn_mul_mont_fixed_top
                                  (pBVar6,pBVar6,pBVar5,*(undefined8 *)(pEVar4 + 0x90),ctx),
               iVar3 == 0)) {
              ERR_new();
              uVar9 = 0x16c;
              goto LAB_00100e71;
            }
            iVar3 = bn_mod_add_fixed_top(pBVar6,pBVar6,local_88,a);
            if (iVar3 == 0) {
              ERR_new();
              uVar9 = 0x170;
              goto LAB_00100e71;
            }
            iVar3 = bn_to_mont_fixed_top(pBVar6,pBVar6,*(undefined8 *)(pEVar4 + 0x90),ctx);
            if ((iVar3 == 0) ||
               (iVar3 = BN_mod_mul_montgomery
                                  (pBVar6,pBVar6,pBVar7,*(BN_MONT_CTX **)(pEVar4 + 0x90),ctx),
               iVar3 == 0)) {
              ERR_new();
              uVar9 = 0x179;
              goto LAB_00100e71;
            }
            iVar3 = BN_is_zero(pBVar6);
            pBVar7 = local_48;
            if (iVar3 == 0) goto LAB_00100bdf;
            if ((param_3 != (BIGNUM *)0x0) && (param_4 != (BIGNUM *)0x0)) {
              ERR_new();
              ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x183,"ossl_ecdsa_simple_sign_sig");
              ERR_set_error(0x10,0x9d,0);
              pBVar7 = local_48;
              goto LAB_00100bd5;
            }
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          ERR_new();
          ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x188,"ossl_ecdsa_simple_sign_sig");
          ERR_set_error(0x10,0xb0,0);
          pBVar7 = local_48;
        }
      }
    }
  }
LAB_00100bd5:
  ECDSA_SIG_free(sig);
  sig = (ECDSA_SIG *)0x0;
LAB_00100bdf:
  BN_CTX_free(ctx);
  BN_clear_free(local_88);
  BN_clear_free(pBVar7);
LAB_00100bf8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sig;
}



int ossl_ecdsa_verify(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,
                     EC_KEY *param_6)

{
  int iVar1;
  int iVar2;
  ECDSA_SIG *pEVar3;
  uchar *ptr;
  long in_FS_OFFSET;
  ECDSA_SIG *local_58;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_50 = param_4;
  local_58 = ECDSA_SIG_new();
  if (local_58 == (ECDSA_SIG *)0x0) {
    iVar1 = -1;
  }
  else {
    pEVar3 = d2i_ECDSA_SIG(&local_58,&local_50,(long)param_5);
    if (pEVar3 == (ECDSA_SIG *)0x0) {
      iVar1 = -1;
      ptr = local_48;
    }
    else {
      iVar1 = i2d_ECDSA_SIG(local_58,&local_48);
      ptr = local_48;
      if (param_5 == iVar1) {
        iVar2 = memcmp(param_4,local_48,(long)param_5);
        iVar1 = -1;
        if (iVar2 == 0) {
          iVar1 = ECDSA_do_verify(param_2,param_3,local_58,param_6);
          ptr = local_48;
        }
      }
      else {
        iVar1 = -1;
      }
    }
    CRYPTO_free(ptr);
    ECDSA_SIG_free(local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_ecdsa_simple_verify_sig(uchar *param_1,int param_2,undefined8 *param_3,EC_KEY *param_4)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *q;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *b;
  BIGNUM *ret;
  BIGNUM *m;
  BIGNUM *b_00;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  EC_POINT *local_68;
  
  if ((((param_4 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_4), group == (EC_GROUP *)0x0)
       ) || (q = EC_KEY_get0_public_key(param_4), q == (EC_POINT *)0x0)) ||
     (param_3 == (undefined8 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x1ca,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x7c,0);
    return 0xffffffff;
  }
  iVar1 = EC_KEY_can_sign(param_4);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x1cf,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x9f,0);
    return 0xffffffff;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_4 + 0x50));
  if (ctx == (BN_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x1d5,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x80003,0);
    return 0xffffffff;
  }
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  b = BN_CTX_get(ctx);
  ret = BN_CTX_get(ctx);
  m = BN_CTX_get(ctx);
  if (m == (BIGNUM *)0x0) {
    ERR_new();
    uVar4 = 0x1de;
    goto LAB_00101481;
  }
  b_00 = (BIGNUM *)EC_GROUP_get0_order(group);
  if (b_00 == (BIGNUM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x1e4,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x80010,0);
    uVar2 = 0xffffffff;
    local_68 = (EC_POINT *)0x0;
    goto LAB_001011cd;
  }
  iVar1 = BN_is_zero(*param_3);
  if ((((iVar1 != 0) || (iVar1 = BN_is_negative(*param_3), iVar1 != 0)) ||
      ((iVar1 = BN_ucmp((BIGNUM *)*param_3,b_00), -1 < iVar1 ||
       ((iVar1 = BN_is_zero(param_3[1]), iVar1 != 0 ||
        (iVar1 = BN_is_negative(param_3[1]), iVar1 != 0)))))) ||
     (iVar1 = BN_ucmp((BIGNUM *)param_3[1],b_00), -1 < iVar1)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x1eb,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x9c,0);
    local_68 = (EC_POINT *)0x0;
    uVar2 = 0;
    goto LAB_001011cd;
  }
  iVar1 = ossl_ec_group_do_inverse_ord(group,b,param_3[1],ctx);
  if (iVar1 == 0) {
    ERR_new();
    uVar4 = 0x1f1;
LAB_00101481:
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",uVar4,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x80003,0);
  }
  else {
    uVar2 = BN_num_bits(b_00);
    if ((int)uVar2 < param_2 * 8) {
      iVar1 = (int)(uVar2 + 7) / 8;
      pBVar3 = BN_bin2bn(param_1,iVar1,ret);
      if (pBVar3 == (BIGNUM *)0x0) {
LAB_0010150b:
        ERR_new();
        uVar4 = 0x1fc;
      }
      else {
        if ((iVar1 * 8 <= (int)uVar2) || (iVar1 = BN_rshift(ret,ret,8 - (uVar2 & 7)), iVar1 != 0))
        goto LAB_00101396;
        ERR_new();
        uVar4 = 0x201;
      }
      goto LAB_00101481;
    }
    pBVar3 = BN_bin2bn(param_1,param_2,ret);
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_0010150b;
LAB_00101396:
    iVar1 = BN_mod_mul(r,ret,b,b_00,ctx);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x206;
      goto LAB_00101481;
    }
    iVar1 = BN_mod_mul(b,(BIGNUM *)*param_3,b,b_00,ctx);
    if (iVar1 == 0) {
      ERR_new();
      uVar4 = 0x20b;
      goto LAB_00101481;
    }
    local_68 = EC_POINT_new(group);
    if (local_68 != (EC_POINT *)0x0) {
      iVar1 = EC_POINT_mul(group,local_68,r,q,b,ctx);
      if (iVar1 == 0) {
        ERR_new();
        uVar4 = 0x214;
LAB_0010158a:
        ERR_set_debug("crypto/ec/ecdsa_ossl.c",uVar4,"ossl_ecdsa_simple_verify_sig");
        ERR_set_error(0x10,0x80010,0);
      }
      else {
        iVar1 = EC_POINT_get_affine_coordinates(group,local_68,m,0,ctx);
        if (iVar1 == 0) {
          ERR_new();
          uVar4 = 0x219;
          goto LAB_0010158a;
        }
        iVar1 = BN_nnmod(r,m,b_00,ctx);
        if (iVar1 != 0) {
          iVar1 = BN_ucmp(r,(BIGNUM *)*param_3);
          uVar2 = (uint)(iVar1 == 0);
          goto LAB_001011cd;
        }
        ERR_new();
        ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x21e,"ossl_ecdsa_simple_verify_sig");
        ERR_set_error(0x10,0x80003,0);
      }
      uVar2 = 0xffffffff;
      goto LAB_001011cd;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ecdsa_ossl.c",0x210,"ossl_ecdsa_simple_verify_sig");
    ERR_set_error(0x10,0x80010,0);
  }
  local_68 = (EC_POINT *)0x0;
  uVar2 = 0xffffffff;
LAB_001011cd:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  EC_POINT_free(local_68);
  return uVar2;
}



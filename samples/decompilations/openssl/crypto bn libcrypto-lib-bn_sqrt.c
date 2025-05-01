
BIGNUM * BN_mod_sqrt(BIGNUM *ret,BIGNUM *a,BIGNUM *n,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *pBVar6;
  BIGNUM *r_02;
  code *pcVar7;
  undefined8 uVar8;
  int iVar9;
  ulong w;
  
  iVar1 = BN_is_odd(n);
  if ((iVar1 == 0) || (iVar1 = BN_abs_is_word(n,1), iVar1 != 0)) {
    iVar1 = BN_abs_is_word(n);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_sqrt.c",0x2b,"BN_mod_sqrt");
      ERR_set_error(3,0x70,0);
      return (BIGNUM *)0x0;
    }
    if (ret != (BIGNUM *)0x0) {
      iVar1 = BN_is_bit_set(a,0);
LAB_00100063:
      iVar1 = BN_set_word(ret,(long)iVar1);
      if (iVar1 == 0) {
        return (BIGNUM *)0x0;
      }
      return ret;
    }
    pBVar3 = BN_new();
    if (pBVar3 == (BIGNUM *)0x0) {
      return (BIGNUM *)0x0;
    }
    iVar1 = BN_is_bit_set(a,0);
LAB_001000a7:
    iVar1 = BN_set_word(pBVar3,(long)iVar1);
    if (iVar1 == 0) {
      BN_free(pBVar3);
      return (BIGNUM *)0x0;
    }
    return pBVar3;
  }
  iVar1 = BN_is_zero(a);
  if ((iVar1 != 0) || (iVar1 = BN_is_one(a), iVar1 != 0)) {
    if (ret != (BIGNUM *)0x0) {
      iVar1 = BN_is_one(a);
      goto LAB_00100063;
    }
    pBVar3 = BN_new();
    if (pBVar3 == (BIGNUM *)0x0) {
      return (BIGNUM *)0x0;
    }
    iVar1 = BN_is_one(a);
    goto LAB_001000a7;
  }
  BN_CTX_start(ctx);
  pBVar3 = BN_CTX_get(ctx);
  pBVar4 = BN_CTX_get(ctx);
  pBVar5 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  r_01 = BN_CTX_get(ctx);
  if (r_01 != (BIGNUM *)0x0) {
    if (ret == (BIGNUM *)0x0) {
      r_02 = BN_new();
      if (r_02 != (BIGNUM *)0x0) {
        iVar1 = BN_nnmod(pBVar3,a,n,ctx);
        if (iVar1 != 0) goto LAB_001001b8;
LAB_00100278:
        BN_clear_free(r_02);
      }
    }
    else {
      iVar1 = BN_nnmod(pBVar3,a,n,ctx);
      r_02 = ret;
      if (iVar1 != 0) {
LAB_001001b8:
        iVar1 = 1;
        while (iVar2 = BN_is_bit_set(n,iVar1), iVar2 == 0) {
          iVar1 = iVar1 + 1;
        }
        if (iVar1 == 1) {
          iVar1 = BN_rshift(pBVar5,n,2);
          if (iVar1 != 0) {
            pBVar5->neg = 0;
            iVar1 = BN_add_word(pBVar5,1);
            if ((iVar1 != 0) && (iVar1 = BN_mod_exp(r_02,pBVar3,pBVar5,n,ctx), iVar1 != 0)) {
LAB_001003e4:
              iVar1 = BN_mod_sqr(r_00,r_02,n,ctx);
              if (iVar1 != 0) {
                iVar1 = BN_cmp(r_00,pBVar3);
                if (iVar1 == 0) goto LAB_00100283;
                ERR_new();
                uVar8 = 0x161;
LAB_00100426:
                ERR_set_debug("crypto/bn/bn_sqrt.c",uVar8,"BN_mod_sqrt");
                ERR_set_error(3,0x6f,0);
              }
            }
          }
        }
        else if (iVar1 == 2) {
          iVar1 = BN_mod_lshift1_quick(r,pBVar3,n);
          if ((iVar1 != 0) && (iVar1 = BN_rshift(pBVar5,n,3), iVar1 != 0)) {
            pBVar5->neg = 0;
            iVar1 = BN_mod_exp(pBVar4,r,pBVar5,n,ctx);
            if ((iVar1 != 0) &&
               ((((iVar1 = BN_mod_sqr(r_01,pBVar4,n,ctx), iVar1 != 0 &&
                  (iVar1 = BN_mod_mul(r,r,r_01,n,ctx), iVar1 != 0)) &&
                 (iVar1 = BN_sub_word(r,1), iVar1 != 0)) &&
                ((iVar1 = BN_mod_mul(r_00,pBVar3,pBVar4,n,ctx), iVar1 != 0 &&
                 (iVar1 = BN_mod_mul(r_00,r_00,r,n,ctx), iVar1 != 0)))))) {
              pBVar4 = BN_copy(r_02,r_00);
joined_r0x001003de:
              if (pBVar4 != (BIGNUM *)0x0) goto LAB_001003e4;
            }
          }
        }
        else {
          pBVar6 = BN_copy(pBVar5,n);
          if (pBVar6 != (BIGNUM *)0x0) {
            pBVar5->neg = 0;
            w = 2;
            do {
              if (w < 0x16) {
LAB_00100264:
                iVar2 = BN_set_word(r_01,w);
                if (iVar2 == 0) goto LAB_00100273;
              }
              else {
                iVar2 = BN_num_bits(n);
                iVar2 = BN_priv_rand_ex(r_01,iVar2,0,0,0,ctx);
                if (iVar2 == 0) goto LAB_00100273;
                iVar2 = BN_ucmp(r_01,n);
                if (-1 < iVar2) {
                  if (n->neg == 0) {
                    pcVar7 = BN_sub;
                  }
                  else {
                    pcVar7 = BN_add;
                  }
                  iVar2 = (*pcVar7)(r_01,r_01,n);
                  if (iVar2 == 0) goto LAB_00100273;
                }
                iVar2 = BN_is_zero(r_01);
                if (iVar2 != 0) goto LAB_00100264;
              }
              iVar2 = BN_kronecker(r_01,pBVar5,ctx);
              if (iVar2 < -1) goto LAB_00100273;
              if (iVar2 == 0) {
                ERR_new();
                uVar8 = 0xcb;
LAB_001004bb:
                ERR_set_debug("crypto/bn/bn_sqrt.c",uVar8,"BN_mod_sqrt");
                ERR_set_error(3,0x70,0);
                goto LAB_00100273;
              }
              if (iVar2 != 1) {
                if (iVar2 == -1) {
                  iVar2 = BN_rshift(pBVar5,pBVar5,iVar1);
                  if ((iVar2 == 0) || (iVar2 = BN_mod_exp(r_01,r_01,pBVar5,n,ctx), iVar2 == 0))
                  goto LAB_00100273;
                  iVar2 = BN_is_one(r_01);
                  if (iVar2 != 0) {
                    ERR_new();
                    uVar8 = 0xe6;
                    goto LAB_001004bb;
                  }
                  iVar2 = BN_rshift1(r,pBVar5);
                  if (iVar2 == 0) goto LAB_00100273;
                  iVar2 = BN_is_zero(r);
                  if (iVar2 == 0) {
                    iVar2 = BN_mod_exp(r_00,pBVar3,r,n,ctx);
                    if (iVar2 == 0) goto LAB_00100273;
                    iVar2 = BN_is_zero(r_00);
                    if (iVar2 != 0) goto LAB_0010085c;
                  }
                  else {
                    iVar2 = BN_nnmod(r,pBVar3,n,ctx);
                    if (iVar2 == 0) goto LAB_00100273;
                    iVar2 = BN_is_zero(r);
                    if (iVar2 != 0) {
LAB_0010085c:
                      BN_zero_ex(r_02);
                      goto LAB_00100283;
                    }
                    iVar2 = BN_set_word(r_00,1);
                    if (iVar2 == 0) goto LAB_00100273;
                  }
                  iVar2 = BN_mod_sqr(pBVar4,r_00,n,ctx);
                  if ((iVar2 == 0) || (iVar2 = BN_mod_mul(pBVar4,pBVar4,pBVar3,n,ctx), iVar2 == 0))
                  goto LAB_00100273;
                  iVar2 = BN_mod_mul(r_00,r_00,pBVar3,n,ctx);
                  goto joined_r0x001005ff;
                }
                break;
              }
              w = w + 1;
            } while (w != 0x52);
            ERR_new();
            ERR_set_debug("crypto/bn/bn_sqrt.c",0xd7,"BN_mod_sqrt");
            ERR_set_error(3,0x71,0);
          }
        }
LAB_00100273:
        if (ret != r_02) goto LAB_00100278;
      }
    }
  }
  r_02 = (BIGNUM *)0x0;
LAB_00100283:
  BN_CTX_end(ctx);
  return r_02;
joined_r0x001005ff:
  if (iVar2 == 0) goto LAB_00100273;
  iVar2 = BN_is_one(pBVar4);
  if (iVar2 != 0) {
    pBVar4 = BN_copy(r_02,r_00);
    goto joined_r0x001003de;
  }
  iVar9 = 1;
  while( true ) {
    if (iVar1 == iVar9) {
      ERR_new();
      uVar8 = 0x142;
      goto LAB_00100426;
    }
    if (iVar9 == 1) {
      iVar2 = BN_mod_sqr(r,pBVar4,n,ctx);
    }
    else {
      iVar2 = BN_mod_mul(r,r,r,n,ctx);
    }
    if (iVar2 == 0) goto LAB_00100273;
    iVar2 = BN_is_one(r);
    if (iVar2 != 0) break;
    iVar9 = iVar9 + 1;
  }
  pBVar5 = BN_copy(r,r_01);
  if (pBVar5 == (BIGNUM *)0x0) goto LAB_00100273;
  iVar1 = iVar1 - iVar9;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    iVar2 = BN_mod_sqr(r,r,n,ctx);
    if (iVar2 == 0) goto LAB_00100273;
  }
  iVar1 = BN_mod_mul(r_01,r,r,n,ctx);
  if ((iVar1 == 0) || (iVar1 = BN_mod_mul(r_00,r_00,r,n,ctx), iVar1 == 0)) goto LAB_00100273;
  iVar2 = BN_mod_mul(pBVar4,pBVar4,r_01,n,ctx);
  iVar1 = iVar9;
  goto joined_r0x001005ff;
}



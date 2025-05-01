
int RSA_X931_derive_ex(RSA *rsa,BIGNUM *p1,BIGNUM *p2,BIGNUM *q1,BIGNUM *q2,BIGNUM *Xp1,BIGNUM *Xp2,
                      BIGNUM *Xp,BIGNUM *Xq1,BIGNUM *Xq2,BIGNUM *Xq,BIGNUM *e,BN_GENCB *cb)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *pBVar2;
  BIGNUM *r;
  BIGNUM *r_00;
  BIGNUM *r_01;
  BIGNUM *pBVar3;
  BIGNUM *e_00;
  
  if ((rsa == (RSA *)0x0) || (ctx = (BN_CTX *)BN_CTX_new_ex(rsa->version), ctx == (BN_CTX *)0x0)) {
    iVar1 = 0;
    pBVar3 = (BIGNUM *)0x0;
    ctx = (BN_CTX *)0x0;
    goto LAB_00100127;
  }
  BN_CTX_start(ctx);
  pBVar2 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  r_01 = BN_CTX_get(ctx);
  if (r_01 != (BIGNUM *)0x0) {
    e_00 = rsa->d;
    if (rsa->d == (BIGNUM *)0x0) {
      pBVar3 = BN_dup(e);
      rsa->d = pBVar3;
      e_00 = e;
      if (pBVar3 != (BIGNUM *)0x0) goto LAB_00100097;
LAB_001003a0:
      iVar1 = 0;
      goto LAB_00100127;
    }
LAB_00100097:
    if (Xp == (BIGNUM *)0x0) {
LAB_00100220:
      if (Xq == (BIGNUM *)0x0) {
LAB_001001a2:
        if (rsa->q == (BIGNUM *)0x0) goto LAB_001001b4;
LAB_001001a9:
        pBVar3 = rsa->dmp1;
      }
      else {
        if (rsa->dmp1 == (BIGNUM *)0x0) {
LAB_00100150:
          pBVar3 = BN_new();
          rsa->dmp1 = pBVar3;
          if ((pBVar3 == (BIGNUM *)0x0) ||
             (iVar1 = BN_X931_derive_prime_ex(pBVar3,q1,q2,Xq,Xq1,Xq2,e_00,ctx,cb), iVar1 == 0))
          goto LAB_00100110;
          goto LAB_001001a2;
        }
        pBVar3 = rsa->q;
      }
      if (pBVar3 == (BIGNUM *)0x0) {
LAB_001001b4:
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        return 2;
      }
    }
    else {
      if (rsa->q == (BIGNUM *)0x0) {
        pBVar3 = BN_new();
        rsa->q = pBVar3;
        if ((pBVar3 == (BIGNUM *)0x0) ||
           (iVar1 = BN_X931_derive_prime_ex(pBVar3,p1,p2,Xp,Xp1,Xp2,e_00,ctx,cb), iVar1 == 0))
        goto LAB_00100110;
        goto LAB_00100220;
      }
      if (Xq == (BIGNUM *)0x0) goto LAB_001001a9;
      if (rsa->dmp1 == (BIGNUM *)0x0) goto LAB_00100150;
    }
    pBVar3 = BN_new();
    rsa->e = pBVar3;
    if ((pBVar3 != (BIGNUM *)0x0) && (iVar1 = BN_mul(pBVar3,rsa->q,rsa->dmp1,ctx), iVar1 != 0)) {
      pBVar3 = BN_value_one();
      iVar1 = BN_sub(r,rsa->q,pBVar3);
      if (iVar1 != 0) {
        pBVar3 = BN_value_one();
        iVar1 = BN_sub(r_00,rsa->dmp1,pBVar3);
        if ((((iVar1 != 0) && (iVar1 = BN_mul(pBVar2,r,r_00,ctx), iVar1 != 0)) &&
            (iVar1 = BN_gcd(r_01,r,r_00,ctx), iVar1 != 0)) &&
           ((iVar1 = BN_div(pBVar2,(BIGNUM *)0x0,pBVar2,r_01,ctx), iVar1 != 0 &&
            (pBVar3 = (BIGNUM *)BN_CTX_new(), pBVar3 != (BIGNUM *)0x0)))) {
          pBVar2 = BN_mod_inverse((BIGNUM *)0x0,rsa->d,pBVar2,(BN_CTX *)pBVar3);
          rsa->p = pBVar2;
          if (pBVar2 != (BIGNUM *)0x0) {
            pBVar2 = BN_new();
            rsa->dmq1 = pBVar2;
            if ((pBVar2 != (BIGNUM *)0x0) &&
               (iVar1 = BN_div((BIGNUM *)0x0,pBVar2,rsa->p,r,ctx), iVar1 != 0)) {
              pBVar2 = BN_new();
              rsa->iqmp = pBVar2;
              if ((pBVar2 != (BIGNUM *)0x0) &&
                 (iVar1 = BN_div((BIGNUM *)0x0,pBVar2,rsa->p,r_00,ctx), iVar1 != 0)) {
                pBVar2 = BN_mod_inverse((BIGNUM *)0x0,rsa->dmp1,rsa->q,(BN_CTX *)pBVar3);
                (rsa->ex_data).sk = (stack_st_void *)pBVar2;
                if (pBVar2 != (BIGNUM *)0x0) {
                  *(int *)&rsa[1].d = *(int *)&rsa[1].d + 1;
                  iVar1 = 1;
                  goto LAB_00100127;
                }
              }
            }
          }
          goto LAB_001003a0;
        }
      }
    }
  }
LAB_00100110:
  iVar1 = 0;
  pBVar3 = (BIGNUM *)0x0;
LAB_00100127:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  BN_CTX_free((BN_CTX *)pBVar3);
  return iVar1;
}



int RSA_X931_generate_key_ex(RSA *rsa,int bits,BIGNUM *e,BN_GENCB *cb)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *Xp;
  BIGNUM *Xq;
  BIGNUM *pBVar2;
  
  ctx = (BN_CTX *)BN_CTX_new_ex();
  if (ctx == (BN_CTX *)0x0) {
    BN_CTX_end((BN_CTX *)0x0);
    BN_CTX_free((BN_CTX *)0x0);
  }
  else {
    BN_CTX_start(ctx);
    Xp = BN_CTX_get(ctx);
    Xq = BN_CTX_get(ctx);
    if ((Xq != (BIGNUM *)0x0) && (iVar1 = BN_X931_generate_Xpq(Xp,Xq,bits,ctx), iVar1 != 0)) {
      pBVar2 = BN_new();
      rsa->q = pBVar2;
      pBVar2 = BN_new();
      rsa->dmp1 = pBVar2;
      if (((rsa->q != (BIGNUM *)0x0) &&
          (((pBVar2 != (BIGNUM *)0x0 &&
            (iVar1 = BN_X931_generate_prime_ex
                               (rsa->q,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,Xp,e,
                                ctx,cb), iVar1 != 0)) &&
           (iVar1 = BN_X931_generate_prime_ex
                              (rsa->dmp1,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,Xq,
                               e,ctx,cb), iVar1 != 0)))) &&
         (iVar1 = RSA_X931_derive_ex(rsa,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,
                                     (BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,(BIGNUM *)0x0,
                                     (BIGNUM *)0x0,(BIGNUM *)0x0,e,cb), iVar1 != 0)) {
        *(int *)&rsa[1].d = *(int *)&rsa[1].d + 1;
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        return 1;
      }
    }
    BN_CTX_end(ctx);
    BN_CTX_free(ctx);
  }
  return 0;
}



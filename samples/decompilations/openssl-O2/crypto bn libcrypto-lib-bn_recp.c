
void BN_RECP_CTX_init(BN_RECP_CTX *recp)

{
  (recp->N).d = (ulong *)0x0;
  (recp->N).top = 0;
  (recp->N).dmax = 0;
  *(undefined1 (*) [16])&(recp->N).neg = (undefined1  [16])0x0;
  (recp->Nr).top = 0;
  (recp->Nr).dmax = 0;
  (recp->Nr).neg = 0;
  (recp->Nr).flags = 0;
  recp->num_bits = 0;
  recp->shift = 0;
  recp->flags = 0;
  *(undefined4 *)&recp->field_0x3c = 0;
  bn_init();
  bn_init(&recp->Nr);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_RECP_CTX * BN_RECP_CTX_new(void)

{
  BN_RECP_CTX *pBVar1;
  
  pBVar1 = (BN_RECP_CTX *)CRYPTO_zalloc(0x40,"crypto/bn/bn_recp.c",0x18);
  if (pBVar1 != (BN_RECP_CTX *)0x0) {
    bn_init(pBVar1);
    bn_init(&pBVar1->Nr);
    pBVar1->flags = 1;
  }
  return pBVar1;
}



void BN_RECP_CTX_free(BN_RECP_CTX *recp)

{
  if (recp == (BN_RECP_CTX *)0x0) {
    return;
  }
  BN_free(&recp->N);
  BN_free(&recp->Nr);
  if ((recp->flags & 1) == 0) {
    return;
  }
  CRYPTO_free(recp);
  return;
}



int BN_RECP_CTX_set(BN_RECP_CTX *recp,BIGNUM *rdiv,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  iVar1 = BN_is_zero(rdiv);
  if (iVar1 == 0) {
    pBVar2 = BN_copy(&recp->N,rdiv);
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_zero_ex(&recp->Nr);
      iVar1 = BN_num_bits(rdiv);
      recp->shift = 0;
      recp->num_bits = iVar1;
      return 1;
    }
  }
  return 0;
}



int BN_reciprocal(BIGNUM *r,BIGNUM *m,int len,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *a;
  
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_set_bit(a,len);
    if (iVar1 != 0) {
      iVar1 = BN_div(r,(BIGNUM *)0x0,a,m,ctx);
      if (iVar1 != 0) goto LAB_00100176;
    }
  }
  len = -1;
LAB_00100176:
  BN_CTX_end(ctx);
  return len;
}



int BN_div_recp(BIGNUM *dv,BIGNUM *rem,BIGNUM *m,BN_RECP_CTX *recp,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *r;
  
  BN_CTX_start(ctx);
  if (dv == (BIGNUM *)0x0) {
    dv = BN_CTX_get(ctx);
  }
  if (rem == (BIGNUM *)0x0) {
    rem = BN_CTX_get(ctx);
  }
  pBVar3 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  if (r != (BIGNUM *)0x0) {
    iVar1 = BN_ucmp(m,&recp->N);
    if (iVar1 < 0) {
      BN_zero_ex(dv);
      pBVar3 = BN_copy(rem,m);
      if (pBVar3 != (BIGNUM *)0x0) {
        BN_CTX_end(ctx);
        return 1;
      }
      BN_CTX_end(ctx);
      return 0;
    }
    iVar2 = BN_num_bits(m);
    iVar1 = recp->num_bits * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    if (recp->shift != iVar1) {
      iVar2 = BN_reciprocal(&recp->Nr,&recp->N,iVar1,ctx);
      recp->shift = iVar2;
    }
    if ((((iVar2 != -1) && (iVar2 = BN_rshift(pBVar3,m,recp->num_bits), iVar2 != 0)) &&
        (iVar2 = BN_mul(r,pBVar3,&recp->Nr,ctx), iVar2 != 0)) &&
       (iVar1 = BN_rshift(dv,r,iVar1 - recp->num_bits), iVar1 != 0)) {
      dv->neg = 0;
      iVar1 = BN_mul(r,&recp->N,dv,ctx);
      if ((iVar1 != 0) && (iVar1 = BN_usub(rem,m,r), iVar1 != 0)) {
        rem->neg = 0;
        iVar1 = 4;
        while( true ) {
          iVar2 = BN_ucmp(rem,&recp->N);
          if (iVar2 < 0) {
            iVar2 = BN_is_zero(rem);
            iVar1 = 0;
            if (iVar2 == 0) {
              iVar1 = m->neg;
            }
            rem->neg = iVar1;
            iVar1 = 1;
            dv->neg = m->neg ^ (recp->N).neg;
            goto LAB_0010026a;
          }
          iVar1 = iVar1 + -1;
          if (iVar1 == 0) break;
          iVar2 = BN_usub(rem,rem,&recp->N);
          if ((iVar2 == 0) || (iVar2 = BN_add_word(dv,1), iVar2 == 0)) goto LAB_00100268;
        }
        ERR_new();
        ERR_set_debug("crypto/bn/bn_recp.c",0x93,"BN_div_recp");
        ERR_set_error(3,0x65,0);
      }
    }
  }
LAB_00100268:
  iVar1 = 0;
LAB_0010026a:
  BN_CTX_end(ctx);
  return iVar1;
}



int BN_mod_mul_reciprocal(BIGNUM *r,BIGNUM *x,BIGNUM *y,BN_RECP_CTX *recp,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *r_00;
  
  BN_CTX_start(ctx);
  r_00 = BN_CTX_get(ctx);
  if (r_00 == (BIGNUM *)0x0) {
LAB_001004b8:
    iVar1 = 0;
  }
  else {
    if (y != (BIGNUM *)0x0) {
      if (y == x) {
        iVar1 = BN_sqr(r_00,y,ctx);
      }
      else {
        iVar1 = BN_mul(r_00,x,y,ctx);
      }
      x = r_00;
      if (iVar1 == 0) goto LAB_001004b8;
    }
    iVar1 = BN_div_recp((BIGNUM *)0x0,r,x,recp,ctx);
  }
  BN_CTX_end(ctx);
  return iVar1;
}



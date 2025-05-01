
undefined8 bn_x931_derive_pi(BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,BN_GENCB *param_4)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  
  pBVar3 = BN_copy(param_1,param_2);
  if ((pBVar3 != (BIGNUM *)0x0) &&
     ((iVar1 = BN_is_odd(param_1), iVar1 != 0 || (iVar1 = BN_add_word(param_1,1), iVar1 != 0)))) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      BN_GENCB_call(param_4,0,iVar1);
      iVar2 = BN_check_prime(param_1,param_3,param_4);
      if (iVar2 < 0) {
        return 0;
      }
      if (iVar2 != 0) {
        BN_GENCB_call(param_4,2,iVar1);
        return 1;
      }
      iVar2 = BN_add_word(param_1,2);
    } while (iVar2 != 0);
  }
  return 0;
}



int BN_X931_derive_prime_ex
              (BIGNUM *p,BIGNUM *p1,BIGNUM *p2,BIGNUM *Xp,BIGNUM *Xp1,BIGNUM *Xp2,BIGNUM *e,
              BN_CTX *ctx,BN_GENCB *cb)

{
  int iVar1;
  BIGNUM *ret;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *pBVar2;
  
  iVar1 = BN_is_odd(e);
  if (iVar1 == 0) {
    return 0;
  }
  BN_CTX_start(ctx);
  if (p1 == (BIGNUM *)0x0) {
    p1 = BN_CTX_get(ctx);
  }
  if (p2 == (BIGNUM *)0x0) {
    p2 = BN_CTX_get(ctx);
  }
  ret = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  if ((((((a == (BIGNUM *)0x0) || (iVar1 = bn_x931_derive_pi(p1,Xp1,ctx,cb), iVar1 == 0)) ||
        (iVar1 = bn_x931_derive_pi(p2,Xp2,ctx,cb), iVar1 == 0)) ||
       (((iVar1 = BN_mul(r,p1,p2,ctx), iVar1 == 0 ||
         (pBVar2 = BN_mod_inverse(p,p2,p1,ctx), pBVar2 == (BIGNUM *)0x0)) ||
        ((iVar1 = BN_mul(p,p,p2,ctx), iVar1 == 0 ||
         ((pBVar2 = BN_mod_inverse(ret,p1,p2,ctx), pBVar2 == (BIGNUM *)0x0 ||
          (iVar1 = BN_mul(ret,ret,p1,ctx), iVar1 == 0)))))))) ||
      (iVar1 = BN_sub(p,p,ret), iVar1 == 0)) ||
     (((p->neg != 0 && (iVar1 = BN_add(p,p,r), iVar1 == 0)) ||
      (iVar1 = BN_mod_sub(p,p,Xp,r,ctx), iVar1 == 0)))) {
LAB_0010015d:
    iVar1 = 0;
  }
  else {
    do {
      do {
        iVar1 = BN_add(p,p,Xp);
        if (iVar1 == 0) goto LAB_0010015d;
        BN_GENCB_call(cb,0,1);
        pBVar2 = BN_copy(a,p);
        if (((pBVar2 == (BIGNUM *)0x0) || (iVar1 = BN_sub_word(a,1), iVar1 == 0)) ||
           (iVar1 = BN_gcd(ret,a,e,ctx), iVar1 == 0)) goto LAB_0010015d;
        iVar1 = BN_is_one(ret);
        Xp = r;
      } while (iVar1 == 0);
      iVar1 = BN_check_prime(p,ctx,cb);
      if (iVar1 < 0) goto LAB_0010015d;
    } while (iVar1 == 0);
    BN_GENCB_call(cb,3,0);
    iVar1 = 1;
  }
  BN_CTX_end(ctx);
  return iVar1;
}



int BN_X931_generate_Xpq(BIGNUM *Xp,BIGNUM *Xq,int nbits,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *r;
  int iVar3;
  
  if ((0x3ff < nbits) && ((nbits & 0xffU) == 0)) {
    iVar3 = nbits >> 1;
    iVar1 = BN_priv_rand_ex(Xp,iVar3,1,0,0,ctx);
    if (iVar1 != 0) {
      BN_CTX_start(ctx);
      r = BN_CTX_get(ctx);
      if (r != (BIGNUM *)0x0) {
        iVar1 = 0;
        while( true ) {
          iVar2 = BN_priv_rand_ex(Xq,iVar3,1,0,0,ctx);
          if ((iVar2 == 0) || (iVar2 = BN_sub(r,Xp,Xq), iVar2 == 0)) goto LAB_00100442;
          iVar2 = BN_num_bits(r);
          if (iVar3 + -99 <= iVar2) break;
          iVar1 = iVar1 + 1;
          iVar2 = 0;
          if (iVar1 == 1000) {
LAB_00100456:
            BN_CTX_end(ctx);
            return iVar2;
          }
        }
        iVar2 = 1;
        goto LAB_00100456;
      }
LAB_00100442:
      BN_CTX_end(ctx);
    }
  }
  return 0;
}



int BN_X931_generate_prime_ex
              (BIGNUM *p,BIGNUM *p1,BIGNUM *p2,BIGNUM *Xp1,BIGNUM *Xp2,BIGNUM *Xp,BIGNUM *e,
              BN_CTX *ctx,BN_GENCB *cb)

{
  int iVar1;
  uint uVar2;
  
  BN_CTX_start(ctx);
  if (Xp1 == (BIGNUM *)0x0) {
    Xp1 = BN_CTX_get(ctx);
    if (Xp2 == (BIGNUM *)0x0) goto LAB_00100570;
LAB_00100550:
    if ((Xp1 != (BIGNUM *)0x0) && (Xp2 != (BIGNUM *)0x0)) goto LAB_001004b5;
  }
  else {
    if (Xp2 == (BIGNUM *)0x0) {
LAB_00100570:
      Xp2 = BN_CTX_get(ctx);
      goto LAB_00100550;
    }
LAB_001004b5:
    iVar1 = BN_priv_rand_ex(Xp1,0x65,0,0,0,ctx);
    if ((iVar1 != 0) && (iVar1 = BN_priv_rand_ex(Xp2,0x65,0,0,0,ctx), iVar1 != 0)) {
      iVar1 = BN_X931_derive_prime_ex(p,p1,p2,Xp,Xp1,Xp2,e,ctx,cb);
      uVar2 = (uint)(iVar1 != 0);
      goto LAB_001004d2;
    }
  }
  uVar2 = 0;
LAB_001004d2:
  BN_CTX_end(ctx);
  return uVar2;
}



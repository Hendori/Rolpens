
DH * DH_get_1024_160(void)

{
  DH *dh;
  BIGNUM *pBVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh1024_160_p);
    dh->p = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh1024_160_g);
    dh->length = (long)pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh1024_160_q);
    dh->g = pBVar1;
    if (((dh->p != (BIGNUM *)0x0) && (pBVar1 != (BIGNUM *)0x0)) && (dh->length != 0)) {
      return dh;
    }
    DH_free(dh);
  }
  return (DH *)0x0;
}



DH * DH_get_2048_224(void)

{
  DH *dh;
  BIGNUM *pBVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_224_p);
    dh->p = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_224_g);
    dh->length = (long)pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_224_q);
    dh->g = pBVar1;
    if (((dh->p != (BIGNUM *)0x0) && (pBVar1 != (BIGNUM *)0x0)) && (dh->length != 0)) {
      return dh;
    }
    DH_free(dh);
  }
  return (DH *)0x0;
}



DH * DH_get_2048_256(void)

{
  DH *dh;
  BIGNUM *pBVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_256_p);
    dh->p = pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_256_g);
    dh->length = (long)pBVar1;
    pBVar1 = BN_dup((BIGNUM *)&ossl_bignum_dh2048_256_q);
    dh->g = pBVar1;
    if (((dh->p != (BIGNUM *)0x0) && (pBVar1 != (BIGNUM *)0x0)) && (dh->length != 0)) {
      return dh;
    }
    DH_free(dh);
  }
  return (DH *)0x0;
}



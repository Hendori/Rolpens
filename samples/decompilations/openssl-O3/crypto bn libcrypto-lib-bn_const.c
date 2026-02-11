
void BN_get_rfc2409_prime_768(BIGNUM *param_1)

{
  BN_bin2bn(RFC2409_PRIME_768_1,0x60,param_1);
  return;
}



void BN_get_rfc2409_prime_1024(BIGNUM *param_1)

{
  BN_bin2bn(RFC2409_PRIME_1024_0,0x80,param_1);
  return;
}



void BN_get_rfc3526_prime_1536(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_1536_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_1536_p);
  return;
}



void BN_get_rfc3526_prime_2048(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_2048_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_2048_p);
  return;
}



void BN_get_rfc3526_prime_3072(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_3072_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_3072_p);
  return;
}



void BN_get_rfc3526_prime_4096(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_4096_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_4096_p);
  return;
}



void BN_get_rfc3526_prime_6144(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_6144_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_6144_p);
  return;
}



void BN_get_rfc3526_prime_8192(BIGNUM *param_1)

{
  if (param_1 != (BIGNUM *)0x0) {
    BN_copy(param_1,(BIGNUM *)&ossl_bignum_modp_8192_p);
    return;
  }
  BN_dup((BIGNUM *)&ossl_bignum_modp_8192_p);
  return;
}



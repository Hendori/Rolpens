
RSA * RSA_generate_key(int bits,ulong e,callback *callback,void *cb_arg)

{
  int iVar1;
  BN_GENCB *cb;
  RSA *rsa;
  BIGNUM *a;
  uint uVar2;
  ulong uVar3;
  
  cb = (BN_GENCB *)BN_GENCB_new();
  rsa = RSA_new();
  a = BN_new();
  if ((cb != (BN_GENCB *)0x0 && rsa != (RSA *)0x0) && (a != (BIGNUM *)0x0)) {
    uVar3 = 0;
    do {
      if (((e >> (uVar3 & 0x3f) & 1) != 0) && (iVar1 = BN_set_bit(a,(int)uVar3), iVar1 == 0))
      goto LAB_00100077;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar2;
    } while (uVar2 != 0x40);
    BN_GENCB_set_old(cb,callback,cb_arg);
    iVar1 = RSA_generate_key_ex(rsa,bits,a,cb);
    if (iVar1 != 0) {
      BN_free(a);
      BN_GENCB_free(cb);
      return rsa;
    }
  }
LAB_00100077:
  BN_free(a);
  RSA_free(rsa);
  BN_GENCB_free(cb);
  return (RSA *)0x0;
}




DH * DH_generate_parameters(int prime_len,int generator,callback *callback,void *cb_arg)

{
  int iVar1;
  DH *dh;
  BN_GENCB *cb;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    cb = (BN_GENCB *)BN_GENCB_new();
    if (cb == (BN_GENCB *)0x0) {
      DH_free(dh);
      return (DH *)0x0;
    }
    BN_GENCB_set_old(cb,callback,cb_arg);
    iVar1 = DH_generate_parameters_ex(dh,prime_len,generator,cb);
    if (iVar1 != 0) {
      BN_GENCB_free(cb);
      return dh;
    }
    BN_GENCB_free(cb);
    DH_free(dh);
  }
  return (DH *)0x0;
}




DSA * DSA_generate_parameters
                (int bits,uchar *seed,int seed_len,int *counter_ret,ulong *h_ret,callback *callback,
                void *cb_arg)

{
  int iVar1;
  DSA *dsa;
  BN_GENCB *cb;
  
  dsa = DSA_new();
  if (dsa != (DSA *)0x0) {
    cb = (BN_GENCB *)BN_GENCB_new();
    if (cb != (BN_GENCB *)0x0) {
      BN_GENCB_set_old(cb,callback,cb_arg);
      iVar1 = DSA_generate_parameters_ex(dsa,bits,seed,seed_len,counter_ret,h_ret,cb);
      if (iVar1 != 0) {
        BN_GENCB_free(cb);
        return dsa;
      }
      BN_GENCB_free(cb);
    }
    DSA_free(dsa);
  }
  return (DSA *)0x0;
}



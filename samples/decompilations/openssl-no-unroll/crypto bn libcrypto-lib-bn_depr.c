
BIGNUM * BN_generate_prime(BIGNUM *ret,int bits,int safe,BIGNUM *add,BIGNUM *rem,callback *callback,
                          void *cb_arg)

{
  int iVar1;
  BIGNUM *pBVar2;
  long in_FS_OFFSET;
  BN_GENCB BStack_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_GENCB_set_old(&BStack_58,callback,cb_arg);
  if (ret == (BIGNUM *)0x0) {
    ret = BN_new();
    if (ret != (BIGNUM *)0x0) goto LAB_00100048;
  }
  else {
LAB_00100048:
    iVar1 = BN_generate_prime_ex(ret,bits,safe,add,rem,&BStack_58);
    pBVar2 = ret;
    if (iVar1 != 0) goto LAB_00100062;
  }
  pBVar2 = (BIGNUM *)0x0;
  BN_free(ret);
LAB_00100062:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pBVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_is_prime(BIGNUM *p,int nchecks,callback *callback,BN_CTX *ctx,void *cb_arg)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BN_GENCB_set_old(auStack_48,callback,cb_arg);
  iVar1 = ossl_bn_check_prime(p,nchecks,ctx,0,auStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_is_prime_fasttest
              (BIGNUM *p,int nchecks,callback *callback,BN_CTX *ctx,void *cb_arg,
              int do_trial_division)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  BN_GENCB_set_old(auStack_48,callback,cb_arg);
  iVar1 = ossl_bn_check_prime(p,nchecks,ctx,do_trial_division,auStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



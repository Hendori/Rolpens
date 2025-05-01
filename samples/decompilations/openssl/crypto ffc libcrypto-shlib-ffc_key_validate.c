
undefined8 ossl_ffc_validate_public_key_partial(long *param_1,BIGNUM *param_2,uint *param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *a;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  if (((param_1 == (long *)0x0) || (param_2 == (BIGNUM *)0x0)) || (*param_1 == 0)) {
    *param_3 = 0x40;
    return 1;
  }
  ctx = (BN_CTX *)BN_CTX_new_ex(0);
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  if ((a != (BIGNUM *)0x0) && (iVar1 = BN_set_word(a,1), iVar1 != 0)) {
    iVar1 = BN_cmp(param_2,a);
    if (iVar1 < 1) {
      *param_3 = *param_3 | 1;
    }
    pBVar2 = BN_copy(a,(BIGNUM *)*param_1);
    if ((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) {
      iVar1 = BN_cmp(param_2,a);
      if (-1 < iVar1) {
        *param_3 = *param_3 | 2;
      }
      uVar3 = 1;
      goto LAB_00100069;
    }
  }
  uVar3 = 0;
LAB_00100069:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return uVar3;
}



undefined4 ossl_ffc_validate_public_key(undefined8 *param_1,BIGNUM *param_2,uint *param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  undefined4 uVar2;
  
  iVar1 = ossl_ffc_validate_public_key_partial();
  if (iVar1 != 0) {
    if ((*param_3 != 0) || (param_1[1] == 0)) {
      return 1;
    }
    ctx = (BN_CTX *)BN_CTX_new_ex(0);
    if (ctx != (BN_CTX *)0x0) {
      BN_CTX_start(ctx);
      r = BN_CTX_get(ctx);
      uVar2 = 0;
      if ((r != (BIGNUM *)0x0) &&
         (iVar1 = BN_mod_exp(r,param_2,(BIGNUM *)param_1[1],(BIGNUM *)*param_1,ctx), iVar1 != 0)) {
        iVar1 = BN_is_one(r);
        if (iVar1 == 0) {
          *param_3 = *param_3 | 4;
        }
        uVar2 = 1;
      }
      BN_CTX_end(ctx);
      BN_CTX_free(ctx);
      return uVar2;
    }
  }
  return 0;
}



undefined8 ossl_ffc_validate_private_key(BIGNUM *param_1,BIGNUM *param_2,uint *param_3)

{
  int iVar1;
  BIGNUM *b;
  
  *param_3 = 0;
  if ((param_2 == (BIGNUM *)0x0) || (param_1 == (BIGNUM *)0x0)) {
    *param_3 = 0x40;
  }
  else {
    b = BN_value_one();
    iVar1 = BN_cmp(param_2,b);
    if (iVar1 < 0) {
      *param_3 = *param_3 | 0x10;
    }
    else {
      iVar1 = BN_cmp(param_2,param_1);
      if (iVar1 < 0) {
        return 1;
      }
      *param_3 = *param_3 | 0x20;
    }
  }
  return 0;
}



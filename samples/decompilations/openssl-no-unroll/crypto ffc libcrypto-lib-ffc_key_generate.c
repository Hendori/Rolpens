
undefined8
ossl_ffc_generate_private_key
          (undefined8 param_1,long param_2,int param_3,int param_4,BIGNUM *param_5)

{
  bool bVar1;
  int iVar2;
  BIGNUM *r;
  BIGNUM *pBVar3;
  undefined8 uVar4;
  
  iVar2 = BN_num_bits(*(BIGNUM **)(param_2 + 8));
  if (param_4 != 0) {
    if ((param_3 == 0) && (param_3 = *(int *)(param_2 + 0x58), param_3 == 0)) {
      bVar1 = false;
      param_3 = param_4 * 2;
    }
    else {
      bVar1 = SBORROW4(param_3,param_4 * 2) != param_3 + param_4 * -2 < 0;
    }
    if ((iVar2 < param_3) || (bVar1)) {
      return 0;
    }
    r = BN_new();
    if (r != (BIGNUM *)0x0) {
      pBVar3 = BN_value_one();
      iVar2 = BN_lshift(r,pBVar3,param_3);
      if (iVar2 == 0) {
LAB_0010005c:
        uVar4 = 0;
      }
      else {
        iVar2 = BN_cmp(r,*(BIGNUM **)(param_2 + 8));
        pBVar3 = r;
        if (0 < iVar2) {
          pBVar3 = *(BIGNUM **)(param_2 + 8);
        }
        do {
          iVar2 = BN_priv_rand_range_ex(param_5,r,0,param_1);
          if (iVar2 == 0) {
            uVar4 = 0;
            goto LAB_00100084;
          }
          iVar2 = BN_add_word(param_5,1);
          if (iVar2 == 0) goto LAB_0010005c;
          iVar2 = BN_cmp(param_5,pBVar3);
        } while (-1 < iVar2);
        uVar4 = 1;
      }
      goto LAB_00100084;
    }
  }
  r = (BIGNUM *)0x0;
  uVar4 = 0;
LAB_00100084:
  BN_free(r);
  return uVar4;
}



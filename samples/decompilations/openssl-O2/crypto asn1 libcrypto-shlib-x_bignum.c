
uint bn_print(BIO *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = BN_print(param_1,(BIGNUM *)*param_2);
  if (uVar1 == 0) {
    return uVar1;
  }
  iVar2 = BIO_puts(param_1,"\n");
  return (uint)(0 < iVar2);
}



int bn_i2c(undefined8 *param_1,uchar *param_2)

{
  BIGNUM *a;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a = (BIGNUM *)*param_1;
  if (a == (BIGNUM *)0x0) {
    return -1;
  }
  uVar1 = BN_num_bits(a);
  if ((uVar1 & 7) == 0) {
    iVar4 = 1;
    if (param_2 == (uchar *)0x0) goto LAB_0010007c;
    *param_2 = '\0';
    param_2 = param_2 + 1;
    iVar3 = 1;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    if (param_2 == (uchar *)0x0) goto LAB_0010007c;
  }
  iVar4 = iVar3;
  BN_bn2bin(a,param_2);
LAB_0010007c:
  iVar2 = BN_num_bits(a);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  return (iVar3 >> 3) + iVar4;
}



void bn_free(undefined8 *param_1,long param_2)

{
  BIGNUM *a;
  
  a = (BIGNUM *)*param_1;
  if (a != (BIGNUM *)0x0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      BN_free(a);
    }
    else {
      BN_clear_free(a);
    }
    *param_1 = 0;
  }
  return;
}



bool bn_new(undefined8 *param_1)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_new();
  *param_1 = pBVar1;
  return pBVar1 != (BIGNUM *)0x0;
}



bool bn_secure_new(long *param_1)

{
  long lVar1;
  
  lVar1 = BN_secure_new();
  *param_1 = lVar1;
  return lVar1 != 0;
}



undefined8
bn_c2i(long *param_1,uchar *param_2,int param_3,undefined8 param_4,undefined8 param_5,long param_6)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)*param_1;
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = BN_new();
    *param_1 = (long)pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  pBVar1 = BN_bin2bn(param_2,param_3,pBVar1);
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)*param_1;
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
    if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
      BN_free(pBVar1);
    }
    else {
      BN_clear_free(pBVar1);
    }
    *param_1 = 0;
    return 0;
  }
  return 1;
}



undefined8
bn_secure_c2i(long *param_1,uchar *param_2,int param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)*param_1;
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)BN_secure_new();
    *param_1 = (long)pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  pBVar1 = BN_bin2bn(param_2,param_3,pBVar1);
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)*param_1;
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
    if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
      BN_free(pBVar1);
    }
    else {
      BN_clear_free(pBVar1);
    }
    *param_1 = 0;
    return 0;
  }
  BN_set_flags(*param_1,4);
  return 1;
}



undefined1 * BIGNUM_it(void)

{
  return local_it_1;
}



undefined1 * CBIGNUM_it(void)

{
  return local_it_0;
}



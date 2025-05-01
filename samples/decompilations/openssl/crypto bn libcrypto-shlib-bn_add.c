
int BN_uadd(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int num;
  ulong *ap;
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  BIGNUM *pBVar6;
  uint uVar7;
  ulong *puVar8;
  int iVar9;
  
  num = a->top;
  iVar1 = b->top;
  pBVar6 = b;
  iVar9 = iVar1;
  if (iVar1 <= num) {
    pBVar6 = a;
    a = b;
    iVar9 = num;
    num = iVar1;
  }
  lVar2 = bn_wexpand(r,iVar9 + 1);
  iVar1 = 0;
  if (lVar2 != 0) {
    r->top = iVar9;
    ap = pBVar6->d;
    puVar8 = r->d;
    uVar7 = iVar9 - num;
    uVar3 = bn_add_words(puVar8,ap,a->d,num);
    puVar8 = puVar8 + num;
    if (uVar7 != 0) {
      uVar5 = 0;
      do {
        uVar4 = uVar3 + ap[(long)num + uVar5];
        puVar8[uVar5] = uVar4;
        uVar5 = uVar5 + 1;
        uVar3 = uVar3 & uVar4 == 0;
      } while (uVar7 != uVar5);
      puVar8 = puVar8 + uVar7;
    }
    *puVar8 = uVar3;
    r->neg = 0;
    r->top = r->top + (int)uVar3;
    iVar1 = 1;
  }
  return iVar1;
}



int BN_usub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int num;
  ulong *ap;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = a->top;
  num = b->top;
  uVar7 = iVar6 - num;
  if ((int)uVar7 < 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_add.c",0x8b,"BN_usub");
    ERR_set_error(3,100,0);
  }
  else {
    lVar2 = bn_wexpand(r,iVar6);
    if (lVar2 != 0) {
      ap = a->d;
      puVar5 = r->d;
      uVar3 = bn_sub_words(puVar5,ap,b->d,num);
      puVar5 = puVar5 + num;
      if (uVar7 != 0) {
        uVar4 = 0;
        do {
          uVar1 = ap[(long)num + uVar4];
          puVar5[uVar4] = uVar1 - uVar3;
          uVar4 = uVar4 + 1;
          uVar3 = uVar3 & uVar1 == 0;
        } while (uVar4 != uVar7);
        puVar5 = puVar5 + uVar4;
      }
      while ((iVar6 != 0 && (puVar5 = puVar5 + -1, *puVar5 == 0))) {
        iVar6 = iVar6 + -1;
      }
      r->top = iVar6;
      r->neg = 0;
      return 1;
    }
  }
  return 0;
}



int BN_add(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  
  iVar1 = a->neg;
  if (iVar1 == b->neg) {
    iVar2 = BN_uadd(r,a,b);
    r->neg = iVar1;
    return iVar2;
  }
  iVar1 = BN_ucmp(a,b);
  if (iVar1 < 1) {
    if (iVar1 != 0) {
      iVar1 = b->neg;
      iVar2 = BN_usub(r,b,a);
      r->neg = iVar1;
      return iVar2;
    }
    BN_zero_ex(r);
    r->neg = 0;
    return 1;
  }
  iVar1 = a->neg;
  iVar2 = BN_usub(r,a,b);
  r->neg = iVar1;
  return iVar2;
}



int BN_sub(BIGNUM *r,BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = a->neg;
  if (uVar3 == b->neg) {
    iVar1 = BN_ucmp(a,b);
    if (0 < iVar1) {
      iVar1 = a->neg;
      iVar2 = BN_usub(r,a,b);
      r->neg = iVar1;
      return iVar2;
    }
    if (iVar1 == 0) {
      BN_zero_ex(r);
      iVar1 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)(b->neg == 0);
      iVar1 = BN_usub(r,b,a);
    }
  }
  else {
    iVar1 = BN_uadd(r,a,b);
  }
  r->neg = uVar3;
  return iVar1;
}



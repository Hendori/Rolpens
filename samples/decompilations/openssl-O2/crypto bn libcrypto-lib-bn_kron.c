
int BN_kronecker(BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar4;
  ulong uVar5;
  
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  a_01 = BN_CTX_get(ctx);
  if (((a_01 == (BIGNUM *)0x0) || (pBVar4 = BN_copy(a_00,a), pBVar4 == (BIGNUM *)0x0)) ||
     (pBVar4 = BN_copy(a_01,b), pBVar4 == (BIGNUM *)0x0)) {
LAB_001001c0:
    iVar1 = -2;
    BN_CTX_end(ctx);
  }
  else {
    iVar1 = BN_is_zero(a_01);
    if (iVar1 != 0) {
      iVar1 = BN_abs_is_word(a_00,1);
      BN_CTX_end(ctx);
      return iVar1;
    }
    iVar1 = BN_is_odd(a_00);
    if ((iVar1 != 0) || (iVar1 = BN_is_odd(a_01), iVar1 != 0)) {
      uVar2 = 0;
      while (iVar1 = BN_is_bit_set(a_01,uVar2), iVar1 == 0) {
        uVar2 = uVar2 + 1;
      }
      iVar1 = BN_rshift(a_01,a_01,uVar2);
      if (iVar1 == 0) goto LAB_001001c0;
      iVar1 = 1;
      if (((uVar2 & 1) != 0) && (iVar1 = a_00->top, iVar1 != 0)) {
        iVar1 = *(int *)(tab_0 + (ulong)((uint)*a_00->d & 7) * 4);
      }
      if ((a_01->neg != 0) && (a_01->neg = 0, a_00->neg != 0)) {
        iVar1 = -iVar1;
      }
      while (pBVar4 = a_00, uVar2 = BN_is_zero(pBVar4), uVar2 == 0) {
        while (iVar3 = BN_is_bit_set(pBVar4,uVar2), iVar3 == 0) {
          uVar2 = uVar2 + 1;
        }
        iVar3 = BN_rshift(pBVar4,pBVar4,uVar2);
        if (iVar3 == 0) goto LAB_001001c0;
        if ((uVar2 & 1) != 0) {
          if (a_01->top == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = iVar1 * *(int *)(tab_0 + (ulong)((uint)*a_01->d & 7) * 4);
          }
        }
        if (pBVar4->neg == 0) {
          if (pBVar4->top != 0) {
            uVar5 = *pBVar4->d;
            goto LAB_00100182;
          }
        }
        else {
          uVar5 = 0xffffffffffffffff;
          if (pBVar4->top != 0) {
            uVar5 = ~*pBVar4->d;
          }
LAB_00100182:
          if ((a_01->top != 0) && ((uVar5 & *a_01->d & 2) != 0)) {
            iVar1 = -iVar1;
          }
        }
        iVar3 = BN_nnmod(a_01,a_01,pBVar4,ctx);
        if (iVar3 == 0) goto LAB_001001c0;
        pBVar4->neg = 0;
        a_00 = a_01;
        a_01 = pBVar4;
      }
      iVar3 = BN_is_one(a_01);
      if (iVar3 != 0) {
        BN_CTX_end(ctx);
        return iVar1;
      }
    }
    BN_CTX_end(ctx);
    iVar1 = 0;
  }
  return iVar1;
}



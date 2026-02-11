
int BN_lshift1(BIGNUM *r,BIGNUM *a)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  
  if (r == a) {
    lVar5 = bn_wexpand();
    if (lVar5 == 0) {
      return 0;
    }
    iVar9 = r->top;
  }
  else {
    r->neg = a->neg;
    lVar5 = bn_wexpand();
    if (lVar5 == 0) {
      return 0;
    }
    iVar9 = a->top;
    r->top = iVar9;
  }
  uVar1 = a->top;
  puVar2 = a->d;
  puVar8 = r->d;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar3 = *(ulong *)((long)puVar2 + lVar5);
      uVar6 = uVar3 >> 0x3f;
      *(ulong *)((long)puVar8 + lVar5) = uVar3 * 2 | uVar7;
      lVar5 = lVar5 + 8;
      uVar7 = uVar6;
    } while ((long)(int)uVar1 * 8 != lVar5);
    uVar4 = (uint)(uVar3 >> 0x3f);
    puVar8 = puVar8 + uVar1;
  }
  *puVar8 = uVar6;
  r->top = iVar9 + uVar4;
  return 1;
}



int BN_rshift1(BIGNUM *r,BIGNUM *a)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  iVar4 = BN_is_zero(a);
  if (iVar4 == 0) {
    iVar4 = a->top;
    puVar1 = a->d;
    if (a != r) {
      lVar5 = bn_wexpand(r,iVar4);
      if (lVar5 == 0) {
        return 0;
      }
      r->neg = a->neg;
    }
    puVar2 = r->d;
    lVar5 = (long)(iVar4 + -1);
    uVar3 = puVar1[lVar5];
    puVar2[lVar5] = uVar3 >> 1;
    iVar7 = iVar4 - (uint)(uVar3 == 1);
    r->top = iVar7;
    if (iVar4 + -1 < 1) {
      if (iVar7 == 0) {
        r->neg = 0;
      }
    }
    else {
      do {
        uVar6 = uVar3 << 0x3f;
        uVar3 = puVar1[lVar5 + -1];
        puVar2[lVar5 + -1] = uVar3 >> 1 | uVar6;
        lVar5 = lVar5 + -1;
      } while (0 < (int)lVar5);
    }
  }
  else {
    BN_zero_ex(r);
  }
  return 1;
}



undefined8 bn_lshift_fixed_top(undefined8 *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  iVar7 = (int)uVar10 >> 6;
  lVar2 = bn_wexpand();
  if (lVar2 != 0) {
    __s = (void *)*param_1;
    iVar11 = (int)param_2[1];
    lVar2 = 0;
    plVar1 = (long *)((long)__s + (long)iVar7 * 8);
    if (iVar11 != 0) {
      lVar2 = *param_2;
      uVar9 = *(ulong *)(lVar2 + -8 + (long)iVar11 * 8);
      uVar10 = -(param_3 & 0x3f) & 0x3f;
      uVar3 = -(ulong)uVar10;
      uVar3 = uVar3 >> 8 | uVar3;
      sVar4 = (sbyte)uVar10;
      plVar1[iVar11] = uVar9 >> sVar4 & uVar3;
      sVar5 = (sbyte)(param_3 & 0x3f);
      if (0 < iVar11 + -1) {
        lVar6 = (long)(iVar11 + -1);
        uVar8 = uVar9;
        do {
          uVar9 = *(ulong *)(lVar2 + -8 + lVar6 * 8);
          plVar1[lVar6] = uVar8 << sVar5 | uVar9 >> sVar4 & uVar3;
          lVar6 = lVar6 + -1;
          uVar8 = uVar9;
        } while (0 < (int)lVar6);
      }
      lVar2 = uVar9 << sVar5;
    }
    *plVar1 = lVar2;
    if (iVar7 != 0) {
      memset(__s,0,(long)iVar7 * 8);
      iVar11 = (int)param_2[1];
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 1) = iVar11 + 1 + iVar7;
    return 1;
  }
  return 0;
}



int BN_lshift(BIGNUM *r,BIGNUM *a,int n)

{
  int iVar1;
  
  if (-1 < n) {
    iVar1 = bn_lshift_fixed_top();
    bn_correct_top(r);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/bn/bn_shift.c",0x56,"BN_lshift");
  ERR_set_error(3,0x77,0);
  return 0;
}



undefined8 bn_rshift_fixed_top(long *param_1,long *param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  sbyte sVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar7 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  iVar5 = (int)uVar7 >> 6;
  if (iVar5 < (int)param_2[1]) {
    uVar11 = (int)param_2[1] - iVar5;
    uVar7 = -(param_3 & 0x3f) & 0x3f;
    uVar2 = -(ulong)uVar7;
    if ((param_2 != param_1) && (lVar3 = bn_wexpand(param_1,uVar11), lVar3 == 0)) {
      return 0;
    }
    puVar6 = (ulong *)*param_1;
    uVar8 = 1;
    puVar1 = (ulong *)(*param_2 + (long)iVar5 * 8);
    uVar9 = *puVar1;
    sVar4 = (sbyte)(param_3 & 0x3f);
    uVar10 = uVar9;
    if (uVar11 != 1) {
      do {
        uVar10 = puVar1[uVar8];
        puVar6[uVar8 - 1] = uVar10 << (sbyte)uVar7 & (uVar2 >> 8 | uVar2) | uVar9 >> sVar4;
        uVar8 = uVar8 + 1;
        uVar9 = uVar10;
      } while (uVar11 != uVar8);
      puVar6 = puVar6 + (uVar11 - 1);
    }
    lVar3 = param_2[2];
    *puVar6 = uVar10 >> sVar4;
    *(int *)(param_1 + 2) = (int)lVar3;
    *(uint *)(param_1 + 1) = uVar11;
  }
  else {
    BN_zero_ex();
  }
  return 1;
}



int BN_rshift(BIGNUM *r,BIGNUM *a,int n)

{
  int iVar1;
  
  if (-1 < n) {
    iVar1 = bn_rshift_fixed_top();
    bn_correct_top(r);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/bn/bn_shift.c",0x9b,"BN_rshift");
  ERR_set_error(3,0x77,0);
  return 0;
}



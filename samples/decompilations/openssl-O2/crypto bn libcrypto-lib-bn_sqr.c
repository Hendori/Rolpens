
void bn_sqr_normal(ulong *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  int num;
  ulong uVar1;
  int num_00;
  ulong *puVar2;
  ulong *puVar3;
  ulong *rp;
  int num_01;
  
  num = param_3 * 2;
  num_00 = param_3 + -1;
  param_1[(long)num + -1] = 0;
  *param_1 = 0;
  if (0 < num_00) {
    uVar1 = bn_mul_words(param_1 + 1,param_2 + 1,num_00,*param_2);
    (param_1 + 1)[num_00] = uVar1;
    num_01 = param_3 + -2;
    if (num_01 != 0) {
      puVar2 = param_2 + 1;
      puVar3 = param_1 + (long)num_00 + 2;
      rp = param_1 + 3;
      do {
        uVar1 = bn_mul_add_words(rp,puVar2 + 1,num_01,*puVar2);
        *puVar3 = uVar1;
        num_01 = num_01 + -1;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
        rp = rp + 2;
      } while (num_01 != 0);
    }
  }
  bn_add_words(param_1,param_1,param_1,num);
  bn_sqr_words(param_4,param_2,param_3);
  bn_add_words(param_1,param_1,param_4,num);
  return;
}



void bn_sqr_recursive(ulong *param_1,ulong *param_2,int param_3,ulong *param_4)

{
  ulong *rp;
  int iVar1;
  ulong *bp;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int num;
  
  if (param_3 == 4) {
    bn_sqr_comba4();
    return;
  }
  if (param_3 == 8) {
    bn_sqr_comba8();
    return;
  }
  if (param_3 < 0x10) {
    bn_sqr_normal();
    return;
  }
  lVar6 = (long)param_3;
  num = param_3 >> 1;
  bp = param_2 + num;
  iVar1 = bn_cmp_words(param_2,bp,num);
  rp = param_4 + lVar6;
  puVar5 = rp + lVar6;
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      memset(rp,0,lVar6 * 8);
      goto LAB_00100194;
    }
    bn_sub_words(param_4,bp,param_2,num);
  }
  else {
    bn_sub_words(param_4,param_2,bp,num);
  }
  bn_sqr_recursive(rp,param_4,num,puVar5);
LAB_00100194:
  bn_sqr_recursive(param_1,param_2,num,puVar5);
  bn_sqr_recursive(param_1 + lVar6,bp,num,puVar5);
  uVar2 = bn_add_words(param_4,param_1,param_1 + lVar6,param_3);
  uVar3 = bn_sub_words(rp,param_4,rp,param_3);
  uVar4 = bn_add_words(param_1 + num,param_1 + num,rp,param_3);
  iVar1 = ((int)uVar2 - (int)uVar3) + (int)uVar4;
  if (iVar1 != 0) {
    param_1 = param_1 + (param_3 + num);
    uVar2 = *param_1;
    *param_1 = *param_1 + (long)iVar1;
    if (CARRY8(uVar2,(long)iVar1)) {
      do {
        param_1 = param_1 + 1;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
    }
  }
  return;
}



bool bn_sqr_fixed_top(BIGNUM *param_1,BIGNUM *param_2,BN_CTX *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BIGNUM *pBVar4;
  long lVar5;
  BIGNUM *pBVar6;
  byte bVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 local_148 [264];
  long local_40;
  
  iVar1 = param_2->top;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 < 1) {
    param_1->top = 0;
    bVar8 = true;
    param_1->neg = 0;
    goto LAB_001003cb;
  }
  BN_CTX_start(param_3);
  if (param_2 == param_1) {
    pBVar6 = BN_CTX_get(param_3);
    pBVar4 = BN_CTX_get(param_3);
    if (pBVar6 != (BIGNUM *)0x0) goto LAB_00100336;
LAB_001003c0:
    bVar8 = false;
  }
  else {
    pBVar4 = BN_CTX_get(param_3);
    pBVar6 = param_1;
    if (param_1 == (BIGNUM *)0x0) goto LAB_001003c0;
LAB_00100336:
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_001003c0;
    iVar2 = iVar1 * 2;
    lVar5 = bn_wexpand(pBVar6,iVar2);
    if (lVar5 == 0) goto LAB_001003c0;
    if (iVar1 == 4) {
      bn_sqr_comba4(pBVar6->d,param_2->d);
    }
    else if (iVar1 == 8) {
      bn_sqr_comba8(pBVar6->d,param_2->d);
    }
    else if (iVar1 < 0x10) {
      bn_sqr_normal(pBVar6->d,param_2->d,iVar1,local_148);
    }
    else {
      iVar3 = BN_num_bits_word((long)iVar1);
      bVar7 = (char)iVar3 - 1;
      if (iVar1 == 1 << (bVar7 & 0x1f)) {
        lVar5 = bn_wexpand(pBVar4,4 << (bVar7 & 0x1f));
        if (lVar5 == 0) goto LAB_001003c0;
        bn_sqr_recursive(pBVar6->d,param_2->d,iVar1,pBVar4->d);
      }
      else {
        lVar5 = bn_wexpand(pBVar4,iVar2);
        if (lVar5 == 0) goto LAB_001003c0;
        bn_sqr_normal(pBVar6->d,param_2->d,iVar1,pBVar4->d);
      }
    }
    pBVar6->neg = 0;
    bVar8 = true;
    pBVar6->top = iVar2;
    if (pBVar6 != param_1) {
      pBVar6 = BN_copy(param_1,pBVar6);
      bVar8 = pBVar6 != (BIGNUM *)0x0;
    }
  }
  BN_CTX_end(param_3);
LAB_001003cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}



int BN_sqr(BIGNUM *r,BIGNUM *a,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = bn_sqr_fixed_top();
  bn_correct_top(r);
  return iVar1;
}



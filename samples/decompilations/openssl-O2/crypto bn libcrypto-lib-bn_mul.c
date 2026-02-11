
ulong bn_sub_part_words(ulong *param_1,ulong *param_2,ulong *param_3,int param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = bn_sub_words(param_1,param_2,param_3,param_4);
  if (param_5 != 0) {
    param_1 = param_1 + param_4;
    if (param_5 < 0) {
      param_3 = param_3 + param_4;
      while( true ) {
        uVar4 = *param_3;
        *param_1 = -(uVar2 + uVar4);
        if (uVar4 != 0) {
          uVar2 = 1;
        }
        if (param_5 == -1) break;
        uVar4 = param_3[1];
        param_1[1] = -(uVar2 + uVar4);
        if (uVar4 != 0) {
          uVar2 = 1;
        }
        if (param_5 == -2) {
          return uVar2;
        }
        uVar4 = param_3[2];
        param_1[2] = -(uVar2 + uVar4);
        if (uVar4 != 0) {
          uVar2 = 1;
        }
        if (param_5 == -3) {
          return uVar2;
        }
        uVar4 = param_3[3];
        param_1[3] = -(uVar2 + uVar4);
        if (uVar4 != 0) {
          uVar2 = 1;
        }
        param_5 = param_5 + 4;
        if (param_5 == 0) {
          return uVar2;
        }
        param_3 = param_3 + 4;
        param_1 = param_1 + 4;
      }
    }
    else {
      param_2 = param_2 + param_4;
      uVar4 = 0;
      while (iVar3 = param_5, uVar2 != 0) {
        uVar1 = *param_2;
        *param_1 = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar4;
        }
        if (param_5 == 1) {
          return uVar2;
        }
        uVar1 = param_2[1];
        param_1[1] = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar4;
        }
        if (param_5 == 2) {
          return uVar2;
        }
        uVar1 = param_2[2];
        param_1[2] = uVar1 - uVar2;
        if (uVar1 != 0) {
          uVar2 = uVar4;
        }
        if (param_5 == 3) {
          return uVar2;
        }
        uVar1 = param_2[3];
        param_1[3] = uVar1 - uVar2;
        iVar3 = param_5 + -4;
        if (uVar1 != 0) {
          if (iVar3 == 0) goto LAB_0010014b;
          param_2 = param_2 + 4;
          param_1 = param_1 + 4;
          break;
        }
        if (param_5 == 4) {
          return uVar2;
        }
        param_2 = param_2 + 4;
        param_1 = param_1 + 4;
        param_5 = iVar3;
      }
      *param_1 = *param_2;
      if (((iVar3 != 1) && (param_1[1] = param_2[1], iVar3 != 2)) &&
         (param_1[2] = param_2[2], iVar3 != 3)) {
        param_1[3] = param_2[3];
        while (iVar3 = iVar3 + -4, iVar3 != 0) {
          param_1[4] = param_2[4];
          if (((iVar3 == 1) || (param_1[5] = param_2[5], iVar3 == 2)) ||
             (param_1[6] = param_2[6], iVar3 == 3)) break;
          param_1[7] = param_2[7];
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
        }
      }
LAB_0010014b:
      uVar2 = 0;
    }
  }
  return uVar2;
}



void bn_mul_normal(ulong *param_1,ulong *param_2,int param_3,ulong *param_4,int param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  int num;
  
  puVar3 = param_2;
  num = param_5;
  if (param_5 <= param_3) {
    puVar3 = param_4;
    param_4 = param_2;
    num = param_3;
    param_3 = param_5;
  }
  if (param_3 < 1) {
    bn_mul_words(param_1,param_4,num,0);
    return;
  }
  puVar4 = param_1 + num;
  uVar2 = bn_mul_words(param_1,param_4,num,*puVar3);
  *puVar4 = uVar2;
  while( true ) {
    if (param_3 == 1) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 1,param_4,num,puVar3[1]);
    puVar4[1] = uVar2;
    if (param_3 == 2) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 2,param_4,num,puVar3[2]);
    puVar4[2] = uVar2;
    if (param_3 == 3) {
      return;
    }
    uVar2 = bn_mul_add_words(param_1 + 3,param_4,num,puVar3[3]);
    puVar4[3] = uVar2;
    param_3 = param_3 + -4;
    if (param_3 == 0) break;
    puVar1 = puVar3 + 4;
    param_1 = param_1 + 4;
    puVar4 = puVar4 + 4;
    puVar3 = puVar3 + 4;
    uVar2 = bn_mul_add_words(param_1,param_4,num,*puVar1);
    *puVar4 = uVar2;
  }
  return;
}



void bn_mul_recursive(ulong *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                     ulong *param_7)

{
  long lVar1;
  long lVar2;
  ulong *rp;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  byte bVar15;
  ulong *local_60;
  
  bVar15 = 0;
  if ((param_4 == 8) && (param_5 == 0)) {
    if (param_6 == 0) {
      bn_mul_comba8();
      return;
    }
LAB_00100381:
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    if (-1 < param_5 + param_6) {
      return;
    }
    memset(param_1 + (param_4 + param_5 + param_4 + param_6),0,(long)-(param_5 + param_6) << 3);
    return;
  }
  if (param_4 < 0x10) goto LAB_00100381;
  iVar14 = param_4 >> 1;
  iVar4 = iVar14 + param_6;
  iVar13 = iVar14 + param_5;
  lVar7 = (long)iVar14;
  lVar1 = param_2 + lVar7 * 8;
  iVar5 = bn_cmp_part_words(param_2,lVar1,iVar13);
  lVar2 = param_3 + lVar7 * 8;
  iVar6 = bn_cmp_part_words(lVar2,param_3,iVar4,param_6);
  lVar10 = (long)param_4;
  rp = param_7 + lVar10;
  bVar12 = (param_5 == 0 && param_6 == 0) && iVar14 == 8;
  switch(iVar5 * 3 + 4 + iVar6) {
  case 0:
    bn_sub_part_words(param_7,lVar1,param_2,iVar13,param_5);
    bn_sub_part_words(param_7 + lVar7,param_3,lVar2,iVar4,-param_6);
    if ((param_5 == 0 && param_6 == 0) && iVar14 == 8) {
LAB_001008a8:
      bVar3 = false;
LAB_001008b0:
      bn_mul_comba8(rp,param_7,param_7 + 8);
LAB_0010086d:
      bn_mul_comba8(param_1,param_2,param_3);
      bn_mul_comba8(param_1 + lVar10,lVar1,lVar2);
      goto LAB_00100501;
    }
    bVar3 = false;
    break;
  case 1:
  case 3:
  case 4:
  case 5:
  case 7:
    if (bVar12) {
      *rp = 0;
      rp[0xf] = 0;
      puVar11 = (undefined8 *)((ulong)(rp + 1) & 0xfffffffffffffff8);
      for (uVar8 = (ulong)(((int)rp - (int)(undefined8 *)((ulong)(rp + 1) & 0xfffffffffffffff8)) +
                           0x80U >> 3); uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + (ulong)bVar15 * -2 + 1;
      }
      bVar3 = false;
      goto LAB_0010086d;
    }
    memset(rp,0,lVar10 * 8);
    bVar3 = false;
    goto LAB_001004ab;
  case 2:
    bn_sub_part_words(param_7,lVar1,param_2,iVar13,param_5);
    bn_sub_part_words(param_7 + lVar7,lVar2,param_3,iVar4,param_6);
    bVar3 = true;
    if (bVar12) {
LAB_0010078e:
      bVar3 = true;
      goto LAB_001008b0;
    }
    break;
  case 6:
    bn_sub_part_words(param_7,param_2,lVar1,iVar13,-param_5);
    bn_sub_part_words(param_7 + lVar7,param_3,lVar2,iVar4,-param_6);
    if (bVar12) goto LAB_0010078e;
    bVar3 = true;
    break;
  case 8:
    bn_sub_part_words(param_7,param_2,lVar1,iVar13,-param_5);
    bn_sub_part_words(param_7 + lVar7,lVar2,param_3,iVar4,param_6);
    if (bVar12) goto LAB_001008a8;
    bVar3 = false;
    break;
  default:
    if (bVar12) goto LAB_001008a8;
    bVar3 = false;
  }
  local_60 = rp + lVar10;
  bn_mul_recursive(rp,param_7,param_7 + lVar7,iVar14,0,0,local_60);
LAB_001004ab:
  local_60 = rp + lVar10;
  bn_mul_recursive(param_1,param_2,param_3,iVar14,0,0,local_60);
  bn_mul_recursive(param_1 + lVar10,lVar1,lVar2,iVar14,param_5,param_6,local_60);
LAB_00100501:
  uVar8 = bn_add_words(param_7,param_1,param_1 + lVar10,param_4);
  if (bVar3) {
    uVar9 = bn_sub_words(rp,param_7,rp,param_4);
    iVar4 = -(int)uVar9;
  }
  else {
    uVar9 = bn_add_words(rp,rp,param_7,param_4);
    iVar4 = (int)uVar9;
  }
  uVar9 = bn_add_words(param_1 + lVar7,param_1 + lVar7,rp,param_4);
  iVar4 = (int)uVar8 + iVar4 + (int)uVar9;
  if (iVar4 != 0) {
    param_1 = param_1 + (param_4 + iVar14);
    uVar8 = *param_1;
    *param_1 = *param_1 + (long)iVar4;
    if (CARRY8(uVar8,(long)iVar4)) {
      do {
        param_1 = param_1 + 1;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
      return;
    }
  }
  return;
}



void bn_mul_part_recursive
               (ulong *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
               ulong *param_7)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *bp;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (param_4 < 8) {
    bn_mul_normal(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
    return;
  }
  lVar7 = (long)param_4;
  lVar1 = param_2 + lVar7 * 8;
  iVar5 = bn_cmp_part_words(param_2,lVar1,param_5,param_4 - param_5);
  lVar2 = param_3 + lVar7 * 8;
  iVar6 = bn_cmp_part_words(lVar2,param_3,param_6);
  iVar6 = iVar5 * 3 + iVar6;
  if (iVar6 < 3) {
    if (-2 < iVar6) {
      bn_sub_part_words(param_7,param_2,lVar1,param_5);
      bn_sub_part_words(param_7 + lVar7,param_3,lVar2,param_6,param_4 - param_6);
LAB_001009c5:
      bVar4 = true;
      goto LAB_001009cd;
    }
    if (iVar6 == -4) {
      bn_sub_part_words(param_7,lVar1,param_2,param_5,param_5 - param_4);
      bn_sub_part_words(param_7 + lVar7,param_3,lVar2,param_6,param_4 - param_6);
    }
    else if (-5 < iVar6) {
      bn_sub_part_words(param_7,lVar1,param_2,param_5,param_5 - param_4);
      bn_sub_part_words(param_7 + lVar7,lVar2,param_3,param_6,param_6 - param_4);
      goto LAB_001009c5;
    }
  }
  else if (iVar6 - 3U < 2) {
    bn_sub_part_words(param_7,param_2,lVar1,param_5);
    bn_sub_part_words(param_7 + lVar7,lVar2,param_3,param_6,param_6 - param_4);
  }
  bVar4 = false;
LAB_001009cd:
  iVar5 = param_4 * 2;
  lVar8 = (long)iVar5;
  puVar11 = param_7 + lVar8;
  bp = param_1 + lVar8;
  if (param_4 == 8) {
    bn_mul_comba8(param_7 + 0x10,param_7,param_7 + 8);
    bn_mul_comba8(param_1,param_2,param_3);
    bn_mul_normal(param_1 + 0x10,lVar1,param_5,lVar2,param_6);
    memset(param_1 + (param_5 + 0x10 + param_6),0,(long)((0x10 - param_5) - param_6) << 3);
  }
  else {
    puVar3 = puVar11 + lVar8;
    bn_mul_recursive(puVar11,param_7,param_7 + lVar7,param_4,0,0,puVar3);
    iVar14 = param_4 >> 1;
    bn_mul_recursive(param_1,param_2,param_3,param_4,0,0,puVar3);
    iVar12 = param_5 - iVar14;
    iVar13 = param_6 - iVar14;
    iVar6 = iVar12;
    if (param_5 <= param_6) {
      iVar6 = iVar13;
    }
    if (iVar6 == 0) {
      bn_mul_recursive(bp,lVar1,lVar2,iVar14,iVar12,iVar13,puVar3);
      memset(param_1 + (iVar14 * 2 + iVar5),0,(long)(iVar5 + iVar14 * -2) << 3);
    }
    else if (iVar6 < 1) {
      memset(bp,0,lVar8 * 8);
      if ((param_5 < 0x10) && (param_6 < 0x10)) {
        bn_mul_normal(bp,lVar1,param_5,lVar2,param_6);
      }
      else {
        iVar6 = param_6;
        if (param_6 <= param_5) {
          iVar6 = param_5;
        }
        do {
          iVar14 = iVar14 / 2;
          if (iVar14 < iVar6) {
            bn_mul_part_recursive(bp,lVar1,lVar2,iVar14,param_5 - iVar14,param_6 - iVar14,puVar3);
            goto LAB_00100ac3;
          }
        } while ((param_5 != iVar14) && (param_6 != iVar14));
        bn_mul_recursive(bp,lVar1,lVar2,iVar14,param_5 - iVar14,param_6 - iVar14,puVar3);
      }
    }
    else {
      bn_mul_part_recursive(bp,lVar1,lVar2,iVar14,iVar12,iVar13,puVar3);
      memset(param_1 + (iVar5 + param_5 + param_6),0,(long)((iVar5 - param_5) - param_6) << 3);
    }
  }
LAB_00100ac3:
  uVar9 = bn_add_words(param_7,param_1,bp,iVar5);
  if (bVar4) {
    uVar10 = bn_sub_words(puVar11,param_7,puVar11,iVar5);
    iVar6 = -(int)uVar10;
  }
  else {
    uVar10 = bn_add_words(puVar11,puVar11,param_7,iVar5);
    iVar6 = (int)uVar10;
  }
  uVar10 = bn_add_words(param_1 + lVar7,param_1 + lVar7,puVar11,iVar5);
  iVar5 = (int)uVar9 + iVar6 + (int)uVar10;
  if (iVar5 != 0) {
    param_1 = param_1 + param_4 * 3;
    uVar9 = *param_1;
    *param_1 = *param_1 + (long)iVar5;
    if (CARRY8(uVar9,(long)iVar5)) {
      do {
        puVar11 = param_1 + 1;
        *puVar11 = *puVar11 + 1;
        if (*puVar11 != 0) {
          return;
        }
        param_1 = param_1 + 2;
        *param_1 = *param_1 + 1;
      } while (*param_1 == 0);
    }
  }
  return;
}



bool bn_mul_fixed_top(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  char cVar6;
  int iVar7;
  BIGNUM *pBVar8;
  long lVar9;
  BIGNUM *pBVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = param_2->top;
  iVar3 = param_3->top;
  if ((iVar2 == 0) || (iVar3 == 0)) {
    BN_zero_ex(param_1);
    return true;
  }
  iVar1 = iVar2 + iVar3;
  BN_CTX_start(param_4);
  if (((param_2 == param_1) || (pBVar10 = param_1, param_3 == param_1)) &&
     (pBVar10 = BN_CTX_get(param_4), pBVar10 == (BIGNUM *)0x0)) goto LAB_00100ff0;
  iVar7 = iVar2 - iVar3;
  if (iVar7 == 0) {
    if (iVar2 != 8) {
      if ((0xf < iVar3) && (0xf < iVar2)) goto LAB_00100e89;
      goto LAB_00100f60;
    }
    lVar9 = bn_wexpand(pBVar10,0x10);
    if (lVar9 == 0) goto LAB_00100ff0;
    puVar4 = param_3->d;
    puVar5 = param_2->d;
    pBVar10->top = 0x10;
    bn_mul_comba8(pBVar10->d,puVar5,puVar4);
LAB_00100f8f:
    bVar13 = true;
    pBVar10->neg = param_2->neg ^ param_3->neg;
    if (pBVar10 != param_1) {
      pBVar10 = BN_copy(param_1,pBVar10);
      bVar13 = pBVar10 != (BIGNUM *)0x0;
    }
  }
  else {
    if ((iVar2 < 0x10) || ((iVar3 < 0x10 || (2 < iVar7 + 1U)))) {
LAB_00100f60:
      lVar9 = bn_wexpand(pBVar10,iVar1);
      if (lVar9 != 0) {
        puVar4 = param_3->d;
        puVar5 = param_2->d;
        pBVar10->top = iVar1;
        bn_mul_normal(pBVar10->d,puVar5,iVar2,puVar4,iVar3);
        goto LAB_00100f8f;
      }
    }
    else {
      if (iVar7 == -1) {
        iVar7 = BN_num_bits_word((long)iVar3);
        cVar6 = (char)iVar7;
      }
      else {
LAB_00100e89:
        iVar7 = BN_num_bits_word((long)iVar2);
        cVar6 = (char)iVar7;
      }
      iVar7 = 1 << (cVar6 - 1U & 0x1f);
      iVar11 = 2 << (cVar6 - 1U & 0x1f);
      pBVar8 = BN_CTX_get(param_4);
      if (pBVar8 != (BIGNUM *)0x0) {
        iVar12 = iVar3;
        if (iVar3 <= iVar2) {
          iVar12 = iVar2;
        }
        if (iVar7 < iVar12) {
          lVar9 = bn_wexpand(pBVar8);
          if ((lVar9 != 0) && (lVar9 = bn_wexpand(pBVar10,iVar11 << 2), lVar9 != 0)) {
            bn_mul_part_recursive
                      (pBVar10->d,param_2->d,param_3->d,iVar7,iVar2 - iVar7,iVar3 - iVar7,pBVar8->d)
            ;
LAB_00100f3a:
            pBVar10->top = iVar1;
            goto LAB_00100f8f;
          }
        }
        else {
          lVar9 = bn_wexpand(pBVar8);
          if ((lVar9 != 0) && (lVar9 = bn_wexpand(pBVar10,iVar11 * 2), lVar9 != 0)) {
            bn_mul_recursive(pBVar10->d,param_2->d,param_3->d,iVar7,iVar2 - iVar7,iVar3 - iVar7,
                             pBVar8->d);
            goto LAB_00100f3a;
          }
        }
      }
    }
LAB_00100ff0:
    bVar13 = false;
  }
  BN_CTX_end(param_4);
  return bVar13;
}



int BN_mul(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = bn_mul_fixed_top();
  bn_correct_top(r);
  return iVar1;
}



void bn_mul_low_normal(ulong *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  ulong *puVar1;
  uint uVar2;
  int num;
  int iVar3;
  uint num_00;
  
  bn_mul_words(param_1,param_2,param_4,*param_3);
  if (1 < param_4) {
    num_00 = param_4 - 2;
    uVar2 = num_00 & 0xfffffffc;
    iVar3 = param_4;
    while (bn_mul_add_words(param_1 + 1,param_2,iVar3 + -1,param_3[1]), num_00 != 0) {
      bn_mul_add_words(param_1 + 2,param_2,num_00,param_3[2]);
      if (iVar3 + -3 == 0) {
        return;
      }
      bn_mul_add_words(param_1 + 3,param_2,iVar3 + -3,param_3[3]);
      num = iVar3 + -4;
      if (num == 0) {
        return;
      }
      puVar1 = param_3 + 4;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      bn_mul_add_words(param_1,param_2,num,*puVar1);
      if (num == (param_4 + -4) - uVar2) {
        return;
      }
      num_00 = iVar3 - 6;
      iVar3 = num;
    }
  }
  return;
}



void bn_mul_low_recursive(long param_1,long param_2,long param_3,int param_4,ulong *param_5)

{
  ulong *bp;
  int num;
  ulong *rp;
  long lVar1;
  
  num = param_4 / 2;
  lVar1 = (long)num * 8;
  rp = (ulong *)(param_1 + lVar1);
  bn_mul_recursive();
  if (param_4 < 0x40) {
    bp = param_5 + num;
    bn_mul_low_normal(param_5,param_2,param_3 + lVar1,num);
    bn_mul_low_normal(bp,param_2 + lVar1,param_3,num);
    bn_add_words(rp,rp,param_5,num);
  }
  else {
    bn_mul_low_recursive(param_5,param_2,param_3 + lVar1,num,param_5 + param_4);
    bn_add_words(rp,rp,param_5,num);
    bn_mul_low_recursive(param_5,param_2 + lVar1,param_3,num,param_5 + param_4);
    bp = param_5;
  }
  bn_add_words(rp,rp,bp,num);
  return;
}



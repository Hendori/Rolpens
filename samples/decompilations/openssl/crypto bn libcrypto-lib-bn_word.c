
ulong BN_div_word(BIGNUM *a,ulong w)

{
  ulong l;
  int iVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong d;
  uint uVar7;
  ulong uVar8;
  
  if (w != 0) {
    uVar8 = 0;
    if (a->top == 0) {
      return 0;
    }
    iVar1 = BN_num_bits_word(w);
    iVar2 = BN_lshift(a,a,0x40 - iVar1);
    if (iVar2 != 0) {
      iVar2 = a->top;
      uVar7 = iVar2 - 1;
      if (-1 < (int)uVar7) {
        puVar5 = a->d;
        bVar4 = (byte)(0x40 - iVar1);
        d = w << (bVar4 & 0x3f);
        lVar6 = (long)(int)uVar7 << 3;
        uVar8 = 0;
        do {
          l = *(ulong *)((long)puVar5 + lVar6);
          uVar3 = bn_div_words(uVar8,l,d);
          uVar8 = l - d * uVar3;
          puVar5 = a->d;
          *(ulong *)((long)puVar5 + lVar6) = uVar3;
          lVar6 = lVar6 + -8;
        } while (lVar6 != ((long)iVar2 - (ulong)uVar7) * 8 + -0x10);
        iVar2 = a->top;
        uVar8 = uVar8 >> (bVar4 & 0x3f);
        if (0 < iVar2) {
          if (puVar5[(long)iVar2 + -1] != 0) {
            return uVar8;
          }
          iVar2 = iVar2 + -1;
          a->top = iVar2;
        }
      }
      if (iVar2 != 0) {
        return uVar8;
      }
      a->neg = 0;
      return uVar8;
    }
  }
  return 0xffffffffffffffff;
}



ulong BN_mod_word(BIGNUM *a,ulong w)

{
  ulong *puVar1;
  ulong *puVar2;
  BIGNUM *a_00;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if (w == 0) {
    return 0xffffffffffffffff;
  }
  if (w < 0x100000001) {
    iVar3 = a->top + -1;
    if (iVar3 < 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = (long)iVar3;
      uVar5 = 0;
      do {
        puVar1 = a->d + lVar4;
        puVar2 = a->d + lVar4;
        lVar4 = lVar4 + -1;
        uVar5 = ((*puVar1 >> 0x20 | uVar5 << 0x20) % w << 0x20 | (ulong)(uint)*puVar2) % w;
      } while (-1 < (int)lVar4);
    }
  }
  else {
    a_00 = BN_dup(a);
    uVar5 = 0xffffffffffffffff;
    if (a_00 != (BIGNUM *)0x0) {
      uVar5 = BN_div_word(a_00,w);
      BN_free(a_00);
      return uVar5;
    }
  }
  return uVar5;
}



int BN_sub_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  
  if (w == 0) {
    return 1;
  }
  iVar1 = BN_is_zero();
  if (iVar1 == 0) {
    if (a->neg != 0) {
      a->neg = 0;
      iVar1 = BN_add_word(a,w);
      a->neg = 1;
      return iVar1;
    }
    puVar6 = a->d;
    iVar1 = a->top;
    uVar2 = *puVar6;
    iVar4 = 0;
    if (iVar1 == 1) {
      if (uVar2 < w) {
        *puVar6 = w - uVar2;
        a->neg = 1;
        return 1;
      }
    }
    else {
      puVar5 = puVar6;
      iVar3 = 0;
      if (uVar2 < w) {
        do {
          uVar2 = uVar2 - w;
          puVar6 = puVar5 + 1;
          iVar4 = iVar3 + 1;
          w = 1;
          *puVar5 = uVar2;
          uVar2 = *puVar6;
          puVar5 = puVar6;
          iVar3 = iVar4;
        } while (uVar2 == 0);
      }
    }
    *puVar6 = uVar2 - w;
    if ((uVar2 - w == 0) && (iVar1 + -1 == iVar4)) {
      a->top = iVar4;
    }
    return 1;
  }
  iVar1 = BN_set_word(a,w);
  if (iVar1 != 0) {
    BN_set_negative(a,1);
    return iVar1;
  }
  return 0;
}



int BN_add_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  if (w != 0) {
    iVar1 = BN_is_zero();
    if (iVar1 != 0) {
      iVar1 = BN_set_word(a,w);
      return iVar1;
    }
    if (a->neg != 0) {
      a->neg = 0;
      iVar1 = BN_sub_word(a,w);
      iVar4 = BN_is_zero(a);
      if (iVar4 == 0) {
        a->neg = (uint)(a->neg == 0);
        return iVar1;
      }
      return iVar1;
    }
    iVar1 = a->top;
    iVar4 = 0;
    lVar3 = 0;
    do {
      if (iVar1 <= iVar4) {
        if (iVar1 != iVar4) {
          return 1;
        }
        lVar3 = bn_wexpand(a,iVar1 + 1);
        if (lVar3 != 0) {
          a->top = a->top + 1;
          a->d[iVar1] = w;
          return 1;
        }
        return 0;
      }
      puVar2 = (ulong *)((long)a->d + lVar3);
      bVar5 = CARRY8(w,*puVar2);
      *puVar2 = w + *puVar2;
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
      w = 1;
    } while (bVar5);
  }
  return 1;
}



int BN_mul_word(BIGNUM *a,ulong w)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if (a->top == 0) {
    return 1;
  }
  if (w == 0) {
    BN_zero_ex();
  }
  else {
    uVar2 = bn_mul_words(a->d,a->d,a->top,w);
    if (uVar2 != 0) {
      lVar3 = bn_wexpand(a,a->top + 1);
      if (lVar3 == 0) {
        return 0;
      }
      iVar1 = a->top;
      a->top = iVar1 + 1;
      a->d[iVar1] = uVar2;
    }
  }
  return 1;
}



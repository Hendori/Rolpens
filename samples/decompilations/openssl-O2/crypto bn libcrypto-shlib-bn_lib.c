
void BN_set_params(int mul,int high,int low,int mont)

{
  if ((-1 < mul) && (bn_limit_bits = mul, 0x1f < mul)) {
    bn_limit_bits = 0x1f;
  }
  if ((-1 < high) && (bn_limit_bits_high = high, 0x1f < high)) {
    bn_limit_bits_high = 0x1f;
  }
  if ((-1 < low) && (bn_limit_bits_low = low, 0x1f < low)) {
    bn_limit_bits_low = 0x1f;
  }
  if ((-1 < mont) && (bn_limit_bits_mont = mont, 0x1f < mont)) {
    bn_limit_bits_mont = 0x1f;
  }
  return;
}



int BN_get_params(int which)

{
  int iVar1;
  
  if (which == 0) {
    return bn_limit_bits;
  }
  if (which != 1) {
    if (which != 2) {
      iVar1 = 0;
      if (which == 3) {
        iVar1 = bn_limit_bits_mont;
      }
      return iVar1;
    }
    return bn_limit_bits_low;
  }
  return bn_limit_bits_high;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_value_one(void)

{
  return (BIGNUM *)const_one_3;
}



int BN_num_bits_word(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = -(param_1 >> 0x20);
  uVar1 = (param_1 >> 0x20 ^ param_1) & lVar2 >> 0x3f ^ param_1;
  lVar3 = -(uVar1 >> 0x10);
  uVar1 = (uVar1 >> 0x10 ^ uVar1) & lVar3 >> 0x3f ^ uVar1;
  lVar5 = -(uVar1 >> 8);
  uVar1 = (uVar1 >> 8 ^ uVar1) & lVar5 >> 0x3f ^ uVar1;
  lVar6 = -(uVar1 >> 4);
  uVar1 = (uVar1 >> 4 ^ uVar1) & lVar6 >> 0x3f ^ uVar1;
  lVar4 = -(uVar1 >> 2);
  return (((((uint)(lVar2 >> 0x3f) & 0x20) + 1) - (uint)(param_1 == 0)) +
          ((uint)(lVar3 >> 0x3f) & 0x10) + ((uint)(lVar5 >> 0x3f) & 8) + ((uint)(lVar6 >> 0x3f) & 4)
         + ((uint)(lVar4 >> 0x3f) & 2)) -
         (int)((long)-(((uVar1 >> 2 ^ uVar1) & lVar4 >> 0x3f ^ uVar1) >> 1) >> 0x3f);
}



void bn_init(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = nilbn_1._16_8_;
  uVar1 = nilbn_1._8_8_;
  *param_1 = nilbn_1._0_8_;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIGNUM * BN_new(void)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xf8);
  if (pBVar1 != (BIGNUM *)0x0) {
    pBVar1->flags = 1;
  }
  return pBVar1;
}



void BN_secure_new(void)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_new();
  if (pBVar1 != (BIGNUM *)0x0) {
    pBVar1->flags = pBVar1->flags | 8;
  }
  return;
}



void BN_swap(BIGNUM *a,BIGNUM *b)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = b->flags;
  puVar4 = a->d;
  uVar2 = a->flags;
  iVar6 = a->top;
  iVar7 = a->dmax;
  iVar3 = a->neg;
  a->d = b->d;
  iVar5 = b->dmax;
  a->top = b->top;
  a->dmax = iVar5;
  a->neg = b->neg;
  b->top = iVar6;
  b->dmax = iVar7;
  b->neg = iVar3;
  b->d = puVar4;
  a->flags = uVar2 & 1 | uVar1 & 0xe;
  b->flags = uVar1 & 1 | uVar2 & 0xe;
  return;
}



void BN_clear(BIGNUM *a)

{
  if (a != (BIGNUM *)0x0) {
    if (a->d != (ulong *)0x0) {
      OPENSSL_cleanse(a->d,(long)a->dmax << 3);
    }
    a->neg = 0;
    a->top = 0;
    return;
  }
  return;
}



ulong BN_get_word(BIGNUM *a)

{
  ulong uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if ((a->top < 2) && (uVar1 = 0, a->top == 1)) {
    return *a->d;
  }
  return uVar1;
}



int BN_cmp(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if ((a == (BIGNUM *)0x0) || (b == (BIGNUM *)0x0)) {
    uVar3 = 0xffffffff;
    if (a == (BIGNUM *)0x0) {
      return (int)(b != (BIGNUM *)0x0);
    }
  }
  else {
    iVar1 = a->neg;
    if (iVar1 != b->neg) {
      return -(uint)(iVar1 != 0) | 1;
    }
    iVar2 = a->top;
    uVar5 = -(uint)(iVar1 == 0) | 1;
    uVar3 = -(uint)(iVar1 != 0) | 1;
    if (iVar2 <= b->top) {
      if (iVar2 < b->top) {
        return uVar5;
      }
      if (-1 < iVar2 + -1) {
        lVar4 = (long)(iVar2 + -1);
        do {
          if (b->d[lVar4] < a->d[lVar4]) {
            return uVar3;
          }
          if (a->d[lVar4] < b->d[lVar4]) {
            return uVar5;
          }
          lVar4 = lVar4 + -1;
        } while (-1 < (int)lVar4);
      }
      return 0;
    }
  }
  return uVar3;
}



int BN_is_bit_set(BIGNUM *a,int n)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < n) && (uVar1 = 0, n >> 6 < a->top)) {
    uVar1 = (uint)(a->d[n >> 6] >> ((byte)n & 0x3f)) & 1;
  }
  return uVar1;
}



undefined8 ossl_bn_mask_bits_fixed_top(long *param_1,uint param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((-1 < (int)param_2) && (iVar2 = (int)param_2 >> 6, iVar2 < (int)param_1[1])) {
    if ((param_2 & 0x3f) == 0) {
      *(int *)(param_1 + 1) = iVar2;
    }
    else {
      *(int *)(param_1 + 1) = iVar2 + 1;
      puVar1 = (ulong *)(*param_1 + (long)iVar2 * 8);
      *puVar1 = *puVar1 & ~(-1L << (sbyte)(param_2 & 0x3f));
    }
    uVar3 = 1;
  }
  return uVar3;
}



int bn_cmp_words(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + -8 + (long)param_3 * 8);
    uVar2 = *(ulong *)(param_2 + -8 + (long)param_3 * 8);
    if (uVar1 != uVar2) {
      return (-(uint)(uVar2 < uVar1) & 2) - 1;
    }
    if (-1 < param_3 + -2) {
      lVar3 = (long)(param_3 + -2);
      do {
        uVar1 = *(ulong *)(param_1 + lVar3 * 8);
        uVar2 = *(ulong *)(param_2 + lVar3 * 8);
        if (uVar1 != uVar2) {
          return (-(uint)(uVar2 < uVar1) & 2) - 1;
        }
        lVar3 = lVar3 + -1;
      } while (-1 < (int)lVar3);
    }
  }
  return 0;
}



undefined8 bn_cmp_part_words(long param_1,long param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((int)param_4 < 0) {
    plVar2 = (long *)(param_2 + ((long)(param_3 + -1) - (long)(int)param_4) * 8);
    do {
      if (*plVar2 != 0) {
        return 0xffffffff;
      }
      plVar2 = plVar2 + -1;
    } while (plVar2 != (long *)(param_2 + -0x10 + (long)param_3 * 8 + (long)(int)param_4 * -8 +
                               (ulong)~param_4 * -8));
  }
  else if (param_4 != 0) {
    lVar3 = (long)(int)param_4;
    do {
      if (*(long *)(param_1 + (long)param_3 * 8 + -8 + lVar3 * 8) != 0) {
        return 1;
      }
      lVar3 = lVar3 + -1;
    } while ((int)lVar3 != 0);
  }
  uVar1 = bn_cmp_words(param_1,param_2,param_3);
  return uVar1;
}



void BN_consttime_swap(ulong param_1,long *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  uVar9 = 0xffffffffffffffff - ((long)(param_1 - 1 & ~param_1) >> 0x3f);
  uVar6 = (uint)uVar9;
  uVar5 = (*(uint *)(param_3 + 1) ^ *(uint *)(param_2 + 1)) & uVar6;
  *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) ^ uVar5;
  uVar1 = *(uint *)(param_2 + 2);
  *(uint *)(param_3 + 1) = *(uint *)(param_3 + 1) ^ uVar5;
  uVar5 = (*(uint *)(param_3 + 2) ^ uVar1) & uVar6;
  *(uint *)(param_2 + 2) = uVar1 ^ uVar5;
  uVar1 = *(uint *)((long)param_2 + 0x14);
  *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) ^ uVar5;
  uVar6 = (*(uint *)((long)param_3 + 0x14) ^ uVar1) & uVar6 & 4;
  *(uint *)((long)param_2 + 0x14) = uVar1 ^ uVar6;
  *(uint *)((long)param_3 + 0x14) = *(uint *)((long)param_3 + 0x14) ^ uVar6;
  if (0 < param_4) {
    puVar2 = (ulong *)*param_2;
    puVar8 = (ulong *)*param_3;
    puVar3 = puVar2;
    do {
      puVar4 = puVar3 + 1;
      uVar7 = (*puVar8 ^ *puVar3) & uVar9;
      *puVar3 = *puVar3 ^ uVar7;
      *puVar8 = *puVar8 ^ uVar7;
      puVar8 = puVar8 + 1;
      puVar3 = puVar4;
    } while (puVar2 + param_4 != puVar4);
  }
  return;
}



int BN_security_bits(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 0x3c00) {
    if (param_1 < 0x1e00) {
      if (param_1 < 0xc00) {
        if (param_1 < 0x800) {
          if (param_1 < 0x400) {
            return 0;
          }
          iVar1 = 0x50;
        }
        else {
          iVar1 = 0x70;
        }
      }
      else {
        iVar1 = 0x80;
      }
    }
    else {
      iVar1 = 0xc0;
    }
  }
  else {
    iVar1 = 0x100;
  }
  if (param_2 == -1) {
    return iVar1;
  }
  if (param_2 >> 1 < iVar1) {
    iVar1 = param_2 >> 1;
  }
  if (param_2 < 0xa0) {
    iVar1 = 0;
  }
  return iVar1;
}



void BN_zero_ex(long param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



bool BN_abs_is_word(undefined8 *param_1,long param_2)

{
  if (*(int *)(param_1 + 1) != 1) {
    return param_2 == 0 && *(int *)(param_1 + 1) == 0;
  }
  return *(long *)*param_1 == param_2;
}



bool BN_is_zero(long param_1)

{
  return *(int *)(param_1 + 8) == 0;
}



int BN_num_bits(BIGNUM *a)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = a->top;
  uVar2 = uVar3 - 1;
  if ((a->flags & 4U) == 0) {
    iVar4 = BN_is_zero();
    uVar8 = 0;
    if (iVar4 == 0) {
      iVar4 = BN_num_bits_word(a->d[(int)uVar2]);
      uVar8 = uVar2 * 0x40 + iVar4;
    }
  }
  else if (a->dmax < 1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    do {
      uVar5 = uVar2 ^ (uint)lVar9;
      uVar6 = (int)(~uVar5 & uVar5 - 1) >> 0x1f;
      puVar1 = a->d + lVar9;
      uVar7 = uVar7 | uVar6;
      lVar9 = lVar9 + 1;
      uVar5 = BN_num_bits_word(*puVar1);
      uVar8 = (~uVar7 & 0x40) + (uVar6 & uVar5) + uVar8;
    } while ((int)lVar9 < a->dmax);
    uVar8 = uVar8 & ~((int)(~uVar3 & uVar2) >> 0x1f);
  }
  return uVar8;
}



void BN_set_negative(BIGNUM *b,int n)

{
  int iVar1;
  
  if (n == 0) {
    b->neg = 0;
    return;
  }
  iVar1 = BN_is_zero();
  b->neg = (uint)(iVar1 == 0);
  return;
}



ulong BN_is_one(long param_1)

{
  ulong uVar1;
  
  uVar1 = BN_abs_is_word(param_1,1);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}



ulong BN_is_word(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = BN_abs_is_word();
  if (((int)uVar1 != 0) && (uVar1 = 1, param_2 != 0)) {
    return (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}



uint ossl_bn_is_word_fixed_top(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  
  uVar4 = 0;
  if (((int)param_1[2] == 0) && (uVar1 = *(uint *)(param_1 + 1), uVar4 = uVar1, uVar1 != 0)) {
    puVar2 = (ulong *)*param_1;
    uVar4 = (int)(~(uint)((param_2 ^ *puVar2) >> 0x20) & (uint)((param_2 ^ *puVar2) - 1 >> 0x20)) >>
            0x1f & 1;
    if (1 < (int)uVar1) {
      puVar5 = puVar2 + 1;
      do {
        uVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 & (int)(~(uint)(uVar3 >> 0x20) & (uint)(uVar3 - 1 >> 0x20)) >> 0x1f;
      } while (puVar2 + (ulong)(uVar1 - 2) + 2 != puVar5);
    }
  }
  return uVar4;
}



uint BN_is_odd(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 1)) {
    uVar1 = (uint)*(undefined8 *)*param_1 & 1;
  }
  return uVar1;
}



bool BN_is_negative(long param_1)

{
  return *(int *)(param_1 + 0x10) != 0;
}



void BN_to_montgomery(BIGNUM *param_1,BIGNUM *param_2,BN_MONT_CTX *param_3,BN_CTX *param_4)

{
  BN_mod_mul_montgomery(param_1,param_2,&param_3->RR,param_3,param_4);
  return;
}



void BN_with_flags(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = *(uint *)((long)param_2 + 0x14);
  param_1[1] = uVar3;
  param_1[2] = CONCAT44(uVar2 & 0xfffffffe | param_3 | *(uint *)((long)param_1 + 0x14) & 1,uVar1) |
               0x200000000;
  return;
}



void BN_GENCB_new(void)

{
  CRYPTO_malloc(0x18,"crypto/bn/bn_lib.c",1099);
  return;
}



void BN_GENCB_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void BN_set_flags(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return;
}



uint BN_get_flags(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x14) & param_2;
}



void bn_free_d(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = BN_get_flags(param_1,8);
  if (iVar1 != 0) {
    CRYPTO_secure_clear_free
              (*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"crypto/bn/bn_lib.c",0xce);
    return;
  }
  if (param_2 != 0) {
    CRYPTO_clear_free((void *)*param_1,(long)*(int *)((long)param_1 + 0xc) << 3,"crypto/bn/bn_lib.c"
                      ,0xd0);
    return;
  }
  CRYPTO_free((void *)*param_1);
  return;
}



void BN_clear_free(BIGNUM *a)

{
  int iVar1;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
  if (a->d != (ulong *)0x0) {
    iVar1 = BN_get_flags(a,2);
    if (iVar1 == 0) {
      bn_free_d(a,1);
    }
  }
  iVar1 = BN_get_flags(a,1);
  if (iVar1 == 0) {
    return;
  }
  OPENSSL_cleanse(a,0x18);
  CRYPTO_free(a);
  return;
}



void BN_free(BIGNUM *a)

{
  byte bVar1;
  int iVar2;
  
  if (a == (BIGNUM *)0x0) {
    return;
  }
  iVar2 = BN_get_flags(a,2);
  if (iVar2 == 0) {
    bn_free_d(a,0);
    bVar1 = (byte)a->flags;
  }
  else {
    bVar1 = (byte)a->flags;
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  CRYPTO_free(a);
  return;
}



BIGNUM * bn_expand2(BIGNUM *a,int words)

{
  int iVar1;
  ulong *__dest;
  
  if (words <= a->dmax) {
    return a;
  }
  if (0x7fffff < words) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_lib.c",0x10f,"bn_expand_internal");
    ERR_set_error(3,0x72,0);
    return (BIGNUM *)0x0;
  }
  iVar1 = BN_get_flags(a,2);
  if (iVar1 != 0) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_lib.c",0x113,"bn_expand_internal");
    ERR_set_error(3,0x69,0);
    return (BIGNUM *)0x0;
  }
  iVar1 = BN_get_flags(a,8);
  if (iVar1 == 0) {
    __dest = (ulong *)CRYPTO_zalloc((long)words << 3,"crypto/bn/bn_lib.c",0x119);
  }
  else {
    __dest = (ulong *)CRYPTO_secure_zalloc((long)words << 3,"crypto/bn/bn_lib.c",0x117);
  }
  if (__dest == (ulong *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (a->top < 1) {
    if (a->d == (ulong *)0x0) goto LAB_00100ba5;
  }
  else {
    memcpy(__dest,a->d,(long)a->top << 3);
  }
  bn_free_d(a,1);
LAB_00100ba5:
  a->d = __dest;
  a->dmax = words;
  return a;
}



int BN_set_word(BIGNUM *a,ulong w)

{
  BIGNUM *pBVar1;
  
  if ((a->dmax < 1) && (pBVar1 = bn_expand2(a,1), pBVar1 == (BIGNUM *)0x0)) {
    return 0;
  }
  a->neg = 0;
  *a->d = w;
  a->top = (uint)(w != 0);
  return 1;
}



int BN_ucmp(BIGNUM *a,BIGNUM *b)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  puVar1 = b->d;
  puVar2 = a->d;
  iVar8 = BN_get_flags();
  if (iVar8 == 0) {
    uVar10 = a->top - b->top;
    if ((uVar10 == 0) && (iVar8 = a->top + -1, -1 < iVar8)) {
      lVar12 = (long)iVar8;
      do {
        uVar3 = puVar2[lVar12];
        uVar4 = puVar1[lVar12];
        if (uVar3 != uVar4) {
          return (-(uint)(uVar4 < uVar3) & 2) - 1;
        }
        lVar12 = lVar12 + -1;
      } while (-1 < (int)lVar12);
    }
  }
  else {
    iVar8 = a->top;
    uVar10 = iVar8 - b->top;
    if (iVar8 == b->top) {
      if (iVar8 < 1) {
        uVar10 = 0;
      }
      else {
        lVar12 = 0;
        uVar10 = 0;
        do {
          lVar5 = *(long *)((long)puVar2 + lVar12);
          lVar6 = *(long *)((long)puVar1 + lVar12);
          lVar12 = lVar12 + 8;
          uVar11 = (uint)((ulong)lVar6 >> 0x20);
          uVar7 = (uint)((ulong)lVar5 >> 0x20);
          uVar9 = (int)(((uint)((ulong)(lVar5 - lVar6) >> 0x20) ^ uVar11 | uVar11 ^ uVar7) ^ uVar7)
                  >> 0x1f;
          uVar11 = (int)(((uint)((ulong)(lVar6 - lVar5) >> 0x20) ^ uVar7 | uVar11 ^ uVar7) ^ uVar11)
                   >> 0x1f;
          uVar10 = (~uVar9 & uVar10 | uVar9) & ~uVar11 | uVar11 & 1;
        } while (lVar12 != (long)iVar8 * 8);
      }
    }
  }
  return uVar10;
}



void BN_GENCB_set_old(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



void BN_GENCB_set(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_2;
  return;
}



undefined8 BN_GENCB_get_arg(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



BIGNUM * bn_wexpand(BIGNUM *param_1,int param_2)

{
  BIGNUM *pBVar1;
  
  if (param_2 <= param_1->dmax) {
    return param_1;
  }
  pBVar1 = bn_expand2(param_1,param_2);
  return pBVar1;
}



BIGNUM * BN_copy(BIGNUM *a,BIGNUM *b)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  
  iVar2 = BN_get_flags(b,4);
  iVar1 = b->dmax;
  if (iVar2 == 0) {
    iVar1 = b->top;
  }
  pBVar3 = a;
  if ((b != a) && (pBVar3 = (BIGNUM *)bn_wexpand(a,iVar1), pBVar3 != (BIGNUM *)0x0)) {
    iVar2 = b->top;
    if (0 < iVar2) {
      memcpy(a->d,b->d,(long)iVar1 << 3);
      iVar2 = b->top;
    }
    iVar1 = b->neg;
    a->top = iVar2;
    a->neg = iVar1;
    pBVar3 = a;
  }
  return pBVar3;
}



BIGNUM * BN_dup(BIGNUM *a)

{
  int iVar1;
  BIGNUM *a_00;
  BIGNUM *pBVar2;
  
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_get_flags(a,8);
    if (iVar1 == 0) {
      a_00 = BN_new();
    }
    else {
      a_00 = (BIGNUM *)BN_secure_new();
    }
    if (a_00 != (BIGNUM *)0x0) {
      pBVar2 = BN_copy(a_00,a);
      if (pBVar2 != (BIGNUM *)0x0) {
        return a_00;
      }
      BN_free(a_00);
      return (BIGNUM *)0x0;
    }
  }
  return (BIGNUM *)0x0;
}



int BN_set_bit(BIGNUM *a,int n)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  
  if (n < 0) {
    return 0;
  }
  iVar3 = n >> 6;
  if (iVar3 < a->top) {
    puVar4 = a->d;
  }
  else {
    lVar2 = bn_wexpand();
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = a->top;
    puVar4 = a->d;
    if (iVar1 <= iVar3) {
      memset(puVar4 + iVar1,0,(ulong)(uint)(iVar3 - iVar1) * 8 + 8);
    }
    a->top = iVar3 + 1;
  }
  puVar4[iVar3] = puVar4[iVar3] | 1L << ((byte)n & 0x3f);
  return 1;
}



void bn_correct_top_consttime(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  
  if (0 < *(int *)((long)param_1 + 0xc)) {
    uVar3 = 0;
    lVar4 = 1;
    do {
      lVar1 = *(long *)(*param_1 + -8 + lVar4 * 8);
      uVar2 = (int)(((uint)lVar4 - (int)param_1[1]) - 1 &
                   ((uint)((ulong)-lVar1 >> 0x20) | (uint)((ulong)lVar1 >> 0x20))) >> 0x1f;
      uVar3 = uVar2 & (uint)lVar4 | ~uVar2 & uVar3;
      bVar5 = *(int *)((long)param_1 + 0xc) != lVar4;
      lVar4 = lVar4 + 1;
    } while (bVar5);
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & ~((int)(~uVar3 & uVar3 - 1) >> 0x1f);
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



void bn_correct_top(long *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    plVar2 = (long *)(*param_1 + (long)iVar1 * 8);
    do {
      plVar2 = plVar2 + -1;
      if (*plVar2 != 0) break;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



BIGNUM * bin2bn(byte *param_1,int param_2,BIGNUM *param_3,int param_4,int param_5)

{
  byte bVar1;
  ulong *puVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  BIGNUM *a;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  if (param_2 < 0) {
    return (BIGNUM *)0x0;
  }
  a = (BIGNUM *)0x0;
  if ((param_3 != (BIGNUM *)0x0) || (a = BN_new(), param_3 = a, a != (BIGNUM *)0x0)) {
    if (param_2 == 0) {
      BN_clear(param_3);
      return param_3;
    }
    pbVar8 = param_1 + (long)param_2 + -1;
    if (param_4 == 1) {
      bVar1 = *pbVar8;
      iVar9 = -1;
      iVar6 = 1;
      pbVar3 = pbVar8;
      pbVar8 = param_1;
    }
    else {
      iVar9 = 1;
      iVar6 = -1;
      bVar1 = *param_1;
      pbVar3 = param_1;
    }
    if (param_5 == 0) {
      uVar12 = (uint)(int)(char)bVar1 >> 0x1f;
      uVar13 = (int)(char)bVar1 >> 0x1f & 0xff;
      goto LAB_0010112d;
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar7 = 0;
    if (*pbVar3 == 0) {
      do {
        uVar13 = uVar7;
        pbVar3 = pbVar3 + iVar9;
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          if (uVar13 != 0xff) {
            param_3->top = 0;
            return param_3;
          }
          iVar14 = 0;
          iVar9 = 1;
          param_2 = 1;
          goto LAB_001011ac;
        }
LAB_0010112d:
        uVar7 = uVar13;
      } while (*pbVar3 == uVar13);
    }
    if ((uVar13 == 0xff) && (-1 < (char)*pbVar3)) {
      iVar14 = param_2 >> 3;
      iVar9 = iVar14 + 1;
      param_2 = param_2 + 1;
    }
    else {
      iVar14 = param_2 + -1 >> 3;
      iVar9 = iVar14 + 1;
    }
LAB_001011ac:
    lVar4 = bn_wexpand(param_3);
    if (lVar4 != 0) {
      param_3->top = iVar9;
      puVar2 = param_3->d;
      uVar11 = 0;
      param_3->neg = uVar12;
      do {
        uVar7 = 0;
        uVar10 = 0;
        if (0 < param_2) {
          do {
            uVar5 = (ulong)(uVar12 + (*pbVar8 ^ uVar13) & 0xff);
            uVar12 = (uint)(uVar5 < (ulong)(long)(int)(*pbVar8 ^ uVar13));
            param_2 = param_2 + -1;
            pbVar8 = pbVar8 + iVar6;
            uVar10 = uVar10 | uVar5 << ((byte)uVar7 & 0x3f);
            uVar7 = uVar7 + 8;
            if (param_2 < 1) break;
          } while (uVar7 < 0x40);
        }
        puVar2[uVar11] = uVar10;
        if (iVar14 == (int)uVar11) {
          bn_correct_top(param_3);
          return param_3;
        }
        uVar11 = (ulong)((int)uVar11 + 1);
      } while( true );
    }
    BN_free(a);
  }
  return (BIGNUM *)0x0;
}



BIGNUM * BN_bin2bn(uchar *s,int len,BIGNUM *ret)

{
  BIGNUM *pBVar1;
  
  pBVar1 = (BIGNUM *)bin2bn();
  return pBVar1;
}



void BN_signed_bin2bn(void)

{
  bin2bn();
  return;
}



void BN_lebin2bn(void)

{
  bin2bn();
  return;
}



void BN_native2bn(void)

{
  BN_lebin2bn();
  return;
}



void BN_signed_lebin2bn(void)

{
  bin2bn();
  return;
}



void BN_signed_native2bn(void)

{
  BN_signed_lebin2bn();
  return;
}



int bn2binpad(BIGNUM *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  BIGNUM local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BN_num_bits(param_1);
  iVar11 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar11 = iVar2 + 7;
  }
  iVar11 = iVar11 >> 3;
  if (param_5 == 0) {
    uVar6 = param_1->neg;
    bVar9 = -(uVar6 != 0);
    if (iVar11 * 8 == iVar2) {
      uVar4 = (uint)(uVar6 == 0);
      iVar11 = iVar11 + (uint)(uVar6 == 0);
    }
    else {
      iVar11 = iVar11 + uVar6;
      uVar4 = uVar6;
    }
  }
  else {
    uVar4 = 0;
    uVar6 = 0;
    bVar9 = 0;
  }
  iVar2 = iVar11;
  if ((param_3 != -1) && (iVar2 = param_3, param_3 < iVar11)) {
    local_58.d = param_1->d;
    local_58.top = param_1->top;
    local_58.dmax = param_1->dmax;
    local_58.neg = param_1->neg;
    local_58.flags = param_1->flags;
    bn_correct_top(&local_58);
    iVar3 = BN_num_bits(&local_58);
    iVar11 = iVar3 + 7;
    if (iVar3 + 7 < 0) {
      iVar11 = iVar3 + 0xe;
    }
    if (param_3 < (int)((iVar11 >> 3) + uVar4)) {
      iVar2 = -1;
      goto LAB_00101472;
    }
  }
  lVar8 = (long)(param_1->dmax * 8);
  if (lVar8 == 0) {
    if (iVar2 != 0) {
      memset(param_2,0,(long)iVar2);
    }
  }
  else {
    lVar10 = 1;
    if (param_4 != 1) {
      param_2 = param_2 + (long)iVar2 + -1;
      lVar10 = -1;
    }
    iVar11 = param_1->top;
    if (iVar2 != 0) {
      lVar7 = -(long)(iVar11 * 8);
      uVar5 = 0;
      do {
        bVar1 = (byte)(*(ulong *)((long)param_1->d + (uVar5 & 0xfffffffffffffff8)) >>
                      (sbyte)(((uint)uVar5 & 7) << 3)) & (byte)(lVar7 >> 0x3f) ^ bVar9;
        *param_2 = bVar1 + (byte)uVar6;
        lVar7 = lVar7 + 1;
        uVar6 = (uint)CARRY1(bVar1,(byte)uVar6);
        param_2 = param_2 + lVar10;
        uVar5 = uVar5 - ((long)(uVar5 - (lVar8 + -1)) >> 0x3f);
      } while ((long)iVar2 + (long)iVar11 * -8 != lVar7);
    }
  }
LAB_00101472:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 BN_bn2binpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = bn2binpad();
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 BN_signed_bn2bin(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = bn2binpad();
    return uVar1;
  }
  return 0xffffffff;
}



int BN_bn2bin(BIGNUM *a,uchar *to)

{
  int iVar1;
  
  iVar1 = bn2binpad(a,to,0xffffffff,0,1);
  return iVar1;
}



undefined8 BN_bn2lebinpad(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = bn2binpad();
    return uVar1;
  }
  return 0xffffffff;
}



void BN_bn2nativepad(void)

{
  BN_bn2lebinpad();
  return;
}



undefined8 BN_signed_bn2lebin(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (-1 < param_3) {
    uVar1 = bn2binpad();
    return uVar1;
  }
  return 0xffffffff;
}



void BN_signed_bn2native(void)

{
  BN_signed_bn2lebin();
  return;
}



int BN_clear_bit(BIGNUM *a,int n)

{
  byte bVar1;
  
  if (-1 < n) {
    if (n >> 6 < a->top) {
      bVar1 = (byte)n & 0x3f;
      a->d[n >> 6] = a->d[n >> 6] & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      bn_correct_top();
      return 1;
    }
  }
  return 0;
}



int BN_mask_bits(BIGNUM *a,int n)

{
  int iVar1;
  
  iVar1 = ossl_bn_mask_bits_fixed_top();
  if (iVar1 == 0) {
    return iVar1;
  }
  bn_correct_top(a);
  return iVar1;
}




undefined8 mpn_base_power_of_two_p(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x21) {
    switch(param_1) {
    case 2:
      return 1;
    default:
      return 0;
    case 4:
      uVar1 = 2;
      break;
    case 8:
      return 3;
    case 0x10:
      return 4;
    case 0x20:
      return 5;
    }
  }
  else {
    uVar1 = 7;
    if ((param_1 != 0x80) && (uVar1 = 8, param_1 != 0x100)) {
      uVar1 = 0;
      if (param_1 == 0x40) {
        uVar1 = 6;
      }
      return uVar1;
    }
  }
  return uVar1;
}



long mpn_set_str_bits(long param_1,byte *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if (param_3 != 0) {
    lVar5 = 0;
    uVar2 = 0;
    uVar4 = 0;
    pbVar3 = param_2 + param_3 + -1;
    do {
      uVar1 = uVar2 + param_4;
      uVar4 = uVar4 | (ulong)*pbVar3 << ((byte)uVar2 & 0x3f);
      uVar2 = uVar1;
      if (0x3f < uVar1) {
        *(ulong *)(param_1 + lVar5 * 8) = uVar4;
        uVar2 = uVar1 - 0x40;
        lVar5 = lVar5 + 1;
        uVar4 = (ulong)(*pbVar3 >> ((char)param_4 - (char)uVar2 & 0x1fU));
      }
      bVar6 = param_2 != pbVar3;
      pbVar3 = pbVar3 + -1;
    } while (bVar6);
    if (uVar4 != 0) {
      *(ulong *)(param_1 + lVar5 * 8) = uVar4;
      return lVar5 + 1;
    }
    if (lVar5 < 1) {
      return lVar5;
    }
    do {
      if (*(long *)(param_1 + -8 + lVar5 * 8) != 0) {
        return lVar5;
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gmp_default_free(void *__ptr)

{
  free(__ptr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gmp_die(undefined8 param_1)

{
  __fprintf_chk(_stderr,2,&_LC0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



void gmp_default_realloc(void *param_1,undefined8 param_2,size_t param_3)

{
  size_t __size;
  void *pvVar1;
  
  __size = 1;
  if (param_3 != 0) {
    __size = param_3;
  }
  pvVar1 = realloc(param_1,__size);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_realloc: Virtual memory exhausted.");
}



long mpn_common_scan(ulong param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  
  if (param_4 < param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0 <= i && i <= un","lib/mini-gmp.c",0x2d5,"mpn_common_scan");
  }
  if (param_1 == 0) {
    param_2 = param_2 + 1;
    while( true ) {
      if (param_2 == param_4) {
        lVar1 = -1;
        if (param_5 != 0) {
          lVar1 = param_4 << 6;
        }
        return lVar1;
      }
      param_1 = *(ulong *)(param_3 + param_2 * 8);
      if (param_1 != param_5) break;
      param_2 = param_2 + 1;
    }
    param_1 = param_1 ^ param_5;
  }
  iVar2 = 0;
  for (param_1 = -param_1 & param_1; param_1 < 0x100000000000000; param_1 = param_1 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)param_1; param_1 = param_1 * 2) {
    iVar2 = iVar2 + 1;
  }
  return param_2 * 0x40 + (ulong)(0x3f - iVar2);
}



long mpn_limb_get_str(long param_1,ulong param_2,undefined4 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar2 = 0;
  while( true ) {
    bVar1 = (byte)*param_3;
    uVar7 = param_2 >> (-bVar1 & 0x3f);
    param_2 = param_2 << (bVar1 & 0x3f);
    uVar3 = *(ulong *)(param_3 + 6) & 0xffffffff;
    uVar5 = *(ulong *)(param_3 + 6) >> 0x20;
    uVar8 = (uVar7 & 0xffffffff) * uVar3;
    uVar3 = uVar3 * (uVar7 >> 0x20);
    lVar4 = (uVar7 >> 0x20) * uVar5;
    uVar5 = (uVar8 >> 0x20) + uVar5 * (uVar7 & 0xffffffff) + uVar3;
    lVar6 = lVar4 + 0x100000000;
    if (uVar3 <= uVar5) {
      lVar6 = lVar4;
    }
    uVar8 = (uVar5 << 0x20) + (uVar8 & 0xffffffff);
    uVar3 = *(ulong *)(param_3 + 2);
    lVar6 = uVar7 + 1 + (uVar5 >> 0x20) + (ulong)CARRY8(uVar8,param_2) + lVar6;
    uVar7 = param_2 - uVar3 * lVar6;
    bVar9 = uVar8 + param_2 < uVar7;
    param_2 = lVar6 - (ulong)bVar9;
    uVar5 = 0;
    if (bVar9) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 + uVar7;
    if (uVar3 <= uVar5) {
      uVar5 = uVar5 - uVar3;
      param_2 = param_2 + 1;
    }
    if ((0xffffffffffffffffU >> (-bVar1 & 0x3f) & uVar5) != 0) break;
    *(char *)(param_1 + lVar2) = (char)(uVar5 >> (bVar1 & 0x3f));
    lVar2 = lVar2 + 1;
    if (param_2 == 0) {
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(r & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - binv->shift))) == 0","lib/mini-gmp.c",0x4f4,
                "mpn_limb_get_str");
}



void gmp_default_alloc(size_t param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("size > 0","lib/mini-gmp.c",300,"gmp_default_alloc");
  }
  pvVar1 = malloc(param_1);
  if (pvVar1 != (void *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  gmp_die("gmp_default_alloc: Virtual memory exhausted.");
}



void mpn_limb_size_in_base_2_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("u > 0","lib/mini-gmp.c",0x4c3,"mpn_limb_size_in_base_2");
}



void mpz_limbs_modify_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x688,"mpz_limbs_modify");
}



void mpz_divexact_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0x9e1,"mpz_divexact");
}



void mpz_realloc(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 1;
  if (0 < param_2) {
    lVar3 = param_2;
  }
  if (*param_1 == 0) {
    uVar4 = (*(code *)gmp_allocate_func)();
  }
  else {
    uVar4 = (*(code *)gmp_reallocate_func)
                      (*(undefined8 *)(param_1 + 2),(long)*param_1 << 3,lVar3 * 8);
  }
  iVar1 = param_1[1];
  *(undefined8 *)(param_1 + 2) = uVar4;
  *param_1 = (int)lVar3;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (lVar3 < iVar2) {
    param_1[1] = 0;
  }
  return;
}



void mpn_get_str_bits(long param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = *(ulong *)(param_3 + -8 + param_4 * 8);
  if (uVar2 != 0) {
    uVar7 = 0;
    for (; uVar2 < 0x100000000000000; uVar2 = uVar2 << 8) {
      uVar7 = (ulong)((int)uVar7 + 8);
    }
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
      uVar7 = (ulong)((int)uVar7 + 1);
    }
    uVar8 = (ulong)param_2;
    uVar7 = ((param_4 + -1) * 0x40 + 0x3f + uVar8) - uVar7;
    uVar2 = uVar7 / uVar8;
    if (uVar8 <= uVar7) {
      uVar6 = 0;
      lVar4 = 0;
      do {
        uVar2 = uVar2 - 1;
        uVar5 = uVar6 + param_2;
        lVar1 = lVar4 * 8;
        bVar3 = (byte)(*(ulong *)(param_3 + lVar4 * 8) >> ((byte)uVar6 & 0x3f));
        uVar6 = uVar5;
        if ((0x3f < uVar5) && (lVar4 = lVar4 + 1, lVar4 < param_4)) {
          uVar6 = uVar5 - 0x40;
          bVar3 = (byte)(*(long *)(param_3 + 8 + lVar1) << ((byte)param_2 - (char)uVar6 & 0x3f)) |
                  bVar3;
        }
        *(byte *)(param_1 + uVar2) = bVar3 & (char)(1 << ((byte)param_2 & 0x1f)) - 1U;
      } while (uVar2 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  mpn_limb_size_in_base_2_part_0();
}



void mpz_abs_sub_bit(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar2 = *(long *)(param_1 + 8);
  iVar7 = -iVar1;
  if (0 < iVar1) {
    iVar7 = iVar1;
  }
  lVar8 = (long)iVar7;
  if (lVar8 <= (long)(param_2 >> 6)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("limb_index < dn","lib/mini-gmp.c",0xed8,"mpz_abs_sub_bit");
  }
  puVar5 = (ulong *)(lVar2 + (param_2 >> 6) * 8);
  uVar4 = 1L << ((byte)param_2 & 0x3f);
  do {
    uVar9 = uVar4;
    uVar3 = *puVar5;
    puVar6 = puVar5 + 1;
    *puVar5 = uVar3 - uVar9;
    puVar5 = puVar6;
    uVar4 = (ulong)(uVar3 < uVar9);
  } while ((ulong *)(lVar2 + lVar8 * 8) != puVar6);
  if (uVar3 < uVar9) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0xeda,"mpz_abs_sub_bit");
  }
  do {
    if (*(long *)(lVar2 + -8 + lVar8 * 8) != 0) break;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar7 = (int)lVar8;
  if (iVar1 < 0) {
    iVar7 = -(int)lVar8;
  }
  *(int *)(param_1 + 4) = iVar7;
  return;
}



void mpz_abs_add_bit(int *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  iVar7 = param_1[1];
  iVar1 = -iVar7;
  if (0 < iVar7) {
    iVar1 = iVar7;
  }
  uVar6 = param_2 >> 6;
  uVar5 = 1L << ((byte)param_2 & 0x3f);
  lVar8 = (long)iVar1;
  if ((long)uVar6 < lVar8) {
    lVar2 = *(long *)(param_1 + 2);
    puVar3 = (ulong *)(lVar2 + uVar6 * 8);
    do {
      uVar6 = uVar5 + *puVar3;
      puVar4 = puVar3 + 1;
      uVar5 = (ulong)CARRY8(uVar5,*puVar3);
      *puVar3 = uVar6;
      puVar3 = puVar4;
    } while (puVar4 != (ulong *)(lVar2 + lVar8 * 8));
    lVar9 = lVar8;
    if (uVar5 != 0) {
      lVar9 = lVar8 + 1;
      if (*param_1 <= iVar1) {
        lVar2 = mpz_realloc(param_1,lVar9);
        iVar7 = param_1[1];
      }
      *(undefined8 *)(lVar2 + lVar8 * 8) = 1;
    }
  }
  else {
    if ((long)uVar6 < (long)*param_1) {
      lVar2 = *(long *)(param_1 + 2);
    }
    else {
      lVar2 = mpz_realloc(param_1);
      iVar7 = param_1[1];
    }
    *(ulong *)(lVar2 + uVar6 * 8) = uVar5;
    lVar9 = uVar6 + 1;
    if (lVar8 < (long)uVar6) {
      memset((void *)(lVar2 + lVar8 * 8),0,(uVar6 - lVar8) * 8);
    }
  }
  iVar1 = -(int)lVar9;
  if (-1 < iVar7) {
    iVar1 = (int)lVar9;
  }
  param_1[1] = iVar1;
  return;
}



void mp_get_memory_functions(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = gmp_allocate_func;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = gmp_reallocate_func;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = gmp_free_func;
  }
  return;
}



void mp_set_memory_functions(code *param_1,code *param_2,code *param_3)

{
  if (param_1 == (code *)0x0) {
    param_1 = gmp_default_alloc;
  }
  if (param_2 == (code *)0x0) {
    param_2 = gmp_default_realloc;
  }
  if (param_3 == (code *)0x0) {
    param_3 = gmp_default_free;
  }
  gmp_allocate_func = param_1;
  gmp_reallocate_func = param_2;
  gmp_free_func = param_3;
  return;
}



void mpn_copyi(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



void mpn_copyd(long param_1,long param_2,long param_3)

{
  bool bVar1;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    do {
      *(undefined8 *)(param_1 + param_3 * 8) = *(undefined8 *)(param_2 + param_3 * 8);
      bVar1 = param_3 != 0;
      param_3 = param_3 + -1;
    } while (bVar1);
  }
  return;
}



void mpn_cmp(void)

{
  FUN_0010090d();
  return;
}



int FUN_0010090d(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  do {
    param_3 = param_3 + -1;
    if (param_3 < 0) {
      return 0;
    }
    uVar1 = *(ulong *)(param_1 + param_3 * 8);
    uVar2 = *(ulong *)(param_2 + param_3 * 8);
  } while (uVar1 == uVar2);
  return (-(uint)(uVar2 < uVar1) & 2) - 1;
}



bool mpn_zero_p(long param_1,long param_2)

{
  if (0 < param_2) {
    do {
      if (*(long *)(param_1 + -8 + param_2 * 8) != 0) break;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_2 == 0;
}



void mpn_zero(void *param_1,long param_2)

{
  if (0 < param_2) {
    memset(param_1,0,param_2 * 8);
    return;
  }
  return;
}



void mpn_add_1(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < param_3) {
    lVar3 = 0;
    do {
      puVar1 = (ulong *)(param_2 + lVar3 * 8);
      uVar2 = *puVar1;
      *(ulong *)(param_1 + lVar3 * 8) = param_4 + *puVar1;
      lVar3 = lVar3 + 1;
      param_4 = (ulong)CARRY8(param_4,uVar2);
    } while (param_3 != lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x1c3,"mpn_add_1");
}



void mpn_add_n(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0;
  if (0 < param_4) {
    lVar6 = 0;
    do {
      puVar1 = (ulong *)(param_2 + lVar6 * 8);
      uVar2 = *puVar1;
      uVar4 = uVar5 + *puVar1;
      puVar1 = (ulong *)(param_3 + lVar6 * 8);
      uVar3 = *puVar1;
      *(ulong *)(param_1 + lVar6 * 8) = uVar4 + *puVar1;
      uVar5 = (ulong)CARRY8(uVar5,uVar2) + (ulong)CARRY8(uVar4,uVar3);
      lVar6 = lVar6 + 1;
    } while (param_4 != lVar6);
    return;
  }
  return;
}



void mpn_add(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x1e9,"mpn_add");
  }
  uVar5 = 0;
  lVar6 = 0;
  if (0 < param_5) {
    do {
      puVar1 = (ulong *)(param_2 + lVar6 * 8);
      uVar2 = *puVar1;
      uVar4 = uVar5 + *puVar1;
      puVar1 = (ulong *)(param_4 + lVar6 * 8);
      uVar3 = *puVar1;
      *(ulong *)(param_1 + lVar6 * 8) = uVar4 + *puVar1;
      uVar5 = (ulong)CARRY8(uVar5,uVar2) + (ulong)CARRY8(uVar4,uVar3);
      lVar6 = lVar6 + 1;
    } while (param_5 != lVar6);
  }
  if (param_5 < param_3) {
    param_5 = param_5 * 8;
    do {
      uVar2 = *(ulong *)(param_2 + param_5);
      *(ulong *)(param_1 + param_5) = uVar5 + *(ulong *)(param_2 + param_5);
      param_5 = param_5 + 8;
      uVar5 = (ulong)CARRY8(uVar5,uVar2);
    } while (param_5 != param_3 * 8);
    return;
  }
  return;
}



long mpz_abs_add(int *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  iVar1 = *(int *)(param_3 + 4);
  lVar6 = (long)iVar2;
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  lVar3 = (long)iVar2;
  lVar4 = lVar3;
  lVar5 = param_3;
  if (lVar3 <= lVar6) {
    lVar4 = lVar6;
    lVar5 = param_2;
    lVar6 = lVar3;
    param_2 = param_3;
  }
  if (lVar4 < *param_1) {
    lVar3 = *(long *)(param_1 + 2);
  }
  else {
    lVar3 = mpz_realloc(param_1,lVar4 + 1);
  }
  lVar6 = mpn_add(lVar3,*(undefined8 *)(lVar5 + 8),lVar4,*(undefined8 *)(param_2 + 8),lVar6);
  *(long *)(lVar3 + lVar4 * 8) = lVar6;
  return lVar6 + lVar4;
}



void mpn_sub_1(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (0 < param_3) {
    lVar2 = 0;
    do {
      uVar1 = *(ulong *)(param_2 + lVar2 * 8);
      *(ulong *)(param_1 + lVar2 * 8) = uVar1 - param_4;
      lVar2 = lVar2 + 1;
      param_4 = (ulong)(uVar1 < param_4);
    } while (param_3 != lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n > 0","lib/mini-gmp.c",0x1f6,"mpn_sub_1");
}



void mpn_sub_n(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  if (0 < param_4) {
    lVar5 = 0;
    do {
      puVar1 = (ulong *)(param_3 + lVar5 * 8);
      uVar3 = uVar4 + *puVar1;
      uVar2 = *(ulong *)(param_2 + lVar5 * 8);
      uVar4 = (ulong)CARRY8(uVar4,*puVar1) + (ulong)(uVar2 < uVar3);
      *(ulong *)(param_1 + lVar5 * 8) = uVar2 - uVar3;
      lVar5 = lVar5 + 1;
    } while (param_4 != lVar5);
    return;
  }
  return;
}



void mpn_sub(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("an >= bn","lib/mini-gmp.c",0x21d,"mpn_sub");
  }
  uVar4 = 0;
  lVar5 = 0;
  if (0 < param_5) {
    do {
      puVar1 = (ulong *)(param_4 + lVar5 * 8);
      uVar3 = uVar4 + *puVar1;
      uVar2 = *(ulong *)(param_2 + lVar5 * 8);
      uVar4 = (ulong)CARRY8(uVar4,*puVar1) + (ulong)(uVar2 < uVar3);
      *(ulong *)(param_1 + lVar5 * 8) = uVar2 - uVar3;
      lVar5 = lVar5 + 1;
    } while (param_5 != lVar5);
  }
  if (param_5 < param_3) {
    param_5 = param_5 * 8;
    do {
      uVar2 = *(ulong *)(param_2 + param_5);
      *(ulong *)(param_1 + param_5) = uVar2 - uVar4;
      param_5 = param_5 + 8;
      uVar4 = (ulong)(uVar2 < uVar4);
    } while (param_5 != param_3 << 3);
    return;
  }
  return;
}



long mpz_abs_sub(int *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_3 + 4);
  lVar7 = *(long *)(param_3 + 8);
  lVar12 = *(long *)(param_2 + 8);
  iVar5 = -iVar1;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  iVar6 = -iVar2;
  if (0 < iVar2) {
    iVar6 = iVar2;
  }
  lVar10 = (long)iVar5;
  lVar11 = (long)iVar6;
  lVar9 = lVar10;
  if (lVar10 == lVar11) {
    do {
      lVar8 = lVar9 + -1;
      if (lVar9 == 0) {
        return 0;
      }
      uVar3 = *(ulong *)(lVar12 + lVar8 * 8);
      uVar4 = *(ulong *)(lVar7 + lVar8 * 8);
      lVar9 = lVar8;
    } while (uVar3 == uVar4);
    if (uVar4 < uVar3) goto LAB_00100d55;
  }
  else if (lVar11 <= lVar10) {
LAB_00100d55:
    if (*param_1 < iVar5) {
      lVar9 = mpz_realloc(param_1,lVar10);
      lVar7 = *(long *)(param_3 + 8);
      lVar12 = *(long *)(param_2 + 8);
    }
    else {
      lVar9 = *(long *)(param_1 + 2);
    }
    lVar7 = mpn_sub(lVar9,lVar12,lVar10,lVar7,lVar11);
    if (lVar7 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
      do {
        if (*(long *)(lVar9 + -8 + lVar10 * 8) != 0) {
          return lVar10;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("__cy == 0","lib/mini-gmp.c",0x7de,"mpz_abs_sub");
  }
  if (*param_1 < iVar6) {
    lVar9 = mpz_realloc(param_1,lVar11);
    lVar12 = *(long *)(param_2 + 8);
    lVar7 = *(long *)(param_3 + 8);
  }
  else {
    lVar9 = *(long *)(param_1 + 2);
  }
  lVar7 = mpn_sub(lVar9,lVar7,lVar11,lVar12,lVar10);
  if (lVar7 == 0) {
    if (iVar2 != 0) {
      do {
        if (*(long *)(lVar9 + -8 + lVar11 * 8) != 0) {
          return -lVar11;
        }
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0x7e4,"mpz_abs_sub");
}



ulong mpn_mul_1(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < param_3) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar3 = *(ulong *)(param_2 + lVar7 * 8);
      uVar2 = uVar3 & 0xffffffff;
      uVar3 = uVar3 >> 0x20;
      uVar1 = uVar2 * (param_4 & 0xffffffff);
      uVar8 = uVar3 * (param_4 & 0xffffffff);
      lVar4 = uVar3 * (param_4 >> 0x20);
      uVar3 = uVar2 * (param_4 >> 0x20) + uVar8 + (uVar1 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 <= uVar3) {
        lVar5 = lVar4;
      }
      uVar1 = (uVar1 & 0xffffffff) + uVar6 + (uVar3 << 0x20);
      *(ulong *)(param_1 + lVar7 * 8) = uVar1;
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)(uVar1 < uVar6) + (uVar3 >> 0x20) + lVar5;
    } while (param_3 != lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x22a,"mpn_mul_1");
}



long mpn_set_str_other(ulong *param_1,byte *param_2,ulong param_3,long param_4,uint *param_5)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sn > 0","lib/mini-gmp.c",0x563,"mpn_set_str_other");
  }
  uVar2 = *param_5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3 - 1;
  uVar4 = (ulong)*param_2;
  if (SUB168(auVar3 % ZEXT416(uVar2),0) == 0) {
    *param_1 = uVar4;
    uVar9 = 1;
    if (param_3 == 1) {
      return 1;
    }
  }
  else {
    uVar9 = (ulong)(SUB164(auVar3 % ZEXT416(uVar2),0) - 1);
    pbVar7 = param_2 + 1;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 * param_4 + (ulong)bVar1;
    } while (pbVar7 != param_2 + uVar9 + 2);
    uVar9 = uVar9 + 2;
    *param_1 = uVar4;
    if (param_3 <= uVar9) {
      lVar10 = 1;
      goto LAB_00101070;
    }
  }
  lVar10 = 1;
  uVar4 = uVar9;
  do {
    uVar8 = (ulong)param_2[uVar4];
    uVar9 = uVar4 + 1;
    if (1 < uVar2) {
      pbVar7 = param_2 + uVar9;
      do {
        bVar1 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 * param_4 + (ulong)bVar1;
      } while (pbVar7 != param_2 + uVar4 + (ulong)(uVar2 - 2) + 2);
      uVar9 = uVar4 + 2 + (ulong)(uVar2 - 2);
    }
    lVar5 = mpn_mul_1(param_1,param_1,lVar10,*(undefined8 *)(param_5 + 2));
    puVar6 = param_1;
    do {
      uVar4 = *puVar6;
      *puVar6 = uVar8 + *puVar6;
      uVar8 = (ulong)CARRY8(uVar8,uVar4);
      puVar6 = puVar6 + 1;
    } while (param_1 + lVar10 != puVar6);
    if (lVar5 + uVar8 != 0) {
      param_1[lVar10] = lVar5 + uVar8;
      lVar10 = lVar10 + 1;
    }
    uVar4 = uVar9;
  } while (uVar9 < param_3);
LAB_00101070:
  if (param_3 == uVar9) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("j == sn","lib/mini-gmp.c",0x57b,"mpn_set_str_other");
}



undefined8 mpz_set_str_part_0(int *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  ushort **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  size_t local_68;
  uint local_58 [2];
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar7 = __ctype_b_loc();
  bVar2 = *param_2;
  bVar5 = *(byte *)((long)*ppuVar7 + (ulong)bVar2 * 2 + 1);
  while ((bVar5 & 0x20) != 0) {
    bVar2 = param_2[1];
    param_2 = param_2 + 1;
    bVar5 = *(byte *)((long)*ppuVar7 + (ulong)bVar2 * 2 + 1);
  }
  param_2 = param_2 + (bVar2 == 0x2d);
  bVar5 = *param_2;
  if (param_3 == 0) {
    param_3 = 10;
    if (bVar5 == 0x30) {
      if ((param_2[1] & 0xdf) == 0x58) {
        bVar5 = param_2[2];
        param_3 = 0x10;
        param_2 = param_2 + 2;
      }
      else {
        if ((param_2[1] & 0xdf) != 0x42) {
          param_3 = 8;
          local_68 = strlen((char *)param_2);
          lVar8 = (*(code *)gmp_allocate_func)(local_68);
          iVar12 = 10;
          goto LAB_001011e2;
        }
        bVar5 = param_2[2];
        param_3 = 2;
        param_2 = param_2 + 2;
      }
    }
    if (bVar5 != 0) {
      local_68 = strlen((char *)param_2);
      lVar8 = (*(code *)gmp_allocate_func)(local_68);
      iVar12 = 10;
LAB_001011e2:
      bVar5 = *param_2;
      lVar14 = 0;
      if (bVar5 != 0) {
        do {
          if ((*(byte *)((long)*ppuVar7 + (ulong)bVar5 * 2 + 1) & 0x20) == 0) {
            if ((byte)(bVar5 - 0x30) < 10) {
              uVar6 = (int)(char)bVar5 - 0x30;
            }
            else if ((byte)(bVar5 + 0x9f) < 0x1a) {
              uVar6 = (int)(char)bVar5 + iVar12 + -0x61;
            }
            else {
              if (0x19 < (byte)(bVar5 + 0xbf)) goto LAB_00101248;
              uVar6 = (int)(char)bVar5 - 0x37;
            }
            if (param_3 <= uVar6) goto LAB_00101248;
            *(char *)(lVar8 + lVar14) = (char)uVar6;
            lVar14 = lVar14 + 1;
          }
          bVar5 = param_2[1];
          param_2 = param_2 + 1;
        } while (bVar5 != 0);
        if (lVar14 != 0) {
          uVar6 = mpn_base_power_of_two_p(param_3);
          if (uVar6 == 0) {
            uVar11 = (ulong)(int)param_3;
            local_58[0] = 1;
            local_50 = uVar11;
            do {
              local_50 = local_50 * uVar11;
              local_58[0] = local_58[0] + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar11;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_50;
            } while (SUB168(auVar3 * auVar4,8) == 0);
            uVar13 = (ulong)local_58[0];
            uVar1 = lVar14 + -1 + uVar13;
            uVar15 = uVar1 / uVar13;
            if ((long)*param_1 < (long)uVar15) {
              lVar10 = mpz_realloc(param_1,uVar15,uVar1 % uVar13);
            }
            else {
              lVar10 = *(long *)(param_1 + 2);
            }
            lVar14 = mpn_set_str_other(lVar10,lVar8,lVar14,uVar11,local_58);
            if (lVar14 < 1) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("rn > 0","lib/mini-gmp.c",0x1164,"mpz_set_str");
            }
            lVar14 = lVar14 - (ulong)(*(long *)(lVar10 + -8 + lVar14 * 8) == 0);
          }
          else {
            uVar15 = (ulong)uVar6 * lVar14 + 0x3f >> 6;
            if ((long)*param_1 < (long)uVar15) {
              uVar9 = mpz_realloc(param_1,uVar15,extraout_RDX,uVar6);
            }
            else {
              uVar9 = *(undefined8 *)(param_1 + 2);
            }
            lVar14 = mpn_set_str_bits(uVar9,lVar8,lVar14,uVar6);
          }
          if ((long)uVar15 < lVar14) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("rn <= alloc","lib/mini-gmp.c",0x1167,"mpz_set_str");
          }
          (*(code *)gmp_free_func)(lVar8,local_68);
          iVar12 = (int)lVar14;
          if (bVar2 == 0x2d) {
            iVar12 = -(int)lVar14;
          }
          uVar9 = 0;
          goto LAB_0010125d;
        }
      }
LAB_00101248:
      (*(code *)gmp_free_func)(lVar8,local_68);
    }
  }
  else if (bVar5 != 0) {
    local_68 = strlen((char *)param_2);
    lVar8 = (*(code *)gmp_allocate_func)(local_68);
    iVar12 = 10;
    if (0x24 < (int)param_3) {
      iVar12 = 0x24;
    }
    goto LAB_001011e2;
  }
  iVar12 = 0;
  uVar9 = 0xffffffff;
LAB_0010125d:
  param_1[1] = iVar12;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mpn_addmul_1(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (0 < param_3) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar4 = *(ulong *)(param_2 + lVar8 * 8);
      uVar3 = uVar4 & 0xffffffff;
      uVar4 = uVar4 >> 0x20;
      uVar2 = uVar3 * (param_4 & 0xffffffff);
      uVar9 = uVar4 * (param_4 & 0xffffffff);
      lVar5 = uVar4 * (param_4 >> 0x20);
      uVar4 = uVar3 * (param_4 >> 0x20) + uVar9 + (uVar2 >> 0x20);
      lVar6 = lVar5 + 0x100000000;
      if (uVar9 <= uVar4) {
        lVar6 = lVar5;
      }
      uVar3 = (uVar2 & 0xffffffff) + uVar7 + (uVar4 << 0x20);
      puVar1 = (ulong *)(param_1 + lVar8 * 8);
      uVar2 = *puVar1;
      *(ulong *)(param_1 + lVar8 * 8) = uVar3 + *puVar1;
      lVar8 = lVar8 + 1;
      uVar7 = (ulong)(uVar3 < uVar7) + (uVar4 >> 0x20) + (ulong)CARRY8(uVar3,uVar2) + lVar6;
    } while (param_3 != lVar8);
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x241,"mpn_addmul_1");
}



ulong mpn_submul_1(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (0 < param_3) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar3 = *(ulong *)(param_2 + lVar7 * 8);
      uVar2 = uVar3 & 0xffffffff;
      uVar3 = uVar3 >> 0x20;
      uVar1 = uVar2 * (param_4 & 0xffffffff);
      uVar8 = uVar3 * (param_4 & 0xffffffff);
      lVar4 = uVar3 * (param_4 >> 0x20);
      uVar3 = uVar2 * (param_4 >> 0x20) + uVar8 + (uVar1 >> 0x20);
      lVar5 = lVar4 + 0x100000000;
      if (uVar8 <= uVar3) {
        lVar5 = lVar4;
      }
      uVar2 = (uVar1 & 0xffffffff) + uVar6 + (uVar3 << 0x20);
      uVar1 = *(ulong *)(param_1 + lVar7 * 8);
      *(ulong *)(param_1 + lVar7 * 8) = uVar1 - uVar2;
      lVar7 = lVar7 + 1;
      uVar6 = (ulong)(uVar2 < uVar6) + (uVar3 >> 0x20) + (ulong)(uVar1 < uVar2) + lVar5;
    } while (param_3 != lVar7);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("n >= 1","lib/mini-gmp.c",0x25b,"mpn_submul_1");
}



void mpn_mul(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0x273,"mpn_mul");
  }
  if (param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn >= 1","lib/mini-gmp.c",0x274,"mpn_mul");
  }
  if ((param_2 < param_1 + param_3 + param_5) && (param_1 < param_2 + param_3)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, up, un)","lib/mini-gmp.c",0x275,"mpn_mul");
  }
  if ((param_4 < param_1 + param_3 + param_5) && (param_1 < param_4 + param_5)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P(rp, un + vn, vp, vn)","lib/mini-gmp.c",0x276,"mpn_mul");
  }
  uVar2 = mpn_mul_1(param_1,param_2,param_3,*param_4);
  param_1[param_3] = uVar2;
  for (param_5 = param_5 + -1; param_5 != 0; param_5 = param_5 + -1) {
    param_1 = param_1 + 1;
    puVar1 = param_4 + 1;
    param_4 = param_4 + 1;
    uVar2 = mpn_addmul_1(param_1,param_2,param_3,*puVar1);
    param_1[param_3] = uVar2;
  }
  return;
}



void mpn_mul_n(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  mpn_mul(param_1,param_2,param_4,param_3,param_4);
  return;
}



void mpn_sqr(void)

{
  mpn_mul();
  return;
}



ulong mpn_lshift(ulong *param_1,long param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x29c,"mpn_lshift");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt >= 1","lib/mini-gmp.c",0x29d,"mpn_lshift");
  }
  if (0x3f < param_4) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",0x29e,"mpn_lshift");
  }
  uVar5 = *(ulong *)(param_2 + -8 + param_3 * 8);
  bVar2 = (byte)param_4;
  uVar4 = uVar5 >> (0x40 - bVar2 & 0x3f);
  uVar5 = uVar5 << (bVar2 & 0x3f);
  lVar3 = param_3 + -1;
  if (lVar3 == 0) {
    param_1[param_3 + -1] = uVar5;
    return uVar4;
  }
  do {
    uVar1 = *(ulong *)(param_2 + -8 + lVar3 * 8);
    param_1[lVar3] = uVar1 >> (0x40 - bVar2 & 0x3f) | uVar5;
    uVar5 = uVar1 << (bVar2 & 0x3f);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_1 = uVar5;
  return uVar4;
}



ulong mpn_div_qr_1_preinv(long param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  bool bVar13;
  
  iVar1 = *param_4;
  if (iVar1 == 0) {
    uVar9 = *(ulong *)(param_4 + 2);
    uVar10 = *(ulong *)(param_4 + 6);
    if (param_3 + -1 < 0) {
      uVar2 = 0;
      bVar5 = 0;
      goto LAB_001019ff;
    }
    lVar12 = 0;
    lVar4 = 0;
    uVar2 = 0;
LAB_00101912:
    param_3 = param_3 + -1;
    do {
      uVar11 = (uVar2 & 0xffffffff) * (uVar10 & 0xffffffff);
      uVar8 = (uVar2 >> 0x20) * (uVar10 & 0xffffffff);
      lVar3 = (uVar2 >> 0x20) * (uVar10 >> 0x20);
      uVar6 = (uVar11 >> 0x20) + (uVar2 & 0xffffffff) * (uVar10 >> 0x20) + uVar8;
      lVar7 = lVar3 + 0x100000000;
      if (uVar8 <= uVar6) {
        lVar7 = lVar3;
      }
      uVar8 = *(ulong *)(param_2 + param_3 * 8);
      uVar11 = (uVar6 << 0x20) + (uVar11 & 0xffffffff);
      lVar7 = uVar2 + 1 + (uVar6 >> 0x20) + (ulong)CARRY8(uVar11,uVar8) + lVar7;
      uVar6 = uVar8 - lVar7 * uVar9;
      bVar13 = uVar11 + uVar8 < uVar6;
      lVar7 = lVar7 - (ulong)bVar13;
      uVar2 = 0;
      if (bVar13) {
        uVar2 = uVar9;
      }
      uVar2 = uVar2 + uVar6;
      if (uVar9 <= uVar2) {
        uVar2 = uVar2 - uVar9;
        lVar7 = lVar7 + 1;
      }
      if (param_1 != 0) {
        *(long *)(param_1 + param_3 * 8) = lVar7;
      }
      bVar13 = param_3 != 0;
      param_3 = param_3 + -1;
    } while (bVar13);
  }
  else {
    lVar12 = 0;
    lVar4 = param_1;
    if (param_1 == 0) {
      lVar4 = (*(code *)gmp_allocate_func)(param_3 * 8);
      iVar1 = *param_4;
      lVar12 = param_3;
    }
    uVar2 = mpn_lshift(lVar4,param_2,param_3,iVar1);
    uVar9 = *(ulong *)(param_4 + 2);
    uVar10 = *(ulong *)(param_4 + 6);
    param_2 = lVar4;
    if (-1 < param_3 + -1) goto LAB_00101912;
  }
  if (lVar12 != 0) {
    (*(code *)gmp_free_func)(lVar4,lVar12 * 8);
  }
  bVar5 = (byte)*param_4;
LAB_001019ff:
  return uVar2 >> (bVar5 & 0x3f);
}



long mpn_rshift(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n >= 1","lib/mini-gmp.c",0x2ba,"mpn_rshift");
  }
  if (param_4 != 0) {
    if (param_4 < 0x40) {
      uVar1 = *param_2;
      bVar2 = (byte)param_4;
      uVar5 = uVar1 >> (bVar2 & 0x3f);
      if (param_3 != 1) {
        lVar3 = 0;
        do {
          uVar4 = param_2[lVar3 + 1] << (0x40 - bVar2 & 0x3f) | uVar5;
          uVar5 = param_2[lVar3 + 1] >> (bVar2 & 0x3f);
          param_1[lVar3] = uVar4;
          lVar3 = lVar3 + 1;
        } while (param_3 + -1 != lVar3);
        param_1 = param_1 + param_3 + -1;
      }
      *param_1 = uVar5;
      return uVar1 << (0x40 - bVar2 & 0x3f);
    }
                    /* WARNING: Subroutine does not return */
    __assert_fail("cnt < GMP_LIMB_BITS","lib/mini-gmp.c",700,"mpn_rshift");
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cnt >= 1","lib/mini-gmp.c",699,"mpn_rshift");
}



void mpn_div_qr_preinv(long param_1,ulong *param_2,long param_3,long param_4,long param_5,
                      int *param_6)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  bool bVar21;
  ulong local_68;
  
  if (param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x462,"mpn_div_qr_preinv");
  }
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x463,"mpn_div_qr_preinv");
  }
  if (param_5 == 1) {
    uVar6 = mpn_div_qr_1_preinv(param_1,param_2,param_3,param_6);
    *param_2 = uVar6;
    return;
  }
  if (param_5 == 2) {
    if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("nn >= 2","lib/mini-gmp.c",0x3fa,"mpn_div_qr_2_preinv");
    }
    iVar2 = *param_6;
    uVar5 = 0;
    uVar6 = *(ulong *)(param_6 + 2);
    uVar18 = *(ulong *)(param_6 + 4);
    uVar7 = *(ulong *)(param_6 + 6) & 0xffffffff;
    uVar9 = *(ulong *)(param_6 + 6) >> 0x20;
    if (iVar2 != 0) {
      uVar5 = mpn_lshift(param_2,param_2,param_3,iVar2);
    }
    uVar11 = param_2[param_3 + -1];
    uVar13 = param_3 - 2;
    do {
      uVar15 = (uVar5 & 0xffffffff) * uVar7;
      uVar16 = (uVar5 >> 0x20) * uVar7;
      lVar8 = (uVar5 >> 0x20) * uVar9;
      uVar14 = (uVar15 >> 0x20) + (uVar5 & 0xffffffff) * uVar9 + uVar16;
      lVar19 = lVar8 + 0x100000000;
      if (uVar16 <= uVar14) {
        lVar19 = lVar8;
      }
      uVar15 = (uVar14 << 0x20) + (uVar15 & 0xffffffff);
      uVar14 = (uVar14 >> 0x20) + uVar5 + (ulong)CARRY8(uVar15,uVar11) + lVar19;
      uVar5 = param_2[uVar13] - uVar18;
      uVar12 = (uVar14 & 0xffffffff) * (uVar18 & 0xffffffff);
      uVar17 = (uVar14 & 0xffffffff) * (uVar18 >> 0x20);
      lVar8 = (uVar18 >> 0x20) * (uVar14 >> 0x20);
      uVar16 = (uVar12 >> 0x20) + (uVar14 >> 0x20) * (uVar18 & 0xffffffff) + uVar17;
      lVar19 = lVar8 + 0x100000000;
      if (uVar17 <= uVar16) {
        lVar19 = lVar8;
      }
      uVar12 = (uVar12 & 0xffffffff) + (uVar16 << 0x20);
      uVar16 = (((((uVar11 - uVar6) - (ulong)(param_2[uVar13] < uVar18)) - uVar6 * uVar14) -
                (uVar16 >> 0x20)) - (ulong)(uVar5 < uVar12)) - lVar19;
      bVar21 = uVar15 + uVar11 <= uVar16;
      uVar5 = uVar5 - uVar12;
      lVar19 = (uVar14 + 1) - (ulong)bVar21;
      uVar14 = 0;
      if (bVar21) {
        uVar14 = uVar18;
      }
      uVar11 = uVar5 + uVar14;
      uVar15 = 0;
      if (bVar21) {
        uVar15 = uVar6;
      }
      uVar5 = (ulong)CARRY8(uVar5,uVar14) + uVar15 + uVar16;
      if ((uVar6 <= uVar5) && ((uVar6 < uVar5 || (uVar18 <= uVar11)))) {
        lVar19 = lVar19 + 1;
        bVar21 = uVar11 < uVar18;
        uVar11 = uVar11 - uVar18;
        uVar5 = (uVar5 - bVar21) - uVar6;
      }
      if (param_1 != 0) {
        *(long *)(param_1 + uVar13 * 8) = lVar19;
      }
      bVar21 = uVar13 != 0;
      uVar13 = uVar13 - 1;
    } while (bVar21);
    if (iVar2 != 0) {
      bVar3 = (byte)iVar2;
      if ((uVar13 >> (0x40 - bVar3 & 0x3f) & uVar11) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(r0 & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - shift))) == 0","lib/mini-gmp.c",0x415
                      ,"mpn_div_qr_2_preinv");
      }
      uVar11 = uVar11 >> (bVar3 & 0x3f) | uVar5 << (0x40 - bVar3 & 0x3f);
      uVar5 = uVar5 >> (bVar3 & 0x3f);
    }
    param_2[1] = uVar5;
    *param_2 = uVar11;
    return;
  }
  puVar10 = (ulong *)(param_4 + -8 + param_5 * 8);
  uVar6 = *puVar10;
  if (*(ulong *)(param_6 + 2) != uVar6) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d1 == dp[dn-1]","lib/mini-gmp.c",0x46e,"mpn_div_qr_preinv");
  }
  puVar20 = (ulong *)(param_4 + -0x10 + param_5 * 8);
  uVar18 = *puVar20;
  if (*(ulong *)(param_6 + 4) != uVar18) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d0 == dp[dn-2]","lib/mini-gmp.c",0x46f,"mpn_div_qr_preinv");
  }
  if (-1 < (long)*(ulong *)(param_6 + 2)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(inv->d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x470,"mpn_div_qr_preinv");
  }
  iVar2 = *param_6;
  if (iVar2 == 0) {
    local_68 = *(ulong *)(param_6 + 6);
    uVar9 = 0;
  }
  else {
    uVar9 = mpn_lshift(param_2);
    uVar18 = *puVar20;
    local_68 = *(ulong *)(param_6 + 6);
    uVar6 = *puVar10;
    if (-1 < (long)uVar6) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x430,"mpn_div_qr_pi1");
    }
  }
  lVar19 = param_3 - param_5;
  puVar10 = param_2 + param_3;
  do {
    uVar5 = puVar10[-1];
    puVar20 = puVar10 + -param_5;
    if ((uVar9 == uVar6) && (uVar5 == uVar18)) {
      mpn_submul_1(puVar20,param_4,param_5,0xffffffffffffffff);
      uVar9 = puVar10[-1];
      lVar8 = -1;
    }
    else {
      uVar13 = (uVar9 & 0xffffffff) * (local_68 & 0xffffffff);
      uVar11 = (local_68 & 0xffffffff) * (uVar9 >> 0x20);
      lVar4 = (uVar9 >> 0x20) * (local_68 >> 0x20);
      uVar7 = (uVar13 >> 0x20) + (uVar9 & 0xffffffff) * (local_68 >> 0x20) + uVar11;
      lVar8 = lVar4 + 0x100000000;
      if (uVar11 <= uVar7) {
        lVar8 = lVar4;
      }
      uVar11 = (uVar7 << 0x20) + (uVar13 & 0xffffffff);
      uVar13 = puVar10[-2] - uVar18;
      uVar9 = (uVar7 >> 0x20) + uVar9 + (ulong)CARRY8(uVar11,uVar5) + lVar8;
      uVar15 = (uVar18 & 0xffffffff) * (uVar9 & 0xffffffff);
      uVar14 = (uVar9 & 0xffffffff) * (uVar18 >> 0x20);
      lVar4 = (uVar18 >> 0x20) * (uVar9 >> 0x20);
      uVar7 = (uVar15 >> 0x20) + (uVar9 >> 0x20) * (uVar18 & 0xffffffff) + uVar14;
      lVar8 = lVar4 + 0x100000000;
      if (uVar14 <= uVar7) {
        lVar8 = lVar4;
      }
      uVar14 = (uVar15 & 0xffffffff) + (uVar7 << 0x20);
      uVar7 = (((((uVar5 - uVar6) - (ulong)(puVar10[-2] < uVar18)) - uVar9 * uVar6) -
               (uVar7 >> 0x20)) - (ulong)(uVar13 < uVar14)) - lVar8;
      bVar21 = uVar11 + uVar5 <= uVar7;
      uVar13 = uVar13 - uVar14;
      lVar8 = (uVar9 + 1) - (ulong)bVar21;
      uVar9 = 0;
      if (bVar21) {
        uVar9 = uVar18;
      }
      uVar11 = uVar13 + uVar9;
      uVar5 = 0;
      if (bVar21) {
        uVar5 = uVar6;
      }
      uVar9 = (ulong)CARRY8(uVar13,uVar9) + uVar5 + uVar7;
      if (uVar6 <= uVar9) {
        if ((uVar9 <= uVar6) && (uVar11 < uVar18)) {
          uVar5 = mpn_submul_1(puVar20,param_4,param_5 + -2);
          uVar9 = uVar9 - (uVar11 < uVar5);
          puVar10[-2] = uVar11 - uVar5;
          goto LAB_00101c7e;
        }
        lVar8 = lVar8 + 1;
        bVar21 = uVar11 < uVar18;
        uVar11 = uVar11 - uVar18;
        uVar9 = (uVar9 - bVar21) - uVar6;
      }
      uVar5 = mpn_submul_1(puVar20,param_4,param_5 + -2);
      puVar10[-2] = uVar11 - uVar5;
      if (uVar9 < (uVar11 < uVar5)) {
        uVar9 = 0;
        lVar4 = 0;
        do {
          uVar5 = puVar20[lVar4];
          uVar11 = uVar9 + puVar20[lVar4];
          puVar1 = (ulong *)(param_4 + lVar4 * 8);
          uVar7 = *puVar1;
          puVar20[lVar4] = uVar11 + *puVar1;
          uVar9 = (ulong)CARRY8(uVar9,uVar5) + (ulong)CARRY8(uVar11,uVar7);
          lVar4 = lVar4 + 1;
        } while (lVar4 < param_5 + -1);
        uVar9 = (uVar6 - 1) + uVar9;
        lVar8 = lVar8 + -1;
      }
      else {
        uVar9 = uVar9 - (uVar11 < uVar5);
      }
    }
LAB_00101c7e:
    if (param_1 != 0) {
      *(long *)(param_1 + lVar19 * 8) = lVar8;
    }
    lVar19 = lVar19 + -1;
    puVar10 = puVar10 + -1;
    if (lVar19 == -1) {
      param_2[param_5 + -1] = uVar9;
      if (iVar2 != 0) {
        lVar19 = mpn_rshift(param_2,param_2,param_5);
        if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("__cy == 0","lib/mini-gmp.c",0x47b,"mpn_div_qr_preinv");
        }
      }
      return;
    }
  } while( true );
}



void mpn_scan1(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 6;
  mpn_common_scan(-1L << ((byte)param_2 & 0x3f) & *(ulong *)(param_1 + uVar1 * 8),uVar1,param_1,
                  uVar1,0);
  return;
}



void mpn_scan0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 >> 6;
  mpn_common_scan(~*(ulong *)(param_1 + uVar1 * 8) & -1L << ((byte)param_2 & 0x3f),uVar1,param_1,
                  uVar1,0xffffffffffffffff);
  return;
}



void mpn_com(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      *(ulong *)(param_1 + lVar1 * 8) = ~*(ulong *)(param_2 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != lVar1);
  }
  return;
}



undefined8 mpn_neg(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
    bVar4 = param_3 != 1;
    uVar3 = 0;
    param_3 = param_3 + -1;
    if (bVar4) {
      do {
        lVar2 = param_2[1];
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        lVar1 = param_3 + -1;
        if (lVar2 != 0) goto LAB_001023c4;
        *param_1 = 0;
        param_3 = lVar1;
      } while (lVar1 != 0);
    }
  }
  else {
LAB_001023c4:
    lVar1 = 0;
    *param_1 = -lVar2;
    if (1 < param_3) {
      do {
        param_1[lVar1 + 1] = ~param_2[lVar1 + 1];
        lVar1 = lVar1 + 1;
      } while (param_3 + -1 != lVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



void mpz_div_r_2exp(int *param_1,int *param_2,long param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = param_2[1];
  lVar6 = (long)(int)uVar1;
  if ((lVar6 == 0) || (param_3 == 0)) {
    iVar5 = 0;
  }
  else {
    uVar10 = param_3 + 0x3fU >> 6;
    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("rn > 0","lib/mini-gmp.c",0x983,"mpz_div_r_2exp");
    }
    if ((long)*param_1 < (long)uVar10) {
      lVar2 = mpz_realloc(param_1,uVar10);
    }
    else {
      lVar2 = *(long *)(param_1 + 2);
    }
    uVar7 = -uVar1;
    if (0 < (int)uVar1) {
      uVar7 = uVar1;
    }
    uVar11 = 0xffffffffffffffff >> (-(char)param_3 & 0x3fU);
    uVar8 = (ulong)uVar7;
    if (uVar10 <= uVar8) {
      lVar4 = *(long *)(param_2 + 2);
      if ((param_2 != param_1) && (uVar10 != 1)) {
        lVar3 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar3 * 8) = *(undefined8 *)(lVar4 + lVar3 * 8);
          lVar3 = lVar3 + 1;
        } while (uVar10 - 1 != lVar3);
      }
      puVar9 = (ulong *)(lVar2 + -8 + uVar10 * 8);
      *puVar9 = *(ulong *)(lVar4 + -8 + uVar10 * 8) & uVar11;
      if (param_4 != 0 < lVar6) goto LAB_001024d6;
      mpn_neg(lVar2,lVar2,uVar10);
      *puVar9 = *puVar9 & uVar11;
      lVar6 = -lVar6;
      goto LAB_001024d6;
    }
    if (param_4 == 0 < lVar6) {
      lVar4 = mpn_neg(lVar2,*(undefined8 *)(param_2 + 2),uVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0x993,"mpz_div_r_2exp");
      }
      puVar9 = (ulong *)(lVar2 + -8 + uVar10 * 8);
      lVar6 = -lVar6;
      if ((long)uVar8 < (long)(uVar10 - 1)) {
        memset((void *)(lVar2 + uVar8 * 8),0xff,((uVar10 - 1) - uVar8) * 8);
        *puVar9 = uVar11;
        goto LAB_001024d6;
      }
      *puVar9 = uVar11;
      goto LAB_001024d6;
    }
    uVar10 = uVar8;
    if (param_2 == param_1) goto LAB_001024d6;
    lVar4 = *(long *)(param_2 + 2);
    uVar10 = 0;
    do {
      *(undefined8 *)(lVar2 + uVar10 * 8) = *(undefined8 *)(lVar4 + uVar10 * 8);
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
    lVar4 = *(long *)(lVar2 + -8 + uVar10 * 8);
    while ((lVar4 == 0 && (uVar10 = uVar10 - 1, uVar10 != 0))) {
LAB_001024d6:
      lVar4 = *(long *)(lVar2 + -8 + uVar10 * 8);
    }
    iVar5 = (int)uVar10;
    if (lVar6 < 0) {
      iVar5 = -(int)uVar10;
    }
  }
  param_1[1] = iVar5;
  return;
}



ulong mpn_invert_3by2(ulong param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar6 = ~param_1 / (param_1 >> 0x20);
  iVar1 = (int)uVar6;
  uVar6 = uVar6 & 0xffffffff;
  uVar5 = ~param_1 - (param_1 >> 0x20) * uVar6 << 0x20 | 0xffffffff;
  uVar2 = (param_1 & 0xffffffff) * uVar6;
  if (uVar5 < uVar2) {
    uVar6 = (ulong)(iVar1 - 1);
    bVar9 = CARRY8(uVar5,param_1);
    uVar5 = uVar5 + param_1;
    if ((!bVar9) && (uVar5 < uVar2)) {
      uVar5 = uVar5 + param_1;
      uVar6 = (ulong)(iVar1 - 2);
    }
  }
  uVar5 = uVar5 - uVar2;
  uVar3 = (uVar5 >> 0x20) * uVar6 + uVar5;
  uVar8 = uVar3 >> 0x20;
  uVar2 = uVar8 + 1;
  uVar5 = ((uVar5 << 0x20) + 0xffffffff) - param_1 * uVar2;
  if (uVar3 << 0x20 <= uVar5) {
    uVar5 = uVar5 + param_1;
    uVar2 = uVar8;
  }
  uVar2 = (uVar6 << 0x20) + uVar2;
  if (param_1 <= uVar5) {
    uVar2 = uVar2 + 1;
    uVar5 = uVar5 - param_1;
  }
  if (param_2 != 0) {
    uVar6 = (param_2 - 1) - uVar5;
    if (uVar5 < param_2) {
      if (uVar6 < param_1) {
        uVar2 = uVar2 - 1;
      }
      else {
        uVar6 = uVar6 - param_1;
        uVar2 = uVar2 - 2;
      }
      uVar6 = uVar6 - param_1;
    }
    uVar8 = (param_2 & 0xffffffff) * (uVar2 & 0xffffffff);
    uVar3 = (uVar2 & 0xffffffff) * (param_2 >> 0x20);
    lVar4 = (param_2 >> 0x20) * (uVar2 >> 0x20);
    uVar5 = (uVar2 >> 0x20) * (param_2 & 0xffffffff) + uVar3 + (uVar8 >> 0x20);
    if (uVar5 < uVar3) {
      lVar4 = lVar4 + 0x100000000;
    }
    uVar3 = lVar4 + (uVar5 >> 0x20);
    uVar7 = uVar6 + uVar3;
    if (CARRY8(uVar6,uVar3)) {
      uVar2 = (uVar2 - 1) -
              (ulong)(param_2 < (uVar5 << 0x20) + (uVar8 & 0xffffffff) && param_1 == uVar7 ||
                     param_1 < uVar7);
    }
  }
  return uVar2;
}



void mpn_div_qr_1_invert(int *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_2 != 0) {
    iVar3 = 0;
    uVar1 = param_2;
    if (param_2 < 0x100000000000000) {
      do {
        uVar1 = uVar1 << 8;
        iVar3 = iVar3 + 8;
      } while (uVar1 < 0x100000000000000);
    }
    for (; -1 < (long)uVar1; uVar1 = uVar1 * 2) {
      iVar3 = iVar3 + 1;
    }
    *param_1 = iVar3;
    lVar4 = param_2 << ((byte)iVar3 & 0x3f);
    *(long *)(param_1 + 2) = lVar4;
    uVar2 = mpn_invert_3by2(lVar4,0);
    *(undefined8 *)(param_1 + 6) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d > 0","lib/mini-gmp.c",0x38f,"mpn_div_qr_1_invert");
}



void mpn_get_str_other(undefined1 *param_1,int param_2,uint *param_3,undefined8 *param_4,
                      long param_5)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  long lVar9;
  
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mpn_div_qr_1_invert(local_88,(long)param_2);
  puVar5 = param_1;
  if (1 < param_5) {
    mpn_div_qr_1_invert(local_68,*(undefined8 *)(param_3 + 2));
    lVar2 = 0;
    do {
      uVar4 = mpn_div_qr_1_preinv(param_4,param_4,param_5,local_68);
      param_5 = param_5 - (ulong)(param_4[param_5 + -1] == 0);
      uVar3 = mpn_limb_get_str(param_1 + lVar2,uVar4,local_88);
      lVar8 = lVar2 + uVar3;
      lVar9 = lVar8;
      if (uVar3 < *param_3) {
        do {
          lVar8 = lVar9 + 1;
          param_1[lVar9] = 0;
          lVar9 = lVar8;
        } while ((ulong)(lVar8 - lVar2) < (ulong)*param_3);
      }
      lVar2 = lVar8;
    } while (param_5 != 1);
    puVar5 = param_1 + lVar8;
  }
  lVar2 = mpn_limb_get_str(puVar5,*param_4,local_88);
  uVar3 = lVar2 + lVar8;
  if (1 < uVar3) {
    puVar5 = param_1 + (uVar3 - 1);
    puVar6 = param_1;
    do {
      uVar1 = *puVar6;
      puVar7 = puVar6 + 1;
      *puVar6 = *puVar5;
      *puVar5 = uVar1;
      puVar5 = puVar5 + -1;
      puVar6 = puVar7;
    } while (puVar7 != param_1 + (uVar3 - 2 >> 1) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpn_div_qr_invert(int *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x3ad,"mpn_div_qr_invert");
  }
  if (param_3 == 1) {
    mpn_div_qr_1_invert(param_1,*param_2);
    return;
  }
  if (param_3 == 2) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("d1 > 0","lib/mini-gmp.c",0x39c,"mpn_div_qr_2_invert");
    }
    iVar6 = 0;
    uVar2 = uVar5;
    if (uVar5 < 0x100000000000000) {
      do {
        uVar2 = uVar2 << 8;
        iVar6 = iVar6 + 8;
      } while (uVar2 < 0x100000000000000);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00102ab0:
        iVar6 = iVar6 + 1;
      }
      if (iVar6 != 0) {
        bVar1 = (byte)iVar6;
        uVar2 = uVar4 >> (0x40 - bVar1 & 0x3f);
        uVar4 = uVar4 << (bVar1 & 0x3f);
        uVar5 = uVar5 << (bVar1 & 0x3f) | uVar2;
      }
    }
    else if (-1 < (long)uVar5) goto LAB_00102ab0;
    *param_1 = iVar6;
    *(ulong *)(param_1 + 2) = uVar5;
    *(ulong *)(param_1 + 4) = uVar4;
    uVar3 = mpn_invert_3by2();
    *(undefined8 *)(param_1 + 6) = uVar3;
    return;
  }
  uVar5 = param_2[param_3 + -1];
  uVar4 = param_2[param_3 + -2];
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("d1 > 0","lib/mini-gmp.c",0x3ba,"mpn_div_qr_invert");
  }
  iVar6 = 0;
  uVar2 = uVar5;
  if (uVar5 < 0x100000000000000) {
    do {
      uVar2 = uVar2 << 8;
      iVar6 = iVar6 + 8;
    } while (uVar2 < 0x100000000000000);
    for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00102a10:
      iVar6 = iVar6 + 1;
    }
    *param_1 = iVar6;
    if (iVar6 != 0) {
      bVar1 = (byte)iVar6;
      uVar5 = uVar5 << (bVar1 & 0x3f) | uVar4 >> (0x40 - bVar1 & 0x3f);
      uVar4 = uVar4 << (bVar1 & 0x3f) | param_2[param_3 + -3] >> (0x40 - bVar1 & 0x3f);
    }
  }
  else {
    if (-1 < (long)uVar5) goto LAB_00102a10;
    *param_1 = 0;
  }
  *(ulong *)(param_1 + 2) = uVar5;
  *(ulong *)(param_1 + 4) = uVar4;
  uVar3 = mpn_invert_3by2();
  *(undefined8 *)(param_1 + 6) = uVar3;
  return;
}



void mpn_div_qr(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x485,"mpn_div_qr");
  }
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x486,"mpn_div_qr");
  }
  mpn_div_qr_invert(local_68,param_4,param_5);
  if (param_5 < 3) {
LAB_00102c60:
    mpn_div_qr_preinv(param_1,param_2,param_3,param_4,param_5,local_68);
  }
  else {
    if (local_68[0] == 0) goto LAB_00102c60;
    lVar1 = (*(code *)gmp_allocate_func)(param_5 * 8);
    lVar2 = mpn_lshift(lVar1,param_4,param_5,local_68[0]);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0x48c,"mpn_div_qr");
    }
    mpn_div_qr_preinv(param_1,param_2,param_3,lVar1,param_5,local_68);
    if (lVar1 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102c56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(lVar1,param_5 * 8);
        return;
      }
      goto LAB_00102c98;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102c98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpn_get_str(undefined8 param_1,int param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  int local_28 [2];
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un > 0","lib/mini-gmp.c",0x52d,"mpn_get_str");
  }
  if (*(long *)(param_3 + -8 + param_4 * 8) != 0) {
    iVar5 = mpn_base_power_of_two_p(param_2);
    if (iVar5 == 0) {
      uVar7 = (ulong)param_2;
      local_28[0] = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      lVar6 = SUB168(auVar1 * auVar3,8);
      local_20 = uVar7;
      while (lVar6 == 0) {
        local_20 = local_20 * uVar7;
        local_28[0] = local_28[0] + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_20;
        lVar6 = SUB168(auVar2 * auVar4,8);
      }
      mpn_get_str_other(param_1,param_2,local_28,param_3,param_4);
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      mpn_get_str_bits(param_1,iVar5,param_3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("up[un-1] > 0","lib/mini-gmp.c",0x52e,"mpn_get_str");
}



undefined8 mpn_set_str(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_28 [2];
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar6 = 0;
  }
  else {
    iVar5 = mpn_base_power_of_two_p(param_4);
    if (iVar5 != 0) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = mpn_set_str_bits(param_1);
        return uVar6;
      }
      goto LAB_00102ecc;
    }
    uVar7 = (ulong)param_4;
    local_28[0] = 1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar7;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
    lVar8 = SUB168(auVar1 * auVar3,8);
    local_20 = uVar7;
    while (lVar8 == 0) {
      local_20 = local_20 * uVar7;
      local_28[0] = local_28[0] + 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_20;
      lVar8 = SUB168(auVar2 * auVar4,8);
    }
    uVar6 = mpn_set_str_other(param_1,param_2,param_3,uVar7,local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00102ecc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_init(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  return;
}



void mpz_init2(undefined4 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  lVar1 = (param_2 + -1 + (ulong)(param_2 == 0) >> 6) + 1;
  *param_1 = (int)lVar1;
  uVar2 = (*(code *)gmp_allocate_func)(lVar1 * 8);
  *(undefined8 *)(param_1 + 2) = uVar2;
  return;
}



void mpz_clear(int *param_1)

{
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102f53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(*(undefined8 *)(param_1 + 2),(long)*param_1 << 3);
    return;
  }
  return;
}



void mpz_set_si(int *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 < 0) {
    param_1[1] = -1;
    if (*param_1 < 1) {
      plVar1 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar1 = *(long **)(param_1 + 2);
    }
    param_2 = -param_2;
  }
  else {
    if (param_2 == 0) {
      param_1[1] = 0;
      return;
    }
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar1 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar1 = *(long **)(param_1 + 2);
    }
  }
  *plVar1 = param_2;
  return;
}



void mpz_set_ui(int *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    param_1[1] = 0;
    return;
  }
  param_1[1] = 1;
  if (0 < *param_1) {
    **(long **)(param_1 + 2) = param_2;
    return;
  }
  plVar1 = (long *)mpz_realloc(param_1,1);
  *plVar1 = param_2;
  return;
}



void mpz_set(int *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  if (param_1 != param_2) {
    iVar6 = param_2[1];
    iVar2 = -iVar6;
    if (0 < iVar6) {
      iVar2 = iVar6;
    }
    lVar5 = (long)iVar2;
    if (*param_1 < iVar2) {
      lVar3 = mpz_realloc(param_1,lVar5);
      iVar6 = param_2[1];
    }
    else {
      lVar3 = *(long *)(param_1 + 2);
    }
    lVar1 = *(long *)(param_2 + 2);
    lVar4 = 0;
    if (lVar5 != 0) {
      do {
        *(undefined8 *)(lVar3 + lVar4 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
    param_1[1] = iVar6;
    return;
  }
  return;
}



void mpz_div_q_2exp(int *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 == 0) {
    param_1[1] = 0;
    goto LAB_001031d0;
  }
  uVar10 = param_3 >> 6;
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar8 = (uint)param_3 & 0x3f;
  lVar9 = uVar2 - uVar10;
  if (param_4 == 0 < (int)uVar1) {
    if (0 < lVar9) {
      for (uVar6 = uVar10; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (*(long *)(*(long *)(param_2 + 8) + -8 + uVar6 * 8) != 0) {
          bVar12 = true;
          goto LAB_00103111;
        }
      }
      bVar12 = (~(-1L << (sbyte)uVar8) & *(ulong *)(*(long *)(param_2 + 8) + uVar10 * 8)) != 0;
      goto LAB_00103111;
    }
    param_1[1] = 0;
LAB_00103151:
    local_50 = &dummy_limb_35;
    local_58 = _LC35;
    puVar5 = (undefined8 *)mpz_realloc(&local_58,1);
    *puVar5 = 1;
    if ((int)(param_1[1] ^ local_58._4_4_) < 0) {
      iVar3 = mpz_abs_sub(param_1,param_1,&local_58);
    }
    else {
      iVar3 = mpz_abs_add();
    }
    if (param_1[1] < 0) {
      iVar3 = -iVar3;
    }
    param_1[1] = iVar3;
    if ((int)local_58 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
    }
  }
  else if (lVar9 < 1) {
    param_1[1] = 0;
  }
  else {
    bVar12 = false;
LAB_00103111:
    if (*param_1 < lVar9) {
      lVar7 = mpz_realloc(param_1,lVar9);
    }
    else {
      lVar7 = *(long *)(param_1 + 2);
    }
    lVar4 = 0;
    lVar11 = uVar10 * 8 + *(long *)(param_2 + 8);
    if ((param_3 & 0x3f) == 0) {
      do {
        *(undefined8 *)(lVar7 + lVar4 * 8) = *(undefined8 *)(lVar11 + lVar4 * 8);
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar9);
    }
    else {
      mpn_rshift(lVar7,lVar11,lVar9,uVar8);
      lVar9 = lVar9 - (ulong)(*(long *)(lVar7 + -8 + lVar9 * 8) == 0);
    }
    param_1[1] = (int)lVar9;
    if (bVar12) goto LAB_00103151;
  }
  if ((int)uVar1 < 0) {
    mpz_set(param_1,param_1);
    param_1[1] = -param_1[1];
  }
LAB_001031d0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 mpz_make_odd(long param_1)

{
  undefined8 uVar1;
  
  if (0 < *(int *)(param_1 + 4)) {
    uVar1 = mpn_common_scan(**(undefined8 **)(param_1 + 8),0,*(undefined8 **)(param_1 + 8),0,0);
    mpz_div_q_2exp(param_1,param_1,uVar1,2);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("r->_mp_size > 0","lib/mini-gmp.c",0xae7,"mpz_make_odd");
}



void mpz_init_set_si(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  if (-1 < param_2) {
    if (param_2 != 0) {
      *(undefined4 *)((long)param_1 + 4) = 1;
      plVar1 = (long *)mpz_realloc(param_1,1);
      *plVar1 = param_2;
    }
    return;
  }
  *(undefined4 *)((long)param_1 + 4) = 0xffffffff;
  plVar1 = (long *)mpz_realloc(param_1,1);
  *plVar1 = -param_2;
  return;
}



void mpz_init_set_ui(undefined8 *param_1,long param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  if (param_2 != 0) {
    *(undefined4 *)((long)param_1 + 4) = 1;
    plVar1 = (long *)mpz_realloc(param_1,1);
    *plVar1 = param_2;
    return;
  }
  return;
}



void mpz_init_set(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  mpz_set();
  return;
}



bool mpz_fits_slong_p(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar2 = false;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      bVar2 = -(uint)(0x8000000000000000 < **(ulong **)(param_1 + 8)) -
              ((int)~(uint)(**(ulong **)(param_1 + 8) >> 0x20) >> 0x1f) != -1;
    }
  }
  else if ((iVar1 < 2) && (bVar2 = true, iVar1 != 0)) {
    return (-1 - (int)((long)**(ulong **)(param_1 + 8) >> 0x3f)) +
           (uint)(0x7ffffffffffffffe < **(ulong **)(param_1 + 8)) != 1;
  }
  return bVar2;
}



bool mpz_fits_ulong_p(long param_1)

{
  return *(uint *)(param_1 + 4) < 2;
}



bool mpz_fits_sint_p(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar2 = false;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      bVar2 = (uint)(**(ulong **)(param_1 + 8) < 0x80000000) -
              (uint)(0x80000000 < **(ulong **)(param_1 + 8)) != -1;
    }
  }
  else if ((iVar1 < 2) && (bVar2 = true, iVar1 != 0)) {
    return (uint)(0x7fffffff < **(ulong **)(param_1 + 8)) -
           (uint)(**(ulong **)(param_1 + 8) < 0x7fffffff) != 1;
  }
  return bVar2;
}



bool mpz_fits_uint_p(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(uint *)(param_1 + 4) < 2) && (bVar1 = true, *(uint *)(param_1 + 4) != 0)) {
    return ((**(ulong **)(param_1 + 8) >> 0x20 != 0) - 1) +
           (uint)(0xfffffffe < **(ulong **)(param_1 + 8)) != 1;
  }
  return bVar1;
}



bool mpz_fits_sshort_p(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar2 = false;
  if (iVar1 < 0) {
    if (iVar1 == -1) {
      bVar2 = (uint)(**(ulong **)(param_1 + 8) < 0x8000) -
              (uint)(0x8000 < **(ulong **)(param_1 + 8)) != -1;
    }
  }
  else if ((iVar1 < 2) && (bVar2 = true, iVar1 != 0)) {
    return (uint)(0x7fff < **(ulong **)(param_1 + 8)) - (uint)(**(ulong **)(param_1 + 8) < 0x7fff)
           != 1;
  }
  return bVar2;
}



bool mpz_fits_ushort_p(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(uint *)(param_1 + 4) < 2) && (bVar1 = true, *(uint *)(param_1 + 4) != 0)) {
    return (uint)(0xffff < **(ulong **)(param_1 + 8)) - (uint)(**(ulong **)(param_1 + 8) < 0xffff)
           != 1;
  }
  return bVar1;
}



ulong mpz_get_si(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (-1 < *(int *)(param_1 + 4)) {
      return **(ulong **)(param_1 + 8) & 0x7fffffffffffffff;
    }
    uVar1 = -**(ulong **)(param_1 + 8) | 0x8000000000000000;
  }
  return uVar1;
}



undefined8 mpz_get_ui(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = **(undefined8 **)(param_1 + 8);
  }
  return uVar1;
}



long mpz_size(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return (long)iVar2;
}



undefined8 mpz_getlimbn(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (param_2 < iVar2) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + param_2 * 8);
    }
  }
  return uVar3;
}



void mpz_realloc2(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = (param_2 + -1 + (ulong)(param_2 == 0) >> 6) + 1;
  if (*param_1 == 0) {
    uVar4 = (*(code *)gmp_allocate_func)();
  }
  else {
    uVar4 = (*(code *)gmp_reallocate_func)
                      (*(undefined8 *)(param_1 + 2),(long)*param_1 << 3,lVar1 * 8);
  }
  iVar2 = param_1[1];
  *(undefined8 *)(param_1 + 2) = uVar4;
  *param_1 = (int)lVar1;
  iVar3 = -iVar2;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  if (lVar1 < iVar3) {
    param_1[1] = 0;
  }
  return;
}



undefined8 mpz_limbs_read(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 mpz_limbs_modify(int *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify_part_0();
  }
  if (param_2 <= *param_1) {
    return *(undefined8 *)(param_1 + 2);
  }
  uVar1 = mpz_realloc();
  return uVar1;
}



undefined8 mpz_limbs_write(int *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify_part_0();
  }
  if (param_2 <= *param_1) {
    return *(undefined8 *)(param_1 + 2);
  }
  uVar1 = mpz_realloc();
  return uVar1;
}



void mpz_limbs_finish(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -param_2;
  if (0 < param_2) {
    lVar2 = param_2;
  }
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (*(long *)(*(long *)(param_1 + 8) + -8 + lVar2 * 8) != 0) break;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)lVar2;
    if (param_2 < 0) {
      iVar1 = -(int)lVar2;
    }
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}



void mpz_roinit_n(undefined4 *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  *param_1 = 0;
  *(long *)(param_1 + 2) = param_2;
  lVar2 = -param_3;
  if (0 < param_3) {
    lVar2 = param_3;
  }
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      if (*(long *)(param_2 + -8 + lVar2 * 8) != 0) break;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar1 = (int)lVar2;
    if (param_3 < 0) {
      iVar1 = -(int)lVar2;
    }
  }
  param_1[1] = iVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mpz_set_d(double param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  
  if ((_LC37 * param_1 == param_1) ||
     (dVar10 = (double)(((ulong)param_1 ^ __LC39) & -(ulong)(param_1 < 0.0) |
                       ~-(ulong)(param_1 < 0.0) & (ulong)param_1), dVar10 < _LC40)) {
    param_2[1] = 0;
    return;
  }
  lVar8 = 1;
  for (; _LC41 <= dVar10; dVar10 = dVar10 * _LC42) {
    lVar8 = lVar8 + 1;
  }
  if (*param_2 < lVar8) {
    lVar4 = mpz_realloc(param_2,lVar8);
  }
  else {
    lVar4 = *(long *)(param_2 + 2);
  }
  dVar3 = _LC43;
  dVar2 = _LC41;
  dVar1 = _LC40;
  if (_LC43 <= dVar10) {
    uVar6 = (long)(dVar10 - _LC43) ^ 0x8000000000000000;
  }
  else {
    uVar6 = (ulong)dVar10;
  }
  dVar10 = dVar10 - (double)uVar6;
  if (_LC40 <= dVar10) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d1,"mpz_set_d");
  }
  *(ulong *)(lVar4 + -8 + lVar8 * 8) = uVar6;
  lVar5 = lVar8 + -2;
  if (lVar8 != 1) {
    do {
      dVar10 = dVar10 * dVar2;
      if (dVar10 < dVar3) {
        uVar6 = (ulong)dVar10;
        if ((long)uVar6 < 0) goto LAB_001039fe;
LAB_001039ba:
        dVar11 = (double)(long)uVar6;
      }
      else {
        uVar6 = (long)(dVar10 - dVar3) ^ 0x8000000000000000;
        if (-1 < (long)uVar6) goto LAB_001039ba;
LAB_001039fe:
        dVar11 = (double)uVar6;
      }
      dVar10 = dVar10 - dVar11;
      if (dVar1 <= dVar10) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d9,"mpz_set_d");
      }
      *(ulong *)(lVar4 + lVar5 * 8) = uVar6;
      bVar9 = lVar5 != 0;
      lVar5 = lVar5 + -1;
    } while (bVar9);
  }
  iVar7 = (int)lVar8;
  if (param_1 < 0.0) {
    iVar7 = -(int)lVar8;
  }
  param_2[1] = iVar7;
  return;
}



void mpz_init_set_d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  mpz_set_d();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double mpz_get_d(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  double dVar9;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0.0;
  }
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  iVar5 = 0;
  iVar6 = 0;
  uVar7 = *(ulong *)(*(long *)(param_1 + 8) + (long)(iVar2 + -1) * 8);
  uVar3 = uVar7;
  if (uVar7 < 0x100000000000000) {
    do {
      uVar3 = uVar3 << 8;
      iVar5 = iVar5 + 8;
      iVar6 = iVar5;
    } while (uVar3 < 0x100000000000000);
    for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
LAB_00103b90:
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + -0xb;
    if (-1 < iVar6) goto code_r0x00103c74;
    uVar3 = -1L << (-(char)iVar6 & 0x3fU);
  }
  else {
    if (-1 < (long)uVar7) goto LAB_00103b90;
    uVar3 = 0xfffffffffffff800;
    iVar6 = -0xb;
  }
  uVar7 = uVar7 & uVar3;
code_r0x00103c74:
  dVar9 = (double)uVar7;
  lVar4 = (long)(iVar2 + -2);
  if (iVar2 + -2 != -1) {
    do {
      dVar9 = dVar9 * _LC41;
      if (0 < iVar6) {
        uVar7 = *(ulong *)(*(long *)(param_1 + 8) + lVar4 * 8);
        iVar6 = iVar6 + -0x40;
        if (iVar6 < 0) {
          uVar7 = uVar7 & -1L << (-(char)iVar6 & 0x3fU);
        }
        dVar9 = dVar9 + (double)uVar7;
      }
      bVar8 = lVar4 != 0;
      lVar4 = lVar4 + -1;
    } while (bVar8);
  }
  if (iVar1 < 0) {
    dVar9 = (double)((ulong)dVar9 ^ __LC39);
  }
  return dVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mpz_cmpabs_d(double param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (param_1 < 0.0) {
    param_1 = (double)((ulong)param_1 ^ __LC39);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 1) {
      uVar1 = -uVar1;
    }
    if (uVar1 == 1) {
      if (_LC41 <= param_1) {
        return -1;
      }
      uVar4 = 0;
    }
    else {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        param_1 = param_1 * _LC42;
        uVar3 = uVar4 + 1;
      } while ((ulong)uVar1 != uVar4 + 1);
      if (_LC41 <= param_1) {
        return -1;
      }
    }
    do {
      if (param_1 < _LC43) {
        uVar2 = (ulong)param_1;
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + uVar4 * 8);
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      else {
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + uVar4 * 8);
        uVar2 = (long)(param_1 - _LC43) ^ 0x8000000000000000;
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      if (uVar3 < uVar2) {
        return -1;
      }
      param_1 = (param_1 - (double)uVar2) * _LC41;
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  return -(uint)(0.0 < param_1);
}



ulong mpz_cmp_d(double param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_2 + 4) < 0) {
    if (param_1 < 0.0) {
      iVar1 = mpz_cmpabs_d();
      return (ulong)(uint)-iVar1;
    }
    return 0xffffffff;
  }
  if (0.0 <= param_1) {
    uVar2 = mpz_cmpabs_d();
    return uVar2;
  }
  return 1;
}



int mpz_sgn(long param_1)

{
  return (uint)(0 < *(int *)(param_1 + 4)) + (*(int *)(param_1 + 4) >> 0x1f);
}



int mpz_cmp_si(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 4);
  if ((long)param_2 < 0) {
    iVar1 = 1;
    if (((int)uVar3 < 0) && (iVar1 = -1, uVar3 == 0xffffffff)) {
      return (uint)(**(ulong **)(param_1 + 8) < -param_2) -
             (uint)(-param_2 < **(ulong **)(param_1 + 8));
    }
  }
  else {
    if ((int)uVar3 < 0) {
      return -1;
    }
    iVar1 = 1;
    if ((int)uVar3 < 2) {
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = **(ulong **)(param_1 + 8);
        uVar3 = (uint)(param_2 < uVar2);
      }
      return uVar3 - (uVar2 < param_2);
    }
  }
  return iVar1;
}



int mpz_cmp_ui(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((int)uVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
    if ((int)uVar1 < 2) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = **(ulong **)(param_1 + 8);
        uVar1 = (uint)(param_2 < uVar3);
      }
      return uVar1 - (uVar3 < param_2);
    }
  }
  return iVar2;
}



int mpz_cmp(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  
  lVar1 = (long)*(int *)(param_1 + 4);
  lVar3 = (long)*(int *)(param_2 + 4);
  if (lVar1 != lVar3) {
    return ((lVar3 <= lVar1) - 1) + (uint)(lVar3 <= lVar1);
  }
  if (lVar1 < 0) {
    lVar1 = -lVar1;
    do {
      bVar5 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar5) {
        return 0;
      }
      uVar4 = *(ulong *)(*(long *)(param_2 + 8) + lVar1 * 8);
      uVar2 = *(ulong *)(*(long *)(param_1 + 8) + lVar1 * 8);
    } while (uVar4 == uVar2);
  }
  else {
    do {
      bVar5 = lVar1 == 0;
      lVar1 = lVar1 + -1;
      if (bVar5) {
        return 0;
      }
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + lVar1 * 8);
      uVar2 = *(ulong *)(*(long *)(param_2 + 8) + lVar1 * 8);
    } while (uVar4 == uVar2);
  }
  return (-(uint)(uVar2 < uVar4) & 2) - 1;
}



int mpz_cmpabs_ui(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  if (1 < (int)uVar2) {
    return 1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = **(ulong **)(param_1 + 8);
    uVar1 = (uint)(param_2 < uVar3);
  }
  return uVar1 - (uVar3 < param_2);
}



int mpz_cmpabs(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 4);
  iVar5 = -iVar1;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  iVar1 = -iVar2;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  lVar7 = (long)iVar5;
  lVar6 = (long)iVar1;
  if (lVar7 != lVar6) {
    return ((lVar7 <= lVar6) - 1) + (uint)(lVar7 <= lVar6);
  }
  do {
    bVar8 = lVar6 == 0;
    lVar6 = lVar6 + -1;
    if (bVar8) {
      return 0;
    }
    uVar3 = *(ulong *)(*(long *)(param_1 + 8) + lVar6 * 8);
    uVar4 = *(ulong *)(*(long *)(param_2 + 8) + lVar6 * 8);
  } while (uVar3 == uVar4);
  return (-(uint)(uVar4 < uVar3) & 2) - 1;
}



void mpz_abs(long param_1)

{
  int iVar1;
  int iVar2;
  
  mpz_set();
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 4) = iVar2;
  return;
}



void mpz_neg(long param_1)

{
  mpz_set();
  *(int *)(param_1 + 4) = -*(int *)(param_1 + 4);
  return;
}



void mpz_swap(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = uVar2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return;
}



void mpz_add_ui(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  int local_48;
  uint uStack_44;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  uStack_44 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    uVar2 = *(uint *)(param_2 + 4);
    iVar1 = local_48;
  }
  else {
    local_48 = 0;
    uStack_44 = 1;
    plVar4 = (long *)mpz_realloc(&local_48,1);
    *plVar4 = param_3;
    uVar2 = uStack_44 ^ *(uint *)(param_2 + 4);
    iVar1 = local_48;
  }
  local_48 = iVar1;
  if ((int)uVar2 < 0) {
    iVar3 = mpz_abs_sub(param_1,param_2,&local_48);
  }
  else {
    iVar3 = mpz_abs_add();
  }
  if (*(int *)(param_2 + 4) < 0) {
    iVar3 = -iVar3;
  }
  *(int *)(param_1 + 4) = iVar3;
  if (iVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010415f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_sub_ui(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_38;
  uint uStack_34;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_set();
  iVar1 = *(int *)(param_1 + 4);
  local_38 = 0;
  uStack_34 = 0;
  local_30 = &dummy_limb_35;
  *(int *)(param_1 + 4) = -iVar1;
  if (param_3 == 0) {
    if (0 < iVar1) goto LAB_00104292;
  }
  else {
    local_38 = 0;
    uStack_34 = 1;
    plVar2 = (long *)mpz_realloc(&local_38,1);
    *plVar2 = param_3;
    if ((int)(*(uint *)(param_1 + 4) ^ uStack_34) < 0) {
LAB_00104292:
      iVar3 = local_38;
      iVar1 = mpz_abs_sub(param_1,param_1,&local_38);
      goto LAB_00104233;
    }
  }
  iVar3 = local_38;
  iVar1 = mpz_abs_add();
LAB_00104233:
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if (iVar3 != 0) {
    (*(code *)gmp_free_func)(local_30,(long)iVar3 << 3);
  }
  mpz_set(param_1,param_1);
  *(int *)(param_1 + 4) = -*(int *)(param_1 + 4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_div_qr(ulong *param_1,int *param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar6 = *(uint *)(param_4 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar1 == 0) {
    if (param_1 != (ulong *)0x0) {
      *(int *)((long)param_1 + 4) = 0;
    }
    if (param_2 != (int *)0x0) {
      param_2[1] = 0;
    }
    uVar15 = 0;
    goto LAB_0010451d;
  }
  uVar8 = -uVar1;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
  }
  uVar4 = -uVar6;
  if (0 < (int)uVar6) {
    uVar4 = uVar6;
  }
  uVar6 = uVar1 ^ uVar6;
  uVar14 = (ulong)uVar8;
  uVar11 = (ulong)uVar4;
  if (uVar14 < uVar11) {
    if ((param_5 == 1) && (-1 < (int)uVar6)) {
      if (param_2 != (int *)0x0) {
        if ((int)uVar6 < 0) {
          iVar7 = mpz_abs_add(param_2,param_3,param_4);
        }
        else {
          iVar7 = mpz_abs_sub();
        }
        if (*(int *)(param_3 + 4) < 0) {
          iVar7 = -iVar7;
        }
        param_2[1] = iVar7;
      }
      if (param_1 != (ulong *)0x0) {
        iVar7 = (int)*param_1;
        *(int *)((long)param_1 + 4) = 1;
joined_r0x0010459f:
        if (iVar7 < 1) {
          puVar10 = (undefined8 *)mpz_realloc(param_1,1);
        }
        else {
          puVar10 = (undefined8 *)param_1[1];
        }
        *puVar10 = 1;
      }
    }
    else if ((param_5 == 0) && ((int)uVar6 < 0)) {
      if (param_2 != (int *)0x0) {
        if ((int)uVar6 < 0) {
          iVar7 = mpz_abs_sub(param_2,param_3,param_4);
        }
        else {
          iVar7 = mpz_abs_add();
        }
        if (*(int *)(param_3 + 4) < 0) {
          iVar7 = -iVar7;
        }
        param_2[1] = iVar7;
      }
      if (param_1 != (ulong *)0x0) {
        iVar7 = (int)*param_1;
        *(int *)((long)param_1 + 4) = -1;
        goto joined_r0x0010459f;
      }
    }
    else {
      if (param_2 != (int *)0x0) {
        mpz_set(param_2);
      }
      if (param_1 != (ulong *)0x0) {
        *(int *)((long)param_1 + 4) = 0;
      }
    }
    uVar15 = 1;
    goto LAB_0010451d;
  }
  local_50 = &dummy_limb_35;
  local_58 = 0;
  mpz_set(&local_58);
  puVar3 = local_50;
  if (param_1 == (ulong *)0x0) {
    mpn_div_qr(0,local_50,uVar14,*(undefined8 *)(param_4 + 8),uVar11);
  }
  else {
    lVar13 = (uVar14 - uVar11) + 1;
    uVar12 = (lVar13 * 0x40 - 1U >> 6) + 1;
    local_68 = uVar12 & 0xffffffff;
    uVar12 = (*(code *)gmp_allocate_func)(uVar12 * 8);
    local_60 = uVar12;
    mpn_div_qr(uVar12,puVar3,uVar14,*(undefined8 *)(param_4 + 8),uVar11);
    if (uVar12 != 0) {
      iVar7 = (int)lVar13 - (uint)(*(long *)((uVar12 - 8) + lVar13 * 8) == 0);
      if ((int)uVar6 < 0) {
        iVar7 = -iVar7;
      }
      local_68 = CONCAT44(iVar7,(undefined4)local_68);
    }
  }
  do {
    if (*(long *)(puVar3 + uVar11 * 2 + -2) != 0) {
      uVar15 = 1;
      bVar5 = true;
      goto LAB_0010448d;
    }
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  uVar15 = 0;
  bVar5 = false;
LAB_0010448d:
  uVar8 = -(uint)uVar11;
  if (-1 < (int)uVar1) {
    uVar8 = (uint)uVar11;
  }
  local_58 = CONCAT44(uVar8,(int)local_58);
  iVar7 = (int)local_58;
  if ((param_5 == 0) && ((int)uVar6 < 0)) {
    if (uVar11 == 0) {
LAB_0010463b:
      if (param_1 != (ulong *)0x0) goto LAB_00104640;
LAB_0010467e:
      iVar7 = (int)local_58;
      if (param_2 != (int *)0x0) {
        iVar2 = (int)local_58;
        iVar9 = local_58._4_4_;
        goto LAB_00104693;
      }
    }
    else {
      if (param_1 != (ulong *)0x0) {
        mpz_sub_ui(&local_68,&local_68,1);
        if (param_2 != (int *)0x0) goto LAB_001044e0;
        goto LAB_00104640;
      }
      if (param_2 != (int *)0x0) {
LAB_001044e0:
        uVar1 = *(uint *)(param_4 + 4);
        goto joined_r0x0010471e;
      }
    }
  }
  else {
    if (((param_5 == 1 & (byte)~(byte)((int)uVar6 >> 0x1f) >> 7) == 0) || (!bVar5))
    goto LAB_0010463b;
    if (param_1 == (ulong *)0x0) {
      if (param_2 == (int *)0x0) goto LAB_001046b5;
    }
    else {
      mpz_add_ui(&local_68,&local_68,1);
      if (param_2 == (int *)0x0) goto LAB_00104640;
    }
    uVar1 = *(uint *)(param_4 + 4);
joined_r0x0010471e:
    if ((int)(uVar8 ^ uVar1) < 0) {
      iVar9 = mpz_abs_add(&local_58,&local_58,param_4);
    }
    else {
      iVar9 = mpz_abs_sub(&local_58,&local_58,param_4);
    }
    if (local_58 < 0) {
      iVar9 = -iVar9;
    }
    local_58 = CONCAT44(iVar9,(int)local_58);
    iVar2 = (int)local_58;
    if (param_1 != (ulong *)0x0) {
LAB_00104640:
      uVar11 = *param_1;
      uVar14 = param_1[1];
      *param_1 = local_68;
      param_1[1] = local_60;
      local_68 = uVar11;
      local_60 = uVar14;
      if ((int)uVar11 != 0) {
        (*(code *)gmp_free_func)(uVar14,(long)(int)uVar11 * 8);
      }
      goto LAB_0010467e;
    }
LAB_00104693:
    puVar3 = *(undefined4 **)(param_2 + 2);
    iVar7 = *param_2;
    *(ulong *)param_2 = CONCAT44(iVar9,iVar2);
    *(undefined4 **)(param_2 + 2) = local_50;
    local_50 = puVar3;
  }
LAB_001046b5:
  if (iVar7 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)iVar7 * 8);
  }
LAB_0010451d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



undefined8
mpz_div_qr_ui(undefined8 param_1,int *param_2,undefined8 param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = (undefined8 *)&dummy_limb_35;
  local_58 = 0;
  local_50 = &dummy_limb_35;
  if (param_4 == 0) {
    mpz_div_qr(param_1,&local_68,param_3,&local_58);
  }
  else {
    local_58 = 0x100000000;
    plVar3 = (long *)mpz_realloc(&local_58,1);
    *plVar3 = param_4;
    iVar1 = (int)local_58;
    mpz_div_qr(param_1,&local_68,param_3,&local_58,param_5);
    if (iVar1 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)iVar1 << 3);
    }
  }
  uVar4 = 0;
  if (local_68._4_4_ != 0) {
    uVar4 = *local_60;
  }
  iVar1 = (int)local_68;
  if (param_2 != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    iVar1 = *param_2;
    *(undefined8 *)param_2 = local_68;
    *(undefined8 **)(param_2 + 2) = local_60;
    local_60 = puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_60,(long)iVar1 << 3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_ui_sub(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_38;
  uint uStack_34;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_set(param_1,param_3);
  iVar1 = *(int *)(param_1 + 4);
  local_38 = 0;
  uStack_34 = 0;
  local_30 = &dummy_limb_35;
  *(int *)(param_1 + 4) = -iVar1;
  if (param_2 == 0) {
    if (0 < iVar1) goto LAB_001049c2;
  }
  else {
    local_38 = 0;
    uStack_34 = 1;
    plVar2 = (long *)mpz_realloc(&local_38,1);
    *plVar2 = param_2;
    if ((int)(*(uint *)(param_1 + 4) ^ uStack_34) < 0) {
LAB_001049c2:
      iVar3 = local_38;
      iVar1 = mpz_abs_sub(param_1,param_1,&local_38);
      goto LAB_00104972;
    }
  }
  iVar3 = local_38;
  iVar1 = mpz_abs_add();
LAB_00104972:
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if (iVar3 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001049a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_30,(long)iVar3 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_add(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((int)(*(uint *)(param_2 + 4) ^ *(uint *)(param_3 + 4)) < 0) {
    iVar1 = mpz_abs_sub();
  }
  else {
    iVar1 = mpz_abs_add();
  }
  if (*(int *)(param_2 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}



void mpz_sub(long param_1,long param_2,long param_3)

{
  int iVar1;
  
  if ((int)(*(uint *)(param_2 + 4) ^ *(uint *)(param_3 + 4)) < 0) {
    iVar1 = mpz_abs_add();
  }
  else {
    iVar1 = mpz_abs_sub();
  }
  if (*(int *)(param_2 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}



void mpz_mul(int *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = *(uint *)(param_3 + 4);
  if ((uVar2 == 0) || (uVar3 == 0)) {
    param_1[1] = 0;
  }
  else {
    uVar6 = -uVar2;
    if (0 < (int)uVar2) {
      uVar6 = uVar2;
    }
    uVar7 = -uVar3;
    if (0 < (int)uVar3) {
      uVar7 = uVar3;
    }
    uVar10 = (ulong)uVar6;
    uVar11 = (ulong)uVar7;
    lVar1 = uVar10 + uVar11;
    lVar12 = (lVar1 * 0x40 - 1U >> 6) + 1;
    lVar9 = (*(code *)gmp_allocate_func)(lVar12 * 8);
    if (uVar10 < uVar11) {
      mpn_mul(lVar9,*(undefined8 *)(param_3 + 8),uVar11,*(undefined8 *)(param_2 + 8),uVar10);
    }
    else {
      mpn_mul(lVar9,*(undefined8 *)(param_2 + 8),uVar10,*(undefined8 *)(param_3 + 8),uVar11);
    }
    iVar8 = (int)lVar1 - (uint)(*(long *)(lVar9 + -8 + lVar1 * 8) == 0);
    iVar4 = *param_1;
    *param_1 = (int)lVar12;
    if ((int)(uVar2 ^ uVar3) < 0) {
      iVar8 = -iVar8;
    }
    uVar5 = *(undefined8 *)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar9;
    param_1[1] = iVar8;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00104b5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)gmp_free_func)(uVar5,(long)iVar4 << 3);
      return;
    }
  }
  return;
}



void mpz_mul_ui(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_mul(param_1,param_2,&local_48);
  }
  else {
    local_48 = 0x100000000;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = param_3;
    iVar1 = (int)local_48;
    mpz_mul(param_1,param_2,&local_48);
    if (iVar1 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
        return;
      }
      goto LAB_00104c5f;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c5f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gmp_lucas_step_k_2k(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_div_qr(0,param_2,param_2,param_3,*(uint *)(param_3 + 4) >> 0x1f);
  mpz_mul(param_1,param_1,param_1);
  local_40 = &dummy_limb_35;
  local_48 = _LC35;
  puVar2 = (undefined8 *)mpz_realloc(&local_48,1);
  *puVar2 = 2;
  mpz_mul(&local_48,param_2,&local_48);
  if ((int)(*(uint *)(param_1 + 4) ^ local_48._4_4_) < 0) {
    iVar1 = mpz_abs_add(param_1,param_1,&local_48);
  }
  else {
    iVar1 = mpz_abs_sub();
  }
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_48 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
  }
  mpz_div_qr(0,param_1,param_1,param_3,2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    mpz_mul(param_2,param_2,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_mul_si(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    local_40 = &dummy_limb_35;
    local_48 = _LC35;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = -param_3;
    mpz_mul(param_1,param_2,&local_48);
    if ((int)local_48 != 0) {
      (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    }
    mpz_set(param_1,param_1);
    *(int *)(param_1 + 4) = -*(int *)(param_1 + 4);
  }
  else {
    local_48 = 0;
    local_40 = &dummy_limb_35;
    if (param_3 == 0) {
      mpz_mul(param_1,param_2,&local_48);
    }
    else {
      local_48 = 0x100000000;
      plVar2 = (long *)mpz_realloc(&local_48,1);
      *plVar2 = param_3;
      iVar1 = (int)local_48;
      mpz_mul(param_1,param_2,&local_48);
      if (iVar1 != 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
          return;
        }
        goto LAB_00104ebd;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104ebd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_mul_2exp(int *param_1,long param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *__s;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 != 0) {
    iVar3 = -iVar4;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    uVar7 = param_3 >> 6;
    lVar5 = (long)iVar3;
    lVar6 = lVar5 + uVar7 + (ulong)((param_3 & 0x3f) != 0);
    if (*param_1 < lVar6) {
      __s = (void *)mpz_realloc(param_1,lVar6);
    }
    else {
      __s = *(void **)(param_1 + 2);
    }
    lVar2 = *(long *)(param_2 + 8);
    pvVar1 = (void *)((long)__s + uVar7 * 8);
    if ((param_3 & 0x3f) == 0) {
      do {
        lVar5 = lVar5 + -1;
        *(undefined8 *)((long)pvVar1 + lVar5 * 8) = *(undefined8 *)(lVar2 + lVar5 * 8);
      } while (lVar5 != 0);
    }
    else {
      lVar5 = mpn_lshift(pvVar1,lVar2,lVar5,(uint)param_3 & 0x3f);
      *(long *)((long)__s + lVar6 * 8 + -8) = lVar5;
      lVar6 = lVar6 - (ulong)(lVar5 == 0);
    }
    if (uVar7 != 0) {
      memset(__s,0,uVar7 * 8);
    }
    iVar4 = -(int)lVar6;
    if (-1 < *(int *)(param_2 + 4)) {
      iVar4 = (int)lVar6;
    }
  }
  param_1[1] = iVar4;
  return;
}



void mpz_addmul_ui(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 != 0) {
    local_48 = 0x100000000;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = param_3;
  }
  mpz_mul(&local_48,param_2,&local_48);
  if ((int)(*(uint *)(param_1 + 4) ^ local_48._4_4_) < 0) {
    iVar1 = mpz_abs_sub(param_1,param_1,&local_48);
  }
  else {
    iVar1 = mpz_abs_add();
  }
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_48 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_submul_ui(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 != 0) {
    local_48 = 0x100000000;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = param_3;
  }
  mpz_mul(&local_48,param_2,&local_48);
  if ((int)(*(uint *)(param_1 + 4) ^ local_48._4_4_) < 0) {
    iVar1 = mpz_abs_add(param_1,param_1,&local_48);
  }
  else {
    iVar1 = mpz_abs_sub();
  }
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_48 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_addmul(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = &dummy_limb_35;
  mpz_mul(&local_38);
  if ((int)(*(uint *)(param_1 + 4) ^ local_38._4_4_) < 0) {
    iVar1 = mpz_abs_sub(param_1,param_1,&local_38);
  }
  else {
    iVar1 = mpz_abs_add();
  }
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_38 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_30,(long)(int)local_38 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_submul(long param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = &dummy_limb_35;
  mpz_mul(&local_38);
  if ((int)(*(uint *)(param_1 + 4) ^ local_38._4_4_) < 0) {
    iVar1 = mpz_abs_add(param_1,param_1,&local_38);
  }
  else {
    iVar1 = mpz_abs_sub();
  }
  if (*(int *)(param_1 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_38 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001052f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_30,(long)(int)local_38 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_cdiv_qr(void)

{
  mpz_div_qr();
  return;
}



void mpz_fdiv_qr(void)

{
  mpz_div_qr();
  return;
}



void mpz_tdiv_qr(void)

{
  mpz_div_qr();
  return;
}



void mpz_cdiv_q(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(param_1,0,param_2,param_3,1);
  return;
}



void mpz_fdiv_q(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(param_1,0,param_2,param_3,0);
  return;
}



void mpz_tdiv_q(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(param_1,0,param_2,param_3,2);
  return;
}



void mpz_cdiv_r(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(0,param_1,param_2,param_3,1);
  return;
}



void mpz_fdiv_r(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(0,param_1,param_2,param_3,0);
  return;
}



void mpz_tdiv_r(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr(0,param_1,param_2,param_3,2);
  return;
}



void mpz_mod(undefined8 param_1,undefined8 param_2,long param_3)

{
  mpz_div_qr(0,param_1,param_2,param_3,*(uint *)(param_3 + 4) >> 0x1f);
  return;
}



void mpz_cdiv_q_2exp(void)

{
  mpz_div_q_2exp();
  return;
}



void mpz_fdiv_q_2exp(void)

{
  mpz_div_q_2exp();
  return;
}



void mpz_tdiv_q_2exp(void)

{
  mpz_div_q_2exp();
  return;
}



void mpz_cdiv_r_2exp(void)

{
  mpz_div_r_2exp();
  return;
}



void mpz_fdiv_r_2exp(void)

{
  mpz_div_r_2exp();
  return;
}



void mpz_tdiv_r_2exp(void)

{
  mpz_div_r_2exp();
  return;
}



void mpz_divexact(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = mpz_div_qr(param_1,0,param_2,param_3,2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  mpz_divexact_part_0();
}



bool mpz_divisible_p(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = mpz_div_qr(0,0,param_1,param_2,2);
  return iVar1 == 0;
}



bool mpz_congruent_p(long param_1,long param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_38;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(param_3 + 4) == SUB41((uint)*(int *)(param_3 + 4) >> 0x1f,0)) {
    iVar1 = mpz_cmp();
    bVar2 = iVar1 == 0;
  }
  else {
    local_38 = 0;
    local_30 = &dummy_limb_35;
    if ((int)(*(uint *)(param_1 + 4) ^ *(uint *)(param_2 + 4)) < 0) {
      iVar1 = mpz_abs_add(&local_38,param_1,param_2);
    }
    else {
      iVar1 = mpz_abs_sub();
    }
    if (*(int *)(param_1 + 4) < 0) {
      iVar1 = -iVar1;
    }
    local_38 = CONCAT44(iVar1,(int)local_38);
    iVar1 = mpz_div_qr(0,0,&local_38,param_3,2);
    bVar2 = iVar1 == 0;
    if ((int)local_38 != 0) {
      (*(code *)gmp_free_func)(local_30,(long)(int)local_38 << 3);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_cdiv_qr_ui(void)

{
  mpz_div_qr_ui();
  return;
}



void mpz_fdiv_qr_ui(void)

{
  mpz_div_qr_ui();
  return;
}



void mpz_tdiv_qr_ui(void)

{
  mpz_div_qr_ui();
  return;
}



void mpz_cdiv_q_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(param_1,0,param_2,param_3,1);
  return;
}



void mpz_fdiv_q_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(param_1,0,param_2,param_3,0);
  return;
}



void mpz_tdiv_q_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(param_1,0,param_2,param_3,2);
  return;
}



void mpz_cdiv_r_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(0,param_1,param_2,param_3,1);
  return;
}



void mpz_fdiv_r_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(0,param_1,param_2,param_3,0);
  return;
}



void mpz_tdiv_r_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(0,param_1,param_2,param_3,2);
  return;
}



void mpz_cdiv_ui(undefined8 param_1,undefined8 param_2)

{
  mpz_div_qr_ui(0,0,param_1,param_2,1);
  return;
}



void mpz_fdiv_ui(undefined8 param_1,undefined8 param_2)

{
  mpz_div_qr_ui(0,0,param_1,param_2,0);
  return;
}



void mpz_tdiv_ui(undefined8 param_1,undefined8 param_2)

{
  mpz_div_qr_ui(0,0,param_1,param_2,2);
  return;
}



void mpz_mod_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  mpz_div_qr_ui(0,param_1,param_2,param_3,0);
  return;
}



void mpz_divexact_ui(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = mpz_div_qr_ui(param_1,0,param_2,param_3,2);
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("__cy == 0","lib/mini-gmp.c",0xa5f,"mpz_divexact_ui");
}



bool mpz_divisible_ui_p(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = mpz_div_qr_ui(0,0,param_1,param_2,2);
  return lVar1 == 0;
}



/* WARNING: Type propagation algorithm not settling */

long mpn_gcd(ulong *param_1,ulong *param_2,long param_3,ulong *param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  char cVar11;
  ulong uVar12;
  long lVar13;
  
  if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0xa98,"mpn_gcd");
  }
  if (param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn > 0","lib/mini-gmp.c",0xa99,"mpn_gcd");
  }
  if ((param_4 < param_2 + param_3) && (param_2 < param_4 + param_5)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P (up, un, vp, vn)","lib/mini-gmp.c",0xa9a,"mpn_gcd");
  }
  if (param_4[param_5 + -1] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vp[vn-1] > 0","lib/mini-gmp.c",0xa9b,"mpn_gcd");
  }
  uVar2 = *param_4;
  if ((((uint)*param_2 | (uint)uVar2) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(up[0] | vp[0]) & 1","lib/mini-gmp.c",0xa9c,"mpn_gcd");
  }
  lVar3 = param_5;
  if (param_5 < param_3) {
    mpn_div_qr(0,param_2,param_3,param_4,param_5);
    uVar2 = *param_4;
  }
  while (param_2[lVar3 + -1] == 0) {
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      do {
        param_1[lVar3] = param_4[lVar3];
        lVar3 = lVar3 + 1;
      } while (param_5 != lVar3);
      return lVar3;
    }
  }
  lVar8 = lVar3;
  lVar13 = lVar3;
  puVar9 = param_2;
  lVar1 = param_5;
  if ((uVar2 & 1) == 0) {
    uVar2 = *param_2;
    lVar8 = param_5;
    lVar13 = param_5;
    puVar9 = param_4;
    param_4 = param_2;
    param_5 = lVar3;
    lVar1 = lVar3;
  }
  do {
    if ((lVar1 < 2) && (lVar13 < 2)) {
      uVar7 = *puVar9;
      uVar12 = uVar7 | uVar2;
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(u | v) > 0","lib/mini-gmp.c",0xa6f,__PRETTY_FUNCTION___20);
      }
      if (uVar7 != 0) {
        if (uVar2 == 0) {
          *param_1 = uVar7;
          return 1;
        }
        cVar11 = '\0';
        for (uVar12 = -uVar12 & uVar12; uVar12 < 0x100000000000000; uVar12 = uVar12 << 8) {
          cVar11 = cVar11 + '\b';
        }
        for (; -1 < (long)uVar12; uVar12 = uVar12 * 2) {
          cVar11 = cVar11 + '\x01';
        }
        bVar4 = 0x3f - cVar11;
        uVar7 = uVar7 >> (bVar4 & 0x3f);
        uVar2 = uVar2 >> (bVar4 & 0x3f);
        uVar12 = uVar7;
        if ((uVar7 & 1) == 0) goto LAB_001059dd;
        while (uVar7 = uVar2, uVar2 = uVar12, (uVar7 & 1) == 0) {
LAB_001059dd:
          uVar12 = uVar2;
          uVar2 = uVar7 >> 1;
        }
        while (uVar2 != uVar7) {
          while (uVar7 < uVar2) {
            uVar2 = uVar2 - uVar7;
            do {
              uVar2 = uVar2 >> 1;
            } while ((uVar2 & 1) == 0);
            if (uVar2 == uVar7) goto LAB_00105a0c;
          }
          uVar7 = uVar7 - uVar2;
          do {
            uVar7 = uVar7 >> 1;
          } while ((uVar7 & 1) == 0);
        }
LAB_00105a0c:
        uVar2 = uVar7 << (bVar4 & 0x3f);
      }
      *param_1 = uVar2;
      return 1;
    }
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vp[0] & 1","lib/mini-gmp.c",0xaae,"mpn_gcd");
    }
    for (; uVar2 = *puVar9, uVar2 == 0; puVar9 = puVar9 + 1) {
      lVar8 = lVar8 + -1;
    }
    uVar2 = -uVar2 & uVar2;
    iVar5 = 0;
    iVar6 = 0;
    if (uVar2 < 0x100000000000000) {
      do {
        uVar2 = uVar2 << 8;
        iVar5 = iVar5 + 8;
        iVar6 = iVar5;
      } while (uVar2 < 0x100000000000000);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_001058f0:
        iVar6 = iVar6 + 1;
      }
      iVar5 = 0x3f - iVar6;
      if (0 < iVar5) goto LAB_00105a60;
      lVar13 = lVar8;
      if (param_5 <= lVar8) goto LAB_00105910;
LAB_00105a93:
      lVar8 = param_5;
      puVar10 = param_4;
      param_4 = puVar9;
    }
    else {
      iVar5 = 0x3f;
      if (-1 < (long)uVar2) goto LAB_001058f0;
LAB_00105a60:
      lVar3 = mpn_rshift(puVar9,puVar9,lVar8,iVar5);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xab8,"mpn_gcd");
      }
      lVar8 = lVar8 - (ulong)(puVar9[lVar8 + -1] == 0);
      lVar13 = lVar8;
      if (lVar8 < param_5) goto LAB_00105a93;
LAB_00105910:
      lVar3 = lVar8;
      puVar10 = puVar9;
      lVar13 = param_5;
      if (lVar8 == param_5) {
        do {
          lVar3 = lVar3 + -1;
          if (lVar3 < 0) {
            if (lVar8 < 1) {
              return lVar8;
            }
            lVar3 = 0;
            do {
              param_1[lVar3] = puVar9[lVar3];
              lVar3 = lVar3 + 1;
            } while (lVar8 != lVar3);
            return lVar8;
          }
        } while (puVar9[lVar3] == param_4[lVar3]);
        param_5 = lVar8;
        if (puVar9[lVar3] <= param_4[lVar3]) goto LAB_00105a93;
      }
    }
    lVar3 = mpn_sub(puVar10,puVar10,lVar8,param_4,lVar13);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0xaca,"mpn_gcd");
    }
    if (0 < lVar8) {
      do {
        if (puVar10[lVar8 + -1] != 0) break;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar2 = *param_4;
    puVar9 = puVar10;
    param_5 = lVar13;
    lVar1 = lVar8;
  } while( true );
}



void mpz_gcd(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined4 *puVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_3;
  if ((*(int *)(param_2 + 4) == 0) || (lVar8 = param_2, *(int *)(param_3 + 4) == 0)) {
    mpz_set(param_1,lVar8);
    iVar3 = *(int *)(param_1 + 4);
    iVar5 = -iVar3;
    if (0 < iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 4) = iVar5;
  }
  else {
    local_68 = 0;
    local_60 = &dummy_limb_35;
    local_50 = &dummy_limb_35;
    local_58 = 0;
    mpz_set(&local_68);
    iVar3 = -local_68._4_4_;
    if (0 < local_68._4_4_) {
      iVar3 = local_68._4_4_;
    }
    local_68._4_4_ = iVar3;
    uVar6 = mpz_make_odd(&local_68);
    mpz_set(&local_58,param_3);
    iVar3 = -local_58._4_4_;
    if (0 < local_58._4_4_) {
      iVar3 = local_58._4_4_;
    }
    local_58 = CONCAT44(iVar3,(int)local_58);
    uVar7 = mpz_make_odd(&local_58);
    iVar3 = (int)local_68;
    if (uVar6 <= uVar7) {
      uVar7 = uVar6;
    }
    puVar10 = local_50;
    iVar9 = (int)local_58;
    iVar1 = local_68._4_4_;
    iVar5 = local_58._4_4_;
    if (local_68._4_4_ < local_58._4_4_) {
      local_68._0_4_ = (int)local_58;
      puVar10 = local_60;
      iVar9 = iVar3;
      iVar1 = local_58._4_4_;
      iVar5 = local_68._4_4_;
      local_60 = local_50;
    }
    puVar2 = local_60;
    iVar3 = (int)local_68;
    uVar4 = mpn_gcd(local_60,local_60,(long)iVar1,puVar10,(long)iVar5);
    local_68 = CONCAT44(uVar4,(int)local_68);
    mpz_mul_2exp(param_1,&local_68,uVar7);
    if (iVar3 != 0) {
      (*(code *)gmp_free_func)(puVar2,(long)iVar3 << 3);
    }
    if (iVar9 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105dca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(puVar10,(long)iVar9 << 3);
        return;
      }
      goto LAB_00105e37;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105e37:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_gcd_ui(int *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  int local_48;
  int iStack_44;
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  iStack_44 = 0;
  local_40 = (undefined8 *)&dummy_limb_35;
  if (param_3 == 0) {
    mpz_gcd(&local_48,param_2,&local_48);
  }
  else {
    local_48 = 0;
    iStack_44 = 1;
    plVar3 = (long *)mpz_realloc(&local_48,1);
    *plVar3 = param_3;
    mpz_gcd(&local_48,param_2,&local_48);
    if (iStack_44 != 0) {
      uVar4 = *local_40;
      goto LAB_00105e8a;
    }
  }
  uVar4 = 0;
LAB_00105e8a:
  iVar1 = local_48;
  if (param_1 != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 2);
    iVar1 = *param_1;
    *(undefined8 **)(param_1 + 2) = local_40;
    *(ulong *)param_1 = CONCAT44(iStack_44,local_48);
    local_40 = puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_lcm(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(param_2 + 4);
  if ((*(int *)(param_2 + 4) != 0) && (iVar2 = *(int *)(param_3 + 4), *(int *)(param_3 + 4) != 0)) {
    local_48 = 0;
    local_40 = &dummy_limb_35;
    mpz_gcd(&local_48);
    iVar2 = mpz_div_qr(&local_48,0,param_2,&local_48,2);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      mpz_divexact_part_0();
    }
    mpz_mul(param_1,&local_48,param_3);
    if ((int)local_48 != 0) {
      (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    }
    mpz_set(param_1,param_1);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = -iVar1;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
  }
  *(int *)(param_1 + 4) = iVar2;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_lcm_ui(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  if ((param_3 != 0) && (iVar2 = *(int *)(param_2 + 4), *(int *)(param_2 + 4) != 0)) {
    uVar3 = mpz_gcd_ui(0);
    local_48 = 0;
    local_40 = &dummy_limb_35;
    if (param_3 < uVar3) {
      mpz_mul(param_1,param_2,&local_48);
    }
    else {
      local_48 = 0x100000000;
      puVar4 = (ulong *)mpz_realloc(&local_48,1);
      iVar2 = (int)local_48;
      *puVar4 = param_3 / uVar3;
      mpz_mul(param_1,param_2,&local_48);
      if (iVar2 != 0) {
        (*(code *)gmp_free_func)(local_40,(long)iVar2 << 3);
      }
    }
    mpz_set(param_1,param_1);
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = -iVar1;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
  }
  *(int *)(param_1 + 4) = iVar2;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_pow_ui(int *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  iVar4 = 0x40;
  uVar3 = 0x8000000000000000;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &dummy_limb_35;
  local_58 = _LC35;
  puVar2 = (undefined8 *)mpz_realloc(&local_58,1);
  *puVar2 = 1;
  do {
    while( true ) {
      mpz_mul(&local_58,&local_58,&local_58);
      if ((uVar3 & param_3) == 0) break;
      uVar3 = uVar3 >> 1;
      mpz_mul(&local_58,&local_58,param_2);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) goto LAB_001061d3;
    }
    uVar3 = uVar3 >> 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
LAB_001061d3:
  iVar4 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined4 **)(param_1 + 2) = local_50;
  *(undefined8 *)param_1 = local_58;
  if (iVar4 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(uVar1,(long)iVar4 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}



void mpz_ui_pow_ui(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_2 == 0) {
    mpz_pow_ui(param_1,&local_48);
  }
  else {
    local_48 = 0x100000000;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = param_2;
    iVar1 = (int)local_48;
    mpz_pow_ui(param_1,&local_48,param_3);
    if (iVar1 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001062f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
        return;
      }
      goto LAB_001062ff;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001062ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_mfac_uiui(int *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_2 + (param_2 == 0);
  if (lVar4 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar3 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = lVar4;
  }
  uVar1 = param_3 + 1;
  if ((1 < uVar1) && (uVar1 < param_2)) {
    do {
      local_58 = 0;
      local_50 = &dummy_limb_35;
      param_2 = param_2 - param_3;
      if (param_2 == 0) {
        mpz_mul(param_1,param_1,&local_58);
        break;
      }
      local_58 = 0x100000000;
      puVar2 = (ulong *)mpz_realloc(&local_58,1);
      *puVar2 = param_2;
      mpz_mul(param_1,param_1,&local_58);
      if ((int)local_58 != 0) {
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
      }
    } while (uVar1 < param_2);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_2fac_ui(int *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_2 + (param_2 == 0);
  if (lVar4 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar3 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = lVar4;
  }
  uVar1 = _LC35;
  if (3 < param_2) {
    do {
      local_48 = uVar1;
      param_2 = param_2 - 2;
      local_40 = &dummy_limb_35;
      puVar2 = (ulong *)mpz_realloc(&local_48,1);
      *puVar2 = param_2;
      mpz_mul(param_1,param_1,&local_48);
      if ((int)local_48 != 0) {
        (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
      }
    } while (3 < param_2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_fac_ui(int *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_2 + (param_2 == 0);
  if (lVar4 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar3 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = lVar4;
  }
  uVar1 = _LC35;
  if (2 < param_2) {
    do {
      local_48 = uVar1;
      param_2 = param_2 - 1;
      local_40 = &dummy_limb_35;
      puVar2 = (ulong *)mpz_realloc(&local_48,1);
      *puVar2 = param_2;
      mpz_mul(param_1,param_1,&local_48);
      if ((int)local_48 != 0) {
        (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
      }
    } while (param_2 != 2);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_bin_uiui(int *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_3) {
    param_1[1] = 0;
    local_60 = &dummy_limb_35;
    local_68 = 0x100000000;
    puVar3 = (undefined8 *)mpz_realloc(&local_68,1);
    *puVar3 = 1;
    goto LAB_00106723;
  }
  param_1[1] = 1;
  if (*param_1 < 1) {
    puVar3 = (undefined8 *)mpz_realloc(param_1,1);
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 2);
  }
  *puVar3 = 1;
  local_60 = &dummy_limb_35;
  local_68 = 0;
  if (param_2 >> 1 < param_3) {
    local_70 = param_2 - param_3;
    lVar5 = (local_70 == 0) + local_70;
    if (lVar5 != 0) goto LAB_001068f0;
    if (local_70 < 3) goto LAB_00106723;
    local_70 = 0xffffffffffffffff;
LAB_001067e1:
    uVar6 = local_70;
    do {
      uVar6 = uVar6 - 1;
      local_50 = &dummy_limb_35;
      local_58 = _LC35;
      puVar2 = (ulong *)mpz_realloc(&local_58,1);
      *puVar2 = uVar6;
      mpz_mul(&local_68,&local_68,&local_58);
      if ((int)local_58 != 0) {
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
      }
    } while (uVar6 != 2);
  }
  else {
    lVar5 = param_3 + (param_3 == 0);
    local_70 = param_3;
    if (lVar5 == 0) goto LAB_00106723;
LAB_001068f0:
    local_68 = 0x100000000;
    plVar4 = (long *)mpz_realloc(&local_68,1);
    *plVar4 = lVar5;
    if (2 < local_70) goto LAB_001067e1;
  }
  if (local_70 != 0) {
    local_70 = param_2 - local_70;
    do {
      local_58 = 0;
      local_50 = &dummy_limb_35;
      if (param_2 == 0) {
        mpz_mul(param_1,param_1,&local_58);
      }
      else {
        local_58 = 0x100000000;
        puVar2 = (ulong *)mpz_realloc(&local_58,1);
        *puVar2 = param_2;
        iVar1 = (int)local_58;
        mpz_mul(param_1,param_1,&local_58);
        if (iVar1 != 0) {
          (*(code *)gmp_free_func)(local_50,(long)iVar1 << 3);
        }
      }
      param_2 = param_2 - 1;
    } while (param_2 != local_70);
  }
LAB_00106723:
  iVar1 = mpz_div_qr(param_1,0,param_1,&local_68,2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    mpz_divexact_part_0();
  }
  if ((int)local_68 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_60,(long)(int)local_68 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mpz_tstbit(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar6 = param_2 >> 6;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 <= uVar6) {
    return (ulong)(long)(int)uVar1 >> 0x3f;
  }
  uVar2 = *(ulong *)(*(long *)(param_1 + 8) + uVar6 * 8);
  uVar3 = (uint)(uVar2 >> ((byte)param_2 & 0x3f)) & 1;
  uVar4 = (ulong)uVar3;
  if (-1 < (long)(int)uVar1) {
    return uVar4;
  }
  if ((param_2 & 0x3f) == 0) goto LAB_0010699f;
  lVar5 = uVar2 << (0x40 - ((byte)param_2 & 0x3f) & 0x3f);
  while( true ) {
    if (lVar5 != 0) {
      return (ulong)(uVar3 ^ 1);
    }
LAB_0010699f:
    bVar7 = uVar6 == 0;
    uVar6 = uVar6 - 1;
    if (bVar7) break;
    lVar5 = *(long *)(*(long *)(param_1 + 8) + uVar6 * 8);
  }
  return uVar4;
}



void mpz_rootrem(int *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined4 *puVar13;
  ulong *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_a0;
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = *(int *)(param_3 + 4);
  if ((~param_4 & (ulong)(long)iVar3 >> 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Negative argument, with even root.");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Zeroth root.");
  }
  iVar2 = -iVar3;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 < 2) {
    if ((iVar3 != 0) &&
       (puVar14 = *(ulong **)(param_3 + 8), (uint)(1 < *puVar14) - (uint)(*puVar14 == 0) == 1))
    goto LAB_00106a59;
    if (param_1 != (int *)0x0) {
      mpz_set(param_1,param_3);
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 4) = 0;
    }
  }
  else {
    puVar14 = *(ulong **)(param_3 + 8);
LAB_00106a59:
    local_70 = &dummy_limb_35;
    local_78 = 0;
    local_80 = &dummy_limb_35;
    local_88 = 0;
    uVar4 = puVar14[(long)iVar2 + -1];
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      mpn_limb_size_in_base_2_part_0();
    }
    uVar5 = 0;
    for (; uVar4 < 0x100000000000000; uVar4 = uVar4 << 8) {
      uVar5 = (ulong)((int)uVar5 + 8);
    }
    for (; -1 < (long)uVar4; uVar4 = uVar4 * 2) {
      uVar5 = (ulong)((int)uVar5 + 1);
    }
    uVar5 = ((long)(iVar2 + -1) * 0x40 + 0x3f) - uVar5;
    lVar11 = uVar5 / param_4 + 1;
    iVar2 = mpz_tstbit(&local_88,lVar11,uVar5 % param_4);
    if (iVar2 == 0) {
      mpz_abs_add_bit(&local_88,lVar11);
    }
    if (param_4 == 2) {
      puVar6 = local_70;
      lVar11 = local_78;
      puVar13 = local_80;
      uVar12 = local_88._4_4_;
      do {
        while( true ) {
          local_a0 = (int)local_88;
          lVar10 = CONCAT44(uVar12,(int)local_88);
          local_88 = lVar11;
          local_80 = puVar6;
          local_78 = lVar10;
          local_70 = puVar13;
          mpz_div_qr(&local_88,0,param_3,&local_78,2);
          if ((int)(uVar12 ^ local_88._4_4_) < 0) {
            iVar3 = mpz_abs_sub(&local_88,&local_88,&local_78);
          }
          else {
            iVar3 = mpz_abs_add();
          }
          if (local_88 < 0) {
            iVar3 = -iVar3;
          }
          local_88 = CONCAT44(iVar3,(int)local_88);
          mpz_div_q_2exp(&local_88,&local_88,1,2);
          uVar1 = -uVar12;
          if (0 < (int)uVar12) {
            uVar1 = uVar12;
          }
          uVar12 = -local_88._4_4_;
          if (0 < (int)local_88._4_4_) {
            uVar12 = local_88._4_4_;
          }
          lVar9 = (long)(int)uVar12;
          puVar6 = puVar13;
          lVar11 = lVar10;
          uVar12 = local_88._4_4_;
          if ((int)uVar1 != lVar9) break;
          do {
            bVar15 = lVar9 == 0;
            lVar9 = lVar9 + -1;
            if (bVar15) goto LAB_00106c50;
            puVar14 = (ulong *)(puVar13 + lVar9 * 2);
          } while (*(ulong *)(local_80 + lVar9 * 2) == *puVar14);
          puVar13 = local_80;
          if (*puVar14 < *(ulong *)(local_80 + lVar9 * 2)) goto LAB_00106c50;
        }
        puVar13 = local_80;
      } while (lVar9 < (int)uVar1);
    }
    else {
      local_68 = 0;
      local_60 = &dummy_limb_35;
      uVar12 = local_88._4_4_;
      if (iVar3 < 0) {
        mpz_set(&local_88,&local_88);
        uVar12 = -local_88._4_4_;
      }
      lVar11 = param_4 - 1;
      puVar6 = local_70;
      lVar10 = local_78;
      puVar13 = local_80;
      do {
        while( true ) {
          local_a0 = (int)local_88;
          lVar9 = CONCAT44(uVar12,(int)local_88);
          local_88 = lVar10;
          local_80 = puVar6;
          local_78 = lVar9;
          local_70 = puVar13;
          mpz_pow_ui(&local_88,&local_78,lVar11);
          mpz_div_qr(&local_88,0,param_3,&local_88,2);
          local_58 = 0;
          local_50 = &dummy_limb_35;
          if (lVar11 == 0) {
            mpz_mul(&local_68,&local_78,&local_58);
          }
          else {
            local_58 = 0x100000000;
            plVar8 = (long *)mpz_realloc(&local_58,1);
            *plVar8 = lVar11;
            iVar3 = (int)local_58;
            mpz_mul(&local_68,&local_78,&local_58);
            if (iVar3 != 0) {
              (*(code *)gmp_free_func)(local_50,(long)iVar3 << 3);
            }
          }
          if ((int)(local_88._4_4_ ^ local_68._4_4_) < 0) {
            iVar3 = mpz_abs_sub(&local_88,&local_88,&local_68);
          }
          else {
            iVar3 = mpz_abs_add();
          }
          if (local_88 < 0) {
            iVar3 = -iVar3;
          }
          local_88 = CONCAT44(iVar3,(int)local_88);
          mpz_div_qr_ui(&local_88,0,&local_88,param_4,2);
          uVar1 = -uVar12;
          if (0 < (int)uVar12) {
            uVar1 = uVar12;
          }
          uVar12 = -local_88._4_4_;
          if (0 < (int)local_88._4_4_) {
            uVar12 = local_88._4_4_;
          }
          lVar7 = (long)(int)uVar12;
          puVar6 = puVar13;
          lVar10 = lVar9;
          uVar12 = local_88._4_4_;
          if ((int)uVar1 != lVar7) break;
          do {
            bVar15 = lVar7 == 0;
            lVar7 = lVar7 + -1;
            if (bVar15) goto LAB_00106c2c;
            puVar14 = (ulong *)(puVar13 + lVar7 * 2);
          } while (*(ulong *)(local_80 + lVar7 * 2) == *puVar14);
          puVar13 = local_80;
          if (*puVar14 < *(ulong *)(local_80 + lVar7 * 2)) goto LAB_00106c2c;
        }
        puVar13 = local_80;
      } while (lVar7 < (int)uVar1);
LAB_00106c2c:
      if ((int)local_68 != 0) {
        (*(code *)gmp_free_func)(local_60,(long)(int)local_68 * 8);
      }
    }
LAB_00106c50:
    if (param_2 != 0) {
      mpz_pow_ui(&local_88,&local_78,param_4);
      if ((int)(*(uint *)(param_3 + 4) ^ local_88._4_4_) < 0) {
        iVar3 = mpz_abs_add(param_2,param_3,&local_88);
      }
      else {
        iVar3 = mpz_abs_sub(param_2);
      }
      if (*(int *)(param_3 + 4) < 0) {
        iVar3 = -iVar3;
      }
      *(int *)(param_2 + 4) = iVar3;
    }
    iVar3 = local_a0;
    if (param_1 != (int *)0x0) {
      iVar3 = *param_1;
      puVar6 = *(undefined4 **)(param_1 + 2);
      local_78 = CONCAT44(local_78._4_4_,iVar3);
      *(undefined4 **)(param_1 + 2) = local_70;
      *(ulong *)param_1 = CONCAT44(local_78._4_4_,local_a0);
      local_70 = puVar6;
    }
    if (iVar3 != 0) {
      (*(code *)gmp_free_func)(local_70,(long)iVar3 * 8);
    }
    if ((int)local_88 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_80,(long)(int)local_88 * 8);
        return;
      }
      goto LAB_00106fbd;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106fbd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mpz_root(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined8 local_28;
  undefined4 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = &dummy_limb_35;
  mpz_rootrem(param_1,&local_28,param_2,param_3);
  bVar1 = local_28._4_4_ == 0;
  if ((int)local_28 != 0) {
    (*(code *)gmp_free_func)(local_20,(long)(int)local_28 << 3);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_sqrtrem(void)

{
  mpz_rootrem();
  return;
}



void mpz_sqrt(undefined8 param_1,undefined8 param_2)

{
  mpz_rootrem(param_1,0,param_2,2);
  return;
}



long mpn_sqrtrem(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xd20,"mpn_sqrtrem");
  }
  if (*(long *)(param_3 + -8 + param_4 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xd21,"mpn_sqrtrem");
  }
  local_34 = (undefined4)param_4;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  local_50 = &dummy_limb_35;
  local_58 = 0;
  local_38 = 0;
  local_30 = param_3;
  mpz_rootrem(&local_58,&local_48,&local_38,2);
  lVar1 = (long)local_58._4_4_;
  if (lVar1 != param_4 + 1 >> 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("s->_mp_size == (n+1)/2","lib/mini-gmp.c",0xd27,"mpn_sqrtrem");
  }
  do {
    lVar1 = lVar1 + -1;
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(local_50 + lVar1 * 2);
  } while (lVar1 != 0);
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
  }
  lVar1 = (long)local_48._4_4_;
  if ((param_2 != 0) && (lVar2 = lVar1 + -1, -1 < lVar2)) {
    do {
      *(undefined8 *)(param_2 + lVar2 * 8) = *(undefined8 *)(local_40 + lVar2 * 2);
      bVar3 = lVar2 != 0;
      lVar2 = lVar2 + -1;
    } while (bVar3);
  }
  if ((int)local_48 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 * 8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar1;
}



bool mpn_perfect_square_p(long param_1,long param_2)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  undefined4 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("n > 0","lib/mini-gmp.c",0xd15,"mpn_perfect_square_p");
  }
  if (*(long *)(param_1 + -8 + param_2 * 8) != 0) {
    local_34 = (undefined4)param_2;
    local_20 = &dummy_limb_35;
    local_38 = 0;
    local_28 = 0;
    local_30 = param_1;
    mpz_rootrem(0,&local_28,&local_38,2);
    bVar1 = local_28._4_4_ == 0;
    if ((int)local_28 != 0) {
      (*(code *)gmp_free_func)(local_20,(long)(int)local_28 << 3);
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("p [n-1] != 0","lib/mini-gmp.c",0xd16,"mpn_perfect_square_p");
}



bool mpz_perfect_square_p(long param_1)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined8 local_28;
  undefined4 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar1 = *(int *)(param_1 + 4) == 0;
  if (0 < *(int *)(param_1 + 4)) {
    local_20 = &dummy_limb_35;
    local_28 = 0;
    mpz_rootrem(0,&local_28,param_1,2);
    bVar1 = local_28._4_4_ == 0;
    if ((int)local_28 != 0) {
      (*(code *)gmp_free_func)(local_20,(long)(int)local_28 << 3);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar1;
}



void mpz_gcdext(long *param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  int extraout_XMM0_Da;
  int extraout_XMM1_Da;
  long local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  uint *local_80;
  undefined8 local_78;
  uint *local_70;
  undefined8 local_68;
  uint *local_60;
  undefined8 local_58;
  uint *local_50;
  long local_40;
  
  iVar8 = *(int *)(param_4 + 4);
  iVar10 = *(int *)(param_5 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar8 == 0) {
    mpz_set(param_1,param_5);
    iVar8 = *(int *)((long)param_1 + 4);
    iVar17 = -iVar8;
    if (0 < iVar8) {
      iVar17 = iVar8;
    }
    *(int *)((long)param_1 + 4) = iVar17;
    if (param_2 != (long *)0x0) {
      *(int *)((long)param_2 + 4) = 0;
    }
    if (param_3 != (long *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        mpz_set_si(param_3,(long)(int)((uint)(0 < iVar10) + (iVar10 >> 0x1f)));
        return;
      }
      goto LAB_00107ea7;
    }
  }
  else if (iVar10 == 0) {
    mpz_set(param_1,param_4);
    iVar10 = *(int *)((long)param_1 + 4);
    iVar17 = -iVar10;
    if (0 < iVar10) {
      iVar17 = iVar10;
    }
    *(int *)((long)param_1 + 4) = iVar17;
    if (param_2 != (long *)0x0) {
      mpz_set_si(param_2,(long)(int)((uint)(0 < iVar8) + (iVar8 >> 0x1f)));
    }
    if (param_3 != (long *)0x0) {
      *(int *)((long)param_3 + 4) = 0;
    }
  }
  else {
    local_a8 = 0;
    local_a0 = &dummy_limb_35;
    local_90 = &dummy_limb_35;
    local_80 = &dummy_limb_35;
    local_70 = &dummy_limb_35;
    local_60 = &dummy_limb_35;
    local_50 = &dummy_limb_35;
    local_98 = 0;
    local_88 = 0;
    local_78 = 0;
    local_68 = 0;
    local_58 = 0;
    mpz_set(&local_a8,param_4);
    iVar8 = -local_a8._4_4_;
    if (0 < (int)local_a8._4_4_) {
      iVar8 = local_a8._4_4_;
    }
    local_a8 = CONCAT44(iVar8,(int)local_a8);
    uVar12 = mpz_make_odd(&local_a8);
    mpz_set(&local_98,param_5);
    iVar8 = -local_98._4_4_;
    if (0 < (int)local_98._4_4_) {
      iVar8 = local_98._4_4_;
    }
    local_98 = CONCAT44(iVar8,(undefined4)local_98);
    uVar13 = mpz_make_odd(&local_98);
    puVar4 = local_90;
    lVar14 = local_98;
    uVar20 = uVar13;
    if (uVar12 <= uVar13) {
      uVar20 = uVar12;
    }
    lVar15 = uVar12 - uVar20;
    local_e0 = uVar13 - uVar20;
    local_d8 = param_4;
    local_d0 = param_5;
    local_c8 = param_3;
    local_c0 = param_2;
    if ((int)local_a8._4_4_ < (int)local_98._4_4_) {
      local_90 = local_a0;
      local_98 = local_a8;
      local_a0 = puVar4;
      local_a8 = lVar14;
      lVar15 = uVar13 - uVar20;
      local_e0 = uVar12 - uVar20;
      local_d8 = param_5;
      local_d0 = param_4;
      local_c8 = param_2;
      local_c0 = param_3;
    }
    mpz_div_qr(&local_58,&local_a8,&local_a8,&local_98,2);
    mpz_mul_2exp(&local_58,&local_58,lVar15);
    puVar18 = &local_78;
    iVar8 = mpz_tstbit(&local_78,local_e0);
    if (iVar8 == 0) {
      mpz_abs_add_bit(puVar18,local_e0);
    }
    local_e0 = lVar15 + local_e0;
    if ((int)local_a8._4_4_ < 1) {
      mpz_abs_add_bit(&local_68,lVar15);
    }
    else {
      lVar14 = mpz_make_odd(&local_a8);
      mpz_abs_add_bit(&local_68,lVar15 + lVar14);
      local_e0 = local_e0 + lVar14;
      while (iVar8 = mpz_cmp(&local_a8,&local_98), iVar8 != 0) {
        if (iVar8 < 0) {
          if ((int)(local_98._4_4_ ^ local_a8._4_4_) < 0) {
            iVar8 = mpz_abs_add(&local_98,&local_98,&local_a8);
          }
          else {
            iVar8 = mpz_abs_sub();
          }
          if (local_98 < 0) {
            iVar8 = -iVar8;
          }
          local_98 = CONCAT44(iVar8,(undefined4)local_98);
          if ((int)(local_68._4_4_ ^ local_58._4_4_) < 0) {
            iVar8 = mpz_abs_sub(&local_68,&local_68,&local_58);
          }
          else {
            iVar8 = mpz_abs_add();
          }
          if (local_68 < 0) {
            iVar8 = -iVar8;
          }
          local_68 = CONCAT44(iVar8,(int)local_68);
          if ((int)(local_88._4_4_ ^ local_78._4_4_) < 0) {
            iVar8 = mpz_abs_sub(&local_88,&local_88,&local_78);
          }
          else {
            iVar8 = mpz_abs_add();
          }
          if (local_88 < 0) {
            iVar8 = -iVar8;
          }
          local_88 = CONCAT44(iVar8,(int)local_88);
          lVar14 = mpz_make_odd(&local_98);
          mpz_mul_2exp(&local_58,&local_58,lVar14);
          mpz_mul_2exp(&local_78,&local_78,lVar14);
        }
        else {
          if ((int)(local_98._4_4_ ^ local_a8._4_4_) < 0) {
            iVar8 = mpz_abs_add(&local_a8,&local_a8,&local_98);
          }
          else {
            iVar8 = mpz_abs_sub();
          }
          lVar14 = local_68;
          if (local_a8 < 0) {
            iVar8 = -iVar8;
          }
          local_a8 = CONCAT44(iVar8,(int)local_a8);
          if ((int)(local_68._4_4_ ^ local_58._4_4_) < 0) {
            iVar8 = mpz_abs_sub(&local_58,&local_68,&local_58);
          }
          else {
            iVar8 = mpz_abs_add();
          }
          lVar15 = local_88;
          if (lVar14 < 0) {
            iVar8 = -iVar8;
          }
          local_58 = CONCAT44(iVar8,(undefined4)local_58);
          if ((int)(local_88._4_4_ ^ local_78._4_4_) < 0) {
            iVar8 = mpz_abs_sub(&local_78,&local_88,&local_78);
          }
          else {
            iVar8 = mpz_abs_add();
          }
          if (lVar15 < 0) {
            iVar8 = -iVar8;
          }
          local_78 = CONCAT44(iVar8,(undefined4)local_78);
          lVar14 = mpz_make_odd(&local_a8);
          mpz_mul_2exp(&local_68,&local_68,lVar14);
          mpz_mul_2exp(&local_88,&local_88,lVar14);
        }
        local_e0 = local_e0 + lVar14;
      }
    }
    mpz_mul_2exp(&local_98,&local_98,uVar20);
    mpz_set(&local_88,&local_88);
    uVar16 = -local_88._4_4_;
    local_88 = CONCAT44(uVar16,(int)local_88);
    iVar8 = mpz_div_qr(&local_78,0,local_d0,&local_98,2);
    if (iVar8 != 0) {
LAB_00107ea2:
                    /* WARNING: Subroutine does not return */
      mpz_divexact_part_0();
    }
    mpz_set(&local_78);
    uVar3 = local_78._4_4_;
    if ((int)local_78._4_4_ < 1) {
      uVar3 = -local_78._4_4_;
    }
    local_78 = CONCAT44(uVar3,(undefined4)local_78);
    iVar8 = mpz_div_qr(&local_58,0,local_d8,&local_98,2);
    if (iVar8 != 0) goto LAB_00107ea2;
    mpz_set(&local_58,&local_58);
    uVar9 = local_58._4_4_;
    if ((int)local_58._4_4_ < 1) {
      uVar9 = -local_58._4_4_;
    }
    local_58 = CONCAT44(uVar9,(undefined4)local_58);
    lVar14 = local_e0 + -1;
    if (local_e0 != 0) {
      do {
        uVar6 = local_68._4_4_;
        if ((((uint)(uVar16 != 0) & *local_80) != 0) ||
           (((uint)(local_68._4_4_ != 0) & *local_60) != 0)) {
          if ((int)(uVar16 ^ uVar3) < 0) {
            iVar8 = mpz_abs_add(&local_88,&local_88,&local_78);
          }
          else {
            iVar8 = mpz_abs_sub();
          }
          if (local_88 < 0) {
            iVar8 = -iVar8;
          }
          local_88 = CONCAT44(iVar8,(int)local_88);
          if ((int)(uVar6 ^ uVar9) < 0) {
            iVar10 = mpz_abs_sub();
          }
          else {
            iVar10 = mpz_abs_add(&local_68,&local_68,&local_58);
          }
          if (local_68 < 0) {
            iVar10 = -iVar10;
          }
          local_68 = CONCAT44(iVar10,(int)local_68);
          if ((((uint)(iVar10 != 0) & *local_60) != 0) || (((uint)(iVar8 != 0) & *local_80) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mpz_even_p (t0) && mpz_even_p (s0)","lib/mini-gmp.c",0xbac,"mpz_gcdext");
          }
        }
        mpz_div_q_2exp(&local_88,&local_88,1,2);
        lVar14 = lVar14 + -1;
        mpz_div_q_2exp(&local_68,&local_68,1,2);
        uVar16 = local_88._4_4_;
      } while (lVar14 != -1);
    }
    if ((int)(uVar3 ^ uVar16) < 0) {
      iVar8 = mpz_abs_sub(&local_78,&local_88,&local_78);
    }
    else {
      iVar8 = mpz_abs_add();
    }
    lVar14 = local_68;
    uVar3 = local_68._4_4_;
    iVar10 = -iVar8;
    if (-1 < (int)uVar16) {
      iVar10 = iVar8;
    }
    local_78 = CONCAT44(iVar10,(undefined4)local_78);
    if ((int)(uVar9 ^ local_68._4_4_) < 0) {
      iVar8 = mpz_abs_add(&local_58,&local_68,&local_58);
    }
    else {
      iVar8 = mpz_abs_sub();
    }
    iVar17 = -iVar8;
    if (-1 < lVar14) {
      iVar17 = iVar8;
    }
    local_58 = CONCAT44(iVar17,(undefined4)local_58);
    iVar11 = mpz_cmpabs(&local_88,&local_78);
    iVar19 = (int)local_58;
    iVar8 = (int)local_78;
    if ((iVar11 < 1) &&
       ((iVar11 != 0 ||
        (iVar11 = mpz_cmpabs(&local_68,&local_58), iVar8 = extraout_XMM1_Da,
        iVar19 = extraout_XMM0_Da, iVar11 < 1)))) {
      if (*(int *)(local_d8 + 4) < 0) goto LAB_00107daf;
LAB_00107b39:
      iVar10 = *(int *)(local_d0 + 4);
    }
    else {
      puVar7 = local_50;
      puVar2 = local_80;
      lVar15 = CONCAT44(iVar10,iVar8);
      lVar14 = CONCAT44(iVar17,iVar19);
      local_80 = local_70;
      local_70 = puVar2;
      local_50 = local_60;
      local_78 = CONCAT44(uVar16,(int)local_88);
      local_60 = puVar7;
      local_58 = CONCAT44(uVar3,(int)local_68);
      iVar8 = (int)local_88;
      iVar19 = (int)local_68;
      local_88 = lVar15;
      local_68 = lVar14;
      if (-1 < *(int *)(local_d8 + 4)) goto LAB_00107b39;
LAB_00107daf:
      mpz_set(&local_88,&local_88);
      local_88 = CONCAT44(-local_88._4_4_,(int)local_88);
      iVar10 = *(int *)(local_d0 + 4);
    }
    if (iVar10 < 0) {
      mpz_set(&local_68,&local_68);
      local_68 = CONCAT44(-local_68._4_4_,(int)local_68);
    }
    lVar5 = local_68;
    lVar14 = *param_1;
    lVar15 = param_1[1];
    param_1[1] = (long)local_90;
    *param_1 = local_98;
    iVar10 = (int)local_88;
    if (local_c0 != (long *)0x0) {
      lVar1 = *local_c0;
      puVar2 = (uint *)local_c0[1];
      iVar10 = (int)*local_c0;
      local_c0[1] = (long)local_80;
      *local_c0 = local_88;
      local_88 = lVar1;
      local_80 = puVar2;
    }
    iVar17 = (int)local_68;
    if (local_c8 != (long *)0x0) {
      iVar17 = (int)*local_c8;
      puVar2 = (uint *)local_c8[1];
      local_68 = CONCAT44(local_68._4_4_,iVar17);
      local_c8[1] = (long)local_60;
      *local_c8 = lVar5;
      local_60 = puVar2;
    }
    local_98 = lVar14;
    local_90 = (undefined4 *)lVar15;
    if ((int)local_a8 != 0) {
      (*(code *)gmp_free_func)(local_a0,(long)(int)local_a8 * 8);
    }
    if ((int)lVar14 != 0) {
      (*(code *)gmp_free_func)(lVar15,(long)(int)lVar14 << 3);
    }
    if (iVar10 != 0) {
      (*(code *)gmp_free_func)(local_80,(long)iVar10 << 3);
    }
    if (iVar8 != 0) {
      (*(code *)gmp_free_func)(local_70,(long)iVar8 << 3);
    }
    if (iVar17 != 0) {
      (*(code *)gmp_free_func)(local_60,(long)iVar17 << 3);
    }
    if (iVar19 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)iVar19 << 3);
        return;
      }
      goto LAB_00107ea7;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107ea7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mpz_invert(int *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  iVar3 = *(int *)(param_2 + 4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 0) goto LAB_00107f6c;
  iVar3 = *(int *)(param_3 + 4);
  iVar2 = -iVar3;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 < 2) {
    if (iVar3 == 0) goto LAB_00107f6c;
    if ((uint)(1 < **(ulong **)(param_3 + 8)) - (uint)(**(ulong **)(param_3 + 8) == 0) != 1) {
      iVar3 = 0;
      goto LAB_00107f6c;
    }
  }
  local_58 = 0;
  local_50 = (ulong *)&dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  mpz_gcdext(&local_58,&local_48,0,param_2,param_3);
  if ((local_58._4_4_ == 1) && (1 < *local_50 == (*local_50 == 0))) {
    iVar3 = local_48._4_4_;
    if (local_48 < 0) {
      iVar3 = mpz_abs_sub(&local_48,&local_48,param_3);
      if (local_48 < 0) {
        iVar3 = -iVar3;
      }
    }
    puVar1 = *(undefined4 **)(param_1 + 2);
    iVar2 = *param_1;
    *(undefined4 **)(param_1 + 2) = local_40;
    *(ulong *)param_1 = CONCAT44(iVar3,(int)local_48);
    iVar3 = 1;
    local_40 = puVar1;
  }
  else {
    iVar3 = 0;
    iVar2 = (int)local_48;
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
  }
  if (iVar2 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)iVar2 << 3);
  }
LAB_00107f6c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_powm(int *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long in_FS_OFFSET;
  bool bVar14;
  long local_c8;
  long local_a0;
  int local_88 [8];
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  iVar13 = *(int *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(param_4 + 4);
  iVar4 = -iVar1;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_powm: Zero modulo.");
  }
  if (iVar13 == 0) {
    lVar11 = 1;
    if ((iVar4 == 1) &&
       (lVar11 = (long)(int)((uint)(1 < **(ulong **)(param_4 + 8)) -
                            (uint)(**(ulong **)(param_4 + 8) == 0)), lVar11 == 0)) {
      param_1[1] = 0;
    }
    else {
      param_1[1] = 1;
      if (*param_1 < 1) {
        plVar9 = (long *)mpz_realloc(param_1,1);
      }
      else {
        plVar9 = *(long **)(param_1 + 2);
      }
      *plVar9 = lVar11;
    }
  }
  else {
    local_c8 = *(long *)(param_4 + 8);
    lVar11 = (long)iVar4;
    mpn_div_qr_invert(local_88,local_c8,lVar11);
    iVar1 = local_88[0];
    if (local_88[0] == 0) {
      local_a0 = 0;
      iVar5 = iVar13;
    }
    else {
      local_88[0] = 0;
      local_a0 = (*(code *)gmp_allocate_func)(lVar11 * 8);
      lVar6 = mpn_lshift(local_a0,local_c8,lVar11,iVar1);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc5b,__PRETTY_FUNCTION___17);
      }
      iVar5 = *(int *)(param_3 + 4);
      local_c8 = local_a0;
    }
    local_58 = 0;
    local_50 = &dummy_limb_35;
    if (iVar5 < 0) {
      iVar5 = mpz_invert(&local_58,param_2,param_4);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        gmp_die("mpz_powm: Negative exponent and non-invertible base.");
      }
    }
    else {
      mpz_set(&local_58,param_2);
      iVar5 = -local_58._4_4_;
      if (0 < local_58._4_4_) {
        iVar5 = local_58._4_4_;
      }
      local_58 = CONCAT44(iVar5,(int)local_58);
      lVar6 = (long)iVar5;
      if (lVar11 <= lVar6) {
        mpn_div_qr_preinv(0,local_50,lVar6,local_c8,lVar11,local_88);
        puVar10 = local_50;
        lVar6 = lVar11;
        iVar5 = (int)local_58;
        if (-1 < *(int *)(param_2 + 4)) goto LAB_00108222;
LAB_0010849e:
        puVar10 = local_50;
        if (iVar5 < iVar4) {
          puVar10 = (undefined4 *)mpz_realloc(&local_58,lVar11);
        }
        lVar8 = mpn_sub(puVar10,local_c8,lVar11,puVar10,lVar6);
        puVar10 = local_50;
        lVar6 = lVar11;
        if (lVar8 == 0) goto LAB_00108222;
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc78,__PRETTY_FUNCTION___17);
      }
      iVar5 = (int)local_58;
      puVar10 = local_50;
      if (*(int *)(param_2 + 4) < 0) goto LAB_0010849e;
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
LAB_00108222:
        if (*(long *)(puVar10 + lVar6 * 2 + -2) != 0) goto LAB_0010822a;
      }
      lVar6 = 0;
LAB_0010822a:
      local_58 = CONCAT44((int)lVar6,(int)local_58);
    }
    local_60 = &dummy_limb_35;
    local_68 = _LC35;
    puVar7 = (undefined8 *)mpz_realloc(&local_68,1);
    *puVar7 = 1;
    iVar5 = -iVar13;
    if (0 < iVar13) {
      iVar5 = iVar13;
    }
    lVar6 = (long)(iVar5 + -1);
    do {
      iVar13 = 0x40;
      uVar12 = 0x8000000000000000;
      uVar2 = *(ulong *)(*(long *)(param_3 + 8) + lVar6 * 8);
      do {
        while (mpz_mul(&local_68,&local_68,&local_68), (uVar12 & uVar2) != 0) {
          mpz_mul(&local_68,&local_68,&local_58);
          if (local_68._4_4_ <= iVar4) goto LAB_001082ca;
LAB_001082fe:
          puVar10 = local_60;
          mpn_div_qr_preinv(0,local_60,(long)local_68._4_4_,local_c8,lVar11,local_88);
          lVar8 = lVar11;
          do {
            if (*(long *)(puVar10 + lVar8 * 2 + -2) != 0) {
              local_68._4_4_ = (int)lVar8;
              goto LAB_0010833e;
            }
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
          local_68._4_4_ = 0;
LAB_0010833e:
          uVar12 = uVar12 >> 1;
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) goto LAB_00108350;
        }
        if (iVar4 < local_68._4_4_) goto LAB_001082fe;
LAB_001082ca:
        uVar12 = uVar12 >> 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
LAB_00108350:
      puVar10 = local_60;
      bVar14 = lVar6 != 0;
      lVar6 = lVar6 + -1;
    } while (bVar14);
    iVar13 = local_68._4_4_;
    if (iVar4 <= local_68._4_4_) {
      local_88[0] = iVar1;
      mpn_div_qr_preinv(0,local_60,(long)local_68._4_4_,local_c8,lVar11,local_88);
      lVar6 = lVar11;
      do {
        if (*(long *)(puVar10 + lVar6 * 2 + -2) != 0) {
          iVar13 = (int)lVar6;
          goto LAB_00108375;
        }
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar13 = 0;
    }
LAB_00108375:
    if (local_a0 != 0) {
      (*(code *)gmp_free_func)(local_a0,lVar11 << 3);
    }
    iVar1 = *param_1;
    uVar3 = *(undefined8 *)(param_1 + 2);
    *(undefined4 **)(param_1 + 2) = puVar10;
    *(ulong *)param_1 = CONCAT44(iVar13,(undefined4)local_68);
    if (iVar1 != 0) {
      (*(code *)gmp_free_func)(uVar3,(long)iVar1 * 8);
    }
    if ((int)local_58 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010840a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
        return;
      }
      goto LAB_00108527;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108527:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_powm_ui(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined4 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_powm(param_1,param_2,&local_48);
  }
  else {
    local_48 = 0x100000000;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = param_3;
    iVar1 = (int)local_48;
    mpz_powm(param_1,param_2,&local_48,param_4);
    if (iVar1 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010863e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
        return;
      }
      goto LAB_00108644;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108644:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
gmp_millerrabin(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined4 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("k > 0","lib/mini-gmp.c",0xe0d,"gmp_millerrabin");
  }
  mpz_powm(param_3,param_3,param_4,param_1);
  if ((*(int *)(param_3 + 4) != 1) ||
     (1 < **(ulong **)(param_3 + 8) != (**(ulong **)(param_3 + 8) == 0))) {
    iVar1 = mpz_cmp(param_3,param_2);
    uVar3 = _LC35;
    if (iVar1 != 0) {
      do {
        param_5 = param_5 + -1;
        if (param_5 == 0) {
          uVar3 = 0;
          goto LAB_00108759;
        }
        local_50 = &dummy_limb_35;
        local_58 = uVar3;
        puVar2 = (undefined8 *)mpz_realloc(&local_58,1);
        *puVar2 = 2;
        mpz_powm(param_3,param_3,&local_58,param_1);
        if ((int)local_58 != 0) {
          (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
        }
        iVar1 = mpz_cmp(param_3,param_2);
      } while (iVar1 != 0);
    }
  }
  uVar3 = 1;
LAB_00108759:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint mpz_probab_prime_p(long param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  int local_124;
  ulong local_108;
  uint local_ec;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  uint *local_80;
  undefined4 local_78;
  uint local_74;
  ulong *local_70;
  undefined8 local_68;
  uint *local_60;
  undefined8 local_58;
  long *local_50;
  long local_40;
  
  uVar16 = **(ulong **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = *(int *)(param_1 + 4);
  iVar8 = iVar7;
  if (iVar7 < 1) {
    iVar8 = -iVar7;
  }
  if (((uint)(iVar7 != 0) & (uint)uVar16) == 0) {
    if ((iVar8 < 2) && (iVar7 != 0)) {
      bVar19 = 2 < uVar16 == uVar16 < 2;
      local_ec = (uint)bVar19 + (uint)bVar19;
      goto LAB_00108a01;
    }
  }
  else {
    if ((iVar8 == 1) && ((uint)(0x40 < uVar16) - (uint)(uVar16 < 0x40) == -1)) {
      local_ec = (uint)(0xc96996dcL >> ((byte)(uVar16 >> 1) & 0x3f)) & 2;
      goto LAB_00108a01;
    }
    local_50 = (long *)&dummy_limb_35;
    local_58 = _LC35;
    puVar9 = (undefined8 *)mpz_realloc(&local_58,1);
    *puVar9 = 0xc0cfd797;
    mpz_gcd(&local_58,param_1,&local_58);
    if (local_58._4_4_ == 0) {
      if ((int)local_58 != 0) {
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
      }
    }
    else {
      lVar13 = *local_50;
      if ((int)local_58 != 0) {
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
      }
      if (lVar13 == 1) {
        iVar7 = *(int *)(param_1 + 4);
        iVar8 = -iVar7;
        if (0 < iVar7) {
          iVar8 = iVar7;
        }
        if ((iVar8 < 2) &&
           ((iVar7 == 0 ||
            ((uint)(0x3c1 < **(ulong **)(param_1 + 8)) - (uint)(**(ulong **)(param_1 + 8) < 0x3c1)
             == -1)))) {
          local_ec = 2;
          goto LAB_00108a01;
        }
        local_b8 = 0;
        local_b0 = (long *)&dummy_limb_35;
        local_a8 = 0;
        local_a0 = &dummy_limb_35;
        mpz_set(&local_b8,param_1);
        plVar5 = local_b0;
        iVar7 = -local_b8._4_4_;
        if (0 < local_b8._4_4_) {
          iVar7 = local_b8._4_4_;
        }
        local_b8 = CONCAT44(iVar7,(int)local_b8);
        lVar13 = *local_b0;
        *local_b0 = lVar13 + -1;
        uVar10 = mpn_common_scan(lVar13 + -1,0,local_b0,0,0);
        mpz_div_q_2exp(&local_a8,&local_b8,uVar10,2);
        local_90 = (long *)&dummy_limb_35;
        local_98 = _LC35;
        puVar9 = (undefined8 *)mpz_realloc(&local_98,1);
        *puVar9 = 2;
        iVar7 = gmp_millerrabin(param_1,&local_b8,&local_98,&local_a8,uVar10);
        if (iVar7 != 0) {
          uVar17 = *(uint *)(param_1 + 4);
          puVar1 = *(ulong **)(param_1 + 8);
          local_78 = 0;
          uVar2 = -uVar17;
          if (0 < (int)uVar17) {
            uVar2 = uVar17;
          }
          local_ec = (uint)(uVar17 != 0) & (uint)*puVar1;
          local_74 = uVar2;
          local_70 = puVar1;
          if (local_ec == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xddf,"gmp_stronglucas");
          }
          local_50 = (long *)&dummy_limb_35;
          local_58 = 0;
          mpz_rootrem(&local_98,&local_58,&local_78,2);
          iVar7 = local_58._4_4_;
          if ((int)local_58 != 0) {
            (*(code *)gmp_free_func)(local_50);
          }
          if (iVar7 != 0) {
            local_108 = 0xffffffffffffffff;
            if (local_98._4_4_ == 1) {
              local_108 = *local_90 - 1;
            }
            uVar16 = 3;
LAB_00108bd8:
            if (uVar16 < local_108) {
              uVar16 = uVar16 + 2;
              uVar11 = mpz_div_qr_ui(0,0,&local_78,uVar16,2);
              if (uVar11 != 0) {
                iVar7 = 0;
                uVar18 = uVar16 >> 1;
                for (uVar15 = -uVar11 & uVar11; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
                  iVar7 = iVar7 + 8;
                }
                for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
                  iVar7 = iVar7 + 1;
                }
                uVar11 = uVar11 >> 1;
                uVar14 = 0x3f - iVar7;
                uVar17 = 0;
                do {
                  uVar15 = uVar11 >> ((byte)uVar14 & 0x3f);
                  uVar17 = ((uint)(uVar18 >> 1) ^ (uint)uVar18) & uVar14 ^ uVar17;
                  if (uVar15 < uVar18) {
                    if (uVar15 == 0) goto LAB_00108ce0;
                    uVar11 = uVar18 - uVar15;
                    uVar17 = (uint)uVar18 & (uint)uVar15 ^ uVar17;
                    uVar18 = uVar15;
                  }
                  else {
                    uVar11 = uVar15 - uVar18;
                    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      __assert_fail("a != 0","lib/mini-gmp.c",0xd81,"gmp_jacobi_coprime");
                    }
                  }
                  iVar7 = 0;
                  for (uVar15 = -uVar11 & uVar11; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8)
                  {
                    iVar7 = iVar7 + 8;
                  }
                  for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
                    iVar7 = iVar7 + 1;
                  }
                  uVar14 = 0x40 - iVar7;
                } while( true );
              }
              goto LAB_00108989;
            }
            uVar17 = (uint)(0 < param_2 + -0x18);
            goto LAB_00109120;
          }
        }
LAB_00108989:
        local_ec = 0;
        goto LAB_0010898c;
      }
    }
  }
  local_ec = 0;
  goto LAB_00108a01;
LAB_00108ce0:
  if ((uVar17 & 1) != 0) goto code_r0x00108ceb;
  goto LAB_00108bd8;
code_r0x00108ceb:
  uVar11 = *puVar1;
  local_88 = local_88 & 0xffffffff00000000;
  local_80 = &dummy_limb_35;
  uVar15 = mpn_common_scan(~uVar11,0,puVar1,(long)(int)uVar2,0xffffffffffffffff);
  lVar13 = -(uVar16 >> 2);
  if ((uVar16 & 2) != 0) {
    lVar13 = (uVar16 >> 2) + 1;
  }
  if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("b0 > 0","lib/mini-gmp.c",0xda1,"gmp_lucas_mod");
  }
  if ((uVar2 == 1) && ((uint)(4 < uVar11) - (uint)(uVar11 < 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_cmp_ui (n, 4) > 0","lib/mini-gmp.c",0xda4,"gmp_lucas_mod");
  }
  local_ec = (uint)uVar11 & 1;
  if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xda5,"gmp_lucas_mod");
  }
  local_60 = &dummy_limb_35;
  local_68 = _LC35;
  puVar9 = (undefined8 *)mpz_realloc(&local_68,1);
  local_88 = CONCAT44(1,(int)local_88);
  *puVar9 = 1;
  puVar9 = (undefined8 *)mpz_realloc(&local_88,1);
  *puVar9 = 1;
  mpz_set_si(&local_98,lVar13);
  uVar16 = puVar1[(long)(int)uVar2 + -1];
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    mpn_limb_size_in_base_2_part_0();
  }
  uVar11 = 0;
  for (; uVar16 < 0x100000000000000; uVar16 = uVar16 << 8) {
    uVar11 = (ulong)((int)uVar11 + 8);
  }
  for (; -1 < (long)uVar16; uVar16 = uVar16 * 2) {
    uVar11 = (ulong)((int)uVar11 + 1);
  }
  lVar3 = lVar13 * -2;
  lVar4 = local_68;
  for (uVar11 = ((long)(int)(uVar2 - 1) * 0x40 + 0x3e) - uVar11; local_68 = lVar4, uVar15 <= uVar11;
      uVar11 = uVar11 - 1) {
    mpz_mul(&local_68,&local_68,&local_88);
    gmp_lucas_step_k_2k(&local_88,&local_98,&local_78);
    if ((uVar11 == uVar15) || (iVar7 = mpz_tstbit(&local_78,uVar11), iVar7 != 0)) {
      if (lVar13 < 0) {
        local_50 = (long *)&dummy_limb_35;
        local_58 = _LC35;
        plVar12 = (long *)mpz_realloc(&local_58,1);
        *plVar12 = -lVar13;
        mpz_mul(&local_98,&local_98,&local_58);
        if ((int)local_58 != 0) {
          (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
        }
        mpz_set(&local_98,&local_98);
        local_98 = CONCAT44(-local_98._4_4_,(int)local_98);
      }
      else {
        local_58 = 0;
        local_50 = (long *)&dummy_limb_35;
        if (lVar13 == 0) {
          mpz_mul(&local_98,&local_98,&local_58);
        }
        else {
          local_58 = 0x100000000;
          plVar12 = (long *)mpz_realloc(&local_58,1);
          iVar7 = (int)local_58;
          *plVar12 = lVar13;
          mpz_mul(&local_98,&local_98,&local_58);
          if (iVar7 != 0) {
            (*(code *)gmp_free_func)(local_50,(long)iVar7 * 8);
          }
        }
      }
      puVar6 = local_60;
      lVar4 = local_68;
      uVar16 = local_88 >> 0x20;
      uVar18 = local_68 >> 0x20;
      local_68 = local_88;
      local_60 = local_80;
      local_80 = puVar6;
      local_88 = lVar4;
      if ((int)((uint)uVar16 ^ (uint)uVar18) < 0) {
        uVar17 = mpz_abs_sub(&local_68,&local_68,&local_88);
      }
      else {
        uVar17 = mpz_abs_add();
      }
      if ((long)local_68 < 0) {
        uVar17 = -uVar17;
      }
      local_68 = CONCAT44(uVar17,(int)local_68);
      if (((uint)(uVar17 != 0) & *local_60) != 0) {
        if ((int)(uVar17 ^ uVar2) < 0) {
          iVar7 = mpz_abs_sub(&local_68,&local_68,&local_78);
        }
        else {
          iVar7 = mpz_abs_add();
        }
        if ((long)local_68 < 0) {
          iVar7 = -iVar7;
        }
        local_68 = CONCAT44(iVar7,(int)local_68);
      }
      mpz_div_q_2exp(&local_68,&local_68,1,2);
      if (lVar3 < 0) {
        local_50 = (long *)&dummy_limb_35;
        local_58 = _LC35;
        plVar12 = (long *)mpz_realloc(&local_58,1);
        *plVar12 = lVar13 * 2;
        mpz_mul(&local_88,&local_88,&local_58);
        if ((int)local_58 != 0) {
          (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
        }
        mpz_set(&local_88,&local_88);
        uVar17 = -local_88._4_4_;
        local_88 = CONCAT44(uVar17,(int)local_88);
      }
      else {
        local_58 = 0;
        local_50 = (long *)&dummy_limb_35;
        if (lVar3 == 0) {
          mpz_mul(&local_88,&local_88,&local_58);
        }
        else {
          local_58 = 0x100000000;
          plVar12 = (long *)mpz_realloc(&local_58,1);
          iVar7 = (int)local_58;
          *plVar12 = lVar3;
          mpz_mul(&local_88,&local_88,&local_58);
          if (iVar7 != 0) {
            (*(code *)gmp_free_func)(local_50,(long)iVar7 * 8);
          }
        }
        uVar17 = local_88._4_4_;
      }
      lVar4 = local_68;
      if ((int)(uVar17 ^ local_68._4_4_) < 0) {
        iVar7 = mpz_abs_sub(&local_88,&local_68,&local_88);
      }
      else {
        iVar7 = mpz_abs_add();
      }
      if (lVar4 < 0) {
        iVar7 = -iVar7;
      }
      local_88 = CONCAT44(iVar7,(int)local_88);
      mpz_div_qr(0,&local_88,&local_88,&local_78,2);
    }
    mpz_div_qr(0,&local_68,&local_68,&local_78,2);
    lVar4 = local_68;
  }
  local_68._0_4_ = (int)lVar4;
  lVar13 = (long)(int)local_68;
  local_68._4_4_ = (uint)((ulong)lVar4 >> 0x20);
  iVar7 = local_68._4_4_;
  bVar19 = (int)local_68 != 0;
  if (bVar19) {
    (*(code *)gmp_free_func)(local_60,lVar13 * 8);
  }
  if (iVar7 == 0) {
  }
  else {
    while (local_88._4_4_ != 0) {
      uVar15 = uVar15 - 1;
      if (uVar15 == 0) {
        if ((int)local_88 == 0) goto LAB_00108989;
        local_ec = 0;
        uVar17 = 0;
        iVar7 = (int)local_88;
        goto LAB_0010944e;
      }
      gmp_lucas_step_k_2k(&local_88,&local_98,&local_78);
    }
  }
  uVar17 = (uint)(0 < param_2 + -0x18);
  iVar7 = (int)local_88;
  if ((int)local_88 != 0) {
LAB_0010944e:
    (*(code *)gmp_free_func)(local_80,(long)iVar7 * 8);
  }
LAB_00109120:
  local_124 = param_2 + -0x18;
  if (uVar17 != 0) {
    lVar13 = 0;
    local_ec = uVar17;
    do {
      iVar7 = (int)lVar13;
      local_98 = CONCAT44(1,(int)local_98);
      plVar12 = local_90;
      if ((int)local_98 < 1) {
        plVar12 = (long *)mpz_realloc(&local_98,1);
      }
      *plVar12 = (lVar13 + 1) * lVar13 + 0x29;
      iVar8 = mpz_cmp(&local_98,&local_b8);
      if (-1 < iVar8) {
        if (iVar7 < 0x1e) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("j >= 30","lib/mini-gmp.c",0xe5c,"mpz_probab_prime_p");
        }
        break;
      }
      local_ec = gmp_millerrabin(param_1,&local_b8,&local_98,&local_a8,uVar10);
      lVar13 = lVar13 + 1;
    } while ((iVar7 + 1 < local_124 & local_ec) != 0);
  }
LAB_0010898c:
  if ((int)local_b8 != 0) {
    (*(code *)gmp_free_func)(plVar5,(long)(int)local_b8 * 8);
  }
  if ((int)local_a8 != 0) {
    (*(code *)gmp_free_func)(local_a0,(long)(int)local_a8 * 8);
  }
  if ((int)local_98 != 0) {
    (*(code *)gmp_free_func)(local_90,(long)(int)local_98 * 8);
  }
LAB_00108a01:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_setbit(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = mpz_tstbit();
  if (iVar1 != 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 4)) {
    mpz_abs_add_bit();
    return;
  }
  mpz_abs_sub_bit(param_1,param_2);
  return;
}



void mpz_clrbit(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = mpz_tstbit();
  if (iVar1 == 0) {
    return;
  }
  if (-1 < *(int *)(param_1 + 4)) {
    mpz_abs_sub_bit();
    return;
  }
  mpz_abs_add_bit(param_1,param_2);
  return;
}



void mpz_combit(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = mpz_tstbit();
  if (uVar1 != *(uint *)(param_1 + 4) >> 0x1f) {
    mpz_abs_sub_bit();
    return;
  }
  mpz_abs_add_bit(param_1,param_2);
  return;
}



void mpz_com(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined4 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &dummy_limb_35;
  local_38 = _LC35;
  puVar2 = (undefined8 *)mpz_realloc(&local_38,1);
  *puVar2 = 1;
  if ((int)(*(uint *)(param_2 + 4) ^ local_38._4_4_) < 0) {
    iVar1 = mpz_abs_sub(param_1,param_2,&local_38);
  }
  else {
    iVar1 = mpz_abs_add();
  }
  if (*(int *)(param_2 + 4) < 0) {
    iVar1 = -iVar1;
  }
  *(int *)(param_1 + 4) = iVar1;
  if ((int)local_38 != 0) {
    (*(code *)gmp_free_func)(local_30,(long)(int)local_38 << 3);
  }
  mpz_set(param_1,param_1);
  *(int *)(param_1 + 4) = -*(int *)(param_1 + 4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_and(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar20;
  ulong uVar21;
  long lVar19;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  iVar4 = *(int *)(param_3 + 4);
  lVar20 = (long)iVar18;
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  lVar19 = (long)iVar18;
  lVar10 = param_3;
  lVar9 = lVar19;
  if (lVar19 <= lVar20) {
    lVar10 = param_2;
    param_2 = param_3;
    lVar9 = lVar20;
    lVar20 = lVar19;
  }
  if (lVar20 == 0) {
    iVar4 = 0;
    goto LAB_0010987d;
  }
  uVar1 = *(uint *)(lVar10 + 4);
  uVar2 = *(uint *)(param_2 + 4);
  uVar21 = (long)(int)uVar1 >> 0x3f;
  uVar8 = (ulong)(uVar2 >> 0x1f);
  uVar13 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar12 = (ulong)((uVar1 & uVar2) >> 0x1f);
  uVar16 = -uVar12;
  uVar17 = -uVar8;
  if (uVar17 == 0) {
    lVar9 = lVar20;
  }
  if ((long)*param_1 < (long)(uVar12 + lVar9)) {
    lVar19 = mpz_realloc(param_1);
  }
  else {
    lVar19 = *(long *)(param_1 + 2);
  }
  lVar3 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(lVar10 + 8);
  lVar11 = 0;
  do {
    uVar5 = *(ulong *)(lVar10 + lVar11 * 8) ^ uVar21;
    uVar6 = uVar5 + uVar13;
    uVar14 = *(ulong *)(lVar3 + lVar11 * 8) ^ uVar17;
    uVar15 = uVar14 + uVar8;
    uVar13 = (ulong)CARRY8(uVar5,uVar13);
    uVar8 = (ulong)CARRY8(uVar14,uVar8);
    uVar5 = uVar6 & uVar15 ^ uVar16;
    lVar7 = uVar5 + uVar12;
    uVar12 = (ulong)CARRY8(uVar5,uVar12);
    *(long *)(lVar19 + lVar11 * 8) = lVar7;
    lVar11 = lVar11 + 1;
  } while (lVar20 != lVar11);
  if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf3d,"mpz_and");
  }
  if (lVar20 < lVar9) {
    do {
      uVar17 = *(ulong *)(lVar10 + lVar11 * 8) ^ uVar21;
      uVar8 = uVar17 + uVar13;
      if (-1 < (int)uVar2) {
        uVar8 = 0;
      }
      uVar13 = (ulong)CARRY8(uVar17,uVar13);
      lVar20 = (uVar8 ^ uVar16) + uVar12;
      uVar12 = (ulong)CARRY8(uVar8 ^ uVar16,uVar12);
      *(long *)(lVar19 + lVar11 * 8) = lVar20;
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    if (uVar12 != 0) goto LAB_00109867;
    do {
      if (*(long *)(lVar19 + -8 + lVar9 * 8) != 0) goto LAB_00109873;
      lVar9 = lVar9 + -1;
joined_r0x001098ec:
    } while (lVar9 != 0);
    lVar9 = 0;
  }
  else {
    if (uVar12 == 0) goto joined_r0x001098ec;
LAB_00109867:
    *(undefined8 *)(lVar19 + lVar9 * 8) = 1;
    lVar9 = lVar9 + 1;
  }
LAB_00109873:
  iVar4 = (int)lVar9;
  if (uVar16 != 0) {
    iVar4 = -(int)lVar9;
  }
LAB_0010987d:
  param_1[1] = iVar4;
  return;
}



void mpz_ior(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar20;
  long lVar19;
  
  iVar3 = *(int *)(param_2 + 4);
  iVar18 = -iVar3;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  iVar3 = *(int *)(param_3 + 4);
  lVar14 = (long)iVar18;
  iVar18 = -iVar3;
  if (0 < iVar3) {
    iVar18 = iVar3;
  }
  lVar19 = (long)iVar18;
  lVar8 = param_3;
  lVar7 = lVar14;
  if (lVar19 <= lVar14) {
    lVar8 = param_2;
    lVar7 = lVar19;
    param_2 = param_3;
    lVar19 = lVar14;
  }
  if (lVar7 == 0) {
    mpz_set(param_1,lVar8);
    return;
  }
  uVar1 = *(uint *)(lVar8 + 4);
  uVar17 = (ulong)(int)*(uint *)(param_2 + 4);
  uVar20 = (long)(int)uVar1 >> 0x3f;
  uVar11 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar16 = uVar17 >> 0x3f;
  uVar10 = (ulong)((uVar1 | *(uint *)(param_2 + 4)) >> 0x1f);
  uVar15 = -uVar10;
  if ((long)uVar17 < 0) {
    lVar19 = lVar7;
  }
  if ((long)*param_1 < (long)(uVar10 + lVar19)) {
    lVar14 = mpz_realloc(param_1);
  }
  else {
    lVar14 = *(long *)(param_1 + 2);
  }
  lVar2 = *(long *)(param_2 + 8);
  lVar8 = *(long *)(lVar8 + 8);
  lVar9 = 0;
  do {
    uVar4 = *(ulong *)(lVar8 + lVar9 * 8) ^ uVar20;
    uVar5 = uVar4 + uVar11;
    uVar12 = *(ulong *)(lVar2 + lVar9 * 8) ^ (long)uVar17 >> 0x3f;
    uVar13 = uVar12 + uVar16;
    uVar11 = (ulong)CARRY8(uVar4,uVar11);
    uVar16 = (ulong)CARRY8(uVar12,uVar16);
    uVar4 = (uVar5 | uVar13) ^ uVar15;
    lVar6 = uVar4 + uVar10;
    uVar10 = (ulong)CARRY8(uVar4,uVar10);
    *(long *)(lVar14 + lVar9 * 8) = lVar6;
    lVar9 = lVar9 + 1;
  } while (lVar7 != lVar9);
  if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf86,"mpz_ior");
  }
  if (lVar7 < lVar19) {
    do {
      uVar16 = *(ulong *)(lVar8 + lVar9 * 8) ^ uVar20;
      uVar4 = (uVar16 + uVar11 | (long)uVar17 >> 0x3f) ^ uVar15;
      uVar11 = (ulong)CARRY8(uVar16,uVar11);
      lVar7 = uVar4 + uVar10;
      uVar10 = (ulong)CARRY8(uVar4,uVar10);
      *(long *)(lVar14 + lVar9 * 8) = lVar7;
      lVar9 = lVar9 + 1;
    } while (lVar19 != lVar9);
    if (uVar10 != 0) {
LAB_00109ab8:
      *(undefined8 *)(lVar14 + lVar19 * 8) = 1;
      lVar19 = lVar19 + 1;
      goto LAB_00109ac4;
    }
  }
  else {
    if (uVar10 != 0) goto LAB_00109ab8;
    if (lVar19 == 0) {
      lVar19 = 0;
      goto LAB_00109ac4;
    }
  }
  do {
    if (*(long *)(lVar14 + -8 + lVar19 * 8) != 0) goto LAB_00109ac4;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  lVar19 = 0;
LAB_00109ac4:
  iVar3 = (int)lVar19;
  if (uVar15 != 0) {
    iVar3 = -(int)lVar19;
  }
  param_1[1] = iVar3;
  return;
}



void mpz_xor(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long lVar20;
  long lVar19;
  
  iVar4 = *(int *)(param_2 + 4);
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  iVar4 = *(int *)(param_3 + 4);
  lVar20 = (long)iVar18;
  iVar18 = -iVar4;
  if (0 < iVar4) {
    iVar18 = iVar4;
  }
  lVar19 = (long)iVar18;
  lVar9 = param_3;
  lVar8 = lVar19;
  if (lVar19 <= lVar20) {
    lVar9 = param_2;
    param_2 = param_3;
    lVar8 = lVar20;
    lVar20 = lVar19;
  }
  if (lVar20 == 0) {
    mpz_set(param_1,lVar9);
    return;
  }
  uVar1 = *(uint *)(lVar9 + 4);
  uVar2 = *(uint *)(param_2 + 4);
  uVar16 = (long)(int)uVar1 >> 0x3f;
  uVar12 = (ulong)(long)(int)uVar1 >> 0x3f;
  uVar17 = (ulong)(long)(int)uVar2 >> 0x3f;
  uVar11 = (ulong)((uVar1 ^ uVar2) >> 0x1f);
  uVar15 = -uVar11;
  if ((long)*param_1 < (long)(uVar11 + lVar8)) {
    lVar19 = mpz_realloc(param_1);
  }
  else {
    lVar19 = *(long *)(param_1 + 2);
  }
  lVar3 = *(long *)(param_2 + 8);
  lVar9 = *(long *)(lVar9 + 8);
  lVar10 = 0;
  do {
    uVar5 = *(ulong *)(lVar9 + lVar10 * 8) ^ uVar16;
    uVar6 = uVar5 + uVar12;
    uVar13 = *(ulong *)(lVar3 + lVar10 * 8) ^ (long)(int)uVar2 >> 0x3f;
    uVar14 = uVar13 + uVar17;
    uVar12 = (ulong)CARRY8(uVar5,uVar12);
    uVar17 = (ulong)CARRY8(uVar13,uVar17);
    uVar5 = uVar6 ^ uVar14 ^ uVar15;
    lVar7 = uVar5 + uVar11;
    uVar11 = (ulong)CARRY8(uVar5,uVar11);
    *(long *)(lVar19 + lVar10 * 8) = lVar7;
    lVar10 = lVar10 + 1;
  } while (lVar20 != lVar10);
  if (uVar17 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xfcb,"mpz_xor");
  }
  if (lVar20 < lVar8) {
    do {
      uVar17 = *(ulong *)(lVar9 + lVar10 * 8) ^ uVar16;
      uVar5 = uVar17 + uVar12 ^ uVar16;
      lVar20 = uVar5 + uVar11;
      uVar12 = (ulong)CARRY8(uVar17,uVar12);
      uVar11 = (ulong)CARRY8(uVar5,uVar11);
      *(long *)(lVar19 + lVar10 * 8) = lVar20;
      lVar10 = lVar10 + 1;
    } while (lVar8 != lVar10);
    if (uVar11 != 0) {
LAB_00109cf8:
      *(undefined8 *)(lVar19 + lVar8 * 8) = 1;
      lVar8 = lVar8 + 1;
      goto LAB_00109d04;
    }
  }
  else {
    if (uVar11 != 0) goto LAB_00109cf8;
    if (lVar8 == 0) {
      lVar8 = 0;
      goto LAB_00109d04;
    }
  }
  do {
    if (*(long *)(lVar19 + -8 + lVar8 * 8) != 0) goto LAB_00109d04;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  lVar8 = 0;
LAB_00109d04:
  iVar4 = (int)lVar8;
  if (uVar15 != 0) {
    iVar4 = -(int)lVar8;
  }
  param_1[1] = iVar4;
  return;
}



long mpn_popcount(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    lVar5 = 0;
    do {
      uVar2 = *param_1;
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          uVar3 = (int)uVar2 - ((uint)(uVar2 >> 1) & 0x5555);
          uVar3 = (uVar3 >> 2 & 0x3333) + (uVar3 & 0x3333);
          uVar3 = uVar3 + (uVar3 >> 4);
          uVar4 = (ulong)((int)uVar4 + (uVar3 & 0xf) + (uVar3 >> 8 & 0xf));
          uVar2 = uVar2 >> 0x10;
        } while (uVar2 != 0);
        lVar5 = lVar5 + uVar4;
      }
      param_1 = param_1 + 1;
    } while (puVar1 != param_1);
    return lVar5;
  }
  return 0;
}



long mpz_popcount(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  
  lVar2 = (long)*(int *)(param_1 + 4);
  lVar7 = -1;
  if (-1 < lVar2) {
    puVar6 = *(ulong **)(param_1 + 8);
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    else {
      puVar1 = puVar6 + lVar2;
      lVar7 = 0;
      do {
        uVar3 = *puVar6;
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            uVar4 = (int)uVar3 - ((uint)(uVar3 >> 1) & 0x5555);
            uVar4 = (uVar4 >> 2 & 0x3333) + (uVar4 & 0x3333);
            uVar4 = uVar4 + (uVar4 >> 4);
            uVar5 = (ulong)((int)uVar5 + (uVar4 & 0xf) + (uVar4 >> 8 & 0xf));
            uVar3 = uVar3 >> 0x10;
          } while (uVar3 != 0);
          lVar7 = lVar7 + uVar5;
        }
        puVar6 = puVar6 + 1;
      } while (puVar1 != puVar6);
    }
  }
  return lVar7;
}



long mpz_hamdist(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  
  lVar12 = (long)(int)*(uint *)(param_1 + 4);
  lVar14 = (long)(int)*(uint *)(param_2 + 4);
  if ((int)(*(uint *)(param_1 + 4) ^ *(uint *)(param_2 + 4)) < 0) {
    return -1;
  }
  uVar11 = lVar12 >> 0x3f;
  if (lVar12 < 0) {
    if (-1 < lVar14) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vn < 0","lib/mini-gmp.c",0x101e,"mpz_hamdist");
    }
    lVar8 = *(long *)(param_2 + 8);
    lVar6 = -lVar12;
    if (lVar14 < lVar12) {
      uVar4 = 1;
      uVar9 = 1;
      lVar7 = lVar8;
      lVar8 = *(long *)(param_1 + 8);
      lVar13 = lVar6;
      lVar6 = -lVar14;
    }
    else {
      uVar4 = 1;
      uVar9 = 1;
      lVar7 = *(long *)(param_1 + 8);
      lVar13 = -lVar14;
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 8);
    lVar8 = *(long *)(param_1 + 8);
    lVar13 = lVar12;
    lVar6 = lVar14;
    if (lVar14 <= lVar12) {
      lVar7 = *(long *)(param_1 + 8);
      lVar8 = *(long *)(param_2 + 8);
      lVar13 = lVar14;
      lVar6 = lVar12;
    }
    if (lVar13 < 1) {
      lVar12 = 0;
      uVar9 = 0;
      lVar13 = 0;
      goto LAB_00109fd2;
    }
    uVar4 = 0;
    uVar9 = 0;
  }
  lVar12 = 0;
  lVar14 = 0;
  do {
    uVar1 = *(ulong *)(lVar7 + lVar14 * 8) ^ uVar11;
    uVar2 = uVar1 + uVar9;
    uVar9 = (ulong)CARRY8(uVar1,uVar9);
    uVar1 = *(ulong *)(lVar8 + lVar14 * 8) ^ uVar11;
    uVar3 = uVar1 + uVar4;
    uVar5 = uVar2 ^ uVar3;
    uVar4 = (ulong)CARRY8(uVar1,uVar4);
    if (uVar2 != uVar3) {
      uVar1 = 0;
      do {
        uVar15 = (int)uVar5 - ((uint)(uVar5 >> 1) & 0x5555);
        uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333);
        uVar15 = uVar15 + (uVar15 >> 4);
        uVar1 = (ulong)((int)uVar1 + (uVar15 & 0xf) + (uVar15 >> 8 & 0xf));
        uVar5 = uVar5 >> 0x10;
      } while (uVar5 != 0);
      lVar12 = lVar12 + uVar1;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 != lVar13);
  if (uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0x1033,"mpz_hamdist");
  }
LAB_00109fd2:
  if (lVar13 < lVar6) {
    puVar10 = (ulong *)(lVar7 + lVar13 * 8);
    do {
      uVar4 = (*puVar10 ^ uVar11) + uVar9;
      uVar1 = uVar11 ^ uVar4;
      uVar9 = (ulong)CARRY8(*puVar10 ^ uVar11,uVar9);
      if (uVar11 != uVar4) {
        uVar4 = 0;
        do {
          uVar15 = (int)uVar1 - ((uint)(uVar1 >> 1) & 0x5555);
          uVar15 = (uVar15 >> 2 & 0x3333) + (uVar15 & 0x3333);
          uVar15 = uVar15 + (uVar15 >> 4);
          uVar4 = (ulong)((int)uVar4 + (uVar15 & 0xf) + (uVar15 >> 8 & 0xf));
          uVar1 = uVar1 >> 0x10;
        } while (uVar1 != 0);
        lVar12 = lVar12 + uVar4;
      }
      puVar10 = puVar10 + 1;
    } while ((ulong *)(lVar7 + lVar6 * 8) != puVar10);
  }
  return lVar12;
}



ulong mpz_scan1(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar3 = uVar1;
  if ((int)uVar1 < 1) {
    uVar3 = -uVar1;
  }
  uVar6 = param_2 >> 6;
  if (uVar3 <= uVar6) {
    uVar6 = 0xffffffffffffffff;
    if ((int)uVar1 < 0) {
      uVar6 = param_2;
    }
    return uVar6;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar7 = *(ulong *)(lVar2 + uVar6 * 8);
  uVar5 = param_2;
  if (param_2 != 0) {
    uVar5 = 0;
    uVar4 = uVar6;
    if ((int)uVar1 < 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (*(long *)(lVar2 + -8 + uVar4 * 8) != 0) {
          uVar5 = 0;
          goto LAB_0010a1a0;
        }
      }
      uVar5 = 1;
LAB_0010a1a0:
      bVar8 = uVar5 <= uVar7;
      uVar7 = (uVar5 - uVar7) - 1;
      uVar5 = -(ulong)bVar8;
    }
    uVar7 = uVar7 & -1L << ((byte)param_2 & 0x3f);
  }
  uVar6 = mpn_common_scan(uVar7,uVar6,lVar2,(ulong)uVar3,uVar5);
  return uVar6;
}



ulong mpz_scan0(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar6 = (ulong)(int)uVar1;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  uVar7 = param_2 >> 6;
  if (uVar3 <= uVar7) {
    uVar7 = 0xffffffffffffffff;
    if (-1 < (long)uVar6) {
      uVar7 = param_2;
    }
    return uVar7;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar8 = *(ulong *)(lVar2 + uVar7 * 8) ^ (long)~uVar6 >> 0x3f;
  uVar4 = uVar7;
  if ((long)uVar6 < 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*(long *)(lVar2 + -8 + uVar4 * 8) != 0) {
        lVar5 = 0;
        goto LAB_0010a228;
      }
    }
    lVar5 = 1;
LAB_0010a228:
    uVar8 = uVar8 - lVar5;
  }
  uVar6 = mpn_common_scan(-1L << ((byte)param_2 & 0x3f) & uVar8,uVar7,lVar2,(ulong)uVar3);
  return uVar6;
}



ulong mpz_sizeinbase(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_68 [2];
  long local_60;
  undefined8 local_50;
  long local_40;
  long lVar9;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base >= 2","lib/mini-gmp.c",0x108e,"mpz_sizeinbase");
  }
  if (param_2 < 0x3f) {
    iVar2 = *(int *)(param_1 + 4);
    uVar7 = 1;
    if (iVar2 != 0) {
      lVar3 = *(long *)(param_1 + 8);
      iVar8 = -iVar2;
      if (0 < iVar2) {
        iVar8 = iVar2;
      }
      lVar9 = (long)iVar8;
      lVar1 = lVar9 * 8;
      uVar4 = *(ulong *)(lVar3 + -8 + lVar1);
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        mpn_limb_size_in_base_2_part_0();
      }
      uVar7 = 0;
      for (; uVar4 < 0x100000000000000; uVar4 = uVar4 << 8) {
        uVar7 = (ulong)((int)uVar7 + 8);
      }
      for (; -1 < (long)uVar4; uVar4 = uVar4 * 2) {
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      uVar7 = lVar9 * 0x40 - uVar7;
      switch(param_2) {
      default:
        lVar5 = (*(code *)gmp_allocate_func)(lVar1);
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar5 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar6 * 8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar9);
        local_68[0] = 0;
        uVar7 = (long)param_2;
        do {
          uVar7 = uVar7 << 8;
          local_68[0] = local_68[0] + 8;
        } while (uVar7 < 0x100000000000000);
        do {
          local_68[0] = local_68[0] + 1;
          uVar7 = uVar7 * 2;
        } while (-1 < (long)uVar7);
        local_60 = (long)param_2 << ((byte)local_68[0] & 0x3f);
        uVar7 = 0;
        local_50 = mpn_invert_3by2(local_60,0);
        do {
          mpn_div_qr_1_preinv(lVar5,lVar5,lVar9,local_68);
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 - (ulong)(*(long *)(lVar5 + -8 + lVar9 * 8) == 0);
        } while (lVar9 != 0);
        (*(code *)gmp_free_func)(lVar5,lVar1);
        break;
      case 2:
        break;
      case 4:
        uVar7 = uVar7 + 1 >> 1;
        break;
      case 8:
        uVar7 = (uVar7 + 2) / 3;
        break;
      case 0x10:
        uVar7 = uVar7 + 3 >> 2;
        break;
      case 0x20:
        uVar7 = (uVar7 + 4) / 5;
      }
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("base <= 62","lib/mini-gmp.c",0x108f,"mpz_sizeinbase");
}



undefined1 * mpz_get_str(undefined1 *param_1,int param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  ulong local_78;
  int local_58 [2];
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    if (-2 < param_2) {
      pcVar14 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
      param_2 = 10;
      goto LAB_0010a50d;
    }
    iVar3 = -param_2;
    if (-0x25 < param_2) goto LAB_0010a506;
LAB_0010a690:
    param_1 = (undefined1 *)0x0;
  }
  else {
    if (param_2 < 0x25) {
      pcVar14 = "0123456789abcdefghijklmnopqrstuvwxyz";
    }
    else {
      iVar3 = param_2;
      if (0x3e < param_2) goto LAB_0010a690;
LAB_0010a506:
      pcVar14 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
      param_2 = iVar3;
    }
LAB_0010a50d:
    lVar12 = 0;
    lVar4 = mpz_sizeinbase(param_3,param_2);
    if (param_1 == (undefined1 *)0x0) {
      lVar12 = lVar4 + 2;
      param_1 = (undefined1 *)(*(code *)gmp_allocate_func)(lVar12);
    }
    iVar3 = *(int *)(param_3 + 4);
    if (iVar3 == 0) {
      *param_1 = 0x30;
      uVar9 = 1;
    }
    else {
      puVar8 = param_1;
      if (iVar3 < 0) {
        *param_1 = 0x2d;
        puVar8 = param_1 + 1;
      }
      local_78 = (ulong)(iVar3 < 0);
      iVar13 = -iVar3;
      if (0 < iVar3) {
        iVar13 = iVar3;
      }
      lVar4 = (long)iVar13;
      iVar3 = mpn_base_power_of_two_p(param_2);
      if (iVar3 == 0) {
        uVar9 = (ulong)param_2;
        local_58[0] = 1;
        local_50 = uVar9;
        do {
          local_50 = local_50 * uVar9;
          local_58[0] = local_58[0] + 1;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = uVar9;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_50;
        } while (SUB168(auVar1 * auVar2,8) == 0);
        lVar5 = (*(code *)gmp_allocate_func)(lVar4 * 8);
        lVar7 = *(long *)(param_3 + 8);
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar5 + lVar6 * 8) = *(undefined8 *)(lVar7 + lVar6 * 8);
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar4);
        lVar7 = mpn_get_str_other(puVar8,param_2,local_58,lVar5);
        (*(code *)gmp_free_func)(lVar5,lVar4 * 8);
      }
      else {
        lVar7 = mpn_get_str_bits(puVar8,iVar3,*(undefined8 *)(param_3 + 8),lVar4);
      }
      uVar9 = lVar7 + local_78;
      pbVar10 = param_1 + local_78;
      if (local_78 < uVar9) {
        do {
          pbVar11 = pbVar10 + 1;
          *pbVar10 = pcVar14[*pbVar10];
          pbVar10 = pbVar11;
        } while (param_1 + uVar9 != pbVar11);
      }
    }
    param_1[uVar9] = 0;
    if ((lVar12 != 0) && (uVar9 + 1 != lVar12)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar8 = (undefined1 *)(*(code *)gmp_reallocate_func)(param_1,lVar12);
        return puVar8;
      }
      goto LAB_0010a745;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010a745:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_set_str(undefined8 param_1,undefined8 param_2,int param_3)

{
  if ((0x3c < param_3 - 2U) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x110f,"mpz_set_str");
  }
  mpz_set_str_part_0();
  return;
}



void mpz_init_set_str(undefined8 *param_1,undefined8 param_2,int param_3)

{
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  if ((0x3c < param_3 - 2U) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x110f,"mpz_set_str");
  }
  mpz_set_str_part_0();
  return;
}



size_t mpz_out_str(FILE *param_1)

{
  char *__s;
  size_t __n;
  size_t sVar1;
  
  sVar1 = 0;
  __s = (char *)mpz_get_str(0);
  if (__s != (char *)0x0) {
    __n = strlen(__s);
    sVar1 = fwrite(__s,1,__n,param_1);
    (*(code *)gmp_free_func)(__s,__n + 1);
  }
  return sVar1;
}



void mpz_import(int *param_1,long param_2,int param_3,long param_4,int param_5,long param_6,
               byte *param_7)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_6 != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_import: Nails not supported.");
  }
  if ((param_3 + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x11a3,"mpz_import");
  }
  if (2 < param_5 + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x11a4,"mpz_import");
  }
  if (param_5 == 0) {
    if (param_3 == -1) {
      iVar2 = -1;
      lVar10 = 0;
    }
    else {
      iVar2 = -1;
      lVar10 = param_4 * -2;
      param_7 = param_7 + (param_2 + -1) * param_4;
    }
  }
  else {
    lVar10 = param_4 * 2;
    if (param_3 == param_5) {
      lVar10 = 0;
    }
    if (param_3 == 1) {
      lVar10 = -lVar10;
      param_7 = param_7 + (param_2 + -1) * param_4;
    }
    if (param_5 == 1) {
      param_7 = param_7 + param_4 + -1;
      iVar2 = 1;
    }
    else {
      iVar2 = -1;
    }
  }
  uVar3 = param_4 * param_2 + 7U >> 3;
  if ((long)*param_1 < (long)uVar3) {
    lVar5 = mpz_realloc(param_1,uVar3);
  }
  else {
    lVar5 = *(long *)(param_1 + 2);
  }
  if (param_2 != 0) {
    lVar4 = 0;
    uVar8 = 0;
    lVar9 = 0;
    do {
      lVar7 = 0;
      pbVar6 = param_7;
      if (param_4 != 0) {
        do {
          cVar1 = (char)lVar4;
          lVar4 = lVar4 + 1;
          uVar8 = uVar8 | (ulong)*pbVar6 << (cVar1 * '\b' & 0x3fU);
          if (lVar4 == 8) {
            *(ulong *)(lVar5 + lVar9 * 8) = uVar8;
            lVar4 = 0;
            lVar9 = lVar9 + 1;
            uVar8 = 0;
          }
          lVar7 = lVar7 + 1;
          pbVar6 = pbVar6 + -(long)iVar2;
        } while (param_4 != lVar7);
        param_7 = param_7 + param_4 * -(long)iVar2;
      }
      param_7 = param_7 + lVar10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if ((lVar9 + 1) - (ulong)(lVar4 == 0) != uVar3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i + (bytes > 0) == rn","lib/mini-gmp.c",0x11ca,"mpz_import");
    }
    if (uVar8 != 0) {
      *(ulong *)(lVar5 + lVar9 * 8) = uVar8;
      iVar2 = (int)lVar9 + 1;
      goto LAB_0010a96c;
    }
    if (lVar9 < 1) {
LAB_0010a9be:
      iVar2 = (int)lVar9;
      goto LAB_0010a96c;
    }
    do {
      if (*(long *)(lVar5 + -8 + lVar9 * 8) != 0) goto LAB_0010a9be;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  iVar2 = 0;
LAB_0010a96c:
  param_1[1] = iVar2;
  return;
}



undefined1 *
mpz_export(undefined1 *param_1,ulong *param_2,int param_3,ulong param_4,int param_5,long param_6,
          long param_7)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  
  if (param_6 != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_export: Nails not supported.");
  }
  if ((param_3 + 1U & 0xfffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("order == 1 || order == -1","lib/mini-gmp.c",0x11dd,"mpz_export");
  }
  if (2 < param_5 + 1U) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("endian >= -1 && endian <= 1","lib/mini-gmp.c",0x11de,"mpz_export");
  }
  uVar2 = *(uint *)(param_7 + 4);
  if (param_4 == 0) {
    uVar4 = 0;
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size > 0 || u->_mp_size == 0","lib/mini-gmp.c",0x11df,"mpz_export");
    }
  }
  else {
    if (uVar2 != 0) {
      uVar3 = -uVar2;
      if (0 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar14 = (ulong)uVar3;
      uVar4 = *(ulong *)(*(long *)(param_7 + 8) + -8 + uVar14 * 8);
      lVar12 = 0;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("limb != 0","lib/mini-gmp.c",0x11f3,"mpz_export");
      }
      do {
        lVar12 = lVar12 + 1;
        uVar4 = uVar4 >> 8;
      } while (uVar4 != 0);
      uVar1 = lVar12 + (param_4 - 1) + -8 + uVar14 * 8;
      uVar5 = uVar1 / param_4;
      if (param_1 == (undefined1 *)0x0) {
        param_1 = (undefined1 *)(*(code *)gmp_allocate_func)();
      }
      puVar13 = param_1;
      if (param_5 == 0) {
        if (param_3 == -1) {
          iVar10 = -1;
          lVar12 = 0;
        }
        else {
          iVar10 = -1;
          lVar12 = param_4 * -2;
          puVar13 = param_1 + (uVar5 - 1) * param_4;
        }
      }
      else {
        lVar12 = param_4 * 2;
        if (param_3 == param_5) {
          lVar12 = 0;
        }
        if (param_3 == 1) {
          lVar12 = -lVar12;
          puVar13 = param_1 + (uVar5 - 1) * param_4;
        }
        if (param_5 == 1) {
          puVar13 = puVar13 + (param_4 - 1);
          iVar10 = 1;
        }
        else {
          iVar10 = -1;
        }
      }
      if (param_4 <= uVar1) {
        lVar8 = 0;
        uVar9 = 0;
        uVar11 = 0;
        uVar4 = 0;
        do {
          uVar6 = 0;
          puVar7 = puVar13;
          do {
            if (lVar8 == 0) {
              lVar8 = 7;
              if ((long)uVar9 < (long)uVar14) {
                uVar4 = *(ulong *)(*(long *)(param_7 + 8) + uVar9 * 8);
                uVar9 = uVar9 + 1;
              }
            }
            else {
              lVar8 = lVar8 + -1;
            }
            uVar6 = uVar6 + 1;
            *puVar7 = (char)uVar4;
            uVar4 = uVar4 >> 8;
            puVar7 = puVar7 + -(long)iVar10;
          } while (param_4 != uVar6);
          uVar11 = uVar11 + 1;
          puVar13 = puVar13 + (lVar12 - (long)iVar10 * param_4);
        } while (uVar11 < uVar5);
        uVar4 = 1;
        if (param_4 <= uVar1) {
          uVar4 = uVar5;
        }
        if (uVar9 == uVar14) {
          if (uVar4 != uVar5) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("k == count","lib/mini-gmp.c",0x1233,"mpz_export");
          }
          goto LAB_0010aae6;
        }
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("i == un","lib/mini-gmp.c",0x1232,"mpz_export");
    }
    uVar4 = 0;
  }
LAB_0010aae6:
  if (param_2 != (ulong *)0x0) {
    *param_2 = uVar4;
  }
  return param_1;
}



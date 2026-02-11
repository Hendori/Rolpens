
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
      if (param_5 != param_1) break;
      param_2 = param_2 + 1;
    }
    param_1 = param_5 ^ param_1;
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



void mpn_limb_size_in_base_2_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("u > 0","lib/mini-gmp.c",0x4c3,"mpn_limb_size_in_base_2");
}



void mpn_div_qr_1_invert_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("d > 0","lib/mini-gmp.c",0x38f,"mpn_div_qr_1_invert");
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



long mpn_set_str_other(ulong *param_1,byte *param_2,ulong param_3,long param_4,uint *param_5)

{
  ulong *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("sn > 0","lib/mini-gmp.c",0x563,__PRETTY_FUNCTION___36);
  }
  uVar3 = *param_5;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3 - 1;
  uVar5 = (ulong)*param_2;
  if (SUB168(auVar4 % ZEXT416(uVar3),0) == 0) {
    *param_1 = uVar5;
    uVar19 = 1;
    if (param_3 == 1) {
      return 1;
    }
  }
  else {
    uVar19 = (ulong)(SUB164(auVar4 % ZEXT416(uVar3),0) - 1);
    pbVar11 = param_2 + 1;
    do {
      bVar2 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      uVar5 = uVar5 * param_4 + (ulong)bVar2;
    } while (pbVar11 != param_2 + uVar19 + 2);
    *param_1 = uVar5;
    uVar19 = uVar19 + 2;
    if (param_3 <= uVar19) {
      lVar16 = 1;
      goto LAB_001007c9;
    }
  }
  lVar16 = 1;
  do {
    uVar12 = (ulong)param_2[uVar19];
    uVar5 = uVar19 + 1;
    if (1 < uVar3) {
      pbVar11 = param_2 + uVar5;
      do {
        bVar2 = *pbVar11;
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 * param_4 + (ulong)bVar2;
      } while (pbVar11 != param_2 + uVar19 + (ulong)(uVar3 - 2) + 2);
      uVar5 = (ulong)(uVar3 - 2) + 1 + uVar5;
    }
    uVar19 = uVar5;
    puVar1 = param_1 + lVar16;
    uVar5 = 0;
    uVar18 = *(ulong *)(param_5 + 2) & 0xffffffff;
    uVar20 = *(ulong *)(param_5 + 2) >> 0x20;
    puVar14 = param_1;
    do {
      puVar15 = puVar14 + 1;
      uVar13 = *puVar14 & 0xffffffff;
      uVar8 = *puVar14 >> 0x20;
      uVar6 = uVar13 * uVar18;
      uVar17 = uVar8 * uVar18;
      lVar9 = uVar8 * uVar20;
      uVar8 = uVar13 * uVar20 + uVar17 + (uVar6 >> 0x20);
      lVar10 = lVar9 + 0x100000000;
      if (uVar17 <= uVar8) {
        lVar10 = lVar9;
      }
      uVar6 = (uVar6 & 0xffffffff) + (uVar8 << 0x20);
      *puVar14 = uVar6 + uVar5;
      uVar5 = (ulong)CARRY8(uVar6,uVar5) + (uVar8 >> 0x20) + lVar10;
      puVar7 = param_1;
      puVar14 = puVar15;
    } while (puVar1 != puVar15);
    do {
      uVar18 = *puVar7;
      puVar14 = puVar7 + 1;
      *puVar7 = uVar12 + *puVar7;
      uVar12 = (ulong)CARRY8(uVar12,uVar18);
      puVar7 = puVar14;
    } while (puVar1 != puVar14);
    if (uVar12 + uVar5 != 0) {
      *puVar1 = uVar12 + uVar5;
      lVar16 = lVar16 + 1;
    }
  } while (uVar19 < param_3);
LAB_001007c9:
  if (param_3 == uVar19) {
    return lVar16;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("j == sn","lib/mini-gmp.c",0x57b,__PRETTY_FUNCTION___36);
}



void mpz_div_r_2exp(int *param_1,int *param_2,long param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar14 = param_2[1];
  lVar18 = (long)(int)uVar14;
  if ((lVar18 == 0) || (param_3 == 0)) {
    iVar16 = 0;
    goto LAB_00100950;
  }
  uVar20 = param_3 + 0x3fU >> 6;
  if (uVar20 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("rn > 0","lib/mini-gmp.c",0x983,"mpz_div_r_2exp");
  }
  if ((long)*param_1 < (long)uVar20) {
    plVar7 = (long *)mpz_realloc(param_1,uVar20);
  }
  else {
    plVar7 = *(long **)(param_1 + 2);
  }
  if ((int)uVar14 < 1) {
    uVar14 = -uVar14;
  }
  uVar21 = 0xffffffffffffffff >> (-(char)param_3 & 0x3fU);
  uVar17 = (ulong)uVar14;
  if (uVar17 < uVar20) {
    if (param_4 == 0 < lVar18) {
      plVar9 = *(long **)(param_2 + 2);
      uVar8 = uVar17 - 1;
      lVar13 = *plVar9;
      plVar10 = plVar7;
      uVar19 = uVar17;
      if (lVar13 == 0) {
        *plVar7 = 0;
        if (uVar14 != 1) {
          do {
            lVar13 = plVar9[1];
            plVar9 = plVar9 + 1;
            plVar10 = plVar10 + 1;
            uVar12 = uVar8 - 1;
            uVar19 = uVar8;
            if (lVar13 != 0) goto LAB_00100ba0;
            *plVar10 = 0;
            uVar8 = uVar12;
          } while (uVar12 != 0);
        }
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0x993,"mpz_div_r_2exp");
      }
LAB_00100ba0:
      *plVar10 = -lVar13;
      if (1 < (long)uVar19) {
        if ((uVar19 - 2 < 3) || (plVar10 + 1 == plVar9 + 2)) {
          lVar13 = 8;
          do {
            *(ulong *)((long)plVar10 + lVar13) = ~*(ulong *)((long)plVar9 + lVar13);
            lVar13 = lVar13 + 8;
          } while (uVar19 * 8 != lVar13);
        }
        else {
          uVar19 = uVar19 - 1;
          lVar13 = 8;
          do {
            puVar1 = (uint *)((long)plVar9 + lVar13);
            uVar14 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (uint *)((long)plVar10 + lVar13);
            *puVar2 = *puVar1 ^ 0xffffffff;
            puVar2[1] = uVar14 ^ 0xffffffff;
            puVar2[2] = uVar4 ^ 0xffffffff;
            puVar2[3] = uVar5 ^ 0xffffffff;
            lVar13 = lVar13 + 0x10;
          } while ((uVar19 >> 1) * 0x10 + 8 != lVar13);
          if ((uVar19 & 1) != 0) {
            (plVar10 + 1)[uVar19 & 0xfffffffffffffffe] = ~plVar9[(uVar19 & 0xfffffffffffffffe) + 1];
          }
        }
      }
      lVar18 = -lVar18;
      if ((long)uVar17 < (long)(uVar20 - 1)) {
        memset(plVar7 + uVar17,0xff,((uVar20 - 1) - uVar17) * 8);
        plVar7[uVar20 - 1] = uVar21;
        uVar17 = uVar20;
      }
      else {
        plVar7[uVar20 - 1] = uVar21;
        uVar17 = uVar20;
      }
    }
    else if (param_2 != param_1) {
      lVar13 = *(long *)(param_2 + 2);
      if (uVar17 - 1 < 3) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        if (plVar7 != (long *)(lVar13 + 8)) {
          do {
            uVar6 = ((undefined8 *)(lVar13 + uVar20))[1];
            *(undefined8 *)((long)plVar7 + uVar20) = *(undefined8 *)(lVar13 + uVar20);
            ((undefined8 *)((long)plVar7 + uVar20))[1] = uVar6;
            uVar20 = uVar20 + 0x10;
          } while (uVar20 != (ulong)(uVar14 >> 1) * 0x10);
          if ((uVar14 & 1) != 0) {
            plVar7[uVar17 & 0xfffffffffffffffe] =
                 *(long *)(lVar13 + (uVar17 & 0xfffffffffffffffe) * 8);
          }
          goto LAB_0010093e;
        }
      }
      do {
        plVar7[uVar20] = *(long *)(lVar13 + uVar20 * 8);
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar17);
    }
  }
  else {
    lVar13 = *(long *)(param_2 + 2);
    if ((param_2 != param_1) && (uVar17 = uVar20 - 1, uVar17 != 0)) {
      if (uVar20 - 2 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (plVar7 != (long *)(lVar13 + 8)) {
          do {
            uVar6 = ((undefined8 *)(lVar13 + uVar8))[1];
            *(undefined8 *)((long)plVar7 + uVar8) = *(undefined8 *)(lVar13 + uVar8);
            ((undefined8 *)((long)plVar7 + uVar8))[1] = uVar6;
            uVar8 = uVar8 + 0x10;
          } while ((uVar17 >> 1) * 0x10 != uVar8);
          if ((uVar17 & 1) != 0) {
            plVar7[uVar17 & 0xfffffffffffffffe] =
                 *(long *)(lVar13 + (uVar17 & 0xfffffffffffffffe) * 8);
          }
          goto LAB_001009e8;
        }
      }
      do {
        plVar7[uVar8] = *(long *)(lVar13 + uVar8 * 8);
        uVar8 = uVar8 + 1;
      } while (uVar17 != uVar8);
    }
LAB_001009e8:
    puVar3 = (ulong *)(plVar7 + (uVar20 - 1));
    uVar8 = *(ulong *)(lVar13 + -8 + uVar20 * 8) & uVar21;
    *puVar3 = uVar8;
    uVar17 = uVar20;
    if (param_4 == 0 < lVar18) {
      lVar13 = *plVar7;
      uVar17 = uVar20 - 1;
      plVar9 = plVar7;
      uVar19 = uVar20;
      if (lVar13 == 0) {
        plVar10 = plVar7;
        if (uVar20 != 1) {
          do {
            lVar13 = plVar10[1];
            uVar12 = uVar17 - 1;
            plVar9 = plVar10 + 1;
            uVar19 = uVar17;
            if (lVar13 != 0) goto LAB_00100a49;
            plVar10 = plVar10 + 1;
            uVar17 = uVar12;
          } while (uVar12 != 0);
        }
      }
      else {
LAB_00100a49:
        puVar15 = (ulong *)(plVar9 + 1);
        *plVar9 = -lVar13;
        if (1 < (long)uVar19) {
          uVar17 = uVar19 - 1;
          if (uVar19 != 2) {
            plVar10 = plVar9;
            do {
              plVar11 = plVar10 + 2;
              *(uint *)(plVar10 + 1) = *(uint *)(plVar10 + 1) ^ 0xffffffff;
              *(uint *)((long)plVar10 + 0xc) = *(uint *)((long)plVar10 + 0xc) ^ 0xffffffff;
              *(uint *)(plVar10 + 2) = *(uint *)(plVar10 + 2) ^ 0xffffffff;
              *(uint *)((long)plVar10 + 0x14) = *(uint *)((long)plVar10 + 0x14) ^ 0xffffffff;
              plVar10 = plVar11;
            } while (plVar11 != plVar9 + (uVar17 & 0xfffffffffffffffe));
            if ((uVar17 & 1) == 0) goto LAB_00100a9f;
            puVar15 = puVar15 + (uVar17 & 0xfffffffffffffffe);
          }
          *puVar15 = ~*puVar15;
        }
LAB_00100a9f:
        uVar8 = *puVar3 & uVar21;
      }
      *puVar3 = uVar8;
      lVar18 = -lVar18;
      uVar17 = uVar20;
    }
  }
LAB_0010093e:
  do {
    if (plVar7[uVar17 - 1] != 0) break;
    uVar17 = uVar17 - 1;
  } while (uVar17 != 0);
  iVar16 = (int)uVar17;
  if (lVar18 < 0) {
    iVar16 = -(int)uVar17;
  }
LAB_00100950:
  param_1[1] = iVar16;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mpz_set_d_part_0(double param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  
  dVar12 = (double)(((ulong)param_1 ^ __LC16) & -(ulong)(param_1 < 0.0) |
                   ~-(ulong)(param_1 < 0.0) & (ulong)param_1);
  if (dVar12 < _LC17) {
    param_2[1] = 0;
    return;
  }
  lVar10 = 1;
  if (dVar12 < _LC18) {
    lVar8 = 0;
  }
  else {
    do {
      lVar8 = lVar10;
      dVar12 = dVar12 * _LC19;
      lVar10 = lVar8 + 1;
    } while (_LC18 <= dVar12);
  }
  iVar1 = *param_2;
  iVar9 = (int)lVar10;
  if (iVar1 < lVar10) {
    if (iVar1 == 0) {
      lVar7 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar7 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_2 + 2),(long)iVar1 * 8,lVar10 * 8);
    }
    dVar4 = _LC18;
    dVar3 = _LC17;
    iVar1 = param_2[1];
    *(long *)(param_2 + 2) = lVar7;
    *param_2 = iVar9;
    dVar5 = _LC20;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (lVar10 < iVar2) {
      param_2[1] = 0;
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 2);
    dVar3 = _LC17;
    dVar4 = _LC18;
    dVar5 = _LC20;
  }
  if (dVar12 < dVar5) {
    uVar6 = (ulong)dVar12;
  }
  else {
    uVar6 = (long)(dVar12 - dVar5) ^ 0x8000000000000000;
  }
  dVar12 = dVar12 - (double)uVar6;
  if (dVar3 <= dVar12) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d1,"mpz_set_d");
  }
  *(ulong *)(lVar7 + lVar8 * 8) = uVar6;
  lVar8 = lVar10 + -2;
  if (lVar10 != 1) {
    do {
      dVar12 = dVar12 * dVar4;
      if (dVar12 < dVar5) {
        uVar6 = (ulong)dVar12;
        if (-1 < (long)uVar6) goto LAB_00100dea;
LAB_00100e2e:
        dVar13 = (double)uVar6;
      }
      else {
        uVar6 = (long)(dVar12 - dVar5) ^ 0x8000000000000000;
        if ((long)uVar6 < 0) goto LAB_00100e2e;
LAB_00100dea:
        dVar13 = (double)(long)uVar6;
      }
      dVar12 = dVar12 - dVar13;
      if (dVar3 <= dVar12) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("x < 1.0","lib/mini-gmp.c",0x6d9,"mpz_set_d");
      }
      *(ulong *)(lVar7 + lVar8 * 8) = uVar6;
      bVar11 = lVar8 != 0;
      lVar8 = lVar8 + -1;
    } while (bVar11);
  }
  if (param_1 < 0.0) {
    iVar9 = -iVar9;
  }
  param_2[1] = iVar9;
  return;
}



void mpz_abs_add_bit(int *param_1,ulong param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  iVar5 = param_1[1];
  iVar6 = -iVar5;
  if (0 < iVar5) {
    iVar6 = iVar5;
  }
  uVar9 = param_2 >> 6;
  uVar4 = 1L << ((byte)param_2 & 0x3f);
  lVar8 = (long)iVar6;
  if ((long)uVar9 < lVar8) {
    lVar1 = *(long *)(param_1 + 2);
    puVar2 = (ulong *)(lVar1 + uVar9 * 8);
    do {
      uVar9 = uVar4 + *puVar2;
      puVar3 = puVar2 + 1;
      uVar4 = (ulong)CARRY8(uVar4,*puVar2);
      *puVar2 = uVar9;
      puVar2 = puVar3;
    } while (puVar3 != (ulong *)(lVar1 + lVar8 * 8));
    lVar7 = lVar8;
    if (uVar4 != 0) {
      lVar7 = lVar8 + 1;
      if (*param_1 <= iVar6) {
        lVar1 = mpz_realloc(param_1,lVar7);
        iVar5 = param_1[1];
      }
      *(undefined8 *)(lVar1 + lVar8 * 8) = 1;
    }
  }
  else {
    iVar6 = *param_1;
    lVar7 = uVar9 + 1;
    if ((long)uVar9 < (long)iVar6) {
      lVar1 = *(long *)(param_1 + 2);
    }
    else {
      if (iVar6 == 0) {
        lVar1 = (*(code *)gmp_allocate_func)();
      }
      else {
        lVar1 = (*(code *)gmp_reallocate_func)
                          (*(undefined8 *)(param_1 + 2),(long)iVar6 * 8,lVar7 * 8);
      }
      iVar5 = param_1[1];
      *(long *)(param_1 + 2) = lVar1;
      *param_1 = (int)lVar7;
      iVar6 = -iVar5;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      if (lVar7 < iVar6) {
        iVar5 = 0;
      }
    }
    *(ulong *)(lVar1 + uVar9 * 8) = uVar4;
    if (lVar8 < (long)uVar9) {
      memset((void *)(lVar1 + lVar8 * 8),0,(uVar9 - lVar8) * 8);
    }
  }
  iVar6 = (int)lVar7;
  if (iVar5 < 0) {
    iVar6 = -(int)lVar7;
  }
  param_1[1] = iVar6;
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



void mpn_copyi(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (0 < (long)param_3) {
    if (param_3 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (param_1 != param_2 + 8) {
        do {
          uVar1 = ((undefined8 *)(param_2 + uVar2))[1];
          *(undefined8 *)(param_1 + uVar2) = *(undefined8 *)(param_2 + uVar2);
          ((undefined8 *)(param_1 + uVar2))[1] = uVar1;
          uVar2 = uVar2 + 0x10;
        } while ((param_3 >> 1) * 0x10 != uVar2);
        if ((param_3 & 1) == 0) {
          return;
        }
        *(undefined8 *)(param_1 + (param_3 & 0xfffffffffffffffe) * 8) =
             *(undefined8 *)(param_2 + (param_3 & 0xfffffffffffffffe) * 8);
        return;
      }
    }
    do {
      *(undefined8 *)(param_1 + uVar2 * 8) = *(undefined8 *)(param_2 + uVar2 * 8);
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}



void mpn_copyd(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  uVar5 = param_3 - 1;
  if (-1 < (long)uVar5) {
    if (2 < uVar5) {
      lVar6 = param_3 * 8 + -0x10;
      lVar1 = param_2 + lVar6;
      if (lVar1 != param_1 + -8 + param_3 * 8) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar1 + lVar7);
          uVar4 = puVar2[1];
          puVar3 = (undefined8 *)(lVar6 + param_1 + lVar7);
          *puVar3 = *puVar2;
          puVar3[1] = uVar4;
          lVar7 = lVar7 + -0x10;
        } while ((param_3 >> 1) * -0x10 != lVar7);
        lVar6 = uVar5 - (param_3 & 0xfffffffffffffffe);
        if (param_3 == (param_3 & 0xfffffffffffffffe)) {
          return;
        }
        *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_2 + lVar6 * 8);
        return;
      }
    }
    do {
      *(undefined8 *)(param_1 + uVar5 * 8) = *(undefined8 *)(param_2 + uVar5 * 8);
      bVar8 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar8);
  }
  return;
}



void mpn_cmp(void)

{
  FUN_001012dd();
  return;
}



int FUN_001012dd(long param_1,long param_2,long param_3)

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
  }
  return;
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
    if (uVar4 < uVar3) goto LAB_00101695;
  }
  else if (lVar11 <= lVar10) {
LAB_00101695:
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
  ulong uVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  
  iVar1 = *param_4;
  if (iVar1 == 0) {
    uVar9 = *(ulong *)(param_4 + 2);
    uVar11 = *(ulong *)(param_4 + 6);
    if (param_3 + -1 < 0) {
      uVar2 = 0;
      bVar7 = 0;
      goto LAB_00101dfd;
    }
    lVar13 = 0;
    lVar6 = 0;
    uVar2 = 0;
LAB_00101d1a:
    param_3 = param_3 + -1;
    uVar10 = uVar11 & 0xffffffff;
    uVar11 = uVar11 >> 0x20;
    if (param_1 == 0) {
      do {
        uVar5 = (uVar2 & 0xffffffff) * uVar10;
        uVar12 = (uVar2 >> 0x20) * uVar10;
        lVar3 = (uVar2 >> 0x20) * uVar11;
        uVar8 = (uVar5 >> 0x20) + (uVar2 & 0xffffffff) * uVar11 + uVar12;
        lVar4 = lVar3 + 0x100000000;
        if (uVar12 <= uVar8) {
          lVar4 = lVar3;
        }
        uVar12 = *(ulong *)(param_2 + param_3 * 8);
        uVar5 = (uVar5 & 0xffffffff) + (uVar8 << 0x20);
        uVar8 = uVar12 - (lVar4 + uVar2 + 1 + (uVar8 >> 0x20) + (ulong)CARRY8(uVar5,uVar12)) * uVar9
        ;
        uVar2 = 0;
        if (uVar5 + uVar12 < uVar8) {
          uVar2 = uVar9;
        }
        uVar2 = uVar2 + uVar8;
        if (uVar9 <= uVar2) {
          uVar2 = uVar2 - uVar9;
        }
        bVar15 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar15);
    }
    else {
      do {
        while( true ) {
          uVar12 = (uVar2 & 0xffffffff) * uVar10;
          uVar14 = (uVar2 >> 0x20) * uVar10;
          lVar3 = (uVar2 >> 0x20) * uVar11;
          uVar8 = (uVar12 >> 0x20) + (uVar2 & 0xffffffff) * uVar11 + uVar14;
          uVar5 = *(ulong *)(param_2 + param_3 * 8);
          lVar4 = lVar3 + 0x100000000;
          if (uVar14 <= uVar8) {
            lVar4 = lVar3;
          }
          uVar12 = (uVar8 << 0x20) + (uVar12 & 0xffffffff);
          lVar4 = lVar4 + uVar2 + 1 + (uVar8 >> 0x20) + (ulong)CARRY8(uVar12,uVar5);
          uVar8 = uVar5 - uVar9 * lVar4;
          bVar15 = uVar12 + uVar5 < uVar8;
          lVar4 = lVar4 - (ulong)bVar15;
          uVar2 = 0;
          if (bVar15) {
            uVar2 = uVar9;
          }
          uVar2 = uVar2 + uVar8;
          if (uVar2 < uVar9) break;
          uVar2 = uVar2 - uVar9;
          *(long *)(param_1 + param_3 * 8) = lVar4 + 1;
          bVar15 = param_3 == 0;
          param_3 = param_3 + -1;
          if (bVar15) goto LAB_00101de6;
        }
        *(long *)(param_1 + param_3 * 8) = lVar4;
        bVar15 = param_3 != 0;
        param_3 = param_3 + -1;
      } while (bVar15);
    }
  }
  else {
    lVar13 = 0;
    lVar6 = param_1;
    if (param_1 == 0) {
      lVar6 = (*(code *)gmp_allocate_func)(param_3 * 8);
      iVar1 = *param_4;
      lVar13 = param_3;
    }
    uVar2 = mpn_lshift(lVar6,param_2,param_3,iVar1);
    uVar9 = *(ulong *)(param_4 + 2);
    uVar11 = *(ulong *)(param_4 + 6);
    param_2 = lVar6;
    if (-1 < param_3 + -1) goto LAB_00101d1a;
  }
LAB_00101de6:
  if (lVar13 != 0) {
    (*(code *)gmp_free_func)(lVar6,lVar13 * 8);
  }
  bVar7 = (byte)*param_4;
LAB_00101dfd:
  return uVar2 >> (bVar7 & 0x3f);
}



void mpn_div_qr_2_preinv(long param_1,ulong *param_2,long param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  
  if (param_3 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= 2","lib/mini-gmp.c",0x3fa,"mpn_div_qr_2_preinv");
  }
  iVar1 = *param_4;
  uVar2 = *(ulong *)(param_4 + 2);
  uVar3 = *(ulong *)(param_4 + 4);
  uVar11 = 0;
  uVar17 = *(ulong *)(param_4 + 6) & 0xffffffff;
  uVar5 = *(ulong *)(param_4 + 6) >> 0x20;
  if (iVar1 != 0) {
    uVar11 = mpn_lshift(param_2,param_2,param_3,iVar1);
  }
  uVar9 = param_2[param_3 + -1];
  param_3 = param_3 + -2;
  uVar18 = uVar3 & 0xffffffff;
  uVar6 = uVar3 >> 0x20;
  if (param_1 == 0) {
    puVar14 = param_2 + param_3;
    while( true ) {
      uVar7 = (uVar11 & 0xffffffff) * uVar17;
      uVar8 = (uVar11 >> 0x20) * uVar17;
      lVar10 = (uVar11 >> 0x20) * uVar5;
      uVar16 = (uVar7 >> 0x20) + (uVar11 & 0xffffffff) * uVar5 + uVar8;
      lVar12 = lVar10 + 0x100000000;
      if (uVar8 <= uVar16) {
        lVar12 = lVar10;
      }
      uVar13 = (uVar7 & 0xffffffff) + (uVar16 << 0x20);
      uVar11 = (uVar16 >> 0x20) + uVar11 + (ulong)CARRY8(uVar13,uVar9) + lVar12;
      uVar8 = *puVar14 - uVar3;
      uVar15 = (uVar11 & 0xffffffff) * uVar18;
      uVar7 = (uVar11 & 0xffffffff) * uVar6;
      lVar10 = uVar6 * (uVar11 >> 0x20);
      uVar16 = (uVar15 >> 0x20) + (uVar11 >> 0x20) * uVar18 + uVar7;
      lVar12 = lVar10 + 0x100000000;
      if (uVar7 <= uVar16) {
        lVar12 = lVar10;
      }
      uVar7 = (uVar16 << 0x20) + (uVar15 & 0xffffffff);
      uVar16 = (((((uVar9 - uVar2) - (ulong)(*puVar14 < uVar3)) - uVar2 * uVar11) - (uVar16 >> 0x20)
                ) - (ulong)(uVar8 < uVar7)) - lVar12;
      bVar19 = uVar13 + uVar9 <= uVar16;
      uVar11 = 0;
      if (bVar19) {
        uVar11 = uVar3;
      }
      uVar8 = uVar8 - uVar7;
      uVar9 = uVar8 + uVar11;
      uVar7 = 0;
      if (bVar19) {
        uVar7 = uVar2;
      }
      uVar11 = (ulong)CARRY8(uVar8,uVar11) + uVar7 + uVar16;
      if ((uVar2 <= uVar11) && ((uVar3 <= uVar9 || (uVar2 < uVar11)))) {
        bVar19 = uVar9 < uVar3;
        uVar9 = uVar9 - uVar3;
        uVar11 = (uVar11 - bVar19) - uVar2;
      }
      if (puVar14 == param_2) break;
      puVar14 = puVar14 + -1;
    }
  }
  else {
    do {
      while( true ) {
        uVar7 = (uVar11 & 0xffffffff) * uVar17;
        uVar16 = (uVar11 >> 0x20) * uVar17;
        lVar10 = (uVar11 >> 0x20) * uVar5;
        uVar8 = (uVar7 >> 0x20) + (uVar11 & 0xffffffff) * uVar5 + uVar16;
        lVar12 = lVar10 + 0x100000000;
        if (uVar16 <= uVar8) {
          lVar12 = lVar10;
        }
        uVar7 = (uVar7 & 0xffffffff) + (uVar8 << 0x20);
        uVar16 = param_2[param_3] - uVar3;
        uVar8 = (uVar8 >> 0x20) + uVar11 + (ulong)CARRY8(uVar7,uVar9) + lVar12;
        uVar13 = (uVar8 & 0xffffffff) * uVar18;
        uVar15 = (uVar8 & 0xffffffff) * uVar6;
        lVar10 = uVar6 * (uVar8 >> 0x20);
        uVar11 = (uVar13 >> 0x20) + (uVar8 >> 0x20) * uVar18 + uVar15;
        lVar12 = lVar10 + 0x100000000;
        if (uVar15 <= uVar11) {
          lVar12 = lVar10;
        }
        uVar15 = (uVar11 << 0x20) + (uVar13 & 0xffffffff);
        uVar13 = (((((uVar9 - uVar2) - (ulong)(param_2[param_3] < uVar3)) - uVar2 * uVar8) -
                  (uVar11 >> 0x20)) - (ulong)(uVar16 < uVar15)) - lVar12;
        bVar19 = uVar7 + uVar9 <= uVar13;
        lVar12 = (uVar8 + 1) - (ulong)bVar19;
        uVar11 = 0;
        if (bVar19) {
          uVar11 = uVar3;
        }
        uVar16 = uVar16 - uVar15;
        uVar9 = uVar16 + uVar11;
        uVar7 = 0;
        if (bVar19) {
          uVar7 = uVar2;
        }
        uVar11 = (ulong)CARRY8(uVar16,uVar11) + uVar7 + uVar13;
        if ((uVar11 < uVar2) || ((uVar11 <= uVar2 && (uVar9 < uVar3)))) break;
        bVar19 = uVar9 < uVar3;
        uVar9 = uVar9 - uVar3;
        *(long *)(param_1 + param_3 * 8) = lVar12 + 1;
        uVar11 = (uVar11 - bVar19) - uVar2;
        bVar19 = param_3 == 0;
        param_3 = param_3 + -1;
        if (bVar19) goto LAB_00102126;
      }
      *(long *)(param_1 + param_3 * 8) = lVar12;
      bVar19 = param_3 != 0;
      param_3 = param_3 + -1;
    } while (bVar19);
  }
LAB_00102126:
  if (iVar1 != 0) {
    bVar4 = (byte)iVar1;
    if ((0xffffffffffffffffU >> (0x40 - bVar4 & 0x3f) & uVar9) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(r0 & (GMP_LIMB_MAX >> (GMP_LIMB_BITS - shift))) == 0","lib/mini-gmp.c",0x415,
                    "mpn_div_qr_2_preinv");
    }
    uVar9 = uVar9 >> (bVar4 & 0x3f) | uVar11 << (0x40 - bVar4 & 0x3f);
    uVar11 = uVar11 >> (bVar4 & 0x3f);
  }
  param_2[1] = uVar11;
  *param_2 = uVar9;
  return;
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



void mpn_div_qr_preinv_part_0
               (long param_1,long param_2,long param_3,long param_4,long param_5,int *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  long local_b8;
  
  lVar6 = param_5 * 8;
  puVar1 = (ulong *)(param_4 + -8 + lVar6);
  if (*(ulong *)(param_6 + 2) != *puVar1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d1 == dp[dn-1]","lib/mini-gmp.c",0x46e,"mpn_div_qr_preinv");
  }
  puVar2 = (ulong *)(param_4 + -0x10 + lVar6);
  if (*(ulong *)(param_6 + 4) != *puVar2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inv->d0 == dp[dn-2]","lib/mini-gmp.c",0x46f,"mpn_div_qr_preinv");
  }
  if (-1 < (long)*(ulong *)(param_6 + 2)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(inv->d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x470,"mpn_div_qr_preinv");
  }
  iVar3 = *param_6;
  uVar16 = 0;
  if (iVar3 != 0) {
    uVar16 = mpn_lshift(param_2,param_2,param_3,iVar3);
  }
  if (param_5 <= param_3) {
    uVar4 = *puVar2;
    uVar5 = *puVar1;
    if (-1 < (long)uVar5) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(d1 & GMP_LIMB_HIGHBIT) != 0","lib/mini-gmp.c",0x430,"mpn_div_qr_pi1");
    }
    uVar7 = *(ulong *)(param_6 + 6) & 0xffffffff;
    uVar11 = *(ulong *)(param_6 + 6) >> 0x20;
    lVar12 = param_2 + param_3 * 8;
    local_b8 = (param_3 - param_5) * 8;
    lVar17 = param_2 + local_b8;
    do {
      uVar13 = *(ulong *)(lVar12 + -8);
      if ((uVar5 == uVar16) && (uVar4 == uVar13)) {
        lVar18 = 0;
        uVar16 = 0;
        do {
          uVar13 = *(ulong *)(param_4 + lVar18 * 8);
          uVar8 = (uVar13 << 0x20) - (uVar13 & 0xffffffff);
          uVar13 = ((uVar13 >> 0x20) << 0x20) - (uVar13 >> 0x20);
          uVar14 = uVar13 + uVar8 + (uVar8 >> 0x20);
          if (uVar14 < uVar13) {
            uVar13 = uVar13 + 0x100000000;
          }
          uVar9 = (uVar8 & 0xffffffff) + uVar16 + (uVar14 << 0x20);
          uVar8 = *(ulong *)(lVar17 + lVar18 * 8);
          *(ulong *)(lVar17 + lVar18 * 8) = uVar8 - uVar9;
          lVar18 = lVar18 + 1;
          uVar16 = (ulong)(uVar9 < uVar16) + (uVar14 >> 0x20) + (ulong)(uVar8 < uVar9) + uVar13;
        } while (param_5 != lVar18);
        uVar16 = *(ulong *)(lVar12 + -8);
        uVar13 = 0xffffffffffffffff;
      }
      else {
        uVar8 = uVar7 * (uVar16 >> 0x20);
        uVar9 = uVar7 * (uVar16 & 0xffffffff);
        lVar15 = (uVar16 >> 0x20) * uVar11;
        uVar14 = (uVar9 >> 0x20) + (uVar16 & 0xffffffff) * uVar11 + uVar8;
        lVar18 = lVar15 + 0x100000000;
        if (uVar8 <= uVar14) {
          lVar18 = lVar15;
        }
        uVar9 = (uVar14 << 0x20) + (uVar9 & 0xffffffff);
        uVar16 = (uVar14 >> 0x20) + uVar16 + (ulong)CARRY8(uVar9,uVar13) + lVar18;
        uVar14 = *(ulong *)(lVar12 + -0x10) - uVar4;
        uVar21 = (uVar4 & 0xffffffff) * (uVar16 & 0xffffffff);
        uVar8 = (uVar16 & 0xffffffff) * (uVar4 >> 0x20);
        lVar15 = (uVar4 >> 0x20) * (uVar16 >> 0x20);
        uVar19 = (uVar21 >> 0x20) + (uVar16 >> 0x20) * (uVar4 & 0xffffffff) + uVar8;
        lVar18 = lVar15 + 0x100000000;
        if (uVar8 <= uVar19) {
          lVar18 = lVar15;
        }
        uVar21 = (uVar19 << 0x20) + (uVar21 & 0xffffffff);
        uVar8 = (((((uVar13 - uVar5) - (ulong)(*(ulong *)(lVar12 + -0x10) < uVar4)) - uVar5 * uVar16
                  ) - (uVar19 >> 0x20)) - (ulong)(uVar14 < uVar21)) - lVar18;
        bVar22 = uVar9 + uVar13 <= uVar8;
        uVar14 = uVar14 - uVar21;
        uVar13 = (uVar16 + 1) - (ulong)bVar22;
        uVar16 = 0;
        if (bVar22) {
          uVar16 = uVar4;
        }
        uVar19 = uVar14 + uVar16;
        uVar9 = 0;
        if (bVar22) {
          uVar9 = uVar5;
        }
        uVar16 = (ulong)CARRY8(uVar14,uVar16) + uVar9 + uVar8;
        if ((uVar5 <= uVar16) && ((uVar5 < uVar16 || (uVar4 <= uVar19)))) {
          uVar13 = uVar13 + 1;
          bVar22 = uVar19 < uVar4;
          uVar19 = uVar19 - uVar4;
          uVar16 = (uVar16 - bVar22) - uVar5;
        }
        lVar18 = 0;
        uVar8 = 0;
        do {
          uVar14 = *(ulong *)(param_4 + lVar18 * 8);
          uVar21 = uVar14 & 0xffffffff;
          uVar14 = uVar14 >> 0x20;
          uVar9 = uVar21 * (uVar13 & 0xffffffff);
          uVar20 = uVar14 * (uVar13 & 0xffffffff);
          lVar10 = uVar14 * (uVar13 >> 0x20);
          uVar14 = uVar21 * (uVar13 >> 0x20) + uVar20 + (uVar9 >> 0x20);
          lVar15 = lVar10 + 0x100000000;
          if (uVar20 <= uVar14) {
            lVar15 = lVar10;
          }
          uVar21 = (uVar9 & 0xffffffff) + uVar8 + (uVar14 << 0x20);
          uVar9 = *(ulong *)(lVar17 + lVar18 * 8);
          *(ulong *)(lVar17 + lVar18 * 8) = uVar9 - uVar21;
          lVar18 = lVar18 + 1;
          uVar8 = (ulong)(uVar21 < uVar8) + (uVar14 >> 0x20) + (ulong)(uVar9 < uVar21) + lVar15;
        } while (lVar18 != param_5 + -2);
        *(ulong *)(lVar12 + -0x10) = uVar19 - uVar8;
        if (uVar16 < (uVar19 < uVar8)) {
          uVar16 = 0;
          lVar18 = 0;
          do {
            puVar1 = (ulong *)(lVar17 + lVar18 * 8);
            uVar8 = *puVar1;
            uVar9 = uVar16 + *puVar1;
            puVar1 = (ulong *)(param_4 + lVar18 * 8);
            uVar14 = *puVar1;
            *(ulong *)(lVar17 + lVar18 * 8) = uVar9 + *puVar1;
            uVar16 = (ulong)CARRY8(uVar16,uVar8) + (ulong)CARRY8(uVar9,uVar14);
            lVar18 = lVar18 + 1;
          } while (lVar18 < param_5 + -1);
          uVar13 = uVar13 - 1;
          uVar16 = (uVar5 - 1) + uVar16;
        }
        else {
          uVar16 = uVar16 - (uVar19 < uVar8);
        }
      }
      if (param_1 != 0) {
        *(ulong *)(param_1 + local_b8) = uVar13;
      }
      local_b8 = local_b8 + -8;
      lVar12 = lVar12 + -8;
      lVar17 = lVar17 + -8;
    } while (local_b8 != -8);
    *(ulong *)(param_2 + -8 + lVar6) = uVar16;
    if (iVar3 != 0) {
      lVar6 = mpn_rshift(param_2,param_2,param_5,iVar3);
      if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0x47b,"mpn_div_qr_preinv");
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("nn >= dn","lib/mini-gmp.c",0x42b,"mpn_div_qr_pi1");
}



void mpn_div_qr_preinv_constprop_0
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_4 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x462,"mpn_div_qr_preinv");
  }
  if (param_2 < param_4) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("nn >= dn","lib/mini-gmp.c",0x463,"mpn_div_qr_preinv");
  }
  if (param_4 == 1) {
    uVar1 = mpn_div_qr_1_preinv(0,param_1,param_2,param_5,param_5,param_5);
    *param_1 = uVar1;
    return;
  }
  if (param_4 != 2) {
    mpn_div_qr_preinv_part_0(0,param_1,param_2,param_3,param_4);
    return;
  }
  mpn_div_qr_2_preinv(0,param_1,param_2,param_5);
  return;
}



long mpn_scan1(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = param_2 >> 6;
  uVar3 = -1L << ((byte)param_2 & 0x3f) & *(ulong *)(param_1 + uVar1 * 8);
  while (uVar3 == 0) {
    uVar1 = uVar1 + 1;
    uVar3 = *(ulong *)(param_1 + uVar1 * 8);
  }
  iVar2 = 0;
  for (uVar3 = -uVar3 & uVar3; uVar3 < 0x100000000000000; uVar3 = uVar3 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
    iVar2 = iVar2 + 1;
  }
  return uVar1 * 0x40 + (ulong)(0x3f - iVar2);
}



long mpn_scan0(long param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = param_2 >> 6;
  uVar3 = ~*(ulong *)(param_1 + uVar1 * 8) & -1L << ((byte)param_2 & 0x3f);
  while (uVar3 == 0) {
    uVar1 = uVar1 + 1;
    uVar3 = *(ulong *)(param_1 + uVar1 * 8) ^ 0xffffffffffffffff;
  }
  iVar2 = 0;
  for (uVar3 = uVar3 & -uVar3; uVar3 < 0x100000000000000; uVar3 = uVar3 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
    iVar2 = iVar2 + 1;
  }
  return uVar1 * 0x40 + (ulong)(0x3f - iVar2);
}



void mpn_com(long param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  if (0 < (long)param_3) {
    if ((param_3 - 1 < 3) || (param_1 == param_2 + 8)) {
      uVar6 = 0;
      do {
        *(ulong *)(param_1 + uVar6 * 8) = ~*(ulong *)(param_2 + uVar6 * 8);
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
    }
    else {
      lVar7 = 0;
      uVar6 = 0;
      do {
        puVar1 = (uint *)(param_2 + lVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        uVar6 = uVar6 + 1;
        puVar2 = (uint *)(param_1 + lVar7);
        *puVar2 = *puVar1 ^ 0xffffffff;
        puVar2[1] = uVar3 ^ 0xffffffff;
        puVar2[2] = uVar4 ^ 0xffffffff;
        puVar2[3] = uVar5 ^ 0xffffffff;
        lVar7 = lVar7 + 0x10;
      } while (param_3 >> 1 != uVar6);
      lVar7 = (param_3 & 0xfffffffffffffffe) * 8;
      if (param_3 != (param_3 & 0xfffffffffffffffe)) {
        *(ulong *)(param_1 + lVar7) = ~*(ulong *)(param_2 + lVar7);
        return;
      }
    }
  }
  return;
}



undefined8 mpn_neg(long *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  lVar8 = *param_2;
  if (lVar8 == 0) {
    *param_1 = 0;
    bVar11 = param_3 != 1;
    uVar10 = 0;
    param_3 = param_3 + -1;
    if (bVar11) {
      do {
        lVar8 = param_2[1];
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        lVar6 = param_3 + -1;
        if (lVar8 != 0) goto LAB_00102c74;
        *param_1 = 0;
        param_3 = lVar6;
      } while (lVar6 != 0);
    }
  }
  else {
LAB_00102c74:
    *param_1 = -lVar8;
    if (1 < param_3) {
      uVar9 = param_3 - 1;
      if ((param_3 - 2U < 3) || (param_1 + 1 == param_2 + 2)) {
        uVar7 = 0;
        do {
          param_1[uVar7 + 1] = ~param_2[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar9 != uVar7);
      }
      else {
        lVar8 = 8;
        uVar7 = 0;
        do {
          puVar1 = (uint *)((long)param_2 + lVar8);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          uVar7 = uVar7 + 1;
          puVar2 = (uint *)((long)param_1 + lVar8);
          *puVar2 = *puVar1 ^ 0xffffffff;
          puVar2[1] = uVar3 ^ 0xffffffff;
          puVar2[2] = uVar4 ^ 0xffffffff;
          puVar2[3] = uVar5 ^ 0xffffffff;
          lVar8 = lVar8 + 0x10;
        } while (uVar9 >> 1 != uVar7);
        if ((uVar9 & 1) != 0) {
          (param_1 + 1)[uVar9 & 0xfffffffffffffffe] = ~param_2[(uVar9 & 0xfffffffffffffffe) + 1];
        }
      }
    }
    uVar10 = 1;
  }
  return uVar10;
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



void mpn_get_str_other(undefined1 *param_1,int param_2,uint *param_3,undefined8 *param_4,
                      long param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar10;
  long in_FS_OFFSET;
  int *local_98;
  int local_88 [2];
  ulong local_80;
  undefined8 local_70;
  int local_68 [2];
  long local_60;
  undefined8 local_50;
  long local_40;
  long lVar9;
  
  uVar10 = (ulong)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar10 == 0) {
LAB_001030a2:
    mpn_div_qr_1_invert_part_0();
  }
  else {
    local_88[0] = 0;
    uVar2 = uVar10;
    if (uVar10 < 0x100000000000000) {
      do {
        uVar2 = uVar2 << 8;
        local_88[0] = local_88[0] + 8;
      } while (uVar2 < 0x100000000000000);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
        local_88[0] = local_88[0] + 1;
      }
      uVar10 = uVar10 << ((byte)local_88[0] & 0x3f);
    }
    local_80 = uVar10;
    local_70 = mpn_invert_3by2(uVar10,0);
    if (param_5 < 2) {
      lVar8 = 0;
      puVar5 = param_1;
    }
    else {
      uVar10 = *(ulong *)(param_3 + 2);
      if (uVar10 == 0) goto LAB_001030a2;
      local_68[0] = 0;
      for (uVar2 = uVar10; uVar2 < 0x100000000000000; uVar2 = uVar2 << 8) {
        local_68[0] = local_68[0] + 8;
      }
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
        local_68[0] = local_68[0] + 1;
      }
      local_60 = uVar10 << ((byte)local_68[0] & 0x3f);
      local_50 = mpn_invert_3by2(local_60,0);
      lVar3 = 0;
      do {
        local_98 = local_88;
        uVar4 = mpn_div_qr_1_preinv(param_4,param_4,param_5,local_68);
        param_5 = param_5 - (ulong)(param_4[param_5 + -1] == 0);
        uVar10 = mpn_limb_get_str(param_1 + lVar3,uVar4,local_98);
        lVar8 = lVar3 + uVar10;
        lVar9 = lVar8;
        if (uVar10 < *param_3) {
          do {
            lVar8 = lVar9 + 1;
            param_1[lVar9] = 0;
            lVar9 = lVar8;
          } while ((ulong)(lVar8 - lVar3) < (ulong)*param_3);
        }
        lVar3 = lVar8;
      } while (param_5 != 1);
      puVar5 = param_1 + lVar8;
    }
    local_98 = local_88;
    lVar3 = mpn_limb_get_str(puVar5,*param_4,local_98);
    uVar10 = lVar3 + lVar8;
    if (1 < uVar10) {
      puVar5 = param_1 + (uVar10 - 1);
      puVar6 = param_1;
      do {
        uVar1 = *puVar6;
        puVar7 = puVar6 + 1;
        *puVar6 = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + -1;
        puVar6 = puVar7;
      } while (param_1 + (uVar10 - 2 >> 1) + 1 != puVar7);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpn_div_qr_invert(int *param_1,ulong *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  if (param_3 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("dn > 0","lib/mini-gmp.c",0x3ad,"mpn_div_qr_invert");
  }
  if (param_3 == 1) {
    uVar5 = *param_2;
    if (uVar5 != 0) {
      iVar7 = 0;
      for (uVar4 = uVar5; uVar4 < 0x100000000000000; uVar4 = uVar4 << 8) {
        iVar7 = iVar7 + 8;
      }
      for (; -1 < (long)uVar4; uVar4 = uVar4 * 2) {
        iVar7 = iVar7 + 1;
      }
      lVar6 = uVar5 << ((byte)iVar7 & 0x3f);
      *param_1 = iVar7;
      *(long *)(param_1 + 2) = lVar6;
      uVar3 = mpn_invert_3by2(lVar6,0);
      *(undefined8 *)(param_1 + 6) = uVar3;
      return;
    }
    mpn_div_qr_1_invert_part_0();
  }
  else {
    if (param_3 != 2) {
      uVar5 = param_2[param_3 + -1];
      uVar4 = param_2[param_3 + -2];
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("d1 > 0","lib/mini-gmp.c",0x3ba,"mpn_div_qr_invert");
      }
      iVar7 = 0;
      uVar2 = uVar5;
      if (uVar5 < 0x100000000000000) {
        do {
          uVar2 = uVar2 << 8;
          iVar7 = iVar7 + 8;
        } while (uVar2 < 0x100000000000000);
        for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00103120:
          iVar7 = iVar7 + 1;
        }
        *param_1 = iVar7;
        if (iVar7 != 0) {
          bVar1 = (byte)iVar7;
          uVar5 = uVar5 << (bVar1 & 0x3f) | uVar4 >> (0x40 - bVar1 & 0x3f);
          uVar4 = uVar4 << (bVar1 & 0x3f) | param_2[param_3 + -3] >> (0x40 - bVar1 & 0x3f);
        }
      }
      else {
        if (-1 < (long)uVar5) goto LAB_00103120;
        *param_1 = 0;
      }
      *(ulong *)(param_1 + 2) = uVar5;
      *(ulong *)(param_1 + 4) = uVar4;
      uVar3 = mpn_invert_3by2();
      *(undefined8 *)(param_1 + 6) = uVar3;
      return;
    }
    uVar5 = param_2[1];
    uVar4 = *param_2;
    if (uVar5 != 0) {
      iVar7 = 0;
      uVar2 = uVar5;
      if (uVar5 < 0x100000000000000) {
        do {
          uVar2 = uVar2 << 8;
          iVar7 = iVar7 + 8;
        } while (uVar2 < 0x100000000000000);
        for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00103210:
          iVar7 = iVar7 + 1;
        }
        if (iVar7 != 0) {
          bVar1 = (byte)iVar7;
          uVar2 = uVar4 >> (0x40 - bVar1 & 0x3f);
          uVar4 = uVar4 << (bVar1 & 0x3f);
          uVar5 = uVar5 << (bVar1 & 0x3f) | uVar2;
        }
      }
      else if (-1 < (long)uVar5) goto LAB_00103210;
      *param_1 = iVar7;
      *(ulong *)(param_1 + 2) = uVar5;
      *(ulong *)(param_1 + 4) = uVar4;
      uVar3 = mpn_invert_3by2();
      *(undefined8 *)(param_1 + 6) = uVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("d1 > 0","lib/mini-gmp.c",0x39c,"mpn_div_qr_2_invert");
}



void mpn_div_qr(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
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
    if (param_5 == 1) {
      uVar3 = mpn_div_qr_1_preinv(param_1,param_2,param_3,local_68);
      *param_2 = uVar3;
    }
    else {
      mpn_div_qr_2_preinv();
    }
  }
  else if (local_68[0] == 0) {
    mpn_div_qr_preinv_part_0(param_1,param_2,param_3,param_4,param_5,local_68);
  }
  else {
    lVar1 = (*(code *)gmp_allocate_func)(param_5 * 8);
    lVar2 = mpn_lshift(lVar1,param_4,param_5,local_68[0]);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0x48c,"mpn_div_qr");
    }
    mpn_div_qr_preinv_part_0(param_1,param_2,param_3,lVar1,param_5,local_68);
    if (lVar1 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001033c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(lVar1,param_5 * 8);
        return;
      }
      goto LAB_0010343b;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010343b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpn_get_str(undefined8 param_1,int param_2,long param_3,long param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  undefined8 uVar6;
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
  if (*(long *)(param_3 + -8 + param_4 * 8) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("up[un-1] > 0","lib/mini-gmp.c",0x52e,"mpn_get_str");
  }
  if (param_2 < 0x21) {
    switch(param_2) {
    case 2:
      uVar6 = 1;
      break;
    default:
switchD_001034fa_caseD_3:
      uVar7 = (ulong)param_2;
      local_28[0] = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      lVar5 = SUB168(auVar1 * auVar3,8);
      local_20 = uVar7;
      while (lVar5 == 0) {
        local_20 = local_20 * uVar7;
        local_28[0] = local_28[0] + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar7;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_20;
        lVar5 = SUB168(auVar2 * auVar4,8);
      }
      mpn_get_str_other(param_1,param_2,local_28,param_3,param_4);
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010361b;
    case 4:
      uVar6 = 2;
      break;
    case 8:
      uVar6 = 3;
      break;
    case 0x10:
      uVar6 = 4;
      break;
    case 0x20:
      uVar6 = 5;
    }
  }
  else if (param_2 == 0x80) {
    uVar6 = 7;
  }
  else if (param_2 == 0x100) {
    uVar6 = 8;
  }
  else {
    uVar6 = 6;
    if (param_2 != 0x40) goto switchD_001034fa_caseD_3;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    mpn_get_str_bits(param_1,uVar6,param_3);
    return;
  }
LAB_0010361b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long mpn_set_str(long param_1,byte *param_2,long param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  bool bVar11;
  int local_28 [2];
  ulong local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    if (param_4 < 0x21) {
      switch(param_4) {
      case 2:
        iVar10 = 1;
        break;
      default:
switchD_00103672_caseD_3:
        uVar7 = (ulong)param_4;
        local_28[0] = 1;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar7;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar7;
        lVar9 = SUB168(auVar1 * auVar3,8);
        local_20 = uVar7;
        while (lVar9 == 0) {
          local_20 = local_20 * uVar7;
          local_28[0] = local_28[0] + 1;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar7;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_20;
          lVar9 = SUB168(auVar2 * auVar4,8);
        }
        lVar9 = mpn_set_str_other(param_1,param_2,param_3,uVar7,local_28);
        goto LAB_00103738;
      case 4:
        iVar10 = 2;
        break;
      case 8:
        iVar10 = 3;
        break;
      case 0x10:
        iVar10 = 4;
        break;
      case 0x20:
        iVar10 = 5;
      }
    }
    else if (param_4 == 0x80) {
      iVar10 = 7;
    }
    else if (param_4 == 0x100) {
      iVar10 = 8;
    }
    else {
      iVar10 = 6;
      if (param_4 != 0x40) goto switchD_00103672_caseD_3;
    }
    lVar9 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pbVar8 = param_2 + param_3 + -1;
    do {
      uVar5 = uVar6 + iVar10;
      uVar7 = uVar7 | (ulong)*pbVar8 << ((byte)uVar6 & 0x3f);
      uVar6 = uVar5;
      if (0x3f < uVar5) {
        *(ulong *)(param_1 + lVar9 * 8) = uVar7;
        uVar6 = uVar5 - 0x40;
        lVar9 = lVar9 + 1;
        uVar7 = (ulong)(*pbVar8 >> ((char)iVar10 - (char)uVar6 & 0x1fU));
      }
      bVar11 = param_2 != pbVar8;
      pbVar8 = pbVar8 + -1;
    } while (bVar11);
    if (uVar7 != 0) {
      *(ulong *)(param_1 + lVar9 * 8) = uVar7;
      lVar9 = lVar9 + 1;
      goto LAB_00103738;
    }
    if (lVar9 < 1) goto LAB_00103738;
    do {
      if (*(long *)(param_1 + -8 + lVar9 * 8) != 0) goto LAB_00103738;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = 0;
LAB_00103738:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar9;
  }
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
                    /* WARNING: Could not recover jumptable at 0x00103843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(*(undefined8 *)(param_1 + 2),(long)*param_1 << 3);
    return;
  }
  return;
}



void mpz_set_si(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (param_2 < 0) {
    iVar1 = *param_1;
    param_1[1] = -1;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
      }
      else {
        plVar3 = (long *)(*(code *)gmp_reallocate_func)
                                   (*(undefined8 *)(param_1 + 2),(long)iVar1 * 8,8);
      }
      iVar1 = param_1[1];
      *(long **)(param_1 + 2) = plVar3;
      *param_1 = 1;
      iVar2 = -iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      if (1 < iVar2) {
        param_1[1] = 0;
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = -param_2;
    return;
  }
  if (param_2 != 0) {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar3 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = param_2;
    return;
  }
  param_1[1] = 0;
  return;
}



void mpz_set_ui(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    param_1[1] = 1;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
      }
      else {
        plVar3 = (long *)(*(code *)gmp_reallocate_func)
                                   (*(undefined8 *)(param_1 + 2),(long)iVar1 * 8,8);
      }
      iVar1 = param_1[1];
      *(long **)(param_1 + 2) = plVar3;
      *param_1 = 1;
      iVar2 = -iVar1;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      if (1 < iVar2) {
        param_1[1] = 0;
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 2);
    }
    *plVar3 = param_2;
    return;
  }
  param_1[1] = 0;
  return;
}



void mpz_set(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    return;
  }
  uVar7 = param_2[1];
  uVar3 = *param_1;
  uVar8 = -uVar7;
  if (0 < (int)uVar7) {
    uVar8 = uVar7;
  }
  uVar6 = (ulong)(int)uVar8;
  if ((int)uVar3 < (int)uVar8) {
    uVar4 = 1;
    if (0 < (long)uVar6) {
      uVar4 = uVar6;
    }
    if (uVar3 == 0) {
      lVar5 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar5 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_1 + 2),(long)(int)uVar3 * 8,uVar4 * 8);
    }
    uVar7 = param_1[1];
    *(long *)(param_1 + 2) = lVar5;
    uVar3 = 1;
    if (0 < (int)uVar8) {
      uVar3 = uVar8;
    }
    *param_1 = uVar3;
    uVar3 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar3 = uVar7;
    }
    if ((long)uVar4 < (long)(int)uVar3) {
      param_1[1] = 0;
    }
    uVar7 = param_2[1];
  }
  else {
    lVar5 = *(long *)(param_1 + 2);
  }
  lVar1 = *(long *)(param_2 + 2);
  if (uVar6 != 0) {
    if (uVar6 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (lVar5 != lVar1 + 8) {
        do {
          uVar2 = ((undefined8 *)(lVar1 + uVar4))[1];
          *(undefined8 *)(lVar5 + uVar4) = *(undefined8 *)(lVar1 + uVar4);
          ((undefined8 *)(lVar5 + uVar4))[1] = uVar2;
          uVar4 = uVar4 + 0x10;
        } while ((uVar6 >> 1) * 0x10 != uVar4);
        if ((uVar8 & 1) != 0) {
          *(undefined8 *)(lVar5 + (uVar6 & 0xfffffffffffffffe) * 8) =
               *(undefined8 *)(lVar1 + (uVar6 & 0xfffffffffffffffe) * 8);
          param_1[1] = uVar7;
          return;
        }
        goto LAB_00103a61;
      }
    }
    do {
      *(undefined8 *)(lVar5 + uVar4 * 8) = *(undefined8 *)(lVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
LAB_00103a61:
  param_1[1] = uVar7;
  return;
}



void mpz_init_set_si(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  if (-1 < param_2) {
    if (param_2 != 0) {
      *(undefined4 *)((long)param_1 + 4) = 1;
      plVar3 = (long *)mpz_realloc(param_1,1);
      *plVar3 = param_2;
    }
    return;
  }
  *(undefined4 *)((long)param_1 + 4) = 0xffffffff;
  plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
  iVar1 = *(int *)((long)param_1 + 4);
  *(undefined4 *)param_1 = 1;
  param_1[1] = plVar3;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (1 < iVar2) {
    *(undefined4 *)((long)param_1 + 4) = 0;
  }
  *plVar3 = -param_2;
  return;
}



void mpz_init_set_ui(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  if (param_2 != 0) {
    *(undefined4 *)((long)param_1 + 4) = 1;
    plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
    iVar1 = *(int *)((long)param_1 + 4);
    *(undefined4 *)param_1 = 1;
    param_1[1] = plVar3;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (1 < iVar2) {
      *(undefined4 *)((long)param_1 + 4) = 0;
    }
    *plVar3 = param_2;
    return;
  }
  return;
}



void mpz_init_set(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 **)(param_1 + 2) = &dummy_limb_35;
  if (param_1 == param_2) {
    return;
  }
  uVar7 = param_2[1];
  if (uVar7 == 0) {
LAB_00103ca6:
    param_1[1] = uVar7;
    return;
  }
  uVar8 = -uVar7;
  if (0 < (int)uVar7) {
    uVar8 = uVar7;
  }
  uVar6 = (ulong)(int)uVar8;
  lVar4 = (*(code *)gmp_allocate_func)(uVar6 * 8);
  uVar7 = param_1[1];
  *param_1 = uVar8;
  *(long *)(param_1 + 2) = lVar4;
  uVar2 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar2 = uVar7;
  }
  if ((long)uVar6 < (long)(int)uVar2) {
    param_1[1] = 0;
  }
  lVar1 = *(long *)(param_2 + 2);
  uVar7 = param_2[1];
  if (uVar6 - 1 < 3) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (lVar4 != lVar1 + 8) {
      do {
        uVar3 = ((undefined8 *)(lVar1 + uVar5))[1];
        *(undefined8 *)(lVar4 + uVar5) = *(undefined8 *)(lVar1 + uVar5);
        ((undefined8 *)(lVar4 + uVar5))[1] = uVar3;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != (uVar6 >> 1) * 0x10);
      if ((uVar8 & 1) != 0) {
        *(undefined8 *)(lVar4 + (uVar6 & 0xfffffffffffffffe) * 8) =
             *(undefined8 *)(lVar1 + (uVar6 & 0xfffffffffffffffe) * 8);
        param_1[1] = uVar7;
        return;
      }
      goto LAB_00103ca6;
    }
  }
  do {
    *(undefined8 *)(lVar4 + uVar5 * 8) = *(undefined8 *)(lVar1 + uVar5 * 8);
    uVar5 = uVar5 + 1;
  } while (uVar6 != uVar5);
  param_1[1] = uVar7;
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
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify_part_0();
  }
  iVar1 = *param_1;
  if (iVar1 < param_2) {
    if (iVar1 == 0) {
      uVar3 = (*(code *)gmp_allocate_func)();
    }
    else {
      uVar3 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_1 + 2),(long)iVar1 << 3,param_2 * 8);
    }
    iVar1 = param_1[1];
    *(undefined8 *)(param_1 + 2) = uVar3;
    *param_1 = (int)param_2;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (param_2 < iVar2) {
      param_1[1] = 0;
      return uVar3;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 2);
  }
  return uVar3;
}



undefined8 mpz_limbs_write(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    mpz_limbs_modify_part_0();
  }
  iVar1 = *param_1;
  if (iVar1 < param_2) {
    if (iVar1 == 0) {
      uVar3 = (*(code *)gmp_allocate_func)();
    }
    else {
      uVar3 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_1 + 2),(long)iVar1 << 3,param_2 * 8);
    }
    iVar1 = param_1[1];
    *(undefined8 *)(param_1 + 2) = uVar3;
    *param_1 = (int)param_2;
    iVar2 = -iVar1;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (param_2 < iVar2) {
      param_1[1] = 0;
      return uVar3;
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 2);
  }
  return uVar3;
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



void mpz_set_d(double param_1,long param_2)

{
  if (_LC41 * param_1 == param_1) {
    *(undefined4 *)(param_2 + 4) = 0;
    return;
  }
  mpz_set_d_part_0();
  return;
}



void mpz_init_set_d(double param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = &dummy_limb_35;
  if (param_1 == _LC41 * param_1) {
    return;
  }
  mpz_set_d_part_0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double mpz_get_d(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
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
  uVar4 = *(ulong *)(*(long *)(param_1 + 8) + (long)(iVar2 + -1) * 8);
  uVar3 = uVar4;
  if (uVar4 < 0x100000000000000) {
    do {
      uVar3 = uVar3 << 8;
      iVar5 = iVar5 + 8;
      iVar6 = iVar5;
    } while (uVar3 < 0x100000000000000);
    for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
LAB_001043c0:
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + -0xb;
    if (-1 < iVar6) {
      dVar9 = (double)uVar4;
      uVar4 = (ulong)(iVar2 + -2);
      if (iVar2 + -2 != -1) {
        do {
          dVar9 = dVar9 * _LC18;
          if (iVar6 == 0) goto LAB_0010445c;
          uVar3 = *(ulong *)(*(long *)(param_1 + 8) + uVar4 * 8);
          iVar6 = iVar6 + -0x40;
          if (iVar6 < 0) {
            dVar9 = dVar9 + (double)(-1L << (-(char)iVar6 & 0x3fU) & uVar3);
            bVar8 = uVar4 != 0;
            uVar4 = uVar4 - 1;
            if (bVar8) goto LAB_00104458;
            break;
          }
          dVar9 = dVar9 + (double)uVar3;
          bVar8 = uVar4 != 0;
          uVar4 = uVar4 - 1;
        } while (bVar8);
      }
      goto LAB_00104490;
    }
    uVar3 = -1L << (-(char)iVar6 & 0x3fU);
  }
  else {
    if (-1 < (long)uVar4) goto LAB_001043c0;
    uVar3 = 0xfffffffffffff800;
  }
  dVar9 = (double)(uVar4 & uVar3);
  uVar4 = (ulong)(iVar2 + -2);
  if (iVar2 + -2 != -1) {
LAB_00104458:
    dVar9 = dVar9 * _LC18;
LAB_0010445c:
    lVar7 = uVar4 - 1;
    if (uVar4 != 0) {
      if ((uVar4 & 1) != 0) {
        dVar9 = dVar9 * _LC18;
        lVar7 = uVar4 - 2;
        if (uVar4 == 1) goto LAB_00104490;
      }
      do {
        lVar7 = lVar7 + -2;
        dVar9 = dVar9 * _LC18 * _LC18;
      } while (lVar7 != -1);
    }
  }
LAB_00104490:
  if (-1 < iVar1) {
    return dVar9;
  }
  return (double)((ulong)dVar9 ^ __LC16);
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
    param_1 = (double)((ulong)param_1 ^ __LC16);
  }
  if (uVar1 != 0) {
    if ((int)uVar1 < 1) {
      uVar1 = -uVar1;
    }
    if (uVar1 == 1) {
      if (_LC18 <= param_1) {
        return -1;
      }
      uVar4 = 0;
    }
    else {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        param_1 = param_1 * _LC19;
        uVar3 = uVar4 + 1;
      } while ((ulong)uVar1 != uVar4 + 1);
      if (_LC18 <= param_1) {
        return -1;
      }
    }
    do {
      if (param_1 < _LC20) {
        uVar2 = (ulong)param_1;
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + uVar4 * 8);
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      else {
        uVar3 = *(ulong *)(*(long *)(param_2 + 8) + uVar4 * 8);
        uVar2 = (long)(param_1 - _LC20) ^ 0x8000000000000000;
        if (uVar2 < uVar3) {
          return 1;
        }
      }
      if (uVar3 < uVar2) {
        return -1;
      }
      param_1 = (param_1 - (double)uVar2) * _LC18;
      bVar5 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar5);
  }
  return -(uint)(0.0 < param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint mpz_cmp_d(double param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  double dVar7;
  
  uVar1 = *(uint *)(param_2 + 4);
  if ((int)uVar1 < 0) {
    if (0.0 <= param_1) {
      return 0xffffffff;
    }
    dVar7 = (double)((ulong)param_1 ^ __LC16);
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 == 1) {
      if (param_1 <= _LC42) {
        return 1;
      }
      uVar5 = 0;
    }
    else {
      uVar4 = 1;
      do {
        uVar5 = uVar4;
        dVar7 = dVar7 * _LC19;
        uVar4 = uVar5 + 1;
      } while ((ulong)uVar3 != uVar5 + 1);
      if (_LC18 <= dVar7) {
        return 1;
      }
    }
    do {
      if (dVar7 < _LC20) {
        uVar4 = (ulong)dVar7;
      }
      else {
        uVar4 = (long)(dVar7 - _LC20) ^ 0x8000000000000000;
      }
      uVar2 = *(ulong *)(*(long *)(param_2 + 8) + uVar5 * 8);
      if (uVar4 < uVar2) {
        return 0xffffffff;
      }
      if (uVar2 < uVar4) {
        return 1;
      }
      dVar7 = (dVar7 - (double)uVar4) * _LC18;
      bVar6 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar6);
    return (uint)(0.0 < dVar7);
  }
  if (param_1 < 0.0) {
    return 1;
  }
  if (0.0 <= param_1) {
    if (uVar1 == 0) goto LAB_001047c0;
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 == 1) {
      if (_LC18 <= param_1) {
        return 0xffffffff;
      }
      goto LAB_00104912;
    }
LAB_001046f9:
    uVar4 = 1;
    do {
      uVar5 = uVar4;
      param_1 = param_1 * _LC19;
      uVar4 = uVar5 + 1;
    } while (uVar5 + 1 != (ulong)uVar3);
    if (_LC18 <= param_1) {
      return 0xffffffff;
    }
  }
  else {
    param_1 = (double)((ulong)param_1 ^ __LC16);
    if (uVar1 == 0) goto LAB_001047c0;
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if (uVar3 != 1) goto LAB_001046f9;
LAB_00104912:
    uVar5 = 0;
  }
  do {
    if (param_1 < _LC20) {
      uVar4 = (ulong)param_1;
    }
    else {
      uVar4 = (long)(param_1 - _LC20) ^ 0x8000000000000000;
    }
    uVar2 = *(ulong *)(*(long *)(param_2 + 8) + uVar5 * 8);
    if (uVar4 < uVar2) {
      return 1;
    }
    if (uVar2 < uVar4) {
      return 0xffffffff;
    }
    param_1 = (param_1 - (double)uVar4) * _LC18;
    bVar6 = uVar5 != 0;
    uVar5 = uVar5 - 1;
  } while (bVar6);
LAB_001047c0:
  return -(uint)(0.0 < param_1);
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



void mpz_abs(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    uVar1 = param_1[1];
    uVar8 = -uVar1;
    if (0 < (int)uVar1) {
      uVar8 = uVar1;
    }
    param_1[1] = uVar8;
    return;
  }
  uVar1 = param_2[1];
  uVar8 = -uVar1;
  if (0 < (int)uVar1) {
    uVar8 = uVar1;
  }
  uVar1 = *param_1;
  uVar7 = (ulong)(int)uVar8;
  if ((int)uVar1 < (int)uVar8) {
    uVar5 = 1;
    if (0 < (long)uVar7) {
      uVar5 = uVar7;
    }
    if (uVar1 == 0) {
      lVar6 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar6 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_1 + 2),(long)(int)uVar1 * 8,uVar5 * 8);
    }
    uVar1 = param_1[1];
    *(long *)(param_1 + 2) = lVar6;
    uVar4 = 1;
    if (0 < (int)uVar8) {
      uVar4 = uVar8;
    }
    *param_1 = uVar4;
    uVar4 = -uVar1;
    if (-1 < (int)uVar1) {
      uVar4 = uVar1;
    }
    if ((long)uVar5 < (long)(int)uVar4) {
      param_1[1] = 0;
    }
    uVar1 = param_2[1];
    uVar4 = -uVar1;
    if (0 < (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 2);
    uVar4 = uVar8;
  }
  lVar2 = *(long *)(param_2 + 2);
  if (uVar7 != 0) {
    if (uVar7 - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if (lVar6 != lVar2 + 8) {
        do {
          uVar3 = ((undefined8 *)(lVar2 + uVar5))[1];
          *(undefined8 *)(lVar6 + uVar5) = *(undefined8 *)(lVar2 + uVar5);
          ((undefined8 *)(lVar6 + uVar5))[1] = uVar3;
          uVar5 = uVar5 + 0x10;
        } while (uVar5 != (uVar7 >> 1) * 0x10);
        if ((uVar8 & 1) != 0) {
          *(undefined8 *)(lVar6 + (uVar7 & 0xfffffffffffffffe) * 8) =
               *(undefined8 *)(lVar2 + (uVar7 & 0xfffffffffffffffe) * 8);
          param_1[1] = uVar4;
          return;
        }
        goto LAB_00104be1;
      }
    }
    do {
      *(undefined8 *)(lVar6 + uVar5 * 8) = *(undefined8 *)(lVar2 + uVar5 * 8);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
  }
LAB_00104be1:
  param_1[1] = uVar4;
  return;
}



void mpz_neg(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == param_2) {
    param_1[1] = -param_1[1];
    return;
  }
  uVar7 = param_2[1];
  uVar3 = *param_1;
  uVar8 = -uVar7;
  if (0 < (int)uVar7) {
    uVar8 = uVar7;
  }
  uVar6 = (ulong)(int)uVar8;
  if ((int)uVar3 < (int)uVar8) {
    uVar4 = 1;
    if (0 < (long)uVar6) {
      uVar4 = uVar6;
    }
    if (uVar3 == 0) {
      lVar5 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar5 = (*(code *)gmp_reallocate_func)
                        (*(undefined8 *)(param_1 + 2),(long)(int)uVar3 * 8,uVar4 * 8);
    }
    uVar7 = param_1[1];
    *(long *)(param_1 + 2) = lVar5;
    uVar3 = 1;
    if (0 < (int)uVar8) {
      uVar3 = uVar8;
    }
    *param_1 = uVar3;
    uVar3 = -uVar7;
    if (-1 < (int)uVar7) {
      uVar3 = uVar7;
    }
    if ((long)uVar4 < (long)(int)uVar3) {
      param_1[1] = 0;
    }
    uVar7 = param_2[1];
  }
  else {
    lVar5 = *(long *)(param_1 + 2);
  }
  lVar1 = *(long *)(param_2 + 2);
  if (uVar6 != 0) {
    if (uVar6 - 1 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (lVar5 != lVar1 + 8) {
        do {
          uVar2 = ((undefined8 *)(lVar1 + uVar4))[1];
          *(undefined8 *)(lVar5 + uVar4) = *(undefined8 *)(lVar1 + uVar4);
          ((undefined8 *)(lVar5 + uVar4))[1] = uVar2;
          uVar4 = uVar4 + 0x10;
        } while (uVar4 != (uVar6 >> 1) * 0x10);
        if ((uVar8 & 1) != 0) {
          *(undefined8 *)(lVar5 + (uVar6 & 0xfffffffffffffffe) * 8) =
               *(undefined8 *)(lVar1 + (uVar6 & 0xfffffffffffffffe) * 8);
          param_1[1] = -uVar7;
          return;
        }
        goto LAB_00104d71;
      }
    }
    do {
      *(undefined8 *)(lVar5 + uVar4 * 8) = *(undefined8 *)(lVar1 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
LAB_00104d71:
  param_1[1] = -uVar7;
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



void mpz_add_ui(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int *piVar14;
  long in_FS_OFFSET;
  int local_58;
  uint uStack_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  uStack_54 = 0;
  local_50 = &dummy_limb_35;
  if (param_3 == 0) {
    lVar10 = (long)param_2[1];
    if (param_2[1] < 0) goto LAB_00105065;
    lVar12 = 0;
LAB_00104feb:
    piVar14 = &local_58;
    lVar9 = (long)*param_1;
    piVar8 = param_2;
    lVar11 = lVar12;
    if (lVar9 <= lVar10) goto LAB_00104f61;
LAB_00104ff7:
    lVar12 = *(long *)(param_1 + 2);
    iVar13 = local_58;
  }
  else {
    local_58 = 0;
    uStack_54 = 1;
    plVar6 = (long *)mpz_realloc(&local_58,1);
    uVar2 = param_2[1];
    *plVar6 = param_3;
    if ((int)(uVar2 ^ uStack_54) < 0) {
LAB_00105065:
      iVar13 = local_58;
      iVar5 = mpz_abs_sub(param_1,param_2,&local_58);
      goto LAB_00105018;
    }
    uVar3 = -uVar2;
    if (0 < (int)uVar2) {
      uVar3 = uVar2;
    }
    uVar2 = -uStack_54;
    if (0 < (int)uStack_54) {
      uVar2 = uStack_54;
    }
    lVar10 = (long)(int)uVar3;
    lVar12 = (long)(int)uVar2;
    if (lVar12 <= lVar10) goto LAB_00104feb;
    lVar9 = (long)*param_1;
    piVar8 = &local_58;
    lVar11 = lVar10;
    lVar10 = lVar12;
    piVar14 = param_2;
    if (lVar12 < lVar9) goto LAB_00104ff7;
LAB_00104f61:
    iVar13 = local_58;
    lVar1 = lVar10 + 1;
    if ((int)lVar9 == 0) {
      lVar12 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar12 = (*(code *)gmp_reallocate_func)(*(undefined8 *)(param_1 + 2),lVar9 << 3,lVar1 * 8);
    }
    iVar5 = param_1[1];
    *(long *)(param_1 + 2) = lVar12;
    *param_1 = (int)lVar1;
    iVar4 = -iVar5;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    if (lVar1 < iVar4) {
      param_1[1] = 0;
    }
  }
  uVar7 = mpn_add(lVar12,*(undefined8 *)(piVar8 + 2),lVar10,*(undefined8 *)(piVar14 + 2),lVar11);
  *(undefined8 *)(lVar12 + lVar10 * 8) = uVar7;
  iVar5 = (int)uVar7 + (int)lVar10;
LAB_00105018:
  if (param_2[1] < 0) {
    iVar5 = -iVar5;
  }
  param_1[1] = iVar5;
  if (iVar13 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00105059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)iVar13 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_add(int *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar3 = *(uint *)(param_3 + 4);
  if ((int)(uVar2 ^ uVar3) < 0) {
    iVar7 = mpz_abs_sub(param_1,param_2,param_3);
    goto LAB_00105153;
  }
  uVar5 = -uVar2;
  if (0 < (int)uVar2) {
    uVar5 = uVar2;
  }
  uVar2 = -uVar3;
  if (0 < (int)uVar3) {
    uVar2 = uVar3;
  }
  lVar12 = (long)(int)uVar5;
  lVar9 = (long)(int)uVar2;
  if (lVar12 < lVar9) {
    lVar11 = (long)*param_1;
    bVar4 = lVar11 <= lVar9;
    lVar10 = lVar9;
    lVar9 = lVar12;
    lVar13 = param_3;
    param_3 = param_2;
    if (bVar4) goto LAB_001051a8;
LAB_00105134:
    lVar12 = *(long *)(param_1 + 2);
  }
  else {
    lVar11 = (long)*param_1;
    lVar10 = lVar12;
    lVar13 = param_2;
    if (lVar12 < lVar11) goto LAB_00105134;
LAB_001051a8:
    lVar1 = lVar10 + 1;
    if ((int)lVar11 == 0) {
      lVar12 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar12 = (*(code *)gmp_reallocate_func)(*(undefined8 *)(param_1 + 2),lVar11 << 3,lVar1 * 8);
    }
    iVar7 = param_1[1];
    *(long *)(param_1 + 2) = lVar12;
    *param_1 = (int)lVar1;
    iVar6 = -iVar7;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (lVar1 < iVar6) {
      param_1[1] = 0;
    }
  }
  uVar8 = mpn_add(lVar12,*(undefined8 *)(lVar13 + 8),lVar10,*(undefined8 *)(param_3 + 8),lVar9);
  *(undefined8 *)(lVar12 + lVar10 * 8) = uVar8;
  iVar7 = (int)uVar8 + (int)lVar10;
LAB_00105153:
  if (*(int *)(param_2 + 4) < 0) {
    iVar7 = -iVar7;
  }
  param_1[1] = iVar7;
  return;
}



void mpz_ui_sub(uint *param_1,long param_2,uint *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_3) {
    uVar9 = param_1[1];
  }
  else {
    uVar9 = param_3[1];
    uVar4 = *param_1;
    uVar10 = -uVar9;
    if (0 < (int)uVar9) {
      uVar10 = uVar9;
    }
    uVar8 = (ulong)(int)uVar10;
    if ((int)uVar4 < (int)uVar10) {
      uVar5 = 1;
      if (0 < (long)uVar8) {
        uVar5 = uVar8;
      }
      if (uVar4 == 0) {
        lVar6 = (*(code *)gmp_allocate_func)();
      }
      else {
        lVar6 = (*(code *)gmp_reallocate_func)
                          (*(undefined8 *)(param_1 + 2),(long)(int)uVar4 * 8,uVar5 * 8);
      }
      uVar9 = param_1[1];
      *(long *)(param_1 + 2) = lVar6;
      uVar4 = 1;
      if (0 < (int)uVar10) {
        uVar4 = uVar10;
      }
      *param_1 = uVar4;
      uVar4 = -uVar9;
      if (-1 < (int)uVar9) {
        uVar4 = uVar9;
      }
      if ((long)uVar5 < (long)(int)uVar4) {
        param_1[1] = 0;
      }
      uVar9 = param_3[1];
    }
    else {
      lVar6 = *(long *)(param_1 + 2);
    }
    lVar1 = *(long *)(param_3 + 2);
    if (uVar8 != 0) {
      if (uVar8 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (lVar6 != lVar1 + 8) {
          do {
            uVar2 = ((undefined8 *)(lVar1 + uVar5))[1];
            *(undefined8 *)(lVar6 + uVar5) = *(undefined8 *)(lVar1 + uVar5);
            ((undefined8 *)(lVar6 + uVar5))[1] = uVar2;
            uVar5 = uVar5 + 0x10;
          } while ((uVar8 >> 1) * 0x10 != uVar5);
          if ((uVar10 & 1) != 0) {
            *(undefined8 *)(lVar6 + (uVar8 & 0xfffffffffffffffe) * 8) =
                 *(undefined8 *)(lVar1 + (uVar8 & 0xfffffffffffffffe) * 8);
          }
          goto LAB_001052c8;
        }
      }
      do {
        *(undefined8 *)(lVar6 + uVar5 * 8) = *(undefined8 *)(lVar1 + uVar5 * 8);
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
    }
  }
LAB_001052c8:
  local_58 = 0;
  param_1[1] = -uVar9;
  local_50 = &dummy_limb_35;
  if (param_2 == 0) {
    mpz_add(param_1,param_1,&local_58);
  }
  else {
    local_58 = 0x100000000;
    plVar7 = (long *)mpz_realloc(&local_58,1);
    iVar3 = (int)local_58;
    *plVar7 = param_2;
    mpz_add(param_1,param_1,&local_58);
    if (iVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001053e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)iVar3 << 3);
        return;
      }
      goto LAB_0010546d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010546d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_sub_ui(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    uVar8 = param_1[1];
  }
  else {
    uVar8 = param_2[1];
    uVar9 = -uVar8;
    if (0 < (int)uVar8) {
      uVar9 = uVar8;
    }
    uVar7 = (ulong)(int)uVar9;
    if (*param_1 < (int)uVar9) {
      lVar5 = mpz_realloc(param_1,uVar7);
      uVar8 = param_2[1];
    }
    else {
      lVar5 = *(long *)(param_1 + 2);
    }
    lVar1 = *(long *)(param_2 + 2);
    if (uVar7 != 0) {
      if (uVar7 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        if (lVar5 != lVar1 + 8) {
          do {
            uVar2 = ((undefined8 *)(lVar1 + uVar4))[1];
            *(undefined8 *)(lVar5 + uVar4) = *(undefined8 *)(lVar1 + uVar4);
            ((undefined8 *)(lVar5 + uVar4))[1] = uVar2;
            uVar4 = uVar4 + 0x10;
          } while (uVar4 != (uVar7 >> 1) * 0x10);
          if ((uVar9 & 1) != 0) {
            *(undefined8 *)(lVar5 + (uVar7 & 0xfffffffffffffffe) * 8) =
                 *(undefined8 *)(lVar1 + (uVar7 & 0xfffffffffffffffe) * 8);
          }
          goto LAB_00105518;
        }
      }
      do {
        *(undefined8 *)(lVar5 + uVar4 * 8) = *(undefined8 *)(lVar1 + uVar4 * 8);
        uVar4 = uVar4 + 1;
      } while (uVar7 != uVar4);
    }
  }
LAB_00105518:
  local_48 = 0;
  param_1[1] = -uVar8;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_add(param_1,param_1,&local_48);
  }
  else {
    local_48 = 0x100000000;
    plVar6 = (long *)mpz_realloc(&local_48,1);
    iVar3 = (int)local_48;
    *plVar6 = param_3;
    mpz_add(param_1,param_1,&local_48);
    if (iVar3 != 0) {
      (*(code *)gmp_free_func)(local_40,(long)iVar3 << 3);
    }
  }
  param_1[1] = -param_1[1];
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void mpz_div_q_2exp_constprop_0(int *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar9;
  ulong uVar10;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar7 = -uVar1;
    if (0 < (int)uVar1) {
      uVar7 = uVar1;
    }
    uVar8 = (ulong)uVar7;
    if ((long)*param_1 < (long)uVar8) {
      puVar4 = (ulong *)mpz_realloc(param_1,uVar8);
    }
    else {
      puVar4 = *(ulong **)(param_1 + 2);
    }
    puVar2 = *(ulong **)(param_2 + 8);
    uVar9 = *puVar2 >> 1;
    puVar6 = puVar4;
    if (uVar8 != 1) {
      lVar5 = 0;
      uVar10 = uVar9;
      do {
        uVar3 = puVar2[lVar5 + 1];
        uVar9 = uVar3 >> 1;
        puVar4[lVar5] = uVar3 << 0x3f | uVar10;
        lVar5 = lVar5 + 1;
        uVar10 = uVar9;
      } while (uVar8 - 1 != lVar5);
      puVar6 = puVar4 + (uVar8 - 1);
    }
    *puVar6 = uVar9;
    param_1[1] = uVar7 - (puVar4[uVar8 - 1] == 0);
    if ((int)uVar1 < 0) {
      mpz_set(param_1,param_1);
      param_1[1] = -param_1[1];
      return;
    }
  }
  return;
}



void mpz_div_q_2exp(int *param_1,long param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar2 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar2 == 0) {
    param_1[1] = 0;
    goto LAB_0010584f;
  }
  uVar14 = param_3 >> 6;
  uVar4 = -uVar2;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  bVar12 = (byte)param_3 & 0x3f;
  uVar13 = uVar4 - uVar14;
  if (param_4 == 0 < (int)uVar2) {
    if (0 < (long)uVar13) {
      for (uVar8 = uVar14; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (*(long *)(*(long *)(param_2 + 8) + -8 + uVar8 * 8) != 0) {
          bVar15 = true;
          goto LAB_00105793;
        }
      }
      bVar15 = (~(-1L << bVar12) & *(ulong *)(*(long *)(param_2 + 8) + uVar14 * 8)) != 0;
      goto LAB_00105793;
    }
    param_1[1] = 0;
LAB_001057fa:
    local_50 = &dummy_limb_35;
    local_58 = _LC43;
    puVar7 = (undefined8 *)mpz_realloc(&local_58,1);
    *puVar7 = 1;
    mpz_add(param_1,param_1,&local_58);
    if ((int)local_58 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
    }
  }
  else if ((long)uVar13 < 1) {
    param_1[1] = 0;
  }
  else {
    bVar15 = false;
LAB_00105793:
    lVar9 = uVar14 * 8;
    if ((long)*param_1 < (long)uVar13) {
      puVar11 = (ulong *)mpz_realloc(param_1,uVar13);
    }
    else {
      puVar11 = *(ulong **)(param_1 + 2);
    }
    lVar3 = *(long *)(param_2 + 8);
    puVar1 = (ulong *)(lVar3 + lVar9);
    if ((param_3 & 0x3f) == 0) {
      if ((long)uVar13 < 4) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (puVar11 != (ulong *)(lVar3 + 8 + lVar9)) {
          lVar6 = 0;
          do {
            uVar5 = ((undefined8 *)((long)puVar1 + lVar6))[1];
            *(undefined8 *)((long)puVar11 + lVar6) = *(undefined8 *)((long)puVar1 + lVar6);
            ((undefined8 *)((long)puVar11 + lVar6))[1] = uVar5;
            lVar6 = lVar6 + 0x10;
          } while (lVar6 != (uVar13 >> 1) * 0x10);
          if ((uVar13 & 1) != 0) {
            puVar11[uVar13 & 0xfffffffffffffffe] =
                 *(ulong *)(lVar3 + (uVar13 & 0xfffffffffffffffe) * 8 + lVar9);
          }
          goto LAB_001057f0;
        }
      }
      do {
        puVar11[lVar6] = puVar1[lVar6];
        lVar6 = lVar6 + 1;
      } while (lVar6 < (long)uVar13);
    }
    else {
      uVar14 = *puVar1 >> bVar12;
      puVar10 = puVar11;
      if (uVar13 != 1) {
        lVar9 = 0;
        do {
          uVar8 = *(ulong *)((long)puVar1 + lVar9 + 8);
          *(ulong *)((long)puVar11 + lVar9) = uVar8 << (0x40 - bVar12 & 0x3f) | uVar14;
          lVar9 = lVar9 + 8;
          uVar14 = uVar8 >> bVar12;
        } while (uVar13 * 8 + -8 != lVar9);
        puVar10 = puVar11 + (uVar13 - 1);
      }
      *puVar10 = uVar14;
      uVar13 = uVar13 - (puVar11[uVar13 - 1] == 0);
    }
LAB_001057f0:
    param_1[1] = (int)uVar13;
    if (bVar15) goto LAB_001057fa;
  }
  if ((int)uVar2 < 0) {
    mpz_set(param_1,param_1);
    param_1[1] = -param_1[1];
  }
LAB_0010584f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



long mpz_make_odd(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 4) < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("r->_mp_size > 0","lib/mini-gmp.c",0xae7,"mpz_make_odd");
  }
  lVar1 = 0;
  uVar3 = **(ulong **)(param_1 + 8);
  if (uVar3 == 0) {
    do {
      lVar1 = lVar1 + 1;
      uVar3 = (*(ulong **)(param_1 + 8))[lVar1];
    } while (uVar3 == 0);
    lVar1 = lVar1 * 0x40;
  }
  iVar2 = 0;
  for (uVar3 = -uVar3 & uVar3; uVar3 < 0x100000000000000; uVar3 = uVar3 << 8) {
    iVar2 = iVar2 + 8;
  }
  for (; -1 < (long)uVar3; uVar3 = uVar3 * 2) {
    iVar2 = iVar2 + 1;
  }
  lVar1 = (ulong)(0x3f - iVar2) + lVar1;
  mpz_div_q_2exp(param_1,param_1,lVar1,2);
  return lVar1;
}



void mpz_sub(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)(param_3 + 4);
  if ((int)(uVar1 ^ uVar2) < 0) {
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = -uVar2;
    if (0 < (int)uVar2) {
      uVar1 = uVar2;
    }
    lVar8 = (long)(int)uVar3;
    lVar11 = (long)(int)uVar1;
    lVar9 = lVar8;
    lVar10 = param_3;
    lVar12 = param_2;
    if (lVar11 <= lVar8) {
      lVar9 = lVar11;
      lVar10 = param_2;
      lVar11 = lVar8;
      lVar12 = param_3;
    }
    iVar5 = *param_1;
    if (lVar11 < iVar5) {
      lVar7 = *(long *)(param_1 + 2);
    }
    else {
      lVar8 = lVar11 + 1;
      if (iVar5 == 0) {
        lVar7 = (*(code *)gmp_allocate_func)();
      }
      else {
        lVar7 = (*(code *)gmp_reallocate_func)
                          (*(undefined8 *)(param_1 + 2),(long)iVar5 << 3,lVar8 * 8);
      }
      iVar5 = param_1[1];
      *(long *)(param_1 + 2) = lVar7;
      *param_1 = (int)lVar8;
      iVar4 = -iVar5;
      if (-1 < iVar5) {
        iVar4 = iVar5;
      }
      if (lVar8 < iVar4) {
        param_1[1] = 0;
      }
    }
    uVar6 = mpn_add(lVar7,*(undefined8 *)(lVar10 + 8),lVar11,*(undefined8 *)(lVar12 + 8),lVar9);
    *(undefined8 *)(lVar7 + lVar11 * 8) = uVar6;
    iVar5 = (int)uVar6 + (int)lVar11;
  }
  else {
    iVar5 = mpz_abs_sub(param_1,param_2,param_3);
  }
  if (*(int *)(param_2 + 4) < 0) {
    iVar5 = -iVar5;
  }
  param_1[1] = iVar5;
  return;
}



undefined8 mpz_div_qr(ulong *param_1,int *param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
  undefined8 local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)(param_4 + 4);
  if (uVar8 == 0) {
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
    uVar12 = 0;
    goto LAB_00105e84;
  }
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar3 = -uVar8;
  if (0 < (int)uVar8) {
    uVar3 = uVar8;
  }
  uVar8 = uVar1 ^ uVar8;
  uVar11 = (ulong)uVar2;
  uVar7 = (ulong)uVar3;
  if (uVar11 < uVar7) {
    if ((param_5 == 1) && (-1 < (int)uVar8)) {
      if (param_2 != (int *)0x0) {
        mpz_sub(param_2,param_3,param_4);
      }
      if (param_1 != (ulong *)0x0) {
        *(int *)((long)param_1 + 4) = 1;
        iVar5 = (int)*param_1;
joined_r0x00105ee6:
        if (iVar5 < 1) {
          puVar6 = (undefined8 *)mpz_realloc(param_1,1);
        }
        else {
          puVar6 = (undefined8 *)param_1[1];
        }
        *puVar6 = 1;
      }
    }
    else if ((param_5 == 0) && ((int)uVar8 < 0)) {
      if (param_2 != (int *)0x0) {
        mpz_add(param_2,param_3,param_4);
      }
      if (param_1 != (ulong *)0x0) {
        *(int *)((long)param_1 + 4) = -1;
        iVar5 = (int)*param_1;
        goto joined_r0x00105ee6;
      }
    }
    else {
      if (param_2 != (int *)0x0) {
        mpz_set(param_2,param_3);
      }
      if (param_1 != (ulong *)0x0) {
        *(int *)((long)param_1 + 4) = 0;
      }
    }
    uVar12 = 1;
    goto LAB_00105e84;
  }
  local_50 = &dummy_limb_35;
  local_58 = 0;
  mpz_set(&local_58,param_3);
  puVar6 = local_50;
  if (param_1 == (ulong *)0x0) {
    mpn_div_qr(0,local_50,uVar11,*(undefined8 *)(param_4 + 8),uVar7);
  }
  else {
    lVar10 = (uVar11 - uVar7) + 1;
    uVar9 = (lVar10 * 0x40 - 1U >> 6) + 1;
    local_68 = uVar9 & 0xffffffff;
    uVar9 = (*(code *)gmp_allocate_func)(uVar9 * 8);
    local_60 = uVar9;
    mpn_div_qr(uVar9,puVar6,uVar11,*(undefined8 *)(param_4 + 8),uVar7);
    if (uVar9 != 0) {
      iVar5 = (int)lVar10 - (uint)(*(long *)((uVar9 - 8) + lVar10 * 8) == 0);
      if ((int)uVar8 < 0) {
        iVar5 = -iVar5;
      }
      local_68 = CONCAT44(iVar5,(undefined4)local_68);
    }
  }
  do {
    if (puVar6[uVar7 - 1] != 0) {
      uVar12 = 1;
      bVar4 = true;
      goto LAB_00105ddd;
    }
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  uVar12 = 0;
  bVar4 = false;
LAB_00105ddd:
  iVar5 = -(int)uVar7;
  if (-1 < (int)uVar1) {
    iVar5 = (int)uVar7;
  }
  local_58 = CONCAT44(iVar5,(int)local_58);
  if ((param_5 == 0) && ((int)uVar8 < 0)) {
    if (uVar7 == 0) {
LAB_00105f7b:
      iVar5 = local_68._4_4_;
      if (param_1 != (ulong *)0x0) goto LAB_00105f86;
LAB_00105fce:
      lVar10 = (long)(int)local_58;
      if (param_2 == (int *)0x0) goto LAB_00105ff7;
    }
    else {
      if (param_1 != (ulong *)0x0) {
        mpz_set(&local_68,&local_68);
        local_68 = CONCAT44(-local_68._4_4_,(undefined4)local_68);
        mpz_add_ui(&local_68,&local_68,1);
        mpz_set(&local_68,&local_68);
        iVar5 = local_68._4_4_;
        if (param_2 != (int *)0x0) {
          mpz_add(&local_58,&local_58,param_4);
        }
        iVar5 = -iVar5;
LAB_00105f86:
        uVar7 = param_1[1];
        uVar11 = CONCAT44(iVar5,(undefined4)local_68);
        local_68 = *param_1;
        param_1[1] = local_60;
        *param_1 = uVar11;
        local_60 = uVar7;
        if ((int)local_68 != 0) {
          (*(code *)gmp_free_func)(uVar7,(long)(int)local_68 * 8);
        }
        goto LAB_00105fce;
      }
      if (param_2 == (int *)0x0) goto LAB_00106090;
      mpz_add(&local_58,&local_58,param_4);
    }
LAB_00105fd8:
    puVar6 = *(undefined8 **)(param_2 + 2);
    lVar10 = (long)*param_2;
    *(undefined8 **)(param_2 + 2) = local_50;
    *(undefined8 *)param_2 = local_58;
    local_50 = puVar6;
  }
  else {
    if (((param_5 == 1 & (byte)~(byte)((int)uVar8 >> 0x1f) >> 7) == 0) || (!bVar4))
    goto LAB_00105f7b;
    if (param_1 != (ulong *)0x0) {
      mpz_add_ui(&local_68,&local_68,1);
      if (param_2 != (int *)0x0) {
        mpz_sub(&local_58,&local_58,param_4);
      }
      iVar5 = local_68._4_4_;
      goto LAB_00105f86;
    }
    if (param_2 != (int *)0x0) {
      mpz_sub(&local_58,&local_58,param_4);
      goto LAB_00105fd8;
    }
LAB_00106090:
    lVar10 = (long)(int)local_58;
  }
LAB_00105ff7:
  if ((int)lVar10 != 0) {
    (*(code *)gmp_free_func)(local_50,lVar10 * 8);
  }
LAB_00105e84:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



undefined8
mpz_div_qr_ui_constprop_0(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_div_qr(param_1,&local_58,param_2,&local_48,param_4);
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_div_qr(param_1,&local_58,param_2,&local_48,param_4);
    (*(code *)gmp_free_func)(plVar1,8);
  }
  uVar2 = 0;
  if (local_58._4_4_ != 0) {
    uVar2 = *local_50;
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mpz_div_qr_constprop_0(int *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  int iVar12;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar5 = *(uint *)(param_3 + 4);
  uVar1 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar1 == 0) {
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
    }
    uVar6 = 0;
    goto LAB_0010634e;
  }
  uVar2 = -uVar1;
  if (0 < (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar3 = -uVar5;
  if (0 < (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar1 ^ uVar5;
  uVar9 = (ulong)uVar3;
  if (uVar2 < uVar9) {
    if ((param_4 == 1) && (-1 < (int)uVar5)) {
      if (param_1 != (int *)0x0) {
        mpz_sub(param_1,param_2,param_3);
      }
    }
    else if ((param_4 == 0) && ((int)uVar5 < 0)) {
      if (param_1 != (int *)0x0) {
        mpz_add(param_1,param_2,param_3);
      }
    }
    else if (param_1 != (int *)0x0) {
      mpz_set(param_1);
    }
    uVar6 = 1;
    goto LAB_0010634e;
  }
  local_50 = &dummy_limb_35;
  local_58 = 0;
  mpz_set();
  puVar10 = local_50;
  mpn_div_qr(0,local_50,(ulong)uVar2,*(undefined8 *)(param_3 + 8),uVar9);
  do {
    if (puVar10[uVar9 - 1] != 0) {
      uVar6 = 1;
      bVar4 = true;
      goto LAB_001062dc;
    }
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  uVar6 = 0;
  bVar4 = false;
LAB_001062dc:
  iVar7 = -(int)uVar9;
  if (-1 < (int)uVar1) {
    iVar7 = (int)uVar9;
  }
  local_58 = CONCAT44(iVar7,(int)local_58);
  if ((param_4 == 0) && ((int)uVar5 < 0)) {
    if (uVar9 == 0) {
LAB_001063c8:
      lVar8 = (long)(int)local_58;
      puVar11 = puVar10;
      iVar12 = (int)local_58;
      if (param_1 == (int *)0x0) goto LAB_001063f6;
    }
    else {
      if (param_1 == (int *)0x0) goto LAB_00106468;
      mpz_add(&local_58,&local_58,param_3);
      puVar11 = local_50;
      iVar12 = (int)local_58;
      iVar7 = (int)((ulong)local_58 >> 0x20);
    }
LAB_001063da:
    puVar10 = *(undefined8 **)(param_1 + 2);
    *(undefined8 **)(param_1 + 2) = puVar11;
    lVar8 = (long)*param_1;
    *(ulong *)param_1 = CONCAT44(iVar7,iVar12);
  }
  else {
    if (((param_4 == 1 & (byte)~(byte)((int)uVar5 >> 0x1f) >> 7) == 0) || (!bVar4))
    goto LAB_001063c8;
    if (param_1 != (int *)0x0) {
      mpz_sub(&local_58,&local_58,param_3);
      puVar11 = local_50;
      iVar12 = (int)local_58;
      iVar7 = local_58._4_4_;
      goto LAB_001063da;
    }
LAB_00106468:
    lVar8 = (long)(int)local_58;
  }
LAB_001063f6:
  if ((int)lVar8 != 0) {
    (*(code *)gmp_free_func)(puVar10,lVar8 * 8);
  }
LAB_0010634e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void mpz_mul_ui(int *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  int local_58;
  uint local_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else {
    local_54 = 1;
    plVar7 = (long *)mpz_realloc(&local_58,1);
    uVar2 = *(uint *)(param_2 + 4);
    *plVar7 = param_3;
    if ((uVar2 == 0) || (local_54 == 0)) {
      param_1[1] = 0;
      iVar10 = local_58;
    }
    else {
      uVar11 = uVar2 ^ local_54;
      uVar5 = -uVar2;
      if (0 < (int)uVar2) {
        uVar5 = uVar2;
      }
      uVar2 = -local_54;
      if (0 < (int)local_54) {
        uVar2 = local_54;
      }
      uVar9 = (ulong)uVar5;
      uVar13 = (ulong)uVar2;
      lVar1 = uVar9 + uVar13;
      lVar12 = (lVar1 * 0x40 - 1U >> 6) + 1;
      lVar8 = (*(code *)gmp_allocate_func)(lVar12 * 8);
      if (uVar9 < uVar13) {
        mpn_mul(lVar8,local_50,uVar13,*(undefined8 *)(param_2 + 8),uVar9);
      }
      else {
        mpn_mul(lVar8,*(undefined8 *)(param_2 + 8),uVar9,local_50,uVar13);
      }
      iVar10 = local_58;
      iVar6 = (int)lVar1 - (uint)(*(long *)(lVar8 + -8 + lVar1 * 8) == 0);
      iVar3 = *param_1;
      *param_1 = (int)lVar12;
      if ((int)uVar11 < 0) {
        iVar6 = -iVar6;
      }
      uVar4 = *(undefined8 *)(param_1 + 2);
      *(long *)(param_1 + 2) = lVar8;
      param_1[1] = iVar6;
      if (iVar3 != 0) {
        (*(code *)gmp_free_func)(uVar4,(long)iVar3 << 3);
      }
    }
    if (iVar10 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)iVar10 << 3);
        return;
      }
      goto LAB_0010663a;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010663a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
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
    uVar12 = (ulong)uVar6;
    uVar11 = (ulong)uVar7;
    lVar1 = uVar12 + uVar11;
    lVar10 = (lVar1 * 0x40 - 1U >> 6) + 1;
    lVar9 = (*(code *)gmp_allocate_func)(lVar10 * 8);
    if (uVar12 < uVar11) {
      mpn_mul(lVar9,*(undefined8 *)(param_3 + 8),uVar11,*(undefined8 *)(param_2 + 8),uVar12);
    }
    else {
      mpn_mul(lVar9,*(undefined8 *)(param_2 + 8),uVar12,*(undefined8 *)(param_3 + 8),uVar11);
    }
    iVar8 = (int)lVar1 - (uint)(*(long *)(lVar9 + -8 + lVar1 * 8) == 0);
    iVar4 = *param_1;
    *param_1 = (int)lVar10;
    if ((int)(uVar2 ^ uVar3) < 0) {
      iVar8 = -iVar8;
    }
    uVar5 = *(undefined8 *)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar9;
    param_1[1] = iVar8;
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00106738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)gmp_free_func)(uVar5,(long)iVar4 << 3);
      return;
    }
  }
  return;
}



void gmp_lucas_step_k_2k(undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  mpz_div_qr_constprop_0(param_2,param_2,param_3,*(uint *)(param_3 + 4) >> 0x1f);
  mpz_mul(param_1,param_1,param_1);
  local_40 = (undefined8 *)(*(code *)gmp_allocate_func)(8);
  *local_40 = 2;
  local_48 = 0x100000001;
  mpz_mul(&local_48,param_2,&local_48);
  mpz_sub(param_1,param_1,&local_48);
  if ((int)local_48 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
  }
  mpz_div_qr_constprop_0(param_1,param_1,param_3,2);
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
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 0) {
    local_40 = &dummy_limb_35;
    local_48 = _LC43;
    plVar2 = (long *)mpz_realloc(&local_48,1);
    *plVar2 = -param_3;
    mpz_mul(param_1,param_2,&local_48);
    if ((int)local_48 != 0) {
      (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    }
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
                    /* WARNING: Could not recover jumptable at 0x00106900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
          return;
        }
        goto LAB_0010698f;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010698f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_mul_2exp(int *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *__s;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  
  uVar11 = *(uint *)(param_2 + 4);
  uVar12 = uVar11;
  if (uVar11 == 0) goto LAB_00106a6f;
  uVar12 = -uVar11;
  if (0 < (int)uVar11) {
    uVar12 = uVar11;
  }
  uVar17 = param_3 >> 6;
  bVar7 = (byte)param_3 & 0x3f;
  uVar18 = (ulong)(int)uVar12;
  lVar16 = uVar18 + uVar17 + (ulong)((param_3 & 0x3f) != 0);
  iVar3 = *param_1;
  if (iVar3 < lVar16) {
    if (iVar3 == 0) {
      __s = (void *)(*(code *)gmp_allocate_func)();
    }
    else {
      __s = (void *)(*(code *)gmp_reallocate_func)
                              (*(undefined8 *)(param_1 + 2),(long)iVar3 * 8,lVar16 * 8);
    }
    iVar3 = param_1[1];
    *(void **)(param_1 + 2) = __s;
    *param_1 = (int)lVar16;
    iVar6 = -iVar3;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    if (lVar16 < iVar6) {
      param_1[1] = 0;
    }
    uVar11 = *(uint *)(param_2 + 4);
  }
  else {
    __s = *(void **)(param_1 + 2);
  }
  lVar4 = *(long *)(param_2 + 8);
  __n = uVar17 * 8;
  uVar9 = uVar18 - 1;
  if ((param_3 & 0x3f) == 0) {
    if (2 < uVar9) {
      lVar10 = lVar4 + -0x10 + uVar18 * 8;
      lVar13 = (uVar17 + uVar18) * 8;
      if (lVar10 != (long)__s + lVar13 + -8) {
        lVar15 = 0;
        do {
          puVar1 = (undefined8 *)(lVar10 + lVar15);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)((long)__s + lVar15 + lVar13 + -0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          lVar15 = lVar15 + -0x10;
        } while ((uVar18 >> 1) * -0x10 != lVar15);
        lVar10 = uVar9 - (uVar18 & 0xfffffffffffffffe);
        if ((uVar12 & 1) != 0) {
          *(undefined8 *)((long)__s + __n + lVar10 * 8) = *(undefined8 *)(lVar4 + lVar10 * 8);
        }
        goto LAB_00106a50;
      }
    }
    do {
      *(undefined8 *)((long)__s + uVar9 * 8 + __n) = *(undefined8 *)(lVar4 + uVar9 * 8);
      bVar20 = uVar9 != 0;
      uVar9 = uVar9 - 1;
    } while (bVar20);
  }
  else {
    uVar14 = *(ulong *)(lVar4 + -8 + uVar18 * 8);
    lVar10 = (long)__s + uVar18 * 8 + __n;
    uVar19 = uVar14 >> (0x40 - bVar7 & 0x3f);
    uVar14 = uVar14 << bVar7;
    if (uVar9 != 0) {
      do {
        uVar5 = *(ulong *)(lVar4 + -8 + uVar9 * 8);
        *(ulong *)((long)__s + uVar9 * 8 + __n) = uVar5 >> (0x40 - bVar7 & 0x3f) | uVar14;
        uVar14 = uVar5 << bVar7;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      lVar10 = lVar10 + uVar18 * -8 + 8;
    }
    *(ulong *)(lVar10 + -8) = uVar14;
    *(ulong *)((long)__s + lVar16 * 8 + -8) = uVar19;
    lVar16 = lVar16 - (ulong)(uVar19 == 0);
  }
LAB_00106a50:
  if (uVar17 != 0) {
    memset(__s,0,__n);
  }
  uVar12 = -(uint)lVar16;
  if (-1 < (int)uVar11) {
    uVar12 = (uint)lVar16;
  }
LAB_00106a6f:
  param_1[1] = uVar12;
  return;
}



void mpz_addmul_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  long in_FS_OFFSET;
  bool bVar17;
  int local_58;
  uint local_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  piVar10 = param_1;
  if (param_3 == 0) {
LAB_00106c46:
    piVar16 = &local_58;
    lVar11 = (long)param_1[1];
    local_54 = 0;
    iVar14 = local_58;
    if (-1 < param_1[1]) {
      lVar15 = 0;
      if (lVar11 < *param_1) {
LAB_00106de2:
        lVar5 = *(long *)(param_1 + 2);
      }
      else {
LAB_00106c6f:
        lVar5 = mpz_realloc(param_1,lVar11 + 1);
      }
      uVar8 = mpn_add(lVar5,*(undefined8 *)(piVar10 + 2),lVar11,*(undefined8 *)(piVar16 + 2),lVar15)
      ;
      *(undefined8 *)(lVar5 + lVar11 * 8) = uVar8;
      iVar4 = (int)uVar8 + (int)lVar11;
      goto LAB_00106e00;
    }
  }
  else {
    local_54 = 1;
    plVar6 = (long *)mpz_realloc(&local_58,1);
    uVar3 = *(uint *)(param_2 + 4);
    *plVar6 = param_3;
    if ((uVar3 == 0) || (local_54 == 0)) goto LAB_00106c46;
    uVar13 = uVar3 ^ local_54;
    uVar1 = -uVar3;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar3 = -local_54;
    if (0 < (int)local_54) {
      uVar3 = local_54;
    }
    uVar9 = (ulong)uVar1;
    uVar12 = (ulong)uVar3;
    lVar11 = uVar9 + uVar12;
    lVar15 = (lVar11 * 0x40 - 1U >> 6) + 1;
    iVar14 = (int)lVar15;
    puVar7 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar15 * 8);
    puVar2 = local_50;
    if (uVar9 < uVar12) {
      mpn_mul(puVar7,local_50,uVar12,*(undefined8 *)(param_2 + 8),uVar9);
    }
    else {
      mpn_mul(puVar7,*(undefined8 *)(param_2 + 8),uVar9,local_50,uVar12);
    }
    local_50 = puVar7;
    uVar3 = (int)lVar11 - (uint)(puVar7[lVar11 + -1] == 0);
    lVar11 = (long)local_58;
    if ((int)uVar13 < 0) {
      uVar3 = -uVar3;
    }
    bVar17 = local_58 != 0;
    local_58 = iVar14;
    local_54 = uVar3;
    if (bVar17) {
      (*(code *)gmp_free_func)(puVar2,lVar11 << 3);
    }
    uVar1 = param_1[1];
    if (-1 < (int)(uVar1 ^ uVar3)) {
      uVar13 = -uVar1;
      if (0 < (int)uVar1) {
        uVar13 = uVar1;
      }
      if ((int)uVar3 < 1) {
        uVar3 = -uVar3;
      }
      lVar15 = (long)(int)uVar13;
      lVar5 = (long)(int)uVar3;
      piVar10 = &local_58;
      lVar11 = lVar5;
      piVar16 = param_1;
      if (lVar5 <= lVar15) {
        piVar10 = param_1;
        lVar11 = lVar15;
        lVar15 = lVar5;
        piVar16 = &local_58;
      }
      if (lVar11 < *param_1) goto LAB_00106de2;
      goto LAB_00106c6f;
    }
  }
  iVar4 = mpz_abs_sub(param_1,param_1,&local_58);
LAB_00106e00:
  if (param_1[1] < 0) {
    iVar4 = -iVar4;
  }
  param_1[1] = iVar4;
  if (iVar14 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)iVar14 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_submul_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  long in_FS_OFFSET;
  bool bVar17;
  int local_58;
  uint local_54;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  piVar10 = param_1;
  if (param_3 == 0) {
LAB_00106f36:
    piVar16 = &local_58;
    local_54 = 0;
    iVar14 = local_58;
    if (param_1[1] < 0) {
      lVar15 = 0;
      lVar11 = (long)-param_1[1];
      if (lVar11 < *param_1) {
LAB_001070ea:
        lVar8 = *(long *)(param_1 + 2);
      }
      else {
LAB_0010717a:
        lVar8 = mpz_realloc(param_1,lVar11 + 1);
      }
      uVar7 = mpn_add(lVar8,*(undefined8 *)(piVar10 + 2),lVar11,*(undefined8 *)(piVar16 + 2),lVar15)
      ;
      *(undefined8 *)(lVar8 + lVar11 * 8) = uVar7;
      iVar3 = (int)uVar7 + (int)lVar11;
      goto LAB_00106f57;
    }
  }
  else {
    local_54 = 1;
    plVar5 = (long *)mpz_realloc(&local_58,1);
    uVar4 = *(uint *)(param_2 + 4);
    *plVar5 = param_3;
    if ((uVar4 == 0) || (local_54 == 0)) goto LAB_00106f36;
    uVar13 = uVar4 ^ local_54;
    uVar1 = -uVar4;
    if (0 < (int)uVar4) {
      uVar1 = uVar4;
    }
    uVar4 = -local_54;
    if (0 < (int)local_54) {
      uVar4 = local_54;
    }
    uVar9 = (ulong)uVar1;
    uVar12 = (ulong)uVar4;
    lVar11 = uVar9 + uVar12;
    lVar15 = (lVar11 * 0x40 - 1U >> 6) + 1;
    iVar14 = (int)lVar15;
    puVar6 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar15 * 8);
    puVar2 = local_50;
    if (uVar9 < uVar12) {
      mpn_mul(puVar6,local_50,uVar12,*(undefined8 *)(param_2 + 8),uVar9);
    }
    else {
      mpn_mul(puVar6,*(undefined8 *)(param_2 + 8),uVar9,local_50,uVar12);
    }
    local_50 = puVar6;
    uVar4 = (int)lVar11 - (uint)(puVar6[lVar11 + -1] == 0);
    lVar11 = (long)local_58;
    if ((int)uVar13 < 0) {
      uVar4 = -uVar4;
    }
    bVar17 = local_58 != 0;
    local_58 = iVar14;
    local_54 = uVar4;
    if (bVar17) {
      (*(code *)gmp_free_func)(puVar2,lVar11 << 3);
    }
    uVar1 = param_1[1];
    if ((int)(uVar1 ^ uVar4) < 0) {
      uVar13 = -uVar1;
      if (0 < (int)uVar1) {
        uVar13 = uVar1;
      }
      if ((int)uVar4 < 1) {
        uVar4 = -uVar4;
      }
      lVar15 = (long)(int)uVar13;
      lVar8 = (long)(int)uVar4;
      piVar10 = &local_58;
      lVar11 = lVar8;
      piVar16 = param_1;
      if (lVar8 <= lVar15) {
        piVar10 = param_1;
        lVar11 = lVar15;
        lVar15 = lVar8;
        piVar16 = &local_58;
      }
      if (lVar11 < *param_1) goto LAB_001070ea;
      goto LAB_0010717a;
    }
  }
  iVar3 = mpz_abs_sub(param_1,param_1,&local_58);
LAB_00106f57:
  if (param_1[1] < 0) {
    iVar3 = -iVar3;
  }
  param_1[1] = iVar3;
  if (iVar14 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)iVar14 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_addmul(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &dummy_limb_35;
  uVar2 = *(uint *)(param_2 + 4);
  local_58 = 0;
  piVar16 = param_1;
  if ((uVar2 == 0) || (uVar1 == 0)) {
    lVar11 = (long)param_1[1];
    iVar12 = 0;
    if (param_1[1] < 0) goto LAB_001073b8;
    iVar12 = 0;
    lVar13 = 0;
    piVar14 = (int *)&local_58;
    if (*param_1 <= lVar11) goto LAB_001073f5;
LAB_0010730d:
    lVar10 = *(long *)(param_1 + 2);
  }
  else {
    uVar3 = -uVar2;
    if (0 < (int)uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = -uVar1;
    if (0 < (int)uVar1) {
      uVar4 = uVar1;
    }
    uVar8 = (ulong)uVar3;
    uVar15 = (ulong)uVar4;
    lVar11 = uVar8 + uVar15;
    lVar13 = (lVar11 * 0x40 - 1U >> 6) + 1;
    iVar12 = (int)lVar13;
    puVar6 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar13 * 8);
    if (uVar8 < uVar15) {
      mpn_mul(puVar6,*(undefined8 *)(param_3 + 8),uVar15,*(undefined8 *)(param_2 + 8),uVar8);
    }
    else {
      mpn_mul(puVar6,*(undefined8 *)(param_2 + 8),uVar8,*(undefined8 *)(param_3 + 8),uVar15);
    }
    uVar9 = (int)lVar11 - (uint)(puVar6[lVar11 + -1] == 0);
    local_50 = puVar6;
    uVar3 = param_1[1];
    uVar4 = -uVar9;
    if (-1 < (int)(uVar2 ^ uVar1)) {
      uVar4 = uVar9;
    }
    local_58 = CONCAT44(uVar4,iVar12);
    if ((int)(uVar3 ^ uVar4) < 0) {
LAB_001073b8:
      iVar5 = mpz_abs_sub(param_1,param_1,&local_58);
      goto LAB_0010732b;
    }
    uVar1 = -uVar3;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar2 = -uVar4;
    if (0 < (int)uVar4) {
      uVar2 = uVar4;
    }
    lVar13 = (long)(int)uVar1;
    lVar10 = (long)(int)uVar2;
    lVar11 = lVar10;
    piVar14 = param_1;
    piVar16 = (int *)&local_58;
    if (lVar10 <= lVar13) {
      piVar14 = (int *)&local_58;
      lVar11 = lVar13;
      lVar13 = lVar10;
      piVar16 = param_1;
    }
    if (lVar11 < *param_1) goto LAB_0010730d;
LAB_001073f5:
    lVar10 = mpz_realloc(param_1,lVar11 + 1);
  }
  uVar7 = mpn_add(lVar10,*(undefined8 *)(piVar16 + 2),lVar11,*(undefined8 *)(piVar14 + 2),lVar13);
  *(undefined8 *)(lVar10 + lVar11 * 8) = uVar7;
  iVar5 = (int)uVar7 + (int)lVar11;
LAB_0010732b:
  if (param_1[1] < 0) {
    iVar5 = -iVar5;
  }
  param_1[1] = iVar5;
  if (iVar12 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)iVar12 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_submul(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &dummy_limb_35;
  uVar2 = *(uint *)(param_2 + 4);
  local_58 = 0;
  piVar16 = param_1;
  if ((uVar2 == 0) || (uVar1 == 0)) {
    iVar12 = 0;
    if (param_1[1] < 0) {
      lVar13 = 0;
      lVar10 = (long)-param_1[1];
      piVar14 = (int *)&local_58;
      iVar12 = 0;
      if (*param_1 <= lVar10) goto LAB_0010760e;
LAB_0010765c:
      lVar11 = *(long *)(param_1 + 2);
      goto LAB_00107660;
    }
  }
  else {
    uVar3 = -uVar2;
    if (0 < (int)uVar2) {
      uVar3 = uVar2;
    }
    uVar4 = -uVar1;
    if (0 < (int)uVar1) {
      uVar4 = uVar1;
    }
    uVar8 = (ulong)uVar3;
    uVar15 = (ulong)uVar4;
    lVar10 = uVar8 + uVar15;
    lVar13 = (lVar10 * 0x40 - 1U >> 6) + 1;
    iVar12 = (int)lVar13;
    puVar6 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar13 * 8);
    if (uVar8 < uVar15) {
      mpn_mul(puVar6,*(undefined8 *)(param_3 + 8),uVar15,*(undefined8 *)(param_2 + 8),uVar8);
    }
    else {
      mpn_mul(puVar6,*(undefined8 *)(param_2 + 8),uVar8,*(undefined8 *)(param_3 + 8),uVar15);
    }
    uVar9 = (int)lVar10 - (uint)(puVar6[lVar10 + -1] == 0);
    local_50 = puVar6;
    uVar3 = param_1[1];
    uVar4 = -uVar9;
    if (-1 < (int)(uVar2 ^ uVar1)) {
      uVar4 = uVar9;
    }
    local_58 = CONCAT44(uVar4,iVar12);
    if ((int)(uVar3 ^ uVar4) < 0) {
      uVar1 = -uVar3;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar2 = -uVar4;
      if (0 < (int)uVar4) {
        uVar2 = uVar4;
      }
      lVar13 = (long)(int)uVar1;
      lVar11 = (long)(int)uVar2;
      lVar10 = lVar11;
      piVar14 = param_1;
      piVar16 = (int *)&local_58;
      if (lVar11 <= lVar13) {
        piVar14 = (int *)&local_58;
        lVar10 = lVar13;
        lVar13 = lVar11;
        piVar16 = param_1;
      }
      if (lVar10 < *param_1) goto LAB_0010765c;
LAB_0010760e:
      lVar11 = mpz_realloc(param_1,lVar10 + 1);
LAB_00107660:
      uVar7 = mpn_add(lVar11,*(undefined8 *)(piVar16 + 2),lVar10,*(undefined8 *)(piVar14 + 2),lVar13
                     );
      *(undefined8 *)(lVar11 + lVar10 * 8) = uVar7;
      iVar5 = (int)uVar7 + (int)lVar10;
      goto LAB_00107559;
    }
  }
  iVar5 = mpz_abs_sub(param_1,param_1,&local_58);
LAB_00107559:
  if (param_1[1] < 0) {
    iVar5 = -iVar5;
  }
  param_1[1] = iVar5;
  if (iVar12 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010759a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)iVar12 << 3);
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



void mpz_cdiv_r(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar2 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar2 == 0) {
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
    }
  }
  else {
    uVar4 = -uVar2;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    uVar5 = -uVar1;
    if (0 < (int)uVar1) {
      uVar5 = uVar1;
    }
    uVar9 = (ulong)uVar5;
    if (uVar4 < uVar9) {
      if ((int)(uVar2 ^ uVar1) < 0) {
        if (param_1 != (int *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            mpz_set();
            return;
          }
          goto LAB_00107955;
        }
      }
      else if (param_1 != (int *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          mpz_sub(param_1,param_2,param_3);
          return;
        }
        goto LAB_00107955;
      }
    }
    else {
      local_58 = 0;
      local_50 = &dummy_limb_35;
      mpz_set();
      puVar10 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar4,*(undefined8 *)(param_3 + 8),uVar9);
      do {
        if (puVar10[uVar9 - 1] != 0) {
          bVar6 = (byte)~(byte)((int)(uVar2 ^ uVar1) >> 0x1f) >> 7;
          goto LAB_00107834;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      bVar6 = 0;
LAB_00107834:
      iVar8 = (int)uVar9;
      if ((int)uVar2 < 0) {
        iVar8 = -(int)uVar9;
      }
      local_58 = CONCAT44(iVar8,(int)local_58);
      iVar7 = (int)local_58;
      if (bVar6 == 0) {
        puVar11 = puVar10;
        iVar3 = (int)local_58;
        if (param_1 != (int *)0x0) {
LAB_0010785c:
          puVar10 = *(undefined8 **)(param_1 + 2);
          iVar7 = *param_1;
          *(undefined8 **)(param_1 + 2) = puVar11;
          *(ulong *)param_1 = CONCAT44(iVar8,iVar3);
        }
      }
      else if (param_1 != (int *)0x0) {
        mpz_sub(&local_58,&local_58,param_3);
        puVar11 = local_50;
        iVar8 = local_58._4_4_;
        iVar3 = (int)local_58;
        goto LAB_0010785c;
      }
      if (iVar7 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001078a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)gmp_free_func)(puVar10,(long)iVar7 * 8);
          return;
        }
        goto LAB_00107955;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107955:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_fdiv_r(void)

{
  mpz_div_qr_constprop_0();
  return;
}



void mpz_tdiv_r(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  uVar1 = *(uint *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_3 + 4);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  if (uVar1 == 0) {
    if (param_1 != (int *)0x0) {
      param_1[1] = 0;
    }
  }
  else {
    uVar4 = -uVar1;
    if (0 < (int)uVar1) {
      uVar4 = uVar1;
    }
    uVar5 = -uVar2;
    if (0 < (int)uVar2) {
      uVar5 = uVar2;
    }
    uVar8 = (ulong)uVar5;
    if (uVar4 < uVar8) {
      if (param_1 != (int *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          mpz_set();
          return;
        }
        goto LAB_00107b05;
      }
    }
    else {
      local_58 = 0;
      local_50 = &dummy_limb_35;
      mpz_set(&local_58);
      puVar9 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar4,*(undefined8 *)(param_3 + 8),uVar8);
      do {
        if (puVar9[uVar8 - 1] != 0) break;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      iVar7 = (int)uVar8;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar8;
      }
      local_58 = CONCAT44(iVar7,(int)local_58);
      iVar6 = (int)local_58;
      if (param_1 != (int *)0x0) {
        puVar3 = *(undefined8 **)(param_1 + 2);
        iVar6 = *param_1;
        *(undefined8 **)(param_1 + 2) = puVar9;
        *(ulong *)param_1 = CONCAT44(iVar7,(int)local_58);
        puVar9 = puVar3;
      }
      if (iVar6 != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)gmp_free_func)(puVar9,(long)iVar6 * 8);
          return;
        }
        goto LAB_00107b05;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107b05:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_mod(void)

{
  mpz_div_qr_constprop_0();
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



undefined8 mpz_divisible_p(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  uVar6 = 1;
  if (uVar1 != 0) {
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar1 = -uVar2;
    if (0 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar6 = 0;
    uVar5 = (ulong)uVar1;
    if (uVar5 <= uVar3) {
      local_48 = 0;
      local_40 = &dummy_limb_35;
      mpz_set(&local_48,param_1);
      puVar4 = local_40;
      mpn_div_qr(0,local_40,(ulong)uVar3,*(undefined8 *)(param_2 + 8),uVar5);
      do {
        if (puVar4[uVar5 - 1] != 0) {
          uVar6 = 0;
          goto LAB_00107c81;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar6 = 1;
LAB_00107c81:
      if ((int)local_48 != 0) {
        (*(code *)gmp_free_func)(puVar4,(long)(int)local_48 * 8);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mpz_congruent_p(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(param_3 + 4) == SUB41((uint)*(int *)(param_3 + 4) >> 0x1f,0)) {
    iVar4 = mpz_cmp();
    bVar12 = iVar4 == 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 4);
    uVar1 = *(uint *)(param_2 + 4);
    local_68 = 0;
    local_60 = &dummy_limb_35;
    if ((int)(uVar3 ^ uVar1) < 0) {
      uVar2 = -uVar3;
      if (0 < (int)uVar3) {
        uVar2 = uVar3;
      }
      uVar3 = -uVar1;
      if (0 < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar11 = (long)(int)uVar2;
      lVar9 = (long)(int)uVar3;
      lVar7 = param_1;
      lVar10 = lVar9;
      if (lVar9 <= lVar11) {
        lVar7 = param_2;
        lVar10 = lVar11;
        param_2 = param_1;
        lVar11 = lVar9;
      }
      puVar5 = (undefined8 *)(*(code *)gmp_allocate_func)((lVar10 + 1) * 8);
      local_68 = CONCAT44(local_68._4_4_,(int)(lVar10 + 1));
      local_60 = puVar5;
      uVar6 = mpn_add(puVar5,*(undefined8 *)(param_2 + 8),lVar10,*(undefined8 *)(lVar7 + 8),lVar11);
      puVar5[lVar10] = uVar6;
      uVar3 = (int)uVar6 + (int)lVar10;
    }
    else {
      uVar3 = mpz_abs_sub(&local_68,param_1,param_2);
    }
    if (*(int *)(param_1 + 4) < 0) {
      uVar3 = -uVar3;
    }
    uVar1 = *(uint *)(param_3 + 4);
    local_68 = CONCAT44(uVar3,(int)local_68);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      gmp_die("mpz_div_qr: Divide by zero.");
    }
    bVar12 = true;
    if (uVar3 != 0) {
      uVar2 = -uVar3;
      if (0 < (int)uVar3) {
        uVar2 = uVar3;
      }
      uVar3 = -uVar1;
      if (0 < (int)uVar1) {
        uVar3 = uVar1;
      }
      bVar12 = false;
      uVar8 = (ulong)uVar3;
      if (uVar8 <= uVar2) {
        local_50 = &dummy_limb_35;
        local_58 = 0;
        mpz_set(&local_58,&local_68);
        puVar5 = local_50;
        mpn_div_qr(0,local_50,(ulong)uVar2,*(undefined8 *)(param_3 + 8),uVar8);
        do {
          if (puVar5[uVar8 - 1] != 0) {
            bVar12 = false;
            goto LAB_00107ed9;
          }
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        bVar12 = true;
LAB_00107ed9:
        if ((int)local_58 != 0) {
          (*(code *)gmp_free_func)(puVar5,(long)(int)local_58 * 8);
        }
      }
    }
    if ((int)local_68 != 0) {
      (*(code *)gmp_free_func)(local_60,(long)(int)local_68 << 3);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_cdiv_qr_ui(undefined8 param_1,int *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_4 == 0) {
    mpz_div_qr(param_1,&local_58,param_3,&local_48,1);
  }
  else {
    plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar3 = param_4;
    local_48 = 0x100000001;
    local_40 = plVar3;
    mpz_div_qr(param_1,&local_58,param_3,&local_48,1);
    (*(code *)gmp_free_func)(plVar3,8);
  }
  uVar4 = 0;
  if (local_58._4_4_ != 0) {
    uVar4 = *local_50;
  }
  iVar1 = (int)local_58;
  if (param_2 != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    iVar1 = *param_2;
    *(undefined8 *)param_2 = local_58;
    *(undefined8 **)(param_2 + 2) = local_50;
    local_50 = puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)iVar1 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_fdiv_qr_ui(undefined8 param_1,int *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_4 == 0) {
    mpz_div_qr(param_1,&local_58,param_3,&local_48,0);
  }
  else {
    plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar3 = param_4;
    local_48 = 0x100000001;
    local_40 = plVar3;
    mpz_div_qr(param_1,&local_58,param_3,&local_48,0);
    (*(code *)gmp_free_func)(plVar3,8);
  }
  uVar4 = 0;
  if (local_58._4_4_ != 0) {
    uVar4 = *local_50;
  }
  iVar1 = (int)local_58;
  if (param_2 != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    iVar1 = *param_2;
    *(undefined8 *)param_2 = local_58;
    *(undefined8 **)(param_2 + 2) = local_50;
    local_50 = puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)iVar1 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_tdiv_qr_ui(undefined8 param_1,int *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_4 == 0) {
    mpz_div_qr(param_1,&local_58,param_3,&local_48,2);
  }
  else {
    plVar3 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar3 = param_4;
    local_48 = 0x100000001;
    local_40 = plVar3;
    mpz_div_qr(param_1,&local_58,param_3,&local_48,2);
    (*(code *)gmp_free_func)(plVar3,8);
  }
  uVar4 = 0;
  if (local_58._4_4_ != 0) {
    uVar4 = *local_50;
  }
  iVar1 = (int)local_58;
  if (param_2 != (int *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 2);
    iVar1 = *param_2;
    *(undefined8 *)param_2 = local_58;
    *(undefined8 **)(param_2 + 2) = local_50;
    local_50 = puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)iVar1 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_cdiv_q_ui(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_div_qr(param_1,&local_58,param_2,&local_48,1);
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_div_qr(param_1,&local_58,param_2,&local_48,1);
    (*(code *)gmp_free_func)(plVar1,8);
  }
  uVar2 = 0;
  if (local_58._4_4_ != 0) {
    uVar2 = *local_50;
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_fdiv_q_ui(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_div_qr(param_1,&local_58,param_2,&local_48,0);
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_div_qr(param_1,&local_58,param_2,&local_48,0);
    (*(code *)gmp_free_func)(plVar1,8);
  }
  uVar2 = 0;
  if (local_58._4_4_ != 0) {
    uVar2 = *local_50;
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_tdiv_q_ui(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_div_qr(param_1,&local_58,param_2,&local_48,2);
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_div_qr(param_1,&local_58,param_2,&local_48,2);
    (*(code *)gmp_free_func)(plVar1,8);
  }
  uVar2 = 0;
  if (local_58._4_4_ != 0) {
    uVar2 = *local_50;
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_cdiv_r_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &dummy_limb_35;
  local_78 = 0;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_3 == 0) {
LAB_00108629:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar6 = (long *)mpz_realloc(&local_68,1);
  iVar11 = local_68;
  uVar1 = *(uint *)(param_2 + 4);
  *plVar6 = param_3;
  if (local_64 == 0) goto LAB_00108629;
  if (uVar1 == 0) {
    uVar12 = 0;
    uVar8 = 0;
    if (local_68 != 0) goto LAB_001086be;
    uVar8 = 0;
    if (param_1 == (int *)0x0) goto LAB_0010872e;
LAB_001086fc:
    puVar10 = *(undefined8 **)(param_1 + 2);
    iVar11 = *param_1;
    *(undefined8 *)param_1 = uVar12;
    *(undefined8 **)(param_1 + 2) = local_70;
    local_70 = puVar10;
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_64;
    if (0 < (int)local_64) {
      uVar3 = local_64;
    }
    uVar5 = uVar1 ^ local_64;
    uVar9 = (ulong)uVar3;
    if (uVar2 < uVar9) {
      if ((int)uVar5 < 0) {
        mpz_set(&local_78,param_2);
      }
      else {
        mpz_sub(&local_78,param_2,&local_68);
      }
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_2);
      puVar10 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_60,uVar9);
      do {
        if (puVar10[uVar9 - 1] != 0) {
          bVar4 = (byte)~(byte)((int)uVar5 >> 0x1f) >> 7;
          goto LAB_001087c5;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      bVar4 = 0;
LAB_001087c5:
      iVar7 = (int)uVar9;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar9;
      }
      local_58 = CONCAT44(iVar7,(undefined4)local_58);
      if (bVar4 != 0) {
        mpz_sub(&local_58,&local_58,&local_68);
        puVar10 = local_50;
        iVar7 = local_58._4_4_;
      }
      local_78 = CONCAT44(iVar7,(undefined4)local_58);
      local_70 = puVar10;
    }
    uVar8 = local_78;
    uVar12 = local_78;
    if (iVar11 != 0) {
LAB_001086be:
      (*(code *)gmp_free_func)(local_60,(long)iVar11 << 3);
      uVar12 = uVar8;
    }
    iVar11 = (int)uVar12;
    uVar8 = 0;
    if ((int)((ulong)uVar12 >> 0x20) != 0) {
      uVar8 = *local_70;
    }
    if (param_1 != (int *)0x0) goto LAB_001086fc;
  }
  if (iVar11 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar11 << 3);
  }
LAB_0010872e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 mpz_fdiv_r_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &dummy_limb_35;
  local_78 = 0;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_3 == 0) {
LAB_001088a9:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar6 = (long *)mpz_realloc(&local_68,1);
  iVar11 = local_68;
  uVar1 = *(uint *)(param_2 + 4);
  *plVar6 = param_3;
  if (local_64 == 0) goto LAB_001088a9;
  if (uVar1 == 0) {
    uVar12 = 0;
    uVar8 = 0;
    if (local_68 != 0) goto LAB_00108940;
    uVar8 = 0;
    if (param_1 == (int *)0x0) goto LAB_001089ae;
LAB_0010897c:
    puVar10 = *(undefined8 **)(param_1 + 2);
    iVar11 = *param_1;
    *(undefined8 *)param_1 = uVar12;
    *(undefined8 **)(param_1 + 2) = local_70;
    local_70 = puVar10;
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_64;
    if (0 < (int)local_64) {
      uVar3 = local_64;
    }
    uVar5 = uVar1 ^ local_64;
    uVar9 = (ulong)uVar3;
    if (uVar2 < uVar9) {
      if ((int)uVar5 < 0) {
        mpz_add(&local_78,param_2,&local_68);
      }
      else {
        mpz_set(&local_78,param_2);
      }
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_2);
      puVar10 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_60,uVar9);
      do {
        if (puVar10[uVar9 - 1] != 0) {
          bVar4 = (byte)((int)uVar5 >> 0x1f) >> 7;
          goto LAB_00108a42;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      bVar4 = 0;
LAB_00108a42:
      iVar7 = (int)uVar9;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar9;
      }
      local_58 = CONCAT44(iVar7,(undefined4)local_58);
      if (bVar4 != 0) {
        mpz_add(&local_58,&local_58,&local_68);
        puVar10 = local_50;
        iVar7 = local_58._4_4_;
      }
      local_78 = CONCAT44(iVar7,(undefined4)local_58);
      local_70 = puVar10;
    }
    uVar8 = local_78;
    uVar12 = local_78;
    if (iVar11 != 0) {
LAB_00108940:
      (*(code *)gmp_free_func)(local_60,(long)iVar11 << 3);
      uVar12 = uVar8;
    }
    iVar11 = (int)uVar12;
    uVar8 = 0;
    if ((int)((ulong)uVar12 >> 0x20) != 0) {
      uVar8 = *local_70;
    }
    if (param_1 != (int *)0x0) goto LAB_0010897c;
  }
  if (iVar11 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar11 << 3);
  }
LAB_001089ae:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8 mpz_tdiv_r_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &dummy_limb_35;
  local_78 = 0;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_3 == 0) {
LAB_00108b29:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar6 = (long *)mpz_realloc(&local_68,1);
  iVar2 = local_68;
  uVar1 = *(uint *)(param_2 + 4);
  *plVar6 = param_3;
  if (local_64 == 0) goto LAB_00108b29;
  if (uVar1 == 0) {
    if (local_68 != 0) {
      iVar9 = 0;
      iVar7 = 0;
      goto LAB_00108bb7;
    }
    if (param_1 == (int *)0x0) {
      uVar10 = 0;
      goto LAB_00108c10;
    }
    iVar9 = 0;
    iVar7 = 0;
    uVar10 = 0;
LAB_00108be0:
    puVar3 = *(undefined8 **)(param_1 + 2);
    param_1[1] = iVar7;
    iVar2 = *param_1;
    *param_1 = iVar9;
    *(undefined8 **)(param_1 + 2) = local_70;
    local_70 = puVar3;
  }
  else {
    uVar4 = -uVar1;
    if (0 < (int)uVar1) {
      uVar4 = uVar1;
    }
    uVar5 = -local_64;
    if (0 < (int)local_64) {
      uVar5 = local_64;
    }
    uVar8 = (ulong)uVar5;
    if (uVar4 < uVar8) {
      mpz_set(&local_78,param_2);
      iVar7 = local_78._4_4_;
      iVar9 = (int)local_78;
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_2);
      puVar3 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar4,local_60,uVar8);
      local_70 = puVar3;
      do {
        if (puVar3[uVar8 - 1] != 0) break;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      iVar7 = (int)uVar8;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar8;
      }
      local_78 = CONCAT44(iVar7,(int)local_58);
      iVar9 = (int)local_58;
    }
    if (iVar2 != 0) {
LAB_00108bb7:
      (*(code *)gmp_free_func)(local_60,(long)iVar2 << 3);
    }
    uVar10 = 0;
    if (iVar7 != 0) {
      uVar10 = *local_70;
    }
    iVar2 = iVar9;
    if (param_1 != (int *)0x0) goto LAB_00108be0;
  }
  if (iVar2 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar2 << 3);
  }
LAB_00108c10:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_cdiv_ui(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &dummy_limb_35;
  local_78 = 0;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_2 == 0) {
LAB_00108d49:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar7 = (long *)mpz_realloc(&local_68,1);
  iVar4 = local_68;
  uVar1 = *(uint *)(param_1 + 4);
  *plVar7 = param_2;
  if (local_64 == 0) goto LAB_00108d49;
  if (uVar1 == 0) {
    if (local_68 == 0) {
      uVar11 = 0;
      goto LAB_00108e18;
    }
    iVar10 = 0;
    iVar8 = 0;
LAB_00108de1:
    (*(code *)gmp_free_func)(local_60,(long)iVar4 << 3);
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_64;
    if (0 < (int)local_64) {
      uVar3 = local_64;
    }
    uVar6 = uVar1 ^ local_64;
    uVar9 = (ulong)uVar3;
    if (uVar2 < uVar9) {
      if ((int)uVar6 < 0) {
        mpz_set(&local_78,param_1);
        iVar8 = local_78._4_4_;
        iVar10 = (int)local_78;
      }
      else {
        mpz_sub(&local_78,param_1,&local_68);
        iVar8 = local_78._4_4_;
        iVar10 = (int)local_78;
      }
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_1);
      puVar12 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_60,uVar9);
      do {
        if (puVar12[uVar9 - 1] != 0) {
          bVar5 = (byte)~(byte)((int)uVar6 >> 0x1f) >> 7;
          goto LAB_00108ea5;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      bVar5 = 0;
LAB_00108ea5:
      iVar8 = (int)uVar9;
      if ((int)uVar1 < 0) {
        iVar8 = -(int)uVar9;
      }
      local_58 = CONCAT44(iVar8,(int)local_58);
      if (bVar5 != 0) {
        mpz_sub(&local_58,&local_58,&local_68);
        puVar12 = local_50;
        iVar8 = local_58._4_4_;
      }
      local_78 = CONCAT44(iVar8,(int)local_58);
      iVar10 = (int)local_58;
      local_70 = puVar12;
    }
    if (iVar4 != 0) goto LAB_00108de1;
  }
  uVar11 = 0;
  if (iVar8 != 0) {
    uVar11 = *local_70;
  }
  if (iVar10 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar10 << 3);
  }
LAB_00108e18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_fdiv_ui(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = &dummy_limb_35;
  local_78 = 0;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_2 == 0) {
LAB_00108f89:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar6 = (long *)mpz_realloc(&local_68,1);
  iVar4 = local_68;
  uVar1 = *(uint *)(param_1 + 4);
  *plVar6 = param_2;
  if (local_64 == 0) goto LAB_00108f89;
  if (uVar1 == 0) {
    if (local_68 == 0) {
      uVar11 = 0;
      goto LAB_00109059;
    }
    iVar10 = 0;
    iVar7 = 0;
LAB_00109022:
    (*(code *)gmp_free_func)(local_60,(long)iVar4 << 3);
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_64;
    if (0 < (int)local_64) {
      uVar3 = local_64;
    }
    uVar5 = uVar1 ^ local_64;
    uVar8 = (ulong)uVar3;
    if (uVar2 < uVar8) {
      if ((int)uVar5 < 0) {
        mpz_add(&local_78,param_1,&local_68);
        iVar7 = local_78._4_4_;
        iVar10 = (int)local_78;
      }
      else {
        mpz_set(&local_78,param_1);
        iVar7 = local_78._4_4_;
        iVar10 = (int)local_78;
      }
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_1);
      puVar12 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_60,uVar8);
      do {
        if (puVar12[uVar8 - 1] != 0) {
          bVar9 = (byte)((int)uVar5 >> 0x1f) >> 7;
          goto LAB_001090e9;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      bVar9 = 0;
LAB_001090e9:
      iVar7 = (int)uVar8;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar8;
      }
      local_58 = CONCAT44(iVar7,(int)local_58);
      if (bVar9 != 0) {
        mpz_add(&local_58,&local_58,&local_68);
        puVar12 = local_50;
        iVar7 = local_58._4_4_;
      }
      local_78 = CONCAT44(iVar7,(int)local_58);
      iVar10 = (int)local_58;
      local_70 = puVar12;
    }
    if (iVar4 != 0) goto LAB_00109022;
  }
  uVar11 = 0;
  if (iVar7 != 0) {
    uVar11 = *local_70;
  }
  if (iVar10 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar10 << 3);
  }
LAB_00109059:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_tdiv_ui(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = &dummy_limb_35;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_2 == 0) {
LAB_001091d8:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar6 = (long *)mpz_realloc(&local_68,1);
  iVar5 = local_68;
  uVar1 = *(uint *)(param_1 + 4);
  *plVar6 = param_2;
  if (local_64 == 0) goto LAB_001091d8;
  if (uVar1 == 0) {
    if (local_68 == 0) {
      uVar10 = 0;
      goto LAB_0010928b;
    }
    iVar9 = 0;
    iVar7 = 0;
LAB_00109254:
    (*(code *)gmp_free_func)(local_60,(long)iVar5 << 3);
  }
  else {
    uVar3 = -uVar1;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar4 = -local_64;
    if (0 < (int)local_64) {
      uVar4 = local_64;
    }
    uVar8 = (ulong)uVar4;
    if (uVar3 < uVar8) {
      mpz_set(&local_78,param_1);
      iVar7 = local_78._4_4_;
      iVar9 = (int)local_78;
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_1);
      puVar2 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar3,local_60,uVar8);
      do {
        if (puVar2[uVar8 - 1] != 0) break;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      iVar7 = (int)uVar8;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar8;
      }
      local_78 = CONCAT44(iVar7,(int)local_58);
      iVar9 = (int)local_58;
      local_70 = puVar2;
    }
    if (iVar5 != 0) goto LAB_00109254;
  }
  uVar10 = 0;
  if (iVar7 != 0) {
    uVar10 = *local_70;
  }
  if (iVar9 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar9 << 3);
  }
LAB_0010928b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_mod_ui(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  int iVar11;
  undefined8 uVar12;
  int local_78;
  uint local_74;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = &dummy_limb_35;
  local_68 = 0;
  local_78 = 0;
  local_70 = &dummy_limb_35;
  if (param_3 == 0) {
LAB_00109399:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_74 = 1;
  plVar6 = (long *)mpz_realloc(&local_78,1);
  iVar11 = local_78;
  uVar1 = *(uint *)(param_2 + 4);
  *plVar6 = param_3;
  if (local_74 == 0) goto LAB_00109399;
  if (uVar1 == 0) {
    uVar12 = 0;
    uVar8 = 0;
    if (local_78 != 0) goto LAB_00109430;
    uVar8 = 0;
    if (param_1 == (int *)0x0) goto LAB_0010949e;
LAB_0010946c:
    puVar10 = *(undefined8 **)(param_1 + 2);
    iVar11 = *param_1;
    *(undefined8 *)param_1 = uVar12;
    *(undefined8 **)(param_1 + 2) = local_60;
    local_60 = puVar10;
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_74;
    if (0 < (int)local_74) {
      uVar3 = local_74;
    }
    uVar5 = uVar1 ^ local_74;
    uVar9 = (ulong)uVar3;
    if (uVar2 < uVar9) {
      if ((int)uVar5 < 0) {
        mpz_add(&local_68,param_2,&local_78);
      }
      else {
        mpz_set(&local_68,param_2);
      }
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_2);
      puVar10 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_70,uVar9);
      do {
        if (puVar10[uVar9 - 1] != 0) {
          bVar4 = (byte)((int)uVar5 >> 0x1f) >> 7;
          goto LAB_00109532;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      bVar4 = 0;
LAB_00109532:
      iVar7 = (int)uVar9;
      if ((int)uVar1 < 0) {
        iVar7 = -(int)uVar9;
      }
      local_58 = CONCAT44(iVar7,(undefined4)local_58);
      if (bVar4 != 0) {
        mpz_add(&local_58,&local_58,&local_78);
        puVar10 = local_50;
        iVar7 = local_58._4_4_;
      }
      local_68 = CONCAT44(iVar7,(undefined4)local_58);
      local_60 = puVar10;
    }
    uVar8 = local_68;
    uVar12 = local_68;
    if (iVar11 != 0) {
LAB_00109430:
      (*(code *)gmp_free_func)(local_70,(long)iVar11 << 3);
      uVar12 = uVar8;
    }
    iVar11 = (int)uVar12;
    uVar8 = 0;
    if ((int)((ulong)uVar12 >> 0x20) != 0) {
      uVar8 = *local_60;
    }
    if (param_1 != (int *)0x0) goto LAB_0010946c;
  }
  if (iVar11 != 0) {
    (*(code *)gmp_free_func)(local_60,(long)iVar11 << 3);
  }
LAB_0010949e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



void mpz_divexact_ui(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_div_qr(param_1,&local_58,param_2,&local_48,2);
  }
  else {
    plVar2 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar2 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar2;
    mpz_div_qr(param_1,&local_58,param_2,&local_48,2);
    (*(code *)gmp_free_func)(plVar2,8);
  }
  if (local_58._4_4_ == 0) {
    if ((int)local_58 != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001096a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
        return;
      }
      goto LAB_0010972a;
    }
  }
  else {
    lVar1 = *local_50;
    if ((int)local_58 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)(int)local_58 << 3);
    }
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0xa5f,"mpz_divexact_ui");
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010972a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mpz_divisible_ui_p(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_78;
  long *local_70;
  int local_68;
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = &dummy_limb_35;
  local_68 = 0;
  local_60 = &dummy_limb_35;
  if (param_2 == 0) {
LAB_00109778:
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_div_qr: Divide by zero.");
  }
  local_64 = 1;
  plVar5 = (long *)mpz_realloc(&local_68,1);
  iVar4 = local_68;
  uVar1 = *(uint *)(param_1 + 4);
  *plVar5 = param_2;
  if (local_64 == 0) goto LAB_00109778;
  if (uVar1 == 0) {
    if (local_68 == 0) {
      bVar9 = true;
      goto LAB_0010983a;
    }
    iVar8 = 0;
    iVar6 = 0;
LAB_001097f8:
    (*(code *)gmp_free_func)(local_60,(long)iVar4 << 3);
  }
  else {
    uVar2 = -uVar1;
    if (0 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = -local_64;
    if (0 < (int)local_64) {
      uVar3 = local_64;
    }
    uVar7 = (ulong)uVar3;
    if (uVar2 < uVar7) {
      mpz_set(&local_78,param_1);
      iVar6 = local_78._4_4_;
      iVar8 = (int)local_78;
    }
    else {
      local_50 = &dummy_limb_35;
      local_58 = 0;
      mpz_set(&local_58,param_1);
      plVar5 = local_50;
      mpn_div_qr(0,local_50,(ulong)uVar2,local_60,uVar7);
      do {
        if (plVar5[uVar7 - 1] != 0) break;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      iVar6 = (int)uVar7;
      if ((int)uVar1 < 0) {
        iVar6 = -(int)uVar7;
      }
      local_78 = CONCAT44(iVar6,(int)local_58);
      iVar8 = (int)local_58;
      local_70 = plVar5;
    }
    if (iVar4 != 0) goto LAB_001097f8;
  }
  bVar9 = true;
  if (iVar6 != 0) {
    bVar9 = *local_70 == 0;
  }
  if (iVar8 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)iVar8 << 3);
  }
LAB_0010983a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mpn_gcd(ulong *param_1,ulong *param_2,long param_3,ulong *param_4,ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  char cVar11;
  ulong uVar12;
  
  if (param_3 < (long)param_5) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("un >= vn","lib/mini-gmp.c",0xa98,"mpn_gcd");
  }
  if ((long)param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vn > 0","lib/mini-gmp.c",0xa99,"mpn_gcd");
  }
  if ((param_4 < param_2 + param_3) && (param_2 < param_4 + param_5)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("!GMP_MPN_OVERLAP_P (up, un, vp, vn)","lib/mini-gmp.c",0xa9a,"mpn_gcd");
  }
  if (param_4[param_5 - 1] == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vp[vn-1] > 0","lib/mini-gmp.c",0xa9b,"mpn_gcd");
  }
  uVar2 = *param_4;
  if ((((uint)*param_2 | (uint)uVar2) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(up[0] | vp[0]) & 1","lib/mini-gmp.c",0xa9c,"mpn_gcd");
  }
  uVar8 = param_5;
  if ((long)param_5 < param_3) {
    mpn_div_qr(0,param_2,param_3,param_4,param_5);
    uVar2 = *param_4;
  }
  while (param_2[uVar8 - 1] == 0) {
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) {
      uVar2 = 0;
      if ((param_5 - 1 < 3) || (param_1 == param_4 + 1)) {
        do {
          param_1[uVar2] = param_4[uVar2];
          uVar2 = uVar2 + 1;
        } while (param_5 != uVar2);
      }
      else {
        lVar3 = 0;
        do {
          uVar1 = ((undefined8 *)((long)param_4 + lVar3))[1];
          *(undefined8 *)((long)param_1 + lVar3) = *(undefined8 *)((long)param_4 + lVar3);
          ((undefined8 *)((long)param_1 + lVar3))[1] = uVar1;
          lVar3 = lVar3 + 0x10;
        } while (lVar3 != (param_5 >> 1) * 0x10);
        if ((param_5 & 1) != 0) {
          param_1[param_5 & 0xfffffffffffffffe] = param_4[param_5 & 0xfffffffffffffffe];
        }
      }
      return param_5;
    }
  }
  uVar12 = uVar8;
  puVar9 = param_2;
  if ((uVar2 & 1) == 0) {
    uVar2 = *param_2;
    uVar12 = param_5;
    puVar9 = param_4;
    param_4 = param_2;
    param_5 = uVar8;
  }
  do {
    if (((long)uVar12 < 2) && ((long)param_5 < 2)) {
      uVar8 = *puVar9;
      uVar12 = uVar8 | uVar2;
      if (uVar12 != 0) {
        uVar4 = uVar2;
        if ((uVar8 != 0) && (uVar4 = uVar8, uVar2 != 0)) {
          cVar11 = '\0';
          for (uVar12 = -uVar12 & uVar12; uVar12 < 0x100000000000000; uVar12 = uVar12 << 8) {
            cVar11 = cVar11 + '\b';
          }
          for (; -1 < (long)uVar12; uVar12 = uVar12 * 2) {
            cVar11 = cVar11 + '\x01';
          }
          bVar5 = 0x3f - cVar11;
          uVar8 = uVar8 >> (bVar5 & 0x3f);
          uVar2 = uVar2 >> (bVar5 & 0x3f);
          uVar12 = uVar8;
          if ((uVar8 & 1) == 0) goto LAB_00109afd;
          while (uVar8 = uVar2, uVar2 = uVar12, (uVar8 & 1) == 0) {
LAB_00109afd:
            uVar12 = uVar2;
            uVar2 = uVar8 >> 1;
          }
          while (uVar2 != uVar8) {
            if (uVar8 < uVar2) {
              uVar2 = uVar2 - uVar8;
              do {
                uVar2 = uVar2 >> 1;
              } while ((uVar2 & 1) == 0);
            }
            else {
              uVar8 = uVar8 - uVar2;
              do {
                uVar8 = uVar8 >> 1;
              } while ((uVar8 & 1) == 0);
            }
          }
          uVar4 = uVar8 << (bVar5 & 0x3f);
        }
        *param_1 = uVar4;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("(u | v) > 0","lib/mini-gmp.c",0xa6f,__PRETTY_FUNCTION___20);
    }
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("vp[0] & 1","lib/mini-gmp.c",0xaae,"mpn_gcd");
    }
    for (; uVar2 = *puVar9, uVar2 == 0; puVar9 = puVar9 + 1) {
      uVar12 = uVar12 - 1;
    }
    uVar2 = -uVar2 & uVar2;
    iVar6 = 0;
    iVar7 = 0;
    if (uVar2 < 0x100000000000000) {
      do {
        uVar2 = uVar2 << 8;
        iVar6 = iVar6 + 8;
        iVar7 = iVar6;
      } while (uVar2 < 0x100000000000000);
      for (; -1 < (long)uVar2; uVar2 = uVar2 * 2) {
LAB_00109a10:
        iVar7 = iVar7 + 1;
      }
      iVar6 = 0x3f - iVar7;
      if (0 < iVar6) goto LAB_00109b40;
      uVar8 = uVar12;
      if ((long)param_5 <= (long)uVar12) goto LAB_00109a30;
LAB_00109b73:
      uVar12 = param_5;
      puVar10 = param_4;
      param_4 = puVar9;
    }
    else {
      iVar6 = 0x3f;
      if (-1 < (long)uVar2) goto LAB_00109a10;
LAB_00109b40:
      lVar3 = mpn_rshift(puVar9,puVar9,uVar12,iVar6);
      if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xab8,"mpn_gcd");
      }
      uVar12 = uVar12 - (puVar9[uVar12 - 1] == 0);
      uVar8 = uVar12;
      if ((long)uVar12 < (long)param_5) goto LAB_00109b73;
LAB_00109a30:
      uVar2 = uVar12;
      puVar10 = puVar9;
      uVar8 = param_5;
      if (uVar12 == param_5) {
        do {
          uVar2 = uVar2 - 1;
          if ((long)uVar2 < 0) {
            if ((long)uVar12 < 1) {
              return uVar12;
            }
            if (uVar12 - 1 < 3) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0;
              if (param_1 != puVar9 + 1) {
                do {
                  uVar1 = ((undefined8 *)((long)puVar9 + uVar2))[1];
                  *(undefined8 *)((long)param_1 + uVar2) = *(undefined8 *)((long)puVar9 + uVar2);
                  ((undefined8 *)((long)param_1 + uVar2))[1] = uVar1;
                  uVar2 = uVar2 + 0x10;
                } while (uVar2 != (uVar12 >> 1) * 0x10);
                if ((uVar12 & 1) == 0) {
                  return uVar12;
                }
                param_1[uVar12 & 0xfffffffffffffffe] = puVar9[uVar12 & 0xfffffffffffffffe];
                return uVar12;
              }
            }
            do {
              param_1[uVar2] = puVar9[uVar2];
              uVar2 = uVar2 + 1;
            } while (uVar12 != uVar2);
            return uVar12;
          }
        } while (puVar9[uVar2] == param_4[uVar2]);
        param_5 = uVar12;
        if (puVar9[uVar2] <= param_4[uVar2]) goto LAB_00109b73;
      }
    }
    lVar3 = mpn_sub(puVar10,puVar10,uVar12,param_4,uVar8);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("__cy == 0","lib/mini-gmp.c",0xaca,"mpn_gcd");
    }
    if (0 < (long)uVar12) {
      do {
        if (puVar10[uVar12 - 1] != 0) break;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    uVar2 = *param_4;
    puVar9 = puVar10;
    param_5 = uVar8;
  } while( true );
}



void mpz_gcd_part_0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = &dummy_limb_35;
  local_50 = &dummy_limb_35;
  uVar5 = *(uint *)(param_2 + 4);
  local_58 = 0;
  uVar1 = -uVar5;
  if (0 < (int)uVar5) {
    uVar1 = uVar5;
  }
  if (uVar5 != 0) {
    uVar7 = (ulong)(int)uVar1;
    local_60 = (undefined8 *)(*(code *)gmp_allocate_func)(uVar7 * 8);
    local_68 = (ulong)uVar1;
    lVar2 = *(long *)(param_2 + 8);
    if (uVar7 - 1 < 3) {
      uVar10 = 0;
LAB_0010a020:
      do {
        local_60[uVar10] = *(undefined8 *)(lVar2 + uVar10 * 8);
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
    else {
      uVar10 = 0;
      if (local_60 == (undefined8 *)(lVar2 + 8)) goto LAB_0010a020;
      do {
        uVar3 = ((undefined8 *)(lVar2 + uVar10))[1];
        *(undefined8 *)((long)local_60 + uVar10) = *(undefined8 *)(lVar2 + uVar10);
        ((undefined8 *)((long)local_60 + uVar10))[1] = uVar3;
        uVar10 = uVar10 + 0x10;
      } while (uVar10 != (uVar7 >> 1) * 0x10);
      if ((uVar1 & 1) != 0) {
        local_60[uVar7 & 0xfffffffffffffffe] =
             *(undefined8 *)(lVar2 + (uVar7 & 0xfffffffffffffffe) * 8);
        uVar1 = *(uint *)(param_2 + 4);
        uVar5 = -uVar1;
        if (0 < (int)uVar1) {
          uVar5 = uVar1;
        }
        goto LAB_00109e9e;
      }
    }
    uVar1 = *(uint *)(param_2 + 4);
    uVar5 = -uVar1;
    if (0 < (int)uVar1) {
      uVar5 = uVar1;
    }
  }
LAB_00109e9e:
  local_68 = CONCAT44(uVar5,(int)local_68);
  uVar7 = mpz_make_odd(&local_68);
  uVar5 = *(uint *)(param_3 + 4);
  uVar1 = -uVar5;
  if (0 < (int)uVar5) {
    uVar1 = uVar5;
  }
  uVar10 = (ulong)(int)uVar1;
  if (uVar5 == 0) goto LAB_00109ecf;
  lVar8 = mpz_realloc(&local_58,uVar10);
  lVar2 = *(long *)(param_3 + 8);
  if (uVar10 - 1 < 3) {
    uVar9 = 0;
LAB_00109fc0:
    do {
      *(undefined8 *)(lVar8 + uVar9 * 8) = *(undefined8 *)(lVar2 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  else {
    uVar9 = 0;
    if (lVar8 == lVar2 + 8) goto LAB_00109fc0;
    do {
      uVar3 = ((undefined8 *)(lVar2 + uVar9))[1];
      *(undefined8 *)(lVar8 + uVar9) = *(undefined8 *)(lVar2 + uVar9);
      ((undefined8 *)(lVar8 + uVar9))[1] = uVar3;
      uVar9 = uVar9 + 0x10;
    } while ((uVar10 >> 1) * 0x10 != uVar9);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(uint *)(param_3 + 4);
      *(undefined8 *)(lVar8 + (uVar10 & 0xfffffffffffffffe) * 8) =
           *(undefined8 *)(lVar2 + (uVar10 & 0xfffffffffffffffe) * 8);
      uVar5 = -uVar1;
      if (0 < (int)uVar1) {
        uVar5 = uVar1;
      }
      goto LAB_00109ecf;
    }
  }
  uVar1 = *(uint *)(param_3 + 4);
  uVar5 = -uVar1;
  if (0 < (int)uVar1) {
    uVar5 = uVar1;
  }
LAB_00109ecf:
  local_58._4_4_ = uVar5;
  uVar10 = mpz_make_odd(&local_58);
  iVar13 = (int)local_68;
  if (uVar7 <= uVar10) {
    uVar10 = uVar7;
  }
  puVar12 = local_50;
  iVar11 = (int)local_58;
  uVar1 = local_68._4_4_;
  uVar5 = local_58._4_4_;
  if ((int)local_68._4_4_ < (int)local_58._4_4_) {
    local_68 = CONCAT44(local_68._4_4_,(int)local_58);
    puVar12 = local_60;
    iVar11 = iVar13;
    iVar13 = (int)local_58;
    uVar1 = local_58._4_4_;
    uVar5 = local_68._4_4_;
    local_60 = local_50;
  }
  puVar4 = local_60;
  uVar6 = mpn_gcd(local_60,local_60,(long)(int)uVar1,puVar12,(long)(int)uVar5);
  local_68 = CONCAT44(uVar6,(int)local_68);
  mpz_mul_2exp(param_1,&local_68,uVar10);
  if (iVar13 != 0) {
    (*(code *)gmp_free_func)(puVar4,(long)iVar13 << 3);
  }
  if (iVar11 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00109f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(puVar12,(long)iVar11 << 3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_gcd_ui(int *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    if (*(int *)(param_2 + 4) != 0) {
      mpz_set(&local_48);
      iVar1 = -local_48._4_4_;
      if (0 < local_48._4_4_) {
        iVar1 = local_48._4_4_;
      }
      local_48 = CONCAT44(iVar1,(int)local_48);
LAB_0010a1b3:
      uVar4 = 0;
      goto LAB_0010a1b5;
    }
    uVar4 = 0;
    puVar2 = &dummy_limb_35;
    if (param_1 == (int *)0x0) goto LAB_0010a1ed;
LAB_0010a1c7:
    local_40 = *(undefined8 **)(param_1 + 2);
    iVar1 = *param_1;
    *(undefined8 **)(param_1 + 2) = puVar2;
    *(undefined8 *)param_1 = local_48;
  }
  else {
    local_48 = 0x100000000;
    plVar3 = (long *)mpz_realloc(&local_48,1);
    iVar1 = *(int *)(param_2 + 4);
    *plVar3 = param_3;
    if (iVar1 == 0) {
      iVar1 = -local_48._4_4_;
      if (0 < local_48._4_4_) {
        iVar1 = local_48._4_4_;
      }
      local_48 = CONCAT44(iVar1,(int)local_48);
    }
    else {
      if (local_48._4_4_ == 0) {
        mpz_set(&local_48,param_2);
        iVar1 = -local_48._4_4_;
        if (0 < local_48._4_4_) {
          iVar1 = local_48._4_4_;
        }
        local_48 = CONCAT44(iVar1,(int)local_48);
      }
      else {
        mpz_gcd_part_0(&local_48,param_2,&local_48);
      }
      iVar1 = local_48._4_4_;
    }
    if (iVar1 == 0) goto LAB_0010a1b3;
    uVar4 = *local_40;
LAB_0010a1b5:
    puVar2 = local_40;
    iVar1 = (int)local_48;
    if (param_1 != (int *)0x0) goto LAB_0010a1c7;
  }
  if (iVar1 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)iVar1 << 3);
  }
LAB_0010a1ed:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void mpz_gcd(int *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_2[1];
  if (uVar8 == 0) {
    if (param_3 == param_1) {
      uVar8 = param_1[1];
      uVar9 = -uVar8;
      if (0 < (int)uVar8) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar8 = param_3[1];
      uVar6 = -uVar8;
      if (0 < (int)uVar8) {
        uVar6 = uVar8;
      }
      uVar7 = (ulong)(int)uVar6;
      if (*param_1 < (int)uVar6) {
        lVar3 = mpz_realloc(param_1,uVar7);
        uVar8 = param_3[1];
        uVar9 = -uVar8;
        if (0 < (int)uVar8) {
          uVar9 = uVar8;
        }
      }
      else {
        lVar3 = *(long *)(param_1 + 2);
        uVar9 = uVar6;
      }
      lVar4 = *(long *)(param_3 + 2);
      if (uVar7 != 0) {
        if (uVar7 - 1 < 3) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
          if (lVar3 != lVar4 + 8) {
            do {
              uVar1 = ((undefined8 *)(lVar4 + uVar2))[1];
              *(undefined8 *)(lVar3 + uVar2) = *(undefined8 *)(lVar4 + uVar2);
              ((undefined8 *)(lVar3 + uVar2))[1] = uVar1;
              uVar2 = uVar2 + 0x10;
            } while ((uVar7 >> 1) * 0x10 != uVar2);
            if ((uVar6 & 1) != 0) {
              *(undefined8 *)(lVar3 + (uVar7 & 0xfffffffffffffffe) * 8) =
                   *(undefined8 *)(lVar4 + (uVar7 & 0xfffffffffffffffe) * 8);
              param_1[1] = uVar9;
              return;
            }
            goto LAB_0010a3c1;
          }
        }
        do {
          *(undefined8 *)(lVar3 + uVar2 * 8) = *(undefined8 *)(lVar4 + uVar2 * 8);
          uVar2 = uVar2 + 1;
        } while (uVar7 != uVar2);
      }
    }
LAB_0010a3c1:
    param_1[1] = uVar9;
    return;
  }
  if (param_3[1] != 0) {
    mpz_gcd_part_0(param_1,param_2);
    return;
  }
  if (param_2 != param_1) {
    uVar9 = -uVar8;
    if (0 < (int)uVar8) {
      uVar9 = uVar8;
    }
    uVar7 = (ulong)(int)uVar9;
    if (*param_1 < (int)uVar9) {
      lVar3 = mpz_realloc(param_1,uVar7);
      lVar4 = *(long *)(param_2 + 2);
      uVar8 = param_2[1];
    }
    else {
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = *(long *)(param_2 + 2);
    }
    if ((int)uVar9 < 4) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      if (lVar3 != lVar4 + 8) {
        do {
          uVar1 = ((undefined8 *)(lVar4 + lVar5))[1];
          *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar4 + lVar5);
          ((undefined8 *)(lVar3 + lVar5))[1] = uVar1;
          lVar5 = lVar5 + 0x10;
        } while ((uVar7 >> 1) * 0x10 != lVar5);
        if ((uVar9 & 1) != 0) {
          *(undefined8 *)(lVar3 + (uVar7 & 0xfffffffffffffffe) * 8) =
               *(undefined8 *)(lVar4 + (uVar7 & 0xfffffffffffffffe) * 8);
        }
        goto LAB_0010a349;
      }
    }
    do {
      *(undefined8 *)(lVar3 + lVar5 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (lVar5 < (long)uVar7);
  }
LAB_0010a349:
  uVar9 = -uVar8;
  if (0 < (int)uVar8) {
    uVar9 = uVar8;
  }
  param_1[1] = uVar9;
  return;
}



void mpz_gcdext(undefined8 *param_1,ulong *param_2,ulong *param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  long local_f0;
  long local_e8;
  ulong *local_e0;
  ulong *local_d8;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  ulong *local_80;
  undefined8 local_78;
  ulong *local_70;
  undefined8 local_68;
  ulong *local_60;
  undefined8 local_58;
  ulong *local_50;
  long local_40;
  
  iVar4 = *(int *)(param_4 + 4);
  iVar19 = *(int *)(param_5 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar4 == 0) {
    mpz_set(param_1,param_5);
    iVar4 = *(int *)((long)param_1 + 4);
    iVar14 = -iVar4;
    if (0 < iVar4) {
      iVar14 = iVar4;
    }
    *(int *)((long)param_1 + 4) = iVar14;
    if (param_2 != (ulong *)0x0) {
      *(int *)((long)param_2 + 4) = 0;
    }
    if (param_3 != (ulong *)0x0) {
      iVar4 = (uint)(0 < iVar19) + (iVar19 >> 0x1f);
      if (iVar4 == -1) {
        *(int *)((long)param_3 + 4) = -1;
        if ((int)*param_3 < 1) {
          puVar11 = (undefined8 *)mpz_realloc(param_3,1);
        }
        else {
          puVar11 = (undefined8 *)param_3[1];
        }
      }
      else {
        if (iVar4 == 0) goto LAB_0010af3a;
        *(int *)((long)param_3 + 4) = 1;
        if ((int)*param_3 < 1) {
          puVar11 = (undefined8 *)mpz_realloc(param_3,1);
        }
        else {
          puVar11 = (undefined8 *)param_3[1];
        }
      }
      *puVar11 = 1;
    }
  }
  else {
    if (iVar19 != 0) {
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
      iVar4 = -local_a8._4_4_;
      if (0 < local_a8._4_4_) {
        iVar4 = local_a8._4_4_;
      }
      local_a8 = CONCAT44(iVar4,(int)local_a8);
      uVar5 = mpz_make_odd(&local_a8);
      mpz_set(&local_98,param_5);
      iVar4 = -local_98._4_4_;
      if (0 < local_98._4_4_) {
        iVar4 = local_98._4_4_;
      }
      local_98 = CONCAT44(iVar4,(undefined4)local_98);
      uVar6 = mpz_make_odd(&local_98);
      puVar11 = local_90;
      uVar1 = local_98;
      uVar9 = uVar6;
      if (uVar5 <= uVar6) {
        uVar9 = uVar5;
      }
      lVar8 = uVar5 - uVar9;
      lVar7 = uVar6 - uVar9;
      local_f0 = param_4;
      local_e8 = param_5;
      local_e0 = param_3;
      local_d8 = param_2;
      if (local_a8._4_4_ < local_98._4_4_) {
        local_90 = local_a0;
        local_98 = local_a8;
        local_a0 = puVar11;
        local_a8 = uVar1;
        lVar8 = uVar6 - uVar9;
        lVar7 = uVar5 - uVar9;
        local_f0 = param_5;
        local_e8 = param_4;
        local_e0 = param_2;
        local_d8 = param_3;
      }
      mpz_div_qr(&local_58,&local_a8,&local_a8,&local_98,2);
      mpz_mul_2exp(&local_58,&local_58,lVar8);
      lVar17 = lVar7 + lVar8;
      mpz_abs_add_bit(&local_78,lVar7);
      if (local_a8._4_4_ < 1) {
        mpz_abs_add_bit(&local_68,lVar8);
      }
      else {
        lVar7 = mpz_make_odd(&local_a8);
        mpz_abs_add_bit(&local_68,lVar8 + lVar7);
        lVar17 = lVar17 + lVar7;
        while( true ) {
          iVar4 = mpz_cmp(&local_a8,&local_98);
          if (iVar4 == 0) break;
          if (iVar4 < 0) {
            mpz_sub(&local_98,&local_98,&local_a8);
            mpz_add(&local_68,&local_68,&local_58);
            mpz_add(&local_88,&local_88,&local_78);
            lVar8 = mpz_make_odd(&local_98);
            mpz_mul_2exp(&local_58,&local_58,lVar8);
            mpz_mul_2exp(&local_78,&local_78,lVar8);
          }
          else {
            mpz_sub(&local_a8,&local_a8,&local_98);
            mpz_add(&local_58,&local_68,&local_58);
            mpz_add(&local_78,&local_88,&local_78);
            lVar8 = mpz_make_odd(&local_a8);
            mpz_mul_2exp(&local_68,&local_68,lVar8);
            mpz_mul_2exp(&local_88,&local_88,lVar8);
          }
          lVar17 = lVar17 + lVar8;
        }
      }
      mpz_mul_2exp(&local_98,&local_98,uVar9);
      mpz_set(&local_88,&local_88);
      uVar16 = -local_88._4_4_;
      local_88 = CONCAT44(uVar16,(int)local_88);
      iVar4 = mpz_div_qr(&local_78,0,local_e8,&local_98,2);
      if (iVar4 != 0) {
LAB_0010b161:
                    /* WARNING: Subroutine does not return */
        mpz_divexact_part_0();
      }
      mpz_set(&local_78,&local_78);
      iVar4 = -local_78._4_4_;
      if (0 < (int)local_78._4_4_) {
        iVar4 = local_78._4_4_;
      }
      local_78 = CONCAT44(iVar4,(int)local_78);
      iVar4 = mpz_div_qr(&local_58,0,local_f0,&local_98,2);
      if (iVar4 != 0) goto LAB_0010b161;
      mpz_set(&local_58,&local_58);
      iVar4 = -local_58._4_4_;
      if (0 < local_58._4_4_) {
        iVar4 = local_58._4_4_;
      }
      local_58 = CONCAT44(iVar4,(int)local_58);
      puVar10 = local_80;
      if (lVar17 != 0) {
        uVar5 = (ulong)uVar16;
        do {
          lVar17 = lVar17 + -1;
          uVar9 = *puVar10;
          if ((((uint)((int)uVar5 != 0) & (uint)uVar9) != 0) ||
             (uVar18 = local_68._4_4_, ((uint)(local_68._4_4_ != 0) & (uint)*local_60) != 0)) {
            mpz_sub(&local_88,&local_88,&local_78);
            mpz_add(&local_68,&local_68,&local_58);
            if (((uint)(local_68._4_4_ != 0) & (uint)*local_60) != 0) {
LAB_0010b12b:
                    /* WARNING: Subroutine does not return */
              __assert_fail("mpz_even_p (t0) && mpz_even_p (s0)","lib/mini-gmp.c",0xbac,"mpz_gcdext"
                           );
            }
            uVar5 = (ulong)local_88._4_4_;
            uVar9 = *local_80;
            puVar10 = local_80;
            uVar18 = local_68._4_4_;
            if (((uint)(local_88._4_4_ != 0) & (uint)uVar9) != 0) goto LAB_0010b12b;
          }
          puVar3 = local_60;
          iVar4 = (int)uVar5;
          if (iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            uVar6 = (ulong)(uint)-iVar4;
            if (0 < iVar4) {
              uVar6 = uVar5;
            }
            if ((long)(int)local_88 < (long)uVar6) {
              if ((int)local_88 == 0) {
                puVar10 = (ulong *)(*(code *)gmp_allocate_func)(uVar6 * 8);
              }
              else {
                puVar10 = (ulong *)(*(code *)gmp_reallocate_func)
                                             (puVar10,(long)(int)local_88 << 3,uVar6 * 8);
              }
              uVar9 = *puVar10 >> 1;
              puVar12 = puVar10;
              local_88 = uVar6;
              local_80 = puVar10;
              if (uVar6 == 1) goto LAB_0010ae9c;
LAB_0010a989:
              lVar8 = 0;
              do {
                lVar7 = lVar8 + 1;
                puVar12[lVar8] = puVar12[lVar7] << 0x3f | uVar9;
                lVar8 = lVar8 + 1;
                uVar9 = puVar12[lVar7] >> 1;
              } while (lVar8 != uVar6 - 1);
              puVar10 = puVar12 + lVar8;
            }
            else {
              uVar9 = uVar9 >> 1;
              puVar12 = puVar10;
              if (uVar6 != 1) goto LAB_0010a989;
LAB_0010ae9c:
              puVar12 = puVar10;
            }
            *puVar10 = uVar9;
            uVar6 = uVar6 - (puVar12[uVar6 - 1] == 0);
            iVar19 = (int)uVar6;
            uVar5 = uVar6 & 0xffffffff;
            puVar10 = puVar12;
            if (iVar4 < 0) {
              uVar16 = -iVar19;
              uVar5 = (ulong)uVar16;
              local_88 = CONCAT44(uVar16,(int)local_88);
            }
            else {
              local_88 = CONCAT44(iVar19,(int)local_88);
            }
          }
          uVar16 = (uint)uVar5;
          iVar4 = 0;
          if (uVar18 != 0) {
            uVar15 = -uVar18;
            if (0 < (int)uVar18) {
              uVar15 = uVar18;
            }
            uVar9 = (ulong)uVar15;
            if ((long)(int)local_68 < (long)uVar9) {
              if ((int)local_68 == 0) {
                local_60 = (ulong *)(*(code *)gmp_allocate_func)(uVar9 * 8);
              }
              else {
                local_60 = (ulong *)(*(code *)gmp_reallocate_func)
                                              (puVar3,(long)(int)local_68 << 3,uVar9 * 8);
              }
              uVar6 = *local_60;
              local_68 = (ulong)uVar15;
              puVar3 = local_60;
            }
            else {
              uVar6 = *puVar3;
            }
            uVar6 = uVar6 >> 1;
            puVar12 = puVar3;
            if (uVar9 != 1) {
              lVar8 = 0;
              do {
                lVar7 = lVar8 + 1;
                puVar3[lVar8] = puVar3[lVar7] << 0x3f | uVar6;
                lVar8 = lVar8 + 1;
                uVar6 = puVar3[lVar7] >> 1;
              } while (lVar8 != uVar9 - 1);
              puVar12 = puVar3 + lVar8;
            }
            *puVar12 = uVar6;
            iVar19 = uVar15 - (puVar3[uVar9 - 1] == 0);
            iVar4 = -iVar19;
            if (-1 < (int)uVar18) {
              iVar4 = iVar19;
            }
          }
          local_68 = CONCAT44(iVar4,(int)local_68);
        } while (lVar17 != 0);
      }
      mpz_add(&local_78,&local_88,&local_78);
      mpz_sub(&local_58,&local_68,&local_58);
      puVar3 = local_60;
      uVar18 = -local_78._4_4_;
      if (0 < (int)local_78._4_4_) {
        uVar18 = local_78._4_4_;
      }
      uVar15 = -uVar16;
      if (0 < (int)uVar16) {
        uVar15 = uVar16;
      }
      lVar8 = (long)(int)uVar15;
      iVar4 = (int)local_78;
      iVar19 = (int)local_58;
      if ((int)uVar18 == lVar8) {
        do {
          bVar20 = lVar8 == 0;
          lVar8 = lVar8 + -1;
          if (bVar20) {
            iVar14 = -local_58._4_4_;
            if (0 < local_58._4_4_) {
              iVar14 = local_58._4_4_;
            }
            iVar13 = -local_68._4_4_;
            if (0 < (int)local_68._4_4_) {
              iVar13 = local_68._4_4_;
            }
            lVar8 = (long)iVar13;
            if (iVar14 == lVar8) goto LAB_0010b095;
            if (lVar8 < iVar14) goto LAB_0010ab76;
            goto LAB_0010ab00;
          }
        } while (puVar10[lVar8] == local_70[lVar8]);
        if (local_70[lVar8] < puVar10[lVar8]) goto LAB_0010ab00;
      }
      else if ((int)uVar18 <= lVar8) {
LAB_0010ab00:
        iVar4 = (int)local_88;
        uVar5 = local_58;
        local_80 = local_70;
        uVar9 = CONCAT44(uVar16,(int)local_88);
        local_88 = local_78;
        local_58 = local_68;
        local_60 = local_50;
        local_50 = puVar3;
        iVar19 = (int)local_68;
        uVar16 = local_78._4_4_;
        local_78 = uVar9;
        local_70 = puVar10;
        local_68 = uVar5;
        goto LAB_0010ab76;
      }
      iVar14 = *(int *)(local_f0 + 4);
      puVar10 = local_70;
      goto joined_r0x0010adcf;
    }
    mpz_set(param_1,param_4);
    iVar19 = *(int *)((long)param_1 + 4);
    iVar14 = -iVar19;
    if (0 < iVar19) {
      iVar14 = iVar19;
    }
    *(int *)((long)param_1 + 4) = iVar14;
    if (param_2 != (ulong *)0x0) {
      iVar4 = (uint)(0 < iVar4) + (iVar4 >> 0x1f);
      if (iVar4 == -1) {
        *(int *)((long)param_2 + 4) = -1;
        if ((int)*param_2 < 1) {
          puVar11 = (undefined8 *)mpz_realloc(param_2,1);
        }
        else {
          puVar11 = (undefined8 *)param_2[1];
        }
      }
      else {
        if (iVar4 == 0) {
          *(int *)((long)param_2 + 4) = 0;
          goto joined_r0x0010b0c1;
        }
        *(int *)((long)param_2 + 4) = 1;
        if ((int)*param_2 < 1) {
          puVar11 = (undefined8 *)mpz_realloc(param_2,1);
        }
        else {
          puVar11 = (undefined8 *)param_2[1];
        }
      }
      *puVar11 = 1;
    }
joined_r0x0010b0c1:
    if (param_3 != (ulong *)0x0) {
LAB_0010af3a:
      *(int *)((long)param_3 + 4) = 0;
    }
  }
  goto LAB_0010af46;
  while( true ) {
    if (local_60[lVar8] != local_50[lVar8]) break;
LAB_0010b095:
    bVar20 = lVar8 == 0;
    lVar8 = lVar8 + -1;
    if (bVar20) goto LAB_0010ab76;
  }
  if (local_50[lVar8] < local_60[lVar8]) goto LAB_0010ab00;
LAB_0010ab76:
  iVar14 = *(int *)(local_f0 + 4);
  puVar10 = local_70;
joined_r0x0010adcf:
  local_70 = puVar10;
  if (iVar14 < 0) {
    mpz_set(&local_88,&local_88);
    iVar14 = *(int *)(local_e8 + 4);
    uVar16 = -local_88._4_4_;
    local_88 = CONCAT44(uVar16,(int)local_88);
  }
  else {
    iVar14 = *(int *)(local_e8 + 4);
  }
  if (iVar14 < 0) {
    mpz_set(&local_68,&local_68);
    local_68 = CONCAT44(-local_68._4_4_,(int)local_68);
  }
  uVar9 = local_68;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  param_1[1] = local_90;
  *param_1 = local_98;
  iVar14 = (int)local_88;
  uVar5 = local_88;
  if (local_d8 != (ulong *)0x0) {
    uVar5 = *local_d8;
    puVar3 = (ulong *)local_d8[1];
    iVar14 = (int)*local_d8;
    local_d8[1] = (ulong)local_80;
    *local_d8 = CONCAT44(uVar16,(int)local_88);
    local_80 = puVar3;
  }
  local_88 = uVar5;
  iVar13 = (int)local_68;
  if (local_e0 != (ulong *)0x0) {
    iVar13 = (int)*local_e0;
    puVar3 = (ulong *)local_e0[1];
    local_68 = CONCAT44(local_68._4_4_,iVar13);
    local_e0[1] = (ulong)local_60;
    *local_e0 = uVar9;
    local_60 = puVar3;
  }
  local_98 = uVar1;
  local_90 = (undefined8 *)uVar2;
  if ((int)local_a8 != 0) {
    (*(code *)gmp_free_func)(local_a0,(long)(int)local_a8 * 8);
  }
  if ((int)uVar1 != 0) {
    (*(code *)gmp_free_func)(uVar2,(long)(int)uVar1 << 3);
  }
  if (iVar14 != 0) {
    (*(code *)gmp_free_func)(local_80,(long)iVar14 << 3);
  }
  if (iVar4 != 0) {
    (*(code *)gmp_free_func)(puVar10,(long)iVar4 << 3);
  }
  if (iVar13 != 0) {
    (*(code *)gmp_free_func)(local_60,(long)iVar13 << 3);
  }
  if (iVar19 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ad13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)gmp_free_func)(local_50,(long)iVar19 << 3);
      return;
    }
    goto LAB_0010b15c;
  }
LAB_0010af46:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010b15c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_lcm(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *(int *)(param_2 + 4);
  if ((*(int *)(param_2 + 4) != 0) && (iVar2 = *(int *)(param_3 + 4), *(int *)(param_3 + 4) != 0)) {
    local_48 = 0;
    local_40 = &dummy_limb_35;
    mpz_gcd_part_0(&local_48);
    iVar2 = mpz_div_qr(&local_48,0,param_2,&local_48,2);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      mpz_divexact_part_0();
    }
    mpz_mul(param_1,&local_48,param_3);
    if ((int)local_48 != 0) {
      (*(code *)gmp_free_func)(local_40,(long)(int)local_48 << 3);
    }
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



void mpz_lcm_ui(long param_1,undefined1 *param_2,ulong param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    iVar3 = 0;
    goto LAB_0010b278;
  }
  iVar3 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) == 0) goto LAB_0010b278;
  local_50 = &dummy_limb_35;
  local_58 = _LC43;
  puVar4 = (ulong *)mpz_realloc(&local_58,1);
  iVar3 = *(int *)(param_2 + 4);
  *puVar4 = param_3;
  puVar6 = &local_58;
  if ((iVar3 == 0) || (puVar6 = (undefined8 *)param_2, local_58._4_4_ == 0)) {
    mpz_set(&local_58,puVar6);
    lVar5 = (long)(int)local_58;
    iVar3 = -local_58._4_4_;
    if (0 < local_58._4_4_) {
      iVar3 = local_58._4_4_;
    }
    if (iVar3 == 0) goto LAB_0010b382;
LAB_0010b303:
    uVar7 = *local_50;
    if ((int)lVar5 != 0) goto LAB_0010b30f;
  }
  else {
    mpz_gcd_part_0(&local_58,param_2,&local_58);
    lVar5 = (long)(int)local_58;
    if (local_58._4_4_ != 0) goto LAB_0010b303;
LAB_0010b382:
    if ((int)lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar7 = 0;
LAB_0010b30f:
    (*(code *)gmp_free_func)(local_50,lVar5 << 3);
  }
  local_58 = 0;
  local_50 = &dummy_limb_35;
  if (param_3 < uVar7) {
    mpz_mul(param_1,param_2,&local_58);
  }
  else {
    local_58 = 0x100000000;
    puVar4 = (ulong *)mpz_realloc(&local_58,1);
    iVar3 = (int)local_58;
    *puVar4 = param_3 / uVar7;
    mpz_mul(param_1,param_2,&local_58);
    if (iVar3 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)iVar3 << 3);
    }
  }
  mpz_set(param_1,param_1);
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = -iVar1;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
LAB_0010b278:
  *(int *)(param_1 + 4) = iVar3;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



int mpz_invert(int *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  ulong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_30;
  
  iVar3 = *(int *)(param_2 + 4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 0) goto LAB_0010b4bc;
  iVar3 = *(int *)(param_3 + 4);
  iVar2 = -iVar3;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 < 2) {
    if (iVar3 == 0) goto LAB_0010b4bc;
    if ((uint)(1 < **(ulong **)(param_3 + 8)) - (uint)(**(ulong **)(param_3 + 8) == 0) != 1) {
      iVar3 = 0;
      goto LAB_0010b4bc;
    }
  }
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_48 = 0;
  local_40 = &dummy_limb_35;
  mpz_gcdext(&local_58,&local_48,0,param_2,param_3);
  if ((local_58._4_4_ == 1) && (1 < *local_50 == (*local_50 == 0))) {
    if (local_48 < 0) {
      if (*(int *)(param_3 + 4) < 0) {
        mpz_sub(&local_48,&local_48,param_3);
      }
      else {
        mpz_add();
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 2);
    iVar2 = *param_1;
    *(undefined8 **)(param_1 + 2) = local_40;
    *(ulong *)param_1 = CONCAT44(local_48._4_4_,(int)local_48);
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
LAB_0010b4bc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_pow_ui(int *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int local_48;
  
  uVar13 = 0x8000000000000000;
  puVar2 = (undefined8 *)(*(code *)gmp_allocate_func)(8);
  local_48 = 1;
  *puVar2 = 1;
  iVar5 = 0x40;
  uVar11 = 1;
  do {
    if (uVar11 == 0) {
      if ((param_3 & uVar13) != 0) {
LAB_0010b6b8:
        uVar11 = 0;
      }
    }
    else {
      uVar9 = -uVar11;
      if (0 < (int)uVar11) {
        uVar9 = uVar11;
      }
      uVar8 = (ulong)uVar9;
      lVar10 = (uVar8 * 0x80 - 1 >> 6) + 1;
      puVar3 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar10 * 8);
      mpn_mul(puVar3,puVar2,uVar8,puVar2,uVar8);
      uVar11 = uVar9 * 2 - (uint)(puVar3[uVar8 * 2 + -1] == 0);
      if (local_48 != 0) {
        (*(code *)gmp_free_func)(puVar2,(long)local_48 << 3);
      }
      local_48 = (int)lVar10;
      puVar2 = puVar3;
      if ((param_3 & uVar13) != 0) {
        uVar9 = *(uint *)(param_2 + 4);
        if ((uVar11 == 0) || (uVar9 == 0)) goto LAB_0010b6b8;
        uVar6 = uVar9 ^ uVar11;
        uVar7 = -uVar11;
        if (0 < (int)uVar11) {
          uVar7 = uVar11;
        }
        uVar11 = -uVar9;
        if (0 < (int)uVar9) {
          uVar11 = uVar9;
        }
        uVar8 = (ulong)uVar7;
        uVar12 = (ulong)uVar11;
        lVar10 = uVar8 + uVar12;
        lVar4 = (lVar10 * 0x40 - 1U >> 6) + 1;
        puVar2 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar4 * 8);
        if (uVar8 < uVar12) {
          mpn_mul(puVar2,*(undefined8 *)(param_2 + 8),uVar12,puVar3,uVar8);
        }
        else {
          mpn_mul(puVar2,puVar3,uVar8,*(undefined8 *)(param_2 + 8),uVar12);
        }
        uVar9 = (int)lVar10 - (uint)(puVar2[lVar10 + -1] == 0);
        uVar11 = -uVar9;
        if (-1 < (int)uVar6) {
          uVar11 = uVar9;
        }
        if (local_48 != 0) {
          (*(code *)gmp_free_func)(puVar3,(long)local_48 << 3);
        }
        local_48 = (int)lVar4;
      }
    }
    iVar5 = iVar5 + -1;
    uVar13 = uVar13 >> 1;
    if (iVar5 == 0) {
      iVar5 = *param_1;
      uVar1 = *(undefined8 *)(param_1 + 2);
      *param_1 = local_48;
      *(undefined8 **)(param_1 + 2) = puVar2;
      param_1[1] = uVar11;
      if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0010b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(uVar1,(long)iVar5 * 8);
        return;
      }
      return;
    }
  } while( true );
}



void mpz_ui_pow_ui(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_2 == 0) {
    mpz_pow_ui(param_1,&local_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_2;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_pow_ui(param_1,&local_48,param_3);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)gmp_free_func)(plVar1,8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_powm(int *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  long local_c8;
  long local_a0;
  int local_88 [8];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  iVar15 = *(int *)(param_3 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(param_4 + 4);
  iVar16 = -iVar1;
  if (0 < iVar1) {
    iVar16 = iVar1;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_powm: Zero modulo.");
  }
  if (iVar15 == 0) {
    lVar9 = 1;
    if ((iVar16 == 1) &&
       (lVar9 = (long)(int)((uint)(1 < **(ulong **)(param_4 + 8)) -
                           (uint)(**(ulong **)(param_4 + 8) == 0)), lVar9 == 0)) {
      param_1[1] = 0;
    }
    else {
      param_1[1] = 1;
      if (*param_1 < 1) {
        plVar7 = (long *)mpz_realloc(param_1,1);
      }
      else {
        plVar7 = *(long **)(param_1 + 2);
      }
      *plVar7 = lVar9;
    }
  }
  else {
    uVar17 = (ulong)iVar16;
    local_c8 = *(long *)(param_4 + 8);
    mpn_div_qr_invert(local_88,local_c8,uVar17);
    iVar1 = local_88[0];
    if (local_88[0] == 0) {
      local_a0 = 0;
      iVar3 = iVar15;
    }
    else {
      local_88[0] = 0;
      local_a0 = (*(code *)gmp_allocate_func)(uVar17 * 8);
      lVar9 = mpn_lshift(local_a0,local_c8,uVar17,iVar1);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc5b,__PRETTY_FUNCTION___17);
      }
      iVar3 = *(int *)(param_3 + 4);
      local_c8 = local_a0;
    }
    local_58 = 0;
    local_50 = &dummy_limb_35;
    if (iVar3 < 0) {
      iVar3 = mpz_invert(&local_58,param_2,param_4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        gmp_die("mpz_powm: Negative exponent and non-invertible base.");
      }
    }
    else {
      mpz_set(&local_58,param_2);
      iVar3 = -local_58._4_4_;
      if (0 < local_58._4_4_) {
        iVar3 = local_58._4_4_;
      }
      local_58 = CONCAT44(iVar3,(int)local_58);
      uVar18 = (ulong)iVar3;
      if ((long)uVar17 <= (long)uVar18) {
        mpn_div_qr_preinv_constprop_0(local_50,uVar18,local_c8,uVar17,local_88);
        puVar4 = local_50;
        uVar18 = uVar17;
        iVar3 = (int)local_58;
        if (-1 < *(int *)(param_2 + 4)) goto LAB_0010bada;
LAB_0010be46:
        puVar4 = local_50;
        if (iVar3 < iVar16) {
          puVar4 = (undefined8 *)mpz_realloc(&local_58,uVar17);
        }
        lVar9 = mpn_sub(puVar4,local_c8,uVar17,puVar4,uVar18);
        puVar4 = local_50;
        uVar18 = uVar17;
        if (lVar9 == 0) goto LAB_0010bada;
                    /* WARNING: Subroutine does not return */
        __assert_fail("__cy == 0","lib/mini-gmp.c",0xc78,__PRETTY_FUNCTION___17);
      }
      iVar3 = (int)local_58;
      puVar4 = local_50;
      if (*(int *)(param_2 + 4) < 0) goto LAB_0010be46;
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
LAB_0010bada:
        if (puVar4[uVar18 - 1] != 0) goto LAB_0010bae2;
      }
      uVar18 = 0;
LAB_0010bae2:
      local_58 = CONCAT44((int)uVar18,(int)local_58);
    }
    local_60 = &dummy_limb_35;
    local_68 = _LC43;
    puVar4 = (undefined8 *)mpz_realloc(&local_68,1);
    iVar3 = -iVar15;
    if (0 < iVar15) {
      iVar3 = iVar15;
    }
    *puVar4 = 1;
    lVar9 = (long)(iVar3 + -1);
    uVar14 = local_68._4_4_;
    do {
      uVar6 = (ulong)uVar14;
      iVar15 = 0x40;
      uVar10 = 0x8000000000000000;
      uVar18 = *(ulong *)(*(long *)(param_3 + 8) + lVar9 * 8);
      do {
        while( true ) {
          uVar11 = uVar18 & uVar10;
          uVar14 = (uint)uVar6;
          if (uVar14 != 0) break;
          if (uVar11 != 0) goto LAB_0010bc6e;
LAB_0010bc4b:
          uVar14 = (uint)uVar6;
          uVar10 = uVar10 >> 1;
          iVar15 = iVar15 + -1;
          if (iVar15 == 0) goto LAB_0010bcf0;
        }
        uVar8 = -uVar14;
        if (0 < (int)uVar14) {
          uVar8 = uVar14;
        }
        uVar6 = (ulong)uVar8;
        lVar13 = (uVar6 * 0x80 - 1 >> 6) + 1;
        puVar5 = (undefined8 *)(*(code *)gmp_allocate_func)(lVar13 * 8);
        puVar4 = local_60;
        mpn_mul(puVar5,local_60,uVar6,local_60,uVar6);
        lVar12 = (long)(int)local_68;
        uVar14 = uVar8 * 2 - (uint)(puVar5[uVar6 * 2 + -1] == 0);
        uVar2 = CONCAT44(uVar14,(int)lVar13);
        bVar19 = (int)local_68 != 0;
        local_68 = uVar2;
        local_60 = puVar5;
        if (bVar19) {
          (*(code *)gmp_free_func)(puVar4,lVar12 << 3);
        }
        puVar4 = local_60;
        if (uVar11 != 0) {
LAB_0010bc6e:
          mpz_mul(&local_68,&local_68,&local_58);
          uVar14 = local_68._4_4_;
          puVar4 = local_60;
        }
        uVar6 = (ulong)uVar14;
        local_60 = puVar4;
        if ((int)uVar14 <= iVar16) goto LAB_0010bc4b;
        mpn_div_qr_preinv_constprop_0(puVar4,(long)(int)uVar14,local_c8,uVar17,local_88);
        uVar6 = uVar17;
        do {
          if (puVar4[uVar6 - 1] != 0) {
            uVar6 = uVar6 & 0xffffffff;
            goto LAB_0010bcd5;
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        uVar6 = 0;
LAB_0010bcd5:
        uVar14 = (uint)uVar6;
        local_68 = CONCAT44(uVar14,(int)local_68);
        uVar10 = uVar10 >> 1;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
LAB_0010bcf0:
      puVar4 = local_60;
      bVar19 = lVar9 != 0;
      lVar9 = lVar9 + -1;
    } while (bVar19);
    if (iVar16 <= (int)uVar14) {
      local_88[0] = iVar1;
      mpn_div_qr_preinv_constprop_0(local_60,(long)(int)uVar14,local_c8,uVar17,local_88);
      uVar18 = uVar17;
      do {
        if (puVar4[uVar18 - 1] != 0) {
          uVar14 = (uint)uVar18;
          goto LAB_0010bd1d;
        }
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      uVar14 = 0;
    }
LAB_0010bd1d:
    if (local_a0 != 0) {
      (*(code *)gmp_free_func)(local_a0,uVar17 << 3);
    }
    iVar15 = *param_1;
    uVar2 = *(undefined8 *)(param_1 + 2);
    *(undefined8 **)(param_1 + 2) = puVar4;
    *(ulong *)param_1 = CONCAT44(uVar14,(int)local_68);
    if (iVar15 != 0) {
      (*(code *)gmp_free_func)(uVar2,(long)iVar15 * 8);
    }
    if ((int)local_58 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010bdb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
        return;
      }
      goto LAB_0010bec9;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bec9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
gmp_millerrabin(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("k > 0","lib/mini-gmp.c",0xe0d,"gmp_millerrabin");
  }
  mpz_powm(param_3,param_3,param_4,param_1);
  if ((*(int *)(param_3 + 4) != 1) ||
     (1 < **(ulong **)(param_3 + 8) != (**(ulong **)(param_3 + 8) == 0))) {
    param_5 = param_5 + -1;
    iVar1 = mpz_cmp(param_3,param_2);
    if (iVar1 != 0) {
      for (; param_5 != 0; param_5 = param_5 + -1) {
        puVar2 = (undefined8 *)(*(code *)gmp_allocate_func)(8);
        *puVar2 = 2;
        local_58 = 0x100000001;
        local_50 = puVar2;
        mpz_powm(param_3,param_3,&local_58,param_1);
        (*(code *)gmp_free_func)(puVar2,8);
        lVar3 = (long)*(int *)(param_3 + 4);
        if (lVar3 == *(int *)(param_2 + 4)) {
          if (lVar3 < 0) {
            lVar3 = -lVar3;
            do {
              bVar5 = lVar3 == 0;
              lVar3 = lVar3 + -1;
              if (bVar5) goto LAB_0010bff0;
            } while (*(long *)(*(long *)(param_2 + 8) + lVar3 * 8) ==
                     *(long *)(*(long *)(param_3 + 8) + lVar3 * 8));
          }
          else {
            do {
              bVar5 = lVar3 == 0;
              lVar3 = lVar3 + -1;
              if (bVar5) goto LAB_0010bff0;
            } while (*(long *)(*(long *)(param_3 + 8) + lVar3 * 8) ==
                     *(long *)(*(long *)(param_2 + 8) + lVar3 * 8));
          }
        }
      }
      uVar4 = 0;
      goto LAB_0010bff5;
    }
  }
LAB_0010bff0:
  uVar4 = 1;
LAB_0010bff5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_powm_ui(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &dummy_limb_35;
  if (param_3 == 0) {
    mpz_powm(param_1,param_2,&local_48);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    plVar1 = (long *)(*(code *)gmp_allocate_func)(8);
    *plVar1 = param_3;
    local_48 = 0x100000001;
    local_40 = plVar1;
    mpz_powm(param_1,param_2,&local_48,param_4);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)gmp_free_func)(plVar1,8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_rootrem(int *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  bool bVar15;
  int local_bc;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  long *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar10 = *(int *)(param_3 + 4);
  if ((~param_4 & (ulong)(long)iVar10 >> 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Negative argument, with even root.");
  }
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    gmp_die("mpz_rootrem: Zeroth root.");
  }
  iVar13 = -iVar10;
  if (0 < iVar10) {
    iVar13 = iVar10;
  }
  if (iVar13 < 2) {
    if ((iVar10 != 0) &&
       (puVar11 = *(ulong **)(param_3 + 8), (uint)(1 < *puVar11) - (uint)(*puVar11 == 0) == 1))
    goto LAB_0010c214;
    if (param_1 != (int *)0x0) {
      mpz_set(param_1,param_3);
    }
    if (param_2 != 0) {
      *(undefined4 *)(param_2 + 4) = 0;
    }
  }
  else {
    puVar11 = *(ulong **)(param_3 + 8);
LAB_0010c214:
    local_70 = &dummy_limb_35;
    local_78 = 0;
    local_80 = &dummy_limb_35;
    local_88 = 0;
    uVar4 = puVar11[(long)iVar13 + -1];
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
    uVar5 = ((long)(iVar13 + -1) * 0x40 + 0x3f) - uVar5;
    mpz_abs_add_bit(&local_88,uVar5 / param_4 + 1,uVar5 % param_4);
    if (param_4 == 2) {
      puVar9 = &dummy_limb_35;
      iVar10 = 0;
      iVar13 = 0;
      do {
        while( true ) {
          iVar14 = local_88._4_4_;
          puVar12 = local_80;
          local_bc = (int)local_88;
          local_88 = CONCAT44(iVar10,iVar13);
          local_78 = CONCAT44(iVar14,local_bc);
          local_80 = puVar9;
          local_70 = puVar12;
          mpz_div_qr(&local_88,0,param_3,&local_78,2);
          mpz_add(&local_88,&local_88,&local_78);
          mpz_div_q_2exp_constprop_0(&local_88,&local_88);
          iVar3 = -iVar14;
          if (0 < iVar14) {
            iVar3 = iVar14;
          }
          iVar10 = -local_88._4_4_;
          if (0 < local_88._4_4_) {
            iVar10 = local_88._4_4_;
          }
          lVar8 = (long)iVar10;
          puVar9 = puVar12;
          iVar10 = iVar14;
          iVar13 = local_bc;
          if (iVar3 == lVar8) break;
          if (iVar3 <= lVar8) goto LAB_0010c3e0;
        }
        do {
          bVar15 = lVar8 == 0;
          lVar8 = lVar8 + -1;
          if (bVar15) goto LAB_0010c3e0;
        } while (local_80[lVar8] == puVar12[lVar8]);
      } while ((ulong)local_80[lVar8] <= (ulong)puVar12[lVar8]);
    }
    else {
      local_68 = 0;
      local_60 = &dummy_limb_35;
      iVar13 = local_88._4_4_;
      if (iVar10 < 0) {
        mpz_set(&local_88);
        iVar13 = -local_88._4_4_;
      }
      lVar8 = param_4 - 1;
      puVar9 = &dummy_limb_35;
      iVar10 = 0;
      iVar3 = 0;
      do {
        while( true ) {
          iVar14 = iVar13;
          puVar12 = local_80;
          iVar2 = (int)local_88;
          local_bc = (int)local_88;
          local_78 = CONCAT44(iVar14,(int)local_88);
          local_88 = CONCAT44(iVar10,iVar3);
          local_80 = puVar9;
          local_70 = puVar12;
          mpz_pow_ui(&local_88,&local_78,lVar8);
          mpz_div_qr(&local_88,0,param_3,&local_88,2);
          local_58 = 0;
          local_50 = &dummy_limb_35;
          if (lVar8 == 0) {
            mpz_mul(&local_68,&local_78,&local_58);
          }
          else {
            plVar7 = (long *)(*(code *)gmp_allocate_func)(8);
            *plVar7 = lVar8;
            local_58 = 0x100000001;
            local_50 = plVar7;
            mpz_mul(&local_68,&local_78,&local_58);
            (*(code *)gmp_free_func)(plVar7,8);
          }
          mpz_add(&local_88,&local_88,&local_68);
          mpz_div_qr_ui_constprop_0(&local_88,&local_88,param_4,2);
          iVar1 = -iVar14;
          if (0 < iVar14) {
            iVar1 = iVar14;
          }
          iVar10 = -local_88._4_4_;
          if (0 < local_88._4_4_) {
            iVar10 = local_88._4_4_;
          }
          lVar6 = (long)iVar10;
          puVar9 = puVar12;
          iVar13 = local_88._4_4_;
          iVar10 = iVar14;
          iVar3 = iVar2;
          if (iVar1 != lVar6) break;
          do {
            bVar15 = lVar6 == 0;
            lVar6 = lVar6 + -1;
            if (bVar15) goto LAB_0010c3bf;
          } while (local_80[lVar6] == puVar12[lVar6]);
          if ((ulong)puVar12[lVar6] < (ulong)local_80[lVar6]) goto LAB_0010c3bf;
        }
      } while (lVar6 < iVar1);
LAB_0010c3bf:
      if ((int)local_68 != 0) {
        (*(code *)gmp_free_func)(local_60,(long)(int)local_68 * 8);
      }
    }
LAB_0010c3e0:
    if (param_2 != 0) {
      mpz_pow_ui(&local_88,&local_78,param_4);
      mpz_sub(param_2,param_3,&local_88);
    }
    if (param_1 != (int *)0x0) {
      iVar10 = *param_1;
      local_70 = *(undefined8 **)(param_1 + 2);
      param_1[1] = iVar14;
      *(undefined8 **)(param_1 + 2) = puVar12;
      local_78 = CONCAT44(local_78._4_4_,iVar10);
      *param_1 = local_bc;
      puVar12 = local_70;
      local_bc = iVar10;
    }
    if (local_bc != 0) {
      (*(code *)gmp_free_func)(puVar12,(long)local_bc * 8);
    }
    if ((int)local_88 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)gmp_free_func)(local_80,(long)(int)local_88 * 8);
        return;
      }
      goto LAB_0010c6cd;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010c6cd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool mpz_root(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined8 local_28;
  undefined8 *local_20;
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



bool mpz_perfect_square_p(long param_1)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined8 local_28;
  undefined8 *local_20;
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



bool mpn_perfect_square_p(long param_1,long param_2)

{
  long in_FS_OFFSET;
  bool bVar1;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  undefined8 *local_20;
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



ulong mpn_sqrtrem(long param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
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
  local_58 = 0;
  local_50 = &dummy_limb_35;
  local_38 = 0;
  local_30 = param_3;
  mpz_rootrem(&local_58,&local_48,&local_38,2);
  uVar5 = (ulong)local_58._4_4_;
  if (uVar5 != param_4 + 1 >> 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("s->_mp_size == (n+1)/2","lib/mini-gmp.c",0xd27,"mpn_sqrtrem");
  }
  uVar4 = uVar5 - 1;
  if (uVar4 < 3) {
LAB_0010ca00:
    do {
      *(undefined8 *)(param_1 + uVar4 * 8) = local_50[uVar4];
      bVar7 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar7);
  }
  else {
    if (local_50 + (uVar5 - 2) == (undefined8 *)(param_1 + -8 + uVar5 * 8)) goto LAB_0010ca00;
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)((long)(local_50 + (uVar5 - 2)) + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(uVar5 * 8 + -0x10 + param_1 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      lVar6 = lVar6 + -0x10;
    } while ((uVar5 >> 1) * -0x10 != lVar6);
    lVar6 = uVar4 - (uVar5 & 0xfffffffffffffffe);
    if ((local_58 & 0x100000000) != 0) {
      *(undefined8 *)(param_1 + lVar6 * 8) = local_50[lVar6];
    }
  }
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
  }
  uVar5 = (ulong)local_48._4_4_;
  if ((param_2 != 0) && (uVar4 = uVar5 - 1, -1 < (long)uVar4)) {
    if (2 < uVar4) {
      if (local_40 + (uVar5 - 2) != (undefined8 *)(param_2 + -8 + uVar5 * 8)) {
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)((long)(local_40 + (uVar5 - 2)) + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(uVar5 * 8 + -0x10 + param_2 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != (uVar5 >> 1) * -0x10);
        lVar6 = uVar4 - (uVar5 & 0xfffffffffffffffe);
        if ((local_48 & 0x100000000) != 0) {
          *(undefined8 *)(param_2 + lVar6 * 8) = local_40[lVar6];
        }
        goto joined_r0x0010ca75;
      }
    }
    do {
      *(undefined8 *)(param_2 + uVar4 * 8) = local_40[uVar4];
      bVar7 = uVar4 != 0;
      uVar4 = uVar4 - 1;
    } while (bVar7);
  }
joined_r0x0010ca75:
  if ((int)local_48 != 0) {
    (*(code *)gmp_free_func)(local_40,(long)(int)local_48 * 8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



void mpz_mfac_uiui(int *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  
  lVar11 = param_2 + (param_2 == 0);
  if (lVar11 == 0) {
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
  uVar1 = param_3 + 1;
  if ((1 < uVar1) && (uVar1 < param_2)) {
    do {
      param_2 = param_2 - param_3;
      if (param_2 == 0) {
        param_1[1] = 0;
        return;
      }
      puVar7 = (ulong *)(*(code *)gmp_allocate_func)(8);
      uVar2 = param_1[1];
      *puVar7 = param_2;
      if (uVar2 != 0) {
        uVar10 = -uVar2;
        if (0 < (int)uVar2) {
          uVar10 = uVar2;
        }
        lVar11 = (ulong)uVar10 + 1;
        lVar8 = (*(code *)gmp_allocate_func)(lVar11 * 8);
        uVar4 = *(undefined8 *)(param_1 + 2);
        mpn_mul(lVar8,uVar4,(ulong)uVar10,puVar7,1);
        iVar3 = *param_1;
        lVar5 = *(long *)(lVar8 + -8 + lVar11 * 8);
        *param_1 = (int)lVar11;
        iVar6 = (int)lVar11 - (uint)(lVar5 == 0);
        *(long *)(param_1 + 2) = lVar8;
        if ((int)uVar2 < 0) {
          iVar6 = -iVar6;
        }
        param_1[1] = iVar6;
        if (iVar3 != 0) {
          (*(code *)gmp_free_func)(uVar4,(long)iVar3 << 3);
        }
      }
      (*(code *)gmp_free_func)(puVar7,8);
    } while (uVar1 < param_2);
  }
  return;
}



void mpz_2fac_ui(int *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = param_2 + (param_2 == 0);
  if (lVar10 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar8 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar8 = *(long **)(param_1 + 2);
    }
    *plVar8 = lVar10;
  }
  while (3 < param_2) {
    param_2 = param_2 - 2;
    puVar6 = (ulong *)(*(code *)gmp_allocate_func)(8);
    uVar1 = param_1[1];
    *puVar6 = param_2;
    if (uVar1 != 0) {
      uVar9 = -uVar1;
      if (0 < (int)uVar1) {
        uVar9 = uVar1;
      }
      lVar10 = (ulong)uVar9 + 1;
      lVar7 = (*(code *)gmp_allocate_func)(lVar10 * 8);
      uVar3 = *(undefined8 *)(param_1 + 2);
      mpn_mul(lVar7,uVar3,(ulong)uVar9,puVar6,1);
      lVar4 = *(long *)(lVar7 + -8 + lVar10 * 8);
      iVar2 = *param_1;
      *(long *)(param_1 + 2) = lVar7;
      iVar5 = (int)lVar10 - (uint)(lVar4 == 0);
      *param_1 = (int)lVar10;
      if ((int)uVar1 < 0) {
        iVar5 = -iVar5;
      }
      param_1[1] = iVar5;
      if (iVar2 != 0) {
        (*(code *)gmp_free_func)(uVar3,(long)iVar2 << 3);
      }
    }
    (*(code *)gmp_free_func)(puVar6,8);
  }
  return;
}



void mpz_fac_ui(int *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = param_2 + (param_2 == 0);
  if (lVar10 == 0) {
    param_1[1] = 0;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      plVar8 = (long *)mpz_realloc(param_1,1);
    }
    else {
      plVar8 = *(long **)(param_1 + 2);
    }
    *plVar8 = lVar10;
  }
  if (2 < param_2) {
    do {
      param_2 = param_2 - 1;
      puVar6 = (ulong *)(*(code *)gmp_allocate_func)(8);
      uVar1 = param_1[1];
      *puVar6 = param_2;
      if (uVar1 != 0) {
        uVar9 = -uVar1;
        if (0 < (int)uVar1) {
          uVar9 = uVar1;
        }
        lVar10 = (ulong)uVar9 + 1;
        lVar7 = (*(code *)gmp_allocate_func)(lVar10 * 8);
        uVar3 = *(undefined8 *)(param_1 + 2);
        mpn_mul(lVar7,uVar3,(ulong)uVar9,puVar6,1);
        lVar4 = *(long *)(lVar7 + -8 + lVar10 * 8);
        iVar2 = *param_1;
        *(long *)(param_1 + 2) = lVar7;
        iVar5 = (int)lVar10 - (uint)(lVar4 == 0);
        *param_1 = (int)lVar10;
        if ((int)uVar1 < 0) {
          iVar5 = -iVar5;
        }
        param_1[1] = iVar5;
        if (iVar2 != 0) {
          (*(code *)gmp_free_func)(uVar3,(long)iVar2 << 3);
        }
      }
      (*(code *)gmp_free_func)(puVar6,8);
    } while (param_2 != 2);
  }
  return;
}



void mpz_bin_uiui(int *param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  undefined8 local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_3) {
    param_1[1] = 0;
    local_50 = &dummy_limb_35;
    local_58 = 0x100000000;
    puVar8 = (undefined8 *)mpz_realloc(&local_58,1);
    *puVar8 = 1;
  }
  else {
    param_1[1] = 1;
    if (*param_1 < 1) {
      puVar8 = (undefined8 *)mpz_realloc(param_1,1);
    }
    else {
      puVar8 = *(undefined8 **)(param_1 + 2);
    }
    *puVar8 = 1;
    local_58 = 0;
    local_50 = &dummy_limb_35;
    if (param_2 >> 1 < param_3) {
      param_3 = param_2 - param_3;
      lVar13 = (param_3 == 0) + param_3;
      if (lVar13 == 0) {
        if (param_3 < 3) goto LAB_0010d0cb;
        param_3 = 0xffffffffffffffff;
        goto LAB_0010d188;
      }
    }
    else {
      lVar13 = param_3 + (param_3 == 0);
      if (lVar13 == 0) goto LAB_0010d0cb;
    }
    local_58 = 0x100000000;
    plVar9 = (long *)mpz_realloc(&local_58,1);
    *plVar9 = lVar13;
    if (2 < param_3) {
LAB_0010d188:
      uVar14 = param_3;
      uVar12 = local_58._4_4_;
LAB_0010d1a4:
      uVar14 = uVar14 - 1;
      puVar6 = (ulong *)(*(code *)gmp_allocate_func)(8);
      *puVar6 = uVar14;
      if (uVar12 != 0) goto code_r0x0010d1c2;
      (*(code *)gmp_free_func)(puVar6,8);
      while (uVar14 != 2) {
        uVar14 = uVar14 - 1;
        puVar6 = (ulong *)(*(code *)gmp_allocate_func)(8);
        *puVar6 = uVar14;
        (*(code *)gmp_free_func)(puVar6,8);
      }
      goto LAB_0010d279;
    }
    if (param_3 != 0) {
LAB_0010d279:
      param_3 = param_2 - param_3;
      do {
        while (param_2 != 0) {
          puVar6 = (ulong *)(*(code *)gmp_allocate_func)(8);
          uVar12 = param_1[1];
          *puVar6 = param_2;
          if (uVar12 != 0) {
            uVar11 = -uVar12;
            if (0 < (int)uVar12) {
              uVar11 = uVar12;
            }
            lVar13 = (ulong)uVar11 + 1;
            lVar7 = (*(code *)gmp_allocate_func)(lVar13 * 8);
            uVar1 = *(undefined8 *)(param_1 + 2);
            mpn_mul(lVar7,uVar1,(ulong)uVar11,puVar6,1);
            lVar2 = *(long *)(lVar7 + -8 + lVar13 * 8);
            *(long *)(param_1 + 2) = lVar7;
            iVar4 = (int)lVar13 - (uint)(lVar2 == 0);
            iVar3 = *param_1;
            *param_1 = (int)lVar13;
            if ((int)uVar12 < 0) {
              iVar4 = -iVar4;
            }
            param_1[1] = iVar4;
            if (iVar3 != 0) {
              (*(code *)gmp_free_func)(uVar1,(long)iVar3 << 3);
            }
          }
          param_2 = param_2 - 1;
          (*(code *)gmp_free_func)(puVar6,8);
          if (param_2 == param_3) goto LAB_0010d0cb;
        }
        param_2 = 0xffffffffffffffff;
        param_1[1] = 0;
      } while (param_3 != 0xffffffffffffffff);
    }
  }
LAB_0010d0cb:
  iVar3 = mpz_div_qr(param_1,0,param_1,&local_58,2);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    mpz_divexact_part_0();
  }
  if ((int)local_58 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010d1c2:
  uVar11 = -uVar12;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  uVar10 = (ulong)uVar11;
  puVar5 = (undefined8 *)(*(code *)gmp_allocate_func)((uVar10 + 1) * 8);
  puVar8 = local_50;
  mpn_mul(puVar5,local_50,uVar10,puVar6,1);
  lVar13 = (long)(int)local_58;
  iVar3 = (int)(uVar10 + 1);
  uVar11 = iVar3 - (uint)(puVar5[uVar10] == 0);
  bVar15 = -1 < (int)uVar12;
  uVar12 = -uVar11;
  if (bVar15) {
    uVar12 = uVar11;
  }
  uVar1 = CONCAT44(uVar12,iVar3);
  bVar15 = (int)local_58 != 0;
  local_58 = uVar1;
  local_50 = puVar5;
  if (bVar15) {
    (*(code *)gmp_free_func)(puVar8,lVar13 << 3);
  }
  (*(code *)gmp_free_func)(puVar6,8);
  if (uVar14 == 2) goto LAB_0010d279;
  goto LAB_0010d1a4;
}



uint mpz_probab_prime_p(long param_1,int param_2)

{
  ulong *puVar1;
  int iVar2;
  ulong *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  ulong local_f0;
  ulong local_e8;
  uint local_b0;
  undefined8 local_a8;
  ulong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  ulong *local_80;
  undefined8 local_78;
  uint *local_70;
  undefined4 local_68;
  int local_64;
  ulong *local_60;
  undefined8 local_58;
  uint *local_50;
  long local_40;
  
  uVar16 = **(ulong **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)(param_1 + 4);
  iVar13 = iVar5;
  if (iVar5 < 1) {
    iVar13 = -iVar5;
  }
  if (((uint)(iVar5 != 0) & (uint)uVar16) == 0) {
    if ((iVar13 < 2) && (iVar5 != 0)) {
      local_b0 = (uint)(2 < uVar16 == uVar16 < 2) * 2;
      goto LAB_0010d4c0;
    }
LAB_0010d4be:
    local_b0 = 0;
    goto LAB_0010d4c0;
  }
  if ((iVar13 == 1) && ((uint)(0x40 < uVar16) - (uint)(uVar16 < 0x40) == -1)) {
    local_b0 = (uint)(0xc96996dcL >> ((byte)(uVar16 >> 1) & 0x3f)) & 2;
    goto LAB_0010d4c0;
  }
  lVar7 = mpz_gcd_ui(0,param_1,0xc0cfd797);
  if (lVar7 != 1) goto LAB_0010d4be;
  iVar5 = *(int *)(param_1 + 4);
  iVar13 = -iVar5;
  if (0 < iVar5) {
    iVar13 = iVar5;
  }
  if ((iVar13 < 2) &&
     ((iVar5 == 0 ||
      ((uint)(0x3c1 < **(ulong **)(param_1 + 8)) - (uint)(**(ulong **)(param_1 + 8) < 0x3c1) == -1))
     )) {
    local_b0 = 2;
    goto LAB_0010d4c0;
  }
  local_a8 = 0;
  local_a0 = &dummy_limb_35;
  local_90 = &dummy_limb_35;
  local_98 = 0;
  mpz_set(&local_a8,param_1);
  puVar3 = local_a0;
  iVar5 = local_a8._4_4_;
  if (local_a8._4_4_ < 1) {
    iVar5 = -local_a8._4_4_;
  }
  local_a8 = CONCAT44(iVar5,(int)local_a8);
  uVar16 = *local_a0 - 1;
  *local_a0 = uVar16;
  lVar7 = 0;
  if (uVar16 == 0) {
    do {
      lVar7 = lVar7 + 1;
      uVar16 = local_a0[lVar7];
    } while (uVar16 == 0);
    lVar7 = lVar7 * 0x40;
  }
  iVar13 = 0;
  for (uVar16 = -uVar16 & uVar16; uVar16 < 0x100000000000000; uVar16 = uVar16 << 8) {
    iVar13 = iVar13 + 8;
  }
  for (; -1 < (long)uVar16; uVar16 = uVar16 * 2) {
    iVar13 = iVar13 + 1;
  }
  lVar7 = (ulong)(0x3f - iVar13) + lVar7;
  mpz_div_q_2exp(&local_98,&local_a8,lVar7,2);
  local_80 = &dummy_limb_35;
  local_88 = _LC43;
  puVar8 = (undefined8 *)mpz_realloc(&local_88,1);
  *puVar8 = 2;
  local_b0 = gmp_millerrabin(param_1,&local_a8,&local_88,&local_98);
  lVar9 = (long)(int)(uint)local_88;
  if (local_b0 != 0) {
    iVar13 = *(int *)(param_1 + 4);
    puVar1 = *(ulong **)(param_1 + 8);
    local_68 = 0;
    iVar2 = -iVar13;
    if (0 < iVar13) {
      iVar2 = iVar13;
    }
    local_b0 = (uint)(iVar13 != 0) & (uint)*puVar1;
    local_64 = iVar2;
    local_60 = puVar1;
    if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xddf,"gmp_stronglucas");
    }
    local_58 = 0;
    local_50 = (uint *)&dummy_limb_35;
    mpz_rootrem(&local_88,&local_58,&local_68,2);
    uVar6 = local_58._4_4_;
    if ((int)local_58 != 0) {
      (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
    }
    if (uVar6 != 0) {
      local_f0 = 0xffffffffffffffff;
      if (local_88._4_4_ == 1) {
        local_f0 = *local_80 - 1;
      }
      uVar16 = 3;
LAB_0010d820:
      if (local_f0 <= uVar16) {
        uVar14 = (uint)(0 < param_2 + -0x18);
        goto LAB_0010da79;
      }
      uVar16 = uVar16 + 2;
      uVar10 = mpz_div_qr_ui_constprop_0(0,&local_68,uVar16,2);
      if (uVar10 != 0) {
        iVar13 = 0;
        uVar17 = uVar16 >> 1;
        for (uVar15 = -uVar10 & uVar10; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
          iVar13 = iVar13 + 8;
        }
        for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
          iVar13 = iVar13 + 1;
        }
        uVar10 = uVar10 >> 1;
        uVar6 = 0;
        uVar14 = 0x3f - iVar13;
        do {
          uVar15 = uVar10 >> ((byte)uVar14 & 0x3f);
          uVar6 = ((uint)(uVar17 >> 1) ^ (uint)uVar17) & uVar14 ^ uVar6;
          if (uVar15 < uVar17) {
            if (uVar15 == 0) goto LAB_0010d921;
            uVar6 = (uint)uVar17 & (uint)uVar15 ^ uVar6;
            uVar10 = uVar17 - uVar15;
            uVar17 = uVar15;
          }
          else {
            uVar10 = uVar15 - uVar17;
            if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("a != 0","lib/mini-gmp.c",0xd81,"gmp_jacobi_coprime");
            }
          }
          iVar13 = 0;
          for (uVar15 = -uVar10 & uVar10; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
            iVar13 = iVar13 + 8;
          }
          for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
            iVar13 = iVar13 + 1;
          }
          uVar14 = 0x40 - iVar13;
        } while( true );
      }
      lVar9 = (long)(int)(uint)local_88;
      local_b0 = 0;
      goto LAB_0010d645;
    }
LAB_0010da23:
    local_b0 = uVar6;
    lVar9 = (long)(int)(uint)local_88;
  }
LAB_0010d645:
  if ((int)local_a8 != 0) {
LAB_0010d64e:
    (*(code *)gmp_free_func)(puVar3,(long)(int)local_a8 * 8);
    lVar9 = (long)(int)lVar9;
  }
  if ((int)local_98 != 0) {
LAB_0010d671:
    (*(code *)gmp_free_func)(local_90,(long)(int)local_98 * 8);
    lVar9 = (long)(int)lVar9;
  }
  if ((int)lVar9 != 0) {
LAB_0010d693:
    (*(code *)gmp_free_func)(local_80,lVar9 * 8);
  }
LAB_0010d4c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d921:
  if ((uVar6 & 1) != 0) goto code_r0x0010d92c;
  goto LAB_0010d820;
code_r0x0010d92c:
  local_78 = local_78 & 0xffffffff00000000;
  local_70 = (uint *)&dummy_limb_35;
  lVar11 = (long)iVar2;
  uVar10 = *puVar1;
  uVar15 = uVar10 ^ 0xffffffffffffffff;
  lVar9 = 0;
  if (uVar15 == 0) {
    if (iVar2 == 1) {
      if ((uVar16 & 2) == 0) {
        local_e8 = 0x40;
        goto LAB_0010e225;
      }
      local_e8 = 0x40;
      local_f0 = (uVar16 >> 2) + 1;
      goto LAB_0010dcba;
    }
    lVar9 = 1;
    do {
      uVar15 = puVar1[lVar9] ^ 0xffffffffffffffff;
      if (uVar15 != 0) {
        lVar9 = lVar9 << 6;
        goto LAB_0010dbe8;
      }
      lVar9 = lVar9 + 1;
    } while (lVar11 != lVar9);
    local_e8 = lVar11 << 6;
    if ((uVar16 & 2) == 0) {
LAB_0010e225:
      local_f0 = -(uVar16 >> 2);
      goto LAB_0010dcba;
    }
    local_f0 = (uVar16 >> 2) + 1;
    local_50 = (uint *)&dummy_limb_35;
    local_58 = _LC43;
    puVar8 = (undefined8 *)mpz_realloc(&local_58,1);
    local_78 = CONCAT44(1,(int)local_78);
    *puVar8 = 1;
    puVar8 = (undefined8 *)mpz_realloc(&local_78,1);
    *puVar8 = 1;
LAB_0010dd25:
    local_88 = CONCAT44(1,(uint)local_88);
    puVar12 = local_80;
    if ((int)(uint)local_88 < 1) {
      puVar12 = (ulong *)mpz_realloc(&local_88,1);
    }
    *puVar12 = local_f0;
  }
  else {
LAB_0010dbe8:
    iVar13 = 0;
    for (uVar15 = -uVar15 & uVar15; uVar15 < 0x100000000000000; uVar15 = uVar15 << 8) {
      iVar13 = iVar13 + 8;
    }
    for (; -1 < (long)uVar15; uVar15 = uVar15 * 2) {
      iVar13 = iVar13 + 1;
    }
    local_f0 = (uVar16 >> 2) + 1;
    if ((uVar16 & 2) == 0) {
      local_f0 = -(uVar16 >> 2);
    }
    local_e8 = lVar9 + (ulong)(0x3f - iVar13);
    if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("b0 > 0","lib/mini-gmp.c",0xda1,"gmp_lucas_mod");
    }
    if ((iVar2 == 1) && ((uint)(4 < uVar10) - (uint)(uVar10 < 4) != 1)) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("mpz_cmp_ui (n, 4) > 0","lib/mini-gmp.c",0xda4,"gmp_lucas_mod");
    }
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("mpz_odd_p (n)","lib/mini-gmp.c",0xda5,"gmp_lucas_mod");
    }
LAB_0010dcba:
    local_50 = (uint *)&dummy_limb_35;
    local_58 = _LC43;
    puVar8 = (undefined8 *)mpz_realloc(&local_58,1);
    local_78 = CONCAT44(1,(int)local_78);
    *puVar8 = 1;
    puVar8 = (undefined8 *)mpz_realloc(&local_78,1);
    *puVar8 = 1;
    if ((long)local_f0 < 0) {
      local_88 = CONCAT44(0xffffffff,(uint)local_88);
      puVar12 = local_80;
      if ((int)(uint)local_88 < 1) {
        puVar12 = (ulong *)mpz_realloc(&local_88,1);
      }
      *puVar12 = -local_f0;
    }
    else {
      if (local_f0 != 0) goto LAB_0010dd25;
      local_88 = local_88 & 0xffffffff;
    }
  }
  uVar16 = puVar1[lVar11 + -1];
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    mpn_limb_size_in_base_2_part_0();
  }
  uVar10 = 0;
  for (; uVar16 < 0x100000000000000; uVar16 = uVar16 << 8) {
    uVar10 = (ulong)((int)uVar10 + 8);
  }
  for (; -1 < (long)uVar16; uVar16 = uVar16 * 2) {
    uVar10 = (ulong)((int)uVar10 + 1);
  }
  uVar10 = ((long)(iVar2 + -1) * 0x40 + 0x3e) - uVar10;
  if (local_e8 <= uVar10) {
    if ((long)(local_f0 * -2) < 0) {
      do {
        mpz_mul(&local_58,&local_58,&local_78);
        gmp_lucas_step_k_2k(&local_78,&local_88,&local_68);
        if ((uVar10 == local_e8) ||
           (((long)(uVar10 >> 6) < lVar11 && ((puVar1[uVar10 >> 6] >> (uVar10 & 0x3f) & 1) != 0))))
        {
          if ((long)local_f0 < 0) {
            mpz_mul_ui(&local_88,&local_88,-local_f0);
            mpz_set(&local_88,&local_88);
            local_88 = CONCAT44(-local_88._4_4_,(uint)local_88);
          }
          else {
            mpz_mul_ui(&local_88,&local_88,local_f0);
          }
          uVar16 = local_58;
          puVar4 = local_70;
          local_70 = local_50;
          local_50 = puVar4;
          local_58 = local_78;
          local_78 = uVar16;
          mpz_add(&local_58,&local_58,&local_78);
          if (((uint)(local_58._4_4_ != 0) & *local_50) != 0) {
            mpz_add(&local_58,&local_58,&local_68);
          }
          mpz_div_q_2exp_constprop_0(&local_58,&local_58);
          mpz_mul_ui(&local_78,&local_78,local_f0 * 2);
          mpz_set(&local_78,&local_78);
          local_78 = CONCAT44(-local_78._4_4_,(int)local_78);
          mpz_add(&local_78,&local_58,&local_78);
          mpz_div_qr_constprop_0(&local_78,&local_78,&local_68,2);
        }
        mpz_div_qr_constprop_0(&local_58,&local_58,&local_68,2);
        bVar18 = uVar10 != local_e8;
        uVar10 = uVar10 - 1;
      } while (bVar18);
    }
    else {
      do {
        mpz_mul(&local_58,&local_58,&local_78);
        gmp_lucas_step_k_2k(&local_78,&local_88,&local_68);
        if ((local_e8 == uVar10) ||
           (((long)(uVar10 >> 6) < lVar11 && ((puVar1[uVar10 >> 6] >> (uVar10 & 0x3f) & 1) != 0))))
        {
          if ((long)local_f0 < 0) {
            mpz_mul_ui(&local_88,&local_88,-local_f0);
            mpz_set(&local_88,&local_88);
            local_88 = CONCAT44(-local_88._4_4_,(uint)local_88);
          }
          else {
            mpz_mul_ui(&local_88,&local_88,local_f0);
          }
          uVar16 = local_58;
          puVar4 = local_70;
          local_70 = local_50;
          local_50 = puVar4;
          local_58 = local_78;
          local_78 = uVar16;
          mpz_add(&local_58,&local_58,&local_78);
          if (((uint)(local_58._4_4_ != 0) & *local_50) != 0) {
            mpz_add(&local_58,&local_58,&local_68);
          }
          mpz_div_q_2exp_constprop_0(&local_58,&local_58);
          mpz_mul_ui(&local_78,&local_78,local_f0 * -2);
          mpz_add(&local_78,&local_58,&local_78);
          mpz_div_qr_constprop_0(&local_78,&local_78,&local_68,2);
        }
        mpz_div_qr_constprop_0(&local_58,&local_58,&local_68,2);
        bVar18 = local_e8 != uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar18);
    }
  }
  iVar13 = local_58._4_4_;
  if ((int)local_58 != 0) {
    (*(code *)gmp_free_func)(local_50,(long)(int)local_58 * 8);
  }
  bVar18 = 0 < param_2 + -0x18;
  if (iVar13 == 0) {
    uVar14 = (uint)bVar18;
  }
  else {
    if (local_78._4_4_ == 0) {
      uVar14 = (uint)bVar18;
    }
    else {
      do {
        local_e8 = local_e8 - 1;
        if (local_e8 == 0) {
          local_b0 = 0;
          uVar14 = 0;
          goto LAB_0010e013;
        }
        gmp_lucas_step_k_2k(&local_78,&local_88,&local_68);
      } while (local_78._4_4_ != 0);
      uVar14 = (uint)bVar18;
    }
LAB_0010e013:
  }
  if ((int)local_78 != 0) {
    (*(code *)gmp_free_func)(local_70,(long)(int)local_78 * 8);
  }
LAB_0010da79:
  lVar9 = (long)(int)(uint)local_88;
  if (uVar14 != 0) {
    lVar11 = 0;
    uVar6 = (uint)local_88;
    local_b0 = uVar14;
    do {
      local_88 = CONCAT44(1,(uint)local_88);
      uVar16 = (lVar11 + 1) * lVar11 + 0x29;
      if ((int)uVar6 < 1) {
        if (uVar6 == 0) {
          local_80 = (ulong *)(*(code *)gmp_allocate_func)(8);
        }
        else {
          local_80 = (ulong *)(*(code *)gmp_reallocate_func)(local_80,(long)(int)uVar6 << 3,8);
        }
        local_88 = CONCAT44(local_88._4_4_,1);
        uVar6 = uVar14;
      }
      lVar9 = (long)(int)uVar6;
      *local_80 = uVar16;
      if (iVar5 == 1) {
        uVar10 = *puVar3;
        if ((uVar16 == uVar10) || (uVar10 < uVar16)) goto LAB_0010dae5;
      }
      else if (iVar5 < 2) {
LAB_0010dae5:
        if ((int)lVar11 < 0x1e) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("j >= 30","lib/mini-gmp.c",0xe5c,"mpz_probab_prime_p");
        }
        if ((int)local_a8 != 0) goto LAB_0010d64e;
        if ((int)local_98 == 0) goto LAB_0010d693;
        goto LAB_0010d671;
      }
      local_b0 = gmp_millerrabin(param_1,&local_a8,&local_88,&local_98,lVar7);
      uVar6 = local_b0;
      if (((int)lVar11 + 1 < param_2 + -0x18 & local_b0) == 0) goto LAB_0010da23;
      lVar11 = lVar11 + 1;
      uVar6 = (uint)local_88;
    } while( true );
  }
  goto LAB_0010d645;
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
  if ((param_2 & 0x3f) == 0) goto LAB_0010e37f;
  lVar5 = uVar2 << (0x40 - ((byte)param_2 & 0x3f) & 0x3f);
  while( true ) {
    if (lVar5 != 0) {
      return (ulong)(uVar3 ^ 1);
    }
LAB_0010e37f:
    bVar7 = uVar6 == 0;
    uVar6 = uVar6 - 1;
    if (bVar7) break;
    lVar5 = *(long *)(*(long *)(param_1 + 8) + uVar6 * 8);
  }
  return uVar4;
}



void mpz_setbit(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = param_2 >> 6;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (uVar4 < uVar3) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 8) + uVar4 * 8);
    uVar5 = uVar2 >> ((byte)param_2 & 0x3f);
    if ((int)uVar1 < 0) {
      if (((param_2 & 0x3f) == 0) || (uVar2 << (0x40 - ((byte)param_2 & 0x3f) & 0x3f) == 0)) {
        do {
          bVar6 = uVar4 == 0;
          uVar4 = uVar4 - 1;
          if (bVar6) {
            if ((uVar5 & 1) != 0) {
              return;
            }
            goto LAB_0010e421;
          }
        } while (*(long *)(*(long *)(param_1 + 8) + uVar4 * 8) == 0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      else if ((uVar5 & 1) == 0) {
        return;
      }
LAB_0010e421:
      mpz_abs_sub_bit(param_1);
      return;
    }
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  else if ((int)uVar1 < 0) {
    return;
  }
  mpz_abs_add_bit(param_1);
  return;
}



void mpz_clrbit(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = param_2 >> 6;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (uVar4 < uVar3) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 8) + uVar4 * 8);
    uVar5 = uVar2 >> ((byte)param_2 & 0x3f);
    if (-1 < (int)uVar1) {
      if ((uVar5 & 1) != 0) {
        mpz_abs_sub_bit(param_1);
        return;
      }
      return;
    }
    if (((param_2 & 0x3f) == 0) || (uVar2 << (0x40 - ((byte)param_2 & 0x3f) & 0x3f) == 0)) {
      do {
        bVar6 = uVar4 == 0;
        uVar4 = uVar4 - 1;
        if (bVar6) {
          if ((uVar5 & 1) == 0) {
            return;
          }
          goto LAB_0010e4ed;
        }
      } while (*(long *)(*(long *)(param_1 + 8) + uVar4 * 8) == 0);
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
    else if ((uVar5 & 1) != 0) {
      return;
    }
  }
  else if (-1 < (int)uVar1) {
    return;
  }
LAB_0010e4ed:
  mpz_abs_add_bit(param_1);
  return;
}



void mpz_combit(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = param_2 >> 6;
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  if (uVar3 <= uVar4) {
    if (uVar1 >> 0x1f != -((int)uVar1 >> 0x1f)) {
      mpz_abs_sub_bit();
      return;
    }
    mpz_abs_add_bit(param_1);
    return;
  }
  uVar2 = *(ulong *)(*(long *)(param_1 + 8) + uVar4 * 8);
  uVar3 = (uint)(uVar2 >> ((byte)param_2 & 0x3f)) & 1;
  if ((int)uVar1 < 0) {
    if ((param_2 & 0x3f) == 0) goto LAB_0010e59f;
    lVar5 = uVar2 << (0x40 - ((byte)param_2 & 0x3f) & 0x3f);
    while (lVar5 == 0) {
LAB_0010e59f:
      bVar6 = uVar4 == 0;
      uVar4 = uVar4 - 1;
      if (bVar6) goto joined_r0x0010e5ad;
      lVar5 = *(long *)(*(long *)(param_1 + 8) + uVar4 * 8);
    }
    if (uVar1 >> 0x1f == (uVar3 ^ 1)) goto LAB_0010e5af;
  }
  else {
joined_r0x0010e5ad:
    if (uVar1 >> 0x1f == uVar3) {
LAB_0010e5af:
      mpz_abs_add_bit(param_1);
      return;
    }
  }
  mpz_abs_sub_bit();
  return;
}



void mpz_com(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 *local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = &dummy_limb_35;
  local_38 = _LC43;
  puVar1 = (undefined8 *)mpz_realloc(&local_38,1);
  *puVar1 = 1;
  mpz_add(param_1,param_2,&local_38);
  if ((int)local_38 != 0) {
    (*(code *)gmp_free_func)(local_30,(long)(int)local_38 << 3);
  }
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
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)(param_3 + 4);
  uVar19 = -uVar1;
  if (0 < (int)uVar1) {
    uVar19 = uVar1;
  }
  uVar4 = -uVar2;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  lVar22 = (long)(int)uVar19;
  lVar21 = (long)(int)uVar4;
  lVar11 = param_3;
  lVar10 = lVar21;
  uVar19 = uVar1;
  if (lVar21 <= lVar22) {
    lVar11 = param_2;
    param_2 = param_3;
    lVar10 = lVar22;
    lVar22 = lVar21;
    uVar19 = uVar2;
    uVar2 = uVar1;
  }
  if (lVar22 == 0) {
    iVar5 = 0;
    goto LAB_0010e7fd;
  }
  uVar20 = (long)(int)uVar2 >> 0x3f;
  uVar9 = (ulong)(uVar19 >> 0x1f);
  uVar14 = (ulong)(long)(int)uVar2 >> 0x3f;
  uVar13 = (ulong)((uVar2 & uVar19) >> 0x1f);
  uVar17 = -uVar13;
  uVar18 = -uVar9;
  if (uVar18 == 0) {
    lVar10 = lVar22;
  }
  if ((long)*param_1 < (long)(uVar13 + lVar10)) {
    lVar21 = mpz_realloc(param_1);
  }
  else {
    lVar21 = *(long *)(param_1 + 2);
  }
  lVar3 = *(long *)(param_2 + 8);
  lVar11 = *(long *)(lVar11 + 8);
  lVar12 = 0;
  do {
    uVar6 = *(ulong *)(lVar11 + lVar12 * 8) ^ uVar20;
    uVar7 = uVar6 + uVar14;
    uVar15 = *(ulong *)(lVar3 + lVar12 * 8) ^ uVar18;
    uVar16 = uVar15 + uVar9;
    uVar14 = (ulong)CARRY8(uVar6,uVar14);
    uVar9 = (ulong)CARRY8(uVar15,uVar9);
    uVar6 = uVar7 & uVar16 ^ uVar17;
    lVar8 = uVar6 + uVar13;
    uVar13 = (ulong)CARRY8(uVar6,uVar13);
    *(long *)(lVar21 + lVar12 * 8) = lVar8;
    lVar12 = lVar12 + 1;
  } while (lVar22 != lVar12);
  if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf3d,"mpz_and");
  }
  if (lVar22 < lVar10) {
    do {
      uVar18 = *(ulong *)(lVar11 + lVar12 * 8) ^ uVar20;
      uVar9 = uVar18 + uVar14;
      if (-1 < (int)uVar19) {
        uVar9 = 0;
      }
      uVar14 = (ulong)CARRY8(uVar18,uVar14);
      lVar22 = (uVar9 ^ uVar17) + uVar13;
      uVar13 = (ulong)CARRY8(uVar9 ^ uVar17,uVar13);
      *(long *)(lVar21 + lVar12 * 8) = lVar22;
      lVar12 = lVar12 + 1;
    } while (lVar10 != lVar12);
    if (uVar13 != 0) goto LAB_0010e7e7;
    do {
      if (*(long *)(lVar21 + -8 + lVar10 * 8) != 0) goto LAB_0010e7f3;
      lVar10 = lVar10 + -1;
joined_r0x0010e86c:
    } while (lVar10 != 0);
    lVar10 = 0;
  }
  else {
    if (uVar13 == 0) goto joined_r0x0010e86c;
LAB_0010e7e7:
    *(undefined8 *)(lVar21 + lVar10 * 8) = 1;
    lVar10 = lVar10 + 1;
  }
LAB_0010e7f3:
  iVar5 = (int)lVar10;
  if (uVar17 != 0) {
    iVar5 = -(int)lVar10;
  }
LAB_0010e7fd:
  param_1[1] = iVar5;
  return;
}



void mpz_ior(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = *(uint *)(param_3 + 4);
  uVar3 = -uVar1;
  if (0 < (int)uVar1) {
    uVar3 = uVar1;
  }
  uVar4 = -uVar2;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  lVar11 = (long)(int)uVar3;
  lVar23 = (long)(int)uVar4;
  lVar10 = lVar11;
  lVar19 = param_3;
  uVar3 = uVar1;
  if (lVar23 <= lVar11) {
    lVar10 = lVar23;
    lVar19 = param_2;
    param_2 = param_3;
    lVar23 = lVar11;
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
  uVar20 = (ulong)(int)uVar3;
  if (lVar10 == 0) {
    mpz_set(param_1,lVar19);
    return;
  }
  uVar14 = (ulong)(long)(int)uVar2 >> 0x3f;
  uVar22 = uVar20 >> 0x3f;
  uVar21 = (long)(int)uVar2 >> 0x3f;
  iVar6 = *param_1;
  uVar12 = (ulong)((uVar2 | uVar3) >> 0x1f);
  uVar18 = -uVar12;
  if ((long)uVar20 < 0) {
    lVar23 = lVar10;
  }
  lVar11 = uVar12 + lVar23;
  if (iVar6 < lVar11) {
    lVar17 = 1;
    if (0 < lVar11) {
      lVar17 = lVar11;
    }
    if (iVar6 == 0) {
      lVar11 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar11 = (*(code *)gmp_reallocate_func)
                         (*(undefined8 *)(param_1 + 2),(long)iVar6 * 8,lVar17 * 8);
    }
    iVar6 = param_1[1];
    *(long *)(param_1 + 2) = lVar11;
    *param_1 = (int)lVar17;
    iVar5 = -iVar6;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    if (lVar17 < iVar5) {
      param_1[1] = 0;
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 2);
  }
  lVar19 = *(long *)(lVar19 + 8);
  lVar17 = *(long *)(param_2 + 8);
  lVar13 = 0;
  do {
    uVar7 = *(ulong *)(lVar19 + lVar13 * 8) ^ uVar21;
    uVar8 = uVar7 + uVar14;
    uVar15 = *(ulong *)(lVar17 + lVar13 * 8) ^ (long)uVar20 >> 0x3f;
    uVar16 = uVar15 + uVar22;
    uVar14 = (ulong)CARRY8(uVar7,uVar14);
    uVar22 = (ulong)CARRY8(uVar15,uVar22);
    uVar7 = (uVar8 | uVar16) ^ uVar18;
    lVar9 = uVar7 + uVar12;
    uVar12 = (ulong)CARRY8(uVar7,uVar12);
    *(long *)(lVar11 + lVar13 * 8) = lVar9;
    lVar13 = lVar13 + 1;
  } while (lVar10 != lVar13);
  if (uVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xf86,"mpz_ior");
  }
  if (lVar10 < lVar23) {
    do {
      uVar22 = *(ulong *)(lVar19 + lVar13 * 8) ^ uVar21;
      uVar7 = (uVar22 + uVar14 | (long)uVar20 >> 0x3f) ^ uVar18;
      uVar14 = (ulong)CARRY8(uVar22,uVar14);
      lVar10 = uVar7 + uVar12;
      uVar12 = (ulong)CARRY8(uVar7,uVar12);
      *(long *)(lVar11 + lVar13 * 8) = lVar10;
      lVar13 = lVar13 + 1;
    } while (lVar23 != lVar13);
    if (uVar12 != 0) {
LAB_0010ea38:
      *(undefined8 *)(lVar11 + lVar23 * 8) = 1;
      lVar23 = lVar23 + 1;
      goto LAB_0010ea44;
    }
  }
  else {
    if (uVar12 != 0) goto LAB_0010ea38;
    if (lVar23 == 0) {
      lVar23 = 0;
      goto LAB_0010ea44;
    }
  }
  do {
    if (*(long *)(lVar11 + -8 + lVar23 * 8) != 0) goto LAB_0010ea44;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  lVar23 = 0;
LAB_0010ea44:
  iVar6 = (int)lVar23;
  if (uVar18 != 0) {
    iVar6 = -(int)lVar23;
  }
  param_1[1] = iVar6;
  return;
}



void mpz_xor(int *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  
  uVar1 = *(uint *)(param_2 + 4);
  uVar12 = *(uint *)(param_3 + 4);
  uVar4 = -uVar1;
  if (0 < (int)uVar1) {
    uVar4 = uVar1;
  }
  uVar2 = -uVar12;
  if (0 < (int)uVar12) {
    uVar2 = uVar12;
  }
  lVar22 = (long)(int)uVar4;
  lVar21 = (long)(int)uVar2;
  lVar18 = param_3;
  lVar9 = lVar21;
  uVar4 = uVar1;
  if (lVar21 <= lVar22) {
    lVar18 = param_2;
    param_2 = param_3;
    lVar9 = lVar22;
    lVar22 = lVar21;
    uVar4 = uVar12;
    uVar12 = uVar1;
  }
  if (lVar22 == 0) {
    mpz_set(param_1,lVar18);
    return;
  }
  uVar19 = (long)(int)uVar12 >> 0x3f;
  iVar5 = *param_1;
  uVar13 = (ulong)(long)(int)uVar12 >> 0x3f;
  uVar10 = (ulong)((uVar12 ^ uVar4) >> 0x1f);
  uVar20 = (ulong)(long)(int)uVar4 >> 0x3f;
  lVar21 = uVar10 + lVar9;
  uVar17 = -uVar10;
  if (iVar5 < lVar21) {
    lVar16 = 1;
    if (0 < lVar21) {
      lVar16 = lVar21;
    }
    if (iVar5 == 0) {
      lVar21 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar21 = (*(code *)gmp_reallocate_func)
                         (*(undefined8 *)(param_1 + 2),(long)iVar5 * 8,lVar16 * 8);
    }
    iVar5 = param_1[1];
    *(long *)(param_1 + 2) = lVar21;
    *param_1 = (int)lVar16;
    iVar3 = -iVar5;
    if (-1 < iVar5) {
      iVar3 = iVar5;
    }
    if (lVar16 < iVar3) {
      param_1[1] = 0;
    }
  }
  else {
    lVar21 = *(long *)(param_1 + 2);
  }
  lVar18 = *(long *)(lVar18 + 8);
  lVar16 = *(long *)(param_2 + 8);
  lVar11 = 0;
  do {
    uVar6 = *(ulong *)(lVar18 + lVar11 * 8) ^ uVar19;
    uVar7 = uVar6 + uVar13;
    uVar14 = *(ulong *)(lVar16 + lVar11 * 8) ^ (long)(int)uVar4 >> 0x3f;
    uVar15 = uVar14 + uVar20;
    uVar13 = (ulong)CARRY8(uVar6,uVar13);
    uVar20 = (ulong)CARRY8(uVar14,uVar20);
    uVar6 = uVar7 ^ uVar15 ^ uVar17;
    lVar8 = uVar6 + uVar10;
    uVar10 = (ulong)CARRY8(uVar6,uVar10);
    *(long *)(lVar21 + lVar11 * 8) = lVar8;
    lVar11 = lVar11 + 1;
  } while (lVar22 != lVar11);
  if (uVar20 != 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("vc == 0","lib/mini-gmp.c",0xfcb,"mpz_xor");
  }
  if (lVar22 < lVar9) {
    do {
      uVar20 = *(ulong *)(lVar18 + lVar11 * 8) ^ uVar19;
      uVar6 = uVar20 + uVar13 ^ uVar19;
      lVar22 = uVar6 + uVar10;
      uVar13 = (ulong)CARRY8(uVar20,uVar13);
      uVar10 = (ulong)CARRY8(uVar6,uVar10);
      *(long *)(lVar21 + lVar11 * 8) = lVar22;
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    if (uVar10 != 0) {
LAB_0010ed20:
      *(undefined8 *)(lVar21 + lVar9 * 8) = 1;
      lVar9 = lVar9 + 1;
      goto LAB_0010ed2c;
    }
  }
  else {
    if (uVar10 != 0) goto LAB_0010ed20;
    if (lVar9 == 0) {
      lVar9 = 0;
      goto LAB_0010ed2c;
    }
  }
  do {
    if (*(long *)(lVar21 + -8 + lVar9 * 8) != 0) goto LAB_0010ed2c;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  lVar9 = 0;
LAB_0010ed2c:
  iVar5 = (int)lVar9;
  if (uVar17 != 0) {
    iVar5 = -(int)lVar9;
  }
  param_1[1] = iVar5;
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
      goto LAB_0010f0a2;
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
LAB_0010f0a2:
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
          goto LAB_0010f270;
        }
      }
      uVar5 = 1;
LAB_0010f270:
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
        goto LAB_0010f2f8;
      }
    }
    lVar5 = 1;
LAB_0010f2f8:
    uVar8 = uVar8 - lVar5;
  }
  uVar6 = mpn_common_scan(-1L << ((byte)param_2 & 0x3f) & uVar8,uVar7,lVar2,(ulong)uVar3);
  return uVar6;
}



ulong mpz_sizeinbase(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_68 [2];
  long local_60;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base >= 2","lib/mini-gmp.c",0x108e,"mpz_sizeinbase");
  }
  if (0x3e < param_2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base <= 62","lib/mini-gmp.c",0x108f,"mpz_sizeinbase");
  }
  uVar2 = *(uint *)(param_1 + 4);
  uVar9 = 1;
  if (uVar2 == 0) goto switchD_0010f427_caseD_2;
  lVar3 = *(long *)(param_1 + 8);
  uVar4 = -uVar2;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  uVar10 = (ulong)(int)uVar4;
  lVar1 = uVar10 * 8;
  uVar6 = *(ulong *)(lVar3 + -8 + lVar1);
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    mpn_limb_size_in_base_2_part_0();
  }
  uVar9 = 0;
  for (; uVar6 < 0x100000000000000; uVar6 = uVar6 << 8) {
    uVar9 = (ulong)((int)uVar9 + 8);
  }
  for (; -1 < (long)uVar6; uVar6 = uVar6 * 2) {
    uVar9 = (ulong)((int)uVar9 + 1);
  }
  uVar9 = uVar10 * 0x40 - uVar9;
  switch(param_2) {
  default:
    lVar7 = (*(code *)gmp_allocate_func)(lVar1);
    if ((int)uVar4 < 4) {
      lVar8 = 0;
LAB_0010f470:
      do {
        *(undefined8 *)(lVar7 + lVar8 * 8) = *(undefined8 *)(lVar3 + lVar8 * 8);
        lVar8 = lVar8 + 1;
      } while (lVar8 < (long)uVar10);
    }
    else {
      lVar8 = 0;
      if (lVar7 == lVar3 + 8) goto LAB_0010f470;
      do {
        uVar5 = ((undefined8 *)(lVar3 + lVar8))[1];
        *(undefined8 *)(lVar7 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
        ((undefined8 *)(lVar7 + lVar8))[1] = uVar5;
        lVar8 = lVar8 + 0x10;
      } while ((uVar10 >> 1) * 0x10 != lVar8);
      if ((uVar4 & 1) != 0) {
        *(undefined8 *)(lVar7 + (uVar10 & 0xfffffffffffffffe) * 8) =
             *(undefined8 *)(lVar3 + (uVar10 & 0xfffffffffffffffe) * 8);
      }
    }
    local_68[0] = 0;
    uVar9 = (long)param_2;
    do {
      uVar9 = uVar9 << 8;
      local_68[0] = local_68[0] + 8;
    } while (uVar9 < 0x100000000000000);
    do {
      local_68[0] = local_68[0] + 1;
      uVar9 = uVar9 * 2;
    } while (-1 < (long)uVar9);
    local_60 = (long)param_2 << ((byte)local_68[0] & 0x3f);
    uVar9 = 0;
    local_50 = mpn_invert_3by2(local_60,0);
    do {
      mpn_div_qr_1_preinv(lVar7,lVar7,uVar10,local_68);
      uVar9 = uVar9 + 1;
      uVar10 = uVar10 - (*(long *)(lVar7 + -8 + uVar10 * 8) == 0);
    } while (uVar10 != 0);
    (*(code *)gmp_free_func)(lVar7,lVar1);
    break;
  case 2:
    break;
  case 4:
    uVar9 = uVar9 + 1 >> 1;
    break;
  case 8:
    uVar9 = (uVar9 + 2) / 3;
    break;
  case 0x10:
    uVar9 = uVar9 + 3 >> 2;
    break;
  case 0x20:
    uVar9 = (uVar9 + 4) / 5;
  }
switchD_0010f427_caseD_2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



undefined1 * mpz_get_str(undefined1 *param_1,int param_2,long param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  char *pcVar27;
  long in_FS_OFFSET;
  long local_178;
  int local_58 [2];
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 2) {
    if (param_2 < -1) {
      bVar11 = param_2 < -0x24;
      param_2 = -param_2;
      if (bVar11) goto LAB_0010f800;
LAB_0010f647:
      pcVar27 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    }
    else {
      pcVar27 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
      param_2 = 10;
    }
LAB_0010f64e:
    lVar15 = mpz_sizeinbase(param_3,param_2);
    local_178 = 0;
    if (param_1 == (undefined1 *)0x0) {
      local_178 = lVar15 + 2;
      param_1 = (undefined1 *)(*(code *)gmp_allocate_func)(local_178);
    }
    uVar9 = *(uint *)(param_3 + 4);
    if (uVar9 == 0) {
      *param_1 = 0x30;
      uVar25 = 1;
    }
    else {
      puVar18 = param_1;
      if ((int)uVar9 < 0) {
        *param_1 = 0x2d;
        puVar18 = param_1 + 1;
      }
      uVar26 = (ulong)((int)uVar9 < 0);
      uVar14 = -uVar9;
      if (0 < (int)uVar9) {
        uVar14 = uVar9;
      }
      uVar25 = (ulong)(int)uVar14;
      switch(param_2) {
      default:
        uVar24 = (ulong)param_2;
        local_58[0] = 1;
        local_50 = uVar24;
        do {
          local_50 = local_50 * uVar24;
          local_58[0] = local_58[0] + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar24;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_50;
        } while (SUB168(auVar12 * auVar13,8) == 0);
        lVar16 = (*(code *)gmp_allocate_func)(uVar25 * 8);
        lVar15 = *(long *)(param_3 + 8);
        if ((int)uVar14 < 4) {
          lVar17 = 0;
LAB_0010f740:
          do {
            *(undefined8 *)(lVar16 + lVar17 * 8) = *(undefined8 *)(lVar15 + lVar17 * 8);
            lVar17 = lVar17 + 1;
          } while (lVar17 < (long)uVar25);
        }
        else {
          lVar17 = 0;
          if (lVar16 == lVar15 + 8) goto LAB_0010f740;
          do {
            uVar23 = ((undefined8 *)(lVar15 + lVar17))[1];
            *(undefined8 *)(lVar16 + lVar17) = *(undefined8 *)(lVar15 + lVar17);
            ((undefined8 *)(lVar16 + lVar17))[1] = uVar23;
            lVar17 = lVar17 + 0x10;
          } while ((uVar25 >> 1) * 0x10 != lVar17);
          if ((uVar14 & 1) != 0) {
            *(undefined8 *)(lVar16 + (uVar25 & 0xfffffffffffffffe) * 8) =
                 *(undefined8 *)(lVar15 + (uVar25 & 0xfffffffffffffffe) * 8);
          }
        }
        lVar15 = mpn_get_str_other(puVar18,param_2,local_58,lVar16);
        (*(code *)gmp_free_func)(lVar16,uVar25 * 8);
        goto LAB_0010f86a;
      case 2:
        uVar23 = 1;
        break;
      case 4:
        uVar23 = 2;
        break;
      case 8:
        uVar23 = 3;
        break;
      case 0x10:
        uVar23 = 4;
        break;
      case 0x20:
        uVar23 = 5;
      }
      lVar15 = mpn_get_str_bits(puVar18,uVar23,*(undefined8 *)(param_3 + 8),uVar25);
LAB_0010f86a:
      uVar25 = lVar15 + uVar26;
      if (uVar26 < uVar25) {
        uVar24 = uVar25 - uVar26;
        if (uVar24 - 1 < 0xf) {
          uVar21 = 0;
          uVar22 = uVar26;
        }
        else {
          uVar21 = uVar24 & 0xfffffffffffffff0;
          puVar19 = (ulong *)(param_1 + uVar26);
          do {
            uVar22 = *puVar19;
            uVar10 = puVar19[1];
            puVar20 = puVar19 + 2;
            cVar1 = pcVar27[uVar10 >> 0x30 & 0xff];
            cVar2 = pcVar27[uVar10 >> 0x38];
            cVar3 = pcVar27[uVar10 >> 0x28 & 0xff];
            cVar4 = pcVar27[uVar10 >> 0x20 & 0xff];
            cVar5 = pcVar27[uVar10 >> 0x18 & 0xff];
            cVar6 = pcVar27[uVar10 >> 0x10 & 0xff];
            cVar7 = pcVar27[uVar10 >> 8 & 0xff];
            cVar8 = pcVar27[uVar10 & 0xff];
            *puVar19 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pcVar27[uVar22
                                                                                              >> 
                                                  0x38],pcVar27[uVar22 >> 0x30 & 0xff]),
                                                  pcVar27[uVar22 >> 0x28 & 0xff]),
                                                  pcVar27[uVar22 >> 0x20 & 0xff]),
                                                  pcVar27[uVar22 >> 0x18 & 0xff]),
                                                  pcVar27[uVar22 >> 0x10 & 0xff]),
                                         pcVar27[uVar22 >> 8 & 0xff]),pcVar27[(uint)uVar22 & 0xff]);
            puVar19[1] = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar2,cVar1)
                                                                               ,cVar3),cVar4),cVar5)
                                                    ,cVar6),cVar7),cVar8);
            puVar19 = puVar20;
          } while ((ulong *)((long)(param_1 + uVar26) + uVar21) != puVar20);
          uVar22 = uVar26 + uVar21;
          if (uVar24 == uVar21) goto LAB_0010f7b0;
        }
        uVar24 = uVar24 - uVar21;
        if (6 < uVar24 - 1) {
          uVar10 = *(ulong *)(param_1 + uVar21 + uVar26);
          *(ulong *)(param_1 + uVar21 + uVar26) =
               CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(pcVar27[uVar10 >> 0x38
                                                                                     ],pcVar27[
                                                  uVar10 >> 0x30 & 0xff]),
                                                  pcVar27[uVar10 >> 0x28 & 0xff]),
                                                  pcVar27[uVar10 >> 0x20 & 0xff]),
                                                  pcVar27[uVar10 >> 0x18 & 0xff]),
                                          pcVar27[uVar10 >> 0x10 & 0xff]),
                                 pcVar27[uVar10 >> 8 & 0xff]),pcVar27[uVar10 & 0xff]);
          uVar22 = uVar22 + (uVar24 & 0xfffffffffffffff8);
          if ((uVar24 & 7) == 0) goto LAB_0010f7b0;
        }
        param_1[uVar22] = pcVar27[(byte)param_1[uVar22]];
        if (uVar22 + 1 < uVar25) {
          param_1[uVar22 + 1] = pcVar27[(byte)param_1[uVar22 + 1]];
          if (uVar22 + 2 < uVar25) {
            param_1[uVar22 + 2] = pcVar27[(byte)param_1[uVar22 + 2]];
            if (uVar22 + 3 < uVar25) {
              param_1[uVar22 + 3] = pcVar27[(byte)param_1[uVar22 + 3]];
              if (uVar22 + 4 < uVar25) {
                param_1[uVar22 + 4] = pcVar27[(byte)param_1[uVar22 + 4]];
                if (uVar22 + 5 < uVar25) {
                  param_1[uVar22 + 5] = pcVar27[(byte)param_1[uVar22 + 5]];
                  if (uVar22 + 6 < uVar25) {
                    param_1[uVar22 + 6] = pcVar27[(byte)param_1[uVar22 + 6]];
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_0010f7b0:
    param_1[uVar25] = 0;
    if ((local_178 != 0) && (uVar25 + 1 != local_178)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f7f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar18 = (undefined1 *)(*(code *)gmp_reallocate_func)(param_1,local_178);
        return puVar18;
      }
      goto LAB_0010fcef;
    }
  }
  else {
    if (param_2 < 0x25) {
      pcVar27 = "0123456789abcdefghijklmnopqrstuvwxyz";
      goto LAB_0010f64e;
    }
    if (param_2 < 0x3f) goto LAB_0010f647;
LAB_0010f800:
    param_1 = (undefined1 *)0x0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_0010fcef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpz_set_str(int *param_1,byte *param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  ushort **ppuVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  bool bVar19;
  size_t local_68;
  uint local_58 [2];
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((0x3c < param_3 - 2) && (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("base == 0 || (base >= 2 && base <= 62)","lib/mini-gmp.c",0x110f,"mpz_set_str");
  }
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
    uVar13 = 10;
    if (bVar5 == 0x30) {
      if ((param_2[1] & 0xdf) == 0x58) {
        bVar5 = param_2[2];
        param_3 = 0x10;
        param_2 = param_2 + 2;
        uVar13 = 0x10;
      }
      else {
        if ((param_2[1] & 0xdf) != 0x42) {
          param_3 = 8;
          uVar13 = 8;
          local_68 = strlen((char *)param_2);
          pbVar8 = (byte *)(*(code *)gmp_allocate_func)(local_68);
          iVar16 = -0x57;
          goto LAB_0010fdc6;
        }
        bVar5 = param_2[2];
        param_3 = 2;
        param_2 = param_2 + 2;
        uVar13 = 2;
      }
    }
    if (bVar5 != 0) {
      local_68 = strlen((char *)param_2);
      pbVar8 = (byte *)(*(code *)gmp_allocate_func)(local_68);
      iVar16 = -0x57;
      goto LAB_0010fdc6;
    }
LAB_0010fe8e:
    iVar16 = 0;
    uVar9 = 0xffffffff;
    goto LAB_0010fe96;
  }
  if (bVar5 == 0) goto LAB_0010fe8e;
  local_68 = strlen((char *)param_2);
  pbVar8 = (byte *)(*(code *)gmp_allocate_func)(local_68);
  iVar16 = -0x57;
  uVar13 = param_3;
  if (0x24 < (int)param_3) {
    iVar16 = -0x3d;
  }
LAB_0010fdc6:
  bVar5 = *param_2;
  lVar17 = 0;
  if (bVar5 == 0) {
LAB_0010fe80:
    (*(code *)gmp_free_func)(pbVar8,local_68);
    goto LAB_0010fe8e;
  }
  do {
    if ((*(byte *)((long)*ppuVar7 + (ulong)bVar5 * 2 + 1) & 0x20) == 0) {
      if ((byte)(bVar5 - 0x30) < 10) {
        uVar6 = (int)(char)bVar5 - 0x30;
      }
      else if ((byte)(bVar5 + 0x9f) < 0x1a) {
        uVar6 = (char)bVar5 + iVar16;
      }
      else {
        if (0x19 < (byte)(bVar5 + 0xbf)) goto LAB_0010fe80;
        uVar6 = (int)(char)bVar5 - 0x37;
      }
      if (param_3 <= uVar6) goto LAB_0010fe80;
      pbVar8[lVar17] = (byte)uVar6;
      lVar17 = lVar17 + 1;
    }
    bVar5 = param_2[1];
    param_2 = param_2 + 1;
  } while (bVar5 != 0);
  if (lVar17 == 0) goto LAB_0010fe80;
  switch(uVar13) {
  default:
    uVar18 = (ulong)(int)uVar13;
    local_58[0] = 1;
    local_50 = uVar18;
    do {
      local_50 = local_50 * uVar18;
      local_58[0] = local_58[0] + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar18;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50;
    } while (SUB168(auVar3 * auVar4,8) == 0);
    uVar15 = (ulong)local_58[0];
    uVar1 = lVar17 + -1 + uVar15;
    uVar10 = uVar1 / uVar15;
    if ((long)*param_1 < (long)uVar10) {
      lVar12 = mpz_realloc(param_1,uVar10,uVar1 % uVar15);
    }
    else {
      lVar12 = *(long *)(param_1 + 2);
    }
    lVar11 = mpn_set_str_other(lVar12,pbVar8,lVar17,uVar18,local_58);
    if (lVar11 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("rn > 0","lib/mini-gmp.c",0x1164,"mpz_set_str");
    }
    lVar11 = lVar11 - (ulong)(*(long *)(lVar12 + -8 + lVar11 * 8) == 0);
    goto LAB_00110028;
  case 2:
    iVar16 = 1;
    lVar12 = lVar17;
    break;
  case 4:
    iVar16 = 2;
    lVar12 = lVar17 * 2;
    break;
  case 8:
    iVar16 = 3;
    lVar12 = lVar17 * 3;
    break;
  case 0x10:
    iVar16 = 4;
    lVar12 = lVar17 * 4;
    break;
  case 0x20:
    iVar16 = 5;
    lVar12 = lVar17 * 5;
  }
  uVar10 = lVar12 + 0x3fU >> 6;
  if ((long)*param_1 < (long)uVar10) {
    lVar12 = mpz_realloc(param_1,uVar10);
  }
  else {
    lVar12 = *(long *)(param_1 + 2);
  }
  lVar11 = 0;
  uVar18 = 0;
  pbVar14 = pbVar8 + lVar17 + -1;
  uVar13 = 0;
  do {
    uVar6 = uVar13 + iVar16;
    uVar18 = uVar18 | (ulong)*pbVar14 << ((byte)uVar13 & 0x3f);
    if (0x3f < uVar6) {
      *(ulong *)(lVar12 + lVar11 * 8) = uVar18;
      uVar6 = uVar6 - 0x40;
      lVar11 = lVar11 + 1;
      uVar18 = (ulong)(*pbVar14 >> ((char)iVar16 - (char)uVar6 & 0x1fU));
    }
    bVar19 = pbVar14 != pbVar8;
    pbVar14 = pbVar14 + -1;
    uVar13 = uVar6;
  } while (bVar19);
  if (uVar18 == 0) {
    if (0 < lVar11) {
      do {
        if (*(long *)(lVar12 + -8 + lVar11 * 8) != 0) goto LAB_00110028;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  else {
    *(ulong *)(lVar12 + lVar11 * 8) = uVar18;
    lVar11 = lVar11 + 1;
LAB_00110028:
    if ((long)uVar10 < lVar11) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("rn <= alloc","lib/mini-gmp.c",0x1167,"mpz_set_str");
    }
  }
  (*(code *)gmp_free_func)(pbVar8,local_68);
  iVar16 = (int)lVar11;
  if (bVar2 == 0x2d) {
    iVar16 = -(int)lVar11;
  }
  uVar9 = 0;
LAB_0010fe96:
  param_1[1] = iVar16;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mpz_init_set_str(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = &dummy_limb_35;
  mpz_set_str();
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
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  
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
      lVar5 = 1;
      lVar9 = 0;
    }
    else {
      lVar9 = param_4 * -2;
      lVar5 = 1;
      param_7 = param_7 + (param_2 + -1) * param_4;
    }
  }
  else {
    lVar9 = param_4 * 2;
    if (param_3 == param_5) {
      lVar9 = 0;
    }
    if (param_3 == 1) {
      lVar9 = -lVar9;
      param_7 = param_7 + (param_2 + -1) * param_4;
    }
    lVar5 = 1;
    if (param_5 == 1) {
      param_7 = param_7 + param_4 + -1;
      lVar5 = -1;
    }
  }
  iVar2 = *param_1;
  uVar10 = param_4 * param_2 + 7U >> 3;
  if ((long)iVar2 < (long)uVar10) {
    uVar6 = 1;
    if (uVar10 != 0) {
      uVar6 = uVar10;
    }
    if (iVar2 == 0) {
      lVar4 = (*(code *)gmp_allocate_func)();
    }
    else {
      lVar4 = (*(code *)gmp_reallocate_func)(*(undefined8 *)(param_1 + 2),(long)iVar2 * 8,uVar6 * 8)
      ;
    }
    iVar2 = param_1[1];
    *(long *)(param_1 + 2) = lVar4;
    *param_1 = (int)uVar6;
    iVar1 = -iVar2;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    if ((long)uVar6 < (long)iVar1) {
      param_1[1] = 0;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 2);
  }
  if (param_2 != 0) {
    if (lVar5 == 1) {
      lVar5 = 0;
      uVar6 = 0;
      lVar7 = 0;
      do {
        while (param_4 != 0) {
          pbVar8 = param_7 + param_4;
          lVar3 = lVar5;
          do {
            while( true ) {
              lVar5 = lVar3 + 1;
              uVar6 = uVar6 | (ulong)*param_7 << ((byte)((int)lVar3 << 3) & 0x3f);
              if (lVar5 == 8) break;
              param_7 = param_7 + 1;
              lVar3 = lVar5;
              if (pbVar8 == param_7) goto joined_r0x001103b4;
            }
            lVar5 = lVar7 + 1;
            param_7 = param_7 + 1;
            *(ulong *)(lVar4 + lVar7 * 8) = uVar6;
            lVar3 = 0;
            uVar6 = 0;
            lVar7 = lVar5;
            lVar5 = lVar3;
          } while (pbVar8 != param_7);
joined_r0x001103b4:
          param_2 = param_2 + -1;
          param_7 = pbVar8 + lVar9;
          if (param_2 == 0) goto LAB_0011032c;
        }
        param_7 = param_7 + lVar9;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
      lVar7 = 0;
      do {
        lVar3 = 0;
        pbVar8 = param_7;
        if (param_4 != 0) {
          while( true ) {
            uVar6 = uVar6 | (ulong)*pbVar8 << ((char)lVar5 * '\b' & 0x3fU);
            bVar11 = lVar5 == 7;
            lVar5 = lVar5 + 1;
            if (bVar11) {
              *(ulong *)(lVar4 + lVar7 * 8) = uVar6;
              uVar6 = 0;
              lVar5 = 0;
              lVar7 = lVar7 + 1;
            }
            if (param_4 == lVar3 + 1) break;
            pbVar8 = pbVar8 + -1;
            lVar3 = lVar3 + 1;
          }
          param_7 = param_7 + -param_4;
        }
        param_7 = param_7 + lVar9;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
LAB_0011032c:
    if ((lVar7 + 1) - (ulong)(lVar5 == 0) != uVar10) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i + (bytes > 0) == rn","lib/mini-gmp.c",0x11ca,"mpz_import");
    }
    if (uVar6 != 0) {
      *(ulong *)(lVar4 + lVar7 * 8) = uVar6;
      iVar2 = (int)lVar7 + 1;
      goto LAB_00110351;
    }
    if (lVar7 < 1) {
LAB_001103ee:
      iVar2 = (int)lVar7;
      goto LAB_00110351;
    }
    do {
      if (*(long *)(lVar4 + -8 + lVar7 * 8) != 0) goto LAB_001103ee;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar2 = 0;
LAB_00110351:
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
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  
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
    uVar7 = 0;
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("size > 0 || u->_mp_size == 0","lib/mini-gmp.c",0x11df,"mpz_export");
    }
    goto LAB_001105f2;
  }
  if (uVar2 == 0) {
    uVar7 = 0;
    goto LAB_001105f2;
  }
  uVar3 = -uVar2;
  if (0 < (int)uVar2) {
    uVar3 = uVar2;
  }
  uVar8 = (ulong)uVar3;
  uVar7 = *(ulong *)(*(long *)(param_7 + 8) + -8 + uVar8 * 8);
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("limb != 0","lib/mini-gmp.c",0x11f3,"mpz_export");
  }
  lVar12 = 0;
  do {
    lVar12 = lVar12 + 1;
    uVar7 = uVar7 >> 8;
  } while (uVar7 != 0);
  uVar1 = lVar12 + (param_4 - 1) + -8 + uVar8 * 8;
  uVar4 = uVar1 / param_4;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = (undefined1 *)(*(code *)gmp_allocate_func)(param_4 * uVar4);
  }
  puVar13 = param_1;
  if (param_5 == 0) {
    if (param_3 == -1) {
      lVar12 = 0;
    }
    else {
      lVar12 = param_4 * -2;
      puVar13 = param_1 + (uVar4 - 1) * param_4;
    }
joined_r0x001107e6:
    if (uVar1 < param_4) goto LAB_001107c4;
    puVar9 = puVar13 + param_4;
    lVar6 = 0;
    uVar11 = 0;
    uVar5 = 0;
    uVar7 = 0;
    puVar14 = puVar13;
    do {
      do {
        if (lVar6 == 0) {
          lVar6 = 7;
          if ((long)uVar8 <= (long)uVar5) goto LAB_001106ac;
          uVar7 = *(ulong *)(*(long *)(param_7 + 8) + uVar5 * 8);
          uVar5 = uVar5 + 1;
          *puVar13 = (char)uVar7;
        }
        else {
          lVar6 = lVar6 + -1;
LAB_001106ac:
          *puVar13 = (char)uVar7;
        }
        uVar7 = uVar7 >> 8;
        puVar13 = puVar13 + 1;
      } while (puVar13 != puVar9);
      uVar11 = uVar11 + 1;
      puVar13 = puVar14 + lVar12 + param_4;
      puVar9 = puVar9 + lVar12 + param_4;
      puVar14 = puVar13;
    } while (uVar11 < uVar4);
  }
  else {
    lVar12 = param_4 * 2;
    if (param_3 == param_5) {
      lVar12 = 0;
    }
    if (param_3 == 1) {
      lVar12 = -lVar12;
      puVar13 = param_1 + (uVar4 - 1) * param_4;
    }
    if (param_5 != 1) goto joined_r0x001107e6;
    puVar13 = puVar13 + (param_4 - 1);
    if (uVar1 < param_4) goto LAB_001107c4;
    lVar6 = 0;
    uVar7 = 0;
    uVar11 = 0;
    uVar5 = 0;
    do {
      uVar10 = 0;
      puVar9 = puVar13;
      do {
        if (lVar6 == 0) {
          lVar6 = 7;
          if ((long)uVar5 < (long)uVar8) {
            uVar7 = *(ulong *)(*(long *)(param_7 + 8) + uVar5 * 8);
            uVar5 = uVar5 + 1;
          }
        }
        else {
          lVar6 = lVar6 + -1;
        }
        uVar10 = uVar10 + 1;
        *puVar9 = (char)uVar7;
        uVar7 = uVar7 >> 8;
        puVar9 = puVar9 + -1;
      } while (param_4 != uVar10);
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + (lVar12 - param_4);
    } while (uVar11 < uVar4);
  }
  uVar7 = 1;
  if (param_4 <= uVar1) {
    uVar7 = uVar4;
  }
  if (uVar5 == uVar8) {
    if (uVar4 != uVar7) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("k == count","lib/mini-gmp.c",0x1233,"mpz_export");
    }
LAB_001105f2:
    if (param_2 != (ulong *)0x0) {
      *param_2 = uVar7;
    }
    return param_1;
  }
LAB_001107c4:
                    /* WARNING: Subroutine does not return */
  __assert_fail("i == un","lib/mini-gmp.c",0x1232,"mpz_export");
}



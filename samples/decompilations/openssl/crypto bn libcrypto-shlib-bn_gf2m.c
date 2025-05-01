
undefined8 BN_GF2m_add(long *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  long *plVar14;
  
  plVar11 = param_2;
  plVar14 = param_3;
  iVar3 = (int)param_2[1];
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar11 = param_3;
    plVar14 = param_2;
    iVar3 = (int)param_3[1];
  }
  lVar7 = bn_wexpand(param_1,iVar3);
  if (lVar7 == 0) {
    return 0;
  }
  uVar12 = *(uint *)(plVar14 + 1);
  if ((int)uVar12 < 1) {
    uVar12 = 0;
  }
  else {
    lVar7 = *plVar11;
    lVar4 = *plVar14;
    lVar10 = *param_1;
    if (((uVar12 - 1 < 2) || (lVar10 == lVar7 + 8)) || (lVar10 == lVar4 + 8)) {
      lVar8 = 0;
      do {
        *(ulong *)(lVar10 + lVar8) = *(ulong *)(lVar7 + lVar8) ^ *(ulong *)(lVar4 + lVar8);
        lVar8 = lVar8 + 8;
      } while ((long)(int)uVar12 * 8 != lVar8);
    }
    else {
      lVar8 = 0;
      do {
        uVar5 = ((ulong *)(lVar7 + lVar8))[1];
        uVar9 = ((ulong *)(lVar4 + lVar8))[1];
        *(ulong *)(lVar10 + lVar8) = *(ulong *)(lVar7 + lVar8) ^ *(ulong *)(lVar4 + lVar8);
        ((ulong *)(lVar10 + lVar8))[1] = uVar5 ^ uVar9;
        lVar8 = lVar8 + 0x10;
      } while (lVar8 != (ulong)(uVar12 >> 1) << 4);
      uVar9 = (ulong)(uVar12 & 0xfffffffe);
      if ((uVar12 & 1) != 0) {
        *(ulong *)(lVar10 + uVar9 * 8) =
             *(ulong *)(lVar7 + uVar9 * 8) ^ *(ulong *)(lVar4 + uVar9 * 8);
      }
    }
  }
  iVar3 = (int)plVar11[1];
  if ((int)uVar12 < iVar3) {
    lVar7 = *plVar11;
    lVar4 = *param_1;
    uVar13 = iVar3 - uVar12;
    lVar10 = (long)(int)uVar12;
    if (2 < uVar13 - 1) {
      lVar8 = lVar10 * 8;
      if (lVar4 + lVar8 != lVar7 + 8 + lVar8) {
        lVar10 = 0;
        do {
          puVar1 = (undefined8 *)(lVar8 + lVar7 + lVar10);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar4 + lVar8 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          lVar10 = lVar10 + 0x10;
        } while (lVar10 != (ulong)(uVar13 >> 1) << 4);
        if ((uVar13 & 1) != 0) {
          lVar10 = (long)(int)((uVar13 & 0xfffffffe) + uVar12);
          *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar7 + lVar10 * 8);
        }
        goto LAB_00100108;
      }
    }
    do {
      *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar7 + lVar10 * 8);
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < iVar3);
  }
LAB_00100108:
  *(int *)(param_1 + 1) = iVar3;
  bn_correct_top(param_1);
  return 1;
}



undefined8 BN_GF2m_mod_arr(long *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulong *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar15 = *param_3;
  if (uVar15 == 0) {
    BN_zero_ex();
    return 1;
  }
  if (param_2 == param_1) {
    puVar10 = (ulong *)*param_1;
    uVar13 = (int)param_1[1] - 1;
  }
  else {
    lVar5 = bn_wexpand(param_1,(int)param_2[1]);
    if (lVar5 == 0) {
      return 0;
    }
    uVar15 = *(uint *)(param_2 + 1);
    puVar10 = (ulong *)*param_1;
    if (0 < (int)uVar15) {
      uVar13 = uVar15 - 1;
      lVar5 = *param_2;
      if ((uVar13 < 3) || (puVar10 == (ulong *)(lVar5 + 8))) {
        lVar6 = 0;
        do {
          *(undefined8 *)((long)puVar10 + lVar6) = *(undefined8 *)(lVar5 + lVar6);
          lVar6 = lVar6 + 8;
        } while ((long)(int)uVar15 * 8 != lVar6);
      }
      else {
        lVar6 = 0;
        do {
          uVar3 = ((undefined8 *)(lVar5 + lVar6))[1];
          *(undefined8 *)((long)puVar10 + lVar6) = *(undefined8 *)(lVar5 + lVar6);
          ((undefined8 *)((long)puVar10 + lVar6))[1] = uVar3;
          lVar6 = lVar6 + 0x10;
        } while ((ulong)(uVar15 >> 1) << 4 != lVar6);
        if ((uVar15 & 1) != 0) {
          puVar10[uVar15 & 0xfffffffe] = *(ulong *)(lVar5 + (ulong)(uVar15 & 0xfffffffe) * 8);
          *(uint *)(param_1 + 1) = uVar15;
          uVar15 = *param_3;
          goto LAB_00100253;
        }
      }
    }
    uVar13 = uVar15 - 1;
    *(uint *)(param_1 + 1) = uVar15;
    uVar15 = *param_3;
  }
LAB_00100253:
  uVar14 = uVar15 + 0x3f;
  if (-1 < (int)uVar15) {
    uVar14 = uVar15;
  }
  uVar14 = (int)uVar14 >> 6;
  bVar7 = (byte)uVar15;
  bVar8 = (byte)((int)uVar15 >> 0x1f);
  if ((int)uVar14 < (int)uVar13) {
    do {
      while( true ) {
        uVar16 = puVar10[(int)uVar13];
        if (uVar16 != 0) break;
        uVar13 = uVar13 - 1;
LAB_0010029c:
        if ((int)uVar13 <= (int)uVar14) goto LAB_00100368;
      }
      puVar10[(int)uVar13] = 0;
      uVar9 = param_3[1];
      puVar11 = param_3 + 2;
      while (uVar9 != 0) {
        while( true ) {
          uVar9 = uVar15 - uVar9;
          uVar4 = uVar9 + 0x3f;
          if (-1 < (int)uVar9) {
            uVar4 = uVar9;
          }
          lVar5 = (long)(int)(uVar13 - ((int)uVar4 >> 6));
          puVar10[lVar5] = puVar10[lVar5] ^ uVar16 >> ((byte)uVar9 & 0x3f);
          if ((uVar9 & 0x3f) == 0) break;
          bVar2 = (byte)((int)uVar9 >> 0x1f);
          puVar10[lVar5 + -1] =
               puVar10[lVar5 + -1] ^
               uVar16 << (-(((byte)uVar9 + (bVar2 >> 2) & 0x3f) - (bVar2 >> 2)) & 0x3f);
          uVar9 = *puVar11;
          puVar11 = puVar11 + 1;
          if (uVar9 == 0) goto LAB_0010032d;
        }
        uVar9 = *puVar11;
        puVar11 = puVar11 + 1;
      }
LAB_0010032d:
      puVar10[(int)(uVar13 - uVar14)] =
           puVar10[(int)(uVar13 - uVar14)] ^ uVar16 >> (sbyte)(uVar15 & 0x3f);
      if ((uVar15 & 0x3f) == 0) goto LAB_0010029c;
      puVar10[(long)(int)(uVar13 - uVar14) + -1] =
           puVar10[(long)(int)(uVar13 - uVar14) + -1] ^
           uVar16 << (((bVar8 >> 2) - (bVar7 + (bVar8 >> 2) & 0x3f)) + 0x40 & 0x3f);
    } while ((int)uVar14 < (int)uVar13);
  }
LAB_00100368:
  if (uVar14 == uVar13) {
    puVar1 = puVar10 + (int)uVar14;
    bVar8 = ((bVar8 >> 2) - (bVar7 + (bVar8 >> 2) & 0x3f)) + 0x40;
    uVar16 = *puVar1;
    uVar12 = uVar16 >> (bVar7 & 0x3f);
    if (uVar12 != 0) {
      uVar13 = param_3[1];
      do {
        uVar16 = (uVar16 << (bVar8 & 0x3f)) >> (bVar8 & 0x3f);
        if ((uVar15 & 0x3f) == 0) {
          uVar16 = 0;
        }
        *puVar1 = uVar16;
        *puVar10 = *puVar10 ^ uVar12;
        uVar14 = uVar13;
        puVar11 = param_3 + 2;
        while (uVar14 != 0) {
          uVar9 = uVar14 + 0x3f;
          if (-1 < (int)uVar14) {
            uVar9 = uVar14;
          }
          puVar10[(int)uVar9 >> 6] = puVar10[(int)uVar9 >> 6] ^ uVar12 << ((byte)uVar14 & 0x3f);
          if (((uVar14 & 0x3f) != 0) &&
             (bVar7 = (byte)((int)uVar14 >> 0x1f),
             uVar16 = uVar12 >> (-(((byte)uVar14 + (bVar7 >> 2) & 0x3f) - (bVar7 >> 2)) & 0x3f),
             uVar16 != 0)) {
            puVar10[(long)((int)uVar9 >> 6) + 1] = puVar10[(long)((int)uVar9 >> 6) + 1] ^ uVar16;
          }
          uVar14 = *puVar11;
          puVar11 = puVar11 + 1;
        }
        uVar16 = *puVar1;
        uVar12 = uVar16 >> (sbyte)(uVar15 & 0x3f);
      } while (uVar12 != 0);
    }
  }
  bn_correct_top(param_1);
  return 1;
}



bool BN_GF2m_mod_sqr_arr(undefined8 param_1,long *param_2,undefined8 param_3,BN_CTX *param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  BIGNUM *pBVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  bool bVar19;
  
  BN_CTX_start(param_4);
  pBVar15 = BN_CTX_get(param_4);
  if ((pBVar15 == (BIGNUM *)0x0) || (lVar16 = bn_wexpand(pBVar15,(int)param_2[1] * 2), lVar16 == 0))
  {
    bVar19 = false;
  }
  else {
    lVar16 = param_2[1];
    iVar14 = (int)lVar16 + -1;
    if (-1 < iVar14) {
      lVar17 = (long)iVar14;
      lVar1 = *param_2;
      puVar18 = pBVar15->d + iVar14 * 2;
      do {
        uVar2 = *(undefined8 *)(lVar1 + lVar17 * 8);
        uVar4 = (uint)((ulong)uVar2 >> 0x20);
        bVar5 = (byte)((ulong)uVar2 >> 0x38);
        uVar6 = (ushort)((ulong)uVar2 >> 0x30);
        puVar18[1] = (ulong)((uVar4 >> 8) * 2 & 4 |
                            (uVar4 >> 8) * 8 & 0x40 | (uVar4 >> 8) * 4 & 0x10 | uVar4 >> 8 & 1) <<
                     0x10 | (ulong)(bVar5 & 1 | (uint)bVar5 * 4 & 0x10 | (uint)bVar5 * 8 & 0x40 |
                                   (uint)bVar5 * 2 & 4) << 0x30 |
                            (ulong)(uVar4 & 1 | uVar4 * 4 & 0x10 | uVar4 * 8 & 0x40 | uVar4 * 2 & 4)
                            | (ulong)(uVar4 >> 0x1c & 1 |
                                      (uVar4 >> 0x1c) * 4 & 0x10 | (uVar4 >> 0x1c) * 8 & 0x40 |
                                     (uVar4 >> 0x1c) * 2 & 4) << 0x38 |
                            (ulong)((uVar4 >> 0x14) * 8 & 0x40 | (uVar4 >> 0x14) * 4 & 0x10 |
                                    uVar4 >> 0x14 & 1 | (uVar4 >> 0x14) * 2 & 4) << 0x28 |
                            (ulong)((uint)uVar6 * 8 & 0x40 | (uint)uVar6 * 4 & 0x10 | uVar6 & 1 |
                                   (uint)uVar6 * 2 & 4) << 0x20 |
                            (ulong)((uVar4 >> 0xc) * 8 & 0x40 | (uVar4 >> 0xc) * 4 & 0x10 |
                                    uVar4 >> 0xc & 1 | (uVar4 >> 0xc) * 2 & 4) << 0x18 |
                     (ulong)((uVar4 >> 4) * 2 & 4 |
                            (uVar4 >> 4) * 8 & 0x40 | (uVar4 >> 4) * 4 & 0x10 | uVar4 >> 4 & 1) << 8
        ;
        uVar3 = *(ulong *)(lVar1 + lVar17 * 8);
        uVar4 = (uint)(uVar3 >> 0x1c);
        uVar7 = (uint)uVar3;
        uVar8 = (uint)(uVar3 >> 0x18);
        uVar9 = (uint)(uVar3 >> 0x14);
        uVar10 = (uint)(uVar3 >> 0x10);
        uVar11 = (uint)(uVar3 >> 0xc);
        uVar12 = (uint)(uVar3 >> 8);
        uVar13 = (uint)(uVar3 >> 4);
        lVar17 = lVar17 + -1;
        *puVar18 = (ulong)(uVar12 * 2 & 4 | uVar12 * 8 & 0x40 | uVar12 * 4 & 0x10 | uVar12 & 1) <<
                   0x10 | (ulong)(uVar8 & 1 | uVar8 * 4 & 0x10 | uVar8 * 8 & 0x40 | uVar8 * 2 & 4)
                          << 0x30 | (ulong)(uVar7 & 1 | uVar7 * 4 & 0x10 | uVar7 * 8 & 0x40 |
                                           uVar7 * 2 & 4) |
                                    (ulong)(uVar4 & 1 | uVar4 * 4 & 0x10 | uVar4 * 8 & 0x40 |
                                           uVar4 * 2 & 4) << 0x38 |
                          (ulong)(uVar9 * 8 & 0x40 | uVar9 * 4 & 0x10 | uVar9 & 1 | uVar9 * 2 & 4)
                          << 0x28 | (ulong)(uVar10 * 8 & 0x40 | uVar10 * 4 & 0x10 | uVar10 & 1 |
                                           uVar10 * 2 & 4) << 0x20 |
                          (ulong)(uVar11 * 8 & 0x40 | uVar11 * 4 & 0x10 | uVar11 & 1 |
                                 uVar11 * 2 & 4) << 0x18 |
                   (ulong)(uVar13 * 2 & 4 | uVar13 * 8 & 0x40 | uVar13 * 4 & 0x10 | uVar13 & 1) << 8
        ;
        puVar18 = puVar18 + -2;
      } while (-1 < (int)lVar17);
    }
    pBVar15->top = (int)lVar16 * 2;
    bn_correct_top(pBVar15);
    iVar14 = BN_GF2m_mod_arr(param_1,pBVar15,param_3);
    bVar19 = iVar14 != 0;
  }
  BN_CTX_end(param_4);
  return bVar19;
}



ulong BN_GF2m_mod_mul_arr(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                         BN_CTX *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  int iVar5;
  BIGNUM *pBVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
      return uVar8;
    }
    goto LAB_00100bf3;
  }
  BN_CTX_start(param_5);
  pBVar6 = BN_CTX_get(param_5);
  if (pBVar6 == (BIGNUM *)0x0) {
LAB_00100b65:
    uVar8 = 0;
  }
  else {
    uVar14 = (int)param_3[1] + (int)param_2[1] + 4;
    lVar7 = bn_wexpand(pBVar6);
    if (lVar7 == 0) goto LAB_00100b65;
    pBVar6->top = uVar14;
    if (0 < (int)uVar14) {
      memset(pBVar6->d,0,(ulong)uVar14 << 3);
    }
    iVar12 = (int)param_3[1];
    if (0 < iVar12) {
      iVar5 = (int)param_2[1];
      lVar7 = 0;
      iVar10 = 0;
      while( true ) {
        uVar15 = 0;
        uVar3 = *(undefined8 *)(*param_3 + lVar7);
        if (iVar12 != iVar10 + 1) {
          uVar15 = *(undefined8 *)(*param_3 + 8 + lVar7);
        }
        if (iVar5 < 1) break;
        iVar12 = 0;
        lVar9 = 8;
        lVar13 = lVar7;
        do {
          uVar11 = 0;
          puVar1 = (undefined8 *)(*param_2 + -8 + lVar9);
          if (iVar12 + 1 != iVar5) {
            uVar11 = *(undefined8 *)(*param_2 + lVar9);
          }
          iVar12 = iVar12 + 2;
          lVar9 = lVar9 + 0x10;
          bn_GF2m_mul_2x2(&local_68,uVar11,*puVar1,uVar15,uVar3);
          puVar4 = pBVar6->d;
          *(ulong *)((long)puVar4 + lVar13) = *(ulong *)((long)puVar4 + lVar13) ^ local_68;
          puVar2 = (ulong *)((long)puVar4 + lVar13 + 8);
          *puVar2 = *puVar2 ^ local_60;
          puVar2 = (ulong *)((long)puVar4 + lVar13 + 0x10);
          *puVar2 = *puVar2 ^ local_58;
          puVar4 = (ulong *)((long)puVar4 + lVar13 + 0x18);
          *puVar4 = *puVar4 ^ local_50;
          iVar5 = (int)param_2[1];
          lVar13 = lVar13 + 0x10;
        } while (iVar12 < iVar5);
        iVar12 = (int)param_3[1];
        iVar10 = iVar10 + 2;
        if (iVar12 <= iVar10) break;
        lVar7 = lVar7 + 0x10;
      }
    }
    bn_correct_top(pBVar6);
    iVar12 = BN_GF2m_mod_arr(param_1,pBVar6,param_4);
    uVar8 = (ulong)(iVar12 != 0);
  }
  BN_CTX_end(param_5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_00100bf3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint BN_GF2m_mod_exp_arr(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,undefined8 param_4,
                        BN_CTX *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *pBVar4;
  bool bVar5;
  
  iVar1 = BN_is_zero(param_3);
  if (iVar1 != 0) {
    uVar2 = BN_set_word(param_1,1);
    return uVar2;
  }
  iVar1 = BN_abs_is_word(param_3);
  if (iVar1 == 0) {
    BN_CTX_start(param_5);
    pBVar4 = BN_CTX_get(param_5);
    uVar2 = 0;
    if ((pBVar4 != (BIGNUM *)0x0) && (iVar1 = BN_GF2m_mod_arr(pBVar4,param_2,param_4), iVar1 != 0))
    {
      iVar1 = BN_num_bits(param_3);
      iVar1 = iVar1 + -2;
      if (-1 < iVar1) {
        do {
          iVar3 = BN_GF2m_mod_sqr_arr(pBVar4,pBVar4,param_4,param_5);
          if ((iVar3 == 0) ||
             ((iVar3 = BN_is_bit_set(param_3,iVar1), iVar3 != 0 &&
              (iVar3 = BN_GF2m_mod_mul_arr(pBVar4,pBVar4,param_2,param_4,param_5), iVar3 == 0))))
          goto LAB_00100c6f;
          bVar5 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar5);
      }
      pBVar4 = BN_copy(param_1,pBVar4);
      uVar2 = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
LAB_00100c6f:
    BN_CTX_end(param_5);
  }
  else {
    pBVar4 = BN_copy(param_1,param_2);
    uVar2 = (uint)(pBVar4 != (BIGNUM *)0x0);
  }
  return uVar2;
}



undefined4 BN_GF2m_mod_sqrt_arr(undefined8 param_1,undefined8 param_2,int *param_3,BN_CTX *param_4)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *a;
  
  if (*param_3 == 0) {
    BN_zero_ex();
    return 1;
  }
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_set_bit(a,*param_3 + -1);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,a,param_3,param_4);
      goto LAB_00100dbe;
    }
  }
  uVar2 = 0;
LAB_00100dbe:
  BN_CTX_end(param_4);
  return uVar2;
}



bool BN_GF2m_mod_solve_quad_arr(BIGNUM *param_1,undefined8 param_2,uint *param_3,BN_CTX *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *pBVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  bool bVar9;
  int local_44;
  
  if (*param_3 == 0) {
    BN_zero_ex();
    return true;
  }
  BN_CTX_start(param_4);
  pBVar4 = BN_CTX_get(param_4);
  a = BN_CTX_get(param_4);
  a_00 = BN_CTX_get(param_4);
  if ((a_00 != (BIGNUM *)0x0) && (iVar1 = BN_GF2m_mod_arr(pBVar4,param_2,param_3), iVar1 != 0)) {
    iVar1 = BN_is_zero(pBVar4);
    if (iVar1 != 0) {
      bVar9 = true;
      BN_zero_ex(param_1);
      goto LAB_00100e70;
    }
    uVar2 = *param_3 & 1;
    if (uVar2 == 0) {
      pBVar5 = BN_CTX_get(param_4);
      pBVar6 = BN_CTX_get(param_4);
      pBVar7 = BN_CTX_get(param_4);
      if (pBVar7 != (BIGNUM *)0x0) {
        local_44 = 0;
        do {
          iVar1 = BN_priv_rand_ex(pBVar5,*param_3,0,0,0,param_4);
          if ((iVar1 == 0) || (iVar1 = BN_GF2m_mod_arr(pBVar5,pBVar5,param_3), iVar1 == 0))
          goto LAB_00100e6c;
          BN_zero_ex(a);
          pBVar8 = BN_copy(a_00,pBVar5);
          if (pBVar8 == (BIGNUM *)0x0) goto LAB_00100e6c;
          if (1 < (int)*param_3) {
            iVar1 = 1;
            do {
              iVar3 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
              if ((((iVar3 == 0) ||
                   (iVar3 = BN_GF2m_mod_sqr_arr(pBVar6,a_00,param_3,param_4), iVar3 == 0)) ||
                  (iVar3 = BN_GF2m_mod_mul_arr(pBVar7,pBVar6,pBVar4), iVar3 == 0)) ||
                 ((iVar3 = BN_GF2m_add(a,a,pBVar7), iVar3 == 0 ||
                  (iVar3 = BN_GF2m_add(a_00,pBVar6,pBVar5), iVar3 == 0)))) goto LAB_00100e6c;
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)*param_3);
          }
          local_44 = local_44 + 1;
          iVar1 = BN_is_zero(a_00);
        } while ((iVar1 != 0) && (local_44 != 0x32));
        iVar1 = BN_is_zero(a_00);
        if (iVar1 == 0) goto LAB_001010b5;
        ERR_new();
        ERR_set_debug("crypto/bn/bn_gf2m.c",0x433,"BN_GF2m_mod_solve_quad_arr");
        ERR_set_error(3,0x71,0);
      }
    }
    else {
      pBVar5 = BN_copy(a,pBVar4);
      if (pBVar5 != (BIGNUM *)0x0) {
        if (2 < (int)*param_3) {
          do {
            iVar1 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
            if (((iVar1 == 0) || (iVar1 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4), iVar1 == 0)) ||
               (iVar1 = BN_GF2m_add(a,a,pBVar4), iVar1 == 0)) goto LAB_00100e6c;
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 <= (int)(*param_3 - 1) / 2);
        }
LAB_001010b5:
        iVar1 = BN_GF2m_mod_sqr_arr(a_00,a,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = BN_GF2m_add(a_00,a,a_00), iVar1 != 0)) {
          iVar1 = BN_ucmp(a_00,pBVar4);
          if (iVar1 == 0) {
            pBVar4 = BN_copy(param_1,a);
            bVar9 = pBVar4 != (BIGNUM *)0x0;
            goto LAB_00100e70;
          }
          ERR_new();
          ERR_set_debug("crypto/bn/bn_gf2m.c",0x43d,"BN_GF2m_mod_solve_quad_arr");
          ERR_set_error(3,0x74,0);
        }
      }
    }
  }
LAB_00100e6c:
  bVar9 = false;
LAB_00100e70:
  BN_CTX_end(param_4);
  return bVar9;
}



int BN_GF2m_poly2arr(long *param_1,int *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = BN_is_odd();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (int)param_1[1] + -1;
  if (iVar3 < 0) {
    iVar3 = 1;
    iVar5 = 0;
  }
  else {
    lVar7 = (long)iVar3;
    lVar1 = *param_1;
    iVar5 = 0;
    iVar3 = iVar3 * 0x40 + -1;
    do {
      while (uVar2 = *(ulong *)(lVar1 + lVar7 * 8), uVar2 == 0) {
        lVar7 = lVar7 + -1;
        iVar3 = iVar3 + -0x40;
        if ((int)lVar7 < 0) goto LAB_00101252;
      }
      uVar6 = 0x8000000000000000;
      iVar4 = iVar3 + 0x40;
      do {
        if ((uVar2 & uVar6) != 0) {
          if (iVar5 < param_3) {
            param_2[iVar5] = iVar4;
          }
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + -1;
        uVar6 = uVar6 >> 1;
      } while (iVar4 != iVar3);
      lVar7 = lVar7 + -1;
      iVar3 = iVar3 + -0x40;
    } while (-1 < (int)lVar7);
LAB_00101252:
    if ((0 < iVar5) && (0x295 < *param_2)) {
      return 0;
    }
    iVar3 = iVar5 + 1;
  }
  if (iVar5 < param_3) {
    param_2[iVar5] = -1;
  }
  return iVar3;
}



undefined8 BN_GF2m_mod(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_GF2m_poly2arr(param_3,auStack_38,6);
  if ((iVar1 == 0) || (6 < iVar1)) {
    ERR_new();
    ERR_set_debug("crypto/bn/bn_gf2m.c",399,__func___6);
    ERR_set_error(3,0x6a,0);
    uVar2 = 0;
  }
  else {
    uVar2 = BN_GF2m_mod_arr(param_1,param_2,auStack_38);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BN_GF2m_mod_mul(undefined8 param_1,undefined8 param_2,undefined8 param_3,BIGNUM *param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc((int)((long)iVar1 << 2),"crypto/bn/bn_gf2m.c",0x1dd);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_4,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_gf2m.c",0x1e2,"BN_GF2m_mod_mul");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_mul_arr(param_1,param_2,param_3,ptr,param_5);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}



bool BN_GF2m_mod_inv(BIGNUM *param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  uint uVar1;
  ulong *puVar2;
  BIGNUM *pBVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  bool bVar23;
  BIGNUM *local_b0;
  BIGNUM *local_a8;
  BIGNUM *local_a0;
  BIGNUM *local_98;
  ulong *local_80;
  ulong *local_78;
  uint local_70;
  
  BN_CTX_start(param_4);
  pBVar9 = BN_CTX_get(param_4);
  if ((pBVar9 != (BIGNUM *)0x0) && (iVar6 = BN_num_bits(param_3), 1 < iVar6)) {
    do {
      iVar7 = BN_priv_rand_ex(pBVar9,iVar6 + -1,0xffffffff,0,0);
      if (iVar7 == 0) goto LAB_001014a8;
      iVar7 = BN_is_zero(pBVar9);
    } while (iVar7 != 0);
    iVar6 = BN_GF2m_mod_mul(param_1,param_2,pBVar9,param_3,param_4);
    if (iVar6 != 0) {
      BN_CTX_start(param_4);
      local_a8 = BN_CTX_get(param_4);
      local_a0 = BN_CTX_get(param_4);
      local_b0 = BN_CTX_get(param_4);
      local_98 = BN_CTX_get(param_4);
      if ((((local_98 != (BIGNUM *)0x0) &&
           (iVar6 = BN_GF2m_mod(local_b0,param_1,param_3), iVar6 != 0)) &&
          (iVar6 = BN_is_zero(local_b0), iVar6 == 0)) &&
         (pBVar10 = BN_copy(local_98,param_3), pBVar10 != (BIGNUM *)0x0)) {
        iVar7 = BN_num_bits(local_b0);
        iVar6 = BN_num_bits(local_98);
        uVar1 = param_3->top;
        lVar11 = bn_wexpand(local_b0);
        if (lVar11 != 0) {
          iVar8 = local_b0->top;
          puVar21 = local_b0->d;
          if (iVar8 < (int)uVar1) {
            memset(puVar21 + iVar8,0,(ulong)((uVar1 - 1) - iVar8) * 8 + 8);
          }
          local_b0->top = uVar1;
          lVar11 = bn_wexpand(local_a8);
          if (lVar11 != 0) {
            puVar22 = local_a8->d;
            *puVar22 = 1;
            if ((int)uVar1 < 2) {
              local_a8->top = uVar1;
              lVar11 = bn_wexpand(local_a0);
              if (lVar11 != 0) {
                local_80 = local_a0->d;
                if (uVar1 != 1) {
                  local_70 = uVar1 - 1;
                  goto LAB_0010168b;
                }
                local_70 = 0;
                goto LAB_00101672;
              }
            }
            else {
              local_70 = uVar1 - 1;
              memset(puVar22 + 1,0,(ulong)local_70 << 3);
              local_a8->top = uVar1;
              lVar11 = bn_wexpand(local_a0);
              if (lVar11 != 0) {
                local_80 = local_a0->d;
LAB_00101672:
                memset(local_80,0,(ulong)uVar1 << 3);
LAB_0010168b:
                local_a0->top = uVar1;
                uVar14 = uVar1 & 0xfffffffe;
                local_78 = local_98->d;
LAB_001016f8:
                iVar8 = iVar6;
                pBVar3 = local_a8;
                pBVar10 = local_b0;
                uVar16 = *puVar21;
                iVar6 = iVar8;
                if (iVar7 == 0) {
                  if (uVar16 == 0) goto LAB_00101540;
LAB_00101713:
                  if (uVar16 == 1) goto LAB_00101a14;
                }
                else {
                  if ((uVar16 & 1) == 0) {
                    puVar2 = param_3->d;
                    uVar20 = -(ulong)((uint)*puVar22 & 1);
                    uVar17 = *puVar2 & uVar20 ^ *puVar22;
                    puVar13 = puVar22;
                    puVar19 = puVar21;
                    if (1 < (int)uVar1) {
                      uVar12 = 1;
                      uVar15 = uVar16;
                      uVar18 = uVar17;
                      do {
                        uVar16 = puVar21[uVar12];
                        puVar21[uVar12 - 1] = uVar16 << 0x3f | uVar15 >> 1;
                        uVar17 = puVar2[uVar12] & uVar20 ^ puVar22[uVar12];
                        puVar22[uVar12 - 1] = uVar17 << 0x3f | uVar18 >> 1;
                        uVar12 = uVar12 + 1;
                        uVar15 = uVar16;
                        uVar18 = uVar17;
                      } while (uVar1 != uVar12);
                      puVar13 = puVar22 + (int)local_70;
                      puVar19 = puVar21 + (int)local_70;
                    }
                    iVar7 = iVar7 + -1;
                    *puVar19 = uVar16 >> 1;
                    *puVar13 = uVar17 >> 1;
                    goto LAB_001016f8;
                  }
                  if (iVar7 < 0x41) goto LAB_00101713;
                }
                if (iVar7 < iVar8) {
                  ppuVar4 = &local_b0->d;
                  ppuVar5 = &local_a8->d;
                  puVar21 = local_78;
                  puVar22 = local_80;
                  if (0 < (int)uVar1) {
                    local_b0 = local_98;
                    local_98 = pBVar10;
                    local_a8 = local_a0;
                    local_a0 = pBVar3;
                    local_80 = *ppuVar5;
                    local_78 = *ppuVar4;
                    iVar6 = iVar7;
                    iVar7 = iVar8;
LAB_0010177c:
                    if (((local_70 < 2) ||
                        (((ulong)((long)puVar21 + (0xf - (long)local_80)) < 0x1f ||
                         (local_78 + 1 == puVar21 ||
                         (ulong)((long)puVar21 + (0xf - (long)puVar22)) < 0x1f)) ||
                         local_78 + 1 == puVar22)) || (puVar22 == local_80 + 1)) {
                      lVar11 = 0;
                      do {
                        *(ulong *)((long)puVar21 + lVar11) =
                             *(ulong *)((long)puVar21 + lVar11) ^
                             *(ulong *)((long)local_78 + lVar11);
                        *(ulong *)((long)puVar22 + lVar11) =
                             *(ulong *)((long)puVar22 + lVar11) ^
                             *(ulong *)((long)local_80 + lVar11);
                        lVar11 = lVar11 + 8;
                      } while ((long)(int)uVar1 * 8 != lVar11);
                    }
                    else {
                      lVar11 = 0;
                      do {
                        uVar16 = ((ulong *)((long)puVar21 + lVar11))[1];
                        uVar17 = ((ulong *)((long)local_78 + lVar11))[1];
                        *(ulong *)((long)puVar21 + lVar11) =
                             *(ulong *)((long)puVar21 + lVar11) ^
                             *(ulong *)((long)local_78 + lVar11);
                        ((ulong *)((long)puVar21 + lVar11))[1] = uVar16 ^ uVar17;
                        uVar16 = ((ulong *)((long)puVar22 + lVar11))[1];
                        uVar17 = ((ulong *)((long)local_80 + lVar11))[1];
                        *(ulong *)((long)puVar22 + lVar11) =
                             *(ulong *)((long)puVar22 + lVar11) ^
                             *(ulong *)((long)local_80 + lVar11);
                        ((ulong *)((long)puVar22 + lVar11))[1] = uVar16 ^ uVar17;
                        lVar11 = lVar11 + 0x10;
                      } while ((ulong)(uVar1 >> 1) << 4 != lVar11);
                      if (uVar1 != uVar14) {
                        puVar21[(int)uVar14] = puVar21[(int)uVar14] ^ local_78[(int)uVar14];
                        puVar22[(int)uVar14] = puVar22[(int)uVar14] ^ local_80[(int)uVar14];
                      }
                    }
                    goto LAB_0010183a;
                  }
                  pBVar10 = local_98;
                  local_98 = local_b0;
                  pBVar3 = local_a0;
                  local_a0 = local_a8;
                  iVar6 = iVar7;
                  local_b0 = pBVar10;
                  local_a8 = pBVar3;
                  local_80 = *ppuVar5;
                  local_78 = *ppuVar4;
                  iVar7 = iVar8;
                }
                else {
                  if (0 < (int)uVar1) goto LAB_0010177c;
LAB_0010183a:
                  if (iVar7 == iVar6) {
                    iVar7 = iVar6 + 0x3e;
                    if (-1 < iVar6 + -1) {
                      iVar7 = iVar6 + -1;
                    }
                    iVar7 = iVar7 >> 6;
                    uVar16 = puVar21[iVar7];
                    if (uVar16 == 0) {
                      if (iVar7 != 0) {
                        lVar11 = (long)(int)(iVar7 - 1U);
                        do {
                          uVar16 = puVar21[lVar11];
                          if (uVar16 != 0) {
                            iVar7 = (int)lVar11 << 6;
                            goto LAB_0010189d;
                          }
                          lVar11 = lVar11 + -1;
                        } while (((long)iVar7 + -2) - (ulong)(iVar7 - 1U) != lVar11);
                        iVar7 = 0;
                      }
                    }
                    else {
                      iVar7 = iVar7 << 6;
                    }
LAB_0010189d:
                    iVar8 = BN_num_bits_word(uVar16);
                    iVar7 = iVar7 + iVar8;
                  }
                }
                goto LAB_001016f8;
              }
            }
          }
        }
      }
LAB_00101540:
      BN_CTX_end(param_4);
    }
  }
LAB_001014a8:
  bVar23 = false;
LAB_001014aa:
  BN_CTX_end(param_4);
  return bVar23;
LAB_00101a14:
  bn_correct_top(local_a8);
  pBVar10 = BN_copy(param_1,local_a8);
  if (pBVar10 != (BIGNUM *)0x0) {
    BN_CTX_end(param_4);
    iVar6 = BN_GF2m_mod_mul(param_1,param_1,pBVar9,param_3,param_4);
    bVar23 = iVar6 != 0;
    goto LAB_001014aa;
  }
  goto LAB_00101540;
}



bool BN_GF2m_mod_div(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    BN_CTX *param_5)

{
  int iVar1;
  BIGNUM *pBVar2;
  bool bVar3;
  
  BN_CTX_start(param_5);
  pBVar2 = BN_CTX_get(param_5);
  if (pBVar2 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_mod_inv(pBVar2,param_3,param_4,param_5);
    if (iVar1 != 0) {
      iVar1 = BN_GF2m_mod_mul(param_1,param_2,pBVar2,param_4,param_5);
      bVar3 = iVar1 != 0;
      goto LAB_00101b20;
    }
  }
  bVar3 = false;
LAB_00101b20:
  BN_CTX_end(param_5);
  return bVar3;
}



int BN_GF2m_mod_sqr(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc((int)((long)iVar1 << 2),"crypto/bn/bn_gf2m.c",0x219);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_3,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_gf2m.c",0x21e,"BN_GF2m_mod_sqr");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_sqr_arr(param_1,param_2,ptr,param_4);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}



int BN_GF2m_mod_exp(undefined8 param_1,undefined8 param_2,undefined8 param_3,BIGNUM *param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_4);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc((int)((long)iVar1 << 2),"crypto/bn/bn_gf2m.c",0x398);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_4,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_gf2m.c",0x39d,"BN_GF2m_mod_exp");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_exp_arr(param_1,param_2,param_3,ptr,param_5);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}



int BN_GF2m_mod_sqrt(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc((int)((long)iVar1 << 2),"crypto/bn/bn_gf2m.c",0x3d6);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_3,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_gf2m.c",0x3db,"BN_GF2m_mod_sqrt");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_sqrt_arr(param_1,param_2,ptr,param_4);
    }
    CRYPTO_free(ptr);
  }
  return iVar2;
}



int BN_GF2m_mod_solve_quad(undefined8 param_1,undefined8 param_2,BIGNUM *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  void *ptr;
  
  iVar1 = BN_num_bits(param_3);
  iVar1 = iVar1 + 1;
  ptr = CRYPTO_malloc((int)((long)iVar1 << 2),"crypto/bn/bn_gf2m.c",0x45c);
  if (ptr == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = BN_GF2m_poly2arr(param_3,ptr,iVar1);
    if ((iVar2 == 0) || (iVar1 < iVar2)) {
      ERR_new();
      ERR_set_debug("crypto/bn/bn_gf2m.c",0x461,"BN_GF2m_mod_solve_quad");
      ERR_set_error(3,0x6a,0);
    }
    else {
      iVar2 = BN_GF2m_mod_solve_quad_arr(param_1,param_2,ptr,param_4);
    }
  }
  CRYPTO_free(ptr);
  return iVar2;
}



int BN_GF2m_arr2poly(int *param_1,BIGNUM *param_2)

{
  int iVar1;
  
  BN_zero_ex(param_2);
  iVar1 = *param_1;
  if (iVar1 != -1) {
    param_1 = param_1 + 1;
    do {
      iVar1 = BN_set_bit(param_2,iVar1);
      if (iVar1 == 0) {
        return iVar1;
      }
      iVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (iVar1 != -1);
  }
  return 1;
}



undefined4
BN_GF2m_mod_inv_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,BN_CTX *param_4)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *pBVar3;
  
  BN_CTX_start(param_4);
  pBVar3 = BN_CTX_get(param_4);
  if (pBVar3 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_arr2poly(param_3,pBVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_inv(param_1,param_2,pBVar3,param_4);
      goto LAB_00101f91;
    }
  }
  uVar2 = 0;
LAB_00101f91:
  BN_CTX_end(param_4);
  return uVar2;
}



undefined4
BN_GF2m_mod_div_arr(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   BN_CTX *param_5)

{
  int iVar1;
  undefined4 uVar2;
  BIGNUM *pBVar3;
  
  BN_CTX_start(param_5);
  pBVar3 = BN_CTX_get(param_5);
  if (pBVar3 != (BIGNUM *)0x0) {
    iVar1 = BN_GF2m_arr2poly(param_4,pBVar3);
    if (iVar1 != 0) {
      uVar2 = BN_GF2m_mod_div(param_1,param_2,param_3,pBVar3,param_5);
      goto LAB_0010200a;
    }
  }
  uVar2 = 0;
LAB_0010200a:
  BN_CTX_end(param_5);
  return uVar2;
}



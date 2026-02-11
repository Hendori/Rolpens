
undefined8 BN_GF2m_add(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = param_2;
  plVar8 = param_3;
  iVar6 = (int)param_2[1];
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar7 = param_3;
    plVar8 = param_2;
    iVar6 = (int)param_3[1];
  }
  lVar3 = bn_wexpand(param_1,iVar6);
  if (lVar3 != 0) {
    iVar6 = (int)plVar8[1];
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else {
      lVar3 = *plVar7;
      lVar2 = *plVar8;
      lVar4 = 0;
      lVar5 = *param_1;
      do {
        *(ulong *)(lVar5 + lVar4) = *(ulong *)(lVar3 + lVar4) ^ *(ulong *)(lVar2 + lVar4);
        lVar4 = lVar4 + 8;
      } while ((long)iVar6 * 8 != lVar4);
    }
    iVar1 = (int)plVar7[1];
    if (iVar6 < iVar1) {
      lVar3 = *plVar7;
      lVar2 = *param_1;
      lVar5 = (long)iVar6;
      do {
        *(undefined8 *)(lVar2 + lVar5 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar1);
    }
    *(int *)(param_1 + 1) = iVar1;
    bn_correct_top(param_1);
    return 1;
  }
  return 0;
}



undefined8 BN_GF2m_mod_arr(long *param_1,long *param_2,uint *param_3)

{
  ulong *puVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  ulong *puVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  
  uVar15 = *param_3;
  if (uVar15 == 0) {
    BN_zero_ex();
  }
  else {
    if (param_2 == param_1) {
      iVar13 = (int)param_1[1];
      puVar11 = (ulong *)*param_1;
    }
    else {
      lVar6 = bn_wexpand(param_1,(int)param_2[1]);
      if (lVar6 == 0) {
        return 0;
      }
      iVar13 = (int)param_2[1];
      puVar11 = (ulong *)*param_1;
      if (0 < iVar13) {
        lVar6 = *param_2;
        lVar7 = 0;
        do {
          *(undefined8 *)((long)puVar11 + lVar7) = *(undefined8 *)(lVar6 + lVar7);
          lVar7 = lVar7 + 8;
        } while ((long)iVar13 * 8 != lVar7);
      }
      *(int *)(param_1 + 1) = iVar13;
      uVar15 = *param_3;
    }
    uVar10 = uVar15 + 0x3f;
    if (-1 < (int)uVar15) {
      uVar10 = uVar15;
    }
    iVar13 = iVar13 + -1;
    iVar14 = (int)uVar10 >> 6;
    bVar8 = (byte)uVar15;
    bVar9 = (byte)((int)uVar15 >> 0x1f);
    if (iVar14 < iVar13) {
      do {
        while( true ) {
          uVar16 = puVar11[iVar13];
          if (uVar16 != 0) break;
          iVar13 = iVar13 + -1;
LAB_0010018c:
          if (iVar13 <= iVar14) goto LAB_00100250;
        }
        puVar11[iVar13] = 0;
        uVar10 = param_3[1];
        puVar3 = param_3 + 2;
        while (uVar10 != 0) {
          uVar10 = uVar15 - uVar10;
          uVar4 = uVar10 + 0x3f;
          if (-1 < (int)uVar10) {
            uVar4 = uVar10;
          }
          lVar6 = (long)(iVar13 - ((int)uVar4 >> 6));
          puVar11[lVar6] = puVar11[lVar6] ^ uVar16 >> ((byte)uVar10 & 0x3f);
          if ((uVar10 & 0x3f) != 0) {
            bVar2 = (byte)((int)uVar10 >> 0x1f);
            puVar11[lVar6 + -1] =
                 puVar11[lVar6 + -1] ^
                 uVar16 << (-(((byte)uVar10 + (bVar2 >> 2) & 0x3f) - (bVar2 >> 2)) & 0x3f);
          }
          uVar10 = *puVar3;
          puVar3 = puVar3 + 1;
        }
        puVar11[iVar13 - iVar14] = puVar11[iVar13 - iVar14] ^ uVar16 >> (sbyte)(uVar15 & 0x3f);
        if ((uVar15 & 0x3f) == 0) goto LAB_0010018c;
        puVar11[(long)(iVar13 - iVar14) + -1] =
             puVar11[(long)(iVar13 - iVar14) + -1] ^
             uVar16 << (((bVar9 >> 2) - (bVar8 + (bVar9 >> 2) & 0x3f)) + 0x40 & 0x3f);
      } while (iVar14 < iVar13);
    }
LAB_00100250:
    if (iVar14 == iVar13) {
      puVar1 = puVar11 + iVar14;
      bVar9 = ((bVar9 >> 2) - (bVar8 + (bVar9 >> 2) & 0x3f)) + 0x40;
      uVar16 = *puVar1;
      uVar12 = uVar16 >> (bVar8 & 0x3f);
      if (uVar12 != 0) {
        uVar10 = param_3[1];
        do {
          uVar16 = (uVar16 << (bVar9 & 0x3f)) >> (bVar9 & 0x3f);
          if ((uVar15 & 0x3f) == 0) {
            uVar16 = 0;
          }
          *puVar1 = uVar16;
          *puVar11 = *puVar11 ^ uVar12;
          uVar4 = uVar10;
          puVar3 = param_3 + 2;
          while (uVar4 != 0) {
            uVar5 = uVar4 + 0x3f;
            if (-1 < (int)uVar4) {
              uVar5 = uVar4;
            }
            puVar11[(int)uVar5 >> 6] = puVar11[(int)uVar5 >> 6] ^ uVar12 << ((byte)uVar4 & 0x3f);
            if (((uVar4 & 0x3f) != 0) &&
               (bVar8 = (byte)((int)uVar4 >> 0x1f),
               uVar16 = uVar12 >> (-(((byte)uVar4 + (bVar8 >> 2) & 0x3f) - (bVar8 >> 2)) & 0x3f),
               uVar16 != 0)) {
              puVar11[(long)((int)uVar5 >> 6) + 1] = puVar11[(long)((int)uVar5 >> 6) + 1] ^ uVar16;
            }
            uVar4 = *puVar3;
            puVar3 = puVar3 + 1;
          }
          uVar16 = *puVar1;
          uVar12 = uVar16 >> (sbyte)(uVar15 & 0x3f);
        } while (uVar12 != 0);
      }
    }
    bn_correct_top(param_1);
  }
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
  undefined8 uVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  ulong local_68 [4];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == param_3) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
      return uVar5;
    }
    goto LAB_00100a71;
  }
  BN_CTX_start(param_5);
  pBVar3 = BN_CTX_get(param_5);
  if (pBVar3 == (BIGNUM *)0x0) {
LAB_00100a41:
    uVar5 = 0;
  }
  else {
    uVar9 = (int)param_3[1] + (int)param_2[1] + 4;
    lVar4 = bn_wexpand();
    if (lVar4 == 0) goto LAB_00100a41;
    pBVar3->top = uVar9;
    if (0 < (int)uVar9) {
      memset(pBVar3->d,0,(ulong)uVar9 << 3);
    }
    iVar12 = (int)param_3[1];
    if (0 < iVar12) {
      iVar2 = (int)param_2[1];
      lVar4 = 0;
      iVar11 = 0;
      do {
        uVar13 = 0;
        uVar1 = *(undefined8 *)(*param_3 + lVar4);
        if (iVar12 != iVar11 + 1) {
          uVar13 = *(undefined8 *)(*param_3 + 8 + lVar4);
        }
        if (0 < iVar2) {
          lVar8 = 8;
          iVar12 = 0;
          do {
            uVar10 = 0;
            if (iVar12 + 1 != iVar2) {
              uVar10 = *(undefined8 *)(*param_2 + lVar8);
            }
            bn_GF2m_mul_2x2(local_68,uVar10,*(undefined8 *)(*param_2 + -8 + lVar8),uVar13,uVar1);
            puVar7 = (ulong *)(lVar4 + -8 + lVar8 + (long)pBVar3->d);
            puVar6 = local_68;
            do {
              uVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              *puVar7 = *puVar7 ^ uVar5;
              puVar7 = puVar7 + 1;
            } while (&local_48 != puVar6);
            iVar2 = (int)param_2[1];
            iVar12 = iVar12 + 2;
            lVar8 = lVar8 + 0x10;
          } while (iVar12 < iVar2);
          iVar12 = (int)param_3[1];
        }
        iVar11 = iVar11 + 2;
        lVar4 = lVar4 + 0x10;
      } while (iVar11 < iVar12);
    }
    bn_correct_top(pBVar3);
    iVar12 = BN_GF2m_mod_arr(param_1,pBVar3,param_4);
    uVar5 = (ulong)(iVar12 != 0);
  }
  BN_CTX_end(param_5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00100a71:
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
          goto LAB_00100aef;
          bVar5 = iVar1 != 0;
          iVar1 = iVar1 + -1;
        } while (bVar5);
      }
      pBVar4 = BN_copy(param_1,pBVar4);
      uVar2 = (uint)(pBVar4 != (BIGNUM *)0x0);
    }
LAB_00100aef:
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
      goto LAB_00100c3e;
    }
  }
  uVar2 = 0;
LAB_00100c3e:
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
      goto LAB_00100cf0;
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
          goto LAB_00100cec;
          BN_zero_ex(a);
          pBVar8 = BN_copy(a_00,pBVar5);
          if (pBVar8 == (BIGNUM *)0x0) goto LAB_00100cec;
          if (1 < (int)*param_3) {
            iVar1 = 1;
            do {
              iVar3 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
              if ((((iVar3 == 0) ||
                   (iVar3 = BN_GF2m_mod_sqr_arr(pBVar6,a_00,param_3,param_4), iVar3 == 0)) ||
                  (iVar3 = BN_GF2m_mod_mul_arr(pBVar7,pBVar6,pBVar4), iVar3 == 0)) ||
                 ((iVar3 = BN_GF2m_add(a,a,pBVar7), iVar3 == 0 ||
                  (iVar3 = BN_GF2m_add(a_00,pBVar6,pBVar5), iVar3 == 0)))) goto LAB_00100cec;
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)*param_3);
          }
          local_44 = local_44 + 1;
          iVar1 = BN_is_zero(a_00);
        } while ((iVar1 != 0) && (local_44 != 0x32));
        iVar1 = BN_is_zero(a_00);
        if (iVar1 == 0) goto LAB_00100f35;
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
               (iVar1 = BN_GF2m_add(a,a,pBVar4), iVar1 == 0)) goto LAB_00100cec;
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 <= (int)(*param_3 - 1) / 2);
        }
LAB_00100f35:
        iVar1 = BN_GF2m_mod_sqr_arr(a_00,a,param_3,param_4);
        if ((iVar1 != 0) && (iVar1 = BN_GF2m_add(a_00,a,a_00), iVar1 != 0)) {
          iVar1 = BN_ucmp(a_00,pBVar4);
          if (iVar1 == 0) {
            pBVar4 = BN_copy(param_1,a);
            bVar9 = pBVar4 != (BIGNUM *)0x0;
            goto LAB_00100cf0;
          }
          ERR_new();
          ERR_set_debug("crypto/bn/bn_gf2m.c",0x43d,"BN_GF2m_mod_solve_quad_arr");
          ERR_set_error(3,0x74,0);
        }
      }
    }
  }
LAB_00100cec:
  bVar9 = false;
LAB_00100cf0:
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
        if ((int)lVar7 < 0) goto LAB_001010d2;
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
LAB_001010d2:
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
  ulong **ppuVar3;
  ulong **ppuVar4;
  BIGNUM *pBVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  long lVar11;
  ulong *__s;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong *puVar22;
  ulong *puVar23;
  bool bVar24;
  BIGNUM *local_98;
  BIGNUM *local_90;
  BIGNUM *local_88;
  BIGNUM *local_80;
  
  BN_CTX_start(param_4);
  pBVar9 = BN_CTX_get(param_4);
  if ((pBVar9 != (BIGNUM *)0x0) && (iVar6 = BN_num_bits(param_3), 1 < iVar6)) {
    do {
      iVar7 = BN_priv_rand_ex(pBVar9,iVar6 + -1,0xffffffff,0,0);
      if (iVar7 == 0) goto LAB_00101328;
      iVar7 = BN_is_zero(pBVar9);
    } while (iVar7 != 0);
    iVar6 = BN_GF2m_mod_mul(param_1,param_2,pBVar9,param_3,param_4);
    if (iVar6 != 0) {
      BN_CTX_start(param_4);
      local_90 = BN_CTX_get(param_4);
      local_88 = BN_CTX_get(param_4);
      local_98 = BN_CTX_get(param_4);
      local_80 = BN_CTX_get(param_4);
      if ((((local_80 != (BIGNUM *)0x0) &&
           (iVar6 = BN_GF2m_mod(local_98,param_1,param_3), iVar6 != 0)) &&
          (iVar6 = BN_is_zero(local_98), iVar6 == 0)) &&
         (pBVar10 = BN_copy(local_80,param_3), pBVar10 != (BIGNUM *)0x0)) {
        iVar6 = BN_num_bits(local_98);
        iVar7 = BN_num_bits(local_80);
        uVar1 = param_3->top;
        lVar11 = bn_wexpand(local_98);
        if (lVar11 != 0) {
          iVar8 = local_98->top;
          puVar22 = local_98->d;
          if (iVar8 < (int)uVar1) {
            memset(puVar22 + iVar8,0,(ulong)((uVar1 - 1) - iVar8) * 8 + 8);
          }
          local_98->top = uVar1;
          lVar11 = bn_wexpand(local_90);
          if (lVar11 != 0) {
            puVar23 = local_90->d;
            *puVar23 = 1;
            if ((int)uVar1 < 2) {
              local_90->top = uVar1;
              lVar11 = bn_wexpand(local_88);
              if (lVar11 != 0) {
                __s = local_88->d;
                if (uVar1 != 1) {
                  uVar21 = uVar1 - 1;
                  goto LAB_0010153c;
                }
                uVar21 = 0;
                goto LAB_00101509;
              }
            }
            else {
              uVar21 = uVar1 - 1;
              memset(puVar23 + 1,0,(ulong)uVar21 << 3);
              local_90->top = uVar1;
              lVar11 = bn_wexpand(local_88);
              if (lVar11 != 0) {
                __s = local_88->d;
LAB_00101509:
                __s = (ulong *)memset(__s,0,(ulong)uVar1 << 3);
LAB_0010153c:
                local_88->top = uVar1;
                puVar14 = local_80->d;
LAB_00101580:
                pBVar5 = local_80;
                pBVar10 = local_88;
                uVar18 = *puVar22;
                if (iVar6 == 0) {
                  if (uVar18 == 0) goto LAB_001013b6;
LAB_0010159c:
                  if (uVar18 == 1) goto LAB_00101780;
                }
                else {
                  if ((uVar18 & 1) == 0) {
                    puVar2 = param_3->d;
                    uVar15 = -(ulong)((uint)*puVar23 & 1);
                    uVar19 = *puVar2 & uVar15 ^ *puVar23;
                    puVar13 = puVar23;
                    puVar16 = puVar22;
                    if (1 < (int)uVar1) {
                      uVar12 = 1;
                      uVar17 = uVar18;
                      uVar20 = uVar19;
                      do {
                        uVar18 = puVar22[uVar12];
                        puVar22[uVar12 - 1] = uVar18 << 0x3f | uVar17 >> 1;
                        uVar19 = puVar2[uVar12] & uVar15 ^ puVar23[uVar12];
                        puVar23[uVar12 - 1] = uVar19 << 0x3f | uVar20 >> 1;
                        uVar12 = uVar12 + 1;
                        uVar17 = uVar18;
                        uVar20 = uVar19;
                      } while (uVar1 != uVar12);
                      puVar13 = puVar23 + (int)uVar21;
                      puVar16 = puVar22 + (int)uVar21;
                    }
                    iVar6 = iVar6 + -1;
                    *puVar16 = uVar18 >> 1;
                    *puVar13 = uVar19 >> 1;
                    goto LAB_00101580;
                  }
                  if (iVar6 < 0x41) goto LAB_0010159c;
                }
                puVar2 = __s;
                puVar13 = puVar14;
                iVar8 = iVar7;
                if (iVar6 < iVar7) {
                  ppuVar3 = &local_90->d;
                  ppuVar4 = &local_98->d;
                  local_80 = local_98;
                  local_88 = local_90;
                  local_98 = pBVar5;
                  local_90 = pBVar10;
                  puVar2 = *ppuVar3;
                  puVar13 = *ppuVar4;
                  puVar22 = puVar14;
                  puVar23 = __s;
                  iVar8 = iVar6;
                  iVar6 = iVar7;
                }
                iVar7 = iVar8;
                puVar14 = puVar13;
                __s = puVar2;
                lVar11 = 0;
                if (0 < (int)uVar1) {
                  do {
                    *(ulong *)((long)puVar22 + lVar11) =
                         *(ulong *)((long)puVar22 + lVar11) ^ *(ulong *)((long)puVar14 + lVar11);
                    *(ulong *)((long)puVar23 + lVar11) =
                         *(ulong *)((long)puVar23 + lVar11) ^ *(ulong *)((long)__s + lVar11);
                    lVar11 = lVar11 + 8;
                  } while ((long)(int)uVar1 * 8 != lVar11);
                }
                if (iVar6 == iVar7) {
                  iVar8 = iVar7 + 0x3e;
                  if (-1 < iVar7 + -1) {
                    iVar8 = iVar7 + -1;
                  }
                  iVar8 = iVar8 >> 6;
                  uVar18 = puVar22[iVar8];
                  if (uVar18 == 0) {
                    if (iVar8 != 0) {
                      lVar11 = (long)(int)(iVar8 - 1U);
                      do {
                        uVar18 = puVar22[lVar11];
                        if (uVar18 != 0) {
                          iVar8 = (int)lVar11 << 6;
                          goto LAB_0010167b;
                        }
                        lVar11 = lVar11 + -1;
                      } while (((long)iVar8 + -2) - (ulong)(iVar8 - 1U) != lVar11);
                      iVar8 = 0;
                    }
                  }
                  else {
                    iVar8 = iVar8 << 6;
                  }
LAB_0010167b:
                  iVar6 = BN_num_bits_word(uVar18);
                  iVar6 = iVar6 + iVar8;
                }
                goto LAB_00101580;
              }
            }
          }
        }
      }
LAB_001013b6:
      BN_CTX_end(param_4);
    }
  }
LAB_00101328:
  bVar24 = false;
LAB_0010132a:
  BN_CTX_end(param_4);
  return bVar24;
LAB_00101780:
  bn_correct_top(local_90);
  pBVar10 = BN_copy(param_1,local_90);
  if (pBVar10 != (BIGNUM *)0x0) {
    BN_CTX_end(param_4);
    iVar6 = BN_GF2m_mod_mul(param_1,param_1,pBVar9,param_3,param_4);
    bVar24 = iVar6 != 0;
    goto LAB_0010132a;
  }
  goto LAB_001013b6;
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
      goto LAB_00101890;
    }
  }
  bVar3 = false;
LAB_00101890:
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
      goto LAB_00101d01;
    }
  }
  uVar2 = 0;
LAB_00101d01:
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
      goto LAB_00101d7a;
    }
  }
  uVar2 = 0;
LAB_00101d7a:
  BN_CTX_end(param_5);
  return uVar2;
}



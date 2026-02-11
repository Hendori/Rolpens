
void gf_strong_reduce(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  
  uVar7 = param_1[7] >> 0x38;
  param_1[4] = param_1[4] + uVar7;
  puVar1 = param_1 + 6;
  uVar3 = param_1[7];
  do {
    uVar2 = *puVar1;
    puVar1[1] = (uVar2 >> 0x38) + (uVar3 & 0xffffffffffffff);
    bVar9 = param_1 != puVar1;
    puVar1 = puVar1 + -1;
    uVar3 = uVar2;
  } while (bVar9);
  lVar4 = 0;
  uVar3 = 0;
  lVar5 = 0;
  *param_1 = (*param_1 & 0xffffffffffffff) + uVar7;
  do {
    uVar7 = uVar3 + *(ulong *)((long)param_1 + lVar4);
    uVar2 = uVar7 - *(ulong *)((long)&MODULUS + lVar4);
    lVar5 = (lVar5 + (ulong)CARRY8(uVar3,*(ulong *)((long)param_1 + lVar4))) -
            (ulong)(uVar7 < *(ulong *)((long)&MODULUS + lVar4));
    uVar3 = uVar2 >> 0x38 | lVar5 * 0x100;
    *(ulong *)((long)param_1 + lVar4) = uVar2 & 0xffffffffffffff;
    lVar4 = lVar4 + 8;
    lVar5 = lVar5 >> 0x38;
  } while (lVar4 != 0x40);
  lVar4 = 0;
  uVar7 = 0;
  do {
    uVar2 = *(ulong *)((long)&MODULUS + lVar4) & uVar3;
    uVar6 = *(ulong *)((long)param_1 + lVar4) + uVar2;
    uVar8 = uVar7 + uVar6;
    uVar7 = uVar8 >> 0x38 |
            ((ulong)CARRY8(*(ulong *)((long)param_1 + lVar4),uVar2) + (ulong)CARRY8(uVar7,uVar6)) *
            0x100;
    *(ulong *)((long)param_1 + lVar4) = uVar8 & 0xffffffffffffff;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x40);
  return;
}



void gf_serialize(undefined1 *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  ulong local_58 [4];
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  ulong uStack_20;
  long local_10;
  
  local_58[0] = *param_2;
  local_58[1] = param_2[1];
  local_58[2] = param_2[2];
  local_58[3] = param_2[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6];
  uStack_20 = param_2[7];
  gf_strong_reduce(local_58);
  puVar1 = param_1 + 0x38;
  uVar2 = 0;
  uVar5 = 0;
  uVar3 = 0;
  do {
    uVar6 = (uint)uVar3 | uVar5;
    uVar5 = uVar5 - 8;
    uVar4 = uVar3;
    if (uVar6 < 8) {
      uVar4 = (ulong)((uint)uVar3 + 1);
      uVar5 = 0x30;
      uVar2 = uVar2 | local_58[uVar3];
    }
    *param_1 = (char)uVar2;
    param_1 = param_1 + 1;
    uVar2 = uVar2 >> 8;
    uVar3 = uVar4;
  } while (param_1 != puVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long gf_lobit(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  uStack_40 = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  gf_strong_reduce(&local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)((uint)local_58 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gf_sub(ulong *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar22;
  ulong uVar23;
  bool bVar24;
  int iVar25;
  int iVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulong uVar21;
  
  auVar17 = __LC3;
  auVar16 = __LC2;
  iVar15 = _UNK_00100a9c;
  iVar14 = _UNK_00100a98;
  iVar13 = _UNK_00100a94;
  iVar12 = __LC1;
  lVar18 = 0;
  iVar30 = __LC0;
  iVar31 = _UNK_00100a84;
  iVar32 = _UNK_00100a88;
  iVar33 = _UNK_00100a8c;
  do {
    lVar6 = ((long *)(param_2 + lVar18))[1];
    uVar2 = (uint)(iVar30 == iVar12);
    iVar25 = -uVar2;
    uVar3 = (uint)(iVar31 == iVar13);
    iVar27 = -uVar3;
    auVar28._4_4_ = iVar27;
    auVar28._0_4_ = iVar25;
    uVar4 = (uint)(iVar32 == iVar14);
    uVar5 = (uint)(iVar33 == iVar15);
    lVar7 = ((long *)(param_3 + lVar18))[1];
    plVar1 = (long *)(param_2 + 0x10 + lVar18);
    lVar8 = *plVar1;
    lVar9 = plVar1[1];
    plVar1 = (long *)(param_3 + 0x10 + lVar18);
    lVar10 = *plVar1;
    lVar11 = plVar1[1];
    auVar28._8_4_ = iVar27;
    auVar28._12_4_ = -(uint)(uVar3 != 0);
    auVar29._8_8_ = auVar28._8_8_;
    auVar29._4_4_ = -(uint)(uVar2 != 0);
    auVar29._0_4_ = iVar25;
    auVar26._4_4_ = -(uint)(uVar4 != 0);
    auVar26._0_4_ = -uVar4;
    auVar26._8_4_ = -uVar5;
    auVar26._12_4_ = -(uint)(uVar5 != 0);
    auVar29 = ~auVar29 & auVar17 | auVar16 & auVar29;
    auVar26 = ~auVar26 & auVar17 | auVar16 & auVar26;
    *(long *)((long)param_1 + lVar18) =
         auVar29._0_8_ + (*(long *)(param_2 + lVar18) - *(long *)(param_3 + lVar18));
    ((long *)((long)param_1 + lVar18))[1] = auVar29._8_8_ + (lVar6 - lVar7);
    plVar1 = (long *)((long)param_1 + lVar18 + 0x10);
    *plVar1 = auVar26._0_8_ + (lVar8 - lVar10);
    plVar1[1] = auVar26._8_8_ + (lVar9 - lVar11);
    lVar18 = lVar18 + 0x20;
    iVar30 = iVar30 + iVar12;
    iVar31 = iVar31 + iVar13;
    iVar32 = iVar32 + iVar14;
    iVar33 = iVar33 + iVar15;
  } while (lVar18 != 0x40);
  uVar21 = param_1[7];
  uVar23 = uVar21 >> 0x38;
  param_1[4] = param_1[4] + uVar23;
  puVar19 = param_1 + 6;
  do {
    uVar22 = uVar21 & 0xffffffffffffff;
    uVar21 = *puVar19;
    puVar19[1] = (uVar21 >> 0x38) + uVar22;
    bVar24 = puVar19 != param_1;
    puVar19 = puVar19 + -1;
  } while (bVar24);
  uVar21 = param_1[7];
  uVar23 = (*param_1 & 0xffffffffffffff) + uVar23;
  *param_1 = uVar23;
  uVar22 = uVar21 >> 0x38;
  param_1[4] = param_1[4] + uVar22;
  puVar19 = param_1 + 6;
  do {
    uVar20 = uVar21 & 0xffffffffffffff;
    uVar21 = *puVar19;
    puVar19[1] = (uVar21 >> 0x38) + uVar20;
    bVar24 = param_1 != puVar19;
    puVar19 = puVar19 + -1;
  } while (bVar24);
  *param_1 = (uVar23 & 0xffffffffffffff) + uVar22;
  return;
}



void gf_add(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar6;
  
  lVar3 = 0;
  do {
    lVar1 = ((long *)(param_3 + lVar3))[1];
    lVar2 = ((long *)(param_2 + lVar3))[1];
    *(long *)((long)param_1 + lVar3) = *(long *)(param_3 + lVar3) + *(long *)(param_2 + lVar3);
    ((long *)((long)param_1 + lVar3))[1] = lVar1 + lVar2;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x40);
  uVar6 = param_1[7];
  uVar8 = uVar6 >> 0x38;
  param_1[4] = param_1[4] + uVar8;
  puVar4 = param_1 + 6;
  do {
    uVar7 = uVar6 & 0xffffffffffffff;
    uVar6 = *puVar4;
    puVar4[1] = (uVar6 >> 0x38) + uVar7;
    bVar9 = puVar4 != param_1;
    puVar4 = puVar4 + -1;
  } while (bVar9);
  uVar6 = param_1[7];
  uVar8 = (*param_1 & 0xffffffffffffff) + uVar8;
  *param_1 = uVar8;
  uVar7 = uVar6 >> 0x38;
  param_1[4] = param_1[4] + uVar7;
  puVar4 = param_1 + 6;
  do {
    uVar5 = uVar6 & 0xffffffffffffff;
    uVar6 = *puVar4;
    puVar4[1] = (uVar6 >> 0x38) + uVar5;
    bVar9 = puVar4 != param_1;
    puVar4 = puVar4 + -1;
  } while (bVar9);
  *param_1 = (uVar8 & 0xffffffffffffff) + uVar7;
  return;
}



long gf_hibit(undefined8 param_1)

{
  long in_FS_OFFSET;
  uint local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_add(local_58,param_1,param_1);
  gf_strong_reduce(local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return -(ulong)(local_58[0] & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong gf_deserialize(long param_1,long param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar3 = 0;
  uVar16 = 0;
  uVar6 = 0;
  uVar14 = 0;
  lVar11 = 0;
  uVar9 = 0xffffffffffffff;
  uVar10 = 0;
  lVar7 = 0;
  do {
    pbVar8 = (byte *)((ulong)uVar6 + param_2);
    uVar5 = uVar14;
    uVar15 = uVar16;
    uVar2 = uVar6;
    while (uVar2 < 0x38) {
      uVar6 = uVar6 + 1;
      bVar1 = *pbVar8;
      uVar2 = uVar3 + 8;
      bVar4 = (byte)uVar3;
      if (uVar6 == 0x38) {
        uVar12 = (uint)bVar1 & ~param_4;
        uVar13 = (ulong)uVar12 << (bVar4 & 0x3f);
        uVar16 = uVar13;
        uVar14 = 0L << (bVar4 & 0x3f) | (ulong)(uVar12 >> 0x40 - (bVar4 & 0x3f));
        if ((uVar3 & 0x40) != 0) {
          uVar16 = 0;
          uVar14 = uVar13;
        }
        uVar5 = uVar16 | uVar5;
        uVar15 = uVar14 | uVar15;
        uVar3 = uVar2;
        break;
      }
      uVar13 = (ulong)(uint)bVar1 << (bVar4 & 0x3f);
      uVar14 = uVar13;
      uVar16 = 0L << (bVar4 & 0x3f) | (ulong)(bVar1 >> 0x40 - (bVar4 & 0x3f));
      if ((uVar3 & 0x40) != 0) {
        uVar14 = 0;
        uVar16 = uVar13;
      }
      uVar5 = uVar5 | uVar14;
      uVar15 = uVar15 | uVar16;
      pbVar8 = pbVar8 + 1;
      uVar3 = uVar2;
    }
    do {
      uVar14 = uVar5 >> 0x38 | uVar15 << 8;
      uVar16 = uVar15 >> 0x38;
      if (lVar7 == 7) {
        uVar16 = 0xffffffffffffffff;
        *(ulong *)(param_1 + 0x38) = uVar5;
        if (param_3 == 0) {
          uVar16 = gf_hibit(param_1);
          uVar16 = ~uVar16;
        }
        uVar9 = (uVar15 + lVar11 + (ulong)CARRY8(uVar5,uVar10)) - (ulong)(uVar5 + uVar10 < uVar9);
        return ~((long)(uVar9 - 1 & ~uVar9) >> 0x3f) & (long)(~uVar14 & uVar14 - 1) >> 0x3f & uVar16
        ;
      }
      uVar3 = uVar3 - 0x38;
      uVar5 = uVar5 & 0xffffffffffffff;
      *(ulong *)(param_1 + lVar7 * 8) = uVar5;
      uVar10 = (lVar11 + (ulong)CARRY8(uVar10,uVar5)) - (ulong)(uVar10 + uVar5 < uVar9);
      lVar7 = lVar7 + 1;
      uVar9 = (&MODULUS)[lVar7];
      lVar11 = (long)uVar10 >> 0x3f;
      uVar5 = uVar14;
      uVar15 = uVar16;
    } while (0x37 < uVar3);
  } while( true );
}



long gf_eq(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long in_FS_OFFSET;
  ulong local_58 [9];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gf_sub(local_58,param_1,param_2);
  gf_strong_reduce(local_58);
  uVar1 = 0;
  puVar2 = local_58;
  do {
    puVar3 = puVar2 + 2;
    uVar1 = uVar1 | *puVar2 | puVar2[1];
    puVar2 = puVar3;
  } while (local_58 + 8 != puVar3);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar1 & uVar1 - 1) >> 0x3f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gf_isr(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_148 [64];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  iVar1 = 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_sqr(&local_108);
  ossl_gf_mul(local_c8,param_2,&local_108);
  ossl_gf_sqr(&local_108,local_c8);
  ossl_gf_mul(local_c8,param_2,&local_108);
  ossl_gf_sqr(&local_108,local_c8);
  ossl_gf_sqr(local_88,&local_108);
  ossl_gf_sqr(&local_108,local_88);
  ossl_gf_mul(local_148,local_c8,&local_108);
  ossl_gf_sqr(&local_108,local_148);
  ossl_gf_sqr(local_88,&local_108);
  ossl_gf_sqr(&local_108,local_88);
  ossl_gf_mul(local_148,local_c8,&local_108);
  ossl_gf_sqr(local_c8,local_148);
  do {
    ossl_gf_sqr(local_88,local_c8);
    ossl_gf_sqr(local_c8,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  ossl_gf_mul(&local_108,local_148,local_c8);
  ossl_gf_sqr(local_148,&local_108);
  ossl_gf_mul(local_c8,param_2,local_148);
  ossl_gf_sqr(local_88,local_c8);
  ossl_gf_sqr(local_148,local_88);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  ossl_gf_mul(local_c8,&local_108,local_148);
  ossl_gf_sqr(local_148,local_c8);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x12;
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x37;
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x6f;
  ossl_gf_mul(local_c8,&local_108,local_148);
  ossl_gf_sqr(local_148,local_c8);
  ossl_gf_mul(&local_108,param_2,local_148);
  ossl_gf_sqr(local_148,&local_108);
  do {
    ossl_gf_sqr(local_88,local_148);
    ossl_gf_sqr(local_148,local_88);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ossl_gf_mul(&local_108,local_c8,local_148);
  ossl_gf_sqr(local_c8,&local_108);
  ossl_gf_mul(local_148,local_c8,param_2);
  *param_1 = local_108;
  param_1[1] = uStack_100;
  param_1[2] = local_f8;
  param_1[3] = uStack_f0;
  param_1[4] = local_e8;
  param_1[5] = uStack_e0;
  param_1[6] = local_d8;
  param_1[7] = uStack_d0;
  gf_eq(local_148,ONE);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



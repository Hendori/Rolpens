
void niels_to_pt(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  gf_add(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_sub(param_1,param_2 + 0x40,param_2);
  ossl_gf_mul(param_1 + 0xc0,param_1 + 0x40,param_1);
  uVar7 = ONE._56_8_;
  uVar6 = ONE._48_8_;
  uVar5 = ONE._40_8_;
  uVar4 = ONE._32_8_;
  uVar3 = ONE._24_8_;
  uVar2 = ONE._16_8_;
  uVar1 = ONE._8_8_;
  *(undefined8 *)(param_1 + 0x80) = ONE._0_8_;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  return;
}



void pniels_to_pt(long param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_78 [72];
  long local_30;
  
  lVar1 = param_1 + 0x40;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  gf_add(auStack_78,param_2 + 0x40,param_2);
  gf_sub(lVar1,param_2 + 0x40,param_2);
  param_2 = param_2 + 0xc0;
  ossl_gf_mul(param_1 + 0xc0,lVar1,auStack_78);
  ossl_gf_mul(param_1,param_2,lVar1);
  ossl_gf_mul(lVar1,param_2,auStack_78);
  ossl_gf_sqr(param_1 + 0x80,param_2);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void recode_wnaf_isra_0(long param_1,ushort *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar5 = (ulong)*param_2;
  iVar10 = 0;
  uVar9 = 1 << ((byte)(param_3 + 1U) & 0x1f);
  uVar6 = 1;
  iVar2 = (int)(0x1be / (ulong)(param_3 + 1U));
  *(undefined8 *)(param_1 + (ulong)(iVar2 + 2) * 8) = _LC0;
  uVar7 = (ulong)(iVar2 + 1);
  do {
    while (uVar6 < 0x1c) {
      uVar5 = uVar5 + (uint)((int)(*(ulong *)(param_2 + (ulong)(uVar6 >> 2) * 4) >>
                                  (sbyte)((uVar6 & 3) << 4)) << 0x10);
      if ((short)uVar5 == 0) {
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
      }
      else {
LAB_001001b4:
        uVar3 = (long)((int)uVar7 + -1);
        do {
          uVar7 = uVar3;
          iVar1 = 0;
          for (uVar4 = (uint)uVar5; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar1 = iVar1 + 1;
          }
          uVar8 = (uint)uVar5 >> ((byte)iVar1 & 0x1f);
          uVar4 = uVar8 & uVar9 - 1;
          if ((uVar8 & uVar9) != 0) {
            uVar4 = uVar4 - uVar9;
          }
          *(uint *)(param_1 + 0xc + uVar7 * 8) = uVar4;
          *(int *)(param_1 + 8 + uVar7 * 8) = iVar1 + iVar10;
          uVar5 = uVar5 - (long)(int)(uVar4 << ((byte)iVar1 & 0x1f));
          uVar3 = uVar7 - 1;
        } while ((short)uVar5 != 0);
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 >> 0x10;
        iVar10 = iVar10 + 0x10;
        if (uVar6 == 0x1e) goto LAB_00100213;
      }
    }
    if ((short)uVar5 != 0) goto LAB_001001b4;
    uVar6 = uVar6 + 1;
    uVar5 = uVar5 >> 0x10;
    iVar10 = iVar10 + 0x10;
  } while (uVar6 != 0x1e);
LAB_00100213:
  iVar10 = (int)uVar7 + 1;
  uVar5 = 0;
  uVar6 = (iVar2 + 3) - iVar10;
  if (uVar6 != 0) {
    do {
      *(undefined8 *)(param_1 + uVar5 * 8) =
           *(undefined8 *)(param_1 + (ulong)(uint)(iVar10 + (int)uVar5) * 8);
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



void gf_invert_isra_0(undefined8 *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_sqr(auStack_b8);
  gf_isr(&local_78,auStack_b8);
  ossl_gf_sqr(auStack_b8,&local_78);
  ossl_gf_mul(&local_78,auStack_b8,param_2);
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[2] = local_68;
  param_1[3] = uStack_60;
  param_1[4] = local_58;
  param_1[5] = uStack_50;
  param_1[6] = local_48;
  param_1[7] = uStack_40;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pt_to_pniels(long param_1,long param_2)

{
  long lVar1;
  
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_add(param_1 + 0x40,param_2,param_2 + 0x40);
  lVar1 = param_1 + 0x80;
  ossl_gf_mulw_unsigned(lVar1,param_2 + 0xc0,0x13154);
  gf_sub(lVar1,ZERO,lVar1);
  gf_add(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_niels_from_pt(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  bool bVar27;
  int iVar28;
  int iVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  ulong local_108 [27];
  undefined1 auVar40 [16];
  
  plVar2 = (long *)(param_1 + 0x80);
  plVar1 = (long *)(param_1 + 0x40);
  puVar3 = local_108 + 8;
  local_108[0x19] = *(long *)(in_FS_OFFSET + 0x28);
  plVar17 = plVar1;
  puVar23 = puVar3;
  iVar43 = __LC1;
  iVar44 = _UNK_001035f4;
  iVar45 = _UNK_001035f8;
  iVar46 = _UNK_001035fc;
  do {
    lVar18 = plVar17[-5];
    uVar4 = (uint)(iVar43 == SUB164(__LC2,0));
    iVar28 = -uVar4;
    uVar6 = (uint)(iVar44 == SUB164(__LC2,4));
    iVar32 = -uVar6;
    auVar37._4_4_ = iVar32;
    auVar37._0_4_ = iVar28;
    uVar8 = (uint)(iVar45 == SUB164(__LC2,8));
    uVar10 = (uint)(iVar46 == SUB164(__LC2,0xc));
    plVar21 = plVar17 + 4;
    iVar43 = iVar43 + SUB164(__LC2,0);
    iVar44 = iVar44 + SUB164(__LC2,4);
    iVar45 = iVar45 + SUB164(__LC2,8);
    iVar46 = iVar46 + SUB164(__LC2,0xc);
    lVar11 = plVar17[3];
    auVar37._8_4_ = iVar32;
    auVar37._12_4_ = -(uint)(uVar6 != 0);
    auVar30._8_8_ = auVar37._8_8_;
    auVar30._4_4_ = -(uint)(uVar4 != 0);
    auVar30._0_4_ = iVar28;
    auVar29._4_4_ = -(uint)(uVar8 != 0);
    auVar29._0_4_ = -uVar8;
    auVar29._8_4_ = -uVar10;
    auVar29._12_4_ = -(uint)(uVar10 != 0);
    auVar29 = ~auVar29 & __LC4 | __LC3 & auVar29;
    auVar37 = ~auVar30 & __LC4 | __LC3 & auVar30;
    lVar12 = plVar17[-8];
    lVar13 = plVar17[-7];
    lVar14 = *plVar17;
    lVar15 = plVar17[1];
    puVar23[2] = (auVar29._0_8_ - plVar17[-6]) + plVar17[2];
    puVar23[3] = (auVar29._8_8_ - lVar18) + lVar11;
    *puVar23 = (auVar37._0_8_ - lVar12) + lVar14;
    puVar23[1] = (auVar37._8_8_ - lVar13) + lVar15;
    plVar17 = plVar21;
    puVar23 = puVar23 + 4;
  } while (plVar21 != plVar2);
  puVar23 = local_108 + 0xe;
  uVar26 = local_108[0xf] >> 0x38;
  local_108[0xc] = local_108[0xc] + uVar26;
  puVar19 = puVar23;
  uVar25 = local_108[0xf];
  do {
    uVar24 = uVar25 & 0xffffffffffffff;
    uVar25 = *puVar19;
    puVar19[1] = (uVar25 >> 0x38) + uVar24;
    bVar27 = puVar19 != puVar3;
    puVar19 = puVar19 + -1;
  } while (bVar27);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar26;
  ossl_gf_mul(local_108,param_2 + 0x40,puVar3);
  lVar18 = 0;
  do {
    lVar11 = ((long *)(param_1 + lVar18))[1];
    plVar17 = (long *)(param_1 + 0x40 + lVar18);
    lVar12 = plVar17[1];
    *(long *)((long)puVar3 + lVar18) = *(long *)(param_1 + lVar18) + *plVar17;
    *(long *)((long)local_108 + lVar18 + 0x48) = lVar11 + lVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  uVar26 = local_108[0xf] >> 0x38;
  local_108[0xc] = local_108[0xc] + uVar26;
  puVar19 = puVar23;
  uVar25 = local_108[0xf];
  do {
    uVar24 = uVar25 & 0xffffffffffffff;
    uVar25 = *puVar19;
    puVar19[1] = (uVar25 >> 0x38) + uVar24;
    bVar27 = puVar19 != puVar3;
    puVar19 = puVar19 + -1;
  } while (bVar27);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar26;
  ossl_gf_mul(plVar1,param_2,puVar3);
  plVar17 = (long *)(param_1 + 0xc0);
  puVar19 = local_108 + 0x10;
  ossl_gf_mul(param_1,param_2 + 0x80,plVar17);
  auVar37 = __LC4;
  auVar29 = __LC3;
  lVar18 = 0;
  do {
    lVar11 = *(long *)((long)local_108 + lVar18 + 8);
    plVar21 = (long *)(param_1 + 0x40 + lVar18);
    lVar12 = plVar21[1];
    *(long *)((long)puVar19 + lVar18) = *(long *)((long)local_108 + lVar18) + *plVar21;
    *(long *)((long)local_108 + lVar18 + 0x88) = lVar11 + lVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  local_108[0x14] = local_108[0x14] + (local_108[0x17] >> 0x38);
  puVar20 = local_108 + 0x16;
  uVar25 = local_108[0x17];
  do {
    uVar26 = uVar25 & 0xffffffffffffff;
    uVar25 = *puVar20;
    puVar20[1] = (uVar25 >> 0x38) + uVar26;
    bVar27 = puVar20 != puVar19;
    puVar20 = puVar20 + -1;
  } while (bVar27);
  lVar18 = 0;
  local_108[0x10] = (local_108[0x10] & 0xffffffffffffff) + (local_108[0x17] >> 0x38);
  iVar43 = __LC1;
  iVar44 = _UNK_001035f4;
  iVar45 = _UNK_001035f8;
  iVar46 = _UNK_001035fc;
  do {
    plVar21 = (long *)(param_1 + 0x40 + lVar18);
    lVar11 = plVar21[1];
    iVar33 = SUB164(__LC2,0);
    bVar27 = iVar43 == iVar33;
    iVar28 = -(uint)bVar27;
    iVar34 = SUB164(__LC2,4);
    bVar5 = iVar44 == iVar34;
    iVar32 = -(uint)bVar5;
    auVar38._4_4_ = iVar32;
    auVar38._0_4_ = iVar28;
    iVar35 = SUB164(__LC2,8);
    bVar7 = iVar45 == iVar35;
    iVar36 = SUB164(__LC2,0xc);
    bVar9 = iVar46 == iVar36;
    lVar12 = *(long *)((long)local_108 + lVar18 + 8);
    plVar22 = (long *)(param_1 + 0x50 + lVar18);
    lVar13 = *plVar22;
    lVar14 = plVar22[1];
    iVar43 = iVar43 + iVar33;
    iVar44 = iVar44 + iVar34;
    iVar45 = iVar45 + iVar35;
    iVar46 = iVar46 + iVar36;
    lVar15 = *(long *)((long)local_108 + lVar18 + 0x10);
    lVar16 = *(long *)((long)local_108 + lVar18 + 0x18);
    auVar38._8_4_ = iVar32;
    auVar38._12_4_ = -(uint)(bVar5 != 0);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._4_4_ = -(uint)(bVar27 != 0);
    auVar39._0_4_ = iVar28;
    auVar42._4_4_ = -(uint)(bVar7 != 0);
    auVar42._0_4_ = -(uint)bVar7;
    auVar42._8_4_ = -(uint)bVar9;
    auVar42._12_4_ = -(uint)(bVar9 != 0);
    auVar39 = ~auVar39 & __LC4 | __LC3 & auVar39;
    auVar30 = ~auVar42 & __LC4 | __LC3 & auVar42;
    *(long *)((long)puVar3 + lVar18) =
         auVar39._0_8_ + (*plVar21 - *(long *)((long)local_108 + lVar18));
    *(long *)((long)local_108 + lVar18 + 0x48) = auVar39._8_8_ + (lVar11 - lVar12);
    *(long *)((long)local_108 + lVar18 + 0x50) = auVar30._0_8_ + (lVar13 - lVar15);
    *(long *)((long)local_108 + lVar18 + 0x58) = auVar30._8_8_ + (lVar14 - lVar16);
    lVar18 = lVar18 + 0x20;
  } while (lVar18 != 0x40);
  local_108[0xc] = local_108[0xc] + (local_108[0xf] >> 0x38);
  uVar25 = local_108[0xf];
  do {
    uVar26 = uVar25 & 0xffffffffffffff;
    uVar25 = *puVar23;
    puVar23[1] = (uVar25 >> 0x38) + uVar26;
    bVar27 = puVar23 != puVar3;
    puVar23 = puVar23 + -1;
  } while (bVar27);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + (local_108[0xf] >> 0x38);
  plVar21 = plVar2;
  do {
    plVar22 = plVar21 + 2;
    plVar21[-8] = *plVar21 + plVar21[-0x10];
    plVar21[-7] = plVar21[1] + plVar21[-0xf];
    plVar21 = plVar22;
  } while (plVar22 != plVar17);
  uVar25 = *(ulong *)(param_1 + 0x78);
  uVar26 = uVar25 >> 0x38;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar26;
  puVar23 = (ulong *)(param_1 + 0x70);
  do {
    uVar24 = uVar25 & 0xffffffffffffff;
    puVar20 = puVar23 + -1;
    uVar25 = *puVar23;
    puVar23[1] = (uVar25 >> 0x38) + uVar24;
    iVar46 = _UNK_001035fc;
    iVar45 = _UNK_001035f8;
    iVar44 = _UNK_001035f4;
    iVar43 = __LC1;
    puVar23 = puVar20;
  } while ((ulong *)(param_1 + 0x38) != puVar20);
  *(ulong *)(param_1 + 0x40) = (*(ulong *)(param_1 + 0x40) & 0xffffffffffffff) + uVar26;
  puVar23 = local_108;
  plVar21 = plVar2;
  do {
    lVar18 = plVar21[-0xd];
    bVar27 = iVar43 == iVar33;
    iVar28 = -(uint)bVar27;
    bVar5 = iVar44 == iVar34;
    iVar32 = -(uint)bVar5;
    auVar41._4_4_ = iVar32;
    auVar41._0_4_ = iVar28;
    bVar7 = iVar45 == iVar35;
    bVar9 = iVar46 == iVar36;
    plVar22 = plVar21 + 4;
    iVar43 = iVar43 + iVar33;
    iVar44 = iVar44 + iVar34;
    iVar45 = iVar45 + iVar35;
    iVar46 = iVar46 + iVar36;
    lVar11 = plVar21[3];
    auVar41._8_4_ = iVar32;
    auVar41._12_4_ = -(uint)(bVar5 != 0);
    auVar40._8_8_ = auVar41._8_8_;
    auVar40._4_4_ = -(uint)(bVar27 != 0);
    auVar40._0_4_ = iVar28;
    auVar31._4_4_ = -(uint)(bVar7 != 0);
    auVar31._0_4_ = -(uint)bVar7;
    auVar31._8_4_ = -(uint)bVar9;
    auVar31._12_4_ = -(uint)(bVar9 != 0);
    auVar30 = ~auVar31 & auVar37 | auVar29 & auVar31;
    auVar42 = ~auVar40 & auVar37 | auVar29 & auVar40;
    lVar12 = plVar21[-0x10];
    lVar13 = plVar21[-0xf];
    lVar14 = *plVar21;
    lVar15 = plVar21[1];
    puVar23[2] = (auVar30._0_8_ - plVar21[-0xe]) + plVar21[2];
    puVar23[3] = (auVar30._8_8_ - lVar18) + lVar11;
    *puVar23 = (auVar42._0_8_ - lVar12) + lVar14;
    puVar23[1] = (auVar42._8_8_ - lVar13) + lVar15;
    puVar23 = puVar23 + 4;
    plVar21 = plVar22;
  } while (plVar22 != plVar17);
  local_108[4] = local_108[4] + (local_108[7] >> 0x38);
  puVar23 = local_108 + 6;
  uVar25 = local_108[7];
  do {
    uVar26 = uVar25 & 0xffffffffffffff;
    uVar25 = *puVar23;
    puVar23[1] = (uVar25 >> 0x38) + uVar26;
    bVar27 = local_108 != puVar23;
    puVar23 = puVar23 + -1;
  } while (bVar27);
  local_108[0] = (local_108[0] & 0xffffffffffffff) + (local_108[7] >> 0x38);
  ossl_gf_mul(plVar2,local_108,plVar1);
  ossl_gf_mul(param_1,plVar1,puVar3);
  ossl_gf_mul(plVar1,local_108,puVar19);
  if (param_3 == 0) {
    ossl_gf_mul(plVar17,puVar3,puVar19);
  }
  if (local_108[0x19] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void point_double_internal(long *param_1,long param_2,int param_3)

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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long lVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  long *plVar18;
  long *plVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar32;
  undefined1 auVar28 [16];
  int iVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar34;
  undefined1 auVar31 [16];
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  int iVar45;
  undefined1 auVar46 [16];
  ulong local_148 [12];
  long local_e8;
  ulong local_d8 [10];
  ulong local_88 [11];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  
  puVar20 = local_d8 + 2;
  local_88[9] = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_sqr(puVar20);
  ossl_gf_sqr(local_148,param_2 + 0x40);
  lVar14 = 0;
  do {
    lVar6 = *(long *)((long)local_d8 + lVar14 + 0x18);
    lVar7 = *(long *)((long)local_148 + lVar14 + 8);
    *(long *)((long)local_88 + lVar14) =
         *(long *)((long)puVar20 + lVar14) + *(long *)((long)local_148 + lVar14);
    *(long *)((long)local_88 + lVar14 + 8) = lVar6 + lVar7;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x40);
  local_88[4] = local_88[4] + (local_88[7] >> 0x38);
  puVar15 = local_88 + 6;
  uVar21 = local_88[7];
  do {
    uVar23 = uVar21 & 0xffffffffffffff;
    uVar21 = *puVar15;
    puVar15[1] = (uVar21 >> 0x38) + uVar23;
    bVar25 = local_88 != puVar15;
    puVar15 = puVar15 + -1;
  } while (bVar25);
  lVar14 = 0;
  local_88[0] = (local_88[0] & 0xffffffffffffff) + (local_88[7] >> 0x38);
  do {
    plVar1 = (long *)(param_2 + 0x40 + lVar14);
    lVar6 = plVar1[1];
    lVar7 = ((long *)(param_2 + lVar14))[1];
    plVar19 = (long *)((long)param_1 + lVar14 + 0xc0);
    *plVar19 = *plVar1 + *(long *)(param_2 + lVar14);
    plVar19[1] = lVar6 + lVar7;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x40);
  uVar21 = param_1[0x1f];
  uVar23 = uVar21 >> 0x38;
  param_1[0x1c] = param_1[0x1c] + uVar23;
  puVar15 = (ulong *)(param_1 + 0x1e);
  do {
    uVar24 = uVar21 & 0xffffffffffffff;
    puVar17 = puVar15 + -1;
    uVar21 = *puVar15;
    puVar15[1] = (uVar21 >> 0x38) + uVar24;
    puVar15 = puVar17;
  } while (puVar17 != (ulong *)(param_1 + 0x17));
  puVar15 = local_148 + 8;
  plVar1 = param_1 + 0x18;
  param_1[0x18] = (param_1[0x18] & 0xffffffffffffffU) + uVar23;
  ossl_gf_sqr(puVar15,plVar1);
  auVar13 = __LC4;
  auVar12 = __LC3;
  auVar30._4_4_ = _UNK_001035f4;
  auVar30._0_4_ = __LC1;
  auVar30._8_4_ = _UNK_001035f8;
  auVar30._12_4_ = _UNK_001035fc;
  puVar17 = puVar15;
  puVar22 = local_88;
  auVar42 = auVar30;
  do {
    uVar21 = puVar22[3];
    iVar34 = SUB164(__LC2,0);
    uVar2 = (uint)(auVar42._0_4_ == iVar34);
    iVar26 = -uVar2;
    iVar33 = auVar42._4_4_;
    iVar35 = SUB164(__LC2,4);
    uVar3 = (uint)(iVar33 == iVar35);
    iVar32 = -uVar3;
    auVar38._4_4_ = iVar32;
    auVar38._0_4_ = iVar26;
    iVar45 = auVar42._8_4_;
    iVar36 = SUB164(__LC2,8);
    uVar4 = (uint)(iVar45 == iVar36);
    iVar27 = auVar42._12_4_;
    iVar37 = SUB164(__LC2,0xc);
    uVar5 = (uint)(iVar27 == iVar37);
    puVar16 = puVar17 + 4;
    auVar42._0_4_ = auVar42._0_4_ + iVar34;
    auVar42._4_4_ = iVar33 + iVar35;
    auVar42._8_4_ = iVar45 + iVar36;
    auVar42._12_4_ = iVar27 + iVar37;
    auVar38._8_4_ = iVar32;
    auVar38._12_4_ = -(uint)(uVar3 != 0);
    auVar39._8_8_ = auVar38._8_8_;
    auVar39._4_4_ = -(uint)(uVar2 != 0);
    auVar39._0_4_ = iVar26;
    auVar28._4_4_ = -(uint)(uVar4 != 0);
    auVar28._0_4_ = -uVar4;
    auVar28._8_4_ = -uVar5;
    auVar28._12_4_ = -(uint)(uVar5 != 0);
    auVar28 = ~auVar28 & __LC4 | __LC3 & auVar28;
    auVar39 = ~auVar39 & __LC4 | __LC3 & auVar39;
    uVar23 = *puVar22;
    uVar24 = puVar22[1];
    puVar17[2] = (auVar28._0_8_ - puVar22[2]) + puVar17[2];
    puVar17[3] = (auVar28._8_8_ - uVar21) + puVar17[3];
    *puVar17 = (auVar39._0_8_ - uVar23) + *puVar17;
    puVar17[1] = (auVar39._8_8_ - uVar24) + puVar17[1];
    puVar17 = puVar16;
    puVar22 = puVar22 + 4;
  } while (puVar16 != puVar20);
  local_e8 = local_e8 + (local_d8[1] >> 0x38);
  puVar17 = local_d8;
  uVar21 = local_d8[1];
  do {
    uVar23 = uVar21 & 0xffffffffffffff;
    uVar21 = *puVar17;
    puVar17[1] = (uVar21 >> 0x38) + uVar23;
    bVar25 = puVar17 != puVar15;
    puVar17 = puVar17 + -1;
  } while (bVar25);
  lVar14 = 0;
  local_148[8] = (local_148[8] & 0xffffffffffffff) + (local_d8[1] >> 0x38);
  do {
    auVar46._0_4_ = auVar30._0_4_ + iVar34;
    auVar46._4_4_ = auVar30._4_4_ + iVar35;
    auVar46._8_4_ = auVar30._8_4_ + iVar36;
    auVar46._12_4_ = auVar30._12_4_ + iVar37;
    lVar6 = *(long *)((long)local_148 + lVar14 + 8);
    uVar2 = (uint)(auVar30._0_4_ == iVar34);
    iVar26 = -uVar2;
    uVar3 = (uint)(auVar30._4_4_ == iVar35);
    iVar33 = -uVar3;
    auVar41._4_4_ = iVar33;
    auVar41._0_4_ = iVar26;
    uVar4 = (uint)(auVar30._8_4_ == iVar36);
    uVar5 = (uint)(auVar30._12_4_ == iVar37);
    lVar7 = *(long *)((long)local_148 + lVar14 + 0x10);
    lVar8 = *(long *)((long)local_148 + lVar14 + 0x18);
    lVar9 = *(long *)((long)local_d8 + lVar14 + 0x18);
    lVar10 = *(long *)((long)local_d8 + lVar14 + 0x20);
    lVar11 = *(long *)((long)local_d8 + lVar14 + 0x28);
    auVar41._8_4_ = iVar33;
    auVar41._12_4_ = -(uint)(uVar3 != 0);
    auVar40._8_8_ = auVar41._8_8_;
    auVar40._4_4_ = -(uint)(uVar2 != 0);
    auVar40._0_4_ = iVar26;
    auVar29._4_4_ = -(uint)(uVar4 != 0);
    auVar29._0_4_ = -uVar4;
    auVar29._8_4_ = -uVar5;
    auVar29._12_4_ = -(uint)(uVar5 != 0);
    auVar42 = ~auVar40 & auVar13 | auVar12 & auVar40;
    auVar30 = ~auVar29 & auVar13 | auVar12 & auVar29;
    plVar19 = (long *)((long)param_1 + lVar14 + 0xc0);
    *plVar19 = auVar42._0_8_ +
               (*(long *)((long)local_148 + lVar14) - *(long *)((long)puVar20 + lVar14));
    plVar19[1] = auVar42._8_8_ + (lVar6 - lVar9);
    plVar19 = (long *)((long)param_1 + lVar14 + 0xd0);
    *plVar19 = auVar30._0_8_ + (lVar7 - lVar10);
    plVar19[1] = auVar30._8_8_ + (lVar8 - lVar11);
    lVar14 = lVar14 + 0x20;
    auVar30 = auVar46;
  } while (lVar14 != 0x40);
  uVar23 = (ulong)param_1[0x1f] >> 0x38;
  param_1[0x1c] = param_1[0x1c] + uVar23;
  uVar21 = param_1[0x1f];
  puVar20 = (ulong *)(param_1 + 0x1e);
  do {
    puVar17 = puVar20 + -1;
    puVar20[1] = (*puVar20 >> 0x38) + (uVar21 & 0xffffffffffffff);
    uVar21 = *puVar20;
    puVar20 = puVar17;
  } while (puVar17 != (ulong *)(param_1 + 0x17));
  param_1[0x18] = (param_1[0x18] & 0xffffffffffffffU) + uVar23;
  ossl_gf_sqr(param_1,param_2 + 0x80);
  auVar13 = __LC4;
  auVar12 = __LC3;
  auVar30 = __LC2;
  iVar45 = _UNK_001035fc;
  iVar32 = _UNK_001035f8;
  iVar33 = _UNK_001035f4;
  iVar26 = __LC1;
  plVar19 = param_1;
  do {
    plVar18 = plVar19 + 1;
    plVar19[0x10] = *plVar19 * 2;
    plVar19 = plVar18;
  } while (param_1 + 8 != plVar18);
  uVar21 = param_1[0x17];
  uVar23 = uVar21 >> 0x38;
  param_1[0x14] = param_1[0x14] + uVar23;
  puVar20 = (ulong *)(param_1 + 0x16);
  do {
    uVar24 = uVar21 & 0xffffffffffffff;
    puVar17 = puVar20 + -1;
    uVar21 = *puVar20;
    puVar20[1] = (uVar21 >> 0x38) + uVar24;
    puVar20 = puVar17;
  } while (puVar17 != (ulong *)(param_1 + 0xf));
  param_1[0x10] = (param_1[0x10] & 0xffffffffffffffU) + uVar23;
  plVar19 = plVar1;
  puVar20 = local_148;
  do {
    lVar14 = plVar19[3];
    uVar2 = (uint)(iVar26 == auVar30._0_4_);
    iVar27 = -uVar2;
    uVar3 = (uint)(iVar33 == auVar30._4_4_);
    iVar34 = -uVar3;
    auVar44._4_4_ = iVar34;
    auVar44._0_4_ = iVar27;
    uVar4 = (uint)(iVar32 == auVar30._8_4_);
    uVar5 = (uint)(iVar45 == auVar30._12_4_);
    plVar18 = plVar19 + 4;
    iVar26 = iVar26 + auVar30._0_4_;
    iVar33 = iVar33 + auVar30._4_4_;
    iVar32 = iVar32 + auVar30._8_4_;
    iVar45 = iVar45 + auVar30._12_4_;
    lVar6 = plVar19[-5];
    auVar44._8_4_ = iVar34;
    auVar44._12_4_ = -(uint)(uVar3 != 0);
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._4_4_ = -(uint)(uVar2 != 0);
    auVar43._0_4_ = iVar27;
    auVar31._4_4_ = -(uint)(uVar4 != 0);
    auVar31._0_4_ = -uVar4;
    auVar31._8_4_ = -uVar5;
    auVar31._12_4_ = -(uint)(uVar5 != 0);
    auVar42 = ~auVar31 & auVar13 | auVar12 & auVar31;
    auVar28 = ~auVar43 & auVar13 | auVar12 & auVar43;
    lVar7 = *plVar19;
    lVar8 = plVar19[1];
    lVar9 = plVar19[-8];
    lVar10 = plVar19[-7];
    puVar20[2] = (auVar42._0_8_ - plVar19[2]) + plVar19[-6];
    puVar20[3] = (auVar42._8_8_ - lVar14) + lVar6;
    *puVar20 = (auVar28._0_8_ - lVar7) + lVar9;
    puVar20[1] = (auVar28._8_8_ - lVar8) + lVar10;
    plVar19 = plVar18;
    puVar20 = puVar20 + 4;
  } while (param_1 + 0x20 != plVar18);
  local_148[4] = local_148[4] + (local_148[7] >> 0x38);
  puVar20 = local_148 + 6;
  uVar21 = local_148[7];
  do {
    uVar23 = uVar21 & 0xffffffffffffff;
    uVar21 = *puVar20;
    puVar20[1] = (uVar21 >> 0x38) + uVar23;
    bVar25 = local_148 != puVar20;
    puVar20 = puVar20 + -1;
  } while (bVar25);
  local_148[0] = (local_148[0] & 0xffffffffffffff) + (local_148[7] >> 0x38);
  ossl_gf_mul(param_1,local_148,puVar15);
  ossl_gf_mul(param_1 + 0x10,plVar1,local_148);
  ossl_gf_mul(param_1 + 8,plVar1,local_88);
  if (param_3 == 0) {
    ossl_gf_mul(plVar1,puVar15,local_88);
  }
  if (local_88[9] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void add_niels_to_pt(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  int iVar27;
  int iVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  ulong local_108 [27];
  undefined1 auVar39 [16];
  
  plVar2 = (long *)(param_1 + 0x80);
  plVar1 = (long *)(param_1 + 0x40);
  puVar3 = local_108 + 8;
  local_108[0x19] = *(long *)(in_FS_OFFSET + 0x28);
  plVar21 = plVar1;
  puVar22 = puVar3;
  iVar42 = __LC1;
  iVar43 = _UNK_001035f4;
  iVar44 = _UNK_001035f8;
  iVar45 = _UNK_001035fc;
  do {
    lVar18 = plVar21[-5];
    uVar4 = (uint)(iVar42 == SUB164(__LC2,0));
    iVar27 = -uVar4;
    uVar6 = (uint)(iVar43 == SUB164(__LC2,4));
    iVar31 = -uVar6;
    auVar36._4_4_ = iVar31;
    auVar36._0_4_ = iVar27;
    uVar8 = (uint)(iVar44 == SUB164(__LC2,8));
    uVar10 = (uint)(iVar45 == SUB164(__LC2,0xc));
    plVar17 = plVar21 + 4;
    iVar42 = iVar42 + SUB164(__LC2,0);
    iVar43 = iVar43 + SUB164(__LC2,4);
    iVar44 = iVar44 + SUB164(__LC2,8);
    iVar45 = iVar45 + SUB164(__LC2,0xc);
    lVar11 = plVar21[3];
    auVar36._8_4_ = iVar31;
    auVar36._12_4_ = -(uint)(uVar6 != 0);
    auVar29._8_8_ = auVar36._8_8_;
    auVar29._4_4_ = -(uint)(uVar4 != 0);
    auVar29._0_4_ = iVar27;
    auVar28._4_4_ = -(uint)(uVar8 != 0);
    auVar28._0_4_ = -uVar8;
    auVar28._8_4_ = -uVar10;
    auVar28._12_4_ = -(uint)(uVar10 != 0);
    auVar28 = ~auVar28 & __LC4 | __LC3 & auVar28;
    auVar36 = ~auVar29 & __LC4 | __LC3 & auVar29;
    lVar12 = plVar21[-8];
    lVar13 = plVar21[-7];
    lVar14 = *plVar21;
    lVar15 = plVar21[1];
    puVar22[2] = (auVar28._0_8_ - plVar21[-6]) + plVar21[2];
    puVar22[3] = (auVar28._8_8_ - lVar18) + lVar11;
    *puVar22 = (auVar36._0_8_ - lVar12) + lVar14;
    puVar22[1] = (auVar36._8_8_ - lVar13) + lVar15;
    plVar21 = plVar17;
    puVar22 = puVar22 + 4;
  } while (plVar17 != plVar2);
  puVar22 = local_108 + 0xe;
  uVar25 = local_108[0xf] >> 0x38;
  local_108[0xc] = local_108[0xc] + uVar25;
  puVar19 = puVar22;
  uVar24 = local_108[0xf];
  do {
    uVar23 = uVar24 & 0xffffffffffffff;
    uVar24 = *puVar19;
    puVar19[1] = (uVar24 >> 0x38) + uVar23;
    bVar26 = puVar19 != puVar3;
    puVar19 = puVar19 + -1;
  } while (bVar26);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar25;
  ossl_gf_mul(local_108,param_2,puVar3);
  lVar18 = 0;
  do {
    lVar11 = ((long *)(param_1 + lVar18))[1];
    plVar21 = (long *)(param_1 + 0x40 + lVar18);
    lVar12 = plVar21[1];
    *(long *)((long)puVar3 + lVar18) = *(long *)(param_1 + lVar18) + *plVar21;
    *(long *)((long)local_108 + lVar18 + 0x48) = lVar11 + lVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  uVar25 = local_108[0xf] >> 0x38;
  local_108[0xc] = local_108[0xc] + uVar25;
  puVar19 = puVar22;
  uVar24 = local_108[0xf];
  do {
    uVar23 = uVar24 & 0xffffffffffffff;
    uVar24 = *puVar19;
    puVar19[1] = (uVar24 >> 0x38) + uVar23;
    bVar26 = puVar19 != puVar3;
    puVar19 = puVar19 + -1;
  } while (bVar26);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + uVar25;
  ossl_gf_mul(plVar1,param_2 + 0x40,puVar3);
  puVar19 = local_108 + 0x10;
  ossl_gf_mul(param_1,param_2 + 0x80);
  auVar36 = __LC4;
  auVar28 = __LC3;
  lVar18 = 0;
  do {
    lVar11 = *(long *)((long)local_108 + lVar18 + 8);
    plVar21 = (long *)(param_1 + 0x40 + lVar18);
    lVar12 = plVar21[1];
    *(long *)((long)puVar19 + lVar18) = *(long *)((long)local_108 + lVar18) + *plVar21;
    *(long *)((long)local_108 + lVar18 + 0x88) = lVar11 + lVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  local_108[0x14] = local_108[0x14] + (local_108[0x17] >> 0x38);
  puVar20 = local_108 + 0x16;
  uVar24 = local_108[0x17];
  do {
    uVar25 = uVar24 & 0xffffffffffffff;
    uVar24 = *puVar20;
    puVar20[1] = (uVar24 >> 0x38) + uVar25;
    bVar26 = puVar19 != puVar20;
    puVar20 = puVar20 + -1;
  } while (bVar26);
  lVar18 = 0;
  local_108[0x10] = (local_108[0x10] & 0xffffffffffffff) + (local_108[0x17] >> 0x38);
  iVar42 = __LC1;
  iVar43 = _UNK_001035f4;
  iVar44 = _UNK_001035f8;
  iVar45 = _UNK_001035fc;
  do {
    plVar21 = (long *)(param_1 + 0x40 + lVar18);
    lVar11 = plVar21[1];
    iVar32 = SUB164(__LC2,0);
    bVar26 = iVar42 == iVar32;
    iVar27 = -(uint)bVar26;
    iVar33 = SUB164(__LC2,4);
    bVar5 = iVar43 == iVar33;
    iVar31 = -(uint)bVar5;
    auVar37._4_4_ = iVar31;
    auVar37._0_4_ = iVar27;
    iVar34 = SUB164(__LC2,8);
    bVar7 = iVar44 == iVar34;
    iVar35 = SUB164(__LC2,0xc);
    bVar9 = iVar45 == iVar35;
    lVar12 = *(long *)((long)local_108 + lVar18 + 8);
    plVar17 = (long *)(param_1 + 0x50 + lVar18);
    lVar13 = *plVar17;
    lVar14 = plVar17[1];
    iVar42 = iVar42 + iVar32;
    iVar43 = iVar43 + iVar33;
    iVar44 = iVar44 + iVar34;
    iVar45 = iVar45 + iVar35;
    lVar15 = *(long *)((long)local_108 + lVar18 + 0x10);
    lVar16 = *(long *)((long)local_108 + lVar18 + 0x18);
    auVar37._8_4_ = iVar31;
    auVar37._12_4_ = -(uint)(bVar5 != 0);
    auVar38._8_8_ = auVar37._8_8_;
    auVar38._4_4_ = -(uint)(bVar26 != 0);
    auVar38._0_4_ = iVar27;
    auVar41._4_4_ = -(uint)(bVar7 != 0);
    auVar41._0_4_ = -(uint)bVar7;
    auVar41._8_4_ = -(uint)bVar9;
    auVar41._12_4_ = -(uint)(bVar9 != 0);
    auVar38 = ~auVar38 & __LC4 | __LC3 & auVar38;
    auVar29 = ~auVar41 & __LC4 | __LC3 & auVar41;
    *(long *)((long)puVar3 + lVar18) =
         auVar38._0_8_ + (*plVar21 - *(long *)((long)local_108 + lVar18));
    *(long *)((long)local_108 + lVar18 + 0x48) = auVar38._8_8_ + (lVar11 - lVar12);
    *(long *)((long)local_108 + lVar18 + 0x50) = auVar29._0_8_ + (lVar13 - lVar15);
    *(long *)((long)local_108 + lVar18 + 0x58) = auVar29._8_8_ + (lVar14 - lVar16);
    lVar18 = lVar18 + 0x20;
  } while (lVar18 != 0x40);
  local_108[0xc] = local_108[0xc] + (local_108[0xf] >> 0x38);
  uVar24 = local_108[0xf];
  do {
    uVar25 = uVar24 & 0xffffffffffffff;
    uVar24 = *puVar22;
    puVar22[1] = (uVar24 >> 0x38) + uVar25;
    bVar26 = puVar3 != puVar22;
    puVar22 = puVar22 + -1;
  } while (bVar26);
  local_108[8] = (local_108[8] & 0xffffffffffffff) + (local_108[0xf] >> 0x38);
  plVar21 = plVar2;
  iVar42 = __LC1;
  iVar43 = _UNK_001035f4;
  iVar44 = _UNK_001035f8;
  iVar45 = _UNK_001035fc;
  do {
    plVar17 = plVar21 + 4;
    iVar27 = -(uint)(iVar42 == iVar32);
    iVar31 = -(uint)(iVar43 == iVar33);
    auVar40._4_4_ = iVar31;
    auVar40._0_4_ = iVar27;
    auVar40._8_4_ = iVar31;
    auVar40._12_4_ = -(uint)((iVar43 == iVar33) != 0);
    auVar39._8_8_ = auVar40._8_8_;
    auVar39._4_4_ = -(uint)((iVar42 == iVar32) != 0);
    auVar39._0_4_ = iVar27;
    auVar30._4_4_ = -(uint)((iVar44 == iVar34) != 0);
    auVar30._0_4_ = -(uint)(iVar44 == iVar34);
    auVar30._8_4_ = -(uint)(iVar45 == iVar35);
    auVar30._12_4_ = -(uint)((iVar45 == iVar35) != 0);
    auVar41 = ~auVar39 & auVar36 | auVar28 & auVar39;
    auVar29 = ~auVar30 & auVar36 | auVar28 & auVar30;
    plVar21[-8] = (auVar41._0_8_ - plVar21[-0x10]) + *plVar21;
    plVar21[-7] = (auVar41._8_8_ - plVar21[-0xf]) + plVar21[1];
    plVar21[-6] = (auVar29._0_8_ - plVar21[-0xe]) + plVar21[2];
    plVar21[-5] = (auVar29._8_8_ - plVar21[-0xd]) + plVar21[3];
    plVar21 = plVar17;
    iVar42 = iVar42 + iVar32;
    iVar43 = iVar43 + iVar33;
    iVar44 = iVar44 + iVar34;
    iVar45 = iVar45 + iVar35;
  } while (plVar17 != (long *)(param_1 + 0xc0));
  uVar24 = *(ulong *)(param_1 + 0x78);
  uVar25 = uVar24 >> 0x38;
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + uVar25;
  puVar22 = (ulong *)(param_1 + 0x70);
  do {
    uVar23 = uVar24 & 0xffffffffffffff;
    puVar20 = puVar22 + -1;
    uVar24 = *puVar22;
    puVar22[1] = (uVar24 >> 0x38) + uVar23;
    puVar22 = puVar20;
  } while (puVar20 != (ulong *)(param_1 + 0x38));
  lVar18 = 0;
  *(ulong *)(param_1 + 0x40) = (*(ulong *)(param_1 + 0x40) & 0xffffffffffffff) + uVar25;
  do {
    plVar21 = (long *)(param_1 + 0x80 + lVar18);
    lVar11 = plVar21[1];
    lVar12 = ((long *)(param_1 + lVar18))[1];
    *(long *)((long)local_108 + lVar18) = *plVar21 + *(long *)(param_1 + lVar18);
    *(long *)((long)local_108 + lVar18 + 8) = lVar11 + lVar12;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  local_108[4] = local_108[4] + (local_108[7] >> 0x38);
  puVar22 = local_108 + 6;
  uVar24 = local_108[7];
  do {
    uVar25 = uVar24 & 0xffffffffffffff;
    uVar24 = *puVar22;
    puVar22[1] = (uVar24 >> 0x38) + uVar25;
    bVar26 = local_108 != puVar22;
    puVar22 = puVar22 + -1;
  } while (bVar26);
  local_108[0] = (local_108[0] & 0xffffffffffffff) + (local_108[7] >> 0x38);
  ossl_gf_mul(plVar2,local_108,plVar1);
  ossl_gf_mul(param_1,plVar1,puVar3);
  ossl_gf_mul(plVar1,local_108,puVar19);
  if (param_3 == 0) {
    ossl_gf_mul((long *)(param_1 + 0xc0),puVar3,puVar19);
  }
  if (local_108[0x19] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_point_double(undefined8 param_1,undefined8 param_2)

{
  point_double_internal(param_1,param_2,0);
  return;
}



void ossl_curve448_point_eq(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_a8 [64];
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_mul(auStack_a8,param_1 + 0x40,param_2);
  ossl_gf_mul(local_68,param_2 + 0x40,param_1);
  gf_eq(auStack_a8,local_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_curve448_point_valid(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = param_1 + 0x80;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_gf_mul(local_108,param_1,param_1 + 0x40);
  ossl_gf_mul(local_c8,lVar1,param_1 + 0xc0);
  uVar2 = gf_eq(local_108,local_c8);
  ossl_gf_sqr(local_108,param_1);
  ossl_gf_sqr(local_c8,param_1 + 0x40);
  gf_sub(local_108,local_c8,local_108);
  ossl_gf_sqr(local_c8,param_1 + 0xc0);
  ossl_gf_mulw_unsigned(local_88,local_c8,0x98aa);
  gf_sub(local_88,ZERO,local_88);
  ossl_gf_sqr(local_c8,lVar1);
  gf_add(local_c8,local_c8,local_88);
  uVar3 = gf_eq(local_108,local_c8);
  uVar4 = gf_eq(lVar1,ZERO);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ~uVar4 & uVar2 & uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_precomputed_scalarmul(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long in_FS_OFFSET;
  bool bVar16;
  byte bVar17;
  ulong uVar18;
  uint local_1b0;
  uint local_1a0;
  ulong local_188 [8];
  ulong local_148 [8];
  ulong local_108 [24];
  ulong local_48;
  long local_40;
  
  bVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ossl_curve448_scalar_add(local_188,param_3,precomputed_scalarmul_adjustment);
  ossl_curve448_scalar_halve();
  local_1a0 = 0x12;
  while( true ) {
    uVar1 = local_1a0 - 1;
    iVar9 = 0;
    pbVar15 = (byte *)(param_2 + 0xc00);
    local_1b0 = uVar1;
    while( true ) {
      while( true ) {
        uVar13 = 0;
        iVar11 = 0;
        uVar3 = local_1b0;
        do {
          if (uVar3 < 0x1be) {
            uVar13 = uVar13 | ((uint)(local_188[uVar3 >> 6] >> ((byte)uVar3 & 0x3f)) & 1) <<
                              ((byte)iVar11 & 0x3f);
          }
          iVar11 = iVar11 + 1;
          uVar3 = uVar3 + 0x12;
        } while (iVar11 != 5);
        pbVar14 = pbVar15 + -0xc00;
        uVar3 = ((int)uVar13 >> 4) - 1;
        uVar10 = (ulong)(int)uVar3;
        puVar4 = local_108;
        for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + (ulong)bVar17 * -2 + 1;
        }
        uVar12 = (ulong)((uVar3 ^ uVar13) & 0xf);
        do {
          puVar4 = local_108;
          pbVar8 = pbVar14;
          do {
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
            *(byte *)puVar4 =
                 (byte)*puVar4 |
                 bVar2 & (char)(~(byte)(uVar12 >> 0x38) & (byte)(uVar12 - 1 >> 0x38)) >> 7;
            puVar4 = (ulong *)((long)puVar4 + 1);
          } while (&local_48 != puVar4);
          pbVar14 = pbVar14 + 0xc0;
          uVar12 = uVar12 - 1;
        } while (pbVar14 != pbVar15);
        puVar4 = local_108;
        do {
          puVar7 = puVar4 + 2;
          uVar12 = (puVar4[8] ^ *puVar4) & uVar10;
          uVar18 = (puVar4[9] ^ puVar4[1]) & uVar10;
          *puVar4 = *puVar4 ^ uVar12;
          puVar4[1] = puVar4[1] ^ uVar18;
          puVar4[8] = uVar12 ^ puVar4[8];
          puVar4[9] = uVar18 ^ puVar4[9];
          puVar4 = puVar7;
        } while (local_108 + 8 != puVar7);
        gf_sub(local_148,ZERO,local_108 + 0x10);
        puVar4 = local_108 + 0x10;
        puVar7 = local_148;
        do {
          uVar12 = *puVar7;
          puVar5 = puVar4 + 1;
          puVar7 = puVar7 + 1;
          *puVar4 = uVar12 & uVar10 | *puVar4 & (long)-((int)uVar13 >> 4);
          puVar4 = puVar5;
        } while (puVar5 != &local_48);
        if ((iVar9 != 0) || (local_1a0 != 0x12)) break;
        pbVar15 = pbVar15 + 0xc00;
        iVar9 = 1;
        niels_to_pt();
        local_1b0 = local_1b0 + 0x5a;
      }
      bVar16 = iVar9 == 4;
      iVar9 = iVar9 + 1;
      add_niels_to_pt(param_1,local_108,local_1a0 != 1 && bVar16);
      if (iVar9 == 5) break;
      local_1b0 = local_1b0 + 0x5a;
      pbVar15 = pbVar15 + 0xc00;
    }
    if (uVar1 == 0) break;
    point_double_internal(param_1,param_1,0);
    local_1a0 = uVar1;
  }
  OPENSSL_cleanse(local_108,0xc0);
  OPENSSL_cleanse(local_188,0x38);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  ulong local_c8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  ulong uStack_57;
  long local_40;
  
  lVar2 = param_1 + 0x80;
  lVar3 = param_1 + 0xc0;
  lVar1 = param_1 + 0x40;
  local_68 = param_2[4];
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(ulong *)((long)param_2 + 0x31);
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  uStack_60 = (undefined1)param_2[5];
  uStack_5f = (undefined7)*(undefined8 *)((long)param_2 + 0x29);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x29) >> 0x38);
  uStack_57 = uVar4 & 0x7fffffffffffffff;
  uVar13 = gf_deserialize(lVar1,&local_88,1);
  uVar5 = uStack_57 >> 0x38;
  ossl_gf_sqr(param_1,lVar1);
  gf_sub(lVar2,ONE,param_1);
  ossl_gf_mulw_unsigned(lVar3,param_1,0x98a9);
  gf_sub(lVar3,ZERO,lVar3);
  gf_sub(lVar3,ONE,lVar3);
  ossl_gf_mul(param_1,lVar2,lVar3);
  uVar14 = gf_isr(lVar3,param_1);
  ossl_gf_mul(param_1,lVar3,lVar2);
  uVar15 = gf_lobit(param_1);
  uVar15 = -(ulong)((uVar4 & 0x8000000000000000) == 0) ^ uVar15;
  gf_sub(local_c8,ZERO,param_1);
  lVar16 = 0;
  do {
    *(ulong *)(param_1 + lVar16 * 8) =
         local_c8[lVar16] & ~uVar15 | *(ulong *)(param_1 + lVar16 * 8) & uVar15;
    uVar12 = ONE._56_8_;
    uVar11 = ONE._48_8_;
    uVar10 = ONE._40_8_;
    uVar9 = ONE._32_8_;
    uVar8 = ONE._24_8_;
    uVar7 = ONE._16_8_;
    uVar6 = ONE._8_8_;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 8);
  *(undefined8 *)(param_1 + 0x80) = ONE._0_8_;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  *(undefined8 *)(param_1 + 0xa8) = uVar10;
  *(undefined8 *)(param_1 + 0xb0) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = uVar12;
  ossl_gf_sqr(local_108,param_1);
  ossl_gf_sqr(local_188,lVar1);
  gf_add(local_c8,local_108,local_188);
  gf_add(lVar3,lVar1,param_1);
  ossl_gf_sqr(local_148,lVar3);
  gf_sub(local_148,local_148,local_c8);
  gf_sub(lVar3,local_188,local_108);
  ossl_gf_sqr(param_1,lVar2);
  gf_add(lVar2,param_1,param_1);
  gf_sub(local_188,lVar2,local_c8);
  ossl_gf_mul(param_1,local_188,local_148);
  ossl_gf_mul(lVar2,lVar3,local_188);
  ossl_gf_mul(lVar1,lVar3,local_c8);
  ossl_gf_mul(lVar3,local_148,local_c8);
  OPENSSL_cleanse(local_188,0x40);
  OPENSSL_cleanse(local_148,0x40);
  OPENSSL_cleanse(local_108,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  OPENSSL_cleanse(&local_88,0x39);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (long)(~uVar5 & uVar5 - 1) >> 0x3f & uVar13 & uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ossl_x448_int(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong *ptr;
  ulong *ptr_00;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  long in_FS_OFFSET;
  bool bVar24;
  int iVar25;
  int iVar30;
  ulong uVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  ulong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8 [8];
  ulong local_188 [13];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulong local_108 [6];
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8 [12];
  long local_68;
  ulong local_58;
  ulong local_50;
  long local_40;
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  
  ptr = local_c8 + 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  gf_deserialize(&local_208,param_2,1,0);
  uVar22 = 0;
  local_188[0] = ZERO._0_8_;
  local_188[1] = ZERO._8_8_;
  local_188[2] = ZERO._16_8_;
  local_188[3] = ZERO._24_8_;
  local_188[4] = ZERO._32_8_;
  local_188[5] = ZERO._40_8_;
  local_188[6] = ZERO._48_8_;
  local_188[7] = ZERO._56_8_;
  uVar21 = 0xff;
  local_188[8] = local_208;
  local_188[9] = uStack_200;
  ptr_00 = local_188 + 8;
  local_188[10] = local_1f8;
  local_188[0xb] = uStack_1f0;
  local_1c8[0] = ONE._0_8_;
  local_1c8[1] = ONE._8_8_;
  local_1c8[2] = ONE._16_8_;
  local_1c8[3] = ONE._24_8_;
  local_108[0] = ONE._0_8_;
  local_108[1] = ONE._8_8_;
  local_108[2] = ONE._16_8_;
  local_108[3] = ONE._24_8_;
  iVar46 = 0x1bf;
  local_1c8[4] = ONE._32_8_;
  local_1c8[5] = ONE._40_8_;
  local_1c8[6] = ONE._48_8_;
  local_1c8[7] = ONE._56_8_;
  local_188[0xc] = local_1e8;
  uStack_120 = uStack_1e0;
  local_118 = local_1d8;
  uStack_110 = uStack_1d0;
  local_108[4] = ONE._32_8_;
  local_108[5] = ONE._40_8_;
  local_d8 = ONE._48_8_;
  uStack_d0 = ONE._56_8_;
  puVar20 = local_188 + 6;
  do {
    uVar13 = uVar22;
    iVar9 = iVar46;
    do {
      auVar11 = __LC4;
      auVar10 = __LC3;
      auVar27 = __LC2;
      uVar22 = -(ulong)((int)uVar21 >> ((byte)iVar9 & 7) & 1);
      uVar13 = uVar13 ^ uVar22;
      puVar17 = local_1c8;
      puVar19 = ptr_00;
      do {
        puVar14 = puVar17 + 2;
        uVar33 = (*puVar17 ^ *puVar19) & uVar13;
        uVar31 = (puVar17[1] ^ puVar19[1]) & uVar13;
        uVar18 = *puVar19;
        uVar32 = puVar19[1];
        *puVar17 = *puVar17 ^ uVar33;
        puVar17[1] = puVar17[1] ^ uVar31;
        *puVar19 = uVar33 ^ uVar18;
        puVar19[1] = uVar31 ^ uVar32;
        puVar15 = local_188;
        puVar17 = puVar14;
        puVar23 = local_108;
        puVar19 = puVar19 + 2;
      } while (puVar14 != local_188);
      do {
        puVar17 = puVar15 + 2;
        uVar33 = (*puVar15 ^ *puVar23) & uVar13;
        uVar31 = (puVar15[1] ^ puVar23[1]) & uVar13;
        uVar18 = *puVar23;
        uVar32 = puVar23[1];
        *puVar15 = *puVar15 ^ uVar33;
        puVar15[1] = puVar15[1] ^ uVar31;
        *puVar23 = uVar33 ^ uVar18;
        puVar23[1] = uVar31 ^ uVar32;
        puVar15 = puVar17;
        puVar23 = puVar23 + 2;
      } while (puVar17 != ptr_00);
      lVar16 = 0;
      do {
        lVar6 = *(long *)((long)local_1c8 + lVar16 + 8);
        lVar7 = *(long *)((long)local_188 + lVar16 + 8);
        *(long *)((long)local_c8 + lVar16) =
             *(long *)((long)local_1c8 + lVar16) + *(long *)((long)local_188 + lVar16);
        *(long *)((long)local_c8 + lVar16 + 8) = lVar6 + lVar7;
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x40);
      local_c8[4] = local_c8[4] + (local_c8[7] >> 0x38);
      puVar17 = local_c8 + 6;
      uVar13 = local_c8[7];
      do {
        uVar18 = uVar13 & 0xffffffffffffff;
        uVar13 = *puVar17;
        puVar17[1] = (uVar13 >> 0x38) + uVar18;
        bVar24 = local_c8 != puVar17;
        puVar17 = puVar17 + -1;
      } while (bVar24);
      local_c8[0] = (local_c8[0] & 0xffffffffffffff) + (local_c8[7] >> 0x38);
      puVar17 = local_1c8;
      puVar19 = ptr;
      puVar15 = local_188;
      iVar46 = __LC1;
      iVar47 = _UNK_001035f4;
      iVar48 = _UNK_001035f8;
      iVar49 = _UNK_001035fc;
      do {
        uVar13 = puVar15[3];
        iVar34 = auVar27._0_4_;
        bVar24 = iVar46 == iVar34;
        iVar25 = -(uint)bVar24;
        iVar35 = auVar27._4_4_;
        bVar1 = iVar47 == iVar35;
        iVar30 = -(uint)bVar1;
        auVar38._4_4_ = iVar30;
        auVar38._0_4_ = iVar25;
        iVar36 = auVar27._8_4_;
        bVar2 = iVar48 == iVar36;
        iVar37 = auVar27._12_4_;
        bVar4 = iVar49 == iVar37;
        puVar23 = puVar17 + 4;
        iVar46 = iVar46 + iVar34;
        iVar47 = iVar47 + iVar35;
        iVar48 = iVar48 + iVar36;
        iVar49 = iVar49 + iVar37;
        uVar18 = puVar17[3];
        auVar38._8_4_ = iVar30;
        auVar38._12_4_ = -(uint)(bVar1 != 0);
        auVar39._8_8_ = auVar38._8_8_;
        auVar39._4_4_ = -(uint)(bVar24 != 0);
        auVar39._0_4_ = iVar25;
        auVar26._4_4_ = -(uint)(bVar2 != 0);
        auVar26._0_4_ = -(uint)bVar2;
        auVar26._8_4_ = -(uint)bVar4;
        auVar26._12_4_ = -(uint)(bVar4 != 0);
        auVar26 = ~auVar26 & auVar11 | auVar10 & auVar26;
        auVar39 = ~auVar39 & auVar11 | auVar10 & auVar39;
        uVar32 = *puVar15;
        uVar33 = puVar15[1];
        uVar31 = *puVar17;
        uVar8 = puVar17[1];
        puVar19[2] = (auVar26._0_8_ - puVar15[2]) + puVar17[2];
        puVar19[3] = (auVar26._8_8_ - uVar13) + uVar18;
        *puVar19 = (auVar39._0_8_ - uVar32) + uVar31;
        puVar19[1] = (auVar39._8_8_ - uVar33) + uVar8;
        puVar17 = puVar23;
        puVar19 = puVar19 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar23 != local_188);
      local_68 = local_68 + (local_50 >> 0x38);
      puVar17 = &local_58;
      uVar13 = local_50;
      do {
        uVar18 = uVar13 & 0xffffffffffffff;
        uVar13 = *puVar17;
        puVar17[1] = (uVar13 >> 0x38) + uVar18;
        bVar24 = puVar17 != ptr;
        puVar17 = puVar17 + -1;
      } while (bVar24);
      local_c8[8] = (local_c8[8] & 0xffffffffffffff) + (local_50 >> 0x38);
      puVar17 = ptr_00;
      puVar19 = local_188;
      puVar15 = local_108;
      iVar46 = __LC1;
      iVar47 = _UNK_001035f4;
      iVar48 = _UNK_001035f8;
      iVar49 = _UNK_001035fc;
      do {
        uVar13 = puVar15[3];
        bVar24 = iVar46 == iVar34;
        iVar25 = -(uint)bVar24;
        bVar1 = iVar47 == iVar35;
        iVar30 = -(uint)bVar1;
        auVar41._4_4_ = iVar30;
        auVar41._0_4_ = iVar25;
        bVar2 = iVar48 == iVar36;
        bVar4 = iVar49 == iVar37;
        puVar23 = puVar17 + 4;
        iVar46 = iVar46 + iVar34;
        iVar47 = iVar47 + iVar35;
        iVar48 = iVar48 + iVar36;
        iVar49 = iVar49 + iVar37;
        uVar18 = puVar17[3];
        auVar41._8_4_ = iVar30;
        auVar41._12_4_ = -(uint)(bVar1 != 0);
        auVar40._8_8_ = auVar41._8_8_;
        auVar40._4_4_ = -(uint)(bVar24 != 0);
        auVar40._0_4_ = iVar25;
        auVar27._4_4_ = -(uint)(bVar2 != 0);
        auVar27._0_4_ = -(uint)bVar2;
        auVar27._8_4_ = -(uint)bVar4;
        auVar27._12_4_ = -(uint)(bVar4 != 0);
        auVar27 = ~auVar27 & auVar11 | auVar10 & auVar27;
        auVar26 = ~auVar40 & auVar11 | auVar10 & auVar40;
        uVar32 = *puVar15;
        uVar33 = puVar15[1];
        uVar31 = *puVar17;
        uVar8 = puVar17[1];
        puVar19[2] = (auVar27._0_8_ - puVar15[2]) + puVar17[2];
        puVar19[3] = (auVar27._8_8_ - uVar13) + uVar18;
        *puVar19 = (auVar26._0_8_ - uVar32) + uVar31;
        puVar19[1] = (auVar26._8_8_ - uVar33) + uVar8;
        puVar17 = puVar23;
        puVar19 = puVar19 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar23 != local_108);
      local_188[4] = local_188[4] + (local_188[7] >> 0x38);
      puVar17 = puVar20;
      uVar13 = local_188[7];
      do {
        uVar18 = *puVar17;
        puVar17[1] = (uVar18 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = local_188 != puVar17;
        puVar17 = puVar17 + -1;
        uVar13 = uVar18;
      } while (bVar24);
      local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
      ossl_gf_mul(local_1c8,local_c8,local_188);
      lVar16 = 0;
      do {
        lVar6 = *(long *)((long)local_108 + lVar16 + 8);
        *(long *)((long)local_188 + lVar16) =
             *(long *)((long)local_108 + lVar16) + *(long *)((long)ptr_00 + lVar16);
        *(long *)((long)local_188 + lVar16 + 8) = lVar6 + *(long *)((long)local_188 + lVar16 + 0x48)
        ;
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x40);
      local_188[4] = local_188[4] + (local_188[7] >> 0x38);
      puVar17 = puVar20;
      uVar13 = local_188[7];
      do {
        uVar18 = *puVar17;
        puVar17[1] = (uVar18 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = local_188 != puVar17;
        puVar17 = puVar17 + -1;
        uVar13 = uVar18;
      } while (bVar24);
      local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
      ossl_gf_mul(ptr_00,ptr,local_188);
      auVar11 = __LC4;
      auVar10 = __LC3;
      auVar27 = __LC2;
      puVar17 = local_1c8;
      puVar19 = local_108;
      puVar15 = ptr_00;
      iVar46 = __LC1;
      iVar47 = _UNK_001035f4;
      iVar48 = _UNK_001035f8;
      iVar49 = _UNK_001035fc;
      do {
        uVar13 = puVar15[3];
        uVar21 = (uint)(iVar46 == auVar27._0_4_);
        iVar25 = -uVar21;
        uVar12 = (uint)(iVar47 == auVar27._4_4_);
        iVar30 = -uVar12;
        auVar43._4_4_ = iVar30;
        auVar43._0_4_ = iVar25;
        uVar3 = (uint)(iVar48 == auVar27._8_4_);
        uVar5 = (uint)(iVar49 == auVar27._12_4_);
        puVar23 = puVar17 + 4;
        iVar46 = iVar46 + auVar27._0_4_;
        iVar47 = iVar47 + auVar27._4_4_;
        iVar48 = iVar48 + auVar27._8_4_;
        iVar49 = iVar49 + auVar27._12_4_;
        uVar18 = puVar17[3];
        auVar43._8_4_ = iVar30;
        auVar43._12_4_ = -(uint)(uVar12 != 0);
        auVar42._8_8_ = auVar43._8_8_;
        auVar42._4_4_ = -(uint)(uVar21 != 0);
        auVar42._0_4_ = iVar25;
        auVar28._4_4_ = -(uint)(uVar3 != 0);
        auVar28._0_4_ = -uVar3;
        auVar28._8_4_ = -uVar5;
        auVar28._12_4_ = -(uint)(uVar5 != 0);
        auVar26 = ~auVar28 & auVar11 | auVar10 & auVar28;
        auVar39 = ~auVar42 & auVar11 | auVar10 & auVar42;
        uVar32 = *puVar15;
        uVar33 = puVar15[1];
        uVar31 = *puVar17;
        uVar8 = puVar17[1];
        puVar19[2] = (auVar26._0_8_ - puVar15[2]) + puVar17[2];
        puVar19[3] = (auVar26._8_8_ - uVar13) + uVar18;
        *puVar19 = (auVar39._0_8_ - uVar32) + uVar31;
        puVar19[1] = (auVar39._8_8_ - uVar33) + uVar8;
        puVar17 = puVar23;
        puVar19 = puVar19 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar23 != local_188);
      local_108[4] = local_108[4] + (uStack_d0 >> 0x38);
      puVar17 = &local_d8;
      uVar13 = uStack_d0;
      do {
        uVar18 = *puVar17;
        puVar17[1] = (uVar18 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = local_108 != puVar17;
        puVar17 = puVar17 + -1;
        uVar13 = uVar18;
      } while (bVar24);
      local_108[0] = (local_108[0] & 0xffffffffffffff) + (uStack_d0 >> 0x38);
      ossl_gf_sqr(local_188,local_108);
      ossl_gf_mul(local_108,&local_208,local_188);
      lVar16 = 0;
      do {
        lVar6 = *(long *)((long)local_1c8 + lVar16 + 8);
        *(long *)((long)local_188 + lVar16) =
             *(long *)((long)local_1c8 + lVar16) + *(long *)((long)ptr_00 + lVar16);
        *(long *)((long)local_188 + lVar16 + 8) = lVar6 + *(long *)((long)local_188 + lVar16 + 0x48)
        ;
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x40);
      local_188[4] = local_188[4] + (local_188[7] >> 0x38);
      uVar13 = local_188[7];
      puVar17 = puVar20;
      do {
        puVar17[1] = (*puVar17 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = local_188 != puVar17;
        uVar13 = *puVar17;
        puVar17 = puVar17 + -1;
      } while (bVar24);
      local_188[0] = (local_188[0] & 0xffffffffffffff) + (local_188[7] >> 0x38);
      ossl_gf_sqr(ptr_00,local_188);
      ossl_gf_sqr(local_188,local_c8);
      ossl_gf_sqr(local_c8,ptr);
      ossl_gf_mul(local_1c8,local_188,local_c8);
      auVar11 = __LC4;
      auVar10 = __LC3;
      auVar27 = __LC2;
      puVar17 = local_188;
      puVar19 = ptr;
      puVar15 = local_c8;
      iVar46 = __LC1;
      iVar47 = _UNK_001035f4;
      iVar48 = _UNK_001035f8;
      iVar49 = _UNK_001035fc;
      do {
        uVar13 = puVar15[3];
        uVar21 = (uint)(iVar46 == auVar27._0_4_);
        iVar25 = -uVar21;
        uVar12 = (uint)(iVar47 == auVar27._4_4_);
        iVar30 = -uVar12;
        auVar45._4_4_ = iVar30;
        auVar45._0_4_ = iVar25;
        uVar3 = (uint)(iVar48 == auVar27._8_4_);
        uVar5 = (uint)(iVar49 == auVar27._12_4_);
        puVar23 = puVar17 + 4;
        iVar46 = iVar46 + auVar27._0_4_;
        iVar47 = iVar47 + auVar27._4_4_;
        iVar48 = iVar48 + auVar27._8_4_;
        iVar49 = iVar49 + auVar27._12_4_;
        uVar18 = puVar17[3];
        auVar45._8_4_ = iVar30;
        auVar45._12_4_ = -(uint)(uVar12 != 0);
        auVar44._8_8_ = auVar45._8_8_;
        auVar44._4_4_ = -(uint)(uVar21 != 0);
        auVar44._0_4_ = iVar25;
        auVar29._4_4_ = -(uint)(uVar3 != 0);
        auVar29._0_4_ = -uVar3;
        auVar29._8_4_ = -uVar5;
        auVar29._12_4_ = -(uint)(uVar5 != 0);
        auVar26 = ~auVar29 & auVar11 | auVar10 & auVar29;
        auVar39 = ~auVar44 & auVar11 | auVar10 & auVar44;
        uVar32 = *puVar15;
        uVar33 = puVar15[1];
        uVar31 = *puVar17;
        uVar8 = puVar17[1];
        puVar19[2] = (auVar26._0_8_ - puVar15[2]) + puVar17[2];
        puVar19[3] = (auVar26._8_8_ - uVar13) + uVar18;
        *puVar19 = (auVar39._0_8_ - uVar32) + uVar31;
        puVar19[1] = (auVar39._8_8_ - uVar33) + uVar8;
        puVar17 = puVar23;
        puVar19 = puVar19 + 4;
        puVar15 = puVar15 + 4;
      } while (puVar23 != ptr_00);
      local_68 = local_68 + (local_50 >> 0x38);
      uVar13 = local_50;
      puVar17 = &local_58;
      do {
        puVar17[1] = (*puVar17 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = puVar17 != ptr;
        uVar13 = *puVar17;
        puVar17 = puVar17 + -1;
      } while (bVar24);
      local_c8[8] = (local_c8[8] & 0xffffffffffffff) + (local_50 >> 0x38);
      ossl_gf_mulw_unsigned(local_c8,ptr,0x98a9);
      puVar17 = local_c8;
      puVar19 = local_188;
      do {
        uVar13 = *puVar19;
        uVar18 = puVar19[1];
        puVar15 = puVar17 + 2;
        puVar19 = puVar19 + 2;
        *puVar17 = *puVar17 + uVar13;
        puVar17[1] = puVar17[1] + uVar18;
        puVar17 = puVar15;
      } while (local_c8 + 8 != puVar15);
      local_c8[4] = local_c8[4] + (local_c8[7] >> 0x38);
      uVar13 = local_c8[7];
      puVar17 = local_c8 + 6;
      do {
        puVar17[1] = (*puVar17 >> 0x38) + (uVar13 & 0xffffffffffffff);
        bVar24 = local_c8 != puVar17;
        uVar13 = *puVar17;
        puVar17 = puVar17 + -1;
      } while (bVar24);
      local_c8[0] = (local_c8[0] & 0xffffffffffffff) + (local_c8[7] >> 0x38);
      ossl_gf_mul(local_188,ptr,local_c8);
      iVar46 = iVar9 + -1;
      puVar17 = ptr_00;
      puVar19 = local_1c8;
      if (iVar9 == 0) {
        do {
          puVar20 = puVar17 + 2;
          uVar32 = (*puVar17 ^ *puVar19) & uVar22;
          uVar33 = (puVar17[1] ^ puVar19[1]) & uVar22;
          uVar13 = *puVar17;
          uVar18 = puVar17[1];
          *puVar19 = *puVar19 ^ uVar32;
          puVar19[1] = puVar19[1] ^ uVar33;
          *puVar17 = uVar32 ^ uVar13;
          puVar17[1] = uVar33 ^ uVar18;
          puVar17 = puVar20;
          puVar19 = puVar19 + 2;
        } while (local_108 != puVar20);
        puVar20 = local_188;
        puVar17 = local_108;
        do {
          puVar19 = puVar17 + 2;
          uVar32 = (*puVar17 ^ *puVar20) & uVar22;
          uVar33 = (puVar17[1] ^ puVar20[1]) & uVar22;
          uVar13 = *puVar17;
          uVar18 = puVar17[1];
          *puVar20 = *puVar20 ^ uVar32;
          puVar20[1] = puVar20[1] ^ uVar33;
          *puVar17 = uVar32 ^ uVar13;
          puVar17[1] = uVar33 ^ uVar18;
          puVar20 = puVar20 + 2;
          puVar17 = puVar19;
        } while (puVar19 != local_c8);
        gf_invert_isra_0(local_188,local_188);
        ossl_gf_mul(&local_208,local_1c8,local_188);
        gf_serialize(param_1,&local_208,1);
        uVar21 = gf_eq(&local_208,ZERO);
        OPENSSL_cleanse(&local_208,0x40);
        OPENSSL_cleanse(local_1c8,0x40);
        OPENSSL_cleanse(local_188,0x40);
        OPENSSL_cleanse(ptr_00,0x40);
        OPENSSL_cleanse(local_108,0x40);
        OPENSSL_cleanse(local_c8,0x40);
        OPENSSL_cleanse(ptr,0x40);
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return ~uVar21;
      }
      uVar21 = (uint)*(byte *)(param_3 + (iVar46 >> 3));
      uVar12 = iVar9 + 6;
      uVar13 = uVar22;
      iVar9 = iVar46;
    } while (0xe < uVar12);
    uVar21 = uVar21 & 0xfc;
  } while( true );
}



void ossl_curve448_point_destroy(void *param_1)

{
  OPENSSL_cleanse(param_1,0x100);
  return;
}



void ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long in_FS_OFFSET;
  undefined1 local_288 [64];
  undefined1 local_248 [64];
  undefined1 local_208 [64];
  undefined1 local_1c8 [64];
  undefined1 local_188 [64];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_138 = param_2[2];
  uStack_130 = param_2[3];
  local_148 = *param_2;
  uStack_140 = param_2[1];
  local_128 = param_2[4];
  uStack_120 = param_2[5];
  local_118 = param_2[6];
  uStack_110 = param_2[7];
  local_108 = param_2[8];
  uStack_100 = param_2[9];
  local_f8 = param_2[10];
  uStack_f0 = param_2[0xb];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_2[0xc];
  uStack_e0 = param_2[0xd];
  local_d8 = param_2[0xe];
  uStack_d0 = param_2[0xf];
  local_c8 = param_2[0x10];
  uStack_c0 = param_2[0x11];
  local_b8 = param_2[0x12];
  uStack_b0 = param_2[0x13];
  local_a8 = param_2[0x14];
  uStack_a0 = param_2[0x15];
  local_98 = param_2[0x16];
  uStack_90 = param_2[0x17];
  local_88 = param_2[0x18];
  uStack_80 = param_2[0x19];
  local_78 = param_2[0x1a];
  uStack_70 = param_2[0x1b];
  local_68 = param_2[0x1c];
  uStack_60 = param_2[0x1d];
  local_58 = param_2[0x1e];
  uStack_50 = param_2[0x1f];
  ossl_gf_sqr(local_288,&local_148);
  ossl_gf_sqr(local_1c8,&local_108);
  gf_add(local_188,local_288,local_1c8);
  gf_add(local_208,&local_108,&local_148);
  ossl_gf_sqr(local_248,local_208);
  gf_sub(local_248,local_248,local_188);
  gf_sub(local_208,local_1c8,local_288);
  ossl_gf_sqr(local_288,&local_c8);
  gf_add(local_1c8,local_288,local_288);
  gf_sub(local_1c8,local_1c8,local_208);
  ossl_gf_mul(local_288,local_1c8,local_248);
  ossl_gf_mul(local_248,local_208,local_188);
  ossl_gf_mul(local_208,local_188,local_1c8);
  OPENSSL_cleanse(local_188,0x40);
  gf_invert_isra_0(local_208,local_208);
  ossl_gf_mul(local_1c8,local_288,local_208);
  ossl_gf_mul(local_288,local_248,local_208);
  *(undefined1 *)(param_1 + 0x38) = 0;
  gf_serialize(param_1,local_288,1);
  bVar1 = gf_lobit(local_1c8);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar1 & 0x80;
  OPENSSL_cleanse(local_288,0x40);
  OPENSSL_cleanse(local_248,0x40);
  OPENSSL_cleanse(local_208,0x40);
  OPENSSL_cleanse(local_1c8,0x40);
  ossl_curve448_point_destroy(&local_148);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_curve448_point_mul_by_ratio_and_encode_like_x448(undefined8 param_1,undefined8 *param_2)

{
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_138 = *param_2;
  uStack_130 = param_2[1];
  local_118 = param_2[4];
  uStack_110 = param_2[5];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = param_2[6];
  uStack_100 = param_2[7];
  local_f8 = param_2[8];
  uStack_f0 = param_2[9];
  local_e8 = param_2[10];
  uStack_e0 = param_2[0xb];
  local_d8 = param_2[0xc];
  uStack_d0 = param_2[0xd];
  local_b8 = param_2[0x10];
  uStack_b0 = param_2[0x11];
  local_c8 = param_2[0xe];
  uStack_c0 = param_2[0xf];
  local_128 = param_2[2];
  uStack_120 = param_2[3];
  local_a8 = param_2[0x12];
  uStack_a0 = param_2[0x13];
  local_98 = param_2[0x14];
  uStack_90 = param_2[0x15];
  local_88 = param_2[0x16];
  uStack_80 = param_2[0x17];
  local_78 = param_2[0x18];
  uStack_70 = param_2[0x19];
  local_68 = param_2[0x1a];
  uStack_60 = param_2[0x1b];
  local_58 = param_2[0x1c];
  uStack_50 = param_2[0x1d];
  local_48 = param_2[0x1e];
  uStack_40 = param_2[0x1f];
  gf_invert_isra_0(&local_78,&local_138);
  ossl_gf_mul(&local_b8,&local_78,&local_f8);
  ossl_gf_sqr(&local_f8,&local_b8);
  gf_serialize(param_1,&local_f8,1);
  ossl_curve448_point_destroy(&local_138);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_x448_derive_public_key(undefined8 param_1,ulong *param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_198 [64];
  undefined1 local_158 [256];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  long local_20;
  
  uStack_50 = param_2[1];
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2[2];
  uStack_40 = param_2[3];
  local_38 = param_2[4];
  uStack_30 = param_2[5];
  local_28 = param_2[6] | 0x8000000000000000;
  local_58 = *param_2 & 0xfffffffffffffffc;
  ossl_curve448_scalar_decode_long(auStack_198,&local_58,0x38);
  ossl_curve448_scalar_halve(auStack_198,auStack_198);
  ossl_curve448_precomputed_scalarmul(local_158,_ossl_curve448_precomputed_base,auStack_198);
  ossl_curve448_point_mul_by_ratio_and_encode_like_x448(param_1,local_158);
  ossl_curve448_point_destroy(local_158);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_curve448_base_double_scalarmul_non_secret
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long in_FS_OFFSET;
  bool bVar17;
  int local_10ac;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined1 local_1048 [128];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined1 local_e88 [64];
  int local_e48 [156];
  int local_bd8 [228];
  undefined1 local_848 [192];
  undefined1 local_788 [64];
  undefined1 local_748 [256];
  undefined1 local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  recode_wnaf_isra_0(local_e48,param_2,5);
  recode_wnaf_isra_0(local_bd8,param_4,3);
  pt_to_pniels(local_848,param_3);
  ossl_curve448_point_double(local_1048,param_3);
  pt_to_pniels(&local_f48,local_1048);
  ossl_gf_mul(&local_1088,&local_fc8,local_788);
  local_fc8 = local_1088;
  uStack_fc0 = uStack_1080;
  local_fb8 = local_1078;
  uStack_fb0 = uStack_1070;
  local_fa8 = local_1068;
  uStack_fa0 = uStack_1060;
  local_f98 = local_1058;
  uStack_f90 = uStack_1050;
  add_niels_to_pt(local_1048,local_848,0);
  pt_to_pniels(local_748,local_1048);
  puVar12 = local_648;
  do {
    ossl_gf_mul(&local_1088,&local_fc8,local_e88);
    local_fc8 = local_1088;
    uStack_fc0 = uStack_1080;
    local_fb8 = local_1078;
    uStack_fb0 = uStack_1070;
    local_fa8 = local_1068;
    uStack_fa0 = uStack_1060;
    local_f98 = local_1058;
    uStack_f90 = uStack_1050;
    add_niels_to_pt(local_1048,&local_f48,0);
    puVar13 = puVar12 + 0x100;
    pt_to_pniels(puVar12,local_1048);
    puVar12 = puVar13;
  } while (local_48 != puVar13);
  ossl_curve448_point_destroy(local_1048);
  OPENSSL_cleanse(&local_f48,0x100);
  uVar10 = ossl_curve448_point_identity._56_8_;
  uVar9 = ossl_curve448_point_identity._48_8_;
  uVar8 = ossl_curve448_point_identity._40_8_;
  uVar7 = ossl_curve448_point_identity._32_8_;
  uVar6 = ossl_curve448_point_identity._24_8_;
  uVar5 = ossl_curve448_point_identity._16_8_;
  uVar4 = ossl_curve448_point_identity._8_8_;
  if (local_bd8[0] < 0) {
    *param_1 = ossl_curve448_point_identity._0_8_;
    param_1[1] = uVar4;
    uVar11 = ossl_curve448_point_identity._72_8_;
    uVar4 = ossl_curve448_point_identity._64_8_;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    uVar6 = ossl_curve448_point_identity._88_8_;
    uVar5 = ossl_curve448_point_identity._80_8_;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    uVar8 = ossl_curve448_point_identity._104_8_;
    uVar7 = ossl_curve448_point_identity._96_8_;
    param_1[6] = uVar9;
    param_1[7] = uVar10;
    uVar10 = ossl_curve448_point_identity._120_8_;
    uVar9 = ossl_curve448_point_identity._112_8_;
    param_1[8] = uVar4;
    param_1[9] = uVar11;
    uVar11 = ossl_curve448_point_identity._136_8_;
    uVar4 = ossl_curve448_point_identity._128_8_;
    param_1[10] = uVar5;
    param_1[0xb] = uVar6;
    uVar6 = ossl_curve448_point_identity._152_8_;
    uVar5 = ossl_curve448_point_identity._144_8_;
    param_1[0xc] = uVar7;
    param_1[0xd] = uVar8;
    uVar8 = ossl_curve448_point_identity._168_8_;
    uVar7 = ossl_curve448_point_identity._160_8_;
    param_1[0xe] = uVar9;
    param_1[0xf] = uVar10;
    uVar10 = ossl_curve448_point_identity._184_8_;
    uVar9 = ossl_curve448_point_identity._176_8_;
    param_1[0x10] = uVar4;
    param_1[0x11] = uVar11;
    uVar11 = ossl_curve448_point_identity._200_8_;
    uVar4 = ossl_curve448_point_identity._192_8_;
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar6;
    uVar6 = ossl_curve448_point_identity._216_8_;
    uVar5 = ossl_curve448_point_identity._208_8_;
    param_1[0x14] = uVar7;
    param_1[0x15] = uVar8;
    uVar8 = ossl_curve448_point_identity._232_8_;
    uVar7 = ossl_curve448_point_identity._224_8_;
    param_1[0x16] = uVar9;
    param_1[0x17] = uVar10;
    uVar10 = ossl_curve448_point_identity._248_8_;
    uVar9 = ossl_curve448_point_identity._240_8_;
    param_1[0x18] = uVar4;
    param_1[0x19] = uVar11;
    param_1[0x1a] = uVar5;
    param_1[0x1b] = uVar6;
    param_1[0x1c] = uVar7;
    param_1[0x1d] = uVar8;
    param_1[0x1e] = uVar9;
    param_1[0x1f] = uVar10;
  }
  else {
    if (local_e48[0] < local_bd8[0]) {
      pniels_to_pt(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      local_10ac = 1;
      iVar1 = 0;
      local_e48[0] = local_bd8[0];
    }
    else if (local_e48[0] == local_bd8[0]) {
      pniels_to_pt(param_1,local_848 + (long)(local_bd8[1] >> 1) * 0x100);
      add_niels_to_pt(param_1,(long)(local_e48[1] >> 1) * 0xc0 + _ossl_curve448_wnaf_base,
                      local_bd8[0]);
      local_10ac = 1;
      iVar1 = 1;
      local_e48[0] = local_bd8[0];
    }
    else {
      niels_to_pt(param_1,(long)(local_e48[1] >> 1) * 0xc0 + _ossl_curve448_wnaf_base);
      local_10ac = 0;
      iVar1 = 1;
    }
    lVar15 = (long)local_10ac;
    lVar14 = (long)iVar1;
    iVar16 = local_e48[0] + -1;
    if (local_e48[0] != 0) {
      while( true ) {
        while( true ) {
          iVar2 = local_bd8[lVar15 * 2];
          iVar3 = local_e48[lVar14 * 2];
          if (((iVar16 == 0) || (iVar2 == iVar16)) || (iVar3 == iVar16)) break;
          iVar16 = iVar16 + -1;
          point_double_internal(param_1,param_1,1);
        }
        point_double_internal(param_1,param_1,0);
        if (iVar2 == iVar16) {
          iVar2 = local_bd8[lVar15 * 2 + 1];
          bVar17 = iVar3 != iVar16 && iVar16 != 0;
          if (iVar2 < 1) {
            lVar15 = (long)(-iVar2 >> 1) * 0x100;
            ossl_gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar15);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            sub_niels_from_pt(param_1,local_848 + lVar15,bVar17);
          }
          else {
            lVar15 = (long)(iVar2 >> 1) * 0x100;
            ossl_gf_mul(&local_f48,param_1 + 0x10,local_788 + lVar15);
            param_1[0x10] = local_f48;
            param_1[0x11] = uStack_f40;
            param_1[0x12] = local_f38;
            param_1[0x13] = uStack_f30;
            param_1[0x14] = local_f28;
            param_1[0x15] = uStack_f20;
            param_1[0x16] = local_f18;
            param_1[0x17] = uStack_f10;
            add_niels_to_pt(param_1,local_848 + lVar15,bVar17);
          }
          local_10ac = local_10ac + 1;
        }
        if (iVar3 == iVar16) {
          iVar2 = local_e48[lVar14 * 2 + 1];
          if (iVar2 < 1) {
            sub_niels_from_pt(param_1,_ossl_curve448_wnaf_base + (long)(-iVar2 >> 1) * 0xc0,iVar16);
          }
          else {
            add_niels_to_pt(param_1,_ossl_curve448_wnaf_base + (long)(iVar2 >> 1) * 0xc0,iVar16);
          }
          iVar1 = iVar1 + 1;
        }
        bVar17 = iVar16 == 0;
        iVar16 = iVar16 + -1;
        if (bVar17) break;
        lVar15 = (long)local_10ac;
        lVar14 = (long)iVar1;
      }
    }
    OPENSSL_cleanse(local_bd8,0x390);
    OPENSSL_cleanse(local_e48,0x268);
    OPENSSL_cleanse(local_848,0x800);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



bool ossl_x448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = ossl_x448_int(param_1,param_3,param_2);
  return iVar1 == -1;
}



void ossl_x448_public_from_private(void)

{
  ossl_x448_derive_public_key();
  return;
}



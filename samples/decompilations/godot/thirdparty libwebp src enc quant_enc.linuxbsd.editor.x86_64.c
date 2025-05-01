
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ExpandMatrix(undefined1 (*param_1) [16],int param_2)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  unkbyte10 Var18;
  undefined4 uVar19;
  long lVar20;
  int iVar21;
  undefined1 in_XMM0 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar37;
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  int iVar38;
  undefined2 uVar54;
  short sVar55;
  undefined2 uVar56;
  undefined1 auVar40 [12];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  short sVar61;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  undefined1 auVar62 [16];
  undefined1 auVar24 [12];
  undefined1 auVar33 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined2 uVar36;
  undefined1 auVar39 [12];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar60 [16];
  
  uVar3 = 0x20000 / (ulong)(long)(int)(uint)*(ushort *)*param_1;
  bVar1 = (&kBiasMatrices)[(long)param_2 * 2];
  *(uint *)param_1[4] = (uint)bVar1 * 0x200;
  *(short *)param_1[2] = (short)uVar3;
  uVar2 = *(ushort *)(*param_1 + 2);
  auVar25 = pshuflw(in_XMM1,ZEXT416((uint)uVar2),0);
  *(int *)param_1[8] = (int)((ulong)((uint)bVar1 * -0x200 + 0x1ffff) / (uVar3 & 0xffff));
  uVar3 = 0x20000 / (ulong)(long)(int)(uint)uVar2;
  bVar1 = "n`lns"[(long)param_2 * 2];
  iVar21 = (uint)bVar1 * 0x200;
  *(int *)(param_1[4] + 4) = iVar21;
  *(short *)(param_1[2] + 2) = (short)uVar3;
  auVar22 = pshuflw(in_XMM0,ZEXT416((uint)uVar3),0);
  lVar20 = 0;
  uVar19 = (undefined4)((ulong)((uint)bVar1 * -0x200 + 0x1ffff) / (uVar3 & 0xffff));
  *(undefined4 *)(param_1[8] + 4) = uVar19;
  do {
    *(int *)(*param_1 + lVar20 + 4) = auVar25._0_4_;
    *(int *)(param_1[2] + lVar20 + 4) = auVar22._0_4_;
    *(int *)(param_1[4] + lVar20 * 2 + 8) = iVar21;
    *(int *)(param_1[4] + lVar20 * 2 + 0xc) = iVar21;
    *(undefined4 *)(param_1[8] + lVar20 * 2 + 8) = uVar19;
    *(undefined4 *)(param_1[8] + lVar20 * 2 + 0xc) = uVar19;
    lVar20 = lVar20 + 4;
  } while (lVar20 != 0x1c);
  auVar22 = param_1[1];
  auVar25 = *param_1;
  sVar55 = auVar22._6_2_ * SUB162(_LC0._0_16_,6);
  auVar59 = pmulhuw(_LC0._0_16_,auVar22);
  uVar19 = CONCAT22(-(ushort)(param_2 == 0),-(ushort)(param_2 == 0));
  auVar57._4_4_ = uVar19;
  auVar57._0_4_ = uVar19;
  auVar57._8_4_ = uVar19;
  auVar57._12_4_ = uVar19;
  iVar38 = CONCAT22(auVar59._8_2_,auVar22._8_2_ * SUB162(_LC0._0_16_,8));
  auVar39._0_8_ = CONCAT26(auVar59._10_2_,CONCAT24(auVar22._10_2_ * SUB162(_LC0._0_16_,10),iVar38));
  auVar39._8_2_ = auVar22._12_2_ * SUB162(_LC0._0_16_,0xc);
  auVar39._10_2_ = auVar59._12_2_;
  auVar41._12_2_ = auVar22._14_2_ * SUB162(_LC0._0_16_,0xe);
  auVar41._0_12_ = auVar39;
  auVar41._14_2_ = auVar59._14_2_;
  iVar21 = CONCAT22(auVar59._6_2_,sVar55);
  Var18 = CONCAT64(CONCAT42(iVar21,auVar59._4_2_),
                   CONCAT22(auVar22._4_2_ * SUB162(_LC0._0_16_,4),sVar55));
  auVar10._4_8_ = (long)((unkuint10)Var18 >> 0x10);
  auVar10._2_2_ = auVar59._2_2_;
  auVar10._0_2_ = auVar22._2_2_ * SUB162(_LC0._0_16_,2);
  iVar23 = CONCAT22(auVar59._0_2_,auVar22._0_2_ * SUB162(_LC0._0_16_,0)) >> 0xb;
  iVar37 = auVar10._0_4_ >> 0xb;
  auVar24._0_8_ = CONCAT44(iVar37,iVar23);
  auVar24._8_4_ = (int)((unkuint10)Var18 >> 0x10) >> 0xb;
  auVar28._12_2_ = auVar59._2_2_ >> 0xb;
  auVar28._0_12_ = auVar24;
  auVar28._14_2_ = auVar59._10_2_ >> 0xb;
  auVar27._12_4_ = auVar28._12_4_;
  auVar27._0_10_ = auVar24._0_10_;
  uVar54 = (undefined2)(int)((long)auVar39._0_8_ >> 0x2b);
  auVar27._10_2_ = uVar54;
  uVar36 = (undefined2)iVar37;
  auVar26._10_6_ = auVar27._10_6_;
  auVar26._8_2_ = uVar36;
  auVar26._0_8_ = auVar24._0_8_;
  sVar55 = auVar59._8_2_ >> 0xb;
  auVar11._2_8_ = auVar26._8_8_;
  auVar11._0_2_ = sVar55;
  auVar11._10_6_ = 0;
  auVar32._0_2_ = (undefined2)iVar23;
  auVar62._12_4_ = 0;
  auVar62._0_12_ = SUB1612(auVar11 << 0x30,4);
  auVar62 = auVar62 << 0x20;
  uVar56 = (undefined2)(auVar39._8_4_ >> 0xb);
  auVar31._0_12_ = auVar62._0_12_;
  auVar31._12_2_ = sVar55;
  auVar31._14_2_ = auVar59._12_2_ >> 0xb;
  auVar30._12_4_ = auVar31._12_4_;
  auVar30._0_10_ = auVar62._0_10_;
  auVar30._10_2_ = auVar59._4_2_ >> 0xb;
  auVar29._10_6_ = auVar30._10_6_;
  auVar29._0_8_ = auVar62._0_8_;
  auVar29._8_2_ = auVar59._0_2_ >> 0xb;
  auVar12._2_8_ = auVar29._8_8_;
  auVar12._0_2_ = uVar56;
  auVar12._10_6_ = 0;
  auVar59._12_4_ = 0;
  auVar59._0_12_ = SUB1612(auVar12 << 0x30,4);
  auVar59 = auVar59 << 0x20;
  sVar61 = SUB162(ram0x001031c0,0);
  sVar63 = SUB162(ram0x001031c0,2);
  sVar64 = SUB162(ram0x001031c0,4);
  sVar55 = auVar25._6_2_ * SUB162(ram0x001031c0,6);
  sVar65 = SUB162(ram0x001031c0,8);
  sVar66 = SUB162(ram0x001031c0,10);
  sVar67 = SUB162(ram0x001031c0,0xc);
  sVar68 = SUB162(ram0x001031c0,0xe);
  auVar62 = pmulhuw(ram0x001031c0,auVar25);
  auVar35._0_12_ = auVar59._0_12_;
  auVar35._12_2_ = uVar56;
  auVar35._14_2_ = (short)(auVar41._12_4_ >> 0xb);
  auVar34._12_4_ = auVar35._12_4_;
  auVar34._0_10_ = auVar59._0_10_;
  auVar34._10_2_ = uVar54;
  auVar33._10_6_ = auVar34._10_6_;
  auVar33._0_8_ = auVar59._0_8_;
  auVar33._8_2_ = (short)(iVar38 >> 0xb);
  auVar32._8_8_ = auVar33._8_8_;
  auVar32._6_2_ = (short)(iVar21 >> 0xb);
  auVar32._4_2_ = (short)auVar24._8_4_;
  auVar32._2_2_ = uVar36;
  param_1[0xd] = auVar32 & auVar57;
  iVar38 = CONCAT22(auVar62._8_2_,auVar25._8_2_ * sVar65);
  auVar58._0_8_ = CONCAT26(auVar62._10_2_,CONCAT24(auVar25._10_2_ * sVar66,iVar38));
  auVar58._8_2_ = auVar25._12_2_ * sVar67;
  auVar58._10_2_ = auVar62._12_2_;
  auVar60._12_2_ = auVar25._14_2_ * sVar68;
  auVar60._0_12_ = auVar58;
  auVar60._14_2_ = auVar62._14_2_;
  iVar21 = CONCAT22(auVar62._6_2_,sVar55);
  Var18 = CONCAT64(CONCAT42(iVar21,auVar62._4_2_),CONCAT22(auVar25._4_2_ * sVar64,sVar55));
  auVar13._4_8_ = (long)((unkuint10)Var18 >> 0x10);
  auVar13._2_2_ = auVar62._2_2_;
  auVar13._0_2_ = auVar25._2_2_ * sVar63;
  iVar23 = CONCAT22(auVar62._0_2_,auVar25._0_2_ * sVar61) >> 0xb;
  iVar37 = auVar13._0_4_ >> 0xb;
  auVar40._0_8_ = CONCAT44(iVar37,iVar23);
  auVar40._8_4_ = (int)((unkuint10)Var18 >> 0x10) >> 0xb;
  auVar45._12_2_ = auVar62._2_2_ >> 0xb;
  auVar45._0_12_ = auVar40;
  auVar45._14_2_ = auVar62._10_2_ >> 0xb;
  auVar44._12_4_ = auVar45._12_4_;
  auVar44._0_10_ = auVar40._0_10_;
  uVar54 = (undefined2)(int)((long)auVar58._0_8_ >> 0x2b);
  auVar44._10_2_ = uVar54;
  uVar36 = (undefined2)iVar37;
  auVar43._10_6_ = auVar44._10_6_;
  auVar43._8_2_ = uVar36;
  auVar43._0_8_ = auVar40._0_8_;
  sVar55 = auVar62._8_2_ >> 0xb;
  auVar14._2_8_ = auVar43._8_8_;
  auVar14._0_2_ = sVar55;
  auVar14._10_6_ = 0;
  auVar50._0_2_ = (undefined2)iVar23;
  auVar42._12_4_ = 0;
  auVar42._0_12_ = SUB1612(auVar14 << 0x30,4);
  auVar42 = auVar42 << 0x20;
  uVar56 = (undefined2)(auVar58._8_4_ >> 0xb);
  auVar49._0_12_ = auVar42._0_12_;
  auVar49._12_2_ = sVar55;
  auVar49._14_2_ = auVar62._12_2_ >> 0xb;
  auVar48._12_4_ = auVar49._12_4_;
  auVar48._0_10_ = auVar42._0_10_;
  auVar48._10_2_ = auVar62._4_2_ >> 0xb;
  auVar47._10_6_ = auVar48._10_6_;
  auVar47._0_8_ = auVar42._0_8_;
  auVar47._8_2_ = auVar62._0_2_ >> 0xb;
  auVar15._2_8_ = auVar47._8_8_;
  auVar15._0_2_ = uVar56;
  auVar15._10_6_ = 0;
  auVar46._12_4_ = 0;
  auVar46._0_12_ = SUB1612(auVar15 << 0x30,4);
  auVar46 = auVar46 << 0x20;
  auVar53._0_12_ = auVar46._0_12_;
  auVar53._12_2_ = uVar56;
  auVar53._14_2_ = (short)(auVar60._12_4_ >> 0xb);
  auVar52._12_4_ = auVar53._12_4_;
  auVar52._0_10_ = auVar46._0_10_;
  auVar52._10_2_ = uVar54;
  auVar51._10_6_ = auVar52._10_6_;
  auVar51._0_8_ = auVar46._0_8_;
  auVar51._8_2_ = (short)(iVar38 >> 0xb);
  auVar50._8_8_ = auVar51._8_8_;
  auVar50._6_2_ = (short)(iVar21 >> 0xb);
  auVar50._4_2_ = (short)auVar40._8_4_;
  auVar50._2_2_ = uVar36;
  param_1[0xc] = auVar50 & auVar57;
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar25._0_10_;
  auVar4._12_2_ = auVar25._6_2_;
  auVar6._8_2_ = auVar25._4_2_;
  auVar6._0_8_ = auVar25._0_8_;
  auVar6._10_4_ = auVar4._10_4_;
  auVar16._6_8_ = 0;
  auVar16._0_6_ = auVar6._8_6_;
  auVar8._4_2_ = auVar25._2_2_;
  auVar8._0_4_ = auVar25._0_4_;
  auVar8._6_8_ = SUB148(auVar16 << 0x40,6);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar22._0_10_;
  auVar5._12_2_ = auVar22._6_2_;
  auVar7._8_2_ = auVar22._4_2_;
  auVar7._0_8_ = auVar22._0_8_;
  auVar7._10_4_ = auVar5._10_4_;
  auVar17._6_8_ = 0;
  auVar17._0_6_ = auVar7._8_6_;
  auVar9._4_2_ = auVar22._2_2_;
  auVar9._0_4_ = auVar22._0_4_;
  auVar9._6_8_ = SUB148(auVar17 << 0x40,6);
  return (int)((uint)auVar25._8_2_ + (auVar25._0_4_ & 0xffff) + (auVar22._0_4_ & 0xffff) +
               (uint)auVar22._8_2_ +
               (uint)auVar25._12_2_ + auVar6._8_4_ + auVar7._8_4_ + (uint)auVar22._12_2_ +
               (uint)auVar25._10_2_ + auVar8._4_4_ + auVar9._4_4_ + (uint)auVar22._10_2_ +
               (uint)auVar25._14_2_ + (auVar4._10_4_ >> 0x10) + (auVar5._10_4_ >> 0x10) +
               (uint)auVar22._14_2_ + 8) >> 4;
}



undefined * GetCostModeI4(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(*(long *)(param_1 + 0x28) + 0x38);
  uVar4 = *(uint *)(param_1 + 0x80);
  if ((uVar4 & 3) == 0) {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x40) + -1 + (long)(iVar3 * ((int)uVar4 >> 2)));
  }
  else {
    bVar1 = *(byte *)(param_2 + -1 + (long)(int)uVar4);
  }
  if ((int)uVar4 >> 2 == 0) {
    bVar2 = *(byte *)(*(long *)(param_1 + 0x40) + (long)(int)((uVar4 & 3) - iVar3));
  }
  else {
    bVar2 = *(byte *)(param_2 + -4 + (long)(int)uVar4);
  }
  return &VP8FixedCostsI4 + (ulong)bVar2 * 200 + (long)(int)(uint)bVar1 * 0x14;
}



bool TrellisQuantizeBlock
               (long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],int param_4,
               int param_5,long param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  char *pcVar21;
  ushort uVar22;
  ushort *puVar23;
  ushort uVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  byte local_158;
  int local_154;
  long local_138;
  int local_124;
  int local_11c;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8 [4];
  char local_c8 [2];
  ushort auStack_c6 [67];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar29 = param_5 == 0;
  lVar20 = param_1 + 0xe24 + (long)param_5 * 0x108;
  lVar27 = param_1 + 0x55c8 + (long)param_5 * 0x180;
  lVar12 = 0xf;
  bVar1 = *(byte *)((ulong)(byte)(&VP8EncBands)[bVar29] * 0x21 + lVar20 + (long)param_4 * 0xb);
  do {
    if ((int)((uint)*(ushort *)(param_6 + 2) * (uint)*(ushort *)(param_6 + 2)) >> 2 <
        (int)*(short *)(*param_2 + (ulong)(byte)kZigzag[lVar12] * 2) *
        (int)*(short *)(*param_2 + (ulong)(byte)kZigzag[lVar12] * 2)) {
      local_154 = (int)lVar12;
      if (local_154 == 0xf) goto LAB_00100354;
      goto LAB_001007bb;
    }
    lVar12 = lVar12 + -1;
  } while ((int)(uint)bVar29 <= (int)lVar12);
  local_154 = bVar29 - 1;
LAB_001007bb:
  local_154 = local_154 + 1;
LAB_00100354:
  lVar12 = (long)param_7;
  local_138 = (ulong)*(ushort *)(&VP8EntropyCost + (ulong)bVar1 * 2) * lVar12;
  puVar8 = (undefined8 *)((ulong)((uint)((long)((ulong)bVar29 << 0x3f) >> 0x3f) & 0x18) + lVar27);
  if (param_4 == 0) {
    local_100 = *puVar8;
    local_108 = (ulong)*(ushort *)(&VP8EntropyCost + (long)(int)(0xff - (uint)bVar1) * 2) * lVar12;
  }
  else {
    local_100 = puVar8[param_4];
    local_108 = 0;
  }
  local_f8 = local_108;
  local_f0 = local_100;
  if (local_154 < (int)(uint)bVar29) {
    local_11c = -1;
    cVar5 = -1;
    local_124 = -1;
  }
  else {
    uVar16 = (ulong)bVar29 + 1;
    local_11c = -1;
    cVar5 = -1;
    lVar27 = lVar27 + uVar16 * 0x18;
    local_124 = -1;
    plVar17 = local_e8;
    uVar13 = (ulong)bVar29;
    plVar28 = &local_108;
    while( true ) {
      plVar11 = plVar17;
      bVar1 = kZigzag[uVar13];
      lVar9 = (ulong)bVar1 * 2;
      sVar3 = *(short *)(*param_2 + (ulong)bVar1 * 2);
      puVar23 = (ushort *)(param_6 + lVar9);
      uVar25 = (uint)*puVar23;
      iVar18 = (int)sVar3;
      if (sVar3 < 0) {
        iVar18 = -(int)sVar3;
      }
      iVar18 = (uint)*(ushort *)(param_6 + 0xc0 + lVar9) + iVar18;
      uVar6 = (uint)puVar23[0x10] * iVar18;
      bVar2 = (&DAT_00104009)[uVar13];
      uVar7 = uVar6 + 0x10000 >> 0x11;
      if (0x7ff < uVar7) {
        uVar7 = 0x7ff;
      }
      uVar6 = uVar6 >> 0x11;
      if (0x7ff < uVar6) {
        uVar6 = 0x7ff;
      }
      pcVar21 = local_c8 + uVar13 * 8;
      iVar26 = 0;
      iVar19 = iVar18 - uVar25 * uVar6;
      puVar23 = (ushort *)(&VP8LevelFixedCosts + (long)(int)uVar6 * 2);
      plVar17 = plVar11;
      while( true ) {
        uVar10 = 2;
        if ((int)uVar6 < 3) {
          uVar10 = uVar6;
        }
        plVar17[1] = *(long *)(lVar27 + (long)(int)uVar10 * 8);
        if ((int)uVar7 < (int)uVar6) {
          *plVar17 = 0x7fffffffffffff;
        }
        else {
          puVar14 = puVar23 + -0x8200c;
          if (0x43 < (int)uVar6) {
            puVar14 = (ushort *)0x86;
          }
          lVar9 = (int)((uint)*(ushort *)(plVar28[1] + (long)puVar14) + (uint)*puVar23) * lVar12 +
                  *plVar28;
          lVar15 = (int)((uint)*(ushort *)(plVar28[3] + (long)puVar14) + (uint)*puVar23) * lVar12 +
                   plVar28[2];
          bVar30 = lVar15 < lVar9;
          if (bVar30) {
            lVar9 = lVar15;
          }
          local_158 = (byte)((ushort)sVar3 >> 0xf);
          lVar9 = lVar9 + (long)(int)((iVar19 * iVar19 - iVar18 * iVar18) *
                                     (uint)*(ushort *)(kWeightTrellis + (long)(int)(uint)bVar1 * 2))
                          * 0x100;
          *(short *)(pcVar21 + 2) = (short)uVar6;
          *pcVar21 = bVar30;
          pcVar21[1] = local_158;
          *plVar17 = lVar9;
          if ((uVar6 != 0) && (lVar9 < local_138)) {
            if ((int)uVar13 == 0xf) {
              local_124 = 0xf;
              local_138 = lVar9;
              local_11c = iVar26;
              cVar5 = bVar30;
            }
            else {
              lVar9 = (ulong)*(ushort *)
                              (&VP8EntropyCost +
                              (ulong)*(byte *)((ulong)bVar2 * 0x21 + lVar20 +
                                              (long)(int)uVar10 * 0xb) * 2) * lVar12 + lVar9;
              if (lVar9 < local_138) {
                local_138 = lVar9;
                local_124 = (int)uVar13;
                local_11c = iVar26;
                cVar5 = bVar30;
              }
            }
          }
        }
        uVar6 = uVar6 + 1;
        plVar17 = plVar17 + 2;
        pcVar21 = pcVar21 + 4;
        puVar23 = puVar23 + 1;
        iVar19 = iVar19 - uVar25;
        if (iVar26 != 0) break;
        iVar26 = 1;
      }
      lVar27 = lVar27 + 0x18;
      if (local_154 < (int)uVar16) break;
      plVar17 = plVar28;
      uVar13 = uVar16;
      uVar16 = uVar16 + 1;
      plVar28 = plVar11;
    }
    if (param_5 != 0) {
      *param_2 = (undefined1  [16])0x0;
      param_2[1] = (undefined1  [16])0x0;
      *param_3 = (undefined1  [16])0x0;
      param_3[1] = (undefined1  [16])0x0;
      goto LAB_001006c6;
    }
  }
  *(undefined1 (*) [16])(*param_2 + 2) = (undefined1  [16])0x0;
  param_2[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(*param_3 + 2) = (undefined1  [16])0x0;
  param_3[1] = (undefined1  [16])0x0;
LAB_001006c6:
  bVar30 = false;
  if (local_124 != -1) {
    lVar20 = (long)local_11c;
    lVar27 = (long)local_124;
    local_c8[(lVar20 + lVar27 * 2) * 4] = cVar5;
    if ((int)(uint)bVar29 <= local_124) {
      uVar24 = 0;
      do {
        iVar18 = (int)lVar27;
        bVar1 = kZigzag[lVar27];
        lVar12 = lVar20 + (long)iVar18 * 2;
        uVar4 = *(ushort *)(local_c8 + lVar12 * 4 + 2);
        uVar22 = uVar4;
        if (local_c8[lVar12 * 4 + 1] != '\0') {
          uVar22 = -uVar4;
        }
        uVar24 = uVar24 | uVar4;
        *(ushort *)(*param_3 + lVar27 * 2) = uVar22;
        lVar27 = lVar27 + -1;
        lVar20 = (long)local_c8[(lVar20 + (long)iVar18 * 2) * 4];
        *(ushort *)(*param_2 + (ulong)bVar1 * 2) =
             uVar22 * *(short *)(param_6 + (long)(int)(uint)bVar1 * 2);
      } while ((int)(uint)bVar29 <= (int)lVar27);
      bVar30 = uVar24 != 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ReconstructIntra4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  lVar5 = (ulong)(ushort)(&VP8I4ModeOffsets)[param_5] + *(long *)(param_1 + 0x20);
  bVar1 = **(byte **)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (*_VP8FTransform)(param_3,lVar5,local_68);
  uVar4 = bVar1 >> 5 & 3;
  if (*(int *)(param_1 + 0x148) == 0) {
    uVar3 = (*_VP8EncQuantizeBlock)(local_68,param_2);
  }
  else {
    uVar3 = TrellisQuantizeBlock
                      (lVar2,local_68,param_2,
                       *(int *)(param_1 + 0xa8 + (long)((int)*(uint *)(param_1 + 0x80) >> 2) * 4) +
                       *(int *)(param_1 + 0x84 + (ulong)(*(uint *)(param_1 + 0x80) & 3) * 4),3,
                       lVar2 + 0x260 + (ulong)uVar4 * 0x2e8,
                       *(undefined4 *)(lVar2 + 0x534 + (ulong)uVar4 * 0x2e8));
  }
  (*_VP8ITransform)(lVar5,local_68,param_4,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ReconstructIntra16(long param_1,long param_2,long param_3,int param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  int iVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  undefined2 *puVar12;
  long lVar13;
  byte bVar14;
  long lVar15;
  long in_FS_OFFSET;
  byte local_2c0;
  uint local_2b0;
  undefined1 local_268 [32];
  undefined2 local_248 [260];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar11 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x20) + (ulong)(ushort)(&VP8I16ModeOffsets)[param_4];
  bVar14 = **(byte **)(param_1 + 0x30) >> 5;
  puVar8 = &VP8Scan;
  local_2c0 = bVar14 & 3;
  puVar5 = local_248;
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 2;
    (*_VP8FTransform2)((ulong)uVar1 + lVar11,lVar6 + (ulong)uVar1,puVar5);
    puVar5 = puVar5 + 0x20;
  } while (puVar8 != &VP8I4ModeOffsets);
  (*_VP8FTransformWHT)(local_248,local_268);
  lVar11 = ((ulong)bVar14 & 3) * 0x2e8;
  iVar3 = (*_VP8EncQuantizeBlockWHT)(local_268,param_2 + 0x28,lVar2 + 0x340 + lVar11);
  lVar11 = lVar2 + 0x260 + lVar11;
  local_2b0 = iVar3 << 0x18;
  puVar5 = (undefined2 *)(param_2 + 0x48);
  if (*(int *)(param_1 + 0x148) == 0) {
    puVar12 = local_248;
    iVar3 = 0;
    do {
      *puVar12 = 0;
      puVar12[0x10] = 0;
      iVar4 = (*_VP8EncQuantize2Blocks)(puVar12,puVar5,lVar11);
      iVar7 = iVar3 + 2;
      local_2b0 = local_2b0 | iVar4 << ((byte)iVar3 & 0x1f);
      puVar12 = puVar12 + 0x20;
      puVar5 = puVar5 + 0x20;
      iVar3 = iVar7;
    } while (iVar7 != 0x10);
  }
  else {
    VP8IteratorNzToBytes(param_1);
    lVar13 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0xa8 + lVar13);
      piVar9 = (int *)(param_1 + 0x84);
      puVar12 = puVar5;
      lVar15 = lVar13;
      do {
        piVar10 = piVar9 + 1;
        iVar3 = TrellisQuantizeBlock
                          (lVar2,local_248 + lVar15 * 0x10,puVar12,iVar3 + *piVar9,0,lVar11,
                           *(undefined4 *)((long)(int)(uint)local_2c0 * 0x2e8 + lVar2 + 0x530));
        *(int *)(param_1 + 0xa8 + lVar13) = iVar3;
        *puVar12 = 0;
        bVar14 = (byte)lVar15;
        lVar15 = lVar15 + 1;
        *piVar9 = iVar3;
        local_2b0 = local_2b0 | iVar3 << (bVar14 & 0x1f);
        piVar9 = piVar10;
        puVar12 = puVar12 + 0x10;
      } while (piVar10 != (int *)(param_1 + 0x94));
      lVar13 = lVar13 + 4;
      puVar5 = puVar5 + 0x40;
    } while (lVar13 != 0x10);
  }
  puVar8 = &VP8Scan;
  (*_VP8TransformWHT)(local_268,local_248);
  puVar5 = local_248;
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 2;
    (*_VP8ITransform)((ulong)uVar1 + lVar6,puVar5,param_3 + (ulong)uVar1,1);
    puVar5 = puVar5 + 0x20;
  } while (puVar8 != &VP8I4ModeOffsets);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_2b0;
}



int QuantizeSingle_isra_0(short *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*param_1;
  if (*param_1 < 0) {
    if (param_5 < -iVar1) {
      iVar2 = ((param_3 & 0xffff) * -iVar1 + param_4 >> 0x11) * (param_2 & 0xffff);
      *param_1 = -(short)iVar2;
      return iVar1 + iVar2 >> 1;
    }
  }
  else if (param_5 < iVar1) {
    iVar2 = ((param_3 & 0xffff) * iVar1 + param_4 >> 0x11) * (param_2 & 0xffff);
    *param_1 = (short)iVar2;
    return iVar1 - iVar2 >> 1;
  }
  *param_1 = 0;
  return iVar1 >> 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ReconstructUV(int *param_1,long param_2,long param_3,int param_4)

{
  short *psVar1;
  undefined2 *puVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  short *psVar17;
  undefined1 uVar18;
  int iVar19;
  undefined1 *puVar20;
  ushort *puVar21;
  char *pcVar22;
  short *psVar23;
  long in_FS_OFFSET;
  int *local_188;
  short local_148 [128];
  short local_48 [4];
  long local_40;
  
  puVar21 = &VP8ScanUV;
  lVar10 = *(long *)(param_1 + 2);
  psVar23 = local_148;
  lVar11 = *(long *)(param_1 + 10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (&VP8UVModeOffsets)[param_4];
  lVar12 = *(long *)(param_1 + 8);
  bVar3 = **(byte **)(param_1 + 0xc);
  psVar17 = psVar23;
  do {
    uVar5 = *puVar21;
    puVar21 = puVar21 + 2;
    (*_VP8FTransform2)(lVar10 + 0x10 + (ulong)uVar5,(ulong)uVar4 + lVar12 + (ulong)uVar5,psVar17);
    psVar17 = psVar17 + 0x20;
  } while (puVar21 != (ushort *)&DAT_00102eb0);
  puVar2 = (undefined2 *)(lVar11 + 0x420 + ((ulong)(bVar3 >> 5) & 3) * 0x2e8);
  if (*(long *)(param_1 + 0x58) != 0) {
    local_188 = param_1 + 0x56;
    psVar17 = psVar23;
    puVar20 = (undefined1 *)(param_2 + 0x364);
    pcVar22 = (char *)(*(long *)(param_1 + 0x58) + (long)*param_1 * 4);
    do {
      uVar8 = *(undefined4 *)(puVar2 + 0x20);
      uVar6 = puVar2[0x10];
      uVar9 = *(undefined4 *)(puVar2 + 0x40);
      uVar7 = *puVar2;
      *psVar17 = *psVar17 + (short)(*pcVar22 * 7 + (char)*local_188 * 8 >> 3);
      iVar14 = QuantizeSingle_isra_0(psVar17,uVar7,uVar6,uVar8,uVar9);
      psVar17[0x10] = psVar17[0x10] + (short)(pcVar22[1] * 7 + iVar14 * 8 >> 3);
      iVar15 = QuantizeSingle_isra_0(psVar17 + 0x10,uVar7,uVar6,uVar8);
      psVar17[0x20] = psVar17[0x20] + (short)(iVar14 * 7 + *(char *)((long)local_188 + 1) * 8 >> 3);
      iVar14 = QuantizeSingle_isra_0(psVar17 + 0x20,uVar7,uVar6,uVar8);
      uVar18 = (undefined1)iVar14;
      psVar1 = psVar17 + 0x30;
      psVar17[0x30] = psVar17[0x30] + (short)(iVar15 * 7 + iVar14 * 8 >> 3);
      psVar17 = psVar17 + 0x40;
      uVar13 = QuantizeSingle_isra_0(psVar1,uVar7,uVar6,uVar8);
      *puVar20 = (char)iVar15;
      puVar20[1] = uVar18;
      puVar20[2] = uVar13;
      local_188 = (int *)((long)local_188 + 2);
      puVar20 = puVar20 + 3;
      pcVar22 = pcVar22 + 2;
    } while (local_48 != psVar17);
  }
  puVar21 = &VP8ScanUV;
  uVar16 = 0;
  param_2 = param_2 + 0x248;
  psVar17 = psVar23;
  iVar14 = 0;
  do {
    iVar15 = (*_VP8EncQuantize2Blocks)(psVar17,param_2,puVar2);
    iVar19 = iVar14 + 2;
    param_2 = param_2 + 0x40;
    uVar16 = uVar16 | iVar15 << ((byte)iVar14 & 0x1f);
    psVar17 = psVar17 + 0x20;
    iVar14 = iVar19;
  } while (iVar19 != 8);
  do {
    uVar5 = *puVar21;
    puVar21 = puVar21 + 2;
    (*_VP8ITransform)((ulong)uVar5 + (ulong)uVar4 + lVar12,psVar23,param_3 + (ulong)uVar5,1);
    psVar23 = psVar23 + 0x20;
  } while (puVar21 != (ushort *)&DAT_00102eb0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16 << 0x10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PickBestIntra4_isra_0(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  long lVar27;
  long in_FS_OFFSET;
  byte bVar28;
  long local_488;
  undefined1 local_478;
  byte local_464;
  long local_440;
  long local_430;
  long local_428;
  long local_420;
  ulong local_418;
  uint local_408;
  int local_404;
  undefined1 local_3d8 [2];
  short local_3d6;
  short local_3d4 [14];
  undefined1 local_3b8 [16];
  long local_3a8;
  long lStack_3a0;
  long local_398;
  long local_370 [63];
  long local_178;
  uint local_58;
  long local_40;
  
  bVar28 = 0;
  lVar16 = *(long *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(lVar16 + 0x5c48) != 0) {
    local_3b8 = (undefined1  [16])0x0;
    local_58 = 0;
    local_3a8 = __LC2;
    lStack_3a0 = _UNK_001031d8;
    lVar9 = (ulong)(**(byte **)(param_1 + 0x30) >> 5 & 3) * 0x2e8 + lVar16;
    iVar1 = *(int *)(lVar9 + 0x52c);
    iVar8 = *(int *)(lVar9 + 0x51c);
    lVar3 = *(long *)(param_1 + 8);
    local_398 = (long)*(int *)(lVar9 + 0x524) * 0xd3;
    lVar4 = *(long *)(param_1 + 0x18);
    VP8IteratorStartI4();
    lVar10 = (long)iVar8;
    local_404 = 0;
    do {
      uVar25 = 0;
      uVar18 = (ulong)(ushort)(&VP8Scan)[*(int *)(param_1 + 0x80)];
      lVar19 = lVar3 + uVar18;
      lVar11 = GetCostModeI4(param_1,(long)param_2 + 0x34c);
      lVar21 = *(long *)(param_1 + 0x20);
      local_440 = lVar4 + uVar18;
      (*_VP8EncPredLuma4)();
      iVar8 = -1;
      local_408 = 0;
      local_488 = 0x7fffffffffffff;
      local_430 = 0;
      local_428 = 0;
      local_420 = 0;
      local_418 = 0;
      lVar21 = lVar21 + 0x688;
      do {
        iVar6 = ReconstructIntra4(param_1,local_3d8,lVar19,lVar21,uVar25 & 0xffffffff);
        uVar2 = *(undefined4 *)(param_1 + 0x80);
        iVar7 = (*_VP8SSE4x4)(lVar19,lVar21);
        lVar27 = (long)iVar7;
        if (iVar1 == 0) {
          lVar20 = 0;
          lVar22 = lVar27;
        }
        else {
          iVar7 = (*_VP8TDisto4x4)(lVar19,lVar21,kWeightY);
          lVar20 = (long)(iVar1 * iVar7 + 0x80 >> 8);
          lVar22 = lVar27 + lVar20;
        }
        uVar18 = (ulong)*(ushort *)(lVar11 + uVar25 * 2);
        if (uVar25 != 0) {
          psVar12 = local_3d4;
          uVar26 = (uint)(local_3d6 != 0);
          do {
            if (psVar12 == (short *)local_3b8) {
              lVar17 = 0x8c;
              uVar13 = uVar18 + 0x8c;
              goto LAB_001012e5;
            }
            uVar26 = (uVar26 + 1) - (uint)(*psVar12 == 0);
            psVar12 = psVar12 + 1;
          } while (uVar26 != 4);
        }
        lVar17 = 0;
        uVar13 = uVar18;
LAB_001012e5:
        lVar22 = lVar22 * 0x100;
        if (iVar8 == -1) {
          iVar8 = VP8GetCostLuma4(param_1,local_3d8);
          lVar17 = iVar8 + lVar17;
          lVar22 = (uVar18 + lVar17) * lVar10 + lVar22;
LAB_00101350:
          local_464 = (byte)uVar2;
          local_408 = iVar6 << (local_464 & 0x1f);
          lVar14 = (long)*(int *)(param_1 + 0x80);
          uVar13 = lVar14 * 0x20 + 0x48;
          uVar15 = 0x370;
          if (0x36f < uVar13) {
            uVar15 = uVar13;
          }
          __memcpy_chk(local_370 + lVar14 * 4,local_3d8,0x20,lVar14 * -0x20 + -0x48 + uVar15);
          lVar14 = local_440;
          local_488 = lVar22;
          local_440 = lVar21;
          local_430 = lVar20;
          local_428 = lVar27;
          local_420 = lVar17;
          local_418 = uVar18;
          iVar8 = (int)uVar25;
        }
        else {
          lVar14 = lVar21;
          if ((long)(uVar13 * lVar10 + lVar22) < local_488) {
            iVar7 = VP8GetCostLuma4(param_1,local_3d8);
            lVar17 = iVar7 + lVar17;
            lVar22 = (uVar18 + lVar17) * lVar10 + lVar22;
            if (lVar22 < local_488) goto LAB_00101350;
          }
        }
        uVar25 = uVar25 + 1;
        lVar21 = lVar14;
      } while (uVar25 != 10);
      lVar11 = local_428 + local_3b8._0_8_;
      lVar22 = local_3a8 + local_418;
      lVar27 = local_430 + local_3b8._8_8_;
      lVar19 = local_420 + lStack_3a0;
      uVar26 = local_408 | local_58;
      lVar21 = local_398 +
               (local_418 + local_420) * (long)*(int *)(lVar9 + 0x524) +
               (local_428 + local_430) * 0x100;
      local_3b8._8_8_ = lVar27;
      local_3b8._0_8_ = lVar11;
      local_3a8 = lVar22;
      lStack_3a0 = lVar19;
      local_398 = lVar21;
      local_58 = uVar26;
      if ((param_2[4] <= lVar21) ||
         (local_404 = local_404 + (int)local_418, *(int *)(lVar16 + 0x5c48) < local_404))
      goto LAB_00101068;
      lVar20 = (long)*(int *)(param_1 + 0x80);
      if ((ulong)(ushort)(&VP8Scan)[lVar20] + lVar4 != local_440) {
        (*_VP8Copy4x4)();
        lVar20 = (long)*(int *)(param_1 + 0x80);
      }
      local_478 = (undefined1)iVar8;
      *(undefined1 *)((long)param_2 + lVar20 + 0x34c) = local_478;
      *(uint *)(param_1 + 0xa8 + (long)((int)(uint)lVar20 >> 2) * 4) = (uint)(local_408 != 0);
      *(uint *)(param_1 + 0x84 + (ulong)((uint)lVar20 & 3) * 4) = (uint)(local_408 != 0);
      iVar8 = VP8IteratorRotateI4(param_1,lVar4);
    } while (iVar8 != 0);
    param_2[2] = lVar22;
    *param_2 = lVar11;
    param_2[1] = lVar27;
    param_2[3] = lVar19;
    *(uint *)(param_2 + 0x6c) = uVar26;
    param_2[4] = lVar21;
    VP8SetIntra4Mode(param_1,(long)param_2 + 0x34c);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    param_2[9] = local_370[0];
    lVar16 = (long)param_2 + (0x48 - (long)((ulong)(param_2 + 10) & 0xfffffffffffffff8));
    param_2[0x48] = local_178;
    puVar23 = (undefined8 *)((long)local_370 - lVar16);
    puVar24 = (undefined8 *)((ulong)(param_2 + 10) & 0xfffffffffffffff8);
    for (uVar18 = (ulong)((int)lVar16 + 0x200U >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
      *puVar24 = *puVar23;
      puVar23 = puVar23 + (ulong)bVar28 * -2 + 1;
      puVar24 = puVar24 + (ulong)bVar28 * -2 + 1;
    }
  }
LAB_00101068:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PickBestUV(int *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  long local_410;
  uint local_3f4;
  long local_3f0;
  long local_3e0;
  long local_3d8;
  long lStack_3d0;
  ulong local_3c8;
  long local_3b8;
  long lStack_3b0;
  ulong local_3a8;
  long local_3a0;
  long local_398;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  uint local_58;
  undefined4 local_54;
  undefined2 local_50 [8];
  long local_40;
  
  uVar15 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_3f4 = 0;
  local_3e0 = 0;
  local_3c8 = 0;
  local_3d8 = 0;
  lStack_3d0 = 0;
  iVar5 = *(int *)((ulong)(**(byte **)(param_1 + 0xc) >> 5 & 3) * 0x2e8 + *(long *)(param_1 + 10) +
                  0x520);
  lVar3 = *(long *)(param_1 + 2);
  *(undefined4 *)((long)param_2 + 0x35c) = 0xffffffff;
  lVar6 = *(long *)(param_1 + 4) + 0x10;
  local_410 = 0x7fffffffffffff;
  lVar7 = (long)iVar5;
  lVar12 = *(long *)(param_1 + 6) + 0x10;
  local_3f0 = lVar6;
  do {
    local_58 = ReconstructUV(param_1,&local_3b8,lVar12,uVar15 & 0xffffffff);
    iVar5 = (*_VP8SSE16x8)(lVar3 + 0x10,lVar12);
    lStack_3b0 = 0;
    local_3b8 = (long)iVar5;
    local_3a8 = (ulong)*(ushort *)(&VP8FixedCostsUV + uVar15 * 2);
    iVar5 = VP8GetCostUV(param_1,&local_3b8);
    local_3a0 = (long)iVar5;
    if (uVar15 == 0) {
      lVar11 = (local_3a0 + local_3a8) * lVar7 + (local_3b8 + lStack_3b0) * 0x100;
LAB_0010181f:
      *(int *)((long)param_2 + 0x35c) = (int)uVar15;
      local_3f4 = local_58;
      param_2[0x49] = local_170;
      param_2[0x4a] = lStack_168;
      param_2[0x4b] = local_160;
      param_2[0x4c] = lStack_158;
      param_2[0x4d] = local_150;
      param_2[0x4e] = lStack_148;
      param_2[0x4f] = local_140;
      param_2[0x50] = lStack_138;
      param_2[0x51] = local_130;
      param_2[0x52] = lStack_128;
      param_2[0x53] = local_120;
      param_2[0x54] = lStack_118;
      param_2[0x55] = local_110;
      param_2[0x56] = lStack_108;
      param_2[0x57] = local_100;
      param_2[0x58] = lStack_f8;
      param_2[0x59] = local_f0;
      param_2[0x5a] = lStack_e8;
      param_2[0x5b] = local_e0;
      param_2[0x5c] = lStack_d8;
      param_2[0x5d] = local_d0;
      param_2[0x5e] = lStack_c8;
      param_2[0x5f] = local_c0;
      param_2[0x60] = lStack_b8;
      param_2[0x61] = local_b0;
      param_2[0x62] = lStack_a8;
      param_2[99] = local_a0;
      param_2[100] = lStack_98;
      param_2[0x65] = local_90;
      param_2[0x66] = lStack_88;
      lVar13 = *(long *)(param_1 + 0x58);
      param_2[0x67] = local_80;
      param_2[0x68] = lStack_78;
      if (lVar13 != 0) {
        *(undefined4 *)((long)param_2 + 0x364) = local_54;
        *(undefined2 *)(param_2 + 0x6d) = local_50[0];
      }
      local_3c8 = local_3a8;
      local_3d8 = local_3b8;
      lStack_3d0 = lStack_3b0;
      lVar13 = local_3f0;
      local_410 = lVar11;
      local_3f0 = lVar12;
      local_3e0 = local_3a0;
    }
    else {
      iVar5 = 0;
      plVar14 = &local_150;
      do {
        iVar5 = (iVar5 + 1) - (uint)(*(short *)((long)plVar14 + -0x1e) == 0);
        if (iVar5 == 3) goto LAB_001017da;
        plVar4 = (long *)((long)plVar14 + -0x1c);
        do {
          plVar8 = plVar4;
          iVar5 = (iVar5 + 1) - (uint)((short)*plVar8 == 0);
          if (iVar5 == 3) goto LAB_001017da;
          plVar4 = (long *)((long)plVar8 + 2);
        } while ((long *)((long)plVar8 + 2) != plVar14);
        plVar14 = (long *)((long)plVar8 + 0x22);
      } while ((long *)local_50 != plVar14);
      local_3a0 = local_3a0 + 0x460;
LAB_001017da:
      lVar11 = (local_3b8 + lStack_3b0) * 0x100 + (local_3a8 + local_3a0) * lVar7;
      lVar13 = lVar12;
      local_398 = lVar11;
      if (lVar11 < local_410) goto LAB_0010181f;
    }
    uVar15 = uVar15 + 1;
    lVar12 = lVar13;
    if (uVar15 == 4) {
      VP8SetIntraUVMode(param_1,*(undefined4 *)((long)param_2 + 0x35c));
      param_2[3] = param_2[3] + local_3e0;
      param_2[2] = param_2[2] + local_3c8;
      *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | local_3f4;
      param_2[4] = param_2[4] + local_410;
      *param_2 = *param_2 + local_3d8;
      param_2[1] = param_2[1] + lStack_3d0;
      if (lVar6 != local_3f0) {
        (*_VP8Copy16x8)(local_3f0,lVar6);
      }
      if (*(long *)(param_1 + 0x58) != 0) {
        iVar5 = *param_1;
        bVar1 = *(byte *)((long)param_2 + 0x367);
        uVar10 = *(char *)((long)param_2 + 0x366) * 3 >> 2;
        cVar2 = *(char *)((long)param_2 + 0x369);
        *(ushort *)(*(long *)(param_1 + 0x58) + (long)iVar5 * 4) =
             CONCAT11(*(char *)((long)param_2 + 0x366) - (char)uVar10,
                      *(undefined1 *)((long)param_2 + 0x365));
        uVar9 = cVar2 * 3 >> 2;
        lVar3 = param_2[0x6d];
        param_1[0x56] =
             (((uVar9 & 0xff) << 8 | (uint)bVar1) << 8 | uVar10 & 0xff) << 8 |
             (uint)*(byte *)((long)param_2 + 0x364);
        *(ushort *)(*(long *)(param_1 + 0x58) + 2 + (long)iVar5 * 4) =
             CONCAT11(cVar2 - (char)uVar9,(char)lVar3);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PickBestIntra16(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  bool bVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long in_FS_OFFSET;
  byte bVar26;
  long local_3b8 [111];
  long local_40;
  
  bVar26 = 0;
  pbVar4 = *(byte **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(param_1 + 0x28);
  iVar22 = (uint)*pbVar4 * 0x1010101;
  uVar17 = (ulong)(**(byte **)(param_1 + 0x30) >> 5 & 3);
  lVar13 = uVar17 * 0x2e8 + lVar5;
  iVar2 = *(int *)(lVar13 + 0x52c);
  iVar3 = *(int *)(lVar13 + 0x518);
  pbVar14 = pbVar4;
  while ((((iVar22 == *(int *)pbVar14 && (iVar22 == *(int *)(pbVar14 + 4))) &&
          (iVar22 == *(int *)(pbVar14 + 8))) && (iVar22 == *(int *)(pbVar14 + 0xc)))) {
    pbVar14 = pbVar14 + 0x20;
    if (pbVar14 == pbVar4 + 0x200) {
      bVar8 = true;
LAB_00101bb8:
      uVar21 = 0;
      plVar25 = local_3b8;
      *(undefined4 *)(param_2 + 0x69) = 0xffffffff;
      plVar20 = param_2;
      do {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        *(int *)(plVar25 + 0x69) = (int)uVar21;
        uVar10 = ReconstructIntra16(param_1,plVar25,uVar6,uVar21 & 0xffffffff);
        *(undefined4 *)(plVar25 + 0x6c) = uVar10;
        iVar22 = (*_VP8SSE16x16)(pbVar4,uVar6);
        *plVar25 = (long)iVar22;
        lVar13 = 0;
        if (iVar2 != 0) {
          iVar22 = (*_VP8TDisto16x16)(pbVar4,uVar6,kWeightY);
          lVar13 = (long)(iVar22 * iVar2 + 0x80 >> 8);
        }
        plVar25[1] = lVar13;
        plVar25[2] = (ulong)*(ushort *)(&VP8FixedCostsI16 + uVar21 * 2);
        iVar22 = VP8GetCostLuma16(param_1,plVar25);
        plVar25[3] = (long)iVar22;
        if (bVar8) {
          plVar19 = plVar25 + 0xd;
          iVar12 = 0;
          do {
            iVar12 = (iVar12 + 1) - (uint)(*(short *)((long)plVar19 + -0x1e) == 0);
            if (iVar12 == 1) {
LAB_00101d38:
              lVar13 = *plVar25;
              lVar15 = plVar25[1];
              bVar8 = false;
              goto LAB_00101bf7;
            }
            plVar18 = (long *)((long)plVar19 + -0x1c);
            do {
              iVar12 = (iVar12 + 1) - (uint)((short)*plVar18 == 0);
              plVar18 = (long *)((long)plVar18 + 2);
              if (iVar12 == 1) goto LAB_00101d38;
            } while (plVar19 != plVar18);
            plVar19 = plVar19 + 4;
          } while (plVar19 != plVar25 + 0x4d);
          lVar13 = *plVar25 * 2;
          *plVar25 = lVar13;
          lVar15 = plVar25[1] * 2;
          plVar25[1] = lVar15;
        }
        else {
          lVar13 = *plVar25;
          lVar15 = plVar25[1];
        }
LAB_00101bf7:
        lVar13 = ((long)iVar22 + plVar25[2]) * (long)iVar3 + (lVar13 + lVar15) * 0x100;
        plVar25[4] = lVar13;
        if ((uVar21 == 0) || (plVar19 = plVar20, lVar13 < plVar20[4])) {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = uVar6;
          plVar19 = plVar25;
          plVar25 = plVar20;
        }
        uVar21 = uVar21 + 1;
        plVar20 = plVar19;
        if (uVar21 == 4) {
          if (param_2 != plVar19) {
            *param_2 = *plVar19;
            param_2[0x6d] = plVar19[0x6d];
            lVar13 = (long)param_2 - (long)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
            puVar23 = (undefined8 *)((long)plVar19 - lVar13);
            puVar24 = (undefined8 *)((ulong)(param_2 + 1) & 0xfffffffffffffff8);
            for (uVar21 = (ulong)((int)lVar13 + 0x370U >> 3); uVar21 != 0; uVar21 = uVar21 - 1) {
              *puVar24 = *puVar23;
              puVar23 = puVar23 + (ulong)bVar26 * -2 + 1;
              puVar24 = puVar24 + (ulong)bVar26 * -2 + 1;
            }
          }
          lVar5 = lVar5 + uVar17 * 0x2e8;
          param_2[4] = (long)*(int *)(lVar5 + 0x524) * (param_2[2] + param_2[3]) +
                       (param_2[1] + *param_2) * 0x100;
          VP8SetIntra16Mode(param_1,(int)param_2[0x69]);
          if (((*(uint *)(param_2 + 0x6c) & 0x100ffff) == 0x1000000) &&
             ((long)*(int *)(lVar5 + 0x514) < *param_2)) {
            uVar16 = *(ushort *)((long)param_2 + 0x2a);
            uVar1 = *(ushort *)((long)param_2 + 0x2c);
            uVar9 = -uVar16;
            if (0 < (short)uVar16) {
              uVar9 = uVar16;
            }
            uVar16 = -uVar1;
            if (0 < (short)uVar1) {
              uVar16 = uVar1;
            }
            uVar1 = *(ushort *)(param_2 + 6);
            uVar11 = (uint)uVar9;
            if ((uint)uVar9 < (uint)uVar16) {
              uVar11 = (uint)uVar16;
            }
            uVar16 = -uVar1;
            if (0 < (short)uVar1) {
              uVar16 = uVar1;
            }
            uVar7 = (uint)uVar16;
            if (uVar16 < uVar11) {
              uVar7 = uVar11;
            }
            if (*(int *)(lVar5 + 0x510) < (int)uVar7) {
              *(uint *)(lVar5 + 0x510) = uVar7;
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      } while( true );
    }
  }
  bVar8 = false;
  goto LAB_00101bb8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8SetSegmentParams(float param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  long *plVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int *piVar24;
  long in_FS_OFFSET;
  byte bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar25 = 0;
  lVar8 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar22 = (int)param_2[4];
  iVar12 = *(int *)(lVar8 + 0x1c);
  dVar26 = (double)param_1 / _LC6;
  dVar27 = (((double)iVar12 * _LC5) / _LC6) * __LC7;
  if (*(int *)(lVar8 + 0x50) == 0) {
    if (_LC12 <= dVar26) {
      dVar26 = (dVar26 + dVar26) - _LC14;
    }
    else {
      dVar26 = dVar26 * __LC13;
    }
    dVar26 = pow(dVar26,_LC15);
    if (iVar22 < 1) goto LAB_001025ab;
LAB_00101f1b:
    dVar28 = _LC14;
    plVar6 = param_2;
    do {
      dVar29 = pow(dVar26,dVar28 - (double)(int)plVar6[0xa0] * dVar27);
      iVar1 = (int)((dVar28 - dVar29) * __LC16);
      if (0x7f < iVar1) {
        iVar1 = 0x7f;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      plVar16 = plVar6 + 0x5d;
      *(int *)(plVar6 + 0xa1) = iVar1;
      plVar6 = plVar16;
    } while (plVar16 != param_2 + (long)iVar22 * 0x5d);
    uVar7 = (undefined4)param_2[0xa1];
    *(undefined4 *)(param_2 + 0x1c0) = uVar7;
    if (iVar22 != 4) goto LAB_00101fbc;
  }
  else {
    dVar29 = (double)*(int *)((long)param_2 + 0xe04) / __LC8;
    dVar28 = _LC4;
    if ((dVar29 <= __LC9) && (dVar28 = _LC5, _LC10 <= dVar29)) {
      dVar28 = _LC5 + (dVar29 - _LC10) * __LC11;
    }
    dVar26 = pow(dVar26,dVar28);
    if (0 < iVar22) goto LAB_00101f1b;
LAB_001025ab:
    uVar7 = (undefined4)param_2[0xa1];
    *(undefined4 *)(param_2 + 0x1c0) = uVar7;
LAB_00101fbc:
    lVar5 = (long)iVar22;
    plVar6 = param_2 + lVar5 * 0x5d;
    do {
      lVar5 = lVar5 + 1;
      *(undefined4 *)(plVar6 + 0xa1) = uVar7;
      plVar6 = plVar6 + 0x5d;
    } while ((int)lVar5 != 4);
  }
  iVar1 = -4;
  iVar2 = (((int)param_2[0x1c1] + -0x40) / 7) * iVar12;
  if ((-500 < iVar2) && (iVar1 = iVar2 / 100, 6 < iVar1)) {
    iVar1 = 6;
  }
  iVar2 = -0xf;
  if ((iVar12 < 400) && (iVar2 = -(iVar12 / 0x19), 0xf < iVar2)) {
    iVar2 = 0xf;
  }
  *(int *)(param_2 + 0x1c3) = iVar2;
  *(int *)((long)param_2 + 0xe1c) = iVar1;
  *(undefined4 *)((long)param_2 + 0xe14) = 0;
  *(undefined8 *)((long)param_2 + 0xe0c) = 0;
  iVar12 = *(int *)(lVar8 + 0x20);
  piVar23 = (int *)((long)param_2 + 0x504);
  do {
    iVar1 = VP8FilterStrengthFromDelta((int)param_2[3]);
    iVar2 = (iVar1 * iVar12 * 5) / (*piVar23 + 0x100);
    iVar1 = 0x3f;
    if (iVar2 < 0x40) {
      iVar1 = iVar2;
    }
    if (iVar2 < 2) {
      iVar1 = 0;
    }
    piVar24 = piVar23 + 0xba;
    piVar23[2] = iVar1;
    piVar23 = piVar24;
  } while ((int *)((long)param_2 + 0x10a4) != piVar24);
  lVar8 = *param_2;
  param_2[2] = CONCAT44(*(undefined4 *)((long)param_2 + 0x50c),(uint)(*(int *)(lVar8 + 0x28) == 0));
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(lVar8 + 0x24);
  iVar12 = (int)param_2[4];
  lVar5 = (long)iVar12;
  if (iVar22 < 2) {
LAB_00102133:
    iVar22 = 0;
    if (3 < (int)param_2[0xb88]) {
LAB_00102488:
      iVar22 = *(int *)(lVar8 + 0x1c);
    }
    if ((int)lVar5 < 1) goto LAB_001023ae;
  }
  else {
    local_58 = __LC17;
    uStack_50 = _UNK_001031e8;
    if (iVar12 < 2) {
      lVar5 = (long)iVar12;
      goto LAB_00102133;
    }
    puVar20 = &local_58;
    plVar6 = param_2 + 0xa9;
    iVar1 = 1;
    iVar2 = 1;
    iVar22 = 4;
    if (iVar12 < 5) {
      iVar22 = iVar12;
    }
    do {
      if (iVar1 < 1) {
        *(undefined4 *)((long)puVar20 + 4) = 0;
LAB_001026e9:
        plVar16 = plVar6;
        plVar18 = param_2 + (long)iVar1 * 0x5d + 0x4c;
        for (lVar11 = 0x5d; lVar11 != 0; lVar11 = lVar11 + -1) {
          *plVar18 = *plVar16;
          plVar16 = plVar16 + (ulong)bVar25 * -2 + 1;
          plVar18 = plVar18 + (ulong)bVar25 * -2 + 1;
        }
      }
      else {
        iVar12 = 0;
        do {
          if (param_2[(long)iVar2 * 0x5d + 0xa1] == param_2[(long)iVar12 * 0x5d + 0xa1]) {
            *(int *)((long)puVar20 + 4) = iVar12;
            goto LAB_00102454;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar1);
        *(int *)((long)puVar20 + 4) = iVar1;
        if (iVar2 != iVar1) goto LAB_001026e9;
      }
      iVar1 = iVar1 + 1;
LAB_00102454:
      iVar2 = iVar2 + 1;
      puVar20 = (undefined8 *)((long)puVar20 + 4);
      plVar6 = plVar6 + 0x5d;
    } while (iVar2 < iVar22);
    if (iVar1 < iVar22) {
      iVar12 = (int)param_2[6] * *(int *)((long)param_2 + 0x34);
      if (0 < iVar12) {
        lVar5 = param_2[0xb8c];
        pbVar9 = (byte *)(lVar5 + (long)(int)(iVar12 - 1U) * 4);
        do {
          pbVar10 = pbVar9 + -4;
          *pbVar9 = *pbVar9 & 0x9f |
                    (byte)((*(uint *)((long)&local_58 + (ulong)(*pbVar9 >> 5 & 3) * 4) & 3) << 5);
          pbVar9 = pbVar10;
        } while ((byte *)(lVar5 + -8 + (long)iVar12 * 4 + (ulong)(iVar12 - 1U) * -4) != pbVar10);
      }
      lVar5 = (long)iVar1;
      *(int *)(param_2 + 4) = iVar1;
      plVar6 = param_2 + lVar5 * 0x5d;
      do {
        lVar5 = lVar5 + 1;
        plVar16 = param_2 + (long)(iVar1 + -1) * 0x5d + 0x4c;
        plVar18 = plVar6 + 0x4c;
        for (lVar11 = 0x5d; lVar11 != 0; lVar11 = lVar11 + -1) {
          *plVar18 = *plVar16;
          plVar16 = plVar16 + (ulong)bVar25 * -2 + 1;
          plVar18 = plVar18 + (ulong)bVar25 * -2 + 1;
        }
        plVar6 = plVar6 + 0x5d;
      } while ((int)lVar5 < iVar22);
      lVar5 = (long)iVar1;
      goto LAB_00102133;
    }
    iVar22 = 0;
    if (3 < (int)param_2[0xb88]) goto LAB_00102488;
  }
  puVar14 = (uint *)(param_2 + 0x4c);
  do {
    uVar4 = puVar14[0xaa];
    iVar12 = *(int *)((long)param_2 + 0xe0c) + uVar4;
    if (0x7f < iVar12) {
      iVar12 = 0x7f;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    lVar8 = 0x7f;
    if ((int)uVar4 < 0x80) {
      lVar8 = (long)(int)uVar4;
    }
    if ((int)lVar8 < 0) {
      lVar8 = 0;
    }
    *puVar14 = (uint)*(ushort *)(kAcTable + lVar8 * 2) << 0x10 | (uint)(byte)kDcTable[iVar12];
    iVar12 = (int)param_2[0x1c2] + uVar4;
    if (0x7f < iVar12) {
      iVar12 = 0x7f;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    iVar1 = *(int *)((long)param_2 + 0xe14) + uVar4;
    if (0x7f < iVar1) {
      iVar1 = 0x7f;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar14[0x38] =
         (uint)*(ushort *)(kAcTable2 + (long)iVar1 * 2) << 0x10 | (uint)(byte)kDcTable[iVar12] * 2;
    iVar12 = (int)param_2[0x1c3] + uVar4;
    if (0x75 < iVar12) {
      iVar12 = 0x75;
    }
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    iVar1 = uVar4 + *(int *)((long)param_2 + 0xe1c);
    if (0x7f < iVar1) {
      iVar1 = 0x7f;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar14[0x70] =
         (uint)*(ushort *)(kAcTable + (long)iVar1 * 2) << 0x10 | (uint)(byte)kDcTable[iVar12];
    iVar1 = ExpandMatrix(puVar14);
    iVar2 = ExpandMatrix(puVar14 + 0x38,1);
    iVar3 = ExpandMatrix(puVar14 + 0x70,2);
    iVar13 = iVar1 * iVar1;
    iVar2 = iVar2 * iVar2;
    iVar12 = iVar3 * iVar3 * 2;
    iVar17 = iVar13 * 3 >> 7;
    uVar4 = iVar3 * iVar3 * 3 >> 6;
    iVar21 = iVar13 >> 7;
    iVar19 = iVar2 >> 2;
    iVar1 = iVar1 * iVar22 >> 5;
    iVar3 = iVar13 * 7 >> 3;
    *(ulong *)(puVar14 + 0xae) = CONCAT44(iVar17,iVar2 * 3);
    *(ulong *)(puVar14 + 0xb0) = CONCAT44(iVar21,uVar4);
    *(ulong *)(puVar14 + 0xb3) = CONCAT44(iVar19,iVar1);
    *(ulong *)(puVar14 + 0xb5) = CONCAT44(iVar12,iVar3);
    if (iVar17 == 0) {
      puVar14[0xaf] = 1;
      if (iVar2 == 0) {
        puVar14[0xae] = 1;
        if (uVar4 != 0) {
          puVar14[0xb1] = 1;
          if (iVar3 == 0) {
            puVar14[0xb5] = 1;
          }
          goto LAB_001024b3;
        }
        puVar14[0xb0] = 1;
        puVar14[0xb1] = 1;
        if (iVar3 != 0) goto LAB_00102500;
        puVar14[0xb5] = 1;
        puVar14[0xb4] = 1;
      }
      else {
        if (uVar4 == 0) {
          puVar14[0xb0] = 1;
          puVar14[0xb1] = 1;
          if (iVar3 == 0) {
            puVar14[0xb5] = 1;
          }
          goto LAB_0010234a;
        }
        puVar14[0xb1] = 1;
        if (iVar3 == 0) {
          puVar14[0xb5] = 1;
        }
        if (iVar19 != 0) goto LAB_001024bd;
LAB_00102500:
        puVar14[0xb4] = 1;
      }
LAB_00102353:
      uVar4 = 1;
      if (iVar12 != 0) goto LAB_001024bd;
    }
    else {
      if (iVar2 != 0) {
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        puVar14[0xb0] = uVar4;
        if (iVar21 == 0) {
          puVar14[0xb1] = 1;
        }
LAB_0010234a:
        if (iVar19 == 0) goto LAB_00102500;
        goto LAB_00102353;
      }
      puVar14[0xae] = 1;
      if (uVar4 == 0) {
        puVar14[0xb0] = 1;
        if (iVar21 == 0) {
          puVar14[0xb1] = 1;
        }
        goto LAB_00102500;
      }
      if (iVar21 == 0) {
        puVar14[0xb1] = 1;
      }
LAB_001024b3:
      puVar14[0xb4] = 1;
LAB_001024bd:
      uVar4 = puVar14[0xb6];
    }
    puVar14[0xb6] = uVar4;
    uVar4 = 1;
    if (0 < iVar1) {
      uVar4 = puVar14[0xb3];
    }
    puVar14[0xb3] = uVar4;
    puVar15 = puVar14 + 0xba;
    puVar14[0xac] = 0;
    puVar14[0xad] = ((uint)(ushort)*puVar14 + (uint)(ushort)*puVar14 * 4) * 4;
    *(long *)(puVar14 + 0xb8) = (long)(iVar13 * 1000);
    puVar14 = puVar15;
  } while ((uint *)((long)(param_2 + 0x4c) + lVar5 * 0xba * 4) != puVar15);
LAB_001023ae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8MakeLuma16Preds(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x5a);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x001027b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_VP8EncPredLuma16)(*(undefined8 *)(param_1 + 8),uVar2,uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8MakeChroma8Preds(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x5c);
  }
  uVar1 = 0;
  if (param_1[1] != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x62);
  }
                    /* WARNING: Could not recover jumptable at 0x001027e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_VP8EncPredChroma8)(*(undefined8 *)(param_1 + 8),uVar2,uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8MakeIntra4Preds(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001027fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_VP8EncPredLuma4)(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x78));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool VP8Decimate(int *param_1,undefined1 (*param_2) [16],uint param_3)

{
  byte *pbVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  byte *pbVar18;
  long local_78;
  long local_68;
  long local_58;
  uint local_4c;
  long local_48;
  
  iVar7 = *param_1;
  iVar4 = *(int *)(*(long *)(param_1 + 10) + 0x5c40);
  *param_2 = (undefined1  [16])0x0;
  *(undefined4 *)param_2[0x36] = 0;
  *(undefined8 *)param_2[2] = 0x7fffffffffffff;
  param_2[1] = (undefined1  [16])0x0;
  uVar13 = 0;
  if (iVar7 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x5a);
  }
  uVar11 = 0;
  if (param_1[1] != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x60);
  }
  (*_VP8EncPredLuma16)(*(undefined8 *)(param_1 + 8),uVar13,uVar11);
  uVar13 = 0;
  if (*param_1 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x5c);
  }
  uVar11 = 0;
  if (param_1[1] != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x62);
  }
  (*_VP8EncPredChroma8)(*(undefined8 *)(param_1 + 8),uVar13,uVar11);
  if (param_3 != 0) {
    param_1[0x52] = (uint)(2 < param_3);
    PickBestIntra16(param_1,param_2);
    if (1 < iVar4) {
      PickBestIntra4_isra_0(param_1,param_2);
    }
    PickBestUV(param_1,param_2);
    if (param_3 == 2) {
      lVar5 = *(long *)(param_1 + 10);
      param_1[0x52] = 1;
      if ((**(byte **)(param_1 + 0xc) & 3) == 1) {
        uVar12 = ReconstructIntra16(param_1,param_2,*(undefined8 *)(param_1 + 4),
                                    **(undefined1 **)(param_1 + 0x10));
      }
      else {
        uVar12 = 0;
        VP8IteratorStartI4(param_1);
        do {
          uVar8 = param_1[0x20];
          lVar14 = *(long *)(param_1 + 2);
          uVar2 = *(undefined1 *)
                   (*(long *)(param_1 + 0x10) +
                   (long)(int)(((int)uVar8 >> 2) * *(int *)(lVar5 + 0x38) + (uVar8 & 3)));
          uVar3 = (&VP8Scan)[(int)uVar8];
          lVar9 = *(long *)(param_1 + 4);
          (*_VP8EncPredLuma4)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1e));
          iVar7 = ReconstructIntra4(param_1,param_2[(long)param_1[0x20] * 2 + 4] + 8,
                                    lVar14 + (ulong)uVar3,(ulong)uVar3 + lVar9,uVar2);
          uVar12 = uVar12 | iVar7 << ((byte)param_1[0x20] & 0x1f);
          iVar7 = VP8IteratorRotateI4(param_1,*(undefined8 *)(param_1 + 4));
        } while (iVar7 != 0);
      }
      uVar8 = ReconstructUV(param_1,param_2,*(long *)(param_1 + 4) + 0x10,
                            **(byte **)(param_1 + 0xc) >> 2 & 3);
      uVar8 = uVar8 | uVar12;
      *(uint *)param_2[0x36] = uVar8;
    }
    else {
      uVar8 = *(uint *)param_2[0x36];
    }
    goto LAB_001028ff;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 10) + 0x540 +
                   (ulong)(**(byte **)(param_1 + 0xc) >> 5 & 3) * 0x2e8);
  if (iVar4 < 2) {
    if ((**(byte **)(param_1 + 0xc) & 3) == 1) {
      local_58 = 0x7fffffffffffff;
      goto LAB_00102b14;
    }
    local_48 = 0x7fffffffffffff;
    local_58 = 0x7fffffffffffff;
LAB_00102985:
    VP8IteratorStartI4(param_1);
    local_68 = 0;
    local_4c = 0;
    local_78 = lVar5;
    do {
      uVar15 = 0;
      uVar17 = 0xffffffff;
      lVar14 = 0x7fffffffffffff;
      uVar3 = (&VP8Scan)[param_1[0x20]];
      lVar5 = *(long *)(param_1 + 2);
      lVar9 = GetCostModeI4(param_1,param_2[0x34] + 0xc);
      (*_VP8EncPredLuma4)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1e));
      do {
        iVar7 = (*_VP8SSE4x4)((ulong)uVar3 + lVar5,
                              (ulong)(ushort)(&VP8I4ModeOffsets)[uVar15] + *(long *)(param_1 + 8));
        lVar10 = (long)(int)(iVar7 * 0x100 + (uint)*(ushort *)(lVar9 + uVar15 * 2) * 0xb);
        if (lVar10 < lVar14) {
          uVar17 = uVar15 & 0xffffffff;
          lVar14 = lVar10;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 10);
      local_78 = local_78 + lVar14;
      local_68 = local_68 + (ulong)*(ushort *)(lVar9 + (long)(int)uVar17 * 2);
      lVar14 = (long)param_1[0x20];
      param_2[0x34][lVar14 + 0xc] = (char)uVar17;
      if ((local_48 <= local_78) || (local_58 < local_68)) {
        local_78 = local_48;
        goto LAB_00102c3c;
      }
      iVar7 = ReconstructIntra4(param_1,param_2[lVar14 * 2 + 4] + 8,(ulong)uVar3 + lVar5,
                                (ulong)(ushort)(&VP8Scan)[lVar14] + *(long *)(param_1 + 6),uVar17);
      local_4c = local_4c | iVar7 << ((byte)param_1[0x20] & 0x1f);
      iVar7 = VP8IteratorRotateI4(param_1,*(undefined8 *)(param_1 + 6));
    } while (iVar7 != 0);
    VP8SetIntra4Mode(param_1,param_2[0x34] + 0xc);
    uVar13 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 6) = uVar13;
  }
  else {
    local_58 = (long)*(int *)(*(long *)(param_1 + 10) + 0x5c4c);
LAB_00102b14:
    lVar14 = 0;
    pbVar18 = *(byte **)(param_1 + 2);
    local_78 = 0x7fffffffffffff;
    uVar16 = 0xffffffff;
    do {
      while( true ) {
        iVar7 = (*_VP8SSE16x16)(pbVar18,(ulong)(ushort)(&VP8I16ModeOffsets)[lVar14] +
                                        *(long *)(param_1 + 8));
        lVar9 = (long)iVar7 * 0x100 + (ulong)*(ushort *)(&VP8FixedCostsI16 + lVar14 * 2) * 0x6a;
        if (lVar14 != 0) break;
        lVar14 = 1;
        if (lVar9 < local_78) {
          uVar16 = 0;
          local_78 = lVar9;
        }
      }
      if ((long)(ulong)*(ushort *)(&VP8FixedCostsI16 + lVar14 * 2) <= local_58) {
        lVar10 = lVar9;
        if (local_78 <= lVar9) {
          lVar10 = local_78;
        }
        bVar6 = lVar9 < local_78;
        local_78 = lVar10;
        if (bVar6) {
          uVar16 = (int)lVar14;
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    if ((*param_1 == 0) || (param_1[1] == 0)) {
      pbVar1 = pbVar18 + 0x200;
      iVar7 = (uint)*pbVar18 * 0x1010101;
      do {
        if ((((iVar7 != *(int *)pbVar18) || (*(int *)(pbVar18 + 4) != iVar7)) ||
            (iVar7 != *(int *)(pbVar18 + 8))) || (*(int *)(pbVar18 + 0xc) != iVar7))
        goto LAB_00102c27;
        pbVar18 = pbVar18 + 0x20;
      } while (pbVar18 != pbVar1);
      VP8SetIntra16Mode(param_1,(*param_1 != 0) * '\x02');
    }
    else {
LAB_00102c27:
      VP8SetIntra16Mode(param_1,uVar16);
      if (1 < iVar4) {
        local_48 = local_78;
        goto LAB_00102985;
      }
    }
LAB_00102c3c:
    local_4c = ReconstructIntra16(param_1,param_2,*(undefined8 *)(param_1 + 4),
                                  **(undefined1 **)(param_1 + 0x10));
  }
  if (0 < iVar4) {
    lVar5 = *(long *)(param_1 + 2);
    lVar9 = 0;
    lVar14 = 0x7fffffffffffff;
    uVar16 = 0xffffffff;
    do {
      iVar7 = (*_VP8SSE16x8)(lVar5 + 0x10,
                             (ulong)(ushort)(&VP8UVModeOffsets)[lVar9] + *(long *)(param_1 + 8));
      lVar10 = (long)(int)(iVar7 * 0x100 + (uint)*(ushort *)(&VP8FixedCostsUV + lVar9 * 2) * 0x78);
      if (lVar10 < lVar14) {
        lVar14 = lVar10;
        uVar16 = (int)lVar9;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    VP8SetIntraUVMode(param_1,uVar16);
  }
  uVar8 = ReconstructUV(param_1,param_2,*(long *)(param_1 + 4) + 0x10,
                        **(byte **)(param_1 + 0xc) >> 2 & 3);
  uVar8 = uVar8 | local_4c;
  *(long *)param_2[2] = local_78;
  *(uint *)param_2[0x36] = uVar8;
LAB_001028ff:
  VP8SetSkip(param_1,uVar8 == 0);
  return uVar8 == 0;
}



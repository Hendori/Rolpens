
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RescalerImportRowShrink_SSE2(long param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined7 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  unkbyte10 Var7;
  uint7 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  ushort uVar15;
  byte bVar17;
  short sVar18;
  undefined1 auVar16 [16];
  undefined4 uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar22;
  short sVar23;
  short sVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  short sVar32;
  undefined1 auVar33 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong uVar31;
  
  lVar11 = _UNK_00100968;
  lVar10 = __LC0;
  iVar2 = *(int *)(param_1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0xc);
  piVar13 = *(int **)(param_1 + 0x60);
  if (*(int *)(param_1 + 8) == 4) {
    iVar12 = *(int *)(param_1 + 0x24);
    if (iVar12 <= iVar2 * 0x80) {
      piVar1 = piVar13 + (*(int *)(param_1 + 0x34) << 2);
      if (piVar1 <= piVar13) {
        return;
      }
      auVar19 = (undefined1  [16])0x0;
      sVar32 = (short)iVar2;
      auVar33._0_4_ = CONCAT22(sVar32,sVar32);
      auVar33._4_4_ = auVar33._0_4_;
      auVar33._8_4_ = auVar33._0_4_;
      auVar33._12_4_ = auVar33._0_4_;
      if (iVar12 < 1) goto LAB_0010011d;
      do {
        do {
          uVar21 = *param_2;
          iVar12 = iVar12 - iVar2;
          param_2 = param_2 + 1;
          bVar17 = (byte)((uint)uVar21 >> 0x18);
          uVar4 = CONCAT25((short)(((uint7)bVar17 << 0x30) >> 0x28),
                           CONCAT14((char)((uint)uVar21 >> 0x10),uVar21));
          uVar8 = (uint7)CONCAT41((int)(CONCAT34((int3)((uint7)uVar4 >> 0x20),uVar21) >> 0x18),
                                  (char)((uint)uVar21 >> 8)) & 0xffffff00ff;
          uVar15 = (ushort)(byte)uVar21;
          auVar16 = ZEXT716(CONCAT52((int5)uVar8,uVar15));
          auVar20._0_2_ = auVar19._0_2_ + uVar15;
          sVar23 = (short)uVar8;
          auVar20._2_2_ = auVar19._2_2_ + sVar23;
          sVar18 = (short)((uint7)uVar4 >> 0x20);
          auVar20._4_2_ = auVar19._4_2_ + sVar18;
          auVar20._6_2_ = auVar19._6_2_ + (ushort)bVar17;
          auVar20._8_2_ = auVar19._8_2_;
          auVar20._10_2_ = auVar19._10_2_;
          auVar20._12_2_ = auVar19._12_2_;
          auVar20._14_2_ = auVar19._14_2_;
          auVar19 = auVar20;
        } while (0 < iVar12);
        sVar24 = (short)-iVar12;
        auVar25._0_4_ = CONCAT22(sVar24,sVar24);
        auVar25._4_4_ = auVar25._0_4_;
        auVar25._8_4_ = auVar25._0_4_;
        auVar25._12_4_ = auVar25._0_4_;
        auVar26._0_2_ = sVar24 * uVar15;
        auVar26._2_2_ = sVar24 * sVar23;
        auVar26._4_2_ = sVar24 * sVar18;
        auVar26._6_2_ = sVar24 * (ushort)bVar17;
        auVar26._8_8_ = 0;
        piVar14 = piVar13;
        while( true ) {
          auVar16 = pmulhuw(auVar16,auVar25);
          auVar20 = pmulhuw(auVar19,auVar33);
          piVar13 = piVar14 + 4;
          sVar23 = auVar19._6_2_ * sVar32;
          auVar30._0_12_ = auVar26._0_12_;
          auVar30._12_2_ = auVar26._6_2_;
          auVar30._14_2_ = auVar16._6_2_;
          auVar29._12_4_ = auVar30._12_4_;
          auVar29._0_10_ = auVar26._0_10_;
          auVar29._10_2_ = auVar16._4_2_;
          auVar28._10_6_ = auVar29._10_6_;
          auVar28._0_8_ = auVar26._0_8_;
          auVar28._8_2_ = auVar26._4_2_;
          uVar31 = auVar28._8_8_;
          auVar5._4_8_ = uVar31;
          auVar5._2_2_ = auVar16._2_2_;
          auVar5._0_2_ = auVar26._2_2_;
          auVar27._0_4_ = CONCAT22(auVar16._0_2_,auVar26._0_2_);
          auVar27._4_12_ = auVar5;
          iVar9 = CONCAT22(auVar20._6_2_,sVar23);
          Var7 = CONCAT64(CONCAT42(iVar9,auVar20._4_2_),CONCAT22(auVar19._4_2_ * sVar32,sVar23));
          auVar6._4_8_ = (long)((unkuint10)Var7 >> 0x10);
          auVar6._2_2_ = auVar20._2_2_;
          auVar6._0_2_ = auVar19._2_2_ * sVar32;
          *piVar14 = CONCAT22(auVar20._0_2_,auVar19._0_2_ * sVar32) - auVar27._0_4_;
          piVar14[1] = auVar6._0_4_ - auVar5._0_4_;
          piVar14[2] = (int)((unkuint10)Var7 >> 0x10) - auVar28._8_4_;
          piVar14[3] = iVar9 - auVar29._12_4_;
          uVar21 = (undefined4)((ulong)auVar27._0_4_ * (ulong)uVar3 + lVar10 >> 0x20);
          uVar22 = (undefined4)((uVar31 & 0xffffffff) * (ulong)uVar3 + lVar11 >> 0x20);
          auVar16._4_4_ = uVar22;
          auVar16._0_4_ = uVar21;
          auVar16._8_4_ = uVar22;
          auVar16._12_4_ = (int)((uVar31 >> 0x20) * (ulong)uVar3 + lVar11 >> 0x20);
          auVar19._8_8_ = auVar16._8_8_;
          auVar19._4_4_ = (int)((auVar27._0_8_ >> 0x20) * (ulong)uVar3 + lVar10 >> 0x20);
          auVar19._0_4_ = uVar21;
          auVar19 = packssdw(auVar19,(undefined1  [16])0x0);
          if (piVar1 <= piVar13) {
            return;
          }
          iVar12 = iVar12 + *(int *)(param_1 + 0x24);
          if (0 < iVar12) break;
LAB_0010011d:
          auVar16 = (undefined1  [16])0x0;
          auVar25._0_4_ = CONCAT22((short)-iVar12,(short)-iVar12);
          auVar25._4_4_ = auVar25._0_4_;
          auVar25._8_4_ = auVar25._0_4_;
          auVar25._12_4_ = auVar25._0_4_;
          piVar14 = piVar13;
          auVar26 = auVar16;
        }
      } while( true );
    }
  }
  WebPRescalerImportRowShrink_C(param_1);
  return;
}



void RescalerImportRowExpand_SSE2(long param_1,ulong *param_2)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  unkuint9 Var31;
  undefined1 auVar32 [11];
  undefined1 auVar33 [13];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [11];
  undefined1 auVar37 [13];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 *puVar44;
  uint uVar45;
  uint uVar46;
  undefined1 (*pauVar47) [16];
  ulong *puVar48;
  int iVar49;
  undefined1 uVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar3 = *(uint *)(param_1 + 0x24);
  pauVar47 = *(undefined1 (**) [16])(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (((int)uVar3 < 0x8000) && (7 < iVar4)) {
    uVar53 = *param_2;
    uVar52 = (undefined1)(uVar53 >> 0x38);
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar53;
    auVar6[0xe] = uVar52;
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar53;
    auVar9[0xc] = (char)(uVar53 >> 0x30);
    auVar9._13_2_ = auVar6._13_2_;
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar53;
    auVar12._12_3_ = auVar9._12_3_;
    auVar15._8_2_ = 0;
    auVar15._0_8_ = uVar53;
    auVar15[10] = (char)(uVar53 >> 0x28);
    auVar15._11_4_ = auVar12._11_4_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar53;
    auVar18._10_5_ = auVar15._10_5_;
    auVar21[8] = (char)(uVar53 >> 0x20);
    auVar21._0_8_ = uVar53;
    auVar21._9_6_ = auVar18._9_6_;
    auVar30._7_8_ = 0;
    auVar30._0_7_ = auVar21._8_7_;
    Var31 = CONCAT81(SUB158(auVar30 << 0x40,7),(char)(uVar53 >> 0x18));
    auVar38._9_6_ = 0;
    auVar38._0_9_ = Var31;
    auVar32._1_10_ = SUB1510(auVar38 << 0x30,5);
    auVar32[0] = (char)(uVar53 >> 0x10);
    auVar39._11_4_ = 0;
    auVar39._0_11_ = auVar32;
    auVar33._1_12_ = SUB1512(auVar39 << 0x20,3);
    auVar33[0] = (char)(uVar53 >> 8);
    auVar50._0_2_ = CONCAT11(0,(byte)uVar53);
    auVar28._2_13_ = auVar33;
    auVar28._0_2_ = auVar50._0_2_;
    auVar54[0xf] = 0;
    auVar54._0_15_ = auVar28;
    pauVar2 = (undefined1 (*) [16])
              (*pauVar47 + (long)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 8)) * 4);
    if (*(int *)(param_1 + 8) == 4) {
      param_2 = (ulong *)((long)param_2 + 4);
      auVar24._12_2_ = (short)Var31;
      auVar24._0_12_ = auVar28._0_12_;
      auVar24[0xe] = uVar52;
      auVar26._10_2_ = auVar9._12_2_;
      auVar26._0_10_ = auVar28._0_10_;
      auVar26._12_3_ = auVar24._12_3_;
      auVar50._10_5_ = auVar26._10_5_;
      auVar50._8_2_ = auVar32._0_2_;
      auVar50._6_2_ = auVar15._10_2_;
      auVar50._4_2_ = auVar33._0_2_;
      auVar50._2_2_ = auVar21._8_2_;
      auVar50[0xf] = 0;
      auVar55._4_4_ = uVar3;
      auVar55._0_4_ = uVar3;
      auVar55._8_4_ = uVar3;
      auVar55._12_4_ = uVar3;
      auVar54 = pmaddwd(auVar50,auVar55);
      *pauVar47 = auVar54;
      uVar46 = uVar3;
      while (pauVar47 = pauVar47 + 1, pauVar47 < pauVar2) {
        uVar46 = uVar46 - *(int *)(param_1 + 0x28);
        if ((int)uVar46 < 0) {
          uVar53 = *param_2;
          uVar46 = uVar46 + uVar3;
          param_2 = (ulong *)((long)param_2 + 4);
          uVar52 = (undefined1)(uVar53 >> 0x38);
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar53;
          auVar8[0xe] = uVar52;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar53;
          auVar11[0xc] = (char)(uVar53 >> 0x30);
          auVar11._13_2_ = auVar8._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar53;
          auVar14._12_3_ = auVar11._12_3_;
          auVar17._8_2_ = 0;
          auVar17._0_8_ = uVar53;
          auVar17[10] = (char)(uVar53 >> 0x28);
          auVar17._11_4_ = auVar14._11_4_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar53;
          auVar20._10_5_ = auVar17._10_5_;
          auVar22[8] = (char)(uVar53 >> 0x20);
          auVar22._0_8_ = uVar53;
          auVar22._9_6_ = auVar20._9_6_;
          auVar35._7_8_ = 0;
          auVar35._0_7_ = auVar22._8_7_;
          Var31 = CONCAT81(SUB158(auVar35 << 0x40,7),(char)(uVar53 >> 0x18));
          auVar42._9_6_ = 0;
          auVar42._0_9_ = Var31;
          auVar36._1_10_ = SUB1510(auVar42 << 0x30,5);
          auVar36[0] = (char)(uVar53 >> 0x10);
          auVar43._11_4_ = 0;
          auVar43._0_11_ = auVar36;
          auVar37._1_12_ = SUB1512(auVar43 << 0x20,3);
          auVar37[0] = (char)(uVar53 >> 8);
          auVar50._0_2_ = CONCAT11(0,(byte)uVar53);
          auVar29._2_13_ = auVar37;
          auVar29._0_2_ = auVar50._0_2_;
          auVar23._12_2_ = (short)Var31;
          auVar23._0_12_ = auVar29._0_12_;
          auVar23[0xe] = uVar52;
          auVar25._10_2_ = auVar11._12_2_;
          auVar25._0_10_ = auVar29._0_10_;
          auVar25._12_3_ = auVar23._12_3_;
          auVar50._10_5_ = auVar25._10_5_;
          auVar50._8_2_ = auVar36._0_2_;
          auVar50._6_2_ = auVar17._10_2_;
          auVar50._4_2_ = auVar37._0_2_;
          auVar50._2_2_ = auVar22._8_2_;
          auVar50[0xf] = 0;
        }
        uVar45 = (uVar3 - uVar46) * 0x10000 | uVar46;
        auVar51._4_4_ = uVar45;
        auVar51._0_4_ = uVar45;
        auVar51._8_4_ = uVar45;
        auVar51._12_4_ = uVar45;
        auVar54 = pmaddwd(auVar50,auVar51);
        *pauVar47 = auVar54;
      }
    }
    else {
      puVar48 = (ulong *)((long)param_2 + 7);
      auVar50 = pmaddwd(auVar54,ZEXT416(uVar3));
      *(int *)*pauVar47 = auVar50._0_4_;
      if ((undefined1 (*) [16])(*pauVar47 + 4) < pauVar2) {
        iVar49 = 7;
        pauVar47 = (undefined1 (*) [16])(*pauVar47 + 4);
        uVar46 = uVar3;
        do {
          uVar46 = uVar46 - *(int *)(param_1 + 0x28);
          if ((int)uVar46 < 0) {
            iVar49 = iVar49 + -1;
            if (iVar49 == 0) {
              if ((ulong *)((long)param_2 + (long)iVar4 + -8) < puVar48) {
                pbVar1 = (byte *)((long)puVar48 + 1);
                puVar48 = (ulong *)((long)puVar48 + 1);
                iVar49 = 1;
                uVar53 = auVar54._2_8_;
                auVar54._8_8_ = auVar54._8_8_ >> 0x10;
                auVar54._0_8_ = uVar53 & 0xffffffff0000ffff | (ulong)*pbVar1 << 0x10;
              }
              else {
                uVar53 = *puVar48;
                puVar48 = (ulong *)((long)puVar48 + 7);
                iVar49 = 7;
                auVar5._8_6_ = 0;
                auVar5._0_8_ = uVar53;
                auVar5[0xe] = (char)(uVar53 >> 0x38);
                auVar7._8_4_ = 0;
                auVar7._0_8_ = uVar53;
                auVar7[0xc] = (char)(uVar53 >> 0x30);
                auVar7._13_2_ = auVar5._13_2_;
                auVar10._8_4_ = 0;
                auVar10._0_8_ = uVar53;
                auVar10._12_3_ = auVar7._12_3_;
                auVar13._8_2_ = 0;
                auVar13._0_8_ = uVar53;
                auVar13[10] = (char)(uVar53 >> 0x28);
                auVar13._11_4_ = auVar10._11_4_;
                auVar16._8_2_ = 0;
                auVar16._0_8_ = uVar53;
                auVar16._10_5_ = auVar13._10_5_;
                auVar19[8] = (char)(uVar53 >> 0x20);
                auVar19._0_8_ = uVar53;
                auVar19._9_6_ = auVar16._9_6_;
                auVar34._7_8_ = 0;
                auVar34._0_7_ = auVar19._8_7_;
                auVar40._1_8_ = SUB158(auVar34 << 0x40,7);
                auVar40[0] = (char)(uVar53 >> 0x18);
                auVar40._9_6_ = 0;
                auVar41._1_10_ = SUB1510(auVar40 << 0x30,5);
                auVar41[0] = (char)(uVar53 >> 0x10);
                auVar41._11_4_ = 0;
                auVar27[2] = (char)(uVar53 >> 8);
                auVar27._0_2_ = (ushort)uVar53;
                auVar27._3_12_ = SUB1512(auVar41 << 0x20,3);
                auVar54._0_2_ = (ushort)uVar53 & 0xff;
                auVar54._2_13_ = auVar27._2_13_;
                auVar54[0xf] = 0;
              }
            }
            else {
              auVar54 = auVar54 >> 0x10;
            }
            uVar46 = uVar46 + uVar3;
          }
          puVar44 = *pauVar47;
          auVar50 = pmaddwd(auVar54,ZEXT416((uVar3 - uVar46) * 0x10000 | uVar46));
          *(int *)*pauVar47 = auVar50._0_4_;
          pauVar47 = (undefined1 (*) [16])(puVar44 + 4);
        } while ((undefined1 (*) [16])(puVar44 + 4) < pauVar2);
      }
    }
    return;
  }
  WebPRescalerImportRowExpand_C();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RescalerExportRowShrink_SSE2(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 *puVar20;
  undefined1 auVar21 [16];
  undefined1 uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  undefined1 (*pauVar26) [16];
  int iVar27;
  long lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long lVar31;
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulong uVar41;
  ulong uVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  
  auVar21 = __LC1;
  lVar25 = _UNK_00100968;
  lVar28 = __LC0;
  uVar3 = *(uint *)(param_1 + 0x14);
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  lVar5 = *(long *)(param_1 + 0x58);
  lVar31 = *(long *)(param_1 + 0x60);
  uVar32 = -*(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x10);
  uVar35 = (ulong)uVar3;
  iVar27 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8);
  if (uVar32 != 0) {
    uVar38 = (ulong)uVar32;
    if (iVar27 < 8) {
      iVar23 = 0;
    }
    else {
      uVar1 = (iVar27 - 8U >> 3) + 1;
      lVar24 = 0;
      do {
        puVar2 = (ulong *)(lVar31 + lVar24 * 4);
        uVar45 = *puVar2;
        uVar46 = puVar2[1];
        puVar2 = (ulong *)(lVar31 + 0x10 + lVar24 * 4);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        puVar2 = (ulong *)(lVar5 + lVar24 * 4);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (ulong *)(lVar5 + 0x10 + lVar24 * 4);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        uVar49 = (uVar45 & 0xffffffff) * uVar38 >> 0x20;
        uVar50 = (uVar46 & 0xffffffff) * (ulong)uVar32 >> 0x20;
        uVar41 = (uVar18 & 0xffffffff) * uVar38 >> 0x20;
        uVar44 = (uVar19 & 0xffffffff) * (ulong)uVar32 >> 0x20;
        uVar47 = (uVar45 >> 0x20) * uVar38 >> 0x20;
        uVar48 = (uVar46 >> 0x20) * (ulong)uVar32 >> 0x20;
        uVar45 = (uVar18 >> 0x20) * uVar38 >> 0x20;
        uVar46 = (uVar19 >> 0x20) * (ulong)uVar32 >> 0x20;
        puVar2 = (ulong *)(lVar5 + lVar24 * 4);
        *puVar2 = uVar47 << 0x20 | uVar49;
        puVar2[1] = uVar48 << 0x20 | uVar50;
        puVar2 = (ulong *)(lVar5 + 0x10 + lVar24 * 4);
        *puVar2 = uVar45 << 0x20 | uVar41;
        puVar2[1] = uVar46 << 0x20 | uVar44;
        auVar33._0_8_ = ((uVar14 >> 0x20) - uVar47 & 0xffffffff) * uVar35 + lVar28;
        auVar33._8_8_ = ((uVar15 >> 0x20) - uVar48 & 0xffffffff) * (ulong)uVar3 + lVar25;
        auVar36._0_8_ = ((uVar16 >> 0x20) - uVar45 & 0xffffffff) * uVar35 + lVar28;
        auVar36._8_8_ = ((uVar17 >> 0x20) - uVar46 & 0xffffffff) * (ulong)uVar3 + lVar25;
        auVar39._0_8_ = (uVar16 - uVar41 & 0xffffffff) * uVar35 + lVar28 >> 0x20;
        auVar39._8_8_ = (uVar17 - uVar44 & 0xffffffff) * (ulong)uVar3 + lVar25 >> 0x20;
        auVar42._0_8_ = (uVar14 - uVar49 & 0xffffffff) * uVar35 + lVar28 >> 0x20;
        auVar42._8_8_ = (uVar15 - uVar50 & 0xffffffff) * (ulong)uVar3 + lVar25 >> 0x20;
        auVar33 = packssdw(auVar33 & auVar21 | auVar42,auVar36 & auVar21 | auVar39);
        sVar6 = auVar33._0_2_;
        sVar7 = auVar33._2_2_;
        sVar8 = auVar33._4_2_;
        sVar9 = auVar33._6_2_;
        sVar10 = auVar33._8_2_;
        sVar11 = auVar33._10_2_;
        sVar12 = auVar33._12_2_;
        sVar13 = auVar33._14_2_;
        *(ulong *)((long)puVar4 + lVar24) =
             CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar33[0xe] - (0xff < sVar13),
                      CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar33[0xc] - (0xff < sVar12),
                               CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar33[10] -
                                        (0xff < sVar11),
                                        CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar33[8] -
                                                 (0xff < sVar10),
                                                 CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar33[6]
                                                          - (0xff < sVar9),
                                                          CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                   auVar33[4] - (0xff < sVar8),
                                                                   CONCAT11((0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            auVar33[2] -
                                                                            (0xff < sVar7),
                                                                            (0 < sVar6) *
                                                                            (sVar6 < 0x100) *
                                                                            auVar33[0] -
                                                                            (0xff < sVar6))))))));
        lVar24 = lVar24 + 8;
      } while (lVar24 != (ulong)uVar1 << 3);
      iVar23 = uVar1 * 8;
    }
    lVar28 = (long)iVar23;
    while (iVar23 < iVar27) {
      iVar23 = (int)((ulong)*(uint *)(lVar31 + lVar28 * 4) * (ulong)uVar32 >> 0x20);
      lVar25 = (ulong)(uint)(*(int *)(lVar5 + lVar28 * 4) - iVar23) *
               (ulong)*(uint *)(param_1 + 0x14) + 0x80000000;
      uVar22 = (undefined1)((ulong)lVar25 >> 0x20);
      if (0xff < (int)((ulong)lVar25 >> 0x20)) {
        uVar22 = 0xff;
      }
      *(undefined1 *)((long)puVar4 + lVar28) = uVar22;
      *(int *)(lVar5 + lVar28 * 4) = iVar23;
      lVar28 = lVar28 + 1;
      iVar23 = (int)lVar28;
    }
    return;
  }
  if (iVar27 < 8) {
    iVar23 = 0;
  }
  else {
    pauVar26 = (undefined1 (*) [16])(lVar5 + 0x10);
    uVar32 = iVar27 - 8U >> 3;
    puVar29 = puVar4;
    do {
      uVar38 = *(ulong *)pauVar26[-1];
      uVar14 = *(ulong *)(pauVar26[-1] + 8);
      puVar20 = *pauVar26;
      uVar15 = *(ulong *)(*pauVar26 + 8);
      pauVar26[-1] = (undefined1  [16])0x0;
      puVar30 = puVar29 + 1;
      *pauVar26 = (undefined1  [16])0x0;
      pauVar26 = pauVar26 + 2;
      auVar43._0_8_ = (uVar38 & 0xffffffff) * uVar35 + lVar28 >> 0x20;
      auVar43._8_8_ = (uVar14 & 0xffffffff) * (ulong)uVar3 + lVar25 >> 0x20;
      auVar34._0_8_ = (uVar38 >> 0x20) * uVar35 + lVar28;
      auVar34._8_8_ = (uVar14 >> 0x20) * (ulong)uVar3 + lVar25;
      auVar37._0_8_ = (*(ulong *)puVar20 >> 0x20) * uVar35 + lVar28;
      auVar37._8_8_ = (uVar15 >> 0x20) * (ulong)uVar3 + lVar25;
      auVar40._0_8_ = (*(ulong *)puVar20 & 0xffffffff) * uVar35 + lVar28 >> 0x20;
      auVar40._8_8_ = (uVar15 & 0xffffffff) * (ulong)uVar3 + lVar25 >> 0x20;
      auVar33 = packssdw(auVar34 & auVar21 | auVar43,auVar37 & auVar21 | auVar40);
      sVar6 = auVar33._0_2_;
      sVar7 = auVar33._2_2_;
      sVar8 = auVar33._4_2_;
      sVar9 = auVar33._6_2_;
      sVar10 = auVar33._8_2_;
      sVar11 = auVar33._10_2_;
      sVar12 = auVar33._12_2_;
      sVar13 = auVar33._14_2_;
      *puVar29 = CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar33[0xe] - (0xff < sVar13),
                          CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar33[0xc] - (0xff < sVar12),
                                   CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar33[10] -
                                            (0xff < sVar11),
                                            CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar33[8] -
                                                     (0xff < sVar10),
                                                     CONCAT13((0 < sVar9) * (sVar9 < 0x100) *
                                                              auVar33[6] - (0xff < sVar9),
                                                              CONCAT12((0 < sVar8) * (sVar8 < 0x100)
                                                                       * auVar33[4] - (0xff < sVar8)
                                                                       ,CONCAT11((0 < sVar7) *
                                                                                 (sVar7 < 0x100) *
                                                                                 auVar33[2] -
                                                                                 (0xff < sVar7),
                                                                                 (0 < sVar6) *
                                                                                 (sVar6 < 0x100) *
                                                                                 auVar33[0] -
                                                                                 (0xff < sVar6))))))
                                  ));
      puVar29 = puVar30;
    } while ((undefined8 *)((long)puVar4 + (ulong)(uVar32 * 8) + 8) != puVar30);
    iVar23 = uVar32 * 8 + 8;
  }
  if (iVar23 < iVar27) {
    lVar31 = (long)iVar23;
    do {
      lVar28 = (ulong)*(uint *)(lVar5 + lVar31 * 4) * (ulong)uVar3 + 0x80000000;
      uVar22 = (undefined1)((ulong)lVar28 >> 0x20);
      if (0xff < (int)((ulong)lVar28 >> 0x20)) {
        uVar22 = 0xff;
      }
      *(undefined1 *)((long)puVar4 + lVar31) = uVar22;
      *(undefined4 *)(lVar5 + lVar31 * 4) = 0;
      lVar31 = lVar31 + 1;
    } while ((int)lVar31 < iVar27);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RescalerExportRowExpand_SSE2(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  int iVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulong uVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  ulong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  auVar22 = __LC1;
  lVar29 = _UNK_00100968;
  lVar27 = __LC0;
  uVar3 = *(uint *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x48);
  iVar31 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 8);
  lVar26 = *(long *)(param_1 + 0x58);
  uVar35 = (ulong)uVar3;
  lVar5 = *(long *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x18) != 0) {
    auVar33._8_8_ = 0;
    auVar33._0_8_ = (long)*(int *)(param_1 + 0x20);
    uVar25 = SUB164((ZEXT416((uint)-*(int *)(param_1 + 0x18)) << 0x20) / auVar33,0);
    uVar30 = -uVar25;
    uVar38 = (ulong)uVar25;
    uVar36 = (ulong)uVar30;
    if (iVar31 < 8) {
      iVar24 = 0;
    }
    else {
      lVar28 = 0;
      uVar1 = (iVar31 - 8U >> 3) + 1;
      do {
        puVar2 = (ulong *)(lVar5 + lVar28 * 4);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        puVar2 = (ulong *)(lVar5 + 0x10 + lVar28 * 4);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        puVar2 = (ulong *)(lVar26 + lVar28 * 4);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        puVar2 = (ulong *)(lVar26 + 0x10 + lVar28 * 4);
        uVar20 = *puVar2;
        uVar21 = puVar2[1];
        auVar34._0_8_ =
             ((uVar14 >> 0x20) * uVar36 + (uVar18 >> 0x20) * uVar38 + lVar27 >> 0x20) * uVar35 +
             lVar27;
        auVar34._8_8_ =
             ((uVar15 >> 0x20) * (ulong)uVar30 + (uVar19 >> 0x20) * (ulong)uVar25 + lVar29 >> 0x20)
             * (ulong)uVar3 + lVar29;
        auVar43._0_8_ =
             ((uVar14 & 0xffffffff) * uVar36 + (uVar18 & 0xffffffff) * uVar38 + lVar27 >> 0x20) *
             uVar35 + lVar27 >> 0x20;
        auVar43._8_8_ =
             ((uVar15 & 0xffffffff) * (ulong)uVar30 + (uVar19 & 0xffffffff) * (ulong)uVar25 + lVar29
             >> 0x20) * (ulong)uVar3 + lVar29 >> 0x20;
        auVar41._0_8_ =
             ((uVar16 >> 0x20) * uVar36 + (uVar20 >> 0x20) * uVar38 + lVar27 >> 0x20) * uVar35 +
             lVar27;
        auVar41._8_8_ =
             ((uVar17 >> 0x20) * (ulong)uVar30 + (uVar21 >> 0x20) * (ulong)uVar25 + lVar29 >> 0x20)
             * (ulong)uVar3 + lVar29;
        auVar42._0_8_ =
             ((uVar16 & 0xffffffff) * uVar36 + (uVar20 & 0xffffffff) * uVar38 + lVar27 >> 0x20) *
             uVar35 + lVar27 >> 0x20;
        auVar42._8_8_ =
             ((uVar17 & 0xffffffff) * (ulong)uVar30 + (uVar21 & 0xffffffff) * (ulong)uVar25 + lVar29
             >> 0x20) * (ulong)uVar3 + lVar29 >> 0x20;
        auVar33 = packssdw(auVar34 & auVar22 | auVar43,auVar41 & auVar22 | auVar42);
        sVar6 = auVar33._0_2_;
        sVar7 = auVar33._2_2_;
        sVar8 = auVar33._4_2_;
        sVar9 = auVar33._6_2_;
        sVar10 = auVar33._8_2_;
        sVar11 = auVar33._10_2_;
        sVar12 = auVar33._12_2_;
        sVar13 = auVar33._14_2_;
        *(ulong *)(lVar4 + lVar28) =
             CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar33[0xe] - (0xff < sVar13),
                      CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar33[0xc] - (0xff < sVar12),
                               CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar33[10] -
                                        (0xff < sVar11),
                                        CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar33[8] -
                                                 (0xff < sVar10),
                                                 CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar33[6]
                                                          - (0xff < sVar9),
                                                          CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                   auVar33[4] - (0xff < sVar8),
                                                                   CONCAT11((0 < sVar7) *
                                                                            (sVar7 < 0x100) *
                                                                            auVar33[2] -
                                                                            (0xff < sVar7),
                                                                            (0 < sVar6) *
                                                                            (sVar6 < 0x100) *
                                                                            auVar33[0] -
                                                                            (0xff < sVar6))))))));
        lVar28 = lVar28 + 8;
      } while (lVar28 != (ulong)uVar1 << 3);
      iVar24 = uVar1 * 8;
    }
    if (iVar24 < iVar31) {
      lVar27 = (long)iVar24;
      do {
        lVar29 = ((ulong)*(uint *)(lVar26 + lVar27 * 4) * (ulong)uVar25 +
                  (ulong)*(uint *)(lVar5 + lVar27 * 4) * (ulong)uVar30 + 0x80000000 >> 0x20) *
                 (ulong)*(uint *)(param_1 + 0x10) + 0x80000000;
        uVar23 = (undefined1)((ulong)lVar29 >> 0x20);
        if (0xff < (int)((ulong)lVar29 >> 0x20)) {
          uVar23 = 0xff;
        }
        *(undefined1 *)(lVar4 + lVar27) = uVar23;
        lVar27 = lVar27 + 1;
      } while ((int)lVar27 < iVar31);
    }
    return;
  }
  iVar24 = 0;
  if (7 < iVar31) {
    uVar25 = (iVar31 - 8U >> 3) + 1;
    lVar26 = 0;
    do {
      puVar2 = (ulong *)(lVar5 + lVar26 * 4);
      uVar36 = *puVar2;
      uVar38 = puVar2[1];
      puVar2 = (ulong *)(lVar5 + 0x10 + lVar26 * 4);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      auVar40._0_8_ = (uVar36 & 0xffffffff) * uVar35 + lVar27 >> 0x20;
      auVar40._8_8_ = (uVar38 & 0xffffffff) * (ulong)uVar3 + lVar29 >> 0x20;
      auVar32._0_8_ = (uVar36 >> 0x20) * uVar35 + lVar27;
      auVar32._8_8_ = (uVar38 >> 0x20) * (ulong)uVar3 + lVar29;
      auVar37._0_8_ = (uVar14 >> 0x20) * uVar35 + lVar27;
      auVar37._8_8_ = (uVar15 >> 0x20) * (ulong)uVar3 + lVar29;
      auVar39._0_8_ = (uVar14 & 0xffffffff) * uVar35 + lVar27 >> 0x20;
      auVar39._8_8_ = (uVar15 & 0xffffffff) * (ulong)uVar3 + lVar29 >> 0x20;
      auVar33 = packssdw(auVar32 & auVar22 | auVar40,auVar37 & auVar22 | auVar39);
      sVar6 = auVar33._0_2_;
      sVar7 = auVar33._2_2_;
      sVar8 = auVar33._4_2_;
      sVar9 = auVar33._6_2_;
      sVar10 = auVar33._8_2_;
      sVar11 = auVar33._10_2_;
      sVar12 = auVar33._12_2_;
      sVar13 = auVar33._14_2_;
      *(ulong *)(lVar4 + lVar26) =
           CONCAT17((0 < sVar13) * (sVar13 < 0x100) * auVar33[0xe] - (0xff < sVar13),
                    CONCAT16((0 < sVar12) * (sVar12 < 0x100) * auVar33[0xc] - (0xff < sVar12),
                             CONCAT15((0 < sVar11) * (sVar11 < 0x100) * auVar33[10] -
                                      (0xff < sVar11),
                                      CONCAT14((0 < sVar10) * (sVar10 < 0x100) * auVar33[8] -
                                               (0xff < sVar10),
                                               CONCAT13((0 < sVar9) * (sVar9 < 0x100) * auVar33[6] -
                                                        (0xff < sVar9),
                                                        CONCAT12((0 < sVar8) * (sVar8 < 0x100) *
                                                                 auVar33[4] - (0xff < sVar8),
                                                                 CONCAT11((0 < sVar7) *
                                                                          (sVar7 < 0x100) *
                                                                          auVar33[2] -
                                                                          (0xff < sVar7),
                                                                          (0 < sVar6) *
                                                                          (sVar6 < 0x100) *
                                                                          auVar33[0] -
                                                                          (0xff < sVar6))))))));
      lVar26 = lVar26 + 8;
    } while (lVar26 != (ulong)uVar25 << 3);
    iVar24 = uVar25 * 8;
  }
  lVar26 = (long)iVar24;
  if (iVar24 < iVar31) {
    do {
      lVar27 = (ulong)*(uint *)(param_1 + 0x10) * (ulong)*(uint *)(lVar5 + lVar26 * 4) + 0x80000000;
      uVar23 = (undefined1)((ulong)lVar27 >> 0x20);
      if (0xff < (int)((ulong)lVar27 >> 0x20)) {
        uVar23 = 0xff;
      }
      *(undefined1 *)(lVar4 + lVar26) = uVar23;
      lVar26 = lVar26 + 1;
    } while ((int)lVar26 < iVar31);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void WebPRescalerDspInitSSE2(void)

{
  _WebPRescalerImportRowExpand = RescalerImportRowExpand_SSE2;
  _WebPRescalerImportRowShrink = 0x100000;
  _WebPRescalerExportRowExpand = RescalerExportRowExpand_SSE2;
  _WebPRescalerExportRowShrink = RescalerExportRowShrink_SSE2;
  return;
}



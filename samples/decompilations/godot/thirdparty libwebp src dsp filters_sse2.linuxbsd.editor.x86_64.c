
void PredictLineLeft_SSE2(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  long lVar66;
  uint uVar67;
  
  uVar67 = param_3 & 0xffffffe0;
  if ((int)uVar67 < 1) {
    uVar67 = 0;
  }
  else {
    lVar66 = 0;
    do {
      pcVar2 = (char *)(param_1 + 0x10 + lVar66);
      cVar4 = pcVar2[1];
      cVar5 = pcVar2[2];
      cVar6 = pcVar2[3];
      cVar7 = pcVar2[4];
      cVar8 = pcVar2[5];
      cVar9 = pcVar2[6];
      cVar10 = pcVar2[7];
      cVar11 = pcVar2[8];
      cVar12 = pcVar2[9];
      cVar13 = pcVar2[10];
      cVar14 = pcVar2[0xb];
      cVar15 = pcVar2[0xc];
      cVar16 = pcVar2[0xd];
      cVar17 = pcVar2[0xe];
      cVar18 = pcVar2[0xf];
      pcVar3 = (char *)(param_1 + 0xf + lVar66);
      cVar19 = pcVar3[1];
      cVar20 = pcVar3[2];
      cVar21 = pcVar3[3];
      cVar22 = pcVar3[4];
      cVar23 = pcVar3[5];
      cVar24 = pcVar3[6];
      cVar25 = pcVar3[7];
      cVar26 = pcVar3[8];
      cVar27 = pcVar3[9];
      cVar28 = pcVar3[10];
      cVar29 = pcVar3[0xb];
      cVar30 = pcVar3[0xc];
      cVar31 = pcVar3[0xd];
      cVar32 = pcVar3[0xe];
      cVar33 = pcVar3[0xf];
      pcVar1 = (char *)(param_1 + lVar66);
      cVar34 = *pcVar1;
      cVar35 = pcVar1[1];
      cVar36 = pcVar1[2];
      cVar37 = pcVar1[3];
      cVar38 = pcVar1[4];
      cVar39 = pcVar1[5];
      cVar40 = pcVar1[6];
      cVar41 = pcVar1[7];
      cVar42 = pcVar1[8];
      cVar43 = pcVar1[9];
      cVar44 = pcVar1[10];
      cVar45 = pcVar1[0xb];
      cVar46 = pcVar1[0xc];
      cVar47 = pcVar1[0xd];
      cVar48 = pcVar1[0xe];
      cVar49 = pcVar1[0xf];
      pcVar1 = (char *)(param_1 + -1 + lVar66);
      cVar50 = *pcVar1;
      cVar51 = pcVar1[1];
      cVar52 = pcVar1[2];
      cVar53 = pcVar1[3];
      cVar54 = pcVar1[4];
      cVar55 = pcVar1[5];
      cVar56 = pcVar1[6];
      cVar57 = pcVar1[7];
      cVar58 = pcVar1[8];
      cVar59 = pcVar1[9];
      cVar60 = pcVar1[10];
      cVar61 = pcVar1[0xb];
      cVar62 = pcVar1[0xc];
      cVar63 = pcVar1[0xd];
      cVar64 = pcVar1[0xe];
      cVar65 = pcVar1[0xf];
      pcVar1 = (char *)(param_2 + 0x10 + lVar66);
      *pcVar1 = *pcVar2 - *pcVar3;
      pcVar1[1] = cVar4 - cVar19;
      pcVar1[2] = cVar5 - cVar20;
      pcVar1[3] = cVar6 - cVar21;
      pcVar1[4] = cVar7 - cVar22;
      pcVar1[5] = cVar8 - cVar23;
      pcVar1[6] = cVar9 - cVar24;
      pcVar1[7] = cVar10 - cVar25;
      pcVar1[8] = cVar11 - cVar26;
      pcVar1[9] = cVar12 - cVar27;
      pcVar1[10] = cVar13 - cVar28;
      pcVar1[0xb] = cVar14 - cVar29;
      pcVar1[0xc] = cVar15 - cVar30;
      pcVar1[0xd] = cVar16 - cVar31;
      pcVar1[0xe] = cVar17 - cVar32;
      pcVar1[0xf] = cVar18 - cVar33;
      pcVar1 = (char *)(param_2 + lVar66);
      *pcVar1 = cVar34 - cVar50;
      pcVar1[1] = cVar35 - cVar51;
      pcVar1[2] = cVar36 - cVar52;
      pcVar1[3] = cVar37 - cVar53;
      pcVar1[4] = cVar38 - cVar54;
      pcVar1[5] = cVar39 - cVar55;
      pcVar1[6] = cVar40 - cVar56;
      pcVar1[7] = cVar41 - cVar57;
      pcVar1[8] = cVar42 - cVar58;
      pcVar1[9] = cVar43 - cVar59;
      pcVar1[10] = cVar44 - cVar60;
      pcVar1[0xb] = cVar45 - cVar61;
      pcVar1[0xc] = cVar46 - cVar62;
      pcVar1[0xd] = cVar47 - cVar63;
      pcVar1[0xe] = cVar48 - cVar64;
      pcVar1[0xf] = cVar49 - cVar65;
      lVar66 = lVar66 + 0x20;
    } while ((int)lVar66 < (int)uVar67);
  }
  if ((int)uVar67 < (int)param_3) {
    lVar66 = (long)(int)uVar67;
    do {
      *(char *)(param_2 + lVar66) = *(char *)(param_1 + lVar66) - *(char *)(param_1 + -1 + lVar66);
      lVar66 = lVar66 + 1;
    } while ((int)lVar66 < (int)param_3);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001000e8) */
/* WARNING: Removing unreachable block (ram,0x001000ce) */
/* WARNING: Removing unreachable block (ram,0x001000db) */

void HorizontalUnfilter_SSE2(char *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  
  cVar3 = *param_2;
  if (param_1 != (char *)0x0) {
    cVar3 = cVar3 + *param_1;
  }
  *param_3 = cVar3;
  if (1 < param_4) {
    if (param_4 < 9) {
      iVar4 = 1;
    }
    else {
      lVar5 = 1;
      uVar6 = param_4 - 9U >> 3;
      do {
        uVar2 = *(undefined8 *)(param_2 + lVar5);
        cVar7 = (char)uVar2 + cVar3;
        cVar9 = (char)((ulong)uVar2 >> 8);
        cVar11 = (char)((ulong)uVar2 >> 0x10);
        cVar13 = (char)((ulong)uVar2 >> 0x18);
        cVar15 = (char)((ulong)uVar2 >> 0x20);
        cVar14 = (char)((ulong)uVar2 >> 0x28);
        cVar16 = (char)((ulong)uVar2 >> 0x30);
        cVar8 = cVar9 + cVar7;
        cVar9 = cVar11 + cVar9;
        cVar11 = cVar13 + cVar11;
        cVar13 = cVar15 + cVar13;
        cVar15 = cVar14 + cVar15;
        cVar10 = cVar9 + cVar7;
        cVar12 = cVar11 + cVar8;
        cVar3 = (char)((ulong)uVar2 >> 0x38) + cVar16 + cVar15 + cVar12;
        pcVar1 = param_3 + lVar5;
        *pcVar1 = cVar7;
        pcVar1[1] = cVar8;
        pcVar1[2] = cVar10;
        pcVar1[3] = cVar12;
        pcVar1[4] = cVar13 + cVar9 + cVar7;
        pcVar1[5] = cVar15 + cVar11 + cVar8;
        pcVar1[6] = cVar16 + cVar14 + cVar13 + cVar10;
        pcVar1[7] = cVar3;
        lVar5 = lVar5 + 8;
      } while ((ulong)(uVar6 * 8) + 9 != lVar5);
      iVar4 = uVar6 * 8 + 9;
      if (param_4 <= iVar4) {
        return;
      }
    }
    lVar5 = (long)iVar4;
    cVar3 = param_3[lVar5 + -1];
    do {
      cVar3 = cVar3 + param_2[lVar5];
      param_3[lVar5] = cVar3;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < param_4);
  }
  return;
}



void VerticalUnfilter_SSE2(long param_1,long param_2,long param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  long lVar66;
  uint uVar67;
  
  if (param_1 != 0) {
    uVar67 = param_4 & 0xffffffe0;
    if ((int)uVar67 < 1) {
      uVar67 = 0;
    }
    else {
      lVar66 = 0;
      do {
        pcVar2 = (char *)(param_1 + 0x10 + lVar66);
        cVar4 = pcVar2[1];
        cVar5 = pcVar2[2];
        cVar6 = pcVar2[3];
        cVar7 = pcVar2[4];
        cVar8 = pcVar2[5];
        cVar9 = pcVar2[6];
        cVar10 = pcVar2[7];
        cVar11 = pcVar2[8];
        cVar12 = pcVar2[9];
        cVar13 = pcVar2[10];
        cVar14 = pcVar2[0xb];
        cVar15 = pcVar2[0xc];
        cVar16 = pcVar2[0xd];
        cVar17 = pcVar2[0xe];
        cVar18 = pcVar2[0xf];
        pcVar3 = (char *)(param_2 + 0x10 + lVar66);
        cVar19 = pcVar3[1];
        cVar20 = pcVar3[2];
        cVar21 = pcVar3[3];
        cVar22 = pcVar3[4];
        cVar23 = pcVar3[5];
        cVar24 = pcVar3[6];
        cVar25 = pcVar3[7];
        cVar26 = pcVar3[8];
        cVar27 = pcVar3[9];
        cVar28 = pcVar3[10];
        cVar29 = pcVar3[0xb];
        cVar30 = pcVar3[0xc];
        cVar31 = pcVar3[0xd];
        cVar32 = pcVar3[0xe];
        cVar33 = pcVar3[0xf];
        pcVar1 = (char *)(param_1 + lVar66);
        cVar34 = *pcVar1;
        cVar35 = pcVar1[1];
        cVar36 = pcVar1[2];
        cVar37 = pcVar1[3];
        cVar38 = pcVar1[4];
        cVar39 = pcVar1[5];
        cVar40 = pcVar1[6];
        cVar41 = pcVar1[7];
        cVar42 = pcVar1[8];
        cVar43 = pcVar1[9];
        cVar44 = pcVar1[10];
        cVar45 = pcVar1[0xb];
        cVar46 = pcVar1[0xc];
        cVar47 = pcVar1[0xd];
        cVar48 = pcVar1[0xe];
        cVar49 = pcVar1[0xf];
        pcVar1 = (char *)(param_2 + lVar66);
        cVar50 = *pcVar1;
        cVar51 = pcVar1[1];
        cVar52 = pcVar1[2];
        cVar53 = pcVar1[3];
        cVar54 = pcVar1[4];
        cVar55 = pcVar1[5];
        cVar56 = pcVar1[6];
        cVar57 = pcVar1[7];
        cVar58 = pcVar1[8];
        cVar59 = pcVar1[9];
        cVar60 = pcVar1[10];
        cVar61 = pcVar1[0xb];
        cVar62 = pcVar1[0xc];
        cVar63 = pcVar1[0xd];
        cVar64 = pcVar1[0xe];
        cVar65 = pcVar1[0xf];
        pcVar1 = (char *)(param_3 + 0x10 + lVar66);
        *pcVar1 = *pcVar2 + *pcVar3;
        pcVar1[1] = cVar4 + cVar19;
        pcVar1[2] = cVar5 + cVar20;
        pcVar1[3] = cVar6 + cVar21;
        pcVar1[4] = cVar7 + cVar22;
        pcVar1[5] = cVar8 + cVar23;
        pcVar1[6] = cVar9 + cVar24;
        pcVar1[7] = cVar10 + cVar25;
        pcVar1[8] = cVar11 + cVar26;
        pcVar1[9] = cVar12 + cVar27;
        pcVar1[10] = cVar13 + cVar28;
        pcVar1[0xb] = cVar14 + cVar29;
        pcVar1[0xc] = cVar15 + cVar30;
        pcVar1[0xd] = cVar16 + cVar31;
        pcVar1[0xe] = cVar17 + cVar32;
        pcVar1[0xf] = cVar18 + cVar33;
        pcVar1 = (char *)(param_3 + lVar66);
        *pcVar1 = cVar34 + cVar50;
        pcVar1[1] = cVar35 + cVar51;
        pcVar1[2] = cVar36 + cVar52;
        pcVar1[3] = cVar37 + cVar53;
        pcVar1[4] = cVar38 + cVar54;
        pcVar1[5] = cVar39 + cVar55;
        pcVar1[6] = cVar40 + cVar56;
        pcVar1[7] = cVar41 + cVar57;
        pcVar1[8] = cVar42 + cVar58;
        pcVar1[9] = cVar43 + cVar59;
        pcVar1[10] = cVar44 + cVar60;
        pcVar1[0xb] = cVar45 + cVar61;
        pcVar1[0xc] = cVar46 + cVar62;
        pcVar1[0xd] = cVar47 + cVar63;
        pcVar1[0xe] = cVar48 + cVar64;
        pcVar1[0xf] = cVar49 + cVar65;
        lVar66 = lVar66 + 0x20;
      } while ((int)lVar66 < (int)uVar67);
    }
    if ((int)uVar67 < (int)param_4) {
      lVar66 = (long)(int)uVar67;
      do {
        *(char *)(param_3 + lVar66) = *(char *)(param_1 + lVar66) + *(char *)(param_2 + lVar66);
        lVar66 = lVar66 + 1;
      } while ((int)lVar66 < (int)param_4);
    }
    return;
  }
  HorizontalUnfilter_SSE2(0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100275) */
/* WARNING: Removing unreachable block (ram,0x00100268) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GradientUnfilter_SSE2(char *param_1,char *param_2,byte *param_3,int param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
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
  unkuint9 Var23;
  undefined1 auVar24 [11];
  undefined1 auVar25 [13];
  undefined1 auVar26 [15];
  unkuint9 Var27;
  undefined1 auVar28 [11];
  undefined1 auVar29 [15];
  undefined1 auVar30 [11];
  undefined1 auVar31 [13];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [16];
  byte bVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  short sVar44;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  undefined1 auVar45 [16];
  short sVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  undefined1 auVar56 [16];
  undefined1 auVar65 [16];
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  ulong uVar55;
  long lVar64;
  
  if (param_1 == (char *)0x0) {
    HorizontalUnfilter_SSE2();
    return;
  }
  cVar58 = *param_1;
  uVar42 = param_4 - 1;
  cVar57 = *param_2;
  *param_3 = cVar58 + cVar57;
  auVar38 = __LC0;
  if (0 < (int)uVar42) {
    auVar45 = ZEXT116((byte)(cVar58 + cVar57));
    uVar41 = uVar42 & 0xfffffff8;
    if (uVar41 != 0) {
      lVar43 = 0;
      do {
        uVar55 = *(ulong *)(param_1 + lVar43 + 1);
        uVar1 = *(ulong *)(param_1 + lVar43);
        iVar40 = 7;
        auVar5._8_6_ = 0;
        auVar5._0_8_ = uVar1;
        auVar5[0xe] = (char)(uVar1 >> 0x38);
        auVar8._8_4_ = 0;
        auVar8._0_8_ = uVar1;
        auVar8[0xc] = (char)(uVar1 >> 0x30);
        auVar8._13_2_ = auVar5._13_2_;
        auVar11._8_4_ = 0;
        auVar11._0_8_ = uVar1;
        auVar11._12_3_ = auVar8._12_3_;
        auVar14._8_2_ = 0;
        auVar14._0_8_ = uVar1;
        auVar14[10] = (char)(uVar1 >> 0x28);
        auVar14._11_4_ = auVar11._11_4_;
        auVar17._8_2_ = 0;
        auVar17._0_8_ = uVar1;
        auVar17._10_5_ = auVar14._10_5_;
        auVar20[8] = (char)(uVar1 >> 0x20);
        auVar20._0_8_ = uVar1;
        auVar20._9_6_ = auVar17._9_6_;
        auVar22._7_8_ = 0;
        auVar22._0_7_ = auVar20._8_7_;
        Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar1 >> 0x18));
        auVar32._9_6_ = 0;
        auVar32._0_9_ = Var23;
        auVar24._1_10_ = SUB1510(auVar32 << 0x30,5);
        auVar24[0] = (char)(uVar1 >> 0x10);
        auVar33._11_4_ = 0;
        auVar33._0_11_ = auVar24;
        auVar25._1_12_ = SUB1512(auVar33 << 0x20,3);
        auVar25[0] = (char)(uVar1 >> 8);
        auVar3._8_6_ = 0;
        auVar3._0_8_ = uVar55;
        auVar3[0xe] = (char)(uVar55 >> 0x38);
        auVar6._8_4_ = 0;
        auVar6._0_8_ = uVar55;
        auVar6[0xc] = (char)(uVar55 >> 0x30);
        auVar6._13_2_ = auVar3._13_2_;
        auVar9._8_4_ = 0;
        auVar9._0_8_ = uVar55;
        auVar9._12_3_ = auVar6._12_3_;
        auVar12._8_2_ = 0;
        auVar12._0_8_ = uVar55;
        auVar12[10] = (char)(uVar55 >> 0x28);
        auVar12._11_4_ = auVar9._11_4_;
        auVar15._8_2_ = 0;
        auVar15._0_8_ = uVar55;
        auVar15._10_5_ = auVar12._10_5_;
        auVar18[8] = (char)(uVar55 >> 0x20);
        auVar18._0_8_ = uVar55;
        auVar18._9_6_ = auVar15._9_6_;
        auVar26._7_8_ = 0;
        auVar26._0_7_ = auVar18._8_7_;
        Var27 = CONCAT81(SUB158(auVar26 << 0x40,7),(char)(uVar55 >> 0x18));
        auVar34._9_6_ = 0;
        auVar34._0_9_ = Var27;
        auVar28._1_10_ = SUB1510(auVar34 << 0x30,5);
        auVar28[0] = (char)(uVar55 >> 0x10);
        auVar35._11_4_ = 0;
        auVar35._0_11_ = auVar28;
        auVar21[2] = (char)(uVar55 >> 8);
        auVar21._0_2_ = (ushort)uVar55;
        auVar21._3_12_ = SUB1512(auVar35 << 0x20,3);
        sVar66 = ((ushort)uVar55 & 0xff) - (ushort)(byte)uVar1;
        sVar67 = auVar21._2_2_ - auVar25._0_2_;
        sVar68 = auVar28._0_2_ - auVar24._0_2_;
        sVar69 = (short)Var27 - (short)Var23;
        sVar70 = auVar18._8_2_ - auVar20._8_2_;
        sVar71 = auVar12._10_2_ - auVar14._10_2_;
        sVar72 = auVar6._12_2_ - auVar8._12_2_;
        sVar73 = (auVar3._13_2_ >> 8) - (auVar5._13_2_ >> 8);
        uVar2 = *(undefined8 *)(param_2 + lVar43 + 1);
        sVar44 = auVar45._0_2_ + sVar66;
        sVar48 = auVar45._2_2_ + sVar67;
        sVar49 = auVar45._4_2_ + sVar68;
        sVar50 = auVar45._6_2_ + sVar69;
        sVar51 = auVar45._8_2_ + sVar70;
        sVar52 = auVar45._10_2_ + sVar71;
        sVar53 = auVar45._12_2_ + sVar72;
        sVar54 = auVar45._14_2_ + sVar73;
        auVar45[0] = ((0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44)) +
                     (char)uVar2;
        cVar57 = (char)((ulong)uVar2 >> 8);
        auVar45[1] = ((0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 - (0xff < sVar48)) + cVar57;
        cVar58 = (char)((ulong)uVar2 >> 0x10);
        auVar45[2] = ((0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49)) + cVar58;
        cVar59 = (char)((ulong)uVar2 >> 0x18);
        auVar45[3] = ((0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50)) + cVar59;
        cVar60 = (char)((ulong)uVar2 >> 0x20);
        auVar45[4] = ((0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51)) + cVar60;
        cVar61 = (char)((ulong)uVar2 >> 0x28);
        auVar45[5] = ((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52)) + cVar61;
        cVar62 = (char)((ulong)uVar2 >> 0x30);
        auVar45[6] = ((0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53)) + cVar62;
        cVar63 = (char)((ulong)uVar2 >> 0x38);
        auVar45[7] = ((0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54)) + cVar63;
        auVar45._8_8_ = 0;
        auVar45 = auVar45 & auVar38;
        auVar65 = auVar45;
        auVar56 = auVar38;
        do {
          auVar46._0_8_ = auVar45._0_8_ << 8;
          auVar46._8_8_ = auVar45._8_8_ << 8 | auVar45._0_8_ >> 0x38;
          auVar4[0xd] = 0;
          auVar4._0_13_ = auVar46._0_13_;
          auVar4[0xe] = auVar45[6];
          auVar7[0xc] = auVar45[5];
          auVar7._0_12_ = auVar46._0_12_;
          auVar7._13_2_ = auVar4._13_2_;
          auVar10[0xb] = 0;
          auVar10._0_11_ = auVar46._0_11_;
          auVar10._12_3_ = auVar7._12_3_;
          auVar13[10] = auVar45[4];
          auVar13._0_10_ = auVar46._0_10_;
          auVar13._11_4_ = auVar10._11_4_;
          auVar16[9] = 0;
          auVar16._0_9_ = auVar46._0_9_;
          auVar16._10_5_ = auVar13._10_5_;
          auVar19[8] = auVar45[3];
          auVar19._0_8_ = auVar46._0_8_;
          auVar19._9_6_ = auVar16._9_6_;
          auVar29._7_8_ = 0;
          auVar29._0_7_ = auVar19._8_7_;
          Var23 = CONCAT81(SUB158(auVar29 << 0x40,7),auVar45[2]);
          auVar36._9_6_ = 0;
          auVar36._0_9_ = Var23;
          auVar30._1_10_ = SUB1510(auVar36 << 0x30,5);
          auVar30[0] = auVar45[1];
          auVar37._11_4_ = 0;
          auVar37._0_11_ = auVar30;
          auVar31._1_12_ = SUB1512(auVar37 << 0x20,3);
          auVar31[0] = auVar45[0];
          lVar64 = auVar56._8_8_;
          uVar55 = auVar56._0_8_;
          auVar56._0_8_ = uVar55 << 8;
          auVar56._8_8_ = lVar64 << 8 | uVar55 >> 0x38;
          sVar44 = auVar31._0_2_ + sVar67;
          sVar48 = auVar30._0_2_ + sVar68;
          sVar49 = (short)Var23 + sVar69;
          sVar50 = auVar19._8_2_ + sVar70;
          sVar51 = auVar13._10_2_ + sVar71;
          sVar52 = auVar7._12_2_ + sVar72;
          sVar53 = (auVar4._13_2_ >> 8) + sVar73;
          auVar47[0] = ((0 < sVar66) * (sVar66 < 0x100) * (char)sVar66 - (0xff < sVar66)) +
                       (char)uVar2;
          auVar47[1] = ((0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44)) + cVar57;
          auVar47[2] = ((0 < sVar48) * (sVar48 < 0x100) * (char)sVar48 - (0xff < sVar48)) + cVar58;
          auVar47[3] = ((0 < sVar49) * (sVar49 < 0x100) * (char)sVar49 - (0xff < sVar49)) + cVar59;
          auVar47[4] = ((0 < sVar50) * (sVar50 < 0x100) * (char)sVar50 - (0xff < sVar50)) + cVar60;
          auVar47[5] = ((0 < sVar51) * (sVar51 < 0x100) * (char)sVar51 - (0xff < sVar51)) + cVar61;
          auVar47[6] = ((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 - (0xff < sVar52)) + cVar62;
          auVar47[7] = ((0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 - (0xff < sVar53)) + cVar63;
          auVar47._8_8_ = 0;
          auVar45 = auVar47 & auVar56;
          auVar65 = auVar65 | auVar45;
          iVar40 = iVar40 + -1;
        } while (iVar40 != 0);
        *(long *)(param_3 + lVar43 + 1) = auVar65._0_8_;
        lVar43 = lVar43 + 8;
        auVar45 = auVar45 >> 0x38;
      } while ((int)lVar43 < (int)uVar41);
      if ((int)uVar42 <= (int)uVar41) {
        return;
      }
    }
    lVar43 = (long)(int)uVar41;
    bVar39 = param_3[lVar43];
    do {
      uVar41 = ((uint)bVar39 + (uint)(byte)param_1[lVar43 + 1]) - (uint)(byte)param_1[lVar43];
      if (0xff < uVar41) {
        uVar41 = (int)~uVar41 >> 0x1f;
      }
      bVar39 = (char)uVar41 + param_2[lVar43 + 1];
      param_3[lVar43 + 1] = bVar39;
      lVar43 = lVar43 + 1;
    } while ((int)lVar43 < (int)uVar42);
  }
  return;
}



void GradientFilter_SSE2(char *param_1,int param_2,int param_3,int param_4,char *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
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
  unkuint9 Var26;
  undefined1 auVar27 [11];
  undefined1 auVar28 [13];
  undefined1 auVar29 [15];
  unkuint9 Var30;
  undefined1 auVar31 [11];
  undefined1 auVar32 [15];
  unkuint9 Var33;
  undefined1 auVar34 [11];
  undefined1 auVar35 [13];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  uint uVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  
  uVar46 = param_2 - 1;
  lVar44 = (long)param_4;
  *param_5 = *param_1;
  PredictLineLeft_SSE2(param_1 + 1,param_5 + 1,uVar46);
  if (1 < param_3) {
    uVar45 = uVar46 & 0xfffffff8;
    lVar5 = -lVar44;
    iVar47 = 1;
    do {
      param_5 = param_5 + lVar44;
      param_1 = param_1 + lVar44;
      *param_5 = *param_1 - param_1[-param_4];
      if ((int)uVar45 < 1) {
        uVar42 = 0;
      }
      else {
        lVar43 = 0;
        do {
          uVar1 = *(ulong *)(param_1 + lVar43);
          uVar2 = *(ulong *)(param_1 + lVar43 + lVar5 + 1);
          uVar3 = *(ulong *)(param_1 + lVar43 + lVar5);
          auVar8._8_6_ = 0;
          auVar8._0_8_ = uVar1;
          auVar8[0xe] = (char)(uVar1 >> 0x38);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar1;
          auVar11[0xc] = (char)(uVar1 >> 0x30);
          auVar11._13_2_ = auVar8._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar1;
          auVar14._12_3_ = auVar11._12_3_;
          auVar17._8_2_ = 0;
          auVar17._0_8_ = uVar1;
          auVar17[10] = (char)(uVar1 >> 0x28);
          auVar17._11_4_ = auVar14._11_4_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar1;
          auVar20._10_5_ = auVar17._10_5_;
          auVar23[8] = (char)(uVar1 >> 0x20);
          auVar23._0_8_ = uVar1;
          auVar23._9_6_ = auVar20._9_6_;
          auVar25._7_8_ = 0;
          auVar25._0_7_ = auVar23._8_7_;
          Var26 = CONCAT81(SUB158(auVar25 << 0x40,7),(char)(uVar1 >> 0x18));
          auVar36._9_6_ = 0;
          auVar36._0_9_ = Var26;
          auVar27._1_10_ = SUB1510(auVar36 << 0x30,5);
          auVar27[0] = (char)(uVar1 >> 0x10);
          auVar37._11_4_ = 0;
          auVar37._0_11_ = auVar27;
          auVar28._1_12_ = SUB1512(auVar37 << 0x20,3);
          auVar28[0] = (char)(uVar1 >> 8);
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar2;
          auVar6[0xe] = (char)(uVar2 >> 0x38);
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar2;
          auVar9[0xc] = (char)(uVar2 >> 0x30);
          auVar9._13_2_ = auVar6._13_2_;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar2;
          auVar12._12_3_ = auVar9._12_3_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar2;
          auVar15[10] = (char)(uVar2 >> 0x28);
          auVar15._11_4_ = auVar12._11_4_;
          auVar18._8_2_ = 0;
          auVar18._0_8_ = uVar2;
          auVar18._10_5_ = auVar15._10_5_;
          auVar21[8] = (char)(uVar2 >> 0x20);
          auVar21._0_8_ = uVar2;
          auVar21._9_6_ = auVar18._9_6_;
          auVar29._7_8_ = 0;
          auVar29._0_7_ = auVar21._8_7_;
          Var30 = CONCAT81(SUB158(auVar29 << 0x40,7),(char)(uVar2 >> 0x18));
          auVar38._9_6_ = 0;
          auVar38._0_9_ = Var30;
          auVar31._1_10_ = SUB1510(auVar38 << 0x30,5);
          auVar31[0] = (char)(uVar2 >> 0x10);
          auVar39._11_4_ = 0;
          auVar39._0_11_ = auVar31;
          auVar24[2] = (char)(uVar2 >> 8);
          auVar24._0_2_ = (ushort)uVar2;
          auVar24._3_12_ = SUB1512(auVar39 << 0x20,3);
          auVar7._8_6_ = 0;
          auVar7._0_8_ = uVar3;
          auVar7[0xe] = (char)(uVar3 >> 0x38);
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar3;
          auVar10[0xc] = (char)(uVar3 >> 0x30);
          auVar10._13_2_ = auVar7._13_2_;
          auVar13._8_4_ = 0;
          auVar13._0_8_ = uVar3;
          auVar13._12_3_ = auVar10._12_3_;
          auVar16._8_2_ = 0;
          auVar16._0_8_ = uVar3;
          auVar16[10] = (char)(uVar3 >> 0x28);
          auVar16._11_4_ = auVar13._11_4_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar3;
          auVar19._10_5_ = auVar16._10_5_;
          auVar22[8] = (char)(uVar3 >> 0x20);
          auVar22._0_8_ = uVar3;
          auVar22._9_6_ = auVar19._9_6_;
          auVar32._7_8_ = 0;
          auVar32._0_7_ = auVar22._8_7_;
          Var33 = CONCAT81(SUB158(auVar32 << 0x40,7),(char)(uVar3 >> 0x18));
          auVar40._9_6_ = 0;
          auVar40._0_9_ = Var33;
          auVar34._1_10_ = SUB1510(auVar40 << 0x30,5);
          auVar34[0] = (char)(uVar3 >> 0x10);
          auVar41._11_4_ = 0;
          auVar41._0_11_ = auVar34;
          auVar35._1_12_ = SUB1512(auVar41 << 0x20,3);
          auVar35[0] = (char)(uVar3 >> 8);
          sVar48 = ((ushort)(byte)uVar1 + ((ushort)uVar2 & 0xff)) - (ushort)(byte)uVar3;
          sVar49 = (auVar28._0_2_ + auVar24._2_2_) - auVar35._0_2_;
          sVar50 = (auVar27._0_2_ + auVar31._0_2_) - auVar34._0_2_;
          sVar51 = ((short)Var26 + (short)Var30) - (short)Var33;
          sVar52 = (auVar23._8_2_ + auVar21._8_2_) - auVar22._8_2_;
          sVar53 = (auVar17._10_2_ + auVar15._10_2_) - auVar16._10_2_;
          sVar54 = (auVar11._12_2_ + auVar9._12_2_) - auVar10._12_2_;
          sVar55 = ((auVar8._13_2_ >> 8) + (auVar6._13_2_ >> 8)) - (auVar7._13_2_ >> 8);
          uVar4 = *(undefined8 *)(param_1 + lVar43 + 1);
          *(ulong *)(param_5 + lVar43 + 1) =
               CONCAT17((char)((ulong)uVar4 >> 0x38) -
                        ((0 < sVar55) * (sVar55 < 0x100) * (char)sVar55 - (0xff < sVar55)),
                        CONCAT16((char)((ulong)uVar4 >> 0x30) -
                                 ((0 < sVar54) * (sVar54 < 0x100) * (char)sVar54 - (0xff < sVar54)),
                                 CONCAT15((char)((ulong)uVar4 >> 0x28) -
                                          ((0 < sVar53) * (sVar53 < 0x100) * (char)sVar53 -
                                          (0xff < sVar53)),
                                          CONCAT14((char)((ulong)uVar4 >> 0x20) -
                                                   ((0 < sVar52) * (sVar52 < 0x100) * (char)sVar52 -
                                                   (0xff < sVar52)),
                                                   CONCAT13((char)((ulong)uVar4 >> 0x18) -
                                                            ((0 < sVar51) * (sVar51 < 0x100) *
                                                             (char)sVar51 - (0xff < sVar51)),
                                                            CONCAT12((char)((ulong)uVar4 >> 0x10) -
                                                                     ((0 < sVar50) *
                                                                      (sVar50 < 0x100) *
                                                                      (char)sVar50 - (0xff < sVar50)
                                                                     ),CONCAT11((char)((ulong)uVar4
                                                                                      >> 8) -
                                                                                ((0 < sVar49) *
                                                                                 (sVar49 < 0x100) *
                                                                                 (char)sVar49 -
                                                                                (0xff < sVar49)),
                                                                                (char)uVar4 -
                                                                                ((0 < sVar48) *
                                                                                 (sVar48 < 0x100) *
                                                                                 (char)sVar48 -
                                                                                (0xff < sVar48))))))
                                         )));
          lVar43 = lVar43 + 8;
          uVar42 = uVar45;
        } while ((int)lVar43 < (int)uVar45);
      }
      lVar43 = (long)(int)uVar42;
      while ((int)uVar42 < (int)uVar46) {
        uVar42 = ((uint)(byte)param_1[lVar43 + lVar5 + 1] + (uint)(byte)param_1[lVar43]) -
                 (uint)(byte)param_1[lVar43 + lVar5];
        if (0xff < uVar42) {
          uVar42 = (int)~uVar42 >> 0x1f;
        }
        param_5[lVar43 + 1] = param_1[lVar43 + 1] - (char)uVar42;
        lVar43 = lVar43 + 1;
        uVar42 = (uint)lVar43;
      }
      iVar47 = iVar47 + 1;
    } while (param_3 != iVar47);
  }
  return;
}



void VerticalFilter_SSE2(undefined1 *param_1,uint param_2,int param_3,int param_4,
                        undefined1 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  uint uVar66;
  long lVar67;
  long lVar68;
  uint uVar69;
  int iVar70;
  
  lVar68 = (long)param_4;
  *param_5 = *param_1;
  PredictLineLeft_SSE2(param_1 + 1,param_5 + 1,param_2 - 1);
  uVar69 = param_2 & 0xffffffe0;
  if (1 < param_3) {
    iVar70 = 1;
    do {
      param_5 = param_5 + lVar68;
      param_1 = param_1 + lVar68;
      if ((int)uVar69 < 1) {
        uVar66 = 0;
      }
      else {
        lVar67 = 0;
        do {
          pcVar2 = param_1 + lVar67 + 0x10;
          cVar4 = pcVar2[1];
          cVar5 = pcVar2[2];
          cVar6 = pcVar2[3];
          cVar7 = pcVar2[4];
          cVar8 = pcVar2[5];
          cVar9 = pcVar2[6];
          cVar10 = pcVar2[7];
          cVar11 = pcVar2[8];
          cVar12 = pcVar2[9];
          cVar13 = pcVar2[10];
          cVar14 = pcVar2[0xb];
          cVar15 = pcVar2[0xc];
          cVar16 = pcVar2[0xd];
          cVar17 = pcVar2[0xe];
          cVar18 = pcVar2[0xf];
          pcVar3 = param_1 + lVar67 + (0x10 - lVar68);
          cVar19 = pcVar3[1];
          cVar20 = pcVar3[2];
          cVar21 = pcVar3[3];
          cVar22 = pcVar3[4];
          cVar23 = pcVar3[5];
          cVar24 = pcVar3[6];
          cVar25 = pcVar3[7];
          cVar26 = pcVar3[8];
          cVar27 = pcVar3[9];
          cVar28 = pcVar3[10];
          cVar29 = pcVar3[0xb];
          cVar30 = pcVar3[0xc];
          cVar31 = pcVar3[0xd];
          cVar32 = pcVar3[0xe];
          cVar33 = pcVar3[0xf];
          pcVar1 = param_1 + lVar67;
          cVar34 = *pcVar1;
          cVar35 = pcVar1[1];
          cVar36 = pcVar1[2];
          cVar37 = pcVar1[3];
          cVar38 = pcVar1[4];
          cVar39 = pcVar1[5];
          cVar40 = pcVar1[6];
          cVar41 = pcVar1[7];
          cVar42 = pcVar1[8];
          cVar43 = pcVar1[9];
          cVar44 = pcVar1[10];
          cVar45 = pcVar1[0xb];
          cVar46 = pcVar1[0xc];
          cVar47 = pcVar1[0xd];
          cVar48 = pcVar1[0xe];
          cVar49 = pcVar1[0xf];
          pcVar1 = param_1 + (lVar67 - lVar68);
          cVar50 = *pcVar1;
          cVar51 = pcVar1[1];
          cVar52 = pcVar1[2];
          cVar53 = pcVar1[3];
          cVar54 = pcVar1[4];
          cVar55 = pcVar1[5];
          cVar56 = pcVar1[6];
          cVar57 = pcVar1[7];
          cVar58 = pcVar1[8];
          cVar59 = pcVar1[9];
          cVar60 = pcVar1[10];
          cVar61 = pcVar1[0xb];
          cVar62 = pcVar1[0xc];
          cVar63 = pcVar1[0xd];
          cVar64 = pcVar1[0xe];
          cVar65 = pcVar1[0xf];
          pcVar1 = param_5 + lVar67 + 0x10;
          *pcVar1 = *pcVar2 - *pcVar3;
          pcVar1[1] = cVar4 - cVar19;
          pcVar1[2] = cVar5 - cVar20;
          pcVar1[3] = cVar6 - cVar21;
          pcVar1[4] = cVar7 - cVar22;
          pcVar1[5] = cVar8 - cVar23;
          pcVar1[6] = cVar9 - cVar24;
          pcVar1[7] = cVar10 - cVar25;
          pcVar1[8] = cVar11 - cVar26;
          pcVar1[9] = cVar12 - cVar27;
          pcVar1[10] = cVar13 - cVar28;
          pcVar1[0xb] = cVar14 - cVar29;
          pcVar1[0xc] = cVar15 - cVar30;
          pcVar1[0xd] = cVar16 - cVar31;
          pcVar1[0xe] = cVar17 - cVar32;
          pcVar1[0xf] = cVar18 - cVar33;
          pcVar1 = param_5 + lVar67;
          *pcVar1 = cVar34 - cVar50;
          pcVar1[1] = cVar35 - cVar51;
          pcVar1[2] = cVar36 - cVar52;
          pcVar1[3] = cVar37 - cVar53;
          pcVar1[4] = cVar38 - cVar54;
          pcVar1[5] = cVar39 - cVar55;
          pcVar1[6] = cVar40 - cVar56;
          pcVar1[7] = cVar41 - cVar57;
          pcVar1[8] = cVar42 - cVar58;
          pcVar1[9] = cVar43 - cVar59;
          pcVar1[10] = cVar44 - cVar60;
          pcVar1[0xb] = cVar45 - cVar61;
          pcVar1[0xc] = cVar46 - cVar62;
          pcVar1[0xd] = cVar47 - cVar63;
          pcVar1[0xe] = cVar48 - cVar64;
          pcVar1[0xf] = cVar49 - cVar65;
          lVar67 = lVar67 + 0x20;
          uVar66 = uVar69;
        } while ((int)lVar67 < (int)uVar69);
      }
      lVar67 = (long)(int)uVar66;
      while ((int)uVar66 < (int)param_2) {
        param_5[lVar67] = param_1[lVar67] - param_1[lVar67 - lVar68];
        lVar67 = lVar67 + 1;
        uVar66 = (uint)lVar67;
      }
      iVar70 = iVar70 + 1;
    } while (param_3 != iVar70);
  }
  return;
}



void HorizontalFilter_SSE2
               (undefined1 *param_1,int param_2,uint param_3,int param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = (ulong)param_3;
  lVar5 = (long)param_4;
  *param_5 = *param_1;
  PredictLineLeft_SSE2(param_1 + 1,param_5 + 1,param_2 + -1);
  if (1 < (int)uVar6) {
    iVar1 = (int)lVar5;
    param_1 = param_1 + lVar5 + 1;
    uVar4 = 1;
    puVar2 = param_5 + lVar5 + 1;
    do {
      uVar4 = (ulong)((int)uVar4 + 1);
      puVar2[-1] = param_1[-1] - param_1[(long)-iVar1 + -1];
      puVar3 = puVar2 + lVar5;
      PredictLineLeft_SSE2(param_1,puVar2);
      param_1 = param_1 + lVar5;
      puVar2 = puVar3;
    } while ((int)uVar6 != (int)uVar4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8FiltersInitSSE2(void)

{
  _WebPFilters = HorizontalUnfilter_SSE2;
  _DAT_00101020 = GradientFilter_SSE2;
  _DAT_00101010 = HorizontalFilter_SSE2;
  _DAT_00101018 = VerticalFilter_SSE2;
  return;
}



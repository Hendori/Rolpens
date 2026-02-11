
void SharpYuvUpdateRGB_SSE2(long param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  int iVar27;
  long lVar28;
  
  if (param_4 < 8) {
    iVar27 = 0;
  }
  else {
    lVar28 = 0;
    uVar1 = (param_4 - 8U >> 3) + 1;
    do {
      psVar2 = (short *)(param_1 + lVar28);
      sVar6 = psVar2[1];
      sVar7 = psVar2[2];
      sVar8 = psVar2[3];
      sVar9 = psVar2[4];
      sVar10 = psVar2[5];
      sVar11 = psVar2[6];
      sVar12 = psVar2[7];
      psVar3 = (short *)(param_3 + lVar28);
      sVar13 = psVar3[1];
      sVar14 = psVar3[2];
      sVar15 = psVar3[3];
      sVar16 = psVar3[4];
      sVar17 = psVar3[5];
      sVar18 = psVar3[6];
      sVar19 = psVar3[7];
      psVar4 = (short *)(param_2 + lVar28);
      sVar20 = psVar4[1];
      sVar21 = psVar4[2];
      sVar22 = psVar4[3];
      sVar23 = psVar4[4];
      sVar24 = psVar4[5];
      sVar25 = psVar4[6];
      sVar26 = psVar4[7];
      psVar5 = (short *)(param_3 + lVar28);
      *psVar5 = (*psVar2 + *psVar3) - *psVar4;
      psVar5[1] = (sVar6 + sVar13) - sVar20;
      psVar5[2] = (sVar7 + sVar14) - sVar21;
      psVar5[3] = (sVar8 + sVar15) - sVar22;
      psVar5[4] = (sVar9 + sVar16) - sVar23;
      psVar5[5] = (sVar10 + sVar17) - sVar24;
      psVar5[6] = (sVar11 + sVar18) - sVar25;
      psVar5[7] = (sVar12 + sVar19) - sVar26;
      lVar28 = lVar28 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar28);
    iVar27 = uVar1 * 8;
  }
  if (iVar27 < param_4) {
    lVar28 = (long)iVar27;
    do {
      psVar2 = (short *)(param_3 + lVar28 * 2);
      *psVar2 = *psVar2 + (*(short *)(param_1 + lVar28 * 2) - *(short *)(param_2 + lVar28 * 2));
      lVar28 = lVar28 + 1;
    } while ((int)lVar28 < param_4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SharpYuvFilterRow_SSE2
               (long param_1,long param_2,int param_3,long param_4,long param_5,int param_6)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ushort uVar23;
  short sVar24;
  ushort uVar30;
  short sVar32;
  ushort uVar33;
  short sVar34;
  int iVar35;
  short sVar37;
  ushort uVar38;
  short sVar39;
  int iVar40;
  short sVar42;
  ushort uVar43;
  short sVar44;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ushort uVar36;
  ushort uVar41;
  ushort uVar46;
  undefined1 auVar28 [16];
  int iVar45;
  undefined1 auVar29 [16];
  short sVar47;
  short sVar48;
  ushort uVar49;
  int iVar50;
  ushort uVar58;
  int iVar59;
  ushort uVar61;
  int iVar62;
  ushort uVar64;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  ushort uVar57;
  ushort uVar60;
  ushort uVar63;
  ushort uVar66;
  undefined1 auVar54 [16];
  int iVar65;
  short sVar67;
  short sVar73;
  short sVar74;
  int iVar75;
  short sVar76;
  short sVar77;
  int iVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  int iVar85;
  int iVar86;
  undefined1 auVar82 [16];
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  undefined2 uVar31;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar71 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  
  iVar20 = _UNK_0010052c;
  iVar19 = _UNK_00100528;
  iVar18 = _UNK_00100524;
  iVar17 = __LC1;
  sVar47 = _UNK_0010051e;
  sVar44 = _UNK_0010051c;
  sVar42 = _UNK_0010051a;
  sVar39 = _UNK_00100518;
  sVar37 = _UNK_00100516;
  sVar34 = _UNK_00100514;
  sVar32 = _UNK_00100512;
  sVar24 = __LC0;
  iVar21 = (1 << ((byte)param_6 & 0x1f)) + -1;
  sVar48 = (short)iVar21;
  if (param_6 < 0xb) {
    if (param_3 < 8) {
      iVar17 = 0;
    }
    else {
      lVar15 = 0;
      uVar16 = (param_3 - 8U >> 3) + 1;
      do {
        psVar4 = (short *)(param_2 + 2 + lVar15);
        psVar1 = (short *)(param_1 + lVar15);
        psVar2 = (short *)(param_2 + lVar15);
        psVar5 = (short *)(param_1 + 2 + lVar15);
        psVar3 = (short *)(param_1 + lVar15);
        psVar6 = (short *)(param_1 + 2 + lVar15);
        sVar67 = *psVar1 + *psVar4 + *psVar5 + *psVar2 + sVar24;
        sVar73 = psVar1[1] + psVar4[1] + psVar5[1] + psVar2[1] + sVar32;
        sVar74 = psVar1[2] + psVar4[2] + psVar5[2] + psVar2[2] + sVar34;
        sVar76 = psVar1[3] + psVar4[3] + psVar5[3] + psVar2[3] + sVar37;
        sVar77 = psVar1[4] + psVar4[4] + psVar5[4] + psVar2[4] + sVar39;
        sVar79 = psVar1[5] + psVar4[5] + psVar5[5] + psVar2[5] + sVar42;
        sVar80 = psVar1[6] + psVar4[6] + psVar5[6] + psVar2[6] + sVar44;
        sVar81 = psVar1[7] + psVar4[7] + psVar5[7] + psVar2[7] + sVar47;
        auVar25._0_2_ = (*psVar5 + *psVar2) * 2 + sVar67;
        auVar25._2_2_ = (psVar5[1] + psVar2[1]) * 2 + sVar73;
        auVar25._4_2_ = (psVar5[2] + psVar2[2]) * 2 + sVar74;
        auVar25._6_2_ = (psVar5[3] + psVar2[3]) * 2 + sVar76;
        auVar25._8_2_ = (psVar5[4] + psVar2[4]) * 2 + sVar77;
        auVar25._10_2_ = (psVar5[5] + psVar2[5]) * 2 + sVar79;
        auVar25._12_2_ = (psVar5[6] + psVar2[6]) * 2 + sVar80;
        auVar25._14_2_ = (psVar5[7] + psVar2[7]) * 2 + sVar81;
        auVar51._0_2_ = (*psVar1 + *psVar4) * 2 + sVar67;
        auVar51._2_2_ = (psVar1[1] + psVar4[1]) * 2 + sVar73;
        auVar51._4_2_ = (psVar1[2] + psVar4[2]) * 2 + sVar74;
        auVar51._6_2_ = (psVar1[3] + psVar4[3]) * 2 + sVar76;
        auVar51._8_2_ = (psVar1[4] + psVar4[4]) * 2 + sVar77;
        auVar51._10_2_ = (psVar1[5] + psVar4[5]) * 2 + sVar79;
        auVar51._12_2_ = (psVar1[6] + psVar4[6]) * 2 + sVar80;
        auVar51._14_2_ = (psVar1[7] + psVar4[7]) * 2 + sVar81;
        auVar26 = psraw(auVar25,3);
        auVar52 = psraw(auVar51,3);
        auVar27._0_2_ = auVar26._0_2_ + *psVar3;
        auVar27._2_2_ = auVar26._2_2_ + psVar3[1];
        auVar27._4_2_ = auVar26._4_2_ + psVar3[2];
        auVar27._6_2_ = auVar26._6_2_ + psVar3[3];
        auVar27._8_2_ = auVar26._8_2_ + psVar3[4];
        auVar27._10_2_ = auVar26._10_2_ + psVar3[5];
        auVar27._12_2_ = auVar26._12_2_ + psVar3[6];
        auVar27._14_2_ = auVar26._14_2_ + psVar3[7];
        auVar53._0_2_ = auVar52._0_2_ + *psVar6;
        auVar53._2_2_ = auVar52._2_2_ + psVar6[1];
        auVar53._4_2_ = auVar52._4_2_ + psVar6[2];
        auVar53._6_2_ = auVar52._6_2_ + psVar6[3];
        auVar53._8_2_ = auVar52._8_2_ + psVar6[4];
        auVar53._10_2_ = auVar52._10_2_ + psVar6[5];
        auVar53._12_2_ = auVar52._12_2_ + psVar6[6];
        auVar53._14_2_ = auVar52._14_2_ + psVar6[7];
        psVar2 = (short *)(param_4 + 0x10 + lVar15 * 2);
        auVar26 = psraw(auVar27,1);
        auVar52 = psraw(auVar53,1);
        psVar1 = (short *)(param_4 + lVar15 * 2);
        sVar67 = auVar26._8_2_ + *psVar2;
        sVar73 = auVar52._8_2_ + psVar2[1];
        sVar74 = auVar26._10_2_ + psVar2[2];
        sVar76 = auVar52._10_2_ + psVar2[3];
        sVar77 = auVar26._12_2_ + psVar2[4];
        sVar79 = auVar52._12_2_ + psVar2[5];
        sVar80 = auVar26._14_2_ + psVar2[6];
        sVar81 = auVar52._14_2_ + psVar2[7];
        uVar23 = (ushort)(sVar48 < sVar67) * sVar48 | (ushort)(sVar48 >= sVar67) * sVar67;
        uVar30 = (ushort)(sVar48 < sVar73) * sVar48 | (ushort)(sVar48 >= sVar73) * sVar73;
        uVar33 = (ushort)(sVar48 < sVar74) * sVar48 | (ushort)(sVar48 >= sVar74) * sVar74;
        uVar36 = (ushort)(sVar48 < sVar76) * sVar48 | (ushort)(sVar48 >= sVar76) * sVar76;
        uVar38 = (ushort)(sVar48 < sVar77) * sVar48 | (ushort)(sVar48 >= sVar77) * sVar77;
        uVar41 = (ushort)(sVar48 < sVar79) * sVar48 | (ushort)(sVar48 >= sVar79) * sVar79;
        uVar43 = (ushort)(sVar48 < sVar80) * sVar48 | (ushort)(sVar48 >= sVar80) * sVar80;
        uVar46 = (ushort)(sVar48 < sVar81) * sVar48 | (ushort)(sVar48 >= sVar81) * sVar81;
        sVar67 = *psVar1 + auVar26._0_2_;
        sVar73 = psVar1[1] + auVar52._0_2_;
        sVar74 = psVar1[2] + auVar26._2_2_;
        sVar76 = psVar1[3] + auVar52._2_2_;
        sVar77 = psVar1[4] + auVar26._4_2_;
        sVar79 = psVar1[5] + auVar52._4_2_;
        sVar80 = psVar1[6] + auVar26._6_2_;
        sVar81 = psVar1[7] + auVar52._6_2_;
        uVar49 = (ushort)(sVar48 < sVar67) * sVar48 | (ushort)(sVar48 >= sVar67) * sVar67;
        uVar57 = (ushort)(sVar48 < sVar73) * sVar48 | (ushort)(sVar48 >= sVar73) * sVar73;
        uVar58 = (ushort)(sVar48 < sVar74) * sVar48 | (ushort)(sVar48 >= sVar74) * sVar74;
        uVar60 = (ushort)(sVar48 < sVar76) * sVar48 | (ushort)(sVar48 >= sVar76) * sVar76;
        uVar61 = (ushort)(sVar48 < sVar77) * sVar48 | (ushort)(sVar48 >= sVar77) * sVar77;
        uVar63 = (ushort)(sVar48 < sVar79) * sVar48 | (ushort)(sVar48 >= sVar79) * sVar79;
        uVar64 = (ushort)(sVar48 < sVar80) * sVar48 | (ushort)(sVar48 >= sVar80) * sVar80;
        uVar66 = (ushort)(sVar48 < sVar81) * sVar48 | (ushort)(sVar48 >= sVar81) * sVar81;
        psVar1 = (short *)(param_5 + 0x10 + lVar15 * 2);
        *psVar1 = (-1 < (short)uVar23) * uVar23;
        psVar1[1] = (-1 < (short)uVar30) * uVar30;
        psVar1[2] = (-1 < (short)uVar33) * uVar33;
        psVar1[3] = (-1 < (short)uVar36) * uVar36;
        psVar1[4] = (-1 < (short)uVar38) * uVar38;
        psVar1[5] = (-1 < (short)uVar41) * uVar41;
        psVar1[6] = (-1 < (short)uVar43) * uVar43;
        psVar1[7] = (-1 < (short)uVar46) * uVar46;
        psVar1 = (short *)(param_5 + lVar15 * 2);
        *psVar1 = (-1 < (short)uVar49) * uVar49;
        psVar1[1] = (-1 < (short)uVar57) * uVar57;
        psVar1[2] = (-1 < (short)uVar58) * uVar58;
        psVar1[3] = (-1 < (short)uVar60) * uVar60;
        psVar1[4] = (-1 < (short)uVar61) * uVar61;
        psVar1[5] = (-1 < (short)uVar63) * uVar63;
        psVar1[6] = (-1 < (short)uVar64) * uVar64;
        psVar1[7] = (-1 < (short)uVar66) * uVar66;
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar16 << 4 != lVar15);
      iVar17 = uVar16 * 8;
    }
    lVar15 = (long)iVar17;
    while (iVar17 < param_3) {
      iVar19 = (int)*(short *)(param_1 + lVar15 * 2);
      iVar22 = (int)*(short *)(param_1 + 2 + lVar15 * 2);
      iVar20 = *(short *)(param_2 + 2 + lVar15 * 2) + iVar19;
      iVar18 = *(short *)(param_2 + lVar15 * 2) + iVar22;
      iVar17 = iVar18 + 8 + iVar20;
      iVar19 = (iVar17 + (iVar18 + iVar19 * 4) * 2 >> 4) + (uint)*(ushort *)(param_4 + lVar15 * 4);
      iVar18 = 0;
      if ((-1 < iVar19) && (iVar18 = iVar19, iVar21 < iVar19)) {
        iVar18 = iVar21;
      }
      *(short *)(param_5 + lVar15 * 4) = (short)iVar18;
      iVar18 = (uint)*(ushort *)(param_4 + 2 + lVar15 * 4) +
               (iVar17 + (iVar20 + iVar22 * 4) * 2 >> 4);
      iVar17 = 0;
      if ((-1 < iVar18) && (iVar17 = iVar18, iVar21 < iVar18)) {
        iVar17 = iVar21;
      }
      *(short *)(param_5 + 2 + lVar15 * 4) = (short)iVar17;
      lVar15 = lVar15 + 1;
      iVar17 = (int)lVar15;
    }
  }
  else {
    if (param_3 < 4) {
      iVar17 = 0;
    }
    else {
      uVar16 = (param_3 - 4U >> 2) + 1;
      lVar15 = 0;
      do {
        uVar7 = *(ulong *)(param_1 + lVar15);
        uVar8 = *(ulong *)(param_2 + 2 + lVar15);
        uVar9 = *(ulong *)(param_1 + 2 + lVar15);
        uVar10 = *(ulong *)(param_2 + lVar15);
        uVar31 = (undefined2)(uVar7 >> 0x30);
        auVar84._8_4_ = 0;
        auVar84._0_8_ = uVar7;
        auVar84._12_2_ = uVar31;
        auVar84._14_2_ = uVar31;
        uVar31 = (undefined2)(uVar7 >> 0x20);
        auVar83._12_4_ = auVar84._12_4_;
        auVar83._8_2_ = 0;
        auVar83._0_8_ = uVar7;
        auVar83._10_2_ = uVar31;
        auVar82._10_6_ = auVar83._10_6_;
        auVar82._8_2_ = uVar31;
        auVar82._0_8_ = uVar7;
        uVar31 = (undefined2)(uVar7 >> 0x10);
        auVar11._4_8_ = auVar82._8_8_;
        auVar11._2_2_ = uVar31;
        auVar11._0_2_ = uVar31;
        uVar31 = (undefined2)(uVar8 >> 0x30);
        auVar56._8_4_ = 0;
        auVar56._0_8_ = uVar8;
        auVar56._12_2_ = uVar31;
        auVar56._14_2_ = uVar31;
        uVar31 = (undefined2)(uVar8 >> 0x20);
        auVar55._12_4_ = auVar56._12_4_;
        auVar55._8_2_ = 0;
        auVar55._0_8_ = uVar8;
        auVar55._10_2_ = uVar31;
        auVar54._10_6_ = auVar55._10_6_;
        auVar54._8_2_ = uVar31;
        auVar54._0_8_ = uVar8;
        uVar31 = (undefined2)(uVar8 >> 0x10);
        auVar12._4_8_ = auVar54._8_8_;
        auVar12._2_2_ = uVar31;
        auVar12._0_2_ = uVar31;
        iVar85 = auVar11._0_4_ >> 0x10;
        iVar86 = auVar82._8_4_ >> 0x10;
        uVar31 = (undefined2)(uVar9 >> 0x30);
        auVar70._8_4_ = 0;
        auVar70._0_8_ = uVar9;
        auVar70._12_2_ = uVar31;
        auVar70._14_2_ = uVar31;
        uVar31 = (undefined2)(uVar9 >> 0x20);
        auVar69._12_4_ = auVar70._12_4_;
        auVar69._8_2_ = 0;
        auVar69._0_8_ = uVar9;
        auVar69._10_2_ = uVar31;
        auVar68._10_6_ = auVar69._10_6_;
        auVar68._8_2_ = uVar31;
        auVar68._0_8_ = uVar9;
        uVar31 = (undefined2)(uVar9 >> 0x10);
        auVar13._4_8_ = auVar68._8_8_;
        auVar13._2_2_ = uVar31;
        auVar13._0_2_ = uVar31;
        uVar31 = (undefined2)(uVar10 >> 0x30);
        auVar28._8_4_ = 0;
        auVar28._0_8_ = uVar10;
        auVar28._12_2_ = uVar31;
        auVar28._14_2_ = uVar31;
        uVar31 = (undefined2)(uVar10 >> 0x20);
        auVar52._12_4_ = auVar28._12_4_;
        auVar52._8_2_ = 0;
        auVar52._0_8_ = uVar10;
        auVar52._10_2_ = uVar31;
        auVar26._10_6_ = auVar52._10_6_;
        auVar26._8_2_ = uVar31;
        auVar26._0_8_ = uVar10;
        uVar31 = (undefined2)(uVar10 >> 0x10);
        auVar14._4_8_ = auVar26._8_8_;
        auVar14._2_2_ = uVar31;
        auVar14._0_2_ = uVar31;
        iVar75 = auVar13._0_4_ >> 0x10;
        iVar78 = auVar68._8_4_ >> 0x10;
        iVar50 = (int)(short)uVar8 + (int)(short)uVar7;
        iVar59 = (auVar12._0_4_ >> 0x10) + iVar85;
        iVar62 = (auVar54._8_4_ >> 0x10) + iVar86;
        iVar65 = (auVar55._12_4_ >> 0x10) + (auVar83._12_4_ >> 0x10);
        iVar22 = (int)(short)uVar10 + (int)(short)uVar9;
        iVar35 = (auVar14._0_4_ >> 0x10) + iVar75;
        iVar40 = (auVar26._8_4_ >> 0x10) + iVar78;
        iVar45 = (auVar52._12_4_ >> 0x10) + (auVar69._12_4_ >> 0x10);
        iVar87 = iVar50 + iVar22 + iVar17;
        iVar88 = iVar59 + iVar35 + iVar18;
        iVar89 = iVar62 + iVar40 + iVar19;
        iVar90 = iVar65 + iVar45 + iVar20;
        iVar22 = (iVar22 * 2 + iVar87 >> 3) + (int)(short)uVar7 >> 1;
        iVar35 = (iVar35 * 2 + iVar88 >> 3) + iVar85 >> 1;
        auVar72._4_4_ = iVar35;
        auVar72._0_4_ = iVar22;
        auVar29._4_4_ = (iVar62 * 2 + iVar89 >> 3) + iVar78 >> 1;
        auVar29._0_4_ = (iVar40 * 2 + iVar89 >> 3) + iVar86 >> 1;
        auVar29._8_4_ = (iVar45 * 2 + iVar90 >> 3) + (auVar83._12_4_ >> 0x10) >> 1;
        auVar29._12_4_ = (iVar65 * 2 + iVar90 >> 3) + (auVar69._12_4_ >> 0x10) >> 1;
        auVar72._8_4_ = iVar35;
        auVar72._12_4_ = (iVar59 * 2 + iVar88 >> 3) + iVar75 >> 1;
        auVar71._8_8_ = auVar72._8_8_;
        auVar71._4_4_ = (iVar50 * 2 + iVar87 >> 3) + (int)(short)uVar9 >> 1;
        auVar71._0_4_ = iVar22;
        auVar26 = packssdw(auVar71,auVar29);
        psVar1 = (short *)(param_4 + lVar15 * 2);
        sVar24 = *psVar1 + auVar26._0_2_;
        sVar32 = psVar1[1] + auVar26._2_2_;
        sVar34 = psVar1[2] + auVar26._4_2_;
        sVar37 = psVar1[3] + auVar26._6_2_;
        sVar39 = psVar1[4] + auVar26._8_2_;
        sVar42 = psVar1[5] + auVar26._10_2_;
        sVar44 = psVar1[6] + auVar26._12_2_;
        sVar47 = psVar1[7] + auVar26._14_2_;
        uVar23 = (ushort)(sVar48 < sVar24) * sVar48 | (ushort)(sVar48 >= sVar24) * sVar24;
        uVar30 = (ushort)(sVar48 < sVar32) * sVar48 | (ushort)(sVar48 >= sVar32) * sVar32;
        uVar33 = (ushort)(sVar48 < sVar34) * sVar48 | (ushort)(sVar48 >= sVar34) * sVar34;
        uVar36 = (ushort)(sVar48 < sVar37) * sVar48 | (ushort)(sVar48 >= sVar37) * sVar37;
        uVar38 = (ushort)(sVar48 < sVar39) * sVar48 | (ushort)(sVar48 >= sVar39) * sVar39;
        uVar41 = (ushort)(sVar48 < sVar42) * sVar48 | (ushort)(sVar48 >= sVar42) * sVar42;
        uVar43 = (ushort)(sVar48 < sVar44) * sVar48 | (ushort)(sVar48 >= sVar44) * sVar44;
        uVar46 = (ushort)(sVar48 < sVar47) * sVar48 | (ushort)(sVar48 >= sVar47) * sVar47;
        psVar1 = (short *)(param_5 + lVar15 * 2);
        *psVar1 = (-1 < (short)uVar23) * uVar23;
        psVar1[1] = (-1 < (short)uVar30) * uVar30;
        psVar1[2] = (-1 < (short)uVar33) * uVar33;
        psVar1[3] = (-1 < (short)uVar36) * uVar36;
        psVar1[4] = (-1 < (short)uVar38) * uVar38;
        psVar1[5] = (-1 < (short)uVar41) * uVar41;
        psVar1[6] = (-1 < (short)uVar43) * uVar43;
        psVar1[7] = (-1 < (short)uVar46) * uVar46;
        lVar15 = lVar15 + 8;
      } while (lVar15 != (ulong)uVar16 << 3);
      iVar17 = uVar16 * 4;
    }
    if (iVar17 < param_3) {
      lVar15 = (long)iVar17;
      do {
        iVar19 = (int)*(short *)(param_1 + lVar15 * 2);
        iVar22 = (int)*(short *)(param_1 + 2 + lVar15 * 2);
        iVar20 = *(short *)(param_2 + 2 + lVar15 * 2) + iVar19;
        iVar18 = *(short *)(param_2 + lVar15 * 2) + iVar22;
        iVar17 = iVar18 + 8 + iVar20;
        iVar19 = (iVar17 + (iVar18 + iVar19 * 4) * 2 >> 4) + (uint)*(ushort *)(param_4 + lVar15 * 4)
        ;
        iVar18 = 0;
        if ((-1 < iVar19) && (iVar18 = iVar19, iVar21 < iVar19)) {
          iVar18 = iVar21;
        }
        *(short *)(param_5 + lVar15 * 4) = (short)iVar18;
        iVar18 = (uint)*(ushort *)(param_4 + 2 + lVar15 * 4) +
                 (iVar17 + (iVar20 + iVar22 * 4) * 2 >> 4);
        iVar17 = 0;
        if ((-1 < iVar18) && (iVar17 = iVar18, iVar21 < iVar18)) {
          iVar17 = iVar21;
        }
        *(short *)(param_5 + 2 + lVar15 * 4) = (short)iVar17;
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < param_3);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong SharpYuvUpdateY_SSE2(long param_1,long param_2,long param_3,int param_4,byte param_5)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  undefined1 auVar6 [16];
  int iVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  undefined1 auVar11 [16];
  int iVar14;
  short sVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  short sVar19;
  ushort uVar20;
  short sVar21;
  ushort uVar22;
  short sVar23;
  ushort uVar24;
  short sVar25;
  ushort uVar26;
  short sVar27;
  ushort uVar28;
  short sVar29;
  ushort uVar30;
  undefined1 auVar31 [16];
  short sVar32;
  
  auVar6 = __LC2;
  iVar1 = (1 << (param_5 & 0x1f)) + -1;
  sVar32 = (short)iVar1;
  if (param_4 < 8) {
    uVar9 = 0;
    iVar7 = 0;
  }
  else {
    iVar10 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    lVar8 = 0;
    uVar2 = (param_4 - 8U >> 3) + 1;
    do {
      psVar3 = (short *)(param_1 + lVar8);
      psVar4 = (short *)(param_2 + lVar8);
      psVar5 = (short *)(param_3 + lVar8);
      auVar11._0_2_ = *psVar3 - *psVar4;
      auVar11._2_2_ = psVar3[1] - psVar4[1];
      auVar11._4_2_ = psVar3[2] - psVar4[2];
      auVar11._6_2_ = psVar3[3] - psVar4[3];
      auVar11._8_2_ = psVar3[4] - psVar4[4];
      auVar11._10_2_ = psVar3[5] - psVar4[5];
      auVar11._12_2_ = psVar3[6] - psVar4[6];
      auVar11._14_2_ = psVar3[7] - psVar4[7];
      auVar31._0_2_ = -(ushort)(auVar11._0_2_ < 0);
      auVar31._2_2_ = -(ushort)(auVar11._2_2_ < 0);
      auVar31._4_2_ = -(ushort)(auVar11._4_2_ < 0);
      auVar31._6_2_ = -(ushort)(auVar11._6_2_ < 0);
      auVar31._8_2_ = -(ushort)(auVar11._8_2_ < 0);
      auVar31._10_2_ = -(ushort)(auVar11._10_2_ < 0);
      auVar31._12_2_ = -(ushort)(auVar11._12_2_ < 0);
      auVar31._14_2_ = -(ushort)(auVar11._14_2_ < 0);
      sVar15 = *psVar5 + auVar11._0_2_;
      sVar17 = psVar5[1] + auVar11._2_2_;
      sVar19 = psVar5[2] + auVar11._4_2_;
      sVar21 = psVar5[3] + auVar11._6_2_;
      sVar23 = psVar5[4] + auVar11._8_2_;
      sVar25 = psVar5[5] + auVar11._10_2_;
      sVar27 = psVar5[6] + auVar11._12_2_;
      sVar29 = psVar5[7] + auVar11._14_2_;
      uVar16 = (ushort)(sVar32 < sVar15) * sVar32 | (ushort)(sVar32 >= sVar15) * sVar15;
      uVar18 = (ushort)(sVar32 < sVar17) * sVar32 | (ushort)(sVar32 >= sVar17) * sVar17;
      uVar20 = (ushort)(sVar32 < sVar19) * sVar32 | (ushort)(sVar32 >= sVar19) * sVar19;
      uVar22 = (ushort)(sVar32 < sVar21) * sVar32 | (ushort)(sVar32 >= sVar21) * sVar21;
      uVar24 = (ushort)(sVar32 < sVar23) * sVar32 | (ushort)(sVar32 >= sVar23) * sVar23;
      uVar26 = (ushort)(sVar32 < sVar25) * sVar32 | (ushort)(sVar32 >= sVar25) * sVar25;
      uVar28 = (ushort)(sVar32 < sVar27) * sVar32 | (ushort)(sVar32 >= sVar27) * sVar27;
      uVar30 = (ushort)(sVar32 < sVar29) * sVar32 | (ushort)(sVar32 >= sVar29) * sVar29;
      psVar3 = (short *)(param_3 + lVar8);
      *psVar3 = (-1 < (short)uVar16) * uVar16;
      psVar3[1] = (-1 < (short)uVar18) * uVar18;
      psVar3[2] = (-1 < (short)uVar20) * uVar20;
      psVar3[3] = (-1 < (short)uVar22) * uVar22;
      psVar3[4] = (-1 < (short)uVar24) * uVar24;
      psVar3[5] = (-1 < (short)uVar26) * uVar26;
      psVar3[6] = (-1 < (short)uVar28) * uVar28;
      psVar3[7] = (-1 < (short)uVar30) * uVar30;
      lVar8 = lVar8 + 0x10;
      auVar11 = pmaddwd(auVar11,auVar31 | auVar6);
      iVar10 = auVar11._0_4_ + iVar10;
      iVar12 = auVar11._4_4_ + iVar12;
      iVar13 = auVar11._8_4_ + iVar13;
      iVar14 = auVar11._12_4_ + iVar14;
    } while ((ulong)uVar2 << 4 != lVar8);
    iVar7 = uVar2 * 8;
    uVar9 = (ulong)(uint)(iVar14 + iVar13 + iVar12 + iVar10);
  }
  if (iVar7 < param_4) {
    lVar8 = (long)iVar7;
    do {
      iVar7 = (uint)*(ushort *)(param_1 + lVar8 * 2) - (uint)*(ushort *)(param_2 + lVar8 * 2);
      iVar10 = (uint)*(ushort *)(param_3 + lVar8 * 2) + iVar7;
      sVar15 = 0;
      if ((-1 < iVar10) && (sVar15 = (short)iVar10, iVar1 < iVar10)) {
        sVar15 = sVar32;
      }
      *(short *)(param_3 + lVar8 * 2) = sVar15;
      if (iVar7 < 1) {
        iVar7 = -iVar7;
      }
      lVar8 = lVar8 + 1;
      uVar9 = uVar9 + (long)iVar7;
    } while ((int)lVar8 < param_4);
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitSharpYuvSSE2(void)

{
  _SharpYuvUpdateY = SharpYuvUpdateY_SSE2;
  _SharpYuvUpdateRGB = 0x100000;
  _SharpYuvFilterRow = SharpYuvFilterRow_SSE2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Mean16x4_SSE2(undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  ulong uVar16;
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  ulong uVar20;
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined1 auVar33 [12];
  undefined1 auVar35 [12];
  undefined1 auVar37 [12];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  
  auVar32 = param_1[2];
  auVar34 = param_1[4];
  auVar1 = *param_1;
  auVar2 = param_1[6];
  auVar28 = auVar32 & __LC0;
  auVar27 = auVar34 & __LC0;
  auVar29 = auVar1 & __LC0;
  auVar30 = auVar2 & __LC0;
  iVar25 = CONCAT22(auVar32._2_2_ >> 8,auVar32._0_2_ >> 8);
  auVar35._0_8_ = CONCAT26(auVar32._6_2_ >> 8,CONCAT24(auVar32._4_2_ >> 8,iVar25));
  auVar35._8_2_ = auVar32._8_2_ >> 8;
  auVar35._10_2_ = auVar32._10_2_ >> 8;
  auVar36._12_2_ = auVar32._12_2_ >> 8;
  auVar36._0_12_ = auVar35;
  auVar36._14_2_ = auVar32._14_2_ >> 8;
  iVar26 = CONCAT22(auVar1._2_2_ >> 8,auVar1._0_2_ >> 8);
  auVar37._0_8_ = CONCAT26(auVar1._6_2_ >> 8,CONCAT24(auVar1._4_2_ >> 8,iVar26));
  auVar37._8_2_ = auVar1._8_2_ >> 8;
  auVar37._10_2_ = auVar1._10_2_ >> 8;
  auVar38._12_2_ = auVar1._12_2_ >> 8;
  auVar38._0_12_ = auVar37;
  auVar38._14_2_ = auVar1._14_2_ >> 8;
  iVar23 = CONCAT22(auVar34._2_2_ >> 8,auVar34._0_2_ >> 8);
  auVar31._0_8_ = CONCAT26(auVar34._6_2_ >> 8,CONCAT24(auVar34._4_2_ >> 8,iVar23));
  auVar31._8_2_ = auVar34._8_2_ >> 8;
  auVar31._10_2_ = auVar34._10_2_ >> 8;
  auVar32._12_2_ = auVar34._12_2_ >> 8;
  auVar32._0_12_ = auVar31;
  auVar32._14_2_ = auVar34._14_2_ >> 8;
  iVar24 = CONCAT22(auVar2._2_2_ >> 8,auVar2._0_2_ >> 8);
  auVar33._0_8_ = CONCAT26(auVar2._6_2_ >> 8,CONCAT24(auVar2._4_2_ >> 8,iVar24));
  auVar33._8_2_ = auVar2._8_2_ >> 8;
  auVar33._10_2_ = auVar2._10_2_ >> 8;
  auVar34._12_2_ = auVar2._12_2_ >> 8;
  auVar34._0_12_ = auVar33;
  auVar34._14_2_ = auVar2._14_2_ >> 8;
  iVar23 = auVar27._0_4_ + auVar30._0_4_ + auVar28._0_4_ + auVar29._0_4_ + iVar25 + iVar26 +
           iVar23 + iVar24;
  iVar24 = auVar27._4_4_ + auVar30._4_4_ + auVar28._4_4_ + auVar29._4_4_ +
           (int)((ulong)auVar35._0_8_ >> 0x20) + (int)((ulong)auVar37._0_8_ >> 0x20) +
           (int)((ulong)auVar31._0_8_ >> 0x20) + (int)((ulong)auVar33._0_8_ >> 0x20);
  iVar25 = auVar27._8_4_ + auVar30._8_4_ + auVar28._8_4_ + auVar29._8_4_ +
           auVar35._8_4_ + auVar37._8_4_ + auVar31._8_4_ + auVar33._8_4_;
  iVar26 = auVar27._12_4_ + auVar30._12_4_ + auVar28._12_4_ + auVar29._12_4_ +
           auVar36._12_4_ + auVar38._12_4_ + auVar32._12_4_ + auVar34._12_4_;
  uVar3 = (undefined2)iVar26;
  uVar4 = (undefined2)iVar25;
  uVar5 = (undefined2)iVar24;
  uVar16 = CONCAT62(CONCAT42(CONCAT22(uVar3,uVar4),uVar5),(short)iVar23);
  uVar6 = (undefined2)((uint)iVar25 >> 0x10);
  uVar7 = (undefined2)((uint)iVar26 >> 0x10);
  auVar12._8_4_ = 0;
  auVar12._0_8_ = uVar16;
  auVar12._12_2_ = uVar3;
  auVar17._8_2_ = uVar4;
  auVar17._0_8_ = uVar16;
  auVar17._10_4_ = auVar12._10_4_;
  uVar8 = (undefined2)((uint)iVar24 >> 0x10);
  auVar9._8_4_ = 0;
  auVar9._0_8_ = uVar16;
  auVar9._12_2_ = uVar3;
  auVar13._8_2_ = uVar4;
  auVar13._0_8_ = uVar16;
  auVar13._10_4_ = auVar9._10_4_;
  auVar21._6_8_ = 0;
  auVar21._0_6_ = auVar13._8_6_;
  auVar18._4_2_ = uVar5;
  auVar18._0_4_ = (uint)uVar16;
  auVar18._6_8_ = SUB148(auVar21 << 0x40,6);
  uVar20 = CONCAT62(CONCAT42(CONCAT22(uVar7,uVar6),uVar8),(short)((uint)iVar23 >> 0x10));
  auVar10._8_4_ = 0;
  auVar10._0_8_ = uVar20;
  auVar10._12_2_ = uVar7;
  auVar14._8_2_ = uVar6;
  auVar14._0_8_ = uVar20;
  auVar14._10_4_ = auVar10._10_4_;
  auVar11._8_4_ = 0;
  auVar11._0_8_ = uVar20;
  auVar11._12_2_ = uVar7;
  auVar15._8_2_ = uVar6;
  auVar15._0_8_ = uVar20;
  auVar15._10_4_ = auVar11._10_4_;
  auVar22._6_8_ = 0;
  auVar22._0_6_ = auVar15._8_6_;
  auVar19._4_2_ = uVar8;
  auVar19._0_4_ = (uint)uVar20;
  auVar19._6_8_ = SUB148(auVar22 << 0x40,6);
  *param_2 = CONCAT44(auVar18._4_4_ + auVar19._4_4_,
                      ((uint)uVar16 & 0xffff) + ((uint)uVar20 & 0xffff));
  param_2[1] = CONCAT44((auVar10._10_4_ >> 0x10) + (auVar12._10_4_ >> 0x10),
                        auVar14._8_4_ + auVar17._8_4_);
  return;
}



int SSE8x8_SSE2(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  long lVar44;
  int iVar45;
  int iVar47;
  int iVar48;
  undefined1 auVar46 [16];
  int iVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  
  lVar44 = 0;
  iVar45 = 0;
  iVar47 = 0;
  iVar48 = 0;
  iVar49 = 0;
  do {
    uVar1 = *(ulong *)(param_1 + lVar44);
    uVar2 = *(ulong *)(param_1 + 0x20 + lVar44);
    uVar3 = *(ulong *)(param_2 + lVar44);
    uVar4 = *(ulong *)(param_2 + 0x20 + lVar44);
    lVar44 = lVar44 + 0x40;
    auVar8._8_6_ = 0;
    auVar8._0_8_ = uVar1;
    auVar8[0xe] = (char)(uVar1 >> 0x38);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar1;
    auVar12[0xc] = (char)(uVar1 >> 0x30);
    auVar12._13_2_ = auVar8._13_2_;
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar1;
    auVar16._12_3_ = auVar12._12_3_;
    auVar20._8_2_ = 0;
    auVar20._0_8_ = uVar1;
    auVar20[10] = (char)(uVar1 >> 0x28);
    auVar20._11_4_ = auVar16._11_4_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar1;
    auVar24._10_5_ = auVar20._10_5_;
    auVar28[8] = (char)(uVar1 >> 0x20);
    auVar28._0_8_ = uVar1;
    auVar28._9_6_ = auVar24._9_6_;
    auVar32._7_8_ = 0;
    auVar32._0_7_ = auVar28._8_7_;
    auVar36._1_8_ = SUB158(auVar32 << 0x40,7);
    auVar36[0] = (char)(uVar1 >> 0x18);
    auVar36._9_6_ = 0;
    auVar37._1_10_ = SUB1510(auVar36 << 0x30,5);
    auVar37[0] = (char)(uVar1 >> 0x10);
    auVar37._11_4_ = 0;
    auVar50._3_12_ = SUB1512(auVar37 << 0x20,3);
    auVar50[2] = (char)(uVar1 >> 8);
    auVar50[0] = (byte)uVar1;
    auVar50[1] = 0;
    auVar50[0xf] = 0;
    auVar5._8_6_ = 0;
    auVar5._0_8_ = uVar2;
    auVar5[0xe] = (char)(uVar2 >> 0x38);
    auVar9._8_4_ = 0;
    auVar9._0_8_ = uVar2;
    auVar9[0xc] = (char)(uVar2 >> 0x30);
    auVar9._13_2_ = auVar5._13_2_;
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar2;
    auVar13._12_3_ = auVar9._12_3_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar2;
    auVar17[10] = (char)(uVar2 >> 0x28);
    auVar17._11_4_ = auVar13._11_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar2;
    auVar21._10_5_ = auVar17._10_5_;
    auVar25[8] = (char)(uVar2 >> 0x20);
    auVar25._0_8_ = uVar2;
    auVar25._9_6_ = auVar21._9_6_;
    auVar33._7_8_ = 0;
    auVar33._0_7_ = auVar25._8_7_;
    auVar38._1_8_ = SUB158(auVar33 << 0x40,7);
    auVar38[0] = (char)(uVar2 >> 0x18);
    auVar38._9_6_ = 0;
    auVar39._1_10_ = SUB1510(auVar38 << 0x30,5);
    auVar39[0] = (char)(uVar2 >> 0x10);
    auVar39._11_4_ = 0;
    auVar29[2] = (char)(uVar2 >> 8);
    auVar29._0_2_ = (ushort)uVar2;
    auVar29._3_12_ = SUB1512(auVar39 << 0x20,3);
    auVar46._0_2_ = (ushort)uVar2 & 0xff;
    auVar46._2_13_ = auVar29._2_13_;
    auVar46[0xf] = 0;
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar3;
    auVar6[0xe] = (char)(uVar3 >> 0x38);
    auVar10._8_4_ = 0;
    auVar10._0_8_ = uVar3;
    auVar10[0xc] = (char)(uVar3 >> 0x30);
    auVar10._13_2_ = auVar6._13_2_;
    auVar14._8_4_ = 0;
    auVar14._0_8_ = uVar3;
    auVar14._12_3_ = auVar10._12_3_;
    auVar18._8_2_ = 0;
    auVar18._0_8_ = uVar3;
    auVar18[10] = (char)(uVar3 >> 0x28);
    auVar18._11_4_ = auVar14._11_4_;
    auVar22._8_2_ = 0;
    auVar22._0_8_ = uVar3;
    auVar22._10_5_ = auVar18._10_5_;
    auVar26[8] = (char)(uVar3 >> 0x20);
    auVar26._0_8_ = uVar3;
    auVar26._9_6_ = auVar22._9_6_;
    auVar34._7_8_ = 0;
    auVar34._0_7_ = auVar26._8_7_;
    auVar40._1_8_ = SUB158(auVar34 << 0x40,7);
    auVar40[0] = (char)(uVar3 >> 0x18);
    auVar40._9_6_ = 0;
    auVar41._1_10_ = SUB1510(auVar40 << 0x30,5);
    auVar41[0] = (char)(uVar3 >> 0x10);
    auVar41._11_4_ = 0;
    auVar30[2] = (char)(uVar3 >> 8);
    auVar30._0_2_ = (ushort)uVar3;
    auVar30._3_12_ = SUB1512(auVar41 << 0x20,3);
    auVar52._0_2_ = (ushort)uVar3 & 0xff;
    auVar52._2_13_ = auVar30._2_13_;
    auVar52[0xf] = 0;
    auVar7._8_6_ = 0;
    auVar7._0_8_ = uVar4;
    auVar7[0xe] = (char)(uVar4 >> 0x38);
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar4;
    auVar11[0xc] = (char)(uVar4 >> 0x30);
    auVar11._13_2_ = auVar7._13_2_;
    auVar15._8_4_ = 0;
    auVar15._0_8_ = uVar4;
    auVar15._12_3_ = auVar11._12_3_;
    auVar19._8_2_ = 0;
    auVar19._0_8_ = uVar4;
    auVar19[10] = (char)(uVar4 >> 0x28);
    auVar19._11_4_ = auVar15._11_4_;
    auVar23._8_2_ = 0;
    auVar23._0_8_ = uVar4;
    auVar23._10_5_ = auVar19._10_5_;
    auVar27[8] = (char)(uVar4 >> 0x20);
    auVar27._0_8_ = uVar4;
    auVar27._9_6_ = auVar23._9_6_;
    auVar35._7_8_ = 0;
    auVar35._0_7_ = auVar27._8_7_;
    auVar42._1_8_ = SUB158(auVar35 << 0x40,7);
    auVar42[0] = (char)(uVar4 >> 0x18);
    auVar42._9_6_ = 0;
    auVar43._1_10_ = SUB1510(auVar42 << 0x30,5);
    auVar43[0] = (char)(uVar4 >> 0x10);
    auVar43._11_4_ = 0;
    auVar31[2] = (char)(uVar4 >> 8);
    auVar31._0_2_ = (ushort)uVar4;
    auVar31._3_12_ = SUB1512(auVar43 << 0x20,3);
    auVar51._0_2_ = (ushort)uVar4 & 0xff;
    auVar51._2_13_ = auVar31._2_13_;
    auVar51[0xf] = 0;
    auVar50 = psubsw(auVar50,auVar52);
    auVar46 = psubsw(auVar46,auVar51);
    auVar50 = pmaddwd(auVar50,auVar50);
    auVar46 = pmaddwd(auVar46,auVar46);
    iVar45 = auVar46._0_4_ + auVar50._0_4_ + iVar45;
    iVar47 = auVar46._4_4_ + auVar50._4_4_ + iVar47;
    iVar48 = auVar46._8_4_ + auVar50._8_4_ + iVar48;
    iVar49 = auVar46._12_4_ + auVar50._12_4_ + iVar49;
  } while (lVar44 != 0x100);
  return iVar45 + iVar49 + iVar48 + iVar47;
}



int SSE4x4_SSE2(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar54 [16];
  undefined1 auVar57 [16];
  
  lVar1 = param_1[4];
  uVar2 = *param_1;
  lVar3 = param_1[0xc];
  uVar4 = *param_2;
  auVar50._8_4_ = (int)((ulong)uVar2 >> 0x20);
  auVar50._0_8_ = uVar2;
  auVar50._12_4_ = (int)((ulong)lVar1 >> 0x20);
  auVar49._4_8_ = auVar50._8_8_;
  auVar49._0_4_ = (int)lVar1;
  auVar49._12_4_ = 0;
  auVar49 = auVar49 << 0x20;
  uVar5 = param_1[8];
  lVar6 = param_2[0xc];
  auVar47._8_4_ = (int)((ulong)uVar5 >> 0x20);
  auVar47._0_8_ = uVar5;
  auVar47._12_4_ = (int)((ulong)lVar3 >> 0x20);
  auVar52._4_8_ = auVar47._8_8_;
  auVar52._0_4_ = (int)lVar3;
  auVar52._12_4_ = 0;
  auVar52 = auVar52 << 0x20;
  lVar7 = param_2[4];
  auVar57._8_4_ = (int)((ulong)uVar4 >> 0x20);
  auVar57._0_8_ = uVar4;
  auVar57._12_4_ = (int)((ulong)lVar7 >> 0x20);
  auVar56._4_8_ = auVar57._8_8_;
  auVar56._0_4_ = (int)lVar7;
  auVar56._12_4_ = 0;
  auVar56 = auVar56 << 0x20;
  uVar8 = param_2[8];
  auVar54._8_4_ = (int)((ulong)uVar8 >> 0x20);
  auVar54._0_8_ = uVar8;
  auVar54._12_4_ = (int)((ulong)lVar6 >> 0x20);
  auVar53._4_8_ = auVar54._8_8_;
  auVar53._0_4_ = (int)lVar6;
  auVar53._12_4_ = 0;
  auVar53 = auVar53 << 0x20;
  auVar12[0xd] = 0;
  auVar12._0_13_ = auVar53._0_13_;
  auVar12[0xe] = (char)((ulong)lVar6 >> 0x18);
  auVar16[0xc] = (char)((ulong)lVar6 >> 0x10);
  auVar16._0_12_ = auVar53._0_12_;
  auVar16._13_2_ = auVar12._13_2_;
  auVar20[0xb] = 0;
  auVar20._0_11_ = auVar53._0_11_;
  auVar20._12_3_ = auVar16._12_3_;
  auVar24[10] = (char)((ulong)lVar6 >> 8);
  auVar24._0_10_ = auVar53._0_10_;
  auVar24._11_4_ = auVar20._11_4_;
  auVar28[9] = 0;
  auVar28._0_9_ = auVar53._0_9_;
  auVar28._10_5_ = auVar24._10_5_;
  auVar32[8] = (char)lVar6;
  auVar32._0_8_ = lVar6 << 0x20;
  auVar32._9_6_ = auVar28._9_6_;
  auVar35._7_8_ = 0;
  auVar35._0_7_ = auVar32._8_7_;
  auVar39._1_8_ = SUB158(auVar35 << 0x40,7);
  auVar39[0] = (char)((ulong)uVar8 >> 0x18);
  auVar39._9_6_ = 0;
  auVar40._1_10_ = SUB1510(auVar39 << 0x30,5);
  auVar40[0] = (char)((ulong)uVar8 >> 0x10);
  auVar40._11_4_ = 0;
  auVar55._3_12_ = SUB1512(auVar40 << 0x20,3);
  auVar55[2] = (char)((ulong)uVar8 >> 8);
  auVar55[0] = (byte)uVar8;
  auVar55[1] = 0;
  auVar55[0xf] = 0;
  auVar9[0xd] = 0;
  auVar9._0_13_ = auVar49._0_13_;
  auVar9[0xe] = (char)((ulong)lVar1 >> 0x18);
  auVar13[0xc] = (char)((ulong)lVar1 >> 0x10);
  auVar13._0_12_ = auVar49._0_12_;
  auVar13._13_2_ = auVar9._13_2_;
  auVar17[0xb] = 0;
  auVar17._0_11_ = auVar49._0_11_;
  auVar17._12_3_ = auVar13._12_3_;
  auVar21[10] = (char)((ulong)lVar1 >> 8);
  auVar21._0_10_ = auVar49._0_10_;
  auVar21._11_4_ = auVar17._11_4_;
  auVar25[9] = 0;
  auVar25._0_9_ = auVar49._0_9_;
  auVar25._10_5_ = auVar21._10_5_;
  auVar29[8] = (char)lVar1;
  auVar29._0_8_ = lVar1 << 0x20;
  auVar29._9_6_ = auVar25._9_6_;
  auVar36._7_8_ = 0;
  auVar36._0_7_ = auVar29._8_7_;
  auVar41._1_8_ = SUB158(auVar36 << 0x40,7);
  auVar41[0] = (char)((ulong)uVar2 >> 0x18);
  auVar41._9_6_ = 0;
  auVar42._1_10_ = SUB1510(auVar41 << 0x30,5);
  auVar42[0] = (char)((ulong)uVar2 >> 0x10);
  auVar42._11_4_ = 0;
  auVar33[2] = (char)((ulong)uVar2 >> 8);
  auVar33._0_2_ = (ushort)uVar2;
  auVar33._3_12_ = SUB1512(auVar42 << 0x20,3);
  auVar51._0_2_ = (ushort)uVar2 & 0xff;
  auVar51._2_13_ = auVar33._2_13_;
  auVar51[0xf] = 0;
  auVar10[0xd] = 0;
  auVar10._0_13_ = auVar52._0_13_;
  auVar10[0xe] = (char)((ulong)lVar3 >> 0x18);
  auVar14[0xc] = (char)((ulong)lVar3 >> 0x10);
  auVar14._0_12_ = auVar52._0_12_;
  auVar14._13_2_ = auVar10._13_2_;
  auVar18[0xb] = 0;
  auVar18._0_11_ = auVar52._0_11_;
  auVar18._12_3_ = auVar14._12_3_;
  auVar22[10] = (char)((ulong)lVar3 >> 8);
  auVar22._0_10_ = auVar52._0_10_;
  auVar22._11_4_ = auVar18._11_4_;
  auVar26[9] = 0;
  auVar26._0_9_ = auVar52._0_9_;
  auVar26._10_5_ = auVar22._10_5_;
  auVar30[8] = (char)lVar3;
  auVar30._0_8_ = lVar3 << 0x20;
  auVar30._9_6_ = auVar26._9_6_;
  auVar37._7_8_ = 0;
  auVar37._0_7_ = auVar30._8_7_;
  auVar43._1_8_ = SUB158(auVar37 << 0x40,7);
  auVar43[0] = (char)((ulong)uVar5 >> 0x18);
  auVar43._9_6_ = 0;
  auVar44._1_10_ = SUB1510(auVar43 << 0x30,5);
  auVar44[0] = (char)((ulong)uVar5 >> 0x10);
  auVar44._11_4_ = 0;
  auVar48._3_12_ = SUB1512(auVar44 << 0x20,3);
  auVar48[2] = (char)((ulong)uVar5 >> 8);
  auVar48[0] = (byte)uVar5;
  auVar48[1] = 0;
  auVar48[0xf] = 0;
  auVar11[0xd] = 0;
  auVar11._0_13_ = auVar56._0_13_;
  auVar11[0xe] = (char)((ulong)lVar7 >> 0x18);
  auVar15[0xc] = (char)((ulong)lVar7 >> 0x10);
  auVar15._0_12_ = auVar56._0_12_;
  auVar15._13_2_ = auVar11._13_2_;
  auVar19[0xb] = 0;
  auVar19._0_11_ = auVar56._0_11_;
  auVar19._12_3_ = auVar15._12_3_;
  auVar23[10] = (char)((ulong)lVar7 >> 8);
  auVar23._0_10_ = auVar56._0_10_;
  auVar23._11_4_ = auVar19._11_4_;
  auVar27[9] = 0;
  auVar27._0_9_ = auVar56._0_9_;
  auVar27._10_5_ = auVar23._10_5_;
  auVar31[8] = (char)lVar7;
  auVar31._0_8_ = lVar7 << 0x20;
  auVar31._9_6_ = auVar27._9_6_;
  auVar38._7_8_ = 0;
  auVar38._0_7_ = auVar31._8_7_;
  auVar45._1_8_ = SUB158(auVar38 << 0x40,7);
  auVar45[0] = (char)((ulong)uVar4 >> 0x18);
  auVar45._9_6_ = 0;
  auVar46._1_10_ = SUB1510(auVar45 << 0x30,5);
  auVar46[0] = (char)((ulong)uVar4 >> 0x10);
  auVar46._11_4_ = 0;
  auVar34[2] = (char)((ulong)uVar4 >> 8);
  auVar34._0_2_ = (ushort)uVar4;
  auVar34._3_12_ = SUB1512(auVar46 << 0x20,3);
  auVar58._0_2_ = (ushort)uVar4 & 0xff;
  auVar58._2_13_ = auVar34._2_13_;
  auVar58[0xf] = 0;
  auVar49 = psubsw(auVar48,auVar55);
  auVar52 = psubsw(auVar51,auVar58);
  auVar49 = pmaddwd(auVar49,auVar49);
  auVar52 = pmaddwd(auVar52,auVar52);
  return auVar49._0_4_ + auVar52._0_4_ +
         auVar49._8_4_ + auVar52._8_4_ + auVar49._12_4_ + auVar52._12_4_ +
         auVar49._4_4_ + auVar52._4_4_;
}



int SSE16x8_SSE2(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
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
  long lVar22;
  int iVar23;
  int iVar26;
  int iVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar22 = 0;
  iVar23 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar28 = 0;
  do {
    pauVar1 = (undefined1 (*) [16])(param_1 + 0x20 + lVar22);
    auVar29 = psubusb(*(undefined1 (*) [16])(param_2 + lVar22),
                      *(undefined1 (*) [16])(param_1 + lVar22));
    auVar24 = psubusb(*(undefined1 (*) [16])(param_1 + lVar22),
                      *(undefined1 (*) [16])(param_2 + lVar22));
    auVar25 = *(undefined1 (*) [16])(param_2 + 0x20 + lVar22);
    pauVar2 = (undefined1 (*) [16])(param_1 + 0x20 + lVar22);
    auVar24 = auVar24 | auVar29;
    lVar22 = lVar22 + 0x40;
    auVar29[1] = 0;
    auVar29[0] = auVar24[8];
    auVar29[2] = auVar24[9];
    auVar29[3] = 0;
    auVar29[4] = auVar24[10];
    auVar29[5] = 0;
    auVar29[6] = auVar24[0xb];
    auVar29[7] = 0;
    auVar29[8] = auVar24[0xc];
    auVar29[9] = 0;
    auVar29[10] = auVar24[0xd];
    auVar29[0xb] = 0;
    auVar29[0xc] = auVar24[0xe];
    auVar29[0xd] = 0;
    auVar29[0xe] = auVar24[0xf];
    auVar29[0xf] = 0;
    auVar30 = psubusb(*pauVar1,auVar25);
    auVar4[0xd] = 0;
    auVar4._0_13_ = auVar24._0_13_;
    auVar4[0xe] = auVar24[7];
    auVar6[0xc] = auVar24[6];
    auVar6._0_12_ = auVar24._0_12_;
    auVar6._13_2_ = auVar4._13_2_;
    auVar8[0xb] = 0;
    auVar8._0_11_ = auVar24._0_11_;
    auVar8._12_3_ = auVar6._12_3_;
    auVar10[10] = auVar24[5];
    auVar10._0_10_ = auVar24._0_10_;
    auVar10._11_4_ = auVar8._11_4_;
    auVar12[9] = 0;
    auVar12._0_9_ = auVar24._0_9_;
    auVar12._10_5_ = auVar10._10_5_;
    auVar14[8] = auVar24[4];
    auVar14._0_8_ = auVar24._0_8_;
    auVar14._9_6_ = auVar12._9_6_;
    auVar16._7_8_ = 0;
    auVar16._0_7_ = auVar14._8_7_;
    auVar18._1_8_ = SUB158(auVar16 << 0x40,7);
    auVar18[0] = auVar24[3];
    auVar18._9_6_ = 0;
    auVar19._1_10_ = SUB1510(auVar18 << 0x30,5);
    auVar19[0] = auVar24[2];
    auVar19._11_4_ = 0;
    auVar32._3_12_ = SUB1512(auVar19 << 0x20,3);
    auVar32[2] = auVar24[1];
    auVar32[0] = auVar24[0];
    auVar32[1] = 0;
    auVar32[0xf] = 0;
    auVar32 = pmaddwd(auVar32,auVar32);
    auVar24 = pmaddwd(auVar29,auVar29);
    auVar25 = psubusb(auVar25,*pauVar2);
    auVar30 = auVar30 | auVar25;
    auVar31[1] = 0;
    auVar31[0] = auVar30[8];
    auVar31[2] = auVar30[9];
    auVar31[3] = 0;
    auVar31[4] = auVar30[10];
    auVar31[5] = 0;
    auVar31[6] = auVar30[0xb];
    auVar31[7] = 0;
    auVar31[8] = auVar30[0xc];
    auVar31[9] = 0;
    auVar31[10] = auVar30[0xd];
    auVar31[0xb] = 0;
    auVar31[0xc] = auVar30[0xe];
    auVar31[0xd] = 0;
    auVar31[0xe] = auVar30[0xf];
    auVar31[0xf] = 0;
    auVar3[0xd] = 0;
    auVar3._0_13_ = auVar30._0_13_;
    auVar3[0xe] = auVar30[7];
    auVar5[0xc] = auVar30[6];
    auVar5._0_12_ = auVar30._0_12_;
    auVar5._13_2_ = auVar3._13_2_;
    auVar7[0xb] = 0;
    auVar7._0_11_ = auVar30._0_11_;
    auVar7._12_3_ = auVar5._12_3_;
    auVar9[10] = auVar30[5];
    auVar9._0_10_ = auVar30._0_10_;
    auVar9._11_4_ = auVar7._11_4_;
    auVar11[9] = 0;
    auVar11._0_9_ = auVar30._0_9_;
    auVar11._10_5_ = auVar9._10_5_;
    auVar13[8] = auVar30[4];
    auVar13._0_8_ = auVar30._0_8_;
    auVar13._9_6_ = auVar11._9_6_;
    auVar17._7_8_ = 0;
    auVar17._0_7_ = auVar13._8_7_;
    auVar20._1_8_ = SUB158(auVar17 << 0x40,7);
    auVar20[0] = auVar30[3];
    auVar20._9_6_ = 0;
    auVar21._1_10_ = SUB1510(auVar20 << 0x30,5);
    auVar21[0] = auVar30[2];
    auVar21._11_4_ = 0;
    auVar15[2] = auVar30[1];
    auVar15._0_2_ = auVar30._0_2_;
    auVar15._3_12_ = SUB1512(auVar21 << 0x20,3);
    auVar25._0_2_ = auVar30._0_2_ & 0xff;
    auVar25._2_13_ = auVar15._2_13_;
    auVar25[0xf] = 0;
    auVar29 = pmaddwd(auVar31,auVar31);
    auVar25 = pmaddwd(auVar25,auVar25);
    iVar23 = auVar25._0_4_ + auVar29._0_4_ + auVar24._0_4_ + auVar32._0_4_ + iVar23;
    iVar26 = auVar25._4_4_ + auVar29._4_4_ + auVar24._4_4_ + auVar32._4_4_ + iVar26;
    iVar27 = auVar25._8_4_ + auVar29._8_4_ + auVar24._8_4_ + auVar32._8_4_ + iVar27;
    iVar28 = auVar25._12_4_ + auVar29._12_4_ + auVar24._12_4_ + auVar32._12_4_ + iVar28;
  } while (lVar22 != 0x100);
  return iVar23 + iVar28 + iVar27 + iVar26;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTransformPass2_SSE2_isra_0(undefined8 *param_1)

{
  short in_XMM0_Wa;
  short in_XMM0_Wb;
  short in_XMM0_Wc;
  short in_XMM0_Wd;
  short in_XMM0_We;
  short in_XMM0_Wf;
  short in_XMM0_Wg;
  short in_XMM0_Wh;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  short in_XMM1_Wa;
  short in_XMM1_Wb;
  short in_XMM1_Wc;
  short in_XMM1_Wd;
  short in_XMM1_We;
  short sVar3;
  short in_XMM1_Wf;
  short sVar4;
  short in_XMM1_Wg;
  short sVar5;
  short in_XMM1_Wh;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  short sVar10;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  sVar16 = in_XMM0_Wd - in_XMM1_Wd;
  sVar3 = in_XMM1_We + in_XMM0_We;
  sVar4 = in_XMM1_Wf + in_XMM0_Wf;
  sVar5 = in_XMM1_Wg + in_XMM0_Wg;
  sVar6 = in_XMM1_Wh + in_XMM0_Wh;
  auVar1._8_8_ = (undefined8)
                 (CONCAT28(in_XMM0_Wh - in_XMM1_Wh,
                           CONCAT26(in_XMM0_Wg - in_XMM1_Wg,
                                    CONCAT24(in_XMM0_Wf - in_XMM1_Wf,
                                             CONCAT22(in_XMM0_We - in_XMM1_We,sVar16)))) >> 0x10);
  auVar1._0_8_ = auVar1._8_8_;
  sVar10 = __LC5 + in_XMM1_Wa + in_XMM0_Wa;
  sVar13 = _UNK_00102492 + in_XMM1_Wb + in_XMM0_Wb;
  sVar14 = _UNK_00102494 + in_XMM1_Wc + in_XMM0_Wc;
  sVar15 = _UNK_00102496 + in_XMM1_Wd + in_XMM0_Wd;
  auVar18._0_12_ = auVar1._0_12_;
  auVar18._12_2_ = in_XMM0_Wh - in_XMM1_Wh;
  auVar18._14_2_ = sVar16;
  auVar12._12_4_ = auVar18._12_4_;
  auVar12._0_10_ = auVar1._0_10_;
  auVar12._10_2_ = in_XMM0_Wc - in_XMM1_Wc;
  auVar7._10_6_ = auVar12._10_6_;
  auVar7._8_2_ = in_XMM0_Wg - in_XMM1_Wg;
  auVar7._0_8_ = auVar1._8_8_;
  auVar9._8_8_ = auVar7._8_8_;
  auVar9._6_2_ = in_XMM0_Wb - in_XMM1_Wb;
  auVar9._4_2_ = in_XMM0_Wf - in_XMM1_Wf;
  auVar9._2_2_ = in_XMM0_Wa - in_XMM1_Wa;
  auVar9._0_2_ = in_XMM0_We - in_XMM1_We;
  auVar7 = pmaddwd(__LC1,auVar9);
  auVar1 = pmaddwd(auVar9,__LC2);
  auVar17._0_2_ = sVar10 + sVar3;
  auVar17._2_2_ = sVar13 + sVar4;
  auVar17._4_2_ = sVar14 + sVar5;
  auVar17._6_2_ = sVar15 + sVar6;
  auVar17._8_2_ = _UNK_00102498 + sVar3 + sVar3;
  auVar17._10_2_ = _UNK_0010249a + sVar4 + sVar4;
  auVar17._12_2_ = _UNK_0010249c + sVar5 + sVar5;
  auVar17._14_2_ = _UNK_0010249e + sVar6 + sVar6;
  auVar11._0_2_ = sVar10 - sVar3;
  auVar11._2_2_ = sVar13 - sVar4;
  auVar11._4_2_ = sVar14 - sVar5;
  auVar11._6_2_ = sVar15 - sVar6;
  auVar11._8_2_ = (_UNK_00102498 + sVar3) - sVar3;
  auVar11._10_2_ = (_UNK_0010249a + sVar4) - sVar4;
  auVar11._12_2_ = (_UNK_0010249c + sVar5) - sVar5;
  auVar11._14_2_ = (_UNK_0010249e + sVar6) - sVar6;
  auVar18 = psraw(auVar17,4);
  auVar12 = psraw(auVar11,4);
  auVar8._0_4_ = auVar7._0_4_ + __LC3 >> 0x10;
  auVar8._4_4_ = auVar7._4_4_ + _UNK_00102474 >> 0x10;
  auVar8._8_4_ = auVar7._8_4_ + _UNK_00102478 >> 0x10;
  auVar8._12_4_ = auVar7._12_4_ + _UNK_0010247c >> 0x10;
  auVar2._0_4_ = auVar1._0_4_ + __LC4 >> 0x10;
  auVar2._4_4_ = auVar1._4_4_ + _UNK_00102484 >> 0x10;
  auVar2._8_4_ = auVar1._8_4_ + _UNK_00102488 >> 0x10;
  auVar2._12_4_ = auVar1._12_4_ + _UNK_0010248c >> 0x10;
  auVar9 = packssdw(auVar8,auVar8);
  auVar1 = packssdw(auVar2,auVar2);
  param_1[2] = auVar12._0_8_;
  param_1[3] = auVar1._0_8_;
  *param_1 = auVar18._0_8_;
  param_1[1] = CONCAT26(auVar9._6_2_ - (ushort)(sVar16 == 0),
                        CONCAT24(auVar9._4_2_ - (ushort)((short)(in_XMM0_Wc - in_XMM1_Wc) == 0),
                                 CONCAT22(auVar9._2_2_ -
                                          (ushort)((short)(in_XMM0_Wb - in_XMM1_Wb) == 0),
                                          auVar9._0_2_ -
                                          (ushort)((short)(in_XMM0_Wa - in_XMM1_Wa) == 0))));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTransformPass1_SSE2_isra_0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [12];
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar6 [16];
  undefined4 uVar14;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar13 [16];
  undefined1 auVar5 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar9 [16];
  
  auVar6 = pshufhw(in_XMM2,in_XMM1,0xb1);
  auVar2 = pshufhw(in_XMM0,in_XMM0,0xb1);
  auVar7._0_2_ = auVar2._8_2_ + auVar2._0_2_;
  auVar7._2_2_ = auVar2._10_2_ + auVar2._2_2_;
  auVar7._4_2_ = auVar2._12_2_ + auVar2._4_2_;
  auVar7._6_2_ = auVar2._14_2_ + auVar2._6_2_;
  auVar7._8_2_ = auVar6._8_2_ + auVar6._0_2_;
  auVar7._10_2_ = auVar6._10_2_ + auVar6._2_2_;
  auVar7._12_2_ = auVar6._12_2_ + auVar6._4_2_;
  auVar7._14_2_ = auVar6._14_2_ + auVar6._6_2_;
  auVar3._0_2_ = auVar2._0_2_ - auVar2._8_2_;
  auVar3._2_2_ = auVar2._2_2_ - auVar2._10_2_;
  auVar3._4_2_ = auVar2._4_2_ - auVar2._12_2_;
  auVar3._6_2_ = auVar2._6_2_ - auVar2._14_2_;
  auVar3._8_2_ = auVar6._0_2_ - auVar6._8_2_;
  auVar3._10_2_ = auVar6._2_2_ - auVar6._10_2_;
  auVar3._12_2_ = auVar6._4_2_ - auVar6._12_2_;
  auVar3._14_2_ = auVar6._6_2_ - auVar6._14_2_;
  auVar6 = pmaddwd(__LC6,auVar7);
  auVar8 = pmaddwd(auVar7,__LC7);
  auVar2 = pmaddwd(__LC8,auVar3);
  auVar8 = packssdw(auVar6,auVar8);
  auVar3 = pmaddwd(auVar3,__LC9);
  auVar6._0_4_ = auVar2._0_4_ + __LC10 >> 9;
  auVar6._4_4_ = auVar2._4_4_ + _UNK_001024e4 >> 9;
  auVar6._8_4_ = auVar2._8_4_ + _UNK_001024e8 >> 9;
  auVar6._12_4_ = auVar2._12_4_ + _UNK_001024ec >> 9;
  auVar2._0_4_ = auVar3._0_4_ + __LC11 >> 9;
  auVar2._4_4_ = auVar3._4_4_ + _UNK_001024f4 >> 9;
  auVar2._8_4_ = auVar3._8_4_ + _UNK_001024f8 >> 9;
  auVar2._12_4_ = auVar3._12_4_ + _UNK_001024fc >> 9;
  auVar2 = packssdw(auVar6,auVar2);
  auVar12._0_12_ = auVar8._0_12_;
  auVar12._12_2_ = auVar8._6_2_;
  auVar12._14_2_ = auVar2._6_2_;
  auVar11._12_4_ = auVar12._12_4_;
  auVar11._0_10_ = auVar8._0_10_;
  auVar11._10_2_ = auVar2._4_2_;
  auVar10._10_6_ = auVar11._10_6_;
  auVar10._0_8_ = auVar8._0_8_;
  auVar10._8_2_ = auVar8._4_2_;
  auVar1._4_8_ = auVar10._8_8_;
  auVar1._2_2_ = auVar2._2_2_;
  auVar1._0_2_ = auVar8._2_2_;
  uVar14 = CONCAT22(auVar2._0_2_,auVar8._0_2_);
  auVar9._4_12_ = auVar1;
  uVar4 = CONCAT22(auVar2._8_2_,auVar8._8_2_);
  auVar5._0_8_ = CONCAT26(auVar2._10_2_,CONCAT24(auVar8._10_2_,uVar4));
  auVar5._8_2_ = auVar8._12_2_;
  auVar5._10_2_ = auVar2._12_2_;
  auVar8._12_2_ = auVar8._14_2_;
  auVar8._0_12_ = auVar5;
  auVar8._14_2_ = auVar2._14_2_;
  auVar13._0_8_ = auVar9._0_8_;
  auVar13._8_4_ = auVar1._0_4_;
  auVar13._12_4_ = (int)((ulong)auVar5._0_8_ >> 0x20);
  *param_1 = CONCAT44(uVar4,uVar14);
  param_1[1] = auVar13._8_8_;
  *param_2 = auVar11._12_4_;
  param_2[1] = auVar8._12_4_;
  param_2[2] = auVar10._8_4_;
  param_2[3] = auVar5._8_4_;
  return;
}



void FTransform2_SSE2(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  long in_FS_OFFSET;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  undefined8 local_28 [3];
  long local_10;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_1[4];
  uVar4 = param_1[8];
  uVar5 = param_1[0xc];
  auVar13._8_6_ = 0;
  auVar13._0_8_ = uVar1;
  auVar13[0xe] = (char)(uVar1 >> 0x38);
  auVar21._8_4_ = 0;
  auVar21._0_8_ = uVar1;
  auVar21[0xc] = (char)(uVar1 >> 0x30);
  auVar21._13_2_ = auVar13._13_2_;
  auVar29._8_4_ = 0;
  auVar29._0_8_ = uVar1;
  auVar29._12_3_ = auVar21._12_3_;
  auVar37._8_2_ = 0;
  auVar37._0_8_ = uVar1;
  auVar37[10] = (char)(uVar1 >> 0x28);
  auVar37._11_4_ = auVar29._11_4_;
  auVar45._8_2_ = 0;
  auVar45._0_8_ = uVar1;
  auVar45._10_5_ = auVar37._10_5_;
  auVar53[8] = (char)(uVar1 >> 0x20);
  auVar53._0_8_ = uVar1;
  auVar53._9_6_ = auVar45._9_6_;
  auVar6._8_6_ = 0;
  auVar6._0_8_ = uVar2;
  auVar6[0xe] = (char)(uVar2 >> 0x38);
  auVar14._8_4_ = 0;
  auVar14._0_8_ = uVar2;
  auVar14[0xc] = (char)(uVar2 >> 0x30);
  auVar14._13_2_ = auVar6._13_2_;
  auVar22._8_4_ = 0;
  auVar22._0_8_ = uVar2;
  auVar22._12_3_ = auVar14._12_3_;
  auVar30._8_2_ = 0;
  auVar30._0_8_ = uVar2;
  auVar30[10] = (char)(uVar2 >> 0x28);
  auVar30._11_4_ = auVar22._11_4_;
  auVar38._8_2_ = 0;
  auVar38._0_8_ = uVar2;
  auVar38._10_5_ = auVar30._10_5_;
  auVar46[8] = (char)(uVar2 >> 0x20);
  auVar46._0_8_ = uVar2;
  auVar46._9_6_ = auVar38._9_6_;
  uVar1 = param_2[8];
  auVar7._8_6_ = 0;
  auVar7._0_8_ = uVar3;
  auVar7[0xe] = (char)(uVar3 >> 0x38);
  auVar15._8_4_ = 0;
  auVar15._0_8_ = uVar3;
  auVar15[0xc] = (char)(uVar3 >> 0x30);
  auVar15._13_2_ = auVar7._13_2_;
  auVar23._8_4_ = 0;
  auVar23._0_8_ = uVar3;
  auVar23._12_3_ = auVar15._12_3_;
  auVar31._8_2_ = 0;
  auVar31._0_8_ = uVar3;
  auVar31[10] = (char)(uVar3 >> 0x28);
  auVar31._11_4_ = auVar23._11_4_;
  auVar39._8_2_ = 0;
  auVar39._0_8_ = uVar3;
  auVar39._10_5_ = auVar31._10_5_;
  auVar47[8] = (char)(uVar3 >> 0x20);
  auVar47._0_8_ = uVar3;
  auVar47._9_6_ = auVar39._9_6_;
  auVar8._8_6_ = 0;
  auVar8._0_8_ = uVar4;
  auVar8[0xe] = (char)(uVar4 >> 0x38);
  auVar16._8_4_ = 0;
  auVar16._0_8_ = uVar4;
  auVar16[0xc] = (char)(uVar4 >> 0x30);
  auVar16._13_2_ = auVar8._13_2_;
  auVar24._8_4_ = 0;
  auVar24._0_8_ = uVar4;
  auVar24._12_3_ = auVar16._12_3_;
  auVar32._8_2_ = 0;
  auVar32._0_8_ = uVar4;
  auVar32[10] = (char)(uVar4 >> 0x28);
  auVar32._11_4_ = auVar24._11_4_;
  auVar40._8_2_ = 0;
  auVar40._0_8_ = uVar4;
  auVar40._10_5_ = auVar32._10_5_;
  auVar48[8] = (char)(uVar4 >> 0x20);
  auVar48._0_8_ = uVar4;
  auVar48._9_6_ = auVar40._9_6_;
  uVar2 = param_2[4];
  uVar3 = param_2[0xc];
  auVar9._8_6_ = 0;
  auVar9._0_8_ = uVar5;
  auVar9[0xe] = (char)(uVar5 >> 0x38);
  auVar17._8_4_ = 0;
  auVar17._0_8_ = uVar5;
  auVar17[0xc] = (char)(uVar5 >> 0x30);
  auVar17._13_2_ = auVar9._13_2_;
  auVar25._8_4_ = 0;
  auVar25._0_8_ = uVar5;
  auVar25._12_3_ = auVar17._12_3_;
  auVar33._8_2_ = 0;
  auVar33._0_8_ = uVar5;
  auVar33[10] = (char)(uVar5 >> 0x28);
  auVar33._11_4_ = auVar25._11_4_;
  auVar41._8_2_ = 0;
  auVar41._0_8_ = uVar5;
  auVar41._10_5_ = auVar33._10_5_;
  auVar49[8] = (char)(uVar5 >> 0x20);
  auVar49._0_8_ = uVar5;
  auVar49._9_6_ = auVar41._9_6_;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar10._8_6_ = 0;
  auVar10._0_8_ = uVar1;
  auVar10[0xe] = (char)(uVar1 >> 0x38);
  auVar18._8_4_ = 0;
  auVar18._0_8_ = uVar1;
  auVar18[0xc] = (char)(uVar1 >> 0x30);
  auVar18._13_2_ = auVar10._13_2_;
  auVar26._8_4_ = 0;
  auVar26._0_8_ = uVar1;
  auVar26._12_3_ = auVar18._12_3_;
  auVar34._8_2_ = 0;
  auVar34._0_8_ = uVar1;
  auVar34[10] = (char)(uVar1 >> 0x28);
  auVar34._11_4_ = auVar26._11_4_;
  auVar42._8_2_ = 0;
  auVar42._0_8_ = uVar1;
  auVar42._10_5_ = auVar34._10_5_;
  auVar50[8] = (char)(uVar1 >> 0x20);
  auVar50._0_8_ = uVar1;
  auVar50._9_6_ = auVar42._9_6_;
  auVar11._8_6_ = 0;
  auVar11._0_8_ = uVar3;
  auVar11[0xe] = (char)(uVar3 >> 0x38);
  auVar19._8_4_ = 0;
  auVar19._0_8_ = uVar3;
  auVar19[0xc] = (char)(uVar3 >> 0x30);
  auVar19._13_2_ = auVar11._13_2_;
  auVar27._8_4_ = 0;
  auVar27._0_8_ = uVar3;
  auVar27._12_3_ = auVar19._12_3_;
  auVar35._8_2_ = 0;
  auVar35._0_8_ = uVar3;
  auVar35[10] = (char)(uVar3 >> 0x28);
  auVar35._11_4_ = auVar27._11_4_;
  auVar43._8_2_ = 0;
  auVar43._0_8_ = uVar3;
  auVar43._10_5_ = auVar35._10_5_;
  auVar51[8] = (char)(uVar3 >> 0x20);
  auVar51._0_8_ = uVar3;
  auVar51._9_6_ = auVar43._9_6_;
  auVar12._8_6_ = 0;
  auVar12._0_8_ = uVar2;
  auVar12[0xe] = (char)(uVar2 >> 0x38);
  auVar20._8_4_ = 0;
  auVar20._0_8_ = uVar2;
  auVar20[0xc] = (char)(uVar2 >> 0x30);
  auVar20._13_2_ = auVar12._13_2_;
  auVar28._8_4_ = 0;
  auVar28._0_8_ = uVar2;
  auVar28._12_3_ = auVar20._12_3_;
  auVar36._8_2_ = 0;
  auVar36._0_8_ = uVar2;
  auVar36[10] = (char)(uVar2 >> 0x28);
  auVar36._11_4_ = auVar28._11_4_;
  auVar44._8_2_ = 0;
  auVar44._0_8_ = uVar2;
  auVar44._10_5_ = auVar36._10_5_;
  auVar52[8] = (char)(uVar2 >> 0x20);
  auVar52._0_8_ = uVar2;
  auVar52._9_6_ = auVar44._9_6_;
  uVar54 = CONCAT44(CONCAT22(auVar31._10_2_ - auVar36._10_2_,auVar47._8_2_ - auVar52._8_2_),
                    CONCAT22(auVar37._10_2_ - auVar30._10_2_,auVar53._8_2_ - auVar46._8_2_));
  uVar55 = CONCAT44(CONCAT22(auVar33._10_2_ - auVar35._10_2_,auVar49._8_2_ - auVar51._8_2_),
                    CONCAT22(auVar32._10_2_ - auVar34._10_2_,auVar48._8_2_ - auVar50._8_2_));
  FTransformPass1_SSE2_isra_0(local_58,local_48);
  FTransformPass1_SSE2_isra_0(uVar54,uVar55,local_38,local_28);
  FTransformPass2_SSE2_isra_0(local_58[0],local_48[0],extraout_RDX);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    FTransformPass2_SSE2_isra_0(local_38[0],local_28[0],extraout_RDX_00 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int TTransform_SSE2(undefined8 *param_1,long *param_2,undefined1 (*param_3) [16])

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  unkuint9 Var42;
  undefined1 auVar43 [11];
  undefined1 auVar44 [15];
  unkuint9 Var45;
  undefined1 auVar46 [11];
  undefined1 auVar47 [15];
  unkuint9 Var48;
  undefined1 auVar49 [11];
  undefined1 auVar50 [15];
  unkuint9 Var51;
  undefined1 auVar52 [11];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  ushort uVar61;
  short sVar62;
  short sVar63;
  short sVar67;
  short sVar69;
  short sVar71;
  short sVar73;
  short sVar75;
  short sVar77;
  undefined1 auVar64 [16];
  short sVar68;
  short sVar70;
  short sVar72;
  short sVar74;
  short sVar76;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ushort uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  short sVar86;
  short sVar87;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  ushort uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  ushort uVar106;
  short sVar107;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  undefined1 auVar108 [16];
  short sVar115;
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  
  lVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = param_1[4];
  lVar4 = param_2[8];
  auVar64._8_4_ = (int)((ulong)uVar2 >> 0x20);
  auVar64._0_8_ = uVar2;
  auVar64._12_4_ = (int)((ulong)lVar1 >> 0x20);
  auVar66._4_8_ = auVar64._8_8_;
  auVar66._0_4_ = (int)lVar1;
  auVar66._12_4_ = 0;
  auVar66 = auVar66 << 0x20;
  lVar5 = param_2[4];
  uVar6 = param_1[0xc];
  auVar108._8_4_ = (int)((ulong)uVar3 >> 0x20);
  auVar108._0_8_ = uVar3;
  auVar108._12_4_ = (int)((ulong)lVar5 >> 0x20);
  auVar85._4_8_ = auVar108._8_8_;
  auVar85._0_4_ = (int)lVar5;
  auVar85._12_4_ = 0;
  auVar85 = auVar85 << 0x20;
  uVar7 = param_1[8];
  auVar83._8_4_ = (int)((ulong)uVar7 >> 0x20);
  auVar83._0_8_ = uVar7;
  auVar83._12_4_ = (int)((ulong)lVar4 >> 0x20);
  auVar89._4_8_ = auVar83._8_8_;
  auVar89._0_4_ = (int)lVar4;
  auVar89._12_4_ = 0;
  auVar89 = auVar89 << 0x20;
  lVar8 = param_2[0xc];
  auVar103._8_4_ = (int)((ulong)uVar6 >> 0x20);
  auVar103._0_8_ = uVar6;
  auVar103._12_4_ = (int)((ulong)lVar8 >> 0x20);
  auVar105._4_8_ = auVar103._8_8_;
  auVar105._0_4_ = (int)lVar8;
  auVar105._12_4_ = 0;
  auVar105 = auVar105 << 0x20;
  auVar9[0xd] = 0;
  auVar9._0_13_ = auVar105._0_13_;
  auVar9[0xe] = (char)((ulong)lVar8 >> 0x18);
  auVar13[0xc] = (char)((ulong)lVar8 >> 0x10);
  auVar13._0_12_ = auVar105._0_12_;
  auVar13._13_2_ = auVar9._13_2_;
  auVar17[0xb] = 0;
  auVar17._0_11_ = auVar105._0_11_;
  auVar17._12_3_ = auVar13._12_3_;
  auVar21[10] = (char)((ulong)lVar8 >> 8);
  auVar21._0_10_ = auVar105._0_10_;
  auVar21._11_4_ = auVar17._11_4_;
  auVar25[9] = 0;
  auVar25._0_9_ = auVar105._0_9_;
  auVar25._10_5_ = auVar21._10_5_;
  auVar29[8] = (char)lVar8;
  auVar29._0_8_ = lVar8 << 0x20;
  auVar29._9_6_ = auVar25._9_6_;
  auVar41._7_8_ = 0;
  auVar41._0_7_ = auVar29._8_7_;
  Var42 = CONCAT81(SUB158(auVar41 << 0x40,7),(char)((ulong)uVar6 >> 0x18));
  auVar53._9_6_ = 0;
  auVar53._0_9_ = Var42;
  auVar43._1_10_ = SUB1510(auVar53 << 0x30,5);
  auVar43[0] = (char)((ulong)uVar6 >> 0x10);
  auVar54._11_4_ = 0;
  auVar54._0_11_ = auVar43;
  auVar37[2] = (char)((ulong)uVar6 >> 8);
  auVar37._0_2_ = (ushort)uVar6;
  auVar37._3_12_ = SUB1512(auVar54 << 0x20,3);
  uVar102 = (ushort)uVar6 & 0xff;
  auVar10[0xd] = 0;
  auVar10._0_13_ = auVar89._0_13_;
  auVar10[0xe] = (char)((ulong)lVar4 >> 0x18);
  auVar14[0xc] = (char)((ulong)lVar4 >> 0x10);
  auVar14._0_12_ = auVar89._0_12_;
  auVar14._13_2_ = auVar10._13_2_;
  auVar18[0xb] = 0;
  auVar18._0_11_ = auVar89._0_11_;
  auVar18._12_3_ = auVar14._12_3_;
  auVar22[10] = (char)((ulong)lVar4 >> 8);
  auVar22._0_10_ = auVar89._0_10_;
  auVar22._11_4_ = auVar18._11_4_;
  auVar26[9] = 0;
  auVar26._0_9_ = auVar89._0_9_;
  auVar26._10_5_ = auVar22._10_5_;
  auVar30[8] = (char)lVar4;
  auVar30._0_8_ = lVar4 << 0x20;
  auVar30._9_6_ = auVar26._9_6_;
  auVar44._7_8_ = 0;
  auVar44._0_7_ = auVar30._8_7_;
  Var45 = CONCAT81(SUB158(auVar44 << 0x40,7),(char)((ulong)uVar7 >> 0x18));
  auVar55._9_6_ = 0;
  auVar55._0_9_ = Var45;
  auVar46._1_10_ = SUB1510(auVar55 << 0x30,5);
  auVar46[0] = (char)((ulong)uVar7 >> 0x10);
  auVar56._11_4_ = 0;
  auVar56._0_11_ = auVar46;
  auVar38[2] = (char)((ulong)uVar7 >> 8);
  auVar38._0_2_ = (ushort)uVar7;
  auVar38._3_12_ = SUB1512(auVar56 << 0x20,3);
  uVar82 = (ushort)uVar7 & 0xff;
  auVar11[0xd] = 0;
  auVar11._0_13_ = auVar85._0_13_;
  auVar11[0xe] = (char)((ulong)lVar5 >> 0x18);
  auVar15[0xc] = (char)((ulong)lVar5 >> 0x10);
  auVar15._0_12_ = auVar85._0_12_;
  auVar15._13_2_ = auVar11._13_2_;
  auVar19[0xb] = 0;
  auVar19._0_11_ = auVar85._0_11_;
  auVar19._12_3_ = auVar15._12_3_;
  auVar23[10] = (char)((ulong)lVar5 >> 8);
  auVar23._0_10_ = auVar85._0_10_;
  auVar23._11_4_ = auVar19._11_4_;
  auVar27[9] = 0;
  auVar27._0_9_ = auVar85._0_9_;
  auVar27._10_5_ = auVar23._10_5_;
  auVar31[8] = (char)lVar5;
  auVar31._0_8_ = lVar5 << 0x20;
  auVar31._9_6_ = auVar27._9_6_;
  auVar47._7_8_ = 0;
  auVar47._0_7_ = auVar31._8_7_;
  Var48 = CONCAT81(SUB158(auVar47 << 0x40,7),(char)((ulong)uVar3 >> 0x18));
  auVar57._9_6_ = 0;
  auVar57._0_9_ = Var48;
  auVar49._1_10_ = SUB1510(auVar57 << 0x30,5);
  auVar49[0] = (char)((ulong)uVar3 >> 0x10);
  auVar58._11_4_ = 0;
  auVar58._0_11_ = auVar49;
  auVar39[2] = (char)((ulong)uVar3 >> 8);
  auVar39._0_2_ = (ushort)uVar3;
  auVar39._3_12_ = SUB1512(auVar58 << 0x20,3);
  uVar106 = (ushort)uVar3 & 0xff;
  auVar12[0xd] = 0;
  auVar12._0_13_ = auVar66._0_13_;
  auVar12[0xe] = (char)((ulong)lVar1 >> 0x18);
  auVar16[0xc] = (char)((ulong)lVar1 >> 0x10);
  auVar16._0_12_ = auVar66._0_12_;
  auVar16._13_2_ = auVar12._13_2_;
  auVar20[0xb] = 0;
  auVar20._0_11_ = auVar66._0_11_;
  auVar20._12_3_ = auVar16._12_3_;
  auVar24[10] = (char)((ulong)lVar1 >> 8);
  auVar24._0_10_ = auVar66._0_10_;
  auVar24._11_4_ = auVar20._11_4_;
  auVar28[9] = 0;
  auVar28._0_9_ = auVar66._0_9_;
  auVar28._10_5_ = auVar24._10_5_;
  auVar32[8] = (char)lVar1;
  auVar32._0_8_ = lVar1 << 0x20;
  auVar32._9_6_ = auVar28._9_6_;
  auVar50._7_8_ = 0;
  auVar50._0_7_ = auVar32._8_7_;
  Var51 = CONCAT81(SUB158(auVar50 << 0x40,7),(char)((ulong)uVar2 >> 0x18));
  auVar59._9_6_ = 0;
  auVar59._0_9_ = Var51;
  auVar52._1_10_ = SUB1510(auVar59 << 0x30,5);
  auVar52[0] = (char)((ulong)uVar2 >> 0x10);
  auVar60._11_4_ = 0;
  auVar60._0_11_ = auVar52;
  auVar40[2] = (char)((ulong)uVar2 >> 8);
  auVar40._0_2_ = (ushort)uVar2;
  auVar40._3_12_ = SUB1512(auVar60 << 0x20,3);
  uVar61 = (ushort)uVar2 & 0xff;
  sVar81 = auVar39._2_2_;
  sVar101 = auVar37._2_2_;
  sVar87 = auVar49._0_2_;
  sVar107 = auVar43._0_2_;
  sVar91 = (short)Var48;
  sVar109 = (short)Var42;
  sVar93 = auVar31._8_2_;
  sVar110 = auVar29._8_2_;
  sVar95 = auVar23._10_2_;
  sVar111 = auVar21._10_2_;
  sVar97 = auVar15._12_2_;
  sVar112 = auVar13._12_2_;
  uVar34 = auVar9._13_2_ >> 8;
  uVar33 = auVar11._13_2_ >> 8;
  sVar116 = uVar82 + uVar61;
  sVar117 = auVar38._2_2_ + auVar40._2_2_;
  sVar118 = auVar46._0_2_ + auVar52._0_2_;
  sVar71 = (short)Var51;
  sVar63 = (short)Var45;
  sVar119 = sVar63 + sVar71;
  sVar120 = auVar30._8_2_ + auVar32._8_2_;
  sVar121 = auVar22._10_2_ + auVar24._10_2_;
  uVar36 = auVar10._13_2_ >> 8;
  sVar122 = auVar14._12_2_ + auVar16._12_2_;
  uVar35 = auVar12._13_2_ >> 8;
  sVar123 = uVar36 + uVar35;
  sVar62 = uVar61 - uVar82;
  sVar67 = auVar40._2_2_ - auVar38._2_2_;
  sVar69 = auVar52._0_2_ - auVar46._0_2_;
  sVar71 = sVar71 - sVar63;
  sVar73 = auVar32._8_2_ - auVar30._8_2_;
  sVar75 = auVar24._10_2_ - auVar22._10_2_;
  sVar77 = auVar16._12_2_ - auVar14._12_2_;
  sVar79 = uVar35 - uVar36;
  sVar86 = uVar102 + uVar106 + sVar116;
  sVar90 = sVar101 + sVar81 + sVar117;
  sVar92 = sVar107 + sVar87 + sVar118;
  sVar94 = sVar109 + sVar91 + sVar119;
  sVar96 = sVar110 + sVar93 + sVar120;
  sVar98 = sVar111 + sVar95 + sVar121;
  sVar99 = sVar112 + sVar97 + sVar122;
  sVar100 = uVar34 + uVar33 + sVar123;
  sVar63 = (sVar62 - uVar106) + uVar102;
  sVar68 = (sVar67 - sVar81) + sVar101;
  sVar70 = (sVar69 - sVar87) + sVar107;
  sVar72 = (sVar71 - sVar91) + sVar109;
  sVar74 = (sVar73 - sVar93) + sVar110;
  sVar76 = (sVar75 - sVar95) + sVar111;
  sVar78 = (sVar77 - sVar97) + sVar112;
  sVar80 = (sVar79 - uVar33) + uVar34;
  sVar62 = (sVar62 - uVar102) + uVar106;
  sVar124 = (sVar67 - sVar101) + sVar81;
  sVar69 = (sVar69 - sVar107) + sVar87;
  sVar71 = (sVar71 - sVar109) + sVar91;
  sVar67 = (sVar73 - sVar110) + sVar93;
  sVar125 = (sVar75 - sVar111) + sVar95;
  sVar73 = (sVar77 - sVar112) + sVar97;
  sVar126 = (sVar79 - uVar34) + uVar33;
  sVar116 = sVar116 - (uVar102 + uVar106);
  sVar117 = sVar117 - (sVar101 + sVar81);
  sVar118 = sVar118 - (sVar107 + sVar87);
  sVar119 = sVar119 - (sVar109 + sVar91);
  sVar120 = sVar120 - (sVar110 + sVar93);
  sVar121 = sVar121 - (sVar111 + sVar95);
  sVar122 = sVar122 - (sVar112 + sVar97);
  sVar123 = sVar123 - (uVar34 + uVar33);
  sVar107 = sVar92 + sVar86;
  sVar109 = sVar69 + sVar62;
  sVar110 = sVar70 + sVar63;
  sVar111 = sVar118 + sVar116;
  sVar112 = sVar99 + sVar96;
  sVar113 = sVar73 + sVar67;
  sVar114 = sVar78 + sVar74;
  sVar115 = sVar122 + sVar120;
  sVar86 = sVar86 - sVar92;
  sVar62 = sVar62 - sVar69;
  sVar63 = sVar63 - sVar70;
  sVar116 = sVar116 - sVar118;
  sVar96 = sVar96 - sVar99;
  sVar67 = sVar67 - sVar73;
  sVar74 = sVar74 - sVar78;
  sVar120 = sVar120 - sVar122;
  sVar73 = (sVar86 - sVar90) + sVar94;
  sVar75 = (sVar62 - sVar124) + sVar71;
  sVar77 = (sVar63 - sVar68) + sVar72;
  sVar78 = (sVar116 - sVar117) + sVar119;
  sVar79 = (sVar96 - sVar98) + sVar100;
  sVar92 = (sVar67 - sVar125) + sVar126;
  sVar99 = (sVar74 - sVar76) + sVar80;
  sVar81 = (sVar120 - sVar121) + sVar123;
  sVar87 = sVar94 + sVar90 + sVar107;
  sVar91 = sVar71 + sVar124 + sVar109;
  sVar93 = sVar72 + sVar68 + sVar110;
  sVar95 = sVar119 + sVar117 + sVar111;
  sVar97 = sVar100 + sVar98 + sVar112;
  sVar118 = sVar126 + sVar125 + sVar113;
  sVar122 = sVar80 + sVar76 + sVar114;
  sVar101 = sVar123 + sVar121 + sVar115;
  sVar107 = sVar107 - (sVar94 + sVar90);
  sVar109 = sVar109 - (sVar71 + sVar124);
  sVar110 = sVar110 - (sVar72 + sVar68);
  sVar111 = sVar111 - (sVar119 + sVar117);
  sVar112 = sVar112 - (sVar100 + sVar98);
  sVar113 = sVar113 - (sVar126 + sVar125);
  sVar114 = sVar114 - (sVar80 + sVar76);
  sVar115 = sVar115 - (sVar123 + sVar121);
  sVar90 = (sVar86 - sVar94) + sVar90;
  sVar124 = (sVar62 - sVar71) + sVar124;
  sVar68 = (sVar63 - sVar72) + sVar68;
  sVar117 = (sVar116 - sVar119) + sVar117;
  sVar98 = (sVar96 - sVar100) + sVar98;
  sVar125 = (sVar67 - sVar126) + sVar125;
  sVar76 = (sVar74 - sVar80) + sVar76;
  sVar121 = (sVar120 - sVar123) + sVar121;
  sVar62 = -sVar87;
  sVar63 = -sVar91;
  sVar86 = -sVar93;
  sVar67 = -sVar95;
  sVar69 = -sVar90;
  sVar70 = -sVar124;
  sVar71 = -sVar68;
  sVar72 = -sVar117;
  auVar104._0_2_ = (ushort)(sVar87 < sVar62) * sVar62 | (ushort)(sVar87 >= sVar62) * sVar87;
  auVar104._2_2_ = (ushort)(sVar91 < sVar63) * sVar63 | (ushort)(sVar91 >= sVar63) * sVar91;
  auVar104._4_2_ = (ushort)(sVar93 < sVar86) * sVar86 | (ushort)(sVar93 >= sVar86) * sVar93;
  auVar104._6_2_ = (ushort)(sVar95 < sVar67) * sVar67 | (ushort)(sVar95 >= sVar67) * sVar95;
  auVar104._8_2_ = (ushort)(sVar90 < sVar69) * sVar69 | (ushort)(sVar90 >= sVar69) * sVar90;
  auVar104._10_2_ = (ushort)(sVar124 < sVar70) * sVar70 | (ushort)(sVar124 >= sVar70) * sVar124;
  auVar104._12_2_ = (ushort)(sVar68 < sVar71) * sVar71 | (ushort)(sVar68 >= sVar71) * sVar68;
  auVar104._14_2_ = (ushort)(sVar117 < sVar72) * sVar72 | (ushort)(sVar117 >= sVar72) * sVar117;
  sVar62 = -sVar73;
  sVar63 = -sVar75;
  sVar86 = -sVar77;
  sVar67 = -sVar78;
  sVar69 = -sVar107;
  sVar70 = -sVar109;
  sVar71 = -sVar110;
  sVar72 = -sVar111;
  auVar84._0_2_ = (ushort)(sVar73 < sVar62) * sVar62 | (ushort)(sVar73 >= sVar62) * sVar73;
  auVar84._2_2_ = (ushort)(sVar75 < sVar63) * sVar63 | (ushort)(sVar75 >= sVar63) * sVar75;
  auVar84._4_2_ = (ushort)(sVar77 < sVar86) * sVar86 | (ushort)(sVar77 >= sVar86) * sVar77;
  auVar84._6_2_ = (ushort)(sVar78 < sVar67) * sVar67 | (ushort)(sVar78 >= sVar67) * sVar78;
  auVar84._8_2_ = (ushort)(sVar107 < sVar69) * sVar69 | (ushort)(sVar107 >= sVar69) * sVar107;
  auVar84._10_2_ = (ushort)(sVar109 < sVar70) * sVar70 | (ushort)(sVar109 >= sVar70) * sVar109;
  auVar84._12_2_ = (ushort)(sVar110 < sVar71) * sVar71 | (ushort)(sVar110 >= sVar71) * sVar110;
  auVar84._14_2_ = (ushort)(sVar111 < sVar72) * sVar72 | (ushort)(sVar111 >= sVar72) * sVar111;
  sVar62 = -sVar79;
  sVar63 = -sVar92;
  sVar86 = -sVar99;
  sVar67 = -sVar81;
  sVar69 = -sVar112;
  sVar70 = -sVar113;
  sVar71 = -sVar114;
  sVar72 = -sVar115;
  sVar73 = -sVar97;
  sVar68 = -sVar118;
  sVar75 = -sVar122;
  sVar77 = -sVar101;
  sVar116 = -sVar98;
  sVar78 = -sVar125;
  sVar74 = -sVar76;
  sVar96 = -sVar121;
  auVar65._0_2_ = (ushort)(sVar79 < sVar62) * sVar62 | (ushort)(sVar79 >= sVar62) * sVar79;
  auVar65._2_2_ = (ushort)(sVar92 < sVar63) * sVar63 | (ushort)(sVar92 >= sVar63) * sVar92;
  auVar65._4_2_ = (ushort)(sVar99 < sVar86) * sVar86 | (ushort)(sVar99 >= sVar86) * sVar99;
  auVar65._6_2_ = (ushort)(sVar81 < sVar67) * sVar67 | (ushort)(sVar81 >= sVar67) * sVar81;
  auVar65._8_2_ = (ushort)(sVar112 < sVar69) * sVar69 | (ushort)(sVar112 >= sVar69) * sVar112;
  auVar65._10_2_ = (ushort)(sVar113 < sVar70) * sVar70 | (ushort)(sVar113 >= sVar70) * sVar113;
  auVar65._12_2_ = (ushort)(sVar114 < sVar71) * sVar71 | (ushort)(sVar114 >= sVar71) * sVar114;
  auVar65._14_2_ = (ushort)(sVar115 < sVar72) * sVar72 | (ushort)(sVar115 >= sVar72) * sVar115;
  auVar88._0_2_ = (ushort)(sVar97 < sVar73) * sVar73 | (ushort)(sVar97 >= sVar73) * sVar97;
  auVar88._2_2_ = (ushort)(sVar118 < sVar68) * sVar68 | (ushort)(sVar118 >= sVar68) * sVar118;
  auVar88._4_2_ = (ushort)(sVar122 < sVar75) * sVar75 | (ushort)(sVar122 >= sVar75) * sVar122;
  auVar88._6_2_ = (ushort)(sVar101 < sVar77) * sVar77 | (ushort)(sVar101 >= sVar77) * sVar101;
  auVar88._8_2_ = (ushort)(sVar98 < sVar116) * sVar116 | (ushort)(sVar98 >= sVar116) * sVar98;
  auVar88._10_2_ = (ushort)(sVar125 < sVar78) * sVar78 | (ushort)(sVar125 >= sVar78) * sVar125;
  auVar88._12_2_ = (ushort)(sVar76 < sVar74) * sVar74 | (ushort)(sVar76 >= sVar74) * sVar76;
  auVar88._14_2_ = (ushort)(sVar121 < sVar96) * sVar96 | (ushort)(sVar121 >= sVar96) * sVar121;
  auVar85 = pmaddwd(auVar84,param_3[1]);
  auVar66 = pmaddwd(auVar65,param_3[1]);
  auVar89 = pmaddwd(auVar88,*param_3);
  auVar105 = pmaddwd(auVar104,*param_3);
  return ((auVar85._4_4_ + auVar105._4_4_) - (auVar66._4_4_ + auVar89._4_4_)) +
         ((auVar85._0_4_ + auVar105._0_4_) - (auVar66._0_4_ + auVar89._0_4_)) +
         ((auVar85._8_4_ + auVar105._8_4_) - (auVar66._8_4_ + auVar89._8_4_)) +
         ((auVar85._12_4_ + auVar105._12_4_) - (auVar66._12_4_ + auVar89._12_4_));
}



int Disto4x4_SSE2(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = TTransform_SSE2();
  iVar2 = -iVar1;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2 >> 5;
}



int Disto16x16_SSE2(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_1 + 0x10;
  lVar7 = 0;
  iVar6 = 0;
  do {
    lVar5 = param_2 + lVar7;
    lVar1 = param_1 + lVar7;
    do {
      lVar4 = lVar1;
      iVar2 = TTransform_SSE2(lVar4,lVar5);
      iVar3 = -iVar2;
      if (0 < iVar2) {
        iVar3 = iVar2;
      }
      lVar5 = lVar5 + 4;
      iVar6 = iVar6 + (iVar3 >> 5);
      lVar1 = lVar4 + 4;
    } while (lVar4 + 4 != lVar8);
    lVar7 = lVar7 + 0x80;
    lVar8 = lVar4 + 0x84;
  } while (lVar7 != 0x200);
  return iVar6;
}



int SSE16x16_SSE2(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
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
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  int iVar22;
  int iVar24;
  int iVar25;
  undefined1 auVar23 [16];
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  iVar22 = 0;
  iVar24 = 0;
  iVar25 = 0;
  iVar26 = 0;
  pauVar20 = param_1;
  do {
    pauVar21 = pauVar20 + 4;
    auVar27 = psubusb(*param_2,*pauVar20);
    auVar23 = psubusb(*pauVar20,*param_2);
    auVar23 = auVar23 | auVar27;
    auVar27[1] = 0;
    auVar27[0] = auVar23[8];
    auVar27[2] = auVar23[9];
    auVar27[3] = 0;
    auVar27[4] = auVar23[10];
    auVar27[5] = 0;
    auVar27[6] = auVar23[0xb];
    auVar27[7] = 0;
    auVar27[8] = auVar23[0xc];
    auVar27[9] = 0;
    auVar27[10] = auVar23[0xd];
    auVar27[0xb] = 0;
    auVar27[0xc] = auVar23[0xe];
    auVar27[0xd] = 0;
    auVar27[0xe] = auVar23[0xf];
    auVar27[0xf] = 0;
    auVar28 = psubusb(pauVar20[2],param_2[2]);
    auVar2[0xd] = 0;
    auVar2._0_13_ = auVar23._0_13_;
    auVar2[0xe] = auVar23[7];
    auVar4[0xc] = auVar23[6];
    auVar4._0_12_ = auVar23._0_12_;
    auVar4._13_2_ = auVar2._13_2_;
    auVar6[0xb] = 0;
    auVar6._0_11_ = auVar23._0_11_;
    auVar6._12_3_ = auVar4._12_3_;
    auVar8[10] = auVar23[5];
    auVar8._0_10_ = auVar23._0_10_;
    auVar8._11_4_ = auVar6._11_4_;
    auVar10[9] = 0;
    auVar10._0_9_ = auVar23._0_9_;
    auVar10._10_5_ = auVar8._10_5_;
    auVar12[8] = auVar23[4];
    auVar12._0_8_ = auVar23._0_8_;
    auVar12._9_6_ = auVar10._9_6_;
    auVar14._7_8_ = 0;
    auVar14._0_7_ = auVar12._8_7_;
    auVar16._1_8_ = SUB158(auVar14 << 0x40,7);
    auVar16[0] = auVar23[3];
    auVar16._9_6_ = 0;
    auVar17._1_10_ = SUB1510(auVar16 << 0x30,5);
    auVar17[0] = auVar23[2];
    auVar17._11_4_ = 0;
    auVar30._3_12_ = SUB1512(auVar17 << 0x20,3);
    auVar30[2] = auVar23[1];
    auVar30[0] = auVar23[0];
    auVar30[1] = 0;
    auVar30[0xf] = 0;
    auVar31 = pmaddwd(auVar30,auVar30);
    auVar27 = pmaddwd(auVar27,auVar27);
    auVar23 = psubusb(param_2[2],pauVar20[2]);
    auVar28 = auVar28 | auVar23;
    auVar29[1] = 0;
    auVar29[0] = auVar28[8];
    auVar29[2] = auVar28[9];
    auVar29[3] = 0;
    auVar29[4] = auVar28[10];
    auVar29[5] = 0;
    auVar29[6] = auVar28[0xb];
    auVar29[7] = 0;
    auVar29[8] = auVar28[0xc];
    auVar29[9] = 0;
    auVar29[10] = auVar28[0xd];
    auVar29[0xb] = 0;
    auVar29[0xc] = auVar28[0xe];
    auVar29[0xd] = 0;
    auVar29[0xe] = auVar28[0xf];
    auVar29[0xf] = 0;
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar28._0_13_;
    auVar1[0xe] = auVar28[7];
    auVar3[0xc] = auVar28[6];
    auVar3._0_12_ = auVar28._0_12_;
    auVar3._13_2_ = auVar1._13_2_;
    auVar5[0xb] = 0;
    auVar5._0_11_ = auVar28._0_11_;
    auVar5._12_3_ = auVar3._12_3_;
    auVar7[10] = auVar28[5];
    auVar7._0_10_ = auVar28._0_10_;
    auVar7._11_4_ = auVar5._11_4_;
    auVar9[9] = 0;
    auVar9._0_9_ = auVar28._0_9_;
    auVar9._10_5_ = auVar7._10_5_;
    auVar11[8] = auVar28[4];
    auVar11._0_8_ = auVar28._0_8_;
    auVar11._9_6_ = auVar9._9_6_;
    auVar15._7_8_ = 0;
    auVar15._0_7_ = auVar11._8_7_;
    auVar18._1_8_ = SUB158(auVar15 << 0x40,7);
    auVar18[0] = auVar28[3];
    auVar18._9_6_ = 0;
    auVar19._1_10_ = SUB1510(auVar18 << 0x30,5);
    auVar19[0] = auVar28[2];
    auVar19._11_4_ = 0;
    auVar13[2] = auVar28[1];
    auVar13._0_2_ = auVar28._0_2_;
    auVar13._3_12_ = SUB1512(auVar19 << 0x20,3);
    auVar23._0_2_ = auVar28._0_2_ & 0xff;
    auVar23._2_13_ = auVar13._2_13_;
    auVar23[0xf] = 0;
    auVar30 = pmaddwd(auVar29,auVar29);
    auVar23 = pmaddwd(auVar23,auVar23);
    iVar22 = auVar23._0_4_ + auVar30._0_4_ + auVar27._0_4_ + auVar31._0_4_ + iVar22;
    iVar24 = auVar23._4_4_ + auVar30._4_4_ + auVar27._4_4_ + auVar31._4_4_ + iVar24;
    iVar25 = auVar23._8_4_ + auVar30._8_4_ + auVar27._8_4_ + auVar31._8_4_ + iVar25;
    iVar26 = auVar23._12_4_ + auVar30._12_4_ + auVar27._12_4_ + auVar31._12_4_ + iVar26;
    param_2 = param_2 + 4;
    pauVar20 = pauVar21;
  } while (pauVar21 != param_1 + 0x20);
  return iVar22 + iVar26 + iVar25 + iVar24;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTransformWHT_SSE2(ulong *param_1,undefined1 (*param_2) [16])

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  uVar1 = param_1[4];
  uVar2 = *param_1;
  uVar3 = param_1[0xc];
  uVar4 = param_1[0x1c];
  auVar46._8_4_ = 0;
  auVar46._0_8_ = uVar2;
  auVar46._12_2_ = (short)(uVar2 >> 0x30);
  auVar46._14_2_ = (short)(uVar1 >> 0x30);
  auVar35._12_4_ = auVar46._12_4_;
  auVar35._8_2_ = 0;
  auVar35._0_8_ = uVar2;
  auVar35._10_2_ = (short)(uVar1 >> 0x20);
  auVar19._10_6_ = auVar35._10_6_;
  auVar19._8_2_ = (short)(uVar2 >> 0x20);
  auVar19._0_8_ = uVar2;
  auVar5._8_8_ = auVar19._8_8_;
  auVar5._6_2_ = (short)(uVar1 >> 0x10);
  auVar5._4_2_ = (short)(uVar2 >> 0x10);
  auVar5._0_2_ = (undefined2)uVar2;
  auVar5._2_2_ = (short)uVar1;
  uVar1 = param_1[8];
  uVar2 = param_1[0x2c];
  auVar15._8_4_ = 0;
  auVar15._0_8_ = uVar1;
  auVar15._12_2_ = (short)(uVar1 >> 0x30);
  auVar15._14_2_ = (short)(uVar3 >> 0x30);
  auVar14._12_4_ = auVar15._12_4_;
  auVar14._8_2_ = 0;
  auVar14._0_8_ = uVar1;
  auVar14._10_2_ = (short)(uVar3 >> 0x20);
  auVar13._10_6_ = auVar14._10_6_;
  auVar13._8_2_ = (short)(uVar1 >> 0x20);
  auVar13._0_8_ = uVar1;
  auVar12._8_8_ = auVar13._8_8_;
  auVar12._6_2_ = (short)(uVar3 >> 0x10);
  auVar12._4_2_ = (short)(uVar1 >> 0x10);
  auVar12._0_2_ = (undefined2)uVar1;
  auVar12._2_2_ = (short)uVar3;
  auVar19 = paddsw(auVar5,auVar12);
  auVar5 = psubsw(auVar5,auVar12);
  auVar16._0_4_ = auVar19._0_4_;
  auVar16._4_4_ = auVar5._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar5._0_4_;
  uVar1 = param_1[0x10];
  uVar3 = param_1[0x14];
  auVar19 = pmaddwd(auVar16,__LC12);
  auVar23._8_4_ = 0;
  auVar23._0_8_ = uVar1;
  auVar23._12_2_ = (short)(uVar1 >> 0x30);
  auVar23._14_2_ = (short)(uVar3 >> 0x30);
  auVar22._12_4_ = auVar23._12_4_;
  auVar22._8_2_ = 0;
  auVar22._0_8_ = uVar1;
  auVar22._10_2_ = (short)(uVar3 >> 0x20);
  auVar21._10_6_ = auVar22._10_6_;
  auVar21._8_2_ = (short)(uVar1 >> 0x20);
  auVar21._0_8_ = uVar1;
  auVar20._8_8_ = auVar21._8_8_;
  auVar20._6_2_ = (short)(uVar3 >> 0x10);
  auVar20._4_2_ = (short)(uVar1 >> 0x10);
  auVar20._0_2_ = (undefined2)uVar1;
  auVar20._2_2_ = (short)uVar3;
  uVar1 = param_1[0x18];
  auVar8._8_4_ = 0;
  auVar8._0_8_ = uVar1;
  auVar8._12_2_ = (short)(uVar1 >> 0x30);
  auVar8._14_2_ = (short)(uVar4 >> 0x30);
  auVar47._12_4_ = auVar8._12_4_;
  auVar47._8_2_ = 0;
  auVar47._0_8_ = uVar1;
  auVar47._10_2_ = (short)(uVar4 >> 0x20);
  auVar7._10_6_ = auVar47._10_6_;
  auVar7._8_2_ = (short)(uVar1 >> 0x20);
  auVar7._0_8_ = uVar1;
  auVar6._8_8_ = auVar7._8_8_;
  auVar6._6_2_ = (short)(uVar4 >> 0x10);
  auVar6._4_2_ = (short)(uVar1 >> 0x10);
  auVar6._0_2_ = (undefined2)uVar1;
  auVar6._2_2_ = (short)uVar4;
  auVar35 = paddsw(auVar20,auVar6);
  auVar5 = psubsw(auVar20,auVar6);
  auVar9._0_4_ = auVar35._0_4_;
  auVar9._4_4_ = auVar5._0_4_;
  auVar9._12_4_ = auVar9._0_4_;
  auVar9._8_4_ = auVar5._0_4_;
  uVar1 = param_1[0x24];
  uVar3 = param_1[0x20];
  auVar5 = pmaddwd(auVar9,__LC12);
  auVar27._8_4_ = 0;
  auVar27._0_8_ = uVar3;
  auVar27._12_2_ = (short)(uVar3 >> 0x30);
  auVar27._14_2_ = (short)(uVar1 >> 0x30);
  auVar26._12_4_ = auVar27._12_4_;
  auVar26._8_2_ = 0;
  auVar26._0_8_ = uVar3;
  auVar26._10_2_ = (short)(uVar1 >> 0x20);
  auVar25._10_6_ = auVar26._10_6_;
  auVar25._8_2_ = (short)(uVar3 >> 0x20);
  auVar25._0_8_ = uVar3;
  auVar24._8_8_ = auVar25._8_8_;
  auVar24._6_2_ = (short)(uVar1 >> 0x10);
  auVar24._4_2_ = (short)(uVar3 >> 0x10);
  auVar24._0_2_ = (undefined2)uVar3;
  auVar24._2_2_ = (short)uVar1;
  uVar1 = param_1[0x28];
  auVar39._8_4_ = 0;
  auVar39._0_8_ = uVar1;
  auVar39._12_2_ = (short)(uVar1 >> 0x30);
  auVar39._14_2_ = (short)(uVar2 >> 0x30);
  auVar38._12_4_ = auVar39._12_4_;
  auVar38._8_2_ = 0;
  auVar38._0_8_ = uVar1;
  auVar38._10_2_ = (short)(uVar2 >> 0x20);
  auVar37._10_6_ = auVar38._10_6_;
  auVar37._8_2_ = (short)(uVar1 >> 0x20);
  auVar37._0_8_ = uVar1;
  auVar36._8_8_ = auVar37._8_8_;
  auVar36._6_2_ = (short)(uVar2 >> 0x10);
  auVar36._4_2_ = (short)(uVar1 >> 0x10);
  auVar36._0_2_ = (undefined2)uVar1;
  auVar36._2_2_ = (short)uVar2;
  auVar46 = paddsw(auVar24,auVar36);
  auVar35 = psubsw(auVar24,auVar36);
  uVar1 = param_1[0x34];
  auVar45._0_4_ = auVar46._0_4_;
  auVar45._4_4_ = auVar35._0_4_;
  auVar45._12_4_ = auVar45._0_4_;
  auVar45._8_4_ = auVar35._0_4_;
  uVar2 = param_1[0x3c];
  uVar3 = param_1[0x30];
  auVar46 = pmaddwd(auVar45,__LC12);
  auVar31._8_4_ = 0;
  auVar31._0_8_ = uVar3;
  auVar31._12_2_ = (short)(uVar3 >> 0x30);
  auVar31._14_2_ = (short)(uVar1 >> 0x30);
  auVar30._12_4_ = auVar31._12_4_;
  auVar30._8_2_ = 0;
  auVar30._0_8_ = uVar3;
  auVar30._10_2_ = (short)(uVar1 >> 0x20);
  auVar29._10_6_ = auVar30._10_6_;
  auVar29._8_2_ = (short)(uVar3 >> 0x20);
  auVar29._0_8_ = uVar3;
  auVar28._8_8_ = auVar29._8_8_;
  auVar28._6_2_ = (short)(uVar1 >> 0x10);
  auVar28._4_2_ = (short)(uVar3 >> 0x10);
  auVar28._0_2_ = (undefined2)uVar3;
  auVar28._2_2_ = (short)uVar1;
  uVar1 = param_1[0x38];
  auVar43._8_4_ = 0;
  auVar43._0_8_ = uVar1;
  auVar43._12_2_ = (short)(uVar1 >> 0x30);
  auVar43._14_2_ = (short)(uVar2 >> 0x30);
  auVar42._12_4_ = auVar43._12_4_;
  auVar42._8_2_ = 0;
  auVar42._0_8_ = uVar1;
  auVar42._10_2_ = (short)(uVar2 >> 0x20);
  auVar41._10_6_ = auVar42._10_6_;
  auVar41._8_2_ = (short)(uVar1 >> 0x20);
  auVar41._0_8_ = uVar1;
  auVar40._8_8_ = auVar41._8_8_;
  auVar40._6_2_ = (short)(uVar2 >> 0x10);
  auVar40._4_2_ = (short)(uVar1 >> 0x10);
  auVar40._0_2_ = (undefined2)uVar1;
  auVar40._2_2_ = (short)uVar2;
  auVar47 = paddsw(auVar28,auVar40);
  auVar35 = psubsw(auVar28,auVar40);
  auVar44._0_4_ = auVar47._0_4_;
  auVar44._4_4_ = auVar35._0_4_;
  auVar44._12_4_ = auVar44._0_4_;
  auVar44._8_4_ = auVar35._0_4_;
  auVar17._0_4_ = auVar19._0_4_ - auVar46._0_4_;
  auVar17._4_4_ = auVar19._4_4_ - auVar46._4_4_;
  auVar17._8_4_ = auVar19._8_4_ - auVar46._8_4_;
  auVar17._12_4_ = auVar19._12_4_ - auVar46._12_4_;
  auVar32._0_4_ = auVar19._0_4_ + auVar46._0_4_;
  auVar32._4_4_ = auVar19._4_4_ + auVar46._4_4_;
  auVar32._8_4_ = auVar19._8_4_ + auVar46._8_4_;
  auVar32._12_4_ = auVar19._12_4_ + auVar46._12_4_;
  auVar35 = pmaddwd(__LC12,auVar44);
  auVar19 = packssdw(auVar32,auVar17);
  auVar10._0_4_ = auVar5._0_4_ - auVar35._0_4_;
  auVar10._4_4_ = auVar5._4_4_ - auVar35._4_4_;
  auVar10._8_4_ = auVar5._8_4_ - auVar35._8_4_;
  auVar10._12_4_ = auVar5._12_4_ - auVar35._12_4_;
  auVar18._0_4_ = auVar5._0_4_ + auVar35._0_4_;
  auVar18._4_4_ = auVar5._4_4_ + auVar35._4_4_;
  auVar18._8_4_ = auVar5._8_4_ + auVar35._8_4_;
  auVar18._12_4_ = auVar5._12_4_ + auVar35._12_4_;
  auVar5 = packssdw(auVar18,auVar10);
  auVar34._0_8_ =
       CONCAT26(auVar19._6_2_ - auVar5._6_2_,
                CONCAT24(auVar19._4_2_ - auVar5._4_2_,
                         CONCAT22(auVar19._2_2_ - auVar5._2_2_,auVar19._0_2_ - auVar5._0_2_)));
  auVar34._8_2_ = auVar19._8_2_ - auVar5._8_2_;
  auVar34._10_2_ = auVar19._10_2_ - auVar5._10_2_;
  auVar34._12_2_ = auVar19._12_2_ - auVar5._12_2_;
  auVar34._14_2_ = auVar19._14_2_ - auVar5._14_2_;
  auVar33._0_2_ = auVar19._0_2_ + auVar5._0_2_;
  auVar33._2_2_ = auVar19._2_2_ + auVar5._2_2_;
  auVar33._4_2_ = auVar19._4_2_ + auVar5._4_2_;
  auVar33._6_2_ = auVar19._6_2_ + auVar5._6_2_;
  auVar33._8_2_ = auVar19._8_2_ + auVar5._8_2_;
  auVar33._10_2_ = auVar19._10_2_ + auVar5._10_2_;
  auVar33._12_2_ = auVar19._12_2_ + auVar5._12_2_;
  auVar33._14_2_ = auVar19._14_2_ + auVar5._14_2_;
  auVar5 = psraw(auVar33,1);
  *param_2 = auVar5;
  auVar11._8_8_ = auVar34._0_8_;
  auVar11._0_8_ = auVar34._8_8_;
  auVar5 = psraw(auVar11,1);
  param_2[1] = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Intra16Preds_SSE2(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [15];
  unkuint9 Var11;
  undefined1 auVar12 [11];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  char *pcVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 uVar23;
  short sVar25;
  int iVar26;
  undefined4 uVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined1 auVar43 [16];
  undefined2 uVar24;
  
  uVar9 = _UNK_00102518;
  uVar8 = _LC17;
  if (param_3 == (undefined1 (*) [16])0x0) {
    if (param_2 == (undefined1 (*) [16])0x0) {
      puVar18 = param_1;
      do {
        *puVar18 = uVar8;
        puVar18[1] = uVar9;
        puVar18 = puVar18 + 4;
      } while (puVar18 != param_1 + 0x40);
    }
    else {
      auVar43 = psadbw((undefined1  [16])0x0,*param_2);
      uVar23 = (undefined1)(auVar43._8_4_ + auVar43._0_4_ + 8 >> 4);
      uVar24 = CONCAT11(uVar23,uVar23);
      uVar27 = CONCAT22(uVar24,uVar24);
      puVar18 = param_1;
      do {
        *(undefined4 *)puVar18 = uVar27;
        *(undefined4 *)((long)puVar18 + 4) = uVar27;
        *(undefined4 *)(puVar18 + 1) = uVar27;
        *(undefined4 *)((long)puVar18 + 0xc) = uVar27;
        puVar18 = puVar18 + 4;
      } while (param_1 + 0x40 != puVar18);
    }
    uVar9 = _UNK_00102528;
    uVar8 = _LC18;
    puVar18 = param_1 + 0x40;
    do {
      *puVar18 = uVar8;
      puVar18[1] = uVar9;
      puVar18 = puVar18 + 4;
      uVar15 = _LC19;
      uVar16 = _UNK_00102538;
    } while (puVar18 != param_1 + 0x80);
  }
  else {
    auVar43 = psadbw((undefined1  [16])0x0,*param_3);
    iVar26 = auVar43._8_4_ + auVar43._0_4_;
    if (param_2 == (undefined1 (*) [16])0x0) {
      uVar23 = (undefined1)(iVar26 + 8 >> 4);
      uVar24 = CONCAT11(uVar23,uVar23);
      uVar27 = CONCAT22(uVar24,uVar24);
      puVar18 = param_1;
      do {
        *(undefined4 *)puVar18 = uVar27;
        *(undefined4 *)((long)puVar18 + 4) = uVar27;
        *(undefined4 *)(puVar18 + 1) = uVar27;
        *(undefined4 *)((long)puVar18 + 0xc) = uVar27;
        puVar18 = puVar18 + 4;
      } while (param_1 + 0x40 != puVar18);
    }
    else {
      auVar43 = psadbw((undefined1  [16])0x0,*param_2);
      uVar23 = (undefined1)(iVar26 + 0x10 + auVar43._8_4_ + auVar43._0_4_ >> 5);
      uVar24 = CONCAT11(uVar23,uVar23);
      uVar27 = CONCAT22(uVar24,uVar24);
      puVar18 = param_1;
      do {
        *(undefined4 *)puVar18 = uVar27;
        *(undefined4 *)((long)puVar18 + 4) = uVar27;
        *(undefined4 *)(puVar18 + 1) = uVar27;
        *(undefined4 *)((long)puVar18 + 0xc) = uVar27;
        puVar18 = puVar18 + 4;
      } while (param_1 + 0x40 != puVar18);
    }
    puVar18 = param_1 + 0x40;
    uVar8 = *(undefined8 *)*param_3;
    uVar9 = *(undefined8 *)(*param_3 + 8);
    do {
      *puVar18 = uVar8;
      puVar18[1] = uVar9;
      puVar18 = puVar18 + 4;
      uVar15 = _LC19;
      uVar16 = _UNK_00102538;
    } while (param_1 + 0x80 != puVar18);
  }
  _LC19 = uVar15;
  _UNK_00102538 = uVar16;
  if (param_2 == (undefined1 (*) [16])0x0) {
    puVar22 = param_1 + 0x42;
    puVar18 = puVar22;
    do {
      *puVar18 = uVar15;
      puVar18[1] = uVar16;
      puVar18 = puVar18 + 4;
    } while (puVar18 != param_1 + 0x82);
    param_1 = param_1 + 2;
    if (param_3 != (undefined1 (*) [16])0x0) {
      uVar8 = *(undefined8 *)*param_3;
      uVar9 = *(undefined8 *)(*param_3 + 8);
      do {
        *param_1 = uVar8;
        param_1[1] = uVar9;
        param_1 = param_1 + 4;
      } while (puVar22 != param_1);
      return;
    }
    do {
      *param_1 = uVar15;
      param_1[1] = uVar16;
      param_1 = param_1 + 4;
    } while (puVar22 != param_1);
    return;
  }
  pauVar19 = param_2;
  pcVar21 = (char *)(param_1 + 0x42);
  do {
    puVar17 = *pauVar19;
    pcVar20 = pcVar21 + 0x20;
    pauVar19 = (undefined1 (*) [16])(*pauVar19 + 1);
    uVar24 = CONCAT11(*puVar17,*puVar17);
    uVar27 = CONCAT22(uVar24,uVar24);
    *(undefined4 *)pcVar21 = uVar27;
    *(undefined4 *)(pcVar21 + 4) = uVar27;
    *(undefined4 *)(pcVar21 + 8) = uVar27;
    *(undefined4 *)(pcVar21 + 0xc) = uVar27;
    pcVar21 = pcVar20;
  } while (pcVar20 != (char *)(param_1 + 0x82));
  pcVar21 = (char *)(param_1 + 2);
  if (param_3 != (undefined1 (*) [16])0x0) {
    auVar43 = *param_3;
    auVar1[0xd] = 0;
    auVar1._0_13_ = auVar43._0_13_;
    auVar1[0xe] = auVar43[7];
    auVar2[0xc] = auVar43[6];
    auVar2._0_12_ = auVar43._0_12_;
    auVar2._13_2_ = auVar1._13_2_;
    auVar3[0xb] = 0;
    auVar3._0_11_ = auVar43._0_11_;
    auVar3._12_3_ = auVar2._12_3_;
    auVar4[10] = auVar43[5];
    auVar4._0_10_ = auVar43._0_10_;
    auVar4._11_4_ = auVar3._11_4_;
    auVar5[9] = 0;
    auVar5._0_9_ = auVar43._0_9_;
    auVar5._10_5_ = auVar4._10_5_;
    auVar6[8] = auVar43[4];
    auVar6._0_8_ = auVar43._0_8_;
    auVar6._9_6_ = auVar5._9_6_;
    auVar10._7_8_ = 0;
    auVar10._0_7_ = auVar6._8_7_;
    Var11 = CONCAT81(SUB158(auVar10 << 0x40,7),auVar43[3]);
    auVar13._9_6_ = 0;
    auVar13._0_9_ = Var11;
    auVar12._1_10_ = SUB1510(auVar13 << 0x30,5);
    auVar12[0] = auVar43[2];
    auVar14._11_4_ = 0;
    auVar14._0_11_ = auVar12;
    auVar7[2] = auVar43[1];
    auVar7._0_2_ = auVar43._0_2_;
    auVar7._3_12_ = SUB1512(auVar14 << 0x20,3);
    pauVar19 = param_2;
    do {
      puVar17 = *pauVar19;
      pauVar19 = (undefined1 (*) [16])(*pauVar19 + 1);
      sVar34 = (ushort)(byte)*puVar17 - (ushort)(byte)param_2[-1][0xf];
      sVar35 = (auVar43._0_2_ & 0xff) + sVar34;
      sVar36 = auVar7._2_2_ + sVar34;
      sVar37 = auVar12._0_2_ + sVar34;
      sVar38 = (short)Var11 + sVar34;
      sVar39 = auVar6._8_2_ + sVar34;
      sVar40 = auVar4._10_2_ + sVar34;
      sVar41 = auVar2._12_2_ + sVar34;
      sVar42 = (auVar1._13_2_ >> 8) + sVar34;
      sVar25 = sVar34 + (ushort)auVar43[8];
      sVar28 = sVar34 + (ushort)auVar43[9];
      sVar29 = sVar34 + (ushort)auVar43[10];
      sVar30 = sVar34 + (ushort)auVar43[0xb];
      sVar31 = sVar34 + (ushort)auVar43[0xc];
      sVar32 = sVar34 + (ushort)auVar43[0xd];
      sVar33 = sVar34 + (ushort)auVar43[0xe];
      sVar34 = sVar34 + (ushort)auVar43[0xf];
      *pcVar21 = (0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 - (0xff < sVar35);
      pcVar21[1] = (0 < sVar36) * (sVar36 < 0x100) * (char)sVar36 - (0xff < sVar36);
      pcVar21[2] = (0 < sVar37) * (sVar37 < 0x100) * (char)sVar37 - (0xff < sVar37);
      pcVar21[3] = (0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38);
      pcVar21[4] = (0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39);
      pcVar21[5] = (0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40);
      pcVar21[6] = (0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41);
      pcVar21[7] = (0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42);
      pcVar21[8] = (0 < sVar25) * (sVar25 < 0x100) * (char)sVar25 - (0xff < sVar25);
      pcVar21[9] = (0 < sVar28) * (sVar28 < 0x100) * (char)sVar28 - (0xff < sVar28);
      pcVar21[10] = (0 < sVar29) * (sVar29 < 0x100) * (char)sVar29 - (0xff < sVar29);
      pcVar21[0xb] = (0 < sVar30) * (sVar30 < 0x100) * (char)sVar30 - (0xff < sVar30);
      pcVar21[0xc] = (0 < sVar31) * (sVar31 < 0x100) * (char)sVar31 - (0xff < sVar31);
      pcVar21[0xd] = (0 < sVar32) * (sVar32 < 0x100) * (char)sVar32 - (0xff < sVar32);
      pcVar21[0xe] = (0 < sVar33) * (sVar33 < 0x100) * (char)sVar33 - (0xff < sVar33);
      pcVar21[0xf] = (0 < sVar34) * (sVar34 < 0x100) * (char)sVar34 - (0xff < sVar34);
      pcVar21 = pcVar21 + 0x20;
    } while (param_2 + 1 != pauVar19);
    return;
  }
  do {
    puVar17 = *param_2;
    pcVar20 = pcVar21 + 0x20;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    uVar24 = CONCAT11(*puVar17,*puVar17);
    uVar27 = CONCAT22(uVar24,uVar24);
    *(undefined4 *)pcVar21 = uVar27;
    *(undefined4 *)(pcVar21 + 4) = uVar27;
    *(undefined4 *)(pcVar21 + 8) = uVar27;
    *(undefined4 *)(pcVar21 + 0xc) = uVar27;
    pcVar21 = pcVar20;
  } while ((char *)(param_1 + 0x42) != pcVar20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FTransform_SSE2(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [15];
  unkuint9 Var40;
  undefined1 auVar41 [11];
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [15];
  unkuint9 Var46;
  undefined1 auVar47 [11];
  undefined1 auVar48 [15];
  unkuint9 Var49;
  undefined1 auVar50 [11];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [15];
  undefined1 auVar55 [15];
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  short sVar83;
  short sVar84;
  short sVar85;
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  short sVar86;
  short sVar87;
  short sVar95;
  short sVar96;
  short sVar97;
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  
  uVar1 = param_1[4];
  uVar2 = *param_1;
  uVar3 = param_1[8];
  uVar4 = *param_2;
  auVar73._8_4_ = 0;
  auVar73._0_8_ = uVar2;
  auVar73._12_2_ = (short)(uVar2 >> 0x30);
  auVar73._14_2_ = (short)(uVar1 >> 0x30);
  auVar72._12_4_ = auVar73._12_4_;
  auVar72._8_2_ = 0;
  auVar72._0_8_ = uVar2;
  auVar72._10_2_ = (short)(uVar1 >> 0x20);
  auVar71._10_6_ = auVar72._10_6_;
  auVar71._8_2_ = (short)(uVar2 >> 0x20);
  auVar71._0_8_ = uVar2;
  auVar82._2_8_ = auVar71._8_8_;
  auVar82._0_2_ = (short)(uVar1 >> 0x10);
  auVar82._10_6_ = 0;
  auVar75._12_4_ = 0;
  auVar75._0_12_ = SUB1612(auVar82 << 0x30,4);
  auVar75 = auVar75 << 0x20;
  uVar5 = param_1[0xc];
  uVar6 = param_2[0xc];
  auVar80._8_4_ = 0;
  auVar80._0_8_ = uVar3;
  auVar80._12_2_ = (short)(uVar3 >> 0x30);
  auVar80._14_2_ = (short)(uVar5 >> 0x30);
  auVar79._12_4_ = auVar80._12_4_;
  auVar79._8_2_ = 0;
  auVar79._0_8_ = uVar3;
  auVar79._10_2_ = (short)(uVar5 >> 0x20);
  auVar78._10_6_ = auVar79._10_6_;
  auVar78._8_2_ = (short)(uVar3 >> 0x20);
  auVar78._0_8_ = uVar3;
  auVar107._2_8_ = auVar78._8_8_;
  auVar107._0_2_ = (short)(uVar5 >> 0x10);
  auVar107._10_6_ = 0;
  auVar93._12_4_ = 0;
  auVar93._0_12_ = SUB1612(auVar107 << 0x30,4);
  auVar93 = auVar93 << 0x20;
  uVar7 = param_2[4];
  auVar91._8_4_ = 0;
  auVar91._0_8_ = uVar4;
  auVar91._12_2_ = (short)(uVar4 >> 0x30);
  auVar91._14_2_ = (short)(uVar7 >> 0x30);
  auVar90._12_4_ = auVar91._12_4_;
  auVar90._8_2_ = 0;
  auVar90._0_8_ = uVar4;
  auVar90._10_2_ = (short)(uVar7 >> 0x20);
  auVar89._10_6_ = auVar90._10_6_;
  auVar89._8_2_ = (short)(uVar4 >> 0x20);
  auVar89._0_8_ = uVar4;
  auVar37._2_8_ = auVar89._8_8_;
  auVar37._0_2_ = (short)(uVar7 >> 0x10);
  auVar37._10_6_ = 0;
  auVar88._12_4_ = 0;
  auVar88._0_12_ = SUB1612(auVar37 << 0x30,4);
  auVar88 = auVar88 << 0x20;
  uVar8 = param_2[8];
  auVar62._8_4_ = 0;
  auVar62._0_8_ = uVar8;
  auVar62._12_2_ = (short)(uVar8 >> 0x30);
  auVar62._14_2_ = (short)(uVar6 >> 0x30);
  auVar61._12_4_ = auVar62._12_4_;
  auVar61._8_2_ = 0;
  auVar61._0_8_ = uVar8;
  auVar61._10_2_ = (short)(uVar6 >> 0x20);
  auVar60._10_6_ = auVar61._10_6_;
  auVar60._8_2_ = (short)(uVar8 >> 0x20);
  auVar60._0_8_ = uVar8;
  auVar38._2_8_ = auVar60._8_8_;
  auVar38._0_2_ = (short)(uVar6 >> 0x10);
  auVar38._10_6_ = 0;
  auVar59._12_4_ = 0;
  auVar59._0_12_ = SUB1612(auVar38 << 0x30,4);
  auVar59 = auVar59 << 0x20;
  auVar12[0xd] = 0;
  auVar12._0_13_ = auVar88._0_13_;
  auVar12[0xe] = (char)(uVar7 >> 0x18);
  auVar16[0xc] = (char)(uVar7 >> 0x10);
  auVar16._0_12_ = auVar88._0_12_;
  auVar16._13_2_ = auVar12._13_2_;
  auVar20[0xb] = 0;
  auVar20._0_11_ = auVar88._0_11_;
  auVar20._12_3_ = auVar16._12_3_;
  auVar24[10] = (char)(uVar4 >> 0x18);
  auVar24._0_10_ = auVar88._0_10_;
  auVar24._11_4_ = auVar20._11_4_;
  auVar28[9] = 0;
  auVar28._0_9_ = auVar88._0_9_;
  auVar28._10_5_ = auVar24._10_5_;
  auVar32[8] = (char)(uVar4 >> 0x10);
  auVar32._0_8_ = auVar88._0_8_;
  auVar32._9_6_ = auVar28._9_6_;
  auVar39._7_8_ = 0;
  auVar39._0_7_ = auVar32._8_7_;
  Var40 = CONCAT81(SUB158(auVar39 << 0x40,7),(char)(uVar7 >> 8));
  auVar51._9_6_ = 0;
  auVar51._0_9_ = Var40;
  auVar41._1_10_ = SUB1510(auVar51 << 0x30,5);
  auVar41[0] = (char)uVar7;
  auVar52._11_4_ = 0;
  auVar52._0_11_ = auVar41;
  auVar36[2] = (char)(uVar4 >> 8);
  auVar36._0_2_ = (ushort)uVar4;
  auVar36._3_12_ = SUB1512(auVar52 << 0x20,3);
  auVar9[0xd] = 0;
  auVar9._0_13_ = auVar59._0_13_;
  auVar9[0xe] = (char)(uVar6 >> 0x18);
  auVar13[0xc] = (char)(uVar6 >> 0x10);
  auVar13._0_12_ = auVar59._0_12_;
  auVar13._13_2_ = auVar9._13_2_;
  auVar17[0xb] = 0;
  auVar17._0_11_ = auVar59._0_11_;
  auVar17._12_3_ = auVar13._12_3_;
  auVar21[10] = (char)(uVar8 >> 0x18);
  auVar21._0_10_ = auVar59._0_10_;
  auVar21._11_4_ = auVar17._11_4_;
  auVar25[9] = 0;
  auVar25._0_9_ = auVar59._0_9_;
  auVar25._10_5_ = auVar21._10_5_;
  auVar29[8] = (char)(uVar8 >> 0x10);
  auVar29._0_8_ = auVar59._0_8_;
  auVar29._9_6_ = auVar25._9_6_;
  auVar42._7_8_ = 0;
  auVar42._0_7_ = auVar29._8_7_;
  Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),(char)(uVar6 >> 8));
  auVar53._9_6_ = 0;
  auVar53._0_9_ = Var43;
  auVar44._1_10_ = SUB1510(auVar53 << 0x30,5);
  auVar44[0] = (char)uVar6;
  auVar54._11_4_ = 0;
  auVar54._0_11_ = auVar44;
  auVar33[2] = (char)(uVar8 >> 8);
  auVar33._0_2_ = (ushort)uVar8;
  auVar33._3_12_ = SUB1512(auVar54 << 0x20,3);
  auVar10[0xd] = 0;
  auVar10._0_13_ = auVar75._0_13_;
  auVar10[0xe] = (char)(uVar1 >> 0x18);
  auVar14[0xc] = (char)(uVar1 >> 0x10);
  auVar14._0_12_ = auVar75._0_12_;
  auVar14._13_2_ = auVar10._13_2_;
  auVar18[0xb] = 0;
  auVar18._0_11_ = auVar75._0_11_;
  auVar18._12_3_ = auVar14._12_3_;
  auVar22[10] = (char)(uVar2 >> 0x18);
  auVar22._0_10_ = auVar75._0_10_;
  auVar22._11_4_ = auVar18._11_4_;
  auVar26[9] = 0;
  auVar26._0_9_ = auVar75._0_9_;
  auVar26._10_5_ = auVar22._10_5_;
  auVar30[8] = (char)(uVar2 >> 0x10);
  auVar30._0_8_ = auVar75._0_8_;
  auVar30._9_6_ = auVar26._9_6_;
  auVar45._7_8_ = 0;
  auVar45._0_7_ = auVar30._8_7_;
  Var46 = CONCAT81(SUB158(auVar45 << 0x40,7),(char)(uVar1 >> 8));
  auVar55._9_6_ = 0;
  auVar55._0_9_ = Var46;
  auVar47._1_10_ = SUB1510(auVar55 << 0x30,5);
  auVar47[0] = (char)uVar1;
  auVar56._11_4_ = 0;
  auVar56._0_11_ = auVar47;
  auVar34[2] = (char)(uVar2 >> 8);
  auVar34._0_2_ = (ushort)uVar2;
  auVar34._3_12_ = SUB1512(auVar56 << 0x20,3);
  auVar11[0xd] = 0;
  auVar11._0_13_ = auVar93._0_13_;
  auVar11[0xe] = (char)(uVar5 >> 0x18);
  auVar15[0xc] = (char)(uVar5 >> 0x10);
  auVar15._0_12_ = auVar93._0_12_;
  auVar15._13_2_ = auVar11._13_2_;
  auVar19[0xb] = 0;
  auVar19._0_11_ = auVar93._0_11_;
  auVar19._12_3_ = auVar15._12_3_;
  auVar23[10] = (char)(uVar3 >> 0x18);
  auVar23._0_10_ = auVar93._0_10_;
  auVar23._11_4_ = auVar19._11_4_;
  auVar27[9] = 0;
  auVar27._0_9_ = auVar93._0_9_;
  auVar27._10_5_ = auVar23._10_5_;
  auVar31[8] = (char)(uVar3 >> 0x10);
  auVar31._0_8_ = auVar93._0_8_;
  auVar31._9_6_ = auVar27._9_6_;
  auVar48._7_8_ = 0;
  auVar48._0_7_ = auVar31._8_7_;
  Var49 = CONCAT81(SUB158(auVar48 << 0x40,7),(char)(uVar5 >> 8));
  auVar57._9_6_ = 0;
  auVar57._0_9_ = Var49;
  auVar50._1_10_ = SUB1510(auVar57 << 0x30,5);
  auVar50[0] = (char)uVar5;
  auVar58._11_4_ = 0;
  auVar58._0_11_ = auVar50;
  auVar35[2] = (char)(uVar3 >> 8);
  auVar35._0_2_ = (ushort)uVar3;
  auVar35._3_12_ = SUB1512(auVar58 << 0x20,3);
  auVar74._0_2_ = ((ushort)uVar2 & 0xff) - ((ushort)uVar4 & 0xff);
  auVar74._2_2_ = auVar34._2_2_ - auVar36._2_2_;
  auVar74._4_2_ = auVar47._0_2_ - auVar41._0_2_;
  auVar74._6_2_ = (short)Var46 - (short)Var40;
  auVar74._8_2_ = auVar30._8_2_ - auVar32._8_2_;
  auVar74._10_2_ = auVar22._10_2_ - auVar24._10_2_;
  auVar74._12_2_ = auVar14._12_2_ - auVar16._12_2_;
  auVar74._14_2_ = (auVar10._13_2_ >> 8) - (auVar12._13_2_ >> 8);
  auVar81._0_2_ = ((ushort)uVar3 & 0xff) - ((ushort)uVar8 & 0xff);
  auVar81._2_2_ = auVar35._2_2_ - auVar33._2_2_;
  auVar81._4_2_ = auVar50._0_2_ - auVar44._0_2_;
  auVar81._6_2_ = (short)Var49 - (short)Var43;
  auVar81._8_2_ = auVar31._8_2_ - auVar29._8_2_;
  auVar81._10_2_ = auVar23._10_2_ - auVar21._10_2_;
  auVar81._12_2_ = auVar15._12_2_ - auVar13._12_2_;
  auVar81._14_2_ = (auVar11._13_2_ >> 8) - (auVar9._13_2_ >> 8);
  auVar75 = pshufhw(auVar74,auVar74,0xb1);
  auVar82 = pshufhw(auVar81,auVar81,0xb1);
  auVar92._0_2_ = auVar75._8_2_ + auVar75._0_2_;
  auVar92._2_2_ = auVar75._10_2_ + auVar75._2_2_;
  auVar92._4_2_ = auVar75._12_2_ + auVar75._4_2_;
  auVar92._6_2_ = auVar75._14_2_ + auVar75._6_2_;
  auVar92._8_2_ = auVar82._8_2_ + auVar82._0_2_;
  auVar92._10_2_ = auVar82._10_2_ + auVar82._2_2_;
  auVar92._12_2_ = auVar82._12_2_ + auVar82._4_2_;
  auVar92._14_2_ = auVar82._14_2_ + auVar82._6_2_;
  auVar63._0_2_ = auVar75._0_2_ - auVar75._8_2_;
  auVar63._2_2_ = auVar75._2_2_ - auVar75._10_2_;
  auVar63._4_2_ = auVar75._4_2_ - auVar75._12_2_;
  auVar63._6_2_ = auVar75._6_2_ - auVar75._14_2_;
  auVar63._8_2_ = auVar82._0_2_ - auVar82._8_2_;
  auVar63._10_2_ = auVar82._2_2_ - auVar82._10_2_;
  auVar63._12_2_ = auVar82._4_2_ - auVar82._12_2_;
  auVar63._14_2_ = auVar82._6_2_ - auVar82._14_2_;
  auVar75 = pmaddwd(__LC6,auVar92);
  auVar93 = pmaddwd(auVar92,__LC7);
  auVar82 = pmaddwd(__LC8,auVar63);
  auVar93 = packssdw(auVar75,auVar93);
  auVar75 = pmaddwd(auVar63,__LC9);
  auVar76._0_4_ = auVar82._0_4_ + __LC10 >> 9;
  auVar76._4_4_ = auVar82._4_4_ + _UNK_001024e4 >> 9;
  auVar76._8_4_ = auVar82._8_4_ + _UNK_001024e8 >> 9;
  auVar76._12_4_ = auVar82._12_4_ + _UNK_001024ec >> 9;
  auVar64._0_4_ = auVar75._0_4_ + __LC11 >> 9;
  auVar64._4_4_ = auVar75._4_4_ + _UNK_001024f4 >> 9;
  auVar64._8_4_ = auVar75._8_4_ + _UNK_001024f8 >> 9;
  auVar64._12_4_ = auVar75._12_4_ + _UNK_001024fc >> 9;
  auVar75 = packssdw(auVar76,auVar64);
  sVar98 = auVar93._0_2_ - auVar93._6_2_;
  sVar99 = auVar75._0_2_ - auVar75._6_2_;
  sVar100 = auVar93._8_2_ - auVar93._14_2_;
  sVar101 = auVar75._8_2_ - auVar75._14_2_;
  sVar102 = auVar93._2_2_ - auVar93._4_2_;
  sVar103 = auVar75._2_2_ - auVar75._4_2_;
  sVar104 = auVar93._10_2_ - auVar93._12_2_;
  sVar105 = auVar75._10_2_ - auVar75._12_2_;
  sVar83 = auVar93._4_2_ + auVar93._2_2_;
  sVar84 = auVar75._4_2_ + auVar75._2_2_;
  sVar85 = auVar93._12_2_ + auVar93._10_2_;
  sVar86 = auVar75._12_2_ + auVar75._10_2_;
  auVar65._8_8_ =
       (undefined8)
       (CONCAT28(sVar105,CONCAT26(sVar104,CONCAT24(sVar103,CONCAT22(sVar102,sVar101)))) >> 0x10);
  auVar65._0_8_ = auVar65._8_8_;
  sVar87 = __LC5 + auVar93._6_2_ + auVar93._0_2_;
  sVar95 = _UNK_00102492 + auVar75._6_2_ + auVar75._0_2_;
  sVar96 = _UNK_00102494 + auVar93._14_2_ + auVar93._8_2_;
  sVar97 = _UNK_00102496 + auVar75._14_2_ + auVar75._8_2_;
  auVar69._0_12_ = auVar65._0_12_;
  auVar69._12_2_ = sVar105;
  auVar69._14_2_ = sVar101;
  auVar68._12_4_ = auVar69._12_4_;
  auVar68._0_10_ = auVar65._0_10_;
  auVar68._10_2_ = sVar100;
  auVar67._10_6_ = auVar68._10_6_;
  auVar67._8_2_ = sVar104;
  auVar67._0_8_ = auVar65._8_8_;
  auVar66._8_8_ = auVar67._8_8_;
  auVar66._6_2_ = sVar99;
  auVar66._4_2_ = sVar103;
  auVar66._2_2_ = sVar98;
  auVar66._0_2_ = sVar102;
  auVar82 = pmaddwd(__LC1,auVar66);
  auVar75 = pmaddwd(auVar66,__LC2);
  auVar106._0_2_ = sVar87 + sVar83;
  auVar106._2_2_ = sVar95 + sVar84;
  auVar106._4_2_ = sVar96 + sVar85;
  auVar106._6_2_ = sVar97 + sVar86;
  auVar106._8_2_ = _UNK_00102498 + sVar83 + sVar83;
  auVar106._10_2_ = _UNK_0010249a + sVar84 + sVar84;
  auVar106._12_2_ = _UNK_0010249c + sVar85 + sVar85;
  auVar106._14_2_ = _UNK_0010249e + sVar86 + sVar86;
  auVar94._0_2_ = sVar87 - sVar83;
  auVar94._2_2_ = sVar95 - sVar84;
  auVar94._4_2_ = sVar96 - sVar85;
  auVar94._6_2_ = sVar97 - sVar86;
  auVar94._8_2_ = (_UNK_00102498 + sVar83) - sVar83;
  auVar94._10_2_ = (_UNK_0010249a + sVar84) - sVar84;
  auVar94._12_2_ = (_UNK_0010249c + sVar85) - sVar85;
  auVar94._14_2_ = (_UNK_0010249e + sVar86) - sVar86;
  auVar107 = psraw(auVar106,4);
  auVar93 = psraw(auVar94,4);
  auVar77._0_4_ = auVar82._0_4_ + __LC3 >> 0x10;
  auVar77._4_4_ = auVar82._4_4_ + _UNK_00102474 >> 0x10;
  auVar77._8_4_ = auVar82._8_4_ + _UNK_00102478 >> 0x10;
  auVar77._12_4_ = auVar82._12_4_ + _UNK_0010247c >> 0x10;
  auVar70._0_4_ = auVar75._0_4_ + __LC4 >> 0x10;
  auVar70._4_4_ = auVar75._4_4_ + _UNK_00102484 >> 0x10;
  auVar70._8_4_ = auVar75._8_4_ + _UNK_00102488 >> 0x10;
  auVar70._12_4_ = auVar75._12_4_ + _UNK_0010248c >> 0x10;
  auVar82 = packssdw(auVar77,auVar77);
  auVar75 = packssdw(auVar70,auVar70);
  param_3[2] = auVar93._0_8_;
  param_3[3] = auVar75._0_8_;
  *param_3 = auVar107._0_8_;
  param_3[1] = CONCAT26(auVar82._6_2_ - (ushort)(sVar101 == 0),
                        CONCAT24(auVar82._4_2_ - (ushort)(sVar100 == 0),
                                 CONCAT22(auVar82._2_2_ - (ushort)(sVar99 == 0),
                                          auVar82._0_2_ - (ushort)(sVar98 == 0))));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CollectHistogram_SSE2(long param_1,long param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  short sVar7;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  undefined1 auVar8 [16];
  undefined1 auVar16 [16];
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
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  ushort local_c8;
  ushort uStack_c6;
  ushort uStack_c4;
  ushort uStack_c2;
  ushort uStack_c0;
  ushort uStack_be;
  ushort uStack_bc;
  ushort uStack_ba;
  ushort local_b8;
  ushort uStack_b6;
  ushort uStack_b4;
  ushort uStack_b2;
  ushort uStack_b0;
  ushort uStack_ae;
  ushort uStack_ac;
  ushort uStack_aa;
  int local_a8 [34];
  long local_20;
  
  puVar6 = &local_c8;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = local_a8;
  piVar4 = piVar5;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    piVar4[0] = 0;
    piVar4[1] = 0;
    piVar4 = piVar4 + 2;
  }
  if (param_3 < param_4) {
    piVar4 = (int *)(&VP8DspScan + (long)param_3 * 4);
    sVar17 = 0;
    sVar18 = 0;
    sVar19 = 0;
    sVar20 = 0;
    sVar21 = 0;
    sVar22 = 0;
    sVar23 = 0;
    sVar24 = 0;
    sVar25 = __LC16;
    sVar26 = _UNK_00102542;
    sVar27 = _UNK_00102544;
    sVar28 = _UNK_00102546;
    sVar29 = _UNK_00102548;
    sVar30 = _UNK_0010254a;
    sVar31 = _UNK_0010254c;
    sVar32 = _UNK_0010254e;
    do {
      piVar2 = (int *)FTransform_SSE2(*piVar4 + param_1,param_2 + *piVar4,puVar6);
      sVar7 = sVar17 - local_c8;
      sVar9 = sVar18 - uStack_c6;
      sVar10 = sVar19 - uStack_c4;
      sVar11 = sVar20 - uStack_c2;
      sVar12 = sVar21 - uStack_c0;
      sVar13 = sVar22 - uStack_be;
      sVar14 = sVar23 - uStack_bc;
      sVar15 = sVar24 - uStack_ba;
      auVar16._0_2_ =
           (ushort)((short)local_c8 < sVar7) * sVar7 | ((short)local_c8 >= sVar7) * local_c8;
      auVar16._2_2_ =
           (ushort)((short)uStack_c6 < sVar9) * sVar9 | ((short)uStack_c6 >= sVar9) * uStack_c6;
      auVar16._4_2_ =
           (ushort)((short)uStack_c4 < sVar10) * sVar10 | ((short)uStack_c4 >= sVar10) * uStack_c4;
      auVar16._6_2_ =
           (ushort)((short)uStack_c2 < sVar11) * sVar11 | ((short)uStack_c2 >= sVar11) * uStack_c2;
      auVar16._8_2_ =
           (ushort)((short)uStack_c0 < sVar12) * sVar12 | ((short)uStack_c0 >= sVar12) * uStack_c0;
      auVar16._10_2_ =
           (ushort)((short)uStack_be < sVar13) * sVar13 | ((short)uStack_be >= sVar13) * uStack_be;
      auVar16._12_2_ =
           (ushort)((short)uStack_bc < sVar14) * sVar14 | ((short)uStack_bc >= sVar14) * uStack_bc;
      auVar16._14_2_ =
           (ushort)((short)uStack_ba < sVar15) * sVar15 | ((short)uStack_ba >= sVar15) * uStack_ba;
      sVar7 = sVar17 - local_b8;
      sVar9 = sVar18 - uStack_b6;
      sVar10 = sVar19 - uStack_b4;
      sVar11 = sVar20 - uStack_b2;
      sVar12 = sVar21 - uStack_b0;
      sVar13 = sVar22 - uStack_ae;
      sVar14 = sVar23 - uStack_ac;
      sVar15 = sVar24 - uStack_aa;
      auVar8._0_2_ = (sVar7 < (short)local_b8) * local_b8 |
                     (ushort)(sVar7 >= (short)local_b8) * sVar7;
      auVar8._2_2_ = (sVar9 < (short)uStack_b6) * uStack_b6 |
                     (ushort)(sVar9 >= (short)uStack_b6) * sVar9;
      auVar8._4_2_ = (sVar10 < (short)uStack_b4) * uStack_b4 |
                     (ushort)(sVar10 >= (short)uStack_b4) * sVar10;
      auVar8._6_2_ = (sVar11 < (short)uStack_b2) * uStack_b2 |
                     (ushort)(sVar11 >= (short)uStack_b2) * sVar11;
      auVar8._8_2_ = (sVar12 < (short)uStack_b0) * uStack_b0 |
                     (ushort)(sVar12 >= (short)uStack_b0) * sVar12;
      auVar8._10_2_ =
           (sVar13 < (short)uStack_ae) * uStack_ae | (ushort)(sVar13 >= (short)uStack_ae) * sVar13;
      auVar8._12_2_ =
           (sVar14 < (short)uStack_ac) * uStack_ac | (ushort)(sVar14 >= (short)uStack_ac) * sVar14;
      auVar8._14_2_ =
           (sVar15 < (short)uStack_aa) * uStack_aa | (ushort)(sVar15 >= (short)uStack_aa) * sVar15;
      auVar16 = psraw(auVar16,3);
      sVar7 = auVar16._0_2_;
      local_c8 = (ushort)(sVar25 < sVar7) * sVar25 | (ushort)(sVar25 >= sVar7) * sVar7;
      sVar7 = auVar16._2_2_;
      uStack_c6 = (ushort)(sVar26 < sVar7) * sVar26 | (ushort)(sVar26 >= sVar7) * sVar7;
      sVar7 = auVar16._4_2_;
      uStack_c4 = (ushort)(sVar27 < sVar7) * sVar27 | (ushort)(sVar27 >= sVar7) * sVar7;
      sVar7 = auVar16._6_2_;
      uStack_c2 = (ushort)(sVar28 < sVar7) * sVar28 | (ushort)(sVar28 >= sVar7) * sVar7;
      sVar7 = auVar16._8_2_;
      uStack_c0 = (ushort)(sVar29 < sVar7) * sVar29 | (ushort)(sVar29 >= sVar7) * sVar7;
      sVar7 = auVar16._10_2_;
      uStack_be = (ushort)(sVar30 < sVar7) * sVar30 | (ushort)(sVar30 >= sVar7) * sVar7;
      sVar7 = auVar16._12_2_;
      sVar9 = auVar16._14_2_;
      uStack_bc = (ushort)(sVar31 < sVar7) * sVar31 | (ushort)(sVar31 >= sVar7) * sVar7;
      uStack_ba = (ushort)(sVar32 < sVar9) * sVar32 | (ushort)(sVar32 >= sVar9) * sVar9;
      auVar8 = psraw(auVar8,3);
      sVar7 = auVar8._0_2_;
      local_b8 = (ushort)(sVar25 < sVar7) * sVar25 | (ushort)(sVar25 >= sVar7) * sVar7;
      sVar7 = auVar8._2_2_;
      uStack_b6 = (ushort)(sVar26 < sVar7) * sVar26 | (ushort)(sVar26 >= sVar7) * sVar7;
      sVar7 = auVar8._4_2_;
      uStack_b4 = (ushort)(sVar27 < sVar7) * sVar27 | (ushort)(sVar27 >= sVar7) * sVar7;
      sVar7 = auVar8._6_2_;
      uStack_b2 = (ushort)(sVar28 < sVar7) * sVar28 | (ushort)(sVar28 >= sVar7) * sVar7;
      sVar7 = auVar8._8_2_;
      uStack_b0 = (ushort)(sVar29 < sVar7) * sVar29 | (ushort)(sVar29 >= sVar7) * sVar7;
      sVar7 = auVar8._10_2_;
      uStack_ae = (ushort)(sVar30 < sVar7) * sVar30 | (ushort)(sVar30 >= sVar7) * sVar7;
      sVar7 = auVar8._12_2_;
      sVar9 = auVar8._14_2_;
      uStack_ac = (ushort)(sVar31 < sVar7) * sVar31 | (ushort)(sVar31 >= sVar7) * sVar7;
      uStack_aa = (ushort)(sVar32 < sVar9) * sVar32 | (ushort)(sVar32 >= sVar9) * sVar9;
      do {
        iVar1 = *piVar2;
        piVar2 = (int *)((long)piVar2 + 2);
        local_a8[(short)iVar1] = local_a8[(short)iVar1] + 1;
      } while (piVar5 != piVar2);
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(&VP8DspScan + ((long)param_3 + (ulong)(uint)(param_4 - param_3)) * 4)
            );
  }
  VP8SetHistogramData(piVar5,param_5);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void IntraChromaPreds_SSE2(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [15];
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
  unkuint9 Var17;
  undefined1 auVar18 [11];
  undefined1 auVar19 [15];
  undefined1 auVar20 [11];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  ulong uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  undefined1 uVar31;
  short sVar33;
  undefined4 uVar34;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined2 uVar32;
  
  uVar26 = _LC17;
  puVar27 = (undefined8 *)(param_1 + 0x400);
  if (param_3 == (ulong *)0x0) {
    if (param_2 == (ulong *)0x0) {
      do {
        *puVar27 = uVar26;
        puVar27 = puVar27 + 4;
      } while ((undefined8 *)(param_1 + 0x500) != puVar27);
    }
    else {
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *param_2;
      auVar46 = psadbw(auVar46,(undefined1  [16])0x0);
      uVar31 = (undefined1)(auVar46._0_4_ + 4 >> 3);
      uVar32 = CONCAT11(uVar31,uVar31);
      uVar34 = CONCAT22(uVar32,uVar32);
      do {
        *puVar27 = CONCAT44(uVar34,uVar34);
        puVar27 = puVar27 + 4;
      } while ((undefined8 *)(param_1 + 0x500) != puVar27);
    }
    uVar26 = _LC18;
    puVar27 = (undefined8 *)(param_1 + 0x500);
    do {
      *puVar27 = uVar26;
      puVar27 = puVar27 + 4;
    } while ((undefined8 *)(param_1 + 0x600) != puVar27);
    if (param_2 == (ulong *)0x0) goto LAB_00101268;
LAB_00100fac:
    puVar27 = (undefined8 *)(param_1 + 0x510);
    puVar29 = param_2;
    do {
      uVar1 = *puVar29;
      puVar28 = puVar27 + 4;
      puVar29 = (ulong *)((long)puVar29 + 1);
      uVar32 = CONCAT11((char)uVar1,(char)uVar1);
      uVar34 = CONCAT22(uVar32,uVar32);
      *puVar27 = CONCAT44(uVar34,uVar34);
      puVar27 = puVar28;
    } while (puVar28 != (undefined8 *)(param_1 + 0x610));
    puVar27 = (undefined8 *)(param_1 + 0x410);
    puVar29 = param_2;
    if (param_3 == (ulong *)0x0) {
      do {
        puVar28 = puVar27 + 4;
        uVar32 = CONCAT11((char)*puVar29,(char)*puVar29);
        uVar34 = CONCAT22(uVar32,uVar32);
        *puVar27 = CONCAT44(uVar34,uVar34);
        puVar29 = (ulong *)((long)puVar29 + 1);
        puVar27 = puVar28;
      } while ((undefined8 *)(param_1 + 0x510) != puVar28);
      auVar36._8_8_ = 0;
      auVar36._0_8_ = param_2[2];
      puVar27 = (undefined8 *)(param_1 + 0x408);
      auVar46 = psadbw(auVar36,(undefined1  [16])0x0);
      uVar31 = (undefined1)(auVar46._0_4_ + 4 >> 3);
      uVar32 = CONCAT11(uVar31,uVar31);
      uVar34 = CONCAT22(uVar32,uVar32);
      do {
        *puVar27 = CONCAT44(uVar34,uVar34);
        puVar27 = puVar27 + 4;
      } while (puVar27 != (undefined8 *)(param_1 + 0x508));
      puVar29 = param_2 + 2;
LAB_00101388:
      uVar26 = _LC18;
      puVar27 = (undefined8 *)(param_1 + 0x508);
      do {
        *puVar27 = uVar26;
        puVar27 = puVar27 + 4;
      } while ((undefined8 *)(param_1 + 0x608) != puVar27);
      param_3 = (ulong *)0x0;
      uVar1 = _LC19;
      goto joined_r0x001013b9;
    }
    uVar1 = *param_3;
    auVar2._8_6_ = 0;
    auVar2._0_8_ = uVar1;
    auVar2[0xe] = (char)(uVar1 >> 0x38);
    auVar4._8_4_ = 0;
    auVar4._0_8_ = uVar1;
    auVar4[0xc] = (char)(uVar1 >> 0x30);
    auVar4._13_2_ = auVar2._13_2_;
    auVar6._8_4_ = 0;
    auVar6._0_8_ = uVar1;
    auVar6._12_3_ = auVar4._12_3_;
    auVar8._8_2_ = 0;
    auVar8._0_8_ = uVar1;
    auVar8[10] = (char)(uVar1 >> 0x28);
    auVar8._11_4_ = auVar6._11_4_;
    auVar10._8_2_ = 0;
    auVar10._0_8_ = uVar1;
    auVar10._10_5_ = auVar8._10_5_;
    auVar12[8] = (char)(uVar1 >> 0x20);
    auVar12._0_8_ = uVar1;
    auVar12._9_6_ = auVar10._9_6_;
    auVar16._7_8_ = 0;
    auVar16._0_7_ = auVar12._8_7_;
    Var17 = CONCAT81(SUB158(auVar16 << 0x40,7),(char)(uVar1 >> 0x18));
    auVar21._9_6_ = 0;
    auVar21._0_9_ = Var17;
    auVar18._1_10_ = SUB1510(auVar21 << 0x30,5);
    auVar18[0] = (char)(uVar1 >> 0x10);
    auVar22._11_4_ = 0;
    auVar22._0_11_ = auVar18;
    auVar14[2] = (char)(uVar1 >> 8);
    auVar14._0_2_ = (ushort)uVar1;
    auVar14._3_12_ = SUB1512(auVar22 << 0x20,3);
    do {
      uVar25 = *puVar29;
      puVar29 = (ulong *)((long)puVar29 + 1);
      sVar43 = (ushort)(byte)uVar25 - (ushort)*(byte *)((long)param_2 + -1);
      sVar33 = sVar43 + ((ushort)uVar1 & 0xff);
      sVar37 = sVar43 + auVar14._2_2_;
      sVar38 = sVar43 + auVar18._0_2_;
      sVar39 = sVar43 + (short)Var17;
      sVar40 = sVar43 + auVar12._8_2_;
      sVar41 = sVar43 + auVar8._10_2_;
      sVar42 = sVar43 + auVar4._12_2_;
      sVar43 = sVar43 + (auVar2._13_2_ >> 8);
      *puVar27 = CONCAT17((0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43),
                          CONCAT16((0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42),
                                   CONCAT15((0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 -
                                            (0xff < sVar41),
                                            CONCAT14((0 < sVar40) * (sVar40 < 0x100) * (char)sVar40
                                                     - (0xff < sVar40),
                                                     CONCAT13((0 < sVar39) * (sVar39 < 0x100) *
                                                              (char)sVar39 - (0xff < sVar39),
                                                              CONCAT12((0 < sVar38) *
                                                                       (sVar38 < 0x100) *
                                                                       (char)sVar38 -
                                                                       (0xff < sVar38),
                                                                       CONCAT11((0 < sVar37) *
                                                                                (sVar37 < 0x100) *
                                                                                (char)sVar37 -
                                                                                (0xff < sVar37),
                                                                                (0 < sVar33) *
                                                                                (sVar33 < 0x100) *
                                                                                (char)sVar33 -
                                                                                (0xff < sVar33))))))
                                  ));
      puVar27 = puVar27 + 4;
    } while (puVar29 != param_2 + 1);
    puVar27 = (undefined8 *)(param_1 + 0x408);
    puVar29 = param_2 + 2;
    auVar47._8_8_ = param_2[2];
    auVar47._0_8_ = param_3[1];
    auVar46 = psadbw(auVar47,(undefined1  [16])0x0);
    uVar31 = (undefined1)(auVar46._8_4_ + auVar46._0_4_ + 8 >> 4);
    uVar32 = CONCAT11(uVar31,uVar31);
    uVar34 = CONCAT22(uVar32,uVar32);
    do {
      *puVar27 = CONCAT44(uVar34,uVar34);
      puVar27 = puVar27 + 4;
    } while ((undefined8 *)(param_1 + 0x508) != puVar27);
  }
  else {
    auVar44._8_8_ = 0;
    auVar44._0_8_ = *param_3;
    if (param_2 == (ulong *)0x0) {
      auVar46 = psadbw(auVar44,(undefined1  [16])0x0);
      uVar31 = (undefined1)(auVar46._0_4_ + 4 >> 3);
      uVar32 = CONCAT11(uVar31,uVar31);
      uVar34 = CONCAT22(uVar32,uVar32);
      do {
        *puVar27 = CONCAT44(uVar34,uVar34);
        puVar27 = puVar27 + 4;
      } while (puVar27 != (undefined8 *)(param_1 + 0x500));
    }
    else {
      auVar45._8_8_ = *param_2;
      auVar45._0_8_ = *param_3;
      auVar46 = psadbw(auVar45,(undefined1  [16])0x0);
      uVar31 = (undefined1)(auVar46._8_4_ + auVar46._0_4_ + 8 >> 4);
      uVar32 = CONCAT11(uVar31,uVar31);
      uVar34 = CONCAT22(uVar32,uVar32);
      do {
        *puVar27 = CONCAT44(uVar34,uVar34);
        puVar27 = puVar27 + 4;
      } while ((undefined8 *)(param_1 + 0x500) != puVar27);
    }
    puVar29 = (ulong *)(param_1 + 0x500);
    uVar1 = *param_3;
    do {
      *puVar29 = uVar1;
      puVar29 = puVar29 + 4;
    } while ((ulong *)(param_1 + 0x600) != puVar29);
    if (param_2 != (ulong *)0x0) goto LAB_00100fac;
LAB_00101268:
    uVar1 = _LC19;
    puVar30 = (ulong *)(param_1 + 0x510);
    puVar29 = puVar30;
    do {
      *puVar29 = uVar1;
      puVar29 = puVar29 + 4;
    } while ((ulong *)(param_1 + 0x610) != puVar29);
    puVar29 = (ulong *)(param_1 + 0x410);
    if (param_3 == (ulong *)0x0) {
      do {
        *puVar29 = uVar1;
        uVar26 = _LC17;
        puVar29 = puVar29 + 4;
      } while (puVar29 != puVar30);
      puVar27 = (undefined8 *)(param_1 + 0x408);
      do {
        *puVar27 = uVar26;
        puVar27 = puVar27 + 4;
      } while ((undefined8 *)(param_1 + 0x508) != puVar27);
      puVar29 = (ulong *)0x0;
      goto LAB_00101388;
    }
    uVar1 = *param_3;
    do {
      *puVar29 = uVar1;
      puVar29 = puVar29 + 4;
    } while (puVar30 != puVar29);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = param_3[1];
    puVar27 = (undefined8 *)(param_1 + 0x408);
    auVar46 = psadbw(auVar35,(undefined1  [16])0x0);
    uVar31 = (undefined1)(auVar46._0_4_ + 4 >> 3);
    uVar32 = CONCAT11(uVar31,uVar31);
    uVar34 = CONCAT22(uVar32,uVar32);
    do {
      *puVar27 = CONCAT44(uVar34,uVar34);
      puVar27 = puVar27 + 4;
    } while ((undefined8 *)(param_1 + 0x508) != puVar27);
    puVar29 = (ulong *)0x0;
  }
  param_3 = param_3 + 1;
  puVar30 = (ulong *)(param_1 + 0x508);
  uVar25 = *param_3;
  do {
    *puVar30 = uVar25;
    puVar30 = puVar30 + 4;
    uVar1 = _LC19;
  } while ((ulong *)(param_1 + 0x608) != puVar30);
joined_r0x001013b9:
  _LC19 = uVar1;
  if (puVar29 == (ulong *)0x0) {
    puVar30 = (ulong *)(param_1 + 0x518);
    puVar29 = puVar30;
    do {
      *puVar29 = uVar1;
      puVar29 = puVar29 + 4;
    } while ((ulong *)(param_1 + 0x618) != puVar29);
    puVar29 = (ulong *)(param_1 + 0x418);
    if (param_3 != (ulong *)0x0) {
      uVar1 = *param_3;
      do {
        *puVar29 = uVar1;
        puVar29 = puVar29 + 4;
      } while (puVar30 != puVar29);
      return;
    }
    do {
      *puVar29 = uVar1;
      puVar29 = puVar29 + 4;
    } while (puVar30 != puVar29);
    return;
  }
  puVar27 = (undefined8 *)(param_1 + 0x518);
  puVar30 = puVar29;
  do {
    uVar1 = *puVar30;
    puVar28 = puVar27 + 4;
    puVar30 = (ulong *)((long)puVar30 + 1);
    uVar32 = CONCAT11((char)uVar1,(char)uVar1);
    uVar34 = CONCAT22(uVar32,uVar32);
    *puVar27 = CONCAT44(uVar34,uVar34);
    puVar27 = puVar28;
  } while ((undefined8 *)(param_1 + 0x618) != puVar28);
  puVar27 = (undefined8 *)(param_1 + 0x418);
  if (param_3 != (ulong *)0x0) {
    uVar1 = *param_3;
    auVar3._8_6_ = 0;
    auVar3._0_8_ = uVar1;
    auVar3[0xe] = (char)(uVar1 >> 0x38);
    auVar5._8_4_ = 0;
    auVar5._0_8_ = uVar1;
    auVar5[0xc] = (char)(uVar1 >> 0x30);
    auVar5._13_2_ = auVar3._13_2_;
    auVar7._8_4_ = 0;
    auVar7._0_8_ = uVar1;
    auVar7._12_3_ = auVar5._12_3_;
    auVar9._8_2_ = 0;
    auVar9._0_8_ = uVar1;
    auVar9[10] = (char)(uVar1 >> 0x28);
    auVar9._11_4_ = auVar7._11_4_;
    auVar11._8_2_ = 0;
    auVar11._0_8_ = uVar1;
    auVar11._10_5_ = auVar9._10_5_;
    auVar13[8] = (char)(uVar1 >> 0x20);
    auVar13._0_8_ = uVar1;
    auVar13._9_6_ = auVar11._9_6_;
    auVar19._7_8_ = 0;
    auVar19._0_7_ = auVar13._8_7_;
    Var17 = CONCAT81(SUB158(auVar19 << 0x40,7),(char)(uVar1 >> 0x18));
    auVar23._9_6_ = 0;
    auVar23._0_9_ = Var17;
    auVar20._1_10_ = SUB1510(auVar23 << 0x30,5);
    auVar20[0] = (char)(uVar1 >> 0x10);
    auVar24._11_4_ = 0;
    auVar24._0_11_ = auVar20;
    auVar15[2] = (char)(uVar1 >> 8);
    auVar15._0_2_ = (ushort)uVar1;
    auVar15._3_12_ = SUB1512(auVar24 << 0x20,3);
    puVar30 = puVar29;
    do {
      uVar25 = *puVar30;
      puVar30 = (ulong *)((long)puVar30 + 1);
      sVar43 = (ushort)(byte)uVar25 - (ushort)*(byte *)((long)puVar29 + -1);
      sVar33 = sVar43 + ((ushort)uVar1 & 0xff);
      sVar37 = sVar43 + auVar15._2_2_;
      sVar38 = sVar43 + auVar20._0_2_;
      sVar39 = sVar43 + (short)Var17;
      sVar40 = sVar43 + auVar13._8_2_;
      sVar41 = sVar43 + auVar9._10_2_;
      sVar42 = sVar43 + auVar5._12_2_;
      sVar43 = sVar43 + (auVar3._13_2_ >> 8);
      *puVar27 = CONCAT17((0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43),
                          CONCAT16((0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42),
                                   CONCAT15((0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 -
                                            (0xff < sVar41),
                                            CONCAT14((0 < sVar40) * (sVar40 < 0x100) * (char)sVar40
                                                     - (0xff < sVar40),
                                                     CONCAT13((0 < sVar39) * (sVar39 < 0x100) *
                                                              (char)sVar39 - (0xff < sVar39),
                                                              CONCAT12((0 < sVar38) *
                                                                       (sVar38 < 0x100) *
                                                                       (char)sVar38 -
                                                                       (0xff < sVar38),
                                                                       CONCAT11((0 < sVar37) *
                                                                                (sVar37 < 0x100) *
                                                                                (char)sVar37 -
                                                                                (0xff < sVar37),
                                                                                (0 < sVar33) *
                                                                                (sVar33 < 0x100) *
                                                                                (char)sVar33 -
                                                                                (0xff < sVar33))))))
                                  ));
      puVar27 = puVar27 + 4;
    } while (puVar29 + 1 != puVar30);
    return;
  }
  do {
    uVar1 = *puVar29;
    puVar28 = puVar27 + 4;
    puVar29 = (ulong *)((long)puVar29 + 1);
    uVar32 = CONCAT11((char)uVar1,(char)uVar1);
    uVar34 = CONCAT22(uVar32,uVar32);
    *puVar27 = CONCAT44(uVar34,uVar34);
    puVar27 = puVar28;
  } while ((undefined8 *)(param_1 + 0x518) != puVar28);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool QuantizeBlockWHT_SSE2(ushort *param_1,undefined1 (*param_2) [16],short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  unkbyte10 Var27;
  int iVar28;
  int iVar29;
  short sVar30;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  short sVar40;
  int iVar41;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  short sVar49;
  short sVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar56;
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar42 [12];
  undefined1 auVar44 [16];
  undefined1 auVar57 [12];
  undefined1 auVar59 [16];
  
  uVar1 = (ushort)((short)*param_1 < 0);
  uVar3 = (ushort)((short)param_1[1] < 0);
  uVar5 = (ushort)((short)param_1[2] < 0);
  uVar7 = (ushort)((short)param_1[3] < 0);
  uVar9 = (ushort)((short)param_1[4] < 0);
  uVar11 = (ushort)((short)param_1[5] < 0);
  uVar13 = (ushort)((short)param_1[6] < 0);
  uVar15 = (ushort)((short)param_1[7] < 0);
  uVar2 = (ushort)((short)param_1[8] < 0);
  uVar4 = (ushort)((short)param_1[9] < 0);
  uVar6 = (ushort)((short)param_1[10] < 0);
  uVar8 = (ushort)((short)param_1[0xb] < 0);
  uVar10 = (ushort)((short)param_1[0xc] < 0);
  uVar12 = (ushort)((short)param_1[0xd] < 0);
  uVar14 = (ushort)((short)param_1[0xe] < 0);
  uVar16 = (ushort)((short)param_1[0xf] < 0);
  auVar43._0_2_ = (*param_1 ^ -uVar1) + uVar1;
  auVar43._2_2_ = (param_1[1] ^ -uVar3) + uVar3;
  auVar43._4_2_ = (param_1[2] ^ -uVar5) + uVar5;
  auVar43._6_2_ = (param_1[3] ^ -uVar7) + uVar7;
  auVar43._8_2_ = (param_1[4] ^ -uVar9) + uVar9;
  auVar43._10_2_ = (param_1[5] ^ -uVar11) + uVar11;
  auVar43._12_2_ = (param_1[6] ^ -uVar13) + uVar13;
  auVar43._14_2_ = (param_1[7] ^ -uVar15) + uVar15;
  auVar46._0_2_ = (param_1[8] ^ -uVar2) + uVar2;
  auVar46._2_2_ = (param_1[9] ^ -uVar4) + uVar4;
  auVar46._4_2_ = (param_1[10] ^ -uVar6) + uVar6;
  auVar46._6_2_ = (param_1[0xb] ^ -uVar8) + uVar8;
  auVar46._8_2_ = (param_1[0xc] ^ -uVar10) + uVar10;
  auVar46._10_2_ = (param_1[0xd] ^ -uVar12) + uVar12;
  auVar46._12_2_ = (param_1[0xe] ^ -uVar14) + uVar14;
  auVar46._14_2_ = (param_1[0xf] ^ -uVar16) + uVar16;
  auVar58 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x10),auVar43);
  auVar61 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x18),auVar46);
  iVar41 = CONCAT22(auVar58._8_2_,auVar43._8_2_ * param_3[0x14]);
  auVar42._0_8_ = CONCAT26(auVar58._10_2_,CONCAT24(auVar43._10_2_ * param_3[0x15],iVar41));
  auVar42._8_2_ = auVar43._12_2_ * param_3[0x16];
  auVar42._10_2_ = auVar58._12_2_;
  auVar44._12_2_ = auVar43._14_2_ * param_3[0x17];
  auVar44._0_12_ = auVar42;
  auVar44._14_2_ = auVar58._14_2_;
  iVar28 = CONCAT22(auVar58._6_2_,auVar43._6_2_ * param_3[0x13]);
  Var26 = CONCAT64(CONCAT42(iVar28,auVar58._4_2_),
                   CONCAT22(auVar43._4_2_ * param_3[0x12],auVar43._6_2_ * param_3[0x13]));
  auVar24._4_8_ = (long)((unkuint10)Var26 >> 0x10);
  auVar24._2_2_ = auVar58._2_2_;
  auVar24._0_2_ = auVar43._2_2_ * param_3[0x11];
  iVar29 = CONCAT22(auVar61._6_2_,auVar46._6_2_ * param_3[0x1b]);
  Var27 = CONCAT64(CONCAT42(iVar29,auVar61._4_2_),
                   CONCAT22(auVar46._4_2_ * param_3[0x1a],auVar46._6_2_ * param_3[0x1b]));
  auVar25._4_8_ = (long)((unkuint10)Var27 >> 0x10);
  auVar25._2_2_ = auVar61._2_2_;
  auVar25._0_2_ = auVar46._2_2_ * param_3[0x19];
  iVar56 = CONCAT22(auVar61._8_2_,auVar46._8_2_ * param_3[0x1c]);
  auVar57._0_8_ = CONCAT26(auVar61._10_2_,CONCAT24(auVar46._10_2_ * param_3[0x1d],iVar56));
  auVar57._8_2_ = auVar46._12_2_ * param_3[0x1e];
  auVar57._10_2_ = auVar61._12_2_;
  auVar59._12_2_ = auVar46._14_2_ * param_3[0x1f];
  auVar59._0_12_ = auVar57;
  auVar59._14_2_ = auVar61._14_2_;
  auVar58._0_4_ =
       *(int *)(param_3 + 0x20) + CONCAT22(auVar58._0_2_,auVar43._0_2_ * param_3[0x10]) >> 0x11;
  auVar58._4_4_ = *(int *)(param_3 + 0x22) + auVar24._0_4_ >> 0x11;
  auVar58._8_4_ = *(int *)(param_3 + 0x24) + (int)((unkuint10)Var26 >> 0x10) >> 0x11;
  auVar58._12_4_ = *(int *)(param_3 + 0x26) + iVar28 >> 0x11;
  auVar62._0_4_ = *(int *)(param_3 + 0x28) + iVar41 >> 0x11;
  auVar62._4_4_ = *(int *)(param_3 + 0x2a) + (int)((ulong)auVar42._0_8_ >> 0x20) >> 0x11;
  auVar62._8_4_ = *(int *)(param_3 + 0x2c) + auVar42._8_4_ >> 0x11;
  auVar62._12_4_ = *(int *)(param_3 + 0x2e) + auVar44._12_4_ >> 0x11;
  auVar60._0_4_ = iVar56 + *(int *)(param_3 + 0x38) >> 0x11;
  auVar60._4_4_ = (int)((ulong)auVar57._0_8_ >> 0x20) + *(int *)(param_3 + 0x3a) >> 0x11;
  auVar60._8_4_ = auVar57._8_4_ + *(int *)(param_3 + 0x3c) >> 0x11;
  auVar60._12_4_ = auVar59._12_4_ + *(int *)(param_3 + 0x3e) >> 0x11;
  auVar58 = packssdw(auVar58,auVar62);
  auVar45._0_4_ =
       *(int *)(param_3 + 0x30) + CONCAT22(auVar61._0_2_,auVar46._0_2_ * param_3[0x18]) >> 0x11;
  auVar45._4_4_ = *(int *)(param_3 + 0x32) + auVar25._0_4_ >> 0x11;
  auVar45._8_4_ = *(int *)(param_3 + 0x34) + (int)((unkuint10)Var27 >> 0x10) >> 0x11;
  auVar45._12_4_ = *(int *)(param_3 + 0x36) + iVar29 >> 0x11;
  auVar46 = packssdw(auVar45,auVar60);
  sVar40 = auVar46._0_2_;
  sVar49 = auVar46._2_2_;
  sVar50 = auVar46._4_2_;
  sVar51 = auVar46._6_2_;
  sVar52 = auVar46._8_2_;
  sVar53 = auVar46._10_2_;
  sVar54 = auVar46._12_2_;
  sVar55 = auVar46._14_2_;
  sVar30 = auVar58._0_2_;
  sVar33 = auVar58._2_2_;
  sVar34 = auVar58._4_2_;
  sVar35 = auVar58._6_2_;
  sVar36 = auVar58._8_2_;
  sVar37 = auVar58._10_2_;
  sVar38 = auVar58._12_2_;
  sVar39 = auVar58._14_2_;
  sVar17 = param_3[9];
  sVar18 = param_3[10];
  sVar19 = param_3[0xb];
  sVar20 = param_3[0xc];
  sVar21 = param_3[0xd];
  sVar22 = param_3[0xe];
  sVar23 = param_3[0xf];
  auVar47._0_2_ =
       (((ushort)(__LC20 < sVar40) * __LC20 | (ushort)(__LC20 >= sVar40) * sVar40) ^ -uVar2) + uVar2
  ;
  auVar47._2_2_ =
       (((ushort)(_UNK_00102552 < sVar49) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar49) * sVar49) ^ -uVar4) + uVar4;
  auVar47._4_2_ =
       (((ushort)(_UNK_00102554 < sVar50) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar50) * sVar50) ^ -uVar6) + uVar6;
  auVar47._6_2_ =
       (((ushort)(_UNK_00102556 < sVar51) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar51) * sVar51) ^ -uVar8) + uVar8;
  auVar47._8_2_ =
       (((ushort)(_UNK_00102558 < sVar52) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar52) * sVar52) ^ -uVar10) + uVar10;
  auVar47._10_2_ =
       (((ushort)(_UNK_0010255a < sVar53) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar53) * sVar53) ^ -uVar12) + uVar12;
  auVar47._12_2_ =
       (((ushort)(_UNK_0010255c < sVar54) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar54) * sVar54) ^ -uVar14) + uVar14;
  auVar47._14_2_ =
       (((ushort)(_UNK_0010255e < sVar55) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar55) * sVar55) ^ -uVar16) + uVar16;
  sVar40 = *param_3;
  sVar49 = param_3[1];
  sVar50 = param_3[2];
  sVar51 = param_3[3];
  sVar52 = param_3[4];
  sVar53 = param_3[5];
  sVar54 = param_3[6];
  sVar55 = param_3[7];
  auVar61._0_2_ =
       (((ushort)(__LC20 < sVar30) * __LC20 | (ushort)(__LC20 >= sVar30) * sVar30) ^ -uVar1) + uVar1
  ;
  auVar61._2_2_ =
       (((ushort)(_UNK_00102552 < sVar33) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar33) * sVar33) ^ -uVar3) + uVar3;
  auVar61._4_2_ =
       (((ushort)(_UNK_00102554 < sVar34) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar34) * sVar34) ^ -uVar5) + uVar5;
  auVar61._6_2_ =
       (((ushort)(_UNK_00102556 < sVar35) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar35) * sVar35) ^ -uVar7) + uVar7;
  auVar61._8_2_ =
       (((ushort)(_UNK_00102558 < sVar36) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar36) * sVar36) ^ -uVar9) + uVar9;
  auVar61._10_2_ =
       (((ushort)(_UNK_0010255a < sVar37) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar37) * sVar37) ^ -uVar11) + uVar11;
  auVar61._12_2_ =
       (((ushort)(_UNK_0010255c < sVar38) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar38) * sVar38) ^ -uVar13) + uVar13;
  auVar61._14_2_ =
       (((ushort)(_UNK_0010255e < sVar39) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar39) * sVar39) ^ -uVar15) + uVar15;
  auVar58 = pshuflw(auVar47,auVar47,0xc9);
  auVar46 = pshufhw(auVar61,auVar61,0x9c);
  auVar48._0_4_ = auVar58._0_4_;
  auVar48._12_4_ = auVar58._12_4_;
  auVar48._4_4_ = auVar58._8_4_;
  auVar48._8_4_ = auVar58._4_4_;
  auVar31._0_4_ = auVar46._0_4_;
  auVar31._12_4_ = auVar46._12_4_;
  auVar31._4_4_ = auVar46._8_4_;
  auVar31._8_4_ = auVar46._4_4_;
  auVar58 = pshuflw(auVar48,auVar48,0x78);
  auVar46 = pshufhw(auVar31,auVar31,0xd2);
  param_1[8] = param_3[8] * auVar47._0_2_;
  param_1[9] = sVar17 * auVar47._2_2_;
  param_1[10] = sVar18 * auVar47._4_2_;
  param_1[0xb] = sVar19 * auVar47._6_2_;
  param_1[0xc] = sVar20 * auVar47._8_2_;
  param_1[0xd] = sVar21 * auVar47._10_2_;
  param_1[0xe] = sVar22 * auVar47._12_2_;
  param_1[0xf] = sVar23 * auVar47._14_2_;
  *param_1 = sVar40 * auVar61._0_2_;
  param_1[1] = sVar49 * auVar61._2_2_;
  param_1[2] = sVar50 * auVar61._4_2_;
  param_1[3] = sVar51 * auVar61._6_2_;
  param_1[4] = sVar52 * auVar61._8_2_;
  param_1[5] = sVar53 * auVar61._10_2_;
  param_1[6] = sVar54 * auVar61._12_2_;
  param_1[7] = sVar55 * auVar61._14_2_;
  auVar61 = packsswb(auVar46,auVar58);
  *param_2 = auVar46;
  *(short *)(*param_2 + 6) = auVar58._8_2_;
  auVar32[0] = -(auVar61[0] == '\0');
  auVar32[1] = -(auVar61[1] == '\0');
  auVar32[2] = -(auVar61[2] == '\0');
  auVar32[3] = -(auVar61[3] == '\0');
  auVar32[4] = -(auVar61[4] == '\0');
  auVar32[5] = -(auVar61[5] == '\0');
  auVar32[6] = -(auVar61[6] == '\0');
  auVar32[7] = -(auVar61[7] == '\0');
  auVar32[8] = -(auVar61[8] == '\0');
  auVar32[9] = -(auVar61[9] == '\0');
  auVar32[10] = -(auVar61[10] == '\0');
  auVar32[0xb] = -(auVar61[0xb] == '\0');
  auVar32[0xc] = -(auVar61[0xc] == '\0');
  auVar32[0xd] = -(auVar61[0xd] == '\0');
  auVar32[0xe] = -(auVar61[0xe] == '\0');
  auVar32[0xf] = -(auVar61[0xf] == '\0');
  param_2[1] = auVar58;
  *(short *)(param_2[1] + 8) = auVar46._6_2_;
  return (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar32[0xf] >> 7) << 0xf) != 0xffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ITransform_SSE2(ulong *param_1,undefined1 (*param_2) [16],char *param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  undefined1 auVar49 [15];
  unkuint9 Var50;
  undefined1 auVar51 [11];
  undefined1 auVar52 [13];
  undefined1 auVar53 [15];
  unkuint9 Var54;
  undefined1 auVar55 [11];
  undefined1 auVar56 [15];
  unkuint9 Var57;
  undefined1 auVar58 [11];
  undefined1 auVar59 [13];
  undefined1 auVar60 [15];
  unkuint9 Var61;
  undefined1 auVar62 [11];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [13];
  undefined1 auVar66 [15];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  undefined1 auVar73 [15];
  undefined1 auVar74 [15];
  undefined1 auVar75 [15];
  undefined1 auVar76 [15];
  undefined1 auVar77 [15];
  undefined1 auVar78 [12];
  short sVar79;
  ulong uVar80;
  short sVar83;
  short sVar85;
  undefined8 uVar86;
  undefined1 auVar81 [16];
  short sVar84;
  undefined1 auVar82 [16];
  undefined4 uVar87;
  short sVar97;
  short sVar99;
  short sVar100;
  short sVar102;
  short sVar104;
  undefined8 uVar101;
  undefined1 auVar89 [16];
  short sVar95;
  short sVar105;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  short sVar96;
  short sVar98;
  short sVar103;
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  short sVar112;
  ulong uVar113;
  short sVar116;
  short sVar117;
  short sVar119;
  short sVar120;
  short sVar121;
  undefined1 auVar114 [16];
  short sVar118;
  short sVar122;
  undefined1 auVar115 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  short sVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  undefined1 auVar126 [16];
  short sVar134;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  short sVar135;
  short sVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar143;
  undefined1 auVar136 [16];
  short sVar144;
  undefined1 auVar137 [16];
  short sVar145;
  short sVar147;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  short sVar152;
  undefined1 auVar146 [16];
  short sVar153;
  short sVar154;
  short sVar155;
  short sVar156;
  short sVar157;
  undefined1 auVar88 [12];
  undefined1 auVar93 [16];
  
  auVar123 = *param_2;
  auVar125 = param_2[1];
  uVar86 = auVar123._8_8_;
  uVar101 = auVar125._8_8_;
  sVar84 = auVar123._0_2_;
  sVar79 = auVar123._2_2_;
  sVar83 = auVar123._4_2_;
  sVar85 = auVar123._6_2_;
  sVar100 = auVar125._0_2_;
  sVar96 = auVar125._4_2_;
  sVar98 = auVar125._6_2_;
  sVar97 = auVar125._10_2_;
  sVar120 = auVar123._10_2_;
  sVar112 = auVar123._8_2_;
  sVar121 = auVar123._12_2_;
  sVar119 = auVar123._14_2_;
  sVar103 = auVar125._2_2_;
  sVar95 = auVar125._8_2_;
  sVar99 = auVar125._12_2_;
  sVar102 = auVar125._14_2_;
  if (param_4 != 0) {
    auVar123 = param_2[2];
    auVar125 = param_2[3];
    auVar81._8_8_ = auVar123._8_8_;
    auVar81._0_8_ = uVar86;
    auVar89._8_8_ = auVar125._8_8_;
    auVar89._0_8_ = uVar101;
    auVar126 = pmulhw(auVar89,__LC21);
    auVar136 = pmulhw(auVar89,__LC22);
    sVar154 = auVar125._0_2_ + auVar123._0_2_;
    sVar155 = auVar125._2_2_ + auVar123._2_2_;
    sVar156 = auVar125._4_2_ + auVar123._4_2_;
    sVar157 = auVar125._6_2_ + auVar123._6_2_;
    sVar108 = auVar123._0_2_ - auVar125._0_2_;
    sVar109 = auVar123._2_2_ - auVar125._2_2_;
    sVar110 = auVar123._4_2_ - auVar125._4_2_;
    sVar111 = auVar123._6_2_ - auVar125._6_2_;
    auVar146 = pmulhw(auVar81,__LC21);
    auVar114 = pmulhw(auVar81,__LC22);
    sVar135 = auVar136._0_2_ + sVar95;
    sVar138 = auVar136._2_2_ + sVar97;
    sVar139 = auVar136._4_2_ + sVar99;
    sVar140 = auVar136._6_2_ + sVar102;
    sVar141 = auVar136._8_2_ + auVar125._8_2_;
    sVar142 = auVar136._10_2_ + auVar125._10_2_;
    sVar143 = auVar136._12_2_ + auVar125._12_2_;
    sVar144 = auVar136._14_2_ + auVar125._14_2_;
    sVar145 = auVar146._0_2_ + sVar112;
    sVar147 = auVar146._2_2_ + sVar120;
    sVar148 = auVar146._4_2_ + sVar121;
    sVar149 = auVar146._6_2_ + sVar119;
    sVar150 = auVar146._8_2_ + auVar123._8_2_;
    sVar151 = auVar146._10_2_ + auVar123._10_2_;
    sVar152 = auVar146._12_2_ + auVar123._12_2_;
    sVar153 = auVar146._14_2_ + auVar123._14_2_;
    sVar112 = auVar114._0_2_ + auVar126._0_2_ + sVar95 + sVar112;
    sVar116 = auVar114._2_2_ + auVar126._2_2_ + sVar97 + sVar120;
    sVar117 = auVar114._4_2_ + auVar126._4_2_ + sVar99 + sVar121;
    sVar118 = auVar114._6_2_ + auVar126._6_2_ + sVar102 + sVar119;
    sVar119 = auVar114._8_2_ + auVar126._8_2_ + auVar125._8_2_ + auVar123._8_2_;
    sVar120 = auVar114._10_2_ + auVar126._10_2_ + auVar125._10_2_ + auVar123._10_2_;
    sVar121 = auVar114._12_2_ + auVar126._12_2_ + auVar125._12_2_ + auVar123._12_2_;
    sVar122 = auVar114._14_2_ + auVar126._14_2_ + auVar125._14_2_ + auVar123._14_2_;
    sVar129 = ((sVar79 - sVar103) + sVar147) - sVar138;
    sVar130 = ((sVar83 - sVar96) + sVar148) - sVar139;
    sVar131 = ((sVar85 - sVar98) + sVar149) - sVar140;
    sVar132 = (sVar109 + sVar151) - sVar142;
    sVar133 = (sVar110 + sVar152) - sVar143;
    sVar134 = (sVar111 + sVar153) - sVar144;
    sVar95 = (sVar103 + sVar79) - sVar116;
    sVar97 = (sVar96 + sVar83) - sVar117;
    sVar99 = (sVar98 + sVar85) - sVar118;
    sVar102 = sVar155 - sVar120;
    sVar104 = sVar156 - sVar121;
    sVar105 = sVar157 - sVar122;
    sVar116 = sVar103 + sVar79 + sVar116;
    sVar117 = sVar96 + sVar83 + sVar117;
    sVar118 = sVar98 + sVar85 + sVar118;
    sVar155 = sVar155 + sVar120;
    sVar156 = sVar156 + sVar121;
    sVar157 = sVar157 + sVar122;
    sVar138 = ((sVar79 - sVar103) - sVar147) + sVar138;
    sVar139 = ((sVar83 - sVar96) - sVar148) + sVar139;
    sVar140 = ((sVar85 - sVar98) - sVar149) + sVar140;
    sVar142 = (sVar109 - sVar151) + sVar142;
    sVar143 = (sVar110 - sVar152) + sVar143;
    sVar144 = (sVar111 - sVar153) + sVar144;
    auVar47._4_8_ =
         (long)(((unkuint10)(uint6)(((unkuint10)CONCAT22(sVar131,sVar118) << 0x30) >> 0x20) << 0x20)
               >> 0x10);
    auVar47._2_2_ = sVar129;
    auVar47._0_2_ = sVar116;
    auVar90._0_8_ = auVar47._0_8_ << 0x20;
    auVar78._10_2_ = sVar102;
    auVar78._8_2_ = sVar142;
    auVar48._4_8_ =
         (long)(((unkuint10)(uint6)(((unkuint10)CONCAT22(sVar99,sVar140) << 0x30) >> 0x20) << 0x20)
               >> 0x10);
    auVar48._2_2_ = sVar95;
    auVar48._0_2_ = sVar138;
    auVar90._8_4_ = auVar47._0_4_;
    auVar90._12_4_ = auVar48._0_4_;
    auVar78._4_4_ = CONCAT22(sVar132,sVar155);
    auVar78._0_4_ = CONCAT22(sVar132,sVar155);
    auVar137._12_4_ = (int)(CONCAT24(sVar105,CONCAT22(sVar144,sVar104)) >> 0x10);
    auVar137._8_4_ = (int)(CONCAT24(sVar134,CONCAT22(sVar157,sVar133)) >> 0x10);
    auVar91._8_8_ = auVar78._4_8_;
    auVar91._0_8_ = auVar90._8_8_;
    auVar137._4_4_ = CONCAT22(sVar99,sVar140);
    auVar137._0_4_ = CONCAT22(sVar131,sVar118);
    sVar79 = sVar100 + sVar84 + sVar112 + __LC23;
    sVar120 = (((sVar84 - sVar100) + sVar145) - sVar135) + _UNK_00102582;
    sVar83 = ((sVar84 - sVar100) - sVar145) + sVar135 + _UNK_00102584;
    sVar84 = ((sVar100 + sVar84) - sVar112) + _UNK_00102586;
    sVar85 = sVar154 + sVar119 + _UNK_00102588;
    sVar112 = ((sVar108 + sVar150) - sVar141) + _UNK_0010258a;
    sVar121 = (sVar108 - sVar150) + sVar141 + _UNK_0010258c;
    sVar119 = (sVar154 - sVar119) + _UNK_0010258e;
    sVar108 = sVar79 + sVar117;
    sVar109 = sVar120 + sVar130;
    sVar110 = sVar83 + sVar139;
    sVar111 = sVar84 + sVar97;
    sVar122 = sVar85 + sVar156;
    sVar135 = sVar112 + sVar133;
    sVar141 = sVar121 + sVar143;
    sVar145 = sVar119 + sVar104;
    sVar79 = sVar79 - sVar117;
    sVar120 = sVar120 - sVar130;
    sVar83 = sVar83 - sVar139;
    sVar84 = sVar84 - sVar97;
    sVar85 = sVar85 - sVar156;
    sVar112 = sVar112 - sVar133;
    sVar121 = sVar121 - sVar143;
    sVar119 = sVar119 - sVar104;
    auVar126 = pmulhw(auVar137,__LC22);
    auVar123 = pmulhw(__LC22,auVar91);
    auVar114 = pmulhw(auVar91,__LC21);
    auVar125 = pmulhw(__LC21,auVar137);
    sVar139 = auVar114._0_2_ + sVar116;
    sVar143 = auVar114._2_2_ + sVar129;
    sVar104 = auVar114._4_2_ + sVar138;
    sVar117 = auVar114._6_2_ + sVar95;
    sVar156 = auVar114._8_2_ + sVar155;
    sVar130 = auVar114._10_2_ + sVar132;
    sVar133 = auVar114._12_2_ + sVar142;
    sVar147 = auVar114._14_2_ + sVar102;
    sVar97 = sVar116 + sVar118 + auVar123._0_2_ + auVar125._0_2_;
    sVar96 = sVar129 + sVar131 + auVar123._2_2_ + auVar125._2_2_;
    sVar98 = sVar138 + sVar140 + auVar123._4_2_ + auVar125._4_2_;
    sVar95 = sVar95 + sVar99 + auVar123._6_2_ + auVar125._6_2_;
    sVar100 = sVar155 + sVar157 + auVar123._8_2_ + auVar125._8_2_;
    sVar103 = sVar132 + sVar134 + auVar123._10_2_ + auVar125._10_2_;
    sVar138 = sVar142 + sVar144 + auVar123._12_2_ + auVar125._12_2_;
    sVar102 = sVar102 + sVar105 + auVar123._14_2_ + auVar125._14_2_;
    auVar115._0_2_ = sVar108 + sVar97;
    auVar115._2_2_ = sVar109 + sVar96;
    auVar115._4_2_ = sVar110 + sVar98;
    auVar115._6_2_ = sVar111 + sVar95;
    auVar115._8_2_ = sVar122 + sVar100;
    auVar115._10_2_ = sVar135 + sVar103;
    auVar115._12_2_ = sVar141 + sVar138;
    auVar115._14_2_ = sVar145 + sVar102;
    auVar124._0_2_ = (sVar139 - sVar118) + (sVar79 - auVar126._0_2_);
    auVar124._2_2_ = (sVar143 - sVar131) + (sVar120 - auVar126._2_2_);
    auVar124._4_2_ = (sVar104 - sVar140) + (sVar83 - auVar126._4_2_);
    auVar124._6_2_ = (sVar117 - sVar99) + (sVar84 - auVar126._6_2_);
    auVar124._8_2_ = (sVar156 - sVar157) + (sVar85 - auVar126._8_2_);
    auVar124._10_2_ = (sVar130 - sVar134) + (sVar112 - auVar126._10_2_);
    auVar124._12_2_ = (sVar133 - sVar144) + (sVar121 - auVar126._12_2_);
    auVar124._14_2_ = (sVar147 - sVar105) + (sVar119 - auVar126._14_2_);
    auVar127._0_2_ = sVar108 - sVar97;
    auVar127._2_2_ = sVar109 - sVar96;
    auVar127._4_2_ = sVar110 - sVar98;
    auVar127._6_2_ = sVar111 - sVar95;
    auVar127._8_2_ = sVar122 - sVar100;
    auVar127._10_2_ = sVar135 - sVar103;
    auVar127._12_2_ = sVar141 - sVar138;
    auVar127._14_2_ = sVar145 - sVar102;
    auVar114 = psraw(auVar115,3);
    auVar82._0_2_ = (sVar79 - sVar139) + auVar126._0_2_ + sVar118;
    auVar82._2_2_ = (sVar120 - sVar143) + auVar126._2_2_ + sVar131;
    auVar82._4_2_ = (sVar83 - sVar104) + auVar126._4_2_ + sVar140;
    auVar82._6_2_ = (sVar84 - sVar117) + auVar126._6_2_ + sVar99;
    auVar82._8_2_ = (sVar85 - sVar156) + auVar126._8_2_ + sVar157;
    auVar82._10_2_ = (sVar112 - sVar130) + auVar126._10_2_ + sVar134;
    auVar82._12_2_ = (sVar121 - sVar133) + auVar126._12_2_ + sVar144;
    auVar82._14_2_ = (sVar119 - sVar147) + auVar126._14_2_ + sVar105;
    auVar126 = psraw(auVar124,3);
    auVar123 = psraw(auVar82,3);
    auVar125 = psraw(auVar127,3);
    uVar80 = param_1[0xc];
    uVar113 = param_1[4];
    uVar1 = *param_1;
    uVar2 = param_1[8];
    auVar10._8_6_ = 0;
    auVar10._0_8_ = uVar1;
    auVar10[0xe] = (char)(uVar1 >> 0x38);
    auVar16._8_4_ = 0;
    auVar16._0_8_ = uVar1;
    auVar16[0xc] = (char)(uVar1 >> 0x30);
    auVar16._13_2_ = auVar10._13_2_;
    auVar22._8_4_ = 0;
    auVar22._0_8_ = uVar1;
    auVar22._12_3_ = auVar16._12_3_;
    auVar28._8_2_ = 0;
    auVar28._0_8_ = uVar1;
    auVar28[10] = (char)(uVar1 >> 0x28);
    auVar28._11_4_ = auVar22._11_4_;
    auVar34._8_2_ = 0;
    auVar34._0_8_ = uVar1;
    auVar34._10_5_ = auVar28._10_5_;
    auVar40[8] = (char)(uVar1 >> 0x20);
    auVar40._0_8_ = uVar1;
    auVar40._9_6_ = auVar34._9_6_;
    auVar49._7_8_ = 0;
    auVar49._0_7_ = auVar40._8_7_;
    Var50 = CONCAT81(SUB158(auVar49 << 0x40,7),(char)(uVar1 >> 0x18));
    auVar68._9_6_ = 0;
    auVar68._0_9_ = Var50;
    auVar51._1_10_ = SUB1510(auVar68 << 0x30,5);
    auVar51[0] = (char)(uVar1 >> 0x10);
    auVar69._11_4_ = 0;
    auVar69._0_11_ = auVar51;
    auVar52._1_12_ = SUB1512(auVar69 << 0x20,3);
    auVar52[0] = (char)(uVar1 >> 8);
    auVar6._8_6_ = 0;
    auVar6._0_8_ = uVar113;
    auVar6[0xe] = (char)(uVar113 >> 0x38);
    auVar11._8_4_ = 0;
    auVar11._0_8_ = uVar113;
    auVar11[0xc] = (char)(uVar113 >> 0x30);
    auVar11._13_2_ = auVar6._13_2_;
    auVar17._8_4_ = 0;
    auVar17._0_8_ = uVar113;
    auVar17._12_3_ = auVar11._12_3_;
    auVar23._8_2_ = 0;
    auVar23._0_8_ = uVar113;
    auVar23[10] = (char)(uVar113 >> 0x28);
    auVar23._11_4_ = auVar17._11_4_;
    auVar29._8_2_ = 0;
    auVar29._0_8_ = uVar113;
    auVar29._10_5_ = auVar23._10_5_;
    auVar35[8] = (char)(uVar113 >> 0x20);
    auVar35._0_8_ = uVar113;
    auVar35._9_6_ = auVar29._9_6_;
    auVar53._7_8_ = 0;
    auVar53._0_7_ = auVar35._8_7_;
    Var54 = CONCAT81(SUB158(auVar53 << 0x40,7),(char)(uVar113 >> 0x18));
    auVar70._9_6_ = 0;
    auVar70._0_9_ = Var54;
    auVar55._1_10_ = SUB1510(auVar70 << 0x30,5);
    auVar55[0] = (char)(uVar113 >> 0x10);
    auVar71._11_4_ = 0;
    auVar71._0_11_ = auVar55;
    auVar44[2] = (char)(uVar113 >> 8);
    auVar44._0_2_ = (ushort)uVar113;
    auVar44._3_12_ = SUB1512(auVar71 << 0x20,3);
    auVar7._8_6_ = 0;
    auVar7._0_8_ = uVar80;
    auVar7[0xe] = (char)(uVar80 >> 0x38);
    auVar12._8_4_ = 0;
    auVar12._0_8_ = uVar80;
    auVar12[0xc] = (char)(uVar80 >> 0x30);
    auVar12._13_2_ = auVar7._13_2_;
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar80;
    auVar18._12_3_ = auVar12._12_3_;
    auVar24._8_2_ = 0;
    auVar24._0_8_ = uVar80;
    auVar24[10] = (char)(uVar80 >> 0x28);
    auVar24._11_4_ = auVar18._11_4_;
    auVar30._8_2_ = 0;
    auVar30._0_8_ = uVar80;
    auVar30._10_5_ = auVar24._10_5_;
    auVar36[8] = (char)(uVar80 >> 0x20);
    auVar36._0_8_ = uVar80;
    auVar36._9_6_ = auVar30._9_6_;
    auVar56._7_8_ = 0;
    auVar56._0_7_ = auVar36._8_7_;
    Var57 = CONCAT81(SUB158(auVar56 << 0x40,7),(char)(uVar80 >> 0x18));
    auVar72._9_6_ = 0;
    auVar72._0_9_ = Var57;
    auVar58._1_10_ = SUB1510(auVar72 << 0x30,5);
    auVar58[0] = (char)(uVar80 >> 0x10);
    auVar73._11_4_ = 0;
    auVar73._0_11_ = auVar58;
    auVar59._1_12_ = SUB1512(auVar73 << 0x20,3);
    auVar59[0] = (char)(uVar80 >> 8);
    auVar8._8_6_ = 0;
    auVar8._0_8_ = uVar2;
    auVar8[0xe] = (char)(uVar2 >> 0x38);
    auVar13._8_4_ = 0;
    auVar13._0_8_ = uVar2;
    auVar13[0xc] = (char)(uVar2 >> 0x30);
    auVar13._13_2_ = auVar8._13_2_;
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar2;
    auVar19._12_3_ = auVar13._12_3_;
    auVar25._8_2_ = 0;
    auVar25._0_8_ = uVar2;
    auVar25[10] = (char)(uVar2 >> 0x28);
    auVar25._11_4_ = auVar19._11_4_;
    auVar31._8_2_ = 0;
    auVar31._0_8_ = uVar2;
    auVar31._10_5_ = auVar25._10_5_;
    auVar37[8] = (char)(uVar2 >> 0x20);
    auVar37._0_8_ = uVar2;
    auVar37._9_6_ = auVar31._9_6_;
    auVar60._7_8_ = 0;
    auVar60._0_7_ = auVar37._8_7_;
    Var61 = CONCAT81(SUB158(auVar60 << 0x40,7),(char)(uVar2 >> 0x18));
    auVar74._9_6_ = 0;
    auVar74._0_9_ = Var61;
    auVar62._1_10_ = SUB1510(auVar74 << 0x30,5);
    auVar62[0] = (char)(uVar2 >> 0x10);
    auVar75._11_4_ = 0;
    auVar75._0_11_ = auVar62;
    auVar45[2] = (char)(uVar2 >> 8);
    auVar45._0_2_ = (ushort)uVar2;
    auVar45._3_12_ = SUB1512(auVar75 << 0x20,3);
    sVar108 = (ushort)(byte)uVar1 + auVar114._0_2_;
    sVar109 = auVar52._0_2_ + auVar126._0_2_;
    sVar110 = auVar51._0_2_ + auVar123._0_2_;
    sVar111 = (short)Var50 + auVar125._0_2_;
    sVar116 = auVar40._8_2_ + auVar114._8_2_;
    sVar117 = auVar28._10_2_ + auVar126._8_2_;
    sVar118 = auVar16._12_2_ + auVar123._8_2_;
    sVar155 = (auVar10._13_2_ >> 8) + auVar125._8_2_;
    sVar138 = ((ushort)uVar113 & 0xff) + auVar114._2_2_;
    sVar139 = auVar44._2_2_ + auVar126._2_2_;
    sVar140 = auVar55._0_2_ + auVar123._2_2_;
    sVar142 = (short)Var54 + auVar125._2_2_;
    sVar143 = auVar35._8_2_ + auVar114._10_2_;
    sVar144 = auVar23._10_2_ + auVar126._10_2_;
    sVar104 = auVar11._12_2_ + auVar123._10_2_;
    sVar105 = (auVar6._13_2_ >> 8) + auVar125._10_2_;
    sVar97 = ((ushort)uVar2 & 0xff) + auVar114._4_2_;
    sVar96 = auVar45._2_2_ + auVar126._4_2_;
    sVar98 = auVar62._0_2_ + auVar123._4_2_;
    sVar95 = (short)Var61 + auVar125._4_2_;
    sVar99 = auVar37._8_2_ + auVar114._12_2_;
    sVar100 = auVar25._10_2_ + auVar126._12_2_;
    sVar103 = auVar13._12_2_ + auVar123._12_2_;
    sVar102 = (auVar8._13_2_ >> 8) + auVar125._12_2_;
    sVar84 = (ushort)(byte)uVar80 + auVar114._6_2_;
    sVar79 = auVar59._0_2_ + auVar126._6_2_;
    sVar120 = auVar58._0_2_ + auVar123._6_2_;
    sVar83 = (short)Var57 + auVar125._6_2_;
    sVar85 = auVar36._8_2_ + auVar114._14_2_;
    sVar112 = auVar24._10_2_ + auVar126._14_2_;
    sVar121 = auVar12._12_2_ + auVar123._14_2_;
    sVar119 = (auVar7._13_2_ >> 8) + auVar125._14_2_;
    *(ulong *)param_3 =
         CONCAT17((0 < sVar155) * (sVar155 < 0x100) * (char)sVar155 - (0xff < sVar155),
                  CONCAT16((0 < sVar118) * (sVar118 < 0x100) * (char)sVar118 - (0xff < sVar118),
                           CONCAT15((0 < sVar117) * (sVar117 < 0x100) * (char)sVar117 -
                                    (0xff < sVar117),
                                    CONCAT14((0 < sVar116) * (sVar116 < 0x100) * (char)sVar116 -
                                             (0xff < sVar116),
                                             CONCAT13((0 < sVar111) * (sVar111 < 0x100) *
                                                      (char)sVar111 - (0xff < sVar111),
                                                      CONCAT12((0 < sVar110) * (sVar110 < 0x100) *
                                                               (char)sVar110 - (0xff < sVar110),
                                                               CONCAT11((0 < sVar109) *
                                                                        (sVar109 < 0x100) *
                                                                        (char)sVar109 -
                                                                        (0xff < sVar109),
                                                                        (0 < sVar108) *
                                                                        (sVar108 < 0x100) *
                                                                        (char)sVar108 -
                                                                        (0xff < sVar108))))))));
    *(ulong *)(param_3 + 0x20) =
         CONCAT17((0 < sVar105) * (sVar105 < 0x100) * (char)sVar105 - (0xff < sVar105),
                  CONCAT16((0 < sVar104) * (sVar104 < 0x100) * (char)sVar104 - (0xff < sVar104),
                           CONCAT15((0 < sVar144) * (sVar144 < 0x100) * (char)sVar144 -
                                    (0xff < sVar144),
                                    CONCAT14((0 < sVar143) * (sVar143 < 0x100) * (char)sVar143 -
                                             (0xff < sVar143),
                                             CONCAT13((0 < sVar142) * (sVar142 < 0x100) *
                                                      (char)sVar142 - (0xff < sVar142),
                                                      CONCAT12((0 < sVar140) * (sVar140 < 0x100) *
                                                               (char)sVar140 - (0xff < sVar140),
                                                               CONCAT11((0 < sVar139) *
                                                                        (sVar139 < 0x100) *
                                                                        (char)sVar139 -
                                                                        (0xff < sVar139),
                                                                        (0 < sVar138) *
                                                                        (sVar138 < 0x100) *
                                                                        (char)sVar138 -
                                                                        (0xff < sVar138))))))));
    *(ulong *)(param_3 + 0x40) =
         CONCAT17((0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102),
                  CONCAT16((0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103),
                           CONCAT15((0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 -
                                    (0xff < sVar100),
                                    CONCAT14((0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 -
                                             (0xff < sVar99),
                                             CONCAT13((0 < sVar95) * (sVar95 < 0x100) * (char)sVar95
                                                      - (0xff < sVar95),
                                                      CONCAT12((0 < sVar98) * (sVar98 < 0x100) *
                                                               (char)sVar98 - (0xff < sVar98),
                                                               CONCAT11((0 < sVar96) *
                                                                        (sVar96 < 0x100) *
                                                                        (char)sVar96 -
                                                                        (0xff < sVar96),
                                                                        (0 < sVar97) *
                                                                        (sVar97 < 0x100) *
                                                                        (char)sVar97 -
                                                                        (0xff < sVar97))))))));
    *(ulong *)(param_3 + 0x60) =
         CONCAT17((0 < sVar119) * (sVar119 < 0x100) * (char)sVar119 - (0xff < sVar119),
                  CONCAT16((0 < sVar121) * (sVar121 < 0x100) * (char)sVar121 - (0xff < sVar121),
                           CONCAT15((0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 -
                                    (0xff < sVar112),
                                    CONCAT14((0 < sVar85) * (sVar85 < 0x100) * (char)sVar85 -
                                             (0xff < sVar85),
                                             CONCAT13((0 < sVar83) * (sVar83 < 0x100) * (char)sVar83
                                                      - (0xff < sVar83),
                                                      CONCAT12((0 < sVar120) * (sVar120 < 0x100) *
                                                               (char)sVar120 - (0xff < sVar120),
                                                               CONCAT11((0 < sVar79) *
                                                                        (sVar79 < 0x100) *
                                                                        (char)sVar79 -
                                                                        (0xff < sVar79),
                                                                        (0 < sVar84) *
                                                                        (sVar84 < 0x100) *
                                                                        (char)sVar84 -
                                                                        (0xff < sVar84))))))));
    return;
  }
  auVar106._8_8_ = uVar86;
  auVar106._0_8_ = uVar86;
  auVar128._8_8_ = uVar101;
  auVar128._0_8_ = uVar101;
  auVar123 = pmulhw(auVar106,__LC24);
  auVar125 = pmulhw(auVar128,__LC25);
  sVar105 = (auVar123._0_2_ + (sVar112 - sVar95)) - auVar125._0_2_;
  sVar138 = (auVar123._2_2_ + (sVar120 - sVar97)) - auVar125._2_2_;
  sVar139 = (auVar123._4_2_ + (sVar121 - sVar99)) - auVar125._4_2_;
  sVar140 = (auVar123._6_2_ + (sVar119 - sVar102)) - auVar125._6_2_;
  sVar142 = auVar123._8_2_ + auVar125._8_2_ + sVar95 + sVar112;
  sVar120 = auVar123._10_2_ + auVar125._10_2_ + sVar97 + sVar120;
  sVar112 = auVar123._12_2_ + auVar125._12_2_ + sVar99 + sVar121;
  sVar121 = auVar123._14_2_ + auVar125._14_2_ + sVar102 + sVar119;
  sVar97 = (sVar103 + sVar79) - sVar120;
  sVar95 = (sVar96 + sVar83) - sVar112;
  sVar102 = (sVar98 + sVar85) - sVar121;
  sVar143 = (sVar79 - sVar103) - sVar138;
  sVar144 = (sVar83 - sVar96) - sVar139;
  sVar104 = (sVar85 - sVar98) - sVar140;
  sVar120 = sVar120 + sVar103 + sVar79;
  sVar112 = sVar112 + sVar96 + sVar83;
  sVar121 = sVar121 + sVar98 + sVar85;
  sVar138 = sVar138 + (sVar79 - sVar103);
  sVar139 = sVar139 + (sVar83 - sVar96);
  sVar140 = sVar140 + (sVar85 - sVar98);
  auVar125._2_8_ =
       (long)(CONCAT64(CONCAT42(CONCAT22(sVar104,sVar121),sVar144),CONCAT22(sVar112,sVar121)) >>
             0x10);
  auVar125._0_2_ = sVar143;
  auVar125._10_6_ = 0;
  auVar123._12_4_ = 0;
  auVar123._0_12_ = SUB1612(auVar125 << 0x30,4);
  auVar123 = auVar123 << 0x20;
  auVar136._0_12_ = auVar123._0_12_;
  auVar136._12_2_ = sVar143;
  auVar136._14_2_ = sVar97;
  auVar146._12_4_ = auVar136._12_4_;
  auVar146._0_10_ = auVar123._0_10_;
  auVar146._10_2_ = sVar138;
  auVar92._10_6_ = auVar146._10_6_;
  auVar92._0_8_ = auVar123._0_8_;
  auVar92._8_2_ = sVar120;
  auVar114._8_8_ =
       (undefined8)
       (CONCAT28(sVar102,CONCAT26(sVar104,CONCAT24(sVar140,CONCAT22(sVar121,sVar95)))) >> 0x10);
  auVar114._0_8_ = auVar114._8_8_;
  auVar107._8_8_ = auVar92._8_8_;
  auVar107._0_8_ = auVar92._8_8_;
  sVar85 = sVar142 + sVar100 + sVar84 + __LC26;
  sVar96 = sVar105 + (sVar84 - sVar100) + _UNK_001025b2;
  sVar99 = ((sVar84 - sVar100) - sVar105) + _UNK_001025b4;
  sVar103 = ((sVar100 + sVar84) - sVar142) + _UNK_001025b6;
  sVar120 = sVar120 + _UNK_001025b8;
  sVar138 = sVar138 + _UNK_001025ba;
  sVar97 = sVar97 + _UNK_001025be;
  auVar123 = pmulhw(auVar107,__LC24);
  auVar125 = pmulhw(auVar114,__LC25);
  sVar119 = sVar85 - sVar112;
  sVar98 = sVar96 - sVar139;
  sVar100 = sVar99 - sVar144;
  sVar142 = sVar103 - sVar95;
  sVar85 = sVar85 + sVar112;
  sVar96 = sVar96 + sVar139;
  sVar99 = sVar99 + sVar144;
  sVar103 = sVar103 + sVar95;
  sVar112 = (auVar123._0_2_ + (sVar120 - sVar121)) - auVar125._0_2_;
  sVar95 = (auVar123._2_2_ + (sVar138 - sVar140)) - auVar125._2_2_;
  sVar139 = (auVar123._4_2_ + ((sVar143 + _UNK_001025bc) - sVar104)) - auVar125._4_2_;
  sVar144 = (auVar123._6_2_ + (sVar97 - sVar102)) - auVar125._6_2_;
  uVar3 = (undefined4)param_1[0xc];
  sVar84 = auVar123._8_2_ + auVar125._8_2_ + sVar120 + sVar121;
  sVar79 = auVar123._10_2_ + auVar125._10_2_ + sVar138 + sVar140;
  sVar120 = auVar123._12_2_ + auVar125._12_2_ + sVar143 + _UNK_001025bc + sVar104;
  sVar83 = auVar123._14_2_ + auVar125._14_2_ + sVar97 + sVar102;
  uVar87 = CONCAT22(sVar96 - sVar79,sVar85 - sVar84);
  auVar88._0_8_ = CONCAT26(sVar103 - sVar83,CONCAT24(sVar99 - sVar120,uVar87));
  auVar88._8_2_ = sVar119 - sVar112;
  auVar88._10_2_ = sVar98 - sVar95;
  auVar93._12_2_ = sVar100 - sVar139;
  auVar93._0_12_ = auVar88;
  auVar93._14_2_ = sVar142 - sVar144;
  auVar126._0_2_ = sVar84 + sVar85;
  auVar126._2_2_ = sVar79 + sVar96;
  auVar126._4_2_ = sVar120 + sVar99;
  auVar126._6_2_ = sVar83 + sVar103;
  auVar126._8_2_ = sVar112 + sVar119;
  auVar126._10_2_ = sVar95 + sVar98;
  auVar126._12_2_ = sVar139 + sVar100;
  auVar126._14_2_ = sVar144 + sVar142;
  uVar4 = (undefined4)param_1[4];
  auVar123 = psraw(auVar126,3);
  auVar94._4_4_ = auVar93._12_4_;
  auVar94._0_4_ = auVar88._8_4_;
  auVar94._8_4_ = uVar87;
  auVar94._12_4_ = (int)((ulong)auVar88._0_8_ >> 0x20);
  auVar125 = psraw(auVar94,3);
  uVar87 = (undefined4)*param_1;
  uVar80 = CONCAT44(uVar4,uVar87);
  uVar5 = (undefined4)param_1[8];
  uVar113 = CONCAT44(uVar3,uVar5);
  auVar14._8_6_ = 0;
  auVar14._0_8_ = uVar80;
  auVar14[0xe] = (char)((uint)uVar4 >> 0x18);
  auVar20._8_4_ = 0;
  auVar20._0_8_ = uVar80;
  auVar20[0xc] = (char)((uint)uVar4 >> 0x10);
  auVar20._13_2_ = auVar14._13_2_;
  auVar26._8_4_ = 0;
  auVar26._0_8_ = uVar80;
  auVar26._12_3_ = auVar20._12_3_;
  auVar32._8_2_ = 0;
  auVar32._0_8_ = uVar80;
  auVar32[10] = (char)((uint)uVar4 >> 8);
  auVar32._11_4_ = auVar26._11_4_;
  auVar38._8_2_ = 0;
  auVar38._0_8_ = uVar80;
  auVar38._10_5_ = auVar32._10_5_;
  auVar41[8] = (char)uVar4;
  auVar41._0_8_ = uVar80;
  auVar41._9_6_ = auVar38._9_6_;
  auVar63._7_8_ = 0;
  auVar63._0_7_ = auVar41._8_7_;
  Var50 = CONCAT81(SUB158(auVar63 << 0x40,7),(char)((uint)uVar87 >> 0x18));
  auVar76._9_6_ = 0;
  auVar76._0_9_ = Var50;
  auVar43[4] = (char)((uint)uVar87 >> 0x10);
  auVar43._0_4_ = uVar87;
  auVar43._5_10_ = SUB1510(auVar76 << 0x30,5);
  auVar64._11_4_ = 0;
  auVar64._0_11_ = auVar43._4_11_;
  auVar65._1_12_ = SUB1512(auVar64 << 0x20,3);
  auVar65[0] = (char)((uint)uVar87 >> 8);
  auVar9._8_6_ = 0;
  auVar9._0_8_ = uVar113;
  auVar9[0xe] = (char)((uint)uVar3 >> 0x18);
  auVar15._8_4_ = 0;
  auVar15._0_8_ = uVar113;
  auVar15[0xc] = (char)((uint)uVar3 >> 0x10);
  auVar15._13_2_ = auVar9._13_2_;
  auVar21._8_4_ = 0;
  auVar21._0_8_ = uVar113;
  auVar21._12_3_ = auVar15._12_3_;
  auVar27._8_2_ = 0;
  auVar27._0_8_ = uVar113;
  auVar27[10] = (char)((uint)uVar3 >> 8);
  auVar27._11_4_ = auVar21._11_4_;
  auVar33._8_2_ = 0;
  auVar33._0_8_ = uVar113;
  auVar33._10_5_ = auVar27._10_5_;
  auVar39[8] = (char)uVar3;
  auVar39._0_8_ = uVar113;
  auVar39._9_6_ = auVar33._9_6_;
  auVar66._7_8_ = 0;
  auVar66._0_7_ = auVar39._8_7_;
  Var54 = CONCAT81(SUB158(auVar66 << 0x40,7),(char)((uint)uVar5 >> 0x18));
  auVar77._9_6_ = 0;
  auVar77._0_9_ = Var54;
  auVar42[4] = (char)((uint)uVar5 >> 0x10);
  auVar42._0_4_ = uVar5;
  auVar42._5_10_ = SUB1510(auVar77 << 0x30,5);
  auVar67._11_4_ = 0;
  auVar67._0_11_ = auVar42._4_11_;
  auVar46[2] = (char)((uint)uVar5 >> 8);
  auVar46._0_2_ = (ushort)uVar5;
  auVar46._3_12_ = SUB1512(auVar67 << 0x20,3);
  sVar84 = (ushort)(byte)uVar87 + auVar123._0_2_;
  sVar79 = auVar65._0_2_ + auVar123._8_2_;
  sVar120 = auVar43._4_2_ + auVar125._0_2_;
  sVar83 = (short)Var50 + auVar125._8_2_;
  sVar85 = auVar41._8_2_ + auVar123._2_2_;
  sVar112 = auVar32._10_2_ + auVar123._10_2_;
  sVar121 = auVar20._12_2_ + auVar125._2_2_;
  sVar119 = (auVar14._13_2_ >> 8) + auVar125._10_2_;
  sVar97 = auVar123._4_2_ + ((ushort)uVar5 & 0xff);
  sVar96 = auVar123._12_2_ + auVar46._2_2_;
  sVar98 = auVar125._4_2_ + auVar42._4_2_;
  sVar95 = auVar125._12_2_ + (short)Var54;
  sVar99 = auVar123._6_2_ + auVar39._8_2_;
  sVar100 = auVar123._14_2_ + auVar27._10_2_;
  sVar103 = auVar125._6_2_ + auVar15._12_2_;
  sVar102 = auVar125._14_2_ + (auVar9._13_2_ >> 8);
  *param_3 = (0 < sVar84) * (sVar84 < 0x100) * (char)sVar84 - (0xff < sVar84);
  param_3[1] = (0 < sVar79) * (sVar79 < 0x100) * (char)sVar79 - (0xff < sVar79);
  param_3[2] = (0 < sVar120) * (sVar120 < 0x100) * (char)sVar120 - (0xff < sVar120);
  param_3[3] = (0 < sVar83) * (sVar83 < 0x100) * (char)sVar83 - (0xff < sVar83);
  param_3[0x24] = (0 < sVar85) * (sVar85 < 0x100) * (char)sVar85 - (0xff < sVar85);
  param_3[0x25] = (0 < sVar112) * (sVar112 < 0x100) * (char)sVar112 - (0xff < sVar112);
  param_3[0x26] = (0 < sVar121) * (sVar121 < 0x100) * (char)sVar121 - (0xff < sVar121);
  param_3[0x27] = (0 < sVar119) * (sVar119 < 0x100) * (char)sVar119 - (0xff < sVar119);
  param_3[0x48] = (0 < sVar97) * (sVar97 < 0x100) * (char)sVar97 - (0xff < sVar97);
  param_3[0x49] = (0 < sVar96) * (sVar96 < 0x100) * (char)sVar96 - (0xff < sVar96);
  param_3[0x4a] = (0 < sVar98) * (sVar98 < 0x100) * (char)sVar98 - (0xff < sVar98);
  param_3[0x4b] = (0 < sVar95) * (sVar95 < 0x100) * (char)sVar95 - (0xff < sVar95);
  param_3[0x6c] = (0 < sVar99) * (sVar99 < 0x100) * (char)sVar99 - (0xff < sVar99);
  param_3[0x6d] = (0 < sVar100) * (sVar100 < 0x100) * (char)sVar100 - (0xff < sVar100);
  param_3[0x6e] = (0 < sVar103) * (sVar103 < 0x100) * (char)sVar103 - (0xff < sVar103);
  param_3[0x6f] = (0 < sVar102) * (sVar102 < 0x100) * (char)sVar102 - (0xff < sVar102);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool QuantizeBlock_SSE2(ushort *param_1,undefined1 (*param_2) [16],short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  unkbyte10 Var27;
  int iVar28;
  int iVar29;
  short sVar30;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  short sVar40;
  int iVar41;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  short sVar49;
  short sVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar56;
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar42 [12];
  undefined1 auVar44 [16];
  undefined1 auVar57 [12];
  undefined1 auVar59 [16];
  
  uVar1 = (ushort)((short)*param_1 < 0);
  uVar3 = (ushort)((short)param_1[1] < 0);
  uVar5 = (ushort)((short)param_1[2] < 0);
  uVar7 = (ushort)((short)param_1[3] < 0);
  uVar9 = (ushort)((short)param_1[4] < 0);
  uVar11 = (ushort)((short)param_1[5] < 0);
  uVar13 = (ushort)((short)param_1[6] < 0);
  uVar15 = (ushort)((short)param_1[7] < 0);
  uVar2 = (ushort)((short)param_1[8] < 0);
  uVar4 = (ushort)((short)param_1[9] < 0);
  uVar6 = (ushort)((short)param_1[10] < 0);
  uVar8 = (ushort)((short)param_1[0xb] < 0);
  uVar10 = (ushort)((short)param_1[0xc] < 0);
  uVar12 = (ushort)((short)param_1[0xd] < 0);
  uVar14 = (ushort)((short)param_1[0xe] < 0);
  uVar16 = (ushort)((short)param_1[0xf] < 0);
  auVar43._0_2_ = param_3[0x60] + uVar1 + (*param_1 ^ -uVar1);
  auVar43._2_2_ = param_3[0x61] + uVar3 + (param_1[1] ^ -uVar3);
  auVar43._4_2_ = param_3[0x62] + uVar5 + (param_1[2] ^ -uVar5);
  auVar43._6_2_ = param_3[99] + uVar7 + (param_1[3] ^ -uVar7);
  auVar43._8_2_ = param_3[100] + uVar9 + (param_1[4] ^ -uVar9);
  auVar43._10_2_ = param_3[0x65] + uVar11 + (param_1[5] ^ -uVar11);
  auVar43._12_2_ = param_3[0x66] + uVar13 + (param_1[6] ^ -uVar13);
  auVar43._14_2_ = param_3[0x67] + uVar15 + (param_1[7] ^ -uVar15);
  auVar46._0_2_ = param_3[0x68] + uVar2 + (param_1[8] ^ -uVar2);
  auVar46._2_2_ = param_3[0x69] + uVar4 + (param_1[9] ^ -uVar4);
  auVar46._4_2_ = param_3[0x6a] + uVar6 + (param_1[10] ^ -uVar6);
  auVar46._6_2_ = param_3[0x6b] + uVar8 + (param_1[0xb] ^ -uVar8);
  auVar46._8_2_ = param_3[0x6c] + uVar10 + (param_1[0xc] ^ -uVar10);
  auVar46._10_2_ = param_3[0x6d] + uVar12 + (param_1[0xd] ^ -uVar12);
  auVar46._12_2_ = param_3[0x6e] + uVar14 + (param_1[0xe] ^ -uVar14);
  auVar46._14_2_ = param_3[0x6f] + uVar16 + (param_1[0xf] ^ -uVar16);
  auVar61 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x18),auVar46);
  auVar58 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x10),auVar43);
  iVar41 = CONCAT22(auVar58._8_2_,auVar43._8_2_ * param_3[0x14]);
  auVar42._0_8_ = CONCAT26(auVar58._10_2_,CONCAT24(auVar43._10_2_ * param_3[0x15],iVar41));
  auVar42._8_2_ = auVar43._12_2_ * param_3[0x16];
  auVar42._10_2_ = auVar58._12_2_;
  auVar44._12_2_ = auVar43._14_2_ * param_3[0x17];
  auVar44._0_12_ = auVar42;
  auVar44._14_2_ = auVar58._14_2_;
  iVar28 = CONCAT22(auVar58._6_2_,auVar43._6_2_ * param_3[0x13]);
  Var26 = CONCAT64(CONCAT42(iVar28,auVar58._4_2_),
                   CONCAT22(auVar43._4_2_ * param_3[0x12],auVar43._6_2_ * param_3[0x13]));
  auVar24._4_8_ = (long)((unkuint10)Var26 >> 0x10);
  auVar24._2_2_ = auVar58._2_2_;
  auVar24._0_2_ = auVar43._2_2_ * param_3[0x11];
  iVar29 = CONCAT22(auVar61._6_2_,auVar46._6_2_ * param_3[0x1b]);
  Var27 = CONCAT64(CONCAT42(iVar29,auVar61._4_2_),
                   CONCAT22(auVar46._4_2_ * param_3[0x1a],auVar46._6_2_ * param_3[0x1b]));
  auVar25._4_8_ = (long)((unkuint10)Var27 >> 0x10);
  auVar25._2_2_ = auVar61._2_2_;
  auVar25._0_2_ = auVar46._2_2_ * param_3[0x19];
  iVar56 = CONCAT22(auVar61._8_2_,auVar46._8_2_ * param_3[0x1c]);
  auVar57._0_8_ = CONCAT26(auVar61._10_2_,CONCAT24(auVar46._10_2_ * param_3[0x1d],iVar56));
  auVar57._8_2_ = auVar46._12_2_ * param_3[0x1e];
  auVar57._10_2_ = auVar61._12_2_;
  auVar59._12_2_ = auVar46._14_2_ * param_3[0x1f];
  auVar59._0_12_ = auVar57;
  auVar59._14_2_ = auVar61._14_2_;
  auVar58._0_4_ =
       *(int *)(param_3 + 0x20) + CONCAT22(auVar58._0_2_,auVar43._0_2_ * param_3[0x10]) >> 0x11;
  auVar58._4_4_ = *(int *)(param_3 + 0x22) + auVar24._0_4_ >> 0x11;
  auVar58._8_4_ = *(int *)(param_3 + 0x24) + (int)((unkuint10)Var26 >> 0x10) >> 0x11;
  auVar58._12_4_ = *(int *)(param_3 + 0x26) + iVar28 >> 0x11;
  auVar62._0_4_ = *(int *)(param_3 + 0x28) + iVar41 >> 0x11;
  auVar62._4_4_ = *(int *)(param_3 + 0x2a) + (int)((ulong)auVar42._0_8_ >> 0x20) >> 0x11;
  auVar62._8_4_ = *(int *)(param_3 + 0x2c) + auVar42._8_4_ >> 0x11;
  auVar62._12_4_ = *(int *)(param_3 + 0x2e) + auVar44._12_4_ >> 0x11;
  auVar60._0_4_ = iVar56 + *(int *)(param_3 + 0x38) >> 0x11;
  auVar60._4_4_ = (int)((ulong)auVar57._0_8_ >> 0x20) + *(int *)(param_3 + 0x3a) >> 0x11;
  auVar60._8_4_ = auVar57._8_4_ + *(int *)(param_3 + 0x3c) >> 0x11;
  auVar60._12_4_ = auVar59._12_4_ + *(int *)(param_3 + 0x3e) >> 0x11;
  auVar58 = packssdw(auVar58,auVar62);
  auVar45._0_4_ =
       *(int *)(param_3 + 0x30) + CONCAT22(auVar61._0_2_,auVar46._0_2_ * param_3[0x18]) >> 0x11;
  auVar45._4_4_ = *(int *)(param_3 + 0x32) + auVar25._0_4_ >> 0x11;
  auVar45._8_4_ = *(int *)(param_3 + 0x34) + (int)((unkuint10)Var27 >> 0x10) >> 0x11;
  auVar45._12_4_ = *(int *)(param_3 + 0x36) + iVar29 >> 0x11;
  auVar46 = packssdw(auVar45,auVar60);
  sVar40 = auVar46._0_2_;
  sVar49 = auVar46._2_2_;
  sVar50 = auVar46._4_2_;
  sVar51 = auVar46._6_2_;
  sVar52 = auVar46._8_2_;
  sVar53 = auVar46._10_2_;
  sVar54 = auVar46._12_2_;
  sVar55 = auVar46._14_2_;
  sVar30 = auVar58._0_2_;
  sVar33 = auVar58._2_2_;
  sVar34 = auVar58._4_2_;
  sVar35 = auVar58._6_2_;
  sVar36 = auVar58._8_2_;
  sVar37 = auVar58._10_2_;
  sVar38 = auVar58._12_2_;
  sVar39 = auVar58._14_2_;
  sVar17 = param_3[9];
  sVar18 = param_3[10];
  sVar19 = param_3[0xb];
  sVar20 = param_3[0xc];
  sVar21 = param_3[0xd];
  sVar22 = param_3[0xe];
  sVar23 = param_3[0xf];
  auVar47._0_2_ =
       (((ushort)(__LC20 < sVar40) * __LC20 | (ushort)(__LC20 >= sVar40) * sVar40) ^ -uVar2) + uVar2
  ;
  auVar47._2_2_ =
       (((ushort)(_UNK_00102552 < sVar49) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar49) * sVar49) ^ -uVar4) + uVar4;
  auVar47._4_2_ =
       (((ushort)(_UNK_00102554 < sVar50) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar50) * sVar50) ^ -uVar6) + uVar6;
  auVar47._6_2_ =
       (((ushort)(_UNK_00102556 < sVar51) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar51) * sVar51) ^ -uVar8) + uVar8;
  auVar47._8_2_ =
       (((ushort)(_UNK_00102558 < sVar52) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar52) * sVar52) ^ -uVar10) + uVar10;
  auVar47._10_2_ =
       (((ushort)(_UNK_0010255a < sVar53) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar53) * sVar53) ^ -uVar12) + uVar12;
  auVar47._12_2_ =
       (((ushort)(_UNK_0010255c < sVar54) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar54) * sVar54) ^ -uVar14) + uVar14;
  auVar47._14_2_ =
       (((ushort)(_UNK_0010255e < sVar55) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar55) * sVar55) ^ -uVar16) + uVar16;
  sVar40 = *param_3;
  sVar49 = param_3[1];
  sVar50 = param_3[2];
  sVar51 = param_3[3];
  sVar52 = param_3[4];
  sVar53 = param_3[5];
  sVar54 = param_3[6];
  sVar55 = param_3[7];
  auVar61._0_2_ =
       (((ushort)(__LC20 < sVar30) * __LC20 | (ushort)(__LC20 >= sVar30) * sVar30) ^ -uVar1) + uVar1
  ;
  auVar61._2_2_ =
       (((ushort)(_UNK_00102552 < sVar33) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar33) * sVar33) ^ -uVar3) + uVar3;
  auVar61._4_2_ =
       (((ushort)(_UNK_00102554 < sVar34) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar34) * sVar34) ^ -uVar5) + uVar5;
  auVar61._6_2_ =
       (((ushort)(_UNK_00102556 < sVar35) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar35) * sVar35) ^ -uVar7) + uVar7;
  auVar61._8_2_ =
       (((ushort)(_UNK_00102558 < sVar36) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar36) * sVar36) ^ -uVar9) + uVar9;
  auVar61._10_2_ =
       (((ushort)(_UNK_0010255a < sVar37) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar37) * sVar37) ^ -uVar11) + uVar11;
  auVar61._12_2_ =
       (((ushort)(_UNK_0010255c < sVar38) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar38) * sVar38) ^ -uVar13) + uVar13;
  auVar61._14_2_ =
       (((ushort)(_UNK_0010255e < sVar39) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar39) * sVar39) ^ -uVar15) + uVar15;
  auVar58 = pshuflw(auVar47,auVar47,0xc9);
  auVar46 = pshufhw(auVar61,auVar61,0x9c);
  auVar48._0_4_ = auVar58._0_4_;
  auVar48._12_4_ = auVar58._12_4_;
  auVar48._4_4_ = auVar58._8_4_;
  auVar48._8_4_ = auVar58._4_4_;
  auVar31._0_4_ = auVar46._0_4_;
  auVar31._12_4_ = auVar46._12_4_;
  auVar31._4_4_ = auVar46._8_4_;
  auVar31._8_4_ = auVar46._4_4_;
  auVar58 = pshuflw(auVar48,auVar48,0x78);
  auVar46 = pshufhw(auVar31,auVar31,0xd2);
  param_1[8] = param_3[8] * auVar47._0_2_;
  param_1[9] = sVar17 * auVar47._2_2_;
  param_1[10] = sVar18 * auVar47._4_2_;
  param_1[0xb] = sVar19 * auVar47._6_2_;
  param_1[0xc] = sVar20 * auVar47._8_2_;
  param_1[0xd] = sVar21 * auVar47._10_2_;
  param_1[0xe] = sVar22 * auVar47._12_2_;
  param_1[0xf] = sVar23 * auVar47._14_2_;
  *param_1 = sVar40 * auVar61._0_2_;
  param_1[1] = sVar49 * auVar61._2_2_;
  param_1[2] = sVar50 * auVar61._4_2_;
  param_1[3] = sVar51 * auVar61._6_2_;
  param_1[4] = sVar52 * auVar61._8_2_;
  param_1[5] = sVar53 * auVar61._10_2_;
  param_1[6] = sVar54 * auVar61._12_2_;
  param_1[7] = sVar55 * auVar61._14_2_;
  auVar61 = packsswb(auVar46,auVar58);
  *param_2 = auVar46;
  *(short *)(*param_2 + 6) = auVar58._8_2_;
  auVar32[0] = -(auVar61[0] == '\0');
  auVar32[1] = -(auVar61[1] == '\0');
  auVar32[2] = -(auVar61[2] == '\0');
  auVar32[3] = -(auVar61[3] == '\0');
  auVar32[4] = -(auVar61[4] == '\0');
  auVar32[5] = -(auVar61[5] == '\0');
  auVar32[6] = -(auVar61[6] == '\0');
  auVar32[7] = -(auVar61[7] == '\0');
  auVar32[8] = -(auVar61[8] == '\0');
  auVar32[9] = -(auVar61[9] == '\0');
  auVar32[10] = -(auVar61[10] == '\0');
  auVar32[0xb] = -(auVar61[0xb] == '\0');
  auVar32[0xc] = -(auVar61[0xc] == '\0');
  auVar32[0xd] = -(auVar61[0xd] == '\0');
  auVar32[0xe] = -(auVar61[0xe] == '\0');
  auVar32[0xf] = -(auVar61[0xf] == '\0');
  param_2[1] = auVar58;
  *(short *)(param_2[1] + 8) = auVar46._6_2_;
  return (ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar32[0xf] >> 7) << 0xf) != 0xffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte Quantize2Blocks_SSE2(ushort *param_1,undefined1 (*param_2) [16],short *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  unkbyte10 Var21;
  unkbyte10 Var22;
  int iVar23;
  int iVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar40;
  short sVar42;
  short sVar44;
  short sVar46;
  short sVar48;
  short sVar50;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  short sVar41;
  short sVar43;
  short sVar45;
  short sVar47;
  short sVar49;
  short sVar51;
  short sVar52;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  short sVar53;
  int iVar54;
  undefined1 auVar56 [12];
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar73;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  short sVar68;
  short sVar72;
  short sVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar75;
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [12];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar55 [12];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined1 auVar76 [12];
  undefined1 auVar78 [16];
  undefined1 auVar85 [16];
  
  sVar32 = _UNK_0010255e;
  sVar31 = _UNK_0010255c;
  sVar30 = _UNK_0010255a;
  sVar29 = _UNK_00102558;
  sVar28 = _UNK_00102556;
  sVar27 = _UNK_00102554;
  sVar26 = _UNK_00102552;
  sVar25 = __LC20;
  uVar1 = (ushort)((short)*param_1 < 0);
  uVar3 = (ushort)((short)param_1[1] < 0);
  uVar5 = (ushort)((short)param_1[2] < 0);
  uVar7 = (ushort)((short)param_1[3] < 0);
  uVar9 = (ushort)((short)param_1[4] < 0);
  uVar11 = (ushort)((short)param_1[5] < 0);
  uVar13 = (ushort)((short)param_1[6] < 0);
  uVar15 = (ushort)((short)param_1[7] < 0);
  uVar2 = (ushort)((short)param_1[8] < 0);
  uVar4 = (ushort)((short)param_1[9] < 0);
  uVar6 = (ushort)((short)param_1[10] < 0);
  uVar8 = (ushort)((short)param_1[0xb] < 0);
  uVar10 = (ushort)((short)param_1[0xc] < 0);
  uVar12 = (ushort)((short)param_1[0xd] < 0);
  uVar14 = (ushort)((short)param_1[0xe] < 0);
  uVar16 = (ushort)((short)param_1[0xf] < 0);
  auVar57._0_2_ = param_3[0x60] + uVar1 + (*param_1 ^ -uVar1);
  auVar57._2_2_ = param_3[0x61] + uVar3 + (param_1[1] ^ -uVar3);
  auVar57._4_2_ = param_3[0x62] + uVar5 + (param_1[2] ^ -uVar5);
  auVar57._6_2_ = param_3[99] + uVar7 + (param_1[3] ^ -uVar7);
  auVar57._8_2_ = param_3[100] + uVar9 + (param_1[4] ^ -uVar9);
  auVar57._10_2_ = param_3[0x65] + uVar11 + (param_1[5] ^ -uVar11);
  auVar57._12_2_ = param_3[0x66] + uVar13 + (param_1[6] ^ -uVar13);
  auVar57._14_2_ = param_3[0x67] + uVar15 + (param_1[7] ^ -uVar15);
  auVar60._0_2_ = param_3[0x68] + uVar2 + (param_1[8] ^ -uVar2);
  auVar60._2_2_ = param_3[0x69] + uVar4 + (param_1[9] ^ -uVar4);
  auVar60._4_2_ = param_3[0x6a] + uVar6 + (param_1[10] ^ -uVar6);
  auVar60._6_2_ = param_3[0x6b] + uVar8 + (param_1[0xb] ^ -uVar8);
  auVar60._8_2_ = param_3[0x6c] + uVar10 + (param_1[0xc] ^ -uVar10);
  auVar60._10_2_ = param_3[0x6d] + uVar12 + (param_1[0xd] ^ -uVar12);
  auVar60._12_2_ = param_3[0x6e] + uVar14 + (param_1[0xe] ^ -uVar14);
  auVar60._14_2_ = param_3[0x6f] + uVar16 + (param_1[0xf] ^ -uVar16);
  auVar83 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x18),auVar60);
  auVar77 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x10),auVar57);
  iVar54 = CONCAT22(auVar77._8_2_,auVar57._8_2_ * param_3[0x14]);
  auVar55._0_8_ = CONCAT26(auVar77._10_2_,CONCAT24(auVar57._10_2_ * param_3[0x15],iVar54));
  auVar55._8_2_ = auVar57._12_2_ * param_3[0x16];
  auVar55._10_2_ = auVar77._12_2_;
  auVar58._12_2_ = auVar57._14_2_ * param_3[0x17];
  auVar58._0_12_ = auVar55;
  auVar58._14_2_ = auVar77._14_2_;
  iVar23 = CONCAT22(auVar77._6_2_,auVar57._6_2_ * param_3[0x13]);
  Var21 = CONCAT64(CONCAT42(iVar23,auVar77._4_2_),
                   CONCAT22(auVar57._4_2_ * param_3[0x12],auVar57._6_2_ * param_3[0x13]));
  auVar17._4_8_ = (long)((unkuint10)Var21 >> 0x10);
  auVar17._2_2_ = auVar77._2_2_;
  auVar17._0_2_ = auVar57._2_2_ * param_3[0x11];
  iVar24 = CONCAT22(auVar83._6_2_,auVar60._6_2_ * param_3[0x1b]);
  Var22 = CONCAT64(CONCAT42(iVar24,auVar83._4_2_),
                   CONCAT22(auVar60._4_2_ * param_3[0x1a],auVar60._6_2_ * param_3[0x1b]));
  auVar18._4_8_ = (long)((unkuint10)Var22 >> 0x10);
  auVar18._2_2_ = auVar83._2_2_;
  auVar18._0_2_ = auVar60._2_2_ * param_3[0x19];
  iVar75 = CONCAT22(auVar83._8_2_,auVar60._8_2_ * param_3[0x1c]);
  auVar76._0_8_ = CONCAT26(auVar83._10_2_,CONCAT24(auVar60._10_2_ * param_3[0x1d],iVar75));
  auVar76._8_2_ = auVar60._12_2_ * param_3[0x1e];
  auVar76._10_2_ = auVar83._12_2_;
  auVar78._12_2_ = auVar60._14_2_ * param_3[0x1f];
  auVar78._0_12_ = auVar76;
  auVar78._14_2_ = auVar83._14_2_;
  auVar77._0_4_ =
       *(int *)(param_3 + 0x20) + CONCAT22(auVar77._0_2_,auVar57._0_2_ * param_3[0x10]) >> 0x11;
  auVar77._4_4_ = *(int *)(param_3 + 0x22) + auVar17._0_4_ >> 0x11;
  auVar77._8_4_ = *(int *)(param_3 + 0x24) + (int)((unkuint10)Var21 >> 0x10) >> 0x11;
  auVar77._12_4_ = *(int *)(param_3 + 0x26) + iVar23 >> 0x11;
  auVar84._0_4_ = *(int *)(param_3 + 0x28) + iVar54 >> 0x11;
  auVar84._4_4_ = *(int *)(param_3 + 0x2a) + (int)((ulong)auVar55._0_8_ >> 0x20) >> 0x11;
  auVar84._8_4_ = *(int *)(param_3 + 0x2c) + auVar55._8_4_ >> 0x11;
  auVar84._12_4_ = *(int *)(param_3 + 0x2e) + auVar58._12_4_ >> 0x11;
  auVar77 = packssdw(auVar77,auVar84);
  auVar59._0_4_ =
       *(int *)(param_3 + 0x30) + CONCAT22(auVar83._0_2_,auVar60._0_2_ * param_3[0x18]) >> 0x11;
  auVar59._4_4_ = *(int *)(param_3 + 0x32) + auVar18._0_4_ >> 0x11;
  auVar59._8_4_ = *(int *)(param_3 + 0x34) + (int)((unkuint10)Var22 >> 0x10) >> 0x11;
  auVar59._12_4_ = *(int *)(param_3 + 0x36) + iVar24 >> 0x11;
  auVar79._0_4_ = iVar75 + *(int *)(param_3 + 0x38) >> 0x11;
  auVar79._4_4_ = (int)((ulong)auVar76._0_8_ >> 0x20) + *(int *)(param_3 + 0x3a) >> 0x11;
  auVar79._8_4_ = auVar76._8_4_ + *(int *)(param_3 + 0x3c) >> 0x11;
  auVar79._12_4_ = auVar78._12_4_ + *(int *)(param_3 + 0x3e) >> 0x11;
  auVar60 = packssdw(auVar59,auVar79);
  sVar33 = auVar77._0_2_;
  sVar40 = auVar77._2_2_;
  sVar42 = auVar77._4_2_;
  sVar44 = auVar77._6_2_;
  sVar46 = auVar77._8_2_;
  sVar48 = auVar77._10_2_;
  sVar50 = auVar77._12_2_;
  sVar34 = auVar77._14_2_;
  sVar41 = auVar60._0_2_;
  sVar43 = auVar60._2_2_;
  sVar45 = auVar60._4_2_;
  sVar47 = auVar60._6_2_;
  sVar49 = auVar60._8_2_;
  sVar51 = auVar60._10_2_;
  sVar52 = auVar60._12_2_;
  sVar53 = auVar60._14_2_;
  auVar83._0_2_ =
       (((ushort)(__LC20 < sVar33) * __LC20 | (ushort)(__LC20 >= sVar33) * sVar33) ^ -uVar1) + uVar1
  ;
  auVar83._2_2_ =
       (((ushort)(_UNK_00102552 < sVar40) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar40) * sVar40) ^ -uVar3) + uVar3;
  auVar83._4_2_ =
       (((ushort)(_UNK_00102554 < sVar42) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar42) * sVar42) ^ -uVar5) + uVar5;
  auVar83._6_2_ =
       (((ushort)(_UNK_00102556 < sVar44) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar44) * sVar44) ^ -uVar7) + uVar7;
  auVar83._8_2_ =
       (((ushort)(_UNK_00102558 < sVar46) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar46) * sVar46) ^ -uVar9) + uVar9;
  auVar83._10_2_ =
       (((ushort)(_UNK_0010255a < sVar48) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar48) * sVar48) ^ -uVar11) + uVar11;
  auVar83._12_2_ =
       (((ushort)(_UNK_0010255c < sVar50) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar50) * sVar50) ^ -uVar13) + uVar13;
  auVar83._14_2_ =
       (((ushort)(_UNK_0010255e < sVar34) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar34) * sVar34) ^ -uVar15) + uVar15;
  sVar33 = param_3[1];
  sVar40 = param_3[2];
  sVar42 = param_3[3];
  sVar44 = param_3[4];
  sVar46 = param_3[5];
  sVar48 = param_3[6];
  sVar50 = param_3[7];
  auVar61._0_2_ =
       (((ushort)(__LC20 < sVar41) * __LC20 | (ushort)(__LC20 >= sVar41) * sVar41) ^ -uVar2) + uVar2
  ;
  auVar61._2_2_ =
       (((ushort)(_UNK_00102552 < sVar43) * _UNK_00102552 |
        (ushort)(_UNK_00102552 >= sVar43) * sVar43) ^ -uVar4) + uVar4;
  auVar61._4_2_ =
       (((ushort)(_UNK_00102554 < sVar45) * _UNK_00102554 |
        (ushort)(_UNK_00102554 >= sVar45) * sVar45) ^ -uVar6) + uVar6;
  auVar61._6_2_ =
       (((ushort)(_UNK_00102556 < sVar47) * _UNK_00102556 |
        (ushort)(_UNK_00102556 >= sVar47) * sVar47) ^ -uVar8) + uVar8;
  auVar61._8_2_ =
       (((ushort)(_UNK_00102558 < sVar49) * _UNK_00102558 |
        (ushort)(_UNK_00102558 >= sVar49) * sVar49) ^ -uVar10) + uVar10;
  auVar61._10_2_ =
       (((ushort)(_UNK_0010255a < sVar51) * _UNK_0010255a |
        (ushort)(_UNK_0010255a >= sVar51) * sVar51) ^ -uVar12) + uVar12;
  auVar61._12_2_ =
       (((ushort)(_UNK_0010255c < sVar52) * _UNK_0010255c |
        (ushort)(_UNK_0010255c >= sVar52) * sVar52) ^ -uVar14) + uVar14;
  auVar61._14_2_ =
       (((ushort)(_UNK_0010255e < sVar53) * _UNK_0010255e |
        (ushort)(_UNK_0010255e >= sVar53) * sVar53) ^ -uVar16) + uVar16;
  sVar34 = param_3[8];
  sVar41 = param_3[9];
  sVar43 = param_3[10];
  sVar45 = param_3[0xb];
  sVar47 = param_3[0xc];
  sVar49 = param_3[0xd];
  sVar51 = param_3[0xe];
  sVar52 = param_3[0xf];
  auVar60 = pshufhw(auVar83,auVar83,0x9c);
  auVar35._0_4_ = auVar60._0_4_;
  auVar35._12_4_ = auVar60._12_4_;
  auVar35._4_4_ = auVar60._8_4_;
  auVar35._8_4_ = auVar60._4_4_;
  auVar77 = pshuflw(auVar61,auVar61,0xc9);
  auVar60 = pshufhw(auVar35,auVar35,0xd2);
  auVar62._0_4_ = auVar77._0_4_;
  auVar62._12_4_ = auVar77._12_4_;
  auVar62._4_4_ = auVar77._8_4_;
  auVar62._8_4_ = auVar77._4_4_;
  auVar77 = pshuflw(auVar62,auVar62,0x78);
  *param_1 = *param_3 * auVar83._0_2_;
  param_1[1] = sVar33 * auVar83._2_2_;
  param_1[2] = sVar40 * auVar83._4_2_;
  param_1[3] = sVar42 * auVar83._6_2_;
  param_1[4] = sVar44 * auVar83._8_2_;
  param_1[5] = sVar46 * auVar83._10_2_;
  param_1[6] = sVar48 * auVar83._12_2_;
  param_1[7] = sVar50 * auVar83._14_2_;
  param_1[8] = sVar34 * auVar61._0_2_;
  param_1[9] = sVar41 * auVar61._2_2_;
  param_1[10] = sVar43 * auVar61._4_2_;
  param_1[0xb] = sVar45 * auVar61._6_2_;
  param_1[0xc] = sVar47 * auVar61._8_2_;
  param_1[0xd] = sVar49 * auVar61._10_2_;
  param_1[0xe] = sVar51 * auVar61._12_2_;
  param_1[0xf] = sVar52 * auVar61._14_2_;
  auVar83 = packsswb(auVar60,auVar77);
  auVar81[0] = -(auVar83[0] == '\0');
  auVar81[1] = -(auVar83[1] == '\0');
  auVar81[2] = -(auVar83[2] == '\0');
  auVar81[3] = -(auVar83[3] == '\0');
  auVar81[4] = -(auVar83[4] == '\0');
  auVar81[5] = -(auVar83[5] == '\0');
  auVar81[6] = -(auVar83[6] == '\0');
  auVar81[7] = -(auVar83[7] == '\0');
  auVar81[8] = -(auVar83[8] == '\0');
  auVar81[9] = -(auVar83[9] == '\0');
  auVar81[10] = -(auVar83[10] == '\0');
  auVar81[0xb] = -(auVar83[0xb] == '\0');
  auVar81[0xc] = -(auVar83[0xc] == '\0');
  auVar81[0xd] = -(auVar83[0xd] == '\0');
  auVar81[0xe] = -(auVar83[0xe] == '\0');
  auVar81[0xf] = -(auVar83[0xf] == '\0');
  *param_2 = auVar60;
  *(short *)(*param_2 + 6) = auVar77._8_2_;
  param_2[1] = auVar77;
  *(short *)(param_2[1] + 8) = auVar60._6_2_;
  uVar1 = (ushort)((short)param_1[0x10] < 0);
  uVar3 = (ushort)((short)param_1[0x11] < 0);
  uVar5 = (ushort)((short)param_1[0x12] < 0);
  uVar7 = (ushort)((short)param_1[0x13] < 0);
  uVar9 = (ushort)((short)param_1[0x14] < 0);
  uVar11 = (ushort)((short)param_1[0x15] < 0);
  uVar13 = (ushort)((short)param_1[0x16] < 0);
  uVar15 = (ushort)((short)param_1[0x17] < 0);
  uVar2 = (ushort)((short)param_1[0x18] < 0);
  uVar4 = (ushort)((short)param_1[0x19] < 0);
  uVar6 = (ushort)((short)param_1[0x1a] < 0);
  uVar8 = (ushort)((short)param_1[0x1b] < 0);
  uVar10 = (ushort)((short)param_1[0x1c] < 0);
  uVar12 = (ushort)((short)param_1[0x1d] < 0);
  uVar14 = (ushort)((short)param_1[0x1e] < 0);
  uVar16 = (ushort)((short)param_1[0x1f] < 0);
  auVar63._0_2_ = param_3[0x60] + uVar1 + (param_1[0x10] ^ -uVar1);
  auVar63._2_2_ = param_3[0x61] + uVar3 + (param_1[0x11] ^ -uVar3);
  auVar63._4_2_ = param_3[0x62] + uVar5 + (param_1[0x12] ^ -uVar5);
  auVar63._6_2_ = param_3[99] + uVar7 + (param_1[0x13] ^ -uVar7);
  auVar63._8_2_ = param_3[100] + uVar9 + (param_1[0x14] ^ -uVar9);
  auVar63._10_2_ = param_3[0x65] + uVar11 + (param_1[0x15] ^ -uVar11);
  auVar63._12_2_ = param_3[0x66] + uVar13 + (param_1[0x16] ^ -uVar13);
  auVar63._14_2_ = param_3[0x67] + uVar15 + (param_1[0x17] ^ -uVar15);
  auVar36._0_2_ = param_3[0x68] + uVar2 + (param_1[0x18] ^ -uVar2);
  auVar36._2_2_ = param_3[0x69] + uVar4 + (param_1[0x19] ^ -uVar4);
  auVar36._4_2_ = param_3[0x6a] + uVar6 + (param_1[0x1a] ^ -uVar6);
  auVar36._6_2_ = param_3[0x6b] + uVar8 + (param_1[0x1b] ^ -uVar8);
  auVar36._8_2_ = param_3[0x6c] + uVar10 + (param_1[0x1c] ^ -uVar10);
  auVar36._10_2_ = param_3[0x6d] + uVar12 + (param_1[0x1d] ^ -uVar12);
  auVar36._12_2_ = param_3[0x6e] + uVar14 + (param_1[0x1e] ^ -uVar14);
  auVar36._14_2_ = param_3[0x6f] + uVar16 + (param_1[0x1f] ^ -uVar16);
  auVar77 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x18),auVar36);
  auVar60 = pmulhuw(*(undefined1 (*) [16])(param_3 + 0x10),auVar63);
  iVar54 = CONCAT22(auVar60._8_2_,auVar63._8_2_ * param_3[0x14]);
  auVar56._0_8_ = CONCAT26(auVar60._10_2_,CONCAT24(auVar63._10_2_ * param_3[0x15],iVar54));
  auVar56._8_2_ = auVar63._12_2_ * param_3[0x16];
  auVar56._10_2_ = auVar60._12_2_;
  auVar64._12_2_ = auVar63._14_2_ * param_3[0x17];
  auVar64._0_12_ = auVar56;
  auVar64._14_2_ = auVar60._14_2_;
  iVar23 = CONCAT22(auVar60._6_2_,auVar63._6_2_ * param_3[0x13]);
  Var21 = CONCAT64(CONCAT42(iVar23,auVar60._4_2_),
                   CONCAT22(auVar63._4_2_ * param_3[0x12],auVar63._6_2_ * param_3[0x13]));
  auVar19._4_8_ = (long)((unkuint10)Var21 >> 0x10);
  auVar19._2_2_ = auVar60._2_2_;
  auVar19._0_2_ = auVar63._2_2_ * param_3[0x11];
  iVar24 = CONCAT22(auVar77._6_2_,auVar36._6_2_ * param_3[0x1b]);
  Var22 = CONCAT64(CONCAT42(iVar24,auVar77._4_2_),
                   CONCAT22(auVar36._4_2_ * param_3[0x1a],auVar36._6_2_ * param_3[0x1b]));
  auVar20._4_8_ = (long)((unkuint10)Var22 >> 0x10);
  auVar20._2_2_ = auVar77._2_2_;
  auVar20._0_2_ = auVar36._2_2_ * param_3[0x19];
  iVar75 = CONCAT22(auVar77._8_2_,auVar36._8_2_ * param_3[0x1c]);
  auVar82._0_8_ = CONCAT26(auVar77._10_2_,CONCAT24(auVar36._10_2_ * param_3[0x1d],iVar75));
  auVar82._8_2_ = auVar36._12_2_ * param_3[0x1e];
  auVar82._10_2_ = auVar77._12_2_;
  auVar85._12_2_ = auVar36._14_2_ * param_3[0x1f];
  auVar85._0_12_ = auVar82;
  auVar85._14_2_ = auVar77._14_2_;
  auVar86._0_4_ = iVar75 + *(int *)(param_3 + 0x38) >> 0x11;
  auVar86._4_4_ = (int)((ulong)auVar82._0_8_ >> 0x20) + *(int *)(param_3 + 0x3a) >> 0x11;
  auVar86._8_4_ = auVar82._8_4_ + *(int *)(param_3 + 0x3c) >> 0x11;
  auVar86._12_4_ = auVar85._12_4_ + *(int *)(param_3 + 0x3e) >> 0x11;
  auVar37._0_4_ =
       *(int *)(param_3 + 0x20) + CONCAT22(auVar60._0_2_,auVar63._0_2_ * param_3[0x10]) >> 0x11;
  auVar37._4_4_ = *(int *)(param_3 + 0x22) + auVar19._0_4_ >> 0x11;
  auVar37._8_4_ = *(int *)(param_3 + 0x24) + (int)((unkuint10)Var21 >> 0x10) >> 0x11;
  auVar37._12_4_ = *(int *)(param_3 + 0x26) + iVar23 >> 0x11;
  auVar87._0_4_ = *(int *)(param_3 + 0x28) + iVar54 >> 0x11;
  auVar87._4_4_ = *(int *)(param_3 + 0x2a) + (int)((ulong)auVar56._0_8_ >> 0x20) >> 0x11;
  auVar87._8_4_ = *(int *)(param_3 + 0x2c) + auVar56._8_4_ >> 0x11;
  auVar87._12_4_ = *(int *)(param_3 + 0x2e) + auVar64._12_4_ >> 0x11;
  auVar60 = packssdw(auVar37,auVar87);
  auVar65._0_4_ =
       *(int *)(param_3 + 0x30) + CONCAT22(auVar77._0_2_,auVar36._0_2_ * param_3[0x18]) >> 0x11;
  auVar65._4_4_ = *(int *)(param_3 + 0x32) + auVar20._0_4_ >> 0x11;
  auVar65._8_4_ = *(int *)(param_3 + 0x34) + (int)((unkuint10)Var22 >> 0x10) >> 0x11;
  auVar65._12_4_ = *(int *)(param_3 + 0x36) + iVar24 >> 0x11;
  sVar34 = auVar60._0_2_;
  sVar41 = auVar60._2_2_;
  sVar43 = auVar60._4_2_;
  sVar45 = auVar60._6_2_;
  sVar47 = auVar60._8_2_;
  sVar49 = auVar60._10_2_;
  sVar51 = auVar60._12_2_;
  sVar52 = auVar60._14_2_;
  auVar60 = packssdw(auVar65,auVar86);
  sVar53 = auVar60._0_2_;
  sVar68 = auVar60._2_2_;
  sVar69 = auVar60._4_2_;
  sVar70 = auVar60._6_2_;
  sVar71 = auVar60._8_2_;
  sVar72 = auVar60._10_2_;
  sVar73 = auVar60._12_2_;
  sVar74 = auVar60._14_2_;
  sVar33 = param_3[9];
  sVar40 = param_3[10];
  sVar42 = param_3[0xb];
  sVar44 = param_3[0xc];
  sVar46 = param_3[0xd];
  sVar48 = param_3[0xe];
  sVar50 = param_3[0xf];
  auVar38._0_2_ =
       (((ushort)(sVar25 < sVar34) * sVar25 | (ushort)(sVar25 >= sVar34) * sVar34) ^ -uVar1) + uVar1
  ;
  auVar38._2_2_ =
       (((ushort)(sVar26 < sVar41) * sVar26 | (ushort)(sVar26 >= sVar41) * sVar41) ^ -uVar3) + uVar3
  ;
  auVar38._4_2_ =
       (((ushort)(sVar27 < sVar43) * sVar27 | (ushort)(sVar27 >= sVar43) * sVar43) ^ -uVar5) + uVar5
  ;
  auVar38._6_2_ =
       (((ushort)(sVar28 < sVar45) * sVar28 | (ushort)(sVar28 >= sVar45) * sVar45) ^ -uVar7) + uVar7
  ;
  auVar38._8_2_ =
       (((ushort)(sVar29 < sVar47) * sVar29 | (ushort)(sVar29 >= sVar47) * sVar47) ^ -uVar9) + uVar9
  ;
  auVar38._10_2_ =
       (((ushort)(sVar30 < sVar49) * sVar30 | (ushort)(sVar30 >= sVar49) * sVar49) ^ -uVar11) +
       uVar11;
  auVar38._12_2_ =
       (((ushort)(sVar31 < sVar51) * sVar31 | (ushort)(sVar31 >= sVar51) * sVar51) ^ -uVar13) +
       uVar13;
  auVar38._14_2_ =
       (((ushort)(sVar32 < sVar52) * sVar32 | (ushort)(sVar32 >= sVar52) * sVar52) ^ -uVar15) +
       uVar15;
  auVar66._0_2_ =
       (((ushort)(sVar25 < sVar53) * sVar25 | (ushort)(sVar25 >= sVar53) * sVar53) ^ -uVar2) + uVar2
  ;
  auVar66._2_2_ =
       (((ushort)(sVar26 < sVar68) * sVar26 | (ushort)(sVar26 >= sVar68) * sVar68) ^ -uVar4) + uVar4
  ;
  auVar66._4_2_ =
       (((ushort)(sVar27 < sVar69) * sVar27 | (ushort)(sVar27 >= sVar69) * sVar69) ^ -uVar6) + uVar6
  ;
  auVar66._6_2_ =
       (((ushort)(sVar28 < sVar70) * sVar28 | (ushort)(sVar28 >= sVar70) * sVar70) ^ -uVar8) + uVar8
  ;
  auVar66._8_2_ =
       (((ushort)(sVar29 < sVar71) * sVar29 | (ushort)(sVar29 >= sVar71) * sVar71) ^ -uVar10) +
       uVar10;
  auVar66._10_2_ =
       (((ushort)(sVar30 < sVar72) * sVar30 | (ushort)(sVar30 >= sVar72) * sVar72) ^ -uVar12) +
       uVar12;
  auVar66._12_2_ =
       (((ushort)(sVar31 < sVar73) * sVar31 | (ushort)(sVar31 >= sVar73) * sVar73) ^ -uVar14) +
       uVar14;
  auVar66._14_2_ =
       (((ushort)(sVar32 < sVar74) * sVar32 | (ushort)(sVar32 >= sVar74) * sVar74) ^ -uVar16) +
       uVar16;
  sVar34 = *param_3;
  sVar41 = param_3[1];
  sVar43 = param_3[2];
  sVar45 = param_3[3];
  sVar47 = param_3[4];
  sVar49 = param_3[5];
  sVar51 = param_3[6];
  sVar52 = param_3[7];
  auVar77 = pshuflw(auVar66,auVar66,0xc9);
  auVar60 = pshufhw(auVar38,auVar38,0x9c);
  auVar67._0_4_ = auVar77._0_4_;
  auVar67._12_4_ = auVar77._12_4_;
  auVar67._4_4_ = auVar77._8_4_;
  auVar67._8_4_ = auVar77._4_4_;
  auVar39._0_4_ = auVar60._0_4_;
  auVar39._12_4_ = auVar60._12_4_;
  auVar39._4_4_ = auVar60._8_4_;
  auVar39._8_4_ = auVar60._4_4_;
  auVar77 = pshuflw(auVar67,auVar67,0x78);
  auVar60 = pshufhw(auVar39,auVar39,0xd2);
  param_1[0x18] = param_3[8] * auVar66._0_2_;
  param_1[0x19] = sVar33 * auVar66._2_2_;
  param_1[0x1a] = sVar40 * auVar66._4_2_;
  param_1[0x1b] = sVar42 * auVar66._6_2_;
  param_1[0x1c] = sVar44 * auVar66._8_2_;
  param_1[0x1d] = sVar46 * auVar66._10_2_;
  param_1[0x1e] = sVar48 * auVar66._12_2_;
  param_1[0x1f] = sVar50 * auVar66._14_2_;
  auVar83 = packsswb(auVar60,auVar77);
  param_1[0x10] = sVar34 * auVar38._0_2_;
  param_1[0x11] = sVar41 * auVar38._2_2_;
  param_1[0x12] = sVar43 * auVar38._4_2_;
  param_1[0x13] = sVar45 * auVar38._6_2_;
  param_1[0x14] = sVar47 * auVar38._8_2_;
  param_1[0x15] = sVar49 * auVar38._10_2_;
  param_1[0x16] = sVar51 * auVar38._12_2_;
  param_1[0x17] = sVar52 * auVar38._14_2_;
  auVar80[0] = -(auVar83[0] == '\0');
  auVar80[1] = -(auVar83[1] == '\0');
  auVar80[2] = -(auVar83[2] == '\0');
  auVar80[3] = -(auVar83[3] == '\0');
  auVar80[4] = -(auVar83[4] == '\0');
  auVar80[5] = -(auVar83[5] == '\0');
  auVar80[6] = -(auVar83[6] == '\0');
  auVar80[7] = -(auVar83[7] == '\0');
  auVar80[8] = -(auVar83[8] == '\0');
  auVar80[9] = -(auVar83[9] == '\0');
  auVar80[10] = -(auVar83[10] == '\0');
  auVar80[0xb] = -(auVar83[0xb] == '\0');
  auVar80[0xc] = -(auVar83[0xc] == '\0');
  auVar80[0xd] = -(auVar83[0xd] == '\0');
  auVar80[0xe] = -(auVar83[0xe] == '\0');
  auVar80[0xf] = -(auVar83[0xf] == '\0');
  param_2[2] = auVar60;
  *(short *)(param_2[2] + 6) = auVar77._8_2_;
  param_2[3] = auVar77;
  *(short *)(param_2[3] + 8) = auVar60._6_2_;
  return ((ushort)((ushort)(SUB161(auVar80 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar80 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar80 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar80 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar80 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar80 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar80 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar80 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar80 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar80 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar80 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar80 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar80 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar80 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar80 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar80[0xf] >> 7) << 0xf) != 0xffff) * '\x02' |
         (ushort)((ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar81[0xf] >> 7) << 0xf) != 0xffff;
}



/* WARNING: Removing unreachable block (ram,0x00102048) */
/* WARNING: Removing unreachable block (ram,0x0010200e) */
/* WARNING: Removing unreachable block (ram,0x00101fda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Intra4Preds_SSE2(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  unkuint9 Var10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  int *piVar14;
  uint uVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 uVar23;
  short sVar24;
  undefined5 uVar26;
  undefined1 uVar34;
  short sVar35;
  short sVar38;
  short sVar39;
  undefined1 auVar28 [16];
  undefined1 uVar33;
  undefined1 uVar36;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined4 uVar25;
  undefined6 uVar27;
  undefined1 uVar37;
  
  uVar15 = 4;
  puVar13 = param_2;
  do {
    uVar12 = *puVar13;
    pbVar16 = (byte *)((long)puVar13 + -5);
    puVar13 = (ulong *)((long)puVar13 + 1);
    uVar15 = uVar15 + (uint)(byte)uVar12 + (uint)*pbVar16;
  } while ((ulong *)((long)param_2 + 4) != puVar13);
  piVar14 = (int *)(param_1 + 0x600);
  do {
    *piVar14 = (uVar15 >> 3 & 0xff) * 0x1010101;
    piVar14 = piVar14 + 8;
  } while ((int *)(param_1 + 0x680) != piVar14);
  uVar25 = (undefined4)*param_2;
  pbVar16 = (byte *)((long)param_2 + -2);
  puVar17 = (undefined4 *)(param_1 + 0x604);
  do {
    bVar2 = *pbVar16;
    pbVar16 = pbVar16 + -1;
    sVar39 = (ushort)bVar2 - (ushort)*(byte *)((long)param_2 + -1);
    sVar24 = sVar39 + ((ushort)uVar25 & 0xff);
    sVar35 = sVar39 + (ushort)(byte)((uint)uVar25 >> 8);
    sVar38 = sVar39 + (ushort)(byte)((uint)uVar25 >> 0x10);
    sVar39 = sVar39 + (ushort)(byte)((uint)uVar25 >> 0x18);
    *puVar17 = CONCAT13((0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39),
                        CONCAT12((0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38),
                                 CONCAT11((0 < sVar35) * (sVar35 < 0x100) * (char)sVar35 -
                                          (0xff < sVar35),
                                          (0 < sVar24) * (sVar24 < 0x100) * (char)sVar24 -
                                          (0xff < sVar24))));
    auVar45 = __LC27;
    puVar17 = puVar17 + 8;
  } while ((byte *)((long)param_2 + -6) != pbVar16);
  uVar12 = *(ulong *)((long)param_2 + -1);
  uVar33 = (undefined1)(uVar12 >> 0x10);
  auVar28[0] = pavgb((char)uVar12,uVar33);
  uVar23 = (undefined1)(uVar12 >> 8);
  uVar34 = (undefined1)(uVar12 >> 0x18);
  auVar28[1] = pavgb(uVar23,uVar34);
  uVar36 = (undefined1)(uVar12 >> 0x20);
  auVar28[2] = pavgb(uVar33,uVar36);
  uVar37 = (undefined1)(uVar12 >> 0x28);
  auVar28[3] = pavgb(uVar34,uVar37);
  uVar47 = (undefined1)(uVar12 >> 0x30);
  auVar28[4] = pavgb(uVar36,uVar47);
  uVar48 = (undefined1)(uVar12 >> 0x38);
  auVar28[5] = pavgb(uVar37,uVar48);
  auVar28[6] = pavgb(uVar47,0);
  auVar28[7] = pavgb(uVar48,0);
  auVar28[8] = pavgb(0,0);
  auVar28[9] = pavgb(0,0);
  auVar28[10] = pavgb(0,0);
  auVar28[0xb] = pavgb(0,0);
  auVar28[0xc] = pavgb(0,0);
  auVar28[0xd] = pavgb(0,0);
  auVar28[0xe] = pavgb(0,0);
  auVar28[0xf] = pavgb(0,0);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar12 ^ uVar12 >> 0x10;
  auVar28 = psubusb(auVar28,auVar40 & __LC27);
  uVar23 = pavgb(auVar28[0],uVar23);
  uVar33 = pavgb(auVar28[1],uVar33);
  uVar34 = pavgb(auVar28[2],uVar34);
  uVar36 = pavgb(auVar28[3],uVar36);
  uVar25 = CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar23)));
  pavgb(auVar28[4],uVar37);
  pavgb(auVar28[5],uVar47);
  pavgb(auVar28[6],uVar48);
  pavgb(auVar28[7],0);
  pavgb(auVar28[8],0);
  pavgb(auVar28[9],0);
  pavgb(auVar28[10],0);
  pavgb(auVar28[0xb],0);
  pavgb(auVar28[0xc],0);
  pavgb(auVar28[0xd],0);
  pavgb(auVar28[0xe],0);
  pavgb(auVar28[0xf],0);
  *(undefined4 *)(param_1 + 0x608) = uVar25;
  *(undefined4 *)(param_1 + 0x628) = uVar25;
  *(undefined4 *)(param_1 + 0x648) = uVar25;
  *(undefined4 *)(param_1 + 0x668) = uVar25;
  uVar15 = (uint)*(byte *)((long)param_2 + -4);
  bVar2 = *(byte *)((long)param_2 + -2);
  uVar19 = (uint)*(byte *)((long)param_2 + -3);
  bVar3 = *(byte *)((long)param_2 + -5);
  *(int *)(param_1 + 0x60c) =
       ((int)(uVar19 + 2 + (uint)*(byte *)((long)param_2 + -1) + (uint)bVar2 * 2) >> 2) * 0x1010101;
  *(int *)(param_1 + 0x62c) = ((int)(uVar15 + 2 + (uint)bVar2 + uVar19 * 2) >> 2) * 0x1010101;
  *(int *)(param_1 + 0x64c) = ((int)(bVar3 + 2 + uVar19 + uVar15 * 2) >> 2) * 0x1010101;
  *(int *)(param_1 + 0x66c) = ((int)((uint)bVar3 * 3 + 2 + uVar15) >> 2) * 0x1010101;
  uVar23 = *(undefined1 *)((long)param_2 + 3);
  uVar1 = *(undefined8 *)((long)param_2 + -5);
  Var10 = *(unkuint9 *)((long)param_2 + -5);
  auVar41._9_7_ = 0;
  auVar41._0_9_ = Var10 >> 0x10 ^ Var10;
  uVar33 = (undefined1)((ulong)uVar1 >> 0x10);
  auVar29[0] = pavgb(uVar33,(char)uVar1);
  uVar36 = (undefined1)((ulong)uVar1 >> 0x18);
  uVar34 = (undefined1)((ulong)uVar1 >> 8);
  auVar29[1] = pavgb(uVar36,uVar34);
  uVar37 = (undefined1)((ulong)uVar1 >> 0x20);
  auVar29[2] = pavgb(uVar37,uVar33);
  uVar47 = (undefined1)((ulong)uVar1 >> 0x28);
  auVar29[3] = pavgb(uVar47,uVar36);
  uVar48 = (undefined1)((ulong)uVar1 >> 0x30);
  auVar29[4] = pavgb(uVar48,uVar37);
  uVar49 = (undefined1)((ulong)uVar1 >> 0x38);
  auVar29[5] = pavgb(uVar49,uVar47);
  auVar29[6] = pavgb(uVar23,uVar48);
  auVar29[7] = pavgb(0,uVar49);
  auVar29[8] = pavgb(0,uVar23);
  auVar29[9] = pavgb(0,0);
  auVar29[10] = pavgb(0,0);
  auVar29[0xb] = pavgb(0,0);
  auVar29[0xc] = pavgb(0,0);
  auVar29[0xd] = pavgb(0,0);
  auVar29[0xe] = pavgb(0,0);
  auVar29[0xf] = pavgb(0,0);
  auVar28 = psubusb(auVar29,auVar41 & auVar45);
  uVar34 = pavgb(auVar28[0],uVar34);
  uVar33 = pavgb(auVar28[1],uVar33);
  uVar36 = pavgb(auVar28[2],uVar36);
  uVar37 = pavgb(auVar28[3],uVar37);
  uVar25 = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar33,uVar34)));
  uVar33 = pavgb(auVar28[4],uVar47);
  uVar26 = CONCAT14(uVar33,uVar25);
  uVar33 = pavgb(auVar28[5],uVar48);
  uVar27 = CONCAT15(uVar33,uVar26);
  uVar33 = pavgb(auVar28[6],uVar49);
  pavgb(auVar28[7],uVar23);
  pavgb(auVar28[8],0);
  pavgb(auVar28[9],0);
  pavgb(auVar28[10],0);
  pavgb(auVar28[0xb],0);
  pavgb(auVar28[0xc],0);
  pavgb(auVar28[0xd],0);
  pavgb(auVar28[0xe],0);
  pavgb(auVar28[0xf],0);
  *(undefined4 *)(param_1 + 0x670) = uVar25;
  *(int *)(param_1 + 0x650) = (int)((uint5)uVar26 >> 8);
  *(int *)(param_1 + 0x610) = (int)(CONCAT16(uVar33,uVar27) >> 0x18);
  *(int *)(param_1 + 0x630) = (int)((uint6)uVar27 >> 0x10);
  bVar2 = *(byte *)((long)param_2 + -1);
  uVar12 = *(ulong *)((long)param_2 + -1);
  uVar9 = *(ushort *)((long)param_2 + -2);
  uVar15 = (uint)*(byte *)((long)param_2 + -2);
  bVar3 = *(byte *)((long)param_2 + -3);
  bVar4 = *(byte *)((long)param_2 + -4);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = uVar12 >> 8;
  uVar11 = uVar12 & 0xffffffffffff00;
  auVar51._8_8_ = uVar12 >> 0x38;
  auVar51._0_8_ = uVar11 << 8 | (ulong)uVar9;
  uVar33 = (undefined1)(uVar12 >> 8);
  uVar23 = pavgb((char)uVar12,uVar33);
  uVar34 = (undefined1)(uVar12 >> 0x10);
  uVar47 = pavgb(uVar33,uVar34);
  uVar36 = (undefined1)(uVar12 >> 0x18);
  uVar48 = pavgb(uVar34,uVar36);
  uVar37 = (undefined1)(uVar12 >> 0x20);
  uVar49 = pavgb(uVar36,uVar37);
  iVar18 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar23)));
  uVar47 = (undefined1)(uVar12 >> 0x28);
  pavgb(uVar37,uVar47);
  uVar48 = (undefined1)(uVar12 >> 0x30);
  pavgb(uVar47,uVar48);
  uVar49 = (undefined1)(uVar12 >> 0x38);
  pavgb(uVar48,uVar49);
  pavgb(uVar49,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  *(int *)(param_1 + 0x614) = iVar18;
  auVar30[0] = pavgb((char)uVar9,uVar33);
  auVar30[1] = pavgb((char)(uVar9 >> 8),uVar34);
  auVar30[2] = pavgb((char)(uVar11 >> 8),uVar36);
  auVar30[3] = pavgb((char)(uVar11 >> 0x10),uVar37);
  auVar30[4] = pavgb((char)(uVar11 >> 0x18),uVar47);
  auVar30[5] = pavgb((char)(uVar11 >> 0x20),uVar48);
  auVar30[6] = pavgb((char)(uVar11 >> 0x28),uVar49);
  auVar30[7] = pavgb((char)(uVar11 >> 0x30),0);
  auVar30[8] = pavgb(uVar49,0);
  auVar30[9] = pavgb(0,0);
  auVar30[10] = pavgb(0,0);
  auVar30[0xb] = pavgb(0,0);
  auVar30[0xc] = pavgb(0,0);
  auVar30[0xd] = pavgb(0,0);
  auVar30[0xe] = pavgb(0,0);
  auVar30[0xf] = pavgb(0,0);
  *(int *)(param_1 + 0x654) = iVar18 << 8;
  auVar28 = psubusb(auVar30,(auVar42 ^ auVar51) & auVar45);
  *(char *)(param_1 + 0x654) = (char)((int)((uint)bVar3 + uVar15 * 2 + 2 + (uint)bVar2) >> 2);
  uVar23 = pavgb(auVar28[0],(char)uVar12);
  uVar33 = pavgb(auVar28[1],uVar33);
  uVar34 = pavgb(auVar28[2],uVar34);
  uVar36 = pavgb(auVar28[3],uVar36);
  iVar18 = CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar23)));
  pavgb(auVar28[4],uVar37);
  pavgb(auVar28[5],uVar47);
  pavgb(auVar28[6],uVar48);
  pavgb(auVar28[7],uVar49);
  pavgb(auVar28[8],0);
  pavgb(auVar28[9],0);
  pavgb(auVar28[10],0);
  pavgb(auVar28[0xb],0);
  pavgb(auVar28[0xc],0);
  pavgb(auVar28[0xd],0);
  pavgb(auVar28[0xe],0);
  pavgb(auVar28[0xf],0);
  *(int *)(param_1 + 0x634) = iVar18;
  *(int *)(param_1 + 0x674) = iVar18 << 8;
  *(char *)(param_1 + 0x674) = (char)((int)(uVar15 + 2 + (uint)bVar4 + (uint)bVar3 * 2) >> 2);
  uVar12 = *param_2;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = uVar12 ^ (uVar12 >> 0x10 | (ulong)*(byte *)((long)param_2 + 7) << 0x30);
  uVar33 = (undefined1)(uVar12 >> 0x10);
  auVar31[0] = pavgb((char)uVar12,uVar33);
  uVar23 = (undefined1)(uVar12 >> 8);
  uVar34 = (undefined1)(uVar12 >> 0x18);
  auVar31[1] = pavgb(uVar23,uVar34);
  uVar36 = (undefined1)(uVar12 >> 0x20);
  auVar31[2] = pavgb(uVar33,uVar36);
  uVar37 = (undefined1)(uVar12 >> 0x28);
  auVar31[3] = pavgb(uVar34,uVar37);
  uVar47 = (undefined1)(uVar12 >> 0x30);
  auVar31[4] = pavgb(uVar36,uVar47);
  uVar48 = (undefined1)(uVar12 >> 0x38);
  auVar31[5] = pavgb(uVar37,uVar48);
  auVar31[6] = pavgb(uVar47,*(byte *)((long)param_2 + 7));
  auVar31[7] = pavgb(uVar48,0);
  auVar31[8] = pavgb(0,0);
  auVar31[9] = pavgb(0,0);
  auVar31[10] = pavgb(0,0);
  auVar31[0xb] = pavgb(0,0);
  auVar31[0xc] = pavgb(0,0);
  auVar31[0xd] = pavgb(0,0);
  auVar31[0xe] = pavgb(0,0);
  auVar31[0xf] = pavgb(0,0);
  auVar28 = psubusb(auVar31,auVar43 & auVar45);
  uVar23 = pavgb(auVar28[0],uVar23);
  uVar33 = pavgb(auVar28[1],uVar33);
  uVar34 = pavgb(auVar28[2],uVar34);
  uVar36 = pavgb(auVar28[3],uVar36);
  uVar25 = CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar33,uVar23)));
  uVar23 = pavgb(auVar28[4],uVar37);
  uVar26 = CONCAT14(uVar23,uVar25);
  uVar23 = pavgb(auVar28[5],uVar47);
  uVar27 = CONCAT15(uVar23,uVar26);
  uVar23 = pavgb(auVar28[6],uVar48);
  pavgb(auVar28[7],0);
  pavgb(auVar28[8],0);
  pavgb(auVar28[9],0);
  pavgb(auVar28[10],0);
  pavgb(auVar28[0xb],0);
  pavgb(auVar28[0xc],0);
  pavgb(auVar28[0xd],0);
  pavgb(auVar28[0xe],0);
  pavgb(auVar28[0xf],0);
  *(undefined4 *)(param_1 + 0x618) = uVar25;
  *(int *)(param_1 + 0x638) = (int)((uint5)uVar26 >> 8);
  *(int *)(param_1 + 0x678) = (int)(CONCAT16(uVar23,uVar27) >> 0x18);
  *(int *)(param_1 + 0x658) = (int)((uint6)uVar27 >> 0x10);
  uVar12 = *param_2;
  uVar48 = (undefined1)(uVar12 >> 8);
  uVar33 = pavgb((char)uVar12,uVar48);
  uVar49 = (undefined1)(uVar12 >> 0x10);
  uVar34 = pavgb(uVar48,uVar49);
  uVar52 = (undefined1)(uVar12 >> 0x18);
  uVar36 = pavgb(uVar49,uVar52);
  uVar53 = (undefined1)(uVar12 >> 0x20);
  uVar37 = pavgb(uVar52,uVar53);
  uVar25 = CONCAT13(uVar37,CONCAT12(uVar36,CONCAT11(uVar34,uVar33)));
  uVar54 = (undefined1)(uVar12 >> 0x28);
  uVar47 = pavgb(uVar53,uVar54);
  auVar46._0_5_ = CONCAT14(uVar47,uVar25);
  uVar55 = (undefined1)(uVar12 >> 0x30);
  auVar46[5] = pavgb(uVar54,uVar55);
  uVar23 = (undefined1)(uVar12 >> 0x38);
  auVar46[6] = pavgb(uVar55,uVar23);
  auVar46[7] = pavgb(uVar23,0);
  auVar46[8] = pavgb(0,0);
  auVar46[9] = pavgb(0,0);
  auVar46[10] = pavgb(0,0);
  auVar46[0xb] = pavgb(0,0);
  auVar46[0xc] = pavgb(0,0);
  auVar46[0xd] = pavgb(0,0);
  auVar46[0xe] = pavgb(0,0);
  auVar46[0xf] = pavgb(0,0);
  auVar50[0] = pavgb(uVar49,uVar48);
  auVar50[1] = pavgb(uVar52,uVar49);
  auVar50[2] = pavgb(uVar53,uVar52);
  auVar50[3] = pavgb(uVar54,uVar53);
  auVar50[4] = pavgb(uVar55,uVar54);
  auVar50[5] = pavgb(uVar23,uVar55);
  auVar50[6] = pavgb(0,uVar23);
  auVar50[7] = pavgb(0,0);
  auVar50[8] = pavgb(0,0);
  auVar50[9] = pavgb(0,0);
  auVar50[10] = pavgb(0,0);
  auVar50[0xb] = pavgb(0,0);
  auVar50[0xc] = pavgb(0,0);
  auVar50[0xd] = pavgb(0,0);
  auVar50[0xe] = pavgb(0,0);
  auVar50[0xf] = pavgb(0,0);
  *(undefined4 *)(param_1 + 0x61c) = uVar25;
  auVar44[0] = pavgb(uVar33,auVar50[0]);
  auVar44[1] = pavgb(uVar34,auVar50[1]);
  auVar44[2] = pavgb(uVar36,auVar50[2]);
  auVar44[3] = pavgb(uVar37,auVar50[3]);
  auVar44[4] = pavgb(uVar47,auVar50[4]);
  auVar44[5] = pavgb(auVar46[5],auVar50[5]);
  auVar44[6] = pavgb(auVar46[6],auVar50[6]);
  auVar44[7] = pavgb(auVar46[7],auVar50[7]);
  auVar44[8] = pavgb(auVar46[8],auVar50[8]);
  auVar44[9] = pavgb(auVar46[9],auVar50[9]);
  auVar44[10] = pavgb(auVar46[10],auVar50[10]);
  auVar44[0xb] = pavgb(auVar46[0xb],auVar50[0xb]);
  auVar44[0xc] = pavgb(auVar46[0xc],auVar50[0xc]);
  auVar44[0xd] = pavgb(auVar46[0xd],auVar50[0xd]);
  auVar44[0xe] = pavgb(auVar46[0xe],auVar50[0xe]);
  auVar44[0xf] = pavgb(auVar46[0xf],auVar50[0xf]);
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar12 ^ uVar12 >> 8 | uVar12 >> 0x10 ^ uVar12 >> 8;
  *(int *)(param_1 + 0x65c) = (int)((uint5)auVar46._0_5_ >> 8);
  auVar45 = psubusb(auVar44,auVar32 & (auVar50 ^ auVar46) & auVar45);
  *(int *)(param_1 + 0x63c) = auVar45._0_4_;
  *(int *)(param_1 + 0x67c) = auVar45._1_4_;
  *(char *)(param_1 + 0x65f) = auVar45[4];
  *(char *)(param_1 + 0x67f) = auVar45[5];
  bVar2 = *(byte *)((long)param_2 + -1);
  bVar3 = *(byte *)((long)param_2 + -2);
  bVar4 = *(byte *)((long)param_2 + -3);
  uVar22 = (uint)(byte)*param_2;
  bVar5 = *(byte *)((long)param_2 + -4);
  bVar6 = *(byte *)((long)param_2 + 1);
  bVar7 = *(byte *)((long)param_2 + 2);
  bVar8 = *(byte *)((long)param_2 + -5);
  uVar23 = (undefined1)((int)((uint)bVar2 + (uint)bVar3 + 1) >> 1);
  *(undefined1 *)(param_1 + 0x6a2) = uVar23;
  iVar18 = (uint)bVar8 + (uint)bVar5;
  *(undefined1 *)(param_1 + 0x680) = uVar23;
  uVar15 = (int)((uint)bVar3 + (uint)bVar4 + 1) >> 1;
  uVar21 = (int)(bVar2 + 2 + (uint)bVar3 + (uint)bVar4 + (uint)bVar3) >> 2;
  uVar19 = (int)(bVar3 + 2 + (uint)bVar4 + (uint)bVar5 + (uint)bVar4) >> 2 & 0xff;
  *(char *)(param_1 + 0x6a1) = (char)uVar21;
  *(char *)(param_1 + 0x6a0) = (char)uVar15;
  *(char *)(param_1 + 0x683) = (char)((int)(bVar7 + 2 + uVar22 + (uint)bVar6 * 2) >> 2);
  uVar23 = (undefined1)((int)(uVar22 + 2 + (uint)bVar2 + (uint)bVar3 + (uint)bVar2) >> 2);
  *(undefined1 *)(param_1 + 0x6a3) = uVar23;
  *(undefined1 *)(param_1 + 0x681) = uVar23;
  *(char *)(param_1 + 0x682) = (char)((int)(bVar6 + 2 + (uint)bVar2 + uVar22 * 2) >> 2);
  uVar22 = (int)((uint)bVar4 + (uint)bVar5 + 1) >> 1 & 0xff;
  *(uint *)(param_1 + 0x6c0) = (((uVar21 & 0xff) << 8 | uVar15 & 0xff) << 8 | uVar19) << 8 | uVar22;
  *(uint *)(param_1 + 0x6e0) =
       ((uVar19 << 8 | uVar22) << 8 | (int)(bVar4 + 2 + (uint)bVar5 + iVar18) >> 2 & 0xffU) << 8 |
       iVar18 + 1 >> 1 & 0xffU;
  uVar19 = (uint)*(byte *)((long)param_2 + -4);
  bVar2 = *(byte *)((long)param_2 + -3);
  uVar15 = *(uint *)((long)param_2 + -5);
  iVar20 = (uint)bVar2 + (uint)*(byte *)((long)param_2 + -4);
  uVar34 = (undefined1)(uVar15 >> 0x18);
  uVar33 = (undefined1)(uVar15 >> 0x10);
  uVar23 = (undefined1)(uVar15 >> 8);
  auVar45._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar34,uVar34),uVar33),CONCAT14(uVar33,uVar15)) >> 0x20);
  auVar45[3] = uVar23;
  auVar45[2] = uVar23;
  auVar45[0] = (undefined1)uVar15;
  auVar45[1] = auVar45[0];
  auVar45._8_8_ = 0;
  iVar18 = (uint)*(byte *)((long)param_2 + -2) + (uint)bVar2;
  uVar15 = uVar15 & 0xff;
  auVar45 = pshuflw(auVar45,auVar45,0xe0);
  *(char *)(param_1 + 0x684) = (char)(iVar18 + 1 >> 1);
  *(char *)(param_1 + 0x685) = (char)((int)(uVar19 + 2 + (uint)bVar2 + iVar18) >> 2);
  uVar33 = (undefined1)(iVar20 + 1 >> 1);
  *(undefined1 *)(param_1 + 0x6a4) = uVar33;
  uVar23 = (undefined1)((int)(uVar15 + 2 + uVar19 + iVar20) >> 2);
  *(undefined1 *)(param_1 + 0x6a5) = uVar23;
  *(undefined1 *)(param_1 + 0x687) = uVar23;
  *(undefined1 *)(param_1 + 0x686) = uVar33;
  uVar23 = (undefined1)((int)(uVar19 + uVar15 + 2 + uVar15 * 2) >> 2);
  *(undefined1 *)(param_1 + 0x6c5) = uVar23;
  *(undefined1 *)(param_1 + 0x6a7) = uVar23;
  uVar23 = (undefined1)((int)(uVar19 + uVar15 + 1) >> 1);
  *(undefined1 *)(param_1 + 0x6c4) = uVar23;
  *(undefined1 *)(param_1 + 0x6a6) = uVar23;
  *(short *)(param_1 + 0x6c6) = auVar45._0_2_;
  *(int *)(param_1 + 0x6e4) = auVar45._0_4_;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8EncDspInitSSE2(void)

{
  _VP8CollectHistogram = CollectHistogram_SSE2;
  _VP8EncPredLuma16 = Intra16Preds_SSE2;
  _VP8EncPredChroma8 = IntraChromaPreds_SSE2;
  _VP8EncPredLuma4 = Intra4Preds_SSE2;
  _VP8EncQuantizeBlock = QuantizeBlock_SSE2;
  _VP8EncQuantize2Blocks = Quantize2Blocks_SSE2;
  _VP8EncQuantizeBlockWHT = QuantizeBlockWHT_SSE2;
  _VP8ITransform = ITransform_SSE2;
  _VP8FTransform = FTransform_SSE2;
  _VP8FTransform2 = FTransform2_SSE2;
  _VP8FTransformWHT = FTransformWHT_SSE2;
  _VP8SSE16x16 = SSE16x16_SSE2;
  _VP8SSE16x8 = SSE16x8_SSE2;
  _VP8SSE8x8 = SSE8x8_SSE2;
  _VP8SSE4x4 = SSE4x4_SSE2;
  _VP8TDisto4x4 = Disto4x4_SSE2;
  _VP8TDisto16x16 = Disto16x16_SSE2;
  _VP8Mean16x4 = 0x100000;
  return;
}




void ecp_nistz256_mul_by_2(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[1];
  uVar5 = uVar9 * 2;
  uVar1 = param_2[2];
  uVar6 = uVar11 * 2 + (ulong)CARRY8(uVar9,uVar9);
  uVar7 = param_2[3];
  uVar9 = (ulong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulong)CARRY8(uVar9,uVar9)));
  uVar8 = uVar1 * 2 + uVar9;
  uVar9 = (ulong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar9));
  uVar10 = uVar7 * 2 + uVar9;
  uVar11 = (ulong)(uVar6 < DAT_0012a008 || uVar6 - DAT_0012a008 < (ulong)(uVar5 < DAT_0012a000));
  uVar2 = uVar8 - DAT_0012a010;
  uVar1 = (ulong)(uVar8 < DAT_0012a010 || uVar2 < uVar11);
  uVar3 = uVar10 - DAT_0012a018;
  bVar4 = (CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar9)) <
          (uVar10 < DAT_0012a018 || uVar3 < uVar1);
  uVar7 = (uVar6 - DAT_0012a008) - (ulong)(uVar5 < DAT_0012a000);
  uVar9 = uVar5 - DAT_0012a000;
  if (bVar4) {
    uVar7 = uVar6;
    uVar9 = uVar5;
  }
  *param_1 = uVar9;
  uVar9 = uVar2 - uVar11;
  if (bVar4) {
    uVar9 = uVar8;
  }
  param_1[1] = uVar7;
  uVar11 = uVar3 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[2] = uVar9;
  param_1[3] = uVar11;
  return;
}



void ecp_nistz256_div_by_2(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = (ulong)(CARRY8(uVar2,DAT_0012a008) ||
                 CARRY8(uVar2 + DAT_0012a008,(ulong)CARRY8(uVar1,DAT_0012a000)));
  uVar6 = (ulong)(CARRY8(uVar3,DAT_0012a010) || CARRY8(uVar3 + DAT_0012a010,uVar5));
  uVar9 = (ulong)(CARRY8(uVar4,DAT_0012a018) || CARRY8(uVar4 + DAT_0012a018,uVar6));
  uVar5 = uVar3 + DAT_0012a010 + uVar5;
  uVar7 = uVar1 + DAT_0012a000;
  uVar8 = uVar2 + DAT_0012a008 + (ulong)CARRY8(uVar1,DAT_0012a000);
  uVar6 = uVar4 + DAT_0012a018 + uVar6;
  if ((uVar1 & 1) == 0) {
    uVar9 = 0;
    uVar5 = uVar3;
    uVar7 = uVar1;
    uVar8 = uVar2;
    uVar6 = uVar4;
  }
  *param_1 = uVar7 >> 1 | uVar8 << 0x3f;
  param_1[1] = uVar8 >> 1 | uVar5 << 0x3f;
  param_1[2] = uVar5 >> 1 | uVar6 << 0x3f;
  param_1[3] = uVar6 >> 1 | uVar9 << 0x3f;
  return;
}



void ecp_nistz256_mul_by_3(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar8 = *param_2;
  uVar11 = param_2[1];
  uVar3 = uVar8 * 2;
  uVar1 = param_2[2];
  uVar7 = uVar11 * 2 + (ulong)CARRY8(uVar8,uVar8);
  uVar2 = param_2[3];
  uVar8 = (ulong)(CARRY8(uVar11,uVar11) || CARRY8(uVar11 * 2,(ulong)CARRY8(uVar8,uVar8)));
  uVar9 = uVar1 * 2 + uVar8;
  uVar8 = (ulong)(CARRY8(uVar1,uVar1) || CARRY8(uVar1 * 2,uVar8));
  uVar12 = uVar2 * 2 + uVar8;
  uVar11 = (ulong)(uVar7 < DAT_0012a008 ||
                  uVar7 - DAT_0012a008 < (ulong)(uVar3 != 0xffffffffffffffff));
  uVar1 = (ulong)(uVar9 < uVar11);
  uVar13 = (uVar12 - DAT_0012a018) - uVar1;
  uVar10 = (uVar7 - DAT_0012a008) - (ulong)(uVar3 != 0xffffffffffffffff);
  uVar14 = uVar3 + 1;
  uVar11 = uVar9 - uVar11;
  if ((CARRY8(uVar2,uVar2) || CARRY8(uVar2 * 2,uVar8)) <
      (uVar12 < DAT_0012a018 || uVar12 - DAT_0012a018 < uVar1)) {
    uVar13 = uVar12;
    uVar10 = uVar7;
    uVar14 = uVar3;
    uVar11 = uVar9;
  }
  lVar6 = uVar14 + *param_2;
  uVar8 = uVar10 + param_2[1];
  uVar7 = uVar8 + CARRY8(uVar14,*param_2);
  uVar8 = (ulong)(CARRY8(uVar10,param_2[1]) || CARRY8(uVar8,(ulong)CARRY8(uVar14,*param_2)));
  uVar1 = uVar11 + param_2[2];
  uVar10 = uVar1 + uVar8;
  uVar8 = (ulong)(CARRY8(uVar11,param_2[2]) || CARRY8(uVar1,uVar8));
  uVar11 = uVar13 + param_2[3];
  uVar14 = uVar11 + uVar8;
  uVar1 = (ulong)(uVar7 < DAT_0012a008 || uVar7 - DAT_0012a008 < (ulong)(lVar6 != -1));
  uVar2 = (ulong)(uVar10 < uVar1);
  uVar3 = uVar14 - DAT_0012a018;
  bVar4 = (CARRY8(uVar13,param_2[3]) || CARRY8(uVar11,uVar8)) <
          (uVar14 < DAT_0012a018 || uVar3 < uVar2);
  uVar8 = (uVar7 - DAT_0012a008) - (ulong)(lVar6 != -1);
  lVar5 = lVar6 + 1;
  if (bVar4) {
    uVar8 = uVar7;
    lVar5 = lVar6;
  }
  *param_1 = lVar5;
  uVar11 = uVar10 - uVar1;
  if (bVar4) {
    uVar11 = uVar10;
  }
  param_1[1] = uVar8;
  uVar8 = uVar3 - uVar2;
  if (bVar4) {
    uVar8 = uVar14;
  }
  param_1[2] = uVar11;
  param_1[3] = uVar8;
  return;
}



void ecp_nistz256_add(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = *param_2 + *param_3;
  uVar10 = (ulong)CARRY8(*param_2,*param_3);
  uVar8 = param_2[1] + param_3[1];
  uVar7 = uVar8 + uVar10;
  uVar10 = (ulong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[2] + param_3[2];
  uVar9 = uVar8 + uVar10;
  uVar10 = (ulong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar8,uVar10));
  uVar8 = param_2[3] + param_3[3];
  uVar11 = uVar8 + uVar10;
  uVar1 = (ulong)(uVar7 < DAT_0012a008 || uVar7 - DAT_0012a008 < (ulong)(uVar6 < DAT_0012a000));
  uVar3 = uVar9 - DAT_0012a010;
  uVar2 = (ulong)(uVar9 < DAT_0012a010 || uVar3 < uVar1);
  uVar4 = uVar11 - DAT_0012a018;
  bVar5 = (CARRY8(param_2[3],param_3[3]) || CARRY8(uVar8,uVar10)) <
          (uVar11 < DAT_0012a018 || uVar4 < uVar2);
  uVar8 = (uVar7 - DAT_0012a008) - (ulong)(uVar6 < DAT_0012a000);
  uVar10 = uVar6 - DAT_0012a000;
  if (bVar5) {
    uVar8 = uVar7;
    uVar10 = uVar6;
  }
  *param_1 = uVar10;
  uVar10 = uVar3 - uVar1;
  if (bVar5) {
    uVar10 = uVar9;
  }
  param_1[1] = uVar8;
  uVar8 = uVar4 - uVar2;
  if (bVar5) {
    uVar8 = uVar11;
  }
  param_1[2] = uVar10;
  param_1[3] = uVar8;
  return;
}



void ecp_nistz256_sub(ulong *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar4 = *param_2 - *param_3;
  uVar10 = (ulong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar10;
  uVar10 = (ulong)(param_2[1] < param_3[1] || uVar2 < uVar10);
  uVar2 = param_2[2] - param_3[2];
  uVar7 = uVar2 - uVar10;
  uVar10 = (ulong)(param_2[2] < param_3[2] || uVar2 < uVar10);
  bVar11 = param_3[3] <= param_2[3];
  uVar9 = param_2[3] - param_3[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulong)(CARRY8(uVar5,DAT_0012a008) ||
                  CARRY8(uVar5 + DAT_0012a008,(ulong)CARRY8(uVar4,DAT_0012a000)));
  bVar12 = CARRY8(uVar7,DAT_0012a010);
  uVar2 = uVar7 + DAT_0012a010;
  lVar1 = uVar9 + DAT_0012a018;
  uVar6 = uVar5 + DAT_0012a008 + (ulong)CARRY8(uVar4,DAT_0012a000);
  uVar8 = uVar4 + DAT_0012a000;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar8 = uVar4;
  }
  *param_1 = uVar8;
  uVar8 = uVar2 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar1 + (ulong)(bVar12 || CARRY8(uVar2,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}



void ecp_nistz256_neg(ulong *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  bool bVar12;
  
  uVar8 = -*param_2;
  uVar10 = -param_2[1];
  uVar5 = uVar10 - (*param_2 != 0);
  uVar10 = (ulong)(param_2[1] != 0 || uVar10 < (*param_2 != 0));
  uVar1 = -param_2[2];
  uVar7 = uVar1 - uVar10;
  uVar10 = (ulong)(param_2[2] != 0 || uVar1 < uVar10);
  bVar11 = param_2[3] == 0;
  uVar9 = -param_2[3];
  bVar3 = uVar10 <= uVar9;
  uVar9 = uVar9 - uVar10;
  uVar10 = (ulong)(CARRY8(uVar5,DAT_0012a008) ||
                  CARRY8(uVar5 + DAT_0012a008,(ulong)CARRY8(uVar8,DAT_0012a000)));
  bVar12 = CARRY8(uVar7,DAT_0012a010);
  uVar1 = uVar7 + DAT_0012a010;
  lVar2 = uVar9 + DAT_0012a018;
  uVar6 = uVar5 + DAT_0012a008 + (ulong)CARRY8(uVar8,DAT_0012a000);
  uVar4 = uVar8 + DAT_0012a000;
  if (bVar11 && bVar3) {
    uVar6 = uVar5;
    uVar4 = uVar8;
  }
  *param_1 = uVar4;
  uVar8 = uVar1 + uVar10;
  if (bVar11 && bVar3) {
    uVar8 = uVar7;
  }
  param_1[1] = uVar6;
  uVar10 = lVar2 + (ulong)(bVar12 || CARRY8(uVar1,uVar10));
  if (bVar11 && bVar3) {
    uVar10 = uVar9;
  }
  param_1[2] = uVar8;
  param_1[3] = uVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ecp_nistz256_ord_mul_mont(ulong *param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  unkint9 Var49;
  unkint9 Var50;
  unkint9 Var51;
  unkint9 Var52;
  unkint9 Var53;
  unkint9 Var54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  ulong uVar137;
  ulong uVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  long lVar143;
  ulong uVar144;
  ulong uVar145;
  ulong uVar146;
  ulong uVar147;
  ulong uVar148;
  ulong uVar149;
  ulong uVar150;
  ulong uVar151;
  ulong uVar152;
  ulong uVar153;
  ulong uVar154;
  ulong uVar155;
  
  if ((_DAT_0012b008 & 0x80100) == 0x80100) {
    uVar138 = *param_3;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar138;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = *param_2;
    uVar147 = SUB168(auVar55 * auVar88,0);
    uVar148 = SUB168(auVar55 * auVar88,8);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar138;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_2[1];
    uVar141 = SUB168(auVar56 * auVar89,0);
    uVar139 = SUB168(auVar56 * auVar89,8);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar138;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = param_2[2];
    uVar140 = SUB168(auVar57 * auVar90,0);
    uVar150 = SUB168(auVar57 * auVar90,8);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar138;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = param_2[3];
    uVar142 = SUB168(auVar58 * auVar91,0);
    uVar146 = uVar147 * DAT_0012a0e0;
    uVar138 = (ulong)CARRY8(uVar148,uVar141);
    uVar137 = uVar139 + uVar140;
    uVar140 = (ulong)(CARRY8(uVar139,uVar140) || CARRY8(uVar137,uVar138));
    uVar139 = uVar150 + uVar142;
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar146;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = DAT_0012a0c0;
    Var49 = (unkuint9)uVar147 + (unkuint9)SUB168(auVar59 * auVar92,0) + (unkuint9)0;
    uVar147 = (ulong)Var49;
    Var50 = (unkuint9)(uVar148 + uVar141) + (unkuint9)SUB168(auVar59 * auVar92,8) + (unkuint9)0;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar146;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_0012a0c8;
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar60 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(uVar137 + uVar138) + (unkuint9)SUB168(auVar60 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar146;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_0012a0d0;
    Var50 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar61 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar61 * auVar94,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar146;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = DAT_0012a0d8;
    uVar138 = param_3[1];
    Var51 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar62 * auVar95,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)
            (SUB168(auVar58 * auVar91,8) +
            (ulong)(CARRY8(uVar150,uVar142) || CARRY8(uVar139,uVar140))) +
            (unkuint9)SUB168(auVar62 * auVar95,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar147 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar137 = uVar147 + ((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar138;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = *param_2;
    Var49 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar63 * auVar96,0) +
            (unkuint9)CARRY8(uVar137,uVar140);
    uVar139 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar63 * auVar96,8) +
            (unkuint9)(SCARRY8(uVar137,0) != SCARRY8(uVar137,uVar140));
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar138;
    auVar97._8_8_ = 0;
    auVar97._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar64 * auVar97,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar64 * auVar97,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar138;
    auVar98._8_8_ = 0;
    auVar98._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar65 * auVar98,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar65 * auVar98,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar138;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = param_2[3];
    uVar138 = uVar139 * DAT_0012a0e0;
    Var51 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar66 * auVar99,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar137 + uVar140) + (unkuint9)SUB168(auVar66 * auVar99,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar147 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar137 = uVar147 * 2 + (ulong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar138;
    auVar100._8_8_ = 0;
    auVar100._0_8_ = DAT_0012a0c0;
    Var53 = (unkuint9)uVar139 + (unkuint9)SUB168(auVar67 * auVar100,0) +
            (unkuint9)CARRY8(uVar137,uVar140);
    uVar139 = (ulong)Var53;
    Var54 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar67 * auVar100,8) +
            (unkuint9)(SCARRY8(uVar137,0) != SCARRY8(uVar137,uVar140));
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar138;
    auVar101._8_8_ = 0;
    auVar101._0_8_ = DAT_0012a0c8;
    Var49 = (unkuint9)(ulong)Var54 + (unkuint9)SUB168(auVar68 * auVar101,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar68 * auVar101,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar138;
    auVar102._8_8_ = 0;
    auVar102._0_8_ = DAT_0012a0d0;
    Var50 = (unkuint9)(ulong)Var53 + (unkuint9)SUB168(auVar69 * auVar102,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar69 * auVar102,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar138;
    auVar103._8_8_ = 0;
    auVar103._0_8_ = DAT_0012a0d8;
    uVar138 = param_3[2];
    Var51 = (unkuint9)(ulong)Var53 + (unkuint9)SUB168(auVar70 * auVar103,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar70 * auVar103,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar139 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar137 = uVar137 + uVar140 + uVar139 + (ulong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar138;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = *param_2;
    Var49 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar71 * auVar104,0) +
            (unkuint9)CARRY8(uVar137,uVar140);
    uVar141 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar71 * auVar104,8) +
            (unkuint9)(SCARRY8(uVar137,0) != SCARRY8(uVar137,uVar140));
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar138;
    auVar105._8_8_ = 0;
    auVar105._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar72 * auVar105,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar72 * auVar105,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar138;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar73 * auVar106,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar73 * auVar106,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar138;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = param_2[3];
    uVar138 = uVar141 * DAT_0012a0e0;
    Var51 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar74 * auVar107,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar137 + uVar140) + (unkuint9)SUB168(auVar74 * auVar107,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar139 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar137 = uVar139 * 2 + (ulong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar138;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = DAT_0012a0c0;
    Var53 = (unkuint9)uVar141 + (unkuint9)SUB168(auVar75 * auVar108,0) +
            (unkuint9)CARRY8(uVar137,uVar140);
    uVar141 = (ulong)Var53;
    Var54 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar75 * auVar108,8) +
            (unkuint9)(SCARRY8(uVar137,0) != SCARRY8(uVar137,uVar140));
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar138;
    auVar109._8_8_ = 0;
    auVar109._0_8_ = DAT_0012a0c8;
    Var49 = (unkuint9)(ulong)Var54 + (unkuint9)SUB168(auVar76 * auVar109,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar76 * auVar109,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar138;
    auVar110._8_8_ = 0;
    auVar110._0_8_ = DAT_0012a0d0;
    Var50 = (unkuint9)(ulong)Var53 + (unkuint9)SUB168(auVar77 * auVar110,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar77 * auVar110,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar138;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = DAT_0012a0d8;
    uVar138 = param_3[3];
    Var51 = (unkuint9)(ulong)Var53 + (unkuint9)SUB168(auVar78 * auVar111,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar78 * auVar111,8) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar139 = uVar137 + uVar140 + uVar141 + (ulong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar140 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar79._8_8_ = 0;
    auVar79._0_8_ = uVar138;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = *param_2;
    Var49 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar79 * auVar112,0) +
            (unkuint9)CARRY8(uVar139,uVar140);
    uVar142 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar79 * auVar112,8) +
            (unkuint9)(SCARRY8(uVar139,0) != SCARRY8(uVar139,uVar140));
    auVar80._8_8_ = 0;
    auVar80._0_8_ = uVar138;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_2[1];
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar80 * auVar113,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var51 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar80 * auVar113,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar81._8_8_ = 0;
    auVar81._0_8_ = uVar138;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = param_2[2];
    Var50 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar81 * auVar114,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar81 * auVar114,8) +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    auVar82._8_8_ = 0;
    auVar82._0_8_ = uVar138;
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_2[3];
    auVar83._8_8_ = 0;
    auVar83._0_8_ = uVar142;
    auVar116._8_8_ = 0;
    auVar116._0_8_ = DAT_0012a0e0;
    uVar137 = SUB168(auVar83 * auVar116,0);
    Var51 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar82 * auVar115,0) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var53 = (unkuint9)(uVar139 + uVar140) + (unkuint9)SUB168(auVar82 * auVar115,8) +
            (unkuint9)((char)((unkuint9)Var52 >> 0x40) != '\0');
    Var52 = (unkuint9)(ulong)Var53 + (unkuint9)uVar141 +
            (unkuint9)((char)((unkuint9)Var51 >> 0x40) != '\0');
    uVar148 = uVar141 * 2 + (ulong)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar138 = (ulong)((char)((unkuint9)Var52 >> 0x40) != '\0');
    auVar84._8_8_ = 0;
    auVar84._0_8_ = uVar137;
    auVar117._8_8_ = 0;
    auVar117._0_8_ = DAT_0012a0c0;
    Var53 = (unkuint9)uVar142 + (unkuint9)SUB168(auVar84 * auVar117,0) +
            (unkuint9)CARRY8(uVar148,uVar138);
    uVar150 = (ulong)Var53;
    Var54 = (unkuint9)(ulong)Var49 + (unkuint9)SUB168(auVar84 * auVar117,8) +
            (unkuint9)(SCARRY8(uVar148,0) != SCARRY8(uVar148,uVar138));
    auVar85._8_8_ = 0;
    auVar85._0_8_ = uVar137;
    auVar118._8_8_ = 0;
    auVar118._0_8_ = DAT_0012a0c8;
    Var49 = (unkuint9)(ulong)Var54 + (unkuint9)SUB168(auVar85 * auVar118,0) +
            (unkuint9)((char)((unkuint9)Var53 >> 0x40) != '\0');
    uVar149 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar85 * auVar118,8) +
            (unkuint9)((char)((unkuint9)Var54 >> 0x40) != '\0');
    auVar86._8_8_ = 0;
    auVar86._0_8_ = uVar137;
    auVar119._8_8_ = 0;
    auVar119._0_8_ = DAT_0012a0d0;
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar86 * auVar119,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar151 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var51 + (unkuint9)SUB168(auVar86 * auVar119,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    auVar87._8_8_ = 0;
    auVar87._0_8_ = uVar137;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = DAT_0012a0d8;
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)SUB168(auVar87 * auVar120,0) +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar146 = (ulong)Var49;
    Var50 = (unkuint9)(ulong)Var52 + (unkuint9)SUB168(auVar87 * auVar120,8) +
            (unkuint9)((char)((unkuint9)Var50 >> 0x40) != '\0');
    Var49 = (unkuint9)(ulong)Var50 + (unkuint9)uVar150 +
            (unkuint9)((char)((unkuint9)Var49 >> 0x40) != '\0');
    uVar147 = (ulong)Var49;
    uVar140 = (ulong)(uVar151 < DAT_0012a0c8 ||
                     uVar151 - DAT_0012a0c8 < (ulong)(uVar149 < DAT_0012a0c0));
    uVar137 = (ulong)(uVar146 < DAT_0012a0d0 || uVar146 - DAT_0012a0d0 < uVar140);
    uVar142 = (uVar147 - DAT_0012a0d8) - uVar137;
    uVar139 = (uVar151 - DAT_0012a0c8) - (ulong)(uVar149 < DAT_0012a0c0);
    uVar141 = uVar149 - DAT_0012a0c0;
    uVar140 = (uVar146 - DAT_0012a0d0) - uVar140;
    if (uVar148 + uVar138 + uVar150 + (ulong)((char)((unkuint9)Var50 >> 0x40) != '\0') +
        (ulong)((char)((unkuint9)Var49 >> 0x40) != '\0') <
        (ulong)(uVar147 < DAT_0012a0d8 || uVar147 - DAT_0012a0d8 < uVar137)) {
      uVar142 = uVar147;
      uVar139 = uVar151;
      uVar141 = uVar149;
      uVar140 = uVar146;
    }
    *param_1 = uVar141;
    param_1[1] = uVar139;
    param_1[2] = uVar140;
    param_1[3] = uVar142;
    return SUB168(auVar83 * auVar116,8);
  }
  uVar138 = *param_3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar138;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *param_2;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = SUB168(auVar1 * auVar25,8);
  uVar137 = SUB168(auVar1 * auVar25,0);
  auVar127._8_8_ = 0;
  auVar127._0_8_ = uVar137;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar138;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[1];
  auVar124 = auVar2 * auVar26 + auVar124;
  uVar141 = auVar124._0_8_;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar124._8_8_;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar138;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[2];
  auVar125 = auVar3 * auVar27 + auVar125;
  uVar146 = auVar125._0_8_;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = auVar125._8_8_;
  uVar137 = uVar137 * DAT_0012a0e0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar138;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[3];
  auVar126 = auVar4 * auVar28 + auVar126;
  uVar148 = auVar126._0_8_;
  uVar139 = auVar126._8_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar137;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = DAT_0012a0c0;
  auVar127 = auVar5 * auVar29 + auVar127;
  uVar140 = auVar127._8_8_;
  uVar147 = uVar146 - uVar137;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = DAT_0012a0c8;
  uVar138 = SUB168(auVar6 * auVar30,0);
  uVar142 = uVar141 + uVar140;
  uVar141 = SUB168(auVar6 * auVar30,8) + (ulong)CARRY8(uVar141,uVar140);
  auVar128._8_8_ = 0;
  auVar128._0_8_ = uVar142 + uVar138;
  uVar138 = (ulong)CARRY8(uVar142,uVar138);
  uVar140 = uVar147 + uVar141;
  uVar142 = uVar140 + uVar138;
  uVar140 = (uVar137 - (uVar146 < uVar137)) +
            (ulong)(CARRY8(uVar147,uVar141) || CARRY8(uVar140,uVar138));
  uVar146 = uVar148 - (uVar137 << 0x20);
  uVar138 = param_3[1];
  uVar141 = (uVar137 - (uVar137 >> 0x20)) - (ulong)(uVar148 < uVar137 << 0x20);
  uVar147 = uVar146 + uVar140;
  uVar140 = (ulong)CARRY8(uVar146,uVar140);
  uVar137 = uVar139 + uVar141;
  uVar150 = uVar137 + uVar140;
  uVar153 = auVar127._0_8_ + (ulong)(CARRY8(uVar139,uVar141) || CARRY8(uVar137,uVar140));
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar138;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = *param_2;
  auVar128 = auVar7 * auVar31 + auVar128;
  lVar143 = auVar128._0_8_;
  uVar140 = auVar128._8_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar138;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[1];
  auVar131[8] = CARRY8(uVar142,uVar140);
  auVar131._0_8_ = uVar142 + uVar140;
  auVar131._9_7_ = 0;
  auVar131 = auVar8 * auVar32 + auVar131;
  uVar141 = auVar131._0_8_;
  uVar140 = auVar131._8_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar138;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[2];
  auVar132[8] = CARRY8(uVar147,uVar140);
  auVar132._0_8_ = uVar147 + uVar140;
  auVar132._9_7_ = 0;
  auVar132 = auVar9 * auVar33 + auVar132;
  uVar148 = auVar132._0_8_;
  uVar140 = auVar132._8_8_;
  uVar146 = lVar143 * DAT_0012a0e0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar138;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[3];
  uVar138 = SUB168(auVar10 * auVar34,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar10 * auVar34,8) + (ulong)CARRY8(uVar150,uVar140);
  uVar151 = uVar137 + uVar138;
  uVar140 = (ulong)CARRY8(uVar137,uVar138);
  uVar139 = uVar153 + uVar142;
  uVar154 = uVar139 + uVar140;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar146;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = DAT_0012a0c0;
  auVar121._8_8_ = auVar121._0_8_;
  auVar121._0_8_ = lVar143;
  auVar121 = auVar11 * auVar35 + auVar121;
  uVar137 = auVar121._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar146;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = DAT_0012a0c8;
  uVar138 = SUB168(auVar12 * auVar36,0);
  uVar147 = uVar141 + uVar137;
  uVar141 = SUB168(auVar12 * auVar36,8) + (ulong)CARRY8(uVar141,uVar137);
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar147 + uVar138;
  uVar138 = (ulong)CARRY8(uVar147,uVar138);
  uVar137 = uVar150 + uVar141;
  uVar149 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar148 < uVar146)) +
            (ulong)(CARRY8(uVar150,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar151 - (uVar146 << 0x20);
  uVar138 = param_3[2];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulong)(uVar151 < uVar146 << 0x20);
  uVar148 = uVar141 + uVar137;
  uVar137 = (ulong)CARRY8(uVar141,uVar137);
  uVar141 = uVar154 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar147 = (ulong)(CARRY8(uVar153,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulong)(CARRY8(uVar154,uVar146) || CARRY8(uVar141,uVar137));
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar138;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  auVar129 = auVar13 * auVar37 + auVar129;
  lVar143 = auVar129._0_8_;
  uVar140 = auVar129._8_8_;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar138;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar133[8] = CARRY8(uVar149,uVar140);
  auVar133._0_8_ = uVar149 + uVar140;
  auVar133._9_7_ = 0;
  auVar133 = auVar14 * auVar38 + auVar133;
  uVar141 = auVar133._0_8_;
  uVar140 = auVar133._8_8_;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar138;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[2];
  auVar134[8] = CARRY8(uVar148,uVar140);
  auVar134._0_8_ = uVar148 + uVar140;
  auVar134._9_7_ = 0;
  auVar134 = auVar15 * auVar39 + auVar134;
  uVar149 = auVar134._0_8_;
  uVar140 = auVar134._8_8_;
  uVar146 = lVar143 * DAT_0012a0e0;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar138;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[3];
  uVar138 = SUB168(auVar16 * auVar40,0);
  uVar137 = uVar150 + uVar140;
  uVar142 = SUB168(auVar16 * auVar40,8) + (ulong)CARRY8(uVar150,uVar140);
  uVar154 = uVar137 + uVar138;
  uVar140 = (ulong)CARRY8(uVar137,uVar138);
  uVar139 = uVar147 + uVar142;
  uVar148 = uVar139 + uVar140;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar146;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = DAT_0012a0c0;
  auVar1 = auVar17 * auVar41 + auVar122;
  auVar122._8_8_ = auVar1._0_8_;
  auVar122._0_8_ = lVar143;
  uVar137 = auVar1._8_8_;
  uVar151 = uVar149 - uVar146;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar146;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = DAT_0012a0c8;
  uVar138 = SUB168(auVar18 * auVar42,0);
  uVar150 = uVar141 + uVar137;
  uVar141 = SUB168(auVar18 * auVar42,8) + (ulong)CARRY8(uVar141,uVar137);
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar150 + uVar138;
  uVar138 = (ulong)CARRY8(uVar150,uVar138);
  uVar137 = uVar151 + uVar141;
  uVar153 = uVar137 + uVar138;
  uVar137 = (uVar146 - (uVar149 < uVar146)) +
            (ulong)(CARRY8(uVar151,uVar141) || CARRY8(uVar137,uVar138));
  uVar141 = uVar154 - (uVar146 << 0x20);
  uVar138 = param_3[3];
  uVar146 = (uVar146 - (uVar146 >> 0x20)) - (ulong)(uVar154 < uVar146 << 0x20);
  uVar149 = uVar141 + uVar137;
  uVar137 = (ulong)CARRY8(uVar141,uVar137);
  uVar141 = uVar148 + uVar146;
  uVar150 = uVar141 + uVar137;
  uVar154 = (ulong)(CARRY8(uVar147,uVar142) || CARRY8(uVar139,uVar140)) +
            (ulong)(CARRY8(uVar148,uVar146) || CARRY8(uVar141,uVar137));
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar138;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = *param_2;
  auVar130 = auVar19 * auVar43 + auVar130;
  lVar143 = auVar130._0_8_;
  uVar140 = auVar130._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar138;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[1];
  auVar135[8] = CARRY8(uVar153,uVar140);
  auVar135._0_8_ = uVar153 + uVar140;
  auVar135._9_7_ = 0;
  auVar135 = auVar20 * auVar44 + auVar135;
  uVar141 = auVar135._0_8_;
  uVar140 = auVar135._8_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar138;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[2];
  auVar136[8] = CARRY8(uVar149,uVar140);
  auVar136._0_8_ = uVar149 + uVar140;
  auVar136._9_7_ = 0;
  auVar136 = auVar21 * auVar45 + auVar136;
  uVar148 = auVar136._0_8_;
  uVar140 = auVar136._8_8_;
  uVar146 = lVar143 * DAT_0012a0e0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar138;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[3];
  uVar138 = SUB168(auVar22 * auVar46,0);
  uVar137 = uVar150 + uVar140;
  uVar149 = SUB168(auVar22 * auVar46,8) + (ulong)CARRY8(uVar150,uVar140);
  uVar142 = uVar137 + uVar138;
  uVar138 = (ulong)CARRY8(uVar137,uVar138);
  uVar137 = uVar154 + uVar149;
  uVar144 = uVar137 + uVar138;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar146;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = DAT_0012a0c0;
  auVar1 = auVar23 * auVar47 + auVar123;
  auVar123._8_8_ = auVar1._0_8_;
  auVar123._0_8_ = lVar143;
  uVar139 = auVar1._8_8_;
  uVar150 = uVar148 - uVar146;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar146;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = DAT_0012a0c8;
  uVar140 = SUB168(auVar24 * auVar48,0);
  uVar147 = uVar141 + uVar139;
  uVar141 = SUB168(auVar24 * auVar48,8) + (ulong)CARRY8(uVar141,uVar139);
  uVar152 = uVar147 + uVar140;
  uVar140 = (ulong)CARRY8(uVar147,uVar140);
  uVar139 = uVar150 + uVar141;
  uVar155 = uVar139 + uVar140;
  uVar139 = (uVar146 - (uVar148 < uVar146)) +
            (ulong)(CARRY8(uVar150,uVar141) || CARRY8(uVar139,uVar140));
  uVar150 = uVar146 << 0x20;
  uVar140 = uVar142 - uVar150;
  uVar151 = (uVar146 - (uVar146 >> 0x20)) - (ulong)(uVar142 < uVar150);
  uVar153 = uVar140 + uVar139;
  uVar140 = (ulong)CARRY8(uVar140,uVar139);
  uVar139 = uVar144 + uVar151;
  uVar145 = uVar139 + uVar140;
  uVar141 = (ulong)(uVar155 < DAT_0012a0c8 ||
                   uVar155 - DAT_0012a0c8 < (ulong)(uVar152 < DAT_0012a0c0));
  uVar142 = (ulong)(uVar153 < DAT_0012a0d0 || uVar153 - DAT_0012a0d0 < uVar141);
  uVar148 = (uVar145 - DAT_0012a0d8) - uVar142;
  uVar146 = (uVar155 - DAT_0012a0c8) - (ulong)(uVar152 < DAT_0012a0c0);
  uVar141 = (uVar153 - DAT_0012a0d0) - uVar141;
  uVar147 = uVar152 - DAT_0012a0c0;
  if ((byte)((CARRY8(uVar154,uVar149) || CARRY8(uVar137,uVar138)) +
            (CARRY8(uVar144,uVar151) || CARRY8(uVar139,uVar140))) <
      (uVar145 < DAT_0012a0d8 || uVar145 - DAT_0012a0d8 < uVar142)) {
    uVar148 = uVar145;
    uVar146 = uVar155;
    uVar141 = uVar153;
    uVar147 = uVar152;
  }
  *param_1 = uVar147;
  param_1[1] = uVar146;
  param_1[2] = uVar141;
  param_1[3] = uVar148;
  return uVar150;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ecp_nistz256_ord_sqr_mont(ulong *param_1,ulong *param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  unkint9 Var37;
  unkint9 Var38;
  unkint9 Var39;
  unkint9 Var40;
  unkint9 Var41;
  unkint9 Var42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulong uVar103;
  ulong uVar104;
  long lVar105;
  ulong uVar106;
  ulong uVar107;
  ulong uVar108;
  ulong uVar109;
  ulong uVar110;
  ulong uVar111;
  ulong uVar112;
  ulong uVar113;
  ulong uVar114;
  ulong uVar115;
  ulong uVar116;
  ulong uVar117;
  ulong uVar118;
  
  if ((_DAT_0012b008 & 0x80100) != 0x80100) {
    uVar110 = *param_2;
    uVar107 = param_2[1];
    uVar106 = param_2[2];
    uVar111 = param_2[3];
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar107;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar110;
      auVar99._8_8_ = 0;
      auVar99._0_8_ = SUB168(auVar1 * auVar19,8);
      uVar103 = SUB168(auVar1 * auVar19,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar106;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar110;
      auVar99 = auVar2 * auVar20 + auVar99;
      uVar112 = auVar99._0_8_;
      auVar100._8_8_ = 0;
      auVar100._0_8_ = auVar99._8_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar111;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar110;
      auVar100 = auVar3 * auVar21 + auVar100;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = auVar100._0_8_;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = auVar100._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar111;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar106;
      uVar104 = SUB168(auVar4 * auVar22,0);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar106;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar107;
      auVar101 = auVar5 * auVar23 + auVar101;
      uVar113 = auVar101._0_8_;
      uVar108 = auVar101._8_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar111;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar107;
      auVar102 = auVar6 * auVar24 + auVar102;
      uVar114 = auVar102._0_8_;
      uVar109 = auVar102._8_8_;
      uVar115 = uVar114 + uVar108;
      uVar108 = (ulong)CARRY8(uVar114,uVar108);
      uVar114 = uVar104 + uVar109;
      uVar116 = uVar114 + uVar108;
      uVar118 = SUB168(auVar4 * auVar22,8) +
                (ulong)(CARRY8(uVar104,uVar109) || CARRY8(uVar114,uVar108));
      uVar109 = uVar112 * 2 + (ulong)CARRY8(uVar103,uVar103);
      uVar108 = (ulong)(CARRY8(uVar112,uVar112) ||
                       CARRY8(uVar112 * 2,(ulong)CARRY8(uVar103,uVar103)));
      uVar112 = uVar113 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar113,uVar113) || CARRY8(uVar113 * 2,uVar108));
      uVar113 = uVar115 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar115,uVar115) || CARRY8(uVar115 * 2,uVar108));
      uVar117 = uVar116 * 2 + uVar108;
      uVar108 = (ulong)(CARRY8(uVar116,uVar116) || CARRY8(uVar116 * 2,uVar108));
      uVar116 = uVar118 * 2 + uVar108;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar110;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar110;
      uVar110 = SUB168(auVar7 * auVar25,8);
      lVar105 = SUB168(auVar7 * auVar25,0);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar107;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar107;
      uVar114 = SUB168(auVar8 * auVar26,0);
      uVar104 = uVar103 * 2 + uVar110;
      uVar110 = (ulong)CARRY8(uVar103 * 2,uVar110);
      uVar107 = uVar109 + uVar114;
      uVar103 = uVar107 + uVar110;
      uVar110 = SUB168(auVar8 * auVar26,8) +
                (ulong)(CARRY8(uVar109,uVar114) || CARRY8(uVar107,uVar110));
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar106;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar106;
      uVar106 = SUB168(auVar9 * auVar27,0);
      uVar109 = uVar112 + uVar110;
      uVar110 = (ulong)CARRY8(uVar112,uVar110);
      uVar107 = uVar113 + uVar106;
      uVar115 = uVar107 + uVar110;
      uVar110 = SUB168(auVar9 * auVar27,8) +
                (ulong)(CARRY8(uVar113,uVar106) || CARRY8(uVar107,uVar110));
      uVar114 = lVar105 * DAT_0012a0e0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar111;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar111;
      uVar106 = SUB168(auVar10 * auVar28,0);
      uVar113 = uVar117 + uVar110;
      uVar110 = (ulong)CARRY8(uVar117,uVar110);
      uVar107 = uVar116 + uVar106;
      uVar117 = uVar107 + uVar110;
      uVar116 = (ulong)(CARRY8(uVar118,uVar118) || CARRY8(uVar118 * 2,uVar108)) +
                SUB168(auVar10 * auVar28,8) +
                (ulong)(CARRY8(uVar116,uVar106) || CARRY8(uVar107,uVar110));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = DAT_0012a0c0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar114;
      auVar43 = auVar11 * auVar29 + auVar95;
      auVar95._8_8_ = auVar43._0_8_;
      auVar95._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar108 = uVar103 - uVar114;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = DAT_0012a0c8;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar114;
      uVar110 = SUB168(auVar12 * auVar30,0);
      uVar111 = uVar104 + uVar107;
      uVar106 = SUB168(auVar12 * auVar30,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar111 + uVar110;
      uVar110 = (ulong)CARRY8(uVar111,uVar110);
      uVar107 = uVar108 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar114 - (uVar103 < uVar114)) +
                (ulong)(CARRY8(uVar108,uVar106) || CARRY8(uVar107,uVar110));
      uVar103 = lVar105 * DAT_0012a0e0;
      uVar107 = uVar109 - (uVar114 << 0x20);
      uVar112 = uVar107 + uVar110;
      uVar111 = ((uVar114 - (uVar114 >> 0x20)) - (ulong)(uVar109 < uVar114 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_0012a0c0;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar103;
      auVar43 = auVar13 * auVar31 + auVar96;
      auVar96._8_8_ = auVar43._0_8_;
      auVar96._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar114 = uVar112 - uVar103;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = DAT_0012a0c8;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar103;
      uVar110 = SUB168(auVar14 * auVar32,0);
      uVar108 = uVar104 + uVar107;
      uVar106 = SUB168(auVar14 * auVar32,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar108 + uVar110;
      uVar110 = (ulong)CARRY8(uVar108,uVar110);
      uVar107 = uVar114 + uVar106;
      uVar104 = uVar107 + uVar110;
      uVar110 = (uVar103 - (uVar112 < uVar103)) +
                (ulong)(CARRY8(uVar114,uVar106) || CARRY8(uVar107,uVar110));
      uVar109 = lVar105 * DAT_0012a0e0;
      uVar107 = uVar111 - (uVar103 << 0x20);
      uVar108 = uVar107 + uVar110;
      uVar103 = ((uVar103 - (uVar103 >> 0x20)) - (ulong)(uVar111 < uVar103 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_0012a0c0;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar109;
      auVar43 = auVar15 * auVar33 + auVar97;
      auVar97._8_8_ = auVar43._0_8_;
      auVar97._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar111 = uVar108 - uVar109;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_0012a0c8;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar109;
      uVar110 = SUB168(auVar16 * auVar34,0);
      uVar114 = uVar104 + uVar107;
      uVar106 = SUB168(auVar16 * auVar34,8) + (ulong)CARRY8(uVar104,uVar107);
      lVar105 = uVar114 + uVar110;
      uVar110 = (ulong)CARRY8(uVar114,uVar110);
      uVar107 = uVar111 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar109 - (uVar108 < uVar109)) +
                (ulong)(CARRY8(uVar111,uVar106) || CARRY8(uVar107,uVar110));
      uVar112 = lVar105 * DAT_0012a0e0;
      uVar107 = uVar103 - (uVar109 << 0x20);
      uVar104 = uVar107 + uVar110;
      uVar109 = ((uVar109 - (uVar109 >> 0x20)) - (ulong)(uVar103 < uVar109 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = DAT_0012a0c0;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar112;
      auVar43 = auVar17 * auVar35 + auVar98;
      auVar98._8_8_ = auVar43._0_8_;
      auVar98._0_8_ = lVar105;
      uVar107 = auVar43._8_8_;
      uVar103 = uVar104 - uVar112;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_0012a0c8;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar112;
      uVar110 = SUB168(auVar18 * auVar36,0);
      uVar111 = uVar114 + uVar107;
      uVar106 = SUB168(auVar18 * auVar36,8) + (ulong)CARRY8(uVar114,uVar107);
      uVar108 = uVar111 + uVar110;
      uVar110 = (ulong)CARRY8(uVar111,uVar110);
      uVar107 = uVar103 + uVar106;
      uVar114 = uVar107 + uVar110;
      uVar110 = (uVar112 - (uVar104 < uVar112)) +
                (ulong)(CARRY8(uVar103,uVar106) || CARRY8(uVar107,uVar110));
      uVar107 = uVar109 - (uVar112 << 0x20);
      uVar103 = uVar107 + uVar110;
      uVar109 = ((uVar112 - (uVar112 >> 0x20)) - (ulong)(uVar109 < uVar112 << 0x20)) +
                (ulong)CARRY8(uVar107,uVar110);
      uVar110 = uVar108 + uVar115;
      uVar106 = (ulong)CARRY8(uVar108,uVar115);
      uVar111 = uVar114 + uVar113;
      uVar107 = uVar111 + uVar106;
      uVar111 = (ulong)(CARRY8(uVar114,uVar113) || CARRY8(uVar111,uVar106));
      uVar108 = uVar103 + uVar117;
      uVar106 = uVar108 + uVar111;
      uVar108 = (ulong)(CARRY8(uVar103,uVar117) || CARRY8(uVar108,uVar111));
      uVar114 = uVar109 + uVar116;
      uVar111 = uVar114 + uVar108;
      uVar103 = (ulong)(uVar107 < DAT_0012a0c8 ||
                       uVar107 - DAT_0012a0c8 < (ulong)(uVar110 < DAT_0012a0c0));
      uVar104 = (ulong)(uVar106 < DAT_0012a0d0 || uVar106 - DAT_0012a0d0 < uVar103);
      if ((uVar111 < DAT_0012a0d8 || uVar111 - DAT_0012a0d8 < uVar104) <=
          (CARRY8(uVar109,uVar116) || CARRY8(uVar114,uVar108))) {
        uVar111 = (uVar111 - DAT_0012a0d8) - uVar104;
        uVar107 = (uVar107 - DAT_0012a0c8) - (ulong)(uVar110 < DAT_0012a0c0);
        uVar106 = (uVar106 - DAT_0012a0d0) - uVar103;
        uVar110 = uVar110 - DAT_0012a0c0;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    *param_1 = uVar110;
    param_1[1] = uVar107;
    param_1[2] = uVar106;
    param_1[3] = uVar111;
    return uVar107;
  }
  uVar110 = *param_2;
  uVar107 = param_2[1];
  uVar106 = param_2[2];
  uVar111 = param_2[3];
  do {
    auVar43._8_8_ = 0;
    auVar43._0_8_ = uVar110;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = uVar107;
    uVar104 = SUB168(auVar43 * auVar69,0);
    uVar114 = SUB168(auVar43 * auVar69,8);
    auVar44._8_8_ = 0;
    auVar44._0_8_ = uVar110;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = uVar106;
    uVar108 = SUB168(auVar44 * auVar70,0);
    uVar112 = SUB168(auVar44 * auVar70,8);
    auVar45._8_8_ = 0;
    auVar45._0_8_ = uVar110;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = uVar111;
    uVar103 = SUB168(auVar45 * auVar71,0);
    uVar109 = uVar114 + uVar108;
    uVar108 = (ulong)CARRY8(uVar114,uVar108);
    uVar114 = uVar112 + uVar103;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar107;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = uVar106;
    Var37 = (unkuint9)(uVar114 + uVar108) + (unkuint9)SUB168(auVar46 * auVar72,0) + (unkuint9)0;
    uVar113 = (ulong)Var37;
    Var39 = (unkuint9)
            (SUB168(auVar45 * auVar71,8) +
            (ulong)(CARRY8(uVar112,uVar103) || CARRY8(uVar114,uVar108))) +
            (unkuint9)SUB168(auVar46 * auVar72,8) + (unkuint9)0;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar107;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = uVar111;
    Var37 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar47 * auVar73,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar114 = (ulong)Var37;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar106;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = uVar111;
    Var38 = (unkuint9)uVar104 + (unkuint9)uVar104 + (unkuint9)0;
    Var39 = (unkuint9)
            (SUB168(auVar47 * auVar73,8) + (ulong)((char)((unkuint9)Var39 >> 0x40) != '\0') +
            (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0')) +
            (unkuint9)SUB168(auVar48 * auVar74,0) + (unkuint9)0;
    uVar103 = (ulong)Var39;
    Var37 = (unkuint9)uVar109 + (unkuint9)uVar109 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)SUB168(auVar48 * auVar74,8) + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar104 = (ulong)Var40;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = uVar110;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar110;
    uVar108 = SUB168(auVar49 * auVar75,0);
    Var39 = (unkuint9)uVar113 + (unkuint9)uVar113 +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar49 * auVar75,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)uVar114 + (unkuint9)uVar114 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar50._8_8_ = 0;
    auVar50._0_8_ = uVar107;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar107;
    Var40 = (unkuint9)uVar103 + (unkuint9)uVar103 +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var42 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar50 * auVar76,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)uVar104 + (unkuint9)uVar104 +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar51._8_8_ = 0;
    auVar51._0_8_ = uVar106;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = uVar106;
    Var39 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar50 * auVar76,8) +
            (unkuint9)((char)((unkuint9)Var42 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar51 * auVar77,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar106 = (ulong)Var38;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar51 * auVar77,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar104 = (ulong)Var38;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = uVar111;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = uVar111;
    Var38 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar52 * auVar78,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar109 = (ulong)Var38;
    uVar112 = (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0') + SUB168(auVar52 * auVar78,8) +
              (ulong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar108 * DAT_0012a0e0;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = uVar110;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = DAT_0012a0c0;
    Var37 = (unkuint9)uVar108 + (unkuint9)SUB168(auVar53 * auVar79,0) + (unkuint9)0;
    Var40 = (unkuint9)(ulong)Var41 + (unkuint9)SUB168(auVar53 * auVar79,8) + (unkuint9)0;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = uVar110;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = DAT_0012a0c8;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar54 * auVar80,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar107 = (ulong)Var38;
    Var40 = (unkuint9)(ulong)Var42 + (unkuint9)SUB168(auVar54 * auVar80,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar55._8_8_ = 0;
    auVar55._0_8_ = uVar110;
    auVar81._8_8_ = 0;
    auVar81._0_8_ = DAT_0012a0d0;
    Var38 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar55 * auVar81,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar55 * auVar81,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar56._8_8_ = 0;
    auVar56._0_8_ = uVar110;
    auVar82._8_8_ = 0;
    auVar82._0_8_ = DAT_0012a0d8;
    Var39 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar56 * auVar82,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar56 * auVar82,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_0012a0e0;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = uVar110;
    auVar83._8_8_ = 0;
    auVar83._0_8_ = DAT_0012a0c0;
    Var40 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar57 * auVar83,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar57 * auVar83,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar58._8_8_ = 0;
    auVar58._0_8_ = uVar110;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = DAT_0012a0c8;
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar58 * auVar84,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar107 = (ulong)Var41;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar58 * auVar84,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar59._8_8_ = 0;
    auVar59._0_8_ = uVar110;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = DAT_0012a0d0;
    Var39 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar59 * auVar85,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar59 * auVar85,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar60._8_8_ = 0;
    auVar60._0_8_ = uVar110;
    auVar86._8_8_ = 0;
    auVar86._0_8_ = DAT_0012a0d8;
    Var41 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar60 * auVar86,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar60 * auVar86,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_0012a0e0;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = uVar110;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = DAT_0012a0c0;
    Var37 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar61 * auVar87,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    Var39 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar61 * auVar87,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    auVar62._8_8_ = 0;
    auVar62._0_8_ = uVar110;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = DAT_0012a0c8;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar62 * auVar88,0) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    uVar107 = (ulong)Var38;
    Var39 = (unkuint9)(ulong)Var41 + (unkuint9)SUB168(auVar62 * auVar88,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar63._8_8_ = 0;
    auVar63._0_8_ = uVar110;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = DAT_0012a0d0;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar63 * auVar89,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar63 * auVar89,8) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    auVar64._8_8_ = 0;
    auVar64._0_8_ = uVar110;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = DAT_0012a0d8;
    Var39 = (unkuint9)(ulong)Var40 + (unkuint9)SUB168(auVar64 * auVar90,0) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    Var40 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar64 * auVar90,8) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var37 = (unkuint9)(ulong)Var40 + (unkuint9)0 +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar110 = uVar107 * DAT_0012a0e0;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar110;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = DAT_0012a0c0;
    Var40 = (unkuint9)uVar107 + (unkuint9)SUB168(auVar65 * auVar91,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    Var38 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar65 * auVar91,8) +
            (unkuint9)((char)((unkuint9)Var37 >> 0x40) != '\0');
    auVar66._8_8_ = 0;
    auVar66._0_8_ = uVar110;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = DAT_0012a0c8;
    Var41 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar66 * auVar92,0) +
            (unkuint9)((char)((unkuint9)Var40 >> 0x40) != '\0');
    uVar107 = (ulong)Var41;
    Var38 = (unkuint9)(ulong)Var39 + (unkuint9)SUB168(auVar66 * auVar92,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar67._8_8_ = 0;
    auVar67._0_8_ = uVar110;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = DAT_0012a0d0;
    Var39 = (unkuint9)(ulong)Var38 + (unkuint9)SUB168(auVar67 * auVar93,0) +
            (unkuint9)((char)((unkuint9)Var41 >> 0x40) != '\0');
    uVar108 = (ulong)Var39;
    Var37 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar67 * auVar93,8) +
            (unkuint9)((char)((unkuint9)Var38 >> 0x40) != '\0');
    auVar68._8_8_ = 0;
    auVar68._0_8_ = uVar110;
    auVar94._8_8_ = 0;
    auVar94._0_8_ = DAT_0012a0d8;
    Var38 = (unkuint9)(ulong)Var37 + (unkuint9)SUB168(auVar68 * auVar94,0) +
            (unkuint9)((char)((unkuint9)Var39 >> 0x40) != '\0');
    uVar114 = (ulong)Var38;
    uVar103 = (long)Var40 + SUB168(auVar68 * auVar94,8) +
              (ulong)((char)((unkuint9)Var37 >> 0x40) != '\0') +
              (ulong)((char)((unkuint9)Var38 >> 0x40) != '\0');
    uVar110 = uVar106 + uVar107;
    uVar106 = (ulong)CARRY8(uVar106,uVar107);
    uVar111 = uVar108 + uVar104;
    uVar107 = uVar111 + uVar106;
    uVar111 = (ulong)(CARRY8(uVar108,uVar104) || CARRY8(uVar111,uVar106));
    uVar108 = uVar114 + uVar109;
    uVar106 = uVar108 + uVar111;
    uVar108 = (ulong)(CARRY8(uVar114,uVar109) || CARRY8(uVar108,uVar111));
    uVar114 = uVar103 + uVar112;
    uVar111 = uVar114 + uVar108;
    uVar108 = (ulong)(CARRY8(uVar103,uVar112) || CARRY8(uVar114,uVar108));
    uVar114 = (ulong)(uVar107 < DAT_0012a0c8 ||
                     uVar107 - DAT_0012a0c8 < (ulong)(uVar110 < DAT_0012a0c0));
    uVar103 = (ulong)(uVar106 < DAT_0012a0d0 || uVar106 - DAT_0012a0d0 < uVar114);
    uVar104 = (ulong)(uVar111 < DAT_0012a0d8 || uVar111 - DAT_0012a0d8 < uVar103);
    if (uVar104 <= uVar108) {
      uVar111 = (uVar111 - DAT_0012a0d8) - uVar103;
      uVar107 = (uVar107 - DAT_0012a0c8) - (ulong)(uVar110 < DAT_0012a0c0);
      uVar110 = uVar110 - DAT_0012a0c0;
      uVar106 = (uVar106 - DAT_0012a0d0) - uVar114;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar110;
  param_1[1] = uVar107;
  param_1[2] = uVar106;
  param_1[3] = uVar111;
  return uVar108 - uVar104;
}



undefined8 ecp_nistz256_ord_mul_montx(ulong *param_1,ulong *param_2,ulong *param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulong uVar73;
  ulong uVar74;
  ulong uVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  
  uVar76 = *param_3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar76;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *param_2;
  uVar78 = SUB168(auVar7 * auVar40,0);
  uVar79 = SUB168(auVar7 * auVar40,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar76;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[1];
  uVar73 = SUB168(auVar8 * auVar41,0);
  uVar80 = SUB168(auVar8 * auVar41,8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar76;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  uVar77 = SUB168(auVar9 * auVar42,0);
  uVar81 = SUB168(auVar9 * auVar42,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar76;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[3];
  uVar74 = SUB168(auVar10 * auVar43,0);
  uVar75 = uVar78 * DAT_0012a0e0;
  uVar76 = (ulong)CARRY8(uVar79,uVar73);
  uVar83 = uVar80 + uVar77;
  uVar77 = (ulong)(CARRY8(uVar80,uVar77) || CARRY8(uVar83,uVar76));
  uVar80 = uVar81 + uVar74;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar75;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = DAT_0012a0c0;
  Var1 = (unkuint9)uVar78 + (unkuint9)SUB168(auVar11 * auVar44,0) + (unkuint9)0;
  uVar78 = (ulong)Var1;
  Var2 = (unkuint9)(uVar79 + uVar73) + (unkuint9)SUB168(auVar11 * auVar44,8) + (unkuint9)0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar75;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = DAT_0012a0c8;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar12 * auVar45,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(uVar83 + uVar76) + (unkuint9)SUB168(auVar12 * auVar45,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar75;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = DAT_0012a0d0;
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar13 * auVar46,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(uVar80 + uVar77) + (unkuint9)SUB168(auVar13 * auVar46,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar75;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = DAT_0012a0d8;
  uVar76 = param_3[1];
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar14 * auVar47,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)
         (SUB168(auVar10 * auVar43,8) + (ulong)(CARRY8(uVar81,uVar74) || CARRY8(uVar80,uVar77))) +
         (unkuint9)SUB168(auVar14 * auVar47,8) + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar78 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar78 + ((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar76;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar15 * auVar48,0) +
         (unkuint9)CARRY8(uVar83,uVar77);
  uVar80 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar15 * auVar48,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar76;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar16 * auVar49,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar16 * auVar49,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar76;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar17 * auVar50,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar17 * auVar50,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar76;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[3];
  uVar76 = uVar80 * DAT_0012a0e0;
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar18 * auVar51,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar83 + uVar77) + (unkuint9)SUB168(auVar18 * auVar51,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar78 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar78 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar76;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = DAT_0012a0c0;
  Var5 = (unkuint9)uVar80 + (unkuint9)SUB168(auVar19 * auVar52,0) + (unkuint9)CARRY8(uVar83,uVar77);
  uVar80 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar19 * auVar52,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar76;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = DAT_0012a0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar20 * auVar53,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar20 * auVar53,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar76;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = DAT_0012a0d0;
  Var2 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar21 * auVar54,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar21 * auVar54,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar76;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = DAT_0012a0d8;
  uVar76 = param_3[2];
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar22 * auVar55,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar22 * auVar55,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar80 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar83 + uVar77 + uVar80 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar76;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar56,0) +
         (unkuint9)CARRY8(uVar83,uVar77);
  uVar73 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar23 * auVar56,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar76;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar24 * auVar57,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar24 * auVar57,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar76;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar25 * auVar58,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar25 * auVar58,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar76;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[3];
  uVar76 = uVar73 * DAT_0012a0e0;
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar26 * auVar59,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar83 + uVar77) + (unkuint9)SUB168(auVar26 * auVar59,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar80 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar83 = uVar80 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar76;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = DAT_0012a0c0;
  Var5 = (unkuint9)uVar73 + (unkuint9)SUB168(auVar27 * auVar60,0) + (unkuint9)CARRY8(uVar83,uVar77);
  uVar73 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar27 * auVar60,8) +
         (unkuint9)(SCARRY8(uVar83,0) != SCARRY8(uVar83,uVar77));
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar76;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = DAT_0012a0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar28 * auVar61,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar28 * auVar61,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar76;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = DAT_0012a0d0;
  Var2 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar29 * auVar62,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar29 * auVar62,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar76;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = DAT_0012a0d8;
  uVar76 = param_3[3];
  Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar30 * auVar63,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar30 * auVar63,8) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar73 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar80 = uVar83 + uVar77 + uVar73 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar77 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar76;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = *param_2;
  Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar31 * auVar64,0) +
         (unkuint9)CARRY8(uVar80,uVar77);
  uVar74 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar31 * auVar64,8) +
         (unkuint9)(SCARRY8(uVar80,0) != SCARRY8(uVar80,uVar77));
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar76;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[1];
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar32 * auVar65,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar32 * auVar65,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar76;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[2];
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar33 * auVar66,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar33 * auVar66,8) +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar76;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[3];
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar74;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = DAT_0012a0e0;
  uVar83 = SUB168(auVar35 * auVar68,0);
  Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar34 * auVar67,0) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var5 = (unkuint9)(uVar80 + uVar77) + (unkuint9)SUB168(auVar34 * auVar67,8) +
         (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
  Var4 = (unkuint9)(ulong)Var5 + (unkuint9)uVar73 +
         (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
  uVar79 = uVar73 * 2 + (ulong)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar76 = (ulong)((char)((unkuint9)Var4 >> 0x40) != '\0');
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar83;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = DAT_0012a0c0;
  Var5 = (unkuint9)uVar74 + (unkuint9)SUB168(auVar36 * auVar69,0) + (unkuint9)CARRY8(uVar79,uVar76);
  uVar81 = (ulong)Var5;
  Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar36 * auVar69,8) +
         (unkuint9)(SCARRY8(uVar79,0) != SCARRY8(uVar79,uVar76));
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar83;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = DAT_0012a0c8;
  Var1 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar37 * auVar70,0) +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  uVar82 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar37 * auVar70,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar83;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = DAT_0012a0d0;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar38 * auVar71,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar84 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar38 * auVar71,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar83;
  auVar72._8_8_ = 0;
  auVar72._0_8_ = DAT_0012a0d8;
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar39 * auVar72,0) +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar75 = (ulong)Var1;
  Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar39 * auVar72,8) +
         (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
  Var1 = (unkuint9)(ulong)Var2 + (unkuint9)uVar81 +
         (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
  uVar78 = (ulong)Var1;
  uVar77 = (ulong)(uVar84 < DAT_0012a0c8 || uVar84 - DAT_0012a0c8 < (ulong)(uVar82 < DAT_0012a0c0));
  uVar83 = (ulong)(uVar75 < DAT_0012a0d0 || uVar75 - DAT_0012a0d0 < uVar77);
  uVar74 = (uVar78 - DAT_0012a0d8) - uVar83;
  uVar80 = (uVar84 - DAT_0012a0c8) - (ulong)(uVar82 < DAT_0012a0c0);
  uVar73 = uVar82 - DAT_0012a0c0;
  uVar77 = (uVar75 - DAT_0012a0d0) - uVar77;
  if (uVar79 + uVar76 + uVar81 + (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0') +
      (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') <
      (ulong)(uVar78 < DAT_0012a0d8 || uVar78 - DAT_0012a0d8 < uVar83)) {
    uVar74 = uVar78;
    uVar80 = uVar84;
    uVar73 = uVar82;
    uVar77 = uVar75;
  }
  *param_1 = uVar73;
  param_1[1] = uVar80;
  param_1[2] = uVar77;
  param_1[3] = uVar74;
  return SUB168(auVar35 * auVar68,8);
}



long ecp_nistz256_ord_sqr_montx(ulong *param_1,ulong *param_2,long param_3)

{
  unkint9 Var1;
  unkint9 Var2;
  unkint9 Var3;
  unkint9 Var4;
  unkint9 Var5;
  unkint9 Var6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulong uVar59;
  ulong uVar60;
  ulong uVar61;
  ulong uVar62;
  ulong uVar63;
  ulong uVar64;
  ulong uVar65;
  ulong uVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  
  uVar60 = *param_2;
  uVar63 = param_2[1];
  uVar69 = param_2[2];
  uVar68 = param_2[3];
  do {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar60;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar63;
    uVar62 = SUB168(auVar7 * auVar33,0);
    uVar64 = SUB168(auVar7 * auVar33,8);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar60;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar69;
    uVar59 = SUB168(auVar8 * auVar34,0);
    uVar66 = SUB168(auVar8 * auVar34,8);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar60;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar68;
    uVar61 = SUB168(auVar9 * auVar35,0);
    uVar65 = uVar64 + uVar59;
    uVar59 = (ulong)CARRY8(uVar64,uVar59);
    uVar64 = uVar66 + uVar61;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar63;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar69;
    Var1 = (unkuint9)(uVar64 + uVar59) + (unkuint9)SUB168(auVar10 * auVar36,0) + (unkuint9)0;
    uVar67 = (ulong)Var1;
    Var3 = (unkuint9)
           (SUB168(auVar9 * auVar35,8) + (ulong)(CARRY8(uVar66,uVar61) || CARRY8(uVar64,uVar59))) +
           (unkuint9)SUB168(auVar10 * auVar36,8) + (unkuint9)0;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar63;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar68;
    Var1 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar11 * auVar37,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar64 = (ulong)Var1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar69;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar68;
    Var2 = (unkuint9)uVar62 + (unkuint9)uVar62 + (unkuint9)0;
    Var3 = (unkuint9)
           (SUB168(auVar11 * auVar37,8) + (ulong)((char)((unkuint9)Var3 >> 0x40) != '\0') +
           (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0')) + (unkuint9)SUB168(auVar12 * auVar38,0)
           + (unkuint9)0;
    uVar61 = (ulong)Var3;
    Var1 = (unkuint9)uVar65 + (unkuint9)uVar65 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)SUB168(auVar12 * auVar38,8) + (unkuint9)0 +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar62 = (ulong)Var4;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar60;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar60;
    uVar59 = SUB168(auVar13 * auVar39,0);
    Var3 = (unkuint9)uVar67 + (unkuint9)uVar67 + (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar13 * auVar39,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)uVar64 + (unkuint9)uVar64 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar63;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar63;
    Var4 = (unkuint9)uVar61 + (unkuint9)uVar61 + (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var6 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar14 * auVar40,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var1 = (unkuint9)uVar62 + (unkuint9)uVar62 + (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar69;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar69;
    Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar14 * auVar40,8) +
           (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar15 * auVar41,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar69 = (ulong)Var2;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar15 * auVar41,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar62 = (ulong)Var2;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar68;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = uVar68;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar16 * auVar42,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar65 = (ulong)Var2;
    uVar66 = (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') + SUB168(auVar16 * auVar42,8) +
             (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar60 = uVar59 * DAT_0012a0e0;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar60;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = DAT_0012a0c0;
    Var1 = (unkuint9)uVar59 + (unkuint9)SUB168(auVar17 * auVar43,0) + (unkuint9)0;
    Var4 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar17 * auVar43,8) + (unkuint9)0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar60;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = DAT_0012a0c8;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar18 * auVar44,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar63 = (ulong)Var2;
    Var4 = (unkuint9)(ulong)Var6 + (unkuint9)SUB168(auVar18 * auVar44,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar60;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = DAT_0012a0d0;
    Var2 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar19 * auVar45,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar19 * auVar45,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar60;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = DAT_0012a0d8;
    Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar20 * auVar46,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar20 * auVar46,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_0012a0e0;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar60;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = DAT_0012a0c0;
    Var4 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar21 * auVar47,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar21 * auVar47,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar60;
    auVar48._8_8_ = 0;
    auVar48._0_8_ = DAT_0012a0c8;
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar22 * auVar48,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar63 = (ulong)Var5;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar22 * auVar48,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar60;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = DAT_0012a0d0;
    Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar23 * auVar49,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar23 * auVar49,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar60;
    auVar50._8_8_ = 0;
    auVar50._0_8_ = DAT_0012a0d8;
    Var5 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar24 * auVar50,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar24 * auVar50,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_0012a0e0;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar60;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = DAT_0012a0c0;
    Var1 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar25 * auVar51,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    Var3 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar25 * auVar51,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar60;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = DAT_0012a0c8;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar26 * auVar52,0) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    uVar63 = (ulong)Var2;
    Var3 = (unkuint9)(ulong)Var5 + (unkuint9)SUB168(auVar26 * auVar52,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar60;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = DAT_0012a0d0;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar27 * auVar53,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar27 * auVar53,8) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar60;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = DAT_0012a0d8;
    Var3 = (unkuint9)(ulong)Var4 + (unkuint9)SUB168(auVar28 * auVar54,0) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    Var4 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar28 * auVar54,8) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var1 = (unkuint9)(ulong)Var4 + (unkuint9)0 + (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar60 = uVar63 * DAT_0012a0e0;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar60;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = DAT_0012a0c0;
    Var4 = (unkuint9)uVar63 + (unkuint9)SUB168(auVar29 * auVar55,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    Var2 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar29 * auVar55,8) +
           (unkuint9)((char)((unkuint9)Var1 >> 0x40) != '\0');
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar60;
    auVar56._8_8_ = 0;
    auVar56._0_8_ = DAT_0012a0c8;
    Var5 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar30 * auVar56,0) +
           (unkuint9)((char)((unkuint9)Var4 >> 0x40) != '\0');
    uVar63 = (ulong)Var5;
    Var2 = (unkuint9)(ulong)Var3 + (unkuint9)SUB168(auVar30 * auVar56,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar60;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = DAT_0012a0d0;
    Var3 = (unkuint9)(ulong)Var2 + (unkuint9)SUB168(auVar31 * auVar57,0) +
           (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
    uVar59 = (ulong)Var3;
    Var1 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar31 * auVar57,8) +
           (unkuint9)((char)((unkuint9)Var2 >> 0x40) != '\0');
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar60;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = DAT_0012a0d8;
    Var2 = (unkuint9)(ulong)Var1 + (unkuint9)SUB168(auVar32 * auVar58,0) +
           (unkuint9)((char)((unkuint9)Var3 >> 0x40) != '\0');
    uVar64 = (ulong)Var2;
    uVar61 = (long)Var4 + SUB168(auVar32 * auVar58,8) +
             (ulong)((char)((unkuint9)Var1 >> 0x40) != '\0') +
             (ulong)((char)((unkuint9)Var2 >> 0x40) != '\0');
    uVar60 = uVar69 + uVar63;
    uVar69 = (ulong)CARRY8(uVar69,uVar63);
    uVar68 = uVar59 + uVar62;
    uVar63 = uVar68 + uVar69;
    uVar68 = (ulong)(CARRY8(uVar59,uVar62) || CARRY8(uVar68,uVar69));
    uVar59 = uVar64 + uVar65;
    uVar69 = uVar59 + uVar68;
    uVar59 = (ulong)(CARRY8(uVar64,uVar65) || CARRY8(uVar59,uVar68));
    uVar64 = uVar61 + uVar66;
    uVar68 = uVar64 + uVar59;
    uVar59 = (ulong)(CARRY8(uVar61,uVar66) || CARRY8(uVar64,uVar59));
    uVar64 = (ulong)(uVar63 < DAT_0012a0c8 || uVar63 - DAT_0012a0c8 < (ulong)(uVar60 < DAT_0012a0c0)
                    );
    uVar61 = (ulong)(uVar69 < DAT_0012a0d0 || uVar69 - DAT_0012a0d0 < uVar64);
    uVar62 = (ulong)(uVar68 < DAT_0012a0d8 || uVar68 - DAT_0012a0d8 < uVar61);
    if (uVar62 <= uVar59) {
      uVar68 = (uVar68 - DAT_0012a0d8) - uVar61;
      uVar63 = (uVar63 - DAT_0012a0c8) - (ulong)(uVar60 < DAT_0012a0c0);
      uVar60 = uVar60 - DAT_0012a0c0;
      uVar69 = (uVar69 - DAT_0012a0d0) - uVar64;
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  *param_1 = uVar60;
  param_1[1] = uVar63;
  param_1[2] = uVar69;
  param_1[3] = uVar68;
  return uVar59 - uVar62;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_to_mont
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((_DAT_0012b008 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(param_1,param_2 + -0x10,_DAT_0012a020,0x80100,param_5,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_mul_mont
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  if ((_DAT_0012b008 & 0x80100) == 0x80100) {
    __ecp_nistz256_mul_montx(param_1,param_2 + -0x10,*param_3,0x80100,param_5,*param_2);
  }
  else {
    __ecp_nistz256_mul_montq();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_sqr_mont(undefined8 param_1,undefined8 *param_2)

{
  if ((_DAT_0012b008 & 0x80100) == 0x80100) {
    __ecp_nistz256_sqr_montx(param_1,param_2 + -0x10,*param_2,0x80100,param_2[3]);
  }
  else {
    __ecp_nistz256_sqr_montq();
  }
  return;
}



void ecp_nistz256_from_mont(long *param_1,ulong *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  
  uVar18 = *param_2;
  uVar1 = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = DAT_0012a018;
  uVar12 = SUB168(auVar3 * auVar7,0);
  uVar15 = uVar1 + (uVar18 << 0x20);
  uVar13 = (ulong)CARRY8(uVar1,uVar18 << 0x20);
  uVar17 = param_2[2] + (uVar18 >> 0x20);
  uVar16 = uVar17 + uVar13;
  uVar18 = (ulong)(CARRY8(param_2[2],uVar18 >> 0x20) || CARRY8(uVar17,uVar13));
  uVar13 = param_2[3] + uVar12;
  uVar19 = uVar13 + uVar18;
  uVar12 = SUB168(auVar3 * auVar7,8) + (ulong)(CARRY8(param_2[3],uVar12) || CARRY8(uVar13,uVar18));
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = DAT_0012a018;
  uVar13 = SUB168(auVar4 * auVar8,0);
  uVar15 = uVar15 >> 0x20;
  uVar17 = uVar16 + (uVar1 << 0x20);
  uVar18 = (ulong)CARRY8(uVar16,uVar1 << 0x20);
  uVar1 = uVar19 + uVar15;
  uVar20 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar15) || CARRY8(uVar1,uVar18));
  uVar1 = uVar12 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar15 = SUB168(auVar4 * auVar8,8) + (ulong)(CARRY8(uVar12,uVar13) || CARRY8(uVar1,uVar18));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = DAT_0012a018;
  uVar13 = SUB168(auVar5 * auVar9,0);
  uVar17 = uVar17 >> 0x20;
  uVar12 = uVar20 + (uVar16 << 0x20);
  uVar18 = (ulong)CARRY8(uVar20,uVar16 << 0x20);
  uVar1 = uVar19 + uVar17;
  uVar16 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar17) || CARRY8(uVar1,uVar18));
  uVar1 = uVar15 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar17 = SUB168(auVar5 * auVar9,8) + (ulong)(CARRY8(uVar15,uVar13) || CARRY8(uVar1,uVar18));
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = DAT_0012a018;
  uVar13 = SUB168(auVar6 * auVar10,0);
  uVar12 = uVar12 >> 0x20;
  lVar14 = uVar16 + (uVar20 << 0x20);
  uVar18 = (ulong)CARRY8(uVar16,uVar20 << 0x20);
  uVar1 = uVar19 + uVar12;
  uVar15 = uVar1 + uVar18;
  uVar18 = (ulong)(CARRY8(uVar19,uVar12) || CARRY8(uVar1,uVar18));
  uVar1 = uVar17 + uVar13;
  uVar19 = uVar1 + uVar18;
  uVar12 = SUB168(auVar6 * auVar10,8) + (ulong)(CARRY8(uVar17,uVar13) || CARRY8(uVar1,uVar18));
  uVar18 = (ulong)(uVar15 < DAT_0012a008 || uVar15 - DAT_0012a008 < (ulong)(lVar14 != -1));
  uVar1 = (ulong)(uVar19 < uVar18);
  bVar21 = DAT_0012a018 <= uVar12;
  uVar13 = uVar12 - DAT_0012a018;
  bVar2 = uVar1 <= uVar13;
  uVar17 = (uVar15 - DAT_0012a008) - (ulong)(lVar14 != -1);
  lVar11 = lVar14 + 1;
  if (!bVar21 || !bVar2) {
    uVar17 = uVar15;
    lVar11 = lVar14;
  }
  *param_1 = lVar11;
  uVar18 = uVar19 - uVar18;
  if (!bVar21 || !bVar2) {
    uVar18 = uVar19;
  }
  param_1[1] = uVar17;
  if (bVar21 && bVar2) {
    uVar12 = uVar13 - uVar1;
  }
  param_1[2] = uVar18;
  param_1[3] = uVar12;
  return;
}



void ecp_nistz256_scatter_w5(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  uVar2 = param_2[1];
  uVar13 = (ulong)(uint)((param_3 * 3 + -3) * 0x20);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  *(undefined8 *)(param_1 + uVar13) = *param_2;
  ((undefined8 *)(param_1 + uVar13))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar13);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar13);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(param_1 + 0x40 + uVar13);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1 = (undefined8 *)(param_1 + 0x50 + uVar13);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_gather_w5(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [32];
  undefined1 (*pauVar16) [32];
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  
  if ((_DAT_0012b008 & 0x20) == 0) {
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar22 = (undefined1  [16])0x0;
    auVar24 = (undefined1  [16])0x0;
    auVar25 = (undefined1  [16])0x0;
    auVar26 = (undefined1  [16])0x0;
    lVar17 = 0x10;
    uVar27 = _DAT_0012a040;
    uVar28 = _UNK_0012a044;
    uVar29 = _UNK_0012a048;
    uVar30 = _UNK_0012a04c;
    do {
      auVar31._0_4_ = -(uint)(uVar27 == param_3);
      auVar31._4_4_ = -(uint)(uVar28 == param_3);
      auVar31._8_4_ = -(uint)(uVar29 == param_3);
      auVar31._12_4_ = -(uint)(uVar30 == param_3);
      puVar13 = *param_2;
      puVar14 = *param_2;
      pauVar1 = param_2 + 1;
      pauVar15 = param_2 + 1;
      pauVar2 = param_2 + 2;
      pauVar16 = param_2 + 2;
      param_2 = param_2 + 3;
      auVar18 = auVar18 | *(undefined1 (*) [16])puVar13 & auVar31;
      auVar20 = auVar20 | *(undefined1 (*) [16])(puVar14 + 0x10) & auVar31;
      auVar22 = auVar22 | *(undefined1 (*) [16])*pauVar1 & auVar31;
      auVar24 = auVar24 | *(undefined1 (*) [16])(*pauVar15 + 0x10) & auVar31;
      auVar25 = auVar25 | *(undefined1 (*) [16])*pauVar2 & auVar31;
      auVar26 = auVar26 | *(undefined1 (*) [16])(*pauVar16 + 0x10) & auVar31;
      lVar17 = lVar17 + -1;
      uVar27 = uVar27 + _DAT_0012a040;
      uVar28 = uVar28 + _UNK_0012a044;
      uVar29 = uVar29 + _UNK_0012a048;
      uVar30 = uVar30 + _UNK_0012a04c;
    } while (lVar17 != 0);
    *(undefined1 (*) [16])*param_1 = auVar18;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar20;
    *(undefined1 (*) [16])param_1[1] = auVar22;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar24;
    *(undefined1 (*) [16])param_1[2] = auVar25;
    *(undefined1 (*) [16])(param_1[2] + 0x10) = auVar26;
    return;
  }
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar21 = ZEXT3264((undefined1  [32])0x0);
  auVar23 = ZEXT3264((undefined1  [32])0x0);
  auVar5._4_4_ = _UNK_0012a044;
  auVar5._0_4_ = _DAT_0012a040;
  auVar5._8_4_ = _UNK_0012a048;
  auVar5._12_4_ = _UNK_0012a04c;
  auVar5._16_16_ = _UNK_0012a050;
  auVar12 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar17 = 8;
  auVar6 = _DAT_0012a060;
  do {
    auVar4 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar15 = param_2 + 3;
    pauVar16 = param_2 + 4;
    pauVar3 = param_2 + 5;
    auVar10 = vpcmpeqd_avx2(auVar5,auVar12);
    auVar11 = vpcmpeqd_avx2(auVar6,auVar12);
    auVar5 = vpaddd_avx2(auVar5,_DAT_0012a060);
    auVar6 = vpaddd_avx2(auVar6,_DAT_0012a060);
    param_2 = param_2 + 6;
    auVar4 = vpand_avx2(auVar4,auVar10);
    auVar7 = vpand_avx2(*pauVar1,auVar10);
    auVar10 = vpand_avx2(*pauVar2,auVar10);
    auVar8 = vpand_avx2(*pauVar15,auVar11);
    auVar9 = vpand_avx2(*pauVar16,auVar11);
    auVar11 = vpand_avx2(*pauVar3,auVar11);
    auVar8 = auVar19._0_32_ ^ auVar4 ^ auVar8;
    auVar19 = ZEXT3264(auVar8);
    auVar9 = auVar21._0_32_ ^ auVar7 ^ auVar9;
    auVar21 = ZEXT3264(auVar9);
    auVar11 = auVar23._0_32_ ^ auVar10 ^ auVar11;
    auVar23 = ZEXT3264(auVar11);
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  *param_1 = auVar8;
  param_1[1] = auVar9;
  param_1[2] = auVar11;
  return;
}



void ecp_nistz256_scatter_w7(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = param_2[1];
  uVar9 = (ulong)(uint)(param_3 << 6);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined8 *)(param_1 + uVar9) = *param_2;
  ((undefined8 *)(param_1 + uVar9))[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + 0x10 + uVar9);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(param_1 + 0x20 + uVar9);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(param_1 + 0x30 + uVar9);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_gather_w7(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [32];
  long lVar14;
  undefined1 (*pauVar15) [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  
  if ((_DAT_0012b008 & 0x20) == 0) {
    auVar16 = (undefined1  [16])0x0;
    auVar18 = (undefined1  [16])0x0;
    auVar20 = (undefined1  [16])0x0;
    auVar21 = (undefined1  [16])0x0;
    lVar14 = 0x40;
    uVar22 = _DAT_0012a040;
    uVar23 = _UNK_0012a044;
    uVar24 = _UNK_0012a048;
    uVar25 = _UNK_0012a04c;
    do {
      puVar11 = *param_2;
      puVar12 = *param_2;
      auVar26._0_4_ = -(uint)(uVar22 == param_3);
      auVar26._4_4_ = -(uint)(uVar23 == param_3);
      auVar26._8_4_ = -(uint)(uVar24 == param_3);
      auVar26._12_4_ = -(uint)(uVar25 == param_3);
      pauVar15 = param_2 + 1;
      pauVar13 = param_2 + 1;
      param_2 = param_2 + 2;
      auVar16 = auVar16 | *(undefined1 (*) [16])puVar11 & auVar26;
      auVar18 = auVar18 | *(undefined1 (*) [16])(puVar12 + 0x10) & auVar26;
      auVar20 = auVar20 | *(undefined1 (*) [16])*pauVar15 & auVar26;
      auVar21 = auVar21 | *(undefined1 (*) [16])(*pauVar13 + 0x10) & auVar26;
      lVar14 = lVar14 + -1;
      uVar22 = uVar22 + _DAT_0012a040;
      uVar23 = uVar23 + _UNK_0012a044;
      uVar24 = uVar24 + _UNK_0012a048;
      uVar25 = uVar25 + _UNK_0012a04c;
    } while (lVar14 != 0);
    *(undefined1 (*) [16])*param_1 = auVar16;
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar18;
    *(undefined1 (*) [16])param_1[1] = auVar20;
    *(undefined1 (*) [16])(param_1[1] + 0x10) = auVar21;
    return;
  }
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar19 = ZEXT3264((undefined1  [32])0x0);
  auVar1._4_4_ = _UNK_0012a044;
  auVar1._0_4_ = _DAT_0012a040;
  auVar1._8_4_ = _UNK_0012a048;
  auVar1._12_4_ = _UNK_0012a04c;
  auVar1._16_16_ = _UNK_0012a050;
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar14 = 0x15;
  auVar2 = _DAT_0012a060;
  auVar3 = _DAT_0012a080;
  do {
    pauVar15 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar1,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar2,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar3,auVar10);
    auVar1 = vpaddd_avx2(auVar1,_DAT_0012a080);
    auVar2 = vpaddd_avx2(auVar2,_DAT_0012a080);
    auVar3 = vpaddd_avx2(auVar3,_DAT_0012a080);
    auVar4 = vpand_avx2(*pauVar15,auVar7);
    auVar7 = vpand_avx2(pauVar15[1],auVar7);
    auVar5 = vpand_avx2(pauVar15[2],auVar8);
    auVar8 = vpand_avx2(pauVar15[3],auVar8);
    auVar6 = vpand_avx2(pauVar15[4],auVar9);
    auVar9 = vpand_avx2(pauVar15[5],auVar9);
    auVar6 = auVar17._0_32_ ^ auVar4 ^ auVar5 ^ auVar6;
    auVar17 = ZEXT3264(auVar6);
    auVar9 = auVar19._0_32_ ^ auVar7 ^ auVar8 ^ auVar9;
    auVar19 = ZEXT3264(auVar9);
    lVar14 = lVar14 + -1;
    param_2 = pauVar15 + 6;
  } while (lVar14 != 0);
  auVar2 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar1 = vpand_avx2(pauVar15[6],auVar2);
  auVar2 = vpand_avx2(pauVar15[7],auVar2);
  *param_1 = auVar6 ^ auVar1;
  param_1[1] = auVar9 ^ auVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_avx2_gather_w5(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  long lVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  
  auVar16 = ZEXT3264((undefined1  [32])0x0);
  auVar17 = ZEXT3264((undefined1  [32])0x0);
  auVar18 = ZEXT3264((undefined1  [32])0x0);
  auVar14 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar15 = 8;
  auVar7 = _DAT_0012a040;
  auVar8 = _DAT_0012a060;
  do {
    auVar6 = *param_2;
    pauVar1 = param_2 + 1;
    pauVar2 = param_2 + 2;
    pauVar3 = param_2 + 3;
    pauVar4 = param_2 + 4;
    pauVar5 = param_2 + 5;
    auVar12 = vpcmpeqd_avx2(auVar7,auVar14);
    auVar13 = vpcmpeqd_avx2(auVar8,auVar14);
    auVar7 = vpaddd_avx2(auVar7,_DAT_0012a060);
    auVar8 = vpaddd_avx2(auVar8,_DAT_0012a060);
    param_2 = param_2 + 6;
    auVar6 = vpand_avx2(auVar6,auVar12);
    auVar9 = vpand_avx2(*pauVar1,auVar12);
    auVar12 = vpand_avx2(*pauVar2,auVar12);
    auVar10 = vpand_avx2(*pauVar3,auVar13);
    auVar11 = vpand_avx2(*pauVar4,auVar13);
    auVar13 = vpand_avx2(*pauVar5,auVar13);
    auVar10 = auVar16._0_32_ ^ auVar6 ^ auVar10;
    auVar16 = ZEXT3264(auVar10);
    auVar11 = auVar17._0_32_ ^ auVar9 ^ auVar11;
    auVar17 = ZEXT3264(auVar11);
    auVar13 = auVar18._0_32_ ^ auVar12 ^ auVar13;
    auVar18 = ZEXT3264(auVar13);
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *param_1 = auVar10;
  param_1[1] = auVar11;
  param_1[2] = auVar13;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_avx2_gather_w7(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  long lVar11;
  undefined1 (*pauVar12) [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  
  auVar13 = ZEXT3264((undefined1  [32])0x0);
  auVar14 = ZEXT3264((undefined1  [32])0x0);
  auVar10 = vpermd_avx2((undefined1  [32])0x0,ZEXT432(param_3));
  lVar11 = 0x15;
  auVar2 = _DAT_0012a060;
  auVar3 = _DAT_0012a080;
  auVar1 = _DAT_0012a040;
  do {
    pauVar12 = param_2;
    auVar7 = vpcmpeqd_avx2(auVar1,auVar10);
    auVar8 = vpcmpeqd_avx2(auVar2,auVar10);
    auVar9 = vpcmpeqd_avx2(auVar3,auVar10);
    auVar1 = vpaddd_avx2(auVar1,_DAT_0012a080);
    auVar2 = vpaddd_avx2(auVar2,_DAT_0012a080);
    auVar3 = vpaddd_avx2(auVar3,_DAT_0012a080);
    auVar4 = vpand_avx2(*pauVar12,auVar7);
    auVar7 = vpand_avx2(pauVar12[1],auVar7);
    auVar5 = vpand_avx2(pauVar12[2],auVar8);
    auVar8 = vpand_avx2(pauVar12[3],auVar8);
    auVar6 = vpand_avx2(pauVar12[4],auVar9);
    auVar9 = vpand_avx2(pauVar12[5],auVar9);
    auVar6 = auVar13._0_32_ ^ auVar4 ^ auVar5 ^ auVar6;
    auVar13 = ZEXT3264(auVar6);
    auVar9 = auVar14._0_32_ ^ auVar7 ^ auVar8 ^ auVar9;
    auVar14 = ZEXT3264(auVar9);
    lVar11 = lVar11 + -1;
    param_2 = pauVar12 + 6;
  } while (lVar11 != 0);
  auVar2 = vpcmpeqd_avx2(auVar1,auVar10);
  auVar1 = vpand_avx2(pauVar12[6],auVar2);
  auVar2 = vpand_avx2(pauVar12[7],auVar2);
  *param_1 = auVar6 ^ auVar1;
  param_1[1] = auVar9 ^ auVar2;
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_double(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_RBP;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  ulong *extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  long lVar11;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [4];
  undefined8 local_98 [4];
  ulong local_78;
  undefined1 *puStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58 [40];
  
  if ((_DAT_0012b008 & 0x80100) != 0x80100) {
    puVar5 = &local_d8;
    local_78 = *param_2;
    puStack_70 = (undefined1 *)param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    lVar11 = param_1 + 0x40;
    uStack_e0 = 0x10211e;
    puVar6 = param_2;
    __ecp_nistz256_mul_by_2q(param_1,param_1 + 0x20,lVar11,&local_d8);
    uStack_e0 = 0x10213c;
    __ecp_nistz256_sqr_montq(local_98,puVar6 + 8);
    uStack_e0 = 0x10215c;
    __ecp_nistz256_sqr_montq(&local_d8,&local_d8);
    uStack_e0 = 0x102182;
    __ecp_nistz256_mul_montq(lVar11,param_2 + 8);
    uStack_e0 = 0x102187;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x1021aa;
    __ecp_nistz256_add_toq(local_b8);
    puVar4 = puStack_70;
    uVar9 = local_78;
    uStack_e0 = 0x1021cd;
    __ecp_nistz256_sub_fromq(local_98);
    uStack_e0 = 0x1021ee;
    puVar6 = extraout_XMM1_Qa;
    __ecp_nistz256_sqr_montq();
    uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar5) ||
                   CARRY8((ulong)(puVar4 + (long)puVar5),(ulong)(uVar9 != 0)));
    uVar2 = (ulong)CARRY8(local_d0,uVar1);
    uVar8 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
    uVar1 = local_d0 + uVar1;
    uVar3 = uVar9 - 1;
    puVar7 = puVar4 + (long)puVar5 + (uVar9 != 0);
    uVar2 = local_c8 + unaff_RBP + uVar2;
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
      uVar1 = local_d0;
      uVar3 = uVar9;
      puVar7 = puVar4;
      uVar2 = local_c8;
    }
    uVar9 = (ulong)puVar7 >> 1 | uVar1 << 0x3f;
    *puVar6 = uVar3 >> 1 | (long)puVar7 << 0x3f;
    puVar6[1] = uVar9;
    puVar6[2] = uVar1 >> 1 | uVar2 << 0x3f;
    puVar6[3] = uVar2 >> 1 | uVar8 << 0x3f;
    uStack_e0 = 0x102299;
    __ecp_nistz256_mul_montq(local_b8,local_b8);
    uStack_e0 = 0x1022a6;
    __ecp_nistz256_mul_by_2q(local_58);
    uStack_e0 = 0x1022b5;
    __ecp_nistz256_add_toq(local_b8);
    uStack_e0 = 0x1022df;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x1022ec;
    uVar10 = __ecp_nistz256_mul_by_2q(local_58);
    uStack_e0 = 0x10230f;
    __ecp_nistz256_sqr_montq(uVar10,local_b8);
    uStack_e0 = 0x102328;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x102344;
    __ecp_nistz256_subq(&local_d8);
    local_d8 = local_c0;
    uStack_e0 = 0x102381;
    local_d0 = uVar9;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x102390;
    __ecp_nistz256_sub_fromq(extraout_XMM1_Qa_00);
    return;
  }
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  lVar11 = param_1 + 0x40;
  uStack_e0 = 0x103267;
  puVar6 = param_2;
  __ecp_nistz256_mul_by_2x(param_1,param_1 + 0x20,lVar11,&local_d8);
  uStack_e0 = 0x103285;
  __ecp_nistz256_sqr_montx(local_98,puVar6 + -8,puVar6[8]);
  uStack_e0 = 0x1032a6;
  __ecp_nistz256_sqr_montx(&local_d8,auStack_158,local_d8);
  uStack_e0 = 0x1032cc;
  __ecp_nistz256_mul_montx(lVar11,param_2 + -8,param_2[4]);
  uStack_e0 = 0x1032d1;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x1032f4;
  __ecp_nistz256_add_tox(local_b8);
  puVar4 = puStack_70;
  uVar9 = local_78;
  uStack_e0 = 0x103317;
  __ecp_nistz256_sub_fromx(local_98);
  puVar7 = auStack_158;
  uStack_e0 = 0x103339;
  puVar6 = extraout_XMM1_Qa_01;
  __ecp_nistz256_sqr_montx(extraout_XMM1_Qa_01,puVar7,local_d8);
  uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar7) ||
                 CARRY8((ulong)(puVar4 + (long)puVar7),(ulong)(uVar9 != 0)));
  uVar2 = (ulong)CARRY8(local_d0,uVar1);
  uVar8 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar1 = local_d0 + uVar1;
  uVar3 = uVar9 - 1;
  puVar7 = puVar4 + (long)puVar7 + (uVar9 != 0);
  uVar2 = local_c8 + unaff_RBP + uVar2;
  if ((uVar9 & 1) == 0) {
    uVar8 = 0;
    uVar1 = local_d0;
    uVar3 = uVar9;
    puVar7 = puVar4;
    uVar2 = local_c8;
  }
  uVar9 = (ulong)puVar7 >> 1 | uVar1 << 0x3f;
  *puVar6 = uVar3 >> 1 | (long)puVar7 << 0x3f;
  puVar6[1] = uVar9;
  puVar6[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar6[3] = uVar2 >> 1 | uVar8 << 0x3f;
  uStack_e0 = 0x1033e4;
  __ecp_nistz256_mul_montx(local_b8,auStack_138,local_98[0],uVar2 << 0x3f,local_c8,local_b8[0]);
  uStack_e0 = 0x1033f1;
  __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x103400;
  __ecp_nistz256_add_tox(local_b8);
  uStack_e0 = 0x10342b;
  __ecp_nistz256_mul_montx(&local_d8,auStack_158,local_78);
  uStack_e0 = 0x103438;
  uVar10 = __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x10345b;
  __ecp_nistz256_sqr_montx(uVar10,auStack_138,local_b8[0]);
  uStack_e0 = 0x103474;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x103490;
  __ecp_nistz256_subx(&local_d8);
  local_d8 = local_c0;
  uStack_e0 = 0x1034ce;
  local_d0 = uVar9;
  __ecp_nistz256_mul_montx(&local_d8,auStack_158,local_b8[0]);
  uStack_e0 = 0x1034dd;
  __ecp_nistz256_sub_fromx(extraout_XMM1_Qa_02);
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *puVar25;
  ulong unaff_RBP;
  undefined8 *puVar26;
  ulong *puVar27;
  undefined1 *puVar28;
  ulong *puVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 uVar37;
  ulong uVar38;
  ulong unaff_R13;
  ulong uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined1 (*pauVar42) [16];
  long lVar43;
  int extraout_XMM1_Da;
  int extraout_XMM1_Da_00;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  int extraout_XMM1_Db;
  ulong *extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  int extraout_XMM1_Db_00;
  int extraout_XMM1_Dc;
  int extraout_XMM1_Dc_00;
  int extraout_XMM1_Dd;
  int extraout_XMM1_Dd_00;
  long lVar44;
  ulong uVar45;
  undefined1 auVar46 [16];
  uint uVar47;
  undefined1 auVar48 [16];
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_2f8 [32];
  undefined1 auStack_2d8 [32];
  undefined1 auStack_2b8 [32];
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined8 local_278;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258 [3];
  ulong local_240;
  undefined8 local_238 [4];
  undefined1 local_218 [32];
  undefined8 local_1f8 [4];
  undefined8 local_1d8 [4];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  ulong local_178 [3];
  ulong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  long local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined1 *puStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((_DAT_0012b008 & 0x80100) == 0x80100) {
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    uStack_e0 = param_2[3];
    local_d8 = param_2[4];
    uStack_d0 = param_2[5];
    local_c8 = param_2[6];
    uStack_c0 = param_2[7];
    local_b8 = *(undefined1 (*) [16])(param_2 + 8);
    local_a8 = *(undefined1 (*) [16])(param_2 + 10);
    auVar52 = local_a8 | local_b8;
    local_98 = *param_3;
    uStack_90 = param_3[1];
    auVar50._4_4_ = auVar52._0_4_;
    auVar50._0_4_ = auVar52._4_4_;
    auVar50._8_4_ = auVar52._12_4_;
    auVar50._12_4_ = auVar52._8_4_;
    local_88 = param_3[2];
    uStack_80 = param_3[3];
    local_78 = param_3[4];
    puStack_70 = (undefined1 *)param_3[5];
    local_68 = param_3[6];
    uStack_60 = param_3[7];
    local_58 = param_3[8];
    uStack_50 = param_3[9];
    local_48 = param_3[10];
    uStack_40 = param_3[0xb];
    uVar49 = SUB164(auVar52 | auVar50,0) | SUB164(auVar52 | auVar50,8);
    uVar47 = 0;
    uStack_280 = 0x10362c;
    uVar41 = __ecp_nistz256_sqr_montx(param_1,param_3[10] | param_3[8],local_218,param_3 + -8);
    auVar53._0_4_ = -(uint)(uVar49 == uVar47);
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar52._0_4_ =
         -(uint)((extraout_XMM1_Db_00 == 0 && extraout_XMM1_Da_00 == 0) &&
                (extraout_XMM1_Dd_00 == 0 && extraout_XMM1_Dc_00 == 0));
    auVar52._4_4_ = auVar52._0_4_;
    auVar52._8_4_ = auVar52._0_4_;
    auVar52._12_4_ = auVar52._0_4_;
    uVar33 = param_2[0xb];
    uStack_280 = 0x103677;
    __ecp_nistz256_sqr_montx(uVar41,param_2,local_258,param_2 + -8,param_2[8]);
    uStack_280 = 0x1036ad;
    __ecp_nistz256_mul_montx(local_198,auStack_298,local_58);
    uStack_280 = 0x1036e3;
    __ecp_nistz256_mul_montx(local_178,auStack_2d8,local_b8._0_8_);
    uStack_280 = 0x103725;
    __ecp_nistz256_mul_montx(local_198,local_218,local_d8);
    uStack_280 = 0x10376a;
    __ecp_nistz256_mul_montx(local_178,local_1f8,local_78);
    uStack_280 = 0x10377c;
    __ecp_nistz256_sub_fromx(local_238);
    uVar38 = local_160 | unaff_R13 | uVar33 | local_178[0];
    uVar45 = auVar52._0_8_ | auVar53._0_8_;
    uStack_280 = 0x1037c8;
    __ecp_nistz256_mul_montx(local_1d8,auStack_298,local_f8);
    uVar34 = local_240;
    uStack_280 = 0x1037fe;
    uVar35 = local_258[0];
    __ecp_nistz256_mul_montx(local_1b8,auStack_2d8,local_98);
    uStack_280 = 0x10380f;
    auVar50 = __ecp_nistz256_sub_fromx(&local_278);
    puVar29 = auVar50._8_8_;
    lVar43 = auVar50._0_8_;
    if (((((uVar34 == 0 && unaff_R13 == 0) && uVar33 == 0) && uVar35 == 0) && uVar45 == 0) &&
        uVar38 == 0) {
      local_78 = *puVar29;
      puStack_70 = (undefined1 *)puVar29[1];
      local_68 = puVar29[2];
      uStack_60 = puVar29[3];
      lVar44 = lVar43 + 0x40;
      uStack_e0 = 0x103267;
      puVar27 = puVar29;
      __ecp_nistz256_mul_by_2x(lVar43,lVar43 + 0x20,lVar44,&local_d8);
      uStack_e0 = 0x103285;
      __ecp_nistz256_sqr_montx(&local_98,puVar27 + -8,puVar27[8]);
      uStack_e0 = 0x1032a6;
      __ecp_nistz256_sqr_montx(&local_d8,local_158,local_d8);
      uStack_e0 = 0x1032cc;
      __ecp_nistz256_mul_montx(lVar44,puVar29 + -8,puVar29[4]);
      uStack_e0 = 0x1032d1;
      __ecp_nistz256_mul_by_2x();
      uStack_e0 = 0x1032f4;
      __ecp_nistz256_add_tox(local_b8);
      puVar25 = puStack_70;
      uVar36 = local_78;
      uStack_e0 = 0x103317;
      __ecp_nistz256_sub_fromx(&local_98);
      uVar31 = local_c8;
      uVar45 = uStack_d0;
      puVar28 = local_158;
      uStack_e0 = 0x103339;
      puVar29 = extraout_XMM1_Qa_01;
      __ecp_nistz256_sqr_montx(extraout_XMM1_Qa_01,puVar28,local_d8);
      uVar33 = (ulong)(CARRY8((ulong)puVar25,(ulong)puVar28) ||
                      CARRY8((ulong)(puVar25 + (long)puVar28),(ulong)(uVar36 != 0)));
      uVar34 = (ulong)CARRY8(uVar45,uVar33);
      uVar35 = (ulong)(CARRY8(uVar31,unaff_RBP) || CARRY8(uVar31 + unaff_RBP,uVar34));
      uVar33 = uVar45 + uVar33;
      uVar38 = uVar36 - 1;
      puVar28 = puVar25 + (long)puVar28 + (uVar36 != 0);
      uVar34 = uVar31 + unaff_RBP + uVar34;
      if ((uVar36 & 1) == 0) {
        uVar35 = 0;
        uVar33 = uVar45;
        uVar38 = uVar36;
        puVar28 = puVar25;
        uVar34 = uVar31;
      }
      uVar45 = (ulong)puVar28 >> 1 | uVar33 << 0x3f;
      *puVar29 = uVar38 >> 1 | (long)puVar28 << 0x3f;
      puVar29[1] = uVar45;
      puVar29[2] = uVar33 >> 1 | uVar34 << 0x3f;
      puVar29[3] = uVar34 >> 1 | uVar35 << 0x3f;
      uStack_e0 = 0x1033e4;
      __ecp_nistz256_mul_montx(local_b8,&local_138,local_98,uVar34 << 0x3f,uVar31,local_b8._0_8_);
      uStack_e0 = 0x1033f1;
      __ecp_nistz256_mul_by_2x(&local_58);
      uStack_e0 = 0x103400;
      __ecp_nistz256_add_tox(local_b8);
      uVar41 = uStack_c0;
      uStack_e0 = 0x10342b;
      __ecp_nistz256_mul_montx(&local_d8,local_158,local_78);
      uStack_e0 = 0x103438;
      uVar40 = __ecp_nistz256_mul_by_2x(&local_58);
      uVar32 = local_b8._8_8_;
      uVar37 = local_a8._0_8_;
      uStack_e0 = 0x10345b;
      __ecp_nistz256_sqr_montx(uVar40,&local_138,local_b8._0_8_);
      uStack_e0 = 0x103474;
      __ecp_nistz256_sub_fromx();
      uStack_e0 = 0x103490;
      __ecp_nistz256_subx(&local_d8);
      local_d8 = uVar41;
      uStack_e0 = 0x1034ce;
      uStack_d0 = uVar45;
      local_c8 = uVar32;
      uStack_c0 = uVar37;
      __ecp_nistz256_mul_montx(&local_d8,local_158,local_b8._0_8_);
      uStack_e0 = 0x1034dd;
      __ecp_nistz256_sub_fromx(extraout_XMM1_Qa_02);
      return;
    }
    uStack_280 = 0x103883;
    __ecp_nistz256_sqr_montx(local_218,auStack_2b8,local_238[0]);
    uStack_280 = 0x1038b8;
    __ecp_nistz256_mul_montx(&local_118,auStack_2f8,local_b8._0_8_);
    uStack_280 = 0x1038da;
    __ecp_nistz256_sqr_montx(local_258,auStack_2f8,local_278);
    uStack_280 = 0x10391f;
    __ecp_nistz256_mul_montx(&local_118,local_198,local_58);
    uStack_280 = 0x10394d;
    __ecp_nistz256_mul_montx(local_1f8,auStack_2d8,local_278);
    uStack_280 = 0x103983;
    __ecp_nistz256_mul_montx(local_1b8,auStack_2d8,local_1d8[0]);
    lVar43 = local_240 * 2;
    uVar39 = unaff_R13 * 2 + (ulong)CARRY8(local_240,local_240);
    uVar33 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                    CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_240,local_240)));
    uVar31 = local_260 * 2 + uVar33;
    uVar33 = (ulong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar33));
    uVar36 = local_258[0] * 2 + uVar33;
    uVar34 = (ulong)(uVar39 < local_270 || uVar39 - local_270 < (ulong)(lVar43 != -1));
    uVar35 = (ulong)(uVar31 < uVar34);
    uVar45 = (uVar36 - local_268) - uVar35;
    uVar38 = (uVar39 - local_270) - (ulong)(lVar43 != -1);
    lVar44 = lVar43 + 1;
    uVar34 = uVar31 - uVar34;
    if ((CARRY8(local_258[0],local_258[0]) || CARRY8(local_258[0] * 2,uVar33)) <
        (uVar36 < local_268 || uVar36 - local_268 < uVar35)) {
      uVar45 = uVar36;
      uVar38 = uVar39;
      lVar44 = lVar43;
      uVar34 = uVar31;
    }
    uStack_280 = 0x1039dd;
    __ecp_nistz256_subx();
    uStack_280 = 0x1039f2;
    __ecp_nistz256_sub_fromx(local_158);
    plVar30 = &local_138;
    uStack_280 = 0x103a1f;
    __ecp_nistz256_subx();
    *plVar30 = lVar44;
    plVar30[1] = uVar38;
    plVar30[2] = uVar34;
    plVar30[3] = uVar45;
    uStack_280 = 0x103a70;
    __ecp_nistz256_mul_montx(local_178,local_218,local_1f8[0]);
    uStack_280 = 0x103aa6;
    __ecp_nistz256_mul_montx(&local_138,auStack_2b8,local_138);
    uStack_280 = 0x103abb;
    pauVar42 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx(&local_138);
    auVar4._8_8_ = uStack_110;
    auVar4._0_8_ = local_118;
    auVar22._8_8_ = uStack_50;
    auVar22._0_8_ = local_58;
    auVar24._8_8_ = uStack_40;
    auVar24._0_8_ = local_48;
    pauVar42[4] = auVar52 & local_b8 | ~auVar52 & (auVar53 & auVar22 | ~auVar53 & auVar4);
    pauVar42[5] = auVar52 & local_a8 | ~auVar52 & (auVar53 & auVar24 | ~auVar53 & local_108);
    auVar14._8_8_ = uStack_90;
    auVar14._0_8_ = local_98;
    auVar16._8_8_ = uStack_80;
    auVar16._0_8_ = local_88;
    auVar6._8_8_ = uStack_f0;
    auVar6._0_8_ = local_f8;
    auVar8._8_8_ = uStack_e0;
    auVar8._0_8_ = local_e8;
    *pauVar42 = auVar52 & auVar6 | ~auVar52 & (auVar53 & auVar14 | ~auVar53 & local_158);
    pauVar42[1] = auVar52 & auVar8 | ~auVar52 & (auVar53 & auVar16 | ~auVar53 & local_148);
    auVar2._8_8_ = uStack_130;
    auVar2._0_8_ = local_138;
    auVar18._8_8_ = puStack_70;
    auVar18._0_8_ = local_78;
    auVar20._8_8_ = uStack_60;
    auVar20._0_8_ = local_68;
    auVar10._8_8_ = uStack_d0;
    auVar10._0_8_ = local_d8;
    auVar12._8_8_ = uStack_c0;
    auVar12._0_8_ = local_c8;
    pauVar42[2] = auVar52 & auVar10 | ~auVar52 & (auVar53 & auVar18 | ~auVar53 & auVar2);
    pauVar42[3] = auVar52 & auVar12 | ~auVar52 & (auVar53 & auVar20 | ~auVar53 & local_128);
    return;
  }
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = param_2[2];
  uStack_e0 = param_2[3];
  local_d8 = param_2[4];
  uStack_d0 = param_2[5];
  local_c8 = param_2[6];
  uStack_c0 = param_2[7];
  local_b8 = *(undefined1 (*) [16])(param_2 + 8);
  local_a8 = *(undefined1 (*) [16])(param_2 + 10);
  auVar50 = local_a8 | local_b8;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  auVar46._4_4_ = auVar50._0_4_;
  auVar46._0_4_ = auVar50._4_4_;
  auVar46._8_4_ = auVar50._12_4_;
  auVar46._12_4_ = auVar50._8_4_;
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  local_68 = param_3[6];
  uStack_60 = param_3[7];
  local_58 = param_3[8];
  uStack_50 = param_3[9];
  local_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar49 = SUB164(auVar50 | auVar46,0) | SUB164(auVar50 | auVar46,8);
  uVar47 = 0;
  uStack_280 = 0x1024e3;
  uVar41 = __ecp_nistz256_sqr_montq(param_1,param_3[10] | param_3[8],local_218,param_3 + 8);
  auVar51._0_4_ = -(uint)(uVar49 == uVar47);
  auVar51._4_4_ = auVar51._0_4_;
  auVar51._8_4_ = auVar51._0_4_;
  auVar51._12_4_ = auVar51._0_4_;
  auVar48._0_4_ =
       -(uint)((extraout_XMM1_Db == 0 && extraout_XMM1_Da == 0) &&
              (extraout_XMM1_Dd == 0 && extraout_XMM1_Dc == 0));
  auVar48._4_4_ = auVar48._0_4_;
  auVar48._8_4_ = auVar48._0_4_;
  auVar48._12_4_ = auVar48._0_4_;
  uVar33 = param_2[0xb];
  uStack_280 = 0x10252e;
  __ecp_nistz256_sqr_montq(uVar41,param_2,local_258,param_2 + 8);
  uStack_280 = 0x102564;
  __ecp_nistz256_mul_montq(local_198,local_218);
  uStack_280 = 0x10259a;
  __ecp_nistz256_mul_montq(local_178,local_258);
  uStack_280 = 0x1025df;
  __ecp_nistz256_mul_montq(local_198,local_198);
  uStack_280 = 0x102624;
  uVar38 = local_178[0];
  __ecp_nistz256_mul_montq(local_178,local_178);
  uStack_280 = 0x102636;
  __ecp_nistz256_sub_fromq(local_238);
  uVar38 = local_160 | unaff_R13 | uVar33 | uVar38;
  uVar45 = auVar48._0_8_ | auVar51._0_8_;
  uStack_280 = 0x102682;
  __ecp_nistz256_mul_montq(local_1d8,local_218);
  uVar34 = local_240;
  uStack_280 = 0x1026b8;
  uVar35 = local_258[0];
  __ecp_nistz256_mul_montq(local_1b8,local_258);
  uStack_280 = 0x1026c9;
  auVar50 = __ecp_nistz256_sub_fromq(&local_278);
  puVar29 = auVar50._8_8_;
  lVar43 = auVar50._0_8_;
  if (((((uVar34 == 0 && unaff_R13 == 0) && uVar33 == 0) && uVar35 == 0) && uVar45 == 0) &&
      uVar38 == 0) {
    puVar26 = &local_d8;
    local_78 = *puVar29;
    puStack_70 = (undefined1 *)puVar29[1];
    local_68 = puVar29[2];
    uStack_60 = puVar29[3];
    lVar44 = lVar43 + 0x40;
    uStack_e0 = 0x10211e;
    puVar27 = puVar29;
    __ecp_nistz256_mul_by_2q(lVar43,lVar43 + 0x20,lVar44,&local_d8);
    uStack_e0 = 0x10213c;
    __ecp_nistz256_sqr_montq(&local_98,puVar27 + 8);
    uStack_e0 = 0x10215c;
    __ecp_nistz256_sqr_montq(&local_d8,&local_d8);
    uStack_e0 = 0x102182;
    __ecp_nistz256_mul_montq(lVar44,puVar29 + 8);
    uStack_e0 = 0x102187;
    __ecp_nistz256_mul_by_2q();
    uStack_e0 = 0x1021aa;
    __ecp_nistz256_add_toq(local_b8);
    puVar25 = puStack_70;
    uVar36 = local_78;
    uStack_e0 = 0x1021cd;
    __ecp_nistz256_sub_fromq(&local_98);
    uVar31 = local_c8;
    uVar45 = uStack_d0;
    uStack_e0 = 0x1021ee;
    puVar29 = extraout_XMM1_Qa;
    __ecp_nistz256_sqr_montq();
    uVar33 = (ulong)(CARRY8((ulong)puVar25,(ulong)puVar26) ||
                    CARRY8((ulong)(puVar25 + (long)puVar26),(ulong)(uVar36 != 0)));
    uVar34 = (ulong)CARRY8(uVar45,uVar33);
    uVar35 = (ulong)(CARRY8(uVar31,unaff_RBP) || CARRY8(uVar31 + unaff_RBP,uVar34));
    uVar33 = uVar45 + uVar33;
    uVar38 = uVar36 - 1;
    puVar28 = puVar25 + (long)puVar26 + (uVar36 != 0);
    uVar34 = uVar31 + unaff_RBP + uVar34;
    if ((uVar36 & 1) == 0) {
      uVar35 = 0;
      uVar33 = uVar45;
      uVar38 = uVar36;
      puVar28 = puVar25;
      uVar34 = uVar31;
    }
    uVar45 = (ulong)puVar28 >> 1 | uVar33 << 0x3f;
    *puVar29 = uVar38 >> 1 | (long)puVar28 << 0x3f;
    puVar29[1] = uVar45;
    puVar29[2] = uVar33 >> 1 | uVar34 << 0x3f;
    puVar29[3] = uVar34 >> 1 | uVar35 << 0x3f;
    uStack_e0 = 0x102299;
    __ecp_nistz256_mul_montq(local_b8,local_b8);
    uStack_e0 = 0x1022a6;
    __ecp_nistz256_mul_by_2q(&local_58);
    uStack_e0 = 0x1022b5;
    __ecp_nistz256_add_toq(local_b8);
    uVar41 = uStack_c0;
    uStack_e0 = 0x1022df;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x1022ec;
    uVar40 = __ecp_nistz256_mul_by_2q(&local_58);
    uVar32 = local_b8._8_8_;
    uVar37 = local_a8._0_8_;
    uStack_e0 = 0x10230f;
    __ecp_nistz256_sqr_montq(uVar40,local_b8);
    uStack_e0 = 0x102328;
    __ecp_nistz256_sub_fromq();
    uStack_e0 = 0x102344;
    __ecp_nistz256_subq(&local_d8);
    local_d8 = uVar41;
    uStack_e0 = 0x102381;
    uStack_d0 = uVar45;
    local_c8 = uVar32;
    uStack_c0 = uVar37;
    __ecp_nistz256_mul_montq(&local_d8,&local_d8);
    uStack_e0 = 0x102390;
    __ecp_nistz256_sub_fromq(extraout_XMM1_Qa_00);
    return;
  }
  uStack_280 = 0x102723;
  __ecp_nistz256_sqr_montq(local_218,local_238);
  uStack_280 = 0x102757;
  __ecp_nistz256_mul_montq(&local_118,&local_278);
  uStack_280 = 0x102778;
  __ecp_nistz256_sqr_montq(local_258,&local_278);
  uStack_280 = 0x1027bd;
  __ecp_nistz256_mul_montq(&local_118,&local_118);
  uStack_280 = 0x1027eb;
  __ecp_nistz256_mul_montq(local_1f8,local_258);
  uStack_280 = 0x102821;
  __ecp_nistz256_mul_montq(local_1b8,local_258);
  lVar43 = local_240 * 2;
  uVar39 = unaff_R13 * 2 + (ulong)CARRY8(local_240,local_240);
  uVar33 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                  CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_240,local_240)));
  uVar31 = local_260 * 2 + uVar33;
  uVar33 = (ulong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar33));
  uVar36 = local_258[0] * 2 + uVar33;
  uVar34 = (ulong)(uVar39 < local_270 || uVar39 - local_270 < (ulong)(lVar43 != -1));
  uVar35 = (ulong)(uVar31 < uVar34);
  uVar45 = (uVar36 - local_268) - uVar35;
  uVar38 = (uVar39 - local_270) - (ulong)(lVar43 != -1);
  lVar44 = lVar43 + 1;
  uVar34 = uVar31 - uVar34;
  if ((CARRY8(local_258[0],local_258[0]) || CARRY8(local_258[0] * 2,uVar33)) <
      (uVar36 < local_268 || uVar36 - local_268 < uVar35)) {
    uVar45 = uVar36;
    uVar38 = uVar39;
    lVar44 = lVar43;
    uVar34 = uVar31;
  }
  uStack_280 = 0x10287b;
  __ecp_nistz256_subq();
  uStack_280 = 0x102890;
  __ecp_nistz256_sub_fromq(local_158);
  plVar30 = &local_138;
  uStack_280 = 0x1028bd;
  __ecp_nistz256_subq();
  *plVar30 = lVar44;
  plVar30[1] = uVar38;
  plVar30[2] = uVar34;
  plVar30[3] = uVar45;
  uStack_280 = 0x102911;
  __ecp_nistz256_mul_montq(local_178,local_198);
  uStack_280 = 0x102947;
  __ecp_nistz256_mul_montq(&local_138,local_238);
  uStack_280 = 0x10295c;
  pauVar42 = (undefined1 (*) [16])__ecp_nistz256_sub_fromq(&local_138);
  auVar3._8_8_ = uStack_110;
  auVar3._0_8_ = local_118;
  auVar21._8_8_ = uStack_50;
  auVar21._0_8_ = local_58;
  auVar23._8_8_ = uStack_40;
  auVar23._0_8_ = local_48;
  pauVar42[4] = auVar48 & local_b8 | ~auVar48 & (auVar51 & auVar21 | ~auVar51 & auVar3);
  pauVar42[5] = auVar48 & local_a8 | ~auVar48 & (auVar51 & auVar23 | ~auVar51 & local_108);
  auVar13._8_8_ = uStack_90;
  auVar13._0_8_ = local_98;
  auVar15._8_8_ = uStack_80;
  auVar15._0_8_ = local_88;
  auVar5._8_8_ = uStack_f0;
  auVar5._0_8_ = local_f8;
  auVar7._8_8_ = uStack_e0;
  auVar7._0_8_ = local_e8;
  *pauVar42 = auVar48 & auVar5 | ~auVar48 & (auVar51 & auVar13 | ~auVar51 & local_158);
  pauVar42[1] = auVar48 & auVar7 | ~auVar48 & (auVar51 & auVar15 | ~auVar51 & local_148);
  auVar1._8_8_ = uStack_130;
  auVar1._0_8_ = local_138;
  auVar17._8_8_ = puStack_70;
  auVar17._0_8_ = local_78;
  auVar19._8_8_ = uStack_60;
  auVar19._0_8_ = local_68;
  auVar9._8_8_ = uStack_d0;
  auVar9._0_8_ = local_d8;
  auVar11._8_8_ = uStack_c0;
  auVar11._0_8_ = local_c8;
  pauVar42[2] = auVar48 & auVar9 | ~auVar48 & (auVar51 & auVar17 | ~auVar51 & auVar1);
  pauVar42[3] = auVar48 & auVar11 | ~auVar48 & (auVar51 & auVar19 | ~auVar51 & local_128);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add_affine
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_R13;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  uint uVar21;
  uint uVar23;
  undefined1 auVar22 [16];
  uint uVar24;
  uint uVar25;
  uint uVar29;
  uint uVar30;
  undefined1 auVar27 [16];
  uint uVar26;
  uint uVar31;
  undefined1 auVar28 [16];
  undefined1 auStack_278 [32];
  undefined1 auStack_258 [32];
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  long local_1d8 [4];
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198 [3];
  ulong local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if ((_DAT_0012b008 & 0x80100) != 0x80100) {
    local_d8 = *param_2;
    uStack_d0 = param_2[1];
    local_c8 = param_2[2];
    uStack_c0 = param_2[3];
    local_b8 = param_2[4];
    uStack_b0 = param_2[5];
    local_a8 = param_2[6];
    uStack_a0 = param_2[7];
    local_98 = *(undefined1 (*) [16])(param_2 + 8);
    local_88 = *(undefined1 (*) [16])(param_2 + 10);
    auVar27 = local_88 | local_98;
    local_78 = *param_3;
    auVar17._4_4_ = auVar27._0_4_;
    auVar17._0_4_ = auVar27._4_4_;
    auVar17._8_4_ = auVar27._12_4_;
    auVar17._12_4_ = auVar27._8_4_;
    local_68 = param_3[1];
    local_58 = param_3[2];
    local_48 = param_3[3];
    uVar25 = SUB164(auVar27 | auVar17,0) | SUB164(auVar27 | auVar17,8);
    uVar23 = 0;
    auVar27 = local_48 | local_58 | local_68 | local_78;
    uStack_220 = 0x102bfe;
    __ecp_nistz256_sqr_montq
              (param_1,local_1f8,param_2 + 8,param_3,_DAT_0012b008 & 0x80100,param_2[0xb]);
    uVar26 = -(uint)(uVar25 == uVar23);
    auVar22._4_4_ = auVar27._0_4_;
    auVar22._0_4_ = auVar27._4_4_;
    auVar22._8_4_ = auVar27._12_4_;
    auVar22._12_4_ = auVar27._8_4_;
    uVar21 = -(uint)(SUB164(auVar22 | auVar27,0) == 0 && SUB164(auVar22 | auVar27,8) == 0);
    uStack_220 = 0x102c43;
    uVar23 = uVar21;
    uVar25 = uVar21;
    uVar24 = uVar21;
    uVar29 = uVar26;
    uVar30 = uVar26;
    uVar31 = uVar26;
    __ecp_nistz256_mul_montq(local_218,local_1f8);
    uStack_220 = 0x102c55;
    __ecp_nistz256_sub_fromq(local_1d8);
    uStack_220 = 0x102c88;
    __ecp_nistz256_mul_montq(local_1f8,local_1f8);
    uStack_220 = 0x102cbe;
    __ecp_nistz256_mul_montq(&local_f8,local_1d8);
    uStack_220 = 0x102cf1;
    __ecp_nistz256_mul_montq(local_1f8,local_1f8);
    uStack_220 = 0x102d03;
    __ecp_nistz256_sub_fromq(&local_1b8);
    uStack_220 = 0x102d29;
    __ecp_nistz256_sqr_montq(local_198,local_1d8);
    uStack_220 = 0x102d4f;
    __ecp_nistz256_sqr_montq(local_158,&local_1b8);
    uStack_220 = 0x102d85;
    __ecp_nistz256_mul_montq(local_178,local_1d8);
    uStack_220 = 0x102dc6;
    __ecp_nistz256_mul_montq(local_218,local_198);
    lVar3 = local_180 * 2;
    uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
    uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                   CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
    uVar7 = local_1a0 * 2 + uVar1;
    uVar1 = (ulong)(CARRY8(local_1a0,local_1a0) || CARRY8(local_1a0 * 2,uVar1));
    uVar9 = local_198[0] * 2 + uVar1;
    uVar8 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
    uVar2 = (ulong)(uVar7 < uVar8);
    uVar10 = (uVar9 - local_1a8) - uVar2;
    lVar4 = lVar3 + 1;
    uVar5 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
    uVar8 = uVar7 - uVar8;
    if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
        (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
      uVar10 = uVar9;
      lVar4 = lVar3;
      uVar5 = uVar11;
      uVar8 = uVar7;
    }
    uStack_220 = 0x102e23;
    __ecp_nistz256_subq();
    uStack_220 = 0x102e38;
    __ecp_nistz256_sub_fromq(&local_138);
    plVar6 = local_1d8;
    uStack_220 = 0x102e55;
    __ecp_nistz256_subq();
    *plVar6 = lVar4;
    plVar6[1] = uVar5;
    plVar6[2] = uVar8;
    plVar6[3] = uVar10;
    uStack_220 = 0x102ea6;
    __ecp_nistz256_mul_montq(local_1f8,local_178);
    uStack_220 = 0x102ed3;
    __ecp_nistz256_mul_montq(local_1d8,local_1d8);
    uStack_220 = 0x102ee5;
    puVar12 = (uint *)__ecp_nistz256_sub_fromq(&local_118);
    uVar13 = uVar29 & _UNK_0012a0a4;
    uVar14 = uVar30 & _UNK_0012a0a8;
    uVar15 = uVar31 & _UNK_0012a0ac;
    uVar16 = uVar26 & _DAT_0012a0b0;
    uVar18 = uVar29 & _UNK_0012a0b4;
    uVar19 = uVar30 & _UNK_0012a0b8;
    uVar20 = uVar31 & _UNK_0012a0bc;
    puVar12[0x10] =
         uVar21 & local_98._0_4_ | ~uVar21 & (uVar26 & _DAT_0012a0a0 | ~uVar26 & local_f8);
    puVar12[0x11] = uVar23 & local_98._4_4_ | ~uVar23 & (uVar13 | ~uVar29 & uStack_f4);
    puVar12[0x12] = uVar25 & local_98._8_4_ | ~uVar25 & (uVar14 | ~uVar30 & uStack_f0);
    puVar12[0x13] = uVar24 & local_98._12_4_ | ~uVar24 & (uVar15 | ~uVar31 & uStack_ec);
    puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar26 & local_e8);
    puVar12[0x15] = uVar23 & local_88._4_4_ | ~uVar23 & (uVar18 | ~uVar29 & uStack_e4);
    puVar12[0x16] = uVar25 & local_88._8_4_ | ~uVar25 & (uVar19 | ~uVar30 & uStack_e0);
    puVar12[0x17] = uVar24 & local_88._12_4_ | ~uVar24 & (uVar20 | ~uVar31 & uStack_dc);
    *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar26 & local_78._0_4_ | ~uVar26 & local_138);
    puVar12[1] = uVar23 & local_d8._4_4_ |
                 ~uVar23 & (uVar29 & local_78._4_4_ | ~uVar29 & uStack_134);
    puVar12[2] = uVar25 & (uint)uStack_d0 |
                 ~uVar25 & (uVar30 & local_78._8_4_ | ~uVar30 & uStack_130);
    puVar12[3] = uVar24 & uStack_d0._4_4_ |
                 ~uVar24 & (uVar31 & local_78._12_4_ | ~uVar31 & uStack_12c);
    puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar26 & local_68._0_4_ | ~uVar26 & local_128)
    ;
    puVar12[5] = uVar23 & local_c8._4_4_ |
                 ~uVar23 & (uVar29 & local_68._4_4_ | ~uVar29 & uStack_124);
    puVar12[6] = uVar25 & (uint)uStack_c0 |
                 ~uVar25 & (uVar30 & local_68._8_4_ | ~uVar30 & uStack_120);
    puVar12[7] = uVar24 & uStack_c0._4_4_ |
                 ~uVar24 & (uVar31 & local_68._12_4_ | ~uVar31 & uStack_11c);
    puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar26 & local_58._0_4_ | ~uVar26 & local_118)
    ;
    puVar12[9] = uVar23 & local_b8._4_4_ |
                 ~uVar23 & (uVar29 & local_58._4_4_ | ~uVar29 & uStack_114);
    puVar12[10] = uVar25 & (uint)uStack_b0 |
                  ~uVar25 & (uVar30 & local_58._8_4_ | ~uVar30 & uStack_110);
    puVar12[0xb] = uVar24 & uStack_b0._4_4_ |
                   ~uVar24 & (uVar31 & local_58._12_4_ | ~uVar31 & uStack_10c);
    puVar12[0xc] = uVar21 & (uint)local_a8 |
                   ~uVar21 & (uVar26 & local_48._0_4_ | ~uVar26 & local_108);
    puVar12[0xd] = uVar23 & local_a8._4_4_ |
                   ~uVar23 & (uVar29 & local_48._4_4_ | ~uVar29 & uStack_104);
    puVar12[0xe] = uVar25 & (uint)uStack_a0 |
                   ~uVar25 & (uVar30 & local_48._8_4_ | ~uVar30 & uStack_100);
    puVar12[0xf] = uVar24 & uStack_a0._4_4_ |
                   ~uVar24 & (uVar31 & local_48._12_4_ | ~uVar31 & uStack_fc);
    return;
  }
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  local_c8 = param_2[2];
  uStack_c0 = param_2[3];
  local_b8 = param_2[4];
  uStack_b0 = param_2[5];
  local_a8 = param_2[6];
  uStack_a0 = param_2[7];
  local_98 = *(undefined1 (*) [16])(param_2 + 8);
  local_88 = *(undefined1 (*) [16])(param_2 + 10);
  auVar28 = local_88 | local_98;
  local_78 = *param_3;
  auVar27._4_4_ = auVar28._0_4_;
  auVar27._0_4_ = auVar28._4_4_;
  auVar27._8_4_ = auVar28._12_4_;
  auVar27._12_4_ = auVar28._8_4_;
  local_68 = param_3[1];
  local_58 = param_3[2];
  local_48 = param_3[3];
  uVar25 = SUB164(auVar28 | auVar27,0) | SUB164(auVar28 | auVar27,8);
  uVar23 = 0;
  auVar27 = local_48 | local_58 | local_68 | local_78;
  uStack_220 = 0x103d47;
  __ecp_nistz256_sqr_montx(param_1,local_1f8,param_2 + -8,param_2[8],0x80100,param_2[0xb]);
  uVar26 = -(uint)(uVar25 == uVar23);
  auVar28._4_4_ = auVar27._0_4_;
  auVar28._0_4_ = auVar27._4_4_;
  auVar28._8_4_ = auVar27._12_4_;
  auVar28._12_4_ = auVar27._8_4_;
  uVar21 = -(uint)(SUB164(auVar28 | auVar27,0) == 0 && SUB164(auVar28 | auVar27,8) == 0);
  uStack_220 = 0x103d8c;
  uVar23 = uVar21;
  uVar25 = uVar21;
  uVar24 = uVar21;
  uVar29 = uVar26;
  uVar30 = uVar26;
  uVar31 = uVar26;
  __ecp_nistz256_mul_montx(local_218,auStack_278,*(undefined8 *)*param_3);
  uStack_220 = 0x103d9e;
  __ecp_nistz256_sub_fromx(local_1d8);
  uStack_220 = 0x103dd1;
  __ecp_nistz256_mul_montx(local_1f8,auStack_278,local_98._0_8_);
  uStack_220 = 0x103e07;
  __ecp_nistz256_mul_montx(&local_f8,auStack_258,local_98._0_8_);
  uStack_220 = 0x103e3a;
  __ecp_nistz256_mul_montx(local_1f8,auStack_278,local_58._0_8_);
  uStack_220 = 0x103e4c;
  __ecp_nistz256_sub_fromx(&local_1b8);
  uStack_220 = 0x103e72;
  __ecp_nistz256_sqr_montx(local_198,auStack_258,local_1d8[0]);
  uStack_220 = 0x103e98;
  __ecp_nistz256_sqr_montx(local_158,auStack_238,local_1b8);
  uStack_220 = 0x103ece;
  __ecp_nistz256_mul_montx(local_178,auStack_258,local_198[0]);
  uStack_220 = 0x103f0b;
  __ecp_nistz256_mul_montx(local_218,local_218,local_d8);
  lVar3 = local_180 * 2;
  uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
  uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                 CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
  uVar7 = local_1a0 * 2 + uVar1;
  uVar1 = (ulong)(CARRY8(local_1a0,local_1a0) || CARRY8(local_1a0 * 2,uVar1));
  uVar9 = local_198[0] * 2 + uVar1;
  uVar8 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
  uVar2 = (ulong)(uVar7 < uVar8);
  uVar10 = (uVar9 - local_1a8) - uVar2;
  uVar5 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
  lVar4 = lVar3 + 1;
  uVar8 = uVar7 - uVar8;
  if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
      (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
    uVar10 = uVar9;
    uVar5 = uVar11;
    lVar4 = lVar3;
    uVar8 = uVar7;
  }
  uStack_220 = 0x103f68;
  __ecp_nistz256_subx();
  uStack_220 = 0x103f7d;
  __ecp_nistz256_sub_fromx(&local_138);
  plVar6 = local_1d8;
  uStack_220 = 0x103f9a;
  __ecp_nistz256_subx();
  *plVar6 = lVar4;
  plVar6[1] = uVar5;
  plVar6[2] = uVar8;
  plVar6[3] = uVar10;
  uStack_220 = 0x103fe8;
  __ecp_nistz256_mul_montx(local_1f8,local_1f8,local_b8);
  uStack_220 = 0x104015;
  __ecp_nistz256_mul_montx(local_1d8,auStack_258,local_1b8);
  uStack_220 = 0x104027;
  puVar12 = (uint *)__ecp_nistz256_sub_fromx(&local_118);
  uVar13 = uVar29 & _UNK_0012a0a4;
  uVar14 = uVar30 & _UNK_0012a0a8;
  uVar15 = uVar31 & _UNK_0012a0ac;
  uVar16 = uVar26 & _DAT_0012a0b0;
  uVar18 = uVar29 & _UNK_0012a0b4;
  uVar19 = uVar30 & _UNK_0012a0b8;
  uVar20 = uVar31 & _UNK_0012a0bc;
  puVar12[0x10] = uVar21 & local_98._0_4_ | ~uVar21 & (uVar26 & _DAT_0012a0a0 | ~uVar26 & local_f8);
  puVar12[0x11] = uVar23 & local_98._4_4_ | ~uVar23 & (uVar13 | ~uVar29 & uStack_f4);
  puVar12[0x12] = uVar25 & local_98._8_4_ | ~uVar25 & (uVar14 | ~uVar30 & uStack_f0);
  puVar12[0x13] = uVar24 & local_98._12_4_ | ~uVar24 & (uVar15 | ~uVar31 & uStack_ec);
  puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar26 & local_e8);
  puVar12[0x15] = uVar23 & local_88._4_4_ | ~uVar23 & (uVar18 | ~uVar29 & uStack_e4);
  puVar12[0x16] = uVar25 & local_88._8_4_ | ~uVar25 & (uVar19 | ~uVar30 & uStack_e0);
  puVar12[0x17] = uVar24 & local_88._12_4_ | ~uVar24 & (uVar20 | ~uVar31 & uStack_dc);
  *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar26 & local_78._0_4_ | ~uVar26 & local_138);
  puVar12[1] = uVar23 & local_d8._4_4_ | ~uVar23 & (uVar29 & local_78._4_4_ | ~uVar29 & uStack_134);
  puVar12[2] = uVar25 & (uint)uStack_d0 | ~uVar25 & (uVar30 & local_78._8_4_ | ~uVar30 & uStack_130)
  ;
  puVar12[3] = uVar24 & uStack_d0._4_4_ |
               ~uVar24 & (uVar31 & local_78._12_4_ | ~uVar31 & uStack_12c);
  puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar26 & local_68._0_4_ | ~uVar26 & local_128);
  puVar12[5] = uVar23 & local_c8._4_4_ | ~uVar23 & (uVar29 & local_68._4_4_ | ~uVar29 & uStack_124);
  puVar12[6] = uVar25 & (uint)uStack_c0 | ~uVar25 & (uVar30 & local_68._8_4_ | ~uVar30 & uStack_120)
  ;
  puVar12[7] = uVar24 & uStack_c0._4_4_ |
               ~uVar24 & (uVar31 & local_68._12_4_ | ~uVar31 & uStack_11c);
  puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar26 & local_58._0_4_ | ~uVar26 & local_118);
  puVar12[9] = uVar23 & local_b8._4_4_ | ~uVar23 & (uVar29 & local_58._4_4_ | ~uVar29 & uStack_114);
  puVar12[10] = uVar25 & (uint)uStack_b0 |
                ~uVar25 & (uVar30 & local_58._8_4_ | ~uVar30 & uStack_110);
  puVar12[0xb] = uVar24 & uStack_b0._4_4_ |
                 ~uVar24 & (uVar31 & local_58._12_4_ | ~uVar31 & uStack_10c);
  puVar12[0xc] = uVar21 & (uint)local_a8 | ~uVar21 & (uVar26 & local_48._0_4_ | ~uVar26 & local_108)
  ;
  puVar12[0xd] = uVar23 & local_a8._4_4_ |
                 ~uVar23 & (uVar29 & local_48._4_4_ | ~uVar29 & uStack_104);
  puVar12[0xe] = uVar25 & (uint)uStack_a0 |
                 ~uVar25 & (uVar30 & local_48._8_4_ | ~uVar30 & uStack_100);
  puVar12[0xf] = uVar24 & uStack_a0._4_4_ |
                 ~uVar24 & (uVar31 & local_48._12_4_ | ~uVar31 & uStack_fc);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void ecp_nistz256_point_doublex(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_RBP;
  ulong *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  long lVar10;
  undefined1 local_158 [32];
  undefined1 local_138 [88];
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [4];
  undefined8 local_98 [4];
  ulong local_78;
  undefined1 *puStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined1 local_58 [40];
  
  local_78 = *param_2;
  puStack_70 = (undefined1 *)param_2[1];
  local_68 = param_2[2];
  uStack_60 = param_2[3];
  lVar10 = param_1 + 0x40;
  uStack_e0 = 0x103267;
  puVar5 = param_2;
  __ecp_nistz256_mul_by_2x(param_1,param_1 + 0x20,lVar10,&local_d8);
  uStack_e0 = 0x103285;
  __ecp_nistz256_sqr_montx(local_98,puVar5 + -8,puVar5[8]);
  uStack_e0 = 0x1032a6;
  __ecp_nistz256_sqr_montx(&local_d8,local_158,local_d8);
  uStack_e0 = 0x1032cc;
  __ecp_nistz256_mul_montx(lVar10,param_2 + -8,param_2[4]);
  uStack_e0 = 0x1032d1;
  __ecp_nistz256_mul_by_2x();
  uStack_e0 = 0x1032f4;
  __ecp_nistz256_add_tox(local_b8);
  puVar4 = puStack_70;
  uVar8 = local_78;
  uStack_e0 = 0x103317;
  __ecp_nistz256_sub_fromx(local_98);
  puVar6 = local_158;
  uStack_e0 = 0x103339;
  puVar5 = extraout_XMM1_Qa;
  __ecp_nistz256_sqr_montx(extraout_XMM1_Qa,puVar6,local_d8);
  uVar1 = (ulong)(CARRY8((ulong)puVar4,(ulong)puVar6) ||
                 CARRY8((ulong)(puVar4 + (long)puVar6),(ulong)(uVar8 != 0)));
  uVar2 = (ulong)CARRY8(local_d0,uVar1);
  uVar7 = (ulong)(CARRY8(local_c8,unaff_RBP) || CARRY8(local_c8 + unaff_RBP,uVar2));
  uVar1 = local_d0 + uVar1;
  uVar3 = uVar8 - 1;
  puVar6 = puVar4 + (long)puVar6 + (uVar8 != 0);
  uVar2 = local_c8 + unaff_RBP + uVar2;
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
    uVar1 = local_d0;
    uVar3 = uVar8;
    puVar6 = puVar4;
    uVar2 = local_c8;
  }
  uVar8 = (ulong)puVar6 >> 1 | uVar1 << 0x3f;
  *puVar5 = uVar3 >> 1 | (long)puVar6 << 0x3f;
  puVar5[1] = uVar8;
  puVar5[2] = uVar1 >> 1 | uVar2 << 0x3f;
  puVar5[3] = uVar2 >> 1 | uVar7 << 0x3f;
  uStack_e0 = 0x1033e4;
  __ecp_nistz256_mul_montx(local_b8,local_138,local_98[0],uVar2 << 0x3f,local_c8,local_b8[0]);
  uStack_e0 = 0x1033f1;
  __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x103400;
  __ecp_nistz256_add_tox(local_b8);
  uStack_e0 = 0x10342b;
  __ecp_nistz256_mul_montx(&local_d8,local_158,local_78);
  uStack_e0 = 0x103438;
  uVar9 = __ecp_nistz256_mul_by_2x(local_58);
  uStack_e0 = 0x10345b;
  __ecp_nistz256_sqr_montx(uVar9,local_138,local_b8[0]);
  uStack_e0 = 0x103474;
  __ecp_nistz256_sub_fromx();
  uStack_e0 = 0x103490;
  __ecp_nistz256_subx(&local_d8);
  local_d8 = local_c0;
  uStack_e0 = 0x1034ce;
  local_d0 = uVar8;
  __ecp_nistz256_mul_montx(&local_d8,local_158,local_b8[0]);
  uStack_e0 = 0x1034dd;
  __ecp_nistz256_sub_fromx(extraout_XMM1_Qa_00);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void ecp_nistz256_point_addx(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  ulong unaff_RBP;
  ulong *puVar14;
  undefined1 *puVar15;
  ulong *puVar16;
  long *plVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong unaff_R13;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined1 (*pauVar30) [16];
  int extraout_XMM1_Da;
  ulong *extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  int extraout_XMM1_Db;
  int extraout_XMM1_Dc;
  int extraout_XMM1_Dd;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [32];
  undefined1 local_298 [24];
  undefined8 uStack_280;
  undefined8 local_278;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258 [3];
  ulong local_240;
  undefined8 local_238 [4];
  undefined1 local_218 [32];
  undefined8 local_1f8 [4];
  undefined8 local_1d8 [4];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  ulong local_178 [3];
  ulong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  long local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined1 *puStack_70;
  ulong local_68;
  ulong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_f8 = *param_2;
  uStack_f0 = param_2[1];
  local_e8 = param_2[2];
  uStack_e0 = param_2[3];
  local_d8 = param_2[4];
  uStack_d0 = param_2[5];
  local_c8 = param_2[6];
  uStack_c0 = param_2[7];
  local_b8 = *(undefined1 (*) [16])(param_2 + 8);
  local_a8 = *(undefined1 (*) [16])(param_2 + 10);
  auVar35 = local_a8 | local_b8;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  auVar37._4_4_ = auVar35._0_4_;
  auVar37._0_4_ = auVar35._4_4_;
  auVar37._8_4_ = auVar35._12_4_;
  auVar37._12_4_ = auVar35._8_4_;
  local_88 = param_3[2];
  uStack_80 = param_3[3];
  local_78 = param_3[4];
  puStack_70 = (undefined1 *)param_3[5];
  local_68 = param_3[6];
  uStack_60 = param_3[7];
  local_58 = param_3[8];
  uStack_50 = param_3[9];
  local_48 = param_3[10];
  uStack_40 = param_3[0xb];
  uVar34 = SUB164(auVar35 | auVar37,0) | SUB164(auVar35 | auVar37,8);
  uVar33 = 0;
  uStack_280 = 0x10362c;
  uVar28 = __ecp_nistz256_sqr_montx(param_1,param_3[10] | param_3[8],local_218,param_3 + -8);
  auVar36._0_4_ = -(uint)(uVar34 == uVar33);
  auVar36._4_4_ = auVar36._0_4_;
  auVar36._8_4_ = auVar36._0_4_;
  auVar36._12_4_ = auVar36._0_4_;
  auVar35._0_4_ =
       -(uint)((extraout_XMM1_Db == 0 && extraout_XMM1_Da == 0) &&
              (extraout_XMM1_Dd == 0 && extraout_XMM1_Dc == 0));
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  uVar19 = param_2[0xb];
  uStack_280 = 0x103677;
  __ecp_nistz256_sqr_montx(uVar28,param_2,local_258,param_2 + -8,param_2[8]);
  uStack_280 = 0x1036ad;
  __ecp_nistz256_mul_montx(local_198,local_298,local_58);
  uStack_280 = 0x1036e3;
  __ecp_nistz256_mul_montx(local_178,local_2d8,local_b8._0_8_);
  uStack_280 = 0x103725;
  __ecp_nistz256_mul_montx(local_198,local_218,local_d8);
  uStack_280 = 0x10376a;
  __ecp_nistz256_mul_montx(local_178,local_1f8,local_78);
  uStack_280 = 0x10377c;
  __ecp_nistz256_sub_fromx(local_238);
  uVar25 = local_160 | unaff_R13 | uVar19 | local_178[0];
  uVar32 = auVar35._0_8_ | auVar36._0_8_;
  uStack_280 = 0x1037c8;
  __ecp_nistz256_mul_montx(local_1d8,local_298,local_f8);
  uVar21 = local_240;
  uStack_280 = 0x1037fe;
  uVar22 = local_258[0];
  __ecp_nistz256_mul_montx(local_1b8,local_2d8,local_98);
  uStack_280 = 0x10380f;
  auVar37 = __ecp_nistz256_sub_fromx(&local_278);
  puVar16 = auVar37._8_8_;
  lVar29 = auVar37._0_8_;
  if (((((uVar21 == 0 && unaff_R13 == 0) && uVar19 == 0) && uVar22 == 0) && uVar32 == 0) &&
      uVar25 == 0) {
    local_78 = *puVar16;
    puStack_70 = (undefined1 *)puVar16[1];
    local_68 = puVar16[2];
    uStack_60 = puVar16[3];
    lVar31 = lVar29 + 0x40;
    uStack_e0 = 0x103267;
    puVar14 = puVar16;
    __ecp_nistz256_mul_by_2x(lVar29,lVar29 + 0x20,lVar31,&local_d8);
    uStack_e0 = 0x103285;
    __ecp_nistz256_sqr_montx(&local_98,puVar14 + -8,puVar14[8]);
    uStack_e0 = 0x1032a6;
    __ecp_nistz256_sqr_montx(&local_d8,local_158,local_d8);
    uStack_e0 = 0x1032cc;
    __ecp_nistz256_mul_montx(lVar31,puVar16 + -8,puVar16[4]);
    uStack_e0 = 0x1032d1;
    __ecp_nistz256_mul_by_2x();
    uStack_e0 = 0x1032f4;
    __ecp_nistz256_add_tox(local_b8);
    puVar13 = puStack_70;
    uVar24 = local_78;
    uStack_e0 = 0x103317;
    __ecp_nistz256_sub_fromx(&local_98);
    uVar20 = local_c8;
    uVar32 = uStack_d0;
    puVar15 = local_158;
    uStack_e0 = 0x103339;
    puVar16 = extraout_XMM1_Qa;
    __ecp_nistz256_sqr_montx(extraout_XMM1_Qa,puVar15,local_d8);
    uVar19 = (ulong)(CARRY8((ulong)puVar13,(ulong)puVar15) ||
                    CARRY8((ulong)(puVar13 + (long)puVar15),(ulong)(uVar24 != 0)));
    uVar21 = (ulong)CARRY8(uVar32,uVar19);
    uVar22 = (ulong)(CARRY8(uVar20,unaff_RBP) || CARRY8(uVar20 + unaff_RBP,uVar21));
    uVar19 = uVar32 + uVar19;
    uVar25 = uVar24 - 1;
    puVar15 = puVar13 + (long)puVar15 + (uVar24 != 0);
    uVar21 = uVar20 + unaff_RBP + uVar21;
    if ((uVar24 & 1) == 0) {
      uVar22 = 0;
      uVar19 = uVar32;
      uVar25 = uVar24;
      puVar15 = puVar13;
      uVar21 = uVar20;
    }
    uVar32 = (ulong)puVar15 >> 1 | uVar19 << 0x3f;
    *puVar16 = uVar25 >> 1 | (long)puVar15 << 0x3f;
    puVar16[1] = uVar32;
    puVar16[2] = uVar19 >> 1 | uVar21 << 0x3f;
    puVar16[3] = uVar21 >> 1 | uVar22 << 0x3f;
    uStack_e0 = 0x1033e4;
    __ecp_nistz256_mul_montx(local_b8,&local_138,local_98,uVar21 << 0x3f,uVar20,local_b8._0_8_);
    uStack_e0 = 0x1033f1;
    __ecp_nistz256_mul_by_2x(&local_58);
    uStack_e0 = 0x103400;
    __ecp_nistz256_add_tox(local_b8);
    uVar28 = uStack_c0;
    uStack_e0 = 0x10342b;
    __ecp_nistz256_mul_montx(&local_d8,local_158,local_78);
    uStack_e0 = 0x103438;
    uVar27 = __ecp_nistz256_mul_by_2x(&local_58);
    uVar18 = local_b8._8_8_;
    uVar23 = local_a8._0_8_;
    uStack_e0 = 0x10345b;
    __ecp_nistz256_sqr_montx(uVar27,&local_138,local_b8._0_8_);
    uStack_e0 = 0x103474;
    __ecp_nistz256_sub_fromx();
    uStack_e0 = 0x103490;
    __ecp_nistz256_subx(&local_d8);
    local_d8 = uVar28;
    uStack_e0 = 0x1034ce;
    uStack_d0 = uVar32;
    local_c8 = uVar18;
    uStack_c0 = uVar23;
    __ecp_nistz256_mul_montx(&local_d8,local_158,local_b8._0_8_);
    uStack_e0 = 0x1034dd;
    __ecp_nistz256_sub_fromx(extraout_XMM1_Qa_00);
    return;
  }
  uStack_280 = 0x103883;
  __ecp_nistz256_sqr_montx(local_218,local_2b8,local_238[0]);
  uStack_280 = 0x1038b8;
  __ecp_nistz256_mul_montx(&local_118,local_2f8,local_b8._0_8_);
  uStack_280 = 0x1038da;
  __ecp_nistz256_sqr_montx(local_258,local_2f8,local_278);
  uStack_280 = 0x10391f;
  __ecp_nistz256_mul_montx(&local_118,local_198,local_58);
  uStack_280 = 0x10394d;
  __ecp_nistz256_mul_montx(local_1f8,local_2d8,local_278);
  uStack_280 = 0x103983;
  __ecp_nistz256_mul_montx(local_1b8,local_2d8,local_1d8[0]);
  lVar29 = local_240 * 2;
  uVar26 = unaff_R13 * 2 + (ulong)CARRY8(local_240,local_240);
  uVar19 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                  CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_240,local_240)));
  uVar20 = local_260 * 2 + uVar19;
  uVar19 = (ulong)(CARRY8(local_260,local_260) || CARRY8(local_260 * 2,uVar19));
  uVar24 = local_258[0] * 2 + uVar19;
  uVar21 = (ulong)(uVar26 < local_270 || uVar26 - local_270 < (ulong)(lVar29 != -1));
  uVar22 = (ulong)(uVar20 < uVar21);
  uVar32 = (uVar24 - local_268) - uVar22;
  uVar25 = (uVar26 - local_270) - (ulong)(lVar29 != -1);
  lVar31 = lVar29 + 1;
  uVar21 = uVar20 - uVar21;
  if ((CARRY8(local_258[0],local_258[0]) || CARRY8(local_258[0] * 2,uVar19)) <
      (uVar24 < local_268 || uVar24 - local_268 < uVar22)) {
    uVar32 = uVar24;
    uVar25 = uVar26;
    lVar31 = lVar29;
    uVar21 = uVar20;
  }
  uStack_280 = 0x1039dd;
  __ecp_nistz256_subx();
  uStack_280 = 0x1039f2;
  __ecp_nistz256_sub_fromx(local_158);
  plVar17 = &local_138;
  uStack_280 = 0x103a1f;
  __ecp_nistz256_subx();
  *plVar17 = lVar31;
  plVar17[1] = uVar25;
  plVar17[2] = uVar21;
  plVar17[3] = uVar32;
  uStack_280 = 0x103a70;
  __ecp_nistz256_mul_montx(local_178,local_218,local_1f8[0]);
  uStack_280 = 0x103aa6;
  __ecp_nistz256_mul_montx(&local_138,local_2b8,local_138);
  uStack_280 = 0x103abb;
  pauVar30 = (undefined1 (*) [16])__ecp_nistz256_sub_fromx(&local_138);
  auVar2._8_8_ = uStack_110;
  auVar2._0_8_ = local_118;
  auVar11._8_8_ = uStack_50;
  auVar11._0_8_ = local_58;
  auVar12._8_8_ = uStack_40;
  auVar12._0_8_ = local_48;
  pauVar30[4] = auVar35 & local_b8 | ~auVar35 & (auVar36 & auVar11 | ~auVar36 & auVar2);
  pauVar30[5] = auVar35 & local_a8 | ~auVar35 & (auVar36 & auVar12 | ~auVar36 & local_108);
  auVar7._8_8_ = uStack_90;
  auVar7._0_8_ = local_98;
  auVar8._8_8_ = uStack_80;
  auVar8._0_8_ = local_88;
  auVar3._8_8_ = uStack_f0;
  auVar3._0_8_ = local_f8;
  auVar4._8_8_ = uStack_e0;
  auVar4._0_8_ = local_e8;
  *pauVar30 = auVar35 & auVar3 | ~auVar35 & (auVar36 & auVar7 | ~auVar36 & local_158);
  pauVar30[1] = auVar35 & auVar4 | ~auVar35 & (auVar36 & auVar8 | ~auVar36 & local_148);
  auVar1._8_8_ = uStack_130;
  auVar1._0_8_ = local_138;
  auVar9._8_8_ = puStack_70;
  auVar9._0_8_ = local_78;
  auVar10._8_8_ = uStack_60;
  auVar10._0_8_ = local_68;
  auVar5._8_8_ = uStack_d0;
  auVar5._0_8_ = local_d8;
  auVar6._8_8_ = uStack_c0;
  auVar6._0_8_ = local_c8;
  pauVar30[2] = auVar35 & auVar5 | ~auVar35 & (auVar36 & auVar9 | ~auVar36 & auVar1);
  pauVar30[3] = auVar35 & auVar6 | ~auVar35 & (auVar36 & auVar10 | ~auVar36 & local_128);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ecp_nistz256_point_add_affinex
               (undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4
               )

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_R13;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar27;
  uint uVar28;
  undefined1 auVar26 [16];
  uint uVar29;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [24];
  undefined8 uStack_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  long local_1d8 [4];
  undefined8 local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198 [3];
  ulong local_180;
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  local_c8 = param_2[2];
  uStack_c0 = param_2[3];
  local_b8 = param_2[4];
  uStack_b0 = param_2[5];
  local_a8 = param_2[6];
  uStack_a0 = param_2[7];
  local_98 = *(undefined1 (*) [16])(param_2 + 8);
  local_88 = *(undefined1 (*) [16])(param_2 + 10);
  auVar26 = local_88 | local_98;
  local_78 = *param_3;
  auVar17._4_4_ = auVar26._0_4_;
  auVar17._0_4_ = auVar26._4_4_;
  auVar17._8_4_ = auVar26._12_4_;
  auVar17._12_4_ = auVar26._8_4_;
  local_68 = param_3[1];
  local_58 = param_3[2];
  local_48 = param_3[3];
  uVar24 = SUB164(auVar26 | auVar17,0) | SUB164(auVar26 | auVar17,8);
  uVar22 = 0;
  auVar17 = local_48 | local_58 | local_68 | local_78;
  uStack_220 = 0x103d47;
  __ecp_nistz256_sqr_montx(param_1,local_1f8,param_2 + -8,param_2[8],param_4,param_2[0xb]);
  uVar25 = -(uint)(uVar24 == uVar22);
  auVar26._4_4_ = auVar17._0_4_;
  auVar26._0_4_ = auVar17._4_4_;
  auVar26._8_4_ = auVar17._12_4_;
  auVar26._12_4_ = auVar17._8_4_;
  uVar21 = -(uint)(SUB164(auVar26 | auVar17,0) == 0 && SUB164(auVar26 | auVar17,8) == 0);
  uStack_220 = 0x103d8c;
  uVar22 = uVar21;
  uVar24 = uVar21;
  uVar23 = uVar21;
  uVar27 = uVar25;
  uVar28 = uVar25;
  uVar29 = uVar25;
  __ecp_nistz256_mul_montx(local_218,local_278,*(undefined8 *)*param_3);
  uStack_220 = 0x103d9e;
  __ecp_nistz256_sub_fromx(local_1d8);
  uStack_220 = 0x103dd1;
  __ecp_nistz256_mul_montx(local_1f8,local_278,local_98._0_8_);
  uStack_220 = 0x103e07;
  __ecp_nistz256_mul_montx(&local_f8,local_258,local_98._0_8_);
  uStack_220 = 0x103e3a;
  __ecp_nistz256_mul_montx(local_1f8,local_278,local_58._0_8_);
  uStack_220 = 0x103e4c;
  __ecp_nistz256_sub_fromx(&local_1b8);
  uStack_220 = 0x103e72;
  __ecp_nistz256_sqr_montx(local_198,local_258,local_1d8[0]);
  uStack_220 = 0x103e98;
  uVar7 = local_1a0;
  __ecp_nistz256_sqr_montx(local_158,local_238,local_1b8);
  uStack_220 = 0x103ece;
  __ecp_nistz256_mul_montx(local_178,local_258,local_198[0]);
  uStack_220 = 0x103f0b;
  __ecp_nistz256_mul_montx(local_218,local_218,local_d8);
  lVar3 = local_180 * 2;
  uVar11 = unaff_R13 * 2 + (ulong)CARRY8(local_180,local_180);
  uVar1 = (ulong)(CARRY8(unaff_R13,unaff_R13) ||
                 CARRY8(unaff_R13 * 2,(ulong)CARRY8(local_180,local_180)));
  uVar8 = uVar7 * 2 + uVar1;
  uVar1 = (ulong)(CARRY8(uVar7,uVar7) || CARRY8(uVar7 * 2,uVar1));
  uVar9 = local_198[0] * 2 + uVar1;
  uVar7 = (ulong)(uVar11 < local_1b0 || uVar11 - local_1b0 < (ulong)(lVar3 != -1));
  uVar2 = (ulong)(uVar8 < uVar7);
  uVar10 = (uVar9 - local_1a8) - uVar2;
  uVar4 = (uVar11 - local_1b0) - (ulong)(lVar3 != -1);
  lVar5 = lVar3 + 1;
  uVar7 = uVar8 - uVar7;
  if ((CARRY8(local_198[0],local_198[0]) || CARRY8(local_198[0] * 2,uVar1)) <
      (uVar9 < local_1a8 || uVar9 - local_1a8 < uVar2)) {
    uVar10 = uVar9;
    uVar4 = uVar11;
    lVar5 = lVar3;
    uVar7 = uVar8;
  }
  uStack_220 = 0x103f68;
  __ecp_nistz256_subx();
  uStack_220 = 0x103f7d;
  __ecp_nistz256_sub_fromx(&local_138);
  plVar6 = local_1d8;
  uStack_220 = 0x103f9a;
  __ecp_nistz256_subx();
  *plVar6 = lVar5;
  plVar6[1] = uVar4;
  plVar6[2] = uVar7;
  plVar6[3] = uVar10;
  uStack_220 = 0x103fe8;
  __ecp_nistz256_mul_montx(local_1f8,local_1f8,local_b8);
  uStack_220 = 0x104015;
  __ecp_nistz256_mul_montx(local_1d8,local_258,local_1b8);
  uStack_220 = 0x104027;
  puVar12 = (uint *)__ecp_nistz256_sub_fromx(&local_118);
  uVar13 = uVar27 & _UNK_0012a0a4;
  uVar14 = uVar28 & _UNK_0012a0a8;
  uVar15 = uVar29 & _UNK_0012a0ac;
  uVar16 = uVar25 & _DAT_0012a0b0;
  uVar18 = uVar27 & _UNK_0012a0b4;
  uVar19 = uVar28 & _UNK_0012a0b8;
  uVar20 = uVar29 & _UNK_0012a0bc;
  puVar12[0x10] = uVar21 & local_98._0_4_ | ~uVar21 & (uVar25 & _DAT_0012a0a0 | ~uVar25 & local_f8);
  puVar12[0x11] = uVar22 & local_98._4_4_ | ~uVar22 & (uVar13 | ~uVar27 & uStack_f4);
  puVar12[0x12] = uVar24 & local_98._8_4_ | ~uVar24 & (uVar14 | ~uVar28 & uStack_f0);
  puVar12[0x13] = uVar23 & local_98._12_4_ | ~uVar23 & (uVar15 | ~uVar29 & uStack_ec);
  puVar12[0x14] = uVar21 & local_88._0_4_ | ~uVar21 & (uVar16 | ~uVar25 & local_e8);
  puVar12[0x15] = uVar22 & local_88._4_4_ | ~uVar22 & (uVar18 | ~uVar27 & uStack_e4);
  puVar12[0x16] = uVar24 & local_88._8_4_ | ~uVar24 & (uVar19 | ~uVar28 & uStack_e0);
  puVar12[0x17] = uVar23 & local_88._12_4_ | ~uVar23 & (uVar20 | ~uVar29 & uStack_dc);
  *puVar12 = uVar21 & (uint)local_d8 | ~uVar21 & (uVar25 & local_78._0_4_ | ~uVar25 & local_138);
  puVar12[1] = uVar22 & local_d8._4_4_ | ~uVar22 & (uVar27 & local_78._4_4_ | ~uVar27 & uStack_134);
  puVar12[2] = uVar24 & (uint)uStack_d0 | ~uVar24 & (uVar28 & local_78._8_4_ | ~uVar28 & uStack_130)
  ;
  puVar12[3] = uVar23 & uStack_d0._4_4_ |
               ~uVar23 & (uVar29 & local_78._12_4_ | ~uVar29 & uStack_12c);
  puVar12[4] = uVar21 & (uint)local_c8 | ~uVar21 & (uVar25 & local_68._0_4_ | ~uVar25 & local_128);
  puVar12[5] = uVar22 & local_c8._4_4_ | ~uVar22 & (uVar27 & local_68._4_4_ | ~uVar27 & uStack_124);
  puVar12[6] = uVar24 & (uint)uStack_c0 | ~uVar24 & (uVar28 & local_68._8_4_ | ~uVar28 & uStack_120)
  ;
  puVar12[7] = uVar23 & uStack_c0._4_4_ |
               ~uVar23 & (uVar29 & local_68._12_4_ | ~uVar29 & uStack_11c);
  puVar12[8] = uVar21 & (uint)local_b8 | ~uVar21 & (uVar25 & local_58._0_4_ | ~uVar25 & local_118);
  puVar12[9] = uVar22 & local_b8._4_4_ | ~uVar22 & (uVar27 & local_58._4_4_ | ~uVar27 & uStack_114);
  puVar12[10] = uVar24 & (uint)uStack_b0 |
                ~uVar24 & (uVar28 & local_58._8_4_ | ~uVar28 & uStack_110);
  puVar12[0xb] = uVar23 & uStack_b0._4_4_ |
                 ~uVar23 & (uVar29 & local_58._12_4_ | ~uVar29 & uStack_10c);
  puVar12[0xc] = uVar21 & (uint)local_a8 | ~uVar21 & (uVar25 & local_48._0_4_ | ~uVar25 & local_108)
  ;
  puVar12[0xd] = uVar22 & local_a8._4_4_ |
                 ~uVar22 & (uVar27 & local_48._4_4_ | ~uVar27 & uStack_104);
  puVar12[0xe] = uVar24 & (uint)uStack_a0 |
                 ~uVar24 & (uVar28 & local_48._8_4_ | ~uVar28 & uStack_100);
  puVar12[0xf] = uVar23 & uStack_a0._4_4_ |
                 ~uVar23 & (uVar29 & local_48._12_4_ | ~uVar29 & uStack_fc);
  return;
}



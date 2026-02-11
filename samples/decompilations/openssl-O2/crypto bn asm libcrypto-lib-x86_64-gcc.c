
ulong bn_mul_add_words(ulong *rp,ulong *ap,int num,ulong w)

{
  ulong *puVar1;
  ulong *puVar2;
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
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  uint uVar28;
  
  uVar24 = 0;
  if (0 < num) {
    if (3 < (uint)num) {
      uVar28 = num - 4U >> 2;
      uVar26 = (ulong)(uVar28 + 1);
      puVar2 = rp + uVar26 * 4;
      puVar27 = ap;
      do {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar24;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puVar27;
        auVar17 = auVar3 * auVar10 + auVar17;
        uVar25 = auVar17._0_8_;
        uVar24 = *rp;
        *rp = *rp + uVar25;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_ + (ulong)CARRY8(uVar24,uVar25);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = w;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar27[1];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar25 = auVar18._0_8_;
        puVar1 = rp + 1;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar25;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = auVar18._8_8_ + (ulong)CARRY8(uVar24,uVar25);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = w;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = puVar27[2];
        auVar19 = auVar5 * auVar12 + auVar19;
        uVar25 = auVar19._0_8_;
        puVar1 = rp + 2;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar25;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = auVar19._8_8_ + (ulong)CARRY8(uVar24,uVar25);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = w;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = puVar27[3];
        auVar20 = auVar6 * auVar13 + auVar20;
        uVar25 = auVar20._0_8_;
        puVar1 = rp + 3;
        uVar24 = *puVar1;
        *puVar1 = *puVar1 + uVar25;
        uVar24 = auVar20._8_8_ + (ulong)CARRY8(uVar24,uVar25);
        rp = rp + 4;
        puVar27 = puVar27 + 4;
      } while (rp != puVar2);
      ap = ap + uVar26 * 4;
      num = (num - 4U) + uVar28 * -4;
      rp = puVar2;
      if (num == 0) {
        return uVar24;
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar24;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = w;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *ap;
    auVar21 = auVar7 * auVar14 + auVar21;
    uVar26 = auVar21._0_8_;
    uVar24 = *rp;
    *rp = *rp + uVar26;
    uVar24 = auVar21._8_8_ + (ulong)CARRY8(uVar24,uVar26);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar24;
    if (num != 1) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = w;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ap[1];
      auVar22 = auVar8 * auVar15 + auVar22;
      uVar26 = auVar22._0_8_;
      puVar2 = rp + 1;
      uVar24 = *puVar2;
      *puVar2 = *puVar2 + uVar26;
      uVar24 = auVar22._8_8_ + (ulong)CARRY8(uVar24,uVar26);
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar24;
      if (num != 2) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = w;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = ap[2];
        auVar23 = auVar9 * auVar16 + auVar23;
        uVar26 = auVar23._0_8_;
        puVar2 = rp + 2;
        uVar24 = *puVar2;
        *puVar2 = *puVar2 + uVar26;
        return auVar23._8_8_ + (ulong)CARRY8(uVar24,uVar26);
      }
    }
  }
  return uVar24;
}



ulong bn_mul_words(ulong *rp,ulong *ap,int num,ulong w)

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
  ulong uVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  uint uVar27;
  
  uVar22 = 0;
  if (0 < num) {
    if (3 < (uint)num) {
      uVar27 = num - 4U >> 2;
      uVar23 = (ulong)(uVar27 + 1);
      puVar24 = ap;
      puVar25 = rp;
      do {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar22;
        puVar26 = puVar25 + 4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = w;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar24;
        auVar15 = auVar1 * auVar8 + auVar15;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = auVar15._8_8_;
        *puVar25 = auVar15._0_8_;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = w;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar24[1];
        auVar16 = auVar2 * auVar9 + auVar16;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = auVar16._8_8_;
        puVar25[1] = auVar16._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar24[2];
        auVar17 = auVar3 * auVar10 + auVar17;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = auVar17._8_8_;
        puVar25[2] = auVar17._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = w;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar24[3];
        auVar18 = auVar4 * auVar11 + auVar18;
        uVar22 = auVar18._8_8_;
        puVar25[3] = auVar18._0_8_;
        puVar24 = puVar24 + 4;
        puVar25 = puVar26;
      } while (puVar26 != rp + uVar23 * 4);
      ap = ap + uVar23 * 4;
      num = (num - 4U) + uVar27 * -4;
      rp = rp + uVar23 * 4;
      if (num == 0) {
        return uVar22;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar22;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = w;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *ap;
    auVar19 = auVar5 * auVar12 + auVar19;
    uVar22 = auVar19._8_8_;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar22;
    *rp = auVar19._0_8_;
    if (num != 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = w;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ap[1];
      auVar20 = auVar6 * auVar13 + auVar20;
      uVar22 = auVar20._8_8_;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar22;
      rp[1] = auVar20._0_8_;
      if (num != 2) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = w;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ap[2];
        auVar21 = auVar7 * auVar14 + auVar21;
        rp[2] = auVar21._0_8_;
        return auVar21._8_8_;
      }
    }
  }
  return uVar22;
}



void bn_sqr_words(ulong *rp,ulong *ap,int num)

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
  undefined1 (*pauVar15) [16];
  ulong *puVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  uint uVar19;
  
  if (0 < num) {
    pauVar17 = (undefined1 (*) [16])rp;
    if (3 < (uint)num) {
      uVar19 = num - 4U >> 2;
      uVar18 = (ulong)(uVar19 + 1);
      pauVar17 = (undefined1 (*) [16])(rp + uVar18 * 8);
      puVar16 = ap;
      do {
        pauVar15 = (undefined1 (*) [16])((long)rp + 0x40);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = *puVar16;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar16;
        *(undefined1 (*) [16])rp = auVar1 * auVar8;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = puVar16[1];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = puVar16[1];
        *(undefined1 (*) [16])((long)rp + 0x10) = auVar2 * auVar9;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = puVar16[2];
        auVar10._8_8_ = 0;
        auVar10._0_8_ = puVar16[2];
        *(undefined1 (*) [16])((long)rp + 0x20) = auVar3 * auVar10;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar16[3];
        auVar11._8_8_ = 0;
        auVar11._0_8_ = puVar16[3];
        *(undefined1 (*) [16])((long)rp + 0x30) = auVar4 * auVar11;
        rp = (ulong *)pauVar15;
        puVar16 = puVar16 + 4;
      } while (pauVar15 != pauVar17);
      num = (num - 4U) + uVar19 * -4;
      ap = ap + uVar18 * 4;
      if (num == 0) {
        return;
      }
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *ap;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *ap;
    *pauVar17 = auVar5 * auVar12;
    if ((num != 1) &&
       (auVar6._8_8_ = 0, auVar6._0_8_ = ap[1], auVar13._8_8_ = 0, auVar13._0_8_ = ap[1],
       pauVar17[1] = auVar6 * auVar13, num != 2)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = ap[2];
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ap[2];
      pauVar17[2] = auVar7 * auVar14;
      return;
    }
  }
  return;
}



ulong bn_div_words(ulong h,ulong l,ulong d)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = d;
  auVar2._8_8_ = h;
  auVar2._0_8_ = l;
  return SUB168(auVar2 / auVar1,0);
}



ulong bn_add_words(ulong *rp,ulong *ap,ulong *bp,int num)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (0 < num) {
    bVar4 = false;
    do {
      uVar1 = (ulong)bVar4;
      uVar2 = ap[uVar3] + bp[uVar3];
      bVar4 = CARRY8(ap[uVar3],bp[uVar3]) || CARRY8(uVar2,uVar1);
      rp[uVar3] = uVar2 + uVar1;
      uVar3 = uVar3 + 1;
      num = num + -1;
    } while (num != 0);
    uVar3 = (ulong)(-(uint)bVar4 & 1);
  }
  return uVar3;
}



ulong bn_sub_words(ulong *rp,ulong *ap,ulong *bp,int num)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (0 < num) {
    bVar4 = false;
    do {
      uVar1 = (ulong)bVar4;
      uVar2 = ap[uVar3] - bp[uVar3];
      bVar4 = ap[uVar3] < bp[uVar3] || uVar2 < uVar1;
      rp[uVar3] = uVar2 - uVar1;
      uVar3 = uVar3 + 1;
      num = num + -1;
    } while (num != 0);
    uVar3 = (ulong)(-(uint)bVar4 & 1);
  }
  return uVar3;
}



void bn_mul_comba8(undefined8 *param_1,ulong *param_2,ulong *param_3)

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
  ulong uVar131;
  ulong uVar132;
  ulong uVar133;
  ulong uVar134;
  ulong uVar135;
  ulong uVar136;
  ulong uVar137;
  ulong uVar138;
  ulong uVar139;
  ulong uVar140;
  ulong uVar141;
  ulong uVar142;
  ulong uVar143;
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
  ulong uVar156;
  ulong uVar157;
  ulong uVar158;
  ulong uVar159;
  ulong uVar160;
  ulong uVar161;
  ulong uVar162;
  ulong uVar163;
  ulong uVar164;
  ulong uVar165;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = *param_3;
  uVar136 = SUB168(auVar1 * auVar65,8);
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar136;
  *param_1 = SUB168(auVar1 * auVar65,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_3[1];
  auVar2 = auVar2 * auVar66;
  uVar155 = SUB168(auVar2 + auVar130,0);
  uVar134 = SUB168(auVar2 + auVar130,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = *param_3;
  uVar137 = SUB168(auVar3 * auVar67,8);
  uVar131 = SUB168(auVar3 * auVar67,0);
  uVar132 = (ulong)CARRY8(uVar155,uVar131);
  uVar133 = uVar134 + uVar137;
  uVar135 = uVar133 + uVar132;
  uVar147 = (ulong)CARRY8(auVar2._8_8_,(ulong)CARRY8(uVar136,auVar2._0_8_)) +
            (ulong)(CARRY8(uVar134,uVar137) || CARRY8(uVar133,uVar132));
  param_1[1] = uVar155 + uVar131;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = *param_3;
  uVar138 = SUB168(auVar4 * auVar68,8);
  uVar132 = SUB168(auVar4 * auVar68,0);
  uVar131 = uVar135 + uVar132;
  uVar132 = (ulong)CARRY8(uVar135,uVar132);
  uVar134 = uVar147 + uVar138;
  uVar148 = uVar134 + uVar132;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_3[1];
  uVar139 = SUB168(auVar5 * auVar69,8);
  uVar133 = SUB168(auVar5 * auVar69,0);
  uVar155 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar135 = uVar148 + uVar139;
  uVar149 = uVar135 + uVar133;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_2;
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_3[2];
  uVar140 = SUB168(auVar6 * auVar70,8);
  uVar137 = SUB168(auVar6 * auVar70,0);
  uVar131 = (ulong)CARRY8(uVar155,uVar137);
  uVar136 = uVar149 + uVar140;
  uVar150 = uVar136 + uVar131;
  uVar156 = (ulong)(CARRY8(uVar147,uVar138) || CARRY8(uVar134,uVar132)) +
            (ulong)(CARRY8(uVar148,uVar139) || CARRY8(uVar135,uVar133)) +
            (ulong)(CARRY8(uVar149,uVar140) || CARRY8(uVar136,uVar131));
  param_1[2] = uVar155 + uVar137;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_2;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_3[3];
  uVar139 = SUB168(auVar7 * auVar71,8);
  uVar132 = SUB168(auVar7 * auVar71,0);
  uVar131 = uVar150 + uVar132;
  uVar132 = (ulong)CARRY8(uVar150,uVar132);
  uVar135 = uVar156 + uVar139;
  uVar150 = uVar135 + uVar132;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_3[2];
  uVar140 = SUB168(auVar8 * auVar72,8);
  uVar133 = SUB168(auVar8 * auVar72,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar136 = uVar150 + uVar140;
  uVar157 = uVar136 + uVar133;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_3[1];
  uVar147 = SUB168(auVar9 * auVar73,8);
  uVar131 = SUB168(auVar9 * auVar73,0);
  uVar149 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar137 = uVar157 + uVar147;
  uVar158 = uVar137 + uVar131;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar74._8_8_ = 0;
  auVar74._0_8_ = *param_3;
  uVar148 = SUB168(auVar10 * auVar74,8);
  uVar138 = SUB168(auVar10 * auVar74,0);
  uVar134 = (ulong)CARRY8(uVar149,uVar138);
  uVar155 = uVar158 + uVar148;
  uVar159 = uVar155 + uVar134;
  uVar147 = (ulong)(CARRY8(uVar156,uVar139) || CARRY8(uVar135,uVar132)) +
            (ulong)(CARRY8(uVar150,uVar140) || CARRY8(uVar136,uVar133)) +
            (ulong)(CARRY8(uVar157,uVar147) || CARRY8(uVar137,uVar131)) +
            (ulong)(CARRY8(uVar158,uVar148) || CARRY8(uVar155,uVar134));
  param_1[3] = uVar149 + uVar138;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[4];
  auVar75._8_8_ = 0;
  auVar75._0_8_ = *param_3;
  uVar158 = SUB168(auVar11 * auVar75,8);
  uVar132 = SUB168(auVar11 * auVar75,0);
  uVar131 = uVar159 + uVar132;
  uVar132 = (ulong)CARRY8(uVar159,uVar132);
  uVar136 = uVar147 + uVar158;
  uVar148 = uVar136 + uVar132;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[3];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_3[1];
  uVar159 = SUB168(auVar12 * auVar76,8);
  uVar133 = SUB168(auVar12 * auVar76,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar137 = uVar148 + uVar159;
  uVar149 = uVar137 + uVar133;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_3[2];
  uVar141 = SUB168(auVar13 * auVar77,8);
  uVar131 = SUB168(auVar13 * auVar77,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar155 = uVar149 + uVar141;
  uVar150 = uVar155 + uVar131;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[1];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_3[3];
  uVar142 = SUB168(auVar14 * auVar78,8);
  uVar134 = SUB168(auVar14 * auVar78,0);
  uVar160 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar138 = uVar150 + uVar142;
  uVar156 = uVar138 + uVar134;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_2;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = param_3[4];
  uVar143 = SUB168(auVar15 * auVar79,8);
  uVar140 = SUB168(auVar15 * auVar79,0);
  uVar135 = (ulong)CARRY8(uVar160,uVar140);
  uVar139 = uVar156 + uVar143;
  uVar157 = uVar139 + uVar135;
  uVar142 = (ulong)(CARRY8(uVar147,uVar158) || CARRY8(uVar136,uVar132)) +
            (ulong)(CARRY8(uVar148,uVar159) || CARRY8(uVar137,uVar133)) +
            (ulong)(CARRY8(uVar149,uVar141) || CARRY8(uVar155,uVar131)) +
            (ulong)(CARRY8(uVar150,uVar142) || CARRY8(uVar138,uVar134)) +
            (ulong)(CARRY8(uVar156,uVar143) || CARRY8(uVar139,uVar135));
  param_1[4] = uVar160 + uVar140;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = param_3[5];
  uVar150 = SUB168(auVar16 * auVar80,8);
  uVar132 = SUB168(auVar16 * auVar80,0);
  uVar131 = uVar157 + uVar132;
  uVar132 = (ulong)CARRY8(uVar157,uVar132);
  uVar137 = uVar142 + uVar150;
  uVar143 = uVar137 + uVar132;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[1];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_3[4];
  uVar156 = SUB168(auVar17 * auVar81,8);
  uVar133 = SUB168(auVar17 * auVar81,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar155 = uVar143 + uVar156;
  uVar160 = uVar155 + uVar133;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[2];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_3[3];
  uVar157 = SUB168(auVar18 * auVar82,8);
  uVar131 = SUB168(auVar18 * auVar82,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar138 = uVar160 + uVar157;
  uVar151 = uVar138 + uVar131;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_3[2];
  uVar158 = SUB168(auVar19 * auVar83,8);
  uVar134 = SUB168(auVar19 * auVar83,0);
  uVar136 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar139 = uVar151 + uVar158;
  uVar152 = uVar139 + uVar134;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[4];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_3[1];
  uVar159 = SUB168(auVar20 * auVar84,8);
  uVar135 = SUB168(auVar20 * auVar84,0);
  uVar149 = uVar136 + uVar135;
  uVar135 = (ulong)CARRY8(uVar136,uVar135);
  uVar140 = uVar152 + uVar159;
  uVar153 = uVar140 + uVar135;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[5];
  auVar85._8_8_ = 0;
  auVar85._0_8_ = *param_3;
  uVar141 = SUB168(auVar21 * auVar85,8);
  uVar148 = SUB168(auVar21 * auVar85,0);
  uVar136 = (ulong)CARRY8(uVar149,uVar148);
  uVar147 = uVar153 + uVar141;
  uVar154 = uVar147 + uVar136;
  uVar151 = (ulong)(CARRY8(uVar142,uVar150) || CARRY8(uVar137,uVar132)) +
            (ulong)(CARRY8(uVar143,uVar156) || CARRY8(uVar155,uVar133)) +
            (ulong)(CARRY8(uVar160,uVar157) || CARRY8(uVar138,uVar131)) +
            (ulong)(CARRY8(uVar151,uVar158) || CARRY8(uVar139,uVar134)) +
            (ulong)(CARRY8(uVar152,uVar159) || CARRY8(uVar140,uVar135)) +
            (ulong)(CARRY8(uVar153,uVar141) || CARRY8(uVar147,uVar136));
  param_1[5] = uVar149 + uVar148;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[6];
  auVar86._8_8_ = 0;
  auVar86._0_8_ = *param_3;
  uVar156 = SUB168(auVar22 * auVar86,8);
  uVar132 = SUB168(auVar22 * auVar86,0);
  uVar131 = uVar154 + uVar132;
  uVar132 = (ulong)CARRY8(uVar154,uVar132);
  uVar155 = uVar151 + uVar156;
  uVar152 = uVar155 + uVar132;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[5];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_3[1];
  uVar157 = SUB168(auVar23 * auVar87,8);
  uVar133 = SUB168(auVar23 * auVar87,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar138 = uVar152 + uVar157;
  uVar153 = uVar138 + uVar133;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[4];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_3[2];
  uVar158 = SUB168(auVar24 * auVar88,8);
  uVar131 = SUB168(auVar24 * auVar88,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar139 = uVar153 + uVar158;
  uVar154 = uVar139 + uVar131;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_3[3];
  uVar159 = SUB168(auVar25 * auVar89,8);
  uVar134 = SUB168(auVar25 * auVar89,0);
  uVar136 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar140 = uVar154 + uVar159;
  uVar161 = uVar140 + uVar134;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[2];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_3[4];
  uVar141 = SUB168(auVar26 * auVar90,8);
  uVar135 = SUB168(auVar26 * auVar90,0);
  uVar137 = uVar136 + uVar135;
  uVar135 = (ulong)CARRY8(uVar136,uVar135);
  uVar147 = uVar161 + uVar141;
  uVar162 = uVar147 + uVar135;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[1];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_3[5];
  uVar142 = SUB168(auVar27 * auVar91,8);
  uVar136 = SUB168(auVar27 * auVar91,0);
  uVar160 = uVar137 + uVar136;
  uVar136 = (ulong)CARRY8(uVar137,uVar136);
  uVar148 = uVar162 + uVar142;
  uVar163 = uVar148 + uVar136;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *param_2;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = param_3[6];
  uVar143 = SUB168(auVar28 * auVar92,8);
  uVar150 = SUB168(auVar28 * auVar92,0);
  uVar137 = (ulong)CARRY8(uVar160,uVar150);
  uVar149 = uVar163 + uVar143;
  uVar164 = uVar149 + uVar137;
  uVar158 = (ulong)(CARRY8(uVar151,uVar156) || CARRY8(uVar155,uVar132)) +
            (ulong)(CARRY8(uVar152,uVar157) || CARRY8(uVar138,uVar133)) +
            (ulong)(CARRY8(uVar153,uVar158) || CARRY8(uVar139,uVar131)) +
            (ulong)(CARRY8(uVar154,uVar159) || CARRY8(uVar140,uVar134)) +
            (ulong)(CARRY8(uVar161,uVar141) || CARRY8(uVar147,uVar135)) +
            (ulong)(CARRY8(uVar162,uVar142) || CARRY8(uVar148,uVar136)) +
            (ulong)(CARRY8(uVar163,uVar143) || CARRY8(uVar149,uVar137));
  param_1[6] = uVar160 + uVar150;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *param_2;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = param_3[7];
  uVar154 = SUB168(auVar29 * auVar93,8);
  uVar132 = SUB168(auVar29 * auVar93,0);
  uVar131 = uVar164 + uVar132;
  uVar132 = (ulong)CARRY8(uVar164,uVar132);
  uVar138 = uVar158 + uVar154;
  uVar159 = uVar138 + uVar132;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[1];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_3[6];
  uVar161 = SUB168(auVar30 * auVar94,8);
  uVar133 = SUB168(auVar30 * auVar94,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar139 = uVar159 + uVar161;
  uVar141 = uVar139 + uVar133;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[2];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_3[5];
  uVar162 = SUB168(auVar31 * auVar95,8);
  uVar131 = SUB168(auVar31 * auVar95,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar140 = uVar141 + uVar162;
  uVar142 = uVar140 + uVar131;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_3[4];
  uVar163 = SUB168(auVar32 * auVar96,8);
  uVar134 = SUB168(auVar32 * auVar96,0);
  uVar136 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar147 = uVar142 + uVar163;
  uVar143 = uVar147 + uVar134;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[4];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_3[3];
  uVar164 = SUB168(auVar33 * auVar97,8);
  uVar135 = SUB168(auVar33 * auVar97,0);
  uVar137 = uVar136 + uVar135;
  uVar135 = (ulong)CARRY8(uVar136,uVar135);
  uVar148 = uVar143 + uVar164;
  uVar160 = uVar148 + uVar135;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_3[2];
  uVar144 = SUB168(auVar34 * auVar98,8);
  uVar136 = SUB168(auVar34 * auVar98,0);
  uVar155 = uVar137 + uVar136;
  uVar136 = (ulong)CARRY8(uVar137,uVar136);
  uVar149 = uVar160 + uVar144;
  uVar151 = uVar149 + uVar136;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_3[1];
  uVar145 = SUB168(auVar35 * auVar99,8);
  uVar137 = SUB168(auVar35 * auVar99,0);
  uVar165 = uVar155 + uVar137;
  uVar137 = (ulong)CARRY8(uVar155,uVar137);
  uVar150 = uVar151 + uVar145;
  uVar152 = uVar150 + uVar137;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar100._8_8_ = 0;
  auVar100._0_8_ = *param_3;
  uVar146 = SUB168(auVar36 * auVar100,8);
  uVar157 = SUB168(auVar36 * auVar100,0);
  uVar155 = (ulong)CARRY8(uVar165,uVar157);
  uVar156 = uVar152 + uVar146;
  uVar153 = uVar156 + uVar155;
  uVar151 = (ulong)(CARRY8(uVar158,uVar154) || CARRY8(uVar138,uVar132)) +
            (ulong)(CARRY8(uVar159,uVar161) || CARRY8(uVar139,uVar133)) +
            (ulong)(CARRY8(uVar141,uVar162) || CARRY8(uVar140,uVar131)) +
            (ulong)(CARRY8(uVar142,uVar163) || CARRY8(uVar147,uVar134)) +
            (ulong)(CARRY8(uVar143,uVar164) || CARRY8(uVar148,uVar135)) +
            (ulong)(CARRY8(uVar160,uVar144) || CARRY8(uVar149,uVar136)) +
            (ulong)(CARRY8(uVar151,uVar145) || CARRY8(uVar150,uVar137)) +
            (ulong)(CARRY8(uVar152,uVar146) || CARRY8(uVar156,uVar155));
  param_1[7] = uVar165 + uVar157;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_2[7];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_3[1];
  uVar157 = SUB168(auVar37 * auVar101,8);
  uVar132 = SUB168(auVar37 * auVar101,0);
  uVar131 = uVar153 + uVar132;
  uVar132 = (ulong)CARRY8(uVar153,uVar132);
  uVar155 = uVar151 + uVar157;
  uVar152 = uVar155 + uVar132;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[6];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_3[2];
  uVar158 = SUB168(auVar38 * auVar102,8);
  uVar133 = SUB168(auVar38 * auVar102,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar138 = uVar152 + uVar158;
  uVar153 = uVar138 + uVar133;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[5];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_3[3];
  uVar159 = SUB168(auVar39 * auVar103,8);
  uVar131 = SUB168(auVar39 * auVar103,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar139 = uVar153 + uVar159;
  uVar154 = uVar139 + uVar131;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_3[4];
  uVar141 = SUB168(auVar40 * auVar104,8);
  uVar134 = SUB168(auVar40 * auVar104,0);
  uVar136 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar140 = uVar154 + uVar141;
  uVar161 = uVar140 + uVar134;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_3[5];
  uVar142 = SUB168(auVar41 * auVar105,8);
  uVar135 = SUB168(auVar41 * auVar105,0);
  uVar137 = uVar136 + uVar135;
  uVar135 = (ulong)CARRY8(uVar136,uVar135);
  uVar147 = uVar161 + uVar142;
  uVar162 = uVar147 + uVar135;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_3[6];
  uVar143 = SUB168(auVar42 * auVar106,8);
  uVar136 = SUB168(auVar42 * auVar106,0);
  uVar156 = uVar137 + uVar136;
  uVar136 = (ulong)CARRY8(uVar137,uVar136);
  uVar148 = uVar162 + uVar143;
  uVar163 = uVar148 + uVar136;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[1];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_3[7];
  uVar160 = SUB168(auVar43 * auVar107,8);
  uVar150 = SUB168(auVar43 * auVar107,0);
  uVar137 = (ulong)CARRY8(uVar156,uVar150);
  uVar149 = uVar163 + uVar160;
  uVar164 = uVar149 + uVar137;
  uVar154 = (ulong)(CARRY8(uVar151,uVar157) || CARRY8(uVar155,uVar132)) +
            (ulong)(CARRY8(uVar152,uVar158) || CARRY8(uVar138,uVar133)) +
            (ulong)(CARRY8(uVar153,uVar159) || CARRY8(uVar139,uVar131)) +
            (ulong)(CARRY8(uVar154,uVar141) || CARRY8(uVar140,uVar134)) +
            (ulong)(CARRY8(uVar161,uVar142) || CARRY8(uVar147,uVar135)) +
            (ulong)(CARRY8(uVar162,uVar143) || CARRY8(uVar148,uVar136)) +
            (ulong)(CARRY8(uVar163,uVar160) || CARRY8(uVar149,uVar137));
  param_1[8] = uVar156 + uVar150;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[2];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_3[7];
  uVar150 = SUB168(auVar44 * auVar108,8);
  uVar132 = SUB168(auVar44 * auVar108,0);
  uVar131 = uVar164 + uVar132;
  uVar132 = (ulong)CARRY8(uVar164,uVar132);
  uVar137 = uVar154 + uVar150;
  uVar142 = uVar137 + uVar132;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[3];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_3[6];
  uVar156 = SUB168(auVar45 * auVar109,8);
  uVar133 = SUB168(auVar45 * auVar109,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar155 = uVar142 + uVar156;
  uVar143 = uVar155 + uVar133;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[4];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_3[5];
  uVar157 = SUB168(auVar46 * auVar110,8);
  uVar131 = SUB168(auVar46 * auVar110,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar138 = uVar143 + uVar157;
  uVar160 = uVar138 + uVar131;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[5];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_3[4];
  uVar158 = SUB168(auVar47 * auVar111,8);
  uVar134 = SUB168(auVar47 * auVar111,0);
  uVar136 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar139 = uVar160 + uVar158;
  uVar151 = uVar139 + uVar134;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[6];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_3[3];
  uVar159 = SUB168(auVar48 * auVar112,8);
  uVar135 = SUB168(auVar48 * auVar112,0);
  uVar149 = uVar136 + uVar135;
  uVar135 = (ulong)CARRY8(uVar136,uVar135);
  uVar140 = uVar151 + uVar159;
  uVar152 = uVar140 + uVar135;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[7];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_3[2];
  uVar141 = SUB168(auVar49 * auVar113,8);
  uVar148 = SUB168(auVar49 * auVar113,0);
  uVar136 = (ulong)CARRY8(uVar149,uVar148);
  uVar147 = uVar152 + uVar141;
  uVar153 = uVar147 + uVar136;
  uVar160 = (ulong)(CARRY8(uVar154,uVar150) || CARRY8(uVar137,uVar132)) +
            (ulong)(CARRY8(uVar142,uVar156) || CARRY8(uVar155,uVar133)) +
            (ulong)(CARRY8(uVar143,uVar157) || CARRY8(uVar138,uVar131)) +
            (ulong)(CARRY8(uVar160,uVar158) || CARRY8(uVar139,uVar134)) +
            (ulong)(CARRY8(uVar151,uVar159) || CARRY8(uVar140,uVar135)) +
            (ulong)(CARRY8(uVar152,uVar141) || CARRY8(uVar147,uVar136));
  param_1[9] = uVar149 + uVar148;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[7];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_3[3];
  uVar148 = SUB168(auVar50 * auVar114,8);
  uVar132 = SUB168(auVar50 * auVar114,0);
  uVar131 = uVar153 + uVar132;
  uVar132 = (ulong)CARRY8(uVar153,uVar132);
  uVar136 = uVar160 + uVar148;
  uVar158 = uVar136 + uVar132;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[6];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_3[4];
  uVar149 = SUB168(auVar51 * auVar115,8);
  uVar133 = SUB168(auVar51 * auVar115,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar137 = uVar158 + uVar149;
  uVar159 = uVar137 + uVar133;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_3[5];
  uVar150 = SUB168(auVar52 * auVar116,8);
  uVar131 = SUB168(auVar52 * auVar116,0);
  uVar135 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar155 = uVar159 + uVar150;
  uVar141 = uVar155 + uVar131;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[4];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_3[6];
  uVar156 = SUB168(auVar53 * auVar117,8);
  uVar134 = SUB168(auVar53 * auVar117,0);
  uVar147 = uVar135 + uVar134;
  uVar134 = (ulong)CARRY8(uVar135,uVar134);
  uVar138 = uVar141 + uVar156;
  uVar142 = uVar138 + uVar134;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[3];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_3[7];
  uVar157 = SUB168(auVar54 * auVar118,8);
  uVar140 = SUB168(auVar54 * auVar118,0);
  uVar135 = (ulong)CARRY8(uVar147,uVar140);
  uVar139 = uVar142 + uVar157;
  uVar143 = uVar139 + uVar135;
  uVar159 = (ulong)(CARRY8(uVar160,uVar148) || CARRY8(uVar136,uVar132)) +
            (ulong)(CARRY8(uVar158,uVar149) || CARRY8(uVar137,uVar133)) +
            (ulong)(CARRY8(uVar159,uVar150) || CARRY8(uVar155,uVar131)) +
            (ulong)(CARRY8(uVar141,uVar156) || CARRY8(uVar138,uVar134)) +
            (ulong)(CARRY8(uVar142,uVar157) || CARRY8(uVar139,uVar135));
  param_1[10] = uVar147 + uVar140;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[4];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_3[7];
  uVar140 = SUB168(auVar55 * auVar119,8);
  uVar132 = SUB168(auVar55 * auVar119,0);
  uVar131 = uVar143 + uVar132;
  uVar132 = (ulong)CARRY8(uVar143,uVar132);
  uVar135 = uVar159 + uVar140;
  uVar150 = uVar135 + uVar132;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[5];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_3[6];
  uVar147 = SUB168(auVar56 * auVar120,8);
  uVar133 = SUB168(auVar56 * auVar120,0);
  uVar134 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar136 = uVar150 + uVar147;
  uVar156 = uVar136 + uVar133;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[6];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_3[5];
  uVar148 = SUB168(auVar57 * auVar121,8);
  uVar131 = SUB168(auVar57 * auVar121,0);
  uVar139 = uVar134 + uVar131;
  uVar131 = (ulong)CARRY8(uVar134,uVar131);
  uVar137 = uVar156 + uVar148;
  uVar157 = uVar137 + uVar131;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[7];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_3[4];
  uVar149 = SUB168(auVar58 * auVar122,8);
  uVar138 = SUB168(auVar58 * auVar122,0);
  uVar134 = (ulong)CARRY8(uVar139,uVar138);
  uVar155 = uVar157 + uVar149;
  uVar158 = uVar155 + uVar134;
  uVar150 = (ulong)(CARRY8(uVar159,uVar140) || CARRY8(uVar135,uVar132)) +
            (ulong)(CARRY8(uVar150,uVar147) || CARRY8(uVar136,uVar133)) +
            (ulong)(CARRY8(uVar156,uVar148) || CARRY8(uVar137,uVar131)) +
            (ulong)(CARRY8(uVar157,uVar149) || CARRY8(uVar155,uVar134));
  param_1[0xb] = uVar139 + uVar138;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[7];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_3[5];
  uVar138 = SUB168(auVar59 * auVar123,8);
  uVar132 = SUB168(auVar59 * auVar123,0);
  uVar131 = uVar158 + uVar132;
  uVar132 = (ulong)CARRY8(uVar158,uVar132);
  uVar134 = uVar150 + uVar138;
  uVar147 = uVar134 + uVar132;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_3[6];
  uVar139 = SUB168(auVar60 * auVar124,8);
  uVar133 = SUB168(auVar60 * auVar124,0);
  uVar155 = uVar131 + uVar133;
  uVar133 = (ulong)CARRY8(uVar131,uVar133);
  uVar135 = uVar147 + uVar139;
  uVar148 = uVar135 + uVar133;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[5];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_3[7];
  uVar140 = SUB168(auVar61 * auVar125,8);
  uVar137 = SUB168(auVar61 * auVar125,0);
  uVar131 = (ulong)CARRY8(uVar155,uVar137);
  uVar136 = uVar148 + uVar140;
  uVar149 = uVar136 + uVar131;
  uVar139 = (ulong)(CARRY8(uVar150,uVar138) || CARRY8(uVar134,uVar132)) +
            (ulong)(CARRY8(uVar147,uVar139) || CARRY8(uVar135,uVar133)) +
            (ulong)(CARRY8(uVar148,uVar140) || CARRY8(uVar136,uVar131));
  param_1[0xc] = uVar155 + uVar137;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_3[7];
  uVar137 = SUB168(auVar62 * auVar126,8);
  uVar132 = SUB168(auVar62 * auVar126,0);
  uVar136 = uVar149 + uVar132;
  uVar132 = (ulong)CARRY8(uVar149,uVar132);
  uVar131 = uVar139 + uVar137;
  uVar138 = uVar131 + uVar132;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[7];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_3[6];
  uVar155 = SUB168(auVar63 * auVar127,8);
  uVar135 = SUB168(auVar63 * auVar127,0);
  uVar133 = (ulong)CARRY8(uVar136,uVar135);
  uVar134 = uVar138 + uVar155;
  auVar129._8_8_ =
       (ulong)(CARRY8(uVar139,uVar137) || CARRY8(uVar131,uVar132)) +
       (ulong)(CARRY8(uVar138,uVar155) || CARRY8(uVar134,uVar133));
  auVar129._0_8_ = uVar134 + uVar133;
  param_1[0xd] = uVar136 + uVar135;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_3[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar64 * auVar128 + auVar129;
  return;
}



void bn_mul_comba4(undefined8 *param_1,ulong *param_2,ulong *param_3)

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
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_3;
  uVar39 = SUB168(auVar1 * auVar17,8);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar39;
  *param_1 = SUB168(auVar1 * auVar17,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[1];
  auVar2 = auVar2 * auVar18;
  uVar38 = SUB168(auVar2 + auVar34,0);
  uVar46 = SUB168(auVar2 + auVar34,8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *param_3;
  uVar40 = SUB168(auVar3 * auVar19,8);
  uVar35 = SUB168(auVar3 * auVar19,0);
  uVar36 = (ulong)CARRY8(uVar38,uVar35);
  uVar37 = uVar46 + uVar40;
  uVar47 = uVar37 + uVar36;
  uVar49 = (ulong)CARRY8(auVar2._8_8_,(ulong)CARRY8(uVar39,auVar2._0_8_)) +
           (ulong)(CARRY8(uVar46,uVar40) || CARRY8(uVar37,uVar36));
  param_1[1] = uVar38 + uVar35;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *param_3;
  uVar41 = SUB168(auVar4 * auVar20,8);
  uVar36 = SUB168(auVar4 * auVar20,0);
  uVar35 = uVar47 + uVar36;
  uVar36 = (ulong)CARRY8(uVar47,uVar36);
  uVar38 = uVar49 + uVar41;
  uVar50 = uVar38 + uVar36;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[1];
  uVar47 = SUB168(auVar5 * auVar21,8);
  uVar37 = SUB168(auVar5 * auVar21,0);
  uVar48 = uVar35 + uVar37;
  uVar37 = (ulong)CARRY8(uVar35,uVar37);
  uVar39 = uVar50 + uVar47;
  uVar51 = uVar39 + uVar37;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_3[2];
  uVar42 = SUB168(auVar6 * auVar22,8);
  uVar46 = SUB168(auVar6 * auVar22,0);
  uVar35 = (ulong)CARRY8(uVar48,uVar46);
  uVar40 = uVar51 + uVar42;
  uVar52 = uVar40 + uVar35;
  uVar42 = (ulong)(CARRY8(uVar49,uVar41) || CARRY8(uVar38,uVar36)) +
           (ulong)(CARRY8(uVar50,uVar47) || CARRY8(uVar39,uVar37)) +
           (ulong)(CARRY8(uVar51,uVar42) || CARRY8(uVar40,uVar35));
  param_1[2] = uVar48 + uVar46;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *param_2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[3];
  uVar43 = SUB168(auVar7 * auVar23,8);
  uVar36 = SUB168(auVar7 * auVar23,0);
  uVar35 = uVar52 + uVar36;
  uVar36 = (ulong)CARRY8(uVar52,uVar36);
  uVar39 = uVar42 + uVar43;
  uVar48 = uVar39 + uVar36;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  uVar52 = SUB168(auVar8 * auVar24,8);
  uVar37 = SUB168(auVar8 * auVar24,0);
  uVar38 = uVar35 + uVar37;
  uVar37 = (ulong)CARRY8(uVar35,uVar37);
  uVar40 = uVar48 + uVar52;
  uVar49 = uVar40 + uVar37;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[1];
  uVar44 = SUB168(auVar9 * auVar25,8);
  uVar35 = SUB168(auVar9 * auVar25,0);
  uVar53 = uVar38 + uVar35;
  uVar35 = (ulong)CARRY8(uVar38,uVar35);
  uVar46 = uVar49 + uVar44;
  uVar50 = uVar46 + uVar35;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *param_3;
  uVar45 = SUB168(auVar10 * auVar26,8);
  uVar47 = SUB168(auVar10 * auVar26,0);
  uVar38 = (ulong)CARRY8(uVar53,uVar47);
  uVar41 = uVar50 + uVar45;
  uVar51 = uVar41 + uVar38;
  uVar49 = (ulong)(CARRY8(uVar42,uVar43) || CARRY8(uVar39,uVar36)) +
           (ulong)(CARRY8(uVar48,uVar52) || CARRY8(uVar40,uVar37)) +
           (ulong)(CARRY8(uVar49,uVar44) || CARRY8(uVar46,uVar35)) +
           (ulong)(CARRY8(uVar50,uVar45) || CARRY8(uVar41,uVar38));
  param_1[3] = uVar53 + uVar47;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[3];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[1];
  uVar47 = SUB168(auVar11 * auVar27,8);
  uVar36 = SUB168(auVar11 * auVar27,0);
  uVar35 = uVar51 + uVar36;
  uVar36 = (ulong)CARRY8(uVar51,uVar36);
  uVar38 = uVar49 + uVar47;
  uVar50 = uVar38 + uVar36;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[2];
  uVar42 = SUB168(auVar12 * auVar28,8);
  uVar37 = SUB168(auVar12 * auVar28,0);
  uVar41 = uVar35 + uVar37;
  uVar37 = (ulong)CARRY8(uVar35,uVar37);
  uVar39 = uVar50 + uVar42;
  uVar51 = uVar39 + uVar37;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[3];
  uVar48 = SUB168(auVar13 * auVar29,8);
  uVar46 = SUB168(auVar13 * auVar29,0);
  uVar35 = (ulong)CARRY8(uVar41,uVar46);
  uVar40 = uVar51 + uVar48;
  uVar43 = uVar40 + uVar35;
  uVar42 = (ulong)(CARRY8(uVar49,uVar47) || CARRY8(uVar38,uVar36)) +
           (ulong)(CARRY8(uVar50,uVar42) || CARRY8(uVar39,uVar37)) +
           (ulong)(CARRY8(uVar51,uVar48) || CARRY8(uVar40,uVar35));
  param_1[4] = uVar41 + uVar46;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[3];
  uVar46 = SUB168(auVar14 * auVar30,8);
  uVar36 = SUB168(auVar14 * auVar30,0);
  uVar40 = uVar43 + uVar36;
  uVar36 = (ulong)CARRY8(uVar43,uVar36);
  uVar35 = uVar42 + uVar46;
  uVar47 = uVar35 + uVar36;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[2];
  uVar41 = SUB168(auVar15 * auVar31,8);
  uVar39 = SUB168(auVar15 * auVar31,0);
  uVar37 = (ulong)CARRY8(uVar40,uVar39);
  uVar38 = uVar47 + uVar41;
  auVar33._8_8_ =
       (ulong)(CARRY8(uVar42,uVar46) || CARRY8(uVar35,uVar36)) +
       (ulong)(CARRY8(uVar47,uVar41) || CARRY8(uVar38,uVar37));
  auVar33._0_8_ = uVar38 + uVar37;
  param_1[5] = uVar40 + uVar39;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar16 * auVar32 + auVar33;
  return;
}



void bn_sqr_comba8(undefined8 *param_1,ulong *param_2)

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
  ulong uVar77;
  ulong uVar78;
  ulong uVar79;
  ulong uVar80;
  ulong uVar81;
  ulong uVar82;
  ulong uVar83;
  ulong uVar84;
  ulong uVar85;
  ulong uVar86;
  ulong uVar87;
  ulong uVar88;
  ulong uVar89;
  ulong uVar90;
  ulong uVar91;
  ulong uVar92;
  ulong uVar93;
  ulong uVar94;
  ulong uVar95;
  ulong uVar96;
  ulong uVar97;
  ulong uVar98;
  ulong uVar99;
  ulong uVar100;
  ulong uVar101;
  ulong uVar102;
  ulong uVar103;
  ulong uVar104;
  ulong uVar105;
  ulong uVar106;
  ulong uVar107;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  uVar82 = SUB168(auVar1 * auVar37,8);
  *param_1 = SUB168(auVar1 * auVar37,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar38._8_8_ = 0;
  auVar38._0_8_ = *param_2;
  auVar2 = auVar2 * auVar38;
  uVar83 = auVar2._8_8_;
  auVar75._8_8_ = uVar83;
  auVar75._0_8_ = uVar82;
  uVar77 = auVar2._0_8_;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = uVar77;
  auVar2 = auVar2 + auVar75;
  uVar82 = (ulong)CARRY8(uVar82,uVar77);
  uVar79 = SUB168(auVar2 + auVar76,8);
  uVar90 = (ulong)CARRY8(uVar83,uVar82) +
           (ulong)(CARRY8(uVar83 + uVar82,uVar83) ||
                  CARRY8(auVar2._8_8_,(ulong)CARRY8(auVar2._0_8_,uVar77)));
  param_1[1] = SUB168(auVar2 + auVar76,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  uVar84 = SUB168(auVar3 * auVar39,8);
  uVar82 = SUB168(auVar3 * auVar39,0);
  uVar77 = uVar79 + uVar82;
  uVar82 = (ulong)CARRY8(uVar79,uVar82);
  uVar83 = uVar90 + uVar84;
  uVar91 = uVar83 + uVar82;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *param_2;
  uVar85 = SUB168(auVar4 * auVar40,8);
  uVar78 = SUB168(auVar4 * auVar40,0);
  uVar80 = uVar77 + uVar78;
  uVar77 = (ulong)CARRY8(uVar77,uVar78);
  uVar101 = uVar91 + uVar85;
  uVar92 = uVar101 + uVar77;
  uVar79 = (ulong)CARRY8(uVar80,uVar78);
  uVar81 = uVar92 + uVar85;
  uVar93 = uVar81 + uVar79;
  uVar91 = (ulong)(CARRY8(uVar90,uVar84) || CARRY8(uVar83,uVar82)) +
           (ulong)(CARRY8(uVar91,uVar85) || CARRY8(uVar101,uVar77)) +
           (ulong)(CARRY8(uVar92,uVar85) || CARRY8(uVar81,uVar79));
  param_1[2] = uVar80 + uVar78;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[3];
  auVar41._8_8_ = 0;
  auVar41._0_8_ = *param_2;
  uVar85 = SUB168(auVar5 * auVar41,8);
  uVar77 = SUB168(auVar5 * auVar41,0);
  uVar79 = uVar93 + uVar77;
  uVar82 = (ulong)CARRY8(uVar93,uVar77);
  uVar101 = uVar91 + uVar85;
  uVar93 = uVar101 + uVar82;
  uVar83 = uVar79 + uVar77;
  uVar77 = (ulong)CARRY8(uVar79,uVar77);
  uVar81 = uVar93 + uVar85;
  uVar98 = uVar81 + uVar77;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[1];
  uVar90 = SUB168(auVar6 * auVar42,8);
  uVar84 = SUB168(auVar6 * auVar42,0);
  uVar92 = uVar83 + uVar84;
  uVar79 = (ulong)CARRY8(uVar83,uVar84);
  uVar78 = uVar98 + uVar90;
  uVar99 = uVar78 + uVar79;
  uVar83 = (ulong)CARRY8(uVar92,uVar84);
  uVar80 = uVar99 + uVar90;
  uVar100 = uVar80 + uVar83;
  uVar91 = (ulong)(CARRY8(uVar91,uVar85) || CARRY8(uVar101,uVar82)) +
           (ulong)(CARRY8(uVar93,uVar85) || CARRY8(uVar81,uVar77)) +
           (ulong)(CARRY8(uVar98,uVar90) || CARRY8(uVar78,uVar79)) +
           (ulong)(CARRY8(uVar99,uVar90) || CARRY8(uVar80,uVar83));
  param_1[3] = uVar92 + uVar84;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  uVar86 = SUB168(auVar7 * auVar43,8);
  uVar82 = SUB168(auVar7 * auVar43,0);
  uVar83 = uVar100 + uVar82;
  uVar82 = (ulong)CARRY8(uVar100,uVar82);
  uVar81 = uVar91 + uVar86;
  uVar92 = uVar81 + uVar82;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[1];
  auVar8 = auVar8 * auVar44;
  uVar100 = auVar8._8_8_;
  uVar79 = auVar8._0_8_;
  uVar101 = SUB168(auVar8 + auVar73,0);
  uVar77 = (ulong)CARRY8(uVar83,uVar79);
  uVar78 = uVar92 + uVar100;
  auVar73._8_8_ = uVar78;
  auVar73._0_8_ = uVar83;
  uVar83 = uVar101 + uVar79;
  uVar79 = (ulong)CARRY8(uVar101,uVar79);
  uVar80 = SUB168(auVar8 + auVar73,8);
  uVar93 = uVar80 + uVar79;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4];
  auVar45._8_8_ = 0;
  auVar45._0_8_ = *param_2;
  uVar87 = SUB168(auVar9 * auVar45,8);
  uVar90 = SUB168(auVar9 * auVar45,0);
  uVar102 = uVar83 + uVar90;
  uVar83 = (ulong)CARRY8(uVar83,uVar90);
  uVar84 = uVar93 + uVar87;
  uVar98 = uVar84 + uVar83;
  uVar101 = (ulong)CARRY8(uVar102,uVar90);
  uVar85 = uVar98 + uVar87;
  uVar99 = uVar85 + uVar101;
  uVar100 = (ulong)(CARRY8(uVar91,uVar86) || CARRY8(uVar81,uVar82)) +
            (ulong)(CARRY8(uVar92,uVar100) || CARRY8(uVar78,uVar77)) +
            (ulong)(CARRY8(uVar78 + uVar77,uVar100) || CARRY8(uVar80,uVar79)) +
            (ulong)(CARRY8(uVar93,uVar87) || CARRY8(uVar84,uVar83)) +
            (ulong)(CARRY8(uVar98,uVar87) || CARRY8(uVar85,uVar101));
  param_1[4] = uVar102 + uVar90;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[5];
  auVar46._8_8_ = 0;
  auVar46._0_8_ = *param_2;
  uVar98 = SUB168(auVar10 * auVar46,8);
  uVar77 = SUB168(auVar10 * auVar46,0);
  uVar79 = uVar99 + uVar77;
  uVar82 = (ulong)CARRY8(uVar99,uVar77);
  uVar78 = uVar100 + uVar98;
  uVar87 = uVar78 + uVar82;
  uVar101 = uVar79 + uVar77;
  uVar77 = (ulong)CARRY8(uVar79,uVar77);
  uVar80 = uVar87 + uVar98;
  uVar102 = uVar80 + uVar77;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[4];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[1];
  uVar99 = SUB168(auVar11 * auVar47,8);
  uVar83 = SUB168(auVar11 * auVar47,0);
  uVar81 = uVar101 + uVar83;
  uVar79 = (ulong)CARRY8(uVar101,uVar83);
  uVar84 = uVar102 + uVar99;
  uVar94 = uVar84 + uVar79;
  uVar101 = uVar81 + uVar83;
  uVar83 = (ulong)CARRY8(uVar81,uVar83);
  uVar85 = uVar94 + uVar99;
  uVar95 = uVar85 + uVar83;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[3];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[2];
  uVar86 = SUB168(auVar12 * auVar48,8);
  uVar92 = SUB168(auVar12 * auVar48,0);
  uVar93 = uVar101 + uVar92;
  uVar101 = (ulong)CARRY8(uVar101,uVar92);
  uVar90 = uVar95 + uVar86;
  uVar96 = uVar90 + uVar101;
  uVar81 = (ulong)CARRY8(uVar93,uVar92);
  uVar91 = uVar96 + uVar86;
  uVar97 = uVar91 + uVar81;
  uVar94 = (ulong)(CARRY8(uVar100,uVar98) || CARRY8(uVar78,uVar82)) +
           (ulong)(CARRY8(uVar87,uVar98) || CARRY8(uVar80,uVar77)) +
           (ulong)(CARRY8(uVar102,uVar99) || CARRY8(uVar84,uVar79)) +
           (ulong)(CARRY8(uVar94,uVar99) || CARRY8(uVar85,uVar83)) +
           (ulong)(CARRY8(uVar95,uVar86) || CARRY8(uVar90,uVar101)) +
           (ulong)(CARRY8(uVar96,uVar86) || CARRY8(uVar91,uVar81));
  param_1[5] = uVar93 + uVar92;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  uVar99 = SUB168(auVar13 * auVar49,8);
  uVar82 = SUB168(auVar13 * auVar49,0);
  uVar77 = uVar97 + uVar82;
  uVar82 = (ulong)CARRY8(uVar97,uVar82);
  uVar80 = uVar94 + uVar99;
  uVar95 = uVar80 + uVar82;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[4];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[2];
  uVar86 = SUB168(auVar14 * auVar50,8);
  uVar79 = SUB168(auVar14 * auVar50,0);
  uVar83 = uVar77 + uVar79;
  uVar77 = (ulong)CARRY8(uVar77,uVar79);
  uVar84 = uVar95 + uVar86;
  uVar96 = uVar84 + uVar77;
  uVar81 = uVar83 + uVar79;
  uVar79 = (ulong)CARRY8(uVar83,uVar79);
  uVar85 = uVar96 + uVar86;
  uVar97 = uVar85 + uVar79;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[5];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[1];
  uVar100 = SUB168(auVar15 * auVar51,8);
  uVar101 = SUB168(auVar15 * auVar51,0);
  uVar78 = uVar81 + uVar101;
  uVar83 = (ulong)CARRY8(uVar81,uVar101);
  uVar90 = uVar97 + uVar100;
  uVar103 = uVar90 + uVar83;
  uVar81 = uVar78 + uVar101;
  uVar101 = (ulong)CARRY8(uVar78,uVar101);
  uVar91 = uVar103 + uVar100;
  uVar104 = uVar91 + uVar101;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[6];
  auVar52._8_8_ = 0;
  auVar52._0_8_ = *param_2;
  uVar87 = SUB168(auVar16 * auVar52,8);
  uVar98 = SUB168(auVar16 * auVar52,0);
  uVar102 = uVar81 + uVar98;
  uVar81 = (ulong)CARRY8(uVar81,uVar98);
  uVar92 = uVar104 + uVar87;
  uVar105 = uVar92 + uVar81;
  uVar78 = (ulong)CARRY8(uVar102,uVar98);
  uVar93 = uVar105 + uVar87;
  uVar106 = uVar93 + uVar78;
  uVar100 = (ulong)(CARRY8(uVar94,uVar99) || CARRY8(uVar80,uVar82)) +
            (ulong)(CARRY8(uVar95,uVar86) || CARRY8(uVar84,uVar77)) +
            (ulong)(CARRY8(uVar96,uVar86) || CARRY8(uVar85,uVar79)) +
            (ulong)(CARRY8(uVar97,uVar100) || CARRY8(uVar90,uVar83)) +
            (ulong)(CARRY8(uVar103,uVar100) || CARRY8(uVar91,uVar101)) +
            (ulong)(CARRY8(uVar104,uVar87) || CARRY8(uVar92,uVar81)) +
            (ulong)(CARRY8(uVar105,uVar87) || CARRY8(uVar93,uVar78));
  param_1[6] = uVar102 + uVar98;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[7];
  auVar53._8_8_ = 0;
  auVar53._0_8_ = *param_2;
  uVar105 = SUB168(auVar17 * auVar53,8);
  uVar77 = SUB168(auVar17 * auVar53,0);
  uVar79 = uVar106 + uVar77;
  uVar82 = (ulong)CARRY8(uVar106,uVar77);
  uVar84 = uVar100 + uVar105;
  uVar87 = uVar84 + uVar82;
  uVar101 = uVar79 + uVar77;
  uVar77 = (ulong)CARRY8(uVar79,uVar77);
  uVar85 = uVar87 + uVar105;
  uVar102 = uVar85 + uVar77;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[6];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[1];
  uVar106 = SUB168(auVar18 * auVar54,8);
  uVar83 = SUB168(auVar18 * auVar54,0);
  uVar81 = uVar101 + uVar83;
  uVar79 = (ulong)CARRY8(uVar101,uVar83);
  uVar90 = uVar102 + uVar106;
  uVar94 = uVar90 + uVar79;
  uVar101 = uVar81 + uVar83;
  uVar83 = (ulong)CARRY8(uVar81,uVar83);
  uVar91 = uVar94 + uVar106;
  uVar95 = uVar91 + uVar83;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[5];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[2];
  uVar88 = SUB168(auVar19 * auVar55,8);
  uVar81 = SUB168(auVar19 * auVar55,0);
  uVar78 = uVar101 + uVar81;
  uVar101 = (ulong)CARRY8(uVar101,uVar81);
  uVar92 = uVar95 + uVar88;
  uVar96 = uVar92 + uVar101;
  uVar80 = uVar78 + uVar81;
  uVar81 = (ulong)CARRY8(uVar78,uVar81);
  uVar93 = uVar96 + uVar88;
  uVar97 = uVar93 + uVar81;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[4];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[3];
  uVar89 = SUB168(auVar20 * auVar56,8);
  uVar86 = SUB168(auVar20 * auVar56,0);
  uVar107 = uVar80 + uVar86;
  uVar78 = (ulong)CARRY8(uVar80,uVar86);
  uVar98 = uVar97 + uVar89;
  uVar103 = uVar98 + uVar78;
  uVar80 = (ulong)CARRY8(uVar107,uVar86);
  uVar99 = uVar103 + uVar89;
  uVar104 = uVar99 + uVar80;
  uVar94 = (ulong)(CARRY8(uVar100,uVar105) || CARRY8(uVar84,uVar82)) +
           (ulong)(CARRY8(uVar87,uVar105) || CARRY8(uVar85,uVar77)) +
           (ulong)(CARRY8(uVar102,uVar106) || CARRY8(uVar90,uVar79)) +
           (ulong)(CARRY8(uVar94,uVar106) || CARRY8(uVar91,uVar83)) +
           (ulong)(CARRY8(uVar95,uVar88) || CARRY8(uVar92,uVar101)) +
           (ulong)(CARRY8(uVar96,uVar88) || CARRY8(uVar93,uVar81)) +
           (ulong)(CARRY8(uVar97,uVar89) || CARRY8(uVar98,uVar78)) +
           (ulong)(CARRY8(uVar103,uVar89) || CARRY8(uVar99,uVar80));
  param_1[7] = uVar107 + uVar86;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  uVar86 = SUB168(auVar21 * auVar57,8);
  uVar82 = SUB168(auVar21 * auVar57,0);
  uVar77 = uVar104 + uVar82;
  uVar82 = (ulong)CARRY8(uVar104,uVar82);
  uVar80 = uVar94 + uVar86;
  uVar95 = uVar80 + uVar82;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[5];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[3];
  uVar100 = SUB168(auVar22 * auVar58,8);
  uVar79 = SUB168(auVar22 * auVar58,0);
  uVar83 = uVar77 + uVar79;
  uVar77 = (ulong)CARRY8(uVar77,uVar79);
  uVar84 = uVar95 + uVar100;
  uVar96 = uVar84 + uVar77;
  uVar81 = uVar83 + uVar79;
  uVar79 = (ulong)CARRY8(uVar83,uVar79);
  uVar85 = uVar96 + uVar100;
  uVar97 = uVar85 + uVar79;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[6];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[2];
  uVar87 = SUB168(auVar23 * auVar59,8);
  uVar101 = SUB168(auVar23 * auVar59,0);
  uVar78 = uVar81 + uVar101;
  uVar83 = (ulong)CARRY8(uVar81,uVar101);
  uVar90 = uVar97 + uVar87;
  uVar103 = uVar90 + uVar83;
  uVar81 = uVar78 + uVar101;
  uVar101 = (ulong)CARRY8(uVar78,uVar101);
  uVar91 = uVar103 + uVar87;
  uVar104 = uVar91 + uVar101;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[7];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[1];
  uVar102 = SUB168(auVar24 * auVar60,8);
  uVar98 = SUB168(auVar24 * auVar60,0);
  uVar99 = uVar81 + uVar98;
  uVar81 = (ulong)CARRY8(uVar81,uVar98);
  uVar92 = uVar104 + uVar102;
  uVar105 = uVar92 + uVar81;
  uVar78 = (ulong)CARRY8(uVar99,uVar98);
  uVar93 = uVar105 + uVar102;
  uVar106 = uVar93 + uVar78;
  uVar97 = (ulong)(CARRY8(uVar94,uVar86) || CARRY8(uVar80,uVar82)) +
           (ulong)(CARRY8(uVar95,uVar100) || CARRY8(uVar84,uVar77)) +
           (ulong)(CARRY8(uVar96,uVar100) || CARRY8(uVar85,uVar79)) +
           (ulong)(CARRY8(uVar97,uVar87) || CARRY8(uVar90,uVar83)) +
           (ulong)(CARRY8(uVar103,uVar87) || CARRY8(uVar91,uVar101)) +
           (ulong)(CARRY8(uVar104,uVar102) || CARRY8(uVar92,uVar81)) +
           (ulong)(CARRY8(uVar105,uVar102) || CARRY8(uVar93,uVar78));
  param_1[8] = uVar99 + uVar98;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[7];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[2];
  uVar98 = SUB168(auVar25 * auVar61,8);
  uVar77 = SUB168(auVar25 * auVar61,0);
  uVar79 = uVar106 + uVar77;
  uVar82 = (ulong)CARRY8(uVar106,uVar77);
  uVar78 = uVar97 + uVar98;
  uVar100 = uVar78 + uVar82;
  uVar101 = uVar79 + uVar77;
  uVar77 = (ulong)CARRY8(uVar79,uVar77);
  uVar80 = uVar100 + uVar98;
  uVar87 = uVar80 + uVar77;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[6];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[3];
  uVar99 = SUB168(auVar26 * auVar62,8);
  uVar83 = SUB168(auVar26 * auVar62,0);
  uVar81 = uVar101 + uVar83;
  uVar79 = (ulong)CARRY8(uVar101,uVar83);
  uVar84 = uVar87 + uVar99;
  uVar102 = uVar84 + uVar79;
  uVar101 = uVar81 + uVar83;
  uVar83 = (ulong)CARRY8(uVar81,uVar83);
  uVar85 = uVar102 + uVar99;
  uVar94 = uVar85 + uVar83;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[5];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[4];
  uVar86 = SUB168(auVar27 * auVar63,8);
  uVar92 = SUB168(auVar27 * auVar63,0);
  uVar93 = uVar101 + uVar92;
  uVar101 = (ulong)CARRY8(uVar101,uVar92);
  uVar90 = uVar94 + uVar86;
  uVar95 = uVar90 + uVar101;
  uVar81 = (ulong)CARRY8(uVar93,uVar92);
  uVar91 = uVar95 + uVar86;
  uVar96 = uVar91 + uVar81;
  uVar94 = (ulong)(CARRY8(uVar97,uVar98) || CARRY8(uVar78,uVar82)) +
           (ulong)(CARRY8(uVar100,uVar98) || CARRY8(uVar80,uVar77)) +
           (ulong)(CARRY8(uVar87,uVar99) || CARRY8(uVar84,uVar79)) +
           (ulong)(CARRY8(uVar102,uVar99) || CARRY8(uVar85,uVar83)) +
           (ulong)(CARRY8(uVar94,uVar86) || CARRY8(uVar90,uVar101)) +
           (ulong)(CARRY8(uVar95,uVar86) || CARRY8(uVar91,uVar81));
  param_1[9] = uVar93 + uVar92;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  uVar92 = SUB168(auVar28 * auVar64,8);
  uVar82 = SUB168(auVar28 * auVar64,0);
  uVar77 = uVar96 + uVar82;
  uVar82 = (ulong)CARRY8(uVar96,uVar82);
  uVar81 = uVar94 + uVar92;
  uVar99 = uVar81 + uVar82;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[6];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[4];
  uVar93 = SUB168(auVar29 * auVar65,8);
  uVar79 = SUB168(auVar29 * auVar65,0);
  uVar83 = uVar77 + uVar79;
  uVar77 = (ulong)CARRY8(uVar77,uVar79);
  uVar78 = uVar99 + uVar93;
  uVar86 = uVar78 + uVar77;
  uVar101 = uVar83 + uVar79;
  uVar79 = (ulong)CARRY8(uVar83,uVar79);
  uVar80 = uVar86 + uVar93;
  uVar100 = uVar80 + uVar79;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[7];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[3];
  uVar98 = SUB168(auVar30 * auVar66,8);
  uVar90 = SUB168(auVar30 * auVar66,0);
  uVar91 = uVar101 + uVar90;
  uVar83 = (ulong)CARRY8(uVar101,uVar90);
  uVar84 = uVar100 + uVar98;
  uVar87 = uVar84 + uVar83;
  uVar101 = (ulong)CARRY8(uVar91,uVar90);
  uVar85 = uVar87 + uVar98;
  uVar102 = uVar85 + uVar101;
  uVar86 = (ulong)(CARRY8(uVar94,uVar92) || CARRY8(uVar81,uVar82)) +
           (ulong)(CARRY8(uVar99,uVar93) || CARRY8(uVar78,uVar77)) +
           (ulong)(CARRY8(uVar86,uVar93) || CARRY8(uVar80,uVar79)) +
           (ulong)(CARRY8(uVar100,uVar98) || CARRY8(uVar84,uVar83)) +
           (ulong)(CARRY8(uVar87,uVar98) || CARRY8(uVar85,uVar101));
  param_1[10] = uVar91 + uVar90;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[7];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[4];
  uVar90 = SUB168(auVar31 * auVar67,8);
  uVar77 = SUB168(auVar31 * auVar67,0);
  uVar79 = uVar102 + uVar77;
  uVar82 = (ulong)CARRY8(uVar102,uVar77);
  uVar101 = uVar86 + uVar90;
  uVar92 = uVar101 + uVar82;
  uVar83 = uVar79 + uVar77;
  uVar77 = (ulong)CARRY8(uVar79,uVar77);
  uVar81 = uVar92 + uVar90;
  uVar93 = uVar81 + uVar77;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[6];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[5];
  uVar91 = SUB168(auVar32 * auVar68,8);
  uVar84 = SUB168(auVar32 * auVar68,0);
  uVar85 = uVar83 + uVar84;
  uVar79 = (ulong)CARRY8(uVar83,uVar84);
  uVar78 = uVar93 + uVar91;
  uVar98 = uVar78 + uVar79;
  uVar83 = (ulong)CARRY8(uVar85,uVar84);
  uVar80 = uVar98 + uVar91;
  uVar99 = uVar80 + uVar83;
  uVar93 = (ulong)(CARRY8(uVar86,uVar90) || CARRY8(uVar101,uVar82)) +
           (ulong)(CARRY8(uVar92,uVar90) || CARRY8(uVar81,uVar77)) +
           (ulong)(CARRY8(uVar93,uVar91) || CARRY8(uVar78,uVar79)) +
           (ulong)(CARRY8(uVar98,uVar91) || CARRY8(uVar80,uVar83));
  param_1[0xb] = uVar85 + uVar84;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  uVar84 = SUB168(auVar33 * auVar69,8);
  uVar82 = SUB168(auVar33 * auVar69,0);
  uVar77 = uVar99 + uVar82;
  uVar82 = (ulong)CARRY8(uVar99,uVar82);
  uVar83 = uVar93 + uVar84;
  uVar90 = uVar83 + uVar82;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[7];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[5];
  uVar85 = SUB168(auVar34 * auVar70,8);
  uVar78 = SUB168(auVar34 * auVar70,0);
  uVar80 = uVar77 + uVar78;
  uVar77 = (ulong)CARRY8(uVar77,uVar78);
  uVar101 = uVar90 + uVar85;
  uVar91 = uVar101 + uVar77;
  uVar79 = (ulong)CARRY8(uVar80,uVar78);
  uVar81 = uVar91 + uVar85;
  uVar92 = uVar81 + uVar79;
  uVar84 = (ulong)(CARRY8(uVar93,uVar84) || CARRY8(uVar83,uVar82)) +
           (ulong)(CARRY8(uVar90,uVar85) || CARRY8(uVar101,uVar77)) +
           (ulong)(CARRY8(uVar91,uVar85) || CARRY8(uVar81,uVar79));
  param_1[0xc] = uVar80 + uVar78;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[7];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[6];
  uVar78 = SUB168(auVar35 * auVar71,8);
  uVar101 = SUB168(auVar35 * auVar71,0);
  uVar80 = uVar92 + uVar101;
  uVar82 = (ulong)CARRY8(uVar92,uVar101);
  uVar79 = uVar84 + uVar78;
  uVar81 = uVar79 + uVar82;
  uVar77 = (ulong)CARRY8(uVar80,uVar101);
  uVar83 = uVar81 + uVar78;
  auVar74._8_8_ =
       (ulong)(CARRY8(uVar84,uVar78) || CARRY8(uVar79,uVar82)) +
       (ulong)(CARRY8(uVar81,uVar78) || CARRY8(uVar83,uVar77));
  auVar74._0_8_ = uVar83 + uVar77;
  param_1[0xd] = uVar80 + uVar101;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar36 * auVar72 + auVar74;
  return;
}



void bn_sqr_comba4(undefined8 *param_1,ulong *param_2)

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
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  uVar29 = SUB168(auVar1 * auVar11,8);
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *param_2;
  auVar2 = auVar2 * auVar12;
  uVar30 = auVar2._8_8_;
  auVar23._8_8_ = uVar30;
  auVar23._0_8_ = uVar29;
  uVar25 = auVar2._0_8_;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar25;
  auVar2 = auVar2 + auVar23;
  uVar29 = (ulong)CARRY8(uVar29,uVar25);
  uVar35 = SUB168(auVar2 + auVar24,8);
  uVar37 = (ulong)CARRY8(uVar30,uVar29) +
           (ulong)(CARRY8(uVar30 + uVar29,uVar30) ||
                  CARRY8(auVar2._8_8_,(ulong)CARRY8(auVar2._0_8_,uVar25)));
  param_1[1] = SUB168(auVar2 + auVar24,0);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  uVar31 = SUB168(auVar3 * auVar13,8);
  uVar29 = SUB168(auVar3 * auVar13,0);
  uVar25 = uVar35 + uVar29;
  uVar29 = (ulong)CARRY8(uVar35,uVar29);
  uVar35 = uVar37 + uVar31;
  uVar38 = uVar35 + uVar29;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[2];
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *param_2;
  uVar32 = SUB168(auVar4 * auVar14,8);
  uVar26 = SUB168(auVar4 * auVar14,0);
  uVar36 = uVar25 + uVar26;
  uVar25 = (ulong)CARRY8(uVar25,uVar26);
  uVar27 = uVar38 + uVar32;
  uVar39 = uVar27 + uVar25;
  uVar30 = (ulong)CARRY8(uVar36,uVar26);
  uVar28 = uVar39 + uVar32;
  uVar40 = uVar28 + uVar30;
  uVar37 = (ulong)(CARRY8(uVar37,uVar31) || CARRY8(uVar35,uVar29)) +
           (ulong)(CARRY8(uVar38,uVar32) || CARRY8(uVar27,uVar25)) +
           (ulong)(CARRY8(uVar39,uVar32) || CARRY8(uVar28,uVar30));
  param_1[2] = uVar36 + uVar26;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[3];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_2;
  uVar33 = SUB168(auVar5 * auVar15,8);
  uVar25 = SUB168(auVar5 * auVar15,0);
  uVar30 = uVar40 + uVar25;
  uVar29 = (ulong)CARRY8(uVar40,uVar25);
  uVar27 = uVar37 + uVar33;
  uVar36 = uVar27 + uVar29;
  uVar35 = uVar30 + uVar25;
  uVar25 = (ulong)CARRY8(uVar30,uVar25);
  uVar28 = uVar36 + uVar33;
  uVar38 = uVar28 + uVar25;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[1];
  uVar34 = SUB168(auVar6 * auVar16,8);
  uVar32 = SUB168(auVar6 * auVar16,0);
  uVar41 = uVar35 + uVar32;
  uVar30 = (ulong)CARRY8(uVar35,uVar32);
  uVar26 = uVar38 + uVar34;
  uVar39 = uVar26 + uVar30;
  uVar35 = (ulong)CARRY8(uVar41,uVar32);
  uVar31 = uVar39 + uVar34;
  uVar40 = uVar31 + uVar35;
  uVar36 = (ulong)(CARRY8(uVar37,uVar33) || CARRY8(uVar27,uVar29)) +
           (ulong)(CARRY8(uVar36,uVar33) || CARRY8(uVar28,uVar25)) +
           (ulong)(CARRY8(uVar38,uVar34) || CARRY8(uVar26,uVar30)) +
           (ulong)(CARRY8(uVar39,uVar34) || CARRY8(uVar31,uVar35));
  param_1[3] = uVar41 + uVar32;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  uVar32 = SUB168(auVar7 * auVar17,8);
  uVar29 = SUB168(auVar7 * auVar17,0);
  uVar30 = uVar40 + uVar29;
  uVar29 = (ulong)CARRY8(uVar40,uVar29);
  uVar35 = uVar36 + uVar32;
  uVar38 = uVar35 + uVar29;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar8 = auVar8 * auVar18;
  uVar37 = auVar8._8_8_;
  uVar26 = auVar8._0_8_;
  uVar31 = SUB168(auVar8 + auVar21,0);
  uVar25 = (ulong)CARRY8(uVar30,uVar26);
  uVar27 = uVar38 + uVar37;
  auVar21._8_8_ = uVar27;
  auVar21._0_8_ = uVar30;
  uVar30 = (ulong)CARRY8(uVar31,uVar26);
  uVar28 = SUB168(auVar8 + auVar21,8);
  uVar39 = uVar28 + uVar30;
  uVar32 = (ulong)(CARRY8(uVar36,uVar32) || CARRY8(uVar35,uVar29)) +
           (ulong)(CARRY8(uVar38,uVar37) || CARRY8(uVar27,uVar25)) +
           (ulong)(CARRY8(uVar27 + uVar25,uVar37) || CARRY8(uVar28,uVar30));
  param_1[4] = uVar31 + uVar26;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  uVar26 = SUB168(auVar9 * auVar19,8);
  uVar27 = SUB168(auVar9 * auVar19,0);
  uVar31 = uVar39 + uVar27;
  uVar29 = (ulong)CARRY8(uVar39,uVar27);
  uVar30 = uVar32 + uVar26;
  uVar28 = uVar30 + uVar29;
  uVar25 = (ulong)CARRY8(uVar31,uVar27);
  uVar35 = uVar28 + uVar26;
  auVar22._8_8_ =
       (ulong)(CARRY8(uVar32,uVar26) || CARRY8(uVar30,uVar29)) +
       (ulong)(CARRY8(uVar28,uVar26) || CARRY8(uVar35,uVar25));
  auVar22._0_8_ = uVar35 + uVar25;
  param_1[5] = uVar31 + uVar27;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar10 * auVar20 + auVar22;
  return;
}



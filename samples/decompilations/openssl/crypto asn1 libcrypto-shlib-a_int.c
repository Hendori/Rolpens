
ulong c2i_ibuf(byte *param_1,uint *param_2,byte *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined1 auVar3 [13];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [14];
  undefined1 auVar22 [15];
  undefined1 auVar23 [13];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [14];
  undefined1 auVar27 [15];
  undefined1 auVar28 [14];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [13];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  unkuint9 Var41;
  undefined1 auVar42 [11];
  undefined1 auVar43 [13];
  undefined1 auVar44 [14];
  undefined1 auVar45 [13];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [11];
  undefined1 auVar53 [14];
  undefined1 auVar54 [13];
  undefined1 auVar55 [14];
  undefined1 auVar56 [13];
  undefined1 auVar57 [15];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  uint6 uVar61;
  uint5 uVar62;
  undefined1 auVar63 [15];
  byte bVar64;
  uint uVar65;
  byte *pbVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  undefined2 uVar72;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ushort uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  unkuint10 Var76;
  undefined1 auVar77 [16];
  undefined1 auVar83 [14];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar82;
  
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0xa0,__func___8);
    ERR_set_error(0xd,0xde,0);
LAB_00100280:
    uVar69 = 0;
  }
  else {
    bVar2 = *param_3;
    if (param_2 != (uint *)0x0) {
      *param_2 = bVar2 & 0x80;
    }
    if (param_4 == 1) {
      if (param_1 != (byte *)0x0) {
        bVar64 = -*param_3;
        if (-1 < (char)bVar2) {
          bVar64 = *param_3;
        }
        *param_1 = bVar64;
      }
      return 1;
    }
    if (*param_3 == 0) {
LAB_00100039:
      uVar69 = param_4 - 1;
      if (-1 < (char)(bVar2 ^ param_3[1])) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0xc1,__func___8);
        ERR_set_error(0xd,0xdd,0);
        goto LAB_00100280;
      }
    }
    else {
      uVar69 = param_4;
      if (*param_3 == 0xff) {
        if (param_4 - 2 < 0xf) {
          auVar84 = (undefined1  [16])0x0;
          uVar67 = 0;
          lVar68 = 1;
          uVar65 = 0;
LAB_00100142:
          uVar1 = (param_4 - uVar67) - 1;
          if (6 < (param_4 - uVar67) - 2) {
            uVar67 = *(ulong *)(param_3 + uVar67 + 1);
            uVar81 = (undefined1)(uVar67 >> 0x38);
            auVar4._8_6_ = 0;
            auVar4._0_8_ = uVar67;
            auVar4[0xe] = uVar81;
            uVar80 = (undefined1)(uVar67 >> 0x30);
            auVar9._8_4_ = 0;
            auVar9._0_8_ = uVar67;
            auVar9[0xc] = uVar80;
            auVar9._13_2_ = auVar4._13_2_;
            auVar13._8_4_ = 0;
            auVar13._0_8_ = uVar67;
            auVar13._12_3_ = auVar9._12_3_;
            uVar79 = (undefined1)(uVar67 >> 0x28);
            auVar19._8_2_ = 0;
            auVar19._0_8_ = uVar67;
            auVar19[10] = uVar79;
            auVar19._11_4_ = auVar13._11_4_;
            auVar24._8_2_ = 0;
            auVar24._0_8_ = uVar67;
            auVar24._10_5_ = auVar19._10_5_;
            uVar78 = (undefined1)(uVar67 >> 0x20);
            auVar29[8] = uVar78;
            auVar29._0_8_ = uVar67;
            auVar29._9_6_ = auVar24._9_6_;
            auVar46._7_8_ = 0;
            auVar46._0_7_ = auVar29._8_7_;
            auVar47._8_7_ = 0;
            auVar47._0_8_ = SUB158(auVar46 << 0x40,7);
            auVar48._9_6_ = 0;
            auVar48._0_9_ = SUB159(auVar47 << 0x38,6);
            auVar49._10_5_ = 0;
            auVar49._0_10_ = SUB1510(auVar48 << 0x30,5);
            auVar50._11_4_ = 0;
            auVar50._0_11_ = SUB1511(auVar49 << 0x28,4);
            uVar73 = (ushort)uVar67;
            auVar63._12_3_ = 0;
            auVar63._0_12_ = SUB1512(auVar50 << 0x20,3);
            auVar37._2_13_ = SUB1513(auVar63 << 0x18,2);
            auVar37._0_2_ = uVar73 & 0xff;
            auVar5._8_6_ = 0;
            auVar5._0_8_ = uVar67;
            auVar5[0xe] = uVar81;
            auVar10._8_4_ = 0;
            auVar10._0_8_ = uVar67;
            auVar10[0xc] = uVar80;
            auVar10._13_2_ = auVar5._13_2_;
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar67;
            auVar14._12_3_ = auVar10._12_3_;
            auVar20._8_2_ = 0;
            auVar20._0_8_ = uVar67;
            auVar20[10] = uVar79;
            auVar20._11_4_ = auVar14._11_4_;
            auVar25._8_2_ = 0;
            auVar25._0_8_ = uVar67;
            auVar25._10_5_ = auVar20._10_5_;
            auVar30[8] = uVar78;
            auVar30._0_8_ = uVar67;
            auVar30._9_6_ = auVar25._9_6_;
            auVar51._7_8_ = 0;
            auVar51._0_7_ = auVar30._8_7_;
            Var41 = CONCAT81(SUB158(auVar51 << 0x40,7),(char)(uVar67 >> 0x18));
            auVar59._9_6_ = 0;
            auVar59._0_9_ = Var41;
            auVar52._1_10_ = SUB1510(auVar59 << 0x30,5);
            auVar52[0] = (char)(uVar67 >> 0x10);
            auVar60._11_4_ = 0;
            auVar60._0_11_ = auVar52;
            auVar36[2] = (char)(uVar67 >> 8);
            auVar36._0_2_ = uVar73;
            auVar36._3_12_ = SUB1512(auVar60 << 0x20,3);
            auVar38._2_13_ = auVar36._2_13_;
            auVar38._0_2_ = uVar73 & 0xff;
            uVar82 = auVar29._8_4_;
            Var76 = (unkuint10)auVar37._0_4_ << 0x40;
            uVar72 = (undefined2)Var41;
            auVar11._10_2_ = 0;
            auVar11._0_10_ = auVar38._0_10_;
            auVar11._12_2_ = uVar72;
            uVar61 = CONCAT42(auVar11._10_4_,auVar52._0_2_);
            auVar53._6_8_ = 0;
            auVar53._0_6_ = uVar61;
            uVar65 = auVar38._0_4_;
            auVar26._4_2_ = auVar36._2_2_;
            auVar26._0_4_ = uVar65;
            auVar26._6_8_ = SUB148(auVar53 << 0x40,6);
            auVar31._10_2_ = 0;
            auVar31._0_10_ = Var76;
            auVar31[0xc] = uVar81;
            uVar62 = CONCAT32(auVar31._10_3_,auVar9._12_2_);
            auVar54._5_8_ = 0;
            auVar54._0_5_ = uVar62;
            auVar32._4_2_ = auVar19._10_2_;
            auVar32._0_4_ = uVar82;
            auVar32._6_7_ = SUB137(auVar54 << 0x40,6);
            auVar6._10_2_ = 0;
            auVar6._0_10_ = auVar38._0_10_;
            auVar6._12_2_ = uVar72;
            auVar55._2_4_ = auVar6._10_4_;
            auVar55._0_2_ = auVar52._0_2_;
            auVar55._6_8_ = 0;
            auVar21._4_2_ = auVar36._2_2_;
            auVar21._0_4_ = uVar65;
            auVar21._6_8_ = SUB148(auVar55 << 0x40,6);
            auVar85._0_4_ = uVar65 & 0xffff;
            auVar85._4_10_ = auVar21._4_10_;
            auVar85._14_2_ = 0;
            auVar71._4_4_ = auVar11._10_4_ >> 0x10;
            auVar71._0_4_ = (int)uVar61;
            auVar71._8_2_ = uVar73 & 0xff;
            auVar71._10_2_ = 0;
            auVar71._12_4_ = auVar26._4_4_;
            auVar33._10_2_ = 0;
            auVar33._0_10_ = Var76;
            auVar33[0xc] = uVar81;
            auVar56._2_3_ = auVar33._10_3_;
            auVar56._0_2_ = auVar9._12_2_;
            auVar56._5_8_ = 0;
            auVar34._4_2_ = auVar19._10_2_;
            auVar34._0_4_ = uVar82;
            auVar34._6_7_ = SUB137(auVar56 << 0x40,6);
            auVar75._0_4_ = uVar82 & 0xffff;
            auVar75._4_9_ = auVar34._4_9_;
            auVar75._13_3_ = 0;
            auVar77._4_3_ = auVar31._10_3_ >> 0x10;
            auVar77._0_4_ = (int)uVar62;
            auVar77[7] = 0;
            auVar77._8_4_ = uVar82 & 0xffff;
            auVar77._12_4_ = auVar32._4_4_;
            auVar84 = auVar71 | auVar85 | auVar77 | auVar75 | auVar84;
            uVar65 = auVar84._4_4_ | auVar84._0_4_;
            lVar68 = lVar68 + (uVar1 & 0xfffffffffffffff8);
            if ((uVar1 & 7) == 0) goto LAB_0010023f;
          }
          uVar65 = uVar65 | param_3[lVar68];
          if ((((lVar68 + 1U < param_4) &&
               (uVar65 = uVar65 | param_3[lVar68 + 1], lVar68 + 2U < param_4)) &&
              (uVar65 = uVar65 | param_3[lVar68 + 2], lVar68 + 3U < param_4)) &&
             (((uVar65 = uVar65 | param_3[lVar68 + 3], lVar68 + 4U < param_4 &&
               (uVar65 = uVar65 | param_3[lVar68 + 4], lVar68 + 5U < param_4)) &&
              (uVar65 = uVar65 | param_3[lVar68 + 5], lVar68 + 6U < param_4)))) {
            uVar65 = uVar65 | param_3[lVar68 + 6];
          }
        }
        else {
          auVar84 = (undefined1  [16])0x0;
          uVar67 = param_4 - 1 & 0xfffffffffffffff0;
          pbVar66 = param_3;
          do {
            auVar70 = *(undefined1 (*) [16])(pbVar66 + 1);
            pbVar66 = pbVar66 + 0x10;
            uVar65 = CONCAT13(0,CONCAT12(auVar70[9],(ushort)auVar70[8]));
            auVar7[0xd] = 0;
            auVar7._0_13_ = auVar70._0_13_;
            auVar7[0xe] = auVar70[7];
            auVar12[0xc] = auVar70[6];
            auVar12._0_12_ = auVar70._0_12_;
            auVar12._13_2_ = auVar7._13_2_;
            auVar15[0xb] = 0;
            auVar15._0_11_ = auVar70._0_11_;
            auVar15._12_3_ = auVar12._12_3_;
            auVar22[10] = auVar70[5];
            auVar22._0_10_ = auVar70._0_10_;
            auVar22._11_4_ = auVar15._11_4_;
            auVar27[9] = 0;
            auVar27._0_9_ = auVar70._0_9_;
            auVar27._10_5_ = auVar22._10_5_;
            auVar35[8] = auVar70[4];
            auVar35._0_8_ = auVar70._0_8_;
            auVar35._9_6_ = auVar27._9_6_;
            auVar40._7_8_ = 0;
            auVar40._0_7_ = auVar35._8_7_;
            Var41 = CONCAT81(SUB158(auVar40 << 0x40,7),auVar70[3]);
            auVar57._9_6_ = 0;
            auVar57._0_9_ = Var41;
            auVar42._1_10_ = SUB1510(auVar57 << 0x30,5);
            auVar42[0] = auVar70[2];
            auVar58._11_4_ = 0;
            auVar58._0_11_ = auVar42;
            auVar43._1_12_ = SUB1512(auVar58 << 0x20,3);
            auVar43[0] = auVar70[1];
            uVar73 = CONCAT11(0,auVar70[0]);
            auVar39._2_13_ = auVar43;
            auVar39._0_2_ = uVar73;
            auVar8._10_2_ = 0;
            auVar8._0_10_ = auVar39._0_10_;
            auVar8._12_2_ = (short)Var41;
            auVar44._2_4_ = auVar8._10_4_;
            auVar44._0_2_ = auVar42._0_2_;
            auVar44._6_8_ = 0;
            auVar28._6_8_ = SUB148(auVar44 << 0x40,6);
            auVar28._4_2_ = auVar43._0_2_;
            auVar28._2_2_ = 0;
            auVar28._0_2_ = uVar73;
            auVar83._2_2_ = 0;
            auVar83._0_2_ = auVar35._8_2_;
            auVar83._4_2_ = auVar22._10_2_;
            auVar83._6_2_ = 0;
            auVar83._8_2_ = auVar12._12_2_;
            auVar83._10_2_ = 0;
            auVar83[0xc] = auVar70[7];
            auVar83[0xd] = 0;
            auVar74._14_2_ = 0;
            auVar74._0_14_ = auVar28 | auVar83;
            auVar16[0xc] = auVar70[0xb];
            auVar16._0_12_ = ZEXT112(auVar70[0xc]) << 0x40;
            auVar17._10_3_ = auVar16._10_3_;
            auVar17._0_10_ = (unkuint10)auVar70[10] << 0x40;
            auVar45._5_8_ = 0;
            auVar45._0_5_ = auVar17._8_5_;
            auVar18[4] = auVar70[9];
            auVar18._0_4_ = uVar65;
            auVar18[5] = 0;
            auVar18._6_7_ = SUB137(auVar45 << 0x40,6);
            auVar23._4_9_ = auVar18._4_9_;
            auVar23._0_4_ = uVar65 & 0xffff;
            auVar3._1_3_ = 0;
            auVar3[0] = auVar70[0xc];
            auVar3[4] = auVar70[0xd];
            auVar3._5_3_ = 0;
            auVar3[8] = auVar70[0xe];
            auVar3._9_3_ = 0;
            auVar3[0xc] = auVar70[0xf];
            auVar70._13_3_ = 0;
            auVar70._0_13_ = auVar23 | auVar3;
            auVar84 = auVar84 | auVar74 | auVar70;
          } while (pbVar66 != param_3 + uVar67);
          lVar68 = uVar67 + 1;
          auVar70 = auVar84 >> 0x40 | auVar84;
          auVar84 = auVar84 | auVar84 >> 0x40;
          uVar65 = auVar70._0_4_ | auVar70._4_4_;
          if (param_4 - 1 != uVar67) goto LAB_00100142;
        }
LAB_0010023f:
        if (uVar65 != 0) goto LAB_00100039;
      }
    }
    if (param_1 != (byte *)0x0) {
      uVar65 = (uint)(int)(char)bVar2 >> 0x1f;
      uVar67 = uVar69;
      do {
        uVar67 = uVar67 - 1;
        uVar65 = uVar65 + (byte)(param_3[uVar67 + (param_4 - uVar69)] ^ (char)bVar2 >> 7);
        param_1[uVar67] = (byte)uVar65;
        uVar65 = uVar65 >> 8;
      } while (uVar67 != 0);
    }
  }
  return uVar69;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * ASN1_INTEGER_dup(ASN1_STRING *a)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_dup(a);
  return pAVar1;
}



int ASN1_INTEGER_cmp(ASN1_INTEGER *x,ASN1_INTEGER *y)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = x->type & 0x100;
  uVar3 = y->type & 0x100;
  if (uVar3 != uVar1) {
    return -(uint)(uVar1 != 0) | 1;
  }
  iVar2 = ASN1_STRING_cmp(x,y);
  if (uVar3 != 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



/* WARNING: Removing unreachable block (ram,0x0010040a) */

ulong ossl_i2c_ASN1_INTEGER(int *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [14];
  undefined1 auVar8 [15];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [14];
  undefined1 auVar23 [15];
  undefined1 auVar24 [13];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [14];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  unkuint9 Var42;
  undefined1 auVar43 [11];
  undefined1 auVar44 [13];
  undefined1 auVar45 [14];
  undefined1 auVar46 [13];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [14];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  uint6 uVar62;
  uint5 uVar63;
  undefined1 auVar64 [15];
  uint uVar65;
  uint uVar66;
  byte *pbVar67;
  ulong uVar68;
  long lVar69;
  ulong uVar70;
  ulong uVar71;
  ulong uVar72;
  undefined2 uVar75;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  ushort uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  unkuint10 Var79;
  undefined1 auVar80 [16];
  undefined1 auVar85 [14];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  
  uVar68 = (ulong)*param_1;
  pbVar2 = *(byte **)(param_1 + 2);
  if ((pbVar2 == (byte *)0x0) || (uVar68 == 0)) {
    uVar66 = 0;
    uVar68 = 0;
    uVar70 = 0;
    uVar71 = 1;
    uVar72 = 1;
    goto LAB_001003ab;
  }
  bVar1 = *pbVar2;
  uVar70 = uVar68;
  uVar71 = uVar68;
  uVar72 = uVar68;
  if ((param_1[1] & 0x100U) == 0) {
    if (bVar1 < 0x80) {
      uVar66 = 0;
    }
    else {
      uVar70 = uVar68 + 1;
      uVar66 = 0;
      uVar71 = uVar70 & 0xffffffff;
      uVar72 = uVar70;
    }
    goto LAB_001003ab;
  }
  if (0x80 < bVar1) {
    uVar70 = uVar68 + 1;
    uVar66 = 0xffffffff;
    uVar71 = uVar70 & 0xffffffff;
    uVar72 = uVar70;
    goto LAB_001003ab;
  }
  uVar66 = 0xffffffff;
  if (bVar1 != 0x80) goto LAB_001003ab;
  if (uVar68 == 1) {
    uVar71 = 1;
    uVar66 = 0;
    goto LAB_001003ab;
  }
  if (uVar68 - 2 < 0xf) {
    auVar86 = (undefined1  [16])0x0;
    uVar70 = 0;
    uVar66 = 0;
    lVar69 = 1;
LAB_001004f2:
    uVar71 = (uVar68 - uVar70) - 1;
    if (6 < (uVar68 - uVar70) - 2) {
      uVar70 = *(ulong *)(pbVar2 + uVar70 + 1);
      uVar84 = (undefined1)(uVar70 >> 0x38);
      auVar5._8_6_ = 0;
      auVar5._0_8_ = uVar70;
      auVar5[0xe] = uVar84;
      uVar83 = (undefined1)(uVar70 >> 0x30);
      auVar10._8_4_ = 0;
      auVar10._0_8_ = uVar70;
      auVar10[0xc] = uVar83;
      auVar10._13_2_ = auVar5._13_2_;
      auVar14._8_4_ = 0;
      auVar14._0_8_ = uVar70;
      auVar14._12_3_ = auVar10._12_3_;
      uVar82 = (undefined1)(uVar70 >> 0x28);
      auVar20._8_2_ = 0;
      auVar20._0_8_ = uVar70;
      auVar20[10] = uVar82;
      auVar20._11_4_ = auVar14._11_4_;
      auVar25._8_2_ = 0;
      auVar25._0_8_ = uVar70;
      auVar25._10_5_ = auVar20._10_5_;
      uVar81 = (undefined1)(uVar70 >> 0x20);
      auVar30[8] = uVar81;
      auVar30._0_8_ = uVar70;
      auVar30._9_6_ = auVar25._9_6_;
      auVar47._7_8_ = 0;
      auVar47._0_7_ = auVar30._8_7_;
      auVar48._8_7_ = 0;
      auVar48._0_8_ = SUB158(auVar47 << 0x40,7);
      auVar49._9_6_ = 0;
      auVar49._0_9_ = SUB159(auVar48 << 0x38,6);
      auVar50._10_5_ = 0;
      auVar50._0_10_ = SUB1510(auVar49 << 0x30,5);
      auVar51._11_4_ = 0;
      auVar51._0_11_ = SUB1511(auVar50 << 0x28,4);
      uVar76 = (ushort)uVar70;
      auVar64._12_3_ = 0;
      auVar64._0_12_ = SUB1512(auVar51 << 0x20,3);
      auVar38._2_13_ = SUB1513(auVar64 << 0x18,2);
      auVar38._0_2_ = uVar76 & 0xff;
      auVar6._8_6_ = 0;
      auVar6._0_8_ = uVar70;
      auVar6[0xe] = uVar84;
      auVar11._8_4_ = 0;
      auVar11._0_8_ = uVar70;
      auVar11[0xc] = uVar83;
      auVar11._13_2_ = auVar6._13_2_;
      auVar15._8_4_ = 0;
      auVar15._0_8_ = uVar70;
      auVar15._12_3_ = auVar11._12_3_;
      auVar21._8_2_ = 0;
      auVar21._0_8_ = uVar70;
      auVar21[10] = uVar82;
      auVar21._11_4_ = auVar15._11_4_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar70;
      auVar26._10_5_ = auVar21._10_5_;
      auVar31[8] = uVar81;
      auVar31._0_8_ = uVar70;
      auVar31._9_6_ = auVar26._9_6_;
      auVar52._7_8_ = 0;
      auVar52._0_7_ = auVar31._8_7_;
      Var42 = CONCAT81(SUB158(auVar52 << 0x40,7),(char)(uVar70 >> 0x18));
      auVar60._9_6_ = 0;
      auVar60._0_9_ = Var42;
      auVar53._1_10_ = SUB1510(auVar60 << 0x30,5);
      auVar53[0] = (char)(uVar70 >> 0x10);
      auVar61._11_4_ = 0;
      auVar61._0_11_ = auVar53;
      auVar37[2] = (char)(uVar70 >> 8);
      auVar37._0_2_ = uVar76;
      auVar37._3_12_ = SUB1512(auVar61 << 0x20,3);
      auVar39._2_13_ = auVar37._2_13_;
      auVar39._0_2_ = uVar76 & 0xff;
      uVar65 = auVar30._8_4_;
      Var79 = (unkuint10)auVar38._0_4_ << 0x40;
      uVar75 = (undefined2)Var42;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar39._0_10_;
      auVar12._12_2_ = uVar75;
      uVar62 = CONCAT42(auVar12._10_4_,auVar53._0_2_);
      auVar54._6_8_ = 0;
      auVar54._0_6_ = uVar62;
      uVar66 = auVar39._0_4_;
      auVar27._4_2_ = auVar37._2_2_;
      auVar27._0_4_ = uVar66;
      auVar27._6_8_ = SUB148(auVar54 << 0x40,6);
      auVar32._10_2_ = 0;
      auVar32._0_10_ = Var79;
      auVar32[0xc] = uVar84;
      uVar63 = CONCAT32(auVar32._10_3_,auVar10._12_2_);
      auVar55._5_8_ = 0;
      auVar55._0_5_ = uVar63;
      auVar33._4_2_ = auVar20._10_2_;
      auVar33._0_4_ = uVar65;
      auVar33._6_7_ = SUB137(auVar55 << 0x40,6);
      auVar7._10_2_ = 0;
      auVar7._0_10_ = auVar39._0_10_;
      auVar7._12_2_ = uVar75;
      auVar56._2_4_ = auVar7._10_4_;
      auVar56._0_2_ = auVar53._0_2_;
      auVar56._6_8_ = 0;
      auVar22._4_2_ = auVar37._2_2_;
      auVar22._0_4_ = uVar66;
      auVar22._6_8_ = SUB148(auVar56 << 0x40,6);
      auVar87._0_4_ = uVar66 & 0xffff;
      auVar87._4_10_ = auVar22._4_10_;
      auVar87._14_2_ = 0;
      auVar74._4_4_ = auVar12._10_4_ >> 0x10;
      auVar74._0_4_ = (int)uVar62;
      auVar74._8_2_ = uVar76 & 0xff;
      auVar74._10_2_ = 0;
      auVar74._12_4_ = auVar27._4_4_;
      auVar34._10_2_ = 0;
      auVar34._0_10_ = Var79;
      auVar34[0xc] = uVar84;
      auVar57._2_3_ = auVar34._10_3_;
      auVar57._0_2_ = auVar10._12_2_;
      auVar57._5_8_ = 0;
      auVar35._4_2_ = auVar20._10_2_;
      auVar35._0_4_ = uVar65;
      auVar35._6_7_ = SUB137(auVar57 << 0x40,6);
      auVar78._0_4_ = uVar65 & 0xffff;
      auVar78._4_9_ = auVar35._4_9_;
      auVar78._13_3_ = 0;
      auVar80._4_3_ = auVar32._10_3_ >> 0x10;
      auVar80._0_4_ = (int)uVar63;
      auVar80[7] = 0;
      auVar80._8_4_ = uVar65 & 0xffff;
      auVar80._12_4_ = auVar33._4_4_;
      auVar86 = auVar74 | auVar87 | auVar80 | auVar78 | auVar86;
      uVar66 = auVar86._4_4_ | auVar86._0_4_;
      lVar69 = lVar69 + (uVar71 & 0xfffffffffffffff8);
      if ((uVar71 & 7) == 0) goto LAB_001005e2;
    }
    uVar66 = uVar66 | pbVar2[lVar69];
    if (((((lVar69 + 1U < uVar68) && (uVar66 = uVar66 | pbVar2[lVar69 + 1], lVar69 + 2U < uVar68))
         && (uVar66 = uVar66 | pbVar2[lVar69 + 2], lVar69 + 3U < uVar68)) &&
        ((uVar66 = uVar66 | pbVar2[lVar69 + 3], lVar69 + 4U < uVar68 &&
         (uVar66 = uVar66 | pbVar2[lVar69 + 4], lVar69 + 5U < uVar68)))) &&
       (uVar66 = uVar66 | pbVar2[lVar69 + 5], lVar69 + 6U < uVar68)) {
      uVar66 = uVar66 | pbVar2[lVar69 + 6];
    }
  }
  else {
    auVar86 = (undefined1  [16])0x0;
    uVar70 = uVar68 - 1 & 0xfffffffffffffff0;
    pbVar67 = pbVar2;
    do {
      auVar73 = *(undefined1 (*) [16])(pbVar67 + 1);
      pbVar67 = pbVar67 + 0x10;
      uVar66 = CONCAT13(0,CONCAT12(auVar73[9],(ushort)auVar73[8]));
      auVar8[0xd] = 0;
      auVar8._0_13_ = auVar73._0_13_;
      auVar8[0xe] = auVar73[7];
      auVar13[0xc] = auVar73[6];
      auVar13._0_12_ = auVar73._0_12_;
      auVar13._13_2_ = auVar8._13_2_;
      auVar16[0xb] = 0;
      auVar16._0_11_ = auVar73._0_11_;
      auVar16._12_3_ = auVar13._12_3_;
      auVar23[10] = auVar73[5];
      auVar23._0_10_ = auVar73._0_10_;
      auVar23._11_4_ = auVar16._11_4_;
      auVar28[9] = 0;
      auVar28._0_9_ = auVar73._0_9_;
      auVar28._10_5_ = auVar23._10_5_;
      auVar36[8] = auVar73[4];
      auVar36._0_8_ = auVar73._0_8_;
      auVar36._9_6_ = auVar28._9_6_;
      auVar41._7_8_ = 0;
      auVar41._0_7_ = auVar36._8_7_;
      Var42 = CONCAT81(SUB158(auVar41 << 0x40,7),auVar73[3]);
      auVar58._9_6_ = 0;
      auVar58._0_9_ = Var42;
      auVar43._1_10_ = SUB1510(auVar58 << 0x30,5);
      auVar43[0] = auVar73[2];
      auVar59._11_4_ = 0;
      auVar59._0_11_ = auVar43;
      auVar44._1_12_ = SUB1512(auVar59 << 0x20,3);
      auVar44[0] = auVar73[1];
      uVar76 = CONCAT11(0,auVar73[0]);
      auVar40._2_13_ = auVar44;
      auVar40._0_2_ = uVar76;
      auVar9._10_2_ = 0;
      auVar9._0_10_ = auVar40._0_10_;
      auVar9._12_2_ = (short)Var42;
      auVar45._2_4_ = auVar9._10_4_;
      auVar45._0_2_ = auVar43._0_2_;
      auVar45._6_8_ = 0;
      auVar29._6_8_ = SUB148(auVar45 << 0x40,6);
      auVar29._4_2_ = auVar44._0_2_;
      auVar29._2_2_ = 0;
      auVar29._0_2_ = uVar76;
      auVar85._2_2_ = 0;
      auVar85._0_2_ = auVar36._8_2_;
      auVar85._4_2_ = auVar23._10_2_;
      auVar85._6_2_ = 0;
      auVar85._8_2_ = auVar13._12_2_;
      auVar85._10_2_ = 0;
      auVar85[0xc] = auVar73[7];
      auVar85[0xd] = 0;
      auVar77._14_2_ = 0;
      auVar77._0_14_ = auVar29 | auVar85;
      auVar17[0xc] = auVar73[0xb];
      auVar17._0_12_ = ZEXT112(auVar73[0xc]) << 0x40;
      auVar18._10_3_ = auVar17._10_3_;
      auVar18._0_10_ = (unkuint10)auVar73[10] << 0x40;
      auVar46._5_8_ = 0;
      auVar46._0_5_ = auVar18._8_5_;
      auVar19[4] = auVar73[9];
      auVar19._0_4_ = uVar66;
      auVar19[5] = 0;
      auVar19._6_7_ = SUB137(auVar46 << 0x40,6);
      auVar24._4_9_ = auVar19._4_9_;
      auVar24._0_4_ = uVar66 & 0xffff;
      auVar4._1_3_ = 0;
      auVar4[0] = auVar73[0xc];
      auVar4[4] = auVar73[0xd];
      auVar4._5_3_ = 0;
      auVar4[8] = auVar73[0xe];
      auVar4._9_3_ = 0;
      auVar4[0xc] = auVar73[0xf];
      auVar73._13_3_ = 0;
      auVar73._0_13_ = auVar24 | auVar4;
      auVar86 = auVar86 | auVar77 | auVar73;
    } while (pbVar67 != pbVar2 + uVar70);
    lVar69 = uVar70 + 1;
    auVar73 = auVar86 >> 0x40 | auVar86;
    auVar86 = auVar86 | auVar86 >> 0x40;
    uVar66 = auVar73._0_4_ | auVar73._4_4_;
    if (uVar70 != uVar68 - 1) goto LAB_001004f2;
  }
LAB_001005e2:
  uVar70 = (uVar66 != 0) + uVar68;
  uVar66 = -(uint)(uVar66 != 0);
  uVar71 = uVar70 & 0xffffffff;
  uVar72 = uVar70;
LAB_001003ab:
  if ((param_2 != (long *)0x0) && (puVar3 = (undefined1 *)*param_2, puVar3 != (undefined1 *)0x0)) {
    *puVar3 = (char)uVar66;
    if (uVar68 != 0) {
      lVar69 = uVar70 - uVar68;
      uVar65 = uVar66 & 1;
      do {
        uVar68 = uVar68 - 1;
        uVar65 = uVar65 + ((pbVar2[uVar68] ^ uVar66) & 0xff);
        puVar3[uVar68 + lVar69] = (char)uVar65;
        uVar65 = uVar65 >> 8;
      } while (uVar68 != 0);
    }
    *param_2 = *param_2 + uVar72;
  }
  return uVar71 & 0xffffffff;
}



ASN1_STRING * ossl_c2i_ASN1_INTEGER(undefined8 *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [13];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [14];
  undefined1 auVar27 [13];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [13];
  undefined1 auVar46 [14];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [11];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [14];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  uint5 uVar63;
  uint6 uVar64;
  undefined1 auVar65 [15];
  int iVar66;
  uint uVar67;
  byte *pbVar68;
  ASN1_STRING *str;
  long lVar69;
  ulong uVar70;
  ulong uVar71;
  long in_FS_OFFSET;
  unkuint10 Var72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  ushort uVar75;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 auVar76 [14];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  uint uVar83;
  undefined2 uVar85;
  undefined1 auVar84 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  int local_34;
  long local_30;
  
  pbVar3 = (byte *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    ERR_new();
    str = (ASN1_STRING *)0x0;
    ERR_set_debug("crypto/asn1/a_int.c",0xa0,__func___8);
    ERR_set_error(0xd,0xde,0);
    goto LAB_001006d9;
  }
  bVar2 = *pbVar3;
  if (param_3 == 1) {
    uVar71 = 1;
  }
  else {
    if (bVar2 != 0) {
      uVar71 = param_3;
      if (bVar2 != 0xff) goto LAB_00100677;
      if (param_3 - 2 < 0xf) {
        auVar86 = (undefined1  [16])0x0;
        uVar70 = 0;
        uVar67 = 0;
        lVar69 = 1;
LAB_001007ba:
        uVar1 = (param_3 - uVar70) - 1;
        if (6 < (param_3 - uVar70) - 2) {
          uVar70 = *(ulong *)(pbVar3 + uVar70 + 1);
          uVar82 = (undefined1)(uVar70 >> 0x38);
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar70;
          auVar6[0xe] = uVar82;
          uVar81 = (undefined1)(uVar70 >> 0x30);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar70;
          auVar11[0xc] = uVar81;
          auVar11._13_2_ = auVar6._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar70;
          auVar14._12_3_ = auVar11._12_3_;
          uVar80 = (undefined1)(uVar70 >> 0x28);
          auVar21._8_2_ = 0;
          auVar21._0_8_ = uVar70;
          auVar21[10] = uVar80;
          auVar21._11_4_ = auVar14._11_4_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar70;
          auVar28._10_5_ = auVar21._10_5_;
          uVar79 = (undefined1)(uVar70 >> 0x20);
          auVar31[8] = uVar79;
          auVar31._0_8_ = uVar70;
          auVar31._9_6_ = auVar28._9_6_;
          auVar48._7_8_ = 0;
          auVar48._0_7_ = auVar31._8_7_;
          auVar49._8_7_ = 0;
          auVar49._0_8_ = SUB158(auVar48 << 0x40,7);
          auVar50._9_6_ = 0;
          auVar50._0_9_ = SUB159(auVar49 << 0x38,6);
          auVar51._10_5_ = 0;
          auVar51._0_10_ = SUB1510(auVar50 << 0x30,5);
          auVar52._11_4_ = 0;
          auVar52._0_11_ = SUB1511(auVar51 << 0x28,4);
          uVar75 = (ushort)uVar70;
          auVar65._12_3_ = 0;
          auVar65._0_12_ = SUB1512(auVar52 << 0x20,3);
          auVar39._2_13_ = SUB1513(auVar65 << 0x18,2);
          auVar39._0_2_ = uVar75 & 0xff;
          uVar67 = auVar31._8_4_;
          Var72 = (unkuint10)auVar39._0_4_ << 0x40;
          auVar7._8_6_ = 0;
          auVar7._0_8_ = uVar70;
          auVar7[0xe] = uVar82;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar70;
          auVar12[0xc] = uVar81;
          auVar12._13_2_ = auVar7._13_2_;
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar70;
          auVar15._12_3_ = auVar12._12_3_;
          auVar22._8_2_ = 0;
          auVar22._0_8_ = uVar70;
          auVar22[10] = uVar80;
          auVar22._11_4_ = auVar15._11_4_;
          auVar29._8_2_ = 0;
          auVar29._0_8_ = uVar70;
          auVar29._10_5_ = auVar22._10_5_;
          auVar32[8] = uVar79;
          auVar32._0_8_ = uVar70;
          auVar32._9_6_ = auVar29._9_6_;
          auVar53._7_8_ = 0;
          auVar53._0_7_ = auVar32._8_7_;
          Var43 = CONCAT81(SUB158(auVar53 << 0x40,7),(char)(uVar70 >> 0x18));
          auVar61._9_6_ = 0;
          auVar61._0_9_ = Var43;
          auVar54._1_10_ = SUB1510(auVar61 << 0x30,5);
          auVar54[0] = (char)(uVar70 >> 0x10);
          auVar62._11_4_ = 0;
          auVar62._0_11_ = auVar54;
          auVar38[2] = (char)(uVar70 >> 8);
          auVar38._0_2_ = uVar75;
          auVar38._3_12_ = SUB1512(auVar62 << 0x20,3);
          auVar40._2_13_ = auVar38._2_13_;
          auVar40._0_2_ = uVar75 & 0xff;
          auVar33._10_2_ = 0;
          auVar33._0_10_ = Var72;
          auVar33[0xc] = uVar82;
          uVar63 = CONCAT32(auVar33._10_3_,auVar11._12_2_);
          auVar55._5_8_ = 0;
          auVar55._0_5_ = uVar63;
          auVar34._4_2_ = auVar21._10_2_;
          auVar34._0_4_ = uVar67;
          auVar34._6_7_ = SUB137(auVar55 << 0x40,6);
          uVar85 = (undefined2)Var43;
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar40._0_10_;
          auVar8._12_2_ = uVar85;
          uVar64 = CONCAT42(auVar8._10_4_,auVar54._0_2_);
          auVar56._6_8_ = 0;
          auVar56._0_6_ = uVar64;
          uVar83 = auVar40._0_4_;
          auVar23._4_2_ = auVar38._2_2_;
          auVar23._0_4_ = uVar83;
          auVar23._6_8_ = SUB148(auVar56 << 0x40,6);
          auVar35._10_2_ = 0;
          auVar35._0_10_ = Var72;
          auVar35[0xc] = uVar82;
          auVar57._2_3_ = auVar35._10_3_;
          auVar57._0_2_ = auVar11._12_2_;
          auVar57._5_8_ = 0;
          auVar36._4_2_ = auVar21._10_2_;
          auVar36._0_4_ = uVar67;
          auVar36._6_7_ = SUB137(auVar57 << 0x40,6);
          auVar87._0_4_ = uVar67 & 0xffff;
          auVar87._4_9_ = auVar36._4_9_;
          auVar87._13_3_ = 0;
          auVar74._4_3_ = auVar33._10_3_ >> 0x10;
          auVar74._0_4_ = (int)uVar63;
          auVar74[7] = 0;
          auVar74._8_2_ = auVar31._8_2_;
          auVar74._10_2_ = 0;
          auVar74._12_4_ = auVar34._4_4_;
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar40._0_10_;
          auVar9._12_2_ = uVar85;
          auVar58._2_4_ = auVar9._10_4_;
          auVar58._0_2_ = auVar54._0_2_;
          auVar58._6_8_ = 0;
          auVar24._4_2_ = auVar38._2_2_;
          auVar24._0_4_ = uVar83;
          auVar24._6_8_ = SUB148(auVar58 << 0x40,6);
          auVar78._0_4_ = uVar83 & 0xffff;
          auVar78._4_10_ = auVar24._4_10_;
          auVar78._14_2_ = 0;
          auVar84._4_4_ = auVar8._10_4_ >> 0x10;
          auVar84._0_4_ = (int)uVar64;
          auVar84._8_4_ = uVar83 & 0xffff;
          auVar84._12_4_ = auVar23._4_4_;
          auVar86 = auVar74 | auVar87 | auVar84 | auVar78 | auVar86;
          uVar67 = auVar86._4_4_ | auVar86._0_4_;
          lVar69 = lVar69 + (uVar1 & 0xfffffffffffffff8);
          if ((uVar1 & 7) == 0) goto LAB_001008aa;
        }
        uVar67 = uVar67 | pbVar3[lVar69];
        if (((((lVar69 + 1U < param_3) &&
              (uVar67 = uVar67 | pbVar3[lVar69 + 1], lVar69 + 2U < param_3)) &&
             (uVar67 = uVar67 | pbVar3[lVar69 + 2], lVar69 + 3U < param_3)) &&
            ((uVar67 = uVar67 | pbVar3[lVar69 + 3], lVar69 + 4U < param_3 &&
             (uVar67 = uVar67 | pbVar3[lVar69 + 4], lVar69 + 5U < param_3)))) &&
           (uVar67 = uVar67 | pbVar3[lVar69 + 5], lVar69 + 6U < param_3)) {
          uVar67 = uVar67 | pbVar3[lVar69 + 6];
        }
      }
      else {
        auVar86 = (undefined1  [16])0x0;
        uVar70 = param_3 - 1 & 0xfffffffffffffff0;
        pbVar68 = pbVar3;
        do {
          auVar73 = *(undefined1 (*) [16])(pbVar68 + 1);
          pbVar68 = pbVar68 + 0x10;
          uVar67 = CONCAT13(0,CONCAT12(auVar73[9],(ushort)auVar73[8]));
          auVar10[0xd] = 0;
          auVar10._0_13_ = auVar73._0_13_;
          auVar10[0xe] = auVar73[7];
          auVar13[0xc] = auVar73[6];
          auVar13._0_12_ = auVar73._0_12_;
          auVar13._13_2_ = auVar10._13_2_;
          auVar16[0xb] = 0;
          auVar16._0_11_ = auVar73._0_11_;
          auVar16._12_3_ = auVar13._12_3_;
          auVar25[10] = auVar73[5];
          auVar25._0_10_ = auVar73._0_10_;
          auVar25._11_4_ = auVar16._11_4_;
          auVar30[9] = 0;
          auVar30._0_9_ = auVar73._0_9_;
          auVar30._10_5_ = auVar25._10_5_;
          auVar37[8] = auVar73[4];
          auVar37._0_8_ = auVar73._0_8_;
          auVar37._9_6_ = auVar30._9_6_;
          auVar42._7_8_ = 0;
          auVar42._0_7_ = auVar37._8_7_;
          Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),auVar73[3]);
          auVar59._9_6_ = 0;
          auVar59._0_9_ = Var43;
          auVar44._1_10_ = SUB1510(auVar59 << 0x30,5);
          auVar44[0] = auVar73[2];
          auVar60._11_4_ = 0;
          auVar60._0_11_ = auVar44;
          auVar45._1_12_ = SUB1512(auVar60 << 0x20,3);
          auVar45[0] = auVar73[1];
          auVar41[1] = 0;
          auVar41[0] = auVar73[0];
          auVar41._2_13_ = auVar45;
          auVar76._2_2_ = 0;
          auVar76._0_2_ = auVar37._8_2_;
          auVar76._4_2_ = auVar25._10_2_;
          auVar76._6_2_ = 0;
          auVar76._8_2_ = auVar13._12_2_;
          auVar76._10_2_ = 0;
          auVar76[0xc] = auVar73[7];
          auVar76[0xd] = 0;
          auVar4._10_2_ = 0;
          auVar4._0_10_ = auVar41._0_10_;
          auVar4._12_2_ = (short)Var43;
          auVar46._2_4_ = auVar4._10_4_;
          auVar46._0_2_ = auVar44._0_2_;
          auVar46._6_8_ = 0;
          auVar17._4_2_ = auVar45._0_2_;
          auVar17._0_4_ = auVar41._0_4_;
          auVar17._6_8_ = SUB148(auVar46 << 0x40,6);
          auVar26._4_10_ = auVar17._4_10_;
          auVar26._0_4_ = auVar41._0_4_ & 0xffff;
          auVar77._14_2_ = 0;
          auVar77._0_14_ = auVar76 | auVar26;
          auVar5._1_3_ = 0;
          auVar5[0] = auVar73[0xc];
          auVar5[4] = auVar73[0xd];
          auVar5._5_3_ = 0;
          auVar5[8] = auVar73[0xe];
          auVar5._9_3_ = 0;
          auVar5[0xc] = auVar73[0xf];
          auVar18[0xc] = auVar73[0xb];
          auVar18._0_12_ = ZEXT112(auVar73[0xc]) << 0x40;
          auVar19._10_3_ = auVar18._10_3_;
          auVar19._0_10_ = (unkuint10)auVar73[10] << 0x40;
          auVar47._5_8_ = 0;
          auVar47._0_5_ = auVar19._8_5_;
          auVar20[4] = auVar73[9];
          auVar20._0_4_ = uVar67;
          auVar20[5] = 0;
          auVar20._6_7_ = SUB137(auVar47 << 0x40,6);
          auVar27._4_9_ = auVar20._4_9_;
          auVar27._0_4_ = uVar67 & 0xffff;
          auVar73._13_3_ = 0;
          auVar73._0_13_ = auVar5 | auVar27;
          auVar86 = auVar86 | auVar77 | auVar73;
        } while (pbVar3 + uVar70 != pbVar68);
        lVar69 = uVar70 + 1;
        auVar73 = auVar86 >> 0x40 | auVar86;
        auVar86 = auVar86 | auVar86 >> 0x40;
        uVar67 = auVar73._0_4_ | auVar73._4_4_;
        if (uVar70 != param_3 - 1) goto LAB_001007ba;
      }
LAB_001008aa:
      if (uVar67 == 0) goto LAB_00100677;
    }
    uVar71 = param_3 - 1;
    if (-1 < (char)(bVar2 ^ pbVar3[1])) {
      ERR_new();
      str = (ASN1_STRING *)0x0;
      ERR_set_debug("crypto/asn1/a_int.c",0xc1,__func___8);
      ERR_set_error(0xd,0xdd,0);
      goto LAB_001006d9;
    }
  }
LAB_00100677:
  if ((param_1 == (undefined8 *)0x0) || (str = (ASN1_STRING *)*param_1, str == (ASN1_STRING *)0x0))
  {
    str = ASN1_INTEGER_new();
    if (str == (ASN1_INTEGER *)0x0) goto LAB_0010092c;
    str->type = 2;
    iVar66 = ASN1_STRING_set(str,(void *)0x0,(int)uVar71);
    if (iVar66 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x137,"ossl_c2i_ASN1_INTEGER");
      ERR_set_error(0xd,0x8000d,0);
      if (param_1 != (undefined8 *)0x0) goto LAB_0010091e;
      goto LAB_00100924;
    }
  }
  else {
    iVar66 = ASN1_STRING_set(str,(void *)0x0,(int)uVar71);
    if (iVar66 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x137,"ossl_c2i_ASN1_INTEGER");
      ERR_set_error(0xd,0x8000d,0);
LAB_0010091e:
      if ((ASN1_STRING *)*param_1 != str) {
LAB_00100924:
        ASN1_INTEGER_free(str);
      }
LAB_0010092c:
      str = (ASN1_STRING *)0x0;
      goto LAB_001006d9;
    }
  }
  c2i_ibuf(str->data,&local_34,*param_2,param_3);
  if (local_34 == 0) {
    uVar67 = str->type & 0xfffffeff;
  }
  else {
    uVar67 = str->type | 0x100;
  }
  str->type = uVar67;
  *param_2 = *param_2 + param_3;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = str;
  }
LAB_001006d9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return str;
}



ASN1_INTEGER * d2i_ASN1_UINTEGER(ASN1_INTEGER **a,uchar **pp,long length)

{
  uint uVar1;
  void *__dest;
  ASN1_STRING *a_00;
  undefined8 uVar2;
  int len;
  uchar *puVar3;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  uchar *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((a == (ASN1_INTEGER **)0x0) || (a_00 = *a, a_00 == (ASN1_STRING *)0x0)) {
    a_00 = ASN1_INTEGER_new();
    if (a_00 != (ASN1_INTEGER *)0x0) {
      a_00->type = 2;
      goto LAB_00100a69;
    }
  }
  else {
LAB_00100a69:
    local_50 = *pp;
    uVar1 = ASN1_get_object(&local_50,&local_48,&local_58,&local_54,length);
    if ((uVar1 & 0x80) == 0) {
      if (local_58 != 2) {
        uVar2 = 0x73;
        goto LAB_00100b76;
      }
      if (local_48 < 0) {
        uVar2 = 0xe2;
        goto LAB_00100b76;
      }
      __dest = CRYPTO_malloc((int)local_48 + 1,"crypto/asn1/a_int.c",0x1b7);
      if (__dest != (void *)0x0) {
        a_00->type = 2;
        len = 0;
        if (local_48 != 0) {
          if ((*local_50 == '\0') && (local_48 != 1)) {
            local_50 = local_50 + 1;
            local_48 = local_48 + -1;
          }
          len = (int)local_48;
          puVar3 = local_50 + local_48;
          __dest = memcpy(__dest,local_50,(long)len);
          local_50 = puVar3;
        }
        ASN1_STRING_set0(a_00,__dest,len);
        if (a != (ASN1_INTEGER **)0x0) {
          *a = a_00;
        }
        *pp = local_50;
        goto LAB_00100b45;
      }
    }
    else {
      uVar2 = 0x66;
LAB_00100b76:
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x1cb,"d2i_ASN1_UINTEGER");
      ERR_set_error(0xd,uVar2,0);
    }
    if ((a == (ASN1_INTEGER **)0x0) || (*a != a_00)) {
      ASN1_INTEGER_free(a_00);
    }
  }
  a_00 = (ASN1_INTEGER *)0x0;
LAB_00100b45:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ASN1_INTEGER_get_int64(ulong *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (param_2 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x14f,"asn1_string_get_int64");
    ERR_set_error(0xd,0xc0102,0);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 2) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x153,"asn1_string_get_int64");
    ERR_set_error(0xd,0xe1,0);
    return 0;
  }
  uVar2 = *param_2;
  pbVar3 = *(byte **)(param_2 + 2);
  if (8 < uVar2) {
    ERR_new();
    pcVar10 = "asn1_get_uint64";
    uVar11 = 0xdb;
LAB_00100de9:
    ERR_set_debug("crypto/asn1/a_int.c",uVar11,pcVar10);
    ERR_set_error(0xd,0xdf,0);
    return 0;
  }
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  uVar9 = param_2[1] & 0x100;
  if (uVar2 == 0) {
    uVar12 = 0;
    goto LAB_00100d90;
  }
  bVar1 = *pbVar3;
  uVar12 = (ulong)bVar1;
  if (uVar2 == 1) {
LAB_00100d88:
    if (uVar9 == 0) goto LAB_00100d90;
  }
  else {
    uVar12 = (ulong)CONCAT11(bVar1,pbVar3[1]);
    if (uVar2 == 2) goto LAB_00100d88;
    uVar4 = CONCAT21(CONCAT11(bVar1,pbVar3[1]),pbVar3[2]);
    uVar12 = (ulong)uVar4;
    if (uVar2 == 3) goto LAB_00100d88;
    uVar5 = CONCAT31(uVar4,pbVar3[3]);
    uVar12 = (ulong)uVar5;
    if (uVar2 == 4) goto LAB_00100d88;
    uVar6 = CONCAT41(uVar5,pbVar3[4]);
    uVar12 = (ulong)uVar6;
    if (uVar2 == 5) goto LAB_00100d88;
    uVar7 = CONCAT51(uVar6,pbVar3[5]);
    uVar12 = (ulong)uVar7;
    if (uVar2 == 6) goto LAB_00100d88;
    uVar8 = CONCAT61(uVar7,pbVar3[6]);
    uVar12 = (ulong)uVar8;
    if (uVar2 != 8) goto LAB_00100d88;
    uVar12 = CONCAT71(uVar8,pbVar3[7]);
    if (uVar9 == 0) {
      if ((char)bVar1 < '\0') {
        ERR_new();
        pcVar10 = "asn1_get_int64";
        uVar11 = 0x11a;
        goto LAB_00100de9;
      }
      goto LAB_00100d90;
    }
    if ((char)bVar1 < '\0') {
      if (uVar12 != 0x8000000000000000) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0x113,"asn1_get_int64");
        ERR_set_error(0xd,0xe0,0);
        return 0;
      }
      goto LAB_00100d90;
    }
  }
  uVar12 = -uVar12;
LAB_00100d90:
  *param_1 = uVar12;
  return 1;
}



void ASN1_INTEGER_set_int64(ASN1_STRING *param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *data;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar2 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = 2;
  puVar1 = &local_11;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
    param_1->type = 0x102;
  }
  else {
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
  }
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ASN1_INTEGER_get_uint64(ulong *param_1,int *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x174,"asn1_string_get_uint64");
    ERR_set_error(0xd,0xc0102,0);
    return 0;
  }
  if ((param_2[1] & 0xfffffeffU) != 2) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x178,"asn1_string_get_uint64");
    ERR_set_error(0xd,0xe1,0);
    return 0;
  }
  if ((param_2[1] & 0x100U) != 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x17c,"asn1_string_get_uint64");
    ERR_set_error(0xd,0xe2,0);
    return 0;
  }
  uVar8 = (ulong)*param_2;
  pbVar1 = *(byte **)(param_2 + 2);
  if (8 < uVar8) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0xdb,"asn1_get_uint64");
    ERR_set_error(0xd,0xdf,0);
    return 0;
  }
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  uVar9 = uVar8;
  if (uVar8 == 0) goto LAB_00100fd7;
  uVar9 = (ulong)*pbVar1;
  if (uVar8 != 1) {
    uVar2 = CONCAT11(*pbVar1,pbVar1[1]);
    uVar9 = (ulong)uVar2;
    if (uVar8 != 2) {
      uVar3 = CONCAT21(uVar2,pbVar1[2]);
      uVar9 = (ulong)uVar3;
      if (uVar8 != 3) {
        uVar4 = CONCAT31(uVar3,pbVar1[3]);
        uVar9 = (ulong)uVar4;
        if (uVar8 == 4) {
LAB_00100fd7:
          *param_1 = uVar9;
          return 1;
        }
        uVar5 = CONCAT41(uVar4,pbVar1[4]);
        uVar9 = (ulong)uVar5;
        if (uVar8 != 5) {
          uVar6 = CONCAT51(uVar5,pbVar1[5]);
          uVar9 = (ulong)uVar6;
          if (uVar8 != 6) {
            uVar7 = CONCAT61(uVar6,pbVar1[6]);
            uVar9 = (ulong)uVar7;
            if (uVar8 == 8) {
              uVar9 = CONCAT71(uVar7,pbVar1[7]);
              goto LAB_00100fd7;
            }
          }
        }
      }
    }
  }
  *param_1 = uVar9;
  return 1;
}



void ASN1_INTEGER_set_uint64(ASN1_STRING *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *data;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar2 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = 2;
  puVar1 = &local_11;
  do {
    data = puVar1;
    *data = (char)param_2;
    iVar2 = iVar2 + -1;
    param_2 = param_2 >> 8;
    puVar1 = data + -1;
  } while (param_2 != 0);
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_INTEGER_set(void)

{
  ASN1_INTEGER_set_int64();
  return;
}



long ASN1_INTEGER_get(ASN1_INTEGER *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  if ((a != (ASN1_INTEGER *)0x0) &&
     (iVar1 = ASN1_INTEGER_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



ASN1_INTEGER * BN_to_ASN1_INTEGER(BIGNUM *bn,ASN1_INTEGER *ai)

{
  int iVar1;
  int iVar2;
  ASN1_INTEGER *str;
  
  if (ai == (ASN1_INTEGER *)0x0) {
    str = ASN1_STRING_type_new(2);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x1df,"bn_to_asn1_string");
      ERR_set_error(0xd,0x8010a,0);
      return (ASN1_INTEGER *)0x0;
    }
  }
  else {
    ai->type = 2;
    str = ai;
  }
  iVar1 = BN_is_negative(bn);
  if ((iVar1 != 0) && (iVar1 = BN_is_zero(bn), iVar1 == 0)) {
    str->type = str->type | 0x102;
  }
  iVar2 = BN_num_bits(bn);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar2 = iVar1 >> 3;
  if (iVar1 >> 3 == 0) {
    iVar2 = 1;
  }
  iVar1 = ASN1_STRING_set(str,(void *)0x0,iVar2);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x1ec,"bn_to_asn1_string");
    ERR_set_error(0xd,0x8000d,0);
    if (ai != str) {
      ASN1_INTEGER_free(str);
    }
    return (ASN1_INTEGER *)0x0;
  }
  iVar1 = BN_is_zero(bn);
  if (iVar1 == 0) {
    iVar2 = BN_bn2bin(bn,str->data);
  }
  else {
    *str->data = '\0';
  }
  str->length = iVar2;
  return str;
}



BIGNUM * ASN1_INTEGER_to_BN(ASN1_INTEGER *ai,BIGNUM *bn)

{
  BIGNUM *b;
  
  if ((ai->type & 0xfffffeffU) == 2) {
    b = BN_bin2bn(ai->data,ai->length,bn);
    if (b == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x209,"asn1_string_to_bn");
      ERR_set_error(0xd,0x69,0);
      b = (BIGNUM *)0x0;
    }
    else if ((ai->type & 0x100) != 0) {
      BN_set_negative(b,1);
      return b;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x203,"asn1_string_to_bn");
    ERR_set_error(0xd,0xe1,0);
    b = (BIGNUM *)0x0;
  }
  return b;
}



undefined8 ASN1_ENUMERATED_get_int64(ulong *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint3 uVar4;
  uint uVar5;
  uint5 uVar6;
  uint6 uVar7;
  uint7 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  if (param_2 == (uint *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x14f,"asn1_string_get_int64");
    ERR_set_error(0xd,0xc0102,0);
    return 0;
  }
  if ((param_2[1] & 0xfffffeff) != 10) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x153,"asn1_string_get_int64");
    ERR_set_error(0xd,0xe1,0);
    return 0;
  }
  uVar2 = *param_2;
  pbVar3 = *(byte **)(param_2 + 2);
  if (8 < uVar2) {
    ERR_new();
    pcVar10 = "asn1_get_uint64";
    uVar11 = 0xdb;
LAB_001015e9:
    ERR_set_debug("crypto/asn1/a_int.c",uVar11,pcVar10);
    ERR_set_error(0xd,0xdf,0);
    return 0;
  }
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  uVar9 = param_2[1] & 0x100;
  if (uVar2 == 0) {
    uVar12 = 0;
    goto LAB_00101590;
  }
  bVar1 = *pbVar3;
  uVar12 = (ulong)bVar1;
  if (uVar2 == 1) {
LAB_00101588:
    if (uVar9 == 0) goto LAB_00101590;
  }
  else {
    uVar12 = (ulong)CONCAT11(bVar1,pbVar3[1]);
    if (uVar2 == 2) goto LAB_00101588;
    uVar4 = CONCAT21(CONCAT11(bVar1,pbVar3[1]),pbVar3[2]);
    uVar12 = (ulong)uVar4;
    if (uVar2 == 3) goto LAB_00101588;
    uVar5 = CONCAT31(uVar4,pbVar3[3]);
    uVar12 = (ulong)uVar5;
    if (uVar2 == 4) goto LAB_00101588;
    uVar6 = CONCAT41(uVar5,pbVar3[4]);
    uVar12 = (ulong)uVar6;
    if (uVar2 == 5) goto LAB_00101588;
    uVar7 = CONCAT51(uVar6,pbVar3[5]);
    uVar12 = (ulong)uVar7;
    if (uVar2 == 6) goto LAB_00101588;
    uVar8 = CONCAT61(uVar7,pbVar3[6]);
    uVar12 = (ulong)uVar8;
    if (uVar2 != 8) goto LAB_00101588;
    uVar12 = CONCAT71(uVar8,pbVar3[7]);
    if (uVar9 == 0) {
      if ((char)bVar1 < '\0') {
        ERR_new();
        pcVar10 = "asn1_get_int64";
        uVar11 = 0x11a;
        goto LAB_001015e9;
      }
      goto LAB_00101590;
    }
    if ((char)bVar1 < '\0') {
      if (uVar12 != 0x8000000000000000) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_int.c",0x113,"asn1_get_int64");
        ERR_set_error(0xd,0xe0,0);
        return 0;
      }
      goto LAB_00101590;
    }
  }
  uVar12 = -uVar12;
LAB_00101590:
  *param_1 = uVar12;
  return 1;
}



void ASN1_ENUMERATED_set_int64(ASN1_STRING *param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *data;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  iVar2 = 8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  param_1->type = 10;
  puVar1 = &local_11;
  if ((long)param_2 < 0) {
    param_2 = -param_2;
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
    param_1->type = 0x10a;
  }
  else {
    do {
      data = puVar1;
      *data = (char)param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 >> 8;
      puVar1 = data + -1;
    } while (param_2 != 0);
  }
  ASN1_STRING_set(param_1,data,8 - iVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_ENUMERATED_set(void)

{
  ASN1_ENUMERATED_set_int64();
  return;
}



long ASN1_ENUMERATED_get(ASN1_ENUMERATED *a)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_ENUMERATED *)0x0) {
    lVar2 = 0;
  }
  else if (((a->type & 0xfffffeffU) != 10) ||
          ((lVar2 = 0xffffffff, a->length < 9 &&
           (iVar1 = ASN1_ENUMERATED_get_int64(&local_18,a), lVar2 = local_18, iVar1 == 0)))) {
    lVar2 = -1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



ASN1_ENUMERATED * BN_to_ASN1_ENUMERATED(BIGNUM *bn,ASN1_ENUMERATED *ai)

{
  int iVar1;
  int iVar2;
  ASN1_ENUMERATED *str;
  
  if (ai == (ASN1_ENUMERATED *)0x0) {
    str = ASN1_STRING_type_new(10);
    if (str == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x1df,"bn_to_asn1_string");
      ERR_set_error(0xd,0x8010a,0);
      return (ASN1_ENUMERATED *)0x0;
    }
  }
  else {
    ai->type = 10;
    str = ai;
  }
  iVar1 = BN_is_negative(bn);
  if ((iVar1 != 0) && (iVar1 = BN_is_zero(bn), iVar1 == 0)) {
    str->type = str->type | 0x102;
  }
  iVar2 = BN_num_bits(bn);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar2 = iVar1 >> 3;
  if (iVar1 >> 3 == 0) {
    iVar2 = 1;
  }
  iVar1 = ASN1_STRING_set(str,(void *)0x0,iVar2);
  if (iVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x1ec,"bn_to_asn1_string");
    ERR_set_error(0xd,0x8000d,0);
    if (ai != str) {
      ASN1_INTEGER_free(str);
    }
    return (ASN1_ENUMERATED *)0x0;
  }
  iVar1 = BN_is_zero(bn);
  if (iVar1 == 0) {
    iVar2 = BN_bn2bin(bn,str->data);
  }
  else {
    *str->data = '\0';
  }
  str->length = iVar2;
  return str;
}



BIGNUM * ASN1_ENUMERATED_to_BN(ASN1_ENUMERATED *ai,BIGNUM *bn)

{
  BIGNUM *b;
  
  if ((ai->type & 0xfffffeffU) == 10) {
    b = BN_bin2bn(ai->data,ai->length,bn);
    if (b == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x209,"asn1_string_to_bn");
      ERR_set_error(0xd,0x69,0);
      b = (BIGNUM *)0x0;
    }
    else if ((ai->type & 0x100) != 0) {
      BN_set_negative(b,1);
      return b;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0x203,"asn1_string_to_bn");
    ERR_set_error(0xd,0xe1,0);
    b = (BIGNUM *)0x0;
  }
  return b;
}



undefined8 ossl_c2i_uint64_int(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [13];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [13];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [15];
  undefined1 auVar26 [14];
  undefined1 auVar27 [13];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [13];
  undefined1 auVar36 [13];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  unkuint9 Var43;
  undefined1 auVar44 [11];
  undefined1 auVar45 [13];
  undefined1 auVar46 [14];
  undefined1 auVar47 [13];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined1 auVar54 [11];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [14];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  uint5 uVar63;
  uint6 uVar64;
  undefined1 auVar65 [15];
  uint uVar66;
  ulong uVar67;
  undefined8 uVar68;
  byte *pbVar69;
  long lVar70;
  long in_FS_OFFSET;
  unkuint10 Var71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  ushort uVar74;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 auVar75 [14];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar82;
  undefined2 uVar84;
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  long local_20;
  
  pbVar3 = (byte *)*param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/a_int.c",0xa0,__func___8);
    ERR_set_error(0xd,0xde,0);
    goto LAB_00101b00;
  }
  bVar2 = *pbVar3;
  if (param_4 == 1) {
    c2i_ibuf(&local_28,param_2,pbVar3,1);
    uVar67 = (ulong)local_28;
  }
  else if (bVar2 == 0) {
LAB_001019f3:
    if (-1 < (char)(bVar2 ^ pbVar3[1])) {
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0xc1,__func___8);
      ERR_set_error(0xd,0xdd,0);
LAB_00101b00:
      uVar68 = 0;
      goto LAB_00101b02;
    }
    uVar1 = param_4 - 1;
    if (8 < uVar1) goto LAB_00101ad0;
    c2i_ibuf(&local_28,param_2,pbVar3,param_4);
    uVar67 = (ulong)local_28;
    param_4 = uVar1;
    if (uVar1 != 1) goto LAB_00101a1f;
  }
  else {
    if (bVar2 == 0xff) {
      if (param_4 - 2 < 0xf) {
        auVar85 = (undefined1  [16])0x0;
        uVar67 = 0;
        uVar66 = 0;
        lVar70 = 1;
LAB_00101c1a:
        uVar1 = (param_4 - uVar67) - 1;
        if (6 < (param_4 - uVar67) - 2) {
          uVar67 = *(ulong *)(pbVar3 + uVar67 + 1);
          uVar81 = (undefined1)(uVar67 >> 0x38);
          auVar6._8_6_ = 0;
          auVar6._0_8_ = uVar67;
          auVar6[0xe] = uVar81;
          uVar80 = (undefined1)(uVar67 >> 0x30);
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar67;
          auVar11[0xc] = uVar80;
          auVar11._13_2_ = auVar6._13_2_;
          auVar14._8_4_ = 0;
          auVar14._0_8_ = uVar67;
          auVar14._12_3_ = auVar11._12_3_;
          uVar79 = (undefined1)(uVar67 >> 0x28);
          auVar21._8_2_ = 0;
          auVar21._0_8_ = uVar67;
          auVar21[10] = uVar79;
          auVar21._11_4_ = auVar14._11_4_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar67;
          auVar28._10_5_ = auVar21._10_5_;
          uVar78 = (undefined1)(uVar67 >> 0x20);
          auVar31[8] = uVar78;
          auVar31._0_8_ = uVar67;
          auVar31._9_6_ = auVar28._9_6_;
          auVar48._7_8_ = 0;
          auVar48._0_7_ = auVar31._8_7_;
          auVar49._8_7_ = 0;
          auVar49._0_8_ = SUB158(auVar48 << 0x40,7);
          auVar50._9_6_ = 0;
          auVar50._0_9_ = SUB159(auVar49 << 0x38,6);
          auVar51._10_5_ = 0;
          auVar51._0_10_ = SUB1510(auVar50 << 0x30,5);
          auVar52._11_4_ = 0;
          auVar52._0_11_ = SUB1511(auVar51 << 0x28,4);
          uVar74 = (ushort)uVar67;
          auVar65._12_3_ = 0;
          auVar65._0_12_ = SUB1512(auVar52 << 0x20,3);
          auVar39._2_13_ = SUB1513(auVar65 << 0x18,2);
          auVar39._0_2_ = uVar74 & 0xff;
          uVar66 = auVar31._8_4_;
          Var71 = (unkuint10)auVar39._0_4_ << 0x40;
          auVar7._8_6_ = 0;
          auVar7._0_8_ = uVar67;
          auVar7[0xe] = uVar81;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar67;
          auVar12[0xc] = uVar80;
          auVar12._13_2_ = auVar7._13_2_;
          auVar15._8_4_ = 0;
          auVar15._0_8_ = uVar67;
          auVar15._12_3_ = auVar12._12_3_;
          auVar22._8_2_ = 0;
          auVar22._0_8_ = uVar67;
          auVar22[10] = uVar79;
          auVar22._11_4_ = auVar15._11_4_;
          auVar29._8_2_ = 0;
          auVar29._0_8_ = uVar67;
          auVar29._10_5_ = auVar22._10_5_;
          auVar32[8] = uVar78;
          auVar32._0_8_ = uVar67;
          auVar32._9_6_ = auVar29._9_6_;
          auVar53._7_8_ = 0;
          auVar53._0_7_ = auVar32._8_7_;
          Var43 = CONCAT81(SUB158(auVar53 << 0x40,7),(char)(uVar67 >> 0x18));
          auVar61._9_6_ = 0;
          auVar61._0_9_ = Var43;
          auVar54._1_10_ = SUB1510(auVar61 << 0x30,5);
          auVar54[0] = (char)(uVar67 >> 0x10);
          auVar62._11_4_ = 0;
          auVar62._0_11_ = auVar54;
          auVar38[2] = (char)(uVar67 >> 8);
          auVar38._0_2_ = uVar74;
          auVar38._3_12_ = SUB1512(auVar62 << 0x20,3);
          auVar40._2_13_ = auVar38._2_13_;
          auVar40._0_2_ = uVar74 & 0xff;
          auVar33._10_2_ = 0;
          auVar33._0_10_ = Var71;
          auVar33[0xc] = uVar81;
          uVar63 = CONCAT32(auVar33._10_3_,auVar11._12_2_);
          auVar55._5_8_ = 0;
          auVar55._0_5_ = uVar63;
          auVar34._4_2_ = auVar21._10_2_;
          auVar34._0_4_ = uVar66;
          auVar34._6_7_ = SUB137(auVar55 << 0x40,6);
          uVar84 = (undefined2)Var43;
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar40._0_10_;
          auVar8._12_2_ = uVar84;
          uVar64 = CONCAT42(auVar8._10_4_,auVar54._0_2_);
          auVar56._6_8_ = 0;
          auVar56._0_6_ = uVar64;
          uVar82 = auVar40._0_4_;
          auVar23._4_2_ = auVar38._2_2_;
          auVar23._0_4_ = uVar82;
          auVar23._6_8_ = SUB148(auVar56 << 0x40,6);
          auVar35._10_2_ = 0;
          auVar35._0_10_ = Var71;
          auVar35[0xc] = uVar81;
          auVar57._2_3_ = auVar35._10_3_;
          auVar57._0_2_ = auVar11._12_2_;
          auVar57._5_8_ = 0;
          auVar36._4_2_ = auVar21._10_2_;
          auVar36._0_4_ = uVar66;
          auVar36._6_7_ = SUB137(auVar57 << 0x40,6);
          auVar86._0_4_ = uVar66 & 0xffff;
          auVar86._4_9_ = auVar36._4_9_;
          auVar86._13_3_ = 0;
          auVar73._4_3_ = auVar33._10_3_ >> 0x10;
          auVar73._0_4_ = (int)uVar63;
          auVar73[7] = 0;
          auVar73._8_2_ = auVar31._8_2_;
          auVar73._10_2_ = 0;
          auVar73._12_4_ = auVar34._4_4_;
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar40._0_10_;
          auVar9._12_2_ = uVar84;
          auVar58._2_4_ = auVar9._10_4_;
          auVar58._0_2_ = auVar54._0_2_;
          auVar58._6_8_ = 0;
          auVar24._4_2_ = auVar38._2_2_;
          auVar24._0_4_ = uVar82;
          auVar24._6_8_ = SUB148(auVar58 << 0x40,6);
          auVar77._0_4_ = uVar82 & 0xffff;
          auVar77._4_10_ = auVar24._4_10_;
          auVar77._14_2_ = 0;
          auVar83._4_4_ = auVar8._10_4_ >> 0x10;
          auVar83._0_4_ = (int)uVar64;
          auVar83._8_4_ = uVar82 & 0xffff;
          auVar83._12_4_ = auVar23._4_4_;
          auVar85 = auVar73 | auVar86 | auVar83 | auVar77 | auVar85;
          uVar66 = auVar85._4_4_ | auVar85._0_4_;
          lVar70 = lVar70 + (uVar1 & 0xfffffffffffffff8);
          if ((uVar1 & 7) == 0) goto LAB_00101d17;
        }
        uVar66 = uVar66 | pbVar3[lVar70];
        if ((((lVar70 + 1U < param_4) &&
             (uVar66 = uVar66 | pbVar3[lVar70 + 1], lVar70 + 2U < param_4)) &&
            (uVar66 = uVar66 | pbVar3[lVar70 + 2], lVar70 + 3U < param_4)) &&
           (((uVar66 = uVar66 | pbVar3[lVar70 + 3], lVar70 + 4U < param_4 &&
             (uVar66 = uVar66 | pbVar3[lVar70 + 4], lVar70 + 5U < param_4)) &&
            (uVar66 = uVar66 | pbVar3[lVar70 + 5], lVar70 + 6U < param_4)))) {
          uVar66 = uVar66 | pbVar3[lVar70 + 6];
        }
      }
      else {
        auVar85 = (undefined1  [16])0x0;
        uVar67 = param_4 - 1 & 0xfffffffffffffff0;
        pbVar69 = pbVar3;
        do {
          auVar72 = *(undefined1 (*) [16])(pbVar69 + 1);
          pbVar69 = pbVar69 + 0x10;
          uVar66 = CONCAT13(0,CONCAT12(auVar72[9],(ushort)auVar72[8]));
          auVar10[0xd] = 0;
          auVar10._0_13_ = auVar72._0_13_;
          auVar10[0xe] = auVar72[7];
          auVar13[0xc] = auVar72[6];
          auVar13._0_12_ = auVar72._0_12_;
          auVar13._13_2_ = auVar10._13_2_;
          auVar16[0xb] = 0;
          auVar16._0_11_ = auVar72._0_11_;
          auVar16._12_3_ = auVar13._12_3_;
          auVar25[10] = auVar72[5];
          auVar25._0_10_ = auVar72._0_10_;
          auVar25._11_4_ = auVar16._11_4_;
          auVar30[9] = 0;
          auVar30._0_9_ = auVar72._0_9_;
          auVar30._10_5_ = auVar25._10_5_;
          auVar37[8] = auVar72[4];
          auVar37._0_8_ = auVar72._0_8_;
          auVar37._9_6_ = auVar30._9_6_;
          auVar42._7_8_ = 0;
          auVar42._0_7_ = auVar37._8_7_;
          Var43 = CONCAT81(SUB158(auVar42 << 0x40,7),auVar72[3]);
          auVar59._9_6_ = 0;
          auVar59._0_9_ = Var43;
          auVar44._1_10_ = SUB1510(auVar59 << 0x30,5);
          auVar44[0] = auVar72[2];
          auVar60._11_4_ = 0;
          auVar60._0_11_ = auVar44;
          auVar45._1_12_ = SUB1512(auVar60 << 0x20,3);
          auVar45[0] = auVar72[1];
          auVar41[1] = 0;
          auVar41[0] = auVar72[0];
          auVar41._2_13_ = auVar45;
          auVar75._2_2_ = 0;
          auVar75._0_2_ = auVar37._8_2_;
          auVar75._4_2_ = auVar25._10_2_;
          auVar75._6_2_ = 0;
          auVar75._8_2_ = auVar13._12_2_;
          auVar75._10_2_ = 0;
          auVar75[0xc] = auVar72[7];
          auVar75[0xd] = 0;
          auVar4._10_2_ = 0;
          auVar4._0_10_ = auVar41._0_10_;
          auVar4._12_2_ = (short)Var43;
          auVar46._2_4_ = auVar4._10_4_;
          auVar46._0_2_ = auVar44._0_2_;
          auVar46._6_8_ = 0;
          auVar17._4_2_ = auVar45._0_2_;
          auVar17._0_4_ = auVar41._0_4_;
          auVar17._6_8_ = SUB148(auVar46 << 0x40,6);
          auVar26._4_10_ = auVar17._4_10_;
          auVar26._0_4_ = auVar41._0_4_ & 0xffff;
          auVar76._14_2_ = 0;
          auVar76._0_14_ = auVar75 | auVar26;
          auVar5._1_3_ = 0;
          auVar5[0] = auVar72[0xc];
          auVar5[4] = auVar72[0xd];
          auVar5._5_3_ = 0;
          auVar5[8] = auVar72[0xe];
          auVar5._9_3_ = 0;
          auVar5[0xc] = auVar72[0xf];
          auVar18[0xc] = auVar72[0xb];
          auVar18._0_12_ = ZEXT112(auVar72[0xc]) << 0x40;
          auVar19._10_3_ = auVar18._10_3_;
          auVar19._0_10_ = (unkuint10)auVar72[10] << 0x40;
          auVar47._5_8_ = 0;
          auVar47._0_5_ = auVar19._8_5_;
          auVar20[4] = auVar72[9];
          auVar20._0_4_ = uVar66;
          auVar20[5] = 0;
          auVar20._6_7_ = SUB137(auVar47 << 0x40,6);
          auVar27._4_9_ = auVar20._4_9_;
          auVar27._0_4_ = uVar66 & 0xffff;
          auVar72._13_3_ = 0;
          auVar72._0_13_ = auVar5 | auVar27;
          auVar85 = auVar85 | auVar76 | auVar72;
        } while (pbVar69 != pbVar3 + uVar67);
        lVar70 = uVar67 + 1;
        auVar72 = auVar85 >> 0x40 | auVar85;
        auVar85 = auVar85 | auVar85 >> 0x40;
        uVar66 = auVar72._0_4_ | auVar72._4_4_;
        if (param_4 - 1 != uVar67) goto LAB_00101c1a;
      }
LAB_00101d17:
      if (uVar66 != 0) goto LAB_001019f3;
    }
    if (8 < param_4) {
LAB_00101ad0:
      ERR_new();
      ERR_set_debug("crypto/asn1/a_int.c",0x278,"ossl_c2i_uint64_int");
      ERR_set_error(0xd,0xdf,0);
      goto LAB_00101b00;
    }
    c2i_ibuf(&local_28,param_2,pbVar3,param_4);
    uVar67 = (ulong)local_28;
LAB_00101a1f:
    uVar67 = uVar67 << 8 | (ulong)local_27;
    if (((param_4 != 2) && (uVar67 = uVar67 << 8 | (ulong)local_26, param_4 != 3)) &&
       ((uVar67 = uVar67 << 8 | (ulong)local_25, param_4 != 4 &&
        (((uVar67 = uVar67 << 8 | (ulong)local_24, param_4 != 5 &&
          (uVar67 = uVar67 << 8 | (ulong)local_23, param_4 != 6)) &&
         (uVar67 = uVar67 << 8 | (ulong)local_22, param_4 == 8)))))) {
      uVar67 = uVar67 << 8 | (ulong)local_21;
    }
  }
  *param_1 = uVar67;
  uVar68 = 1;
LAB_00101b02:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar68;
}



ulong ossl_i2c_uint64_int(byte *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [14];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [14];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [13];
  undefined1 auVar23 [14];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [14];
  undefined1 auVar27 [15];
  undefined1 auVar28 [13];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [13];
  undefined1 auVar32 [13];
  undefined1 auVar33 [13];
  undefined1 auVar34 [13];
  undefined1 auVar35 [15];
  undefined1 auVar36 [13];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  unkuint9 Var42;
  undefined1 auVar43 [11];
  undefined1 auVar44 [13];
  undefined1 auVar45 [13];
  undefined1 auVar46 [14];
  undefined1 auVar47 [15];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [11];
  undefined1 auVar54 [14];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [15];
  undefined1 auVar59 [15];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  uint6 uVar62;
  uint5 uVar63;
  undefined1 auVar64 [15];
  uint uVar65;
  ulong uVar66;
  undefined1 *puVar67;
  ulong uVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  undefined1 *puVar72;
  byte bVar73;
  long in_FS_OFFSET;
  bool bVar74;
  undefined2 uVar76;
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ushort uVar79;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  unkuint10 Var80;
  undefined1 auVar81 [16];
  undefined1 auVar87 [14];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uStack_30;
  undefined1 local_21;
  long local_20;
  uint uVar86;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar72 = &local_21;
  lVar70 = 8;
  do {
    lVar69 = lVar70;
    puVar67 = puVar72;
    uVar66 = param_2;
    *puVar67 = (char)uVar66;
    lVar70 = lVar69 + -1;
    param_2 = uVar66 >> 8;
    puVar72 = puVar67 + -1;
  } while (uVar66 >> 8 != 0);
  uVar68 = 8 - lVar70;
  if (uVar68 == 0) {
    if (param_1 != (byte *)0x0) {
      *param_1 = 0;
    }
    uVar66 = 1;
    goto LAB_00101e3e;
  }
  if (param_3 == 0) {
    if (uVar66 < 0x80) {
      uVar65 = 0;
      bVar73 = 0;
    }
    else {
      uVar65 = 0;
      bVar73 = 0;
      uVar68 = 9 - lVar70;
    }
  }
  else if (uVar66 < 0x81) {
    uVar65 = 1;
    bVar73 = 0xff;
    if (uVar66 == 0x80) {
      if (uVar68 == 1) {
        bVar73 = 0;
        uVar65 = 0;
      }
      else {
        if (6U - lVar70 < 0xf) {
          auVar88 = (undefined1  [16])0x0;
          uVar65 = 0;
          lVar71 = 1;
          uVar66 = 0;
LAB_00101f64:
          uVar1 = (uVar68 - uVar66) - 1;
          if (6 < (uVar68 - uVar66) - 2) {
            uVar66 = *(ulong *)(puVar67 + uVar66 + 1);
            uVar85 = (undefined1)(uVar66 >> 0x38);
            auVar4._8_6_ = 0;
            auVar4._0_8_ = uVar66;
            auVar4[0xe] = uVar85;
            uVar84 = (undefined1)(uVar66 >> 0x30);
            auVar8._8_4_ = 0;
            auVar8._0_8_ = uVar66;
            auVar8[0xc] = uVar84;
            auVar8._13_2_ = auVar4._13_2_;
            auVar12._8_4_ = 0;
            auVar12._0_8_ = uVar66;
            auVar12._12_3_ = auVar8._12_3_;
            uVar83 = (undefined1)(uVar66 >> 0x28);
            auVar18._8_2_ = 0;
            auVar18._0_8_ = uVar66;
            auVar18[10] = uVar83;
            auVar18._11_4_ = auVar12._11_4_;
            auVar24._8_2_ = 0;
            auVar24._0_8_ = uVar66;
            auVar24._10_5_ = auVar18._10_5_;
            uVar82 = (undefined1)(uVar66 >> 0x20);
            auVar29[8] = uVar82;
            auVar29._0_8_ = uVar66;
            auVar29._9_6_ = auVar24._9_6_;
            auVar47._7_8_ = 0;
            auVar47._0_7_ = auVar29._8_7_;
            auVar48._8_7_ = 0;
            auVar48._0_8_ = SUB158(auVar47 << 0x40,7);
            auVar49._9_6_ = 0;
            auVar49._0_9_ = SUB159(auVar48 << 0x38,6);
            auVar50._10_5_ = 0;
            auVar50._0_10_ = SUB1510(auVar49 << 0x30,5);
            auVar51._11_4_ = 0;
            auVar51._0_11_ = SUB1511(auVar50 << 0x28,4);
            uVar79 = (ushort)uVar66;
            auVar64._12_3_ = 0;
            auVar64._0_12_ = SUB1512(auVar51 << 0x20,3);
            auVar38._2_13_ = SUB1513(auVar64 << 0x18,2);
            auVar38._0_2_ = uVar79 & 0xff;
            auVar5._8_6_ = 0;
            auVar5._0_8_ = uVar66;
            auVar5[0xe] = uVar85;
            auVar9._8_4_ = 0;
            auVar9._0_8_ = uVar66;
            auVar9[0xc] = uVar84;
            auVar9._13_2_ = auVar5._13_2_;
            auVar13._8_4_ = 0;
            auVar13._0_8_ = uVar66;
            auVar13._12_3_ = auVar9._12_3_;
            auVar19._8_2_ = 0;
            auVar19._0_8_ = uVar66;
            auVar19[10] = uVar83;
            auVar19._11_4_ = auVar13._11_4_;
            auVar25._8_2_ = 0;
            auVar25._0_8_ = uVar66;
            auVar25._10_5_ = auVar19._10_5_;
            auVar30[8] = uVar82;
            auVar30._0_8_ = uVar66;
            auVar30._9_6_ = auVar25._9_6_;
            auVar52._7_8_ = 0;
            auVar52._0_7_ = auVar30._8_7_;
            Var42 = CONCAT81(SUB158(auVar52 << 0x40,7),(char)(uVar66 >> 0x18));
            auVar60._9_6_ = 0;
            auVar60._0_9_ = Var42;
            auVar53._1_10_ = SUB1510(auVar60 << 0x30,5);
            auVar53[0] = (char)(uVar66 >> 0x10);
            auVar61._11_4_ = 0;
            auVar61._0_11_ = auVar53;
            auVar37[2] = (char)(uVar66 >> 8);
            auVar37._0_2_ = uVar79;
            auVar37._3_12_ = SUB1512(auVar61 << 0x20,3);
            auVar39._2_13_ = auVar37._2_13_;
            auVar39._0_2_ = uVar79 & 0xff;
            uVar86 = auVar29._8_4_;
            Var80 = (unkuint10)auVar38._0_4_ << 0x40;
            uVar76 = (undefined2)Var42;
            auVar10._10_2_ = 0;
            auVar10._0_10_ = auVar39._0_10_;
            auVar10._12_2_ = uVar76;
            uVar62 = CONCAT42(auVar10._10_4_,auVar53._0_2_);
            auVar54._6_8_ = 0;
            auVar54._0_6_ = uVar62;
            uVar65 = auVar39._0_4_;
            auVar26._4_2_ = auVar37._2_2_;
            auVar26._0_4_ = uVar65;
            auVar26._6_8_ = SUB148(auVar54 << 0x40,6);
            auVar31._10_2_ = 0;
            auVar31._0_10_ = Var80;
            auVar31[0xc] = uVar85;
            uVar63 = CONCAT32(auVar31._10_3_,auVar8._12_2_);
            auVar55._5_8_ = 0;
            auVar55._0_5_ = uVar63;
            auVar32._4_2_ = auVar18._10_2_;
            auVar32._0_4_ = uVar86;
            auVar32._6_7_ = SUB137(auVar55 << 0x40,6);
            auVar6._10_2_ = 0;
            auVar6._0_10_ = auVar39._0_10_;
            auVar6._12_2_ = uVar76;
            auVar56._2_4_ = auVar6._10_4_;
            auVar56._0_2_ = auVar53._0_2_;
            auVar56._6_8_ = 0;
            auVar20._4_2_ = auVar37._2_2_;
            auVar20._0_4_ = uVar65;
            auVar20._6_8_ = SUB148(auVar56 << 0x40,6);
            auVar90._0_4_ = uVar65 & 0xffff;
            auVar90._4_10_ = auVar20._4_10_;
            auVar90._14_2_ = 0;
            auVar89._4_4_ = auVar10._10_4_ >> 0x10;
            auVar89._0_4_ = (int)uVar62;
            auVar89._8_2_ = uVar79 & 0xff;
            auVar89._10_2_ = 0;
            auVar89._12_4_ = auVar26._4_4_;
            auVar33._10_2_ = 0;
            auVar33._0_10_ = Var80;
            auVar33[0xc] = uVar85;
            auVar57._2_3_ = auVar33._10_3_;
            auVar57._0_2_ = auVar8._12_2_;
            auVar57._5_8_ = 0;
            auVar34._4_2_ = auVar18._10_2_;
            auVar34._0_4_ = uVar86;
            auVar34._6_7_ = SUB137(auVar57 << 0x40,6);
            auVar78._0_4_ = uVar86 & 0xffff;
            auVar78._4_9_ = auVar34._4_9_;
            auVar78._13_3_ = 0;
            auVar81._4_3_ = auVar31._10_3_ >> 0x10;
            auVar81._0_4_ = (int)uVar63;
            auVar81[7] = 0;
            auVar81._8_4_ = uVar86 & 0xffff;
            auVar81._12_4_ = auVar32._4_4_;
            auVar88 = auVar89 | auVar90 | auVar81 | auVar78 | auVar88;
            uVar65 = auVar88._0_4_ | auVar88._4_4_;
            lVar71 = lVar71 + (uVar1 & 0xfffffffffffffff8);
            if ((uVar1 & 7) == 0) goto LAB_00102059;
          }
          uVar65 = uVar65 | (byte)puVar67[lVar71];
          if ((((lVar71 + 1U < uVar68) &&
               (uVar65 = uVar65 | (byte)puVar67[lVar71 + 1], lVar71 + 2U < uVar68)) &&
              (uVar65 = uVar65 | (byte)puVar67[lVar71 + 2], lVar71 + 3U < uVar68)) &&
             (((uVar65 = uVar65 | (byte)puVar67[lVar71 + 3], lVar71 + 4U < uVar68 &&
               (uVar65 = uVar65 | (byte)puVar67[lVar71 + 4], lVar71 + 5U < uVar68)) &&
              (uVar65 = uVar65 | (byte)puVar67[lVar71 + 5], lVar71 + 6U < uVar68)))) {
            uVar65 = uVar65 | (byte)puVar67[lVar71 + 6];
          }
        }
        else {
          auVar89 = (undefined1  [16])0x0;
          uVar66 = 7U - lVar70 & 0xfffffffffffffff0;
          puVar72 = puVar67;
          do {
            auVar88 = *(undefined1 (*) [16])(puVar72 + 1);
            puVar72 = puVar72 + 0x10;
            uVar65 = CONCAT13(0,CONCAT12(auVar88[9],(ushort)auVar88[8]));
            auVar7[0xd] = 0;
            auVar7._0_13_ = auVar88._0_13_;
            auVar7[0xe] = auVar88[7];
            auVar11[0xc] = auVar88[6];
            auVar11._0_12_ = auVar88._0_12_;
            auVar11._13_2_ = auVar7._13_2_;
            auVar14[0xb] = 0;
            auVar14._0_11_ = auVar88._0_11_;
            auVar14._12_3_ = auVar11._12_3_;
            auVar21[10] = auVar88[5];
            auVar21._0_10_ = auVar88._0_10_;
            auVar21._11_4_ = auVar14._11_4_;
            auVar27[9] = 0;
            auVar27._0_9_ = auVar88._0_9_;
            auVar27._10_5_ = auVar21._10_5_;
            auVar35[8] = auVar88[4];
            auVar35._0_8_ = auVar88._0_8_;
            auVar35._9_6_ = auVar27._9_6_;
            auVar41._7_8_ = 0;
            auVar41._0_7_ = auVar35._8_7_;
            Var42 = CONCAT81(SUB158(auVar41 << 0x40,7),auVar88[3]);
            auVar58._9_6_ = 0;
            auVar58._0_9_ = Var42;
            auVar43._1_10_ = SUB1510(auVar58 << 0x30,5);
            auVar43[0] = auVar88[2];
            auVar59._11_4_ = 0;
            auVar59._0_11_ = auVar43;
            auVar44._1_12_ = SUB1512(auVar59 << 0x20,3);
            auVar44[0] = auVar88[1];
            auVar40[1] = 0;
            auVar40[0] = auVar88[0];
            auVar40._2_13_ = auVar44;
            auVar15[0xc] = auVar88[0xb];
            auVar15._0_12_ = ZEXT112(auVar88[0xc]) << 0x40;
            auVar16._10_3_ = auVar15._10_3_;
            auVar16._0_10_ = (unkuint10)auVar88[10] << 0x40;
            auVar45._5_8_ = 0;
            auVar45._0_5_ = auVar16._8_5_;
            auVar22[4] = auVar88[9];
            auVar22._0_4_ = uVar65;
            auVar22[5] = 0;
            auVar22._6_7_ = SUB137(auVar45 << 0x40,6);
            auVar28._4_9_ = auVar22._4_9_;
            auVar28._0_4_ = uVar65 & 0xffff;
            auVar2._1_3_ = 0;
            auVar2[0] = auVar88[0xc];
            auVar2[4] = auVar88[0xd];
            auVar2._5_3_ = 0;
            auVar2[8] = auVar88[0xe];
            auVar2._9_3_ = 0;
            auVar2[0xc] = auVar88[0xf];
            auVar75._13_3_ = 0;
            auVar75._0_13_ = auVar28 | auVar2;
            auVar3._10_2_ = 0;
            auVar3._0_10_ = auVar40._0_10_;
            auVar3._12_2_ = (short)Var42;
            auVar46._2_4_ = auVar3._10_4_;
            auVar46._0_2_ = auVar43._0_2_;
            auVar46._6_8_ = 0;
            auVar17._4_2_ = auVar44._0_2_;
            auVar17._0_4_ = auVar40._0_4_;
            auVar17._6_8_ = SUB148(auVar46 << 0x40,6);
            auVar23._4_10_ = auVar17._4_10_;
            auVar23._0_4_ = auVar40._0_4_ & 0xffff;
            auVar36._2_2_ = 0;
            auVar36._0_2_ = auVar35._8_2_;
            auVar36._4_2_ = auVar21._10_2_;
            auVar36._6_2_ = 0;
            auVar36._8_2_ = auVar11._12_2_;
            auVar36._10_2_ = 0;
            auVar36[0xc] = auVar88[7];
            auVar87[0xd] = 0;
            auVar87._0_13_ = auVar36;
            auVar77._14_2_ = 0;
            auVar77._0_14_ = auVar23 | auVar87;
            auVar89 = auVar89 | auVar75 | auVar77;
          } while (puVar67 + uVar66 != puVar72);
          auVar88._8_5_ = auVar36._8_5_;
          auVar88._0_8_ = auVar89._8_8_;
          auVar88._13_3_ = 0;
          lVar71 = uVar66 + 1;
          auVar88 = auVar88 | auVar89;
          auVar89 = auVar89 >> 0x40 | auVar89;
          uVar65 = auVar89._0_4_ | auVar89._4_4_;
          if (uVar66 != 7U - lVar70) goto LAB_00101f64;
        }
LAB_00102059:
        bVar74 = uVar65 != 0;
        uVar65 = (uint)bVar74;
        bVar73 = -bVar74;
        uVar68 = uVar68 + bVar74;
      }
    }
  }
  else {
    uVar65 = 1;
    bVar73 = 0xff;
    uVar68 = 9 - lVar70;
  }
  uVar66 = uVar68 & 0xffffffff;
  if (param_1 != (byte *)0x0) {
    *param_1 = bVar73;
    lVar70 = 7 - lVar70;
    do {
      uVar65 = (*(byte *)((long)&uStack_30 + lVar70 + lVar69 + 7) ^ bVar73) + uVar65;
      param_1[lVar70 + uVar68 + lVar69 + -9] = (byte)uVar65;
      uVar65 = uVar65 >> 8;
      bVar74 = lVar70 != 0;
      lVar70 = lVar70 + -1;
    } while (bVar74);
  }
LAB_00101e3e:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack_30 = "crypto/asn1/a_int.c";
    __stack_chk_fail();
  }
  return uVar66;
}



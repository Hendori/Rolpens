
undefined8 bsd_sum_stream(uint *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  byte *__ptr;
  long lVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  __ptr = (byte *)malloc(0x8000);
  if (__ptr == (byte *)0x0) {
    return 0xffffffff;
  }
  uVar9 = 0;
  uVar8 = 0;
  do {
    uVar10 = 0;
LAB_0010005c:
    uVar7 = 0x8000;
    if (0x7fff < uVar10) {
      uVar7 = uVar10;
    }
    lVar2 = __fread_unlocked_chk(__ptr + uVar10,uVar7 - uVar10,1,0x8000 - uVar10,param_1);
    uVar10 = uVar10 + lVar2;
    if (uVar10 != 0x8000) {
      if (lVar2 != 0) goto code_r0x00100053;
      if ((*param_1 & 0x20) == 0) goto LAB_001000ed;
      goto LAB_001000dc;
    }
    pbVar4 = __ptr;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + (uint)bVar1 & 0xffff;
    } while (__ptr + 0x8000 != pbVar4);
    bVar11 = uVar8 < 0xffffffffffff8000;
    uVar8 = uVar8 + 0x8000;
  } while (bVar11);
LAB_001000d1:
  piVar3 = __errno_location();
  *piVar3 = 0x4b;
LAB_001000dc:
  uVar6 = 0xffffffff;
LAB_0010013f:
  free(__ptr);
  return uVar6;
code_r0x00100053:
  if ((*param_1 & 0x10) == 0) goto LAB_0010005c;
LAB_001000ed:
  pbVar4 = __ptr;
  if (uVar10 == 0) goto LAB_0010012e;
  do {
    pbVar5 = pbVar4 + 1;
    uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + (uint)*pbVar4 & 0xffff;
    pbVar4 = pbVar5;
  } while (__ptr + uVar10 != pbVar5);
  if (!CARRY8(uVar8,uVar10)) {
LAB_0010012e:
    uVar6 = 0;
    *param_2 = uVar9;
    *param_3 = uVar8 + uVar10;
    goto LAB_0010013f;
  }
  goto LAB_001000d1;
}



undefined8 sysv_sum_stream(uint *param_1,int *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [14];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [13];
  undefined1 auVar20 [14];
  undefined1 auVar21 [15];
  undefined1 auVar22 [13];
  undefined1 auVar23 [13];
  undefined1 auVar24 [13];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [13];
  undefined1 auVar37 [13];
  undefined1 auVar38 [13];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [15];
  unkuint9 Var48;
  undefined1 auVar49 [11];
  undefined1 auVar50 [13];
  undefined1 auVar51 [13];
  undefined1 auVar52 [14];
  undefined1 auVar53 [15];
  undefined1 auVar54 [11];
  undefined1 auVar55 [13];
  undefined1 auVar56 [14];
  undefined1 auVar57 [13];
  undefined1 auVar58 [15];
  undefined1 auVar59 [11];
  undefined1 auVar60 [15];
  undefined1 auVar61 [15];
  undefined1 auVar62 [15];
  undefined1 auVar63 [15];
  undefined1 auVar64 [15];
  undefined1 auVar65 [14];
  undefined1 auVar66 [13];
  undefined1 auVar67 [15];
  undefined1 auVar68 [15];
  undefined1 auVar69 [15];
  undefined1 auVar70 [15];
  undefined1 auVar71 [15];
  undefined1 auVar72 [15];
  uint6 uVar73;
  undefined1 auVar74 [15];
  uint uVar75;
  undefined1 (*__ptr) [16];
  long lVar76;
  int *piVar77;
  undefined1 (*pauVar78) [16];
  ulong uVar79;
  undefined8 uVar80;
  ulong uVar81;
  uint uVar82;
  ulong uVar83;
  ulong uVar84;
  bool bVar85;
  uint uVar86;
  undefined2 uVar87;
  ushort uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  unkuint10 Var93;
  int iVar94;
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  
  __ptr = (undefined1 (*) [16])malloc(0x8000);
  if (__ptr == (undefined1 (*) [16])0x0) {
    return 0xffffffff;
  }
  uVar82 = 0;
  uVar83 = 0;
  do {
    uVar84 = 0;
LAB_001001bc:
    uVar79 = 0x8000;
    if (0x7fff < uVar84) {
      uVar79 = uVar84;
    }
    lVar76 = __fread_unlocked_chk(*__ptr + uVar84,uVar79 - uVar84,1,0x8000 - uVar84,param_1);
    uVar84 = uVar84 + lVar76;
    if (uVar84 != 0x8000) {
      if (lVar76 != 0) goto code_r0x001001b3;
      if ((*param_1 & 0x20) == 0) goto LAB_00100295;
      goto LAB_00100282;
    }
    iVar94 = 0;
    iVar95 = 0;
    iVar96 = 0;
    iVar98 = 0;
    pauVar78 = __ptr;
    do {
      auVar2 = *pauVar78;
      pauVar78 = pauVar78 + 1;
      uVar86 = CONCAT13(0,CONCAT12(auVar2[9],(ushort)auVar2[8]));
      auVar6[0xd] = 0;
      auVar6._0_13_ = auVar2._0_13_;
      auVar6[0xe] = auVar2[7];
      auVar12[0xc] = auVar2[6];
      auVar12._0_12_ = auVar2._0_12_;
      auVar12._13_2_ = auVar6._13_2_;
      auVar16[0xb] = 0;
      auVar16._0_11_ = auVar2._0_11_;
      auVar16._12_3_ = auVar12._12_3_;
      uVar75 = auVar16._11_4_;
      auVar28[10] = auVar2[5];
      auVar28._0_10_ = auVar2._0_10_;
      auVar28._11_4_ = uVar75;
      auVar32[9] = 0;
      auVar32._0_9_ = auVar2._0_9_;
      auVar32._10_5_ = auVar28._10_5_;
      auVar39[8] = auVar2[4];
      auVar39._0_8_ = auVar2._0_8_;
      auVar39._9_6_ = auVar32._9_6_;
      auVar47._7_8_ = 0;
      auVar47._0_7_ = auVar39._8_7_;
      Var48 = CONCAT81(SUB158(auVar47 << 0x40,7),auVar2[3]);
      auVar67._9_6_ = 0;
      auVar67._0_9_ = Var48;
      auVar49._1_10_ = SUB1510(auVar67 << 0x30,5);
      auVar49[0] = auVar2[2];
      auVar68._11_4_ = 0;
      auVar68._0_11_ = auVar49;
      auVar50._1_12_ = SUB1512(auVar68 << 0x20,3);
      auVar50[0] = auVar2[1];
      auVar44[1] = 0;
      auVar44[0] = auVar2[0];
      auVar44._2_13_ = auVar50;
      auVar17[0xc] = auVar2[0xb];
      auVar17._0_12_ = ZEXT112(auVar2[0xc]) << 0x40;
      auVar18._10_3_ = auVar17._10_3_;
      auVar18._0_10_ = (unkuint10)auVar2[10] << 0x40;
      auVar51._5_8_ = 0;
      auVar51._0_5_ = auVar18._8_5_;
      auVar19[4] = auVar2[9];
      auVar19._0_4_ = uVar86;
      auVar19[5] = 0;
      auVar19._6_7_ = SUB137(auVar51 << 0x40,6);
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar44._0_10_;
      auVar3._12_2_ = (short)Var48;
      uVar73 = CONCAT42(auVar3._10_4_,auVar49._0_2_);
      auVar52._6_8_ = 0;
      auVar52._0_6_ = uVar73;
      auVar20._4_2_ = auVar50._0_2_;
      auVar20._0_4_ = auVar44._0_4_;
      auVar20._6_8_ = SUB148(auVar52 << 0x40,6);
      iVar94 = iVar94 + (uint)auVar2[0xc] + (uVar86 & 0xffff) +
                        (uint)auVar39._8_2_ + (auVar44._0_4_ & 0xffff);
      iVar95 = iVar95 + (uint)auVar2[0xd] + auVar19._4_4_ + (uint)auVar28._10_2_ + auVar20._4_4_;
      iVar96 = iVar96 + (uint)auVar2[0xe] + auVar18._8_4_ + (uVar75 >> 8 & 0xffff) + (int)uVar73;
      iVar98 = iVar98 + (uint)auVar2[0xf] + (uint)(uint3)(auVar17._10_3_ >> 0x10) +
                        (uVar75 >> 0x18) + (auVar3._10_4_ >> 0x10);
    } while (pauVar78 != __ptr + 0x800);
    uVar82 = uVar82 + iVar94 + iVar96 + iVar95 + iVar98;
    bVar85 = uVar83 < 0xffffffffffff8000;
    uVar83 = uVar83 + 0x8000;
  } while (bVar85);
LAB_00100277:
  piVar77 = __errno_location();
  *piVar77 = 0x4b;
LAB_00100282:
  uVar80 = 0xffffffff;
LAB_00100474:
  free(__ptr);
  return uVar80;
code_r0x001001b3:
  if ((*param_1 & 0x10) == 0) goto LAB_001001bc;
LAB_00100295:
  if (uVar84 == 0) goto LAB_0010044d;
  if (uVar84 - 1 < 0xf) {
    iVar94 = 0;
    iVar95 = 0;
    uVar79 = 0;
    uVar75 = uVar82;
    goto LAB_00100348;
  }
  iVar96 = 0;
  iVar98 = 0;
  iVar97 = 0;
  iVar99 = 0;
  uVar79 = uVar84 & 0xfffffffffffffff0;
  pauVar78 = __ptr;
  do {
    auVar2 = *pauVar78;
    pauVar78 = pauVar78 + 1;
    uVar86 = CONCAT13(0,CONCAT12(auVar2[9],(ushort)auVar2[8]));
    auVar7[0xd] = 0;
    auVar7._0_13_ = auVar2._0_13_;
    auVar7[0xe] = auVar2[7];
    auVar13[0xc] = auVar2[6];
    auVar13._0_12_ = auVar2._0_12_;
    auVar13._13_2_ = auVar7._13_2_;
    auVar21[0xb] = 0;
    auVar21._0_11_ = auVar2._0_11_;
    auVar21._12_3_ = auVar13._12_3_;
    uVar75 = auVar21._11_4_;
    auVar29[10] = auVar2[5];
    auVar29._0_10_ = auVar2._0_10_;
    auVar29._11_4_ = uVar75;
    auVar33[9] = 0;
    auVar33._0_9_ = auVar2._0_9_;
    auVar33._10_5_ = auVar29._10_5_;
    auVar40[8] = auVar2[4];
    auVar40._0_8_ = auVar2._0_8_;
    auVar40._9_6_ = auVar33._9_6_;
    auVar53._7_8_ = 0;
    auVar53._0_7_ = auVar40._8_7_;
    Var48 = CONCAT81(SUB158(auVar53 << 0x40,7),auVar2[3]);
    auVar69._9_6_ = 0;
    auVar69._0_9_ = Var48;
    auVar54._1_10_ = SUB1510(auVar69 << 0x30,5);
    auVar54[0] = auVar2[2];
    auVar70._11_4_ = 0;
    auVar70._0_11_ = auVar54;
    auVar55._1_12_ = SUB1512(auVar70 << 0x20,3);
    auVar55[0] = auVar2[1];
    uVar88 = CONCAT11(0,auVar2[0]);
    auVar45._2_13_ = auVar55;
    auVar45._0_2_ = uVar88;
    auVar8._10_2_ = 0;
    auVar8._0_10_ = auVar45._0_10_;
    auVar8._12_2_ = (short)Var48;
    uVar73 = CONCAT42(auVar8._10_4_,auVar54._0_2_);
    auVar56._6_8_ = 0;
    auVar56._0_6_ = uVar73;
    auVar22[0xc] = auVar2[0xb];
    auVar22._0_12_ = ZEXT112(auVar2[0xc]) << 0x40;
    auVar23._10_3_ = auVar22._10_3_;
    auVar23._0_10_ = (unkuint10)auVar2[10] << 0x40;
    auVar57._5_8_ = 0;
    auVar57._0_5_ = auVar23._8_5_;
    auVar24[4] = auVar2[9];
    auVar24._0_4_ = uVar86;
    auVar24[5] = 0;
    auVar24._6_7_ = SUB137(auVar57 << 0x40,6);
    iVar96 = iVar96 + (uint)uVar88 + (uint)auVar40._8_2_ + (uVar86 & 0xffff) + (uint)auVar2[0xc];
    iVar98 = iVar98 + (int)CONCAT82(SUB148(auVar56 << 0x40,6),auVar55._0_2_) + (uint)auVar29._10_2_
                      + auVar24._4_4_ + (uint)auVar2[0xd];
    iVar97 = iVar97 + (int)uVar73 + (uVar75 >> 8 & 0xffff) + auVar23._8_4_ + (uint)auVar2[0xe];
    iVar99 = iVar99 + (auVar8._10_4_ >> 0x10) + (uVar75 >> 0x18) +
                      (uint)(uint3)(auVar22._10_3_ >> 0x10) + (uint)auVar2[0xf];
  } while (pauVar78 != (undefined1 (*) [16])(*__ptr + uVar79));
  iVar94 = iVar96 + iVar97;
  iVar95 = iVar98 + iVar99;
  uVar75 = iVar97 + iVar96 + iVar99 + iVar98 + uVar82;
  if (uVar84 != uVar79) {
LAB_00100348:
    uVar81 = uVar84 - uVar79;
    if (6 < uVar81 - 1) {
      uVar1 = *(ulong *)(*__ptr + uVar79);
      uVar92 = (undefined1)(uVar1 >> 0x38);
      auVar9._8_6_ = 0;
      auVar9._0_8_ = uVar1;
      auVar9[0xe] = uVar92;
      uVar91 = (undefined1)(uVar1 >> 0x30);
      auVar14._8_4_ = 0;
      auVar14._0_8_ = uVar1;
      auVar14[0xc] = uVar91;
      auVar14._13_2_ = auVar9._13_2_;
      auVar25._8_4_ = 0;
      auVar25._0_8_ = uVar1;
      auVar25._12_3_ = auVar14._12_3_;
      uVar90 = (undefined1)(uVar1 >> 0x28);
      auVar30._8_2_ = 0;
      auVar30._0_8_ = uVar1;
      auVar30[10] = uVar90;
      auVar30._11_4_ = auVar25._11_4_;
      auVar34._8_2_ = 0;
      auVar34._0_8_ = uVar1;
      auVar34._10_5_ = auVar30._10_5_;
      uVar89 = (undefined1)(uVar1 >> 0x20);
      auVar41[8] = uVar89;
      auVar41._0_8_ = uVar1;
      auVar41._9_6_ = auVar34._9_6_;
      auVar58._7_8_ = 0;
      auVar58._0_7_ = auVar41._8_7_;
      Var48 = CONCAT81(SUB158(auVar58 << 0x40,7),(char)(uVar1 >> 0x18));
      auVar71._9_6_ = 0;
      auVar71._0_9_ = Var48;
      auVar59._1_10_ = SUB1510(auVar71 << 0x30,5);
      auVar59[0] = (char)(uVar1 >> 0x10);
      auVar72._11_4_ = 0;
      auVar72._0_11_ = auVar59;
      auVar42[2] = (char)(uVar1 >> 8);
      auVar42._0_2_ = (ushort)uVar1;
      auVar42._3_12_ = SUB1512(auVar72 << 0x20,3);
      auVar46[1] = 0;
      auVar46[0] = (byte)uVar1;
      auVar46._2_13_ = auVar42._2_13_;
      auVar4._8_6_ = 0;
      auVar4._0_8_ = uVar1;
      auVar4[0xe] = uVar92;
      auVar10._8_4_ = 0;
      auVar10._0_8_ = uVar1;
      auVar10[0xc] = uVar91;
      auVar10._13_2_ = auVar4._13_2_;
      auVar15._8_4_ = 0;
      auVar15._0_8_ = uVar1;
      auVar15._12_3_ = auVar10._12_3_;
      auVar26._8_2_ = 0;
      auVar26._0_8_ = uVar1;
      auVar26[10] = uVar90;
      auVar26._11_4_ = auVar15._11_4_;
      auVar31._8_2_ = 0;
      auVar31._0_8_ = uVar1;
      auVar31._10_5_ = auVar26._10_5_;
      auVar35[8] = uVar89;
      auVar35._0_8_ = uVar1;
      auVar35._9_6_ = auVar31._9_6_;
      auVar60._7_8_ = 0;
      auVar60._0_7_ = auVar35._8_7_;
      auVar61._8_7_ = 0;
      auVar61._0_8_ = SUB158(auVar60 << 0x40,7);
      auVar62._9_6_ = 0;
      auVar62._0_9_ = SUB159(auVar61 << 0x38,6);
      auVar63._10_5_ = 0;
      auVar63._0_10_ = SUB1510(auVar62 << 0x30,5);
      auVar64._11_4_ = 0;
      auVar64._0_11_ = SUB1511(auVar63 << 0x28,4);
      auVar74._12_3_ = 0;
      auVar74._0_12_ = SUB1512(auVar64 << 0x20,3);
      auVar43._2_13_ = SUB1513(auVar74 << 0x18,2);
      auVar43._0_2_ = (ushort)uVar1 & 0xff;
      Var93 = (unkuint10)auVar43._0_4_ << 0x40;
      uVar87 = (undefined2)Var48;
      auVar11._10_2_ = 0;
      auVar11._0_10_ = auVar46._0_10_;
      auVar11._12_2_ = uVar87;
      auVar36._10_2_ = 0;
      auVar36._0_10_ = Var93;
      auVar36[0xc] = uVar92;
      auVar5._10_2_ = 0;
      auVar5._0_10_ = auVar46._0_10_;
      auVar5._12_2_ = uVar87;
      auVar65._2_4_ = auVar5._10_4_;
      auVar65._0_2_ = auVar59._0_2_;
      auVar65._6_8_ = 0;
      auVar27._4_2_ = auVar42._2_2_;
      auVar27._0_4_ = auVar46._0_4_;
      auVar27._6_8_ = SUB148(auVar65 << 0x40,6);
      auVar37._10_2_ = 0;
      auVar37._0_10_ = Var93;
      auVar37[0xc] = uVar92;
      auVar66._2_3_ = auVar37._10_3_;
      auVar66._0_2_ = auVar10._12_2_;
      auVar66._5_8_ = 0;
      auVar38._4_2_ = auVar26._10_2_;
      auVar38._0_4_ = auVar35._8_4_;
      auVar38._6_7_ = SUB137(auVar66 << 0x40,6);
      uVar75 = uVar82 + (auVar11._10_4_ >> 0x10) + auVar27._4_4_ +
                        (uint)(uint3)(auVar36._10_3_ >> 0x10) + auVar38._4_4_ + iVar95 +
                        (int)CONCAT42(auVar11._10_4_,auVar59._0_2_) + (auVar46._0_4_ & 0xffff) +
                        (int)CONCAT32(auVar36._10_3_,auVar10._12_2_) + (auVar35._8_4_ & 0xffff) +
                        iVar94;
      uVar79 = uVar79 + (uVar81 & 0xfffffffffffffff8);
      if ((uVar81 & 7) == 0) goto LAB_00100444;
    }
    uVar75 = uVar75 + (byte)(*__ptr)[uVar79];
    if ((((uVar79 + 1 < uVar84) &&
         (uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 1], uVar79 + 2 < uVar84)) &&
        (uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 2], uVar79 + 3 < uVar84)) &&
       (((uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 3], uVar79 + 4 < uVar84 &&
         (uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 4], uVar79 + 5 < uVar84)) &&
        (uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 5], uVar79 + 6 < uVar84)))) {
      uVar75 = uVar75 + (byte)(*__ptr)[uVar79 + 6];
    }
  }
LAB_00100444:
  uVar82 = uVar75;
  if (!CARRY8(uVar83,uVar84)) {
LAB_0010044d:
    *param_2 = ((int)((uVar82 & 0xffff) + (uVar82 >> 0x10)) >> 0x10) +
               ((uVar82 >> 0x10) + uVar82 & 0xffff);
    uVar80 = 0;
    *param_3 = uVar83 + uVar84;
    goto LAB_00100474;
  }
  goto LAB_00100277;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_bsd(undefined8 param_1,undefined8 param_2,ushort *param_3,char param_4,
               undefined8 param_5,byte param_6,char param_7,undefined8 param_8)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  _IO_FILE *p_Var4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_2c8 [664];
  long local_30;
  
  p_Var4 = _stdout;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == '\0') {
    uVar6 = human_readable(param_8,auStack_2c8,0,1,0x400);
    __printf_chk(2,"%05d %5s",*(undefined4 *)param_3,uVar6);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC1,param_1);
    }
    pbVar3 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = param_6;
    }
    else {
      __overflow(_stdout,(uint)param_6);
    }
  }
  else {
    uVar1 = *param_3;
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)(uVar1 >> 8);
    }
    else {
      iVar5 = __overflow(_stdout,(uint)(uVar1 >> 8));
      if (iVar5 == -1) goto LAB_0010052f;
    }
    pbVar3 = (byte *)p_Var4->_IO_write_ptr;
    if (p_Var4->_IO_write_end <= pbVar3) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        __overflow(p_Var4,(uint)(byte)uVar1);
        return;
      }
      goto LAB_0010062e;
    }
    p_Var4->_IO_write_ptr = (char *)(pbVar3 + 1);
    *pbVar3 = (byte)uVar1;
  }
LAB_0010052f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010062e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void output_sysv(undefined8 param_1,undefined8 param_2,ushort *param_3,char param_4,
                undefined8 param_5,byte param_6,char param_7,undefined8 param_8)

{
  ushort uVar1;
  char *pcVar2;
  byte *pbVar3;
  _IO_FILE *p_Var4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_2c8 [664];
  long local_30;
  
  p_Var4 = _stdout;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == '\0') {
    uVar6 = human_readable(param_8,auStack_2c8,0,1,0x200);
    __printf_chk(2,"%d %s",*(undefined4 *)param_3,uVar6);
    if (param_7 != '\0') {
      __printf_chk(2,&_LC1,param_1);
    }
    pbVar3 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = param_6;
    }
    else {
      __overflow(_stdout,(uint)param_6);
    }
  }
  else {
    uVar1 = *param_3;
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = (char)(uVar1 >> 8);
    }
    else {
      iVar5 = __overflow(_stdout,(uint)(uVar1 >> 8));
      if (iVar5 == -1) goto LAB_001006bf;
    }
    pbVar3 = (byte *)p_Var4->_IO_write_ptr;
    if (p_Var4->_IO_write_end <= pbVar3) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        __overflow(p_Var4,(uint)(byte)uVar1);
        return;
      }
      goto LAB_001007be;
    }
    p_Var4->_IO_write_ptr = (char *)(pbVar3 + 1);
    *pbVar3 = (byte)uVar1;
  }
LAB_001006bf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001007be:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



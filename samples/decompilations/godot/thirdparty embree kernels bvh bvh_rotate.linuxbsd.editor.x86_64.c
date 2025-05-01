
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNRotate<4>::rotate(embree::NodeRefPtr<4>, unsigned long) */

long embree::sse2::BVHNRotate<4>::rotate(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  ulong in_R9;
  ulong uVar28;
  undefined4 uVar29;
  long in_R10;
  long in_R11;
  float *pfVar30;
  float *pfVar31;
  long in_FS_OFFSET;
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
  float fVar70;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar89;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar97;
  float fVar98;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
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
  float local_88 [4];
  float local_78 [4];
  undefined1 auStack_68 [16];
  float afStack_58 [6];
  long local_40;
  ulong uVar21;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar26 = 0;
  if (((long)param_1 < 0) || (uVar24 = (ulong)((uint)param_1 & 8), ((ulong)param_1 & 8) != 0))
  goto LAB_001009b2;
  plVar23 = param_1;
  pfVar30 = local_88;
  do {
    lVar26 = *plVar23;
    pfVar31 = pfVar30 + 1;
    plVar23 = plVar23 + 1;
    fVar17 = (float)rotate(lVar26,param_2 + 1);
    *pfVar30 = fVar17;
    pfVar30 = pfVar31;
  } while (pfVar31 != local_78);
  iVar18 = (int)param_2 + 1;
  lVar26 = -1;
  uVar22 = 0xffffffffffffffff;
  uVar25 = 0xffffffffffffffff;
  fVar17 = 0.0;
  auVar41 = *(undefined1 (*) [16])(param_1 + 10);
  fVar70 = *(float *)(param_1 + 0xe) - *(float *)(param_1 + 0xc);
  fVar74 = *(float *)((long)param_1 + 0x74) - *(float *)((long)param_1 + 100);
  fVar75 = *(float *)(param_1 + 0xf) - *(float *)(param_1 + 0xd);
  fVar76 = *(float *)((long)param_1 + 0x7c) - *(float *)((long)param_1 + 0x6c);
  fVar79 = auVar41._0_4_ - *(float *)(param_1 + 8);
  fVar82 = auVar41._4_4_ - *(float *)((long)param_1 + 0x44);
  fVar83 = auVar41._8_4_ - *(float *)(param_1 + 9);
  fVar84 = auVar41._12_4_ - *(float *)((long)param_1 + 0x4c);
  local_78[0] = (fVar70 + fVar79) * (*(float *)(param_1 + 6) - *(float *)(param_1 + 4)) +
                fVar70 * fVar79;
  local_78[1] = (fVar74 + fVar82) *
                (*(float *)((long)param_1 + 0x34) - *(float *)((long)param_1 + 0x24)) +
                fVar74 * fVar82;
  local_78[2] = (fVar75 + fVar83) * (*(float *)(param_1 + 7) - *(float *)(param_1 + 5)) +
                fVar75 * fVar83;
  local_78[3] = (fVar76 + fVar84) *
                (*(float *)((long)param_1 + 0x3c) - *(float *)((long)param_1 + 0x2c)) +
                fVar76 * fVar84;
  auVar69._4_4_ = *(float *)(param_1 + 8);
  auVar69._0_4_ = *(float *)(param_1 + 4);
  auVar69._8_4_ = *(float *)(param_1 + 0xc);
  auVar69._12_4_ = 0;
  auVar80._4_4_ = *(float *)((long)param_1 + 0x44);
  auVar80._0_4_ = *(float *)((long)param_1 + 0x24);
  auVar80._8_4_ = *(float *)((long)param_1 + 100);
  auVar80._12_4_ = 0;
  auVar59._4_4_ = *(float *)((long)param_1 + 0x4c);
  auVar59._0_4_ = *(float *)((long)param_1 + 0x2c);
  auVar59._8_4_ = *(float *)((long)param_1 + 0x6c);
  auVar59._12_4_ = 0;
  auVar73._4_4_ = *(float *)(param_1 + 9);
  auVar73._0_4_ = *(float *)(param_1 + 5);
  auVar73._8_4_ = *(float *)(param_1 + 0xd);
  auVar73._12_4_ = 0;
  auVar53._4_4_ = auVar41._12_4_;
  auVar53._0_4_ = *(float *)((long)param_1 + 0x3c);
  auVar53._8_4_ = *(float *)((long)param_1 + 0x7c);
  auVar53._12_4_ = 0;
  auVar77._4_4_ = auVar41._8_4_;
  auVar77._0_4_ = *(float *)(param_1 + 7);
  auVar77._8_4_ = *(float *)(param_1 + 0xf);
  auVar77._12_4_ = 0;
  auVar63._4_4_ = auVar41._0_4_;
  auVar63._0_4_ = *(float *)(param_1 + 6);
  auVar63._8_4_ = *(float *)(param_1 + 0xe);
  auVar63._12_4_ = 0;
  auVar41._4_4_ = auVar41._4_4_;
  auVar41._0_4_ = *(float *)((long)param_1 + 0x34);
  auVar41._8_4_ = *(float *)((long)param_1 + 0x74);
  auVar41._12_4_ = 0;
  do {
    uVar21 = param_1[uVar24];
    if ((-1 < (long)uVar21) && ((uVar21 & 8) == 0)) {
      uVar19 = *(undefined4 *)(uVar21 + 0x20);
      uVar5 = *(undefined4 *)(uVar21 + 0x28);
      uVar6 = *(undefined4 *)(uVar21 + 0x40);
      uVar7 = *(undefined4 *)(uVar21 + 0x48);
      uVar8 = *(undefined4 *)(uVar21 + 0x68);
      uVar9 = *(undefined4 *)(uVar21 + 0x60);
      uVar10 = *(undefined4 *)(uVar21 + 0x30);
      uVar11 = *(undefined4 *)(uVar21 + 0x38);
      auVar91._0_8_ = CONCAT44(uVar7,uVar5);
      auVar91._8_4_ = uVar8;
      auVar91._12_4_ = 0;
      auVar85._4_4_ = *(undefined4 *)(uVar21 + 0x4c);
      auVar85._0_4_ = *(undefined4 *)(uVar21 + 0x2c);
      auVar85._8_4_ = *(undefined4 *)(uVar21 + 0x6c);
      auVar85._12_4_ = 0;
      uVar12 = *(undefined4 *)(uVar21 + 0x50);
      uVar13 = *(undefined4 *)(uVar21 + 0x58);
      uVar14 = *(undefined4 *)(uVar21 + 0x70);
      auVar78._0_8_ = CONCAT44(uVar6,uVar19);
      auVar78._8_4_ = uVar9;
      auVar78._12_4_ = 0;
      auVar71._4_4_ = *(undefined4 *)(uVar21 + 0x44);
      auVar71._0_4_ = *(undefined4 *)(uVar21 + 0x24);
      auVar71._8_4_ = *(undefined4 *)(uVar21 + 100);
      auVar71._12_4_ = 0;
      uVar15 = *(undefined4 *)(uVar21 + 0x78);
      uVar16 = *(undefined4 *)(uVar21 + 0x7c);
      auVar100._0_8_ = CONCAT44(uVar12,uVar10);
      auVar100._8_4_ = uVar14;
      auVar100._12_4_ = 0;
      auVar93._4_4_ = *(undefined4 *)(uVar21 + 0x54);
      auVar93._0_4_ = *(undefined4 *)(uVar21 + 0x34);
      auVar93._8_4_ = *(undefined4 *)(uVar21 + 0x74);
      auVar93._12_4_ = 0;
      auVar99._0_8_ = CONCAT44(uVar13,uVar11);
      auVar99._8_4_ = uVar15;
      auVar99._12_4_ = 0;
      auVar60._0_8_ = CONCAT44(*(undefined4 *)(uVar21 + 0x5c),*(undefined4 *)(uVar21 + 0x3c));
      auVar60._8_4_ = uVar16;
      auVar60._12_4_ = 0;
      auVar81._8_4_ = uVar15;
      auVar81._0_8_ = auVar99._0_8_;
      auVar81._12_4_ = 0;
      auVar90._8_4_ = uVar8;
      auVar90._0_8_ = auVar91._0_8_;
      auVar90._12_4_ = 0;
      auVar81 = maxps(auVar81,auVar60);
      auVar90 = minps(auVar90,auVar85);
      auVar64 = maxps(auVar63,auVar93);
      auVar32 = minps(auVar69,auVar71);
      auVar48._8_4_ = uVar9;
      auVar48._0_8_ = auVar78._0_8_;
      auVar48._12_4_ = 0;
      auVar47 = minps(auVar48,auVar69);
      auVar64 = maxps(auVar64,auVar81);
      auVar32 = minps(auVar32,auVar90);
      auVar48 = minps(auVar47,auVar90);
      fVar76 = auVar64._0_4_ - auVar32._0_4_;
      fVar79 = auVar64._4_4_ - auVar32._4_4_;
      fVar82 = auVar64._8_4_ - auVar32._8_4_;
      auVar47._8_4_ = uVar14;
      auVar47._0_8_ = auVar100._0_8_;
      auVar47._12_4_ = 0;
      auVar32 = maxps(auVar47,auVar63);
      auVar32 = maxps(auVar32,auVar81);
      fVar70 = auVar32._0_4_ - auVar48._0_4_;
      fVar74 = auVar32._4_4_ - auVar48._4_4_;
      fVar75 = auVar32._8_4_ - auVar48._8_4_;
      auVar101._4_4_ = uVar7;
      auVar101._0_4_ = uVar5;
      auVar101._8_4_ = uVar8;
      auVar101._12_4_ = 0;
      auVar47 = minps(auVar69,auVar85);
      auVar102 = minps(auVar101,auVar69);
      auVar64._4_4_ = uVar12;
      auVar64._0_4_ = uVar10;
      auVar64._8_4_ = uVar14;
      auVar64._12_4_ = 0;
      auVar32._8_4_ = uVar16;
      auVar32._0_8_ = auVar60._0_8_;
      auVar32._12_4_ = 0;
      auVar32 = maxps(auVar63,auVar32);
      auVar48 = maxps(auVar64,auVar93);
      auVar94._4_4_ = uVar6;
      auVar94._0_4_ = uVar19;
      auVar94._8_4_ = uVar9;
      auVar94._12_4_ = 0;
      auVar94 = minps(auVar94,auVar71);
      auVar64 = maxps(auVar48,auVar32);
      auVar32 = minps(auVar94,auVar47);
      fVar92 = auVar64._0_4_ - auVar32._0_4_;
      fVar97 = auVar64._4_4_ - auVar32._4_4_;
      fVar98 = auVar64._8_4_ - auVar32._8_4_;
      auVar87._4_4_ = uVar13;
      auVar87._0_4_ = uVar11;
      auVar87._8_4_ = uVar15;
      auVar87._12_4_ = 0;
      auVar32 = maxps(auVar87,auVar63);
      auVar47 = maxps(auVar48,auVar32);
      auVar32 = minps(auVar94,auVar102);
      fVar83 = auVar47._0_4_ - auVar32._0_4_;
      fVar84 = auVar47._4_4_ - auVar32._4_4_;
      fVar89 = auVar47._8_4_ - auVar32._8_4_;
      auVar103._0_4_ = fVar82 * fVar76 + fVar79 * fVar82 + fVar76 * fVar79;
      auVar102._0_4_ = fVar75 * fVar70 + fVar74 * fVar75 + fVar70 * fVar74;
      fVar70 = fVar98 * fVar92 + fVar97 * fVar98 + fVar92 * fVar97;
      auVar103._4_4_ = auVar102._0_4_;
      auVar86._4_4_ = uVar6;
      auVar86._0_4_ = uVar19;
      auVar86._8_4_ = uVar9;
      auVar86._12_4_ = 0;
      fVar74 = fVar89 * fVar83 + fVar84 * fVar89 + fVar83 * fVar84;
      auVar103._12_4_ = fVar74;
      auVar103._8_4_ = fVar70;
      auVar102._4_4_ = auVar103._0_4_;
      auVar102._8_4_ = fVar74;
      auVar102._12_4_ = fVar70;
      auVar32 = minps(auVar80,auVar71);
      auVar47 = minps(auVar102,auVar103);
      auVar87 = minps(auVar86,auVar80);
      auVar32 = minps(auVar32,auVar90);
      auVar96._8_4_ = auVar47._0_4_;
      auVar96._0_8_ = auVar47._8_8_;
      auVar96._12_4_ = auVar47._4_4_;
      auVar64 = minps(auVar96,auVar47);
      auVar47 = minps(auVar87,auVar90);
      auVar104._4_4_ = -(uint)(auVar102._0_4_ == auVar64._4_4_);
      auVar104._0_4_ = -(uint)(auVar103._0_4_ == auVar64._0_4_);
      auVar104._8_4_ = -(uint)(fVar70 == auVar64._8_4_);
      auVar104._12_4_ = -(uint)(fVar74 == auVar64._12_4_);
      auVar87 = maxps(auVar41,auVar93);
      auVar87 = maxps(auVar87,auVar81);
      uVar29 = movmskps((int)in_R10,auVar104);
      uVar28 = CONCAT44((int)((ulong)in_R10 >> 0x20),uVar29);
      in_R10 = 0;
      if (uVar28 != 0) {
        for (; (uVar28 >> in_R10 & 1) == 0; in_R10 = in_R10 + 1) {
        }
      }
      fVar76 = auVar87._0_4_ - auVar32._0_4_;
      fVar79 = auVar87._4_4_ - auVar32._4_4_;
      fVar82 = auVar87._8_4_ - auVar32._8_4_;
      auVar33._4_4_ = uVar12;
      auVar33._0_4_ = uVar10;
      auVar33._8_4_ = uVar14;
      auVar33._12_4_ = 0;
      auVar32 = maxps(auVar33,auVar41);
      auVar32 = maxps(auVar32,auVar81);
      fVar70 = auVar32._0_4_ - auVar47._0_4_;
      fVar74 = auVar32._4_4_ - auVar47._4_4_;
      fVar75 = auVar32._8_4_ - auVar47._8_4_;
      auVar32 = minps(auVar80,auVar85);
      auVar2._8_4_ = uVar16;
      auVar2._0_8_ = auVar60._0_8_;
      auVar2._12_4_ = 0;
      auVar47 = maxps(auVar41,auVar2);
      auVar47 = maxps(auVar48,auVar47);
      auVar32 = minps(auVar94,auVar32);
      fVar92 = auVar47._0_4_ - auVar32._0_4_;
      fVar97 = auVar47._4_4_ - auVar32._4_4_;
      fVar98 = auVar47._8_4_ - auVar32._8_4_;
      auVar54._4_4_ = uVar13;
      auVar54._0_4_ = uVar11;
      auVar54._8_4_ = uVar15;
      auVar54._12_4_ = 0;
      auVar32 = maxps(auVar54,auVar41);
      auVar105._4_4_ = uVar7;
      auVar105._0_4_ = uVar5;
      auVar105._8_4_ = uVar8;
      auVar105._12_4_ = 0;
      auVar87 = minps(auVar105,auVar80);
      auVar47 = maxps(auVar48,auVar32);
      auVar32 = minps(auVar94,auVar87);
      fVar83 = auVar47._0_4_ - auVar32._0_4_;
      fVar84 = auVar47._4_4_ - auVar32._4_4_;
      fVar89 = auVar47._8_4_ - auVar32._8_4_;
      auVar106._0_4_ = fVar82 * fVar76 + fVar79 * fVar82 + fVar76 * fVar79;
      fVar74 = fVar75 * fVar70 + fVar74 * fVar75 + fVar70 * fVar74;
      fVar70 = fVar98 * fVar92 + fVar97 * fVar98 + fVar92 * fVar97;
      auVar106._4_4_ = fVar74;
      fVar75 = fVar89 * fVar83 + fVar84 * fVar89 + fVar83 * fVar84;
      auVar106._12_4_ = fVar75;
      auVar106._8_4_ = fVar70;
      auVar34._4_4_ = auVar106._0_4_;
      auVar34._0_4_ = fVar74;
      auVar34._8_4_ = fVar75;
      auVar34._12_4_ = fVar70;
      auVar47 = minps(auVar73,auVar85);
      auVar32 = minps(auVar34,auVar106);
      auVar87 = maxps(auVar77,auVar93);
      auVar88._0_8_ = auVar32._8_8_;
      auVar88._8_4_ = auVar32._0_4_;
      auVar88._12_4_ = auVar32._4_4_;
      auVar87 = maxps(auVar87,auVar81);
      auVar102 = minps(auVar88,auVar32);
      auVar32 = minps(auVar73,auVar71);
      auVar32 = minps(auVar32,auVar90);
      auVar107._4_4_ = -(uint)(fVar74 == auVar102._4_4_);
      auVar107._0_4_ = -(uint)(auVar106._0_4_ == auVar102._0_4_);
      auVar107._8_4_ = -(uint)(fVar70 == auVar102._8_4_);
      auVar107._12_4_ = -(uint)(fVar75 == auVar102._12_4_);
      fVar70 = auVar87._0_4_ - auVar32._0_4_;
      fVar74 = auVar87._4_4_ - auVar32._4_4_;
      fVar75 = auVar87._8_4_ - auVar32._8_4_;
      uVar29 = movmskps((int)in_R9,auVar107);
      uVar28 = CONCAT44((int)(in_R9 >> 0x20),uVar29);
      auVar35._4_4_ = uVar12;
      auVar35._0_4_ = uVar10;
      auVar35._8_4_ = uVar14;
      auVar35._12_4_ = 0;
      auVar32 = maxps(auVar35,auVar77);
      in_R9 = 0;
      if (uVar28 != 0) {
        for (; (uVar28 >> in_R9 & 1) == 0; in_R9 = in_R9 + 1) {
        }
      }
      auVar55._4_4_ = uVar6;
      auVar55._0_4_ = uVar19;
      auVar55._8_4_ = uVar9;
      auVar55._12_4_ = 0;
      auVar87 = minps(auVar55,auVar73);
      auVar32 = maxps(auVar32,auVar81);
      auVar87 = minps(auVar87,auVar90);
      fVar76 = auVar32._0_4_ - auVar87._0_4_;
      fVar79 = auVar32._4_4_ - auVar87._4_4_;
      fVar82 = auVar32._8_4_ - auVar87._8_4_;
      auVar3._8_4_ = uVar16;
      auVar3._0_8_ = auVar60._0_8_;
      auVar3._12_4_ = 0;
      auVar32 = maxps(auVar77,auVar3);
      auVar87 = maxps(auVar48,auVar32);
      auVar32 = minps(auVar94,auVar47);
      fVar92 = auVar87._0_4_ - auVar32._0_4_;
      fVar97 = auVar87._4_4_ - auVar32._4_4_;
      fVar98 = auVar87._8_4_ - auVar32._8_4_;
      auVar56._4_4_ = uVar13;
      auVar56._0_4_ = uVar11;
      auVar56._8_4_ = uVar15;
      auVar56._12_4_ = 0;
      auVar32 = maxps(auVar56,auVar77);
      auVar108._4_4_ = uVar7;
      auVar108._0_4_ = uVar5;
      auVar108._8_4_ = uVar8;
      auVar108._12_4_ = 0;
      auVar87 = minps(auVar108,auVar73);
      auVar47 = maxps(auVar48,auVar32);
      auVar32 = minps(auVar94,auVar87);
      fVar83 = auVar47._0_4_ - auVar32._0_4_;
      fVar84 = auVar47._4_4_ - auVar32._4_4_;
      fVar89 = auVar47._8_4_ - auVar32._8_4_;
      auVar109._0_4_ = fVar75 * fVar70 + fVar74 * fVar75 + fVar70 * fVar74;
      fVar70 = fVar79 * fVar82 + fVar76 * fVar79 + fVar82 * fVar76;
      auVar109._4_4_ = fVar70;
      fVar82 = fVar98 * fVar92 + fVar97 * fVar98 + fVar92 * fVar97;
      auVar32 = maxps(auVar100,auVar53);
      fVar74 = fVar89 * fVar83 + fVar84 * fVar89 + fVar83 * fVar84;
      auVar47 = maxps(auVar32,auVar81);
      auVar109._12_4_ = fVar74;
      auVar109._8_4_ = fVar82;
      auVar36._4_4_ = auVar109._0_4_;
      auVar36._0_4_ = fVar70;
      auVar36._8_4_ = fVar74;
      auVar36._12_4_ = fVar82;
      auVar87 = minps(auVar78,auVar59);
      auVar32 = minps(auVar36,auVar109);
      auVar87 = minps(auVar87,auVar90);
      auVar95._0_8_ = auVar32._8_8_;
      auVar95._8_4_ = auVar32._0_4_;
      auVar95._12_4_ = auVar32._4_4_;
      auVar96 = minps(auVar95,auVar32);
      auVar32 = maxps(auVar53,auVar93);
      fVar75 = auVar47._0_4_ - auVar87._0_4_;
      fVar76 = auVar47._4_4_ - auVar87._4_4_;
      fVar79 = auVar47._8_4_ - auVar87._8_4_;
      auVar110._4_4_ = -(uint)(fVar70 == auVar96._4_4_);
      auVar110._0_4_ = -(uint)(auVar109._0_4_ == auVar96._0_4_);
      auVar110._8_4_ = -(uint)(fVar82 == auVar96._8_4_);
      auVar110._12_4_ = -(uint)(fVar74 == auVar96._12_4_);
      uVar19 = movmskps((int)uVar21,auVar110);
      uVar21 = CONCAT44((int)(uVar21 >> 0x20),uVar19);
      auVar47 = minps(auVar59,auVar71);
      auVar32 = maxps(auVar32,auVar81);
      lVar1 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
        }
      }
      auVar47 = minps(auVar47,auVar90);
      fVar74 = auVar32._0_4_ - auVar47._0_4_;
      fVar97 = auVar32._4_4_ - auVar47._4_4_;
      fVar98 = auVar32._8_4_ - auVar47._8_4_;
      auVar4._8_4_ = uVar16;
      auVar4._0_8_ = auVar60._0_8_;
      auVar4._12_4_ = 0;
      auVar32 = maxps(auVar53,auVar4);
      auVar87 = minps(auVar91,auVar59);
      auVar47 = minps(auVar59,auVar85);
      auVar100 = maxps(auVar99,auVar53);
      auVar60 = maxps(auVar48,auVar32);
      auVar87 = minps(auVar94,auVar87);
      auVar32 = minps(auVar94,auVar47);
      auVar47 = maxps(auVar48,auVar100);
      fVar84 = auVar60._0_4_ - auVar32._0_4_;
      fVar89 = auVar60._4_4_ - auVar32._4_4_;
      fVar92 = auVar60._8_4_ - auVar32._8_4_;
      fVar70 = auVar47._0_4_ - auVar87._0_4_;
      fVar82 = auVar47._4_4_ - auVar87._4_4_;
      fVar83 = auVar47._8_4_ - auVar87._8_4_;
      iVar20 = (int)uVar24;
      auVar65._0_4_ = fVar98 * fVar74 + fVar97 * fVar98 + fVar74 * fVar97;
      fVar74 = fVar76 * fVar79 + fVar75 * fVar76 + fVar79 * fVar75;
      fVar76 = fVar92 * fVar84 + fVar89 * fVar92 + fVar84 * fVar89;
      auVar65._4_4_ = fVar74;
      fVar75 = fVar82 * fVar83 + fVar70 * fVar82 + fVar83 * fVar70;
      auVar65._12_4_ = fVar75;
      auVar65._8_4_ = fVar76;
      afStack_58[2] = (float)(int)lVar1;
      afStack_58[0] = (float)in_R10;
      auVar49._4_4_ = auVar65._0_4_;
      auVar49._0_4_ = fVar74;
      auVar49._8_4_ = fVar75;
      auVar49._12_4_ = fVar76;
      afStack_58[1] = (float)(int)in_R9;
      auVar32 = minps(auVar49,auVar65);
      auVar37._0_8_ = auVar32._8_8_;
      auVar37._8_4_ = auVar32._0_4_;
      auVar37._12_4_ = auVar32._4_4_;
      auVar32 = minps(auVar37,auVar32);
      fVar70 = local_78[uVar24];
      auVar66._4_4_ = -(uint)(fVar74 == auVar32._4_4_);
      auVar66._0_4_ = -(uint)(auVar65._0_4_ == auVar32._0_4_);
      auVar66._8_4_ = -(uint)(fVar76 == auVar32._8_4_);
      auVar66._12_4_ = -(uint)(fVar75 == auVar32._12_4_);
      auStack_68._0_4_ = auVar64._0_4_ - fVar70;
      auStack_68._4_4_ = auVar102._0_4_ - fVar70;
      auStack_68._8_4_ = auVar96._0_4_ - fVar70;
      auStack_68._12_4_ = auVar32._0_4_ - fVar70;
      uVar19 = movmskps((int)in_R11,auVar66);
      uVar21 = CONCAT44((int)((ulong)in_R11 >> 0x20),uVar19);
      in_R11 = 0;
      if (uVar21 != 0) {
        for (; (uVar21 >> in_R11 & 1) == 0; in_R11 = in_R11 + 1) {
        }
      }
      auVar57._0_4_ =
           (-(uint)(__LC1 < iVar18 + (int)local_88[0]) ^ 0xffffffff) &
           (-(uint)(iVar20 == __LC2) ^ __LC5);
      auVar57._4_4_ =
           (-(uint)(_UNK_00100e64 < iVar18 + (int)local_88[1]) ^ 0xffffffff) &
           (-(uint)(iVar20 == _UNK_00100e74) ^ _UNK_00100e94);
      auVar57._8_4_ =
           (-(uint)(_UNK_00100e68 < iVar18 + (int)local_88[2]) ^ 0xffffffff) &
           (-(uint)(iVar20 == _UNK_00100e78) ^ _UNK_00100e98);
      auVar57._12_4_ =
           (-(uint)(_UNK_00100e6c < iVar18 + (int)local_88[3]) ^ 0xffffffff) &
           (-(uint)(iVar20 == _UNK_00100e7c) ^ _UNK_00100e9c);
      afStack_58[3] = (float)(int)in_R11;
      iVar20 = movmskps((int)lVar1,auVar57);
      if (iVar20 != 0) {
        auVar50._0_4_ = ~auVar57._0_4_ & __LC3;
        auVar50._4_4_ = ~auVar57._4_4_ & _UNK_00100e84;
        auVar50._8_4_ = ~auVar57._8_4_ & _UNK_00100e88;
        auVar50._12_4_ = ~auVar57._12_4_ & _UNK_00100e8c;
        auVar38._0_4_ = (uint)auStack_68._0_4_ & auVar57._0_4_;
        auVar38._4_4_ = (uint)auStack_68._4_4_ & auVar57._4_4_;
        auVar38._8_4_ = (uint)auStack_68._8_4_ & auVar57._8_4_;
        auVar38._12_4_ = (uint)auStack_68._12_4_ & auVar57._12_4_;
        auVar38 = auVar38 | auVar50;
        auVar51._4_4_ = auVar38._0_4_;
        auVar51._0_4_ = auVar38._4_4_;
        auVar51._8_4_ = auVar38._12_4_;
        auVar51._12_4_ = auVar38._8_4_;
        auVar32 = minps(auVar51,auVar38);
        auVar61._0_8_ = auVar32._8_8_;
        auVar61._8_4_ = auVar32._0_4_;
        auVar61._12_4_ = auVar32._4_4_;
        auVar32 = minps(auVar61,auVar32);
        auVar39._0_4_ = -(uint)(auVar38._0_4_ == auVar32._0_4_) & auVar57._0_4_;
        auVar39._4_4_ = -(uint)(auVar38._4_4_ == auVar32._4_4_) & auVar57._4_4_;
        auVar39._8_4_ = -(uint)(auVar38._8_4_ == auVar32._8_4_) & auVar57._8_4_;
        auVar39._12_4_ = -(uint)(auVar38._12_4_ == auVar32._12_4_) & auVar57._12_4_;
        iVar27 = movmskps((int)in_R9,auVar39);
        in_R9 = CONCAT44((int)(in_R9 >> 0x20),iVar27);
        uVar21 = CONCAT44((int)((ulong)lVar1 >> 0x20),iVar20);
        if (iVar27 != 0) {
          uVar21 = in_R9;
        }
        uVar28 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> uVar28 & 1) == 0; uVar28 = uVar28 + 1) {
          }
        }
        if ((uVar28 != uVar24) && (afStack_58[uVar28 - 4] < fVar17)) {
          lVar26 = (long)(int)afStack_58[uVar28];
          uVar22 = uVar24;
          uVar25 = uVar28;
          fVar17 = afStack_58[uVar28 - 4];
        }
      }
    }
    uVar24 = uVar24 + 1;
  } while (uVar24 != 4);
  if (uVar25 != 0xffffffffffffffff) {
    plVar23 = (long *)param_1[uVar22];
    lVar1 = param_1[uVar25];
    param_1[uVar25] = plVar23[lVar26];
    plVar23[lVar26] = lVar1;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x20);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x20) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x20);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x20) = uVar19;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x40);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x40) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x40);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x40) = uVar19;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x60);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x60) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x60);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x60) = uVar19;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x30);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x30) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x30);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x30) = uVar19;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x50);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x50) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x50);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x50) = uVar19;
    uVar19 = *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x70);
    *(undefined4 *)((long)param_1 + uVar25 * 4 + 0x70) =
         *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x70);
    *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x70) = uVar19;
    auVar40._4_4_ = (int)plVar23[0xc];
    auVar40._0_4_ = *(undefined4 *)((long)plVar23 + 100);
    auVar40._8_4_ = *(undefined4 *)((long)plVar23 + 100);
    auVar40._12_4_ = (int)plVar23[0xd];
    auVar41 = minps(auVar40,*(undefined1 (*) [16])(plVar23 + 0xc));
    auVar62._0_8_ = auVar41._8_8_;
    auVar62._8_4_ = auVar41._0_4_;
    auVar62._12_4_ = auVar41._4_4_;
    auVar63 = minps(auVar62,auVar41);
    auVar42._4_4_ = (int)plVar23[8];
    auVar42._0_4_ = *(undefined4 *)((long)plVar23 + 0x44);
    auVar42._8_4_ = *(undefined4 *)((long)plVar23 + 0x44);
    auVar42._12_4_ = (int)plVar23[9];
    auVar41 = minps(auVar42,*(undefined1 (*) [16])(plVar23 + 8));
    auVar68._0_8_ = auVar41._8_8_;
    auVar68._8_4_ = auVar41._0_4_;
    auVar68._12_4_ = auVar41._4_4_;
    auVar69 = minps(auVar68,auVar41);
    auVar43._4_4_ = (int)plVar23[4];
    auVar43._0_4_ = *(undefined4 *)((long)plVar23 + 0x24);
    auVar43._8_4_ = *(undefined4 *)((long)plVar23 + 0x24);
    auVar43._12_4_ = (int)plVar23[5];
    auVar41 = minps(auVar43,*(undefined1 (*) [16])(plVar23 + 4));
    auVar72._0_8_ = auVar41._8_8_;
    auVar72._8_4_ = auVar41._0_4_;
    auVar72._12_4_ = auVar41._4_4_;
    auVar73 = minps(auVar72,auVar41);
    auVar44._4_4_ = (int)plVar23[0xe];
    auVar44._0_4_ = *(undefined4 *)((long)plVar23 + 0x74);
    auVar44._8_4_ = *(undefined4 *)((long)plVar23 + 0x74);
    auVar44._12_4_ = (int)plVar23[0xf];
    auVar41 = maxps(auVar44,*(undefined1 (*) [16])(plVar23 + 0xe));
    auVar52._0_8_ = auVar41._8_8_;
    auVar52._8_4_ = auVar41._0_4_;
    auVar52._12_4_ = auVar41._4_4_;
    auVar53 = maxps(auVar52,auVar41);
    auVar45._4_4_ = (int)plVar23[10];
    auVar45._0_4_ = *(undefined4 *)((long)plVar23 + 0x54);
    auVar45._8_4_ = *(undefined4 *)((long)plVar23 + 0x54);
    auVar45._12_4_ = (int)plVar23[0xb];
    auVar41 = maxps(auVar45,*(undefined1 (*) [16])(plVar23 + 10));
    auVar58._0_8_ = auVar41._8_8_;
    auVar58._8_4_ = auVar41._0_4_;
    auVar58._12_4_ = auVar41._4_4_;
    auVar59 = maxps(auVar58,auVar41);
    auVar46._4_4_ = (int)plVar23[6];
    auVar46._0_4_ = *(undefined4 *)((long)plVar23 + 0x34);
    auVar46._8_4_ = *(undefined4 *)((long)plVar23 + 0x34);
    auVar46._12_4_ = (int)plVar23[7];
    auVar41 = maxps(auVar46,*(undefined1 (*) [16])(plVar23 + 6));
    *(int *)((long)param_1 + uVar22 * 4 + 0x20) = auVar73._0_4_;
    *(int *)((long)param_1 + uVar22 * 4 + 0x40) = auVar69._0_4_;
    *(int *)((long)param_1 + uVar22 * 4 + 0x60) = auVar63._0_4_;
    auVar67._0_8_ = auVar41._8_8_;
    auVar67._8_4_ = auVar41._0_4_;
    auVar67._12_4_ = auVar41._4_4_;
    *(int *)((long)param_1 + uVar22 * 4 + 0x50) = auVar59._0_4_;
    auVar41 = maxps(auVar67,auVar41);
    *(int *)((long)param_1 + uVar22 * 4 + 0x70) = auVar53._0_4_;
    *(int *)((long)param_1 + uVar22 * 4 + 0x30) = auVar41._0_4_;
    if (param_1[3] == 8) {
      if (param_1[2] == 8) {
        if ((param_1[1] != 8) && (*param_1 == 8)) {
          lVar26 = 1;
LAB_00100d61:
          *param_1 = param_1[lVar26];
          param_1[lVar26] = 8;
          lVar1 = param_1[4];
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x20);
          *(int *)((long)param_1 + lVar26 * 4 + 0x20) = (int)lVar1;
          lVar1 = param_1[8];
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x40);
          *(int *)((long)param_1 + lVar26 * 4 + 0x40) = (int)lVar1;
          lVar1 = param_1[0xc];
          *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x60);
          *(int *)((long)param_1 + lVar26 * 4 + 0x60) = (int)lVar1;
          lVar1 = param_1[6];
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x30);
          *(int *)((long)param_1 + lVar26 * 4 + 0x30) = (int)lVar1;
          lVar1 = param_1[10];
          *(undefined4 *)(param_1 + 10) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x50);
          *(int *)((long)param_1 + lVar26 * 4 + 0x50) = (int)lVar1;
          lVar1 = param_1[0xe];
          *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x70);
          *(int *)((long)param_1 + lVar26 * 4 + 0x70) = (int)lVar1;
          if (((lVar26 != 1) && ((param_1 + lVar26)[-1] != 8)) && (lVar26 == 3)) goto LAB_00100bf0;
        }
      }
      else {
        if (*param_1 == 8) {
          lVar26 = 2;
          goto LAB_00100d61;
        }
LAB_00100bf0:
        if (param_1[1] == 8) {
          lVar26 = 2;
          goto LAB_00100c00;
        }
      }
    }
    else {
      if (*param_1 == 8) {
        lVar26 = 3;
        goto LAB_00100d61;
      }
      if (param_1[1] != 8) {
        if (param_1[2] == 8) {
          lVar1 = param_1[5];
          lVar26 = param_1[3];
          param_1[3] = 8;
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x2c);
          *(int *)((long)param_1 + 0x2c) = (int)lVar1;
          lVar1 = param_1[9];
          *(undefined4 *)(param_1 + 9) = *(undefined4 *)((long)param_1 + 0x4c);
          *(int *)((long)param_1 + 0x4c) = (int)lVar1;
          lVar1 = param_1[0xd];
          *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)((long)param_1 + 0x6c);
          *(int *)((long)param_1 + 0x6c) = (int)lVar1;
          lVar1 = param_1[7];
          *(undefined4 *)(param_1 + 7) = *(undefined4 *)((long)param_1 + 0x3c);
          *(int *)((long)param_1 + 0x3c) = (int)lVar1;
          lVar1 = param_1[0xb];
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_1 + 0x5c);
          *(int *)((long)param_1 + 0x5c) = (int)lVar1;
          lVar1 = param_1[0xf];
          param_1[2] = lVar26;
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((long)param_1 + 0x7c);
          *(int *)((long)param_1 + 0x7c) = (int)lVar1;
        }
        goto LAB_00100959;
      }
      lVar26 = 3;
LAB_00100c00:
      param_1[1] = param_1[lVar26];
      param_1[lVar26] = 8;
      uVar19 = *(undefined4 *)((long)param_1 + 0x24);
      *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x20);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x20) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + 0x44);
      *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x40);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x40) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + 100);
      *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x60);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x60) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + 0x34);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x30);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x30) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + 0x54);
      *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x50);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x50) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + 0x74);
      *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x70);
      *(undefined4 *)((long)param_1 + lVar26 * 4 + 0x70) = uVar19;
    }
LAB_00100959:
    if (plVar23[3] == 8) {
      if (plVar23[2] == 8) {
        if ((plVar23[1] != 8) && (*plVar23 == 8)) {
          lVar26 = 1;
LAB_00100ca0:
          *plVar23 = plVar23[lVar26];
          plVar23[lVar26] = 8;
          lVar1 = plVar23[4];
          *(undefined4 *)(plVar23 + 4) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x20);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x20) = (int)lVar1;
          lVar1 = plVar23[8];
          *(undefined4 *)(plVar23 + 8) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x40);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x40) = (int)lVar1;
          lVar1 = plVar23[0xc];
          *(undefined4 *)(plVar23 + 0xc) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x60);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x60) = (int)lVar1;
          lVar1 = plVar23[6];
          *(undefined4 *)(plVar23 + 6) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x30);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x30) = (int)lVar1;
          lVar1 = plVar23[10];
          *(undefined4 *)(plVar23 + 10) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x50);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x50) = (int)lVar1;
          lVar1 = plVar23[0xe];
          *(undefined4 *)(plVar23 + 0xe) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x70);
          *(int *)((long)plVar23 + lVar26 * 4 + 0x70) = (int)lVar1;
          if (((lVar26 != 1) && ((plVar23 + lVar26)[-1] != 8)) && (lVar26 == 3)) goto LAB_00100b40;
        }
      }
      else {
        if (*plVar23 == 8) {
          lVar26 = 2;
          goto LAB_00100ca0;
        }
LAB_00100b40:
        lVar26 = 2;
        if (plVar23[1] == 8) goto LAB_00100b50;
      }
    }
    else {
      if (*plVar23 == 8) {
        lVar26 = 3;
        goto LAB_00100ca0;
      }
      if (plVar23[1] != 8) {
        if (plVar23[2] == 8) {
          lVar1 = plVar23[5];
          lVar26 = plVar23[3];
          plVar23[3] = 8;
          *(undefined4 *)(plVar23 + 5) = *(undefined4 *)((long)plVar23 + 0x2c);
          *(int *)((long)plVar23 + 0x2c) = (int)lVar1;
          lVar1 = plVar23[9];
          *(undefined4 *)(plVar23 + 9) = *(undefined4 *)((long)plVar23 + 0x4c);
          *(int *)((long)plVar23 + 0x4c) = (int)lVar1;
          lVar1 = plVar23[0xd];
          *(undefined4 *)(plVar23 + 0xd) = *(undefined4 *)((long)plVar23 + 0x6c);
          *(int *)((long)plVar23 + 0x6c) = (int)lVar1;
          lVar1 = plVar23[7];
          *(undefined4 *)(plVar23 + 7) = *(undefined4 *)((long)plVar23 + 0x3c);
          *(int *)((long)plVar23 + 0x3c) = (int)lVar1;
          lVar1 = plVar23[0xb];
          *(undefined4 *)(plVar23 + 0xb) = *(undefined4 *)((long)plVar23 + 0x5c);
          *(int *)((long)plVar23 + 0x5c) = (int)lVar1;
          lVar1 = plVar23[0xf];
          plVar23[2] = lVar26;
          *(undefined4 *)(plVar23 + 0xf) = *(undefined4 *)((long)plVar23 + 0x7c);
          *(int *)((long)plVar23 + 0x7c) = (int)lVar1;
        }
        goto LAB_0010097a;
      }
      lVar26 = 3;
LAB_00100b50:
      plVar23[1] = plVar23[lVar26];
      plVar23[lVar26] = 8;
      uVar19 = *(undefined4 *)((long)plVar23 + 0x24);
      *(undefined4 *)((long)plVar23 + 0x24) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x20);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x20) = uVar19;
      uVar19 = *(undefined4 *)((long)plVar23 + 0x44);
      *(undefined4 *)((long)plVar23 + 0x44) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x40);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x40) = uVar19;
      uVar19 = *(undefined4 *)((long)plVar23 + 100);
      *(undefined4 *)((long)plVar23 + 100) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x60);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x60) = uVar19;
      uVar19 = *(undefined4 *)((long)plVar23 + 0x34);
      *(undefined4 *)((long)plVar23 + 0x34) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x30);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x30) = uVar19;
      uVar19 = *(undefined4 *)((long)plVar23 + 0x54);
      *(undefined4 *)((long)plVar23 + 0x54) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x50);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x50) = uVar19;
      uVar19 = *(undefined4 *)((long)plVar23 + 0x74);
      *(undefined4 *)((long)plVar23 + 0x74) = *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x70);
      *(undefined4 *)((long)plVar23 + lVar26 * 4 + 0x70) = uVar19;
    }
LAB_0010097a:
    local_88[uVar25] = (float)((int)local_88[uVar25] + 1);
  }
  if ((int)local_88[3] < (int)local_88[2]) {
    local_88[3] = local_88[2];
  }
  if ((int)local_88[3] < (int)local_88[1]) {
    local_88[3] = local_88[1];
  }
  if ((int)local_88[3] < (int)local_88[0]) {
    local_88[3] = local_88[0];
  }
  lVar26 = (long)((int)local_88[3] + 1);
LAB_001009b2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar26;
}



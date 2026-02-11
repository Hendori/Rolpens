
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
  long lVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long *plVar29;
  int iVar30;
  ulong in_R9;
  ulong uVar31;
  undefined4 uVar32;
  long in_R10;
  long in_R11;
  float *pfVar33;
  float *pfVar34;
  long in_FS_OFFSET;
  bool bVar35;
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
  float fVar74;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar101;
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
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
  float local_88 [4];
  float local_78 [4];
  undefined1 auStack_68 [16];
  float afStack_58 [6];
  long local_40;
  ulong uVar21;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar28 = 0;
  if ((-1 < (long)param_1) && (uVar26 = (ulong)((uint)param_1 & 8), ((ulong)param_1 & 8) == 0)) {
    plVar25 = param_1;
    pfVar33 = local_88;
    do {
      lVar28 = *plVar25;
      pfVar34 = pfVar33 + 1;
      plVar25 = plVar25 + 1;
      fVar17 = (float)rotate(lVar28,param_2 + 1);
      *pfVar33 = fVar17;
      pfVar33 = pfVar34;
    } while (pfVar34 != local_78);
    iVar18 = (int)param_2 + 1;
    lVar28 = -1;
    uVar23 = 0xffffffffffffffff;
    uVar27 = 0xffffffffffffffff;
    fVar17 = 0.0;
    auVar45 = *(undefined1 (*) [16])(param_1 + 10);
    fVar74 = *(float *)(param_1 + 0xe) - *(float *)(param_1 + 0xc);
    fVar78 = *(float *)((long)param_1 + 0x74) - *(float *)((long)param_1 + 100);
    fVar79 = *(float *)(param_1 + 0xf) - *(float *)(param_1 + 0xd);
    fVar80 = *(float *)((long)param_1 + 0x7c) - *(float *)((long)param_1 + 0x6c);
    fVar83 = auVar45._0_4_ - *(float *)(param_1 + 8);
    fVar86 = auVar45._4_4_ - *(float *)((long)param_1 + 0x44);
    fVar87 = auVar45._8_4_ - *(float *)(param_1 + 9);
    fVar88 = auVar45._12_4_ - *(float *)((long)param_1 + 0x4c);
    local_78[0] = (fVar74 + fVar83) * (*(float *)(param_1 + 6) - *(float *)(param_1 + 4)) +
                  fVar74 * fVar83;
    local_78[1] = (fVar78 + fVar86) *
                  (*(float *)((long)param_1 + 0x34) - *(float *)((long)param_1 + 0x24)) +
                  fVar78 * fVar86;
    local_78[2] = (fVar79 + fVar87) * (*(float *)(param_1 + 7) - *(float *)(param_1 + 5)) +
                  fVar79 * fVar87;
    local_78[3] = (fVar80 + fVar88) *
                  (*(float *)((long)param_1 + 0x3c) - *(float *)((long)param_1 + 0x2c)) +
                  fVar80 * fVar88;
    auVar73._4_4_ = *(float *)(param_1 + 8);
    auVar73._0_4_ = *(float *)(param_1 + 4);
    auVar73._8_4_ = *(float *)(param_1 + 0xc);
    auVar73._12_4_ = 0;
    auVar84._4_4_ = *(float *)((long)param_1 + 0x44);
    auVar84._0_4_ = *(float *)((long)param_1 + 0x24);
    auVar84._8_4_ = *(float *)((long)param_1 + 100);
    auVar84._12_4_ = 0;
    auVar63._4_4_ = *(float *)((long)param_1 + 0x4c);
    auVar63._0_4_ = *(float *)((long)param_1 + 0x2c);
    auVar63._8_4_ = *(float *)((long)param_1 + 0x6c);
    auVar63._12_4_ = 0;
    auVar77._4_4_ = *(float *)(param_1 + 9);
    auVar77._0_4_ = *(float *)(param_1 + 5);
    auVar77._8_4_ = *(float *)(param_1 + 0xd);
    auVar77._12_4_ = 0;
    auVar57._4_4_ = auVar45._12_4_;
    auVar57._0_4_ = *(float *)((long)param_1 + 0x3c);
    auVar57._8_4_ = *(float *)((long)param_1 + 0x7c);
    auVar57._12_4_ = 0;
    auVar81._4_4_ = auVar45._8_4_;
    auVar81._0_4_ = *(float *)(param_1 + 7);
    auVar81._8_4_ = *(float *)(param_1 + 0xf);
    auVar81._12_4_ = 0;
    auVar67._4_4_ = auVar45._0_4_;
    auVar67._0_4_ = *(float *)(param_1 + 6);
    auVar67._8_4_ = *(float *)(param_1 + 0xe);
    auVar67._12_4_ = 0;
    auVar45._4_4_ = auVar45._4_4_;
    auVar45._0_4_ = *(float *)((long)param_1 + 0x34);
    auVar45._8_4_ = *(float *)((long)param_1 + 0x74);
    auVar45._12_4_ = 0;
    do {
      uVar21 = param_1[uVar26];
      if ((-1 < (long)uVar21) && ((uVar21 & 8) == 0)) {
        uVar19 = *(undefined4 *)(uVar21 + 0x20);
        uVar5 = *(undefined4 *)(uVar21 + 0x28);
        uVar6 = *(undefined4 *)(uVar21 + 0x40);
        uVar7 = *(undefined4 *)(uVar21 + 0x48);
        uVar8 = *(undefined4 *)(uVar21 + 0x68);
        uVar9 = *(undefined4 *)(uVar21 + 0x60);
        uVar10 = *(undefined4 *)(uVar21 + 0x30);
        uVar11 = *(undefined4 *)(uVar21 + 0x38);
        auVar95._0_8_ = CONCAT44(uVar7,uVar5);
        auVar95._8_4_ = uVar8;
        auVar95._12_4_ = 0;
        auVar89._4_4_ = *(undefined4 *)(uVar21 + 0x4c);
        auVar89._0_4_ = *(undefined4 *)(uVar21 + 0x2c);
        auVar89._8_4_ = *(undefined4 *)(uVar21 + 0x6c);
        auVar89._12_4_ = 0;
        uVar12 = *(undefined4 *)(uVar21 + 0x50);
        uVar13 = *(undefined4 *)(uVar21 + 0x58);
        uVar14 = *(undefined4 *)(uVar21 + 0x70);
        auVar82._0_8_ = CONCAT44(uVar6,uVar19);
        auVar82._8_4_ = uVar9;
        auVar82._12_4_ = 0;
        auVar75._4_4_ = *(undefined4 *)(uVar21 + 0x44);
        auVar75._0_4_ = *(undefined4 *)(uVar21 + 0x24);
        auVar75._8_4_ = *(undefined4 *)(uVar21 + 100);
        auVar75._12_4_ = 0;
        uVar15 = *(undefined4 *)(uVar21 + 0x78);
        uVar16 = *(undefined4 *)(uVar21 + 0x7c);
        auVar104._0_8_ = CONCAT44(uVar12,uVar10);
        auVar104._8_4_ = uVar14;
        auVar104._12_4_ = 0;
        auVar97._4_4_ = *(undefined4 *)(uVar21 + 0x54);
        auVar97._0_4_ = *(undefined4 *)(uVar21 + 0x34);
        auVar97._8_4_ = *(undefined4 *)(uVar21 + 0x74);
        auVar97._12_4_ = 0;
        auVar103._0_8_ = CONCAT44(uVar13,uVar11);
        auVar103._8_4_ = uVar15;
        auVar103._12_4_ = 0;
        auVar64._0_8_ = CONCAT44(*(undefined4 *)(uVar21 + 0x5c),*(undefined4 *)(uVar21 + 0x3c));
        auVar64._8_4_ = uVar16;
        auVar64._12_4_ = 0;
        auVar85._8_4_ = uVar15;
        auVar85._0_8_ = auVar103._0_8_;
        auVar85._12_4_ = 0;
        auVar94._8_4_ = uVar8;
        auVar94._0_8_ = auVar95._0_8_;
        auVar94._12_4_ = 0;
        auVar85 = maxps(auVar85,auVar64);
        auVar94 = minps(auVar94,auVar89);
        auVar68 = maxps(auVar67,auVar97);
        auVar36 = minps(auVar73,auVar75);
        auVar52._8_4_ = uVar9;
        auVar52._0_8_ = auVar82._0_8_;
        auVar52._12_4_ = 0;
        auVar51 = minps(auVar52,auVar73);
        auVar68 = maxps(auVar68,auVar85);
        auVar36 = minps(auVar36,auVar94);
        auVar52 = minps(auVar51,auVar94);
        fVar80 = auVar68._0_4_ - auVar36._0_4_;
        fVar83 = auVar68._4_4_ - auVar36._4_4_;
        fVar86 = auVar68._8_4_ - auVar36._8_4_;
        auVar51._8_4_ = uVar14;
        auVar51._0_8_ = auVar104._0_8_;
        auVar51._12_4_ = 0;
        auVar36 = maxps(auVar51,auVar67);
        auVar36 = maxps(auVar36,auVar85);
        fVar74 = auVar36._0_4_ - auVar52._0_4_;
        fVar78 = auVar36._4_4_ - auVar52._4_4_;
        fVar79 = auVar36._8_4_ - auVar52._8_4_;
        auVar105._4_4_ = uVar7;
        auVar105._0_4_ = uVar5;
        auVar105._8_4_ = uVar8;
        auVar105._12_4_ = 0;
        auVar51 = minps(auVar73,auVar89);
        auVar106 = minps(auVar105,auVar73);
        auVar68._4_4_ = uVar12;
        auVar68._0_4_ = uVar10;
        auVar68._8_4_ = uVar14;
        auVar68._12_4_ = 0;
        auVar36._8_4_ = uVar16;
        auVar36._0_8_ = auVar64._0_8_;
        auVar36._12_4_ = 0;
        auVar36 = maxps(auVar67,auVar36);
        auVar52 = maxps(auVar68,auVar97);
        auVar98._4_4_ = uVar6;
        auVar98._0_4_ = uVar19;
        auVar98._8_4_ = uVar9;
        auVar98._12_4_ = 0;
        auVar98 = minps(auVar98,auVar75);
        auVar68 = maxps(auVar52,auVar36);
        auVar36 = minps(auVar98,auVar51);
        fVar96 = auVar68._0_4_ - auVar36._0_4_;
        fVar101 = auVar68._4_4_ - auVar36._4_4_;
        fVar102 = auVar68._8_4_ - auVar36._8_4_;
        auVar91._4_4_ = uVar13;
        auVar91._0_4_ = uVar11;
        auVar91._8_4_ = uVar15;
        auVar91._12_4_ = 0;
        auVar36 = maxps(auVar91,auVar67);
        auVar51 = maxps(auVar52,auVar36);
        auVar36 = minps(auVar98,auVar106);
        fVar87 = auVar51._0_4_ - auVar36._0_4_;
        fVar88 = auVar51._4_4_ - auVar36._4_4_;
        fVar93 = auVar51._8_4_ - auVar36._8_4_;
        auVar107._0_4_ = fVar86 * fVar80 + fVar83 * fVar86 + fVar80 * fVar83;
        auVar106._0_4_ = fVar79 * fVar74 + fVar78 * fVar79 + fVar74 * fVar78;
        fVar74 = fVar102 * fVar96 + fVar101 * fVar102 + fVar96 * fVar101;
        auVar107._4_4_ = auVar106._0_4_;
        auVar90._4_4_ = uVar6;
        auVar90._0_4_ = uVar19;
        auVar90._8_4_ = uVar9;
        auVar90._12_4_ = 0;
        fVar78 = fVar93 * fVar87 + fVar88 * fVar93 + fVar87 * fVar88;
        auVar107._12_4_ = fVar78;
        auVar107._8_4_ = fVar74;
        auVar106._4_4_ = auVar107._0_4_;
        auVar106._8_4_ = fVar78;
        auVar106._12_4_ = fVar74;
        auVar36 = minps(auVar84,auVar75);
        auVar51 = minps(auVar106,auVar107);
        auVar91 = minps(auVar90,auVar84);
        auVar36 = minps(auVar36,auVar94);
        auVar100._8_4_ = auVar51._0_4_;
        auVar100._0_8_ = auVar51._8_8_;
        auVar100._12_4_ = auVar51._4_4_;
        auVar68 = minps(auVar100,auVar51);
        auVar51 = minps(auVar91,auVar94);
        auVar108._4_4_ = -(uint)(auVar106._0_4_ == auVar68._4_4_);
        auVar108._0_4_ = -(uint)(auVar107._0_4_ == auVar68._0_4_);
        auVar108._8_4_ = -(uint)(fVar74 == auVar68._8_4_);
        auVar108._12_4_ = -(uint)(fVar78 == auVar68._12_4_);
        auVar91 = maxps(auVar45,auVar97);
        auVar91 = maxps(auVar91,auVar85);
        uVar32 = movmskps((int)in_R10,auVar108);
        uVar31 = CONCAT44((int)((ulong)in_R10 >> 0x20),uVar32);
        in_R10 = 0;
        if (uVar31 != 0) {
          for (; (uVar31 >> in_R10 & 1) == 0; in_R10 = in_R10 + 1) {
          }
        }
        fVar80 = auVar91._0_4_ - auVar36._0_4_;
        fVar83 = auVar91._4_4_ - auVar36._4_4_;
        fVar86 = auVar91._8_4_ - auVar36._8_4_;
        auVar37._4_4_ = uVar12;
        auVar37._0_4_ = uVar10;
        auVar37._8_4_ = uVar14;
        auVar37._12_4_ = 0;
        auVar36 = maxps(auVar37,auVar45);
        auVar36 = maxps(auVar36,auVar85);
        fVar74 = auVar36._0_4_ - auVar51._0_4_;
        fVar78 = auVar36._4_4_ - auVar51._4_4_;
        fVar79 = auVar36._8_4_ - auVar51._8_4_;
        auVar36 = minps(auVar84,auVar89);
        auVar2._8_4_ = uVar16;
        auVar2._0_8_ = auVar64._0_8_;
        auVar2._12_4_ = 0;
        auVar51 = maxps(auVar45,auVar2);
        auVar51 = maxps(auVar52,auVar51);
        auVar36 = minps(auVar98,auVar36);
        fVar96 = auVar51._0_4_ - auVar36._0_4_;
        fVar101 = auVar51._4_4_ - auVar36._4_4_;
        fVar102 = auVar51._8_4_ - auVar36._8_4_;
        auVar58._4_4_ = uVar13;
        auVar58._0_4_ = uVar11;
        auVar58._8_4_ = uVar15;
        auVar58._12_4_ = 0;
        auVar36 = maxps(auVar58,auVar45);
        auVar109._4_4_ = uVar7;
        auVar109._0_4_ = uVar5;
        auVar109._8_4_ = uVar8;
        auVar109._12_4_ = 0;
        auVar91 = minps(auVar109,auVar84);
        auVar51 = maxps(auVar52,auVar36);
        auVar36 = minps(auVar98,auVar91);
        fVar87 = auVar51._0_4_ - auVar36._0_4_;
        fVar88 = auVar51._4_4_ - auVar36._4_4_;
        fVar93 = auVar51._8_4_ - auVar36._8_4_;
        auVar110._0_4_ = fVar86 * fVar80 + fVar83 * fVar86 + fVar80 * fVar83;
        fVar78 = fVar79 * fVar74 + fVar78 * fVar79 + fVar74 * fVar78;
        fVar74 = fVar102 * fVar96 + fVar101 * fVar102 + fVar96 * fVar101;
        auVar110._4_4_ = fVar78;
        fVar79 = fVar93 * fVar87 + fVar88 * fVar93 + fVar87 * fVar88;
        auVar110._12_4_ = fVar79;
        auVar110._8_4_ = fVar74;
        auVar38._4_4_ = auVar110._0_4_;
        auVar38._0_4_ = fVar78;
        auVar38._8_4_ = fVar79;
        auVar38._12_4_ = fVar74;
        auVar51 = minps(auVar77,auVar89);
        auVar36 = minps(auVar38,auVar110);
        auVar91 = maxps(auVar81,auVar97);
        auVar92._0_8_ = auVar36._8_8_;
        auVar92._8_4_ = auVar36._0_4_;
        auVar92._12_4_ = auVar36._4_4_;
        auVar91 = maxps(auVar91,auVar85);
        auVar106 = minps(auVar92,auVar36);
        auVar36 = minps(auVar77,auVar75);
        auVar36 = minps(auVar36,auVar94);
        auVar111._4_4_ = -(uint)(fVar78 == auVar106._4_4_);
        auVar111._0_4_ = -(uint)(auVar110._0_4_ == auVar106._0_4_);
        auVar111._8_4_ = -(uint)(fVar74 == auVar106._8_4_);
        auVar111._12_4_ = -(uint)(fVar79 == auVar106._12_4_);
        fVar74 = auVar91._0_4_ - auVar36._0_4_;
        fVar78 = auVar91._4_4_ - auVar36._4_4_;
        fVar79 = auVar91._8_4_ - auVar36._8_4_;
        uVar32 = movmskps((int)in_R9,auVar111);
        uVar31 = CONCAT44((int)(in_R9 >> 0x20),uVar32);
        auVar39._4_4_ = uVar12;
        auVar39._0_4_ = uVar10;
        auVar39._8_4_ = uVar14;
        auVar39._12_4_ = 0;
        auVar36 = maxps(auVar39,auVar81);
        in_R9 = 0;
        if (uVar31 != 0) {
          for (; (uVar31 >> in_R9 & 1) == 0; in_R9 = in_R9 + 1) {
          }
        }
        auVar59._4_4_ = uVar6;
        auVar59._0_4_ = uVar19;
        auVar59._8_4_ = uVar9;
        auVar59._12_4_ = 0;
        auVar91 = minps(auVar59,auVar77);
        auVar36 = maxps(auVar36,auVar85);
        auVar91 = minps(auVar91,auVar94);
        fVar80 = auVar36._0_4_ - auVar91._0_4_;
        fVar83 = auVar36._4_4_ - auVar91._4_4_;
        fVar86 = auVar36._8_4_ - auVar91._8_4_;
        auVar3._8_4_ = uVar16;
        auVar3._0_8_ = auVar64._0_8_;
        auVar3._12_4_ = 0;
        auVar36 = maxps(auVar81,auVar3);
        auVar91 = maxps(auVar52,auVar36);
        auVar36 = minps(auVar98,auVar51);
        fVar96 = auVar91._0_4_ - auVar36._0_4_;
        fVar101 = auVar91._4_4_ - auVar36._4_4_;
        fVar102 = auVar91._8_4_ - auVar36._8_4_;
        auVar60._4_4_ = uVar13;
        auVar60._0_4_ = uVar11;
        auVar60._8_4_ = uVar15;
        auVar60._12_4_ = 0;
        auVar36 = maxps(auVar60,auVar81);
        auVar112._4_4_ = uVar7;
        auVar112._0_4_ = uVar5;
        auVar112._8_4_ = uVar8;
        auVar112._12_4_ = 0;
        auVar91 = minps(auVar112,auVar77);
        auVar51 = maxps(auVar52,auVar36);
        auVar36 = minps(auVar98,auVar91);
        fVar87 = auVar51._0_4_ - auVar36._0_4_;
        fVar88 = auVar51._4_4_ - auVar36._4_4_;
        fVar93 = auVar51._8_4_ - auVar36._8_4_;
        auVar113._0_4_ = fVar79 * fVar74 + fVar78 * fVar79 + fVar74 * fVar78;
        fVar74 = fVar83 * fVar86 + fVar80 * fVar83 + fVar86 * fVar80;
        auVar113._4_4_ = fVar74;
        fVar86 = fVar102 * fVar96 + fVar101 * fVar102 + fVar96 * fVar101;
        auVar36 = maxps(auVar104,auVar57);
        fVar78 = fVar93 * fVar87 + fVar88 * fVar93 + fVar87 * fVar88;
        auVar51 = maxps(auVar36,auVar85);
        auVar113._12_4_ = fVar78;
        auVar113._8_4_ = fVar86;
        auVar40._4_4_ = auVar113._0_4_;
        auVar40._0_4_ = fVar74;
        auVar40._8_4_ = fVar78;
        auVar40._12_4_ = fVar86;
        auVar91 = minps(auVar82,auVar63);
        auVar36 = minps(auVar40,auVar113);
        auVar91 = minps(auVar91,auVar94);
        auVar99._0_8_ = auVar36._8_8_;
        auVar99._8_4_ = auVar36._0_4_;
        auVar99._12_4_ = auVar36._4_4_;
        auVar100 = minps(auVar99,auVar36);
        auVar36 = maxps(auVar57,auVar97);
        fVar79 = auVar51._0_4_ - auVar91._0_4_;
        fVar80 = auVar51._4_4_ - auVar91._4_4_;
        fVar83 = auVar51._8_4_ - auVar91._8_4_;
        auVar114._4_4_ = -(uint)(fVar74 == auVar100._4_4_);
        auVar114._0_4_ = -(uint)(auVar113._0_4_ == auVar100._0_4_);
        auVar114._8_4_ = -(uint)(fVar86 == auVar100._8_4_);
        auVar114._12_4_ = -(uint)(fVar78 == auVar100._12_4_);
        uVar19 = movmskps((int)uVar21,auVar114);
        uVar21 = CONCAT44((int)(uVar21 >> 0x20),uVar19);
        auVar51 = minps(auVar63,auVar75);
        auVar36 = maxps(auVar36,auVar85);
        lVar1 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> lVar1 & 1) == 0; lVar1 = lVar1 + 1) {
          }
        }
        auVar51 = minps(auVar51,auVar94);
        fVar78 = auVar36._0_4_ - auVar51._0_4_;
        fVar101 = auVar36._4_4_ - auVar51._4_4_;
        fVar102 = auVar36._8_4_ - auVar51._8_4_;
        auVar4._8_4_ = uVar16;
        auVar4._0_8_ = auVar64._0_8_;
        auVar4._12_4_ = 0;
        auVar36 = maxps(auVar57,auVar4);
        auVar91 = minps(auVar95,auVar63);
        auVar51 = minps(auVar63,auVar89);
        auVar104 = maxps(auVar103,auVar57);
        auVar64 = maxps(auVar52,auVar36);
        auVar91 = minps(auVar98,auVar91);
        auVar36 = minps(auVar98,auVar51);
        auVar51 = maxps(auVar52,auVar104);
        fVar88 = auVar64._0_4_ - auVar36._0_4_;
        fVar93 = auVar64._4_4_ - auVar36._4_4_;
        fVar96 = auVar64._8_4_ - auVar36._8_4_;
        fVar74 = auVar51._0_4_ - auVar91._0_4_;
        fVar86 = auVar51._4_4_ - auVar91._4_4_;
        fVar87 = auVar51._8_4_ - auVar91._8_4_;
        iVar20 = (int)uVar26;
        auVar69._0_4_ = fVar102 * fVar78 + fVar101 * fVar102 + fVar78 * fVar101;
        fVar78 = fVar80 * fVar83 + fVar79 * fVar80 + fVar83 * fVar79;
        fVar80 = fVar96 * fVar88 + fVar93 * fVar96 + fVar88 * fVar93;
        auVar69._4_4_ = fVar78;
        fVar79 = fVar86 * fVar87 + fVar74 * fVar86 + fVar87 * fVar74;
        auVar69._12_4_ = fVar79;
        auVar69._8_4_ = fVar80;
        afStack_58[2] = (float)(int)lVar1;
        afStack_58[0] = (float)in_R10;
        auVar53._4_4_ = auVar69._0_4_;
        auVar53._0_4_ = fVar78;
        auVar53._8_4_ = fVar79;
        auVar53._12_4_ = fVar80;
        afStack_58[1] = (float)(int)in_R9;
        auVar36 = minps(auVar53,auVar69);
        auVar41._0_8_ = auVar36._8_8_;
        auVar41._8_4_ = auVar36._0_4_;
        auVar41._12_4_ = auVar36._4_4_;
        auVar36 = minps(auVar41,auVar36);
        fVar74 = local_78[uVar26];
        auVar70._4_4_ = -(uint)(fVar78 == auVar36._4_4_);
        auVar70._0_4_ = -(uint)(auVar69._0_4_ == auVar36._0_4_);
        auVar70._8_4_ = -(uint)(fVar80 == auVar36._8_4_);
        auVar70._12_4_ = -(uint)(fVar79 == auVar36._12_4_);
        auStack_68._0_4_ = auVar68._0_4_ - fVar74;
        auStack_68._4_4_ = auVar106._0_4_ - fVar74;
        auStack_68._8_4_ = auVar100._0_4_ - fVar74;
        auStack_68._12_4_ = auVar36._0_4_ - fVar74;
        uVar19 = movmskps((int)in_R11,auVar70);
        uVar21 = CONCAT44((int)((ulong)in_R11 >> 0x20),uVar19);
        in_R11 = 0;
        if (uVar21 != 0) {
          for (; (uVar21 >> in_R11 & 1) == 0; in_R11 = in_R11 + 1) {
          }
        }
        auVar61._0_4_ =
             (-(uint)(__LC1 < iVar18 + (int)local_88[0]) ^ 0xffffffff) &
             (-(uint)(iVar20 == __LC2) ^ __LC5);
        auVar61._4_4_ =
             (-(uint)(_UNK_00100bc4 < iVar18 + (int)local_88[1]) ^ 0xffffffff) &
             (-(uint)(iVar20 == _UNK_00100bd4) ^ _UNK_00100bf4);
        auVar61._8_4_ =
             (-(uint)(_UNK_00100bc8 < iVar18 + (int)local_88[2]) ^ 0xffffffff) &
             (-(uint)(iVar20 == _UNK_00100bd8) ^ _UNK_00100bf8);
        auVar61._12_4_ =
             (-(uint)(_UNK_00100bcc < iVar18 + (int)local_88[3]) ^ 0xffffffff) &
             (-(uint)(iVar20 == _UNK_00100bdc) ^ _UNK_00100bfc);
        afStack_58[3] = (float)(int)in_R11;
        iVar20 = movmskps((int)lVar1,auVar61);
        if (iVar20 != 0) {
          auVar54._0_4_ = ~auVar61._0_4_ & __LC3;
          auVar54._4_4_ = ~auVar61._4_4_ & _UNK_00100be4;
          auVar54._8_4_ = ~auVar61._8_4_ & _UNK_00100be8;
          auVar54._12_4_ = ~auVar61._12_4_ & _UNK_00100bec;
          auVar42._0_4_ = (uint)auStack_68._0_4_ & auVar61._0_4_;
          auVar42._4_4_ = (uint)auStack_68._4_4_ & auVar61._4_4_;
          auVar42._8_4_ = (uint)auStack_68._8_4_ & auVar61._8_4_;
          auVar42._12_4_ = (uint)auStack_68._12_4_ & auVar61._12_4_;
          auVar42 = auVar42 | auVar54;
          auVar55._4_4_ = auVar42._0_4_;
          auVar55._0_4_ = auVar42._4_4_;
          auVar55._8_4_ = auVar42._12_4_;
          auVar55._12_4_ = auVar42._8_4_;
          auVar36 = minps(auVar55,auVar42);
          auVar65._0_8_ = auVar36._8_8_;
          auVar65._8_4_ = auVar36._0_4_;
          auVar65._12_4_ = auVar36._4_4_;
          auVar36 = minps(auVar65,auVar36);
          auVar43._0_4_ = -(uint)(auVar42._0_4_ == auVar36._0_4_) & auVar61._0_4_;
          auVar43._4_4_ = -(uint)(auVar42._4_4_ == auVar36._4_4_) & auVar61._4_4_;
          auVar43._8_4_ = -(uint)(auVar42._8_4_ == auVar36._8_4_) & auVar61._8_4_;
          auVar43._12_4_ = -(uint)(auVar42._12_4_ == auVar36._12_4_) & auVar61._12_4_;
          iVar30 = movmskps((int)in_R9,auVar43);
          in_R9 = CONCAT44((int)(in_R9 >> 0x20),iVar30);
          uVar21 = CONCAT44((int)((ulong)lVar1 >> 0x20),iVar20);
          if (iVar30 != 0) {
            uVar21 = in_R9;
          }
          uVar31 = 0;
          if (uVar21 != 0) {
            for (; (uVar21 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
            }
          }
          if ((uVar31 != uVar26) && (afStack_58[uVar31 - 4] < fVar17)) {
            lVar28 = (long)(int)afStack_58[uVar31];
            uVar23 = uVar26;
            uVar27 = uVar31;
            fVar17 = afStack_58[uVar31 - 4];
          }
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != 4);
    if (uVar27 != 0xffffffffffffffff) {
      plVar25 = (long *)param_1[uVar23];
      lVar1 = param_1[uVar27];
      param_1[uVar27] = plVar25[lVar28];
      plVar25[lVar28] = lVar1;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x20);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x20) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x20);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x20) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x40);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x40) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x40);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x40) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x60);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x60) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x60);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x60) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x30);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x30) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x30);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x30) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x50);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x50) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x50);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x50) = uVar19;
      uVar19 = *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x70);
      *(undefined4 *)((long)param_1 + uVar27 * 4 + 0x70) =
           *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x70);
      *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x70) = uVar19;
      auVar44._4_4_ = (int)plVar25[0xc];
      auVar44._0_4_ = *(undefined4 *)((long)plVar25 + 100);
      auVar44._8_4_ = *(undefined4 *)((long)plVar25 + 100);
      auVar44._12_4_ = (int)plVar25[0xd];
      auVar45 = minps(auVar44,*(undefined1 (*) [16])(plVar25 + 0xc));
      lVar28 = 3;
      auVar66._0_8_ = auVar45._8_8_;
      auVar66._8_4_ = auVar45._0_4_;
      auVar66._12_4_ = auVar45._4_4_;
      auVar67 = minps(auVar66,auVar45);
      auVar46._4_4_ = (int)plVar25[8];
      auVar46._0_4_ = *(undefined4 *)((long)plVar25 + 0x44);
      auVar46._8_4_ = *(undefined4 *)((long)plVar25 + 0x44);
      auVar46._12_4_ = (int)plVar25[9];
      auVar45 = minps(auVar46,*(undefined1 (*) [16])(plVar25 + 8));
      auVar72._0_8_ = auVar45._8_8_;
      auVar72._8_4_ = auVar45._0_4_;
      auVar72._12_4_ = auVar45._4_4_;
      auVar73 = minps(auVar72,auVar45);
      auVar47._4_4_ = (int)plVar25[4];
      auVar47._0_4_ = *(undefined4 *)((long)plVar25 + 0x24);
      auVar47._8_4_ = *(undefined4 *)((long)plVar25 + 0x24);
      auVar47._12_4_ = (int)plVar25[5];
      auVar45 = minps(auVar47,*(undefined1 (*) [16])(plVar25 + 4));
      auVar76._0_8_ = auVar45._8_8_;
      auVar76._8_4_ = auVar45._0_4_;
      auVar76._12_4_ = auVar45._4_4_;
      auVar77 = minps(auVar76,auVar45);
      auVar48._4_4_ = (int)plVar25[0xe];
      auVar48._0_4_ = *(undefined4 *)((long)plVar25 + 0x74);
      auVar48._8_4_ = *(undefined4 *)((long)plVar25 + 0x74);
      auVar48._12_4_ = (int)plVar25[0xf];
      auVar45 = maxps(auVar48,*(undefined1 (*) [16])(plVar25 + 0xe));
      auVar56._0_8_ = auVar45._8_8_;
      auVar56._8_4_ = auVar45._0_4_;
      auVar56._12_4_ = auVar45._4_4_;
      auVar57 = maxps(auVar56,auVar45);
      auVar49._4_4_ = (int)plVar25[10];
      auVar49._0_4_ = *(undefined4 *)((long)plVar25 + 0x54);
      auVar49._8_4_ = *(undefined4 *)((long)plVar25 + 0x54);
      auVar49._12_4_ = (int)plVar25[0xb];
      auVar45 = maxps(auVar49,*(undefined1 (*) [16])(plVar25 + 10));
      auVar62._0_8_ = auVar45._8_8_;
      auVar62._8_4_ = auVar45._0_4_;
      auVar62._12_4_ = auVar45._4_4_;
      auVar63 = maxps(auVar62,auVar45);
      auVar50._4_4_ = (int)plVar25[6];
      auVar50._0_4_ = *(undefined4 *)((long)plVar25 + 0x34);
      auVar50._8_4_ = *(undefined4 *)((long)plVar25 + 0x34);
      auVar50._12_4_ = (int)plVar25[7];
      auVar45 = maxps(auVar50,*(undefined1 (*) [16])(plVar25 + 6));
      *(int *)((long)param_1 + uVar23 * 4 + 0x20) = auVar77._0_4_;
      *(int *)((long)param_1 + uVar23 * 4 + 0x40) = auVar73._0_4_;
      *(int *)((long)param_1 + uVar23 * 4 + 0x60) = auVar67._0_4_;
      auVar71._0_8_ = auVar45._8_8_;
      auVar71._8_4_ = auVar45._0_4_;
      auVar71._12_4_ = auVar45._4_4_;
      *(int *)((long)param_1 + uVar23 * 4 + 0x50) = auVar63._0_4_;
      auVar45 = maxps(auVar71,auVar45);
      *(int *)((long)param_1 + uVar23 * 4 + 0x70) = auVar57._0_4_;
      *(int *)((long)param_1 + uVar23 * 4 + 0x30) = auVar45._0_4_;
      do {
        if (param_1[lVar28] != 8) {
          if (lVar28 != 0) {
            lVar24 = 0;
            plVar29 = param_1 + 4;
            lVar1 = *param_1;
            while( true ) {
              lVar22 = lVar28;
              if (lVar1 == 8) {
                param_1[lVar24] = param_1[lVar28];
                param_1[lVar28] = 8;
                lVar1 = *plVar29;
                lVar22 = lVar28 + -1;
                *(undefined4 *)plVar29 = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x20);
                *(int *)((long)param_1 + lVar28 * 4 + 0x20) = (int)lVar1;
                lVar1 = plVar29[4];
                *(undefined4 *)(plVar29 + 4) = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x40);
                *(int *)((long)param_1 + lVar28 * 4 + 0x40) = (int)lVar1;
                lVar1 = plVar29[8];
                *(undefined4 *)(plVar29 + 8) = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x60);
                *(int *)((long)param_1 + lVar28 * 4 + 0x60) = (int)lVar1;
                lVar1 = plVar29[2];
                *(undefined4 *)(plVar29 + 2) = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x30);
                *(int *)((long)param_1 + lVar28 * 4 + 0x30) = (int)lVar1;
                lVar1 = plVar29[6];
                *(undefined4 *)(plVar29 + 6) = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x50);
                *(int *)((long)param_1 + lVar28 * 4 + 0x50) = (int)lVar1;
                lVar1 = plVar29[10];
                *(undefined4 *)(plVar29 + 10) = *(undefined4 *)((long)param_1 + lVar28 * 4 + 0x70);
                *(int *)((long)param_1 + lVar28 * 4 + 0x70) = (int)lVar1;
                if (lVar24 < lVar22) {
                  while (param_1[lVar22] == 8) {
                    lVar22 = lVar22 + -1;
                    if (lVar22 == lVar24) goto LAB_0010094e;
                  }
                }
              }
              lVar24 = lVar24 + 1;
              plVar29 = (long *)((long)plVar29 + 4);
              if (lVar22 <= lVar24) break;
              lVar1 = param_1[lVar24];
              lVar28 = lVar22;
            }
          }
          break;
        }
        bVar35 = lVar28 != 0;
        lVar28 = lVar28 + -1;
      } while (bVar35);
LAB_0010094e:
      lVar28 = 3;
      do {
        if (plVar25[lVar28] != 8) {
          if (lVar28 != 0) {
            lVar24 = 0;
            plVar29 = plVar25 + 4;
            lVar1 = *plVar25;
            while( true ) {
              lVar22 = lVar28;
              if (lVar1 == 8) {
                plVar25[lVar24] = plVar25[lVar28];
                plVar25[lVar28] = 8;
                lVar1 = *plVar29;
                lVar22 = lVar28 + -1;
                *(undefined4 *)plVar29 = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x20);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x20) = (int)lVar1;
                lVar1 = plVar29[4];
                *(undefined4 *)(plVar29 + 4) = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x40);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x40) = (int)lVar1;
                lVar1 = plVar29[8];
                *(undefined4 *)(plVar29 + 8) = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x60);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x60) = (int)lVar1;
                lVar1 = plVar29[2];
                *(undefined4 *)(plVar29 + 2) = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x30);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x30) = (int)lVar1;
                lVar1 = plVar29[6];
                *(undefined4 *)(plVar29 + 6) = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x50);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x50) = (int)lVar1;
                lVar1 = plVar29[10];
                *(undefined4 *)(plVar29 + 10) = *(undefined4 *)((long)plVar25 + lVar28 * 4 + 0x70);
                *(int *)((long)plVar25 + lVar28 * 4 + 0x70) = (int)lVar1;
                if (lVar24 < lVar22) {
                  while (plVar25[lVar22] == 8) {
                    lVar22 = lVar22 + -1;
                    if (lVar22 == lVar24) goto LAB_00100960;
                  }
                }
              }
              lVar24 = lVar24 + 1;
              plVar29 = (long *)((long)plVar29 + 4);
              if (lVar22 <= lVar24) break;
              lVar1 = plVar25[lVar24];
              lVar28 = lVar22;
            }
          }
          break;
        }
        bVar35 = lVar28 != 0;
        lVar28 = lVar28 + -1;
      } while (bVar35);
LAB_00100960:
      local_88[uVar27] = (float)((int)local_88[uVar27] + 1);
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
    lVar28 = (long)((int)local_88[3] + 1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



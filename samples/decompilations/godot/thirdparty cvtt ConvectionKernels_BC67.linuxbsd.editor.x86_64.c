
/* cvtt::Internal::IndexSelectorHDR<3>::SelectIndexHDRSlow(cvtt::ParallelMath::Float const*,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) const [clone .isra.0] */

ulong cvtt::Internal::IndexSelectorHDR<3>::SelectIndexHDRSlow
                (Float *param_1,RoundTowardNearestForScope *param_2)

{
  Float *pFVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar14;
  ulong uVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  
  fVar31 = *(float *)param_2 - *(float *)(param_1 + 0x130);
  fVar33 = *(float *)(param_2 + 4) - *(float *)(param_1 + 0x134);
  fVar34 = *(float *)(param_2 + 8) - *(float *)(param_1 + 0x138);
  fVar35 = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x13c);
  fVar26 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x140);
  fVar28 = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x144);
  fVar29 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x148);
  fVar30 = *(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x14c);
  fVar21 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x150);
  fVar23 = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x154);
  fVar24 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x158);
  fVar25 = *(float *)(param_2 + 0x2c) - *(float *)(param_1 + 0x15c);
  fVar8 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x160);
  fVar11 = *(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x164);
  fVar12 = *(float *)(param_2 + 0x38) - *(float *)(param_1 + 0x168);
  fVar13 = *(float *)(param_2 + 0x3c) - *(float *)(param_1 + 0x16c);
  fVar14 = *(float *)(param_2 + 0x40) - *(float *)(param_1 + 0x170);
  fVar18 = *(float *)(param_2 + 0x44) - *(float *)(param_1 + 0x174);
  fVar19 = *(float *)(param_2 + 0x48) - *(float *)(param_1 + 0x178);
  fVar20 = *(float *)(param_2 + 0x4c) - *(float *)(param_1 + 0x17c);
  fVar4 = *(float *)(param_2 + 0x50) - *(float *)(param_1 + 0x180);
  fVar5 = *(float *)(param_2 + 0x54) - *(float *)(param_1 + 0x184);
  fVar6 = *(float *)(param_2 + 0x58) - *(float *)(param_1 + 0x188);
  fVar7 = *(float *)(param_2 + 0x5c) - *(float *)(param_1 + 0x18c);
  auVar32._0_4_ = fVar31 * fVar31 + fVar21 * fVar21 + fVar14 * fVar14;
  auVar32._4_4_ = fVar33 * fVar33 + fVar23 * fVar23 + fVar18 * fVar18;
  auVar32._8_4_ = fVar34 * fVar34 + fVar24 * fVar24 + fVar19 * fVar19;
  auVar32._12_4_ = fVar35 * fVar35 + fVar25 * fVar25 + fVar20 * fVar20;
  auVar27._0_4_ = fVar26 * fVar26 + fVar8 * fVar8 + fVar4 * fVar4;
  auVar27._4_4_ = fVar28 * fVar28 + fVar11 * fVar11 + fVar5 * fVar5;
  auVar27._8_4_ = fVar29 * fVar29 + fVar12 * fVar12 + fVar6 * fVar6;
  auVar27._12_4_ = fVar30 * fVar30 + fVar13 * fVar13 + fVar7 * fVar7;
  if (*(int *)(param_1 + 0x750) < 2) {
    uVar15 = 0;
  }
  else {
    auVar16 = (undefined1  [16])0x0;
    pFVar1 = param_1 + 400;
    iVar2 = 1;
    do {
      fVar14 = *(float *)param_2 - *(float *)pFVar1;
      fVar18 = *(float *)(param_2 + 4) - *(float *)(pFVar1 + 4);
      fVar19 = *(float *)(param_2 + 8) - *(float *)(pFVar1 + 8);
      fVar20 = *(float *)(param_2 + 0xc) - *(float *)(pFVar1 + 0xc);
      fVar4 = *(float *)(param_2 + 0x10) - *(float *)(pFVar1 + 0x10);
      fVar5 = *(float *)(param_2 + 0x14) - *(float *)(pFVar1 + 0x14);
      fVar6 = *(float *)(param_2 + 0x18) - *(float *)(pFVar1 + 0x18);
      fVar7 = *(float *)(param_2 + 0x1c) - *(float *)(pFVar1 + 0x1c);
      fVar31 = *(float *)(param_2 + 0x20) - *(float *)(pFVar1 + 0x20);
      fVar33 = *(float *)(param_2 + 0x24) - *(float *)(pFVar1 + 0x24);
      fVar34 = *(float *)(param_2 + 0x28) - *(float *)(pFVar1 + 0x28);
      fVar35 = *(float *)(param_2 + 0x2c) - *(float *)(pFVar1 + 0x2c);
      fVar21 = *(float *)(param_2 + 0x30) - *(float *)(pFVar1 + 0x30);
      fVar23 = *(float *)(param_2 + 0x34) - *(float *)(pFVar1 + 0x34);
      fVar24 = *(float *)(param_2 + 0x38) - *(float *)(pFVar1 + 0x38);
      fVar25 = *(float *)(param_2 + 0x3c) - *(float *)(pFVar1 + 0x3c);
      fVar26 = *(float *)(param_2 + 0x40) - *(float *)(pFVar1 + 0x40);
      fVar28 = *(float *)(param_2 + 0x44) - *(float *)(pFVar1 + 0x44);
      fVar29 = *(float *)(param_2 + 0x48) - *(float *)(pFVar1 + 0x48);
      fVar30 = *(float *)(param_2 + 0x4c) - *(float *)(pFVar1 + 0x4c);
      fVar8 = *(float *)(param_2 + 0x50) - *(float *)(pFVar1 + 0x50);
      fVar11 = *(float *)(param_2 + 0x54) - *(float *)(pFVar1 + 0x54);
      fVar12 = *(float *)(param_2 + 0x58) - *(float *)(pFVar1 + 0x58);
      fVar13 = *(float *)(param_2 + 0x5c) - *(float *)(pFVar1 + 0x5c);
      auVar10._0_4_ = fVar4 * fVar4 + fVar21 * fVar21 + fVar8 * fVar8;
      auVar10._4_4_ = fVar5 * fVar5 + fVar23 * fVar23 + fVar11 * fVar11;
      auVar10._8_4_ = fVar6 * fVar6 + fVar24 * fVar24 + fVar12 * fVar12;
      auVar10._12_4_ = fVar7 * fVar7 + fVar25 * fVar25 + fVar13 * fVar13;
      auVar22._0_4_ = fVar14 * fVar14 + fVar31 * fVar31 + fVar26 * fVar26;
      auVar22._4_4_ = fVar18 * fVar18 + fVar33 * fVar33 + fVar28 * fVar28;
      auVar22._8_4_ = fVar19 * fVar19 + fVar34 * fVar34 + fVar29 * fVar29;
      auVar22._12_4_ = fVar20 * fVar20 + fVar35 * fVar35 + fVar30 * fVar30;
      auVar36._4_4_ = -(uint)(auVar10._4_4_ < auVar27._4_4_);
      auVar36._0_4_ = -(uint)(auVar10._0_4_ < auVar27._0_4_);
      auVar36._8_4_ = -(uint)(auVar10._8_4_ < auVar27._8_4_);
      auVar36._12_4_ = -(uint)(auVar10._12_4_ < auVar27._12_4_);
      auVar27 = minps(auVar27,auVar10);
      auVar9._4_4_ = -(uint)(auVar22._4_4_ < auVar32._4_4_);
      auVar9._0_4_ = -(uint)(auVar22._0_4_ < auVar32._0_4_);
      auVar9._8_4_ = -(uint)(auVar22._8_4_ < auVar32._8_4_);
      auVar9._12_4_ = -(uint)(auVar22._12_4_ < auVar32._12_4_);
      auVar32 = minps(auVar32,auVar22);
      auVar10 = packssdw(auVar9,auVar36);
      iVar3 = iVar2 + 1;
      auVar17._0_4_ = CONCAT22((short)iVar2,(short)iVar2);
      auVar17._4_4_ = auVar17._0_4_;
      auVar17._8_4_ = auVar17._0_4_;
      auVar17._12_4_ = auVar17._0_4_;
      auVar16 = auVar10 & auVar17 | ~auVar10 & auVar16;
      uVar15 = auVar16._0_8_;
      pFVar1 = pFVar1 + 0x60;
      iVar2 = iVar3;
    } while (iVar3 != *(int *)(param_1 + 0x750));
  }
  return *(ulong *)(param_1 + 0x730) &
         CONCAT26(*(short *)(param_1 + 0x746) - (short)(uVar15 >> 0x30),
                  CONCAT24(*(short *)(param_1 + 0x744) - (short)(uVar15 >> 0x20),
                           CONCAT22(*(short *)(param_1 + 0x742) - (short)(uVar15 >> 0x10),
                                    *(short *)(param_1 + 0x740) - (short)uVar15))) |
         ~*(ulong *)(param_1 + 0x730) & uVar15;
}



/* cvtt::Internal::ScaleHDRValue(cvtt::ParallelMath::Float const&, bool) */

void __thiscall cvtt::Internal::ScaleHDRValue(Internal *this,Float *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  fVar8 = *(float *)(param_1 + 0x1c);
  if (param_2) {
    auVar9._0_4_ = fVar1 * _LC5 +
                   (float)(~-(uint)(fVar1 < 0.0) & (uint)_LC1 | -(uint)(fVar1 < 0.0) & _LC3);
    auVar9._4_4_ = fVar2 * _LC5 +
                   (float)(~-(uint)(fVar2 < 0.0) & (uint)_LC1 | -(uint)(fVar2 < 0.0) & _LC3);
    auVar9._8_4_ = fVar3 * _LC5 +
                   (float)(~-(uint)(fVar3 < 0.0) & (uint)_LC1 | -(uint)(fVar3 < 0.0) & _LC3);
    auVar9._12_4_ =
         fVar4 * _LC5 + (float)(~-(uint)(fVar4 < 0.0) & (uint)_LC1 | -(uint)(fVar4 < 0.0) & _LC3);
    auVar15._4_4_ = _LC7;
    auVar15._0_4_ = _LC7;
    auVar15._8_4_ = _LC7;
    auVar15._12_4_ = _LC7;
    auVar10 = divps(auVar9,auVar15);
    auVar12._4_4_ =
         _LC5 * fVar6 + (float)(~-(uint)(fVar6 < 0.0) & (uint)_LC1 | -(uint)(fVar6 < 0.0) & _LC3);
    auVar12._0_4_ =
         _LC5 * fVar5 + (float)(~-(uint)(fVar5 < 0.0) & (uint)_LC1 | -(uint)(fVar5 < 0.0) & _LC3);
    auVar12._8_4_ =
         _LC5 * fVar7 + (float)(~-(uint)(fVar7 < 0.0) & (uint)_LC1 | -(uint)(fVar7 < 0.0) & _LC3);
    auVar12._12_4_ =
         _LC5 * fVar8 + (float)(~-(uint)(fVar8 < 0.0) & (uint)_LC1 | -(uint)(fVar8 < 0.0) & _LC3);
    auVar13 = divps(auVar12,auVar15);
    *(undefined1 (*) [16])this = auVar10;
    *(undefined1 (*) [16])(this + 0x10) = auVar13;
    return;
  }
  auVar11._0_4_ = fVar1 * _LC9 + _LC1;
  auVar11._4_4_ = fVar2 * _LC9 + _LC1;
  auVar11._8_4_ = fVar3 * _LC9 + _LC1;
  auVar11._12_4_ = fVar4 * _LC9 + _LC1;
  auVar14._0_4_ = fVar5 * _LC9 + _LC1;
  auVar14._4_4_ = fVar6 * _LC9 + _LC1;
  auVar14._8_4_ = fVar7 * _LC9 + _LC1;
  auVar14._12_4_ = fVar8 * _LC9 + _LC1;
  auVar10._4_4_ = _LC7;
  auVar10._0_4_ = _LC7;
  auVar10._8_4_ = _LC7;
  auVar10._12_4_ = _LC7;
  auVar10 = divps(auVar11,auVar10);
  auVar13._4_4_ = _LC7;
  auVar13._0_4_ = _LC7;
  auVar13._8_4_ = _LC7;
  auVar13._12_4_ = _LC7;
  auVar13 = divps(auVar14,auVar13);
  *(undefined1 (*) [16])this = auVar10;
  *(undefined1 (*) [16])(this + 0x10) = auVar13;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::UnscaleHDRValueSigned(cvtt::ParallelMath::VInt16<0> const&) */

ulong cvtt::Internal::UnscaleHDRValueSigned(VInt16 *param_1)

{
  undefined1 auVar1 [12];
  unkbyte10 Var2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  short sVar11;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar7 [12];
  undefined1 auVar9 [16];
  
  auVar5 = *(undefined1 (*) [16])param_1;
  auVar4._0_8_ = CONCAT26(-(ushort)(auVar5._6_2_ < 0),
                          CONCAT24(-(ushort)(auVar5._4_2_ < 0),
                                   CONCAT22(-(ushort)(auVar5._2_2_ < 0),-(ushort)(auVar5._0_2_ < 0))
                                  ));
  auVar4._8_2_ = -(ushort)(auVar5._8_2_ < 0);
  auVar4._10_2_ = -(ushort)(auVar5._10_2_ < 0);
  auVar4._12_2_ = -(ushort)(auVar5._12_2_ < 0);
  auVar4._14_2_ = -(ushort)(auVar5._14_2_ < 0);
  auVar8._2_2_ = -auVar5._2_2_;
  auVar8._0_2_ = -auVar5._0_2_;
  auVar8._4_2_ = -auVar5._4_2_;
  auVar8._6_2_ = -auVar5._6_2_;
  auVar8._8_2_ = -auVar5._8_2_;
  auVar8._10_2_ = -auVar5._10_2_;
  auVar8._12_2_ = -auVar5._12_2_;
  auVar8._14_2_ = -auVar5._14_2_;
  auVar5 = auVar8 & auVar4 | ~auVar4 & auVar5;
  auVar12 = pmulhuw(auVar5,__LC10);
  auVar8 = psllw(auVar5,5);
  sVar11 = auVar8._6_2_ - auVar5._6_2_;
  uVar6 = CONCAT22(auVar12._8_2_,auVar8._8_2_ - auVar5._8_2_);
  auVar7._0_8_ = CONCAT26(auVar12._10_2_,CONCAT24(auVar8._10_2_ - auVar5._10_2_,uVar6));
  auVar7._8_2_ = auVar8._12_2_ - auVar5._12_2_;
  auVar7._10_2_ = auVar12._12_2_;
  auVar9._12_2_ = auVar8._14_2_ - auVar5._14_2_;
  auVar9._0_12_ = auVar7;
  auVar9._14_2_ = auVar12._14_2_;
  uVar3 = CONCAT22(auVar12._6_2_,sVar11);
  Var2 = CONCAT64(CONCAT42(uVar3,auVar12._4_2_),CONCAT22(auVar8._4_2_ - auVar5._4_2_,sVar11));
  auVar1._4_8_ = (long)((unkuint10)Var2 >> 0x10);
  auVar1._2_2_ = auVar12._2_2_;
  auVar1._0_2_ = auVar8._2_2_ - auVar5._2_2_;
  auVar10._0_4_ = uVar6 >> 5;
  auVar10._4_4_ = (uint)((ulong)auVar7._0_8_ >> 0x25);
  auVar10._8_4_ = auVar7._8_4_ >> 5;
  auVar10._12_4_ = auVar9._12_4_ >> 5;
  auVar5._0_4_ = CONCAT22(auVar12._0_2_,auVar8._0_2_ - auVar5._0_2_) >> 5;
  auVar5._4_4_ = auVar1._0_4_ >> 5;
  auVar5._8_4_ = (uint)((unkuint10)Var2 >> 0x10) >> 5;
  auVar5._12_4_ = uVar3 >> 5;
  auVar5 = packssdw(auVar5,auVar10);
  return auVar4._0_8_ & SUB168(__LC11,0) | auVar5._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::UnscaleHDRValueUnsigned(cvtt::ParallelMath::VInt16<1> const&) */

undefined8 cvtt::Internal::UnscaleHDRValueUnsigned(VInt16 *param_1)

{
  undefined1 auVar1 [12];
  unkbyte10 Var2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  short sVar10;
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar6 [12];
  undefined1 auVar8 [16];
  
  auVar4 = *(undefined1 (*) [16])param_1;
  auVar11 = pmulhuw(auVar4,__LC10);
  auVar7 = psllw(auVar4,5);
  sVar10 = auVar7._6_2_ - auVar4._6_2_;
  uVar5 = CONCAT22(auVar11._8_2_,auVar7._8_2_ - auVar4._8_2_);
  auVar6._0_8_ = CONCAT26(auVar11._10_2_,CONCAT24(auVar7._10_2_ - auVar4._10_2_,uVar5));
  auVar6._8_2_ = auVar7._12_2_ - auVar4._12_2_;
  auVar6._10_2_ = auVar11._12_2_;
  auVar8._12_2_ = auVar7._14_2_ - auVar4._14_2_;
  auVar8._0_12_ = auVar6;
  auVar8._14_2_ = auVar11._14_2_;
  uVar3 = CONCAT22(auVar11._6_2_,sVar10);
  Var2 = CONCAT64(CONCAT42(uVar3,auVar11._4_2_),CONCAT22(auVar7._4_2_ - auVar4._4_2_,sVar10));
  auVar1._4_8_ = (long)((unkuint10)Var2 >> 0x10);
  auVar1._2_2_ = auVar11._2_2_;
  auVar1._0_2_ = auVar7._2_2_ - auVar4._2_2_;
  auVar9._0_4_ = uVar5 >> 6;
  auVar9._4_4_ = (uint)((ulong)auVar6._0_8_ >> 0x26);
  auVar9._8_4_ = auVar6._8_4_ >> 6;
  auVar9._12_4_ = auVar8._12_4_ >> 6;
  auVar4._0_4_ = CONCAT22(auVar11._0_2_,auVar7._0_2_ - auVar4._0_2_) >> 6;
  auVar4._4_4_ = auVar1._0_4_ >> 6;
  auVar4._8_4_ = (uint)((unkuint10)Var2 >> 0x10) >> 6;
  auVar4._12_4_ = uVar3 >> 6;
  auVar4 = packssdw(auVar4,auVar9);
  return auVar4._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::UnscaleHDREndpoints(cvtt::ParallelMath::VInt16<3> const (*) [3],
   cvtt::ParallelMath::VInt16<3> (*) [3], bool) */

void cvtt::Internal::UnscaleHDREndpoints(VInt16<3> *param_1,VInt16<3> *param_2,bool param_3)

{
  VInt16<3> *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  unkbyte10 Var4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined1 auVar12 [12];
  short sVar16;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar11 [12];
  undefined1 auVar14 [16];
  
  auVar7 = __LC11;
  auVar6 = __LC10;
  lVar9 = 0;
  do {
    pVVar1 = param_1 + lVar9;
    lVar8 = 0;
    auVar19 = *(undefined1 (*) [16])pVVar1;
    if (param_3) {
      while( true ) {
        auVar17._0_2_ = -(ushort)(auVar19._0_2_ < 0);
        auVar17._2_2_ = -(ushort)(auVar19._2_2_ < 0);
        auVar17._4_2_ = -(ushort)(auVar19._4_2_ < 0);
        auVar17._6_2_ = -(ushort)(auVar19._6_2_ < 0);
        auVar17._8_2_ = -(ushort)(auVar19._8_2_ < 0);
        auVar17._10_2_ = -(ushort)(auVar19._10_2_ < 0);
        auVar17._12_2_ = -(ushort)(auVar19._12_2_ < 0);
        auVar17._14_2_ = -(ushort)(auVar19._14_2_ < 0);
        auVar20._2_2_ = -auVar19._2_2_;
        auVar20._0_2_ = -auVar19._0_2_;
        auVar20._4_2_ = -auVar19._4_2_;
        auVar20._6_2_ = -auVar19._6_2_;
        auVar20._8_2_ = -auVar19._8_2_;
        auVar20._10_2_ = -auVar19._10_2_;
        auVar20._12_2_ = -auVar19._12_2_;
        auVar20._14_2_ = -auVar19._14_2_;
        auVar20 = auVar20 & auVar17 | ~auVar17 & auVar19;
        auVar21 = pmulhuw(auVar20,auVar6);
        auVar19 = psllw(auVar20,5);
        sVar16 = auVar19._6_2_ - auVar20._6_2_;
        uVar5 = CONCAT22(auVar21._6_2_,sVar16);
        Var4 = CONCAT64(CONCAT42(uVar5,auVar21._4_2_),CONCAT22(auVar19._4_2_ - auVar20._4_2_,sVar16)
                       );
        auVar3._4_8_ = (long)((unkuint10)Var4 >> 0x10);
        auVar3._2_2_ = auVar21._2_2_;
        auVar3._0_2_ = auVar19._2_2_ - auVar20._2_2_;
        uVar10 = CONCAT22(auVar21._8_2_,auVar19._8_2_ - auVar20._8_2_);
        auVar12._0_8_ = CONCAT26(auVar21._10_2_,CONCAT24(auVar19._10_2_ - auVar20._10_2_,uVar10));
        auVar12._8_2_ = auVar19._12_2_ - auVar20._12_2_;
        auVar12._10_2_ = auVar21._12_2_;
        auVar13._12_2_ = auVar19._14_2_ - auVar20._14_2_;
        auVar13._0_12_ = auVar12;
        auVar13._14_2_ = auVar21._14_2_;
        auVar21._0_4_ = CONCAT22(auVar21._0_2_,auVar19._0_2_ - auVar20._0_2_) >> 5;
        auVar21._4_4_ = auVar3._0_4_ >> 5;
        auVar21._8_4_ = (uint)((unkuint10)Var4 >> 0x10) >> 5;
        auVar21._12_4_ = uVar5 >> 5;
        auVar19._0_4_ = uVar10 >> 5;
        auVar19._4_4_ = (uint)((ulong)auVar12._0_8_ >> 0x25);
        auVar19._8_4_ = auVar12._8_4_ >> 5;
        auVar19._12_4_ = auVar13._12_4_ >> 5;
        auVar19 = packssdw(auVar21,auVar19);
        *(undefined1 (*) [16])(param_2 + lVar8 + lVar9) = auVar17 & auVar7 | auVar19;
        lVar8 = lVar8 + 0x10;
        if (lVar8 == 0x30) break;
        auVar19 = *(undefined1 (*) [16])(pVVar1 + lVar8);
      }
    }
    else {
      while( true ) {
        auVar17 = pmulhuw(auVar19,auVar6);
        auVar13 = psllw(auVar19,5);
        sVar16 = auVar13._6_2_ - auVar19._6_2_;
        uVar5 = CONCAT22(auVar17._6_2_,sVar16);
        Var4 = CONCAT64(CONCAT42(uVar5,auVar17._4_2_),CONCAT22(auVar13._4_2_ - auVar19._4_2_,sVar16)
                       );
        auVar2._4_8_ = (long)((unkuint10)Var4 >> 0x10);
        auVar2._2_2_ = auVar17._2_2_;
        auVar2._0_2_ = auVar13._2_2_ - auVar19._2_2_;
        uVar10 = CONCAT22(auVar17._8_2_,auVar13._8_2_ - auVar19._8_2_);
        auVar11._0_8_ = CONCAT26(auVar17._10_2_,CONCAT24(auVar13._10_2_ - auVar19._10_2_,uVar10));
        auVar11._8_2_ = auVar13._12_2_ - auVar19._12_2_;
        auVar11._10_2_ = auVar17._12_2_;
        auVar14._12_2_ = auVar13._14_2_ - auVar19._14_2_;
        auVar14._0_12_ = auVar11;
        auVar14._14_2_ = auVar17._14_2_;
        auVar15._0_4_ = uVar10 >> 6;
        auVar15._4_4_ = (uint)((ulong)auVar11._0_8_ >> 0x26);
        auVar15._8_4_ = auVar11._8_4_ >> 6;
        auVar15._12_4_ = auVar14._12_4_ >> 6;
        auVar18._0_4_ = CONCAT22(auVar17._0_2_,auVar13._0_2_ - auVar19._0_2_) >> 6;
        auVar18._4_4_ = auVar2._0_4_ >> 6;
        auVar18._8_4_ = (uint)((unkuint10)Var4 >> 0x10) >> 6;
        auVar18._12_4_ = uVar5 >> 6;
        auVar19 = packssdw(auVar18,auVar15);
        *(undefined1 (*) [16])(param_2 + lVar8 + lVar9) = auVar19;
        lVar8 = lVar8 + 0x10;
        if (lVar8 == 0x30) break;
        auVar19 = *(undefined1 (*) [16])(pVVar1 + lVar8);
      }
    }
    lVar9 = lVar9 + 0x30;
  } while (lVar9 != 0x60);
  return;
}



/* cvtt::Internal::BC7Computer::TweakAlpha(cvtt::ParallelMath::VInt16<2> const*, int, int,
   cvtt::ParallelMath::VInt16<2>*) */

void cvtt::Internal::BC7Computer::TweakAlpha
               (VInt16 *param_1,int param_2,int param_3,VInt16 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined4 uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_28;
  float local_24;
  long local_20;
  
  uVar11 = MXCSR;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  MXCSR = MXCSR & 0xffff9fff;
  cvtt::Util::ComputeTweakFactors(param_2,param_3,&local_28);
  uVar10 = _LC13;
  auVar19 = *(undefined1 (*) [16])param_1;
  auVar33 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar2._10_2_ = 0;
  auVar2._0_10_ = auVar19._0_10_;
  auVar2._12_2_ = auVar19._6_2_;
  auVar4._8_2_ = auVar19._4_2_;
  auVar4._0_8_ = auVar19._0_8_;
  auVar4._10_4_ = auVar2._10_4_;
  auVar8._6_8_ = 0;
  auVar8._0_6_ = auVar4._8_6_;
  auVar6._4_2_ = auVar19._2_2_;
  auVar6._0_4_ = auVar19._0_4_;
  auVar6._6_8_ = SUB148(auVar8 << 0x40,6);
  auVar3._10_2_ = 0;
  auVar3._0_10_ = auVar33._0_10_;
  auVar3._12_2_ = auVar33._6_2_;
  auVar5._8_2_ = auVar33._4_2_;
  auVar5._0_8_ = auVar33._0_8_;
  auVar5._10_4_ = auVar3._10_4_;
  auVar9._6_8_ = 0;
  auVar9._0_6_ = auVar5._8_6_;
  auVar7._4_2_ = auVar33._2_2_;
  auVar7._0_4_ = auVar33._0_4_;
  auVar7._6_8_ = SUB148(auVar9 << 0x40,6);
  fVar23 = (float)auVar19._8_2_;
  fVar24 = (float)auVar19._10_2_;
  fVar25 = (float)auVar19._12_2_;
  fVar26 = (float)auVar19._14_2_;
  fVar35 = (float)(auVar19._0_4_ & 0xffff);
  fVar36 = (float)auVar6._4_4_;
  fVar37 = (float)auVar4._8_4_;
  fVar38 = (float)(auVar2._10_4_ >> 0x10);
  fVar12 = (float)(auVar33._0_4_ & 0xffff) - fVar35;
  fVar15 = (float)auVar7._4_4_ - fVar36;
  fVar16 = (float)auVar5._8_4_ - fVar37;
  fVar17 = (float)(auVar3._10_4_ >> 0x10) - fVar38;
  fVar27 = (float)auVar33._8_2_ - fVar23;
  fVar28 = (float)auVar33._10_2_ - fVar24;
  fVar29 = (float)auVar33._12_2_ - fVar25;
  fVar30 = (float)auVar33._14_2_ - fVar26;
  auVar31._0_4_ = local_28 * fVar12 + fVar35;
  auVar31._4_4_ = local_28 * fVar15 + fVar36;
  auVar31._8_4_ = local_28 * fVar16 + fVar37;
  auVar31._12_4_ = local_28 * fVar17 + fVar38;
  auVar18._0_4_ = local_28 * fVar27 + fVar23;
  auVar18._4_4_ = local_28 * fVar28 + fVar24;
  auVar18._8_4_ = local_28 * fVar29 + fVar25;
  auVar18._12_4_ = local_28 * fVar30 + fVar26;
  auVar19._4_4_ = _LC13;
  auVar19._0_4_ = _LC13;
  auVar19._8_4_ = _LC13;
  auVar19._12_4_ = _LC13;
  auVar32 = minps(auVar31,auVar19);
  auVar33._4_4_ = _LC13;
  auVar33._0_4_ = _LC13;
  auVar33._8_4_ = _LC13;
  auVar33._12_4_ = _LC13;
  auVar19 = minps(auVar18,auVar33);
  auVar33 = maxps(auVar32,(undefined1  [16])0x0);
  auVar19 = maxps(auVar19,(undefined1  [16])0x0);
  auVar34._0_4_ = (int)auVar33._0_4_;
  auVar34._4_4_ = (int)auVar33._4_4_;
  auVar34._8_4_ = (int)auVar33._8_4_;
  auVar34._12_4_ = (int)auVar33._12_4_;
  auVar20._0_4_ = (int)auVar19._0_4_;
  auVar20._4_4_ = (int)auVar19._4_4_;
  auVar20._8_4_ = (int)auVar19._8_4_;
  auVar20._12_4_ = (int)auVar19._12_4_;
  auVar19 = packssdw(auVar34,auVar20);
  *(undefined1 (*) [16])param_4 = auVar19;
  auVar13._0_4_ = fVar12 * local_24 + fVar35;
  auVar13._4_4_ = fVar15 * local_24 + fVar36;
  auVar13._8_4_ = fVar16 * local_24 + fVar37;
  auVar13._12_4_ = fVar17 * local_24 + fVar38;
  auVar21._0_4_ = local_24 * fVar27 + fVar23;
  auVar21._4_4_ = local_24 * fVar28 + fVar24;
  auVar21._8_4_ = local_24 * fVar29 + fVar25;
  auVar21._12_4_ = local_24 * fVar30 + fVar26;
  auVar32._4_4_ = uVar10;
  auVar32._0_4_ = uVar10;
  auVar32._8_4_ = uVar10;
  auVar32._12_4_ = uVar10;
  auVar19 = minps(auVar13,auVar32);
  auVar1._4_4_ = uVar10;
  auVar1._0_4_ = uVar10;
  auVar1._8_4_ = uVar10;
  auVar1._12_4_ = uVar10;
  auVar33 = minps(auVar21,auVar1);
  auVar19 = maxps(auVar19,(undefined1  [16])0x0);
  auVar33 = maxps(auVar33,(undefined1  [16])0x0);
  auVar14._0_4_ = (int)auVar19._0_4_;
  auVar14._4_4_ = (int)auVar19._4_4_;
  auVar14._8_4_ = (int)auVar19._8_4_;
  auVar14._12_4_ = (int)auVar19._12_4_;
  auVar22._0_4_ = (int)auVar33._0_4_;
  auVar22._4_4_ = (int)auVar33._4_4_;
  auVar22._8_4_ = (int)auVar33._8_4_;
  auVar22._12_4_ = (int)auVar33._12_4_;
  auVar19 = packssdw(auVar14,auVar22);
  *(undefined1 (*) [16])(param_4 + 0x10) = auVar19;
  MXCSR = uVar11;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::BC7Computer::Quantize(cvtt::ParallelMath::VInt16<2>*, int, int) */

void cvtt::Internal::BC7Computer::Quantize(VInt16 *param_1,int param_2,int param_3)

{
  VInt16 *pVVar1;
  VInt16 *pVVar2;
  undefined1 auVar3 [16];
  short sVar4;
  
  if (0 < param_3) {
    sVar4 = (short)((1 << (7U - (char)param_2 & 0x1f)) + 0x7f);
    pVVar1 = param_1;
    do {
      pVVar2 = pVVar1 + 0x10;
      auVar3 = psllw(*(undefined1 (*) [16])pVVar1,ZEXT416((uint)param_2));
      *(ushort *)pVVar1 = (ushort)((auVar3._0_2_ + sVar4) - *(short *)pVVar1) >> 8;
      *(ushort *)(pVVar1 + 2) = (ushort)((auVar3._2_2_ + sVar4) - *(short *)(pVVar1 + 2)) >> 8;
      *(ushort *)(pVVar1 + 4) = (ushort)((auVar3._4_2_ + sVar4) - *(short *)(pVVar1 + 4)) >> 8;
      *(ushort *)(pVVar1 + 6) = (ushort)((auVar3._6_2_ + sVar4) - *(short *)(pVVar1 + 6)) >> 8;
      *(ushort *)(pVVar1 + 8) = (ushort)((auVar3._8_2_ + sVar4) - *(short *)(pVVar1 + 8)) >> 8;
      *(ushort *)(pVVar1 + 10) = (ushort)((auVar3._10_2_ + sVar4) - *(short *)(pVVar1 + 10)) >> 8;
      *(ushort *)(pVVar1 + 0xc) = (ushort)((auVar3._12_2_ + sVar4) - *(short *)(pVVar1 + 0xc)) >> 8;
      *(ushort *)(pVVar1 + 0xe) = (ushort)((auVar3._14_2_ + sVar4) - *(short *)(pVVar1 + 0xe)) >> 8;
      pVVar1 = pVVar2;
    } while (param_1 + (long)param_3 * 0x10 != pVVar2);
  }
  return;
}



/* cvtt::Internal::BC7Computer::QuantizeP(cvtt::ParallelMath::VInt16<2>*, int, unsigned short, int)
    */

void cvtt::Internal::BC7Computer::QuantizeP(VInt16 *param_1,int param_2,ushort param_3,int param_4)

{
  short sVar1;
  VInt16 *pVVar2;
  VInt16 *pVVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  sVar1 = 0xff;
  if (param_3 != 0) {
    sVar1 = (short)(1 << (8U - (char)param_2 & 0x1f)) + -1;
  }
  if (0 < param_4) {
    auVar6._0_4_ = CONCAT22(param_3,param_3);
    auVar6._4_4_ = auVar6._0_4_;
    auVar6._8_4_ = auVar6._0_4_;
    auVar6._12_4_ = auVar6._0_4_;
    pVVar2 = param_1;
    do {
      pVVar3 = pVVar2 + 0x10;
      auVar4 = psllw(*(undefined1 (*) [16])pVVar2,ZEXT416(param_2 + 1));
      auVar5._0_2_ = (ushort)((auVar4._0_2_ + sVar1) - *(short *)pVVar2) >> 9;
      auVar5._2_2_ = (ushort)((auVar4._2_2_ + sVar1) - *(short *)(pVVar2 + 2)) >> 9;
      auVar5._4_2_ = (ushort)((auVar4._4_2_ + sVar1) - *(short *)(pVVar2 + 4)) >> 9;
      auVar5._6_2_ = (ushort)((auVar4._6_2_ + sVar1) - *(short *)(pVVar2 + 6)) >> 9;
      auVar5._8_2_ = (ushort)((auVar4._8_2_ + sVar1) - *(short *)(pVVar2 + 8)) >> 9;
      auVar5._10_2_ = (ushort)((auVar4._10_2_ + sVar1) - *(short *)(pVVar2 + 10)) >> 9;
      auVar5._12_2_ = (ushort)((auVar4._12_2_ + sVar1) - *(short *)(pVVar2 + 0xc)) >> 9;
      auVar5._14_2_ = (ushort)((auVar4._14_2_ + sVar1) - *(short *)(pVVar2 + 0xe)) >> 9;
      auVar4 = psllw(auVar5,1);
      *(undefined1 (*) [16])pVVar2 = auVar4 | auVar6;
      pVVar2 = pVVar3;
    } while (param_1 + (long)param_4 * 0x10 != pVVar3);
  }
  return;
}



/* cvtt::Internal::BC7Computer::Unquantize(cvtt::ParallelMath::VInt16<2>*, int, int) */

void cvtt::Internal::BC7Computer::Unquantize(VInt16 *param_1,int param_2,int param_3)

{
  VInt16 *pVVar1;
  VInt16 *pVVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  
  if (0 < param_3) {
    pVVar1 = param_1;
    do {
      pVVar2 = pVVar1 + 0x10;
      auVar3 = psllw(*(undefined1 (*) [16])pVVar1,ZEXT416(8 - param_2));
      uVar5 = (ulong)(uint)param_2;
      auVar4._0_2_ = auVar3._0_2_ >> uVar5;
      auVar4._2_2_ = auVar3._2_2_ >> uVar5;
      auVar4._4_2_ = auVar3._4_2_ >> uVar5;
      auVar4._6_2_ = auVar3._6_2_ >> uVar5;
      auVar4._8_2_ = auVar3._8_2_ >> uVar5;
      auVar4._10_2_ = auVar3._10_2_ >> uVar5;
      auVar4._12_2_ = auVar3._12_2_ >> uVar5;
      auVar4._14_2_ = auVar3._14_2_ >> uVar5;
      *(undefined1 (*) [16])pVVar1 = auVar3 | auVar4;
      pVVar1 = pVVar2;
    } while (param_1 + (long)param_3 * 0x10 != pVVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints0(cvtt::ParallelMath::VInt16<2> (*) [4], unsigned
   short*) */

void cvtt::Internal::BC7Computer::CompressEndpoints0(VInt16<2> *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  VInt16<2> *pVVar5;
  VInt16<2> *pVVar6;
  VInt16<2> *pVVar7;
  VInt16<2> *pVVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar3 = _UNK_0011b6c8;
  uVar2 = __LC37;
  pVVar8 = param_1 + 0x30;
  lVar9 = 0;
  while( true ) {
    uVar1 = param_2[lVar9];
    auVar12._0_4_ = CONCAT22(uVar1,uVar1);
    auVar12._4_4_ = auVar12._0_4_;
    auVar12._8_4_ = auVar12._0_4_;
    auVar12._12_4_ = auVar12._0_4_;
    sVar4 = (-(ushort)(uVar1 == 0) & 0xf0) + 0xf;
    pVVar7 = param_1;
    do {
      pVVar5 = pVVar7 + 0x10;
      auVar10 = psllw(*(undefined1 (*) [16])pVVar7,5);
      auVar11._0_2_ = (ushort)((auVar10._0_2_ + sVar4) - *(short *)pVVar7) >> 9;
      auVar11._2_2_ = (ushort)((auVar10._2_2_ + sVar4) - *(short *)(pVVar7 + 2)) >> 9;
      auVar11._4_2_ = (ushort)((auVar10._4_2_ + sVar4) - *(short *)(pVVar7 + 4)) >> 9;
      auVar11._6_2_ = (ushort)((auVar10._6_2_ + sVar4) - *(short *)(pVVar7 + 6)) >> 9;
      auVar11._8_2_ = (ushort)((auVar10._8_2_ + sVar4) - *(short *)(pVVar7 + 8)) >> 9;
      auVar11._10_2_ = (ushort)((auVar10._10_2_ + sVar4) - *(short *)(pVVar7 + 10)) >> 9;
      auVar11._12_2_ = (ushort)((auVar10._12_2_ + sVar4) - *(short *)(pVVar7 + 0xc)) >> 9;
      auVar11._14_2_ = (ushort)((auVar10._14_2_ + sVar4) - *(short *)(pVVar7 + 0xe)) >> 9;
      auVar10 = psllw(auVar11,1);
      *(undefined1 (*) [16])pVVar7 = auVar10 | auVar12;
      pVVar6 = param_1;
      pVVar7 = pVVar5;
    } while (pVVar8 != pVVar5);
    do {
      pVVar7 = pVVar6 + 0x10;
      auVar12 = psllw(*(undefined1 (*) [16])pVVar6,3);
      auVar10._0_2_ = auVar12._0_2_ >> 5;
      auVar10._2_2_ = auVar12._2_2_ >> 5;
      auVar10._4_2_ = auVar12._4_2_ >> 5;
      auVar10._6_2_ = auVar12._6_2_ >> 5;
      auVar10._8_2_ = auVar12._8_2_ >> 5;
      auVar10._10_2_ = auVar12._10_2_ >> 5;
      auVar10._12_2_ = auVar12._12_2_ >> 5;
      auVar10._14_2_ = auVar12._14_2_ >> 5;
      *(undefined1 (*) [16])pVVar6 = auVar12 | auVar10;
      pVVar6 = pVVar7;
    } while (pVVar8 != pVVar7);
    *(undefined8 *)pVVar8 = uVar2;
    *(undefined8 *)(pVVar8 + 8) = uVar3;
    param_1 = param_1 + 0x40;
    pVVar8 = pVVar8 + 0x40;
    if (lVar9 != 0) break;
    lVar9 = 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints1(cvtt::ParallelMath::VInt16<2> (*) [4], unsigned
   short) */

void cvtt::Internal::BC7Computer::CompressEndpoints1(VInt16<2> *param_1,ushort param_2)

{
  VInt16<2> *pVVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  VInt16<2> *pVVar5;
  VInt16<2> *pVVar6;
  VInt16<2> *pVVar7;
  VInt16<2> *pVVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar3 = _UNK_0011b6c8;
  uVar2 = __LC37;
  pVVar7 = param_1 + 0x30;
  auVar12._0_4_ = CONCAT22(param_2,param_2);
  pVVar1 = param_1 + 0xb0;
  auVar12._4_4_ = auVar12._0_4_;
  auVar12._8_4_ = auVar12._0_4_;
  auVar12._12_4_ = auVar12._0_4_;
  sVar4 = (-(ushort)(param_2 == 0) & 0xfc) + 3;
  pVVar8 = param_1;
  do {
    do {
      pVVar5 = param_1 + 0x10;
      auVar9 = psllw(*(undefined1 (*) [16])param_1,7);
      auVar10._0_2_ = (ushort)((auVar9._0_2_ + sVar4) - *(short *)param_1) >> 9;
      auVar10._2_2_ = (ushort)((auVar9._2_2_ + sVar4) - *(short *)(param_1 + 2)) >> 9;
      auVar10._4_2_ = (ushort)((auVar9._4_2_ + sVar4) - *(short *)(param_1 + 4)) >> 9;
      auVar10._6_2_ = (ushort)((auVar9._6_2_ + sVar4) - *(short *)(param_1 + 6)) >> 9;
      auVar10._8_2_ = (ushort)((auVar9._8_2_ + sVar4) - *(short *)(param_1 + 8)) >> 9;
      auVar10._10_2_ = (ushort)((auVar9._10_2_ + sVar4) - *(short *)(param_1 + 10)) >> 9;
      auVar10._12_2_ = (ushort)((auVar9._12_2_ + sVar4) - *(short *)(param_1 + 0xc)) >> 9;
      auVar10._14_2_ = (ushort)((auVar9._14_2_ + sVar4) - *(short *)(param_1 + 0xe)) >> 9;
      auVar9 = psllw(auVar10,1);
      *(undefined1 (*) [16])param_1 = auVar9 | auVar12;
      pVVar6 = pVVar8;
      param_1 = pVVar5;
    } while (pVVar7 != pVVar5);
    do {
      pVVar5 = pVVar6 + 0x10;
      auVar9 = psllw(*(undefined1 (*) [16])pVVar6,1);
      auVar11._0_2_ = auVar9._0_2_ >> 7;
      auVar11._2_2_ = auVar9._2_2_ >> 7;
      auVar11._4_2_ = auVar9._4_2_ >> 7;
      auVar11._6_2_ = auVar9._6_2_ >> 7;
      auVar11._8_2_ = auVar9._8_2_ >> 7;
      auVar11._10_2_ = auVar9._10_2_ >> 7;
      auVar11._12_2_ = auVar9._12_2_ >> 7;
      auVar11._14_2_ = auVar9._14_2_ >> 7;
      *(undefined1 (*) [16])pVVar6 = auVar9 | auVar11;
      pVVar6 = pVVar5;
    } while (pVVar7 != pVVar5);
    *(undefined8 *)pVVar7 = uVar2;
    *(undefined8 *)(pVVar7 + 8) = uVar3;
    pVVar7 = pVVar7 + 0x40;
    param_1 = pVVar8 + 0x40;
    pVVar8 = param_1;
  } while (pVVar1 != pVVar7);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints2(cvtt::ParallelMath::VInt16<2> (*) [4]) */

void cvtt::Internal::BC7Computer::CompressEndpoints2(VInt16<2> *param_1)

{
  VInt16<2> *pVVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  VInt16<2> *pVVar12;
  VInt16<2> *pVVar13;
  VInt16<2> *pVVar14;
  VInt16<2> *pVVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  sVar11 = _UNK_0011b6de;
  sVar10 = _UNK_0011b6dc;
  sVar9 = _UNK_0011b6da;
  sVar8 = _UNK_0011b6d8;
  sVar7 = _UNK_0011b6d6;
  sVar6 = _UNK_0011b6d4;
  sVar5 = _UNK_0011b6d2;
  sVar4 = __LC15;
  uVar3 = _UNK_0011b6c8;
  uVar2 = __LC37;
  pVVar14 = param_1 + 0x30;
  pVVar1 = param_1 + 0xb0;
  pVVar15 = param_1;
  do {
    do {
      pVVar12 = param_1 + 0x10;
      auVar16 = psllw(*(undefined1 (*) [16])param_1,5);
      *(ushort *)param_1 = (ushort)((auVar16._0_2_ + sVar4) - *(short *)param_1) >> 8;
      *(ushort *)(param_1 + 2) = (ushort)((auVar16._2_2_ + sVar5) - *(short *)(param_1 + 2)) >> 8;
      *(ushort *)(param_1 + 4) = (ushort)((auVar16._4_2_ + sVar6) - *(short *)(param_1 + 4)) >> 8;
      *(ushort *)(param_1 + 6) = (ushort)((auVar16._6_2_ + sVar7) - *(short *)(param_1 + 6)) >> 8;
      *(ushort *)(param_1 + 8) = (ushort)((auVar16._8_2_ + sVar8) - *(short *)(param_1 + 8)) >> 8;
      *(ushort *)(param_1 + 10) = (ushort)((auVar16._10_2_ + sVar9) - *(short *)(param_1 + 10)) >> 8
      ;
      *(ushort *)(param_1 + 0xc) =
           (ushort)((auVar16._12_2_ + sVar10) - *(short *)(param_1 + 0xc)) >> 8;
      *(ushort *)(param_1 + 0xe) =
           (ushort)((auVar16._14_2_ + sVar11) - *(short *)(param_1 + 0xe)) >> 8;
      pVVar13 = pVVar15;
      param_1 = pVVar12;
    } while (pVVar14 != pVVar12);
    do {
      pVVar12 = pVVar13 + 0x10;
      auVar16 = psllw(*(undefined1 (*) [16])pVVar13,3);
      auVar17._0_2_ = auVar16._0_2_ >> 5;
      auVar17._2_2_ = auVar16._2_2_ >> 5;
      auVar17._4_2_ = auVar16._4_2_ >> 5;
      auVar17._6_2_ = auVar16._6_2_ >> 5;
      auVar17._8_2_ = auVar16._8_2_ >> 5;
      auVar17._10_2_ = auVar16._10_2_ >> 5;
      auVar17._12_2_ = auVar16._12_2_ >> 5;
      auVar17._14_2_ = auVar16._14_2_ >> 5;
      *(undefined1 (*) [16])pVVar13 = auVar16 | auVar17;
      pVVar13 = pVVar12;
    } while (pVVar14 != pVVar12);
    *(undefined8 *)pVVar14 = uVar2;
    *(undefined8 *)(pVVar14 + 8) = uVar3;
    pVVar14 = pVVar14 + 0x40;
    param_1 = pVVar15 + 0x40;
    pVVar15 = param_1;
  } while (pVVar1 != pVVar14);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints3(cvtt::ParallelMath::VInt16<2> (*) [4], unsigned
   short*) */

void cvtt::Internal::BC7Computer::CompressEndpoints3(VInt16<2> *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  short sVar4;
  VInt16<2> *pVVar5;
  VInt16<2> *pVVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = *param_2;
  auVar9._0_4_ = CONCAT22(uVar1,uVar1);
  auVar9._4_4_ = auVar9._0_4_;
  auVar9._8_4_ = auVar9._0_4_;
  auVar9._12_4_ = auVar9._0_4_;
  sVar4 = (-(ushort)(uVar1 == 0) & 0xfe) + 1;
  pVVar6 = param_1;
  do {
    pVVar5 = pVVar6 + 0x10;
    auVar7 = psllw(*(undefined1 (*) [16])pVVar6,8);
    auVar8._0_2_ = (ushort)((auVar7._0_2_ + sVar4) - *(short *)pVVar6) >> 9;
    auVar8._2_2_ = (ushort)((auVar7._2_2_ + sVar4) - *(short *)(pVVar6 + 2)) >> 9;
    auVar8._4_2_ = (ushort)((auVar7._4_2_ + sVar4) - *(short *)(pVVar6 + 4)) >> 9;
    auVar8._6_2_ = (ushort)((auVar7._6_2_ + sVar4) - *(short *)(pVVar6 + 6)) >> 9;
    auVar8._8_2_ = (ushort)((auVar7._8_2_ + sVar4) - *(short *)(pVVar6 + 8)) >> 9;
    auVar8._10_2_ = (ushort)((auVar7._10_2_ + sVar4) - *(short *)(pVVar6 + 10)) >> 9;
    auVar8._12_2_ = (ushort)((auVar7._12_2_ + sVar4) - *(short *)(pVVar6 + 0xc)) >> 9;
    auVar8._14_2_ = (ushort)((auVar7._14_2_ + sVar4) - *(short *)(pVVar6 + 0xe)) >> 9;
    auVar7 = psllw(auVar8,1);
    *(undefined1 (*) [16])pVVar6 = auVar7 | auVar9;
    uVar3 = _UNK_0011b6c8;
    uVar2 = __LC37;
    pVVar6 = pVVar5;
  } while (pVVar5 != param_1 + 0x30);
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = __LC37;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  auVar7._0_4_ = CONCAT22(uVar1,uVar1);
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  sVar4 = (-(ushort)(uVar1 == 0) & 0xfe) + 1;
  pVVar6 = param_1 + 0x40;
  do {
    pVVar5 = pVVar6 + 0x10;
    auVar9 = psllw(*(undefined1 (*) [16])pVVar6,8);
    auVar10._0_2_ = (ushort)((auVar9._0_2_ + sVar4) - *(short *)pVVar6) >> 9;
    auVar10._2_2_ = (ushort)((auVar9._2_2_ + sVar4) - *(short *)(pVVar6 + 2)) >> 9;
    auVar10._4_2_ = (ushort)((auVar9._4_2_ + sVar4) - *(short *)(pVVar6 + 4)) >> 9;
    auVar10._6_2_ = (ushort)((auVar9._6_2_ + sVar4) - *(short *)(pVVar6 + 6)) >> 9;
    auVar10._8_2_ = (ushort)((auVar9._8_2_ + sVar4) - *(short *)(pVVar6 + 8)) >> 9;
    auVar10._10_2_ = (ushort)((auVar9._10_2_ + sVar4) - *(short *)(pVVar6 + 10)) >> 9;
    auVar10._12_2_ = (ushort)((auVar9._12_2_ + sVar4) - *(short *)(pVVar6 + 0xc)) >> 9;
    auVar10._14_2_ = (ushort)((auVar9._14_2_ + sVar4) - *(short *)(pVVar6 + 0xe)) >> 9;
    auVar9 = psllw(auVar10,1);
    *(undefined1 (*) [16])pVVar6 = auVar9 | auVar7;
    pVVar6 = pVVar5;
  } while (param_1 + 0x70 != pVVar5);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints4(cvtt::ParallelMath::VInt16<2> (*) [3],
   cvtt::ParallelMath::VInt16<2>*) */

void cvtt::Internal::BC7Computer::CompressEndpoints4(VInt16<2> *param_1,VInt16 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
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
  VInt16<2> *pVVar17;
  VInt16<2> *pVVar18;
  long lVar19;
  VInt16<2> *pVVar20;
  VInt16<2> *pVVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  sVar16 = _UNK_0011b6ee;
  sVar15 = _UNK_0011b6ec;
  sVar14 = _UNK_0011b6ea;
  sVar13 = _UNK_0011b6e8;
  sVar12 = _UNK_0011b6e6;
  sVar11 = _UNK_0011b6e4;
  sVar10 = _UNK_0011b6e2;
  sVar9 = __LC16;
  sVar8 = _UNK_0011b6de;
  sVar7 = _UNK_0011b6dc;
  sVar6 = _UNK_0011b6da;
  sVar5 = _UNK_0011b6d8;
  sVar4 = _UNK_0011b6d6;
  sVar3 = _UNK_0011b6d4;
  sVar2 = _UNK_0011b6d2;
  sVar1 = __LC15;
  pVVar21 = param_1 + 0x30;
  lVar19 = 0;
  while( true ) {
    pVVar18 = pVVar21 + -0x30;
    do {
      pVVar20 = pVVar18 + 0x10;
      auVar22 = psllw(*(undefined1 (*) [16])pVVar18,5);
      *(ushort *)pVVar18 = (ushort)((auVar22._0_2_ + sVar1) - *(short *)pVVar18) >> 8;
      *(ushort *)(pVVar18 + 2) = (ushort)((auVar22._2_2_ + sVar2) - *(short *)(pVVar18 + 2)) >> 8;
      *(ushort *)(pVVar18 + 4) = (ushort)((auVar22._4_2_ + sVar3) - *(short *)(pVVar18 + 4)) >> 8;
      *(ushort *)(pVVar18 + 6) = (ushort)((auVar22._6_2_ + sVar4) - *(short *)(pVVar18 + 6)) >> 8;
      *(ushort *)(pVVar18 + 8) = (ushort)((auVar22._8_2_ + sVar5) - *(short *)(pVVar18 + 8)) >> 8;
      *(ushort *)(pVVar18 + 10) = (ushort)((auVar22._10_2_ + sVar6) - *(short *)(pVVar18 + 10)) >> 8
      ;
      *(ushort *)(pVVar18 + 0xc) =
           (ushort)((auVar22._12_2_ + sVar7) - *(short *)(pVVar18 + 0xc)) >> 8;
      *(ushort *)(pVVar18 + 0xe) =
           (ushort)((auVar22._14_2_ + sVar8) - *(short *)(pVVar18 + 0xe)) >> 8;
      pVVar17 = pVVar21 + -0x30;
      pVVar18 = pVVar20;
    } while (pVVar21 != pVVar20);
    do {
      pVVar18 = pVVar17 + 0x10;
      auVar22 = psllw(*(undefined1 (*) [16])pVVar17,3);
      auVar23._0_2_ = auVar22._0_2_ >> 5;
      auVar23._2_2_ = auVar22._2_2_ >> 5;
      auVar23._4_2_ = auVar22._4_2_ >> 5;
      auVar23._6_2_ = auVar22._6_2_ >> 5;
      auVar23._8_2_ = auVar22._8_2_ >> 5;
      auVar23._10_2_ = auVar22._10_2_ >> 5;
      auVar23._12_2_ = auVar22._12_2_ >> 5;
      auVar23._14_2_ = auVar22._14_2_ >> 5;
      *(undefined1 (*) [16])pVVar17 = auVar22 | auVar23;
      pVVar17 = pVVar18;
    } while (pVVar21 != pVVar18);
    pVVar21 = pVVar21 + 0x30;
    auVar23 = psllw(*(undefined1 (*) [16])param_2,6);
    auVar22._0_2_ = (ushort)((sVar9 - *(short *)param_2) + auVar23._0_2_) >> 8;
    auVar22._2_2_ = (ushort)((sVar10 - *(short *)(param_2 + 2)) + auVar23._2_2_) >> 8;
    auVar22._4_2_ = (ushort)((sVar11 - *(short *)(param_2 + 4)) + auVar23._4_2_) >> 8;
    auVar22._6_2_ = (ushort)((sVar12 - *(short *)(param_2 + 6)) + auVar23._6_2_) >> 8;
    auVar22._8_2_ = (ushort)((sVar13 - *(short *)(param_2 + 8)) + auVar23._8_2_) >> 8;
    auVar22._10_2_ = (ushort)((sVar14 - *(short *)(param_2 + 10)) + auVar23._10_2_) >> 8;
    auVar22._12_2_ = (ushort)((sVar15 - *(short *)(param_2 + 0xc)) + auVar23._12_2_) >> 8;
    auVar22._14_2_ = (ushort)((sVar16 - *(short *)(param_2 + 0xe)) + auVar23._14_2_) >> 8;
    auVar22 = psllw(auVar22,2);
    auVar24._0_2_ = auVar22._0_2_ >> 6;
    auVar24._2_2_ = auVar22._2_2_ >> 6;
    auVar24._4_2_ = auVar22._4_2_ >> 6;
    auVar24._6_2_ = auVar22._6_2_ >> 6;
    auVar24._8_2_ = auVar22._8_2_ >> 6;
    auVar24._10_2_ = auVar22._10_2_ >> 6;
    auVar24._12_2_ = auVar22._12_2_ >> 6;
    auVar24._14_2_ = auVar22._14_2_ >> 6;
    *(undefined1 (*) [16])param_2 = auVar22 | auVar24;
    if (lVar19 == 0x30) break;
    lVar19 = 0x30;
    param_2 = param_2 + 0x10;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::CompressEndpoints5(cvtt::ParallelMath::VInt16<2> (*) [3],
   cvtt::ParallelMath::VInt16<2>*) */

void cvtt::Internal::BC7Computer::CompressEndpoints5(VInt16<2> *param_1,VInt16 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  VInt16<2> *pVVar9;
  VInt16<2> *pVVar10;
  VInt16<2> *pVVar11;
  VInt16<2> *pVVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  sVar8 = _UNK_0011b6fe;
  sVar7 = _UNK_0011b6fc;
  sVar6 = _UNK_0011b6fa;
  sVar5 = _UNK_0011b6f8;
  sVar4 = _UNK_0011b6f6;
  sVar3 = _UNK_0011b6f4;
  sVar2 = _UNK_0011b6f2;
  sVar1 = __LC17;
  pVVar11 = param_1 + 0x30;
  do {
    pVVar10 = pVVar11 + -0x30;
    do {
      pVVar12 = pVVar10 + 0x10;
      auVar13 = psllw(*(undefined1 (*) [16])pVVar10,7);
      *(ushort *)pVVar10 = (ushort)((auVar13._0_2_ + sVar1) - *(short *)pVVar10) >> 8;
      *(ushort *)(pVVar10 + 2) = (ushort)((auVar13._2_2_ + sVar2) - *(short *)(pVVar10 + 2)) >> 8;
      *(ushort *)(pVVar10 + 4) = (ushort)((auVar13._4_2_ + sVar3) - *(short *)(pVVar10 + 4)) >> 8;
      *(ushort *)(pVVar10 + 6) = (ushort)((auVar13._6_2_ + sVar4) - *(short *)(pVVar10 + 6)) >> 8;
      *(ushort *)(pVVar10 + 8) = (ushort)((auVar13._8_2_ + sVar5) - *(short *)(pVVar10 + 8)) >> 8;
      *(ushort *)(pVVar10 + 10) = (ushort)((auVar13._10_2_ + sVar6) - *(short *)(pVVar10 + 10)) >> 8
      ;
      *(ushort *)(pVVar10 + 0xc) =
           (ushort)((auVar13._12_2_ + sVar7) - *(short *)(pVVar10 + 0xc)) >> 8;
      *(ushort *)(pVVar10 + 0xe) =
           (ushort)((auVar13._14_2_ + sVar8) - *(short *)(pVVar10 + 0xe)) >> 8;
      pVVar9 = pVVar11 + -0x30;
      pVVar10 = pVVar12;
    } while (pVVar11 != pVVar12);
    do {
      pVVar10 = pVVar9 + 0x10;
      auVar13 = psllw(*(undefined1 (*) [16])pVVar9,1);
      auVar14._0_2_ = auVar13._0_2_ >> 7;
      auVar14._2_2_ = auVar13._2_2_ >> 7;
      auVar14._4_2_ = auVar13._4_2_ >> 7;
      auVar14._6_2_ = auVar13._6_2_ >> 7;
      auVar14._8_2_ = auVar13._8_2_ >> 7;
      auVar14._10_2_ = auVar13._10_2_ >> 7;
      auVar14._12_2_ = auVar13._12_2_ >> 7;
      auVar14._14_2_ = auVar13._14_2_ >> 7;
      *(undefined1 (*) [16])pVVar9 = auVar13 | auVar14;
      pVVar9 = pVVar10;
    } while (pVVar11 != pVVar10);
    pVVar11 = pVVar11 + 0x30;
  } while (param_1 + 0x90 != pVVar11);
  return;
}



/* cvtt::Internal::BC7Computer::CompressEndpoints6(cvtt::ParallelMath::VInt16<2> (*) [4], unsigned
   short*) */

void cvtt::Internal::BC7Computer::CompressEndpoints6(VInt16<2> *param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  VInt16<2> *pVVar3;
  VInt16<2> *pVVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar1 = *param_2;
  auVar7._0_4_ = CONCAT22(uVar1,uVar1);
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  sVar2 = (-(ushort)(uVar1 == 0) & 0xfe) + 1;
  pVVar4 = param_1;
  do {
    pVVar3 = pVVar4 + 0x10;
    auVar5 = psllw(*(undefined1 (*) [16])pVVar4,8);
    auVar6._0_2_ = (ushort)((auVar5._0_2_ + sVar2) - *(short *)pVVar4) >> 9;
    auVar6._2_2_ = (ushort)((auVar5._2_2_ + sVar2) - *(short *)(pVVar4 + 2)) >> 9;
    auVar6._4_2_ = (ushort)((auVar5._4_2_ + sVar2) - *(short *)(pVVar4 + 4)) >> 9;
    auVar6._6_2_ = (ushort)((auVar5._6_2_ + sVar2) - *(short *)(pVVar4 + 6)) >> 9;
    auVar6._8_2_ = (ushort)((auVar5._8_2_ + sVar2) - *(short *)(pVVar4 + 8)) >> 9;
    auVar6._10_2_ = (ushort)((auVar5._10_2_ + sVar2) - *(short *)(pVVar4 + 10)) >> 9;
    auVar6._12_2_ = (ushort)((auVar5._12_2_ + sVar2) - *(short *)(pVVar4 + 0xc)) >> 9;
    auVar6._14_2_ = (ushort)((auVar5._14_2_ + sVar2) - *(short *)(pVVar4 + 0xe)) >> 9;
    auVar5 = psllw(auVar6,1);
    *(undefined1 (*) [16])pVVar4 = auVar5 | auVar7;
    pVVar4 = pVVar3;
  } while (pVVar3 != param_1 + 0x40);
  uVar1 = param_2[1];
  auVar5._0_4_ = CONCAT22(uVar1,uVar1);
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  sVar2 = (-(ushort)(uVar1 == 0) & 0xfe) + 1;
  do {
    pVVar4 = pVVar3 + 0x10;
    auVar7 = psllw(*(undefined1 (*) [16])pVVar3,8);
    auVar8._0_2_ = (ushort)((auVar7._0_2_ + sVar2) - *(short *)pVVar3) >> 9;
    auVar8._2_2_ = (ushort)((auVar7._2_2_ + sVar2) - *(short *)(pVVar3 + 2)) >> 9;
    auVar8._4_2_ = (ushort)((auVar7._4_2_ + sVar2) - *(short *)(pVVar3 + 4)) >> 9;
    auVar8._6_2_ = (ushort)((auVar7._6_2_ + sVar2) - *(short *)(pVVar3 + 6)) >> 9;
    auVar8._8_2_ = (ushort)((auVar7._8_2_ + sVar2) - *(short *)(pVVar3 + 8)) >> 9;
    auVar8._10_2_ = (ushort)((auVar7._10_2_ + sVar2) - *(short *)(pVVar3 + 10)) >> 9;
    auVar8._12_2_ = (ushort)((auVar7._12_2_ + sVar2) - *(short *)(pVVar3 + 0xc)) >> 9;
    auVar8._14_2_ = (ushort)((auVar7._14_2_ + sVar2) - *(short *)(pVVar3 + 0xe)) >> 9;
    auVar7 = psllw(auVar8,1);
    *(undefined1 (*) [16])pVVar3 = auVar7 | auVar5;
    pVVar3 = pVVar4;
  } while (param_1 + 0x80 != pVVar4);
  return;
}



/* cvtt::Internal::BC7Computer::CompressEndpoints7(cvtt::ParallelMath::VInt16<2> (*) [4], unsigned
   short*) */

void cvtt::Internal::BC7Computer::CompressEndpoints7(VInt16<2> *param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  VInt16<2> *pVVar3;
  VInt16<2> *pVVar4;
  long lVar5;
  VInt16<2> *pVVar6;
  VInt16<2> *pVVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  pVVar7 = param_1 + 0x40;
  lVar5 = 0;
  while( true ) {
    uVar1 = param_2[lVar5];
    auVar10._0_4_ = CONCAT22(uVar1,uVar1);
    auVar10._4_4_ = auVar10._0_4_;
    auVar10._8_4_ = auVar10._0_4_;
    auVar10._12_4_ = auVar10._0_4_;
    sVar2 = (-(ushort)(uVar1 == 0) & 0xf8) + 7;
    pVVar4 = pVVar7 + -0x40;
    do {
      pVVar6 = pVVar4 + 0x10;
      auVar8 = psllw(*(undefined1 (*) [16])pVVar4,6);
      auVar9._0_2_ = (ushort)((auVar8._0_2_ + sVar2) - *(short *)pVVar4) >> 9;
      auVar9._2_2_ = (ushort)((auVar8._2_2_ + sVar2) - *(short *)(pVVar4 + 2)) >> 9;
      auVar9._4_2_ = (ushort)((auVar8._4_2_ + sVar2) - *(short *)(pVVar4 + 4)) >> 9;
      auVar9._6_2_ = (ushort)((auVar8._6_2_ + sVar2) - *(short *)(pVVar4 + 6)) >> 9;
      auVar9._8_2_ = (ushort)((auVar8._8_2_ + sVar2) - *(short *)(pVVar4 + 8)) >> 9;
      auVar9._10_2_ = (ushort)((auVar8._10_2_ + sVar2) - *(short *)(pVVar4 + 10)) >> 9;
      auVar9._12_2_ = (ushort)((auVar8._12_2_ + sVar2) - *(short *)(pVVar4 + 0xc)) >> 9;
      auVar9._14_2_ = (ushort)((auVar8._14_2_ + sVar2) - *(short *)(pVVar4 + 0xe)) >> 9;
      auVar8 = psllw(auVar9,1);
      *(undefined1 (*) [16])pVVar4 = auVar8 | auVar10;
      pVVar3 = pVVar7 + -0x40;
      pVVar4 = pVVar6;
    } while (pVVar7 != pVVar6);
    do {
      pVVar4 = pVVar3 + 0x10;
      auVar10 = psllw(*(undefined1 (*) [16])pVVar3,2);
      auVar8._0_2_ = auVar10._0_2_ >> 6;
      auVar8._2_2_ = auVar10._2_2_ >> 6;
      auVar8._4_2_ = auVar10._4_2_ >> 6;
      auVar8._6_2_ = auVar10._6_2_ >> 6;
      auVar8._8_2_ = auVar10._8_2_ >> 6;
      auVar8._10_2_ = auVar10._10_2_ >> 6;
      auVar8._12_2_ = auVar10._12_2_ >> 6;
      auVar8._14_2_ = auVar10._14_2_ >> 6;
      *(undefined1 (*) [16])pVVar3 = auVar10 | auVar8;
      pVVar3 = pVVar4;
    } while (pVVar7 != pVVar4);
    pVVar7 = pVVar7 + 0x40;
    if (lVar5 != 0) break;
    lVar5 = 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::TrySingleColorRGBAMultiTable(unsigned int,
   cvtt::ParallelMath::VInt16<2> const (*) [4], cvtt::ParallelMath::Float const*, int, unsigned char
   const*, int, cvtt::ParallelMath::Float const&, cvtt::ParallelMath::Int16CompFlag const*,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2> (*) [4],
   cvtt::ParallelMath::VInt16<2>*, float const*, cvtt::Tables::BC7SC::Table const* const*, int,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::BC7Computer::TrySingleColorRGBAMultiTable
               (uint param_1,VInt16<2> *param_2,Float *param_3,int param_4,uchar *param_5,
               int param_6,Float *param_7,Int16CompFlag *param_8,Float *param_9,VInt16<2> *param_10,
               VInt16 *param_11,float *param_12,Table **param_13,int param_14,
               RoundTowardNearestForScope *param_15)

{
  Table **ppTVar1;
  VInt16<2> *pVVar2;
  long lVar3;
  float fVar4;
  Table TVar5;
  byte bVar6;
  Table *pTVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  uint3 uVar10;
  undefined1 auVar11 [14];
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  float *pfVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  undefined1 (*pauVar31) [16];
  VInt16 *pVVar32;
  VInt16 *pVVar33;
  int *piVar34;
  Float *pFVar35;
  long lVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  byte *pbVar39;
  long in_FS_OFFSET;
  short sVar40;
  float fVar41;
  float fVar42;
  float fVar47;
  ushort uVar50;
  float fVar51;
  undefined1 auVar43 [16];
  float fVar53;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  short sVar49;
  float fVar48;
  float fVar52;
  float fVar54;
  undefined1 auVar46 [16];
  float fVar55;
  uint uVar56;
  float fVar57;
  float fVar63;
  float fVar66;
  undefined1 auVar58 [12];
  uint uVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar62 [16];
  float fVar70;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar71 [16];
  float fVar75;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 local_208 [64];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [48];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  pFVar35 = param_3 + 0x10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pauVar29 = (undefined1 (*) [16])local_208;
  do {
    auVar43._0_4_ = (int)*(float *)(pFVar35 + -0x10);
    auVar43._4_4_ = (int)*(float *)(pFVar35 + -0xc);
    auVar43._8_4_ = (int)*(float *)(pFVar35 + -8);
    auVar43._12_4_ = (int)*(float *)(pFVar35 + -4);
    auVar45._0_4_ = (int)*(float *)pFVar35;
    auVar45._4_4_ = (int)*(float *)(pFVar35 + 4);
    auVar45._8_4_ = (int)*(float *)(pFVar35 + 8);
    auVar45._12_4_ = (int)*(float *)(pFVar35 + 0xc);
    auVar43 = packssdw(auVar43,auVar45);
    pauVar37 = pauVar29 + 1;
    *pauVar29 = auVar43;
    pFVar35 = pFVar35 + 0x20;
    pauVar29 = pauVar37;
  } while (&local_1c8 != pauVar37);
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = __LC37;
  uStack_110 = _UNK_0011b6c8;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = __LC37;
  uStack_d0 = _UNK_0011b6c8;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = __LC37;
  uStack_190 = _UNK_0011b6c8;
  if (param_14 < 1) {
    auVar43 = (undefined1  [16])0x0;
  }
  else {
    auVar43 = (undefined1  [16])0x0;
    ppTVar1 = param_13 + param_14;
    lVar36 = (long)param_4;
    fVar54 = _LC19;
    fVar42 = _LC19;
    fVar48 = _LC19;
    fVar52 = _LC19;
    fVar57 = _LC19;
    fVar65 = _LC19;
    fVar67 = _LC19;
    fVar69 = _LC19;
    do {
      pTVar7 = *param_13;
      auVar45 = *(undefined1 (*) [16])(param_8 + (ulong)(byte)pTVar7[1] * 0x10);
      pauVar29 = &local_c8;
      pauVar37 = &local_188;
      pauVar31 = (undefined1 (*) [16])local_208;
      do {
        lVar26 = 0;
        if (0 < param_4) {
          do {
            uVar50 = *(ushort *)(*pauVar31 + lVar26);
            *(ushort *)(*pauVar29 + lVar26) = (ushort)(byte)pTVar7[(ulong)uVar50 * 3 + 2];
            TVar5 = pTVar7[(ulong)uVar50 * 3 + 4];
            *(ushort *)(pauVar29[4] + lVar26) = (ushort)(byte)pTVar7[(ulong)uVar50 * 3 + 3];
            *(ushort *)(*pauVar37 + lVar26) = (ushort)(byte)TVar5;
            lVar26 = lVar26 + 0x10;
          } while (lVar36 * 0x10 != lVar26);
        }
        pauVar37 = (undefined1 (*) [16])(*pauVar37 + 2);
        pauVar31 = (undefined1 (*) [16])(*pauVar31 + 2);
        pauVar29 = (undefined1 (*) [16])(*pauVar29 + 2);
      } while ((undefined1 (*) [16])local_178 != pauVar37);
      if (param_4 < 1) {
        fVar70 = 0.0;
        fVar72 = 0.0;
        fVar73 = 0.0;
        fVar74 = 0.0;
        fVar75 = 0.0;
        fVar78 = 0.0;
        fVar79 = 0.0;
        fVar80 = 0.0;
      }
      else {
        fVar70 = 0.0;
        fVar72 = 0.0;
        fVar73 = 0.0;
        fVar74 = 0.0;
        fVar75 = 0.0;
        fVar78 = 0.0;
        fVar79 = 0.0;
        fVar80 = 0.0;
        pfVar27 = param_12;
        pFVar35 = param_3;
        pauVar29 = &local_188;
        do {
          auVar44 = *pauVar29;
          pfVar28 = pfVar27 + 1;
          pauVar29 = pauVar29 + 1;
          fVar4 = *pfVar27;
          auVar8._10_2_ = 0;
          auVar8._0_10_ = auVar44._0_10_;
          auVar8._12_2_ = auVar44._6_2_;
          auVar11._8_2_ = auVar44._4_2_;
          auVar11._0_8_ = auVar44._0_8_;
          auVar11._10_4_ = auVar8._10_4_;
          auVar20._6_8_ = 0;
          auVar20._0_6_ = auVar11._8_6_;
          fVar41 = (float)auVar44._8_2_ - *(float *)(pFVar35 + 0x10);
          fVar47 = (float)auVar44._10_2_ - *(float *)(pFVar35 + 0x14);
          fVar51 = (float)auVar44._12_2_ - *(float *)(pFVar35 + 0x18);
          fVar53 = (float)auVar44._14_2_ - *(float *)(pFVar35 + 0x1c);
          fVar55 = (float)auVar44._0_2_ - *(float *)pFVar35;
          fVar63 = (float)(int)CONCAT82(SUB148(auVar20 << 0x40,6),auVar44._2_2_) -
                   *(float *)(pFVar35 + 4);
          fVar66 = (float)auVar11._8_4_ - *(float *)(pFVar35 + 8);
          fVar68 = (float)(auVar8._10_4_ >> 0x10) - *(float *)(pFVar35 + 0xc);
          fVar70 = fVar70 + fVar41 * fVar41 * fVar4;
          fVar72 = fVar72 + fVar47 * fVar47 * fVar4;
          fVar73 = fVar73 + fVar51 * fVar51 * fVar4;
          fVar74 = fVar74 + fVar53 * fVar53 * fVar4;
          fVar75 = fVar75 + fVar55 * fVar55 * fVar4;
          fVar78 = fVar78 + fVar63 * fVar63 * fVar4;
          fVar79 = fVar79 + fVar66 * fVar66 * fVar4;
          fVar80 = fVar80 + fVar68 * fVar68 * fVar4;
          pfVar27 = pfVar28;
          pFVar35 = pFVar35 + 0x20;
        } while (param_12 + lVar36 != pfVar28);
      }
      auVar77._4_4_ = -(uint)(fVar72 < fVar65);
      auVar77._0_4_ = -(uint)(fVar70 < fVar57);
      auVar77._8_4_ = -(uint)(fVar73 < fVar67);
      auVar77._12_4_ = -(uint)(fVar74 < fVar69);
      auVar44._4_4_ = -(uint)(fVar78 < fVar42);
      auVar44._0_4_ = -(uint)(fVar75 < fVar54);
      auVar44._8_4_ = -(uint)(fVar79 < fVar48);
      auVar44._12_4_ = -(uint)(fVar80 < fVar52);
      auVar44 = packssdw(auVar44,auVar77);
      auVar45 = ~auVar44 & auVar45;
      if ((((((((((((((((auVar45 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar45 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar45 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar45 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar45 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar45 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar45 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar45 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar45 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar45 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar45 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar45 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar45 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar45 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar45 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar45[0xf] < '\0'
         ) {
        auVar82._0_12_ = auVar45._0_12_;
        auVar82._12_2_ = auVar45._6_2_;
        auVar82._14_2_ = auVar45._6_2_;
        auVar60._12_4_ = auVar82._12_4_;
        auVar60._0_10_ = auVar45._0_10_;
        auVar60._10_2_ = auVar45._4_2_;
        auVar59._10_6_ = auVar60._10_6_;
        auVar59._0_8_ = auVar45._0_8_;
        auVar59._8_2_ = auVar45._4_2_;
        auVar22._4_8_ = auVar59._8_8_;
        auVar22._2_2_ = auVar45._2_2_;
        auVar22._0_2_ = auVar45._2_2_;
        uVar56 = CONCAT22(auVar45._0_2_,auVar45._0_2_);
        fVar54 = (float)(~uVar56 & (uint)fVar54 | (uint)fVar75 & uVar56);
        fVar42 = (float)(~auVar22._0_4_ & (uint)fVar42 | (uint)fVar78 & auVar22._0_4_);
        fVar48 = (float)(~auVar59._8_4_ & (uint)fVar48 | (uint)fVar79 & auVar59._8_4_);
        fVar52 = (float)(~auVar60._12_4_ & (uint)fVar52 | (uint)fVar80 & auVar60._12_4_);
        uVar56 = CONCAT22(auVar45._8_2_,auVar45._8_2_);
        auVar58._0_8_ = CONCAT26(auVar45._10_2_,CONCAT24(auVar45._10_2_,uVar56));
        auVar58._8_2_ = auVar45._12_2_;
        auVar58._10_2_ = auVar45._12_2_;
        auVar61._14_2_ = auVar45._14_2_;
        auVar61._12_2_ = auVar61._14_2_;
        auVar61._0_12_ = auVar58;
        uVar64 = (uint)((ulong)auVar58._0_8_ >> 0x20);
        fVar57 = (float)(~uVar56 & (uint)fVar57 | (uint)fVar70 & uVar56);
        fVar65 = (float)(~uVar64 & (uint)fVar65 | (uint)fVar72 & uVar64);
        fVar67 = (float)(~auVar58._8_4_ & (uint)fVar67 | (uint)fVar73 & auVar58._8_4_);
        fVar69 = (float)(~auVar61._12_4_ & (uint)fVar69 | (uint)fVar74 & auVar61._12_4_);
        uVar10 = CONCAT12(*pTVar7,(ushort)(byte)*pTVar7);
        auVar81[3] = 0;
        auVar81._0_3_ = uVar10;
        auVar81._4_3_ = uVar10;
        auVar81[7] = 0;
        auVar81._8_3_ = uVar10;
        auVar81[0xb] = 0;
        auVar81._12_3_ = uVar10;
        auVar81[0xf] = 0;
        auVar43 = auVar81 & auVar45 | ~auVar45 & auVar43;
        pauVar29 = &local_188;
        pauVar37 = &local_1c8;
        if (0 < param_4) {
          do {
            pauVar30 = pauVar29 + 1;
            *pauVar37 = *pauVar29 & auVar45 | ~auVar45 & *pauVar37;
            pauVar31 = &local_c8;
            pauVar29 = pauVar30;
            pauVar38 = &local_148;
            pauVar37 = pauVar37 + 1;
          } while (&local_188 + lVar36 != pauVar30);
          do {
            pauVar29 = pauVar31 + 1;
            *pauVar38 = *pauVar31 & auVar45 | ~auVar45 & *pauVar38;
            pauVar31 = pauVar29;
            pauVar38 = pauVar38 + 1;
          } while (&local_c8 + lVar36 != pauVar29);
          lVar26 = 0;
          do {
            pauVar29 = (undefined1 (*) [16])(local_108 + lVar26);
            pauVar37 = (undefined1 (*) [16])(local_88 + lVar26);
            lVar26 = lVar26 + 0x10;
            *pauVar29 = *pauVar37 & auVar45 | ~auVar45 & *pauVar29;
          } while (lVar36 * 0x10 != lVar26);
        }
      }
      param_13 = param_13 + 1;
    } while (ppTVar1 != param_13);
  }
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (0 < param_6) {
    pbVar39 = param_5 + param_6;
    do {
      if (0 < param_4) {
        bVar6 = *param_5;
        while( true ) {
          lVar36 = 0;
          piVar34 = (int *)local_c8;
          do {
            sVar12 = *(short *)(local_1c8 + lVar36 + 2);
            lVar26 = lVar36 + 4;
            lVar3 = lVar36 + 6;
            lVar25 = lVar36 + 8;
            sVar13 = *(short *)(local_1c8 + lVar36 + 10);
            sVar14 = *(short *)(local_1c8 + lVar36 + 0xc);
            sVar15 = *(short *)(local_1c8 + lVar36 + 0xe);
            pVVar2 = param_2 + lVar36 + (ulong)bVar6 * 0x40;
            sVar16 = *(short *)(pVVar2 + 2);
            sVar17 = *(short *)(pVVar2 + 10);
            sVar18 = *(short *)(pVVar2 + 0xc);
            sVar19 = *(short *)(pVVar2 + 0xe);
            sVar40 = *(short *)(*&local_1c8 + lVar36) - *(short *)pVVar2;
            lVar36 = lVar36 + 0x10;
            sVar49 = (*(short *)(local_1c8 + lVar3) - *(short *)(pVVar2 + 6)) *
                     (*(short *)(local_1c8 + lVar3) - *(short *)(pVVar2 + 6));
            uVar50 = (*(short *)(local_1c8 + lVar25) - *(short *)(pVVar2 + 8)) *
                     (*(short *)(local_1c8 + lVar25) - *(short *)(pVVar2 + 8));
            auVar23._2_2_ = uVar50;
            auVar23._0_2_ = sVar49;
            auVar23._4_8_ = 0;
            auVar9._12_2_ = sVar49;
            auVar9._0_12_ = auVar23 << 0x30;
            uVar24 = CONCAT44(auVar9._10_4_,
                              CONCAT22((*(short *)(local_1c8 + lVar26) - *(short *)(pVVar2 + 4)) *
                                       (*(short *)(local_1c8 + lVar26) - *(short *)(pVVar2 + 4)),
                                       sVar49));
            auVar21._6_8_ = 0;
            auVar21._0_6_ = (uint6)((ulong)uVar24 >> 0x10);
            piVar34[4] = (uint)uVar50 + piVar34[4];
            piVar34[5] = (uint)(ushort)((sVar13 - sVar17) * (sVar13 - sVar17)) + piVar34[5];
            piVar34[6] = (uint)(ushort)((sVar14 - sVar18) * (sVar14 - sVar18)) + piVar34[6];
            piVar34[7] = (uint)(ushort)((sVar15 - sVar19) * (sVar15 - sVar19)) + piVar34[7];
            *piVar34 = (uint)(ushort)(sVar40 * sVar40) + *piVar34;
            piVar34[1] = (int)CONCAT82(SUB148(auVar21 << 0x40,6),
                                       (sVar12 - sVar16) * (sVar12 - sVar16)) + piVar34[1];
            piVar34[2] = (int)((ulong)uVar24 >> 0x10) + piVar34[2];
            piVar34[3] = (auVar9._10_4_ >> 0x10) + piVar34[3];
            piVar34 = piVar34 + 8;
          } while (lVar36 != (long)param_4 * 0x10);
          param_5 = param_5 + 1;
          if (param_5 == pbVar39) break;
          bVar6 = *param_5;
        }
        break;
      }
      param_5 = param_5 + 1;
    } while (pbVar39 != param_5);
  }
  if ((param_1 & 0x200) == 0) {
    fVar54 = *param_12;
    lVar36 = 0;
    fVar57 = (float)(int)local_c8._0_4_ * fVar54;
    fVar65 = (float)(int)local_c8._4_4_ * fVar54;
    fVar67 = (float)(int)local_c8._8_4_ * fVar54;
    fVar69 = (float)(int)local_c8._12_4_ * fVar54;
    fVar42 = (float)(int)local_b8._0_4_ * fVar54;
    fVar48 = (float)(int)local_b8._4_4_ * fVar54;
    fVar52 = (float)(int)local_b8._8_4_ * fVar54;
    fVar54 = (float)(int)local_b8._12_4_ * fVar54;
    do {
      fVar70 = *(float *)((long)param_12 + lVar36 + 4);
      lVar26 = lVar36 * 8;
      lVar3 = lVar36 * 8;
      lVar36 = lVar36 + 4;
      fVar57 = fVar57 + (float)*(int *)(local_a8 + lVar26) * fVar70;
      fVar65 = fVar65 + (float)*(int *)(local_a8 + lVar26 + 4) * fVar70;
      fVar67 = fVar67 + (float)*(int *)(local_a8 + lVar26 + 8) * fVar70;
      fVar69 = fVar69 + (float)*(int *)(local_98 + lVar26 + -4) * fVar70;
      fVar42 = fVar42 + (float)*(int *)(local_98 + lVar3) * fVar70;
      fVar48 = fVar48 + (float)*(int *)(local_98 + lVar3 + 4) * fVar70;
      fVar52 = fVar52 + (float)*(int *)(local_98 + lVar3 + 8) * fVar70;
      fVar54 = fVar54 + (float)*(int *)(local_88 + lVar3 + -4) * fVar70;
    } while (lVar36 != 0xc);
  }
  else {
    fVar57 = (float)(int)(local_68._0_4_ + local_88._0_4_ + local_c8._0_4_ + local_a8._0_4_);
    fVar65 = (float)(int)(local_68._4_4_ + local_88._4_4_ + local_c8._4_4_ + local_a8._4_4_);
    fVar67 = (float)(int)(local_68._8_4_ + local_88._8_4_ + local_c8._8_4_ + local_a8._8_4_);
    fVar69 = (float)(int)(local_68._12_4_ + local_88._12_4_ + local_c8._12_4_ + local_a8._12_4_);
    fVar42 = (float)(int)(local_98._0_4_ + local_b8._0_4_ + local_78._0_4_ + local_58._0_4_);
    fVar48 = (float)(int)(local_98._4_4_ + local_b8._4_4_ + local_78._4_4_ + local_58._4_4_);
    fVar52 = (float)(int)(local_98._8_4_ + local_b8._8_4_ + local_78._8_4_ + local_58._8_4_);
    fVar54 = (float)(int)(local_98._12_4_ + local_b8._12_4_ + local_78._12_4_ + local_58._12_4_);
  }
  auVar62._0_4_ = fVar57 + *(float *)param_7;
  auVar62._4_4_ = fVar65 + *(float *)(param_7 + 4);
  auVar62._8_4_ = fVar67 + *(float *)(param_7 + 8);
  auVar62._12_4_ = fVar69 + *(float *)(param_7 + 0xc);
  auVar46._0_4_ = fVar42 + *(float *)(param_7 + 0x10);
  auVar46._4_4_ = fVar48 + *(float *)(param_7 + 0x14);
  auVar46._8_4_ = fVar52 + *(float *)(param_7 + 0x18);
  auVar46._12_4_ = fVar54 + *(float *)(param_7 + 0x1c);
  auVar45 = *(undefined1 (*) [16])param_9;
  auVar44 = *(undefined1 (*) [16])(param_9 + 0x10);
  auVar76._4_4_ = -(uint)(auVar62._4_4_ < auVar45._4_4_);
  auVar76._0_4_ = -(uint)(auVar62._0_4_ < auVar45._0_4_);
  auVar76._8_4_ = -(uint)(auVar62._8_4_ < auVar45._8_4_);
  auVar76._12_4_ = -(uint)(auVar62._12_4_ < auVar45._12_4_);
  auVar71._4_4_ = -(uint)(auVar46._4_4_ < auVar44._4_4_);
  auVar71._0_4_ = -(uint)(auVar46._0_4_ < auVar44._0_4_);
  auVar71._8_4_ = -(uint)(auVar46._8_4_ < auVar44._8_4_);
  auVar71._12_4_ = -(uint)(auVar46._12_4_ < auVar44._12_4_);
  auVar77 = packssdw(auVar76,auVar71);
  if ((((((((((((((((auVar77 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar77 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar77 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar77 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar77 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar77 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar77 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar77 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar77 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar77 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar77 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar77 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar77 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar77 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar77 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar77[0xf] < '\0') {
    auVar82 = minps(auVar45,auVar62);
    auVar45 = minps(auVar44,auVar46);
    *(undefined1 (*) [16])param_9 = auVar82;
    *(undefined1 (*) [16])(param_9 + 0x10) = auVar45;
    if (0 < param_4) {
      lVar36 = 0;
      do {
        *(undefined1 (*) [16])(param_10 + lVar36) =
             *(undefined1 (*) [16])(local_148 + lVar36) & auVar77 |
             ~auVar77 & *(undefined1 (*) [16])(param_10 + lVar36);
        lVar36 = lVar36 + 0x10;
      } while ((long)param_4 * 0x10 != lVar36);
      lVar36 = 0;
      do {
        *(undefined1 (*) [16])(param_10 + lVar36 + 0x40) =
             *(undefined1 (*) [16])(local_108 + lVar36) & auVar77 |
             ~auVar77 & *(undefined1 (*) [16])(param_10 + lVar36 + 0x40);
        lVar36 = lVar36 + 0x10;
      } while ((long)param_4 * 0x10 != lVar36);
    }
    if (0 < param_6) {
      pVVar32 = param_11;
      do {
        pVVar33 = pVVar32 + 0x10;
        *(undefined1 (*) [16])pVVar32 = ~auVar77 & *(undefined1 (*) [16])pVVar32 | auVar43 & auVar77
        ;
        pVVar32 = pVVar33;
      } while (pVVar33 != param_11 + (long)param_6 * 0x10);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::BC7Computer::UnpackOne(cvtt::PixelBlockU8&, unsigned char const*) */

void cvtt::Internal::BC7Computer::UnpackOne(PixelBlockU8 *param_1,uchar *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong *puVar22;
  ulong *puVar23;
  byte bVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  ulong *puVar28;
  long in_FS_OFFSET;
  undefined1 auVar29 [16];
  int local_1a0;
  uint local_19c;
  uint local_178;
  int local_174;
  uint local_168;
  int local_150;
  int local_14c;
  uint local_148 [4];
  uint local_138;
  byte bStack_134;
  uint local_130;
  uint local_12c;
  uint local_128 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  ulong local_a8;
  int local_9c [4];
  int local_8c;
  ulong local_88 [9];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[0] = (uint)*param_2;
  lVar9 = 1;
  do {
    uVar26 = (uint)lVar9;
    pbVar1 = param_2 + lVar9;
    lVar9 = lVar9 + 1;
    local_148[(int)uVar26 >> 2] =
         local_148[(int)uVar26 >> 2] | (uint)*pbVar1 << (sbyte)((uVar26 & 3) << 3);
  } while (lVar9 != 0x10);
  iVar21 = 0;
  puVar16 = local_148 + 3;
  while( true ) {
    uVar26 = local_148[0];
    local_148[0] = local_148[0] >> 1;
    puVar10 = local_148;
    uVar8 = local_148[0];
    do {
      uVar17 = puVar10[1];
      puVar11 = puVar10 + 1;
      uVar18 = uVar17 >> 1;
      *puVar11 = uVar18;
      *puVar10 = uVar8 | uVar17 << 0x1f;
      puVar10 = puVar11;
      uVar8 = uVar18;
    } while (puVar11 != puVar16);
    if ((uVar26 & 1) != 0) break;
    iVar21 = iVar21 + 1;
    if (iVar21 == 8) {
      *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
LAB_00101440:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  lVar9 = (long)iVar21;
  local_168 = (&DAT_0010c5d0)[lVar9 * 9];
  if (local_168 != 0) {
    bVar3 = (byte)local_168;
    uVar8 = (1 << (bVar3 & 0x1f)) - 1;
    local_168 = uVar8 & local_148[0];
    uVar26 = local_148[0] >> (bVar3 & 0x1f);
    local_148[0] = uVar26;
    puVar10 = local_148;
    do {
      puVar11 = puVar10 + 1;
      uVar17 = (uVar8 & puVar10[1]) << (0x20 - bVar3 & 0x1f) | uVar26;
      uVar26 = puVar10[1] >> (bVar3 & 0x1f);
      *puVar10 = uVar17;
      *puVar11 = uVar26;
      puVar10 = puVar11;
    } while (puVar11 != puVar16);
    local_168 = local_168 & 0xffff;
  }
  local_19c = local_148[0];
  iVar21 = *(int *)(&DAT_0010c5c4 + lVar9 * 0x24);
  cVar2 = (&DAT_0010c5e0)[lVar9 * 0x24];
  if (iVar21 == 1) {
    local_148[0] = local_148[0] >> 2;
    local_19c = local_19c & 3;
    puVar10 = local_148;
    uVar26 = local_148[0];
    do {
      uVar8 = puVar10[1];
      puVar11 = puVar10 + 1;
      uVar17 = uVar8 >> 2;
      *puVar11 = uVar17;
      *puVar10 = uVar8 << 0x1e | uVar26;
      puVar10 = puVar11;
      uVar26 = uVar17;
    } while (puVar11 != puVar16);
    local_174 = *(int *)(&DAT_0010c5d4 + lVar9 * 0x24);
    local_178 = local_148[0];
    if (cVar2 != '\0') goto LAB_00101639;
    local_178 = 0;
    local_14c = 0;
    local_150 = 0;
  }
  else {
    if (cVar2 == '\0') {
      local_178 = 0;
      local_19c = 0;
    }
    else {
      local_19c = 0;
      local_178 = local_148[0];
LAB_00101639:
      uVar26 = local_178 >> 1;
      local_148[0] = uVar26;
      local_178 = local_178 & 1;
      puVar10 = local_148;
      do {
        puVar11 = puVar10 + 1;
        uVar8 = puVar10[1] << 0x1f | uVar26;
        uVar26 = puVar10[1] >> 1;
        *puVar10 = uVar8;
        *puVar11 = uVar26;
        puVar10 = puVar11;
      } while (puVar11 != puVar16);
      local_174 = *(int *)(&DAT_0010c5d4 + lVar9 * 0x24);
      if (iVar21 == 1) {
        local_14c = 0;
        local_150 = 0;
        goto LAB_00101528;
      }
    }
    local_174 = *(int *)(&DAT_0010c5d4 + lVar9 * 0x24);
    if (local_174 == 2) {
      local_14c = 0;
      local_150 = *(int *)(BC7Data::g_fixupIndexes2 + (long)(int)local_168 * 4);
    }
    else {
      local_14c = 0;
      local_150 = 0;
      if (local_174 == 3) {
        local_150 = *(int *)(BC7Data::g_fixupIndexes3 + (long)(int)local_168 * 8);
        local_14c = *(int *)(BC7Data::g_fixupIndexes3 + (long)(int)local_168 * 8 + 4);
      }
    }
  }
LAB_00101528:
  puVar13 = &local_a8 + (long)local_174 * 4;
  lVar15 = 0;
  puVar12 = &local_a8;
  puVar23 = puVar13;
  do {
    if (0 < local_174) {
      bVar3 = (byte)*(undefined4 *)(&DAT_0010c5c8 + lVar9 * 0x24);
      uVar26 = (1 << (bVar3 & 0x1f)) - 1;
      puVar22 = puVar12;
      do {
        local_1a0 = 2;
        puVar28 = puVar22;
        while( true ) {
          uVar17 = uVar26 & local_148[0];
          uVar8 = local_148[0] >> (bVar3 & 0x1f);
          local_148[0] = uVar8;
          puVar10 = local_148;
          do {
            puVar11 = puVar10 + 1;
            *puVar10 = (puVar10[1] & uVar26) << (0x20 - bVar3 & 0x1f) | uVar8;
            uVar8 = *puVar11 >> (bVar3 & 0x1f);
            *puVar11 = uVar8;
            puVar10 = puVar11;
          } while (puVar11 != puVar16);
          *(uint *)puVar28 = (uVar17 & 0xffff) << (8 - bVar3 & 0x1f);
          if (local_1a0 == 1) break;
          local_1a0 = 1;
          puVar28 = puVar28 + 2;
        }
        puVar22 = puVar22 + 4;
      } while (puVar22 != puVar23);
    }
    lVar15 = lVar15 + 1;
    puVar23 = (ulong *)((long)puVar23 + 4);
    puVar12 = (ulong *)((long)puVar12 + 4);
  } while (lVar15 != 3);
  if (iVar21 == 2) {
    puVar12 = &local_a8;
    if (0 < local_174) {
      do {
        *(undefined4 *)((long)puVar12 + 0xc) = 0xff;
        puVar23 = puVar12 + 4;
        *(undefined4 *)((long)puVar12 + 0x1c) = 0xff;
        puVar12 = puVar23;
      } while (puVar23 != puVar13);
      goto LAB_001017dd;
    }
  }
  else if (0 < local_174) {
    bVar3 = (byte)*(undefined4 *)(&DAT_0010c5cc + lVar9 * 0x24);
    local_1a0._0_1_ = 8 - bVar3;
    puVar13 = local_88;
    puVar12 = puVar13 + (long)local_174 * 4;
    uVar26 = (1 << (bVar3 & 0x1f)) - 1;
    do {
      puVar23 = puVar13 + -4;
      do {
        uVar17 = uVar26 & local_148[0];
        uVar8 = local_148[0] >> (bVar3 & 0x1f);
        local_148[0] = uVar8;
        puVar10 = local_148;
        do {
          puVar11 = puVar10 + 1;
          *puVar10 = (puVar10[1] & uVar26) << (0x20 - bVar3 & 0x1f) | uVar8;
          uVar8 = *puVar11 >> (bVar3 & 0x1f);
          *puVar11 = uVar8;
          puVar10 = puVar11;
        } while (puVar11 != puVar16);
        puVar22 = puVar23 + 2;
        *(uint *)((long)puVar23 + 0xc) = (uVar17 & 0xffff) << ((byte)local_1a0 & 0x1f);
        puVar23 = puVar22;
      } while (puVar22 != puVar13);
      puVar13 = puVar13 + 4;
    } while (puVar13 != puVar12);
LAB_001017dd:
    puVar13 = local_88;
    lVar15 = lVar9 * 0x24;
    if ((&BC7Data::g_modes)[lVar9 * 9] == 1) {
      uVar4 = *(undefined4 *)(&DAT_0010c5c8 + lVar15);
      iVar20 = 0;
      puVar12 = puVar13;
      do {
        uVar26 = local_148[0];
        uVar8 = local_148[0] >> 1;
        local_148[0] = uVar8;
        puVar10 = local_148;
        do {
          puVar11 = puVar10 + 1;
          uVar17 = puVar10[1] << 0x1f | uVar8;
          uVar8 = puVar10[1] >> 1;
          *puVar10 = uVar17;
          *puVar11 = uVar8;
          puVar10 = puVar11;
        } while (puVar11 != puVar16);
        puVar23 = puVar12 + -4;
        uVar8 = (uVar26 & 1) << (7U - (char)uVar4 & 0x1f);
        do {
          *(uint *)(puVar23 + 1) = (uint)puVar23[1] | uVar8;
          *puVar23 = *puVar23 | CONCAT44(uVar8,uVar8);
          if (iVar21 != 2) {
            *(uint *)((long)puVar23 + 0xc) =
                 *(uint *)((long)puVar23 + 0xc) |
                 (uVar26 & 1) << (7U - (char)*(undefined4 *)(&DAT_0010c5cc + lVar15) & 0x1f);
          }
          puVar23 = puVar23 + 2;
        } while (puVar23 != puVar12);
        iVar20 = iVar20 + 1;
        puVar12 = puVar12 + 4;
      } while (iVar20 != local_174);
LAB_00101d6d:
      iVar20 = 1;
    }
    else {
      iVar20 = 0;
      if ((&BC7Data::g_modes)[lVar9 * 9] == 0) {
        uVar4 = *(undefined4 *)(&DAT_0010c5c8 + lVar15);
        iVar20 = 0;
        puVar12 = &local_a8;
        do {
          iVar19 = 2;
          puVar23 = puVar12;
          while( true ) {
            uVar26 = local_148[0];
            uVar8 = local_148[0] >> 1;
            local_148[0] = uVar8;
            puVar10 = local_148;
            do {
              puVar11 = puVar10 + 1;
              *puVar10 = puVar10[1] << 0x1f | uVar8;
              uVar8 = *puVar11 >> 1;
              *puVar11 = uVar8;
              puVar10 = puVar11;
            } while (puVar11 != puVar16);
            uVar8 = (uVar26 & 1) << (7U - (char)uVar4 & 0x1f);
            *(uint *)(puVar23 + 1) = (uint)puVar23[1] | uVar8;
            *puVar23 = *puVar23 | CONCAT44(uVar8,uVar8);
            if (iVar21 != 2) {
              *(uint *)((long)puVar23 + 0xc) =
                   *(uint *)((long)puVar23 + 0xc) |
                   (uVar26 & 1) << (7U - (char)*(undefined4 *)(&DAT_0010c5cc + lVar15) & 0x1f);
            }
            puVar23 = puVar23 + 2;
            if (iVar19 == 1) break;
            iVar19 = 1;
          }
          puVar12 = puVar12 + 4;
          iVar20 = iVar20 + 1;
        } while (iVar20 != local_174);
        goto LAB_00101d6d;
      }
    }
    iVar27 = 0;
    iVar19 = *(int *)(&DAT_0010c5c8 + lVar9 * 0x24);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = (long)(iVar19 + iVar20);
    do {
      puVar12 = puVar13 + -4;
      do {
        uVar14 = *puVar12;
        *(uint *)(puVar12 + 1) =
             (int)(uint)puVar12[1] >> ((byte)(iVar19 + iVar20) & 0x1f) | (uint)puVar12[1];
        *puVar12 = CONCAT44((int)(uVar14 >> 0x20) >> auVar29,(int)uVar14 >> auVar29) | uVar14;
        if (iVar21 != 2) {
          *(uint *)((long)puVar12 + 0xc) =
               (int)*(uint *)((long)puVar12 + 0xc) >>
               ((char)*(undefined4 *)(&DAT_0010c5cc + lVar9 * 0x24) + (char)iVar20 & 0x1fU) |
               *(uint *)((long)puVar12 + 0xc);
        }
        puVar12 = puVar12 + 2;
      } while (puVar13 != puVar12);
      iVar27 = iVar27 + 1;
      puVar13 = puVar13 + 4;
    } while (iVar27 != local_174);
  }
  lVar15 = 0;
  iVar20 = *(int *)(&DAT_0010c5d8 + lVar9 * 0x24);
  bVar6 = (byte)iVar20;
  bVar3 = bVar6 - 1;
  do {
    uVar26 = local_148[0];
    iVar19 = (int)lVar15;
    bVar24 = bVar3;
    if ((iVar19 != 0 && local_150 != iVar19) && (local_14c != iVar19)) {
      bVar24 = bVar6;
    }
    uVar8 = local_148[0] >> (bVar24 & 0x1f);
    uVar17 = (1 << (bVar24 & 0x1f)) - 1;
    local_148[0] = uVar8;
    puVar10 = local_148;
    do {
      puVar11 = puVar10 + 1;
      *puVar10 = (puVar10[1] & uVar17) << (0x20 - bVar24 & 0x1f) | uVar8;
      uVar8 = *puVar11 >> (bVar24 & 0x1f);
      *puVar11 = uVar8;
      puVar10 = puVar11;
    } while (puVar11 != puVar16);
    local_128[lVar15] = uVar26 & uVar17 & 0xffff;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x10);
  iVar19 = *(int *)(&DAT_0010c5dc + lVar9 * 0x24);
  if (iVar21 == 1) {
    lVar15 = 0;
    do {
      uVar26 = local_148[0];
      iVar27 = iVar19;
      if (lVar15 == 0) {
        iVar27 = iVar19 + -1;
      }
      bVar3 = (byte)iVar27;
      uVar8 = local_148[0] >> (bVar3 & 0x1f);
      local_148[0] = uVar8;
      uVar17 = (1 << (bVar3 & 0x1f)) - 1;
      puVar10 = local_148;
      do {
        puVar11 = puVar10 + 1;
        *puVar10 = (puVar10[1] & uVar17) << (0x20 - bVar3 & 0x1f) | uVar8;
        uVar8 = *puVar11 >> (bVar3 & 0x1f);
        *puVar11 = uVar8;
        puVar10 = puVar11;
      } while (puVar11 != puVar16);
      *(uint *)(local_e8 + lVar15 * 4) = uVar26 & uVar17 & 0xffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x10);
  }
  else {
    local_e8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = (undefined1  [16])0x0;
  }
  lVar25 = 0;
  lVar15 = *(long *)(BC7Data::g_weightTables + (long)iVar19 * 8);
  lVar5 = *(long *)(BC7Data::g_weightTables + (long)iVar20 * 8);
  while( true ) {
    iVar20 = *(int *)(lVar5 + (long)(int)local_128[lVar25] * 4);
    iVar19 = iVar20;
    if ((iVar21 != 0) && (iVar19 = 0, iVar21 == 1)) {
      iVar19 = *(int *)(lVar15 + (long)*(int *)(local_e8 + lVar25 * 4) * 4);
    }
    iVar27 = iVar20;
    if (local_178 != 1) {
      iVar27 = iVar19;
      iVar19 = iVar20;
    }
    _local_138 = 0;
    local_130 = 0;
    if (local_174 == 2) {
      uVar14 = (ulong)((int)(uint)(ushort)(&BC7Data::g_partitionMap)[(int)local_168] >>
                       ((byte)lVar25 & 0x1f) & 1);
    }
    else {
      uVar14 = 0;
      if (local_174 == 3) {
        uVar14 = (ulong)(*(uint *)(BC7Data::g_partitionMap2 + (long)(int)local_168 * 4) >>
                         ((byte)lVar25 * '\x02' & 0x1f) & 3);
      }
    }
    puVar13 = &local_a8 + uVar14 * 4;
    puVar16 = &local_138;
    do {
      uVar7 = *puVar13;
      puVar12 = puVar13 + 2;
      puVar10 = puVar16 + 1;
      puVar13 = (ulong *)((long)puVar13 + 4);
      *puVar16 = (int)uVar7 * (0x40 - iVar19) + 0x20 + (int)*puVar12 * iVar19 >> 6;
      puVar16 = puVar10;
    } while (&local_12c != puVar10);
    uVar26 = 0xff;
    if (iVar21 != 2) {
      uVar26 = (0x40 - iVar27) * local_9c[uVar14 * 8] + 0x20 +
               iVar27 * *(int *)((long)local_88 + uVar14 * 0x20 + -4) >> 6;
    }
    uVar8 = uVar26;
    if (local_19c != 0) {
      uVar8 = (&local_138)[(int)(local_19c - 1)];
      (&local_138)[(int)(local_19c - 1)] = uVar26;
    }
    *(uint *)(param_1 + lVar25 * 4) =
         (((uVar8 & 0xff) << 8 | local_130 & 0xff) << 8 | (uint)bStack_134) << 8 |
         (uint)(byte)local_138;
    lVar25 = lVar25 + 1;
    if (lVar25 == 0x10) break;
    iVar21 = *(int *)(&DAT_0010c5c4 + lVar9 * 0x24);
    local_174 = *(int *)(&DAT_0010c5d4 + lVar9 * 0x24);
  }
  goto LAB_00101440;
}



/* cvtt::Internal::BC6HComputer::QuantizeSingleEndpointElementSigned(cvtt::ParallelMath::VInt16<0>
   const&, int, cvtt::ParallelMath::RoundUpForScope const*) */

ulong cvtt::Internal::BC6HComputer::QuantizeSingleEndpointElementSigned
                (VInt16 *param_1,int param_2,RoundUpForScope *param_3)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ushort uVar9;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  
  auVar6 = *(undefined1 (*) [16])param_1;
  iVar4 = 0x10 - param_2;
  auVar5._0_8_ = CONCAT26(-(ushort)(auVar6._6_2_ < 0),
                          CONCAT24(-(ushort)(auVar6._4_2_ < 0),
                                   CONCAT22(-(ushort)(auVar6._2_2_ < 0),-(ushort)(auVar6._0_2_ < 0))
                                  ));
  auVar5._8_2_ = -(ushort)(auVar6._8_2_ < 0);
  auVar5._10_2_ = -(ushort)(auVar6._10_2_ < 0);
  auVar5._12_2_ = -(ushort)(auVar6._12_2_ < 0);
  auVar5._14_2_ = -(ushort)(auVar6._14_2_ < 0);
  auVar11._2_2_ = -auVar6._2_2_;
  auVar11._0_2_ = -auVar6._0_2_;
  auVar11._4_2_ = -auVar6._4_2_;
  auVar11._6_2_ = -auVar6._6_2_;
  auVar11._8_2_ = -auVar6._8_2_;
  auVar11._10_2_ = -auVar6._10_2_;
  auVar11._12_2_ = -auVar6._12_2_;
  auVar11._14_2_ = -auVar6._14_2_;
  auVar6 = auVar11 & auVar5 | ~auVar5 & auVar6;
  auVar1._10_2_ = 0;
  auVar1._0_10_ = auVar6._0_10_;
  auVar1._12_2_ = auVar6._6_2_;
  auVar2._8_2_ = auVar6._4_2_;
  auVar2._0_8_ = auVar6._0_8_;
  auVar2._10_4_ = auVar1._10_4_;
  auVar3._6_8_ = 0;
  auVar3._0_6_ = auVar2._8_6_;
  auVar15._4_4_ = _LC7;
  auVar15._0_4_ = _LC7;
  auVar15._8_4_ = _LC7;
  auVar15._12_4_ = _LC7;
  auVar7._0_4_ = (float)auVar6._8_2_ * _LC5;
  auVar7._4_4_ = (float)auVar6._10_2_ * _LC5;
  auVar7._8_4_ = (float)auVar6._12_2_ * _LC5;
  auVar7._12_4_ = (float)auVar6._14_2_ * _LC5;
  auVar10._0_4_ = (float)auVar6._0_2_ * _LC5;
  auVar10._4_4_ = (float)(int)CONCAT82(SUB148(auVar3 << 0x40,6),auVar6._2_2_) * _LC5;
  auVar10._8_4_ = (float)auVar2._8_4_ * _LC5;
  auVar10._12_4_ = (float)(auVar1._10_4_ >> 0x10) * _LC5;
  auVar6 = divps(auVar7,auVar15);
  auVar11 = divps(auVar10,auVar15);
  auVar8._0_4_ = (int)auVar6._0_4_;
  auVar8._4_4_ = (int)auVar6._4_4_;
  auVar8._8_4_ = (int)auVar6._8_4_;
  auVar8._12_4_ = (int)auVar6._12_4_;
  auVar6._0_4_ = (int)auVar11._0_4_;
  auVar6._4_4_ = (int)auVar11._4_4_;
  auVar6._8_4_ = (int)auVar11._8_4_;
  auVar6._12_4_ = (int)auVar11._12_4_;
  auVar6 = packssdw(auVar6,auVar8);
  uVar9 = auVar6._0_2_ >> iVar4;
  uVar12 = auVar6._2_2_ >> iVar4;
  uVar13 = auVar6._4_2_ >> iVar4;
  uVar14 = auVar6._6_2_ >> iVar4;
  return auVar5._0_8_ & CONCAT26(-uVar14,CONCAT24(-uVar13,CONCAT22(-uVar12,-uVar9))) |
         ~auVar5._0_8_ & CONCAT26(uVar14,CONCAT24(uVar13,CONCAT22(uVar12,uVar9)));
}



/* cvtt::Internal::BC6HComputer::QuantizeSingleEndpointElementUnsigned(cvtt::ParallelMath::VInt16<2>
   const&, int, cvtt::ParallelMath::RoundUpForScope const*) */

void cvtt::Internal::BC6HComputer::QuantizeSingleEndpointElementUnsigned
               (VInt16 *param_1,int param_2,RoundUpForScope *param_3)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar5 = *(undefined1 (*) [16])param_1;
  auVar1._10_2_ = 0;
  auVar1._0_10_ = auVar5._0_10_;
  auVar1._12_2_ = auVar5._6_2_;
  auVar2._8_2_ = auVar5._4_2_;
  auVar2._0_8_ = auVar5._0_8_;
  auVar2._10_4_ = auVar1._10_4_;
  auVar3._6_8_ = 0;
  auVar3._0_6_ = auVar2._8_6_;
  auVar6._0_4_ = (float)auVar5._8_2_ * _LC9;
  auVar6._4_4_ = (float)auVar5._10_2_ * _LC9;
  auVar6._8_4_ = (float)auVar5._12_2_ * _LC9;
  auVar6._12_4_ = (float)auVar5._14_2_ * _LC9;
  auVar4._0_4_ = (float)auVar5._0_2_ * _LC9;
  auVar4._4_4_ = (float)(int)CONCAT82(SUB148(auVar3 << 0x40,6),auVar5._2_2_) * _LC9;
  auVar4._8_4_ = (float)auVar2._8_4_ * _LC9;
  auVar4._12_4_ = (float)(auVar1._10_4_ >> 0x10) * _LC9;
  auVar10._4_4_ = _LC22;
  auVar10._0_4_ = _LC22;
  auVar10._8_4_ = _LC22;
  auVar10._12_4_ = _LC22;
  auVar5._4_4_ = _LC7;
  auVar5._0_4_ = _LC7;
  auVar5._8_4_ = _LC7;
  auVar5._12_4_ = _LC7;
  auVar7 = divps(auVar6,auVar5);
  auVar8._4_4_ = _LC7;
  auVar8._0_4_ = _LC7;
  auVar8._8_4_ = _LC7;
  auVar8._12_4_ = _LC7;
  auVar5 = divps(auVar4,auVar8);
  auVar8 = minps(auVar7,auVar10);
  auVar5 = minps(auVar5,auVar10);
  auVar9._0_4_ = (int)(auVar8._0_4_ + _LC24);
  auVar9._4_4_ = (int)(auVar8._4_4_ + _LC24);
  auVar9._8_4_ = (int)(auVar8._8_4_ + _LC24);
  auVar9._12_4_ = (int)(auVar8._12_4_ + _LC24);
  auVar7._0_4_ = (int)(auVar5._0_4_ + _LC24);
  auVar7._4_4_ = (int)(auVar5._4_4_ + _LC24);
  auVar7._8_4_ = (int)(auVar5._8_4_ + _LC24);
  auVar7._12_4_ = (int)(auVar5._12_4_ + _LC24);
  packssdw(auVar7,auVar9);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC6HComputer::UnquantizeSingleEndpointElementSigned(cvtt::ParallelMath::VInt16<0>
   const&, int, cvtt::ParallelMath::VInt16<0>&, cvtt::ParallelMath::VInt16<0>&) */

void cvtt::Internal::BC6HComputer::UnquantizeSingleEndpointElementSigned
               (VInt16 *param_1,int param_2,VInt16 *param_3,VInt16 *param_4)

{
  undefined1 auVar1 [12];
  unkbyte10 Var2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  undefined1 auVar7 [16];
  short sVar13;
  undefined1 auVar9 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  short sVar23;
  undefined1 auVar24 [16];
  undefined1 auVar6 [12];
  undefined1 auVar8 [16];
  
  auVar19 = *(undefined1 (*) [16])param_1;
  sVar13 = auVar19._0_2_;
  auVar22._0_2_ = -(ushort)(sVar13 < 0);
  sVar10 = auVar19._2_2_;
  auVar22._2_2_ = -(ushort)(sVar10 < 0);
  sVar11 = auVar19._4_2_;
  auVar22._4_2_ = -(ushort)(sVar11 < 0);
  sVar12 = auVar19._6_2_;
  auVar22._6_2_ = -(ushort)(sVar12 < 0);
  sVar14 = auVar19._8_2_;
  auVar22._8_2_ = -(ushort)(sVar14 < 0);
  sVar15 = auVar19._10_2_;
  auVar22._10_2_ = -(ushort)(sVar15 < 0);
  sVar16 = auVar19._12_2_;
  auVar22._12_2_ = -(ushort)(sVar16 < 0);
  sVar17 = auVar19._14_2_;
  auVar22._14_2_ = -(ushort)(sVar17 < 0);
  auVar18._2_2_ = -sVar10;
  auVar18._0_2_ = -sVar13;
  auVar18._4_2_ = -sVar11;
  auVar18._6_2_ = -sVar12;
  auVar18._8_2_ = -sVar14;
  auVar18._10_2_ = -sVar15;
  auVar18._12_2_ = -sVar16;
  auVar18._14_2_ = -sVar17;
  auVar18 = auVar18 & auVar22 | ~auVar22 & auVar19;
  if (param_2 < 0x10) {
    bVar4 = (char)param_2 - 1;
    sVar23 = (short)((1 << (bVar4 & 0x1f)) + -2);
    auVar24._0_2_ = -(ushort)(sVar23 < sVar13);
    auVar24._2_2_ = -(ushort)(sVar23 < sVar10);
    auVar24._4_2_ = -(ushort)(sVar23 < sVar11);
    auVar24._6_2_ = -(ushort)(sVar23 < sVar12);
    auVar24._8_2_ = -(ushort)(sVar23 < sVar14);
    auVar24._10_2_ = -(ushort)(sVar23 < sVar15);
    auVar24._12_2_ = -(ushort)(sVar23 < sVar16);
    auVar24._14_2_ = -(ushort)(sVar23 < sVar17);
    auVar7._0_2_ = -(ushort)(sVar13 == 0);
    auVar7._2_2_ = -(ushort)(sVar10 == 0);
    auVar7._4_2_ = -(ushort)(sVar11 == 0);
    auVar7._6_2_ = -(ushort)(sVar12 == 0);
    auVar7._8_2_ = -(ushort)(sVar14 == 0);
    auVar7._10_2_ = -(ushort)(sVar15 == 0);
    auVar7._12_2_ = -(ushort)(sVar16 == 0);
    auVar7._14_2_ = -(ushort)(sVar17 == 0);
    auVar19 = psllw(auVar18,ZEXT416(0x10 - param_2));
    sVar13 = (short)(0x4000 >> (bVar4 & 0x1f));
    auVar20._0_2_ = auVar19._0_2_ + sVar13;
    auVar20._2_2_ = auVar19._2_2_ + sVar13;
    auVar20._4_2_ = auVar19._4_2_ + sVar13;
    auVar20._6_2_ = auVar19._6_2_ + sVar13;
    auVar20._8_2_ = auVar19._8_2_ + sVar13;
    auVar20._10_2_ = auVar19._10_2_ + sVar13;
    auVar20._12_2_ = auVar19._12_2_ + sVar13;
    auVar20._14_2_ = auVar19._14_2_ + sVar13;
    auVar18 = __LC25 & auVar24 | ~auVar24 & ~auVar7 & auVar20;
    auVar7 = auVar18 ^ auVar22;
    auVar19._0_2_ = auVar7._0_2_ + -(auVar22._0_2_ >> 0xf);
    auVar19._2_2_ = auVar7._2_2_ + -(auVar22._2_2_ >> 0xf);
    auVar19._4_2_ = auVar7._4_2_ + -(auVar22._4_2_ >> 0xf);
    auVar19._6_2_ = auVar7._6_2_ + -(auVar22._6_2_ >> 0xf);
    auVar19._8_2_ = auVar7._8_2_ + -(auVar22._8_2_ >> 0xf);
    auVar19._10_2_ = auVar7._10_2_ + -(auVar22._10_2_ >> 0xf);
    auVar19._12_2_ = auVar7._12_2_ + -(auVar22._12_2_ >> 0xf);
    auVar19._14_2_ = auVar7._14_2_ + -(auVar22._14_2_ >> 0xf);
  }
  *(undefined1 (*) [16])param_3 = auVar19;
  auVar7 = pmulhuw(auVar18,__LC10);
  auVar19 = psllw(auVar18,5);
  sVar13 = auVar19._6_2_ - auVar18._6_2_;
  uVar5 = CONCAT22(auVar7._8_2_,auVar19._8_2_ - auVar18._8_2_);
  auVar6._0_8_ = CONCAT26(auVar7._10_2_,CONCAT24(auVar19._10_2_ - auVar18._10_2_,uVar5));
  auVar6._8_2_ = auVar19._12_2_ - auVar18._12_2_;
  auVar6._10_2_ = auVar7._12_2_;
  auVar8._12_2_ = auVar19._14_2_ - auVar18._14_2_;
  auVar8._0_12_ = auVar6;
  auVar8._14_2_ = auVar7._14_2_;
  uVar3 = CONCAT22(auVar7._6_2_,sVar13);
  Var2 = CONCAT64(CONCAT42(uVar3,auVar7._4_2_),CONCAT22(auVar19._4_2_ - auVar18._4_2_,sVar13));
  auVar1._4_8_ = (long)((unkuint10)Var2 >> 0x10);
  auVar1._2_2_ = auVar7._2_2_;
  auVar1._0_2_ = auVar19._2_2_ - auVar18._2_2_;
  auVar9._0_4_ = uVar5 >> 5;
  auVar9._4_4_ = (uint)((ulong)auVar6._0_8_ >> 0x25);
  auVar9._8_4_ = auVar6._8_4_ >> 5;
  auVar9._12_4_ = auVar8._12_4_ >> 5;
  auVar21._0_4_ = CONCAT22(auVar7._0_2_,auVar19._0_2_ - auVar18._0_2_) >> 5;
  auVar21._4_4_ = auVar1._0_4_ >> 5;
  auVar21._8_4_ = (uint)((unkuint10)Var2 >> 0x10) >> 5;
  auVar21._12_4_ = uVar3 >> 5;
  auVar19 = packssdw(auVar21,auVar9);
  auVar19 = auVar22 ^ auVar19;
  *(short *)param_4 = -(auVar22._0_2_ >> 0xf) + auVar19._0_2_;
  *(short *)(param_4 + 2) = -(auVar22._2_2_ >> 0xf) + auVar19._2_2_;
  *(short *)(param_4 + 4) = -(auVar22._4_2_ >> 0xf) + auVar19._4_2_;
  *(short *)(param_4 + 6) = -(auVar22._6_2_ >> 0xf) + auVar19._6_2_;
  *(short *)(param_4 + 8) = -(auVar22._8_2_ >> 0xf) + auVar19._8_2_;
  *(short *)(param_4 + 10) = -(auVar22._10_2_ >> 0xf) + auVar19._10_2_;
  *(short *)(param_4 + 0xc) = -(auVar22._12_2_ >> 0xf) + auVar19._12_2_;
  *(short *)(param_4 + 0xe) = -(auVar22._14_2_ >> 0xf) + auVar19._14_2_;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC6HComputer::UnquantizeSingleEndpointElementUnsigned(cvtt::ParallelMath::VInt16<2>
   const&, int, cvtt::ParallelMath::VInt16<1>&, cvtt::ParallelMath::VInt16<1>&) */

void cvtt::Internal::BC6HComputer::UnquantizeSingleEndpointElementUnsigned
               (VInt16 *param_1,int param_2,VInt16 *param_3,VInt16 *param_4)

{
  undefined1 auVar1 [12];
  unkbyte10 Var2;
  uint uVar3;
  uint uVar4;
  short sVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar5 [12];
  
  auVar9 = *(undefined1 (*) [16])param_1;
  if (param_2 < 0xf) {
    sVar8 = (short)((1 << ((byte)param_2 & 0x1f)) + -2);
    auVar12._0_2_ = -(ushort)(sVar8 < auVar9._0_2_);
    auVar12._2_2_ = -(ushort)(sVar8 < auVar9._2_2_);
    auVar12._4_2_ = -(ushort)(sVar8 < auVar9._4_2_);
    auVar12._6_2_ = -(ushort)(sVar8 < auVar9._6_2_);
    auVar12._8_2_ = -(ushort)(sVar8 < auVar9._8_2_);
    auVar12._10_2_ = -(ushort)(sVar8 < auVar9._10_2_);
    auVar12._12_2_ = -(ushort)(sVar8 < auVar9._12_2_);
    auVar12._14_2_ = -(ushort)(sVar8 < auVar9._14_2_);
    auVar6._0_2_ = -(ushort)(auVar9._0_2_ == 0);
    auVar6._2_2_ = -(ushort)(auVar9._2_2_ == 0);
    auVar6._4_2_ = -(ushort)(auVar9._4_2_ == 0);
    auVar6._6_2_ = -(ushort)(auVar9._6_2_ == 0);
    auVar6._8_2_ = -(ushort)(auVar9._8_2_ == 0);
    auVar6._10_2_ = -(ushort)(auVar9._10_2_ == 0);
    auVar6._12_2_ = -(ushort)(auVar9._12_2_ == 0);
    auVar6._14_2_ = -(ushort)(auVar9._14_2_ == 0);
    auVar11 = psllw(auVar9,ZEXT416(0x10 - param_2));
    sVar8 = (short)(0x8000 >> ((byte)param_2 & 0x1f));
    auVar9._0_2_ = sVar8 + auVar11._0_2_;
    auVar9._2_2_ = sVar8 + auVar11._2_2_;
    auVar9._4_2_ = sVar8 + auVar11._4_2_;
    auVar9._6_2_ = sVar8 + auVar11._6_2_;
    auVar9._8_2_ = sVar8 + auVar11._8_2_;
    auVar9._10_2_ = sVar8 + auVar11._10_2_;
    auVar9._12_2_ = sVar8 + auVar11._12_2_;
    auVar9._14_2_ = sVar8 + auVar11._14_2_;
    auVar9 = ~auVar12 & ~auVar6 & auVar9 | auVar12;
  }
  *(undefined1 (*) [16])param_3 = auVar9;
  auVar12 = pmulhuw(auVar9,__LC10);
  auVar6 = psllw(auVar9,5);
  sVar8 = auVar6._6_2_ - auVar9._6_2_;
  uVar4 = CONCAT22(auVar12._8_2_,auVar6._8_2_ - auVar9._8_2_);
  auVar5._0_8_ = CONCAT26(auVar12._10_2_,CONCAT24(auVar6._10_2_ - auVar9._10_2_,uVar4));
  auVar5._8_2_ = auVar6._12_2_ - auVar9._12_2_;
  auVar5._10_2_ = auVar12._12_2_;
  auVar11._12_2_ = auVar6._14_2_ - auVar9._14_2_;
  auVar11._0_12_ = auVar5;
  auVar11._14_2_ = auVar12._14_2_;
  uVar3 = CONCAT22(auVar12._6_2_,sVar8);
  Var2 = CONCAT64(CONCAT42(uVar3,auVar12._4_2_),CONCAT22(auVar6._4_2_ - auVar9._4_2_,sVar8));
  auVar1._4_8_ = (long)((unkuint10)Var2 >> 0x10);
  auVar1._2_2_ = auVar12._2_2_;
  auVar1._0_2_ = auVar6._2_2_ - auVar9._2_2_;
  auVar7._0_4_ = (int)(short)(uVar4 >> 6);
  auVar7._4_4_ = (int)(short)(uint)((ulong)auVar5._0_8_ >> 0x26);
  auVar7._8_4_ = (int)(short)(auVar5._8_4_ >> 6);
  auVar7._12_4_ = (int)(short)(auVar11._12_4_ >> 6);
  auVar10._0_4_ = (int)(short)(CONCAT22(auVar12._0_2_,auVar6._0_2_ - auVar9._0_2_) >> 6);
  auVar10._4_4_ = (int)(short)(auVar1._0_4_ >> 6);
  auVar10._8_4_ = (int)(short)((uint)((unkuint10)Var2 >> 0x10) >> 6);
  auVar10._12_4_ = (int)(short)(uVar3 >> 6);
  auVar9 = packssdw(auVar10,auVar7);
  *(undefined1 (*) [16])param_4 = auVar9;
  return;
}



/* cvtt::Internal::BC6HComputer::EvaluatePartitionedLegality(cvtt::ParallelMath::VInt16<3> const (*)
   [3], cvtt::ParallelMath::VInt16<3> const (*) [3], int, int const*, bool,
   cvtt::ParallelMath::VInt16<3> (*) [2][3], cvtt::ParallelMath::Int16CompFlag&) */

void cvtt::Internal::BC6HComputer::EvaluatePartitionedLegality
               (VInt16<3> *param_1,VInt16<3> *param_2,int param_3,int *param_4,bool param_5,
               VInt16<3> *param_6,Int16CompFlag *param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  VInt16<3> *pVVar6;
  uint uVar7;
  VInt16<3> *pVVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ushort uVar11;
  undefined1 auVar12 [16];
  
  auVar12._8_4_ = 0xffffffff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12._12_4_ = 0xffffffff;
  lVar5 = 0;
  uVar11 = (ushort)((1 << ((byte)param_3 & 0x1f)) + -1);
  do {
    uVar2 = *(undefined8 *)(param_1 + lVar5 + 8);
    *(undefined8 *)param_6 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_6 + 8) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + lVar5 + 0x30 + 8);
    *(undefined8 *)(param_6 + 0x30) = *(undefined8 *)(param_1 + lVar5 + 0x30);
    *(undefined8 *)(param_6 + 0x38) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + lVar5 + 8);
    *(undefined8 *)(param_6 + 0x60) = *(undefined8 *)(param_2 + lVar5);
    *(undefined8 *)(param_6 + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + lVar5 + 0x30 + 8);
    *(undefined8 *)(param_6 + 0x90) = *(undefined8 *)(param_2 + lVar5 + 0x30);
    *(undefined8 *)(param_6 + 0x98) = uVar2;
    if (param_5) {
      pVVar6 = param_6 + 0x30;
      pVVar8 = param_6;
      bVar3 = true;
      bVar4 = false;
      while( true ) {
        while( true ) {
          uVar1 = *(ushort *)pVVar6;
          auVar9._0_2_ = *(ushort *)pVVar6 - *(ushort *)param_6;
          auVar9._2_2_ = *(ushort *)(pVVar6 + 2) - *(ushort *)(param_6 + 2);
          auVar9._4_2_ = *(ushort *)(pVVar6 + 4) - *(ushort *)(param_6 + 4);
          auVar9._6_2_ = *(ushort *)(pVVar6 + 6) - *(ushort *)(param_6 + 6);
          auVar9._8_2_ = *(ushort *)(pVVar6 + 8) - *(ushort *)(param_6 + 8);
          auVar9._10_2_ = *(ushort *)(pVVar6 + 10) - *(ushort *)(param_6 + 10);
          auVar9._12_2_ = *(ushort *)(pVVar6 + 0xc) - *(ushort *)(param_6 + 0xc);
          auVar9._14_2_ = *(ushort *)(pVVar6 + 0xe) - *(ushort *)(param_6 + 0xe);
          uVar7 = 0x10 - *param_4;
          if (uVar7 != 0) {
            auVar9 = psllw(auVar9,ZEXT416(uVar7));
            auVar9 = psraw(auVar9,ZEXT416(uVar7));
          }
          *(undefined1 (*) [16])pVVar6 = auVar9;
          auVar10._0_2_ =
               -(ushort)((auVar9._0_2_ + *(ushort *)param_6 & uVar11) == (uVar1 & uVar11));
          auVar10._2_2_ =
               -(ushort)((auVar9._2_2_ + *(ushort *)(param_6 + 2) & uVar11) ==
                        (*(ushort *)(pVVar6 + 2) & uVar11));
          auVar10._4_2_ =
               -(ushort)((auVar9._4_2_ + *(ushort *)(param_6 + 4) & uVar11) ==
                        (*(ushort *)(pVVar6 + 4) & uVar11));
          auVar10._6_2_ =
               -(ushort)((auVar9._6_2_ + *(ushort *)(param_6 + 6) & uVar11) ==
                        (*(ushort *)(pVVar6 + 6) & uVar11));
          auVar10._8_2_ =
               -(ushort)((auVar9._8_2_ + *(ushort *)(param_6 + 8) & uVar11) ==
                        (*(ushort *)(pVVar6 + 8) & uVar11));
          auVar10._10_2_ =
               -(ushort)((auVar9._10_2_ + *(ushort *)(param_6 + 10) & uVar11) ==
                        (*(ushort *)(pVVar6 + 10) & uVar11));
          auVar10._12_2_ =
               -(ushort)((auVar9._12_2_ + *(ushort *)(param_6 + 0xc) & uVar11) ==
                        (*(ushort *)(pVVar6 + 0xc) & uVar11));
          auVar10._14_2_ =
               -(ushort)((auVar9._14_2_ + *(ushort *)(param_6 + 0xe) & uVar11) ==
                        (*(ushort *)(pVVar6 + 0xe) & uVar11));
          auVar12 = auVar12 & auVar10;
          if (bVar3) break;
          pVVar6 = pVVar6 + 0x30;
          bVar3 = true;
        }
        if (bVar4) break;
        pVVar6 = pVVar8 + 0x60;
        pVVar8 = pVVar6;
        bVar3 = bVar4;
        bVar4 = true;
      }
    }
    if ((((((((((((((((auVar12 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                     (auVar12 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar12 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar12 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar12 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar12 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar12 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar12 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar12 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar12 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
            (auVar12 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
           (auVar12 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
          (auVar12 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
         (auVar12 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
        (auVar12 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) && -1 < auVar12[0xf])
    break;
    lVar5 = lVar5 + 0x10;
    param_6 = param_6 + 0x10;
    param_4 = param_4 + 1;
  } while (lVar5 != 0x30);
  *(undefined1 (*) [16])param_7 = auVar12;
  return;
}



/* cvtt::Internal::BC6HComputer::EvaluateSingleLegality(cvtt::ParallelMath::VInt16<3> const (*) [3],
   int, int const*, bool, cvtt::ParallelMath::VInt16<3> (*) [3], cvtt::ParallelMath::Int16CompFlag&)
    */

void cvtt::Internal::BC6HComputer::EvaluateSingleLegality
               (VInt16<3> *param_1,int param_2,int *param_3,bool param_4,VInt16<3> *param_5,
               Int16CompFlag *param_6)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  VInt16<3> *pVVar11;
  uint uVar12;
  VInt16<3> *pVVar13;
  undefined1 auVar14 [16];
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  
  pVVar13 = param_5 + 0x30;
  uVar22 = 0xffff;
  uVar23 = 0xffff;
  uVar16 = 0xffff;
  uVar17 = 0xffff;
  uVar18 = 0xffff;
  uVar19 = 0xffff;
  uVar20 = 0xffff;
  uVar21 = 0xffff;
  pVVar11 = param_1 + 0x30;
  piVar1 = param_3 + 3;
  uVar15 = (ushort)((1 << ((byte)param_2 & 0x1f)) + -1);
  do {
    uVar10 = *(undefined8 *)(pVVar11 + -0x28);
    *(undefined8 *)(pVVar13 + -0x30) = *(undefined8 *)(pVVar11 + -0x30);
    *(undefined8 *)(pVVar13 + -0x28) = uVar10;
    uVar2 = *(ushort *)pVVar11;
    uVar3 = *(ushort *)(pVVar11 + 2);
    uVar4 = *(ushort *)(pVVar11 + 4);
    uVar5 = *(ushort *)(pVVar11 + 6);
    uVar6 = *(ushort *)(pVVar11 + 8);
    uVar7 = *(ushort *)(pVVar11 + 10);
    uVar8 = *(ushort *)(pVVar11 + 0xc);
    uVar9 = *(ushort *)(pVVar11 + 0xe);
    *(ushort *)pVVar13 = uVar2;
    *(ushort *)(pVVar13 + 2) = uVar3;
    *(ushort *)(pVVar13 + 4) = uVar4;
    *(ushort *)(pVVar13 + 6) = uVar5;
    *(ushort *)(pVVar13 + 8) = uVar6;
    *(ushort *)(pVVar13 + 10) = uVar7;
    *(ushort *)(pVVar13 + 0xc) = uVar8;
    *(ushort *)(pVVar13 + 0xe) = uVar9;
    if (param_4) {
      auVar14._0_2_ = uVar2 - *(ushort *)(pVVar13 + -0x30);
      auVar14._2_2_ = uVar3 - *(ushort *)(pVVar13 + -0x2e);
      auVar14._4_2_ = uVar4 - *(ushort *)(pVVar13 + -0x2c);
      auVar14._6_2_ = uVar5 - *(ushort *)(pVVar13 + -0x2a);
      auVar14._8_2_ = uVar6 - *(ushort *)(pVVar13 + -0x28);
      auVar14._10_2_ = uVar7 - *(ushort *)(pVVar13 + -0x26);
      auVar14._12_2_ = uVar8 - *(ushort *)(pVVar13 + -0x24);
      auVar14._14_2_ = uVar9 - *(ushort *)(pVVar13 + -0x22);
      uVar12 = 0x10 - *param_3;
      if (uVar12 != 0) {
        auVar14 = psllw(auVar14,ZEXT416(uVar12));
        auVar14 = psraw(auVar14,ZEXT416(uVar12));
      }
      *(undefined1 (*) [16])pVVar13 = auVar14;
      uVar16 = uVar16 & -(ushort)((auVar14._0_2_ + *(ushort *)(pVVar13 + -0x30) & uVar15) ==
                                 (uVar2 & uVar15));
      uVar17 = uVar17 & -(ushort)((auVar14._2_2_ + *(ushort *)(pVVar13 + -0x2e) & uVar15) ==
                                 (uVar3 & uVar15));
      uVar18 = uVar18 & -(ushort)((auVar14._4_2_ + *(ushort *)(pVVar13 + -0x2c) & uVar15) ==
                                 (uVar4 & uVar15));
      uVar19 = uVar19 & -(ushort)((auVar14._6_2_ + *(ushort *)(pVVar13 + -0x2a) & uVar15) ==
                                 (uVar5 & uVar15));
      uVar20 = uVar20 & -(ushort)((auVar14._8_2_ + *(ushort *)(pVVar13 + -0x28) & uVar15) ==
                                 (uVar6 & uVar15));
      uVar21 = uVar21 & -(ushort)((auVar14._10_2_ + *(ushort *)(pVVar13 + -0x26) & uVar15) ==
                                 (uVar7 & uVar15));
      uVar22 = uVar22 & -(ushort)((auVar14._12_2_ + *(ushort *)(pVVar13 + -0x24) & uVar15) ==
                                 (uVar8 & uVar15));
      uVar23 = uVar23 & -(ushort)((auVar14._14_2_ + *(ushort *)(pVVar13 + -0x22) & uVar15) ==
                                 (uVar9 & uVar15));
    }
    param_3 = param_3 + 1;
    pVVar11 = pVVar11 + 0x10;
    pVVar13 = pVVar13 + 0x10;
  } while (param_3 != piVar1);
  *(ushort *)param_6 = uVar16;
  *(ushort *)(param_6 + 2) = uVar17;
  *(ushort *)(param_6 + 4) = uVar18;
  *(ushort *)(param_6 + 6) = uVar19;
  *(ushort *)(param_6 + 8) = uVar20;
  *(ushort *)(param_6 + 10) = uVar21;
  *(ushort *)(param_6 + 0xc) = uVar22;
  *(ushort *)(param_6 + 0xe) = uVar23;
  return;
}



/* cvtt::Internal::BC6HComputer::SignExtendSingle(int&, int) */

void cvtt::Internal::BC6HComputer::SignExtendSingle(int *param_1,int param_2)

{
  if (((uint)*param_1 >> (param_2 - 1U & 0x1f) & 1) != 0) {
    *param_1 = -1 << ((byte)param_2 & 0x1f) | *param_1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC6HComputer::UnpackOne(cvtt::PixelBlockF16&, unsigned char const*, bool) */

void cvtt::Internal::BC6HComputer::UnpackOne(PixelBlockF16 *param_1,uchar *param_2,bool param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  PixelBlockF16 *pPVar14;
  PixelBlockF16 *pPVar15;
  byte bVar16;
  byte bVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  ushort *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined2 *puVar28;
  int *piVar29;
  int *piVar30;
  ushort uVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  sbyte sVar36;
  long in_FS_OFFSET;
  int local_10c;
  ushort local_f0;
  ushort local_ee;
  int local_dc;
  uint local_c8;
  undefined1 auStack_c4 [12];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  uint local_88 [18];
  long local_40;
  byte bVar17;
  
  uVar8 = _UNK_0011b728;
  uVar7 = __LC26;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auStack_c4 = SUB1612((undefined1  [16])0x0,4);
  local_c8 = (uint)*param_2;
  lVar13 = 1;
  do {
    uVar26 = (uint)lVar13;
    pbVar1 = param_2 + lVar13;
    lVar13 = lVar13 + 1;
    *(uint *)(auStack_c4 + (long)((int)uVar26 >> 2) * 4 + -4) =
         *(uint *)(auStack_c4 + (long)((int)uVar26 >> 2) * 4 + -4) |
         (uint)*pbVar1 << (sbyte)((uVar26 & 3) << 3);
    uVar26 = local_c8;
  } while (lVar13 != 0x10);
  puVar21 = (uint *)(auStack_c4 + 8);
  uVar9 = local_c8 >> 2;
  uVar25 = local_c8 & 3;
  local_c8 = uVar9;
  puVar22 = &local_c8;
  do {
    puVar19 = puVar22 + 1;
    uVar10 = puVar22[1] << 0x1e | uVar9;
    uVar9 = puVar22[1] >> 2;
    *puVar22 = uVar10;
    uVar10 = local_c8;
    *puVar19 = uVar9;
    puVar22 = puVar19;
  } while (puVar19 != puVar21);
  uVar33 = 2;
  if ((uVar26 & 2) != 0) {
    uVar9 = local_c8 >> 3;
    local_c8 = uVar9;
    puVar22 = &local_c8;
    do {
      puVar19 = puVar22 + 1;
      uVar26 = puVar22[1] << 0x1d | uVar9;
      uVar9 = puVar22[1] >> 3;
      *puVar22 = uVar26;
      *puVar19 = uVar9;
      puVar22 = puVar19;
    } while (puVar21 != puVar19);
    uVar33 = 5;
    uVar25 = uVar25 | (uVar10 & 7) << 2;
  }
  puVar23 = &BC7Data::g_hdrModes;
  iVar11 = 0;
LAB_00102480:
  if (*puVar23 != uVar25) goto code_r0x00102487;
  lVar27 = (long)iVar11;
  local_b8 = (undefined1  [16])0x0;
  cVar2 = (&DAT_0010c462)[lVar27 * 0x14];
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  lVar13 = lVar27 * 0x290;
  puVar22 = (uint *)(local_b8 + 0xc);
  do {
    uVar26 = local_c8;
    if (*(uint *)(BC6HData::g_modeDescriptors + uVar33 * 8 + lVar13) < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00102571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00115ce0 +
                *(int *)(&DAT_00115ce0 +
                        (ulong)*(uint *)(BC6HData::g_modeDescriptors + uVar33 * 8 + lVar13) * 4)))
                (uVar9,lVar27,
                 &DAT_00115ce0 +
                 *(int *)(&DAT_00115ce0 +
                         (ulong)*(uint *)(BC6HData::g_modeDescriptors + uVar33 * 8 + lVar13) * 4));
      return;
    }
    uVar9 = 0;
    uVar25 = local_c8 >> 1;
    local_c8 = uVar25;
    puVar19 = &local_c8;
    do {
      puVar20 = puVar19 + 1;
      uVar10 = puVar19[1] << 0x1f | uVar25;
      uVar25 = puVar19[1] >> 1;
      *puVar19 = uVar10;
      *puVar20 = uVar25;
      puVar19 = puVar20;
    } while (puVar20 != puVar21);
    lVar34 = uVar33 * 8;
    uVar33 = uVar33 + 1;
    uRam0000000000000000 =
         uRam0000000000000000 | (uVar26 & 1) << (*(byte *)(lVar13 + 0x117b04 + lVar34) & 0x1f);
  } while (uVar33 < (-(ulong)(cVar2 == '\0') & 0xffffffffffffffef) + 0x52);
  if (cVar2 == '\0') {
    local_dc = 1;
    uVar9 = 7;
    local_ee = 0xf;
    uVar26 = 0xf;
    sVar36 = 3;
    iVar11 = 4;
    local_f0 = 7;
    local_10c = 0;
  }
  else {
    local_dc = 2;
    local_10c = BC7Data::g_fixupIndexes2._0_4_;
    local_ee = 7;
    uVar9 = 3;
    uVar26 = 7;
    local_f0 = 3;
    sVar36 = 2;
    iVar11 = 3;
  }
  lVar13 = 0;
  sVar6 = (sbyte)iVar11;
  do {
    if (((int)lVar13 == 0) || (local_10c == (int)lVar13)) {
      uVar31 = (ushort)local_c8;
      uVar25 = local_c8 >> sVar36;
      local_c8 = uVar25;
      puVar19 = &local_c8;
      do {
        puVar20 = puVar19 + 1;
        uVar10 = (puVar19[1] & uVar9) << (-sVar36 & 0x1fU) | uVar25;
        uVar25 = puVar19[1] >> sVar36;
        *puVar19 = uVar10;
        *puVar20 = uVar25;
        puVar19 = puVar20;
      } while (puVar20 != puVar21);
      uVar25 = (uint)(local_f0 & uVar31);
    }
    else {
      uVar25 = local_ee & local_c8;
      uVar10 = local_c8 >> sVar6;
      local_c8 = uVar10;
      puVar19 = &local_c8;
      do {
        puVar20 = puVar19 + 1;
        *puVar19 = (puVar19[1] & uVar26) << (0x20U - sVar6 & 0x1f) | uVar10;
        uVar10 = *puVar20 >> sVar6;
        *puVar20 = uVar10;
        puVar19 = puVar20;
      } while (puVar20 != puVar21);
    }
    local_88[lVar13] = uVar25;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x10);
  puVar28 = &BC7Data::g_hdrModes + lVar27 * 10;
  iVar32 = *(int *)(&DAT_0010c464 + lVar27 * 0x14);
  cVar3 = (&DAT_0010c463)[lVar27 * 0x14];
  uVar26 = iVar32 - 1;
  bVar16 = (byte)iVar32;
  bVar17 = (byte)uVar26;
  if (cVar2 == '\0') {
    puVar21 = (uint *)local_b8;
    if (!param_3) goto LAB_00102c77;
    do {
      if ((1 << (bVar17 & 0x1f) & *puVar21) != 0) {
        *puVar21 = -1 << (bVar16 & 0x1f) | *puVar21;
      }
      while( true ) {
        if ((puVar21[3] >> (*(int *)(puVar28 + 4) - 1U & 0x1f) & 1) != 0) {
          puVar21[3] = -(1 << ((byte)*(int *)(puVar28 + 4) & 0x1f)) | puVar21[3];
        }
        puVar21 = puVar21 + 1;
        puVar28 = puVar28 + 2;
        if (puVar22 == puVar21) goto LAB_0010278a;
        if (param_3) break;
LAB_00102c77:
        if (cVar3 == '\0') goto LAB_00102c7c;
      }
    } while( true );
  }
  puVar21 = (uint *)local_b8;
  while (param_3) {
    if ((*puVar21 & 1 << (bVar17 & 0x1f)) != 0) {
      *puVar21 = -1 << (bVar16 & 0x1f) | *puVar21;
    }
LAB_00102722:
    uVar9 = *(int *)(puVar28 + 4) - 1;
    bVar18 = (byte)*(int *)(puVar28 + 4);
    if ((puVar21[3] >> (uVar9 & 0x1f) & 1) != 0) {
      puVar21[3] = -(1 << (bVar18 & 0x1f)) | puVar21[3];
    }
    if ((puVar21[6] >> (uVar9 & 0x1f) & 1) != 0) {
      puVar21[6] = -(1 << (bVar18 & 0x1f)) | puVar21[6];
    }
    if ((puVar21[9] >> (uVar9 & 0x1f) & 1) != 0) {
      puVar21[9] = -(1 << (bVar18 & 0x1f)) | puVar21[9];
    }
    puVar21 = puVar21 + 1;
    puVar28 = puVar28 + 2;
    if (puVar21 == puVar22) {
LAB_0010278a:
      if (cVar3 != '\0') {
        iVar24 = 1 << (bVar16 & 0x1f);
        uVar9 = iVar24 - 1;
        puVar21 = (uint *)local_b8;
        do {
          uVar25 = *puVar21;
          uVar10 = puVar21[3] + uVar25 & uVar9;
          puVar21[3] = uVar10;
          if (param_3) {
            if ((uVar10 & 1 << (bVar17 & 0x1f)) != 0) {
              puVar21[3] = uVar10 | -iVar24;
            }
            if (cVar2 != '\0') {
              uVar10 = puVar21[6] + uVar25 & uVar9;
              uVar25 = uVar25 + puVar21[9] & uVar9;
              if ((uVar10 >> (uVar26 & 0x1f) & 1) != 0) {
                uVar10 = -iVar24 | uVar10;
              }
              uVar5 = -iVar24 | uVar25;
              if ((uVar25 >> (uVar26 & 0x1f) & 1) == 0) {
                uVar5 = uVar25;
              }
              puVar21[6] = uVar10;
              puVar21[9] = uVar5;
            }
          }
          else if (cVar2 != '\0') {
            puVar21[6] = puVar21[6] + uVar25 & uVar9;
            puVar21[9] = uVar25 + puVar21[9] & uVar9;
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar22);
      }
      goto LAB_0010281d;
    }
  }
  if (cVar3 != '\0') goto LAB_00102722;
  do {
    puVar21 = puVar21 + 1;
  } while (puVar21 != puVar22);
LAB_0010281d:
  lVar13 = 0x30;
  if (local_dc == 1) {
    lVar13 = 0x18;
  }
  lVar27 = 0;
LAB_00102859:
  piVar30 = (int *)((long)local_b8 + lVar27);
  iVar24 = 2;
  do {
    iVar12 = 3;
    piVar29 = piVar30;
    if (param_3) {
      iVar12 = 3;
      do {
        while (iVar32 < 0x10) {
          iVar4 = *piVar29;
          if (iVar4 < 0) {
            iVar35 = -0x7fff;
            if (-iVar4 < (1 << (bVar17 & 0x1f)) + -1) {
              iVar35 = -(iVar4 * -0x8000 + 0x4000 >> (bVar17 & 0x1f));
            }
          }
          else {
            iVar35 = iVar4;
            if (iVar4 != 0) {
              if (iVar4 < (1 << (bVar17 & 0x1f)) + -1) {
                iVar35 = iVar4 * 0x8000 + 0x4000 >> (bVar17 & 0x1f);
              }
              else {
                iVar35 = 0x7fff;
              }
            }
          }
          *piVar29 = iVar35;
          iVar12 = iVar12 + -1;
          if (iVar12 == 0) goto joined_r0x001028c2;
          piVar29 = piVar29 + 1;
        }
        piVar29 = piVar29 + 1;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    else {
LAB_00102878:
      do {
        if ((iVar32 < 0xf) && (iVar4 = *piVar29, iVar4 != 0)) {
          if (iVar4 != (1 << (bVar16 & 0x1f)) + -1) {
            *piVar29 = iVar4 * 0x10000 + 0x8000 >> (bVar16 & 0x1f);
            iVar12 = iVar12 + -1;
            piVar29 = piVar29 + 1;
            if (iVar12 == 0) break;
            goto LAB_00102878;
          }
          *piVar29 = 0xffff;
        }
        iVar12 = iVar12 + -1;
        piVar29 = piVar29 + 1;
      } while (iVar12 != 0);
    }
joined_r0x001028c2:
    if (iVar24 == 1) goto LAB_00102900;
    piVar30 = piVar30 + 3;
    iVar24 = 1;
  } while( true );
code_r0x00102487:
  iVar11 = iVar11 + 1;
  puVar23 = puVar23 + 10;
  if (iVar11 == 0xe) goto code_r0x00102493;
  goto LAB_00102480;
code_r0x00102493:
  pPVar14 = param_1;
  do {
    *(undefined8 *)pPVar14 = uVar7;
    *(undefined8 *)(pPVar14 + 8) = uVar8;
    pPVar15 = pPVar14 + 0x20;
    *(undefined8 *)(pPVar14 + 0x10) = uVar7;
    *(undefined8 *)(pPVar14 + 0x18) = uVar8;
    pPVar14 = pPVar15;
  } while (param_1 + 0x80 != pPVar15);
  goto LAB_001024c0;
LAB_00102c7c:
  do {
    puVar21 = puVar21 + 1;
  } while (puVar21 != puVar22);
  goto LAB_0010281d;
LAB_00102900:
  lVar27 = lVar27 + 0x18;
  if (lVar13 == lVar27) goto code_r0x0010290d;
  goto LAB_00102859;
code_r0x0010290d:
  lVar13 = *(long *)(BC7Data::g_weightTables + (long)iVar11 * 8);
  lVar27 = 0;
  do {
    uVar26 = 0;
    if (cVar2 != '\0') {
      uVar26 = (int)(uint)BC7Data::g_partitionMap >> ((byte)lVar27 & 0x1f) & 1;
    }
    lVar34 = 0;
    iVar11 = *(int *)(lVar13 + (long)(int)local_88[lVar27] * 4);
    piVar30 = (int *)((ulong)(-uVar26 & 0x18) + (long)local_b8);
    do {
      iVar32 = piVar30[3] * iVar11 + 0x20 + *piVar30 * (0x40 - iVar11) >> 6;
      if (param_3) {
        if (iVar32 < 0) {
          iVar32 = iVar32 * -0x1f >> 5;
          uVar31 = (ushort)(iVar32 != 0) << 0xf;
        }
        else {
          iVar32 = iVar32 * 0x1f >> 5;
          uVar31 = 0;
        }
        uVar31 = uVar31 | (ushort)iVar32;
      }
      else {
        uVar31 = (ushort)(iVar32 * 0x1f >> 6);
      }
      *(ushort *)(param_1 + lVar34 * 2) = uVar31;
      lVar34 = lVar34 + 1;
      piVar30 = piVar30 + 1;
    } while (lVar34 != 3);
    lVar27 = lVar27 + 1;
    *(undefined2 *)(param_1 + 6) = 0x3c00;
    param_1 = param_1 + 8;
  } while (lVar27 != 0x10);
LAB_001024c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Kernels::ConfigureBC7EncodingPlanFromFineTuningParams(cvtt::BC7EncodingPlan&,
   cvtt::BC7FineTuningParams const&) */

undefined8
cvtt::Kernels::ConfigureBC7EncodingPlanFromFineTuningParams
          (BC7EncodingPlan *param_1,BC7FineTuningParams *param_2)

{
  BC7FineTuningParams BVar1;
  BC7EncodingPlan BVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  BC7FineTuningParams BVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  puVar7 = (undefined8 *)((ulong)(param_1 + 8) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 8) & 0xfffffffffffffff8)) + 0x328U >> 3
                      ); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  piVar8 = &Internal::BC7Data::g_shapes3;
  piVar9 = &Internal::BC7Data::g_shapes3;
  lVar5 = 0;
  do {
    BVar1 = param_2[lVar5];
    if (BVar1 != (BC7FineTuningParams)0x0) {
      iVar3 = *piVar9;
      *(ushort *)(param_1 + 0x18) =
           *(ushort *)(param_1 + 0x18) | (ushort)(1 << ((byte)lVar5 & 0x1f));
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)piVar9[1] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)piVar9[1] + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)piVar9[1] + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)piVar9[2] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)piVar9[2] + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)piVar9[2] + 0x3d) = BVar6;
    }
    lVar5 = lVar5 + 1;
    piVar9 = piVar9 + 3;
  } while (lVar5 != 0x10);
  lVar5 = 0;
  do {
    BVar1 = param_2[lVar5 + 0x10];
    if (BVar1 != (BC7FineTuningParams)0x0) {
      iVar3 = (&Internal::BC7Data::g_shapes2)[lVar5 * 2];
      *(ulong *)param_1 = *(ulong *)param_1 | 1L << ((byte)lVar5 & 0x3f);
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d) <
          (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d) = BVar6;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  lVar5 = 0;
  do {
    BVar1 = param_2[lVar5 + 0x50];
    if (BVar1 != (BC7FineTuningParams)0x0) {
      iVar3 = *piVar8;
      *(ulong *)(param_1 + 8) = *(ulong *)(param_1 + 8) | 1L << ((byte)lVar5 & 0x3f);
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)piVar8[1] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)piVar8[1] + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)piVar8[1] + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)piVar8[2] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)piVar8[2] + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)piVar8[2] + 0x3d) = BVar6;
    }
    lVar5 = lVar5 + 1;
    piVar8 = piVar8 + 3;
  } while (lVar5 != 0x40);
  lVar5 = 0;
  uVar4 = 0;
  do {
    BVar1 = param_2[lVar5 + 0x90];
    if (BVar1 != (BC7FineTuningParams)0x0) {
      iVar3 = (&Internal::BC7Data::g_shapes2)[lVar5 * 2];
      uVar4 = uVar4 | 1L << ((byte)lVar5 & 0x3f);
      *(ulong *)(param_1 + 0x10) = uVar4;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x3d) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d) <
          (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x3d) = BVar6;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  lVar5 = 0;
  do {
    *(BC7FineTuningParams *)(param_1 + lVar5 + 0x30) = param_2[lVar5 + 0xd0];
    *(BC7FineTuningParams *)(param_1 + lVar5 + 0x31) = param_2[lVar5 + 0xd1];
    lVar5 = lVar5 + 2;
  } while (lVar5 != 8);
  *(BC7FineTuningParams *)(param_1 + 0x38) = param_2[0xd8];
  *(BC7FineTuningParams *)(param_1 + 0x39) = param_2[0xd9];
  *(BC7FineTuningParams *)(param_1 + 0x3a) = param_2[0xda];
  *(BC7FineTuningParams *)(param_1 + 0x3b) = param_2[0xdb];
  BVar1 = param_2[0xdc];
  if (BVar1 != (BC7FineTuningParams)0x0) {
    param_1[0x3c] = (BC7EncodingPlan)0x1;
    *(BC7FineTuningParams *)(param_1 + 0x130) = BVar1;
  }
  lVar5 = 0;
  uVar10 = 0;
  do {
    BVar1 = param_2[lVar5 + 0xdd];
    if (BVar1 != (BC7FineTuningParams)0x0) {
      iVar3 = (&Internal::BC7Data::g_shapes2)[lVar5 * 2];
      uVar10 = uVar10 | 1L << ((byte)lVar5 & 0x3f);
      *(ulong *)(param_1 + 0x20) = uVar10;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x130);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x130) < (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)iVar3 + 0x130) = BVar6;
      BVar6 = *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x130);
      if ((byte)*(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x130) <
          (byte)BVar1) {
        BVar6 = BVar1;
      }
      *(BC7FineTuningParams *)(param_1 + (long)(int)(&DAT_001165e4)[lVar5 * 2] + 0x130) = BVar6;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  lVar5 = 0;
  do {
    if (param_1[lVar5 + 0x3d] != (BC7EncodingPlan)0x0) {
      BVar2 = param_1[0x326];
      param_1[(ulong)(byte)BVar2 + 0x233] = SUB81(lVar5,0);
      param_1[0x326] = (BC7EncodingPlan)((char)BVar2 + 1);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0xf3);
  lVar5 = 0;
  do {
    if (param_1[lVar5 + 0x130] != (BC7EncodingPlan)0x0) {
      BVar2 = param_1[0x232];
      param_1[(ulong)(byte)BVar2 + 0x1b1] = SUB81(lVar5,0);
      param_1[0x232] = (BC7EncodingPlan)((char)BVar2 + 1);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x81);
  *(ulong *)(param_1 + 0x28) = ~uVar4 & uVar10;
  return 1;
}



/* cvtt::Kernels::ConfigureBC7EncodingPlanFromQuality(cvtt::BC7EncodingPlan&, int) */

void cvtt::Kernels::ConfigureBC7EncodingPlanFromQuality(BC7EncodingPlan *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  BC7FineTuningParams BVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  BC7FineTuningParams *pBVar8;
  ushort *puVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_180 [2];
  undefined8 local_178 [2];
  BC7FineTuningParams local_168 [4];
  BC7FineTuningParams local_164 [12];
  BC7FineTuningParams aBStack_158 [64];
  BC7FineTuningParams aBStack_118 [64];
  BC7FineTuningParams aBStack_d8 [64];
  BC7FineTuningParams aBStack_98 [8];
  BC7FineTuningParams aBStack_90 [4];
  BC7FineTuningParams local_8c;
  BC7FineTuningParams aBStack_8b [75];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_178[0] = Tables::BC7Prio::g_bc7PrioCodesRGB;
  local_178[1] = Tables::BC7Prio::g_bc7PrioCodesRGBA;
  iVar6 = 100;
  if (param_2 < 0x65) {
    iVar6 = param_2;
  }
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  lVar10 = 0;
  local_180[0] = ((int)Tables::BC7Prio::g_bc7NumPrioCodesRGB * iVar6) / 100;
  local_180[1] = (iVar6 * (int)Tables::BC7Prio::g_bc7NumPrioCodesRGBA) / 100;
  pBVar8 = local_168;
  for (lVar7 = 0x23; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined8 *)pBVar8 = 0;
    pBVar8 = pBVar8 + 8;
  }
  *(undefined4 *)pBVar8 = 0;
  pBVar8[4] = (BC7FineTuningParams)0x0;
  while( true ) {
    puVar9 = (ushort *)local_178[lVar10];
    if (0 < local_180[lVar10]) {
      puVar1 = puVar9 + local_180[lVar10];
      do {
        uVar2 = *puVar9;
        BVar3 = (BC7FineTuningParams)cvtt::Tables::BC7Prio::UnpackSeedPointCount(uVar2);
        uVar4 = cvtt::Tables::BC7Prio::UnpackMode(uVar2);
        switch(uVar4) {
        case 0:
          iVar6 = cvtt::Tables::BC7Prio::UnpackPartition(uVar2);
          local_168[iVar6] = BVar3;
          break;
        case 1:
          iVar6 = cvtt::Tables::BC7Prio::UnpackPartition(uVar2);
          aBStack_158[iVar6] = BVar3;
          break;
        case 2:
          iVar6 = cvtt::Tables::BC7Prio::UnpackPartition(uVar2);
          aBStack_118[iVar6] = BVar3;
          break;
        case 3:
          iVar6 = cvtt::Tables::BC7Prio::UnpackPartition(uVar2);
          aBStack_d8[iVar6] = BVar3;
          break;
        case 4:
          iVar6 = cvtt::Tables::BC7Prio::UnpackRotation(uVar2);
          iVar5 = cvtt::Tables::BC7Prio::UnpackIndexSelector(uVar2);
          aBStack_98[(long)iVar5 + (long)iVar6 * 2] = BVar3;
          break;
        case 5:
          iVar6 = cvtt::Tables::BC7Prio::UnpackRotation(uVar2);
          aBStack_90[iVar6] = BVar3;
          break;
        case 6:
          local_8c = BVar3;
          break;
        case 7:
          iVar6 = cvtt::Tables::BC7Prio::UnpackPartition(uVar2);
          aBStack_8b[iVar6] = BVar3;
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1);
    }
    if (lVar10 != 0) break;
    lVar10 = 1;
  }
  ConfigureBC7EncodingPlanFromFineTuningParams(param_1,local_168);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::BC6HComputer::QuantizeEndpointsSigned(cvtt::ParallelMath::VInt16<0> const (*)
   [3], cvtt::ParallelMath::Float const (*) [3], cvtt::ParallelMath::Float const (*) [3],
   cvtt::ParallelMath::VInt16<3> (*) [3], cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::IndexSelectorHDR<3>&, int, int, int, float const*, bool,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::BC6HComputer::QuantizeEndpointsSigned
               (VInt16<0> *param_1,Float *param_2,Float *param_3,VInt16<3> *param_4,VInt16 *param_5,
               IndexSelectorHDR *param_6,int param_7,int param_8,int param_9,float *param_10,
               bool param_11,RoundTowardNearestForScope *param_12)

{
  VInt16 *pVVar1;
  undefined4 uVar2;
  uint uVar3;
  VInt16<3> *pVVar4;
  VInt16<3> *pVVar5;
  VInt16 *pVVar6;
  Float *pFVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  VInt16<0> *pVVar12;
  long lVar13;
  long in_FS_OFFSET;
  short sVar14;
  short sVar15;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  RoundUpForScope local_11c [4];
  undefined8 local_118;
  undefined8 uStack_110;
  VInt16<0> local_108 [96];
  VInt16<0> local_a8 [104];
  long local_40;
  
  uVar3 = MXCSR;
  uVar8 = (ulong)(uint)param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MXCSR = MXCSR & 0xffff9fff | 0x4000;
  lVar11 = 0;
  pVVar12 = local_a8;
  do {
    lVar9 = 0;
    lVar10 = lVar11;
    lVar13 = lVar11;
    do {
      pVVar6 = (VInt16 *)(pVVar12 + lVar13);
      local_118 = QuantizeSingleEndpointElementSigned
                            ((VInt16 *)(param_1 + lVar9),(int)uVar8,local_11c);
      pVVar1 = (VInt16 *)(local_108 + lVar13);
      lVar13 = lVar13 + 0x10;
      uStack_110 = extraout_XMM0_Qb;
      UnquantizeSingleEndpointElementSigned((VInt16 *)&local_118,(int)uVar8,pVVar1,pVVar6);
      *(undefined8 *)(param_4 + lVar9 + lVar11) = local_118;
      *(undefined8 *)(param_4 + lVar9 + lVar11 + 8) = uStack_110;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    lVar11 = lVar10 + 0x30;
    param_1 = param_1 + 0x30;
  } while (lVar11 != 0x60);
  MXCSR = uVar3;
  IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<0>,cvtt::ParallelMath::VInt16<0>>
            ((IndexSelector<3> *)param_6,param_10,local_108,pVVar12,param_9);
  IndexSelectorHDR<3>::InitHDR((IndexSelectorHDR<3> *)param_6,param_9,true,param_11,param_10);
  lVar11 = (long)param_7;
  sVar14 = (short)(param_9 / 2 + -1);
  sVar15 = sVar14;
  sVar25 = sVar14;
  sVar26 = sVar14;
  sVar27 = sVar14;
  sVar28 = sVar14;
  sVar29 = sVar14;
  sVar30 = sVar14;
  if (param_11) {
    uVar2 = *(undefined4 *)(param_6 + 0x124);
    pFVar7 = param_2 + lVar11 * 0x60;
    auVar23._4_4_ = uVar2;
    auVar23._0_4_ = uVar2;
    auVar23._8_4_ = uVar2;
    auVar23._12_4_ = uVar2;
    auVar16._0_4_ =
         (*(float *)pFVar7 - *(float *)(param_6 + 0x60)) * *(float *)(param_6 + 0xc0) +
         (*(float *)(pFVar7 + 0x20) - *(float *)(param_6 + 0x80)) * *(float *)(param_6 + 0xe0) +
         (*(float *)(pFVar7 + 0x40) - *(float *)(param_6 + 0xa0)) * *(float *)(param_6 + 0x100);
    auVar16._4_4_ =
         (*(float *)(pFVar7 + 4) - *(float *)(param_6 + 100)) * *(float *)(param_6 + 0xc4) +
         (*(float *)(pFVar7 + 0x24) - *(float *)(param_6 + 0x84)) * *(float *)(param_6 + 0xe4) +
         (*(float *)(pFVar7 + 0x44) - *(float *)(param_6 + 0xa4)) * *(float *)(param_6 + 0x104);
    auVar16._8_4_ =
         (*(float *)(pFVar7 + 8) - *(float *)(param_6 + 0x68)) * *(float *)(param_6 + 200) +
         (*(float *)(pFVar7 + 0x28) - *(float *)(param_6 + 0x88)) * *(float *)(param_6 + 0xe8) +
         (*(float *)(pFVar7 + 0x48) - *(float *)(param_6 + 0xa8)) * *(float *)(param_6 + 0x108);
    auVar16._12_4_ =
         (*(float *)(pFVar7 + 0xc) - *(float *)(param_6 + 0x6c)) * *(float *)(param_6 + 0xcc) +
         (*(float *)(pFVar7 + 0x2c) - *(float *)(param_6 + 0x8c)) * *(float *)(param_6 + 0xec) +
         (*(float *)(pFVar7 + 0x4c) - *(float *)(param_6 + 0xac)) * *(float *)(param_6 + 0x10c);
    auVar17 = minps(auVar16,auVar23);
    auVar17 = maxps(auVar17,(undefined1  [16])0x0);
    auVar24._0_4_ = (int)auVar17._0_4_;
    auVar24._4_4_ = (int)auVar17._4_4_;
    auVar24._8_4_ = (int)auVar17._8_4_;
    auVar24._12_4_ = (int)auVar17._12_4_;
    auVar19._0_4_ =
         (*(float *)(pFVar7 + 0x10) - *(float *)(param_6 + 0x70)) * *(float *)(param_6 + 0xd0) +
         (*(float *)(pFVar7 + 0x30) - *(float *)(param_6 + 0x90)) * *(float *)(param_6 + 0xf0) +
         (*(float *)(pFVar7 + 0x50) - *(float *)(param_6 + 0xb0)) * *(float *)(param_6 + 0x110);
    auVar19._4_4_ =
         (*(float *)(pFVar7 + 0x14) - *(float *)(param_6 + 0x74)) * *(float *)(param_6 + 0xd4) +
         (*(float *)(pFVar7 + 0x34) - *(float *)(param_6 + 0x94)) * *(float *)(param_6 + 0xf4) +
         (*(float *)(pFVar7 + 0x54) - *(float *)(param_6 + 0xb4)) * *(float *)(param_6 + 0x114);
    auVar19._8_4_ =
         (*(float *)(pFVar7 + 0x18) - *(float *)(param_6 + 0x78)) * *(float *)(param_6 + 0xd8) +
         (*(float *)(pFVar7 + 0x38) - *(float *)(param_6 + 0x98)) * *(float *)(param_6 + 0xf8) +
         (*(float *)(pFVar7 + 0x58) - *(float *)(param_6 + 0xb8)) * *(float *)(param_6 + 0x118);
    auVar19._12_4_ =
         (*(float *)(pFVar7 + 0x1c) - *(float *)(param_6 + 0x7c)) * *(float *)(param_6 + 0xdc) +
         (*(float *)(pFVar7 + 0x3c) - *(float *)(param_6 + 0x9c)) * *(float *)(param_6 + 0xfc) +
         (*(float *)(pFVar7 + 0x5c) - *(float *)(param_6 + 0xbc)) * *(float *)(param_6 + 0x11c);
    auVar17 = minps(auVar19,auVar23);
    auVar17 = maxps(auVar17,(undefined1  [16])0x0);
    auVar20._0_4_ = (int)auVar17._0_4_;
    auVar20._4_4_ = (int)auVar17._4_4_;
    auVar20._8_4_ = (int)auVar17._8_4_;
    auVar20._12_4_ = (int)auVar17._12_4_;
    auVar17 = packssdw(auVar24,auVar20);
    auVar21._0_2_ = *(short *)(param_6 + 0x740) - auVar17._0_2_;
    auVar21._2_2_ = *(short *)(param_6 + 0x742) - auVar17._2_2_;
    auVar21._4_2_ = *(short *)(param_6 + 0x744) - auVar17._4_2_;
    auVar21._6_2_ = *(short *)(param_6 + 0x746) - auVar17._6_2_;
    auVar21._8_2_ = *(short *)(param_6 + 0x748) - auVar17._8_2_;
    auVar21._10_2_ = *(short *)(param_6 + 0x74a) - auVar17._10_2_;
    auVar21._12_2_ = *(short *)(param_6 + 0x74c) - auVar17._12_2_;
    auVar21._14_2_ = *(short *)(param_6 + 0x74e) - auVar17._14_2_;
    auVar17 = auVar21 & *(undefined1 (*) [16])(param_6 + 0x730) |
              ~*(undefined1 (*) [16])(param_6 + 0x730) & auVar17;
  }
  else {
    auVar17._0_8_ =
         IndexSelectorHDR<3>::SelectIndexHDRSlow
                   ((Float *)param_6,(RoundTowardNearestForScope *)(param_3 + lVar11 * 0x60));
    auVar17._8_8_ = extraout_XMM0_Qb_00;
  }
  auVar22._0_2_ = -(ushort)(sVar14 < auVar17._0_2_);
  auVar22._2_2_ = -(ushort)(sVar15 < auVar17._2_2_);
  auVar22._4_2_ = -(ushort)(sVar25 < auVar17._4_2_);
  auVar22._6_2_ = -(ushort)(sVar26 < auVar17._6_2_);
  auVar22._8_2_ = -(ushort)(sVar27 < auVar17._8_2_);
  auVar22._10_2_ = -(ushort)(sVar28 < auVar17._10_2_);
  auVar22._12_2_ = -(ushort)(sVar29 < auVar17._12_2_);
  auVar22._14_2_ = -(ushort)(sVar30 < auVar17._14_2_);
  if ((((((((((((((((auVar22 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar22 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar22 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar22 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar22 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar22 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar22 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar22 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar22 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar22 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar22 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar22 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar22 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar22 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar22._14_2_ >> 7 & 1) != 0) || (auVar22._14_2_ & 0x8000) != 0) {
    *(undefined1 (*) [16])(param_6 + 0x730) = auVar22;
    pVVar4 = param_4 + 0x30;
    auVar16 = *(undefined1 (*) [16])param_4;
    auVar24 = *(undefined1 (*) [16])(param_4 + 0x20);
    auVar19 = *(undefined1 (*) [16])(param_4 + 0x10);
    do {
      auVar20 = auVar24;
      pVVar5 = pVVar4 + 0x10;
      auVar24 = auVar16 & auVar22 | ~auVar22 & *(undefined1 (*) [16])pVVar4;
      *(undefined1 (*) [16])(pVVar4 + -0x30) =
           *(undefined1 (*) [16])pVVar4 & auVar22 | ~auVar22 & auVar16;
      *(undefined1 (*) [16])pVVar4 = auVar24;
      pVVar4 = pVVar5;
      auVar16 = auVar19;
      auVar19 = auVar20;
    } while (pVVar5 != param_4 + 0x60);
    sVar15 = (short)(param_9 + -1);
    auVar18._0_2_ = sVar15 - auVar17._0_2_;
    auVar18._2_2_ = sVar15 - auVar17._2_2_;
    auVar18._4_2_ = sVar15 - auVar17._4_2_;
    auVar18._6_2_ = sVar15 - auVar17._6_2_;
    auVar18._8_2_ = sVar15 - auVar17._8_2_;
    auVar18._10_2_ = sVar15 - auVar17._10_2_;
    auVar18._12_2_ = sVar15 - auVar17._12_2_;
    auVar18._14_2_ = sVar15 - auVar17._14_2_;
    auVar17 = auVar22 & auVar18 | ~auVar22 & auVar17;
  }
  *(undefined1 (*) [16])(param_5 + lVar11 * 0x10) = auVar17;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC6HComputer::QuantizeEndpointsUnsigned(cvtt::ParallelMath::VInt16<0> const (*)
   [3], cvtt::ParallelMath::Float const (*) [3], cvtt::ParallelMath::Float const (*) [3],
   cvtt::ParallelMath::VInt16<3> (*) [3], cvtt::ParallelMath::VInt16<2>*,
   cvtt::Internal::IndexSelectorHDR<3>&, int, int, int, float const*, bool,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::BC6HComputer::QuantizeEndpointsUnsigned
               (VInt16<0> *param_1,Float *param_2,Float *param_3,VInt16<3> *param_4,VInt16 *param_5,
               IndexSelectorHDR *param_6,int param_7,int param_8,int param_9,float *param_10,
               bool param_11,RoundTowardNearestForScope *param_12)

{
  VInt16 *pVVar1;
  VInt16 *pVVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  uint uVar5;
  VInt16<3> *pVVar6;
  VInt16<3> *pVVar7;
  Float *pFVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  VInt16<1> *pVVar14;
  VInt16<0> *pVVar15;
  long in_FS_OFFSET;
  short sVar16;
  short sVar17;
  int iVar18;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  ushort uVar33;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ushort uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  undefined2 uVar53;
  undefined2 uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  long lVar71;
  undefined1 auVar72 [16];
  short sVar73;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  ushort local_118;
  ushort uStack_116;
  ushort uStack_114;
  ushort uStack_112;
  ushort uStack_110;
  ushort uStack_10e;
  ushort uStack_10c;
  ushort uStack_10a;
  VInt16<1> local_108 [96];
  VInt16<1> local_a8 [104];
  long local_40;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar5 = MXCSR;
  uVar10 = (ulong)(uint)param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  MXCSR = MXCSR & 0xffff9fff | 0x4000;
  lVar9 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  auVar72 = ZEXT416(0x10 - param_8);
  pVVar14 = local_a8;
  uVar59 = _LC22;
  uVar60 = _LC22;
  uVar61 = _LC22;
  uVar62 = _LC22;
  uVar63 = _LC7;
  uVar64 = _LC7;
  uVar65 = _LC7;
  uVar66 = _LC7;
  fVar67 = _LC9;
  fVar68 = _LC9;
  fVar69 = _LC9;
  fVar70 = _LC9;
  auVar25 = __LC11;
  fVar55 = _LC24;
  fVar56 = _LC24;
  fVar57 = _LC24;
  fVar58 = _LC24;
  do {
    lVar11 = 0;
    lVar12 = lVar9 * 0x10;
    lVar13 = lVar12;
    pVVar15 = param_1;
    do {
      auVar23 = *(undefined1 (*) [16])(param_1 + lVar11 + lVar12);
      pVVar1 = (VInt16 *)(pVVar14 + lVar13);
      pVVar2 = (VInt16 *)(local_108 + lVar13);
      lVar13 = lVar13 + 0x10;
      iVar18 = CONCAT22(uVar51,auVar23._8_2_);
      auVar19._0_8_ = CONCAT26(uVar52,CONCAT24(auVar23._10_2_,iVar18));
      auVar19._8_2_ = auVar23._12_2_;
      auVar19._10_2_ = uVar53;
      auVar20._12_2_ = auVar23._14_2_;
      auVar20._0_12_ = auVar19;
      auVar20._14_2_ = uVar54;
      auVar36._0_12_ = auVar23._0_12_;
      auVar36._12_2_ = auVar23._6_2_;
      auVar36._14_2_ = uVar50;
      auVar35._12_4_ = auVar36._12_4_;
      auVar35._0_10_ = auVar23._0_10_;
      auVar35._10_2_ = uVar49;
      auVar34._10_6_ = auVar35._10_6_;
      auVar34._0_8_ = auVar23._0_8_;
      auVar34._8_2_ = auVar23._4_2_;
      auVar4._4_8_ = auVar34._8_8_;
      auVar4._2_2_ = uVar48;
      auVar4._0_2_ = auVar23._2_2_;
      auVar21._0_4_ = (float)iVar18 * fVar67;
      auVar21._4_4_ = (float)(int)((ulong)auVar19._0_8_ >> 0x20) * fVar68;
      auVar21._8_4_ = (float)auVar19._8_4_ * fVar69;
      auVar21._12_4_ = (float)auVar20._12_4_ * fVar70;
      auVar37._0_4_ = (float)CONCAT22(uVar47,auVar23._0_2_) * fVar67;
      auVar37._4_4_ = (float)auVar4._0_4_ * fVar68;
      auVar37._8_4_ = (float)auVar34._8_4_ * fVar69;
      auVar37._12_4_ = (float)auVar35._12_4_ * fVar70;
      auVar38._4_4_ = uVar64;
      auVar38._0_4_ = uVar63;
      auVar38._8_4_ = uVar65;
      auVar38._12_4_ = uVar66;
      auVar22 = divps(auVar21,auVar38);
      auVar3._4_4_ = uVar64;
      auVar3._0_4_ = uVar63;
      auVar3._8_4_ = uVar65;
      auVar3._12_4_ = uVar66;
      auVar38 = divps(auVar37,auVar3);
      auVar23._4_4_ = uVar60;
      auVar23._0_4_ = uVar59;
      auVar23._8_4_ = uVar61;
      auVar23._12_4_ = uVar62;
      auVar23 = minps(auVar22,auVar23);
      auVar24._0_4_ = (int)(auVar23._0_4_ + fVar55);
      auVar24._4_4_ = (int)(auVar23._4_4_ + fVar56);
      auVar24._8_4_ = (int)(auVar23._8_4_ + fVar57);
      auVar24._12_4_ = (int)(auVar23._12_4_ + fVar58);
      auVar22._4_4_ = uVar60;
      auVar22._0_4_ = uVar59;
      auVar22._8_4_ = uVar61;
      auVar22._12_4_ = uVar62;
      auVar23 = minps(auVar38,auVar22);
      auVar39._0_4_ = (int)(auVar23._0_4_ + fVar55);
      auVar39._4_4_ = (int)(auVar23._4_4_ + fVar56);
      auVar39._8_4_ = (int)(auVar23._8_4_ + fVar57);
      auVar39._12_4_ = (int)(auVar23._12_4_ + fVar58);
      auVar23 = packssdw(auVar39,auVar24);
      auVar23 = auVar23 ^ auVar25;
      lVar71 = auVar72._0_8_;
      uVar33 = auVar23._0_2_ >> lVar71;
      uVar40 = auVar23._2_2_ >> lVar71;
      uVar41 = auVar23._4_2_ >> lVar71;
      uVar42 = auVar23._6_2_ >> lVar71;
      uVar43 = auVar23._8_2_ >> lVar71;
      uVar44 = auVar23._10_2_ >> lVar71;
      uVar45 = auVar23._12_2_ >> lVar71;
      uVar46 = auVar23._14_2_ >> lVar71;
      local_118 = uVar33;
      uStack_116 = uVar40;
      uStack_114 = uVar41;
      uStack_112 = uVar42;
      uStack_110 = uVar43;
      uStack_10e = uVar44;
      uStack_10c = uVar45;
      uStack_10a = uVar46;
      UnquantizeSingleEndpointElementUnsigned((VInt16 *)&local_118,(int)uVar10,pVVar2,pVVar1);
      pVVar6 = param_4 + lVar11 + lVar12;
      *(ushort *)pVVar6 = uVar33;
      *(ushort *)(pVVar6 + 2) = uVar40;
      *(ushort *)(pVVar6 + 4) = uVar41;
      *(ushort *)(pVVar6 + 6) = uVar42;
      *(ushort *)(pVVar6 + 8) = uVar43;
      *(ushort *)(pVVar6 + 10) = uVar44;
      *(ushort *)(pVVar6 + 0xc) = uVar45;
      *(ushort *)(pVVar6 + 0xe) = uVar46;
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != 0x30);
    lVar9 = lVar9 + 3;
    param_1 = pVVar15;
  } while (lVar9 != 6);
  MXCSR = uVar5;
  IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<1>,cvtt::ParallelMath::VInt16<1>>
            ((IndexSelector<3> *)param_6,param_10,local_108,pVVar14,param_9);
  IndexSelectorHDR<3>::InitHDR((IndexSelectorHDR<3> *)param_6,param_9,false,param_11,param_10);
  lVar9 = (long)param_7;
  sVar16 = (short)(param_9 / 2 + -1);
  sVar17 = sVar16;
  sVar73 = sVar16;
  sVar74 = sVar16;
  sVar75 = sVar16;
  sVar76 = sVar16;
  sVar77 = sVar16;
  sVar78 = sVar16;
  if (param_11) {
    uVar59 = *(undefined4 *)(param_6 + 0x124);
    pFVar8 = param_2 + lVar9 * 0x60;
    auVar32._4_4_ = uVar59;
    auVar32._0_4_ = uVar59;
    auVar32._8_4_ = uVar59;
    auVar32._12_4_ = uVar59;
    auVar72._0_4_ =
         (*(float *)pFVar8 - *(float *)(param_6 + 0x60)) * *(float *)(param_6 + 0xc0) +
         (*(float *)(pFVar8 + 0x20) - *(float *)(param_6 + 0x80)) * *(float *)(param_6 + 0xe0) +
         (*(float *)(pFVar8 + 0x40) - *(float *)(param_6 + 0xa0)) * *(float *)(param_6 + 0x100);
    auVar72._4_4_ =
         (*(float *)(pFVar8 + 4) - *(float *)(param_6 + 100)) * *(float *)(param_6 + 0xc4) +
         (*(float *)(pFVar8 + 0x24) - *(float *)(param_6 + 0x84)) * *(float *)(param_6 + 0xe4) +
         (*(float *)(pFVar8 + 0x44) - *(float *)(param_6 + 0xa4)) * *(float *)(param_6 + 0x104);
    auVar72._8_4_ =
         (*(float *)(pFVar8 + 8) - *(float *)(param_6 + 0x68)) * *(float *)(param_6 + 200) +
         (*(float *)(pFVar8 + 0x28) - *(float *)(param_6 + 0x88)) * *(float *)(param_6 + 0xe8) +
         (*(float *)(pFVar8 + 0x48) - *(float *)(param_6 + 0xa8)) * *(float *)(param_6 + 0x108);
    auVar72._12_4_ =
         (*(float *)(pFVar8 + 0xc) - *(float *)(param_6 + 0x6c)) * *(float *)(param_6 + 0xcc) +
         (*(float *)(pFVar8 + 0x2c) - *(float *)(param_6 + 0x8c)) * *(float *)(param_6 + 0xec) +
         (*(float *)(pFVar8 + 0x4c) - *(float *)(param_6 + 0xac)) * *(float *)(param_6 + 0x10c);
    auVar25 = minps(auVar72,auVar32);
    auVar25 = maxps(auVar25,(undefined1  [16])0x0);
    auVar26._0_4_ = (int)auVar25._0_4_;
    auVar26._4_4_ = (int)auVar25._4_4_;
    auVar26._8_4_ = (int)auVar25._8_4_;
    auVar26._12_4_ = (int)auVar25._12_4_;
    auVar28._0_4_ =
         (*(float *)(pFVar8 + 0x10) - *(float *)(param_6 + 0x70)) * *(float *)(param_6 + 0xd0) +
         (*(float *)(pFVar8 + 0x30) - *(float *)(param_6 + 0x90)) * *(float *)(param_6 + 0xf0) +
         (*(float *)(pFVar8 + 0x50) - *(float *)(param_6 + 0xb0)) * *(float *)(param_6 + 0x110);
    auVar28._4_4_ =
         (*(float *)(pFVar8 + 0x14) - *(float *)(param_6 + 0x74)) * *(float *)(param_6 + 0xd4) +
         (*(float *)(pFVar8 + 0x34) - *(float *)(param_6 + 0x94)) * *(float *)(param_6 + 0xf4) +
         (*(float *)(pFVar8 + 0x54) - *(float *)(param_6 + 0xb4)) * *(float *)(param_6 + 0x114);
    auVar28._8_4_ =
         (*(float *)(pFVar8 + 0x18) - *(float *)(param_6 + 0x78)) * *(float *)(param_6 + 0xd8) +
         (*(float *)(pFVar8 + 0x38) - *(float *)(param_6 + 0x98)) * *(float *)(param_6 + 0xf8) +
         (*(float *)(pFVar8 + 0x58) - *(float *)(param_6 + 0xb8)) * *(float *)(param_6 + 0x118);
    auVar28._12_4_ =
         (*(float *)(pFVar8 + 0x1c) - *(float *)(param_6 + 0x7c)) * *(float *)(param_6 + 0xdc) +
         (*(float *)(pFVar8 + 0x3c) - *(float *)(param_6 + 0x9c)) * *(float *)(param_6 + 0xfc) +
         (*(float *)(pFVar8 + 0x5c) - *(float *)(param_6 + 0xbc)) * *(float *)(param_6 + 0x11c);
    auVar25 = minps(auVar28,auVar32);
    auVar25 = maxps(auVar25,(undefined1  [16])0x0);
    auVar29._0_4_ = (int)auVar25._0_4_;
    auVar29._4_4_ = (int)auVar25._4_4_;
    auVar29._8_4_ = (int)auVar25._8_4_;
    auVar29._12_4_ = (int)auVar25._12_4_;
    auVar25 = packssdw(auVar26,auVar29);
    auVar30._0_2_ = *(short *)(param_6 + 0x740) - auVar25._0_2_;
    auVar30._2_2_ = *(short *)(param_6 + 0x742) - auVar25._2_2_;
    auVar30._4_2_ = *(short *)(param_6 + 0x744) - auVar25._4_2_;
    auVar30._6_2_ = *(short *)(param_6 + 0x746) - auVar25._6_2_;
    auVar30._8_2_ = *(short *)(param_6 + 0x748) - auVar25._8_2_;
    auVar30._10_2_ = *(short *)(param_6 + 0x74a) - auVar25._10_2_;
    auVar30._12_2_ = *(short *)(param_6 + 0x74c) - auVar25._12_2_;
    auVar30._14_2_ = *(short *)(param_6 + 0x74e) - auVar25._14_2_;
    auVar25 = auVar30 & *(undefined1 (*) [16])(param_6 + 0x730) |
              ~*(undefined1 (*) [16])(param_6 + 0x730) & auVar25;
  }
  else {
    auVar25._0_8_ =
         IndexSelectorHDR<3>::SelectIndexHDRSlow
                   ((Float *)param_6,(RoundTowardNearestForScope *)(param_3 + lVar9 * 0x60));
    auVar25._8_8_ = extraout_XMM0_Qb;
  }
  auVar31._0_2_ = -(ushort)(sVar16 < auVar25._0_2_);
  auVar31._2_2_ = -(ushort)(sVar17 < auVar25._2_2_);
  auVar31._4_2_ = -(ushort)(sVar73 < auVar25._4_2_);
  auVar31._6_2_ = -(ushort)(sVar74 < auVar25._6_2_);
  auVar31._8_2_ = -(ushort)(sVar75 < auVar25._8_2_);
  auVar31._10_2_ = -(ushort)(sVar76 < auVar25._10_2_);
  auVar31._12_2_ = -(ushort)(sVar77 < auVar25._12_2_);
  auVar31._14_2_ = -(ushort)(sVar78 < auVar25._14_2_);
  if ((((((((((((((((auVar31 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar31 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar31 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar31 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar31 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar31 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar31 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar31 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar31 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar31 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar31 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar31 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar31 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar31 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar31._14_2_ >> 7 & 1) != 0) || (auVar31._14_2_ & 0x8000) != 0) {
    *(undefined1 (*) [16])(param_6 + 0x730) = auVar31;
    sVar17 = (short)(param_9 + -1);
    auVar27._0_2_ = sVar17 - auVar25._0_2_;
    auVar27._2_2_ = sVar17 - auVar25._2_2_;
    auVar27._4_2_ = sVar17 - auVar25._4_2_;
    auVar27._6_2_ = sVar17 - auVar25._6_2_;
    auVar27._8_2_ = sVar17 - auVar25._8_2_;
    auVar27._10_2_ = sVar17 - auVar25._10_2_;
    auVar27._12_2_ = sVar17 - auVar25._12_2_;
    auVar27._14_2_ = sVar17 - auVar25._14_2_;
    auVar25 = auVar27 & auVar31 | ~auVar31 & auVar25;
    pVVar6 = param_4 + 0x30;
    auVar72 = *(undefined1 (*) [16])param_4;
    auVar23 = *(undefined1 (*) [16])(param_4 + 0x20);
    auVar22 = *(undefined1 (*) [16])(param_4 + 0x10);
    do {
      auVar38 = auVar23;
      pVVar7 = pVVar6 + 0x10;
      *(undefined1 (*) [16])(pVVar6 + -0x30) =
           *(undefined1 (*) [16])pVVar6 & auVar31 | ~auVar31 & auVar72;
      auVar23 = auVar72 & auVar31 | ~auVar31 & *(undefined1 (*) [16])pVVar6;
      *(undefined1 (*) [16])pVVar6 = auVar23;
      pVVar6 = pVVar7;
      auVar72 = auVar22;
      auVar22 = auVar38;
    } while (pVVar7 != param_4 + 0x60);
  }
  *(undefined1 (*) [16])(param_5 + lVar9 * 0x10) = auVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::TrySinglePlane(unsigned int, cvtt::ParallelMath::VInt16<2> const (*)
   [4], cvtt::ParallelMath::Float const (*) [4], float const*, cvtt::BC7EncodingPlan const&, int,
   cvtt::Internal::BC67::WorkInfo&, cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::BC7Computer::TrySinglePlane
               (uint param_1,VInt16<2> *param_2,Float *param_3,float *param_4,
               BC7EncodingPlan *param_5,int param_6,WorkInfo *param_7,
               RoundTowardNearestForScope *param_8)

{
  float *pfVar1;
  Float *pFVar2;
  byte *pbVar3;
  short *psVar4;
  int *piVar5;
  EndpointSelector<3,8> *this;
  ushort *puVar6;
  Float *pFVar7;
  EndpointSelector<4,8> *this_00;
  uint *puVar8;
  byte bVar9;
  int iVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [14];
  undefined1 auVar69 [14];
  undefined1 auVar70 [14];
  undefined1 auVar71 [14];
  undefined1 auVar72 [14];
  undefined1 auVar73 [14];
  undefined1 auVar74 [14];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  undefined1 auVar78 [12];
  int iVar79;
  int iVar80;
  uint uVar81;
  VInt16<2> *pVVar82;
  long lVar83;
  EndpointSelector<3,8> *pEVar84;
  EndpointSelector<3,8> *pEVar85;
  undefined1 (*pauVar86) [16];
  undefined4 *puVar87;
  undefined4 *puVar88;
  float *pfVar89;
  undefined1 (*pauVar90) [16];
  undefined1 (*pauVar91) [16];
  short *psVar92;
  short *psVar93;
  Float *pFVar94;
  EndpointSelector<3,8> *pEVar95;
  ulong uVar96;
  EndpointSelector<4,8> *pEVar97;
  EndpointSelector<4,8> *pEVar98;
  uint uVar99;
  long lVar100;
  long lVar101;
  undefined8 *puVar102;
  short *psVar103;
  ulong uVar104;
  float *pfVar105;
  IndexSelector<4> *pIVar106;
  IndexSelector<4> *pIVar107;
  Float *pFVar108;
  ushort *puVar109;
  short *psVar110;
  undefined8 uVar111;
  long lVar112;
  undefined1 *puVar113;
  undefined1 *puVar114;
  byte *pbVar115;
  IndexSelector<4> *pIVar116;
  undefined1 (*pauVar117) [16];
  undefined1 *puVar118;
  EndpointSelector<4,8> *pEVar119;
  undefined1 (*pauVar120) [16];
  float *pfVar121;
  int iVar122;
  long lVar123;
  ulong uVar124;
  int *piVar125;
  IndexSelector<4> *this_01;
  byte *pbVar126;
  long in_FS_OFFSET;
  char cVar127;
  undefined2 uVar128;
  int iVar130;
  short sVar154;
  int iVar153;
  ushort uVar155;
  int iVar156;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  int iVar157;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  short sVar158;
  short sVar178;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  short sVar179;
  short sVar180;
  short sVar194;
  short sVar196;
  short sVar197;
  short sVar200;
  short sVar202;
  short sVar204;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  short sVar198;
  short sVar206;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  short sVar195;
  short sVar199;
  short sVar201;
  short sVar203;
  short sVar205;
  short sVar207;
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  short sVar218;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  float fVar219;
  float fVar226;
  int iVar227;
  undefined1 auVar220 [16];
  float fVar228;
  int iVar229;
  float fVar230;
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  ushort uVar236;
  float fVar231;
  ushort uVar237;
  ushort uVar239;
  float fVar238;
  ushort uVar240;
  ushort uVar242;
  float fVar241;
  ushort uVar243;
  ushort uVar245;
  float fVar244;
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  float fVar246;
  float fVar256;
  float fVar257;
  float fVar258;
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  float fVar259;
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  float fVar276;
  float fVar277;
  float fVar278;
  undefined1 auVar275 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  float afStack_24654 [131];
  int aiStack_24448 [96];
  int aiStack_242c8 [166];
  undefined1 auStack_24030 [49736];
  undefined8 auStack_17de8 [30];
  undefined4 auStack_17cf8 [24370];
  undefined4 uVar129;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  
  puVar118 = &stack0xffffffffffffffd0;
  do {
    puVar114 = puVar118;
    *(undefined8 *)(puVar114 + -0x1000) = *(undefined8 *)(puVar114 + -0x1000);
    puVar118 = puVar114 + -0x1000;
  } while (puVar114 + -0x1000 != auStack_24030);
  *(undefined8 *)(puVar114 + -0x1968) = *(undefined8 *)(puVar114 + 0x23038);
  *(Float **)(puVar114 + -0x19b8) = param_3;
  *(uint *)(puVar114 + -0x1858) = param_1;
  *(VInt16<2> **)(puVar114 + -0x19e0) = param_2;
  *(float **)(puVar114 + -0x1908) = param_4;
  *(BC7EncodingPlan **)(puVar114 + -0x1898) = param_5;
  *(undefined8 *)(puVar114 + -0x1680) = *(undefined8 *)(puVar114 + 0x23040);
  *(undefined8 *)(puVar114 + 0x22ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 **)(puVar114 + -0x1728) = Tables::BC7SC::g_mode7_p00;
  *(undefined1 **)(puVar114 + -0x1720) = Tables::BC7SC::g_mode7_p01;
  *(undefined1 **)(puVar114 + -0x1718) = Tables::BC7SC::g_mode7_p10;
  *(undefined1 **)(puVar114 + -0x1710) = Tables::BC7SC::g_mode7_p11;
  *(undefined1 **)(puVar114 + -0x17b8) = Tables::BC7SC::g_mode6_p0_i1;
  *(undefined1 **)(puVar114 + -0x17b0) = Tables::BC7SC::g_mode6_p0_i2;
  *(undefined1 **)(puVar114 + -0x17c8) = Tables::BC7SC::g_mode6_p0_i3;
  *(undefined1 **)(puVar114 + -0x17c0) = Tables::BC7SC::g_mode6_p0_i4;
  *(undefined1 **)(puVar114 + -0x1698) = Tables::BC7SC::g_mode6_p0_i5;
  *(undefined1 **)(puVar114 + -0x1690) = Tables::BC7SC::g_mode6_p0_i6;
  *(undefined1 **)(puVar114 + -0x1758) = Tables::BC7SC::g_mode6_p0_i7;
  *(undefined1 **)(puVar114 + -0x1750) = Tables::BC7SC::g_mode6_p1_i1;
  *(undefined1 **)(puVar114 + -0x1738) = Tables::BC7SC::g_mode6_p1_i2;
  *(undefined1 **)(puVar114 + -0x1730) = Tables::BC7SC::g_mode6_p1_i3;
  *(undefined1 **)(puVar114 + -0x1798) = Tables::BC7SC::g_mode6_p1_i4;
  *(undefined1 **)(puVar114 + -0x1790) = Tables::BC7SC::g_mode6_p1_i5;
  *(undefined1 **)(puVar114 + -0x1788) = Tables::BC7SC::g_mode6_p1_i6;
  *(undefined1 **)(puVar114 + -0x1780) = Tables::BC7SC::g_mode6_p1_i7;
  *(undefined1 **)(puVar114 + -0x16c8) = Tables::BC7SC::g_mode3_p0;
  *(undefined1 **)(puVar114 + -0x16c0) = Tables::BC7SC::g_mode3_p1;
  *(undefined1 **)(puVar114 + -0x16d8) = Tables::BC7SC::g_mode1_p0_i1;
  *(undefined1 **)(puVar114 + -0x16d0) = Tables::BC7SC::g_mode1_p0_i2;
  *(undefined1 **)(puVar114 + -0x16a8) = Tables::BC7SC::g_mode1_p0_i3;
  *(undefined1 **)(puVar114 + -0x16a0) = Tables::BC7SC::g_mode1_p1_i1;
  *(undefined1 **)(puVar114 + -0x1768) = Tables::BC7SC::g_mode1_p1_i2;
  *(undefined1 **)(puVar114 + -0x1760) = Tables::BC7SC::g_mode1_p1_i3;
  *(undefined1 **)(puVar114 + -0x1708) = Tables::BC7SC::g_mode0_p00_i1;
  *(undefined1 **)(puVar114 + -0x1700) = Tables::BC7SC::g_mode0_p00_i2;
  *(undefined1 **)(puVar114 + -0x16f8) = Tables::BC7SC::g_mode0_p00_i3;
  *(undefined1 **)(puVar114 + -0x16f0) = Tables::BC7SC::g_mode0_p01_i1;
  *(undefined1 **)(puVar114 + -0x16e8) = Tables::BC7SC::g_mode0_p01_i2;
  *(undefined1 **)(puVar114 + -0x16e0) = Tables::BC7SC::g_mode0_p01_i3;
  *(undefined1 **)(puVar114 + -0x1748) = Tables::BC7SC::g_mode0_p10_i1;
  *(undefined1 **)(puVar114 + -0x1740) = Tables::BC7SC::g_mode0_p10_i2;
  *(undefined1 **)(puVar114 + -0x16b8) = Tables::BC7SC::g_mode0_p10_i3;
  *(undefined1 **)(puVar114 + -0x16b0) = Tables::BC7SC::g_mode0_p11_i1;
  iVar122 = 1;
  if (0 < param_6) {
    iVar122 = param_6;
  }
  *(undefined1 **)(puVar114 + -0x1778) = Tables::BC7SC::g_mode0_p11_i2;
  *(undefined1 **)(puVar114 + -6000) = Tables::BC7SC::g_mode0_p11_i3;
  fVar219 = *param_4;
  fVar226 = param_4[1];
  fVar228 = param_4[2];
  fVar230 = param_4[3];
  *(int *)(puVar114 + -0x18c0) = iVar122;
  pVVar82 = param_2 + 0x30;
  *(float *)(puVar114 + -0x1a28) = fVar219;
  *(float *)(puVar114 + -0x1a24) = fVar226;
  *(float *)(puVar114 + -0x1a20) = fVar228;
  *(float *)(puVar114 + -0x1a1c) = fVar230;
  auVar133._2_2_ = _UNK_0011b6c2;
  auVar133._0_2_ = __LC37;
  auVar133._4_2_ = _UNK_0011b6c4;
  auVar133._6_2_ = _UNK_0011b6c6;
  auVar133._8_2_ = _UNK_0011b6c8;
  auVar133._10_2_ = _UNK_0011b6ca;
  auVar133._12_2_ = _UNK_0011b6cc;
  auVar133._14_2_ = _UNK_0011b6ce;
  *(float *)(puVar114 + -0x18f8) = fVar219 * fVar219;
  *(float *)(puVar114 + -0x18f4) = fVar226 * fVar226;
  *(float *)(puVar114 + -0x18f0) = fVar228 * fVar228;
  *(float *)(puVar114 + -0x18ec) = fVar230 * fVar230;
  *(float *)(puVar114 + -0x1628) = fVar219 * fVar219;
  *(float *)(puVar114 + -0x1624) = fVar226 * fVar226;
  *(float *)(puVar114 + -0x1620) = fVar228 * fVar228;
  *(float *)(puVar114 + -0x161c) = fVar230 * fVar230;
  *(undefined4 *)(puVar114 + -0x1878) = 0xffffffff;
  *(undefined4 *)(puVar114 + -0x1874) = 0xffffffff;
  *(undefined4 *)(puVar114 + -0x1870) = 0xffffffff;
  *(undefined4 *)(puVar114 + -0x186c) = 0xffffffff;
  auVar271 = (undefined1  [16])0x0;
  do {
    sVar154 = *(short *)pVVar82;
    sVar21 = *(short *)(pVVar82 + 2);
    sVar22 = *(short *)(pVVar82 + 4);
    sVar23 = *(short *)(pVVar82 + 6);
    sVar24 = *(short *)(pVVar82 + 8);
    sVar25 = *(short *)(pVVar82 + 10);
    sVar26 = *(short *)(pVVar82 + 0xc);
    sVar27 = *(short *)(pVVar82 + 0xe);
    pVVar82 = pVVar82 + 0x40;
    sVar158 = auVar271._0_2_;
    auVar264._0_2_ = (ushort)(sVar158 < sVar154) * sVar154 | (ushort)(sVar158 >= sVar154) * sVar158;
    sVar158 = auVar271._2_2_;
    auVar264._2_2_ = (ushort)(sVar158 < sVar21) * sVar21 | (ushort)(sVar158 >= sVar21) * sVar158;
    sVar158 = auVar271._4_2_;
    auVar264._4_2_ = (ushort)(sVar158 < sVar22) * sVar22 | (ushort)(sVar158 >= sVar22) * sVar158;
    sVar158 = auVar271._6_2_;
    auVar264._6_2_ = (ushort)(sVar158 < sVar23) * sVar23 | (ushort)(sVar158 >= sVar23) * sVar158;
    sVar158 = auVar271._8_2_;
    auVar264._8_2_ = (ushort)(sVar158 < sVar24) * sVar24 | (ushort)(sVar158 >= sVar24) * sVar158;
    sVar158 = auVar271._10_2_;
    auVar264._10_2_ = (ushort)(sVar158 < sVar25) * sVar25 | (ushort)(sVar158 >= sVar25) * sVar158;
    sVar158 = auVar271._12_2_;
    sVar178 = auVar271._14_2_;
    auVar264._12_2_ = (ushort)(sVar158 < sVar26) * sVar26 | (ushort)(sVar158 >= sVar26) * sVar158;
    auVar264._14_2_ = (ushort)(sVar178 < sVar27) * sVar27 | (ushort)(sVar178 >= sVar27) * sVar178;
    sVar158 = auVar133._0_2_;
    auVar248._0_2_ = (ushort)(sVar154 < sVar158) * sVar154 | (ushort)(sVar154 >= sVar158) * sVar158;
    sVar158 = auVar133._2_2_;
    auVar248._2_2_ = (ushort)(sVar21 < sVar158) * sVar21 | (ushort)(sVar21 >= sVar158) * sVar158;
    sVar158 = auVar133._4_2_;
    auVar248._4_2_ = (ushort)(sVar22 < sVar158) * sVar22 | (ushort)(sVar22 >= sVar158) * sVar158;
    sVar158 = auVar133._6_2_;
    auVar248._6_2_ = (ushort)(sVar23 < sVar158) * sVar23 | (ushort)(sVar23 >= sVar158) * sVar158;
    sVar158 = auVar133._8_2_;
    auVar248._8_2_ = (ushort)(sVar24 < sVar158) * sVar24 | (ushort)(sVar24 >= sVar158) * sVar158;
    sVar158 = auVar133._10_2_;
    auVar248._10_2_ = (ushort)(sVar25 < sVar158) * sVar25 | (ushort)(sVar25 >= sVar158) * sVar158;
    sVar158 = auVar133._12_2_;
    sVar178 = auVar133._14_2_;
    auVar248._12_2_ = (ushort)(sVar26 < sVar158) * sVar26 | (ushort)(sVar26 >= sVar158) * sVar158;
    auVar248._14_2_ = (ushort)(sVar27 < sVar178) * sVar27 | (ushort)(sVar27 >= sVar178) * sVar178;
    *(ushort *)(puVar114 + -0x1878) =
         -(ushort)(sVar154 == __LC37 || sVar154 == 0) & *(ushort *)(puVar114 + -0x1878);
    *(ushort *)(puVar114 + -0x1876) =
         -(ushort)(sVar21 == _UNK_0011b6c2 || sVar21 == 0) & *(ushort *)(puVar114 + -0x1876);
    *(ushort *)(puVar114 + -0x1874) =
         -(ushort)(sVar22 == _UNK_0011b6c4 || sVar22 == 0) & *(ushort *)(puVar114 + -0x1874);
    *(ushort *)(puVar114 + -0x1872) =
         -(ushort)(sVar23 == _UNK_0011b6c6 || sVar23 == 0) & *(ushort *)(puVar114 + -0x1872);
    *(ushort *)(puVar114 + -0x1870) =
         -(ushort)(sVar24 == _UNK_0011b6c8 || sVar24 == 0) & *(ushort *)(puVar114 + -0x1870);
    *(ushort *)(puVar114 + -0x186e) =
         -(ushort)(sVar25 == _UNK_0011b6ca || sVar25 == 0) & *(ushort *)(puVar114 + -0x186e);
    *(ushort *)(puVar114 + -0x186c) =
         -(ushort)(sVar26 == _UNK_0011b6cc || sVar26 == 0) & *(ushort *)(puVar114 + -0x186c);
    *(ushort *)(puVar114 + -0x186a) =
         -(ushort)(sVar27 == _UNK_0011b6ce || sVar27 == 0) & *(ushort *)(puVar114 + -0x186a);
    auVar271 = auVar264;
    auVar133 = auVar248;
  } while (param_2 + 0x430 != pVVar82);
  auVar220._0_2_ = -(ushort)(0 < (short)auVar264._0_2_);
  auVar220._2_2_ = -(ushort)(0 < (short)auVar264._2_2_);
  auVar220._4_2_ = -(ushort)(0 < (short)auVar264._4_2_);
  auVar220._6_2_ = -(ushort)(0 < (short)auVar264._6_2_);
  auVar220._8_2_ = -(ushort)(0 < (short)auVar264._8_2_);
  auVar220._10_2_ = -(ushort)(0 < (short)auVar264._10_2_);
  auVar220._12_2_ = -(ushort)(0 < (short)auVar264._12_2_);
  auVar220._14_2_ = -(ushort)(0 < (short)auVar264._14_2_);
  puVar114[-0x17e9] = 1;
  auVar260._0_2_ = -(ushort)((short)auVar248._0_2_ < __LC37);
  auVar260._2_2_ = -(ushort)((short)auVar248._2_2_ < _UNK_0011b6c2);
  auVar260._4_2_ = -(ushort)((short)auVar248._4_2_ < _UNK_0011b6c4);
  auVar260._6_2_ = -(ushort)((short)auVar248._6_2_ < _UNK_0011b6c6);
  auVar260._8_2_ = -(ushort)((short)auVar248._8_2_ < _UNK_0011b6c8);
  auVar260._10_2_ = -(ushort)((short)auVar248._10_2_ < _UNK_0011b6ca);
  auVar260._12_2_ = -(ushort)((short)auVar248._12_2_ < _UNK_0011b6cc);
  auVar260._14_2_ = -(ushort)((short)auVar248._14_2_ < _UNK_0011b6ce);
  auVar271._0_2_ = -(ushort)(__LC38 < (short)auVar248._0_2_);
  auVar271._2_2_ = -(ushort)(_UNK_0011b7a2 < (short)auVar248._2_2_);
  auVar271._4_2_ = -(ushort)(_UNK_0011b7a4 < (short)auVar248._4_2_);
  auVar271._6_2_ = -(ushort)(_UNK_0011b7a6 < (short)auVar248._6_2_);
  auVar271._8_2_ = -(ushort)(_UNK_0011b7a8 < (short)auVar248._8_2_);
  auVar271._10_2_ = -(ushort)(_UNK_0011b7aa < (short)auVar248._10_2_);
  auVar271._12_2_ = -(ushort)(_UNK_0011b7ac < (short)auVar248._12_2_);
  auVar271._14_2_ = -(ushort)(_UNK_0011b7ae < (short)auVar248._14_2_);
  *(undefined1 (*) [16])(puVar114 + -0x1678) = auVar220;
  uVar155 = (ushort)(SUB161(auVar260 >> 7,0) & 1) | (ushort)(SUB161(auVar260 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar260 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar260 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar260 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar260 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar260 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar260 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar260 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar260 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar260 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar260 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar260 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar260 >> 0x6f,0) & 1) << 0xd |
            (ushort)((byte)(auVar260._14_2_ >> 7) & 1) << 0xe | auVar260._14_2_ & 0x8000;
  *(undefined1 (*) [16])(puVar114 + -0x17d8) = auVar260;
  cVar127 = uVar155 != 0;
  *(uint *)(puVar114 + -0x179c) = (uint)uVar155;
  *(uint *)(puVar114 + -0x181c) =
       (uint)(ushort)((ushort)(SUB161(auVar271 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar271 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar271 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar271 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar271 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar271 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar271 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar271 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar271 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar271 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar271 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar271 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar271 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar271 >> 0x6f,0) & 1) << 0xd |
                      (ushort)((byte)(auVar271._14_2_ >> 7) & 1) << 0xe | auVar271._14_2_ & 0x8000);
  if (!(bool)cVar127) {
    puVar114[-0x17e9] = *(long *)(*(long *)(puVar114 + -0x1898) + 0x28) != 0;
  }
  pauVar91 = (undefined1 (*) [16])(puVar114 + -0xbf8);
  lVar100 = *(long *)(puVar114 + -0x19e0);
  lVar101 = *(long *)(puVar114 + -0x1908);
  *(undefined1 (**) [16])(puVar114 + -0x1950) = pauVar91;
  *(undefined1 **)(puVar114 + -0x1868) = puVar114 + -0x3f8;
  do {
    lVar112 = 0;
    pauVar90 = pauVar91;
    do {
      fVar219 = *(float *)(lVar101 + lVar112 * 4);
      lVar83 = lVar112 + 1;
      auVar133 = *(undefined1 (*) [16])(lVar100 + lVar112 * 0x10);
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar133._0_10_;
      auVar12._12_2_ = auVar133._6_2_;
      auVar18._8_2_ = auVar133._4_2_;
      auVar18._0_8_ = auVar133._0_8_;
      auVar18._10_4_ = auVar12._10_4_;
      auVar68._6_8_ = 0;
      auVar68._0_6_ = auVar18._8_6_;
      auVar131._0_4_ = (float)auVar133._8_2_ * fVar219;
      auVar131._4_4_ = (float)auVar133._10_2_ * fVar219;
      auVar131._8_4_ = (float)auVar133._12_2_ * fVar219;
      auVar131._12_4_ = (float)auVar133._14_2_ * fVar219;
      auVar159._0_4_ = (float)auVar133._0_2_ * fVar219;
      auVar159._4_4_ = (float)(int)CONCAT82(SUB148(auVar68 << 0x40,6),auVar133._2_2_) * fVar219;
      auVar159._8_4_ = (float)auVar18._8_4_ * fVar219;
      auVar159._12_4_ = (float)(auVar12._10_4_ >> 0x10) * fVar219;
      pauVar90[1] = auVar131;
      *pauVar90 = auVar159;
      lVar112 = lVar83;
      pauVar90 = pauVar90 + 2;
    } while (lVar83 != 4);
    pauVar91 = pauVar91 + 8;
    lVar100 = lVar100 + 0x40;
  } while (*(undefined1 (**) [16])(puVar114 + -0x1868) != pauVar91);
  if (*(int *)(puVar114 + -0x181c) != 0) {
    lVar100 = *(long *)(puVar114 + -0x1898);
    if (*(byte *)(lVar100 + 0x326) != 0) {
      pauVar91 = (undefined1 (*) [16])(puVar114 + -0x11b8);
      pbVar126 = (byte *)(lVar100 + 0x233);
      *(ulong *)(puVar114 + -0x1978) = lVar100 + 0x234 + (ulong)(*(byte *)(lVar100 + 0x326) - 1);
      this = (EndpointSelector<3,8> *)(puVar114 + -0xe98);
      *(undefined1 **)(puVar114 + -0x19e8) = BC7Data::g_shapeRanges;
      auVar261._4_4_ = _LC29;
      auVar261._0_4_ = _LC29;
      auVar261._8_4_ = _LC29;
      auVar261._12_4_ = _LC29;
      *(undefined1 **)(puVar114 + -0x1940) = puVar114 + -0xdd8;
      auVar181._4_4_ = _LC19;
      auVar181._0_4_ = _LC19;
      auVar181._8_4_ = _LC19;
      auVar181._12_4_ = _LC19;
      pauVar90 = (undefined1 (*) [16])(puVar114 + -0x12b8);
      pauVar120 = (undefined1 (*) [16])(puVar114 + -0xfc8);
      *(undefined1 (*) [16])(puVar114 + -0x1a28) = auVar261;
      auVar160._4_4_ = _LC40;
      auVar160._0_4_ = _LC40;
      auVar160._8_4_ = _LC40;
      auVar160._12_4_ = _LC40;
      puVar114[-0x1938] = cVar127;
      do {
        uVar104 = (ulong)*pbVar126;
        *(undefined4 *)(puVar114 + -0x1988) =
             *(undefined4 *)(*(long *)(puVar114 + -0x19e8) + uVar104 * 8);
        iVar122 = *(int *)(*(long *)(puVar114 + -0x19e8) + 4 + uVar104 * 8);
        pEVar84 = this;
        do {
          *(undefined1 (*) [16])(pEVar84 + 0xc0) = (undefined1  [16])0x0;
          pEVar85 = pEVar84 + 0x20;
          *(undefined1 (*) [16])(pEVar84 + 0xd0) = (undefined1  [16])0x0;
          pEVar84 = pEVar85;
        } while (*(EndpointSelector<3,8> **)(puVar114 + -0x1940) != pEVar85);
        *(undefined1 (*) [16])(puVar114 + -0xe98) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe88) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe38) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe28) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe78) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe68) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe08) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe58) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xe48) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xdf8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xde8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xd18) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xd08) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xcf8) = auVar181;
        *(undefined1 (*) [16])(puVar114 + -0xce8) = auVar181;
        *(undefined1 (*) [16])(puVar114 + -0xcd8) = auVar160;
        *(undefined1 (*) [16])(puVar114 + -0xcc8) = auVar160;
        pEVar84 = this;
        if (iVar122 < 1) {
          *(undefined1 **)(puVar114 + -0x1a10) = puVar114 + -0xe38;
          goto LAB_00106139;
        }
        iVar80 = 0;
        *(undefined1 **)(puVar114 + -0x1a10) = puVar114 + -0xe38;
        do {
          *(int *)(puVar114 + -0x1924) = iVar122;
          *(undefined1 (**) [16])(puVar114 + -0x19f8) = pauVar120;
          *(long *)(puVar114 + -0x1948) = (long)*(int *)(puVar114 + -0x1988);
          *(undefined1 (**) [16])(puVar114 + -0x19c8) = pauVar90;
          *(long *)(puVar114 + -0x1958) = (long)iVar122 + (long)*(int *)(puVar114 + -0x1988);
          *(ulong *)(puVar114 + -0x19b0) = uVar104;
          *(undefined1 (**) [16])(puVar114 + -0x19a8) = pauVar91;
          *(EndpointSelector<3,8> **)(puVar114 + -0x1a08) = pEVar84;
          *(undefined1 (*) [16])(puVar114 + -0x19d8) = auVar181;
          *(undefined1 (*) [16])(puVar114 + -0x1998) = auVar160;
          while( true ) {
            pbVar115 = BC7Data::g_fragments + *(long *)(puVar114 + -0x1948);
            lVar100 = *(long *)(puVar114 + -0x1958);
            do {
              bVar9 = *pbVar115;
              pbVar115 = pbVar115 + 1;
              *(undefined8 *)(puVar114 + -0x1018) = *(undefined8 *)(puVar114 + -0x1a28);
              *(undefined8 *)(puVar114 + -0x1010) = *(undefined8 *)(puVar114 + -0x1a20);
              *(undefined8 *)(puVar114 + -0x1028) = *(undefined8 *)(puVar114 + -0x1a28);
              *(undefined8 *)(puVar114 + -0x1020) = *(undefined8 *)(puVar114 + -0x1a20);
              *(undefined8 *)(puVar114 + -0x1a30) = 0x1040e7;
              EndpointSelector<3,8>::ContributePass
                        (this,(Float *)((ulong)bVar9 * 0x80 + *(long *)(puVar114 + -0x1950)),iVar80,
                         (Float *)(puVar114 + -0x1028));
            } while (BC7Data::g_fragments + lVar100 != pbVar115);
            if (iVar80 == 0) break;
            if (iVar80 != 1) {
              pEVar84 = *(EndpointSelector<3,8> **)(puVar114 + -0x1a08);
              pauVar120 = *(undefined1 (**) [16])(puVar114 + -0x19f8);
              auVar181 = *(undefined1 (*) [16])(puVar114 + -0x19d8);
              pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x19c8);
              lVar100 = *(long *)(puVar114 + -0x19b0);
              pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x19a8);
              auVar160 = *(undefined1 (*) [16])(puVar114 + -0x1998);
              goto LAB_00104129;
            }
            iVar80 = 2;
            *(undefined8 *)(puVar114 + -0x1a30) = 0x1061f5;
            EndpointSelector<3,8>::FinishDirection(this);
          }
          iVar122 = *(int *)(puVar114 + -0x1924);
          pauVar120 = *(undefined1 (**) [16])(puVar114 + -0x19f8);
          auVar181 = *(undefined1 (*) [16])(puVar114 + -0x19d8);
          pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x19c8);
          uVar104 = *(ulong *)(puVar114 + -0x19b0);
          pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x19a8);
          auVar160 = *(undefined1 (*) [16])(puVar114 + -0x1998);
          pEVar84 = *(EndpointSelector<3,8> **)(puVar114 + -0x1a08);
LAB_00106139:
          auVar270._0_4_ =
               *(uint *)(puVar114 + -0x1a28) & -(uint)(*(float *)(puVar114 + -0xd08) == 0.0);
          auVar270._4_4_ =
               *(uint *)(puVar114 + -0x1a24) & -(uint)(*(float *)(puVar114 + -0xd04) == 0.0);
          auVar270._8_4_ =
               *(uint *)(puVar114 + -0x1a20) & -(uint)(*(float *)(puVar114 + -0xd00) == 0.0);
          auVar270._12_4_ =
               *(uint *)(puVar114 + -0x1a1c) & -(uint)(*(float *)(puVar114 + -0xcfc) == 0.0);
          auVar147._0_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd08) == 0.0) & *(uint *)(puVar114 + -0xd08);
          auVar147._4_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd04) == 0.0) & *(uint *)(puVar114 + -0xd04);
          auVar147._8_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd00) == 0.0) & *(uint *)(puVar114 + -0xd00);
          auVar147._12_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xcfc) == 0.0) & *(uint *)(puVar114 + -0xcfc);
          auVar221._0_4_ =
               *(uint *)(puVar114 + -0x1a28) & -(uint)(*(float *)(puVar114 + -0xd18) == 0.0);
          auVar221._4_4_ =
               *(uint *)(puVar114 + -0x1a24) & -(uint)(*(float *)(puVar114 + -0xd14) == 0.0);
          auVar221._8_4_ =
               *(uint *)(puVar114 + -0x1a20) & -(uint)(*(float *)(puVar114 + -0xd10) == 0.0);
          auVar221._12_4_ =
               *(uint *)(puVar114 + -0x1a1c) & -(uint)(*(float *)(puVar114 + -0xd0c) == 0.0);
          auVar215._0_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd18) == 0.0) & *(uint *)(puVar114 + -0xd18);
          auVar215._4_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd14) == 0.0) & *(uint *)(puVar114 + -0xd14);
          auVar215._8_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd10) == 0.0) & *(uint *)(puVar114 + -0xd10);
          auVar215._12_4_ =
               ~-(uint)(*(float *)(puVar114 + -0xd0c) == 0.0) & *(uint *)(puVar114 + -0xd0c);
          pEVar85 = this;
          do {
            pEVar95 = pEVar85 + 0x20;
            auVar133 = divps(*(undefined1 (*) [16])(pEVar85 + 0x10),auVar147 | auVar270);
            auVar271 = divps(*(undefined1 (*) [16])pEVar85,auVar215 | auVar221);
            *(undefined1 (*) [16])(pEVar85 + 0x10) = auVar133;
            *(undefined1 (*) [16])pEVar85 = auVar271;
            pEVar85 = pEVar95;
          } while (*(EndpointSelector<3,8> **)(puVar114 + -0x1a10) != pEVar95);
          iVar80 = 1;
        } while (0 < iVar122);
        *(undefined1 (**) [16])(puVar114 + -0x19d8) = pauVar91;
        *(ulong *)(puVar114 + -0x1a08) = uVar104;
        *(undefined1 (*) [16])(puVar114 + -0x19c8) = auVar160;
        *(undefined1 (*) [16])(puVar114 + -0x19f8) = auVar181;
        *(undefined8 *)(puVar114 + -0x1a30) = 0x1061c1;
        EndpointSelector<3,8>::FinishDirection(this);
        lVar100 = *(long *)(puVar114 + -0x1a08);
        auVar181 = *(undefined1 (*) [16])(puVar114 + -0x19f8);
        pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x19d8);
        auVar160 = *(undefined1 (*) [16])(puVar114 + -0x19c8);
LAB_00104129:
        fVar219 = *(float *)(puVar114 + -0xcf8);
        fVar226 = *(float *)(puVar114 + -0xcf4);
        fVar228 = *(float *)(puVar114 + -0xcf0);
        fVar230 = *(float *)(puVar114 + -0xcec);
        fVar259 = *(float *)(puVar114 + -0xce8);
        fVar276 = *(float *)(puVar114 + -0xce4);
        fVar277 = *(float *)(puVar114 + -0xce0);
        fVar278 = *(float *)(puVar114 + -0xcdc);
        fVar31 = *(float *)(puVar114 + -0xcd8);
        fVar32 = *(float *)(puVar114 + -0xcd4);
        fVar33 = *(float *)(puVar114 + -0xcd0);
        fVar34 = *(float *)(puVar114 + -0xccc);
        fVar258 = *(float *)(puVar114 + -0xcc8);
        fVar231 = *(float *)(puVar114 + -0xcc4);
        fVar238 = *(float *)(puVar114 + -0xcc0);
        fVar241 = *(float *)(puVar114 + -0xcbc);
        puVar87 = *(undefined4 **)(puVar114 + -0x1908);
        pauVar86 = pauVar91;
        pauVar117 = pauVar90;
        do {
          uVar129 = *puVar87;
          fVar244 = *(float *)(pEVar84 + 0x70);
          fVar246 = *(float *)(pEVar84 + 0x74);
          fVar256 = *(float *)(pEVar84 + 0x78);
          fVar257 = *(float *)(pEVar84 + 0x7c);
          puVar87 = puVar87 + 1;
          pEVar85 = pEVar84 + 0x20;
          fVar35 = *(float *)(pEVar84 + 0x60);
          fVar36 = *(float *)(pEVar84 + 100);
          fVar37 = *(float *)(pEVar84 + 0x68);
          fVar38 = *(float *)(pEVar84 + 0x6c);
          auVar208._4_4_ = uVar129;
          auVar208._0_4_ = uVar129;
          auVar208._8_4_ = uVar129;
          auVar208._12_4_ = uVar129;
          fVar39 = *(float *)(pEVar84 + 0x10);
          fVar40 = *(float *)(pEVar84 + 0x14);
          fVar41 = *(float *)(pEVar84 + 0x18);
          fVar42 = *(float *)(pEVar84 + 0x1c);
          auVar134._4_4_ = fVar246 * fVar276 + fVar40;
          auVar134._0_4_ = fVar244 * fVar259 + fVar39;
          fVar43 = *(float *)pEVar84;
          fVar44 = *(float *)(pEVar84 + 4);
          fVar45 = *(float *)(pEVar84 + 8);
          fVar46 = *(float *)(pEVar84 + 0xc);
          auVar132._4_4_ = fVar36 * fVar226 + fVar44;
          auVar132._0_4_ = fVar35 * fVar219 + fVar43;
          auVar132._8_4_ = fVar37 * fVar228 + fVar45;
          auVar132._12_4_ = fVar38 * fVar230 + fVar46;
          auVar133 = divps(auVar132,auVar208);
          *pauVar117 = auVar133;
          auVar134._8_4_ = fVar256 * fVar277 + fVar41;
          auVar134._12_4_ = fVar257 * fVar278 + fVar42;
          auVar133 = divps(auVar134,auVar208);
          pauVar117[1] = auVar133;
          auVar135._0_4_ =
               (*(float *)(pEVar84 + 0x60) * fVar31 + *(float *)pEVar84) -
               (fVar35 * fVar219 + fVar43);
          auVar135._4_4_ =
               (*(float *)(pEVar84 + 100) * fVar32 + *(float *)(pEVar84 + 4)) -
               (fVar36 * fVar226 + fVar44);
          auVar135._8_4_ =
               (*(float *)(pEVar84 + 0x68) * fVar33 + *(float *)(pEVar84 + 8)) -
               (fVar37 * fVar228 + fVar45);
          auVar135._12_4_ =
               (*(float *)(pEVar84 + 0x6c) * fVar34 + *(float *)(pEVar84 + 0xc)) -
               (fVar38 * fVar230 + fVar46);
          auVar133 = divps(auVar135,auVar208);
          *pauVar86 = auVar133;
          auVar136._0_4_ =
               (*(float *)(pEVar84 + 0x70) * fVar258 + *(float *)(pEVar84 + 0x10)) -
               (fVar244 * fVar259 + fVar39);
          auVar136._4_4_ =
               (*(float *)(pEVar84 + 0x74) * fVar231 + *(float *)(pEVar84 + 0x14)) -
               (fVar246 * fVar276 + fVar40);
          auVar136._8_4_ =
               (*(float *)(pEVar84 + 0x78) * fVar238 + *(float *)(pEVar84 + 0x18)) -
               (fVar256 * fVar277 + fVar41);
          auVar136._12_4_ =
               (*(float *)(pEVar84 + 0x7c) * fVar241 + *(float *)(pEVar84 + 0x1c)) -
               (fVar257 * fVar278 + fVar42);
          auVar133 = divps(auVar136,auVar208);
          pauVar86[1] = auVar133;
          pauVar86 = pauVar86 + 2;
          pEVar84 = pEVar85;
          pauVar117 = pauVar117 + 2;
        } while (*(EndpointSelector<3,8> **)(puVar114 + -0x1a10) != pEVar85);
        uVar111 = *(undefined8 *)(*pauVar90 + 8);
        auVar133 = pauVar91[1];
        pbVar126 = pbVar126 + 1;
        auVar271 = pauVar91[2];
        auVar248 = pauVar91[3];
        lVar100 = lVar100 * 0xc0;
        *(undefined8 *)(puVar114 + -0x1028) = *(undefined8 *)*pauVar90;
        *(undefined8 *)(puVar114 + -0x1020) = uVar111;
        uVar111 = *(undefined8 *)(pauVar90[1] + 8);
        auVar264 = pauVar91[4];
        auVar220 = pauVar91[5];
        *(undefined8 *)(puVar114 + -0x1018) = *(undefined8 *)pauVar90[1];
        *(undefined8 *)(puVar114 + -0x1010) = uVar111;
        uVar111 = *(undefined8 *)(pauVar90[2] + 8);
        *(undefined8 *)(puVar114 + -0x1008) = *(undefined8 *)pauVar90[2];
        *(undefined8 *)(puVar114 + -0x1000) = uVar111;
        uVar111 = *(undefined8 *)(pauVar90[3] + 8);
        *(undefined8 *)(puVar114 + -0xff8) = *(undefined8 *)pauVar90[3];
        *(undefined8 *)(puVar114 + -0xff0) = uVar111;
        uVar111 = *(undefined8 *)(pauVar90[4] + 8);
        *(undefined8 *)(puVar114 + -0xfe8) = *(undefined8 *)pauVar90[4];
        *(undefined8 *)(puVar114 + -0xfe0) = uVar111;
        uVar111 = *(undefined8 *)(pauVar90[5] + 8);
        *(undefined8 *)(puVar114 + -0xfd8) = *(undefined8 *)pauVar90[5];
        *(undefined8 *)(puVar114 + -0xfd0) = uVar111;
        auVar260 = *pauVar91;
        pauVar120[1] = auVar133;
        *pauVar120 = auVar260;
        pauVar120[2] = auVar271;
        pauVar120[3] = auVar248;
        pauVar120[4] = auVar264;
        pauVar120[5] = auVar220;
        uVar111 = *(undefined8 *)(puVar114 + -0x1020);
        *(undefined8 *)(puVar114 + lVar100 + -0x3f8) = *(undefined8 *)(puVar114 + -0x1028);
        *(undefined8 *)((long)(puVar114 + lVar100 + -0x3f8) + 8) = uVar111;
        uVar111 = *(undefined8 *)(puVar114 + -0x1010);
        *(undefined8 *)(puVar114 + lVar100 + -1000) = *(undefined8 *)(puVar114 + -0x1018);
        *(undefined8 *)(puVar114 + lVar100 + -0x3e0) = uVar111;
        uVar111 = *(undefined8 *)(puVar114 + -0x1000);
        *(undefined8 *)(puVar114 + lVar100 + -0x3d8) = *(undefined8 *)(puVar114 + -0x1008);
        *(undefined8 *)(puVar114 + lVar100 + -0x3d0) = uVar111;
        uVar111 = *(undefined8 *)(puVar114 + -0xff0);
        *(undefined8 *)(puVar114 + lVar100 + -0x3c8) = *(undefined8 *)(puVar114 + -0xff8);
        *(undefined8 *)(puVar114 + lVar100 + -0x3c0) = uVar111;
        uVar111 = *(undefined8 *)(puVar114 + -0xfe8);
        uVar60 = *(undefined8 *)(puVar114 + -0xfe0);
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x398) = auVar260;
        *(undefined8 *)(puVar114 + lVar100 + -0x3b8) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + -0x3b0) = uVar60;
        auVar260 = *(undefined1 (*) [16])(puVar114 + -0xfd8);
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x388) = auVar133;
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x3a8) = auVar260;
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x378) = auVar271;
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x368) = auVar248;
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x358) = auVar264;
        *(undefined1 (*) [16])(puVar114 + lVar100 + -0x348) = auVar220;
      } while (*(byte **)(puVar114 + -0x1978) != pbVar126);
      cVar127 = puVar114[-0x1938];
    }
  }
  if (*(byte *)(*(long *)(puVar114 + -0x1898) + 0x232) != 0) {
    lVar100 = *(long *)(puVar114 + -0x1898);
    uVar104 = (ulong)*(byte *)(lVar100 + 0x1b1);
    pbVar126 = (byte *)(lVar100 + 0x1b1);
    *(ulong *)(puVar114 + -0x1a28) =
         lVar100 + 0x1b2 + (ulong)(*(byte *)(*(long *)(puVar114 + -0x1898) + 0x232) - 1);
    if ((*(int *)(puVar114 + -0x181c) == 0) || (cVar127 != '\0')) {
      *(undefined1 **)(puVar114 + -0x19e8) = BC7Data::g_shapeRanges;
      *(undefined1 **)(puVar114 + -0x19d8) = puVar114 + -0xd98;
      this_00 = (EndpointSelector<4,8> *)(puVar114 + -0xe98);
      *(undefined1 **)(puVar114 + -0x1a08) = puVar114 + -0xc58;
      auVar193._4_4_ = _LC19;
      auVar193._0_4_ = _LC19;
      auVar193._8_4_ = _LC19;
      auVar193._12_4_ = _LC19;
      pfVar89 = (float *)(puVar114 + -0x1028);
      auVar177._4_4_ = _LC40;
      auVar177._0_4_ = _LC40;
      auVar177._8_4_ = _LC40;
      auVar177._12_4_ = _LC40;
      do {
        lVar100 = (long)(int)uVar104;
        *(long *)(puVar114 + -0x19f8) = lVar100;
        iVar122 = *(int *)(*(long *)(puVar114 + -0x19e8) + 4 + lVar100 * 8);
        *(undefined4 *)(puVar114 + -0x1a10) =
             *(undefined4 *)(*(long *)(puVar114 + -0x19e8) + lVar100 * 8);
        pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x19d8);
        do {
          *pauVar91 = (undefined1  [16])0x0;
          pauVar90 = pauVar91 + 2;
          pauVar91[1] = (undefined1  [16])0x0;
          pauVar91 = pauVar90;
        } while (*(undefined1 (**) [16])(puVar114 + -0x1a08) != pauVar90);
        pEVar119 = (EndpointSelector<4,8> *)(puVar114 + -0xe18);
        pEVar98 = this_00;
        do {
          *(undefined1 (*) [16])pEVar98 = (undefined1  [16])0x0;
          pEVar97 = pEVar98 + 0x20;
          *(undefined1 (*) [16])(pEVar98 + 0x10) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pEVar98 + 0x80) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pEVar98 + 0x90) = (undefined1  [16])0x0;
          pEVar98 = pEVar97;
        } while (pEVar119 != pEVar97);
        *(undefined1 (*) [16])(puVar114 + -0xc58) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xc48) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar114 + -0xc38) = auVar193;
        *(undefined1 (*) [16])(puVar114 + -0xc28) = auVar193;
        *(undefined1 (*) [16])(puVar114 + -0xc18) = auVar177;
        *(undefined1 (*) [16])(puVar114 + -0xc08) = auVar177;
        if (iVar122 < 1) goto LAB_00106c85;
        iVar80 = 0;
LAB_001067a8:
        do {
          pbVar115 = BC7Data::g_fragments + *(int *)(puVar114 + -0x1a10);
          pbVar3 = BC7Data::g_fragments + (long)iVar122 + (long)*(int *)(puVar114 + -0x1a10);
          pfVar121 = (float *)((ulong)*pbVar115 * 0x80 + *(long *)(puVar114 + -0x1950));
          pEVar98 = this_00;
          if (iVar80 == 0) {
            while( true ) {
              do {
                fVar219 = pfVar121[5];
                fVar226 = pfVar121[6];
                fVar228 = pfVar121[7];
                pEVar97 = pEVar98 + 0x20;
                fVar230 = *pfVar121;
                fVar259 = pfVar121[1];
                fVar276 = pfVar121[2];
                fVar277 = pfVar121[3];
                *(float *)(pEVar98 + 0x10) = pfVar121[4] + *(float *)(pEVar98 + 0x10);
                *(float *)(pEVar98 + 0x14) = fVar219 + *(float *)(pEVar98 + 0x14);
                *(float *)(pEVar98 + 0x18) = fVar226 + *(float *)(pEVar98 + 0x18);
                *(float *)(pEVar98 + 0x1c) = fVar228 + *(float *)(pEVar98 + 0x1c);
                *(float *)pEVar98 = *(float *)pEVar98 + fVar230;
                *(float *)(pEVar98 + 4) = *(float *)(pEVar98 + 4) + fVar259;
                *(float *)(pEVar98 + 8) = *(float *)(pEVar98 + 8) + fVar276;
                *(float *)(pEVar98 + 0xc) = *(float *)(pEVar98 + 0xc) + fVar277;
                pfVar121 = pfVar121 + 8;
                pEVar98 = pEVar97;
              } while (pEVar119 != pEVar97);
              pbVar115 = pbVar115 + 1;
              *(float *)(puVar114 + -0xc48) = *(float *)(puVar114 + -0xc48) + _LC29;
              *(float *)(puVar114 + -0xc44) = *(float *)(puVar114 + -0xc44) + _LC29;
              *(float *)(puVar114 + -0xc40) = *(float *)(puVar114 + -0xc40) + _LC29;
              *(float *)(puVar114 + -0xc3c) = *(float *)(puVar114 + -0xc3c) + _LC29;
              *(float *)(puVar114 + -0xc58) = *(float *)(puVar114 + -0xc58) + _LC29;
              *(float *)(puVar114 + -0xc54) = *(float *)(puVar114 + -0xc54) + _LC29;
              *(float *)(puVar114 + -0xc50) = *(float *)(puVar114 + -0xc50) + _LC29;
              *(float *)(puVar114 + -0xc4c) = *(float *)(puVar114 + -0xc4c) + _LC29;
              if (pbVar3 == pbVar115) break;
              pfVar121 = (float *)(*(long *)(puVar114 + -0x1950) + (ulong)*pbVar115 * 0x80);
              pEVar98 = this_00;
            }
LAB_00106c85:
            auVar235._0_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc58) == 0.0) & *(uint *)(puVar114 + -0xc58);
            auVar235._4_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc54) == 0.0) & *(uint *)(puVar114 + -0xc54);
            auVar235._8_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc50) == 0.0) & *(uint *)(puVar114 + -0xc50);
            auVar235._12_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc4c) == 0.0) & *(uint *)(puVar114 + -0xc4c);
            auVar255._0_4_ = -(uint)(*(float *)(puVar114 + -0xc58) == 0.0) & (uint)_LC29;
            auVar255._4_4_ = -(uint)(*(float *)(puVar114 + -0xc54) == 0.0) & (uint)_LC29;
            auVar255._8_4_ = -(uint)(*(float *)(puVar114 + -0xc50) == 0.0) & (uint)_LC29;
            auVar255._12_4_ = -(uint)(*(float *)(puVar114 + -0xc4c) == 0.0) & (uint)_LC29;
            auVar152._0_4_ = (uint)_LC29 & -(uint)(*(float *)(puVar114 + -0xc48) == 0.0);
            auVar152._4_4_ = (uint)_LC29 & -(uint)(*(float *)(puVar114 + -0xc44) == 0.0);
            auVar152._8_4_ = (uint)_LC29 & -(uint)(*(float *)(puVar114 + -0xc40) == 0.0);
            auVar152._12_4_ = (uint)_LC29 & -(uint)(*(float *)(puVar114 + -0xc3c) == 0.0);
            auVar225._0_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc48) == 0.0) & *(uint *)(puVar114 + -0xc48);
            auVar225._4_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc44) == 0.0) & *(uint *)(puVar114 + -0xc44);
            auVar225._8_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc40) == 0.0) & *(uint *)(puVar114 + -0xc40);
            auVar225._12_4_ =
                 ~-(uint)(*(float *)(puVar114 + -0xc3c) == 0.0) & *(uint *)(puVar114 + -0xc3c);
            pEVar98 = this_00;
            do {
              pEVar97 = pEVar98 + 0x20;
              auVar133 = divps(*(undefined1 (*) [16])(pEVar98 + 0x10),auVar152 | auVar225);
              auVar271 = divps(*(undefined1 (*) [16])pEVar98,auVar235 | auVar255);
              *(undefined1 (*) [16])(pEVar98 + 0x10) = auVar133;
              *(undefined1 (*) [16])pEVar98 = auVar271;
              pEVar98 = pEVar97;
            } while (pEVar119 != pEVar97);
            iVar80 = 1;
            if (0 < iVar122) goto LAB_001067a8;
          }
          else {
            while (iVar80 != 1) {
              auVar233._0_12_ = ZEXT812(0);
              auVar233._12_4_ = 0;
              pEVar98 = this_00;
              auVar133 = (undefined1  [16])0x0;
              do {
                pEVar97 = pEVar98 + 0x20;
                auVar234._0_4_ =
                     auVar233._0_4_ + (*pfVar121 - *(float *)pEVar98) * *(float *)(pEVar98 + 0x80);
                auVar234._4_4_ =
                     auVar233._4_4_ +
                     (pfVar121[1] - *(float *)(pEVar98 + 4)) * *(float *)(pEVar98 + 0x84);
                auVar234._8_4_ =
                     auVar233._8_4_ +
                     (pfVar121[2] - *(float *)(pEVar98 + 8)) * *(float *)(pEVar98 + 0x88);
                auVar234._12_4_ =
                     auVar233._12_4_ +
                     (pfVar121[3] - *(float *)(pEVar98 + 0xc)) * *(float *)(pEVar98 + 0x8c);
                auVar223._0_4_ =
                     auVar133._0_4_ +
                     (pfVar121[4] - *(float *)(pEVar98 + 0x10)) * *(float *)(pEVar98 + 0x90);
                auVar223._4_4_ =
                     auVar133._4_4_ +
                     (pfVar121[5] - *(float *)(pEVar98 + 0x14)) * *(float *)(pEVar98 + 0x94);
                auVar223._8_4_ =
                     auVar133._8_4_ +
                     (pfVar121[6] - *(float *)(pEVar98 + 0x18)) * *(float *)(pEVar98 + 0x98);
                auVar223._12_4_ =
                     auVar133._12_4_ +
                     (pfVar121[7] - *(float *)(pEVar98 + 0x1c)) * *(float *)(pEVar98 + 0x9c);
                pfVar121 = pfVar121 + 8;
                pEVar98 = pEVar97;
                auVar133 = auVar223;
                auVar233 = auVar234;
              } while (pEVar119 != pEVar97);
              pbVar115 = pbVar115 + 1;
              auVar271 = minps(*(undefined1 (*) [16])(puVar114 + -0xc38),auVar234);
              auVar133 = minps(*(undefined1 (*) [16])(puVar114 + -0xc28),auVar223);
              *(undefined1 (*) [16])(puVar114 + -0xc38) = auVar271;
              *(undefined1 (*) [16])(puVar114 + -0xc28) = auVar133;
              auVar271 = maxps(*(undefined1 (*) [16])(puVar114 + -0xc18),auVar234);
              auVar133 = maxps(*(undefined1 (*) [16])(puVar114 + -0xc08),auVar223);
              *(undefined1 (*) [16])(puVar114 + -0xc18) = auVar271;
              *(undefined1 (*) [16])(puVar114 + -0xc08) = auVar133;
              if (pbVar3 == pbVar115) goto LAB_001069cf;
              pfVar121 = (float *)((ulong)*pbVar115 * 0x80 + *(long *)(puVar114 + -0x1950));
            }
            puVar114[-0x19c8] = cVar127;
            while( true ) {
              pfVar121 = pfVar121 + 4;
              pEVar98 = this_00;
              pfVar105 = pfVar89;
              do {
                fVar219 = *pfVar121;
                fVar226 = pfVar121[1];
                fVar228 = pfVar121[2];
                fVar230 = pfVar121[3];
                pfVar1 = pfVar121 + -4;
                fVar259 = pfVar121[-3];
                fVar276 = pfVar121[-2];
                fVar277 = pfVar121[-1];
                pEVar97 = pEVar98 + 0x20;
                fVar278 = *(float *)(pEVar98 + 0x10);
                fVar31 = *(float *)(pEVar98 + 0x14);
                fVar32 = *(float *)(pEVar98 + 0x18);
                fVar33 = *(float *)(pEVar98 + 0x1c);
                fVar34 = *(float *)(pEVar98 + 4);
                fVar258 = *(float *)(pEVar98 + 8);
                fVar231 = *(float *)(pEVar98 + 0xc);
                pfVar121 = pfVar121 + 8;
                *pfVar105 = *pfVar1 - *(float *)pEVar98;
                pfVar105[1] = fVar259 - fVar34;
                pfVar105[2] = fVar276 - fVar258;
                pfVar105[3] = fVar277 - fVar231;
                pfVar105[4] = fVar219 - fVar278;
                pfVar105[5] = fVar226 - fVar31;
                pfVar105[6] = fVar228 - fVar32;
                pfVar105[7] = fVar230 - fVar33;
                pEVar98 = pEVar97;
                pfVar105 = pfVar105 + 8;
              } while (pEVar119 != pEVar97);
              *(int *)(puVar114 + -0x19b0) = iVar122;
              pfVar121 = (float *)(puVar114 + -0x1008);
              iVar80 = 0;
              iVar122 = 0;
              do {
                fVar219 = pfVar121[-8];
                fVar226 = pfVar121[-7];
                fVar228 = pfVar121[-6];
                fVar230 = pfVar121[-5];
                fVar259 = pfVar121[-4];
                fVar276 = pfVar121[-3];
                fVar277 = pfVar121[-2];
                fVar278 = pfVar121[-1];
                pEVar98 = this_00 + (long)iVar80 * 0x20;
                pfVar105 = pfVar89;
                do {
                  pfVar1 = pfVar105 + 4;
                  fVar31 = pfVar105[5];
                  fVar32 = pfVar105[6];
                  fVar33 = pfVar105[7];
                  fVar34 = *pfVar105;
                  fVar258 = pfVar105[1];
                  fVar231 = pfVar105[2];
                  fVar238 = pfVar105[3];
                  pfVar105 = pfVar105 + 8;
                  *(float *)(pEVar98 + 0x110) = *pfVar1 * fVar259 + *(float *)(pEVar98 + 0x110);
                  *(float *)(pEVar98 + 0x114) = fVar31 * fVar276 + *(float *)(pEVar98 + 0x114);
                  *(float *)(pEVar98 + 0x118) = fVar32 * fVar277 + *(float *)(pEVar98 + 0x118);
                  *(float *)(pEVar98 + 0x11c) = fVar33 * fVar278 + *(float *)(pEVar98 + 0x11c);
                  *(float *)(pEVar98 + 0x100) = fVar34 * fVar219 + *(float *)(pEVar98 + 0x100);
                  *(float *)(pEVar98 + 0x104) = fVar258 * fVar226 + *(float *)(pEVar98 + 0x104);
                  *(float *)(pEVar98 + 0x108) = fVar231 * fVar228 + *(float *)(pEVar98 + 0x108);
                  *(float *)(pEVar98 + 0x10c) = fVar238 * fVar230 + *(float *)(pEVar98 + 0x10c);
                  pEVar98 = pEVar98 + 0x20;
                } while (pfVar121 != pfVar105);
                iVar80 = iVar122 + 1 + iVar80;
                iVar122 = iVar122 + 1;
                pfVar121 = pfVar121 + 8;
              } while (iVar122 != 4);
              pbVar115 = pbVar115 + 1;
              iVar122 = *(int *)(puVar114 + -0x19b0);
              if (pbVar3 == pbVar115) break;
              pfVar121 = (float *)(*(long *)(puVar114 + -0x1950) + (ulong)*pbVar115 * 0x80);
            }
            cVar127 = puVar114[-0x19c8];
          }
          *(byte **)(puVar114 + -0x1998) = pbVar126;
          puVar114[-0x19a8] = cVar127;
          *(EndpointSelector<4,8> **)(puVar114 + -0x19b0) = pEVar119;
          *(int *)(puVar114 + -0x19c8) = iVar122;
          *(undefined1 (*) [16])(puVar114 + -0x1978) = auVar177;
          *(undefined1 (*) [16])(puVar114 + -0x1988) = auVar193;
          *(undefined8 *)(puVar114 + -0x1a30) = 0x106994;
          EndpointSelector<4,8>::FinishDirection(this_00);
          iVar122 = *(int *)(puVar114 + -0x19c8);
          pEVar119 = *(EndpointSelector<4,8> **)(puVar114 + -0x19b0);
          iVar80 = 2;
          cVar127 = puVar114[-0x19a8];
          pbVar126 = *(byte **)(puVar114 + -0x1998);
          auVar193 = *(undefined1 (*) [16])(puVar114 + -0x1988);
          auVar177 = *(undefined1 (*) [16])(puVar114 + -0x1978);
        } while (0 < iVar122);
LAB_001069cf:
        fVar219 = *(float *)(puVar114 + -0xc38);
        fVar226 = *(float *)(puVar114 + -0xc34);
        fVar228 = *(float *)(puVar114 + -0xc30);
        fVar230 = *(float *)(puVar114 + -0xc2c);
        fVar259 = *(float *)(puVar114 + -0xc28);
        fVar276 = *(float *)(puVar114 + -0xc24);
        fVar277 = *(float *)(puVar114 + -0xc20);
        fVar278 = *(float *)(puVar114 + -0xc1c);
        fVar31 = *(float *)(puVar114 + -0xc18);
        fVar32 = *(float *)(puVar114 + -0xc14);
        fVar33 = *(float *)(puVar114 + -0xc10);
        fVar34 = *(float *)(puVar114 + -0xc0c);
        fVar258 = *(float *)(puVar114 + -0xc08);
        fVar231 = *(float *)(puVar114 + -0xc04);
        fVar238 = *(float *)(puVar114 + -0xc00);
        fVar241 = *(float *)(puVar114 + -0xbfc);
        puVar87 = *(undefined4 **)(puVar114 + -0x1908);
        pauVar91 = (undefined1 (*) [16])(puVar114 + -0x11b8);
        pauVar90 = (undefined1 (*) [16])(puVar114 + -0x12b8);
        pEVar98 = this_00;
        do {
          uVar129 = *puVar87;
          pEVar97 = pEVar98 + 0x20;
          puVar87 = puVar87 + 1;
          fVar244 = *(float *)(pEVar98 + 0x80);
          fVar246 = *(float *)(pEVar98 + 0x84);
          fVar256 = *(float *)(pEVar98 + 0x88);
          fVar257 = *(float *)(pEVar98 + 0x8c);
          fVar35 = *(float *)(pEVar98 + 0x90);
          fVar36 = *(float *)(pEVar98 + 0x94);
          fVar37 = *(float *)(pEVar98 + 0x98);
          fVar38 = *(float *)(pEVar98 + 0x9c);
          auVar224._4_4_ = uVar129;
          auVar224._0_4_ = uVar129;
          auVar224._8_4_ = uVar129;
          auVar224._12_4_ = uVar129;
          fVar39 = *(float *)pEVar98;
          fVar40 = *(float *)(pEVar98 + 4);
          fVar41 = *(float *)(pEVar98 + 8);
          fVar42 = *(float *)(pEVar98 + 0xc);
          auVar148._4_4_ = fVar246 * fVar226 + fVar40;
          auVar148._0_4_ = fVar244 * fVar219 + fVar39;
          fVar43 = *(float *)(pEVar98 + 0x10);
          fVar44 = *(float *)(pEVar98 + 0x14);
          fVar45 = *(float *)(pEVar98 + 0x18);
          fVar46 = *(float *)(pEVar98 + 0x1c);
          auVar149._4_4_ = fVar36 * fVar276 + fVar44;
          auVar149._0_4_ = fVar35 * fVar259 + fVar43;
          auVar148._8_4_ = fVar256 * fVar228 + fVar41;
          auVar148._12_4_ = fVar257 * fVar230 + fVar42;
          auVar133 = divps(auVar148,auVar224);
          *pauVar90 = auVar133;
          auVar149._8_4_ = fVar37 * fVar277 + fVar45;
          auVar149._12_4_ = fVar38 * fVar278 + fVar46;
          auVar133 = divps(auVar149,auVar224);
          pauVar90[1] = auVar133;
          auVar150._0_4_ =
               (*(float *)(pEVar98 + 0x80) * fVar31 + *(float *)pEVar98) -
               (fVar244 * fVar219 + fVar39);
          auVar150._4_4_ =
               (*(float *)(pEVar98 + 0x84) * fVar32 + *(float *)(pEVar98 + 4)) -
               (fVar246 * fVar226 + fVar40);
          auVar150._8_4_ =
               (*(float *)(pEVar98 + 0x88) * fVar33 + *(float *)(pEVar98 + 8)) -
               (fVar256 * fVar228 + fVar41);
          auVar150._12_4_ =
               (*(float *)(pEVar98 + 0x8c) * fVar34 + *(float *)(pEVar98 + 0xc)) -
               (fVar257 * fVar230 + fVar42);
          auVar133 = divps(auVar150,auVar224);
          *pauVar91 = auVar133;
          auVar151._0_4_ =
               (*(float *)(pEVar98 + 0x90) * fVar258 + *(float *)(pEVar98 + 0x10)) -
               (fVar35 * fVar259 + fVar43);
          auVar151._4_4_ =
               (*(float *)(pEVar98 + 0x94) * fVar231 + *(float *)(pEVar98 + 0x14)) -
               (fVar36 * fVar276 + fVar44);
          auVar151._8_4_ =
               (*(float *)(pEVar98 + 0x98) * fVar238 + *(float *)(pEVar98 + 0x18)) -
               (fVar37 * fVar277 + fVar45);
          auVar151._12_4_ =
               (*(float *)(pEVar98 + 0x9c) * fVar241 + *(float *)(pEVar98 + 0x1c)) -
               (fVar38 * fVar278 + fVar46);
          auVar133 = divps(auVar151,auVar224);
          pauVar91[1] = auVar133;
          pauVar91 = pauVar91 + 2;
          pauVar90 = pauVar90 + 2;
          pEVar98 = pEVar97;
        } while (pEVar119 != pEVar97);
        auVar133 = *(undefined1 (*) [16])(puVar114 + -0x11b8);
        pbVar126 = pbVar126 + 1;
        auVar271 = *(undefined1 (*) [16])(puVar114 + -0x11a8);
        uVar129 = *(undefined4 *)(puVar114 + -0x1198);
        uVar28 = *(undefined4 *)(puVar114 + -0x1194);
        uVar29 = *(undefined4 *)(puVar114 + -0x1190);
        uVar30 = *(undefined4 *)(puVar114 + -0x118c);
        *(undefined8 *)pfVar89 = *(undefined8 *)*(undefined1 (*) [16])(puVar114 + -0x12b8);
        *(undefined8 *)(puVar114 + -0x1020) = *(undefined8 *)(puVar114 + -0x12b0);
        auVar248 = *(undefined1 (*) [16])(puVar114 + -0x1178);
        auVar264 = *(undefined1 (*) [16])(puVar114 + -0x1168);
        auVar220 = *(undefined1 (*) [16])(puVar114 + -0x1158);
        *(undefined8 *)(puVar114 + -0x1018) = *(undefined8 *)(puVar114 + -0x12a8);
        *(undefined8 *)(puVar114 + -0x1010) = *(undefined8 *)(puVar114 + -0x12a0);
        auVar260 = *(undefined1 (*) [16])(puVar114 + -0x1148);
        *(undefined8 *)(puVar114 + -0x1008) = *(undefined8 *)(puVar114 + -0x1298);
        *(undefined8 *)(puVar114 + -0x1000) = *(undefined8 *)(puVar114 + -0x1290);
        *(undefined8 *)(puVar114 + -0xff8) = *(undefined8 *)(puVar114 + -0x1288);
        *(undefined8 *)(puVar114 + -0xff0) = *(undefined8 *)(puVar114 + -0x1280);
        *(undefined8 *)(puVar114 + -0xfe8) = *(undefined8 *)(puVar114 + -0x1278);
        *(undefined8 *)(puVar114 + -0xfe0) = *(undefined8 *)(puVar114 + -0x1270);
        *(undefined8 *)(puVar114 + -0xfd8) = *(undefined8 *)(puVar114 + -0x1268);
        *(undefined8 *)(puVar114 + -0xfd0) = *(undefined8 *)(puVar114 + -0x1260);
        *(undefined8 *)(puVar114 + -0xfc8) = *(undefined8 *)(puVar114 + -0x1258);
        *(undefined8 *)(puVar114 + -0xfc0) = *(undefined8 *)(puVar114 + -0x1250);
        *(undefined8 *)(puVar114 + -0xfb8) = *(undefined8 *)(puVar114 + -0x1248);
        *(undefined8 *)(puVar114 + -0xfb0) = *(undefined8 *)(puVar114 + -0x1240);
        auVar131 = *(undefined1 (*) [16])(puVar114 + -0x1188);
        *(undefined1 (*) [16])(puVar114 + -0xfa8) = auVar133;
        *(undefined1 (*) [16])(puVar114 + -0xf98) = auVar271;
        *(undefined4 *)(puVar114 + -0xf88) = uVar129;
        *(undefined4 *)(puVar114 + -0xf84) = uVar28;
        *(undefined4 *)(puVar114 + -0xf80) = uVar29;
        *(undefined4 *)(puVar114 + -0xf7c) = uVar30;
        *(undefined1 (*) [16])(puVar114 + -0xf78) = auVar131;
        *(undefined1 (*) [16])(puVar114 + -0xf68) = auVar248;
        *(undefined1 (*) [16])(puVar114 + -0xf58) = auVar264;
        *(undefined1 (*) [16])(puVar114 + -0xf48) = auVar220;
        *(undefined1 (*) [16])(puVar114 + -0xf38) = auVar260;
        uVar111 = *(undefined8 *)(puVar114 + -0x1020);
        lVar100 = *(long *)(puVar114 + -0x19f8) * 0x100;
        *(undefined8 *)(puVar114 + lVar100 + 0xb248) = *(undefined8 *)(puVar114 + -0x1028);
        *(undefined8 *)((long)(puVar114 + lVar100 + 0xb248) + 8) = uVar111;
        uVar111 = *(undefined8 *)(puVar114 + -0x1018);
        uVar60 = *(undefined8 *)(puVar114 + -0x1010);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb2c8) = auVar133;
        *(undefined8 *)(puVar114 + lVar100 + 0xb258) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb260) = uVar60;
        uVar111 = *(undefined8 *)(puVar114 + -0x1008);
        uVar60 = *(undefined8 *)(puVar114 + -0x1000);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb2d8) = auVar271;
        *(undefined8 *)(puVar114 + lVar100 + 0xb268) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb270) = uVar60;
        uVar111 = *(undefined8 *)(puVar114 + -0xff8);
        uVar60 = *(undefined8 *)(puVar114 + -0xff0);
        *(undefined4 *)(puVar114 + lVar100 + 0xb2e8) = uVar129;
        *(undefined4 *)(puVar114 + lVar100 + 0xb2ec) = uVar28;
        *(undefined4 *)(puVar114 + lVar100 + 0xb2f0) = uVar29;
        *(undefined4 *)(puVar114 + lVar100 + 0xb2f4) = uVar30;
        *(undefined8 *)(puVar114 + lVar100 + 0xb278) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb280) = uVar60;
        uVar111 = *(undefined8 *)(puVar114 + -0xfe8);
        uVar60 = *(undefined8 *)(puVar114 + -0xfe0);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb2f8) = auVar131;
        *(undefined8 *)(puVar114 + lVar100 + 0xb288) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb290) = uVar60;
        uVar111 = *(undefined8 *)(puVar114 + -0xfd8);
        uVar60 = *(undefined8 *)(puVar114 + -0xfd0);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb308) = auVar248;
        *(undefined8 *)(puVar114 + lVar100 + 0xb298) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb2a0) = uVar60;
        uVar111 = *(undefined8 *)(puVar114 + -0xfc8);
        uVar60 = *(undefined8 *)(puVar114 + -0xfc0);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb318) = auVar264;
        *(undefined8 *)(puVar114 + lVar100 + 0xb2a8) = uVar111;
        *(undefined8 *)(puVar114 + lVar100 + 0xb2b0) = uVar60;
        auVar133 = *(undefined1 (*) [16])(puVar114 + -0xfb8);
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb328) = auVar220;
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb2b8) = auVar133;
        *(undefined1 (*) [16])(puVar114 + lVar100 + 0xb338) = auVar260;
        if (pbVar126 == *(byte **)(puVar114 + -0x1a28)) goto LAB_0010456f;
        uVar104 = (ulong)*pbVar126;
      } while( true );
    }
    lVar100 = *(long *)(puVar114 + -0x1868);
    auVar262._4_4_ = _LC13;
    auVar262._0_4_ = _LC13;
    auVar262._8_4_ = _LC13;
    auVar262._12_4_ = _LC13;
    while( true ) {
      pbVar126 = pbVar126 + 1;
      puVar87 = (undefined4 *)(lVar100 + uVar104 * 0xc0);
      uVar129 = *puVar87;
      uVar28 = puVar87[1];
      uVar29 = puVar87[2];
      uVar30 = puVar87[3];
      *(undefined4 *)(puVar114 + -0x11b8) = uVar129;
      *(undefined4 *)(puVar114 + -0x11b4) = uVar28;
      *(undefined4 *)(puVar114 + -0x11b0) = uVar29;
      *(undefined4 *)(puVar114 + -0x11ac) = uVar30;
      uVar111 = *(undefined8 *)(puVar87 + 4);
      uVar60 = *(undefined8 *)(puVar87 + 6);
      *(undefined8 *)(puVar114 + -0x11a8) = uVar111;
      *(undefined8 *)(puVar114 + -0x11a0) = uVar60;
      uVar61 = *(undefined8 *)(puVar87 + 8);
      uVar62 = *(undefined8 *)(puVar87 + 10);
      *(undefined8 *)(puVar114 + -0x1198) = uVar61;
      *(undefined8 *)(puVar114 + -0x1190) = uVar62;
      auVar133 = *(undefined1 (*) [16])(puVar87 + 0xc);
      *(undefined1 (*) [16])(puVar114 + -0x1188) = auVar133;
      uVar63 = *(undefined8 *)(puVar87 + 0x10);
      uVar64 = *(undefined8 *)(puVar87 + 0x12);
      *(undefined8 *)(puVar114 + -0x1178) = uVar63;
      *(undefined8 *)(puVar114 + -0x1170) = uVar64;
      uVar65 = *(undefined8 *)(puVar87 + 0x14);
      uVar66 = *(undefined8 *)(puVar87 + 0x16);
      pauVar91 = (undefined1 (*) [16])(lVar100 + 0x60 + uVar104 * 0xc0);
      *(undefined8 *)(puVar114 + -0x1168) = uVar65;
      *(undefined8 *)(puVar114 + -0x1160) = uVar66;
      auVar271 = *pauVar91;
      *(undefined1 (*) [16])(puVar114 + -0x1028) = auVar271;
      auVar248 = pauVar91[1];
      *(undefined1 (*) [16])(puVar114 + -0x1018) = auVar248;
      auVar264 = pauVar91[2];
      *(undefined1 (*) [16])(puVar114 + -0x1008) = auVar264;
      auVar220 = pauVar91[3];
      *(undefined1 (*) [16])(puVar114 + -0xff8) = auVar220;
      auVar260 = pauVar91[4];
      *(undefined1 (*) [16])(puVar114 + -0xfe8) = auVar260;
      auVar131 = pauVar91[5];
      *(undefined8 *)(puVar114 + -0xe78) = uVar61;
      *(undefined8 *)(puVar114 + -0xe70) = uVar62;
      lVar101 = uVar104 * 0x100;
      *(undefined1 (*) [16])(puVar114 + -0xfd8) = auVar131;
      *(undefined1 (*) [16])(puVar114 + -0x1158) = auVar262;
      *(undefined1 (*) [16])(puVar114 + -0x1148) = auVar262;
      *(undefined1 (*) [16])(puVar114 + -0xfc8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(puVar114 + -0xfb8) = (undefined1  [16])0x0;
      *(undefined4 *)(puVar114 + -0xe98) = uVar129;
      *(undefined4 *)(puVar114 + -0xe94) = uVar28;
      *(undefined4 *)(puVar114 + -0xe90) = uVar29;
      *(undefined4 *)(puVar114 + -0xe8c) = uVar30;
      *(undefined8 *)(puVar114 + -0xe88) = uVar111;
      *(undefined8 *)(puVar114 + -0xe80) = uVar60;
      *(undefined1 (*) [16])(puVar114 + -0xe68) = auVar133;
      *(undefined8 *)(puVar114 + -0xe58) = uVar63;
      *(undefined8 *)(puVar114 + -0xe50) = uVar64;
      auVar133 = *(undefined1 (*) [16])(puVar114 + -0xfc8);
      *(undefined8 *)(puVar114 + -0xe48) = uVar65;
      *(undefined8 *)(puVar114 + -0xe40) = uVar66;
      uVar129 = *(undefined4 *)(puVar114 + -0xfb8);
      uVar28 = *(undefined4 *)(puVar114 + -0xfb4);
      uVar29 = *(undefined4 *)(puVar114 + -0xfb0);
      uVar30 = *(undefined4 *)(puVar114 + -0xfac);
      *(undefined8 *)(puVar114 + -0xe38) = *(undefined8 *)(puVar114 + -0x1158);
      *(undefined8 *)(puVar114 + -0xe30) = *(undefined8 *)(puVar114 + -0x1150);
      *(undefined8 *)(puVar114 + -0xe28) = *(undefined8 *)(puVar114 + -0x1148);
      *(undefined8 *)(puVar114 + -0xe20) = *(undefined8 *)(puVar114 + -0x1140);
      *(undefined1 (*) [16])(puVar114 + -0xe18) = auVar271;
      *(undefined1 (*) [16])(puVar114 + -0xe08) = auVar248;
      *(undefined1 (*) [16])(puVar114 + -0xdf8) = auVar264;
      *(undefined1 (*) [16])(puVar114 + -0xde8) = auVar220;
      *(undefined1 (*) [16])(puVar114 + -0xdd8) = auVar260;
      *(undefined1 (*) [16])(puVar114 + -0xdc8) = auVar131;
      *(undefined1 (*) [16])(puVar114 + -0xdb8) = auVar133;
      *(undefined4 *)(puVar114 + -0xda8) = uVar129;
      *(undefined4 *)(puVar114 + -0xda4) = uVar28;
      *(undefined4 *)(puVar114 + -0xda0) = uVar29;
      *(undefined4 *)(puVar114 + -0xd9c) = uVar30;
      uVar111 = *(undefined8 *)(puVar114 + -0xe90);
      *(undefined8 *)(puVar114 + lVar101 + 0xb248) = *(undefined8 *)(puVar114 + -0xe98);
      *(undefined8 *)((long)(puVar114 + lVar101 + 0xb248) + 8) = uVar111;
      uVar111 = *(undefined8 *)(puVar114 + -0xe88);
      uVar60 = *(undefined8 *)(puVar114 + -0xe80);
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb2c8) = auVar271;
      *(undefined8 *)(puVar114 + lVar101 + 0xb258) = uVar111;
      *(undefined8 *)(puVar114 + lVar101 + 0xb260) = uVar60;
      uVar111 = *(undefined8 *)(puVar114 + -0xe70);
      *(undefined8 *)(puVar114 + lVar101 + 0xb268) = *(undefined8 *)(puVar114 + -0xe78);
      *(undefined8 *)(puVar114 + lVar101 + 0xb270) = uVar111;
      uVar111 = *(undefined8 *)(puVar114 + -0xe60);
      *(undefined8 *)(puVar114 + lVar101 + 0xb278) = *(undefined8 *)(puVar114 + -0xe68);
      *(undefined8 *)(puVar114 + lVar101 + 0xb280) = uVar111;
      uVar111 = *(undefined8 *)(puVar114 + -0xe50);
      *(undefined8 *)(puVar114 + lVar101 + 0xb288) = *(undefined8 *)(puVar114 + -0xe58);
      *(undefined8 *)(puVar114 + lVar101 + 0xb290) = uVar111;
      uVar111 = *(undefined8 *)(puVar114 + -0xe40);
      *(undefined8 *)(puVar114 + lVar101 + 0xb298) = *(undefined8 *)(puVar114 + -0xe48);
      *(undefined8 *)(puVar114 + lVar101 + 0xb2a0) = uVar111;
      uVar111 = *(undefined8 *)(puVar114 + -0xe30);
      *(undefined8 *)(puVar114 + lVar101 + 0xb2a8) = *(undefined8 *)(puVar114 + -0xe38);
      *(undefined8 *)(puVar114 + lVar101 + 0xb2b0) = uVar111;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb2b8) =
           *(undefined1 (*) [16])(puVar114 + -0xe28);
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb2d8) = auVar248;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb2e8) = auVar264;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb2f8) = auVar220;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb308) = auVar260;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb318) = auVar131;
      *(undefined1 (*) [16])(puVar114 + lVar101 + 0xb328) = auVar133;
      *(undefined4 *)(puVar114 + lVar101 + 0xb338) = uVar129;
      *(undefined4 *)(puVar114 + lVar101 + 0xb33c) = uVar28;
      *(undefined4 *)(puVar114 + lVar101 + 0xb340) = uVar29;
      *(undefined4 *)(puVar114 + lVar101 + 0xb344) = uVar30;
      if (*(byte **)(puVar114 + -0x1a28) == pbVar126) break;
      uVar104 = (ulong)*pbVar126;
    }
  }
LAB_0010456f:
  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1968);
  *(undefined2 *)(puVar114 + -0x1924) = 0;
  piVar125 = &BC7Data::g_modes;
LAB_0010458b:
  do {
    if (1 < (ushort)(*(short *)(puVar114 + -0x1924) - 4U)) {
LAB_001045a2:
      if ((*(ushort *)(puVar114 + -0x1924) < 4) && (*(int *)(puVar114 + -0x181c) == 0)) {
        piVar125 = piVar125 + 9;
        *(ushort *)(puVar114 + -0x1924) = *(ushort *)(puVar114 + -0x1924) + 1;
        goto LAB_0010458b;
      }
      puVar114[-0x17ea] = *(short *)(puVar114 + -0x1924) == 7 & (puVar114[-0x17e9] ^ 1);
      if ((*(short *)(puVar114 + -0x1924) == 7 & (puVar114[-0x17e9] ^ 1)) != 0) goto LAB_00104635;
      iVar122 = piVar125[4];
      iVar80 = piVar125[5];
      *(undefined4 *)(puVar114 + -0x1820) = 4;
      iVar79 = 1 << ((byte)iVar122 & 0x1f);
      iVar122 = piVar125[6];
      if (*piVar125 != 0) {
        *(uint *)(puVar114 + -0x1820) = (*piVar125 == 1) + 1;
      }
      lVar100 = 1;
      puVar118 = (undefined1 *)&BC7Data::g_shapeList1;
      *(uint *)(puVar114 + -0x17a0) = (3 < *(ushort *)(puVar114 + -0x1924)) + 3;
      if (iVar80 != 1) {
        puVar118 = BC7Data::g_shapeList2;
        lVar100 = 0x80;
        if (iVar80 != 2) {
          puVar118 = BC7Data::g_shapeList3Short;
          if (iVar79 != 0x10) {
            puVar118 = (undefined1 *)&BC7Data::g_shapeList3;
          }
          iVar227 = 0x24;
          if (iVar79 != 0x10) {
            iVar227 = 0x8c;
          }
          lVar100 = (long)iVar227;
        }
      }
      puVar87 = (undefined4 *)(puVar114 + 0x21188);
      do {
        *puVar87 = _LC19;
        puVar87[1] = _LC19;
        puVar87[2] = _LC19;
        puVar87[3] = _LC19;
        puVar88 = puVar87 + 8;
        puVar87[4] = _LC19;
        puVar87[5] = _LC19;
        puVar87[6] = _LC19;
        puVar87[7] = _LC19;
        puVar87 = puVar88;
      } while ((undefined4 *)(puVar114 + 0x22fe8) != puVar88);
      *(int *)(puVar114 + -0x180c) = iVar80;
      iVar80 = 1 << ((byte)iVar122 & 0x1f);
      *(undefined1 (**) [16])(puVar114 + -0x1800) = pauVar91;
      *(int *)(puVar114 + -0x18dc) = iVar80;
      *(int *)(puVar114 + -0x1640) = iVar80 + -1;
      *(int **)(puVar114 + -0x1818) = (int *)((long)puVar118 + lVar100 * 4);
      iVar122 = *(int *)(puVar114 + -0x17a0);
      uVar128 = (undefined2)(iVar80 + -1);
      uVar129 = CONCAT22(uVar128,uVar128);
      this_01 = (IndexSelector<4> *)(puVar114 + -0x11b8);
      *(undefined1 **)(puVar114 + -0x19b0) = puVar114 + -0x1028;
      auVar161._4_4_ = uVar129;
      auVar161._0_4_ = uVar129;
      auVar161._8_4_ = uVar129;
      auVar161._12_4_ = uVar129;
      *(int *)(puVar114 + -0x1810) = iVar79;
      lVar100 = (long)iVar122 * 0x10;
      puVar114[-0x17ed] = cVar127;
      *(undefined1 **)(puVar114 + -0x1920) = puVar114 + -0x14b8;
      pIVar116 = this_01 + lVar100;
      *(undefined1 **)(puVar114 + -0x1860) = puVar114 + -0x14b8 + lVar100;
      *(int **)(puVar114 + -0x1808) = piVar125;
      *(undefined1 (*) [16])(puVar114 + -0x1938) = auVar161;
      do {
        iVar80 = *(int *)puVar118;
        if (*(ushort *)(puVar114 + -0x1924) < 4) {
          while( true ) {
            lVar101 = (long)iVar80;
            bVar9 = *(byte *)(*(long *)(puVar114 + -0x1898) + 0x3d + lVar101);
            if (bVar9 != 0) break;
            puVar118 = (undefined1 *)((long)puVar118 + 4);
            if (*(int **)(puVar114 + -0x1818) == (int *)puVar118) goto LAB_00105012;
            iVar80 = *(int *)puVar118;
          }
          *(long *)(puVar114 + -0x1900) = lVar101;
          uVar81 = 4;
          if (bVar9 < 5) {
            uVar81 = (uint)bVar9;
          }
          iVar80 = *(int *)(BC7Data::g_shapeRanges + lVar101 * 8);
          lVar83 = (long)iVar80;
          iVar79 = *(int *)(BC7Data::g_shapeRanges + lVar101 * 8 + 4);
          *(int *)(puVar114 + -0x18e0) = iVar79;
          if ((*(int *)(puVar114 + -0x179c) == 0) || (iVar79 < 1)) {
            iVar130 = 0;
            iVar153 = 0;
            iVar156 = 0;
            iVar157 = 0;
            lVar112 = (long)*(int *)(puVar114 + -0x18e0);
            *(long *)(puVar114 + -0x18e8) = (long)iVar80;
            iVar80 = iVar130;
            iVar79 = iVar153;
            iVar227 = iVar156;
            iVar229 = iVar157;
          }
          else {
            iVar130 = 0;
            iVar153 = 0;
            iVar156 = 0;
            iVar157 = 0;
            lVar112 = (long)iVar79;
            *(long *)(puVar114 + -0x18e8) = lVar83;
            pbVar126 = BC7Data::g_fragments + lVar83;
            iVar80 = 0;
            iVar79 = 0;
            iVar227 = 0;
            iVar229 = 0;
            do {
              bVar9 = *pbVar126;
              pbVar126 = pbVar126 + 1;
              psVar4 = (short *)(*(long *)(puVar114 + -0x19e0) + 0x30 + (ulong)bVar9 * 0x40);
              sVar154 = (_UNK_0011b6c6 - psVar4[3]) * (_UNK_0011b6c6 - psVar4[3]);
              uVar155 = (_UNK_0011b6c8 - psVar4[4]) * (_UNK_0011b6c8 - psVar4[4]);
              auVar76._2_2_ = uVar155;
              auVar76._0_2_ = sVar154;
              auVar76._4_8_ = 0;
              auVar11._12_2_ = sVar154;
              auVar11._0_12_ = auVar76 << 0x30;
              uVar111 = CONCAT44(auVar11._10_4_,
                                 CONCAT22((_UNK_0011b6c4 - psVar4[2]) * (_UNK_0011b6c4 - psVar4[2]),
                                          sVar154));
              auVar71._6_8_ = 0;
              auVar71._0_6_ = (uint6)((ulong)uVar111 >> 0x10);
              iVar130 = (uint)uVar155 + iVar130;
              iVar153 = (uint)(ushort)((_UNK_0011b6ca - psVar4[5]) * (_UNK_0011b6ca - psVar4[5])) +
                        iVar153;
              iVar156 = (uint)(ushort)((_UNK_0011b6cc - psVar4[6]) * (_UNK_0011b6cc - psVar4[6])) +
                        iVar156;
              iVar157 = (uint)(ushort)((_UNK_0011b6ce - psVar4[7]) * (_UNK_0011b6ce - psVar4[7])) +
                        iVar157;
              iVar80 = (uint)(ushort)((__LC37 - *psVar4) * (__LC37 - *psVar4)) + iVar80;
              iVar79 = (int)CONCAT82(SUB148(auVar71 << 0x40,6),
                                     (_UNK_0011b6c2 - psVar4[1]) * (_UNK_0011b6c2 - psVar4[1])) +
                       iVar79;
              iVar227 = (int)((ulong)uVar111 >> 0x10) + iVar227;
              iVar229 = (auVar11._10_4_ >> 0x10) + iVar229;
            } while (BC7Data::g_fragments + lVar83 + lVar112 != pbVar126);
          }
        }
        else {
          while( true ) {
            lVar101 = (long)iVar80;
            bVar9 = *(byte *)(*(long *)(puVar114 + -0x1898) + 0x130 + lVar101);
            if (bVar9 != 0) break;
            puVar118 = (undefined1 *)((long)puVar118 + 4);
            if ((int *)puVar118 == *(int **)(puVar114 + -0x1818)) goto LAB_00105012;
            iVar80 = *(int *)puVar118;
          }
          *(long *)(puVar114 + -0x1900) = lVar101;
          iVar130 = 0;
          iVar153 = 0;
          iVar156 = 0;
          iVar157 = 0;
          iVar80 = 0;
          iVar79 = 0;
          iVar227 = 0;
          iVar229 = 0;
          uVar81 = 4;
          if (bVar9 < 5) {
            uVar81 = (uint)bVar9;
          }
          lVar112 = (long)*(int *)(BC7Data::g_shapeRanges + lVar101 * 8 + 4);
          iVar10 = *(int *)(BC7Data::g_shapeRanges + lVar101 * 8);
          *(int *)(puVar114 + -0x18e0) = *(int *)(BC7Data::g_shapeRanges + lVar101 * 8 + 4);
          *(long *)(puVar114 + -0x18e8) = (long)iVar10;
        }
        fVar219 = (float)iVar80;
        fVar226 = (float)iVar79;
        fVar228 = (float)iVar227;
        fVar230 = (float)iVar229;
        *(float *)(puVar114 + -0x18b8) = (float)iVar130;
        *(float *)(puVar114 + -0x18b4) = (float)iVar153;
        *(float *)(puVar114 + -0x18b0) = (float)iVar156;
        *(float *)(puVar114 + -0x18ac) = (float)iVar157;
        *(uint *)(puVar114 + -0x1a28) = *(uint *)(puVar114 + -0x1858) & 0x200;
        if ((*(uint *)(puVar114 + -0x1858) & 0x200) == 0) {
          fVar259 = *(float *)(puVar114 + -0x18ec);
          fVar219 = fVar219 * fVar259;
          fVar226 = fVar226 * fVar259;
          fVar228 = fVar228 * fVar259;
          fVar230 = fVar230 * fVar259;
          *(float *)(puVar114 + -0x18b8) = fVar259 * *(float *)(puVar114 + -0x18b8);
          *(float *)(puVar114 + -0x18b4) = fVar259 * *(float *)(puVar114 + -0x18b4);
          *(float *)(puVar114 + -0x18b0) = fVar259 * *(float *)(puVar114 + -0x18b0);
          *(float *)(puVar114 + -0x18ac) = fVar259 * *(float *)(puVar114 + -0x18ac);
        }
        puVar113 = puVar114 + -0xe98;
        *(long *)(puVar114 + -0x1a10) = (long)(int)uVar81;
        lVar101 = 0;
        pFVar7 = (Float *)(puVar114 + -0x12b8);
        *(undefined1 **)(puVar114 + -0x17e8) = puVar113;
        *(long *)(puVar114 + -0x19a8) = lVar112;
        *(undefined1 **)(puVar114 + -0x19d8) = puVar118;
        auVar212._4_4_ = _LC13;
        auVar212._0_4_ = _LC13;
        auVar212._8_4_ = _LC13;
        auVar212._12_4_ = _LC13;
        *(long *)(puVar114 + -0x19e8) =
             *(long *)(puVar114 + -0x1900) * 0x100 + *(long *)(puVar114 + -0x1868);
        *(IndexSelector<4> **)(puVar114 + -0x1998) = this_01;
        *(IndexSelector<4> **)(puVar114 + -0x19c8) = pIVar116;
        *(long *)(puVar114 + -0x1a08) =
             *(long *)(puVar114 + -0x1900) * 0xc0 + *(long *)(puVar114 + -0x1868);
        *(undefined8 *)(puVar114 + -0x15f8) = *(undefined8 *)(puVar114 + -0x18b8);
        *(undefined8 *)(puVar114 + -0x15f0) = *(undefined8 *)(puVar114 + -0x18b0);
        *(float *)(puVar114 + -0x1608) = fVar219;
        *(float *)(puVar114 + -0x1604) = fVar226;
        *(float *)(puVar114 + -0x1600) = fVar228;
        *(float *)(puVar114 + -0x15fc) = fVar230;
        *(float *)(puVar114 + -0x19f8) = fVar219;
        *(float *)(puVar114 + -0x19f4) = fVar226;
        *(float *)(puVar114 + -0x19f0) = fVar228;
        *(float *)(puVar114 + -0x19ec) = fVar230;
        do {
          *(undefined4 *)(puVar114 + -0x163c) = MXCSR;
          uVar81 = *(uint *)(puVar114 + -0x163c);
          *(undefined1 **)(puVar114 + -0x1988) = puVar113 + 0x40;
          *(undefined1 (*) [16])(puVar114 + -0x1978) = auVar212;
          if (*(ushort *)(puVar114 + -0x1924) < 4) {
            *(uint *)(puVar114 + -0x163c) = uVar81 & 0xffff9fff;
            MXCSR = *(undefined4 *)(puVar114 + -0x163c);
            *(undefined8 *)(puVar114 + -0x1a30) = 0x105242;
            cvtt::Util::ComputeTweakFactors
                      ((int)lVar101,*(int *)(puVar114 + -0x18dc),(float *)pFVar7);
            lVar83 = 0;
            lVar112 = *(long *)(puVar114 + -0x1988);
            auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1978);
            fVar219 = *(float *)(puVar114 + -0x12b8);
            fVar226 = *(float *)(puVar114 + -0x12b4);
            pfVar89 = *(float **)(puVar114 + -0x1a08);
            do {
              auVar247._0_4_ = pfVar89[0x18] * fVar219 + *pfVar89;
              auVar247._4_4_ = pfVar89[0x19] * fVar219 + pfVar89[1];
              auVar247._8_4_ = pfVar89[0x1a] * fVar219 + pfVar89[2];
              auVar247._12_4_ = pfVar89[0x1b] * fVar219 + pfVar89[3];
              auVar263._0_4_ = pfVar89[0x1c] * fVar219 + pfVar89[4];
              auVar263._4_4_ = pfVar89[0x1d] * fVar219 + pfVar89[5];
              auVar263._8_4_ = pfVar89[0x1e] * fVar219 + pfVar89[6];
              auVar263._12_4_ = pfVar89[0x1f] * fVar219 + pfVar89[7];
              auVar141._0_4_ = pfVar89[0x18] * fVar226 + *pfVar89;
              auVar141._4_4_ = pfVar89[0x19] * fVar226 + pfVar89[1];
              auVar141._8_4_ = pfVar89[0x1a] * fVar226 + pfVar89[2];
              auVar141._12_4_ = pfVar89[0x1b] * fVar226 + pfVar89[3];
              auVar185._0_4_ = pfVar89[0x1c] * fVar226 + pfVar89[4];
              auVar185._4_4_ = pfVar89[0x1d] * fVar226 + pfVar89[5];
              auVar185._8_4_ = pfVar89[0x1e] * fVar226 + pfVar89[6];
              auVar185._12_4_ = pfVar89[0x1f] * fVar226 + pfVar89[7];
              auVar248 = minps(auVar247,auVar212);
              auVar264 = minps(auVar263,auVar212);
              auVar133 = minps(auVar141,auVar212);
              auVar271 = minps(auVar185,auVar212);
              auVar248 = maxps(auVar248,(undefined1  [16])0x0);
              auVar264 = maxps(auVar264,(undefined1  [16])0x0);
              auVar133 = maxps(auVar133,(undefined1  [16])0x0);
              auVar271 = maxps(auVar271,(undefined1  [16])0x0);
              auVar249._0_4_ = (int)auVar248._0_4_;
              auVar249._4_4_ = (int)auVar248._4_4_;
              auVar249._8_4_ = (int)auVar248._8_4_;
              auVar249._12_4_ = (int)auVar248._12_4_;
              auVar265._0_4_ = (int)auVar264._0_4_;
              auVar265._4_4_ = (int)auVar264._4_4_;
              auVar265._8_4_ = (int)auVar264._8_4_;
              auVar265._12_4_ = (int)auVar264._12_4_;
              auVar248 = packssdw(auVar249,auVar265);
              auVar142._0_4_ = (int)auVar133._0_4_;
              auVar142._4_4_ = (int)auVar133._4_4_;
              auVar142._8_4_ = (int)auVar133._8_4_;
              auVar142._12_4_ = (int)auVar133._12_4_;
              *(undefined1 (*) [16])(puVar113 + lVar83) = auVar248;
              auVar186._0_4_ = (int)auVar271._0_4_;
              auVar186._4_4_ = (int)auVar271._4_4_;
              auVar186._8_4_ = (int)auVar271._8_4_;
              auVar186._12_4_ = (int)auVar271._12_4_;
              auVar133 = packssdw(auVar142,auVar186);
              *(undefined1 (*) [16])(lVar112 + lVar83) = auVar133;
              lVar83 = lVar83 + 0x10;
              pfVar89 = pfVar89 + 8;
            } while (lVar83 != 0x30);
            *(uint *)(puVar114 + -0x163c) = uVar81;
            MXCSR = *(undefined4 *)(puVar114 + -0x163c);
            auVar67._2_2_ = _UNK_0011b6c2;
            auVar67._0_2_ = __LC37;
            auVar67._4_2_ = _UNK_0011b6c4;
            auVar67._6_2_ = _UNK_0011b6c6;
            auVar67._8_2_ = _UNK_0011b6c8;
            auVar67._10_2_ = _UNK_0011b6ca;
            auVar67._12_2_ = _UNK_0011b6cc;
            auVar67._14_2_ = _UNK_0011b6ce;
            *(undefined1 (*) [16])(puVar113 + 0x70) = auVar67;
            *(undefined1 (*) [16])(puVar113 + 0x30) = auVar67;
          }
          else {
            *(uint *)(puVar114 + -0x163c) = uVar81 & 0xffff9fff;
            MXCSR = *(undefined4 *)(puVar114 + -0x163c);
            *(undefined8 *)(puVar114 + -0x1a30) = 0x105421;
            cvtt::Util::ComputeTweakFactors
                      ((int)lVar101,*(int *)(puVar114 + -0x18dc),(float *)pFVar7);
            lVar123 = 0;
            lVar112 = *(long *)(puVar114 + -0x1988);
            auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1978);
            fVar219 = *(float *)(puVar114 + -0x12b8);
            fVar226 = *(float *)(puVar114 + -0x12b4);
            lVar83 = *(long *)(puVar114 + -0x19e8);
            do {
              auVar250._0_4_ = *(float *)(lVar83 + 0xb6c0) * fVar219 + *(float *)(lVar83 + 0xb640);
              auVar250._4_4_ = *(float *)(lVar83 + 0xb6c4) * fVar219 + *(float *)(lVar83 + 0xb644);
              auVar250._8_4_ = *(float *)(lVar83 + 0xb6c8) * fVar219 + *(float *)(lVar83 + 0xb648);
              auVar250._12_4_ = *(float *)(lVar83 + 0xb6cc) * fVar219 + *(float *)(lVar83 + 0xb64c);
              auVar266._0_4_ = *(float *)(lVar83 + 0xb6d0) * fVar219 + *(float *)(lVar83 + 0xb650);
              auVar266._4_4_ = *(float *)(lVar83 + 0xb6d4) * fVar219 + *(float *)(lVar83 + 0xb654);
              auVar266._8_4_ = *(float *)(lVar83 + 0xb6d8) * fVar219 + *(float *)(lVar83 + 0xb658);
              auVar266._12_4_ = *(float *)(lVar83 + 0xb6dc) * fVar219 + *(float *)(lVar83 + 0xb65c);
              auVar143._0_4_ = *(float *)(lVar83 + 0xb6c0) * fVar226 + *(float *)(lVar83 + 0xb640);
              auVar143._4_4_ = *(float *)(lVar83 + 0xb6c4) * fVar226 + *(float *)(lVar83 + 0xb644);
              auVar143._8_4_ = *(float *)(lVar83 + 0xb6c8) * fVar226 + *(float *)(lVar83 + 0xb648);
              auVar143._12_4_ = *(float *)(lVar83 + 0xb6cc) * fVar226 + *(float *)(lVar83 + 0xb64c);
              auVar187._0_4_ = *(float *)(lVar83 + 0xb6d0) * fVar226 + *(float *)(lVar83 + 0xb650);
              auVar187._4_4_ = *(float *)(lVar83 + 0xb6d4) * fVar226 + *(float *)(lVar83 + 0xb654);
              auVar187._8_4_ = *(float *)(lVar83 + 0xb6d8) * fVar226 + *(float *)(lVar83 + 0xb658);
              auVar187._12_4_ = *(float *)(lVar83 + 0xb6dc) * fVar226 + *(float *)(lVar83 + 0xb65c);
              auVar248 = minps(auVar250,auVar212);
              auVar264 = minps(auVar266,auVar212);
              auVar133 = minps(auVar143,auVar212);
              auVar271 = minps(auVar187,auVar212);
              auVar248 = maxps(auVar248,(undefined1  [16])0x0);
              auVar264 = maxps(auVar264,(undefined1  [16])0x0);
              auVar133 = maxps(auVar133,(undefined1  [16])0x0);
              auVar271 = maxps(auVar271,(undefined1  [16])0x0);
              auVar251._0_4_ = (int)auVar248._0_4_;
              auVar251._4_4_ = (int)auVar248._4_4_;
              auVar251._8_4_ = (int)auVar248._8_4_;
              auVar251._12_4_ = (int)auVar248._12_4_;
              auVar267._0_4_ = (int)auVar264._0_4_;
              auVar267._4_4_ = (int)auVar264._4_4_;
              auVar267._8_4_ = (int)auVar264._8_4_;
              auVar267._12_4_ = (int)auVar264._12_4_;
              auVar248 = packssdw(auVar251,auVar267);
              auVar144._0_4_ = (int)auVar133._0_4_;
              auVar144._4_4_ = (int)auVar133._4_4_;
              auVar144._8_4_ = (int)auVar133._8_4_;
              auVar144._12_4_ = (int)auVar133._12_4_;
              *(undefined1 (*) [16])(puVar113 + lVar123) = auVar248;
              auVar188._0_4_ = (int)auVar271._0_4_;
              auVar188._4_4_ = (int)auVar271._4_4_;
              auVar188._8_4_ = (int)auVar271._8_4_;
              auVar188._12_4_ = (int)auVar271._12_4_;
              auVar133 = packssdw(auVar144,auVar188);
              *(undefined1 (*) [16])(lVar112 + lVar123) = auVar133;
              lVar123 = lVar123 + 0x10;
              lVar83 = lVar83 + 0x20;
            } while (lVar123 != 0x40);
            *(uint *)(puVar114 + -0x163c) = uVar81;
            MXCSR = *(undefined4 *)(puVar114 + -0x163c);
          }
          lVar101 = lVar101 + 1;
          puVar113 = puVar113 + 0x80;
        } while (*(long *)(puVar114 + -0x1a10) != lVar101);
        uVar81 = *(uint *)(puVar114 + -0x1858);
        auVar133 = *(undefined1 (*) [16])(puVar114 + -0x19f8);
        pauVar91 = (undefined1 (*) [16])(puVar114 + -0x1598);
        uVar111 = *(undefined8 *)(puVar114 + -0x19d8);
        pIVar116 = *(IndexSelector<4> **)(puVar114 + -0x19c8);
        *(undefined1 (*) [16])(puVar114 + -0x1598) = (undefined1  [16])0x0;
        lVar112 = *(long *)(puVar114 + -0x19a8);
        this_01 = *(IndexSelector<4> **)(puVar114 + -0x1998);
        if (((uVar81 & 0x20) != 0) && ((ushort)(*(short *)(puVar114 + -0x1924) - 6U) < 2)) {
          *(ulong *)(puVar114 + -0x1598) =
               *(ulong *)(puVar114 + -0x1878) & *(ulong *)(puVar114 + -0x1678);
          *(ulong *)(puVar114 + -0x1590) =
               *(ulong *)(puVar114 + -0x1870) & *(ulong *)(puVar114 + -0x1670);
        }
        iVar80 = 0;
        pauVar90 = pauVar91;
        do {
          iVar80 = iVar80 + 1;
          pauVar90 = pauVar90 + 1;
          if (*(int *)(puVar114 + -0x1820) == iVar80) goto LAB_00105516;
          *pauVar90 = (undefined1  [16])0x0;
        } while ((uVar81 & 0x20) == 0);
        sVar154 = *(short *)(puVar114 + -0x1924);
        iVar79 = *(int *)(puVar114 + -0x1820);
        while( true ) {
          while (1 < (ushort)(sVar154 - 6U)) {
            iVar80 = iVar80 + 1;
            if (iVar79 == iVar80) goto LAB_00105516;
            pauVar90[1] = (undefined1  [16])0x0;
            pauVar90 = pauVar90 + 1;
          }
          if (iVar79 + -1 == iVar80) break;
          iVar80 = iVar80 + 1;
          *pauVar90 = *(undefined1 (*) [16])(puVar114 + -0x1878);
          if (iVar79 == iVar80) goto LAB_00105516;
          pauVar90[1] = (undefined1  [16])0x0;
          pauVar90 = pauVar90 + 1;
        }
        iVar80 = *(int *)(puVar114 + -0x1820);
        *pauVar90 = *(undefined1 (*) [16])(puVar114 + -0x1878) &
                    *(undefined1 (*) [16])(puVar114 + -0x17d8);
LAB_00105516:
        lVar83 = 0;
        *(undefined8 *)(puVar114 + -0x1668) = uVar111;
        *(long *)(puVar114 + -0x1688) = (long)iVar80;
        *(long *)(puVar114 + -0x1660) = lVar112;
        *(long *)(puVar114 + -0x17e0) = lVar101 * 0x80 + *(long *)(puVar114 + -0x17e8);
        *(undefined1 **)(puVar114 + -0x18d8) = puVar114 + -0x13b8;
        lVar123 = *(long *)(puVar114 + -0x1868);
        *(undefined1 **)(puVar114 + -0x19d8) = puVar114 + -0x13b8 + lVar112 * 0x10;
        *(long *)(puVar114 + -0x17a8) =
             lVar123 + 0x40 + (*(long *)(puVar114 + -0x1900) + 0x338) * 0x80;
        *(long *)(puVar114 + -0x1850) = lVar123 + (*(long *)(puVar114 + -0x1900) + 0x338) * 0x80;
        lVar101 = (*(long *)(puVar114 + -0x18e8) + 0x1374) * 0x10;
        *(long *)(puVar114 + -0x1828) = lVar123 + lVar101;
        do {
          auVar271 = pauVar91[lVar83];
          uVar81 = (uint)(ushort)((ushort)(SUB161(auVar271 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar271 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar271 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar271 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar271 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar271 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar271 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar271 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar271 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar271 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar271 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar271 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar271 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar271 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar271 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar271[0xf] >> 7) << 0xf);
          *(uint *)(puVar114 + -0x188c) = uVar81;
          if (uVar81 != 0xffff) {
            *(long *)(puVar114 + -0x1658) = lVar101;
            uVar81 = (uint)lVar83 & 1;
            uVar99 = (int)(uint)lVar83 >> 1;
            *(long *)(puVar114 + -0x1650) = lVar83;
            *(short *)(puVar114 + -0x1890) = (short)uVar81;
            *(uint *)(puVar114 + -0x1a10) = *(uint *)(puVar114 + -0x1858) & 8;
            *(uint *)(puVar114 + -0x1854) = uVar99;
            *(undefined1 (**) [16])(puVar114 + -0x1648) = pauVar91;
            *(int *)(puVar114 + -0x19e8) = *(int *)(puVar114 + -0x18c0) + -1;
            *(undefined1 (*) [16])(puVar114 + -0x18a8) = auVar133;
            sVar154 = (-(ushort)((char)uVar81 == '\0') & 0xfe) + 1;
            *(undefined1 (*) [16])(puVar114 + -0x1888) = auVar271;
            uVar129 = CONCAT22(sVar154,sVar154);
            *(undefined4 *)(puVar114 + -0x1848) = uVar129;
            *(undefined4 *)(puVar114 + -0x1844) = uVar129;
            *(undefined4 *)(puVar114 + -0x1840) = uVar129;
            *(undefined4 *)(puVar114 + -0x183c) = uVar129;
            *(long *)(puVar114 + -0x18c8) = *(long *)(puVar114 + -0x19b0) + 0x80;
            sVar154 = (-(ushort)((uVar99 & 1) == 0) & 0xfe) + 1;
            *(long *)(puVar114 + -0x18d0) = *(long *)(puVar114 + -0x19b0) + 0x10;
            puVar102 = *(undefined8 **)(puVar114 + -0x17e8);
            uVar129 = CONCAT22(sVar154,sVar154);
            *(undefined4 *)(puVar114 + -0x1838) = uVar129;
            *(undefined4 *)(puVar114 + -0x1834) = uVar129;
            *(undefined4 *)(puVar114 + -0x1830) = uVar129;
            *(undefined4 *)(puVar114 + -0x182c) = uVar129;
            *(float *)(puVar114 + -0x18bc) = (float)*(int *)(puVar114 + -0x1640);
            do {
              uVar111 = *puVar102;
              uVar60 = puVar102[1];
              *(short *)(puVar114 + -0x15c6) = (short)uVar99;
              iVar80 = 0;
              *(short *)(puVar114 + -0x17ec) = (short)uVar99;
              *(undefined8 *)(puVar114 + -0x14b8) = uVar111;
              *(undefined8 *)(puVar114 + -0x14b0) = uVar60;
              uVar111 = puVar102[2];
              uVar60 = puVar102[3];
              *(undefined2 *)(puVar114 + -0x15c8) = *(undefined2 *)(puVar114 + -0x1890);
              *(undefined8 *)(puVar114 + -0x14a8) = uVar111;
              *(undefined8 *)(puVar114 + -0x14a0) = uVar60;
              uVar111 = puVar102[4];
              uVar60 = puVar102[5];
              *(undefined8 **)(puVar114 + -0x17f8) = puVar102;
              *(undefined8 *)(puVar114 + -0x1498) = uVar111;
              *(undefined8 *)(puVar114 + -0x1490) = uVar60;
              uVar111 = puVar102[7];
              *(undefined8 *)(puVar114 + -0x1488) = puVar102[6];
              *(undefined8 *)(puVar114 + -0x1480) = uVar111;
              uVar111 = puVar102[9];
              *(undefined8 *)(puVar114 + -0x1478) = puVar102[8];
              *(undefined8 *)(puVar114 + -0x1470) = uVar111;
              uVar111 = puVar102[0xb];
              *(undefined8 *)(puVar114 + -0x1468) = puVar102[10];
              *(undefined8 *)(puVar114 + -0x1460) = uVar111;
              uVar111 = puVar102[0xd];
              *(undefined8 *)(puVar114 + -0x1458) = puVar102[0xc];
              *(undefined8 *)(puVar114 + -0x1450) = uVar111;
              uVar111 = puVar102[0xf];
              *(undefined8 *)(puVar114 + -0x1448) = puVar102[0xe];
              *(undefined8 *)(puVar114 + -0x1440) = uVar111;
              do {
                switch(*(undefined2 *)(puVar114 + -0x1924)) {
                case 0:
                  *(undefined1 (*) [16])(puVar114 + -0x1a08) = auVar212;
                  *(undefined8 *)(puVar114 + -0x1a30) = 0x105807;
                  CompressEndpoints0(*(VInt16<2> **)(puVar114 + -0x1920),
                                     (ushort *)(puVar114 + -0x15c8));
                  auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1a08);
                  break;
                case 1:
                  *(undefined1 (*) [16])(puVar114 + -0x1a08) = auVar212;
                  *(undefined8 *)(puVar114 + -0x1a30) = 0x1057e3;
                  CompressEndpoints1(*(VInt16<2> **)(puVar114 + -0x1920),
                                     *(ushort *)(puVar114 + -0x1890));
                  auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1a08);
                  break;
                case 2:
                  *(undefined1 (*) [16])(puVar114 + -0x1a08) = auVar212;
                  *(undefined8 *)(puVar114 + -0x1a30) = 0x1057bf;
                  CompressEndpoints2(*(VInt16<2> **)(puVar114 + -0x1920));
                  auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1a08);
                  break;
                case 3:
                  sVar154 = *(short *)(puVar114 + -0x1848);
                  sVar21 = *(short *)(puVar114 + -0x1846);
                  sVar22 = *(short *)(puVar114 + -0x1844);
                  sVar23 = *(short *)(puVar114 + -0x1842);
                  sVar24 = *(short *)(puVar114 + -0x1840);
                  sVar25 = *(short *)(puVar114 + -0x183e);
                  sVar26 = *(short *)(puVar114 + -0x183c);
                  sVar27 = *(short *)(puVar114 + -0x183a);
                  auVar162._0_4_ =
                       CONCAT22((short)*(undefined4 *)(puVar114 + -0x1890),
                                (short)*(undefined4 *)(puVar114 + -0x1890));
                  auVar162._4_4_ = auVar162._0_4_;
                  auVar162._8_4_ = auVar162._0_4_;
                  auVar162._12_4_ = auVar162._0_4_;
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1920) + 3;
                  pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  do {
                    pauVar120 = pauVar90 + 1;
                    auVar133 = psllw(*pauVar90,8);
                    auVar137._0_2_ = (ushort)((auVar133._0_2_ + sVar154) - *(short *)*pauVar90) >> 9
                    ;
                    auVar137._2_2_ =
                         (ushort)((auVar133._2_2_ + sVar21) - *(short *)(*pauVar90 + 2)) >> 9;
                    auVar137._4_2_ =
                         (ushort)((auVar133._4_2_ + sVar22) - *(short *)(*pauVar90 + 4)) >> 9;
                    auVar137._6_2_ =
                         (ushort)((auVar133._6_2_ + sVar23) - *(short *)(*pauVar90 + 6)) >> 9;
                    auVar137._8_2_ =
                         (ushort)((auVar133._8_2_ + sVar24) - *(short *)(*pauVar90 + 8)) >> 9;
                    auVar137._10_2_ =
                         (ushort)((auVar133._10_2_ + sVar25) - *(short *)(*pauVar90 + 10)) >> 9;
                    auVar137._12_2_ =
                         (ushort)((auVar133._12_2_ + sVar26) - *(short *)(*pauVar90 + 0xc)) >> 9;
                    auVar137._14_2_ =
                         (ushort)((auVar133._14_2_ + sVar27) - *(short *)(*pauVar90 + 0xe)) >> 9;
                    auVar133 = psllw(auVar137,1);
                    *pauVar90 = auVar133 | auVar162;
                    pauVar90 = pauVar120;
                  } while (pauVar91 != pauVar120);
                  sVar154 = *(short *)(puVar114 + -0x1838);
                  sVar21 = *(short *)(puVar114 + -0x1836);
                  sVar22 = *(short *)(puVar114 + -0x1834);
                  sVar23 = *(short *)(puVar114 + -0x1832);
                  sVar24 = *(short *)(puVar114 + -0x1830);
                  sVar25 = *(short *)(puVar114 + -0x182e);
                  sVar26 = *(short *)(puVar114 + -0x182c);
                  sVar27 = *(short *)(puVar114 + -0x182a);
                  *(ulong *)(puVar114 + -0x1488) =
                       CONCAT26(_UNK_0011b6c6,CONCAT24(_UNK_0011b6c4,CONCAT22(_UNK_0011b6c2,__LC37))
                               );
                  *(ulong *)(puVar114 + -0x1480) =
                       CONCAT26(_UNK_0011b6ce,
                                CONCAT24(_UNK_0011b6cc,CONCAT22(_UNK_0011b6ca,_UNK_0011b6c8)));
                  auVar163._0_4_ =
                       CONCAT22((short)*(undefined4 *)(puVar114 + -0x1854),
                                (short)*(undefined4 *)(puVar114 + -0x1854));
                  auVar163._4_4_ = auVar163._0_4_;
                  auVar163._8_4_ = auVar163._0_4_;
                  auVar163._12_4_ = auVar163._0_4_;
                  pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  do {
                    pauVar120 = pauVar90 + 1;
                    auVar133 = psllw(pauVar90[4],8);
                    auVar138._0_2_ =
                         (ushort)((auVar133._0_2_ + sVar154) - *(short *)pauVar90[4]) >> 9;
                    auVar138._2_2_ =
                         (ushort)((auVar133._2_2_ + sVar21) - *(short *)(pauVar90[4] + 2)) >> 9;
                    auVar138._4_2_ =
                         (ushort)((auVar133._4_2_ + sVar22) - *(short *)(pauVar90[4] + 4)) >> 9;
                    auVar138._6_2_ =
                         (ushort)((auVar133._6_2_ + sVar23) - *(short *)(pauVar90[4] + 6)) >> 9;
                    auVar138._8_2_ =
                         (ushort)((auVar133._8_2_ + sVar24) - *(short *)(pauVar90[4] + 8)) >> 9;
                    auVar138._10_2_ =
                         (ushort)((auVar133._10_2_ + sVar25) - *(short *)(pauVar90[4] + 10)) >> 9;
                    auVar138._12_2_ =
                         (ushort)((auVar133._12_2_ + sVar26) - *(short *)(pauVar90[4] + 0xc)) >> 9;
                    auVar138._14_2_ =
                         (ushort)((auVar133._14_2_ + sVar27) - *(short *)(pauVar90[4] + 0xe)) >> 9;
                    auVar133 = psllw(auVar138,1);
                    pauVar90[4] = auVar133 | auVar163;
                    pauVar90 = pauVar120;
                  } while (pauVar91 != pauVar120);
                  *(ulong *)(puVar114 + -0x1448) =
                       CONCAT26(_UNK_0011b6c6,CONCAT24(_UNK_0011b6c4,CONCAT22(_UNK_0011b6c2,__LC37))
                               );
                  *(ulong *)(puVar114 + -0x1440) =
                       CONCAT26(_UNK_0011b6ce,
                                CONCAT24(_UNK_0011b6cc,CONCAT22(_UNK_0011b6ca,_UNK_0011b6c8)));
                  break;
                case 6:
                  sVar154 = *(short *)(puVar114 + -0x1848);
                  sVar21 = *(short *)(puVar114 + -0x1846);
                  sVar22 = *(short *)(puVar114 + -0x1844);
                  sVar23 = *(short *)(puVar114 + -0x1842);
                  sVar24 = *(short *)(puVar114 + -0x1840);
                  sVar25 = *(short *)(puVar114 + -0x183e);
                  sVar26 = *(short *)(puVar114 + -0x183c);
                  sVar27 = *(short *)(puVar114 + -0x183a);
                  auVar167._0_4_ =
                       CONCAT22((short)*(undefined4 *)(puVar114 + -0x1890),
                                (short)*(undefined4 *)(puVar114 + -0x1890));
                  auVar167._4_4_ = auVar167._0_4_;
                  auVar167._8_4_ = auVar167._0_4_;
                  auVar167._12_4_ = auVar167._0_4_;
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1920) + 4;
                  pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  do {
                    pauVar120 = pauVar90 + 1;
                    auVar133 = psllw(*pauVar90,8);
                    auVar145._0_2_ = (ushort)((auVar133._0_2_ + sVar154) - *(short *)*pauVar90) >> 9
                    ;
                    auVar145._2_2_ =
                         (ushort)((auVar133._2_2_ + sVar21) - *(short *)(*pauVar90 + 2)) >> 9;
                    auVar145._4_2_ =
                         (ushort)((auVar133._4_2_ + sVar22) - *(short *)(*pauVar90 + 4)) >> 9;
                    auVar145._6_2_ =
                         (ushort)((auVar133._6_2_ + sVar23) - *(short *)(*pauVar90 + 6)) >> 9;
                    auVar145._8_2_ =
                         (ushort)((auVar133._8_2_ + sVar24) - *(short *)(*pauVar90 + 8)) >> 9;
                    auVar145._10_2_ =
                         (ushort)((auVar133._10_2_ + sVar25) - *(short *)(*pauVar90 + 10)) >> 9;
                    auVar145._12_2_ =
                         (ushort)((auVar133._12_2_ + sVar26) - *(short *)(*pauVar90 + 0xc)) >> 9;
                    auVar145._14_2_ =
                         (ushort)((auVar133._14_2_ + sVar27) - *(short *)(*pauVar90 + 0xe)) >> 9;
                    auVar133 = psllw(auVar145,1);
                    *pauVar90 = auVar133 | auVar167;
                    pauVar90 = pauVar120;
                  } while (pauVar91 != pauVar120);
                  sVar154 = *(short *)(puVar114 + -0x1838);
                  sVar21 = *(short *)(puVar114 + -0x1836);
                  sVar22 = *(short *)(puVar114 + -0x1834);
                  sVar23 = *(short *)(puVar114 + -0x1832);
                  sVar24 = *(short *)(puVar114 + -0x1830);
                  sVar25 = *(short *)(puVar114 + -0x182e);
                  sVar26 = *(short *)(puVar114 + -0x182c);
                  sVar27 = *(short *)(puVar114 + -0x182a);
                  auVar168._0_4_ =
                       CONCAT22((short)*(undefined4 *)(puVar114 + -0x1854),
                                (short)*(undefined4 *)(puVar114 + -0x1854));
                  auVar168._4_4_ = auVar168._0_4_;
                  auVar168._8_4_ = auVar168._0_4_;
                  auVar168._12_4_ = auVar168._0_4_;
                  pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  do {
                    pauVar120 = pauVar90 + 1;
                    auVar133 = psllw(pauVar90[4],8);
                    auVar146._0_2_ =
                         (ushort)((auVar133._0_2_ + sVar154) - *(short *)pauVar90[4]) >> 9;
                    auVar146._2_2_ =
                         (ushort)((auVar133._2_2_ + sVar21) - *(short *)(pauVar90[4] + 2)) >> 9;
                    auVar146._4_2_ =
                         (ushort)((auVar133._4_2_ + sVar22) - *(short *)(pauVar90[4] + 4)) >> 9;
                    auVar146._6_2_ =
                         (ushort)((auVar133._6_2_ + sVar23) - *(short *)(pauVar90[4] + 6)) >> 9;
                    auVar146._8_2_ =
                         (ushort)((auVar133._8_2_ + sVar24) - *(short *)(pauVar90[4] + 8)) >> 9;
                    auVar146._10_2_ =
                         (ushort)((auVar133._10_2_ + sVar25) - *(short *)(pauVar90[4] + 10)) >> 9;
                    auVar146._12_2_ =
                         (ushort)((auVar133._12_2_ + sVar26) - *(short *)(pauVar90[4] + 0xc)) >> 9;
                    auVar146._14_2_ =
                         (ushort)((auVar133._14_2_ + sVar27) - *(short *)(pauVar90[4] + 0xe)) >> 9;
                    auVar133 = psllw(auVar146,1);
                    pauVar90[4] = auVar133 | auVar168;
                    pauVar90 = pauVar120;
                  } while (pauVar91 != pauVar120);
                  break;
                case 7:
                  *(undefined8 *)(puVar114 + -0x1a30) = 0x1057a8;
                  CompressEndpoints7(*(VInt16<2> **)(puVar114 + -0x1920),
                                     (ushort *)(puVar114 + -0x15c8));
                }
                *(undefined1 (*) [16])(puVar114 + -0x1a08) = auVar212;
                *(undefined8 *)(puVar114 + -0x1a30) = 0x104958;
                IndexSelector<4>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
                          (this_01,*(float **)(puVar114 + -0x1908),
                           *(VInt16<2> **)(puVar114 + -0x1920),*(VInt16<2> **)(puVar114 + -0x1920),
                           *(int *)(puVar114 + -0x18dc));
                sVar27 = _UNK_0011b7ce;
                sVar26 = _UNK_0011b7cc;
                sVar25 = _UNK_0011b7ca;
                sVar24 = _UNK_0011b7c8;
                sVar23 = _UNK_0011b7c6;
                sVar22 = _UNK_0011b7c4;
                sVar21 = _UNK_0011b7c2;
                sVar154 = __LC42;
                auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1a08);
                pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x18c8);
                pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x19b0);
                do {
                  *pauVar90 = (undefined1  [16])0x0;
                  pauVar120 = pauVar90 + 2;
                  pauVar90[1] = (undefined1  [16])0x0;
                  pauVar90[8] = (undefined1  [16])0x0;
                  pauVar90[9] = (undefined1  [16])0x0;
                  pauVar90 = pauVar120;
                } while (pauVar91 != pauVar120);
                pfVar89 = *(float **)(puVar114 + -0x1908);
                *(undefined1 (*) [16])(puVar114 + -0xf28) = (undefined1  [16])0x0;
                lVar101 = *(long *)(puVar114 + -0x18d0);
                *(undefined1 (*) [16])(puVar114 + -0xf18) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0xf08) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0xef8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0xee8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0xed8) = (undefined1  [16])0x0;
                *(float *)(puVar114 + -0x1958) = _LC29 / *(float *)(puVar114 + -0x18bc);
                *(float *)(puVar114 + -0xec4) = _LC29 / *(float *)(puVar114 + -0x18bc);
                lVar112 = *(long *)(puVar114 + -0x19b0);
                do {
                  fVar219 = *pfVar89;
                  fVar226 = _LC29;
                  if (fVar219 != 0.0) {
                    fVar226 = _LC29 / fVar219;
                  }
                  *(float *)(lVar112 + 0x168) = fVar219;
                  lVar83 = lVar112 + 4;
                  pfVar89 = pfVar89 + 1;
                  *(float *)(lVar112 + 0x178) = fVar226;
                  lVar112 = lVar83;
                } while (lVar101 != lVar83);
                *(undefined4 *)(puVar114 + -0xec8) = 0;
                *(undefined1 (*) [16])(puVar114 + -0x1438) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x1428) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x1418) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x1408) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x13f8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x13e8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x13d8) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar114 + -0x13c8) = (undefined1  [16])0x0;
                if (*(int *)(puVar114 + -0x18e0) < 1) {
                  auVar279 = (undefined1  [16])0x0;
                  fVar219 = 0.0;
                  fVar226 = 0.0;
                  fVar228 = 0.0;
                  fVar230 = 0.0;
                }
                else {
                  uVar28 = *(undefined4 *)(puVar114 + -0x18f8);
                  auVar279 = (undefined1  [16])0x0;
                  uVar129 = *(undefined4 *)(puVar114 + -0x1034);
                  lVar101 = (long)*(int *)(puVar114 + -0x1038) * 0x10;
                  *(undefined8 *)(puVar114 + -0x1a08) = *(undefined8 *)(puVar114 + -0x10b8);
                  *(undefined8 *)(puVar114 + -0x1a00) = *(undefined8 *)(puVar114 + -0x10b0);
                  fVar259 = *(float *)(puVar114 + -0x1138);
                  fVar276 = *(float *)(puVar114 + -0x1134);
                  fVar277 = *(float *)(puVar114 + -0x1130);
                  fVar278 = *(float *)(puVar114 + -0x112c);
                  sVar158 = *(short *)(&g_weightReciprocals + lVar101);
                  sVar178 = *(short *)(lVar101 + 0x11d05a);
                  sVar47 = *(short *)(lVar101 + 0x11d05c);
                  sVar48 = *(short *)(lVar101 + 0x11d05e);
                  sVar49 = *(short *)(lVar101 + 0x11d060);
                  sVar50 = *(short *)(lVar101 + 0x11d062);
                  sVar51 = *(short *)(lVar101 + 0x11d064);
                  sVar52 = *(short *)(lVar101 + 0x11d066);
                  fVar219 = 0.0;
                  fVar226 = 0.0;
                  fVar228 = 0.0;
                  fVar230 = 0.0;
                  puVar6 = (ushort *)(puVar114 + -0x1518);
                  *(undefined8 *)(puVar114 + -0x19f8) = *(undefined8 *)(puVar114 + -0x10a8);
                  *(undefined8 *)(puVar114 + -0x19f0) = *(undefined8 *)(puVar114 + -0x10a0);
                  auVar284._0_12_ = ZEXT812(0);
                  auVar284._12_4_ = 0;
                  fVar31 = *(float *)(puVar114 + -0x1128);
                  fVar32 = *(float *)(puVar114 + -0x1124);
                  fVar33 = *(float *)(puVar114 + -0x1120);
                  fVar34 = *(float *)(puVar114 + -0x111c);
                  pbVar126 = BC7Data::g_fragments + *(long *)(puVar114 + -0x18e8);
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x18d8);
                  *(undefined1 **)(puVar114 + -0x1940) = puVar114 + -0x1558;
                  auVar283._4_4_ = uVar129;
                  auVar283._0_4_ = uVar129;
                  auVar283._8_4_ = uVar129;
                  auVar283._12_4_ = uVar129;
                  *(undefined1 **)(puVar114 + -0x19c8) = puVar114 + -0x1538;
                  *(undefined1 **)(puVar114 + -0x1948) = puVar114 + -0x1438;
                  *(undefined4 *)(puVar114 + -0x1978) = uVar28;
                  *(undefined4 *)(puVar114 + -0x1974) = uVar28;
                  *(undefined4 *)(puVar114 + -0x1970) = uVar28;
                  *(undefined4 *)(puVar114 + -0x196c) = uVar28;
                  *(undefined1 (*) [16])(puVar114 + -0x1918) = auVar212;
                  do {
                    bVar9 = *pbVar126;
                    lVar101 = (ulong)bVar9 * 0x80;
                    pfVar89 = (float *)(*(long *)(puVar114 + -0x19b8) + lVar101);
                    auVar182._0_4_ = (*pfVar89 - fVar259) * *(float *)(puVar114 + -0x1a08);
                    auVar182._4_4_ = (pfVar89[1] - fVar276) * *(float *)(puVar114 + -0x1a04);
                    auVar182._8_4_ = (pfVar89[2] - fVar277) * *(float *)(puVar114 + -0x1a00);
                    auVar182._12_4_ = (pfVar89[3] - fVar278) * *(float *)(puVar114 + -0x19fc);
                    auVar209._0_4_ = (pfVar89[4] - fVar31) * *(float *)(puVar114 + -0x19f8);
                    auVar209._4_4_ = (pfVar89[5] - fVar32) * *(float *)(puVar114 + -0x19f4);
                    auVar209._8_4_ = (pfVar89[6] - fVar33) * *(float *)(puVar114 + -0x19f0);
                    auVar209._12_4_ = (pfVar89[7] - fVar34) * *(float *)(puVar114 + -0x19ec);
                    pIVar107 = this_01;
                    do {
                      pIVar106 = pIVar107 + 0x20;
                      auVar183._0_4_ =
                           auVar182._0_4_ +
                           (pfVar89[8] - *(float *)(pIVar107 + 0xa0)) * *(float *)(pIVar107 + 0x120)
                      ;
                      auVar183._4_4_ =
                           auVar182._4_4_ +
                           (pfVar89[9] - *(float *)(pIVar107 + 0xa4)) * *(float *)(pIVar107 + 0x124)
                      ;
                      auVar183._8_4_ =
                           auVar182._8_4_ +
                           (pfVar89[10] - *(float *)(pIVar107 + 0xa8)) *
                           *(float *)(pIVar107 + 0x128);
                      auVar183._12_4_ =
                           auVar182._12_4_ +
                           (pfVar89[0xb] - *(float *)(pIVar107 + 0xac)) * *(float *)(pIVar107 + 300)
                      ;
                      auVar210._0_4_ =
                           auVar209._0_4_ +
                           (pfVar89[0xc] - *(float *)(pIVar107 + 0xb0)) *
                           *(float *)(pIVar107 + 0x130);
                      auVar210._4_4_ =
                           auVar209._4_4_ +
                           (pfVar89[0xd] - *(float *)(pIVar107 + 0xb4)) *
                           *(float *)(pIVar107 + 0x134);
                      auVar210._8_4_ =
                           auVar209._8_4_ +
                           (pfVar89[0xe] - *(float *)(pIVar107 + 0xb8)) *
                           *(float *)(pIVar107 + 0x138);
                      auVar210._12_4_ =
                           auVar209._12_4_ +
                           (pfVar89[0xf] - *(float *)(pIVar107 + 0xbc)) *
                           *(float *)(pIVar107 + 0x13c);
                      pIVar107 = pIVar106;
                      auVar182 = auVar183;
                      auVar209 = auVar210;
                      pfVar89 = pfVar89 + 8;
                    } while (this_01 + 0x60 != pIVar106);
                    auVar133 = minps(auVar183,auVar283);
                    auVar271 = minps(auVar210,auVar283);
                    auVar133 = maxps(auVar133,auVar284);
                    auVar271 = maxps(auVar271,auVar284);
                    auVar184._0_4_ = (int)auVar133._0_4_;
                    auVar184._4_4_ = (int)auVar133._4_4_;
                    auVar184._8_4_ = (int)auVar133._8_4_;
                    auVar184._12_4_ = (int)auVar133._12_4_;
                    auVar211._0_4_ = (int)auVar271._0_4_;
                    auVar211._4_4_ = (int)auVar271._4_4_;
                    auVar211._8_4_ = (int)auVar271._8_4_;
                    auVar211._12_4_ = (int)auVar271._12_4_;
                    auVar133 = packssdw(auVar184,auVar211);
                    sVar179 = auVar133._0_2_;
                    sVar194 = auVar133._2_2_;
                    sVar196 = auVar133._4_2_;
                    sVar197 = auVar133._6_2_;
                    sVar200 = auVar133._8_2_;
                    sVar202 = auVar133._10_2_;
                    sVar204 = auVar133._12_2_;
                    sVar206 = auVar133._14_2_;
                    uVar155 = (ushort)(sVar158 * sVar179 + __LC30) >> 9;
                    uVar236 = (ushort)(sVar178 * sVar194 + _UNK_0011b742) >> 9;
                    uVar237 = (ushort)(sVar47 * sVar196 + _UNK_0011b744) >> 9;
                    uVar239 = (ushort)(sVar48 * sVar197 + _UNK_0011b746) >> 9;
                    uVar240 = (ushort)(sVar49 * sVar200 + _UNK_0011b748) >> 9;
                    uVar242 = (ushort)(sVar50 * sVar202 + _UNK_0011b74a) >> 9;
                    uVar243 = (ushort)(sVar51 * sVar204 + _UNK_0011b74c) >> 9;
                    uVar245 = (ushort)(sVar52 * sVar206 + _UNK_0011b74e) >> 9;
                    pIVar107 = this_01;
                    puVar109 = puVar6;
                    do {
                      sVar53 = *(short *)pIVar107;
                      sVar54 = *(short *)(pIVar107 + 2);
                      sVar198 = *(short *)(pIVar107 + 4);
                      sVar55 = *(short *)(pIVar107 + 6);
                      sVar56 = *(short *)(pIVar107 + 8);
                      sVar57 = *(short *)(pIVar107 + 10);
                      sVar58 = *(short *)(pIVar107 + 0xc);
                      sVar59 = *(short *)(pIVar107 + 0xe);
                      pIVar106 = pIVar107 + 0x40;
                      sVar180 = *(short *)(pIVar107 + 0x42);
                      sVar195 = *(short *)(pIVar107 + 0x44);
                      sVar218 = *(short *)(pIVar107 + 0x46);
                      sVar199 = *(short *)(pIVar107 + 0x48);
                      sVar201 = *(short *)(pIVar107 + 0x4a);
                      sVar203 = *(short *)(pIVar107 + 0x4c);
                      sVar205 = *(short *)(pIVar107 + 0x4e);
                      pIVar107 = pIVar107 + 0x10;
                      *puVar109 = (ushort)(sVar53 * (_LC31[0] - uVar155) +
                                           *(short *)pIVar106 * uVar155 + sVar154) >> 6;
                      puVar109[1] = (ushort)(sVar54 * (_LC31[1] - uVar236) + sVar180 * uVar236 +
                                            sVar21) >> 6;
                      puVar109[2] = (ushort)(sVar198 * (_LC31[2] - uVar237) + sVar195 * uVar237 +
                                            sVar22) >> 6;
                      puVar109[3] = (ushort)(sVar55 * (_LC31[3] - uVar239) + sVar218 * uVar239 +
                                            sVar23) >> 6;
                      puVar109[4] = (ushort)(sVar56 * (_LC31[4] - uVar240) + sVar199 * uVar240 +
                                            sVar24) >> 6;
                      puVar109[5] = (ushort)(sVar57 * (_LC31[5] - uVar242) + sVar201 * uVar242 +
                                            sVar25) >> 6;
                      puVar109[6] = (ushort)(sVar58 * (_LC31[6] - uVar243) + sVar203 * uVar243 +
                                            sVar26) >> 6;
                      puVar109[7] = (ushort)(sVar59 * (_LC31[7] - uVar245) + sVar205 * uVar245 +
                                            sVar27) >> 6;
                      puVar109 = puVar109 + 8;
                    } while (pIVar116 != pIVar107);
                    lVar112 = (ulong)bVar9 * 0x40;
                    if (*(int *)(puVar114 + -0x1a10) == 0) {
                      *(undefined1 (*) [16])(puVar114 + -0x12b8) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar114 + -0x12a8) = (undefined1  [16])0x0;
                      lVar112 = lVar112 + *(long *)(puVar114 + -0x19e0);
                      *(undefined1 (*) [16])(puVar114 + -0x1298) = (undefined1  [16])0x0;
                      lVar83 = 0;
                      *(undefined1 (*) [16])(puVar114 + -0x1288) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar114 + -0x1278) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar114 + -0x1268) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar114 + -0x1258) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])(puVar114 + -0x1248) = (undefined1  [16])0x0;
                      pFVar108 = pFVar7;
                      do {
                        psVar4 = (short *)(lVar83 + (long)puVar6);
                        sVar53 = *psVar4;
                        sVar54 = psVar4[1];
                        sVar198 = psVar4[5];
                        sVar55 = psVar4[6];
                        sVar56 = psVar4[7];
                        psVar103 = (short *)(lVar112 + lVar83);
                        sVar57 = *psVar103;
                        sVar58 = psVar103[1];
                        sVar59 = psVar103[5];
                        sVar180 = psVar103[6];
                        sVar195 = psVar103[7];
                        lVar83 = lVar83 + 0x10;
                        sVar218 = (psVar4[3] - psVar103[3]) * (psVar4[3] - psVar103[3]);
                        uVar155 = (psVar4[4] - psVar103[4]) * (psVar4[4] - psVar103[4]);
                        auVar77._2_2_ = uVar155;
                        auVar77._0_2_ = sVar218;
                        auVar77._4_8_ = 0;
                        auVar15._12_2_ = sVar218;
                        auVar15._0_12_ = auVar77 << 0x30;
                        uVar111 = CONCAT44(auVar15._10_4_,
                                           CONCAT22((psVar4[2] - psVar103[2]) *
                                                    (psVar4[2] - psVar103[2]),sVar218));
                        auVar72._6_8_ = 0;
                        auVar72._0_6_ = (uint6)((ulong)uVar111 >> 0x10);
                        *(uint *)(pFVar108 + 0x10) = (uint)uVar155 + *(int *)(pFVar108 + 0x10);
                        *(uint *)(pFVar108 + 0x14) =
                             (uint)(ushort)((sVar198 - sVar59) * (sVar198 - sVar59)) +
                             *(int *)(pFVar108 + 0x14);
                        *(uint *)(pFVar108 + 0x18) =
                             (uint)(ushort)((sVar55 - sVar180) * (sVar55 - sVar180)) +
                             *(int *)(pFVar108 + 0x18);
                        *(uint *)(pFVar108 + 0x1c) =
                             (uint)(ushort)((sVar56 - sVar195) * (sVar56 - sVar195)) +
                             *(int *)(pFVar108 + 0x1c);
                        *(uint *)pFVar108 =
                             (uint)(ushort)((sVar53 - sVar57) * (sVar53 - sVar57)) +
                             *(int *)pFVar108;
                        *(int *)(pFVar108 + 4) =
                             (int)CONCAT82(SUB148(auVar72 << 0x40,6),
                                           (sVar54 - sVar58) * (sVar54 - sVar58)) +
                             *(int *)(pFVar108 + 4);
                        *(int *)(pFVar108 + 8) =
                             (int)((ulong)uVar111 >> 0x10) + *(int *)(pFVar108 + 8);
                        *(uint *)(pFVar108 + 0xc) =
                             (auVar15._10_4_ >> 0x10) + *(int *)(pFVar108 + 0xc);
                        pFVar108 = pFVar108 + 0x20;
                      } while (lVar100 != lVar83);
                      if (*(int *)(puVar114 + -0x1a28) == 0) {
                        lVar83 = 0;
                        *(undefined1 (*) [16])(puVar114 + -0x19a8) = auVar279;
                        auVar269._0_4_ =
                             (float)*(int *)(puVar114 + -0x12b8) * *(float *)(puVar114 + -0x1978);
                        auVar269._4_4_ =
                             (float)*(int *)(puVar114 + -0x12b4) * *(float *)(puVar114 + -0x1974);
                        auVar269._8_4_ =
                             (float)*(int *)(puVar114 + -0x12b0) * *(float *)(puVar114 + -0x1970);
                        auVar269._12_4_ =
                             (float)*(int *)(puVar114 + -0x12ac) * *(float *)(puVar114 + -0x196c);
                        auVar253._0_4_ =
                             (float)*(int *)(puVar114 + -0x12a8) * *(float *)(puVar114 + -0x1978);
                        auVar253._4_4_ =
                             (float)*(int *)(puVar114 + -0x12a4) * *(float *)(puVar114 + -0x1974);
                        auVar253._8_4_ =
                             (float)*(int *)(puVar114 + -0x12a0) * *(float *)(puVar114 + -0x1970);
                        auVar253._12_4_ =
                             (float)*(int *)(puVar114 + -0x129c) * *(float *)(puVar114 + -0x196c);
                        do {
                          fVar258 = *(float *)(puVar114 + lVar83 + -0x1624);
                          piVar125 = (int *)(puVar114 + lVar83 * 8 + -0x1298);
                          piVar5 = (int *)(puVar114 + lVar83 * 8 + -0x1288);
                          lVar83 = lVar83 + 4;
                          auVar268._0_4_ = auVar269._0_4_ + (float)*piVar125 * fVar258;
                          auVar268._4_4_ = auVar269._4_4_ + (float)piVar125[1] * fVar258;
                          auVar268._8_4_ = auVar269._8_4_ + (float)piVar125[2] * fVar258;
                          auVar268._12_4_ = auVar269._12_4_ + (float)piVar125[3] * fVar258;
                          auVar252._0_4_ = auVar253._0_4_ + (float)*piVar5 * fVar258;
                          auVar252._4_4_ = auVar253._4_4_ + (float)piVar5[1] * fVar258;
                          auVar252._8_4_ = auVar253._8_4_ + (float)piVar5[2] * fVar258;
                          auVar252._12_4_ = auVar253._12_4_ + (float)piVar5[3] * fVar258;
                          auVar253 = auVar252;
                          auVar269 = auVar268;
                        } while (lVar83 != 0xc);
                        auVar279 = *(undefined1 (*) [16])(puVar114 + -0x19a8);
                      }
                      else {
                        auVar268._0_4_ =
                             (float)(*(int *)(puVar114 + -0x1298) + *(int *)(puVar114 + -0x12b8) +
                                     *(int *)(puVar114 + -0x1278) + *(int *)(puVar114 + -0x1258));
                        auVar268._4_4_ =
                             (float)(*(int *)(puVar114 + -0x1294) + *(int *)(puVar114 + -0x12b4) +
                                     *(int *)(puVar114 + -0x1274) + *(int *)(puVar114 + -0x1254));
                        auVar268._8_4_ =
                             (float)(*(int *)(puVar114 + -0x1290) + *(int *)(puVar114 + -0x12b0) +
                                     *(int *)(puVar114 + -0x1270) + *(int *)(puVar114 + -0x1250));
                        auVar268._12_4_ =
                             (float)(*(int *)(puVar114 + -0x128c) + *(int *)(puVar114 + -0x12ac) +
                                     *(int *)(puVar114 + -0x126c) + *(int *)(puVar114 + -0x124c));
                        auVar252._0_4_ =
                             (float)(*(int *)(puVar114 + -0x1248) + *(int *)(puVar114 + -0x1268) +
                                     *(int *)(puVar114 + -0x12a8) + *(int *)(puVar114 + -0x1288));
                        auVar252._4_4_ =
                             (float)(*(int *)(puVar114 + -0x1244) + *(int *)(puVar114 + -0x1264) +
                                     *(int *)(puVar114 + -0x12a4) + *(int *)(puVar114 + -0x1284));
                        auVar252._8_4_ =
                             (float)(*(int *)(puVar114 + -0x1240) + *(int *)(puVar114 + -0x1260) +
                                     *(int *)(puVar114 + -0x12a0) + *(int *)(puVar114 + -0x1280));
                        auVar252._12_4_ =
                             (float)(*(int *)(puVar114 + -0x123c) + *(int *)(puVar114 + -0x125c) +
                                     *(int *)(puVar114 + -0x129c) + *(int *)(puVar114 + -0x127c));
                      }
                      *(long *)(puVar114 + -0x19a8) = lVar101;
                      pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1940);
                      *(undefined1 (*) [16])(puVar114 + -0x1998) = auVar279;
                      *(float *)(puVar114 + -0x1988) = fVar259;
                      *(float *)(puVar114 + -0x1984) = fVar276;
                      *(float *)(puVar114 + -0x1980) = fVar277;
                      *(float *)(puVar114 + -0x197c) = fVar278;
                      sVar180 = sVar179 + __LC43;
                      sVar195 = sVar194 + _UNK_0011b7d2;
                      sVar218 = sVar196 + _UNK_0011b7d4;
                      sVar199 = sVar197 + _UNK_0011b7d6;
                      sVar201 = sVar200 + _UNK_0011b7d8;
                      sVar203 = sVar202 + _UNK_0011b7da;
                      sVar205 = sVar204 + _UNK_0011b7dc;
                      sVar207 = sVar206 + _UNK_0011b7de;
                      sVar53 = *(short *)(puVar114 + -0x1938);
                      sVar54 = *(short *)(puVar114 + -0x1936);
                      sVar198 = *(short *)(puVar114 + -0x1934);
                      sVar55 = *(short *)(puVar114 + -0x1932);
                      sVar56 = *(short *)(puVar114 + -0x1930);
                      sVar57 = *(short *)(puVar114 + -0x192e);
                      sVar58 = *(short *)(puVar114 + -0x192c);
                      sVar59 = *(short *)(puVar114 + -0x192a);
                      *(ushort *)(puVar114 + -0x1558) =
                           ((ushort)(__LC43 < sVar179) * sVar179 |
                           (ushort)(__LC43 >= sVar179) * __LC43) + __LC45;
                      *(ushort *)(puVar114 + -0x1556) =
                           ((ushort)(_UNK_0011b7d2 < sVar194) * sVar194 |
                           (ushort)(_UNK_0011b7d2 >= sVar194) * _UNK_0011b7d2) + _UNK_0011b7e2;
                      *(ushort *)(puVar114 + -0x1554) =
                           ((ushort)(_UNK_0011b7d4 < sVar196) * sVar196 |
                           (ushort)(_UNK_0011b7d4 >= sVar196) * _UNK_0011b7d4) + _UNK_0011b7e4;
                      *(ushort *)(puVar114 + -0x1552) =
                           ((ushort)(_UNK_0011b7d6 < sVar197) * sVar197 |
                           (ushort)(_UNK_0011b7d6 >= sVar197) * _UNK_0011b7d6) + _UNK_0011b7e6;
                      *(ushort *)(puVar114 + -0x1550) =
                           ((ushort)(_UNK_0011b7d8 < sVar200) * sVar200 |
                           (ushort)(_UNK_0011b7d8 >= sVar200) * _UNK_0011b7d8) + _UNK_0011b7e8;
                      *(ushort *)(puVar114 + -0x154e) =
                           ((ushort)(_UNK_0011b7da < sVar202) * sVar202 |
                           (ushort)(_UNK_0011b7da >= sVar202) * _UNK_0011b7da) + _UNK_0011b7ea;
                      *(ushort *)(puVar114 + -0x154c) =
                           ((ushort)(_UNK_0011b7dc < sVar204) * sVar204 |
                           (ushort)(_UNK_0011b7dc >= sVar204) * _UNK_0011b7dc) + _UNK_0011b7ec;
                      *(ushort *)(puVar114 + -0x154a) =
                           ((ushort)(_UNK_0011b7de < sVar206) * sVar206 |
                           (ushort)(_UNK_0011b7de >= sVar206) * _UNK_0011b7de) + _UNK_0011b7ee;
                      *(ushort *)(puVar114 + -0x1548) =
                           (ushort)(sVar53 < sVar180) * sVar53 |
                           (ushort)(sVar53 >= sVar180) * sVar180;
                      *(ushort *)(puVar114 + -0x1546) =
                           (ushort)(sVar54 < sVar195) * sVar54 |
                           (ushort)(sVar54 >= sVar195) * sVar195;
                      *(ushort *)(puVar114 + -0x1544) =
                           (ushort)(sVar198 < sVar218) * sVar198 |
                           (ushort)(sVar198 >= sVar218) * sVar218;
                      *(ushort *)(puVar114 + -0x1542) =
                           (ushort)(sVar55 < sVar199) * sVar55 |
                           (ushort)(sVar55 >= sVar199) * sVar199;
                      *(ushort *)(puVar114 + -0x1540) =
                           (ushort)(sVar56 < sVar201) * sVar56 |
                           (ushort)(sVar56 >= sVar201) * sVar201;
                      *(ushort *)(puVar114 + -0x153e) =
                           (ushort)(sVar57 < sVar203) * sVar57 |
                           (ushort)(sVar57 >= sVar203) * sVar203;
                      *(ushort *)(puVar114 + -0x153c) =
                           (ushort)(sVar58 < sVar205) * sVar58 |
                           (ushort)(sVar58 >= sVar205) * sVar205;
                      *(ushort *)(puVar114 + -0x153a) =
                           (ushort)(sVar59 < sVar207) * sVar59 |
                           (ushort)(sVar59 >= sVar207) * sVar207;
                      do {
                        auVar271 = *pauVar90;
                        uVar155 = (ushort)(sVar158 * auVar271._0_2_ + __LC30) >> 9;
                        uVar236 = (ushort)(sVar178 * auVar271._2_2_ + _UNK_0011b742) >> 9;
                        uVar237 = (ushort)(sVar47 * auVar271._4_2_ + _UNK_0011b744) >> 9;
                        uVar239 = (ushort)(sVar48 * auVar271._6_2_ + _UNK_0011b746) >> 9;
                        uVar240 = (ushort)(sVar49 * auVar271._8_2_ + _UNK_0011b748) >> 9;
                        uVar242 = (ushort)(sVar50 * auVar271._10_2_ + _UNK_0011b74a) >> 9;
                        uVar243 = (ushort)(sVar51 * auVar271._12_2_ + _UNK_0011b74c) >> 9;
                        uVar245 = (ushort)(sVar52 * auVar271._14_2_ + _UNK_0011b74e) >> 9;
                        pIVar107 = this_01;
                        puVar109 = puVar6;
                        do {
                          sVar179 = *(short *)pIVar107;
                          sVar194 = *(short *)(pIVar107 + 2);
                          sVar196 = *(short *)(pIVar107 + 4);
                          sVar197 = *(short *)(pIVar107 + 6);
                          sVar200 = *(short *)(pIVar107 + 8);
                          sVar202 = *(short *)(pIVar107 + 10);
                          sVar204 = *(short *)(pIVar107 + 0xc);
                          sVar206 = *(short *)(pIVar107 + 0xe);
                          pIVar106 = pIVar107 + 0x40;
                          sVar53 = *(short *)(pIVar107 + 0x42);
                          sVar54 = *(short *)(pIVar107 + 0x44);
                          sVar198 = *(short *)(pIVar107 + 0x46);
                          sVar55 = *(short *)(pIVar107 + 0x48);
                          sVar56 = *(short *)(pIVar107 + 0x4a);
                          sVar57 = *(short *)(pIVar107 + 0x4c);
                          sVar58 = *(short *)(pIVar107 + 0x4e);
                          pIVar107 = pIVar107 + 0x10;
                          *puVar109 = (ushort)(sVar179 * (_LC31[0] - uVar155) +
                                               *(short *)pIVar106 * uVar155 + sVar154) >> 6;
                          puVar109[1] = (ushort)(sVar194 * (_LC31[1] - uVar236) + sVar53 * uVar236 +
                                                sVar21) >> 6;
                          puVar109[2] = (ushort)(sVar196 * (_LC31[2] - uVar237) + sVar54 * uVar237 +
                                                sVar22) >> 6;
                          puVar109[3] = (ushort)(sVar197 * (_LC31[3] - uVar239) + sVar198 * uVar239
                                                + sVar23) >> 6;
                          puVar109[4] = (ushort)(sVar200 * (_LC31[4] - uVar240) + sVar55 * uVar240 +
                                                sVar24) >> 6;
                          puVar109[5] = (ushort)(sVar202 * (_LC31[5] - uVar242) + sVar56 * uVar242 +
                                                sVar25) >> 6;
                          puVar109[6] = (ushort)(sVar204 * (_LC31[6] - uVar243) + sVar57 * uVar243 +
                                                sVar26) >> 6;
                          puVar109[7] = (ushort)(sVar206 * (_LC31[7] - uVar245) + sVar58 * uVar245 +
                                                sVar27) >> 6;
                          puVar109 = puVar109 + 8;
                        } while (pIVar116 != pIVar107);
                        *(undefined1 (*) [16])(puVar114 + -0x12b8) = (undefined1  [16])0x0;
                        lVar101 = 0;
                        *(undefined1 (*) [16])(puVar114 + -0x12a8) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1298) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1288) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1278) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1268) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1258) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])(puVar114 + -0x1248) = (undefined1  [16])0x0;
                        pFVar108 = pFVar7;
                        do {
                          psVar4 = (short *)(lVar101 + (long)puVar6);
                          sVar179 = *psVar4;
                          sVar194 = psVar4[1];
                          sVar196 = psVar4[5];
                          sVar197 = psVar4[6];
                          sVar200 = psVar4[7];
                          psVar103 = (short *)(lVar112 + lVar101);
                          sVar202 = *psVar103;
                          sVar204 = psVar103[1];
                          sVar206 = psVar103[5];
                          sVar53 = psVar103[6];
                          sVar54 = psVar103[7];
                          lVar101 = lVar101 + 0x10;
                          sVar198 = (psVar4[3] - psVar103[3]) * (psVar4[3] - psVar103[3]);
                          uVar155 = (psVar4[4] - psVar103[4]) * (psVar4[4] - psVar103[4]);
                          auVar78._2_2_ = uVar155;
                          auVar78._0_2_ = sVar198;
                          auVar78._4_8_ = 0;
                          auVar16._12_2_ = sVar198;
                          auVar16._0_12_ = auVar78 << 0x30;
                          uVar111 = CONCAT44(auVar16._10_4_,
                                             CONCAT22((psVar4[2] - psVar103[2]) *
                                                      (psVar4[2] - psVar103[2]),sVar198));
                          auVar73._6_8_ = 0;
                          auVar73._0_6_ = (uint6)((ulong)uVar111 >> 0x10);
                          *(uint *)(pFVar108 + 0x10) = (uint)uVar155 + *(int *)(pFVar108 + 0x10);
                          *(uint *)(pFVar108 + 0x14) =
                               (uint)(ushort)((sVar196 - sVar206) * (sVar196 - sVar206)) +
                               *(int *)(pFVar108 + 0x14);
                          *(uint *)(pFVar108 + 0x18) =
                               (uint)(ushort)((sVar197 - sVar53) * (sVar197 - sVar53)) +
                               *(int *)(pFVar108 + 0x18);
                          *(uint *)(pFVar108 + 0x1c) =
                               (uint)(ushort)((sVar200 - sVar54) * (sVar200 - sVar54)) +
                               *(int *)(pFVar108 + 0x1c);
                          *(uint *)pFVar108 =
                               (uint)(ushort)((sVar179 - sVar202) * (sVar179 - sVar202)) +
                               *(int *)pFVar108;
                          *(int *)(pFVar108 + 4) =
                               (int)CONCAT82(SUB148(auVar73 << 0x40,6),
                                             (sVar194 - sVar204) * (sVar194 - sVar204)) +
                               *(int *)(pFVar108 + 4);
                          *(int *)(pFVar108 + 8) =
                               (int)((ulong)uVar111 >> 0x10) + *(int *)(pFVar108 + 8);
                          *(uint *)(pFVar108 + 0xc) =
                               (auVar16._10_4_ >> 0x10) + *(int *)(pFVar108 + 0xc);
                          pFVar108 = pFVar108 + 0x20;
                        } while (lVar100 != lVar101);
                        if (*(int *)(puVar114 + -0x1a28) == 0) {
                          lVar101 = 0;
                          *(undefined1 (*) [16])(puVar114 + -0x1968) = auVar271;
                          auVar214._0_4_ =
                               (float)*(int *)(puVar114 + -0x12b8) * *(float *)(puVar114 + -0x1978);
                          auVar214._4_4_ =
                               (float)*(int *)(puVar114 + -0x12b4) * *(float *)(puVar114 + -0x1974);
                          auVar214._8_4_ =
                               (float)*(int *)(puVar114 + -0x12b0) * *(float *)(puVar114 + -0x1970);
                          auVar214._12_4_ =
                               (float)*(int *)(puVar114 + -0x12ac) * *(float *)(puVar114 + -0x196c);
                          auVar190._0_4_ =
                               (float)*(int *)(puVar114 + -0x12a8) * *(float *)(puVar114 + -0x1978);
                          auVar190._4_4_ =
                               (float)*(int *)(puVar114 + -0x12a4) * *(float *)(puVar114 + -0x1974);
                          auVar190._8_4_ =
                               (float)*(int *)(puVar114 + -0x12a0) * *(float *)(puVar114 + -0x1970);
                          auVar190._12_4_ =
                               (float)*(int *)(puVar114 + -0x129c) * *(float *)(puVar114 + -0x196c);
                          do {
                            fVar259 = *(float *)(puVar114 + lVar101 + -0x1624);
                            piVar125 = (int *)(puVar114 + lVar101 * 8 + -0x1298);
                            piVar5 = (int *)(puVar114 + lVar101 * 8 + -0x1288);
                            lVar101 = lVar101 + 4;
                            auVar213._0_4_ = auVar214._0_4_ + (float)*piVar125 * fVar259;
                            auVar213._4_4_ = auVar214._4_4_ + (float)piVar125[1] * fVar259;
                            auVar213._8_4_ = auVar214._8_4_ + (float)piVar125[2] * fVar259;
                            auVar213._12_4_ = auVar214._12_4_ + (float)piVar125[3] * fVar259;
                            auVar189._0_4_ = auVar190._0_4_ + (float)*piVar5 * fVar259;
                            auVar189._4_4_ = auVar190._4_4_ + (float)piVar5[1] * fVar259;
                            auVar189._8_4_ = auVar190._8_4_ + (float)piVar5[2] * fVar259;
                            auVar189._12_4_ = auVar190._12_4_ + (float)piVar5[3] * fVar259;
                            auVar190 = auVar189;
                            auVar214 = auVar213;
                          } while (lVar101 != 0xc);
                          auVar271 = *(undefined1 (*) [16])(puVar114 + -0x1968);
                        }
                        else {
                          auVar213._0_4_ =
                               (float)(*(int *)(puVar114 + -0x12b8) + *(int *)(puVar114 + -0x1298) +
                                       *(int *)(puVar114 + -0x1278) + *(int *)(puVar114 + -0x1258));
                          auVar213._4_4_ =
                               (float)(*(int *)(puVar114 + -0x12b4) + *(int *)(puVar114 + -0x1294) +
                                       *(int *)(puVar114 + -0x1274) + *(int *)(puVar114 + -0x1254));
                          auVar213._8_4_ =
                               (float)(*(int *)(puVar114 + -0x12b0) + *(int *)(puVar114 + -0x1290) +
                                       *(int *)(puVar114 + -0x1270) + *(int *)(puVar114 + -0x1250));
                          auVar213._12_4_ =
                               (float)(*(int *)(puVar114 + -0x12ac) + *(int *)(puVar114 + -0x128c) +
                                       *(int *)(puVar114 + -0x126c) + *(int *)(puVar114 + -0x124c));
                          auVar189._0_4_ =
                               (float)(*(int *)(puVar114 + -0x1248) + *(int *)(puVar114 + -0x1268) +
                                       *(int *)(puVar114 + -0x1288) + *(int *)(puVar114 + -0x12a8));
                          auVar189._4_4_ =
                               (float)(*(int *)(puVar114 + -0x1244) + *(int *)(puVar114 + -0x1264) +
                                       *(int *)(puVar114 + -0x1284) + *(int *)(puVar114 + -0x12a4));
                          auVar189._8_4_ =
                               (float)(*(int *)(puVar114 + -0x1240) + *(int *)(puVar114 + -0x1260) +
                                       *(int *)(puVar114 + -0x1280) + *(int *)(puVar114 + -0x12a0));
                          auVar189._12_4_ =
                               (float)(*(int *)(puVar114 + -0x123c) + *(int *)(puVar114 + -0x125c) +
                                       *(int *)(puVar114 + -0x127c) + *(int *)(puVar114 + -0x129c));
                        }
                        pauVar90 = pauVar90 + 1;
                        auVar232._4_4_ = -(uint)(auVar213._4_4_ < auVar268._4_4_);
                        auVar232._0_4_ = -(uint)(auVar213._0_4_ < auVar268._0_4_);
                        auVar232._8_4_ = -(uint)(auVar213._8_4_ < auVar268._8_4_);
                        auVar232._12_4_ = -(uint)(auVar213._12_4_ < auVar268._12_4_);
                        auVar275._4_4_ = -(uint)(auVar189._4_4_ < auVar252._4_4_);
                        auVar275._0_4_ = -(uint)(auVar189._0_4_ < auVar252._0_4_);
                        auVar275._8_4_ = -(uint)(auVar189._8_4_ < auVar252._8_4_);
                        auVar275._12_4_ = -(uint)(auVar189._12_4_ < auVar252._12_4_);
                        auVar252 = minps(auVar252,auVar189);
                        auVar268 = minps(auVar268,auVar213);
                        auVar248 = packssdw(auVar232,auVar275);
                        auVar133 = auVar271 & auVar248 | ~auVar248 & auVar133;
                      } while (*(undefined1 (**) [16])(puVar114 + -0x19c8) != pauVar90);
                      fVar219 = fVar219 + auVar268._0_4_;
                      fVar226 = fVar226 + auVar268._4_4_;
                      fVar228 = fVar228 + auVar268._8_4_;
                      fVar230 = fVar230 + auVar268._12_4_;
                      lVar101 = *(long *)(puVar114 + -0x19a8);
                      fVar259 = *(float *)(puVar114 + -0x1988);
                      fVar276 = *(float *)(puVar114 + -0x1984);
                      fVar277 = *(float *)(puVar114 + -0x1980);
                      fVar278 = *(float *)(puVar114 + -0x197c);
                      auVar279._0_4_ = *(float *)(puVar114 + -0x1998) + auVar252._0_4_;
                      auVar279._4_4_ = *(float *)(puVar114 + -0x1994) + auVar252._4_4_;
                      auVar279._8_4_ = *(float *)(puVar114 + -0x1990) + auVar252._8_4_;
                      auVar279._12_4_ = *(float *)(puVar114 + -0x198c) + auVar252._12_4_;
                    }
                    else {
                      lVar83 = *(long *)(puVar114 + -0x19e0);
                      lVar123 = 0;
                      piVar125 = *(int **)(puVar114 + -0x1948);
                      do {
                        psVar4 = (short *)(lVar123 + (long)puVar6);
                        sVar179 = *psVar4;
                        sVar194 = psVar4[1];
                        sVar196 = psVar4[5];
                        sVar197 = psVar4[6];
                        sVar200 = psVar4[7];
                        psVar103 = (short *)(lVar112 + lVar83 + lVar123);
                        sVar202 = *psVar103;
                        sVar204 = psVar103[1];
                        sVar206 = psVar103[5];
                        sVar53 = psVar103[6];
                        sVar54 = psVar103[7];
                        lVar123 = lVar123 + 0x10;
                        sVar198 = (psVar4[3] - psVar103[3]) * (psVar4[3] - psVar103[3]);
                        uVar155 = (psVar4[4] - psVar103[4]) * (psVar4[4] - psVar103[4]);
                        auVar75._2_2_ = uVar155;
                        auVar75._0_2_ = sVar198;
                        auVar75._4_8_ = 0;
                        auVar13._12_2_ = sVar198;
                        auVar13._0_12_ = auVar75 << 0x30;
                        uVar111 = CONCAT44(auVar13._10_4_,
                                           CONCAT22((psVar4[2] - psVar103[2]) *
                                                    (psVar4[2] - psVar103[2]),sVar198));
                        auVar69._6_8_ = 0;
                        auVar69._0_6_ = (uint6)((ulong)uVar111 >> 0x10);
                        piVar125[4] = (uint)uVar155 + piVar125[4];
                        piVar125[5] = (uint)(ushort)((sVar196 - sVar206) * (sVar196 - sVar206)) +
                                      piVar125[5];
                        piVar125[6] = (uint)(ushort)((sVar197 - sVar53) * (sVar197 - sVar53)) +
                                      piVar125[6];
                        piVar125[7] = (uint)(ushort)((sVar200 - sVar54) * (sVar200 - sVar54)) +
                                      piVar125[7];
                        *piVar125 = (uint)(ushort)((sVar179 - sVar202) * (sVar179 - sVar202)) +
                                    *piVar125;
                        piVar125[1] = (int)CONCAT82(SUB148(auVar69 << 0x40,6),
                                                    (sVar194 - sVar204) * (sVar194 - sVar204)) +
                                      piVar125[1];
                        piVar125[2] = (int)((ulong)uVar111 >> 0x10) + piVar125[2];
                        piVar125[3] = (auVar13._10_4_ >> 0x10) + piVar125[3];
                        piVar125 = piVar125 + 8;
                      } while (lVar100 != lVar123);
                    }
                    if (iVar80 != *(int *)(puVar114 + -0x19e8)) {
                      fVar258 = *(float *)(puVar114 + -0x1958);
                      auVar14._10_2_ = 0;
                      auVar14._0_10_ = auVar133._0_10_;
                      auVar14._12_2_ = auVar133._6_2_;
                      auVar19._8_2_ = auVar133._4_2_;
                      auVar19._0_8_ = auVar133._0_8_;
                      auVar19._10_4_ = auVar14._10_4_;
                      auVar70._6_8_ = 0;
                      auVar70._0_6_ = auVar19._8_6_;
                      fVar231 = (float)auVar133._0_2_ * fVar258;
                      fVar238 = (float)(int)CONCAT82(SUB148(auVar70 << 0x40,6),auVar133._2_2_) *
                                fVar258;
                      fVar241 = (float)auVar19._8_4_ * fVar258;
                      fVar244 = (float)(auVar14._10_4_ >> 0x10) * fVar258;
                      fVar246 = fVar258 * (float)auVar133._8_2_;
                      fVar256 = fVar258 * (float)auVar133._10_2_;
                      fVar257 = fVar258 * (float)auVar133._12_2_;
                      fVar258 = fVar258 * (float)auVar133._14_2_;
                      pfVar89 = (float *)(lVar101 + *(long *)(puVar114 + -0x1950));
                      pfVar121 = *(float **)(puVar114 + -0x19b0);
                      do {
                        fVar35 = pfVar89[5];
                        fVar36 = pfVar89[6];
                        fVar37 = pfVar89[7];
                        fVar38 = *pfVar89;
                        fVar39 = pfVar89[1];
                        fVar40 = pfVar89[2];
                        fVar41 = pfVar89[3];
                        pfVar105 = pfVar121 + 8;
                        pfVar121[4] = pfVar89[4] * fVar246 + pfVar121[4];
                        pfVar121[5] = fVar35 * fVar256 + pfVar121[5];
                        pfVar121[6] = fVar36 * fVar257 + pfVar121[6];
                        pfVar121[7] = fVar37 * fVar258 + pfVar121[7];
                        fVar35 = pfVar89[4];
                        fVar36 = pfVar89[5];
                        fVar37 = pfVar89[6];
                        fVar42 = pfVar89[7];
                        *pfVar121 = fVar38 * fVar231 + *pfVar121;
                        pfVar121[1] = fVar39 * fVar238 + pfVar121[1];
                        pfVar121[2] = fVar40 * fVar241 + pfVar121[2];
                        pfVar121[3] = fVar41 * fVar244 + pfVar121[3];
                        fVar38 = *pfVar89;
                        fVar39 = pfVar89[1];
                        fVar40 = pfVar89[2];
                        fVar41 = pfVar89[3];
                        pfVar121[0x24] = fVar35 + pfVar121[0x24];
                        pfVar121[0x25] = fVar36 + pfVar121[0x25];
                        pfVar121[0x26] = fVar37 + pfVar121[0x26];
                        pfVar121[0x27] = fVar42 + pfVar121[0x27];
                        pfVar121[0x20] = fVar38 + pfVar121[0x20];
                        pfVar121[0x21] = fVar39 + pfVar121[0x21];
                        pfVar121[0x22] = fVar40 + pfVar121[0x22];
                        pfVar121[0x23] = fVar41 + pfVar121[0x23];
                        pfVar89 = pfVar89 + 8;
                        pfVar121 = pfVar105;
                      } while ((float *)(puVar114 + -0x1028 + (long)iVar122 * 0x20) != pfVar105);
                      *(int *)(puVar114 + -0xec8) = *(int *)(puVar114 + -0xec8) + 1;
                      *(float *)(puVar114 + -0xef8) = fVar246 + *(float *)(puVar114 + -0xef8);
                      *(float *)(puVar114 + -0xef4) = fVar256 + *(float *)(puVar114 + -0xef4);
                      *(float *)(puVar114 + -0xef0) = fVar257 + *(float *)(puVar114 + -0xef0);
                      *(float *)(puVar114 + -0xeec) = fVar258 + *(float *)(puVar114 + -0xeec);
                      *(float *)(puVar114 + -0xf18) =
                           fVar246 * fVar246 + *(float *)(puVar114 + -0xf18);
                      *(float *)(puVar114 + -0xf14) =
                           fVar256 * fVar256 + *(float *)(puVar114 + -0xf14);
                      *(float *)(puVar114 + -0xf10) =
                           fVar257 * fVar257 + *(float *)(puVar114 + -0xf10);
                      *(float *)(puVar114 + -0xf0c) =
                           fVar258 * fVar258 + *(float *)(puVar114 + -0xf0c);
                      *(float *)(puVar114 + -0xf28) =
                           fVar231 * fVar231 + *(float *)(puVar114 + -0xf28);
                      *(float *)(puVar114 + -0xf24) =
                           fVar238 * fVar238 + *(float *)(puVar114 + -0xf24);
                      *(float *)(puVar114 + -0xf20) =
                           fVar241 * fVar241 + *(float *)(puVar114 + -0xf20);
                      *(float *)(puVar114 + -0xf1c) =
                           fVar244 * fVar244 + *(float *)(puVar114 + -0xf1c);
                      *(float *)(puVar114 + -0xf08) = fVar231 + *(float *)(puVar114 + -0xf08);
                      *(float *)(puVar114 + -0xf04) = fVar238 + *(float *)(puVar114 + -0xf04);
                      *(float *)(puVar114 + -0xf00) = fVar241 + *(float *)(puVar114 + -0xf00);
                      *(float *)(puVar114 + -0xefc) = fVar244 + *(float *)(puVar114 + -0xefc);
                    }
                    *pauVar91 = auVar133;
                    pbVar126 = pbVar126 + 1;
                    pauVar91 = pauVar91 + 1;
                  } while (*(undefined1 (**) [16])(puVar114 + -0x19d8) != pauVar91);
                  auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1918);
                }
                if (*(int *)(puVar114 + -0x1a10) != 0) {
                  if (*(int *)(puVar114 + -0x1a28) == 0) {
                    fVar259 = SUB164(*(undefined1 (*) [16])(puVar114 + -0x18f8),0);
                    lVar101 = 0;
                    auVar281._4_4_ = (float)*(int *)(puVar114 + -0x1424) * fVar259;
                    auVar281._0_4_ = (float)*(int *)(puVar114 + -0x1428) * fVar259;
                    fVar219 = (float)*(int *)(puVar114 + -0x1438) * fVar259;
                    fVar226 = (float)*(int *)(puVar114 + -0x1434) * fVar259;
                    fVar228 = (float)*(int *)(puVar114 + -0x1430) * fVar259;
                    fVar230 = (float)*(int *)(puVar114 + -0x142c) * fVar259;
                    auVar281._8_4_ = (float)*(int *)(puVar114 + -0x1420) * fVar259;
                    auVar281._12_4_ = (float)*(int *)(puVar114 + -0x141c) * fVar259;
                    do {
                      fVar259 = *(float *)(puVar114 + lVar101 + -0x1624);
                      piVar125 = (int *)(puVar114 + lVar101 * 8 + -0x1418);
                      piVar5 = (int *)(puVar114 + lVar101 * 8 + -0x1408);
                      lVar101 = lVar101 + 4;
                      fVar219 = fVar219 + (float)*piVar125 * fVar259;
                      fVar226 = fVar226 + (float)piVar125[1] * fVar259;
                      fVar228 = fVar228 + (float)piVar125[2] * fVar259;
                      fVar230 = fVar230 + (float)piVar125[3] * fVar259;
                      auVar279._0_4_ = auVar281._0_4_ + (float)*piVar5 * fVar259;
                      auVar279._4_4_ = auVar281._4_4_ + (float)piVar5[1] * fVar259;
                      auVar279._8_4_ = auVar281._8_4_ + (float)piVar5[2] * fVar259;
                      auVar279._12_4_ = auVar281._12_4_ + (float)piVar5[3] * fVar259;
                      auVar281 = auVar279;
                    } while (lVar101 != 0xc);
                  }
                  else {
                    fVar219 = (float)(*(int *)(puVar114 + -0x1418) + *(int *)(puVar114 + -0x1438) +
                                      *(int *)(puVar114 + -0x13d8) + *(int *)(puVar114 + -0x13f8));
                    fVar226 = (float)(*(int *)(puVar114 + -0x1414) + *(int *)(puVar114 + -0x1434) +
                                      *(int *)(puVar114 + -0x13d4) + *(int *)(puVar114 + -0x13f4));
                    fVar228 = (float)(*(int *)(puVar114 + -0x1410) + *(int *)(puVar114 + -0x1430) +
                                      *(int *)(puVar114 + -0x13d0) + *(int *)(puVar114 + -0x13f0));
                    fVar230 = (float)(*(int *)(puVar114 + -0x140c) + *(int *)(puVar114 + -0x142c) +
                                      *(int *)(puVar114 + -0x13cc) + *(int *)(puVar114 + -0x13ec));
                    auVar279._0_4_ =
                         (float)(*(int *)(puVar114 + -0x1408) + *(int *)(puVar114 + -0x1428) +
                                 *(int *)(puVar114 + -0x13c8) + *(int *)(puVar114 + -0x13e8));
                    auVar279._4_4_ =
                         (float)(*(int *)(puVar114 + -0x1404) + *(int *)(puVar114 + -0x1424) +
                                 *(int *)(puVar114 + -0x13c4) + *(int *)(puVar114 + -0x13e4));
                    auVar279._8_4_ =
                         (float)(*(int *)(puVar114 + -0x1400) + *(int *)(puVar114 + -0x1420) +
                                 *(int *)(puVar114 + -0x13c0) + *(int *)(puVar114 + -0x13e0));
                    auVar279._12_4_ =
                         (float)(*(int *)(puVar114 + -0x13fc) + *(int *)(puVar114 + -0x141c) +
                                 *(int *)(puVar114 + -0x13bc) + *(int *)(puVar114 + -0x13dc));
                  }
                }
                auVar280 = auVar279;
                if (*(ushort *)(puVar114 + -0x1924) < 4) {
                  fVar219 = fVar219 + *(float *)(puVar114 + -0x18a8);
                  fVar226 = fVar226 + *(float *)(puVar114 + -0x18a4);
                  fVar228 = fVar228 + *(float *)(puVar114 + -0x18a0);
                  fVar230 = fVar230 + *(float *)(puVar114 + -0x189c);
                  auVar280._0_4_ = auVar279._0_4_ + *(float *)(puVar114 + -0x18b8);
                  auVar280._4_4_ = auVar279._4_4_ + *(float *)(puVar114 + -0x18b4);
                  auVar280._8_4_ = auVar279._8_4_ + *(float *)(puVar114 + -0x18b0);
                  auVar280._12_4_ = auVar279._12_4_ + *(float *)(puVar114 + -0x18ac);
                }
                auVar133 = *(undefined1 (*) [16])
                            (puVar114 + *(long *)(puVar114 + -0x1900) * 0x20 + 0x21188);
                auVar271 = *(undefined1 (*) [16])
                            (puVar114 + *(long *)(puVar114 + -0x1900) * 0x20 + 0x21198);
                auVar169._4_4_ = -(uint)(fVar226 < auVar133._4_4_);
                auVar169._0_4_ = -(uint)(fVar219 < auVar133._0_4_);
                auVar169._8_4_ = -(uint)(fVar228 < auVar133._8_4_);
                auVar169._12_4_ = -(uint)(fVar230 < auVar133._12_4_);
                auVar164._4_4_ = -(uint)(auVar280._4_4_ < auVar271._4_4_);
                auVar164._0_4_ = -(uint)(auVar280._0_4_ < auVar271._0_4_);
                auVar164._8_4_ = -(uint)(auVar280._8_4_ < auVar271._8_4_);
                auVar164._12_4_ = -(uint)(auVar280._12_4_ < auVar271._12_4_);
                auVar248 = packssdw(auVar169,auVar164);
                if ((((((((((((((((auVar248 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                 || (auVar248 >> 0xf & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                (auVar248 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar248 >> 0x1f & (undefined1  [16])0x1) !=
                                  (undefined1  [16])0x0) ||
                              (auVar248 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar248 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar248 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar248 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                          || (auVar248 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar248 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar248 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar248 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar248 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar248 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar248 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    auVar248[0xf] < '\0') {
                  if (*(int *)(puVar114 + -0x188c) != 0) {
                    auVar248 = ~auVar248 & *(undefined1 (*) [16])(puVar114 + -0x1888);
                    if ((((((((((((((((auVar248 >> 7 & (undefined1  [16])0x1) ==
                                      (undefined1  [16])0x0 &&
                                     (auVar248 >> 0xf & (undefined1  [16])0x1) ==
                                     (undefined1  [16])0x0) &&
                                    (auVar248 >> 0x17 & (undefined1  [16])0x1) ==
                                    (undefined1  [16])0x0) &&
                                   (auVar248 >> 0x1f & (undefined1  [16])0x1) ==
                                   (undefined1  [16])0x0) &&
                                  (auVar248 >> 0x27 & (undefined1  [16])0x1) ==
                                  (undefined1  [16])0x0) &&
                                 (auVar248 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0
                                 ) && (auVar248 >> 0x37 & (undefined1  [16])0x1) ==
                                      (undefined1  [16])0x0) &&
                               (auVar248 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0)
                              && (auVar248 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0
                              ) && (auVar248 >> 0x4f & (undefined1  [16])0x1) ==
                                   (undefined1  [16])0x0) &&
                            (auVar248 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                           (auVar248 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                          (auVar248 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                         (auVar248 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        (auVar248 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                        -1 < auVar248[0xf]) goto LAB_00104eb9;
                    auVar172._0_12_ = auVar248._0_12_;
                    auVar172._12_2_ = auVar248._6_2_;
                    auVar172._14_2_ = auVar248._6_2_;
                    auVar171._12_4_ = auVar172._12_4_;
                    auVar171._0_10_ = auVar248._0_10_;
                    auVar171._10_2_ = auVar248._4_2_;
                    auVar170._10_6_ = auVar171._10_6_;
                    auVar170._0_8_ = auVar248._0_8_;
                    auVar170._8_2_ = auVar248._4_2_;
                    auVar169._8_8_ = auVar170._8_8_;
                    auVar169._6_2_ = auVar248._2_2_;
                    auVar169._4_2_ = auVar248._2_2_;
                    auVar169._2_2_ = auVar248._0_2_;
                    auVar169._0_2_ = auVar248._0_2_;
                    auVar164._2_2_ = auVar248._8_2_;
                    auVar164._0_2_ = auVar248._8_2_;
                    auVar164._4_2_ = auVar248._10_2_;
                    auVar164._6_2_ = auVar248._10_2_;
                    auVar164._8_2_ = auVar248._12_2_;
                    auVar164._10_2_ = auVar248._12_2_;
                    auVar164._14_2_ = auVar248._14_2_;
                    auVar164._12_2_ = auVar164._14_2_;
                  }
                  lVar101 = *(long *)(puVar114 + -0x1900);
                  auVar282._0_4_ = (uint)auVar280._0_4_ & auVar164._0_4_;
                  auVar282._4_4_ = (uint)auVar280._4_4_ & auVar164._4_4_;
                  auVar282._8_4_ = (uint)auVar280._8_4_ & auVar164._8_4_;
                  auVar282._12_4_ = (uint)auVar280._12_4_ & auVar164._12_4_;
                  auVar173._0_4_ = ~auVar164._0_4_ & (uint)auVar271._0_4_;
                  auVar173._4_4_ = ~auVar164._4_4_ & (uint)auVar271._4_4_;
                  auVar173._8_4_ = ~auVar164._8_4_ & (uint)auVar271._8_4_;
                  auVar173._12_4_ = ~auVar164._12_4_ & (uint)auVar271._12_4_;
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1850);
                  pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x1860);
                  puVar8 = (uint *)(puVar114 + lVar101 * 0x20 + 0x21188);
                  *puVar8 = ~auVar169._0_4_ & (uint)auVar133._0_4_ | (uint)fVar219 & auVar169._0_4_;
                  puVar8[1] = ~auVar169._4_4_ & (uint)auVar133._4_4_ |
                              (uint)fVar226 & auVar169._4_4_;
                  puVar8[2] = ~auVar169._8_4_ & (uint)auVar133._8_4_ |
                              (uint)fVar228 & auVar169._8_4_;
                  puVar8[3] = ~auVar169._12_4_ & (uint)auVar133._12_4_ |
                              (uint)fVar230 & auVar169._12_4_;
                  *(undefined1 (*) [16])(puVar114 + lVar101 * 0x20 + 0x21198) = auVar173 | auVar282;
                  pauVar120 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  do {
                    auVar133 = *pauVar120;
                    pauVar120 = pauVar120 + 1;
                    *pauVar91 = auVar133 & auVar248 | ~auVar248 & *pauVar91;
                    pauVar91 = pauVar91 + 1;
                  } while (pauVar90 != pauVar120);
                  lVar101 = *(long *)(puVar114 + -0x1920);
                  lVar112 = *(long *)(puVar114 + -0x1860);
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x17a8);
                  do {
                    pauVar90 = (undefined1 (*) [16])(lVar101 + 0x40);
                    lVar101 = lVar101 + 0x10;
                    *pauVar91 = *pauVar90 & auVar248 | ~auVar248 & *pauVar91;
                    pauVar91 = pauVar91 + 1;
                  } while (lVar101 != lVar112);
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x18d8);
                  if (0 < *(int *)(puVar114 + -0x18e0)) {
                    pauVar90 = *(undefined1 (**) [16])(puVar114 + -0x19d8);
                    pauVar120 = *(undefined1 (**) [16])(puVar114 + -0x1828);
                    do {
                      auVar133 = *pauVar91;
                      pauVar91 = pauVar91 + 1;
                      *pauVar120 = auVar133 & auVar248 | ~auVar248 & *pauVar120;
                      pauVar120 = pauVar120 + 1;
                    } while (pauVar91 != pauVar90);
                  }
                }
LAB_00104eb9:
                if (iVar80 != *(int *)(puVar114 + -0x19e8)) {
                  *(undefined1 (*) [16])(puVar114 + -0x1a08) = auVar212;
                  *(undefined8 *)(puVar114 + -0x1a30) = 0x104ed8;
                  EndpointRefiner<4>::GetRefinedEndpoints
                            (*(EndpointRefiner<4> **)(puVar114 + -0x19b0),pFVar7);
                  auVar212 = *(undefined1 (*) [16])(puVar114 + -0x1a08);
                  pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1920);
                  pFVar108 = pFVar7;
                  do {
                    auVar133 = *(undefined1 (*) [16])pFVar108;
                    pFVar94 = pFVar108 + 0x10;
                    pFVar108 = pFVar108 + 0x20;
                    auVar133 = minps(auVar133,auVar212);
                    auVar271 = minps(*(undefined1 (*) [16])pFVar94,auVar212);
                    auVar133 = maxps(auVar133,(undefined1  [16])0x0);
                    auVar271 = maxps(auVar271,(undefined1  [16])0x0);
                    auVar139._0_4_ = (int)auVar133._0_4_;
                    auVar139._4_4_ = (int)auVar133._4_4_;
                    auVar139._8_4_ = (int)auVar133._8_4_;
                    auVar139._12_4_ = (int)auVar133._12_4_;
                    auVar165._0_4_ = (int)auVar271._0_4_;
                    auVar165._4_4_ = (int)auVar271._4_4_;
                    auVar165._8_4_ = (int)auVar271._8_4_;
                    auVar165._12_4_ = (int)auVar271._12_4_;
                    auVar133 = packssdw(auVar139,auVar165);
                    *pauVar91 = auVar133;
                    pauVar91 = pauVar91 + 1;
                  } while ((Float *)(puVar114 + -0x1238) != pFVar108);
                  pFVar108 = pFVar7;
                  pauVar91 = (undefined1 (*) [16])(puVar114 + -0x1478);
                  do {
                    pFVar94 = pFVar108 + 0x80;
                    pFVar2 = pFVar108 + 0x90;
                    pFVar108 = pFVar108 + 0x20;
                    auVar133 = minps(*(undefined1 (*) [16])pFVar94,auVar212);
                    auVar271 = minps(*(undefined1 (*) [16])pFVar2,auVar212);
                    auVar133 = maxps(auVar133,(undefined1  [16])0x0);
                    auVar271 = maxps(auVar271,(undefined1  [16])0x0);
                    auVar140._0_4_ = (int)auVar133._0_4_;
                    auVar140._4_4_ = (int)auVar133._4_4_;
                    auVar140._8_4_ = (int)auVar133._8_4_;
                    auVar140._12_4_ = (int)auVar133._12_4_;
                    auVar166._0_4_ = (int)auVar271._0_4_;
                    auVar166._4_4_ = (int)auVar271._4_4_;
                    auVar166._8_4_ = (int)auVar271._8_4_;
                    auVar166._12_4_ = (int)auVar271._12_4_;
                    auVar133 = packssdw(auVar140,auVar166);
                    *pauVar91 = auVar133;
                    pauVar91 = pauVar91 + 1;
                  } while ((Float *)(puVar114 + -0x1238) != pFVar108);
                }
                iVar80 = iVar80 + 1;
              } while (*(int *)(puVar114 + -0x18c0) != iVar80);
              uVar99 = (uint)*(ushort *)(puVar114 + -0x17ec);
              puVar102 = (undefined8 *)(*(long *)(puVar114 + -0x17f8) + 0x80);
            } while (*(undefined8 **)(puVar114 + -0x17e0) != puVar102);
            lVar101 = *(long *)(puVar114 + -0x1658);
            auVar133 = *(undefined1 (*) [16])(puVar114 + -0x18a8);
            lVar83 = *(long *)(puVar114 + -0x1650);
            pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1648);
          }
          lVar83 = lVar83 + 1;
        } while (*(long *)(puVar114 + -0x1688) != lVar83);
        lVar112 = *(long *)(puVar114 + -0x1668);
        if ((puVar114[-0x1858] & 0x10) != 0) {
          *(undefined1 (*) [16])(puVar114 + -0x1558) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar114 + -0x1548) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar114 + -0x1538) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(puVar114 + -0x1528) = (undefined1  [16])0x0;
          if (0 < *(int *)(puVar114 + -0x18e0)) {
            psVar103 = *(short **)(puVar114 + -0x19e0);
            psVar4 = psVar103 + *(long *)(puVar114 + -0x1660) * 0x20;
            psVar92 = (short *)(puVar114 + -0x1558);
            psVar110 = psVar103;
            do {
              do {
                sVar154 = *psVar103;
                sVar21 = psVar103[1];
                sVar22 = psVar103[2];
                sVar23 = psVar103[3];
                sVar24 = psVar103[4];
                sVar25 = psVar103[5];
                sVar26 = psVar103[6];
                sVar27 = psVar103[7];
                psVar93 = psVar92 + 8;
                psVar103 = psVar103 + 8;
                *psVar92 = *psVar92 + sVar154;
                psVar92[1] = psVar92[1] + sVar21;
                psVar92[2] = psVar92[2] + sVar22;
                psVar92[3] = psVar92[3] + sVar23;
                psVar92[4] = psVar92[4] + sVar24;
                psVar92[5] = psVar92[5] + sVar25;
                psVar92[6] = psVar92[6] + sVar26;
                psVar92[7] = psVar92[7] + sVar27;
                psVar92 = psVar93;
              } while (psVar93 != (short *)(puVar114 + -0x1518));
              psVar103 = psVar110 + 0x20;
              psVar92 = (short *)(puVar114 + -0x1558);
              psVar110 = psVar103;
            } while (psVar4 != psVar103);
          }
          pauVar90 = (undefined1 (*) [16])(puVar114 + -0x1558);
          fVar219 = _LC29 / (float)*(int *)(puVar114 + -0x18e0);
          pFVar108 = pFVar7;
          do {
            auVar133 = *pauVar90;
            pFVar94 = pFVar108 + 0x20;
            pauVar90 = pauVar90 + 1;
            auVar17._10_2_ = 0;
            auVar17._0_10_ = auVar133._0_10_;
            auVar17._12_2_ = auVar133._6_2_;
            auVar20._8_2_ = auVar133._4_2_;
            auVar20._0_8_ = auVar133._0_8_;
            auVar20._10_4_ = auVar17._10_4_;
            auVar74._6_8_ = 0;
            auVar74._0_6_ = auVar20._8_6_;
            auVar191._0_4_ = (float)auVar133._0_2_ * fVar219;
            auVar191._4_4_ =
                 (float)(int)CONCAT82(SUB148(auVar74 << 0x40,6),auVar133._2_2_) * fVar219;
            auVar191._8_4_ = (float)auVar20._8_4_ * fVar219;
            auVar191._12_4_ = (float)(auVar17._10_4_ >> 0x10) * fVar219;
            *(float *)(pFVar108 + 0x10) = (float)auVar133._8_2_ * fVar219;
            *(float *)(pFVar108 + 0x14) = (float)auVar133._10_2_ * fVar219;
            *(float *)(pFVar108 + 0x18) = (float)auVar133._12_2_ * fVar219;
            *(float *)(pFVar108 + 0x1c) = (float)auVar133._14_2_ * fVar219;
            *(undefined1 (*) [16])pFVar108 = auVar191;
            pFVar108 = pFVar94;
          } while (pFVar94 != (Float *)(puVar114 + -0x1238));
          *(undefined8 *)(puVar114 + -0x1518) = *(undefined8 *)(puVar114 + -0x1708);
          *(undefined8 *)(puVar114 + -0x1510) = *(undefined8 *)(puVar114 + -0x1700);
          *(undefined8 *)(puVar114 + -0x1508) = *(undefined8 *)(puVar114 + -0x16f8);
          *(undefined8 *)(puVar114 + -0x1500) = *(undefined8 *)(puVar114 + -0x16f0);
          *(undefined8 *)(puVar114 + -0x14f8) = *(undefined8 *)(puVar114 + -0x16e8);
          *(undefined8 *)(puVar114 + -0x14f0) = *(undefined8 *)(puVar114 + -0x16e0);
          *(undefined1 **)(puVar114 + -0x1630) = Tables::BC7SC::g_mode2;
          *(undefined8 *)(puVar114 + -0x14e8) = *(undefined8 *)(puVar114 + -0x1748);
          *(undefined8 *)(puVar114 + -0x14e0) = *(undefined8 *)(puVar114 + -0x1740);
          *(undefined8 *)(puVar114 + -0x14d8) = *(undefined8 *)(puVar114 + -0x16b8);
          *(undefined8 *)(puVar114 + -0x14d0) = *(undefined8 *)(puVar114 + -0x16b0);
          *(undefined8 *)(puVar114 + -0x14c8) = *(undefined8 *)(puVar114 + -0x1778);
          *(undefined8 *)(puVar114 + -0x14c0) = *(undefined8 *)(puVar114 + -6000);
          *(undefined8 *)(puVar114 + -0x15c8) = *(undefined8 *)(puVar114 + -0x16d8);
          *(undefined8 *)(puVar114 + -0x15c0) = *(undefined8 *)(puVar114 + -0x16d0);
          *(undefined8 *)(puVar114 + -0x15b8) = *(undefined8 *)(puVar114 + -0x16a8);
          *(undefined8 *)(puVar114 + -0x15b0) = *(undefined8 *)(puVar114 + -0x16a0);
          *(undefined8 *)(puVar114 + -0x15a8) = *(undefined8 *)(puVar114 + -0x1768);
          *(undefined8 *)(puVar114 + -0x15a0) = *(undefined8 *)(puVar114 + -0x1760);
          *(undefined8 *)(puVar114 + -0x1618) = *(undefined8 *)(puVar114 + -0x16c8);
          *(undefined8 *)(puVar114 + -0x1610) = *(undefined8 *)(puVar114 + -0x16c0);
          *(undefined8 *)(puVar114 + -0x1438) = *(undefined8 *)(puVar114 + -0x17b8);
          *(undefined8 *)(puVar114 + -0x1430) = *(undefined8 *)(puVar114 + -0x17b0);
          *(undefined8 *)(puVar114 + -0x1428) = *(undefined8 *)(puVar114 + -0x17c8);
          *(undefined8 *)(puVar114 + -0x1420) = *(undefined8 *)(puVar114 + -0x17c0);
          *(undefined8 *)(puVar114 + -0x1418) = *(undefined8 *)(puVar114 + -0x1698);
          *(undefined8 *)(puVar114 + -0x1410) = *(undefined8 *)(puVar114 + -0x1690);
          *(undefined8 *)(puVar114 + -0x1408) = *(undefined8 *)(puVar114 + -0x1758);
          *(undefined8 *)(puVar114 + -0x1400) = *(undefined8 *)(puVar114 + -0x1750);
          *(undefined8 *)(puVar114 + -0x13f8) = *(undefined8 *)(puVar114 + -0x1738);
          *(undefined8 *)(puVar114 + -0x13f0) = *(undefined8 *)(puVar114 + -0x1730);
          *(undefined8 *)(puVar114 + -0x13e8) = *(undefined8 *)(puVar114 + -0x1798);
          *(undefined8 *)(puVar114 + -0x13e0) = *(undefined8 *)(puVar114 + -0x1790);
          *(undefined8 *)(puVar114 + -0x13d8) = *(undefined8 *)(puVar114 + -0x1788);
          *(undefined8 *)(puVar114 + -0x13d0) = *(undefined8 *)(puVar114 + -0x1780);
          *(undefined8 *)(puVar114 + -0x15e8) = *(undefined8 *)(puVar114 + -0x1728);
          *(undefined8 *)(puVar114 + -0x15e0) = *(undefined8 *)(puVar114 + -0x1720);
          *(undefined8 *)(puVar114 + -0x15d8) = *(undefined8 *)(puVar114 + -0x1718);
          *(undefined8 *)(puVar114 + -0x15d0) = *(undefined8 *)(puVar114 + -0x1710);
          switch(*(undefined2 *)(puVar114 + -0x1924)) {
          case 0:
            uVar111 = 0xc;
            puVar118 = puVar114 + -0x1518;
            break;
          case 1:
            uVar111 = 6;
            puVar118 = puVar114 + -0x15c8;
            break;
          case 2:
            uVar111 = 1;
            puVar118 = puVar114 + -0x1630;
            break;
          case 3:
            uVar111 = 2;
            puVar118 = puVar114 + -0x1618;
            break;
          default:
            uVar111 = 0;
            puVar118 = (undefined1 *)0x0;
            break;
          case 6:
            uVar111 = 0xe;
            puVar118 = puVar114 + -0x1438;
            break;
          case 7:
            uVar111 = 4;
            puVar118 = puVar114 + -0x15e8;
          }
          *(undefined8 *)(puVar114 + -0x1a38) = *(undefined8 *)(puVar114 + -0x1680);
          *(undefined8 *)(puVar114 + -0x1a40) = uVar111;
          *(undefined1 **)(puVar114 + -0x1a48) = puVar118;
          *(undefined1 **)(puVar114 + -0x1a50) = puVar114 + -0x1628;
          *(undefined1 **)(puVar114 + -0x1a58) = puVar114 + lVar101 + -0x3f8;
          *(undefined8 *)(puVar114 + -0x1a60) = *(undefined8 *)(puVar114 + -0x1850);
          *(long *)(puVar114 + -0x1a68) =
               *(long *)(puVar114 + -0x1868) + (*(long *)(puVar114 + -0x1900) + 0x10ac) * 0x20;
          *(undefined1 (**) [16])(puVar114 + -0x1a70) = pauVar91;
          *(undefined1 **)(puVar114 + -0x1a78) = puVar114 + -0x1608;
          *(undefined8 *)(puVar114 + -0x1a80) = 0x106256;
          TrySingleColorRGBAMultiTable
                    (*(uint *)(puVar114 + -0x1858),*(VInt16<2> **)(puVar114 + -0x19e0),pFVar7,
                     *(int *)(puVar114 + -0x17a0),
                     BC7Data::g_fragments + *(long *)(puVar114 + -0x18e8),
                     *(int *)(puVar114 + -0x18e0),*(Float **)(puVar114 + -0x1a78),
                     *(Int16CompFlag **)(puVar114 + -0x1a70),*(Float **)(puVar114 + -0x1a68),
                     *(VInt16<2> **)(puVar114 + -0x1a60),*(VInt16 **)(puVar114 + -0x1a58),
                     *(float **)(puVar114 + -0x1a50),*(Table ***)(puVar114 + -0x1a48),
                     *(int *)(puVar114 + -0x1a40),
                     *(RoundTowardNearestForScope **)(puVar114 + -0x1a38));
        }
        puVar118 = (undefined1 *)(lVar112 + 4);
      } while (*(int **)(puVar114 + -0x1818) != (int *)puVar118);
LAB_00105012:
      uVar81 = *(uint *)(puVar114 + -0x1810);
      iVar122 = *(int *)(puVar114 + -0x180c);
      cVar127 = puVar114[-0x17ed];
      lVar100 = *(long *)(puVar114 + -0x1808);
      pauVar91 = *(undefined1 (**) [16])(puVar114 + -0x1800);
      switch(*(undefined2 *)(puVar114 + -0x1924)) {
      case 0:
        if (uVar81 != 0) {
          uVar104 = (ulong)*(ushort *)(*(long *)(puVar114 + -0x1898) + 0x18);
          goto LAB_001062d8;
        }
        piVar125 = (int *)(lVar100 + 0x24);
        *(undefined2 *)(puVar114 + -0x1924) = 1;
        goto LAB_001045a2;
      case 1:
        if (uVar81 != 0) {
          uVar104 = **(ulong **)(puVar114 + -0x1898);
          goto LAB_001062d8;
        }
        piVar125 = (int *)(lVar100 + 0x24);
        *(undefined2 *)(puVar114 + -0x1924) = 2;
        goto LAB_001045a2;
      case 2:
        if (uVar81 != 0) {
          uVar104 = *(ulong *)(*(long *)(puVar114 + -0x1898) + 8);
          goto LAB_001062d8;
        }
        piVar125 = (int *)(lVar100 + 0x24);
        *(undefined2 *)(puVar114 + -0x1924) = 3;
        goto LAB_001045a2;
      case 3:
        uVar104 = *(ulong *)(*(long *)(puVar114 + -0x1898) + 0x10);
        if (uVar81 != 0) goto LAB_001062d8;
        piVar125 = (int *)(lVar100 + 0x24);
        *(undefined2 *)(puVar114 + -0x1924) = 4;
        break;
      default:
        if (uVar81 == 0) goto LAB_00104635;
        puVar114[-0x17ea] = 1;
        uVar104 = 0xffffffffffffffff;
        *(undefined2 *)(puVar114 + -0x1924) = 7;
        goto LAB_001062d8;
      case 6:
        goto switchD_00105059_caseD_6;
      }
    }
    *(short *)(puVar114 + -0x1924) = *(short *)(puVar114 + -0x1924) + 1;
    piVar125 = piVar125 + 9;
  } while( true );
switchD_00105059_caseD_6:
  if (uVar81 != 0) goto code_r0x001062c4;
  piVar125 = (int *)(lVar100 + 0x24);
  *(undefined2 *)(puVar114 + -0x1924) = 7;
  goto LAB_001045a2;
code_r0x001062c4:
  uVar104 = (ulong)*(byte *)(*(long *)(puVar114 + -0x1898) + 0x3c);
LAB_001062d8:
  uVar124 = 0;
  uVar129 = CONCAT22((short)*(undefined4 *)(puVar114 + -0x1924),
                     (short)*(undefined4 *)(puVar114 + -0x1924));
  lVar101 = *(long *)(puVar114 + -0x1898);
  auVar222._4_4_ = uVar129;
  auVar222._0_4_ = uVar129;
  auVar222._8_4_ = uVar129;
  auVar222._12_4_ = uVar129;
  uVar155 = 0;
LAB_0010631f:
  do {
    if ((uVar104 >> (uVar124 & 0x3f) & 1) != 0) {
      uVar96 = (ulong)uVar155;
      if (iVar122 == 1) {
        piVar125 = &BC7Data::g_shapes1 + uVar96 * 2;
        pfVar89 = (float *)(puVar114 + (long)*piVar125 * 0x20 + 0x21188);
        pfVar121 = (float *)(puVar114 + (long)*piVar125 * 0x20 + 0x21198);
        auVar174._0_4_ = *pfVar89 + 0.0;
        auVar174._4_4_ = pfVar89[1] + 0.0;
        auVar174._8_4_ = pfVar89[2] + 0.0;
        auVar174._12_4_ = pfVar89[3] + 0.0;
        auVar192._0_4_ = *pfVar121 + 0.0;
        auVar192._4_4_ = pfVar121[1] + 0.0;
        auVar192._8_4_ = pfVar121[2] + 0.0;
        auVar192._12_4_ = pfVar121[3] + 0.0;
      }
      else {
        if (iVar122 == 2) {
          piVar125 = &BC7Data::g_shapes2 + uVar96 * 2;
        }
        else {
          auVar192 = (undefined1  [16])0x0;
          piVar125 = &BC7Data::g_shapes3 + uVar96 * 3;
          auVar174 = ZEXT816(0);
          if (iVar122 < 1) goto LAB_00106355;
        }
        lVar112 = 0;
        auVar133 = ZEXT816(0);
        auVar271 = (undefined1  [16])0x0;
        do {
          piVar5 = piVar125 + lVar112;
          lVar112 = lVar112 + 1;
          pfVar89 = (float *)(puVar114 + (long)*piVar5 * 0x20 + 0x21188);
          auVar174._0_4_ = auVar133._0_4_ + *pfVar89;
          auVar174._4_4_ = auVar133._4_4_ + pfVar89[1];
          auVar174._8_4_ = auVar133._8_4_ + pfVar89[2];
          auVar174._12_4_ = auVar133._12_4_ + pfVar89[3];
          pfVar89 = (float *)(puVar114 + (long)*piVar5 * 0x20 + 0x21198);
          auVar192._0_4_ = auVar271._0_4_ + *pfVar89;
          auVar192._4_4_ = auVar271._4_4_ + pfVar89[1];
          auVar192._8_4_ = auVar271._8_4_ + pfVar89[2];
          auVar192._12_4_ = auVar271._12_4_ + pfVar89[3];
          auVar133 = auVar174;
          auVar271 = auVar192;
        } while ((int)lVar112 < iVar122);
      }
LAB_00106355:
      auVar133 = pauVar91[1];
      fVar219 = *(float *)pauVar91[2];
      fVar226 = *(float *)(pauVar91[2] + 4);
      fVar228 = *(float *)(pauVar91[2] + 8);
      fVar230 = *(float *)(pauVar91[2] + 0xc);
      auVar216._4_4_ = -(uint)(auVar174._4_4_ < auVar133._4_4_);
      auVar216._0_4_ = -(uint)(auVar174._0_4_ < auVar133._0_4_);
      auVar216._8_4_ = -(uint)(auVar174._8_4_ < auVar133._8_4_);
      auVar216._12_4_ = -(uint)(auVar174._12_4_ < auVar133._12_4_);
      auVar254._4_4_ = -(uint)(auVar192._4_4_ < fVar226);
      auVar254._0_4_ = -(uint)(auVar192._0_4_ < fVar219);
      auVar254._8_4_ = -(uint)(auVar192._8_4_ < fVar228);
      auVar254._12_4_ = -(uint)(auVar192._12_4_ < fVar230);
      auVar271 = packssdw(auVar216,auVar254);
      if (((cVar127 != '\0') && (puVar114[-0x17ea] != '\0')) &&
         ((*(ulong *)(lVar101 + 0x28) >> (uVar124 & 0x3f) & 1) == 0)) {
        auVar271 = auVar271 & *(undefined1 (*) [16])(puVar114 + -0x17d8);
        auVar274._0_12_ = auVar271._0_12_;
        auVar274._12_2_ = auVar271._6_2_;
        auVar274._14_2_ = auVar271._6_2_;
        auVar273._12_4_ = auVar274._12_4_;
        auVar273._0_10_ = auVar271._0_10_;
        auVar273._10_2_ = auVar271._4_2_;
        auVar272._10_6_ = auVar273._10_6_;
        auVar272._0_8_ = auVar271._0_8_;
        auVar272._8_2_ = auVar271._4_2_;
        auVar216._8_8_ = auVar272._8_8_;
        auVar216._6_2_ = auVar271._2_2_;
        auVar216._4_2_ = auVar271._2_2_;
        auVar216._2_2_ = auVar271._0_2_;
        auVar216._0_2_ = auVar271._0_2_;
        auVar254._2_2_ = auVar271._8_2_;
        auVar254._0_2_ = auVar271._8_2_;
        auVar254._4_2_ = auVar271._10_2_;
        auVar254._6_2_ = auVar271._10_2_;
        auVar254._8_2_ = auVar271._12_2_;
        auVar254._10_2_ = auVar271._12_2_;
        auVar254._14_2_ = auVar271._14_2_;
        auVar254._12_2_ = auVar254._14_2_;
      }
      if ((((((((((((((((auVar271 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                       (auVar271 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar271 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar271 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar271 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar271 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar271 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar271 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar271 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar271 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar271 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar271 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar271 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar271 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar271 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          auVar271[0xf] < '\0') {
        if (0 < iVar122) {
          *(uint *)(puVar114 + -0x1a08) = uVar81;
          pauVar90 = pauVar91 + 4;
          *(ulong *)(puVar114 + -0x19f8) = uVar104;
          *(int **)(puVar114 + -0x1a10) = piVar125 + iVar122;
          *(undefined1 **)(puVar114 + -0x19e8) = BC7Data::g_shapeRanges;
          do {
            lVar112 = (long)*piVar125;
            iVar80 = *(int *)(*(long *)(puVar114 + -0x19e8) + 4 + lVar112 * 8);
            *(undefined4 *)(puVar114 + -0x1a28) =
                 *(undefined4 *)(*(long *)(puVar114 + -0x19e8) + lVar112 * 8);
            lVar83 = lVar112 * 0x80 + *(long *)(puVar114 + -0x1868);
            pauVar120 = pauVar90 + -4;
            lVar112 = lVar83;
            do {
              pauVar86 = (undefined1 (*) [16])(lVar112 + 0x19c00);
              pauVar117 = pauVar120 + 1;
              lVar112 = lVar112 + 0x10;
              pauVar120[3] = *pauVar86 & auVar271 | ~auVar271 & pauVar120[3];
              pauVar120 = pauVar117;
              pauVar86 = pauVar90 + -4;
            } while (pauVar90 != pauVar117);
            do {
              pauVar120 = (undefined1 (*) [16])(lVar83 + 0x19c40);
              pauVar117 = pauVar86 + 1;
              lVar83 = lVar83 + 0x10;
              pauVar86[7] = *pauVar120 & auVar271 | ~auVar271 & pauVar86[7];
              pauVar86 = pauVar117;
            } while (pauVar90 != pauVar117);
            if (0 < iVar80) {
              lVar112 = (long)*(int *)(puVar114 + -0x1a28);
              pbVar126 = BC7Data::g_fragments + lVar112;
              pauVar120 = (undefined1 (*) [16])
                          (*(long *)(puVar114 + -0x1868) + (lVar112 + 0x1374) * 0x10);
              do {
                bVar9 = *pbVar126;
                auVar248 = *pauVar120;
                pbVar126 = pbVar126 + 1;
                pauVar120 = pauVar120 + 1;
                pauVar91[(ulong)bVar9 + 0x1b] =
                     auVar248 & auVar271 | ~auVar271 & pauVar91[(ulong)bVar9 + 0x1b];
              } while (pbVar126 != BC7Data::g_fragments + iVar80 + lVar112);
            }
            piVar125 = piVar125 + 1;
            pauVar90 = pauVar90 + 8;
          } while (*(int **)(puVar114 + -0x1a10) != piVar125);
          uVar81 = *(uint *)(puVar114 + -0x1a08);
          uVar104 = *(ulong *)(puVar114 + -0x19f8);
        }
        auVar175._0_4_ = (uint)auVar174._0_4_ & auVar216._0_4_;
        auVar175._4_4_ = (uint)auVar174._4_4_ & auVar216._4_4_;
        auVar175._8_4_ = (uint)auVar174._8_4_ & auVar216._8_4_;
        auVar175._12_4_ = (uint)auVar174._12_4_ & auVar216._12_4_;
        auVar217._0_4_ = ~auVar216._0_4_ & (uint)auVar133._0_4_;
        auVar217._4_4_ = ~auVar216._4_4_ & (uint)auVar133._4_4_;
        auVar217._8_4_ = ~auVar216._8_4_ & (uint)auVar133._8_4_;
        auVar217._12_4_ = ~auVar216._12_4_ & (uint)auVar133._12_4_;
        pauVar91[1] = auVar217 | auVar175;
        auVar133 = *pauVar91;
        *(uint *)pauVar91[2] =
             ~auVar254._0_4_ & (uint)fVar219 | (uint)auVar192._0_4_ & auVar254._0_4_;
        *(uint *)(pauVar91[2] + 4) =
             ~auVar254._4_4_ & (uint)fVar226 | (uint)auVar192._4_4_ & auVar254._4_4_;
        *(uint *)(pauVar91[2] + 8) =
             ~auVar254._8_4_ & (uint)fVar228 | (uint)auVar192._8_4_ & auVar254._8_4_;
        *(uint *)(pauVar91[2] + 0xc) =
             ~auVar254._12_4_ & (uint)fVar230 | (uint)auVar192._12_4_ & auVar254._12_4_;
        *pauVar91 = auVar271 & auVar222 | ~auVar271 & auVar133;
        uVar236 = uVar155 + 1;
        auVar176._0_4_ = CONCAT22(uVar155,uVar155);
        uVar124 = (ulong)uVar236;
        auVar176._4_4_ = auVar176._0_4_;
        auVar176._8_4_ = auVar176._0_4_;
        auVar176._12_4_ = auVar176._0_4_;
        pauVar91[0x3b] = auVar271 & auVar176 | ~auVar271 & pauVar91[0x3b];
        uVar155 = uVar236;
        if (uVar81 <= uVar236) break;
        goto LAB_0010631f;
      }
    }
    uVar155 = uVar155 + 1;
    uVar124 = (ulong)uVar155;
  } while (uVar155 < uVar81);
  *(short *)(puVar114 + -0x1924) = *(short *)(puVar114 + -0x1924) + 1;
  piVar125 = (int *)(lVar100 + 0x24);
  if (*(short *)(puVar114 + -0x1924) == 8) {
LAB_00104635:
    if (*(long *)(puVar114 + 0x22ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar114 + -0x1a30) = &UNK_00106d7f;
    __stack_chk_fail();
  }
  goto LAB_0010458b;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC6HComputer::Pack(unsigned int, cvtt::PixelBlockF16 const*, unsigned char*,
   float const*, bool, int, int) */

void cvtt::Internal::BC6HComputer::Pack
               (uint param_1,PixelBlockF16 *param_2,uchar *param_3,float *param_4,bool param_5,
               int param_6,int param_7)

{
  VInt16<3> *pVVar1;
  EndpointSelector<3,8> *pEVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  uint6 uVar7;
  undefined1 auVar8 [14];
  uint6 uVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
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
  short sVar43;
  undefined2 uVar44;
  undefined2 uVar45;
  undefined2 uVar46;
  undefined2 uVar47;
  undefined2 uVar48;
  undefined2 uVar49;
  undefined2 uVar50;
  undefined2 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  undefined1 auVar70 [12];
  undefined1 auVar71 [14];
  undefined1 auVar72 [12];
  undefined1 auVar73 [12];
  undefined1 auVar74 [12];
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  undefined1 auVar78 [12];
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  unkbyte10 Var81;
  unkbyte10 Var82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [12];
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [12];
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  undefined1 auVar90 [12];
  undefined1 auVar91 [12];
  ushort uVar92;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  undefined1 (*pauVar96) [16];
  long lVar97;
  long lVar98;
  undefined8 *puVar99;
  float *pfVar100;
  VInt16<3> *pVVar101;
  Float *pFVar102;
  float *pfVar103;
  ulong uVar104;
  long lVar105;
  uint uVar106;
  Float *pFVar107;
  undefined4 *puVar108;
  VInt16<3> *pVVar109;
  undefined1 (*pauVar110) [16];
  EndpointRefiner<3> *pEVar111;
  byte bVar112;
  Float *pFVar113;
  undefined1 (*pauVar114) [16];
  undefined1 (*pauVar115) [16];
  EndpointSelector<3,8> *pEVar116;
  undefined1 *puVar117;
  undefined1 (*pauVar118) [16];
  ulong uVar119;
  long lVar120;
  Float *pFVar121;
  undefined1 *puVar122;
  undefined1 (*pauVar123) [16];
  undefined1 *puVar124;
  EndpointSelector<3,8> *pEVar125;
  EndpointSelector<3,8> *pEVar126;
  VInt16 *pVVar127;
  ushort *puVar128;
  long lVar129;
  float *pfVar130;
  int iVar131;
  int iVar132;
  long lVar133;
  undefined2 *puVar134;
  int iVar135;
  float *pfVar136;
  int iVar137;
  long lVar138;
  short *psVar139;
  PixelBlockF16 *pPVar140;
  PixelBlockF16 *pPVar141;
  EndpointRefiner<3> *this;
  int iVar142;
  uint uVar143;
  long in_FS_OFFSET;
  ushort uVar144;
  int iVar145;
  undefined1 auVar147 [12];
  undefined1 auVar148 [12];
  ushort uVar190;
  ushort uVar191;
  ushort uVar192;
  ushort uVar194;
  ushort uVar195;
  ushort uVar196;
  ushort uVar197;
  undefined1 auVar155 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  short sVar193;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  uint uVar146;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar151 [12];
  undefined1 auVar152 [12];
  undefined1 auVar179 [16];
  undefined1 auVar153 [12];
  undefined1 auVar181 [16];
  undefined1 auVar154 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  float fVar198;
  undefined1 auVar199 [12];
  short sVar231;
  short sVar232;
  ushort uVar233;
  ushort uVar235;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar208 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  short sVar230;
  ushort uVar234;
  ushort uVar236;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  float fVar237;
  undefined1 auVar240 [12];
  short sVar266;
  float fVar267;
  short sVar270;
  undefined1 auVar239 [12];
  short sVar274;
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  float fVar271;
  float fVar275;
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  short sVar265;
  short sVar269;
  short sVar273;
  short sVar277;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar254 [16];
  float fVar238;
  undefined1 auVar241 [12];
  float fVar268;
  float fVar272;
  float fVar276;
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar242 [12];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  float fVar278;
  undefined1 auVar279 [12];
  float fVar301;
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  float fVar302;
  float fVar303;
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  float fVar304;
  float fVar309;
  float fVar311;
  undefined1 auVar306 [16];
  float fVar313;
  undefined1 auVar307 [16];
  float fVar305;
  float fVar310;
  float fVar312;
  float fVar314;
  undefined1 auVar308 [16];
  float fVar315;
  int iVar316;
  float fVar321;
  float fVar322;
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  float fVar323;
  float fVar324;
  undefined1 auVar325 [12];
  float fVar329;
  float fVar330;
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar331 [12];
  undefined1 auVar332 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [12];
  undefined1 auVar339 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar347 [12];
  undefined1 auVar348 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [12];
  undefined1 auVar355 [12];
  undefined1 auVar356 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar364 [16];
  ushort auStack_6aa8 [8];
  ushort auStack_6a98 [48];
  short asStack_6a38 [1284];
  undefined1 local_6030 [24576];
  undefined1 auVar149 [12];
  undefined1 auVar150 [12];
  undefined1 auVar156 [16];
  undefined1 auVar170 [16];
  undefined1 auVar173 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar180 [16];
  undefined1 auVar182 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar209 [16];
  undefined1 auVar229 [16];
  undefined1 auVar253 [16];
  undefined1 auVar255 [16];
  undefined1 auVar262 [16];
  undefined1 auVar291 [16];
  undefined1 auVar295 [16];
  undefined1 auVar292 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar317 [12];
  undefined1 auVar320 [16];
  undefined1 auVar328 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar345 [16];
  undefined1 auVar340 [16];
  undefined1 auVar346 [16];
  undefined1 auVar349 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  
  sVar24 = _UNK_0011b80e;
  sVar23 = _UNK_0011b80c;
  sVar22 = _UNK_0011b80a;
  sVar21 = _UNK_0011b808;
  sVar20 = _UNK_0011b806;
  sVar232 = _UNK_0011b804;
  sVar231 = _UNK_0011b802;
  sVar230 = __LC47;
  sVar277 = _UNK_0011b7fe;
  sVar274 = _UNK_0011b7fc;
  sVar273 = _UNK_0011b7fa;
  sVar270 = _UNK_0011b7f8;
  sVar269 = _UNK_0011b7f6;
  sVar266 = _UNK_0011b7f4;
  sVar265 = _UNK_0011b7f2;
  sVar193 = __LC46;
  uVar95 = _UNK_0011b71e;
  uVar94 = _UNK_0011b71c;
  uVar93 = _UNK_0011b71a;
  uVar92 = _UNK_0011b718;
  uVar236 = _UNK_0011b716;
  uVar235 = _UNK_0011b714;
  uVar234 = _UNK_0011b712;
  uVar233 = __LC25;
  puVar122 = &stack0xffffffffffffffd0;
  do {
    puVar124 = puVar122;
    *(undefined8 *)(puVar124 + -0x1000) = *(undefined8 *)(puVar124 + -0x1000);
    puVar122 = puVar124 + -0x1000;
  } while (puVar124 + -0x1000 != local_6030);
  *(uint *)(puVar124 + -0x1bd8) = param_1;
  *(float **)(puVar124 + -0x1ba0) = param_4;
  *(uchar **)(puVar124 + -0x1aa8) = param_3;
  puVar124[-0x1c44] = param_5;
  *(undefined8 *)(puVar124 + 0x4ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  iVar131 = 4;
  if (param_6 < 5) {
    iVar131 = param_6;
  }
  iVar142 = 1;
  if (0 < iVar131) {
    iVar142 = iVar131;
  }
  *(int *)(puVar124 + -0x1b2c) = iVar142;
  iVar131 = 3;
  if (*(int *)(puVar124 + 0x5038) < 4) {
    iVar131 = *(int *)(puVar124 + 0x5038);
  }
  iVar142 = 1;
  if (0 < iVar131) {
    iVar142 = iVar131;
  }
  *(uint *)(puVar124 + -0x1b30) = param_1 & 0x40;
  *(int *)(puVar124 + -0x1c48) = iVar142;
  puVar124[-0x1b49] = (param_1 & 0x40) != 0;
  *(undefined4 *)(puVar124 + -0x1a8c) = MXCSR;
  uVar143 = *(uint *)(puVar124 + -0x1a8c);
  *(uint *)(puVar124 + -0x1a90) = uVar143;
  *(uint *)(puVar124 + -0x1a7c) = uVar143;
  *(uint *)(puVar124 + -0x1a8c) = uVar143 & 0xffff9fff;
  MXCSR = *(undefined4 *)(puVar124 + -0x1a8c);
  uVar4 = *(undefined8 *)param_4;
  *(undefined1 **)(puVar124 + -0x1b98) = puVar124 + -0xe78;
  pauVar110 = (undefined1 (*) [16])(puVar124 + -0x1478);
  fVar198 = (float)uVar4;
  fVar324 = (float)((ulong)uVar4 >> 0x20);
  *(undefined1 (**) [16])(puVar124 + -0x1b38) = pauVar110;
  lVar138 = 0;
  lVar120 = 0;
  *(undefined1 **)(puVar124 + -0x1bc8) = puVar124 + -0x878;
  pauVar123 = (undefined1 (*) [16])(puVar124 + 0x1fe8);
  *(ulong *)(puVar124 + -0x1a38) = CONCAT44(fVar324 * fVar324,fVar198 * fVar198);
  fVar324 = param_4[2];
  *(float **)(puVar124 + -7000) = param_4 + 3;
  *(float *)(puVar124 + -0x1a30) = fVar324 * fVar324;
  do {
    pPVar141 = param_2;
    pauVar118 = pauVar123;
    pPVar140 = param_2;
    pauVar96 = pauVar110;
    pfVar103 = *(float **)(puVar124 + -0x1ba0);
    lVar133 = lVar120;
    do {
      do {
        auVar339 = __LC33;
        puVar122 = *pauVar118;
        *(undefined2 *)*pauVar118 = *(undefined2 *)pPVar141;
        pPVar141 = pPVar141 + 0x80;
        pauVar118 = (undefined1 (*) [16])(puVar122 + 2);
      } while ((undefined1 (*) [16])(puVar124 + 0x1ff8) != (undefined1 (*) [16])(puVar122 + 2));
      uVar144 = *(ushort *)(puVar124 + 0x1fe8);
      uVar190 = *(ushort *)(puVar124 + 0x1fea);
      uVar191 = *(ushort *)(puVar124 + 0x1fec);
      uVar192 = *(ushort *)(puVar124 + 0x1fee);
      uVar194 = *(ushort *)(puVar124 + 0x1ff0);
      uVar195 = *(ushort *)(puVar124 + 0x1ff2);
      uVar196 = *(ushort *)(puVar124 + 0x1ff4);
      uVar197 = *(ushort *)(puVar124 + 0x1ff6);
      if (puVar124[-0x1c44] == '\0') {
        uVar144 = (-1 < (short)uVar144) * uVar144;
        uVar190 = (-1 < (short)uVar190) * uVar190;
        uVar191 = (-1 < (short)uVar191) * uVar191;
        uVar192 = (-1 < (short)uVar192) * uVar192;
        uVar194 = (-1 < (short)uVar194) * uVar194;
        uVar195 = (-1 < (short)uVar195) * uVar195;
        uVar196 = (-1 < (short)uVar196) * uVar196;
        uVar197 = (-1 < (short)uVar197) * uVar197;
      }
      else {
        uVar144 = -(uVar144 & uVar233) & -(ushort)((short)uVar144 < 0) |
                  ~-(ushort)((short)uVar144 < 0) & uVar144;
        uVar190 = -(uVar190 & uVar234) & -(ushort)((short)uVar190 < 0) |
                  ~-(ushort)((short)uVar190 < 0) & uVar190;
        uVar191 = -(uVar191 & uVar235) & -(ushort)((short)uVar191 < 0) |
                  ~-(ushort)((short)uVar191 < 0) & uVar191;
        uVar192 = -(uVar192 & uVar236) & -(ushort)((short)uVar192 < 0) |
                  ~-(ushort)((short)uVar192 < 0) & uVar192;
        uVar194 = -(uVar194 & uVar92) & -(ushort)((short)uVar194 < 0) |
                  ~-(ushort)((short)uVar194 < 0) & uVar194;
        uVar195 = -(uVar195 & uVar93) & -(ushort)((short)uVar195 < 0) |
                  ~-(ushort)((short)uVar195 < 0) & uVar195;
        uVar196 = -(uVar196 & uVar94) & -(ushort)((short)uVar196 < 0) |
                  ~-(ushort)((short)uVar196 < 0) & uVar196;
        uVar197 = -(uVar197 & uVar95) & -(ushort)((short)uVar197 < 0) |
                  ~-(ushort)((short)uVar197 < 0) & uVar197;
        uVar144 = (ushort)((short)uVar144 < sVar193) * sVar193 |
                  ((short)uVar144 >= sVar193) * uVar144;
        uVar190 = (ushort)((short)uVar190 < sVar265) * sVar265 |
                  ((short)uVar190 >= sVar265) * uVar190;
        uVar191 = (ushort)((short)uVar191 < sVar266) * sVar266 |
                  ((short)uVar191 >= sVar266) * uVar191;
        uVar192 = (ushort)((short)uVar192 < sVar269) * sVar269 |
                  ((short)uVar192 >= sVar269) * uVar192;
        uVar194 = (ushort)((short)uVar194 < sVar270) * sVar270 |
                  ((short)uVar194 >= sVar270) * uVar194;
        uVar195 = (ushort)((short)uVar195 < sVar273) * sVar273 |
                  ((short)uVar195 >= sVar273) * uVar195;
        uVar196 = (ushort)((short)uVar196 < sVar274) * sVar274 |
                  ((short)uVar196 >= sVar274) * uVar196;
        uVar197 = (ushort)((short)uVar197 < sVar277) * sVar277 |
                  ((short)uVar197 >= sVar277) * uVar197;
      }
      auVar216._0_2_ =
           (ushort)(sVar230 < (short)uVar144) * sVar230 | (sVar230 >= (short)uVar144) * uVar144;
      auVar216._2_2_ =
           (ushort)(sVar231 < (short)uVar190) * sVar231 | (sVar231 >= (short)uVar190) * uVar190;
      auVar216._4_2_ =
           (ushort)(sVar232 < (short)uVar191) * sVar232 | (sVar232 >= (short)uVar191) * uVar191;
      auVar216._6_2_ =
           (ushort)(sVar20 < (short)uVar192) * sVar20 | (sVar20 >= (short)uVar192) * uVar192;
      auVar216._8_2_ =
           (ushort)(sVar21 < (short)uVar194) * sVar21 | (sVar21 >= (short)uVar194) * uVar194;
      auVar216._10_2_ =
           (ushort)(sVar22 < (short)uVar195) * sVar22 | (sVar22 >= (short)uVar195) * uVar195;
      auVar216._12_2_ =
           (ushort)(sVar23 < (short)uVar196) * sVar23 | (sVar23 >= (short)uVar196) * uVar196;
      auVar216._14_2_ =
           (ushort)(sVar24 < (short)uVar197) * sVar24 | (sVar24 >= (short)uVar197) * uVar197;
      auVar85._10_2_ = auVar216._4_2_;
      auVar85._0_10_ = (unkuint10)0;
      uVar7 = CONCAT24(auVar216._10_2_,(uint)auVar216._8_2_);
      auVar239._0_10_ = (unkuint10)uVar7 << 0x10;
      auVar239._10_2_ = auVar216._12_2_;
      auVar155._12_2_ = 0;
      auVar155._0_12_ = auVar239;
      auVar155._14_2_ = auVar216._14_2_;
      pfVar130 = pfVar103 + 1;
      pPVar141 = pPVar140 + 2;
      lVar129 = *(long *)(puVar124 + -0x1b98);
      *pauVar96 = auVar216;
      pfVar100 = (float *)(lVar133 + lVar129);
      *pfVar100 = (float)(int)(short)auVar216._0_2_;
      pfVar100[1] = (float)(SUB164(ZEXT616(CONCAT42(auVar85._8_4_,auVar216._2_2_)) << 0x30,4) >>
                           0x10);
      pfVar100[2] = (float)(auVar85._8_4_ >> 0x10);
      pfVar100[3] = 0.0;
      auVar339 = auVar339 & auVar216;
      lVar129 = *(long *)(puVar124 + -0x1bc8);
      pfVar100 = (float *)(puVar124 + lVar133 + -0xe68);
      *pfVar100 = (float)((int)auVar239._0_10_ >> 0x10);
      pfVar100[1] = (float)(int)((int6)uVar7 >> 0x20);
      pfVar100[2] = (float)(auVar239._8_4_ >> 0x10);
      pfVar100[3] = (float)(auVar155._12_4_ >> 0x10);
      auVar243._0_2_ = -(ushort)(auVar339._0_2_ == 0);
      auVar243._2_2_ = -(ushort)(auVar339._2_2_ == 0);
      auVar243._4_2_ = -(ushort)(auVar339._4_2_ == 0);
      auVar243._6_2_ = -(ushort)(auVar339._6_2_ == 0);
      auVar243._8_2_ = -(ushort)(auVar339._8_2_ == 0);
      auVar243._10_2_ = -(ushort)(auVar339._10_2_ == 0);
      auVar243._12_2_ = -(ushort)(auVar339._12_2_ == 0);
      auVar243._14_2_ = -(ushort)(auVar339._14_2_ == 0);
      auVar280._0_2_ = (auVar339._0_2_ >> 3) + __LC36;
      auVar280._2_2_ = (auVar339._2_2_ >> 3) + _UNK_0011b792;
      auVar280._4_2_ = (auVar339._4_2_ >> 3) + _UNK_0011b794;
      auVar280._6_2_ = (auVar339._6_2_ >> 3) + _UNK_0011b796;
      auVar280._8_2_ = (auVar339._8_2_ >> 3) + _UNK_0011b798;
      auVar280._10_2_ = (auVar339._10_2_ >> 3) + _UNK_0011b79a;
      auVar280._12_2_ = (auVar339._12_2_ >> 3) + _UNK_0011b79c;
      auVar280._14_2_ = (auVar339._14_2_ >> 3) + _UNK_0011b79e;
      auVar339 = auVar216 & __LC34;
      auVar155 = psllw(auVar339,0xd);
      auVar162._0_2_ = auVar339._0_2_ >> 3;
      auVar162._2_2_ = auVar339._2_2_ >> 3;
      auVar162._4_2_ = auVar339._4_2_ >> 3;
      auVar162._6_2_ = auVar339._6_2_ >> 3;
      auVar162._8_2_ = auVar339._8_2_ >> 3;
      auVar162._10_2_ = auVar339._10_2_ >> 3;
      auVar162._12_2_ = auVar339._12_2_ >> 3;
      auVar162._14_2_ = auVar339._14_2_ >> 3;
      auVar339._2_2_ = _UNK_0011b792;
      auVar339._0_2_ = __LC36;
      auVar339._4_2_ = _UNK_0011b794;
      auVar339._6_2_ = _UNK_0011b796;
      auVar339._8_2_ = _UNK_0011b798;
      auVar339._10_2_ = _UNK_0011b79a;
      auVar339._12_2_ = _UNK_0011b79c;
      auVar339._14_2_ = _UNK_0011b79e;
      auVar280 = auVar162 | __LC11 & auVar216 | auVar280;
      auVar243 = (__LC11 & auVar216 | auVar339) & auVar243;
      auVar334._0_12_ = auVar155._0_12_;
      auVar334._12_2_ = auVar155._6_2_;
      auVar334._14_2_ = auVar280._6_2_;
      auVar333._12_4_ = auVar334._12_4_;
      auVar333._0_10_ = auVar155._0_10_;
      auVar333._10_2_ = auVar280._4_2_;
      auVar332._10_6_ = auVar333._10_6_;
      auVar332._0_8_ = auVar155._0_8_;
      auVar332._8_2_ = auVar155._4_2_;
      auVar65._4_8_ = auVar332._8_8_;
      auVar65._2_2_ = auVar280._2_2_;
      auVar65._0_2_ = auVar155._2_2_;
      fVar198 = (float)CONCAT22(auVar280._8_2_,auVar155._8_2_);
      auVar147._0_8_ = CONCAT26(auVar280._10_2_,CONCAT24(auVar155._10_2_,fVar198));
      auVar147._8_2_ = auVar155._12_2_;
      auVar147._10_2_ = auVar280._12_2_;
      auVar341._12_2_ = auVar155._14_2_;
      auVar341._0_12_ = auVar147;
      auVar341._14_2_ = auVar280._14_2_;
      auVar86._10_2_ = auVar243._4_2_;
      auVar86._0_10_ = (unkuint10)0;
      uVar7 = CONCAT24(auVar243._10_2_,(uint)auVar243._8_2_);
      auVar338._0_10_ = (unkuint10)uVar7 << 0x10;
      auVar338._10_2_ = auVar243._12_2_;
      auVar340._12_2_ = 0;
      auVar340._0_12_ = auVar338;
      auVar340._14_2_ = auVar243._14_2_;
      fVar324 = *pfVar103;
      pfVar103 = (float *)(lVar129 + lVar133);
      *pfVar103 = ((float)CONCAT22(auVar280._0_2_,auVar155._0_2_) -
                  (float)((uint)auVar243._0_2_ << 0x10)) * fVar324;
      pfVar103[1] = (auVar65._0_4_ -
                    SUB164(ZEXT616(CONCAT42(auVar86._8_4_,auVar243._2_2_)) << 0x30,4)) * fVar324;
      pfVar103[2] = (auVar332._8_4_ - auVar86._8_4_) * fVar324;
      pfVar103[3] = (auVar333._12_4_ - 0.0) * fVar324;
      pfVar103 = (float *)(puVar124 + lVar133 + -0x868);
      *pfVar103 = (fVar198 - (float)auVar338._0_10_) * fVar324;
      pfVar103[1] = ((float)((ulong)auVar147._0_8_ >> 0x20) - (float)(uVar7 >> 0x10)) * fVar324;
      pfVar103[2] = (auVar147._8_4_ - auVar338._8_4_) * fVar324;
      pfVar103[3] = (auVar341._12_4_ - auVar340._12_4_) * fVar324;
      lVar133 = lVar133 + 0x20;
      pauVar118 = pauVar123;
      pPVar140 = pPVar141;
      pauVar96 = pauVar96 + 1;
      pfVar103 = pfVar130;
    } while (*(float **)(puVar124 + -7000) != pfVar130);
    lVar138 = lVar138 + 4;
    pauVar110 = pauVar110 + 3;
    param_2 = param_2 + 8;
    lVar120 = lVar120 + 0x60;
  } while (lVar138 != 0x40);
  pFVar113 = (Float *)(puVar124 + -0x278);
  lVar120 = *(long *)(puVar124 + -0x1b38);
  pFVar102 = (Float *)(puVar124 + 0x388);
  *(Float **)(puVar124 + -0x1b40) = pFVar113;
  do {
    lVar138 = 0;
    pFVar107 = pFVar113;
    do {
      psVar139 = (short *)(lVar120 + lVar138 * 0x10);
      sVar193 = psVar139[1];
      uVar233 = psVar139[4];
      sVar265 = psVar139[5];
      auVar87._10_2_ = psVar139[2];
      auVar87._0_10_ = (unkuint10)0;
      auVar148._0_10_ = (unkuint10)CONCAT24(sVar265,(uint)uVar233) << 0x10;
      auVar148._10_2_ = psVar139[6];
      auVar156._12_2_ = 0;
      auVar156._0_12_ = auVar148;
      auVar156._14_2_ = psVar139[7];
      fVar324 = *(float *)(*(long *)(puVar124 + -0x1ba0) + lVar138 * 4);
      lVar138 = lVar138 + 1;
      *(float *)pFVar107 = (float)(int)*psVar139 * fVar324;
      *(float *)(pFVar107 + 4) =
           (float)(SUB164(ZEXT616(CONCAT42(auVar87._8_4_,sVar193)) << 0x30,4) >> 0x10) * fVar324;
      *(float *)(pFVar107 + 8) = (float)(auVar87._8_4_ >> 0x10) * fVar324;
      *(float *)(pFVar107 + 0xc) = fVar324 * 0.0;
      *(float *)(pFVar107 + 0x10) = (float)((int)auVar148._0_10_ >> 0x10) * fVar324;
      *(float *)(pFVar107 + 0x14) =
           (float)(int)((int6)CONCAT24(sVar265,(uint)uVar233) >> 0x20) * fVar324;
      *(float *)(pFVar107 + 0x18) = (float)(auVar148._8_4_ >> 0x10) * fVar324;
      *(float *)(pFVar107 + 0x1c) = (float)(auVar156._12_4_ >> 0x10) * fVar324;
      pFVar107 = pFVar107 + 0x20;
    } while (lVar138 != 3);
    pFVar113 = pFVar113 + 0x60;
    lVar120 = lVar120 + 0x30;
  } while (pFVar102 != pFVar113);
  *(undefined1 **)(puVar124 + -0x1b88) = puVar124 + -0x17f8;
  pEVar2 = (EndpointSelector<3,8> *)(puVar124 + 0x13e8);
  pFVar113 = (Float *)(puVar124 + 0xae8);
  puVar99 = (undefined8 *)(puVar124 + -0x17f8);
  for (lVar120 = 0x20; lVar120 != 0; lVar120 = lVar120 + -1) {
    *puVar99 = 0;
    puVar99 = puVar99 + 1;
  }
  *(EndpointSelector<3,8> **)(puVar124 + -0x1bb8) = pEVar2;
  *(undefined1 **)(puVar124 + -0x1c80) = puVar124 + 0x4fe8;
  puVar128 = &BC7Data::g_partitionMap;
  *(undefined1 **)(puVar124 + -0x1c78) = puVar124 + 0x1568;
  pauVar110 = (undefined1 (*) [16])(puVar124 + -0x1178);
  *(undefined1 (*) [16])(puVar124 + -0x1a78) = (undefined1  [16])0x0;
  puVar134 = (undefined2 *)(puVar124 + 0xb48);
  *(undefined1 (*) [16])(puVar124 + -0x1a68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1978) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1968) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1958) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1948) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1938) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1928) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1918) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x1908) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x18f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x18e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x18d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar124 + -0x18c8) = (undefined1  [16])0x0;
  *(undefined1 **)(puVar124 + -0x1c70) = puVar124 + 0x1928;
  fVar324 = _LC29;
  fVar198 = _LC29;
  fVar329 = _LC29;
  fVar330 = _LC29;
LAB_00107215:
  uVar233 = *puVar128;
  pauVar96 = *(undefined1 (**) [16])(puVar124 + -0x1c78);
  do {
    pauVar114 = pauVar96 + -0xc;
    do {
      pauVar115 = pauVar114 + 2;
      *pauVar114 = (undefined1  [16])0x0;
      pauVar114[1] = (undefined1  [16])0x0;
      pauVar114 = pauVar115;
    } while (pauVar96 != pauVar115);
    pauVar96[-0x18] = (undefined1  [16])0x0;
    pauVar114 = pauVar96 + 0x1e;
    pauVar96[-0x17] = (undefined1  [16])0x0;
    pauVar96[-0x12] = (undefined1  [16])0x0;
    pauVar96[-0x11] = (undefined1  [16])0x0;
    pauVar96[-0x16] = (undefined1  [16])0x0;
    pauVar96[-0x15] = (undefined1  [16])0x0;
    pauVar96[-0x10] = (undefined1  [16])0x0;
    pauVar96[-0xf] = (undefined1  [16])0x0;
    pauVar96[-0x14] = (undefined1  [16])0x0;
    pauVar96[-0x13] = (undefined1  [16])0x0;
    pauVar96[-0xe] = (undefined1  [16])0x0;
    pauVar96[-0xd] = (undefined1  [16])0x0;
    *pauVar96 = (undefined1  [16])0x0;
    pauVar96[1] = (undefined1  [16])0x0;
    uVar52 = _UNK_0011b708;
    uVar4 = __LC19;
    *(undefined8 *)pauVar96[2] = __LC19;
    *(undefined8 *)(pauVar96[2] + 8) = uVar52;
    *(undefined8 *)pauVar96[3] = uVar4;
    *(undefined8 *)(pauVar96[3] + 8) = uVar52;
    auVar339 = __LC40;
    pauVar96[4] = __LC40;
    pauVar96[5] = auVar339;
    pauVar96 = pauVar114;
  } while (*(undefined1 (**) [16])(puVar124 + -0x1c70) != pauVar114);
  *(undefined1 (**) [16])(puVar124 + -0x1c68) = pauVar123;
  pEVar116 = (EndpointSelector<3,8> *)(puVar124 + 0x17a8);
  *(ushort **)(puVar124 + -0x1c60) = puVar128;
  iVar131 = 0;
  *(EndpointSelector<3,8> **)(puVar124 + -0x1c58) = pEVar2;
  *(undefined1 (**) [16])(puVar124 + -0x1c50) = pauVar110;
  *(undefined2 **)(puVar124 + -0x1c40) = puVar134;
  *(Float **)(puVar124 + -0x1c38) = pFVar102;
  *(undefined1 (**) [16])(puVar124 + -0x1c28) = pauVar118;
LAB_0010730b:
  do {
    *(EndpointSelector<3,8> **)(puVar124 + -0x1bf8) = pEVar116;
    iVar142 = 0;
    pFVar102 = *(Float **)(puVar124 + -0x1b40);
    do {
      bVar112 = (byte)iVar142;
      iVar142 = iVar142 + 1;
      *(float *)(puVar124 + 0xaf8) = fVar324;
      *(float *)(puVar124 + 0xafc) = fVar198;
      *(float *)(puVar124 + 0xb00) = fVar329;
      *(float *)(puVar124 + 0xb04) = fVar330;
      *(float *)(puVar124 + 0xae8) = fVar324;
      *(float *)(puVar124 + 0xaec) = fVar198;
      *(float *)(puVar124 + 0xaf0) = fVar329;
      *(float *)(puVar124 + 0xaf4) = fVar330;
      *(undefined8 *)(puVar124 + -0x1c90) = 0x10735c;
      EndpointSelector<3,8>::ContributePass
                (pEVar2 + (-((int)(uint)uVar233 >> (bVar112 & 0x1f) & 1U) & 0x1e0),pFVar102,iVar131,
                 pFVar113);
      fVar330 = _UNK_0011b73c;
      fVar329 = _UNK_0011b738;
      fVar198 = _UNK_0011b734;
      fVar324 = _LC29;
      pFVar102 = pFVar102 + 0x60;
    } while (iVar142 != 0x10);
    pEVar116 = *(EndpointSelector<3,8> **)(puVar124 + -0x1bf8);
    pEVar125 = pEVar2;
    if (iVar131 == 0) {
      do {
        iVar131 = 0;
        auVar306._4_4_ = ~-(uint)(*(float *)(pEVar125 + 0x184) == 0.0) & *(uint *)(pEVar125 + 0x184)
        ;
        auVar306._0_4_ = ~-(uint)(*(float *)(pEVar125 + 0x180) == 0.0) & *(uint *)(pEVar125 + 0x180)
        ;
        auVar281._0_4_ = -(uint)(*(float *)(pEVar125 + 0x180) == 0.0) & (uint)_LC29;
        auVar281._4_4_ = -(uint)(*(float *)(pEVar125 + 0x184) == 0.0) & (uint)_UNK_0011b734;
        auVar281._8_4_ = -(uint)(*(float *)(pEVar125 + 0x188) == 0.0) & (uint)_UNK_0011b738;
        auVar281._12_4_ = -(uint)(*(float *)(pEVar125 + 0x18c) == 0.0) & (uint)_UNK_0011b73c;
        auVar306._8_4_ = ~-(uint)(*(float *)(pEVar125 + 0x188) == 0.0) & *(uint *)(pEVar125 + 0x188)
        ;
        auVar306._12_4_ =
             ~-(uint)(*(float *)(pEVar125 + 0x18c) == 0.0) & *(uint *)(pEVar125 + 0x18c);
        auVar282._4_4_ = ~-(uint)(*(float *)(pEVar125 + 0x194) == 0.0) & *(uint *)(pEVar125 + 0x194)
        ;
        auVar282._0_4_ = ~-(uint)(*(float *)(pEVar125 + 400) == 0.0) & *(uint *)(pEVar125 + 400);
        auVar244._0_4_ = -(uint)(*(float *)(pEVar125 + 400) == 0.0) & (uint)_LC29;
        auVar244._4_4_ = -(uint)(*(float *)(pEVar125 + 0x194) == 0.0) & (uint)_UNK_0011b734;
        auVar244._8_4_ = -(uint)(*(float *)(pEVar125 + 0x198) == 0.0) & (uint)_UNK_0011b738;
        auVar244._12_4_ = -(uint)(*(float *)(pEVar125 + 0x19c) == 0.0) & (uint)_UNK_0011b73c;
        auVar282._8_4_ = ~-(uint)(*(float *)(pEVar125 + 0x198) == 0.0) & *(uint *)(pEVar125 + 0x198)
        ;
        auVar282._12_4_ =
             ~-(uint)(*(float *)(pEVar125 + 0x19c) == 0.0) & *(uint *)(pEVar125 + 0x19c);
        pEVar126 = pEVar125;
        do {
          iVar131 = iVar131 + 1;
          auVar339 = divps(*(undefined1 (*) [16])(pEVar126 + 0x10),auVar282 | auVar244);
          auVar216 = divps(*(undefined1 (*) [16])pEVar126,auVar306 | auVar281);
          *(undefined1 (*) [16])(pEVar126 + 0x10) = auVar339;
          *(undefined1 (*) [16])pEVar126 = auVar216;
          pEVar126 = pEVar126 + 0x20;
        } while (iVar131 != 3);
        pEVar125 = pEVar125 + 0x1e0;
      } while (pEVar125 != pEVar116);
    }
    else {
      do {
        if (iVar131 == 1) goto LAB_00107fec;
        pEVar125 = pEVar125 + 0x1e0;
      } while (pEVar125 != pEVar116);
      if (iVar131 == 2) break;
    }
    iVar131 = 1;
  } while( true );
  pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1c68);
  lVar120 = *(long *)(puVar124 + -0x1c60);
  pEVar125 = *(EndpointSelector<3,8> **)(puVar124 + -0x1c58);
  pauVar110 = *(undefined1 (**) [16])(puVar124 + -0x1c50);
  puVar134 = *(undefined2 **)(puVar124 + -0x1c40);
  pFVar102 = *(Float **)(puVar124 + -0x1c38);
  pauVar118 = *(undefined1 (**) [16])(puVar124 + -0x1c28);
  pauVar96 = pauVar123;
  do {
    fVar305 = *(float *)(pEVar125 + 0x1a0);
    fVar310 = *(float *)(pEVar125 + 0x1a4);
    fVar312 = *(float *)(pEVar125 + 0x1a8);
    fVar314 = *(float *)(pEVar125 + 0x1ac);
    fVar315 = *(float *)(pEVar125 + 0x1b0);
    fVar321 = *(float *)(pEVar125 + 0x1b4);
    fVar322 = *(float *)(pEVar125 + 0x1b8);
    fVar323 = *(float *)(pEVar125 + 0x1bc);
    fVar238 = *(float *)(pEVar125 + 0x1c0);
    fVar268 = *(float *)(pEVar125 + 0x1c4);
    fVar272 = *(float *)(pEVar125 + 0x1c8);
    fVar276 = *(float *)(pEVar125 + 0x1cc);
    fVar237 = *(float *)(pEVar125 + 0x1d0);
    fVar267 = *(float *)(pEVar125 + 0x1d4);
    fVar271 = *(float *)(pEVar125 + 0x1d8);
    fVar275 = *(float *)(pEVar125 + 0x1dc);
    puVar108 = *(undefined4 **)(puVar124 + -0x1ba0);
    pEVar126 = pEVar125;
    pFVar107 = pFVar102;
    pauVar114 = pauVar110;
    do {
      uVar3 = *puVar108;
      puVar108 = puVar108 + 1;
      auVar245._4_4_ = uVar3;
      auVar245._0_4_ = uVar3;
      auVar245._8_4_ = uVar3;
      auVar245._12_4_ = uVar3;
      fVar304 = *(float *)(pEVar126 + 0x60) * fVar305 + *(float *)pEVar126;
      fVar309 = *(float *)(pEVar126 + 100) * fVar310 + *(float *)(pEVar126 + 4);
      auVar200._4_4_ = fVar309;
      auVar200._0_4_ = fVar304;
      fVar311 = *(float *)(pEVar126 + 0x68) * fVar312 + *(float *)(pEVar126 + 8);
      fVar313 = *(float *)(pEVar126 + 0x6c) * fVar314 + *(float *)(pEVar126 + 0xc);
      fVar278 = *(float *)(pEVar126 + 0x70) * fVar315 + *(float *)(pEVar126 + 0x10);
      fVar301 = *(float *)(pEVar126 + 0x74) * fVar321 + *(float *)(pEVar126 + 0x14);
      auVar201._4_4_ = fVar301;
      auVar201._0_4_ = fVar278;
      fVar302 = *(float *)(pEVar126 + 0x78) * fVar322 + *(float *)(pEVar126 + 0x18);
      fVar303 = *(float *)(pEVar126 + 0x7c) * fVar323 + *(float *)(pEVar126 + 0x1c);
      auVar200._8_4_ = fVar311;
      auVar200._12_4_ = fVar313;
      auVar339 = divps(auVar200,auVar245);
      *pauVar114 = auVar339;
      auVar201._8_4_ = fVar302;
      auVar201._12_4_ = fVar303;
      auVar339 = divps(auVar201,auVar245);
      pauVar114[1] = auVar339;
      auVar202._0_4_ = (*(float *)(pEVar126 + 0x60) * fVar238 + *(float *)pEVar126) - fVar304;
      auVar202._4_4_ = (*(float *)(pEVar126 + 100) * fVar268 + *(float *)(pEVar126 + 4)) - fVar309;
      auVar202._8_4_ = (*(float *)(pEVar126 + 0x68) * fVar272 + *(float *)(pEVar126 + 8)) - fVar311;
      auVar202._12_4_ =
           (*(float *)(pEVar126 + 0x6c) * fVar276 + *(float *)(pEVar126 + 0xc)) - fVar313;
      auVar339 = divps(auVar202,auVar245);
      *(undefined1 (*) [16])pFVar107 = auVar339;
      auVar203._0_4_ =
           (*(float *)(pEVar126 + 0x70) * fVar237 + *(float *)(pEVar126 + 0x10)) - fVar278;
      auVar203._4_4_ =
           (*(float *)(pEVar126 + 0x74) * fVar267 + *(float *)(pEVar126 + 0x14)) - fVar301;
      auVar203._8_4_ =
           (*(float *)(pEVar126 + 0x78) * fVar271 + *(float *)(pEVar126 + 0x18)) - fVar302;
      auVar203._12_4_ =
           (*(float *)(pEVar126 + 0x7c) * fVar275 + *(float *)(pEVar126 + 0x1c)) - fVar303;
      auVar339 = divps(auVar203,auVar245);
      *(undefined1 (*) [16])(pFVar107 + 0x10) = auVar339;
      pEVar126 = pEVar126 + 0x20;
      pFVar107 = pFVar107 + 0x20;
      pauVar114 = pauVar114 + 2;
    } while (*(undefined4 **)(puVar124 + -7000) != puVar108);
    auVar339 = *pauVar110;
    uVar4 = *(undefined8 *)pauVar110[1];
    uVar52 = *(undefined8 *)(pauVar110[1] + 8);
    pEVar125 = pEVar125 + 0x1e0;
    uVar53 = *(undefined8 *)pauVar110[2];
    uVar54 = *(undefined8 *)(pauVar110[2] + 8);
    uVar55 = *(undefined8 *)pauVar110[3];
    uVar56 = *(undefined8 *)(pauVar110[3] + 8);
    auVar216 = pauVar110[4];
    auVar155 = pauVar110[5];
    *(undefined1 (*) [16])pFVar113 = auVar339;
    uVar44 = *(undefined2 *)pFVar102;
    uVar45 = *(undefined2 *)(pFVar102 + 2);
    uVar46 = *(undefined2 *)(pFVar102 + 4);
    uVar47 = *(undefined2 *)(pFVar102 + 6);
    uVar48 = *(undefined2 *)(pFVar102 + 8);
    uVar49 = *(undefined2 *)(pFVar102 + 10);
    uVar50 = *(undefined2 *)(pFVar102 + 0xc);
    uVar51 = *(undefined2 *)(pFVar102 + 0xe);
    uVar12 = *(undefined2 *)(pFVar102 + 0x10);
    uVar13 = *(undefined2 *)(pFVar102 + 0x12);
    uVar14 = *(undefined2 *)(pFVar102 + 0x14);
    uVar15 = *(undefined2 *)(pFVar102 + 0x16);
    uVar16 = *(undefined2 *)(pFVar102 + 0x18);
    uVar17 = *(undefined2 *)(pFVar102 + 0x1a);
    uVar18 = *(undefined2 *)(pFVar102 + 0x1c);
    uVar19 = *(undefined2 *)(pFVar102 + 0x1e);
    *(undefined8 *)(puVar124 + 0xaf8) = uVar4;
    *(undefined8 *)(puVar124 + 0xb00) = uVar52;
    auVar341 = *(undefined1 (*) [16])(pFVar102 + 0x30);
    auVar243 = *(undefined1 (*) [16])(pFVar102 + 0x40);
    pauVar96[4] = auVar216;
    uVar57 = *(undefined8 *)(pFVar102 + 0x50);
    uVar58 = *(undefined8 *)(pFVar102 + 0x58);
    uVar59 = *(undefined8 *)(pFVar102 + 0x20);
    uVar60 = *(undefined8 *)(pFVar102 + 0x28);
    *(undefined8 *)(puVar124 + 0xb08) = uVar53;
    *(undefined8 *)(puVar124 + 0xb10) = uVar54;
    *(undefined8 *)(puVar124 + 0xb18) = uVar55;
    *(undefined8 *)(puVar124 + 0xb20) = uVar56;
    *(undefined1 (*) [16])(puVar124 + 0xb28) = auVar216;
    *(undefined1 (*) [16])(puVar124 + 0xb38) = auVar155;
    *pauVar96 = auVar339;
    *(undefined8 *)pauVar96[1] = uVar4;
    *(undefined8 *)(pauVar96[1] + 8) = uVar52;
    *(undefined8 *)pauVar96[2] = uVar53;
    *(undefined8 *)(pauVar96[2] + 8) = uVar54;
    *(undefined8 *)pauVar96[3] = uVar55;
    *(undefined8 *)(pauVar96[3] + 8) = uVar56;
    pauVar96[5] = auVar155;
    *(undefined2 *)pauVar96[6] = uVar44;
    *(undefined2 *)(pauVar96[6] + 2) = uVar45;
    *(undefined2 *)(pauVar96[6] + 4) = uVar46;
    *(undefined2 *)(pauVar96[6] + 6) = uVar47;
    *(undefined2 *)(pauVar96[6] + 8) = uVar48;
    *(undefined2 *)(pauVar96[6] + 10) = uVar49;
    *(undefined2 *)(pauVar96[6] + 0xc) = uVar50;
    *(undefined2 *)(pauVar96[6] + 0xe) = uVar51;
    *(undefined2 *)pauVar96[7] = uVar12;
    *(undefined2 *)(pauVar96[7] + 2) = uVar13;
    *(undefined2 *)(pauVar96[7] + 4) = uVar14;
    *(undefined2 *)(pauVar96[7] + 6) = uVar15;
    *(undefined2 *)(pauVar96[7] + 8) = uVar16;
    *(undefined2 *)(pauVar96[7] + 10) = uVar17;
    *(undefined2 *)(pauVar96[7] + 0xc) = uVar18;
    *(undefined2 *)(pauVar96[7] + 0xe) = uVar19;
    *puVar134 = uVar44;
    puVar134[1] = uVar45;
    puVar134[2] = uVar46;
    puVar134[3] = uVar47;
    puVar134[4] = uVar48;
    puVar134[5] = uVar49;
    puVar134[6] = uVar50;
    puVar134[7] = uVar51;
    puVar134[8] = uVar12;
    puVar134[9] = uVar13;
    puVar134[10] = uVar14;
    puVar134[0xb] = uVar15;
    puVar134[0xc] = uVar16;
    puVar134[0xd] = uVar17;
    puVar134[0xe] = uVar18;
    puVar134[0xf] = uVar19;
    *(undefined8 *)(puVar134 + 0x10) = uVar59;
    *(undefined8 *)(puVar134 + 0x14) = uVar60;
    *(undefined1 (*) [16])(puVar134 + 0x18) = auVar341;
    *(undefined1 (*) [16])(puVar134 + 0x20) = auVar243;
    *(undefined8 *)(puVar134 + 0x28) = uVar57;
    *(undefined8 *)(puVar134 + 0x2c) = uVar58;
    *(undefined8 *)pauVar96[8] = uVar59;
    *(undefined8 *)(pauVar96[8] + 8) = uVar60;
    pauVar96[9] = auVar341;
    pauVar96[10] = auVar243;
    *(undefined8 *)pauVar96[0xb] = uVar57;
    *(undefined8 *)(pauVar96[0xb] + 8) = uVar58;
    pauVar96 = pauVar96 + 0xc;
  } while (pEVar116 != pEVar125);
  puVar128 = (ushort *)(lVar120 + 2);
  pauVar123 = pauVar123 + 0x18;
  if (*(undefined1 (**) [16])(puVar124 + -0x1c80) == pauVar123) {
    pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1bb8);
    pauVar96 = pauVar123;
    do {
      pauVar96[0xc] = (undefined1  [16])0x0;
      pauVar114 = pauVar96 + 2;
      pauVar96[0xd] = (undefined1  [16])0x0;
      pauVar96 = pauVar114;
    } while ((undefined1 (*) [16])(puVar124 + 0x14a8) != pauVar114);
    *(undefined1 (**) [16])(puVar124 + -0x1c80) = pauVar110;
    lVar120 = *(long *)(puVar124 + -0x1bb8);
    *(undefined1 (*) [16])(puVar124 + 0x13e8) = (undefined1  [16])0x0;
    *(undefined8 *)(puVar124 + 0x1588) = __LC19;
    *(undefined8 *)(puVar124 + 0x1590) = _UNK_0011b708;
    *(undefined8 *)(puVar124 + 0x1598) = __LC19;
    *(undefined8 *)(puVar124 + 0x15a0) = _UNK_0011b708;
    iVar131 = 0;
    *(undefined1 (*) [16])(puVar124 + 0x13f8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1448) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1458) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1408) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1418) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1468) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1478) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1428) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1438) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1488) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1498) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1568) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x1578) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar124 + 0x15a8) = __LC40;
    *(undefined1 (*) [16])(puVar124 + 0x15b8) = __LC40;
    while( true ) {
      while( true ) {
        *(undefined2 **)(puVar124 + -0x1c78) = puVar134;
        *(undefined1 (**) [16])(puVar124 + -0x1c70) = pauVar118;
        pFVar107 = *(Float **)(puVar124 + -0x1b40);
        do {
          pFVar121 = pFVar107 + 0x60;
          *(float *)(puVar124 + 0xaf8) = fVar324;
          *(float *)(puVar124 + 0xafc) = fVar198;
          *(float *)(puVar124 + 0xb00) = fVar329;
          *(float *)(puVar124 + 0xb04) = fVar330;
          *(float *)(puVar124 + 0xae8) = fVar324;
          *(float *)(puVar124 + 0xaec) = fVar198;
          *(float *)(puVar124 + 0xaf0) = fVar329;
          *(float *)(puVar124 + 0xaf4) = fVar330;
          *(undefined8 *)(puVar124 + -0x1c90) = 0x107720;
          EndpointSelector<3,8>::ContributePass
                    (*(EndpointSelector<3,8> **)(puVar124 + -0x1bb8),pFVar107,iVar131,pFVar113);
          fVar330 = _UNK_0011b73c;
          fVar329 = _UNK_0011b738;
          fVar198 = _UNK_0011b734;
          fVar324 = _LC29;
          pFVar107 = pFVar121;
        } while (pFVar102 != pFVar121);
        puVar134 = *(undefined2 **)(puVar124 + -0x1c78);
        pauVar118 = *(undefined1 (**) [16])(puVar124 + -0x1c70);
        if (iVar131 != 0) break;
        auVar248._0_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1568) == 0.0) & *(uint *)(puVar124 + 0x1568);
        auVar248._4_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x156c) == 0.0) & *(uint *)(puVar124 + 0x156c);
        auVar248._8_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1570) == 0.0) & *(uint *)(puVar124 + 0x1570);
        auVar248._12_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1574) == 0.0) & *(uint *)(puVar124 + 0x1574);
        auVar283._0_4_ = -(uint)(*(float *)(puVar124 + 0x1568) == 0.0) & (uint)_LC29;
        auVar283._4_4_ = -(uint)(*(float *)(puVar124 + 0x156c) == 0.0) & (uint)_UNK_0011b734;
        auVar283._8_4_ = -(uint)(*(float *)(puVar124 + 0x1570) == 0.0) & (uint)_UNK_0011b738;
        auVar283._12_4_ = -(uint)(*(float *)(puVar124 + 0x1574) == 0.0) & (uint)_UNK_0011b73c;
        auVar214._0_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1578) == 0.0) & *(uint *)(puVar124 + 0x1578);
        auVar214._4_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x157c) == 0.0) & *(uint *)(puVar124 + 0x157c);
        auVar214._8_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1580) == 0.0) & *(uint *)(puVar124 + 0x1580);
        auVar214._12_4_ =
             ~-(uint)(*(float *)(puVar124 + 0x1584) == 0.0) & *(uint *)(puVar124 + 0x1584);
        auVar284._0_4_ = -(uint)(*(float *)(puVar124 + 0x1578) == 0.0) & (uint)_LC29;
        auVar284._4_4_ = -(uint)(*(float *)(puVar124 + 0x157c) == 0.0) & (uint)_UNK_0011b734;
        auVar284._8_4_ = -(uint)(*(float *)(puVar124 + 0x1580) == 0.0) & (uint)_UNK_0011b738;
        auVar284._12_4_ = -(uint)(*(float *)(puVar124 + 0x1584) == 0.0) & (uint)_UNK_0011b73c;
        pauVar110 = *(undefined1 (**) [16])(puVar124 + -0x1bb8);
        do {
          pauVar96 = pauVar110 + 2;
          auVar339 = divps(pauVar110[1],auVar214 | auVar284);
          auVar216 = divps(*pauVar110,auVar248 | auVar283);
          pauVar110[1] = auVar339;
          *pauVar110 = auVar216;
          pauVar110 = pauVar96;
        } while ((undefined1 (*) [16])(lVar120 + 0x60) != pauVar96);
        iVar131 = 1;
      }
      if (iVar131 != 1) break;
      *(undefined8 *)(puVar124 + -0x1c90) = 0x109490;
      EndpointSelector<3,8>::FinishDirection(*(EndpointSelector<3,8> **)(puVar124 + -0x1bb8));
      iVar131 = 2;
      fVar324 = _LC29;
      fVar198 = _UNK_0011b734;
      fVar329 = _UNK_0011b738;
      fVar330 = _UNK_0011b73c;
    }
    pauVar110 = *(undefined1 (**) [16])(puVar124 + -0x1c80);
    fVar324 = *(float *)(puVar124 + 0x1588);
    fVar198 = *(float *)(puVar124 + 0x158c);
    fVar329 = *(float *)(puVar124 + 0x1590);
    fVar330 = *(float *)(puVar124 + 0x1594);
    fVar305 = *(float *)(puVar124 + 0x1598);
    fVar310 = *(float *)(puVar124 + 0x159c);
    fVar312 = *(float *)(puVar124 + 0x15a0);
    fVar314 = *(float *)(puVar124 + 0x15a4);
    fVar315 = *(float *)(puVar124 + 0x15a8);
    fVar321 = *(float *)(puVar124 + 0x15ac);
    fVar322 = *(float *)(puVar124 + 0x15b0);
    fVar323 = *(float *)(puVar124 + 0x15b4);
    fVar238 = *(float *)(puVar124 + 0x15b8);
    fVar268 = *(float *)(puVar124 + 0x15bc);
    fVar272 = *(float *)(puVar124 + 0x15c0);
    fVar276 = *(float *)(puVar124 + 0x15c4);
    puVar108 = *(undefined4 **)(puVar124 + -0x1ba0);
    pauVar96 = pauVar110;
    pFVar107 = pFVar102;
    do {
      uVar3 = *puVar108;
      pauVar114 = pauVar123 + 2;
      puVar108 = puVar108 + 1;
      auVar204._4_4_ = uVar3;
      auVar204._0_4_ = uVar3;
      auVar204._8_4_ = uVar3;
      auVar204._12_4_ = uVar3;
      fVar278 = *(float *)pauVar123[6] * fVar324 + *(float *)*pauVar123;
      fVar301 = *(float *)(pauVar123[6] + 4) * fVar198 + *(float *)(*pauVar123 + 4);
      auVar157._4_4_ = fVar301;
      auVar157._0_4_ = fVar278;
      fVar302 = *(float *)(pauVar123[6] + 8) * fVar329 + *(float *)(*pauVar123 + 8);
      fVar303 = *(float *)(pauVar123[6] + 0xc) * fVar330 + *(float *)(*pauVar123 + 0xc);
      fVar237 = *(float *)pauVar123[7] * fVar305 + *(float *)pauVar123[1];
      fVar267 = *(float *)(pauVar123[7] + 4) * fVar310 + *(float *)(pauVar123[1] + 4);
      auVar158._4_4_ = fVar267;
      auVar158._0_4_ = fVar237;
      fVar271 = *(float *)(pauVar123[7] + 8) * fVar312 + *(float *)(pauVar123[1] + 8);
      fVar275 = *(float *)(pauVar123[7] + 0xc) * fVar314 + *(float *)(pauVar123[1] + 0xc);
      auVar157._8_4_ = fVar302;
      auVar157._12_4_ = fVar303;
      auVar339 = divps(auVar157,auVar204);
      *pauVar96 = auVar339;
      auVar158._8_4_ = fVar271;
      auVar158._12_4_ = fVar275;
      auVar339 = divps(auVar158,auVar204);
      pauVar96[1] = auVar339;
      auVar159._0_4_ = (*(float *)pauVar123[6] * fVar315 + *(float *)*pauVar123) - fVar278;
      auVar159._4_4_ =
           (*(float *)(pauVar123[6] + 4) * fVar321 + *(float *)(*pauVar123 + 4)) - fVar301;
      auVar159._8_4_ =
           (*(float *)(pauVar123[6] + 8) * fVar322 + *(float *)(*pauVar123 + 8)) - fVar302;
      auVar159._12_4_ =
           (*(float *)(pauVar123[6] + 0xc) * fVar323 + *(float *)(*pauVar123 + 0xc)) - fVar303;
      auVar339 = divps(auVar159,auVar204);
      *(undefined1 (*) [16])pFVar107 = auVar339;
      auVar160._0_4_ = (*(float *)pauVar123[7] * fVar238 + *(float *)pauVar123[1]) - fVar237;
      auVar160._4_4_ =
           (*(float *)(pauVar123[7] + 4) * fVar268 + *(float *)(pauVar123[1] + 4)) - fVar267;
      auVar160._8_4_ =
           (*(float *)(pauVar123[7] + 8) * fVar272 + *(float *)(pauVar123[1] + 8)) - fVar271;
      auVar160._12_4_ =
           (*(float *)(pauVar123[7] + 0xc) * fVar276 + *(float *)(pauVar123[1] + 0xc)) - fVar275;
      auVar339 = divps(auVar160,auVar204);
      *(undefined1 (*) [16])(pFVar107 + 0x10) = auVar339;
      pauVar96 = pauVar96 + 2;
      pFVar107 = pFVar107 + 0x20;
      pauVar123 = pauVar114;
    } while ((undefined1 (*) [16])(lVar120 + 0x60) != pauVar114);
    *(undefined8 *)(puVar124 + 0xb08) = *(undefined8 *)(puVar124 + -0x1158);
    *(undefined8 *)(puVar124 + 0xb10) = *(undefined8 *)(puVar124 + -0x1150);
    *(undefined8 *)(puVar124 + 0xb18) = *(undefined8 *)(puVar124 + -0x1148);
    *(undefined8 *)(puVar124 + 0xb20) = *(undefined8 *)(puVar124 + -0x1140);
    *(undefined8 *)(puVar124 + -0x1898) = *(undefined8 *)(puVar124 + -0x1158);
    *(undefined8 *)(puVar124 + -0x1890) = *(undefined8 *)(puVar124 + -0x1150);
    *(undefined8 *)(puVar124 + -0x1888) = *(undefined8 *)(puVar124 + -0x1148);
    *(undefined8 *)(puVar124 + -0x1880) = *(undefined8 *)(puVar124 + -0x1140);
    *(undefined1 (*) [16])(puVar124 + 0xae8) = *(undefined1 (*) [16])(puVar124 + -0x1178);
    *(undefined1 (*) [16])(puVar124 + 0xaf8) = *(undefined1 (*) [16])(puVar124 + -0x1168);
    *(undefined1 (*) [16])(puVar124 + 0xb28) = *(undefined1 (*) [16])(puVar124 + -0x1138);
    *(undefined4 *)(puVar124 + 0xb38) = *(undefined4 *)(puVar124 + -0x1128);
    *(undefined4 *)(puVar124 + 0xb3c) = *(undefined4 *)(puVar124 + -0x1124);
    *(undefined4 *)(puVar124 + 0xb40) = *(undefined4 *)(puVar124 + -0x1120);
    *(undefined4 *)(puVar124 + 0xb44) = *(undefined4 *)(puVar124 + -0x111c);
    *(undefined4 *)(puVar124 + 0xb48) = *(undefined4 *)(puVar124 + 0x388);
    *(undefined4 *)(puVar124 + 0xb4c) = *(undefined4 *)(puVar124 + 0x38c);
    *(undefined4 *)(puVar124 + 0xb50) = *(undefined4 *)(puVar124 + 0x390);
    *(undefined4 *)(puVar124 + 0xb54) = *(undefined4 *)(puVar124 + 0x394);
    *(undefined4 *)(puVar124 + 0xb58) = *(undefined4 *)(puVar124 + 0x398);
    *(undefined4 *)(puVar124 + 0xb5c) = *(undefined4 *)(puVar124 + 0x39c);
    *(undefined4 *)(puVar124 + 0xb60) = *(undefined4 *)(puVar124 + 0x3a0);
    *(undefined4 *)(puVar124 + 0xb64) = *(undefined4 *)(puVar124 + 0x3a4);
    *(undefined1 (*) [16])(puVar124 + 0xb68) = *(undefined1 (*) [16])(puVar124 + 0x3a8);
    *(undefined1 (*) [16])(puVar124 + 0xb78) = *(undefined1 (*) [16])(puVar124 + 0x3b8);
    *(undefined8 *)(puVar124 + 0xb88) = *(undefined8 *)(puVar124 + 0x3c8);
    *(undefined8 *)(puVar124 + 0xb90) = *(undefined8 *)(puVar124 + 0x3d0);
    *(undefined1 (*) [16])(puVar124 + 0xb98) = *(undefined1 (*) [16])(puVar124 + 0x3d8);
    *(undefined1 (*) [16])(puVar124 + -0x18b8) = *(undefined1 (*) [16])(puVar124 + -0x1178);
    *(undefined1 (*) [16])(puVar124 + -0x18a8) = *(undefined1 (*) [16])(puVar124 + -0x1168);
    *(undefined1 (*) [16])(puVar124 + -0x1878) = *(undefined1 (*) [16])(puVar124 + -0x1138);
    *(undefined4 *)(puVar124 + -0x1868) = *(undefined4 *)(puVar124 + -0x1128);
    *(undefined4 *)(puVar124 + -0x1864) = *(undefined4 *)(puVar124 + -0x1124);
    *(undefined4 *)(puVar124 + -0x1860) = *(undefined4 *)(puVar124 + -0x1120);
    *(undefined4 *)(puVar124 + -0x185c) = *(undefined4 *)(puVar124 + -0x111c);
    *(undefined4 *)(puVar124 + -0x1858) = *(undefined4 *)(puVar124 + 0x388);
    *(undefined4 *)(puVar124 + -0x1854) = *(undefined4 *)(puVar124 + 0x38c);
    *(undefined4 *)(puVar124 + -0x1850) = *(undefined4 *)(puVar124 + 0x390);
    *(undefined4 *)(puVar124 + -0x184c) = *(undefined4 *)(puVar124 + 0x394);
    *(undefined4 *)(puVar124 + -0x1848) = *(undefined4 *)(puVar124 + 0x398);
    *(undefined4 *)(puVar124 + -0x1844) = *(undefined4 *)(puVar124 + 0x39c);
    *(undefined4 *)(puVar124 + -0x1840) = *(undefined4 *)(puVar124 + 0x3a0);
    *(undefined4 *)(puVar124 + -0x183c) = *(undefined4 *)(puVar124 + 0x3a4);
    *(undefined1 (*) [16])(puVar124 + -0x1838) = *(undefined1 (*) [16])(puVar124 + 0x3a8);
    auVar211._8_8_ = _UNK_0011b708;
    auVar211._0_8_ = __LC19;
    *(undefined8 *)(puVar124 + -0x1c78) = 0;
    *(undefined1 **)(puVar124 + -0x1ad8) = puVar124 + -0x1978;
    *(undefined1 (**) [16])(puVar124 + -0x1b00) = pauVar110;
    *(undefined1 (**) [16])(puVar124 + -0x1ad0) = pauVar118;
    *(undefined1 (*) [16])(puVar124 + -0x1828) = *(undefined1 (*) [16])(puVar124 + 0x3b8);
    *(undefined8 *)(puVar124 + -0x1818) = *(undefined8 *)(puVar124 + 0x3c8);
    *(undefined8 *)(puVar124 + -0x1810) = *(undefined8 *)(puVar124 + 0x3d0);
    *(undefined1 (*) [16])(puVar124 + -0x1808) = *(undefined1 (*) [16])(puVar124 + 0x3d8);
    auVar339 = auVar211;
    do {
      *(undefined2 **)(puVar124 + -0x1b20) = puVar134;
      *(undefined8 *)(puVar124 + -0x1c80) = 0x10;
      iVar131 = (-(uint)((*(ulong *)(puVar124 + -0x1c78) & 1) == 0) & 0xfffffff5) + 0xc;
      puVar122 = BC7Data::g_hdrModesExistForPrecision +
                 (-(int)*(ulong *)(puVar124 + -0x1c78) & 0x11);
      do {
        if (puVar122[*(long *)(puVar124 + -0x1c80)] != '\0') {
          lVar120 = *(long *)(puVar124 + -0x1c78);
          *(int *)(puVar124 + -0x1c58) = (int)*(long *)(puVar124 + -0x1c80);
          puVar117 = puVar124 + -0x1a28;
          *(undefined8 *)(puVar124 + -0x1bc0) = 0;
          *(undefined1 **)(puVar124 + -0x1a98) = puVar122;
          *(int *)(puVar124 + -0x1bd4) = iVar131;
          *(Float **)(puVar124 + -0x1c68) = pFVar102;
          *(uint *)(puVar124 + -0x1bac) = (-(uint)(lVar120 == 0) & 8) + 8;
          *(long *)(puVar124 + -0x1ae8) = (long)(int)((-(uint)(lVar120 == 0) & 0xffffffe1) + 0x20);
          *(undefined1 **)(puVar124 + -0x1ae0) = puVar124 + -0x16f8;
          *(long *)(puVar124 + -0x1b08) = (long)(int)(2 - (uint)(lVar120 == 0));
          *(undefined1 **)(puVar124 + -0x1aa0) = puVar124 + -0x1168;
          do {
            uVar143 = 0;
            if (*(long *)(puVar124 + -0x1c78) != 0) {
              uVar143 = (uint)(ushort)(&BC7Data::g_partitionMap)[*(long *)(puVar124 + -0x1bc0)];
            }
            *(undefined8 *)(puVar124 + -0x1bf0) = 0;
            this = *(EndpointRefiner<3> **)(puVar124 + -0x1ae0);
            *(undefined1 (*) [16])(puVar124 + -0x1ac8) = auVar211;
            *(undefined8 *)(puVar124 + -0x1a28) = _LC48;
            *(undefined8 *)(puVar124 + -0x1a20) = _LC48;
            *(undefined8 *)(puVar124 + -0x1a18) = _LC48;
            *(undefined1 (*) [16])(puVar124 + -0x1ab8) = auVar339;
            *(long *)(puVar124 + -0x1b28) =
                 *(long *)(puVar124 + -0x1bc0) * 0x180 + *(long *)(puVar124 + -0x1ad0);
            do {
              lVar138 = *(long *)(puVar124 + -0x1bf0);
              lVar133 = 0;
              *(undefined1 **)(puVar124 + -0x1af0) = puVar117;
              *(Float **)(puVar124 + -0x1af8) = pFVar113;
              *(undefined1 **)(puVar124 + -0x1b18) = puVar117;
              *(undefined1 **)(puVar124 + -0x1ba8) = puVar117 + lVar138;
              *(Float **)(puVar124 + -0x1b10) = pFVar113;
              lVar120 = *(long *)(puVar124 + -0x1b00) + lVar138 * 0x20;
              lVar129 = 0;
              *(Float **)(puVar124 + -0x1b48) = pFVar113 + (-(int)lVar138 & 0x60);
              do {
                iVar131 = (int)lVar129;
                *(int *)(puVar124 + -0x1b50) = iVar131;
                *(int *)(puVar124 + -0x1b8c) = iVar131 * 3;
                puVar124[-0x1bad] = *(int *)(puVar124 + -0x1b2c) <= iVar131;
                pVVar109 = (VInt16<3> *)(*(long *)(puVar124 + -0x1b48) - lVar133);
                *(long *)(puVar124 + -0x1be0) = lVar129 * 0x30;
                *(long *)(puVar124 + -0x1bd0) = lVar120;
                *(undefined8 *)(puVar124 + -0x1c70) = 0;
                puVar124[-0x1c40] = 0;
                *(uint *)(puVar124 + -0x1b90) = uVar143;
                *(long *)(puVar124 + -0x1b80) = lVar133;
                *(long *)(puVar124 + -0x1b78) = lVar120;
                *(long *)(puVar124 + -0x1b70) = lVar129;
                do {
                  iVar131 = (int)*(long *)(puVar124 + -0x1c70);
                  bVar112 = *(int *)(puVar124 + -0x1c48) <= iVar131 |
                            puVar124[-0x1c40] | puVar124[-0x1bad];
                  *(int *)(puVar124 + -0x1c50) = iVar131;
                  puVar124[-0x1c40] = bVar112;
                  if (bVar112 == 0) {
                    pVVar127 = (VInt16 *)
                               (*(long *)(puVar124 + -0x1be0) * 0x10 + *(long *)(puVar124 + -0x1bb8)
                               );
                    if (*(long *)(puVar124 + -0x1c70) == 0) {
                      puVar99 = (undefined8 *)(puVar124 + -0x18b8);
                      if (*(long *)(puVar124 + -0x1c78) != 0) {
                        puVar99 = *(undefined8 **)(puVar124 + -0x1b28);
                      }
                      pfVar103 = *(float **)(puVar124 + -0x1c68);
                      cVar5 = puVar124[-0x1c44];
                      uVar4 = puVar99[1];
                      *(undefined8 *)pfVar103 = *puVar99;
                      *(undefined8 *)(pfVar103 + 2) = uVar4;
                      uVar4 = puVar99[3];
                      *(undefined8 *)(pfVar103 + 4) = puVar99[2];
                      *(undefined8 *)(pfVar103 + 6) = uVar4;
                      uVar4 = puVar99[5];
                      *(undefined8 *)(pfVar103 + 8) = puVar99[4];
                      *(undefined8 *)(pfVar103 + 10) = uVar4;
                      uVar4 = puVar99[7];
                      *(undefined8 *)(pfVar103 + 0xc) = puVar99[6];
                      *(undefined8 *)(pfVar103 + 0xe) = uVar4;
                      uVar4 = puVar99[9];
                      *(undefined8 *)(pfVar103 + 0x10) = puVar99[8];
                      *(undefined8 *)(pfVar103 + 0x12) = uVar4;
                      uVar4 = puVar99[0xb];
                      *(undefined8 *)(pfVar103 + 0x14) = puVar99[10];
                      *(undefined8 *)(pfVar103 + 0x16) = uVar4;
                      uVar4 = puVar99[0xd];
                      *(undefined8 *)(puVar124 + 1000) = puVar99[0xc];
                      *(undefined8 *)(puVar124 + 0x3f0) = uVar4;
                      uVar4 = puVar99[0xf];
                      *(undefined8 *)(puVar124 + 0x3f8) = puVar99[0xe];
                      *(undefined8 *)(puVar124 + 0x400) = uVar4;
                      uVar4 = puVar99[0x11];
                      *(undefined8 *)(puVar124 + 0x408) = puVar99[0x10];
                      *(undefined8 *)(puVar124 + 0x410) = uVar4;
                      uVar4 = puVar99[0x13];
                      *(undefined8 *)(puVar124 + 0x418) = puVar99[0x12];
                      *(undefined8 *)(puVar124 + 0x420) = uVar4;
                      uVar4 = puVar99[0x15];
                      *(undefined8 *)(puVar124 + 0x428) = puVar99[0x14];
                      *(undefined8 *)(puVar124 + 0x430) = uVar4;
                      uVar4 = puVar99[0x17];
                      *(undefined8 *)(puVar124 + 0x438) = puVar99[0x16];
                      *(undefined8 *)(puVar124 + 0x440) = uVar4;
                      if (cVar5 == '\0') {
                        *(undefined8 *)(puVar124 + -0x1c90) = 0x108f97;
                        cvtt::Util::ComputeTweakFactors
                                  (*(int *)(puVar124 + -0x1b50),*(int *)(puVar124 + -0x1bac),
                                   (float *)(puVar124 + -0x1a08));
                        fVar324 = *(float *)(puVar124 + -0x1a08);
                        fVar198 = *(float *)(puVar124 + -0x1a04);
                        auVar264._4_4_ = _LC50;
                        auVar264._0_4_ = _LC50;
                        auVar264._8_4_ = _LC50;
                        auVar264._12_4_ = _LC50;
                        pfVar103 = *(float **)(puVar124 + -0x1c68);
                        pauVar110 = (undefined1 (*) [16])(puVar124 + -0x19d8);
                        do {
                          pfVar100 = pfVar103 + 8;
                          auVar299._0_4_ = pfVar103[0x18] * fVar324 + *pfVar103;
                          auVar299._4_4_ = pfVar103[0x19] * fVar324 + pfVar103[1];
                          auVar299._8_4_ = pfVar103[0x1a] * fVar324 + pfVar103[2];
                          auVar299._12_4_ = pfVar103[0x1b] * fVar324 + pfVar103[3];
                          auVar186._0_4_ = pfVar103[0x1c] * fVar324 + pfVar103[4];
                          auVar186._4_4_ = pfVar103[0x1d] * fVar324 + pfVar103[5];
                          auVar186._8_4_ = pfVar103[0x1e] * fVar324 + pfVar103[6];
                          auVar186._12_4_ = pfVar103[0x1f] * fVar324 + pfVar103[7];
                          auVar226._0_4_ = pfVar103[0x1c] * fVar198 + pfVar103[4];
                          auVar226._4_4_ = pfVar103[0x1d] * fVar198 + pfVar103[5];
                          auVar226._8_4_ = pfVar103[0x1e] * fVar198 + pfVar103[6];
                          auVar226._12_4_ = pfVar103[0x1f] * fVar198 + pfVar103[7];
                          auVar155 = minps(auVar299,auVar264);
                          auVar339 = minps(auVar186,auVar264);
                          auVar216 = minps(auVar226,auVar264);
                          auVar155 = maxps(auVar155,(undefined1  [16])0x0);
                          auVar339 = maxps(auVar339,(undefined1  [16])0x0);
                          auVar216 = maxps(auVar216,(undefined1  [16])0x0);
                          auVar300._0_4_ = (int)auVar155._0_4_;
                          auVar300._4_4_ = (int)auVar155._4_4_;
                          auVar300._8_4_ = (int)auVar155._8_4_;
                          auVar300._12_4_ = (int)auVar155._12_4_;
                          auVar187._0_4_ = (int)auVar339._0_4_;
                          auVar187._4_4_ = (int)auVar339._4_4_;
                          auVar187._8_4_ = (int)auVar339._8_4_;
                          auVar187._12_4_ = (int)auVar339._12_4_;
                          auVar339 = packssdw(auVar300,auVar187);
                          fVar329 = pfVar103[0x18];
                          fVar330 = pfVar103[0x19];
                          fVar305 = pfVar103[0x1a];
                          fVar310 = pfVar103[0x1b];
                          auVar227._0_4_ = (int)auVar216._0_4_;
                          auVar227._4_4_ = (int)auVar216._4_4_;
                          auVar227._8_4_ = (int)auVar216._8_4_;
                          auVar227._12_4_ = (int)auVar216._12_4_;
                          *pauVar110 = auVar339;
                          auVar188._0_4_ = fVar329 * fVar198 + *pfVar103;
                          auVar188._4_4_ = fVar330 * fVar198 + pfVar103[1];
                          auVar188._8_4_ = fVar305 * fVar198 + pfVar103[2];
                          auVar188._12_4_ = fVar310 * fVar198 + pfVar103[3];
                          auVar339 = minps(auVar188,auVar264);
                          auVar339 = maxps(auVar339,(undefined1  [16])0x0);
                          auVar189._0_4_ = (int)auVar339._0_4_;
                          auVar189._4_4_ = (int)auVar339._4_4_;
                          auVar189._8_4_ = (int)auVar339._8_4_;
                          auVar189._12_4_ = (int)auVar339._12_4_;
                          auVar339 = packssdw(auVar189,auVar227);
                          pauVar110[3] = auVar339;
                          pfVar103 = pfVar100;
                          pauVar110 = pauVar110 + 1;
                        } while ((float *)(puVar124 + 1000) != pfVar100);
                      }
                      else {
                        *(undefined8 *)(puVar124 + -0x1c90) = 0x10824f;
                        cvtt::Util::ComputeTweakFactors
                                  (*(int *)(puVar124 + -0x1b50),*(int *)(puVar124 + -0x1bac),
                                   (float *)(puVar124 + -0x1a40));
                        fVar324 = *(float *)(puVar124 + -0x1a40);
                        fVar198 = *(float *)(puVar124 + -0x1a3c);
                        auVar249._4_4_ = _LC50;
                        auVar249._0_4_ = _LC50;
                        auVar249._8_4_ = _LC50;
                        auVar249._12_4_ = _LC50;
                        auVar307._4_4_ = _LC52;
                        auVar307._0_4_ = _LC52;
                        auVar307._8_4_ = _LC52;
                        auVar307._12_4_ = _LC52;
                        pauVar110 = (undefined1 (*) [16])(puVar124 + -0x19d8);
                        do {
                          pfVar100 = pfVar103 + 8;
                          auVar215._0_4_ = pfVar103[0x18] * fVar324 + *pfVar103;
                          auVar215._4_4_ = pfVar103[0x19] * fVar324 + pfVar103[1];
                          auVar215._8_4_ = pfVar103[0x1a] * fVar324 + pfVar103[2];
                          auVar215._12_4_ = pfVar103[0x1b] * fVar324 + pfVar103[3];
                          auVar163._0_4_ = pfVar103[0x1c] * fVar324 + pfVar103[4];
                          auVar163._4_4_ = pfVar103[0x1d] * fVar324 + pfVar103[5];
                          auVar163._8_4_ = pfVar103[0x1e] * fVar324 + pfVar103[6];
                          auVar163._12_4_ = pfVar103[0x1f] * fVar324 + pfVar103[7];
                          auVar285._0_4_ = pfVar103[0x1c] * fVar198 + pfVar103[4];
                          auVar285._4_4_ = pfVar103[0x1d] * fVar198 + pfVar103[5];
                          auVar285._8_4_ = pfVar103[0x1e] * fVar198 + pfVar103[6];
                          auVar285._12_4_ = pfVar103[0x1f] * fVar198 + pfVar103[7];
                          auVar216 = minps(auVar215,auVar249);
                          auVar339 = minps(auVar163,auVar249);
                          auVar155 = minps(auVar285,auVar249);
                          auVar216 = maxps(auVar216,auVar307);
                          auVar339 = maxps(auVar339,auVar307);
                          auVar155 = maxps(auVar155,auVar307);
                          auVar217._0_4_ = (int)auVar216._0_4_;
                          auVar217._4_4_ = (int)auVar216._4_4_;
                          auVar217._8_4_ = (int)auVar216._8_4_;
                          auVar217._12_4_ = (int)auVar216._12_4_;
                          auVar164._0_4_ = (int)auVar339._0_4_;
                          auVar164._4_4_ = (int)auVar339._4_4_;
                          auVar164._8_4_ = (int)auVar339._8_4_;
                          auVar164._12_4_ = (int)auVar339._12_4_;
                          auVar339 = packssdw(auVar217,auVar164);
                          fVar329 = pfVar103[0x18];
                          fVar330 = pfVar103[0x19];
                          fVar305 = pfVar103[0x1a];
                          fVar310 = pfVar103[0x1b];
                          auVar286._0_4_ = (int)auVar155._0_4_;
                          auVar286._4_4_ = (int)auVar155._4_4_;
                          auVar286._8_4_ = (int)auVar155._8_4_;
                          auVar286._12_4_ = (int)auVar155._12_4_;
                          *pauVar110 = auVar339;
                          *(undefined1 (*) [16])(puVar124 + -0x1a08) = auVar339;
                          auVar165._0_4_ = fVar329 * fVar198 + *pfVar103;
                          auVar165._4_4_ = fVar330 * fVar198 + pfVar103[1];
                          auVar165._8_4_ = fVar305 * fVar198 + pfVar103[2];
                          auVar165._12_4_ = fVar310 * fVar198 + pfVar103[3];
                          auVar339 = minps(auVar165,auVar249);
                          auVar339 = maxps(auVar339,auVar307);
                          auVar166._0_4_ = (int)auVar339._0_4_;
                          auVar166._4_4_ = (int)auVar339._4_4_;
                          auVar166._8_4_ = (int)auVar339._8_4_;
                          auVar166._12_4_ = (int)auVar339._12_4_;
                          auVar339 = packssdw(auVar166,auVar286);
                          pauVar110[3] = auVar339;
                          *(undefined1 (*) [16])(puVar124 + -0x19f8) = auVar339;
                          pfVar103 = pfVar100;
                          pauVar110 = pauVar110 + 1;
                        } while ((float *)(puVar124 + 1000) != pfVar100);
                      }
                    }
                    else {
                      pFVar113 = *(Float **)(puVar124 + -0x1c68);
                      *(undefined8 *)(puVar124 + -0x1c90) = 0x108ed8;
                      EndpointRefiner<3>::GetRefinedEndpoints(this,pFVar113);
                      cVar5 = puVar124[-0x1c44];
                      pauVar110 = (undefined1 (*) [16])(puVar124 + -0x19a8);
                      auVar263._4_4_ = _LC50;
                      auVar263._0_4_ = _LC50;
                      auVar263._8_4_ = _LC50;
                      auVar263._12_4_ = _LC50;
                      auVar298._4_4_ = _LC52;
                      auVar298._0_4_ = _LC52;
                      auVar298._8_4_ = _LC52;
                      auVar298._12_4_ = _LC52;
                      do {
                        pauVar123 = pauVar110 + -3;
                        pFVar102 = pFVar113;
                        do {
                          auVar339 = minps(*(undefined1 (*) [16])pFVar102,auVar263);
                          auVar216 = minps(*(undefined1 (*) [16])(pFVar102 + 0x10),auVar263);
                          if (cVar5 == '\0') {
                            auVar339 = maxps(auVar339,(undefined1  [16])0x0);
                            auVar216 = maxps(auVar216,(undefined1  [16])0x0);
                            auVar185._0_4_ = (int)auVar339._0_4_;
                            auVar185._4_4_ = (int)auVar339._4_4_;
                            auVar185._8_4_ = (int)auVar339._8_4_;
                            auVar185._12_4_ = (int)auVar339._12_4_;
                            auVar225._0_4_ = (int)auVar216._0_4_;
                            auVar225._4_4_ = (int)auVar216._4_4_;
                            auVar225._8_4_ = (int)auVar216._8_4_;
                            auVar225._12_4_ = (int)auVar216._12_4_;
                            auVar339 = packssdw(auVar185,auVar225);
                          }
                          else {
                            auVar339 = maxps(auVar339,auVar298);
                            auVar216 = maxps(auVar216,auVar298);
                            auVar184._0_4_ = (int)auVar339._0_4_;
                            auVar184._4_4_ = (int)auVar339._4_4_;
                            auVar184._8_4_ = (int)auVar339._8_4_;
                            auVar184._12_4_ = (int)auVar339._12_4_;
                            auVar224._0_4_ = (int)auVar216._0_4_;
                            auVar224._4_4_ = (int)auVar216._4_4_;
                            auVar224._8_4_ = (int)auVar216._8_4_;
                            auVar224._12_4_ = (int)auVar216._12_4_;
                            auVar339 = packssdw(auVar184,auVar224);
                          }
                          *pauVar123 = auVar339;
                          pauVar123 = pauVar123 + 1;
                          pFVar102 = pFVar102 + 0x20;
                        } while (pauVar110 != pauVar123);
                        pauVar110 = pauVar110 + 3;
                        pFVar113 = pFVar113 + 0x60;
                      } while ((undefined1 (*) [16])(puVar124 + -0x1948) != pauVar110);
                    }
                    fVar324 = _LC29;
                    iVar131 = *(int *)(puVar124 + -0x1bac);
                    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
                    pfVar103 = *(float **)(puVar124 + -7000);
                    *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x70) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x50) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xe0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0xf0) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(this + 0x110) = (undefined1  [16])0x0;
                    pfVar100 = *(float **)(puVar124 + -0x1ba0);
                    *(float *)(puVar124 + -0x1be8) = fVar324 / (float)(iVar131 + -1);
                    *(float *)(this + 0x124) = fVar324 / (float)(iVar131 + -1);
                    pEVar111 = this;
                    do {
                      fVar324 = *pfVar100;
                      fVar198 = _LC29;
                      if (fVar324 != 0.0) {
                        fVar198 = _LC29 / fVar324;
                      }
                      pfVar100 = pfVar100 + 1;
                      *(float *)(pEVar111 + 0x128) = fVar324;
                      *(float *)(pEVar111 + 0x134) = fVar198;
                      pEVar111 = pEVar111 + 4;
                    } while (pfVar103 != pfVar100);
                    lVar120 = *(long *)(puVar124 + -0x1bf0);
                    *(undefined4 *)(puVar124 + -0x1c60) = 0;
                    *(undefined4 *)(this + 0x120) = 0;
                    if (lVar120 != 0) {
                      *(undefined4 *)(puVar124 + -0x1c60) =
                           *(undefined4 *)
                            (BC7Data::g_fixupIndexes2 + *(long *)(puVar124 + -0x1bc0) * 4);
                    }
                    if (puVar124[-0x1c44] == '\0') {
                      *(undefined1 **)(puVar124 + -0x1c90) = puVar124 + -0x1a7c;
                      *(ulong *)(puVar124 + -0x1c98) = (ulong)(byte)puVar124[-0x1b49];
                      *(undefined8 *)(puVar124 + -0x1ca0) = *(undefined8 *)(puVar124 + -0x1ba0);
                      *(ulong *)(puVar124 + -0x1ca8) = (ulong)*(uint *)(puVar124 + -0x1bac);
                      *(ulong *)(puVar124 + -0x1cb0) = (ulong)*(uint *)(puVar124 + -0x1c58);
                      *(ulong *)(puVar124 + -0x1cb8) = (ulong)*(uint *)(puVar124 + -0x1c60);
                      *(undefined8 *)(puVar124 + -0x1cc0) = 0x108ebb;
                      QuantizeEndpointsUnsigned
                                ((VInt16<0> *)(puVar124 + -0x19d8),*(Float **)(puVar124 + -0x1b98),
                                 *(Float **)(puVar124 + -0x1bc8),pVVar109,pVVar127,
                                 *(IndexSelectorHDR **)(puVar124 + -0x1c68),
                                 *(int *)(puVar124 + -0x1cb8),*(int *)(puVar124 + -0x1cb0),
                                 *(int *)(puVar124 + -0x1ca8),*(float **)(puVar124 + -0x1ca0),
                                 (bool)puVar124[-0x1c98],
                                 *(RoundTowardNearestForScope **)(puVar124 + -0x1c90));
                    }
                    else {
                      *(undefined1 **)(puVar124 + -0x1c90) = puVar124 + -0x1a7c;
                      *(ulong *)(puVar124 + -0x1c98) = (ulong)(byte)puVar124[-0x1b49];
                      *(undefined8 *)(puVar124 + -0x1ca0) = *(undefined8 *)(puVar124 + -0x1ba0);
                      *(ulong *)(puVar124 + -0x1ca8) = (ulong)*(uint *)(puVar124 + -0x1bac);
                      *(ulong *)(puVar124 + -0x1cb0) = (ulong)*(uint *)(puVar124 + -0x1c58);
                      *(ulong *)(puVar124 + -0x1cb8) = (ulong)*(uint *)(puVar124 + -0x1c60);
                      *(undefined8 *)(puVar124 + -0x1cc0) = 0x10849c;
                      QuantizeEndpointsSigned
                                ((VInt16<0> *)(puVar124 + -0x19d8),*(Float **)(puVar124 + -0x1b98),
                                 *(Float **)(puVar124 + -0x1bc8),pVVar109,pVVar127,
                                 *(IndexSelectorHDR **)(puVar124 + -0x1c68),
                                 *(int *)(puVar124 + -0x1cb8),*(int *)(puVar124 + -0x1cb0),
                                 *(int *)(puVar124 + -0x1ca8),*(float **)(puVar124 + -0x1ca0),
                                 (bool)puVar124[-0x1c98],
                                 *(RoundTowardNearestForScope **)(puVar124 + -0x1c90));
                    }
                    lVar120 = 0;
                    auVar339 = (undefined1  [16])0x0;
                    if (*(int *)(puVar124 + -0x1b8c) + *(int *)(puVar124 + -0x1c70) != 0) {
                      do {
                        auVar167._8_4_ = 0xffffffff;
                        auVar167._0_8_ = 0xffffffffffffffff;
                        auVar167._12_4_ = 0xffffffff;
                        iVar131 = 0;
                        pVVar101 = pVVar109;
                        do {
                          iVar131 = iVar131 + 1;
                          pVVar1 = pVVar101 + lVar120 + lVar133;
                          auVar218._0_2_ = -(ushort)(*(short *)pVVar1 == *(short *)pVVar101);
                          auVar218._2_2_ =
                               -(ushort)(*(short *)(pVVar1 + 2) == *(short *)(pVVar101 + 2));
                          auVar218._4_2_ =
                               -(ushort)(*(short *)(pVVar1 + 4) == *(short *)(pVVar101 + 4));
                          auVar218._6_2_ =
                               -(ushort)(*(short *)(pVVar1 + 6) == *(short *)(pVVar101 + 6));
                          auVar218._8_2_ =
                               -(ushort)(*(short *)(pVVar1 + 8) == *(short *)(pVVar101 + 8));
                          auVar218._10_2_ =
                               -(ushort)(*(short *)(pVVar1 + 10) == *(short *)(pVVar101 + 10));
                          auVar218._12_2_ =
                               -(ushort)(*(short *)(pVVar1 + 0xc) == *(short *)(pVVar101 + 0xc));
                          auVar218._14_2_ =
                               -(ushort)(*(short *)(pVVar1 + 0xe) == *(short *)(pVVar101 + 0xe));
                          auVar167 = auVar167 & auVar218;
                          pVVar101 = pVVar101 + 0x10;
                        } while (iVar131 != 3);
                        iVar131 = 0;
                        pVVar101 = pVVar109;
                        do {
                          iVar131 = iVar131 + 1;
                          pVVar1 = pVVar101 + lVar120 + lVar133 + 0x30;
                          auVar219._0_2_ =
                               -(ushort)(*(short *)pVVar1 == *(short *)(pVVar101 + 0x30));
                          auVar219._2_2_ =
                               -(ushort)(*(short *)(pVVar1 + 2) == *(short *)(pVVar101 + 0x32));
                          auVar219._4_2_ =
                               -(ushort)(*(short *)(pVVar1 + 4) == *(short *)(pVVar101 + 0x34));
                          auVar219._6_2_ =
                               -(ushort)(*(short *)(pVVar1 + 6) == *(short *)(pVVar101 + 0x36));
                          auVar219._8_2_ =
                               -(ushort)(*(short *)(pVVar1 + 8) == *(short *)(pVVar101 + 0x38));
                          auVar219._10_2_ =
                               -(ushort)(*(short *)(pVVar1 + 10) == *(short *)(pVVar101 + 0x3a));
                          auVar219._12_2_ =
                               -(ushort)(*(short *)(pVVar1 + 0xc) == *(short *)(pVVar101 + 0x3c));
                          auVar219._14_2_ =
                               -(ushort)(*(short *)(pVVar1 + 0xe) == *(short *)(pVVar101 + 0x3e));
                          auVar167 = auVar167 & auVar219;
                          pVVar101 = pVVar101 + 0x10;
                        } while (iVar131 != 3);
                        auVar339 = auVar339 | auVar167;
                        if ((ushort)((ushort)(SUB161(auVar339 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar339 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar339 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar339 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar339 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar339 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar339 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar339 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar339 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar339 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar339 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar339 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar339 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar339 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar339 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar339[0xf] >> 7) << 0xf) == 0xffff)
                        goto LAB_00107be7;
                        lVar120 = lVar120 + 0xc0;
                      } while (-lVar120 != lVar133);
                    }
                    uVar143 = *(uint *)(puVar124 + -0x1bf0);
                    *(long *)(puVar124 + -0x1b68) = lVar133;
                    fVar324 = 0.0;
                    fVar198 = 0.0;
                    fVar329 = 0.0;
                    fVar330 = 0.0;
                    lVar138 = 0;
                    *(VInt16<3> **)(puVar124 + -0x1b60) = pVVar109;
                    pfVar103 = *(float **)(puVar124 + -0x1b98);
                    iVar135 = 0;
                    auVar353._0_12_ = ZEXT812(0);
                    auVar353._12_4_ = 0.0;
                    iVar131 = *(int *)(puVar124 + -0x1b30);
                    lVar120 = *(long *)(puVar124 + -0x1b38);
                    iVar142 = *(int *)(puVar124 + -0x1b90);
                    pauVar110 = (undefined1 (*) [16])(puVar124 + -0x1a08);
                    auVar364._4_4_ = _UNK_0011b764;
                    auVar364._0_2_ = _LC31[8];
                    auVar364._2_2_ = _LC31[9];
                    auVar364._8_4_ = _UNK_0011b768;
                    auVar364._12_4_ = _UNK_0011b76c;
                    pfVar100 = *(float **)(puVar124 + -0x1b40);
                    do {
                      pfVar130 = pfVar100 + 0x18;
                      if ((iVar142 >> ((byte)iVar135 & 0x1f) & 1U) == uVar143) {
                        sVar193 = *(short *)(puVar124 + 0xac8);
                        sVar265 = *(short *)(puVar124 + 0xaca);
                        sVar266 = *(short *)(puVar124 + 0xacc);
                        sVar269 = *(short *)(puVar124 + 0xace);
                        sVar270 = *(short *)(puVar124 + 0xad0);
                        sVar273 = *(short *)(puVar124 + 0xad2);
                        sVar274 = *(short *)(puVar124 + 0xad4);
                        sVar277 = *(short *)(puVar124 + 0xad6);
                        auVar339 = *(undefined1 (*) [16])(puVar124 + 0xab8);
                        if (*(int *)(puVar124 + -0x1c60) == iVar135) {
                          auVar222 = *(undefined1 (*) [16])pVVar127;
                          auVar216 = auVar353;
                        }
                        else {
                          if (iVar131 == 0) {
                            *(undefined4 *)(puVar124 + -0x1bf8) = 0;
                            *(float *)(puVar124 + -0x1c18) = fVar324;
                            *(float *)(puVar124 + -0x1c14) = fVar198;
                            *(float *)(puVar124 + -0x1c10) = fVar329;
                            *(float *)(puVar124 + -0x1c0c) = fVar330;
                            *(undefined1 (*) [16])(puVar124 + -0x1c28) = auVar339;
                            *(undefined1 (*) [16])(puVar124 + -0x1c08) = auVar353;
                            *(short *)(puVar124 + -0x1c38) = sVar193;
                            *(short *)(puVar124 + -0x1c36) = sVar265;
                            *(short *)(puVar124 + -0x1c34) = sVar266;
                            *(short *)(puVar124 + -0x1c32) = sVar269;
                            *(short *)(puVar124 + -0x1c30) = sVar270;
                            *(short *)(puVar124 + -0x1c2e) = sVar273;
                            *(short *)(puVar124 + -0x1c2c) = sVar274;
                            *(short *)(puVar124 + -0x1c2a) = sVar277;
                            *(undefined8 *)(puVar124 + -0x1c90) = 0x108c45;
                            auVar222._0_8_ =
                                 IndexSelectorHDR<3>::SelectIndexHDRSlow
                                           (*(Float **)(puVar124 + -0x1c68),
                                            (RoundTowardNearestForScope *)
                                            (*(long *)(puVar124 + -0x1bc8) + lVar138 * 2));
                            auVar222._8_8_ = extraout_XMM0_Qb;
                            fVar324 = *(float *)(puVar124 + -0x1c18);
                            fVar198 = *(float *)(puVar124 + -0x1c14);
                            fVar329 = *(float *)(puVar124 + -0x1c10);
                            fVar330 = *(float *)(puVar124 + -0x1c0c);
                            auVar353 = *(undefined1 (*) [16])(puVar124 + -0x1c08);
                            auVar339 = *(undefined1 (*) [16])(puVar124 + -0x1c28);
                            iVar131 = *(int *)(puVar124 + -0x1bf8);
                            sVar193 = *(short *)(puVar124 + -0x1c38);
                            sVar265 = *(short *)(puVar124 + -0x1c36);
                            sVar266 = *(short *)(puVar124 + -0x1c34);
                            sVar269 = *(short *)(puVar124 + -0x1c32);
                            sVar270 = *(short *)(puVar124 + -0x1c30);
                            sVar273 = *(short *)(puVar124 + -0x1c2e);
                            sVar274 = *(short *)(puVar124 + -0x1c2c);
                            sVar277 = *(short *)(puVar124 + -0x1c2a);
                          }
                          else {
                            uVar3 = *(undefined4 *)(puVar124 + 0x4ac);
                            auVar318._4_4_ = uVar3;
                            auVar318._0_4_ = uVar3;
                            auVar318._8_4_ = uVar3;
                            auVar318._12_4_ = uVar3;
                            auVar220._0_4_ =
                                 (*pfVar103 - *(float *)(puVar124 + 1000)) *
                                 *(float *)(puVar124 + 0x448) +
                                 (pfVar103[8] - *(float *)(puVar124 + 0x408)) *
                                 *(float *)(puVar124 + 0x468) +
                                 (pfVar103[0x10] - *(float *)(puVar124 + 0x428)) *
                                 *(float *)(puVar124 + 0x488);
                            auVar220._4_4_ =
                                 (pfVar103[1] - *(float *)(puVar124 + 0x3ec)) *
                                 *(float *)(puVar124 + 0x44c) +
                                 (pfVar103[9] - *(float *)(puVar124 + 0x40c)) *
                                 *(float *)(puVar124 + 0x46c) +
                                 (pfVar103[0x11] - *(float *)(puVar124 + 0x42c)) *
                                 *(float *)(puVar124 + 0x48c);
                            auVar220._8_4_ =
                                 (pfVar103[2] - *(float *)(puVar124 + 0x3f0)) *
                                 *(float *)(puVar124 + 0x450) +
                                 (pfVar103[10] - *(float *)(puVar124 + 0x410)) *
                                 *(float *)(puVar124 + 0x470) +
                                 (pfVar103[0x12] - *(float *)(puVar124 + 0x430)) *
                                 *(float *)(puVar124 + 0x490);
                            auVar220._12_4_ =
                                 (pfVar103[3] - *(float *)(puVar124 + 0x3f4)) *
                                 *(float *)(puVar124 + 0x454) +
                                 (pfVar103[0xb] - *(float *)(puVar124 + 0x414)) *
                                 *(float *)(puVar124 + 0x474) +
                                 (pfVar103[0x13] - *(float *)(puVar124 + 0x434)) *
                                 *(float *)(puVar124 + 0x494);
                            auVar216 = minps(auVar220,auVar318);
                            auVar216 = maxps(auVar216,(undefined1  [16])0x0);
                            auVar168._0_4_ =
                                 (pfVar103[0xc] - *(float *)(puVar124 + 0x418)) *
                                 *(float *)(puVar124 + 0x478) +
                                 (pfVar103[4] - *(float *)(puVar124 + 0x3f8)) *
                                 *(float *)(puVar124 + 0x458) +
                                 (pfVar103[0x14] - *(float *)(puVar124 + 0x438)) *
                                 *(float *)(puVar124 + 0x498);
                            auVar168._4_4_ =
                                 (pfVar103[0xd] - *(float *)(puVar124 + 0x41c)) *
                                 *(float *)(puVar124 + 0x47c) +
                                 (pfVar103[5] - *(float *)(puVar124 + 0x3fc)) *
                                 *(float *)(puVar124 + 0x45c) +
                                 (pfVar103[0x15] - *(float *)(puVar124 + 0x43c)) *
                                 *(float *)(puVar124 + 0x49c);
                            auVar168._8_4_ =
                                 (pfVar103[0xe] - *(float *)(puVar124 + 0x420)) *
                                 *(float *)(puVar124 + 0x480) +
                                 (pfVar103[6] - *(float *)(puVar124 + 0x400)) *
                                 *(float *)(puVar124 + 0x460) +
                                 (pfVar103[0x16] - *(float *)(puVar124 + 0x440)) *
                                 *(float *)(puVar124 + 0x4a0);
                            auVar168._12_4_ =
                                 (pfVar103[0xf] - *(float *)(puVar124 + 0x424)) *
                                 *(float *)(puVar124 + 0x484) +
                                 (pfVar103[7] - *(float *)(puVar124 + 0x404)) *
                                 *(float *)(puVar124 + 0x464) +
                                 (pfVar103[0x17] - *(float *)(puVar124 + 0x444)) *
                                 *(float *)(puVar124 + 0x4a4);
                            auVar287._0_4_ = (int)auVar216._0_4_;
                            auVar287._4_4_ = (int)auVar216._4_4_;
                            auVar287._8_4_ = (int)auVar216._8_4_;
                            auVar287._12_4_ = (int)auVar216._12_4_;
                            auVar216 = minps(auVar168,auVar318);
                            auVar216 = maxps(auVar216,(undefined1  [16])0x0);
                            auVar169._0_4_ = (int)auVar216._0_4_;
                            auVar169._4_4_ = (int)auVar216._4_4_;
                            auVar169._8_4_ = (int)auVar216._8_4_;
                            auVar169._12_4_ = (int)auVar216._12_4_;
                            auVar216 = packssdw(auVar287,auVar169);
                            auVar221._0_2_ = sVar193 - auVar216._0_2_;
                            auVar221._2_2_ = sVar265 - auVar216._2_2_;
                            auVar221._4_2_ = sVar266 - auVar216._4_2_;
                            auVar221._6_2_ = sVar269 - auVar216._6_2_;
                            auVar221._8_2_ = sVar270 - auVar216._8_2_;
                            auVar221._10_2_ = sVar273 - auVar216._10_2_;
                            auVar221._12_2_ = sVar274 - auVar216._12_2_;
                            auVar221._14_2_ = sVar277 - auVar216._14_2_;
                            auVar222 = auVar221 & auVar339 | ~auVar339 & auVar216;
                          }
                          *(undefined1 (*) [16])pVVar127 = auVar222;
                          auVar216 = auVar353;
                        }
                        lVar133 = (long)*(int *)(puVar124 + 0xad8) * 0x10;
                        sVar230 = auVar222._2_2_;
                        sVar231 = auVar222._4_2_;
                        sVar232 = auVar222._6_2_;
                        uVar233 = auVar222._8_2_;
                        uVar234 = auVar222._10_2_;
                        uVar235 = auVar222._12_2_;
                        uVar236 = auVar222._14_2_;
                        if (puVar124[-0x1c44] == '\0') {
                          auVar256._0_2_ = sVar193 - auVar222._0_2_;
                          auVar256._2_2_ = sVar265 - sVar230;
                          auVar256._4_2_ = sVar266 - sVar231;
                          auVar256._6_2_ = sVar269 - sVar232;
                          auVar256._8_2_ = sVar270 - uVar233;
                          auVar256._10_2_ = sVar273 - uVar234;
                          auVar256._12_2_ = sVar274 - uVar235;
                          auVar256._14_2_ = sVar277 - uVar236;
                          auVar339 = auVar339 & auVar256 | ~auVar339 & auVar222;
                          auVar293._0_2_ =
                               (ushort)(*(short *)(&g_weightReciprocals + lVar133) * auVar339._0_2_
                                       + __LC30) >> 9;
                          auVar293._2_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05a) * auVar339._2_2_ +
                                       _UNK_0011b742) >> 9;
                          auVar293._4_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05c) * auVar339._4_2_ +
                                       _UNK_0011b744) >> 9;
                          auVar293._6_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05e) * auVar339._6_2_ +
                                       _UNK_0011b746) >> 9;
                          auVar293._8_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d060) * auVar339._8_2_ +
                                       _UNK_0011b748) >> 9;
                          auVar293._10_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d062) * auVar339._10_2_ +
                                       _UNK_0011b74a) >> 9;
                          auVar293._12_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d064) * auVar339._12_2_ +
                                       _UNK_0011b74c) >> 9;
                          auVar293._14_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d066) * auVar339._14_2_ +
                                       _UNK_0011b74e) >> 9;
                          auVar308._0_2_ = _LC31[0] - auVar293._0_2_;
                          auVar308._2_2_ = _LC31[1] - auVar293._2_2_;
                          auVar308._4_2_ = _LC31[2] - auVar293._4_2_;
                          auVar308._6_2_ = _LC31[3] - auVar293._6_2_;
                          auVar308._8_2_ = _LC31[4] - auVar293._8_2_;
                          auVar308._10_2_ = _LC31[5] - auVar293._10_2_;
                          auVar308._12_2_ = _LC31[6] - auVar293._12_2_;
                          auVar308._14_2_ = _LC31[7] - auVar293._14_2_;
                          pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1c68);
                          pauVar118 = pauVar110;
                          do {
                            auVar155 = pmulhuw(auVar308,*pauVar123);
                            pauVar96 = pauVar123 + 1;
                            auVar339 = pmulhuw(auVar293,pauVar123[3]);
                            sVar193 = *(short *)(pauVar123[3] + 6) * auVar293._6_2_;
                            iVar316 = CONCAT22(auVar339._8_2_,
                                               *(short *)(pauVar123[3] + 8) * auVar293._8_2_);
                            auVar317._0_8_ =
                                 CONCAT26(auVar339._10_2_,
                                          CONCAT24(*(short *)(pauVar123[3] + 10) * auVar293._10_2_,
                                                   iVar316));
                            auVar317._8_2_ = *(short *)(pauVar123[3] + 0xc) * auVar293._12_2_;
                            auVar317._10_2_ = auVar339._12_2_;
                            auVar320._12_2_ = *(short *)(pauVar123[3] + 0xe) * auVar293._14_2_;
                            auVar320._0_12_ = auVar317;
                            auVar320._14_2_ = auVar339._14_2_;
                            iVar132 = CONCAT22(auVar339._6_2_,sVar193);
                            Var81 = CONCAT64(CONCAT42(iVar132,auVar339._4_2_),
                                             CONCAT22(*(short *)(pauVar123[3] + 4) * auVar293._4_2_,
                                                      sVar193));
                            auVar74._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar74._2_2_ = auVar339._2_2_;
                            auVar74._0_2_ = *(short *)(pauVar123[3] + 2) * auVar293._2_2_;
                            sVar193 = *(short *)(*pauVar123 + 6) * auVar308._6_2_;
                            iVar145 = CONCAT22(auVar155._8_2_,
                                               *(short *)(*pauVar123 + 8) * auVar308._8_2_);
                            auVar152._0_8_ =
                                 CONCAT26(auVar155._10_2_,
                                          CONCAT24(*(short *)(*pauVar123 + 10) * auVar308._10_2_,
                                                   iVar145));
                            auVar152._8_2_ = *(short *)(*pauVar123 + 0xc) * auVar308._12_2_;
                            auVar152._10_2_ = auVar155._12_2_;
                            auVar178._12_2_ = *(short *)(*pauVar123 + 0xe) * auVar308._14_2_;
                            auVar178._0_12_ = auVar152;
                            auVar178._14_2_ = auVar155._14_2_;
                            iVar137 = CONCAT22(auVar155._6_2_,sVar193);
                            Var82 = CONCAT64(CONCAT42(iVar137,auVar155._4_2_),
                                             CONCAT22(*(short *)(*pauVar123 + 4) * auVar308._4_2_,
                                                      sVar193));
                            auVar75._4_8_ = (long)((unkuint10)Var82 >> 0x10);
                            auVar75._2_2_ = auVar155._2_2_;
                            auVar75._0_2_ = *(short *)(*pauVar123 + 2) * auVar308._2_2_;
                            auVar179._0_4_ =
                                 (int)(short)((uint)(iVar145 + iVar316 + _LC31._16_4_) >> 6);
                            auVar179._4_4_ =
                                 (int)(short)((uint)((int)((ulong)auVar152._0_8_ >> 0x20) +
                                                     (int)((ulong)auVar317._0_8_ >> 0x20) +
                                                    _UNK_0011b764) >> 6);
                            auVar179._8_4_ =
                                 (int)(short)((uint)(auVar152._8_4_ + auVar317._8_4_ + _UNK_0011b768
                                                    ) >> 6);
                            auVar179._12_4_ =
                                 (int)(short)((uint)(auVar178._12_4_ + auVar320._12_4_ +
                                                    _UNK_0011b76c) >> 6);
                            auVar257._0_4_ =
                                 (int)(short)((uint)(CONCAT22(auVar155._0_2_,
                                                              *(short *)*pauVar123 * auVar308._0_2_)
                                                     + CONCAT22(auVar339._0_2_,
                                                                *(short *)pauVar123[3] *
                                                                auVar293._0_2_) + _LC31._16_4_) >> 6
                                             );
                            auVar257._4_4_ =
                                 (int)(short)((uint)(auVar75._0_4_ + auVar74._0_4_ + _UNK_0011b764)
                                             >> 6);
                            auVar257._8_4_ =
                                 (int)(short)((uint)((int)((unkuint10)Var82 >> 0x10) +
                                                     (int)((unkuint10)Var81 >> 0x10) + _UNK_0011b768
                                                    ) >> 6);
                            auVar257._12_4_ =
                                 (int)(short)((uint)(iVar137 + iVar132 + _UNK_0011b76c) >> 6);
                            auVar155 = packssdw(auVar257,auVar179);
                            auVar341 = pmulhuw(auVar155,__LC10);
                            auVar339 = psllw(auVar155,5);
                            sVar193 = auVar339._6_2_ - auVar155._6_2_;
                            uVar146 = CONCAT22(auVar341._8_2_,auVar339._8_2_ - auVar155._8_2_);
                            auVar153._0_8_ =
                                 CONCAT26(auVar341._10_2_,
                                          CONCAT24(auVar339._10_2_ - auVar155._10_2_,uVar146));
                            auVar153._8_2_ = auVar339._12_2_ - auVar155._12_2_;
                            auVar153._10_2_ = auVar341._12_2_;
                            auVar180._12_2_ = auVar339._14_2_ - auVar155._14_2_;
                            auVar180._0_12_ = auVar153;
                            auVar180._14_2_ = auVar341._14_2_;
                            uVar106 = CONCAT22(auVar341._6_2_,sVar193);
                            Var81 = CONCAT64(CONCAT42(uVar106,auVar341._4_2_),
                                             CONCAT22(auVar339._4_2_ - auVar155._4_2_,sVar193));
                            auVar76._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar76._2_2_ = auVar341._2_2_;
                            auVar76._0_2_ = auVar339._2_2_ - auVar155._2_2_;
                            auVar181._0_4_ = uVar146 >> 6;
                            auVar181._4_4_ = (uint)((ulong)auVar153._0_8_ >> 0x26);
                            auVar181._8_4_ = auVar153._8_4_ >> 6;
                            auVar181._12_4_ = auVar180._12_4_ >> 6;
                            auVar258._0_4_ =
                                 CONCAT22(auVar341._0_2_,auVar339._0_2_ - auVar155._0_2_) >> 6;
                            auVar258._4_4_ = auVar76._0_4_ >> 6;
                            auVar258._8_4_ = (uint)((unkuint10)Var81 >> 0x10) >> 6;
                            auVar258._12_4_ = uVar106 >> 6;
                            auVar339 = packssdw(auVar258,auVar181);
                            *pauVar118 = auVar339;
                            pauVar123 = pauVar96;
                            pauVar118 = pauVar118 + 1;
                          } while ((undefined1 (*) [16])(puVar124 + 0x3b8) != pauVar96);
                        }
                        else {
                          auVar250._0_2_ = sVar193 - auVar222._0_2_;
                          auVar250._2_2_ = sVar265 - sVar230;
                          auVar250._4_2_ = sVar266 - sVar231;
                          auVar250._6_2_ = sVar269 - sVar232;
                          auVar250._8_2_ = sVar270 - uVar233;
                          auVar250._10_2_ = sVar273 - uVar234;
                          auVar250._12_2_ = sVar274 - uVar235;
                          auVar250._14_2_ = sVar277 - uVar236;
                          auVar339 = auVar250 & auVar339 | ~auVar339 & auVar222;
                          auVar288._0_2_ =
                               (ushort)(*(short *)(&g_weightReciprocals + lVar133) * auVar339._0_2_
                                       + __LC30) >> 9;
                          auVar288._2_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05a) * auVar339._2_2_ +
                                       _UNK_0011b742) >> 9;
                          auVar288._4_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05c) * auVar339._4_2_ +
                                       _UNK_0011b744) >> 9;
                          auVar288._6_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d05e) * auVar339._6_2_ +
                                       _UNK_0011b746) >> 9;
                          auVar288._8_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d060) * auVar339._8_2_ +
                                       _UNK_0011b748) >> 9;
                          auVar288._10_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d062) * auVar339._10_2_ +
                                       _UNK_0011b74a) >> 9;
                          auVar288._12_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d064) * auVar339._12_2_ +
                                       _UNK_0011b74c) >> 9;
                          auVar288._14_2_ =
                               (ushort)(*(short *)(lVar133 + 0x11d066) * auVar339._14_2_ +
                                       _UNK_0011b74e) >> 9;
                          auVar319._0_2_ = _LC31[0] - auVar288._0_2_;
                          auVar319._2_2_ = _LC31[1] - auVar288._2_2_;
                          auVar319._4_2_ = _LC31[2] - auVar288._4_2_;
                          auVar319._6_2_ = _LC31[3] - auVar288._6_2_;
                          auVar319._8_2_ = _LC31[4] - auVar288._8_2_;
                          auVar319._10_2_ = _LC31[5] - auVar288._10_2_;
                          auVar319._12_2_ = _LC31[6] - auVar288._12_2_;
                          auVar319._14_2_ = _LC31[7] - auVar288._14_2_;
                          pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1c68);
                          pauVar118 = pauVar110;
                          do {
                            pauVar96 = pauVar123 + 1;
                            auVar339 = pmulhw(auVar288,pauVar123[3]);
                            auVar155 = pmulhw(auVar319,*pauVar123);
                            sVar193 = *(short *)(pauVar123[3] + 6) * auVar288._6_2_;
                            iVar316 = CONCAT22(auVar339._8_2_,
                                               *(short *)(pauVar123[3] + 8) * auVar288._8_2_);
                            auVar331._0_8_ =
                                 CONCAT26(auVar339._10_2_,
                                          CONCAT24(*(short *)(pauVar123[3] + 10) * auVar288._10_2_,
                                                   iVar316));
                            auVar331._8_2_ = *(short *)(pauVar123[3] + 0xc) * auVar288._12_2_;
                            auVar331._10_2_ = auVar339._12_2_;
                            auVar335._12_2_ = *(short *)(pauVar123[3] + 0xe) * auVar288._14_2_;
                            auVar335._0_12_ = auVar331;
                            auVar335._14_2_ = auVar339._14_2_;
                            iVar132 = CONCAT22(auVar339._6_2_,sVar193);
                            Var81 = CONCAT64(CONCAT42(iVar132,auVar339._4_2_),
                                             CONCAT22(*(short *)(pauVar123[3] + 4) * auVar288._4_2_,
                                                      sVar193));
                            auVar67._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar67._2_2_ = auVar339._2_2_;
                            auVar67._0_2_ = *(short *)(pauVar123[3] + 2) * auVar288._2_2_;
                            sVar193 = *(short *)(*pauVar123 + 6) * auVar319._6_2_;
                            iVar145 = CONCAT22(auVar155._8_2_,
                                               *(short *)(*pauVar123 + 8) * auVar319._8_2_);
                            auVar149._0_8_ =
                                 CONCAT26(auVar155._10_2_,
                                          CONCAT24(*(short *)(*pauVar123 + 10) * auVar319._10_2_,
                                                   iVar145));
                            auVar149._8_2_ = *(short *)(*pauVar123 + 0xc) * auVar319._12_2_;
                            auVar149._10_2_ = auVar155._12_2_;
                            auVar170._12_2_ = *(short *)(*pauVar123 + 0xe) * auVar319._14_2_;
                            auVar170._0_12_ = auVar149;
                            auVar170._14_2_ = auVar155._14_2_;
                            iVar137 = CONCAT22(auVar155._6_2_,sVar193);
                            Var82 = CONCAT64(CONCAT42(iVar137,auVar155._4_2_),
                                             CONCAT22(*(short *)(*pauVar123 + 4) * auVar319._4_2_,
                                                      sVar193));
                            auVar68._4_8_ = (long)((unkuint10)Var82 >> 0x10);
                            auVar68._2_2_ = auVar155._2_2_;
                            auVar68._0_2_ = *(short *)(*pauVar123 + 2) * auVar319._2_2_;
                            auVar171._0_4_ = iVar145 + iVar316 + auVar364._0_4_ >> 6;
                            auVar171._4_4_ =
                                 (int)((ulong)auVar149._0_8_ >> 0x20) +
                                 (int)((ulong)auVar331._0_8_ >> 0x20) + auVar364._4_4_ >> 6;
                            auVar171._8_4_ = auVar149._8_4_ + auVar331._8_4_ + auVar364._8_4_ >> 6;
                            auVar171._12_4_ =
                                 auVar170._12_4_ + auVar335._12_4_ + auVar364._12_4_ >> 6;
                            auVar251._0_4_ =
                                 CONCAT22(auVar155._0_2_,*(short *)*pauVar123 * auVar319._0_2_) +
                                 CONCAT22(auVar339._0_2_,*(short *)pauVar123[3] * auVar288._0_2_) +
                                 auVar364._0_4_ >> 6;
                            auVar251._4_4_ = auVar68._0_4_ + auVar67._0_4_ + auVar364._4_4_ >> 6;
                            auVar251._8_4_ =
                                 (int)((unkuint10)Var82 >> 0x10) + (int)((unkuint10)Var81 >> 0x10) +
                                 auVar364._8_4_ >> 6;
                            auVar251._12_4_ = iVar137 + iVar132 + auVar364._12_4_ >> 6;
                            auVar339 = packssdw(auVar251,auVar171);
                            auVar336._0_2_ = -(ushort)(auVar339._0_2_ < 0);
                            auVar336._2_2_ = -(ushort)(auVar339._2_2_ < 0);
                            auVar336._4_2_ = -(ushort)(auVar339._4_2_ < 0);
                            auVar336._6_2_ = -(ushort)(auVar339._6_2_ < 0);
                            auVar336._8_2_ = -(ushort)(auVar339._8_2_ < 0);
                            auVar336._10_2_ = -(ushort)(auVar339._10_2_ < 0);
                            auVar336._12_2_ = -(ushort)(auVar339._12_2_ < 0);
                            auVar336._14_2_ = -(ushort)(auVar339._14_2_ < 0);
                            auVar172._2_2_ = -auVar339._2_2_;
                            auVar172._0_2_ = -auVar339._0_2_;
                            auVar172._4_2_ = -auVar339._4_2_;
                            auVar172._6_2_ = -auVar339._6_2_;
                            auVar172._8_2_ = -auVar339._8_2_;
                            auVar172._10_2_ = -auVar339._10_2_;
                            auVar172._12_2_ = -auVar339._12_2_;
                            auVar172._14_2_ = -auVar339._14_2_;
                            auVar155 = auVar172 & auVar336 | ~auVar336 & auVar339;
                            auVar341 = pmulhuw(auVar155,__LC10);
                            auVar339 = psllw(auVar155,5);
                            sVar193 = auVar339._6_2_ - auVar155._6_2_;
                            uVar146 = CONCAT22(auVar341._8_2_,auVar339._8_2_ - auVar155._8_2_);
                            auVar150._0_8_ =
                                 CONCAT26(auVar341._10_2_,
                                          CONCAT24(auVar339._10_2_ - auVar155._10_2_,uVar146));
                            auVar150._8_2_ = auVar339._12_2_ - auVar155._12_2_;
                            auVar150._10_2_ = auVar341._12_2_;
                            auVar173._12_2_ = auVar339._14_2_ - auVar155._14_2_;
                            auVar173._0_12_ = auVar150;
                            auVar173._14_2_ = auVar341._14_2_;
                            uVar106 = CONCAT22(auVar341._6_2_,sVar193);
                            Var81 = CONCAT64(CONCAT42(uVar106,auVar341._4_2_),
                                             CONCAT22(auVar339._4_2_ - auVar155._4_2_,sVar193));
                            auVar69._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar69._2_2_ = auVar341._2_2_;
                            auVar69._0_2_ = auVar339._2_2_ - auVar155._2_2_;
                            auVar174._0_4_ = uVar146 >> 5;
                            auVar174._4_4_ = (uint)((ulong)auVar150._0_8_ >> 0x25);
                            auVar174._8_4_ = auVar150._8_4_ >> 5;
                            auVar174._12_4_ = auVar173._12_4_ >> 5;
                            auVar252._0_4_ =
                                 CONCAT22(auVar341._0_2_,auVar339._0_2_ - auVar155._0_2_) >> 5;
                            auVar252._4_4_ = auVar69._0_4_ >> 5;
                            auVar252._8_4_ = (uint)((unkuint10)Var81 >> 0x10) >> 5;
                            auVar252._12_4_ = uVar106 >> 5;
                            auVar339 = packssdw(auVar252,auVar174);
                            *pauVar118 = auVar336 & __LC11 | auVar339;
                            pauVar123 = pauVar96;
                            pauVar118 = pauVar118 + 1;
                          } while ((undefined1 (*) [16])(puVar124 + 0x3b8) != pauVar96);
                        }
                        if (iVar131 == 0) {
                          if ((*(uint *)(puVar124 + -0x1bd8) & 0x200) == 0) {
                            fVar305 = 0.0;
                            fVar310 = 0.0;
                            fVar312 = 0.0;
                            fVar314 = 0.0;
                            lVar133 = 0;
                            *(float *)(puVar124 + -0x1c38) = fVar324;
                            *(float *)(puVar124 + -0x1c34) = fVar198;
                            *(float *)(puVar124 + -0x1c30) = fVar329;
                            *(float *)(puVar124 + -0x1c2c) = fVar330;
                            pfVar130 = (float *)(puVar124 + -0x1a38);
                            fVar315 = 0.0;
                            fVar321 = 0.0;
                            fVar322 = 0.0;
                            fVar323 = 0.0;
                            do {
                              auVar339 = *(undefined1 (*) [16])(*pauVar110 + lVar133);
                              fVar324 = *pfVar130;
                              pfVar130 = pfVar130 + 1;
                              auVar341 = __LC33 & auVar339;
                              auVar155 = auVar339 & __LC34;
                              auVar259._0_2_ = (auVar341._0_2_ >> 3) + __LC36;
                              auVar259._2_2_ = (auVar341._2_2_ >> 3) + _UNK_0011b792;
                              auVar259._4_2_ = (auVar341._4_2_ >> 3) + _UNK_0011b794;
                              auVar259._6_2_ = (auVar341._6_2_ >> 3) + _UNK_0011b796;
                              auVar259._8_2_ = (auVar341._8_2_ >> 3) + _UNK_0011b798;
                              auVar259._10_2_ = (auVar341._10_2_ >> 3) + _UNK_0011b79a;
                              auVar259._12_2_ = (auVar341._12_2_ >> 3) + _UNK_0011b79c;
                              auVar259._14_2_ = (auVar341._14_2_ >> 3) + _UNK_0011b79e;
                              auVar261._0_2_ = -(ushort)(auVar341._0_2_ == 0);
                              auVar261._2_2_ = -(ushort)(auVar341._2_2_ == 0);
                              auVar261._4_2_ = -(ushort)(auVar341._4_2_ == 0);
                              auVar261._6_2_ = -(ushort)(auVar341._6_2_ == 0);
                              auVar261._8_2_ = -(ushort)(auVar341._8_2_ == 0);
                              auVar261._10_2_ = -(ushort)(auVar341._10_2_ == 0);
                              auVar261._12_2_ = -(ushort)(auVar341._12_2_ == 0);
                              auVar261._14_2_ = -(ushort)(auVar341._14_2_ == 0);
                              auVar260._0_2_ = auVar155._0_2_ >> 3;
                              auVar260._2_2_ = auVar155._2_2_ >> 3;
                              auVar260._4_2_ = auVar155._4_2_ >> 3;
                              auVar260._6_2_ = auVar155._6_2_ >> 3;
                              auVar260._8_2_ = auVar155._8_2_ >> 3;
                              auVar260._10_2_ = auVar155._10_2_ >> 3;
                              auVar260._12_2_ = auVar155._12_2_ >> 3;
                              auVar260._14_2_ = auVar155._14_2_ >> 3;
                              auVar155 = psllw(auVar155,0xd);
                              auVar63._2_2_ = _UNK_0011b792;
                              auVar63._0_2_ = __LC36;
                              auVar63._4_2_ = _UNK_0011b794;
                              auVar63._6_2_ = _UNK_0011b796;
                              auVar63._8_2_ = _UNK_0011b798;
                              auVar63._10_2_ = _UNK_0011b79a;
                              auVar63._12_2_ = _UNK_0011b79c;
                              auVar63._14_2_ = _UNK_0011b79e;
                              auVar260 = auVar259 | __LC11 & auVar339 | auVar260;
                              auVar296._0_12_ = auVar155._0_12_;
                              auVar296._12_2_ = auVar155._6_2_;
                              auVar296._14_2_ = auVar260._6_2_;
                              auVar295._12_4_ = auVar296._12_4_;
                              auVar295._0_10_ = auVar155._0_10_;
                              auVar295._10_2_ = auVar260._4_2_;
                              auVar294._10_6_ = auVar295._10_6_;
                              auVar294._0_8_ = auVar155._0_8_;
                              auVar294._8_2_ = auVar155._4_2_;
                              auVar77._4_8_ = auVar294._8_8_;
                              auVar77._2_2_ = auVar260._2_2_;
                              auVar77._0_2_ = auVar155._2_2_;
                              fVar198 = (float)CONCAT22(auVar260._8_2_,auVar155._8_2_);
                              auVar154._0_8_ =
                                   CONCAT26(auVar260._10_2_,CONCAT24(auVar155._10_2_,fVar198));
                              auVar154._8_2_ = auVar155._12_2_;
                              auVar154._10_2_ = auVar260._12_2_;
                              auVar182._12_2_ = auVar155._14_2_;
                              auVar182._0_12_ = auVar154;
                              auVar182._14_2_ = auVar260._14_2_;
                              auVar261 = (__LC11 & auVar339 | auVar63) & auVar261;
                              auVar90._10_2_ = auVar261._4_2_;
                              auVar90._0_10_ = (unkuint10)0;
                              uVar7 = CONCAT24(auVar261._10_2_,(uint)auVar261._8_2_);
                              auVar355._0_10_ = (unkuint10)uVar7 << 0x10;
                              auVar355._10_2_ = auVar261._12_2_;
                              auVar358._12_2_ = 0;
                              auVar358._0_12_ = auVar355;
                              auVar358._14_2_ = auVar261._14_2_;
                              auVar339 = *(undefined1 (*) [16])(lVar120 + lVar133);
                              lVar133 = lVar133 + 0x10;
                              auVar243 = __LC33 & auVar339;
                              auVar341 = auVar339 & __LC34;
                              auVar337._0_2_ = -(ushort)(auVar243._0_2_ == 0);
                              auVar337._2_2_ = -(ushort)(auVar243._2_2_ == 0);
                              auVar337._4_2_ = -(ushort)(auVar243._4_2_ == 0);
                              auVar337._6_2_ = -(ushort)(auVar243._6_2_ == 0);
                              auVar337._8_2_ = -(ushort)(auVar243._8_2_ == 0);
                              auVar337._10_2_ = -(ushort)(auVar243._10_2_ == 0);
                              auVar337._12_2_ = -(ushort)(auVar243._12_2_ == 0);
                              auVar337._14_2_ = -(ushort)(auVar243._14_2_ == 0);
                              auVar326._0_2_ = (auVar243._0_2_ >> 3) + __LC36;
                              auVar326._2_2_ = (auVar243._2_2_ >> 3) + _UNK_0011b792;
                              auVar326._4_2_ = (auVar243._4_2_ >> 3) + _UNK_0011b794;
                              auVar326._6_2_ = (auVar243._6_2_ >> 3) + _UNK_0011b796;
                              auVar326._8_2_ = (auVar243._8_2_ >> 3) + _UNK_0011b798;
                              auVar326._10_2_ = (auVar243._10_2_ >> 3) + _UNK_0011b79a;
                              auVar326._12_2_ = (auVar243._12_2_ >> 3) + _UNK_0011b79c;
                              auVar326._14_2_ = (auVar243._14_2_ >> 3) + _UNK_0011b79e;
                              auVar327._0_2_ = auVar341._0_2_ >> 3;
                              auVar327._2_2_ = auVar341._2_2_ >> 3;
                              auVar327._4_2_ = auVar341._4_2_ >> 3;
                              auVar327._6_2_ = auVar341._6_2_ >> 3;
                              auVar327._8_2_ = auVar341._8_2_ >> 3;
                              auVar327._10_2_ = auVar341._10_2_ >> 3;
                              auVar327._12_2_ = auVar341._12_2_ >> 3;
                              auVar327._14_2_ = auVar341._14_2_ >> 3;
                              auVar341 = psllw(auVar341,0xd);
                              auVar64._2_2_ = _UNK_0011b792;
                              auVar64._0_2_ = __LC36;
                              auVar64._4_2_ = _UNK_0011b794;
                              auVar64._6_2_ = _UNK_0011b796;
                              auVar64._8_2_ = _UNK_0011b798;
                              auVar64._10_2_ = _UNK_0011b79a;
                              auVar64._12_2_ = _UNK_0011b79c;
                              auVar64._14_2_ = _UNK_0011b79e;
                              auVar327 = auVar326 | __LC11 & auVar339 | auVar327;
                              auVar337 = (__LC11 & auVar339 | auVar64) & auVar337;
                              auVar363._0_12_ = auVar341._0_12_;
                              auVar363._12_2_ = auVar341._6_2_;
                              auVar363._14_2_ = auVar327._6_2_;
                              auVar362._12_4_ = auVar363._12_4_;
                              auVar362._0_10_ = auVar341._0_10_;
                              auVar362._10_2_ = auVar327._4_2_;
                              auVar361._10_6_ = auVar362._10_6_;
                              auVar361._0_8_ = auVar341._0_8_;
                              auVar361._8_2_ = auVar341._4_2_;
                              auVar78._4_8_ = auVar361._8_8_;
                              auVar78._2_2_ = auVar327._2_2_;
                              auVar78._0_2_ = auVar341._2_2_;
                              fVar329 = (float)CONCAT22(auVar327._8_2_,auVar341._8_2_);
                              auVar242._0_8_ =
                                   CONCAT26(auVar327._10_2_,CONCAT24(auVar341._10_2_,fVar329));
                              auVar242._8_2_ = auVar341._12_2_;
                              auVar242._10_2_ = auVar327._12_2_;
                              auVar262._12_2_ = auVar341._14_2_;
                              auVar262._0_12_ = auVar242;
                              auVar262._14_2_ = auVar327._14_2_;
                              auVar91._10_2_ = auVar337._4_2_;
                              auVar91._0_10_ = (unkuint10)0;
                              uVar9 = CONCAT24(auVar337._10_2_,(uint)auVar337._8_2_);
                              auVar325._0_10_ = (unkuint10)uVar9 << 0x10;
                              auVar325._10_2_ = auVar337._12_2_;
                              auVar328._12_2_ = 0;
                              auVar328._0_12_ = auVar325;
                              auVar328._14_2_ = auVar337._14_2_;
                              fVar268 = ((float)CONCAT22(auVar260._0_2_,auVar155._0_2_) -
                                        (float)((uint)auVar261._0_2_ << 0x10)) -
                                        ((float)CONCAT22(auVar327._0_2_,auVar341._0_2_) -
                                        (float)((uint)auVar337._0_2_ << 0x10));
                              fVar272 = (auVar77._0_4_ -
                                        SUB164(ZEXT616(CONCAT42(auVar90._8_4_,auVar261._2_2_)) <<
                                               0x30,4)) -
                                        (auVar78._0_4_ -
                                        SUB164(ZEXT616(CONCAT42(auVar91._8_4_,auVar337._2_2_)) <<
                                               0x30,4));
                              fVar276 = (auVar294._8_4_ - auVar90._8_4_) -
                                        (auVar361._8_4_ - auVar91._8_4_);
                              fVar237 = (auVar295._12_4_ - 0.0) - (auVar362._12_4_ - 0.0);
                              fVar198 = (fVar198 - (float)auVar355._0_10_) -
                                        (fVar329 - (float)auVar325._0_10_);
                              fVar329 = ((float)((ulong)auVar154._0_8_ >> 0x20) -
                                        (float)(uVar7 >> 0x10)) -
                                        ((float)((ulong)auVar242._0_8_ >> 0x20) -
                                        (float)(uVar9 >> 0x10));
                              fVar330 = (auVar154._8_4_ - auVar355._8_4_) -
                                        (auVar242._8_4_ - auVar325._8_4_);
                              fVar238 = (auVar182._12_4_ - auVar358._12_4_) -
                                        (auVar262._12_4_ - auVar328._12_4_);
                              fVar315 = fVar315 + fVar268 * fVar268 * fVar324;
                              fVar321 = fVar321 + fVar272 * fVar272 * fVar324;
                              fVar322 = fVar322 + fVar276 * fVar276 * fVar324;
                              fVar323 = fVar323 + fVar237 * fVar237 * fVar324;
                              fVar305 = fVar305 + fVar198 * fVar198 * fVar324;
                              fVar310 = fVar310 + fVar329 * fVar329 * fVar324;
                              fVar312 = fVar312 + fVar330 * fVar330 * fVar324;
                              fVar314 = fVar314 + fVar238 * fVar238 * fVar324;
                            } while (lVar133 != 0x30);
                            fVar324 = *(float *)(puVar124 + -0x1c38);
                            fVar198 = *(float *)(puVar124 + -0x1c34);
                            fVar329 = *(float *)(puVar124 + -0x1c30);
                            fVar330 = *(float *)(puVar124 + -0x1c2c);
                          }
                          else {
                            fVar305 = 0.0;
                            fVar310 = 0.0;
                            fVar312 = 0.0;
                            fVar314 = 0.0;
                            lVar133 = 0;
                            fVar315 = 0.0;
                            fVar321 = 0.0;
                            fVar322 = 0.0;
                            fVar323 = 0.0;
                            do {
                              auVar339 = *(undefined1 (*) [16])(*pauVar110 + lVar133);
                              auVar341 = __LC33 & auVar339;
                              auVar348._0_2_ = -(ushort)(auVar341._0_2_ == 0);
                              auVar348._2_2_ = -(ushort)(auVar341._2_2_ == 0);
                              auVar348._4_2_ = -(ushort)(auVar341._4_2_ == 0);
                              auVar348._6_2_ = -(ushort)(auVar341._6_2_ == 0);
                              auVar348._8_2_ = -(ushort)(auVar341._8_2_ == 0);
                              auVar348._10_2_ = -(ushort)(auVar341._10_2_ == 0);
                              auVar348._12_2_ = -(ushort)(auVar341._12_2_ == 0);
                              auVar348._14_2_ = -(ushort)(auVar341._14_2_ == 0);
                              auVar155 = auVar339 & __LC34;
                              auVar342._0_2_ = (auVar341._0_2_ >> 3) + __LC36;
                              auVar342._2_2_ = (auVar341._2_2_ >> 3) + _UNK_0011b792;
                              auVar342._4_2_ = (auVar341._4_2_ >> 3) + _UNK_0011b794;
                              auVar342._6_2_ = (auVar341._6_2_ >> 3) + _UNK_0011b796;
                              auVar342._8_2_ = (auVar341._8_2_ >> 3) + _UNK_0011b798;
                              auVar342._10_2_ = (auVar341._10_2_ >> 3) + _UNK_0011b79a;
                              auVar342._12_2_ = (auVar341._12_2_ >> 3) + _UNK_0011b79c;
                              auVar342._14_2_ = (auVar341._14_2_ >> 3) + _UNK_0011b79e;
                              auVar61._2_2_ = _UNK_0011b792;
                              auVar61._0_2_ = __LC36;
                              auVar61._4_2_ = _UNK_0011b794;
                              auVar61._6_2_ = _UNK_0011b796;
                              auVar61._8_2_ = _UNK_0011b798;
                              auVar61._10_2_ = _UNK_0011b79a;
                              auVar61._12_2_ = _UNK_0011b79c;
                              auVar61._14_2_ = _UNK_0011b79e;
                              auVar341 = psllw(auVar155,0xd);
                              auVar343._0_2_ = auVar155._0_2_ >> 3;
                              auVar343._2_2_ = auVar155._2_2_ >> 3;
                              auVar343._4_2_ = auVar155._4_2_ >> 3;
                              auVar343._6_2_ = auVar155._6_2_ >> 3;
                              auVar343._8_2_ = auVar155._8_2_ >> 3;
                              auVar343._10_2_ = auVar155._10_2_ >> 3;
                              auVar343._12_2_ = auVar155._12_2_ >> 3;
                              auVar343._14_2_ = auVar155._14_2_ >> 3;
                              auVar348 = (__LC11 & auVar339 | auVar61) & auVar348;
                              auVar343 = auVar342 | __LC11 & auVar339 | auVar343;
                              auVar88._10_2_ = auVar348._4_2_;
                              auVar88._0_10_ = (unkuint10)0;
                              auVar339 = *(undefined1 (*) [16])(lVar120 + lVar133);
                              uVar7 = CONCAT24(auVar348._10_2_,(uint)auVar348._8_2_);
                              auVar354._0_10_ = (unkuint10)uVar7 << 0x10;
                              auVar354._10_2_ = auVar348._12_2_;
                              auVar357._12_2_ = 0;
                              auVar357._0_12_ = auVar354;
                              auVar357._14_2_ = auVar348._14_2_;
                              auVar292._0_12_ = auVar341._0_12_;
                              auVar292._12_2_ = auVar341._6_2_;
                              auVar292._14_2_ = auVar343._6_2_;
                              auVar291._12_4_ = auVar292._12_4_;
                              auVar291._0_10_ = auVar341._0_10_;
                              auVar291._10_2_ = auVar343._4_2_;
                              auVar290._10_6_ = auVar291._10_6_;
                              auVar290._0_8_ = auVar341._0_8_;
                              auVar290._8_2_ = auVar341._4_2_;
                              auVar72._4_8_ = auVar290._8_8_;
                              auVar72._2_2_ = auVar343._2_2_;
                              auVar72._0_2_ = auVar341._2_2_;
                              fVar268 = (float)CONCAT22(auVar343._8_2_,auVar341._8_2_);
                              auVar241._0_8_ =
                                   CONCAT26(auVar343._10_2_,CONCAT24(auVar341._10_2_,fVar268));
                              auVar241._8_2_ = auVar341._12_2_;
                              auVar241._10_2_ = auVar343._12_2_;
                              auVar255._12_2_ = auVar341._14_2_;
                              auVar255._0_12_ = auVar241;
                              auVar255._14_2_ = auVar343._14_2_;
                              lVar133 = lVar133 + 0x10;
                              auVar243 = __LC33 & auVar339;
                              auVar155 = auVar339 & __LC34;
                              auVar360._0_2_ = -(ushort)(auVar243._0_2_ == 0);
                              auVar360._2_2_ = -(ushort)(auVar243._2_2_ == 0);
                              auVar360._4_2_ = -(ushort)(auVar243._4_2_ == 0);
                              auVar360._6_2_ = -(ushort)(auVar243._6_2_ == 0);
                              auVar360._8_2_ = -(ushort)(auVar243._8_2_ == 0);
                              auVar360._10_2_ = -(ushort)(auVar243._10_2_ == 0);
                              auVar360._12_2_ = -(ushort)(auVar243._12_2_ == 0);
                              auVar360._14_2_ = -(ushort)(auVar243._14_2_ == 0);
                              auVar350._0_2_ = (auVar243._0_2_ >> 3) + __LC36;
                              auVar350._2_2_ = (auVar243._2_2_ >> 3) + _UNK_0011b792;
                              auVar350._4_2_ = (auVar243._4_2_ >> 3) + _UNK_0011b794;
                              auVar350._6_2_ = (auVar243._6_2_ >> 3) + _UNK_0011b796;
                              auVar350._8_2_ = (auVar243._8_2_ >> 3) + _UNK_0011b798;
                              auVar350._10_2_ = (auVar243._10_2_ >> 3) + _UNK_0011b79a;
                              auVar350._12_2_ = (auVar243._12_2_ >> 3) + _UNK_0011b79c;
                              auVar350._14_2_ = (auVar243._14_2_ >> 3) + _UNK_0011b79e;
                              auVar351._0_2_ = auVar155._0_2_ >> 3;
                              auVar351._2_2_ = auVar155._2_2_ >> 3;
                              auVar351._4_2_ = auVar155._4_2_ >> 3;
                              auVar351._6_2_ = auVar155._6_2_ >> 3;
                              auVar351._8_2_ = auVar155._8_2_ >> 3;
                              auVar351._10_2_ = auVar155._10_2_ >> 3;
                              auVar351._12_2_ = auVar155._12_2_ >> 3;
                              auVar351._14_2_ = auVar155._14_2_ >> 3;
                              auVar155 = psllw(auVar155,0xd);
                              auVar62._2_2_ = _UNK_0011b792;
                              auVar62._0_2_ = __LC36;
                              auVar62._4_2_ = _UNK_0011b794;
                              auVar62._6_2_ = _UNK_0011b796;
                              auVar62._8_2_ = _UNK_0011b798;
                              auVar62._10_2_ = _UNK_0011b79a;
                              auVar62._12_2_ = _UNK_0011b79c;
                              auVar62._14_2_ = _UNK_0011b79e;
                              auVar351 = auVar350 | __LC11 & auVar339 | auVar351;
                              auVar360 = (__LC11 & auVar339 | auVar62) & auVar360;
                              auVar346._0_12_ = auVar155._0_12_;
                              auVar346._12_2_ = auVar155._6_2_;
                              auVar346._14_2_ = auVar351._6_2_;
                              auVar345._12_4_ = auVar346._12_4_;
                              auVar345._0_10_ = auVar155._0_10_;
                              auVar345._10_2_ = auVar351._4_2_;
                              auVar344._10_6_ = auVar345._10_6_;
                              auVar344._0_8_ = auVar155._0_8_;
                              auVar344._8_2_ = auVar155._4_2_;
                              auVar73._4_8_ = auVar344._8_8_;
                              auVar73._2_2_ = auVar351._2_2_;
                              auVar73._0_2_ = auVar155._2_2_;
                              fVar238 = (float)CONCAT22(auVar351._8_2_,auVar155._8_2_);
                              auVar151._0_8_ =
                                   CONCAT26(auVar351._10_2_,CONCAT24(auVar155._10_2_,fVar238));
                              auVar151._8_2_ = auVar155._12_2_;
                              auVar151._10_2_ = auVar351._12_2_;
                              auVar177._12_2_ = auVar155._14_2_;
                              auVar177._0_12_ = auVar151;
                              auVar177._14_2_ = auVar351._14_2_;
                              auVar89._10_2_ = auVar360._4_2_;
                              auVar89._0_10_ = (unkuint10)0;
                              uVar9 = CONCAT24(auVar360._10_2_,(uint)auVar360._8_2_);
                              auVar347._0_10_ = (unkuint10)uVar9 << 0x10;
                              auVar347._10_2_ = auVar360._12_2_;
                              auVar349._12_2_ = 0;
                              auVar349._0_12_ = auVar347;
                              auVar349._14_2_ = auVar360._14_2_;
                              fVar237 = ((float)CONCAT22(auVar343._0_2_,auVar341._0_2_) -
                                        (float)((uint)auVar348._0_2_ << 0x10)) -
                                        ((float)CONCAT22(auVar351._0_2_,auVar155._0_2_) -
                                        (float)((uint)auVar360._0_2_ << 0x10));
                              fVar267 = (auVar72._0_4_ -
                                        SUB164(ZEXT616(CONCAT42(auVar88._8_4_,auVar348._2_2_)) <<
                                               0x30,4)) -
                                        (auVar73._0_4_ -
                                        SUB164(ZEXT616(CONCAT42(auVar89._8_4_,auVar360._2_2_)) <<
                                               0x30,4));
                              fVar271 = (auVar290._8_4_ - auVar88._8_4_) -
                                        (auVar344._8_4_ - auVar89._8_4_);
                              fVar275 = (auVar291._12_4_ - 0.0) - (auVar345._12_4_ - 0.0);
                              fVar238 = (fVar268 - (float)auVar354._0_10_) -
                                        (fVar238 - (float)auVar347._0_10_);
                              fVar268 = ((float)((ulong)auVar241._0_8_ >> 0x20) -
                                        (float)(uVar7 >> 0x10)) -
                                        ((float)((ulong)auVar151._0_8_ >> 0x20) -
                                        (float)(uVar9 >> 0x10));
                              fVar272 = (auVar241._8_4_ - auVar354._8_4_) -
                                        (auVar151._8_4_ - auVar347._8_4_);
                              fVar276 = (auVar255._12_4_ - auVar357._12_4_) -
                                        (auVar177._12_4_ - auVar349._12_4_);
                              fVar315 = fVar315 + fVar237 * fVar237;
                              fVar321 = fVar321 + fVar267 * fVar267;
                              fVar322 = fVar322 + fVar271 * fVar271;
                              fVar323 = fVar323 + fVar275 * fVar275;
                              fVar305 = fVar305 + fVar238 * fVar238;
                              fVar310 = fVar310 + fVar268 * fVar268;
                              fVar312 = fVar312 + fVar272 * fVar272;
                              fVar314 = fVar314 + fVar276 * fVar276;
                            } while (lVar133 != 0x30);
                          }
                        }
                        else if ((*(uint *)(puVar124 + -0x1bd8) & 0x200) == 0) {
                          fVar305 = 0.0;
                          fVar310 = 0.0;
                          fVar312 = 0.0;
                          fVar314 = 0.0;
                          lVar133 = 0;
                          fVar315 = 0.0;
                          fVar321 = 0.0;
                          fVar322 = 0.0;
                          fVar323 = 0.0;
                          pfVar130 = (float *)(puVar124 + -0x1a38);
                          do {
                            psVar139 = (short *)(*pauVar110 + lVar133);
                            sVar193 = *psVar139;
                            sVar265 = psVar139[1];
                            sVar266 = psVar139[2];
                            sVar269 = psVar139[3];
                            sVar270 = psVar139[4];
                            sVar273 = psVar139[5];
                            sVar274 = psVar139[6];
                            sVar277 = psVar139[7];
                            psVar139 = (short *)(*pauVar110 + lVar133);
                            sVar20 = *psVar139;
                            sVar21 = psVar139[1];
                            sVar22 = psVar139[2];
                            sVar23 = psVar139[3];
                            sVar24 = psVar139[4];
                            sVar25 = psVar139[5];
                            sVar26 = psVar139[6];
                            sVar27 = psVar139[7];
                            psVar139 = (short *)(lVar120 + lVar133);
                            sVar28 = *psVar139;
                            sVar29 = psVar139[1];
                            sVar30 = psVar139[2];
                            sVar31 = psVar139[3];
                            sVar32 = psVar139[4];
                            sVar33 = psVar139[5];
                            sVar34 = psVar139[6];
                            sVar35 = psVar139[7];
                            psVar139 = (short *)(lVar120 + lVar133);
                            sVar36 = *psVar139;
                            sVar37 = psVar139[1];
                            sVar38 = psVar139[2];
                            sVar39 = psVar139[3];
                            sVar40 = psVar139[4];
                            sVar41 = psVar139[5];
                            sVar42 = psVar139[6];
                            sVar43 = psVar139[7];
                            lVar133 = lVar133 + 0x10;
                            fVar238 = *pfVar130;
                            auVar183._0_2_ =
                                 ((ushort)(sVar20 < sVar36) * sVar36 |
                                 (ushort)(sVar20 >= sVar36) * sVar20) -
                                 ((ushort)(sVar28 < sVar193) * sVar28 |
                                 (ushort)(sVar28 >= sVar193) * sVar193);
                            auVar183._2_2_ =
                                 ((ushort)(sVar21 < sVar37) * sVar37 |
                                 (ushort)(sVar21 >= sVar37) * sVar21) -
                                 ((ushort)(sVar29 < sVar265) * sVar29 |
                                 (ushort)(sVar29 >= sVar265) * sVar265);
                            auVar183._4_2_ =
                                 ((ushort)(sVar22 < sVar38) * sVar38 |
                                 (ushort)(sVar22 >= sVar38) * sVar22) -
                                 ((ushort)(sVar30 < sVar266) * sVar30 |
                                 (ushort)(sVar30 >= sVar266) * sVar266);
                            auVar183._6_2_ =
                                 ((ushort)(sVar23 < sVar39) * sVar39 |
                                 (ushort)(sVar23 >= sVar39) * sVar23) -
                                 ((ushort)(sVar31 < sVar269) * sVar31 |
                                 (ushort)(sVar31 >= sVar269) * sVar269);
                            auVar183._8_2_ =
                                 ((ushort)(sVar24 < sVar40) * sVar40 |
                                 (ushort)(sVar24 >= sVar40) * sVar24) -
                                 ((ushort)(sVar32 < sVar270) * sVar32 |
                                 (ushort)(sVar32 >= sVar270) * sVar270);
                            auVar183._10_2_ =
                                 ((ushort)(sVar25 < sVar41) * sVar41 |
                                 (ushort)(sVar25 >= sVar41) * sVar25) -
                                 ((ushort)(sVar33 < sVar273) * sVar33 |
                                 (ushort)(sVar33 >= sVar273) * sVar273);
                            auVar183._12_2_ =
                                 ((ushort)(sVar26 < sVar42) * sVar42 |
                                 (ushort)(sVar26 >= sVar42) * sVar26) -
                                 ((ushort)(sVar34 < sVar274) * sVar34 |
                                 (ushort)(sVar34 >= sVar274) * sVar274);
                            auVar183._14_2_ =
                                 ((ushort)(sVar27 < sVar43) * sVar43 |
                                 (ushort)(sVar27 >= sVar43) * sVar27) -
                                 ((ushort)(sVar35 < sVar277) * sVar35 |
                                 (ushort)(sVar35 >= sVar277) * sVar277);
                            auVar339 = pmulhuw(auVar183,auVar183);
                            iVar132 = CONCAT22(auVar339._6_2_,auVar183._6_2_ * auVar183._6_2_);
                            Var81 = CONCAT64(CONCAT42(iVar132,auVar339._4_2_),
                                             CONCAT22(auVar183._4_2_ * auVar183._4_2_,
                                                      auVar183._6_2_ * auVar183._6_2_));
                            auVar79._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar79._2_2_ = auVar339._2_2_;
                            auVar79._0_2_ = auVar183._2_2_ * auVar183._2_2_;
                            iVar137 = CONCAT22(auVar339._8_2_,auVar183._8_2_ * auVar183._8_2_);
                            auVar279._0_8_ =
                                 CONCAT26(auVar339._10_2_,
                                          CONCAT24(auVar183._10_2_ * auVar183._10_2_,iVar137));
                            auVar279._8_2_ = auVar183._12_2_ * auVar183._12_2_;
                            auVar279._10_2_ = auVar339._12_2_;
                            auVar297._12_2_ = auVar183._14_2_ * auVar183._14_2_;
                            auVar297._0_12_ = auVar279;
                            auVar297._14_2_ = auVar339._14_2_;
                            fVar315 = fVar315 + (float)CONCAT22(auVar339._0_2_,
                                                                auVar183._0_2_ * auVar183._0_2_) *
                                                fVar238;
                            fVar321 = fVar321 + (float)auVar79._0_4_ * fVar238;
                            fVar322 = fVar322 + (float)(int)((unkuint10)Var81 >> 0x10) * fVar238;
                            fVar323 = fVar323 + (float)iVar132 * fVar238;
                            fVar305 = fVar305 + fVar238 * (float)iVar137;
                            fVar310 = fVar310 + fVar238 * (float)(int)((ulong)auVar279._0_8_ >> 0x20
                                                                      );
                            fVar312 = fVar312 + fVar238 * (float)auVar279._8_4_;
                            fVar314 = fVar314 + fVar238 * (float)auVar297._12_4_;
                            pfVar130 = pfVar130 + 1;
                          } while (lVar133 != 0x30);
                        }
                        else {
                          fVar305 = 0.0;
                          fVar310 = 0.0;
                          fVar312 = 0.0;
                          fVar314 = 0.0;
                          lVar133 = 0;
                          fVar315 = 0.0;
                          fVar321 = 0.0;
                          fVar322 = 0.0;
                          fVar323 = 0.0;
                          do {
                            psVar139 = (short *)(*pauVar110 + lVar133);
                            sVar193 = *psVar139;
                            sVar265 = psVar139[1];
                            sVar266 = psVar139[2];
                            sVar269 = psVar139[3];
                            sVar270 = psVar139[4];
                            sVar273 = psVar139[5];
                            sVar274 = psVar139[6];
                            sVar277 = psVar139[7];
                            psVar139 = (short *)(*pauVar110 + lVar133);
                            sVar20 = *psVar139;
                            sVar21 = psVar139[1];
                            sVar22 = psVar139[2];
                            sVar23 = psVar139[3];
                            sVar24 = psVar139[4];
                            sVar25 = psVar139[5];
                            sVar26 = psVar139[6];
                            sVar27 = psVar139[7];
                            psVar139 = (short *)(lVar120 + lVar133);
                            sVar28 = *psVar139;
                            sVar29 = psVar139[1];
                            sVar30 = psVar139[2];
                            sVar31 = psVar139[3];
                            sVar32 = psVar139[4];
                            sVar33 = psVar139[5];
                            sVar34 = psVar139[6];
                            sVar35 = psVar139[7];
                            psVar139 = (short *)(lVar120 + lVar133);
                            sVar36 = *psVar139;
                            sVar37 = psVar139[1];
                            sVar38 = psVar139[2];
                            sVar39 = psVar139[3];
                            sVar40 = psVar139[4];
                            sVar41 = psVar139[5];
                            sVar42 = psVar139[6];
                            sVar43 = psVar139[7];
                            lVar133 = lVar133 + 0x10;
                            auVar175._0_2_ =
                                 ((ushort)(sVar20 < sVar36) * sVar36 |
                                 (ushort)(sVar20 >= sVar36) * sVar20) -
                                 ((ushort)(sVar28 < sVar193) * sVar28 |
                                 (ushort)(sVar28 >= sVar193) * sVar193);
                            auVar175._2_2_ =
                                 ((ushort)(sVar21 < sVar37) * sVar37 |
                                 (ushort)(sVar21 >= sVar37) * sVar21) -
                                 ((ushort)(sVar29 < sVar265) * sVar29 |
                                 (ushort)(sVar29 >= sVar265) * sVar265);
                            auVar175._4_2_ =
                                 ((ushort)(sVar22 < sVar38) * sVar38 |
                                 (ushort)(sVar22 >= sVar38) * sVar22) -
                                 ((ushort)(sVar30 < sVar266) * sVar30 |
                                 (ushort)(sVar30 >= sVar266) * sVar266);
                            auVar175._6_2_ =
                                 ((ushort)(sVar23 < sVar39) * sVar39 |
                                 (ushort)(sVar23 >= sVar39) * sVar23) -
                                 ((ushort)(sVar31 < sVar269) * sVar31 |
                                 (ushort)(sVar31 >= sVar269) * sVar269);
                            auVar175._8_2_ =
                                 ((ushort)(sVar24 < sVar40) * sVar40 |
                                 (ushort)(sVar24 >= sVar40) * sVar24) -
                                 ((ushort)(sVar32 < sVar270) * sVar32 |
                                 (ushort)(sVar32 >= sVar270) * sVar270);
                            auVar175._10_2_ =
                                 ((ushort)(sVar25 < sVar41) * sVar41 |
                                 (ushort)(sVar25 >= sVar41) * sVar25) -
                                 ((ushort)(sVar33 < sVar273) * sVar33 |
                                 (ushort)(sVar33 >= sVar273) * sVar273);
                            auVar175._12_2_ =
                                 ((ushort)(sVar26 < sVar42) * sVar42 |
                                 (ushort)(sVar26 >= sVar42) * sVar26) -
                                 ((ushort)(sVar34 < sVar274) * sVar34 |
                                 (ushort)(sVar34 >= sVar274) * sVar274);
                            auVar175._14_2_ =
                                 ((ushort)(sVar27 < sVar43) * sVar43 |
                                 (ushort)(sVar27 >= sVar43) * sVar27) -
                                 ((ushort)(sVar35 < sVar277) * sVar35 |
                                 (ushort)(sVar35 >= sVar277) * sVar277);
                            auVar339 = pmulhuw(auVar175,auVar175);
                            iVar132 = CONCAT22(auVar339._6_2_,auVar175._6_2_ * auVar175._6_2_);
                            Var81 = CONCAT64(CONCAT42(iVar132,auVar339._4_2_),
                                             CONCAT22(auVar175._4_2_ * auVar175._4_2_,
                                                      auVar175._6_2_ * auVar175._6_2_));
                            auVar70._4_8_ = (long)((unkuint10)Var81 >> 0x10);
                            auVar70._2_2_ = auVar339._2_2_;
                            auVar70._0_2_ = auVar175._2_2_ * auVar175._2_2_;
                            iVar137 = CONCAT22(auVar339._8_2_,auVar175._8_2_ * auVar175._8_2_);
                            auVar240._0_8_ =
                                 CONCAT26(auVar339._10_2_,
                                          CONCAT24(auVar175._10_2_ * auVar175._10_2_,iVar137));
                            auVar240._8_2_ = auVar175._12_2_ * auVar175._12_2_;
                            auVar240._10_2_ = auVar339._12_2_;
                            auVar253._12_2_ = auVar175._14_2_ * auVar175._14_2_;
                            auVar253._0_12_ = auVar240;
                            auVar253._14_2_ = auVar339._14_2_;
                            fVar315 = fVar315 + (float)CONCAT22(auVar339._0_2_,
                                                                auVar175._0_2_ * auVar175._0_2_);
                            fVar321 = fVar321 + (float)auVar70._0_4_;
                            fVar322 = fVar322 + (float)(int)((unkuint10)Var81 >> 0x10);
                            fVar323 = fVar323 + (float)iVar132;
                            fVar305 = fVar305 + (float)iVar137;
                            fVar310 = fVar310 + (float)(int)((ulong)auVar240._0_8_ >> 0x20);
                            fVar312 = fVar312 + (float)auVar240._8_4_;
                            fVar314 = fVar314 + (float)auVar253._12_4_;
                          } while (lVar133 != 0x30);
                        }
                        auVar353._0_4_ = auVar216._0_4_ + fVar315;
                        auVar353._4_4_ = auVar216._4_4_ + fVar321;
                        auVar353._8_4_ = auVar216._8_4_ + fVar322;
                        auVar353._12_4_ = auVar216._12_4_ + fVar323;
                        fVar324 = fVar324 + fVar305;
                        fVar198 = fVar198 + fVar310;
                        fVar329 = fVar329 + fVar312;
                        fVar330 = fVar330 + fVar314;
                        pfVar130 = pfVar100 + 0x18;
                        if (*(int *)(puVar124 + -0x1c48) + -1 != *(int *)(puVar124 + -0x1c50)) {
                          auVar8._10_2_ = 0;
                          auVar8._0_10_ = auVar222._0_10_;
                          auVar8._12_2_ = sVar232;
                          auVar10._8_2_ = sVar231;
                          auVar10._0_8_ = auVar222._0_8_;
                          auVar10._10_4_ = auVar8._10_4_;
                          auVar71._6_8_ = 0;
                          auVar71._0_6_ = auVar10._8_6_;
                          auVar11._4_2_ = sVar230;
                          auVar11._0_4_ = auVar222._0_4_;
                          auVar11._6_8_ = SUB148(auVar71 << 0x40,6);
                          fVar305 = *(float *)(puVar124 + -0x1be8);
                          fVar315 = (float)(auVar222._0_4_ & 0xffff) * fVar305;
                          fVar321 = (float)auVar11._4_4_ * fVar305;
                          fVar322 = (float)auVar10._8_4_ * fVar305;
                          fVar323 = (float)(auVar8._10_4_ >> 0x10) * fVar305;
                          fVar310 = (float)uVar233 * fVar305;
                          fVar312 = (float)uVar234 * fVar305;
                          fVar314 = (float)uVar235 * fVar305;
                          fVar305 = (float)uVar236 * fVar305;
                          pEVar111 = this;
                          do {
                            fVar238 = pfVar100[5];
                            fVar268 = pfVar100[6];
                            fVar272 = pfVar100[7];
                            fVar276 = *pfVar100;
                            fVar237 = pfVar100[1];
                            fVar267 = pfVar100[2];
                            fVar271 = pfVar100[3];
                            pfVar136 = pfVar100 + 8;
                            *(float *)(pEVar111 + 0x10) =
                                 pfVar100[4] * fVar310 + *(float *)(pEVar111 + 0x10);
                            *(float *)(pEVar111 + 0x14) =
                                 fVar238 * fVar312 + *(float *)(pEVar111 + 0x14);
                            *(float *)(pEVar111 + 0x18) =
                                 fVar268 * fVar314 + *(float *)(pEVar111 + 0x18);
                            *(float *)(pEVar111 + 0x1c) =
                                 fVar272 * fVar305 + *(float *)(pEVar111 + 0x1c);
                            fVar238 = pfVar100[4];
                            fVar268 = pfVar100[5];
                            fVar272 = pfVar100[6];
                            fVar275 = pfVar100[7];
                            *(float *)pEVar111 = fVar276 * fVar315 + *(float *)pEVar111;
                            *(float *)(pEVar111 + 4) = fVar237 * fVar321 + *(float *)(pEVar111 + 4);
                            *(float *)(pEVar111 + 8) = fVar267 * fVar322 + *(float *)(pEVar111 + 8);
                            *(float *)(pEVar111 + 0xc) =
                                 fVar271 * fVar323 + *(float *)(pEVar111 + 0xc);
                            fVar276 = *pfVar100;
                            fVar237 = pfVar100[1];
                            fVar267 = pfVar100[2];
                            fVar271 = pfVar100[3];
                            *(float *)(pEVar111 + 0x70) = fVar238 + *(float *)(pEVar111 + 0x70);
                            *(float *)(pEVar111 + 0x74) = fVar268 + *(float *)(pEVar111 + 0x74);
                            *(float *)(pEVar111 + 0x78) = fVar272 + *(float *)(pEVar111 + 0x78);
                            *(float *)(pEVar111 + 0x7c) = fVar275 + *(float *)(pEVar111 + 0x7c);
                            *(float *)(pEVar111 + 0x60) = fVar276 + *(float *)(pEVar111 + 0x60);
                            *(float *)(pEVar111 + 100) = fVar237 + *(float *)(pEVar111 + 100);
                            *(float *)(pEVar111 + 0x68) = fVar267 + *(float *)(pEVar111 + 0x68);
                            *(float *)(pEVar111 + 0x6c) = fVar271 + *(float *)(pEVar111 + 0x6c);
                            pEVar111 = pEVar111 + 0x20;
                            pfVar100 = pfVar136;
                          } while (pfVar130 != pfVar136);
                          *(int *)(this + 0x120) = *(int *)(this + 0x120) + 1;
                          auVar223._0_4_ = fVar310 + *(float *)(this + 0xf0);
                          auVar223._4_4_ = fVar312 + *(float *)(this + 0xf4);
                          auVar223._8_4_ = fVar314 + *(float *)(this + 0xf8);
                          auVar223._12_4_ = fVar305 + *(float *)(this + 0xfc);
                          auVar176._0_4_ = fVar310 * fVar310 + *(float *)(this + 0xd0);
                          auVar176._4_4_ = fVar312 * fVar312 + *(float *)(this + 0xd4);
                          auVar176._8_4_ = fVar314 * fVar314 + *(float *)(this + 0xd8);
                          auVar176._12_4_ = fVar305 * fVar305 + *(float *)(this + 0xdc);
                          auVar289._0_4_ = fVar315 + *(float *)(this + 0xe0);
                          auVar289._4_4_ = fVar321 + *(float *)(this + 0xe4);
                          auVar289._8_4_ = fVar322 + *(float *)(this + 0xe8);
                          auVar289._12_4_ = fVar323 + *(float *)(this + 0xec);
                          auVar254._0_4_ = fVar315 * fVar315 + *(float *)(this + 0xc0);
                          auVar254._4_4_ = fVar321 * fVar321 + *(float *)(this + 0xc4);
                          auVar254._8_4_ = fVar322 * fVar322 + *(float *)(this + 200);
                          auVar254._12_4_ = fVar323 * fVar323 + *(float *)(this + 0xcc);
                          *(undefined1 (*) [16])(this + 0xf0) = auVar223;
                          *(undefined1 (*) [16])(this + 0xd0) = auVar176;
                          *(undefined1 (*) [16])(this + 0xc0) = auVar254;
                          *(undefined1 (*) [16])(this + 0xe0) = auVar289;
                        }
                      }
                      iVar135 = iVar135 + 1;
                      lVar138 = lVar138 + 0x30;
                      lVar120 = lVar120 + 0x30;
                      pVVar127 = pVVar127 + 0x10;
                      pfVar103 = pfVar103 + 0x18;
                      pfVar100 = pfVar130;
                    } while (iVar135 != 0x10);
                    pauVar110 = *(undefined1 (**) [16])(puVar124 + -0x1bd0);
                    lVar133 = *(long *)(puVar124 + -0x1b68);
                    pVVar109 = *(VInt16<3> **)(puVar124 + -0x1b60);
                    *pauVar110 = auVar353;
                    *(float *)pauVar110[1] = fVar324;
                    *(float *)(pauVar110[1] + 4) = fVar198;
                    *(float *)(pauVar110[1] + 8) = fVar329;
                    *(float *)(pauVar110[1] + 0xc) = fVar330;
                  }
                  else {
LAB_00107be7:
                    *(undefined1 *)
                     (*(long *)(puVar124 + -0x1ba8) + *(long *)(puVar124 + -0x1c70) * 2) = 0;
                  }
                  *(long *)(puVar124 + -0x1c70) = *(long *)(puVar124 + -0x1c70) + 1;
                  pVVar109 = pVVar109 + 0xc0;
                  lVar133 = lVar133 + -0xc0;
                  *(long *)(puVar124 + -0x1bd0) = *(long *)(puVar124 + -0x1bd0) + 0x40;
                  *(long *)(puVar124 + -0x1be0) = *(long *)(puVar124 + -0x1be0) + 0x10;
                } while (*(long *)(puVar124 + -0x1c70) != 3);
                uVar143 = *(uint *)(puVar124 + -0x1b90);
                lVar133 = *(long *)(puVar124 + -0x1b80) + -0x240;
                lVar120 = *(long *)(puVar124 + -0x1b78) + 0xc0;
                *(long *)(puVar124 + -0x1ba8) = *(long *)(puVar124 + -0x1ba8) + 6;
                lVar129 = *(long *)(puVar124 + -0x1b70) + 1;
              } while (lVar133 != -0x900);
              *(long *)(puVar124 + -0x1bf0) = *(long *)(puVar124 + -0x1bf0) + 1;
              puVar117 = *(undefined1 **)(puVar124 + -0x1b18);
              this = this + 0x140;
              pFVar113 = *(Float **)(puVar124 + -0x1b10);
              *(long *)(puVar124 + -0x1b28) = *(long *)(puVar124 + -0x1b28) + 0xc0;
            } while (*(long *)(puVar124 + -0x1b08) != *(long *)(puVar124 + -0x1bf0));
            lVar138 = 0;
            pauVar110 = (undefined1 (*) [16])(puVar117 + 0x18);
            *(undefined1 **)(puVar124 + -0x1bf8) = puVar117;
            pVVar109 = *(VInt16<3> **)(puVar124 + -0x1c68);
            *(Float **)(puVar124 + -0x1be0) = pFVar113;
            *(undefined8 *)(puVar124 + -0x1c70) = *(undefined8 *)(puVar124 + -0x1af8);
            auVar211 = *(undefined1 (*) [16])(puVar124 + -0x1ac8);
            puVar124[-0x1c28] = puVar124[-0x1c78] & 1;
            pauVar118 = *(undefined1 (**) [16])(puVar124 + -0x1af0);
            pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1aa0);
            lVar120 = *(long *)(puVar124 + -0x1ad8);
            auVar339 = *(undefined1 (*) [16])(puVar124 + -0x1ab8);
            do {
              if ((*pauVar118)[0] != '\0') {
                *(undefined1 (**) [16])(puVar124 + -0x1c18) = pauVar110;
                auVar216 = pauVar123[-1];
                lVar129 = 0;
                lVar133 = 0;
                *(long *)(puVar124 + -0x1c40) = lVar138;
                auVar155 = *pauVar123;
                *(undefined1 (**) [16])(puVar124 + -0x1c08) = pauVar123;
                lVar138 = *(long *)(puVar124 + -0x1b20);
                *(undefined1 (**) [16])(puVar124 + -0x1be8) = pauVar118;
                do {
                  auVar356 = auVar155;
                  auVar359 = auVar216;
                  if (*(long *)(puVar124 + -0x1c78) == 0) {
LAB_00107da4:
                    auVar352._4_4_ = -(uint)(auVar359._4_4_ < auVar339._4_4_);
                    auVar352._0_4_ = -(uint)(auVar359._0_4_ < auVar339._0_4_);
                    auVar352._8_4_ = -(uint)(auVar359._8_4_ < auVar339._8_4_);
                    auVar352._12_4_ = -(uint)(auVar359._12_4_ < auVar339._12_4_);
                    auVar161._4_4_ = -(uint)(auVar356._4_4_ < auVar211._4_4_);
                    auVar161._0_4_ = -(uint)(auVar356._0_4_ < auVar211._0_4_);
                    auVar161._8_4_ = -(uint)(auVar356._8_4_ < auVar211._8_4_);
                    auVar161._12_4_ = -(uint)(auVar356._12_4_ < auVar211._12_4_);
                    uVar106 = movmskps((int)pauVar110,auVar352);
                    pauVar110 = (undefined1 (*) [16])(ulong)uVar106;
                    if (uVar106 == 0) {
                      uVar106 = movmskps(0,auVar161);
                      pauVar110 = (undefined1 (*) [16])(ulong)uVar106;
                      if (uVar106 == 0) goto LAB_001080b2;
                    }
                    auVar243 = packssdw(auVar352,auVar161);
                    *(long *)(puVar124 + -0x1c60) = lVar129;
                    iVar131 = 0;
                    *(long *)(puVar124 + -0x1c38) = lVar133;
                    cVar5 = puVar124[-0x1c28];
                    pauVar123 = (undefined1 (*) [16])&DAT_0010c468;
                    *(long *)(puVar124 + -0x1c50) = lVar138;
                    auVar341 = auVar243;
                    do {
                      if ((pauVar123[-1][10] == cVar5) &&
                         (*(int *)(pauVar123[-1] + 0xc) == *(int *)(puVar124 + -0x1c80))) {
                        bVar6 = (bool)pauVar123[-1][0xb];
                        pauVar110 = (undefined1 (*) [16])(ulong)bVar6;
                        if (*(long *)(puVar124 + -0x1c78) == 0) {
                          *(undefined8 *)(puVar124 + -0x1c90) = 0x107e4b;
                          EvaluateSingleLegality
                                    (*(VInt16<3> **)(puVar124 + -0x1c70),
                                     *(int *)(puVar124 + -0x1c58),(int *)pauVar123,bVar6,pVVar109,
                                     (Int16CompFlag *)(puVar124 + -0x1a58));
                        }
                        else {
                          *(undefined1 **)(puVar124 + -0x1c98) = puVar124 + -0x1a58;
                          *(undefined8 *)(puVar124 + -0x1ca0) = 0x108149;
                          pauVar110 = pauVar123;
                          EvaluatePartitionedLegality
                                    (*(VInt16<3> **)(puVar124 + -0x1c70),
                                     *(VInt16<3> **)(puVar124 + -0x1c50),
                                     *(int *)(puVar124 + -0x1c58),(int *)pauVar123,bVar6,pVVar109,
                                     *(Int16CompFlag **)(puVar124 + -0x1c98));
                        }
                        auVar162 = *(undefined1 (*) [16])(puVar124 + -0x1a58) & auVar341;
                        if ((((((((((((((((auVar162 >> 7 & (undefined1  [16])0x1) !=
                                          (undefined1  [16])0x0 ||
                                         (auVar162 >> 0xf & (undefined1  [16])0x1) !=
                                         (undefined1  [16])0x0) ||
                                        (auVar162 >> 0x17 & (undefined1  [16])0x1) !=
                                        (undefined1  [16])0x0) ||
                                       (auVar162 >> 0x1f & (undefined1  [16])0x1) !=
                                       (undefined1  [16])0x0) ||
                                      (auVar162 >> 0x27 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                                     (auVar162 >> 0x2f & (undefined1  [16])0x1) !=
                                     (undefined1  [16])0x0) ||
                                    (auVar162 >> 0x37 & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                   (auVar162 >> 0x3f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                                  (auVar162 >> 0x47 & (undefined1  [16])0x1) !=
                                  (undefined1  [16])0x0) ||
                                 (auVar162 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                 ) || (auVar162 >> 0x57 & (undefined1  [16])0x1) !=
                                      (undefined1  [16])0x0) ||
                               (auVar162 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                              || (auVar162 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                              ) || (auVar162 >> 0x6f & (undefined1  [16])0x1) !=
                                   (undefined1  [16])0x0) ||
                            (auVar162 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            auVar162[0xf] < '\0') {
                          auVar207._0_12_ = auVar162._0_12_;
                          auVar207._12_2_ = auVar162._6_2_;
                          auVar207._14_2_ = auVar162._6_2_;
                          auVar206._12_4_ = auVar207._12_4_;
                          auVar206._0_10_ = auVar162._0_10_;
                          auVar206._10_2_ = auVar162._4_2_;
                          auVar205._10_6_ = auVar206._10_6_;
                          auVar205._0_8_ = auVar162._0_8_;
                          auVar205._8_2_ = auVar162._4_2_;
                          auVar66._4_8_ = auVar205._8_8_;
                          auVar66._2_2_ = auVar162._2_2_;
                          auVar66._0_2_ = auVar162._2_2_;
                          uVar106 = CONCAT22(auVar162._0_2_,auVar162._0_2_);
                          lVar133 = 0x60;
                          lVar138 = 0x30;
                          auVar246._0_4_ = auVar359._0_4_ & uVar106;
                          auVar246._4_4_ = auVar359._4_4_ & auVar66._0_4_;
                          auVar246._8_4_ = auVar359._8_4_ & auVar205._8_4_;
                          auVar246._12_4_ = auVar359._12_4_ & auVar206._12_4_;
                          auVar208._0_4_ = ~uVar106 & auVar339._0_4_;
                          auVar208._4_4_ = ~auVar66._0_4_ & auVar339._4_4_;
                          auVar208._8_4_ = ~auVar205._8_4_ & auVar339._8_4_;
                          auVar208._12_4_ = ~auVar206._12_4_ & auVar339._12_4_;
                          if (*(long *)(puVar124 + -0x1bf0) != 1) {
                            lVar133 = 0xc0;
                          }
                          lVar129 = 0;
                          auVar339 = auVar208 | auVar246;
                          uVar106 = CONCAT22(auVar162._8_2_,auVar162._8_2_);
                          auVar199._0_8_ =
                               CONCAT26(auVar162._10_2_,CONCAT24(auVar162._10_2_,uVar106));
                          auVar199._8_2_ = auVar162._12_2_;
                          auVar199._10_2_ = auVar162._12_2_;
                          auVar209._14_2_ = auVar162._14_2_;
                          auVar209._12_2_ = auVar209._14_2_;
                          auVar209._0_12_ = auVar199;
                          auVar247._0_4_ = auVar356._0_4_ & uVar106;
                          uVar146 = (uint)((ulong)auVar199._0_8_ >> 0x20);
                          auVar247._4_4_ = auVar356._4_4_ & uVar146;
                          auVar247._8_4_ = auVar356._8_4_ & auVar199._8_4_;
                          auVar247._12_4_ = auVar356._12_4_ & auVar209._12_4_;
                          auVar210._0_4_ = ~uVar106 & auVar211._0_4_;
                          auVar210._4_4_ = ~uVar146 & auVar211._4_4_;
                          auVar210._8_4_ = ~auVar199._8_4_ & auVar211._8_4_;
                          auVar210._12_4_ = ~auVar209._12_4_ & auVar211._12_4_;
                          auVar211 = auVar210 | auVar247;
                          auVar212._0_4_ = CONCAT22((short)iVar131,(short)iVar131);
                          auVar212._4_4_ = auVar212._0_4_;
                          auVar212._8_4_ = auVar212._0_4_;
                          auVar212._12_4_ = auVar212._0_4_;
                          *(undefined1 (*) [16])(puVar124 + -0x1a78) =
                               auVar212 & auVar162 |
                               ~auVar162 & *(undefined1 (*) [16])(puVar124 + -0x1a78);
                          auVar213._0_4_ =
                               CONCAT22((short)*(undefined4 *)(puVar124 + -0x1bc0),
                                        (short)*(undefined4 *)(puVar124 + -0x1bc0));
                          auVar213._4_4_ = auVar213._0_4_;
                          auVar213._8_4_ = auVar213._0_4_;
                          auVar213._12_4_ = auVar213._0_4_;
                          *(undefined1 (*) [16])(puVar124 + -0x1a68) =
                               auVar213 & auVar162 |
                               ~auVar162 & *(undefined1 (*) [16])(puVar124 + -0x1a68);
                          lVar105 = lVar129;
                          do {
                            do {
                              lVar97 = lVar129 + 0x10;
                              *(undefined1 (*) [16])(lVar129 + lVar120) =
                                   *(undefined1 (*) [16])(pVVar109 + lVar129) & auVar162 |
                                   ~auVar162 & *(undefined1 (*) [16])(lVar129 + lVar120);
                              lVar98 = lVar105;
                              lVar129 = lVar97;
                            } while (lVar138 != lVar97);
                            do {
                              lVar129 = lVar98 + 0x10;
                              *(undefined1 (*) [16])(puVar124 + lVar98 + -0x1948) =
                                   *(undefined1 (*) [16])(puVar124 + lVar98 + 0x3b8) & auVar162 |
                                   ~auVar162 & *(undefined1 (*) [16])(puVar124 + lVar98 + -0x1948);
                              lVar98 = lVar129;
                            } while (lVar138 != lVar129);
                            lVar129 = lVar105 + 0x60;
                            lVar138 = lVar138 + 0x60;
                            lVar105 = lVar129;
                          } while (lVar129 != lVar133);
                          lVar138 = *(long *)(puVar124 + -0x1c60);
                          uVar106 = 0;
                          pauVar118 = *(undefined1 (**) [16])(puVar124 + -0x1b88);
                          lVar133 = *(long *)(puVar124 + -0x1c40);
                          pauVar110 = (undefined1 (*) [16])(*(long *)(puVar124 + -0x1bb8) - lVar138)
                          ;
                          do {
                            if ((uVar143 >> (uVar106 & 0x1f) & 1) == 0) {
                              auVar280 = *(undefined1 (*) [16])(*pauVar110 + lVar133 + lVar138);
                            }
                            else {
                              auVar280 = *pauVar110;
                            }
                            uVar106 = uVar106 + 1;
                            *pauVar118 = auVar280 & auVar162 | ~auVar162 & *pauVar118;
                            pauVar110 = pauVar110 + 1;
                            pauVar118 = pauVar118 + 1;
                          } while (uVar106 != 0x10);
                          auVar243 = ~auVar162 & auVar243;
                          if ((((((((((((((((auVar243 >> 7 & (undefined1  [16])0x1) ==
                                            (undefined1  [16])0x0 &&
                                           (auVar243 >> 0xf & (undefined1  [16])0x1) ==
                                           (undefined1  [16])0x0) &&
                                          (auVar243 >> 0x17 & (undefined1  [16])0x1) ==
                                          (undefined1  [16])0x0) &&
                                         (auVar243 >> 0x1f & (undefined1  [16])0x1) ==
                                         (undefined1  [16])0x0) &&
                                        (auVar243 >> 0x27 & (undefined1  [16])0x1) ==
                                        (undefined1  [16])0x0) &&
                                       (auVar243 >> 0x2f & (undefined1  [16])0x1) ==
                                       (undefined1  [16])0x0) &&
                                      (auVar243 >> 0x37 & (undefined1  [16])0x1) ==
                                      (undefined1  [16])0x0) &&
                                     (auVar243 >> 0x3f & (undefined1  [16])0x1) ==
                                     (undefined1  [16])0x0) &&
                                    (auVar243 >> 0x47 & (undefined1  [16])0x1) ==
                                    (undefined1  [16])0x0) &&
                                   (auVar243 >> 0x4f & (undefined1  [16])0x1) ==
                                   (undefined1  [16])0x0) &&
                                  (auVar243 >> 0x57 & (undefined1  [16])0x1) ==
                                  (undefined1  [16])0x0) &&
                                 (auVar243 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0
                                 ) && (auVar243 >> 0x67 & (undefined1  [16])0x1) ==
                                      (undefined1  [16])0x0) &&
                               (auVar243 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0)
                              && (auVar243 >> 0x77 & (undefined1  [16])0x1) == (undefined1  [16])0x0
                              ) && -1 < auVar243[0xf]) break;
                        }
                      }
                      iVar131 = iVar131 + 1;
                      pauVar123 = (undefined1 (*) [16])(pauVar123[1] + 4);
                    } while (iVar131 != 0xe);
                    lVar133 = *(long *)(puVar124 + -0x1c38);
                    lVar138 = *(long *)(puVar124 + -0x1c50);
                    lVar129 = *(long *)(puVar124 + -0x1c60);
                  }
                  else if (*(char *)(*(long *)(puVar124 + -0x1bf8) + 1 + lVar133 * 2) != '\0') {
                    pauVar110 = (undefined1 (*) [16])(lVar133 * 0x40);
                    pfVar103 = (float *)(puVar124 + -0x1158 + (long)pauVar110);
                    auVar359._0_4_ = auVar216._0_4_ + *pfVar103;
                    auVar359._4_4_ = auVar216._4_4_ + pfVar103[1];
                    auVar359._8_4_ = auVar216._8_4_ + pfVar103[2];
                    auVar359._12_4_ = auVar216._12_4_ + pfVar103[3];
                    pfVar103 = (float *)(puVar124 + -0x1148 + (long)pauVar110);
                    auVar356._0_4_ = auVar155._0_4_ + *pfVar103;
                    auVar356._4_4_ = auVar155._4_4_ + pfVar103[1];
                    auVar356._8_4_ = auVar155._8_4_ + pfVar103[2];
                    auVar356._12_4_ = auVar155._12_4_ + pfVar103[3];
                    goto LAB_00107da4;
                  }
LAB_001080b2:
                  lVar133 = lVar133 + 1;
                  lVar138 = lVar138 + 0xc0;
                  lVar129 = lVar129 + -0x100;
                } while ((int)lVar133 < *(int *)(puVar124 + -0x1bd4));
                pauVar110 = *(undefined1 (**) [16])(puVar124 + -0x1c18);
                lVar138 = *(long *)(puVar124 + -0x1c40);
                pauVar123 = *(undefined1 (**) [16])(puVar124 + -0x1c08);
                pauVar118 = *(undefined1 (**) [16])(puVar124 + -0x1be8);
              }
              pauVar118 = (undefined1 (*) [16])(*pauVar118 + 2);
              lVar138 = lVar138 + 0x100;
              pauVar123 = pauVar123 + 4;
              *(long *)(puVar124 + -0x1c70) = *(long *)(puVar124 + -0x1c70) + 0xc0;
            } while (pauVar110 != pauVar118);
            puVar117 = *(undefined1 **)(puVar124 + -0x1bf8);
            pFVar113 = *(Float **)(puVar124 + -0x1be0);
            *(long *)(puVar124 + -0x1bc0) = *(long *)(puVar124 + -0x1bc0) + 1;
          } while (*(long *)(puVar124 + -0x1ae8) != *(long *)(puVar124 + -0x1bc0));
          puVar122 = *(undefined1 **)(puVar124 + -0x1a98);
          iVar131 = *(int *)(puVar124 + -0x1bd4);
          pFVar102 = *(Float **)(puVar124 + -0x1c68);
        }
        *(long *)(puVar124 + -0x1c80) = *(long *)(puVar124 + -0x1c80) + -1;
      } while (*(long *)(puVar124 + -0x1c80) != -1);
      puVar134 = *(undefined2 **)(puVar124 + -0x1b20);
      if (*(long *)(puVar124 + -0x1c78) != 0) {
        psVar139 = *(short **)(puVar124 + -0x1ad8);
        lVar138 = 0;
        lVar120 = 0;
        do {
          uVar119 = (ulong)*(ushort *)(puVar124 + lVar138 + -0x1a78);
          uVar233 = *(ushort *)(puVar124 + lVar138 + -0x1a68);
          *(undefined1 (*) [16])(puVar124 + 0x13e8) = (undefined1  [16])0x0;
          lVar133 = uVar119 * 0x290;
          sVar270 = *psVar139;
          cVar5 = (&DAT_0010c462)[uVar119 * 0x14];
          sVar273 = psVar139[0x10];
          sVar193 = psVar139[8];
          *(int *)(puVar124 + -0x1c48) = (int)psVar139[0x40];
          sVar274 = psVar139[0x20];
          sVar265 = psVar139[0x18];
          *(int *)(puVar124 + -0x1c50) = (int)psVar139[0x48];
          sVar277 = psVar139[0x30];
          uVar104 = (-(ulong)(cVar5 == '\0') & 0xffffffffffffffef) + 0x52;
          sVar266 = psVar139[0x28];
          auVar83._6_2_ = sVar266;
          auVar83._4_2_ = sVar274;
          *(int *)(puVar124 + -0x1c44) = (int)psVar139[0x50];
          sVar269 = psVar139[0x38];
          auVar83._10_2_ = sVar269;
          auVar83._8_2_ = sVar277;
          *(int *)(puVar124 + -0x1bd8) = (int)psVar139[0x58];
          auVar83._0_4_ = CONCAT22(sVar265,sVar273);
          auVar83._12_4_ = 0;
          *(undefined2 *)(puVar124 + -0x1c78) = (&BC7Data::g_hdrModes)[uVar119 * 10];
          uVar143 = 0;
          auVar229._0_12_ = SUB1612(auVar83 << 0x20,0);
          auVar229._12_2_ = sVar265;
          auVar229._14_2_ = -(ushort)(sVar265 < 0);
          auVar228._12_4_ = auVar229._12_4_;
          auVar228._0_10_ = SUB1610(auVar83 << 0x20,0);
          auVar228._10_2_ = -(ushort)(sVar273 < 0);
          auVar84._4_2_ = sVar273;
          auVar84._0_4_ = CONCAT22(sVar265,sVar273);
          auVar84._6_6_ = auVar228._10_6_;
          auVar80._4_8_ = auVar84._4_8_;
          auVar80._2_2_ = -(ushort)(sVar193 < 0);
          auVar80._0_2_ = sVar193;
          *(short *)(puVar124 + -0x1c58) = sVar274;
          *(ushort *)(puVar124 + -0x1c56) = -(ushort)(sVar274 < 0);
          *(undefined4 *)(puVar124 + -0x1c70) = auVar228._12_4_;
          *(uint *)(puVar124 + -0x1bf8) = CONCAT22(-(ushort)(sVar270 < 0),sVar270);
          *(int *)(puVar124 + -0x1c28) = auVar84._4_4_;
          *(short *)(puVar124 + -0x1c5c) = sVar269;
          *(ushort *)(puVar124 + -0x1c5a) = -(ushort)(sVar269 < 0);
          *(int *)(puVar124 + -0x1c38) = auVar80._0_4_;
          *(short *)(puVar124 + -0x1c58) = sVar277;
          *(ushort *)(puVar124 + -0x1c56) = -(ushort)(sVar277 < 0);
          *(short *)(puVar124 + -0x1c7c) = sVar266;
          *(ushort *)(puVar124 + -0x1c7a) = -(ushort)(sVar266 < 0);
          uVar119 = 0;
          while( true ) {
            uVar106 = *(uint *)(BC6HData::g_modeDescriptors + uVar119 * 8 + lVar133);
            *(int *)(puVar124 + -0x1c40) = (int)uVar119;
            if (uVar106 < 0xf) {
                    /* WARNING: Could not recover jumptable at 0x00109253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_00115d98 +
                        *(int *)(&DAT_00115d98 +
                                (ulong)*(uint *)(BC6HData::g_modeDescriptors + uVar119 * 8 + lVar133
                                                ) * 4)))
                        (uVar119,uVar143,
                         &DAT_00115d98 +
                         *(int *)(&DAT_00115d98 +
                                 (ulong)*(uint *)(BC6HData::g_modeDescriptors +
                                                 uVar119 * 8 + lVar133) * 4));
              return;
            }
            *(uint *)(puVar124 + (long)((int)uVar119 >> 5) * 4 + 0x13e8) =
                 (0 >> (*(byte *)(lVar133 + 0x117b04 + uVar119 * 8) & 0x1f) & 1U) <<
                 ((byte)uVar119 & 0x1f) | uVar143;
            if (uVar104 == uVar119 + 1) break;
            uVar143 = *(uint *)(puVar124 +
                               (long)(*(int *)(puVar124 + -0x1c40) + 1 >> 5) * 4 + 0x13e8);
            uVar119 = uVar119 + 1;
          }
          if (cVar5 == '\0') {
            *(undefined4 *)(puVar124 + -0x1c80) = 0;
            iVar131 = 4;
          }
          else {
            iVar131 = 3;
            *(undefined4 *)(puVar124 + -0x1c80) =
                 *(undefined4 *)(BC7Data::g_fixupIndexes2 + (ulong)uVar233 * 4);
          }
          iVar135 = iVar131 + -1;
          puVar128 = (ushort *)(*(long *)(puVar124 + -0x1b88) + lVar138);
          iVar142 = 0;
          do {
            while( true ) {
              uVar143 = (uint)uVar104;
              uVar233 = *puVar128;
              iVar132 = (int)uVar143 >> 5;
              if ((iVar142 != 0) && (*(int *)(puVar124 + -0x1c80) != iVar142)) break;
              *(int *)(puVar124 + -0x1c78) = iVar132;
              iVar137 = ((uVar143 & 0x1f) - 0x20) + iVar135;
              *(uint *)(puVar124 + (long)iVar132 * 4 + 0x13e8) =
                   *(uint *)(puVar124 + (long)iVar132 * 4 + 0x13e8) |
                   (uint)uVar233 << ((byte)uVar104 & 0x1f);
              if (0 < iVar137) {
                *(uint *)(puVar124 + (long)(*(int *)(puVar124 + -0x1c78) + 1) * 4 + 0x13e8) =
                     *(uint *)(puVar124 + (long)(*(int *)(puVar124 + -0x1c78) + 1) * 4 + 0x13e8) |
                     (uint)(uVar233 >> ((char)iVar135 - (char)iVar137 & 0x1fU));
              }
              iVar142 = iVar142 + 1;
              uVar104 = (ulong)(uVar143 + iVar135);
              puVar128 = puVar128 + 8;
              if (iVar142 == 0x10) goto LAB_001093db;
            }
            *(int *)(puVar124 + -0x1c78) = iVar132;
            iVar137 = iVar131 + -0x20 + (uVar143 & 0x1f);
            *(uint *)(puVar124 + (long)iVar132 * 4 + 0x13e8) =
                 *(uint *)(puVar124 + (long)iVar132 * 4 + 0x13e8) |
                 (uint)uVar233 << ((byte)uVar104 & 0x1f);
            if (0 < iVar137) {
              *(uint *)(puVar124 + (long)(*(int *)(puVar124 + -0x1c78) + 1) * 4 + 0x13e8) =
                   *(uint *)(puVar124 + (long)(*(int *)(puVar124 + -0x1c78) + 1) * 4 + 0x13e8) |
                   (uint)(uVar233 >> ((char)iVar131 - (char)iVar137 & 0x1fU));
            }
            iVar142 = iVar142 + 1;
            uVar104 = (ulong)(uVar143 + iVar131);
            puVar128 = puVar128 + 8;
          } while (iVar142 != 0x10);
LAB_001093db:
          lVar129 = 0;
          lVar133 = *(long *)(puVar124 + -0x1aa8) + lVar120;
          do {
            uVar143 = *(uint *)(*(long *)(puVar124 + -0x1bb8) + lVar129);
            lVar105 = 0;
            do {
              *(char *)(lVar133 + lVar105) = (char)(uVar143 >> ((char)lVar105 * '\b' & 0x1fU));
              lVar105 = lVar105 + 1;
            } while (lVar105 != 4);
            lVar129 = lVar129 + 4;
            lVar133 = lVar133 + 4;
          } while (lVar129 != 0x10);
          lVar138 = lVar138 + 2;
          lVar120 = lVar120 + 0x10;
          psVar139 = psVar139 + 1;
          if (lVar138 == 0x10) {
            *(undefined4 *)(puVar124 + -0x1a8c) = *(undefined4 *)(puVar124 + -0x1a90);
            MXCSR = *(undefined4 *)(puVar124 + -0x1a8c);
            if (*(long *)(puVar124 + 0x4ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar124 + -0x1c90) = 0x1094a6;
            __stack_chk_fail();
          }
        } while( true );
      }
      *(undefined8 *)(puVar124 + -0x1c78) = 1;
    } while( true );
  }
  goto LAB_00107215;
LAB_00107fec:
  do {
    pEVar126 = pEVar125 + 0x1e0;
    *(undefined8 *)(puVar124 + -0x1c90) = 0x107ffb;
    EndpointSelector<3,8>::FinishDirection(pEVar125);
    pEVar125 = pEVar126;
  } while (pEVar126 != pEVar116);
  iVar131 = 2;
  fVar324 = _LC29;
  fVar198 = _UNK_0011b734;
  fVar329 = _UNK_0011b738;
  fVar330 = _UNK_0011b73c;
  goto LAB_0010730b;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::BC7Computer::TryDualPlane(unsigned int, cvtt::ParallelMath::VInt16<2> const (*)
   [4], cvtt::ParallelMath::Float const (*) [4], float const*, cvtt::BC7EncodingPlan const&, int,
   cvtt::Internal::BC67::WorkInfo&, cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::BC7Computer::TryDualPlane
               (uint param_1,VInt16<2> *param_2,Float *param_3,float *param_4,
               BC7EncodingPlan *param_5,int param_6,WorkInfo *param_7,
               RoundTowardNearestForScope *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  BC7EncodingPlan BVar5;
  BC7EncodingPlan BVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  BC7EncodingPlan BVar15;
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  short sVar44;
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  undefined1 auVar51 [14];
  undefined1 auVar52 [14];
  undefined1 auVar53 [14];
  undefined1 auVar54 [14];
  undefined1 auVar55 [12];
  undefined8 uVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  bool bVar62;
  bool bVar63;
  bool bVar64;
  bool bVar65;
  bool bVar66;
  VInt16 aVVar67 [16];
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined4 uVar91;
  int iVar92;
  uint uVar93;
  long lVar94;
  EndpointSelector<3,8> *pEVar95;
  IndexSelector<3> *pIVar96;
  float *pfVar97;
  WorkInfo *pWVar98;
  EndpointSelector<3,8> *pEVar99;
  short sVar100;
  int iVar101;
  uint uVar102;
  int iVar103;
  float *pfVar104;
  float *pfVar105;
  ulong uVar106;
  Float *pFVar107;
  IndexSelector<3> *pIVar108;
  undefined1 (*pauVar109) [16];
  long lVar110;
  short sVar111;
  float *pfVar112;
  VInt16<2> *pVVar113;
  IndexSelector<3> *pIVar114;
  byte bVar115;
  Float *pFVar116;
  Float *pFVar117;
  int iVar118;
  Float *pFVar119;
  int *piVar120;
  ushort *puVar121;
  long lVar122;
  Float *pFVar123;
  long lVar124;
  IndexSelector<3> *pIVar125;
  Float *pFVar126;
  ushort uVar127;
  long lVar128;
  long in_FS_OFFSET;
  uint uVar129;
  uint uVar130;
  uint uVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  uint uVar135;
  short sVar136;
  short sVar154;
  short sVar155;
  short sVar156;
  short sVar157;
  short sVar158;
  short sVar159;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  short sVar160;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  float fVar175;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  float fVar176;
  float fVar179;
  float fVar192;
  float fVar194;
  float fVar196;
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  float fVar177;
  float fVar178;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  float fVar193;
  float fVar195;
  float fVar197;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  ushort uVar198;
  short sVar199;
  short sVar200;
  short sVar201;
  float fVar202;
  short sVar208;
  float fVar203;
  float fVar204;
  ushort uVar209;
  short sVar210;
  short sVar213;
  ushort uVar214;
  short sVar215;
  float fVar218;
  short sVar220;
  float fVar219;
  ushort uVar221;
  short sVar222;
  ushort uVar225;
  ushort uVar226;
  short sVar227;
  ushort uVar228;
  float fVar231;
  ushort uVar233;
  ushort uVar234;
  float fVar232;
  ushort uVar235;
  short sVar236;
  ushort uVar239;
  ushort uVar240;
  ushort uVar241;
  short sVar242;
  float fVar245;
  ushort uVar247;
  ushort uVar248;
  float fVar246;
  ushort uVar249;
  short sVar250;
  undefined1 auVar205 [16];
  short sVar211;
  short sVar212;
  short sVar216;
  short sVar217;
  short sVar223;
  short sVar224;
  short sVar229;
  short sVar230;
  short sVar237;
  short sVar238;
  short sVar243;
  short sVar244;
  short sVar251;
  short sVar252;
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  short sVar256;
  float fVar253;
  short sVar257;
  short sVar259;
  float fVar258;
  float fVar260;
  float fVar261;
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  float fVar262;
  float fVar267;
  float fVar268;
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  float fVar269;
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  float fVar273;
  float fVar274;
  float fVar278;
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 local_20b8 [8];
  float fStack_20b0;
  float fStack_20ac;
  undefined1 local_20a8 [8];
  float fStack_20a0;
  float fStack_209c;
  short local_2098;
  short sStack_2096;
  short sStack_2094;
  short sStack_2092;
  short sStack_2090;
  short sStack_208e;
  short sStack_208c;
  short sStack_208a;
  short local_2088;
  short sStack_2086;
  short sStack_2084;
  short sStack_2082;
  short sStack_2080;
  short sStack_207e;
  short sStack_207c;
  short sStack_207a;
  short local_2078;
  short local_2068;
  undefined1 local_2048 [16];
  undefined1 local_2038 [16];
  undefined1 local_1ff8 [8];
  float fStack_1ff0;
  float fStack_1fec;
  undefined1 local_1fe8 [8];
  float fStack_1fe0;
  float fStack_1fdc;
  undefined1 local_1fd8 [8];
  float fStack_1fd0;
  float fStack_1fcc;
  undefined1 local_1fc8 [8];
  float fStack_1fc0;
  float fStack_1fbc;
  undefined1 local_1fb8 [8];
  float fStack_1fb0;
  float fStack_1fac;
  float local_1f78;
  float fStack_1f74;
  float fStack_1f70;
  float fStack_1f6c;
  float local_1f68;
  float fStack_1f64;
  float fStack_1f60;
  float fStack_1f5c;
  float local_1f58;
  float fStack_1f54;
  float fStack_1f50;
  float fStack_1f4c;
  float local_1f48;
  float fStack_1f44;
  float fStack_1f40;
  float fStack_1f3c;
  float local_1f38;
  float fStack_1f34;
  float fStack_1f30;
  float fStack_1f2c;
  float local_1f28;
  float fStack_1f24;
  float fStack_1f20;
  float fStack_1f1c;
  float local_1f18;
  float fStack_1f14;
  float fStack_1f10;
  float fStack_1f0c;
  float local_1f08;
  float fStack_1f04;
  float fStack_1f00;
  float fStack_1efc;
  float local_1ee8;
  float fStack_1ee4;
  float fStack_1ee0;
  float fStack_1edc;
  float local_1ed8;
  float fStack_1ed4;
  float fStack_1ed0;
  float fStack_1ecc;
  float local_1ec8;
  float fStack_1ec4;
  float fStack_1ec0;
  float fStack_1ebc;
  float local_1e98;
  float fStack_1e94;
  float fStack_1e90;
  float fStack_1e8c;
  int local_1e68;
  float local_1e08;
  float fStack_1e04;
  float fStack_1e00;
  float fStack_1dfc;
  undefined1 local_1d78 [8];
  undefined8 uStack_1d70;
  undefined1 local_1d68 [8];
  undefined8 uStack_1d60;
  undefined1 local_1d58 [8];
  undefined8 uStack_1d50;
  undefined1 local_1d48 [8];
  undefined8 uStack_1d40;
  short local_1d34;
  int local_1d20;
  long local_1d10;
  long local_1ce8;
  uint local_1cd8;
  int local_1cd4;
  uint local_1c40 [2];
  undefined8 local_1c38;
  undefined4 local_1c30;
  float local_1c2c;
  float local_1c28 [4];
  ushort local_1c18;
  ushort uStack_1c16;
  ushort uStack_1c14;
  ushort uStack_1c12;
  ushort uStack_1c10;
  ushort uStack_1c0e;
  ushort uStack_1c0c;
  ushort uStack_1c0a;
  ushort local_1c08;
  ushort uStack_1c06;
  ushort uStack_1c04;
  ushort uStack_1c02;
  ushort uStack_1c00;
  ushort uStack_1bfe;
  ushort uStack_1bfc;
  ushort uStack_1bfa;
  VInt16 local_1bf8 [16];
  undefined1 local_1be8 [16];
  short local_1bd8 [11];
  ushort uStack_1bc2;
  ushort uStack_1bc0;
  ushort uStack_1bbe;
  ushort uStack_1bbc;
  ushort uStack_1bba;
  short local_1bb8;
  short sStack_1bb6;
  short sStack_1bb4;
  short sStack_1bb2;
  short sStack_1bb0;
  short sStack_1bae;
  short sStack_1bac;
  short sStack_1baa;
  ushort local_1ba8;
  ushort uStack_1ba6;
  ushort uStack_1ba4;
  ushort uStack_1ba2;
  ushort uStack_1ba0;
  ushort uStack_1b9e;
  ushort uStack_1b9c;
  ushort uStack_1b9a;
  ushort local_1b98 [24];
  VInt16<2> local_1b68 [48];
  VInt16<2> local_1b38 [48];
  undefined1 local_1b08 [16];
  undefined1 local_1af8 [16];
  undefined1 local_1ae8 [16];
  undefined1 local_1ad8 [16];
  undefined1 local_1ac8 [16];
  undefined1 local_1ab8 [16];
  undefined1 local_1aa8 [16];
  undefined1 local_1a98 [16];
  undefined1 local_1a88 [16];
  undefined1 local_1a78 [16];
  undefined1 local_1a68 [16];
  undefined1 local_1a58 [16];
  undefined1 local_1a48 [48];
  undefined1 local_1a18 [16];
  undefined1 local_1a08 [48];
  undefined1 local_19d8 [16];
  undefined1 local_19c8 [8];
  float fStack_19c0;
  float fStack_19bc;
  undefined1 local_19b8 [8];
  float fStack_19b0;
  float fStack_19ac;
  undefined1 local_19a8 [8];
  float fStack_19a0;
  float fStack_199c;
  undefined1 local_1998 [8];
  float fStack_1990;
  float fStack_198c;
  undefined1 local_1988 [16];
  undefined1 local_1978 [16];
  undefined1 local_1968 [16];
  undefined1 local_1958 [16];
  undefined1 local_1948 [16];
  undefined1 local_1938 [16];
  int local_1928;
  float local_1924;
  undefined8 local_1920;
  undefined8 local_1918;
  undefined8 uStack_1910;
  undefined8 local_1908;
  undefined8 uStack_1900;
  undefined8 local_18f8;
  undefined8 uStack_18f0;
  undefined8 local_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 local_1898;
  undefined8 uStack_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined8 local_1868;
  undefined8 uStack_1860;
  Float local_1858 [4];
  undefined4 auStack_1854 [3];
  undefined1 local_1848 [16];
  undefined1 local_1838 [16];
  undefined1 local_1828 [16];
  undefined1 local_1818 [16];
  undefined1 local_1808 [16];
  Float local_17f8 [16];
  undefined1 auStack_17e8 [80];
  IndexSelector<3> local_1798 [256];
  IndexSelector<3> local_1698 [256];
  IndexSelector<3> local_1598 [256];
  IndexSelector<3> local_1498 [256];
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  int local_1278;
  undefined4 local_1274;
  undefined1 local_1268 [8];
  undefined8 uStack_1260;
  undefined1 local_1258 [16];
  undefined1 local_1248 [16];
  undefined1 local_1238 [16];
  undefined1 local_1228 [16];
  undefined1 local_1218 [16];
  Float local_1208 [16];
  undefined1 local_11f8 [16];
  undefined1 local_11e8 [16];
  undefined1 local_11d8 [16];
  undefined1 local_11c8 [16];
  undefined1 local_11b8 [16];
  undefined1 local_11a8 [8];
  float fStack_11a0;
  float fStack_119c;
  undefined1 local_1198 [8];
  float fStack_1190;
  float fStack_118c;
  undefined1 local_1188 [8];
  float fStack_1180;
  float fStack_117c;
  undefined1 local_1178 [8];
  float fStack_1170;
  float fStack_116c;
  undefined1 local_1168 [16];
  undefined1 local_1158 [16];
  int local_1148;
  float local_1144;
  EndpointSelector<3,8> local_1128 [16];
  undefined1 local_1118 [16];
  undefined1 local_1108 [16];
  undefined1 local_10f8 [16];
  undefined1 local_10e8 [16];
  undefined1 local_10d8 [16];
  EndpointSelector<3,8> local_10c8 [16];
  undefined1 local_10b8 [16];
  undefined1 local_10a8 [16];
  undefined1 local_1098 [16];
  undefined1 local_1088 [16];
  undefined1 local_1078 [16];
  EndpointSelector<3,8> local_1068 [192];
  undefined1 local_fa8 [8];
  float fStack_fa0;
  float fStack_f9c;
  undefined1 local_f98 [8];
  float fStack_f90;
  float fStack_f8c;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  float local_f68;
  float fStack_f64;
  float fStack_f60;
  float fStack_f5c;
  float local_f58;
  float fStack_f54;
  float fStack_f50;
  float fStack_f4c;
  Float local_f48 [768];
  Float local_c48 [96];
  float local_be8 [360];
  Float local_648 [1536];
  Float local_48 [8];
  long local_40;
  
  auVar137 = *(undefined1 (*) [16])param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar92 = 1;
  if (0 < param_6) {
    iVar92 = param_6;
  }
  local_1d34 = 4;
  local_1c28[0] = auVar137._0_4_ * auVar137._0_4_;
  local_1c28[1] = auVar137._4_4_ * auVar137._4_4_;
  local_1c28[2] = auVar137._8_4_ * auVar137._8_4_;
  local_1c28[3] = auVar137._12_4_ * auVar137._12_4_;
  do {
    local_1d10 = 0;
    do {
      if (local_1d34 == 4) {
        BVar6 = param_5[local_1d10 * 2 + 0x30];
        BVar5 = param_5[local_1d10 * 2 + 0x31];
        BVar15 = (BC7EncodingPlan)((byte)BVar6 | (byte)BVar5);
      }
      else {
        BVar5 = param_5[local_1d10 + 0x38];
        BVar6 = BVar5;
        BVar15 = BVar5;
      }
      local_1c40[1] = (uint)(byte)BVar5;
      local_1c40[0] = (uint)(byte)BVar6;
      if (BVar15 != (BC7EncodingPlan)0x0) {
        uVar93 = (int)local_1d10 + 3;
        uVar127 = (ushort)uVar93 & 3;
        if (local_1d10 == 1) {
          lVar124 = 4;
          iVar118 = 1;
          iVar103 = 3;
          iVar101 = 2;
          pfVar97 = param_4 + 3;
          lVar94 = 8;
        }
        else {
          pfVar97 = param_4;
          if (local_1d10 == 2) {
            lVar94 = 8;
            lVar124 = 0xc;
            iVar118 = 3;
            iVar103 = 0;
            iVar101 = 2;
          }
          else {
            lVar124 = 4;
            iVar118 = 1;
            iVar103 = 0;
            lVar94 = (ulong)(local_1d10 == 3) * 4 + 8;
            iVar101 = (local_1d10 == 3) + 2;
          }
        }
        lVar110 = (long)iVar103;
        pfVar112 = local_be8;
        pVVar113 = param_2 + lVar110 * 0x10;
        pFVar116 = local_f48;
        do {
          uVar35 = *(undefined8 *)(pVVar113 + 8);
          *(undefined8 *)&pFVar116->field_0x0 = *(undefined8 *)pVVar113;
          *(undefined8 *)(pFVar116 + 8) = uVar35;
          uVar35 = *(undefined8 *)(pVVar113 + (long)iVar118 * 0x10 + lVar110 * -0x10 + 8);
          *(undefined8 *)&pFVar116[0x10].field_0x0 =
               *(undefined8 *)(pVVar113 + (long)iVar118 * 0x10 + lVar110 * -0x10);
          *(undefined8 *)(pFVar116 + 0x18) = uVar35;
          uVar35 = *(undefined8 *)(pVVar113 + (long)iVar101 * 0x10 + lVar110 * -0x10 + 8);
          *(undefined8 *)&pFVar116[0x20].field_0x0 =
               *(undefined8 *)(pVVar113 + (long)iVar101 * 0x10 + lVar110 * -0x10);
          *(undefined8 *)(pFVar116 + 0x28) = uVar35;
          pfVar104 = pfVar112 + -0x18;
          pFVar126 = pFVar116;
          do {
            auVar137 = *(undefined1 (*) [16])pFVar126;
            pfVar105 = pfVar104 + 8;
            pFVar126 = pFVar126 + 0x10;
            auVar16._10_2_ = 0;
            auVar16._0_10_ = auVar137._0_10_;
            auVar16._12_2_ = auVar137._6_2_;
            auVar23._8_2_ = auVar137._4_2_;
            auVar23._0_8_ = auVar137._0_8_;
            auVar23._10_4_ = auVar16._10_4_;
            auVar42._6_8_ = 0;
            auVar42._0_6_ = auVar23._8_6_;
            pfVar104[4] = (float)auVar137._8_2_;
            pfVar104[5] = (float)auVar137._10_2_;
            pfVar104[6] = (float)auVar137._12_2_;
            pfVar104[7] = (float)auVar137._14_2_;
            *pfVar104 = (float)auVar137._0_2_;
            pfVar104[1] = (float)(int)CONCAT82(SUB148(auVar42 << 0x40,6),auVar137._2_2_);
            pfVar104[2] = (float)auVar23._8_4_;
            pfVar104[3] = (float)(auVar16._10_4_ >> 0x10);
            pfVar104 = pfVar105;
          } while (pfVar112 != pfVar105);
          pVVar113 = pVVar113 + 0x40;
          pFVar116 = pFVar116 + 0x30;
          pfVar112 = pfVar112 + 0x18;
        } while (local_c48 != pFVar116);
        fVar1 = local_1c28[lVar110];
        uVar106 = (ulong)uVar127;
        fVar2 = local_1c28[iVar101];
        fVar3 = local_1c28[iVar118];
        local_1c38 = CONCAT44(*(undefined4 *)((long)param_4 + lVar124),*pfVar97);
        lVar124 = (long)(int)(uVar93 & 3);
        fVar4 = local_1c28[lVar124];
        local_1c30 = *(undefined4 *)((long)param_4 + lVar94);
        pfVar97 = (float *)&local_1c38;
        pFVar116 = local_648;
        pFVar126 = local_f48;
        pFVar117 = local_648;
        pFVar107 = local_f48;
        do {
          do {
            fVar273 = *pfVar97;
            pfVar97 = pfVar97 + 1;
            auVar137 = *(undefined1 (*) [16])pFVar126;
            auVar17._10_2_ = 0;
            auVar17._0_10_ = auVar137._0_10_;
            auVar17._12_2_ = auVar137._6_2_;
            auVar24._8_2_ = auVar137._4_2_;
            auVar24._0_8_ = auVar137._0_8_;
            auVar24._10_4_ = auVar17._10_4_;
            auVar43._6_8_ = 0;
            auVar43._0_6_ = auVar24._8_6_;
            auVar162._0_4_ = (float)auVar137._8_2_ * fVar273;
            auVar162._4_4_ = (float)auVar137._10_2_ * fVar273;
            auVar162._8_4_ = (float)auVar137._12_2_ * fVar273;
            auVar162._12_4_ = (float)auVar137._14_2_ * fVar273;
            *(undefined1 (*) [16])(pFVar116 + 0x10) = auVar162;
            *(float *)pFVar116 = (float)auVar137._0_2_ * fVar273;
            *(float *)(pFVar116 + 4) =
                 (float)(int)CONCAT82(SUB148(auVar43 << 0x40,6),auVar137._2_2_) * fVar273;
            *(float *)(pFVar116 + 8) = (float)auVar24._8_4_ * fVar273;
            *(float *)(pFVar116 + 0xc) = (float)(auVar17._10_4_ >> 0x10) * fVar273;
            pFVar116 = pFVar116 + 0x20;
            pFVar126 = pFVar126 + 0x10;
          } while (&local_1c2c != pfVar97);
          pFVar126 = pFVar107 + 0x30;
          pFVar116 = pFVar117 + 0x60;
          pfVar97 = (float *)&local_1c38;
          pFVar117 = pFVar116;
          pFVar107 = pFVar126;
        } while (local_c48 != pFVar126);
        local_1ce8 = 0;
        lVar94 = (ulong)(uVar127 + 4) * 0x10;
        do {
          uVar93 = local_1c40[local_1ce8];
          sVar44 = (short)local_1ce8;
          if (0 < (int)uVar93) {
            uVar102 = 4;
            if ((int)uVar93 < 5) {
              uVar102 = uVar93;
            }
            pEVar99 = local_1128;
            do {
              *(undefined1 (*) [16])(pEVar99 + 0xc0) = (undefined1  [16])0x0;
              pEVar95 = pEVar99 + 0x20;
              *(undefined1 (*) [16])(pEVar99 + 0xd0) = (undefined1  [16])0x0;
              pEVar99 = pEVar95;
            } while (local_1068 != pEVar95);
            local_1128[0] = (EndpointSelector<3,8>)0x0;
            local_1128[1] = (EndpointSelector<3,8>)0x0;
            local_1128[2] = (EndpointSelector<3,8>)0x0;
            local_1128[3] = (EndpointSelector<3,8>)0x0;
            local_1128[4] = (EndpointSelector<3,8>)0x0;
            local_1128[5] = (EndpointSelector<3,8>)0x0;
            local_1128[6] = (EndpointSelector<3,8>)0x0;
            local_1128[7] = (EndpointSelector<3,8>)0x0;
            local_1128[8] = (EndpointSelector<3,8>)0x0;
            local_1128[9] = (EndpointSelector<3,8>)0x0;
            local_1128[10] = (EndpointSelector<3,8>)0x0;
            local_1128[0xb] = (EndpointSelector<3,8>)0x0;
            local_1128[0xc] = (EndpointSelector<3,8>)0x0;
            local_1128[0xd] = (EndpointSelector<3,8>)0x0;
            local_1128[0xe] = (EndpointSelector<3,8>)0x0;
            local_1128[0xf] = (EndpointSelector<3,8>)0x0;
            iVar118 = 0;
            local_1118 = (undefined1  [16])0x0;
            local_10c8[0] = (EndpointSelector<3,8>)0x0;
            local_10c8[1] = (EndpointSelector<3,8>)0x0;
            local_10c8[2] = (EndpointSelector<3,8>)0x0;
            local_10c8[3] = (EndpointSelector<3,8>)0x0;
            local_10c8[4] = (EndpointSelector<3,8>)0x0;
            local_10c8[5] = (EndpointSelector<3,8>)0x0;
            local_10c8[6] = (EndpointSelector<3,8>)0x0;
            local_10c8[7] = (EndpointSelector<3,8>)0x0;
            local_10c8[8] = (EndpointSelector<3,8>)0x0;
            local_10c8[9] = (EndpointSelector<3,8>)0x0;
            local_10c8[10] = (EndpointSelector<3,8>)0x0;
            local_10c8[0xb] = (EndpointSelector<3,8>)0x0;
            local_10c8[0xc] = (EndpointSelector<3,8>)0x0;
            local_10c8[0xd] = (EndpointSelector<3,8>)0x0;
            local_10c8[0xe] = (EndpointSelector<3,8>)0x0;
            local_10c8[0xf] = (EndpointSelector<3,8>)0x0;
            local_10b8 = (undefined1  [16])0x0;
            local_1108 = (undefined1  [16])0x0;
            local_10f8 = (undefined1  [16])0x0;
            local_10a8 = (undefined1  [16])0x0;
            local_1098 = (undefined1  [16])0x0;
            local_10e8 = (undefined1  [16])0x0;
            local_10d8 = (undefined1  [16])0x0;
            local_1088 = (undefined1  [16])0x0;
            local_1078 = (undefined1  [16])0x0;
            _local_fa8 = (undefined1  [16])0x0;
            _local_f98 = (undefined1  [16])0x0;
            local_f88 = __LC19;
            uStack_f80 = _UNK_0011b708;
            local_f78 = __LC19;
            uStack_f70 = _UNK_0011b708;
            local_f68 = _LC40;
            fStack_f64 = _LC40;
            fStack_f60 = _LC40;
            fStack_f5c = _LC40;
            local_f58 = _LC40;
            fStack_f54 = _LC40;
            fStack_f50 = _LC40;
            fStack_f4c = _LC40;
            pFVar116 = local_648;
            while( true ) {
              while( true ) {
                do {
                  pFVar126 = pFVar116 + 0x60;
                  local_1258._8_8_ = CONCAT44(_UNK_0011b73c,_UNK_0011b738);
                  local_1258._0_8_ = CONCAT44(_UNK_0011b734,_LC29);
                  uStack_1260 = CONCAT44(_UNK_0011b73c,_UNK_0011b738);
                  local_1268 = (undefined1  [8])CONCAT44(_UNK_0011b734,_LC29);
                  EndpointSelector<3,8>::ContributePass
                            (local_1128,pFVar116,iVar118,(Float *)local_1268);
                  fVar258 = fStack_f4c;
                  fVar253 = fStack_f50;
                  fVar246 = fStack_f54;
                  fVar232 = local_f58;
                  fVar219 = fStack_f5c;
                  fVar203 = fStack_f60;
                  fVar177 = fStack_f64;
                  fVar273 = local_f68;
                  pFVar116 = pFVar126;
                } while (local_48 != pFVar126);
                if (iVar118 != 0) break;
                auVar190._0_4_ = (uint)_LC29 & -(uint)((float)local_fa8._0_4_ == 0.0);
                auVar190._4_4_ = _UNK_0011b734 & -(uint)((float)local_fa8._4_4_ == 0.0);
                auVar190._8_4_ = _UNK_0011b738 & -(uint)(fStack_fa0 == 0.0);
                auVar190._12_4_ = _UNK_0011b73c & -(uint)(fStack_f9c == 0.0);
                auVar174._0_4_ = ~-(uint)((float)local_fa8._0_4_ == 0.0) & local_fa8._0_4_;
                auVar174._4_4_ = ~-(uint)((float)local_fa8._4_4_ == 0.0) & local_fa8._4_4_;
                auVar174._8_4_ = ~-(uint)(fStack_fa0 == 0.0) & (uint)fStack_fa0;
                auVar174._12_4_ = ~-(uint)(fStack_f9c == 0.0) & (uint)fStack_f9c;
                auVar191._0_4_ = (uint)_LC29 & -(uint)((float)local_f98._0_4_ == 0.0);
                auVar191._4_4_ = _UNK_0011b734 & -(uint)((float)local_f98._4_4_ == 0.0);
                auVar191._8_4_ = _UNK_0011b738 & -(uint)(fStack_f90 == 0.0);
                auVar191._12_4_ = _UNK_0011b73c & -(uint)(fStack_f8c == 0.0);
                auVar153._0_4_ = ~-(uint)((float)local_f98._0_4_ == 0.0) & local_f98._0_4_;
                auVar153._4_4_ = ~-(uint)((float)local_f98._4_4_ == 0.0) & local_f98._4_4_;
                auVar153._8_4_ = ~-(uint)(fStack_f90 == 0.0) & (uint)fStack_f90;
                auVar153._12_4_ = ~-(uint)(fStack_f8c == 0.0) & (uint)fStack_f8c;
                pEVar99 = local_1128;
                do {
                  pEVar95 = pEVar99 + 0x20;
                  auVar137 = divps(*(undefined1 (*) [16])(pEVar99 + 0x10),auVar153 | auVar191);
                  auVar162 = divps(*(undefined1 (*) [16])pEVar99,auVar174 | auVar190);
                  *(undefined1 (*) [16])(pEVar99 + 0x10) = auVar137;
                  *(undefined1 (*) [16])pEVar99 = auVar162;
                  pEVar99 = pEVar95;
                } while (local_10c8 != pEVar95);
                iVar118 = 1;
                pFVar116 = local_648;
              }
              if (iVar118 != 1) break;
              iVar118 = 2;
              EndpointSelector<3,8>::FinishDirection(local_1128);
              pFVar116 = local_648;
            }
            pVVar113 = param_2 + lVar124 * 0x10;
            local_1c08 = *(ushort *)pVVar113;
            uStack_1c06 = *(ushort *)(pVVar113 + 2);
            uStack_1c04 = *(ushort *)(pVVar113 + 4);
            uStack_1c02 = *(ushort *)(pVVar113 + 6);
            uStack_1c00 = *(ushort *)(pVVar113 + 8);
            uStack_1bfe = *(ushort *)(pVVar113 + 10);
            uStack_1bfc = *(ushort *)(pVVar113 + 0xc);
            uStack_1bfa = *(ushort *)(pVVar113 + 0xe);
            pVVar113 = param_2 + lVar94;
            local_1c18 = local_1c08;
            uStack_1c16 = uStack_1c06;
            uStack_1c14 = uStack_1c04;
            uStack_1c12 = uStack_1c02;
            uStack_1c10 = uStack_1c00;
            uStack_1c0e = uStack_1bfe;
            uStack_1c0c = uStack_1bfc;
            uStack_1c0a = uStack_1bfa;
            do {
              sVar100 = *(short *)pVVar113;
              sVar111 = *(short *)(pVVar113 + 2);
              sVar208 = *(short *)(pVVar113 + 4);
              sVar213 = *(short *)(pVVar113 + 6);
              sVar220 = *(short *)(pVVar113 + 8);
              sVar256 = *(short *)(pVVar113 + 10);
              sVar257 = *(short *)(pVVar113 + 0xc);
              sVar259 = *(short *)(pVVar113 + 0xe);
              sVar199 = *(short *)pVVar113;
              sVar210 = *(short *)(pVVar113 + 2);
              sVar215 = *(short *)(pVVar113 + 4);
              sVar222 = *(short *)(pVVar113 + 6);
              sVar227 = *(short *)(pVVar113 + 8);
              sVar236 = *(short *)(pVVar113 + 10);
              sVar242 = *(short *)(pVVar113 + 0xc);
              sVar250 = *(short *)(pVVar113 + 0xe);
              pVVar113 = pVVar113 + 0x40;
              local_1c18 = ((short)local_1c18 < sVar100) * local_1c18 |
                           (ushort)((short)local_1c18 >= sVar100) * sVar100;
              uStack_1c16 = ((short)uStack_1c16 < sVar111) * uStack_1c16 |
                            (ushort)((short)uStack_1c16 >= sVar111) * sVar111;
              uStack_1c14 = ((short)uStack_1c14 < sVar208) * uStack_1c14 |
                            (ushort)((short)uStack_1c14 >= sVar208) * sVar208;
              uStack_1c12 = ((short)uStack_1c12 < sVar213) * uStack_1c12 |
                            (ushort)((short)uStack_1c12 >= sVar213) * sVar213;
              uStack_1c10 = ((short)uStack_1c10 < sVar220) * uStack_1c10 |
                            (ushort)((short)uStack_1c10 >= sVar220) * sVar220;
              uStack_1c0e = ((short)uStack_1c0e < sVar256) * uStack_1c0e |
                            (ushort)((short)uStack_1c0e >= sVar256) * sVar256;
              uStack_1c0c = ((short)uStack_1c0c < sVar257) * uStack_1c0c |
                            (ushort)((short)uStack_1c0c >= sVar257) * sVar257;
              uStack_1c0a = ((short)uStack_1c0a < sVar259) * uStack_1c0a |
                            (ushort)((short)uStack_1c0a >= sVar259) * sVar259;
              local_1c08 = (sVar199 < (short)local_1c08) * local_1c08 |
                           (ushort)(sVar199 >= (short)local_1c08) * sVar199;
              uStack_1c06 = (sVar210 < (short)uStack_1c06) * uStack_1c06 |
                            (ushort)(sVar210 >= (short)uStack_1c06) * sVar210;
              uStack_1c04 = (sVar215 < (short)uStack_1c04) * uStack_1c04 |
                            (ushort)(sVar215 >= (short)uStack_1c04) * sVar215;
              uStack_1c02 = (sVar222 < (short)uStack_1c02) * uStack_1c02 |
                            (ushort)(sVar222 >= (short)uStack_1c02) * sVar222;
              uStack_1c00 = (sVar227 < (short)uStack_1c00) * uStack_1c00 |
                            (ushort)(sVar227 >= (short)uStack_1c00) * sVar227;
              uStack_1bfe = (sVar236 < (short)uStack_1bfe) * uStack_1bfe |
                            (ushort)(sVar236 >= (short)uStack_1bfe) * sVar236;
              uStack_1bfc = (sVar242 < (short)uStack_1bfc) * uStack_1bfc |
                            (ushort)(sVar242 >= (short)uStack_1bfc) * sVar242;
              uStack_1bfa = (sVar250 < (short)uStack_1bfa) * uStack_1bfa |
                            (ushort)(sVar250 >= (short)uStack_1bfa) * sVar250;
            } while (param_2 + lVar94 + 0x3c0 != pVVar113);
            if (local_1d34 == 4) {
              bVar115 = (-(local_1ce8 == 0) & 4U) + 3;
              iVar118 = (-(uint)(local_1ce8 == 0) & 0xfffffffc) + 7;
              sVar100 = (-(ushort)(local_1ce8 == 0) & 0xfffc) + 7;
              sVar111 = (-(ushort)(local_1ce8 == 0) & 4) + 3;
              local_1cd4 = (-(uint)(local_1ce8 == 0) & 4) + 4;
              local_1d20 = (-(uint)(local_1ce8 == 0) & 0xfffffffc) + 8;
            }
            else {
              bVar115 = 3;
              sVar100 = 3;
              sVar111 = 3;
              local_1cd4 = 4;
              local_1d20 = 4;
              iVar118 = 3;
            }
            fVar260 = (float)local_f88;
            fVar261 = local_f88._4_4_;
            fVar274 = (float)uStack_f80;
            fVar278 = uStack_f80._4_4_;
            fVar178 = (float)local_f78;
            fVar204 = local_f78._4_4_;
            fVar29 = (float)uStack_f70;
            fVar30 = uStack_f70._4_4_;
            pIVar125 = (IndexSelector<3> *)&local_1398;
            pFVar116 = (Float *)local_1268;
            pEVar99 = local_1128;
            pfVar97 = (float *)&local_1c38;
            do {
              fVar176 = *pfVar97;
              pEVar95 = pEVar99 + 0x20;
              pfVar97 = pfVar97 + 1;
              auVar185._4_4_ = fVar176;
              auVar185._0_4_ = fVar176;
              auVar185._8_4_ = fVar176;
              auVar185._12_4_ = fVar176;
              fVar202 = *(float *)(pEVar99 + 0x60) * fVar260 + *(float *)pEVar99;
              fVar218 = *(float *)(pEVar99 + 100) * fVar261 + *(float *)(pEVar99 + 4);
              auVar137._4_4_ = fVar218;
              auVar137._0_4_ = fVar202;
              fVar231 = *(float *)(pEVar99 + 0x68) * fVar274 + *(float *)(pEVar99 + 8);
              fVar245 = *(float *)(pEVar99 + 0x6c) * fVar278 + *(float *)(pEVar99 + 0xc);
              fVar176 = *(float *)(pEVar99 + 0x70) * fVar178 + *(float *)(pEVar99 + 0x10);
              fVar192 = *(float *)(pEVar99 + 0x74) * fVar204 + *(float *)(pEVar99 + 0x14);
              auVar181._4_4_ = fVar192;
              auVar181._0_4_ = fVar176;
              fVar194 = *(float *)(pEVar99 + 0x78) * fVar29 + *(float *)(pEVar99 + 0x18);
              fVar196 = *(float *)(pEVar99 + 0x7c) * fVar30 + *(float *)(pEVar99 + 0x1c);
              auVar137._8_4_ = fVar231;
              auVar137._12_4_ = fVar245;
              auVar137 = divps(auVar137,auVar185);
              *(undefined1 (*) [16])pIVar125 = auVar137;
              auVar181._8_4_ = fVar194;
              auVar181._12_4_ = fVar196;
              auVar137 = divps(auVar181,auVar185);
              *(undefined1 (*) [16])(pIVar125 + 0x10) = auVar137;
              auVar264._0_4_ = (*(float *)(pEVar99 + 0x60) * fVar273 + *(float *)pEVar99) - fVar202;
              auVar264._4_4_ =
                   (*(float *)(pEVar99 + 100) * fVar177 + *(float *)(pEVar99 + 4)) - fVar218;
              auVar264._8_4_ =
                   (*(float *)(pEVar99 + 0x68) * fVar203 + *(float *)(pEVar99 + 8)) - fVar231;
              auVar264._12_4_ =
                   (*(float *)(pEVar99 + 0x6c) * fVar219 + *(float *)(pEVar99 + 0xc)) - fVar245;
              auVar137 = divps(auVar264,auVar185);
              *(undefined1 (*) [16])pFVar116 = auVar137;
              auVar166._0_4_ =
                   (*(float *)(pEVar99 + 0x70) * fVar232 + *(float *)(pEVar99 + 0x10)) - fVar176;
              auVar166._4_4_ =
                   (*(float *)(pEVar99 + 0x74) * fVar246 + *(float *)(pEVar99 + 0x14)) - fVar192;
              auVar166._8_4_ =
                   (*(float *)(pEVar99 + 0x78) * fVar253 + *(float *)(pEVar99 + 0x18)) - fVar194;
              auVar166._12_4_ =
                   (*(float *)(pEVar99 + 0x7c) * fVar258 + *(float *)(pEVar99 + 0x1c)) - fVar196;
              auVar137 = divps(auVar166,auVar185);
              *(undefined1 (*) [16])(pFVar116 + 0x10) = auVar137;
              pIVar125 = pIVar125 + 0x20;
              pFVar116 = pFVar116 + 0x20;
              pEVar99 = pEVar95;
            } while (local_10c8 != pEVar95);
            pIVar125 = local_1698;
            pIVar114 = local_1798;
            local_1918 = local_1398;
            uStack_1910 = uStack_1390;
            local_1908 = local_1388;
            uStack_1900 = uStack_1380;
            local_18f8 = local_1378;
            uStack_18f0 = uStack_1370;
            local_18e8 = local_1368;
            uStack_18e0 = uStack_1360;
            local_18d8 = local_1358;
            uStack_18d0 = uStack_1350;
            local_18c8 = local_1348;
            uStack_18c0 = uStack_1340;
            local_18b8 = local_1268;
            uStack_18b0 = uStack_1260;
            local_18a8 = local_1258._0_8_;
            uStack_18a0 = local_1258._8_8_;
            local_1898 = local_1248._0_8_;
            uStack_1890 = local_1248._8_8_;
            local_1888 = local_1238._0_8_;
            uStack_1880 = local_1238._8_8_;
            local_1878 = local_1228._0_8_;
            uStack_1870 = local_1228._8_8_;
            local_1868 = local_1218._0_8_;
            uStack_1860 = local_1218._8_8_;
            pIVar96 = pIVar125;
            pIVar108 = pIVar114;
            do {
              *(undefined1 (*) [16])pIVar96 = (undefined1  [16])0x0;
              pIVar96 = pIVar96 + 0x10;
              *(undefined1 (*) [16])pIVar108 = (undefined1  [16])0x0;
              pIVar108 = pIVar108 + 0x10;
            } while (local_1598 != pIVar96);
            local_1cd8 = 0;
            iVar101 = iVar92 + -1;
            uStack_1d70 = _UNK_0011b708;
            local_1d78 = (undefined1  [8])__LC19;
            fVar273 = (float)bVar115;
            uStack_1d60 = _UNK_0011b708;
            local_1d68 = (undefined1  [8])__LC19;
            uStack_1d50 = _UNK_0011b708;
            local_1d58 = (undefined1  [8])__LC19;
            uStack_1d40 = _UNK_0011b708;
            local_1d48 = (undefined1  [8])__LC19;
            do {
              uVar93 = MXCSR;
              MXCSR = MXCSR & 0xffff9fff;
              cvtt::Util::ComputeTweakFactors(local_1cd8,local_1d20,(float *)local_1268);
              pfVar97 = (float *)&local_1918;
              pVVar113 = local_1b68;
              do {
                pfVar112 = pfVar97 + 8;
                auVar180._0_4_ = pfVar97[0x18] * (float)local_1268._0_4_ + *pfVar97;
                auVar180._4_4_ = pfVar97[0x19] * (float)local_1268._0_4_ + pfVar97[1];
                auVar180._8_4_ = pfVar97[0x1a] * (float)local_1268._0_4_ + pfVar97[2];
                auVar180._12_4_ = pfVar97[0x1b] * (float)local_1268._0_4_ + pfVar97[3];
                auVar181 = minps(auVar180,__LC13);
                auVar263._0_4_ = pfVar97[0x1c] * (float)local_1268._0_4_ + pfVar97[4];
                auVar263._4_4_ = pfVar97[0x1d] * (float)local_1268._0_4_ + pfVar97[5];
                auVar263._8_4_ = pfVar97[0x1e] * (float)local_1268._0_4_ + pfVar97[6];
                auVar263._12_4_ = pfVar97[0x1f] * (float)local_1268._0_4_ + pfVar97[7];
                auVar264 = minps(auVar263,__LC13);
                auVar170._0_4_ = pfVar97[0x18] * (float)local_1268._4_4_ + *pfVar97;
                auVar170._4_4_ = pfVar97[0x19] * (float)local_1268._4_4_ + pfVar97[1];
                auVar170._8_4_ = pfVar97[0x1a] * (float)local_1268._4_4_ + pfVar97[2];
                auVar170._12_4_ = pfVar97[0x1b] * (float)local_1268._4_4_ + pfVar97[3];
                auVar137 = minps(auVar170,__LC13);
                auVar161._0_4_ = pfVar97[0x1c] * (float)local_1268._4_4_ + pfVar97[4];
                auVar161._4_4_ = pfVar97[0x1d] * (float)local_1268._4_4_ + pfVar97[5];
                auVar161._8_4_ = pfVar97[0x1e] * (float)local_1268._4_4_ + pfVar97[6];
                auVar161._12_4_ = pfVar97[0x1f] * (float)local_1268._4_4_ + pfVar97[7];
                auVar162 = minps(auVar161,__LC13);
                auVar181 = maxps(auVar181,(undefined1  [16])0x0);
                auVar264 = maxps(auVar264,(undefined1  [16])0x0);
                auVar137 = maxps(auVar137,(undefined1  [16])0x0);
                auVar162 = maxps(auVar162,(undefined1  [16])0x0);
                auVar182._0_4_ = (int)auVar181._0_4_;
                auVar182._4_4_ = (int)auVar181._4_4_;
                auVar182._8_4_ = (int)auVar181._8_4_;
                auVar182._12_4_ = (int)auVar181._12_4_;
                auVar265._0_4_ = (int)auVar264._0_4_;
                auVar265._4_4_ = (int)auVar264._4_4_;
                auVar265._8_4_ = (int)auVar264._8_4_;
                auVar265._12_4_ = (int)auVar264._12_4_;
                auVar181 = packssdw(auVar182,auVar265);
                auVar255._0_4_ = (int)auVar137._0_4_;
                auVar255._4_4_ = (int)auVar137._4_4_;
                auVar255._8_4_ = (int)auVar137._8_4_;
                auVar255._12_4_ = (int)auVar137._12_4_;
                *(undefined1 (*) [16])pVVar113 = auVar181;
                auVar163._0_4_ = (int)auVar162._0_4_;
                auVar163._4_4_ = (int)auVar162._4_4_;
                auVar163._8_4_ = (int)auVar162._8_4_;
                auVar163._12_4_ = (int)auVar162._12_4_;
                auVar137 = packssdw(auVar255,auVar163);
                *(undefined1 (*) [16])(pVVar113 + 0x30) = auVar137;
                pfVar97 = pfVar112;
                pVVar113 = pVVar113 + 0x10;
              } while ((float *)&local_18b8 != pfVar112);
              MXCSR = uVar93;
              TweakAlpha((VInt16 *)&local_1c18,local_1cd8,local_1cd4,local_1bf8);
              local_1e68 = 0;
              do {
                if (local_1d34 == 4) {
                  CompressEndpoints4(local_1b68,local_1bf8);
                }
                else {
                  CompressEndpoints5(local_1b68,local_1bf8);
                }
                auVar137 = local_1be8;
                aVVar67 = local_1bf8;
                sVar220 = local_1bf8._6_2_;
                auVar7._10_2_ = 0;
                auVar7._0_10_ = local_1bf8._0_10_;
                auVar7._12_2_ = sVar220;
                sVar213 = local_1bf8._4_2_;
                auVar18._8_2_ = sVar213;
                auVar18._0_8_ = local_1bf8._0_8_;
                auVar18._10_4_ = auVar7._10_4_;
                auVar45._6_8_ = 0;
                auVar45._0_6_ = auVar18._8_6_;
                sVar208 = local_1bf8._2_2_;
                auVar26._4_2_ = sVar208;
                auVar26._0_4_ = local_1bf8._0_4_;
                auVar26._6_8_ = SUB148(auVar45 << 0x40,6);
                fVar274 = (float)(local_1bf8._0_4_ & 0xffff);
                fVar278 = (float)(auVar7._10_4_ >> 0x10);
                uVar127 = local_1bf8._8_2_;
                uVar233 = local_1bf8._10_2_;
                uVar239 = local_1bf8._12_2_;
                uVar247 = local_1bf8._14_2_;
                sVar259 = local_1be8._6_2_;
                auVar8._10_2_ = 0;
                auVar8._0_10_ = local_1be8._0_10_;
                auVar8._12_2_ = sVar259;
                sVar257 = local_1be8._4_2_;
                auVar19._8_2_ = sVar257;
                auVar19._0_8_ = local_1be8._0_8_;
                auVar19._10_4_ = auVar8._10_4_;
                auVar46._6_8_ = 0;
                auVar46._0_6_ = auVar19._8_6_;
                sVar256 = local_1be8._2_2_;
                auVar27._4_2_ = sVar256;
                auVar27._0_4_ = local_1be8._0_4_;
                auVar27._6_8_ = SUB148(auVar46 << 0x40,6);
                fVar253 = (float)(local_1be8._0_4_ & 0xffff) - fVar274;
                fVar258 = (float)auVar27._4_4_ - (float)auVar26._4_4_;
                fVar260 = (float)auVar19._8_4_ - (float)auVar18._8_4_;
                fVar261 = (float)(auVar8._10_4_ >> 0x10) - fVar278;
                uVar225 = local_1be8._8_2_;
                uVar234 = local_1be8._10_2_;
                uVar240 = local_1be8._12_2_;
                uVar248 = local_1be8._14_2_;
                fVar203 = (float)uVar225 - (float)uVar127;
                fVar219 = (float)uVar234 - (float)uVar233;
                fVar232 = (float)uVar240 - (float)uVar239;
                fVar246 = (float)uVar248 - (float)uVar247;
                uVar93 = -(uint)(fVar253 * fVar253 == 0.0);
                uVar130 = -(uint)(fVar258 * fVar258 == 0.0);
                uVar132 = -(uint)(fVar260 * fVar260 == 0.0);
                uVar134 = -(uint)(fVar261 * fVar261 == 0.0);
                uVar129 = -(uint)(fVar203 * fVar203 == 0.0);
                uVar131 = -(uint)(fVar219 * fVar219 == 0.0);
                uVar133 = -(uint)(fVar232 * fVar232 == 0.0);
                uVar135 = -(uint)(fVar246 * fVar246 == 0.0);
                auVar279._0_4_ = (uint)_LC29 & uVar93;
                auVar279._4_4_ = _UNK_0011b734 & uVar130;
                auVar279._8_4_ = _UNK_0011b738 & uVar132;
                auVar279._12_4_ = _UNK_0011b73c & uVar134;
                auVar266._0_4_ = ~uVar93 & (uint)(fVar253 * fVar253);
                auVar266._4_4_ = ~uVar130 & (uint)(fVar258 * fVar258);
                auVar266._8_4_ = ~uVar132 & (uint)(fVar260 * fVar260);
                auVar266._12_4_ = ~uVar134 & (uint)(fVar261 * fVar261);
                auVar275._0_4_ = (uint)_LC29 & uVar129;
                auVar275._4_4_ = _UNK_0011b734 & uVar131;
                auVar275._8_4_ = _UNK_0011b738 & uVar133;
                auVar275._12_4_ = _UNK_0011b73c & uVar135;
                auVar183._0_4_ = ~uVar129 & (uint)(fVar203 * fVar203);
                auVar183._4_4_ = ~uVar131 & (uint)(fVar219 * fVar219);
                auVar183._8_4_ = ~uVar133 & (uint)(fVar232 * fVar232);
                auVar183._12_4_ = ~uVar135 & (uint)(fVar246 * fVar246);
                auVar276._0_8_ = CONCAT44(fVar273,fVar273);
                auVar276._8_4_ = fVar273;
                auVar276._12_4_ = fVar273;
                auVar270._8_4_ = fVar273;
                auVar270._0_8_ = auVar276._0_8_;
                auVar270._12_4_ = fVar273;
                auVar162 = divps(auVar270,auVar266 | auVar279);
                auVar181 = divps(auVar276,auVar183 | auVar275);
                IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
                          ((IndexSelector<3> *)&local_1398,(float *)&local_1c38,local_1b68,
                           local_1b68,local_1d20);
                uVar91 = local_1274;
                uVar90 = uStack_1280;
                uVar89 = local_1288;
                uVar88 = uStack_1290;
                uVar87 = local_1298;
                uVar86 = uStack_12a0;
                uVar85 = local_12a8;
                uVar84 = uStack_12b0;
                uVar83 = local_12b8;
                uVar82 = uStack_12c0;
                uVar81 = local_12c8;
                uVar80 = uStack_12d0;
                uVar79 = local_12d8;
                uVar78 = uStack_12e0;
                uVar77 = local_12e8;
                uVar76 = uStack_12f0;
                uVar75 = local_12f8;
                uVar74 = uStack_1300;
                uVar73 = local_1308;
                uVar72 = uStack_1310;
                uVar71 = local_1318;
                uVar70 = uStack_1320;
                uVar69 = local_1328;
                uVar68 = uStack_1330;
                uVar35 = local_1338;
                _local_1268 = (undefined1  [16])0x0;
                local_1258 = (undefined1  [16])0x0;
                fVar177 = _LC29 / (float)iVar118;
                local_1208[0] = (Float)0x0;
                local_1208[1] = (Float)0x0;
                local_1208[2] = (Float)0x0;
                local_1208[3] = (Float)0x0;
                local_1208[4] = (Float)0x0;
                local_1208[5] = (Float)0x0;
                local_1208[6] = (Float)0x0;
                local_1208[7] = (Float)0x0;
                local_1208[8] = (Float)0x0;
                local_1208[9] = (Float)0x0;
                local_1208[10] = (Float)0x0;
                local_1208[0xb] = (Float)0x0;
                local_1208[0xc] = (Float)0x0;
                local_1208[0xd] = (Float)0x0;
                local_1208[0xe] = (Float)0x0;
                local_1208[0xf] = (Float)0x0;
                local_11f8 = (undefined1  [16])0x0;
                local_1248 = (undefined1  [16])0x0;
                local_1238 = (undefined1  [16])0x0;
                local_11e8 = (undefined1  [16])0x0;
                local_11d8 = (undefined1  [16])0x0;
                local_1228 = (undefined1  [16])0x0;
                local_1218 = (undefined1  [16])0x0;
                local_11c8 = (undefined1  [16])0x0;
                local_11b8 = (undefined1  [16])0x0;
                _local_11a8 = (undefined1  [16])0x0;
                _local_1198 = (undefined1  [16])0x0;
                _local_1188 = (undefined1  [16])0x0;
                _local_1178 = (undefined1  [16])0x0;
                local_1168 = (undefined1  [16])0x0;
                local_1158 = (undefined1  [16])0x0;
                local_1144 = fVar177;
                pFVar116 = (Float *)local_1268;
                pfVar97 = (float *)&local_1c38;
                do {
                  fVar178 = *pfVar97;
                  fVar204 = _LC29;
                  if (fVar178 != 0.0) {
                    fVar204 = _LC29 / fVar178;
                  }
                  *(float *)(pFVar116 + 0x128) = fVar178;
                  pFVar126 = pFVar116 + 4;
                  pfVar97 = pfVar97 + 1;
                  *(float *)(pFVar116 + 0x134) = fVar204;
                  pFVar116 = pFVar126;
                } while ((Float *)(local_1268 + 0xc) != pFVar126);
                iVar103 = 0;
                fVar178 = _LC29 / fVar273;
                _local_19c8 = (undefined1  [16])0x0;
                local_1924 = fVar178;
                auVar285._0_12_ = ZEXT812(0);
                auVar285._12_4_ = 0.0;
                local_1920 = 0x3f8000003f800000;
                _local_19b8 = (undefined1  [16])0x0;
                _local_19a8 = (undefined1  [16])0x0;
                _local_1998 = (undefined1  [16])0x0;
                local_1988 = (undefined1  [16])0x0;
                local_1978 = (undefined1  [16])0x0;
                local_1968 = (undefined1  [16])0x0;
                local_1958 = (undefined1  [16])0x0;
                local_1948 = (undefined1  [16])0x0;
                local_1938 = (undefined1  [16])0x0;
                local_1148 = 0;
                local_1928 = 0;
                local_1b08 = (undefined1  [16])0x0;
                local_1af8 = (undefined1  [16])0x0;
                local_1ae8 = (undefined1  [16])0x0;
                local_1ad8 = (undefined1  [16])0x0;
                local_1ac8 = (undefined1  [16])0x0;
                local_1ab8 = (undefined1  [16])0x0;
                bVar62 = false;
                bVar63 = false;
                uVar36 = *(undefined8 *)(&g_weightReciprocals + (long)local_1278 * 0x10);
                uVar37 = *(undefined8 *)((long)local_1278 * 0x10 + 0x11d060);
                bVar64 = false;
                uVar38 = *(undefined8 *)(&g_weightReciprocals + (long)local_1cd4 * 0x10);
                uVar39 = *(undefined8 *)((long)local_1cd4 * 0x10 + 0x11d060);
                _local_1fe8 = (undefined1  [16])0x0;
                _local_1fd8 = (undefined1  [16])0x0;
                bVar65 = false;
                _local_1fc8 = (undefined1  [16])0x0;
                _local_1fb8 = (undefined1  [16])0x0;
                local_2048 = (undefined1  [16])0x0;
                local_2038 = (undefined1  [16])0x0;
                bVar66 = false;
                _local_1ff8 = (undefined1  [16])0x0;
                _local_20b8 = (undefined1  [16])0x0;
                _local_20a8 = (undefined1  [16])0x0;
                pFVar116 = local_c48;
                pFVar126 = local_f48;
                lVar110 = 0;
                pFVar117 = local_648;
                do {
                  local_1f78 = (float)uVar35;
                  fStack_1f74 = (float)((ulong)uVar35 >> 0x20);
                  fStack_1f70 = (float)uVar68;
                  fStack_1f6c = (float)((ulong)uVar68 >> 0x20);
                  local_1f58 = (float)uVar79;
                  fStack_1f54 = (float)((ulong)uVar79 >> 0x20);
                  fStack_1f50 = (float)uVar80;
                  fStack_1f4c = (float)((ulong)uVar80 >> 0x20);
                  local_1e98 = (float)uVar71;
                  fStack_1e94 = (float)((ulong)uVar71 >> 0x20);
                  fStack_1e90 = (float)uVar72;
                  fStack_1e8c = (float)((ulong)uVar72 >> 0x20);
                  local_1ed8 = (float)uVar83;
                  fStack_1ed4 = (float)((ulong)uVar83 >> 0x20);
                  fStack_1ed0 = (float)uVar84;
                  fStack_1ecc = (float)((ulong)uVar84 >> 0x20);
                  local_1ec8 = (float)uVar73;
                  fStack_1ec4 = (float)((ulong)uVar73 >> 0x20);
                  fStack_1ec0 = (float)uVar74;
                  fStack_1ebc = (float)((ulong)uVar74 >> 0x20);
                  local_1ee8 = (float)uVar85;
                  fStack_1ee4 = (float)((ulong)uVar85 >> 0x20);
                  fStack_1ee0 = (float)uVar86;
                  fStack_1edc = (float)((ulong)uVar86 >> 0x20);
                  auVar41._4_4_ = uVar91;
                  auVar41._0_4_ = uVar91;
                  auVar41._8_4_ = uVar91;
                  auVar41._12_4_ = uVar91;
                  pFVar107 = param_3 + lVar110 * 8 + uVar106 * 0x20;
                  fVar204 = *(float *)pFVar107;
                  fVar29 = *(float *)(pFVar107 + 4);
                  fVar30 = *(float *)(pFVar107 + 8);
                  fVar176 = *(float *)(pFVar107 + 0xc);
                  pFVar107 = param_3 + lVar110 * 8 + uVar106 * 0x20 + 0x10;
                  fVar192 = *(float *)pFVar107;
                  fVar194 = *(float *)(pFVar107 + 4);
                  fVar196 = *(float *)(pFVar107 + 8);
                  fVar202 = *(float *)(pFVar107 + 0xc);
                  local_2088 = (short)uVar36;
                  sStack_2086 = (short)((ulong)uVar36 >> 0x10);
                  sStack_2084 = (short)((ulong)uVar36 >> 0x20);
                  sStack_2082 = (short)((ulong)uVar36 >> 0x30);
                  sStack_2080 = (short)uVar37;
                  sStack_207e = (short)((ulong)uVar37 >> 0x10);
                  sStack_207c = (short)((ulong)uVar37 >> 0x20);
                  sStack_207a = (short)((ulong)uVar37 >> 0x30);
                  local_1f38 = (float)uVar75;
                  fStack_1f34 = (float)((ulong)uVar75 >> 0x20);
                  fStack_1f30 = (float)uVar76;
                  fStack_1f2c = (float)((ulong)uVar76 >> 0x20);
                  local_1f18 = (float)uVar87;
                  fStack_1f14 = (float)((ulong)uVar87 >> 0x20);
                  fStack_1f10 = (float)uVar88;
                  fStack_1f0c = (float)((ulong)uVar88 >> 0x20);
                  auVar164._0_4_ =
                       (*(float *)&pFVar116->field_0x0 - local_1f78) * local_1f58 +
                       (*(float *)&pFVar116[0x20].field_0x0 - local_1e98) * local_1ed8 +
                       (*(float *)&pFVar116[0x40].field_0x0 - local_1f38) * local_1f18;
                  auVar164._4_4_ =
                       (*(float *)(pFVar116 + 4) - fStack_1f74) * fStack_1f54 +
                       (*(float *)(pFVar116 + 0x24) - fStack_1e94) * fStack_1ed4 +
                       (*(float *)(pFVar116 + 0x44) - fStack_1f34) * fStack_1f14;
                  auVar164._8_4_ =
                       (*(float *)(pFVar116 + 8) - fStack_1f70) * fStack_1f50 +
                       (*(float *)(pFVar116 + 0x28) - fStack_1e90) * fStack_1ed0 +
                       (*(float *)(pFVar116 + 0x48) - fStack_1f30) * fStack_1f10;
                  auVar164._12_4_ =
                       (*(float *)(pFVar116 + 0xc) - fStack_1f6c) * fStack_1f4c +
                       (*(float *)(pFVar116 + 0x2c) - fStack_1e8c) * fStack_1ecc +
                       (*(float *)(pFVar116 + 0x4c) - fStack_1f2c) * fStack_1f0c;
                  local_1f68 = (float)uVar69;
                  fStack_1f64 = (float)((ulong)uVar69 >> 0x20);
                  fStack_1f60 = (float)uVar70;
                  fStack_1f5c = (float)((ulong)uVar70 >> 0x20);
                  local_1f48 = (float)uVar81;
                  fStack_1f44 = (float)((ulong)uVar81 >> 0x20);
                  fStack_1f40 = (float)uVar82;
                  fStack_1f3c = (float)((ulong)uVar82 >> 0x20);
                  auVar264 = minps(auVar164,auVar41);
                  local_1f28 = (float)uVar77;
                  fStack_1f24 = (float)((ulong)uVar77 >> 0x20);
                  fStack_1f20 = (float)uVar78;
                  fStack_1f1c = (float)((ulong)uVar78 >> 0x20);
                  local_1f08 = (float)uVar89;
                  fStack_1f04 = (float)((ulong)uVar89 >> 0x20);
                  fStack_1f00 = (float)uVar90;
                  fStack_1efc = (float)((ulong)uVar90 >> 0x20);
                  auVar264 = maxps(auVar264,(undefined1  [16])0x0);
                  auVar165._0_4_ = (int)auVar264._0_4_;
                  auVar165._4_4_ = (int)auVar264._4_4_;
                  auVar165._8_4_ = (int)auVar264._8_4_;
                  auVar165._12_4_ = (int)auVar264._12_4_;
                  auVar138._0_4_ =
                       (*(float *)&pFVar116[0x10].field_0x0 - local_1f68) * local_1f48 +
                       (*(float *)&pFVar116[0x30].field_0x0 - local_1ec8) * local_1ee8 +
                       (*(float *)&pFVar116[0x50].field_0x0 - local_1f28) * local_1f08;
                  auVar138._4_4_ =
                       (*(float *)(pFVar116 + 0x14) - fStack_1f64) * fStack_1f44 +
                       (*(float *)(pFVar116 + 0x34) - fStack_1ec4) * fStack_1ee4 +
                       (*(float *)(pFVar116 + 0x54) - fStack_1f24) * fStack_1f04;
                  auVar138._8_4_ =
                       (*(float *)(pFVar116 + 0x18) - fStack_1f60) * fStack_1f40 +
                       (*(float *)(pFVar116 + 0x38) - fStack_1ec0) * fStack_1ee0 +
                       (*(float *)(pFVar116 + 0x58) - fStack_1f20) * fStack_1f00;
                  auVar138._12_4_ =
                       (*(float *)(pFVar116 + 0x1c) - fStack_1f5c) * fStack_1f3c +
                       (*(float *)(pFVar116 + 0x3c) - fStack_1ebc) * fStack_1edc +
                       (*(float *)(pFVar116 + 0x5c) - fStack_1f1c) * fStack_1efc;
                  auVar184._0_4_ = (fVar204 - fVar274) * auVar162._0_4_ * fVar253;
                  auVar184._4_4_ = (fVar29 - (float)auVar26._4_4_) * auVar162._4_4_ * fVar258;
                  auVar184._8_4_ = (fVar30 - (float)auVar18._8_4_) * auVar162._8_4_ * fVar260;
                  auVar184._12_4_ = (fVar176 - fVar278) * auVar162._12_4_ * fVar261;
                  auVar264 = minps(auVar138,auVar41);
                  auVar264 = maxps(auVar264,(undefined1  [16])0x0);
                  auVar185 = minps(auVar184,auVar276);
                  auVar139._0_4_ = (int)auVar264._0_4_;
                  auVar139._4_4_ = (int)auVar264._4_4_;
                  auVar139._8_4_ = (int)auVar264._8_4_;
                  auVar139._12_4_ = (int)auVar264._12_4_;
                  auVar166 = packssdw(auVar165,auVar139);
                  auVar264 = maxps(auVar185,(undefined1  [16])0x0);
                  sVar199 = auVar166._0_2_;
                  sVar210 = auVar166._2_2_;
                  sVar215 = auVar166._4_2_;
                  sVar222 = auVar166._6_2_;
                  sVar227 = auVar166._8_2_;
                  sVar236 = auVar166._10_2_;
                  sVar242 = auVar166._12_2_;
                  sVar250 = auVar166._14_2_;
                  auVar140._0_4_ = (fVar192 - (float)uVar127) * auVar181._0_4_ * fVar203;
                  auVar140._4_4_ = (fVar194 - (float)uVar233) * auVar181._4_4_ * fVar219;
                  auVar140._8_4_ = (fVar196 - (float)uVar239) * auVar181._8_4_ * fVar232;
                  auVar140._12_4_ = (fVar202 - (float)uVar247) * auVar181._12_4_ * fVar246;
                  auVar186._0_4_ = (int)auVar264._0_4_;
                  auVar186._4_4_ = (int)auVar264._4_4_;
                  auVar186._8_4_ = (int)auVar264._8_4_;
                  auVar186._12_4_ = (int)auVar264._12_4_;
                  uVar198 = (ushort)(local_2088 * sVar199 + __LC30) >> 9;
                  uVar209 = (ushort)(sStack_2086 * sVar210 + _UNK_0011b742) >> 9;
                  uVar214 = (ushort)(sStack_2084 * sVar215 + _UNK_0011b744) >> 9;
                  uVar221 = (ushort)(sStack_2082 * sVar222 + _UNK_0011b746) >> 9;
                  uVar226 = (ushort)(sStack_2080 * sVar227 + _UNK_0011b748) >> 9;
                  uVar235 = (ushort)(sStack_207e * sVar236 + _UNK_0011b74a) >> 9;
                  uVar241 = (ushort)(sStack_207c * sVar242 + _UNK_0011b74c) >> 9;
                  uVar249 = (ushort)(sStack_207a * sVar250 + _UNK_0011b74e) >> 9;
                  auVar264 = minps(auVar140,auVar276);
                  auVar264 = maxps(auVar264,(undefined1  [16])0x0);
                  auVar141._0_4_ = (int)auVar264._0_4_;
                  auVar141._4_4_ = (int)auVar264._4_4_;
                  auVar141._8_4_ = (int)auVar264._8_4_;
                  auVar141._12_4_ = (int)auVar264._12_4_;
                  auVar264 = packssdw(auVar186,auVar141);
                  pIVar96 = (IndexSelector<3> *)&local_1398;
                  puVar121 = local_1b98;
                  do {
                    sVar201 = *(short *)pIVar96;
                    sVar212 = *(short *)(pIVar96 + 2);
                    sVar217 = *(short *)(pIVar96 + 4);
                    sVar224 = *(short *)(pIVar96 + 6);
                    sVar230 = *(short *)(pIVar96 + 8);
                    sVar238 = *(short *)(pIVar96 + 10);
                    sVar244 = *(short *)(pIVar96 + 0xc);
                    sVar252 = *(short *)(pIVar96 + 0xe);
                    pIVar108 = pIVar96 + 0x30;
                    sVar200 = *(short *)(pIVar96 + 0x32);
                    sVar211 = *(short *)(pIVar96 + 0x34);
                    sVar216 = *(short *)(pIVar96 + 0x36);
                    sVar223 = *(short *)(pIVar96 + 0x38);
                    sVar229 = *(short *)(pIVar96 + 0x3a);
                    sVar237 = *(short *)(pIVar96 + 0x3c);
                    sVar243 = *(short *)(pIVar96 + 0x3e);
                    pIVar96 = pIVar96 + 0x10;
                    *puVar121 = (ushort)(sVar201 * (_LC31[0] - uVar198) +
                                         *(short *)pIVar108 * uVar198 + __LC42) >> 6;
                    puVar121[1] = (ushort)(sVar212 * (_LC31[1] - uVar209) + sVar200 * uVar209 +
                                          _UNK_0011b7c2) >> 6;
                    puVar121[2] = (ushort)(sVar217 * (_LC31[2] - uVar214) + sVar211 * uVar214 +
                                          _UNK_0011b7c4) >> 6;
                    puVar121[3] = (ushort)(sVar224 * (_LC31[3] - uVar221) + sVar216 * uVar221 +
                                          _UNK_0011b7c6) >> 6;
                    puVar121[4] = (ushort)(sVar230 * (_LC31[4] - uVar226) + sVar223 * uVar226 +
                                          _UNK_0011b7c8) >> 6;
                    puVar121[5] = (ushort)(sVar238 * (_LC31[5] - uVar235) + sVar229 * uVar235 +
                                          _UNK_0011b7ca) >> 6;
                    puVar121[6] = (ushort)(sVar244 * (_LC31[6] - uVar241) + sVar237 * uVar241 +
                                          _UNK_0011b7cc) >> 6;
                    puVar121[7] = (ushort)(sVar252 * (_LC31[7] - uVar249) + sVar243 * uVar249 +
                                          _UNK_0011b7ce) >> 6;
                    puVar121 = puVar121 + 8;
                  } while ((IndexSelector<3> *)&local_1368 != pIVar96);
                  local_2098 = (short)uVar38;
                  sStack_2096 = (short)((ulong)uVar38 >> 0x10);
                  sStack_2094 = (short)((ulong)uVar38 >> 0x20);
                  sStack_2092 = (short)((ulong)uVar38 >> 0x30);
                  sStack_2090 = (short)uVar39;
                  sStack_208e = (short)((ulong)uVar39 >> 0x10);
                  sStack_208c = (short)((ulong)uVar39 >> 0x20);
                  sStack_208a = (short)((ulong)uVar39 >> 0x30);
                  local_2078 = auVar137._0_2_;
                  sVar201 = auVar264._0_2_;
                  sVar212 = auVar264._2_2_;
                  sVar217 = auVar264._4_2_;
                  sVar224 = auVar264._6_2_;
                  sVar230 = auVar264._8_2_;
                  sVar238 = auVar264._10_2_;
                  sVar244 = auVar264._12_2_;
                  sVar252 = auVar264._14_2_;
                  uVar198 = (ushort)(local_2098 * sVar201 + __LC30) >> 9;
                  uVar209 = (ushort)(sStack_2096 * sVar212 + _UNK_0011b742) >> 9;
                  uVar214 = (ushort)(sStack_2094 * sVar217 + _UNK_0011b744) >> 9;
                  uVar221 = (ushort)(sStack_2092 * sVar224 + _UNK_0011b746) >> 9;
                  uVar226 = (ushort)(sStack_2090 * sVar230 + _UNK_0011b748) >> 9;
                  uVar235 = (ushort)(sStack_208e * sVar238 + _UNK_0011b74a) >> 9;
                  uVar241 = (ushort)(sStack_208c * sVar244 + _UNK_0011b74c) >> 9;
                  uVar249 = (ushort)(sStack_208a * sVar252 + _UNK_0011b74e) >> 9;
                  local_2068 = aVVar67._0_2_;
                  uVar198 = (ushort)(local_2078 * uVar198 + __LC42 +
                                    (_LC31[0] - uVar198) * local_2068) >> 6;
                  uVar209 = (ushort)(sVar256 * uVar209 + _UNK_0011b7c2 +
                                    (_LC31[1] - uVar209) * sVar208) >> 6;
                  uVar214 = (ushort)(sVar257 * uVar214 + _UNK_0011b7c4 +
                                    (_LC31[2] - uVar214) * sVar213) >> 6;
                  uVar221 = (ushort)(sVar259 * uVar221 + _UNK_0011b7c6 +
                                    (_LC31[3] - uVar221) * sVar220) >> 6;
                  uVar226 = (ushort)(uVar225 * uVar226 + _UNK_0011b7c8 +
                                    (_LC31[4] - uVar226) * uVar127) >> 6;
                  uVar235 = (ushort)(uVar234 * uVar235 + _UNK_0011b7ca +
                                    (_LC31[5] - uVar235) * uVar233) >> 6;
                  uVar241 = (ushort)(uVar240 * uVar241 + _UNK_0011b7cc +
                                    (_LC31[6] - uVar241) * uVar239) >> 6;
                  uVar249 = (ushort)(uVar248 * uVar249 + _UNK_0011b7ce +
                                    (_LC31[7] - uVar249) * uVar247) >> 6;
                  if ((param_1 & 8) == 0) {
                    local_1aa8 = (undefined1  [16])0x0;
                    lVar122 = 0;
                    local_1a98 = (undefined1  [16])0x0;
                    local_1a88 = (undefined1  [16])0x0;
                    local_1a78 = (undefined1  [16])0x0;
                    local_1a68 = (undefined1  [16])0x0;
                    local_1a58 = (undefined1  [16])0x0;
                    piVar120 = (int *)local_1aa8;
                    do {
                      pFVar107 = pFVar126 + lVar122;
                      sVar200 = *(short *)((long)local_1b98 + lVar122) - *(short *)pFVar107;
                      sVar211 = *(short *)((long)local_1b98 + lVar122 + 2) -
                                *(short *)(pFVar107 + 2);
                      sVar216 = *(short *)((long)local_1b98 + lVar122 + 4) -
                                *(short *)(pFVar107 + 4);
                      sVar223 = *(short *)((long)local_1b98 + lVar122 + 6) -
                                *(short *)(pFVar107 + 6);
                      sVar229 = *(short *)((long)local_1b98 + lVar122 + 8) -
                                *(short *)(pFVar107 + 8);
                      sVar237 = *(short *)((long)local_1b98 + lVar122 + 10) -
                                *(short *)(pFVar107 + 10);
                      sVar243 = *(short *)((long)local_1b98 + lVar122 + 0xc) -
                                *(short *)(pFVar107 + 0xc);
                      sVar251 = *(short *)((long)local_1b98 + lVar122 + 0xe) -
                                *(short *)(pFVar107 + 0xe);
                      lVar122 = lVar122 + 0x10;
                      sVar223 = sVar223 * sVar223;
                      uVar228 = sVar229 * sVar229;
                      auVar58._2_2_ = uVar228;
                      auVar58._0_2_ = sVar223;
                      auVar58._4_8_ = 0;
                      auVar11._12_2_ = sVar223;
                      auVar11._0_12_ = auVar58 << 0x30;
                      uVar56 = CONCAT44(auVar11._10_4_,CONCAT22(sVar216 * sVar216,sVar223));
                      auVar51._6_8_ = 0;
                      auVar51._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                      piVar120[4] = (uint)uVar228 + piVar120[4];
                      piVar120[5] = (uint)(ushort)(sVar237 * sVar237) + piVar120[5];
                      piVar120[6] = (uint)(ushort)(sVar243 * sVar243) + piVar120[6];
                      piVar120[7] = (uint)(ushort)(sVar251 * sVar251) + piVar120[7];
                      *piVar120 = (uint)(ushort)(sVar200 * sVar200) + *piVar120;
                      piVar120[1] = (int)CONCAT82(SUB148(auVar51 << 0x40,6),sVar211 * sVar211) +
                                    piVar120[1];
                      piVar120[2] = (int)((ulong)uVar56 >> 0x10) + piVar120[2];
                      piVar120[3] = (auVar11._10_4_ >> 0x10) + piVar120[3];
                      piVar120 = piVar120 + 8;
                    } while (lVar122 != 0x30);
                    pVVar113 = param_2 + lVar110 * 4 + uVar106 * 0x10;
                    sVar200 = *(short *)pVVar113;
                    sVar211 = *(short *)(pVVar113 + 2);
                    sVar216 = *(short *)(pVVar113 + 4);
                    sVar223 = *(short *)(pVVar113 + 6);
                    sVar229 = *(short *)(pVVar113 + 8);
                    sVar237 = *(short *)(pVVar113 + 10);
                    sVar243 = *(short *)(pVVar113 + 0xc);
                    sVar251 = *(short *)(pVVar113 + 0xe);
                    sVar136 = uVar198 - sVar200;
                    sVar154 = uVar209 - sVar211;
                    sVar155 = uVar214 - sVar216;
                    sVar156 = uVar221 - sVar223;
                    sVar157 = uVar226 - sVar229;
                    sVar158 = uVar235 - sVar237;
                    sVar159 = uVar241 - sVar243;
                    sVar160 = uVar249 - sVar251;
                    sVar156 = sVar156 * sVar156;
                    uVar198 = sVar157 * sVar157;
                    auVar59._2_2_ = uVar198;
                    auVar59._0_2_ = sVar156;
                    auVar59._4_8_ = 0;
                    auVar12._12_2_ = sVar156;
                    auVar12._0_12_ = auVar59 << 0x30;
                    uVar56 = CONCAT44(auVar12._10_4_,CONCAT22(sVar155 * sVar155,sVar156));
                    auVar52._6_8_ = 0;
                    auVar52._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                    auVar148._0_4_ = (float)uVar198;
                    auVar148._4_4_ = (float)(ushort)(sVar158 * sVar158);
                    auVar148._8_4_ = (float)(ushort)(sVar159 * sVar159);
                    auVar148._12_4_ = (float)(ushort)(sVar160 * sVar160);
                    auVar272._0_4_ = (float)(ushort)(sVar136 * sVar136);
                    auVar272._4_4_ =
                         (float)(int)CONCAT82(SUB148(auVar52 << 0x40,6),sVar154 * sVar154);
                    auVar272._8_4_ = (float)(int)((ulong)uVar56 >> 0x10);
                    auVar272._12_4_ = (float)(auVar12._10_4_ >> 0x10);
                    if ((param_1 & 0x200) == 0) {
                      auVar281._0_4_ =
                           (float)(int)local_1a78._0_4_ * fVar3 +
                           (float)(int)local_1a98._0_4_ * fVar1 +
                           (float)(int)local_1a58._0_4_ * fVar2;
                      auVar281._4_4_ =
                           (float)(int)local_1a78._4_4_ * fVar3 +
                           (float)(int)local_1a98._4_4_ * fVar1 +
                           (float)(int)local_1a58._4_4_ * fVar2;
                      auVar281._8_4_ =
                           (float)(int)local_1a78._8_4_ * fVar3 +
                           (float)(int)local_1a98._8_4_ * fVar1 +
                           (float)(int)local_1a58._8_4_ * fVar2;
                      auVar281._12_4_ =
                           (float)(int)local_1a78._12_4_ * fVar3 +
                           (float)(int)local_1a98._12_4_ * fVar1 +
                           (float)(int)local_1a58._12_4_ * fVar2;
                      auVar283._0_4_ =
                           (float)(int)local_1a88._0_4_ * fVar3 +
                           (float)(int)local_1aa8._0_4_ * fVar1 +
                           (float)(int)local_1a68._0_4_ * fVar2;
                      auVar283._4_4_ =
                           (float)(int)local_1a88._4_4_ * fVar3 +
                           (float)(int)local_1aa8._4_4_ * fVar1 +
                           (float)(int)local_1a68._4_4_ * fVar2;
                      auVar283._8_4_ =
                           (float)(int)local_1a88._8_4_ * fVar3 +
                           (float)(int)local_1aa8._8_4_ * fVar1 +
                           (float)(int)local_1a68._8_4_ * fVar2;
                      auVar283._12_4_ =
                           (float)(int)local_1a88._12_4_ * fVar3 +
                           (float)(int)local_1aa8._12_4_ * fVar1 +
                           (float)(int)local_1a68._12_4_ * fVar2;
                      auVar272._0_4_ = auVar272._0_4_ * fVar4;
                      auVar272._4_4_ = auVar272._4_4_ * fVar4;
                      auVar272._8_4_ = auVar272._8_4_ * fVar4;
                      auVar272._12_4_ = auVar272._12_4_ * fVar4;
                      auVar148._0_4_ = auVar148._0_4_ * fVar4;
                      auVar148._4_4_ = auVar148._4_4_ * fVar4;
                      auVar148._8_4_ = auVar148._8_4_ * fVar4;
                      auVar148._12_4_ = auVar148._12_4_ * fVar4;
                    }
                    else {
                      auVar283._0_4_ =
                           (float)(int)(local_1a88._0_4_ + local_1aa8._0_4_ + local_1a68._0_4_);
                      auVar283._4_4_ =
                           (float)(int)(local_1a88._4_4_ + local_1aa8._4_4_ + local_1a68._4_4_);
                      auVar283._8_4_ =
                           (float)(int)(local_1a88._8_4_ + local_1aa8._8_4_ + local_1a68._8_4_);
                      auVar283._12_4_ =
                           (float)(int)(local_1a88._12_4_ + local_1aa8._12_4_ + local_1a68._12_4_);
                      auVar281._0_4_ =
                           (float)(int)(local_1a78._0_4_ + local_1a98._0_4_ + local_1a58._0_4_);
                      auVar281._4_4_ =
                           (float)(int)(local_1a78._4_4_ + local_1a98._4_4_ + local_1a58._4_4_);
                      auVar281._8_4_ =
                           (float)(int)(local_1a78._8_4_ + local_1a98._8_4_ + local_1a58._8_4_);
                      auVar281._12_4_ =
                           (float)(int)(local_1a78._12_4_ + local_1a98._12_4_ + local_1a58._12_4_);
                    }
                    sVar136 = sVar199 + __LC43;
                    sVar154 = sVar210 + _UNK_0011b7d2;
                    sVar155 = sVar215 + _UNK_0011b7d4;
                    sVar156 = sVar222 + _UNK_0011b7d6;
                    sVar157 = sVar227 + _UNK_0011b7d8;
                    sVar158 = sVar236 + _UNK_0011b7da;
                    sVar159 = sVar242 + _UNK_0011b7dc;
                    sVar160 = sVar250 + _UNK_0011b7de;
                    lVar122 = 0;
                    local_1bd8[8] =
                         (ushort)(sVar100 < sVar136) * sVar100 |
                         (ushort)(sVar100 >= sVar136) * sVar136;
                    local_1bd8[9] =
                         (ushort)(sVar100 < sVar154) * sVar100 |
                         (ushort)(sVar100 >= sVar154) * sVar154;
                    local_1bd8[10] =
                         (ushort)(sVar100 < sVar155) * sVar100 |
                         (ushort)(sVar100 >= sVar155) * sVar155;
                    uStack_1bc2 = (ushort)(sVar100 < sVar156) * sVar100 |
                                  (ushort)(sVar100 >= sVar156) * sVar156;
                    uStack_1bc0 = (ushort)(sVar100 < sVar157) * sVar100 |
                                  (ushort)(sVar100 >= sVar157) * sVar157;
                    uStack_1bbe = (ushort)(sVar100 < sVar158) * sVar100 |
                                  (ushort)(sVar100 >= sVar158) * sVar158;
                    uStack_1bbc = (ushort)(sVar100 < sVar159) * sVar100 |
                                  (ushort)(sVar100 >= sVar159) * sVar159;
                    uStack_1bba = (ushort)(sVar100 < sVar160) * sVar100 |
                                  (ushort)(sVar100 >= sVar160) * sVar160;
                    local_1bd8[0] =
                         ((ushort)(__LC43 < sVar199) * sVar199 |
                         (ushort)(__LC43 >= sVar199) * __LC43) + __LC45;
                    local_1bd8[1] =
                         ((ushort)(_UNK_0011b7d2 < sVar210) * sVar210 |
                         (ushort)(_UNK_0011b7d2 >= sVar210) * _UNK_0011b7d2) + _UNK_0011b7e2;
                    local_1bd8[2] =
                         ((ushort)(_UNK_0011b7d4 < sVar215) * sVar215 |
                         (ushort)(_UNK_0011b7d4 >= sVar215) * _UNK_0011b7d4) + _UNK_0011b7e4;
                    local_1bd8[3] =
                         ((ushort)(_UNK_0011b7d6 < sVar222) * sVar222 |
                         (ushort)(_UNK_0011b7d6 >= sVar222) * _UNK_0011b7d6) + _UNK_0011b7e6;
                    local_1bd8[4] =
                         ((ushort)(_UNK_0011b7d8 < sVar227) * sVar227 |
                         (ushort)(_UNK_0011b7d8 >= sVar227) * _UNK_0011b7d8) + _UNK_0011b7e8;
                    local_1bd8[5] =
                         ((ushort)(_UNK_0011b7da < sVar236) * sVar236 |
                         (ushort)(_UNK_0011b7da >= sVar236) * _UNK_0011b7da) + _UNK_0011b7ea;
                    local_1bd8[6] =
                         ((ushort)(_UNK_0011b7dc < sVar242) * sVar242 |
                         (ushort)(_UNK_0011b7dc >= sVar242) * _UNK_0011b7dc) + _UNK_0011b7ec;
                    local_1bd8[7] =
                         ((ushort)(_UNK_0011b7de < sVar250) * sVar250 |
                         (ushort)(_UNK_0011b7de >= sVar250) * _UNK_0011b7de) + _UNK_0011b7ee;
                    sVar199 = sVar201 + __LC43;
                    sVar210 = sVar212 + _UNK_0011b7d2;
                    sVar215 = sVar217 + _UNK_0011b7d4;
                    sVar222 = sVar224 + _UNK_0011b7d6;
                    sVar227 = sVar230 + _UNK_0011b7d8;
                    sVar236 = sVar238 + _UNK_0011b7da;
                    sVar242 = sVar244 + _UNK_0011b7dc;
                    sVar250 = sVar252 + _UNK_0011b7de;
                    local_1ba8 = (ushort)(sVar111 < sVar199) * sVar111 |
                                 (ushort)(sVar111 >= sVar199) * sVar199;
                    uStack_1ba6 = (ushort)(sVar111 < sVar210) * sVar111 |
                                  (ushort)(sVar111 >= sVar210) * sVar210;
                    uStack_1ba4 = (ushort)(sVar111 < sVar215) * sVar111 |
                                  (ushort)(sVar111 >= sVar215) * sVar215;
                    uStack_1ba2 = (ushort)(sVar111 < sVar222) * sVar111 |
                                  (ushort)(sVar111 >= sVar222) * sVar222;
                    uStack_1ba0 = (ushort)(sVar111 < sVar227) * sVar111 |
                                  (ushort)(sVar111 >= sVar227) * sVar227;
                    uStack_1b9e = (ushort)(sVar111 < sVar236) * sVar111 |
                                  (ushort)(sVar111 >= sVar236) * sVar236;
                    uStack_1b9c = (ushort)(sVar111 < sVar242) * sVar111 |
                                  (ushort)(sVar111 >= sVar242) * sVar242;
                    uStack_1b9a = (ushort)(sVar111 < sVar250) * sVar111 |
                                  (ushort)(sVar111 >= sVar250) * sVar250;
                    local_1bb8 = ((ushort)(__LC43 < sVar201) * sVar201 |
                                 (ushort)(__LC43 >= sVar201) * __LC43) + __LC45;
                    sStack_1bb6 = ((ushort)(_UNK_0011b7d2 < sVar212) * sVar212 |
                                  (ushort)(_UNK_0011b7d2 >= sVar212) * _UNK_0011b7d2) +
                                  _UNK_0011b7e2;
                    sStack_1bb4 = ((ushort)(_UNK_0011b7d4 < sVar217) * sVar217 |
                                  (ushort)(_UNK_0011b7d4 >= sVar217) * _UNK_0011b7d4) +
                                  _UNK_0011b7e4;
                    sStack_1bb2 = ((ushort)(_UNK_0011b7d6 < sVar224) * sVar224 |
                                  (ushort)(_UNK_0011b7d6 >= sVar224) * _UNK_0011b7d6) +
                                  _UNK_0011b7e6;
                    sStack_1bb0 = ((ushort)(_UNK_0011b7d8 < sVar230) * sVar230 |
                                  (ushort)(_UNK_0011b7d8 >= sVar230) * _UNK_0011b7d8) +
                                  _UNK_0011b7e8;
                    sStack_1bae = ((ushort)(_UNK_0011b7da < sVar238) * sVar238 |
                                  (ushort)(_UNK_0011b7da >= sVar238) * _UNK_0011b7da) +
                                  _UNK_0011b7ea;
                    sStack_1bac = ((ushort)(_UNK_0011b7dc < sVar244) * sVar244 |
                                  (ushort)(_UNK_0011b7dc >= sVar244) * _UNK_0011b7dc) +
                                  _UNK_0011b7ec;
                    sStack_1baa = ((ushort)(_UNK_0011b7de < sVar252) * sVar252 |
                                  (ushort)(_UNK_0011b7de >= sVar252) * _UNK_0011b7de) +
                                  _UNK_0011b7ee;
                    while( true ) {
                      sVar199 = *(short *)((long)local_1bd8 + lVar122);
                      sVar210 = *(short *)((long)local_1bd8 + lVar122 + 2);
                      sVar215 = *(short *)((long)local_1bd8 + lVar122 + 4);
                      sVar222 = *(short *)((long)local_1bd8 + lVar122 + 6);
                      sVar227 = *(short *)((long)local_1bd8 + lVar122 + 8);
                      sVar236 = *(short *)((long)local_1bd8 + lVar122 + 10);
                      sVar242 = *(short *)((long)local_1bd8 + lVar122 + 0xc);
                      sVar250 = *(short *)((long)local_1bd8 + lVar122 + 0xe);
                      uVar198 = (ushort)(local_2088 * sVar199 + __LC30) >> 9;
                      uVar209 = (ushort)(sStack_2086 * sVar210 + _UNK_0011b742) >> 9;
                      uVar214 = (ushort)(sStack_2084 * sVar215 + _UNK_0011b744) >> 9;
                      uVar221 = (ushort)(sStack_2082 * sVar222 + _UNK_0011b746) >> 9;
                      uVar226 = (ushort)(sStack_2080 * sVar227 + _UNK_0011b748) >> 9;
                      uVar235 = (ushort)(sStack_207e * sVar236 + _UNK_0011b74a) >> 9;
                      uVar241 = (ushort)(sStack_207c * sVar242 + _UNK_0011b74c) >> 9;
                      uVar249 = (ushort)(sStack_207a * sVar250 + _UNK_0011b74e) >> 9;
                      pIVar96 = (IndexSelector<3> *)&local_1398;
                      puVar121 = local_1b98;
                      do {
                        sVar201 = *(short *)pIVar96;
                        sVar212 = *(short *)(pIVar96 + 2);
                        sVar217 = *(short *)(pIVar96 + 4);
                        sVar224 = *(short *)(pIVar96 + 6);
                        sVar230 = *(short *)(pIVar96 + 8);
                        sVar238 = *(short *)(pIVar96 + 10);
                        sVar244 = *(short *)(pIVar96 + 0xc);
                        sVar252 = *(short *)(pIVar96 + 0xe);
                        pIVar108 = pIVar96 + 0x30;
                        sVar136 = *(short *)(pIVar96 + 0x32);
                        sVar154 = *(short *)(pIVar96 + 0x34);
                        sVar155 = *(short *)(pIVar96 + 0x36);
                        sVar156 = *(short *)(pIVar96 + 0x38);
                        sVar157 = *(short *)(pIVar96 + 0x3a);
                        sVar158 = *(short *)(pIVar96 + 0x3c);
                        sVar159 = *(short *)(pIVar96 + 0x3e);
                        pIVar96 = pIVar96 + 0x10;
                        *puVar121 = (ushort)(sVar201 * (_LC31[0] - uVar198) +
                                             *(short *)pIVar108 * uVar198 + __LC42) >> 6;
                        puVar121[1] = (ushort)(sVar212 * (_LC31[1] - uVar209) + sVar136 * uVar209 +
                                              _UNK_0011b7c2) >> 6;
                        puVar121[2] = (ushort)(sVar217 * (_LC31[2] - uVar214) + sVar154 * uVar214 +
                                              _UNK_0011b7c4) >> 6;
                        puVar121[3] = (ushort)(sVar224 * (_LC31[3] - uVar221) + sVar155 * uVar221 +
                                              _UNK_0011b7c6) >> 6;
                        puVar121[4] = (ushort)(sVar230 * (_LC31[4] - uVar226) + sVar156 * uVar226 +
                                              _UNK_0011b7c8) >> 6;
                        puVar121[5] = (ushort)(sVar238 * (_LC31[5] - uVar235) + sVar157 * uVar235 +
                                              _UNK_0011b7ca) >> 6;
                        puVar121[6] = (ushort)(sVar244 * (_LC31[6] - uVar241) + sVar158 * uVar241 +
                                              _UNK_0011b7cc) >> 6;
                        puVar121[7] = (ushort)(sVar252 * (_LC31[7] - uVar249) + sVar159 * uVar249 +
                                              _UNK_0011b7ce) >> 6;
                        puVar121 = puVar121 + 8;
                      } while ((IndexSelector<3> *)&local_1368 != pIVar96);
                      auVar185 = *(undefined1 (*) [16])((long)&local_1bb8 + lVar122);
                      lVar128 = 0;
                      _local_1858 = (undefined1  [16])0x0;
                      local_1848 = (undefined1  [16])0x0;
                      local_1838 = (undefined1  [16])0x0;
                      local_1828 = (undefined1  [16])0x0;
                      local_1818 = (undefined1  [16])0x0;
                      local_1808 = (undefined1  [16])0x0;
                      uVar198 = (ushort)(local_2098 * auVar185._0_2_ + __LC30) >> 9;
                      uVar209 = (ushort)(sStack_2096 * auVar185._2_2_ + _UNK_0011b742) >> 9;
                      uVar214 = (ushort)(sStack_2094 * auVar185._4_2_ + _UNK_0011b744) >> 9;
                      uVar221 = (ushort)(sStack_2092 * auVar185._6_2_ + _UNK_0011b746) >> 9;
                      uVar226 = (ushort)(sStack_2090 * auVar185._8_2_ + _UNK_0011b748) >> 9;
                      uVar235 = (ushort)(sStack_208e * auVar185._10_2_ + _UNK_0011b74a) >> 9;
                      uVar241 = (ushort)(sStack_208c * auVar185._12_2_ + _UNK_0011b74c) >> 9;
                      uVar249 = (ushort)(sStack_208a * auVar185._14_2_ + _UNK_0011b74e) >> 9;
                      pFVar107 = local_1858;
                      do {
                        pFVar123 = pFVar126 + lVar128;
                        sVar201 = *(short *)((long)local_1b98 + lVar128) - *(short *)pFVar123;
                        sVar212 = *(short *)((long)local_1b98 + lVar128 + 2) -
                                  *(short *)(pFVar123 + 2);
                        sVar217 = *(short *)((long)local_1b98 + lVar128 + 4) -
                                  *(short *)(pFVar123 + 4);
                        sVar224 = *(short *)((long)local_1b98 + lVar128 + 6) -
                                  *(short *)(pFVar123 + 6);
                        sVar230 = *(short *)((long)local_1b98 + lVar128 + 8) -
                                  *(short *)(pFVar123 + 8);
                        sVar238 = *(short *)((long)local_1b98 + lVar128 + 10) -
                                  *(short *)(pFVar123 + 10);
                        sVar244 = *(short *)((long)local_1b98 + lVar128 + 0xc) -
                                  *(short *)(pFVar123 + 0xc);
                        sVar252 = *(short *)((long)local_1b98 + lVar128 + 0xe) -
                                  *(short *)(pFVar123 + 0xe);
                        lVar128 = lVar128 + 0x10;
                        sVar224 = sVar224 * sVar224;
                        uVar228 = sVar230 * sVar230;
                        auVar60._2_2_ = uVar228;
                        auVar60._0_2_ = sVar224;
                        auVar60._4_8_ = 0;
                        auVar13._12_2_ = sVar224;
                        auVar13._0_12_ = auVar60 << 0x30;
                        uVar56 = CONCAT44(auVar13._10_4_,CONCAT22(sVar217 * sVar217,sVar224));
                        auVar53._6_8_ = 0;
                        auVar53._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                        *(uint *)(pFVar107 + 0x10) = (uint)uVar228 + *(int *)(pFVar107 + 0x10);
                        *(uint *)(pFVar107 + 0x14) =
                             (uint)(ushort)(sVar238 * sVar238) + *(int *)(pFVar107 + 0x14);
                        *(uint *)(pFVar107 + 0x18) =
                             (uint)(ushort)(sVar244 * sVar244) + *(int *)(pFVar107 + 0x18);
                        *(uint *)(pFVar107 + 0x1c) =
                             (uint)(ushort)(sVar252 * sVar252) + *(int *)(pFVar107 + 0x1c);
                        *(uint *)pFVar107 = (uint)(ushort)(sVar201 * sVar201) + *(int *)pFVar107;
                        *(int *)(pFVar107 + 4) =
                             (int)CONCAT82(SUB148(auVar53 << 0x40,6),sVar212 * sVar212) +
                             *(int *)(pFVar107 + 4);
                        *(int *)(pFVar107 + 8) =
                             (int)((ulong)uVar56 >> 0x10) + *(int *)(pFVar107 + 8);
                        *(uint *)(pFVar107 + 0xc) =
                             (auVar13._10_4_ >> 0x10) + *(int *)(pFVar107 + 0xc);
                        pFVar107 = pFVar107 + 0x20;
                      } while (lVar128 != 0x30);
                      sVar201 = ((ushort)((_LC31[0] - uVar198) * local_2068 +
                                         uVar198 * local_2078 + __LC42) >> 6) - sVar200;
                      sVar212 = ((ushort)((_LC31[1] - uVar209) * sVar208 +
                                         uVar209 * sVar256 + _UNK_0011b7c2) >> 6) - sVar211;
                      sVar217 = ((ushort)((_LC31[2] - uVar214) * sVar213 +
                                         uVar214 * sVar257 + _UNK_0011b7c4) >> 6) - sVar216;
                      sVar224 = ((ushort)((_LC31[3] - uVar221) * sVar220 +
                                         uVar221 * sVar259 + _UNK_0011b7c6) >> 6) - sVar223;
                      sVar230 = ((ushort)((_LC31[4] - uVar226) * uVar127 +
                                         uVar226 * uVar225 + _UNK_0011b7c8) >> 6) - sVar229;
                      sVar238 = ((ushort)((_LC31[5] - uVar235) * uVar233 +
                                         uVar235 * uVar234 + _UNK_0011b7ca) >> 6) - sVar237;
                      sVar244 = ((ushort)((_LC31[6] - uVar241) * uVar239 +
                                         uVar241 * uVar240 + _UNK_0011b7cc) >> 6) - sVar243;
                      sVar252 = ((ushort)((_LC31[7] - uVar249) * uVar247 +
                                         uVar249 * uVar248 + _UNK_0011b7ce) >> 6) - sVar251;
                      sVar224 = sVar224 * sVar224;
                      uVar198 = sVar230 * sVar230;
                      auVar61._2_2_ = uVar198;
                      auVar61._0_2_ = sVar224;
                      auVar61._4_8_ = 0;
                      auVar14._12_2_ = sVar224;
                      auVar14._0_12_ = auVar61 << 0x30;
                      uVar56 = CONCAT44(auVar14._10_4_,CONCAT22(sVar217 * sVar217,sVar224));
                      auVar54._6_8_ = 0;
                      auVar54._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                      auVar169._0_4_ = (float)uVar198;
                      auVar169._4_4_ = (float)(ushort)(sVar238 * sVar238);
                      auVar169._8_4_ = (float)(ushort)(sVar244 * sVar244);
                      auVar169._12_4_ = (float)(ushort)(sVar252 * sVar252);
                      auVar271._0_4_ = (float)(ushort)(sVar201 * sVar201);
                      auVar271._4_4_ =
                           (float)(int)CONCAT82(SUB148(auVar54 << 0x40,6),sVar212 * sVar212);
                      auVar271._8_4_ = (float)(int)((ulong)uVar56 >> 0x10);
                      auVar271._12_4_ = (float)(auVar14._10_4_ >> 0x10);
                      if ((param_1 & 0x200) == 0) {
                        auVar282._0_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar282._4_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar282._8_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar282._12_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar271._0_4_ = auVar271._0_4_ * fVar4;
                        auVar271._4_4_ = auVar271._4_4_ * fVar4;
                        auVar271._8_4_ = auVar271._8_4_ * fVar4;
                        auVar271._12_4_ = auVar271._12_4_ * fVar4;
                        auVar169._0_4_ = auVar169._0_4_ * fVar4;
                        auVar169._4_4_ = auVar169._4_4_ * fVar4;
                        auVar169._8_4_ = auVar169._8_4_ * fVar4;
                        auVar169._12_4_ = auVar169._12_4_ * fVar4;
                        auVar280._0_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar280._4_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar280._8_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                        auVar280._12_4_ = fVar2 * 0.0 + fVar3 * 0.0 + fVar1 * 0.0;
                      }
                      else {
                        auVar282 = ZEXT816(0);
                        auVar280 = ZEXT816(0);
                      }
                      auVar206._4_4_ = -(uint)(auVar280._4_4_ < auVar281._4_4_);
                      auVar206._0_4_ = -(uint)(auVar280._0_4_ < auVar281._0_4_);
                      auVar206._8_4_ = -(uint)(auVar280._8_4_ < auVar281._8_4_);
                      auVar206._12_4_ = -(uint)(auVar280._12_4_ < auVar281._12_4_);
                      auVar254._4_4_ = -(uint)(auVar282._4_4_ < auVar283._4_4_);
                      auVar254._0_4_ = -(uint)(auVar282._0_4_ < auVar283._0_4_);
                      auVar254._8_4_ = -(uint)(auVar282._8_4_ < auVar283._8_4_);
                      auVar254._12_4_ = -(uint)(auVar282._12_4_ < auVar283._12_4_);
                      auVar170 = minps(auVar169,auVar148);
                      auVar284._4_4_ = -(uint)(auVar169._4_4_ < auVar148._4_4_);
                      auVar284._0_4_ = -(uint)(auVar169._0_4_ < auVar148._0_4_);
                      auVar284._8_4_ = -(uint)(auVar169._8_4_ < auVar148._8_4_);
                      auVar284._12_4_ = -(uint)(auVar169._12_4_ < auVar148._12_4_);
                      auVar283 = minps(auVar282,auVar283);
                      auVar281 = minps(auVar280,auVar281);
                      auVar255 = packssdw(auVar254,auVar206);
                      auVar207._4_4_ = -(uint)(auVar271._4_4_ < auVar272._4_4_);
                      auVar207._0_4_ = -(uint)(auVar271._0_4_ < auVar272._0_4_);
                      auVar207._8_4_ = -(uint)(auVar271._8_4_ < auVar272._8_4_);
                      auVar207._12_4_ = -(uint)(auVar271._12_4_ < auVar272._12_4_);
                      auVar40._2_2_ = sVar210;
                      auVar40._0_2_ = sVar199;
                      auVar40._4_2_ = sVar215;
                      auVar40._6_2_ = sVar222;
                      auVar40._8_2_ = sVar227;
                      auVar40._10_2_ = sVar236;
                      auVar40._12_2_ = sVar242;
                      auVar40._14_2_ = sVar250;
                      auVar272 = minps(auVar271,auVar272);
                      auVar166 = auVar255 & auVar40 | ~auVar255 & auVar166;
                      auVar255 = packssdw(auVar207,auVar284);
                      auVar264 = auVar185 & auVar255 | ~auVar255 & auVar264;
                      if (lVar122 == 0x10) break;
                      lVar122 = 0x10;
                      auVar148 = auVar170;
                    }
                    local_20a8._0_4_ = auVar272._0_4_ + (float)local_20a8._0_4_;
                    local_20a8._4_4_ = auVar272._4_4_ + (float)local_20a8._4_4_;
                    fStack_20a0 = auVar272._8_4_ + fStack_20a0;
                    fStack_209c = auVar272._12_4_ + fStack_209c;
                    local_1e08 = auVar285._0_4_;
                    fStack_1e04 = auVar285._4_4_;
                    fStack_1e00 = auVar285._8_4_;
                    fStack_1dfc = auVar285._12_4_;
                    local_1ff8._4_4_ = auVar281._4_4_ + (float)local_1ff8._4_4_;
                    local_1ff8._0_4_ = auVar281._0_4_ + (float)local_1ff8._0_4_;
                    fStack_1ff0 = auVar281._8_4_ + fStack_1ff0;
                    fStack_1fec = auVar281._12_4_ + fStack_1fec;
                    auVar285._0_4_ = local_1e08 + auVar283._0_4_;
                    auVar285._4_4_ = fStack_1e04 + auVar283._4_4_;
                    auVar285._8_4_ = fStack_1e00 + auVar283._8_4_;
                    auVar285._12_4_ = fStack_1dfc + auVar283._12_4_;
                    local_20b8._4_4_ = auVar170._4_4_ + (float)local_20b8._4_4_;
                    local_20b8._0_4_ = auVar170._0_4_ + (float)local_20b8._0_4_;
                    fStack_20b0 = auVar170._8_4_ + fStack_20b0;
                    fStack_20ac = auVar170._12_4_ + fStack_20ac;
                    if (local_1e68 != iVar101) goto LAB_0010a6c8;
                  }
                  else {
                    lVar122 = 0;
                    piVar120 = (int *)local_1b08;
                    do {
                      pFVar107 = pFVar126 + lVar122;
                      sVar199 = *(short *)((long)local_1b98 + lVar122) - *(short *)pFVar107;
                      sVar210 = *(short *)((long)local_1b98 + lVar122 + 2) -
                                *(short *)(pFVar107 + 2);
                      sVar215 = *(short *)((long)local_1b98 + lVar122 + 4) -
                                *(short *)(pFVar107 + 4);
                      sVar222 = *(short *)((long)local_1b98 + lVar122 + 6) -
                                *(short *)(pFVar107 + 6);
                      sVar227 = *(short *)((long)local_1b98 + lVar122 + 8) -
                                *(short *)(pFVar107 + 8);
                      sVar236 = *(short *)((long)local_1b98 + lVar122 + 10) -
                                *(short *)(pFVar107 + 10);
                      sVar242 = *(short *)((long)local_1b98 + lVar122 + 0xc) -
                                *(short *)(pFVar107 + 0xc);
                      sVar250 = *(short *)((long)local_1b98 + lVar122 + 0xe) -
                                *(short *)(pFVar107 + 0xe);
                      lVar122 = lVar122 + 0x10;
                      sVar222 = sVar222 * sVar222;
                      uVar228 = sVar227 * sVar227;
                      auVar55._2_2_ = uVar228;
                      auVar55._0_2_ = sVar222;
                      auVar55._4_8_ = 0;
                      auVar20._12_2_ = sVar222;
                      auVar20._0_12_ = auVar55 << 0x30;
                      uVar56 = CONCAT44(auVar20._10_4_,CONCAT22(sVar215 * sVar215,sVar222));
                      auVar47._6_8_ = 0;
                      auVar47._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                      piVar120[4] = (uint)uVar228 + piVar120[4];
                      piVar120[5] = (uint)(ushort)(sVar236 * sVar236) + piVar120[5];
                      piVar120[6] = (uint)(ushort)(sVar242 * sVar242) + piVar120[6];
                      piVar120[7] = (uint)(ushort)(sVar250 * sVar250) + piVar120[7];
                      *piVar120 = (uint)(ushort)(sVar199 * sVar199) + *piVar120;
                      piVar120[1] = (int)CONCAT82(SUB148(auVar47 << 0x40,6),sVar210 * sVar210) +
                                    piVar120[1];
                      piVar120[2] = (int)((ulong)uVar56 >> 0x10) + piVar120[2];
                      piVar120[3] = (auVar20._10_4_ >> 0x10) + piVar120[3];
                      piVar120 = piVar120 + 8;
                    } while (lVar122 != 0x30);
                    pVVar113 = param_2 + lVar110 * 4 + uVar106 * 0x10;
                    sVar199 = uVar198 - *(short *)pVVar113;
                    sVar210 = uVar209 - *(short *)(pVVar113 + 2);
                    sVar215 = uVar214 - *(short *)(pVVar113 + 4);
                    sVar222 = uVar221 - *(short *)(pVVar113 + 6);
                    sVar227 = uVar226 - *(short *)(pVVar113 + 8);
                    sVar236 = uVar235 - *(short *)(pVVar113 + 10);
                    sVar242 = uVar241 - *(short *)(pVVar113 + 0xc);
                    sVar250 = uVar249 - *(short *)(pVVar113 + 0xe);
                    sVar222 = sVar222 * sVar222;
                    uVar198 = sVar227 * sVar227;
                    auVar57._2_2_ = uVar198;
                    auVar57._0_2_ = sVar222;
                    auVar57._4_8_ = 0;
                    auVar9._12_2_ = sVar222;
                    auVar9._0_12_ = auVar57 << 0x30;
                    uVar56 = CONCAT44(auVar9._10_4_,CONCAT22(sVar215 * sVar215,sVar222));
                    auVar48._6_8_ = 0;
                    auVar48._0_6_ = (uint6)((ulong)uVar56 >> 0x10);
                    local_2038._4_4_ =
                         local_2038._4_4_ +
                         (int)CONCAT82(SUB148(auVar48 << 0x40,6),sVar210 * sVar210);
                    local_2038._0_4_ = local_2038._0_4_ + (uint)(ushort)(sVar199 * sVar199);
                    local_2038._8_4_ = local_2038._8_4_ + (int)((ulong)uVar56 >> 0x10);
                    local_2038._12_4_ = local_2038._12_4_ + (auVar9._10_4_ >> 0x10);
                    local_2048._4_4_ = local_2048._4_4_ + (uint)(ushort)(sVar236 * sVar236);
                    local_2048._0_4_ = local_2048._0_4_ + (uint)uVar198;
                    local_2048._8_4_ = local_2048._8_4_ + (uint)(ushort)(sVar242 * sVar242);
                    local_2048._12_4_ = local_2048._12_4_ + (uint)(ushort)(sVar250 * sVar250);
                    if (local_1e68 != iVar101) {
LAB_0010a6c8:
                      auVar10._10_2_ = 0;
                      auVar10._0_10_ = auVar166._0_10_;
                      auVar10._12_2_ = auVar166._6_2_;
                      auVar21._8_2_ = auVar166._4_2_;
                      auVar21._0_8_ = auVar166._0_8_;
                      auVar21._10_4_ = auVar10._10_4_;
                      auVar49._6_8_ = 0;
                      auVar49._0_6_ = auVar21._8_6_;
                      auVar28._4_2_ = auVar166._2_2_;
                      auVar28._0_4_ = auVar166._0_4_;
                      auVar28._6_8_ = SUB148(auVar49 << 0x40,6);
                      fVar262 = (float)(auVar166._0_4_ & 0xffff) * fVar177;
                      fVar267 = (float)auVar28._4_4_ * fVar177;
                      fVar268 = (float)auVar21._8_4_ * fVar177;
                      fVar269 = (float)(auVar10._10_4_ >> 0x10) * fVar177;
                      fVar218 = (float)auVar166._8_2_ * fVar177;
                      fVar231 = (float)auVar166._10_2_ * fVar177;
                      fVar245 = (float)auVar166._12_2_ * fVar177;
                      fVar175 = (float)auVar166._14_2_ * fVar177;
                      pFVar107 = (Float *)local_1268;
                      pFVar123 = pFVar117;
                      do {
                        fVar179 = *(float *)(pFVar123 + 0x14);
                        fVar193 = *(float *)(pFVar123 + 0x18);
                        fVar195 = *(float *)(pFVar123 + 0x1c);
                        fVar197 = *(float *)pFVar123;
                        fVar31 = *(float *)(pFVar123 + 4);
                        fVar32 = *(float *)(pFVar123 + 8);
                        fVar33 = *(float *)(pFVar123 + 0xc);
                        pFVar119 = pFVar107 + 0x20;
                        *(float *)(pFVar107 + 0x10) =
                             *(float *)(pFVar123 + 0x10) * fVar218 + *(float *)(pFVar107 + 0x10);
                        *(float *)(pFVar107 + 0x14) =
                             fVar179 * fVar231 + *(float *)(pFVar107 + 0x14);
                        *(float *)(pFVar107 + 0x18) =
                             fVar193 * fVar245 + *(float *)(pFVar107 + 0x18);
                        *(float *)(pFVar107 + 0x1c) =
                             fVar195 * fVar175 + *(float *)(pFVar107 + 0x1c);
                        fVar179 = *(float *)(pFVar123 + 0x10);
                        fVar193 = *(float *)(pFVar123 + 0x14);
                        fVar195 = *(float *)(pFVar123 + 0x18);
                        fVar34 = *(float *)(pFVar123 + 0x1c);
                        *(float *)pFVar107 = fVar197 * fVar262 + *(float *)pFVar107;
                        *(float *)(pFVar107 + 4) = fVar31 * fVar267 + *(float *)(pFVar107 + 4);
                        *(float *)(pFVar107 + 8) = fVar32 * fVar268 + *(float *)(pFVar107 + 8);
                        *(float *)(pFVar107 + 0xc) = fVar33 * fVar269 + *(float *)(pFVar107 + 0xc);
                        fVar197 = *(float *)pFVar123;
                        fVar31 = *(float *)(pFVar123 + 4);
                        fVar32 = *(float *)(pFVar123 + 8);
                        fVar33 = *(float *)(pFVar123 + 0xc);
                        *(float *)(pFVar107 + 0x70) = fVar179 + *(float *)(pFVar107 + 0x70);
                        *(float *)(pFVar107 + 0x74) = fVar193 + *(float *)(pFVar107 + 0x74);
                        *(float *)(pFVar107 + 0x78) = fVar195 + *(float *)(pFVar107 + 0x78);
                        *(float *)(pFVar107 + 0x7c) = fVar34 + *(float *)(pFVar107 + 0x7c);
                        *(float *)(pFVar107 + 0x60) = fVar197 + *(float *)(pFVar107 + 0x60);
                        *(float *)(pFVar107 + 100) = fVar31 + *(float *)(pFVar107 + 100);
                        *(float *)(pFVar107 + 0x68) = fVar32 + *(float *)(pFVar107 + 0x68);
                        *(float *)(pFVar107 + 0x6c) = fVar33 + *(float *)(pFVar107 + 0x6c);
                        pFVar107 = pFVar119;
                        pFVar123 = pFVar123 + 0x20;
                      } while (local_1208 != pFVar119);
                      local_1148 = local_1148 + 1;
                      iVar103 = iVar103 + 1;
                      bVar62 = true;
                      bVar63 = true;
                      bVar64 = true;
                      local_1178._4_4_ = fVar231 + (float)local_1178._4_4_;
                      local_1178._0_4_ = fVar218 + (float)local_1178._0_4_;
                      fStack_1170 = fVar245 + fStack_1170;
                      fStack_116c = fVar175 + fStack_116c;
                      local_1198._4_4_ = fVar231 * fVar231 + (float)local_1198._4_4_;
                      local_1198._0_4_ = fVar218 * fVar218 + (float)local_1198._0_4_;
                      fStack_1190 = fVar245 * fVar245 + fStack_1190;
                      fStack_118c = fVar175 * fVar175 + fStack_118c;
                      auVar22._10_2_ = 0;
                      auVar22._0_10_ = auVar264._0_10_;
                      auVar22._12_2_ = auVar264._6_2_;
                      auVar25._8_2_ = auVar264._4_2_;
                      auVar25._0_8_ = auVar264._0_8_;
                      auVar25._10_4_ = auVar22._10_4_;
                      auVar50._6_8_ = 0;
                      auVar50._0_6_ = auVar25._8_6_;
                      local_11a8._4_4_ = fVar267 * fVar267 + (float)local_11a8._4_4_;
                      local_11a8._0_4_ = fVar262 * fVar262 + (float)local_11a8._0_4_;
                      fStack_11a0 = fVar268 * fVar268 + fStack_11a0;
                      fStack_119c = fVar269 * fVar269 + fStack_119c;
                      bVar65 = true;
                      fVar179 = (float)auVar264._8_2_ * fVar178;
                      fVar193 = (float)auVar264._10_2_ * fVar178;
                      fVar195 = (float)auVar264._12_2_ * fVar178;
                      fVar197 = (float)auVar264._14_2_ * fVar178;
                      bVar66 = true;
                      fVar218 = (float)auVar264._0_2_ * fVar178;
                      fVar231 = (float)(int)CONCAT82(SUB148(auVar50 << 0x40,6),auVar264._2_2_) *
                                fVar178;
                      fVar245 = (float)auVar25._8_4_ * fVar178;
                      fVar175 = (float)(auVar22._10_4_ >> 0x10) * fVar178;
                      local_1188._4_4_ = fVar267 + (float)local_1188._4_4_;
                      local_1188._0_4_ = fVar262 + (float)local_1188._0_4_;
                      fStack_1180 = fVar268 + fStack_1180;
                      fStack_117c = fVar269 + fStack_117c;
                      local_19a8._4_4_ = fVar29 + (float)local_19a8._4_4_;
                      local_19a8._0_4_ = fVar204 + (float)local_19a8._0_4_;
                      fStack_19a0 = fVar30 + fStack_19a0;
                      fStack_199c = fVar176 + fStack_199c;
                      local_19b8._4_4_ = fVar194 * fVar193 + (float)local_19b8._4_4_;
                      local_19b8._0_4_ = fVar192 * fVar179 + (float)local_19b8._0_4_;
                      fStack_19b0 = fVar196 * fVar195 + fStack_19b0;
                      fStack_19ac = fVar202 * fVar197 + fStack_19ac;
                      local_19c8._4_4_ = fVar29 * fVar231 + (float)local_19c8._4_4_;
                      local_19c8._0_4_ = fVar204 * fVar218 + (float)local_19c8._0_4_;
                      fStack_19c0 = fVar30 * fVar245 + fStack_19c0;
                      fStack_19bc = fVar176 * fVar175 + fStack_19bc;
                      local_1998._4_4_ = (float)local_1998._4_4_ + fVar194;
                      local_1998._0_4_ = (float)local_1998._0_4_ + fVar192;
                      fStack_1990 = fStack_1990 + fVar196;
                      fStack_198c = fStack_198c + fVar202;
                      local_1fd8._4_4_ = fVar231 + (float)local_1fd8._4_4_;
                      local_1fd8._0_4_ = fVar218 + (float)local_1fd8._0_4_;
                      fStack_1fd0 = fVar245 + fStack_1fd0;
                      fStack_1fcc = fVar175 + fStack_1fcc;
                      local_1fb8._4_4_ = fVar231 * fVar231 + (float)local_1fb8._4_4_;
                      local_1fb8._0_4_ = fVar218 * fVar218 + (float)local_1fb8._0_4_;
                      fStack_1fb0 = fVar245 * fVar245 + fStack_1fb0;
                      fStack_1fac = fVar175 * fVar175 + fStack_1fac;
                      local_1fe8._4_4_ = fVar193 + (float)local_1fe8._4_4_;
                      local_1fe8._0_4_ = fVar179 + (float)local_1fe8._0_4_;
                      fStack_1fe0 = fVar195 + fStack_1fe0;
                      fStack_1fdc = fVar197 + fStack_1fdc;
                      local_1fc8._4_4_ = fVar193 * fVar193 + (float)local_1fc8._4_4_;
                      local_1fc8._0_4_ = fVar179 * fVar179 + (float)local_1fc8._0_4_;
                      fStack_1fc0 = fVar195 * fVar195 + fStack_1fc0;
                      fStack_1fbc = fVar197 * fVar197 + fStack_1fbc;
                      if ((param_1 & 8) == 0) goto LAB_0010a897;
                    }
                    local_20a8._4_4_ = (float)(int)local_2038._4_4_;
                    local_20a8._0_4_ = (float)(int)local_2038._0_4_;
                    fStack_20a0 = (float)(int)local_2038._8_4_;
                    fStack_209c = (float)(int)local_2038._12_4_;
                    local_20b8._4_4_ = (float)(int)local_2048._4_4_;
                    local_20b8._0_4_ = (float)(int)local_2048._0_4_;
                    fStack_20b0 = (float)(int)local_2048._8_4_;
                    fStack_20ac = (float)(int)local_2048._12_4_;
                    if ((param_1 & 0x200) == 0) {
                      auVar285._4_4_ =
                           (float)(int)local_1ae8._4_4_ * fVar3 +
                           (float)(int)local_1b08._4_4_ * fVar1 +
                           (float)(int)local_1ac8._4_4_ * fVar2;
                      auVar285._0_4_ =
                           (float)(int)local_1ae8._0_4_ * fVar3 +
                           (float)(int)local_1b08._0_4_ * fVar1 +
                           (float)(int)local_1ac8._0_4_ * fVar2;
                      local_1ff8._4_4_ =
                           (float)(int)local_1ad8._4_4_ * fVar3 +
                           (float)(int)local_1af8._4_4_ * fVar1 +
                           (float)(int)local_1ab8._4_4_ * fVar2;
                      local_1ff8._0_4_ =
                           (float)(int)local_1ad8._0_4_ * fVar3 +
                           (float)(int)local_1af8._0_4_ * fVar1 +
                           (float)(int)local_1ab8._0_4_ * fVar2;
                      fStack_1ff0 = (float)(int)local_1ad8._8_4_ * fVar3 +
                                    (float)(int)local_1af8._8_4_ * fVar1 +
                                    (float)(int)local_1ab8._8_4_ * fVar2;
                      fStack_1fec = (float)(int)local_1ad8._12_4_ * fVar3 +
                                    (float)(int)local_1af8._12_4_ * fVar1 +
                                    (float)(int)local_1ab8._12_4_ * fVar2;
                      auVar285._8_4_ =
                           (float)(int)local_1ae8._8_4_ * fVar3 +
                           (float)(int)local_1b08._8_4_ * fVar1 +
                           (float)(int)local_1ac8._8_4_ * fVar2;
                      auVar285._12_4_ =
                           (float)(int)local_1ae8._12_4_ * fVar3 +
                           (float)(int)local_1b08._12_4_ * fVar1 +
                           (float)(int)local_1ac8._12_4_ * fVar2;
                      local_20a8._4_4_ = (float)(int)local_2038._4_4_ * fVar4;
                      local_20a8._0_4_ = (float)(int)local_2038._0_4_ * fVar4;
                      fStack_20a0 = (float)(int)local_2038._8_4_ * fVar4;
                      fStack_209c = (float)(int)local_2038._12_4_ * fVar4;
                      local_20b8._4_4_ = fVar4 * (float)(int)local_2048._4_4_;
                      local_20b8._0_4_ = fVar4 * (float)(int)local_2048._0_4_;
                      fStack_20b0 = fVar4 * (float)(int)local_2048._8_4_;
                      fStack_20ac = fVar4 * (float)(int)local_2048._12_4_;
                    }
                    else {
                      auVar285._0_4_ =
                           (float)(int)(local_1ae8._0_4_ + local_1b08._0_4_ + local_1ac8._0_4_);
                      auVar285._4_4_ =
                           (float)(int)(local_1ae8._4_4_ + local_1b08._4_4_ + local_1ac8._4_4_);
                      auVar285._8_4_ =
                           (float)(int)(local_1ae8._8_4_ + local_1b08._8_4_ + local_1ac8._8_4_);
                      auVar285._12_4_ =
                           (float)(int)(local_1ae8._12_4_ + local_1b08._12_4_ + local_1ac8._12_4_);
                      local_1ff8._4_4_ =
                           (float)(int)(local_1ad8._4_4_ + local_1af8._4_4_ + local_1ab8._4_4_);
                      local_1ff8._0_4_ =
                           (float)(int)(local_1ad8._0_4_ + local_1af8._0_4_ + local_1ab8._0_4_);
                      fStack_1ff0 = (float)(int)(local_1ad8._8_4_ + local_1af8._8_4_ +
                                                local_1ab8._8_4_);
                      fStack_1fec = (float)(int)(local_1ad8._12_4_ + local_1af8._12_4_ +
                                                local_1ab8._12_4_);
                    }
                  }
LAB_0010a897:
                  pFVar116 = pFVar116 + 0x60;
                  pFVar126 = pFVar126 + 0x30;
                  pFVar117 = pFVar117 + 0x60;
                  *(undefined1 (*) [16])(local_1598 + lVar110) = auVar166;
                  *(undefined1 (*) [16])(local_1498 + lVar110) = auVar264;
                  lVar110 = lVar110 + 0x10;
                } while (local_648 != pFVar116);
                if (bVar62) {
                  local_1928 = iVar103;
                }
                if (bVar63) {
                  local_1958 = _local_1fe8;
                }
                if (bVar64) {
                  local_1968 = _local_1fd8;
                }
                if (bVar65) {
                  local_1978 = _local_1fc8;
                }
                if (bVar66) {
                  local_1988 = _local_1fb8;
                }
                auVar167._4_4_ = -(uint)(auVar285._4_4_ < (float)local_1d48._4_4_);
                auVar167._0_4_ = -(uint)(auVar285._0_4_ < (float)local_1d48._0_4_);
                auVar167._8_4_ = -(uint)(auVar285._8_4_ < (float)uStack_1d40);
                auVar167._12_4_ = -(uint)(auVar285._12_4_ < uStack_1d40._4_4_);
                auVar187._4_4_ = -(uint)(SUB164(_local_20a8,4) < (float)local_1d68._4_4_);
                auVar187._0_4_ = -(uint)(SUB164(_local_20a8,0) < (float)local_1d68._0_4_);
                auVar187._8_4_ = -(uint)(SUB164(_local_20a8,8) < (float)uStack_1d60);
                auVar187._12_4_ = -(uint)(SUB164(_local_20a8,0xc) < uStack_1d60._4_4_);
                auVar142._4_4_ = -(uint)((float)local_1ff8._4_4_ < (float)local_1d58._4_4_);
                auVar142._0_4_ = -(uint)((float)local_1ff8._0_4_ < (float)local_1d58._0_4_);
                auVar142._8_4_ = -(uint)(fStack_1ff0 < (float)uStack_1d50);
                auVar142._12_4_ = -(uint)(fStack_1fec < uStack_1d50._4_4_);
                auVar137 = packssdw(auVar167,auVar142);
                auVar143._4_4_ = -(uint)(SUB164(_local_20b8,4) < (float)local_1d78._4_4_);
                auVar143._0_4_ = -(uint)(SUB164(_local_20b8,0) < (float)local_1d78._0_4_);
                auVar143._8_4_ = -(uint)(SUB164(_local_20b8,8) < (float)uStack_1d70);
                auVar143._12_4_ = -(uint)(SUB164(_local_20b8,0xc) < uStack_1d70._4_4_);
                auVar162 = packssdw(auVar187,auVar143);
                if ((((((((((((((((auVar137 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                 || (auVar137 >> 0xf & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                (auVar137 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar137 >> 0x1f & (undefined1  [16])0x1) !=
                                  (undefined1  [16])0x0) ||
                              (auVar137 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar137 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar137 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar137 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                          || (auVar137 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar137 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar137 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar137 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar137 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar137 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar137 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    auVar137[0xf] < '\0') {
                  _local_1d48 = minps(auVar285,_local_1d48);
                  _local_1d58 = minps(_local_1ff8,_local_1d58);
                  pIVar96 = pIVar114;
                  pIVar108 = local_1598;
                  do {
                    auVar181 = *(undefined1 (*) [16])pIVar108;
                    pIVar108 = pIVar108 + 0x10;
                    *(undefined1 (*) [16])pIVar96 =
                         auVar181 & auVar137 | ~auVar137 & *(undefined1 (*) [16])pIVar96;
                    pIVar96 = pIVar96 + 0x10;
                  } while (pIVar108 != local_1498);
                  pVVar113 = local_1b68;
                  pauVar109 = (undefined1 (*) [16])local_1a48;
                  do {
                    auVar181 = *(undefined1 (*) [16])pVVar113;
                    pVVar113 = pVVar113 + 0x10;
                    *pauVar109 = auVar181 & auVar137 | ~auVar137 & *pauVar109;
                    pauVar109 = pauVar109 + 1;
                  } while (local_1b38 != pVVar113);
                  lVar110 = 0;
                  do {
                    pauVar109 = (undefined1 (*) [16])(local_1a08 + lVar110);
                    pVVar113 = local_1b38 + lVar110;
                    lVar110 = lVar110 + 0x10;
                    *pauVar109 = *(undefined1 (*) [16])pVVar113 & auVar137 | ~auVar137 & *pauVar109;
                  } while (lVar110 != 0x30);
                }
                if ((((((((((((((((auVar162 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0
                                 || (auVar162 >> 0xf & (undefined1  [16])0x1) !=
                                    (undefined1  [16])0x0) ||
                                (auVar162 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                               || (auVar162 >> 0x1f & (undefined1  [16])0x1) !=
                                  (undefined1  [16])0x0) ||
                              (auVar162 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                             || (auVar162 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                            || (auVar162 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                           || (auVar162 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0)
                          || (auVar162 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar162 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar162 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar162 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar162 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar162 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar162 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    auVar162[0xf] < '\0') {
                  _local_1d68 = minps(_local_20a8,_local_1d68);
                  _local_1d78 = minps(_local_20b8,_local_1d78);
                  pIVar96 = pIVar125;
                  pIVar108 = local_1498;
                  do {
                    auVar137 = *(undefined1 (*) [16])pIVar108;
                    pIVar108 = pIVar108 + 0x10;
                    *(undefined1 (*) [16])pIVar96 =
                         auVar137 & auVar162 | ~auVar162 & *(undefined1 (*) [16])pIVar96;
                    pIVar96 = pIVar96 + 0x10;
                  } while (pIVar108 != (IndexSelector<3> *)&local_1398);
                  local_1a18 = (undefined1  [16])local_1bf8 & auVar162 | ~auVar162 & local_1a18;
                  local_19d8 = auVar162 & local_1be8 | ~auVar162 & local_19d8;
                }
                if (local_1e68 != iVar101) {
                  EndpointRefiner<3>::GetRefinedEndpoints
                            ((EndpointRefiner<3> *)local_1268,local_1858);
                  pFVar116 = local_1858;
                  pVVar113 = local_1b68;
                  do {
                    auVar137 = *(undefined1 (*) [16])pFVar116;
                    pFVar126 = pFVar116 + 0x10;
                    pFVar116 = pFVar116 + 0x20;
                    auVar137 = minps(auVar137,__LC13);
                    auVar162 = minps(*(undefined1 (*) [16])pFVar126,__LC13);
                    auVar137 = maxps(auVar137,(undefined1  [16])0x0);
                    auVar162 = maxps(auVar162,(undefined1  [16])0x0);
                    auVar149._0_4_ = (int)auVar137._0_4_;
                    auVar149._4_4_ = (int)auVar137._4_4_;
                    auVar149._8_4_ = (int)auVar137._8_4_;
                    auVar149._12_4_ = (int)auVar137._12_4_;
                    auVar171._0_4_ = (int)auVar162._0_4_;
                    auVar171._4_4_ = (int)auVar162._4_4_;
                    auVar171._8_4_ = (int)auVar162._8_4_;
                    auVar171._12_4_ = (int)auVar162._12_4_;
                    auVar137 = packssdw(auVar149,auVar171);
                    *(undefined1 (*) [16])pVVar113 = auVar137;
                    pVVar113 = pVVar113 + 0x10;
                  } while (pFVar116 != local_17f8);
                  lVar110 = 0;
                  do {
                    auVar137 = minps(*(undefined1 (*) [16])(local_17f8 + lVar110 * 2),__LC13);
                    auVar162 = minps(*(undefined1 (*) [16])(auStack_17e8 + lVar110 * 2),__LC13);
                    auVar137 = maxps(auVar137,(undefined1  [16])0x0);
                    auVar162 = maxps(auVar162,(undefined1  [16])0x0);
                    auVar150._0_4_ = (int)auVar137._0_4_;
                    auVar150._4_4_ = (int)auVar137._4_4_;
                    auVar150._8_4_ = (int)auVar137._8_4_;
                    auVar150._12_4_ = (int)auVar137._12_4_;
                    auVar172._0_4_ = (int)auVar162._0_4_;
                    auVar172._4_4_ = (int)auVar162._4_4_;
                    auVar172._8_4_ = (int)auVar162._8_4_;
                    auVar172._12_4_ = (int)auVar162._12_4_;
                    auVar137 = packssdw(auVar150,auVar172);
                    *(undefined1 (*) [16])(local_1b38 + lVar110) = auVar137;
                    lVar110 = lVar110 + 0x10;
                  } while (lVar110 != 0x30);
                  EndpointRefiner<1>::GetRefinedEndpoints
                            ((EndpointRefiner<1> *)local_19c8,local_1858);
                  auVar162 = minps(_local_1858,__LC13);
                  auVar137 = minps(local_1848,__LC13);
                  auVar277._0_12_ = ZEXT812(0);
                  auVar277._12_4_ = 0;
                  auVar162 = maxps(auVar162,(undefined1  [16])0x0);
                  auVar137 = maxps(auVar137,(undefined1  [16])0x0);
                  auVar173._0_4_ = (int)auVar162._0_4_;
                  auVar173._4_4_ = (int)auVar162._4_4_;
                  auVar173._8_4_ = (int)auVar162._8_4_;
                  auVar173._12_4_ = (int)auVar162._12_4_;
                  auVar151._0_4_ = (int)auVar137._0_4_;
                  auVar151._4_4_ = (int)auVar137._4_4_;
                  auVar151._8_4_ = (int)auVar137._8_4_;
                  auVar151._12_4_ = (int)auVar137._12_4_;
                  local_1aa8 = packssdw(auVar173,auVar151);
                  auVar137 = minps(local_1838,__LC13);
                  local_1bf8[0] = (VInt16)local_1aa8[0];
                  local_1bf8[1] = (VInt16)local_1aa8[1];
                  local_1bf8[2] = (VInt16)local_1aa8[2];
                  local_1bf8[3] = (VInt16)local_1aa8[3];
                  local_1bf8[4] = (VInt16)local_1aa8[4];
                  local_1bf8[5] = (VInt16)local_1aa8[5];
                  local_1bf8[6] = (VInt16)local_1aa8[6];
                  local_1bf8[7] = (VInt16)local_1aa8[7];
                  local_1bf8[8] = (VInt16)local_1aa8[8];
                  local_1bf8[9] = (VInt16)local_1aa8[9];
                  local_1bf8[10] = (VInt16)local_1aa8[10];
                  local_1bf8[0xb] = (VInt16)local_1aa8[0xb];
                  local_1bf8[0xc] = (VInt16)local_1aa8[0xc];
                  local_1bf8[0xd] = (VInt16)local_1aa8[0xd];
                  local_1bf8[0xe] = (VInt16)local_1aa8[0xe];
                  local_1bf8[0xf] = (VInt16)local_1aa8[0xf];
                  auVar137 = maxps(auVar137,(undefined1  [16])0x0);
                  auVar162 = minps(local_1828,__LC13);
                  auVar162 = maxps(auVar162,auVar277);
                  auVar152._0_4_ = (int)auVar137._0_4_;
                  auVar152._4_4_ = (int)auVar137._4_4_;
                  auVar152._8_4_ = (int)auVar137._8_4_;
                  auVar152._12_4_ = (int)auVar137._12_4_;
                  auVar189._0_4_ = (int)auVar162._0_4_;
                  auVar189._4_4_ = (int)auVar162._4_4_;
                  auVar189._8_4_ = (int)auVar162._8_4_;
                  auVar189._12_4_ = (int)auVar162._12_4_;
                  local_1a98 = packssdw(auVar152,auVar189);
                  local_1be8 = local_1a98;
                }
                local_1e68 = local_1e68 + 1;
              } while (local_1e68 != iVar92);
              local_1cd8 = local_1cd8 + 1;
            } while (uVar102 != local_1cd8);
            auVar168._0_4_ = (float)local_1d68._0_4_ + (float)local_1d48._0_4_;
            auVar168._4_4_ = (float)local_1d68._4_4_ + (float)local_1d48._4_4_;
            auVar168._8_4_ = (float)uStack_1d60 + (float)uStack_1d40;
            auVar168._12_4_ = uStack_1d60._4_4_ + uStack_1d40._4_4_;
            auVar144._0_4_ = (float)local_1d78._0_4_ + (float)local_1d58._0_4_;
            auVar144._4_4_ = (float)local_1d78._4_4_ + (float)local_1d58._4_4_;
            auVar144._8_4_ = (float)uStack_1d70 + (float)uStack_1d50;
            auVar144._12_4_ = uStack_1d70._4_4_ + uStack_1d50._4_4_;
            auVar181 = minps(auVar168,*(undefined1 (*) [16])(param_7 + 0x10));
            auVar188._4_4_ = -(uint)(auVar168._4_4_ < *(float *)(param_7 + 0x14));
            auVar188._0_4_ = -(uint)(auVar168._0_4_ < *(float *)(param_7 + 0x10));
            auVar188._8_4_ = -(uint)(auVar168._8_4_ < *(float *)(param_7 + 0x18));
            auVar188._12_4_ = -(uint)(auVar168._12_4_ < *(float *)(param_7 + 0x1c));
            auVar137 = *(undefined1 (*) [16])(param_7 + 0x20);
            auVar162 = minps(auVar144,auVar137);
            auVar205._4_4_ = -(uint)(auVar144._4_4_ < auVar137._4_4_);
            auVar205._0_4_ = -(uint)(auVar144._0_4_ < auVar137._0_4_);
            auVar205._8_4_ = -(uint)(auVar144._8_4_ < auVar137._8_4_);
            auVar205._12_4_ = -(uint)(auVar144._12_4_ < auVar137._12_4_);
            *(undefined1 (*) [16])(param_7 + 0x10) = auVar181;
            *(undefined1 (*) [16])(param_7 + 0x20) = auVar162;
            auVar137 = packssdw(auVar188,auVar205);
            auVar145._0_4_ = CONCAT22(local_1d34,local_1d34);
            auVar145._4_4_ = auVar145._0_4_;
            auVar145._8_4_ = auVar145._0_4_;
            auVar145._12_4_ = auVar145._0_4_;
            *(undefined1 (*) [16])param_7 =
                 auVar145 & auVar137 | ~auVar137 & *(undefined1 (*) [16])param_7;
            auVar146._0_4_ = CONCAT22((short)local_1d10,(short)local_1d10);
            auVar146._4_4_ = auVar146._0_4_;
            auVar146._8_4_ = auVar146._0_4_;
            auVar146._12_4_ = auVar146._0_4_;
            *(undefined1 (*) [16])(param_7 + 0x3c0) =
                 auVar146 & auVar137 | ~auVar137 & *(undefined1 (*) [16])(param_7 + 0x3c0);
            auVar147._0_4_ = CONCAT22(sVar44,sVar44);
            auVar147._4_4_ = auVar147._0_4_;
            auVar147._8_4_ = auVar147._0_4_;
            auVar147._12_4_ = auVar147._0_4_;
            *(undefined1 (*) [16])(param_7 + 0x3b0) =
                 auVar147 & auVar137 | ~auVar137 & *(undefined1 (*) [16])(param_7 + 0x3b0);
            pWVar98 = param_7 + 0x1b0;
            do {
              if (local_1ce8 == 0) {
                auVar162 = *(undefined1 (*) [16])pIVar114;
                pIVar96 = pIVar125;
              }
              else {
                auVar162 = *(undefined1 (*) [16])pIVar125;
                pIVar96 = pIVar114;
              }
              *(undefined1 (*) [16])pWVar98 =
                   ~auVar137 & *(undefined1 (*) [16])pWVar98 | auVar137 & auVar162;
              pIVar114 = pIVar114 + 0x10;
              pIVar125 = pIVar125 + 0x10;
              *(undefined1 (*) [16])(pWVar98 + 0x100) =
                   *(undefined1 (*) [16])pIVar96 & auVar137 |
                   ~auVar137 & *(undefined1 (*) [16])(pWVar98 + 0x100);
              pWVar98 = pWVar98 + 0x10;
            } while (local_1698 != pIVar114);
            lVar110 = 0;
            do {
              *(undefined1 (*) [16])(param_7 + lVar110 + 0x30) =
                   *(undefined1 (*) [16])(*(undefined1 (*) [16])local_1a48 + lVar110) & auVar137 |
                   ~auVar137 & *(undefined1 (*) [16])(param_7 + lVar110 + 0x30);
              lVar110 = lVar110 + 0x10;
            } while (lVar110 != 0x40);
            lVar110 = 0;
            do {
              *(undefined1 (*) [16])(param_7 + lVar110 + 0x70) =
                   *(undefined1 (*) [16])(local_1a08 + lVar110) & auVar137 |
                   ~auVar137 & *(undefined1 (*) [16])(param_7 + lVar110 + 0x70);
              lVar110 = lVar110 + 0x10;
            } while (lVar110 != 0x40);
          }
          local_1ce8 = 1;
        } while ((ushort)(sVar44 + 1U) < (ushort)((local_1d34 == 4) + 1));
      }
      local_1d10 = local_1d10 + 1;
    } while (local_1d10 != 4);
    if (local_1d34 != 4) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_1d34 = 5;
  } while( true );
}



/* cvtt::Internal::BC7Computer::Pack(unsigned int, cvtt::PixelBlockU8 const*, unsigned char*, float
   const*, cvtt::BC7EncodingPlan const&, int) */

void cvtt::Internal::BC7Computer::Pack
               (uint param_1,PixelBlockU8 *param_2,uchar *param_3,float *param_4,
               BC7EncodingPlan *param_5,int param_6)

{
  WorkInfo *pWVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 auVar4 [16];
  PixelBlockU8 PVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  uint uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined8 uVar18;
  float *pfVar19;
  PixelBlockU8 *pPVar20;
  bool bVar21;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  ulong uVar26;
  ushort *puVar27;
  long lVar28;
  ulong uVar29;
  ushort *puVar30;
  byte bVar31;
  long lVar32;
  VInt16<2> *pVVar33;
  int iVar34;
  int iVar35;
  ushort *puVar36;
  uint uVar37;
  float *pfVar38;
  WorkInfo *pWVar39;
  uchar *puVar40;
  Float *pFVar41;
  Float *pFVar42;
  WorkInfo *pWVar43;
  PixelBlockU8 *pPVar44;
  PixelBlockU8 *pPVar45;
  bool bVar46;
  VInt16<2> *pVVar47;
  WorkInfo *pWVar48;
  int iVar49;
  PixelBlockU8 *pPVar50;
  byte *pbVar51;
  int iVar52;
  ushort *puVar53;
  long in_FS_OFFSET;
  bool bVar54;
  short sVar55;
  uint local_1150;
  long local_1120;
  byte local_1114;
  uchar *local_1108;
  uint local_1100;
  RoundTowardNearestForScope local_10c0 [4];
  byte local_10bc [4];
  long local_10b8;
  uint local_10b0;
  undefined1 local_10a8 [32];
  ushort local_1088 [32];
  undefined4 local_1048;
  undefined2 local_1044;
  undefined2 local_1042;
  undefined4 local_1040;
  undefined2 local_103c;
  undefined2 local_103a;
  WorkInfo local_1018 [16];
  undefined4 local_1008;
  undefined4 uStack_1004;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined4 local_ff8;
  undefined4 uStack_ff4;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  undefined2 local_c68 [8];
  undefined2 local_c58 [8];
  VInt16<2> local_c48 [1024];
  undefined8 local_848;
  undefined8 uStack_840;
  Float local_838 [4];
  float afStack_834 [27];
  float local_7c8 [482];
  long local_40;
  uint uVar22;
  
  uVar15 = MXCSR;
  pPVar45 = param_2 + 4;
  lVar32 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pVVar47 = local_c48;
  do {
    pPVar44 = param_2 + lVar32;
    pFVar41 = (Float *)&local_848;
    pVVar33 = pVVar47;
    pPVar20 = pPVar44;
    do {
      do {
        pPVar50 = pPVar20;
        PVar5 = *pPVar44;
        pFVar42 = pFVar41 + 2;
        pPVar44 = pPVar44 + 0x40;
        *(ushort *)pFVar41 = (ushort)(byte)PVar5;
        uVar18 = uStack_840;
        pFVar41 = pFVar42;
        pPVar20 = pPVar50;
      } while (local_838 != pFVar42);
      pPVar44 = pPVar50 + 1;
      *(undefined8 *)pVVar33 = local_848;
      *(undefined8 *)(pVVar33 + 8) = uVar18;
      pFVar41 = (Float *)&local_848;
      pVVar33 = pVVar33 + 0x10;
      pPVar20 = pPVar44;
    } while (pPVar44 != pPVar45);
    lVar32 = lVar32 + 4;
    pPVar45 = pPVar50 + 5;
    pVVar47 = pVVar47 + 0x40;
  } while (lVar32 != 0x40);
  pfVar38 = local_7c8;
  pVVar47 = local_c48;
  do {
    pfVar19 = pfVar38 + -0x20;
    pVVar33 = pVVar47;
    do {
      pfVar25 = pfVar19;
      auVar4 = *(undefined1 (*) [16])pVVar33;
      pVVar33 = pVVar33 + 0x10;
      auVar12._10_2_ = 0;
      auVar12._0_10_ = auVar4._0_10_;
      auVar12._12_2_ = auVar4._6_2_;
      auVar13._8_2_ = auVar4._4_2_;
      auVar13._0_8_ = auVar4._0_8_;
      auVar13._10_4_ = auVar12._10_4_;
      auVar14._6_8_ = 0;
      auVar14._0_6_ = auVar13._8_6_;
      pfVar25[4] = (float)auVar4._8_2_;
      pfVar25[5] = (float)auVar4._10_2_;
      pfVar25[6] = (float)auVar4._12_2_;
      pfVar25[7] = (float)auVar4._14_2_;
      *pfVar25 = (float)auVar4._0_2_;
      pfVar25[1] = (float)(int)CONCAT82(SUB148(auVar14 << 0x40,6),auVar4._2_2_);
      pfVar25[2] = (float)auVar13._8_4_;
      pfVar25[3] = (float)(auVar12._10_4_ >> 0x10);
      pfVar19 = pfVar25 + 8;
    } while (pfVar25 + 8 != pfVar38);
    pfVar38 = pfVar25 + 0x28;
    pVVar47 = pVVar47 + 0x40;
  } while ((float *)&stack0x00000038 != pfVar38);
  pWVar43 = local_1018;
  pWVar48 = pWVar43;
  for (lVar32 = 0x7a; lVar32 != 0; lVar32 = lVar32 + -1) {
    *(undefined8 *)pWVar48 = 0;
    pWVar48 = pWVar48 + 8;
  }
  local_1008 = _LC19;
  uStack_1004 = _LC19;
  uStack_1000 = _LC19;
  uStack_ffc = _LC19;
  local_ff8 = _LC19;
  uStack_ff4 = _LC19;
  uStack_ff0 = _LC19;
  uStack_fec = _LC19;
  MXCSR = MXCSR & 0xffff9fff;
  TrySinglePlane(param_1,local_c48,(Float *)&local_848,param_4,param_5,param_6,pWVar43,local_10c0);
  TryDualPlane(param_1,local_c48,(Float *)&local_848,param_4,param_5,param_6,pWVar43,local_10c0);
  MXCSR = uVar15;
  local_1120 = 0;
  local_1108 = param_3;
LAB_0010b960:
  uVar17 = local_103a;
  uVar16 = local_103c;
  uVar11 = local_1040;
  uVar6 = *(ushort *)(pWVar43 + 0x3b0);
  local_10a8._0_16_ = (undefined1  [16])0x0;
  auVar4 = local_10a8._0_16_;
  uVar7 = *(ushort *)pWVar43;
  uVar26 = (ulong)uVar7;
  iVar9 = *(int *)(&DAT_0010c5c4 + uVar26 * 0x24);
  lVar32 = 0;
  do {
    *(undefined2 *)((long)local_1088 + lVar32) = *(undefined2 *)(pWVar43 + lVar32 * 8 + 0x1b0);
    if (iVar9 == 1) goto LAB_0010b9dd;
    lVar32 = lVar32 + 2;
  } while (lVar32 != 0x20);
  goto LAB_0010b9f4;
LAB_0010b9dd:
  while( true ) {
    *(undefined2 *)((long)local_1088 + lVar32 + 0x20) =
         *(undefined2 *)(pWVar43 + lVar32 * 8 + 0x2b0);
    lVar32 = lVar32 + 2;
    if (lVar32 == 0x20) break;
    *(undefined2 *)((long)local_1088 + lVar32) = *(undefined2 *)(pWVar43 + lVar32 * 8 + 0x1b0);
  }
LAB_0010b9f4:
  local_10a8._4_12_ = SUB1612((undefined1  [16])0x0,4);
  lVar32 = 0;
  puVar27 = (ushort *)&local_1048;
  pWVar48 = pWVar43;
  pWVar39 = pWVar43;
  puVar30 = (ushort *)&local_1048;
  puVar53 = (ushort *)&local_1040;
  do {
    do {
      puVar36 = puVar27 + 1;
      *puVar27 = *(ushort *)(pWVar48 + 0x30);
      puVar27 = puVar36;
      pWVar48 = pWVar48 + 0x10;
    } while (puVar53 != puVar36);
    lVar28 = 0;
    pWVar48 = pWVar39;
    do {
      pWVar1 = pWVar48 + 0x70;
      pWVar48 = pWVar48 + 0x10;
      puVar30[lVar28 + 4] = *(ushort *)pWVar1;
      lVar28 = lVar28 + 1;
    } while (lVar28 != 4);
    lVar32 = lVar32 + 8;
    pWVar48 = pWVar39 + 0x80;
    puVar27 = puVar30 + 8;
    puVar53 = puVar53 + 8;
    pWVar39 = pWVar48;
    puVar30 = puVar27;
  } while (lVar32 != 0x18);
  local_10b8 = 0;
  local_10b0 = 0;
  lVar32 = uVar26 * 0x24;
  iVar10 = *(int *)(&DAT_0010c5d8 + lVar32);
  iVar49 = *(int *)(&DAT_0010c5d4 + lVar32);
  local_1114 = (byte)iVar10;
  if (iVar9 == 1) {
    bVar54 = (local_1088[0] >> (iVar10 - 1U & 0x1f) & 1) != 0;
    uVar22 = (int)(uint)local_1088[0x10] >>
             ((byte)*(undefined4 *)(&DAT_0010c5dc + lVar32) - 1 & 0x1f) & 1;
    bVar21 = SUB41(uVar22,0);
    if ((local_1088[0] >> (iVar10 - 1U & 0x1f) & 1) != 0) {
      sVar55 = (short)((1 << (local_1114 & 0x1f)) + -1);
      local_1088[8] = sVar55 - local_1088[8];
      local_1088[9] = sVar55 - local_1088[9];
      local_1088[10] = sVar55 - local_1088[10];
      local_1088[0xb] = sVar55 - local_1088[0xb];
      local_1088[0xc] = sVar55 - local_1088[0xc];
      local_1088[0xd] = sVar55 - local_1088[0xd];
      local_1088[0xe] = sVar55 - local_1088[0xe];
      local_1088[0xf] = sVar55 - local_1088[0xf];
      local_1088[0] = sVar55 - local_1088[0];
      local_1088[1] = sVar55 - local_1088[1];
      local_1088[2] = sVar55 - local_1088[2];
      local_1088[3] = sVar55 - local_1088[3];
      local_1088[4] = sVar55 - local_1088[4];
      local_1088[5] = sVar55 - local_1088[5];
      local_1088[6] = sVar55 - local_1088[6];
      local_1088[7] = sVar55 - local_1088[7];
    }
    if (uVar22 != 0) {
      sVar55 = (short)((1 << ((byte)*(undefined4 *)(&DAT_0010c5dc + lVar32) & 0x1f)) + -1);
      local_1088[0x18] = sVar55 - local_1088[0x18];
      local_1088[0x19] = sVar55 - local_1088[0x19];
      local_1088[0x1a] = sVar55 - local_1088[0x1a];
      local_1088[0x1b] = sVar55 - local_1088[0x1b];
      local_1088[0x1c] = sVar55 - local_1088[0x1c];
      local_1088[0x1d] = sVar55 - local_1088[0x1d];
      local_1088[0x1e] = sVar55 - local_1088[0x1e];
      local_1088[0x1f] = sVar55 - local_1088[0x1f];
      local_1088[0x10] = sVar55 - local_1088[0x10];
      local_1088[0x11] = sVar55 - local_1088[0x11];
      local_1088[0x12] = sVar55 - local_1088[0x12];
      local_1088[0x13] = sVar55 - local_1088[0x13];
      local_1088[0x14] = sVar55 - local_1088[0x14];
      local_1088[0x15] = sVar55 - local_1088[0x15];
      local_1088[0x16] = sVar55 - local_1088[0x16];
      local_1088[0x17] = sVar55 - local_1088[0x17];
    }
    bVar46 = bVar21;
    if (uVar6 == 0) {
      bVar46 = bVar54;
      bVar54 = bVar21;
    }
    if (bVar46 != false) {
      local_1040 = local_1048;
      local_1048 = uVar11;
      local_103c = local_1044;
      local_1044 = uVar16;
    }
    if (bVar54 != false) {
      local_103a = local_1042;
      local_1042 = uVar17;
    }
    local_1100 = 0;
    uVar22 = 0;
  }
  else {
    local_10a8._0_16_ = auVar4;
    if (iVar49 == 2) {
      local_10bc[2] = 0;
      local_10bc[0] = 0;
      local_10bc[1] = 0;
      uVar22 = *(uint *)(BC7Data::g_fixupIndexes2 + (ulong)uVar6 * 4);
      local_10b8 = (ulong)uVar22 << 0x20;
LAB_0010c0f5:
      local_1100 = local_10b0;
      local_10bc[2] = '\0';
      local_10bc[0] = 0;
      local_10bc[1] = 0;
      pbVar51 = local_10bc;
      lVar32 = 0;
      do {
        bVar31 = local_1114 - 1 & 0x1f;
        pbVar51[lVar32] =
             (byte)((int)(uint)local_1088[*(int *)((long)&local_10b8 + lVar32 * 4)] >> bVar31);
        pbVar51[lVar32] = pbVar51[lVar32] & 1;
        lVar32 = lVar32 + 1;
      } while ((int)lVar32 < iVar49);
      if (((local_10bc[0] != 0) || (local_10bc[1] != '\0')) || (local_10bc[2] != '\0')) {
        iVar52 = 0 >> bVar31;
        puVar27 = local_1088;
        do {
          if (iVar49 == 2) {
            uVar29 = (ulong)((int)(uint)(ushort)(&BC7Data::g_partitionMap)[uVar6] >>
                             ((byte)iVar52 & 0x1f) & 1);
          }
          else {
            uVar29 = 0;
            if (iVar49 == 3) {
              uVar29 = (ulong)(*(uint *)(BC7Data::g_partitionMap2 + (ulong)uVar6 * 4) >>
                               ((byte)iVar52 * '\x02' & 0x1f) & 3);
            }
          }
          if (local_10bc[uVar29] != 0) {
            *puVar27 = (short)((1 << (local_1114 & 0x1f)) + -1) - *puVar27;
          }
          iVar52 = iVar52 + 1;
          puVar27 = puVar27 + 1;
        } while (iVar52 != 0x10);
        pbVar2 = pbVar51 + iVar49;
        puVar27 = (ushort *)&local_1048;
        bVar31 = local_10bc[0];
        while( true ) {
          if (bVar31 != 0) {
            puVar30 = puVar27;
            do {
              uVar8 = *puVar30;
              puVar53 = puVar30 + 1;
              *puVar30 = puVar30[4];
              puVar30[4] = uVar8;
              puVar30 = puVar53;
            } while (puVar27 + (ulong)(iVar9 == 0) + 3 != puVar53);
          }
          pbVar51 = pbVar51 + 1;
          puVar27 = puVar27 + 8;
          if (pbVar2 == pbVar51) break;
          bVar31 = *pbVar51;
        }
        goto LAB_0010bb25;
      }
    }
    else {
      if (iVar49 == 3) {
        local_10bc[2] = 0;
        uVar22 = *(uint *)(BC7Data::g_fixupIndexes3 + (ulong)uVar6 * 8);
        local_10bc[0] = 0;
        local_10bc[1] = 0;
        local_10b8 = (ulong)uVar22 << 0x20;
        local_10b0 = *(uint *)(BC7Data::g_fixupIndexes3 + (ulong)uVar6 * 8 + 4);
        goto LAB_0010c0f5;
      }
      local_10bc[2] = '\0';
      uVar22 = 0;
      local_10bc[0] = 0;
      local_10bc[1] = 0;
      local_1100 = 0;
      if (0 < iVar49) goto LAB_0010c0f5;
    }
  }
LAB_0010bb25:
  iVar34 = iVar10 + -1;
  uVar23 = uVar7 + 1;
  local_10a8._0_4_ = 1 << ((byte)uVar7 & 0x1f) & 0xff;
  iVar52 = (&DAT_0010c5d0)[uVar26 * 9];
  if (iVar52 != 0) {
    *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) | (uint)uVar6 << ((byte)uVar23 & 0x1f)
    ;
    iVar35 = iVar52 + -0x20 + (uVar23 & 0x1f);
    if (0 < iVar35) {
      *(uint *)(local_10a8 + (long)(((int)uVar23 >> 5) + 1) * 4) =
           *(uint *)(local_10a8 + (long)(((int)uVar23 >> 5) + 1) * 4) |
           (uint)(uVar6 >> ((char)iVar52 - (char)iVar35 & 0x1fU));
    }
    uVar23 = uVar23 + iVar52;
  }
  if (iVar9 == 1) {
    uVar7 = *(ushort *)(pWVar43 + 0x3c0);
    *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) | (uint)uVar7 << ((byte)uVar23 & 0x1f)
    ;
    if ((~uVar23 & 0x1f) == 0) {
      *(uint *)(local_10a8 + (long)(((int)uVar23 >> 5) + 1) * 4) =
           *(uint *)(local_10a8 + (long)(((int)uVar23 >> 5) + 1) * 4) | (uint)(uVar7 >> 1);
    }
    uVar23 = uVar23 + 2;
  }
  local_1150 = uVar23;
  if ((&DAT_0010c5e0)[uVar26 * 0x24] != '\0') {
    local_1150 = uVar23 + 1;
    *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) | (uint)uVar6 << ((byte)uVar23 & 0x1f)
    ;
  }
  lVar32 = 0;
  puVar27 = (ushort *)((long)&local_1048 + (long)iVar49 * 8 * 2);
  puVar30 = puVar27;
  puVar53 = (ushort *)&local_1048;
  do {
    if (0 < iVar49) {
      iVar52 = *(int *)(&DAT_0010c5c8 + uVar26 * 0x24);
      puVar36 = puVar53;
      uVar23 = local_1150;
      do {
        lVar28 = 0;
        uVar37 = uVar23;
        while( true ) {
          uVar24 = (int)(uint)puVar36[lVar28 * 4] >> (8U - (char)iVar52 & 0x1f);
          *(uint *)(local_10a8 + (long)((int)uVar37 >> 5) * 4) =
               *(uint *)(local_10a8 + (long)((int)uVar37 >> 5) * 4) |
               uVar24 << ((byte)uVar37 & 0x1f);
          iVar35 = iVar52 + -0x20 + (uVar37 & 0x1f);
          if (0 < iVar35) {
            *(uint *)(local_10a8 + (long)(((int)uVar37 >> 5) + 1) * 4) =
                 *(uint *)(local_10a8 + (long)(((int)uVar37 >> 5) + 1) * 4) |
                 uVar24 >> ((char)iVar52 - (char)iVar35 & 0x1fU);
          }
          uVar37 = uVar37 + iVar52;
          if (lVar28 != 0) break;
          lVar28 = 1;
        }
        puVar36 = puVar36 + 8;
        uVar23 = uVar23 + iVar52 * 2;
      } while (puVar30 != puVar36);
      local_1150 = local_1150 + iVar52 * 2 + (iVar49 + -1) * iVar52 * 2;
    }
    lVar32 = lVar32 + 1;
    puVar30 = puVar30 + 1;
    puVar53 = puVar53 + 1;
  } while (lVar32 != 3);
  iVar52 = (&BC7Data::g_modes)[uVar26 * 9];
  if (iVar9 == 2) {
    if (iVar52 == 1) {
      uVar23 = local_1150;
      if (iVar49 < 1) goto LAB_0010bd16;
LAB_0010c39e:
      uVar11 = *(undefined4 *)(&DAT_0010c5c8 + uVar26 * 0x24);
      local_1150 = uVar23 + iVar49;
      puVar27 = (ushort *)&local_1048;
      do {
        uVar6 = *puVar27;
        puVar27 = puVar27 + 8;
        uVar37 = uVar23 + 1;
        *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) =
             *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) |
             ((int)(uint)uVar6 >> (7U - (char)uVar11 & 0x1f) & 1U) << ((byte)uVar23 & 0x1f);
        uVar23 = uVar37;
      } while (uVar37 != local_1150);
      goto LAB_0010bd16;
    }
    if ((iVar52 != 0) || (iVar49 < 1)) goto LAB_0010bd16;
  }
  else {
    if (iVar49 < 1) goto LAB_0010bd16;
    iVar35 = *(int *)(&DAT_0010c5cc + uVar26 * 0x24);
    puVar30 = (ushort *)&local_1048;
    uVar23 = local_1150;
    do {
      lVar32 = 0;
      uVar37 = uVar23;
      while( true ) {
        uVar24 = (int)(uint)puVar30[lVar32 * 4 + 3] >> (8U - (char)iVar35 & 0x1f);
        *(uint *)(local_10a8 + (long)((int)uVar37 >> 5) * 4) =
             *(uint *)(local_10a8 + (long)((int)uVar37 >> 5) * 4) | uVar24 << ((byte)uVar37 & 0x1f);
        iVar3 = iVar35 + -0x20 + (uVar37 & 0x1f);
        if (0 < iVar3) {
          *(uint *)(local_10a8 + (long)(((int)uVar37 >> 5) + 1) * 4) =
               *(uint *)(local_10a8 + (long)(((int)uVar37 >> 5) + 1) * 4) |
               uVar24 >> ((char)iVar35 - (char)iVar3 & 0x1fU);
        }
        uVar37 = uVar37 + iVar35;
        if (lVar32 != 0) break;
        lVar32 = 1;
      }
      puVar30 = puVar30 + 8;
      uVar23 = uVar23 + iVar35 * 2;
    } while (puVar30 != puVar27);
    local_1150 = local_1150 + iVar35 * 2 + (iVar49 + -1) * iVar35 * 2;
    uVar23 = local_1150;
    if (iVar52 == 1) goto LAB_0010c39e;
    if (iVar52 != 0) goto LAB_0010bd16;
  }
  bVar31 = 7 - (char)*(undefined4 *)(&DAT_0010c5c8 + uVar26 * 0x24);
  puVar27 = (ushort *)&local_1048;
  uVar23 = local_1150;
  do {
    uVar37 = uVar23 + 2;
    *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)uVar23 >> 5) * 4) |
         ((int)(uint)*puVar27 >> (bVar31 & 0x1f) & 1U) << ((byte)uVar23 & 0x1f);
    *(uint *)(local_10a8 + (long)((int)(uVar23 + 1) >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)(uVar23 + 1) >> 5) * 4) |
         ((int)(uint)puVar27[4] >> (bVar31 & 0x1f) & 1U) << ((byte)(uVar23 + 1) & 0x1f);
    puVar27 = puVar27 + 8;
    uVar23 = uVar37;
  } while (local_1150 + iVar49 * 2 != uVar37);
  local_1150 = local_1150 + 2 + (iVar49 + -1) * 2;
LAB_0010bd16:
  lVar32 = 0;
  do {
    iVar49 = iVar34;
    if (((lVar32 != 0) && ((uint)lVar32 != uVar22)) && (iVar49 = iVar10, local_1100 == (uint)lVar32)
       ) {
      iVar49 = iVar34;
    }
    uVar6 = local_1088[lVar32];
    *(uint *)(local_10a8 + (long)((int)local_1150 >> 5) * 4) =
         *(uint *)(local_10a8 + (long)((int)local_1150 >> 5) * 4) |
         (uint)uVar6 << ((byte)local_1150 & 0x1f);
    iVar52 = iVar49 + -0x20 + (local_1150 & 0x1f);
    if (0 < iVar52) {
      *(uint *)(local_10a8 + (long)(((int)local_1150 >> 5) + 1) * 4) =
           *(uint *)(local_10a8 + (long)(((int)local_1150 >> 5) + 1) * 4) |
           (uint)(uVar6 >> ((char)iVar49 - (char)iVar52 & 0x1fU));
    }
    lVar32 = lVar32 + 1;
    local_1150 = local_1150 + iVar49;
  } while (lVar32 != 0x10);
  if (iVar9 == 1) {
    lVar32 = 0;
    iVar9 = *(int *)(&DAT_0010c5dc + uVar26 * 0x24);
    do {
      uVar6 = local_1088[lVar32 + 0x10];
      iVar10 = iVar9;
      if (lVar32 == 0) {
        iVar10 = iVar9 + -1;
      }
      *(uint *)(local_10a8 + (long)((int)local_1150 >> 5) * 4) =
           *(uint *)(local_10a8 + (long)((int)local_1150 >> 5) * 4) |
           (uint)uVar6 << ((byte)local_1150 & 0x1f);
      iVar49 = iVar10 + -0x20 + (local_1150 & 0x1f);
      if (0 < iVar49) {
        *(uint *)(local_10a8 + (long)(((int)local_1150 >> 5) + 1) * 4) =
             *(uint *)(local_10a8 + (long)(((int)local_1150 >> 5) + 1) * 4) |
             (uint)(uVar6 >> ((char)iVar10 - (char)iVar49 & 0x1fU));
      }
      lVar32 = lVar32 + 1;
      local_1150 = local_1150 + iVar10;
    } while (lVar32 != 0x10);
  }
  lVar32 = 0;
  puVar40 = local_1108;
  do {
    uVar22 = *(uint *)(local_10a8 + lVar32);
    lVar28 = 0;
    do {
      puVar40[lVar28] = (uchar)(uVar22 >> ((char)lVar28 * '\b' & 0x1fU));
      lVar28 = lVar28 + 1;
    } while (lVar28 != 4);
    lVar32 = lVar32 + 4;
    puVar40 = puVar40 + 4;
  } while (lVar32 != 0x10);
  local_1120 = local_1120 + 1;
  pWVar43 = pWVar43 + 2;
  local_1108 = local_1108 + 0x10;
  if (local_1120 == 8) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_0010b960;
}



/* cvtt::Internal::EndpointSelector<3, 8>::ContributePass(cvtt::ParallelMath::Float const*, int,
   cvtt::ParallelMath::Float const&) */

void __thiscall
cvtt::Internal::EndpointSelector<3,8>::ContributePass
          (EndpointSelector<3,8> *this,Float *param_1,int param_2,Float *param_3)

{
  float *pfVar1;
  Float *pFVar2;
  Float *pFVar3;
  EndpointSelector<3,8> *pEVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lVar23;
  EndpointSelector<3,8> *pEVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  long in_FS_OFFSET;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float local_78 [26];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar26 = (float *)0x0;
  if (param_2 == 0) {
    lVar23 = 0;
    do {
      fVar31 = *(float *)(param_3 + 0x14);
      fVar32 = *(float *)(param_3 + 0x18);
      fVar33 = *(float *)(param_3 + 0x1c);
      fVar34 = *(float *)param_3;
      fVar5 = *(float *)(param_3 + 4);
      fVar6 = *(float *)(param_3 + 8);
      fVar7 = *(float *)(param_3 + 0xc);
      pFVar3 = param_1 + lVar23 + 0x10;
      fVar8 = *(float *)(pFVar3 + 4);
      fVar9 = *(float *)(pFVar3 + 8);
      fVar10 = *(float *)(pFVar3 + 0xc);
      pFVar2 = param_1 + lVar23;
      fVar11 = *(float *)pFVar2;
      fVar12 = *(float *)(pFVar2 + 4);
      fVar13 = *(float *)(pFVar2 + 8);
      fVar14 = *(float *)(pFVar2 + 0xc);
      pEVar4 = this + lVar23 + 0x10;
      fVar15 = *(float *)(pEVar4 + 4);
      fVar16 = *(float *)(pEVar4 + 8);
      fVar17 = *(float *)(pEVar4 + 0xc);
      pEVar24 = this + lVar23;
      fVar18 = *(float *)pEVar24;
      fVar19 = *(float *)(pEVar24 + 4);
      fVar20 = *(float *)(pEVar24 + 8);
      fVar21 = *(float *)(pEVar24 + 0xc);
      pEVar24 = this + lVar23 + 0x10;
      *(float *)pEVar24 = *(float *)(param_3 + 0x10) * *(float *)pFVar3 + *(float *)pEVar4;
      *(float *)(pEVar24 + 4) = fVar31 * fVar8 + fVar15;
      *(float *)(pEVar24 + 8) = fVar32 * fVar9 + fVar16;
      *(float *)(pEVar24 + 0xc) = fVar33 * fVar10 + fVar17;
      pEVar24 = this + lVar23;
      *(float *)pEVar24 = fVar34 * fVar11 + fVar18;
      *(float *)(pEVar24 + 4) = fVar5 * fVar12 + fVar19;
      *(float *)(pEVar24 + 8) = fVar6 * fVar13 + fVar20;
      *(float *)(pEVar24 + 0xc) = fVar7 * fVar14 + fVar21;
      lVar23 = lVar23 + 0x20;
    } while (lVar23 != 0x60);
    fVar31 = *(float *)(param_3 + 0x14);
    fVar32 = *(float *)(param_3 + 0x18);
    fVar33 = *(float *)(param_3 + 0x1c);
    fVar34 = *(float *)param_3;
    fVar5 = *(float *)(param_3 + 4);
    fVar6 = *(float *)(param_3 + 8);
    fVar7 = *(float *)(param_3 + 0xc);
    *(float *)(this + 400) = *(float *)(param_3 + 0x10) + *(float *)(this + 400);
    *(float *)(this + 0x194) = fVar31 + *(float *)(this + 0x194);
    *(float *)(this + 0x198) = fVar32 + *(float *)(this + 0x198);
    *(float *)(this + 0x19c) = fVar33 + *(float *)(this + 0x19c);
    *(float *)(this + 0x180) = *(float *)(this + 0x180) + fVar34;
    *(float *)(this + 0x184) = *(float *)(this + 0x184) + fVar5;
    *(float *)(this + 0x188) = *(float *)(this + 0x188) + fVar6;
    *(float *)(this + 0x18c) = *(float *)(this + 0x18c) + fVar7;
  }
  else if (param_2 == 1) {
    lVar23 = 0;
    do {
      pFVar2 = param_1 + lVar23 + 0x10;
      fVar31 = *(float *)pFVar2;
      fVar32 = *(float *)(pFVar2 + 4);
      fVar33 = *(float *)(pFVar2 + 8);
      fVar34 = *(float *)(pFVar2 + 0xc);
      pFVar2 = param_1 + lVar23;
      fVar5 = *(float *)(pFVar2 + 4);
      fVar6 = *(float *)(pFVar2 + 8);
      fVar7 = *(float *)(pFVar2 + 0xc);
      pEVar24 = this + lVar23 + 0x10;
      fVar8 = *(float *)pEVar24;
      fVar9 = *(float *)(pEVar24 + 4);
      fVar10 = *(float *)(pEVar24 + 8);
      fVar11 = *(float *)(pEVar24 + 0xc);
      pEVar24 = this + lVar23;
      fVar12 = *(float *)(pEVar24 + 4);
      fVar13 = *(float *)(pEVar24 + 8);
      fVar14 = *(float *)(pEVar24 + 0xc);
      *(float *)((long)local_78 + lVar23) = *(float *)pFVar2 - *(float *)pEVar24;
      *(float *)((long)local_78 + lVar23 + 4) = fVar5 - fVar12;
      *(float *)((long)local_78 + lVar23 + 8) = fVar6 - fVar13;
      *(float *)((long)local_78 + lVar23 + 0xc) = fVar7 - fVar14;
      *(float *)((long)local_78 + lVar23 + 0x10) = fVar31 - fVar8;
      *(float *)((long)local_78 + lVar23 + 0x14) = fVar32 - fVar9;
      *(float *)((long)local_78 + lVar23 + 0x18) = fVar33 - fVar10;
      *(float *)((long)local_78 + lVar23 + 0x1c) = fVar34 - fVar11;
      lVar23 = lVar23 + 0x20;
    } while (lVar23 != 0x60);
    pfVar26 = local_78 + 8;
    iVar28 = 0;
    iVar27 = 0;
    do {
      fVar31 = pfVar26[-8];
      fVar32 = pfVar26[-7];
      fVar33 = pfVar26[-6];
      fVar34 = pfVar26[-5];
      fVar5 = pfVar26[-4];
      fVar6 = pfVar26[-3];
      fVar7 = pfVar26[-2];
      fVar8 = pfVar26[-1];
      pEVar24 = this + (long)iVar28 * 0x20;
      pfVar25 = local_78;
      do {
        pfVar1 = pfVar25 + 4;
        fVar9 = pfVar25[5];
        fVar10 = pfVar25[6];
        fVar11 = pfVar25[7];
        fVar12 = *pfVar25;
        fVar13 = pfVar25[1];
        fVar14 = pfVar25[2];
        fVar15 = pfVar25[3];
        pfVar25 = pfVar25 + 8;
        fVar16 = *(float *)(param_3 + 0x14);
        fVar17 = *(float *)(param_3 + 0x18);
        fVar18 = *(float *)(param_3 + 0x1c);
        fVar19 = *(float *)param_3;
        fVar20 = *(float *)(param_3 + 4);
        fVar21 = *(float *)(param_3 + 8);
        fVar22 = *(float *)(param_3 + 0xc);
        *(float *)(pEVar24 + 0xd0) =
             *pfVar1 * fVar5 * *(float *)(param_3 + 0x10) + *(float *)(pEVar24 + 0xd0);
        *(float *)(pEVar24 + 0xd4) = fVar9 * fVar6 * fVar16 + *(float *)(pEVar24 + 0xd4);
        *(float *)(pEVar24 + 0xd8) = fVar10 * fVar7 * fVar17 + *(float *)(pEVar24 + 0xd8);
        *(float *)(pEVar24 + 0xdc) = fVar11 * fVar8 * fVar18 + *(float *)(pEVar24 + 0xdc);
        *(float *)(pEVar24 + 0xc0) = fVar12 * fVar31 * fVar19 + *(float *)(pEVar24 + 0xc0);
        *(float *)(pEVar24 + 0xc4) = fVar13 * fVar32 * fVar20 + *(float *)(pEVar24 + 0xc4);
        *(float *)(pEVar24 + 200) = fVar14 * fVar33 * fVar21 + *(float *)(pEVar24 + 200);
        *(float *)(pEVar24 + 0xcc) = fVar15 * fVar34 * fVar22 + *(float *)(pEVar24 + 0xcc);
        pEVar24 = pEVar24 + 0x20;
      } while (pfVar26 != pfVar25);
      iVar28 = iVar27 + 1 + iVar28;
      iVar27 = iVar27 + 1;
      pfVar26 = pfVar26 + 8;
    } while (iVar27 != 3);
  }
  else if (param_2 == 2) {
    lVar23 = 0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    auVar29 = (undefined1  [16])0x0;
    do {
      pFVar2 = param_1 + lVar23;
      pEVar24 = this + lVar23;
      pEVar4 = this + lVar23 + 0x60;
      fVar31 = fVar31 + (*(float *)pFVar2 - *(float *)pEVar24) * *(float *)pEVar4;
      fVar32 = fVar32 + (*(float *)(pFVar2 + 4) - *(float *)(pEVar24 + 4)) * *(float *)(pEVar4 + 4);
      fVar33 = fVar33 + (*(float *)(pFVar2 + 8) - *(float *)(pEVar24 + 8)) * *(float *)(pEVar4 + 8);
      fVar34 = fVar34 + (*(float *)(pFVar2 + 0xc) - *(float *)(pEVar24 + 0xc)) *
                        *(float *)(pEVar4 + 0xc);
      pFVar2 = param_1 + lVar23 + 0x10;
      pEVar24 = this + lVar23 + 0x10;
      pEVar4 = this + lVar23 + 0x70;
      lVar23 = lVar23 + 0x20;
      auVar30._0_4_ = auVar29._0_4_ + (*(float *)pFVar2 - *(float *)pEVar24) * *(float *)pEVar4;
      auVar30._4_4_ =
           auVar29._4_4_ +
           (*(float *)(pFVar2 + 4) - *(float *)(pEVar24 + 4)) * *(float *)(pEVar4 + 4);
      auVar30._8_4_ =
           auVar29._8_4_ +
           (*(float *)(pFVar2 + 8) - *(float *)(pEVar24 + 8)) * *(float *)(pEVar4 + 8);
      auVar30._12_4_ =
           auVar29._12_4_ +
           (*(float *)(pFVar2 + 0xc) - *(float *)(pEVar24 + 0xc)) * *(float *)(pEVar4 + 0xc);
      auVar29 = auVar30;
    } while (lVar23 != 0x60);
    auVar29._4_4_ = fVar32;
    auVar29._0_4_ = fVar31;
    auVar29._8_4_ = fVar33;
    auVar29._12_4_ = fVar34;
    auVar35 = minps(*(undefined1 (*) [16])(this + 0x1a0),auVar29);
    auVar29 = minps(*(undefined1 (*) [16])(this + 0x1b0),auVar30);
    *(undefined1 (*) [16])(this + 0x1a0) = auVar35;
    *(undefined1 (*) [16])(this + 0x1b0) = auVar29;
    auVar35._4_4_ = fVar32;
    auVar35._0_4_ = fVar31;
    auVar35._8_4_ = fVar33;
    auVar35._12_4_ = fVar34;
    auVar35 = maxps(*(undefined1 (*) [16])(this + 0x1c0),auVar35);
    auVar29 = maxps(*(undefined1 (*) [16])(this + 0x1d0),auVar30);
    *(undefined1 (*) [16])(this + 0x1c0) = auVar35;
    *(undefined1 (*) [16])(this + 0x1d0) = auVar29;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pfVar26);
  }
  return;
}



/* void cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<0>,
   cvtt::ParallelMath::VInt16<0> >(float const*, cvtt::ParallelMath::VInt16<0> const (*) [3],
   cvtt::ParallelMath::VInt16<0> const (*) [3], int) */

void __thiscall
cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<0>,cvtt::ParallelMath::VInt16<0>>
          (IndexSelector<3> *this,float *param_1,VInt16<0> *param_2,VInt16<0> *param_3,int param_4)

{
  long lVar1;
  VInt16<0> *pVVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  IndexSelector<3> *pIVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  long in_FS_OFFSET;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar33;
  undefined1 auVar30 [12];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float local_78 [26];
  long local_10;
  
  fVar43 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar28 = param_1[1];
  this[0x128] = (IndexSelector<3>)(fVar43 == fVar28);
  this[0x128] = (IndexSelector<3>)(fVar43 == param_1[2] && fVar43 == fVar28);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x28) = uVar10;
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar11;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  uVar11 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar10;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x38) = uVar11;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  lVar15 = 0;
  *(int *)(this + 0x120) = param_4;
  fVar43 = (float)(param_4 + -1);
  *(undefined8 *)(this + 0x50) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar5;
  *(float *)(this + 0x124) = fVar43;
  pfVar16 = param_1;
  do {
    pVVar2 = param_3 + lVar15;
    sVar6 = *(short *)pVVar2;
    auVar12._10_2_ = *(short *)(pVVar2 + 4);
    auVar12._0_10_ = (unkuint10)0;
    auVar30._0_10_ =
         (unkuint10)
         CONCAT24(*(undefined2 *)(param_3 + lVar15 + 10),(uint)*(ushort *)(param_3 + lVar15 + 8)) <<
         0x10;
    auVar30._10_2_ = *(undefined2 *)(param_3 + lVar15 + 0xc);
    auVar42._12_2_ = 0;
    auVar42._0_12_ = auVar30;
    auVar42._14_2_ = *(undefined2 *)(param_3 + lVar15 + 0xe);
    fVar38 = (float)(SUB164(ZEXT616(CONCAT42(auVar12._8_4_,*(short *)(pVVar2 + 2))) << 0x30,4) >>
                    0x10);
    fVar39 = (float)(auVar12._8_4_ >> 0x10);
    fVar29 = (float)((int)auVar30._0_10_ >> 0x10);
    fVar33 = (float)(int)((int6)CONCAT24(*(undefined2 *)(param_3 + lVar15 + 10),
                                         (uint)*(ushort *)(param_3 + lVar15 + 8)) >> 0x20);
    fVar34 = (float)(auVar30._8_4_ >> 0x10);
    fVar35 = (float)(auVar42._12_4_ >> 0x10);
    pIVar14 = this + lVar15 * 2 + 0x60;
    *(float *)pIVar14 = (float)(int)sVar6;
    *(float *)(pIVar14 + 4) = fVar38;
    *(float *)(pIVar14 + 8) = fVar39;
    *(undefined4 *)(pIVar14 + 0xc) = 0;
    pIVar14 = this + lVar15 * 2 + 0x70;
    *(float *)pIVar14 = fVar29;
    *(float *)(pIVar14 + 4) = fVar33;
    *(float *)(pIVar14 + 8) = fVar34;
    *(float *)(pIVar14 + 0xc) = fVar35;
    pVVar2 = param_3 + lVar15 + 0x30;
    sVar7 = *(short *)(pVVar2 + 2);
    auVar13._10_2_ = *(short *)(pVVar2 + 4);
    auVar13._0_10_ = (unkuint10)0;
    uVar8 = *(ushort *)(param_3 + lVar15 + 0x38);
    uVar9 = *(undefined2 *)(param_3 + lVar15 + 0x3a);
    auVar26._0_10_ = (unkuint10)CONCAT24(uVar9,(uint)uVar8) << 0x10;
    auVar26._10_2_ = *(undefined2 *)(param_3 + lVar15 + 0x3c);
    auVar32._12_2_ = 0;
    auVar32._0_12_ = auVar26;
    auVar32._14_2_ = *(undefined2 *)(param_3 + lVar15 + 0x3e);
    fVar28 = *pfVar16;
    lVar1 = lVar15 * 2;
    *(float *)((long)local_78 + lVar1) = ((float)(int)*(short *)pVVar2 - (float)(int)sVar6) * fVar28
    ;
    *(float *)((long)local_78 + lVar1 + 4) =
         ((float)(SUB164(ZEXT616(CONCAT42(auVar13._8_4_,sVar7)) << 0x30,4) >> 0x10) - fVar38) *
         fVar28;
    *(float *)((long)local_78 + lVar1 + 8) = ((float)(auVar13._8_4_ >> 0x10) - fVar39) * fVar28;
    *(float *)((long)local_78 + lVar1 + 0xc) = fVar28 * 0.0;
    lVar1 = lVar15 * 2;
    *(float *)((long)local_78 + lVar1 + 0x10) =
         ((float)((int)auVar26._0_10_ >> 0x10) - fVar29) * fVar28;
    *(float *)((long)local_78 + lVar1 + 0x14) =
         ((float)(int)((int6)CONCAT24(uVar9,(uint)uVar8) >> 0x20) - fVar33) * fVar28;
    *(float *)((long)local_78 + lVar1 + 0x18) = ((float)(auVar26._8_4_ >> 0x10) - fVar34) * fVar28;
    *(float *)((long)local_78 + lVar1 + 0x1c) = ((float)(auVar32._12_4_ >> 0x10) - fVar35) * fVar28;
    lVar15 = lVar15 + 0x10;
    pfVar16 = pfVar16 + 1;
  } while (lVar15 != 0x30);
  pfVar17 = param_1 + 3;
  fVar35 = local_78[0] * local_78[0] + local_78[8] * local_78[8] + local_78[0x10] * local_78[0x10];
  fVar38 = local_78[1] * local_78[1] + local_78[9] * local_78[9] + local_78[0x11] * local_78[0x11];
  fVar39 = local_78[2] * local_78[2] + local_78[10] * local_78[10] + local_78[0x12] * local_78[0x12]
  ;
  fVar36 = local_78[3] * local_78[3] + local_78[0xb] * local_78[0xb] +
           local_78[0x13] * local_78[0x13];
  fVar28 = local_78[4] * local_78[4] + local_78[0xc] * local_78[0xc] +
           local_78[0x14] * local_78[0x14];
  fVar29 = local_78[5] * local_78[5] + local_78[0xd] * local_78[0xd] +
           local_78[0x15] * local_78[0x15];
  fVar33 = local_78[6] * local_78[6] + local_78[0xe] * local_78[0xe] +
           local_78[0x16] * local_78[0x16];
  fVar34 = local_78[7] * local_78[7] + local_78[0xf] * local_78[0xf] +
           local_78[0x17] * local_78[0x17];
  uVar18 = -(uint)(fVar35 == 0.0);
  uVar20 = -(uint)(fVar38 == 0.0);
  uVar22 = -(uint)(fVar39 == 0.0);
  uVar24 = -(uint)(fVar36 == 0.0);
  uVar19 = -(uint)(fVar28 == 0.0);
  uVar21 = -(uint)(fVar29 == 0.0);
  uVar23 = -(uint)(fVar33 == 0.0);
  uVar25 = -(uint)(fVar34 == 0.0);
  auVar37._0_4_ = ~uVar18 & (uint)fVar35;
  auVar37._4_4_ = ~uVar20 & (uint)fVar38;
  auVar37._8_4_ = ~uVar22 & (uint)fVar39;
  auVar37._12_4_ = ~uVar24 & (uint)fVar36;
  auVar31._0_8_ = CONCAT44(fVar43,fVar43);
  auVar31._8_4_ = fVar43;
  auVar31._12_4_ = fVar43;
  auVar40._0_4_ = _LC29 & uVar19;
  auVar40._4_4_ = _LC29 & uVar21;
  auVar40._8_4_ = _LC29 & uVar23;
  auVar40._12_4_ = _LC29 & uVar25;
  auVar27._0_4_ = ~uVar19 & (uint)fVar28;
  auVar27._4_4_ = ~uVar21 & (uint)fVar29;
  auVar27._8_4_ = ~uVar23 & (uint)fVar33;
  auVar27._12_4_ = ~uVar25 & (uint)fVar34;
  auVar3._4_4_ = uVar20 & _LC29;
  auVar3._0_4_ = uVar18 & _LC29;
  auVar3._8_4_ = uVar22 & _LC29;
  auVar3._12_4_ = uVar24 & _LC29;
  auVar41._8_4_ = fVar43;
  auVar41._0_8_ = auVar31._0_8_;
  auVar41._12_4_ = fVar43;
  auVar42 = divps(auVar41,auVar37 | auVar3);
  auVar32 = divps(auVar31,auVar27 | auVar40);
  pIVar14 = this + 0xd0;
  pfVar16 = local_78;
  do {
    fVar43 = *param_1;
    fVar28 = pfVar16[5];
    fVar29 = pfVar16[6];
    fVar33 = pfVar16[7];
    param_1 = param_1 + 1;
    fVar34 = *pfVar16;
    fVar35 = pfVar16[1];
    fVar38 = pfVar16[2];
    fVar39 = pfVar16[3];
    *(float *)pIVar14 = pfVar16[4] * fVar43 * auVar32._0_4_;
    *(float *)(pIVar14 + 4) = fVar28 * fVar43 * auVar32._4_4_;
    *(float *)(pIVar14 + 8) = fVar29 * fVar43 * auVar32._8_4_;
    *(float *)(pIVar14 + 0xc) = fVar33 * fVar43 * auVar32._12_4_;
    *(float *)(pIVar14 + -0x10) = fVar43 * fVar34 * auVar42._0_4_;
    *(float *)(pIVar14 + -0xc) = fVar43 * fVar35 * auVar42._4_4_;
    *(float *)(pIVar14 + -8) = fVar43 * fVar38 * auVar42._8_4_;
    *(float *)(pIVar14 + -4) = fVar43 * fVar39 * auVar42._12_4_;
    pIVar14 = pIVar14 + 0x20;
    pfVar16 = pfVar16 + 8;
  } while (pfVar17 != param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::IndexSelectorHDR<3>::InitHDR(int, bool, bool, float const*) */

void __thiscall
cvtt::Internal::IndexSelectorHDR<3>::InitHDR
          (IndexSelectorHDR<3> *this,int param_1,bool param_2,bool param_3,float *param_4)

{
  IndexSelectorHDR<3> *pIVar1;
  IndexSelectorHDR<3> *pIVar2;
  float fVar3;
  uint6 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  unkbyte10 Var21;
  unkbyte10 Var22;
  undefined1 auVar23 [12];
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  wchar16 wVar29;
  wchar16 wVar30;
  wchar16 wVar31;
  wchar16 wVar32;
  wchar16 wVar33;
  wchar16 wVar34;
  wchar16 wVar35;
  wchar16 wVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  long lVar50;
  IndexSelectorHDR<3> *pIVar51;
  float *pfVar52;
  undefined1 (*pauVar53) [16];
  int iVar54;
  IndexSelectorHDR<3> *pIVar55;
  long in_FS_OFFSET;
  undefined2 uVar56;
  int iVar58;
  uint uVar59;
  float fVar60;
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  short sVar73;
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar74 [12];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  int iVar84;
  undefined1 auVar86 [12];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 local_58 [48];
  undefined1 local_28 [8];
  long local_20;
  undefined4 uVar57;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar72 [16];
  undefined1 auVar79 [16];
  undefined1 auVar85 [12];
  undefined1 auVar87 [16];
  undefined1 auVar89 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x730) = (undefined1  [16])0x0;
  *(int *)(this + 0x750) = param_1;
  uVar56 = (undefined2)(param_1 + -1);
  uVar57 = CONCAT22(uVar56,uVar56);
  *(undefined4 *)(this + 0x740) = uVar57;
  *(undefined4 *)(this + 0x744) = uVar57;
  *(undefined4 *)(this + 0x748) = uVar57;
  *(undefined4 *)(this + 0x74c) = uVar57;
  sVar49 = _UNK_0011b79e;
  sVar48 = _UNK_0011b79c;
  sVar47 = _UNK_0011b79a;
  sVar46 = _UNK_0011b798;
  sVar45 = _UNK_0011b796;
  sVar44 = _UNK_0011b794;
  sVar43 = _UNK_0011b792;
  sVar42 = __LC36;
  auVar41 = __LC34;
  auVar40 = __LC33;
  iVar39 = _UNK_0011b76c;
  iVar38 = _UNK_0011b768;
  iVar37 = _UNK_0011b764;
  uVar57 = _LC31._16_4_;
  wVar36 = _LC31[7];
  wVar35 = _LC31[6];
  wVar34 = _LC31[5];
  wVar33 = _LC31[4];
  wVar32 = _LC31[3];
  wVar31 = _LC31[2];
  wVar30 = _LC31[1];
  wVar29 = _LC31[0];
  auVar28 = __LC11;
  auVar27 = __LC10;
  if ((!param_3) && (0 < param_1)) {
    lVar50 = (long)param_1 * 0x10;
    iVar54 = 0;
    sVar5 = *(short *)(&g_weightReciprocals + lVar50);
    sVar6 = *(short *)(lVar50 + 0x11d05a);
    sVar7 = *(short *)(lVar50 + 0x11d05c);
    sVar8 = *(short *)(lVar50 + 0x11d05e);
    sVar9 = *(short *)(lVar50 + 0x11d060);
    sVar10 = *(short *)(lVar50 + 0x11d062);
    sVar11 = *(short *)(lVar50 + 0x11d064);
    sVar12 = *(short *)(lVar50 + 0x11d066);
    auVar13._2_2_ = _UNK_0011b792;
    auVar13._0_2_ = __LC36;
    auVar13._4_2_ = _UNK_0011b794;
    auVar13._6_2_ = _UNK_0011b796;
    auVar13._8_2_ = _UNK_0011b798;
    auVar13._10_2_ = _UNK_0011b79a;
    auVar13._12_2_ = _UNK_0011b79c;
    auVar13._14_2_ = _UNK_0011b79e;
    pIVar55 = this;
    do {
      lVar50 = 0;
      sVar73 = (short)iVar54;
      auVar82._0_2_ = (ushort)(sVar73 * sVar5 + __LC30) >> 9;
      auVar82._2_2_ = (ushort)(sVar73 * sVar6 + _UNK_0011b742) >> 9;
      auVar82._4_2_ = (ushort)(sVar73 * sVar7 + _UNK_0011b744) >> 9;
      auVar82._6_2_ = (ushort)(sVar73 * sVar8 + _UNK_0011b746) >> 9;
      auVar82._8_2_ = (ushort)(sVar73 * sVar9 + _UNK_0011b748) >> 9;
      auVar82._10_2_ = (ushort)(sVar73 * sVar10 + _UNK_0011b74a) >> 9;
      auVar82._12_2_ = (ushort)(sVar73 * sVar11 + _UNK_0011b74c) >> 9;
      auVar82._14_2_ = (ushort)(sVar73 * sVar12 + _UNK_0011b74e) >> 9;
      auVar71._0_2_ = wVar29 - auVar82._0_2_;
      auVar71._2_2_ = wVar30 - auVar82._2_2_;
      auVar71._4_2_ = wVar31 - auVar82._4_2_;
      auVar71._6_2_ = wVar32 - auVar82._6_2_;
      auVar71._8_2_ = wVar33 - auVar82._8_2_;
      auVar71._10_2_ = wVar34 - auVar82._10_2_;
      auVar71._12_2_ = wVar35 - auVar82._12_2_;
      auVar71._14_2_ = wVar36 - auVar82._14_2_;
      pIVar51 = pIVar55;
      pfVar52 = param_4;
      pauVar53 = (undefined1 (*) [16])local_58;
      if (param_2) {
        do {
          pIVar2 = this + lVar50 + 0x30;
          auVar66 = pmulhw(auVar82,*(undefined1 (*) [16])(this + lVar50 + 0x30));
          auVar94 = pmulhw(auVar71,*(undefined1 (*) [16])(this + lVar50));
          iVar84 = CONCAT22(auVar66._8_2_,*(short *)(pIVar2 + 8) * auVar82._8_2_);
          auVar85._0_8_ =
               CONCAT26(auVar66._10_2_,CONCAT24(*(short *)(pIVar2 + 10) * auVar82._10_2_,iVar84));
          auVar85._8_2_ = *(short *)(pIVar2 + 0xc) * auVar82._12_2_;
          auVar85._10_2_ = auVar66._12_2_;
          auVar87._12_2_ = *(short *)(pIVar2 + 0xe) * auVar82._14_2_;
          auVar87._0_12_ = auVar85;
          auVar87._14_2_ = auVar66._14_2_;
          iVar24 = CONCAT22(auVar66._6_2_,*(short *)(pIVar2 + 6) * auVar82._6_2_);
          Var21 = CONCAT64(CONCAT42(iVar24,auVar66._4_2_),
                           CONCAT22(*(short *)(pIVar2 + 4) * auVar82._4_2_,
                                    *(short *)(pIVar2 + 6) * auVar82._6_2_));
          auVar14._4_8_ = (long)((unkuint10)Var21 >> 0x10);
          auVar14._2_2_ = auVar66._2_2_;
          auVar14._0_2_ = *(short *)(pIVar2 + 2) * auVar82._2_2_;
          pIVar1 = this + lVar50;
          iVar58 = CONCAT22(auVar94._8_2_,*(short *)(pIVar1 + 8) * auVar71._8_2_);
          auVar61._0_8_ =
               CONCAT26(auVar94._10_2_,CONCAT24(*(short *)(pIVar1 + 10) * auVar71._10_2_,iVar58));
          auVar61._8_2_ = *(short *)(pIVar1 + 0xc) * auVar71._12_2_;
          auVar61._10_2_ = auVar94._12_2_;
          auVar67._12_2_ = *(short *)(pIVar1 + 0xe) * auVar71._14_2_;
          auVar67._0_12_ = auVar61;
          auVar67._14_2_ = auVar94._14_2_;
          iVar25 = CONCAT22(auVar94._6_2_,*(short *)(pIVar1 + 6) * auVar71._6_2_);
          Var22 = CONCAT64(CONCAT42(iVar25,auVar94._4_2_),
                           CONCAT22(*(short *)(pIVar1 + 4) * auVar71._4_2_,
                                    *(short *)(pIVar1 + 6) * auVar71._6_2_));
          auVar15._4_8_ = (long)((unkuint10)Var22 >> 0x10);
          auVar15._2_2_ = auVar94._2_2_;
          auVar15._0_2_ = *(short *)(pIVar1 + 2) * auVar71._2_2_;
          auVar68._0_4_ = iVar58 + iVar84 + uVar57 >> 6;
          auVar68._4_4_ =
               (int)((ulong)auVar61._0_8_ >> 0x20) + (int)((ulong)auVar85._0_8_ >> 0x20) + iVar37 >>
               6;
          auVar68._8_4_ = auVar61._8_4_ + auVar85._8_4_ + iVar38 >> 6;
          auVar68._12_4_ = auVar67._12_4_ + auVar87._12_4_ + iVar39 >> 6;
          auVar75._0_4_ =
               CONCAT22(auVar94._0_2_,*(short *)pIVar1 * auVar71._0_2_) +
               CONCAT22(auVar66._0_2_,*(short *)pIVar2 * auVar82._0_2_) + uVar57 >> 6;
          auVar75._4_4_ = auVar15._0_4_ + auVar14._0_4_ + iVar37 >> 6;
          auVar75._8_4_ =
               (int)((unkuint10)Var22 >> 0x10) + (int)((unkuint10)Var21 >> 0x10) + iVar38 >> 6;
          auVar75._12_4_ = iVar25 + iVar24 + iVar39 >> 6;
          auVar66 = packssdw(auVar75,auVar68);
          auVar88._0_2_ = -(ushort)(auVar66._0_2_ < 0);
          auVar88._2_2_ = -(ushort)(auVar66._2_2_ < 0);
          auVar88._4_2_ = -(ushort)(auVar66._4_2_ < 0);
          auVar88._6_2_ = -(ushort)(auVar66._6_2_ < 0);
          auVar88._8_2_ = -(ushort)(auVar66._8_2_ < 0);
          auVar88._10_2_ = -(ushort)(auVar66._10_2_ < 0);
          auVar88._12_2_ = -(ushort)(auVar66._12_2_ < 0);
          auVar88._14_2_ = -(ushort)(auVar66._14_2_ < 0);
          auVar76._2_2_ = -auVar66._2_2_;
          auVar76._0_2_ = -auVar66._0_2_;
          auVar76._4_2_ = -auVar66._4_2_;
          auVar76._6_2_ = -auVar66._6_2_;
          auVar76._8_2_ = -auVar66._8_2_;
          auVar76._10_2_ = -auVar66._10_2_;
          auVar76._12_2_ = -auVar66._12_2_;
          auVar76._14_2_ = -auVar66._14_2_;
          auVar94 = auVar76 & auVar88 | ~auVar88 & auVar66;
          auVar95 = pmulhuw(auVar94,auVar27);
          auVar66 = psllw(auVar94,5);
          sVar73 = auVar66._6_2_ - auVar94._6_2_;
          uVar26 = CONCAT22(auVar95._6_2_,sVar73);
          Var21 = CONCAT64(CONCAT42(uVar26,auVar95._4_2_),
                           CONCAT22(auVar66._4_2_ - auVar94._4_2_,sVar73));
          auVar16._4_8_ = (long)((unkuint10)Var21 >> 0x10);
          auVar16._2_2_ = auVar95._2_2_;
          auVar16._0_2_ = auVar66._2_2_ - auVar94._2_2_;
          uVar59 = CONCAT22(auVar95._8_2_,auVar66._8_2_ - auVar94._8_2_);
          auVar62._0_8_ = CONCAT26(auVar95._10_2_,CONCAT24(auVar66._10_2_ - auVar94._10_2_,uVar59));
          auVar62._8_2_ = auVar66._12_2_ - auVar94._12_2_;
          auVar62._10_2_ = auVar95._12_2_;
          auVar69._12_2_ = auVar66._14_2_ - auVar94._14_2_;
          auVar69._0_12_ = auVar62;
          auVar69._14_2_ = auVar95._14_2_;
          auVar77._0_4_ = CONCAT22(auVar95._0_2_,auVar66._0_2_ - auVar94._0_2_) >> 5;
          auVar77._4_4_ = auVar16._0_4_ >> 5;
          auVar77._8_4_ = (uint)((unkuint10)Var21 >> 0x10) >> 5;
          auVar77._12_4_ = uVar26 >> 5;
          auVar70._0_4_ = uVar59 >> 5;
          auVar70._4_4_ = (uint)((ulong)auVar62._0_8_ >> 0x25);
          auVar70._8_4_ = auVar62._8_4_ >> 5;
          auVar70._12_4_ = auVar69._12_4_ >> 5;
          auVar66 = packssdw(auVar77,auVar70);
          *(undefined1 (*) [16])(*(undefined1 (*) [16])local_58 + lVar50) =
               auVar88 & auVar28 | auVar66;
          lVar50 = lVar50 + 0x10;
        } while (lVar50 != 0x30);
      }
      else {
        do {
          pIVar2 = this + lVar50 + 0x30;
          auVar66 = pmulhuw(auVar82,*(undefined1 (*) [16])(this + lVar50 + 0x30));
          auVar96 = pmulhuw(auVar71,*(undefined1 (*) [16])(this + lVar50));
          iVar84 = CONCAT22(auVar66._8_2_,*(short *)(pIVar2 + 8) * auVar82._8_2_);
          auVar86._0_8_ =
               CONCAT26(auVar66._10_2_,CONCAT24(*(short *)(pIVar2 + 10) * auVar82._10_2_,iVar84));
          auVar86._8_2_ = *(short *)(pIVar2 + 0xc) * auVar82._12_2_;
          auVar86._10_2_ = auVar66._12_2_;
          auVar89._12_2_ = *(short *)(pIVar2 + 0xe) * auVar82._14_2_;
          auVar89._0_12_ = auVar86;
          auVar89._14_2_ = auVar66._14_2_;
          iVar24 = CONCAT22(auVar66._6_2_,*(short *)(pIVar2 + 6) * auVar82._6_2_);
          Var21 = CONCAT64(CONCAT42(iVar24,auVar66._4_2_),
                           CONCAT22(*(short *)(pIVar2 + 4) * auVar82._4_2_,
                                    *(short *)(pIVar2 + 6) * auVar82._6_2_));
          auVar18._4_8_ = (long)((unkuint10)Var21 >> 0x10);
          auVar18._2_2_ = auVar66._2_2_;
          auVar18._0_2_ = *(short *)(pIVar2 + 2) * auVar82._2_2_;
          pIVar1 = this + lVar50;
          iVar58 = CONCAT22(auVar96._8_2_,*(short *)(pIVar1 + 8) * auVar71._8_2_);
          auVar64._0_8_ =
               CONCAT26(auVar96._10_2_,CONCAT24(*(short *)(pIVar1 + 10) * auVar71._10_2_,iVar58));
          auVar64._8_2_ = *(short *)(pIVar1 + 0xc) * auVar71._12_2_;
          auVar64._10_2_ = auVar96._12_2_;
          auVar94._12_2_ = *(short *)(pIVar1 + 0xe) * auVar71._14_2_;
          auVar94._0_12_ = auVar64;
          auVar94._14_2_ = auVar96._14_2_;
          iVar25 = CONCAT22(auVar96._6_2_,*(short *)(pIVar1 + 6) * auVar71._6_2_);
          Var22 = CONCAT64(CONCAT42(iVar25,auVar96._4_2_),
                           CONCAT22(*(short *)(pIVar1 + 4) * auVar71._4_2_,
                                    *(short *)(pIVar1 + 6) * auVar71._6_2_));
          auVar19._4_8_ = (long)((unkuint10)Var22 >> 0x10);
          auVar19._2_2_ = auVar96._2_2_;
          auVar19._0_2_ = *(short *)(pIVar1 + 2) * auVar71._2_2_;
          auVar95._0_4_ = (int)(short)((uint)(iVar58 + iVar84 + uVar57) >> 6);
          auVar95._4_4_ =
               (int)(short)((uint)((int)((ulong)auVar64._0_8_ >> 0x20) +
                                   (int)((ulong)auVar86._0_8_ >> 0x20) + iVar37) >> 6);
          auVar95._8_4_ = (int)(short)((uint)(auVar64._8_4_ + auVar86._8_4_ + iVar38) >> 6);
          auVar95._12_4_ = (int)(short)((uint)(auVar94._12_4_ + auVar89._12_4_ + iVar39) >> 6);
          auVar80._0_4_ =
               (int)(short)((uint)(CONCAT22(auVar96._0_2_,*(short *)pIVar1 * auVar71._0_2_) +
                                   CONCAT22(auVar66._0_2_,*(short *)pIVar2 * auVar82._0_2_) + uVar57
                                  ) >> 6);
          auVar80._4_4_ = (int)(short)((uint)(auVar19._0_4_ + auVar18._0_4_ + iVar37) >> 6);
          auVar80._8_4_ =
               (int)(short)((uint)((int)((unkuint10)Var22 >> 0x10) + (int)((unkuint10)Var21 >> 0x10)
                                  + iVar38) >> 6);
          auVar80._12_4_ = (int)(short)((uint)(iVar25 + iVar24 + iVar39) >> 6);
          auVar94 = packssdw(auVar80,auVar95);
          auVar95 = pmulhuw(auVar94,auVar27);
          auVar66 = psllw(auVar94,5);
          sVar73 = auVar66._6_2_ - auVar94._6_2_;
          uVar26 = CONCAT22(auVar95._6_2_,sVar73);
          Var21 = CONCAT64(CONCAT42(uVar26,auVar95._4_2_),
                           CONCAT22(auVar66._4_2_ - auVar94._4_2_,sVar73));
          auVar20._4_8_ = (long)((unkuint10)Var21 >> 0x10);
          auVar20._2_2_ = auVar95._2_2_;
          auVar20._0_2_ = auVar66._2_2_ - auVar94._2_2_;
          uVar59 = CONCAT22(auVar95._8_2_,auVar66._8_2_ - auVar94._8_2_);
          auVar65._0_8_ = CONCAT26(auVar95._10_2_,CONCAT24(auVar66._10_2_ - auVar94._10_2_,uVar59));
          auVar65._8_2_ = auVar66._12_2_ - auVar94._12_2_;
          auVar65._10_2_ = auVar95._12_2_;
          auVar96._12_2_ = auVar66._14_2_ - auVar94._14_2_;
          auVar96._0_12_ = auVar65;
          auVar96._14_2_ = auVar95._14_2_;
          auVar81._0_4_ = CONCAT22(auVar95._0_2_,auVar66._0_2_ - auVar94._0_2_) >> 6;
          auVar81._4_4_ = auVar20._0_4_ >> 6;
          auVar81._8_4_ = (uint)((unkuint10)Var21 >> 0x10) >> 6;
          auVar81._12_4_ = uVar26 >> 6;
          auVar66._0_4_ = uVar59 >> 6;
          auVar66._4_4_ = (uint)((ulong)auVar65._0_8_ >> 0x26);
          auVar66._8_4_ = auVar65._8_4_ >> 6;
          auVar66._12_4_ = auVar96._12_4_ >> 6;
          auVar66 = packssdw(auVar81,auVar66);
          *(undefined1 (*) [16])(*(undefined1 (*) [16])local_58 + lVar50) = auVar66;
          lVar50 = lVar50 + 0x10;
        } while (lVar50 != 0x30);
      }
      do {
        auVar82 = *pauVar53;
        pauVar53 = pauVar53 + 1;
        auVar71 = auVar82 & auVar41;
        auVar66 = auVar82 & auVar40;
        auVar82 = auVar82 & auVar28;
        auVar90._0_2_ = auVar71._0_2_ >> 3;
        auVar90._2_2_ = auVar71._2_2_ >> 3;
        auVar90._4_2_ = auVar71._4_2_ >> 3;
        auVar90._6_2_ = auVar71._6_2_ >> 3;
        auVar90._8_2_ = auVar71._8_2_ >> 3;
        auVar90._10_2_ = auVar71._10_2_ >> 3;
        auVar90._12_2_ = auVar71._12_2_ >> 3;
        auVar90._14_2_ = auVar71._14_2_ >> 3;
        auVar71 = psllw(auVar71,0xd);
        auVar83._0_2_ = -(ushort)(auVar66._0_2_ == 0);
        auVar83._2_2_ = -(ushort)(auVar66._2_2_ == 0);
        auVar83._4_2_ = -(ushort)(auVar66._4_2_ == 0);
        auVar83._6_2_ = -(ushort)(auVar66._6_2_ == 0);
        auVar83._8_2_ = -(ushort)(auVar66._8_2_ == 0);
        auVar83._10_2_ = -(ushort)(auVar66._10_2_ == 0);
        auVar83._12_2_ = -(ushort)(auVar66._12_2_ == 0);
        auVar83._14_2_ = -(ushort)(auVar66._14_2_ == 0);
        auVar78._0_2_ = (auVar66._0_2_ >> 3) + sVar42;
        auVar78._2_2_ = (auVar66._2_2_ >> 3) + sVar43;
        auVar78._4_2_ = (auVar66._4_2_ >> 3) + sVar44;
        auVar78._6_2_ = (auVar66._6_2_ >> 3) + sVar45;
        auVar78._8_2_ = (auVar66._8_2_ >> 3) + sVar46;
        auVar78._10_2_ = (auVar66._10_2_ >> 3) + sVar47;
        auVar78._12_2_ = (auVar66._12_2_ >> 3) + sVar48;
        auVar78._14_2_ = (auVar66._14_2_ >> 3) + sVar49;
        auVar66 = auVar78 | auVar90 | auVar82;
        auVar83 = (auVar82 | auVar13) & auVar83;
        auVar93._0_12_ = auVar71._0_12_;
        auVar93._12_2_ = auVar71._6_2_;
        auVar93._14_2_ = auVar66._6_2_;
        auVar92._12_4_ = auVar93._12_4_;
        auVar92._0_10_ = auVar71._0_10_;
        auVar92._10_2_ = auVar66._4_2_;
        auVar91._10_6_ = auVar92._10_6_;
        auVar91._0_8_ = auVar71._0_8_;
        auVar91._8_2_ = auVar71._4_2_;
        auVar17._4_8_ = auVar91._8_8_;
        auVar17._2_2_ = auVar66._2_2_;
        auVar17._0_2_ = auVar71._2_2_;
        fVar60 = (float)CONCAT22(auVar66._8_2_,auVar71._8_2_);
        auVar63._0_8_ = CONCAT26(auVar66._10_2_,CONCAT24(auVar71._10_2_,fVar60));
        auVar63._8_2_ = auVar71._12_2_;
        auVar63._10_2_ = auVar66._12_2_;
        auVar72._12_2_ = auVar71._14_2_;
        auVar72._0_12_ = auVar63;
        auVar72._14_2_ = auVar66._14_2_;
        auVar23._10_2_ = auVar83._4_2_;
        auVar23._0_10_ = (unkuint10)0;
        uVar4 = CONCAT24(auVar83._10_2_,(uint)auVar83._8_2_);
        auVar74._0_10_ = (unkuint10)uVar4 << 0x10;
        auVar74._10_2_ = auVar83._12_2_;
        auVar79._12_2_ = 0;
        auVar79._0_12_ = auVar74;
        auVar79._14_2_ = auVar83._14_2_;
        fVar3 = *pfVar52;
        *(float *)(pIVar51 + 0x130) =
             ((float)CONCAT22(auVar66._0_2_,auVar71._0_2_) - (float)((uint)auVar83._0_2_ << 0x10)) *
             fVar3;
        *(float *)(pIVar51 + 0x134) =
             (auVar17._0_4_ - SUB164(ZEXT616(CONCAT42(auVar23._8_4_,auVar83._2_2_)) << 0x30,4)) *
             fVar3;
        *(float *)(pIVar51 + 0x138) = (auVar91._8_4_ - auVar23._8_4_) * fVar3;
        *(float *)(pIVar51 + 0x13c) = (auVar92._12_4_ - 0.0) * fVar3;
        *(float *)(pIVar51 + 0x140) = (fVar60 - (float)auVar74._0_10_) * fVar3;
        *(float *)(pIVar51 + 0x144) =
             ((float)((ulong)auVar63._0_8_ >> 0x20) - (float)(uVar4 >> 0x10)) * fVar3;
        *(float *)(pIVar51 + 0x148) = (auVar63._8_4_ - auVar74._8_4_) * fVar3;
        *(float *)(pIVar51 + 0x14c) = (auVar72._12_4_ - auVar79._12_4_) * fVar3;
        pIVar51 = pIVar51 + 0x20;
        pfVar52 = pfVar52 + 1;
      } while ((undefined1 (*) [16])local_28 != pauVar53);
      iVar54 = iVar54 + 1;
      pIVar55 = pIVar55 + 0x60;
    } while (param_1 != iVar54);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<1>,
   cvtt::ParallelMath::VInt16<1> >(float const*, cvtt::ParallelMath::VInt16<1> const (*) [3],
   cvtt::ParallelMath::VInt16<1> const (*) [3], int) */

void __thiscall
cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<1>,cvtt::ParallelMath::VInt16<1>>
          (IndexSelector<3> *this,float *param_1,VInt16<1> *param_2,VInt16<1> *param_3,int param_4)

{
  long lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  IndexSelector<3> *pIVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long in_FS_OFFSET;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float local_78 [26];
  long local_10;
  
  fVar39 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar26 = param_1[1];
  this[0x128] = (IndexSelector<3>)(fVar39 == fVar26);
  this[0x128] = (IndexSelector<3>)(fVar39 == param_1[2] && fVar39 == fVar26);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar9;
  *(undefined8 *)(this + 0x30) = uVar7;
  *(undefined8 *)(this + 0x38) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  lVar14 = 0;
  *(int *)(this + 0x120) = param_4;
  fVar39 = (float)(param_4 + -1);
  *(undefined8 *)(this + 0x50) = uVar7;
  *(undefined8 *)(this + 0x58) = uVar8;
  *(float *)(this + 0x124) = fVar39;
  pfVar15 = param_1;
  do {
    auVar30 = *(undefined1 (*) [16])(param_3 + lVar14);
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar30._0_10_;
    auVar3._12_2_ = auVar30._6_2_;
    auVar5._8_2_ = auVar30._4_2_;
    auVar5._0_8_ = auVar30._0_8_;
    auVar5._10_4_ = auVar3._10_4_;
    auVar11._6_8_ = 0;
    auVar11._0_6_ = auVar5._8_6_;
    pIVar13 = this + lVar14 * 2 + 0x70;
    *(float *)pIVar13 = (float)auVar30._8_2_;
    *(float *)(pIVar13 + 4) = (float)auVar30._10_2_;
    *(float *)(pIVar13 + 8) = (float)auVar30._12_2_;
    *(float *)(pIVar13 + 0xc) = (float)auVar30._14_2_;
    fVar34 = (float)(int)CONCAT82(SUB148(auVar11 << 0x40,6),auVar30._2_2_);
    fVar35 = (float)(auVar3._10_4_ >> 0x10);
    pIVar13 = this + lVar14 * 2 + 0x60;
    *(float *)pIVar13 = (float)auVar30._0_2_;
    *(float *)(pIVar13 + 4) = fVar34;
    *(float *)(pIVar13 + 8) = (float)auVar5._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar35;
    auVar25 = *(undefined1 (*) [16])(param_3 + lVar14 + 0x30);
    fVar26 = *pfVar15;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar25._0_10_;
    auVar2._12_2_ = auVar25._6_2_;
    auVar4._8_2_ = auVar25._4_2_;
    auVar4._0_8_ = auVar25._0_8_;
    auVar4._10_4_ = auVar2._10_4_;
    auVar12._6_8_ = 0;
    auVar12._0_6_ = auVar4._8_6_;
    auVar6._4_2_ = auVar25._2_2_;
    auVar6._0_4_ = auVar25._0_4_;
    auVar6._6_8_ = SUB148(auVar12 << 0x40,6);
    lVar1 = lVar14 * 2;
    *(float *)((long)local_78 + lVar1 + 0x10) =
         ((float)auVar25._8_2_ - (float)auVar30._8_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x14) =
         ((float)auVar25._10_2_ - (float)auVar30._10_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x18) =
         ((float)auVar25._12_2_ - (float)auVar30._12_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x1c) =
         ((float)auVar25._14_2_ - (float)auVar30._14_2_) * fVar26;
    lVar1 = lVar14 * 2;
    *(float *)((long)local_78 + lVar1) =
         ((float)(auVar25._0_4_ & 0xffff) - (float)auVar30._0_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 4) = ((float)auVar6._4_4_ - fVar34) * fVar26;
    *(float *)((long)local_78 + lVar1 + 8) = ((float)auVar4._8_4_ - (float)auVar5._8_4_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0xc) = ((float)(auVar2._10_4_ >> 0x10) - fVar35) * fVar26;
    lVar14 = lVar14 + 0x10;
    pfVar15 = pfVar15 + 1;
  } while (lVar14 != 0x30);
  pfVar16 = param_1 + 3;
  fVar28 = local_78[0] * local_78[0] + local_78[8] * local_78[8] + local_78[0x10] * local_78[0x10];
  fVar31 = local_78[1] * local_78[1] + local_78[9] * local_78[9] + local_78[0x11] * local_78[0x11];
  fVar32 = local_78[2] * local_78[2] + local_78[10] * local_78[10] + local_78[0x12] * local_78[0x12]
  ;
  fVar33 = local_78[3] * local_78[3] + local_78[0xb] * local_78[0xb] +
           local_78[0x13] * local_78[0x13];
  fVar26 = local_78[4] * local_78[4] + local_78[0xc] * local_78[0xc] +
           local_78[0x14] * local_78[0x14];
  fVar34 = local_78[5] * local_78[5] + local_78[0xd] * local_78[0xd] +
           local_78[0x15] * local_78[0x15];
  fVar35 = local_78[6] * local_78[6] + local_78[0xe] * local_78[0xe] +
           local_78[0x16] * local_78[0x16];
  fVar27 = local_78[7] * local_78[7] + local_78[0xf] * local_78[0xf] +
           local_78[0x17] * local_78[0x17];
  uVar17 = -(uint)(fVar28 == 0.0);
  uVar19 = -(uint)(fVar31 == 0.0);
  uVar21 = -(uint)(fVar32 == 0.0);
  uVar23 = -(uint)(fVar33 == 0.0);
  uVar18 = -(uint)(fVar26 == 0.0);
  uVar20 = -(uint)(fVar34 == 0.0);
  uVar22 = -(uint)(fVar35 == 0.0);
  uVar24 = -(uint)(fVar27 == 0.0);
  auVar38._0_4_ = ~uVar17 & (uint)fVar28;
  auVar38._4_4_ = ~uVar19 & (uint)fVar31;
  auVar38._8_4_ = ~uVar21 & (uint)fVar32;
  auVar38._12_4_ = ~uVar23 & (uint)fVar33;
  auVar29._0_8_ = CONCAT44(fVar39,fVar39);
  auVar29._8_4_ = fVar39;
  auVar29._12_4_ = fVar39;
  auVar36._0_4_ = _LC29 & uVar18;
  auVar36._4_4_ = _LC29 & uVar20;
  auVar36._8_4_ = _LC29 & uVar22;
  auVar36._12_4_ = _LC29 & uVar24;
  auVar25._0_4_ = ~uVar18 & (uint)fVar26;
  auVar25._4_4_ = ~uVar20 & (uint)fVar34;
  auVar25._8_4_ = ~uVar22 & (uint)fVar35;
  auVar25._12_4_ = ~uVar24 & (uint)fVar27;
  auVar30._4_4_ = uVar19 & _LC29;
  auVar30._0_4_ = uVar17 & _LC29;
  auVar30._8_4_ = uVar21 & _LC29;
  auVar30._12_4_ = uVar23 & _LC29;
  auVar37._8_4_ = fVar39;
  auVar37._0_8_ = auVar29._0_8_;
  auVar37._12_4_ = fVar39;
  auVar38 = divps(auVar37,auVar38 | auVar30);
  auVar30 = divps(auVar29,auVar25 | auVar36);
  pIVar13 = this + 0xd0;
  pfVar15 = local_78;
  do {
    fVar39 = *param_1;
    fVar26 = pfVar15[5];
    fVar34 = pfVar15[6];
    fVar35 = pfVar15[7];
    param_1 = param_1 + 1;
    fVar27 = *pfVar15;
    fVar28 = pfVar15[1];
    fVar31 = pfVar15[2];
    fVar32 = pfVar15[3];
    *(float *)pIVar13 = pfVar15[4] * fVar39 * auVar30._0_4_;
    *(float *)(pIVar13 + 4) = fVar26 * fVar39 * auVar30._4_4_;
    *(float *)(pIVar13 + 8) = fVar34 * fVar39 * auVar30._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar35 * fVar39 * auVar30._12_4_;
    *(float *)(pIVar13 + -0x10) = fVar39 * fVar27 * auVar38._0_4_;
    *(float *)(pIVar13 + -0xc) = fVar39 * fVar28 * auVar38._4_4_;
    *(float *)(pIVar13 + -8) = fVar39 * fVar31 * auVar38._8_4_;
    *(float *)(pIVar13 + -4) = fVar39 * fVar32 * auVar38._12_4_;
    pIVar13 = pIVar13 + 0x20;
    pfVar15 = pfVar15 + 8;
  } while (pfVar16 != param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::EndpointSelector<3, 8>::FinishDirection() */

void __thiscall cvtt::Internal::EndpointSelector<3,8>::FinishDirection(EndpointSelector<3,8> *this)

{
  int iVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  EndpointSelector<3,8> *pEVar21;
  int iVar22;
  long in_FS_OFFSET;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_f8 [24];
  undefined1 local_98 [8];
  float afStack_90 [2];
  undefined1 local_88 [8];
  float afStack_80 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  long local_30;
  long lVar14;
  long lVar15;
  long lVar16;
  
  iVar22 = 8;
  pauVar17 = (undefined1 (*) [16])local_f8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8[0] = _LC29;
  local_f8[1] = _LC29;
  local_f8[2] = _LC29;
  local_f8[3] = _LC29;
  local_f8[4] = _LC29;
  local_f8[5] = _LC29;
  local_f8[6] = _LC29;
  local_f8[7] = _LC29;
  local_f8[8] = _LC29;
  local_f8[9] = _LC29;
  local_f8[10] = _LC29;
  local_f8[0xb] = _LC29;
  local_f8[0xc] = _LC29;
  local_f8[0xd] = _LC29;
  local_f8[0xe] = _LC29;
  local_f8[0xf] = _LC29;
  local_f8[0x10] = _LC29;
  local_f8[0x11] = _LC29;
  local_f8[0x12] = _LC29;
  local_f8[0x13] = _LC29;
  local_f8[0x14] = _LC29;
  local_f8[0x15] = _LC29;
  local_f8[0x16] = _LC29;
  local_f8[0x17] = _LC29;
  do {
    lVar19 = 0;
    pauVar10 = (undefined1 (*) [16])local_98;
    do {
      iVar5 = (int)lVar19;
      fVar33 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      iVar9 = (iVar5 + 1) * iVar5 >> 1;
      pfVar18 = local_f8;
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 1;
        fVar40 = fVar40 + *pfVar18 * *(float *)(this + (long)iVar9 * 0x20 + 0xc0);
        fVar44 = fVar44 + pfVar18[1] * *(float *)(this + (long)iVar9 * 0x20 + 0xc4);
        fVar45 = fVar45 + pfVar18[2] * *(float *)(this + (long)iVar9 * 0x20 + 200);
        fVar46 = fVar46 + pfVar18[3] * *(float *)(this + (long)iVar9 * 0x20 + 0xcc);
        pfVar2 = pfVar18 + 4;
        pfVar6 = pfVar18 + 5;
        pfVar7 = pfVar18 + 6;
        pfVar8 = pfVar18 + 7;
        lVar13 = (long)iVar9;
        lVar14 = (long)iVar9;
        lVar15 = (long)iVar9;
        lVar16 = (long)iVar9;
        iVar1 = iVar9 + 1;
        iVar9 = iVar9 + iVar12;
        if (iVar11 < iVar5) {
          iVar9 = iVar1;
        }
        pfVar18 = pfVar18 + 8;
        fVar33 = fVar33 + *pfVar2 * *(float *)(this + lVar13 * 0x20 + 0xd0);
        fVar37 = fVar37 + *pfVar6 * *(float *)(this + lVar14 * 0x20 + 0xd4);
        fVar38 = fVar38 + *pfVar7 * *(float *)(this + lVar15 * 0x20 + 0xd8);
        fVar39 = fVar39 + *pfVar8 * *(float *)(this + lVar16 * 0x20 + 0xdc);
        iVar11 = iVar12;
      } while (iVar12 != 3);
      lVar19 = lVar19 + 1;
      *(float *)*pauVar10 = fVar40;
      *(float *)(*pauVar10 + 4) = fVar44;
      *(float *)(*pauVar10 + 8) = fVar45;
      *(float *)(*pauVar10 + 0xc) = fVar46;
      *(float *)pauVar10[1] = fVar33;
      *(float *)(pauVar10[1] + 4) = fVar37;
      *(float *)(pauVar10[1] + 8) = fVar38;
      *(float *)(pauVar10[1] + 0xc) = fVar39;
      pauVar10 = pauVar10 + 2;
    } while (lVar19 != 3);
    auVar34 = maxps(_local_98,local_78);
    auVar31 = maxps(_local_88,local_68);
    auVar34 = maxps(auVar34,local_58);
    auVar31 = maxps(auVar31,local_48);
    uVar23 = -(uint)(auVar34._0_4_ == 0.0);
    uVar25 = -(uint)(auVar34._4_4_ == 0.0);
    uVar27 = -(uint)(auVar34._8_4_ == 0.0);
    uVar29 = -(uint)(auVar34._12_4_ == 0.0);
    uVar24 = -(uint)(auVar31._0_4_ == 0.0);
    uVar26 = -(uint)(auVar31._4_4_ == 0.0);
    uVar28 = -(uint)(auVar31._8_4_ == 0.0);
    uVar30 = -(uint)(auVar31._12_4_ == 0.0);
    auVar47._0_4_ = ~uVar23 & (uint)auVar34._0_4_;
    auVar47._4_4_ = ~uVar25 & (uint)auVar34._4_4_;
    auVar47._8_4_ = ~uVar27 & (uint)auVar34._8_4_;
    auVar47._12_4_ = ~uVar29 & (uint)auVar34._12_4_;
    auVar34._0_4_ = uVar24 & (uint)_LC29;
    auVar34._4_4_ = uVar26 & (uint)_LC29;
    auVar34._8_4_ = uVar28 & (uint)_LC29;
    auVar34._12_4_ = uVar30 & (uint)_LC29;
    auVar41._0_4_ = ~uVar24 & (uint)auVar31._0_4_;
    auVar41._4_4_ = ~uVar26 & (uint)auVar31._4_4_;
    auVar41._8_4_ = ~uVar28 & (uint)auVar31._8_4_;
    auVar41._12_4_ = ~uVar30 & (uint)auVar31._12_4_;
    auVar31._4_4_ = uVar25 & (uint)_LC29;
    auVar31._0_4_ = uVar23 & (uint)_LC29;
    auVar31._8_4_ = uVar27 & (uint)_LC29;
    auVar31._12_4_ = uVar29 & (uint)_LC29;
    pauVar10 = (undefined1 (*) [16])local_f8;
    pauVar20 = (undefined1 (*) [16])local_98;
    do {
      pauVar3 = pauVar20 + 1;
      auVar35 = *pauVar20;
      pauVar20 = pauVar20 + 2;
      auVar32 = divps(*pauVar3,auVar41 | auVar34);
      auVar35 = divps(auVar35,auVar47 | auVar31);
      pauVar10[1] = auVar32;
      *pauVar10 = auVar35;
      pauVar10 = pauVar10 + 2;
    } while ((undefined1 (*) [16])local_38 != pauVar20);
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  pauVar10 = (undefined1 (*) [16])local_f8;
  auVar31 = (undefined1  [16])0x0;
  do {
    pauVar20 = pauVar10 + 2;
    auVar42._0_4_ = auVar35._0_4_ + *(float *)*pauVar10 * *(float *)*pauVar10;
    auVar42._4_4_ = auVar35._4_4_ + *(float *)(*pauVar10 + 4) * *(float *)(*pauVar10 + 4);
    auVar42._8_4_ = auVar35._8_4_ + *(float *)(*pauVar10 + 8) * *(float *)(*pauVar10 + 8);
    auVar42._12_4_ = auVar35._12_4_ + *(float *)(*pauVar10 + 0xc) * *(float *)(*pauVar10 + 0xc);
    auVar32._0_4_ = *(float *)pauVar10[1] * *(float *)pauVar10[1];
    auVar32._4_4_ = *(float *)(pauVar10[1] + 4) * *(float *)(pauVar10[1] + 4);
    auVar32._8_4_ = *(float *)(pauVar10[1] + 8) * *(float *)(pauVar10[1] + 8);
    auVar32._12_4_ = *(float *)(pauVar10[1] + 0xc) * *(float *)(pauVar10[1] + 0xc);
    auVar36._0_4_ = auVar31._0_4_ + auVar32._0_4_;
    auVar36._4_4_ = auVar31._4_4_ + auVar32._4_4_;
    auVar36._8_4_ = auVar31._8_4_ + auVar32._8_4_;
    auVar36._12_4_ = auVar31._12_4_ + auVar32._12_4_;
    pauVar10 = pauVar20;
    auVar31 = auVar36;
    auVar35 = auVar42;
  } while ((undefined1 (*) [16])local_98 != pauVar20);
  auVar31 = sqrtps(auVar32,auVar42);
  auVar34 = sqrtps(auVar36,auVar36);
  uVar23 = -(uint)(auVar31._0_4_ == 0.0);
  uVar25 = -(uint)(auVar31._4_4_ == 0.0);
  uVar27 = -(uint)(auVar31._8_4_ == 0.0);
  uVar29 = -(uint)(auVar31._12_4_ == 0.0);
  uVar24 = -(uint)(auVar34._0_4_ == 0.0);
  uVar26 = -(uint)(auVar34._4_4_ == 0.0);
  uVar28 = -(uint)(auVar34._8_4_ == 0.0);
  uVar30 = -(uint)(auVar34._12_4_ == 0.0);
  auVar48._0_4_ = ~uVar23 & (uint)auVar31._0_4_;
  auVar48._4_4_ = ~uVar25 & (uint)auVar31._4_4_;
  auVar48._8_4_ = ~uVar27 & (uint)auVar31._8_4_;
  auVar48._12_4_ = ~uVar29 & (uint)auVar31._12_4_;
  auVar49._0_4_ = uVar23 & (uint)_LC29;
  auVar49._4_4_ = uVar25 & (uint)_LC29;
  auVar49._8_4_ = uVar27 & (uint)_LC29;
  auVar49._12_4_ = uVar29 & (uint)_LC29;
  auVar43._0_4_ = ~uVar24 & (uint)auVar34._0_4_;
  auVar43._4_4_ = ~uVar26 & (uint)auVar34._4_4_;
  auVar43._8_4_ = ~uVar28 & (uint)auVar34._8_4_;
  auVar43._12_4_ = ~uVar30 & (uint)auVar34._12_4_;
  auVar4._4_4_ = (uint)_LC29 & uVar26;
  auVar4._0_4_ = (uint)_LC29 & uVar24;
  auVar4._8_4_ = (uint)_LC29 & uVar28;
  auVar4._12_4_ = (uint)_LC29 & uVar30;
  pEVar21 = this + 0x70;
  do {
    pauVar10 = pauVar17 + 1;
    auVar31 = *pauVar17;
    pauVar17 = pauVar17 + 2;
    auVar34 = divps(*pauVar10,auVar43 | auVar4);
    auVar31 = divps(auVar31,auVar48 | auVar49);
    *(undefined1 (*) [16])pEVar21 = auVar34;
    *(undefined1 (*) [16])(pEVar21 + -0x10) = auVar31;
    pEVar21 = pEVar21 + 0x20;
  } while ((undefined1 (*) [16])local_98 != pauVar17);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* cvtt::Internal::EndpointSelector<4, 8>::FinishDirection() */

void __thiscall cvtt::Internal::EndpointSelector<4,8>::FinishDirection(EndpointSelector<4,8> *this)

{
  int iVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  int iVar12;
  long lVar13;
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  long lVar19;
  undefined1 (*pauVar20) [16];
  EndpointSelector<4,8> *pEVar21;
  int iVar22;
  long in_FS_OFFSET;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_138 [32];
  undefined1 local_b8 [8];
  float afStack_b0 [2];
  undefined1 local_a8 [8];
  float afStack_a0 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  long local_30;
  long lVar14;
  long lVar15;
  long lVar16;
  
  iVar22 = 8;
  pauVar17 = (undefined1 (*) [16])local_138;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_138[0] = _LC29;
  local_138[1] = _LC29;
  local_138[2] = _LC29;
  local_138[3] = _LC29;
  local_138[4] = _LC29;
  local_138[5] = _LC29;
  local_138[6] = _LC29;
  local_138[7] = _LC29;
  local_138[8] = _LC29;
  local_138[9] = _LC29;
  local_138[10] = _LC29;
  local_138[0xb] = _LC29;
  local_138[0xc] = _LC29;
  local_138[0xd] = _LC29;
  local_138[0xe] = _LC29;
  local_138[0xf] = _LC29;
  local_138[0x10] = _LC29;
  local_138[0x11] = _LC29;
  local_138[0x12] = _LC29;
  local_138[0x13] = _LC29;
  local_138[0x14] = _LC29;
  local_138[0x15] = _LC29;
  local_138[0x16] = _LC29;
  local_138[0x17] = _LC29;
  local_138[0x18] = _LC29;
  local_138[0x19] = _LC29;
  local_138[0x1a] = _LC29;
  local_138[0x1b] = _LC29;
  local_138[0x1c] = _LC29;
  local_138[0x1d] = _LC29;
  local_138[0x1e] = _LC29;
  local_138[0x1f] = _LC29;
  do {
    lVar19 = 0;
    pauVar10 = (undefined1 (*) [16])local_b8;
    do {
      iVar5 = (int)lVar19;
      fVar33 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      fVar44 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      iVar9 = (iVar5 + 1) * iVar5 >> 1;
      pfVar18 = local_138;
      iVar11 = 0;
      do {
        iVar12 = iVar11 + 1;
        fVar40 = fVar40 + *pfVar18 * *(float *)(this + (long)iVar9 * 0x20 + 0x100);
        fVar44 = fVar44 + pfVar18[1] * *(float *)(this + (long)iVar9 * 0x20 + 0x104);
        fVar45 = fVar45 + pfVar18[2] * *(float *)(this + (long)iVar9 * 0x20 + 0x108);
        fVar46 = fVar46 + pfVar18[3] * *(float *)(this + (long)iVar9 * 0x20 + 0x10c);
        pfVar2 = pfVar18 + 4;
        pfVar6 = pfVar18 + 5;
        pfVar7 = pfVar18 + 6;
        pfVar8 = pfVar18 + 7;
        lVar13 = (long)iVar9;
        lVar14 = (long)iVar9;
        lVar15 = (long)iVar9;
        lVar16 = (long)iVar9;
        iVar1 = iVar9 + 1;
        iVar9 = iVar9 + iVar12;
        if (iVar11 < iVar5) {
          iVar9 = iVar1;
        }
        pfVar18 = pfVar18 + 8;
        fVar33 = fVar33 + *pfVar2 * *(float *)(this + lVar13 * 0x20 + 0x110);
        fVar37 = fVar37 + *pfVar6 * *(float *)(this + lVar14 * 0x20 + 0x114);
        fVar38 = fVar38 + *pfVar7 * *(float *)(this + lVar15 * 0x20 + 0x118);
        fVar39 = fVar39 + *pfVar8 * *(float *)(this + lVar16 * 0x20 + 0x11c);
        iVar11 = iVar12;
      } while (iVar12 != 4);
      lVar19 = lVar19 + 1;
      *(float *)*pauVar10 = fVar40;
      *(float *)(*pauVar10 + 4) = fVar44;
      *(float *)(*pauVar10 + 8) = fVar45;
      *(float *)(*pauVar10 + 0xc) = fVar46;
      *(float *)pauVar10[1] = fVar33;
      *(float *)(pauVar10[1] + 4) = fVar37;
      *(float *)(pauVar10[1] + 8) = fVar38;
      *(float *)(pauVar10[1] + 0xc) = fVar39;
      pauVar10 = pauVar10 + 2;
    } while (lVar19 != 4);
    auVar34 = maxps(_local_b8,local_98);
    auVar31 = maxps(_local_a8,local_88);
    auVar34 = maxps(auVar34,local_78);
    auVar31 = maxps(auVar31,local_68);
    auVar34 = maxps(auVar34,local_58);
    auVar31 = maxps(auVar31,local_48);
    uVar23 = -(uint)(auVar34._0_4_ == 0.0);
    uVar25 = -(uint)(auVar34._4_4_ == 0.0);
    uVar27 = -(uint)(auVar34._8_4_ == 0.0);
    uVar29 = -(uint)(auVar34._12_4_ == 0.0);
    uVar24 = -(uint)(auVar31._0_4_ == 0.0);
    uVar26 = -(uint)(auVar31._4_4_ == 0.0);
    uVar28 = -(uint)(auVar31._8_4_ == 0.0);
    uVar30 = -(uint)(auVar31._12_4_ == 0.0);
    auVar47._0_4_ = ~uVar23 & (uint)auVar34._0_4_;
    auVar47._4_4_ = ~uVar25 & (uint)auVar34._4_4_;
    auVar47._8_4_ = ~uVar27 & (uint)auVar34._8_4_;
    auVar47._12_4_ = ~uVar29 & (uint)auVar34._12_4_;
    auVar34._0_4_ = uVar24 & (uint)_LC29;
    auVar34._4_4_ = uVar26 & (uint)_LC29;
    auVar34._8_4_ = uVar28 & (uint)_LC29;
    auVar34._12_4_ = uVar30 & (uint)_LC29;
    auVar41._0_4_ = ~uVar24 & (uint)auVar31._0_4_;
    auVar41._4_4_ = ~uVar26 & (uint)auVar31._4_4_;
    auVar41._8_4_ = ~uVar28 & (uint)auVar31._8_4_;
    auVar41._12_4_ = ~uVar30 & (uint)auVar31._12_4_;
    auVar31._4_4_ = uVar25 & (uint)_LC29;
    auVar31._0_4_ = uVar23 & (uint)_LC29;
    auVar31._8_4_ = uVar27 & (uint)_LC29;
    auVar31._12_4_ = uVar29 & (uint)_LC29;
    pauVar10 = (undefined1 (*) [16])local_138;
    pauVar20 = (undefined1 (*) [16])local_b8;
    do {
      pauVar3 = pauVar20 + 1;
      auVar35 = *pauVar20;
      pauVar20 = pauVar20 + 2;
      auVar32 = divps(*pauVar3,auVar41 | auVar34);
      auVar35 = divps(auVar35,auVar47 | auVar31);
      pauVar10[1] = auVar32;
      *pauVar10 = auVar35;
      pauVar10 = pauVar10 + 2;
    } while ((undefined1 (*) [16])local_38 != pauVar20);
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  pauVar10 = (undefined1 (*) [16])local_138;
  auVar31 = (undefined1  [16])0x0;
  do {
    pauVar20 = pauVar10 + 2;
    auVar42._0_4_ = auVar35._0_4_ + *(float *)*pauVar10 * *(float *)*pauVar10;
    auVar42._4_4_ = auVar35._4_4_ + *(float *)(*pauVar10 + 4) * *(float *)(*pauVar10 + 4);
    auVar42._8_4_ = auVar35._8_4_ + *(float *)(*pauVar10 + 8) * *(float *)(*pauVar10 + 8);
    auVar42._12_4_ = auVar35._12_4_ + *(float *)(*pauVar10 + 0xc) * *(float *)(*pauVar10 + 0xc);
    auVar32._0_4_ = *(float *)pauVar10[1] * *(float *)pauVar10[1];
    auVar32._4_4_ = *(float *)(pauVar10[1] + 4) * *(float *)(pauVar10[1] + 4);
    auVar32._8_4_ = *(float *)(pauVar10[1] + 8) * *(float *)(pauVar10[1] + 8);
    auVar32._12_4_ = *(float *)(pauVar10[1] + 0xc) * *(float *)(pauVar10[1] + 0xc);
    auVar36._0_4_ = auVar31._0_4_ + auVar32._0_4_;
    auVar36._4_4_ = auVar31._4_4_ + auVar32._4_4_;
    auVar36._8_4_ = auVar31._8_4_ + auVar32._8_4_;
    auVar36._12_4_ = auVar31._12_4_ + auVar32._12_4_;
    pauVar10 = pauVar20;
    auVar31 = auVar36;
    auVar35 = auVar42;
  } while (pauVar20 != (undefined1 (*) [16])local_b8);
  auVar31 = sqrtps(auVar32,auVar42);
  auVar34 = sqrtps(auVar36,auVar36);
  uVar23 = -(uint)(auVar31._0_4_ == 0.0);
  uVar25 = -(uint)(auVar31._4_4_ == 0.0);
  uVar27 = -(uint)(auVar31._8_4_ == 0.0);
  uVar29 = -(uint)(auVar31._12_4_ == 0.0);
  uVar24 = -(uint)(auVar34._0_4_ == 0.0);
  uVar26 = -(uint)(auVar34._4_4_ == 0.0);
  uVar28 = -(uint)(auVar34._8_4_ == 0.0);
  uVar30 = -(uint)(auVar34._12_4_ == 0.0);
  auVar48._0_4_ = ~uVar23 & (uint)auVar31._0_4_;
  auVar48._4_4_ = ~uVar25 & (uint)auVar31._4_4_;
  auVar48._8_4_ = ~uVar27 & (uint)auVar31._8_4_;
  auVar48._12_4_ = ~uVar29 & (uint)auVar31._12_4_;
  auVar49._0_4_ = uVar23 & (uint)_LC29;
  auVar49._4_4_ = uVar25 & (uint)_LC29;
  auVar49._8_4_ = uVar27 & (uint)_LC29;
  auVar49._12_4_ = uVar29 & (uint)_LC29;
  auVar43._0_4_ = ~uVar24 & (uint)auVar34._0_4_;
  auVar43._4_4_ = ~uVar26 & (uint)auVar34._4_4_;
  auVar43._8_4_ = ~uVar28 & (uint)auVar34._8_4_;
  auVar43._12_4_ = ~uVar30 & (uint)auVar34._12_4_;
  auVar4._4_4_ = (uint)_LC29 & uVar26;
  auVar4._0_4_ = (uint)_LC29 & uVar24;
  auVar4._8_4_ = (uint)_LC29 & uVar28;
  auVar4._12_4_ = (uint)_LC29 & uVar30;
  pEVar21 = this + 0x90;
  do {
    pauVar10 = pauVar17 + 1;
    auVar31 = *pauVar17;
    pauVar17 = pauVar17 + 2;
    auVar34 = divps(*pauVar10,auVar43 | auVar4);
    auVar31 = divps(auVar31,auVar48 | auVar49);
    *(undefined1 (*) [16])pEVar21 = auVar34;
    *(undefined1 (*) [16])(pEVar21 + -0x10) = auVar31;
    pEVar21 = pEVar21 + 0x20;
  } while (pauVar17 != (undefined1 (*) [16])local_b8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void cvtt::Internal::IndexSelector<4>::Init<cvtt::ParallelMath::VInt16<2>,
   cvtt::ParallelMath::VInt16<2> >(float const*, cvtt::ParallelMath::VInt16<2> const (*) [4],
   cvtt::ParallelMath::VInt16<2> const (*) [4], int) */

void __thiscall
cvtt::Internal::IndexSelector<4>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
          (IndexSelector<4> *this,float *param_1,VInt16<2> *param_2,VInt16<2> *param_3,int param_4)

{
  long lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  IndexSelector<4> *pIVar13;
  float *pfVar14;
  undefined1 *puVar15;
  long lVar16;
  float *pfVar17;
  long in_FS_OFFSET;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float local_98 [24];
  undefined1 local_38 [32];
  float afStack_18 [2];
  long local_10;
  
  fVar32 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar19 = param_1[1];
  this[0x188] = (IndexSelector<4>)0x1;
  if (fVar32 != fVar19) {
    this[0x188] = (IndexSelector<4>)0x0;
  }
  if (fVar32 != param_1[2]) {
    this[0x188] = (IndexSelector<4>)0x0;
  }
  if (fVar32 != param_1[3]) {
    this[0x188] = (IndexSelector<4>)0x0;
  }
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(this + 0x30) = uVar7;
  *(undefined8 *)(this + 0x38) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(this + 0x60) = uVar8;
  *(undefined8 *)(this + 0x68) = uVar9;
  *(undefined8 *)(this + 0x50) = uVar7;
  *(undefined8 *)(this + 0x58) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  lVar16 = 0;
  *(int *)(this + 0x180) = param_4;
  fVar32 = (float)(param_4 + -1);
  *(undefined8 *)(this + 0x70) = uVar7;
  *(undefined8 *)(this + 0x78) = uVar8;
  *(float *)(this + 0x184) = fVar32;
  pfVar14 = param_1;
  do {
    auVar23 = *(undefined1 (*) [16])(param_3 + lVar16);
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar23._0_10_;
    auVar3._12_2_ = auVar23._6_2_;
    auVar5._8_2_ = auVar23._4_2_;
    auVar5._0_8_ = auVar23._0_8_;
    auVar5._10_4_ = auVar3._10_4_;
    auVar11._6_8_ = 0;
    auVar11._0_6_ = auVar5._8_6_;
    pIVar13 = this + lVar16 * 2 + 0x90;
    *(float *)pIVar13 = (float)auVar23._8_2_;
    *(float *)(pIVar13 + 4) = (float)auVar23._10_2_;
    *(float *)(pIVar13 + 8) = (float)auVar23._12_2_;
    *(float *)(pIVar13 + 0xc) = (float)auVar23._14_2_;
    fVar27 = (float)(int)CONCAT82(SUB148(auVar11 << 0x40,6),auVar23._2_2_);
    fVar28 = (float)(auVar3._10_4_ >> 0x10);
    pIVar13 = this + lVar16 * 2 + 0x80;
    *(float *)pIVar13 = (float)auVar23._0_2_;
    *(float *)(pIVar13 + 4) = fVar27;
    *(float *)(pIVar13 + 8) = (float)auVar5._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar28;
    auVar18 = *(undefined1 (*) [16])(param_3 + lVar16 + 0x40);
    fVar19 = *pfVar14;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar18._0_10_;
    auVar2._12_2_ = auVar18._6_2_;
    auVar4._8_2_ = auVar18._4_2_;
    auVar4._0_8_ = auVar18._0_8_;
    auVar4._10_4_ = auVar2._10_4_;
    auVar12._6_8_ = 0;
    auVar12._0_6_ = auVar4._8_6_;
    auVar6._4_2_ = auVar18._2_2_;
    auVar6._0_4_ = auVar18._0_4_;
    auVar6._6_8_ = SUB148(auVar12 << 0x40,6);
    lVar1 = lVar16 * 2;
    *(float *)((long)local_98 + lVar1 + 0x10) =
         ((float)auVar18._8_2_ - (float)auVar23._8_2_) * fVar19;
    *(float *)((long)local_98 + lVar1 + 0x14) =
         ((float)auVar18._10_2_ - (float)auVar23._10_2_) * fVar19;
    *(float *)((long)local_98 + lVar1 + 0x18) =
         ((float)auVar18._12_2_ - (float)auVar23._12_2_) * fVar19;
    *(float *)((long)local_98 + lVar1 + 0x1c) =
         ((float)auVar18._14_2_ - (float)auVar23._14_2_) * fVar19;
    lVar1 = lVar16 * 2;
    *(float *)((long)local_98 + lVar1) =
         ((float)(auVar18._0_4_ & 0xffff) - (float)auVar23._0_2_) * fVar19;
    *(float *)((long)local_98 + lVar1 + 4) = ((float)auVar6._4_4_ - fVar27) * fVar19;
    *(float *)((long)local_98 + lVar1 + 8) = ((float)auVar4._8_4_ - (float)auVar5._8_4_) * fVar19;
    *(float *)((long)local_98 + lVar1 + 0xc) = ((float)(auVar2._10_4_ >> 0x10) - fVar28) * fVar19;
    lVar16 = lVar16 + 0x10;
    pfVar14 = pfVar14 + 1;
  } while (lVar16 != 0x40);
  fVar21 = local_98[0] * local_98[0];
  fVar24 = local_98[1] * local_98[1];
  fVar25 = local_98[2] * local_98[2];
  fVar26 = local_98[3] * local_98[3];
  fVar19 = local_98[4] * local_98[4];
  fVar27 = local_98[5] * local_98[5];
  fVar28 = local_98[6] * local_98[6];
  fVar20 = local_98[7] * local_98[7];
  pfVar14 = local_98;
  do {
    puVar15 = (undefined1 *)((long)pfVar14 + 0x20);
    fVar21 = fVar21 + *(float *)((long)pfVar14 + 0x20) * *(float *)((long)pfVar14 + 0x20);
    fVar24 = fVar24 + *(float *)((long)pfVar14 + 0x24) * *(float *)((long)pfVar14 + 0x24);
    fVar25 = fVar25 + *(float *)((long)pfVar14 + 0x28) * *(float *)((long)pfVar14 + 0x28);
    fVar26 = fVar26 + *(float *)((long)pfVar14 + 0x2c) * *(float *)((long)pfVar14 + 0x2c);
    fVar19 = fVar19 + *(float *)((long)pfVar14 + 0x30) * *(float *)((long)pfVar14 + 0x30);
    fVar27 = fVar27 + *(float *)((long)pfVar14 + 0x34) * *(float *)((long)pfVar14 + 0x34);
    fVar28 = fVar28 + *(float *)((long)pfVar14 + 0x38) * *(float *)((long)pfVar14 + 0x38);
    fVar20 = fVar20 + *(float *)((long)pfVar14 + 0x3c) * *(float *)((long)pfVar14 + 0x3c);
    pfVar14 = (float *)puVar15;
  } while (local_38 != puVar15);
  auVar31._0_4_ = ~-(uint)(fVar21 == 0.0) & (uint)fVar21;
  auVar31._4_4_ = ~-(uint)(fVar24 == 0.0) & (uint)fVar24;
  auVar31._8_4_ = ~-(uint)(fVar25 == 0.0) & (uint)fVar25;
  auVar31._12_4_ = ~-(uint)(fVar26 == 0.0) & (uint)fVar26;
  auVar29._0_4_ = _LC29 & -(uint)(fVar19 == 0.0);
  auVar29._4_4_ = _LC29 & -(uint)(fVar27 == 0.0);
  auVar29._8_4_ = _LC29 & -(uint)(fVar28 == 0.0);
  auVar29._12_4_ = _LC29 & -(uint)(fVar20 == 0.0);
  auVar18._0_4_ = ~-(uint)(fVar19 == 0.0) & (uint)fVar19;
  auVar18._4_4_ = ~-(uint)(fVar27 == 0.0) & (uint)fVar27;
  auVar18._8_4_ = ~-(uint)(fVar28 == 0.0) & (uint)fVar28;
  auVar18._12_4_ = ~-(uint)(fVar20 == 0.0) & (uint)fVar20;
  auVar22._0_8_ = CONCAT44(fVar32,fVar32);
  auVar22._8_4_ = fVar32;
  auVar22._12_4_ = fVar32;
  auVar23._4_4_ = -(uint)(fVar24 == 0.0) & _LC29;
  auVar23._0_4_ = -(uint)(fVar21 == 0.0) & _LC29;
  auVar23._8_4_ = -(uint)(fVar25 == 0.0) & _LC29;
  auVar23._12_4_ = -(uint)(fVar26 == 0.0) & _LC29;
  auVar30._8_4_ = fVar32;
  auVar30._0_8_ = auVar22._0_8_;
  auVar30._12_4_ = fVar32;
  auVar31 = divps(auVar30,auVar31 | auVar23);
  auVar23 = divps(auVar22,auVar18 | auVar29);
  pIVar13 = this + 0x110;
  pfVar14 = local_98;
  do {
    fVar32 = *param_1;
    fVar19 = pfVar14[5];
    fVar27 = pfVar14[6];
    fVar28 = pfVar14[7];
    pfVar17 = pfVar14 + 8;
    param_1 = param_1 + 1;
    fVar20 = *pfVar14;
    fVar21 = pfVar14[1];
    fVar24 = pfVar14[2];
    fVar25 = pfVar14[3];
    *(float *)pIVar13 = pfVar14[4] * fVar32 * auVar23._0_4_;
    *(float *)(pIVar13 + 4) = fVar19 * fVar32 * auVar23._4_4_;
    *(float *)(pIVar13 + 8) = fVar27 * fVar32 * auVar23._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar28 * fVar32 * auVar23._12_4_;
    *(float *)(pIVar13 + -0x10) = fVar32 * fVar20 * auVar31._0_4_;
    *(float *)(pIVar13 + -0xc) = fVar32 * fVar21 * auVar31._4_4_;
    *(float *)(pIVar13 + -8) = fVar32 * fVar24 * auVar31._8_4_;
    *(float *)(pIVar13 + -4) = fVar32 * fVar25 * auVar31._12_4_;
    pIVar13 = pIVar13 + 0x20;
    pfVar14 = pfVar17;
  } while (pfVar17 != afStack_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::EndpointRefiner<4>::GetRefinedEndpoints(cvtt::ParallelMath::Float (*) [4]) */

void __thiscall
cvtt::Internal::EndpointRefiner<4>::GetRefinedEndpoints(EndpointRefiner<4> *this,Float *param_1)

{
  Float *pFVar1;
  EndpointRefiner<4> *pEVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 in_XMM7 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  
  fVar22 = (float)*(int *)(this + 0x160);
  fVar41 = *(float *)(this + 0x120);
  fVar43 = *(float *)(this + 0x124);
  fVar45 = *(float *)(this + 0x128);
  fVar47 = *(float *)(this + 300);
  lVar3 = 0;
  uVar4 = -(uint)(*(float *)(this + 0x140) + fVar22 == 0.0);
  uVar6 = -(uint)(*(float *)(this + 0x144) + fVar22 == 0.0);
  uVar8 = -(uint)(*(float *)(this + 0x148) + fVar22 == 0.0);
  uVar10 = -(uint)(*(float *)(this + 0x14c) + fVar22 == 0.0);
  uVar5 = -(uint)(fVar22 + *(float *)(this + 0x150) == 0.0);
  uVar7 = -(uint)(fVar22 + *(float *)(this + 0x154) == 0.0);
  uVar9 = -(uint)(fVar22 + *(float *)(this + 0x158) == 0.0);
  uVar11 = -(uint)(fVar22 + *(float *)(this + 0x15c) == 0.0);
  auVar18._0_4_ = ~uVar4 & (uint)(*(float *)(this + 0x140) + fVar22);
  auVar18._4_4_ = ~uVar6 & (uint)(*(float *)(this + 0x144) + fVar22);
  auVar18._8_4_ = ~uVar8 & (uint)(*(float *)(this + 0x148) + fVar22);
  auVar18._12_4_ = ~uVar10 & (uint)(*(float *)(this + 0x14c) + fVar22);
  auVar28._0_4_ = uVar4 & _LC29;
  auVar28._4_4_ = uVar6 & _LC29;
  auVar28._8_4_ = uVar8 & _LC29;
  auVar28._12_4_ = uVar10 & _LC29;
  auVar13._0_4_ = ~uVar5 & (uint)(fVar22 + *(float *)(this + 0x150));
  auVar13._4_4_ = ~uVar7 & (uint)(fVar22 + *(float *)(this + 0x154));
  auVar13._8_4_ = ~uVar9 & (uint)(fVar22 + *(float *)(this + 0x158));
  auVar13._12_4_ = ~uVar11 & (uint)(fVar22 + *(float *)(this + 0x15c));
  fVar22 = *(float *)(this + 0x130);
  fVar23 = *(float *)(this + 0x134);
  fVar24 = *(float *)(this + 0x138);
  fVar25 = *(float *)(this + 0x13c);
  auVar18 = auVar18 | auVar28;
  auVar29._4_4_ = uVar7 & _LC29;
  auVar29._0_4_ = uVar5 & _LC29;
  auVar29._8_4_ = uVar9 & _LC29;
  auVar29._12_4_ = uVar11 & _LC29;
  auVar13 = auVar13 | auVar29;
  auVar34 = rcpps(in_XMM7,auVar18);
  auVar29 = rcpps(auVar28,auVar13);
  fVar33 = auVar34._0_4_;
  fVar17 = (auVar18._0_4_ * *(float *)(this + 0x100) - fVar41 * fVar41) * fVar33;
  fVar35 = auVar34._4_4_;
  fVar19 = (auVar18._4_4_ * *(float *)(this + 0x104) - fVar43 * fVar43) * fVar35;
  fVar36 = auVar34._8_4_;
  fVar20 = (auVar18._8_4_ * *(float *)(this + 0x108) - fVar45 * fVar45) * fVar36;
  fVar37 = auVar34._12_4_;
  fVar21 = (auVar18._12_4_ * *(float *)(this + 0x10c) - fVar47 * fVar47) * fVar37;
  fVar27 = auVar29._0_4_;
  fVar12 = (auVar13._0_4_ * *(float *)(this + 0x110) - fVar22 * fVar22) * fVar27;
  fVar30 = auVar29._4_4_;
  fVar14 = (auVar13._4_4_ * *(float *)(this + 0x114) - fVar23 * fVar23) * fVar30;
  fVar31 = auVar29._8_4_;
  fVar15 = (auVar13._8_4_ * *(float *)(this + 0x118) - fVar24 * fVar24) * fVar31;
  fVar32 = auVar29._12_4_;
  fVar16 = (auVar13._12_4_ * *(float *)(this + 0x11c) - fVar25 * fVar25) * fVar32;
  uVar4 = -(uint)(fVar17 == 0.0);
  uVar6 = -(uint)(fVar19 == 0.0);
  uVar8 = -(uint)(fVar20 == 0.0);
  uVar10 = -(uint)(fVar21 == 0.0);
  auVar38._0_4_ = uVar4 & _LC29;
  auVar38._4_4_ = uVar6 & _LC29;
  auVar38._8_4_ = uVar8 & _LC29;
  auVar38._12_4_ = uVar10 & _LC29;
  auVar40._0_4_ = ~uVar4 & (uint)fVar17;
  auVar40._4_4_ = ~uVar6 & (uint)fVar19;
  auVar40._8_4_ = ~uVar8 & (uint)fVar20;
  auVar40._12_4_ = ~uVar10 & (uint)fVar21;
  uVar5 = -(uint)(fVar12 == 0.0);
  uVar7 = -(uint)(fVar14 == 0.0);
  uVar9 = -(uint)(fVar15 == 0.0);
  uVar11 = -(uint)(fVar16 == 0.0);
  auVar34._0_4_ = _LC29 & uVar5;
  auVar34._4_4_ = _LC29 & uVar7;
  auVar34._8_4_ = _LC29 & uVar9;
  auVar34._12_4_ = _LC29 & uVar11;
  auVar39._0_4_ = ~uVar5 & (uint)fVar12;
  auVar39._4_4_ = ~uVar7 & (uint)fVar14;
  auVar39._8_4_ = ~uVar9 & (uint)fVar15;
  auVar39._12_4_ = ~uVar11 & (uint)fVar16;
  while( true ) {
    pEVar2 = this + lVar3 * 8 + 0x80;
    fVar12 = *(float *)pEVar2;
    fVar14 = *(float *)(pEVar2 + 4);
    fVar15 = *(float *)(pEVar2 + 8);
    fVar16 = *(float *)(pEVar2 + 0xc);
    pEVar2 = this + lVar3 * 8 + 0x90;
    fVar17 = *(float *)pEVar2;
    fVar19 = *(float *)(pEVar2 + 4);
    fVar20 = *(float *)(pEVar2 + 8);
    fVar21 = *(float *)(pEVar2 + 0xc);
    pEVar2 = this + lVar3 * 8;
    auVar49._0_4_ = *(float *)pEVar2 - fVar12 * fVar41 * fVar33;
    auVar49._4_4_ = *(float *)(pEVar2 + 4) - fVar14 * fVar43 * fVar35;
    auVar49._8_4_ = *(float *)(pEVar2 + 8) - fVar15 * fVar45 * fVar36;
    auVar49._12_4_ = *(float *)(pEVar2 + 0xc) - fVar16 * fVar47 * fVar37;
    pEVar2 = this + lVar3 * 8 + 0x10;
    auVar26._0_4_ = *(float *)pEVar2 - fVar17 * fVar22 * fVar27;
    auVar26._4_4_ = *(float *)(pEVar2 + 4) - fVar19 * fVar23 * fVar30;
    auVar26._8_4_ = *(float *)(pEVar2 + 8) - fVar20 * fVar24 * fVar31;
    auVar26._12_4_ = *(float *)(pEVar2 + 0xc) - fVar21 * fVar25 * fVar32;
    auVar13 = divps(auVar49,auVar40 | auVar38);
    auVar29 = divps(auVar26,auVar39 | auVar34);
    fVar42 = (fVar12 - fVar41 * auVar13._0_4_) * fVar33;
    fVar44 = (fVar14 - fVar43 * auVar13._4_4_) * fVar35;
    fVar46 = (fVar15 - fVar45 * auVar13._8_4_) * fVar36;
    fVar48 = (fVar16 - fVar47 * auVar13._12_4_) * fVar37;
    fVar50 = (float)(~uVar4 & (uint)fVar42 | (uint)(fVar12 * fVar33) & uVar4);
    fVar14 = (float)(~uVar6 & (uint)fVar44 | (uint)(fVar14 * fVar35) & uVar6);
    fVar15 = (float)(~uVar8 & (uint)fVar46 | (uint)(fVar15 * fVar36) & uVar8);
    fVar16 = (float)(~uVar10 & (uint)fVar48 | (uint)(fVar16 * fVar37) & uVar10);
    fVar12 = (fVar17 - fVar22 * auVar29._0_4_) * fVar27;
    fVar23 = (fVar19 - fVar23 * auVar29._4_4_) * fVar30;
    fVar24 = (fVar20 - fVar24 * auVar29._8_4_) * fVar31;
    fVar25 = (fVar21 - fVar25 * auVar29._12_4_) * fVar32;
    fVar43 = (float)(~uVar5 & (uint)fVar12 | (uint)(fVar17 * fVar27) & uVar5);
    fVar45 = (float)(~uVar7 & (uint)fVar23 | (uint)(fVar19 * fVar30) & uVar7);
    fVar47 = (float)(~uVar9 & (uint)fVar24 | (uint)(fVar20 * fVar31) & uVar9);
    fVar22 = (float)(~uVar11 & (uint)fVar25 | (uint)(fVar21 * fVar32) & uVar11);
    fVar41 = *(float *)(this + lVar3 + 0x178);
    pFVar1 = param_1 + lVar3 * 8;
    *(float *)pFVar1 = fVar50 * fVar41;
    *(float *)(pFVar1 + 4) = fVar14 * fVar41;
    *(float *)(pFVar1 + 8) = fVar15 * fVar41;
    *(float *)(pFVar1 + 0xc) = fVar16 * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x10;
    *(float *)pFVar1 = fVar43 * fVar41;
    *(float *)(pFVar1 + 4) = fVar45 * fVar41;
    *(float *)(pFVar1 + 8) = fVar47 * fVar41;
    *(float *)(pFVar1 + 0xc) = fVar22 * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x80;
    *(float *)pFVar1 =
         (float)(~uVar4 & (uint)(fVar42 + auVar13._0_4_) | uVar4 & (uint)fVar50) * fVar41;
    *(float *)(pFVar1 + 4) =
         (float)(~uVar6 & (uint)(fVar44 + auVar13._4_4_) | uVar6 & (uint)fVar14) * fVar41;
    *(float *)(pFVar1 + 8) =
         (float)(~uVar8 & (uint)(fVar46 + auVar13._8_4_) | uVar8 & (uint)fVar15) * fVar41;
    *(float *)(pFVar1 + 0xc) =
         (float)(~uVar10 & (uint)(fVar48 + auVar13._12_4_) | uVar10 & (uint)fVar16) * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x90;
    *(float *)pFVar1 =
         fVar41 * (float)(~uVar5 & (uint)(fVar12 + auVar29._0_4_) | uVar5 & (uint)fVar43);
    *(float *)(pFVar1 + 4) =
         fVar41 * (float)(~uVar7 & (uint)(fVar23 + auVar29._4_4_) | uVar7 & (uint)fVar45);
    *(float *)(pFVar1 + 8) =
         fVar41 * (float)(~uVar9 & (uint)(fVar24 + auVar29._8_4_) | uVar9 & (uint)fVar47);
    *(float *)(pFVar1 + 0xc) =
         fVar41 * (float)(~uVar11 & (uint)(fVar25 + auVar29._12_4_) | uVar11 & (uint)fVar22);
    lVar3 = lVar3 + 4;
    if (lVar3 == 0x10) break;
    fVar41 = *(float *)(this + 0x120);
    fVar43 = *(float *)(this + 0x124);
    fVar45 = *(float *)(this + 0x128);
    fVar47 = *(float *)(this + 300);
    fVar22 = *(float *)(this + 0x130);
    fVar23 = *(float *)(this + 0x134);
    fVar24 = *(float *)(this + 0x138);
    fVar25 = *(float *)(this + 0x13c);
  }
  return;
}



/* void cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<2>,
   cvtt::ParallelMath::VInt16<2> >(float const*, cvtt::ParallelMath::VInt16<2> const (*) [3],
   cvtt::ParallelMath::VInt16<2> const (*) [3], int) */

void __thiscall
cvtt::Internal::IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
          (IndexSelector<3> *this,float *param_1,VInt16<2> *param_2,VInt16<2> *param_3,int param_4)

{
  long lVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  IndexSelector<3> *pIVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  long in_FS_OFFSET;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float local_78 [26];
  long local_10;
  
  fVar39 = *param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar26 = param_1[1];
  this[0x128] = (IndexSelector<3>)(fVar39 == fVar26);
  this[0x128] = (IndexSelector<3>)(fVar39 == param_1[2] && fVar39 == fVar26);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)this = *(undefined8 *)param_2;
  *(undefined8 *)(this + 8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x20) = uVar8;
  *(undefined8 *)(this + 0x28) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(this + 0x10) = uVar7;
  *(undefined8 *)(this + 0x18) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar8;
  *(undefined8 *)(this + 0x48) = uVar9;
  *(undefined8 *)(this + 0x30) = uVar7;
  *(undefined8 *)(this + 0x38) = uVar10;
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  lVar14 = 0;
  *(int *)(this + 0x120) = param_4;
  fVar39 = (float)(param_4 + -1);
  *(undefined8 *)(this + 0x50) = uVar7;
  *(undefined8 *)(this + 0x58) = uVar8;
  *(float *)(this + 0x124) = fVar39;
  pfVar15 = param_1;
  do {
    auVar30 = *(undefined1 (*) [16])(param_3 + lVar14);
    auVar3._10_2_ = 0;
    auVar3._0_10_ = auVar30._0_10_;
    auVar3._12_2_ = auVar30._6_2_;
    auVar5._8_2_ = auVar30._4_2_;
    auVar5._0_8_ = auVar30._0_8_;
    auVar5._10_4_ = auVar3._10_4_;
    auVar11._6_8_ = 0;
    auVar11._0_6_ = auVar5._8_6_;
    pIVar13 = this + lVar14 * 2 + 0x70;
    *(float *)pIVar13 = (float)auVar30._8_2_;
    *(float *)(pIVar13 + 4) = (float)auVar30._10_2_;
    *(float *)(pIVar13 + 8) = (float)auVar30._12_2_;
    *(float *)(pIVar13 + 0xc) = (float)auVar30._14_2_;
    fVar34 = (float)(int)CONCAT82(SUB148(auVar11 << 0x40,6),auVar30._2_2_);
    fVar35 = (float)(auVar3._10_4_ >> 0x10);
    pIVar13 = this + lVar14 * 2 + 0x60;
    *(float *)pIVar13 = (float)auVar30._0_2_;
    *(float *)(pIVar13 + 4) = fVar34;
    *(float *)(pIVar13 + 8) = (float)auVar5._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar35;
    auVar25 = *(undefined1 (*) [16])(param_3 + lVar14 + 0x30);
    fVar26 = *pfVar15;
    auVar2._10_2_ = 0;
    auVar2._0_10_ = auVar25._0_10_;
    auVar2._12_2_ = auVar25._6_2_;
    auVar4._8_2_ = auVar25._4_2_;
    auVar4._0_8_ = auVar25._0_8_;
    auVar4._10_4_ = auVar2._10_4_;
    auVar12._6_8_ = 0;
    auVar12._0_6_ = auVar4._8_6_;
    auVar6._4_2_ = auVar25._2_2_;
    auVar6._0_4_ = auVar25._0_4_;
    auVar6._6_8_ = SUB148(auVar12 << 0x40,6);
    lVar1 = lVar14 * 2;
    *(float *)((long)local_78 + lVar1 + 0x10) =
         ((float)auVar25._8_2_ - (float)auVar30._8_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x14) =
         ((float)auVar25._10_2_ - (float)auVar30._10_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x18) =
         ((float)auVar25._12_2_ - (float)auVar30._12_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0x1c) =
         ((float)auVar25._14_2_ - (float)auVar30._14_2_) * fVar26;
    lVar1 = lVar14 * 2;
    *(float *)((long)local_78 + lVar1) =
         ((float)(auVar25._0_4_ & 0xffff) - (float)auVar30._0_2_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 4) = ((float)auVar6._4_4_ - fVar34) * fVar26;
    *(float *)((long)local_78 + lVar1 + 8) = ((float)auVar4._8_4_ - (float)auVar5._8_4_) * fVar26;
    *(float *)((long)local_78 + lVar1 + 0xc) = ((float)(auVar2._10_4_ >> 0x10) - fVar35) * fVar26;
    lVar14 = lVar14 + 0x10;
    pfVar15 = pfVar15 + 1;
  } while (lVar14 != 0x30);
  pfVar16 = param_1 + 3;
  fVar28 = local_78[0] * local_78[0] + local_78[8] * local_78[8] + local_78[0x10] * local_78[0x10];
  fVar31 = local_78[1] * local_78[1] + local_78[9] * local_78[9] + local_78[0x11] * local_78[0x11];
  fVar32 = local_78[2] * local_78[2] + local_78[10] * local_78[10] + local_78[0x12] * local_78[0x12]
  ;
  fVar33 = local_78[3] * local_78[3] + local_78[0xb] * local_78[0xb] +
           local_78[0x13] * local_78[0x13];
  fVar26 = local_78[4] * local_78[4] + local_78[0xc] * local_78[0xc] +
           local_78[0x14] * local_78[0x14];
  fVar34 = local_78[5] * local_78[5] + local_78[0xd] * local_78[0xd] +
           local_78[0x15] * local_78[0x15];
  fVar35 = local_78[6] * local_78[6] + local_78[0xe] * local_78[0xe] +
           local_78[0x16] * local_78[0x16];
  fVar27 = local_78[7] * local_78[7] + local_78[0xf] * local_78[0xf] +
           local_78[0x17] * local_78[0x17];
  uVar17 = -(uint)(fVar28 == 0.0);
  uVar19 = -(uint)(fVar31 == 0.0);
  uVar21 = -(uint)(fVar32 == 0.0);
  uVar23 = -(uint)(fVar33 == 0.0);
  uVar18 = -(uint)(fVar26 == 0.0);
  uVar20 = -(uint)(fVar34 == 0.0);
  uVar22 = -(uint)(fVar35 == 0.0);
  uVar24 = -(uint)(fVar27 == 0.0);
  auVar38._0_4_ = ~uVar17 & (uint)fVar28;
  auVar38._4_4_ = ~uVar19 & (uint)fVar31;
  auVar38._8_4_ = ~uVar21 & (uint)fVar32;
  auVar38._12_4_ = ~uVar23 & (uint)fVar33;
  auVar29._0_8_ = CONCAT44(fVar39,fVar39);
  auVar29._8_4_ = fVar39;
  auVar29._12_4_ = fVar39;
  auVar36._0_4_ = _LC29 & uVar18;
  auVar36._4_4_ = _LC29 & uVar20;
  auVar36._8_4_ = _LC29 & uVar22;
  auVar36._12_4_ = _LC29 & uVar24;
  auVar25._0_4_ = ~uVar18 & (uint)fVar26;
  auVar25._4_4_ = ~uVar20 & (uint)fVar34;
  auVar25._8_4_ = ~uVar22 & (uint)fVar35;
  auVar25._12_4_ = ~uVar24 & (uint)fVar27;
  auVar30._4_4_ = uVar19 & _LC29;
  auVar30._0_4_ = uVar17 & _LC29;
  auVar30._8_4_ = uVar21 & _LC29;
  auVar30._12_4_ = uVar23 & _LC29;
  auVar37._8_4_ = fVar39;
  auVar37._0_8_ = auVar29._0_8_;
  auVar37._12_4_ = fVar39;
  auVar38 = divps(auVar37,auVar38 | auVar30);
  auVar30 = divps(auVar29,auVar25 | auVar36);
  pIVar13 = this + 0xd0;
  pfVar15 = local_78;
  do {
    fVar39 = *param_1;
    fVar26 = pfVar15[5];
    fVar34 = pfVar15[6];
    fVar35 = pfVar15[7];
    param_1 = param_1 + 1;
    fVar27 = *pfVar15;
    fVar28 = pfVar15[1];
    fVar31 = pfVar15[2];
    fVar32 = pfVar15[3];
    *(float *)pIVar13 = pfVar15[4] * fVar39 * auVar30._0_4_;
    *(float *)(pIVar13 + 4) = fVar26 * fVar39 * auVar30._4_4_;
    *(float *)(pIVar13 + 8) = fVar34 * fVar39 * auVar30._8_4_;
    *(float *)(pIVar13 + 0xc) = fVar35 * fVar39 * auVar30._12_4_;
    *(float *)(pIVar13 + -0x10) = fVar39 * fVar27 * auVar38._0_4_;
    *(float *)(pIVar13 + -0xc) = fVar39 * fVar28 * auVar38._4_4_;
    *(float *)(pIVar13 + -8) = fVar39 * fVar31 * auVar38._8_4_;
    *(float *)(pIVar13 + -4) = fVar39 * fVar32 * auVar38._12_4_;
    pIVar13 = pIVar13 + 0x20;
    pfVar15 = pfVar15 + 8;
  } while (pfVar16 != param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::EndpointRefiner<3>::GetRefinedEndpoints(cvtt::ParallelMath::Float (*) [3]) */

void __thiscall
cvtt::Internal::EndpointRefiner<3>::GetRefinedEndpoints(EndpointRefiner<3> *this,Float *param_1)

{
  Float *pFVar1;
  EndpointRefiner<3> *pEVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 in_XMM7 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  
  fVar22 = (float)*(int *)(this + 0x120);
  fVar41 = *(float *)(this + 0xe0);
  fVar43 = *(float *)(this + 0xe4);
  fVar45 = *(float *)(this + 0xe8);
  fVar47 = *(float *)(this + 0xec);
  lVar3 = 0;
  uVar4 = -(uint)(*(float *)(this + 0x100) + fVar22 == 0.0);
  uVar6 = -(uint)(*(float *)(this + 0x104) + fVar22 == 0.0);
  uVar8 = -(uint)(*(float *)(this + 0x108) + fVar22 == 0.0);
  uVar10 = -(uint)(*(float *)(this + 0x10c) + fVar22 == 0.0);
  uVar5 = -(uint)(fVar22 + *(float *)(this + 0x110) == 0.0);
  uVar7 = -(uint)(fVar22 + *(float *)(this + 0x114) == 0.0);
  uVar9 = -(uint)(fVar22 + *(float *)(this + 0x118) == 0.0);
  uVar11 = -(uint)(fVar22 + *(float *)(this + 0x11c) == 0.0);
  auVar18._0_4_ = ~uVar4 & (uint)(*(float *)(this + 0x100) + fVar22);
  auVar18._4_4_ = ~uVar6 & (uint)(*(float *)(this + 0x104) + fVar22);
  auVar18._8_4_ = ~uVar8 & (uint)(*(float *)(this + 0x108) + fVar22);
  auVar18._12_4_ = ~uVar10 & (uint)(*(float *)(this + 0x10c) + fVar22);
  auVar28._0_4_ = uVar4 & _LC29;
  auVar28._4_4_ = uVar6 & _LC29;
  auVar28._8_4_ = uVar8 & _LC29;
  auVar28._12_4_ = uVar10 & _LC29;
  auVar13._0_4_ = ~uVar5 & (uint)(fVar22 + *(float *)(this + 0x110));
  auVar13._4_4_ = ~uVar7 & (uint)(fVar22 + *(float *)(this + 0x114));
  auVar13._8_4_ = ~uVar9 & (uint)(fVar22 + *(float *)(this + 0x118));
  auVar13._12_4_ = ~uVar11 & (uint)(fVar22 + *(float *)(this + 0x11c));
  fVar22 = *(float *)(this + 0xf0);
  fVar23 = *(float *)(this + 0xf4);
  fVar24 = *(float *)(this + 0xf8);
  fVar25 = *(float *)(this + 0xfc);
  auVar18 = auVar18 | auVar28;
  auVar29._4_4_ = uVar7 & _LC29;
  auVar29._0_4_ = uVar5 & _LC29;
  auVar29._8_4_ = uVar9 & _LC29;
  auVar29._12_4_ = uVar11 & _LC29;
  auVar13 = auVar13 | auVar29;
  auVar34 = rcpps(in_XMM7,auVar18);
  auVar29 = rcpps(auVar28,auVar13);
  fVar33 = auVar34._0_4_;
  fVar17 = (auVar18._0_4_ * *(float *)(this + 0xc0) - fVar41 * fVar41) * fVar33;
  fVar35 = auVar34._4_4_;
  fVar19 = (auVar18._4_4_ * *(float *)(this + 0xc4) - fVar43 * fVar43) * fVar35;
  fVar36 = auVar34._8_4_;
  fVar20 = (auVar18._8_4_ * *(float *)(this + 200) - fVar45 * fVar45) * fVar36;
  fVar37 = auVar34._12_4_;
  fVar21 = (auVar18._12_4_ * *(float *)(this + 0xcc) - fVar47 * fVar47) * fVar37;
  fVar27 = auVar29._0_4_;
  fVar12 = (auVar13._0_4_ * *(float *)(this + 0xd0) - fVar22 * fVar22) * fVar27;
  fVar30 = auVar29._4_4_;
  fVar14 = (auVar13._4_4_ * *(float *)(this + 0xd4) - fVar23 * fVar23) * fVar30;
  fVar31 = auVar29._8_4_;
  fVar15 = (auVar13._8_4_ * *(float *)(this + 0xd8) - fVar24 * fVar24) * fVar31;
  fVar32 = auVar29._12_4_;
  fVar16 = (auVar13._12_4_ * *(float *)(this + 0xdc) - fVar25 * fVar25) * fVar32;
  uVar4 = -(uint)(fVar17 == 0.0);
  uVar6 = -(uint)(fVar19 == 0.0);
  uVar8 = -(uint)(fVar20 == 0.0);
  uVar10 = -(uint)(fVar21 == 0.0);
  auVar38._0_4_ = uVar4 & _LC29;
  auVar38._4_4_ = uVar6 & _LC29;
  auVar38._8_4_ = uVar8 & _LC29;
  auVar38._12_4_ = uVar10 & _LC29;
  auVar40._0_4_ = ~uVar4 & (uint)fVar17;
  auVar40._4_4_ = ~uVar6 & (uint)fVar19;
  auVar40._8_4_ = ~uVar8 & (uint)fVar20;
  auVar40._12_4_ = ~uVar10 & (uint)fVar21;
  uVar5 = -(uint)(fVar12 == 0.0);
  uVar7 = -(uint)(fVar14 == 0.0);
  uVar9 = -(uint)(fVar15 == 0.0);
  uVar11 = -(uint)(fVar16 == 0.0);
  auVar34._0_4_ = _LC29 & uVar5;
  auVar34._4_4_ = _LC29 & uVar7;
  auVar34._8_4_ = _LC29 & uVar9;
  auVar34._12_4_ = _LC29 & uVar11;
  auVar39._0_4_ = ~uVar5 & (uint)fVar12;
  auVar39._4_4_ = ~uVar7 & (uint)fVar14;
  auVar39._8_4_ = ~uVar9 & (uint)fVar15;
  auVar39._12_4_ = ~uVar11 & (uint)fVar16;
  while( true ) {
    pEVar2 = this + lVar3 * 8 + 0x60;
    fVar12 = *(float *)pEVar2;
    fVar14 = *(float *)(pEVar2 + 4);
    fVar15 = *(float *)(pEVar2 + 8);
    fVar16 = *(float *)(pEVar2 + 0xc);
    pEVar2 = this + lVar3 * 8 + 0x70;
    fVar17 = *(float *)pEVar2;
    fVar19 = *(float *)(pEVar2 + 4);
    fVar20 = *(float *)(pEVar2 + 8);
    fVar21 = *(float *)(pEVar2 + 0xc);
    pEVar2 = this + lVar3 * 8;
    auVar49._0_4_ = *(float *)pEVar2 - fVar12 * fVar41 * fVar33;
    auVar49._4_4_ = *(float *)(pEVar2 + 4) - fVar14 * fVar43 * fVar35;
    auVar49._8_4_ = *(float *)(pEVar2 + 8) - fVar15 * fVar45 * fVar36;
    auVar49._12_4_ = *(float *)(pEVar2 + 0xc) - fVar16 * fVar47 * fVar37;
    pEVar2 = this + lVar3 * 8 + 0x10;
    auVar26._0_4_ = *(float *)pEVar2 - fVar17 * fVar22 * fVar27;
    auVar26._4_4_ = *(float *)(pEVar2 + 4) - fVar19 * fVar23 * fVar30;
    auVar26._8_4_ = *(float *)(pEVar2 + 8) - fVar20 * fVar24 * fVar31;
    auVar26._12_4_ = *(float *)(pEVar2 + 0xc) - fVar21 * fVar25 * fVar32;
    auVar13 = divps(auVar49,auVar40 | auVar38);
    auVar29 = divps(auVar26,auVar39 | auVar34);
    fVar42 = (fVar12 - fVar41 * auVar13._0_4_) * fVar33;
    fVar44 = (fVar14 - fVar43 * auVar13._4_4_) * fVar35;
    fVar46 = (fVar15 - fVar45 * auVar13._8_4_) * fVar36;
    fVar48 = (fVar16 - fVar47 * auVar13._12_4_) * fVar37;
    fVar50 = (float)(~uVar4 & (uint)fVar42 | (uint)(fVar12 * fVar33) & uVar4);
    fVar14 = (float)(~uVar6 & (uint)fVar44 | (uint)(fVar14 * fVar35) & uVar6);
    fVar15 = (float)(~uVar8 & (uint)fVar46 | (uint)(fVar15 * fVar36) & uVar8);
    fVar16 = (float)(~uVar10 & (uint)fVar48 | (uint)(fVar16 * fVar37) & uVar10);
    fVar12 = (fVar17 - fVar22 * auVar29._0_4_) * fVar27;
    fVar23 = (fVar19 - fVar23 * auVar29._4_4_) * fVar30;
    fVar24 = (fVar20 - fVar24 * auVar29._8_4_) * fVar31;
    fVar25 = (fVar21 - fVar25 * auVar29._12_4_) * fVar32;
    fVar43 = (float)(~uVar5 & (uint)fVar12 | (uint)(fVar17 * fVar27) & uVar5);
    fVar45 = (float)(~uVar7 & (uint)fVar23 | (uint)(fVar19 * fVar30) & uVar7);
    fVar47 = (float)(~uVar9 & (uint)fVar24 | (uint)(fVar20 * fVar31) & uVar9);
    fVar22 = (float)(~uVar11 & (uint)fVar25 | (uint)(fVar21 * fVar32) & uVar11);
    fVar41 = *(float *)(this + lVar3 + 0x134);
    pFVar1 = param_1 + lVar3 * 8;
    *(float *)pFVar1 = fVar50 * fVar41;
    *(float *)(pFVar1 + 4) = fVar14 * fVar41;
    *(float *)(pFVar1 + 8) = fVar15 * fVar41;
    *(float *)(pFVar1 + 0xc) = fVar16 * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x10;
    *(float *)pFVar1 = fVar43 * fVar41;
    *(float *)(pFVar1 + 4) = fVar45 * fVar41;
    *(float *)(pFVar1 + 8) = fVar47 * fVar41;
    *(float *)(pFVar1 + 0xc) = fVar22 * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x60;
    *(float *)pFVar1 =
         (float)(~uVar4 & (uint)(fVar42 + auVar13._0_4_) | uVar4 & (uint)fVar50) * fVar41;
    *(float *)(pFVar1 + 4) =
         (float)(~uVar6 & (uint)(fVar44 + auVar13._4_4_) | uVar6 & (uint)fVar14) * fVar41;
    *(float *)(pFVar1 + 8) =
         (float)(~uVar8 & (uint)(fVar46 + auVar13._8_4_) | uVar8 & (uint)fVar15) * fVar41;
    *(float *)(pFVar1 + 0xc) =
         (float)(~uVar10 & (uint)(fVar48 + auVar13._12_4_) | uVar10 & (uint)fVar16) * fVar41;
    pFVar1 = param_1 + lVar3 * 8 + 0x70;
    *(float *)pFVar1 =
         fVar41 * (float)(~uVar5 & (uint)(fVar12 + auVar29._0_4_) | uVar5 & (uint)fVar43);
    *(float *)(pFVar1 + 4) =
         fVar41 * (float)(~uVar7 & (uint)(fVar23 + auVar29._4_4_) | uVar7 & (uint)fVar45);
    *(float *)(pFVar1 + 8) =
         fVar41 * (float)(~uVar9 & (uint)(fVar24 + auVar29._8_4_) | uVar9 & (uint)fVar47);
    *(float *)(pFVar1 + 0xc) =
         fVar41 * (float)(~uVar11 & (uint)(fVar25 + auVar29._12_4_) | uVar11 & (uint)fVar22);
    lVar3 = lVar3 + 4;
    if (lVar3 == 0xc) break;
    fVar41 = *(float *)(this + 0xe0);
    fVar43 = *(float *)(this + 0xe4);
    fVar45 = *(float *)(this + 0xe8);
    fVar47 = *(float *)(this + 0xec);
    fVar22 = *(float *)(this + 0xf0);
    fVar23 = *(float *)(this + 0xf4);
    fVar24 = *(float *)(this + 0xf8);
    fVar25 = *(float *)(this + 0xfc);
  }
  return;
}



/* cvtt::Internal::EndpointRefiner<1>::GetRefinedEndpoints(cvtt::ParallelMath::Float (*) [1]) */

void __thiscall
cvtt::Internal::EndpointRefiner<1>::GetRefinedEndpoints(EndpointRefiner<1> *this,Float *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 in_XMM7 [16];
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 in_XMM8 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  fVar22 = (float)*(int *)(this + 0xa0);
  uVar1 = -(uint)(*(float *)(this + 0x80) + fVar22 == 0.0);
  uVar3 = -(uint)(*(float *)(this + 0x84) + fVar22 == 0.0);
  uVar5 = -(uint)(*(float *)(this + 0x88) + fVar22 == 0.0);
  uVar7 = -(uint)(*(float *)(this + 0x8c) + fVar22 == 0.0);
  uVar2 = -(uint)(fVar22 + *(float *)(this + 0x90) == 0.0);
  uVar4 = -(uint)(fVar22 + *(float *)(this + 0x94) == 0.0);
  uVar6 = -(uint)(fVar22 + *(float *)(this + 0x98) == 0.0);
  uVar8 = -(uint)(fVar22 + *(float *)(this + 0x9c) == 0.0);
  auVar16._0_4_ = ~uVar1 & (uint)(*(float *)(this + 0x80) + fVar22);
  auVar16._4_4_ = ~uVar3 & (uint)(*(float *)(this + 0x84) + fVar22);
  auVar16._8_4_ = ~uVar5 & (uint)(*(float *)(this + 0x88) + fVar22);
  auVar16._12_4_ = ~uVar7 & (uint)(*(float *)(this + 0x8c) + fVar22);
  auVar10._0_4_ = ~uVar2 & (uint)(fVar22 + *(float *)(this + 0x90));
  auVar10._4_4_ = ~uVar4 & (uint)(fVar22 + *(float *)(this + 0x94));
  auVar10._8_4_ = ~uVar6 & (uint)(fVar22 + *(float *)(this + 0x98));
  auVar10._12_4_ = ~uVar8 & (uint)(fVar22 + *(float *)(this + 0x9c));
  auVar28._0_4_ = uVar2 & _LC29;
  auVar28._4_4_ = uVar4 & _LC29;
  auVar28._8_4_ = uVar6 & _LC29;
  auVar28._12_4_ = uVar8 & _LC29;
  auVar34._4_4_ = uVar3 & _LC29;
  auVar34._0_4_ = uVar1 & _LC29;
  auVar34._8_4_ = uVar5 & _LC29;
  auVar34._12_4_ = uVar7 & _LC29;
  auVar16 = auVar16 | auVar34;
  fVar22 = *(float *)(this + 0x60);
  fVar15 = *(float *)(this + 100);
  fVar18 = *(float *)(this + 0x68);
  fVar20 = *(float *)(this + 0x6c);
  auVar10 = auVar10 | auVar28;
  fVar23 = *(float *)(this + 0x70);
  fVar25 = *(float *)(this + 0x74);
  fVar26 = *(float *)(this + 0x78);
  fVar27 = *(float *)(this + 0x7c);
  auVar39 = rcpps(in_XMM8,auVar16);
  auVar34 = rcpps(in_XMM7,auVar10);
  fVar38 = auVar39._0_4_;
  fVar14 = (auVar16._0_4_ * *(float *)(this + 0x40) - fVar22 * fVar22) * fVar38;
  fVar40 = auVar39._4_4_;
  fVar17 = (auVar16._4_4_ * *(float *)(this + 0x44) - fVar15 * fVar15) * fVar40;
  fVar41 = auVar39._8_4_;
  fVar19 = (auVar16._8_4_ * *(float *)(this + 0x48) - fVar18 * fVar18) * fVar41;
  fVar42 = auVar39._12_4_;
  fVar21 = (auVar16._12_4_ * *(float *)(this + 0x4c) - fVar20 * fVar20) * fVar42;
  fVar33 = auVar34._0_4_;
  fVar9 = (auVar10._0_4_ * *(float *)(this + 0x50) - fVar23 * fVar23) * fVar33;
  fVar35 = auVar34._4_4_;
  fVar11 = (auVar10._4_4_ * *(float *)(this + 0x54) - fVar25 * fVar25) * fVar35;
  fVar36 = auVar34._8_4_;
  fVar12 = (auVar10._8_4_ * *(float *)(this + 0x58) - fVar26 * fVar26) * fVar36;
  fVar37 = auVar34._12_4_;
  fVar13 = (auVar10._12_4_ * *(float *)(this + 0x5c) - fVar27 * fVar27) * fVar37;
  uVar1 = -(uint)(fVar14 == 0.0);
  uVar3 = -(uint)(fVar17 == 0.0);
  uVar5 = -(uint)(fVar19 == 0.0);
  uVar7 = -(uint)(fVar21 == 0.0);
  auVar43._0_4_ = ~uVar1 & (uint)fVar14;
  auVar43._4_4_ = ~uVar3 & (uint)fVar17;
  auVar43._8_4_ = ~uVar5 & (uint)fVar19;
  auVar43._12_4_ = ~uVar7 & (uint)fVar21;
  auVar45._0_4_ = uVar1 & _LC29;
  auVar45._4_4_ = uVar3 & _LC29;
  auVar45._8_4_ = uVar5 & _LC29;
  auVar45._12_4_ = uVar7 & _LC29;
  uVar2 = -(uint)(fVar9 == 0.0);
  uVar4 = -(uint)(fVar11 == 0.0);
  uVar6 = -(uint)(fVar12 == 0.0);
  uVar8 = -(uint)(fVar13 == 0.0);
  auVar24._0_4_ = _LC29 & uVar2;
  auVar24._4_4_ = _LC29 & uVar4;
  auVar24._8_4_ = _LC29 & uVar6;
  auVar24._12_4_ = _LC29 & uVar8;
  auVar39._0_4_ = ~uVar2 & (uint)fVar9;
  auVar39._4_4_ = ~uVar4 & (uint)fVar11;
  auVar39._8_4_ = ~uVar6 & (uint)fVar12;
  auVar39._12_4_ = ~uVar8 & (uint)fVar13;
  fVar9 = *(float *)(this + 0x30);
  fVar11 = *(float *)(this + 0x34);
  fVar12 = *(float *)(this + 0x38);
  fVar13 = *(float *)(this + 0x3c);
  fVar14 = *(float *)(this + 0x20);
  fVar17 = *(float *)(this + 0x24);
  fVar19 = *(float *)(this + 0x28);
  fVar21 = *(float *)(this + 0x2c);
  auVar46._0_4_ = *(float *)this - fVar22 * fVar14 * fVar38;
  auVar46._4_4_ = *(float *)(this + 4) - fVar15 * fVar17 * fVar40;
  auVar46._8_4_ = *(float *)(this + 8) - fVar18 * fVar19 * fVar41;
  auVar46._12_4_ = *(float *)(this + 0xc) - fVar20 * fVar21 * fVar42;
  auVar10 = divps(auVar46,auVar43 | auVar45);
  auVar44._0_4_ = *(float *)(this + 0x10) - fVar23 * fVar9 * fVar33;
  auVar44._4_4_ = *(float *)(this + 0x14) - fVar25 * fVar11 * fVar35;
  auVar44._8_4_ = *(float *)(this + 0x18) - fVar26 * fVar12 * fVar36;
  auVar44._12_4_ = *(float *)(this + 0x1c) - fVar27 * fVar13 * fVar37;
  auVar34 = divps(auVar44,auVar24 | auVar39);
  fVar29 = (fVar14 - fVar22 * auVar10._0_4_) * fVar38;
  fVar30 = (fVar17 - fVar15 * auVar10._4_4_) * fVar40;
  fVar31 = (fVar19 - fVar18 * auVar10._8_4_) * fVar41;
  fVar32 = (fVar21 - fVar20 * auVar10._12_4_) * fVar42;
  fVar15 = (float)((uint)(fVar14 * fVar38) & uVar1 | ~uVar1 & (uint)fVar29);
  fVar18 = (float)((uint)(fVar17 * fVar40) & uVar3 | ~uVar3 & (uint)fVar30);
  fVar20 = (float)((uint)(fVar19 * fVar41) & uVar5 | ~uVar5 & (uint)fVar31);
  fVar14 = (float)((uint)(fVar21 * fVar42) & uVar7 | ~uVar7 & (uint)fVar32);
  fVar23 = (fVar9 - fVar23 * auVar34._0_4_) * fVar33;
  fVar25 = (fVar11 - fVar25 * auVar34._4_4_) * fVar35;
  fVar26 = (fVar12 - fVar26 * auVar34._8_4_) * fVar36;
  fVar27 = (fVar13 - fVar27 * auVar34._12_4_) * fVar37;
  fVar9 = (float)(~uVar2 & (uint)fVar23 | (uint)(fVar9 * fVar33) & uVar2);
  fVar11 = (float)(~uVar4 & (uint)fVar25 | (uint)(fVar11 * fVar35) & uVar4);
  fVar12 = (float)(~uVar6 & (uint)fVar26 | (uint)(fVar12 * fVar36) & uVar6);
  fVar13 = (float)(~uVar8 & (uint)fVar27 | (uint)(fVar13 * fVar37) & uVar8);
  fVar22 = *(float *)(this + 0xac);
  *(float *)param_1 = fVar15 * fVar22;
  *(float *)(param_1 + 4) = fVar18 * fVar22;
  *(float *)(param_1 + 8) = fVar20 * fVar22;
  *(float *)(param_1 + 0xc) = fVar14 * fVar22;
  *(float *)(param_1 + 0x10) = fVar9 * fVar22;
  *(float *)(param_1 + 0x14) = fVar11 * fVar22;
  *(float *)(param_1 + 0x18) = fVar12 * fVar22;
  *(float *)(param_1 + 0x1c) = fVar13 * fVar22;
  *(float *)(param_1 + 0x20) =
       (float)(~uVar1 & (uint)(fVar29 + auVar10._0_4_) | uVar1 & (uint)fVar15) * fVar22;
  *(float *)(param_1 + 0x24) =
       (float)(~uVar3 & (uint)(fVar30 + auVar10._4_4_) | uVar3 & (uint)fVar18) * fVar22;
  *(float *)(param_1 + 0x28) =
       (float)(~uVar5 & (uint)(fVar31 + auVar10._8_4_) | uVar5 & (uint)fVar20) * fVar22;
  *(float *)(param_1 + 0x2c) =
       (float)(~uVar7 & (uint)(fVar32 + auVar10._12_4_) | uVar7 & (uint)fVar14) * fVar22;
  *(float *)(param_1 + 0x30) =
       fVar22 * (float)(~uVar2 & (uint)(fVar23 + auVar34._0_4_) | uVar2 & (uint)fVar9);
  *(float *)(param_1 + 0x34) =
       fVar22 * (float)(~uVar4 & (uint)(fVar25 + auVar34._4_4_) | uVar4 & (uint)fVar11);
  *(float *)(param_1 + 0x38) =
       fVar22 * (float)(~uVar6 & (uint)(fVar26 + auVar34._8_4_) | uVar6 & (uint)fVar12);
  *(float *)(param_1 + 0x3c) =
       fVar22 * (float)(~uVar8 & (uint)(fVar27 + auVar34._12_4_) | uVar8 & (uint)fVar13);
  return;
}



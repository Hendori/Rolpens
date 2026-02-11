
/* cvtt::Internal::S3TCComputer::Init(cvtt::ParallelMath::Float&) */

void cvtt::Internal::S3TCComputer::Init(Float *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _LC1;
  *(undefined4 *)param_1 = _LC1;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::QuantizeTo6Bits(cvtt::ParallelMath::VInt16<2>&) */

void cvtt::Internal::S3TCComputer::QuantizeTo6Bits(VInt16 *param_1)

{
  ushort uVar1;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar11;
  undefined1 auVar4 [16];
  
  auVar4 = *(undefined1 (*) [16])param_1;
  auVar2 = psllw(auVar4,6);
  auVar3._0_2_ = auVar2._0_2_ - auVar4._0_2_;
  auVar3._2_2_ = auVar2._2_2_ - auVar4._2_2_;
  auVar3._4_2_ = auVar2._4_2_ - auVar4._4_2_;
  auVar3._6_2_ = auVar2._6_2_ - auVar4._6_2_;
  auVar3._8_2_ = auVar2._8_2_ - auVar4._8_2_;
  auVar3._10_2_ = auVar2._10_2_ - auVar4._10_2_;
  auVar3._12_2_ = auVar2._12_2_ - auVar4._12_2_;
  auVar3._14_2_ = auVar2._14_2_ - auVar4._14_2_;
  auVar2 = psllw(auVar3,2);
  uVar1 = auVar2._0_2_ + auVar4._0_2_ + __LC2;
  uVar5 = auVar2._2_2_ + auVar4._2_2_ + _UNK_00107002;
  uVar6 = auVar2._4_2_ + auVar4._4_2_ + _UNK_00107004;
  uVar7 = auVar2._6_2_ + auVar4._6_2_ + _UNK_00107006;
  uVar8 = auVar2._8_2_ + auVar4._8_2_ + _UNK_00107008;
  uVar9 = auVar2._10_2_ + auVar4._10_2_ + _UNK_0010700a;
  uVar10 = auVar2._12_2_ + auVar4._12_2_ + _UNK_0010700c;
  uVar11 = auVar2._14_2_ + auVar4._14_2_ + _UNK_0010700e;
  auVar4._0_2_ = uVar1 >> 10;
  auVar4._2_2_ = uVar5 >> 10;
  auVar4._4_2_ = uVar6 >> 10;
  auVar4._6_2_ = uVar7 >> 10;
  auVar4._8_2_ = uVar8 >> 10;
  auVar4._10_2_ = uVar9 >> 10;
  auVar4._12_2_ = uVar10 >> 10;
  auVar4._14_2_ = uVar11 >> 10;
  auVar4 = psllw(auVar4,2);
  auVar2._0_2_ = uVar1 >> 0xe;
  auVar2._2_2_ = uVar5 >> 0xe;
  auVar2._4_2_ = uVar6 >> 0xe;
  auVar2._6_2_ = uVar7 >> 0xe;
  auVar2._8_2_ = uVar8 >> 0xe;
  auVar2._10_2_ = uVar9 >> 0xe;
  auVar2._12_2_ = uVar10 >> 0xe;
  auVar2._14_2_ = uVar11 >> 0xe;
  *(undefined1 (*) [16])param_1 = auVar4 | auVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::QuantizeTo5Bits(cvtt::ParallelMath::VInt16<2>&) */

void cvtt::Internal::S3TCComputer::QuantizeTo5Bits(VInt16 *param_1)

{
  ushort uVar1;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar11;
  undefined1 auVar4 [16];
  
  auVar4 = *(undefined1 (*) [16])param_1;
  auVar2 = psllw(auVar4,5);
  auVar3._0_2_ = auVar2._0_2_ - auVar4._0_2_;
  auVar3._2_2_ = auVar2._2_2_ - auVar4._2_2_;
  auVar3._4_2_ = auVar2._4_2_ - auVar4._4_2_;
  auVar3._6_2_ = auVar2._6_2_ - auVar4._6_2_;
  auVar3._8_2_ = auVar2._8_2_ - auVar4._8_2_;
  auVar3._10_2_ = auVar2._10_2_ - auVar4._10_2_;
  auVar3._12_2_ = auVar2._12_2_ - auVar4._12_2_;
  auVar3._14_2_ = auVar2._14_2_ - auVar4._14_2_;
  auVar2 = psllw(auVar3,3);
  uVar1 = auVar2._0_2_ + auVar4._0_2_ + __LC3;
  uVar5 = auVar2._2_2_ + auVar4._2_2_ + _UNK_00107012;
  uVar6 = auVar2._4_2_ + auVar4._4_2_ + _UNK_00107014;
  uVar7 = auVar2._6_2_ + auVar4._6_2_ + _UNK_00107016;
  uVar8 = auVar2._8_2_ + auVar4._8_2_ + _UNK_00107018;
  uVar9 = auVar2._10_2_ + auVar4._10_2_ + _UNK_0010701a;
  uVar10 = auVar2._12_2_ + auVar4._12_2_ + _UNK_0010701c;
  uVar11 = auVar2._14_2_ + auVar4._14_2_ + _UNK_0010701e;
  auVar4._0_2_ = uVar1 >> 0xb;
  auVar4._2_2_ = uVar5 >> 0xb;
  auVar4._4_2_ = uVar6 >> 0xb;
  auVar4._6_2_ = uVar7 >> 0xb;
  auVar4._8_2_ = uVar8 >> 0xb;
  auVar4._10_2_ = uVar9 >> 0xb;
  auVar4._12_2_ = uVar10 >> 0xb;
  auVar4._14_2_ = uVar11 >> 0xb;
  auVar4 = psllw(auVar4,3);
  auVar2._0_2_ = uVar1 >> 0xd;
  auVar2._2_2_ = uVar5 >> 0xd;
  auVar2._4_2_ = uVar6 >> 0xd;
  auVar2._6_2_ = uVar7 >> 0xd;
  auVar2._8_2_ = uVar8 >> 0xd;
  auVar2._10_2_ = uVar9 >> 0xd;
  auVar2._12_2_ = uVar10 >> 0xd;
  auVar2._14_2_ = uVar11 >> 0xd;
  *(undefined1 (*) [16])param_1 = auVar4 | auVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::QuantizeTo565(cvtt::ParallelMath::VInt16<2>*) */

void cvtt::Internal::S3TCComputer::QuantizeTo565(VInt16 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar22;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  sVar8 = _UNK_0010701e;
  sVar7 = _UNK_0010701c;
  sVar6 = _UNK_0010701a;
  sVar5 = _UNK_00107018;
  sVar4 = _UNK_00107016;
  sVar3 = _UNK_00107014;
  sVar2 = _UNK_00107012;
  sVar1 = __LC3;
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar10 = psllw(auVar15,5);
  auVar11._0_2_ = auVar10._0_2_ - auVar15._0_2_;
  auVar11._2_2_ = auVar10._2_2_ - auVar15._2_2_;
  auVar11._4_2_ = auVar10._4_2_ - auVar15._4_2_;
  auVar11._6_2_ = auVar10._6_2_ - auVar15._6_2_;
  auVar11._8_2_ = auVar10._8_2_ - auVar15._8_2_;
  auVar11._10_2_ = auVar10._10_2_ - auVar15._10_2_;
  auVar11._12_2_ = auVar10._12_2_ - auVar15._12_2_;
  auVar11._14_2_ = auVar10._14_2_ - auVar15._14_2_;
  auVar10 = psllw(auVar11,3);
  uVar9 = auVar10._0_2_ + auVar15._0_2_ + __LC3;
  uVar16 = auVar10._2_2_ + auVar15._2_2_ + _UNK_00107012;
  uVar17 = auVar10._4_2_ + auVar15._4_2_ + _UNK_00107014;
  uVar18 = auVar10._6_2_ + auVar15._6_2_ + _UNK_00107016;
  uVar19 = auVar10._8_2_ + auVar15._8_2_ + _UNK_00107018;
  uVar20 = auVar10._10_2_ + auVar15._10_2_ + _UNK_0010701a;
  uVar21 = auVar10._12_2_ + auVar15._12_2_ + _UNK_0010701c;
  uVar22 = auVar10._14_2_ + auVar15._14_2_ + _UNK_0010701e;
  auVar15._0_2_ = uVar9 >> 0xb;
  auVar15._2_2_ = uVar16 >> 0xb;
  auVar15._4_2_ = uVar17 >> 0xb;
  auVar15._6_2_ = uVar18 >> 0xb;
  auVar15._8_2_ = uVar19 >> 0xb;
  auVar15._10_2_ = uVar20 >> 0xb;
  auVar15._12_2_ = uVar21 >> 0xb;
  auVar15._14_2_ = uVar22 >> 0xb;
  auVar10 = psllw(auVar15,3);
  auVar24._0_2_ = uVar9 >> 0xd;
  auVar24._2_2_ = uVar16 >> 0xd;
  auVar24._4_2_ = uVar17 >> 0xd;
  auVar24._6_2_ = uVar18 >> 0xd;
  auVar24._8_2_ = uVar19 >> 0xd;
  auVar24._10_2_ = uVar20 >> 0xd;
  auVar24._12_2_ = uVar21 >> 0xd;
  auVar24._14_2_ = uVar22 >> 0xd;
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x10);
  *(undefined1 (*) [16])param_1 = auVar10 | auVar24;
  auVar10 = psllw(auVar15,6);
  auVar12._0_2_ = auVar10._0_2_ - auVar15._0_2_;
  auVar12._2_2_ = auVar10._2_2_ - auVar15._2_2_;
  auVar12._4_2_ = auVar10._4_2_ - auVar15._4_2_;
  auVar12._6_2_ = auVar10._6_2_ - auVar15._6_2_;
  auVar12._8_2_ = auVar10._8_2_ - auVar15._8_2_;
  auVar12._10_2_ = auVar10._10_2_ - auVar15._10_2_;
  auVar12._12_2_ = auVar10._12_2_ - auVar15._12_2_;
  auVar12._14_2_ = auVar10._14_2_ - auVar15._14_2_;
  auVar10 = psllw(auVar12,2);
  uVar9 = auVar10._0_2_ + auVar15._0_2_ + __LC2;
  uVar16 = auVar10._2_2_ + auVar15._2_2_ + _UNK_00107002;
  uVar17 = auVar10._4_2_ + auVar15._4_2_ + _UNK_00107004;
  uVar18 = auVar10._6_2_ + auVar15._6_2_ + _UNK_00107006;
  uVar19 = auVar10._8_2_ + auVar15._8_2_ + _UNK_00107008;
  uVar20 = auVar10._10_2_ + auVar15._10_2_ + _UNK_0010700a;
  uVar21 = auVar10._12_2_ + auVar15._12_2_ + _UNK_0010700c;
  uVar22 = auVar10._14_2_ + auVar15._14_2_ + _UNK_0010700e;
  auVar10._0_2_ = uVar9 >> 10;
  auVar10._2_2_ = uVar16 >> 10;
  auVar10._4_2_ = uVar17 >> 10;
  auVar10._6_2_ = uVar18 >> 10;
  auVar10._8_2_ = uVar19 >> 10;
  auVar10._10_2_ = uVar20 >> 10;
  auVar10._12_2_ = uVar21 >> 10;
  auVar10._14_2_ = uVar22 >> 10;
  auVar10 = psllw(auVar10,2);
  auVar25._0_2_ = uVar9 >> 0xe;
  auVar25._2_2_ = uVar16 >> 0xe;
  auVar25._4_2_ = uVar17 >> 0xe;
  auVar25._6_2_ = uVar18 >> 0xe;
  auVar25._8_2_ = uVar19 >> 0xe;
  auVar25._10_2_ = uVar20 >> 0xe;
  auVar25._12_2_ = uVar21 >> 0xe;
  auVar25._14_2_ = uVar22 >> 0xe;
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x20);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar10 | auVar25;
  auVar10 = psllw(auVar15,5);
  auVar13._0_2_ = auVar10._0_2_ - auVar15._0_2_;
  auVar13._2_2_ = auVar10._2_2_ - auVar15._2_2_;
  auVar13._4_2_ = auVar10._4_2_ - auVar15._4_2_;
  auVar13._6_2_ = auVar10._6_2_ - auVar15._6_2_;
  auVar13._8_2_ = auVar10._8_2_ - auVar15._8_2_;
  auVar13._10_2_ = auVar10._10_2_ - auVar15._10_2_;
  auVar13._12_2_ = auVar10._12_2_ - auVar15._12_2_;
  auVar13._14_2_ = auVar10._14_2_ - auVar15._14_2_;
  auVar10 = psllw(auVar13,3);
  uVar9 = auVar10._0_2_ + auVar15._0_2_ + sVar1;
  uVar16 = auVar10._2_2_ + auVar15._2_2_ + sVar2;
  uVar17 = auVar10._4_2_ + auVar15._4_2_ + sVar3;
  uVar18 = auVar10._6_2_ + auVar15._6_2_ + sVar4;
  uVar19 = auVar10._8_2_ + auVar15._8_2_ + sVar5;
  uVar20 = auVar10._10_2_ + auVar15._10_2_ + sVar6;
  uVar21 = auVar10._12_2_ + auVar15._12_2_ + sVar7;
  uVar22 = auVar10._14_2_ + auVar15._14_2_ + sVar8;
  auVar14._0_2_ = uVar9 >> 0xb;
  auVar14._2_2_ = uVar16 >> 0xb;
  auVar14._4_2_ = uVar17 >> 0xb;
  auVar14._6_2_ = uVar18 >> 0xb;
  auVar14._8_2_ = uVar19 >> 0xb;
  auVar14._10_2_ = uVar20 >> 0xb;
  auVar14._12_2_ = uVar21 >> 0xb;
  auVar14._14_2_ = uVar22 >> 0xb;
  auVar15 = psllw(auVar14,3);
  auVar23._0_2_ = uVar9 >> 0xd;
  auVar23._2_2_ = uVar16 >> 0xd;
  auVar23._4_2_ = uVar17 >> 0xd;
  auVar23._6_2_ = uVar18 >> 0xd;
  auVar23._8_2_ = uVar19 >> 0xd;
  auVar23._10_2_ = uVar20 >> 0xd;
  auVar23._12_2_ = uVar21 >> 0xd;
  auVar23._14_2_ = uVar22 >> 0xd;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar15 | auVar23;
  return;
}



/* cvtt::Internal::S3TCComputer::ParanoidFactorForSpan(cvtt::ParallelMath::VInt16<0> const&) */

S3TCComputer * __thiscall
cvtt::Internal::S3TCComputer::ParanoidFactorForSpan(S3TCComputer *this,VInt16 *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar3 [16];
  
  auVar1._10_2_ = *(undefined2 *)(param_1 + 4);
  auVar1._0_10_ = (unkuint10)0;
  auVar2._0_10_ =
       (unkuint10)CONCAT24(*(undefined2 *)(param_1 + 10),(uint)*(ushort *)(param_1 + 8)) << 0x10;
  auVar2._10_2_ = *(undefined2 *)(param_1 + 0xc);
  auVar3._12_2_ = 0;
  auVar3._0_12_ = auVar2;
  auVar3._14_2_ = *(undefined2 *)(param_1 + 0xe);
  fVar8 = (float)(~_LC5 & (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar1._8_4_,
                                                                *(undefined2 *)(param_1 + 2))) <<
                                               0x30,4) >> 0x10)) * _LC7;
  fVar9 = (float)(~_LC5 & (uint)(float)(auVar1._8_4_ >> 0x10)) * _LC7;
  fVar10 = _LC7 * 0.0;
  fVar4 = (float)(~_LC5 & (uint)(float)((int)auVar2._0_10_ >> 0x10)) * _LC7;
  fVar5 = (float)(~_LC5 & (uint)(float)(int)((int6)CONCAT24(*(undefined2 *)(param_1 + 10),
                                                            (uint)*(ushort *)(param_1 + 8)) >> 0x20)
                 ) * _LC7;
  fVar6 = (float)(~_LC5 & (uint)(float)(auVar2._8_4_ >> 0x10)) * _LC7;
  fVar7 = (float)(~_LC5 & (uint)(float)(auVar3._12_4_ >> 0x10)) * _LC7;
  *(float *)this = (float)(~_LC5 & (uint)(float)(int)*(short *)param_1) * _LC7;
  *(float *)(this + 4) = fVar8;
  *(float *)(this + 8) = fVar9;
  *(float *)(this + 0xc) = fVar10;
  *(float *)(this + 0x10) = fVar4;
  *(float *)(this + 0x14) = fVar5;
  *(float *)(this + 0x18) = fVar6;
  *(float *)(this + 0x1c) = fVar7;
  return this;
}



/* cvtt::Internal::S3TCComputer::ParanoidDiff(cvtt::ParallelMath::VInt16<2> const&,
   cvtt::ParallelMath::VInt16<2> const&, cvtt::ParallelMath::Float const&) */

S3TCComputer * __thiscall
cvtt::Internal::S3TCComputer::ParanoidDiff
          (S3TCComputer *this,VInt16 *param_1,VInt16 *param_2,Float *param_3)

{
  uint6 uVar1;
  float fVar2;
  undefined1 auVar3 [12];
  float fVar4;
  float fVar7;
  undefined1 auVar5 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar6 [16];
  
  uVar1 = CONCAT24(*(short *)(param_1 + 10) - *(short *)(param_2 + 10),
                   (uint)(ushort)(*(short *)(param_1 + 8) - *(short *)(param_2 + 8)));
  auVar5._0_10_ = (unkuint10)uVar1 << 0x10;
  auVar5._10_2_ = *(short *)(param_1 + 0xc) - *(short *)(param_2 + 0xc);
  auVar6._12_2_ = 0;
  auVar6._0_12_ = auVar5;
  auVar6._14_2_ = *(short *)(param_1 + 0xe) - *(short *)(param_2 + 0xe);
  auVar3._10_2_ = *(short *)(param_1 + 4) - *(short *)(param_2 + 4);
  auVar3._0_10_ = (unkuint10)0;
  fVar4 = (float)(~_LC5 & (uint)(float)((int)auVar5._0_10_ >> 0x10)) + *(float *)(param_3 + 0x10);
  fVar7 = (float)(~_LC5 & (uint)(float)(int)((int6)uVar1 >> 0x20)) + *(float *)(param_3 + 0x14);
  fVar8 = (float)(~_LC5 & (uint)(float)(auVar5._8_4_ >> 0x10)) + *(float *)(param_3 + 0x18);
  fVar9 = (float)(~_LC5 & (uint)(float)(auVar6._12_4_ >> 0x10)) + *(float *)(param_3 + 0x1c);
  fVar2 = *(float *)(param_3 + 0xc);
  fVar10 = (float)(~_LC5 & (uint)(float)(int)(short)(*(short *)param_1 - *(short *)param_2)) +
           *(float *)param_3;
  fVar11 = (float)(~_LC5 & (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar3._8_4_,
                                                                 *(short *)(param_1 + 2) -
                                                                 *(short *)(param_2 + 2))) << 0x30,4
                                               ) >> 0x10)) + *(float *)(param_3 + 4);
  fVar12 = (float)(~_LC5 & (uint)(float)(auVar3._8_4_ >> 0x10)) + *(float *)(param_3 + 8);
  *(float *)(this + 0x10) = fVar4 * fVar4;
  *(float *)(this + 0x14) = fVar7 * fVar7;
  *(float *)(this + 0x18) = fVar8 * fVar8;
  *(float *)(this + 0x1c) = fVar9 * fVar9;
  *(float *)this = fVar10 * fVar10;
  *(float *)(this + 4) = fVar11 * fVar11;
  *(float *)(this + 8) = fVar12 * fVar12;
  *(float *)(this + 0xc) = (fVar2 + 0.0) * (fVar2 + 0.0);
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::TestSingleColor(unsigned int, cvtt::ParallelMath::VInt16<2> const
   (*) [4], cvtt::ParallelMath::Float const (*) [4], int, float const*, cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::VInt16<2> (*) [3], cvtt::ParallelMath::VInt16<2>*,
   cvtt::ParallelMath::VInt16<2>&, cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::S3TCComputer::TestSingleColor
               (uint param_1,VInt16<2> *param_2,Float *param_3,int param_4,float *param_5,
               Float *param_6,VInt16<2> *param_7,VInt16 *param_8,VInt16 *param_9,
               RoundTowardNearestForScope *param_10)

{
  VInt16<2> *pVVar1;
  float fVar2;
  byte bVar3;
  uint6 uVar4;
  undefined1 auVar5 [14];
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  int iVar14;
  long lVar15;
  long lVar16;
  VInt16 *pVVar17;
  VInt16 *pVVar18;
  VInt16<2> *pVVar19;
  VInt16<2> *pVVar20;
  long lVar21;
  byte *pbVar22;
  float *pfVar23;
  float *pfVar24;
  ushort *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  long in_FS_OFFSET;
  short sVar28;
  float fVar29;
  short sVar33;
  short sVar34;
  float fVar35;
  short sVar36;
  short sVar37;
  ushort uVar38;
  undefined1 auVar30 [12];
  float fVar39;
  short sVar40;
  short sVar41;
  float fVar42;
  undefined1 auVar32 [16];
  short sVar43;
  float fVar44;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  long local_200;
  undefined8 local_1d8;
  float local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  ushort local_198 [4];
  ushort uStack_190;
  ushort uStack_18e;
  ushort uStack_18c;
  ushort uStack_18a;
  ushort local_188 [4];
  ushort uStack_180;
  ushort uStack_17e;
  ushort uStack_17c;
  ushort uStack_17a;
  ushort local_178;
  ushort uStack_176;
  ushort uStack_174;
  ushort uStack_172;
  ushort uStack_170;
  ushort uStack_16e;
  ushort uStack_16c;
  ushort uStack_16a;
  ushort local_168 [48];
  ushort local_108 [24];
  ushort local_d8 [24];
  float local_a8 [26];
  long local_40;
  undefined1 auVar31 [16];
  
  fVar29 = (float)*(undefined8 *)param_5;
  fVar2 = (float)((ulong)*(undefined8 *)param_5 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1d8 = CONCAT44(fVar2 * fVar2,fVar29 * fVar29);
  pVVar1 = param_2 + 0x400;
  local_1d0 = param_5[2] * param_5[2];
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  pVVar19 = param_2;
  do {
    pVVar20 = pVVar19 + 0x40;
    local_1c8._0_2_ = *(short *)pVVar19 + local_1c8._0_2_;
    local_1c8._2_2_ = *(short *)(pVVar19 + 2) + local_1c8._2_2_;
    local_1c8._4_2_ = *(short *)(pVVar19 + 4) + local_1c8._4_2_;
    local_1c8._6_2_ = *(short *)(pVVar19 + 6) + local_1c8._6_2_;
    local_1c8._8_2_ = *(short *)(pVVar19 + 8) + local_1c8._8_2_;
    local_1c8._10_2_ = *(short *)(pVVar19 + 10) + local_1c8._10_2_;
    local_1c8._12_2_ = *(short *)(pVVar19 + 0xc) + local_1c8._12_2_;
    local_1c8._14_2_ = *(short *)(pVVar19 + 0xe) + local_1c8._14_2_;
    local_1a8._0_2_ = local_1a8._0_2_ + *(short *)(pVVar19 + 0x20);
    local_1a8._2_2_ = local_1a8._2_2_ + *(short *)(pVVar19 + 0x22);
    local_1a8._4_2_ = local_1a8._4_2_ + *(short *)(pVVar19 + 0x24);
    local_1a8._6_2_ = local_1a8._6_2_ + *(short *)(pVVar19 + 0x26);
    local_1a8._8_2_ = local_1a8._8_2_ + *(short *)(pVVar19 + 0x28);
    local_1a8._10_2_ = local_1a8._10_2_ + *(short *)(pVVar19 + 0x2a);
    local_1a8._12_2_ = local_1a8._12_2_ + *(short *)(pVVar19 + 0x2c);
    local_1a8._14_2_ = local_1a8._14_2_ + *(short *)(pVVar19 + 0x2e);
    local_1b8._0_2_ = *(short *)(pVVar19 + 0x10) + local_1b8._0_2_;
    local_1b8._2_2_ = *(short *)(pVVar19 + 0x12) + local_1b8._2_2_;
    local_1b8._4_2_ = *(short *)(pVVar19 + 0x14) + local_1b8._4_2_;
    local_1b8._6_2_ = *(short *)(pVVar19 + 0x16) + local_1b8._6_2_;
    local_1b8._8_2_ = *(short *)(pVVar19 + 0x18) + local_1b8._8_2_;
    local_1b8._10_2_ = *(short *)(pVVar19 + 0x1a) + local_1b8._10_2_;
    local_1b8._12_2_ = *(short *)(pVVar19 + 0x1c) + local_1b8._12_2_;
    local_1b8._14_2_ = *(short *)(pVVar19 + 0x1e) + local_1b8._14_2_;
    pVVar19 = pVVar20;
  } while (pVVar20 != pVVar1);
  local_198[0] = (ushort)(local_1c8._0_2_ + __LC8) >> 4;
  local_198[1] = (ushort)(local_1c8._2_2_ + _UNK_00107022) >> 4;
  local_198[2] = (ushort)(local_1c8._4_2_ + _UNK_00107024) >> 4;
  local_198[3] = (ushort)(local_1c8._6_2_ + _UNK_00107026) >> 4;
  uStack_190 = (ushort)(local_1c8._8_2_ + _UNK_00107028) >> 4;
  uStack_18e = (ushort)(local_1c8._10_2_ + _UNK_0010702a) >> 4;
  uStack_18c = (ushort)(local_1c8._12_2_ + _UNK_0010702c) >> 4;
  uStack_18a = (ushort)(local_1c8._14_2_ + _UNK_0010702e) >> 4;
  local_188[0] = (ushort)(local_1b8._0_2_ + __LC8) >> 4;
  local_188[1] = (ushort)(local_1b8._2_2_ + _UNK_00107022) >> 4;
  local_188[2] = (ushort)(local_1b8._4_2_ + _UNK_00107024) >> 4;
  local_188[3] = (ushort)(local_1b8._6_2_ + _UNK_00107026) >> 4;
  uStack_180 = (ushort)(local_1b8._8_2_ + _UNK_00107028) >> 4;
  uStack_17e = (ushort)(local_1b8._10_2_ + _UNK_0010702a) >> 4;
  uStack_17c = (ushort)(local_1b8._12_2_ + _UNK_0010702c) >> 4;
  uStack_17a = (ushort)(local_1b8._14_2_ + _UNK_0010702e) >> 4;
  local_178 = (ushort)(local_1a8._0_2_ + __LC8) >> 4;
  uStack_176 = (ushort)(local_1a8._2_2_ + _UNK_00107022) >> 4;
  uStack_174 = (ushort)(local_1a8._4_2_ + _UNK_00107024) >> 4;
  uStack_172 = (ushort)(local_1a8._6_2_ + _UNK_00107026) >> 4;
  uStack_170 = (ushort)(local_1a8._8_2_ + _UNK_00107028) >> 4;
  uStack_16e = (ushort)(local_1a8._10_2_ + _UNK_0010702a) >> 4;
  uStack_16c = (ushort)(local_1a8._12_2_ + _UNK_0010702c) >> 4;
  uStack_16a = (ushort)(local_1a8._14_2_ + _UNK_0010702e) >> 4;
  if ((param_1 & 0x100) == 0) {
    puVar27 = Tables::S3TCSC::g_singleColor6_2;
    if (param_4 == 4) {
      puVar27 = Tables::S3TCSC::g_singleColor6_3;
    }
    puVar26 = Tables::S3TCSC::g_singleColor5_2;
    if (param_4 == 4) {
      puVar26 = Tables::S3TCSC::g_singleColor5_3;
    }
  }
  else {
    puVar27 = Tables::S3TCSC::g_singleColor6_2_p;
    if (param_4 == 4) {
      puVar27 = Tables::S3TCSC::g_singleColor6_3_p;
    }
    puVar26 = Tables::S3TCSC::g_singleColor5_2_p;
    if (param_4 == 4) {
      puVar26 = Tables::S3TCSC::g_singleColor5_3_p;
    }
  }
  local_200 = 0;
  puVar25 = local_168 + 0x18;
LAB_001003b0:
  iVar14 = 0;
  lVar16 = local_200;
  do {
    lVar21 = (ulong)*(ushort *)((long)local_198 + lVar16) * 4;
    lVar15 = lVar16;
    if (iVar14 != 1) {
      pbVar22 = puVar26 + lVar21;
      *(ushort *)((long)local_108 + lVar16) = (ushort)*pbVar22;
      *(ushort *)((long)local_d8 + lVar16) = (ushort)pbVar22[1];
      bVar3 = pbVar22[3];
      *(ushort *)((long)local_168 + lVar16) = (ushort)pbVar22[2];
      *(ushort *)((long)puVar25 + lVar16) = (ushort)bVar3;
      if (iVar14 == 2) break;
      lVar15 = lVar16 + 0x10;
      lVar21 = (ulong)*(ushort *)((long)local_188 + lVar16) << 2;
    }
    pbVar22 = puVar27 + lVar21;
    *(ushort *)((long)local_108 + lVar15) = (ushort)*pbVar22;
    *(ushort *)((long)local_d8 + lVar15) = (ushort)pbVar22[1];
    *(ushort *)((long)local_168 + lVar15) = (ushort)pbVar22[2];
    *(ushort *)((long)puVar25 + lVar15) = (ushort)pbVar22[3];
    lVar16 = lVar15 + 0x10;
    iVar14 = 2;
  } while( true );
  local_200 = local_200 + 2;
  if (local_200 == 0x10) {
    if ((param_1 & 0x100) == 0) {
      auVar49 = (undefined1  [16])0x0;
      auVar53._0_12_ = ZEXT812(0);
      auVar53._12_4_ = 0.0;
      do {
        lVar16 = 0;
        pfVar23 = (float *)&local_1d8;
        auVar31 = auVar49;
        auVar32 = auVar53;
        do {
          pVVar19 = param_2 + lVar16;
          sVar28 = *(short *)((long)local_168 + lVar16) - *(short *)pVVar19;
          sVar33 = *(short *)((long)local_168 + lVar16 + 2) - *(short *)(pVVar19 + 2);
          sVar34 = *(short *)((long)local_168 + lVar16 + 4) - *(short *)(pVVar19 + 4);
          sVar36 = *(short *)((long)local_168 + lVar16 + 6) - *(short *)(pVVar19 + 6);
          sVar37 = *(short *)((long)local_168 + lVar16 + 8) - *(short *)(pVVar19 + 8);
          sVar40 = *(short *)((long)local_168 + lVar16 + 10) - *(short *)(pVVar19 + 10);
          sVar41 = *(short *)((long)local_168 + lVar16 + 0xc) - *(short *)(pVVar19 + 0xc);
          sVar43 = *(short *)((long)local_168 + lVar16 + 0xe) - *(short *)(pVVar19 + 0xe);
          lVar16 = lVar16 + 0x10;
          fVar2 = *pfVar23;
          sVar36 = sVar36 * sVar36;
          uVar38 = sVar37 * sVar37;
          auVar10._2_2_ = uVar38;
          auVar10._0_2_ = sVar36;
          auVar10._4_8_ = 0;
          auVar5._12_2_ = sVar36;
          auVar5._0_12_ = auVar10 << 0x30;
          uVar11 = CONCAT44(auVar5._10_4_,CONCAT22(sVar34 * sVar34,sVar36));
          auVar9._6_8_ = 0;
          auVar9._0_6_ = (uint6)((ulong)uVar11 >> 0x10);
          auVar53._0_4_ = auVar32._0_4_ + (float)(ushort)(sVar28 * sVar28) * fVar2;
          auVar53._4_4_ =
               auVar32._4_4_ +
               (float)(int)CONCAT82(SUB148(auVar9 << 0x40,6),sVar33 * sVar33) * fVar2;
          auVar53._8_4_ = auVar32._8_4_ + (float)(int)((ulong)uVar11 >> 0x10) * fVar2;
          auVar53._12_4_ = auVar32._12_4_ + (float)(auVar5._10_4_ >> 0x10) * fVar2;
          auVar49._0_4_ = auVar31._0_4_ + fVar2 * (float)uVar38;
          auVar49._4_4_ = auVar31._4_4_ + fVar2 * (float)(ushort)(sVar40 * sVar40);
          auVar49._8_4_ = auVar31._8_4_ + fVar2 * (float)(ushort)(sVar41 * sVar41);
          auVar49._12_4_ = auVar31._12_4_ + fVar2 * (float)(ushort)(sVar43 * sVar43);
          pfVar23 = pfVar23 + 1;
          auVar31 = auVar49;
          auVar32 = auVar53;
        } while (lVar16 != 0x30);
        param_2 = param_2 + 0x40;
      } while (param_2 != pVVar1);
    }
    else {
      pfVar23 = local_a8;
      do {
        uVar38 = *puVar25;
        uVar6 = puVar25[1];
        auVar12._10_2_ = puVar25[2];
        auVar12._0_10_ = (unkuint10)0;
        pfVar24 = pfVar23 + 8;
        uVar7 = puVar25[4];
        uVar8 = puVar25[5];
        auVar30._0_10_ = (unkuint10)CONCAT24(uVar8,(uint)uVar7) << 0x10;
        auVar30._10_2_ = puVar25[6];
        auVar31._12_2_ = 0;
        auVar31._0_12_ = auVar30;
        auVar31._14_2_ = puVar25[7];
        puVar25 = puVar25 + 8;
        *pfVar23 = (float)(~_LC5 & (uint)(float)(int)(short)uVar38) * _LC7;
        pfVar23[1] = (float)(~_LC5 & (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar12._8_4_,uVar6)) <<
                                                          0x30,4) >> 0x10)) * _LC7;
        pfVar23[2] = (float)(~_LC5 & (uint)(float)(auVar12._8_4_ >> 0x10)) * _LC7;
        pfVar23[3] = _LC7 * 0.0;
        pfVar23[4] = (float)(~_LC5 & (uint)(float)((int)auVar30._0_10_ >> 0x10)) * _LC7;
        pfVar23[5] = (float)(~_LC5 & (uint)(float)(int)((int6)CONCAT24(uVar8,(uint)uVar7) >> 0x20))
                     * _LC7;
        pfVar23[6] = (float)(~_LC5 & (uint)(float)(auVar30._8_4_ >> 0x10)) * _LC7;
        pfVar23[7] = (float)(~_LC5 & (uint)(float)(auVar31._12_4_ >> 0x10)) * _LC7;
        pfVar23 = pfVar24;
      } while (local_a8 + 0x18 != pfVar24);
      auVar49 = (undefined1  [16])0x0;
      auVar53._0_12_ = ZEXT812(0);
      auVar53._12_4_ = 0.0;
      do {
        lVar16 = 0;
        pfVar23 = (float *)&local_1d8;
        auVar31 = auVar49;
        auVar32 = auVar53;
        do {
          pVVar19 = param_2 + lVar16;
          auVar13._10_2_ = *(short *)((long)local_168 + lVar16 + 4) - *(short *)(pVVar19 + 4);
          auVar13._0_10_ = (unkuint10)0;
          uVar4 = CONCAT24(*(short *)((long)local_168 + lVar16 + 10) - *(short *)(pVVar19 + 10),
                           (uint)(ushort)(*(short *)((long)local_168 + lVar16 + 8) -
                                         *(short *)(pVVar19 + 8)));
          auVar50._0_10_ = (unkuint10)uVar4 << 0x10;
          auVar50._10_2_ = *(short *)((long)local_168 + lVar16 + 0xc) - *(short *)(pVVar19 + 0xc);
          auVar52._12_2_ = 0;
          auVar52._0_12_ = auVar50;
          auVar52._14_2_ = *(short *)((long)local_168 + lVar16 + 0xe) - *(short *)(pVVar19 + 0xe);
          lVar15 = lVar16 * 2;
          fVar44 = (float)(~_LC5 & (uint)(float)(int)(short)(*(short *)((long)local_168 + lVar16) -
                                                            *(short *)pVVar19)) +
                   *(float *)((long)local_a8 + lVar15);
          fVar46 = (float)(~_LC5 & (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar13._8_4_,
                                                                         *(short *)((long)local_168
                                                                                   + lVar16 + 2) -
                                                                         *(short *)(pVVar19 + 2)))
                                                        << 0x30,4) >> 0x10)) +
                   *(float *)((long)local_a8 + lVar15 + 4);
          fVar47 = (float)(~_LC5 & (uint)(float)(auVar13._8_4_ >> 0x10)) +
                   *(float *)((long)local_a8 + lVar15 + 8);
          fVar48 = *(float *)((long)local_a8 + lVar15 + 0xc) + 0.0;
          lVar15 = lVar16 * 2;
          fVar29 = (float)(~_LC5 & (uint)(float)((int)auVar50._0_10_ >> 0x10)) +
                   *(float *)((long)local_a8 + lVar15 + 0x10);
          fVar35 = (float)(~_LC5 & (uint)(float)(int)((int6)uVar4 >> 0x20)) +
                   *(float *)((long)local_a8 + lVar15 + 0x14);
          fVar39 = (float)(~_LC5 & (uint)(float)(auVar50._8_4_ >> 0x10)) +
                   *(float *)((long)local_a8 + lVar15 + 0x18);
          fVar42 = (float)(~_LC5 & (uint)(float)(auVar52._12_4_ >> 0x10)) +
                   *(float *)((long)local_a8 + lVar15 + 0x1c);
          lVar16 = lVar16 + 0x10;
          fVar2 = *pfVar23;
          auVar53._0_4_ = auVar32._0_4_ + fVar44 * fVar44 * fVar2;
          auVar53._4_4_ = auVar32._4_4_ + fVar46 * fVar46 * fVar2;
          auVar53._8_4_ = auVar32._8_4_ + fVar47 * fVar47 * fVar2;
          auVar53._12_4_ = auVar32._12_4_ + fVar48 * fVar48 * fVar2;
          auVar49._0_4_ = auVar31._0_4_ + fVar29 * fVar29 * fVar2;
          auVar49._4_4_ = auVar31._4_4_ + fVar35 * fVar35 * fVar2;
          auVar49._8_4_ = auVar31._8_4_ + fVar39 * fVar39 * fVar2;
          auVar49._12_4_ = auVar31._12_4_ + fVar42 * fVar42 * fVar2;
          pfVar23 = pfVar23 + 1;
          auVar31 = auVar49;
          auVar32 = auVar53;
        } while (lVar16 != 0x30);
        param_2 = param_2 + 0x40;
      } while (pVVar1 != param_2);
    }
    auVar31 = *(undefined1 (*) [16])param_6;
    auVar32 = *(undefined1 (*) [16])(param_6 + 0x10);
    auVar51._4_4_ = -(uint)(auVar53._4_4_ < auVar31._4_4_);
    auVar51._0_4_ = -(uint)(auVar53._0_4_ < auVar31._0_4_);
    auVar51._8_4_ = -(uint)(auVar53._8_4_ < auVar31._8_4_);
    auVar51._12_4_ = -(uint)(auVar53._12_4_ < auVar31._12_4_);
    auVar45._4_4_ = -(uint)(auVar49._4_4_ < auVar32._4_4_);
    auVar45._0_4_ = -(uint)(auVar49._0_4_ < auVar32._0_4_);
    auVar45._8_4_ = -(uint)(auVar49._8_4_ < auVar32._8_4_);
    auVar45._12_4_ = -(uint)(auVar49._12_4_ < auVar32._12_4_);
    auVar52 = packssdw(auVar51,auVar45);
    if ((((((((((((((((auVar52 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                     (auVar52 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar52 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar52 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar52 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar52 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar52 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar52 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar52 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar52 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar52 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar52 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar52 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar52 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar52 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) || auVar52[0xf] < '\0')
    {
      auVar49 = minps(auVar32,auVar49);
      auVar53 = minps(auVar31,auVar53);
      lVar16 = 0;
      *(undefined1 (*) [16])param_6 = auVar53;
      *(undefined1 (*) [16])(param_6 + 0x10) = auVar49;
      do {
        *(undefined1 (*) [16])(param_7 + lVar16) =
             *(undefined1 (*) [16])((long)local_108 + lVar16) & auVar52 |
             ~auVar52 & *(undefined1 (*) [16])(param_7 + lVar16);
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x30);
      do {
        *(undefined1 (*) [16])(param_7 + lVar16) =
             *(undefined1 (*) [16])((long)local_108 + lVar16) & auVar52 |
             ~auVar52 & *(undefined1 (*) [16])(param_7 + lVar16);
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != 0x60);
      auVar49 = __LC9 & auVar52;
      pVVar17 = param_8;
      do {
        pVVar18 = pVVar17 + 0x10;
        *(undefined1 (*) [16])pVVar17 = ~auVar52 & *(undefined1 (*) [16])pVVar17 | auVar49;
        pVVar17 = pVVar18;
      } while (pVVar18 != param_8 + 0x100);
      auVar32._0_4_ = CONCAT22((short)param_4,(short)param_4);
      auVar32._4_4_ = auVar32._0_4_;
      auVar32._8_4_ = auVar32._0_4_;
      auVar32._12_4_ = auVar32._0_4_;
      *(undefined1 (*) [16])param_9 = auVar52 & auVar32 | ~auVar52 & *(undefined1 (*) [16])param_9;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_001003b0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::PackExplicitAlpha(unsigned int, cvtt::PixelBlockU8 const*, int,
   unsigned char*, unsigned long) */

void cvtt::Internal::S3TCComputer::PackExplicitAlpha
               (uint param_1,PixelBlockU8 *param_2,int param_3,uchar *param_4,ulong param_5)

{
  PixelBlockU8 PVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [14];
  undefined1 (*pauVar13) [16];
  byte *pbVar14;
  int iVar15;
  int iVar16;
  PixelBlockU8 *pPVar17;
  float *pfVar18;
  float *pfVar19;
  PixelBlockU8 *pPVar20;
  float *pfVar21;
  long lVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  byte local_328 [16];
  undefined1 local_318 [240];
  float local_228 [130];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar21 = local_228;
  pPVar17 = param_2 + param_3;
  pauVar13 = (undefined1 (*) [16])local_328;
  pPVar20 = pPVar17;
  pfVar18 = pfVar21;
  do {
    do {
      PVar1 = *pPVar17;
      pbVar14 = *pauVar13;
      pPVar17 = pPVar17 + 0x40;
      *(ushort *)*pauVar13 = (ushort)(byte)PVar1;
      pauVar13 = (undefined1 (*) [16])(pbVar14 + 2);
    } while ((undefined1 (*) [16])local_318 != (undefined1 (*) [16])(pbVar14 + 2));
    pfVar19 = pfVar18 + 8;
    pPVar17 = pPVar20 + 4;
    auVar4._10_2_ = 0;
    auVar4._0_10_ = local_328._0_10_;
    auVar4._12_2_ = local_328._6_2_;
    auVar5._8_2_ = local_328._4_2_;
    auVar5._0_8_ = local_328._0_8_;
    auVar5._10_4_ = auVar4._10_4_;
    auVar12._6_8_ = 0;
    auVar12._0_6_ = auVar5._8_6_;
    pfVar18[4] = (float)local_328._8_2_;
    pfVar18[5] = (float)local_328._10_2_;
    pfVar18[6] = (float)local_328._12_2_;
    pfVar18[7] = (float)local_328._14_2_;
    *pfVar18 = (float)local_328._0_2_;
    pfVar18[1] = (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),local_328._2_2_);
    pfVar18[2] = (float)auVar5._8_4_;
    pfVar18[3] = (float)(auVar4._10_4_ >> 0x10);
    pauVar13 = (undefined1 (*) [16])local_328;
    pPVar20 = pPVar17;
    pfVar18 = pfVar19;
  } while (local_228 + 0x80 != pfVar19);
  auVar26._0_4_ = _LC13 & -(uint)(__LC17 == 0.0);
  auVar26._4_4_ = _LC13 & -(uint)(_UNK_00107064 == 0.0);
  auVar26._8_4_ = _LC13 & -(uint)(_UNK_00107068 == 0.0);
  auVar26._12_4_ = _LC13 & -(uint)(_UNK_0010706c == 0.0);
  auVar30._0_4_ = ~-(uint)(__LC17 == 0.0) & (uint)__LC17;
  auVar30._4_4_ = ~-(uint)(_UNK_00107064 == 0.0) & (uint)_UNK_00107064;
  auVar30._8_4_ = ~-(uint)(_UNK_00107068 == 0.0) & (uint)_UNK_00107068;
  auVar30._12_4_ = ~-(uint)(_UNK_0010706c == 0.0) & (uint)_UNK_0010706c;
  auVar29._4_4_ = _LC15;
  auVar29._0_4_ = _LC15;
  auVar29._8_4_ = _LC15;
  auVar29._12_4_ = _LC15;
  auVar30 = divps(auVar29,auVar30 | auVar26);
  fVar28 = auVar30._0_4_ * _LC22;
  fVar31 = auVar30._4_4_ * _UNK_00107054;
  fVar32 = auVar30._8_4_ * _UNK_00107058;
  fVar33 = auVar30._12_4_ * _UNK_0010705c;
  do {
    fVar6 = *pfVar21;
    pfVar19 = pfVar21 + 1;
    pfVar7 = pfVar21 + 2;
    pfVar8 = pfVar21 + 3;
    pfVar18 = pfVar21 + 4;
    pfVar9 = pfVar21 + 5;
    pfVar10 = pfVar21 + 6;
    pfVar11 = pfVar21 + 7;
    pfVar21 = pfVar21 + 8;
    auVar23._0_4_ = fVar6 * fVar28;
    auVar23._4_4_ = *pfVar19 * fVar31;
    auVar23._8_4_ = *pfVar7 * fVar32;
    auVar23._12_4_ = *pfVar8 * fVar33;
    auVar25._0_4_ = *pfVar18 * fVar28;
    auVar25._4_4_ = *pfVar9 * fVar31;
    auVar25._8_4_ = *pfVar10 * fVar32;
    auVar25._12_4_ = *pfVar11 * fVar33;
    auVar2._4_4_ = _LC15;
    auVar2._0_4_ = _LC15;
    auVar2._8_4_ = _LC15;
    auVar2._12_4_ = _LC15;
    auVar30 = minps(auVar23,auVar2);
    auVar3._4_4_ = _LC15;
    auVar3._0_4_ = _LC15;
    auVar3._8_4_ = _LC15;
    auVar3._12_4_ = _LC15;
    auVar26 = minps(auVar25,auVar3);
    auVar30 = maxps(auVar30,(undefined1  [16])0x0);
    auVar26 = maxps(auVar26,(undefined1  [16])0x0);
    auVar24._0_4_ = (int)auVar30._0_4_;
    auVar24._4_4_ = (int)auVar30._4_4_;
    auVar24._8_4_ = (int)auVar30._8_4_;
    auVar24._12_4_ = (int)auVar30._12_4_;
    auVar27._0_4_ = (int)auVar26._0_4_;
    auVar27._4_4_ = (int)auVar26._4_4_;
    auVar27._8_4_ = (int)auVar26._8_4_;
    auVar27._12_4_ = (int)auVar26._12_4_;
    auVar30 = packssdw(auVar24,auVar27);
    *pauVar13 = auVar30;
    pauVar13 = pauVar13 + 1;
  } while (local_228 + 0x80 != pfVar21);
  lVar22 = 0;
  do {
    pbVar14 = *(undefined1 (*) [16])local_328 + lVar22;
    iVar15 = 0;
    do {
      iVar16 = iVar15 + 2;
      param_4[iVar15 >> 1] = pbVar14[0x10] << 4 | *pbVar14;
      pbVar14 = pbVar14 + 0x20;
      iVar15 = iVar16;
    } while (iVar16 != 0x10);
    lVar22 = lVar22 + 2;
    param_4 = param_4 + param_5;
  } while (lVar22 != 0x10);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::TestEndpoints(unsigned int, cvtt::ParallelMath::VInt16<2> const (*)
   [4], cvtt::ParallelMath::Float const (*) [4], cvtt::ParallelMath::Float const (*) [4],
   cvtt::ParallelMath::VInt16<2> const (*) [3], int, float const*, cvtt::ParallelMath::Float&,
   cvtt::ParallelMath::VInt16<2> (*) [3], cvtt::ParallelMath::VInt16<2>*,
   cvtt::ParallelMath::VInt16<2>&, cvtt::Internal::EndpointRefiner<3>*,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::S3TCComputer::TestEndpoints
               (uint param_1,VInt16<2> *param_2,Float *param_3,Float *param_4,VInt16<2> *param_5,
               int param_6,float *param_7,Float *param_8,VInt16<2> *param_9,VInt16 *param_10,
               VInt16 *param_11,EndpointRefiner *param_12,RoundTowardNearestForScope *param_13)

{
  IndexSelector<3> *pIVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint6 uVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [12];
  undefined8 uVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  VInt16<2> *pVVar53;
  VInt16 *pVVar54;
  long lVar55;
  int iVar56;
  float *pfVar57;
  VInt16<2> *extraout_RDX;
  EndpointRefiner *pEVar58;
  EndpointRefiner *pEVar59;
  IndexSelector<3> *pIVar60;
  int *piVar61;
  Float *pFVar62;
  ushort *puVar63;
  IndexSelector<3> *pIVar64;
  long lVar65;
  long in_FS_OFFSET;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  ushort uVar74;
  short sVar75;
  float fVar76;
  ushort uVar84;
  float fVar86;
  ushort uVar89;
  ushort uVar91;
  ushort uVar93;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  ushort uVar82;
  short sVar83;
  short sVar85;
  ushort uVar87;
  short sVar88;
  short sVar90;
  short sVar92;
  short sVar94;
  ushort uVar95;
  short sVar96;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar97;
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  undefined1 auVar102 [12];
  undefined1 auVar103 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  undefined8 local_3d8;
  float local_3d0;
  ushort local_3c8 [24];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338 [24];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  IndexSelector<3> local_278 [256];
  IndexSelector<3> local_178 [2];
  undefined2 auStack_176 [23];
  IndexSelector<3> local_148 [2];
  undefined2 auStack_146 [71];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_54;
  long local_40;
  undefined1 auVar104 [16];
  
  pVVar54 = (VInt16 *)&local_398;
  fVar76 = (float)*(undefined8 *)param_7;
  fVar86 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
  fVar76 = fVar76 * fVar76;
  fVar86 = fVar86 * fVar86;
  local_3d8 = CONCAT44(fVar86,fVar76);
  fVar97 = param_7[2] * param_7[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_398 = *(undefined8 *)param_5;
  uStack_390 = *(undefined8 *)(param_5 + 8);
  local_388 = *(undefined8 *)(param_5 + 0x10);
  uStack_380 = *(undefined8 *)(param_5 + 0x18);
  local_378 = *(undefined8 *)(param_5 + 0x20);
  uStack_370 = *(undefined8 *)(param_5 + 0x28);
  local_368 = *(undefined8 *)(param_5 + 0x30);
  uStack_360 = *(undefined8 *)(param_5 + 0x38);
  local_358 = *(undefined8 *)(param_5 + 0x40);
  uStack_350 = *(undefined8 *)(param_5 + 0x48);
  local_348 = *(undefined8 *)(param_5 + 0x50);
  uStack_340 = *(undefined8 *)(param_5 + 0x58);
  iVar56 = param_6;
  local_3d0 = fVar97;
  QuantizeTo565(pVVar54);
  QuantizeTo565((VInt16 *)&local_368);
  IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
            (local_178,param_7,extraout_RDX,(VInt16<2> *)pVVar54,iVar56);
  uVar66 = _LC5;
  sVar52 = _UNK_0010709e;
  sVar51 = _UNK_0010709c;
  sVar50 = _UNK_0010709a;
  sVar49 = _UNK_00107098;
  sVar48 = _UNK_00107096;
  sVar47 = _UNK_00107094;
  sVar46 = _UNK_00107092;
  sVar45 = __LC20;
  sVar44 = _UNK_0010708e;
  sVar43 = _UNK_0010708c;
  sVar42 = _UNK_0010708a;
  sVar41 = _UNK_00107088;
  sVar40 = _UNK_00107086;
  sVar39 = _UNK_00107084;
  sVar38 = _UNK_00107082;
  sVar37 = __LC19;
  pVVar53 = extraout_RDX;
  pfVar57 = local_338;
  do {
    sVar9 = *(short *)((VInt16 *)pVVar53 + 2);
    pVVar54 = (VInt16 *)pVVar53 + 0x10;
    sVar10 = *(short *)((VInt16 *)pVVar53 + 0x32);
    auVar35._10_2_ = *(short *)((VInt16 *)pVVar53 + 4) - *(short *)((VInt16 *)pVVar53 + 0x34);
    auVar35._0_10_ = (unkuint10)0;
    uVar5 = CONCAT24(*(short *)((VInt16 *)pVVar53 + 10) - *(short *)((VInt16 *)pVVar53 + 0x3a),
                     (uint)(ushort)(*(short *)((VInt16 *)pVVar53 + 8) -
                                   *(short *)((VInt16 *)pVVar53 + 0x38)));
    auVar98._0_10_ = (unkuint10)uVar5 << 0x10;
    auVar98._10_2_ = *(short *)((VInt16 *)pVVar53 + 0xc) - *(short *)((VInt16 *)pVVar53 + 0x3c);
    auVar78._12_2_ = 0;
    auVar78._0_12_ = auVar98;
    auVar78._14_2_ = *(short *)((VInt16 *)pVVar53 + 0xe) - *(short *)((VInt16 *)pVVar53 + 0x3e);
    *pfVar57 = (float)(~_LC5 & (uint)(float)(int)(short)(*(short *)pVVar53 -
                                                        *(short *)((VInt16 *)pVVar53 + 0x30))) *
               _LC7;
    pfVar57[1] = (float)(~_LC5 & (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar35._8_4_,sVar9 - sVar10)
                                                             ) << 0x30,4) >> 0x10)) * _LC7;
    pfVar57[2] = (float)(~_LC5 & (uint)(float)(auVar35._8_4_ >> 0x10)) * _LC7;
    pfVar57[3] = _LC7 * 0.0;
    pfVar57[4] = (float)(~_LC5 & (uint)(float)((int)auVar98._0_10_ >> 0x10)) * _LC7;
    pfVar57[5] = (float)(~_LC5 & (uint)(float)(int)((int6)uVar5 >> 0x20)) * _LC7;
    pfVar57[6] = (float)(~_LC5 & (uint)(float)(auVar98._8_4_ >> 0x10)) * _LC7;
    pfVar57[7] = (float)(~_LC5 & (uint)(float)(auVar78._12_4_ >> 0x10)) * _LC7;
    pVVar53 = (VInt16<2> *)pVVar54;
    pfVar57 = pfVar57 + 8;
  } while ((VInt16 *)&local_368 != pVVar54);
  local_2d8 = (undefined1  [16])0x0;
  lVar65 = 0;
  local_2c8 = (undefined1  [16])0x0;
  lVar55 = (long)local_58 * 0x10;
  local_2b8 = (undefined1  [16])0x0;
  fVar113 = 0.0;
  fVar114 = 0.0;
  fVar115 = 0.0;
  fVar116 = 0.0;
  local_2a8 = (undefined1  [16])0x0;
  fVar117 = 0.0;
  fVar118 = 0.0;
  fVar119 = 0.0;
  fVar120 = 0.0;
  local_298 = (undefined1  [16])0x0;
  local_288 = (undefined1  [16])0x0;
  sVar9 = *(short *)(&g_weightReciprocals + (long)local_58 * 2);
  sVar10 = *(short *)((long)&g_weightReciprocals + lVar55 + 2);
  sVar11 = *(short *)((long)&g_weightReciprocals + lVar55 + 4);
  sVar12 = *(short *)((long)&g_weightReciprocals + lVar55 + 6);
  sVar13 = *(short *)(cvtt::Internal::BCCommon::TweakRoundsForRange + lVar55);
  sVar14 = *(short *)(lVar55 + 0x108012);
  sVar15 = *(short *)(lVar55 + 0x108014);
  sVar16 = *(short *)(lVar55 + 0x108016);
  pIVar64 = local_278;
  do {
    local_4b8 = (float)auStack_146._46_8_;
    fStack_4b4 = SUB84(auStack_146._46_8_,4);
    fStack_4b0 = (float)auStack_146._54_8_;
    fStack_4ac = SUB84(auStack_146._54_8_,4);
    local_428 = (float)auStack_146._78_8_;
    fStack_424 = SUB84(auStack_146._78_8_,4);
    fStack_420 = (float)auStack_146._86_8_;
    fStack_41c = SUB84(auStack_146._86_8_,4);
    local_448 = (float)local_98;
    fStack_444 = (float)((ulong)local_98 >> 0x20);
    fStack_440 = (float)uStack_90;
    fStack_43c = (float)((ulong)uStack_90 >> 0x20);
    local_438 = (float)auStack_146._94_8_;
    fStack_434 = SUB84(auStack_146._94_8_,4);
    fStack_430 = (float)auStack_146._102_8_;
    fStack_42c = SUB84(auStack_146._102_8_,4);
    local_458 = (float)local_88;
    fStack_454 = (float)((ulong)local_88 >> 0x20);
    fStack_450 = (float)uStack_80;
    fStack_44c = (float)((ulong)uStack_80 >> 0x20);
    local_498 = (float)auStack_146._110_8_;
    fStack_494 = SUB84(auStack_146._110_8_,4);
    fStack_490 = (float)auStack_146._118_8_;
    fStack_48c = SUB84(auStack_146._118_8_,4);
    local_478 = (float)local_78;
    fStack_474 = (float)((ulong)local_78 >> 0x20);
    fStack_470 = (float)uStack_70;
    fStack_46c = (float)((ulong)uStack_70 >> 0x20);
    auVar77._0_4_ =
         (*(float *)param_3 - local_4b8) * local_b8 +
         (*(float *)(param_3 + 0x20) - local_428) * local_448 +
         (*(float *)(param_3 + 0x40) - local_498) * local_478;
    auVar77._4_4_ =
         (*(float *)(param_3 + 4) - fStack_4b4) * fStack_b4 +
         (*(float *)(param_3 + 0x24) - fStack_424) * fStack_444 +
         (*(float *)(param_3 + 0x44) - fStack_494) * fStack_474;
    auVar77._8_4_ =
         (*(float *)(param_3 + 8) - fStack_4b0) * fStack_b0 +
         (*(float *)(param_3 + 0x28) - fStack_420) * fStack_440 +
         (*(float *)(param_3 + 0x48) - fStack_490) * fStack_470;
    auVar77._12_4_ =
         (*(float *)(param_3 + 0xc) - fStack_4ac) * fStack_ac +
         (*(float *)(param_3 + 0x2c) - fStack_41c) * fStack_43c +
         (*(float *)(param_3 + 0x4c) - fStack_48c) * fStack_46c;
    local_4a8 = (float)auStack_146._62_8_;
    fStack_4a4 = SUB84(auStack_146._62_8_,4);
    fStack_4a0 = (float)auStack_146._70_8_;
    fStack_49c = SUB84(auStack_146._70_8_,4);
    auVar3._4_4_ = local_54;
    auVar3._0_4_ = local_54;
    auVar3._8_4_ = local_54;
    auVar3._12_4_ = local_54;
    auVar78 = minps(auVar77,auVar3);
    auVar78 = maxps(auVar78,ZEXT816(0));
    local_488 = (float)auStack_146._126_8_;
    fStack_484 = SUB84(auStack_146._126_8_,4);
    fStack_480 = (float)auStack_146._134_8_;
    fStack_47c = SUB84(auStack_146._134_8_,4);
    local_468 = (float)local_68;
    fStack_464 = (float)((ulong)local_68 >> 0x20);
    fStack_460 = (float)uStack_60;
    fStack_45c = (float)((ulong)uStack_60 >> 0x20);
    auVar79._0_4_ = (int)auVar78._0_4_;
    auVar79._4_4_ = (int)auVar78._4_4_;
    auVar79._8_4_ = (int)auVar78._8_4_;
    auVar79._12_4_ = (int)auVar78._12_4_;
    auVar99._0_4_ =
         (*(float *)(param_3 + 0x10) - local_4a8) * local_a8 +
         (*(float *)(param_3 + 0x30) - local_438) * local_458 +
         (*(float *)(param_3 + 0x50) - local_488) * local_468;
    auVar99._4_4_ =
         (*(float *)(param_3 + 0x14) - fStack_4a4) * fStack_a4 +
         (*(float *)(param_3 + 0x34) - fStack_434) * fStack_454 +
         (*(float *)(param_3 + 0x54) - fStack_484) * fStack_464;
    auVar99._8_4_ =
         (*(float *)(param_3 + 0x18) - fStack_4a0) * fStack_a0 +
         (*(float *)(param_3 + 0x38) - fStack_430) * fStack_450 +
         (*(float *)(param_3 + 0x58) - fStack_480) * fStack_460;
    auVar99._12_4_ =
         (*(float *)(param_3 + 0x1c) - fStack_49c) * fStack_9c +
         (*(float *)(param_3 + 0x3c) - fStack_42c) * fStack_44c +
         (*(float *)(param_3 + 0x5c) - fStack_47c) * fStack_45c;
    auVar4._4_4_ = local_54;
    auVar4._0_4_ = local_54;
    auVar4._8_4_ = local_54;
    auVar4._12_4_ = local_54;
    auVar78 = minps(auVar99,auVar4);
    auVar78 = maxps(auVar78,ZEXT816(0));
    auVar100._0_4_ = (int)auVar78._0_4_;
    auVar100._4_4_ = (int)auVar78._4_4_;
    auVar100._8_4_ = (int)auVar78._8_4_;
    auVar100._12_4_ = (int)auVar78._12_4_;
    auVar78 = packssdw(auVar79,auVar100);
    *(undefined1 (*) [16])pIVar64 = auVar78;
    if (param_12 != (EndpointRefiner *)0x0) {
      pFVar62 = param_4 + lVar65;
      fVar108 = *(float *)(param_12 + 0x124);
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar78._0_10_;
      auVar6._12_2_ = auVar78._6_2_;
      auVar8._8_2_ = auVar78._4_2_;
      auVar8._0_8_ = auVar78._0_8_;
      auVar8._10_4_ = auVar6._10_4_;
      auVar31._6_8_ = 0;
      auVar31._0_6_ = auVar8._8_6_;
      fVar109 = (float)auVar78._0_2_ * fVar108;
      fVar110 = (float)(int)CONCAT82(SUB148(auVar31 << 0x40,6),auVar78._2_2_) * fVar108;
      fVar111 = (float)auVar8._8_4_ * fVar108;
      fVar112 = (float)(auVar6._10_4_ >> 0x10) * fVar108;
      fVar105 = (float)auVar78._8_2_ * fVar108;
      fVar106 = (float)auVar78._10_2_ * fVar108;
      fVar107 = (float)auVar78._12_2_ * fVar108;
      fVar108 = (float)auVar78._14_2_ * fVar108;
      pEVar58 = param_12;
      do {
        fVar101 = *(float *)pFVar62;
        fVar17 = *(float *)(pFVar62 + 4);
        fVar18 = *(float *)(pFVar62 + 8);
        fVar19 = *(float *)(pFVar62 + 0xc);
        fVar20 = *(float *)(pFVar62 + 0x10);
        fVar21 = *(float *)(pFVar62 + 0x14);
        fVar22 = *(float *)(pFVar62 + 0x18);
        fVar23 = *(float *)(pFVar62 + 0x1c);
        pEVar59 = pEVar58 + 0x20;
        pFVar62 = pFVar62 + 0x20;
        *(float *)(pEVar58 + 0x70) = fVar20 + *(float *)(pEVar58 + 0x70);
        *(float *)(pEVar58 + 0x74) = fVar21 + *(float *)(pEVar58 + 0x74);
        *(float *)(pEVar58 + 0x78) = fVar22 + *(float *)(pEVar58 + 0x78);
        *(float *)(pEVar58 + 0x7c) = fVar23 + *(float *)(pEVar58 + 0x7c);
        *(float *)(pEVar58 + 0x10) = fVar105 * fVar20 + *(float *)(pEVar58 + 0x10);
        *(float *)(pEVar58 + 0x14) = fVar106 * fVar21 + *(float *)(pEVar58 + 0x14);
        *(float *)(pEVar58 + 0x18) = fVar107 * fVar22 + *(float *)(pEVar58 + 0x18);
        *(float *)(pEVar58 + 0x1c) = fVar108 * fVar23 + *(float *)(pEVar58 + 0x1c);
        *(float *)pEVar58 = fVar109 * fVar101 + *(float *)pEVar58;
        *(float *)(pEVar58 + 4) = fVar110 * fVar17 + *(float *)(pEVar58 + 4);
        *(float *)(pEVar58 + 8) = fVar111 * fVar18 + *(float *)(pEVar58 + 8);
        *(float *)(pEVar58 + 0xc) = fVar112 * fVar19 + *(float *)(pEVar58 + 0xc);
        *(float *)(pEVar58 + 0x60) = fVar101 + *(float *)(pEVar58 + 0x60);
        *(float *)(pEVar58 + 100) = fVar17 + *(float *)(pEVar58 + 100);
        *(float *)(pEVar58 + 0x68) = fVar18 + *(float *)(pEVar58 + 0x68);
        *(float *)(pEVar58 + 0x6c) = fVar19 + *(float *)(pEVar58 + 0x6c);
        pEVar58 = pEVar59;
      } while (param_12 + 0x60 != pEVar59);
      *(int *)(param_12 + 0x120) = *(int *)(param_12 + 0x120) + 1;
      *(float *)(param_12 + 0xf0) = fVar105 + *(float *)(param_12 + 0xf0);
      *(float *)(param_12 + 0xf4) = fVar106 + *(float *)(param_12 + 0xf4);
      *(float *)(param_12 + 0xf8) = fVar107 + *(float *)(param_12 + 0xf8);
      *(float *)(param_12 + 0xfc) = fVar108 + *(float *)(param_12 + 0xfc);
      *(float *)(param_12 + 0xd0) = fVar105 * fVar105 + *(float *)(param_12 + 0xd0);
      *(float *)(param_12 + 0xd4) = fVar106 * fVar106 + *(float *)(param_12 + 0xd4);
      *(float *)(param_12 + 0xd8) = fVar107 * fVar107 + *(float *)(param_12 + 0xd8);
      *(float *)(param_12 + 0xdc) = fVar108 * fVar108 + *(float *)(param_12 + 0xdc);
      *(float *)(param_12 + 0xc0) = fVar109 * fVar109 + *(float *)(param_12 + 0xc0);
      *(float *)(param_12 + 0xc4) = fVar110 * fVar110 + *(float *)(param_12 + 0xc4);
      *(float *)(param_12 + 200) = fVar111 * fVar111 + *(float *)(param_12 + 200);
      *(float *)(param_12 + 0xcc) = fVar112 * fVar112 + *(float *)(param_12 + 0xcc);
      *(float *)(param_12 + 0xe0) = fVar109 + *(float *)(param_12 + 0xe0);
      *(float *)(param_12 + 0xe4) = fVar110 + *(float *)(param_12 + 0xe4);
      *(float *)(param_12 + 0xe8) = fVar111 + *(float *)(param_12 + 0xe8);
      *(float *)(param_12 + 0xec) = fVar112 + *(float *)(param_12 + 0xec);
    }
    uVar74 = (ushort)(auVar78._0_2_ * sVar9 + __LC18) >> 7;
    uVar82 = (ushort)(auVar78._2_2_ * sVar10 + _UNK_00107072) >> 7;
    uVar84 = (ushort)(auVar78._4_2_ * sVar11 + _UNK_00107074) >> 7;
    uVar87 = (ushort)(auVar78._6_2_ * sVar12 + _UNK_00107076) >> 7;
    uVar89 = (ushort)(auVar78._8_2_ * sVar13 + _UNK_00107078) >> 7;
    uVar91 = (ushort)(auVar78._10_2_ * sVar14 + _UNK_0010707a) >> 7;
    uVar93 = (ushort)(auVar78._12_2_ * sVar15 + _UNK_0010707c) >> 7;
    uVar95 = (ushort)(auVar78._14_2_ * sVar16 + _UNK_0010707e) >> 7;
    pIVar60 = local_178;
    puVar63 = local_3c8;
    do {
      sVar75 = *(short *)pIVar60;
      sVar83 = *(short *)(pIVar60 + 2);
      sVar85 = *(short *)(pIVar60 + 4);
      sVar88 = *(short *)(pIVar60 + 6);
      sVar90 = *(short *)(pIVar60 + 8);
      sVar92 = *(short *)(pIVar60 + 10);
      sVar94 = *(short *)(pIVar60 + 0xc);
      sVar96 = *(short *)(pIVar60 + 0xe);
      pIVar1 = pIVar60 + 0x30;
      sVar24 = *(short *)(pIVar60 + 0x32);
      sVar25 = *(short *)(pIVar60 + 0x34);
      sVar26 = *(short *)(pIVar60 + 0x36);
      sVar27 = *(short *)(pIVar60 + 0x38);
      sVar28 = *(short *)(pIVar60 + 0x3a);
      sVar29 = *(short *)(pIVar60 + 0x3c);
      sVar30 = *(short *)(pIVar60 + 0x3e);
      pIVar60 = pIVar60 + 0x10;
      *puVar63 = (ushort)(sVar75 * (sVar37 - uVar74) + *(short *)pIVar1 * uVar74 + sVar45) >> 8;
      puVar63[1] = (ushort)(sVar83 * (sVar38 - uVar82) + sVar24 * uVar82 + sVar46) >> 8;
      puVar63[2] = (ushort)(sVar85 * (sVar39 - uVar84) + sVar25 * uVar84 + sVar47) >> 8;
      puVar63[3] = (ushort)(sVar88 * (sVar40 - uVar87) + sVar26 * uVar87 + sVar48) >> 8;
      puVar63[4] = (ushort)(sVar90 * (sVar41 - uVar89) + sVar27 * uVar89 + sVar49) >> 8;
      puVar63[5] = (ushort)(sVar92 * (sVar42 - uVar91) + sVar28 * uVar91 + sVar50) >> 8;
      puVar63[6] = (ushort)(sVar94 * (sVar43 - uVar93) + sVar29 * uVar93 + sVar51) >> 8;
      puVar63[7] = (ushort)(sVar96 * (sVar44 - uVar95) + sVar30 * uVar95 + sVar52) >> 8;
      puVar63 = puVar63 + 8;
    } while (local_148 != pIVar60);
    lVar55 = 0;
    piVar61 = (int *)local_2d8;
    if ((param_1 & 0x100) == 0) {
      do {
        pVVar53 = param_2 + lVar55;
        sVar75 = *(short *)((long)local_3c8 + lVar55) - *(short *)pVVar53;
        sVar83 = *(short *)((long)local_3c8 + lVar55 + 2) - *(short *)(pVVar53 + 2);
        sVar85 = *(short *)((long)local_3c8 + lVar55 + 4) - *(short *)(pVVar53 + 4);
        sVar88 = *(short *)((long)local_3c8 + lVar55 + 6) - *(short *)(pVVar53 + 6);
        sVar90 = *(short *)((long)local_3c8 + lVar55 + 8) - *(short *)(pVVar53 + 8);
        sVar92 = *(short *)((long)local_3c8 + lVar55 + 10) - *(short *)(pVVar53 + 10);
        sVar94 = *(short *)((long)local_3c8 + lVar55 + 0xc) - *(short *)(pVVar53 + 0xc);
        sVar96 = *(short *)((long)local_3c8 + lVar55 + 0xe) - *(short *)(pVVar53 + 0xe);
        lVar55 = lVar55 + 0x10;
        sVar88 = sVar88 * sVar88;
        uVar74 = sVar90 * sVar90;
        auVar33._2_2_ = uVar74;
        auVar33._0_2_ = sVar88;
        auVar33._4_8_ = 0;
        auVar7._12_2_ = sVar88;
        auVar7._0_12_ = auVar33 << 0x30;
        uVar34 = CONCAT44(auVar7._10_4_,CONCAT22(sVar85 * sVar85,sVar88));
        auVar32._6_8_ = 0;
        auVar32._0_6_ = (uint6)((ulong)uVar34 >> 0x10);
        piVar61[4] = (uint)uVar74 + piVar61[4];
        piVar61[5] = (uint)(ushort)(sVar92 * sVar92) + piVar61[5];
        piVar61[6] = (uint)(ushort)(sVar94 * sVar94) + piVar61[6];
        piVar61[7] = (uint)(ushort)(sVar96 * sVar96) + piVar61[7];
        *piVar61 = (uint)(ushort)(sVar75 * sVar75) + *piVar61;
        piVar61[1] = (int)CONCAT82(SUB148(auVar32 << 0x40,6),sVar83 * sVar83) + piVar61[1];
        piVar61[2] = (int)((ulong)uVar34 >> 0x10) + piVar61[2];
        piVar61[3] = (auVar7._10_4_ >> 0x10) + piVar61[3];
        piVar61 = piVar61 + 8;
      } while (lVar55 != 0x30);
    }
    else {
      lVar55 = 0;
      pfVar57 = (float *)&local_3d8;
      do {
        pVVar53 = param_2 + lVar55;
        auVar36._10_2_ = *(short *)((long)local_3c8 + lVar55 + 4) - *(short *)(pVVar53 + 4);
        auVar36._0_10_ = (unkuint10)0;
        uVar5 = CONCAT24(*(short *)((long)local_3c8 + lVar55 + 10) - *(short *)(pVVar53 + 10),
                         (uint)(ushort)(*(short *)((long)local_3c8 + lVar55 + 8) -
                                       *(short *)(pVVar53 + 8)));
        auVar102._0_10_ = (unkuint10)uVar5 << 0x10;
        auVar102._10_2_ = *(short *)((long)local_3c8 + lVar55 + 0xc) - *(short *)(pVVar53 + 0xc);
        auVar104._12_2_ = 0;
        auVar104._0_12_ = auVar102;
        auVar104._14_2_ = *(short *)((long)local_3c8 + lVar55 + 0xe) - *(short *)(pVVar53 + 0xe);
        lVar2 = lVar55 * 2;
        fVar110 = (float)(~uVar66 &
                         (uint)(float)(int)(short)(*(short *)((long)local_3c8 + lVar55) -
                                                  *(short *)pVVar53)) +
                  *(float *)((long)local_338 + lVar2);
        fVar111 = (float)(~uVar66 &
                         (uint)(float)(SUB164(ZEXT616(CONCAT42(auVar36._8_4_,
                                                               *(short *)((long)local_3c8 +
                                                                         lVar55 + 2) -
                                                               *(short *)(pVVar53 + 2))) << 0x30,4)
                                      >> 0x10)) + *(float *)((long)local_338 + lVar2 + 4);
        fVar112 = (float)(~uVar66 & (uint)(float)(auVar36._8_4_ >> 0x10)) +
                  *(float *)((long)local_338 + lVar2 + 8);
        fVar101 = *(float *)((long)local_338 + lVar2 + 0xc) + 0.0;
        lVar2 = lVar55 * 2;
        fVar105 = (float)(~uVar66 & (uint)(float)((int)auVar102._0_10_ >> 0x10)) +
                  *(float *)((long)local_338 + lVar2 + 0x10);
        fVar106 = (float)(~uVar66 & (uint)(float)(int)((int6)uVar5 >> 0x20)) +
                  *(float *)((long)local_338 + lVar2 + 0x14);
        fVar107 = (float)(~uVar66 & (uint)(float)(auVar102._8_4_ >> 0x10)) +
                  *(float *)((long)local_338 + lVar2 + 0x18);
        fVar109 = (float)(~uVar66 & (uint)(float)(auVar104._12_4_ >> 0x10)) +
                  *(float *)((long)local_338 + lVar2 + 0x1c);
        fVar108 = *pfVar57;
        lVar55 = lVar55 + 0x10;
        fVar117 = fVar117 + fVar110 * fVar110 * fVar108;
        fVar118 = fVar118 + fVar111 * fVar111 * fVar108;
        fVar119 = fVar119 + fVar112 * fVar112 * fVar108;
        fVar120 = fVar120 + fVar101 * fVar101 * fVar108;
        fVar113 = fVar113 + fVar105 * fVar105 * fVar108;
        fVar114 = fVar114 + fVar106 * fVar106 * fVar108;
        fVar115 = fVar115 + fVar107 * fVar107 * fVar108;
        fVar116 = fVar116 + fVar109 * fVar109 * fVar108;
        pfVar57 = pfVar57 + 1;
      } while (lVar55 != 0x30);
    }
    pIVar64 = pIVar64 + 0x10;
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x40;
    lVar65 = lVar65 + 0x80;
  } while (local_178 != pIVar64);
  if ((param_1 & 0x100) == 0) {
    if ((param_1 & 0x200) == 0) {
      fVar117 = (float)(int)local_2d8._0_4_ * fVar76 + (float)(int)local_2b8._0_4_ * fVar86 +
                (float)(int)local_298._0_4_ * fVar97;
      fVar118 = (float)(int)local_2d8._4_4_ * fVar76 + (float)(int)local_2b8._4_4_ * fVar86 +
                (float)(int)local_298._4_4_ * fVar97;
      fVar119 = (float)(int)local_2d8._8_4_ * fVar76 + (float)(int)local_2b8._8_4_ * fVar86 +
                (float)(int)local_298._8_4_ * fVar97;
      fVar120 = (float)(int)local_2d8._12_4_ * fVar76 + (float)(int)local_2b8._12_4_ * fVar86 +
                (float)(int)local_298._12_4_ * fVar97;
      fVar113 = (float)(int)local_2c8._0_4_ * fVar76 + (float)(int)local_2a8._0_4_ * fVar86 +
                (float)(int)local_288._0_4_ * fVar97;
      fVar114 = (float)(int)local_2c8._4_4_ * fVar76 + (float)(int)local_2a8._4_4_ * fVar86 +
                (float)(int)local_288._4_4_ * fVar97;
      fVar115 = (float)(int)local_2c8._8_4_ * fVar76 + (float)(int)local_2a8._8_4_ * fVar86 +
                (float)(int)local_288._8_4_ * fVar97;
      fVar116 = (float)(int)local_2c8._12_4_ * fVar76 + (float)(int)local_2a8._12_4_ * fVar86 +
                (float)(int)local_288._12_4_ * fVar97;
    }
    else {
      fVar117 = (float)(int)(local_2b8._0_4_ + local_2d8._0_4_ + local_298._0_4_);
      fVar118 = (float)(int)(local_2b8._4_4_ + local_2d8._4_4_ + local_298._4_4_);
      fVar119 = (float)(int)(local_2b8._8_4_ + local_2d8._8_4_ + local_298._8_4_);
      fVar120 = (float)(int)(local_2b8._12_4_ + local_2d8._12_4_ + local_298._12_4_);
      fVar113 = (float)(int)(local_2a8._0_4_ + local_2c8._0_4_ + local_288._0_4_);
      fVar114 = (float)(int)(local_2a8._4_4_ + local_2c8._4_4_ + local_288._4_4_);
      fVar115 = (float)(int)(local_2a8._8_4_ + local_2c8._8_4_ + local_288._8_4_);
      fVar116 = (float)(int)(local_2a8._12_4_ + local_2c8._12_4_ + local_288._12_4_);
    }
  }
  uVar66 = -(uint)(fVar117 < *(float *)param_8);
  uVar68 = -(uint)(fVar118 < *(float *)(param_8 + 4));
  uVar70 = -(uint)(fVar119 < *(float *)(param_8 + 8));
  uVar72 = -(uint)(fVar120 < *(float *)(param_8 + 0xc));
  auVar80._4_4_ = uVar68;
  auVar80._0_4_ = uVar66;
  auVar80._8_4_ = uVar70;
  auVar80._12_4_ = uVar72;
  uVar67 = -(uint)(fVar113 < *(float *)(param_8 + 0x10));
  uVar69 = -(uint)(fVar114 < *(float *)(param_8 + 0x14));
  uVar71 = -(uint)(fVar115 < *(float *)(param_8 + 0x18));
  uVar73 = -(uint)(fVar116 < *(float *)(param_8 + 0x1c));
  auVar103._4_4_ = uVar69;
  auVar103._0_4_ = uVar67;
  auVar103._8_4_ = uVar71;
  auVar103._12_4_ = uVar73;
  iVar56 = movmskps((int)param_3,auVar80);
  if ((iVar56 != 0) || (iVar56 = movmskps(0,auVar103), iVar56 != 0)) {
    lVar55 = 0;
    auVar78 = packssdw(auVar80,auVar103);
    *(uint *)(param_8 + 0x10) = ~uVar67 & (uint)*(float *)(param_8 + 0x10) | (uint)fVar113 & uVar67;
    *(uint *)(param_8 + 0x14) = ~uVar69 & (uint)*(float *)(param_8 + 0x14) | (uint)fVar114 & uVar69;
    *(uint *)(param_8 + 0x18) = ~uVar71 & (uint)*(float *)(param_8 + 0x18) | (uint)fVar115 & uVar71;
    *(uint *)(param_8 + 0x1c) = ~uVar73 & (uint)*(float *)(param_8 + 0x1c) | (uint)fVar116 & uVar73;
    *(uint *)param_8 = ~uVar66 & (uint)*(float *)param_8 | (uint)fVar117 & uVar66;
    *(uint *)(param_8 + 4) = ~uVar68 & (uint)*(float *)(param_8 + 4) | (uint)fVar118 & uVar68;
    *(uint *)(param_8 + 8) = ~uVar70 & (uint)*(float *)(param_8 + 8) | (uint)fVar119 & uVar70;
    *(uint *)(param_8 + 0xc) = ~uVar72 & (uint)*(float *)(param_8 + 0xc) | (uint)fVar120 & uVar72;
    do {
      *(undefined1 (*) [16])(param_9 + lVar55) =
           *(undefined1 (*) [16])(extraout_RDX + lVar55) & auVar78 |
           ~auVar78 & *(undefined1 (*) [16])(param_9 + lVar55);
      lVar55 = lVar55 + 0x10;
    } while (lVar55 != 0x30);
    do {
      *(undefined1 (*) [16])(param_9 + lVar55) =
           *(undefined1 (*) [16])(extraout_RDX + lVar55) & auVar78 |
           ~auVar78 & *(undefined1 (*) [16])(param_9 + lVar55);
      lVar55 = lVar55 + 0x10;
    } while (lVar55 != 0x60);
    lVar55 = 0;
    do {
      *(undefined1 (*) [16])(param_10 + lVar55) =
           *(undefined1 (*) [16])(local_278 + lVar55) & auVar78 |
           ~auVar78 & *(undefined1 (*) [16])(param_10 + lVar55);
      lVar55 = lVar55 + 0x10;
    } while (lVar55 != 0x100);
    auVar81._0_4_ = CONCAT22((short)param_6,(short)param_6);
    auVar81._4_4_ = auVar81._0_4_;
    auVar81._8_4_ = auVar81._0_4_;
    auVar81._12_4_ = auVar81._0_4_;
    *(undefined1 (*) [16])param_11 = auVar78 & auVar81 | ~auVar78 & *(undefined1 (*) [16])param_11;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* cvtt::Internal::S3TCComputer::TestCounts(unsigned int, int const*, int,
   cvtt::ParallelMath::VInt16<2> const&, cvtt::ParallelMath::VInt16<2> const (*) [4],
   cvtt::ParallelMath::Float const (*) [4], cvtt::ParallelMath::Float const (*) [4], bool,
   cvtt::ParallelMath::Float const (*) [4], cvtt::ParallelMath::Float const (*) [4], float const*,
   cvtt::ParallelMath::Float&, cvtt::ParallelMath::VInt16<2> (*) [3],
   cvtt::ParallelMath::VInt16<2>*, cvtt::ParallelMath::VInt16<2>&,
   cvtt::ParallelMath::RoundTowardNearestForScope const*) */

void cvtt::Internal::S3TCComputer::TestCounts
               (uint param_1,int *param_2,int param_3,VInt16 *param_4,VInt16<2> *param_5,
               Float *param_6,Float *param_7,bool param_8,Float *param_9,Float *param_10,
               float *param_11,Float *param_12,VInt16<2> *param_13,VInt16 *param_14,VInt16 *param_15
               ,RoundTowardNearestForScope *param_16)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [14];
  undefined1 auVar27 [12];
  bool bVar28;
  bool bVar29;
  bool bVar30;
  float *pfVar31;
  EndpointRefiner<3> *pEVar32;
  EndpointRefiner<3> *pEVar33;
  Float *pFVar34;
  VInt16<2> *pVVar35;
  int iVar36;
  int iVar37;
  Float *pFVar38;
  int iVar39;
  long lVar40;
  int iVar41;
  long in_FS_OFFSET;
  short sVar42;
  uint uVar43;
  float fVar44;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  ushort uVar56;
  float fVar58;
  uint6 uVar59;
  float fVar61;
  undefined1 auVar60 [12];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  VInt16<2> local_2a8 [48];
  undefined1 local_278 [48];
  Float local_248 [96];
  Float local_1e8 [16];
  undefined1 auStack_1d8 [80];
  EndpointRefiner<3> local_188 [4];
  undefined4 auStack_184 [2];
  EndpointRefiner<3> aEStack_17c [4];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  EndpointRefiner<3> local_128 [4];
  undefined4 auStack_124 [3];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  int local_68;
  float local_64;
  undefined4 local_60 [3];
  undefined4 local_54 [5];
  long local_40;
  undefined1 auVar45 [12];
  undefined4 uVar57;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  _local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  _local_c8 = (undefined1  [16])0x0;
  _local_b8 = (undefined1  [16])0x0;
  _local_a8 = (undefined1  [16])0x0;
  _local_98 = (undefined1  [16])0x0;
  _local_88 = (undefined1  [16])0x0;
  _local_78 = (undefined1  [16])0x0;
  local_64 = _LC13 / (float)(param_3 + -1);
  pfVar31 = param_11;
  pEVar32 = local_188;
  do {
    fVar91 = *pfVar31;
    fVar55 = _LC13;
    if (fVar91 != 0.0) {
      fVar55 = _LC13 / fVar91;
    }
    *(float *)(pEVar32 + 0x128) = fVar91;
    pEVar33 = pEVar32 + 4;
    pfVar31 = pfVar31 + 1;
    *(float *)(pEVar32 + 0x134) = fVar55;
    pEVar32 = pEVar33;
  } while (pEVar33 != local_188 + 0xc);
  local_68 = 0;
  if (0 < param_3) {
    fVar94 = 0.0;
    fVar95 = 0.0;
    fVar96 = 0.0;
    fVar97 = 0.0;
    lVar40 = 0;
    bVar28 = false;
    fVar87 = 0.0;
    fVar80 = 0.0;
    fVar77 = 0.0;
    fVar78 = 0.0;
    bVar29 = false;
    iVar39 = 0;
    fVar75 = 0.0;
    bVar30 = false;
    iVar41 = 0;
    fVar76 = 0.0;
    fVar79 = fVar75;
    fVar81 = fVar77;
    fVar82 = fVar78;
    fVar83 = fVar75;
    fVar84 = fVar80;
    fVar85 = fVar77;
    fVar86 = fVar78;
    fVar88 = fVar80;
    fVar89 = fVar77;
    fVar90 = fVar78;
    fVar91 = fVar87;
    fVar55 = fVar80;
    fVar92 = fVar77;
    fVar93 = fVar78;
    do {
      iVar1 = param_2[lVar40];
      if (0 < iVar1) {
        sVar10 = *(short *)param_4;
        sVar11 = *(short *)(param_4 + 2);
        sVar12 = *(short *)(param_4 + 4);
        sVar13 = *(short *)(param_4 + 6);
        sVar14 = *(short *)(param_4 + 8);
        sVar15 = *(short *)(param_4 + 10);
        sVar16 = *(short *)(param_4 + 0xc);
        sVar17 = *(short *)(param_4 + 0xe);
        auVar46._0_2_ = -(ushort)(0 < sVar10);
        auVar46._2_2_ = -(ushort)(0 < sVar11);
        auVar46._4_2_ = -(ushort)(0 < sVar12);
        auVar46._6_2_ = -(ushort)(0 < sVar13);
        auVar46._8_2_ = -(ushort)(0 < sVar14);
        auVar46._10_2_ = -(ushort)(0 < sVar15);
        auVar46._12_2_ = -(ushort)(0 < sVar16);
        auVar46._14_2_ = -(ushort)(0 < sVar17);
        uVar2 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                (ushort)((byte)(auVar46._14_2_ >> 7) & 1) << 0xe | auVar46._14_2_ & 0x8000;
        if (uVar2 != 0) {
          uVar56 = (ushort)lVar40;
          uVar57 = CONCAT22(uVar56,uVar56);
          auVar60._0_8_ = CONCAT44(uVar57,uVar57);
          auVar60._8_4_ = uVar57;
          pFVar34 = param_10 + (long)iVar41 * 0x80;
          iVar36 = 0;
          uVar59 = CONCAT24(uVar56,uVar57) & 0xffff0000ffff;
          auVar7._10_2_ = 0;
          auVar7._0_10_ = auVar60._0_10_;
          auVar7._12_2_ = uVar56;
          auVar8._8_2_ = uVar56;
          auVar8._0_8_ = auVar60._0_8_;
          auVar8._10_4_ = auVar7._10_4_;
          auVar26._6_8_ = 0;
          auVar26._0_6_ = auVar8._8_6_;
          auVar9._4_2_ = uVar56;
          auVar9._0_4_ = uVar57;
          auVar9._6_8_ = SUB148(auVar26 << 0x40,6);
          fVar58 = (float)(int)uVar59 * local_64;
          fVar61 = (float)(ushort)(uVar59 >> 0x20) * local_64;
          fVar62 = (float)uVar56 * local_64;
          fVar63 = (float)uVar56 * local_64;
          fVar64 = (float)uVar56 * local_64;
          fVar65 = (float)auVar9._4_4_ * local_64;
          fVar66 = (float)auVar8._8_4_ * local_64;
          fVar67 = (float)(auVar7._10_4_ >> 0x10) * local_64;
          pEVar32 = local_188;
          iVar37 = iVar36;
          pFVar38 = pFVar34;
          if (uVar2 == 0xffff) goto LAB_0010146f;
          do {
            auVar71._0_12_ = auVar46._0_12_;
            auVar71._12_2_ = auVar46._6_2_;
            auVar71._14_2_ = auVar46._6_2_;
            auVar70._12_4_ = auVar71._12_4_;
            auVar70._0_10_ = auVar46._0_10_;
            auVar70._10_2_ = auVar46._4_2_;
            auVar69._10_6_ = auVar70._10_6_;
            auVar69._0_8_ = auVar46._0_8_;
            auVar69._8_2_ = auVar46._4_2_;
            auVar27._4_8_ = auVar69._8_8_;
            auVar27._2_2_ = auVar46._2_2_;
            auVar27._0_2_ = auVar46._2_2_;
            uVar43 = CONCAT22(auVar46._8_2_,auVar46._8_2_);
            auVar45._0_8_ = CONCAT26(auVar46._10_2_,CONCAT24(auVar46._10_2_,uVar43));
            auVar45._8_2_ = auVar46._12_2_;
            auVar45._10_2_ = auVar46._12_2_;
            auVar52._14_2_ = auVar46._14_2_;
            auVar52._12_2_ = auVar52._14_2_;
            auVar52._0_12_ = auVar45;
            fVar68 = (float)(CONCAT22(auVar46._0_2_,auVar46._0_2_) & (uint)_LC13);
            fVar72 = (float)(auVar27._0_4_ & (uint)_LC13);
            fVar73 = (float)(auVar69._8_4_ & (uint)_LC13);
            fVar74 = (float)(auVar70._12_4_ & (uint)_LC13);
            fVar44 = (float)(uVar43 & (uint)_LC13);
            fVar49 = (float)((uint)((ulong)auVar45._0_8_ >> 0x20) & (uint)_LC13);
            fVar50 = (float)(auVar45._8_4_ & (uint)_LC13);
            fVar51 = (float)(auVar52._12_4_ & (uint)_LC13);
            pEVar32 = local_188;
            pFVar38 = pFVar34;
            do {
              fVar18 = *(float *)pFVar38;
              fVar19 = *(float *)(pFVar38 + 4);
              fVar20 = *(float *)(pFVar38 + 8);
              fVar21 = *(float *)(pFVar38 + 0xc);
              fVar22 = *(float *)(pFVar38 + 0x10);
              fVar23 = *(float *)(pFVar38 + 0x14);
              fVar24 = *(float *)(pFVar38 + 0x18);
              fVar25 = *(float *)(pFVar38 + 0x1c);
              pEVar33 = pEVar32 + 0x20;
              pFVar38 = pFVar38 + 0x20;
              *(float *)(pEVar32 + 0x60) = fVar18 * fVar68 + *(float *)(pEVar32 + 0x60);
              *(float *)(pEVar32 + 100) = fVar19 * fVar72 + *(float *)(pEVar32 + 100);
              *(float *)(pEVar32 + 0x68) = fVar20 * fVar73 + *(float *)(pEVar32 + 0x68);
              *(float *)(pEVar32 + 0x6c) = fVar21 * fVar74 + *(float *)(pEVar32 + 0x6c);
              *(float *)(pEVar32 + 0x70) = fVar22 * fVar44 + *(float *)(pEVar32 + 0x70);
              *(float *)(pEVar32 + 0x74) = fVar23 * fVar49 + *(float *)(pEVar32 + 0x74);
              *(float *)(pEVar32 + 0x78) = fVar24 * fVar50 + *(float *)(pEVar32 + 0x78);
              *(float *)(pEVar32 + 0x7c) = fVar25 * fVar51 + *(float *)(pEVar32 + 0x7c);
              *(float *)pEVar32 = fVar18 * fVar68 * fVar64 + *(float *)pEVar32;
              *(float *)(pEVar32 + 4) = fVar19 * fVar72 * fVar65 + *(float *)(pEVar32 + 4);
              *(float *)(pEVar32 + 8) = fVar20 * fVar73 * fVar66 + *(float *)(pEVar32 + 8);
              *(float *)(pEVar32 + 0xc) = fVar21 * fVar74 * fVar67 + *(float *)(pEVar32 + 0xc);
              *(float *)(pEVar32 + 0x10) = fVar22 * fVar44 * fVar58 + *(float *)(pEVar32 + 0x10);
              *(float *)(pEVar32 + 0x14) = fVar23 * fVar49 * fVar61 + *(float *)(pEVar32 + 0x14);
              *(float *)(pEVar32 + 0x18) = fVar24 * fVar50 * fVar62 + *(float *)(pEVar32 + 0x18);
              *(float *)(pEVar32 + 0x1c) = fVar25 * fVar51 * fVar63 + *(float *)(pEVar32 + 0x1c);
              pEVar32 = pEVar33;
            } while (pEVar33 != local_128);
            fVar91 = fVar91 + fVar68;
            fVar55 = fVar55 + fVar72;
            fVar92 = fVar92 + fVar73;
            fVar93 = fVar93 + fVar74;
            fVar94 = fVar94 + fVar44;
            fVar95 = fVar95 + fVar49;
            fVar96 = fVar96 + fVar50;
            fVar97 = fVar97 + fVar51;
            bVar28 = true;
            fVar83 = fVar83 + fVar68 * fVar64;
            fVar84 = fVar84 + fVar72 * fVar65;
            fVar85 = fVar85 + fVar73 * fVar66;
            fVar86 = fVar86 + fVar74 * fVar67;
            fVar87 = fVar87 + fVar44 * fVar58;
            fVar88 = fVar88 + fVar49 * fVar61;
            fVar89 = fVar89 + fVar50 * fVar62;
            fVar90 = fVar90 + fVar51 * fVar63;
            fVar75 = fVar75 + fVar68 * fVar64 * fVar64;
            fVar76 = fVar76 + fVar72 * fVar65 * fVar65;
            fVar77 = fVar77 + fVar73 * fVar66 * fVar66;
            fVar78 = fVar78 + fVar74 * fVar67 * fVar67;
            fVar79 = fVar79 + fVar44 * fVar58 * fVar58;
            fVar80 = fVar80 + fVar49 * fVar61 * fVar61;
            fVar81 = fVar81 + fVar50 * fVar62 * fVar62;
            fVar82 = fVar82 + fVar51 * fVar63 * fVar63;
            pFVar38 = pFVar34;
            iVar37 = iVar36;
            while( true ) {
              iVar36 = iVar37 + 1;
              if (iVar36 == iVar1) {
                iVar41 = iVar41 + 1 + iVar37;
                bVar30 = true;
                goto LAB_001014fb;
              }
              pFVar34 = pFVar38 + 0x80;
              sVar42 = (short)iVar36;
              auVar46._0_2_ = -(ushort)(sVar42 < sVar10);
              auVar46._2_2_ = -(ushort)(sVar42 < sVar11);
              auVar46._4_2_ = -(ushort)(sVar42 < sVar12);
              auVar46._6_2_ = -(ushort)(sVar42 < sVar13);
              auVar46._8_2_ = -(ushort)(sVar42 < sVar14);
              auVar46._10_2_ = -(ushort)(sVar42 < sVar15);
              auVar46._12_2_ = -(ushort)(sVar42 < sVar16);
              auVar46._14_2_ = -(ushort)(sVar42 < sVar17);
              uVar2 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                      (ushort)((byte)(auVar46._14_2_ >> 7) & 1) << 0xe | auVar46._14_2_ & 0x8000;
              if (uVar2 == 0) {
                if (bVar28) {
                  local_78._4_4_ = fVar95;
                  local_78._0_4_ = fVar94;
                  fStack_70 = fVar96;
                  fStack_6c = fVar97;
                  local_88._4_4_ = fVar55;
                  local_88._0_4_ = fVar91;
                  fStack_80 = fVar92;
                  fStack_7c = fVar93;
                }
                if (bVar29) {
                  local_68 = iVar39;
                }
                goto LAB_00101678;
              }
              pEVar32 = local_188;
              iVar37 = iVar36;
              pFVar38 = pFVar34;
              if (uVar2 != 0xffff) break;
LAB_0010146f:
              do {
                fVar44 = *(float *)(pFVar34 + 0x14);
                fVar49 = *(float *)(pFVar34 + 0x18);
                fVar50 = *(float *)(pFVar34 + 0x1c);
                fVar51 = *(float *)pFVar34;
                fVar68 = *(float *)(pFVar34 + 4);
                fVar72 = *(float *)(pFVar34 + 8);
                fVar73 = *(float *)(pFVar34 + 0xc);
                pEVar33 = pEVar32 + 0x20;
                *(float *)(pEVar32 + 0x10) =
                     *(float *)(pFVar34 + 0x10) * fVar58 + *(float *)(pEVar32 + 0x10);
                *(float *)(pEVar32 + 0x14) = fVar44 * fVar61 + *(float *)(pEVar32 + 0x14);
                *(float *)(pEVar32 + 0x18) = fVar49 * fVar62 + *(float *)(pEVar32 + 0x18);
                *(float *)(pEVar32 + 0x1c) = fVar50 * fVar63 + *(float *)(pEVar32 + 0x1c);
                fVar44 = *(float *)(pFVar34 + 0x10);
                fVar49 = *(float *)(pFVar34 + 0x14);
                fVar50 = *(float *)(pFVar34 + 0x18);
                fVar74 = *(float *)(pFVar34 + 0x1c);
                *(float *)pEVar32 = fVar51 * fVar64 + *(float *)pEVar32;
                *(float *)(pEVar32 + 4) = fVar68 * fVar65 + *(float *)(pEVar32 + 4);
                *(float *)(pEVar32 + 8) = fVar72 * fVar66 + *(float *)(pEVar32 + 8);
                *(float *)(pEVar32 + 0xc) = fVar73 * fVar67 + *(float *)(pEVar32 + 0xc);
                fVar51 = *(float *)pFVar34;
                fVar68 = *(float *)(pFVar34 + 4);
                fVar72 = *(float *)(pFVar34 + 8);
                fVar73 = *(float *)(pFVar34 + 0xc);
                *(float *)(pEVar32 + 0x70) = fVar44 + *(float *)(pEVar32 + 0x70);
                *(float *)(pEVar32 + 0x74) = fVar49 + *(float *)(pEVar32 + 0x74);
                *(float *)(pEVar32 + 0x78) = fVar50 + *(float *)(pEVar32 + 0x78);
                *(float *)(pEVar32 + 0x7c) = fVar74 + *(float *)(pEVar32 + 0x7c);
                *(float *)(pEVar32 + 0x60) = fVar51 + *(float *)(pEVar32 + 0x60);
                *(float *)(pEVar32 + 100) = fVar68 + *(float *)(pEVar32 + 100);
                *(float *)(pEVar32 + 0x68) = fVar72 + *(float *)(pEVar32 + 0x68);
                *(float *)(pEVar32 + 0x6c) = fVar73 + *(float *)(pEVar32 + 0x6c);
                pEVar32 = pEVar33;
                pFVar34 = pFVar34 + 0x20;
              } while (local_128 != pEVar33);
              fVar83 = fVar83 + fVar64;
              fVar84 = fVar84 + fVar65;
              fVar85 = fVar85 + fVar66;
              fVar86 = fVar86 + fVar67;
              iVar39 = iVar39 + 1;
              fVar87 = fVar87 + fVar58;
              fVar88 = fVar88 + fVar61;
              fVar89 = fVar89 + fVar62;
              fVar90 = fVar90 + fVar63;
              bVar29 = true;
              fVar75 = fVar75 + fVar64 * fVar64;
              fVar76 = fVar76 + fVar65 * fVar65;
              fVar77 = fVar77 + fVar66 * fVar66;
              fVar78 = fVar78 + fVar67 * fVar67;
              fVar79 = fVar79 + fVar58 * fVar58;
              fVar80 = fVar80 + fVar61 * fVar61;
              fVar81 = fVar81 + fVar62 * fVar62;
              fVar82 = fVar82 + fVar63 * fVar63;
            }
          } while( true );
        }
        break;
      }
LAB_001014fb:
      lVar40 = lVar40 + 1;
    } while (lVar40 != param_3);
    if (bVar28) {
      local_78._4_4_ = fVar95;
      local_78._0_4_ = fVar94;
      fStack_70 = fVar96;
      fStack_6c = fVar97;
      local_88._4_4_ = fVar55;
      local_88._0_4_ = fVar91;
      fStack_80 = fVar92;
      fStack_7c = fVar93;
    }
    if (bVar29) {
      local_68 = iVar39;
    }
    if (bVar30) {
LAB_00101678:
      local_98._4_4_ = fVar88;
      local_98._0_4_ = fVar87;
      fStack_90 = fVar89;
      fStack_8c = fVar90;
      local_a8._4_4_ = fVar84;
      local_a8._0_4_ = fVar83;
      fStack_a0 = fVar85;
      fStack_9c = fVar86;
      local_b8._4_4_ = fVar80;
      local_b8._0_4_ = fVar79;
      fStack_b0 = fVar81;
      fStack_ac = fVar82;
      local_c8._4_4_ = fVar76;
      local_c8._0_4_ = fVar75;
      fStack_c0 = fVar77;
      fStack_bc = fVar78;
    }
  }
  pFVar38 = local_248;
  EndpointRefiner<3>::GetRefinedEndpoints(local_188,pFVar38);
  pVVar35 = local_2a8;
  do {
    auVar46 = *(undefined1 (*) [16])pFVar38;
    pFVar34 = pFVar38 + 0x10;
    pFVar38 = pFVar38 + 0x20;
    auVar3._4_4_ = _LC22;
    auVar3._0_4_ = _LC22;
    auVar3._8_4_ = _LC22;
    auVar3._12_4_ = _LC22;
    auVar46 = minps(auVar46,auVar3);
    auVar4._4_4_ = _LC22;
    auVar4._0_4_ = _LC22;
    auVar4._8_4_ = _LC22;
    auVar4._12_4_ = _LC22;
    auVar52 = minps(*(undefined1 (*) [16])pFVar34,auVar4);
    auVar46 = maxps(auVar46,(undefined1  [16])0x0);
    auVar52 = maxps(auVar52,(undefined1  [16])0x0);
    auVar47._0_4_ = (int)auVar46._0_4_;
    auVar47._4_4_ = (int)auVar46._4_4_;
    auVar47._8_4_ = (int)auVar46._8_4_;
    auVar47._12_4_ = (int)auVar46._12_4_;
    auVar53._0_4_ = (int)auVar52._0_4_;
    auVar53._4_4_ = (int)auVar52._4_4_;
    auVar53._8_4_ = (int)auVar52._8_4_;
    auVar53._12_4_ = (int)auVar52._12_4_;
    auVar46 = packssdw(auVar47,auVar53);
    *(undefined1 (*) [16])pVVar35 = auVar46;
    pVVar35 = pVVar35 + 0x10;
  } while (local_1e8 != pFVar38);
  lVar40 = 0;
  do {
    auVar5._4_4_ = _LC22;
    auVar5._0_4_ = _LC22;
    auVar5._8_4_ = _LC22;
    auVar5._12_4_ = _LC22;
    auVar46 = minps(*(undefined1 (*) [16])(local_1e8 + lVar40 * 2),auVar5);
    auVar6._4_4_ = _LC22;
    auVar6._0_4_ = _LC22;
    auVar6._8_4_ = _LC22;
    auVar6._12_4_ = _LC22;
    auVar52 = minps(*(undefined1 (*) [16])(auStack_1d8 + lVar40 * 2),auVar6);
    auVar46 = maxps(auVar46,(undefined1  [16])0x0);
    auVar52 = maxps(auVar52,(undefined1  [16])0x0);
    auVar48._0_4_ = (int)auVar46._0_4_;
    auVar48._4_4_ = (int)auVar46._4_4_;
    auVar48._8_4_ = (int)auVar46._8_4_;
    auVar48._12_4_ = (int)auVar46._12_4_;
    auVar54._0_4_ = (int)auVar52._0_4_;
    auVar54._4_4_ = (int)auVar52._4_4_;
    auVar54._8_4_ = (int)auVar52._8_4_;
    auVar54._12_4_ = (int)auVar52._12_4_;
    auVar46 = packssdw(auVar48,auVar54);
    *(undefined1 (*) [16])(local_278 + lVar40) = auVar46;
    lVar40 = lVar40 + 0x10;
  } while (lVar40 != 0x30);
  TestEndpoints(param_1,param_5,param_6,param_7,local_2a8,param_3,param_11,param_12,param_13,
                param_14,param_15,(EndpointRefiner *)0x0,param_16);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::PackRGB(unsigned int, cvtt::PixelBlockU8 const*, unsigned char*,
   unsigned long, float const*, bool, float, bool, int, int) */

void cvtt::Internal::S3TCComputer::PackRGB
               (uint param_1,PixelBlockU8 *param_2,uchar *param_3,ulong param_4,float *param_5,
               bool param_6,float param_7,bool param_8,int param_9,int param_10)

{
  EndpointRefiner<3> *pEVar1;
  PixelBlockU8 PVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
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
  float fVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [12];
  undefined1 auVar35 [14];
  unkbyte10 Var36;
  undefined8 uVar37;
  undefined8 uVar38;
  uint uVar39;
  undefined1 auVar40 [4];
  short sVar41;
  int iVar42;
  uint uVar43;
  float *pfVar44;
  float *pfVar45;
  ushort *puVar46;
  long lVar47;
  VInt16<2> *pVVar48;
  float *pfVar49;
  ushort *puVar50;
  Float *pFVar51;
  uint uVar52;
  int iVar53;
  EndpointRefiner<3> *pEVar54;
  long lVar55;
  VInt16<2> *pVVar56;
  uint uVar57;
  uint uVar58;
  EndpointSelector<3,8> *pEVar59;
  Float *pFVar60;
  VInt16 *pVVar61;
  ushort *puVar62;
  int iVar63;
  int iVar64;
  PixelBlockU8 *pPVar65;
  uint uVar66;
  int iVar67;
  PixelBlockU8 *pPVar68;
  EndpointSelector<3,8> *this;
  EndpointSelector<3,8> *pEVar69;
  Float *pFVar70;
  PixelBlockU8 *pPVar71;
  VInt16 *pVVar72;
  EndpointRefiner<3> *pEVar73;
  ulong uVar74;
  VInt16<2> *pVVar75;
  VInt16 *pVVar76;
  int iVar77;
  int iVar78;
  long in_FS_OFFSET;
  byte bVar79;
  ushort uVar80;
  float fVar81;
  ushort uVar93;
  short sVar94;
  ushort uVar96;
  undefined1 auVar82 [12];
  ushort uVar98;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ushort uVar92;
  ushort uVar95;
  ushort uVar97;
  ushort uVar99;
  undefined1 auVar91 [16];
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
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar134;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined8 local_3078;
  float fStack_3070;
  float fStack_306c;
  int local_3020;
  int local_2fe0;
  uint local_2fac;
  VInt16 local_2fa8 [16];
  undefined1 local_2f98 [16];
  short local_2f88;
  short sStack_2f86;
  short sStack_2f84;
  short sStack_2f82;
  short sStack_2f80;
  short sStack_2f7e;
  short sStack_2f7c;
  short sStack_2f7a;
  undefined8 local_2f78;
  undefined8 uStack_2f70;
  undefined4 local_2f68;
  undefined4 uStack_2f64;
  undefined4 uStack_2f60;
  undefined4 uStack_2f5c;
  undefined4 local_2f58;
  undefined4 uStack_2f54;
  undefined4 uStack_2f50;
  undefined4 uStack_2f4c;
  VInt16<2> local_2f48 [16];
  undefined1 local_2f38 [16];
  undefined1 local_2f28 [16];
  undefined1 local_2f18 [16];
  undefined1 local_2f08 [16];
  undefined1 local_2ef8 [16];
  undefined8 local_2ee8;
  undefined8 uStack_2ee0;
  undefined8 local_2ed8;
  undefined8 uStack_2ed0;
  undefined8 local_2ec8;
  undefined8 uStack_2ec0;
  undefined8 local_2eb8;
  undefined8 uStack_2eb0;
  undefined8 local_2ea8;
  undefined8 uStack_2ea0;
  undefined8 local_2e98;
  undefined8 uStack_2e90;
  undefined8 local_2e88;
  undefined8 uStack_2e80;
  undefined8 local_2e78;
  undefined8 uStack_2e70;
  undefined8 local_2e68;
  undefined8 uStack_2e60;
  undefined8 local_2e58;
  undefined8 uStack_2e50;
  undefined8 local_2e48;
  undefined8 uStack_2e40;
  undefined8 local_2e38;
  undefined8 uStack_2e30;
  VInt16 local_2e28 [256];
  ushort local_2d28 [128];
  EndpointSelector<3,8> local_2c28 [4];
  undefined4 uStack_2c24;
  EndpointSelector<3,8> aEStack_2c20 [4];
  EndpointSelector<3,8> aEStack_2c1c [4];
  undefined1 local_2c18 [4];
  float afStack_2c14 [3];
  undefined1 local_2c08 [16];
  undefined1 local_2bf8 [16];
  undefined1 local_2be8 [16];
  undefined1 local_2bd8 [16];
  EndpointSelector<3,8> local_2bc8 [4];
  undefined4 auStack_2bc4 [3];
  undefined1 local_2bb8 [16];
  undefined1 local_2ba8 [16];
  undefined1 local_2b98 [16];
  undefined1 local_2b88 [16];
  undefined1 local_2b78 [16];
  EndpointSelector<3,8> local_2b68 [192];
  undefined1 local_2aa8 [8];
  float fStack_2aa0;
  float fStack_2a9c;
  undefined1 local_2a98 [8];
  float fStack_2a90;
  float fStack_2a8c;
  undefined1 local_2a88 [16];
  undefined1 local_2a78 [16];
  undefined1 local_2a68 [16];
  undefined1 local_2a58 [16];
  VInt16<2> local_2a48 [4];
  undefined4 auStack_2a44 [127];
  VInt16<2> local_2848 [48];
  ushort local_2818 [488];
  VInt16<2> local_2448 [48];
  ushort local_2418 [488];
  Float local_2048 [128];
  float local_1fc8 [480];
  Float local_1848 [128];
  float local_17c8 [480];
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  Float local_fe8 [16];
  undefined1 auStack_fd8 [1936];
  undefined1 local_848 [4];
  float fStack_844;
  undefined8 uStack_840;
  undefined1 local_838 [4];
  float fStack_834;
  undefined8 uStack_830;
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined1 local_7e8 [8];
  float fStack_7e0;
  float fStack_7dc;
  undefined1 local_7d8 [8];
  float fStack_7d0;
  float fStack_7cc;
  undefined1 local_7c8 [8];
  float fStack_7c0;
  float fStack_7bc;
  undefined1 local_7b8 [8];
  float fStack_7b0;
  float fStack_7ac;
  undefined1 local_7a8 [8];
  float fStack_7a0;
  float fStack_79c;
  undefined1 local_798 [8];
  float fStack_790;
  float fStack_78c;
  undefined1 local_788 [8];
  float fStack_780;
  float fStack_77c;
  undefined1 local_778 [8];
  float fStack_770;
  float fStack_76c;
  undefined1 local_768 [8];
  float fStack_760;
  float fStack_75c;
  undefined1 local_758 [8];
  float fStack_750;
  float fStack_74c;
  undefined1 local_748 [8];
  float fStack_740;
  float fStack_73c;
  undefined1 local_738 [16];
  undefined4 local_728;
  float local_724;
  undefined4 local_720 [3];
  undefined4 local_714 [437];
  long local_40;
  
  uVar39 = MXCSR;
  bVar79 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2fac = MXCSR;
  MXCSR = MXCSR & 0xffff9fff;
  this = local_2c28;
  pEVar69 = this;
  do {
    *(undefined1 (*) [16])(pEVar69 + 0xc0) = (undefined1  [16])0x0;
    pEVar59 = pEVar69 + 0x20;
    *(undefined1 (*) [16])(pEVar69 + 0xd0) = (undefined1  [16])0x0;
    pEVar69 = pEVar59;
  } while (local_2b68 != pEVar59);
  _local_2c28 = (undefined1  [16])0x0;
  pPVar71 = param_2 + 4;
  lVar55 = 0;
  _local_2c18 = (undefined1  [16])0x0;
  _local_2bc8 = (undefined1  [16])0x0;
  local_2bb8 = (undefined1  [16])0x0;
  local_2c08 = (undefined1  [16])0x0;
  local_2bf8 = (undefined1  [16])0x0;
  local_2ba8 = (undefined1  [16])0x0;
  local_2b98 = (undefined1  [16])0x0;
  local_2be8 = (undefined1  [16])0x0;
  local_2bd8 = (undefined1  [16])0x0;
  local_2b88 = (undefined1  [16])0x0;
  local_2b78 = (undefined1  [16])0x0;
  _local_2aa8 = (undefined1  [16])0x0;
  _local_2a98 = (undefined1  [16])0x0;
  local_2a88._4_4_ = _LC1;
  local_2a88._0_4_ = _LC1;
  local_2a88._8_4_ = _LC1;
  local_2a88._12_4_ = _LC1;
  local_2a78._4_4_ = _LC1;
  local_2a78._0_4_ = _LC1;
  local_2a78._8_4_ = _LC1;
  local_2a78._12_4_ = _LC1;
  local_2a68._4_4_ = _LC25;
  local_2a68._0_4_ = _LC25;
  local_2a68._8_4_ = _LC25;
  local_2a68._12_4_ = _LC25;
  local_2a58._4_4_ = _LC25;
  local_2a58._0_4_ = _LC25;
  local_2a58._8_4_ = _LC25;
  local_2a58._12_4_ = _LC25;
  pVVar75 = local_2848;
  do {
    pPVar68 = param_2 + lVar55;
    pEVar73 = (EndpointRefiner<3> *)local_848;
    pVVar56 = pVVar75;
    pPVar65 = pPVar68;
    do {
      do {
        PVar2 = *pPVar68;
        pEVar54 = pEVar73 + 2;
        pPVar68 = pPVar68 + 0x40;
        *(ushort *)pEVar73 = (ushort)(byte)PVar2;
        pEVar73 = pEVar54;
      } while ((EndpointRefiner<3> *)local_838 != pEVar54);
      pPVar68 = pPVar65 + 1;
      *(undefined8 *)pVVar56 = _local_848;
      *(undefined8 *)(pVVar56 + 8) = uStack_840;
      pEVar73 = (EndpointRefiner<3> *)local_848;
      pVVar56 = pVVar56 + 0x10;
      pPVar65 = pPVar68;
    } while (pPVar71 != pPVar68);
    pPVar71 = pPVar71 + 4;
    pVVar75 = pVVar75 + 0x40;
    lVar55 = lVar55 + 4;
  } while (lVar55 != 0x40);
  pfVar49 = local_1fc8;
  pVVar75 = local_2848;
  do {
    pfVar44 = pfVar49 + -0x20;
    pVVar56 = pVVar75;
    do {
      auVar100 = *(undefined1 (*) [16])pVVar56;
      pfVar45 = pfVar44 + 8;
      pVVar56 = pVVar56 + 0x10;
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar100._0_10_;
      auVar3._12_2_ = auVar100._6_2_;
      auVar6._8_2_ = auVar100._4_2_;
      auVar6._0_8_ = auVar100._0_8_;
      auVar6._10_4_ = auVar3._10_4_;
      auVar32._6_8_ = 0;
      auVar32._0_6_ = auVar6._8_6_;
      pfVar44[4] = (float)auVar100._8_2_;
      pfVar44[5] = (float)auVar100._10_2_;
      pfVar44[6] = (float)auVar100._12_2_;
      pfVar44[7] = (float)auVar100._14_2_;
      *pfVar44 = (float)auVar100._0_2_;
      pfVar44[1] = (float)(int)CONCAT82(SUB148(auVar32 << 0x40,6),auVar100._2_2_);
      pfVar44[2] = (float)auVar6._8_4_;
      pfVar44[3] = (float)(auVar3._10_4_ >> 0x10);
      pfVar44 = pfVar45;
    } while (pfVar49 != pfVar45);
    pfVar49 = pfVar49 + 0x20;
    pVVar75 = pVVar75 + 0x40;
  } while (local_17c8 != pfVar49);
  if (param_6) {
    fVar81 = param_7 * _LC22 + __LC26;
    if ((float)((uint)fVar81 & _LC34) < _LC27) {
      fVar81 = (float)((uint)((float)(int)fVar81 -
                             (float)(-(uint)(fVar81 < (float)(int)fVar81) & (uint)_LC13)) |
                      ~_LC34 & (uint)fVar81);
    }
    sVar94 = (short)(int)fVar81;
    puVar46 = local_2818;
    do {
      puVar62 = puVar46 + 0x20;
      *puVar46 = ~-(ushort)((short)*puVar46 < sVar94) & __LC29;
      puVar46[1] = ~-(ushort)((short)puVar46[1] < sVar94) & _UNK_00107042;
      puVar46[2] = ~-(ushort)((short)puVar46[2] < sVar94) & _UNK_00107044;
      puVar46[3] = ~-(ushort)((short)puVar46[3] < sVar94) & _UNK_00107046;
      puVar46[4] = ~-(ushort)((short)puVar46[4] < sVar94) & _UNK_00107048;
      puVar46[5] = ~-(ushort)((short)puVar46[5] < sVar94) & _UNK_0010704a;
      puVar46[6] = ~-(ushort)((short)puVar46[6] < sVar94) & _UNK_0010704c;
      puVar46[7] = ~-(ushort)((short)puVar46[7] < sVar94) & _UNK_0010704e;
      puVar46 = puVar62;
    } while (local_2418 != puVar62);
  }
  puVar46 = local_2818;
  pVVar75 = local_2848;
  pFVar70 = local_1848;
  do {
    lVar55 = 0;
    pFVar60 = pFVar70;
    do {
      fVar81 = param_5[lVar55];
      lVar47 = lVar55 + 1;
      auVar100 = *(undefined1 (*) [16])(pVVar75 + lVar55 * 0x10);
      auVar4._10_2_ = 0;
      auVar4._0_10_ = auVar100._0_10_;
      auVar4._12_2_ = auVar100._6_2_;
      auVar7._8_2_ = auVar100._4_2_;
      auVar7._0_8_ = auVar100._0_8_;
      auVar7._10_4_ = auVar4._10_4_;
      auVar33._6_8_ = 0;
      auVar33._0_6_ = auVar7._8_6_;
      *(float *)(pFVar60 + 0x10) = (float)auVar100._8_2_ * fVar81;
      *(float *)(pFVar60 + 0x14) = (float)auVar100._10_2_ * fVar81;
      *(float *)(pFVar60 + 0x18) = (float)auVar100._12_2_ * fVar81;
      *(float *)(pFVar60 + 0x1c) = (float)auVar100._14_2_ * fVar81;
      *(float *)pFVar60 = (float)auVar100._0_2_ * fVar81;
      *(float *)(pFVar60 + 4) =
           (float)(int)CONCAT82(SUB148(auVar33 << 0x40,6),auVar100._2_2_) * fVar81;
      *(float *)(pFVar60 + 8) = (float)auVar7._8_4_ * fVar81;
      *(float *)(pFVar60 + 0xc) = (float)(auVar4._10_4_ >> 0x10) * fVar81;
      lVar55 = lVar47;
      pFVar60 = pFVar60 + 0x20;
    } while (lVar47 != 4);
    pFVar70 = pFVar70 + 0x80;
    pVVar75 = pVVar75 + 0x40;
  } while ((Float *)&local_1048 != pFVar70);
  pVVar75 = local_2a48;
  pVVar56 = pVVar75;
  puVar62 = puVar46;
  do {
    while( true ) {
      *(float *)pVVar56 = _LC13;
      *(float *)(pVVar56 + 4) = _LC13;
      *(float *)(pVVar56 + 8) = _LC13;
      *(float *)(pVVar56 + 0xc) = _LC13;
      *(float *)(pVVar56 + 0x10) = _LC13;
      *(float *)(pVVar56 + 0x14) = _LC13;
      *(float *)(pVVar56 + 0x18) = _LC13;
      *(float *)(pVVar56 + 0x1c) = _LC13;
      if (!param_6) break;
      pVVar48 = pVVar56 + 0x20;
      sVar94 = -(ushort)((short)puVar62[3] < (short)_UNK_00107046);
      auVar100._14_2_ = -(ushort)((short)puVar62[7] < (short)_UNK_0010704e);
      Var36 = CONCAT64(CONCAT42(CONCAT22(sVar94,sVar94),
                                -(ushort)((short)puVar62[2] < (short)_UNK_00107044)),
                       CONCAT22(-(ushort)((short)puVar62[2] < (short)_UNK_00107044),sVar94));
      auVar34._4_8_ = (long)((unkuint10)Var36 >> 0x10);
      auVar34._2_2_ = -(ushort)((short)puVar62[1] < (short)_UNK_00107042);
      auVar34._0_2_ = -(ushort)((short)puVar62[1] < (short)_UNK_00107042);
      uVar57 = CONCAT22(-(ushort)((short)puVar62[4] < (short)_UNK_00107048),
                        -(ushort)((short)puVar62[4] < (short)_UNK_00107048));
      auVar82._0_8_ =
           CONCAT26(-(ushort)((short)puVar62[5] < (short)_UNK_0010704a),
                    CONCAT24(-(ushort)((short)puVar62[5] < (short)_UNK_0010704a),uVar57));
      auVar82._8_2_ = -(ushort)((short)puVar62[6] < (short)_UNK_0010704c);
      auVar82._10_2_ = -(ushort)((short)puVar62[6] < (short)_UNK_0010704c);
      auVar100._12_2_ = auVar100._14_2_;
      auVar100._0_12_ = auVar82;
      *(uint *)pVVar56 =
           ~CONCAT22(-(ushort)((short)*puVar62 < (short)__LC29),
                     -(ushort)((short)*puVar62 < (short)__LC29)) & (uint)_LC13;
      *(uint *)(pVVar56 + 4) = ~auVar34._0_4_ & (uint)_LC13;
      *(uint *)(pVVar56 + 8) = ~(uint)((unkuint10)Var36 >> 0x10) & (uint)_LC13;
      *(uint *)(pVVar56 + 0xc) = ~CONCAT22(sVar94,sVar94) & (uint)_LC13;
      *(uint *)(pVVar56 + 0x10) = ~uVar57 & (uint)_LC13;
      *(uint *)(pVVar56 + 0x14) = ~(uint)((ulong)auVar82._0_8_ >> 0x20) & (uint)_LC13;
      *(uint *)(pVVar56 + 0x18) = ~auVar82._8_4_ & (uint)_LC13;
      *(uint *)(pVVar56 + 0x1c) = ~auVar100._12_4_ & (uint)_LC13;
      pVVar56 = pVVar48;
      puVar62 = puVar62 + 0x20;
      if (local_2848 == pVVar48) goto LAB_00101aa0;
    }
    pVVar56 = pVVar56 + 0x20;
    puVar62 = puVar62 + 0x20;
  } while (local_2848 != pVVar56);
LAB_00101aa0:
  pVVar56 = pVVar75;
  pFVar70 = local_1848;
  do {
    fVar81 = *(float *)pVVar56;
    fVar131 = *(float *)(pVVar56 + 4);
    fVar132 = *(float *)(pVVar56 + 8);
    fVar133 = *(float *)(pVVar56 + 0xc);
    fVar134 = *(float *)(pVVar56 + 0x10);
    fVar138 = *(float *)(pVVar56 + 0x14);
    fVar139 = *(float *)(pVVar56 + 0x18);
    fVar140 = *(float *)(pVVar56 + 0x1c);
    pEVar69 = this;
    pFVar60 = pFVar70;
    do {
      pFVar51 = pFVar60 + 0x10;
      fVar9 = *(float *)(pFVar60 + 0x14);
      fVar10 = *(float *)(pFVar60 + 0x18);
      fVar11 = *(float *)(pFVar60 + 0x1c);
      fVar12 = *(float *)pFVar60;
      fVar13 = *(float *)(pFVar60 + 4);
      fVar14 = *(float *)(pFVar60 + 8);
      fVar15 = *(float *)(pFVar60 + 0xc);
      pEVar59 = pEVar69 + 0x20;
      pFVar60 = pFVar60 + 0x20;
      *(float *)(pEVar69 + 0x10) = *(float *)pFVar51 * fVar134 + *(float *)(pEVar69 + 0x10);
      *(float *)(pEVar69 + 0x14) = fVar9 * fVar138 + *(float *)(pEVar69 + 0x14);
      *(float *)(pEVar69 + 0x18) = fVar10 * fVar139 + *(float *)(pEVar69 + 0x18);
      *(float *)(pEVar69 + 0x1c) = fVar11 * fVar140 + *(float *)(pEVar69 + 0x1c);
      *(float *)pEVar69 = fVar12 * fVar81 + *(float *)pEVar69;
      *(float *)(pEVar69 + 4) = fVar13 * fVar131 + *(float *)(pEVar69 + 4);
      *(float *)(pEVar69 + 8) = fVar14 * fVar132 + *(float *)(pEVar69 + 8);
      *(float *)(pEVar69 + 0xc) = fVar15 * fVar133 + *(float *)(pEVar69 + 0xc);
      pEVar69 = pEVar59;
    } while (local_2bc8 != pEVar59);
    local_2a98._0_4_ = fVar134 + (float)local_2a98._0_4_;
    local_2a98._4_4_ = fVar138 + (float)local_2a98._4_4_;
    fStack_2a90 = fVar139 + fStack_2a90;
    fStack_2a8c = fVar140 + fStack_2a8c;
    local_2aa8._0_4_ = fVar81 + (float)local_2aa8._0_4_;
    local_2aa8._4_4_ = fVar131 + (float)local_2aa8._4_4_;
    fStack_2aa0 = fVar132 + fStack_2aa0;
    fStack_2a9c = fVar133 + fStack_2a9c;
    pVVar56 = pVVar56 + 0x20;
    pFVar70 = pFVar70 + 0x80;
  } while (pVVar56 != local_2848);
  auVar127._4_4_ = ~-(uint)((float)local_2aa8._4_4_ == 0.0) & local_2aa8._4_4_;
  auVar127._0_4_ = ~-(uint)((float)local_2aa8._0_4_ == 0.0) & local_2aa8._0_4_;
  auVar125._0_4_ = -(uint)((float)local_2aa8._0_4_ == 0.0) & (uint)_LC13;
  auVar125._4_4_ = -(uint)((float)local_2aa8._4_4_ == 0.0) & (uint)_LC13;
  auVar125._8_4_ = -(uint)(fStack_2aa0 == 0.0) & (uint)_LC13;
  auVar125._12_4_ = -(uint)(fStack_2a9c == 0.0) & (uint)_LC13;
  auVar127._8_4_ = ~-(uint)(fStack_2aa0 == 0.0) & (uint)fStack_2aa0;
  auVar127._12_4_ = ~-(uint)(fStack_2a9c == 0.0) & (uint)fStack_2a9c;
  auVar136._0_4_ = (uint)_LC13 & -(uint)((float)local_2a98._0_4_ == 0.0);
  auVar136._4_4_ = (uint)_LC13 & -(uint)((float)local_2a98._4_4_ == 0.0);
  auVar136._8_4_ = (uint)_LC13 & -(uint)(fStack_2a90 == 0.0);
  auVar136._12_4_ = (uint)_LC13 & -(uint)(fStack_2a8c == 0.0);
  auVar114._0_4_ = ~-(uint)((float)local_2a98._0_4_ == 0.0) & local_2a98._0_4_;
  auVar114._4_4_ = ~-(uint)((float)local_2a98._4_4_ == 0.0) & local_2a98._4_4_;
  auVar114._8_4_ = ~-(uint)(fStack_2a90 == 0.0) & (uint)fStack_2a90;
  auVar114._12_4_ = ~-(uint)(fStack_2a8c == 0.0) & (uint)fStack_2a8c;
  pEVar69 = this;
  do {
    pEVar59 = pEVar69 + 0x20;
    auVar100 = divps(*(undefined1 (*) [16])(pEVar69 + 0x10),auVar114 | auVar136);
    auVar120 = divps(*(undefined1 (*) [16])pEVar69,auVar127 | auVar125);
    *(undefined1 (*) [16])(pEVar69 + 0x10) = auVar100;
    *(undefined1 (*) [16])pEVar69 = auVar120;
    pEVar69 = pEVar59;
  } while (local_2bc8 != pEVar59);
  iVar67 = 1;
  uStack_2f64 = _LC1;
  uStack_2f60 = _LC1;
  uStack_2f5c = _LC1;
  while (uVar57 = MXCSR, pFVar70 = local_1848, iVar67 == 1) {
    pVVar56 = pVVar75;
    do {
      lVar55 = 0;
      do {
        pFVar60 = pFVar70 + lVar55 + 0x10;
        fVar81 = *(float *)pFVar60;
        fVar131 = *(float *)(pFVar60 + 4);
        fVar132 = *(float *)(pFVar60 + 8);
        fVar133 = *(float *)(pFVar60 + 0xc);
        pFVar60 = pFVar70 + lVar55;
        fVar134 = *(float *)(pFVar60 + 4);
        fVar138 = *(float *)(pFVar60 + 8);
        fVar139 = *(float *)(pFVar60 + 0xc);
        fVar140 = *(float *)(local_2c18 + lVar55);
        fVar9 = *(float *)(local_2c18 + lVar55 + 4);
        fVar10 = *(float *)(local_2c18 + lVar55 + 8);
        fVar11 = *(float *)(local_2c18 + lVar55 + 0xc);
        fVar12 = *(float *)(local_2c28 + lVar55 + 4);
        fVar13 = *(float *)(local_2c28 + lVar55 + 8);
        fVar14 = *(float *)(local_2c28 + lVar55 + 0xc);
        *(float *)((EndpointRefiner<3> *)local_848 + lVar55) =
             *(float *)pFVar60 - *(float *)(this + lVar55);
        *(float *)(local_848 + lVar55 + 4) = fVar134 - fVar12;
        *(float *)(local_848 + lVar55 + 8) = fVar138 - fVar13;
        *(float *)(local_848 + lVar55 + 0xc) = fVar139 - fVar14;
        *(float *)((EndpointRefiner<3> *)local_838 + lVar55) = fVar81 - fVar140;
        *(float *)(local_838 + lVar55 + 4) = fVar131 - fVar9;
        *(float *)(local_838 + lVar55 + 8) = fVar132 - fVar10;
        *(float *)(local_838 + lVar55 + 0xc) = fVar133 - fVar11;
        lVar55 = lVar55 + 0x20;
      } while (lVar55 != 0x60);
      fVar81 = *(float *)pVVar56;
      fVar131 = *(float *)(pVVar56 + 4);
      fVar132 = *(float *)(pVVar56 + 8);
      fVar133 = *(float *)(pVVar56 + 0xc);
      iVar53 = 0;
      fVar134 = *(float *)(pVVar56 + 0x10);
      fVar138 = *(float *)(pVVar56 + 0x14);
      fVar139 = *(float *)(pVVar56 + 0x18);
      fVar140 = *(float *)(pVVar56 + 0x1c);
      iVar67 = 0;
      pEVar73 = (EndpointRefiner<3> *)local_828;
      do {
        fVar9 = *(float *)(pEVar73 + -0x20);
        fVar10 = *(float *)(pEVar73 + -0x1c);
        fVar11 = *(float *)(pEVar73 + -0x18);
        fVar12 = *(float *)(pEVar73 + -0x14);
        fVar13 = *(float *)(pEVar73 + -0x10);
        fVar14 = *(float *)(pEVar73 + -0xc);
        fVar15 = *(float *)(pEVar73 + -8);
        fVar16 = *(float *)(pEVar73 + -4);
        pEVar69 = this + (long)iVar53 * 0x20;
        pEVar54 = (EndpointRefiner<3> *)local_848;
        do {
          pEVar1 = pEVar54 + 0x10;
          fVar17 = *(float *)(pEVar54 + 0x14);
          fVar18 = *(float *)(pEVar54 + 0x18);
          fVar19 = *(float *)(pEVar54 + 0x1c);
          fVar20 = *(float *)pEVar54;
          fVar21 = *(float *)(pEVar54 + 4);
          fVar22 = *(float *)(pEVar54 + 8);
          fVar23 = *(float *)(pEVar54 + 0xc);
          pEVar54 = pEVar54 + 0x20;
          *(float *)(pEVar69 + 0xd0) =
               *(float *)pEVar1 * fVar13 * fVar134 + *(float *)(pEVar69 + 0xd0);
          *(float *)(pEVar69 + 0xd4) = fVar17 * fVar14 * fVar138 + *(float *)(pEVar69 + 0xd4);
          *(float *)(pEVar69 + 0xd8) = fVar18 * fVar15 * fVar139 + *(float *)(pEVar69 + 0xd8);
          *(float *)(pEVar69 + 0xdc) = fVar19 * fVar16 * fVar140 + *(float *)(pEVar69 + 0xdc);
          *(float *)(pEVar69 + 0xc0) = fVar20 * fVar9 * fVar81 + *(float *)(pEVar69 + 0xc0);
          *(float *)(pEVar69 + 0xc4) = fVar21 * fVar10 * fVar131 + *(float *)(pEVar69 + 0xc4);
          *(float *)(pEVar69 + 200) = fVar22 * fVar11 * fVar132 + *(float *)(pEVar69 + 200);
          *(float *)(pEVar69 + 0xcc) = fVar23 * fVar12 * fVar133 + *(float *)(pEVar69 + 0xcc);
          pEVar69 = pEVar69 + 0x20;
        } while (pEVar73 != pEVar54);
        iVar53 = iVar67 + 1 + iVar53;
        iVar67 = iVar67 + 1;
        pEVar73 = pEVar73 + 0x20;
      } while (iVar67 != 3);
      pFVar70 = pFVar70 + 0x80;
      pVVar56 = pVVar56 + 0x20;
    } while (local_2848 != pVVar56);
    EndpointSelector<3,8>::FinishDirection(this);
    uStack_2f64 = _UNK_00106ff4;
    uStack_2f60 = _UNK_00106ff8;
    uStack_2f5c = _UNK_00106ffc;
    iVar67 = 2;
  }
  do {
    auVar120._0_12_ = ZEXT812(0);
    auVar120._12_4_ = 0;
    pEVar69 = this;
    pFVar60 = pFVar70;
    auVar100 = (undefined1  [16])0x0;
    do {
      pEVar59 = pEVar69 + 0x20;
      auVar121._0_4_ =
           auVar120._0_4_ + (*(float *)pFVar60 - *(float *)pEVar69) * *(float *)(pEVar69 + 0x60);
      auVar121._4_4_ =
           auVar120._4_4_ +
           (*(float *)(pFVar60 + 4) - *(float *)(pEVar69 + 4)) * *(float *)(pEVar69 + 100);
      auVar121._8_4_ =
           auVar120._8_4_ +
           (*(float *)(pFVar60 + 8) - *(float *)(pEVar69 + 8)) * *(float *)(pEVar69 + 0x68);
      auVar121._12_4_ =
           auVar120._12_4_ +
           (*(float *)(pFVar60 + 0xc) - *(float *)(pEVar69 + 0xc)) * *(float *)(pEVar69 + 0x6c);
      auVar101._0_4_ =
           auVar100._0_4_ +
           (*(float *)(pFVar60 + 0x10) - *(float *)(pEVar69 + 0x10)) * *(float *)(pEVar69 + 0x70);
      auVar101._4_4_ =
           auVar100._4_4_ +
           (*(float *)(pFVar60 + 0x14) - *(float *)(pEVar69 + 0x14)) * *(float *)(pEVar69 + 0x74);
      auVar101._8_4_ =
           auVar100._8_4_ +
           (*(float *)(pFVar60 + 0x18) - *(float *)(pEVar69 + 0x18)) * *(float *)(pEVar69 + 0x78);
      auVar101._12_4_ =
           auVar100._12_4_ +
           (*(float *)(pFVar60 + 0x1c) - *(float *)(pEVar69 + 0x1c)) * *(float *)(pEVar69 + 0x7c);
      pEVar69 = pEVar59;
      pFVar60 = pFVar60 + 0x20;
      auVar100 = auVar101;
      auVar120 = auVar121;
    } while (local_2bc8 != pEVar59);
    pVVar75 = pVVar75 + 0x20;
    local_2a88 = minps(local_2a88,auVar121);
    local_2a68 = maxps(local_2a68,auVar121);
    local_2a78 = minps(local_2a78,auVar101);
    local_2a58 = maxps(local_2a58,auVar101);
    pFVar60 = (Float *)&local_1048;
    pfVar49 = param_5;
    pEVar73 = (EndpointRefiner<3> *)local_848;
    pFVar70 = pFVar70 + 0x80;
  } while (pVVar75 != local_2848);
  do {
    fVar81 = *pfVar49;
    pEVar69 = this + 0x20;
    auVar102._4_4_ = fVar81;
    auVar102._0_4_ = fVar81;
    auVar102._8_4_ = fVar81;
    auVar102._12_4_ = fVar81;
    fVar81 = *(float *)(this + 0x70) * local_2a78._0_4_ + *(float *)(this + 0x10);
    fVar131 = *(float *)(this + 0x74) * local_2a78._4_4_ + *(float *)(this + 0x14);
    auVar84._4_4_ = fVar131;
    auVar84._0_4_ = fVar81;
    fVar132 = *(float *)(this + 0x78) * local_2a78._8_4_ + *(float *)(this + 0x18);
    fVar133 = *(float *)(this + 0x7c) * local_2a78._12_4_ + *(float *)(this + 0x1c);
    fVar134 = *(float *)(this + 0x60) * local_2a88._0_4_ + *(float *)this;
    fVar138 = *(float *)(this + 100) * local_2a88._4_4_ + *(float *)(this + 4);
    auVar83._4_4_ = fVar138;
    auVar83._0_4_ = fVar134;
    fVar139 = *(float *)(this + 0x68) * local_2a88._8_4_ + *(float *)(this + 8);
    fVar140 = *(float *)(this + 0x6c) * local_2a88._12_4_ + *(float *)(this + 0xc);
    auVar83._8_4_ = fVar139;
    auVar83._12_4_ = fVar140;
    auVar100 = divps(auVar83,auVar102);
    *(undefined1 (*) [16])pFVar60 = auVar100;
    auVar84._8_4_ = fVar132;
    auVar84._12_4_ = fVar133;
    auVar100 = divps(auVar84,auVar102);
    *(undefined1 (*) [16])(pFVar60 + 0x10) = auVar100;
    auVar85._0_4_ = (*(float *)(this + 0x60) * local_2a68._0_4_ + *(float *)this) - fVar134;
    auVar85._4_4_ = (*(float *)(this + 100) * local_2a68._4_4_ + *(float *)(this + 4)) - fVar138;
    auVar85._8_4_ = (*(float *)(this + 0x68) * local_2a68._8_4_ + *(float *)(this + 8)) - fVar139;
    auVar85._12_4_ =
         (*(float *)(this + 0x6c) * local_2a68._12_4_ + *(float *)(this + 0xc)) - fVar140;
    auVar100 = divps(auVar85,auVar102);
    *(undefined1 (*) [16])pEVar73 = auVar100;
    auVar86._0_4_ = (*(float *)(this + 0x70) * local_2a58._0_4_ + *(float *)(this + 0x10)) - fVar81;
    auVar86._4_4_ = (*(float *)(this + 0x74) * local_2a58._4_4_ + *(float *)(this + 0x14)) - fVar131
    ;
    auVar86._8_4_ = (*(float *)(this + 0x78) * local_2a58._8_4_ + *(float *)(this + 0x18)) - fVar132
    ;
    auVar86._12_4_ =
         (*(float *)(this + 0x7c) * local_2a58._12_4_ + *(float *)(this + 0x1c)) - fVar133;
    auVar100 = divps(auVar86,auVar102);
    *(undefined1 (*) [16])(pEVar73 + 0x10) = auVar100;
    pFVar60 = pFVar60 + 0x20;
    pfVar49 = pfVar49 + 1;
    pEVar73 = pEVar73 + 0x20;
    this = pEVar69;
  } while (local_2bc8 != pEVar69);
  pVVar76 = local_2e28;
  local_2ee8 = local_1048;
  uStack_2ee0 = uStack_1040;
  local_2ed8 = local_1038;
  uStack_2ed0 = uStack_1030;
  local_2ec8 = local_1028;
  uStack_2ec0 = uStack_1020;
  local_2eb8 = local_1018;
  uStack_2eb0 = uStack_1010;
  local_2ea8 = local_1008;
  uStack_2ea0 = uStack_1000;
  local_2e98 = local_ff8;
  uStack_2e90 = uStack_ff0;
  local_2e88 = _local_848;
  uStack_2e80 = uStack_840;
  local_2e78 = _local_838;
  uStack_2e70 = uStack_830;
  local_2e68 = local_828._0_8_;
  uStack_2e60 = local_828._8_8_;
  local_2e58 = local_818._0_8_;
  uStack_2e50 = local_818._8_8_;
  pVVar72 = pVVar76;
  for (lVar55 = 0x20; lVar55 != 0; lVar55 = lVar55 + -1) {
    *(undefined8 *)pVVar72 = 0;
    pVVar72 = pVVar72 + (ulong)bVar79 * -0x10 + 8;
  }
  local_2e48 = local_808._0_8_;
  uStack_2e40 = local_808._8_8_;
  local_2e38 = local_7f8._0_8_;
  uStack_2e30 = local_7f8._8_8_;
  local_2fa8[0] = (VInt16)0x0;
  local_2fa8[1] = (VInt16)0x0;
  local_2fa8[2] = (VInt16)0x0;
  local_2fa8[3] = (VInt16)0x0;
  local_2fa8[4] = (VInt16)0x0;
  local_2fa8[5] = (VInt16)0x0;
  local_2fa8[6] = (VInt16)0x0;
  local_2fa8[7] = (VInt16)0x0;
  local_2fa8[8] = (VInt16)0x0;
  local_2fa8[9] = (VInt16)0x0;
  local_2fa8[10] = (VInt16)0x0;
  local_2fa8[0xb] = (VInt16)0x0;
  local_2fa8[0xc] = (VInt16)0x0;
  local_2fa8[0xd] = (VInt16)0x0;
  local_2fa8[0xe] = (VInt16)0x0;
  local_2fa8[0xf] = (VInt16)0x0;
  local_2f48[0] = (VInt16<2>)0x0;
  local_2f48[1] = (VInt16<2>)0x0;
  local_2f48[2] = (VInt16<2>)0x0;
  local_2f48[3] = (VInt16<2>)0x0;
  local_2f48[4] = (VInt16<2>)0x0;
  local_2f48[5] = (VInt16<2>)0x0;
  local_2f48[6] = (VInt16<2>)0x0;
  local_2f48[7] = (VInt16<2>)0x0;
  local_2f48[8] = (VInt16<2>)0x0;
  local_2f48[9] = (VInt16<2>)0x0;
  local_2f48[10] = (VInt16<2>)0x0;
  local_2f48[0xb] = (VInt16<2>)0x0;
  local_2f48[0xc] = (VInt16<2>)0x0;
  local_2f48[0xd] = (VInt16<2>)0x0;
  local_2f48[0xe] = (VInt16<2>)0x0;
  local_2f48[0xf] = (VInt16<2>)0x0;
  local_2f38 = (undefined1  [16])0x0;
  local_2f28 = (undefined1  [16])0x0;
  local_2f18 = (undefined1  [16])0x0;
  local_2f08 = (undefined1  [16])0x0;
  local_2ef8 = (undefined1  [16])0x0;
  local_2f68 = _LC1;
  local_2f58 = _LC1;
  uStack_2f54 = uStack_2f64;
  uStack_2f50 = uStack_2f60;
  uStack_2f4c = uStack_2f5c;
  if (param_8) {
    MXCSR = MXCSR & 0xffff9fff;
    cvtt::Util::ComputeTweakFactors(0,0xb,(float *)local_848);
    auVar40 = local_848;
    fVar81 = fStack_844;
    auVar123._4_4_ = _LC22;
    auVar123._0_4_ = _LC22;
    auVar123._8_4_ = _LC22;
    auVar123._12_4_ = _LC22;
    pfVar49 = (float *)&local_2ee8;
    pFVar70 = (Float *)&local_1048;
    do {
      pfVar44 = pfVar49 + 8;
      auVar118._0_4_ = pfVar49[0x18] * (float)auVar40 + *pfVar49;
      auVar118._4_4_ = pfVar49[0x19] * (float)auVar40 + pfVar49[1];
      auVar118._8_4_ = pfVar49[0x1a] * (float)auVar40 + pfVar49[2];
      auVar118._12_4_ = pfVar49[0x1b] * (float)auVar40 + pfVar49[3];
      auVar129._0_4_ = pfVar49[0x1c] * (float)auVar40 + pfVar49[4];
      auVar129._4_4_ = pfVar49[0x1d] * (float)auVar40 + pfVar49[5];
      auVar129._8_4_ = pfVar49[0x1e] * (float)auVar40 + pfVar49[6];
      auVar129._12_4_ = pfVar49[0x1f] * (float)auVar40 + pfVar49[7];
      auVar87._0_4_ = pfVar49[0x18] * fVar81 + *pfVar49;
      auVar87._4_4_ = pfVar49[0x19] * fVar81 + pfVar49[1];
      auVar87._8_4_ = pfVar49[0x1a] * fVar81 + pfVar49[2];
      auVar87._12_4_ = pfVar49[0x1b] * fVar81 + pfVar49[3];
      auVar107._0_4_ = pfVar49[0x1c] * fVar81 + pfVar49[4];
      auVar107._4_4_ = pfVar49[0x1d] * fVar81 + pfVar49[5];
      auVar107._8_4_ = pfVar49[0x1e] * fVar81 + pfVar49[6];
      auVar107._12_4_ = pfVar49[0x1f] * fVar81 + pfVar49[7];
      auVar127 = minps(auVar118,auVar123);
      auVar136 = minps(auVar129,auVar123);
      auVar100 = minps(auVar87,auVar123);
      auVar114 = minps(auVar107,auVar123);
      auVar127 = maxps(auVar127,(undefined1  [16])0x0);
      auVar136 = maxps(auVar136,(undefined1  [16])0x0);
      auVar100 = maxps(auVar100,(undefined1  [16])0x0);
      auVar114 = maxps(auVar114,(undefined1  [16])0x0);
      auVar119._0_4_ = (int)auVar127._0_4_;
      auVar119._4_4_ = (int)auVar127._4_4_;
      auVar119._8_4_ = (int)auVar127._8_4_;
      auVar119._12_4_ = (int)auVar127._12_4_;
      auVar130._0_4_ = (int)auVar136._0_4_;
      auVar130._4_4_ = (int)auVar136._4_4_;
      auVar130._8_4_ = (int)auVar136._8_4_;
      auVar130._12_4_ = (int)auVar136._12_4_;
      auVar127 = packssdw(auVar119,auVar130);
      auVar88._0_4_ = (int)auVar100._0_4_;
      auVar88._4_4_ = (int)auVar100._4_4_;
      auVar88._8_4_ = (int)auVar100._8_4_;
      auVar88._12_4_ = (int)auVar100._12_4_;
      *(undefined1 (*) [16])pFVar70 = auVar127;
      auVar108._0_4_ = (int)auVar114._0_4_;
      auVar108._4_4_ = (int)auVar114._4_4_;
      auVar108._8_4_ = (int)auVar114._8_4_;
      auVar108._12_4_ = (int)auVar114._12_4_;
      auVar100 = packssdw(auVar88,auVar108);
      *(undefined1 (*) [16])(pFVar70 + 0x30) = auVar100;
      pfVar49 = pfVar44;
      pFVar70 = pFVar70 + 0x10;
    } while ((float *)&local_2e88 != pfVar44);
    MXCSR = uVar57;
    IndexSelector<3>::Init<cvtt::ParallelMath::VInt16<2>,cvtt::ParallelMath::VInt16<2>>
              ((IndexSelector<3> *)local_848,param_5,(VInt16<2> *)&local_1048,
               (VInt16<2> *)&local_1048,0x800);
    auVar124._4_4_ = local_724;
    auVar124._0_4_ = local_724;
    auVar124._8_4_ = local_724;
    auVar124._12_4_ = local_724;
    puVar62 = local_2d28;
    pFVar70 = local_2048;
    sVar94 = 0;
    do {
      auVar89._0_4_ =
           (*(float *)(pFVar70 + 0x20) - (float)local_7c8._0_4_) * (float)local_768._0_4_ +
           (*(float *)pFVar70 - (float)local_7e8._0_4_) * (float)local_788._0_4_ +
           (*(float *)(pFVar70 + 0x40) - (float)local_7a8._0_4_) * (float)local_748._0_4_;
      auVar89._4_4_ =
           (*(float *)(pFVar70 + 0x24) - (float)local_7c8._4_4_) * (float)local_768._4_4_ +
           (*(float *)(pFVar70 + 4) - (float)local_7e8._4_4_) * (float)local_788._4_4_ +
           (*(float *)(pFVar70 + 0x44) - (float)local_7a8._4_4_) * (float)local_748._4_4_;
      auVar89._8_4_ =
           (*(float *)(pFVar70 + 0x28) - fStack_7c0) * fStack_760 +
           (*(float *)(pFVar70 + 8) - fStack_7e0) * fStack_780 +
           (*(float *)(pFVar70 + 0x48) - fStack_7a0) * fStack_740;
      auVar89._12_4_ =
           (*(float *)(pFVar70 + 0x2c) - fStack_7bc) * fStack_75c +
           (*(float *)(pFVar70 + 0xc) - fStack_7dc) * fStack_77c +
           (*(float *)(pFVar70 + 0x4c) - fStack_79c) * fStack_73c;
      auVar100 = minps(auVar89,auVar124);
      auVar100 = maxps(auVar100,(undefined1  [16])0x0);
      auVar90._0_4_ = (int)auVar100._0_4_;
      auVar90._4_4_ = (int)auVar100._4_4_;
      auVar90._8_4_ = (int)auVar100._8_4_;
      auVar90._12_4_ = (int)auVar100._12_4_;
      local_3078._0_4_ = local_738._0_4_;
      local_3078._4_4_ = local_738._4_4_;
      fStack_3070 = local_738._8_4_;
      fStack_306c = local_738._12_4_;
      auVar109._0_4_ =
           (*(float *)(pFVar70 + 0x30) - (float)local_7b8._0_4_) * (float)local_758._0_4_ +
           (*(float *)(pFVar70 + 0x10) - (float)local_7d8._0_4_) * (float)local_778._0_4_ +
           (*(float *)(pFVar70 + 0x50) - (float)local_798._0_4_) * (float)local_3078;
      auVar109._4_4_ =
           (*(float *)(pFVar70 + 0x34) - (float)local_7b8._4_4_) * (float)local_758._4_4_ +
           (*(float *)(pFVar70 + 0x14) - (float)local_7d8._4_4_) * (float)local_778._4_4_ +
           (*(float *)(pFVar70 + 0x54) - (float)local_798._4_4_) * local_3078._4_4_;
      auVar109._8_4_ =
           (*(float *)(pFVar70 + 0x38) - fStack_7b0) * fStack_750 +
           (*(float *)(pFVar70 + 0x18) - fStack_7d0) * fStack_770 +
           (*(float *)(pFVar70 + 0x58) - fStack_790) * fStack_3070;
      auVar109._12_4_ =
           (*(float *)(pFVar70 + 0x3c) - fStack_7ac) * fStack_74c +
           (*(float *)(pFVar70 + 0x1c) - fStack_7cc) * fStack_76c +
           (*(float *)(pFVar70 + 0x5c) - fStack_78c) * fStack_306c;
      auVar100 = minps(auVar109,auVar124);
      auVar100 = maxps(auVar100,(undefined1  [16])0x0);
      auVar110._0_4_ = (int)auVar100._0_4_;
      auVar110._4_4_ = (int)auVar100._4_4_;
      auVar110._8_4_ = (int)auVar100._8_4_;
      auVar110._12_4_ = (int)auVar100._12_4_;
      auVar100 = packssdw(auVar90,auVar110);
      auVar100 = psllw(auVar100,4);
      if (param_6) {
        auVar111._0_2_ = -(ushort)((short)*puVar46 < (short)__LC29);
        auVar111._2_2_ = -(ushort)((short)puVar46[1] < (short)_UNK_00107042);
        auVar111._4_2_ = -(ushort)((short)puVar46[2] < (short)_UNK_00107044);
        auVar111._6_2_ = -(ushort)((short)puVar46[3] < (short)_UNK_00107046);
        auVar111._8_2_ = -(ushort)((short)puVar46[4] < (short)_UNK_00107048);
        auVar111._10_2_ = -(ushort)((short)puVar46[5] < (short)_UNK_0010704a);
        auVar111._12_2_ = -(ushort)((short)puVar46[6] < (short)_UNK_0010704c);
        auVar111._14_2_ = -(ushort)((short)puVar46[7] < (short)_UNK_0010704e);
        auVar100 = auVar111 & __LC30 | ~auVar111 & auVar100;
      }
      sVar41 = sVar94 + 1;
      pFVar70 = pFVar70 + 0x80;
      puVar46 = puVar46 + 0x20;
      *puVar62 = sVar94 + auVar100._0_2_;
      puVar62[1] = sVar94 + auVar100._2_2_;
      puVar62[2] = sVar94 + auVar100._4_2_;
      puVar62[3] = sVar94 + auVar100._6_2_;
      puVar62[4] = sVar94 + auVar100._8_2_;
      puVar62[5] = sVar94 + auVar100._10_2_;
      puVar62[6] = sVar94 + auVar100._12_2_;
      puVar62[7] = sVar94 + auVar100._14_2_;
      puVar62 = puVar62 + 8;
      sVar94 = sVar41;
    } while (sVar41 != 0x10);
    puVar46 = local_2d28;
    iVar67 = 1;
    do {
      puVar46 = puVar46 + 8;
      uVar80 = *puVar46;
      uVar92 = puVar46[1];
      uVar93 = puVar46[2];
      uVar95 = puVar46[3];
      uVar96 = puVar46[4];
      uVar97 = puVar46[5];
      uVar98 = puVar46[6];
      uVar99 = puVar46[7];
      puVar62 = puVar46;
      do {
        puVar50 = puVar62 + -8;
        uVar24 = *puVar50;
        uVar25 = puVar62[-7];
        uVar26 = puVar62[-6];
        uVar27 = puVar62[-5];
        uVar28 = puVar62[-4];
        uVar29 = puVar62[-3];
        uVar30 = puVar62[-2];
        uVar31 = puVar62[-1];
        *puVar62 = ((short)uVar24 < (short)uVar80) * uVar80 |
                   ((short)uVar24 >= (short)uVar80) * uVar24;
        puVar62[1] = ((short)uVar25 < (short)uVar92) * uVar92 |
                     ((short)uVar25 >= (short)uVar92) * uVar25;
        puVar62[2] = ((short)uVar26 < (short)uVar93) * uVar93 |
                     ((short)uVar26 >= (short)uVar93) * uVar26;
        puVar62[3] = ((short)uVar27 < (short)uVar95) * uVar95 |
                     ((short)uVar27 >= (short)uVar95) * uVar27;
        puVar62[4] = ((short)uVar28 < (short)uVar96) * uVar96 |
                     ((short)uVar28 >= (short)uVar96) * uVar28;
        puVar62[5] = ((short)uVar29 < (short)uVar97) * uVar97 |
                     ((short)uVar29 >= (short)uVar97) * uVar29;
        puVar62[6] = ((short)uVar30 < (short)uVar98) * uVar98 |
                     ((short)uVar30 >= (short)uVar98) * uVar30;
        puVar62[7] = ((short)uVar31 < (short)uVar99) * uVar99 |
                     ((short)uVar31 >= (short)uVar99) * uVar31;
        uVar24 = *puVar50;
        uVar25 = puVar62[-7];
        uVar26 = puVar62[-6];
        uVar27 = puVar62[-5];
        uVar28 = puVar62[-4];
        uVar29 = puVar62[-3];
        uVar30 = puVar62[-2];
        uVar31 = puVar62[-1];
        uVar80 = ((short)uVar80 < (short)uVar24) * uVar80 |
                 ((short)uVar80 >= (short)uVar24) * uVar24;
        uVar92 = ((short)uVar92 < (short)uVar25) * uVar92 |
                 ((short)uVar92 >= (short)uVar25) * uVar25;
        uVar93 = ((short)uVar93 < (short)uVar26) * uVar93 |
                 ((short)uVar93 >= (short)uVar26) * uVar26;
        uVar95 = ((short)uVar95 < (short)uVar27) * uVar95 |
                 ((short)uVar95 >= (short)uVar27) * uVar27;
        uVar96 = ((short)uVar96 < (short)uVar28) * uVar96 |
                 ((short)uVar96 >= (short)uVar28) * uVar28;
        uVar97 = ((short)uVar97 < (short)uVar29) * uVar97 |
                 ((short)uVar97 >= (short)uVar29) * uVar29;
        uVar98 = ((short)uVar98 < (short)uVar30) * uVar98 |
                 ((short)uVar98 >= (short)uVar30) * uVar30;
        uVar99 = ((short)uVar99 < (short)uVar31) * uVar99 |
                 ((short)uVar99 >= (short)uVar31) * uVar31;
        *puVar50 = uVar80;
        puVar62[-7] = uVar92;
        puVar62[-6] = uVar93;
        puVar62[-5] = uVar95;
        puVar62[-4] = uVar96;
        puVar62[-3] = uVar97;
        puVar62[-2] = uVar98;
        puVar62[-1] = uVar99;
        puVar62 = puVar50;
      } while (local_2d28 != puVar50);
      iVar67 = iVar67 + 1;
    } while (iVar67 != 0x10);
    local_2f98 = (undefined1  [16])0x0;
    sVar94 = 0;
    puVar46 = local_2d28;
    do {
      sVar94 = sVar94 + 1;
      auVar112._0_2_ = -(ushort)((short)*puVar46 < 0);
      auVar112._2_2_ = -(ushort)((short)puVar46[1] < 0);
      auVar112._4_2_ = -(ushort)((short)puVar46[2] < 0);
      auVar112._6_2_ = -(ushort)((short)puVar46[3] < 0);
      auVar112._8_2_ = -(ushort)((short)puVar46[4] < 0);
      auVar112._10_2_ = -(ushort)((short)puVar46[5] < 0);
      auVar112._12_2_ = -(ushort)((short)puVar46[6] < 0);
      auVar112._14_2_ = -(ushort)((short)puVar46[7] < 0);
      auVar91._0_4_ = CONCAT22(sVar94,sVar94);
      auVar91._4_4_ = auVar91._0_4_;
      auVar91._8_4_ = auVar91._0_4_;
      auVar91._12_4_ = auVar91._0_4_;
      local_2f98 = auVar91 & auVar112 | ~auVar112 & local_2f98;
      if ((((((((((((((((auVar112 >> 7 & (undefined1  [16])0x1) == (undefined1  [16])0x0 &&
                       (auVar112 >> 0xf & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                      (auVar112 >> 0x17 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                     (auVar112 >> 0x1f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                    (auVar112 >> 0x27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                   (auVar112 >> 0x2f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                  (auVar112 >> 0x37 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                 (auVar112 >> 0x3f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
                (auVar112 >> 0x47 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
               (auVar112 >> 0x4f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
              (auVar112 >> 0x57 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
             (auVar112 >> 0x5f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
            (auVar112 >> 0x67 & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
           (auVar112 >> 0x6f & (undefined1  [16])0x1) == (undefined1  [16])0x0) &&
          (auVar112._14_2_ >> 7 & 1) == 0) && (auVar112._14_2_ & 0x8000) == 0) break;
      puVar46 = puVar46 + 8;
    } while (sVar94 != 0x10);
    pFVar70 = (Float *)local_2448;
    local_2f88 = __LC31 - local_2f98._0_2_;
    sStack_2f86 = _UNK_001070b2 - local_2f98._2_2_;
    sStack_2f84 = _UNK_001070b4 - local_2f98._4_2_;
    sStack_2f82 = _UNK_001070b6 - local_2f98._6_2_;
    sStack_2f80 = _UNK_001070b8 - local_2f98._8_2_;
    sStack_2f7e = _UNK_001070ba - local_2f98._10_2_;
    sStack_2f7c = _UNK_001070bc - local_2f98._12_2_;
    sStack_2f7a = _UNK_001070be - local_2f98._14_2_;
    pFVar60 = pFVar70;
    do {
      *(undefined1 (*) [16])pFVar60 = (undefined1  [16])0x0;
      pFVar51 = pFVar60 + 0x40;
      *(undefined1 (*) [16])(pFVar60 + 0x10) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pFVar60 + 0x20) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pFVar60 + 0x30) = (undefined1  [16])0x0;
      pFVar60 = pFVar51;
    } while (local_2048 != pFVar51);
    lVar55 = 0;
    do {
      uVar80 = *(ushort *)(local_2f98 + lVar55 * 2);
      if (uVar80 < 0x10) {
        uVar74 = (ulong)uVar80;
        puVar46 = local_2d28 + lVar55 + uVar74 * 8;
        pFVar60 = pFVar70 + ((0xf - uVar74) * 0x20 + lVar55) * 2;
        do {
          uVar92 = *puVar46;
          lVar47 = 0;
          do {
            *(undefined2 *)(pFVar60 + lVar47) =
                 *(undefined2 *)(local_2848 + lVar47 + ((ulong)(uVar92 & 0xf) * 0x20 + lVar55) * 2);
            lVar47 = lVar47 + 0x10;
          } while (lVar47 != 0x40);
          pFVar60 = pFVar60 + -0x40;
          puVar46 = puVar46 + 8;
        } while (local_2d28 + lVar55 + ((0xf - uVar80) + uVar74) * 8 + 8 != puVar46);
      }
      lVar55 = lVar55 + 1;
    } while (lVar55 != 8);
    lVar47 = 0;
    pfVar49 = param_5;
    lVar55 = lVar47;
    pFVar60 = pFVar70;
    do {
      do {
        auVar100 = *(undefined1 (*) [16])pFVar70;
        fVar81 = *pfVar49;
        pfVar49 = pfVar49 + 1;
        pFVar70 = pFVar70 + 0x10;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar100._0_10_;
        auVar5._12_2_ = auVar100._6_2_;
        auVar8._8_2_ = auVar100._4_2_;
        auVar8._0_8_ = auVar100._0_8_;
        auVar8._10_4_ = auVar5._10_4_;
        auVar35._6_8_ = 0;
        auVar35._0_6_ = auVar8._8_6_;
        fVar131 = (float)(int)CONCAT82(SUB148(auVar35 << 0x40,6),auVar100._2_2_);
        fVar132 = (float)(auVar5._10_4_ >> 0x10);
        *(float *)((Float *)&local_1048 + lVar47) = (float)auVar100._0_2_;
        *(float *)((long)&local_1048 + lVar47 + 4) = fVar131;
        *(float *)((long)&uStack_1040 + lVar47) = (float)auVar8._8_4_;
        *(float *)((long)&uStack_1040 + lVar47 + 4) = fVar132;
        *(float *)((long)&local_1038 + lVar47) = (float)auVar100._8_2_;
        *(float *)((long)&local_1038 + lVar47 + 4) = (float)auVar100._10_2_;
        *(float *)((long)&uStack_1030 + lVar47) = (float)auVar100._12_2_;
        *(float *)((long)&uStack_1030 + lVar47 + 4) = (float)auVar100._14_2_;
        *(float *)((EndpointRefiner<3> *)local_848 + lVar47) = (float)auVar100._0_2_ * fVar81;
        *(float *)(local_848 + lVar47 + 4) = fVar131 * fVar81;
        *(float *)(local_848 + lVar47 + 8) = (float)auVar8._8_4_ * fVar81;
        *(float *)(local_848 + lVar47 + 0xc) = fVar132 * fVar81;
        *(float *)((EndpointRefiner<3> *)local_838 + lVar47) = fVar81 * (float)auVar100._8_2_;
        *(float *)(local_838 + lVar47 + 4) = fVar81 * (float)auVar100._10_2_;
        *(float *)(local_838 + lVar47 + 8) = fVar81 * (float)auVar100._12_2_;
        *(float *)(local_838 + lVar47 + 0xc) = fVar81 * (float)auVar100._14_2_;
        lVar47 = lVar47 + 0x20;
      } while (pfVar49 != param_5 + 4);
      pFVar70 = pFVar60 + 0x40;
      lVar47 = lVar55 + 0x80;
      pfVar49 = param_5;
      lVar55 = lVar47;
      pFVar60 = pFVar70;
    } while (pFVar70 != local_2048);
    iVar67 = 0x10;
    do {
      iVar53 = 0xf;
      if (iVar67 != 0x10) {
        iVar53 = iVar67;
      }
      iVar77 = 0;
      iVar42 = iVar67;
      do {
        local_3078 = local_2f48;
        if (iVar42 == 0x10) {
          iVar78 = 0xf;
LAB_00102b34:
          iVar63 = 0;
          iVar64 = iVar42;
          do {
            if (iVar64 != 0x10) {
              uStack_2f70 = CONCAT44(iVar64,iVar63);
              local_2f78 = CONCAT44(iVar77,0x10 - iVar67);
              TestCounts(param_1,(int *)&local_2f78,4,(VInt16 *)&local_2f88,local_2848,local_2048,
                         local_1848,param_6,(Float *)&local_1048,(Float *)local_848,param_5,
                         (Float *)&local_2f68,local_3078,pVVar76,local_2fa8,
                         (RoundTowardNearestForScope *)&local_2fac);
            }
            iVar63 = iVar63 + 1;
            iVar64 = iVar64 + -1;
          } while (iVar63 <= iVar78);
        }
        else {
          iVar78 = iVar42;
          if (-1 < iVar42) goto LAB_00102b34;
        }
        iVar77 = iVar77 + 1;
        iVar42 = iVar42 + -1;
      } while (iVar77 != iVar53 + 1);
      iVar67 = iVar67 + -1;
    } while (iVar67 != 0);
    TestSingleColor(param_1,local_2848,local_2048,4,param_5,(Float *)&local_2f68,local_3078,pVVar76,
                    local_2fa8,(RoundTowardNearestForScope *)&local_2fac);
    if (param_6) {
      iVar67 = 0x10;
      do {
        iVar53 = 0xf;
        if (iVar67 != 0x10) {
          iVar53 = iVar67;
        }
        iVar77 = 0;
        iVar42 = iVar67;
        do {
          local_3078 = local_2f48;
          if (iVar42 != 0x10) {
            uStack_2f70 = CONCAT44(uStack_2f70._4_4_,iVar42);
            local_2f78 = CONCAT44(iVar77,0x10 - iVar67);
            TestCounts(param_1,(int *)&local_2f78,3,(VInt16 *)&local_2f88,local_2848,local_2048,
                       local_1848,true,(Float *)&local_1048,(Float *)local_848,param_5,
                       (Float *)&local_2f68,local_3078,pVVar76,local_2fa8,
                       (RoundTowardNearestForScope *)&local_2fac);
          }
          iVar77 = iVar77 + 1;
          iVar42 = iVar42 + -1;
        } while (iVar77 != iVar53 + 1);
        iVar67 = iVar67 + -1;
      } while (iVar67 != 0);
      TestSingleColor(param_1,local_2848,local_2048,3,param_5,(Float *)&local_2f68,local_3078,
                      pVVar76,local_2fa8,(RoundTowardNearestForScope *)&local_2fac);
    }
  }
  else {
    iVar67 = 1;
    if (0 < param_10) {
      iVar67 = param_10;
    }
    iVar53 = 1;
    if (0 < param_9) {
      iVar53 = param_9;
    }
    local_3020 = 4 - (uint)param_6;
    iVar42 = cvtt::Internal::BCCommon::TweakRoundsForRange(local_3020);
    if (iVar53 < iVar42) {
      iVar42 = iVar53;
    }
    if (iVar42 < 1) goto LAB_001022a9;
    do {
      fVar81 = _LC13;
      local_2fe0 = 0;
      auVar122._4_4_ = _LC22;
      auVar122._0_4_ = _LC22;
      auVar122._8_4_ = _LC22;
      auVar122._12_4_ = _LC22;
      do {
        uVar57 = MXCSR;
        MXCSR = MXCSR & 0xffff9fff;
        cvtt::Util::ComputeTweakFactors(local_2fe0,local_3020,(float *)local_848);
        pfVar49 = (float *)&local_2ee8;
        pVVar75 = local_2448;
        do {
          pfVar44 = pfVar49 + 8;
          auVar126._0_4_ = pfVar49[0x18] * (float)local_848 + *pfVar49;
          auVar126._4_4_ = pfVar49[0x19] * (float)local_848 + pfVar49[1];
          auVar126._8_4_ = pfVar49[0x1a] * (float)local_848 + pfVar49[2];
          auVar126._12_4_ = pfVar49[0x1b] * (float)local_848 + pfVar49[3];
          auVar135._0_4_ = pfVar49[0x1c] * (float)local_848 + pfVar49[4];
          auVar135._4_4_ = pfVar49[0x1d] * (float)local_848 + pfVar49[5];
          auVar135._8_4_ = pfVar49[0x1e] * (float)local_848 + pfVar49[6];
          auVar135._12_4_ = pfVar49[0x1f] * (float)local_848 + pfVar49[7];
          auVar103._0_4_ = pfVar49[0x18] * fStack_844 + *pfVar49;
          auVar103._4_4_ = pfVar49[0x19] * fStack_844 + pfVar49[1];
          auVar103._8_4_ = pfVar49[0x1a] * fStack_844 + pfVar49[2];
          auVar103._12_4_ = pfVar49[0x1b] * fStack_844 + pfVar49[3];
          auVar113._0_4_ = pfVar49[0x1c] * fStack_844 + pfVar49[4];
          auVar113._4_4_ = pfVar49[0x1d] * fStack_844 + pfVar49[5];
          auVar113._8_4_ = pfVar49[0x1e] * fStack_844 + pfVar49[6];
          auVar113._12_4_ = pfVar49[0x1f] * fStack_844 + pfVar49[7];
          auVar127 = minps(auVar126,auVar122);
          auVar136 = minps(auVar135,auVar122);
          auVar100 = minps(auVar103,auVar122);
          auVar114 = minps(auVar113,auVar122);
          auVar127 = maxps(auVar127,(undefined1  [16])0x0);
          auVar136 = maxps(auVar136,(undefined1  [16])0x0);
          auVar100 = maxps(auVar100,(undefined1  [16])0x0);
          auVar114 = maxps(auVar114,(undefined1  [16])0x0);
          auVar128._0_4_ = (int)auVar127._0_4_;
          auVar128._4_4_ = (int)auVar127._4_4_;
          auVar128._8_4_ = (int)auVar127._8_4_;
          auVar128._12_4_ = (int)auVar127._12_4_;
          auVar137._0_4_ = (int)auVar136._0_4_;
          auVar137._4_4_ = (int)auVar136._4_4_;
          auVar137._8_4_ = (int)auVar136._8_4_;
          auVar137._12_4_ = (int)auVar136._12_4_;
          auVar127 = packssdw(auVar128,auVar137);
          auVar104._0_4_ = (int)auVar100._0_4_;
          auVar104._4_4_ = (int)auVar100._4_4_;
          auVar104._8_4_ = (int)auVar100._8_4_;
          auVar104._12_4_ = (int)auVar100._12_4_;
          *(undefined1 (*) [16])pVVar75 = auVar127;
          auVar115._0_4_ = (int)auVar114._0_4_;
          auVar115._4_4_ = (int)auVar114._4_4_;
          auVar115._8_4_ = (int)auVar114._8_4_;
          auVar115._12_4_ = (int)auVar114._12_4_;
          auVar100 = packssdw(auVar104,auVar115);
          *(undefined1 (*) [16])(pVVar75 + 0x30) = auVar100;
          pfVar49 = pfVar44;
          pVVar75 = pVVar75 + 0x10;
        } while ((float *)&local_2e88 != pfVar44);
        iVar77 = 0;
        MXCSR = uVar57;
        do {
          _local_848 = (undefined1  [16])0x0;
          _local_838 = (undefined1  [16])0x0;
          _local_7e8 = (undefined1  [16])0x0;
          _local_7d8 = (undefined1  [16])0x0;
          local_828 = (undefined1  [16])0x0;
          local_818 = (undefined1  [16])0x0;
          _local_7c8 = (undefined1  [16])0x0;
          _local_7b8 = (undefined1  [16])0x0;
          local_808 = (undefined1  [16])0x0;
          local_7f8 = (undefined1  [16])0x0;
          _local_7a8 = (undefined1  [16])0x0;
          _local_798 = (undefined1  [16])0x0;
          _local_788 = (undefined1  [16])0x0;
          _local_778 = (undefined1  [16])0x0;
          _local_768 = (undefined1  [16])0x0;
          _local_758 = (undefined1  [16])0x0;
          _local_748 = (undefined1  [16])0x0;
          local_738 = (undefined1  [16])0x0;
          pEVar73 = (EndpointRefiner<3> *)local_848;
          pfVar49 = param_5;
          do {
            fVar131 = *pfVar49;
            fVar132 = fVar81;
            if (fVar131 != 0.0) {
              fVar132 = fVar81 / fVar131;
            }
            *(float *)(pEVar73 + 0x128) = fVar131;
            pEVar54 = pEVar73 + 4;
            pfVar49 = pfVar49 + 1;
            *(float *)(pEVar73 + 0x134) = fVar132;
            pEVar73 = pEVar54;
          } while ((EndpointRefiner<3> *)(local_848 + 0xc) != pEVar54);
          local_728 = 0;
          local_724 = fVar81 / (float)(local_3020 + -1);
          TestEndpoints(param_1,local_2848,local_2048,local_1848,local_2448,local_3020,param_5,
                        (Float *)&local_2f68,local_2f48,pVVar76,local_2fa8,
                        (EndpointRefiner *)local_848,(RoundTowardNearestForScope *)&local_2fac);
          if (iVar77 != iVar67 + -1) {
            EndpointRefiner<3>::GetRefinedEndpoints
                      ((EndpointRefiner<3> *)local_848,(Float *)&local_1048);
            pFVar70 = (Float *)&local_1048;
            pVVar75 = local_2448;
            do {
              auVar100 = *(undefined1 (*) [16])pFVar70;
              pFVar60 = pFVar70 + 0x10;
              pFVar70 = pFVar70 + 0x20;
              auVar100 = minps(auVar100,auVar122);
              auVar114 = minps(*(undefined1 (*) [16])pFVar60,auVar122);
              auVar100 = maxps(auVar100,(undefined1  [16])0x0);
              auVar114 = maxps(auVar114,(undefined1  [16])0x0);
              auVar105._0_4_ = (int)auVar100._0_4_;
              auVar105._4_4_ = (int)auVar100._4_4_;
              auVar105._8_4_ = (int)auVar100._8_4_;
              auVar105._12_4_ = (int)auVar100._12_4_;
              auVar116._0_4_ = (int)auVar114._0_4_;
              auVar116._4_4_ = (int)auVar114._4_4_;
              auVar116._8_4_ = (int)auVar114._8_4_;
              auVar116._12_4_ = (int)auVar114._12_4_;
              auVar100 = packssdw(auVar105,auVar116);
              *(undefined1 (*) [16])pVVar75 = auVar100;
              pVVar75 = pVVar75 + 0x10;
            } while (local_fe8 != pFVar70);
            lVar55 = 0;
            do {
              auVar100 = minps(*(undefined1 (*) [16])(local_fe8 + lVar55 * 2),auVar122);
              auVar114 = minps(*(undefined1 (*) [16])(auStack_fd8 + lVar55 * 2),auVar122);
              auVar100 = maxps(auVar100,(undefined1  [16])0x0);
              auVar114 = maxps(auVar114,(undefined1  [16])0x0);
              auVar106._0_4_ = (int)auVar100._0_4_;
              auVar106._4_4_ = (int)auVar100._4_4_;
              auVar106._8_4_ = (int)auVar100._8_4_;
              auVar106._12_4_ = (int)auVar100._12_4_;
              auVar117._0_4_ = (int)auVar114._0_4_;
              auVar117._4_4_ = (int)auVar114._4_4_;
              auVar117._8_4_ = (int)auVar114._8_4_;
              auVar117._12_4_ = (int)auVar114._12_4_;
              auVar100 = packssdw(auVar106,auVar117);
              *(undefined1 (*) [16])((long)local_2418 + lVar55) = auVar100;
              lVar55 = lVar55 + 0x10;
            } while (lVar55 != 0x30);
          }
          iVar77 = iVar77 + 1;
        } while (iVar67 != iVar77);
        local_2fe0 = local_2fe0 + 1;
      } while (local_2fe0 != iVar42);
LAB_001022a9:
      if (local_3020 == 4) break;
      iVar42 = cvtt::Internal::BCCommon::TweakRoundsForRange(4);
      local_3020 = 4;
      if (iVar53 <= iVar42) {
        iVar42 = iVar53;
      }
    } while (0 < iVar42);
  }
  uVar38 = _LC33;
  uVar37 = _LC32;
  local_3078 = local_2f48;
  lVar55 = 0;
  do {
    uVar57 = *(ushort *)(local_3078 + 0x20) >> 3 & 0x1f |
             (*(ushort *)(local_3078 + 0x10) & 0xfc) << 3 | (*(ushort *)local_3078 & 0xf8) << 8;
    uVar52 = *(ushort *)(local_3078 + 0x50) >> 3 & 0x1f |
             (*(ushort *)(local_3078 + 0x40) & 0xfc) << 3 |
             (*(ushort *)(local_3078 + 0x30) & 0xf8) << 8;
    uVar80 = (ushort)uVar52;
    uVar92 = (ushort)uVar57;
    if (*(short *)(local_2fa8 + lVar55 * 2) == 4) {
      uVar66 = uVar57;
      if (uVar80 == uVar92) {
        _local_848 = 0;
        uVar58 = 0;
        uStack_840._4_4_ = 0;
      }
      else if (uVar92 < uVar80) {
        _local_848 = uVar37;
        uStack_840._4_4_ = 0;
        uVar58 = 2;
        uVar66 = uVar52;
        uVar52 = uVar57;
      }
      else {
        _local_848 = uVar38;
        uVar58 = 3;
        uStack_840._4_4_ = 1;
      }
    }
    else {
      _local_848 = 0x200000000;
      auVar100 = _local_848;
      local_848[0] = uVar80 < uVar92;
      uVar43 = uVar52;
      if ((bool)local_848[0]) {
        uVar43 = uVar57;
        uVar57 = uVar52;
      }
      uVar58 = (uint)!(bool)local_848[0];
      local_848._1_3_ = 0;
      _fStack_844 = auVar100._4_12_;
      uStack_840._4_4_ = 3;
      uVar66 = uVar57;
      uVar52 = uVar43;
    }
    uStack_840._0_4_ = uVar58;
    *(uint *)param_3 = (uVar52 << 8 | uVar66 >> 8) << 8 | uVar66 & 0xff;
    pVVar72 = pVVar76;
    iVar67 = 0;
    do {
      iVar53 = 0;
      uVar57 = 0;
      pVVar61 = pVVar72;
      do {
        uVar80 = *(ushort *)pVVar61;
        pVVar61 = pVVar61 + 0x10;
        bVar79 = (byte)iVar53;
        iVar53 = iVar53 + 2;
        uVar57 = uVar57 | *(int *)(local_848 + (ulong)uVar80 * 4) << (bVar79 & 0x1f);
      } while (iVar53 != 8);
      iVar53 = iVar67 + 4;
      pVVar72 = pVVar72 + 0x40;
      *(char *)((long)param_3 + (long)((iVar67 >> 2) + 4)) = (char)uVar57;
      iVar67 = iVar53;
    } while (iVar53 != 0x10);
    lVar55 = lVar55 + 1;
    param_3 = (uchar *)((long)param_3 + param_4);
    local_3078 = local_3078 + 2;
    pVVar76 = pVVar76 + 2;
  } while (lVar55 != 8);
  MXCSR = uVar39;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cvtt::Internal::S3TCComputer::PackInterpolatedAlpha(unsigned int, cvtt::PixelBlockU8 const*, int,
   unsigned char*, unsigned long, bool, int, int) */

void cvtt::Internal::S3TCComputer::PackInterpolatedAlpha
               (uint param_1,PixelBlockU8 *param_2,int param_3,uchar *param_4,ulong param_5,
               bool param_6,int param_7,int param_8)

{
  PixelBlockU8 PVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  unkuint10 Var34;
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined1 auVar40 [14];
  undefined1 auVar41 [14];
  undefined1 auVar42 [14];
  undefined1 auVar43 [14];
  undefined1 auVar44 [14];
  undefined1 auVar45 [14];
  undefined1 auVar46 [14];
  undefined1 auVar47 [14];
  undefined1 auVar48 [14];
  undefined1 auVar49 [14];
  undefined1 auVar50 [14];
  bool bVar51;
  undefined1 auVar52 [12];
  undefined8 uVar53;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined8 uVar58;
  undefined1 auVar59 [12];
  undefined1 *puVar60;
  uint uVar61;
  int iVar62;
  uint uVar63;
  long lVar64;
  undefined1 (*pauVar65) [16];
  long lVar66;
  undefined1 (*pauVar67) [16];
  int iVar68;
  int iVar69;
  undefined1 (*pauVar70) [16];
  undefined1 (*extraout_RDX) [16];
  undefined1 (*pauVar71) [16];
  undefined1 (*extraout_RDX_00) [16];
  EndpointRefiner<1> *pEVar72;
  int iVar73;
  PixelBlockU8 *pPVar74;
  PixelBlockU8 *pPVar75;
  ulong uVar76;
  EndpointRefiner<1> *pEVar77;
  int iVar78;
  undefined1 (*pauVar79) [16];
  short *psVar80;
  long in_FS_OFFSET;
  bool bVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  ushort uVar95;
  short sVar96;
  float fVar97;
  ushort uVar114;
  ushort uVar116;
  float fVar118;
  ushort uVar120;
  ushort uVar122;
  float fVar124;
  ushort uVar126;
  ushort uVar128;
  ushort uVar132;
  undefined1 auVar99 [16];
  float fVar130;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  short sVar115;
  int iVar98;
  short sVar117;
  short sVar121;
  int iVar119;
  short sVar123;
  short sVar127;
  int iVar125;
  short sVar129;
  short sVar133;
  int iVar131;
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
  short sVar134;
  ushort uVar135;
  float fVar136;
  short sVar159;
  float fVar161;
  short sVar164;
  float fVar166;
  short sVar169;
  undefined1 auVar137 [16];
  float fVar171;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  short sVar157;
  short sVar162;
  short sVar167;
  short sVar172;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  ushort uVar158;
  ushort uVar160;
  ushort uVar163;
  ushort uVar165;
  ushort uVar168;
  ushort uVar170;
  ushort uVar173;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar174;
  ushort uVar181;
  ushort uVar183;
  float fVar182;
  ushort uVar184;
  ushort uVar186;
  float fVar185;
  ushort uVar187;
  undefined1 auVar175 [16];
  ushort uVar189;
  float fVar188;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar190;
  float fVar202;
  float fVar203;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  float fVar204;
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  short sVar212;
  short sVar213;
  short sVar214;
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar215;
  float fVar216;
  float fVar220;
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar225;
  float fVar226;
  float fVar227;
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  float fVar228;
  float fVar229;
  float fVar234;
  float fVar235;
  float fVar236;
  float fVar237;
  float fVar238;
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  float fVar239;
  undefined1 auVar233 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  short sVar247;
  short sVar248;
  short sVar249;
  float fVar250;
  float fVar253;
  undefined1 auVar251 [16];
  undefined1 auVar254 [16];
  float fVar255;
  float fVar259;
  float fVar260;
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  float fVar261;
  float fVar262;
  undefined1 auVar258 [16];
  float fVar263;
  float fVar264;
  float fVar265;
  float fVar266;
  float fVar267;
  float fVar268;
  float fVar269;
  float fVar270;
  undefined1 local_a58 [8];
  float fStack_a50;
  float fStack_a4c;
  undefined1 local_a48 [8];
  float fStack_a40;
  float fStack_a3c;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined1 local_a28 [16];
  undefined1 local_a18 [16];
  undefined1 local_9c8 [6];
  short sStack_9c2;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined1 local_9b8 [8];
  float fStack_9b0;
  float fStack_9ac;
  undefined1 local_9a8 [8];
  undefined8 uStack_9a0;
  undefined1 local_998 [8];
  float fStack_990;
  float fStack_98c;
  undefined1 local_988 [8];
  float fStack_980;
  float fStack_97c;
  undefined1 local_978 [8];
  float fStack_970;
  float fStack_96c;
  undefined1 local_938 [8];
  float fStack_930;
  float fStack_92c;
  undefined1 local_928 [8];
  float fStack_920;
  float fStack_91c;
  EndpointRefiner<1> *local_8d8;
  uchar *local_8d0;
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [16];
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 local_798 [16];
  Float local_788 [16];
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  undefined1 local_758 [16];
  short local_748 [16];
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined2 local_658;
  undefined2 uStack_656;
  undefined2 uStack_654;
  undefined2 uStack_652;
  undefined2 uStack_650;
  undefined2 uStack_64e;
  undefined2 uStack_64c;
  undefined2 uStack_64a;
  ushort local_648 [8];
  ushort local_638 [8];
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  short local_558 [8];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [8];
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [8];
  undefined8 uStack_430;
  undefined1 local_428 [8];
  float fStack_420;
  float fStack_41c;
  undefined1 local_418 [8];
  undefined8 uStack_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [8];
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [6];
  short asStack_342 [5];
  undefined1 local_338 [240];
  float local_248 [128];
  undefined1 local_48 [8];
  long local_40;
  undefined1 auVar252 [16];
  
  uVar61 = MXCSR;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar68 = 1;
  if (0 < param_7) {
    iVar68 = param_7;
  }
  if (param_8 < 1) {
    param_8 = 1;
  }
  MXCSR = MXCSR & 0xffff9fff;
  if (param_6) {
    local_a38 = __LC37;
    uStack_a30 = _UNK_001070c8;
    local_a18._0_8_ = __LC36;
    local_a18._8_8_ = _UNK_001070d8;
  }
  else {
    local_a38 = __LC29;
    uStack_a30 = _UNK_00107048;
    local_a18._0_8_ = __LC37;
    local_a18._8_8_ = _UNK_001070c8;
  }
  pPVar74 = param_2 + param_3;
  pauVar65 = (undefined1 (*) [16])local_348;
  pauVar70 = (undefined1 (*) [16])local_748;
  pauVar71 = (undefined1 (*) [16])local_248;
  pPVar75 = pPVar74;
  do {
    do {
      PVar1 = *pPVar74;
      pauVar67 = (undefined1 (*) [16])((long)*pauVar65 + 2);
      pPVar74 = pPVar74 + 0x40;
      *(ushort *)*pauVar65 = (ushort)(byte)PVar1;
      auVar146 = _local_348;
      pauVar65 = pauVar67;
    } while ((undefined1 (*) [16])local_338 != pauVar67);
    *pauVar70 = _local_348;
    auVar99 = auVar146;
    if (param_6) {
      sVar134 = auVar146._0_2_;
      auVar99._0_2_ =
           (ushort)((short)local_a38 < sVar134) * (short)local_a38 |
           (ushort)((short)local_a38 >= sVar134) * sVar134;
      sVar134 = auVar146._2_2_;
      auVar99._2_2_ =
           (ushort)(local_a38._2_2_ < sVar134) * local_a38._2_2_ |
           (ushort)(local_a38._2_2_ >= sVar134) * sVar134;
      sVar134 = auVar146._4_2_;
      auVar99._4_2_ =
           (ushort)(local_a38._4_2_ < sVar134) * local_a38._4_2_ |
           (ushort)(local_a38._4_2_ >= sVar134) * sVar134;
      sVar134 = auVar146._6_2_;
      auVar99._6_2_ =
           (ushort)(local_a38._6_2_ < sVar134) * local_a38._6_2_ |
           (ushort)(local_a38._6_2_ >= sVar134) * sVar134;
      sVar134 = auVar146._8_2_;
      auVar99._8_2_ =
           (ushort)((short)uStack_a30 < sVar134) * (short)uStack_a30 |
           (ushort)((short)uStack_a30 >= sVar134) * sVar134;
      sVar134 = auVar146._10_2_;
      auVar99._10_2_ =
           (ushort)(uStack_a30._2_2_ < sVar134) * uStack_a30._2_2_ |
           (ushort)(uStack_a30._2_2_ >= sVar134) * sVar134;
      sVar134 = auVar146._12_2_;
      sVar157 = auVar146._14_2_;
      auVar99._12_2_ =
           (ushort)(uStack_a30._4_2_ < sVar134) * uStack_a30._4_2_ |
           (ushort)(uStack_a30._4_2_ >= sVar134) * sVar134;
      auVar99._14_2_ =
           (ushort)(uStack_a30._6_2_ < sVar157) * uStack_a30._6_2_ |
           (ushort)(uStack_a30._6_2_ >= sVar157) * sVar157;
      *pauVar70 = auVar99;
    }
    pauVar67 = pauVar71 + 2;
    pauVar70 = pauVar70 + 1;
    auVar4._10_2_ = 0;
    auVar4._0_10_ = auVar99._0_10_;
    auVar4._12_2_ = auVar99._6_2_;
    auVar15._8_2_ = auVar99._4_2_;
    auVar15._0_8_ = auVar99._0_8_;
    auVar15._10_4_ = auVar4._10_4_;
    auVar35._6_8_ = 0;
    auVar35._0_6_ = auVar15._8_6_;
    pPVar74 = pPVar75 + 4;
    *(float *)pauVar71[1] = (float)auVar99._8_2_;
    *(float *)((long)pauVar71[1] + 4) = (float)auVar99._10_2_;
    *(float *)((long)pauVar71[1] + 8) = (float)auVar99._12_2_;
    *(float *)((long)pauVar71[1] + 0xc) = (float)auVar99._14_2_;
    *(float *)*pauVar71 = (float)auVar99._0_2_;
    *(float *)((long)*pauVar71 + 4) = (float)(int)CONCAT82(SUB148(auVar35 << 0x40,6),auVar99._2_2_);
    *(float *)((long)*pauVar71 + 8) = (float)auVar15._8_4_;
    *(float *)((long)*pauVar71 + 0xc) = (float)(auVar4._10_4_ >> 0x10);
    pauVar65 = (undefined1 (*) [16])local_348;
    pauVar71 = pauVar67;
    pPVar75 = pPVar74;
  } while ((undefined1 (*) [16])local_48 != pauVar67);
  local_648[0] = (ushort)local_748._0_8_;
  local_648[1] = SUB82(local_748._0_8_,2);
  local_648[2] = SUB82(local_748._0_8_,4);
  local_648[3] = SUB82(local_748._0_8_,6);
  local_648[4] = (ushort)local_748._8_8_;
  local_648[5] = SUB82(local_748._8_8_,2);
  local_648[6] = SUB82(local_748._8_8_,4);
  local_648[7] = SUB82(local_748._8_8_,6);
  local_638[0] = local_748[8];
  local_638[1] = local_748[9];
  local_638[2] = local_748[10];
  local_638[3] = local_748[0xb];
  local_638[4] = local_748[0xc];
  local_638[5] = local_748[0xd];
  local_638[6] = local_748[0xe];
  local_638[7] = local_748[0xf];
  local_628 = local_728;
  uStack_620 = uStack_720;
  local_618 = local_718;
  uStack_610 = uStack_710;
  local_608 = local_708;
  uStack_600 = uStack_700;
  local_5f8 = local_6f8;
  uStack_5f0 = uStack_6f0;
  local_5e8 = local_6e8;
  uStack_5e0 = uStack_6e0;
  local_5d8 = local_6d8;
  uStack_5d0 = uStack_6d0;
  local_5c8 = local_6c8;
  uStack_5c0 = uStack_6c0;
  local_5b8 = local_6b8;
  uStack_5b0 = uStack_6b0;
  local_5a8 = local_6a8;
  uStack_5a0 = uStack_6a0;
  local_598 = local_698;
  uStack_590 = uStack_690;
  local_588 = local_688;
  uStack_580 = uStack_680;
  local_578 = local_678;
  uStack_570 = uStack_670;
  local_568 = local_668;
  uStack_560 = uStack_660;
  local_558[0] = local_658;
  local_558[1] = uStack_656;
  local_558[2] = uStack_654;
  local_558[3] = uStack_652;
  local_558[4] = uStack_650;
  local_558[5] = uStack_64e;
  local_558[6] = uStack_64c;
  local_558[7] = uStack_64a;
  pauVar65 = (undefined1 (*) [16])local_638;
  uVar95 = local_648[0];
  uVar114 = local_648[1];
  uVar116 = local_648[2];
  uVar120 = local_648[3];
  uVar122 = local_648[4];
  uVar126 = local_648[5];
  uVar128 = local_648[6];
  uVar132 = local_648[7];
  pauVar70 = &local_548;
  do {
    do {
      sVar134 = *(short *)*pauVar65;
      sVar157 = *(short *)(*pauVar65 + 2);
      sVar159 = *(short *)(*pauVar65 + 4);
      sVar162 = *(short *)(*pauVar65 + 6);
      sVar164 = *(short *)(*pauVar65 + 8);
      sVar167 = *(short *)(*pauVar65 + 10);
      sVar169 = *(short *)(*pauVar65 + 0xc);
      sVar172 = *(short *)(*pauVar65 + 0xe);
      pauVar71 = pauVar65 + 1;
      *(ushort *)pauVar65[-1] =
           ((short)uVar95 < sVar134) * uVar95 | (ushort)((short)uVar95 >= sVar134) * sVar134;
      uVar135 = local_648[0];
      *(ushort *)(pauVar65[-1] + 2) =
           ((short)uVar114 < sVar157) * uVar114 | (ushort)((short)uVar114 >= sVar157) * sVar157;
      uVar158 = local_648[1];
      *(ushort *)(pauVar65[-1] + 4) =
           ((short)uVar116 < sVar159) * uVar116 | (ushort)((short)uVar116 >= sVar159) * sVar159;
      uVar160 = local_648[2];
      *(ushort *)(pauVar65[-1] + 6) =
           ((short)uVar120 < sVar162) * uVar120 | (ushort)((short)uVar120 >= sVar162) * sVar162;
      uVar163 = local_648[3];
      *(ushort *)(pauVar65[-1] + 8) =
           ((short)uVar122 < sVar164) * uVar122 | (ushort)((short)uVar122 >= sVar164) * sVar164;
      uVar165 = local_648[4];
      *(ushort *)(pauVar65[-1] + 10) =
           ((short)uVar126 < sVar167) * uVar126 | (ushort)((short)uVar126 >= sVar167) * sVar167;
      uVar168 = local_648[5];
      *(ushort *)(pauVar65[-1] + 0xc) =
           ((short)uVar128 < sVar169) * uVar128 | (ushort)((short)uVar128 >= sVar169) * sVar169;
      uVar170 = local_648[6];
      *(ushort *)(pauVar65[-1] + 0xe) =
           ((short)uVar132 < sVar172) * uVar132 | (ushort)((short)uVar132 >= sVar172) * sVar172;
      uVar173 = local_648[7];
      sVar134 = *(short *)*pauVar65;
      sVar157 = *(short *)(*pauVar65 + 2);
      sVar159 = *(short *)(*pauVar65 + 4);
      sVar162 = *(short *)(*pauVar65 + 6);
      sVar164 = *(short *)(*pauVar65 + 8);
      sVar167 = *(short *)(*pauVar65 + 10);
      sVar169 = *(short *)(*pauVar65 + 0xc);
      sVar172 = *(short *)(*pauVar65 + 0xe);
      uVar95 = (sVar134 < (short)uVar95) * uVar95 | (ushort)(sVar134 >= (short)uVar95) * sVar134;
      uVar114 = (sVar157 < (short)uVar114) * uVar114 | (ushort)(sVar157 >= (short)uVar114) * sVar157
      ;
      uVar116 = (sVar159 < (short)uVar116) * uVar116 | (ushort)(sVar159 >= (short)uVar116) * sVar159
      ;
      uVar120 = (sVar162 < (short)uVar120) * uVar120 | (ushort)(sVar162 >= (short)uVar120) * sVar162
      ;
      uVar122 = (sVar164 < (short)uVar122) * uVar122 | (ushort)(sVar164 >= (short)uVar122) * sVar164
      ;
      uVar126 = (sVar167 < (short)uVar126) * uVar126 | (ushort)(sVar167 >= (short)uVar126) * sVar167
      ;
      uVar128 = (sVar169 < (short)uVar128) * uVar128 | (ushort)(sVar169 >= (short)uVar128) * sVar169
      ;
      uVar132 = (sVar172 < (short)uVar132) * uVar132 | (ushort)(sVar172 >= (short)uVar132) * sVar172
      ;
      *(ushort *)*pauVar65 = uVar95;
      *(ushort *)(*pauVar65 + 2) = uVar114;
      *(ushort *)(*pauVar65 + 4) = uVar116;
      *(ushort *)(*pauVar65 + 6) = uVar120;
      *(ushort *)(*pauVar65 + 8) = uVar122;
      *(ushort *)(*pauVar65 + 10) = uVar126;
      *(ushort *)(*pauVar65 + 0xc) = uVar128;
      *(ushort *)(*pauVar65 + 0xe) = uVar132;
      pauVar65 = pauVar71;
    } while (pauVar70 != pauVar71);
    pauVar70 = pauVar70 + -1;
    pauVar65 = (undefined1 (*) [16])local_638;
    uVar95 = local_648[0];
    uVar114 = local_648[1];
    uVar116 = local_648[2];
    uVar120 = local_648[3];
    uVar122 = local_648[4];
    uVar126 = local_648[5];
    uVar128 = local_648[6];
    uVar132 = local_648[7];
  } while ((undefined1 (*) [16])local_638 != pauVar70);
  uVar33 = CONCAT26(local_648[3],CONCAT24(local_648[2],CONCAT22(local_648[1],local_648[0])));
  Var34 = CONCAT28(local_648[4],uVar33);
  uStack_9c0._2_2_ = local_648[5];
  _local_9c8 = Var34;
  uStack_9bc._0_2_ = local_648[6];
  uStack_9bc._2_2_ = local_648[7];
  local_818 = (undefined1  [16])0x0;
  local_808 = (undefined1  [16])0x0;
  auVar2._10_2_ = 0;
  auVar2._0_10_ = Var34;
  auVar2._12_2_ = local_648[3];
  auVar5._8_2_ = local_648[2];
  auVar5._0_8_ = uVar33;
  auVar5._10_4_ = auVar2._10_4_;
  auVar36._6_8_ = 0;
  auVar36._0_6_ = auVar5._8_6_;
  auVar25._4_2_ = local_648[1];
  auVar25._0_4_ = CONCAT22(local_648[1],local_648[0]);
  auVar25._6_8_ = SUB148(auVar36 << 0x40,6);
  local_7f8 = (undefined1  [16])0x0;
  uVar63 = (uint)local_648[0];
  fVar225 = (float)(auVar2._10_4_ >> 0x10);
  local_548 = (undefined1  [16])0x0;
  local_538 = (undefined1  [16])0x0;
  uVar85 = (uint)local_648[4];
  local_528 = (undefined1  [16])0x0;
  local_518 = (undefined1  [16])0x0;
  local_508 = (undefined1  [16])0x0;
  local_4f8 = (undefined1  [16])0x0;
  local_4e8 = (undefined1  [16])0x0;
  local_4d8 = (undefined1  [16])0x0;
  local_4c8 = (undefined1  [16])0x0;
  local_4b8 = (undefined1  [16])0x0;
  local_4a8 = (undefined1  [16])0x0;
  local_498 = (undefined1  [16])0x0;
  local_488 = (undefined1  [16])0x0;
  local_478 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  sVar134 = local_558[0];
  sVar157 = local_558[1];
  sVar159 = local_558[2];
  sVar162 = local_558[3];
  sVar164 = local_558[4];
  sVar167 = local_558[5];
  sVar169 = local_558[6];
  sVar172 = local_558[7];
  uVar88 = (uint)local_648[5];
  uVar89 = (uint)local_648[6];
  uVar92 = (uint)local_648[7];
  uVar95 = local_558[0] - local_648[0];
  sVar212 = local_558[1] - local_648[1];
  sVar213 = local_558[2] - local_648[2];
  sVar214 = local_558[3] - local_648[3];
  uVar114 = local_558[4] - local_648[4];
  auVar59._2_2_ = uVar114;
  auVar59._0_2_ = sVar214;
  uVar116 = local_558[5] - local_648[5];
  uVar120 = local_558[6] - local_648[6];
  uVar122 = local_558[7] - local_648[7];
  auVar59._4_8_ = 0;
  auVar3._12_2_ = sVar214;
  auVar3._0_12_ = auVar59 << 0x30;
  uVar33 = CONCAT44(auVar3._10_4_,CONCAT22(sVar213,sVar214));
  auVar37._6_8_ = 0;
  auVar37._0_6_ = (uint6)((ulong)uVar33 >> 0x10);
  fVar215 = (float)uVar95;
  fVar220 = (float)(int)CONCAT82(SUB148(auVar37 << 0x40,6),sVar212);
  fVar223 = (float)(int)((ulong)uVar33 >> 0x10);
  fVar226 = (float)(auVar3._10_4_ >> 0x10);
  local_a28._8_2_ = local_558[4];
  local_a28._0_2_ = local_558[0];
  local_a28._2_2_ = local_558[1];
  local_a28._4_2_ = local_558[2];
  local_a28._6_2_ = local_558[3];
  local_a28._10_2_ = local_558[5];
  local_a28._12_2_ = local_558[6];
  local_a28._14_2_ = local_558[7];
  fVar221 = (float)uVar116;
  fVar224 = (float)uVar120;
  fVar227 = (float)uVar122;
  iVar62 = cvtt::Internal::BCCommon::TweakRoundsForRange(8);
  uVar84 = _LC13;
  uVar58 = _UNK_00107038;
  uVar33 = __LC9;
  if (iVar68 <= iVar62) {
    iVar62 = iVar68;
  }
  if (iVar62 < 1) {
    local_938._4_4_ = _LC1;
    local_938._0_4_ = _LC1;
    fStack_930 = (float)_LC1;
    fStack_92c = (float)_LC1;
    local_928._4_4_ = _LC1;
    local_928._0_4_ = _LC1;
    fStack_920 = (float)_LC1;
    fStack_91c = (float)_LC1;
  }
  else {
    local_938._4_4_ = _LC1;
    local_938._0_4_ = _LC1;
    fStack_930 = (float)_LC1;
    fStack_92c = (float)_LC1;
    local_928._4_4_ = _LC1;
    local_928._0_4_ = _LC1;
    fStack_920 = (float)_LC1;
    fStack_91c = (float)_LC1;
    auVar146._4_4_ = _LC22;
    auVar146._0_4_ = _LC22;
    iVar78 = 0;
    auVar146._8_4_ = _LC22;
    auVar146._12_4_ = _LC22;
    uStack_9a0 = _UNK_00107038;
    local_9a8 = (undefined1  [8])__LC9;
    do {
      uVar82 = MXCSR;
      MXCSR = MXCSR & 0xffff9fff;
      cvtt::Util::ComputeTweakFactors(iVar78,8,(float *)local_348);
      auVar101._0_4_ = fVar215 * (float)local_348._0_4_ + (float)uVar63;
      auVar101._4_4_ = fVar220 * (float)local_348._0_4_ + (float)auVar25._4_4_;
      auVar101._8_4_ = fVar223 * (float)local_348._0_4_ + (float)auVar5._8_4_;
      auVar101._12_4_ = fVar226 * (float)local_348._0_4_ + fVar225;
      auVar191._0_4_ = (float)local_348._0_4_ * (float)uVar114 + (float)uVar85;
      auVar191._4_4_ = (float)local_348._0_4_ * fVar221 + (float)uVar88;
      auVar191._8_4_ = (float)local_348._0_4_ * fVar224 + (float)uVar89;
      auVar191._12_4_ = (float)local_348._0_4_ * fVar227 + (float)uVar92;
      auVar137._0_4_ = fVar215 * stack0xfffffffffffffcbc + (float)uVar63;
      auVar137._4_4_ = fVar220 * stack0xfffffffffffffcbc + (float)auVar25._4_4_;
      auVar137._8_4_ = fVar223 * stack0xfffffffffffffcbc + (float)auVar5._8_4_;
      auVar137._12_4_ = fVar226 * stack0xfffffffffffffcbc + fVar225;
      auVar193._0_4_ = stack0xfffffffffffffcbc * (float)uVar114 + (float)uVar85;
      auVar193._4_4_ = stack0xfffffffffffffcbc * fVar221 + (float)uVar88;
      auVar193._8_4_ = stack0xfffffffffffffcbc * fVar224 + (float)uVar89;
      auVar193._12_4_ = stack0xfffffffffffffcbc * fVar227 + (float)uVar92;
      auVar175 = minps(auVar101,auVar146);
      auVar192 = minps(auVar191,auVar146);
      auVar99 = minps(auVar137,auVar146);
      auVar137 = minps(auVar193,auVar146);
      auVar175 = maxps(auVar175,(undefined1  [16])0x0);
      auVar193 = maxps(auVar192,(undefined1  [16])0x0);
      auVar99 = maxps(auVar99,(undefined1  [16])0x0);
      auVar137 = maxps(auVar137,(undefined1  [16])0x0);
      auVar139._0_4_ = (int)auVar175._0_4_;
      auVar139._4_4_ = (int)auVar175._4_4_;
      auVar139._8_4_ = (int)auVar175._8_4_;
      auVar139._12_4_ = (int)auVar175._12_4_;
      auVar194._0_4_ = (int)auVar193._0_4_;
      auVar194._4_4_ = (int)auVar193._4_4_;
      auVar194._8_4_ = (int)auVar193._8_4_;
      auVar194._12_4_ = (int)auVar193._12_4_;
      auVar175._0_4_ = (int)auVar99._0_4_;
      auVar175._4_4_ = (int)auVar99._4_4_;
      auVar175._8_4_ = (int)auVar99._8_4_;
      auVar175._12_4_ = (int)auVar99._12_4_;
      local_7a8 = packssdw(auVar139,auVar194);
      auVar192._0_4_ = (int)auVar137._0_4_;
      auVar192._4_4_ = (int)auVar137._4_4_;
      auVar192._8_4_ = (int)auVar137._8_4_;
      auVar192._12_4_ = (int)auVar137._12_4_;
      local_798 = packssdw(auVar175,auVar192);
      iVar73 = 0;
      MXCSR = uVar82;
      auVar99 = __LC38;
      do {
        _local_448 = (undefined1  [16])0x0;
        local_3a8 = 0x3e12492500000000;
        uStack_3a0 = 0x3f8000003f800000;
        _local_438 = (undefined1  [16])0x0;
        _local_428 = (undefined1  [16])0x0;
        _local_418 = (undefined1  [16])0x0;
        local_408 = (undefined1  [16])0x0;
        local_3f8 = (undefined1  [16])0x0;
        local_3e8 = (undefined1  [16])0x0;
        _local_3d8 = (undefined1  [16])0x0;
        local_3c8 = (undefined1  [16])0x0;
        local_3b8 = (undefined1  [16])0x0;
        if (param_6) {
          sVar96 = local_7a8._0_2_;
          auVar144._0_2_ =
               (ushort)((short)local_a38 < sVar96) * (short)local_a38 |
               (ushort)((short)local_a38 >= sVar96) * sVar96;
          sVar96 = local_7a8._2_2_;
          auVar144._2_2_ =
               (ushort)(local_a38._2_2_ < sVar96) * local_a38._2_2_ |
               (ushort)(local_a38._2_2_ >= sVar96) * sVar96;
          sVar96 = local_7a8._4_2_;
          auVar144._4_2_ =
               (ushort)(local_a38._4_2_ < sVar96) * local_a38._4_2_ |
               (ushort)(local_a38._4_2_ >= sVar96) * sVar96;
          sVar96 = local_7a8._6_2_;
          auVar144._6_2_ =
               (ushort)(local_a38._6_2_ < sVar96) * local_a38._6_2_ |
               (ushort)(local_a38._6_2_ >= sVar96) * sVar96;
          sVar96 = local_7a8._8_2_;
          auVar144._8_2_ =
               (ushort)((short)uStack_a30 < sVar96) * (short)uStack_a30 |
               (ushort)((short)uStack_a30 >= sVar96) * sVar96;
          sVar96 = local_7a8._10_2_;
          auVar144._10_2_ =
               (ushort)(uStack_a30._2_2_ < sVar96) * uStack_a30._2_2_ |
               (ushort)(uStack_a30._2_2_ >= sVar96) * sVar96;
          sVar96 = local_7a8._12_2_;
          sVar115 = local_7a8._14_2_;
          auVar144._12_2_ =
               (ushort)(uStack_a30._4_2_ < sVar96) * uStack_a30._4_2_ |
               (ushort)(uStack_a30._4_2_ >= sVar96) * sVar96;
          auVar144._14_2_ =
               (ushort)(uStack_a30._6_2_ < sVar115) * uStack_a30._6_2_ |
               (ushort)(uStack_a30._6_2_ >= sVar115) * sVar115;
          sVar96 = local_798._0_2_;
          auVar106._0_2_ =
               (ushort)((short)local_a38 < sVar96) * (short)local_a38 |
               (ushort)((short)local_a38 >= sVar96) * sVar96;
          sVar96 = local_798._2_2_;
          auVar106._2_2_ =
               (ushort)(local_a38._2_2_ < sVar96) * local_a38._2_2_ |
               (ushort)(local_a38._2_2_ >= sVar96) * sVar96;
          sVar96 = local_798._4_2_;
          auVar106._4_2_ =
               (ushort)(local_a38._4_2_ < sVar96) * local_a38._4_2_ |
               (ushort)(local_a38._4_2_ >= sVar96) * sVar96;
          sVar96 = local_798._6_2_;
          auVar106._6_2_ =
               (ushort)(local_a38._6_2_ < sVar96) * local_a38._6_2_ |
               (ushort)(local_a38._6_2_ >= sVar96) * sVar96;
          sVar96 = local_798._8_2_;
          auVar106._8_2_ =
               (ushort)((short)uStack_a30 < sVar96) * (short)uStack_a30 |
               (ushort)((short)uStack_a30 >= sVar96) * sVar96;
          sVar96 = local_798._10_2_;
          auVar106._10_2_ =
               (ushort)(uStack_a30._2_2_ < sVar96) * uStack_a30._2_2_ |
               (ushort)(uStack_a30._2_2_ >= sVar96) * sVar96;
          sVar96 = local_798._12_2_;
          sVar115 = local_798._14_2_;
          auVar106._12_2_ =
               (ushort)(uStack_a30._4_2_ < sVar96) * uStack_a30._4_2_ |
               (ushort)(uStack_a30._4_2_ >= sVar96) * sVar96;
          auVar106._14_2_ =
               (ushort)(uStack_a30._6_2_ < sVar115) * uStack_a30._6_2_ |
               (ushort)(uStack_a30._6_2_ >= sVar115) * sVar115;
          local_7a8 = auVar144;
          local_798 = auVar106;
        }
        fVar263 = 0.0;
        fVar265 = 0.0;
        fVar267 = 0.0;
        fVar269 = 0.0;
        lVar64 = 0;
        fVar228 = (float)local_7a8._8_2_;
        fVar234 = (float)local_7a8._10_2_;
        fVar236 = (float)local_7a8._12_2_;
        fVar238 = (float)local_7a8._14_2_;
        uVar126 = local_7a8._6_2_;
        auVar16._10_2_ = 0;
        auVar16._0_10_ = local_7a8._0_10_;
        auVar16._12_2_ = uVar126;
        auVar26._8_2_ = local_7a8._4_2_;
        auVar26._0_8_ = local_7a8._0_8_;
        auVar26._10_4_ = auVar16._10_4_;
        auVar38._6_8_ = 0;
        auVar38._0_6_ = auVar26._8_6_;
        auVar6._10_2_ = 0;
        auVar6._0_10_ = local_798._0_10_;
        auVar6._12_2_ = local_798._6_2_;
        auVar17._8_2_ = local_798._4_2_;
        auVar17._0_8_ = local_798._0_8_;
        auVar17._10_4_ = auVar6._10_4_;
        auVar39._6_8_ = 0;
        auVar39._0_6_ = auVar17._8_6_;
        fVar216 = (float)local_7a8._0_2_;
        fVar222 = (float)(int)CONCAT82(SUB148(auVar38 << 0x40,6),local_7a8._2_2_);
        fVar97 = (float)local_798._8_2_ - fVar228;
        fVar118 = (float)local_798._10_2_ - fVar234;
        fVar124 = (float)local_798._12_2_ - fVar236;
        fVar130 = (float)local_798._14_2_ - fVar238;
        fVar136 = (float)local_798._0_2_ - fVar216;
        fVar161 = (float)(int)CONCAT82(SUB148(auVar39 << 0x40,6),local_798._2_2_) - fVar222;
        fVar166 = (float)auVar17._8_4_ - (float)auVar26._8_4_;
        fVar171 = (float)(auVar6._10_4_ >> 0x10) - (float)uVar126;
        iVar98 = 0;
        iVar119 = 0;
        iVar125 = 0;
        iVar131 = 0;
        iVar69 = 0;
        bVar81 = false;
        _local_a58 = (undefined1  [16])0x0;
        _local_a48 = (undefined1  [16])0x0;
        uVar82 = -(uint)(fVar97 * fVar97 == 0.0);
        uVar86 = -(uint)(fVar118 * fVar118 == 0.0);
        uVar90 = -(uint)(fVar124 * fVar124 == 0.0);
        uVar93 = -(uint)(fVar130 * fVar130 == 0.0);
        uVar83 = -(uint)(fVar136 * fVar136 == 0.0);
        uVar87 = -(uint)(fVar161 * fVar161 == 0.0);
        uVar91 = -(uint)(fVar166 * fVar166 == 0.0);
        uVar94 = -(uint)(fVar171 * fVar171 == 0.0);
        auVar256._0_4_ = uVar84 & uVar82;
        auVar256._4_4_ = uVar84 & uVar86;
        auVar256._8_4_ = uVar84 & uVar90;
        auVar256._12_4_ = uVar84 & uVar93;
        auVar217._0_4_ = ~uVar82 & (uint)(fVar97 * fVar97);
        auVar217._4_4_ = ~uVar86 & (uint)(fVar118 * fVar118);
        auVar217._8_4_ = ~uVar90 & (uint)(fVar124 * fVar124);
        auVar217._12_4_ = ~uVar93 & (uint)(fVar130 * fVar130);
        auVar244._0_4_ = uVar84 & uVar83;
        auVar244._4_4_ = uVar84 & uVar87;
        auVar244._8_4_ = uVar84 & uVar91;
        auVar244._12_4_ = uVar84 & uVar94;
        auVar230._0_4_ = ~uVar83 & (uint)(fVar136 * fVar136);
        auVar230._4_4_ = ~uVar87 & (uint)(fVar161 * fVar161);
        auVar230._8_4_ = ~uVar91 & (uint)(fVar166 * fVar166);
        auVar230._12_4_ = ~uVar94 & (uint)(fVar171 * fVar171);
        auVar192 = divps(auVar99,auVar230 | auVar244);
        auVar193 = divps(auVar99,auVar217 | auVar256);
        auVar137 = (undefined1  [16])0x0;
        auVar175 = ZEXT816(0);
        do {
          lVar66 = lVar64 * 2;
          fVar239 = *(float *)((long)*(undefined1 (*) [16])local_248 + lVar66);
          fVar250 = *(float *)((long)local_248 + lVar66 + 4);
          fVar253 = *(float *)((long)local_248 + lVar66 + 8);
          fVar29 = *(float *)((long)local_248 + lVar66 + 0xc);
          lVar66 = lVar64 * 2;
          fVar30 = *(float *)((long)local_248 + lVar66 + 0x10);
          fVar229 = *(float *)((long)local_248 + lVar66 + 0x14);
          fVar235 = *(float *)((long)local_248 + lVar66 + 0x18);
          fVar237 = *(float *)((long)local_248 + lVar66 + 0x1c);
          auVar138._0_4_ = (fVar239 - fVar216) * auVar192._0_4_ * fVar136;
          auVar138._4_4_ = (fVar250 - fVar222) * auVar192._4_4_ * fVar161;
          auVar138._8_4_ = (fVar253 - (float)auVar26._8_4_) * auVar192._8_4_ * fVar166;
          auVar138._12_4_ = (fVar29 - (float)uVar126) * auVar192._12_4_ * fVar171;
          auVar100._0_4_ = (fVar30 - fVar228) * auVar193._0_4_ * fVar97;
          auVar100._4_4_ = (fVar229 - fVar234) * auVar193._4_4_ * fVar118;
          auVar100._8_4_ = (fVar235 - fVar236) * auVar193._8_4_ * fVar124;
          auVar100._12_4_ = (fVar237 - fVar238) * auVar193._12_4_ * fVar130;
          auVar139 = minps(auVar138,auVar99);
          auVar101 = minps(auVar100,auVar99);
          auVar139 = maxps(auVar139,(undefined1  [16])0x0);
          auVar101 = maxps(auVar101,(undefined1  [16])0x0);
          auVar140._0_4_ = (int)auVar139._0_4_;
          auVar140._4_4_ = (int)auVar139._4_4_;
          auVar140._8_4_ = (int)auVar139._8_4_;
          auVar140._12_4_ = (int)auVar139._12_4_;
          auVar102._0_4_ = (int)auVar101._0_4_;
          auVar102._4_4_ = (int)auVar101._4_4_;
          auVar102._8_4_ = (int)auVar101._8_4_;
          auVar102._12_4_ = (int)auVar101._12_4_;
          auVar101 = packssdw(auVar140,auVar102);
          uVar128 = (ushort)(_DAT_00108088 * auVar101._0_2_ + __LC18) >> 7;
          uVar132 = (ushort)(sRam000000000010808a * auVar101._2_2_ + _UNK_00107072) >> 7;
          uVar181 = (ushort)(sRam000000000010808c * auVar101._4_2_ + _UNK_00107074) >> 7;
          uVar183 = (ushort)(sRam000000000010808e * auVar101._6_2_ + _UNK_00107076) >> 7;
          uVar184 = (ushort)(sRam0000000000108090 * auVar101._8_2_ + _UNK_00107078) >> 7;
          uVar186 = (ushort)(sRam0000000000108092 * auVar101._10_2_ + _UNK_0010707a) >> 7;
          uVar187 = (ushort)(sRam0000000000108094 * auVar101._12_2_ + _UNK_0010707c) >> 7;
          uVar189 = (ushort)(sRam0000000000108096 * auVar101._14_2_ + _UNK_0010707e) >> 7;
          sVar96 = ((ushort)(local_798._0_2_ * uVar128 + __LC20 +
                            (__LC19 - uVar128) * local_7a8._0_2_) >> 8) -
                   *(short *)((long)*(undefined1 (*) [16])local_748 + lVar64);
          sVar115 = ((ushort)(local_798._2_2_ * uVar132 + _UNK_00107092 +
                             (_UNK_00107082 - uVar132) * local_7a8._2_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 2);
          sVar117 = ((ushort)(local_798._4_2_ * uVar181 + _UNK_00107094 +
                             (_UNK_00107084 - uVar181) * local_7a8._4_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 4);
          sVar121 = ((ushort)(local_798._6_2_ * uVar183 + _UNK_00107096 +
                             (_UNK_00107086 - uVar183) * uVar126) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 6);
          sVar123 = ((ushort)(local_798._8_2_ * uVar184 + _UNK_00107098 +
                             (_UNK_00107088 - uVar184) * local_7a8._8_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 8);
          sVar127 = ((ushort)(local_798._10_2_ * uVar186 + _UNK_0010709a +
                             (_UNK_0010708a - uVar186) * local_7a8._10_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 10);
          sVar129 = ((ushort)(local_798._12_2_ * uVar187 + _UNK_0010709c +
                             (_UNK_0010708c - uVar187) * local_7a8._12_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 0xc);
          sVar133 = ((ushort)(local_798._14_2_ * uVar189 + _UNK_0010709e +
                             (_UNK_0010708e - uVar189) * local_7a8._14_2_) >> 8) -
                    *(short *)((long)local_748 + lVar64 + 0xe);
          sVar121 = sVar121 * sVar121;
          uVar128 = sVar123 * sVar123;
          auVar52._2_2_ = uVar128;
          auVar52._0_2_ = sVar121;
          auVar52._4_8_ = 0;
          auVar7._12_2_ = sVar121;
          auVar7._0_12_ = auVar52 << 0x30;
          uVar53 = CONCAT44(auVar7._10_4_,CONCAT22(sVar117 * sVar117,sVar121));
          auVar40._6_8_ = 0;
          auVar40._0_6_ = (uint6)((ulong)uVar53 >> 0x10);
          iVar98 = (uint)uVar128 + iVar98;
          iVar119 = (uint)(ushort)(sVar127 * sVar127) + iVar119;
          iVar125 = (uint)(ushort)(sVar129 * sVar129) + iVar125;
          iVar131 = (uint)(ushort)(sVar133 * sVar133) + iVar131;
          auVar231._0_4_ = (uint)(ushort)(sVar96 * sVar96) + auVar137._0_4_;
          auVar231._4_4_ =
               (int)CONCAT82(SUB148(auVar40 << 0x40,6),sVar115 * sVar115) + auVar137._4_4_;
          auVar231._8_4_ = (int)((ulong)uVar53 >> 0x10) + auVar137._8_4_;
          auVar231._12_4_ = (auVar7._10_4_ >> 0x10) + auVar137._12_4_;
          auVar257 = auVar175;
          if (param_8 + -1 != iVar73) {
            iVar69 = iVar69 + 1;
            auVar8._10_2_ = 0;
            auVar8._0_10_ = auVar101._0_10_;
            auVar8._12_2_ = auVar101._6_2_;
            auVar18._8_2_ = auVar101._4_2_;
            auVar18._0_8_ = auVar101._0_8_;
            auVar18._10_4_ = auVar8._10_4_;
            auVar41._6_8_ = 0;
            auVar41._0_6_ = auVar18._8_6_;
            bVar81 = true;
            fVar190 = (float)auVar101._0_2_ * __LC40;
            fVar202 = (float)(int)CONCAT82(SUB148(auVar41 << 0x40,6),auVar101._2_2_) * _UNK_001070f4
            ;
            fVar203 = (float)auVar18._8_4_ * _UNK_001070f8;
            fVar204 = (float)(auVar8._10_4_ >> 0x10) * _UNK_001070fc;
            fVar174 = (float)auVar101._8_2_ * __LC40;
            fVar182 = (float)auVar101._10_2_ * _UNK_001070f4;
            fVar185 = (float)auVar101._12_2_ * _UNK_001070f8;
            fVar188 = (float)auVar101._14_2_ * _UNK_001070fc;
            local_418._4_4_ = fVar229 + (float)local_418._4_4_;
            local_418._0_4_ = fVar30 + (float)local_418._0_4_;
            uStack_410._0_4_ = fVar235 + (float)uStack_410;
            uStack_410._4_4_ = fVar237 + uStack_410._4_4_;
            local_428._4_4_ = fVar250 + (float)local_428._4_4_;
            local_428._0_4_ = fVar239 + (float)local_428._0_4_;
            fStack_420 = fVar253 + fStack_420;
            fStack_41c = fVar29 + fStack_41c;
            auVar257._0_4_ = auVar175._0_4_ + fVar190;
            auVar257._4_4_ = auVar175._4_4_ + fVar202;
            auVar257._8_4_ = auVar175._8_4_ + fVar203;
            auVar257._12_4_ = auVar175._12_4_ + fVar204;
            local_448._0_4_ = fVar239 * fVar190 + (float)local_448._0_4_;
            local_448._4_4_ = fVar250 * fVar202 + (float)local_448._4_4_;
            fStack_440 = fVar253 * fVar203 + fStack_440;
            fStack_43c = fVar29 * fVar204 + fStack_43c;
            fVar263 = fVar263 + fVar174;
            fVar265 = fVar265 + fVar182;
            fVar267 = fVar267 + fVar185;
            fVar269 = fVar269 + fVar188;
            local_438._0_4_ = fVar30 * fVar174 + (float)local_438._0_4_;
            local_438._4_4_ = fVar229 * fVar182 + (float)local_438._4_4_;
            uStack_430._0_4_ = fVar235 * fVar185 + (float)uStack_430;
            uStack_430._4_4_ = fVar237 * fVar188 + uStack_430._4_4_;
            local_a58._4_4_ = fVar202 * fVar202 + (float)local_a58._4_4_;
            local_a58._0_4_ = fVar190 * fVar190 + (float)local_a58._0_4_;
            fStack_a50 = fVar203 * fVar203 + fStack_a50;
            fStack_a4c = fVar204 * fVar204 + fStack_a4c;
            local_a48._4_4_ = fVar182 * fVar182 + (float)local_a48._4_4_;
            local_a48._0_4_ = fVar174 * fVar174 + (float)local_a48._0_4_;
            fStack_a40 = fVar185 * fVar185 + fStack_a40;
            fStack_a3c = fVar188 * fVar188 + fStack_a3c;
          }
          *(undefined1 (*) [16])((long)*(undefined1 (*) [16])local_348 + lVar64) = auVar101;
          lVar64 = lVar64 + 0x10;
          auVar137 = auVar231;
          auVar175 = auVar257;
        } while (lVar64 != 0x100);
        if (bVar81) {
          local_3a8 = CONCAT44(0x3e124925,iVar69);
          local_3d8._4_4_ = fVar265;
          local_3d8._0_4_ = fVar263;
          uStack_3d0._0_4_ = fVar267;
          uStack_3d0._4_4_ = fVar269;
          local_3f8 = _local_a48;
          local_3e8 = auVar257;
          local_408 = _local_a58;
        }
        auVar232._0_4_ = (float)auVar231._0_4_;
        auVar232._4_4_ = (float)auVar231._4_4_;
        auVar232._8_4_ = (float)auVar231._8_4_;
        auVar232._12_4_ = (float)auVar231._12_4_;
        auVar103._0_4_ = (float)iVar98;
        auVar103._4_4_ = (float)iVar119;
        auVar103._8_4_ = (float)iVar125;
        auVar103._12_4_ = (float)iVar131;
        auVar141._4_4_ = -(uint)(auVar232._4_4_ < (float)local_928._4_4_);
        auVar141._0_4_ = -(uint)(auVar232._0_4_ < (float)local_928._0_4_);
        auVar141._8_4_ = -(uint)(auVar232._8_4_ < fStack_920);
        auVar141._12_4_ = -(uint)(auVar232._12_4_ < fStack_91c);
        auVar218._4_4_ = -(uint)(auVar103._4_4_ < (float)local_938._4_4_);
        auVar218._0_4_ = -(uint)(auVar103._0_4_ < (float)local_938._0_4_);
        auVar218._8_4_ = -(uint)(auVar103._8_4_ < fStack_930);
        auVar218._12_4_ = -(uint)(auVar103._12_4_ < fStack_92c);
        auVar137 = packssdw(auVar141,auVar218);
        if ((((((((((((((((auVar137 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar137 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar137 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar137 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar137 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar137 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar137 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar137 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar137 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar137 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar137 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar137 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar137 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar137 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar137 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            auVar137[0xf] < '\0') {
          _local_938 = minps(auVar103,_local_938);
          _local_928 = minps(auVar232,_local_928);
          local_818 = _local_9a8 & auVar137 | ~auVar137 & local_818;
          pauVar65 = &local_548;
          pauVar70 = (undefined1 (*) [16])local_348;
          do {
            auVar175 = *pauVar70;
            pauVar70 = pauVar70 + 1;
            *pauVar65 = auVar175 & auVar137 | ~auVar137 & *pauVar65;
            pauVar65 = pauVar65 + 1;
          } while ((undefined1 (*) [16])local_248 != pauVar70);
          local_808 = local_7a8 & auVar137 | ~auVar137 & local_808;
          local_7f8 = local_798 & auVar137 | ~auVar137 & local_7f8;
        }
        if (param_8 + -1 != iVar73) {
          EndpointRefiner<1>::GetRefinedEndpoints((EndpointRefiner<1> *)local_448,local_788);
          auVar99 = minps((undefined1  [16])local_788,auVar146);
          auVar137 = minps(local_778,auVar146);
          auVar99 = maxps(auVar99,(undefined1  [16])0x0);
          auVar137 = maxps(auVar137,(undefined1  [16])0x0);
          auVar104._0_4_ = (int)auVar99._0_4_;
          auVar104._4_4_ = (int)auVar99._4_4_;
          auVar104._8_4_ = (int)auVar99._8_4_;
          auVar104._12_4_ = (int)auVar99._12_4_;
          auVar142._0_4_ = (int)auVar137._0_4_;
          auVar142._4_4_ = (int)auVar137._4_4_;
          auVar142._8_4_ = (int)auVar137._8_4_;
          auVar142._12_4_ = (int)auVar137._12_4_;
          local_7a8 = packssdw(auVar104,auVar142);
          auVar137 = minps(local_758,auVar146);
          auVar99 = minps(local_768,auVar146);
          auVar137 = maxps(auVar137,(undefined1  [16])0x0);
          auVar99 = maxps(auVar99,(undefined1  [16])0x0);
          auVar143._0_4_ = (int)auVar137._0_4_;
          auVar143._4_4_ = (int)auVar137._4_4_;
          auVar143._8_4_ = (int)auVar137._8_4_;
          auVar143._12_4_ = (int)auVar137._12_4_;
          auVar105._0_4_ = (int)auVar99._0_4_;
          auVar105._4_4_ = (int)auVar99._4_4_;
          auVar105._8_4_ = (int)auVar99._8_4_;
          auVar105._12_4_ = (int)auVar99._12_4_;
          local_798 = packssdw(auVar105,auVar143);
          auVar99 = __LC38;
        }
        iVar73 = iVar73 + 1;
      } while (iVar73 != param_8);
      iVar78 = iVar78 + 1;
    } while (iVar78 != iVar62);
  }
  uStack_9a0 = uVar58;
  local_9a8 = (undefined1  [8])uVar33;
  local_8d8 = (EndpointRefiner<1> *)local_448;
  pauVar65 = (undefined1 (*) [16])local_558;
  sVar134 = (short)local_a38 - sVar134;
  sVar157 = local_a38._2_2_ - sVar157;
  sVar159 = local_a38._4_2_ - sVar159;
  sVar162 = local_a38._6_2_ - sVar162;
  sVar164 = (short)uStack_a30 - sVar164;
  sVar167 = uStack_a30._2_2_ - sVar167;
  sVar169 = uStack_a30._4_2_ - sVar169;
  sVar172 = uStack_a30._6_2_ - sVar172;
  auVar145._0_2_ =
       ((short)uVar135 < sVar134) * uVar135 | (ushort)((short)uVar135 >= sVar134) * sVar134;
  auVar145._2_2_ =
       ((short)uVar158 < sVar157) * uVar158 | (ushort)((short)uVar158 >= sVar157) * sVar157;
  auVar145._4_2_ =
       ((short)uVar160 < sVar159) * uVar160 | (ushort)((short)uVar160 >= sVar159) * sVar159;
  auVar145._6_2_ =
       ((short)uVar163 < sVar162) * uVar163 | (ushort)((short)uVar163 >= sVar162) * sVar162;
  auVar145._8_2_ =
       ((short)uVar165 < sVar164) * uVar165 | (ushort)((short)uVar165 >= sVar164) * sVar164;
  auVar145._10_2_ =
       ((short)uVar168 < sVar167) * uVar168 | (ushort)((short)uVar168 >= sVar167) * sVar167;
  auVar145._12_2_ =
       ((short)uVar170 < sVar169) * uVar170 | (ushort)((short)uVar170 >= sVar169) * sVar169;
  auVar145._14_2_ =
       ((short)uVar173 < sVar172) * uVar173 | (ushort)((short)uVar173 >= sVar172) * sVar172;
  auVar146 = psllw(auVar145,2);
  auVar99 = psllw(auVar145,4);
  auVar205._0_2_ = -(ushort)((short)(auVar146._0_2_ + auVar99._0_2_) < (short)uVar95);
  auVar205._2_2_ = -(ushort)((short)(auVar146._2_2_ + auVar99._2_2_) < sVar212);
  auVar205._4_2_ = -(ushort)((short)(auVar146._4_2_ + auVar99._4_2_) < sVar213);
  auVar205._6_2_ = -(ushort)((short)(auVar146._6_2_ + auVar99._6_2_) < sVar214);
  auVar205._8_2_ = -(ushort)((short)(auVar146._8_2_ + auVar99._8_2_) < (short)uVar114);
  auVar205._10_2_ = -(ushort)((short)(auVar146._10_2_ + auVar99._10_2_) < (short)uVar116);
  auVar205._12_2_ = -(ushort)((short)(auVar146._12_2_ + auVar99._12_2_) < (short)uVar120);
  auVar205._14_2_ = -(ushort)((short)(auVar146._14_2_ + auVar99._14_2_) < (short)uVar122);
  pauVar70 = (undefined1 (*) [16])local_648;
  if ((((((((((((((((auVar205 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                   (auVar205 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar205 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar205 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar205 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar205 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar205 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar205 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar205 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
           (auVar205 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
          (auVar205 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
         (auVar205 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
        (auVar205 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
       (auVar205 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
      (auVar205._14_2_ >> 7 & 1) != 0) || (auVar205._14_2_ & 0x8000) != 0) {
    local_438._2_2_ = local_648[1];
    local_438._0_2_ = local_648[0];
    local_438._4_2_ = local_648[2];
    local_438._6_2_ = local_648[3];
    uStack_430._2_2_ = local_648[5];
    uStack_430._0_2_ = local_648[4];
    uStack_430._4_2_ = local_648[6];
    uStack_430._6_2_ = local_648[7];
    _local_348 = (undefined1  [16])0x0;
    _local_448 = (undefined1  [16])0x0;
    fStack_420._0_2_ = local_638[4];
    fStack_420._2_2_ = local_638[5];
    fStack_41c._0_2_ = local_638[6];
    fStack_41c._2_2_ = local_638[7];
    local_428._0_2_ = local_638[0];
    local_428._2_2_ = local_638[1];
    local_428._4_2_ = local_638[2];
    local_428._6_2_ = local_638[3];
    uStack_410 = uStack_620;
    local_418 = (undefined1  [8])local_628;
    local_408._8_8_ = uStack_610;
    local_408._0_8_ = local_618;
    local_3f8._8_8_ = uStack_600;
    local_3f8._0_8_ = local_608;
    local_3e8._8_8_ = uStack_5f0;
    local_3e8._0_8_ = local_5f8;
    uStack_3d0 = uStack_5e0;
    local_3d8 = (undefined1  [8])local_5e8;
    local_3c8._8_8_ = uStack_5d0;
    local_3c8._0_8_ = local_5d8;
    local_3b8._8_8_ = uStack_5c0;
    local_3b8._0_8_ = local_5c8;
    local_3a8 = local_5b8;
    uStack_3a0 = uStack_5b0;
    local_398 = local_5a8;
    uStack_390 = uStack_5a0;
    local_388 = local_598;
    uStack_380 = uStack_590;
    local_378 = local_588;
    uStack_370 = uStack_580;
    local_368 = local_578;
    uStack_360 = uStack_570;
    local_358 = local_568;
    uStack_350 = uStack_560;
    pauVar71 = pauVar65;
    pauVar67 = (undefined1 (*) [16])local_338;
    do {
      puVar60 = *pauVar71;
      sVar134 = *(short *)(*pauVar71 + 2);
      sVar157 = *(short *)(*pauVar71 + 4);
      sVar159 = *(short *)(*pauVar71 + 6);
      sVar162 = *(short *)(*pauVar71 + 8);
      sVar164 = *(short *)(*pauVar71 + 10);
      sVar167 = *(short *)(*pauVar71 + 0xc);
      sVar169 = *(short *)(*pauVar71 + 0xe);
      pauVar79 = pauVar67 + 1;
      pauVar71 = pauVar71 + -1;
      *(short *)*pauVar67 = (short)local_a38 - *(short *)puVar60;
      *(short *)((long)*pauVar67 + 2) = local_a38._2_2_ - sVar134;
      *(short *)((long)*pauVar67 + 4) = local_a38._4_2_ - sVar157;
      *(short *)((long)*pauVar67 + 6) = local_a38._6_2_ - sVar159;
      *(short *)((long)*pauVar67 + 8) = (short)uStack_a30 - sVar162;
      *(short *)((long)*pauVar67 + 10) = uStack_a30._2_2_ - sVar164;
      *(short *)((long)*pauVar67 + 0xc) = uStack_a30._4_2_ - sVar167;
      *(short *)((long)*pauVar67 + 0xe) = uStack_a30._6_2_ - sVar169;
      pauVar67 = pauVar79;
    } while ((undefined1 (*) [16])local_248 != pauVar79);
    sVar134 = 0;
    pauVar71 = (undefined1 (*) [16])local_648;
    pEVar77 = local_8d8;
    do {
      auVar146 = *(undefined1 (*) [16])pEVar77;
      uVar95 = 0xf - sVar134;
      pauVar67 = pauVar71;
      do {
        sVar157 = sVar134 + uVar95;
        auVar147._0_2_ = -(ushort)(0 < sVar157);
        auVar147._2_2_ = -(ushort)(0 < sVar157);
        auVar147._4_2_ = -(ushort)(0 < sVar157);
        auVar147._6_2_ = -(ushort)(0 < sVar157);
        auVar147._8_2_ = -(ushort)(0 < sVar157);
        auVar147._10_2_ = -(ushort)(0 < sVar157);
        auVar147._12_2_ = -(ushort)(0 < sVar157);
        auVar147._14_2_ = -(ushort)(0 < sVar157);
        if ((((((((((((((((auVar147 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                         (auVar147 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar147 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar147 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar147 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar147 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar147 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar147 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar147 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar147 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar147 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
               (auVar147 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
              (auVar147 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
             (auVar147 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
            (auVar147._14_2_ >> 7 & 1) != 0) || (auVar147._14_2_ & 0x8000) != 0) {
          lVar64 = (ulong)uVar95 * 0x10;
          sVar159 = *(short *)(local_348 + lVar64);
          sVar162 = *(short *)(local_348 + lVar64 + 2);
          sVar164 = *(short *)(local_348 + lVar64 + 4);
          sVar167 = *(short *)(local_348 + lVar64 + 6);
          sVar169 = *(short *)(local_348 + lVar64 + 8);
          sVar172 = *(short *)(local_338 + lVar64 + -6);
          sVar212 = *(short *)(local_338 + lVar64 + -4);
          sVar213 = *(short *)(local_338 + lVar64 + -2);
          sVar157 = auVar146._0_2_;
          auVar206._0_2_ =
               (ushort)(sVar159 < sVar157) * sVar157 | (ushort)(sVar159 >= sVar157) * sVar159;
          sVar157 = auVar146._2_2_;
          auVar206._2_2_ =
               (ushort)(sVar162 < sVar157) * sVar157 | (ushort)(sVar162 >= sVar157) * sVar162;
          sVar157 = auVar146._4_2_;
          auVar206._4_2_ =
               (ushort)(sVar164 < sVar157) * sVar157 | (ushort)(sVar164 >= sVar157) * sVar164;
          sVar157 = auVar146._6_2_;
          auVar206._6_2_ =
               (ushort)(sVar167 < sVar157) * sVar157 | (ushort)(sVar167 >= sVar157) * sVar167;
          sVar157 = auVar146._8_2_;
          auVar206._8_2_ =
               (ushort)(sVar169 < sVar157) * sVar157 | (ushort)(sVar169 >= sVar157) * sVar169;
          sVar157 = auVar146._10_2_;
          auVar206._10_2_ =
               (ushort)(sVar172 < sVar157) * sVar157 | (ushort)(sVar172 >= sVar157) * sVar172;
          sVar157 = auVar146._12_2_;
          auVar206._12_2_ =
               (ushort)(sVar212 < sVar157) * sVar157 | (ushort)(sVar212 >= sVar157) * sVar212;
          sVar157 = auVar146._14_2_;
          auVar206._14_2_ =
               (ushort)(sVar213 < sVar157) * sVar157 | (ushort)(sVar213 >= sVar157) * sVar213;
          auVar99 = psllw(auVar206,2);
          auVar137 = psllw(auVar206,4);
          auVar207._0_2_ =
               -(ushort)((short)(auVar137._0_2_ + auVar99._0_2_) <
                        (short)(*(short *)*pauVar67 - *(short *)*pauVar71));
          auVar207._2_2_ =
               -(ushort)((short)(auVar137._2_2_ + auVar99._2_2_) <
                        (short)(*(short *)(*pauVar67 + 2) - *(short *)(*pauVar71 + 2)));
          auVar207._4_2_ =
               -(ushort)((short)(auVar137._4_2_ + auVar99._4_2_) <
                        (short)(*(short *)(*pauVar67 + 4) - *(short *)(*pauVar71 + 4)));
          auVar207._6_2_ =
               -(ushort)((short)(auVar137._6_2_ + auVar99._6_2_) <
                        (short)(*(short *)(*pauVar67 + 6) - *(short *)(*pauVar71 + 6)));
          auVar207._8_2_ =
               -(ushort)((short)(auVar137._8_2_ + auVar99._8_2_) <
                        (short)(*(short *)(*pauVar67 + 8) - *(short *)(*pauVar71 + 8)));
          auVar207._10_2_ =
               -(ushort)((short)(auVar137._10_2_ + auVar99._10_2_) <
                        (short)(*(short *)(*pauVar67 + 10) - *(short *)(*pauVar71 + 10)));
          auVar207._12_2_ =
               -(ushort)((short)(auVar137._12_2_ + auVar99._12_2_) <
                        (short)(*(short *)(*pauVar67 + 0xc) - *(short *)(*pauVar71 + 0xc)));
          auVar207._14_2_ =
               -(ushort)((short)(auVar137._14_2_ + auVar99._14_2_) <
                        (short)(*(short *)(*pauVar67 + 0xe) - *(short *)(*pauVar71 + 0xe)));
          auVar147 = auVar147 & auVar207;
          _local_9c8 = *pauVar71 & auVar147 | ~auVar147 & _local_9c8;
          local_a28 = *pauVar67 & auVar147 | ~auVar147 & local_a28;
        }
        uVar95 = uVar95 - 1;
        pauVar67 = pauVar67 + 1;
      } while (uVar95 != 0xffff);
      sVar134 = sVar134 + 1;
      pEVar77 = pEVar77 + 0x10;
      pauVar71 = pauVar71 + 1;
    } while (sVar134 != 0x10);
  }
  do {
    auVar208._0_2_ = -(ushort)(0 < *(short *)*pauVar65);
    auVar208._2_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 2));
    auVar208._4_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 4));
    auVar208._6_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 6));
    auVar208._8_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 8));
    auVar208._10_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 10));
    auVar208._12_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 0xc));
    auVar208._14_2_ = -(ushort)(0 < *(short *)(*pauVar65 + 0xe));
    _local_9a8 = *pauVar65 & auVar208 | ~auVar208 & _local_9a8;
    auVar209._0_2_ = -(ushort)(*(short *)*pauVar70 < (short)local_a38);
    auVar209._2_2_ = -(ushort)(*(short *)(*pauVar70 + 2) < local_a38._2_2_);
    auVar209._4_2_ = -(ushort)(*(short *)(*pauVar70 + 4) < local_a38._4_2_);
    auVar209._6_2_ = -(ushort)(*(short *)(*pauVar70 + 6) < local_a38._6_2_);
    auVar209._8_2_ = -(ushort)(*(short *)(*pauVar70 + 8) < (short)uStack_a30);
    auVar209._10_2_ = -(ushort)(*(short *)(*pauVar70 + 10) < uStack_a30._2_2_);
    auVar209._12_2_ = -(ushort)(*(short *)(*pauVar70 + 0xc) < uStack_a30._4_2_);
    auVar209._14_2_ = -(ushort)(*(short *)(*pauVar70 + 0xe) < uStack_a30._6_2_);
    local_a18 = *pauVar70 & auVar209 | ~auVar209 & local_a18;
    bVar81 = (undefined1 (*) [16])local_648 != pauVar65;
    pauVar65 = pauVar65 + -1;
    pauVar70 = pauVar70 + 1;
  } while (bVar81);
  local_7d8 = _local_9c8;
  pauVar65 = &local_7e8;
  local_7c8 = local_a18;
  auVar195._0_2_ = -(ushort)(local_a18._0_2_ == local_a28._0_2_);
  auVar195._2_2_ = -(ushort)(local_a18._2_2_ == local_a28._2_2_);
  auVar195._4_2_ = -(ushort)(local_a18._4_2_ == local_a28._4_2_);
  auVar195._6_2_ = -(ushort)(local_a18._6_2_ == local_a28._6_2_);
  auVar195._8_2_ = -(ushort)(local_a18._8_2_ == local_a28._8_2_);
  auVar195._10_2_ = -(ushort)(local_a18._10_2_ == local_a28._10_2_);
  auVar195._12_2_ = -(ushort)(local_a18._12_2_ == local_a28._12_2_);
  auVar195._14_2_ = -(ushort)(local_a18._14_2_ == local_a28._14_2_);
  auVar176._0_2_ = -(ushort)(local_9c8._0_2_ == SUB162(_local_9a8,0));
  auVar176._2_2_ = -(ushort)(local_9c8._2_2_ == SUB162(_local_9a8,2));
  auVar176._4_2_ = -(ushort)(local_9c8._4_2_ == SUB162(_local_9a8,4));
  auVar176._6_2_ = -(ushort)(sStack_9c2 == SUB162(_local_9a8,6));
  auVar176._8_2_ = -(ushort)((short)uStack_9c0 == SUB162(_local_9a8,8));
  auVar176._10_2_ = -(ushort)(uStack_9c0._2_2_ == SUB162(_local_9a8,10));
  auVar176._12_2_ = -(ushort)((short)uStack_9bc == SUB162(_local_9a8,0xc));
  auVar176._14_2_ = -(ushort)(uStack_9bc._2_2_ == SUB162(_local_9a8,0xe));
  local_7b8 = local_a28;
  pauVar70 = pauVar65 +
             (int)(((ushort)((ushort)(SUB161(auVar176 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar176 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar176 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar176 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar176 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar176 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar176 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar176 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar176 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar176 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar176 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar176 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar176 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar176 >> 0x6f,0) & 1) << 0xd |
                             (ushort)((byte)(auVar176._14_2_ >> 7) & 1) << 0xe |
                            auVar176._14_2_ & 0x8000) != 0xffff) + 1);
  do {
    uVar114 = SUB162(_local_9a8,6);
    auVar19._10_2_ = 0;
    auVar19._0_10_ = SUB1610(_local_9a8,0);
    auVar19._12_2_ = uVar114;
    sVar157 = SUB162(_local_9a8,4);
    auVar27._8_2_ = sVar157;
    auVar27._0_8_ = SUB168(_local_9a8,0);
    auVar27._10_4_ = auVar19._10_4_;
    auVar42._6_8_ = 0;
    auVar42._0_6_ = auVar27._8_6_;
    sVar134 = SUB162(_local_9a8,2);
    uVar95 = SUB162(_local_9a8,0);
    uVar116 = SUB162(_local_9a8,8);
    uVar120 = SUB162(_local_9a8,10);
    uVar122 = SUB162(_local_9a8,0xc);
    uVar126 = SUB162(_local_9a8,0xe);
    fVar215 = (float)uVar95;
    fVar221 = (float)(int)CONCAT82(SUB148(auVar42 << 0x40,6),sVar134);
    fVar220 = (float)uVar116;
    fVar223 = (float)uVar120;
    fVar224 = (float)uVar122;
    fVar225 = (float)uVar126;
    psVar80 = (short *)local_7c8;
    do {
      uVar128 = psVar80[3] - uVar114;
      uVar132 = psVar80[4] - uVar116;
      auVar54._2_2_ = uVar132;
      auVar54._0_2_ = uVar128;
      auVar54._4_8_ = 0;
      auVar20._12_2_ = uVar128;
      auVar20._0_12_ = auVar54 << 0x30;
      uVar33 = CONCAT44(auVar20._10_4_,CONCAT22(psVar80[2] - sVar157,uVar128));
      auVar43._6_8_ = 0;
      auVar43._0_6_ = (uint6)((ulong)uVar33 >> 0x10);
      fVar226 = (float)(ushort)(*psVar80 - uVar95);
      fVar97 = (float)(int)CONCAT82(SUB148(auVar43 << 0x40,6),psVar80[1] - sVar134);
      fVar124 = (float)(int)((ulong)uVar33 >> 0x10);
      fVar227 = (float)uVar132;
      fVar118 = (float)(ushort)(psVar80[5] - uVar120);
      fVar130 = (float)(ushort)(psVar80[6] - uVar122);
      fVar136 = (float)(ushort)(psVar80[7] - uVar126);
      iVar62 = cvtt::Internal::BCCommon::TweakRoundsForRange(6);
      uVar63 = _LC13;
      local_a48._4_4_ = _LC22;
      if (iVar68 <= iVar62) {
        iVar62 = iVar68;
      }
      if (0 < iVar62) {
        iVar73 = param_8 + -1;
        iVar78 = 0;
        do {
          uVar84 = MXCSR;
          local_a48._0_4_ = local_a48._4_4_;
          fStack_a40 = (float)local_a48._4_4_;
          fStack_a3c = (float)local_a48._4_4_;
          MXCSR = MXCSR & 0xffff9fff;
          cvtt::Util::ComputeTweakFactors(iVar78,8,(float *)local_348);
          auVar177._0_4_ = fVar226 * (float)local_348._0_4_ + fVar215;
          auVar177._4_4_ = fVar97 * (float)local_348._0_4_ + fVar221;
          auVar177._8_4_ = fVar124 * (float)local_348._0_4_ + (float)auVar27._8_4_;
          auVar177._12_4_ = (float)uVar128 * (float)local_348._0_4_ + (float)uVar114;
          auVar107._0_4_ = (float)local_348._0_4_ * fVar227 + fVar220;
          auVar107._4_4_ = (float)local_348._0_4_ * fVar118 + fVar223;
          auVar107._8_4_ = (float)local_348._0_4_ * fVar130 + fVar224;
          auVar107._12_4_ = (float)local_348._0_4_ * fVar136 + fVar225;
          auVar99 = minps(auVar177,_local_a48);
          auVar146 = minps(auVar107,_local_a48);
          auVar99 = maxps(auVar99,(undefined1  [16])0x0);
          auVar146 = maxps(auVar146,(undefined1  [16])0x0);
          auVar178._0_4_ = (int)auVar99._0_4_;
          auVar178._4_4_ = (int)auVar99._4_4_;
          auVar178._8_4_ = (int)auVar99._8_4_;
          auVar178._12_4_ = (int)auVar99._12_4_;
          auVar196._0_4_ = fVar226 * stack0xfffffffffffffcbc + fVar215;
          auVar196._4_4_ = fVar97 * stack0xfffffffffffffcbc + fVar221;
          auVar196._8_4_ = fVar124 * stack0xfffffffffffffcbc + (float)auVar27._8_4_;
          auVar196._12_4_ = (float)uVar128 * stack0xfffffffffffffcbc + (float)uVar114;
          auVar108._0_4_ = (int)auVar146._0_4_;
          auVar108._4_4_ = (int)auVar146._4_4_;
          auVar108._8_4_ = (int)auVar146._8_4_;
          auVar108._12_4_ = (int)auVar146._12_4_;
          local_7a8 = packssdw(auVar178,auVar108);
          auVar148._0_4_ = stack0xfffffffffffffcbc * fVar227 + fVar220;
          auVar148._4_4_ = stack0xfffffffffffffcbc * fVar118 + fVar223;
          auVar148._8_4_ = stack0xfffffffffffffcbc * fVar130 + fVar224;
          auVar148._12_4_ = stack0xfffffffffffffcbc * fVar136 + fVar225;
          auVar99 = minps(auVar196,_local_a48);
          auVar146 = minps(auVar148,_local_a48);
          auVar99 = maxps(auVar99,(undefined1  [16])0x0);
          auVar146 = maxps(auVar146,(undefined1  [16])0x0);
          auVar197._0_4_ = (int)auVar99._0_4_;
          auVar197._4_4_ = (int)auVar99._4_4_;
          auVar197._8_4_ = (int)auVar99._8_4_;
          auVar197._12_4_ = (int)auVar99._12_4_;
          auVar149._0_4_ = (int)auVar146._0_4_;
          auVar149._4_4_ = (int)auVar146._4_4_;
          auVar149._8_4_ = (int)auVar146._8_4_;
          auVar149._12_4_ = (int)auVar146._12_4_;
          local_798 = packssdw(auVar197,auVar149);
          iVar69 = 0;
          auVar254._0_12_ = ZEXT812(0);
          auVar254._12_4_ = 0;
          pauVar71 = extraout_RDX;
          MXCSR = uVar84;
          do {
            _local_448 = auVar254;
            local_3a8 = 0x3e4ccccd00000000;
            uStack_3a0 = 0x3f8000003f800000;
            _local_438 = auVar254;
            _local_428 = auVar254;
            _local_418 = auVar254;
            local_408 = auVar254;
            local_3f8 = auVar254;
            local_3e8 = auVar254;
            _local_3d8 = auVar254;
            local_3c8 = auVar254;
            local_3b8 = auVar254;
            if (param_6) {
              sVar159 = local_7a8._0_2_;
              auVar201._0_2_ =
                   (ushort)((short)local_a38 < sVar159) * (short)local_a38 |
                   (ushort)((short)local_a38 >= sVar159) * sVar159;
              sVar159 = local_7a8._2_2_;
              auVar201._2_2_ =
                   (ushort)(local_a38._2_2_ < sVar159) * local_a38._2_2_ |
                   (ushort)(local_a38._2_2_ >= sVar159) * sVar159;
              sVar159 = local_7a8._4_2_;
              auVar201._4_2_ =
                   (ushort)(local_a38._4_2_ < sVar159) * local_a38._4_2_ |
                   (ushort)(local_a38._4_2_ >= sVar159) * sVar159;
              sVar159 = local_7a8._6_2_;
              auVar201._6_2_ =
                   (ushort)(local_a38._6_2_ < sVar159) * local_a38._6_2_ |
                   (ushort)(local_a38._6_2_ >= sVar159) * sVar159;
              sVar159 = local_7a8._8_2_;
              auVar201._8_2_ =
                   (ushort)((short)uStack_a30 < sVar159) * (short)uStack_a30 |
                   (ushort)((short)uStack_a30 >= sVar159) * sVar159;
              sVar159 = local_7a8._10_2_;
              auVar201._10_2_ =
                   (ushort)(uStack_a30._2_2_ < sVar159) * uStack_a30._2_2_ |
                   (ushort)(uStack_a30._2_2_ >= sVar159) * sVar159;
              sVar159 = local_7a8._12_2_;
              sVar162 = local_7a8._14_2_;
              auVar201._12_2_ =
                   (ushort)(uStack_a30._4_2_ < sVar159) * uStack_a30._4_2_ |
                   (ushort)(uStack_a30._4_2_ >= sVar159) * sVar159;
              auVar201._14_2_ =
                   (ushort)(uStack_a30._6_2_ < sVar162) * uStack_a30._6_2_ |
                   (ushort)(uStack_a30._6_2_ >= sVar162) * sVar162;
              sVar159 = local_798._0_2_;
              auVar156._0_2_ =
                   (ushort)((short)local_a38 < sVar159) * (short)local_a38 |
                   (ushort)((short)local_a38 >= sVar159) * sVar159;
              sVar159 = local_798._2_2_;
              auVar156._2_2_ =
                   (ushort)(local_a38._2_2_ < sVar159) * local_a38._2_2_ |
                   (ushort)(local_a38._2_2_ >= sVar159) * sVar159;
              sVar159 = local_798._4_2_;
              auVar156._4_2_ =
                   (ushort)(local_a38._4_2_ < sVar159) * local_a38._4_2_ |
                   (ushort)(local_a38._4_2_ >= sVar159) * sVar159;
              sVar159 = local_798._6_2_;
              auVar156._6_2_ =
                   (ushort)(local_a38._6_2_ < sVar159) * local_a38._6_2_ |
                   (ushort)(local_a38._6_2_ >= sVar159) * sVar159;
              sVar159 = local_798._8_2_;
              auVar156._8_2_ =
                   (ushort)((short)uStack_a30 < sVar159) * (short)uStack_a30 |
                   (ushort)((short)uStack_a30 >= sVar159) * sVar159;
              sVar159 = local_798._10_2_;
              auVar156._10_2_ =
                   (ushort)(uStack_a30._2_2_ < sVar159) * uStack_a30._2_2_ |
                   (ushort)(uStack_a30._2_2_ >= sVar159) * sVar159;
              sVar159 = local_798._12_2_;
              sVar162 = local_798._14_2_;
              auVar156._12_2_ =
                   (ushort)(uStack_a30._4_2_ < sVar159) * uStack_a30._4_2_ |
                   (ushort)(uStack_a30._4_2_ >= sVar159) * sVar159;
              auVar156._14_2_ =
                   (ushort)(uStack_a30._6_2_ < sVar162) * uStack_a30._6_2_ |
                   (ushort)(uStack_a30._6_2_ >= sVar162) * sVar162;
              local_7a8 = auVar201;
              local_798 = auVar156;
            }
            fVar265 = (float)local_7a8._8_2_;
            fVar267 = (float)local_7a8._10_2_;
            fVar269 = (float)local_7a8._12_2_;
            fVar239 = (float)local_7a8._14_2_;
            bVar81 = false;
            bVar51 = false;
            uVar132 = local_7a8._6_2_;
            auVar21._10_2_ = 0;
            auVar21._0_10_ = local_7a8._0_10_;
            auVar21._12_2_ = uVar132;
            auVar28._8_2_ = local_7a8._4_2_;
            auVar28._0_8_ = local_7a8._0_8_;
            auVar28._10_4_ = auVar21._10_4_;
            auVar44._6_8_ = 0;
            auVar44._0_6_ = auVar28._8_6_;
            auVar9._10_2_ = 0;
            auVar9._0_10_ = local_798._0_10_;
            auVar9._12_2_ = local_798._6_2_;
            auVar22._8_2_ = local_798._4_2_;
            auVar22._0_8_ = local_798._0_8_;
            auVar22._10_4_ = auVar9._10_4_;
            auVar45._6_8_ = 0;
            auVar45._0_6_ = auVar22._8_6_;
            fVar238 = (float)local_7a8._0_2_;
            fVar263 = (float)(int)CONCAT82(SUB148(auVar44 << 0x40,6),local_7a8._2_2_);
            fVar222 = (float)local_798._0_2_ - fVar238;
            fVar228 = (float)(int)CONCAT82(SUB148(auVar45 << 0x40,6),local_798._2_2_) - fVar263;
            fVar234 = (float)auVar22._8_4_ - (float)auVar28._8_4_;
            fVar236 = (float)(auVar9._10_4_ >> 0x10) - (float)uVar132;
            fVar161 = (float)local_798._8_2_ - fVar265;
            fVar166 = (float)local_798._10_2_ - fVar267;
            fVar171 = (float)local_798._12_2_ - fVar269;
            fVar216 = (float)local_798._14_2_ - fVar239;
            uVar84 = -(uint)(fVar222 * fVar222 == 0.0);
            uVar88 = -(uint)(fVar228 * fVar228 == 0.0);
            uVar92 = -(uint)(fVar234 * fVar234 == auVar254._8_4_);
            uVar83 = -(uint)(fVar236 * fVar236 == auVar254._12_4_);
            uVar85 = -(uint)(fVar161 * fVar161 == 0.0);
            uVar89 = -(uint)(fVar166 * fVar166 == 0.0);
            uVar82 = -(uint)(fVar171 * fVar171 == auVar254._8_4_);
            uVar86 = -(uint)(fVar216 * fVar216 == auVar254._12_4_);
            auVar242._0_4_ = uVar63 & uVar84;
            auVar242._4_4_ = uVar63 & uVar88;
            auVar242._8_4_ = uVar63 & uVar92;
            auVar242._12_4_ = uVar63 & uVar83;
            auVar219._0_4_ = ~uVar84 & (uint)(fVar222 * fVar222);
            auVar219._4_4_ = ~uVar88 & (uint)(fVar228 * fVar228);
            auVar219._8_4_ = ~uVar92 & (uint)(fVar234 * fVar234);
            auVar219._12_4_ = ~uVar83 & (uint)(fVar236 * fVar236);
            auVar240._0_4_ = uVar63 & uVar85;
            auVar240._4_4_ = uVar63 & uVar89;
            auVar240._8_4_ = uVar63 & uVar82;
            auVar240._12_4_ = uVar63 & uVar86;
            auVar210._0_4_ = ~uVar85 & (uint)(fVar161 * fVar161);
            auVar210._4_4_ = ~uVar89 & (uint)(fVar166 * fVar166);
            auVar210._8_4_ = ~uVar82 & (uint)(fVar171 * fVar171);
            auVar210._12_4_ = ~uVar86 & (uint)(fVar216 * fVar216);
            auVar233._4_4_ = _LC43;
            auVar233._0_4_ = _LC43;
            auVar233._8_4_ = _LC43;
            auVar233._12_4_ = _LC43;
            auVar99 = divps(auVar233,auVar219 | auVar242);
            auVar198._4_4_ = _LC43;
            auVar198._0_4_ = _LC43;
            auVar198._8_4_ = _LC43;
            auVar198._12_4_ = _LC43;
            auVar146 = divps(auVar198,auVar210 | auVar240);
            _local_988 = (undefined1  [16])0x0;
            auVar251._0_12_ = ZEXT812(0);
            auVar251._12_4_ = 0;
            _local_978 = (undefined1  [16])0x0;
            _local_998 = (undefined1  [16])0x0;
            _local_9a8 = (undefined1  [16])0x0;
            _local_9b8 = (undefined1  [16])0x0;
            _local_9c8 = (undefined1  [16])0x0;
            _local_a58 = (undefined1  [16])0x0;
            lVar64 = 0;
            do {
              auVar137 = *(undefined1 (*) [16])((long)*(undefined1 (*) [16])local_248 + lVar64 * 2);
              fVar229 = auVar137._0_4_;
              fVar235 = auVar137._4_4_;
              fVar237 = auVar137._8_4_;
              fVar174 = auVar137._12_4_;
              lVar66 = lVar64 * 2;
              fVar250 = *(float *)((long)local_248 + lVar66 + 0x10);
              fVar253 = *(float *)((long)local_248 + lVar66 + 0x14);
              fVar29 = *(float *)((long)local_248 + lVar66 + 0x18);
              fVar30 = *(float *)((long)local_248 + lVar66 + 0x1c);
              sVar159 = *(short *)((long)*(undefined1 (*) [16])local_748 + lVar64);
              sVar162 = *(short *)((long)local_748 + lVar64 + 2);
              sVar164 = *(short *)((long)local_748 + lVar64 + 4);
              sVar167 = *(short *)((long)local_748 + lVar64 + 6);
              sVar169 = *(short *)((long)local_748 + lVar64 + 8);
              sVar172 = *(short *)((long)local_748 + lVar64 + 10);
              sVar212 = *(short *)((long)local_748 + lVar64 + 0xc);
              sVar213 = *(short *)((long)local_748 + lVar64 + 0xe);
              auVar150._0_4_ = (fVar229 - fVar238) * auVar99._0_4_ * fVar222;
              auVar150._4_4_ = (fVar235 - fVar263) * auVar99._4_4_ * fVar228;
              auVar150._8_4_ = (fVar237 - (float)auVar28._8_4_) * auVar99._8_4_ * fVar234;
              auVar150._12_4_ = (fVar174 - (float)uVar132) * auVar99._12_4_ * fVar236;
              auVar31._4_12_ = _UNK_00107104;
              auVar31._0_4_ = _LC43;
              auVar175 = minps(auVar150,auVar31);
              auVar109._0_4_ = (fVar250 - fVar265) * auVar146._0_4_ * fVar161;
              auVar109._4_4_ = (fVar253 - fVar267) * auVar146._4_4_ * fVar166;
              auVar109._8_4_ = (fVar29 - fVar269) * auVar146._8_4_ * fVar171;
              auVar109._12_4_ = (fVar30 - fVar239) * auVar146._12_4_ * fVar216;
              auVar32._4_12_ = _UNK_00107104;
              auVar32._0_4_ = _LC43;
              auVar137 = minps(auVar109,auVar32);
              auVar175 = maxps(auVar175,auVar254);
              auVar137 = maxps(auVar137,auVar254);
              auVar151._0_4_ = (int)auVar175._0_4_;
              auVar151._4_4_ = (int)auVar175._4_4_;
              auVar151._8_4_ = (int)auVar175._8_4_;
              auVar151._12_4_ = (int)auVar175._12_4_;
              auVar110._0_4_ = (int)auVar137._0_4_;
              auVar110._4_4_ = (int)auVar137._4_4_;
              auVar110._8_4_ = (int)auVar137._8_4_;
              auVar110._12_4_ = (int)auVar137._12_4_;
              auVar192 = packssdw(auVar151,auVar110);
              uVar181 = auVar192._0_2_;
              sVar247 = auVar192._2_2_;
              sVar248 = auVar192._4_2_;
              sVar249 = auVar192._6_2_;
              uVar183 = auVar192._8_2_;
              uVar184 = auVar192._10_2_;
              uVar186 = auVar192._12_2_;
              uVar187 = auVar192._14_2_;
              uVar135 = (ushort)(_DAT_00108068 * uVar181 + __LC18) >> 7;
              uVar158 = (ushort)(sRam000000000010806a * sVar247 + _UNK_00107072) >> 7;
              uVar160 = (ushort)(sRam000000000010806c * sVar248 + _UNK_00107074) >> 7;
              uVar163 = (ushort)(sRam000000000010806e * sVar249 + _UNK_00107076) >> 7;
              uVar165 = (ushort)(sRam0000000000108070 * uVar183 + _UNK_00107078) >> 7;
              uVar168 = (ushort)(sRam0000000000108072 * uVar184 + _UNK_0010707a) >> 7;
              uVar170 = (ushort)(sRam0000000000108074 * uVar186 + _UNK_0010707c) >> 7;
              uVar173 = (ushort)(sRam0000000000108076 * uVar187 + _UNK_0010707e) >> 7;
              sVar133 = sVar167 * sVar167;
              auVar55._2_2_ = sVar169 * sVar169;
              auVar55._0_2_ = sVar133;
              sVar214 = ((ushort)(local_798._0_2_ * uVar135 + __LC20 +
                                 (__LC19 - uVar135) * local_7a8._0_2_) >> 8) - sVar159;
              sVar96 = ((ushort)(local_798._2_2_ * uVar158 + _UNK_00107092 +
                                (_UNK_00107082 - uVar158) * local_7a8._2_2_) >> 8) - sVar162;
              sVar115 = ((ushort)(local_798._4_2_ * uVar160 + _UNK_00107094 +
                                 (_UNK_00107084 - uVar160) * local_7a8._4_2_) >> 8) - sVar164;
              sVar117 = ((ushort)(local_798._6_2_ * uVar163 + _UNK_00107096 +
                                 (_UNK_00107086 - uVar163) * uVar132) >> 8) - sVar167;
              sVar121 = ((ushort)(local_798._8_2_ * uVar165 + _UNK_00107098 +
                                 (_UNK_00107088 - uVar165) * local_7a8._8_2_) >> 8) - sVar169;
              sVar123 = ((ushort)(local_798._10_2_ * uVar168 + _UNK_0010709a +
                                 (_UNK_0010708a - uVar168) * local_7a8._10_2_) >> 8) - sVar172;
              sVar127 = ((ushort)(local_798._12_2_ * uVar170 + _UNK_0010709c +
                                 (_UNK_0010708c - uVar170) * local_7a8._12_2_) >> 8) - sVar212;
              sVar129 = ((ushort)(local_798._14_2_ * uVar173 + _UNK_0010709e +
                                 (_UNK_0010708e - uVar173) * local_7a8._14_2_) >> 8) - sVar213;
              sVar167 = (local_a38._6_2_ - sVar167) * (local_a38._6_2_ - sVar167);
              uVar158 = ((short)uStack_a30 - sVar169) * ((short)uStack_a30 - sVar169);
              auVar56._2_2_ = uVar158;
              auVar56._0_2_ = sVar167;
              sVar117 = sVar117 * sVar117;
              uVar135 = sVar121 * sVar121;
              auVar57._2_2_ = uVar135;
              auVar57._0_2_ = sVar117;
              auVar55._4_8_ = 0;
              auVar11._12_2_ = sVar133;
              auVar11._0_12_ = auVar55 << 0x30;
              uVar33 = CONCAT44(auVar11._10_4_,CONCAT22(sVar164 * sVar164,sVar133));
              auVar47._6_8_ = 0;
              auVar47._0_6_ = (uint6)((ulong)uVar33 >> 0x10);
              auVar199._0_4_ = (float)(ushort)(sVar159 * sVar159);
              auVar199._4_4_ = (float)(int)CONCAT82(SUB148(auVar47 << 0x40,6),sVar162 * sVar162);
              auVar199._8_4_ = (float)(int)((ulong)uVar33 >> 0x10);
              auVar199._12_4_ = (float)(auVar11._10_4_ >> 0x10);
              auVar152._0_4_ = (float)(ushort)(sVar169 * sVar169);
              auVar152._4_4_ = (float)(ushort)(sVar172 * sVar172);
              auVar152._8_4_ = (float)(ushort)(sVar212 * sVar212);
              auVar152._12_4_ = (float)(ushort)(sVar213 * sVar213);
              auVar56._4_8_ = 0;
              auVar12._12_2_ = sVar167;
              auVar12._0_12_ = auVar56 << 0x30;
              uVar33 = CONCAT44(auVar12._10_4_,
                                CONCAT22((local_a38._4_2_ - sVar164) * (local_a38._4_2_ - sVar164),
                                         sVar167));
              auVar48._6_8_ = 0;
              auVar48._0_6_ = (uint6)((ulong)uVar33 >> 0x10);
              auVar179._0_4_ = (float)uVar158;
              auVar179._4_4_ =
                   (float)(ushort)((uStack_a30._2_2_ - sVar172) * (uStack_a30._2_2_ - sVar172));
              auVar179._8_4_ =
                   (float)(ushort)((uStack_a30._4_2_ - sVar212) * (uStack_a30._4_2_ - sVar212));
              auVar179._12_4_ =
                   (float)(ushort)((uStack_a30._6_2_ - sVar213) * (uStack_a30._6_2_ - sVar213));
              auVar57._4_8_ = 0;
              auVar13._12_2_ = sVar117;
              auVar13._0_12_ = auVar57 << 0x30;
              uVar58 = CONCAT44(auVar13._10_4_,CONCAT22(sVar115 * sVar115,sVar117));
              auVar49._6_8_ = 0;
              auVar49._0_6_ = (uint6)((ulong)uVar58 >> 0x10);
              auVar243._0_4_ =
                   (float)(ushort)(((short)local_a38 - sVar159) * ((short)local_a38 - sVar159));
              auVar243._4_4_ =
                   (float)(int)CONCAT82(SUB148(auVar48 << 0x40,6),
                                        (local_a38._2_2_ - sVar162) * (local_a38._2_2_ - sVar162));
              auVar243._8_4_ = (float)(int)((ulong)uVar33 >> 0x10);
              auVar243._12_4_ = (float)(auVar12._10_4_ >> 0x10);
              auVar245._4_4_ = -(uint)(auVar179._4_4_ < auVar152._4_4_);
              auVar245._0_4_ = -(uint)(auVar179._0_4_ < auVar152._0_4_);
              auVar245._8_4_ = -(uint)(auVar179._8_4_ < auVar152._8_4_);
              auVar245._12_4_ = -(uint)(auVar179._12_4_ < auVar152._12_4_);
              auVar211._0_4_ = (float)(ushort)(sVar214 * sVar214);
              auVar211._4_4_ = (float)(int)CONCAT82(SUB148(auVar49 << 0x40,6),sVar96 * sVar96);
              auVar211._8_4_ = (float)(int)((ulong)uVar58 >> 0x10);
              auVar211._12_4_ = (float)(auVar13._10_4_ >> 0x10);
              auVar241._4_4_ = -(uint)(auVar243._4_4_ < auVar199._4_4_);
              auVar241._0_4_ = -(uint)(auVar243._0_4_ < auVar199._0_4_);
              auVar241._8_4_ = -(uint)(auVar243._8_4_ < auVar199._8_4_);
              auVar241._12_4_ = -(uint)(auVar243._12_4_ < auVar199._12_4_);
              auVar175 = minps(auVar199,auVar243);
              auVar137 = minps(auVar152,auVar179);
              auVar111._0_4_ = (float)uVar135;
              auVar111._4_4_ = (float)(ushort)(sVar123 * sVar123);
              auVar111._8_4_ = (float)(ushort)(sVar127 * sVar127);
              auVar111._12_4_ = (float)(ushort)(sVar129 * sVar129);
              auVar193 = packssdw(auVar241,auVar245);
              uVar85 = -(uint)(auVar211._0_4_ < auVar175._0_4_);
              uVar89 = -(uint)(auVar211._4_4_ < auVar175._4_4_);
              uVar82 = -(uint)(auVar211._8_4_ < auVar175._8_4_);
              uVar86 = -(uint)(auVar211._12_4_ < auVar175._12_4_);
              auVar180._4_4_ = uVar89;
              auVar180._0_4_ = uVar85;
              auVar180._8_4_ = uVar82;
              auVar180._12_4_ = uVar86;
              uVar84 = movmskps((int)pauVar71,auVar180);
              pauVar71 = (undefined1 (*) [16])(ulong)uVar84;
              uVar88 = -(uint)(auVar111._0_4_ < auVar137._0_4_);
              uVar92 = -(uint)(auVar111._4_4_ < auVar137._4_4_);
              uVar83 = -(uint)(auVar111._8_4_ < auVar137._8_4_);
              uVar87 = -(uint)(auVar111._12_4_ < auVar137._12_4_);
              auVar246._4_4_ = uVar92;
              auVar246._0_4_ = uVar88;
              auVar246._8_4_ = uVar83;
              auVar246._12_4_ = uVar87;
              if (uVar84 == 0xf) {
                uVar84 = movmskps(0xf,auVar246);
                pauVar71 = (undefined1 (*) [16])(ulong)uVar84;
                if (uVar84 != 0xf) goto LAB_00104030;
                if (iVar73 != iVar69) {
                  auVar14._10_2_ = 0;
                  auVar14._0_10_ = auVar192._0_10_;
                  auVar14._12_2_ = sVar249;
                  auVar24._8_2_ = sVar248;
                  auVar24._0_8_ = auVar192._0_8_;
                  auVar24._10_4_ = auVar14._10_4_;
                  auVar50._6_8_ = 0;
                  auVar50._0_6_ = auVar24._8_6_;
                  local_428._0_4_ = fVar229 + (float)local_428._0_4_;
                  local_428._4_4_ = fVar235 + (float)local_428._4_4_;
                  fStack_420 = fVar237 + fStack_420;
                  fStack_41c = fVar174 + fStack_41c;
                  local_3a8 = CONCAT44(local_3a8._4_4_,(int)local_3a8 + 1);
                  fVar182 = (float)uVar181 * _LC47;
                  fVar185 = (float)(int)CONCAT82(SUB148(auVar50 << 0x40,6),sVar247) * _LC47;
                  fVar188 = (float)auVar24._8_4_ * _LC47;
                  fVar190 = (float)(auVar14._10_4_ >> 0x10) * _LC47;
                  fVar202 = _LC47 * (float)uVar183;
                  fVar203 = _LC47 * (float)uVar184;
                  fVar204 = _LC47 * (float)uVar186;
                  fVar262 = _LC47 * (float)uVar187;
                  bVar51 = true;
                  local_418._4_4_ = fVar253 + (float)local_418._4_4_;
                  local_418._0_4_ = fVar250 + (float)local_418._0_4_;
                  uStack_410._0_4_ = fVar29 + (float)uStack_410;
                  uStack_410._4_4_ = fVar30 + uStack_410._4_4_;
                  local_9a8._0_4_ = fVar182 + (float)local_9a8._0_4_;
                  local_9a8._4_4_ = fVar185 + (float)local_9a8._4_4_;
                  uStack_9a0._0_4_ = fVar188 + (float)uStack_9a0;
                  uStack_9a0._4_4_ = fVar190 + uStack_9a0._4_4_;
                  local_438._0_4_ = fVar250 * fVar202 + (float)local_438._0_4_;
                  local_438._4_4_ = fVar253 * fVar203 + (float)local_438._4_4_;
                  uStack_430._0_4_ = fVar29 * fVar204 + (float)uStack_430;
                  uStack_430._4_4_ = fVar30 * fVar262 + uStack_430._4_4_;
                  local_448._4_4_ = fVar235 * fVar185 + (float)local_448._4_4_;
                  local_448._0_4_ = fVar229 * fVar182 + (float)local_448._0_4_;
                  fStack_440 = fVar237 * fVar188 + fStack_440;
                  fStack_43c = fVar174 * fVar190 + fStack_43c;
                  stack0xfffffffffffff63c = fVar185 * fVar185 + stack0xfffffffffffff63c;
                  local_9c8._0_4_ = fVar182 * fVar182 + (float)local_9c8._0_4_;
                  uStack_9c0 = fVar188 * fVar188 + uStack_9c0;
                  uStack_9bc = fVar190 * fVar190 + uStack_9bc;
                  local_998._0_4_ = fVar202 + (float)local_998._0_4_;
                  local_998._4_4_ = fVar203 + (float)local_998._4_4_;
                  fStack_990 = fVar204 + fStack_990;
                  fStack_98c = fVar262 + fStack_98c;
                  local_9b8._4_4_ = fVar203 * fVar203 + (float)local_9b8._4_4_;
                  local_9b8._0_4_ = fVar202 * fVar202 + (float)local_9b8._0_4_;
                  fStack_9b0 = fVar204 * fVar204 + fStack_9b0;
                  fStack_9ac = fVar262 * fVar262 + fStack_9ac;
                }
              }
              else {
LAB_00104030:
                if (iVar73 != iVar69) {
                  bVar81 = true;
                  auVar10._10_2_ = 0;
                  auVar10._0_10_ = auVar192._0_10_;
                  auVar10._12_2_ = sVar249;
                  auVar23._8_2_ = sVar248;
                  auVar23._0_8_ = auVar192._0_8_;
                  auVar23._10_4_ = auVar10._10_4_;
                  auVar46._6_8_ = 0;
                  auVar46._0_6_ = auVar23._8_6_;
                  bVar51 = true;
                  fVar264 = (float)(uVar63 & uVar88);
                  fVar266 = (float)(uVar63 & uVar92);
                  fVar268 = (float)(uVar63 & uVar83);
                  fVar270 = (float)(uVar63 & uVar87);
                  fVar255 = (float)(uVar63 & uVar85);
                  fVar259 = (float)(uVar63 & uVar89);
                  fVar260 = (float)(uVar63 & uVar82);
                  fVar261 = (float)(uVar63 & uVar86);
                  fVar182 = (float)uVar183 * _LC47;
                  fVar185 = (float)uVar184 * _UNK_00107134;
                  fVar188 = (float)uVar186 * _UNK_00107138;
                  fVar190 = (float)uVar187 * _UNK_0010713c;
                  fVar202 = (float)uVar181 * _LC47;
                  fVar203 = (float)(int)CONCAT82(SUB148(auVar46 << 0x40,6),sVar247) * _UNK_00107134;
                  fVar204 = (float)auVar23._8_4_ * _UNK_00107138;
                  fVar262 = (float)(auVar10._10_4_ >> 0x10) * _UNK_0010713c;
                  local_418._4_4_ = fVar253 * fVar266 + (float)local_418._4_4_;
                  local_418._0_4_ = fVar250 * fVar264 + (float)local_418._0_4_;
                  uStack_410._0_4_ = fVar29 * fVar268 + (float)uStack_410;
                  uStack_410._4_4_ = fVar30 * fVar270 + uStack_410._4_4_;
                  local_438._4_4_ = fVar253 * fVar266 * fVar185 + (float)local_438._4_4_;
                  local_438._0_4_ = fVar250 * fVar264 * fVar182 + (float)local_438._0_4_;
                  uStack_430._0_4_ = fVar29 * fVar268 * fVar188 + (float)uStack_430;
                  uStack_430._4_4_ = fVar30 * fVar270 * fVar190 + uStack_430._4_4_;
                  local_428._4_4_ = fVar235 * fVar259 + (float)local_428._4_4_;
                  local_428._0_4_ = fVar229 * fVar255 + (float)local_428._0_4_;
                  fStack_420 = fVar237 * fVar260 + fStack_420;
                  fStack_41c = fVar174 * fVar261 + fStack_41c;
                  local_448._4_4_ = fVar235 * fVar259 * fVar203 + (float)local_448._4_4_;
                  local_448._0_4_ = fVar229 * fVar255 * fVar202 + (float)local_448._0_4_;
                  fStack_440 = fVar237 * fVar260 * fVar204 + fStack_440;
                  fStack_43c = fVar174 * fVar261 * fVar262 + fStack_43c;
                  local_9c8._0_4_ = fVar202 * fVar255 * fVar202 + (float)local_9c8._0_4_;
                  register0x00001404 = fVar203 * fVar259 * fVar203 + stack0xfffffffffffff63c;
                  uStack_9c0 = fVar204 * fVar260 * fVar204 + uStack_9c0;
                  uStack_9bc = fVar262 * fVar261 * fVar262 + uStack_9bc;
                  local_9a8._4_4_ = fVar259 * fVar203 + (float)local_9a8._4_4_;
                  local_9a8._0_4_ = fVar255 * fVar202 + (float)local_9a8._0_4_;
                  uStack_9a0._0_4_ = fVar260 * fVar204 + (float)uStack_9a0;
                  uStack_9a0._4_4_ = fVar261 * fVar262 + uStack_9a0._4_4_;
                  local_9b8._0_4_ = fVar182 * fVar264 * fVar182 + (float)local_9b8._0_4_;
                  local_9b8._4_4_ = fVar185 * fVar266 * fVar185 + (float)local_9b8._4_4_;
                  fStack_9b0 = fVar188 * fVar268 * fVar188 + fStack_9b0;
                  fStack_9ac = fVar190 * fVar270 * fVar190 + fStack_9ac;
                  local_998._4_4_ = fVar266 * fVar185 + (float)local_998._4_4_;
                  local_998._0_4_ = fVar264 * fVar182 + (float)local_998._0_4_;
                  fStack_990 = fVar268 * fVar188 + fStack_990;
                  fStack_98c = fVar270 * fVar190 + fStack_98c;
                  local_978._4_4_ = (float)local_978._4_4_ + fVar259;
                  local_978._0_4_ = (float)local_978._0_4_ + fVar255;
                  fStack_970 = fStack_970 + fVar260;
                  fStack_96c = fStack_96c + fVar261;
                  local_988._0_4_ = (float)local_988._0_4_ + fVar264;
                  local_988._4_4_ = (float)local_988._4_4_ + fVar266;
                  fStack_980 = fStack_980 + fVar268;
                  fStack_97c = fStack_97c + fVar270;
                }
              }
              auVar101 = packssdw(auVar180,auVar246);
              auVar175 = minps(auVar175,auVar211);
              auVar137 = minps(auVar137,auVar111);
              lVar66 = lVar64 + 0x10;
              local_a58._0_4_ = auVar175._0_4_ + (float)local_a58._0_4_;
              local_a58._4_4_ = auVar175._4_4_ + (float)local_a58._4_4_;
              fStack_a50 = auVar175._8_4_ + fStack_a50;
              fStack_a4c = auVar175._12_4_ + fStack_a4c;
              fVar250 = auVar251._0_4_ + auVar137._0_4_;
              fVar253 = auVar251._4_4_ + auVar137._4_4_;
              auVar252._0_8_ = CONCAT44(fVar253,fVar250);
              auVar252._8_4_ = auVar251._8_4_ + auVar137._8_4_;
              auVar252._12_4_ = auVar251._12_4_ + auVar137._12_4_;
              *(undefined1 (*) [16])((long)*(undefined1 (*) [16])local_348 + lVar64) =
                   auVar101 & auVar192 | ~auVar101 & (auVar193 & __LC45 | ~auVar193 & __LC44);
              lVar64 = lVar66;
              auVar251 = auVar252;
            } while (lVar66 != 0x100);
            auVar258._8_4_ = auVar252._8_4_;
            auVar258._0_8_ = auVar252._0_8_;
            auVar258._12_4_ = auVar252._12_4_;
            if (bVar81) {
              local_3b8 = _local_988;
              local_3c8 = _local_978;
            }
            if (bVar51) {
              _local_3d8 = _local_998;
              local_3e8 = _local_9a8;
              local_3f8 = _local_9b8;
              local_408 = _local_9c8;
            }
            auVar153._4_4_ = -(uint)(fVar253 < (float)local_938._4_4_);
            auVar153._0_4_ = -(uint)(fVar250 < (float)local_938._0_4_);
            auVar153._8_4_ = -(uint)(auVar252._8_4_ < fStack_930);
            auVar153._12_4_ = -(uint)(auVar252._12_4_ < fStack_92c);
            auVar200._4_4_ = -(uint)((float)local_a58._4_4_ < (float)local_928._4_4_);
            auVar200._0_4_ = -(uint)((float)local_a58._0_4_ < (float)local_928._0_4_);
            auVar200._8_4_ = -(uint)(fStack_a50 < fStack_920);
            auVar200._12_4_ = -(uint)(fStack_a4c < fStack_91c);
            auVar146 = packssdw(auVar200,auVar153);
            if ((((((((((((((((auVar146 >> 7 & (undefined1  [16])0x1) != (undefined1  [16])0x0 ||
                             (auVar146 >> 0xf & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                            (auVar146 >> 0x17 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                           (auVar146 >> 0x1f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                          (auVar146 >> 0x27 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                         (auVar146 >> 0x2f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                        (auVar146 >> 0x37 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                       (auVar146 >> 0x3f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                      (auVar146 >> 0x47 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                     (auVar146 >> 0x4f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                    (auVar146 >> 0x57 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                   (auVar146 >> 0x5f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                  (auVar146 >> 0x67 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                 (auVar146 >> 0x6f & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                (auVar146 >> 0x77 & (undefined1  [16])0x1) != (undefined1  [16])0x0) ||
                auVar146[0xf] < '\0') {
              _local_928 = minps(_local_a58,_local_928);
              _local_938 = minps(auVar258,_local_938);
              local_818 = ~auVar146 & local_818;
              pauVar67 = &local_548;
              pauVar71 = (undefined1 (*) [16])local_348;
              do {
                auVar99 = *pauVar71;
                pauVar71 = pauVar71 + 1;
                *pauVar67 = auVar99 & auVar146 | ~auVar146 & *pauVar67;
                pauVar67 = pauVar67 + 1;
              } while ((undefined1 (*) [16])local_248 != pauVar71);
              local_808 = local_7a8 & auVar146 | ~auVar146 & local_808;
              local_7f8 = local_798 & auVar146 | ~auVar146 & local_7f8;
            }
            if (iVar73 != iVar69) {
              EndpointRefiner<1>::GetRefinedEndpoints(local_8d8,local_788);
              auVar254 = (undefined1  [16])0x0;
              auVar146 = minps((undefined1  [16])local_788,_local_a48);
              auVar99 = minps(local_778,_local_a48);
              auVar146 = maxps(auVar146,(undefined1  [16])0x0);
              auVar99 = maxps(auVar99,(undefined1  [16])0x0);
              auVar112._0_4_ = (int)auVar146._0_4_;
              auVar112._4_4_ = (int)auVar146._4_4_;
              auVar112._8_4_ = (int)auVar146._8_4_;
              auVar112._12_4_ = (int)auVar146._12_4_;
              auVar154._0_4_ = (int)auVar99._0_4_;
              auVar154._4_4_ = (int)auVar99._4_4_;
              auVar154._8_4_ = (int)auVar99._8_4_;
              auVar154._12_4_ = (int)auVar99._12_4_;
              local_7a8 = packssdw(auVar112,auVar154);
              auVar99 = minps(local_758,_local_a48);
              auVar146 = minps(local_768,_local_a48);
              auVar99 = maxps(auVar99,(undefined1  [16])0x0);
              auVar146 = maxps(auVar146,(undefined1  [16])0x0);
              auVar155._0_4_ = (int)auVar99._0_4_;
              auVar155._4_4_ = (int)auVar99._4_4_;
              auVar155._8_4_ = (int)auVar99._8_4_;
              auVar155._12_4_ = (int)auVar99._12_4_;
              auVar113._0_4_ = (int)auVar146._0_4_;
              auVar113._4_4_ = (int)auVar146._4_4_;
              auVar113._8_4_ = (int)auVar146._8_4_;
              auVar113._12_4_ = (int)auVar146._12_4_;
              local_798 = packssdw(auVar113,auVar155);
              pauVar71 = extraout_RDX_00;
            }
            iVar69 = iVar69 + 1;
          } while (iVar69 != param_8);
          iVar78 = iVar78 + 1;
        } while (iVar62 != iVar78);
      }
      psVar80 = psVar80 + 8;
    } while ((short *)((long)local_7c8 +
                      (long)(int)(((ushort)((ushort)(SUB161(auVar195 >> 7,0) & 1) |
                                            (ushort)(SUB161(auVar195 >> 0xf,0) & 1) << 1 |
                                            (ushort)(SUB161(auVar195 >> 0x17,0) & 1) << 2 |
                                            (ushort)(SUB161(auVar195 >> 0x1f,0) & 1) << 3 |
                                            (ushort)(SUB161(auVar195 >> 0x27,0) & 1) << 4 |
                                            (ushort)(SUB161(auVar195 >> 0x2f,0) & 1) << 5 |
                                            (ushort)(SUB161(auVar195 >> 0x37,0) & 1) << 6 |
                                            (ushort)(SUB161(auVar195 >> 0x3f,0) & 1) << 7 |
                                            (ushort)(SUB161(auVar195 >> 0x47,0) & 1) << 8 |
                                            (ushort)(SUB161(auVar195 >> 0x4f,0) & 1) << 9 |
                                            (ushort)(SUB161(auVar195 >> 0x57,0) & 1) << 10 |
                                            (ushort)(SUB161(auVar195 >> 0x5f,0) & 1) << 0xb |
                                            (ushort)(SUB161(auVar195 >> 0x67,0) & 1) << 0xc |
                                            (ushort)(SUB161(auVar195 >> 0x6f,0) & 1) << 0xd |
                                            (ushort)((byte)(auVar195._14_2_ >> 7) & 1) << 0xe |
                                           auVar195._14_2_ & 0x8000) != 0xffff) + 1) * 8 * 2) !=
             psVar80);
    pauVar65 = pauVar65 + 1;
    if (pauVar70 == pauVar65) {
      lVar64 = 0;
      local_8d0 = param_4;
      do {
        uVar63 = (uint)*(ushort *)(local_808 + lVar64);
        uVar84 = (uint)*(ushort *)(local_7f8 + lVar64);
        sVar134 = *(short *)(local_818 + lVar64);
        if (param_6) {
          uVar63 = *(ushort *)(local_808 + lVar64) - 0x7f;
          uVar84 = *(ushort *)(local_7f8 + lVar64) - 0x7f;
        }
        uVar85 = uVar63;
        uVar88 = uVar84;
        if ((sVar134 != 0) == (int)uVar84 < (int)uVar63) {
          uVar85 = uVar84;
          uVar88 = uVar63;
        }
        iVar62 = 2;
        *local_8d0 = (uchar)uVar88;
        local_8d0[1] = (uchar)uVar85;
        uVar85 = (-(uint)(sVar134 == 0) & 0xfffffffe) + 7;
        uVar76 = 0;
        pEVar77 = local_8d8 + -0x100;
        iVar68 = 0;
        do {
          while( true ) {
            pEVar72 = pEVar77;
            uVar95 = *(ushort *)pEVar72;
            uVar88 = (uint)uVar95;
            if ((int)(uint)uVar95 <= (int)uVar85) {
              uVar88 = (uint)uVar95;
              if ((sVar134 != 0) != (int)uVar84 < (int)uVar63) {
                uVar88 = uVar85 - uVar95;
              }
            }
            if (uVar88 != 0) {
              if (uVar88 == uVar85) {
                uVar76 = (ulong)((uint)uVar76 | 1 << ((byte)iVar68 & 0x1f));
              }
              else {
                if ((int)uVar88 < (int)uVar85) {
                  uVar88 = uVar88 + 1;
                }
                uVar76 = (ulong)((uint)uVar76 | uVar88 << ((byte)iVar68 & 0x1f));
              }
            }
            if (7 < iVar68 + 3) break;
            pEVar77 = pEVar72 + 0x10;
            iVar68 = iVar68 + 3;
            if (pEVar72 + 0x10 == local_8d8) goto LAB_001047d0;
          }
          lVar66 = (long)iVar62;
          iVar68 = iVar68 + -5;
          iVar62 = iVar62 + 1;
          local_8d0[lVar66] = (uchar)uVar76;
          uVar76 = uVar76 >> 8 & 0xff;
          pEVar77 = pEVar72 + 0x10;
        } while (pEVar72 + 0x10 != local_8d8);
LAB_001047d0:
        local_8d8 = pEVar72 + 0x12;
        lVar64 = lVar64 + 2;
        local_8d0 = local_8d0 + param_5;
        if ((EndpointRefiner<1> *)local_438 == local_8d8) {
          MXCSR = uVar61;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      } while( true );
    }
    _local_9a8 = *pauVar65;
  } while( true );
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
  auVar36._0_4_ = _LC13 & uVar18;
  auVar36._4_4_ = _LC13 & uVar20;
  auVar36._8_4_ = _LC13 & uVar22;
  auVar36._12_4_ = _LC13 & uVar24;
  auVar25._0_4_ = ~uVar18 & (uint)fVar26;
  auVar25._4_4_ = ~uVar20 & (uint)fVar34;
  auVar25._8_4_ = ~uVar22 & (uint)fVar35;
  auVar25._12_4_ = ~uVar24 & (uint)fVar27;
  auVar30._4_4_ = uVar19 & _LC13;
  auVar30._0_4_ = uVar17 & _LC13;
  auVar30._8_4_ = uVar21 & _LC13;
  auVar30._12_4_ = uVar23 & _LC13;
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
  local_f8[0] = _LC13;
  local_f8[1] = _LC13;
  local_f8[2] = _LC13;
  local_f8[3] = _LC13;
  local_f8[4] = _LC13;
  local_f8[5] = _LC13;
  local_f8[6] = _LC13;
  local_f8[7] = _LC13;
  local_f8[8] = _LC13;
  local_f8[9] = _LC13;
  local_f8[10] = _LC13;
  local_f8[0xb] = _LC13;
  local_f8[0xc] = _LC13;
  local_f8[0xd] = _LC13;
  local_f8[0xe] = _LC13;
  local_f8[0xf] = _LC13;
  local_f8[0x10] = _LC13;
  local_f8[0x11] = _LC13;
  local_f8[0x12] = _LC13;
  local_f8[0x13] = _LC13;
  local_f8[0x14] = _LC13;
  local_f8[0x15] = _LC13;
  local_f8[0x16] = _LC13;
  local_f8[0x17] = _LC13;
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
    auVar34._0_4_ = uVar24 & (uint)_LC13;
    auVar34._4_4_ = uVar26 & (uint)_LC13;
    auVar34._8_4_ = uVar28 & (uint)_LC13;
    auVar34._12_4_ = uVar30 & (uint)_LC13;
    auVar41._0_4_ = ~uVar24 & (uint)auVar31._0_4_;
    auVar41._4_4_ = ~uVar26 & (uint)auVar31._4_4_;
    auVar41._8_4_ = ~uVar28 & (uint)auVar31._8_4_;
    auVar41._12_4_ = ~uVar30 & (uint)auVar31._12_4_;
    auVar31._4_4_ = uVar25 & (uint)_LC13;
    auVar31._0_4_ = uVar23 & (uint)_LC13;
    auVar31._8_4_ = uVar27 & (uint)_LC13;
    auVar31._12_4_ = uVar29 & (uint)_LC13;
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
  auVar49._0_4_ = uVar23 & (uint)_LC13;
  auVar49._4_4_ = uVar25 & (uint)_LC13;
  auVar49._8_4_ = uVar27 & (uint)_LC13;
  auVar49._12_4_ = uVar29 & (uint)_LC13;
  auVar43._0_4_ = ~uVar24 & (uint)auVar34._0_4_;
  auVar43._4_4_ = ~uVar26 & (uint)auVar34._4_4_;
  auVar43._8_4_ = ~uVar28 & (uint)auVar34._8_4_;
  auVar43._12_4_ = ~uVar30 & (uint)auVar34._12_4_;
  auVar4._4_4_ = (uint)_LC13 & uVar26;
  auVar4._0_4_ = (uint)_LC13 & uVar24;
  auVar4._8_4_ = (uint)_LC13 & uVar28;
  auVar4._12_4_ = (uint)_LC13 & uVar30;
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
  auVar28._0_4_ = uVar4 & _LC13;
  auVar28._4_4_ = uVar6 & _LC13;
  auVar28._8_4_ = uVar8 & _LC13;
  auVar28._12_4_ = uVar10 & _LC13;
  auVar13._0_4_ = ~uVar5 & (uint)(fVar22 + *(float *)(this + 0x110));
  auVar13._4_4_ = ~uVar7 & (uint)(fVar22 + *(float *)(this + 0x114));
  auVar13._8_4_ = ~uVar9 & (uint)(fVar22 + *(float *)(this + 0x118));
  auVar13._12_4_ = ~uVar11 & (uint)(fVar22 + *(float *)(this + 0x11c));
  fVar22 = *(float *)(this + 0xf0);
  fVar23 = *(float *)(this + 0xf4);
  fVar24 = *(float *)(this + 0xf8);
  fVar25 = *(float *)(this + 0xfc);
  auVar18 = auVar18 | auVar28;
  auVar29._4_4_ = uVar7 & _LC13;
  auVar29._0_4_ = uVar5 & _LC13;
  auVar29._8_4_ = uVar9 & _LC13;
  auVar29._12_4_ = uVar11 & _LC13;
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
  auVar38._0_4_ = uVar4 & _LC13;
  auVar38._4_4_ = uVar6 & _LC13;
  auVar38._8_4_ = uVar8 & _LC13;
  auVar38._12_4_ = uVar10 & _LC13;
  auVar40._0_4_ = ~uVar4 & (uint)fVar17;
  auVar40._4_4_ = ~uVar6 & (uint)fVar19;
  auVar40._8_4_ = ~uVar8 & (uint)fVar20;
  auVar40._12_4_ = ~uVar10 & (uint)fVar21;
  uVar5 = -(uint)(fVar12 == 0.0);
  uVar7 = -(uint)(fVar14 == 0.0);
  uVar9 = -(uint)(fVar15 == 0.0);
  uVar11 = -(uint)(fVar16 == 0.0);
  auVar34._0_4_ = _LC13 & uVar5;
  auVar34._4_4_ = _LC13 & uVar7;
  auVar34._8_4_ = _LC13 & uVar9;
  auVar34._12_4_ = _LC13 & uVar11;
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
  auVar28._0_4_ = uVar2 & _LC13;
  auVar28._4_4_ = uVar4 & _LC13;
  auVar28._8_4_ = uVar6 & _LC13;
  auVar28._12_4_ = uVar8 & _LC13;
  auVar34._4_4_ = uVar3 & _LC13;
  auVar34._0_4_ = uVar1 & _LC13;
  auVar34._8_4_ = uVar5 & _LC13;
  auVar34._12_4_ = uVar7 & _LC13;
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
  auVar45._0_4_ = uVar1 & _LC13;
  auVar45._4_4_ = uVar3 & _LC13;
  auVar45._8_4_ = uVar5 & _LC13;
  auVar45._12_4_ = uVar7 & _LC13;
  uVar2 = -(uint)(fVar9 == 0.0);
  uVar4 = -(uint)(fVar11 == 0.0);
  uVar6 = -(uint)(fVar12 == 0.0);
  uVar8 = -(uint)(fVar13 == 0.0);
  auVar24._0_4_ = _LC13 & uVar2;
  auVar24._4_4_ = _LC13 & uVar4;
  auVar24._8_4_ = _LC13 & uVar6;
  auVar24._12_4_ = _LC13 & uVar8;
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




/* JPH::SoftBodyShape::GetLocalBounds() const */

void JPH::SoftBodyShape::GetLocalBounds(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined8 *in_RDI;
  
  lVar1 = *(long *)(in_RSI + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 0x178);
  uVar3 = *(undefined8 *)(lVar1 + 0x180);
  uVar4 = *(undefined8 *)(lVar1 + 0x188);
  *in_RDI = *(undefined8 *)(lVar1 + 0x170);
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar3;
  in_RDI[3] = uVar4;
  return;
}



/* JPH::SoftBodyShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::SoftBodyShape::CollideSoftBodyVertices(void)

{
  return;
}



/* JPH::SoftBodyShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JPH::SoftBodyShape::Draw(long param_1,long *param_2,float *param_3,undefined4 param_4)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  float fVar4;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint *puVar29;
  uint *puVar30;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + 0x100);
  puVar29 = *(uint **)(lVar3 + 0x30);
  puVar30 = puVar29 + *(long *)(lVar3 + 0x20) * 4;
  for (; puVar30 != puVar29; puVar29 = puVar29 + 4) {
    lVar3 = *(long *)(lVar2 + 0x118);
    fVar4 = param_3[4];
    fVar5 = param_3[5];
    fVar6 = param_3[6];
    fVar7 = param_3[7];
    fVar8 = *param_3;
    fVar9 = param_3[1];
    fVar10 = param_3[2];
    fVar11 = param_3[3];
    fVar12 = param_3[8];
    fVar13 = param_3[9];
    fVar14 = param_3[10];
    fVar15 = param_3[0xb];
    fVar16 = param_3[0xc];
    fVar17 = param_3[0xd];
    fVar18 = param_3[0xe];
    fVar19 = param_3[0xf];
    pfVar1 = (float *)(lVar3 + 0x10 + (ulong)*puVar29 * 0x50);
    fVar20 = *pfVar1;
    fVar21 = pfVar1[1];
    fVar22 = pfVar1[2];
    pfVar1 = (float *)(lVar3 + 0x10 + (ulong)puVar29[1] * 0x50);
    fVar23 = *pfVar1;
    fVar24 = pfVar1[1];
    fVar25 = pfVar1[2];
    pfVar1 = (float *)(lVar3 + 0x10 + (ulong)puVar29[2] * 0x50);
    fVar26 = *pfVar1;
    fVar27 = pfVar1[1];
    fVar28 = pfVar1[2];
    (**(code **)(*param_2 + 0x18))
              (CONCAT44(fVar22 * fVar13 + fVar20 * fVar9 + fVar21 * fVar5 + fVar17,
                        fVar22 * fVar12 + fVar20 * fVar8 + fVar21 * fVar4 + fVar16),
               CONCAT44(fVar22 * fVar15 + fVar20 * fVar11 + fVar21 * fVar7 + fVar19,
                        fVar22 * fVar14 + fVar20 * fVar10 + fVar21 * fVar6 + fVar18),
               CONCAT44(fVar25 * fVar13 + fVar23 * fVar9 + fVar24 * fVar5 + fVar17,
                        fVar25 * fVar12 + fVar23 * fVar8 + fVar24 * fVar4 + fVar16),
               CONCAT44(fVar25 * fVar15 + fVar23 * fVar11 + fVar24 * fVar7 + fVar19,
                        fVar25 * fVar14 + fVar23 * fVar10 + fVar24 * fVar6 + fVar18),
               CONCAT44(fVar28 * fVar13 + fVar27 * fVar5 + fVar9 * fVar26 + fVar17,
                        fVar28 * fVar12 + fVar27 * fVar4 + fVar8 * fVar26 + fVar16),
               CONCAT44(fVar28 * fVar15 + fVar27 * fVar7 + fVar11 * fVar26 + fVar19,
                        fVar28 * fVar14 + fVar27 * fVar6 + fVar10 * fVar26 + fVar18),param_2,param_4
               ,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SoftBodyShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::SoftBodyShape::GetTrianglesStart
               (undefined8 param_1,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6,undefined8 param_7,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  float fStack_a4;
  float local_98 [4];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar10 = (float)((ulong)param_4 >> 0x20);
  fVar9 = (float)param_4;
  fVar5 = (float)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = ZEXT416(param_6) << 0x40;
  local_88 = ZEXT416((uint)((ulong)param_5 >> 0x20)) << 0x20;
  fVar6 = (float)((ulong)param_3 >> 0x20);
  local_68 = __LC1;
  uStack_60 = CONCAT44(_LC2,_UNK_001019d8);
  fVar12 = fVar6 + fVar6;
  fVar8 = fVar5 + fVar5;
  local_98[0] = (float)param_5;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  fVar13 = fVar9 * (fVar9 + fVar9);
  lVar7 = 0;
  fVar11 = fVar10 * (fVar9 + fVar9);
  local_a8 = (float)param_1;
  fStack_a4 = (float)((ulong)param_1 >> 0x20);
  do {
    fVar1 = *(float *)((long)local_98 + lVar7);
    fVar2 = *(float *)((long)local_98 + lVar7 + 4);
    fVar3 = *(float *)((long)local_98 + lVar7 + 8);
    fVar4 = *(float *)(local_88 + lVar7 + -4);
    *(float *)((long)&local_58 + lVar7) =
         fVar4 * local_a8 +
         fVar1 * ((_LC2 - fVar6 * fVar12) - fVar13) + fVar2 * (fVar6 * fVar8 - fVar11) +
         fVar3 * (fVar9 * fVar8 + fVar12 * fVar10);
    *(float *)((long)&local_58 + lVar7 + 4) =
         fVar4 * fStack_a4 +
         fVar1 * (fVar6 * fVar8 + fVar11) + fVar2 * ((_LC2 - fVar13) - fVar5 * fVar8) +
         fVar3 * (fVar9 * fVar12 - fVar8 * fVar10);
    *(float *)((long)&uStack_50 + lVar7) =
         fVar4 * param_2_00 +
         fVar1 * (fVar9 * fVar8 - fVar12 * fVar10) + fVar2 * (fVar8 * fVar10 + fVar9 * fVar12) +
         fVar3 * ((_LC2 - fVar5 * fVar8) - fVar6 * fVar12);
    *(float *)((long)&uStack_50 + lVar7 + 4) = fVar4 * 1.0 + fVar1 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0
    ;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  *(undefined4 *)(param_2 + 8) = 0;
  *param_2 = local_58;
  param_2[1] = uStack_50;
  param_2[4] = local_38;
  param_2[5] = uStack_30;
  param_2[2] = local_48;
  param_2[3] = uStack_40;
  param_2[6] = local_28;
  param_2[7] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}



/* JPH::SoftBodyShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

int __thiscall
JPH::SoftBodyShape::GetTrianglesNext
          (SoftBodyShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  long lVar4;
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
  float fVar23;
  float fVar24;
  float fVar25;
  Float3 *pFVar26;
  Float3 *pFVar27;
  uint *puVar28;
  PhysicsMaterial **ppPVar29;
  int iVar30;
  
  iVar2 = *(int *)(param_1 + 0x40);
  lVar3 = *(long *)(*(long *)(this + 0x20) + 0x100);
  iVar30 = *(int *)(lVar3 + 0x20) - iVar2;
  if (param_2 < iVar30) {
    iVar30 = param_2;
  }
  if (0 < iVar30) {
    lVar4 = *(long *)(*(long *)(this + 0x20) + 0x118);
    puVar28 = (uint *)((long)iVar2 * 0x10 + *(long *)(lVar3 + 0x30));
    pFVar26 = param_3;
    do {
      fVar5 = *(float *)param_1;
      fVar6 = *(float *)(param_1 + 4);
      fVar7 = *(float *)(param_1 + 8);
      pFVar27 = pFVar26 + 0x24;
      fVar8 = *(float *)(param_1 + 0x10);
      fVar9 = *(float *)(param_1 + 0x14);
      fVar10 = *(float *)(param_1 + 0x18);
      fVar11 = *(float *)(param_1 + 0x20);
      fVar12 = *(float *)(param_1 + 0x24);
      fVar13 = *(float *)(param_1 + 0x28);
      fVar14 = *(float *)(param_1 + 0x30);
      fVar15 = *(float *)(param_1 + 0x34);
      fVar16 = *(float *)(param_1 + 0x38);
      pfVar1 = (float *)(lVar4 + 0x10 + (ulong)*puVar28 * 0x50);
      fVar17 = *pfVar1;
      fVar18 = pfVar1[1];
      fVar19 = pfVar1[2];
      pfVar1 = (float *)(lVar4 + 0x10 + (ulong)puVar28[1] * 0x50);
      fVar20 = *pfVar1;
      fVar21 = pfVar1[1];
      fVar22 = pfVar1[2];
      pfVar1 = (float *)(lVar4 + 0x10 + (ulong)puVar28[2] * 0x50);
      fVar23 = *pfVar1;
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      *(float *)(pFVar26 + 0x10) = fVar20 * fVar6 + fVar21 * fVar9 + fVar22 * fVar12 + fVar15;
      *(float *)(pFVar26 + 0x14) = fVar20 * fVar7 + fVar21 * fVar10 + fVar22 * fVar13 + fVar16;
      *(float *)(pFVar26 + 0x18) = fVar23 * fVar5 + fVar24 * fVar8 + fVar25 * fVar11 + fVar14;
      *(float *)(pFVar26 + 0x1c) = fVar23 * fVar6 + fVar24 * fVar9 + fVar25 * fVar12 + fVar15;
      *(float *)(pFVar26 + 0x20) = fVar23 * fVar7 + fVar24 * fVar10 + fVar25 * fVar13 + fVar16;
      *(float *)pFVar26 = fVar17 * fVar5 + fVar8 * fVar18 + fVar19 * fVar11 + fVar14;
      *(float *)(pFVar26 + 4) = fVar17 * fVar6 + fVar9 * fVar18 + fVar19 * fVar12 + fVar15;
      *(float *)(pFVar26 + 8) = fVar17 * fVar7 + fVar10 * fVar18 + fVar19 * fVar13 + fVar16;
      *(float *)(pFVar26 + 0xc) = fVar20 * fVar5 + fVar21 * fVar8 + fVar22 * fVar11 + fVar14;
      ppPVar29 = param_4;
      if (param_4 != (PhysicsMaterial **)0x0) {
        ppPVar29 = param_4 + 1;
        *param_4 = *(PhysicsMaterial **)(*(long *)(lVar3 + 0xd8) + (ulong)puVar28[3] * 8);
      }
      puVar28 = puVar28 + 4;
      pFVar26 = pFVar27;
      param_4 = ppPVar29;
    } while (pFVar27 != param_3 + (long)iVar30 * 0x24);
  }
  *(int *)(param_1 + 0x40) = iVar2 + iVar30;
  return iVar30;
}



/* JPH::SoftBodyShape::GetStats() const */

undefined1  [16] __thiscall JPH::SoftBodyShape::GetStats(SoftBodyShape *this)

{
  undefined1 auVar1 [16];
  
  auVar1._8_4_ = *(undefined4 *)(*(long *)(*(long *)(this + 0x20) + 0x100) + 0x20);
  auVar1._0_8_ = 0x28;
  auVar1._12_4_ = 0;
  return auVar1;
}



/* JPH::SoftBodyShape::GetMaterial(JPH::SubShapeID const&) const */

undefined8 __thiscall JPH::SoftBodyShape::GetMaterial(SoftBodyShape *this,SubShapeID *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *(long *)(*(long *)(this + 0x20) + 0x100);
  uVar3 = *(int *)(lVar1 + 0x20) - 1;
  if (uVar3 != 0) {
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar3 = (int)(1L << ((char)iVar2 + 1U & 0x3f)) - 1;
  }
  return *(undefined8 *)
          (*(long *)(lVar1 + 0xd8) +
          (ulong)*(uint *)((ulong)(uVar3 & *(uint *)param_1) * 0x10 + *(long *)(lVar1 + 0x30) + 0xc)
          * 8);
}



/* JPH::SoftBodyShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::SoftBodyShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,float param_4,
               long param_1,uint *param_6,float *param_7,uint *param_8)

{
  uint *puVar1;
  float *pfVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
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
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x100);
  uVar23 = *(int *)(lVar4 + 0x20) - 1;
  if (uVar23 != 0) {
    iVar6 = 0x1f;
    if (uVar23 != 0) {
      for (; uVar23 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar23 = (int)(1L << ((char)iVar6 + 1U & 0x3f)) - 1;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x118);
  puVar24 = (uint *)((ulong)(uVar23 & *param_6) * 0x10 + *(long *)(lVar4 + 0x30));
  fVar7 = *param_7;
  fVar8 = param_7[1];
  fVar9 = param_7[2];
  fVar10 = param_7[3];
  fVar11 = param_7[4];
  fVar12 = param_7[5];
  fVar13 = param_7[6];
  fVar14 = param_7[7];
  puVar1 = puVar24 + 3;
  fVar15 = param_7[8];
  fVar16 = param_7[9];
  fVar17 = param_7[10];
  fVar18 = param_7[0xb];
  fVar19 = param_7[0xc];
  fVar20 = param_7[0xd];
  fVar21 = param_7[0xe];
  fVar22 = param_7[0xf];
  uVar23 = *param_8;
  do {
    uVar3 = *puVar24;
    puVar24 = puVar24 + 1;
    pfVar2 = (float *)(lVar5 + 0x10 + (ulong)uVar3 * 0x50);
    fVar26 = *pfVar2;
    fVar27 = pfVar2[1];
    fVar28 = pfVar2[2];
    uVar25 = (ulong)uVar23;
    uVar23 = uVar23 + 1;
    *param_8 = uVar23;
    fVar26 = fVar26 * (float)param_3;
    fVar27 = fVar27 * (float)((ulong)param_3 >> 0x20);
    fVar28 = fVar28 * param_4;
    pfVar2 = (float *)(param_8 + uVar25 * 4 + 4);
    *pfVar2 = fVar28 * fVar15 + fVar26 * fVar7 + fVar27 * fVar11 + fVar19;
    pfVar2[1] = fVar28 * fVar16 + fVar26 * fVar8 + fVar27 * fVar12 + fVar20;
    pfVar2[2] = fVar28 * fVar17 + fVar26 * fVar9 + fVar27 * fVar13 + fVar21;
    pfVar2[3] = fVar28 * fVar18 + fVar26 * fVar10 + fVar27 * fVar14 + fVar22;
  } while (puVar24 != puVar1);
  return;
}



/* JPH::SoftBodyShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined8 __thiscall
JPH::SoftBodyShape::CastRay
          (SoftBodyShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  float fVar12;
  float fVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  uint uVar32;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  
  uVar14 = _LC7;
  fVar13 = _LC4;
  fVar12 = _LC2;
  lVar2 = *(long *)(*(long *)(this + 0x20) + 0x100);
  lVar3 = *(long *)(lVar2 + 0x20);
  uVar16 = (int)lVar3 - 1;
  if (uVar16 != 0) {
    iVar5 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    uVar16 = iVar5 + 1;
  }
  puVar4 = *(uint **)(lVar2 + 0x30);
  if (puVar4 + lVar3 * 4 != puVar4) {
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    auVar11 = *(undefined1 (*) [12])(param_1 + 0x10);
    fVar7 = *(float *)param_1;
    fVar8 = *(float *)(param_1 + 4);
    fVar9 = *(float *)(param_1 + 8);
    lVar17 = 0xffffffff;
    lVar2 = *(long *)(*(long *)(this + 0x20) + 0x118);
    local_38 = (float)uVar10;
    fStack_34 = (float)((ulong)uVar10 >> 0x20);
    fStack_30 = (float)*(undefined8 *)(param_1 + 0x18);
    puVar15 = puVar4;
    do {
      local_28 = auVar11._4_4_;
      fStack_24 = auVar11._8_4_;
      pfVar1 = (float *)(lVar2 + 0x10 + (ulong)*puVar15 * 0x50);
      fVar26 = *pfVar1;
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      pfVar1 = (float *)(lVar2 + 0x10 + (ulong)puVar15[1] * 0x50);
      fVar39 = *pfVar1 - fVar26;
      fVar40 = pfVar1[1] - fVar29;
      fVar41 = pfVar1[2] - fVar30;
      pfVar1 = (float *)(lVar2 + 0x10 + (ulong)puVar15[2] * 0x50);
      fVar23 = *pfVar1 - fVar26;
      fVar24 = pfVar1[1] - fVar29;
      fVar25 = pfVar1[2] - fVar30;
      fVar19 = fVar24 * local_38 - local_28 * fVar23;
      fVar21 = fVar25 * fStack_34 - fStack_24 * fVar24;
      fVar22 = fVar23 * fStack_30 - auVar11._0_4_ * fVar25;
      fVar31 = fVar41 * fVar19 + fVar40 * fVar22 + fVar39 * fVar21 + 0.0;
      auVar18._0_4_ = 0.0 - fVar31;
      auVar28._4_4_ = fVar31;
      auVar28._0_4_ = fVar31;
      auVar28._8_4_ = fVar31;
      auVar28._12_4_ = fVar31;
      auVar18._4_4_ = auVar18._0_4_;
      auVar18._8_4_ = auVar18._0_4_;
      auVar18._12_4_ = auVar18._0_4_;
      auVar18 = maxps(auVar18,auVar28);
      bVar6 = auVar18._0_4_ < fVar13;
      uVar32 = (int)-(uint)bVar6 >> 0x1f;
      uVar34 = (int)-(uint)(auVar18._4_4_ < fVar13) >> 0x1f;
      uVar35 = (int)-(uint)(auVar18._8_4_ < fVar13) >> 0x1f;
      uVar36 = (int)-(uint)(auVar18._12_4_ < fVar13) >> 0x1f;
      auVar33._0_4_ = uVar32 & (uint)fVar12;
      auVar33._4_4_ = uVar34 & (uint)fVar12;
      auVar33._8_4_ = uVar35 & (uint)fVar12;
      auVar33._12_4_ = uVar36 & (uint)fVar12;
      auVar38._0_4_ = ~uVar32 & (uint)fVar31;
      auVar38._4_4_ = ~uVar34 & (uint)fVar31;
      auVar38._8_4_ = ~uVar35 & (uint)fVar31;
      auVar38._12_4_ = ~uVar36 & (uint)fVar31;
      fVar26 = fVar7 - fVar26;
      fVar29 = fVar8 - fVar29;
      fVar30 = fVar9 - fVar30;
      auVar33 = auVar33 | auVar38;
      fVar31 = fVar40 * fVar26 - fVar29 * fVar39;
      fVar40 = fVar41 * fVar29 - fVar30 * fVar40;
      fVar39 = fVar39 * fVar30 - fVar26 * fVar41;
      auVar37._0_4_ = fVar30 * fVar19 + fVar29 * fVar22 + fVar21 * fVar26 + 0.0;
      auVar37._4_4_ = auVar37._0_4_;
      auVar37._8_4_ = auVar37._0_4_;
      auVar37._12_4_ = auVar37._0_4_;
      auVar38 = divps(auVar37,auVar33);
      auVar27._0_4_ = fStack_34 * fVar39 + local_38 * fVar40 + 0.0 + fStack_30 * fVar31;
      auVar27._4_4_ = auVar27._0_4_;
      auVar27._8_4_ = auVar27._0_4_;
      auVar27._12_4_ = auVar27._0_4_;
      auVar28 = divps(auVar27,auVar33);
      auVar20._0_4_ = fVar25 * fVar31 + fVar24 * fVar39 + fVar40 * fVar23 + 0.0;
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_4_ = auVar20._0_4_;
      auVar20._12_4_ = auVar20._0_4_;
      auVar18 = divps(auVar20,auVar33);
      uVar32 = (int)-(uint)(((auVar28._0_4_ < 0.0 || fVar12 < auVar38._0_4_ + auVar28._0_4_) ||
                            (auVar38._0_4_ < 0.0 || bVar6)) || auVar18._0_4_ < 0.0) >> 0x1f;
      fVar26 = (float)(uVar32 & uVar14 | ~uVar32 & (uint)auVar18._0_4_);
      if (fVar26 < *(float *)(param_3 + 4)) {
        *(float *)(param_3 + 4) = fVar26;
        lVar17 = (long)puVar15 - (long)puVar4 >> 4;
      }
      puVar15 = puVar15 + 4;
    } while (puVar15 != puVar4 + lVar3 * 4);
    if ((int)lVar17 != -1) {
      *(uint *)(param_3 + 8) =
           ~((int)(1L << ((byte)uVar16 & 0x3f)) + -1 << ((byte)*(undefined4 *)(param_2 + 4) & 0x1f))
           & *(uint *)param_2 | (int)lVar17 << ((byte)*(undefined4 *)(param_2 + 4) & 0x1f);
      return 1;
    }
  }
  return 0;
}



/* JPH::SoftBodyShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::SoftBodyShape::CollidePoint(void)

{
  JPH::Shape::sCollidePointUsingRayCast();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SoftBodyShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::SoftBodyShape::GetSurfaceNormal(long param_1,uint *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 local_18 [16];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x100);
  uVar7 = *(int *)(lVar4 + 0x20) - 1;
  if (uVar7 != 0) {
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    uVar7 = (int)(1L << ((char)iVar6 + 1U & 0x3f)) - 1;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x118);
  puVar8 = (uint *)((ulong)(uVar7 & *param_2) * 0x10 + *(long *)(lVar4 + 0x30));
  pfVar1 = (float *)(lVar5 + 0x10 + (ulong)*puVar8 * 0x50);
  pfVar2 = (float *)(lVar5 + 0x10 + (ulong)puVar8[1] * 0x50);
  pfVar3 = (float *)(lVar5 + 0x10 + (ulong)puVar8[2] * 0x50);
  fVar11 = *pfVar2 - *pfVar1;
  fVar12 = pfVar2[1] - pfVar1[1];
  fVar13 = pfVar2[2] - pfVar1[2];
  fVar14 = *pfVar3 - *pfVar1;
  fVar16 = pfVar3[1] - pfVar1[1];
  fVar17 = pfVar3[2] - pfVar1[2];
  fVar9 = fVar16 * fVar11 - fVar12 * fVar14;
  fVar12 = fVar17 * fVar12 - fVar13 * fVar16;
  fVar11 = fVar14 * fVar13 - fVar11 * fVar17;
  fVar13 = fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12 + 0.0;
  if (fVar13 <= _LC9) {
    local_18._8_8_ = _UNK_001019e8;
    local_18._0_8_ = __LC8;
    return local_18;
  }
  auVar15._0_4_ = SQRT(fVar13);
  auVar10._4_4_ = fVar11;
  auVar10._0_4_ = fVar12;
  auVar10._8_4_ = fVar9;
  auVar10._12_4_ = fVar9;
  auVar15._4_4_ = auVar15._0_4_;
  auVar15._8_4_ = auVar15._0_4_;
  auVar15._12_4_ = auVar15._0_4_;
  auVar10 = divps(auVar10,auVar15);
  return auVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SoftBodyShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::SoftBodyShape::GetSubmergedVolume(void)

{
  float *in_RCX;
  undefined4 *in_R8;
  undefined1 (*in_R9) [16];
  float fVar1;
  
  *in_R8 = 0;
  fVar1 = (float)JPH::SoftBodyMotionProperties::GetVolumeTimesSix();
  *in_RCX = fVar1 / __LC10;
  *in_R9 = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SoftBodyShape::GetVolume() const */

float JPH::SoftBodyShape::GetVolume(void)

{
  float fVar1;
  
  fVar1 = (float)JPH::SoftBodyMotionProperties::GetVolumeTimesSix();
  return fVar1 / __LC10;
}



/* JPH::SoftBodyShape::sCollideConvexVsSoftBody(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::SoftBodyShape::sCollideConvexVsSoftBody(undefined8 param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  uint *in_R9;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uStack_21f0;
  int iStack_21ec;
  CollideConvexVsTriangles aCStack_21e8 [8616];
  long local_40;
  
  lVar5 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(int *)(lVar6 + 0x20) - 1;
  if (uVar12 != 0) {
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    uVar12 = iVar8 + 1;
  }
  JPH::CollideConvexVsTriangles::CollideConvexVsTriangles(aCStack_21e8,param_1);
  puVar11 = *(uint **)(lVar6 + 0x30);
  puVar3 = puVar11 + *(long *)(lVar6 + 0x20) * 4;
  if (puVar11 != puVar3) {
    puVar13 = puVar11;
    while( true ) {
      uVar4 = *puVar11;
      lVar7 = *(long *)(lVar5 + 0x118);
      puVar1 = puVar11 + 1;
      puVar2 = puVar11 + 2;
      lVar9 = (long)puVar11 - (long)puVar13;
      bVar10 = (byte)in_R9[1];
      puVar11 = puVar11 + 4;
      iStack_21ec = in_R9[1] + uVar12;
      uStack_21f0 = (int)(lVar9 >> 4) << (bVar10 & 0x1f) |
                    ~((int)(1L << ((byte)uVar12 & 0x3f)) + -1 << (bVar10 & 0x1f)) & *in_R9;
      JPH::CollideConvexVsTriangles::Collide
                (*(undefined8 *)(lVar7 + 0x10 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar2 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar2 * 0x50),aCStack_21e8,7,&uStack_21f0);
      if (puVar3 == puVar11) break;
      puVar13 = *(uint **)(lVar6 + 0x30);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::sCollideSphereVsSoftBody(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::SoftBodyShape::sCollideSphereVsSoftBody(undefined8 param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  uint *in_R9;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uStack_e0;
  int iStack_dc;
  CollideSphereVsTriangles aCStack_d8 [152];
  long local_40;
  
  lVar5 = *(long *)(param_2 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(lVar5 + 0x100);
  uVar12 = *(int *)(lVar6 + 0x20) - 1;
  if (uVar12 != 0) {
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    uVar12 = iVar8 + 1;
  }
  JPH::CollideSphereVsTriangles::CollideSphereVsTriangles(aCStack_d8,param_1);
  puVar11 = *(uint **)(lVar6 + 0x30);
  puVar3 = puVar11 + *(long *)(lVar6 + 0x20) * 4;
  if (puVar11 != puVar3) {
    puVar13 = puVar11;
    while( true ) {
      uVar4 = *puVar11;
      lVar7 = *(long *)(lVar5 + 0x118);
      puVar1 = puVar11 + 1;
      puVar2 = puVar11 + 2;
      lVar9 = (long)puVar11 - (long)puVar13;
      bVar10 = (byte)in_R9[1];
      puVar11 = puVar11 + 4;
      iStack_dc = in_R9[1] + uVar12;
      uStack_e0 = (int)(lVar9 >> 4) << (bVar10 & 0x1f) |
                  ~((int)(1L << ((byte)uVar12 & 0x3f)) + -1 << (bVar10 & 0x1f)) & *in_R9;
      JPH::CollideSphereVsTriangles::Collide
                (*(undefined8 *)(lVar7 + 0x10 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar2 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar2 * 0x50),aCStack_d8,7,&uStack_e0);
      if (puVar3 == puVar11) break;
      puVar13 = *(uint **)(lVar6 + 0x30);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::sCastConvexVsSoftBody(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::SoftBodyShape::sCastConvexVsSoftBody
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint *param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uStack_10e0;
  int iStack_10dc;
  CastConvexVsTriangles aCStack_10d8 [4248];
  long local_40;
  
  lVar5 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(lVar5 + 0x100);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(int *)(lVar6 + 0x20) - 1;
  if (uVar12 != 0) {
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    uVar12 = iVar8 + 1;
  }
  JPH::CastConvexVsTriangles::CastConvexVsTriangles
            (aCStack_10d8,param_1,param_2,param_5,param_6,param_8);
  puVar11 = *(uint **)(lVar6 + 0x30);
  puVar3 = puVar11 + *(long *)(lVar6 + 0x20) * 4;
  if (puVar11 != puVar3) {
    puVar13 = puVar11;
    while( true ) {
      uVar4 = *puVar11;
      lVar7 = *(long *)(lVar5 + 0x118);
      puVar1 = puVar11 + 1;
      puVar2 = puVar11 + 2;
      lVar9 = (long)puVar11 - (long)puVar13;
      bVar10 = (byte)param_7[1];
      puVar11 = puVar11 + 4;
      iStack_10dc = param_7[1] + uVar12;
      uStack_10e0 = (int)(lVar9 >> 4) << (bVar10 & 0x1f) |
                    ~((int)(1L << ((byte)uVar12 & 0x3f)) + -1 << (bVar10 & 0x1f)) & *param_7;
      JPH::CastConvexVsTriangles::Cast
                (*(undefined8 *)(lVar7 + 0x10 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar2 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar2 * 0x50),aCStack_10d8,7,&uStack_10e0);
      if (puVar3 == puVar11) break;
      puVar13 = *(uint **)(lVar6 + 0x30);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::sCastSphereVsSoftBody(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::SoftBodyShape::sCastSphereVsSoftBody
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint *param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uStack_c0;
  int iStack_bc;
  CastSphereVsTriangles aCStack_b8 [120];
  long local_40;
  
  lVar5 = *(long *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(lVar5 + 0x100);
  uVar12 = *(int *)(lVar6 + 0x20) - 1;
  if (uVar12 != 0) {
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    uVar12 = iVar8 + 1;
  }
  JPH::CastSphereVsTriangles::CastSphereVsTriangles
            (aCStack_b8,param_1,param_2,param_5,param_6,param_8);
  puVar11 = *(uint **)(lVar6 + 0x30);
  puVar3 = puVar11 + *(long *)(lVar6 + 0x20) * 4;
  if (puVar11 != puVar3) {
    puVar13 = puVar11;
    while( true ) {
      uVar4 = *puVar11;
      lVar7 = *(long *)(lVar5 + 0x118);
      puVar1 = puVar11 + 1;
      puVar2 = puVar11 + 2;
      lVar9 = (long)puVar11 - (long)puVar13;
      bVar10 = (byte)param_7[1];
      puVar11 = puVar11 + 4;
      iStack_bc = param_7[1] + uVar12;
      uStack_c0 = (int)(lVar9 >> 4) << (bVar10 & 0x1f) |
                  ~((int)(1L << ((byte)uVar12 & 0x3f)) + -1 << (bVar10 & 0x1f)) & *param_7;
      JPH::CastSphereVsTriangles::Cast
                (*(undefined8 *)(lVar7 + 0x10 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)uVar4 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar1 * 0x50),
                 *(undefined8 *)(lVar7 + 0x10 + (ulong)*puVar2 * 0x50),
                 *(undefined8 *)(lVar7 + 0x18 + (ulong)*puVar2 * 0x50),aCStack_b8,7,&uStack_c0);
      if (puVar3 == puVar11) break;
      puVar13 = *(uint **)(lVar6 + 0x30);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::SoftBodyShape::CastRay
          (SoftBodyShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uStack_4c;
  float fStack_48;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar7 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar7 != '\0') {
    lVar2 = *(long *)(this + 0x20);
    lVar3 = *(long *)(lVar2 + 0x100);
    lVar4 = *(long *)(lVar3 + 0x20);
    uVar8 = (int)lVar4 - 1;
    if (uVar8 != 0) {
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      uVar8 = iVar5 + 1;
    }
    puVar10 = *(uint **)(lVar3 + 0x30);
    puVar9 = puVar10 + lVar4 * 4;
    if (puVar10 != puVar9) {
LAB_00101232:
      do {
        lVar3 = *(long *)(lVar2 + 0x118);
        pfVar1 = (float *)(lVar3 + 0x10 + (ulong)*puVar10 * 0x50);
        fVar16 = *pfVar1;
        fVar18 = pfVar1[1];
        fVar20 = pfVar1[2];
        pfVar1 = (float *)(lVar3 + 0x10 + (ulong)puVar10[1] * 0x50);
        fVar33 = *pfVar1 - fVar16;
        fVar34 = pfVar1[1] - fVar18;
        fVar35 = pfVar1[2] - fVar20;
        pfVar1 = (float *)(lVar3 + 0x10 + (ulong)puVar10[2] * 0x50);
        fVar12 = *pfVar1 - fVar16;
        fVar13 = pfVar1[1] - fVar18;
        fVar14 = pfVar1[2] - fVar20;
        if ((*param_2 != (RayCastSettings)0x0) ||
           ((fVar33 * fVar13 - fVar12 * fVar34) * *(float *)(param_1 + 0x18) +
            (fVar35 * fVar12 - fVar14 * fVar33) * *(float *)(param_1 + 0x14) +
            (fVar34 * fVar14 - fVar13 * fVar35) * *(float *)(param_1 + 0x10) + 0.0 <= 0.0)) {
          fVar15 = fVar13 * *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x14) * fVar12;
          fVar17 = fVar14 * *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x18) * fVar13;
          fVar19 = fVar12 * *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x10) * fVar14;
          fVar24 = fVar35 * fVar15 + fVar34 * fVar19 + fVar33 * fVar17 + 0.0;
          auVar27._0_4_ = 0.0 - fVar24;
          auVar22._4_4_ = fVar24;
          auVar22._0_4_ = fVar24;
          auVar22._8_4_ = fVar24;
          auVar22._12_4_ = fVar24;
          auVar27._4_4_ = auVar27._0_4_;
          auVar27._8_4_ = auVar27._0_4_;
          auVar27._12_4_ = auVar27._0_4_;
          auVar23 = maxps(auVar27,auVar22);
          bVar6 = auVar23._0_4_ < _LC4;
          uVar28 = (int)-(uint)bVar6 >> 0x1f;
          uVar30 = (int)-(uint)(auVar23._4_4_ < _LC4) >> 0x1f;
          uVar31 = (int)-(uint)(auVar23._8_4_ < _LC4) >> 0x1f;
          uVar32 = (int)-(uint)(auVar23._12_4_ < _LC4) >> 0x1f;
          auVar29._0_4_ = uVar28 & (uint)_LC2;
          auVar29._4_4_ = uVar30 & (uint)_LC2;
          auVar29._8_4_ = uVar31 & (uint)_LC2;
          auVar29._12_4_ = uVar32 & (uint)_LC2;
          auVar25._0_4_ = ~uVar28 & (uint)fVar24;
          auVar25._4_4_ = ~uVar30 & (uint)fVar24;
          auVar25._8_4_ = ~uVar31 & (uint)fVar24;
          auVar25._12_4_ = ~uVar32 & (uint)fVar24;
          auVar29 = auVar29 | auVar25;
          fVar16 = *(float *)param_1 - fVar16;
          fVar18 = *(float *)(param_1 + 4) - fVar18;
          fVar20 = *(float *)(param_1 + 8) - fVar20;
          fVar24 = fVar34 * fVar16 - fVar18 * fVar33;
          fVar34 = fVar35 * fVar18 - fVar20 * fVar34;
          fVar33 = fVar33 * fVar20 - fVar16 * fVar35;
          auVar26._0_4_ = fVar20 * fVar15 + fVar19 * fVar18 + fVar16 * fVar17 + 0.0;
          auVar26._4_4_ = auVar26._0_4_;
          auVar26._8_4_ = auVar26._0_4_;
          auVar26._12_4_ = auVar26._0_4_;
          auVar27 = divps(auVar26,auVar29);
          auVar21._0_4_ =
               (float)*(undefined8 *)(param_1 + 0x18) * fVar24 +
               (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar33 +
               (float)*(undefined8 *)(param_1 + 0x10) * fVar34 + 0.0;
          auVar21._4_4_ = auVar21._0_4_;
          auVar21._8_4_ = auVar21._0_4_;
          auVar21._12_4_ = auVar21._0_4_;
          auVar22 = divps(auVar21,auVar29);
          auVar23._0_4_ = fVar14 * fVar24 + fVar33 * fVar13 + fVar34 * fVar12 + 0.0;
          auVar23._4_4_ = auVar23._0_4_;
          auVar23._8_4_ = auVar23._0_4_;
          auVar23._12_4_ = auVar23._0_4_;
          auVar23 = divps(auVar23,auVar29);
          uVar28 = (int)-(uint)(auVar23._0_4_ < 0.0 ||
                               ((auVar27._0_4_ < 0.0 || bVar6) ||
                               (auVar22._0_4_ < 0.0 || _LC2 < auVar27._0_4_ + auVar22._0_4_))) >>
                   0x1f;
          fVar16 = (float)(_LC7 & uVar28 | ~uVar28 & (uint)auVar23._0_4_);
          if (fVar16 < *(float *)(param_4 + 8)) {
            uStack_4c = 0xffffffff;
            if (*(long *)(param_4 + 0x10) != 0) {
              uStack_4c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
            }
            puVar11 = puVar10 + 4;
            uStack_44 = (int)((long)puVar10 -
                              *(long *)(*(long *)(*(long *)(this + 0x20) + 0x100) + 0x30) >> 4) <<
                        ((byte)*(undefined4 *)(param_3 + 4) & 0x1f) |
                        ~((int)(1L << ((byte)uVar8 & 0x3f)) + -1 <<
                         ((byte)*(undefined4 *)(param_3 + 4) & 0x1f)) & *(uint *)param_3;
            fStack_48 = fVar16;
            (**(code **)(*(long *)param_4 + 0x28))(param_4,&uStack_4c);
            puVar10 = puVar11;
            if (puVar9 == puVar11) break;
            goto LAB_00101232;
          }
        }
        puVar10 = puVar10 + 4;
      } while (puVar9 != puVar10);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::GetSubShapeIDBits() const */

uint __thiscall JPH::SoftBodyShape::GetSubShapeIDBits(SoftBodyShape *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)*(undefined8 *)(*(long *)(*(long *)(this + 0x20) + 0x100) + 0x20) - 1;
  if (uVar2 != 0) {
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = iVar1 + 1;
  }
  return uVar2;
}



/* JPH::SoftBodyShape::GetFaceIndex(JPH::SubShapeID const&) const */

uint __thiscall JPH::SoftBodyShape::GetFaceIndex(SoftBodyShape *this,SubShapeID *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)*(undefined8 *)(*(long *)(*(long *)(this + 0x20) + 0x100) + 0x20) - 1;
  if (uVar2 != 0) {
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = (int)(1L << ((char)iVar1 + 1U & 0x3f)) - 1;
  }
  return uVar2 & *(uint *)param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SoftBodyShape::sRegister() */

void JPH::SoftBodyShape::sRegister(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &sConvexSubShapeTypes;
  _DAT_00102148 = 0;
  _DAT_00102150 = (undefined4)Color::sDarkGreen;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(code **)(&DAT_001020e0 + (ulong)bVar1 * 0x110) = sCollideConvexVsSoftBody;
    *(code **)(&DAT_001020e8 + (ulong)bVar1 * 0x110) = sCastConvexVsSoftBody;
  } while (pbVar2 != (byte *)&DVec3::cTrue);
  _DAT_001020e0 = sCollideSphereVsSoftBody;
  _DAT_001020e8 = sCastSphereVsSoftBody;
  return;
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JPH::Shape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool) const */

void JPH::Shape::DrawGetSupportFunction(void)

{
  return;
}



/* JPH::Shape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const */

void JPH::Shape::DrawGetSupportingFace(void)

{
  return;
}



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::SoftBodyShape::MustBeStatic() const */

undefined8 JPH::SoftBodyShape::MustBeStatic(void)

{
  return 0;
}



/* JPH::SoftBodyShape::GetCenterOfMass() const */

undefined1  [16] JPH::SoftBodyShape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::SoftBodyShape::GetInnerRadius() const */

undefined8 JPH::SoftBodyShape::GetInnerRadius(void)

{
  return 0;
}



/* JPH::SoftBodyShape::GetMassProperties() const */

SoftBodyShape * __thiscall JPH::SoftBodyShape::GetMassProperties(SoftBodyShape *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  return this;
}



/* JPH::SoftBodyShape::~SoftBodyShape() */

void __thiscall JPH::SoftBodyShape::~SoftBodyShape(SoftBodyShape *this)

{
  return;
}



/* JPH::SoftBodyShape::~SoftBodyShape() */

void __thiscall JPH::SoftBodyShape::~SoftBodyShape(SoftBodyShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x001016d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::SoftBodyShape::GetSubShapeIDBitsRecursive() const */

uint __thiscall JPH::SoftBodyShape::GetSubShapeIDBitsRecursive(SoftBodyShape *this)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (int)*(undefined8 *)(*(long *)(*(long *)(this + 0x20) + 0x100) + 0x20) - 1;
  if (uVar2 != 0) {
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = iVar1 + 1;
  }
  return uVar2;
}



/* JPH::Shape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

float * JPH::Shape::GetWorldSpaceBounds
                  (undefined8 param_1_00,undefined8 param_2,float *param_1,long *param_4,
                  long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float local_78;
  float fStack_74;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  fVar15 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == SoftBodyShape::GetLocalBounds) {
    lVar6 = param_4[4];
    local_68 = *(float *)(lVar6 + 0x170);
    fStack_64 = *(float *)(lVar6 + 0x174);
    fStack_60 = *(float *)(lVar6 + 0x178);
    fStack_5c = *(float *)(lVar6 + 0x17c);
    local_58 = *(float *)(lVar6 + 0x180);
    fStack_54 = *(float *)(lVar6 + 0x184);
    fStack_50 = *(float *)(lVar6 + 0x188);
    fStack_4c = *(float *)(lVar6 + 0x18c);
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_64 * fStack_74,local_68 * local_78);
  auVar7._8_4_ = fStack_60 * (float)param_2;
  auVar7._12_4_ = fStack_5c * fVar15;
  lVar6 = 0;
  fStack_50 = fStack_50 * (float)param_2;
  fStack_4c = fStack_4c * fVar15;
  auVar11._8_4_ = auVar7._8_4_;
  auVar11._0_8_ = auVar7._0_8_;
  auVar11._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_54 * fStack_74;
  auVar9._0_4_ = local_58 * local_78;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fStack_4c;
  local_38 = maxps(auVar11,auVar9);
  auVar20._4_4_ = fStack_54 * fStack_74;
  auVar20._0_4_ = local_58 * local_78;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fStack_4c;
  local_48 = minps(auVar7,auVar20);
  fVar15 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar10 = fVar15;
  fVar12 = fVar16;
  fVar13 = fVar17;
  fVar14 = fVar18;
  do {
    fVar2 = *(float *)(local_48 + lVar6);
    fVar3 = *(float *)(local_38 + lVar6);
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    auVar8._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar8._8_4_ = fVar2 * pfVar1[2];
    auVar8._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar6 * 4);
    lVar6 = lVar6 + 4;
    auVar19._8_4_ = auVar8._8_4_;
    auVar19._0_8_ = auVar8._0_8_;
    auVar19._12_4_ = auVar8._12_4_;
    auVar4._4_4_ = fVar3 * pfVar1[1];
    auVar4._0_4_ = fVar3 * *pfVar1;
    auVar4._8_4_ = fVar3 * pfVar1[2];
    auVar4._12_4_ = fVar3 * pfVar1[3];
    auVar20 = minps(auVar19,auVar4);
    auVar5._4_4_ = fVar3 * pfVar1[1];
    auVar5._0_4_ = fVar3 * *pfVar1;
    auVar5._8_4_ = fVar3 * pfVar1[2];
    auVar5._12_4_ = fVar3 * pfVar1[3];
    auVar9 = maxps(auVar8,auVar5);
    fVar10 = fVar10 + auVar20._0_4_;
    fVar12 = fVar12 + auVar20._4_4_;
    fVar13 = fVar13 + auVar20._8_4_;
    fVar14 = fVar14 + auVar20._12_4_;
    fVar15 = fVar15 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar10;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SoftBodyShape::GetSubShapeIDBits() const */

void JPH::SoftBodyShape::_GLOBAL__sub_I_GetSubShapeIDBits(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC12;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SoftBodyShape::~SoftBodyShape() */

void __thiscall JPH::SoftBodyShape::~SoftBodyShape(SoftBodyShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



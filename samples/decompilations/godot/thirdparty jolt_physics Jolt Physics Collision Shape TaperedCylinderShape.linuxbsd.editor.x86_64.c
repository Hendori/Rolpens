
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetLocalBounds() const */

void JPH::TaperedCylinderShape::GetLocalBounds(void)

{
  uint uVar1;
  uint uVar2;
  long in_RSI;
  uint *in_RDI;
  float fVar3;
  uint uVar4;
  
  fVar3 = *(float *)(in_RSI + 0x38);
  if (*(float *)(in_RSI + 0x38) <= *(float *)(in_RSI + 0x34)) {
    fVar3 = *(float *)(in_RSI + 0x34);
  }
  uVar1 = *(uint *)(in_RSI + 0x2c);
  uVar4 = (uint)fVar3 ^ __LC1;
  uVar2 = *(uint *)(in_RSI + 0x30);
  in_RDI[4] = (uint)fVar3;
  in_RDI[5] = uVar1;
  in_RDI[6] = (uint)fVar3;
  in_RDI[7] = (uint)fVar3;
  *in_RDI = uVar4;
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar4;
  in_RDI[3] = uVar4;
  return;
}



/* JPH::TaperedCylinderShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::TaperedCylinderShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined4 *param_4,long *param_5,
               long *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    fVar2 = *(float *)(param_3 + 0x30);
    fVar3 = (float)((ulong)param_1 >> 0x20);
    if ((fVar2 <= fVar3) && (fVar3 <= *(float *)(param_3 + 0x2c))) {
      fVar2 = ((fVar3 - fVar2) * (*(float *)(param_3 + 0x34) - *(float *)(param_3 + 0x38))) /
              (*(float *)(param_3 + 0x2c) - fVar2) + *(float *)(param_3 + 0x38);
      if ((float)param_1 * (float)param_1 + param_2 * param_2 <= fVar2 * fVar2) {
        local_38 = 0xffffffff;
        if (param_5[2] != 0) {
          local_38 = *(undefined4 *)(param_5[2] + 0x34);
        }
        local_34 = *param_4;
        (**(code **)(*param_5 + 0x28))(param_5,&local_38);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::TaperedCylinderShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

int __thiscall
JPH::TaperedCylinderShape::GetTrianglesNext
          (TaperedCylinderShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  Float3 *pFVar1;
  PhysicsMaterial **ppPVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  PhysicsMaterial *pPVar6;
  Float3 *pFVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  PhysicsMaterial **ppPVar11;
  PhysicsMaterial **ppPVar12;
  int iVar13;
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
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  uVar8 = *(uint *)(param_1 + 0x40);
  fVar3 = *(float *)(this + 0x2c);
  iVar13 = 0;
  if ((uVar8 & 1) == 0) {
    fVar18 = *(float *)(this + 0x34);
    fVar19 = *(float *)param_1;
    fVar14 = *(float *)(param_1 + 4);
    fVar21 = *(float *)(param_1 + 8);
    pFVar1 = param_3 + 0xd8;
    pfVar9 = (float *)(cTaperedCylinderFace + 0x20);
    fVar24 = *(float *)(param_1 + 0x10);
    fVar36 = *(float *)(param_1 + 0x14);
    fVar37 = *(float *)(param_1 + 0x18);
    fVar33 = *(float *)(param_1 + 0x20);
    fVar34 = *(float *)(param_1 + 0x24);
    fVar35 = *(float *)(param_1 + 0x28);
    fVar30 = *(float *)(param_1 + 0x30);
    fVar32 = *(float *)(param_1 + 0x34);
    fVar31 = *(float *)(param_1 + 0x38);
    fVar20 = (float)cTaperedCylinderFace._0_4_ * fVar18 + 0.0;
    fVar22 = (float)cTaperedCylinderFace._4_4_ * fVar18 + fVar3;
    fVar25 = (float)cTaperedCylinderFace._8_4_ * fVar18 + 0.0;
    fVar27 = fVar20 * fVar19 + fVar22 * fVar24 + fVar25 * fVar33 + fVar30;
    fVar28 = fVar20 * fVar14 + fVar22 * fVar36 + fVar25 * fVar34 + fVar32;
    fVar29 = fVar20 * fVar21 + fVar22 * fVar37 + fVar25 * fVar35 + fVar31;
    fVar22 = (float)cTaperedCylinderFace._16_4_ * fVar18 + 0.0;
    fVar23 = (float)cTaperedCylinderFace._20_4_ * fVar18 + fVar3;
    fVar26 = (float)cTaperedCylinderFace._24_4_ * fVar18 + 0.0;
    fVar25 = fVar22 * fVar19 + fVar23 * fVar24 + fVar26 * fVar33 + fVar30;
    pFVar7 = param_3;
    fVar20 = fVar22 * fVar14 + fVar23 * fVar36 + fVar26 * fVar34 + fVar32;
    fVar22 = fVar22 * fVar21 + fVar23 * fVar37 + fVar26 * fVar35 + fVar31;
    while( true ) {
      fVar23 = *pfVar9;
      pfVar4 = pfVar9 + 1;
      pfVar5 = pfVar9 + 2;
      param_3 = pFVar7 + 0x24;
      pfVar9 = pfVar9 + 4;
      fVar23 = fVar18 * fVar23 + 0.0;
      fVar26 = fVar18 * *pfVar4 + fVar3;
      fVar18 = fVar18 * *pfVar5 + 0.0;
      *(float *)pFVar7 = fVar27;
      *(float *)(pFVar7 + 4) = fVar28;
      *(float *)(pFVar7 + 8) = fVar29;
      *(float *)(pFVar7 + 0xc) = fVar25;
      fVar25 = fVar18 * fVar33 + fVar23 * fVar19 + fVar26 * fVar24 + fVar30;
      fVar15 = fVar18 * fVar34 + fVar23 * fVar14 + fVar26 * fVar36 + fVar32;
      fVar23 = fVar18 * fVar35 + fVar23 * fVar21 + fVar26 * fVar37 + fVar31;
      *(float *)(pFVar7 + 0x10) = fVar20;
      *(float *)(pFVar7 + 0x14) = fVar22;
      *(float *)(pFVar7 + 0x18) = fVar25;
      *(float *)(pFVar7 + 0x1c) = fVar15;
      *(float *)(pFVar7 + 0x20) = fVar23;
      if (param_3 == pFVar1) break;
      fVar19 = *(float *)param_1;
      fVar14 = *(float *)(param_1 + 4);
      fVar21 = *(float *)(param_1 + 8);
      fVar18 = *(float *)(this + 0x34);
      fVar24 = *(float *)(param_1 + 0x10);
      fVar36 = *(float *)(param_1 + 0x14);
      fVar37 = *(float *)(param_1 + 0x18);
      fVar33 = *(float *)(param_1 + 0x20);
      fVar34 = *(float *)(param_1 + 0x24);
      fVar35 = *(float *)(param_1 + 0x28);
      fVar30 = *(float *)(param_1 + 0x30);
      fVar32 = *(float *)(param_1 + 0x34);
      fVar31 = *(float *)(param_1 + 0x38);
      pFVar7 = param_3;
      fVar20 = fVar15;
      fVar22 = fVar23;
    }
    uVar8 = uVar8 | 1;
    iVar13 = 6;
    *(uint *)(param_1 + 0x40) = uVar8;
  }
  fVar18 = *(float *)(this + 0x30);
  iVar10 = iVar13;
  if ((uVar8 & 2) == 0) {
    iVar10 = iVar13 + 6;
    if (param_2 <= iVar10) goto LAB_001002a8;
    fVar19 = *(float *)(this + 0x38);
    fVar14 = *(float *)param_1;
    fVar21 = *(float *)(param_1 + 4);
    fVar24 = *(float *)(param_1 + 8);
    pFVar1 = param_3 + 0xd8;
    pfVar9 = (float *)(cTaperedCylinderFace + 0x20);
    fVar36 = *(float *)(param_1 + 0x10);
    fVar37 = *(float *)(param_1 + 0x14);
    fVar33 = *(float *)(param_1 + 0x18);
    fVar34 = *(float *)(param_1 + 0x20);
    fVar35 = *(float *)(param_1 + 0x24);
    fVar30 = *(float *)(param_1 + 0x28);
    fVar32 = *(float *)(param_1 + 0x30);
    fVar31 = *(float *)(param_1 + 0x34);
    fVar20 = *(float *)(param_1 + 0x38);
    fVar22 = (float)cTaperedCylinderFace._0_4_ * fVar19 + 0.0;
    fVar25 = (float)cTaperedCylinderFace._4_4_ * fVar19 + fVar18;
    fVar23 = (float)cTaperedCylinderFace._8_4_ * fVar19 + 0.0;
    fVar28 = fVar22 * fVar14 + fVar25 * fVar36 + fVar23 * fVar34 + fVar32;
    fVar29 = fVar22 * fVar21 + fVar25 * fVar37 + fVar23 * fVar35 + fVar31;
    fVar15 = fVar22 * fVar24 + fVar25 * fVar33 + fVar23 * fVar30 + fVar20;
    fVar23 = (float)cTaperedCylinderFace._16_4_ * fVar19 + 0.0;
    fVar26 = (float)cTaperedCylinderFace._20_4_ * fVar19 + fVar18;
    fVar27 = (float)cTaperedCylinderFace._24_4_ * fVar19 + 0.0;
    pFVar7 = param_3;
    fVar22 = fVar23 * fVar14 + fVar26 * fVar36 + fVar27 * fVar34 + fVar32;
    fVar25 = fVar23 * fVar21 + fVar26 * fVar37 + fVar27 * fVar35 + fVar31;
    fVar23 = fVar23 * fVar24 + fVar26 * fVar33 + fVar27 * fVar30 + fVar20;
    while( true ) {
      fVar26 = *pfVar9;
      pfVar4 = pfVar9 + 1;
      pfVar5 = pfVar9 + 2;
      param_3 = pFVar7 + 0x24;
      pfVar9 = pfVar9 + 4;
      fVar26 = fVar19 * fVar26 + 0.0;
      fVar16 = fVar19 * *pfVar4 + fVar18;
      fVar19 = fVar19 * *pfVar5 + 0.0;
      fVar27 = fVar19 * fVar34 + fVar26 * fVar14 + fVar16 * fVar36 + fVar32;
      fVar17 = fVar19 * fVar35 + fVar26 * fVar21 + fVar16 * fVar37 + fVar31;
      fVar26 = fVar19 * fVar30 + fVar26 * fVar24 + fVar16 * fVar33 + fVar20;
      *(float *)pFVar7 = fVar28;
      *(float *)(pFVar7 + 4) = fVar29;
      *(float *)(pFVar7 + 8) = fVar15;
      *(float *)(pFVar7 + 0xc) = fVar27;
      *(float *)(pFVar7 + 0x10) = fVar17;
      *(float *)(pFVar7 + 0x14) = fVar26;
      *(float *)(pFVar7 + 0x18) = fVar22;
      *(float *)(pFVar7 + 0x1c) = fVar25;
      *(float *)(pFVar7 + 0x20) = fVar23;
      if (param_3 == pFVar1) break;
      fVar14 = *(float *)param_1;
      fVar21 = *(float *)(param_1 + 4);
      fVar24 = *(float *)(param_1 + 8);
      fVar19 = *(float *)(this + 0x38);
      fVar36 = *(float *)(param_1 + 0x10);
      fVar37 = *(float *)(param_1 + 0x14);
      fVar33 = *(float *)(param_1 + 0x18);
      fVar34 = *(float *)(param_1 + 0x20);
      fVar35 = *(float *)(param_1 + 0x24);
      fVar30 = *(float *)(param_1 + 0x28);
      fVar32 = *(float *)(param_1 + 0x30);
      fVar31 = *(float *)(param_1 + 0x34);
      fVar20 = *(float *)(param_1 + 0x38);
      pFVar7 = param_3;
      fVar22 = fVar27;
      fVar25 = fVar17;
      fVar23 = fVar26;
    }
    uVar8 = uVar8 | 2;
    *(uint *)(param_1 + 0x40) = uVar8;
  }
  iVar13 = iVar10;
  if (((uVar8 & 4) == 0) && (iVar10 + 0x10 < param_2)) {
    fVar19 = *(float *)(this + 0x34);
    fVar21 = *(float *)param_1;
    fVar24 = *(float *)(param_1 + 4);
    fVar36 = *(float *)(param_1 + 8);
    fVar37 = *(float *)(param_1 + 0x10);
    fVar33 = *(float *)(param_1 + 0x14);
    fVar34 = *(float *)(param_1 + 0x18);
    fVar35 = *(float *)(param_1 + 0x20);
    fVar30 = *(float *)(param_1 + 0x24);
    fVar32 = *(float *)(param_1 + 0x28);
    fVar31 = *(float *)(param_1 + 0x30);
    fVar20 = *(float *)(param_1 + 0x34);
    fVar22 = *(float *)(param_1 + 0x38);
    fVar25 = (float)cTaperedCylinderFace._112_4_ * fVar19 + 0.0;
    fVar23 = (float)cTaperedCylinderFace._116_4_ * fVar19 + fVar3;
    fVar26 = (float)cTaperedCylinderFace._120_4_ * fVar19 + 0.0;
    fVar14 = *(float *)(this + 0x38);
    fVar27 = fVar25 * fVar21 + fVar23 * fVar37 + fVar26 * fVar35 + fVar31;
    fVar28 = fVar25 * fVar24 + fVar23 * fVar33 + fVar26 * fVar30 + fVar20;
    fVar26 = fVar25 * fVar36 + fVar23 * fVar34 + fVar26 * fVar32 + fVar22;
    fVar23 = fVar14 * (float)cTaperedCylinderFace._112_4_ + 0.0;
    fVar29 = fVar14 * (float)cTaperedCylinderFace._116_4_ + fVar18;
    fVar15 = fVar14 * (float)cTaperedCylinderFace._120_4_ + 0.0;
    pfVar9 = (float *)cTaperedCylinderFace;
    fVar14 = fVar23 * fVar21 + fVar29 * fVar37 + fVar15 * fVar35 + fVar31;
    fVar25 = fVar23 * fVar24 + fVar29 * fVar33 + fVar15 * fVar30 + fVar20;
    fVar23 = fVar23 * fVar36 + fVar29 * fVar34 + fVar15 * fVar32 + fVar22;
    while( true ) {
      fVar29 = *pfVar9;
      fVar15 = pfVar9[1];
      fVar16 = pfVar9[2];
      *(float *)param_3 = fVar27;
      *(float *)(param_3 + 0xc) = fVar14;
      fVar29 = fVar19 * fVar29 + 0.0;
      fVar15 = fVar19 * fVar15 + fVar3;
      fVar19 = fVar19 * fVar16 + 0.0;
      *(float *)(param_3 + 4) = fVar28;
      *(float *)(param_3 + 8) = fVar26;
      fVar27 = fVar29 * fVar21 + fVar15 * fVar37 + fVar19 * fVar35 + fVar31;
      fVar28 = fVar29 * fVar24 + fVar15 * fVar33 + fVar19 * fVar30 + fVar20;
      fVar26 = fVar29 * fVar36 + fVar15 * fVar34 + fVar19 * fVar32 + fVar22;
      *(float *)(param_3 + 0x14) = fVar23;
      *(float *)(param_3 + 0x10) = fVar25;
      *(float *)(param_3 + 0x18) = fVar27;
      *(float *)(param_3 + 0x1c) = fVar28;
      *(float *)(param_3 + 0x20) = fVar26;
      fVar19 = *(float *)(this + 0x38);
      fVar21 = fVar19 * *pfVar9 + 0.0;
      fVar24 = fVar19 * pfVar9[1] + fVar18;
      fVar19 = fVar19 * pfVar9[2] + 0.0;
      fVar29 = fVar21 * *(float *)param_1 + fVar24 * *(float *)(param_1 + 0x10) +
               fVar19 * *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x30);
      fVar15 = fVar21 * *(float *)(param_1 + 4) + fVar24 * *(float *)(param_1 + 0x14) +
               fVar19 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34);
      fVar16 = fVar21 * *(float *)(param_1 + 8) + fVar24 * *(float *)(param_1 + 0x18) +
               fVar19 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
      *(float *)(param_3 + 0x30) = fVar14;
      *(float *)(param_3 + 0x24) = fVar27;
      *(float *)(param_3 + 0x28) = fVar28;
      *(float *)(param_3 + 0x2c) = fVar26;
      *(float *)(param_3 + 0x34) = fVar25;
      *(float *)(param_3 + 0x38) = fVar23;
      *(float *)(param_3 + 0x3c) = fVar29;
      *(ulong *)(param_3 + 0x40) = CONCAT44(fVar16,fVar15);
      if (pfVar9 + 4 == (float *)Shape::MustBeStatic) break;
      fVar19 = *(float *)(this + 0x34);
      fVar21 = *(float *)param_1;
      fVar24 = *(float *)(param_1 + 4);
      fVar36 = *(float *)(param_1 + 8);
      fVar37 = *(float *)(param_1 + 0x10);
      fVar33 = *(float *)(param_1 + 0x14);
      fVar34 = *(float *)(param_1 + 0x18);
      fVar35 = *(float *)(param_1 + 0x20);
      fVar30 = *(float *)(param_1 + 0x24);
      fVar32 = *(float *)(param_1 + 0x28);
      fVar31 = *(float *)(param_1 + 0x30);
      fVar20 = *(float *)(param_1 + 0x34);
      fVar22 = *(float *)(param_1 + 0x38);
      param_3 = param_3 + 0x48;
      pfVar9 = pfVar9 + 4;
      fVar14 = fVar29;
      fVar25 = fVar15;
      fVar23 = fVar16;
    }
    *(uint *)(param_1 + 0x40) = uVar8 | 4;
    iVar13 = iVar10 + 0x10;
  }
LAB_001002a8:
  if (param_4 != (PhysicsMaterial **)0x0) {
    ppPVar2 = param_4 + iVar13;
    pPVar6 = *(PhysicsMaterial **)(this + 0x20);
    if (*(PhysicsMaterial **)(this + 0x20) == (PhysicsMaterial *)0x0) {
      pPVar6 = PhysicsMaterial::sDefault;
    }
    if (param_4 < ppPVar2) {
      *param_4 = pPVar6;
      ppPVar11 = param_4 + 1;
      if (ppPVar11 < ppPVar2) {
        if ((~(ulong)param_4 + (long)ppPVar2 >> 3 & 1) != 0) {
          *ppPVar11 = pPVar6;
          ppPVar11 = param_4 + 2;
          if (ppPVar2 <= param_4 + 2) {
            return iVar13;
          }
        }
        do {
          *ppPVar11 = pPVar6;
          ppPVar12 = ppPVar11 + 2;
          ppPVar11[1] = pPVar6;
          ppPVar11 = ppPVar12;
        } while (ppPVar12 < ppPVar2);
      }
    }
  }
  return iVar13;
}



/* JPH::TaperedCylinderShape::GetVolume() const */

float __thiscall JPH::TaperedCylinderShape::GetVolume(TaperedCylinderShape *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 0x34);
  fVar2 = *(float *)(this + 0x38);
  return (fVar1 * fVar2 + fVar1 * fVar1 + fVar2 * fVar2) *
         (*(float *)(this + 0x2c) - *(float *)(this + 0x30)) * _LC2;
}



/* JPH::TaperedCylinderShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::TaperedCylinderShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::TaperedCylinderShape::GetSurfaceNormal
          (undefined8 param_1,undefined8 param_2,TaperedCylinderShape *this)

{
  undefined1 auVar1 [12];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  fVar6 = (float)((ulong)param_1 >> 0x20);
  if (*(float *)(this + 0x2c) - _LC8 < fVar6) {
    uStack_10 = _UNK_00103168;
    local_18 = (undefined1  [8])__LC6;
    return _local_18;
  }
  if (fVar6 < _LC8 + *(float *)(this + 0x30)) {
    uStack_10 = _UNK_00103178;
    local_18 = (undefined1  [8])__LC7;
    return _local_18;
  }
  local_18._0_4_ = (undefined4)param_1;
  uStack_10._0_4_ = (float)param_2;
  uStack_10._4_4_ = (float)((ulong)param_2 >> 0x20);
  auVar5._0_4_ = (float)local_18._0_4_ * __LC9;
  auVar5._4_4_ = fVar6 * _UNK_00103184;
  auVar5._8_4_ = (float)uStack_10 * _UNK_00103188;
  auVar5._12_4_ = uStack_10._4_4_ * _UNK_0010318c;
  fVar6 = auVar5._8_4_ * auVar5._8_4_ +
          auVar5._0_4_ * auVar5._0_4_ + 0.0 + auVar5._4_4_ * auVar5._4_4_;
  if (_LC10 < fVar6) {
    auVar8._0_4_ = SQRT(fVar6);
    auVar8._4_4_ = auVar8._0_4_;
    auVar8._8_4_ = auVar8._0_4_;
    auVar8._12_4_ = auVar8._0_4_;
    auVar5 = divps(auVar5,auVar8);
    auVar1 = auVar5._0_12_;
    fVar7 = auVar5._8_4_ * auVar5._8_4_;
    fVar6 = auVar5._0_4_ * auVar5._0_4_ + 0.0;
  }
  else {
    fVar7 = 0.0;
    auVar1._4_8_ = 0;
    auVar1._0_4_ = _LC4;
    fVar6 = _LC4;
  }
  fVar2 = (*(float *)(this + 0x38) - *(float *)(this + 0x34)) /
          (*(float *)(this + 0x2c) - *(float *)(this + 0x30));
  auVar4._4_4_ = fVar2;
  auVar4._0_4_ = auVar1._0_4_;
  auVar4._8_4_ = auVar1._8_4_;
  auVar4._12_4_ = auVar1._8_4_;
  auVar3._0_4_ = SQRT(fVar2 * fVar2 + fVar6 + fVar7);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar4,auVar3);
  return auVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::TaperedCylinderShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_1,undefined8 param_6,float *param_7,uint *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar23;
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [12];
  float fVar34;
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_10;
  float fStack_c;
  
  fVar31 = (float)((ulong)param_3 >> 0x20);
  fStack_10 = (float)param_4;
  fStack_c = (float)((ulong)param_4 >> 0x20);
  auVar26._0_4_ = 0.0 - (float)param_3;
  auVar26._4_4_ = 0.0 - fVar31;
  auVar26._8_4_ = 0.0 - fStack_10;
  auVar26._12_4_ = 0.0 - fStack_c;
  fVar39 = *(float *)(param_1 + 0x2c) * fVar31;
  auVar27._8_4_ = fStack_10;
  auVar27._0_8_ = param_3;
  auVar27._12_4_ = fStack_c;
  auVar27 = maxps(auVar26,auVar27);
  fVar31 = fVar31 * *(float *)(param_1 + 0x30);
  fVar35 = *(float *)(param_1 + 0x34) * auVar27._0_4_;
  fVar24 = auVar27._0_4_ * *(float *)(param_1 + 0x38);
  fVar36 = fVar35;
  fVar28 = fVar31;
  if (fVar39 < fVar31) {
    fVar36 = fVar24;
    fVar28 = fVar39;
    fVar39 = fVar31;
    fVar24 = fVar35;
  }
  local_28 = (float)param_1_00;
  fStack_24 = (float)((ulong)param_1_00 >> 0x20);
  fStack_20 = (float)param_2;
  fStack_1c = (float)((ulong)param_2 >> 0x20);
  auVar33._0_4_ = (0.0 - local_28) * __LC9;
  auVar33._4_4_ = (0.0 - fStack_24) * _UNK_00103184;
  auVar33._8_4_ = (0.0 - fStack_20) * _UNK_00103188;
  auVar33._12_4_ = (0.0 - fStack_1c) * _UNK_0010318c;
  fVar31 = auVar33._8_4_ * auVar33._8_4_ +
           auVar33._0_4_ * auVar33._0_4_ + 0.0 + auVar33._4_4_ * auVar33._4_4_;
  if (_LC10 < fVar31) {
    auVar21._0_4_ = SQRT(fVar31);
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar27 = divps(auVar33,auVar21);
    auVar32 = auVar27._0_12_;
    fVar31 = auVar27._0_4_ * auVar27._0_4_ + 0.0;
    fVar35 = auVar27._8_4_ * auVar27._8_4_;
  }
  else {
    fVar35 = 0.0;
    auVar32._4_8_ = 0;
    auVar32._0_4_ = _LC4;
    fVar31 = _LC4;
  }
  fVar29 = (fVar24 - fVar36) / (fVar39 - fVar28);
  fVar25 = auVar32._0_4_;
  fVar34 = auVar32._8_4_;
  auVar20._4_4_ = fVar29;
  auVar20._0_4_ = fVar25;
  auVar20._8_4_ = fVar34;
  auVar20._12_4_ = fVar34;
  auVar30._0_4_ = SQRT(fVar29 * fVar29 + fVar31 + fVar35);
  auVar30._4_4_ = auVar30._0_4_;
  auVar30._8_4_ = auVar30._0_4_;
  auVar30._12_4_ = auVar30._0_4_;
  auVar27 = divps(auVar20,auVar30);
  if ((float)((uint)(auVar27._8_4_ * fStack_20 +
                    auVar27._4_4_ * fStack_24 + auVar27._0_4_ * local_28 + 0.0) & _LC11) <=
      (float)(_LC11 & (uint)fStack_24)) {
    if (fStack_24 < 0.0) {
      if (fVar36 <= _LC12) {
        return;
      }
      uVar17 = *param_8;
      fVar28 = *param_7;
      fVar24 = param_7[1];
      fVar31 = param_7[2];
      fVar35 = param_7[3];
      puVar15 = cTaperedCylinderFace;
      fVar29 = param_7[4];
      fVar25 = param_7[5];
      fVar34 = param_7[6];
      fVar1 = param_7[7];
      fVar2 = param_7[8];
      fVar3 = param_7[9];
      fVar4 = param_7[10];
      fVar5 = param_7[0xb];
      fVar6 = param_7[0xc];
      fVar7 = param_7[0xd];
      fVar8 = param_7[0xe];
      fVar9 = param_7[0xf];
      uVar16 = uVar17;
      do {
        fVar19 = *(float *)puVar15;
        pfVar14 = (float *)((long)puVar15 + 4);
        pfVar10 = (float *)((long)puVar15 + 8);
        uVar12 = (ulong)uVar16;
        puVar15 = (undefined1 *)((long)puVar15 + 0x10);
        uVar16 = uVar16 + 1;
        pfVar13 = (float *)(param_8 + (uVar12 + 1) * 4);
        fVar18 = fVar19 * fVar36 + 0.0;
        fVar37 = *pfVar14 * fVar36 + fVar39;
        fVar23 = *pfVar10 * fVar36 + 0.0;
        fVar19 = fVar23 * fVar2 + fVar18 * fVar28 + fVar37 * fVar29 + fVar6;
        fVar22 = fVar23 * fVar3 + fVar18 * fVar24 + fVar37 * fVar25 + fVar7;
        fVar38 = fVar23 * fVar4 + fVar18 * fVar31 + fVar37 * fVar34 + fVar8;
        fVar18 = fVar23 * fVar5 + fVar18 * fVar35 + fVar37 * fVar1 + fVar9;
        *pfVar13 = fVar19;
        pfVar13[1] = fVar22;
        pfVar13[2] = fVar38;
        pfVar13[3] = fVar18;
      } while ((code *)puVar15 != Shape::MustBeStatic);
    }
    else {
      if (fVar24 <= _LC12) {
        return;
      }
      uVar17 = *param_8;
      fVar36 = *param_7;
      fVar39 = param_7[1];
      fVar31 = param_7[2];
      fVar35 = param_7[3];
      pfVar14 = (float *)(cTaperedCylinderFace + 0x70);
      fVar29 = param_7[4];
      fVar25 = param_7[5];
      fVar34 = param_7[6];
      fVar1 = param_7[7];
      fVar2 = param_7[8];
      fVar3 = param_7[9];
      fVar4 = param_7[10];
      fVar5 = param_7[0xb];
      fVar6 = param_7[0xc];
      fVar7 = param_7[0xd];
      fVar8 = param_7[0xe];
      fVar9 = param_7[0xf];
      uVar16 = uVar17;
      do {
        fVar19 = *pfVar14;
        pfVar10 = pfVar14 + 1;
        pfVar11 = pfVar14 + 2;
        uVar12 = (ulong)uVar16;
        pfVar14 = pfVar14 + -4;
        uVar16 = uVar16 + 1;
        pfVar13 = (float *)(param_8 + (uVar12 + 1) * 4);
        fVar18 = fVar19 * fVar24 + 0.0;
        fVar37 = *pfVar10 * fVar24 + fVar28;
        fVar23 = *pfVar11 * fVar24 + 0.0;
        fVar19 = fVar23 * fVar2 + fVar18 * fVar36 + fVar37 * fVar29 + fVar6;
        fVar22 = fVar23 * fVar3 + fVar18 * fVar39 + fVar37 * fVar25 + fVar7;
        fVar38 = fVar23 * fVar4 + fVar18 * fVar31 + fVar37 * fVar34 + fVar8;
        fVar18 = fVar23 * fVar5 + fVar18 * fVar35 + fVar37 * fVar1 + fVar9;
        *pfVar13 = fVar19;
        pfVar13[1] = fVar22;
        pfVar13[2] = fVar38;
        pfVar13[3] = fVar18;
      } while (pfVar14 != (float *)&DAT_00102510);
    }
    *param_8 = uVar17 + 8;
    *pfVar13 = fVar19;
    pfVar13[1] = fVar22;
    pfVar13[2] = fVar38;
    pfVar13[3] = fVar18;
    return;
  }
  fVar31 = *param_7;
  fVar35 = param_7[1];
  fVar29 = param_7[2];
  fVar1 = param_7[3];
  fVar2 = param_7[4];
  fVar3 = param_7[5];
  fVar4 = param_7[6];
  fVar5 = param_7[7];
  fVar6 = param_7[0xc];
  fVar7 = param_7[0xd];
  fVar8 = param_7[0xe];
  fVar9 = param_7[0xf];
  uVar17 = *param_8;
  uVar12 = (ulong)uVar17 + 1;
  fVar37 = fVar36 * fVar25 + 0.0;
  fVar39 = fVar36 * auVar32._4_4_ + fVar39;
  fVar38 = fVar36 * fVar34 + 0.0;
  fVar36 = param_7[8];
  fVar19 = param_7[9];
  fVar18 = param_7[10];
  fVar22 = param_7[0xb];
  fVar25 = fVar24 * fVar25 + 0.0;
  fVar28 = fVar24 * auVar32._4_4_ + fVar28;
  fVar24 = fVar24 * fVar34 + 0.0;
  pfVar14 = (float *)(param_8 + uVar12 * 4);
  *pfVar14 = fVar37 * fVar31 + fVar39 * fVar2 + fVar38 * fVar36 + fVar6;
  pfVar14[1] = fVar37 * fVar35 + fVar39 * fVar3 + fVar38 * fVar19 + fVar7;
  pfVar14[2] = fVar37 * fVar29 + fVar39 * fVar4 + fVar38 * fVar18 + fVar8;
  pfVar14[3] = fVar37 * fVar1 + fVar39 * fVar5 + fVar38 * fVar22 + fVar9;
  *param_8 = uVar17 + 2;
  pfVar14 = (float *)(param_8 + (uVar12 & 0xffffffff) * 4 + 4);
  *pfVar14 = fVar25 * fVar31 + fVar28 * fVar2 + fVar24 * fVar36 + fVar6;
  pfVar14[1] = fVar25 * fVar35 + fVar28 * fVar3 + fVar24 * fVar19 + fVar7;
  pfVar14[2] = fVar25 * fVar29 + fVar28 * fVar4 + fVar24 * fVar18 + fVar8;
  pfVar14[3] = fVar25 * fVar1 + fVar28 * fVar5 + fVar24 * fVar22 + fVar9;
  return;
}



/* JPH::TaperedCylinderShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::TaperedCylinderShape::SaveBinaryState(TaperedCylinderShape *this,StreamOut *param_1)

{
  JPH::ConvexShape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
                    /* WARNING: Could not recover jumptable at 0x00100be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x3c,4);
  return;
}



/* JPH::TaperedCylinderShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::TaperedCylinderShape::RestoreBinaryState(TaperedCylinderShape *this,StreamIn *param_1)

{
  JPH::ConvexShape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x2c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x34,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
                    /* WARNING: Could not recover jumptable at 0x00100c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x3c,4);
  return;
}



/* JPH::TaperedCylinderShape::IsValidScale(JPH::Vec3) const */

char __thiscall JPH::TaperedCylinderShape::IsValidScale(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  local_18 = (float)param_1;
  uStack_14 = (float)((ulong)param_1 >> 0x20);
  cVar1 = JPH::Shape::IsValidScale();
  if (cVar1 != '\0') {
    auVar3._0_4_ = 0.0 - local_18;
    auVar3._4_4_ = 0.0 - uStack_14;
    auVar3._8_4_ = 0.0 - (float)param_2;
    auVar3._12_4_ = 0.0 - fVar2;
    auVar4._8_4_ = (float)param_2;
    auVar4._0_8_ = param_1;
    auVar4._12_4_ = fVar2;
    auVar4 = maxps(auVar3,auVar4);
    fVar2 = auVar4._0_4_ - auVar4._8_4_;
    fVar5 = auVar4._4_4_ - auVar4._4_4_;
    fVar6 = auVar4._8_4_ - auVar4._0_4_;
    cVar1 = fVar6 * fVar6 + fVar5 * fVar5 + fVar2 * fVar2 + 0.0 <= _LC13;
  }
  return cVar1;
}



/* JPH::TaperedCylinderShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::TaperedCylinderShape::MakeScaleValid(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = (float)param_1;
  uStack_14 = (float)((ulong)param_1 >> 0x20);
  uStack_10 = (float)param_2;
  uStack_c = (float)((ulong)param_2 >> 0x20);
  auVar2._0_4_ = 0.0 - local_18;
  auVar2._4_4_ = 0.0 - uStack_14;
  auVar2._8_4_ = 0.0 - uStack_10;
  auVar2._12_4_ = 0.0 - uStack_c;
  auVar3._8_4_ = uStack_10;
  auVar3._0_8_ = param_1;
  auVar3._12_4_ = uStack_c;
  auVar3 = maxps(auVar2,auVar3);
  auVar6._4_4_ = _LC15;
  auVar6._0_4_ = _LC15;
  auVar6._8_4_ = _LC15;
  auVar6._12_4_ = _LC15;
  auVar3 = maxps(auVar3,auVar6);
  auVar4._0_4_ = auVar3._0_4_ * (float)((uint)local_18 & _LC17 | _LC4);
  auVar4._4_4_ = auVar3._4_4_ * (float)((uint)uStack_14 & _LC17 | _LC4);
  auVar4._8_4_ = auVar3._8_4_ * (float)((uint)uStack_10 & _LC17 | _LC4);
  auVar4._12_4_ = auVar3._12_4_ * (float)((uint)uStack_c & _LC17 | _LC4);
  auVar7._4_4_ = 0.0 - auVar4._4_4_;
  auVar7._0_4_ = 0.0 - auVar4._0_4_;
  auVar7._8_4_ = 0.0 - auVar4._8_4_;
  auVar7._12_4_ = 0.0 - auVar4._12_4_;
  auVar3 = maxps(auVar7,auVar4);
  fVar5 = auVar3._0_4_;
  auVar1._4_4_ = (auVar3._4_4_ + auVar3._4_4_) * _LC20 * (float)((uint)auVar4._4_4_ & _LC17 | _LC4);
  auVar1._0_4_ = (fVar5 + auVar3._8_4_) * _LC20 * (float)((uint)auVar4._0_4_ & _LC17 | _LC4);
  auVar1._8_4_ = (auVar3._8_4_ + fVar5) * _LC20 * (float)((uint)auVar4._8_4_ & _LC17 | _LC4);
  auVar1._12_4_ = (auVar3._12_4_ + fVar5) * _LC20 * (float)((uint)auVar4._12_4_ & _LC17 | _LC4);
  return auVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::TaperedCylinderShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  undefined4 unaff_EBX;
  undefined4 uVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [4];
  float afStack_94 [3];
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
  
  fVar7 = _LC12;
  fVar14 = (float)((ulong)param_5 >> 0x20);
  fVar13 = (float)param_5;
  fVar17 = (float)((ulong)param_3 >> 0x20);
  fVar15 = (float)param_3;
  fStack_a0 = (float)param_6;
  fStack_9c = (float)((ulong)param_6 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar12._4_4_ = -(uint)(fVar14 < 0.0);
  auVar12._0_4_ = -(uint)(fVar13 < 0.0);
  auVar12._8_4_ = -(uint)(fStack_a0 < 0.0);
  auVar12._12_4_ = -(uint)(fStack_9c < 0.0);
  uVar11 = movmskps(unaff_EBX,auVar12);
  if ((POPCOUNT((byte)uVar11 & 7) & 1U) != 0) {
    fVar13 = fVar13 * __LC21;
    fVar14 = fVar14 * _UNK_001031a4;
    fStack_a0 = fStack_a0 * _UNK_001031a8;
  }
  fVar10 = (float)param_4;
  _local_98 = ZEXT416((uint)fVar13);
  local_78 = ZEXT416((uint)fStack_a0) << 0x40;
  fVar13 = (float)((ulong)param_4 >> 0x20);
  local_88 = ZEXT416((uint)fVar14) << 0x20;
  local_68 = __LC22;
  uStack_60 = _UNK_001031b8;
  fVar16 = fVar15 + fVar15;
  fVar19 = fVar10 * (fVar10 + fVar10);
  fVar18 = fVar17 + fVar17;
  lVar9 = 0;
  fVar14 = fVar13 * (fVar10 + fVar10);
  local_a8 = (float)param_1_00;
  fStack_a4 = (float)((ulong)param_1_00 >> 0x20);
  do {
    fVar3 = *(float *)(local_98 + lVar9);
    fVar4 = *(float *)(local_98 + lVar9 + 4);
    fVar5 = *(float *)(local_98 + lVar9 + 8);
    fVar6 = *(float *)(local_98 + lVar9 + 0xc);
    *(float *)((long)&local_58 + lVar9) =
         fVar6 * local_a8 +
         fVar3 * ((_LC4 - fVar17 * fVar18) - fVar19) + fVar4 * (fVar17 * fVar16 - fVar14) +
         fVar5 * (fVar10 * fVar16 + fVar18 * fVar13);
    *(float *)((long)&local_58 + lVar9 + 4) =
         fVar6 * fStack_a4 +
         fVar3 * (fVar17 * fVar16 + fVar14) + fVar4 * ((_LC4 - fVar19) - fVar15 * fVar16) +
         fVar5 * (fVar10 * fVar18 - fVar16 * fVar13);
    *(float *)((long)&uStack_50 + lVar9) =
         fVar6 * param_2_00 +
         fVar3 * (fVar10 * fVar16 - fVar18 * fVar13) + fVar4 * (fVar16 * fVar13 + fVar10 * fVar18) +
         fVar5 * ((_LC4 - fVar15 * fVar16) - fVar17 * fVar18);
    *(float *)((long)&uStack_50 + lVar9 + 4) = fVar6 * 1.0 + fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0
    ;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x40);
  bVar1 = _LC12 != *(float *)(param_1 + 0x34);
  bVar2 = *(float *)(param_1 + 0x34) <= _LC12;
  *param_2 = local_58;
  param_2[1] = uStack_50;
  uVar8 = (uint)(bVar2 && bVar1);
  *(uint *)(param_2 + 8) = uVar8;
  fVar13 = *(float *)(param_1 + 0x38);
  fVar14 = *(float *)(param_1 + 0x38);
  param_2[2] = local_48;
  param_2[3] = uStack_40;
  param_2[4] = local_38;
  param_2[5] = uStack_30;
  param_2[6] = local_28;
  param_2[7] = uStack_20;
  if (fVar14 <= fVar7 && fVar7 != fVar13) {
    *(uint *)(param_2 + 8) = uVar8 | 2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::TaperedCylinderShape::sRegister()::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x40);
  uVar1 = _LC24;
  *(undefined2 *)(puVar2 + 3) = 0x2000;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR__TaperedCylinderShape_00102fc0;
  puVar2[7] = 0;
  *(undefined1 (*) [16])(puVar2 + 5) = ZEXT416(uVar1);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda()#1}::_FUN(void)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x60);
  uVar1 = _LC24;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[8] = 0;
  *puVar2 = &PTR_GetRTTI_00102f58;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *(undefined1 (*) [16])(puVar2 + 9) = ZEXT416(uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool, bool) const */

void JPH::TaperedCylinderShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,char param_7,undefined1 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  undefined4 uVar20;
  long lVar21;
  long *plVar22;
  long in_FS_OFFSET;
  undefined1 auVar23 [16];
  float fVar24;
  float local_b8;
  float fStack_b4;
  float local_a8 [16];
  undefined1 local_68 [4];
  float afStack_64 [3];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  fVar24 = (float)param_2_00;
  local_b8 = (float)param_1_00;
  fStack_b4 = (float)((ulong)param_1_00 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  auVar23._4_4_ = -(uint)(fStack_b4 < 0.0);
  auVar23._0_4_ = -(uint)(local_b8 < 0.0);
  auVar23._8_4_ = -(uint)(fVar24 < 0.0);
  auVar23._12_4_ = -(uint)((float)((ulong)param_2_00 >> 0x20) < 0.0);
  uVar20 = movmskps(0,auVar23);
  if ((POPCOUNT((byte)uVar20 & 7) & 1U) != 0) {
    local_b8 = local_b8 * __LC21;
    fStack_b4 = fStack_b4 * _UNK_001031a4;
    fVar24 = fVar24 * _UNK_001031a8;
  }
  fVar1 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  fVar5 = param_5[4];
  fVar6 = param_5[5];
  fVar7 = param_5[6];
  fVar8 = param_5[7];
  lVar21 = 0;
  fVar9 = param_5[8];
  fVar10 = param_5[9];
  fVar11 = param_5[10];
  fVar12 = param_5[0xb];
  fVar13 = param_5[0xc];
  fVar14 = param_5[0xd];
  fVar15 = param_5[0xe];
  fVar16 = param_5[0xf];
  _local_68 = ZEXT416((uint)local_b8);
  local_48 = ZEXT416((uint)fVar24) << 0x40;
  local_58 = ZEXT416((uint)fStack_b4) << 0x20;
  local_38 = __LC22;
  uStack_30 = _UNK_001031b8;
  do {
    fVar24 = *(float *)(local_68 + lVar21);
    fVar17 = *(float *)(local_68 + lVar21 + 4);
    fVar18 = *(float *)(local_68 + lVar21 + 8);
    fVar19 = *(float *)(local_68 + lVar21 + 0xc);
    *(float *)((long)local_a8 + lVar21) =
         fVar19 * fVar13 + fVar24 * fVar1 + fVar17 * fVar5 + fVar18 * fVar9;
    *(float *)((long)local_a8 + lVar21 + 4) =
         fVar19 * fVar14 + fVar24 * fVar2 + fVar17 * fVar6 + fVar18 * fVar10;
    *(float *)((long)local_a8 + lVar21 + 8) =
         fVar19 * fVar15 + fVar24 * fVar3 + fVar17 * fVar7 + fVar18 * fVar11;
    *(float *)((long)local_a8 + lVar21 + 0xc) =
         fVar19 * fVar16 + fVar24 * fVar4 + fVar17 * fVar8 + fVar18 * fVar12;
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x40);
  if (param_7 != '\0') {
    plVar22 = *(long **)(param_1 + 0x20);
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      plVar22 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar22 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar22 + 0x28))();
    }
  }
  JPH::DebugRenderer::DrawTaperedCylinder(param_2,local_a8,param_6,0,param_8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::TaperedCylinderShape::GetSupportFunction(JPH::ConvexShape::ESupportMode,
   JPH::ConvexShape::SupportBuffer&, JPH::Vec3) const */

undefined8 *
JPH::TaperedCylinderShape::GetSupportFunction
          (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (float)param_1;
  fStack_14 = (float)((ulong)param_1 >> 0x20);
  fStack_10 = (float)param_2;
  fStack_c = (float)((ulong)param_2 >> 0x20);
  auVar4._0_4_ = 0.0 - local_18;
  auVar4._4_4_ = 0.0 - fStack_14;
  auVar4._8_4_ = 0.0 - fStack_10;
  auVar4._12_4_ = 0.0 - fStack_c;
  auVar5._8_4_ = fStack_10;
  auVar5._0_8_ = param_1;
  auVar5._12_4_ = fStack_c;
  auVar5 = maxps(auVar4,auVar5);
  fVar2 = auVar5._0_4_;
  fVar6 = *(float *)(param_3 + 0x2c) * fStack_14;
  fVar7 = *(float *)(param_3 + 0x30) * fStack_14;
  fVar3 = fVar2;
  if (auVar5._4_4_ <= fVar2) {
    fVar3 = auVar5._4_4_;
  }
  fVar8 = *(float *)(param_3 + 0x34);
  fVar9 = *(float *)(param_3 + 0x38);
  if (fVar6 < fVar7) {
    fVar6 = *(float *)(param_3 + 0x30) * fStack_14;
    fVar7 = *(float *)(param_3 + 0x2c) * fStack_14;
    fVar8 = *(float *)(param_3 + 0x38);
    fVar9 = *(float *)(param_3 + 0x34);
  }
  if (param_4 == 0) {
    fVar3 = fVar3 * *(float *)(param_3 + 0x3c);
    *param_5 = &PTR__TaperedCylinder_00102f90;
    *(float *)(param_5 + 3) = fVar3;
    *(float *)(param_5 + 1) = fVar6 - fVar3;
    *(float *)((long)param_5 + 0xc) = fVar3 + fVar7;
    *(float *)(param_5 + 2) = fVar8 * fVar2 - fVar3;
    *(float *)((long)param_5 + 0x14) = fVar9 * fVar2 - fVar3;
    puVar1 = param_5;
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_4 - 1U < 2) {
      *(undefined4 *)(param_5 + 3) = 0;
      *param_5 = &PTR__TaperedCylinder_00102f90;
      *(float *)(param_5 + 1) = fVar6;
      *(float *)((long)param_5 + 0xc) = fVar7;
      *(float *)(param_5 + 2) = fVar8 * fVar2;
      *(float *)((long)param_5 + 0x14) = fVar9 * fVar2;
      puVar1 = param_5;
    }
  }
  return puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::TaperedCylinderShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,float *param_4,long *param_5,
               int param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined1 auVar23 [8];
  float fVar24;
  undefined1 auVar25 [12];
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar35;
  float fVar37;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_88;
  
  fStack_100 = (float)param_2;
  fStack_fc = (float)((ulong)param_2 >> 0x20);
  fVar3 = *param_4;
  fVar4 = param_4[1];
  local_108 = (float)param_1_00;
  fStack_104 = (float)((ulong)param_1_00 >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_4 + 4);
  fVar37 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20);
  fVar5 = param_4[2];
  fVar2 = param_4[6];
  fVar24 = (float)*(undefined8 *)(param_4 + 8);
  fVar31 = (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20);
  fVar6 = param_4[10];
  fVar7 = param_4[0xc];
  fVar8 = param_4[0xd];
  fVar9 = param_4[0xe];
  auVar28._0_4_ = 0.0 - local_108;
  auVar28._4_4_ = 0.0 - fStack_104;
  auVar28._8_4_ = 0.0 - fStack_100;
  auVar28._12_4_ = 0.0 - fStack_fc;
  auVar26._8_4_ = fStack_100;
  auVar26._0_8_ = param_1_00;
  auVar26._12_4_ = fStack_fc;
  auVar26 = maxps(auVar28,auVar26);
  fVar54 = *(float *)(param_1 + 0x2c) * fStack_104;
  fStack_104 = fStack_104 * *(float *)(param_1 + 0x30);
  fVar45 = *(float *)(param_1 + 0x34) * auVar26._0_4_;
  local_88 = auVar26._0_4_ * *(float *)(param_1 + 0x38);
  fVar55 = fVar54;
  local_108 = fVar45;
  if (fVar54 < fStack_104) {
    fVar55 = fStack_104;
    fStack_104 = fVar54;
    local_108 = local_88;
    local_88 = fVar45;
  }
  lVar13 = param_5[1];
  pfVar20 = (float *)param_5[2];
  lVar14 = param_5[3];
  pfVar21 = (float *)param_5[4];
  auVar11._4_8_ = 0;
  auVar11._0_4_ = fVar55;
  lVar15 = param_5[5];
  pfVar19 = (float *)param_5[6];
  pfVar18 = (float *)*param_5;
  lVar16 = param_5[7];
  auVar12._4_8_ = 0;
  auVar12._0_4_ = fStack_104;
  puVar22 = (undefined4 *)param_5[8];
  lVar17 = param_5[9];
  pfVar1 = (float *)((long)pfVar18 + (long)(param_6 * (int)lVar13));
  do {
    if (pfVar1 == pfVar18) {
      return;
    }
    if (0.0 < *pfVar20) {
      fVar45 = *pfVar18;
      fVar54 = pfVar18[1];
      fVar41 = pfVar18[2];
      fVar38 = fVar45 * fVar3 + fVar54 * fVar4 + fVar41 * fVar5 +
               (0.0 - (fVar7 * fVar3 + fVar8 * fVar4 + fVar9 * fVar5));
      fVar40 = fVar45 * fVar35 + fVar54 * fVar37 + fVar41 * fVar2 +
               (0.0 - (fVar7 * fVar35 + fVar8 * fVar37 + fVar9 * fVar2));
      fVar42 = fVar45 * fVar24 + fVar54 * fVar31 + fVar41 * fVar6 +
               (0.0 - (fVar7 * fVar24 + fVar8 * fVar31 + fVar9 * fVar6));
      fVar54 = fVar45 * 0.0 + fVar54 * 0.0 + fVar41 * 0.0 + 1.0;
      auVar32._0_4_ = __LC9 * fVar38;
      auVar32._4_4_ = _UNK_00103184 * fVar40;
      auVar32._8_4_ = _UNK_00103188 * fVar42;
      auVar32._12_4_ = _UNK_0010318c * fVar54;
      fVar45 = auVar32._8_4_ * auVar32._8_4_ +
               auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_ + 0.0;
      if (_LC10 < fVar45) {
        auVar29._0_4_ = SQRT(fVar45);
        auVar29._4_4_ = auVar29._0_4_;
        auVar29._8_4_ = auVar29._0_4_;
        auVar29._12_4_ = auVar29._0_4_;
        auVar26 = divps(auVar32,auVar29);
        fVar41 = auVar26._8_4_ * auVar26._8_4_;
        fVar45 = auVar26._0_4_ * auVar26._0_4_ + 0.0;
      }
      else {
        fVar41 = 0.0;
        auVar26 = ZEXT416((uint)_LC4);
        fVar45 = _LC4;
      }
      fVar43 = (local_88 - local_108) / (fVar55 - fStack_104);
      fVar44 = auVar26._0_4_;
      fVar34 = auVar26._4_4_;
      fVar36 = auVar26._8_4_;
      auVar27._4_4_ = fVar43;
      auVar27._0_4_ = fVar44;
      auVar27._8_4_ = fVar36;
      auVar27._12_4_ = fVar36;
      auVar46._0_4_ = SQRT(fVar41 + fVar43 * fVar43 + fVar45);
      auVar46._4_4_ = auVar46._0_4_;
      auVar46._8_4_ = auVar46._0_4_;
      auVar46._12_4_ = auVar46._0_4_;
      auVar28 = divps(auVar27,auVar46);
      local_118._4_4_ = auVar28._4_4_;
      fVar41 = (float)local_118._4_4_;
      local_118._0_4_ = auVar28._0_4_;
      fVar45 = (float)local_118._0_4_;
      auVar25._0_4_ = local_108 * fVar44 + 0.0;
      auVar25._4_4_ = local_108 * fVar34 + fVar55;
      auVar25._8_4_ = local_108 * fVar36 + 0.0;
      uStack_110._0_4_ = auVar28._8_4_;
      fVar43 = (auVar25._8_4_ - fVar42) * (float)uStack_110 +
               (auVar25._4_4_ - fVar40) * (float)local_118._4_4_ +
               (auVar25._0_4_ - fVar38) * (float)local_118._0_4_ + 0.0;
      fVar52 = fVar55 - fVar40;
      fVar53 = fVar40 - fStack_104;
      local_118 = auVar28._0_8_;
      auVar23 = local_118;
      if (fVar53 < fVar52) {
        if ((fVar43 < 0.0) || (fVar53 < 0.0)) goto LAB_00101688;
        if (fVar53 <= fVar43) {
LAB_00101978:
          uStack_110._0_4_ = 0.0;
          auVar23 = (undefined1  [8])0xbf80000000000000;
          fVar45 = 0.0;
          auVar25 = auVar12 << 0x20;
          fVar41 = _LC17;
        }
      }
      else if ((fVar43 < 0.0) || (fVar52 < 0.0)) {
LAB_00101688:
        fVar43 = local_88 * fVar44 + 0.0;
        fVar48 = local_88 * fVar34 + fStack_104;
        fVar50 = local_88 * fVar36 + 0.0;
        fVar57 = fVar38 - fVar43;
        fVar58 = fVar40 - fVar48;
        fVar59 = fVar42 - fVar50;
        fVar47 = auVar25._0_4_ - fVar43;
        fVar49 = auVar25._4_4_ - fVar48;
        fVar51 = auVar25._8_4_ - fVar50;
        fVar56 = fVar59 * fVar51 + fVar58 * fVar49 + fVar57 * fVar47 + 0.0;
        fVar44 = fVar36 * fVar42 + fVar34 * fVar40 + fVar44 * fVar38 + 0.0;
        if (fVar56 < fVar51 * fVar51 + fVar49 * fVar49 + fVar47 * fVar47 + 0.0) {
          if (0.0 <= fVar56) {
            if (0.0 <= fVar52) goto LAB_00101796;
            if (fVar44 <= local_108) goto LAB_00101a86;
            if (0.0 <= fVar53) goto LAB_001017f3;
LAB_00101a63:
            if (fVar44 <= local_88) {
LAB_0010194f:
              uStack_110._0_4_ = 0.0;
              auVar23 = (undefined1  [8])0xbf80000000000000;
              fVar45 = 0.0;
              auVar25 = auVar12 << 0x20;
              fVar41 = _LC17;
            }
          }
          else if (local_88 < fVar44) {
            fVar45 = fVar59 * fVar59 + fVar58 * fVar58 + fVar57 * fVar57 + 0.0;
            if (_LC10 < fVar45) {
              auVar30._0_4_ = SQRT(fVar45);
              auVar10._4_4_ = fVar58;
              auVar10._0_4_ = fVar57;
              auVar10._8_4_ = fVar59;
              auVar10._12_4_ = fVar54 - (local_88 * auVar26._12_4_ + 0.0);
              auVar30._4_4_ = auVar30._0_4_;
              auVar30._8_4_ = auVar30._0_4_;
              auVar30._12_4_ = auVar30._0_4_;
              auVar26 = divps(auVar10,auVar30);
              _local_118 = auVar26._0_12_;
            }
            else {
              uStack_110 = _UNK_00103168;
              local_118 = (undefined1  [8])__LC6;
            }
            fVar41 = (float)local_118._4_4_;
            auVar23 = local_118;
            auVar25._4_4_ = fVar48;
            auVar25._0_4_ = fVar43;
            auVar25._8_4_ = fVar50;
            fVar45 = (float)local_118._0_4_;
          }
          else if ((0.0 <= fVar52) || (local_108 < fVar44)) {
            if (fVar53 < 0.0) goto LAB_0010194f;
          }
          else {
LAB_00101a86:
            uStack_110._0_4_ = 0.0;
            auVar23 = (undefined1  [8])0x3f80000000000000;
            fVar45 = 0.0;
            auVar25 = auVar11 << 0x20;
            fVar41 = _LC4;
          }
        }
        else if (local_108 < fVar44) {
          fVar45 = fVar38 - auVar25._0_4_;
          fVar41 = fVar40 - auVar25._4_4_;
          auVar33._4_4_ = fVar41;
          auVar33._0_4_ = fVar45;
          fVar44 = fVar42 - auVar25._8_4_;
          auVar33._8_4_ = fVar44;
          auVar33._12_4_ = fVar54 - (local_108 * auVar26._12_4_ + 0.0);
          fVar45 = fVar44 * fVar44 + fVar41 * fVar41 + fVar45 * fVar45 + 0.0;
          if (_LC10 < fVar45) {
            auVar39._0_4_ = SQRT(fVar45);
            auVar39._4_4_ = auVar39._0_4_;
            auVar39._8_4_ = auVar39._0_4_;
            auVar39._12_4_ = auVar39._0_4_;
            auVar26 = divps(auVar33,auVar39);
            _local_118 = auVar26._0_12_;
          }
          else {
            uStack_110 = _UNK_00103168;
            local_118 = (undefined1  [8])__LC6;
          }
          fVar41 = (float)local_118._4_4_;
          auVar23 = local_118;
          fVar45 = (float)local_118._0_4_;
        }
        else {
          if (fVar52 < 0.0) goto LAB_00101a86;
LAB_00101796:
          if (fVar53 < 0.0) goto LAB_00101a63;
        }
      }
      else if (fVar52 <= fVar43) {
        if (fVar53 <= fVar52) goto LAB_00101978;
        uStack_110._0_4_ = 0.0;
        auVar23 = (undefined1  [8])0x3f80000000000000;
        fVar45 = 0.0;
        auVar25 = auVar11 << 0x20;
        fVar41 = _LC4;
      }
LAB_001017f3:
      fVar54 = auVar25._8_4_ * (float)uStack_110 +
               auVar25._4_4_ * (float)((ulong)auVar23 >> 0x20) +
               auVar25._0_4_ * SUB84(auVar23,0) + 0.0;
      fVar38 = (float)((uint)((fVar42 * (float)uStack_110 + fVar40 * fVar41 + fVar38 * fVar45 + 0.0)
                             - fVar54) ^ __LC1);
      if (*pfVar19 < fVar38) {
        *pfVar19 = fVar38;
        fVar54 = (float)((uint)fVar54 ^ __LC1);
        fVar38 = param_4[0xc];
        fVar40 = (float)uStack_110 * param_4[8] + fVar41 * param_4[4] + fVar45 * *param_4;
        fVar42 = (float)uStack_110 * param_4[9] + fVar41 * param_4[5] + fVar45 * param_4[1];
        fVar44 = (float)uStack_110 * param_4[10] + fVar41 * param_4[6] + fVar45 * param_4[2];
        fVar45 = param_4[0xd];
        fVar41 = param_4[0xe];
        *pfVar21 = fVar40;
        pfVar21[1] = fVar42;
        pfVar21[2] = fVar44;
        pfVar21[3] = fVar54 - (fVar44 * fVar41 + fVar42 * fVar45 + fVar38 * fVar40 + 0.0);
        *puVar22 = param_7;
      }
    }
    pfVar18 = (float *)((long)pfVar18 + (long)(int)lVar13);
    puVar22 = (undefined4 *)((long)puVar22 + (long)(int)lVar17);
    pfVar19 = (float *)((long)pfVar19 + (long)(int)lVar16);
    pfVar21 = (float *)((long)pfVar21 + (long)(int)lVar15);
    pfVar20 = (float *)((long)pfVar20 + (long)(int)lVar14);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetMassProperties() const */

void JPH::TaperedCylinderShape::GetMassProperties(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  long in_RSI;
  float *in_RDI;
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
  
  fVar1 = *(float *)(in_RSI + 0x34);
  fVar2 = *(float *)(in_RSI + 0x38);
  fVar3 = *(float *)(in_RSI + 0x2c);
  fVar4 = *(float *)(in_RSI + 0x30);
  fVar6 = *(float *)(in_RSI + 0x28);
  fVar12 = fVar1 * fVar1;
  fVar13 = fVar2 * fVar2;
  fVar11 = fVar4 * fVar4;
  fVar15 = fVar3 * fVar3;
  fVar16 = fVar11 * fVar4;
  fVar7 = fVar15 * fVar3;
  *in_RDI = (fVar1 * fVar2 + fVar12 + fVar13) * _LC2 * (fVar3 - fVar4) * fVar6;
  fVar14 = fVar6 * __LC28;
  fVar6 = (fVar2 * fVar13 * fVar1 + fVar13 * fVar13 + fVar12 * fVar13 + fVar1 * fVar12 * fVar2 +
          fVar12 * fVar12) * (fVar3 - fVar4) * _LC25 * fVar6;
  fVar17 = fVar11 * _LC26;
  fVar19 = fVar16 * _LC27;
  fVar10 = fVar4 * _LC26;
  fVar18 = fVar7 * _LC26;
  fVar8 = fVar7 * _LC27;
  fVar20 = fVar16 * _LC26;
  fVar9 = _LC20 * fVar6;
  *(undefined1 (*) [16])(in_RDI + 8) = ZEXT416((uint)fVar6) << 0x20;
  uVar5 = _UNK_001031b8;
  *(undefined8 *)(in_RDI + 0x10) = __LC22;
  *(undefined8 *)(in_RDI + 0x12) = uVar5;
  fVar9 = fVar14 * ((((fVar8 - fVar10 * fVar15) - (fVar11 + fVar11) * fVar3) - fVar16) * fVar12 +
                   fVar13 * (((fVar4 + fVar4) * fVar15 + fVar7 + fVar17 * fVar3) - fVar19) +
                   fVar1 * (((fVar18 + fVar15 * fVar4) - fVar11 * fVar3) - fVar20) * fVar2) + fVar9;
  *(undefined1 (*) [16])(in_RDI + 4) = ZEXT416((uint)fVar9);
  *(undefined1 (*) [16])(in_RDI + 0xc) = ZEXT416((uint)fVar9) << 0x40;
  return;
}



/* JPH::TaperedCylinderShapeSettings::GetRTTI() const */

undefined1 * JPH::TaperedCylinderShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti,
                      "TaperedCylinderShapeSettings",0x60,
                      GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(code **)param_1 = __cxa_guard_acquire;
    plVar2 = *(long **)((long)param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
        }
        else {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
    }
    *(code **)param_1 = JPH::RTTI::RTTI;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar2 = *(long **)((long)param_1 + 0x18);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
    }
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x00101e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::TaperedCylinderShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(TaperedCylinderShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti,
                      "TaperedCylinderShapeSettings",0x60,
                      GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::{lambda(void*)#1}::_FUN,
                      TaperedCylinderShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TaperedCylinderShapeSettings*)::rtti;
}



/* JPH::TaperedCylinderShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::TaperedCylinderShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((TaperedCylinderShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::TaperedCylinderShapeSettings::TaperedCylinderShapeSettings(float, float, float, float,
   JPH::PhysicsMaterial const*) */

void __thiscall
JPH::TaperedCylinderShapeSettings::TaperedCylinderShapeSettings
          (TaperedCylinderShapeSettings *this,float param_1,float param_2,float param_3,
          float param_4,PhysicsMaterial *param_5)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x38] = (TaperedCylinderShapeSettings)0x0;
  *(code **)this = __cxa_guard_acquire;
  *(PhysicsMaterial **)(this + 0x40) = param_5;
  if (param_5 != (PhysicsMaterial *)0x0) {
    LOCK();
    *(int *)(param_5 + 8) = *(int *)(param_5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x48) = 0x447a0000;
  *(undefined ***)this = &PTR_GetRTTI_00102f58;
  *(float *)(this + 0x4c) = param_1;
  *(float *)(this + 0x50) = param_2;
  *(float *)(this + 0x54) = param_3;
  *(float *)(this + 0x58) = param_4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::sRegister() */

void JPH::TaperedCylinderShape::sRegister(void)

{
  _DAT_001042a8 = sRegister()::{lambda()#1}::_FUN;
  _DAT_001042b0 = (undefined4)Color::sGreen;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::TaperedCylinderShape(JPH::TaperedCylinderShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::TaperedCylinderShape::TaperedCylinderShape
          (TaperedCylinderShape *this,TaperedCylinderShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined2 *)(this + 0x18) = 0x2000;
  *(undefined **)this = &ShapeSettings::vtable;
  lVar7 = *(long *)(param_1 + 0x40);
  *(long *)(this + 0x20) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined ***)this = &PTR__TaperedCylinderShape_00102fc0;
  *(undefined4 *)(this + 0x28) = uVar2;
  fVar9 = *(float *)(param_1 + 0x50);
  fVar3 = *(float *)(param_1 + 0x54);
  fVar4 = *(float *)(param_1 + 0x58);
  *(float *)(this + 0x34) = fVar9;
  *(float *)(this + 0x38) = fVar3;
  *(float *)(this + 0x3c) = fVar4;
  if (fVar9 < 0.0) {
    Result<JPH::Ref<JPH::Shape>>::SetError
              ((Result<JPH::Ref<JPH::Shape>> *)param_2,"Invalid top radius");
    return;
  }
  if (fVar3 < 0.0) {
    Result<JPH::Ref<JPH::Shape>>::SetError
              ((Result<JPH::Ref<JPH::Shape>> *)param_2,"Invalid bottom radius");
    return;
  }
  fVar5 = *(float *)(param_1 + 0x4c);
  if (0.0 < fVar5) {
    if (fVar4 < 0.0) {
      Result<JPH::Ref<JPH::Shape>>::SetError
                ((Result<JPH::Ref<JPH::Shape>> *)param_2,"Invalid convex radius");
      return;
    }
    if (fVar4 <= fVar9) {
      if (fVar4 <= fVar3) {
        fVar9 = (((fVar3 + fVar3) * fVar9 + _LC26 * fVar9 * fVar9 + fVar3 * fVar3) * (fVar5 + fVar5)
                ) / ((fVar9 * fVar3 + fVar9 * fVar9 + fVar3 * fVar3) * __LC38);
        *(ulong *)(this + 0x2c) = CONCAT44((uint)fVar9 ^ __LC1,(fVar5 + fVar5) - fVar9);
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
        if (param_2[0x20] == (Result)0x1) {
          plVar8 = *(long **)param_2;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
          (*Free)();
        }
        *(TaperedCylinderShape **)param_2 = this;
        param_2[0x20] = (Result)0x1;
        return;
      }
      Result<JPH::Ref<JPH::Shape>>::SetError
                ((Result<JPH::Ref<JPH::Shape>> *)param_2,
                 "Convex radius must be smaller than bottom radius");
      return;
    }
    Result<JPH::Ref<JPH::Shape>>::SetError
              ((Result<JPH::Ref<JPH::Shape>> *)param_2,
               "Convex radius must be smaller than convex radius");
    return;
  }
  Result<JPH::Ref<JPH::Shape>>::SetError((Result<JPH::Ref<JPH::Shape>> *)param_2,"Invalid height");
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCylinderShapeSettings::Create() const */

void JPH::TaperedCylinderShapeSettings::Create(void)

{
  float fVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  TaperedCylinderShapeSettings TVar3;
  TaperedCylinderShape *this;
  CylinderShape *this_00;
  long *plVar4;
  TaperedCylinderShapeSettings *in_RSI;
  long *in_RDI;
  long in_FS_OFFSET;
  code *local_78;
  undefined4 local_70;
  undefined8 local_68;
  long *local_60;
  long local_50 [2];
  char local_40;
  long *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  TVar3 = in_RSI[0x38];
  if (TVar3 == (TaperedCylinderShapeSettings)0x0) {
    fVar1 = *(float *)(in_RSI + 0x50);
    if (fVar1 == *(float *)(in_RSI + 0x54)) {
      local_2c = *(undefined4 *)(in_RSI + 0x4c);
      local_70 = 0;
      local_78 = std::__throw_length_error;
      plVar4 = *(long **)(in_RSI + 0x40);
      local_68 = 0;
      local_40 = '\0';
      local_38 = (long *)0x0;
      local_30 = 0x447a0000;
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_38 = plVar4;
      }
      local_24 = *(undefined4 *)(in_RSI + 0x58);
      local_28 = fVar1;
      this_00 = (CylinderShape *)(*Allocate)(0x38);
      JPH::CylinderShape::CylinderShape
                (this_00,(CylinderShapeSettings *)&local_78,(Result *)(in_RSI + 0x18));
      local_78 = __cxa_guard_acquire;
      if (local_38 != (long *)0x0) {
        LOCK();
        plVar4 = local_38 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          if (*(code **)(*local_38 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
            (*Free)();
          }
          else {
            (**(code **)(*local_38 + 0x18))();
          }
        }
      }
      local_78 = JPH::RTTI::RTTI;
      if (local_40 == '\x01') {
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar4 = local_60 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)(*local_60 + 8))();
          }
        }
      }
      else if ((local_40 == '\x02') && (local_60 != local_50)) {
        (*Free)();
      }
    }
    else {
      this = (TaperedCylinderShape *)(*Allocate)(0x40);
      TaperedCylinderShape::TaperedCylinderShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    }
    TVar3 = in_RSI[0x38];
  }
  *(TaperedCylinderShapeSettings *)(in_RDI + 4) = TVar3;
  if (TVar3 == (TaperedCylinderShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    goto LAB_00102284;
  }
  if (TVar3 != (TaperedCylinderShapeSettings)0x2) goto LAB_00102284;
  plVar4 = in_RDI + 2;
  *in_RDI = (long)plVar4;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
    }
    else if (__n != 0) goto LAB_00102406;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar4 = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)plVar4;
LAB_00102406:
    memcpy(plVar4,__src,__n);
    plVar4 = (long *)*in_RDI;
  }
  in_RDI[1] = __n;
  *(undefined1 *)((long)plVar4 + __n) = 0;
LAB_00102284:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
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



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::ConvexShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::ConvexShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::ConvexShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::TaperedCylinderShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::TaperedCylinderShape::GetCenterOfMass(TaperedCylinderShape *this)

{
  return ZEXT416((uint)((*(float *)(this + 0x2c) + *(float *)(this + 0x30)) * __LC0)) << 0x20;
}



/* JPH::TaperedCylinderShape::GetInnerRadius() const */

float __thiscall JPH::TaperedCylinderShape::GetInnerRadius(TaperedCylinderShape *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x38);
  if (*(float *)(this + 0x34) <= *(float *)(this + 0x38)) {
    fVar1 = *(float *)(this + 0x34);
  }
  return fVar1;
}



/* JPH::TaperedCylinderShape::GetStats() const */

undefined1  [16] JPH::TaperedCylinderShape::GetStats(void)

{
  return ZEXT816(0x40);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::TaperedCylinderShape::TaperedCylinder::GetConvexRadius() const */

undefined4 __thiscall
JPH::TaperedCylinderShape::TaperedCylinder::GetConvexRadius(TaperedCylinder *this)

{
  return *(undefined4 *)(this + 0x18);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001026a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder() */

void __thiscall JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder(TaperedCylinder *this)

{
  return;
}



/* JPH::TaperedCylinderShape::TaperedCylinder::GetSupport(JPH::Vec3) const */

undefined1  [16]
JPH::TaperedCylinderShape::TaperedCylinder::GetSupport
          (undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 local_18 [16];
  
  fVar2 = (float)((ulong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  local_18._8_4_ = SQRT(param_2 * param_2 + fVar1 * fVar1);
  if ((float)local_18._8_4_ <= 0.0) {
    if (0.0 < fVar2) {
      return ZEXT416(*(uint *)(param_3 + 8)) << 0x20;
    }
    return ZEXT416(*(uint *)(param_3 + 0xc)) << 0x20;
  }
  local_18._0_4_ = (*(float *)(param_3 + 0x10) * fVar1) / (float)local_18._8_4_;
  fVar3 = (*(float *)(param_3 + 0x14) * fVar1) / (float)local_18._8_4_;
  local_18._12_4_ = (*(float *)(param_3 + 0x14) * param_2) / (float)local_18._8_4_;
  local_18._8_4_ = (*(float *)(param_3 + 0x10) * param_2) / (float)local_18._8_4_;
  if (param_2 * (float)local_18._8_4_ +
      *(float *)(param_3 + 8) * fVar2 + (float)local_18._0_4_ * fVar1 + 0.0 <=
      (float)local_18._12_4_ * param_2 + fVar1 * fVar3 + 0.0 + fVar2 * *(float *)(param_3 + 0xc)) {
    local_18._4_4_ = *(float *)(param_3 + 0xc);
    local_18._0_4_ = fVar3;
    local_18._8_4_ = local_18._12_4_;
    return local_18;
  }
  local_18._4_4_ = *(float *)(param_3 + 8);
  local_18._12_4_ = local_18._8_4_;
  return local_18;
}



/* JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder() */

void __thiscall JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder(TaperedCylinder *this)

{
  operator_delete(this,0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  if (*(code **)(*param_4 + 0x20) == TaperedCylinderShape::GetLocalBounds) {
    local_58 = *(float *)(param_4 + 7);
    if (*(float *)(param_4 + 7) <= *(float *)((long)param_4 + 0x34)) {
      local_58 = *(float *)((long)param_4 + 0x34);
    }
    fStack_54 = *(float *)((long)param_4 + 0x2c);
    local_68 = (float)((uint)local_58 ^ __LC1);
    fStack_64 = *(float *)(param_4 + 6);
    fStack_50 = local_58;
    fStack_4c = local_58;
    fStack_60 = local_68;
    fStack_5c = local_68;
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



/* JPH::TaperedCylinderShape::~TaperedCylinderShape() */

void __thiscall JPH::TaperedCylinderShape::~TaperedCylinderShape(TaperedCylinderShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x00102973. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00102980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::TaperedCylinderShape::~TaperedCylinderShape() */

void __thiscall JPH::TaperedCylinderShape::~TaperedCylinderShape(TaperedCylinderShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
                    /* WARNING: Could not recover jumptable at 0x001029dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001029b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings() */

void __thiscall
JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings(TaperedCylinderShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (TaperedCylinderShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00102a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (TaperedCylinderShapeSettings)0x2) &&
          (*(TaperedCylinderShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings() */

void __thiscall
JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings(TaperedCylinderShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (TaperedCylinderShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x38] == (TaperedCylinderShapeSettings)0x2) &&
          (*(TaperedCylinderShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::Shape> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::Shape>>::SetError(Result<JPH::Ref<JPH::Shape>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::Shape>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::Shape>>)0x1) {
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::Shape>>)0x2) &&
          (*(Result<JPH::Ref<JPH::Shape>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::Shape>>)0x0;
  *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::Shape>>)*param_1;
      goto LAB_00102c64;
    }
    if (__n == 0) goto LAB_00102c64;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::Shape>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::Shape>> **)this;
LAB_00102c64:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::Shape>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::Shape>>)0x2;
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::GetRTTIOfType(JPH::TaperedCylinderShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC40;
  }
  cTaperedCylinderFace._0_8_ = __LC41;
  cTaperedCylinderFace._8_8_ = _UNK_001031d8;
  cTaperedCylinderFace._16_8_ = __LC42;
  cTaperedCylinderFace._24_8_ = _UNK_001031e8;
  cTaperedCylinderFace._32_16_ = ZEXT416(_LC4);
  cTaperedCylinderFace._48_8_ = __LC43;
  cTaperedCylinderFace._56_8_ = _UNK_001031f8;
  cTaperedCylinderFace._64_8_ = __LC44;
  cTaperedCylinderFace._72_8_ = _UNK_00103208;
  cTaperedCylinderFace._80_8_ = __LC45;
  cTaperedCylinderFace._88_8_ = _UNK_00103218;
  cTaperedCylinderFace._96_16_ = ZEXT416(_LC46);
  cTaperedCylinderFace._112_8_ = __LC47;
  cTaperedCylinderFace._120_8_ = _UNK_00103238;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings() */

void __thiscall
JPH::TaperedCylinderShapeSettings::~TaperedCylinderShapeSettings(TaperedCylinderShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCylinderShape::~TaperedCylinderShape() */

void __thiscall JPH::TaperedCylinderShape::~TaperedCylinderShape(TaperedCylinderShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder() */

void __thiscall JPH::TaperedCylinderShape::TaperedCylinder::~TaperedCylinder(TaperedCylinder *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



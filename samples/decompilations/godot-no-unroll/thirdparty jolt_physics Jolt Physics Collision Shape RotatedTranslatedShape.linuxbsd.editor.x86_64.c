
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::RotatedTranslatedShape::CollideSoftBodyVertices(long param_1,float *param_2)

{
  code *pcVar1;
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
  long lVar18;
  float fVar19;
  float fVar20;
  long in_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(**(long **)(param_1 + 0x20) + 0xb0);
  fVar16 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar19 = (float)*(undefined8 *)(param_1 + 0x48);
  lVar18 = 0;
  fVar22 = fVar16 + fVar16;
  fVar23 = fVar17 + fVar17;
  fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar24 = fVar19 * (fVar19 + fVar19);
  fVar21 = (fVar19 + fVar19) * fVar20;
  local_98 = (_LC0 - fVar17 * fVar23) - fVar24;
  register0x000012c4 = fVar17 * fVar22 + fVar21;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  register0x000012c8 = fVar19 * fVar22 - fVar23 * fVar20;
  register0x000012cc = 0;
  local_88._4_4_ = (_LC0 - fVar24) - fVar16 * fVar22;
  local_88._0_4_ = fVar17 * fVar22 - fVar21;
  fVar21 = param_2[0xc];
  fVar24 = param_2[0xd];
  fVar6 = param_2[0xe];
  fVar7 = param_2[0xf];
  local_88._8_4_ = fVar22 * fVar20 + fVar19 * fVar23;
  local_88._12_4_ = 0;
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar10 = param_2[6];
  fVar11 = param_2[7];
  fVar12 = param_2[8];
  fVar13 = param_2[9];
  fVar14 = param_2[10];
  fVar15 = param_2[0xb];
  local_78._4_4_ = fVar19 * fVar23 - fVar22 * fVar20;
  local_78._0_4_ = fVar19 * fVar22 + fVar23 * fVar20;
  local_78._8_4_ = (_LC0 - fVar16 * fVar22) - fVar17 * fVar23;
  local_78._12_4_ = 0;
  local_68 = __LC2;
  uStack_60 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar16 = *(float *)(local_98 + lVar18);
    fVar17 = *(float *)(local_98 + lVar18 + 4);
    fVar19 = *(float *)(local_98 + lVar18 + 8);
    fVar20 = *(float *)(local_98 + lVar18 + 0xc);
    *(float *)((long)local_58 + lVar18) =
         fVar20 * fVar21 + fVar16 * fVar2 + fVar17 * fVar8 + fVar19 * fVar12;
    *(float *)((long)local_58 + lVar18 + 4) =
         fVar20 * fVar24 + fVar16 * fVar3 + fVar17 * fVar9 + fVar19 * fVar13;
    *(float *)((long)local_58 + lVar18 + 8) =
         fVar20 * fVar6 + fVar16 * fVar4 + fVar17 * fVar10 + fVar19 * fVar14;
    *(float *)((long)local_58 + lVar18 + 0xc) =
         fVar20 * fVar7 + fVar16 * fVar5 + fVar17 * fVar11 + fVar19 * fVar15;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x40);
  (*pcVar1)();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void __thiscall
JPH::RotatedTranslatedShape::TransformShape
          (RotatedTranslatedShape *this,Mat44 *param_1,CollisionCollector *param_2)

{
  long *plVar1;
  code *pcVar2;
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
  long lVar19;
  float fVar20;
  float fVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  
  plVar1 = *(long **)(this + 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar20 = (float)*(undefined8 *)(this + 0x48);
  pcVar2 = *(code **)(*plVar1 + 0xc0);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
  fVar17 = (float)*(undefined8 *)(this + 0x40);
  fVar18 = (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20);
  lVar19 = 0;
  fVar23 = fVar17 + fVar17;
  fVar24 = fVar18 + fVar18;
  fVar25 = fVar20 * (fVar20 + fVar20);
  fVar22 = (fVar20 + fVar20) * fVar21;
  local_98 = (_LC0 - fVar18 * fVar24) - fVar25;
  register0x00001284 = fVar18 * fVar23 + fVar22;
  register0x00001288 = fVar20 * fVar23 - fVar24 * fVar21;
  register0x0000128c = 0;
  local_88._4_4_ = (_LC0 - fVar25) - fVar17 * fVar23;
  local_88._0_4_ = fVar18 * fVar23 - fVar22;
  fVar22 = *(float *)param_1;
  fVar25 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x34);
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x3c);
  local_88._8_4_ = fVar23 * fVar21 + fVar20 * fVar24;
  local_88._12_4_ = 0;
  fVar9 = *(float *)(param_1 + 0x10);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar12 = *(float *)(param_1 + 0x1c);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar14 = *(float *)(param_1 + 0x24);
  fVar15 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  local_78._4_4_ = fVar20 * fVar24 - fVar23 * fVar21;
  local_78._0_4_ = fVar20 * fVar23 + fVar24 * fVar21;
  local_78._8_4_ = (_LC0 - fVar17 * fVar23) - fVar18 * fVar24;
  local_78._12_4_ = 0;
  local_68 = __LC2;
  uStack_60 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar17 = *(float *)(local_98 + lVar19);
    fVar18 = *(float *)(local_98 + lVar19 + 4);
    fVar20 = *(float *)(local_98 + lVar19 + 8);
    fVar21 = *(float *)(local_98 + lVar19 + 0xc);
    *(float *)((long)local_58 + lVar19) =
         fVar21 * fVar5 + fVar17 * fVar22 + fVar18 * fVar9 + fVar20 * fVar13;
    *(float *)((long)local_58 + lVar19 + 4) =
         fVar21 * fVar6 + fVar17 * fVar25 + fVar18 * fVar10 + fVar20 * fVar14;
    *(float *)((long)local_58 + lVar19 + 8) =
         fVar21 * fVar7 + fVar17 * fVar3 + fVar18 * fVar11 + fVar20 * fVar15;
    *(float *)((long)local_58 + lVar19 + 0xc) =
         fVar21 * fVar8 + fVar17 * fVar4 + fVar18 * fVar12 + fVar20 * fVar16;
    lVar19 = lVar19 + 0x10;
  } while (lVar19 != 0x40);
  (*pcVar2)(plVar1,local_58,param_2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RotatedTranslatedShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::RotatedTranslatedShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((DecoratedShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] __thiscall
JPH::RotatedTranslatedShape::GetSurfaceNormal
          (undefined8 param_1,float param_2,RotatedTranslatedShape *this)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar16 [12];
  float local_48;
  float fStack_44;
  
  local_48 = (float)param_1;
  fStack_44 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)(__LC3 ^ *(uint *)(this + 0x40));
  fVar3 = (float)(_UNK_001077a4 ^ *(uint *)(this + 0x44));
  fVar4 = (float)(_UNK_001077a8 ^ *(uint *)(this + 0x48));
  fVar5 = (float)(_UNK_001077ac ^ *(uint *)(this + 0x4c));
  fVar14 = fVar3 + fVar3;
  fVar8 = fVar2 + fVar2;
  fVar13 = (fVar4 + fVar4) * fVar4;
  fVar15 = (fVar4 + fVar4) * fVar5;
  fVar12 = fVar3 * fVar8 - fVar15;
  fVar15 = fVar15 + fVar3 * fVar8;
  fVar7 = fVar8 * fVar4 - fVar14 * fVar5;
  fVar10 = fVar4 * fVar14 - fVar8 * fVar5;
  fVar6 = (_LC0 - fVar14 * fVar3) - fVar13;
  fVar9 = fVar8 * fVar5 + fVar4 * fVar14;
  fVar11 = (_LC0 - fVar13) - fVar2 * fVar8;
  fVar13 = (_LC0 - fVar2 * fVar8) - fVar14 * fVar3;
  fVar3 = fVar8 * fVar4 + fVar14 * fVar5;
  auVar16 = (**(code **)(**(long **)(this + 0x20) + 0x58))
                      (CONCAT44(param_2 * fVar10 + fStack_44 * fVar11 + local_48 * fVar15 +
                                _UNK_00107794,
                                param_2 * fVar3 + fStack_44 * fVar12 + local_48 * fVar6 + __LC2),
                       CONCAT44(param_2 * 0.0 + fStack_44 * 0.0 + local_48 * 0.0 + _LC0,
                                param_2 * fVar13 + fStack_44 * fVar9 + local_48 * fVar7 +
                                _UNK_00107798));
  fVar2 = auVar16._8_4_;
  local_48 = auVar16._0_4_;
  fStack_44 = auVar16._4_4_;
  auVar1._4_4_ = local_48 * fVar12 + fVar11 * fStack_44 + fVar2 * fVar9;
  auVar1._0_4_ = local_48 * fVar6 + fVar15 * fStack_44 + fVar2 * fVar7;
  auVar1._8_4_ = local_48 * fVar3 + fVar10 * fStack_44 + fVar2 * fVar13;
  auVar1._12_4_ = local_48 * 0.0 + fStack_44 * 0.0 + fVar2 * 0.0;
  return auVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::RotatedTranslatedShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
               long *param_6)

{
  char cVar1;
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
  undefined8 local_48;
  undefined8 uStack_40;
  
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    fVar2 = (float)(__LC3 ^ *(uint *)(param_3 + 0x40));
    fVar3 = (float)(_UNK_001077a4 ^ *(uint *)(param_3 + 0x44));
    fVar4 = (float)(_UNK_001077a8 ^ *(uint *)(param_3 + 0x48));
    fVar6 = (float)(_UNK_001077ac ^ *(uint *)(param_3 + 0x4c));
    fVar11 = fVar3 + fVar3;
    fVar10 = fVar2 + fVar2;
    fVar13 = (fVar4 + fVar4) * fVar6;
    fVar12 = (fVar4 + fVar4) * fVar4;
    local_48._0_4_ = (float)param_1;
    local_48._4_4_ = (float)((ulong)param_1 >> 0x20);
    fVar5 = (fVar10 * fVar4 - fVar11 * fVar6) * (float)local_48;
    fVar7 = (float)local_48 * 0.0;
    fVar8 = (fVar10 * fVar6 + fVar4 * fVar11) * local_48._4_4_;
    fVar9 = local_48._4_4_ * 0.0;
    local_48 = CONCAT44((fVar3 * fVar10 + fVar13) * (float)local_48 +
                        ((_LC0 - fVar12) - fVar2 * fVar10) * local_48._4_4_ +
                        param_2 * (fVar4 * fVar11 - fVar10 * fVar6) + _UNK_00107794,
                        ((_LC0 - fVar11 * fVar3) - fVar12) * (float)local_48 +
                        (fVar3 * fVar10 - fVar13) * local_48._4_4_ +
                        param_2 * (fVar10 * fVar4 + fVar11 * fVar6) + __LC2);
    uStack_40 = CONCAT44(fVar7 + fVar9 + param_2 * 0.0 + _LC0,
                         fVar5 + fVar8 + param_2 * ((_LC0 - fVar2 * fVar10) - fVar11 * fVar3) +
                         _UNK_00107798);
                    /* WARNING: Could not recover jumptable at 0x00100780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa8))
              (local_48,uStack_40,*(long **)(param_3 + 0x20),param_4,param_5,param_6);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetMassProperties() const */

void JPH::RotatedTranslatedShape::GetMassProperties(void)

{
  long lVar1;
  long in_RSI;
  Mat44 *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 0x20) + 0x40))();
  JPH::MassProperties::Rotate(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetLocalBounds() const */

void JPH::RotatedTranslatedShape::GetLocalBounds(void)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long in_RSI;
  float *in_RDI;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float local_88 [4];
  float local_78 [4];
  undefined1 local_68 [8];
  float afStack_60 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  pfVar4 = local_88;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(in_RSI + 0x20) + 0x20))(local_88);
  fVar12 = (float)*(undefined8 *)(in_RSI + 0x40);
  fVar10 = (float)*(undefined8 *)(in_RSI + 0x48);
  fVar13 = (float)((ulong)*(undefined8 *)(in_RSI + 0x40) >> 0x20);
  fVar15 = fVar12 + fVar12;
  fVar16 = fVar13 + fVar13;
  fVar11 = (float)((ulong)*(undefined8 *)(in_RSI + 0x48) >> 0x20);
  fVar17 = fVar10 * (fVar10 + fVar10);
  fVar9 = (fVar10 + fVar10) * fVar11;
  local_68._0_4_ = (_LC0 - fVar13 * fVar16) - fVar17;
  local_68._4_4_ = fVar13 * fVar15 + fVar9;
  register0x00001288 = fVar10 * fVar15 - fVar16 * fVar11;
  register0x0000128c = 0;
  local_58._0_4_ = fVar13 * fVar15 - fVar9;
  local_58._4_4_ = (_LC0 - fVar17) - fVar12 * fVar15;
  local_58._8_4_ = fVar15 * fVar11 + fVar10 * fVar16;
  local_58._12_4_ = 0;
  local_48._4_4_ = fVar10 * fVar16 - fVar15 * fVar11;
  local_48._0_4_ = fVar10 * fVar15 + fVar16 * fVar11;
  local_48._8_4_ = (_LC0 - fVar12 * fVar15) - fVar13 * fVar16;
  local_48._12_4_ = 0;
  local_38 = __LC2;
  fStack_34 = _UNK_00107794;
  fStack_30 = _UNK_00107798;
  fStack_2c = _LC0;
  pfVar5 = (float *)local_68;
  fVar10 = __LC2;
  fVar11 = _UNK_00107794;
  fVar12 = _UNK_00107798;
  fVar13 = _LC0;
  fVar9 = __LC2;
  fVar15 = _UNK_00107794;
  fVar16 = _UNK_00107798;
  fVar17 = _LC0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[4];
    pfVar6 = pfVar5 + 4;
    pfVar4 = pfVar4 + 1;
    auVar7._0_8_ = CONCAT44(fVar1 * pfVar5[1],fVar1 * *pfVar5);
    auVar7._8_4_ = fVar1 * pfVar5[2];
    auVar7._12_4_ = fVar1 * pfVar5[3];
    auVar14._8_4_ = auVar7._8_4_;
    auVar14._0_8_ = auVar7._0_8_;
    auVar14._12_4_ = auVar7._12_4_;
    auVar8._4_4_ = fVar2 * pfVar5[1];
    auVar8._0_4_ = fVar2 * *pfVar5;
    auVar8._8_4_ = fVar2 * pfVar5[2];
    auVar8._12_4_ = fVar2 * pfVar5[3];
    auVar14 = minps(auVar14,auVar8);
    auVar3._4_4_ = fVar2 * pfVar5[1];
    auVar3._0_4_ = fVar2 * *pfVar5;
    auVar3._8_4_ = fVar2 * pfVar5[2];
    auVar3._12_4_ = fVar2 * pfVar5[3];
    auVar8 = maxps(auVar7,auVar3);
    fVar10 = fVar10 + auVar14._0_4_;
    fVar11 = fVar11 + auVar14._4_4_;
    fVar12 = fVar12 + auVar14._8_4_;
    fVar13 = fVar13 + auVar14._12_4_;
    fVar9 = fVar9 + auVar8._0_4_;
    fVar15 = fVar15 + auVar8._4_4_;
    fVar16 = fVar16 + auVar8._8_4_;
    fVar17 = fVar17 + auVar8._12_4_;
    pfVar5 = pfVar6;
  } while (&local_38 != pfVar6);
  *in_RDI = fVar10;
  in_RDI[1] = fVar11;
  in_RDI[2] = fVar12;
  in_RDI[3] = fVar13;
  in_RDI[4] = fVar9;
  in_RDI[5] = fVar15;
  in_RDI[6] = fVar16;
  in_RDI[7] = fVar17;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RotatedTranslatedShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::RotatedTranslatedShape::SaveBinaryState(RotatedTranslatedShape *this,StreamOut *param_1)

{
  JPH::Shape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
                    /* WARNING: Could not recover jumptable at 0x00100af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0x10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::RotatedTranslatedShape::RestoreBinaryState(RotatedTranslatedShape *this,StreamIn *param_1)

{
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0x10);
  this[0x28] = (RotatedTranslatedShape)
               ((__LC2 - *(float *)(this + 0x40)) * (__LC2 - *(float *)(this + 0x40)) +
                (_UNK_00107794 - *(float *)(this + 0x44)) *
                (_UNK_00107794 - *(float *)(this + 0x44)) +
                (_UNK_00107798 - *(float *)(this + 0x48)) *
                (_UNK_00107798 - *(float *)(this + 0x48)) +
                (_LC0 - *(float *)(this + 0x4c)) * (_LC0 - *(float *)(this + 0x4c)) <= _LC4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::RotatedTranslatedShape::CastRay
          (RotatedTranslatedShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  long in_FS_OFFSET;
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
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 != '\0') {
    fVar2 = (float)(__LC3 ^ *(uint *)(this + 0x40));
    fVar4 = (float)(_UNK_001077a4 ^ *(uint *)(this + 0x44));
    fVar5 = (float)(_UNK_001077a8 ^ *(uint *)(this + 0x48));
    fVar6 = (float)(_UNK_001077ac ^ *(uint *)(this + 0x4c));
    fVar8 = fVar2 + fVar2;
    fVar13 = fVar4 + fVar4;
    fVar3 = fVar6 * (fVar5 + fVar5);
    fVar14 = fVar5 * (fVar5 + fVar5);
    fVar15 = fVar5 * fVar13 - fVar8 * fVar6;
    fVar9 = fVar5 * fVar13 + fVar8 * fVar6;
    fVar10 = fVar5 * fVar8 + fVar13 * fVar6;
    fVar12 = fVar5 * fVar8 - fVar13 * fVar6;
    fVar11 = (_LC0 - fVar2 * fVar8) - fVar4 * fVar13;
    fVar7 = (_LC0 - fVar4 * fVar13) - fVar14;
    fVar16 = (_LC0 - fVar14) - fVar2 * fVar8;
    fVar14 = fVar4 * fVar8 + fVar3;
    fVar3 = fVar4 * fVar8 - fVar3;
    fVar2 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    fVar6 = fVar2 + *(float *)(param_1 + 0x10);
    fVar8 = fVar4 + *(float *)(param_1 + 0x14);
    fVar13 = fVar5 + *(float *)(param_1 + 0x18);
    local_68 = fVar2 * fVar7 + fVar4 * fVar3 + fVar5 * fVar10 + __LC2;
    fStack_64 = fVar2 * fVar14 + fVar4 * fVar16 + fVar5 * fVar15 + _UNK_00107794;
    fStack_60 = fVar2 * fVar12 + fVar4 * fVar9 + fVar5 * fVar11 + _UNK_00107798;
    fStack_5c = fVar2 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0 + _LC0;
    local_58 = (fVar13 * fVar10 + fVar7 * fVar6 + fVar8 * fVar3 + __LC2) - local_68;
    fStack_54 = (fVar13 * fVar15 + fVar14 * fVar6 + fVar8 * fVar16 + _UNK_00107794) - fStack_64;
    fStack_50 = (fVar13 * fVar11 + fVar12 * fVar6 + fVar8 * fVar9 + _UNK_00107798) - fStack_60;
    fStack_4c = (fVar13 * 0.0 + fVar6 * 0.0 + fVar8 * 0.0 + _LC0) - fStack_5c;
    (**(code **)(**(long **)(this + 0x20) + 0xa0))
              (*(long **)(this + 0x20),&local_68,param_2,param_3,param_4,param_5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* _FUN() */

void JPH::RotatedTranslatedShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x50);
  *(undefined2 *)(puVar1 + 3) = 0x902;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__RotatedTranslatedShape_00107620;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x70);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_GetRTTI_001075e8;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

void JPH::RotatedTranslatedShape::CastRay
               (RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  long in_FS_OFFSET;
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
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  fVar1 = (float)(__LC3 ^ *(uint *)(param_1 + 0x40));
  fVar3 = (float)(_UNK_001077a4 ^ *(uint *)(param_1 + 0x44));
  fVar4 = (float)(_UNK_001077a8 ^ *(uint *)(param_1 + 0x48));
  fVar5 = (float)(_UNK_001077ac ^ *(uint *)(param_1 + 0x4c));
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = fVar1 + fVar1;
  fVar12 = fVar3 + fVar3;
  fVar13 = (fVar4 + fVar4) * fVar4;
  fVar2 = fVar5 * (fVar4 + fVar4);
  fVar14 = fVar4 * fVar12 - fVar7 * fVar5;
  fVar9 = fVar7 * fVar4 + fVar12 * fVar5;
  fVar11 = fVar7 * fVar4 - fVar12 * fVar5;
  fVar8 = fVar4 * fVar12 + fVar7 * fVar5;
  fVar10 = (_LC0 - fVar1 * fVar7) - fVar12 * fVar3;
  fVar6 = (_LC0 - fVar12 * fVar3) - fVar13;
  fVar15 = (_LC0 - fVar13) - fVar1 * fVar7;
  fVar13 = fVar3 * fVar7 + fVar2;
  fVar2 = fVar3 * fVar7 - fVar2;
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = fVar1 + *(float *)(param_2 + 0x10);
  fVar7 = fVar3 + *(float *)(param_2 + 0x14);
  fVar12 = fVar4 + *(float *)(param_2 + 0x18);
  local_38 = fVar1 * fVar6 + fVar3 * fVar2 + fVar4 * fVar9 + __LC2;
  fStack_34 = fVar1 * fVar13 + fVar3 * fVar15 + fVar4 * fVar14 + _UNK_00107794;
  fStack_30 = fVar1 * fVar11 + fVar3 * fVar8 + fVar4 * fVar10 + _UNK_00107798;
  fStack_2c = fVar1 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0 + _LC0;
  local_28 = (fVar12 * fVar9 + fVar6 * fVar5 + fVar7 * fVar2 + __LC2) - local_38;
  fStack_24 = (fVar12 * fVar14 + fVar13 * fVar5 + fVar7 * fVar15 + _UNK_00107794) - fStack_34;
  fStack_20 = (fVar12 * fVar10 + fVar11 * fVar5 + fVar7 * fVar8 + _UNK_00107798) - fStack_30;
  fStack_1c = (fVar12 * 0.0 + fVar5 * 0.0 + fVar7 * 0.0 + _LC0) - fStack_2c;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x98))(*(long **)(param_1 + 0x20),&local_38);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RotatedTranslatedShapeSettings::GetRTTI() const */

undefined1 * JPH::RotatedTranslatedShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti,
                      "RotatedTranslatedShapeSettings",0x70,
                      GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined8 **)param_1 = &CollisionDispatch::sCollideShape;
    plVar2 = *(long **)((long)param_1 + 0x48);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plVar2 = *(long **)((long)param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    *(undefined8 **)param_1 = &CollisionDispatch::sCastShape;
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
                    /* WARNING: Could not recover jumptable at 0x001010a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::RotatedTranslatedShape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3,
   JPH::Quat, JPH::Vec3, JPH::SubShapeID&) const */

undefined8 *
JPH::RotatedTranslatedShape::GetSubShapeTransformedShape
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,float param_6,undefined8 *param_1,long param_8,undefined4 *param_9,
          undefined4 *param_10)

{
  undefined8 uVar1;
  long lVar2;
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
  float local_28;
  float fStack_24;
  
  fVar3 = (float)((ulong)param_3 >> 0x20);
  fVar8 = (float)param_3;
  uVar1 = *(undefined8 *)(param_8 + 0x40);
  *param_10 = *param_9;
  fVar6 = (float)param_4;
  fVar13 = (float)((ulong)param_4 >> 0x20);
  fVar7 = (float)uVar1;
  fVar9 = (float)((ulong)uVar1 >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_8 + 0x48);
  fVar5 = (float)((ulong)*(undefined8 *)(param_8 + 0x48) >> 0x20);
  lVar2 = *(long *)(param_8 + 0x20);
  *param_1 = param_1_00;
  param_1[1] = param_2;
  param_1[4] = lVar2;
  *(float *)(param_1 + 2) = (fVar3 * fVar4 + fVar8 * fVar5 + fVar13 * fVar7) - fVar9 * fVar6;
  *(float *)((long)param_1 + 0x14) =
       fVar7 * fVar6 + fVar3 * fVar5 + (fVar13 * fVar9 - fVar8 * fVar4);
  *(float *)(param_1 + 3) = fVar5 * fVar6 + ((fVar8 * fVar9 + fVar13 * fVar4) - fVar3 * fVar7);
  *(float *)((long)param_1 + 0x1c) =
       ((fVar13 * fVar5 - fVar8 * fVar7) - fVar3 * fVar9) - fVar4 * fVar6;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_28 = (float)param_5;
  fStack_24 = (float)((ulong)param_5 >> 0x20);
  param_1[5] = _LC7;
  param_1[6] = 0xffffffff3f800000;
  param_1[7] = 0xffffffff;
  if ((*(char *)(param_8 + 0x28) == '\0') &&
     (_LC8 < (param_6 - local_28) * (param_6 - local_28) +
             (fStack_24 - param_6) * (fStack_24 - param_6) +
             (local_28 - fStack_24) * (local_28 - fStack_24) + 0.0)) {
    fVar8 = (float)*(undefined8 *)(param_8 + 0x40);
    fVar4 = (float)*(undefined8 *)(param_8 + 0x48);
    fVar3 = (float)((ulong)*(undefined8 *)(param_8 + 0x40) >> 0x20);
    fVar7 = fVar8 + fVar8;
    fVar14 = fVar3 + fVar3;
    fVar5 = (float)((ulong)*(undefined8 *)(param_8 + 0x48) >> 0x20);
    fVar13 = fVar4 * (fVar4 + fVar4);
    fVar6 = fVar5 * (fVar4 + fVar4);
    fVar12 = fVar4 * fVar7 + fVar14 * fVar5;
    fVar15 = (_LC0 - fVar13) - fVar8 * fVar7;
    fVar11 = fVar4 * fVar14 - fVar7 * fVar5;
    fVar9 = fVar7 * fVar5 + fVar4 * fVar14;
    fVar16 = fVar3 * fVar7 - fVar6;
    fVar10 = (_LC0 - fVar8 * fVar7) - fVar3 * fVar14;
    fVar8 = fVar4 * fVar7 - fVar14 * fVar5;
    fVar13 = (_LC0 - fVar3 * fVar14) - fVar13;
    fVar6 = fVar3 * fVar7 + fVar6;
    *(float *)(param_1 + 6) =
         fVar11 * fStack_24 * fVar11 + fVar12 * local_28 * fVar12 + fVar10 * param_6 * fVar10;
    param_1[5] = CONCAT44(fVar15 * fVar15 * fStack_24 + fVar16 * local_28 * fVar16 +
                          fVar9 * param_6 * fVar9,
                          fVar6 * fStack_24 * fVar6 + fVar13 * local_28 * fVar13 +
                          fVar8 * param_6 * fVar8);
    return param_1;
  }
  *(float *)(param_1 + 5) = local_28;
  *(float *)((long)param_1 + 0x2c) = fStack_24;
  *(float *)(param_1 + 6) = param_6;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::Vec3) const */

void JPH::RotatedTranslatedShape::DrawGetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,long param_1,undefined8 param_4,
               float *param_5)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b8;
  float fStack_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [16];
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [18];
  long local_10;
  undefined8 uVar7;
  
  fVar13 = (float)param_2;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(**(long **)(param_1 + 0x20) + 0x90);
  local_a8 = param_1_00;
  uStack_a0 = param_2;
  if (*(char *)(param_1 + 0x28) == '\0') {
    local_b8 = (float)param_1_00;
    fStack_b4 = (float)((ulong)param_1_00 >> 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
    if (_LC8 < (fVar13 - local_b8) * (fVar13 - local_b8) +
               (fStack_b4 - fVar13) * (fStack_b4 - fVar13) +
               (local_b8 - fStack_b4) * (local_b8 - fStack_b4) + 0.0) {
      fVar24 = (float)uVar11;
      fVar15 = (float)uVar7;
      fVar19 = (float)((ulong)uVar7 >> 0x20);
      fVar14 = fVar15 + fVar15;
      fVar25 = (float)((ulong)uVar11 >> 0x20);
      fVar18 = fVar19 + fVar19;
      fVar12 = fVar25 * (fVar24 + fVar24);
      fVar23 = fVar24 * (fVar24 + fVar24);
      fVar22 = fVar24 * fVar14 + fVar18 * fVar25;
      fVar17 = fVar24 * fVar14 - fVar18 * fVar25;
      fVar20 = fVar24 * fVar18 - fVar14 * fVar25;
      fVar24 = fVar14 * fVar25 + fVar24 * fVar18;
      fVar26 = fVar19 * fVar14 - fVar12;
      fVar12 = fVar19 * fVar14 + fVar12;
      fVar25 = (_LC0 - fVar15 * fVar14) - fVar19 * fVar18;
      fVar14 = (_LC0 - fVar23) - fVar15 * fVar14;
      fVar23 = (_LC0 - fVar19 * fVar18) - fVar23;
      fVar15 = fVar20 * fStack_b4 * fVar20 + fVar22 * local_b8 * fVar22 + fVar25 * fVar13 * fVar25;
      uStack_a0 = CONCAT44(fVar15,fVar15);
      local_a8 = CONCAT44(fVar24 * fVar13 * fVar24 +
                          fVar14 * fVar14 * fStack_b4 + fVar26 * local_b8 * fVar26,
                          fVar17 * fVar13 * fVar17 +
                          fVar12 * fStack_b4 * fVar12 + fVar23 * local_b8 * fVar23);
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = *(undefined8 *)(param_1 + 0x48);
  }
  fVar5 = (float)uVar7;
  fVar9 = (float)uVar11;
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  fVar16 = fVar5 + fVar5;
  lVar8 = 0;
  fVar21 = fVar6 + fVar6;
  fVar10 = (float)((ulong)uVar11 >> 0x20);
  fVar14 = fVar10 * (fVar9 + fVar9);
  fVar23 = fVar9 * (fVar9 + fVar9);
  unique0x1000001e = fVar6 * fVar16 + fVar14;
  local_98 = (_LC0 - fVar6 * fVar21) - fVar23;
  unique0x10000022 = fVar9 * fVar16 - fVar21 * fVar10;
  unique0x10000026 = 0;
  fVar13 = param_5[4];
  fVar15 = param_5[5];
  fVar24 = param_5[6];
  fVar12 = param_5[7];
  local_88._4_4_ = (_LC0 - fVar23) - fVar5 * fVar16;
  local_88._0_4_ = fVar6 * fVar16 - fVar14;
  fVar14 = param_5[8];
  fVar23 = param_5[9];
  fVar17 = param_5[10];
  fVar18 = param_5[0xb];
  fVar19 = param_5[0xc];
  fVar25 = param_5[0xd];
  fVar20 = param_5[0xe];
  fVar22 = param_5[0xf];
  local_88._8_4_ = fVar16 * fVar10 + fVar9 * fVar21;
  local_88._12_4_ = 0;
  fVar26 = *param_5;
  fVar2 = param_5[1];
  fVar3 = param_5[2];
  fVar4 = param_5[3];
  local_78 = CONCAT44(fVar9 * fVar21 - fVar16 * fVar10,fVar9 * fVar16 + fVar21 * fVar10);
  fStack_70 = (_LC0 - fVar5 * fVar16) - fVar6 * fVar21;
  uStack_6c = 0;
  local_68 = __LC2;
  uStack_60 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar5 = *(float *)(local_98 + lVar8);
    fVar6 = *(float *)(local_98 + lVar8 + 4);
    fVar9 = *(float *)(local_98 + lVar8 + 8);
    fVar10 = *(float *)(local_98 + lVar8 + 0xc);
    *(float *)((long)local_58 + lVar8) =
         fVar10 * fVar19 + fVar5 * fVar26 + fVar6 * fVar13 + fVar9 * fVar14;
    *(float *)((long)local_58 + lVar8 + 4) =
         fVar10 * fVar25 + fVar5 * fVar2 + fVar6 * fVar15 + fVar9 * fVar23;
    *(float *)((long)local_58 + lVar8 + 8) =
         fVar10 * fVar20 + fVar5 * fVar3 + fVar6 * fVar24 + fVar9 * fVar17;
    *(float *)((long)local_58 + lVar8 + 0xc) =
         fVar10 * fVar22 + fVar5 * fVar4 + fVar6 * fVar12 + fVar9 * fVar18;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x40);
  (*pcVar1)(local_a8,uStack_a0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined8
JPH::RotatedTranslatedShape::GetWorldSpaceBounds
          (ulong param_1_00,float param_2,undefined8 param_1,long param_4,float *param_5)

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
  long lVar10;
  float fVar11;
  float fVar12;
  long in_FS_OFFSET;
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
  float local_b8;
  float fStack_b4;
  ulong local_a8;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined8 local_48;
  ulong uStack_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar12 = (float)*(undefined8 *)(param_4 + 0x40);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar15 = (float)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
  fVar20 = fVar15 + fVar15;
  fVar11 = (float)*(undefined8 *)(param_4 + 0x48);
  fVar18 = fVar12 + fVar12;
  fVar17 = (float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  fVar13 = fVar17 * (fVar11 + fVar11);
  fVar22 = fVar11 * (fVar11 + fVar11);
  local_38._0_4_ = fVar11 * fVar18 + fVar20 * fVar17;
  local_58 = (_LC0 - fVar15 * fVar20) - fVar22;
  register0x00001284 = fVar15 * fVar18 + fVar13;
  register0x00001288 = fVar11 * fVar18 - fVar20 * fVar17;
  register0x0000128c = 0;
  fVar23 = *param_5;
  fVar14 = param_5[1];
  fVar25 = param_5[2];
  fVar16 = param_5[3];
  local_38._4_4_ = fVar11 * fVar20 - fVar18 * fVar17;
  fVar19 = param_5[0xc];
  fVar21 = param_5[0xd];
  fVar24 = param_5[0xe];
  fVar1 = param_5[0xf];
  local_48 = CONCAT44((_LC0 - fVar22) - fVar12 * fVar18,fVar15 * fVar18 - fVar13);
  uStack_40 = (ulong)(uint)(fVar18 * fVar17 + fVar11 * fVar20);
  fVar13 = param_5[8];
  fVar22 = param_5[9];
  fVar2 = param_5[10];
  fVar3 = param_5[0xb];
  fVar4 = param_5[4];
  fVar5 = param_5[5];
  fVar6 = param_5[6];
  fVar7 = param_5[7];
  lVar10 = 0;
  local_38._8_4_ = (_LC0 - fVar12 * fVar18) - fVar15 * fVar20;
  local_38._12_4_ = 0;
  local_28 = __LC2;
  uStack_20 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar18 = *(float *)(local_58 + lVar10);
    fVar20 = *(float *)(local_58 + lVar10 + 4);
    fVar8 = *(float *)(local_58 + lVar10 + 8);
    fVar9 = *(float *)(local_58 + lVar10 + 0xc);
    *(float *)((long)local_98 + lVar10) =
         fVar9 * fVar19 + fVar18 * fVar23 + fVar20 * fVar4 + fVar8 * fVar13;
    *(float *)((long)local_98 + lVar10 + 4) =
         fVar9 * fVar21 + fVar18 * fVar14 + fVar20 * fVar5 + fVar8 * fVar22;
    *(float *)((long)local_98 + lVar10 + 8) =
         fVar9 * fVar24 + fVar18 * fVar25 + fVar20 * fVar6 + fVar8 * fVar2;
    *(float *)((long)local_98 + lVar10 + 0xc) =
         fVar9 * fVar1 + fVar18 * fVar16 + fVar20 * fVar7 + fVar8 * fVar3;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  local_b8 = (float)param_1_00;
  fStack_b4 = (float)(param_1_00 >> 0x20);
  local_a8 = param_1_00;
  if ((*(char *)(param_4 + 0x28) == '\0') &&
     (_LC8 < (param_2 - local_b8) * (param_2 - local_b8) +
             (fStack_b4 - param_2) * (fStack_b4 - param_2) +
             (local_b8 - fStack_b4) * (local_b8 - fStack_b4) + 0.0)) {
    fVar23 = fVar12 + fVar12;
    fVar25 = fVar15 + fVar15;
    fVar24 = (_LC0 - fVar12 * fVar23) - fVar15 * fVar25;
    fVar14 = (_LC0 - fVar15 * fVar25) - fVar11 * (fVar11 + fVar11);
    fVar19 = fVar11 * fVar25 - fVar23 * fVar17;
    fVar21 = fVar11 * fVar23 + fVar25 * fVar17;
    fVar16 = fVar11 * fVar23 - fVar25 * fVar17;
    fVar23 = fVar17 * (fVar11 + fVar11) + fVar15 * fVar23;
    fVar25 = fVar16 * param_2;
    param_2 = fVar19 * fStack_b4 * fVar19 + fVar21 * local_b8 * fVar21 + fVar24 * param_2 * fVar24;
    local_a8 = (ulong)(uint)(fVar25 * fVar16 +
                            fVar23 * fStack_b4 * fVar23 + fVar14 * local_b8 * fVar14);
  }
  (**(code **)(**(long **)(param_4 + 0x20) + 0x30))
            (local_a8,param_2,param_1,*(long **)(param_4 + 0x20),local_98);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::Vec3, JPH::Color, bool) const */

void JPH::RotatedTranslatedShape::DrawGetSupportFunction
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,undefined1 param_7)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
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
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [4];
  float afStack_a4 [3];
  undefined1 local_98 [16];
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  undefined8 uVar9;
  
  plVar1 = *(long **)(param_1 + 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x88);
  local_b8 = param_1_00;
  uStack_b0 = param_2_00;
  if (*(char *)(param_1 + 0x28) == '\0') {
    local_c8 = (float)param_1_00;
    fStack_c4 = (float)((ulong)param_1_00 >> 0x20);
    fStack_c0 = (float)param_2_00;
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    if (_LC8 < (fStack_c0 - local_c8) * (fStack_c0 - local_c8) +
               (fStack_c4 - fStack_c0) * (fStack_c4 - fStack_c0) +
               (local_c8 - fStack_c4) * (local_c8 - fStack_c4) + 0.0) {
      fVar24 = (float)uVar13;
      fVar17 = (float)uVar9;
      fVar19 = (float)((ulong)uVar9 >> 0x20);
      fVar26 = (float)((ulong)uVar13 >> 0x20);
      fVar16 = fVar17 + fVar17;
      fVar15 = fVar19 + fVar19;
      fVar14 = fVar26 * (fVar24 + fVar24);
      fVar25 = fVar24 * (fVar24 + fVar24);
      fVar23 = fVar24 * fVar16 - fVar15 * fVar26;
      fVar22 = fVar24 * fVar16 + fVar15 * fVar26;
      fVar20 = fVar24 * fVar15 - fVar16 * fVar26;
      fVar24 = fVar16 * fVar26 + fVar24 * fVar15;
      fVar26 = fVar19 * fVar16 - fVar14;
      fVar14 = fVar19 * fVar16 + fVar14;
      fVar27 = (_LC0 - fVar17 * fVar16) - fVar19 * fVar15;
      fVar16 = (_LC0 - fVar25) - fVar17 * fVar16;
      fVar25 = (_LC0 - fVar19 * fVar15) - fVar25;
      fVar17 = fVar20 * fStack_c4 * fVar20 + fVar22 * local_c8 * fVar22 +
               fVar27 * fStack_c0 * fVar27;
      uStack_b0 = CONCAT44(fVar17,fVar17);
      local_b8 = CONCAT44(fVar24 * fStack_c0 * fVar24 +
                          fVar16 * fVar16 * fStack_c4 + fVar26 * local_c8 * fVar26,
                          fVar23 * fStack_c0 * fVar23 +
                          fVar14 * fStack_c4 * fVar14 + fVar25 * local_c8 * fVar25);
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    uVar13 = *(undefined8 *)(param_1 + 0x48);
  }
  fVar7 = (float)uVar9;
  fVar11 = (float)uVar13;
  fVar8 = (float)((ulong)uVar9 >> 0x20);
  fVar18 = fVar7 + fVar7;
  lVar10 = 0;
  fVar21 = fVar8 + fVar8;
  fVar12 = (float)((ulong)uVar13 >> 0x20);
  fVar15 = fVar12 * (fVar11 + fVar11);
  fVar23 = fVar11 * (fVar11 + fVar11);
  unique0x1000001e = fVar8 * fVar18 + fVar15;
  local_a8 = (_LC0 - fVar8 * fVar21) - fVar23;
  unique0x10000022 = fVar11 * fVar18 - fVar21 * fVar12;
  unique0x10000026 = 0;
  fVar17 = param_5[4];
  fVar24 = param_5[5];
  fVar14 = param_5[6];
  fVar16 = param_5[7];
  local_98._4_4_ = (_LC0 - fVar23) - fVar7 * fVar18;
  local_98._0_4_ = fVar8 * fVar18 - fVar15;
  fVar15 = param_5[8];
  fVar23 = param_5[9];
  fVar25 = param_5[10];
  fVar19 = param_5[0xb];
  fVar26 = param_5[0xc];
  fVar20 = param_5[0xd];
  fVar22 = param_5[0xe];
  fVar27 = param_5[0xf];
  local_98._8_4_ = fVar18 * fVar12 + fVar11 * fVar21;
  local_98._12_4_ = 0;
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar5 = param_5[2];
  fVar6 = param_5[3];
  local_88 = CONCAT44(fVar11 * fVar21 - fVar18 * fVar12,fVar11 * fVar18 + fVar21 * fVar12);
  fStack_80 = (_LC0 - fVar7 * fVar18) - fVar8 * fVar21;
  uStack_7c = 0;
  local_78 = __LC2;
  uStack_70 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar7 = *(float *)(local_a8 + lVar10);
    fVar8 = *(float *)(local_a8 + lVar10 + 4);
    fVar11 = *(float *)(local_a8 + lVar10 + 8);
    fVar12 = *(float *)(local_a8 + lVar10 + 0xc);
    *(float *)((long)local_68 + lVar10) =
         fVar12 * fVar26 + fVar7 * fVar3 + fVar8 * fVar17 + fVar11 * fVar15;
    *(float *)((long)local_68 + lVar10 + 4) =
         fVar12 * fVar20 + fVar7 * fVar4 + fVar8 * fVar24 + fVar11 * fVar23;
    *(float *)((long)local_68 + lVar10 + 8) =
         fVar12 * fVar22 + fVar7 * fVar5 + fVar8 * fVar14 + fVar11 * fVar25;
    *(float *)((long)local_68 + lVar10 + 0xc) =
         fVar12 * fVar27 + fVar7 * fVar6 + fVar8 * fVar16 + fVar11 * fVar19;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  (*pcVar2)(local_b8,uStack_b0,plVar1,param_2,local_68,param_6,param_7);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool, bool) const */

void JPH::RotatedTranslatedShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 param_2,
               float *param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  long *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  long in_FS_OFFSET;
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
  float local_c8;
  float fStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [4];
  float afStack_a4 [3];
  undefined1 local_98 [16];
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  undefined8 uVar8;
  
  fVar14 = (float)param_2_00;
  plVar1 = *(long **)(param_1 + 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x80);
  local_b8 = param_1_00;
  uStack_b0 = param_2_00;
  if (*(char *)(param_1 + 0x28) == '\0') {
    local_c8 = (float)param_1_00;
    fStack_c4 = (float)((ulong)param_1_00 >> 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
    if (_LC8 < (fVar14 - local_c8) * (fVar14 - local_c8) +
               (fStack_c4 - fVar14) * (fStack_c4 - fVar14) +
               (local_c8 - fStack_c4) * (local_c8 - fStack_c4) + 0.0) {
      fVar23 = (float)uVar12;
      fVar16 = (float)uVar8;
      fVar15 = (float)((ulong)uVar8 >> 0x20);
      fVar24 = (float)((ulong)uVar12 >> 0x20);
      fVar18 = fVar15 + fVar15;
      fVar22 = fVar16 + fVar16;
      fVar13 = fVar24 * (fVar23 + fVar23);
      fVar26 = fVar23 * (fVar23 + fVar23);
      fVar19 = fVar23 * fVar22 - fVar18 * fVar24;
      fVar20 = fVar23 * fVar18 - fVar22 * fVar24;
      fVar25 = fVar23 * fVar22 + fVar18 * fVar24;
      fVar23 = fVar22 * fVar24 + fVar23 * fVar18;
      fVar27 = fVar15 * fVar22 - fVar13;
      fVar13 = fVar13 + fVar15 * fVar22;
      fVar24 = (_LC0 - fVar26) - fVar16 * fVar22;
      fVar16 = (_LC0 - fVar16 * fVar22) - fVar15 * fVar18;
      fVar26 = (_LC0 - fVar15 * fVar18) - fVar26;
      fVar16 = fVar20 * fStack_c4 * fVar20 + fVar25 * local_c8 * fVar25 + fVar16 * fVar14 * fVar16;
      uStack_b0 = CONCAT44(fVar16,fVar16);
      local_b8 = CONCAT44(fVar23 * fVar14 * fVar23 +
                          fVar24 * fVar24 * fStack_c4 + fVar27 * local_c8 * fVar27,
                          fVar14 * fVar19 * fVar19 +
                          fStack_c4 * fVar13 * fVar13 + local_c8 * fVar26 * fVar26);
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = *(undefined8 *)(param_1 + 0x48);
  }
  fVar6 = (float)uVar8;
  fVar10 = (float)uVar12;
  fVar7 = (float)((ulong)uVar8 >> 0x20);
  fVar17 = fVar6 + fVar6;
  lVar9 = 0;
  fVar21 = fVar7 + fVar7;
  fVar11 = (float)((ulong)uVar12 >> 0x20);
  fVar15 = fVar11 * (fVar10 + fVar10);
  fVar24 = fVar10 * (fVar10 + fVar10);
  unique0x1000001e = fVar7 * fVar17 + fVar15;
  local_a8 = (_LC0 - fVar7 * fVar21) - fVar24;
  unique0x10000022 = fVar10 * fVar17 - fVar21 * fVar11;
  unique0x10000026 = 0;
  fVar14 = param_5[4];
  fVar16 = param_5[5];
  fVar23 = param_5[6];
  fVar13 = param_5[7];
  local_98._4_4_ = (_LC0 - fVar24) - fVar6 * fVar17;
  local_98._0_4_ = fVar7 * fVar17 - fVar15;
  fVar15 = param_5[8];
  fVar24 = param_5[9];
  fVar18 = param_5[10];
  fVar19 = param_5[0xb];
  fVar26 = param_5[0xc];
  fVar20 = param_5[0xd];
  fVar22 = param_5[0xe];
  fVar25 = param_5[0xf];
  local_98._8_4_ = fVar17 * fVar11 + fVar10 * fVar21;
  local_98._12_4_ = 0;
  fVar27 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  local_88 = CONCAT44(fVar10 * fVar21 - fVar17 * fVar11,fVar10 * fVar17 + fVar21 * fVar11);
  fStack_80 = (_LC0 - fVar6 * fVar17) - fVar7 * fVar21;
  uStack_7c = 0;
  local_78 = __LC2;
  uStack_70 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar6 = *(float *)(local_a8 + lVar9);
    fVar7 = *(float *)(local_a8 + lVar9 + 4);
    fVar10 = *(float *)(local_a8 + lVar9 + 8);
    fVar11 = *(float *)(local_a8 + lVar9 + 0xc);
    *(float *)((long)local_68 + lVar9) =
         fVar11 * fVar26 + fVar6 * fVar27 + fVar7 * fVar14 + fVar10 * fVar15;
    *(float *)((long)local_68 + lVar9 + 4) =
         fVar11 * fVar20 + fVar6 * fVar3 + fVar7 * fVar16 + fVar10 * fVar24;
    *(float *)((long)local_68 + lVar9 + 8) =
         fVar11 * fVar22 + fVar6 * fVar4 + fVar7 * fVar23 + fVar10 * fVar18;
    *(float *)((long)local_68 + lVar9 + 0xc) =
         fVar11 * fVar25 + fVar6 * fVar5 + fVar7 * fVar13 + fVar10 * fVar19;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x40);
  (*pcVar2)(local_b8,uStack_b0,plVar1,param_2,local_68,param_6,param_7,param_8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&,
   float&, float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::RotatedTranslatedShape::GetSubmergedVolume
               (ulong param_1_00,float param_2,long param_1,float *param_4,undefined8 param_5,
               undefined8 param_6)

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
  long lVar10;
  float fVar11;
  float fVar12;
  long in_FS_OFFSET;
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
  float local_b8;
  float fStack_b4;
  ulong local_a8;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined8 local_48;
  ulong uStack_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar11 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar20 = fVar14 + fVar14;
  fVar12 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar18 = fVar11 + fVar11;
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar22 = fVar12 * (fVar12 + fVar12);
  fVar24 = fVar15 * (fVar12 + fVar12);
  local_38._0_4_ = fVar12 * fVar18 + fVar20 * fVar15;
  local_58 = (_LC0 - fVar14 * fVar20) - fVar22;
  register0x00001304 = fVar14 * fVar18 + fVar24;
  register0x00001308 = fVar12 * fVar18 - fVar20 * fVar15;
  register0x0000130c = 0;
  fVar19 = *param_4;
  fVar13 = param_4[1];
  fVar16 = param_4[2];
  fVar25 = param_4[3];
  local_38._4_4_ = fVar12 * fVar20 - fVar18 * fVar15;
  fVar17 = param_4[0xc];
  fVar21 = param_4[0xd];
  fVar23 = param_4[0xe];
  fVar1 = param_4[0xf];
  local_48 = CONCAT44((_LC0 - fVar22) - fVar11 * fVar18,fVar14 * fVar18 - fVar24);
  uStack_40 = (ulong)(uint)(fVar18 * fVar15 + fVar12 * fVar20);
  fVar22 = param_4[8];
  fVar24 = param_4[9];
  fVar2 = param_4[10];
  fVar3 = param_4[0xb];
  fVar4 = param_4[4];
  fVar5 = param_4[5];
  fVar6 = param_4[6];
  fVar7 = param_4[7];
  lVar10 = 0;
  local_38._8_4_ = (_LC0 - fVar11 * fVar18) - fVar14 * fVar20;
  local_38._12_4_ = 0;
  local_28 = __LC2;
  uStack_20 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar18 = *(float *)(local_58 + lVar10);
    fVar20 = *(float *)(local_58 + lVar10 + 4);
    fVar8 = *(float *)(local_58 + lVar10 + 8);
    fVar9 = *(float *)(local_58 + lVar10 + 0xc);
    *(float *)((long)local_98 + lVar10) =
         fVar9 * fVar17 + fVar18 * fVar19 + fVar20 * fVar4 + fVar8 * fVar22;
    *(float *)((long)local_98 + lVar10 + 4) =
         fVar9 * fVar21 + fVar18 * fVar13 + fVar20 * fVar5 + fVar8 * fVar24;
    *(float *)((long)local_98 + lVar10 + 8) =
         fVar9 * fVar23 + fVar18 * fVar16 + fVar20 * fVar6 + fVar8 * fVar2;
    *(float *)((long)local_98 + lVar10 + 0xc) =
         fVar9 * fVar1 + fVar18 * fVar25 + fVar20 * fVar7 + fVar8 * fVar3;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  local_b8 = (float)param_1_00;
  fStack_b4 = (float)(param_1_00 >> 0x20);
  local_a8 = param_1_00;
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (_LC8 < (param_2 - local_b8) * (param_2 - local_b8) +
             (fStack_b4 - param_2) * (fStack_b4 - param_2) +
             (local_b8 - fStack_b4) * (local_b8 - fStack_b4) + 0.0)) {
    fVar19 = fVar11 + fVar11;
    fVar25 = fVar14 + fVar14;
    fVar21 = fVar12 * fVar25 - fVar19 * fVar15;
    fVar16 = (_LC0 - fVar11 * fVar19) - fVar14 * fVar25;
    fVar23 = fVar12 * fVar19 + fVar25 * fVar15;
    fVar13 = (_LC0 - fVar14 * fVar25) - fVar12 * (fVar12 + fVar12);
    fVar17 = fVar12 * fVar19 - fVar25 * fVar15;
    fVar19 = fVar15 * (fVar12 + fVar12) + fVar14 * fVar19;
    fVar25 = param_2 * fVar17;
    param_2 = fVar21 * fStack_b4 * fVar21 + fVar23 * local_b8 * fVar23 + fVar16 * param_2 * fVar16;
    local_a8 = (ulong)(uint)(fVar25 * fVar17 +
                            fStack_b4 * fVar19 * fVar19 + local_b8 * fVar13 * fVar13);
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0x78))
            (local_a8,param_2,*(long **)(param_1 + 0x20),local_98,param_5,param_6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::RotatedTranslatedShape::GetSupportingFace
               (undefined8 param_1_00,float param_2,ulong param_3,float param_4,long param_1,
               undefined8 param_6,float *param_7)

{
  long *plVar1;
  code *pcVar2;
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
  long lVar16;
  float fVar17;
  float fVar18;
  long in_FS_OFFSET;
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
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  ulong local_f8;
  undefined1 local_c8 [4];
  float afStack_c4 [3];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88 [18];
  long local_40;
  
  lVar16 = 0;
  fVar18 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar19 = fVar18 + fVar18;
  fVar30 = fVar29 + fVar29;
  fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar32 = fVar17 * (fVar17 + fVar17);
  fVar23 = fVar27 * (fVar17 + fVar17);
  fVar26 = fVar17 * fVar30 - fVar19 * fVar27;
  fVar20 = fVar19 * fVar27 + fVar17 * fVar30;
  fVar22 = fVar17 * fVar19 - fVar30 * fVar27;
  fVar28 = fVar17 * fVar19 + fVar30 * fVar27;
  fVar24 = fVar29 * fVar19 + fVar23;
  fVar23 = fVar29 * fVar19 - fVar23;
  fVar21 = (_LC0 - fVar29 * fVar30) - fVar32;
  fVar36 = (_LC0 - fVar32) - fVar18 * fVar19;
  fVar35 = (_LC0 - fVar18 * fVar19) - fVar29 * fVar30;
  register0x000012c4 = fVar24;
  local_c8 = fVar21;
  register0x000012c8 = fVar22;
  register0x000012cc = 0;
  local_b8._4_4_ = fVar36;
  local_b8._0_4_ = fVar23;
  local_b8._8_4_ = fVar20;
  local_b8._12_4_ = 0;
  plVar1 = *(long **)(param_1 + 0x20);
  local_a8._4_4_ = fVar26;
  local_a8._0_4_ = fVar28;
  fVar19 = *param_7;
  fVar30 = param_7[1];
  fVar32 = param_7[2];
  fVar25 = param_7[3];
  fVar33 = param_7[4];
  fVar31 = param_7[5];
  fVar34 = param_7[6];
  fVar3 = param_7[7];
  local_a8._8_4_ = fVar35;
  local_a8._12_4_ = 0;
  fVar4 = param_7[8];
  fVar5 = param_7[9];
  fVar6 = param_7[10];
  fVar7 = param_7[0xb];
  fVar8 = param_7[0xc];
  fVar9 = param_7[0xd];
  fVar10 = param_7[0xe];
  fVar11 = param_7[0xf];
  pcVar2 = *(code **)(*plVar1 + 0x60);
  local_98 = __LC2;
  uStack_90 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar12 = *(float *)(local_c8 + lVar16);
    fVar13 = *(float *)(local_c8 + lVar16 + 4);
    fVar14 = *(float *)(local_c8 + lVar16 + 8);
    fVar15 = *(float *)(local_c8 + lVar16 + 0xc);
    *(float *)((long)local_88 + lVar16) =
         fVar15 * fVar8 + fVar14 * fVar4 + fVar13 * fVar33 + fVar12 * fVar19;
    *(float *)((long)local_88 + lVar16 + 4) =
         fVar15 * fVar9 + fVar14 * fVar5 + fVar13 * fVar31 + fVar12 * fVar30;
    *(float *)((long)local_88 + lVar16 + 8) =
         fVar15 * fVar10 + fVar14 * fVar6 + fVar13 * fVar34 + fVar12 * fVar32;
    *(float *)((long)local_88 + lVar16 + 0xc) =
         fVar15 * fVar11 + fVar14 * fVar7 + fVar13 * fVar3 + fVar12 * fVar25;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x40);
  local_108 = (float)param_3;
  fStack_104 = (float)(param_3 >> 0x20);
  local_f8 = param_3;
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (_LC8 < (param_4 - local_108) * (param_4 - local_108) +
             (fStack_104 - param_4) * (fStack_104 - param_4) +
             (local_108 - fStack_104) * (local_108 - fStack_104) + 0.0)) {
    fVar19 = fVar29 + fVar29;
    fVar33 = fVar18 + fVar18;
    fVar30 = (_LC0 - fVar18 * fVar33) - fVar29 * fVar19;
    fVar32 = fVar17 * fVar19 - fVar33 * fVar27;
    fVar31 = fVar17 * fVar33 - fVar19 * fVar27;
    fVar25 = fVar17 * fVar33 + fVar19 * fVar27;
    fVar19 = (_LC0 - fVar29 * fVar19) - (fVar17 + fVar17) * fVar17;
    fVar34 = fVar29 * fVar33 + fVar27 * (fVar17 + fVar17);
    fVar33 = fVar31 * param_4;
    param_4 = fVar25 * local_108 * fVar25 + fVar32 * fStack_104 * fVar32 + fVar30 * param_4 * fVar30
    ;
    local_f8 = (ulong)(uint)(fVar19 * local_108 * fVar19 + fVar34 * fStack_104 * fVar34 +
                            fVar33 * fVar31);
  }
  local_118._0_4_ = (float)param_1_00;
  local_118._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  fVar28 = (float)local_118 * fVar28;
  fVar30 = (float)local_118 * 0.0;
  fVar26 = fVar26 * local_118._4_4_;
  fVar19 = local_118._4_4_ * 0.0;
  local_118 = CONCAT44((float)local_118 * fVar23 + fVar36 * local_118._4_4_ + fVar20 * param_2,
                       (float)local_118 * fVar21 + fVar24 * local_118._4_4_ + fVar22 * param_2);
  uStack_110 = CONCAT44(fVar30 + fVar19 + param_2 * 0.0,fVar28 + fVar26 + fVar35 * param_2);
  (*pcVar2)(local_118,uStack_110,local_f8,param_4,plVar1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCollideRotatedTranslatedVsShape(JPH::Shape const*, JPH::Shape
   const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::RotatedTranslatedShape::sCollideRotatedTranslatedVsShape
               (ulong param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,long param_1
               ,long param_2,float *param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

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
  char cVar14;
  float fVar15;
  long lVar16;
  float fVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_108;
  float fStack_104;
  ulong local_f8;
  float local_c8 [16];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  fVar17 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar21 = fVar17 + fVar17;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar22 = fVar18 + fVar18;
  fVar15 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar24 = fVar15 * (fVar15 + fVar15);
  fVar25 = fVar19 * (fVar15 + fVar15);
  local_68._0_4_ = fVar15 * fVar21 + fVar22 * fVar19;
  local_88 = (_LC0 - fVar18 * fVar22) - fVar24;
  register0x00001304 = fVar18 * fVar21 + fVar25;
  register0x00001308 = fVar15 * fVar21 - fVar22 * fVar19;
  register0x0000130c = 0;
  local_68._4_4_ = fVar15 * fVar22 - fVar21 * fVar19;
  local_78 = CONCAT44((_LC0 - fVar24) - fVar17 * fVar21,fVar18 * fVar21 - fVar25);
  uStack_70 = (ulong)(uint)(fVar21 * fVar19 + fVar15 * fVar22);
  local_68._8_4_ = (_LC0 - fVar17 * fVar21) - fVar18 * fVar22;
  local_68._12_4_ = 0;
  local_58 = __LC2;
  uStack_50 = CONCAT44(_LC0,_UNK_00107798);
  fVar21 = *param_7;
  fVar22 = param_7[1];
  fVar24 = param_7[2];
  fVar25 = param_7[3];
  fVar20 = param_7[8];
  fVar23 = param_7[9];
  fVar26 = param_7[10];
  fVar1 = param_7[0xb];
  fVar2 = param_7[4];
  fVar3 = param_7[5];
  fVar4 = param_7[6];
  fVar5 = param_7[7];
  fVar6 = param_7[0xc];
  fVar7 = param_7[0xd];
  fVar8 = param_7[0xe];
  fVar9 = param_7[0xf];
  lVar16 = 0;
  do {
    fVar10 = *(float *)(local_88 + lVar16);
    fVar11 = *(float *)(local_88 + lVar16 + 4);
    fVar12 = *(float *)(local_88 + lVar16 + 8);
    fVar13 = *(float *)(local_88 + lVar16 + 0xc);
    *(float *)((long)local_c8 + lVar16) =
         fVar13 * fVar6 + fVar10 * fVar21 + fVar11 * fVar2 + fVar12 * fVar20;
    *(float *)((long)local_c8 + lVar16 + 4) =
         fVar13 * fVar7 + fVar10 * fVar22 + fVar11 * fVar3 + fVar12 * fVar23;
    *(float *)((long)local_c8 + lVar16 + 8) =
         fVar13 * fVar8 + fVar10 * fVar24 + fVar11 * fVar4 + fVar12 * fVar26;
    *(float *)((long)local_c8 + lVar16 + 0xc) =
         fVar13 * fVar9 + fVar10 * fVar25 + fVar11 * fVar5 + fVar12 * fVar1;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x40);
  local_108 = (float)param_1_00;
  fStack_104 = (float)(param_1_00 >> 0x20);
  local_f8 = param_1_00;
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (_LC8 < (param_2_00 - local_108) * (param_2_00 - local_108) +
             (fStack_104 - param_2_00) * (fStack_104 - param_2_00) +
             (local_108 - fStack_104) * (local_108 - fStack_104) + 0.0)) {
    fVar21 = fVar17 + fVar17;
    fVar24 = fVar18 + fVar18;
    fVar20 = fVar15 * fVar24 - fVar21 * fVar19;
    fVar25 = (_LC0 - fVar17 * fVar21) - fVar18 * fVar24;
    fVar23 = fVar15 * fVar21 + fVar24 * fVar19;
    fVar22 = fVar15 * fVar21 - fVar24 * fVar19;
    fVar24 = (_LC0 - fVar18 * fVar24) - fVar15 * (fVar15 + fVar15);
    fVar21 = fVar19 * (fVar15 + fVar15) + fVar18 * fVar21;
    fVar26 = fVar22 * param_2_00;
    param_2_00 = fVar20 * fStack_104 * fVar20 + fVar23 * local_108 * fVar23 +
                 fVar25 * param_2_00 * fVar25;
    local_f8 = (ulong)(uint)(fVar26 * fVar22 +
                            fVar21 * fStack_104 * fVar21 + fVar24 * local_108 * fVar24);
  }
  lVar16 = *(long *)(param_1 + 0x20);
  cVar14 = (**(code **)(*param_13 + 0x18))(param_13,lVar16,param_9,param_2,param_10);
  if (cVar14 != '\0') {
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(param_2 + 0x19) + (ulong)*(byte *)(lVar16 + 0x19) * 0x22])
              (local_f8,param_2_00,param_3,param_4,lVar16,param_2,local_c8,param_8,param_9,param_10,
               param_11,param_12,param_13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCollideShapeVsRotatedTranslated(JPH::Shape const*, JPH::Shape
   const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::RotatedTranslatedShape::sCollideShapeVsRotatedTranslated
               (undefined8 param_1_00,undefined8 param_2_00,ulong param_3,float param_4,long param_1
               ,long param_2,undefined8 param_7,float *param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

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
  char cVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_108;
  float fStack_104;
  ulong local_f8;
  float local_c8 [16];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  fVar16 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar17 = (float)*(undefined8 *)(param_2 + 0x40);
  fVar19 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  fVar23 = fVar19 + fVar19;
  fVar22 = fVar17 + fVar17;
  fVar18 = fVar21 * (fVar16 + fVar16);
  fVar25 = fVar16 * (fVar16 + fVar16);
  local_68._0_4_ = fVar16 * fVar22 + fVar23 * fVar21;
  local_88 = (_LC0 - fVar19 * fVar23) - fVar25;
  register0x000012c4 = fVar19 * fVar22 + fVar18;
  register0x000012c8 = fVar16 * fVar22 - fVar23 * fVar21;
  register0x000012cc = 0;
  local_68._4_4_ = fVar16 * fVar23 - fVar22 * fVar21;
  local_78 = CONCAT44((_LC0 - fVar25) - fVar17 * fVar22,fVar19 * fVar22 - fVar18);
  uStack_70 = (ulong)(uint)(fVar22 * fVar21 + fVar16 * fVar23);
  local_68._8_4_ = (_LC0 - fVar17 * fVar22) - fVar19 * fVar23;
  local_68._12_4_ = 0;
  local_58 = __LC2;
  uStack_50 = CONCAT44(_LC0,_UNK_00107798);
  fVar18 = *param_8;
  fVar22 = param_8[1];
  fVar23 = param_8[2];
  fVar25 = param_8[3];
  fVar20 = param_8[4];
  fVar24 = param_8[5];
  fVar26 = param_8[6];
  fVar1 = param_8[7];
  fVar2 = param_8[8];
  fVar3 = param_8[9];
  fVar4 = param_8[10];
  fVar5 = param_8[0xb];
  fVar6 = param_8[0xc];
  fVar7 = param_8[0xd];
  fVar8 = param_8[0xe];
  fVar9 = param_8[0xf];
  lVar15 = 0;
  do {
    fVar10 = *(float *)(local_88 + lVar15);
    fVar11 = *(float *)(local_88 + lVar15 + 4);
    fVar12 = *(float *)(local_88 + lVar15 + 8);
    fVar13 = *(float *)(local_88 + lVar15 + 0xc);
    *(float *)((long)local_c8 + lVar15) =
         fVar13 * fVar6 + fVar10 * fVar18 + fVar11 * fVar20 + fVar12 * fVar2;
    *(float *)((long)local_c8 + lVar15 + 4) =
         fVar13 * fVar7 + fVar10 * fVar22 + fVar11 * fVar24 + fVar12 * fVar3;
    *(float *)((long)local_c8 + lVar15 + 8) =
         fVar13 * fVar8 + fVar10 * fVar23 + fVar11 * fVar26 + fVar12 * fVar4;
    *(float *)((long)local_c8 + lVar15 + 0xc) =
         fVar13 * fVar9 + fVar10 * fVar25 + fVar11 * fVar1 + fVar12 * fVar5;
    lVar15 = lVar15 + 0x10;
  } while (lVar15 != 0x40);
  local_108 = (float)param_3;
  fStack_104 = (float)(param_3 >> 0x20);
  local_f8 = param_3;
  if ((*(char *)(param_2 + 0x28) == '\0') &&
     (_LC8 < (param_4 - local_108) * (param_4 - local_108) +
             (fStack_104 - param_4) * (fStack_104 - param_4) +
             (local_108 - fStack_104) * (local_108 - fStack_104) + 0.0)) {
    fVar22 = fVar19 + fVar19;
    fVar18 = fVar17 + fVar17;
    fVar24 = fVar16 * fVar22 - fVar18 * fVar21;
    fVar25 = (_LC0 - fVar17 * fVar18) - fVar19 * fVar22;
    fVar26 = fVar16 * fVar18 + fVar22 * fVar21;
    fVar20 = fVar16 * fVar18 - fVar22 * fVar21;
    fVar18 = fVar19 * fVar18 + fVar21 * (fVar16 + fVar16);
    fVar22 = (_LC0 - fVar19 * fVar22) - fVar16 * (fVar16 + fVar16);
    fVar23 = fVar20 * param_4;
    param_4 = fVar24 * fStack_104 * fVar24 + fVar26 * local_108 * fVar26 + fVar25 * param_4 * fVar25
    ;
    local_f8 = (ulong)(uint)(fVar23 * fVar20 +
                            fVar18 * fStack_104 * fVar18 + fVar22 * local_108 * fVar22);
  }
  lVar15 = *(long *)(param_2 + 0x20);
  cVar14 = (**(code **)(*param_13 + 0x18))(param_13,param_1,param_9,lVar15,param_10);
  if (cVar14 != '\0') {
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(lVar15 + 0x19) + (ulong)*(byte *)(param_1 + 0x19) * 0x22])
              (param_1_00,param_2_00,local_f8,param_4,param_1,lVar15,param_7,local_c8,param_9,
               param_10,param_11,param_12,param_13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCastRotatedTranslatedVsShape(JPH::ShapeCast const&,
   JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44
   const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::RotatedTranslatedShape::sCastRotatedTranslatedVsShape
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long *plVar2;
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
  char cVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  long in_FS_OFFSET;
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
  long local_188;
  long lStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  long local_c8;
  ulong uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar1 = *param_1;
  fVar15 = (float)*(undefined8 *)(lVar1 + 0x48);
  fVar16 = (float)*(undefined8 *)(lVar1 + 0x40);
  fVar19 = (float)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20);
  fVar24 = fVar19 + fVar19;
  fVar22 = fVar16 + fVar16;
  fVar21 = (float)((ulong)*(undefined8 *)(lVar1 + 0x48) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = 0;
  fVar18 = fVar21 * (fVar15 + fVar15);
  fVar25 = fVar15 * (fVar15 + fVar15);
  local_b8._0_4_ = fVar15 * fVar22 + fVar24 * fVar21;
  local_d8 = (_LC0 - fVar19 * fVar24) - fVar25;
  register0x00001284 = fVar19 * fVar22 + fVar18;
  register0x00001288 = fVar15 * fVar22 - fVar24 * fVar21;
  register0x0000128c = 0;
  fVar17 = *(float *)(param_1 + 4);
  fVar23 = *(float *)((long)param_1 + 0x24);
  fVar20 = *(float *)(param_1 + 5);
  fVar28 = *(float *)((long)param_1 + 0x2c);
  local_b8._4_4_ = fVar15 * fVar24 - fVar22 * fVar21;
  local_c8 = CONCAT44((_LC0 - fVar25) - fVar16 * fVar22,fVar19 * fVar22 - fVar18);
  uStack_c0 = (ulong)(uint)(fVar22 * fVar21 + fVar15 * fVar24);
  local_b8._8_4_ = (_LC0 - fVar16 * fVar22) - fVar19 * fVar24;
  local_b8._12_4_ = 0;
  local_a8 = __LC2;
  uStack_a0 = CONCAT44(_LC0,_UNK_00107798);
  fVar18 = *(float *)(param_1 + 6);
  fVar22 = *(float *)((long)param_1 + 0x34);
  fVar24 = *(float *)(param_1 + 7);
  fVar25 = *(float *)((long)param_1 + 0x3c);
  fVar26 = *(float *)(param_1 + 8);
  fVar27 = *(float *)((long)param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 9);
  fVar4 = *(float *)((long)param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 10);
  fVar6 = *(float *)((long)param_1 + 0x54);
  fVar7 = *(float *)(param_1 + 0xb);
  fVar8 = *(float *)((long)param_1 + 0x5c);
  do {
    fVar9 = *(float *)(local_d8 + lVar14);
    fVar10 = *(float *)(local_d8 + lVar14 + 4);
    fVar11 = *(float *)(local_d8 + lVar14 + 8);
    fVar12 = *(float *)(local_d8 + lVar14 + 0xc);
    *(float *)((long)local_118 + lVar14) =
         fVar12 * fVar5 + fVar9 * fVar17 + fVar10 * fVar18 + fVar11 * fVar26;
    *(float *)((long)local_118 + lVar14 + 4) =
         fVar12 * fVar6 + fVar9 * fVar23 + fVar10 * fVar22 + fVar11 * fVar27;
    *(float *)((long)local_118 + lVar14 + 8) =
         fVar12 * fVar7 + fVar9 * fVar20 + fVar10 * fVar24 + fVar11 * fVar3;
    *(float *)((long)local_118 + lVar14 + 0xc) =
         fVar12 * fVar8 + fVar9 * fVar28 + fVar10 * fVar25 + fVar11 * fVar4;
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x40);
  local_188 = param_1[2];
  lStack_180 = param_1[3];
  if (*(char *)(lVar1 + 0x28) == '\0') {
    local_178 = (float)local_188;
    fStack_174 = (float)((ulong)local_188 >> 0x20);
    fStack_170 = (float)lStack_180;
    if (_LC8 < (fStack_170 - local_178) * (fStack_170 - local_178) +
               (fStack_174 - fStack_170) * (fStack_174 - fStack_170) +
               (local_178 - fStack_174) * (local_178 - fStack_174) + 0.0) {
      fVar22 = fVar16 + fVar16;
      fVar20 = fVar15 * (fVar15 + fVar15);
      fVar28 = fVar19 + fVar19;
      fVar17 = fVar21 * (fVar15 + fVar15);
      fVar25 = (_LC0 - fVar20) - fVar16 * fVar22;
      fVar27 = (_LC0 - fVar16 * fVar22) - fVar19 * fVar28;
      fVar18 = fVar15 * fVar22 + fVar28 * fVar21;
      fVar20 = (_LC0 - fVar19 * fVar28) - fVar20;
      fVar23 = fVar15 * fVar28 - fVar22 * fVar21;
      fVar24 = fVar22 * fVar21 + fVar15 * fVar28;
      fVar26 = fVar19 * fVar22 - fVar17;
      fVar28 = fVar15 * fVar22 - fVar28 * fVar21;
      fVar17 = fVar19 * fVar22 + fVar17;
      fVar23 = fVar23 * fStack_174 * fVar23 + fVar18 * local_178 * fVar18 +
               fVar27 * fStack_170 * fVar27;
      lStack_180 = CONCAT44(fVar23,fVar23);
      local_188 = CONCAT44(fVar24 * fStack_170 * fVar24 +
                           fVar25 * fVar25 * fStack_174 + fVar26 * fVar26 * local_178,
                           fVar28 * fStack_170 * fVar28 +
                           fVar17 * fStack_174 * fVar17 + fVar20 * local_178 * fVar20);
    }
  }
  plVar2 = *(long **)(lVar1 + 0x20);
  lVar1 = param_1[0xc];
  lVar14 = param_1[0xd];
  (**(code **)(*plVar2 + 0x30))(local_188,lStack_180,&local_138,plVar2,local_118);
  local_c8 = local_188;
  uStack_c0 = lStack_180;
  _local_d8 = (long)plVar2;
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_68 = local_138;
  uStack_60 = uStack_130;
  local_58 = local_128;
  uStack_50 = uStack_120;
  local_78 = lVar1;
  lStack_70 = lVar14;
  cVar13 = (**(code **)(*param_6 + 0x18))(param_6,plVar2,param_8,param_3,param_9);
  if (cVar13 != '\0') {
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(param_3 + 0x19) + (ulong)*(byte *)(_local_d8 + 0x19) * 0x22])
              (param_1_00,param_2_00,local_d8,param_2,param_3,param_6,param_7,param_8,param_9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::RotatedTranslatedShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JPH::RotatedTranslatedShape::CollectTransformedShapes
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_1,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,long *param_11)

{
  char cVar1;
  float fVar2;
  undefined8 uVar4;
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
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uVar3;
  
  fVar2 = (float)param_6;
  fVar11 = (float)((ulong)param_4 >> 0x20);
  fVar10 = (float)param_4;
  fVar9 = (float)((ulong)param_3 >> 0x20);
  fVar8 = (float)param_3;
  cVar1 = (**(code **)(*param_11 + 0x10))(param_11,param_1);
  if (cVar1 != '\0') {
    local_68 = param_5;
    uStack_60 = param_6;
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_78._0_4_ = (float)param_5;
      local_78._4_4_ = (float)((ulong)param_5 >> 0x20);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      if (_LC8 < (fVar2 - (float)local_78) * (fVar2 - (float)local_78) +
                 (local_78._4_4_ - fVar2) * (local_78._4_4_ - fVar2) +
                 ((float)local_78 - local_78._4_4_) * ((float)local_78 - local_78._4_4_) + 0.0) {
        fVar7 = (float)uVar4;
        fVar5 = (float)uVar3;
        fVar17 = fVar5 + fVar5;
        fVar15 = (float)((ulong)uVar3 >> 0x20);
        fVar21 = fVar15 + fVar15;
        fVar12 = fVar7 * (fVar7 + fVar7);
        fVar13 = (float)((ulong)uVar4 >> 0x20);
        fVar6 = fVar13 * (fVar7 + fVar7);
        fVar19 = (_LC0 - fVar12) - fVar5 * fVar17;
        fVar20 = (_LC0 - fVar5 * fVar17) - fVar15 * fVar21;
        fVar5 = fVar15 * fVar17 + fVar6;
        fVar16 = fVar7 * fVar17 + fVar21 * fVar13;
        fVar6 = fVar15 * fVar17 - fVar6;
        fVar14 = fVar7 * fVar21 - fVar17 * fVar13;
        fVar18 = fVar17 * fVar13 + fVar7 * fVar21;
        fVar13 = fVar7 * fVar17 - fVar21 * fVar13;
        fVar12 = (_LC0 - fVar15 * fVar21) - fVar12;
        fVar7 = fVar14 * local_78._4_4_ * fVar14 + fVar16 * (float)local_78 * fVar16 +
                fVar20 * fVar2 * fVar20;
        uStack_60 = CONCAT44(fVar7,fVar7);
        local_68 = CONCAT44(fVar18 * fVar2 * fVar18 +
                            fVar19 * fVar19 * local_78._4_4_ + fVar6 * fVar6 * (float)local_78,
                            fVar13 * fVar2 * fVar13 +
                            fVar5 * local_78._4_4_ * fVar5 + fVar12 * (float)local_78 * fVar12);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
    }
    fVar2 = (float)uVar3;
    fVar5 = (float)uVar4;
    fVar6 = (float)((ulong)uVar3 >> 0x20);
    fVar7 = (float)((ulong)uVar4 >> 0x20);
    local_78 = CONCAT44(fVar7 * fVar9 + (fVar6 * fVar11 - fVar8 * fVar5) + fVar10 * fVar2,
                        (fVar5 * fVar9 + fVar2 * fVar11 + fVar8 * fVar7) - fVar10 * fVar6);
                    /* WARNING: Could not recover jumptable at 0x00104176. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))
              (param_1_00,param_2,local_78,
               CONCAT44(((fVar7 * fVar11 - fVar8 * fVar2) - fVar6 * fVar9) - fVar10 * fVar5,
                        ((fVar5 * fVar11 + fVar8 * fVar6) - fVar2 * fVar9) + fVar10 * fVar7),
               local_68,uStack_60,*(long **)(param_1 + 0x20),param_8,param_9,param_10,param_11);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCastShapeVsRotatedTranslated(JPH::ShapeCast const&,
   JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44
   const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::RotatedTranslatedShape::sCastShapeVsRotatedTranslated
               (ulong param_1_00,float param_2_00,undefined8 *param_1,undefined8 param_2,
               long param_3,long *param_6,float *param_7,undefined8 param_8,undefined8 param_9)

{
  float *pfVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  long lVar12;
  float fVar13;
  long in_FS_OFFSET;
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
  float local_1c8;
  float fStack_1c4;
  ulong local_1b8;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [4];
  float afStack_154 [3];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar18 = (float)*(undefined8 *)(param_3 + 0x48);
  fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_3 + 0x40);
  fVar23 = fVar18 * (fVar18 + fVar18);
  fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  lVar12 = 0;
  fVar17 = fVar14 + fVar14;
  fVar24 = fVar16 + fVar16;
  fVar15 = fVar13 * (fVar18 + fVar18);
  fVar19 = fVar18 * fVar17 - fVar24 * fVar13;
  fVar26 = fVar16 * fVar17 - fVar15;
  fVar15 = fVar15 + fVar16 * fVar17;
  fVar21 = fVar18 * fVar24 - fVar17 * fVar13;
  fVar22 = fVar17 * fVar13 + fVar18 * fVar24;
  fVar25 = (_LC0 - fVar23) - fVar14 * fVar17;
  fVar20 = (_LC0 - fVar14 * fVar17) - fVar16 * fVar24;
  fVar14 = fVar18 * fVar17 + fVar24 * fVar13;
  fVar23 = (_LC0 - fVar16 * fVar24) - fVar23;
  register0x000012c4 = fVar15;
  local_158 = fVar23;
  register0x000012c8 = fVar19;
  register0x000012cc = 0;
  local_148._4_4_ = fVar25;
  local_148._0_4_ = fVar26;
  local_148._8_4_ = fVar22;
  local_148._12_4_ = 0;
  local_138._4_4_ = fVar21;
  local_138._0_4_ = fVar14;
  local_138._8_4_ = fVar20;
  local_138._12_4_ = 0;
  local_128 = __LC2;
  fStack_124 = _UNK_00107794;
  fStack_120 = _UNK_00107798;
  fStack_11c = _LC0;
  do {
    pfVar1 = (float *)((long)param_1 + lVar12 + 0x20);
    fVar16 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar17 = pfVar1[3];
    *(float *)((long)&local_118 + lVar12) =
         fVar17 * __LC2 + fVar16 * fVar23 + fVar18 * fVar15 + fVar13 * fVar19;
    *(float *)((long)&local_118 + lVar12 + 4) =
         fVar17 * _UNK_00107794 + fVar16 * fVar26 + fVar18 * fVar25 + fVar13 * fVar22;
    *(float *)((long)&uStack_110 + lVar12) =
         fVar17 * _UNK_00107798 + fVar16 * fVar14 + fVar18 * fVar21 + fVar13 * fVar20;
    *(float *)((long)&uStack_110 + lVar12 + 4) =
         fVar17 * _LC0 + fVar16 * 0.0 + fVar18 * 0.0 + fVar13 * 0.0;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  fVar16 = *(float *)(param_1 + 0xc);
  fVar18 = *(float *)((long)param_1 + 100);
  fVar13 = *(float *)(param_1 + 0xd);
  plVar2 = (long *)*param_1;
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  (**(code **)(*plVar2 + 0x30))(uVar3,uVar4,&local_178,plVar2,&local_118);
  local_78 = CONCAT44(fVar25 * fVar18 + fVar16 * fVar26 + fVar13 * fVar22,
                      fVar15 * fVar18 + fVar16 * fVar23 + fVar13 * fVar19);
  uStack_70 = CONCAT44(fVar18 * 0.0 + fVar16 * 0.0 + fVar13 * 0.0,
                       fVar21 * fVar18 + fVar16 * fVar14 + fVar13 * fVar20);
  local_b8 = local_118;
  uStack_b0 = uStack_110;
  fVar14 = param_7[4];
  fVar16 = param_7[5];
  fVar18 = param_7[6];
  fVar13 = param_7[7];
  fVar15 = param_7[8];
  fVar17 = param_7[9];
  fVar19 = param_7[10];
  fVar23 = param_7[0xb];
  local_58 = local_168;
  uStack_50 = uStack_160;
  fVar20 = param_7[0xc];
  fVar21 = param_7[0xd];
  fVar22 = param_7[0xe];
  fVar24 = param_7[0xf];
  fVar25 = *param_7;
  fVar26 = param_7[1];
  fVar5 = param_7[2];
  fVar6 = param_7[3];
  local_a8 = local_108;
  uStack_a0 = uStack_100;
  lVar12 = 0;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_68 = local_178;
  uStack_60 = uStack_170;
  local_d8[0] = plVar2;
  do {
    fVar7 = *(float *)(local_158 + lVar12);
    fVar8 = *(float *)(local_158 + lVar12 + 4);
    fVar9 = *(float *)(local_158 + lVar12 + 8);
    fVar10 = *(float *)(local_158 + lVar12 + 0xc);
    *(float *)((long)&local_118 + lVar12) =
         fVar10 * fVar20 + fVar7 * fVar25 + fVar8 * fVar14 + fVar9 * fVar15;
    *(float *)((long)&local_118 + lVar12 + 4) =
         fVar10 * fVar21 + fVar7 * fVar26 + fVar8 * fVar16 + fVar9 * fVar17;
    *(float *)((long)&uStack_110 + lVar12) =
         fVar10 * fVar22 + fVar7 * fVar5 + fVar8 * fVar18 + fVar9 * fVar19;
    *(float *)((long)&uStack_110 + lVar12 + 4) =
         fVar10 * fVar24 + fVar7 * fVar6 + fVar8 * fVar13 + fVar9 * fVar23;
    lVar12 = lVar12 + 0x10;
  } while (lVar12 != 0x40);
  local_1c8 = (float)param_1_00;
  fStack_1c4 = (float)(param_1_00 >> 0x20);
  local_1b8 = param_1_00;
  if ((*(char *)(param_3 + 0x28) == '\0') &&
     (_LC8 < (param_2_00 - local_1c8) * (param_2_00 - local_1c8) +
             (fStack_1c4 - param_2_00) * (fStack_1c4 - param_2_00) +
             (local_1c8 - fStack_1c4) * (local_1c8 - fStack_1c4) + 0.0)) {
    fVar18 = (float)*(undefined8 *)(param_3 + 0x48);
    fVar14 = (float)*(undefined8 *)(param_3 + 0x40);
    fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    fVar21 = fVar14 + fVar14;
    fVar15 = fVar16 + fVar16;
    fVar13 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
    fVar20 = fVar18 * fVar21 + fVar15 * fVar13;
    fVar19 = fVar18 * fVar21 - fVar15 * fVar13;
    fVar17 = (_LC0 - fVar14 * fVar21) - fVar16 * fVar15;
    fVar23 = fVar18 * fVar15 - fVar21 * fVar13;
    fVar14 = fVar16 * fVar21 + fVar13 * (fVar18 + fVar18);
    fVar16 = (_LC0 - fVar16 * fVar15) - fVar18 * (fVar18 + fVar18);
    fVar18 = fVar19 * param_2_00;
    param_2_00 = fVar23 * fStack_1c4 * fVar23 + fVar20 * local_1c8 * fVar20 +
                 fVar17 * param_2_00 * fVar17;
    local_1b8 = (ulong)(uint)(fVar18 * fVar19 +
                             fVar14 * fStack_1c4 * fVar14 + fVar16 * local_1c8 * fVar16);
  }
  lVar12 = *(long *)(param_3 + 0x20);
  local_c8 = uVar3;
  local_c0 = uVar4;
  cVar11 = (**(code **)(*param_6 + 0x18))(param_6,plVar2,param_8,lVar12,param_9);
  if (cVar11 != '\0') {
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(lVar12 + 0x19) + (ulong)*(byte *)((long)local_d8[0] + 0x19) * 0x22])
              (local_1b8,param_2_00,local_d8,param_2,lVar12,param_6,&local_118,param_8,param_9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCollideRotatedTranslatedVsRotatedTranslated(JPH::Shape const*,
   JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::RotatedTranslatedShape::sCollideRotatedTranslatedVsRotatedTranslated
               (ulong param_1_00,float param_2_00,ulong param_3,float param_4,long param_1,
               long param_2,float *param_7,float *param_8,undefined8 param_9,undefined8 param_10,
               undefined8 param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  long in_FS_OFFSET;
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
  undefined8 local_148;
  ulong local_138;
  float local_108 [32];
  undefined1 local_88 [4];
  float afStack_84 [3];
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  lVar13 = 0;
  uVar15 = *(ulong *)(param_1 + 0x48);
  fVar14 = (float)uVar15;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x40);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fVar19 = (float)(uVar15 >> 0x20);
  fVar24 = fVar11 + fVar11;
  fVar27 = fVar18 + fVar18;
  fVar17 = fVar19 * (fVar14 + fVar14);
  fVar28 = fVar14 * (fVar14 + fVar14);
  local_68._0_4_ = fVar14 * fVar24 + fVar27 * fVar19;
  local_88 = (_LC0 - fVar18 * fVar27) - fVar28;
  register0x00001284 = fVar18 * fVar24 + fVar17;
  register0x00001288 = fVar14 * fVar24 - fVar27 * fVar19;
  register0x0000128c = 0;
  local_68._4_4_ = fVar14 * fVar27 - fVar24 * fVar19;
  local_78 = CONCAT44((_LC0 - fVar28) - fVar11 * fVar24,fVar18 * fVar24 - fVar17);
  uStack_70 = (ulong)(uint)(fVar24 * fVar19 + fVar14 * fVar27);
  local_68._8_4_ = (_LC0 - fVar11 * fVar24) - fVar18 * fVar27;
  local_68._12_4_ = 0;
  fVar17 = *param_7;
  fVar24 = param_7[1];
  fVar27 = param_7[2];
  fVar28 = param_7[3];
  fVar20 = param_7[4];
  fVar21 = param_7[5];
  fVar26 = param_7[6];
  fVar30 = param_7[7];
  fVar31 = param_7[8];
  fVar32 = param_7[9];
  fVar2 = param_7[10];
  fVar3 = param_7[0xb];
  fVar4 = param_7[0xc];
  fVar5 = param_7[0xd];
  fVar6 = param_7[0xe];
  fVar7 = param_7[0xf];
  local_58 = __LC2;
  uStack_50 = CONCAT44(_LC0,_UNK_00107798);
  do {
    fVar12 = *(float *)(local_88 + lVar13);
    fVar16 = *(float *)(local_88 + lVar13 + 4);
    fVar22 = *(float *)(local_88 + lVar13 + 8);
    fVar23 = *(float *)(local_88 + lVar13 + 0xc);
    *(float *)((long)local_108 + lVar13) =
         fVar23 * fVar4 + fVar12 * fVar17 + fVar16 * fVar20 + fVar22 * fVar31;
    *(float *)((long)local_108 + lVar13 + 4) =
         fVar23 * fVar5 + fVar12 * fVar24 + fVar16 * fVar21 + fVar22 * fVar32;
    *(float *)((long)local_108 + lVar13 + 8) =
         fVar23 * fVar6 + fVar12 * fVar27 + fVar16 * fVar26 + fVar22 * fVar2;
    *(float *)((long)local_108 + lVar13 + 0xc) =
         fVar23 * fVar7 + fVar12 * fVar28 + fVar16 * fVar30 + fVar22 * fVar3;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x40);
  fVar16 = (float)*(undefined8 *)(param_2 + 0x40);
  fVar12 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  fVar25 = fVar16 + fVar16;
  fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  fVar29 = fVar22 + fVar22;
  fVar31 = fVar12 * (fVar12 + fVar12);
  fVar32 = (fVar12 + fVar12) * fVar23;
  local_68._0_4_ = fVar12 * fVar25 + fVar29 * fVar23;
  local_88 = (_LC0 - fVar22 * fVar29) - fVar31;
  register0x00001284 = fVar22 * fVar25 + fVar32;
  register0x00001288 = fVar12 * fVar25 - fVar29 * fVar23;
  register0x0000128c = 0;
  fVar17 = *param_8;
  fVar24 = param_8[1];
  fVar27 = param_8[2];
  fVar28 = param_8[3];
  local_68._4_4_ = fVar12 * fVar29 - fVar25 * fVar23;
  fVar20 = param_8[0xc];
  fVar21 = param_8[0xd];
  fVar26 = param_8[0xe];
  fVar30 = param_8[0xf];
  local_78 = CONCAT44((_LC0 - fVar31) - fVar16 * fVar25,fVar22 * fVar25 - fVar32);
  uStack_70 = (ulong)(uint)(fVar25 * fVar23 + fVar12 * fVar29);
  fVar31 = param_8[8];
  fVar32 = param_8[9];
  fVar2 = param_8[10];
  fVar3 = param_8[0xb];
  fVar4 = param_8[4];
  fVar5 = param_8[5];
  fVar6 = param_8[6];
  fVar7 = param_8[7];
  lVar13 = 0;
  local_68._8_4_ = (_LC0 - fVar16 * fVar25) - fVar22 * fVar29;
  local_68._12_4_ = 0;
  do {
    fVar25 = *(float *)(local_88 + lVar13);
    fVar29 = *(float *)(local_88 + lVar13 + 4);
    fVar8 = *(float *)(local_88 + lVar13 + 8);
    fVar9 = *(float *)(local_88 + lVar13 + 0xc);
    *(float *)((long)(local_108 + 0x10) + lVar13) =
         fVar9 * fVar20 + fVar25 * fVar17 + fVar29 * fVar4 + fVar8 * fVar31;
    *(float *)((long)local_108 + lVar13 + 0x44) =
         fVar9 * fVar21 + fVar25 * fVar24 + fVar29 * fVar5 + fVar8 * fVar32;
    *(float *)((long)local_108 + lVar13 + 0x48) =
         fVar9 * fVar26 + fVar25 * fVar27 + fVar29 * fVar6 + fVar8 * fVar2;
    *(float *)((long)local_108 + lVar13 + 0x4c) =
         fVar9 * fVar30 + fVar25 * fVar28 + fVar29 * fVar7 + fVar8 * fVar3;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x40);
  local_148._0_4_ = (float)param_3;
  local_148._4_4_ = (float)(param_3 >> 0x20);
  local_138 = param_3;
  if ((*(char *)(param_2 + 0x28) == '\0') &&
     (_LC8 < (param_4 - (float)local_148) * (param_4 - (float)local_148) +
             (local_148._4_4_ - param_4) * (local_148._4_4_ - param_4) +
             ((float)local_148 - local_148._4_4_) * ((float)local_148 - local_148._4_4_) + 0.0)) {
    fVar20 = fVar16 + fVar16;
    fVar17 = fVar22 + fVar22;
    fVar26 = fVar12 * fVar20 + fVar17 * fVar23;
    fVar27 = fVar12 * fVar20 - fVar17 * fVar23;
    fVar24 = (_LC0 - fVar16 * fVar20) - fVar22 * fVar17;
    fVar21 = fVar12 * fVar17 - fVar20 * fVar23;
    fVar28 = (_LC0 - fVar22 * fVar17) - fVar12 * (fVar12 + fVar12);
    fVar17 = fVar23 * (fVar12 + fVar12) + fVar22 * fVar20;
    fVar20 = fVar27 * param_4;
    param_4 = fVar21 * local_148._4_4_ * fVar21 + fVar26 * (float)local_148 * fVar26 +
              fVar24 * param_4 * fVar24;
    local_138 = (ulong)(uint)(fVar17 * local_148._4_4_ * fVar17 + fVar28 * (float)local_148 * fVar28
                             + fVar20 * fVar27);
  }
  fVar17 = (float)param_1_00;
  fVar24 = (float)(param_1_00 >> 0x20);
  local_148 = param_1_00;
  if ((*(char *)(param_1 + 0x28) == '\0') &&
     (_LC8 < (param_2_00 - fVar17) * (param_2_00 - fVar17) +
             (fVar24 - param_2_00) * (fVar24 - param_2_00) +
             (fVar17 - fVar24) * (fVar17 - fVar24) + 0.0)) {
    uVar15 = uVar15 >> 0x20;
    fVar27 = fVar11 + fVar11;
    fVar28 = fVar18 + fVar18;
    fVar30 = fVar14 * fVar28 - fVar27 * fVar19;
    fVar21 = (_LC0 - fVar11 * fVar27) - fVar18 * fVar28;
    fVar31 = fVar14 * fVar27 + fVar28 * fVar19;
    fVar26 = fVar14 * fVar27 - fVar28 * fVar19;
    fVar27 = fVar18 * fVar27 + fVar19 * (fVar14 + fVar14);
    fVar28 = (_LC0 - fVar18 * fVar28) - fVar14 * (fVar14 + fVar14);
    fVar20 = fVar26 * param_2_00;
    param_2_00 = fVar30 * fVar24 * fVar30 + fVar31 * fVar17 * fVar31 + fVar21 * param_2_00 * fVar21;
    local_148 = (ulong)(uint)(fVar20 * fVar26 + fVar27 * fVar24 * fVar27 + fVar28 * fVar17 * fVar28)
    ;
  }
  lVar13 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_1 + 0x20);
  cVar10 = (**(code **)(*param_13 + 0x18))(param_13,lVar1,param_9,lVar13,param_10,uVar15,param_13);
  if (cVar10 != '\0') {
    (*(code *)(&CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(lVar13 + 0x19) + (ulong)*(byte *)(lVar1 + 0x19) * 0x22])
              (local_148,param_2_00,local_138,param_4,lVar1,lVar13,local_108,local_108 + 0x10,
               param_9,param_10,param_11,param_12,param_13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sCastRotatedTranslatedVsRotatedTranslated(JPH::ShapeCast const&,
   JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44
   const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::RotatedTranslatedShape::sCastRotatedTranslatedVsRotatedTranslated
               (ulong param_1_00,float param_2_00,long *param_1,undefined8 param_2,long param_3,
               long *param_6,float *param_7,undefined8 param_8,undefined8 param_9)

{
  float *pfVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
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
  float local_1f8;
  float fStack_1f4;
  ulong local_1e8;
  long lStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined1 local_198 [4];
  float afStack_194 [3];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118 [16];
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_40;
  
  lVar4 = *param_1;
  fVar12 = (float)*(undefined8 *)(param_3 + 0x48);
  fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = (float)*(undefined8 *)(param_3 + 0x40);
  fVar16 = fVar12 * (fVar12 + fVar12);
  fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  fVar6 = fVar7 + fVar7;
  fVar21 = fVar9 + fVar9;
  fVar8 = fVar14 * (fVar12 + fVar12);
  fVar10 = fVar12 * fVar6 - fVar21 * fVar14;
  fVar17 = fVar12 * fVar6 + fVar21 * fVar14;
  fVar13 = fVar12 * fVar21 - fVar6 * fVar14;
  fVar15 = fVar6 * fVar14 + fVar12 * fVar21;
  fVar23 = fVar9 * fVar6 - fVar8;
  fVar8 = fVar8 + fVar9 * fVar6;
  fVar11 = (_LC0 - fVar9 * fVar21) - fVar16;
  fVar19 = (_LC0 - fVar16) - fVar7 * fVar6;
  fVar6 = (_LC0 - fVar7 * fVar6) - fVar9 * fVar21;
  register0x00001204 = fVar8;
  local_198 = fVar11;
  register0x00001208 = fVar10;
  register0x0000120c = 0;
  local_188._4_4_ = fVar19;
  local_188._0_4_ = fVar23;
  local_188._8_4_ = fVar15;
  local_188._12_4_ = 0;
  local_178._4_4_ = fVar13;
  local_178._0_4_ = fVar17;
  local_178._8_4_ = fVar6;
  local_178._12_4_ = 0;
  fVar7 = (float)*(undefined8 *)(lVar4 + 0x40);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
  local_168 = __LC2;
  fStack_164 = _UNK_00107794;
  fStack_160 = _UNK_00107798;
  fStack_15c = _LC0;
  local_a8 = CONCAT44(_UNK_00107794,__LC2);
  uStack_a0 = CONCAT44(_LC0,_UNK_00107798);
  fVar12 = (float)*(undefined8 *)(lVar4 + 0x48);
  fVar16 = fVar7 + fVar7;
  fVar21 = fVar9 + fVar9;
  fVar14 = (float)((ulong)*(undefined8 *)(lVar4 + 0x48) >> 0x20);
  fVar22 = fVar12 * (fVar12 + fVar12);
  fVar24 = (fVar12 + fVar12) * fVar14;
  local_d8 = (_LC0 - fVar9 * fVar21) - fVar22;
  lVar5 = 0;
  register0x00001344 = fVar9 * fVar16 + fVar24;
  register0x00001348 = fVar12 * fVar16 - fVar21 * fVar14;
  register0x0000134c = 0;
  local_c8._0_4_ = fVar9 * fVar16 - fVar24;
  local_c8._4_4_ = (_LC0 - fVar22) - fVar7 * fVar16;
  local_c8._8_4_ = fVar16 * fVar14 + fVar12 * fVar21;
  local_c8._12_4_ = 0;
  local_b8 = CONCAT44(fVar12 * fVar21 - fVar16 * fVar14,fVar12 * fVar16 + fVar21 * fVar14);
  uStack_b0 = (ulong)(uint)((_LC0 - fVar7 * fVar16) - fVar9 * fVar21);
  do {
    pfVar1 = (float *)((long)param_1 + lVar5 + 0x20);
    fVar7 = *pfVar1;
    fVar9 = pfVar1[1];
    fVar12 = pfVar1[2];
    fVar14 = pfVar1[3];
    *(float *)((long)local_118 + lVar5) =
         fVar14 * __LC2 + fVar7 * fVar11 + fVar9 * fVar8 + fVar12 * fVar10;
    *(float *)((long)local_118 + lVar5 + 4) =
         fVar14 * _UNK_00107794 + fVar7 * fVar23 + fVar9 * fVar19 + fVar12 * fVar15;
    *(float *)((long)local_118 + lVar5 + 8) =
         fVar14 * _UNK_00107798 + fVar7 * fVar17 + fVar9 * fVar13 + fVar12 * fVar6;
    *(float *)((long)local_118 + lVar5 + 0xc) =
         fVar14 * _LC0 + fVar7 * 0.0 + fVar9 * 0.0 + fVar12 * 0.0;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x40);
  lVar5 = 0;
  do {
    fVar7 = *(float *)(local_d8 + lVar5);
    fVar9 = *(float *)(local_d8 + lVar5 + 4);
    fVar12 = *(float *)(local_d8 + lVar5 + 8);
    fVar14 = *(float *)(local_d8 + lVar5 + 0xc);
    *(float *)((long)&local_158 + lVar5) =
         fVar14 * local_118[0xc] +
         fVar7 * local_118[0] + fVar9 * local_118[4] + fVar12 * local_118[8];
    *(float *)((long)&local_158 + lVar5 + 4) =
         fVar14 * local_118[0xd] +
         fVar7 * local_118[1] + fVar9 * local_118[5] + fVar12 * local_118[9];
    *(float *)((long)&uStack_150 + lVar5) =
         fVar14 * local_118[0xe] +
         fVar7 * local_118[2] + fVar9 * local_118[6] + fVar12 * local_118[10];
    *(float *)((long)&uStack_150 + lVar5 + 4) =
         fVar14 * local_118[0xf] +
         fVar7 * local_118[3] + fVar9 * local_118[7] + fVar12 * local_118[0xb];
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x40);
  local_1e8 = param_1[2];
  lStack_1e0 = param_1[3];
  local_1d8 = (float)local_1e8;
  fStack_1d4 = (float)(local_1e8 >> 0x20);
  fStack_1d0 = (float)lStack_1e0;
  if ((*(char *)(lVar4 + 0x28) == '\0') &&
     (_LC8 < (fStack_1d0 - local_1d8) * (fStack_1d0 - local_1d8) +
             (fStack_1d4 - fStack_1d0) * (fStack_1d4 - fStack_1d0) +
             (local_1d8 - fStack_1d4) * (local_1d8 - fStack_1d4) + 0.0)) {
    fVar7 = (float)*(undefined8 *)(lVar4 + 0x40);
    fVar9 = (float)*(undefined8 *)(lVar4 + 0x48);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar4 + 0x40) >> 0x20);
    fVar24 = fVar7 + fVar7;
    fVar22 = fVar16 + fVar16;
    fVar21 = (float)((ulong)*(undefined8 *)(lVar4 + 0x48) >> 0x20);
    fVar14 = fVar9 * (fVar9 + fVar9);
    fVar12 = fVar21 * (fVar9 + fVar9);
    fVar20 = fVar9 * fVar22 - fVar24 * fVar21;
    fVar18 = fVar24 * fVar21 + fVar9 * fVar22;
    fVar25 = fVar9 * fVar24 + fVar22 * fVar21;
    fVar9 = fVar9 * fVar24 - fVar22 * fVar21;
    fVar21 = (_LC0 - fVar14) - fVar7 * fVar24;
    fVar7 = (_LC0 - fVar7 * fVar24) - fVar16 * fVar22;
    fVar26 = fVar16 * fVar24 - fVar12;
    fVar12 = fVar16 * fVar24 + fVar12;
    fVar14 = (_LC0 - fVar16 * fVar22) - fVar14;
    fVar7 = fVar20 * fStack_1d4 * fVar20 + fVar25 * local_1d8 * fVar25 + fVar7 * fStack_1d0 * fVar7;
    lStack_1e0 = CONCAT44(fVar7,fVar7);
    local_1e8 = CONCAT44(fVar21 * fVar21 * fStack_1d4 + fVar26 * local_1d8 * fVar26 +
                         fVar18 * fStack_1d0 * fVar18,
                         fVar9 * fStack_1d0 * fVar9 +
                         fVar12 * fStack_1d4 * fVar12 + fVar14 * local_1d8 * fVar14);
  }
  fVar7 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)((long)param_1 + 100);
  fVar12 = *(float *)(param_1 + 0xd);
  plVar2 = *(long **)(lVar4 + 0x20);
  (**(code **)(*plVar2 + 0x30))(local_1e8,lStack_1e0,local_118,plVar2,&local_158);
  lVar4 = 0;
  local_78 = CONCAT44(fVar19 * fVar9 + fVar23 * fVar7 + fVar12 * fVar15,
                      fVar8 * fVar9 + fVar11 * fVar7 + fVar12 * fVar10);
  uStack_70 = CONCAT44(fVar9 * 0.0 + fVar7 * 0.0 + fVar12 * 0.0,
                       fVar13 * fVar9 + fVar17 * fVar7 + fVar12 * fVar6);
  local_c8._8_8_ = lStack_1e0;
  local_c8._0_8_ = local_1e8;
  _local_d8 = (long)plVar2;
  fVar7 = *param_7;
  fVar9 = param_7[1];
  fVar12 = param_7[2];
  fVar14 = param_7[3];
  local_b8 = local_158;
  uStack_b0 = uStack_150;
  fVar6 = param_7[4];
  fVar8 = param_7[5];
  fVar10 = param_7[6];
  fVar11 = param_7[7];
  fVar13 = param_7[8];
  fVar15 = param_7[9];
  fVar16 = param_7[10];
  fVar17 = param_7[0xb];
  fVar19 = param_7[0xc];
  fVar21 = param_7[0xd];
  fVar22 = param_7[0xe];
  fVar23 = param_7[0xf];
  local_a8 = local_148;
  uStack_a0 = uStack_140;
  local_98 = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  do {
    fVar24 = *(float *)(local_198 + lVar4);
    fVar18 = *(float *)(local_198 + lVar4 + 4);
    fVar20 = *(float *)(local_198 + lVar4 + 8);
    fVar25 = *(float *)(local_198 + lVar4 + 0xc);
    *(float *)((long)local_118 + lVar4) =
         fVar25 * fVar19 + fVar24 * fVar7 + fVar18 * fVar6 + fVar20 * fVar13;
    *(float *)((long)local_118 + lVar4 + 4) =
         fVar25 * fVar21 + fVar24 * fVar9 + fVar18 * fVar8 + fVar20 * fVar15;
    *(float *)((long)local_118 + lVar4 + 8) =
         fVar25 * fVar22 + fVar24 * fVar12 + fVar18 * fVar10 + fVar20 * fVar16;
    *(float *)((long)local_118 + lVar4 + 0xc) =
         fVar25 * fVar23 + fVar24 * fVar14 + fVar18 * fVar11 + fVar20 * fVar17;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  local_1f8 = (float)param_1_00;
  fStack_1f4 = (float)(param_1_00 >> 0x20);
  local_1e8 = param_1_00;
  if ((*(char *)(param_3 + 0x28) == '\0') &&
     (_LC8 < (param_2_00 - local_1f8) * (param_2_00 - local_1f8) +
             (fStack_1f4 - param_2_00) * (fStack_1f4 - param_2_00) +
             (local_1f8 - fStack_1f4) * (local_1f8 - fStack_1f4) + 0.0)) {
    fVar12 = (float)*(undefined8 *)(param_3 + 0x48);
    fVar7 = (float)*(undefined8 *)(param_3 + 0x40);
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    fVar13 = fVar7 + fVar7;
    fVar6 = fVar9 + fVar9;
    fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
    fVar15 = (_LC0 - fVar7 * fVar13) - fVar9 * fVar6;
    fVar11 = fVar12 * fVar13 + fVar6 * fVar14;
    fVar8 = fVar12 * fVar13 - fVar6 * fVar14;
    fVar10 = fVar12 * fVar6 - fVar13 * fVar14;
    fVar7 = fVar9 * fVar13 + fVar14 * (fVar12 + fVar12);
    fVar9 = (_LC0 - fVar9 * fVar6) - fVar12 * (fVar12 + fVar12);
    fVar12 = fVar8 * param_2_00;
    param_2_00 = fVar10 * fStack_1f4 * fVar10 + fVar11 * local_1f8 * fVar11 +
                 fVar15 * param_2_00 * fVar15;
    local_1e8 = (ulong)(uint)(fVar12 * fVar8 +
                             fVar7 * fStack_1f4 * fVar7 + fVar9 * local_1f8 * fVar9);
  }
  lVar4 = *(long *)(param_3 + 0x20);
  cVar3 = (**(code **)(*param_6 + 0x18))(param_6,plVar2,param_8,lVar4,param_9);
  if (cVar3 != '\0') {
    (*(code *)(&CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(lVar4 + 0x19) + (ulong)*(byte *)(_local_d8 + 0x19) * 0x22])
              (local_1e8,param_2_00,local_d8,param_2,lVar4,param_6,local_118,param_8,param_9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RotatedTranslatedShape::IsValidScale(JPH::Vec3) const */

undefined8
JPH::RotatedTranslatedShape::IsValidScale(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  undefined8 uVar3;
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
  undefined8 local_38;
  undefined8 uStack_30;
  
  cVar2 = JPH::Shape::IsValidScale();
  if (cVar2 != '\0') {
    if ((*(char *)(param_3 + 0x28) != '\0') ||
       (local_38._0_4_ = (float)param_1, local_38._4_4_ = (float)((ulong)param_1 >> 0x20),
       uStack_30._0_4_ = (float)param_2,
       ((float)uStack_30 - (float)local_38) * ((float)uStack_30 - (float)local_38) +
       (local_38._4_4_ - (float)uStack_30) * (local_38._4_4_ - (float)uStack_30) +
       ((float)local_38 - local_38._4_4_) * ((float)local_38 - local_38._4_4_) + 0.0 <= _LC8)) {
                    /* WARNING: Could not recover jumptable at 0x00105dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(long **)(param_3 + 0x20) + 0x118))(param_1,param_2);
      return uVar3;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    uVar1 = *(undefined8 *)(param_3 + 0x48);
    cVar2 = ScaleHelpers::CanScaleBeRotated(uVar3,uVar1,param_1);
    if (cVar2 != '\0') {
      fVar4 = (float)uVar3;
      fVar8 = (float)((ulong)uVar3 >> 0x20);
      fVar7 = (float)uVar1;
      fVar15 = fVar8 + fVar8;
      fVar6 = (float)((ulong)uVar1 >> 0x20);
      fVar12 = fVar4 + fVar4;
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_3 + 0x20) + 0x118);
      fVar11 = fVar7 * (fVar7 + fVar7);
      fVar5 = fVar6 * (fVar7 + fVar7);
      fVar14 = fVar7 * fVar12 + fVar15 * fVar6;
      fVar10 = fVar7 * fVar15 - fVar12 * fVar6;
      fVar17 = fVar8 * fVar12 - fVar5;
      fVar13 = fVar12 * fVar6 + fVar7 * fVar15;
      fVar9 = (_LC0 - fVar4 * fVar12) - fVar8 * fVar15;
      fVar16 = (_LC0 - fVar11) - fVar4 * fVar12;
      fVar5 = fVar8 * fVar12 + fVar5;
      fVar11 = (_LC0 - fVar8 * fVar15) - fVar11;
      fVar8 = fVar7 * fVar12 - fVar15 * fVar6;
      fVar4 = fVar10 * local_38._4_4_ * fVar10 + fVar14 * (float)local_38 * fVar14 +
              fVar9 * (float)uStack_30 * fVar9;
      local_38 = CONCAT44(fVar16 * local_38._4_4_ * fVar16 + fVar17 * fVar17 * (float)local_38 +
                          fVar13 * (float)uStack_30 * fVar13,
                          fVar5 * local_38._4_4_ * fVar5 + fVar11 * (float)local_38 * fVar11 +
                          fVar8 * (float)uStack_30 * fVar8);
      uStack_30 = CONCAT44(fVar4,fVar4);
                    /* WARNING: Could not recover jumptable at 0x00106070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)
                        (local_38,uStack_30,*(long **)(param_3 + 0x20),0xffffffff00000000,
                         UNRECOVERED_JUMPTABLE);
      return uVar3;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::MakeScaleValid(JPH::Vec3) const */

undefined1  [16]
JPH::RotatedTranslatedShape::MakeScaleValid(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [12];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  float fStack_24;
  
  local_48 = (float)param_1;
  fStack_44 = (float)((ulong)param_1 >> 0x20);
  fStack_40 = (float)param_2;
  fStack_3c = (float)((ulong)param_2 >> 0x20);
  auVar8._0_4_ = 0.0 - local_48;
  auVar8._4_4_ = 0.0 - fStack_44;
  auVar8._8_4_ = 0.0 - fStack_40;
  auVar8._12_4_ = 0.0 - fStack_3c;
  auVar9._8_4_ = fStack_40;
  auVar9._0_8_ = param_1;
  auVar9._12_4_ = fStack_3c;
  auVar9 = maxps(auVar8,auVar9);
  auVar6._4_4_ = _LC13;
  auVar6._0_4_ = _LC13;
  auVar6._8_4_ = _LC13;
  auVar6._12_4_ = _LC13;
  auVar9 = maxps(auVar9,auVar6);
  fVar7 = auVar9._0_4_ * (float)((uint)local_48 & (uint)_LC14 | (uint)_LC0);
  fVar10 = auVar9._4_4_ * (float)((uint)fStack_44 & (uint)_LC14 | (uint)_LC0);
  fVar11 = auVar9._8_4_ * (float)((uint)fStack_40 & (uint)_LC14 | (uint)_LC0);
  fVar12 = auVar9._12_4_ * (float)((uint)fStack_3c & (uint)_LC14 | (uint)_LC0);
  if (*(char *)(param_3 + 0x28) == '\0') {
    if (_LC8 < (fVar11 - fVar7) * (fVar11 - fVar7) +
               (fVar10 - fVar11) * (fVar10 - fVar11) + (fVar7 - fVar10) * (fVar7 - fVar10) + 0.0) {
      uVar1 = *(undefined8 *)(param_3 + 0x48);
      uVar2 = *(undefined8 *)(param_3 + 0x40);
      cVar5 = ScaleHelpers::CanScaleBeRotated
                        (uVar2,uVar1,CONCAT44(fVar10,fVar7),CONCAT44(fVar12,fVar11));
      fStack_24 = (float)((ulong)uVar2 >> 0x20);
      if (cVar5 == '\0') {
        auVar14._0_4_ = 0.0 - fVar7;
        auVar14._4_4_ = 0.0 - fVar10;
        auVar14._8_4_ = 0.0 - fVar11;
        auVar14._12_4_ = 0.0 - fVar12;
        auVar3._4_4_ = fVar10;
        auVar3._0_4_ = fVar7;
        auVar3._8_4_ = fVar11;
        auVar3._12_4_ = fVar12;
        auVar9 = maxps(auVar14,auVar3);
        auVar16._0_4_ = (uint)_LC14 & (uint)fVar7;
        auVar16._4_4_ = _UNK_001077e4 & (uint)fVar10;
        auVar16._8_4_ = _UNK_001077e8 & (uint)fVar11;
        auVar16._12_4_ = _UNK_001077ec & (uint)fVar12;
        auVar16 = auVar16 | __LC7;
        fVar10 = (auVar9._8_4_ + auVar9._4_4_ + auVar9._0_4_) / __LC17;
        local_48 = fVar10 * auVar16._0_4_;
        fStack_44 = fVar10 * auVar16._4_4_;
        fStack_40 = fVar10 * auVar16._8_4_;
        fStack_3c = fVar10 * auVar16._12_4_;
        local_38 = CONCAT44(fStack_44,local_48);
        uStack_30 = CONCAT44(fStack_3c,fStack_40);
        cVar5 = ScaleHelpers::CanScaleBeRotated(uVar2,uVar1,local_38,uStack_30);
        if (cVar5 == '\0') {
          local_48 = _LC14;
          if (0.0 <= fVar7) {
            local_48 = _LC0;
          }
          local_48 = local_48 * fVar10;
          fStack_44 = local_48;
          fStack_40 = local_48;
          fStack_3c = local_48;
        }
      }
      else {
        fVar12 = (float)uVar2;
        fVar22 = (float)uVar1;
        fVar23 = (float)((ulong)uVar1 >> 0x20);
        fVar15 = fStack_24 + fStack_24;
        fVar18 = fVar12 + fVar12;
        fVar17 = fVar22 * (fVar22 + fVar22);
        fVar13 = fVar23 * (fVar22 + fVar22);
        fVar21 = fVar22 * fVar15 - fVar18 * fVar23;
        fVar19 = fVar18 * fVar23 + fVar22 * fVar15;
        fVar20 = fVar22 * fVar18 - fVar15 * fVar23;
        fVar22 = fVar22 * fVar18 + fVar15 * fVar23;
        fVar24 = (_LC0 - fVar17) - fVar12 * fVar18;
        fVar12 = (_LC0 - fVar12 * fVar18) - fStack_24 * fVar15;
        fVar23 = fStack_24 * fVar18 - fVar13;
        fVar13 = fVar13 + fStack_24 * fVar18;
        fVar17 = (_LC0 - fStack_24 * fVar15) - fVar17;
        fVar12 = fVar21 * fVar10 * fVar21 + fVar22 * fVar7 * fVar22 + fVar12 * fVar11 * fVar12;
        auVar25 = (**(code **)(**(long **)(param_3 + 0x20) + 0x120))
                            (CONCAT44(fVar24 * fVar10 * fVar24 + fVar7 * fVar23 * fVar23 +
                                      fVar11 * fVar19 * fVar19,
                                      fVar13 * fVar10 * fVar13 + fVar17 * fVar7 * fVar17 +
                                      fVar20 * fVar11 * fVar20),CONCAT44(fVar12,fVar12));
        fVar22 = auVar25._8_4_;
        fVar7 = (float)(__LC3 ^ *(uint *)(param_3 + 0x40));
        fVar10 = (float)(_UNK_001077a4 ^ *(uint *)(param_3 + 0x44));
        fVar11 = (float)(_UNK_001077a8 ^ *(uint *)(param_3 + 0x48));
        fVar12 = (float)(_UNK_001077ac ^ *(uint *)(param_3 + 0x4c));
        local_48 = auVar25._0_4_;
        fStack_44 = auVar25._4_4_;
        fVar19 = fVar7 + fVar7;
        fVar20 = fVar10 + fVar10;
        fVar13 = (fVar11 + fVar11) * fVar11;
        fVar23 = (fVar11 + fVar11) * fVar12;
        fVar18 = fVar19 * fVar11 + fVar20 * fVar12;
        fVar21 = (_LC0 - fVar13) - fVar7 * fVar19;
        fVar15 = fVar19 * fVar11 - fVar20 * fVar12;
        fVar17 = fVar11 * fVar20 - fVar19 * fVar12;
        fVar7 = (_LC0 - fVar7 * fVar19) - fVar20 * fVar10;
        fVar11 = fVar19 * fVar12 + fVar11 * fVar20;
        fVar12 = fVar10 * fVar19 - fVar23;
        fVar23 = fVar10 * fVar19 + fVar23;
        fVar13 = (_LC0 - fVar20 * fVar10) - fVar13;
        fVar10 = fVar12 * local_48;
        fStack_40 = fVar17 * fStack_44 * fVar17 + fVar18 * local_48 * fVar18 +
                    fVar7 * fVar22 * fVar7;
        local_48 = fVar23 * fStack_44 * fVar23 + fVar13 * local_48 * fVar13 +
                   fVar15 * fVar22 * fVar15;
        fStack_44 = fVar11 * fVar22 * fVar11 + fVar21 * fStack_44 * fVar21 + fVar12 * fVar10;
        fStack_3c = fStack_40;
      }
      auVar4._4_4_ = fStack_44;
      auVar4._0_4_ = local_48;
      auVar4._8_4_ = fStack_40;
      auVar4._12_4_ = fStack_3c;
      return auVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00106163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (**(code **)(**(long **)(param_3 + 0x20) + 0x120))
                     (CONCAT44(fVar10,fVar7),CONCAT44(fVar12,fVar11));
  return auVar9;
}



/* JPH::GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(RotatedTranslatedShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti,
                      "RotatedTranslatedShapeSettings",0x70,
                      GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::{lambda(void*)#1}::_FUN,
                      RotatedTranslatedShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*)::rtti;
}



/* JPH::RotatedTranslatedShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::RotatedTranslatedShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((RotatedTranslatedShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::RotatedTranslatedShape(JPH::RotatedTranslatedShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::RotatedTranslatedShape::RotatedTranslatedShape
          (RotatedTranslatedShape *this,RotatedTranslatedShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Result RVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float extraout_XMM1_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  JPH::DecoratedShape::DecoratedShape((DecoratedShape *)this,9,param_1,param_2);
  RVar6 = param_2[0x20];
  *(undefined ***)this = &PTR__RotatedTranslatedShape_00107620;
  if (RVar6 != (Result)0x2) {
    uVar10 = (**(code **)(**(long **)(this + 0x20) + 0x18))();
    fVar11 = (float)((ulong)uVar10 >> 0x20);
    fVar9 = (float)uVar10;
    fVar2 = *(float *)(param_1 + 0x60);
    fVar3 = *(float *)(param_1 + 0x6c);
    fVar4 = *(float *)(param_1 + 0x68);
    fVar5 = *(float *)(param_1 + 100);
    fVar16 = (float)(*(uint *)(param_1 + 0x60) ^ __LC3);
    fVar17 = (float)(*(uint *)(param_1 + 100) ^ _UNK_001077a4);
    fVar18 = (float)(*(uint *)(param_1 + 0x68) ^ _UNK_001077a8);
    fVar19 = (float)(*(uint *)(param_1 + 0x6c) ^ _UNK_001077ac);
    fVar20 = (fVar3 * fVar9 + fVar2 * 0.0 + fVar5 * extraout_XMM1_Da) - fVar4 * fVar11;
    fVar15 = (fVar3 * fVar11 - fVar2 * extraout_XMM1_Da) + fVar5 * 0.0 + fVar4 * fVar9;
    fVar14 = ((fVar3 * extraout_XMM1_Da + fVar2 * fVar11) - fVar5 * fVar9) + fVar4 * 0.0;
    fVar8 = ((fVar3 * 0.0 - fVar2 * fVar9) - fVar5 * fVar11) - fVar4 * extraout_XMM1_Da;
    fVar2 = *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x54);
    fVar4 = *(float *)(param_1 + 0x58);
    fVar5 = *(float *)(param_1 + 0x5c);
    fVar9 = *(float *)(param_1 + 0x60);
    fVar11 = *(float *)(param_1 + 100);
    fVar12 = *(float *)(param_1 + 0x68);
    fVar13 = *(float *)(param_1 + 0x6c);
    *(float *)(this + 0x40) = fVar9;
    *(float *)(this + 0x44) = fVar11;
    *(float *)(this + 0x48) = fVar12;
    *(float *)(this + 0x4c) = fVar13;
    *(float *)(this + 0x30) =
         ((fVar15 * fVar18 + fVar20 * fVar19 + fVar16 * fVar8) - fVar14 * fVar17) + fVar2;
    *(float *)(this + 0x34) =
         fVar15 * fVar19 + (fVar17 * fVar8 - fVar20 * fVar18) + fVar14 * fVar16 + fVar3;
    *(float *)(this + 0x38) =
         ((fVar20 * fVar17 + fVar18 * fVar8) - fVar15 * fVar16) + fVar14 * fVar19 + fVar4;
    *(float *)(this + 0x3c) =
         (((fVar19 * fVar8 - fVar20 * fVar16) - fVar15 * fVar17) - fVar14 * fVar18) + fVar5;
    fVar9 = __LC2 - fVar9;
    fVar11 = _UNK_00107794 - fVar11;
    fVar12 = _UNK_00107798 - fVar12;
    fVar13 = _LC0 - fVar13;
    this[0x28] = (RotatedTranslatedShape)
                 (fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13 <= _LC4);
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    if (param_2[0x20] == (Result)0x1) {
      plVar7 = *(long **)param_2;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(RotatedTranslatedShape **)param_2 = this;
    param_2[0x20] = (Result)0x1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShapeSettings::Create() const */

void JPH::RotatedTranslatedShapeSettings::Create(void)

{
  RotatedTranslatedShape *pRVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  RotatedTranslatedShapeSettings RVar3;
  RotatedTranslatedShape *this;
  long *__dest;
  RotatedTranslatedShapeSettings *in_RSI;
  RotatedTranslatedShapeSettings *pRVar4;
  long *in_RDI;
  char *pcVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM2_Da;
  float fVar9;
  float in_XMM2_Db;
  float in_XMM3_Da;
  float fVar10;
  float in_XMM3_Db;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_40;
  float fStack_3c;
  float fStack_28;
  float fStack_24;
  
  RVar3 = in_RSI[0x38];
  pRVar4 = in_RSI;
  if (RVar3 == (RotatedTranslatedShapeSettings)0x0) {
    this = (RotatedTranslatedShape *)(*Allocate)(0x50);
    RotatedTranslatedShape::RotatedTranslatedShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pRVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pRVar1 = *(int *)pRVar1 + -1;
    UNLOCK();
    if (*(int *)pRVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    RVar3 = in_RSI[0x38];
  }
  *(RotatedTranslatedShapeSettings *)(in_RDI + 4) = RVar3;
  if (RVar3 == (RotatedTranslatedShapeSettings)0x1) {
    lVar2 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar2;
    if (lVar2 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    return;
  }
  if (RVar3 != (RotatedTranslatedShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00106a07;
    }
    if (__n == 0) goto LAB_00106a07;
  }
  else {
    if ((long)__n < 0) {
      pcVar5 = "basic_string::_M_create";
      uVar7 = std::__throw_length_error("basic_string::_M_create");
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\t';
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(code **)pcVar5 = __cxa_guard_acquire;
      *(RotatedTranslatedShapeSettings **)(pcVar5 + 0x20) = pRVar4;
      if (pRVar4 != (RotatedTranslatedShapeSettings *)0x0) {
        LOCK();
        *(int *)(pRVar4 + 8) = *(int *)(pRVar4 + 8) + 1;
        UNLOCK();
        pRVar4 = *(RotatedTranslatedShapeSettings **)(pcVar5 + 0x20);
      }
      *(undefined ***)pcVar5 = &PTR__RotatedTranslatedShape_00107620;
      fVar6 = in_XMM1_Da;
      uVar8 = (**(code **)(*(long *)pRVar4 + 0x18))();
      fStack_28 = (float)uVar8;
      fStack_24 = (float)((ulong)uVar8 >> 0x20);
      fVar11 = (float)((uint)in_XMM2_Da ^ __LC3);
      fVar12 = (float)((uint)in_XMM2_Db ^ _UNK_001077a4);
      fVar13 = (float)((uint)in_XMM3_Da ^ _UNK_001077a8);
      fVar14 = (float)((uint)in_XMM3_Db ^ _UNK_001077ac);
      fVar15 = (in_XMM3_Db * fStack_28 + in_XMM2_Da * 0.0 + in_XMM2_Db * fVar6) -
               fStack_24 * in_XMM3_Da;
      fVar10 = (fStack_24 * in_XMM3_Db - in_XMM2_Da * fVar6) + in_XMM2_Db * 0.0 +
               in_XMM3_Da * fStack_28;
      *(ulong *)(pcVar5 + 0x40) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
      *(ulong *)(pcVar5 + 0x48) = CONCAT44(in_XMM3_Db,in_XMM3_Da);
      fVar9 = ((in_XMM3_Db * fVar6 + fStack_24 * in_XMM2_Da) - in_XMM2_Db * fStack_28) +
              in_XMM3_Da * 0.0;
      fVar6 = ((in_XMM3_Db * 0.0 - in_XMM2_Da * fStack_28) - fStack_24 * in_XMM2_Db) -
              in_XMM3_Da * fVar6;
      fStack_40 = (float)uVar7;
      fStack_3c = (float)((ulong)uVar7 >> 0x20);
      *(float *)(pcVar5 + 0x30) =
           ((fVar11 * fVar6 + fVar15 * fVar14 + fVar10 * fVar13) - fVar9 * fVar12) + fStack_40;
      *(float *)(pcVar5 + 0x34) =
           (fVar12 * fVar6 - fVar15 * fVar13) + fVar10 * fVar14 + fVar9 * fVar11 + fStack_3c;
      *(float *)(pcVar5 + 0x38) =
           ((fVar13 * fVar6 + fVar15 * fVar12) - fVar10 * fVar11) + fVar9 * fVar14 + in_XMM1_Da;
      *(float *)(pcVar5 + 0x3c) =
           (((fVar14 * fVar6 - fVar15 * fVar11) - fVar10 * fVar12) - fVar9 * fVar13) + in_XMM1_Db;
      pcVar5[0x28] = (__LC2 - in_XMM2_Da) * (__LC2 - in_XMM2_Da) +
                     (_UNK_00107794 - in_XMM2_Db) * (_UNK_00107794 - in_XMM2_Db) +
                     (_UNK_00107798 - in_XMM3_Da) * (_UNK_00107798 - in_XMM3_Da) +
                     (_LC0 - in_XMM3_Db) * (_LC0 - in_XMM3_Db) <= _LC4;
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00106a07:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::RotatedTranslatedShape(JPH::Vec3, JPH::Quat, JPH::Shape const*) */

void __thiscall
JPH::RotatedTranslatedShape::RotatedTranslatedShape
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          RotatedTranslatedShape *this,long *param_6)

{
  float fVar1;
  undefined8 uVar2;
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
  float local_28;
  float fStack_24;
  float local_10;
  float fStack_c;
  
  fVar8 = (float)((ulong)param_4 >> 0x20);
  fVar6 = (float)param_4;
  fVar5 = (float)((ulong)param_3 >> 0x20);
  fVar3 = (float)param_3;
  *(undefined2 *)(this + 0x18) = 0x902;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(code **)this = __cxa_guard_acquire;
  *(long **)(this + 0x20) = param_6;
  if (param_6 != (long *)0x0) {
    LOCK();
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    UNLOCK();
    param_6 = *(long **)(this + 0x20);
  }
  *(undefined ***)this = &PTR__RotatedTranslatedShape_00107620;
  fVar1 = (float)param_2;
  uVar2 = (**(code **)(*param_6 + 0x18))();
  local_10 = (float)uVar2;
  fStack_c = (float)((ulong)uVar2 >> 0x20);
  fVar9 = (float)((uint)fVar3 ^ __LC3);
  fVar10 = (float)((uint)fVar5 ^ _UNK_001077a4);
  fVar11 = (float)((uint)fVar6 ^ _UNK_001077a8);
  fVar12 = (float)((uint)fVar8 ^ _UNK_001077ac);
  fVar13 = (fVar8 * local_10 + fVar3 * 0.0 + fVar5 * fVar1) - fStack_c * fVar6;
  fVar7 = (fStack_c * fVar8 - fVar3 * fVar1) + fVar5 * 0.0 + fVar6 * local_10;
  *(undefined8 *)(this + 0x40) = param_3;
  *(undefined8 *)(this + 0x48) = param_4;
  fVar4 = ((fVar8 * fVar1 + fStack_c * fVar3) - fVar5 * local_10) + fVar6 * 0.0;
  fVar1 = ((fVar8 * 0.0 - fVar3 * local_10) - fStack_c * fVar5) - fVar6 * fVar1;
  local_28 = (float)param_1;
  fStack_24 = (float)((ulong)param_1 >> 0x20);
  *(float *)(this + 0x30) =
       ((fVar9 * fVar1 + fVar13 * fVar12 + fVar7 * fVar11) - fVar4 * fVar10) + local_28;
  *(float *)(this + 0x34) =
       (fVar10 * fVar1 - fVar13 * fVar11) + fVar7 * fVar12 + fVar4 * fVar9 + fStack_24;
  *(float *)(this + 0x38) =
       ((fVar11 * fVar1 + fVar13 * fVar10) - fVar7 * fVar9) + fVar4 * fVar12 + (float)param_2;
  *(float *)(this + 0x3c) =
       (((fVar12 * fVar1 - fVar13 * fVar9) - fVar7 * fVar10) - fVar4 * fVar11) +
       (float)((ulong)param_2 >> 0x20);
  this[0x28] = (RotatedTranslatedShape)
               ((__LC2 - fVar3) * (__LC2 - fVar3) +
                (_UNK_00107794 - fVar5) * (_UNK_00107794 - fVar5) +
                (_UNK_00107798 - fVar6) * (_UNK_00107798 - fVar6) + (_LC0 - fVar8) * (_LC0 - fVar8)
               <= _LC4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotatedTranslatedShape::sRegister() */

void JPH::RotatedTranslatedShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &sAllSubShapeTypes;
  _DAT_00109148 = sRegister()::{lambda()#1}::_FUN;
  _DAT_00109150 = (undefined4)Color::sBlue;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x132;
    (&CollisionDispatch::sCollideShape)[lVar2] = sCollideRotatedTranslatedVsShape;
    (&CollisionDispatch::sCastShape)[lVar2] = sCastRotatedTranslatedVsShape;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(&__cxxabiv1::__si_class_type_info::vtable + lVar2) = sCollideShapeVsRotatedTranslated
    ;
    *(code **)(&DecoratedShapeSettings::typeinfo + lVar2) = sCastShapeVsRotatedTranslated;
  } while (pbVar3 != (byte *)0x107782);
  _DAT_00109a58 = sCollideRotatedTranslatedVsRotatedTranslated;
  _DAT_00109a60 = sCastRotatedTranslatedVsRotatedTranslated;
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



/* JPH::DecoratedShape::MustBeStatic() const */

void __thiscall JPH::DecoratedShape::MustBeStatic(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x00106e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x10))();
  return;
}



/* JPH::DecoratedShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

void JPH::DecoratedShape::GetLeafShape(SubShapeID *param_1,SubShapeID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00106e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* JPH::RotatedTranslatedShape::GetCenterOfMass() const */

undefined1  [16] __thiscall
JPH::RotatedTranslatedShape::GetCenterOfMass(RotatedTranslatedShape *this)

{
  return *(undefined1 (*) [16])(this + 0x30);
}



/* JPH::RotatedTranslatedShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox
   const&, JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::RotatedTranslatedShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::RotatedTranslatedShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int,
   JPH::Float3*, JPH::PhysicsMaterial const**) const */

undefined8
JPH::RotatedTranslatedShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::RotatedTranslatedShape::GetStats() const */

undefined1  [16] JPH::RotatedTranslatedShape::GetStats(void)

{
  return ZEXT816(0x50);
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::RotatedTranslatedShape::~RotatedTranslatedShape() */

void __thiscall JPH::RotatedTranslatedShape::~RotatedTranslatedShape(RotatedTranslatedShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00106eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JPH::RotatedTranslatedShape::~RotatedTranslatedShape() */

void __thiscall JPH::RotatedTranslatedShape::~RotatedTranslatedShape(RotatedTranslatedShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = __cxa_guard_acquire;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00106efa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00106ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::DecoratedShape::GetSubShapeIDBitsRecursive() const */

void __thiscall JPH::DecoratedShape::GetSubShapeIDBitsRecursive(DecoratedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x28);
  if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
    if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00106fa8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00106fa8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00106fa8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
                    /* WARNING: Could not recover jumptable at 0x00106f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x28))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00106fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00106fa8:
                    /* WARNING: Could not recover jumptable at 0x00106fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::RotatedTranslatedShape::GetInnerRadius() const */

void __thiscall JPH::RotatedTranslatedShape::GetInnerRadius(RotatedTranslatedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x38);
  if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
    if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00107058;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00107058;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00107058;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
                    /* WARNING: Could not recover jumptable at 0x00107046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x38))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00107050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00107058:
                    /* WARNING: Could not recover jumptable at 0x00107058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::RotatedTranslatedShape::GetVolume() const */

void __thiscall JPH::RotatedTranslatedShape::GetVolume(RotatedTranslatedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x110);
  if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
    if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
      if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00107128;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
      if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00107128;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00107128;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
                    /* WARNING: Could not recover jumptable at 0x00107112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x110))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00107120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00107128:
                    /* WARNING: Could not recover jumptable at 0x00107128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings() */

void __thiscall
JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings
          (RotatedTranslatedShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 **)this = &CollisionDispatch::sCollideShape;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (this[0x38] == (RotatedTranslatedShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001071cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (RotatedTranslatedShapeSettings)0x2) &&
          (*(RotatedTranslatedShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001071a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings() */

void __thiscall
JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings
          (RotatedTranslatedShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 **)this = &CollisionDispatch::sCollideShape;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(undefined8 **)this = &CollisionDispatch::sCastShape;
  if (this[0x38] == (RotatedTranslatedShapeSettings)0x1) {
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
  else if ((this[0x38] == (RotatedTranslatedShapeSettings)0x2) &&
          (*(RotatedTranslatedShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00107243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ScaleHelpers::CanScaleBeRotated(JPH::Quat, JPH::Vec3) */

undefined8
JPH::ScaleHelpers::CanScaleBeRotated
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar5;
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fVar8 = (float)((ulong)param_1 >> 0x20);
  fVar7 = (float)param_1;
  fVar5 = (float)param_2;
  fVar18 = fVar7 + fVar7;
  fVar28 = fVar8 + fVar8;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar27 = fVar5 * (fVar5 + fVar5);
  fVar2 = (fVar5 + fVar5) * fVar6;
  fVar26 = fVar5 * fVar28 - fVar18 * fVar6;
  fVar19 = fVar18 * fVar6 + fVar5 * fVar28;
  fVar20 = fVar8 * fVar18 - fVar2;
  fVar16 = (_LC0 - fVar7 * fVar18) - fVar8 * fVar28;
  fVar24 = (_LC0 - fVar27) - fVar7 * fVar18;
  fVar27 = (_LC0 - fVar8 * fVar28) - fVar27;
  fVar25 = fVar5 * fVar18 - fVar28 * fVar6;
  fVar2 = fVar2 + fVar8 * fVar18;
  fVar23 = fVar5 * fVar18 + fVar28 * fVar6;
  local_28 = (float)param_3;
  uStack_24 = (float)((ulong)param_3 >> 0x20);
  fVar6 = fVar20 * local_28;
  fVar7 = fVar24 * uStack_24;
  fVar8 = fVar19 * param_4;
  fVar18 = fVar27 * local_28;
  fVar28 = fVar2 * uStack_24;
  fVar13 = fVar25 * param_4;
  local_28 = fVar23 * local_28;
  uStack_24 = fVar26 * uStack_24;
  fVar5 = fVar16 * param_4;
  fVar12 = fVar13 * fVar19 + fVar28 * fVar24 + fVar18 * fVar20;
  fVar14 = fVar13 * fVar16 + fVar28 * fVar26 + fVar18 * fVar23;
  fVar15 = fVar13 * 0.0 + fVar28 * 0.0 + fVar18 * 0.0;
  auVar22._0_4_ = (float)(~_LC9 & (uint)(fVar13 * fVar25 + fVar28 * fVar2 + fVar18 * fVar27));
  auVar22._4_4_ = fVar12;
  auVar22._8_4_ = fVar14;
  auVar22._12_4_ = fVar15;
  auVar17._0_4_ = 0.0 - auVar22._0_4_;
  auVar17._4_4_ = 0.0 - fVar12;
  auVar17._8_4_ = 0.0 - fVar14;
  auVar17._12_4_ = 0.0 - fVar15;
  auVar17 = maxps(auVar17,auVar22);
  fVar18 = (float)(~__LC10 & (uint)(fVar8 * fVar25 + fVar7 * fVar2 + fVar6 * fVar27));
  fVar28 = (float)(~_UNK_001077c4 & (uint)(fVar8 * fVar19 + fVar7 * fVar24 + fVar6 * fVar20));
  fVar12 = (float)(~_UNK_001077c8 & (uint)(fVar8 * fVar16 + fVar7 * fVar26 + fVar6 * fVar23));
  fVar6 = (float)(~_UNK_001077cc & (uint)(fVar8 * 0.0 + fVar7 * 0.0 + fVar6 * 0.0));
  auVar21._0_4_ = 0.0 - fVar18;
  auVar21._4_4_ = 0.0 - fVar28;
  auVar21._8_4_ = 0.0 - fVar12;
  auVar21._12_4_ = 0.0 - fVar6;
  auVar10._4_4_ = fVar28;
  auVar10._0_4_ = fVar18;
  auVar10._8_4_ = fVar12;
  auVar10._12_4_ = fVar6;
  auVar22 = maxps(auVar21,auVar10);
  auVar4._0_4_ = (float)(~__LC11 & (uint)(fVar2 * uStack_24 + fVar27 * local_28 + fVar5 * fVar25));
  auVar4._4_4_ = (float)(~_UNK_001077d4 &
                        (uint)(fVar24 * uStack_24 + fVar20 * local_28 + fVar5 * fVar19));
  auVar4._8_4_ = (float)(~_UNK_001077d8 &
                        (uint)(fVar26 * uStack_24 + fVar23 * local_28 + fVar5 * fVar16));
  auVar4._12_4_ = (float)(~_UNK_001077dc & (uint)(uStack_24 * 0.0 + local_28 * 0.0 + fVar5 * 0.0));
  auVar9._0_4_ = 0.0 - auVar4._0_4_;
  auVar9._4_4_ = 0.0 - auVar4._4_4_;
  auVar9._8_4_ = 0.0 - auVar4._8_4_;
  auVar9._12_4_ = 0.0 - auVar4._12_4_;
  auVar10 = maxps(auVar9,auVar4);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < _LC13);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _LC13);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < _LC13);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < _LC13);
  auVar3._0_4_ = -(uint)(auVar22._0_4_ < _LC13 && auVar17._0_4_ < _LC13);
  auVar3._4_4_ = -(uint)(auVar22._4_4_ < _LC13 && auVar17._4_4_ < _LC13);
  auVar3._8_4_ = -(uint)(auVar17._8_4_ < _LC13 && auVar22._8_4_ < _LC13);
  auVar3._12_4_ = -(uint)(auVar17._12_4_ < _LC13 && auVar22._12_4_ < _LC13);
  iVar1 = movmskps(param_4,auVar3 & auVar11);
  return CONCAT71((int7)(CONCAT44(0x3f800000,iVar1) >> 8),iVar1 == 0xf);
}



/* JPH::GetRTTIOfType(JPH::RotatedTranslatedShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC19;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings() */

void __thiscall
JPH::RotatedTranslatedShapeSettings::~RotatedTranslatedShapeSettings
          (RotatedTranslatedShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RotatedTranslatedShape::~RotatedTranslatedShape() */

void __thiscall JPH::RotatedTranslatedShape::~RotatedTranslatedShape(RotatedTranslatedShape *this)

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



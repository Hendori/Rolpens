
/* JPH::HeightFieldShape::GetMassProperties() const */

HeightFieldShape * __thiscall JPH::HeightFieldShape::GetMassProperties(HeightFieldShape *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  return this;
}



/* JPH::HeightFieldShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::HeightFieldShape::CollidePoint(void)

{
  return;
}



/* JPH::HeightFieldShape::GetStats() const */

undefined1  [16] __thiscall JPH::HeightFieldShape::GetStats(HeightFieldShape *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (*(uint *)(this + 0x48) != 0) {
    uVar1 = (ulong)(uint)((*(int *)(this + 0x40) + -1) * (*(int *)(this + 0x40) + -1) * 2);
  }
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = (ulong)*(uint *)(this + 0x50) + (ulong)*(uint *)(this + 0x48) +
                 *(long *)(this + 0x90) +
                 (*(long *)(this + 0x78) + 0x1a + (ulong)*(uint *)(this + 0x4c) * 2) * 8;
  return auVar2;
}



/* JPH::HeightFieldShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::HeightFieldShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::HeightFieldShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::HeightFieldShape::SaveBinaryState(HeightFieldShape *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::Shape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x56,2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,2);
  local_24 = (int)*(undefined8 *)(this + 0x90);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0xa0),local_24);
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,4);
  if (*(long *)(this + 0x60) == 0) {
    local_24 = (uint)local_24._1_3_ << 8;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,1);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    local_24 = CONCAT31(local_24._1_3_,1);
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,1);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001001f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1 + 0x10))
                (param_1,*(undefined8 *)(this + 0x60),
                 (ulong)*(uint *)(this + 0x48) + (ulong)*(uint *)(this + 0x50) +
                 (ulong)*(uint *)(this + 0x4c) * 0x10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::GetLocalBounds() const */

void JPH::HeightFieldShape::GetLocalBounds(void)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long in_RSI;
  float *in_RDI;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(ushort *)(in_RSI + 0x56);
  fVar8 = *(float *)(in_RSI + 0x20);
  fVar9 = *(float *)(in_RSI + 0x24);
  fVar10 = *(float *)(in_RSI + 0x28);
  fVar11 = *(float *)(in_RSI + 0x2c);
  fVar3 = *(float *)(in_RSI + 0x30);
  fVar4 = *(float *)(in_RSI + 0x34);
  fVar5 = *(float *)(in_RSI + 0x38);
  fVar6 = *(float *)(in_RSI + 0x3c);
  fVar7 = (float)(*(int *)(in_RSI + 0x40) - 1);
  if (uVar1 != 0xffff) {
    uVar2 = *(ushort *)(in_RSI + 0x58);
    in_RDI[4] = fVar7 * fVar3 + fVar8;
    in_RDI[5] = (float)uVar2 * fVar4 + fVar9;
    in_RDI[6] = fVar7 * fVar5 + fVar10;
    in_RDI[7] = fVar7 * fVar6 + fVar11;
    *in_RDI = fVar3 * 0.0 + fVar8;
    in_RDI[1] = (float)uVar1 * fVar4 + fVar9;
    in_RDI[2] = fVar5 * 0.0 + fVar10;
    in_RDI[3] = fVar6 * 0.0 + fVar11;
    return;
  }
  fVar8 = fVar3 * _LC2 * fVar7 + fVar8;
  fVar9 = fVar4 * _LC2 * 0.0 + fVar9;
  fVar10 = fVar5 * _LC2 * fVar7 + fVar10;
  fVar11 = fVar6 * _LC2 * fVar7 + fVar11;
  *in_RDI = fVar8;
  in_RDI[1] = fVar9;
  in_RDI[2] = fVar10;
  in_RDI[3] = fVar11;
  in_RDI[4] = fVar8;
  in_RDI[5] = fVar9;
  in_RDI[6] = fVar10;
  in_RDI[7] = fVar11;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0xd0);
  *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
  uVar1 = _LC4;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x54) = uVar1;
  *(undefined4 *)(puVar2 + 0xb) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x5c) = uVar1;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  *puVar2 = &PTR_GetRTTI_00116408;
  puVar2[0xc] = 0x7f7fffff00000000;
  puVar2[0xd] = 0xff7fffff;
  puVar2[0xe] = 0x800000002;
  puVar2[0x11] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0x3f7f06a3;
  *(undefined1 (*) [16])(puVar2 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 0x15) = (undefined1  [16])0x0;
  return;
}



/* JPH::HeightFieldShape::HSGetTrianglesContext::VisitRangeBlock(JPH::Vec4, JPH::Vec4, JPH::Vec4,
   JPH::Vec4, JPH::Vec4, JPH::Vec4, JPH::UVec4&, int) const [clone .isra.0] */

void JPH::HeightFieldShape::HSGetTrianglesContext::VisitRangeBlock
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined1 (*param_10) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  undefined4 uVar22;
  float *pfVar23;
  float *pfVar24;
  long in_FS_OFFSET;
  uint uVar25;
  uint uVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar29;
  uint uVar31;
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
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
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float local_1f8;
  float fStack_1f4;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8 [38];
  long local_10;
  
  fVar40 = (float)((ulong)param_4 >> 0x20);
  lVar20 = 0;
  fVar10 = *(float *)(param_9 + 0x270);
  fVar11 = *(float *)(param_9 + 0x274);
  fVar12 = *(float *)(param_9 + 0x278);
  local_1e8 = (float)param_1;
  fStack_1e4 = (float)((ulong)param_1 >> 0x20);
  fStack_1e0 = (float)param_2;
  fStack_1dc = (float)((ulong)param_2 >> 0x20);
  auVar59._0_8_ = CONCAT44(fStack_1e4 * fVar10,local_1e8 * fVar10);
  auVar59._8_4_ = fStack_1e0 * fVar10;
  auVar59._12_4_ = fStack_1dc * fVar10;
  local_1c8 = (float)param_7;
  fStack_1c4 = (float)((ulong)param_7 >> 0x20);
  fStack_1c0 = (float)param_8;
  fStack_1bc = (float)((ulong)param_8 >> 0x20);
  auVar70._0_4_ = fVar10 * local_1c8;
  auVar70._4_4_ = fVar10 * fStack_1c4;
  auVar70._8_4_ = fVar10 * fStack_1c0;
  auVar70._12_4_ = fVar10 * fStack_1bc;
  local_1f8 = (float)param_3;
  fStack_1f4 = (float)((ulong)param_3 >> 0x20);
  local_a8[3] = *(float *)(param_9 + 0x250);
  local_a8[7] = *(float *)(param_9 + 0x254);
  local_a8[0xb] = *(float *)(param_9 + 600);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar64._8_4_ = auVar59._8_4_;
  auVar64._0_8_ = auVar59._0_8_;
  auVar64._12_4_ = auVar59._12_4_;
  auVar65 = minps(auVar64,auVar70);
  auVar26 = maxps(auVar59,auVar70);
  auVar38._0_8_ = CONCAT44(fStack_1f4 * fVar11,local_1f8 * fVar11);
  auVar38._8_4_ = (float)param_4 * fVar11;
  auVar38._12_4_ = fVar40 * fVar11;
  local_b8 = *(undefined8 *)(param_9 + 0x260);
  uStack_b0 = *(undefined8 *)(param_9 + 0x268);
  auVar58._8_4_ = auVar38._8_4_;
  auVar58._0_8_ = auVar38._0_8_;
  auVar58._12_4_ = auVar38._12_4_;
  auVar32._4_4_ = fVar11 * fStack000000000000000c;
  auVar32._0_4_ = fVar11 * fStack0000000000000008;
  auVar32._8_4_ = fVar11 * fStack0000000000000010;
  auVar32._12_4_ = fVar11 * fStack0000000000000014;
  auVar59 = minps(auVar58,auVar32);
  auVar39._4_4_ = fVar11 * fStack000000000000000c;
  auVar39._0_4_ = fVar11 * fStack0000000000000008;
  auVar39._8_4_ = fVar11 * fStack0000000000000010;
  auVar39._12_4_ = fVar11 * fStack0000000000000014;
  auVar39 = maxps(auVar38,auVar39);
  local_1d8 = (float)param_5;
  fStack_1d4 = (float)((ulong)param_5 >> 0x20);
  fStack_1d0 = (float)param_6;
  fStack_1cc = (float)((ulong)param_6 >> 0x20);
  local_a8[0x18] = (auVar26._0_4_ - auVar65._0_4_) * _LC2;
  local_a8[0x19] = (auVar26._4_4_ - auVar65._4_4_) * _LC2;
  local_a8[0x1a] = (auVar26._8_4_ - auVar65._8_4_) * _LC2;
  local_a8[0x1b] = (auVar26._12_4_ - auVar65._12_4_) * _LC2;
  auVar68._0_8_ = CONCAT44(fStack_1d4 * fVar12,local_1d8 * fVar12);
  auVar68._8_4_ = fStack_1d0 * fVar12;
  auVar68._12_4_ = fStack_1cc * fVar12;
  local_a8[0] = local_a8[3] - (auVar65._0_4_ + auVar26._0_4_) * _LC2;
  local_a8[1] = local_a8[3] - (auVar65._4_4_ + auVar26._4_4_) * _LC2;
  local_a8[2] = local_a8[3] - (auVar65._8_4_ + auVar26._8_4_) * _LC2;
  local_a8[3] = local_a8[3] - (auVar65._12_4_ + auVar26._12_4_) * _LC2;
  local_a8[0x1c] = (auVar39._0_4_ - auVar59._0_4_) * _LC2;
  local_a8[0x1d] = (auVar39._4_4_ - auVar59._4_4_) * _LC2;
  local_a8[0x1e] = (auVar39._8_4_ - auVar59._8_4_) * _LC2;
  local_a8[0x1f] = (auVar39._12_4_ - auVar59._12_4_) * _LC2;
  auVar46._8_4_ = auVar68._8_4_;
  auVar46._0_8_ = auVar68._0_8_;
  auVar46._12_4_ = auVar68._12_4_;
  auVar26._4_4_ = fVar12 * fStack000000000000001c;
  auVar26._0_4_ = fVar12 * fStack0000000000000018;
  auVar26._8_4_ = fVar12 * fStack0000000000000020;
  auVar26._12_4_ = fVar12 * fStack0000000000000024;
  auVar26 = minps(auVar46,auVar26);
  auVar65._4_4_ = fVar12 * fStack000000000000001c;
  auVar65._0_4_ = fVar12 * fStack0000000000000018;
  auVar65._8_4_ = fVar12 * fStack0000000000000020;
  auVar65._12_4_ = fVar12 * fStack0000000000000024;
  auVar32 = maxps(auVar68,auVar65);
  fVar10 = *(float *)(param_9 + 0x260);
  fVar11 = *(float *)(param_9 + 0x264);
  fVar12 = *(float *)(param_9 + 0x268);
  local_a8[4] = local_a8[7] - (auVar59._0_4_ + auVar39._0_4_) * _LC2;
  local_a8[5] = local_a8[7] - (auVar59._4_4_ + auVar39._4_4_) * _LC2;
  local_a8[6] = local_a8[7] - (auVar59._8_4_ + auVar39._8_4_) * _LC2;
  local_a8[7] = local_a8[7] - (auVar59._12_4_ + auVar39._12_4_) * _LC2;
  local_a8[0x20] = (auVar32._0_4_ - auVar26._0_4_) * _LC2;
  local_a8[0x21] = (auVar32._4_4_ - auVar26._4_4_) * _LC2;
  local_a8[0x22] = (auVar32._8_4_ - auVar26._8_4_) * _LC2;
  local_a8[0x23] = (auVar32._12_4_ - auVar26._12_4_) * _LC2;
  local_a8[8] = local_a8[0xb] - (auVar26._0_4_ + auVar32._0_4_) * _LC2;
  local_a8[9] = local_a8[0xb] - (auVar26._4_4_ + auVar32._4_4_) * _LC2;
  local_a8[10] = local_a8[0xb] - (auVar26._8_4_ + auVar32._8_4_) * _LC2;
  local_a8[0xb] = local_a8[0xb] - (auVar26._12_4_ + auVar32._12_4_) * _LC2;
  auVar51._0_4_ = 0.0 - *(float *)(param_9 + 0x220);
  auVar51._4_4_ = 0.0 - *(float *)(param_9 + 0x224);
  auVar51._8_4_ = 0.0 - *(float *)(param_9 + 0x228);
  auVar51._12_4_ = 0.0 - *(float *)(param_9 + 0x22c);
  auVar55._0_4_ = 0.0 - *(float *)(param_9 + 0x230);
  auVar55._4_4_ = 0.0 - *(float *)(param_9 + 0x234);
  auVar55._8_4_ = 0.0 - *(float *)(param_9 + 0x238);
  auVar55._12_4_ = 0.0 - *(float *)(param_9 + 0x23c);
  auVar39 = maxps(auVar51,*(undefined1 (*) [16])(param_9 + 0x220));
  auVar26 = maxps(auVar55,*(undefined1 (*) [16])(param_9 + 0x230));
  uVar31 = 0xffffffff;
  uVar29 = 0xffffffff;
  uVar25 = 0xffffffff;
  uVar30 = 0xffffffff;
  auVar47._0_4_ = 0.0 - *(float *)(param_9 + 0x240);
  auVar47._4_4_ = 0.0 - *(float *)(param_9 + 0x244);
  auVar47._8_4_ = 0.0 - *(float *)(param_9 + 0x248);
  auVar47._12_4_ = 0.0 - *(float *)(param_9 + 0x24c);
  auVar32 = maxps(auVar47,*(undefined1 (*) [16])(param_9 + 0x240));
  local_a8[0xc] = auVar39._0_4_ + _LC9;
  local_a8[0xd] = auVar39._4_4_ + _LC9;
  local_a8[0xe] = auVar39._8_4_ + _LC9;
  local_a8[0x10] = auVar26._0_4_ + _LC9;
  local_a8[0x11] = auVar26._4_4_ + _LC9;
  local_a8[0x12] = auVar26._8_4_ + _LC9;
  local_a8[0x14] = auVar32._0_4_ + _LC9;
  local_a8[0x15] = auVar32._4_4_ + _LC9;
  local_a8[0x16] = auVar32._8_4_ + _LC9;
  local_a8[0xf] = auVar39._12_4_ + _LC9;
  local_a8[0x13] = auVar26._12_4_ + _LC9;
  local_a8[0x17] = auVar32._12_4_ + _LC9;
  pfVar18 = local_a8 + 0xc;
  do {
    fVar1 = pfVar18[4];
    fVar2 = *pfVar18;
    auVar60._0_4_ = 0.0 - *(float *)((long)local_a8 + lVar20);
    auVar60._4_4_ = 0.0 - *(float *)((long)local_a8 + lVar20 + 4);
    auVar60._8_4_ = 0.0 - *(float *)((long)local_a8 + lVar20 + 8);
    auVar60._12_4_ = 0.0 - *(float *)((long)local_a8 + lVar20 + 0xc);
    auVar32 = maxps(auVar60,*(undefined1 (*) [16])((long)local_a8 + lVar20));
    fVar3 = pfVar18[8];
    lVar14 = lVar20 + 0x60;
    lVar15 = lVar20 + 100;
    lVar16 = lVar20 + 0x68;
    lVar17 = lVar20 + 0x6c;
    lVar20 = lVar20 + 0x10;
    uVar29 = uVar29 & -(uint)(auVar32._0_4_ <=
                             fVar1 * fVar11 + fVar2 * fVar10 + fVar3 * fVar12 +
                             *(float *)((long)local_a8 + lVar14));
    uVar25 = uVar25 & -(uint)(auVar32._4_4_ <=
                             fVar1 * fVar11 + fVar2 * fVar10 + fVar3 * fVar12 +
                             *(float *)((long)local_a8 + lVar15));
    uVar30 = uVar30 & -(uint)(auVar32._8_4_ <=
                             fVar1 * fVar11 + fVar2 * fVar10 + fVar3 * fVar12 +
                             *(float *)((long)local_a8 + lVar16));
    uVar31 = uVar31 & -(uint)(auVar32._12_4_ <=
                             fVar1 * fVar11 + fVar2 * fVar10 + fVar3 * fVar12 +
                             *(float *)((long)local_a8 + lVar17));
    pfVar18 = pfVar18 + 1;
  } while (lVar20 != 0x30);
  pfVar18 = local_a8 + 0xc;
  pfVar21 = (float *)(param_9 + 0x220);
  pfVar23 = (float *)&local_b8;
  do {
    fVar1 = pfVar21[1];
    pfVar19 = pfVar18 + 4;
    pfVar24 = pfVar23 + 1;
    fVar2 = *pfVar21;
    fVar3 = *pfVar18;
    fVar4 = pfVar21[2];
    auVar61._0_4_ = fVar1 * local_a8[4] + fVar2 * local_a8[0] + fVar4 * local_a8[8];
    auVar61._4_4_ = fVar1 * local_a8[5] + fVar2 * local_a8[1] + fVar4 * local_a8[9];
    auVar61._8_4_ = fVar1 * local_a8[6] + fVar2 * local_a8[2] + fVar4 * local_a8[10];
    auVar61._12_4_ = fVar1 * local_a8[7] + fVar2 * local_a8[3] + fVar4 * local_a8[0xb];
    auVar66._0_4_ = 0.0 - auVar61._0_4_;
    auVar66._4_4_ = 0.0 - auVar61._4_4_;
    auVar66._8_4_ = 0.0 - auVar61._8_4_;
    auVar66._12_4_ = 0.0 - auVar61._12_4_;
    auVar32 = maxps(auVar66,auVar61);
    fVar1 = pfVar18[1];
    fVar2 = pfVar18[2];
    fVar4 = *pfVar23;
    uVar29 = uVar29 & -(uint)(auVar32._0_4_ <=
                             fVar1 * local_a8[0x1c] + fVar3 * local_a8[0x18] +
                             fVar2 * local_a8[0x20] + fVar4);
    uVar25 = uVar25 & -(uint)(auVar32._4_4_ <=
                             fVar1 * local_a8[0x1d] + fVar3 * local_a8[0x19] +
                             fVar2 * local_a8[0x21] + fVar4);
    uVar30 = uVar30 & -(uint)(auVar32._8_4_ <=
                             fVar1 * local_a8[0x1e] + fVar3 * local_a8[0x1a] +
                             fVar2 * local_a8[0x22] + fVar4);
    uVar31 = uVar31 & -(uint)(auVar32._12_4_ <=
                             fVar1 * local_a8[0x1f] + fVar3 * local_a8[0x1b] +
                             fVar2 * local_a8[0x23] + fVar4);
    pfVar18 = pfVar19;
    pfVar21 = pfVar21 + 4;
    pfVar23 = pfVar24;
  } while (local_a8 + 0x18 != pfVar19);
  fVar1 = *(float *)(param_9 + 0x228);
  fVar2 = *(float *)(param_9 + 0x224);
  auVar62._0_4_ = fVar2 * local_a8[8] - fVar1 * local_a8[4];
  auVar62._4_4_ = fVar2 * local_a8[9] - fVar1 * local_a8[5];
  auVar62._8_4_ = fVar2 * local_a8[10] - fVar1 * local_a8[6];
  auVar62._12_4_ = fVar2 * local_a8[0xb] - fVar1 * local_a8[7];
  auVar67._0_4_ = 0.0 - auVar62._0_4_;
  auVar67._4_4_ = 0.0 - auVar62._4_4_;
  auVar67._8_4_ = 0.0 - auVar62._8_4_;
  auVar67._12_4_ = 0.0 - auVar62._12_4_;
  auVar68 = maxps(auVar67,auVar62);
  fVar3 = *(float *)(param_9 + 0x238);
  fVar4 = *(float *)(param_9 + 0x234);
  auVar52._0_4_ = fVar4 * local_a8[8] - local_a8[4] * fVar3;
  auVar52._4_4_ = fVar4 * local_a8[9] - local_a8[5] * fVar3;
  auVar52._8_4_ = fVar4 * local_a8[10] - local_a8[6] * fVar3;
  auVar52._12_4_ = fVar4 * local_a8[0xb] - local_a8[7] * fVar3;
  auVar56._0_4_ = 0.0 - auVar52._0_4_;
  auVar56._4_4_ = 0.0 - auVar52._4_4_;
  auVar56._8_4_ = 0.0 - auVar52._8_4_;
  auVar56._12_4_ = 0.0 - auVar52._12_4_;
  auVar59 = maxps(auVar56,auVar52);
  fVar5 = *(float *)(param_9 + 0x248);
  fVar6 = *(float *)(param_9 + 0x244);
  auVar48._0_4_ = fVar6 * local_a8[8] - local_a8[4] * fVar5;
  auVar48._4_4_ = fVar6 * local_a8[9] - local_a8[5] * fVar5;
  auVar48._8_4_ = fVar6 * local_a8[10] - local_a8[6] * fVar5;
  auVar48._12_4_ = fVar6 * local_a8[0xb] - local_a8[7] * fVar5;
  auVar53._0_4_ = 0.0 - auVar48._0_4_;
  auVar53._4_4_ = 0.0 - auVar48._4_4_;
  auVar53._8_4_ = 0.0 - auVar48._8_4_;
  auVar53._12_4_ = 0.0 - auVar48._12_4_;
  auVar65 = maxps(auVar53,auVar48);
  fVar7 = *(float *)(param_9 + 0x220);
  auVar49._0_4_ = fVar1 * local_a8[0] - local_a8[8] * fVar7;
  auVar49._4_4_ = fVar1 * local_a8[1] - local_a8[9] * fVar7;
  auVar49._8_4_ = fVar1 * local_a8[2] - local_a8[10] * fVar7;
  auVar49._12_4_ = fVar1 * local_a8[3] - local_a8[0xb] * fVar7;
  auVar69._4_4_ = 0.0 - auVar49._4_4_;
  auVar69._0_4_ = 0.0 - auVar49._0_4_;
  auVar69._8_4_ = 0.0 - auVar49._8_4_;
  auVar69._12_4_ = 0.0 - auVar49._12_4_;
  auVar70 = maxps(auVar69,auVar49);
  fVar1 = *(float *)(param_9 + 0x230);
  auVar63._0_4_ = fVar3 * local_a8[0] - local_a8[8] * fVar1;
  auVar63._4_4_ = fVar3 * local_a8[1] - local_a8[9] * fVar1;
  auVar63._8_4_ = fVar3 * local_a8[2] - local_a8[10] * fVar1;
  auVar63._12_4_ = fVar3 * local_a8[3] - local_a8[0xb] * fVar1;
  auVar71._4_4_ = 0.0 - auVar63._4_4_;
  auVar71._0_4_ = 0.0 - auVar63._0_4_;
  auVar71._8_4_ = 0.0 - auVar63._8_4_;
  auVar71._12_4_ = 0.0 - auVar63._12_4_;
  auVar39 = maxps(auVar71,auVar63);
  fVar3 = *(float *)(param_9 + 0x240);
  auVar57._0_4_ = fVar5 * local_a8[0] - local_a8[8] * fVar3;
  auVar57._4_4_ = fVar5 * local_a8[1] - local_a8[9] * fVar3;
  auVar57._8_4_ = fVar5 * local_a8[2] - local_a8[10] * fVar3;
  auVar57._12_4_ = fVar5 * local_a8[3] - local_a8[0xb] * fVar3;
  auVar41._0_4_ = 0.0 - auVar57._0_4_;
  auVar41._4_4_ = 0.0 - auVar57._4_4_;
  auVar41._8_4_ = 0.0 - auVar57._8_4_;
  auVar41._12_4_ = 0.0 - auVar57._12_4_;
  auVar32 = maxps(auVar41,auVar57);
  auVar72._0_4_ =
       -(uint)(auVar39._0_4_ <=
               local_a8[0x10] * local_a8[0x20] + local_a8[0x12] * local_a8[0x18] +
               local_a8[0xd] * fVar12 + local_a8[0x15] * fVar10 &&
              auVar32._0_4_ <=
              local_a8[0x20] * local_a8[0x14] + local_a8[0x16] * local_a8[0x18] +
              fVar11 * local_a8[0xd] + local_a8[0x11] * fVar10);
  auVar72._4_4_ =
       -(uint)(auVar39._4_4_ <=
               local_a8[0x10] * local_a8[0x21] + local_a8[0x12] * local_a8[0x19] +
               local_a8[0xd] * fVar12 + local_a8[0x15] * fVar10 &&
              auVar32._4_4_ <=
              local_a8[0x21] * local_a8[0x14] + local_a8[0x16] * local_a8[0x19] +
              fVar11 * local_a8[0xd] + local_a8[0x11] * fVar10);
  auVar72._8_4_ =
       -(uint)(auVar39._8_4_ <=
               local_a8[0x10] * local_a8[0x22] + local_a8[0x12] * local_a8[0x1a] +
               local_a8[0xd] * fVar12 + local_a8[0x15] * fVar10 &&
              auVar32._8_4_ <=
              local_a8[0x22] * local_a8[0x14] + local_a8[0x16] * local_a8[0x1a] +
              fVar11 * local_a8[0xd] + local_a8[0x11] * fVar10);
  auVar72._12_4_ =
       -(uint)(auVar39._12_4_ <=
               local_a8[0x10] * local_a8[0x23] + local_a8[0x12] * local_a8[0x1b] +
               local_a8[0xd] * fVar12 + local_a8[0x15] * fVar10 &&
              auVar32._12_4_ <=
              local_a8[0x23] * local_a8[0x14] + local_a8[0x16] * local_a8[0x1b] +
              fVar11 * local_a8[0xd] + local_a8[0x11] * fVar10);
  auVar54._0_4_ = fVar7 * local_a8[4] - fVar2 * local_a8[0];
  auVar54._4_4_ = fVar7 * local_a8[5] - fVar2 * local_a8[1];
  auVar54._8_4_ = fVar7 * local_a8[6] - fVar2 * local_a8[2];
  auVar54._12_4_ = fVar7 * local_a8[7] - fVar2 * local_a8[3];
  auVar33._0_4_ = 0.0 - auVar54._0_4_;
  auVar33._4_4_ = 0.0 - auVar54._4_4_;
  auVar33._8_4_ = 0.0 - auVar54._8_4_;
  auVar33._12_4_ = 0.0 - auVar54._12_4_;
  auVar32 = maxps(auVar33,auVar54);
  auVar50._0_4_ = fVar1 * local_a8[4] - fVar4 * local_a8[0];
  auVar50._4_4_ = fVar1 * local_a8[5] - fVar4 * local_a8[1];
  auVar50._8_4_ = fVar1 * local_a8[6] - fVar4 * local_a8[2];
  auVar50._12_4_ = fVar1 * local_a8[7] - fVar4 * local_a8[3];
  auVar45._0_4_ = local_a8[4] * fVar3 - local_a8[0] * fVar6;
  auVar45._4_4_ = local_a8[5] * fVar3 - local_a8[1] * fVar6;
  auVar45._8_4_ = local_a8[6] * fVar3 - local_a8[2] * fVar6;
  auVar45._12_4_ = local_a8[7] * fVar3 - local_a8[3] * fVar6;
  auVar42._0_4_ = 0.0 - auVar50._0_4_;
  auVar42._4_4_ = 0.0 - auVar50._4_4_;
  auVar42._8_4_ = 0.0 - auVar50._8_4_;
  auVar42._12_4_ = 0.0 - auVar50._12_4_;
  auVar43._0_4_ = 0.0 - auVar45._0_4_;
  auVar43._4_4_ = 0.0 - auVar45._4_4_;
  auVar43._8_4_ = 0.0 - auVar45._8_4_;
  auVar43._12_4_ = 0.0 - auVar45._12_4_;
  auVar39 = maxps(auVar42,auVar50);
  auVar26 = maxps(auVar43,auVar45);
  auVar13._4_4_ = uVar25;
  auVar13._0_4_ = uVar29;
  auVar13._8_4_ = uVar30;
  auVar13._12_4_ = uVar31;
  auVar34._0_4_ =
       -(uint)(auVar32._0_4_ <=
               local_a8[0x12] * fVar12 + fVar11 * local_a8[0x16] +
               local_a8[0xc] * local_a8[0x1c] + local_a8[0xd] * local_a8[0x18] &&
              auVar39._0_4_ <=
              fVar12 * local_a8[0xe] + local_a8[0x16] * fVar10 +
              local_a8[0x11] * local_a8[0x18] + local_a8[0x10] * local_a8[0x1c]);
  auVar34._4_4_ =
       -(uint)(auVar32._4_4_ <=
               local_a8[0x12] * fVar12 + fVar11 * local_a8[0x16] +
               local_a8[0xc] * local_a8[0x1d] + local_a8[0xd] * local_a8[0x19] &&
              auVar39._4_4_ <=
              fVar12 * local_a8[0xe] + local_a8[0x16] * fVar10 +
              local_a8[0x11] * local_a8[0x19] + local_a8[0x10] * local_a8[0x1d]);
  auVar34._8_4_ =
       -(uint)(auVar32._8_4_ <=
               local_a8[0x12] * fVar12 + fVar11 * local_a8[0x16] +
               local_a8[0xc] * local_a8[0x1e] + local_a8[0xd] * local_a8[0x1a] &&
              auVar39._8_4_ <=
              fVar12 * local_a8[0xe] + local_a8[0x16] * fVar10 +
              local_a8[0x11] * local_a8[0x1a] + local_a8[0x10] * local_a8[0x1e]);
  auVar34._12_4_ =
       -(uint)(auVar32._12_4_ <=
               local_a8[0x12] * fVar12 + fVar11 * local_a8[0x16] +
               local_a8[0xc] * local_a8[0x1f] + local_a8[0xd] * local_a8[0x1b] &&
              auVar39._12_4_ <=
              fVar12 * local_a8[0xe] + local_a8[0x16] * fVar10 +
              local_a8[0x11] * local_a8[0x1b] + local_a8[0x10] * local_a8[0x1f]);
  auVar35._4_4_ = -(uint)(fStack_1f4 <= fStack000000000000000c);
  auVar35._0_4_ = -(uint)(local_1f8 <= fStack0000000000000008);
  auVar35._8_4_ = -(uint)((float)param_4 <= fStack0000000000000010);
  auVar35._12_4_ = -(uint)(fVar40 <= fStack0000000000000014);
  auVar44._4_4_ =
       -(uint)(auVar26._4_4_ <=
              local_a8[0x15] * local_a8[0x19] + local_a8[0x1d] * local_a8[0x14] +
              fVar11 * local_a8[0xe] + local_a8[0x12] * fVar10);
  auVar44._0_4_ =
       -(uint)(auVar26._0_4_ <=
              local_a8[0x15] * local_a8[0x18] + local_a8[0x1c] * local_a8[0x14] +
              fVar11 * local_a8[0xe] + local_a8[0x12] * fVar10);
  auVar44._8_4_ =
       -(uint)(auVar26._8_4_ <=
              local_a8[0x15] * local_a8[0x1a] + local_a8[0x1e] * local_a8[0x14] +
              fVar11 * local_a8[0xe] + local_a8[0x12] * fVar10);
  auVar44._12_4_ =
       -(uint)(auVar26._12_4_ <=
              local_a8[0x15] * local_a8[0x1b] + local_a8[0x1f] * local_a8[0x14] +
              fVar11 * local_a8[0xe] + local_a8[0x12] * fVar10);
  auVar27._0_4_ =
       -(uint)(auVar65._0_4_ <=
               local_a8[0x15] * local_a8[0x20] + local_a8[0x16] * local_a8[0x1c] +
               fVar11 * local_a8[0xc] + local_a8[0x10] * fVar10 &&
              auVar70._0_4_ <=
              local_a8[0xc] * local_a8[0x20] + local_a8[0xe] * local_a8[0x18] +
              local_a8[0x11] * fVar12 + fVar11 * local_a8[0x15]);
  auVar27._4_4_ =
       -(uint)(auVar65._4_4_ <=
               local_a8[0x15] * local_a8[0x21] + local_a8[0x16] * local_a8[0x1d] +
               fVar11 * local_a8[0xc] + local_a8[0x10] * fVar10 &&
              auVar70._4_4_ <=
              local_a8[0xc] * local_a8[0x21] + local_a8[0xe] * local_a8[0x19] +
              local_a8[0x11] * fVar12 + fVar11 * local_a8[0x15]);
  auVar27._8_4_ =
       -(uint)(auVar65._8_4_ <=
               local_a8[0x15] * local_a8[0x22] + local_a8[0x16] * local_a8[0x1e] +
               fVar11 * local_a8[0xc] + local_a8[0x10] * fVar10 &&
              auVar70._8_4_ <=
              local_a8[0xc] * local_a8[0x22] + local_a8[0xe] * local_a8[0x1a] +
              local_a8[0x11] * fVar12 + fVar11 * local_a8[0x15]);
  auVar27._12_4_ =
       -(uint)(auVar65._12_4_ <=
               local_a8[0x15] * local_a8[0x23] + local_a8[0x16] * local_a8[0x1f] +
               fVar11 * local_a8[0xc] + local_a8[0x10] * fVar10 &&
              auVar70._12_4_ <=
              local_a8[0xc] * local_a8[0x23] + local_a8[0xe] * local_a8[0x1b] +
              local_a8[0x11] * fVar12 + fVar11 * local_a8[0x15]);
  auVar8._4_4_ = -(uint)(auVar68._4_4_ <=
                         local_a8[0xd] * local_a8[0x21] + local_a8[0xe] * local_a8[0x1d] +
                         local_a8[0x10] * fVar12 + fVar11 * local_a8[0x14] &&
                        auVar59._4_4_ <=
                        local_a8[0x11] * local_a8[0x21] + local_a8[0x12] * local_a8[0x1d] +
                        local_a8[0xc] * fVar12 + local_a8[0x14] * fVar10);
  auVar8._0_4_ = -(uint)(auVar68._0_4_ <=
                         local_a8[0xd] * local_a8[0x20] + local_a8[0xe] * local_a8[0x1c] +
                         local_a8[0x10] * fVar12 + fVar11 * local_a8[0x14] &&
                        auVar59._0_4_ <=
                        local_a8[0x11] * local_a8[0x20] + local_a8[0x12] * local_a8[0x1c] +
                        local_a8[0xc] * fVar12 + local_a8[0x14] * fVar10);
  auVar8._8_4_ = -(uint)(auVar68._8_4_ <=
                         local_a8[0xd] * local_a8[0x22] + local_a8[0xe] * local_a8[0x1e] +
                         local_a8[0x10] * fVar12 + fVar11 * local_a8[0x14] &&
                        auVar59._8_4_ <=
                        local_a8[0x11] * local_a8[0x22] + local_a8[0x12] * local_a8[0x1e] +
                        local_a8[0xc] * fVar12 + local_a8[0x14] * fVar10);
  auVar8._12_4_ =
       -(uint)(auVar68._12_4_ <=
               local_a8[0xd] * local_a8[0x23] + local_a8[0xe] * local_a8[0x1f] +
               local_a8[0x10] * fVar12 + fVar11 * local_a8[0x14] &&
              auVar59._12_4_ <=
              local_a8[0x11] * local_a8[0x23] + local_a8[0x12] * local_a8[0x1f] +
              local_a8[0xc] * fVar12 + local_a8[0x14] * fVar10);
  uVar29 = *(uint *)(*param_10 + 4);
  auVar35 = auVar34 & auVar44 & auVar27 & auVar8 & auVar13 & auVar72 & auVar35;
  uVar22 = movmskps((int)pfVar24,auVar35);
  uVar25 = auVar35._8_4_ >> 0x1f;
  uVar30 = uVar25 & *(uint *)(*param_10 + 8) | ~uVar25 & uVar29;
  uVar31 = uVar25 & *(uint *)(*param_10 + 0xc) | ~uVar25 & uVar29;
  uVar36 = auVar35._4_4_ >> 0x1f;
  uVar37 = auVar35._0_4_ >> 0x1f;
  uVar29 = (uVar25 & *(uint *)(*param_10 + 4) | ~uVar25 & uVar29) & uVar36 | ~uVar36 & uVar30;
  uVar30 = uVar30 & uVar36 | ~uVar36 & uVar31;
  auVar28._0_4_ = (uVar25 & *(uint *)*param_10 | ~uVar25 & *(uint *)*param_10) & uVar37;
  auVar28._4_4_ = uVar29 & uVar37;
  auVar28._8_4_ = uVar30 & uVar37;
  auVar28._12_4_ = uVar31 & uVar37;
  auVar9._4_4_ = ~uVar37 & uVar30;
  auVar9._0_4_ = ~uVar37 & uVar29;
  auVar9._8_4_ = ~uVar37 & uVar31;
  auVar9._12_4_ = ~uVar37 & uVar31;
  *param_10 = auVar28 | auVar9;
  __popcountdi2(CONCAT44((int)((ulong)pfVar24 >> 0x20),uVar22));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::HeightFieldShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*Allocate)(0xd0);
  *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
  uVar3 = _LC4;
  *(undefined2 *)(puVar4 + 3) = 0xd04;
  *(undefined4 *)(puVar4 + 6) = uVar3;
  *(undefined4 *)((long)puVar4 + 0x34) = uVar3;
  *(undefined4 *)(puVar4 + 7) = uVar3;
  *(undefined4 *)((long)puVar4 + 0x3c) = uVar3;
  uVar2 = _UNK_00116638;
  uVar1 = _LC39;
  puVar4[10] = 0xffffff0800000000;
  puVar4[8] = uVar1;
  puVar4[9] = uVar2;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR__HeightFieldShape_00116440;
  *(undefined2 *)(puVar4 + 0xb) = 0xffff;
  puVar4[0xe] = 0;
  puVar4[0x11] = 0;
  puVar4[0x14] = 0;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  puVar4[0x18] = 0;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 0x16) = (undefined1  [16])0x0;
  return;
}



/* JPH::HeightFieldShape::~HeightFieldShape() */

void __thiscall JPH::HeightFieldShape::~HeightFieldShape(HeightFieldShape *this)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  *(undefined ***)this = &PTR__HeightFieldShape_00116440;
  if (*(long *)(this + 0x60) != 0) {
    (*AlignedFree)();
  }
  puVar6 = *(undefined8 **)(this + 0xc0);
  if (puVar6 != (undefined8 *)0x0) {
    if ((*(long *)(this + 0xb0) != 0) && (puVar2 = puVar6 + *(long *)(this + 0xb0), puVar6 < puVar2)
       ) {
      do {
        while (piVar4 = (int *)*puVar6, piVar4 == (int *)0x0) {
LAB_00100e00:
          puVar6 = puVar6 + 1;
          if (puVar2 <= puVar6) goto LAB_00100e88;
        }
        LOCK();
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 != 0) goto LAB_00100e00;
        plVar5 = *(long **)(piVar4 + 6);
        if (plVar5 != (long *)0x0) {
          if ((*(long *)(piVar4 + 2) != 0) &&
             (plVar7 = plVar5 + *(long *)(piVar4 + 2) * 2, plVar5 < plVar7)) {
            do {
              if ((long *)*plVar5 != (long *)0x0) {
                (**(code **)(*(long *)*plVar5 + 0x18))();
              }
              plVar5 = plVar5 + 2;
            } while (plVar5 < plVar7);
            plVar5 = *(long **)(piVar4 + 6);
          }
          piVar4[2] = 0;
          piVar4[3] = 0;
          (*Free)(plVar5);
        }
        puVar6 = puVar6 + 1;
        (*Free)(piVar4);
      } while (puVar6 < puVar2);
LAB_00100e88:
      puVar6 = *(undefined8 **)(this + 0xc0);
    }
    *(undefined8 *)(this + 0xb0) = 0;
    (*Free)(puVar6);
  }
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
    (*Free)();
  }
  plVar5 = *(long **)(this + 0x88);
  if (plVar5 == (long *)0x0) {
    return;
  }
  if ((*(long *)(this + 0x78) != 0) && (plVar7 = plVar5 + *(long *)(this + 0x78), plVar5 < plVar7))
  {
    do {
      while (plVar3 = (long *)*plVar5, plVar3 == (long *)0x0) {
LAB_00100d80:
        plVar5 = plVar5 + 1;
        if (plVar7 <= plVar5) goto LAB_00100dc0;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_00100d80;
      if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
        (**(code **)(*plVar3 + 0x18))();
        goto LAB_00100d80;
      }
      (*Free)();
      plVar5 = plVar5 + 1;
    } while (plVar5 < plVar7);
LAB_00100dc0:
    plVar5 = *(long **)(this + 0x88);
  }
  *(undefined8 *)(this + 0x78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00100de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(plVar5);
  return;
}



/* JPH::HeightFieldShape::~HeightFieldShape() */

void __thiscall JPH::HeightFieldShape::~HeightFieldShape(HeightFieldShape *this)

{
  ~HeightFieldShape(this);
                    /* WARNING: Could not recover jumptable at 0x00100ed1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::HeightFieldShapeSettings::GetRTTI() const */

undefined1 * JPH::HeightFieldShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti,
                      "HeightFieldShapeSettings",0xd0,
                      GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti;
}



/* JPH::HeightFieldShape::GetHeights(unsigned int, unsigned int, unsigned int, unsigned int, float*,
   long) const [clone .part.0] */

void __thiscall
JPH::HeightFieldShape::GetHeights
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,float *param_5
          ,long param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  HeightFieldShape HVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  int iStack_70;
  
  fVar7 = _LC13;
  fVar1 = _LC2;
  if (*(int *)(this + 0x48) == 0) {
    fVar1 = *(float *)(this + 0x24);
    if (param_4 != 0) {
      pfVar16 = param_5 + param_3;
      uVar12 = 0;
      do {
        if (param_3 != 0) {
          pfVar9 = param_5;
          if (((int)pfVar16 - (int)param_5 & 4U) != 0) {
            *param_5 = fVar1;
            pfVar9 = param_5 + 1;
            if (param_5 + 1 == pfVar16) goto LAB_00100ff0;
          }
          do {
            *pfVar9 = fVar1;
            pfVar10 = pfVar9 + 2;
            pfVar9[1] = fVar1;
            pfVar9 = pfVar10;
          } while (pfVar10 != pfVar16);
        }
LAB_00100ff0:
        uVar12 = uVar12 + 1;
        param_5 = param_5 + param_6;
        pfVar16 = pfVar16 + param_6;
      } while (uVar12 != param_4);
    }
  }
  else {
    uVar12 = *(uint *)(this + 0x40);
    uVar5 = *(uint *)(this + 0x44);
    uVar17 = uVar12 / uVar5 - 1;
    if (uVar17 != 0) {
      uVar24 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> uVar24 == 0; uVar24 = uVar24 - 1) {
        }
      }
      uVar17 = (&sGridOffsets)[uVar24];
    }
    uVar22 = (ulong)param_2 / (ulong)uVar5;
    if (uVar5 <= param_4) {
      uVar8 = 0;
      iStack_70 = param_2 * uVar12 + param_1;
      uVar24 = uVar5;
      do {
        if (uVar5 <= param_3) {
          lVar6 = *(long *)(this + 0x60);
          uVar14 = 0;
          uVar23 = uVar5;
          do {
            HVar4 = this[0x55];
            fVar2 = *(float *)(this + 0x34);
            uVar19 = param_1 / uVar5 + uVar14;
            uVar11 = (ulong)(uVar19 & 1 | (int)uVar22 * 2 & 2U);
            lVar21 = (ulong)((uVar19 >> 1) + (int)(uVar22 >> 1) * (uVar12 / uVar5 + 1 >> 1) + uVar17
                            ) * 0x10 + lVar6;
            uVar19 = (uint)*(ushort *)(lVar21 + uVar11 * 2);
            fVar3 = *(float *)(this + 0x24);
            fVar26 = ((float)(int)(*(ushort *)(lVar21 + 8 + uVar11 * 2) - uVar19) /
                     (float)(byte)HVar4) * fVar2;
            if (uVar5 != 0) {
              lVar21 = *(long *)(this + 0x68);
              iVar20 = iStack_70;
              uVar18 = uVar24 - uVar5;
              while( true ) {
                uVar15 = uVar23 - uVar5;
                while( true ) {
                  uVar13 = (iVar20 + uVar15) * (uint)(byte)this[0x54];
                  uVar13 = (int)(uint)*(ushort *)(lVar21 + (ulong)(uVar13 >> 3)) >>
                           ((byte)uVar13 & 7) & (uint)(byte)HVar4;
                  fVar25 = fVar7;
                  if (SUB41(uVar13,0) != HVar4) {
                    fVar25 = (float)uVar13 * fVar26 + (float)uVar19 * fVar2 + fVar3 + fVar26 * fVar1
                    ;
                  }
                  uVar11 = (ulong)uVar15;
                  uVar15 = uVar15 + 1;
                  param_5[uVar11 + (ulong)uVar18 * param_6] = fVar25;
                  if (uVar15 == uVar23) break;
                  HVar4 = this[0x55];
                }
                uVar18 = uVar18 + 1;
                iVar20 = iVar20 + uVar12;
                if (uVar18 == uVar24) break;
                HVar4 = this[0x55];
              }
            }
            uVar14 = uVar14 + 1;
            uVar23 = uVar23 + uVar5;
          } while (uVar14 < param_3 / uVar5);
        }
        uVar8 = uVar8 + 1;
        iStack_70 = iStack_70 + uVar5 * uVar12;
        uVar24 = uVar24 + uVar5;
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (uVar8 < param_4 / uVar5);
      return;
    }
  }
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  HeightFieldShape *pHVar2;
  long *plVar3;
  long *plVar4;
  HeightFieldShape *this;
  long *plVar5;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar5 = *(long **)((long)param_1 + 0xb8);
  *(undefined ***)param_1 = &PTR_GetRTTI_00116408;
  if (plVar5 != (long *)0x0) {
    if ((*(long *)((long)param_1 + 0xa8) != 0) &&
       (plVar3 = plVar5 + *(long *)((long)param_1 + 0xa8), plVar5 < plVar3)) {
      do {
        while (plVar4 = (long *)*plVar5, plVar4 == (long *)0x0) {
LAB_001012d0:
          plVar5 = plVar5 + 1;
          if (plVar3 <= plVar5) goto LAB_00101310;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001012d0;
        if (*(code **)(*plVar4 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar4 + 0x18))();
          goto LAB_001012d0;
        }
        (*Free)();
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar3);
LAB_00101310:
      plVar5 = *(long **)((long)param_1 + 0xb8);
    }
    *(undefined8 *)((long)param_1 + 0xa8) = 0;
    (*Free)(plVar5);
  }
  if (*(long *)((long)param_1 + 0xa0) != 0) {
    *(undefined8 *)((long)param_1 + 0x90) = 0;
    (*Free)();
  }
  if (*(long *)((long)param_1 + 0x88) != 0) {
    *(undefined8 *)((long)param_1 + 0x78) = 0;
    (*Free)();
  }
  *(undefined8 **)param_1 = &Reallocate;
  if (*(char *)((long)param_1 + 0x38) == '\x01') {
    this = *(HeightFieldShape **)((long)param_1 + 0x18);
    if (this != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar2 = this + 8;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      UNLOCK();
      if (*(int *)pHVar2 == 0) {
        if (*(code **)(*(long *)this + 8) == HeightFieldShape::~HeightFieldShape) {
          HeightFieldShape::~HeightFieldShape(this);
          (*Free)(this);
        }
        else {
          (**(code **)(*(long *)this + 8))();
        }
      }
    }
  }
  else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
          (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* JPH::HeightFieldShape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned
   int) */

void __thiscall
JPH::HeightFieldShape::RestoreMaterialState(HeightFieldShape *this,RefConst *param_1,uint param_2)

{
  long *plVar1;
  RefConst *pRVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  lVar10 = (ulong)param_2 * 8;
  pRVar2 = param_1 + lVar10;
  if (*(long *)(this + 0x78) != 0) {
    puVar6 = *(undefined8 **)(this + 0x88);
    puVar9 = puVar6 + *(long *)(this + 0x78);
    for (; puVar6 < puVar9; puVar6 = puVar6 + 1) {
      plVar3 = (long *)*puVar6;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          if (*(code **)(*plVar3 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
            (*Free)();
          }
          else {
            (**(code **)(*plVar3 + 0x18))();
          }
        }
      }
    }
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(ulong *)(this + 0x80) < (ulong)(lVar10 >> 3)) {
    puVar6 = (undefined8 *)(*Allocate)(lVar10);
    puVar9 = *(undefined8 **)(this + 0x88);
    if (puVar9 != (undefined8 *)0x0) {
      lVar4 = *(long *)(this + 0x78);
      if (puVar6 < puVar9) {
        for (puVar7 = puVar6; puVar7 < puVar6 + lVar4; puVar7 = puVar7 + 1) {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar7 = uVar5;
        }
      }
      else {
        puVar9 = puVar9 + lVar4 + -1;
        puVar7 = puVar6 + lVar4 + -1;
        if (!CARRY8(lVar4 * 8 - 8,(ulong)puVar6)) {
          do {
            uVar5 = *puVar9;
            puVar8 = puVar7 + -1;
            puVar9 = puVar9 + -1;
            *puVar7 = uVar5;
            puVar7 = puVar8;
          } while (puVar6 <= puVar8);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x88) = puVar6;
    *(long *)(this + 0x80) = lVar10 >> 3;
  }
  for (; pRVar2 != param_1; param_1 = param_1 + 8) {
    lVar10 = *(long *)(this + 0x78);
    *(long *)(this + 0x78) = lVar10 + 1;
    lVar4 = *(long *)param_1;
    *(long *)(*(long *)(this + 0x88) + lVar10 * 8) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



/* JPH::HeightFieldShape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void __thiscall JPH::HeightFieldShape::SaveMaterialState(HeightFieldShape *this,Array *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  
  if (param_1 == (Array *)(this + 0x78)) {
    return;
  }
  plVar11 = *(long **)(this + 0x88);
  lVar14 = *(long *)(this + 0x78) * 8;
  plVar3 = plVar11 + *(long *)(this + 0x78);
  if (*(long *)param_1 != 0) {
    plVar12 = *(long **)(param_1 + 0x10);
    plVar2 = plVar12 + *(long *)param_1;
    for (; plVar12 < plVar2; plVar12 = plVar12 + 1) {
      while (plVar4 = (long *)*plVar12, plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) break;
        if (*(code **)(*plVar4 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar4 + 0x18))();
          break;
        }
        (*Free)();
        plVar12 = plVar12 + 1;
        if (plVar2 <= plVar12) goto LAB_00101620;
      }
    }
  }
LAB_00101620:
  *(undefined8 *)param_1 = 0;
  uVar13 = lVar14 >> 3;
  if (*(ulong *)(param_1 + 8) < uVar13) {
    puVar7 = (undefined8 *)(*Allocate)(lVar14);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    if (puVar10 != (undefined8 *)0x0) {
      lVar14 = *(long *)param_1;
      if (puVar7 < puVar10) {
        for (puVar8 = puVar7; puVar8 < puVar7 + lVar14; puVar8 = puVar8 + 1) {
          uVar6 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar6;
        }
      }
      else {
        puVar10 = puVar10 + lVar14 + -1;
        puVar8 = puVar7 + lVar14 + -1;
        if (!CARRY8(lVar14 * 8 - 8,(ulong)puVar7)) {
          do {
            uVar6 = *puVar10;
            puVar9 = puVar8 + -1;
            puVar10 = puVar10 + -1;
            *puVar8 = uVar6;
            puVar8 = puVar9;
          } while (puVar7 <= puVar9);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(param_1 + 0x10) = puVar7;
    *(ulong *)(param_1 + 8) = uVar13;
  }
  for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
    lVar14 = *(long *)param_1;
    *(long *)param_1 = lVar14 + 1;
    lVar5 = *plVar11;
    *(long *)(*(long *)(param_1 + 0x10) + lVar14 * 8) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast const&,
   JPH::RayCastSettings const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const::Visitor>(JPH::HeightFieldShape::CastRay(JPH::RayCast const&,
   JPH::RayCastSettings const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast_const&,JPH::RayCastSettings_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>&,JPH::ShapeFilter_const&)const::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  HeightFieldShape HVar1;
  HeightFieldShape HVar2;
  ushort uVar3;
  code *pcVar4;
  long lVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
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
  undefined1 auVar31 [14];
  undefined1 auVar32 [16];
  undefined1 *puVar33;
  char *pcVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  char *pcVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  ulong uVar45;
  int iVar46;
  int iVar47;
  ulong uVar48;
  undefined1 (*pauVar49) [16];
  uint uVar50;
  int *piVar51;
  int *piVar52;
  undefined1 *puVar53;
  uint uVar55;
  int iVar56;
  int *piVar57;
  undefined8 *puVar58;
  undefined8 *puVar59;
  undefined8 *puVar60;
  long *plVar61;
  Visitor *pVVar62;
  undefined1 (*pauVar63) [16];
  uint uVar64;
  ulong uVar65;
  float fVar66;
  uint uVar67;
  long lVar68;
  float fVar69;
  long in_FS_OFFSET;
  byte bVar70;
  float fVar71;
  float fVar79;
  float fVar80;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar92;
  float fVar94;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar93;
  float fVar95;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
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
  float fVar108;
  undefined1 auVar107 [16];
  float fVar109;
  float fVar114;
  float fVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar116;
  undefined1 auVar113 [16];
  float fVar117;
  float fVar119;
  float fVar120;
  undefined1 auVar118 [16];
  float fVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
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
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float fVar160;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  int iStack_4c8;
  int iStack_4c4;
  int iStack_4c0;
  int iStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  uint uStack_43c;
  uint uStack_438;
  uint uStack_434;
  uint uStack_430;
  int local_42c;
  uint local_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  undefined1 auStack_418 [16];
  uint local_408;
  uint local_404;
  uint local_400;
  int iStack_3fc;
  undefined1 auStack_3f8 [16];
  ulong uStack_3e8;
  Visitor *local_3e0;
  undefined1 auStack_3d8 [16];
  int iStack_3c8;
  int iStack_3c4;
  int iStack_3c0;
  int iStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined1 auStack_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 (*pauStack_368) [16];
  uint local_360;
  uint local_35c;
  undefined4 uStack_354;
  float fStack_350;
  uint uStack_34c;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 auStack_2d8 [8];
  float fStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar54;
  
  bVar70 = 0;
  piVar57 = &iStack_4c8;
  piVar51 = &iStack_4c8;
  piVar52 = &iStack_4c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  local_3e0 = param_1;
  if (*(int *)(this + 0x48) != 0) {
    local_360 = *(uint *)(this + 0x44);
    local_428 = *(uint *)(this + 0x40) - 1;
    local_35c = local_360 + 1;
    uVar36 = *(uint *)(this + 0x40) / local_360;
    local_404 = uVar36 - 1;
    if (local_404 == 0) {
      local_400 = 0;
      local_42c = 0;
    }
    else {
      uVar37 = 0x1f;
      if (local_404 != 0) {
        for (; local_404 >> uVar37 == 0; uVar37 = uVar37 - 1) {
        }
      }
      local_42c = (&sGridOffsets)[0x1f - (uVar37 ^ 0x1f)];
      local_400 = 0x20 - (uVar37 ^ 0x1f);
    }
    local_408 = uVar36 + 1 >> 1;
    uVar48 = (long)(int)(local_35c * local_35c) * 0x10 + 0x10;
    piVar51 = &iStack_4c8;
    while (piVar52 != (int *)((long)&iStack_4c8 - (uVar48 & 0xfffffffffffff000))) {
      piVar57 = (int *)((long)piVar51 + -0x1000);
      *(undefined8 *)((long)piVar51 + -8) = *(undefined8 *)((long)piVar51 + -8);
      piVar52 = (int *)((long)piVar51 + -0x1000);
      piVar51 = (int *)((long)piVar51 + -0x1000);
    }
    uVar48 = (ulong)((uint)uVar48 & 0xfff);
    lVar7 = -uVar48;
    puVar53 = (undefined1 *)((long)piVar57 + lVar7);
    puVar54 = (undefined1 *)((long)piVar57 + lVar7);
    if (uVar48 != 0) {
      *(undefined8 *)((long)piVar57 + -8) = *(undefined8 *)((long)piVar57 + -8);
    }
    uVar48 = (long)(int)(local_35c * local_35c) + 0x17;
    pauStack_368 = (undefined1 (*) [16])((ulong)((long)piVar57 + lVar7 + 0xf) & 0xfffffffffffffff0);
    puVar33 = (undefined1 *)((long)piVar57 + lVar7);
    while (puVar54 != (undefined1 *)((long)piVar57 + (lVar7 - (uVar48 & 0xfffffffffffff000)))) {
      puVar53 = puVar33 + -0x1000;
      *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
      puVar54 = puVar33 + -0x1000;
      puVar33 = puVar33 + -0x1000;
    }
    uVar48 = (ulong)((uint)uVar48 & 0xff0);
    lVar7 = -uVar48;
    if (uVar48 != 0) {
      *(undefined8 *)(puVar53 + -8) = *(undefined8 *)(puVar53 + -8);
    }
    fStack_468 = *(float *)(this + 0x20);
    fStack_478 = *(float *)(this + 0x24);
    fStack_488 = *(float *)(this + 0x28);
    uVar36 = 0;
    uStack_3e8 = (ulong)(puVar53 + lVar7 + 0xf) & 0xfffffffffffffff0;
    fStack_498 = *(float *)(this + 0x30);
    fStack_4a8 = *(float *)(this + 0x34);
    fStack_4b8 = *(float *)(this + 0x38);
    fVar160 = *(float *)(*(long *)param_1 + 8);
    uStack_438 = local_360 * local_35c;
    iStack_4c8 = local_428 - __LC27;
    iStack_4c4 = local_428 - _UNK_00116694;
    iStack_4c0 = local_428 - _UNK_00116698;
    iStack_4bc = local_428 - _UNK_0011669c;
    fStack_4b4 = fStack_4b8;
    fStack_4b0 = fStack_4b8;
    fStack_4ac = fStack_4b8;
    fStack_4a4 = fStack_4a8;
    fStack_4a0 = fStack_4a8;
    fStack_49c = fStack_4a8;
    fStack_494 = fStack_498;
    fStack_490 = fStack_498;
    fStack_48c = fStack_498;
    fStack_484 = fStack_488;
    fStack_480 = fStack_488;
    fStack_47c = fStack_488;
    fStack_474 = fStack_478;
    fStack_470 = fStack_478;
    fStack_46c = fStack_478;
    fStack_464 = fStack_468;
    fStack_460 = fStack_468;
    fStack_45c = fStack_468;
    uStack_424 = local_428;
    uStack_420 = local_428;
    uStack_41c = local_428;
    do {
      iStack_3fc = local_250;
      fVar69 = _LC2;
      uVar64 = uVar36 & 0x3fff;
      uVar37 = uVar36 >> 0xe & 0x3fff;
      uVar38 = uVar36 >> 0x1c;
      if (uVar38 < local_400) {
        bVar8 = (byte)(uVar36 >> 0x18);
        uVar36 = 1 << (bVar8 >> 4);
        if (local_408 < uVar36) {
          uVar36 = local_408;
        }
        uVar81 = local_360 << (((char)local_400 + -1) - (bVar8 >> 4) & 0x1f);
        auVar128 = *(undefined1 (*) [16])
                    ((ulong)(uVar36 * uVar37 + (&sGridOffsets)[uVar38] + uVar64) * 0x10 +
                    *(long *)(local_258 + 0x60));
        iVar47 = uVar64 * 2;
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar128._0_10_;
        auVar9._12_2_ = auVar128._6_2_;
        auVar10._8_2_ = auVar128._4_2_;
        auVar10._0_8_ = auVar128._0_8_;
        auVar10._10_4_ = auVar9._10_4_;
        auVar31._6_8_ = 0;
        auVar31._0_6_ = auVar10._8_6_;
        auVar11._4_2_ = auVar128._2_2_;
        auVar11._0_4_ = auVar128._0_4_;
        auVar11._6_8_ = SUB148(auVar31 << 0x40,6);
        iVar46 = uVar37 * 2;
        auVar76._4_4_ = uVar81;
        auVar76._0_4_ = uVar81;
        auVar76._8_4_ = uVar81;
        auVar76._12_4_ = uVar81;
        iVar56 = (uVar38 + 1) * 0x10000000 + uVar37 * 0x8000 + iVar47;
        auVar99._0_4_ = __LC25 + iVar47;
        auVar99._4_4_ = _UNK_00116674 + iVar47;
        auVar99._8_4_ = _UNK_00116678 + iVar47;
        auVar99._12_4_ = _UNK_0011667c + iVar47;
        auVar89._0_4_ = iVar47 + __LC26;
        auVar89._4_4_ = iVar47 + _UNK_00116684;
        auVar89._8_4_ = iVar47 + _UNK_00116688;
        auVar89._12_4_ = iVar47 + _UNK_0011668c;
        fVar83 = (float)auVar128._8_2_ * fStack_4a8 + fStack_478;
        fVar92 = (float)auVar128._10_2_ * fStack_4a4 + fStack_474;
        fVar94 = (float)auVar128._12_2_ * fStack_4a0 + fStack_470;
        fVar108 = (float)auVar128._14_2_ * fStack_49c + fStack_46c;
        fVar133 = (float)(auVar128._0_4_ & 0xffff) * fStack_4a8 + fStack_478;
        fVar135 = (float)auVar11._4_4_ * fStack_4a4 + fStack_474;
        fVar137 = (float)auVar10._8_4_ * fStack_4a0 + fStack_470;
        fVar138 = (float)(auVar9._10_4_ >> 0x10) * fStack_49c + fStack_46c;
        uVar50 = (uint)((auVar89._8_8_ & 0xffffffff) * (ulong)uVar81);
        uVar38 = (uint)((auVar89._8_8_ >> 0x20) * (ulong)uVar81);
        uVar36 = -(uint)(iStack_4c8 < (int)(auVar89._0_4_ * uVar81 - __LC27));
        uVar37 = -(uint)(iStack_4c4 < (int)(auVar89._4_4_ * uVar81 - _UNK_00116694));
        uVar64 = -(uint)(iStack_4c0 < (int)(uVar50 - _UNK_00116698));
        uVar44 = -(uint)(iStack_4bc < (int)(uVar38 - _UNK_0011669c));
        fVar117 = (float)(int)(auVar99._0_4_ * uVar81) * fStack_498 + fStack_468;
        fVar119 = (float)(int)(auVar99._4_4_ * uVar81) * fStack_494 + fStack_464;
        fVar120 = (float)(int)((auVar99._8_8_ & 0xffffffff) * (ulong)uVar81) * fStack_490 +
                  fStack_460;
        fVar121 = (float)(int)((auVar99._8_8_ >> 0x20) * (ulong)uVar81) * fStack_48c + fStack_45c;
        auVar124._0_4_ = __LC28 + iVar46;
        auVar124._4_4_ = _UNK_001166a4 + iVar46;
        auVar124._8_4_ = _UNK_001166a8 + iVar46;
        auVar124._12_4_ = _UNK_001166ac + iVar46;
        auVar90._0_4_ = iVar46 + __LC29;
        auVar90._4_4_ = iVar46 + _UNK_001166b4;
        auVar90._8_4_ = iVar46 + _UNK_001166b8;
        auVar90._12_4_ = iVar46 + _UNK_001166bc;
        fVar80 = (float)(int)(~uVar36 & auVar89._0_4_ * uVar81 | local_428 & uVar36) * fStack_498 +
                 fStack_468;
        fVar132 = (float)(int)(~uVar37 & auVar89._4_4_ * uVar81 | uStack_424 & uVar37) * fStack_494
                  + fStack_464;
        fVar134 = (float)(int)(~uVar64 & uVar50 | uStack_420 & uVar64) * fStack_490 + fStack_460;
        fVar136 = (float)(int)(~uVar44 & uVar38 | uStack_41c & uVar44) * fStack_48c + fStack_45c;
        uVar38 = (uint)((auVar76._8_8_ & 0xffffffff) * (ulong)auVar90._8_4_);
        uVar50 = (uint)((auVar76._8_8_ >> 0x20) * (auVar90._8_8_ >> 0x20));
        uVar36 = -(uint)(iStack_4c8 < (int)(uVar81 * auVar90._0_4_ - __LC27));
        uVar37 = -(uint)(iStack_4c4 < (int)(uVar81 * auVar90._4_4_ - _UNK_00116694));
        uVar64 = -(uint)(iStack_4c0 < (int)(uVar38 - _UNK_00116698));
        uVar44 = -(uint)(iStack_4bc < (int)(uVar50 - _UNK_0011669c));
        fVar109 = (float)(int)(auVar124._0_4_ * uVar81) * fStack_4b8 + fStack_488;
        fVar114 = (float)(int)(auVar124._4_4_ * uVar81) * fStack_4b4 + fStack_484;
        fVar115 = (float)(int)((auVar124._8_8_ & 0xffffffff) * (ulong)uVar81) * fStack_4b0 +
                  fStack_480;
        fVar116 = (float)(int)((auVar124._8_8_ >> 0x20) * (ulong)uVar81) * fStack_4ac + fStack_47c;
        fVar69 = *(float *)(local_3e0 + 0x10);
        fVar71 = *(float *)(local_3e0 + 0x14);
        fVar66 = *(float *)(local_3e0 + 0x18);
        auStack_3d8._0_4_ = iVar56 + __LC30;
        auStack_3d8._4_4_ = iVar56 + _UNK_001166c4;
        auStack_3d8._8_4_ = iVar56 + _UNK_001166c8;
        auStack_3d8._12_4_ = iVar56 + _UNK_001166cc;
        iStack_3a8 = *(int *)(local_3e0 + 0x40);
        fStack_3b8 = *(float *)(local_3e0 + 0x44);
        iStack_3c8 = *(int *)(local_3e0 + 0x48);
        fVar84 = (float)(int)(~uVar36 & uVar81 * auVar90._0_4_ | local_428 & uVar36) * fStack_4b8 +
                 fStack_488;
        fVar93 = (float)(int)(~uVar37 & uVar81 * auVar90._4_4_ | uStack_424 & uVar37) * fStack_4b4 +
                 fStack_484;
        fVar95 = (float)(int)(~uVar64 & uVar38 | uStack_420 & uVar64) * fStack_4b0 + fStack_480;
        fVar82 = (float)(int)(~uVar44 & uVar50 | uStack_41c & uVar44) * fStack_4ac + fStack_47c;
        fVar79 = *(float *)(local_3e0 + 0x30);
        fStack_37c = *(float *)(local_3e0 + 0x34);
        fStack_38c = *(float *)(local_3e0 + 0x38);
        auVar154._0_8_ = CONCAT44((fVar135 - fVar71) * fStack_37c,(fVar133 - fVar71) * fStack_37c);
        auVar154._8_4_ = (fVar137 - fVar71) * fStack_37c;
        auVar154._12_4_ = (fVar138 - fVar71) * fStack_37c;
        auVar147._0_8_ = CONCAT44((fVar119 - fVar69) * fVar79,(fVar117 - fVar69) * fVar79);
        auVar147._8_4_ = (fVar120 - fVar69) * fVar79;
        auVar147._12_4_ = (fVar121 - fVar69) * fVar79;
        auStack_3f8._8_4_ = auVar154._8_4_;
        auStack_3f8._0_8_ = auVar154._0_8_;
        auStack_3f8._12_4_ = auVar154._12_4_;
        auStack_378._4_4_ = (fVar114 - fVar66) * fStack_38c;
        auStack_378._0_4_ = (fVar109 - fVar66) * fStack_38c;
        fStack_370 = (fVar115 - fVar66) * fStack_38c;
        fStack_36c = (fVar116 - fVar66) * fStack_38c;
        auStack_418._0_4_ = (fVar80 - fVar69) * fVar79;
        auStack_418._4_4_ = (fVar132 - fVar69) * fVar79;
        auStack_418._8_4_ = (fVar134 - fVar69) * fVar79;
        auStack_418._12_4_ = (fVar136 - fVar69) * fVar79;
        fStack_388 = (fVar83 - fVar71) * fStack_37c;
        fStack_384 = (fVar92 - fVar71) * fStack_37c;
        fStack_380 = (fVar94 - fVar71) * fStack_37c;
        fStack_37c = (fVar108 - fVar71) * fStack_37c;
        fStack_398 = (fVar84 - fVar66) * fStack_38c;
        fStack_394 = (fVar93 - fVar66) * fStack_38c;
        fStack_390 = (fVar95 - fVar66) * fStack_38c;
        fStack_38c = (fVar82 - fVar66) * fStack_38c;
        auVar144._8_4_ = auVar147._8_4_;
        auVar144._0_8_ = auVar147._0_8_;
        auVar144._12_4_ = auVar147._12_4_;
        auVar128 = minps(auVar144,auStack_418);
        auVar29._4_4_ = fStack_384;
        auVar29._0_4_ = fStack_388;
        auVar29._8_4_ = fStack_380;
        auVar29._12_4_ = fStack_37c;
        auVar106 = minps(auVar154,auVar29);
        auVar140 = maxps(auVar147,auStack_418);
        uVar36 = iStack_3a8 >> 0x1f;
        lVar40 = (long)local_250;
        lVar68 = lVar40 * 4;
        pVVar62 = local_3e0 + lVar68 + 0x68;
        uStack_448 = _LC19 & uVar36 | ~uVar36 & auVar128._0_4_;
        uStack_444 = _UNK_00116644 & uVar36 | ~uVar36 & auVar128._4_4_;
        uStack_440 = _UNK_00116648 & uVar36 | ~uVar36 & auVar128._8_4_;
        uStack_43c = _UNK_0011664c & uVar36 | ~uVar36 & auVar128._12_4_;
        uVar38 = (int)fStack_3b8 >> 0x1f;
        uStack_458 = _LC19 & uVar38 | ~uVar38 & auVar106._0_4_;
        uStack_454 = _UNK_00116644 & uVar38 | ~uVar38 & auVar106._4_4_;
        uStack_450 = _UNK_00116648 & uVar38 | ~uVar38 & auVar106._8_4_;
        uStack_44c = _UNK_0011664c & uVar38 | ~uVar38 & auVar106._12_4_;
        auVar25._4_4_ = fStack_394;
        auVar25._0_4_ = fStack_398;
        auVar25._8_4_ = fStack_390;
        auVar25._12_4_ = fStack_38c;
        auVar128 = minps(_auStack_378,auVar25);
        uVar37 = iStack_3c8 >> 0x1f;
        auVar155._0_4_ = ~uVar37 & auVar128._0_4_;
        auVar155._4_4_ = ~uVar37 & auVar128._4_4_;
        auVar155._8_4_ = ~uVar37 & auVar128._8_4_;
        auVar155._12_4_ = ~uVar37 & auVar128._12_4_;
        auVar163._0_4_ = _LC19 & uVar37;
        auVar163._4_4_ = _UNK_00116644 & uVar37;
        auVar163._8_4_ = _UNK_00116648 & uVar37;
        auVar163._12_4_ = _UNK_0011664c & uVar37;
        auVar125._0_4_ = uVar36 & _LC13;
        auVar125._4_4_ = uVar36 & _UNK_00116654;
        auVar125._8_4_ = uVar36 & _UNK_00116658;
        auVar125._12_4_ = uVar36 & _UNK_0011665c;
        auVar156._0_4_ = ~uVar36 & auVar140._0_4_;
        auVar156._4_4_ = ~uVar36 & auVar140._4_4_;
        auVar156._8_4_ = ~uVar36 & auVar140._8_4_;
        auVar156._12_4_ = ~uVar36 & auVar140._12_4_;
        auVar30._4_4_ = fStack_384;
        auVar30._0_4_ = fStack_388;
        auVar30._8_4_ = fStack_380;
        auVar30._12_4_ = fStack_37c;
        auVar128 = maxps(auStack_3f8,auVar30);
        auVar145._0_4_ = uVar38 & _LC13;
        auVar145._4_4_ = uVar38 & _UNK_00116654;
        auVar145._8_4_ = uVar38 & _UNK_00116658;
        auVar145._12_4_ = uVar38 & _UNK_0011665c;
        auVar157._0_4_ = ~uVar38 & auVar128._0_4_;
        auVar157._4_4_ = ~uVar38 & auVar128._4_4_;
        auVar157._8_4_ = ~uVar38 & auVar128._8_4_;
        auVar157._12_4_ = ~uVar38 & auVar128._12_4_;
        auVar26._4_4_ = fStack_394;
        auVar26._0_4_ = fStack_398;
        auVar26._8_4_ = fStack_390;
        auVar26._12_4_ = fStack_38c;
        auVar140 = maxps(_auStack_378,auVar26);
        auVar141._0_4_ = uVar37 & _LC13;
        auVar141._4_4_ = uVar37 & _UNK_00116654;
        auVar141._8_4_ = uVar37 & _UNK_00116658;
        auVar141._12_4_ = uVar37 & _UNK_0011665c;
        auVar128 = minps(auVar125 | auVar156,auVar145 | auVar157);
        auVar158._0_4_ = ~uVar37 & auVar140._0_4_;
        auVar158._4_4_ = ~uVar37 & auVar140._4_4_;
        auVar158._8_4_ = ~uVar37 & auVar140._8_4_;
        auVar158._12_4_ = ~uVar37 & auVar140._12_4_;
        auVar16._4_4_ = uStack_444;
        auVar16._0_4_ = uStack_448;
        auVar16._8_4_ = uStack_440;
        auVar16._12_4_ = uStack_43c;
        auVar106._4_4_ = uStack_454;
        auVar106._0_4_ = uStack_458;
        auVar106._8_4_ = uStack_450;
        auVar106._12_4_ = uStack_44c;
        auVar140 = maxps(auVar16,auVar106);
        auVar107._4_4_ = -(uint)(fVar92 < fVar71);
        auVar107._0_4_ = -(uint)(fVar83 < fVar71);
        auVar107._8_4_ = -(uint)(fVar94 < fVar71);
        auVar107._12_4_ = -(uint)(fVar108 < fVar71);
        auVar131._4_4_ = -(uint)(fVar71 < fVar135);
        auVar131._0_4_ = -(uint)(fVar71 < fVar133);
        auVar131._8_4_ = -(uint)(fVar71 < fVar137);
        auVar131._12_4_ = -(uint)(fVar71 < fVar138);
        auVar128 = minps(auVar128,auVar141 | auVar158);
        auVar140 = maxps(auVar140,auVar163 | auVar155);
        auVar159._4_4_ = -(uint)(fVar92 < fVar135);
        auVar159._0_4_ = -(uint)(fVar83 < fVar133);
        auVar159._8_4_ = -(uint)(fVar94 < fVar137);
        auVar159._12_4_ = -(uint)(fVar108 < fVar138);
        auVar103._4_4_ = -(uint)(fVar93 < fVar66);
        auVar103._0_4_ = -(uint)(fVar84 < fVar66);
        auVar103._8_4_ = -(uint)(fVar95 < fVar66);
        auVar103._12_4_ = -(uint)(fVar82 < fVar66);
        auVar126._4_4_ = -(uint)(auVar128._4_4_ < 0.0);
        auVar126._0_4_ = -(uint)(auVar128._0_4_ < 0.0);
        auVar126._8_4_ = -(uint)(auVar128._8_4_ < 0.0);
        auVar126._12_4_ = -(uint)(auVar128._12_4_ < 0.0);
        auVar100._4_4_ = -(uint)(fVar132 < fVar69);
        auVar100._0_4_ = -(uint)(fVar80 < fVar69);
        auVar100._8_4_ = -(uint)(fVar134 < fVar69);
        auVar100._12_4_ = -(uint)(fVar136 < fVar69);
        auVar77._4_4_ = -(uint)(fVar69 < fVar119);
        auVar77._0_4_ = -(uint)(fVar69 < fVar117);
        auVar77._8_4_ = -(uint)(fVar69 < fVar120);
        auVar77._12_4_ = -(uint)(fVar69 < fVar121);
        auVar146._4_4_ = -(uint)(auVar128._4_4_ < auVar140._4_4_);
        auVar146._0_4_ = -(uint)(auVar128._0_4_ < auVar140._0_4_);
        auVar146._8_4_ = -(uint)(auVar128._8_4_ < auVar140._8_4_);
        auVar146._12_4_ = -(uint)(auVar128._12_4_ < auVar140._12_4_);
        auVar142._4_4_ = -(uint)(fVar132 < fVar119);
        auVar142._0_4_ = -(uint)(fVar80 < fVar117);
        auVar142._8_4_ = -(uint)(fVar134 < fVar120);
        auVar142._12_4_ = -(uint)(fVar136 < fVar121);
        auVar20._4_4_ = fStack_3b8;
        auVar20._0_4_ = fStack_3b8;
        auVar20._8_4_ = fStack_3b8;
        auVar20._12_4_ = fStack_3b8;
        auVar91._4_4_ = -(uint)(fVar66 < fVar114);
        auVar91._0_4_ = -(uint)(fVar66 < fVar109);
        auVar91._8_4_ = -(uint)(fVar66 < fVar115);
        auVar91._12_4_ = -(uint)(fVar66 < fVar116);
        auVar164._4_4_ = -(uint)(fVar93 < fVar114);
        auVar164._0_4_ = -(uint)(fVar84 < fVar109);
        auVar164._8_4_ = -(uint)(fVar95 < fVar115);
        auVar164._12_4_ = -(uint)(fVar82 < fVar116);
        auVar22._4_4_ = iStack_3a8;
        auVar22._0_4_ = iStack_3a8;
        auVar22._8_4_ = iStack_3a8;
        auVar22._12_4_ = iStack_3a8;
        auVar18._4_4_ = iStack_3c8;
        auVar18._0_4_ = iStack_3c8;
        auVar18._8_4_ = iStack_3c8;
        auVar18._12_4_ = iStack_3c8;
        auVar128 = (auVar77 | auVar100) & auVar22 | (auVar131 | auVar107) & auVar20 |
                   auVar142 | auVar159 | auVar146 | auVar126 |
                   (auVar91 | auVar103) & auVar18 | auVar164;
        uVar36 = auVar128._0_4_ >> 0x1f;
        uVar37 = auVar128._4_4_ >> 0x1f;
        uVar38 = auVar128._8_4_ >> 0x1f;
        uVar64 = auVar128._12_4_ >> 0x1f;
        fVar69 = (float)(uVar36 & _LC13 | ~uVar36 & (uint)auVar140._0_4_);
        fVar71 = (float)(uVar37 & _UNK_00116654 | ~uVar37 & (uint)auVar140._4_4_);
        fVar66 = (float)(uVar38 & _UNK_00116658 | ~uVar38 & (uint)auVar140._8_4_);
        fVar79 = (float)(uVar64 & _UNK_0011665c | ~uVar64 & (uint)auVar140._12_4_);
        uVar36 = (int)-(uint)(fVar69 < fVar66) >> 0x1f;
        uVar37 = (int)-(uint)(fVar71 < fVar79) >> 0x1f;
        fVar80 = (float)((uint)fVar66 & uVar36 | ~uVar36 & (uint)fVar69);
        fVar132 = (float)((uint)fVar79 & uVar37 | ~uVar37 & (uint)fVar71);
        fVar66 = (float)((uint)fVar69 & uVar36 | ~uVar36 & (uint)fVar66);
        fVar79 = (float)((uint)fVar71 & uVar37 | ~uVar37 & (uint)fVar79);
        uVar81 = uVar36 & auStack_3d8._8_4_ | ~uVar36 & auStack_3d8._0_4_;
        uVar44 = uVar37 & auStack_3d8._12_4_ | ~uVar37 & auStack_3d8._4_4_;
        uVar67 = uVar36 & auStack_3d8._0_4_ | ~uVar36 & auStack_3d8._8_4_;
        uVar55 = uVar37 & auStack_3d8._4_4_ | ~uVar37 & auStack_3d8._12_4_;
        uVar36 = (int)-(uint)(fVar80 < fVar132) >> 0x1f;
        uVar38 = (int)-(uint)(fVar66 < fVar79) >> 0x1f;
        fVar69 = (float)((uint)fVar80 & uVar36 | ~uVar36 & (uint)fVar132);
        fVar71 = (float)((uint)fVar79 & uVar38 | ~uVar38 & (uint)fVar66);
        uVar37 = uVar36 & uVar81 | ~uVar36 & uVar44;
        uVar64 = uVar38 & uVar55 | ~uVar38 & uVar67;
        uVar50 = (int)-(uint)(fVar69 < fVar71) >> 0x1f;
        auVar113._4_4_ = ~uVar50 & (uint)fVar69;
        auVar113._0_4_ = (uint)fVar132 & uVar36 | ~uVar36 & (uint)fVar80;
        auVar113._8_4_ = ~uVar50 & (uint)fVar71;
        auVar113._12_4_ = (uint)fVar66 & uVar38 | ~uVar38 & (uint)fVar79;
        auVar140._4_4_ = (uint)fVar69 & uVar50;
        auVar140._0_4_ = (uint)fVar71 & uVar50;
        auVar140._8_8_ = 0;
        _auStack_378 = auVar140 << 0x20 | auVar113;
        auStack_318._4_4_ = ~uVar50 & uVar37;
        auStack_318._0_4_ = uVar36 & uVar44 | ~uVar36 & uVar81;
        auStack_318._8_4_ = ~uVar50 & uVar64;
        auStack_318._12_4_ = uVar38 & uVar67 | ~uVar38 & uVar55;
        auVar128._4_4_ = uVar50 & uVar37;
        auVar128._0_4_ = uVar50 & uVar64;
        auVar128._8_8_ = 0;
        auStack_318 = auVar128 << 0x20 | auStack_318;
        auVar78._4_4_ = -(uint)(SUB164(_auStack_378,4) < fVar160);
        auVar78._0_4_ = -(uint)(SUB164(_auStack_378,0) < fVar160);
        auVar78._8_4_ = -(uint)(SUB164(_auStack_378,8) < fVar160);
        auVar78._12_4_ = -(uint)(SUB164(_auStack_378,0xc) < fVar160);
        iVar47 = movmskps((int)local_3e0,auVar78);
        *(undefined8 *)(puVar53 + lVar7 + -8) = 0x102d10;
        iStack_3c4 = iStack_3c8;
        iStack_3c0 = iStack_3c8;
        iStack_3bc = iStack_3c8;
        fStack_3b4 = fStack_3b8;
        fStack_3b0 = fStack_3b8;
        fStack_3ac = fStack_3b8;
        iStack_3a4 = iStack_3a8;
        iStack_3a0 = iStack_3a8;
        iStack_39c = iStack_3a8;
        uVar36 = __popcountdi2();
        _auStack_298 = _auStack_378;
        if (iVar47 == 0) {
          _auStack_298 = (undefined1  [16])0x0;
          auVar128 = (undefined1  [16])0x0;
        }
        else {
          _auStack_2d8 = (undefined1  [16])0x0;
          puVar60 = (undefined8 *)auStack_298;
          uVar48 = (ulong)uVar36 << 2;
          puVar59 = (undefined8 *)auStack_2d8;
          lVar42 = (4 - (long)(int)uVar36) * 4;
          puVar58 = (undefined8 *)((long)puVar60 + lVar42);
          if (7 < (uint)uVar48) {
            for (uVar45 = uVar48 >> 3 & 0x1fffffff; uVar45 != 0; uVar45 = uVar45 - 1) {
              *puVar59 = *puVar58;
              puVar58 = puVar58 + (ulong)bVar70 * -2 + 1;
              puVar59 = puVar59 + (ulong)bVar70 * -2 + 1;
            }
          }
          if ((uVar48 & 4) != 0) {
            *(undefined4 *)puVar59 = *(undefined4 *)puVar58;
          }
          puVar59 = (undefined8 *)(auStack_318 + lVar42);
          _auStack_298 = (undefined1  [16])0x0;
          if (7 < (uint)uVar48) {
            for (uVar45 = uVar48 >> 3 & 0x1fffffff; uVar45 != 0; uVar45 = uVar45 - 1) {
              *puVar60 = *puVar59;
              puVar59 = puVar59 + (ulong)bVar70 * -2 + 1;
              puVar60 = puVar60 + (ulong)bVar70 * -2 + 1;
            }
          }
          auVar128 = _auStack_2d8;
          if ((uVar48 & 4) != 0) {
            *(undefined4 *)puVar60 = *(undefined4 *)puVar59;
          }
        }
        auStack_318 = _auStack_298;
        uVar35 = uStack_290;
        *(undefined1 (*) [16])pVVar62 = auVar128;
        *(undefined1 (*) [8])(auStack_24c + lVar40) = auStack_298;
        *(undefined8 *)((long)auStack_244 + lVar68) = uVar35;
        fVar160 = *(float *)(*(long *)local_3e0 + 8);
        local_250 = uVar36 + iStack_3fc;
      }
      else {
        lVar68 = *(long *)(local_258 + 0x60);
        uStack_434 = uVar36 & 1;
        uStack_430 = uVar37 * 2 & 2;
        HVar1 = local_258[0x55];
        uVar50 = local_360 * uVar64;
        uVar38 = local_360 * uVar37;
        uVar36 = local_360 + uVar50;
        auStack_418._0_4_ = uVar50;
        auStack_378._0_4_ = local_360 + uVar38;
        iVar47 = (uVar37 >> 1) * local_408 + local_42c;
        fVar71 = (float)(byte)HVar1;
        lVar40 = (ulong)((uVar64 >> 1) + iVar47) * 0x10 + lVar68;
        uVar3 = *(ushort *)(lVar40 + 8 + (ulong)(uStack_430 | uStack_434) * 2);
        uVar44 = (uint)*(ushort *)(lVar40 + (ulong)(uStack_430 | uStack_434) * 2);
        uVar81 = (uint)(byte)HVar1;
        if (uVar38 < (uint)auStack_378._0_4_) {
          lVar40 = (ulong)(local_360 - 1) + 1;
          uVar48 = uStack_3e8;
          pauVar63 = pauStack_368;
          uVar67 = uVar38;
          do {
            uVar45 = uVar48;
            if (uVar50 < uVar36) {
              HVar2 = local_258[0x54];
              lVar42 = *(long *)(local_258 + 0x68);
              auVar128 = *(undefined1 (*) [16])(local_258 + 0x30);
              iVar46 = (int)uVar48;
              auVar140 = *(undefined1 (*) [16])(local_258 + 0x20);
              uVar45 = uVar48 + lVar40;
              uVar55 = (*(int *)(local_258 + 0x40) * uVar67 + uVar50) * (uint)(byte)HVar2;
              pauVar49 = pauVar63;
              do {
                iVar56 = (int)uVar48;
                uVar39 = (int)(uint)*(ushort *)(lVar42 + (ulong)(uVar55 >> 3)) >> ((byte)uVar55 & 7)
                         & uVar81;
                *(bool *)uVar48 = HVar1 == SUB41(uVar39,0);
                uVar48 = uVar48 + 1;
                uVar55 = uVar55 + (byte)HVar2;
                auVar85._0_4_ =
                     (float)((uVar50 - iVar46) + iVar56) * auVar128._0_4_ + auVar140._0_4_;
                auVar85._4_4_ =
                     (((float)uVar39 + fVar69) * ((float)(int)(uVar3 - uVar44) / fVar71) +
                     (float)uVar44) * auVar128._4_4_ + auVar140._4_4_;
                auVar85._8_4_ = (float)uVar67 * auVar128._8_4_ + auVar140._8_4_;
                auVar85._12_4_ = (float)uVar67 * auVar128._12_4_ + auVar140._12_4_;
                *pauVar49 = auVar85;
                pauVar49 = pauVar49 + 1;
              } while (uVar48 != uVar45);
              pauVar63 = pauVar63 + lVar40;
            }
            pauVar63 = pauVar63 + 1;
            uVar48 = uVar45 + 1;
            uVar67 = uVar67 + 1;
          } while (auStack_378._0_4_ != uVar67);
        }
        fVar69 = _LC2;
        iStack_2e0 = 1;
        if (uVar64 < local_404) {
          pauVar63 = pauStack_368 + local_360;
          lVar40 = uStack_3e8 + local_360;
          uVar48 = (ulong)(uVar64 + 1 & 1 | uStack_430);
          lVar42 = (ulong)((uVar64 + 1 >> 1) + iVar47) * 0x10 + lVar68;
          uVar3 = *(ushort *)(lVar42 + 8 + uVar48 * 2);
          uVar44 = (uint)*(ushort *)(lVar42 + uVar48 * 2);
          if (uVar38 < (uint)auStack_378._0_4_) {
            iVar47 = *(int *)(local_258 + 0x40);
            HVar2 = local_258[0x54];
            lVar42 = *(long *)(local_258 + 0x68);
            fVar66 = *(float *)(local_258 + 0x30);
            fVar79 = *(float *)(local_258 + 0x34);
            fVar80 = *(float *)(local_258 + 0x38);
            fVar132 = *(float *)(local_258 + 0x3c);
            fVar134 = *(float *)(local_258 + 0x20);
            fVar136 = *(float *)(local_258 + 0x24);
            fVar84 = *(float *)(local_258 + 0x28);
            fVar93 = *(float *)(local_258 + 0x2c);
            uVar55 = (iVar47 * uVar38 + uVar36) * (uint)(byte)HVar2;
            uVar67 = uVar38;
            do {
              uVar48 = (ulong)uVar67;
              uVar39 = (int)(uint)*(ushort *)(lVar42 + (ulong)(uVar55 >> 3)) >> ((byte)uVar55 & 7) &
                       uVar81;
              *(bool *)lVar40 = HVar1 == SUB41(uVar39,0);
              lVar40 = lVar40 + (ulong)local_35c;
              uVar67 = uVar67 + 1;
              uVar55 = uVar55 + iVar47 * (uint)(byte)HVar2;
              *(float *)*pauVar63 = (float)uVar36 * fVar66 + fVar134;
              *(float *)(*pauVar63 + 4) =
                   (((float)uVar39 + fVar69) * ((float)(int)(uVar3 - uVar44) / fVar71) +
                   (float)uVar44) * fVar79 + fVar136;
              *(float *)(*pauVar63 + 8) = (float)uVar48 * fVar80 + fVar84;
              *(float *)(*pauVar63 + 0xc) = (float)uVar48 * fVar132 + fVar93;
              pauVar63 = pauVar63 + local_35c;
            } while (auStack_378._0_4_ != uVar67);
          }
          iStack_2e0 = 0;
        }
        fVar69 = _LC2;
        if (uVar37 < local_404) {
          pauVar63 = pauStack_368 + uStack_438;
          lVar40 = uStack_3e8 + uStack_438;
          uVar44 = (uVar37 + 1) * 2 & 2;
          uVar48 = (ulong)(uStack_434 | uVar44);
          iVar47 = (uVar37 + 1 >> 1) * local_408 + local_42c;
          lVar42 = (ulong)(iVar47 + (uVar64 >> 1)) * 0x10 + lVar68;
          uVar3 = *(ushort *)(lVar42 + 8 + uVar48 * 2);
          uVar37 = (uint)*(ushort *)(lVar42 + uVar48 * 2);
          if (uVar50 < uVar36) {
            HVar2 = local_258[0x54];
            lVar5 = *(long *)(local_258 + 0x68);
            fVar66 = *(float *)(local_258 + 0x30);
            fVar79 = *(float *)(local_258 + 0x34);
            fVar80 = *(float *)(local_258 + 0x38);
            fVar132 = *(float *)(local_258 + 0x3c);
            fVar134 = *(float *)(local_258 + 0x20);
            fVar136 = *(float *)(local_258 + 0x24);
            fVar84 = *(float *)(local_258 + 0x28);
            fVar93 = *(float *)(local_258 + 0x2c);
            iVar46 = (int)lVar40;
            uVar67 = (auStack_378._0_4_ * *(int *)(local_258 + 0x40) + uVar50) * (uint)(byte)HVar2;
            lVar43 = (ulong)(local_360 - 1) + 1;
            lVar42 = lVar40 + lVar43;
            pauVar49 = pauVar63;
            do {
              uVar55 = (int)(uint)*(ushort *)(lVar5 + (ulong)(uVar67 >> 3)) >> ((byte)uVar67 & 7) &
                       uVar81;
              *(bool *)lVar40 = HVar1 == SUB41(uVar55,0);
              iVar56 = (int)lVar40;
              lVar40 = lVar40 + 1;
              uVar67 = uVar67 + (byte)HVar2;
              *(float *)*pauVar49 = (float)((uVar50 - iVar46) + iVar56) * fVar66 + fVar134;
              *(float *)(*pauVar49 + 4) =
                   (((float)uVar55 + fVar69) * ((float)(int)(uVar3 - uVar37) / fVar71) +
                   (float)uVar37) * fVar79 + fVar136;
              *(float *)(*pauVar49 + 8) = (float)(uint)auStack_378._0_4_ * fVar80 + fVar84;
              *(float *)(*pauVar49 + 0xc) = (float)(uint)auStack_378._0_4_ * fVar132 + fVar93;
              pauVar49 = pauVar49 + 1;
            } while (lVar40 != lVar42);
            pauVar63 = pauVar63 + lVar43;
            lVar40 = lVar42;
          }
          fVar69 = _LC2;
          if (uVar64 < local_404) {
            uVar48 = (ulong)(uVar64 + 1 & 1 | uVar44);
            lVar68 = lVar68 + (ulong)((uVar64 + 1 >> 1) + iVar47) * 0x10;
            uVar3 = *(ushort *)(lVar68 + 8 + uVar48 * 2);
            uVar64 = (uint)*(ushort *)(lVar68 + uVar48 * 2);
            uVar37 = (*(int *)(local_258 + 0x40) * auStack_378._0_4_ + uVar36) *
                     (uint)(byte)local_258[0x54];
            uVar81 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar37 >> 3)) >>
                     ((byte)uVar37 & 7) & uVar81;
            *(bool *)lVar40 = HVar1 == SUB41(uVar81,0);
            fVar66 = *(float *)(local_258 + 0x34);
            fVar79 = *(float *)(local_258 + 0x38);
            fVar80 = *(float *)(local_258 + 0x3c);
            fVar132 = *(float *)(local_258 + 0x24);
            fVar134 = *(float *)(local_258 + 0x28);
            fVar136 = *(float *)(local_258 + 0x2c);
            *(float *)*pauVar63 =
                 (float)uVar36 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
            *(float *)(*pauVar63 + 4) =
                 (((float)uVar81 + fVar69) * ((float)(int)(uVar3 - uVar64) / fVar71) + (float)uVar64
                 ) * fVar66 + fVar132;
            *(float *)(*pauVar63 + 8) = (float)(uint)auStack_378._0_4_ * fVar79 + fVar134;
            *(float *)(*pauVar63 + 0xc) = (float)(uint)auStack_378._0_4_ * fVar80 + fVar136;
          }
        }
        else {
          auStack_378._0_4_ = auStack_378._0_4_ - 1;
        }
        lVar68 = 0;
        uStack_2e4 = local_360 >> 1;
        auStack_304 = SUB1612((undefined1  [16])0x0,4);
        uStack_308 = uStack_2e4;
        iStack_2dc = auStack_378._0_4_ - (uVar38 + uStack_2e4);
        auVar32._4_4_ = uStack_2e4;
        auVar32._0_4_ = uStack_2e4;
        iStack_2e0 = (local_360 - uStack_2e4) - iStack_2e0;
        auVar32._8_8_ = 0;
        auStack_318 = auVar32 << 0x40;
        uStack_2f8 = 0;
        auStack_304._4_4_ = iStack_2e0;
        auStack_304._8_4_ = uStack_2e4;
        piVar57 = (int *)auStack_318;
        uStack_2f4 = CONCAT44(uStack_2e4,uStack_2e4);
        uStack_2ec = CONCAT44(uStack_2e4,iStack_2dc);
        do {
          uVar48 = (ulong)(local_35c * piVar57[1] + *piVar57);
          uVar36 = piVar57[2];
          pauVar63 = pauStack_368 + uVar48;
          pcVar41 = (char *)(uVar48 + uStack_3e8);
          if (piVar57[3] == -1) {
            auVar72._8_4_ = _LC15;
            auVar72._0_8_ = CONCAT44(_LC15,_LC15);
            auVar72._12_4_ = _LC15;
            auVar86._8_4_ = _LC17;
            auVar86._0_8_ = CONCAT44(_LC17,_LC17);
            auVar86._12_4_ = _LC17;
          }
          else {
            auVar72._8_4_ = _LC15;
            auVar72._0_8_ = CONCAT44(_LC15,_LC15);
            auVar72._12_4_ = _LC15;
            auVar86._8_4_ = _LC17;
            auVar86._0_8_ = CONCAT44(_LC17,_LC17);
            auVar86._12_4_ = _LC17;
            iVar47 = 0;
            while( true ) {
              pcVar34 = pcVar41 + (ulong)uVar36 + 1;
              pauVar49 = pauVar63;
              if (uVar36 != 0xffffffff) {
                do {
                  if (*pcVar41 == '\0') {
                    auVar86 = minps(auVar86,*pauVar49);
                    auVar72 = maxps(auVar72,*pauVar49);
                  }
                  pcVar41 = pcVar41 + 1;
                  pauVar49 = pauVar49 + 1;
                } while (pcVar41 != pcVar34);
                pauVar63 = pauVar63 + (ulong)uVar36 + 1;
                pcVar41 = pcVar34;
              }
              if (piVar57[3] == iVar47) break;
              iVar47 = iVar47 + 1;
              pcVar41 = pcVar41 + (local_360 - uVar36);
              pauVar63 = pauVar63 + (local_360 - uVar36);
            }
          }
          *(undefined1 (*) [16])(auStack_2d8 + lVar68) = auVar86;
          piVar57 = piVar57 + 4;
          *(undefined1 (*) [16])(auStack_298 + lVar68) = auVar72;
          lVar68 = lVar68 + 0x10;
        } while (lVar68 != 0x40);
        iStack_3a8 = *(int *)(local_3e0 + 0x40);
        fStack_3b8 = *(float *)(local_3e0 + 0x44);
        iStack_3c8 = *(int *)(local_3e0 + 0x48);
        fVar69 = *(float *)(local_3e0 + 0x10);
        fVar71 = *(float *)(local_3e0 + 0x14);
        fVar66 = *(float *)(local_3e0 + 0x18);
        fVar95 = (float)uStack_2c8;
        fVar82 = (float)((ulong)uStack_2c8 >> 0x20);
        fVar80 = (float)uStack_2a8;
        fVar134 = (float)((ulong)uStack_2a8 >> 0x20);
        fVar79 = *(float *)(local_3e0 + 0x30);
        fStack_37c = *(float *)(local_3e0 + 0x34);
        fStack_38c = *(float *)(local_3e0 + 0x38);
        auVar148._0_8_ =
             CONCAT44((fVar82 - fVar71) * fStack_37c,
                      ((float)auStack_2d8._4_4_ - fVar71) * fStack_37c);
        auVar148._8_4_ = (fStack_2b4 - fVar71) * fStack_37c;
        auVar148._12_4_ = (fVar134 - fVar71) * fStack_37c;
        fVar84 = (float)uStack_288;
        fVar93 = (float)((ulong)uStack_288 >> 0x20);
        fVar132 = (float)uStack_268;
        fVar136 = (float)((ulong)uStack_268 >> 0x20);
        auStack_3d8._8_4_ = auVar148._8_4_;
        auStack_3d8._0_8_ = auVar148._0_8_;
        auStack_3d8._12_4_ = auVar148._12_4_;
        auVar139._0_8_ =
             CONCAT44((fVar95 - fVar69) * fVar79,((float)auStack_2d8._0_4_ - fVar69) * fVar79);
        auVar139._8_4_ = (fStack_2b8 - fVar69) * fVar79;
        auVar139._12_4_ = (fVar80 - fVar69) * fVar79;
        auStack_378._4_4_ = (fStack_2c0 - fVar66) * fStack_38c;
        auStack_378._0_4_ = (fStack_2d0 - fVar66) * fStack_38c;
        fStack_370 = (fStack_2b0 - fVar66) * fStack_38c;
        fStack_36c = (fStack_2a0 - fVar66) * fStack_38c;
        auStack_3f8._0_4_ = ((float)auStack_298._0_4_ - fVar69) * fVar79;
        auStack_3f8._4_4_ = (fVar84 - fVar69) * fVar79;
        auStack_3f8._8_4_ = (fStack_278 - fVar69) * fVar79;
        auStack_3f8._12_4_ = (fVar132 - fVar69) * fVar79;
        fStack_388 = ((float)auStack_298._4_4_ - fVar71) * fStack_37c;
        fStack_384 = (fVar93 - fVar71) * fStack_37c;
        fStack_380 = (fStack_274 - fVar71) * fStack_37c;
        fStack_37c = (fVar136 - fVar71) * fStack_37c;
        fStack_398 = ((float)uStack_290 - fVar66) * fStack_38c;
        fStack_394 = (fStack_280 - fVar66) * fStack_38c;
        fStack_390 = (fStack_270 - fVar66) * fStack_38c;
        fStack_38c = (fStack_260 - fVar66) * fStack_38c;
        auVar127._8_4_ = auVar139._8_4_;
        auVar127._0_8_ = auVar139._0_8_;
        auVar127._12_4_ = auVar139._12_4_;
        auVar128 = minps(auVar127,auStack_3f8);
        uVar36 = iStack_3a8 >> 0x1f;
        uStack_448 = _LC19 & uVar36 | ~uVar36 & auVar128._0_4_;
        uStack_444 = _UNK_00116644 & uVar36 | ~uVar36 & auVar128._4_4_;
        uStack_440 = _UNK_00116648 & uVar36 | ~uVar36 & auVar128._8_4_;
        uStack_43c = _UNK_0011664c & uVar36 | ~uVar36 & auVar128._12_4_;
        auVar27._4_4_ = fStack_384;
        auVar27._0_4_ = fStack_388;
        auVar27._8_4_ = fStack_380;
        auVar27._12_4_ = fStack_37c;
        auVar128 = minps(auVar148,auVar27);
        auVar140 = maxps(auVar139,auStack_3f8);
        uVar64 = (int)fStack_3b8 >> 0x1f;
        pVVar62 = local_3e0 + (long)iStack_3fc * 4 + 0x68;
        uStack_458 = _LC19 & uVar64 | ~uVar64 & auVar128._0_4_;
        uStack_454 = _UNK_00116644 & uVar64 | ~uVar64 & auVar128._4_4_;
        uStack_450 = _UNK_00116648 & uVar64 | ~uVar64 & auVar128._8_4_;
        uStack_44c = _UNK_0011664c & uVar64 | ~uVar64 & auVar128._12_4_;
        auVar23._4_4_ = fStack_394;
        auVar23._0_4_ = fStack_398;
        auVar23._8_4_ = fStack_390;
        auVar23._12_4_ = fStack_38c;
        auVar128 = minps(_auStack_378,auVar23);
        uVar37 = iStack_3c8 >> 0x1f;
        auVar149._0_4_ = ~uVar37 & auVar128._0_4_;
        auVar149._4_4_ = ~uVar37 & auVar128._4_4_;
        auVar149._8_4_ = ~uVar37 & auVar128._8_4_;
        auVar149._12_4_ = ~uVar37 & auVar128._12_4_;
        auVar161._0_4_ = _LC19 & uVar37;
        auVar161._4_4_ = _UNK_00116644 & uVar37;
        auVar161._8_4_ = _UNK_00116648 & uVar37;
        auVar161._12_4_ = _UNK_0011664c & uVar37;
        auVar96._0_4_ = uVar36 & _LC13;
        auVar96._4_4_ = uVar36 & _UNK_00116654;
        auVar96._8_4_ = uVar36 & _UNK_00116658;
        auVar96._12_4_ = uVar36 & _UNK_0011665c;
        auVar150._0_4_ = ~uVar36 & auVar140._0_4_;
        auVar150._4_4_ = ~uVar36 & auVar140._4_4_;
        auVar150._8_4_ = ~uVar36 & auVar140._8_4_;
        auVar150._12_4_ = ~uVar36 & auVar140._12_4_;
        auVar28._4_4_ = fStack_384;
        auVar28._0_4_ = fStack_388;
        auVar28._8_4_ = fStack_380;
        auVar28._12_4_ = fStack_37c;
        auVar128 = maxps(auStack_3d8,auVar28);
        auVar129._0_4_ = uVar64 & _LC13;
        auVar129._4_4_ = uVar64 & _UNK_00116654;
        auVar129._8_4_ = uVar64 & _UNK_00116658;
        auVar129._12_4_ = uVar64 & _UNK_0011665c;
        auVar151._0_4_ = ~uVar64 & auVar128._0_4_;
        auVar151._4_4_ = ~uVar64 & auVar128._4_4_;
        auVar151._8_4_ = ~uVar64 & auVar128._8_4_;
        auVar151._12_4_ = ~uVar64 & auVar128._12_4_;
        auVar24._4_4_ = fStack_394;
        auVar24._0_4_ = fStack_398;
        auVar24._8_4_ = fStack_390;
        auVar24._12_4_ = fStack_38c;
        auVar140 = maxps(_auStack_378,auVar24);
        auVar122._0_4_ = uVar37 & _LC13;
        auVar122._4_4_ = uVar37 & _UNK_00116654;
        auVar122._8_4_ = uVar37 & _UNK_00116658;
        auVar122._12_4_ = uVar37 & _UNK_0011665c;
        auVar128 = minps(auVar96 | auVar150,auVar129 | auVar151);
        auVar143._4_4_ = -(uint)(fVar84 < fVar69);
        auVar143._0_4_ = -(uint)((float)auStack_298._0_4_ < fVar69);
        auVar143._8_4_ = -(uint)(fStack_278 < fVar69);
        auVar143._12_4_ = -(uint)(fVar132 < fVar69);
        auVar73._4_4_ = -(uint)(fVar69 < fVar95);
        auVar73._0_4_ = -(uint)(fVar69 < (float)auStack_2d8._0_4_);
        auVar73._8_4_ = -(uint)(fVar69 < fStack_2b8);
        auVar73._12_4_ = -(uint)(fVar69 < fVar80);
        auVar152._0_4_ = ~uVar37 & auVar140._0_4_;
        auVar152._4_4_ = ~uVar37 & auVar140._4_4_;
        auVar152._8_4_ = ~uVar37 & auVar140._8_4_;
        auVar152._12_4_ = ~uVar37 & auVar140._12_4_;
        auVar15._4_4_ = uStack_444;
        auVar15._0_4_ = uStack_448;
        auVar15._8_4_ = uStack_440;
        auVar15._12_4_ = uStack_43c;
        auVar14._4_4_ = uStack_454;
        auVar14._0_4_ = uStack_458;
        auVar14._8_4_ = uStack_450;
        auVar14._12_4_ = uStack_44c;
        auVar140 = maxps(auVar15,auVar14);
        auVar130._4_4_ = -(uint)(fVar84 < fVar95);
        auVar130._0_4_ = -(uint)((float)auStack_298._0_4_ < (float)auStack_2d8._0_4_);
        auVar130._8_4_ = -(uint)(fStack_278 < fStack_2b8);
        auVar130._12_4_ = -(uint)(fVar132 < fVar80);
        auVar128 = minps(auVar128,auVar122 | auVar152);
        auVar110._4_4_ = -(uint)(fVar93 < fVar71);
        auVar110._0_4_ = -(uint)((float)auStack_298._4_4_ < fVar71);
        auVar110._8_4_ = -(uint)(fStack_274 < fVar71);
        auVar110._12_4_ = -(uint)(fVar136 < fVar71);
        auVar104._4_4_ = -(uint)(fVar71 < fVar82);
        auVar104._0_4_ = -(uint)(fVar71 < (float)auStack_2d8._4_4_);
        auVar104._8_4_ = -(uint)(fVar71 < fStack_2b4);
        auVar104._12_4_ = -(uint)(fVar71 < fVar134);
        auVar140 = maxps(auVar140,auVar161 | auVar149);
        auVar21._4_4_ = iStack_3a8;
        auVar21._0_4_ = iStack_3a8;
        auVar21._8_4_ = iStack_3a8;
        auVar21._12_4_ = iStack_3a8;
        auVar153._4_4_ = -(uint)(fVar93 < fVar82);
        auVar153._0_4_ = -(uint)((float)auStack_298._4_4_ < (float)auStack_2d8._4_4_);
        auVar153._8_4_ = -(uint)(fStack_274 < fStack_2b4);
        auVar153._12_4_ = -(uint)(fVar136 < fVar134);
        auVar97._4_4_ = -(uint)(auVar128._4_4_ < 0.0);
        auVar97._0_4_ = -(uint)(auVar128._0_4_ < 0.0);
        auVar97._8_4_ = -(uint)(auVar128._8_4_ < 0.0);
        auVar97._12_4_ = -(uint)(auVar128._12_4_ < 0.0);
        auVar101._4_4_ = -(uint)(fStack_280 < fVar66);
        auVar101._0_4_ = -(uint)((float)uStack_290 < fVar66);
        auVar101._8_4_ = -(uint)(fStack_270 < fVar66);
        auVar101._12_4_ = -(uint)(fStack_260 < fVar66);
        auVar123._4_4_ = -(uint)(auVar128._4_4_ < auVar140._4_4_);
        auVar123._0_4_ = -(uint)(auVar128._0_4_ < auVar140._0_4_);
        auVar123._8_4_ = -(uint)(auVar128._8_4_ < auVar140._8_4_);
        auVar123._12_4_ = -(uint)(auVar128._12_4_ < auVar140._12_4_);
        auVar19._4_4_ = fStack_3b8;
        auVar19._0_4_ = fStack_3b8;
        auVar19._8_4_ = fStack_3b8;
        auVar19._12_4_ = fStack_3b8;
        auVar87._4_4_ = -(uint)(fVar66 < fStack_2c0);
        auVar87._0_4_ = -(uint)(fVar66 < fStack_2d0);
        auVar87._8_4_ = -(uint)(fVar66 < fStack_2b0);
        auVar87._12_4_ = -(uint)(fVar66 < fStack_2a0);
        auVar162._4_4_ = -(uint)(fStack_280 < fStack_2c0);
        auVar162._0_4_ = -(uint)((float)uStack_290 < fStack_2d0);
        auVar162._8_4_ = -(uint)(fStack_270 < fStack_2b0);
        auVar162._12_4_ = -(uint)(fStack_260 < fStack_2a0);
        auVar17._4_4_ = iStack_3c8;
        auVar17._0_4_ = iStack_3c8;
        auVar17._8_4_ = iStack_3c8;
        auVar17._12_4_ = iStack_3c8;
        auVar128 = (auVar73 | auVar143) & auVar21 | (auVar104 | auVar110) & auVar19 |
                   auVar130 | auVar153 | auVar123 | auVar97 |
                   (auVar87 | auVar101) & auVar17 | auVar162;
        uVar36 = auVar128._0_4_ >> 0x1f;
        uVar37 = auVar128._4_4_ >> 0x1f;
        uVar64 = auVar128._8_4_ >> 0x1f;
        uVar81 = auVar128._12_4_ >> 0x1f;
        fVar69 = (float)(uVar36 & _LC13 | ~uVar36 & (uint)auVar140._0_4_);
        fVar71 = (float)(uVar37 & _UNK_00116654 | ~uVar37 & (uint)auVar140._4_4_);
        fVar66 = (float)(uVar64 & _UNK_00116658 | ~uVar64 & (uint)auVar140._8_4_);
        fVar79 = (float)(uVar81 & _UNK_0011665c | ~uVar81 & (uint)auVar140._12_4_);
        uVar36 = (int)-(uint)(fVar69 < fVar66) >> 0x1f;
        uVar37 = (int)-(uint)(fVar71 < fVar79) >> 0x1f;
        fVar80 = (float)((uint)fVar66 & uVar36 | ~uVar36 & (uint)fVar69);
        fVar132 = (float)((uint)fVar79 & uVar37 | ~uVar37 & (uint)fVar71);
        fVar66 = (float)((uint)fVar69 & uVar36 | ~uVar36 & (uint)fVar66);
        fVar79 = (float)((uint)fVar71 & uVar37 | ~uVar37 & (uint)fVar79);
        uVar44 = uVar36 & __LC32 | ~uVar36 & __LC49;
        uVar50 = uVar37 & _UNK_001166d4 | ~uVar37 & _UNK_00116664;
        uVar55 = uVar36 & _UNK_001166d8 | ~uVar36 & _UNK_00116668;
        uVar39 = uVar37 & _UNK_001166dc | ~uVar37 & _UNK_0011666c;
        uVar36 = (int)-(uint)(fVar80 < fVar132) >> 0x1f;
        uVar64 = (int)-(uint)(fVar66 < fVar79) >> 0x1f;
        fVar69 = (float)((uint)fVar80 & uVar36 | ~uVar36 & (uint)fVar132);
        fVar71 = (float)((uint)fVar79 & uVar64 | ~uVar64 & (uint)fVar66);
        uVar37 = uVar36 & uVar44 | ~uVar36 & uVar50;
        uVar81 = uVar64 & uVar39 | ~uVar64 & uVar55;
        uVar67 = (int)-(uint)(fVar69 < fVar71) >> 0x1f;
        auVar111._4_4_ = ~uVar67 & (uint)fVar69;
        auVar111._0_4_ = (uint)fVar132 & uVar36 | ~uVar36 & (uint)fVar80;
        auVar111._8_4_ = ~uVar67 & (uint)fVar71;
        auVar111._12_4_ = (uint)fVar66 & uVar64 | ~uVar64 & (uint)fVar79;
        auVar13._4_4_ = (uint)fVar69 & uVar67;
        auVar13._0_4_ = (uint)fVar71 & uVar67;
        auVar13._8_8_ = 0;
        _auStack_378 = auVar13 << 0x20 | auVar111;
        auStack_348._4_4_ = ~uVar67 & uVar37;
        auStack_348._0_4_ = uVar36 & uVar50 | ~uVar36 & uVar44;
        auStack_348._8_4_ = ~uVar67 & uVar81;
        auStack_348._12_4_ = uVar64 & uVar55 | ~uVar64 & uVar39;
        auVar12._4_4_ = uVar67 & uVar37;
        auVar12._0_4_ = uVar67 & uVar81;
        auVar12._8_8_ = 0;
        auStack_348 = auVar12 << 0x20 | auStack_348;
        auVar74._4_4_ = -(uint)(SUB164(_auStack_378,4) < fVar160);
        auVar74._0_4_ = -(uint)(SUB164(_auStack_378,0) < fVar160);
        auVar74._8_4_ = -(uint)(SUB164(_auStack_378,8) < fVar160);
        auVar74._12_4_ = -(uint)(SUB164(_auStack_378,0xc) < fVar160);
        iVar47 = movmskps((int)local_3e0,auVar74);
        *(undefined8 *)(puVar53 + lVar7 + -8) = 0x102183;
        iStack_3c4 = iStack_3c8;
        iStack_3c0 = iStack_3c8;
        iStack_3bc = iStack_3c8;
        fStack_3b4 = fStack_3b8;
        fStack_3b0 = fStack_3b8;
        fStack_3ac = fStack_3b8;
        iStack_3a4 = iStack_3a8;
        iStack_3a0 = iStack_3a8;
        iStack_39c = iStack_3a8;
        uVar36 = __popcountdi2();
        auStack_328 = _auStack_378;
        if (iVar47 != 0) {
          puVar60 = (undefined8 *)auStack_328;
          uVar48 = (ulong)uVar36 << 2;
          auStack_338 = (undefined1  [16])0x0;
          lVar68 = (4 - (long)(int)uVar36) * 4;
          puVar59 = (undefined8 *)auStack_338;
          puVar58 = (undefined8 *)((long)puVar60 + lVar68);
          if (7 < (uint)uVar48) {
            for (uVar45 = uVar48 >> 3 & 0x1fffffff; uVar45 != 0; uVar45 = uVar45 - 1) {
              *puVar59 = *puVar58;
              puVar58 = puVar58 + (ulong)bVar70 * -2 + 1;
              puVar59 = puVar59 + (ulong)bVar70 * -2 + 1;
            }
          }
          if ((uVar48 & 4) != 0) {
            *(undefined4 *)puVar59 = *(undefined4 *)puVar58;
          }
          puVar59 = (undefined8 *)(auStack_348 + lVar68);
          auStack_328 = (undefined1  [16])0x0;
          if (7 < (uint)uVar48) {
            for (uVar45 = uVar48 >> 3 & 0x1fffffff; uVar45 != 0; uVar45 = uVar45 - 1) {
              *puVar60 = *puVar59;
              puVar59 = puVar59 + (ulong)bVar70 * -2 + 1;
              puVar60 = puVar60 + (ulong)bVar70 * -2 + 1;
            }
          }
          if ((uVar48 & 4) != 0) {
            *(undefined4 *)puVar60 = *(undefined4 *)puVar59;
          }
          uVar36 = uVar36 - 1;
          *(undefined8 *)pVVar62 = auStack_338._0_8_;
          *(undefined8 *)(pVVar62 + 8) = auStack_338._8_8_;
          plVar61 = *(long **)local_3e0;
          auStack_348 = auStack_328;
          uVar45 = (ulong)(local_360 + 2);
          fVar160 = *(float *)(plVar61 + 1);
          uVar48 = uStack_3e8;
          pVVar62 = local_3e0;
          do {
            lVar68 = (ulong)*(uint *)(auStack_348 + (ulong)uVar36 * 4) * 0x10;
            uVar37 = uVar38 + *(int *)(auStack_318 + lVar68 + 4);
            fVar69 = (float)(*(int *)(auStack_318 + lVar68) + auStack_418._0_4_);
            auStack_378._0_4_ = uVar37;
            fVar71 = (float)(*(int *)(auStack_318 + lVar68 + 8) + (int)fVar69);
            uVar64 = uVar36;
            if (uVar37 < *(int *)(auStack_318 + lVar68 + 0xc) + uVar37) {
              auStack_3f8._0_4_ = *(int *)(auStack_318 + lVar68 + 0xc) + uVar37;
              iVar47 = *(int *)(auStack_318 + lVar68 + 4) * local_35c - auStack_418._0_4_;
              uVar65 = uVar45;
              uStack_458 = uVar36;
              uStack_448 = uVar38;
              do {
                uVar45 = uVar65;
                fVar66 = fVar69;
                if ((uint)fVar69 < (uint)fVar71) {
                  do {
                    fStack_388 = fVar69;
                    pcVar41 = (char *)(uVar48 + (long)((int)fVar66 + iVar47));
                    uVar45 = uVar65;
                    if ((*pcVar41 == '\0') && (pcVar41[uVar65] == '\0')) {
                      pauVar63 = pauStack_368 + ((int)fVar66 + iVar47);
                      if (pcVar41[local_35c] != '\0') goto LAB_00102582;
                      auVar128 = *pauVar63;
                      iVar46 = 0;
                      pauVar49 = pauVar63 + local_35c;
                      fVar132 = *(float *)*pauVar49;
                      fVar134 = *(float *)(*pauVar49 + 4);
                      fVar136 = *(float *)(*pauVar49 + 8);
                      pauVar49 = pauVar63 + uVar65;
                      fVar69 = *(float *)*pauVar49;
                      fVar79 = *(float *)(*pauVar49 + 4);
                      fVar80 = *(float *)(*pauVar49 + 8);
                      while( true ) {
                        fVar84 = auVar128._0_4_;
                        fVar69 = fVar69 - fVar84;
                        fVar93 = auVar128._4_4_;
                        fVar79 = fVar79 - fVar93;
                        fVar95 = auVar128._8_4_;
                        fVar80 = fVar80 - fVar95;
                        fVar132 = fVar132 - fVar84;
                        fVar134 = fVar134 - fVar93;
                        fVar136 = fVar136 - fVar95;
                        if ((pVVar62[0x50] != (Visitor)0x0) ||
                           (0.0 <= (fVar69 * fVar134 - fVar132 * fVar79) *
                                   *(float *)(pVVar62 + 0x28) +
                                   (fVar80 * fVar132 - fVar136 * fVar69) *
                                   *(float *)(pVVar62 + 0x24) +
                                   (fVar79 * fVar136 - fVar134 * fVar80) *
                                   *(float *)(pVVar62 + 0x20) + 0.0)) {
                          fVar82 = fVar79 * *(float *)(pVVar62 + 0x20) -
                                   *(float *)(pVVar62 + 0x24) * fVar69;
                          fVar92 = fVar80 * *(float *)(pVVar62 + 0x24) -
                                   *(float *)(pVVar62 + 0x28) * fVar79;
                          fVar94 = fVar69 * *(float *)(pVVar62 + 0x28) -
                                   *(float *)(pVVar62 + 0x20) * fVar80;
                          fVar83 = fVar136 * fVar82 + fVar134 * fVar94 + fVar132 * fVar92 + 0.0;
                          auVar98._0_4_ = 0.0 - fVar83;
                          auVar118._4_4_ = fVar83;
                          auVar118._0_4_ = fVar83;
                          auVar118._8_4_ = fVar83;
                          auVar118._12_4_ = fVar83;
                          auVar98._4_4_ = auVar98._0_4_;
                          auVar98._8_4_ = auVar98._0_4_;
                          auVar98._12_4_ = auVar98._0_4_;
                          auVar128 = maxps(auVar98,auVar118);
                          bVar6 = auVar128._0_4_ < _LC24;
                          uVar36 = (int)-(uint)bVar6 >> 0x1f;
                          uVar37 = (int)-(uint)(auVar128._4_4_ < _LC24) >> 0x1f;
                          uVar38 = (int)-(uint)(auVar128._8_4_ < _LC24) >> 0x1f;
                          uVar64 = (int)-(uint)(auVar128._12_4_ < _LC24) >> 0x1f;
                          auVar88._0_4_ = ~uVar36 & (uint)fVar83;
                          auVar88._4_4_ = ~uVar37 & (uint)fVar83;
                          auVar88._8_4_ = ~uVar38 & (uint)fVar83;
                          auVar88._12_4_ = ~uVar64 & (uint)fVar83;
                          auVar112._0_4_ = uVar36 & (uint)_LC4;
                          auVar112._4_4_ = uVar37 & (uint)_LC4;
                          auVar112._8_4_ = uVar38 & (uint)_LC4;
                          auVar112._12_4_ = uVar64 & (uint)_LC4;
                          auVar112 = auVar112 | auVar88;
                          fVar84 = *(float *)(pVVar62 + 0x10) - fVar84;
                          fVar93 = *(float *)(pVVar62 + 0x14) - fVar93;
                          fVar95 = *(float *)(pVVar62 + 0x18) - fVar95;
                          fVar83 = fVar134 * fVar84 - fVar93 * fVar132;
                          fVar134 = fVar136 * fVar93 - fVar95 * fVar134;
                          fVar132 = fVar132 * fVar95 - fVar84 * fVar136;
                          auVar105._0_4_ = fVar95 * fVar82 + fVar93 * fVar94 + fVar84 * fVar92 + 0.0
                          ;
                          auVar105._4_4_ = auVar105._0_4_;
                          auVar105._8_4_ = auVar105._0_4_;
                          auVar105._12_4_ = auVar105._0_4_;
                          auVar106 = divps(auVar105,auVar112);
                          auVar102._0_4_ =
                               (float)*(long *)(pVVar62 + 0x28) * fVar83 +
                               (float)((ulong)*(long *)(pVVar62 + 0x20) >> 0x20) * fVar132 +
                               (float)*(long *)(pVVar62 + 0x20) * fVar134 + 0.0;
                          auVar102._4_4_ = auVar102._0_4_;
                          auVar102._8_4_ = auVar102._0_4_;
                          auVar102._12_4_ = auVar102._0_4_;
                          auVar75._0_4_ =
                               fVar80 * fVar83 + fVar79 * fVar132 + fVar134 * fVar69 + 0.0;
                          auVar140 = divps(auVar102,auVar112);
                          auVar75._4_4_ = auVar75._0_4_;
                          auVar75._8_4_ = auVar75._0_4_;
                          auVar75._12_4_ = auVar75._0_4_;
                          auVar128 = divps(auVar75,auVar112);
                          uVar36 = (int)-(uint)(auVar128._0_4_ < 0.0 ||
                                               ((auVar140._0_4_ < 0.0 ||
                                                _LC4 < auVar106._0_4_ + auVar140._0_4_) ||
                                               (auVar106._0_4_ < 0.0 || bVar6))) >> 0x1f;
                          fVar69 = (float)(uVar36 & _LC13 | ~uVar36 & (uint)auVar128._0_4_);
                          if (fVar69 < fVar160) {
                            uStack_354 = 0xffffffff;
                            if (plVar61[2] != 0) {
                              uStack_354 = *(undefined4 *)(plVar61[2] + 0x34);
                            }
                            iVar56 = 1;
                            uVar36 = *(int *)(*(long *)(pVVar62 + 0x58) + 0x40) - 1;
                            if (uVar36 != 0) {
                              iVar56 = 0x1f;
                              if (uVar36 != 0) {
                                for (; uVar36 >> iVar56 == 0; iVar56 = iVar56 + -1) {
                                }
                              }
                              iVar56 = (int)(1L << ((char)iVar56 * '\x02' + 3U & 0x3f)) + -1;
                            }
                            auStack_3d8._0_4_ = (int)uVar45;
                            iStack_3c8 = (int)uVar48;
                            iStack_3c4 = (int)(uVar48 >> 0x20);
                            fStack_398 = SUB84(pVVar62,0);
                            fStack_394 = (float)((ulong)pVVar62 >> 0x20);
                            uStack_34c = iVar46 + (*(int *)(*(long *)(pVVar62 + 0x58) + 0x40) *
                                                   auStack_378._0_4_ + (int)fVar66) * 2 <<
                                         ((byte)*(undefined4 *)(pVVar62 + 100) & 0x1f) |
                                         ~(iVar56 << ((byte)*(undefined4 *)(pVVar62 + 100) & 0x1f))
                                         & *(uint *)(pVVar62 + 0x60);
                            pcVar4 = *(code **)(*plVar61 + 0x28);
                            *(undefined8 *)(puVar53 + lVar7 + -8) = 0x10271f;
                            fStack_3b8 = fVar71;
                            iStack_3a8 = iVar46;
                            fStack_350 = fVar69;
                            (*pcVar4)(plVar61,&uStack_354);
                            pVVar62 = (Visitor *)CONCAT44(fStack_394,fStack_398);
                            uVar45 = (ulong)(uint)auStack_3d8._0_4_;
                            uVar48 = CONCAT44(iStack_3c4,iStack_3c8);
                            plVar61 = *(long **)pVVar62;
                            fVar160 = *(float *)(plVar61 + 1);
                            fVar71 = fStack_3b8;
                            iVar46 = iStack_3a8;
                          }
                        }
                        piVar51 = (int *)(puVar53 + lVar7);
                        if (fVar160 <= 0.0) goto LAB_00101768;
                        if (iVar46 == 1) break;
LAB_00102582:
                        if (pcVar41[1] != '\0') break;
                        auVar128 = *pauVar63;
                        fVar69 = *(float *)pauVar63[1];
                        fVar79 = *(float *)(pauVar63[1] + 4);
                        fVar80 = *(float *)(pauVar63[1] + 8);
                        iVar46 = 1;
                        pauVar49 = pauVar63 + uVar65;
                        fVar132 = *(float *)*pauVar49;
                        fVar134 = *(float *)(*pauVar49 + 4);
                        fVar136 = *(float *)(*pauVar49 + 8);
                      }
                    }
                    fVar66 = (float)((int)fVar66 + 1);
                    uVar65 = uVar45;
                    fVar69 = fStack_388;
                  } while (fVar71 != fVar66);
                }
                iVar46 = auStack_378._0_4_ + 1;
                auStack_378._0_4_ = iVar46;
                iVar47 = iVar47 + local_35c;
                uVar65 = uVar45;
                uVar38 = uStack_448;
                uVar64 = uStack_458;
              } while (auStack_3f8._0_4_ != iVar46);
            }
            lVar68 = (long)(int)(uVar64 - 1);
            do {
              uVar36 = (uint)lVar68;
              if (uVar36 == 0xffffffff) goto LAB_00102624;
              lVar40 = lVar68 * 4;
              lVar68 = lVar68 + -1;
            } while (fVar160 < *(float *)(pVVar62 +
                                         lVar40 + ((long)(int)((uVar64 - 1) + iStack_3fc) -
                                                  (long)(int)uVar64) * 4 + 0x6c) ||
                     fVar160 ==
                     *(float *)(pVVar62 +
                               lVar40 + ((long)(int)((uVar64 - 1) + iStack_3fc) - (long)(int)uVar64)
                                        * 4 + 0x6c));
          } while( true );
        }
        *(undefined1 (*) [16])pVVar62 = (undefined1  [16])0x0;
        fVar160 = *(float *)(*(long *)local_3e0 + 8);
      }
LAB_00102624:
      piVar51 = (int *)(puVar53 + lVar7);
      if (fVar160 <= 0.0) break;
      lVar68 = (long)(local_250 + -1);
      do {
        iVar47 = (int)lVar68;
        piVar51 = (int *)(puVar53 + lVar7);
        if (iVar47 < 0) goto LAB_00101768;
        lVar40 = lVar68 * 4;
        lVar68 = lVar68 + -1;
      } while (fVar160 < *(float *)(local_3e0 + lVar40 + 0x68) ||
               fVar160 == *(float *)(local_3e0 + lVar40 + 0x68));
      local_250 = iVar47;
      uVar36 = auStack_24c[iVar47];
    } while( true );
  }
LAB_00101768:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)piVar51 + -8) = &UNK_001031d9;
    __stack_chk_fail();
  }
  return;
}



/* JPH::HeightFieldShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const [clone .part.0] [clone
   .isra.0] */

void JPH::HeightFieldShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ShapeFilter *local_288 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  undefined1 local_238;
  RayCast *local_230;
  CollisionCollector *local_228;
  long local_10;
  
  local_238 = SUB81(param_3,0);
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x10);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_278 = *(undefined8 *)param_2;
  uStack_270 = *(undefined8 *)(param_2 + 8);
  local_268 = *(undefined8 *)(param_2 + 0x10);
  uStack_260 = *(undefined8 *)(param_2 + 0x18);
  auVar2._0_4_ = 0.0 - auVar1._0_4_;
  auVar2._4_4_ = 0.0 - auVar1._4_4_;
  auVar2._8_4_ = 0.0 - auVar1._8_4_;
  auVar2._12_4_ = 0.0 - auVar1._12_4_;
  auVar3 = maxps(auVar2,auVar1);
  local_248 = -(uint)(auVar3._0_4_ <= _LC34);
  iStack_244 = -(uint)(auVar3._4_4_ <= _LC34);
  iStack_240 = -(uint)(auVar3._8_4_ <= _LC34);
  iStack_23c = -(uint)(auVar3._12_4_ <= _LC34);
  auVar5._4_4_ = _LC4;
  auVar5._0_4_ = _LC4;
  auVar5._8_4_ = _LC4;
  auVar5._12_4_ = _LC4;
  auVar4._0_4_ = local_248 >> 0x1f & _LC4;
  auVar4._4_4_ = iStack_244 >> 0x1f & _LC4;
  auVar4._8_4_ = iStack_240 >> 0x1f & _LC4;
  auVar4._12_4_ = iStack_23c >> 0x1f & _LC4;
  auVar3._4_4_ = ~(iStack_244 >> 0x1f) & (uint)auVar1._4_4_;
  auVar3._0_4_ = ~(local_248 >> 0x1f) & (uint)auVar1._0_4_;
  auVar3._8_4_ = ~(iStack_240 >> 0x1f) & (uint)auVar1._8_4_;
  auVar3._12_4_ = ~(iStack_23c >> 0x1f) & (uint)auVar1._12_4_;
  local_258 = divps(auVar5,auVar4 | auVar3);
  local_288[0] = param_5;
  local_230 = param_1;
  local_228 = param_4;
  WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast_const&,JPH::RayCastSettings_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>&,JPH::ShapeFilter_const&)const::Visitor>
            ((HeightFieldShape *)param_1,(Visitor *)local_288);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::HeightFieldShape::CastRay
          (HeightFieldShape *this,RayCast *param_1,RayCastSettings *param_2,
          SubShapeIDCreator *param_3,CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 == '\0') {
    return;
  }
  CastRay((RayCast *)this,(RayCastSettings *)param_1,(SubShapeIDCreator *)(ulong)(byte)*param_2,
          *(CollisionCollector **)param_3,(ShapeFilter *)param_4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast const&,
   JPH::SubShapeIDCreator const&, JPH::RayCastResult&)
   const::Visitor>(JPH::HeightFieldShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator
   const&, JPH::RayCastResult&) const::Visitor&) const [clone .constprop.0] */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast_const&,JPH::SubShapeIDCreator_const&,JPH::RayCastResult&)const::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  Visitor *pVVar1;
  HeightFieldShape HVar2;
  HeightFieldShape HVar3;
  ushort uVar4;
  long lVar5;
  byte bVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
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
  undefined1 auVar23 [14];
  undefined1 auVar24 [16];
  char *pcVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long lVar32;
  char *pcVar33;
  ulong uVar34;
  float fVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  int *piVar39;
  long lVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar44;
  float *pfVar46;
  undefined1 (*pauVar47) [16];
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  uint uVar51;
  int iVar52;
  undefined1 (*pauVar53) [16];
  float *pfVar54;
  uint uVar55;
  float fVar56;
  int iVar57;
  int iVar58;
  uint uVar59;
  long lVar60;
  int iVar61;
  long in_FS_OFFSET;
  bool bVar62;
  byte bVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar72;
  float fVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar74;
  undefined4 uVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined4 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar87 [16];
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar98 [16];
  float fVar102;
  float fVar104;
  float fVar105;
  undefined1 auVar103 [16];
  float fVar106;
  float fVar107;
  float fVar113;
  undefined1 auVar108 [12];
  float fVar114;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  uint uVar123;
  float fVar124;
  float fVar125;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auStack_518 [8];
  ulong uStack_510;
  int iStack_508;
  int iStack_504;
  int iStack_500;
  int iStack_4fc;
  long lStack_4f8;
  ulong uStack_4f0;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  undefined4 uStack_47c;
  uint uStack_474;
  long lStack_470;
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint uStack_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  uint uStack_448;
  uint uStack_444;
  uint uStack_440;
  uint uStack_43c;
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [16];
  int iStack_414;
  uint uStack_410;
  int local_40c;
  undefined1 auStack_408 [16];
  uint local_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  uint uStack_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  uint local_3d8;
  uint local_3d4;
  Visitor *local_3d0;
  undefined8 uStack_3c8;
  uint uStack_3c0;
  uint uStack_3bc;
  uint local_3b8;
  int iStack_3b4;
  uint local_3b0;
  uint local_3ac;
  undefined8 uStack_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  uint uStack_398;
  uint uStack_394;
  uint uStack_390;
  uint uStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined8 uStack_378;
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [8];
  float fStack_360;
  float fStack_35c;
  long lStack_358;
  float *pfStack_350;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 auStack_2d8 [8];
  float fStack_2d0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  undefined1 auStack_298 [8];
  float fStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar43;
  undefined1 *puVar45;
  
  bVar63 = 0;
  puVar42 = auStack_518;
  puVar41 = auStack_518;
  puVar43 = auStack_518;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  local_3d0 = param_1;
  if (*(int *)(this + 0x48) == 0) {
LAB_00103338:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar41 + -8) = &UNK_00104dde;
    __stack_chk_fail();
  }
  local_3ac = *(uint *)(this + 0x44);
  local_3f8 = *(uint *)(this + 0x40) - 1;
  local_3b0 = local_3ac + 1;
  uVar26 = *(uint *)(this + 0x40) / local_3ac;
  local_3d4 = uVar26 - 1;
  if (local_3d4 == 0) {
    local_40c = 0;
    local_3b8 = 0;
  }
  else {
    uVar27 = 0x1f;
    if (local_3d4 != 0) {
      for (; local_3d4 >> uVar27 == 0; uVar27 = uVar27 - 1) {
      }
    }
    local_3b8 = 0x20 - (uVar27 ^ 0x1f);
    local_40c = (&sGridOffsets)[0x1f - (uVar27 ^ 0x1f)];
  }
  local_3d8 = uVar26 + 1 >> 1;
  uVar37 = (long)(int)(local_3b0 * local_3b0) * 0x10 + 0x10;
  puVar41 = auStack_518;
  while (puVar43 != auStack_518 + -(uVar37 & 0xfffffffffffff000)) {
    puVar42 = puVar41 + -0x1000;
    *(undefined8 *)(puVar41 + -8) = *(undefined8 *)(puVar41 + -8);
    puVar43 = puVar41 + -0x1000;
    puVar41 = puVar41 + -0x1000;
  }
  uVar37 = (ulong)((uint)uVar37 & 0xfff);
  lVar5 = -uVar37;
  puVar44 = puVar42 + lVar5;
  puVar45 = puVar42 + lVar5;
  if (uVar37 != 0) {
    *(undefined8 *)(puVar42 + -8) = *(undefined8 *)(puVar42 + -8);
  }
  uVar37 = (long)(int)(local_3b0 * local_3b0) + 0x17;
  pfStack_350 = (float *)((ulong)(puVar42 + lVar5 + 0xf) & 0xfffffffffffffff0);
  puVar41 = puVar42 + lVar5;
  while (puVar45 != puVar42 + (lVar5 - (uVar37 & 0xfffffffffffff000))) {
    puVar44 = puVar41 + -0x1000;
    *(undefined8 *)(puVar41 + -8) = *(undefined8 *)(puVar41 + -8);
    puVar45 = puVar41 + -0x1000;
    puVar41 = puVar41 + -0x1000;
  }
  uVar37 = (ulong)((uint)uVar37 & 0xff0);
  lVar5 = -uVar37;
  if (uVar37 != 0) {
    *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
  }
  fStack_498 = *(float *)(this + 0x20);
  fStack_4a8 = *(float *)(this + 0x24);
  fStack_4b8 = *(float *)(this + 0x28);
  uVar26 = 0;
  uVar37 = (ulong)(puVar44 + lVar5 + 0xf) & 0xfffffffffffffff0;
  uStack_410 = local_3ac >> 1;
  fStack_4c8 = *(float *)(this + 0x30);
  fStack_4d8 = *(float *)(this + 0x34);
  fStack_4e8 = *(float *)(this + 0x38);
  iStack_414 = local_3ac - uStack_410;
  uStack_4f0 = CONCAT44(uStack_410,uStack_410);
  iStack_508 = local_3f8 - __LC27;
  iStack_504 = local_3f8 - _UNK_00116694;
  iStack_500 = local_3f8 - _UNK_00116698;
  iStack_4fc = local_3f8 - _UNK_0011669c;
  auStack_408._0_8_ = *(long *)param_1;
  fVar56 = *(float *)(*(long *)param_1 + 4);
  uStack_510 = (ulong)(local_3ac * local_3b0);
  lStack_358 = (ulong)(local_3ac - 1) + 1;
  lStack_4f8 = uStack_510 + uVar37;
  lStack_470 = lStack_358 + lStack_4f8;
  fStack_4e4 = fStack_4e8;
  fStack_4e0 = fStack_4e8;
  fStack_4dc = fStack_4e8;
  fStack_4d4 = fStack_4d8;
  fStack_4d0 = fStack_4d8;
  fStack_4cc = fStack_4d8;
  fStack_4c4 = fStack_4c8;
  fStack_4c0 = fStack_4c8;
  fStack_4bc = fStack_4c8;
  fStack_4b4 = fStack_4b8;
  fStack_4b0 = fStack_4b8;
  fStack_4ac = fStack_4b8;
  fStack_4a4 = fStack_4a8;
  fStack_4a0 = fStack_4a8;
  fStack_49c = fStack_4a8;
  fStack_494 = fStack_498;
  fStack_490 = fStack_498;
  fStack_48c = fStack_498;
  uStack_3f4 = local_3f8;
  uStack_3f0 = local_3f8;
  uStack_3ec = local_3f8;
  do {
    iStack_3b4 = local_250;
    fVar65 = _LC2;
    uVar55 = uVar26 & 0x3fff;
    uVar27 = uVar26 >> 0xe & 0x3fff;
    uVar28 = uVar26 >> 0x1c;
    if (uVar28 < local_3b8) {
      bVar6 = (byte)(uVar26 >> 0x18);
      uVar26 = 1 << (bVar6 >> 4);
      if (local_3d8 < uVar26) {
        uVar26 = local_3d8;
      }
      auVar120 = *(undefined1 (*) [16])
                  ((ulong)(uVar26 * uVar27 + (&sGridOffsets)[uVar28] + uVar55) * 0x10 +
                  *(long *)(local_258 + 0x60));
      iVar61 = uVar55 * 2;
      auVar7._10_2_ = 0;
      auVar7._0_10_ = auVar120._0_10_;
      auVar7._12_2_ = auVar120._6_2_;
      auVar8._8_2_ = auVar120._4_2_;
      auVar8._0_8_ = auVar120._0_8_;
      auVar8._10_4_ = auVar7._10_4_;
      auVar23._6_8_ = 0;
      auVar23._0_6_ = auVar8._8_6_;
      auVar9._4_2_ = auVar120._2_2_;
      auVar9._0_4_ = auVar120._0_4_;
      auVar9._6_8_ = SUB148(auVar23 << 0x40,6);
      uVar26 = local_3ac << (((char)local_3b8 + -1) - (bVar6 >> 4) & 0x1f);
      auVar70._4_4_ = uVar26;
      auVar70._0_4_ = uVar26;
      auVar70._8_4_ = uVar26;
      auVar70._12_4_ = uVar26;
      iVar52 = uVar27 * 2;
      auVar95._0_4_ = __LC25 + iVar61;
      auVar95._4_4_ = _UNK_00116674 + iVar61;
      auVar95._8_4_ = _UNK_00116678 + iVar61;
      auVar95._12_4_ = _UNK_0011667c + iVar61;
      auVar80._0_4_ = iVar61 + __LC26;
      auVar80._4_4_ = iVar61 + _UNK_00116684;
      auVar80._8_4_ = iVar61 + _UNK_00116688;
      auVar80._12_4_ = iVar61 + _UNK_0011668c;
      fVar90 = (float)auVar120._8_2_ * fStack_4d8 + fStack_4a8;
      fVar107 = (float)auVar120._10_2_ * fStack_4d4 + fStack_4a4;
      fVar113 = (float)auVar120._12_2_ * fStack_4d0 + fStack_4a0;
      fVar114 = (float)auVar120._14_2_ * fStack_4cc + fStack_49c;
      iVar61 = (uVar28 + 1) * 0x10000000 + uVar27 * 0x8000 + iVar61;
      fVar118 = (float)(auVar120._0_4_ & 0xffff) * fStack_4d8 + fStack_4a8;
      fVar124 = (float)auVar9._4_4_ * fStack_4d4 + fStack_4a4;
      fVar125 = (float)auVar8._8_4_ * fStack_4d0 + fStack_4a0;
      fVar126 = (float)(auVar7._10_4_ >> 0x10) * fStack_4cc + fStack_49c;
      uVar29 = (uint)((auVar80._8_8_ & 0xffffffff) * (ulong)uVar26);
      uVar55 = (uint)((auVar80._8_8_ >> 0x20) * (ulong)uVar26);
      uVar27 = -(uint)(iStack_508 < (int)(auVar80._0_4_ * uVar26 - __LC27));
      uVar28 = -(uint)(iStack_504 < (int)(auVar80._4_4_ * uVar26 - _UNK_00116694));
      uVar123 = -(uint)(iStack_500 < (int)(uVar29 - _UNK_00116698));
      uVar59 = -(uint)(iStack_4fc < (int)(uVar55 - _UNK_0011669c));
      fVar102 = (float)(int)(auVar95._0_4_ * uVar26) * fStack_4c8 + fStack_498;
      fVar104 = (float)(int)(auVar95._4_4_ * uVar26) * fStack_4c4 + fStack_494;
      fVar105 = (float)(int)((auVar95._8_8_ & 0xffffffff) * (ulong)uVar26) * fStack_4c0 + fStack_490
      ;
      fVar106 = (float)(int)((auVar95._8_8_ >> 0x20) * (ulong)uVar26) * fStack_4bc + fStack_48c;
      auVar110._0_4_ = __LC28 + iVar52;
      auVar110._4_4_ = _UNK_001166a4 + iVar52;
      auVar110._8_4_ = _UNK_001166a8 + iVar52;
      auVar110._12_4_ = _UNK_001166ac + iVar52;
      auVar81._0_4_ = iVar52 + __LC29;
      auVar81._4_4_ = iVar52 + _UNK_001166b4;
      auVar81._8_4_ = iVar52 + _UNK_001166b8;
      auVar81._12_4_ = iVar52 + _UNK_001166bc;
      fVar72 = (float)(int)(~uVar27 & auVar80._0_4_ * uVar26 | local_3f8 & uVar27) * fStack_4c8 +
               fStack_498;
      fVar73 = (float)(int)(~uVar28 & auVar80._4_4_ * uVar26 | uStack_3f4 & uVar28) * fStack_4c4 +
               fStack_494;
      fVar86 = (float)(int)(~uVar123 & uVar29 | uStack_3f0 & uVar123) * fStack_4c0 + fStack_490;
      fVar89 = (float)(int)(~uVar59 & uVar55 | uStack_3ec & uVar59) * fStack_4bc + fStack_48c;
      uVar55 = (uint)((auVar70._8_8_ & 0xffffffff) * (ulong)auVar81._8_4_);
      uVar29 = (uint)((auVar70._8_8_ >> 0x20) * (auVar81._8_8_ >> 0x20));
      uStack_390 = *(uint *)(local_3d0 + 0x40);
      uStack_3a0 = *(uint *)(local_3d0 + 0x44);
      uStack_3c0 = *(uint *)(local_3d0 + 0x48);
      uVar27 = -(uint)(iStack_508 < (int)(uVar26 * auVar81._0_4_ - __LC27));
      uVar28 = -(uint)(iStack_504 < (int)(uVar26 * auVar81._4_4_ - _UNK_00116694));
      uVar123 = -(uint)(iStack_500 < (int)(uVar55 - _UNK_00116698));
      uVar59 = -(uint)(iStack_4fc < (int)(uVar29 - _UNK_0011669c));
      fVar97 = (float)(int)(auVar110._0_4_ * uVar26) * fStack_4e8 + fStack_4b8;
      fVar99 = (float)(int)(auVar110._4_4_ * uVar26) * fStack_4e4 + fStack_4b4;
      fVar100 = (float)(int)((auVar110._8_8_ & 0xffffffff) * (ulong)uVar26) * fStack_4e0 +
                fStack_4b0;
      fVar101 = (float)(int)((auVar110._8_8_ >> 0x20) * (ulong)uVar26) * fStack_4dc + fStack_4ac;
      fVar65 = *(float *)(local_3d0 + 0x10);
      fVar64 = *(float *)(local_3d0 + 0x14);
      fVar35 = *(float *)(local_3d0 + 0x18);
      uStack_3a8 = CONCAT44(uStack_3a0,uStack_3a0);
      uStack_3e8 = iVar61 + __LC30;
      uStack_3e4 = iVar61 + _UNK_001166c4;
      uStack_3e0 = iVar61 + _UNK_001166c8;
      uStack_3dc = iVar61 + _UNK_001166cc;
      _uStack_398 = CONCAT44(uStack_390,uStack_390);
      fVar91 = (float)(int)(~uVar27 & uVar26 * auVar81._0_4_ | local_3f8 & uVar27) * fStack_4e8 +
               fStack_4b8;
      fVar84 = (float)(int)(~uVar28 & uVar26 * auVar81._4_4_ | uStack_3f4 & uVar28) * fStack_4e4 +
               fStack_4b4;
      fVar85 = (float)(int)(~uVar123 & uVar55 | uStack_3f0 & uVar123) * fStack_4e0 + fStack_4b0;
      fVar88 = (float)(int)(~uVar59 & uVar29 | uStack_3ec & uVar59) * fStack_4dc + fStack_4ac;
      fVar66 = *(float *)(local_3d0 + 0x30);
      fStack_36c = *(float *)(local_3d0 + 0x34);
      fStack_37c = *(float *)(local_3d0 + 0x38);
      uStack_3c8 = CONCAT44(uStack_3c0,uStack_3c0);
      auStack_408._0_8_ = CONCAT44((fVar124 - fVar64) * fStack_36c,(fVar118 - fVar64) * fStack_36c);
      auStack_408._8_4_ = (fVar125 - fVar64) * fStack_36c;
      auStack_408._12_4_ = (fVar126 - fVar64) * fStack_36c;
      auVar129._0_8_ = CONCAT44((fVar104 - fVar65) * fVar66,(fVar102 - fVar65) * fVar66);
      auVar129._8_4_ = (fVar105 - fVar65) * fVar66;
      auVar129._12_4_ = (fVar106 - fVar65) * fVar66;
      auStack_368._4_4_ = (fVar99 - fVar35) * fStack_37c;
      auStack_368._0_4_ = (fVar97 - fVar35) * fStack_37c;
      fStack_360 = (fVar100 - fVar35) * fStack_37c;
      fStack_35c = (fVar101 - fVar35) * fStack_37c;
      auStack_428._0_4_ = (fVar72 - fVar65) * fVar66;
      auStack_428._4_4_ = (fVar73 - fVar65) * fVar66;
      auStack_428._8_4_ = (fVar86 - fVar65) * fVar66;
      auStack_428._12_4_ = (fVar89 - fVar65) * fVar66;
      uStack_378._0_4_ = (fVar90 - fVar64) * fStack_36c;
      uStack_378._4_4_ = (fVar107 - fVar64) * fStack_36c;
      fStack_370 = (fVar113 - fVar64) * fStack_36c;
      fStack_36c = (fVar114 - fVar64) * fStack_36c;
      fStack_388 = (fVar91 - fVar35) * fStack_37c;
      fStack_384 = (fVar84 - fVar35) * fStack_37c;
      fStack_380 = (fVar85 - fVar35) * fStack_37c;
      fStack_37c = (fVar88 - fVar35) * fStack_37c;
      auVar111._8_4_ = auVar129._8_4_;
      auVar111._0_8_ = auVar129._0_8_;
      auVar111._12_4_ = auVar129._12_4_;
      auVar120 = minps(auVar111,auStack_428);
      auVar133._8_4_ = auStack_408._8_4_;
      auVar133._0_8_ = auStack_408._0_8_;
      auVar133._12_4_ = auStack_408._12_4_;
      auVar21._4_4_ = uStack_378._4_4_;
      auVar21._0_4_ = (float)uStack_378;
      auVar21._8_4_ = fStack_370;
      auVar21._12_4_ = fStack_36c;
      auVar117 = minps(auVar133,auVar21);
      auVar131 = maxps(auVar129,auStack_428);
      lVar32 = (long)local_250;
      uVar26 = (int)uStack_390 >> 0x1f;
      lVar60 = lVar32 * 4;
      pVVar1 = local_3d0 + lVar60 + 100;
      auStack_438._4_4_ = _UNK_00116644 & uVar26 | ~uVar26 & auVar120._4_4_;
      auStack_438._0_4_ = _LC19 & uVar26 | ~uVar26 & auVar120._0_4_;
      auStack_438._8_4_ = _UNK_00116648 & uVar26 | ~uVar26 & auVar120._8_4_;
      auStack_438._12_4_ = _UNK_0011664c & uVar26 | ~uVar26 & auVar120._12_4_;
      uVar28 = (int)uStack_3a0 >> 0x1f;
      uStack_448 = _LC19 & uVar28 | ~uVar28 & auVar117._0_4_;
      uStack_444 = _UNK_00116644 & uVar28 | ~uVar28 & auVar117._4_4_;
      uStack_440 = _UNK_00116648 & uVar28 | ~uVar28 & auVar117._8_4_;
      uStack_43c = _UNK_0011664c & uVar28 | ~uVar28 & auVar117._12_4_;
      auVar17._4_4_ = fStack_384;
      auVar17._0_4_ = fStack_388;
      auVar17._8_4_ = fStack_380;
      auVar17._12_4_ = fStack_37c;
      auVar120 = minps(_auStack_368,auVar17);
      uVar27 = (int)uStack_3c0 >> 0x1f;
      auVar134._0_4_ = ~uVar27 & auVar120._0_4_;
      auVar134._4_4_ = ~uVar27 & auVar120._4_4_;
      auVar134._8_4_ = ~uVar27 & auVar120._8_4_;
      auVar134._12_4_ = ~uVar27 & auVar120._12_4_;
      auVar138._0_4_ = _LC19 & uVar27;
      auVar138._4_4_ = _UNK_00116644 & uVar27;
      auVar138._8_4_ = _UNK_00116648 & uVar27;
      auVar138._12_4_ = _UNK_0011664c & uVar27;
      auVar112._0_4_ = uVar26 & _LC13;
      auVar112._4_4_ = uVar26 & _UNK_00116654;
      auVar112._8_4_ = uVar26 & _UNK_00116658;
      auVar112._12_4_ = uVar26 & _UNK_0011665c;
      auVar135._0_4_ = ~uVar26 & auVar131._0_4_;
      auVar135._4_4_ = ~uVar26 & auVar131._4_4_;
      auVar135._8_4_ = ~uVar26 & auVar131._8_4_;
      auVar135._12_4_ = ~uVar26 & auVar131._12_4_;
      auVar22._4_4_ = uStack_378._4_4_;
      auVar22._0_4_ = (float)uStack_378;
      auVar22._8_4_ = fStack_370;
      auVar22._12_4_ = fStack_36c;
      auVar120 = maxps(auStack_408,auVar22);
      auVar128._0_4_ = uVar28 & _LC13;
      auVar128._4_4_ = uVar28 & _UNK_00116654;
      auVar128._8_4_ = uVar28 & _UNK_00116658;
      auVar128._12_4_ = uVar28 & _UNK_0011665c;
      auVar136._0_4_ = ~uVar28 & auVar120._0_4_;
      auVar136._4_4_ = ~uVar28 & auVar120._4_4_;
      auVar136._8_4_ = ~uVar28 & auVar120._8_4_;
      auVar136._12_4_ = ~uVar28 & auVar120._12_4_;
      auVar18._4_4_ = fStack_384;
      auVar18._0_4_ = fStack_388;
      auVar18._8_4_ = fStack_380;
      auVar18._12_4_ = fStack_37c;
      auVar131 = maxps(_auStack_368,auVar18);
      auVar127._0_4_ = uVar27 & _LC13;
      auVar127._4_4_ = uVar27 & _UNK_00116654;
      auVar127._8_4_ = uVar27 & _UNK_00116658;
      auVar127._12_4_ = uVar27 & _UNK_0011665c;
      auVar120 = minps(auVar112 | auVar135,auVar128 | auVar136);
      auVar137._0_4_ = ~uVar27 & auVar131._0_4_;
      auVar137._4_4_ = ~uVar27 & auVar131._4_4_;
      auVar137._8_4_ = ~uVar27 & auVar131._8_4_;
      auVar137._12_4_ = ~uVar27 & auVar131._12_4_;
      auVar117._4_4_ = uStack_444;
      auVar117._0_4_ = uStack_448;
      auVar117._8_4_ = uStack_440;
      auVar117._12_4_ = uStack_43c;
      auVar131 = maxps(auStack_438,auVar117);
      auVar120 = minps(auVar120,auVar127 | auVar137);
      auVar131 = maxps(auVar131,auVar138 | auVar134);
      uVar26 = (int)(-(uint)(fVar65 < fVar102 || fVar72 < fVar65) & uStack_390 |
                     -(uint)(fVar64 < fVar118 || fVar90 < fVar64) & uStack_3a0 |
                     -(uint)((auVar120._0_4_ < auVar131._0_4_ || auVar120._0_4_ < 0.0) ||
                            (fVar72 < fVar102 || fVar90 < fVar118)) |
                    -(uint)(fVar35 < fVar97 || fVar91 < fVar35) & uStack_3c0 |
                    -(uint)(fVar91 < fVar97)) >> 0x1f;
      uVar27 = (int)(-(uint)(fVar65 < fVar104 || fVar73 < fVar65) & uStack_390 |
                     -(uint)(fVar64 < fVar124 || fVar107 < fVar64) & uStack_3a0 |
                     -(uint)((auVar120._4_4_ < auVar131._4_4_ || auVar120._4_4_ < 0.0) ||
                            (fVar73 < fVar104 || fVar107 < fVar124)) |
                    -(uint)(fVar35 < fVar99 || fVar84 < fVar35) & uStack_3c0 |
                    -(uint)(fVar84 < fVar99)) >> 0x1f;
      uVar28 = (int)(-(uint)(fVar65 < fVar105 || fVar86 < fVar65) & uStack_390 |
                     -(uint)(fVar64 < fVar125 || fVar113 < fVar64) & uStack_3a0 |
                     -(uint)((auVar120._8_4_ < auVar131._8_4_ || auVar120._8_4_ < 0.0) ||
                            (fVar86 < fVar105 || fVar113 < fVar125)) |
                    -(uint)(fVar35 < fVar100 || fVar85 < fVar35) & uStack_3c0 |
                    -(uint)(fVar85 < fVar100)) >> 0x1f;
      uVar55 = (int)(-(uint)(fVar65 < fVar106 || fVar89 < fVar65) & uStack_390 |
                     -(uint)(fVar64 < fVar126 || fVar114 < fVar64) & uStack_3a0 |
                     -(uint)((auVar120._12_4_ < auVar131._12_4_ || auVar120._12_4_ < 0.0) ||
                            (fVar89 < fVar106 || fVar114 < fVar126)) |
                    -(uint)(fVar35 < fVar101 || fVar88 < fVar35) & uStack_3c0 |
                    -(uint)(fVar88 < fVar101)) >> 0x1f;
      fVar65 = (float)(uVar26 & _LC13 | ~uVar26 & (uint)auVar131._0_4_);
      fVar64 = (float)(uVar27 & _UNK_00116654 | ~uVar27 & (uint)auVar131._4_4_);
      fVar35 = (float)(uVar28 & _UNK_00116658 | ~uVar28 & (uint)auVar131._8_4_);
      fVar66 = (float)(uVar55 & _UNK_0011665c | ~uVar55 & (uint)auVar131._12_4_);
      uVar26 = (int)-(uint)(fVar65 < fVar35) >> 0x1f;
      uVar27 = (int)-(uint)(fVar64 < fVar66) >> 0x1f;
      fVar72 = (float)((uint)fVar35 & uVar26 | ~uVar26 & (uint)fVar65);
      fVar73 = (float)((uint)fVar66 & uVar27 | ~uVar27 & (uint)fVar64);
      fVar35 = (float)((uint)fVar65 & uVar26 | ~uVar26 & (uint)fVar35);
      fVar66 = (float)((uint)fVar64 & uVar27 | ~uVar27 & (uint)fVar66);
      uVar123 = uVar26 & uStack_3e0 | ~uVar26 & uStack_3e8;
      uVar59 = uVar27 & uStack_3dc | ~uVar27 & uStack_3e4;
      uVar31 = uVar26 & uStack_3e8 | ~uVar26 & uStack_3e0;
      uVar36 = uVar27 & uStack_3e4 | ~uVar27 & uStack_3dc;
      uVar26 = (int)-(uint)(fVar72 < fVar73) >> 0x1f;
      uVar28 = (int)-(uint)(fVar35 < fVar66) >> 0x1f;
      fVar65 = (float)((uint)fVar72 & uVar26 | ~uVar26 & (uint)fVar73);
      fVar64 = (float)((uint)fVar66 & uVar28 | ~uVar28 & (uint)fVar35);
      uVar27 = uVar26 & uVar123 | ~uVar26 & uVar59;
      uVar55 = uVar28 & uVar36 | ~uVar28 & uVar31;
      uVar29 = (int)-(uint)(fVar65 < fVar64) >> 0x1f;
      auVar98._4_4_ = ~uVar29 & (uint)fVar65;
      auVar98._0_4_ = (uint)fVar73 & uVar26 | ~uVar26 & (uint)fVar72;
      auVar98._8_4_ = ~uVar29 & (uint)fVar64;
      auVar98._12_4_ = (uint)fVar35 & uVar28 | ~uVar28 & (uint)fVar66;
      auVar131._4_4_ = (uint)fVar65 & uVar29;
      auVar131._0_4_ = (uint)fVar64 & uVar29;
      auVar131._8_8_ = 0;
      _auStack_368 = auVar131 << 0x20 | auVar98;
      auStack_318._4_4_ = ~uVar29 & uVar27;
      auStack_318._0_4_ = uVar26 & uVar59 | ~uVar26 & uVar123;
      auStack_318._8_4_ = ~uVar29 & uVar55;
      auStack_318._12_4_ = uVar28 & uVar31 | ~uVar28 & uVar36;
      auVar120._4_4_ = uVar29 & uVar27;
      auVar120._0_4_ = uVar29 & uVar55;
      auVar120._8_8_ = 0;
      auStack_318 = auVar120 << 0x20 | auStack_318;
      auVar71._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar56);
      auVar71._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar56);
      auVar71._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar56);
      auVar71._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar56);
      iVar61 = movmskps((int)local_3d0,auVar71);
      *(undefined8 *)(puVar44 + lVar5 + -8) = 0x104917;
      uStack_3bc = uStack_3c0;
      uStack_39c = uStack_3a0;
      uStack_38c = uStack_390;
      uVar26 = __popcountdi2();
      _auStack_298 = _auStack_368;
      if (iVar61 == 0) {
        _auStack_298 = (undefined1  [16])0x0;
        uVar74 = 0;
        uVar82 = 0;
        fVar56 = 0.0;
        uVar83 = 0;
      }
      else {
        uStack_378 = (undefined8 *)auStack_298;
        uVar38 = (ulong)uVar26 << 2;
        lVar40 = (4 - (long)(int)uVar26) * 4;
        _auStack_2d8 = (undefined1  [16])0x0;
        puVar50 = (undefined8 *)auStack_2d8;
        puVar49 = (undefined8 *)((long)uStack_378 + lVar40);
        if (7 < (uint)uVar38) {
          for (uVar34 = uVar38 >> 3 & 0x1fffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
            *puVar50 = *puVar49;
            puVar49 = puVar49 + (ulong)bVar63 * -2 + 1;
            puVar50 = puVar50 + (ulong)bVar63 * -2 + 1;
          }
        }
        if ((uVar38 & 4) != 0) {
          *(undefined4 *)puVar50 = *(undefined4 *)puVar49;
        }
        puVar50 = (undefined8 *)(auStack_318 + lVar40);
        _auStack_298 = (undefined1  [16])0x0;
        puVar49 = uStack_378;
        if (7 < (uint)uVar38) {
          for (uVar34 = uVar38 >> 3 & 0x1fffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
            *puVar49 = *puVar50;
            puVar50 = puVar50 + (ulong)bVar63 * -2 + 1;
            puVar49 = puVar49 + (ulong)bVar63 * -2 + 1;
          }
        }
        uVar74 = auStack_2d8._0_4_;
        uVar82 = auStack_2d8._4_4_;
        fVar56 = fStack_2d0;
        uVar83 = uStack_2cc;
        if ((uVar38 & 4) != 0) {
          *(undefined4 *)puVar49 = *(undefined4 *)puVar50;
        }
      }
      _auStack_298 = (undefined1  [16])0x0;
      *(undefined4 *)pVVar1 = uVar74;
      *(undefined4 *)(pVVar1 + 4) = uVar82;
      *(float *)(pVVar1 + 8) = fVar56;
      *(undefined4 *)(pVVar1 + 0xc) = uVar83;
      (auStack_24c + lVar32)[0] = 0;
      (auStack_24c + lVar32)[1] = 0;
      *(undefined8 *)((long)auStack_244 + lVar60) = 0;
      auStack_318 = ZEXT816(0);
      local_250 = uVar26 + iStack_3b4;
    }
    else {
      lVar60 = *(long *)(local_258 + 0x60);
      HVar2 = local_258[0x55];
      uStack_3e8 = local_3ac * uVar55;
      uStack_474 = local_3ac * uVar27;
      uVar28 = local_3ac + uStack_3e8;
      uVar123 = local_3ac + uStack_474;
      uVar29 = uVar27 * 2 & 2;
      uVar38 = (ulong)(uVar29 | uVar26 & 1);
      iVar61 = local_40c + (uVar27 >> 1) * local_3d8;
      lVar32 = (ulong)((uVar55 >> 1) + iVar61) * 0x10 + lVar60;
      uVar4 = *(ushort *)(lVar32 + 8 + uVar38 * 2);
      fVar64 = (float)(byte)HVar2;
      uVar36 = (uint)*(ushort *)(lVar32 + uVar38 * 2);
      uVar31 = (uint)(byte)HVar2;
      uVar38 = uVar37;
      pfVar46 = pfStack_350;
      uVar59 = uStack_474;
      if (uStack_474 < uVar123) {
        do {
          uVar34 = uVar38;
          if (uStack_3e8 < uVar28) {
            HVar3 = local_258[0x54];
            lVar32 = *(long *)(local_258 + 0x68);
            fVar35 = *(float *)(local_258 + 0x20);
            fVar66 = *(float *)(local_258 + 0x24);
            fVar72 = *(float *)(local_258 + 0x28);
            fVar73 = *(float *)(local_258 + 0x2c);
            fVar86 = *(float *)(local_258 + 0x30);
            fVar89 = *(float *)(local_258 + 0x34);
            fVar91 = *(float *)(local_258 + 0x38);
            fVar84 = *(float *)(local_258 + 0x3c);
            iVar52 = (int)uVar38;
            uVar34 = uVar38 + lStack_358;
            uVar51 = (*(int *)(local_258 + 0x40) * uVar59 + uStack_3e8) * (uint)(byte)HVar3;
            pfVar54 = pfVar46;
            do {
              iVar58 = (int)uVar38;
              uVar30 = (int)(uint)*(ushort *)(lVar32 + (ulong)(uVar51 >> 3)) >> ((byte)uVar51 & 7) &
                       uVar31;
              *(bool *)uVar38 = HVar2 == SUB41(uVar30,0);
              uVar38 = uVar38 + 1;
              uVar51 = uVar51 + (byte)HVar3;
              *pfVar54 = (float)((uStack_3e8 - iVar52) + iVar58) * fVar86 + fVar35;
              pfVar54[1] = (((float)uVar30 + fVar65) * ((float)(int)(uVar4 - uVar36) / fVar64) +
                           (float)uVar36) * fVar89 + fVar66;
              pfVar54[2] = (float)uVar59 * fVar91 + fVar72;
              pfVar54[3] = (float)uVar59 * fVar84 + fVar73;
              pfVar54 = pfVar54 + 4;
            } while (uVar38 != uVar34);
            pfVar46 = pfVar46 + lStack_358 * 4;
          }
          uVar59 = uVar59 + 1;
          uVar38 = uVar34 + 1;
          pfVar46 = pfVar46 + 4;
        } while (uVar123 != uVar59);
      }
      fVar65 = _LC2;
      iStack_2e0 = iStack_414 + -1;
      if (uVar55 < local_3d4) {
        lVar32 = uVar37 + local_3ac;
        pfVar46 = pfStack_350 + (ulong)local_3ac * 4;
        uVar38 = (ulong)(uVar55 + 1 & 1 | uVar29);
        lVar40 = (ulong)((uVar55 + 1 >> 1) + iVar61) * 0x10 + lVar60;
        uVar4 = *(ushort *)(lVar40 + 8 + uVar38 * 2);
        uVar59 = (uint)*(ushort *)(lVar40 + uVar38 * 2);
        iStack_2e0 = iStack_414;
        if (uStack_474 < uVar123) {
          lVar40 = *(long *)(local_258 + 0x68);
          iVar61 = *(int *)(local_258 + 0x40);
          HVar3 = local_258[0x54];
          fVar35 = *(float *)(local_258 + 0x30);
          fVar66 = *(float *)(local_258 + 0x34);
          fVar72 = *(float *)(local_258 + 0x38);
          fVar73 = *(float *)(local_258 + 0x3c);
          fVar86 = *(float *)(local_258 + 0x20);
          fVar89 = *(float *)(local_258 + 0x24);
          fVar91 = *(float *)(local_258 + 0x28);
          fVar84 = *(float *)(local_258 + 0x2c);
          uVar36 = (iVar61 * uStack_474 + uVar28) * (uint)(byte)HVar3;
          uVar29 = uStack_474;
          do {
            uVar38 = (ulong)uVar29;
            uVar51 = (int)(uint)*(ushort *)(lVar40 + (ulong)(uVar36 >> 3)) >> ((byte)uVar36 & 7) &
                     uVar31;
            *(bool *)lVar32 = HVar2 == SUB41(uVar51,0);
            lVar32 = lVar32 + (ulong)local_3b0;
            uVar29 = uVar29 + 1;
            uVar36 = uVar36 + iVar61 * (uint)(byte)HVar3;
            *pfVar46 = (float)uVar28 * fVar35 + fVar86;
            pfVar46[1] = (((float)uVar51 + fVar65) * ((float)(int)(uVar4 - uVar59) / fVar64) +
                         (float)uVar59) * fVar66 + fVar89;
            pfVar46[2] = (float)uVar38 * fVar72 + fVar91;
            pfVar46[3] = (float)uVar38 * fVar73 + fVar84;
            pfVar46 = pfVar46 + (ulong)local_3b0 * 4;
          } while (uVar123 != uVar29);
        }
      }
      fVar65 = _LC2;
      if (uVar27 < local_3d4) {
        pfVar46 = pfStack_350 + uStack_510 * 4;
        uVar59 = (uVar27 + 1) * 2 & 2;
        uVar38 = (ulong)(uVar26 & 1 | uVar59);
        iVar61 = (uVar27 + 1 >> 1) * local_3d8 + local_40c;
        lVar32 = (ulong)(iVar61 + (uVar55 >> 1)) * 0x10 + lVar60;
        uVar4 = *(ushort *)(lVar32 + 8 + uVar38 * 2);
        uVar26 = (uint)*(ushort *)(lVar32 + uVar38 * 2);
        if (uStack_3e8 < uVar28) {
          HVar3 = local_258[0x54];
          lVar32 = *(long *)(local_258 + 0x68);
          fVar35 = *(float *)(local_258 + 0x30);
          fVar66 = *(float *)(local_258 + 0x34);
          fVar72 = *(float *)(local_258 + 0x38);
          fVar73 = *(float *)(local_258 + 0x3c);
          fVar86 = *(float *)(local_258 + 0x20);
          fVar89 = *(float *)(local_258 + 0x24);
          fVar91 = *(float *)(local_258 + 0x28);
          fVar84 = *(float *)(local_258 + 0x2c);
          uVar27 = (uVar123 * *(int *)(local_258 + 0x40) + uStack_3e8) * (uint)(byte)HVar3;
          uStack_3a8 = lStack_470;
          lVar40 = lStack_4f8;
          pfVar54 = pfVar46;
          do {
            uVar29 = (int)(uint)*(ushort *)(lVar32 + (ulong)(uVar27 >> 3)) >> ((byte)uVar27 & 7) &
                     uVar31;
            *(bool *)lVar40 = HVar2 == SUB41(uVar29,0);
            iVar52 = (int)lVar40;
            lVar40 = lVar40 + 1;
            uVar27 = uVar27 + (byte)HVar3;
            *pfVar54 = (float)((uStack_3e8 - (int)lStack_4f8) + iVar52) * fVar35 + fVar86;
            pfVar54[1] = (((float)uVar29 + fVar65) * ((float)(int)(uVar4 - uVar26) / fVar64) +
                         (float)uVar26) * fVar66 + fVar89;
            pfVar54[2] = (float)uVar123 * fVar72 + fVar91;
            pfVar54[3] = (float)uVar123 * fVar73 + fVar84;
            pfVar54 = pfVar54 + 4;
          } while (lVar40 != lStack_470);
          pfVar46 = pfVar46 + lStack_358 * 4;
        }
        else {
          uStack_3a8 = lStack_4f8;
        }
        fVar65 = _LC2;
        iStack_2dc = iStack_414;
        if (uVar55 < local_3d4) {
          uVar38 = (ulong)(uVar55 + 1 & 1 | uVar59);
          lVar60 = lVar60 + (ulong)((uVar55 + 1 >> 1) + iVar61) * 0x10;
          uVar4 = *(ushort *)(lVar60 + 8 + uVar38 * 2);
          uVar27 = (uint)*(ushort *)(lVar60 + uVar38 * 2);
          uVar26 = (*(int *)(local_258 + 0x40) * uVar123 + uVar28) * (uint)(byte)local_258[0x54];
          uVar31 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar26 >> 3)) >>
                   ((byte)uVar26 & 7) & uVar31;
          *(bool *)uStack_3a8 = HVar2 == SUB41(uVar31,0);
          fVar35 = *(float *)(local_258 + 0x34);
          fVar66 = *(float *)(local_258 + 0x38);
          fVar72 = *(float *)(local_258 + 0x3c);
          fVar73 = *(float *)(local_258 + 0x24);
          fVar86 = *(float *)(local_258 + 0x28);
          fVar89 = *(float *)(local_258 + 0x2c);
          *pfVar46 = (float)uVar28 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
          pfVar46[1] = (((float)uVar31 + fVar65) * ((float)(int)(uVar4 - uVar27) / fVar64) +
                       (float)uVar27) * fVar35 + fVar73;
          pfVar46[2] = (float)uVar123 * fVar66 + fVar86;
          pfVar46[3] = (float)uVar123 * fVar72 + fVar89;
        }
      }
      else {
        iStack_2dc = ((uVar123 - uStack_410) + -1) - uStack_474;
      }
      uVar82 = _LC17;
      uVar74 = _LC15;
      lVar60 = 0;
      piVar39 = (int *)auStack_318;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uStack_4f0;
      auStack_318 = auVar24 << 0x40;
      uVar96 = CONCAT44(_LC15,_LC15);
      uVar92 = CONCAT44(_LC17,_LC17);
      auStack_304 = SUB1612((undefined1  [16])0x0,4);
      uStack_308 = uStack_410;
      uStack_2f8 = 0;
      auStack_304._4_4_ = iStack_2e0;
      auStack_304._8_4_ = uStack_410;
      uStack_2e4 = uStack_410;
      uStack_2f4 = CONCAT44(uStack_410,uStack_410);
      uStack_2ec = CONCAT44(uStack_410,iStack_2dc);
      do {
        uVar38 = (ulong)(local_3b0 * piVar39[1] + *piVar39);
        uVar26 = piVar39[2];
        pcVar33 = (char *)(uVar38 + uVar37);
        pauVar53 = (undefined1 (*) [16])(pfStack_350 + uVar38 * 4);
        if (piVar39[3] == -1) {
          auVar67._8_4_ = uVar74;
          auVar67._0_8_ = uVar96;
          auVar67._12_4_ = uVar74;
          auVar75._8_4_ = uVar82;
          auVar75._0_8_ = uVar92;
          auVar75._12_4_ = uVar82;
        }
        else {
          auVar67._8_4_ = uVar74;
          auVar67._0_8_ = uVar96;
          auVar67._12_4_ = uVar74;
          auVar75._8_4_ = uVar82;
          auVar75._0_8_ = uVar92;
          auVar75._12_4_ = uVar82;
          iVar61 = 0;
          do {
            pcVar25 = pcVar33 + (ulong)uVar26 + 1;
            pauVar47 = pauVar53;
            if (uVar26 != 0xffffffff) {
              do {
                if (*pcVar33 == '\0') {
                  auVar75 = minps(auVar75,*pauVar47);
                  auVar67 = maxps(auVar67,*pauVar47);
                }
                pcVar33 = pcVar33 + 1;
                pauVar47 = pauVar47 + 1;
              } while (pcVar33 != pcVar25);
              pauVar53 = pauVar53 + (ulong)uVar26 + 1;
              pcVar33 = pcVar25;
            }
            pauVar53 = pauVar53 + (local_3ac - uVar26);
            pcVar33 = pcVar33 + (local_3ac - uVar26);
            bVar62 = piVar39[3] != iVar61;
            iVar61 = iVar61 + 1;
          } while (bVar62);
        }
        *(undefined1 (*) [16])(auStack_2d8 + lVar60) = auVar75;
        piVar39 = piVar39 + 4;
        *(undefined1 (*) [16])(auStack_298 + lVar60) = auVar67;
        lVar60 = lVar60 + 0x10;
      } while (lVar60 != 0x40);
      uStack_390 = *(uint *)(local_3d0 + 0x40);
      uStack_3a0 = *(uint *)(local_3d0 + 0x44);
      uStack_3c0 = *(uint *)(local_3d0 + 0x48);
      fStack_488 = *(float *)(local_3d0 + 0x10);
      fStack_484 = *(float *)(local_3d0 + 0x14);
      fStack_480 = *(float *)(local_3d0 + 0x18);
      uStack_47c = *(undefined4 *)(local_3d0 + 0x1c);
      fVar89 = (float)uStack_2c8;
      fVar91 = (float)((ulong)uStack_2c8 >> 0x20);
      fVar64 = (float)uStack_2a8;
      fVar66 = (float)((ulong)uStack_2a8 >> 0x20);
      uStack_3c8 = CONCAT44(uStack_3c0,uStack_3c0);
      fVar73 = (float)uStack_288;
      fVar86 = (float)((ulong)uStack_288 >> 0x20);
      fVar35 = (float)uStack_268;
      fVar72 = (float)((ulong)uStack_268 >> 0x20);
      fVar65 = *(float *)(local_3d0 + 0x30);
      fStack_36c = *(float *)(local_3d0 + 0x34);
      fStack_37c = *(float *)(local_3d0 + 0x38);
      uStack_3a8 = CONCAT44(uStack_3a0,uStack_3a0);
      _uStack_398 = CONCAT44(uStack_390,uStack_390);
      auVar76._0_8_ =
           CONCAT44((fVar89 - fStack_488) * fVar65,((float)auStack_2d8._0_4_ - fStack_488) * fVar65)
      ;
      auVar76._8_4_ = (fStack_2b8 - fStack_488) * fVar65;
      auVar76._12_4_ = (fVar64 - fStack_488) * fVar65;
      auStack_428._0_8_ =
           CONCAT44((fVar91 - fStack_484) * fStack_36c,
                    ((float)auStack_2d8._4_4_ - fStack_484) * fStack_36c);
      auStack_428._8_4_ = (fStack_2b4 - fStack_484) * fStack_36c;
      auStack_428._12_4_ = (fVar66 - fStack_484) * fStack_36c;
      auStack_368._4_4_ = (fStack_2c0 - fStack_480) * fStack_37c;
      auStack_368._0_4_ = (fStack_2d0 - fStack_480) * fStack_37c;
      fStack_360 = (fStack_2b0 - fStack_480) * fStack_37c;
      fStack_35c = (fStack_2a0 - fStack_480) * fStack_37c;
      auStack_438._0_4_ = ((float)auStack_298._0_4_ - fStack_488) * fVar65;
      auStack_438._4_4_ = (fVar73 - fStack_488) * fVar65;
      auStack_438._8_4_ = (fStack_278 - fStack_488) * fVar65;
      auStack_438._12_4_ = (fVar35 - fStack_488) * fVar65;
      uStack_378._0_4_ = ((float)auStack_298._4_4_ - fStack_484) * fStack_36c;
      uStack_378._4_4_ = (fVar86 - fStack_484) * fStack_36c;
      fStack_370 = (fStack_274 - fStack_484) * fStack_36c;
      fStack_36c = (fVar72 - fStack_484) * fStack_36c;
      fStack_388 = (fStack_290 - fStack_480) * fStack_37c;
      fStack_384 = (fStack_280 - fStack_480) * fStack_37c;
      fStack_380 = (fStack_270 - fStack_480) * fStack_37c;
      fStack_37c = (fStack_260 - fStack_480) * fStack_37c;
      auVar119._8_4_ = auVar76._8_4_;
      auVar119._0_8_ = auVar76._0_8_;
      auVar119._12_4_ = auVar76._12_4_;
      auVar120 = minps(auVar119,auStack_438);
      uVar26 = (int)uStack_390 >> 0x1f;
      auVar130._8_4_ = auStack_428._8_4_;
      auVar130._0_8_ = auStack_428._0_8_;
      auVar130._12_4_ = auStack_428._12_4_;
      uStack_448 = _LC19 & uVar26 | ~uVar26 & auVar120._0_4_;
      uStack_444 = _UNK_00116644 & uVar26 | ~uVar26 & auVar120._4_4_;
      uStack_440 = _UNK_00116648 & uVar26 | ~uVar26 & auVar120._8_4_;
      uStack_43c = _UNK_0011664c & uVar26 | ~uVar26 & auVar120._12_4_;
      auVar19._4_4_ = uStack_378._4_4_;
      auVar19._0_4_ = (float)uStack_378;
      auVar19._8_4_ = fStack_370;
      auVar19._12_4_ = fStack_36c;
      auVar131 = minps(auVar130,auVar19);
      auVar120 = maxps(auVar76,auStack_438);
      uVar28 = (int)uStack_3a0 >> 0x1f;
      pVVar1 = local_3d0 + (long)iStack_3b4 * 4 + 100;
      uStack_458 = _LC19 & uVar28 | ~uVar28 & auVar131._0_4_;
      uStack_454 = _UNK_00116644 & uVar28 | ~uVar28 & auVar131._4_4_;
      uStack_450 = _UNK_00116648 & uVar28 | ~uVar28 & auVar131._8_4_;
      uStack_44c = _UNK_0011664c & uVar28 | ~uVar28 & auVar131._12_4_;
      auVar15._4_4_ = fStack_384;
      auVar15._0_4_ = fStack_388;
      auVar15._8_4_ = fStack_380;
      auVar15._12_4_ = fStack_37c;
      auVar131 = minps(_auStack_368,auVar15);
      uVar27 = (int)uStack_3c0 >> 0x1f;
      uStack_468 = _LC19 & uVar27 | ~uVar27 & auVar131._0_4_;
      uStack_464 = _UNK_00116644 & uVar27 | ~uVar27 & auVar131._4_4_;
      uStack_460 = _UNK_00116648 & uVar27 | ~uVar27 & auVar131._8_4_;
      uStack_45c = _UNK_0011664c & uVar27 | ~uVar27 & auVar131._12_4_;
      auVar77._0_4_ = ~uVar26 & auVar120._0_4_;
      auVar77._4_4_ = ~uVar26 & auVar120._4_4_;
      auVar77._8_4_ = ~uVar26 & auVar120._8_4_;
      auVar77._12_4_ = ~uVar26 & auVar120._12_4_;
      auVar93._0_4_ = uVar26 & _LC13;
      auVar93._4_4_ = uVar26 & _UNK_00116654;
      auVar93._8_4_ = uVar26 & _UNK_00116658;
      auVar93._12_4_ = uVar26 & _UNK_0011665c;
      auVar20._4_4_ = uStack_378._4_4_;
      auVar20._0_4_ = (float)uStack_378;
      auVar20._8_4_ = fStack_370;
      auVar20._12_4_ = fStack_36c;
      auVar120 = maxps(auStack_428,auVar20);
      auVar121._0_4_ = uVar28 & _LC13;
      auVar121._4_4_ = uVar28 & _UNK_00116654;
      auVar121._8_4_ = uVar28 & _UNK_00116658;
      auVar121._12_4_ = uVar28 & _UNK_0011665c;
      auVar78._0_4_ = ~uVar28 & auVar120._0_4_;
      auVar78._4_4_ = ~uVar28 & auVar120._4_4_;
      auVar78._8_4_ = ~uVar28 & auVar120._8_4_;
      auVar78._12_4_ = ~uVar28 & auVar120._12_4_;
      auVar16._4_4_ = fStack_384;
      auVar16._0_4_ = fStack_388;
      auVar16._8_4_ = fStack_380;
      auVar16._12_4_ = fStack_37c;
      auVar131 = maxps(_auStack_368,auVar16);
      auVar115._0_4_ = uVar27 & _LC13;
      auVar115._4_4_ = uVar27 & _UNK_00116654;
      auVar115._8_4_ = uVar27 & _UNK_00116658;
      auVar115._12_4_ = uVar27 & _UNK_0011665c;
      auVar120 = minps(auVar93 | auVar77,auVar121 | auVar78);
      auVar79._0_4_ = ~uVar27 & auVar131._0_4_;
      auVar79._4_4_ = ~uVar27 & auVar131._4_4_;
      auVar79._8_4_ = ~uVar27 & auVar131._8_4_;
      auVar79._12_4_ = ~uVar27 & auVar131._12_4_;
      auVar14._4_4_ = uStack_444;
      auVar14._0_4_ = uStack_448;
      auVar14._8_4_ = uStack_440;
      auVar14._12_4_ = uStack_43c;
      auVar13._4_4_ = uStack_454;
      auVar13._0_4_ = uStack_458;
      auVar13._8_4_ = uStack_450;
      auVar13._12_4_ = uStack_44c;
      auVar131 = maxps(auVar14,auVar13);
      auVar120 = minps(auVar120,auVar115 | auVar79);
      auVar12._4_4_ = uStack_464;
      auVar12._0_4_ = uStack_468;
      auVar12._8_4_ = uStack_460;
      auVar12._12_4_ = uStack_45c;
      auVar131 = maxps(auVar131,auVar12);
      uVar26 = (int)(-(uint)(fStack_484 < (float)auStack_2d8._4_4_ ||
                            (float)auStack_298._4_4_ < fStack_484) & uStack_3a0 |
                     -(uint)(fStack_488 < (float)auStack_2d8._0_4_ ||
                            (float)auStack_298._0_4_ < fStack_488) & uStack_390 |
                     -(uint)(((float)auStack_298._0_4_ < (float)auStack_2d8._0_4_ ||
                             (float)auStack_298._4_4_ < (float)auStack_2d8._4_4_) ||
                            (auVar120._0_4_ < auVar131._0_4_ || auVar120._0_4_ < 0.0)) |
                    uStack_3c0 & -(uint)(fStack_480 < fStack_2d0 || fStack_290 < fStack_480) |
                    -(uint)(fStack_290 < fStack_2d0)) >> 0x1f;
      uVar27 = (int)(-(uint)(fStack_484 < fVar91 || fVar86 < fStack_484) & uStack_3a0 |
                     -(uint)(fStack_488 < fVar89 || fVar73 < fStack_488) & uStack_390 |
                     -(uint)((fVar73 < fVar89 || fVar86 < fVar91) ||
                            (auVar120._4_4_ < auVar131._4_4_ || auVar120._4_4_ < 0.0)) |
                    uStack_3c0 & -(uint)(fStack_480 < fStack_2c0 || fStack_280 < fStack_480) |
                    -(uint)(fStack_280 < fStack_2c0)) >> 0x1f;
      uVar28 = (int)(-(uint)(fStack_484 < fStack_2b4 || fStack_274 < fStack_484) & uStack_3a0 |
                     -(uint)(fStack_488 < fStack_2b8 || fStack_278 < fStack_488) & uStack_390 |
                     -(uint)((fStack_278 < fStack_2b8 || fStack_274 < fStack_2b4) ||
                            (auVar120._8_4_ < auVar131._8_4_ || auVar120._8_4_ < 0.0)) |
                    uStack_3c0 & -(uint)(fStack_480 < fStack_2b0 || fStack_270 < fStack_480) |
                    -(uint)(fStack_270 < fStack_2b0)) >> 0x1f;
      uVar55 = (int)(-(uint)(fStack_484 < fVar66 || fVar72 < fStack_484) & uStack_3a0 |
                     -(uint)(fStack_488 < fVar64 || fVar35 < fStack_488) & uStack_390 |
                     -(uint)((fVar35 < fVar64 || fVar72 < fVar66) ||
                            (auVar120._12_4_ < auVar131._12_4_ || auVar120._12_4_ < 0.0)) |
                    uStack_3c0 & -(uint)(fStack_480 < fStack_2a0 || fStack_260 < fStack_480) |
                    -(uint)(fStack_260 < fStack_2a0)) >> 0x1f;
      fVar65 = (float)(uVar26 & _LC13 | ~uVar26 & (uint)auVar131._0_4_);
      fVar64 = (float)(uVar27 & _UNK_00116654 | ~uVar27 & (uint)auVar131._4_4_);
      fVar35 = (float)(uVar28 & _UNK_00116658 | ~uVar28 & (uint)auVar131._8_4_);
      fVar66 = (float)(uVar55 & _UNK_0011665c | ~uVar55 & (uint)auVar131._12_4_);
      uVar26 = (int)-(uint)(fVar65 < fVar35) >> 0x1f;
      uVar27 = (int)-(uint)(fVar64 < fVar66) >> 0x1f;
      fVar72 = (float)((uint)fVar35 & uVar26 | ~uVar26 & (uint)fVar65);
      fVar73 = (float)((uint)fVar66 & uVar27 | ~uVar27 & (uint)fVar64);
      fVar35 = (float)((uint)fVar65 & uVar26 | ~uVar26 & (uint)fVar35);
      fVar66 = (float)((uint)fVar64 & uVar27 | ~uVar27 & (uint)fVar66);
      uVar123 = uVar26 & __LC32 | ~uVar26 & __LC49;
      uVar59 = uVar27 & _UNK_001166d4 | ~uVar27 & _UNK_00116664;
      uVar31 = uVar26 & _UNK_001166d8 | ~uVar26 & _UNK_00116668;
      uVar36 = uVar27 & _UNK_001166dc | ~uVar27 & _UNK_0011666c;
      uVar26 = (int)-(uint)(fVar72 < fVar73) >> 0x1f;
      uVar28 = (int)-(uint)(fVar35 < fVar66) >> 0x1f;
      fVar65 = (float)((uint)fVar72 & uVar26 | ~uVar26 & (uint)fVar73);
      fVar64 = (float)((uint)fVar66 & uVar28 | ~uVar28 & (uint)fVar35);
      uVar27 = uVar26 & uVar123 | ~uVar26 & uVar59;
      uVar55 = uVar28 & uVar36 | ~uVar28 & uVar31;
      uVar29 = (int)-(uint)(fVar65 < fVar64) >> 0x1f;
      auVar103._4_4_ = ~uVar29 & (uint)fVar65;
      auVar103._0_4_ = (uint)fVar73 & uVar26 | ~uVar26 & (uint)fVar72;
      auVar103._8_4_ = ~uVar29 & (uint)fVar64;
      auVar103._12_4_ = (uint)fVar35 & uVar28 | ~uVar28 & (uint)fVar66;
      auVar11._4_4_ = (uint)fVar65 & uVar29;
      auVar11._0_4_ = (uint)fVar64 & uVar29;
      auVar11._8_8_ = 0;
      _auStack_368 = auVar11 << 0x20 | auVar103;
      auStack_348._4_4_ = ~uVar29 & uVar27;
      auStack_348._0_4_ = uVar26 & uVar59 | ~uVar26 & uVar123;
      auStack_348._8_4_ = ~uVar29 & uVar55;
      auStack_348._12_4_ = uVar28 & uVar31 | ~uVar28 & uVar36;
      auVar10._4_4_ = uVar29 & uVar27;
      auVar10._0_4_ = uVar29 & uVar55;
      auVar10._8_8_ = 0;
      auStack_348 = auVar10 << 0x20 | auStack_348;
      auVar68._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar56);
      auVar68._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar56);
      auVar68._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar56);
      auVar68._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar56);
      iVar61 = movmskps((int)pauVar53,auVar68);
      *(undefined8 *)(puVar44 + lVar5 + -8) = 0x103ddc;
      uStack_3bc = uStack_3c0;
      uStack_39c = uStack_3a0;
      uStack_38c = uStack_390;
      uVar26 = __popcountdi2();
      auStack_328 = _auStack_368;
      if (iVar61 != 0) {
        uVar38 = (ulong)uVar26 << 2;
        puVar50 = (undefined8 *)auStack_328;
        lVar60 = (4 - (long)(int)uVar26) * 4;
        auStack_338 = (undefined1  [16])0x0;
        puVar49 = (undefined8 *)auStack_338;
        puVar48 = (undefined8 *)((long)puVar50 + lVar60);
        if (7 < (uint)uVar38) {
          for (uVar34 = uVar38 >> 3 & 0x1fffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
            *puVar49 = *puVar48;
            puVar48 = puVar48 + (ulong)bVar63 * -2 + 1;
            puVar49 = puVar49 + (ulong)bVar63 * -2 + 1;
          }
        }
        if ((uVar38 & 4) != 0) {
          *(undefined4 *)puVar49 = *(undefined4 *)puVar48;
        }
        puVar49 = (undefined8 *)(auStack_348 + lVar60);
        auStack_328 = (undefined1  [16])0x0;
        if (7 < (uint)uVar38) {
          for (uVar34 = uVar38 >> 3 & 0x1fffffff; uVar34 != 0; uVar34 = uVar34 - 1) {
            *puVar50 = *puVar49;
            puVar49 = puVar49 + (ulong)bVar63 * -2 + 1;
            puVar50 = puVar50 + (ulong)bVar63 * -2 + 1;
          }
        }
        if ((uVar38 & 4) != 0) {
          *(undefined4 *)puVar50 = *(undefined4 *)puVar49;
        }
        uVar26 = uVar26 - 1;
        *(undefined1 (*) [16])pVVar1 = auStack_338;
        uVar34 = CONCAT44(0,local_3b0);
        uVar92 = auStack_408._0_8_;
        uVar38 = (ulong)(local_3ac + 2);
        auStack_368 = (undefined1  [8])uVar34;
        auStack_348 = auStack_328;
        uStack_378 = (undefined8 *)(uVar38 * 0x10);
        uStack_3c8 = uVar34 * 0x10;
        do {
          lVar60 = (ulong)*(uint *)(auStack_348 + (ulong)uVar26 * 4) * 0x10;
          iVar61 = *(int *)(auStack_318 + lVar60 + 8);
          uVar27 = uStack_474 + *(int *)(auStack_318 + lVar60 + 4);
          fVar56 = (float)(*(int *)(auStack_318 + lVar60) + uStack_3e8);
          uVar28 = *(int *)(auStack_318 + lVar60 + 0xc) + uVar27;
          if (uVar27 < uVar28) {
            _uStack_398 = CONCAT44(uStack_394,local_3b0);
            auStack_408._0_4_ = uStack_474;
            uStack_3a8 = CONCAT44(uStack_3a8._4_4_,uVar28);
            iVar52 = *(int *)(auStack_318 + lVar60 + 4) * local_3b0 - uStack_3e8;
            auStack_428._0_4_ = uVar26;
            do {
              fVar64 = _LC4;
              fVar65 = _LC24;
              fVar35 = fVar56;
              fStack_388 = fVar56;
              if ((uint)fVar56 < (uint)(iVar61 + (int)fVar56)) {
                do {
                  pcVar33 = (char *)(uVar37 + (long)((int)fVar35 + iVar52));
                  if ((*pcVar33 == '\0') && (pcVar33[uVar38] == '\0')) {
                    pfVar46 = pfStack_350 + (long)((int)fVar35 + iVar52) * 4;
                    if (pcVar33[uVar34] == '\0') {
                      fVar86 = *pfVar46;
                      fVar89 = pfVar46[1];
                      fVar91 = pfVar46[2];
                      iVar58 = 0;
                      auVar108 = SUB1612(*(undefined1 (*) [16])(pfVar46 + uVar34 * 4),0);
                      pfVar54 = pfVar46 + uVar38 * 4;
                      fVar66 = *pfVar54;
                      fVar72 = pfVar54[1];
                      fVar73 = pfVar54[2];
                      goto LAB_00103ff0;
                    }
                    do {
                      if (pcVar33[1] != '\0') break;
                      fVar86 = *pfVar46;
                      fVar89 = pfVar46[1];
                      fVar91 = pfVar46[2];
                      fVar66 = pfVar46[4];
                      fVar72 = pfVar46[5];
                      fVar73 = pfVar46[6];
                      iVar58 = 1;
                      auVar108 = SUB1612(*(undefined1 (*) [16])(pfVar46 + uVar38 * 4),0);
LAB_00103ff0:
                      fVar66 = fVar66 - fVar86;
                      fVar72 = fVar72 - fVar89;
                      fVar73 = fVar73 - fVar91;
                      fVar107 = auVar108._0_4_ - fVar86;
                      fVar113 = auVar108._4_4_ - fVar89;
                      fVar114 = auVar108._8_4_ - fVar91;
                      fVar84 = fVar72 * *(float *)(local_3d0 + 0x20) -
                               *(float *)(local_3d0 + 0x24) * fVar66;
                      fVar88 = fVar73 * *(float *)(local_3d0 + 0x24) -
                               *(float *)(local_3d0 + 0x28) * fVar72;
                      fVar90 = fVar66 * *(float *)(local_3d0 + 0x28) -
                               *(float *)(local_3d0 + 0x20) * fVar73;
                      fVar85 = fVar114 * fVar84 + fVar113 * fVar90 + fVar107 * fVar88 + 0.0;
                      auVar94._0_4_ = 0.0 - fVar85;
                      auVar132._4_4_ = fVar85;
                      auVar132._0_4_ = fVar85;
                      auVar132._8_4_ = fVar85;
                      auVar132._12_4_ = fVar85;
                      auVar94._4_4_ = auVar94._0_4_;
                      auVar94._8_4_ = auVar94._0_4_;
                      auVar94._12_4_ = auVar94._0_4_;
                      auVar120 = maxps(auVar94,auVar132);
                      bVar62 = auVar120._0_4_ < fVar65;
                      uVar55 = (int)-(uint)bVar62 >> 0x1f;
                      uVar123 = (int)-(uint)(auVar120._4_4_ < fVar65) >> 0x1f;
                      uVar59 = (int)-(uint)(auVar120._8_4_ < fVar65) >> 0x1f;
                      uVar29 = (int)-(uint)(auVar120._12_4_ < fVar65) >> 0x1f;
                      auVar122._0_4_ = uVar55 & (uint)fVar64;
                      auVar122._4_4_ = uVar123 & (uint)fVar64;
                      auVar122._8_4_ = uVar59 & (uint)fVar64;
                      auVar122._12_4_ = uVar29 & (uint)fVar64;
                      auVar87._0_4_ = ~uVar55 & (uint)fVar85;
                      auVar87._4_4_ = ~uVar123 & (uint)fVar85;
                      auVar87._8_4_ = ~uVar59 & (uint)fVar85;
                      auVar87._12_4_ = ~uVar29 & (uint)fVar85;
                      auVar122 = auVar122 | auVar87;
                      fVar86 = fStack_488 - fVar86;
                      fVar89 = fStack_484 - fVar89;
                      fVar91 = fStack_480 - fVar91;
                      fVar85 = fVar113 * fVar86 - fVar89 * fVar107;
                      fVar113 = fVar114 * fVar89 - fVar91 * fVar113;
                      fVar107 = fVar107 * fVar91 - fVar86 * fVar114;
                      auVar116._0_4_ = fVar84 * fVar91 + fVar89 * fVar90 + fVar86 * fVar88 + 0.0;
                      auVar116._4_4_ = auVar116._0_4_;
                      auVar116._8_4_ = auVar116._0_4_;
                      auVar116._12_4_ = auVar116._0_4_;
                      auVar117 = divps(auVar116,auVar122);
                      auVar109._0_4_ =
                           (float)*(long *)(local_3d0 + 0x28) * fVar85 +
                           (float)((ulong)*(long *)(local_3d0 + 0x20) >> 0x20) * fVar107 +
                           (float)*(long *)(local_3d0 + 0x20) * fVar113 + 0.0;
                      auVar109._4_4_ = auVar109._0_4_;
                      auVar109._8_4_ = auVar109._0_4_;
                      auVar109._12_4_ = auVar109._0_4_;
                      auVar131 = divps(auVar109,auVar122);
                      auVar69._0_4_ = fVar73 * fVar85 + fVar72 * fVar107 + fVar66 * fVar113 + 0.0;
                      auVar69._4_4_ = auVar69._0_4_;
                      auVar69._8_4_ = auVar69._0_4_;
                      auVar69._12_4_ = auVar69._0_4_;
                      auVar120 = divps(auVar69,auVar122);
                      uVar55 = (int)-(uint)(((auVar117._0_4_ < 0.0 || bVar62) ||
                                            (auVar131._0_4_ < 0.0 ||
                                            fVar64 < auVar117._0_4_ + auVar131._0_4_)) ||
                                           auVar120._0_4_ < 0.0) >> 0x1f;
                      fVar72 = (float)(uVar55 & _LC13 | ~uVar55 & (uint)auVar120._0_4_);
                      fVar66 = *(float *)(uVar92 + 4);
                      if (fVar72 < *(float *)(uVar92 + 4)) {
                        lVar60 = *(long *)(local_3d0 + 0x50);
                        *(float *)(uVar92 + 4) = fVar72;
                        iVar57 = 1;
                        uVar55 = *(int *)(lVar60 + 0x40) - 1;
                        if (uVar55 != 0) {
                          iVar57 = 0x1f;
                          if (uVar55 != 0) {
                            for (; uVar55 >> iVar57 == 0; iVar57 = iVar57 + -1) {
                            }
                          }
                          iVar57 = (int)(1L << ((char)iVar57 * '\x02' + 3U & 0x3f)) + -1;
                        }
                        *(uint *)(uVar92 + 8) =
                             iVar58 + (*(int *)(lVar60 + 0x40) * uVar27 + (int)fVar35) * 2 <<
                             ((byte)*(undefined4 *)(local_3d0 + 0x5c) & 0x1f) |
                             ~(iVar57 << ((byte)*(undefined4 *)(local_3d0 + 0x5c) & 0x1f)) &
                             *(uint *)(local_3d0 + 0x58);
                        local_3d0[0x60] = (Visitor)0x1;
                        fVar66 = fVar72;
                      }
                      puVar41 = puVar44 + lVar5;
                      if (fVar66 <= 0.0) goto LAB_00103338;
                    } while (iVar58 != 1);
                  }
                  fVar35 = (float)((int)fVar35 + 1);
                } while ((float)(iVar61 + (int)fVar56) != fVar35);
              }
              uVar27 = uVar27 + 1;
              iVar52 = iVar52 + local_3b0;
            } while (uVar28 != uVar27);
          }
          iVar61 = uVar26 - 1;
          iVar52 = iVar61 + iStack_3b4;
          lVar60 = (long)iVar61;
          while( true ) {
            if (iVar61 == -1) goto LAB_00104261;
            if (*(float *)(local_3d0 + lVar60 * 4 + ((long)iVar52 - (long)(int)uVar26) * 4 + 0x68)
                <= *(float *)(uVar92 + 4) &&
                *(float *)(uVar92 + 4) !=
                *(float *)(local_3d0 + lVar60 * 4 + ((long)iVar52 - (long)(int)uVar26) * 4 + 0x68))
            break;
            iVar61 = (int)(lVar60 + -1);
            lVar60 = lVar60 + -1;
          }
          uVar26 = (uint)lVar60;
        } while( true );
      }
      *(undefined1 (*) [16])pVVar1 = (undefined1  [16])0x0;
    }
LAB_00104261:
    fVar56 = *(float *)(*(long *)local_3d0 + 4);
    auStack_408._0_8_ = *(long *)local_3d0;
    puVar41 = puVar44 + lVar5;
    if (fVar56 <= 0.0) goto LAB_00103338;
    lVar60 = (long)(local_250 + -1);
    do {
      iVar61 = (int)lVar60;
      puVar41 = puVar44 + lVar5;
      if (iVar61 < 0) goto LAB_00103338;
      lVar32 = lVar60 * 4;
      lVar60 = lVar60 + -1;
    } while (fVar56 < *(float *)(local_3d0 + lVar32 + 100) ||
             fVar56 == *(float *)(local_3d0 + lVar32 + 100));
    local_250 = iVar61;
    uVar26 = auStack_24c[iVar61];
  } while( true );
}



/* JPH::HeightFieldShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

undefined1 __thiscall
JPH::HeightFieldShape::CastRay
          (HeightFieldShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3
          )

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  RayCastResult *local_288 [2];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  HeightFieldShape *local_238;
  undefined8 local_230;
  undefined1 local_228;
  long local_10;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_278 = *(undefined8 *)param_1;
  uStack_270 = *(undefined8 *)(param_1 + 8);
  local_268 = *(undefined8 *)(param_1 + 0x10);
  uStack_260 = *(undefined8 *)(param_1 + 0x18);
  auVar2._0_4_ = 0.0 - auVar1._0_4_;
  auVar2._4_4_ = 0.0 - auVar1._4_4_;
  auVar2._8_4_ = 0.0 - auVar1._8_4_;
  auVar2._12_4_ = 0.0 - auVar1._12_4_;
  local_230 = *(undefined8 *)param_2;
  auVar3 = maxps(auVar2,auVar1);
  local_228 = 0;
  local_248 = -(uint)(auVar3._0_4_ <= _LC34);
  iStack_244 = -(uint)(auVar3._4_4_ <= _LC34);
  iStack_240 = -(uint)(auVar3._8_4_ <= _LC34);
  iStack_23c = -(uint)(auVar3._12_4_ <= _LC34);
  auVar5._4_4_ = _LC4;
  auVar5._0_4_ = _LC4;
  auVar5._8_4_ = _LC4;
  auVar5._12_4_ = _LC4;
  auVar4._0_4_ = local_248 >> 0x1f & _LC4;
  auVar4._4_4_ = iStack_244 >> 0x1f & _LC4;
  auVar4._8_4_ = iStack_240 >> 0x1f & _LC4;
  auVar4._12_4_ = iStack_23c >> 0x1f & _LC4;
  auVar3._4_4_ = ~(iStack_244 >> 0x1f) & (uint)auVar1._4_4_;
  auVar3._0_4_ = ~(local_248 >> 0x1f) & (uint)auVar1._0_4_;
  auVar3._8_4_ = ~(iStack_240 >> 0x1f) & (uint)auVar1._8_4_;
  auVar3._12_4_ = ~(iStack_23c >> 0x1f) & (uint)auVar1._12_4_;
  local_258 = divps(auVar5,auVar4 | auVar3);
  local_288[0] = param_3;
  local_238 = this;
  WalkHeightField<JPH::HeightFieldShape::CastRay(JPH::RayCast_const&,JPH::SubShapeIDCreator_const&,JPH::RayCastResult&)const::Visitor>
            (this,(Visitor *)local_288);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_228;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::HeightFieldShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(HeightFieldShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti,
                      "HeightFieldShapeSettings",0xd0,
                      GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::HeightFieldShapeSettings*)::{lambda(void*)#1}::_FUN,
                      HeightFieldShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::HeightFieldShapeSettings*)::rtti;
}



/* JPH::HeightFieldShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::HeightFieldShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((HeightFieldShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::HeightFieldShapeSettings::HeightFieldShapeSettings(float const*, JPH::Vec3, JPH::Vec3,
   unsigned int, unsigned char const*, JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > > const&) */

void __thiscall
JPH::HeightFieldShapeSettings::HeightFieldShapeSettings
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          HeightFieldShapeSettings *this,long param_1,int param_7,long param_8,
          HeightFieldShapeSettings *param_9)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  
  *(undefined ***)this = &PTR_GetRTTI_00116408;
  uVar9 = _LC38;
  lVar14 = (ulong)(uint)(param_7 * param_7) * 4;
  *(undefined8 *)(this + 0x40) = param_1_00;
  *(undefined8 *)(this + 100) = uVar9;
  uVar9 = _LC39;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x38] = (HeightFieldShapeSettings)0x0;
  *(int *)(this + 0x60) = param_7;
  *(undefined8 *)(this + 0x6c) = uVar9;
  *(undefined4 *)(this + 0x74) = 8;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x48) = param_2;
  *(undefined8 *)(this + 0x50) = param_3;
  *(undefined8 *)(this + 0x58) = param_4;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f7f06a3;
  if ((ulong)(uint)(param_7 * param_7) != 0) {
    lVar6 = (*Reallocate)(0,0,lVar14);
    *(long *)(this + 0x80) = lVar14 >> 2;
    *(long *)(this + 0x88) = lVar6;
    if (param_1 + lVar14 != param_1) {
      lVar4 = *(long *)(this + 0x78);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar6 + lVar4 * 4 + lVar7) = *(undefined4 *)(param_1 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar14 != lVar7);
      *(ulong *)(this + 0x78) = lVar4 + 1 + (((param_1 + lVar14) - param_1) - 4U >> 2);
    }
  }
  if ((*(long *)param_9 != 0) && (param_8 != 0)) {
    *(undefined8 *)(this + 0x90) = 0;
    uVar17 = (ulong)(uint)((param_7 + -1) * (param_7 + -1));
    if (*(ulong *)(this + 0x98) < uVar17) {
      uVar9 = (*Reallocate)(*(undefined8 *)(this + 0xa0),*(ulong *)(this + 0x98),uVar17);
      *(ulong *)(this + 0x98) = uVar17;
      *(undefined8 *)(this + 0xa0) = uVar9;
    }
    if (param_8 + uVar17 != param_8) {
      lVar14 = *(long *)(this + 0x90);
      lVar6 = *(long *)(this + 0xa0);
      uVar8 = 0;
      do {
        *(undefined1 *)(lVar6 + lVar14 + uVar8) = *(undefined1 *)(param_8 + uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar17 != uVar8);
      *(ulong *)(this + 0x90) = param_8 + uVar17 + (lVar14 - param_8);
    }
    if (param_9 != this + 0xa8) {
      plVar15 = *(long **)(param_9 + 0x10);
      lVar14 = *(long *)param_9 * 8;
      plVar3 = plVar15 + *(long *)param_9;
      if (*(long *)(this + 0xa8) != 0) {
        plVar16 = *(long **)(this + 0xb8);
        plVar2 = plVar16 + *(long *)(this + 0xa8);
        for (; plVar16 < plVar2; plVar16 = plVar16 + 1) {
          plVar5 = (long *)*plVar16;
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              if (*(code **)(*plVar5 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                (*Free)();
              }
              else {
                (**(code **)(*plVar5 + 0x18))();
              }
            }
          }
        }
      }
      *(undefined8 *)(this + 0xa8) = 0;
      uVar17 = lVar14 >> 3;
      if (*(ulong *)(this + 0xb0) < uVar17) {
        puVar10 = (undefined8 *)(*Allocate)(lVar14);
        puVar13 = *(undefined8 **)(this + 0xb8);
        if (puVar13 != (undefined8 *)0x0) {
          lVar14 = *(long *)(this + 0xa8);
          if (puVar10 < puVar13) {
            for (puVar11 = puVar10; puVar11 < puVar10 + lVar14; puVar11 = puVar11 + 1) {
              uVar9 = *puVar13;
              puVar13 = puVar13 + 1;
              *puVar11 = uVar9;
            }
          }
          else {
            puVar13 = puVar13 + lVar14 + -1;
            puVar11 = puVar10 + lVar14 + -1;
            if (!CARRY8(lVar14 * 8 - 8,(ulong)puVar10)) {
              do {
                uVar9 = *puVar13;
                puVar12 = puVar11 + -1;
                puVar13 = puVar13 + -1;
                *puVar11 = uVar9;
                puVar11 = puVar12;
              } while (puVar10 <= puVar12);
            }
          }
          (*Free)();
        }
        *(undefined8 **)(this + 0xb8) = puVar10;
        *(ulong *)(this + 0xb0) = uVar17;
      }
      if (plVar15 != plVar3) {
        do {
          lVar14 = *(long *)(this + 0xa8);
          *(long *)(this + 0xa8) = lVar14 + 1;
          lVar6 = *plVar15;
          *(long *)(*(long *)(this + 0xb8) + lVar14 * 8) = lVar6;
          if (lVar6 != 0) {
            LOCK();
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            UNLOCK();
          }
          plVar15 = plVar15 + 1;
        } while (plVar3 != plVar15);
        return;
      }
    }
  }
  return;
}



/* JPH::HeightFieldShapeSettings::DetermineMinAndMaxSample(float&, float&, float&) const */

void __thiscall
JPH::HeightFieldShapeSettings::DetermineMinAndMaxSample
          (HeightFieldShapeSettings *this,float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = *(float **)(this + 0x88);
  *param_1 = *(float *)(this + 100);
  fVar3 = *(float *)(this + 0x68);
  pfVar1 = pfVar2 + *(long *)(this + 0x78);
  *param_2 = fVar3;
  if (pfVar1 != pfVar2) {
    do {
      fVar3 = *pfVar2;
      if (fVar3 != _LC13) {
        fVar4 = fVar3;
        if (*param_1 <= fVar3) {
          fVar4 = *param_1;
        }
        *param_1 = fVar4;
        if (fVar3 <= *param_2) {
          fVar3 = *param_2;
        }
        *param_2 = fVar3;
      }
      pfVar2 = pfVar2 + 1;
    } while (pfVar1 != pfVar2);
    fVar3 = *param_2;
  }
  if (_LC9 <= fVar3 - *param_1) {
    *param_3 = _LC41 / (fVar3 - *param_1);
    return;
  }
  *param_3 = _LC40;
  return;
}



/* JPH::HeightFieldShapeSettings::CalculateBitsPerSampleForError(float) const */

int __thiscall
JPH::HeightFieldShapeSettings::CalculateBitsPerSampleForError
          (HeightFieldShapeSettings *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_68;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  DetermineMinAndMaxSample(this,&local_4c,&local_48,&local_44);
  if ((local_48 <= local_4c) || (uVar1 = *(uint *)(this + 0x60), uVar1 == 0)) {
    local_68 = 1;
  }
  else {
    iVar2 = *(int *)(this + 0x70);
    local_68 = 1;
    uVar12 = 0;
    uVar6 = 0;
    do {
      uVar4 = uVar6 + iVar2 + 1;
      uVar9 = 0;
      uVar5 = (ulong)uVar12;
      uVar14 = iVar2 + uVar6;
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      do {
        uVar7 = uVar9 + iVar2 + 1;
        if (uVar1 < uVar7) {
          uVar7 = uVar1;
        }
        iVar3 = (int)uVar5;
        if (uVar9 < uVar7) {
          uVar11 = uVar5;
          fVar18 = _LC13;
          fVar15 = _LC19;
          do {
            iVar13 = (int)uVar11;
            if (uVar6 < uVar4) {
              uVar8 = uVar6;
              fVar17 = fVar18;
              do {
                fVar20 = *(float *)(*(long *)(this + 0x88) + uVar11 * 4);
                fVar18 = fVar17;
                if (fVar20 != _LC13) {
                  fVar18 = fVar20;
                  if (fVar20 <= fVar15) {
                    fVar18 = fVar15;
                  }
                  fVar15 = fVar18;
                  fVar18 = fVar20;
                  if (fVar17 <= fVar20) {
                    fVar18 = fVar17;
                  }
                }
                uVar8 = uVar8 + 1;
                uVar11 = (ulong)((int)uVar11 + uVar1);
                fVar17 = fVar18;
              } while (uVar8 != uVar4);
            }
            uVar8 = iVar13 + 1;
            uVar11 = (ulong)uVar8;
          } while (uVar7 + uVar12 != uVar8);
          if (fVar18 < fVar15) {
            fVar18 = (fVar18 - local_4c) * local_44;
            if ((float)((uint)fVar18 & _LC44) < _LC42) {
              fVar18 = (float)((uint)((float)(int)fVar18 -
                                     (float)(-(uint)(fVar18 < (float)(int)fVar18) & _LC4)) |
                              ~_LC44 & (uint)fVar18);
            }
            fVar15 = (fVar15 - local_4c) * local_44;
            fVar18 = fVar18 / local_44 + local_4c;
            if ((float)((uint)fVar15 & _LC44) < _LC42) {
              fVar15 = (float)((uint)((float)(int)fVar15 +
                                     (float)(-(uint)((float)(int)fVar15 < fVar15) & _LC4)) |
                              ~_LC44 & (uint)fVar15);
            }
            fVar15 = (fVar15 / local_44 + local_4c) - fVar18;
            if (uVar9 < uVar9 + iVar2) {
              do {
                iVar13 = (int)uVar5;
                if (uVar6 < uVar14) {
                  uVar7 = uVar6;
                  do {
                    fVar17 = *(float *)(*(long *)(this + 0x88) + uVar5 * 4);
                    if (fVar17 != _LC13) {
                      while( true ) {
                        iVar10 = 1 << ((byte)local_68 & 0x1f);
                        fVar19 = (float)(iVar10 - 1);
                        fVar20 = (fVar19 * (fVar17 - fVar18)) / fVar15;
                        if ((float)((uint)fVar20 & _LC44) < _LC42) {
                          fVar20 = (float)((uint)((float)(int)fVar20 -
                                                 (float)(-(uint)(fVar20 < (float)(int)fVar20) & _LC4
                                                        )) | ~_LC44 & (uint)fVar20);
                        }
                        fVar16 = _LC2;
                        if (0.0 <= fVar20) {
                          fVar16 = (float)(iVar10 - 2);
                          if (fVar20 <= fVar16) {
                            fVar16 = fVar20 + _LC2;
                          }
                          else {
                            fVar16 = fVar16 + _LC2;
                          }
                        }
                        if ((float)((uint)(((fVar16 * fVar15) / fVar19 + fVar18) - fVar17) & _LC44)
                            <= param_1) break;
                        local_68 = local_68 + 1;
                        if (local_68 == 8) goto LAB_001054f5;
                      }
                    }
                    uVar7 = uVar7 + 1;
                    uVar5 = (ulong)((int)uVar5 + uVar1);
                  } while (uVar7 != uVar14);
                }
                uVar7 = iVar13 + 1;
                uVar5 = (ulong)uVar7;
              } while (uVar7 != iVar2 + iVar3);
            }
          }
        }
        uVar9 = uVar9 + iVar2;
        uVar5 = (ulong)(uint)(iVar2 + iVar3);
      } while (uVar9 < uVar1);
      uVar12 = uVar12 + uVar1 * iVar2;
      uVar6 = uVar14;
    } while (uVar14 < uVar1);
  }
LAB_001054f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_68;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::CalculateActiveEdges(unsigned int, unsigned int, unsigned int, unsigned
   int, float const*, unsigned int, unsigned int, long, float, float, JPH::TempAllocator&) */

void __thiscall
JPH::HeightFieldShape::CalculateActiveEdges
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,float *param_5
          ,uint param_6,uint param_7,long param_8,float param_9,float param_10,
          TempAllocator *param_11)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  long lVar9;
  undefined1 (*pauVar10) [16];
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ushort *puVar17;
  undefined1 (*pauVar18) [16];
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  
  iVar4 = param_3 * param_4 * 0x20;
  pauVar8 = (undefined1 (*) [16])(**(code **)(*(long *)param_11 + 0x10))(param_11,iVar4);
  uVar15 = _LC45;
  if (param_4 != 0) {
    uVar12 = param_2 - param_7;
    lVar9 = (ulong)(param_3 - 1) + 1;
    pauVar18 = pauVar8;
    uVar16 = uVar12;
    if (param_3 == 0) {
      do {
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_4 + uVar12);
    }
    else {
      do {
        uVar19 = param_1 - param_6;
        pauVar10 = pauVar18;
        do {
          pfVar1 = param_5 + (ulong)uVar19 + (ulong)uVar16 * param_8;
          fVar21 = *pfVar1;
          fVar23 = pfVar1[param_8 + 1];
          if ((fVar21 == _LC13) || (fVar23 == _LC13)) {
            *pauVar10 = (undefined1  [16])0x0;
LAB_001058d9:
            auVar24 = (undefined1  [16])0x0;
          }
          else {
            fVar27 = pfVar1[param_8];
            auVar24 = (undefined1  [16])0x0;
            if (fVar27 != _LC13) {
              fVar31 = (float)(*(uint *)(this + 0x38) ^ uVar15);
              fVar32 = (fVar23 - fVar27) * param_9;
              fVar29 = (fVar21 - fVar27) * param_9;
              fVar27 = fVar29 * *(float *)(this + 0x30) - fVar32 * 0.0;
              fVar29 = fVar31 * fVar32 - fVar29 * 0.0;
              fVar32 = 0.0 - *(float *)(this + 0x30) * fVar31;
              auVar30._4_4_ = fVar32;
              auVar30._0_4_ = fVar29;
              auVar30._8_4_ = fVar27;
              auVar30._12_4_ = fVar27;
              auVar24._0_4_ = SQRT(fVar27 * fVar27 + fVar32 * fVar32 + fVar29 * fVar29 + 0.0);
              auVar24._4_4_ = auVar24._0_4_;
              auVar24._8_4_ = auVar24._0_4_;
              auVar24._12_4_ = auVar24._0_4_;
              auVar24 = divps(auVar30,auVar24);
            }
            *pauVar10 = auVar24;
            fVar27 = pfVar1[1];
            if (fVar27 == _LC13) goto LAB_001058d9;
            fVar29 = (float)(*(uint *)(this + 0x30) ^ uVar15);
            fVar32 = (fVar23 - fVar27) * param_9;
            fVar21 = (fVar21 - fVar27) * param_9;
            fVar23 = fVar32 * fVar29 - fVar21 * 0.0;
            fVar21 = *(float *)(this + 0x38) * fVar21 - fVar32 * 0.0;
            fVar27 = 0.0 - *(float *)(this + 0x38) * fVar29;
            auVar25._4_4_ = fVar27;
            auVar25._0_4_ = fVar21;
            auVar25._8_4_ = fVar23;
            auVar25._12_4_ = fVar23;
            fVar21 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + 0.0 + fVar27 * fVar27);
            auVar2._4_4_ = fVar21;
            auVar2._0_4_ = fVar21;
            auVar2._8_4_ = fVar21;
            auVar2._12_4_ = fVar21;
            auVar24 = divps(auVar25,auVar2);
          }
          pauVar10[1] = auVar24;
          pauVar10 = pauVar10 + 2;
          uVar19 = uVar19 + 1;
        } while (pauVar10 != pauVar18 + (ulong)param_3 * 2);
        uVar16 = uVar16 + 1;
        pauVar18 = pauVar18 + lVar9 * 2;
      } while (uVar16 != param_4 + uVar12);
    }
    fVar21 = _LC46;
    iVar20 = *(int *)(this + 0x40);
    uVar16 = 0;
    uVar15 = ((iVar20 + -1) * param_2 + param_1) * 3;
    pauVar18 = pauVar8;
    do {
      uVar19 = uVar15;
      if (param_3 != 0) {
        iVar20 = 0;
        uVar19 = uVar15 + param_3 * 3;
        pauVar10 = pauVar18;
        do {
          pfVar1 = param_5 + (ulong)(iVar20 + (param_1 - param_6)) +
                             (ulong)(uVar12 + uVar16) * param_8;
          fVar23 = *pfVar1;
          fVar27 = pfVar1[param_8];
          fVar29 = pfVar1[param_8 + 1];
          if (iVar20 == 0) {
            uVar13 = 0;
            uVar7 = 6;
            if (uVar16 != param_4 - 1) goto LAB_00105af6;
LAB_00105d8b:
            uVar7 = uVar7 & 5;
          }
          else {
            if ((fVar23 == _LC13) || (fVar27 == _LC13)) {
              uVar13 = 0;
            }
            else {
              fVar32 = (float)*(undefined8 *)*pauVar10;
              fVar31 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
              fVar22 = (float)*(undefined8 *)pauVar10[-1];
              fVar5 = (float)*(undefined8 *)(*pauVar10 + 8);
              fVar26 = (float)((ulong)*(undefined8 *)pauVar10[-1] >> 0x20);
              uVar13 = 1;
              fVar6 = (float)*(undefined8 *)(pauVar10[-1] + 8);
              fVar28 = fVar6 * fVar5 + fVar26 * fVar31 + fVar22 * fVar32 + 0.0;
              if ((fVar21 <= fVar28) &&
                 (uVar13 = 0,
                 0.0 <= (fVar26 * fVar32 - fVar31 * fVar22) * *(float *)(this + 0x38) +
                        (fVar27 - fVar23) * param_9 * (fVar22 * fVar5 - fVar32 * fVar6) +
                        (fVar6 * fVar31 - fVar5 * fVar26) * 0.0 + 0.0)) {
                uVar13 = (uint)(fVar28 < param_10);
              }
            }
            uVar7 = 7;
            if (uVar16 == param_4 - 1) goto LAB_00105d8b;
LAB_00105af6:
            if ((fVar27 != _LC13) && (fVar29 != _LC13)) {
              uVar3 = *(undefined8 *)pauVar10[param_3 * 2 + 1];
              fVar32 = (float)uVar3;
              fVar31 = (float)*(undefined8 *)*pauVar10;
              fVar5 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
              fVar26 = (float)((ulong)uVar3 >> 0x20);
              fVar6 = (float)*(undefined8 *)(*pauVar10 + 8);
              fVar22 = (float)*(undefined8 *)(pauVar10[param_3 * 2 + 1] + 8);
              fVar28 = fVar22 * fVar6 + fVar26 * fVar5 + fVar32 * fVar31 + 0.0;
              if ((fVar28 < fVar21) ||
                 ((0.0 <= (fVar26 * fVar31 - fVar5 * fVar32) * 0.0 +
                          (fVar29 - fVar27) * param_9 * (fVar32 * fVar6 - fVar31 * fVar22) +
                          *(float *)(this + 0x30) * (fVar22 * fVar5 - fVar6 * fVar26) + 0.0 &&
                  (fVar28 < param_10)))) {
                uVar13 = uVar13 | 2;
              }
            }
          }
          if ((fVar23 != _LC13) && (fVar29 != _LC13)) {
            fVar27 = (float)*(undefined8 *)*pauVar10;
            fVar6 = (float)*(undefined8 *)pauVar10[1];
            fVar26 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
            fVar32 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
            fVar31 = (float)*(undefined8 *)(*pauVar10 + 8);
            fVar5 = (float)*(undefined8 *)(pauVar10[1] + 8);
            fVar22 = fVar26 * fVar32 + fVar6 * fVar27 + 0.0 + fVar5 * fVar31;
            if ((fVar22 < fVar21) ||
               ((0.0 <= ((fVar23 - fVar29) * param_9 * (fVar6 * fVar31 - fVar27 * fVar5) +
                        (0.0 - *(float *)(this + 0x30) * (fVar5 * fVar32 - fVar31 * fVar26))) -
                        *(float *)(this + 0x38) * (fVar26 * fVar27 - fVar32 * fVar6) &&
                (fVar22 < param_10)))) {
              uVar13 = uVar13 | 4;
            }
          }
          uVar14 = uVar15 + 3;
          pauVar10 = pauVar10 + 2;
          bVar11 = (byte)uVar15 & 7;
          puVar17 = (ushort *)((ulong)(uVar15 >> 3) + *(long *)(this + 0x70));
          iVar20 = iVar20 + 1;
          *puVar17 = (ushort)(uVar13 << bVar11) | ~(ushort)(uVar7 << bVar11) & *puVar17;
          uVar15 = uVar14;
        } while (uVar14 != uVar19);
        pauVar18 = pauVar18 + lVar9 * 2;
        iVar20 = *(int *)(this + 0x40);
      }
      uVar16 = uVar16 + 1;
      uVar15 = (iVar20 - param_3) * 3 + -3 + uVar19;
    } while (param_4 != uVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00105f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_11 + 0x18))(param_11,pauVar8,iVar4);
  return;
}



/* JPH::HeightFieldShape::CalculateActiveEdges(JPH::HeightFieldShapeSettings const&) */

void __thiscall
JPH::HeightFieldShape::CalculateActiveEdges
          (HeightFieldShape *this,HeightFieldShapeSettings *param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined **local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  memset(*(void **)(this + 0x70),0xff,(ulong)*(uint *)(this + 0x50));
  local_28 = &PTR__TempAllocatorMalloc_001163d8;
  uVar1 = *(uint *)(param_1 + 0x60) - 1;
  CalculateActiveEdges
            (this,0,0,uVar1,uVar1,*(float **)(param_1 + 0x88),0,0,(ulong)*(uint *)(param_1 + 0x60),
             *(float *)(param_1 + 0x54),*(float *)(param_1 + 0xc0),(TempAllocator *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::StoreMaterialIndices(JPH::HeightFieldShapeSettings const&) */

void __thiscall
JPH::HeightFieldShape::StoreMaterialIndices
          (HeightFieldShape *this,HeightFieldShapeSettings *param_1)

{
  uint uVar1;
  void *__s;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  
  uVar13 = 1;
  iVar2 = *(int *)(param_1 + 0x60);
  uVar1 = *(int *)(this + 0x40) - 1;
  uVar3 = *(uint *)(param_1 + 0x6c);
  if (*(uint *)(param_1 + 0x6c) < *(uint *)(this + 0x78)) {
    uVar3 = *(uint *)(this + 0x78);
  }
  uVar3 = uVar3 - 1;
  if (uVar3 != 0) {
    iVar11 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    uVar3 = iVar11 + 1;
    uVar13 = (ulong)((uVar1 * uVar1 * uVar3 + 7 >> 3) + 1);
  }
  *(uint *)(this + 0xa8) = uVar3;
  lVar5 = *(long *)(this + 0xa0);
  if (*(ulong *)(this + 0x98) < uVar13) {
    lVar5 = (*Reallocate)(lVar5,*(ulong *)(this + 0x98),uVar13);
    *(ulong *)(this + 0x98) = uVar13;
    *(long *)(this + 0xa0) = lVar5;
  }
  __s = (void *)(lVar5 + *(long *)(this + 0x90));
  if (__s < (void *)(lVar5 + uVar13)) {
    memset(__s,0,uVar13 - *(long *)(this + 0x90));
  }
  *(ulong *)(this + 0x90) = uVar13;
  if ((1 < *(ulong *)(this + 0x78)) && (uVar1 != 0)) {
    iVar12 = 0;
    iVar11 = 0;
    uVar3 = 0;
    do {
      uVar10 = 0;
      do {
        uVar4 = uVar3;
        if (uVar3 <= uVar10) {
          uVar4 = uVar10;
        }
        uVar8 = 0;
        if (uVar4 < iVar2 - 1U) {
          uVar8 = (uint)*(byte *)(*(long *)(param_1 + 0xa0) + (ulong)(uVar10 + iVar12));
        }
        iVar9 = uVar10 + iVar11;
        uVar10 = uVar10 + 1;
        uVar6 = iVar9 * *(int *)(this + 0xa8);
        uVar4 = uVar6 >> 3;
        iVar9 = uVar8 << ((byte)uVar6 & 7);
        pbVar7 = (byte *)((ulong)uVar4 + *(long *)(this + 0xa0));
        *pbVar7 = *pbVar7 | (byte)iVar9;
        pbVar7 = (byte *)((ulong)(uVar4 + 1) + *(long *)(this + 0xa0));
        *pbVar7 = *pbVar7 | (byte)((uint)iVar9 >> 8);
      } while (uVar1 != uVar10);
      uVar3 = uVar3 + 1;
      iVar11 = iVar11 + uVar1;
      iVar12 = iVar12 + (iVar2 - 1U);
    } while (uVar1 != uVar3);
  }
  return;
}



/* JPH::HeightFieldShape::CacheValues() */

void __thiscall JPH::HeightFieldShape::CacheValues(HeightFieldShape *this)

{
  this[0x55] = (HeightFieldShape)((char)(1 << ((byte)this[0x54] & 0x1f)) + -1);
  return;
}



/* JPH::HeightFieldShape::AllocateBuffers() */

void __thiscall JPH::HeightFieldShape::AllocateBuffers(HeightFieldShape *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x40);
  uVar5 = uVar4 / *(uint *)(this + 0x44) + 1 >> 1;
  uVar2 = uVar4 / *(uint *)(this + 0x44) - 1;
  if (uVar2 != 0) {
    uVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar2 = (&sGridOffsets)[uVar1];
  }
  uVar2 = uVar5 * uVar5 + uVar2;
  *(uint *)(this + 0x4c) = uVar2;
  uVar5 = ((uVar4 - 1) * (uVar4 - 1) * 3 + 7 >> 3) + 1;
  *(uint *)(this + 0x50) = uVar5;
  uVar4 = ((uint)(byte)this[0x54] * uVar4 * uVar4 + 7 >> 3) + 1;
  *(uint *)(this + 0x48) = uVar4;
  lVar3 = (*AlignedAllocate)((ulong)uVar2 * 0x10 + (ulong)uVar4 + (ulong)uVar5,0x10);
  *(long *)(this + 0x60) = lVar3;
  lVar3 = lVar3 + (ulong)*(uint *)(this + 0x4c) * 0x10;
  *(long *)(this + 0x68) = lVar3;
  *(ulong *)(this + 0x70) = lVar3 + (ulong)*(uint *)(this + 0x48);
  return;
}



/* JPH::HeightFieldShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::HeightFieldShape::RestoreBinaryState(HeightFieldShape *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x44,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x56,2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x58,2);
  local_34 = (uint)*(undefined8 *)(this + 0x90);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar2 == '\0')) {
    uVar9 = (ulong)local_34;
    uVar4 = *(undefined8 *)(this + 0xa0);
    uVar8 = uVar9;
    if (*(ulong *)(this + 0x98) < uVar9) {
      uVar4 = (*Reallocate)(uVar4,*(ulong *)(this + 0x98),uVar9);
      *(ulong *)(this + 0x98) = uVar9;
      uVar8 = (ulong)local_34;
      *(undefined8 *)(this + 0xa0) = uVar4;
    }
    lVar1 = *(long *)param_1;
    *(ulong *)(this + 0x90) = uVar9;
    (**(code **)(lVar1 + 0x10))(param_1,uVar4,uVar8);
  }
  else {
    *(undefined8 *)(this + 0x90) = 0;
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,4);
  uVar8 = 1L << ((byte)*(undefined4 *)(this + 0xa8) & 0x3f);
  if (*(ulong *)(this + 0x80) < uVar8) {
    puVar3 = (undefined8 *)(*Allocate)(8L << ((byte)*(undefined4 *)(this + 0xa8) & 0x3f));
    puVar7 = *(undefined8 **)(this + 0x88);
    if (puVar7 != (undefined8 *)0x0) {
      lVar1 = *(long *)(this + 0x78);
      if (puVar3 < puVar7) {
        for (puVar5 = puVar3; puVar5 < puVar3 + lVar1; puVar5 = puVar5 + 1) {
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar4;
        }
      }
      else {
        puVar7 = puVar7 + lVar1 + -1;
        puVar5 = puVar3 + lVar1 + -1;
        if (!CARRY8(lVar1 * 8 - 8,(ulong)puVar3)) {
          do {
            uVar4 = *puVar7;
            puVar6 = puVar5 + -1;
            puVar7 = puVar7 + -1;
            *puVar5 = uVar4;
            puVar5 = puVar6;
          } while (puVar3 <= puVar6);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x88) = puVar3;
    *(ulong *)(this + 0x80) = uVar8;
  }
  local_34 = local_34 & 0xffffff00;
  this[0x55] = (HeightFieldShape)((char)(1 << ((byte)this[0x54] & 0x1f)) + -1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,1);
  if ((char)local_34 != '\0') {
    AllocateBuffers(this);
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x60),
               (ulong)*(uint *)(this + 0x48) + (ulong)*(uint *)(this + 0x50) +
               (ulong)*(uint *)(this + 0x4c) * 0x10);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HeightFieldShape::Clone() const */

void JPH::HeightFieldShape::Clone(void)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  HeightFieldShape *this;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  long in_RSI;
  long *in_RDI;
  long *plVar22;
  undefined1 *puVar23;
  long *plVar24;
  ulong uVar25;
  
  puVar12 = (undefined8 *)(*Allocate)(0xd0);
  *(undefined1 (*) [16])(puVar12 + 4) = (undefined1  [16])0x0;
  uVar11 = _LC4;
  *puVar12 = &PTR__HeightFieldShape_00116440;
  *(undefined4 *)(puVar12 + 6) = uVar11;
  *(undefined4 *)((long)puVar12 + 0x34) = uVar11;
  *(undefined4 *)(puVar12 + 7) = uVar11;
  *(undefined4 *)((long)puVar12 + 0x3c) = uVar11;
  uVar7 = _UNK_00116638;
  uVar16 = _LC39;
  *(undefined4 *)(puVar12 + 1) = 0;
  puVar12[8] = uVar16;
  puVar12[9] = uVar7;
  puVar12[2] = 0;
  *(undefined2 *)(puVar12 + 3) = 0xd04;
  puVar12[10] = 0xffffff0800000000;
  *(undefined2 *)(puVar12 + 0xb) = 0xffff;
  puVar12[0xe] = 0;
  puVar12[0x11] = 0;
  puVar12[0x14] = 0;
  *(undefined4 *)(puVar12 + 0x15) = 0;
  puVar12[0x18] = 0;
  *(undefined1 *)(puVar12 + 0x19) = 0;
  *(undefined1 (*) [16])(puVar12 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 0x12) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar12 + 0x16) = (undefined1  [16])0x0;
  *in_RDI = (long)puVar12;
  LOCK();
  *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
  UNLOCK();
  this = (HeightFieldShape *)*in_RDI;
  uVar7 = *(undefined8 *)(in_RSI + 0x20);
  uVar8 = *(undefined8 *)(in_RSI + 0x28);
  uVar9 = *(undefined8 *)(in_RSI + 0x30);
  uVar10 = *(undefined8 *)(in_RSI + 0x38);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(in_RSI + 0x10);
  uVar16 = *(undefined8 *)(in_RSI + 0x40);
  *(undefined8 *)(this + 0x20) = uVar7;
  *(undefined8 *)(this + 0x28) = uVar8;
  *(undefined8 *)(this + 0x30) = uVar9;
  *(undefined8 *)(this + 0x38) = uVar10;
  *(undefined8 *)(this + 0x40) = uVar16;
  *(undefined2 *)(this + 0x54) = *(undefined2 *)(in_RSI + 0x54);
  *(undefined4 *)(this + 0x56) = *(undefined4 *)(in_RSI + 0x56);
  AllocateBuffers(this);
  memcpy(*(void **)(*in_RDI + 0x60),*(void **)(in_RSI + 0x60),
         (ulong)*(uint *)(in_RSI + 0x48) + (ulong)*(uint *)(in_RSI + 0x50) +
         (ulong)*(uint *)(in_RSI + 0x4c) * 0x10);
  lVar21 = *in_RDI;
  uVar25 = *(ulong *)(in_RSI + 0x80);
  if (*(ulong *)(lVar21 + 0x80) < uVar25) {
    puVar15 = (undefined8 *)(*Allocate)(uVar25 * 8);
    puVar12 = *(undefined8 **)(lVar21 + 0x88);
    if (puVar12 != (undefined8 *)0x0) {
      lVar13 = *(long *)(lVar21 + 0x78);
      if (puVar15 < puVar12) {
        for (puVar17 = puVar15; puVar17 < puVar15 + lVar13; puVar17 = puVar17 + 1) {
          uVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          *puVar17 = uVar16;
        }
      }
      else {
        puVar12 = puVar12 + lVar13 + -1;
        puVar17 = puVar15 + lVar13 + -1;
        if (!CARRY8(lVar13 * 8 - 8,(ulong)puVar15)) {
          do {
            uVar16 = *puVar12;
            puVar14 = puVar17 + -1;
            puVar12 = puVar12 + -1;
            *puVar17 = uVar16;
            puVar17 = puVar14;
          } while (puVar15 <= puVar14);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(lVar21 + 0x88) = puVar15;
    *(ulong *)(lVar21 + 0x80) = uVar25;
    lVar21 = *in_RDI;
  }
  if (in_RSI + 0x78 != lVar21 + 0x78) {
    plVar22 = *(long **)(in_RSI + 0x88);
    lVar13 = *(long *)(in_RSI + 0x78) * 8;
    plVar20 = plVar22 + *(long *)(in_RSI + 0x78);
    if (*(long *)(lVar21 + 0x78) != 0) {
      plVar24 = *(long **)(lVar21 + 0x88);
      plVar2 = plVar24 + *(long *)(lVar21 + 0x78);
joined_r0x0010669d:
      if (plVar24 < plVar2) {
        do {
          plVar4 = (long *)*plVar24;
          if (plVar4 != (long *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              if (*(code **)(*plVar4 + 0x18) == PhysicsMaterial::~PhysicsMaterial)
              goto code_r0x001066e1;
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          plVar24 = plVar24 + 1;
          if (plVar2 <= plVar24) break;
        } while( true );
      }
    }
    *(undefined8 *)(lVar21 + 0x78) = 0;
    uVar25 = lVar13 >> 3;
    if (*(ulong *)(lVar21 + 0x80) < uVar25) {
      puVar15 = (undefined8 *)(*Allocate)(lVar13);
      puVar12 = *(undefined8 **)(lVar21 + 0x88);
      if (puVar12 != (undefined8 *)0x0) {
        lVar13 = *(long *)(lVar21 + 0x78);
        if (puVar15 < puVar12) {
          for (puVar17 = puVar15; puVar17 < puVar15 + lVar13; puVar17 = puVar17 + 1) {
            uVar16 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar17 = uVar16;
          }
        }
        else {
          puVar12 = puVar12 + lVar13 + -1;
          puVar17 = puVar15 + lVar13 + -1;
          if (!CARRY8(lVar13 * 8 - 8,(ulong)puVar15)) {
            do {
              uVar16 = *puVar12;
              puVar14 = puVar17 + -1;
              puVar12 = puVar12 + -1;
              *puVar17 = uVar16;
              puVar17 = puVar14;
            } while (puVar15 <= puVar14);
          }
        }
        (*Free)();
      }
      *(undefined8 **)(lVar21 + 0x88) = puVar15;
      *(ulong *)(lVar21 + 0x80) = uVar25;
    }
    for (; plVar22 != plVar20; plVar22 = plVar22 + 1) {
      lVar13 = *(long *)(lVar21 + 0x78);
      *(long *)(lVar21 + 0x78) = lVar13 + 1;
      lVar5 = *plVar22;
      *(long *)(*(long *)(lVar21 + 0x88) + lVar13 * 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
    }
    lVar21 = *in_RDI;
  }
  if (in_RSI + 0x90 != lVar21 + 0x90) {
    uVar25 = *(ulong *)(in_RSI + 0x90);
    puVar23 = *(undefined1 **)(in_RSI + 0xa0);
    *(undefined8 *)(lVar21 + 0x90) = 0;
    puVar3 = puVar23 + uVar25;
    if (*(ulong *)(lVar21 + 0x98) < uVar25) {
      uVar16 = (*Reallocate)(*(undefined8 *)(lVar21 + 0xa0),*(ulong *)(lVar21 + 0x98),uVar25);
      *(ulong *)(lVar21 + 0x98) = uVar25;
      *(undefined8 *)(lVar21 + 0xa0) = uVar16;
    }
    for (; puVar23 != puVar3; puVar23 = puVar23 + 1) {
      lVar13 = *(long *)(lVar21 + 0x90);
      *(long *)(lVar21 + 0x90) = lVar13 + 1;
      *(undefined1 *)(*(long *)(lVar21 + 0xa0) + lVar13) = *puVar23;
    }
    lVar21 = *in_RDI;
  }
  *(undefined4 *)(lVar21 + 0xa8) = *(undefined4 *)(in_RSI + 0xa8);
  if (in_RSI + 0xb0 != lVar21 + 0xb0) {
    puVar15 = *(undefined8 **)(in_RSI + 0xc0);
    lVar13 = *(long *)(in_RSI + 0xb0) * 8;
    puVar12 = puVar15 + *(long *)(in_RSI + 0xb0);
    if (*(long *)(lVar21 + 0xb0) != 0) {
      puVar14 = *(undefined8 **)(lVar21 + 0xc0);
      puVar17 = puVar14 + *(long *)(lVar21 + 0xb0);
joined_r0x0010682b:
      if (puVar14 < puVar17) {
        do {
          piVar6 = (int *)*puVar14;
          if (piVar6 != (int *)0x0) {
            LOCK();
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (*piVar6 == 0) goto code_r0x00106853;
          }
          puVar14 = puVar14 + 1;
          if (puVar17 <= puVar14) break;
        } while( true );
      }
    }
    *(undefined8 *)(lVar21 + 0xb0) = 0;
    uVar25 = lVar13 >> 3;
    if (*(ulong *)(lVar21 + 0xb8) < uVar25) {
      puVar14 = (undefined8 *)(*Allocate)(lVar13);
      puVar17 = *(undefined8 **)(lVar21 + 0xc0);
      if (puVar17 != (undefined8 *)0x0) {
        lVar13 = *(long *)(lVar21 + 0xb0);
        if (puVar14 < puVar17) {
          for (puVar18 = puVar14; puVar18 < puVar14 + lVar13; puVar18 = puVar18 + 1) {
            uVar16 = *puVar17;
            puVar17 = puVar17 + 1;
            *puVar18 = uVar16;
          }
        }
        else {
          puVar17 = puVar17 + lVar13 + -1;
          puVar18 = puVar14 + lVar13 + -1;
          if (!CARRY8(lVar13 * 8 - 8,(ulong)puVar14)) {
            do {
              uVar16 = *puVar17;
              puVar19 = puVar18 + -1;
              puVar17 = puVar17 + -1;
              *puVar18 = uVar16;
              puVar18 = puVar19;
            } while (puVar14 <= puVar19);
          }
        }
        (*Free)();
      }
      *(undefined8 **)(lVar21 + 0xc0) = puVar14;
      *(ulong *)(lVar21 + 0xb8) = uVar25;
    }
    for (; puVar15 != puVar12; puVar15 = puVar15 + 1) {
      lVar13 = *(long *)(lVar21 + 0xb0);
      *(long *)(lVar21 + 0xb0) = lVar13 + 1;
      piVar6 = (int *)*puVar15;
      *(int **)(*(long *)(lVar21 + 0xc0) + lVar13 * 8) = piVar6;
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
    }
    lVar21 = *in_RDI;
  }
  *(undefined1 *)(lVar21 + 200) = *(undefined1 *)(in_RSI + 200);
  return;
code_r0x001066e1:
  (*Free)();
  plVar24 = plVar24 + 1;
  goto joined_r0x0010669d;
code_r0x00106853:
  plVar20 = *(long **)(piVar6 + 6);
  if (plVar20 != (long *)0x0) {
    if ((*(long *)(piVar6 + 2) != 0) &&
       (plVar22 = plVar20 + *(long *)(piVar6 + 2) * 2, plVar20 < plVar22)) {
      do {
        if ((long *)*plVar20 != (long *)0x0) {
          (**(code **)(*(long *)*plVar20 + 0x18))();
        }
        plVar20 = plVar20 + 2;
      } while (plVar20 < plVar22);
      plVar20 = *(long **)(piVar6 + 6);
    }
    piVar6[2] = 0;
    piVar6[3] = 0;
    (*Free)(plVar20);
  }
  (*Free)(piVar6);
  puVar14 = puVar14 + 1;
  goto joined_r0x0010682b;
}



/* JPH::HeightFieldShape::GetPosition(unsigned int, unsigned int) const */

undefined1  [16] __thiscall
JPH::HeightFieldShape::GetPosition(HeightFieldShape *this,uint param_1,uint param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar9 = (float)param_2;
  if (*(int *)(this + 0x48) == 0) {
    fStack_24 = *(float *)(this + 0x34) * 0.0;
  }
  else {
    uVar6 = *(uint *)(this + 0x44);
    uVar1 = (ulong)param_2 / (ulong)uVar6;
    uVar3 = *(uint *)(this + 0x40) / uVar6;
    uVar7 = uVar3 - 1;
    if (uVar7 != 0) {
      uVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      uVar7 = (&sGridOffsets)[uVar5];
    }
    uVar5 = (param_2 * *(uint *)(this + 0x40) + param_1) * (uint)(byte)this[0x54];
    uVar4 = (ulong)((int)uVar1 * 2 & 2U | param_1 / uVar6 & 1);
    lVar8 = (ulong)(uVar7 + (uVar3 + 1 >> 1) * (int)(uVar1 >> 1) + (param_1 / uVar6 >> 1)) * 0x10 +
            *(long *)(this + 0x60);
    uVar6 = (uint)*(ushort *)(lVar8 + uVar4 * 2);
    fStack_24 = (((float)((int)(uint)*(ushort *)(*(long *)(this + 0x68) + (ulong)(uVar5 >> 3)) >>
                          ((byte)uVar5 & 7) & (uint)(byte)this[0x55]) + _LC2) *
                 ((float)(int)(*(ushort *)(lVar8 + 8 + uVar4 * 2) - uVar6) / (float)(byte)this[0x55]
                 ) + (float)uVar6) * *(float *)(this + 0x34);
  }
  fStack_1c = fVar9 * *(float *)(this + 0x3c) + *(float *)(this + 0x2c);
  fStack_20 = fVar9 * *(float *)(this + 0x38) + *(float *)(this + 0x28);
  fStack_24 = fStack_24 + *(float *)(this + 0x24);
  local_28 = (float)param_1 * *(float *)(this + 0x30) + *(float *)(this + 0x20);
  auVar2._4_4_ = fStack_24;
  auVar2._0_4_ = local_28;
  auVar2._8_4_ = fStack_20;
  auVar2._12_4_ = fStack_1c;
  return auVar2;
}



/* JPH::HeightFieldShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::HeightFieldShape::GetSurfaceNormal(HeightFieldShape *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  
  uVar4 = 1;
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x40);
  uVar6 = uVar2 - 1;
  if (uVar6 != 0) {
    iVar3 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar4 = (int)(1L << ((char)iVar3 * '\x02' + 3U & 0x3f)) - 1;
  }
  uVar5 = (uVar1 & uVar4) >> 1;
  uVar6 = uVar5 / uVar2;
  uVar5 = uVar5 % uVar2;
  auVar12 = GetPosition(param_1,uVar5,uVar6);
  auVar13 = GetPosition(param_1,uVar5 + 1,uVar6 + 1);
  fVar7 = auVar13._8_4_;
  fStack_58 = auVar13._0_4_;
  fStack_54 = auVar13._4_4_;
  if ((uVar1 & uVar4 & 1) == 0) {
    auVar14 = GetPosition(param_1,uVar5,uVar6 + 1);
    auVar13 = auVar12._0_12_;
    fStack_48 = auVar14._0_4_;
    fStack_44 = auVar14._4_4_;
    auVar10._0_4_ = fStack_58 - fStack_48;
    auVar10._4_4_ = fStack_54 - fStack_44;
    auVar10._8_4_ = fVar7 - auVar14._8_4_;
  }
  else {
    auVar14 = GetPosition(param_1,uVar5 + 1,uVar6);
    fStack_68 = auVar12._0_4_;
    fStack_64 = auVar12._4_4_;
    fStack_60 = auVar12._8_4_;
    fStack_48 = auVar14._0_4_;
    fStack_44 = auVar14._4_4_;
    auVar10._0_4_ = fStack_68 - fStack_48;
    auVar10._4_4_ = fStack_64 - fStack_44;
    auVar10._8_4_ = fStack_60 - auVar14._8_4_;
  }
  fStack_40 = auVar14._8_4_;
  fStack_48 = auVar14._0_4_;
  fStack_44 = auVar14._4_4_;
  fStack_48 = auVar13._0_4_ - fStack_48;
  fStack_44 = auVar13._4_4_ - fStack_44;
  fStack_40 = auVar13._8_4_ - fStack_40;
  fVar7 = fStack_44 * auVar10._0_4_ - auVar10._4_4_ * fStack_48;
  fVar8 = fStack_40 * auVar10._4_4_ - auVar10._8_4_ * fStack_44;
  fVar9 = fStack_48 * auVar10._8_4_ - auVar10._0_4_ * fStack_40;
  auVar12._4_4_ = fVar9;
  auVar12._0_4_ = fVar8;
  auVar12._8_4_ = fVar7;
  auVar12._12_4_ = fVar7;
  auVar11._0_4_ = SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0);
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar12 = divps(auVar12,auVar11);
  return auVar12;
}



/* JPH::HeightFieldShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::HeightFieldShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               HeightFieldShape *param_1,uint *param_6,float *param_7,undefined4 *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
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
  undefined8 uVar23;
  undefined8 uVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  float *pfVar28;
  float *pfVar29;
  uint uVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM1_Qa;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float local_68;
  float fStack_64;
  
  fVar31 = (float)param_4;
  uVar25 = 1;
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = *param_6;
  uVar30 = uVar1 - 1;
  if (uVar30 != 0) {
    iVar3 = 0x1f;
    if (uVar30 != 0) {
      for (; uVar30 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar25 = (int)(1L << ((char)iVar3 * '\x02' + 3U & 0x3f)) - 1;
  }
  *param_8 = 3;
  uVar30 = (uVar2 & uVar25) >> 1;
  uVar26 = uVar30 / uVar1;
  uVar30 = uVar30 % uVar1;
  auVar32 = GetPosition(param_1,uVar30,uVar26);
  *(undefined1 (*) [16])(param_8 + 4) = auVar32;
  auVar32 = GetPosition(param_1,uVar30 + 1,uVar26 + 1);
  uVar27 = auVar32._8_4_;
  if ((uVar2 & uVar25 & 1) == 0) {
    auVar33 = GetPosition(param_1,uVar30,uVar26 + 1);
    *(long *)(param_8 + 8) = auVar33._0_8_;
    *(undefined1 (*) [16])(param_8 + 0xc) = auVar32;
    *(long *)(param_8 + 10) = auVar33._8_8_;
  }
  else {
    *(undefined1 (*) [16])(param_8 + 8) = auVar32;
    uVar27 = GetPosition(param_1,uVar30 + 1,uVar26);
    *(undefined8 *)(param_8 + 0xc) = extraout_XMM0_Qa;
    *(undefined8 *)(param_8 + 0xe) = extraout_XMM1_Qa;
  }
  local_68 = (float)param_3;
  fStack_64 = (float)((ulong)param_3 >> 0x20);
  auVar32._4_4_ = -(uint)(fStack_64 < 0.0);
  auVar32._0_4_ = -(uint)(local_68 < 0.0);
  auVar32._8_4_ = -(uint)(fVar31 < 0.0);
  auVar32._12_4_ = -(uint)((float)((ulong)param_4 >> 0x20) < 0.0);
  uVar27 = movmskps(uVar27,auVar32);
  if ((POPCOUNT((byte)uVar27 & 7) & 1U) != 0) {
    uVar23 = *(undefined8 *)(param_8 + 0xc);
    uVar24 = *(undefined8 *)(param_8 + 0xe);
    *(undefined8 *)(param_8 + 0xc) = *(undefined8 *)(param_8 + 8);
    *(undefined8 *)(param_8 + 0xe) = *(undefined8 *)(param_8 + 10);
    *(undefined8 *)(param_8 + 8) = uVar23;
    *(undefined8 *)(param_8 + 10) = uVar24;
  }
  fVar4 = *param_7;
  fVar5 = param_7[1];
  fVar6 = param_7[2];
  fVar7 = param_7[3];
  fVar8 = param_7[0xc];
  fVar9 = param_7[0xd];
  fVar10 = param_7[0xe];
  fVar11 = param_7[0xf];
  fVar12 = param_7[8];
  fVar13 = param_7[9];
  fVar14 = param_7[10];
  fVar15 = param_7[0xb];
  fVar16 = param_7[4];
  fVar17 = param_7[5];
  fVar18 = param_7[6];
  fVar19 = param_7[7];
  pfVar28 = (float *)(param_8 + 4);
  do {
    fVar20 = *pfVar28;
    fVar21 = pfVar28[1];
    fVar22 = pfVar28[2];
    pfVar29 = pfVar28 + 4;
    *pfVar28 = fVar22 * fVar31 * fVar12 + fVar20 * local_68 * fVar4 + fVar21 * fStack_64 * fVar16 +
               fVar8;
    pfVar28[1] = fVar22 * fVar31 * fVar13 + fVar20 * local_68 * fVar5 + fVar21 * fStack_64 * fVar17
                 + fVar9;
    pfVar28[2] = fVar22 * fVar31 * fVar14 + fVar20 * local_68 * fVar6 + fVar21 * fStack_64 * fVar18
                 + fVar10;
    pfVar28[3] = fVar22 * fVar31 * fVar15 + fVar20 * local_68 * fVar7 + fVar21 * fStack_64 * fVar19
                 + fVar11;
    pfVar28 = pfVar29;
  } while ((float *)(param_8 + 0x10) != pfVar29);
  return;
}



/* JPH::HeightFieldShape::IsNoCollision(unsigned int, unsigned int) const */

undefined4 __thiscall
JPH::HeightFieldShape::IsNoCollision(HeightFieldShape *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 1;
  if (*(int *)(this + 0x48) != 0) {
    uVar2 = (param_2 * *(int *)(this + 0x40) + param_1) * (uint)(byte)this[0x54];
    uVar2 = ~((int)(uint)*(ushort *)(*(long *)(this + 0x68) + (ulong)(uVar2 >> 3)) >>
             ((byte)uVar2 & 7));
    uVar1 = CONCAT31((int3)(uVar2 >> 8),((byte)uVar2 & (byte)this[0x55]) == 0);
  }
  return uVar1;
}



/* JPH::HeightFieldShape::ProjectOntoSurface(JPH::Vec3, JPH::Vec3&, JPH::SubShapeID&) const */

int JPH::HeightFieldShape::ProjectOntoSurface
              (undefined8 param_1,undefined8 param_2,HeightFieldShape *param_3,float *param_4,
              uint *param_5)

{
  HeightFieldShape HVar1;
  HeightFieldShape HVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  iVar5 = 0;
  if (*(int *)(param_3 + 0x48) != 0) {
    local_78 = (float)param_1;
    fStack_74 = (float)((ulong)param_1 >> 0x20);
    fStack_70 = (float)param_2;
    fStack_6c = (float)((ulong)param_2 >> 0x20);
    auVar16._0_4_ = local_78 - *(float *)(param_3 + 0x20);
    auVar16._4_4_ = fStack_74 - *(float *)(param_3 + 0x24);
    auVar16._8_4_ = fStack_70 - *(float *)(param_3 + 0x28);
    auVar16._12_4_ = fStack_6c - *(float *)(param_3 + 0x2c);
    auVar16 = divps(auVar16,*(undefined1 (*) [16])(param_3 + 0x30));
    fVar17 = auVar16._0_4_;
    fVar15 = auVar16._8_4_;
    if (0.0 <= fVar17) {
      iVar3 = *(int *)(param_3 + 0x40);
      uVar10 = iVar3 - 1;
      if (((fVar17 < (float)uVar10) && (iVar5 = 0, 0.0 <= fVar15)) && (fVar15 < (float)uVar10)) {
        if ((float)((uint)fVar17 & _LC44) < _LC42) {
          auVar21._0_4_ = ~_LC44 & (uint)fVar17;
          auVar21._4_4_ = 0;
          auVar21._8_4_ = fVar15;
          auVar21._12_4_ = auVar16._12_4_;
          auVar16 = ZEXT416((uint)((float)(int)fVar17 -
                                  (float)(-(uint)(fVar17 < (float)(int)fVar17) & _LC4))) | auVar21;
        }
        uVar6 = (uint)(long)auVar16._0_4_;
        fVar18 = fVar15;
        if ((float)((uint)fVar15 & _LC44) < _LC42) {
          fVar18 = (float)((uint)((float)(int)fVar15 -
                                 (float)(-(uint)(fVar15 < (float)(int)fVar15) & _LC4)) |
                          ~_LC44 & (uint)fVar15);
        }
        HVar1 = param_3[0x54];
        lVar4 = *(long *)(param_3 + 0x68);
        HVar2 = param_3[0x55];
        uVar11 = (uint)(long)fVar18;
        iVar12 = iVar3 * uVar11;
        iVar13 = iVar12 + uVar6;
        uVar8 = iVar13 * (uint)(byte)HVar1;
        bVar7 = (byte)uVar8 & 7;
        iVar5 = 0 >> bVar7;
        if ((~(byte)((int)(uint)*(ushort *)(lVar4 + (ulong)(uVar8 >> 3)) >> bVar7) & (byte)HVar2) !=
            0) {
          uVar14 = uVar6 + 1;
          uVar8 = (iVar3 + iVar12 + uVar14) * (uint)(byte)HVar1;
          if ((~(byte)((int)(uint)*(ushort *)(lVar4 + (ulong)(uVar8 >> 3)) >> ((byte)uVar8 & 7)) &
              (byte)HVar2) != 0) {
            uVar8 = uVar11 + 1;
            fVar17 = fVar17 - (float)((long)auVar16._0_4_ & 0xffffffff);
            fVar15 = fVar15 - (float)((long)fVar18 & 0xffffffff);
            if (fVar15 < fVar17) {
              uVar9 = (uVar14 + iVar12) * (uint)(byte)HVar1;
              if ((~(byte)((int)(uint)*(ushort *)(lVar4 + (ulong)(uVar9 >> 3)) >> ((byte)uVar9 & 7))
                  & (byte)HVar2) != 0) {
                auVar16 = GetPosition(param_3,uVar6,uVar11);
                auVar21 = GetPosition(param_3,uVar14,uVar8);
                auVar22 = GetPosition(param_3,uVar14,uVar11);
                uVar6 = 0xfffffffe;
                local_58 = auVar21._0_4_;
                fStack_54 = auVar21._4_4_;
                fStack_50 = auVar21._8_4_;
                fStack_4c = auVar21._12_4_;
                local_68 = auVar22._0_4_;
                fStack_64 = auVar22._4_4_;
                fStack_60 = auVar22._8_4_;
                fStack_5c = auVar22._12_4_;
                local_78 = auVar16._0_4_;
                fStack_74 = auVar16._4_4_;
                fStack_70 = auVar16._8_4_;
                fStack_6c = auVar16._12_4_;
                *param_4 = fVar15 * (local_58 - local_68) + local_78 +
                           fVar17 * (local_68 - local_78);
                param_4[1] = fVar15 * (fStack_54 - fStack_64) + fStack_74 +
                             fVar17 * (fStack_64 - fStack_74);
                param_4[2] = fVar15 * (fStack_50 - fStack_60) + fStack_70 +
                             fVar17 * (fStack_60 - fStack_70);
                param_4[3] = fVar15 * (fStack_4c - fStack_5c) + fStack_6c +
                             fVar17 * (fStack_5c - fStack_6c);
                if (uVar10 != 0) {
                  iVar5 = 0x1f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                    }
                  }
                  uVar6 = -(int)(1L << ((char)iVar5 * '\x02' + 3U & 0x3f));
                }
                *param_5 = uVar6 | iVar13 * 2 + 1U;
                iVar5 = 1;
              }
            }
            else {
              uVar9 = (iVar3 + iVar12 + uVar6) * (uint)(byte)HVar1;
              if ((~(byte)((int)(uint)*(ushort *)(lVar4 + (ulong)(uVar9 >> 3)) >> ((byte)uVar9 & 7))
                  & (byte)HVar2) != 0) {
                fVar18 = fVar15;
                fVar19 = fVar15;
                fVar20 = fVar15;
                auVar16 = GetPosition(param_3,uVar6,uVar11);
                auVar21 = GetPosition(param_3,uVar6,uVar8);
                auVar22 = GetPosition(param_3,uVar14,uVar8);
                uVar6 = 0xfffffffe;
                local_78 = auVar21._0_4_;
                fStack_74 = auVar21._4_4_;
                fStack_70 = auVar21._8_4_;
                fStack_6c = auVar21._12_4_;
                local_68 = auVar16._0_4_;
                fStack_64 = auVar16._4_4_;
                fStack_60 = auVar16._8_4_;
                fStack_5c = auVar16._12_4_;
                local_58 = auVar22._0_4_;
                fStack_54 = auVar22._4_4_;
                fStack_50 = auVar22._8_4_;
                fStack_4c = auVar22._12_4_;
                *param_4 = (local_78 - local_68) * fVar15 + local_68 +
                           fVar17 * (local_58 - local_78);
                param_4[1] = (fStack_74 - fStack_64) * fVar18 + fStack_64 +
                             fVar17 * (fStack_54 - fStack_74);
                param_4[2] = (fStack_70 - fStack_60) * fVar19 + fStack_60 +
                             fVar17 * (fStack_50 - fStack_70);
                param_4[3] = (fStack_6c - fStack_5c) * fVar20 + fStack_5c +
                             fVar17 * (fStack_4c - fStack_6c);
                if (uVar10 != 0) {
                  iVar5 = 0x1f;
                  if (uVar10 != 0) {
                    for (; uVar10 >> iVar5 == 0; iVar5 = iVar5 + -1) {
                    }
                  }
                  uVar6 = -(int)(1L << ((char)iVar5 * '\x02' + 3U & 0x3f));
                }
                iVar5 = 1;
                *param_5 = iVar13 * 2 | uVar6;
              }
            }
          }
        }
      }
    }
  }
  return iVar5;
}



/* JPH::HeightFieldShape::GetHeights(unsigned int, unsigned int, unsigned int, unsigned int, float*,
   long) const */

void __thiscall
JPH::HeightFieldShape::GetHeights
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,float *param_5
          ,long param_6)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    GetHeights(this,param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}



/* JPH::HeightFieldShape::SetHeights(unsigned int, unsigned int, unsigned int, unsigned int, float
   const*, long, JPH::TempAllocator&, float) */

void __thiscall
JPH::HeightFieldShape::SetHeights
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,float *param_5
          ,long param_6,TempAllocator *param_7,float param_8)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  HeightFieldShape HVar8;
  HeightFieldShape HVar9;
  ushort uVar10;
  int *piVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  float *pfVar24;
  void *pvVar25;
  byte bVar26;
  int iVar27;
  long lVar28;
  ushort uVar29;
  ushort *puVar30;
  ushort *puVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  ulong uVar38;
  HeightFieldShape HVar39;
  undefined2 uVar40;
  uint uVar41;
  uint uVar42;
  float *pfVar43;
  undefined2 uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  float *pfVar49;
  ushort uVar50;
  int iVar51;
  uint uVar52;
  undefined8 *puVar53;
  bool bVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  uint local_f0;
  uint local_ec;
  float *local_e0;
  uint local_b0;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_7c;
  uint local_6c;
  ulong uVar44;
  
  bVar54 = param_3 == 0 || param_4 == 0;
  if (bVar54) {
    return;
  }
  if (param_1 == 0) {
    local_94 = 0;
    local_90 = param_3;
    if (param_2 != 0) goto LAB_001074af;
LAB_00107f5c:
    local_b0 = 0;
    local_f0 = param_4;
  }
  else {
    local_94 = param_1 - *(int *)(this + 0x44);
    local_90 = *(int *)(this + 0x44) + param_3;
    bVar54 = true;
    if (param_2 == 0) goto LAB_00107f5c;
LAB_001074af:
    local_b0 = param_2 - *(int *)(this + 0x44);
    local_f0 = *(int *)(this + 0x44) + param_4;
    bVar54 = true;
  }
  uVar16 = *(uint *)(this + 0x40);
  uVar33 = param_3 + param_1;
  uVar41 = param_2 + param_4;
  local_e0 = param_5;
  if (uVar33 < uVar16) {
    iVar51 = *(int *)(this + 0x44);
    uVar34 = local_90 + iVar51;
    if (uVar41 < uVar16) {
LAB_00107502:
      local_8c = iVar51 + local_f0;
    }
    else {
      local_8c = local_f0;
    }
  }
  else {
    uVar34 = local_90;
    if (uVar41 < uVar16) {
      iVar51 = *(int *)(this + 0x44);
      goto LAB_00107502;
    }
    local_8c = local_f0;
    if (!bVar54) {
      pfVar24 = (float *)0x0;
      goto LAB_001076d9;
    }
  }
  uVar32 = (ulong)uVar34;
  pfVar24 = (float *)(**(code **)(*(long *)param_7 + 0x10))(param_7,local_8c * uVar34 * 4);
  uVar16 = param_1 - local_94;
  uVar46 = param_2 - local_b0;
  if ((uVar46 != 0) && (uVar34 != 0)) {
    GetHeights(this,local_94,local_b0,uVar34,uVar46,pfVar24,uVar32);
  }
  pfVar49 = pfVar24 + uVar46 * uVar34;
  if (uVar16 != 0) {
    GetHeights(this,local_94,param_2,uVar16,param_4,pfVar49,uVar32);
  }
  uVar46 = 0;
  pfVar43 = pfVar49 + uVar16;
  do {
    uVar46 = uVar46 + 1;
    pvVar25 = memcpy(pfVar43,local_e0,(ulong)param_3 << 2);
    local_e0 = local_e0 + param_6;
    pfVar43 = (float *)((long)pvVar25 + uVar32 * 4);
  } while (uVar46 < param_4);
  uVar16 = (local_94 - uVar33) + uVar34;
  if (uVar16 != 0) {
    GetHeights(this,uVar33,param_2,uVar16,param_4,pfVar49 + ((ulong)uVar33 - (ulong)local_94),uVar32
              );
  }
  uVar16 = local_8c + (local_b0 - uVar41);
  param_6 = uVar32;
  local_e0 = pfVar24;
  if ((uVar16 == 0) || (uVar34 == 0)) {
    uVar16 = *(uint *)(this + 0x40);
  }
  else {
    GetHeights(this,local_94,uVar41,uVar34,uVar16,pfVar24 + (uVar41 - local_b0) * uVar34,uVar32);
    uVar16 = *(uint *)(this + 0x40);
  }
LAB_001076d9:
  uVar52 = _LC44;
  fVar15 = _LC4;
  uVar46 = *(uint *)(this + 0x44);
  local_6c = 0;
  local_84 = uVar16 / uVar46;
  local_7c = local_84 - 1;
  if (local_7c != 0) {
    uVar20 = 0x1f;
    if (local_7c != 0) {
      for (; local_7c >> uVar20 == 0; uVar20 = uVar20 - 1) {
      }
    }
    local_7c = (&sGridOffsets)[0x1f - (uVar20 ^ 0x1f)];
    local_6c = 0x20 - (uVar20 ^ 0x1f);
  }
  uVar17 = local_84 + 1 >> 1;
  uVar18 = local_94 / uVar46;
  uVar32 = (ulong)local_b0 / (ulong)uVar46;
  uVar19 = local_90 / uVar46;
  uVar20 = local_f0 / uVar46;
  if (uVar46 <= local_f0) {
    local_ec = 0;
    uVar47 = 0;
    uVar42 = (uint)uVar32;
    uVar44 = uVar32;
    uVar48 = uVar46;
    if (local_90 < uVar46) goto LAB_00107b89;
    do {
      fVar13 = _LC42;
      uVar42 = (uint)uVar44;
      uVar7 = 0;
      uVar35 = 0;
      uVar21 = local_ec + uVar48;
      do {
        uVar2 = uVar35 + uVar48;
        fVar5 = *(float *)(this + 0x24);
        fVar6 = *(float *)(this + 0x34);
        uVar12 = uVar16 - local_94;
        if (uVar2 + 1 < uVar16 - local_94) {
          uVar12 = uVar2 + 1;
        }
        uVar36 = uVar16 - local_b0;
        if (uVar21 + 1 < uVar16 - local_b0) {
          uVar36 = uVar21 + 1;
        }
        if (local_ec < uVar36) {
          iVar51 = 0xffff;
          uVar38 = (ulong)((uVar12 - uVar35) - 1);
          pfVar49 = local_e0 + (ulong)uVar35 + (ulong)local_ec * param_6 + uVar38 + 1;
          iVar27 = 0;
          uVar23 = local_ec;
          do {
            pfVar43 = pfVar49 + ~uVar38;
            if (uVar35 < uVar12) {
              do {
                if (*pfVar43 != _LC13) {
                  fVar55 = (*pfVar43 - fVar5) / fVar6;
                  if ((float)((uint)fVar55 & uVar52) < fVar13) {
                    fVar55 = (float)((uint)((float)(int)fVar55 -
                                           (float)(-(uint)(fVar55 < (float)(int)fVar55) &
                                                  (uint)fVar15)) | ~uVar52 & (uint)fVar55);
                  }
                  iVar22 = (int)fVar55;
                  if (0xfffd < iVar22) {
                    iVar22 = 0xfffd;
                  }
                  if (iVar22 < 0) {
                    iVar22 = 0;
                  }
                  if (iVar22 < iVar51) {
                    iVar51 = iVar22;
                  }
                  if (iVar27 < iVar22 + 1) {
                    iVar27 = iVar22 + 1;
                  }
                }
                pfVar43 = pfVar43 + 1;
              } while (pfVar49 != pfVar43);
            }
            uVar23 = uVar23 + 1;
            pfVar49 = pfVar49 + param_6;
          } while (uVar36 != uVar23);
          if (iVar27 < iVar51) goto LAB_00107f70;
          uVar40 = (undefined2)iVar27;
          uVar45 = (undefined2)iVar51;
          fVar57 = (float)(iVar27 - iVar51);
          fVar55 = (float)iVar51;
        }
        else {
LAB_00107f70:
          fVar57 = 0.0;
          uVar40 = 0xffff;
          uVar45 = 0xffff;
          fVar55 = _LC47;
        }
        uVar38 = (ulong)(uVar18 + uVar7 & 1 | uVar42 * 2 & 2);
        lVar28 = (ulong)((uVar18 + uVar7 >> 1) + (int)(uVar44 >> 1) * uVar17 + local_7c) * 0x10 +
                 *(long *)(this + 0x60);
        *(undefined2 *)(lVar28 + uVar38 * 2) = uVar45;
        *(undefined2 *)(lVar28 + 8 + uVar38 * 2) = uVar40;
        fVar14 = _LC42;
        HVar8 = this[0x55];
        if (local_ec < uVar21) {
          iVar51 = local_ec + local_b0;
          lVar28 = (ulong)local_ec * param_6;
          do {
            pfVar49 = local_e0 + (ulong)uVar35 + lVar28;
            uVar48 = uVar35;
            if (uVar35 < uVar2) {
              do {
                HVar9 = this[0x55];
                HVar39 = HVar9;
                if (*pfVar49 != _LC13) {
                  fVar56 = (*pfVar49 - (fVar55 * fVar6 + fVar5)) /
                           ((fVar57 / (float)(byte)HVar8) * fVar6);
                  if ((float)((uint)fVar56 & uVar52) < fVar14) {
                    fVar56 = (float)((uint)((float)(int)fVar56 -
                                           (float)(-(uint)(fVar56 < (float)(int)fVar56) &
                                                  (uint)fVar15)) | ~uVar52 & (uint)fVar56);
                  }
                  iVar27 = (int)fVar56;
                  if ((int)fVar56 < 0) {
                    iVar27 = 0;
                  }
                  HVar39 = SUB41(iVar27,0);
                  if ((int)((byte)HVar9 - 1) < iVar27) {
                    HVar39 = SUB41((byte)HVar9 - 1,0);
                  }
                }
                iVar27 = local_94 + uVar48;
                uVar48 = uVar48 + 1;
                pfVar49 = pfVar49 + 1;
                uVar16 = (uint)(byte)this[0x54] * (iVar27 + uVar16 * iVar51);
                puVar30 = (ushort *)((ulong)(uVar16 >> 3) + *(long *)(this + 0x68));
                bVar26 = (byte)uVar16 & 7;
                *puVar30 = ~((ushort)(byte)HVar9 << bVar26) & *puVar30 |
                           (ushort)(byte)HVar39 << bVar26;
                uVar16 = *(uint *)(this + 0x40);
              } while (uVar2 != uVar48);
            }
            iVar51 = iVar51 + 1;
            lVar28 = lVar28 + param_6;
          } while (uVar21 + local_b0 != iVar51);
          uVar48 = *(uint *)(this + 0x44);
          uVar21 = local_ec + uVar48;
          uVar2 = uVar35 + uVar48;
        }
        uVar35 = uVar2;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar19);
      while( true ) {
        local_ec = uVar21;
        uVar47 = uVar47 + 1;
        if (uVar20 <= uVar47) goto LAB_00107bba;
        uVar42 = uVar42 + 1;
        uVar44 = (ulong)uVar42;
        if (uVar46 <= local_90) break;
LAB_00107b89:
        uVar21 = local_ec + uVar48;
      }
    } while( true );
  }
LAB_00107bba:
  uVar16 = uVar16 - 1;
  if (param_1 < 2) {
    param_1 = 2;
  }
  uVar46 = 2;
  if (1 < param_2) {
    uVar46 = param_2;
  }
  uVar52 = uVar41 + 1;
  if (uVar16 < uVar41 + 1) {
    uVar52 = uVar16;
  }
  uVar41 = uVar33 + 1;
  if (uVar16 < uVar33 + 1) {
    uVar41 = uVar16;
  }
  CalculateActiveEdges
            (this,param_1 - 2,uVar46 - 2,uVar41 - (param_1 - 2),uVar52 - (uVar46 - 2),local_e0,
             local_94,local_b0,param_6,fVar15,param_8,param_7);
  if (pfVar24 != (float *)0x0) {
    (**(code **)(*(long *)param_7 + 0x18))(param_7,pfVar24,local_8c * uVar34 * 4);
  }
  puVar30 = *(ushort **)(this + 0x60);
  uVar16 = local_6c - 2;
  if (1 < local_6c) {
    do {
      local_84 = local_84 >> 1;
      uVar33 = (&sGridOffsets)[uVar16];
      uVar41 = local_84 + 1 >> 1;
      if ((uVar18 & 1) != 0) {
        uVar19 = uVar19 + 1;
        uVar18 = uVar18 - 1;
      }
      if ((uVar32 & 1) != 0) {
        uVar20 = uVar20 + 1;
        uVar32 = (ulong)((int)uVar32 - 1);
      }
      uVar34 = (uint)uVar32;
      uVar46 = uVar34;
      while (uVar46 < uVar34 + uVar20) {
        if (uVar18 < uVar18 + uVar19) {
          uVar46 = uVar18;
          do {
            uVar29 = 0;
            uVar50 = 0xffff;
            puVar31 = puVar30 + (ulong)((uVar46 >> 1) + (int)(uVar32 >> 1) * uVar17 + local_7c) * 8;
            puVar1 = puVar31 + 4;
            do {
              uVar10 = *puVar31;
              if (uVar10 != 0xffff) {
                if (uVar10 < uVar50) {
                  uVar50 = uVar10;
                }
                if (uVar29 < puVar31[4]) {
                  uVar29 = puVar31[4];
                }
              }
              puVar31 = puVar31 + 1;
            } while (puVar31 != puVar1);
            uVar52 = uVar46 + 2;
            uVar44 = (ulong)(uVar46 >> 1 & 1 | (uint)uVar32 & 2);
            uVar46 = (uVar46 >> 2) + (int)(uVar32 >> 2) * uVar41 + uVar33;
            puVar30[(ulong)uVar46 * 8 + uVar44] = uVar50;
            puVar30[(ulong)uVar46 * 8 + uVar44 + 4] = uVar29;
            uVar46 = uVar52;
          } while (uVar52 < uVar18 + uVar19);
        }
        uVar46 = (uint)uVar32 + 2;
        uVar32 = (ulong)uVar46;
      }
      uVar18 = uVar18 >> 1;
      uVar32 = (ulong)(uVar34 >> 1);
      uVar19 = uVar19 + 1 >> 1;
      if (local_84 < uVar19) {
        uVar19 = local_84;
      }
      uVar20 = uVar20 + 1 >> 1;
      if (local_84 < uVar20) {
        uVar20 = local_84;
      }
      bVar54 = uVar16 != 0;
      uVar16 = uVar16 - 1;
      uVar17 = uVar41;
      local_7c = uVar33;
    } while (bVar54);
  }
  *(undefined4 *)(this + 0x56) = 0xffff;
  puVar1 = puVar30 + 4;
  do {
    uVar50 = *puVar30;
    if (uVar50 != 0xffff) {
      uVar29 = *(ushort *)(this + 0x56);
      if (uVar50 < *(ushort *)(this + 0x56)) {
        uVar29 = uVar50;
      }
      *(ushort *)(this + 0x56) = uVar29;
      uVar50 = *(ushort *)(this + 0x58);
      if (*(ushort *)(this + 0x58) < puVar30[4]) {
        uVar50 = puVar30[4];
      }
      *(ushort *)(this + 0x58) = uVar50;
    }
    puVar30 = puVar30 + 1;
  } while (puVar30 != puVar1);
  if (*(long *)(this + 0xb0) != 0) {
    puVar53 = *(undefined8 **)(this + 0xc0);
    puVar3 = puVar53 + *(long *)(this + 0xb0);
    for (; puVar53 < puVar3; puVar53 = puVar53 + 1) {
      while (piVar11 = (int *)*puVar53, piVar11 != (int *)0x0) {
        LOCK();
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 != 0) break;
        plVar37 = *(long **)(piVar11 + 6);
        if (plVar37 != (long *)0x0) {
          if ((*(long *)(piVar11 + 2) != 0) &&
             (plVar4 = plVar37 + *(long *)(piVar11 + 2) * 2, plVar37 < plVar4)) {
            do {
              if ((long *)*plVar37 != (long *)0x0) {
                (**(code **)(*(long *)*plVar37 + 0x18))();
              }
              plVar37 = plVar37 + 2;
            } while (plVar37 < plVar4);
            plVar37 = *(long **)(piVar11 + 6);
          }
          piVar11[2] = 0;
          piVar11[3] = 0;
          (*Free)(plVar37);
        }
        puVar53 = puVar53 + 1;
        (*Free)(piVar11);
        if (puVar3 <= puVar53) goto LAB_00107f1f;
      }
    }
  }
LAB_00107f1f:
  *(undefined8 *)(this + 0xb0) = 0;
  return;
}



/* JPH::HeightFieldShape::GetMaterials(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned char*, long) const */

void __thiscall
JPH::HeightFieldShape::GetMaterials
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,uchar *param_5
          ,long param_6)

{
  int iVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (*(long *)(this + 0x90) == 0) {
      uVar6 = 0;
      do {
        uVar6 = uVar6 + 1;
        pvVar2 = memset(param_5,0,(ulong)param_3);
        param_5 = (uchar *)((long)pvVar2 + param_6);
      } while (uVar6 < param_4);
      return;
    }
    iVar1 = *(int *)(this + 0x40);
    iVar9 = *(int *)(this + 0xa8);
    uVar6 = 0;
    bVar3 = (byte)iVar9;
    iVar7 = param_2 * (iVar1 + -1) + param_1;
    do {
      uVar8 = iVar9 * iVar7;
      lVar4 = 0;
      puVar5 = (ushort *)((ulong)(uVar8 >> 3) + *(long *)(this + 0xa0));
      do {
        param_5[lVar4] =
             (byte)((int)(uint)*puVar5 >> (sbyte)(uVar8 & 7)) & (char)(1 << (bVar3 & 0x1f)) - 1U;
        iVar9 = *(int *)(this + 0xa8);
        lVar4 = lVar4 + 1;
        uVar8 = (uVar8 & 7) + iVar9;
        puVar5 = (ushort *)((long)puVar5 + (ulong)(uVar8 >> 3));
      } while ((uint)lVar4 < param_3);
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + iVar1 + -1;
      param_5 = param_5 + param_6;
    } while (uVar6 < param_4);
  }
  return;
}



/* JPH::HeightFieldShape::SetMaterials(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned char const*, long, JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > > const*, JPH::TempAllocator&) */

bool __thiscall
JPH::HeightFieldShape::SetMaterials
          (HeightFieldShape *this,uint param_1,uint param_2,uint param_3,uint param_4,uchar *param_5
          ,long param_6,Array *param_7,TempAllocator *param_8)

{
  int iVar1;
  long *plVar2;
  byte *pbVar3;
  void *__s;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  sbyte sVar13;
  ulong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ushort *puVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  ushort *puVar24;
  int iVar25;
  ushort *puVar26;
  uint uVar27;
  uint uVar28;
  long *plVar29;
  int local_5c;
  
  bVar16 = param_3 == 0 || param_4 == 0;
  if (bVar16) {
    return bVar16;
  }
  if (param_7 != (Array *)0x0) {
    local_5c = *(int *)param_7;
    puVar7 = (undefined1 *)(**(code **)(*(long *)param_8 + 0x10))(param_8);
    uVar10 = *(ulong *)param_7;
    uVar14 = *(ulong *)(this + 0x78);
    if ((uVar14 < uVar10) && (*(ulong *)(this + 0x80) < uVar10)) {
      puVar11 = (undefined8 *)(*Allocate)(uVar10 * 8);
      puVar9 = *(undefined8 **)(this + 0x88);
      if (puVar9 != (undefined8 *)0x0) {
        lVar22 = *(long *)(this + 0x78);
        if (puVar11 < puVar9) {
          puVar15 = puVar9;
          for (puVar12 = puVar11; puVar12 < puVar11 + lVar22; puVar12 = puVar12 + 1) {
            uVar6 = *puVar15;
            puVar15 = puVar15 + 1;
            *puVar12 = uVar6;
          }
        }
        else {
          puVar15 = puVar9 + lVar22 + -1;
          puVar12 = puVar11 + lVar22 + -1;
          if (!CARRY8(lVar22 * 8 - 8,(ulong)puVar11)) {
            do {
              uVar6 = *puVar15;
              puVar23 = puVar12 + -1;
              puVar15 = puVar15 + -1;
              *puVar12 = uVar6;
              puVar12 = puVar23;
            } while (puVar11 <= puVar23);
          }
        }
        (*Free)(puVar9);
      }
      *(undefined8 **)(this + 0x88) = puVar11;
      uVar14 = *(ulong *)(this + 0x78);
      *(ulong *)(this + 0x80) = uVar10;
      uVar10 = *(ulong *)param_7;
    }
    plVar29 = *(long **)(param_7 + 0x10);
    plVar2 = plVar29 + uVar10;
    puVar21 = puVar7;
    for (; plVar29 != plVar2; plVar29 = plVar29 + 1) {
      plVar4 = *(long **)(this + 0x88);
      lVar22 = uVar14 * 8;
      lVar5 = *plVar29;
      plVar8 = plVar4;
      if (0 < lVar22 >> 5) {
        do {
          if (lVar5 == *plVar8) goto LAB_00108230;
          if (lVar5 == plVar8[1]) {
            plVar8 = plVar8 + 1;
            goto LAB_00108230;
          }
          if (lVar5 == plVar8[2]) {
            plVar8 = plVar8 + 2;
            goto LAB_00108230;
          }
          if (lVar5 == plVar8[3]) {
            plVar8 = plVar8 + 3;
            goto LAB_00108230;
          }
          plVar8 = plVar8 + 4;
        } while (plVar8 != plVar4 + (lVar22 >> 5) * 4);
        lVar22 = (long)(plVar4 + uVar14) - (long)plVar8;
      }
      lVar22 = lVar22 >> 3;
      if (lVar22 == 2) {
LAB_001084bf:
        if (lVar5 != *plVar8) {
          plVar8 = plVar8 + 1;
LAB_001083a4:
          if (lVar5 != *plVar8) goto LAB_001083ad;
        }
LAB_00108230:
        if (plVar4 + uVar14 == plVar8) goto LAB_001083ad;
        *puVar21 = (char)((long)plVar8 - (long)plVar4 >> 3);
        uVar14 = *(ulong *)(this + 0x78);
      }
      else {
        if (lVar22 == 3) {
          if (lVar5 != *plVar8) {
            plVar8 = plVar8 + 1;
            goto LAB_001084bf;
          }
          goto LAB_00108230;
        }
        if (lVar22 == 1) goto LAB_001083a4;
LAB_001083ad:
        if (0xff < uVar14) goto LAB_0010834d;
        *puVar21 = (char)uVar14;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        lVar22 = *(long *)(this + 0x78);
        uVar14 = lVar22 + 1;
        if (*(ulong *)(this + 0x80) < uVar14) {
          uVar10 = *(ulong *)(this + 0x80) * 2;
          if (uVar14 <= uVar10) {
            uVar14 = uVar10;
          }
          puVar9 = (undefined8 *)(*Allocate)(uVar14 * 8);
          puVar11 = *(undefined8 **)(this + 0x88);
          if (puVar11 != (undefined8 *)0x0) {
            lVar22 = *(long *)(this + 0x78);
            if (puVar9 < puVar11) {
              puVar15 = puVar11;
              for (puVar12 = puVar9; puVar12 < puVar9 + lVar22; puVar12 = puVar12 + 1) {
                uVar6 = *puVar15;
                puVar15 = puVar15 + 1;
                *puVar12 = uVar6;
              }
            }
            else {
              puVar15 = puVar11 + lVar22 + -1;
              puVar12 = puVar9 + lVar22 + -1;
              if (!CARRY8(lVar22 * 8 - 8,(ulong)puVar9)) {
                do {
                  uVar6 = *puVar15;
                  puVar23 = puVar12 + -1;
                  puVar15 = puVar15 + -1;
                  *puVar12 = uVar6;
                  puVar12 = puVar23;
                } while (puVar9 <= puVar23);
              }
            }
            (*Free)(puVar11);
          }
          lVar22 = *(long *)(this + 0x78);
          *(undefined8 **)(this + 0x88) = puVar9;
          *(ulong *)(this + 0x80) = uVar14;
          uVar14 = lVar22 + 1;
        }
        else {
          puVar9 = *(undefined8 **)(this + 0x88);
        }
        *(ulong *)(this + 0x78) = uVar14;
        puVar9[lVar22] = lVar5;
      }
      puVar21 = puVar21 + 1;
    }
    goto LAB_00108269;
  }
  uVar14 = *(ulong *)(this + 0x78);
  local_5c = (int)uVar14;
  puVar7 = (undefined1 *)(**(code **)(*(long *)param_8 + 0x10))(param_8,uVar14 & 0xffffffff);
  uVar10 = 0;
  if (local_5c != 0) {
    if ((uVar14 & 1) != 0) {
      uVar10 = 1;
      *puVar7 = 0;
      if ((uVar14 & 0xffffffff) == 1) goto LAB_00108525;
    }
    do {
      puVar7[uVar10] = (char)uVar10;
      lVar22 = uVar10 + 1;
      uVar10 = uVar10 + 2;
      puVar7[lVar22] = (char)lVar22;
    } while (uVar10 != (uVar14 & 0xffffffff));
  }
LAB_00108525:
  uVar14 = *(ulong *)(this + 0x78);
LAB_00108269:
  if (uVar14 != 1) {
    puVar20 = *(ushort **)(this + 0xa0);
    iVar1 = *(int *)(this + 0x40) + -1;
    uVar18 = *(uint *)(this + 0xa8);
    uVar17 = (int)uVar14 - 1;
    if (uVar17 == 0) {
      uVar17 = (1 << ((byte)uVar18 & 0x1f)) - 1U & 0xffff;
    }
    else {
      uVar27 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> uVar27 == 0; uVar27 = uVar27 - 1) {
        }
      }
      uVar28 = 0x20 - (uVar27 ^ 0x1f);
      if (uVar18 < uVar28) {
        iVar25 = iVar1 * iVar1 * uVar28;
        uVar14 = (ulong)((iVar25 + 7U >> 3) + 1);
        if (*(ulong *)(this + 0x98) < uVar14) {
          puVar20 = (ushort *)(*Reallocate)(puVar20,*(ulong *)(this + 0x98),uVar14);
          *(ushort **)(this + 0xa0) = puVar20;
          *(ulong *)(this + 0x98) = uVar14;
        }
        __s = (void *)((long)puVar20 + *(long *)(this + 0x90));
        if (__s < (void *)((long)puVar20 + uVar14)) {
          memset(__s,0,uVar14 - *(long *)(this + 0x90));
          puVar20 = *(ushort **)(this + 0xa0);
        }
        uVar18 = iVar25 + -0x20 + (uVar27 ^ 0x1f);
        *(ulong *)(this + 0x90) = uVar14;
        iVar25 = *(int *)(this + 0xa8);
        uVar27 = (iVar1 * iVar1 + -1) * iVar25;
        uVar17 = (1 << ((byte)uVar28 & 0x1f)) - 1U & 0xffff;
        puVar26 = (ushort *)((long)((int)uVar27 >> 3) + (long)puVar20);
        puVar24 = (ushort *)((long)((int)uVar18 >> 3) + (long)puVar20);
        if (!CARRY8((long)((int)uVar18 >> 3),(ulong)puVar20)) {
          do {
            uVar19 = uVar18 & 7;
            uVar18 = uVar19 - uVar28;
            sVar13 = (sbyte)uVar19;
            *puVar24 = (ushort)(((int)(uint)*puVar26 >> (sbyte)(uVar27 & 7) &
                                (1 << ((byte)iVar25 & 0x1f)) - 1U) << sVar13) |
                       ~(ushort)(uVar17 << sVar13) & *puVar24;
            uVar27 = (uVar27 & 7) - *(int *)(this + 0xa8);
            puVar20 = *(ushort **)(this + 0xa0);
            puVar26 = (ushort *)((long)puVar26 + (long)((int)uVar27 >> 3));
            puVar24 = (ushort *)((long)puVar24 + (long)((int)uVar18 >> 3));
          } while (puVar20 <= puVar24);
        }
        *(uint *)(this + 0xa8) = uVar28;
        uVar18 = uVar28;
      }
      else {
        uVar17 = (1 << ((byte)uVar18 & 0x1f)) - 1U & 0xffff;
      }
    }
    uVar27 = 0;
    iVar25 = param_2 * iVar1 + param_1;
    while( true ) {
      uVar28 = uVar18 * iVar25;
      lVar22 = 0;
      puVar20 = (ushort *)((ulong)(uVar28 >> 3) + (long)puVar20);
      do {
        pbVar3 = param_5 + lVar22;
        lVar22 = lVar22 + 1;
        sVar13 = (sbyte)(uVar28 & 7);
        *puVar20 = ~(ushort)(uVar17 << sVar13) & *puVar20 | (ushort)(byte)puVar7[*pbVar3] << sVar13;
        uVar18 = *(uint *)(this + 0xa8);
        uVar28 = (uVar28 & 7) + uVar18;
        puVar20 = (ushort *)((long)puVar20 + (ulong)(uVar28 >> 3));
      } while ((uint)lVar22 < param_3);
      uVar27 = uVar27 + 1;
      iVar25 = iVar25 + iVar1;
      param_5 = param_5 + param_6;
      if (param_4 <= uVar27) break;
      puVar20 = *(ushort **)(this + 0xa0);
    }
  }
  bVar16 = true;
LAB_0010834d:
  (**(code **)(*(long *)param_8 + 0x18))(param_8,puVar7,local_5c);
  return bVar16;
}



/* JPH::HeightFieldShape::GetMaterial(unsigned int, unsigned int) const */

undefined8 __thiscall
JPH::HeightFieldShape::GetMaterial(HeightFieldShape *this,uint param_1,uint param_2)

{
  uint uVar1;
  
  if (*(long *)(this + 0x78) == 0) {
    return PhysicsMaterial::sDefault;
  }
  if (*(long *)(this + 0x78) != 1) {
    uVar1 = ((*(int *)(this + 0x40) + -1) * param_2 + param_1) * *(int *)(this + 0xa8);
    return (*(undefined8 **)(this + 0x88))
           [(1 << ((byte)*(int *)(this + 0xa8) & 0x1f)) - 1U &
            (int)(uint)*(ushort *)(*(long *)(this + 0xa0) + (ulong)(uVar1 >> 3)) >>
            ((byte)uVar1 & 7) & 0xffff];
  }
  return **(undefined8 **)(this + 0x88);
}



/* JPH::HeightFieldShape::GetMaterial(JPH::SubShapeID const&) const */

void __thiscall JPH::HeightFieldShape::GetMaterial(HeightFieldShape *this,SubShapeID *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 0x40);
  uVar4 = 0;
  uVar3 = uVar1 - 1;
  if (uVar3 != 0) {
    iVar2 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    uVar4 = (int)(1L << ((char)iVar2 * '\x02' + 3U & 0x3f)) - 1;
  }
  uVar4 = (*(uint *)param_1 & uVar4) >> 1;
  GetMaterial(this,uVar4 % uVar1,uVar4 / uVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HeightFieldShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

int __thiscall
JPH::HeightFieldShape::GetTrianglesNext
          (HeightFieldShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  GetTrianglesContext GVar4;
  ushort uVar5;
  int iVar6;
  HeightFieldShape *this_00;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [14];
  undefined1 *puVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  char *pcVar25;
  undefined8 uVar26;
  long lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  float *pfVar33;
  float *pfVar34;
  undefined1 *puVar35;
  int iVar37;
  int *piVar38;
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  uint uVar41;
  float *pfVar42;
  undefined1 (*pauVar43) [16];
  ulong uVar44;
  float *pfVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  long lVar50;
  long in_FS_OFFSET;
  float fVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 auVar63 [16];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  int iStack_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  uint uStack_210;
  uint uStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  ulong uStack_1d0;
  GetTrianglesContext *pGStack_1c8;
  uint uStack_1c0;
  int local_1bc;
  uint uStack_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  int *piStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  GetTrianglesContext *local_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  float fStack_12c;
  uint local_128;
  uint local_124;
  float *pfStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  uint uStack_f8;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  uint uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined8 uStack_58;
  float fStack_50;
  long local_40;
  undefined1 *puVar36;
  
  iVar49 = 0;
  pfVar45 = &fStack_268;
  pfVar34 = &fStack_268;
  iVar37 = *(int *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar33 = &fStack_268;
  local_190 = param_1;
  if (-1 < iVar37) {
    lVar50 = *(long *)param_1;
    *(PhysicsMaterial ***)(param_1 + 0x2d8) = param_4;
    *(int *)(param_1 + 0x2c0) = param_2;
    iVar6 = *(int *)(lVar50 + 0x48);
    *(Float3 **)(param_1 + 0x2c8) = param_3;
    param_1[0x2e0] = (GetTrianglesContext)0x0;
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    pfVar33 = &fStack_268;
    if (iVar6 != 0) {
      uStack_238 = *(uint *)(lVar50 + 0x40) - 1;
      local_128 = *(uint *)(lVar50 + 0x44);
      uVar22 = *(uint *)(lVar50 + 0x40) / local_128;
      local_124 = local_128 + 1;
      local_1b0 = uVar22 - 1;
      if (local_1b0 == 0) {
        local_1ac = 0;
        local_1bc = 0;
      }
      else {
        uVar46 = 0x1f;
        if (local_1b0 != 0) {
          for (; local_1b0 >> uVar46 == 0; uVar46 = uVar46 - 1) {
          }
        }
        local_1bc = (&sGridOffsets)[0x1f - (uVar46 ^ 0x1f)];
        local_1ac = 0x20 - (uVar46 ^ 0x1f);
      }
      local_1b4 = uVar22 + 1 >> 1;
      uVar31 = (long)(int)(local_124 * local_124) * 0x10 + 0x10;
      pfVar33 = &fStack_268;
      while (pfVar34 != (float *)((long)&fStack_268 - (uVar31 & 0xfffffffffffff000))) {
        pfVar45 = (float *)((long)pfVar33 + -0x1000);
        *(undefined8 *)((long)pfVar33 + -8) = *(undefined8 *)((long)pfVar33 + -8);
        pfVar34 = (float *)((long)pfVar33 + -0x1000);
        pfVar33 = (float *)((long)pfVar33 + -0x1000);
      }
      uVar31 = (ulong)((uint)uVar31 & 0xfff);
      lVar8 = -uVar31;
      puVar35 = (undefined1 *)((long)pfVar45 + lVar8);
      puVar36 = (undefined1 *)((long)pfVar45 + lVar8);
      if (uVar31 != 0) {
        *(undefined8 *)((long)pfVar45 + -8) = *(undefined8 *)((long)pfVar45 + -8);
      }
      uVar31 = (long)(int)(local_124 * local_124) + 0x17;
      pfStack_120 = (float *)((ulong)((long)pfVar45 + lVar8 + 0xf) & 0xfffffffffffffff0);
      puVar20 = (undefined1 *)((long)pfVar45 + lVar8);
      while (puVar36 != (undefined1 *)((long)pfVar45 + (lVar8 - (uVar31 & 0xfffffffffffff000)))) {
        puVar35 = puVar20 + -0x1000;
        *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
        puVar36 = puVar20 + -0x1000;
        puVar20 = puVar20 + -0x1000;
      }
      uVar31 = (ulong)((uint)uVar31 & 0xff0);
      lVar8 = -uVar31;
      pfVar33 = (float *)(puVar35 + lVar8);
      if (uVar31 != 0) {
        *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
      }
      fStack_1e8 = *(float *)(lVar50 + 0x30);
      fStack_1f8 = *(float *)(lVar50 + 0x34);
      fStack_208 = *(float *)(lVar50 + 0x38);
      uVar31 = (ulong)(puVar35 + lVar8 + 0xf) & 0xfffffffffffffff0;
      fStack_248 = *(float *)(lVar50 + 0x20);
      fStack_258 = *(float *)(lVar50 + 0x24);
      fStack_268 = *(float *)(lVar50 + 0x28);
      piStack_1a8 = &iStack_88;
      uStack_210 = local_128 * local_124;
      iStack_228 = uStack_238 - __LC27;
      iStack_224 = uStack_238 - _UNK_00116694;
      iStack_220 = uStack_238 - _UNK_00116698;
      iStack_21c = uStack_238 - _UNK_0011669c;
      fStack_264 = fStack_268;
      fStack_260 = fStack_268;
      fStack_25c = fStack_268;
      fStack_254 = fStack_258;
      fStack_250 = fStack_258;
      fStack_24c = fStack_258;
      fStack_244 = fStack_248;
      fStack_240 = fStack_248;
      fStack_23c = fStack_248;
      uStack_234 = uStack_238;
      uStack_230 = uStack_238;
      uStack_22c = uStack_238;
      fStack_204 = fStack_208;
      fStack_200 = fStack_208;
      fStack_1fc = fStack_208;
      fStack_1f4 = fStack_1f8;
      fStack_1f0 = fStack_1f8;
      fStack_1ec = fStack_1f8;
      fStack_1e4 = fStack_1e8;
      fStack_1e0 = fStack_1e8;
      fStack_1dc = fStack_1e8;
      uStack_178 = lVar50;
      do {
        fVar54 = _LC2;
        uVar22 = *(uint *)(param_1 + (long)iVar37 * 4 + 0xc);
        uVar46 = uVar22 & 0x3fff;
        uVar29 = uVar22 >> 0x1c;
        uVar41 = uVar22 >> 0xe & 0x3fff;
        if (uVar29 < local_1ac) {
          bVar2 = (byte)(uVar22 >> 0x18);
          uVar22 = 1 << (bVar2 >> 4);
          if (local_1b4 < uVar22) {
            uVar22 = local_1b4;
          }
          auVar53 = *(undefined1 (*) [16])
                     ((ulong)(uVar22 * uVar41 + (&sGridOffsets)[uVar29] + uVar46) * 0x10 +
                     *(long *)(uStack_178 + 0x60));
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar53._0_10_;
          auVar9._12_2_ = auVar53._6_2_;
          auVar10._8_2_ = auVar53._4_2_;
          auVar10._0_8_ = auVar53._0_8_;
          auVar10._10_4_ = auVar9._10_4_;
          auVar19._6_8_ = 0;
          auVar19._0_6_ = auVar10._8_6_;
          uVar22 = local_128 << (((char)local_1ac + -1) - (bVar2 >> 4) & 0x1f);
          iVar49 = uVar41 * 2;
          fStack_170 = (float)auVar53._12_2_ * fStack_1f0 + fStack_250;
          fStack_16c = (float)auVar53._14_2_ * fStack_1ec + fStack_24c;
          fStack_130 = (float)auVar10._8_4_ * fStack_1f0 + fStack_250;
          fStack_12c = (float)(auVar9._10_4_ >> 0x10) * fStack_1ec + fStack_24c;
          uStack_178 = CONCAT44((float)auVar53._10_2_ * fStack_1f4 + fStack_254,
                                (float)auVar53._8_2_ * fStack_1f8 + fStack_258);
          iVar6 = uVar46 * 2;
          uStack_138 = (undefined8 *)
                       CONCAT44((float)(int)CONCAT82(SUB148(auVar19 << 0x40,6),auVar53._2_2_) *
                                fStack_1f4 + fStack_254,
                                (float)auVar53._0_2_ * fStack_1f8 + fStack_258);
          auVar53._4_4_ = uVar22;
          auVar53._0_4_ = uVar22;
          auVar53._8_4_ = uVar22;
          auVar53._12_4_ = uVar22;
          iStack_7c = (uVar29 + 1) * 0x10000000 + uVar41 * 0x8000 + iVar6;
          auVar58._0_4_ = __LC25 + iVar6;
          auVar58._4_4_ = _UNK_00116674 + iVar6;
          auVar58._8_4_ = _UNK_00116678 + iVar6;
          auVar58._12_4_ = _UNK_0011667c + iVar6;
          auVar56._0_4_ = iVar6 + __LC26;
          auVar56._4_4_ = iVar6 + _UNK_00116684;
          auVar56._8_4_ = iVar6 + _UNK_00116688;
          auVar56._12_4_ = iVar6 + _UNK_0011668c;
          fStack_140 = (float)(int)((auVar58._8_8_ & 0xffffffff) * (ulong)uVar22) * fStack_1e0 +
                       fStack_240;
          fStack_13c = (float)(int)((auVar58._8_8_ >> 0x20) * (ulong)uVar22) * fStack_1dc +
                       fStack_23c;
          uStack_148 = CONCAT44((float)(int)(auVar58._4_4_ * uVar22) * fStack_1e4 + fStack_244,
                                (float)(int)(auVar58._0_4_ * uVar22) * fStack_1e8 + fStack_248);
          uVar30 = (uint)((auVar56._8_8_ & 0xffffffff) * (ulong)uVar22);
          uVar41 = (uint)((auVar56._8_8_ >> 0x20) * (ulong)uVar22);
          uVar46 = -(uint)(iStack_228 < (int)(auVar56._0_4_ * uVar22 - __LC27));
          uVar29 = -(uint)(iStack_224 < (int)(auVar56._4_4_ * uVar22 - _UNK_00116694));
          uVar48 = -(uint)(iStack_220 < (int)(uVar30 - _UNK_00116698));
          uVar28 = -(uint)(iStack_21c < (int)(uVar41 - _UNK_0011669c));
          fStack_150 = (float)(int)(~uVar48 & uVar30 | uStack_230 & uVar48) * fStack_1e0 +
                       fStack_240;
          fStack_14c = (float)(int)(~uVar28 & uVar41 | uStack_22c & uVar28) * fStack_1dc +
                       fStack_23c;
          uStack_158 = CONCAT44((float)(int)(~uVar29 & auVar56._4_4_ * uVar22 | uStack_234 & uVar29)
                                * fStack_1e4 + fStack_244,
                                (float)(int)(~uVar46 & auVar56._0_4_ * uVar22 | uStack_238 & uVar46)
                                * fStack_1e8 + fStack_248);
          auVar63._0_4_ = __LC28 + iVar49;
          auVar63._4_4_ = _UNK_001166a4 + iVar49;
          auVar63._8_4_ = _UNK_001166a8 + iVar49;
          auVar63._12_4_ = _UNK_001166ac + iVar49;
          uVar46 = uVar22 * (iVar49 + __LC29);
          uVar47 = (iVar49 + _UNK_001166b4) * uVar22;
          uVar23 = (iVar49 + _UNK_001166b4) * uVar22;
          uVar48 = (uint)((auVar53._8_8_ & 0xffffffff) * (ulong)(uint)(iVar49 + _UNK_001166b8));
          uVar29 = -(uint)(iStack_228 < (int)(uVar46 - __LC27));
          uVar41 = -(uint)(iStack_224 < (int)(uVar47 - _UNK_00116694));
          uVar28 = -(uint)(iStack_220 < (int)(uVar48 - _UNK_00116698));
          uVar30 = -(uint)(iStack_21c < (int)(uVar23 - _UNK_0011669c));
          fStack_160 = (float)(int)((auVar63._8_8_ & 0xffffffff) * (ulong)uVar22) * fStack_200 +
                       fStack_260;
          fStack_15c = (float)(int)((auVar63._8_8_ >> 0x20) * (ulong)uVar22) * fStack_1fc +
                       fStack_25c;
          uStack_168 = (float *)CONCAT44((float)(int)(auVar63._4_4_ * uVar22) * fStack_204 +
                                         fStack_264,
                                         (float)(int)(auVar63._0_4_ * uVar22) * fStack_208 +
                                         fStack_268);
          fStack_180 = (float)(int)(~uVar28 & uVar48 | uStack_230 & uVar28) * fStack_200 +
                       fStack_260;
          fStack_17c = (float)(int)(~uVar30 & uVar23 | uStack_22c & uVar30) * fStack_1fc +
                       fStack_25c;
          uStack_188 = CONCAT44((float)(int)(~uVar41 & uVar47 | uStack_234 & uVar41) * fStack_204 +
                                fStack_264,
                                (float)(int)(~uVar29 & uVar46 | uStack_238 & uVar29) * fStack_208 +
                                fStack_268);
          iStack_88 = iStack_7c + __LC30;
          iStack_84 = iStack_7c + _UNK_001166c4;
          iStack_80 = iStack_7c + _UNK_001166c8;
          iStack_7c = iStack_7c + _UNK_001166cc;
          *(ulong *)(puVar35 + lVar8 + -8) = CONCAT44(fStack_17c,fStack_180);
          *(undefined8 *)(puVar35 + lVar8 + -0x10) = uStack_188;
          *(ulong *)(puVar35 + lVar8 + -0x18) = CONCAT44(fStack_16c,fStack_170);
          *(long *)(puVar35 + lVar8 + -0x20) = uStack_178;
          *(undefined8 *)(puVar35 + lVar8 + -0x28) = 0x1096a4;
          iVar49 = HSGetTrianglesContext::VisitRangeBlock
                             (uStack_148,CONCAT44(fStack_13c,fStack_140),uStack_138,
                              CONCAT44(fStack_12c,fStack_130),uStack_168,
                              CONCAT44(fStack_15c,fStack_160),uStack_158,
                              CONCAT44(fStack_14c,fStack_150),param_1,piStack_1a8);
          *(ulong *)(param_1 + (long)iVar37 * 4 + 0xc) = CONCAT44(iStack_84,iStack_88);
          *(ulong *)(param_1 + (long)iVar37 * 4 + 0xc + 8) = CONCAT44(iStack_7c,iStack_80);
          *(int *)(param_1 + 8) = iVar49 + iVar37;
        }
        else {
          uStack_20c = uVar22 & 1;
          uStack_1a0 = local_128 * uVar41;
          lVar50 = *(long *)(uStack_178 + 0x60);
          bVar2 = *(byte *)(uStack_178 + 0x55);
          uVar48 = (uint)bVar2;
          uStack_1b8 = local_128 * uVar46;
          uVar29 = local_128 + uStack_1a0;
          uVar28 = local_128 + uStack_1b8;
          uStack_1d8 = uVar41 * 2 & 2;
          uStack_1d4 = uVar46 >> 1;
          uVar47 = local_1bc + (uVar41 >> 1) * local_1b4;
          lVar24 = (ulong)(uStack_1d4 + uVar47) * 0x10 + lVar50;
          uVar5 = *(ushort *)(lVar24 + 8 + (ulong)(uStack_1d8 | uStack_20c) * 2);
          fVar51 = (float)uVar48;
          uVar30 = (uint)*(ushort *)(lVar24 + (ulong)(uStack_1d8 | uStack_20c) * 2);
          if (uStack_1a0 < uVar29) {
            lVar24 = (ulong)(local_128 - 1) + 1;
            uStack_198 = CONCAT44(uStack_198._4_4_,uVar22) & 0xffffffff00003fff;
            uVar32 = uVar31;
            pfVar45 = pfStack_120;
            uVar22 = uStack_1a0;
            do {
              uVar44 = uVar32;
              if (uStack_1b8 < uVar28) {
                lVar27 = *(long *)(uStack_178 + 0x68);
                iVar37 = (int)uVar32;
                bVar3 = *(byte *)(uStack_178 + 0x54);
                fVar57 = *(float *)(uStack_178 + 0x30);
                fVar59 = *(float *)(uStack_178 + 0x34);
                fVar60 = *(float *)(uStack_178 + 0x38);
                fVar61 = *(float *)(uStack_178 + 0x3c);
                auVar53 = *(undefined1 (*) [16])(uStack_178 + 0x20);
                uVar44 = uVar32 + lVar24;
                uVar46 = (*(int *)(uStack_178 + 0x40) * uVar22 + uStack_1b8) * (uint)bVar3;
                pfVar42 = pfVar45;
                do {
                  iVar49 = (int)uVar32;
                  uVar23 = (int)(uint)*(ushort *)(lVar27 + (ulong)(uVar46 >> 3)) >>
                           ((byte)uVar46 & 7) & uVar48;
                  *(bool *)uVar32 = bVar2 == (byte)uVar23;
                  uVar32 = uVar32 + 1;
                  uVar46 = uVar46 + bVar3;
                  *pfVar42 = (float)((uStack_1b8 - iVar37) + iVar49) * fVar57 + auVar53._0_4_;
                  pfVar42[1] = (((float)uVar23 + fVar54) * ((float)(int)(uVar5 - uVar30) / fVar51) +
                               (float)uVar30) * fVar59 + auVar53._4_4_;
                  pfVar42[2] = (float)uVar22 * fVar60 + auVar53._8_4_;
                  pfVar42[3] = (float)uVar22 * fVar61 + auVar53._12_4_;
                  pfVar42 = pfVar42 + 4;
                } while (uVar32 != uVar44);
                pfVar45 = pfVar45 + lVar24 * 4;
              }
              pfVar45 = pfVar45 + 4;
              uVar32 = uVar44 + 1;
              uVar22 = uVar22 + 1;
            } while (uVar29 != uVar22);
            uVar46 = (uint)uStack_198;
            uStack_1d0 = uVar31;
            pGStack_1c8 = param_1;
            uStack_1c0 = uVar47;
            uStack_19c = uVar41;
          }
          fVar54 = _LC2;
          iStack_d0 = 1;
          if (uVar46 < local_1b0) {
            lVar24 = uVar31 + local_128;
            pfVar45 = pfStack_120 + (ulong)local_128 * 4;
            uVar32 = (ulong)(uVar46 + 1 & 1 | uStack_1d8);
            lVar27 = (ulong)((uVar46 + 1 >> 1) + uVar47) * 0x10 + lVar50;
            uVar5 = *(ushort *)(lVar27 + 8 + uVar32 * 2);
            uVar22 = (uint)*(ushort *)(lVar27 + uVar32 * 2);
            if (uStack_1a0 < uVar29) {
              lVar27 = *(long *)(uStack_178 + 0x68);
              iVar37 = *(int *)(uStack_178 + 0x40);
              fVar57 = *(float *)(uStack_178 + 0x30);
              fVar59 = *(float *)(uStack_178 + 0x34);
              fVar60 = *(float *)(uStack_178 + 0x38);
              fVar61 = *(float *)(uStack_178 + 0x3c);
              fVar62 = *(float *)(uStack_178 + 0x20);
              fVar64 = *(float *)(uStack_178 + 0x24);
              fVar65 = *(float *)(uStack_178 + 0x28);
              fVar11 = *(float *)(uStack_178 + 0x2c);
              bVar3 = *(byte *)(uStack_178 + 0x54);
              uVar47 = (uStack_1a0 * iVar37 + uVar28) * (uint)bVar3;
              uVar30 = uStack_1a0;
              do {
                uVar32 = (ulong)uVar30;
                uVar23 = (int)(uint)*(ushort *)(lVar27 + (ulong)(uVar47 >> 3)) >> ((byte)uVar47 & 7)
                         & uVar48;
                *(bool *)lVar24 = bVar2 == (byte)uVar23;
                lVar24 = lVar24 + (ulong)local_124;
                uVar30 = uVar30 + 1;
                uVar47 = uVar47 + iVar37 * (uint)bVar3;
                *pfVar45 = (float)uVar28 * fVar57 + fVar62;
                pfVar45[1] = (((float)uVar23 + fVar54) * ((float)(int)(uVar5 - uVar22) / fVar51) +
                             (float)uVar22) * fVar59 + fVar64;
                pfVar45[2] = (float)uVar32 * fVar60 + fVar65;
                pfVar45[3] = (float)uVar32 * fVar61 + fVar11;
                pfVar45 = pfVar45 + (ulong)local_124 * 4;
              } while (uVar29 != uVar30);
            }
            iStack_d0 = 0;
          }
          fVar54 = _LC2;
          if (uVar41 < local_1b0) {
            lVar24 = uVar31 + uStack_210;
            uStack_168 = pfStack_120 + (ulong)uStack_210 * 4;
            uVar22 = (uVar41 + 1) * 2;
            uVar32 = (ulong)(uStack_20c | uVar22 & 2);
            uStack_198 = CONCAT44(uStack_198._4_4_,uVar22) & 0xffffffff00000002;
            uStack_19c = (uVar41 + 1 >> 1) * local_1b4 + local_1bc;
            lVar27 = (ulong)(uStack_19c + uStack_1d4) * 0x10 + lVar50;
            uVar5 = *(ushort *)(lVar27 + 8 + uVar32 * 2);
            uVar22 = (uint)*(ushort *)(lVar27 + uVar32 * 2);
            if (uStack_1b8 < uVar28) {
              lVar7 = *(long *)(uStack_178 + 0x68);
              bVar3 = *(byte *)(uStack_178 + 0x54);
              fVar57 = *(float *)(uStack_178 + 0x30);
              fVar59 = *(float *)(uStack_178 + 0x34);
              fVar60 = *(float *)(uStack_178 + 0x38);
              fVar61 = *(float *)(uStack_178 + 0x3c);
              fVar62 = *(float *)(uStack_178 + 0x20);
              fVar64 = *(float *)(uStack_178 + 0x24);
              fVar65 = *(float *)(uStack_178 + 0x28);
              fVar11 = *(float *)(uStack_178 + 0x2c);
              iVar37 = (int)lVar24;
              uVar41 = (*(int *)(uStack_178 + 0x40) * uVar29 + uStack_1b8) * (uint)bVar3;
              lVar27 = (ulong)(local_128 - 1) + 1;
              lVar1 = lVar24 + lVar27;
              pfVar45 = uStack_168;
              do {
                iVar49 = (int)lVar24;
                uVar30 = (int)(uint)*(ushort *)(lVar7 + (ulong)(uVar41 >> 3)) >> ((byte)uVar41 & 7)
                         & uVar48;
                *(bool *)lVar24 = bVar2 == (byte)uVar30;
                lVar24 = lVar24 + 1;
                uVar41 = uVar41 + bVar3;
                *pfVar45 = (float)((uStack_1b8 - iVar37) + iVar49) * fVar57 + fVar62;
                pfVar45[1] = (((float)uVar30 + fVar54) * ((float)(int)(uVar5 - uVar22) / fVar51) +
                             (float)uVar22) * fVar59 + fVar64;
                pfVar45[2] = (float)uVar29 * fVar60 + fVar65;
                pfVar45[3] = (float)uVar29 * fVar61 + fVar11;
                pfVar45 = pfVar45 + 4;
              } while (lVar24 != lVar1);
              uStack_168 = uStack_168 + lVar27 * 4;
              lVar24 = lVar1;
            }
            fVar54 = _LC2;
            if (uVar46 < local_1b0) {
              uVar32 = (ulong)(uVar46 + 1 & 1 | (uint)uStack_198);
              lVar50 = lVar50 + (ulong)((uVar46 + 1 >> 1) + uStack_19c) * 0x10;
              uVar5 = *(ushort *)(lVar50 + 8 + uVar32 * 2);
              uVar46 = (uint)*(ushort *)(lVar50 + uVar32 * 2);
              uVar22 = (*(int *)(uStack_178 + 0x40) * uVar29 + uVar28) *
                       (uint)*(byte *)(uStack_178 + 0x54);
              uVar48 = (int)(uint)*(ushort *)(*(long *)(uStack_178 + 0x68) + (ulong)(uVar22 >> 3))
                       >> ((byte)uVar22 & 7) & uVar48;
              *(bool *)lVar24 = bVar2 == (byte)uVar48;
              fVar57 = *(float *)(uStack_178 + 0x34);
              fVar59 = *(float *)(uStack_178 + 0x38);
              fVar60 = *(float *)(uStack_178 + 0x3c);
              fVar61 = *(float *)(uStack_178 + 0x24);
              fVar62 = *(float *)(uStack_178 + 0x28);
              fVar64 = *(float *)(uStack_178 + 0x2c);
              *uStack_168 = (float)uVar28 * *(float *)(uStack_178 + 0x30) +
                            *(float *)(uStack_178 + 0x20);
              uStack_168[1] =
                   (((float)uVar48 + fVar54) * ((float)(int)(uVar5 - uVar46) / fVar51) +
                   (float)uVar46) * fVar57 + fVar61;
              uStack_168[2] = (float)uVar29 * fVar59 + fVar62;
              uStack_168[3] = (float)uVar29 * fVar60 + fVar64;
            }
          }
          else {
            uVar29 = uVar29 - 1;
          }
          uStack_e8 = 0;
          lVar50 = 0;
          uStack_d4 = local_128 >> 1;
          auStack_f4 = SUB1612((undefined1  [16])0x0,4);
          uStack_f8 = uStack_d4;
          iStack_cc = uVar29 - (uStack_1a0 + uStack_d4);
          auStack_108._4_4_ = uStack_d4;
          auStack_108._0_4_ = uStack_d4;
          iStack_d0 = (local_128 - uStack_d4) - iStack_d0;
          auStack_f4._4_4_ = iStack_d0;
          auStack_f4._8_4_ = uStack_d4;
          piVar38 = (int *)auStack_108;
          auStack_108._8_8_ = 0;
          auStack_108 = auStack_108 << 0x40;
          uStack_e4 = CONCAT44(uStack_d4,uStack_d4);
          uStack_dc = CONCAT44(uStack_d4,iStack_cc);
          do {
            uVar32 = (ulong)(local_124 * piVar38[1] + *piVar38);
            uVar22 = piVar38[2];
            pcVar25 = (char *)(uVar32 + uVar31);
            pauVar43 = (undefined1 (*) [16])(pfStack_120 + uVar32 * 4);
            if (piVar38[3] == -1) {
              auVar52._8_4_ = _LC15;
              auVar52._0_8_ = CONCAT44(_LC15,_LC15);
              auVar52._12_4_ = _LC15;
              auVar55._8_4_ = _LC17;
              auVar55._0_8_ = CONCAT44(_LC17,_LC17);
              auVar55._12_4_ = _LC17;
            }
            else {
              auVar52._8_4_ = _LC15;
              auVar52._0_8_ = CONCAT44(_LC15,_LC15);
              auVar52._12_4_ = _LC15;
              auVar55._8_4_ = _LC17;
              auVar55._0_8_ = CONCAT44(_LC17,_LC17);
              auVar55._12_4_ = _LC17;
              iVar37 = 0;
              while( true ) {
                pcVar21 = pcVar25 + (ulong)uVar22 + 1;
                pauVar39 = pauVar43;
                if (uVar22 != 0xffffffff) {
                  do {
                    if (*pcVar25 == '\0') {
                      auVar55 = minps(auVar55,*pauVar39);
                      auVar52 = maxps(auVar52,*pauVar39);
                    }
                    pcVar25 = pcVar25 + 1;
                    pauVar39 = pauVar39 + 1;
                  } while (pcVar25 != pcVar21);
                  pauVar43 = pauVar43 + (ulong)uVar22 + 1;
                  pcVar25 = pcVar21;
                }
                if (piVar38[3] == iVar37) break;
                iVar37 = iVar37 + 1;
                pcVar25 = pcVar25 + (local_128 - uVar22);
                pauVar43 = pauVar43 + (local_128 - uVar22);
              }
            }
            *(undefined1 (*) [16])((long)&uStack_c8 + lVar50) = auVar55;
            piVar38 = piVar38 + 4;
            *(undefined1 (*) [16])((long)piStack_1a8 + lVar50) = auVar52;
            lVar50 = lVar50 + 0x10;
          } while (lVar50 != 0x40);
          fStack_12c = (float)uStack_58;
          fStack_17c = (float)((ulong)uStack_58 >> 0x20);
          uStack_138 = (undefined8 *)CONCAT44((int)uStack_78,iStack_88);
          fStack_130 = fStack_68;
          uStack_188 = CONCAT44((int)((ulong)uStack_78 >> 0x20),iStack_84);
          fStack_180 = fStack_64;
          uStack_118 = __LC49;
          uStack_110 = _UNK_00116668;
          fStack_15c = (float)uStack_98;
          fStack_14c = (float)((ulong)uStack_98 >> 0x20);
          uStack_158 = CONCAT44((int)((ulong)uStack_b8 >> 0x20),uStack_c4);
          fStack_150 = fStack_a4;
          uStack_168 = (float *)CONCAT44((int)uStack_b8,uStack_c8);
          fStack_160 = fStack_a8;
          uStack_178 = CONCAT44(uStack_70,iStack_80);
          fStack_170 = fStack_60;
          fStack_16c = fStack_50;
          uStack_148 = CONCAT44(uStack_b0,uStack_c0);
          fStack_140 = fStack_a0;
          fStack_13c = fStack_90;
          *(ulong *)(puVar35 + lVar8 + -8) = CONCAT44(fStack_50,fStack_60);
          *(long *)(puVar35 + lVar8 + -0x10) = uStack_178;
          *(ulong *)(puVar35 + lVar8 + -0x18) = CONCAT44(fStack_17c,fStack_64);
          *(undefined8 *)(puVar35 + lVar8 + -0x20) = uStack_188;
          *(undefined8 *)(puVar35 + lVar8 + -0x28) = 0x10902e;
          iVar37 = HSGetTrianglesContext::VisitRangeBlock
                             (uStack_168,CONCAT44(fStack_15c,fStack_a8),uStack_158,
                              CONCAT44(fStack_14c,fStack_a4),uStack_148,
                              CONCAT44(fStack_90,fStack_a0),uStack_138,
                              CONCAT44(fStack_12c,fStack_68),param_1,&uStack_118);
          uVar22 = iVar37 - 1;
          if (-1 < (int)uVar22) {
            uVar32 = (ulong)(local_128 + 2);
            uStack_168 = (float *)(ulong)local_124;
            uStack_178 = uVar32 << 4;
            uStack_198 = (long)uStack_168 << 4;
            do {
              lVar50 = (ulong)*(uint *)((long)&uStack_118 + (ulong)uVar22 * 4) * 0x10;
              uVar41 = uStack_1a0 + *(int *)(auStack_108 + lVar50 + 4);
              uVar46 = *(int *)(auStack_108 + lVar50) + uStack_1b8;
              uVar48 = *(int *)(auStack_108 + lVar50 + 8) + uVar46;
              uVar29 = uVar22;
              if (uVar41 < *(int *)(auStack_108 + lVar50 + 0xc) + uVar41) {
                uVar28 = *(int *)(auStack_108 + lVar50 + 4) * local_124 - uStack_1b8;
                uStack_1c0 = uVar22;
                uStack_19c = *(int *)(auStack_108 + lVar50 + 0xc) + uVar41;
                do {
                  uVar44 = (ulong)uVar28;
                  if (uVar46 < uVar48) {
                    uStack_188 = CONCAT44(uStack_188._4_4_,uVar46);
                    do {
                      uVar40 = (ulong)uVar46;
                      lVar50 = (long)(int)(uVar46 + (int)uVar44);
                      pcVar25 = (char *)(uVar31 + lVar50);
                      if ((*pcVar25 == '\0') && (pcVar25[uVar32] == '\0')) {
                        pfVar45 = pfStack_120 + lVar50 * 4;
                        if (pcVar25[(long)uStack_168] != '\0') goto LAB_001092db;
                        fVar54 = *pfVar45;
                        fVar51 = pfVar45[1];
                        fVar57 = pfVar45[2];
                        iVar37 = 0;
                        iVar49 = *(int *)(param_1 + 0x2d0);
                        pfVar42 = (float *)((long)pfVar45 + uStack_198);
                        fVar62 = *pfVar42;
                        fVar64 = pfVar42[1];
                        fVar65 = pfVar42[2];
                        pfVar42 = pfVar45 + uVar32 * 4;
                        fVar59 = *pfVar42;
                        fVar60 = pfVar42[1];
                        fVar61 = pfVar42[2];
                        if (*(int *)(param_1 + 0x2c0) <= iVar49) {
LAB_00109315:
                          local_190[0x2e0] = (GetTrianglesContext)0x1;
                          pfVar33 = (float *)(puVar35 + lVar8);
                          goto LAB_001088e0;
                        }
                        while( true ) {
                          pfVar42 = *(float **)(param_1 + 0x2c8);
                          fVar11 = *(float *)(param_1 + 0x284);
                          fVar12 = *(float *)(param_1 + 0x288);
                          fVar13 = *(float *)(param_1 + 0x294);
                          fVar14 = *(float *)(param_1 + 0x298);
                          GVar4 = param_1[0x2e1];
                          fVar15 = *(float *)(param_1 + 0x2a4);
                          fVar16 = *(float *)(param_1 + 0x2a8);
                          fVar17 = *(float *)(param_1 + 0x2b4);
                          fVar18 = *(float *)(param_1 + 0x2b8);
                          *pfVar42 = fVar54 * *(float *)(param_1 + 0x280) +
                                     fVar51 * *(float *)(param_1 + 0x290) +
                                     fVar57 * *(float *)(param_1 + 0x2a0) +
                                     *(float *)(param_1 + 0x2b0);
                          pfVar42[1] = fVar54 * fVar11 + fVar51 * fVar13 + fVar57 * fVar15 + fVar17;
                          pfVar42[2] = fVar54 * fVar12 + fVar51 * fVar14 + fVar57 * fVar16 + fVar18;
                          if (GVar4 == (GetTrianglesContext)0x0) {
                            fVar54 = *(float *)(param_1 + 0x284);
                            fVar51 = *(float *)(param_1 + 0x288);
                            fVar57 = *(float *)(param_1 + 0x294);
                            fVar11 = *(float *)(param_1 + 0x298);
                            fVar12 = *(float *)(param_1 + 0x2a4);
                            fVar13 = *(float *)(param_1 + 0x2a8);
                            fVar14 = *(float *)(param_1 + 0x2b4);
                            fVar15 = *(float *)(param_1 + 0x2b8);
                            pfVar42[3] = fVar62 * *(float *)(param_1 + 0x280) +
                                         fVar64 * *(float *)(param_1 + 0x290) +
                                         fVar65 * *(float *)(param_1 + 0x2a0) +
                                         *(float *)(param_1 + 0x2b0);
                            pfVar42[4] = fVar62 * fVar54 + fVar64 * fVar57 + fVar65 * fVar12 +
                                         fVar14;
                            pfVar42[5] = fVar62 * fVar51 + fVar64 * fVar11 + fVar65 * fVar13 +
                                         fVar15;
                            uVar26 = CONCAT44(fVar59 * *(float *)(param_1 + 0x284) +
                                              fVar60 * *(float *)(param_1 + 0x294) +
                                              fVar61 * *(float *)(param_1 + 0x2a4) +
                                              *(float *)(param_1 + 0x2b4),
                                              fVar59 * *(float *)(param_1 + 0x280) +
                                              fVar60 * *(float *)(param_1 + 0x290) +
                                              fVar61 * *(float *)(param_1 + 0x2a0) +
                                              *(float *)(param_1 + 0x2b0));
                            fVar54 = fVar59 * *(float *)(param_1 + 0x288) +
                                     fVar60 * *(float *)(param_1 + 0x298) +
                                     fVar61 * *(float *)(param_1 + 0x2a8) +
                                     *(float *)(param_1 + 0x2b8);
                          }
                          else {
                            fVar54 = *(float *)(param_1 + 0x284);
                            fVar51 = *(float *)(param_1 + 0x288);
                            fVar57 = *(float *)(param_1 + 0x294);
                            fVar11 = *(float *)(param_1 + 0x298);
                            fVar12 = *(float *)(param_1 + 0x2a4);
                            fVar13 = *(float *)(param_1 + 0x2a8);
                            fVar14 = *(float *)(param_1 + 0x2b4);
                            fVar15 = *(float *)(param_1 + 0x2b8);
                            pfVar42[3] = fVar59 * *(float *)(param_1 + 0x280) +
                                         fVar60 * *(float *)(param_1 + 0x290) +
                                         fVar61 * *(float *)(param_1 + 0x2a0) +
                                         *(float *)(param_1 + 0x2b0);
                            *(ulong *)(pfVar42 + 4) =
                                 CONCAT44(fVar59 * fVar51 + fVar60 * fVar11 + fVar61 * fVar13 +
                                          fVar15,fVar59 * fVar54 + fVar60 * fVar57 + fVar61 * fVar12
                                                 + fVar14);
                            uVar26 = CONCAT44(*(float *)(param_1 + 0x284) * fVar62 +
                                              fVar64 * *(float *)(param_1 + 0x294) +
                                              fVar65 * *(float *)(param_1 + 0x2a4) +
                                              *(float *)(param_1 + 0x2b4),
                                              *(float *)(param_1 + 0x280) * fVar62 +
                                              fVar64 * *(float *)(param_1 + 0x290) +
                                              fVar65 * *(float *)(param_1 + 0x2a0) +
                                              *(float *)(param_1 + 0x2b0));
                            fVar54 = *(float *)(param_1 + 0x288) * fVar62 +
                                     fVar64 * *(float *)(param_1 + 0x298) +
                                     fVar65 * *(float *)(param_1 + 0x2a8) +
                                     *(float *)(param_1 + 0x2b8);
                          }
                          *(float **)(param_1 + 0x2c8) = pfVar42 + 9;
                          uStack_138 = *(undefined8 **)(param_1 + 0x2d8);
                          *(undefined8 *)(pfVar42 + 6) = uVar26;
                          pfVar42[8] = fVar54;
                          if (uStack_138 != (undefined8 *)0x0) {
                            this_00 = *(HeightFieldShape **)(param_1 + 0x210);
                            uStack_158 = CONCAT44(uStack_158._4_4_,iVar37);
                            uStack_148 = CONCAT44(uStack_148._4_4_,uVar41);
                            *(undefined8 *)(puVar35 + lVar8 + -8) = 0x109297;
                            uVar26 = GetMaterial(this_00,(uint)uVar40,uVar41);
                            *(undefined8 **)(param_1 + 0x2d8) = uStack_138 + 1;
                            *uStack_138 = uVar26;
                            uVar41 = (uint)uStack_148;
                            iVar37 = (int)uStack_158;
                          }
                          uVar46 = (uint)uVar40;
                          iVar49 = iVar49 + 1;
                          *(int *)(param_1 + 0x2d0) = iVar49;
                          if (param_1[0x2e0] != (GetTrianglesContext)0x0) goto LAB_001088e0;
                          if (iVar37 == 1) break;
LAB_001092db:
                          uVar46 = (uint)uVar40;
                          if (pcVar25[1] != '\0') break;
                          fVar54 = *pfVar45;
                          fVar51 = pfVar45[1];
                          fVar57 = pfVar45[2];
                          iVar37 = 1;
                          fVar59 = pfVar45[4];
                          fVar60 = pfVar45[5];
                          fVar61 = pfVar45[6];
                          iVar49 = *(int *)(param_1 + 0x2d0);
                          pfVar42 = (float *)((long)pfVar45 + uStack_178);
                          fVar62 = *pfVar42;
                          fVar64 = pfVar42[1];
                          fVar65 = pfVar42[2];
                          if (*(int *)(param_1 + 0x2c0) <= iVar49) goto LAB_00109315;
                        }
                      }
                      uVar28 = (uint)uVar44;
                      uVar46 = uVar46 + 1;
                    } while (uVar48 != uVar46);
                    uVar46 = (uint)uStack_188;
                  }
                  uVar41 = uVar41 + 1;
                  uVar28 = uVar28 + local_124;
                  uVar29 = uStack_1c0;
                } while (uStack_19c != uVar41);
              }
              uVar22 = uVar29 - 1;
            } while (uVar29 != 0);
          }
        }
        if (param_1[0x2e0] != (GetTrianglesContext)0x0) goto LAB_00109a9b;
        iVar37 = *(int *)(param_1 + 8) + -1;
        *(int *)(param_1 + 8) = iVar37;
        if (iVar37 < 0) goto LAB_00109a9b;
        uStack_178 = *(long *)param_1;
      } while( true );
    }
  }
LAB_001088e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)pfVar33 + -8) = &UNK_00109ac3;
    __stack_chk_fail();
  }
  return iVar49;
LAB_00109a9b:
  iVar49 = *(int *)(local_190 + 0x2d0);
  pfVar33 = (float *)(puVar35 + lVar8);
  goto LAB_001088e0;
}



/* JPH::HeightFieldShape::GetSubShapeIDBits() const */

int __thiscall JPH::HeightFieldShape::GetSubShapeIDBits(HeightFieldShape *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  uVar1 = *(int *)(this + 0x40) - 1;
  if (uVar1 != 0) {
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = iVar2 * 2 + 3;
  }
  return iVar2;
}



/* JPH::HeightFieldShape::GetSubShapeCoordinates(JPH::SubShapeID const&, unsigned int&, unsigned
   int&, unsigned int&) const */

void __thiscall
JPH::HeightFieldShape::GetSubShapeCoordinates
          (HeightFieldShape *this,SubShapeID *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 1;
  uVar3 = *(int *)(this + 0x40) - 1;
  if (uVar3 != 0) {
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = (int)(1L << ((char)iVar1 * '\x02' + 3U & 0x3f)) - 1;
  }
  uVar3 = (uVar2 & *(uint *)param_1) >> 1;
  *param_4 = uVar2 & *(uint *)param_1 & 1;
  *param_2 = uVar3 % *(uint *)(this + 0x40);
  *param_3 = uVar3 / *(uint *)(this + 0x40);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::Draw(JPH::DebugRenderer*,
   JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const::Visitor>(JPH::HeightFieldShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool, bool) const::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  uint uVar1;
  HeightFieldShape HVar2;
  HeightFieldShape HVar3;
  ushort uVar4;
  HeightFieldShape *this_00;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [14];
  char *pcVar21;
  Visitor *pVVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  char *pcVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  undefined1 *puVar38;
  int *piVar39;
  undefined1 (*pauVar40) [16];
  uint uVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  uint uVar46;
  undefined4 uVar47;
  undefined1 (*pauVar48) [16];
  undefined1 *puVar49;
  float *pfVar50;
  long lVar51;
  long in_FS_OFFSET;
  int iVar52;
  int iVar53;
  int iVar54;
  float fVar55;
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
  undefined1 auStack_458 [12];
  uint uStack_44c;
  Visitor *local_448;
  int iStack_440;
  uint uStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  ulong uStack_418;
  int local_410;
  uint uStack_40c;
  uint local_408;
  uint local_404;
  uint local_400;
  uint uStack_3fc;
  undefined1 *puStack_3f8;
  uint uStack_3f0;
  uint uStack_3ec;
  uint local_3e8;
  uint uStack_3e4;
  undefined1 (*pauStack_3e0) [16];
  undefined8 uStack_3d8;
  undefined1 *puStack_3d0;
  undefined1 *puStack_3c8;
  long lStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  uint uStack_3a8;
  undefined4 uStack_3a4;
  undefined8 uStack_3a0;
  uint uStack_398;
  uint local_394;
  HeightFieldShape *pHStack_390;
  undefined1 (*pauStack_388) [16];
  undefined8 uStack_380;
  undefined1 auStack_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [8];
  undefined8 uStack_360;
  undefined1 auStack_358 [16];
  float afStack_348 [4];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined1 auStack_2d8 [4];
  float fStack_2d4;
  undefined8 uStack_2c8;
  float fStack_2b4;
  undefined8 uStack_2a8;
  undefined1 auStack_298 [4];
  float fStack_294;
  undefined8 uStack_288;
  float fStack_274;
  undefined8 uStack_268;
  HeightFieldShape *local_258;
  undefined1 local_250 [12];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar45;
  
  puVar42 = auStack_458;
  puVar38 = auStack_458;
  puVar43 = auStack_458;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250._0_8_ = 0;
  local_448 = param_1;
  if (*(int *)(this + 0x48) == 0) {
LAB_00109b83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar42 + -8) = &UNK_0010ab6f;
    __stack_chk_fail();
  }
  local_3e8 = *(uint *)(this + 0x44);
  local_394 = local_3e8 + 1;
  local_400 = *(uint *)(this + 0x40) / local_3e8 - 1;
  if (local_400 == 0) {
    local_408 = 0;
    local_410 = 0;
  }
  else {
    uVar35 = 0x1f;
    if (local_400 != 0) {
      for (; local_400 >> uVar35 == 0; uVar35 = uVar35 - 1) {
      }
    }
    local_410 = (&sGridOffsets)[0x1f - (uVar35 ^ 0x1f)];
    local_408 = 0x20 - (uVar35 ^ 0x1f);
  }
  local_404 = *(uint *)(this + 0x40) / local_3e8 + 1 >> 1;
  uVar37 = (long)(int)(local_394 * local_394) * 0x10 + 0x10;
  puVar44 = auStack_458;
  while (puVar43 != auStack_458 + -(uVar37 & 0xfffffffffffff000)) {
    puVar38 = puVar44 + -0x1000;
    *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
    puVar43 = puVar44 + -0x1000;
    puVar44 = puVar44 + -0x1000;
  }
  uVar37 = (ulong)((uint)uVar37 & 0xfff);
  lVar7 = -uVar37;
  puVar44 = puVar38 + lVar7;
  puVar45 = puVar38 + lVar7;
  if (uVar37 != 0) {
    *(undefined8 *)(puVar38 + -8) = *(undefined8 *)(puVar38 + -8);
  }
  uVar37 = (long)(int)(local_394 * local_394) + 0x17;
  pauStack_3e0 = (undefined1 (*) [16])((ulong)(puVar38 + lVar7 + 0xf) & 0xfffffffffffffff0);
  puVar49 = puVar38 + lVar7;
  while (puVar45 != puVar38 + (lVar7 - (uVar37 & 0xfffffffffffff000))) {
    puVar44 = puVar49 + -0x1000;
    *(undefined8 *)(puVar49 + -8) = *(undefined8 *)(puVar49 + -8);
    puVar45 = puVar49 + -0x1000;
    puVar49 = puVar49 + -0x1000;
  }
  uVar37 = (ulong)((uint)uVar37 & 0xff0);
  lVar7 = -uVar37;
  puVar42 = puVar44 + lVar7;
  if (uVar37 != 0) {
    *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
  }
  fStack_428 = *(float *)(this + 0x24);
  puStack_3f8 = (undefined1 *)((ulong)(puVar44 + lVar7 + 0xf) & 0xfffffffffffffff0);
  fStack_438 = *(float *)(this + 0x34);
  iVar52 = 0;
  uVar31 = local_3e8 >> 1;
  uStack_418 = CONCAT44(uVar31,uVar31);
  uStack_40c = local_3e8 - uVar31;
  uVar35 = 0;
  uStack_44c = local_3e8 * local_394;
  fStack_434 = fStack_438;
  fStack_430 = fStack_438;
  fStack_42c = fStack_438;
  fStack_424 = fStack_428;
  fStack_420 = fStack_428;
  fStack_41c = fStack_428;
  do {
    fVar10 = _LC2;
    uVar32 = uVar35 >> 0x1c;
    uVar41 = uVar35 & 0x3fff;
    uVar24 = uVar35 >> 0xe & 0x3fff;
    pHStack_390 = local_258;
    if (uVar32 < local_408) {
      uVar35 = 1 << (byte)(uVar35 >> 0x1c);
      uStack_380 = CONCAT44(uStack_380._4_4_,iVar52);
      auStack_378._0_4_ = uVar31;
      if (local_404 < uVar35) {
        uVar35 = local_404;
      }
      auVar58 = *(undefined1 (*) [16])
                 ((ulong)(uVar35 * uVar24 + (&sGridOffsets)[uVar32] + uVar41) * 0x10 +
                 *(long *)(local_258 + 0x60));
      auVar8._10_2_ = 0;
      auVar8._0_10_ = auVar58._0_10_;
      auVar8._12_2_ = auVar58._6_2_;
      auVar9._8_2_ = auVar58._4_2_;
      auVar9._0_8_ = auVar58._0_8_;
      auVar9._10_4_ = auVar8._10_4_;
      auVar20._6_8_ = 0;
      auVar20._0_6_ = auVar9._8_6_;
      iVar52 = (uVar32 + 1) * 0x10000000 + uVar24 * 0x8000 + uVar41 * 2;
      uVar32 = iVar52 + _UNK_001166cc;
      iVar36 = -(uint)((float)auVar58._0_2_ * fStack_438 + fStack_428 <=
                      (float)auVar58._8_2_ * fStack_438 + fStack_428);
      iVar53 = -(uint)((float)(int)CONCAT82(SUB148(auVar20 << 0x40,6),auVar58._2_2_) * fStack_434 +
                       fStack_424 <= (float)auVar58._10_2_ * fStack_434 + fStack_424);
      iVar54 = -(uint)((float)auVar9._8_4_ * fStack_430 + fStack_420 <=
                      (float)auVar58._12_2_ * fStack_430 + fStack_420);
      auVar62._4_4_ = iVar53;
      auVar62._0_4_ = iVar36;
      auVar62._8_4_ = iVar54;
      auVar62._12_4_ =
           -(uint)((float)(auVar8._10_4_ >> 0x10) * fStack_42c + fStack_41c <=
                  (float)auVar58._14_2_ * fStack_42c + fStack_41c);
      uVar47 = movmskps(uVar24 * 0x8000,auVar62);
      uVar35 = iVar54 >> 0x1f;
      uVar31 = iVar53 >> 0x1f;
      uVar35 = uVar35 & iVar52 + _UNK_001166c8 | ~uVar35 & uVar32;
      auVar58._0_4_ = iVar52 + __LC30 & uVar31;
      auVar58._4_4_ = iVar52 + _UNK_001166c4 & uVar31;
      auVar58._8_4_ = uVar35 & uVar31;
      auVar58._12_4_ = uVar32 & uVar31;
      auVar66._0_4_ = ~uVar31 & iVar52 + __LC30;
      auVar66._4_4_ = ~uVar31 & uVar35;
      auVar66._8_4_ = ~uVar31 & uVar32;
      auVar66._12_4_ = ~uVar31 & uVar32;
      uVar31 = iVar36 >> 0x1f;
      auVar58 = auVar58 | auVar66;
      uVar35 = auVar58._12_4_;
      auVar59._0_4_ = auVar58._0_4_ & uVar31;
      auVar59._4_4_ = auVar58._4_4_ & uVar31;
      auVar59._8_4_ = auVar58._8_4_ & uVar31;
      auVar59._12_4_ = uVar35 & uVar31;
      auVar67._0_4_ = ~uVar31 & auVar58._4_4_;
      auVar67._4_4_ = ~uVar31 & auVar58._8_4_;
      auVar67._8_4_ = ~uVar31 & uVar35;
      auVar67._12_4_ = ~uVar31 & uVar35;
      _auStack_368 = auVar59 | auVar67;
      *(undefined8 *)(puVar44 + lVar7 + -8) = 0x10a75c;
      iVar52 = __popcountdi2(uVar47);
      *(undefined1 (*) [8])(local_250 + (long)(int)(uint)uStack_380 * 4 + 4) = auStack_368;
      *(undefined8 *)((long)auStack_244 + (long)(int)(uint)uStack_380 * 4) = uStack_360;
      iVar52 = (uint)uStack_380 + iVar52;
      uVar31 = auStack_378._0_4_;
    }
    else {
      uStack_398 = uVar35 & 1;
      HVar2 = local_258[0x55];
      lVar51 = *(long *)(local_258 + 0x60);
      uStack_3d8 = (undefined1 (*) [16])(CONCAT44(uStack_3d8._4_4_,uVar24 * 2) & 0xffffffff00000002)
      ;
      uStack_3fc = local_3e8 * uVar41;
      uVar37 = (ulong)(uVar24 * 2 & 2 | uStack_398);
      uStack_3f0 = local_3e8 * uVar24;
      uVar32 = local_3e8 + uStack_3fc;
      uVar1 = local_3e8 + uStack_3f0;
      uVar33 = uVar41 >> 1;
      iVar36 = (uVar24 >> 1) * local_404 + local_410;
      puStack_3d0 = (undefined1 *)CONCAT44(puStack_3d0._4_4_,uVar33);
      fVar55 = (float)(byte)HVar2;
      auStack_368._0_4_ = uVar1;
      lVar28 = (ulong)(uVar33 + iVar36) * 0x10 + lVar51;
      uVar4 = *(ushort *)(lVar28 + 8 + uVar37 * 2);
      uVar46 = (uint)*(ushort *)(lVar28 + uVar37 * 2);
      uVar27 = (uint)(byte)HVar2;
      if (uStack_3f0 < uVar1) {
        pauStack_388 = (undefined1 (*) [16])((ulong)(local_3e8 - 1) + 1);
        uStack_3b0 = (char *)(CONCAT44(uStack_3b0._4_4_,uVar35 >> 0xe) & 0xffffffff00003fff);
        uStack_3b8 = CONCAT44(uStack_3b8._4_4_,iVar52);
        uStack_380._4_4_ = (undefined4)((ulong)((long)pauStack_388 * 0x10) >> 0x20);
        puStack_3c8 = (undefined1 *)CONCAT44(puStack_3c8._4_4_,iVar36);
        puVar38 = puStack_3f8;
        pauVar48 = pauStack_3e0;
        uVar35 = uStack_3f0;
        do {
          puVar49 = puVar38;
          if (uStack_3fc < uVar32) {
            HVar3 = local_258[0x54];
            iVar53 = (int)puVar38;
            lVar28 = *(long *)(local_258 + 0x68);
            auVar58 = *(undefined1 (*) [16])(local_258 + 0x30);
            auVar59 = *(undefined1 (*) [16])(local_258 + 0x20);
            puVar49 = *pauStack_388 + (long)puVar38;
            uVar24 = (*(int *)(local_258 + 0x40) * uVar35 + uStack_3fc) * (uint)(byte)HVar3;
            pauVar40 = pauVar48;
            do {
              iVar54 = (int)puVar38;
              uVar25 = (int)(uint)*(ushort *)(lVar28 + (ulong)(uVar24 >> 3)) >> ((byte)uVar24 & 7) &
                       uVar27;
              *puVar38 = HVar2 == SUB41(uVar25,0);
              puVar38 = puVar38 + 1;
              uVar24 = uVar24 + (byte)HVar3;
              auVar63._0_4_ =
                   (float)((uStack_3fc - iVar53) + iVar54) * auVar58._0_4_ + auVar59._0_4_;
              auVar63._4_4_ =
                   (((float)uVar25 + fVar10) * ((float)(int)(uVar4 - uVar46) / fVar55) +
                   (float)uVar46) * auVar58._4_4_ + auVar59._4_4_;
              auVar63._8_4_ = (float)uVar35 * auVar58._8_4_ + auVar59._8_4_;
              auVar63._12_4_ = (float)uVar35 * auVar58._12_4_ + auVar59._12_4_;
              *pauVar40 = auVar63;
              pauVar40 = pauVar40 + 1;
            } while (puVar38 != puVar49);
            pauVar48 = pauVar48 + (long)pauStack_388;
          }
          pauVar48 = pauVar48 + 1;
          puVar38 = puVar49 + 1;
          uVar35 = uVar35 + 1;
        } while (uVar1 != uVar35);
        uVar24 = (uint)uStack_3b0;
        lStack_3c0 = lVar51;
        uStack_3a8 = uVar41;
      }
      fVar10 = _LC2;
      uStack_2e0 = uStack_40c - 1;
      if (uVar41 < local_400) {
        pauVar48 = pauStack_3e0 + local_3e8;
        puVar38 = puStack_3f8 + local_3e8;
        uVar37 = (ulong)(uVar41 + 1 & 1 | (uint)uStack_3d8);
        lVar28 = (ulong)((uVar41 + 1 >> 1) + iVar36) * 0x10 + lVar51;
        uVar4 = *(ushort *)(lVar28 + 8 + uVar37 * 2);
        uVar35 = (uint)*(ushort *)(lVar28 + uVar37 * 2);
        uStack_2e0 = uStack_40c;
        if (uStack_3f0 < uVar1) {
          uVar37 = (ulong)local_394;
          lVar28 = *(long *)(local_258 + 0x68);
          fVar15 = *(float *)(local_258 + 0x30);
          fVar16 = *(float *)(local_258 + 0x34);
          fVar17 = *(float *)(local_258 + 0x38);
          fVar18 = *(float *)(local_258 + 0x3c);
          fVar11 = *(float *)(local_258 + 0x20);
          fVar12 = *(float *)(local_258 + 0x24);
          fVar13 = *(float *)(local_258 + 0x28);
          fVar14 = *(float *)(local_258 + 0x2c);
          uStack_380._4_4_ = (undefined4)(uVar37 * 0x10 >> 0x20);
          iVar36 = *(int *)(local_258 + 0x40) * (uint)(byte)local_258[0x54];
          uVar25 = (*(int *)(local_258 + 0x40) * uStack_3f0 + uVar32) * (uint)(byte)local_258[0x54];
          pauStack_388 = (undefined1 (*) [16])CONCAT44(pauStack_388._4_4_,iVar36);
          uVar46 = uStack_3f0;
          do {
            uVar34 = (ulong)uVar46;
            uVar26 = (int)(uint)*(ushort *)(lVar28 + (ulong)(uVar25 >> 3)) >> ((byte)uVar25 & 7) &
                     uVar27;
            *puVar38 = HVar2 == SUB41(uVar26,0);
            puVar38 = puVar38 + uVar37;
            uVar46 = uVar46 + 1;
            uVar25 = uVar25 + iVar36;
            *(float *)*pauVar48 = (float)uVar32 * fVar15 + fVar11;
            *(float *)(*pauVar48 + 4) =
                 (((float)uVar26 + fVar10) * ((float)(int)(uVar4 - uVar35) / fVar55) + (float)uVar35
                 ) * fVar16 + fVar12;
            *(float *)(*pauVar48 + 8) = (float)uVar34 * fVar17 + fVar13;
            *(float *)(*pauVar48 + 0xc) = (float)uVar34 * fVar18 + fVar14;
            pauVar48 = pauVar48 + uVar37;
          } while (uVar1 != uVar46);
        }
      }
      fVar10 = _LC2;
      if (uVar24 < local_400) {
        pauStack_388 = pauStack_3e0 + uStack_44c;
        puVar38 = puStack_3f8 + uStack_44c;
        uStack_3a8 = (uVar24 + 1) * 2 & 2;
        iVar36 = (uVar24 + 1 >> 1) * local_404 + local_410;
        uStack_3b0 = (char *)CONCAT44(uStack_3b0._4_4_,iVar36);
        lVar28 = (ulong)(iVar36 + uVar33) * 0x10 + lVar51;
        uVar4 = *(ushort *)(lVar28 + 8 + (ulong)(uStack_398 | uStack_3a8) * 2);
        uVar35 = (uint)*(ushort *)(lVar28 + (ulong)(uStack_398 | uStack_3a8) * 2);
        if (uStack_3fc < uVar32) {
          lVar28 = *(long *)(local_258 + 0x68);
          fVar11 = *(float *)(local_258 + 0x20);
          fVar12 = *(float *)(local_258 + 0x24);
          fVar13 = *(float *)(local_258 + 0x28);
          fVar14 = *(float *)(local_258 + 0x2c);
          HVar3 = local_258[0x54];
          fVar15 = *(float *)(local_258 + 0x30);
          fVar16 = *(float *)(local_258 + 0x34);
          fVar17 = *(float *)(local_258 + 0x38);
          fVar18 = *(float *)(local_258 + 0x3c);
          iVar53 = (int)puVar38;
          uVar24 = (uVar1 * *(int *)(local_258 + 0x40) + uStack_3fc) * (uint)(byte)HVar3;
          lVar30 = (ulong)(local_3e8 - 1) + 1;
          puVar49 = puVar38 + lVar30;
          pauVar48 = pauStack_388;
          do {
            uVar33 = (int)(uint)*(ushort *)(lVar28 + (ulong)(uVar24 >> 3)) >> ((byte)uVar24 & 7) &
                     uVar27;
            *puVar38 = HVar2 == SUB41(uVar33,0);
            iVar54 = (int)puVar38;
            puVar38 = puVar38 + 1;
            uVar24 = uVar24 + (byte)HVar3;
            *(float *)*pauVar48 = (float)((uStack_3fc - iVar53) + iVar54) * fVar15 + fVar11;
            *(float *)(*pauVar48 + 4) =
                 (((float)uVar33 + fVar10) * ((float)(int)(uVar4 - uVar35) / fVar55) + (float)uVar35
                 ) * fVar16 + fVar12;
            *(float *)(*pauVar48 + 8) = (float)uVar1 * fVar17 + fVar13;
            *(float *)(*pauVar48 + 0xc) = (float)uVar1 * fVar18 + fVar14;
            pauVar48 = pauVar48 + 1;
          } while (puVar38 != puVar49);
          pauStack_388 = pauStack_388 + lVar30;
          puVar38 = puVar49;
        }
        fVar10 = _LC2;
        uStack_2dc = uStack_40c;
        if (uVar41 < local_400) {
          uVar37 = (ulong)(uVar41 + 1 & 1 | uStack_3a8);
          lVar51 = (ulong)((uVar41 + 1 >> 1) + iVar36) * 0x10 + lVar51;
          uVar4 = *(ushort *)(lVar51 + 8 + uVar37 * 2);
          uVar24 = (uint)*(ushort *)(lVar51 + uVar37 * 2);
          uVar35 = (*(int *)(local_258 + 0x40) * uVar1 + uVar32) * (uint)(byte)local_258[0x54];
          uVar27 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar35 >> 3)) >>
                   ((byte)uVar35 & 7) & uVar27;
          *puVar38 = HVar2 == SUB41(uVar27,0);
          fVar11 = *(float *)(local_258 + 0x34);
          fVar12 = *(float *)(local_258 + 0x38);
          fVar13 = *(float *)(local_258 + 0x3c);
          fVar14 = *(float *)(local_258 + 0x24);
          fVar15 = *(float *)(local_258 + 0x28);
          fVar16 = *(float *)(local_258 + 0x2c);
          *(float *)*pauStack_388 =
               (float)uVar32 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
          *(float *)(*pauStack_388 + 4) =
               (((float)uVar27 + fVar10) * ((float)(int)(uVar4 - uVar24) / fVar55) + (float)uVar24)
               * fVar11 + fVar14;
          *(float *)(*pauStack_388 + 8) = (float)uVar1 * fVar12 + fVar15;
          *(float *)(*pauStack_388 + 0xc) = (float)uVar1 * fVar13 + fVar16;
        }
      }
      else {
        uStack_2dc = ((uVar1 - uVar31) + -1) - uStack_3f0;
      }
      lVar51 = 0;
      piVar39 = (int *)auStack_318;
      auStack_308 = ZEXT416(uStack_2e0) << 0x40;
      uStack_2f8 = 0;
      auStack_378._0_4_ = iVar52;
      auStack_318._8_8_ = 0;
      auStack_318._0_8_ = uStack_418;
      auStack_318 = auStack_318 << 0x40;
      auStack_308._0_4_ = uVar31;
      auStack_308._12_4_ = uVar31;
      uStack_2f4 = CONCAT44(uVar31,uVar31);
      uStack_2ec = CONCAT44(uVar31,uStack_2dc);
      uStack_2e4 = uVar31;
      do {
        uVar24 = local_394 * piVar39[1] + *piVar39;
        uVar35 = piVar39[2];
        pauVar48 = pauStack_3e0 + uVar24;
        pcVar29 = puStack_3f8 + uVar24;
        if (piVar39[3] == -1) {
          auVar56._8_4_ = _LC15;
          auVar56._0_8_ = CONCAT44(_LC15,_LC15);
          auVar56._12_4_ = _LC15;
          auVar60._8_4_ = _LC17;
          auVar60._0_8_ = CONCAT44(_LC17,_LC17);
          auVar60._12_4_ = _LC17;
        }
        else {
          auStack_368 = (undefined1  [8])piVar39;
          auVar56._8_4_ = _LC15;
          auVar56._0_8_ = CONCAT44(_LC15,_LC15);
          auVar56._12_4_ = _LC15;
          auVar60._8_4_ = _LC17;
          auVar60._0_8_ = CONCAT44(_LC17,_LC17);
          auVar60._12_4_ = _LC17;
          iVar36 = 0;
          while( true ) {
            pcVar21 = pcVar29 + (ulong)uVar35 + 1;
            pauVar40 = pauVar48;
            if (uVar35 != 0xffffffff) {
              do {
                if (*pcVar29 == '\0') {
                  auVar60 = minps(auVar60,*pauVar40);
                  auVar56 = maxps(auVar56,*pauVar40);
                }
                pcVar29 = pcVar29 + 1;
                pauVar40 = pauVar40 + 1;
              } while (pcVar29 != pcVar21);
              pauVar48 = pauVar48 + (ulong)uVar35 + 1;
              pcVar29 = pcVar21;
            }
            pauVar48 = pauVar48 + (local_3e8 - uVar35);
            if (iVar36 == piVar39[3]) break;
            iVar36 = iVar36 + 1;
            pcVar29 = pcVar29 + (local_3e8 - uVar35);
          }
        }
        *(undefined1 (*) [16])(auStack_2d8 + lVar51) = auVar60;
        piVar39 = piVar39 + 4;
        *(undefined1 (*) [16])(auStack_298 + lVar51) = auVar56;
        lVar51 = lVar51 + 0x10;
      } while (lVar51 != 0x40);
      uStack_380 = CONCAT44(uStack_380._4_4_,uVar31);
      auStack_368._0_4_ = iVar52;
      iVar52 = -(uint)((float)((ulong)uStack_2c8 >> 0x20) <= (float)((ulong)uStack_288 >> 0x20));
      auVar61._4_4_ = iVar52;
      auVar61._0_4_ = -(uint)(fStack_2d4 <= fStack_294);
      auVar61._8_4_ = -(uint)(fStack_2b4 <= fStack_274);
      auVar61._12_4_ =
           -(uint)((float)((ulong)uStack_2a8 >> 0x20) <= (float)((ulong)uStack_268 >> 0x20));
      uVar47 = movmskps((int)pauVar48,auVar61);
      uVar35 = (int)-(uint)(fStack_2b4 <= fStack_274) >> 0x1f;
      uVar31 = uVar35 & __LC49 | ~uVar35 & __LC51;
      uVar24 = uVar35 & _UNK_00116668 | ~uVar35 & _UNK_00116728;
      uVar32 = uVar35 & _UNK_0011666c | ~uVar35 & _UNK_0011672c;
      uVar41 = iVar52 >> 0x1f;
      auVar57._0_4_ = uVar31 & uVar41;
      auVar57._4_4_ = (uVar35 & _UNK_00116664 | ~uVar35 & _UNK_00116724) & uVar41;
      auVar57._8_4_ = uVar24 & uVar41;
      auVar57._12_4_ = uVar32 & uVar41;
      auVar64._0_4_ = ~uVar41 & uVar31;
      auVar64._4_4_ = ~uVar41 & uVar24;
      auVar64._8_4_ = ~uVar41 & uVar32;
      auVar64._12_4_ = ~uVar41 & uVar32;
      uVar31 = (int)-(uint)(fStack_2d4 <= fStack_294) >> 0x1f;
      auVar57 = auVar57 | auVar64;
      uVar35 = auVar57._12_4_;
      auStack_358._0_4_ = auVar57._0_4_ & uVar31;
      auStack_358._4_4_ = auVar57._4_4_ & uVar31;
      auStack_358._8_4_ = auVar57._8_4_ & uVar31;
      auStack_358._12_4_ = uVar35 & uVar31;
      auVar65._0_4_ = ~uVar31 & auVar57._4_4_;
      auVar65._4_4_ = ~uVar31 & auVar57._8_4_;
      auVar65._8_4_ = ~uVar31 & uVar35;
      auVar65._12_4_ = ~uVar31 & uVar35;
      auStack_358 = auStack_358 | auVar65;
      *(undefined8 *)(puVar44 + lVar7 + -8) = 0x10a210;
      uVar35 = __popcountdi2(CONCAT44((int)((ulong)pauVar48 >> 0x20),uVar47));
      pVVar22 = local_448;
      iVar52 = auStack_368._0_4_;
      uVar31 = (uint)uStack_380;
      if (uVar35 != 0) {
        iStack_440 = auStack_368._0_4_;
        uStack_43c = (uint)uStack_380;
        puVar38 = puStack_3f8;
        do {
          uVar35 = uVar35 - 1;
          lVar51 = (ulong)*(uint *)(auStack_358 + (ulong)uVar35 * 4) * 0x10;
          uVar24 = uStack_3f0 + *(int *)(auStack_318 + lVar51 + 4);
          pauStack_388 = (undefined1 (*) [16])CONCAT44(pauStack_388._4_4_,uVar24);
          uVar31 = *(int *)(auStack_318 + lVar51 + 8) + *(int *)(auStack_318 + lVar51) + uStack_3fc;
          if (uVar24 < *(int *)(auStack_308 + lVar51 + -4) + uVar24) {
            uStack_380 = CONCAT44(uStack_380._4_4_,local_3e8 + 2);
            iVar52 = *(int *)(auStack_318 + lVar51 + 4) * local_394 - uStack_3fc;
            uStack_3ec = uVar35;
            uStack_3e4 = *(int *)(auStack_308 + lVar51 + -4) + uVar24;
            uStack_398 = *(int *)(auStack_318 + lVar51) + uStack_3fc;
            do {
              uVar35 = uStack_398;
              if (uStack_398 < uVar31) {
                do {
                  pcVar29 = puVar38 + (int)(uVar35 + iVar52);
                  if ((*pcVar29 == '\0') &&
                     (uVar37 = uStack_380 & 0xffffffff, pcVar29[uVar37] == '\0')) {
                    uStack_3d8 = pauStack_3e0 + (int)(uVar35 + iVar52);
                    if (pcVar29[local_394] == '\0') {
                      _auStack_368 = *uStack_3d8;
                      pHStack_390 = (HeightFieldShape *)((ulong)pHStack_390 & 0xffffffff00000000);
                      _auStack_378 = uStack_3d8[local_394];
                      uVar19 = *(undefined8 *)uStack_3d8[uVar37];
                      uStack_3a0 = *(undefined8 *)(uStack_3d8[uVar37] + 8);
                      uStack_3a8 = (uint)uVar19;
                      uStack_3a4 = (undefined4)((ulong)uVar19 >> 0x20);
                      goto LAB_0010a392;
                    }
                    do {
                      if (pcVar29[1] != '\0') break;
                      pHStack_390 = (HeightFieldShape *)CONCAT44(pHStack_390._4_4_,1);
                      _auStack_368 = *uStack_3d8;
                      _auStack_378 = uStack_3d8[uVar37];
                      uStack_3a0 = *(undefined8 *)(uStack_3d8[1] + 8);
                      uStack_3a8 = (uint)*(undefined8 *)uStack_3d8[1];
                      uStack_3a4 = (undefined4)((ulong)*(undefined8 *)uStack_3d8[1] >> 0x20);
LAB_0010a392:
                      this_00 = *(HeightFieldShape **)pVVar22;
                      pfVar50 = afStack_348;
                      uStack_3b0 = (char *)CONCAT44(uStack_3b0._4_4_,uVar31);
                      puStack_3c8 = (undefined1 *)CONCAT44(puStack_3c8._4_4_,iVar52);
                      *(undefined8 *)(puVar44 + lVar7 + -8) = 0x10a3d0;
                      puStack_3d0 = puVar38;
                      uStack_3b8 = uVar37;
                      bVar23 = GetEdgeFlags(this_00,uVar35,(uint)pauStack_388,(uint)pHStack_390);
                      auStack_328._4_4_ = uStack_3a4;
                      auStack_328._0_4_ = uStack_3a8;
                      auStack_328._8_8_ = uStack_3a0;
                      iVar52 = (int)puStack_3c8;
                      uStack_3a8 = (uint)uStack_3b0;
                      puStack_3c8 = puStack_3d0;
                      lStack_3c0 = CONCAT44(lStack_3c0._4_4_,uVar35);
                      afStack_348[0] = (float)auStack_368._0_4_;
                      afStack_348[1] = (float)auStack_368._4_4_;
                      afStack_348[2] = (float)(undefined4)uStack_360;
                      afStack_348[3] = (float)uStack_360._4_4_;
                      auStack_338 = _auStack_378;
                      uVar35 = 0;
                      uStack_3b0 = pcVar29;
                      do {
                        fVar10 = *pfVar50;
                        fVar55 = pfVar50[1];
                        fVar11 = pfVar50[2];
                        uVar31 = uVar35 + 1;
                        uVar37 = (ulong)(uVar31 % 3);
                        plVar5 = *(long **)(pVVar22 + 8);
                        auStack_368._4_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x34) +
                             fVar10 * *(float *)(pVVar22 + 0x14) +
                             fVar55 * *(float *)(pVVar22 + 0x24) + *(float *)(pVVar22 + 0x44);
                        auStack_368._0_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x30) +
                             fVar10 * *(float *)(pVVar22 + 0x10) +
                             fVar55 * *(float *)(pVVar22 + 0x20) + *(float *)(pVVar22 + 0x40);
                        uStack_360._0_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x38) +
                             fVar10 * *(float *)(pVVar22 + 0x18) +
                             fVar55 * *(float *)(pVVar22 + 0x28) + *(float *)(pVVar22 + 0x48);
                        uStack_360._4_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x3c) +
                             fVar10 * *(float *)(pVVar22 + 0x1c) +
                             fVar55 * *(float *)(pVVar22 + 0x2c) + *(float *)(pVVar22 + 0x4c);
                        fVar10 = afStack_348[uVar37 * 4];
                        fVar55 = afStack_348[uVar37 * 4 + 1];
                        fVar11 = afStack_348[uVar37 * 4 + 2];
                        auStack_378._4_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x34) +
                             fVar10 * *(float *)(pVVar22 + 0x14) +
                             fVar55 * *(float *)(pVVar22 + 0x24) + *(float *)(pVVar22 + 0x44);
                        auStack_378._0_4_ =
                             fVar11 * *(float *)(pVVar22 + 0x30) +
                             fVar10 * *(float *)(pVVar22 + 0x10) +
                             fVar55 * *(float *)(pVVar22 + 0x20) + *(float *)(pVVar22 + 0x40);
                        fStack_370 = fVar11 * *(float *)(pVVar22 + 0x38) +
                                     fVar10 * *(float *)(pVVar22 + 0x18) +
                                     fVar55 * *(float *)(pVVar22 + 0x28) +
                                     *(float *)(pVVar22 + 0x48);
                        fStack_36c = fVar11 * *(float *)(pVVar22 + 0x3c) +
                                     fVar10 * *(float *)(pVVar22 + 0x1c) +
                                     fVar55 * *(float *)(pVVar22 + 0x2c) +
                                     *(float *)(pVVar22 + 0x4c);
                        if ((bVar23 >> (uVar35 & 0x1f) & 1) == 0) {
                          pcVar6 = *(code **)(*plVar5 + 0x10);
                          *(undefined8 *)(puVar44 + lVar7 + -8) = 0x10a50a;
                          (*pcVar6)(auStack_368,uStack_360,auStack_378,plVar5,
                                    (undefined4)Color::sGrey);
                        }
                        else {
                          *(undefined8 *)(puVar44 + lVar7 + -8) = 0x10a613;
                          JPH::DebugRenderer::DrawArrow
                                    (auStack_368,uStack_360,auStack_378,plVar5,
                                     (undefined4)Color::sGreen);
                        }
                        pfVar50 = pfVar50 + 4;
                        uVar35 = uVar31;
                      } while (uVar31 != 3);
                      pcVar29 = uStack_3b0;
                      uVar37 = uStack_3b8;
                      puVar38 = puStack_3c8;
                      uVar35 = (uint)lStack_3c0;
                      uVar31 = uStack_3a8;
                    } while ((uint)pHStack_390 != 1);
                  }
                  uVar35 = uVar35 + 1;
                } while (uVar31 != uVar35);
              }
              uVar24 = (uint)pauStack_388 + 1;
              pauStack_388 = (undefined1 (*) [16])CONCAT44(pauStack_388._4_4_,uVar24);
              iVar52 = iVar52 + local_394;
              uVar35 = uStack_3ec;
            } while (uStack_3e4 != uVar24);
          }
          iVar52 = iStack_440;
          uVar31 = uStack_43c;
        } while (uVar35 != 0);
      }
    }
    iVar52 = iVar52 + -1;
    local_250._0_4_ = iVar52;
    if (iVar52 == -1) goto LAB_00109b83;
    uVar35 = *(uint *)(local_250 + (long)iVar52 * 4 + 4);
  } while( true );
}



/* JPH::HeightFieldShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool,
   bool) const */

void JPH::HeightFieldShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,HeightFieldShape *param_1,long *param_2,
               float *param_5,undefined4 param_6,HeightFieldShape param_7,undefined1 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  long *plVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  HeightFieldShape HVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  float *pfVar34;
  long *plVar35;
  long *plVar36;
  long in_FS_OFFSET;
  float fVar37;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  float local_1d8;
  float fStack_1d4;
  float local_1a8;
  float fStack_1a4;
  float local_198;
  float fStack_194;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  long *local_120;
  float local_118 [12];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x48) == 0) goto LAB_0010ae96;
  lVar6 = *(long *)(param_1 + 0xb0);
  if (param_1[200] == param_7) {
    if (lVar6 == 0) goto LAB_0010aeda;
  }
  else {
    if (lVar6 != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0xc0);
      puVar13 = puVar10 + lVar6;
joined_r0x0010b71f:
      if (puVar10 < puVar13) {
        do {
          piVar9 = (int *)*puVar10;
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) goto code_r0x0010b743;
          }
          puVar10 = puVar10 + 1;
          if (puVar13 <= puVar10) break;
        } while( true );
      }
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    param_1[200] = param_7;
LAB_0010aeda:
    uVar29 = *(uint *)(param_1 + 0x40);
    uVar15 = 0x40;
    if (uVar29 < 0x41) {
      uVar15 = uVar29;
    }
    if (uVar29 != 0) {
      uVar5 = (ulong)(uVar15 * uVar15 * 2);
      lVar6 = uVar5 * 0x6c;
      uVar29 = 0;
LAB_0010af2d:
      uVar30 = uVar29 + uVar15;
      uVar32 = 0;
LAB_0010af48:
      pfVar7 = (float *)(*Reallocate)(0,0,lVar6);
      uVar27 = *(int *)(param_1 + 0x40) - 1;
      uVar23 = uVar30;
      if (uVar27 <= uVar30) {
        uVar23 = uVar27;
      }
      uVar33 = uVar32 + uVar15;
      pfVar19 = pfVar7;
      uVar24 = uVar29;
      if (uVar29 < uVar23) {
        do {
          uVar1 = uVar24 + 1;
          uVar22 = uVar32;
          if (uVar33 < uVar27) {
            uVar27 = uVar33;
          }
joined_r0x0010afc0:
          uVar4 = uVar22;
          if (uVar4 < uVar27) {
            uVar22 = uVar4 + 1;
            if (*(int *)(param_1 + 0x48) != 0) {
              iVar31 = *(int *)(param_1 + 0x40);
              lVar16 = *(long *)(param_1 + 0x68);
              HVar28 = param_1[0x55];
              uVar12 = (uint)(byte)param_1[0x54];
              uVar11 = (uVar4 + uVar24 * iVar31) * uVar12;
              if (((~(byte)((int)(uint)*(ushort *)(lVar16 + (ulong)(uVar11 >> 3)) >>
                           ((byte)uVar11 & 7)) & (byte)HVar28) != 0) &&
                 (iVar25 = uVar24 * iVar31 + iVar31,
                 uVar11 = (iVar25 + uVar22) * (uint)(byte)param_1[0x54],
                 (~(byte)((int)(uint)*(ushort *)(lVar16 + (ulong)(uVar11 >> 3)) >>
                         ((byte)uVar11 & 7)) & (byte)HVar28) != 0)) {
                auVar60 = GetPosition(param_1,uVar4,uVar24);
                fVar46 = auVar60._8_4_;
                auVar61 = GetPosition(param_1,uVar22,uVar1);
                fVar47 = auVar61._8_4_;
                fVar45 = (float)Color::sWhite;
                if (param_7 != (HeightFieldShape)0x0) {
                  plVar8 = (long *)GetMaterial(param_1,uVar4,uVar24);
                  fVar45 = (float)Color::sGrey;
                  if (*(code **)(*plVar8 + 0x28) != PhysicsMaterial::GetDebugColor) {
                    fVar45 = (float)(**(code **)(*plVar8 + 0x28))();
                    if (*(int *)(param_1 + 0x48) == 0) goto joined_r0x0010afc0;
                    iVar31 = *(int *)(param_1 + 0x40);
                    lVar16 = *(long *)(param_1 + 0x68);
                    uVar12 = (uint)(byte)param_1[0x54];
                    iVar25 = uVar1 * iVar31;
                    HVar28 = param_1[0x55];
                  }
                }
                local_198 = auVar60._0_4_;
                fStack_194 = auVar60._4_4_;
                local_1a8 = auVar61._0_4_;
                fStack_1a4 = auVar61._4_4_;
                uVar11 = (iVar25 + uVar4) * uVar12;
                pfVar34 = pfVar19;
                fVar48 = local_198;
                fVar42 = fStack_194;
                fVar52 = local_1a8;
                fVar55 = fStack_1a4;
                if ((~(byte)((int)(uint)*(ushort *)(lVar16 + (ulong)(uVar11 >> 3)) >>
                            ((byte)uVar11 & 7)) & (byte)HVar28) != 0) {
                  fVar43 = local_198;
                  fVar41 = fStack_194;
                  fVar37 = fVar46;
                  fVar56 = local_1a8;
                  fVar57 = fStack_1a4;
                  fVar58 = fVar47;
                  auVar60 = GetPosition(param_1,uVar4,uVar1);
                  *(ulong *)(pfVar19 + 0x12) = CONCAT44(fVar57,fVar56);
                  *(ulong *)pfVar19 = CONCAT44(fVar41,fVar43);
                  pfVar34 = pfVar19 + 0x1b;
                  local_1d8 = auVar60._0_4_;
                  fStack_1d4 = auVar60._4_4_;
                  fVar51 = fVar37 - auVar60._8_4_;
                  pfVar19[2] = fVar37;
                  *(undefined1 (*) [12])(pfVar19 + 9) = auVar60;
                  fVar59 = fVar58 - auVar60._8_4_;
                  pfVar19[0x14] = fVar58;
                  fVar37 = (fVar41 - fStack_1d4) * (fVar56 - local_1d8) -
                           (fVar57 - fStack_1d4) * (fVar43 - local_1d8);
                  fVar41 = fVar51 * (fVar57 - fStack_1d4) - fVar59 * (fVar41 - fStack_1d4);
                  fVar43 = (fVar43 - local_1d8) * fVar59 - (fVar56 - local_1d8) * fVar51;
                  auVar54._4_4_ = fVar43;
                  auVar54._0_4_ = fVar41;
                  auVar54._8_4_ = fVar37;
                  auVar54._12_4_ = fVar37;
                  auVar39._0_4_ = SQRT(fVar37 * fVar37 + fVar43 * fVar43 + fVar41 * fVar41 + 0.0);
                  auVar39._4_4_ = auVar39._0_4_;
                  auVar39._8_4_ = auVar39._0_4_;
                  auVar39._12_4_ = auVar39._0_4_;
                  auVar39 = divps(auVar54,auVar39);
                  pfVar17 = pfVar19 + 3;
                  do {
                    pfVar17[5] = fVar45;
                    pfVar18 = pfVar17 + 9;
                    pfVar17[3] = 0.0;
                    pfVar17[4] = 0.0;
                    *(long *)pfVar17 = auVar39._0_8_;
                    pfVar17[2] = auVar39._8_4_;
                    pfVar17 = pfVar18;
                  } while (pfVar19 + 0x1e != pfVar18);
                  iVar31 = *(int *)(param_1 + 0x40);
                  uVar12 = (uint)(byte)param_1[0x54];
                  HVar28 = param_1[0x55];
                }
                uVar12 = (iVar31 * uVar24 + uVar22) * uVar12;
                pfVar19 = pfVar34;
                if ((~(byte)((int)(uint)*(ushort *)(lVar16 + (ulong)(uVar12 >> 3)) >>
                            ((byte)uVar12 & 7)) & (byte)HVar28) != 0) {
                  auVar60 = GetPosition(param_1,uVar22,uVar24);
                  fVar43 = auVar60._8_4_;
                  local_1d8 = auVar60._0_4_;
                  fStack_1d4 = auVar60._4_4_;
                  *(long *)(pfVar34 + 0x12) = auVar60._0_8_;
                  pfVar34[2] = fVar46;
                  *pfVar34 = fVar48;
                  pfVar34[1] = fVar42;
                  pfVar34[0xb] = fVar47;
                  pfVar34[9] = fVar52;
                  pfVar34[10] = fVar55;
                  pfVar34[0x14] = fVar43;
                  fVar48 = (fStack_1a4 - fStack_1d4) * (local_198 - local_1d8) -
                           (fStack_194 - fStack_1d4) * (local_1a8 - local_1d8);
                  fVar42 = (fVar47 - fVar43) * (fStack_194 - fStack_1d4) -
                           (fVar46 - fVar43) * (fStack_1a4 - fStack_1d4);
                  fVar46 = (local_1a8 - local_1d8) * (fVar46 - fVar43) -
                           (local_198 - local_1d8) * (fVar47 - fVar43);
                  auVar44._4_4_ = fVar46;
                  auVar44._0_4_ = fVar42;
                  auVar44._8_4_ = fVar48;
                  auVar44._12_4_ = fVar48;
                  auVar40._0_4_ = SQRT(fVar48 * fVar48 + fVar46 * fVar46 + fVar42 * fVar42 + 0.0);
                  auVar40._4_4_ = auVar40._0_4_;
                  auVar40._8_4_ = auVar40._0_4_;
                  auVar40._12_4_ = auVar40._0_4_;
                  auVar39 = divps(auVar44,auVar40);
                  pfVar19 = pfVar34 + 3;
                  do {
                    pfVar19[5] = fVar45;
                    pfVar17 = pfVar19 + 9;
                    pfVar19[3] = 0.0;
                    pfVar19[4] = 0.0;
                    *(long *)pfVar19 = auVar39._0_8_;
                    pfVar19[2] = auVar39._8_4_;
                    pfVar19 = pfVar17;
                  } while (pfVar17 != pfVar34 + 0x1e);
                  pfVar19 = pfVar34 + 0x1b;
                }
              }
            }
            goto joined_r0x0010afc0;
          }
          if (uVar23 <= uVar1) goto LAB_0010b3d8;
          uVar27 = *(int *)(param_1 + 0x40) - 1;
          uVar24 = uVar1;
        } while( true );
      }
      goto LAB_0010b40f;
    }
LAB_0010b44d:
    lVar6 = *(long *)(param_1 + 0xb0);
  }
  local_e8 = *(undefined8 *)(param_5 + 0xc);
  uStack_e0 = *(undefined8 *)(param_5 + 0xe);
  local_148 = (float)param_1_00;
  fStack_144 = (float)((ulong)param_1_00 >> 0x20);
  fStack_140 = (float)param_2_00;
  fStack_13c = (float)((ulong)param_2_00 >> 0x20);
  auVar49._4_4_ = -(uint)(fStack_144 < 0.0);
  auVar49._0_4_ = -(uint)(local_148 < 0.0);
  auVar49._8_4_ = -(uint)(fStack_140 < 0.0);
  auVar49._12_4_ = -(uint)(fStack_13c < 0.0);
  plVar8 = *(long **)(param_1 + 0xc0);
  uVar14 = movmskps(fStack_144,auVar49);
  local_118[8] = param_5[8] * fStack_140;
  local_118[9] = param_5[9] * fStack_140;
  local_118[10] = param_5[10] * fStack_140;
  local_118[0xb] = param_5[0xb] * fStack_140;
  local_118[0] = *param_5 * local_148;
  local_118[1] = param_5[1] * local_148;
  local_118[2] = param_5[2] * local_148;
  local_118[3] = param_5[3] * local_148;
  local_118[4] = param_5[4] * fStack_144;
  local_118[5] = param_5[5] * fStack_144;
  local_118[6] = param_5[6] * fStack_144;
  local_118[7] = param_5[7] * fStack_144;
  if (plVar8 + lVar6 != plVar8) {
    plVar35 = plVar8;
    do {
      lVar16 = 0;
      fVar45 = (float)local_e8;
      fVar46 = local_e8._4_4_;
      fVar47 = (float)uStack_e0;
      fVar48 = uStack_e0._4_4_;
      local_88 = (float)local_e8;
      fStack_84 = local_e8._4_4_;
      fStack_80 = (float)uStack_e0;
      fStack_7c = uStack_e0._4_4_;
      do {
        fVar42 = *(float *)(*plVar35 + 0x20 + lVar16);
        fVar52 = *(float *)(*plVar35 + 0x30 + lVar16);
        auVar38._0_8_ = CONCAT44(fVar42 * local_118[lVar16 + 1],fVar42 * local_118[lVar16]);
        auVar38._8_4_ = fVar42 * local_118[lVar16 + 2];
        auVar38._12_4_ = fVar42 * local_118[lVar16 + 3];
        auVar50._0_4_ = fVar52 * local_118[lVar16];
        auVar50._4_4_ = fVar52 * local_118[lVar16 + 1];
        auVar50._8_4_ = fVar52 * local_118[lVar16 + 2];
        auVar50._12_4_ = fVar52 * local_118[lVar16 + 3];
        lVar16 = lVar16 + 4;
        auVar53._8_4_ = auVar38._8_4_;
        auVar53._0_8_ = auVar38._0_8_;
        auVar53._12_4_ = auVar38._12_4_;
        auVar54 = minps(auVar53,auVar50);
        auVar39 = maxps(auVar38,auVar50);
        fVar45 = fVar45 + auVar54._0_4_;
        fVar46 = fVar46 + auVar54._4_4_;
        fVar47 = fVar47 + auVar54._8_4_;
        fVar48 = fVar48 + auVar54._12_4_;
        local_88 = local_88 + auVar39._0_4_;
        fStack_84 = fStack_84 + auVar39._4_4_;
        fStack_80 = fStack_80 + auVar39._8_4_;
        fStack_7c = fStack_7c + auVar39._12_4_;
      } while (lVar16 != 0xc);
      plVar36 = plVar35 + 1;
      local_98 = (HeightFieldShape *)CONCAT44(fVar46,fVar45);
      uStack_90 = (long *)CONCAT44(fVar48,fVar47);
      (**(code **)(*param_2 + 0x30))
                (param_2,local_118,&local_98,param_6,plVar35,(POPCOUNT((byte)uVar14 & 7) & 1U) != 0,
                 0,param_8);
      plVar35 = plVar36;
    } while (plVar8 + lVar6 != plVar36);
  }
  if (sDrawTriangleOutlines != '\0') {
    local_88 = local_148 * *param_5;
    fStack_84 = local_148 * param_5[1];
    fStack_80 = local_148 * param_5[2];
    fStack_7c = local_148 * param_5[3];
    local_58 = *(undefined8 *)(param_5 + 0xc);
    uStack_50 = *(undefined8 *)(param_5 + 0xe);
    local_78 = fStack_144 * param_5[4];
    fStack_74 = fStack_144 * param_5[5];
    fStack_70 = fStack_144 * param_5[6];
    fStack_6c = fStack_144 * param_5[7];
    local_68 = fStack_140 * param_5[8];
    fStack_64 = fStack_140 * param_5[9];
    fStack_60 = fStack_140 * param_5[10];
    fStack_5c = fStack_140 * param_5[0xb];
    local_98 = param_1;
    uStack_90 = param_2;
    WalkHeightField<JPH::HeightFieldShape::Draw(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool,bool)const::Visitor>
              (param_1,(Visitor *)&local_98);
  }
LAB_0010ae96:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x0010b743:
  plVar8 = *(long **)(piVar9 + 6);
  if (plVar8 != (long *)0x0) {
    if ((*(long *)(piVar9 + 2) != 0) &&
       (plVar35 = plVar8 + *(long *)(piVar9 + 2) * 2, plVar8 < plVar35)) {
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 < plVar35);
      plVar8 = *(long **)(piVar9 + 6);
    }
    piVar9[2] = 0;
    piVar9[3] = 0;
    (*Free)(plVar8);
  }
  puVar10 = puVar10 + 1;
  (*Free)(piVar9);
  goto joined_r0x0010b71f;
LAB_0010b3d8:
  uVar26 = ((long)pfVar19 - (long)pfVar7 >> 2) * -0x7b425ed097b425ed;
  if (uVar5 < uVar26) {
    pfVar7 = (float *)(*Reallocate)(pfVar7,lVar6,(long)pfVar19 - (long)pfVar7);
  }
  else if (uVar26 == 0) goto LAB_0010b40f;
  piVar9 = (int *)(*Allocate)(0x40);
  JPH::DebugRenderer::sCalculateBounds((Vertex *)&local_98,(int)pfVar7);
  (**(code **)(*param_2 + 0x20))(&local_120,param_2,pfVar7,uVar26 & 0xffffffff);
  plVar8 = local_120;
  *piVar9 = 0;
  *(HeightFieldShape **)(piVar9 + 8) = local_98;
  *(long **)(piVar9 + 10) = uStack_90;
  piVar9[6] = 0;
  piVar9[7] = 0;
  *(undefined1 (*) [16])(piVar9 + 2) = (undefined1  [16])0x0;
  *(ulong *)(piVar9 + 0xc) = CONCAT44(fStack_84,local_88);
  *(ulong *)(piVar9 + 0xe) = CONCAT44(fStack_7c,fStack_80);
  if (local_120 == (long *)0x0) {
    lVar16 = 0x10;
    uVar26 = 1;
LAB_0010b622:
    puVar10 = (undefined8 *)(*Allocate)(lVar16);
    puVar13 = *(undefined8 **)(piVar9 + 6);
    if (puVar13 != (undefined8 *)0x0) {
      lVar16 = *(long *)(piVar9 + 2);
      if (puVar10 < puVar13) {
        for (puVar21 = puVar10; puVar21 < puVar10 + lVar16 * 2; puVar21 = puVar21 + 2) {
          uVar2 = *puVar13;
          uVar14 = *(undefined4 *)(puVar13 + 1);
          puVar13 = puVar13 + 2;
          *puVar21 = uVar2;
          *(undefined4 *)(puVar21 + 1) = uVar14;
        }
      }
      else {
        puVar13 = puVar13 + lVar16 * 2 + -2;
        puVar21 = puVar10 + lVar16 * 2 + -2;
        if (!CARRY8(lVar16 * 0x10 - 0x10,(ulong)puVar10)) {
          do {
            uVar2 = *puVar13;
            uVar14 = *(undefined4 *)(puVar13 + 1);
            puVar20 = puVar21 + -2;
            puVar13 = puVar13 + -2;
            *puVar21 = uVar2;
            *(undefined4 *)(puVar21 + 1) = uVar14;
            puVar21 = puVar20;
          } while (puVar10 <= puVar20);
        }
      }
      (*Free)();
    }
    lVar16 = *(long *)(piVar9 + 2);
    *(ulong *)(piVar9 + 4) = uVar26;
    *(undefined8 **)(piVar9 + 6) = puVar10;
    uVar26 = lVar16 + 1;
  }
  else {
    (**(code **)(*local_120 + 0x10))(local_120);
    lVar16 = *(long *)(piVar9 + 2);
    uVar26 = lVar16 + 1;
    if (*(ulong *)(piVar9 + 4) < uVar26) {
      uVar3 = *(ulong *)(piVar9 + 4) * 2;
      if (uVar26 <= uVar3) {
        uVar26 = uVar3;
      }
      lVar16 = uVar26 << 4;
      goto LAB_0010b622;
    }
    puVar10 = *(undefined8 **)(piVar9 + 6);
  }
  *(ulong *)(piVar9 + 2) = uVar26;
  puVar10[lVar16 * 2] = plVar8;
  *(undefined4 *)(puVar10 + lVar16 * 2 + 1) = 0x7f7fffff;
  LOCK();
  *piVar9 = *piVar9 + 1;
  UNLOCK();
  lVar16 = *(long *)(param_1 + 0xb0);
  uVar26 = lVar16 + 1;
  if (*(ulong *)(param_1 + 0xb8) < uVar26) {
    uVar3 = *(ulong *)(param_1 + 0xb8) * 2;
    if (uVar26 <= uVar3) {
      uVar26 = uVar3;
    }
    puVar10 = (undefined8 *)(*Allocate)(uVar26 * 8);
    puVar13 = *(undefined8 **)(param_1 + 0xc0);
    if (puVar13 != (undefined8 *)0x0) {
      lVar16 = *(long *)(param_1 + 0xb0);
      if (puVar10 < puVar13) {
        for (puVar21 = puVar10; puVar21 < puVar10 + lVar16; puVar21 = puVar21 + 1) {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          *puVar21 = uVar2;
        }
      }
      else {
        puVar13 = puVar13 + lVar16 + -1;
        puVar21 = puVar10 + lVar16 + -1;
        if (!CARRY8(lVar16 * 8 - 8,(ulong)puVar10)) {
          do {
            uVar2 = *puVar13;
            puVar20 = puVar21 + -1;
            puVar13 = puVar13 + -1;
            *puVar21 = uVar2;
            puVar21 = puVar20;
          } while (puVar10 <= puVar20);
        }
      }
      (*Free)();
    }
    lVar16 = *(long *)(param_1 + 0xb0);
    *(ulong *)(param_1 + 0xb8) = uVar26;
    *(undefined8 **)(param_1 + 0xc0) = puVar10;
    uVar26 = lVar16 + 1;
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0xc0);
  }
  *(ulong *)(param_1 + 0xb0) = uVar26;
  puVar10[lVar16] = piVar9;
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))();
  }
LAB_0010b40f:
  if (pfVar7 != (float *)0x0) {
    (*Free)();
  }
  uVar32 = uVar33;
  if (*(uint *)(param_1 + 0x40) <= uVar33) goto code_r0x0010b42a;
  goto LAB_0010af48;
code_r0x0010b42a:
  uVar29 = uVar30;
  if (*(uint *)(param_1 + 0x40) <= uVar30) goto LAB_0010b44d;
  goto LAB_0010af2d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::sCastConvexVsHeightField(JPH::ShapeCast
   const&, JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&,
   JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&)::Visitor>(JPH::HeightFieldShape::sCastConvexVsHeightField(JPH::ShapeCast
   const&, JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&,
   JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&)::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::sCastConvexVsHeightField(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  HeightFieldShape HVar1;
  HeightFieldShape HVar2;
  ushort uVar3;
  HeightFieldShape *this_00;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [14];
  undefined1 auVar20 [16];
  undefined1 *puVar21;
  char *pcVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  char *pcVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  float fVar41;
  int *piVar42;
  int *piVar43;
  undefined1 *puVar44;
  uint uVar46;
  int *piVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  float *pfVar50;
  undefined1 (*pauVar51) [16];
  undefined8 *puVar52;
  float *pfVar53;
  Visitor *pVVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  long in_FS_OFFSET;
  byte bVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  undefined1 auVar68 [8];
  float fVar78;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar76;
  uint uVar77;
  uint uVar79;
  float fVar81;
  undefined1 auVar72 [16];
  uint uVar82;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar80;
  float fVar83;
  uint uVar84;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar96;
  undefined1 auVar89 [16];
  uint uVar94;
  uint uVar95;
  undefined1 auVar90 [16];
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar111;
  float fVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar113;
  undefined1 auVar110 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar129;
  float fVar130;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar131;
  float fVar132;
  float fVar136;
  float fVar137;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar138;
  undefined1 auVar135 [16];
  float fVar139;
  undefined1 auVar140 [16];
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
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  uint uStack_480;
  uint uStack_47c;
  uint local_478;
  uint uStack_474;
  uint uStack_470;
  uint uStack_46c;
  uint uStack_468;
  int local_464;
  uint uStack_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  ulong uStack_450;
  int iStack_448;
  float fStack_444;
  Visitor *local_440;
  float fStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  float *pfStack_428;
  uint local_420;
  uint local_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  undefined1 auStack_408 [16];
  undefined1 auStack_3f8 [16];
  undefined1 auStack_3e8 [16];
  undefined8 uStack_3d8;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  undefined8 uStack_3b8;
  uint uStack_3b0;
  uint uStack_3ac;
  undefined8 uStack_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  undefined8 uStack_398;
  uint uStack_390;
  uint uStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [8];
  float fStack_360;
  float fStack_35c;
  uint uStack_34c;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar45;
  
  bVar59 = 0;
  piVar47 = &iStack_4f8;
  piVar42 = &iStack_4f8;
  piVar43 = &iStack_4f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  local_440 = param_1;
  if (*(int *)(this + 0x48) != 0) {
    local_420 = *(uint *)(this + 0x44);
    local_478 = *(uint *)(this + 0x40) - 1;
    local_41c = local_420 + 1;
    uVar24 = *(uint *)(this + 0x40) / local_420;
    local_458 = uVar24 - 1;
    if (local_458 == 0) {
      local_454 = 0;
      local_464 = 0;
    }
    else {
      uVar25 = 0x1f;
      if (local_458 != 0) {
        for (; local_458 >> uVar25 == 0; uVar25 = uVar25 - 1) {
        }
      }
      local_464 = (&sGridOffsets)[0x1f - (uVar25 ^ 0x1f)];
      local_454 = 0x20 - (uVar25 ^ 0x1f);
    }
    local_45c = uVar24 + 1 >> 1;
    uVar38 = (long)(int)(local_41c * local_41c) * 0x10 + 0x10;
    piVar42 = &iStack_4f8;
    while (piVar43 != (int *)((long)&iStack_4f8 - (uVar38 & 0xfffffffffffff000))) {
      piVar47 = (int *)((long)piVar42 + -0x1000);
      *(undefined8 *)((long)piVar42 + -8) = *(undefined8 *)((long)piVar42 + -8);
      piVar43 = (int *)((long)piVar42 + -0x1000);
      piVar42 = (int *)((long)piVar42 + -0x1000);
    }
    uVar38 = (ulong)((uint)uVar38 & 0xfff);
    lVar5 = -uVar38;
    puVar44 = (undefined1 *)((long)piVar47 + lVar5);
    puVar45 = (undefined1 *)((long)piVar47 + lVar5);
    if (uVar38 != 0) {
      *(undefined8 *)((long)piVar47 + -8) = *(undefined8 *)((long)piVar47 + -8);
    }
    uVar38 = (long)(int)(local_41c * local_41c) + 0x17;
    pfStack_428 = (float *)((ulong)((long)piVar47 + lVar5 + 0xf) & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)piVar47 + lVar5);
    while (puVar45 != (undefined1 *)((long)piVar47 + (lVar5 - (uVar38 & 0xfffffffffffff000)))) {
      puVar44 = puVar21 + -0x1000;
      *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
      puVar45 = puVar21 + -0x1000;
      puVar21 = puVar21 + -0x1000;
    }
    uVar38 = (ulong)((uint)uVar38 & 0xff0);
    lVar5 = -uVar38;
    if (uVar38 != 0) {
      *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
    }
    fStack_498 = *(float *)(this + 0x20);
    fStack_4a8 = *(float *)(this + 0x24);
    fStack_4b8 = *(float *)(this + 0x28);
    uVar24 = 0;
    uStack_450 = (ulong)(puVar44 + lVar5 + 0xf) & 0xfffffffffffffff0;
    fStack_4c8 = *(float *)(this + 0x30);
    fStack_4d8 = *(float *)(this + 0x34);
    fStack_4e8 = *(float *)(this + 0x38);
    fVar41 = *(float *)(*(long *)(param_1 + 0x38) + 8);
    uStack_480 = local_420 * local_41c;
    iStack_4f8 = local_478 - __LC27;
    iStack_4f4 = local_478 - _UNK_00116694;
    iStack_4f0 = local_478 - _UNK_00116698;
    iStack_4ec = local_478 - _UNK_0011669c;
    fStack_4e4 = fStack_4e8;
    fStack_4e0 = fStack_4e8;
    fStack_4dc = fStack_4e8;
    fStack_4d4 = fStack_4d8;
    fStack_4d0 = fStack_4d8;
    fStack_4cc = fStack_4d8;
    fStack_4c4 = fStack_4c8;
    fStack_4c0 = fStack_4c8;
    fStack_4bc = fStack_4c8;
    fStack_4b4 = fStack_4b8;
    fStack_4b0 = fStack_4b8;
    fStack_4ac = fStack_4b8;
    fStack_4a4 = fStack_4a8;
    fStack_4a0 = fStack_4a8;
    fStack_49c = fStack_4a8;
    fStack_494 = fStack_498;
    fStack_490 = fStack_498;
    fStack_48c = fStack_498;
    uStack_474 = local_478;
    uStack_470 = local_478;
    uStack_46c = local_478;
    do {
      iStack_448 = local_250;
      fVar55 = _LC2;
      uVar40 = uVar24 & 0x3fff;
      uVar25 = uVar24 >> 0xe & 0x3fff;
      uVar26 = uVar24 >> 0x1c;
      if (uVar26 < local_454) {
        bVar6 = (byte)(uVar24 >> 0x18);
        uVar24 = 1 << (bVar6 >> 4);
        if (local_45c < uVar24) {
          uVar24 = local_45c;
        }
        uVar56 = local_420 << (((char)local_454 + -1) - (bVar6 >> 4) & 0x1f);
        auVar71 = *(undefined1 (*) [16])
                   ((ulong)(uVar24 * uVar25 + (&sGridOffsets)[uVar26] + uVar40) * 0x10 +
                   *(long *)(local_258 + 0x60));
        iVar37 = uVar40 * 2;
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar71._0_10_;
        auVar7._12_2_ = auVar71._6_2_;
        auVar8._8_2_ = auVar71._4_2_;
        auVar8._0_8_ = auVar71._0_8_;
        auVar8._10_4_ = auVar7._10_4_;
        auVar19._6_8_ = 0;
        auVar19._0_6_ = auVar8._8_6_;
        fVar67 = (float)auVar71._8_2_ * fStack_4d8 + fStack_4a8;
        fVar76 = (float)auVar71._10_2_ * fStack_4d4 + fStack_4a4;
        fStack_3d0 = (float)auVar71._12_2_ * fStack_4d0 + fStack_4a0;
        fStack_3cc = (float)auVar71._14_2_ * fStack_4cc + fStack_49c;
        fStack_3c8 = (float)auVar71._0_2_ * fStack_4d8 + fStack_4a8;
        fStack_3c4 = (float)(int)CONCAT82(SUB148(auVar19 << 0x40,6),auVar71._2_2_) * fStack_4d4 +
                     fStack_4a4;
        fStack_3c0 = (float)auVar8._8_4_ * fStack_4d0 + fStack_4a0;
        fStack_3bc = (float)(auVar7._10_4_ >> 0x10) * fStack_4cc + fStack_49c;
        iVar36 = uVar25 * 2;
        auVar64._4_4_ = uVar56;
        auVar64._0_4_ = uVar56;
        auVar64._8_4_ = uVar56;
        auVar64._12_4_ = uVar56;
        auVar89._0_4_ = __LC25 + iVar37;
        auVar89._4_4_ = _UNK_00116674 + iVar37;
        auVar89._8_4_ = _UNK_00116678 + iVar37;
        auVar89._12_4_ = _UNK_0011667c + iVar37;
        iVar29 = (uVar26 + 1) * 0x10000000 + uVar25 * 0x8000 + iVar37;
        auVar72._0_4_ = iVar37 + __LC26;
        auVar72._4_4_ = iVar37 + _UNK_00116684;
        auVar72._8_4_ = iVar37 + _UNK_00116688;
        auVar72._12_4_ = iVar37 + _UNK_0011668c;
        uStack_3d8 = CONCAT44(fVar76,fVar67);
        uVar94 = (uint)((auVar72._8_8_ & 0xffffffff) * (ulong)uVar56);
        uVar46 = (uint)((auVar72._8_8_ >> 0x20) * (ulong)uVar56);
        uVar79 = -(uint)(iStack_4f8 < (int)(auVar72._0_4_ * uVar56 - __LC27));
        uVar57 = -(uint)(iStack_4f4 < (int)(auVar72._4_4_ * uVar56 - _UNK_00116694));
        uVar28 = -(uint)(iStack_4f0 < (int)(uVar94 - _UNK_00116698));
        uVar82 = -(uint)(iStack_4ec < (int)(uVar46 - _UNK_0011669c));
        auVar99._0_4_ = __LC28 + iVar36;
        auVar99._4_4_ = _UNK_001166a4 + iVar36;
        auVar99._8_4_ = _UNK_001166a8 + iVar36;
        auVar99._12_4_ = _UNK_001166ac + iVar36;
        uVar24 = uVar56 * (iVar36 + __LC29);
        uVar84 = (iVar36 + _UNK_001166b4) * uVar56;
        uVar95 = (iVar36 + _UNK_001166b4) * uVar56;
        uVar40 = (uint)((auVar64._8_8_ & 0xffffffff) * (ulong)(uint)(iVar36 + _UNK_001166b8));
        uVar25 = -(uint)(iStack_4f8 < (int)(uVar24 - __LC27));
        uVar26 = -(uint)(iStack_4f4 < (int)(uVar84 - _UNK_00116694));
        uVar27 = -(uint)(iStack_4f0 < (int)(uVar40 - _UNK_00116698));
        uVar77 = -(uint)(iStack_4ec < (int)(uVar95 - _UNK_0011669c));
        auStack_3e8._0_4_ = iVar29 + __LC30;
        auStack_3e8._4_4_ = iVar29 + _UNK_001166c4;
        auStack_3e8._8_4_ = iVar29 + _UNK_001166c8;
        auStack_3e8._12_4_ = iVar29 + _UNK_001166cc;
        fVar55 = *(float *)(local_440 + 0x20);
        fVar60 = *(float *)(local_440 + 0x24);
        fVar97 = *(float *)(local_440 + 0x28);
        auVar90._0_8_ =
             CONCAT44(((float)(int)(auVar89._4_4_ * uVar56) * fStack_4c4 + fStack_494) * fVar55,
                      ((float)(int)(auVar89._0_4_ * uVar56) * fStack_4c8 + fStack_498) * fVar55);
        auVar90._8_4_ =
             ((float)(int)((auVar89._8_8_ & 0xffffffff) * (ulong)uVar56) * fStack_4c0 + fStack_490)
             * fVar55;
        auVar90._12_4_ =
             ((float)(int)((auVar89._8_8_ >> 0x20) * (ulong)uVar56) * fStack_4bc + fStack_48c) *
             fVar55;
        auVar73._0_4_ =
             ((float)(int)(~uVar79 & auVar72._0_4_ * uVar56 | local_478 & uVar79) * fStack_4c8 +
             fStack_498) * fVar55;
        auVar73._4_4_ =
             ((float)(int)(~uVar57 & auVar72._4_4_ * uVar56 | uStack_474 & uVar57) * fStack_4c4 +
             fStack_494) * fVar55;
        auVar73._8_4_ =
             ((float)(int)(~uVar28 & uVar94 | uStack_470 & uVar28) * fStack_4c0 + fStack_490) *
             fVar55;
        auVar73._12_4_ =
             ((float)(int)(~uVar82 & uVar46 | uStack_46c & uVar82) * fStack_4bc + fStack_48c) *
             fVar55;
        auVar135._8_4_ = auVar90._8_4_;
        auVar135._0_8_ = auVar90._0_8_;
        auVar135._12_4_ = auVar90._12_4_;
        auVar134 = minps(auVar135,auVar73);
        auVar88 = maxps(auVar90,auVar73);
        auVar110._0_8_ = CONCAT44(fStack_3c4 * fVar60,fStack_3c8 * fVar60);
        auVar110._8_4_ = fStack_3c0 * fVar60;
        auVar110._12_4_ = fStack_3bc * fVar60;
        auVar74._0_4_ = fVar60 * fVar67;
        auVar74._4_4_ = fVar60 * fVar76;
        auVar74._8_4_ = fVar60 * fStack_3d0;
        auVar74._12_4_ = fVar60 * fStack_3cc;
        auVar101._8_4_ = auVar110._8_4_;
        auVar101._0_8_ = auVar110._0_8_;
        auVar101._12_4_ = auVar110._12_4_;
        auVar103 = minps(auVar101,auVar74);
        auVar128 = maxps(auVar110,auVar74);
        fVar55 = *(float *)(local_440 + 0x10c0);
        fVar60 = *(float *)(local_440 + 0x10c4);
        fVar81 = *(float *)(local_440 + 0x10c8);
        auVar75._0_8_ =
             CONCAT44(((float)(int)(auVar99._4_4_ * uVar56) * fStack_4e4 + fStack_4b4) * fVar97,
                      ((float)(int)(auVar99._0_4_ * uVar56) * fStack_4e8 + fStack_4b8) * fVar97);
        auVar75._8_4_ =
             ((float)(int)((auVar99._8_8_ & 0xffffffff) * (ulong)uVar56) * fStack_4e0 + fStack_4b0)
             * fVar97;
        auVar75._12_4_ =
             ((float)(int)((auVar99._8_8_ >> 0x20) * (ulong)uVar56) * fStack_4dc + fStack_4ac) *
             fVar97;
        auVar65._0_4_ =
             ((float)(int)(~uVar25 & uVar24 | local_478 & uVar25) * fStack_4e8 + fStack_4b8) *
             fVar97;
        auVar65._4_4_ =
             ((float)(int)(~uVar26 & uVar84 | uStack_474 & uVar26) * fStack_4e4 + fStack_4b4) *
             fVar97;
        auVar65._8_4_ =
             ((float)(int)(~uVar27 & uVar40 | uStack_470 & uVar27) * fStack_4e0 + fStack_4b0) *
             fVar97;
        auVar65._12_4_ =
             ((float)(int)(~uVar77 & uVar95 | uStack_46c & uVar77) * fStack_4dc + fStack_4ac) *
             fVar97;
        auVar105._8_4_ = auVar75._8_4_;
        auVar105._0_8_ = auVar75._0_8_;
        auVar105._12_4_ = auVar75._12_4_;
        auVar109 = minps(auVar105,auVar65);
        auVar71 = maxps(auVar75,auVar65);
        fVar97 = *(float *)(local_440 + 0x10d0);
        fVar113 = *(float *)(local_440 + 0x10d4);
        fVar96 = *(float *)(local_440 + 0x10d8);
        fVar136 = auVar134._0_4_ - fVar97;
        fVar137 = auVar134._4_4_ - fVar97;
        fVar138 = auVar134._8_4_ - fVar97;
        fVar139 = auVar134._12_4_ - fVar97;
        fVar93 = auVar88._0_4_ + fVar97;
        fVar92 = auVar88._4_4_ + fVar97;
        fVar107 = auVar88._8_4_ + fVar97;
        fVar97 = auVar88._12_4_ + fVar97;
        fVar129 = auVar103._0_4_ - fVar113;
        fVar130 = auVar103._4_4_ - fVar113;
        fVar131 = auVar103._8_4_ - fVar113;
        fVar132 = auVar103._12_4_ - fVar113;
        fVar111 = auVar128._0_4_ + fVar113;
        fVar112 = auVar128._4_4_ + fVar113;
        fVar122 = auVar128._8_4_ + fVar113;
        fVar113 = auVar128._12_4_ + fVar113;
        uStack_390 = *(uint *)(local_440 + 0x10b0);
        uStack_3a0 = *(uint *)(local_440 + 0x10b4);
        uStack_3b0 = *(uint *)(local_440 + 0x10b8);
        fVar123 = auVar109._0_4_ - fVar96;
        fVar124 = auVar109._4_4_ - fVar96;
        fVar125 = auVar109._8_4_ - fVar96;
        fVar126 = auVar109._12_4_ - fVar96;
        fVar78 = auVar71._0_4_ + fVar96;
        fVar83 = auVar71._4_4_ + fVar96;
        fVar91 = auVar71._8_4_ + fVar96;
        fVar96 = auVar71._12_4_ + fVar96;
        uStack_3b8 = CONCAT44(uStack_3b0,uStack_3b0);
        uStack_398 = (float *)CONCAT44(uStack_390,uStack_390);
        uStack_3a8 = CONCAT44(uStack_3a0,uStack_3a0);
        fVar13 = *(float *)(local_440 + 0x10a0);
        fStack_36c = *(float *)(local_440 + 0x10a4);
        fStack_37c = *(float *)(local_440 + 0x10a8);
        auVar121._0_8_ = CONCAT44((fVar137 - fVar55) * fVar13,(fVar136 - fVar55) * fVar13);
        auVar121._8_4_ = (fVar138 - fVar55) * fVar13;
        auVar121._12_4_ = (fVar139 - fVar55) * fVar13;
        auStack_3f8._0_8_ =
             CONCAT44((fVar130 - fVar60) * fStack_36c,(fVar129 - fVar60) * fStack_36c);
        auStack_3f8._8_4_ = (fVar131 - fVar60) * fStack_36c;
        auStack_3f8._12_4_ = (fVar132 - fVar60) * fStack_36c;
        auStack_368._4_4_ = (fVar124 - fVar81) * fStack_37c;
        auStack_368._0_4_ = (fVar123 - fVar81) * fStack_37c;
        fStack_360 = (fVar125 - fVar81) * fStack_37c;
        fStack_35c = (fVar126 - fVar81) * fStack_37c;
        auStack_408._0_4_ = (fVar93 - fVar55) * fVar13;
        auStack_408._4_4_ = (fVar92 - fVar55) * fVar13;
        auStack_408._8_4_ = (fVar107 - fVar55) * fVar13;
        auStack_408._12_4_ = (fVar97 - fVar55) * fVar13;
        fStack_378 = (fVar111 - fVar60) * fStack_36c;
        fStack_374 = (fVar112 - fVar60) * fStack_36c;
        fStack_370 = (fVar122 - fVar60) * fStack_36c;
        fStack_36c = (fVar113 - fVar60) * fStack_36c;
        fStack_388 = (fVar78 - fVar81) * fStack_37c;
        fStack_384 = (fVar83 - fVar81) * fStack_37c;
        fStack_380 = (fVar91 - fVar81) * fStack_37c;
        fStack_37c = (fVar96 - fVar81) * fStack_37c;
        auVar118._8_4_ = auVar121._8_4_;
        auVar118._0_8_ = auVar121._0_8_;
        auVar118._12_4_ = auVar121._12_4_;
        auVar88 = maxps(auVar121,auStack_408);
        auVar71 = minps(auVar118,auStack_408);
        uVar24 = (int)uStack_390 >> 0x1f;
        auVar145._8_4_ = auStack_3f8._8_4_;
        auVar145._0_8_ = auStack_3f8._0_8_;
        auVar145._12_4_ = auStack_3f8._12_4_;
        auVar128._4_4_ = fStack_374;
        auVar128._0_4_ = fStack_378;
        auVar128._8_4_ = fStack_370;
        auVar128._12_4_ = fStack_36c;
        auVar103 = minps(auVar145,auVar128);
        uStack_418 = (uint)_LC19 & uVar24 | ~uVar24 & auVar71._0_4_;
        uStack_414 = _UNK_00116644 & uVar24 | ~uVar24 & auVar71._4_4_;
        uStack_410 = _UNK_00116648 & uVar24 | ~uVar24 & auVar71._8_4_;
        uStack_40c = _UNK_0011664c & uVar24 | ~uVar24 & auVar71._12_4_;
        uVar26 = (int)uStack_3a0 >> 0x1f;
        fStack_438 = (float)((uint)_LC19 & uVar26 | ~uVar26 & auVar103._0_4_);
        uStack_434 = _UNK_00116644 & uVar26 | ~uVar26 & auVar103._4_4_;
        uStack_430 = _UNK_00116648 & uVar26 | ~uVar26 & auVar103._8_4_;
        uStack_42c = _UNK_0011664c & uVar26 | ~uVar26 & auVar103._12_4_;
        auVar103._4_4_ = fStack_384;
        auVar103._0_4_ = fStack_388;
        auVar103._8_4_ = fStack_380;
        auVar103._12_4_ = fStack_37c;
        auVar71 = minps(_auStack_368,auVar103);
        uVar25 = (int)uStack_3b0 >> 0x1f;
        auVar146._0_4_ = ~uVar25 & auVar71._0_4_;
        auVar146._4_4_ = ~uVar25 & auVar71._4_4_;
        auVar146._8_4_ = ~uVar25 & auVar71._8_4_;
        auVar146._12_4_ = ~uVar25 & auVar71._12_4_;
        auVar151._0_4_ = (uint)_LC19 & uVar25;
        auVar151._4_4_ = _UNK_00116644 & uVar25;
        auVar151._8_4_ = _UNK_00116648 & uVar25;
        auVar151._12_4_ = _UNK_0011664c & uVar25;
        auVar100._0_4_ = uVar24 & _LC13;
        auVar100._4_4_ = uVar24 & _UNK_00116654;
        auVar100._8_4_ = uVar24 & _UNK_00116658;
        auVar100._12_4_ = uVar24 & _UNK_0011665c;
        auVar147._0_4_ = ~uVar24 & auVar88._0_4_;
        auVar147._4_4_ = ~uVar24 & auVar88._4_4_;
        auVar147._8_4_ = ~uVar24 & auVar88._8_4_;
        auVar147._12_4_ = ~uVar24 & auVar88._12_4_;
        auVar134._4_4_ = fStack_374;
        auVar134._0_4_ = fStack_378;
        auVar134._8_4_ = fStack_370;
        auVar134._12_4_ = fStack_36c;
        auVar71 = maxps(auStack_3f8,auVar134);
        auVar119._0_4_ = uVar26 & _LC13;
        auVar119._4_4_ = uVar26 & _UNK_00116654;
        auVar119._8_4_ = uVar26 & _UNK_00116658;
        auVar119._12_4_ = uVar26 & _UNK_0011665c;
        auVar148._0_4_ = ~uVar26 & auVar71._0_4_;
        auVar148._4_4_ = ~uVar26 & auVar71._4_4_;
        auVar148._8_4_ = ~uVar26 & auVar71._8_4_;
        auVar148._12_4_ = ~uVar26 & auVar71._12_4_;
        auVar109._4_4_ = fStack_384;
        auVar109._0_4_ = fStack_388;
        auVar109._8_4_ = fStack_380;
        auVar109._12_4_ = fStack_37c;
        auVar71 = maxps(_auStack_368,auVar109);
        auVar115._0_4_ = uVar25 & _LC13;
        auVar115._4_4_ = uVar25 & _UNK_00116654;
        auVar115._8_4_ = uVar25 & _UNK_00116658;
        auVar115._12_4_ = uVar25 & _UNK_0011665c;
        auVar103 = minps(auVar100 | auVar147,auVar119 | auVar148);
        auVar149._0_4_ = ~uVar25 & auVar71._0_4_;
        auVar149._4_4_ = ~uVar25 & auVar71._4_4_;
        auVar149._8_4_ = ~uVar25 & auVar71._8_4_;
        auVar149._12_4_ = ~uVar25 & auVar71._12_4_;
        auVar88._4_4_ = uStack_414;
        auVar88._0_4_ = uStack_418;
        auVar88._8_4_ = uStack_410;
        auVar88._12_4_ = uStack_40c;
        auVar71._4_4_ = uStack_434;
        auVar71._0_4_ = fStack_438;
        auVar71._8_4_ = uStack_430;
        auVar71._12_4_ = uStack_42c;
        auVar88 = maxps(auVar88,auVar71);
        auVar71 = minps(auVar103,auVar115 | auVar149);
        auVar88 = maxps(auVar88,auVar151 | auVar146);
        uVar24 = (int)(-(uint)(fVar60 < fVar129 || fVar111 < fVar60) & uStack_3a0 |
                       -(uint)(fVar55 < fVar136 || fVar93 < fVar55) & uStack_390 |
                       -(uint)((fVar93 < fVar136 || fVar111 < fVar129) ||
                              (auVar71._0_4_ < auVar88._0_4_ || auVar71._0_4_ < 0.0)) |
                      -(uint)(fVar81 < fVar123 || fVar78 < fVar81) & uStack_3b0 |
                      -(uint)(fVar78 < fVar123)) >> 0x1f;
        uVar25 = (int)(-(uint)(fVar60 < fVar130 || fVar112 < fVar60) & uStack_3a0 |
                       -(uint)(fVar55 < fVar137 || fVar92 < fVar55) & uStack_390 |
                       -(uint)((fVar92 < fVar137 || fVar112 < fVar130) ||
                              (auVar71._4_4_ < auVar88._4_4_ || auVar71._4_4_ < 0.0)) |
                      -(uint)(fVar81 < fVar124 || fVar83 < fVar81) & uStack_3b0 |
                      -(uint)(fVar83 < fVar124)) >> 0x1f;
        uVar26 = (int)(-(uint)(fVar60 < fVar131 || fVar122 < fVar60) & uStack_3a0 |
                       -(uint)(fVar55 < fVar138 || fVar107 < fVar55) & uStack_390 |
                       -(uint)((fVar107 < fVar138 || fVar122 < fVar131) ||
                              (auVar71._8_4_ < auVar88._8_4_ || auVar71._8_4_ < 0.0)) |
                      -(uint)(fVar81 < fVar125 || fVar91 < fVar81) & uStack_3b0 |
                      -(uint)(fVar91 < fVar125)) >> 0x1f;
        uVar40 = (int)(-(uint)(fVar60 < fVar132 || fVar113 < fVar60) & uStack_3a0 |
                       -(uint)(fVar55 < fVar139 || fVar97 < fVar55) & uStack_390 |
                       -(uint)((fVar97 < fVar139 || fVar113 < fVar132) ||
                              (auVar71._12_4_ < auVar88._12_4_ || auVar71._12_4_ < 0.0)) |
                      -(uint)(fVar81 < fVar126 || fVar96 < fVar81) & uStack_3b0 |
                      -(uint)(fVar96 < fVar126)) >> 0x1f;
        lVar30 = (long)local_250;
        lVar58 = lVar30 * 4;
        uVar56 = (int)-(uint)(fStack_3c8 <= fVar67) >> 0x1f;
        uVar27 = (int)-(uint)(fStack_3c4 <= fVar76) >> 0x1f;
        uVar77 = (int)-(uint)(fStack_3c0 <= fStack_3d0) >> 0x1f;
        uVar79 = (int)-(uint)(fStack_3bc <= fStack_3cc) >> 0x1f;
        pVVar54 = local_440 + lVar58 + 0x10e8;
        fVar55 = (float)((uVar24 & _LC13 | ~uVar24 & (uint)auVar88._0_4_) & uVar56 | ~uVar56 & _LC13
                        );
        fVar60 = (float)((uVar25 & _UNK_00116654 | ~uVar25 & (uint)auVar88._4_4_) & uVar27 |
                        ~uVar27 & _UNK_00116654);
        fVar97 = (float)((uVar26 & _UNK_00116658 | ~uVar26 & (uint)auVar88._8_4_) & uVar77 |
                        ~uVar77 & _UNK_00116658);
        fVar81 = (float)((uVar40 & _UNK_0011665c | ~uVar40 & (uint)auVar88._12_4_) & uVar79 |
                        ~uVar79 & _UNK_0011665c);
        if (fVar41 <= _LC52) {
          fVar41 = _LC52;
        }
        uVar24 = (int)-(uint)(fVar55 < fVar97) >> 0x1f;
        uVar25 = (int)-(uint)(fVar60 < fVar81) >> 0x1f;
        fVar113 = (float)((uint)fVar97 & uVar24 | ~uVar24 & (uint)fVar55);
        fVar96 = (float)((uint)fVar81 & uVar25 | ~uVar25 & (uint)fVar60);
        fVar97 = (float)((uint)fVar55 & uVar24 | ~uVar24 & (uint)fVar97);
        fVar81 = (float)((uint)fVar60 & uVar25 | ~uVar25 & (uint)fVar81);
        uVar56 = uVar24 & auStack_3e8._8_4_ | ~uVar24 & auStack_3e8._0_4_;
        uVar27 = uVar25 & auStack_3e8._12_4_ | ~uVar25 & auStack_3e8._4_4_;
        uVar79 = uVar24 & auStack_3e8._0_4_ | ~uVar24 & auStack_3e8._8_4_;
        uVar57 = uVar25 & auStack_3e8._4_4_ | ~uVar25 & auStack_3e8._12_4_;
        uVar24 = (int)-(uint)(fVar113 < fVar96) >> 0x1f;
        uVar26 = (int)-(uint)(fVar97 < fVar81) >> 0x1f;
        fVar55 = (float)((uint)fVar113 & uVar24 | ~uVar24 & (uint)fVar96);
        fVar60 = (float)((uint)fVar81 & uVar26 | ~uVar26 & (uint)fVar97);
        uVar25 = uVar24 & uVar56 | ~uVar24 & uVar27;
        uVar40 = uVar26 & uVar57 | ~uVar26 & uVar79;
        uVar77 = (int)-(uint)(fVar55 < fVar60) >> 0x1f;
        auVar106._4_4_ = ~uVar77 & (uint)fVar55;
        auVar106._0_4_ = (uint)fVar96 & uVar24 | ~uVar24 & (uint)fVar113;
        auVar106._8_4_ = ~uVar77 & (uint)fVar60;
        auVar106._12_4_ = (uint)fVar97 & uVar26 | ~uVar26 & (uint)fVar81;
        auVar12._4_4_ = (uint)fVar55 & uVar77;
        auVar12._0_4_ = (uint)fVar60 & uVar77;
        auVar12._8_8_ = 0;
        _auStack_368 = auVar12 << 0x20 | auVar106;
        auStack_318._4_4_ = ~uVar77 & uVar25;
        auStack_318._0_4_ = uVar24 & uVar27 | ~uVar24 & uVar56;
        auStack_318._8_4_ = ~uVar77 & uVar40;
        auStack_318._12_4_ = uVar26 & uVar79 | ~uVar26 & uVar57;
        auVar10._4_4_ = uVar77 & uVar25;
        auVar10._0_4_ = uVar77 & uVar40;
        auVar10._8_8_ = 0;
        auStack_318 = auVar10 << 0x20 | auStack_318;
        auVar66._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar41);
        auVar66._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar41);
        auVar66._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar41);
        auVar66._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar41);
        iVar37 = movmskps((int)local_440,auVar66);
        *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10ce0d;
        uStack_3ac = uStack_3b0;
        uStack_39c = uStack_3a0;
        uStack_38c = uStack_390;
        uVar24 = __popcountdi2();
        _auStack_298 = _auStack_368;
        if (iVar37 == 0) {
          _auStack_298 = (undefined1  [16])0x0;
          auVar68 = (undefined1  [8])0x0;
          uVar80 = 0;
        }
        else {
          _auStack_2d8 = (undefined1  [16])0x0;
          puVar52 = (undefined8 *)auStack_298;
          uVar38 = (ulong)uVar24 << 2;
          puVar49 = (undefined8 *)auStack_2d8;
          lVar33 = (4 - (long)(int)uVar24) * 4;
          puVar48 = (undefined8 *)((long)puVar52 + lVar33);
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar49 = *puVar48;
              puVar48 = puVar48 + (ulong)bVar59 * -2 + 1;
              puVar49 = puVar49 + (ulong)bVar59 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar49 = *(undefined4 *)puVar48;
          }
          puVar49 = (undefined8 *)(auStack_318 + lVar33);
          _auStack_298 = (undefined1  [16])0x0;
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar52 = *puVar49;
              puVar49 = puVar49 + (ulong)bVar59 * -2 + 1;
              puVar52 = puVar52 + (ulong)bVar59 * -2 + 1;
            }
          }
          auVar68 = auStack_2d8;
          uVar80 = uStack_2d0;
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar52 = *(undefined4 *)puVar49;
          }
        }
        *(undefined1 (*) [8])pVVar54 = auVar68;
        *(undefined8 *)(pVVar54 + 8) = uVar80;
        local_250 = uVar24 + iStack_448;
        *(undefined1 (*) [8])(auStack_24c + lVar30) = auStack_298;
        *(undefined8 *)((long)auStack_244 + lVar58) = uStack_290;
        auStack_318 = _auStack_298;
        fVar41 = *(float *)(*(long *)(local_440 + 0x38) + 8);
      }
      else {
        lVar58 = *(long *)(local_258 + 0x60);
        uVar27 = uVar25 * 2 & 2;
        HVar1 = local_258[0x55];
        uVar38 = (ulong)(uVar27 | uVar24 & 1);
        uStack_460 = local_420 * uVar40;
        uVar56 = local_420 * uVar25;
        uVar26 = local_420 + uStack_460;
        auStack_368._0_4_ = local_420 + uVar56;
        iVar37 = (uVar25 >> 1) * local_45c + local_464;
        fVar60 = (float)(byte)HVar1;
        lVar30 = (ulong)((uVar40 >> 1) + iVar37) * 0x10 + lVar58;
        uVar3 = *(ushort *)(lVar30 + 8 + uVar38 * 2);
        uVar79 = (uint)*(ushort *)(lVar30 + uVar38 * 2);
        uVar77 = (uint)(byte)HVar1;
        if (uVar56 < (uint)auStack_368._0_4_) {
          lVar30 = (ulong)(local_420 - 1) + 1;
          uVar38 = uStack_450;
          pfVar53 = pfStack_428;
          uVar57 = uVar56;
          do {
            uVar35 = uVar38;
            if (uStack_460 < uVar26) {
              HVar2 = local_258[0x54];
              lVar33 = *(long *)(local_258 + 0x68);
              fVar97 = *(float *)(local_258 + 0x30);
              fVar81 = *(float *)(local_258 + 0x34);
              fVar113 = *(float *)(local_258 + 0x38);
              fVar96 = *(float *)(local_258 + 0x3c);
              iVar36 = (int)uVar38;
              auVar71 = *(undefined1 (*) [16])(local_258 + 0x20);
              uVar35 = uVar38 + lVar30;
              uVar46 = (*(int *)(local_258 + 0x40) * uVar57 + uStack_460) * (uint)(byte)HVar2;
              pfVar50 = pfVar53;
              do {
                iVar29 = (int)uVar38;
                uVar28 = (int)(uint)*(ushort *)(lVar33 + (ulong)(uVar46 >> 3)) >> ((byte)uVar46 & 7)
                         & uVar77;
                *(bool *)uVar38 = HVar1 == SUB41(uVar28,0);
                uVar38 = uVar38 + 1;
                uVar46 = uVar46 + (byte)HVar2;
                *pfVar50 = (float)((uStack_460 - iVar36) + iVar29) * fVar97 + auVar71._0_4_;
                pfVar50[1] = (((float)uVar28 + fVar55) * ((float)(int)(uVar3 - uVar79) / fVar60) +
                             (float)uVar79) * fVar81 + auVar71._4_4_;
                pfVar50[2] = (float)uVar57 * fVar113 + auVar71._8_4_;
                pfVar50[3] = (float)uVar57 * fVar96 + auVar71._12_4_;
                pfVar50 = pfVar50 + 4;
              } while (uVar38 != uVar35);
              pfVar53 = pfVar53 + lVar30 * 4;
            }
            pfVar53 = pfVar53 + 4;
            uVar38 = uVar35 + 1;
            uVar57 = uVar57 + 1;
          } while (auStack_368._0_4_ != uVar57);
        }
        fVar55 = _LC2;
        iStack_2e0 = 1;
        if (uVar40 < local_458) {
          pfVar53 = pfStack_428 + (ulong)local_420 * 4;
          lVar30 = uStack_450 + local_420;
          uVar38 = (ulong)(uVar40 + 1 & 1 | uVar27);
          lVar33 = (ulong)((uVar40 + 1 >> 1) + iVar37) * 0x10 + lVar58;
          uVar3 = *(ushort *)(lVar33 + 8 + uVar38 * 2);
          uVar27 = (uint)*(ushort *)(lVar33 + uVar38 * 2);
          if (uVar56 < (uint)auStack_368._0_4_) {
            iVar37 = *(int *)(local_258 + 0x40);
            HVar2 = local_258[0x54];
            lVar33 = *(long *)(local_258 + 0x68);
            fVar97 = *(float *)(local_258 + 0x30);
            fVar81 = *(float *)(local_258 + 0x34);
            fVar113 = *(float *)(local_258 + 0x38);
            fVar96 = *(float *)(local_258 + 0x3c);
            fVar13 = *(float *)(local_258 + 0x20);
            fVar67 = *(float *)(local_258 + 0x24);
            fVar76 = *(float *)(local_258 + 0x28);
            fVar78 = *(float *)(local_258 + 0x2c);
            uVar57 = (iVar37 * uVar56 + uVar26) * (uint)(byte)HVar2;
            uVar79 = uVar56;
            do {
              uVar38 = (ulong)uVar79;
              uVar46 = (int)(uint)*(ushort *)(lVar33 + (ulong)(uVar57 >> 3)) >> ((byte)uVar57 & 7) &
                       uVar77;
              *(bool *)lVar30 = HVar1 == SUB41(uVar46,0);
              lVar30 = lVar30 + (ulong)local_41c;
              uVar79 = uVar79 + 1;
              uVar57 = uVar57 + iVar37 * (uint)(byte)HVar2;
              *pfVar53 = (float)uVar26 * fVar97 + fVar13;
              pfVar53[1] = (((float)uVar46 + fVar55) * ((float)(int)(uVar3 - uVar27) / fVar60) +
                           (float)uVar27) * fVar81 + fVar67;
              pfVar53[2] = (float)uVar38 * fVar113 + fVar76;
              pfVar53[3] = (float)uVar38 * fVar96 + fVar78;
              pfVar53 = pfVar53 + (ulong)local_41c * 4;
            } while (auStack_368._0_4_ != uVar79);
          }
          iStack_2e0 = 0;
        }
        fVar55 = _LC2;
        if (uVar25 < local_458) {
          uStack_398 = pfStack_428 + (ulong)uStack_480 * 4;
          lVar30 = uStack_450 + uStack_480;
          uVar27 = (uVar25 + 1) * 2 & 2;
          uVar38 = (ulong)(uVar24 & 1 | uVar27);
          iVar37 = (uVar25 + 1 >> 1) * local_45c + local_464;
          lVar33 = (ulong)(iVar37 + (uVar40 >> 1)) * 0x10 + lVar58;
          uVar3 = *(ushort *)(lVar33 + 8 + uVar38 * 2);
          uVar24 = (uint)*(ushort *)(lVar33 + uVar38 * 2);
          if (uStack_460 < uVar26) {
            HVar2 = local_258[0x54];
            lVar4 = *(long *)(local_258 + 0x68);
            fVar97 = *(float *)(local_258 + 0x30);
            fVar81 = *(float *)(local_258 + 0x34);
            fVar113 = *(float *)(local_258 + 0x38);
            fVar96 = *(float *)(local_258 + 0x3c);
            fVar13 = *(float *)(local_258 + 0x20);
            fVar67 = *(float *)(local_258 + 0x24);
            fVar76 = *(float *)(local_258 + 0x28);
            fVar78 = *(float *)(local_258 + 0x2c);
            iVar36 = (int)lVar30;
            uVar25 = (auStack_368._0_4_ * *(int *)(local_258 + 0x40) + uStack_460) *
                     (uint)(byte)HVar2;
            lVar34 = (ulong)(local_420 - 1) + 1;
            lVar33 = lVar30 + lVar34;
            pfVar53 = uStack_398;
            do {
              uVar79 = (int)(uint)*(ushort *)(lVar4 + (ulong)(uVar25 >> 3)) >> ((byte)uVar25 & 7) &
                       uVar77;
              *(bool *)lVar30 = HVar1 == SUB41(uVar79,0);
              iVar29 = (int)lVar30;
              lVar30 = lVar30 + 1;
              uVar25 = uVar25 + (byte)HVar2;
              *pfVar53 = (float)((uStack_460 - iVar36) + iVar29) * fVar97 + fVar13;
              pfVar53[1] = (((float)uVar79 + fVar55) * ((float)(int)(uVar3 - uVar24) / fVar60) +
                           (float)uVar24) * fVar81 + fVar67;
              pfVar53[2] = (float)(uint)auStack_368._0_4_ * fVar113 + fVar76;
              pfVar53[3] = (float)(uint)auStack_368._0_4_ * fVar96 + fVar78;
              pfVar53 = pfVar53 + 4;
            } while (lVar30 != lVar33);
            uStack_398 = uStack_398 + lVar34 * 4;
            lVar30 = lVar33;
          }
          fVar55 = _LC2;
          if (uVar40 < local_458) {
            uVar38 = (ulong)(uVar40 + 1 & 1 | uVar27);
            lVar58 = lVar58 + (ulong)((uVar40 + 1 >> 1) + iVar37) * 0x10;
            uVar3 = *(ushort *)(lVar58 + 8 + uVar38 * 2);
            uVar25 = (uint)*(ushort *)(lVar58 + uVar38 * 2);
            uVar24 = (*(int *)(local_258 + 0x40) * auStack_368._0_4_ + uVar26) *
                     (uint)(byte)local_258[0x54];
            uVar77 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar24 >> 3)) >>
                     ((byte)uVar24 & 7) & uVar77;
            *(bool *)lVar30 = HVar1 == SUB41(uVar77,0);
            fVar97 = *(float *)(local_258 + 0x34);
            fVar81 = *(float *)(local_258 + 0x38);
            fVar113 = *(float *)(local_258 + 0x3c);
            fVar96 = *(float *)(local_258 + 0x24);
            fVar13 = *(float *)(local_258 + 0x28);
            fVar67 = *(float *)(local_258 + 0x2c);
            *uStack_398 = (float)uVar26 * *(float *)(local_258 + 0x30) +
                          *(float *)(local_258 + 0x20);
            uStack_398[1] =
                 (((float)uVar77 + fVar55) * ((float)(int)(uVar3 - uVar25) / fVar60) + (float)uVar25
                 ) * fVar97 + fVar96;
            uStack_398[2] = (float)(uint)auStack_368._0_4_ * fVar81 + fVar13;
            uStack_398[3] = (float)(uint)auStack_368._0_4_ * fVar113 + fVar67;
          }
        }
        else {
          auStack_368._0_4_ = auStack_368._0_4_ - 1;
        }
        lVar58 = 0;
        uStack_2e4 = local_420 >> 1;
        auStack_304 = SUB1612((undefined1  [16])0x0,4);
        uStack_308 = uStack_2e4;
        iStack_2dc = auStack_368._0_4_ - (uVar56 + uStack_2e4);
        auVar20._4_4_ = uStack_2e4;
        auVar20._0_4_ = uStack_2e4;
        iStack_2e0 = (local_420 - uStack_2e4) - iStack_2e0;
        auStack_304._4_4_ = iStack_2e0;
        auStack_304._8_4_ = uStack_2e4;
        piVar47 = (int *)auStack_318;
        auVar20._8_8_ = 0;
        auStack_318 = auVar20 << 0x40;
        uStack_2f8 = 0;
        uStack_2f4 = CONCAT44(uStack_2e4,uStack_2e4);
        uStack_2ec = CONCAT44(uStack_2e4,iStack_2dc);
        do {
          uVar38 = (ulong)(local_41c * piVar47[1] + *piVar47);
          uVar24 = piVar47[2];
          pauVar51 = (undefined1 (*) [16])(pfStack_428 + uVar38 * 4);
          pcVar31 = (char *)(uVar38 + uStack_450);
          if (piVar47[3] == -1) {
            auVar61._8_4_ = _LC15;
            auVar61._0_8_ = CONCAT44(_LC15,_LC15);
            auVar61._12_4_ = _LC15;
            auVar69._8_4_ = _LC17;
            auVar69._0_8_ = CONCAT44(_LC17,_LC17);
            auVar69._12_4_ = _LC17;
          }
          else {
            auVar61._8_4_ = _LC15;
            auVar61._0_8_ = CONCAT44(_LC15,_LC15);
            auVar61._12_4_ = _LC15;
            auVar69._8_4_ = _LC17;
            auVar69._0_8_ = CONCAT44(_LC17,_LC17);
            auVar69._12_4_ = _LC17;
            iVar37 = 0;
            while( true ) {
              pcVar22 = pcVar31 + (ulong)uVar24 + 1;
              pauVar39 = pauVar51;
              if (uVar24 != 0xffffffff) {
                do {
                  if (*pcVar31 == '\0') {
                    auVar69 = minps(auVar69,*pauVar39);
                    auVar61 = maxps(auVar61,*pauVar39);
                  }
                  pcVar31 = pcVar31 + 1;
                  pauVar39 = pauVar39 + 1;
                } while (pcVar31 != pcVar22);
                pauVar51 = pauVar51 + (ulong)uVar24 + 1;
                pcVar31 = pcVar22;
              }
              if (piVar47[3] == iVar37) break;
              iVar37 = iVar37 + 1;
              pcVar31 = pcVar31 + (local_420 - uVar24);
              pauVar51 = pauVar51 + (local_420 - uVar24);
            }
          }
          *(undefined1 (*) [16])(auStack_2d8 + lVar58) = auVar69;
          piVar47 = piVar47 + 4;
          *(undefined1 (*) [16])(auStack_298 + lVar58) = auVar61;
          lVar58 = lVar58 + 0x10;
        } while (lVar58 != 0x40);
        fVar55 = *(float *)(local_440 + 0x20);
        fVar60 = *(float *)(local_440 + 0x24);
        fVar97 = *(float *)(local_440 + 0x28);
        fStack_3c4 = (float)((ulong)uStack_2c8 >> 0x20);
        fStack_3bc = (float)((ulong)uStack_2a8 >> 0x20);
        fVar92 = (float)((ulong)uStack_288 >> 0x20);
        fStack_3c8 = (float)auStack_2d8._4_4_;
        fStack_3c0 = fStack_2b4;
        auVar70._0_8_ = CONCAT44((float)uStack_2c8 * fVar55,(float)auStack_2d8._0_4_ * fVar55);
        auVar70._8_4_ = fStack_2b8 * fVar55;
        auVar70._12_4_ = (float)uStack_2a8 * fVar55;
        fStack_3cc = (float)((ulong)uStack_268 >> 0x20);
        auVar85._0_4_ = (float)auStack_298._0_4_ * fVar55;
        auVar85._4_4_ = (float)uStack_288 * fVar55;
        auVar85._8_4_ = fStack_278 * fVar55;
        auVar85._12_4_ = (float)uStack_268 * fVar55;
        uStack_3d8 = CONCAT44(fVar92,auStack_298._4_4_);
        fStack_3d0 = fStack_274;
        auVar133._8_4_ = auVar70._8_4_;
        auVar133._0_8_ = auVar70._0_8_;
        auVar133._12_4_ = auVar70._12_4_;
        auVar134 = minps(auVar133,auVar85);
        auVar71 = maxps(auVar70,auVar85);
        auVar108._0_8_ = CONCAT44(fStack_3c4 * fVar60,(float)auStack_2d8._4_4_ * fVar60);
        auVar108._8_4_ = fStack_2b4 * fVar60;
        auVar108._12_4_ = fStack_3bc * fVar60;
        auVar86._0_4_ = fVar60 * (float)auStack_298._4_4_;
        auVar86._4_4_ = fVar60 * fVar92;
        auVar86._8_4_ = fVar60 * fStack_274;
        auVar86._12_4_ = fVar60 * fStack_3cc;
        auVar127._8_4_ = auVar108._8_4_;
        auVar127._0_8_ = auVar108._0_8_;
        auVar127._12_4_ = auVar108._12_4_;
        auVar128 = minps(auVar127,auVar86);
        auVar109 = maxps(auVar108,auVar86);
        auVar87._0_8_ = CONCAT44(fStack_2c0 * fVar97,(float)uStack_2d0 * fVar97);
        auVar87._8_4_ = fStack_2b0 * fVar97;
        auVar87._12_4_ = fStack_2a0 * fVar97;
        auVar62._0_4_ = (float)uStack_290 * fVar97;
        auVar62._4_4_ = fStack_280 * fVar97;
        auVar62._8_4_ = fStack_270 * fVar97;
        auVar62._12_4_ = fStack_260 * fVar97;
        fVar55 = *(float *)(local_440 + 0x10c0);
        fVar60 = *(float *)(local_440 + 0x10c4);
        fVar97 = *(float *)(local_440 + 0x10c8);
        auVar102._8_4_ = auVar87._8_4_;
        auVar102._0_8_ = auVar87._0_8_;
        auVar102._12_4_ = auVar87._12_4_;
        auVar103 = minps(auVar102,auVar62);
        auVar88 = maxps(auVar87,auVar62);
        fVar81 = *(float *)(local_440 + 0x10d0);
        fVar113 = *(float *)(local_440 + 0x10d4);
        fVar96 = *(float *)(local_440 + 0x10d8);
        fVar132 = auVar134._0_4_ - fVar81;
        fVar136 = auVar134._4_4_ - fVar81;
        fVar137 = auVar134._8_4_ - fVar81;
        fVar138 = auVar134._12_4_ - fVar81;
        fVar67 = auVar71._0_4_ + fVar81;
        fVar76 = auVar71._4_4_ + fVar81;
        fVar78 = auVar71._8_4_ + fVar81;
        fVar81 = auVar71._12_4_ + fVar81;
        fVar126 = auVar128._0_4_ - fVar113;
        fVar129 = auVar128._4_4_ - fVar113;
        fVar130 = auVar128._8_4_ - fVar113;
        fVar131 = auVar128._12_4_ - fVar113;
        fVar107 = auVar109._0_4_ + fVar113;
        fVar111 = auVar109._4_4_ + fVar113;
        fVar112 = auVar109._8_4_ + fVar113;
        fVar113 = auVar109._12_4_ + fVar113;
        uStack_390 = *(uint *)(local_440 + 0x10b0);
        uStack_3a0 = *(uint *)(local_440 + 0x10b4);
        uStack_3b0 = *(uint *)(local_440 + 0x10b8);
        fVar122 = auVar103._0_4_ - fVar96;
        fVar123 = auVar103._4_4_ - fVar96;
        fVar124 = auVar103._8_4_ - fVar96;
        fVar125 = auVar103._12_4_ - fVar96;
        fVar83 = auVar88._0_4_ + fVar96;
        fVar91 = auVar88._4_4_ + fVar96;
        fVar93 = auVar88._8_4_ + fVar96;
        fVar96 = auVar88._12_4_ + fVar96;
        uStack_3b8 = CONCAT44(uStack_3b0,uStack_3b0);
        fVar13 = *(float *)(local_440 + 0x10a0);
        fStack_36c = *(float *)(local_440 + 0x10a4);
        fStack_37c = *(float *)(local_440 + 0x10a8);
        uStack_398 = (float *)CONCAT44(uStack_390,uStack_390);
        uStack_3a8 = CONCAT44(uStack_3a0,uStack_3a0);
        auStack_3e8._0_8_ =
             CONCAT44((fVar129 - fVar60) * fStack_36c,(fVar126 - fVar60) * fStack_36c);
        auStack_3e8._8_4_ = (fVar130 - fVar60) * fStack_36c;
        auStack_3e8._12_4_ = (fVar131 - fVar60) * fStack_36c;
        auVar120._0_8_ = CONCAT44((fVar136 - fVar55) * fVar13,(fVar132 - fVar55) * fVar13);
        auVar120._8_4_ = (fVar137 - fVar55) * fVar13;
        auVar120._12_4_ = (fVar138 - fVar55) * fVar13;
        auStack_368._4_4_ = (fVar123 - fVar97) * fStack_37c;
        auStack_368._0_4_ = (fVar122 - fVar97) * fStack_37c;
        fStack_360 = (fVar124 - fVar97) * fStack_37c;
        fStack_35c = (fVar125 - fVar97) * fStack_37c;
        auStack_3f8._0_4_ = (fVar67 - fVar55) * fVar13;
        auStack_3f8._4_4_ = (fVar76 - fVar55) * fVar13;
        auStack_3f8._8_4_ = (fVar78 - fVar55) * fVar13;
        auStack_3f8._12_4_ = (fVar81 - fVar55) * fVar13;
        fStack_378 = (fVar107 - fVar60) * fStack_36c;
        fStack_374 = (fVar111 - fVar60) * fStack_36c;
        fStack_370 = (fVar112 - fVar60) * fStack_36c;
        fStack_36c = (fVar113 - fVar60) * fStack_36c;
        fStack_388 = (fVar83 - fVar97) * fStack_37c;
        fStack_384 = (fVar91 - fVar97) * fStack_37c;
        fStack_380 = (fVar93 - fVar97) * fStack_37c;
        fStack_37c = (fVar96 - fVar97) * fStack_37c;
        auVar116._8_4_ = auVar120._8_4_;
        auVar116._0_8_ = auVar120._0_8_;
        auVar116._12_4_ = auVar120._12_4_;
        auVar71 = minps(auVar116,auStack_3f8);
        auVar140._8_4_ = auStack_3e8._8_4_;
        auVar140._0_8_ = auStack_3e8._0_8_;
        auVar140._12_4_ = auStack_3e8._12_4_;
        auVar17._4_4_ = fStack_374;
        auVar17._0_4_ = fStack_378;
        auVar17._8_4_ = fStack_370;
        auVar17._12_4_ = fStack_36c;
        auVar103 = minps(auVar140,auVar17);
        auVar88 = maxps(auVar120,auStack_3f8);
        uVar24 = (int)uStack_390 >> 0x1f;
        pVVar54 = local_440 + (long)iStack_448 * 4 + 0x10e8;
        auStack_408._4_4_ = _UNK_00116644 & uVar24 | ~uVar24 & auVar71._4_4_;
        auStack_408._0_4_ = (uint)_LC19 & uVar24 | ~uVar24 & auVar71._0_4_;
        auStack_408._8_4_ = _UNK_00116648 & uVar24 | ~uVar24 & auVar71._8_4_;
        auStack_408._12_4_ = _UNK_0011664c & uVar24 | ~uVar24 & auVar71._12_4_;
        uVar26 = (int)uStack_3a0 >> 0x1f;
        uStack_418 = (uint)_LC19 & uVar26 | ~uVar26 & auVar103._0_4_;
        uStack_414 = _UNK_00116644 & uVar26 | ~uVar26 & auVar103._4_4_;
        uStack_410 = _UNK_00116648 & uVar26 | ~uVar26 & auVar103._8_4_;
        uStack_40c = _UNK_0011664c & uVar26 | ~uVar26 & auVar103._12_4_;
        auVar15._4_4_ = fStack_384;
        auVar15._0_4_ = fStack_388;
        auVar15._8_4_ = fStack_380;
        auVar15._12_4_ = fStack_37c;
        auVar71 = minps(_auStack_368,auVar15);
        uVar25 = (int)uStack_3b0 >> 0x1f;
        auVar141._0_4_ = ~uVar25 & auVar71._0_4_;
        auVar141._4_4_ = ~uVar25 & auVar71._4_4_;
        auVar141._8_4_ = ~uVar25 & auVar71._8_4_;
        auVar141._12_4_ = ~uVar25 & auVar71._12_4_;
        auVar150._0_4_ = (uint)_LC19 & uVar25;
        auVar150._4_4_ = _UNK_00116644 & uVar25;
        auVar150._8_4_ = _UNK_00116648 & uVar25;
        auVar150._12_4_ = _UNK_0011664c & uVar25;
        auVar98._0_4_ = uVar24 & _LC13;
        auVar98._4_4_ = uVar24 & _UNK_00116654;
        auVar98._8_4_ = uVar24 & _UNK_00116658;
        auVar98._12_4_ = uVar24 & _UNK_0011665c;
        auVar142._0_4_ = ~uVar24 & auVar88._0_4_;
        auVar142._4_4_ = ~uVar24 & auVar88._4_4_;
        auVar142._8_4_ = ~uVar24 & auVar88._8_4_;
        auVar142._12_4_ = ~uVar24 & auVar88._12_4_;
        auVar18._4_4_ = fStack_374;
        auVar18._0_4_ = fStack_378;
        auVar18._8_4_ = fStack_370;
        auVar18._12_4_ = fStack_36c;
        auVar71 = maxps(auStack_3e8,auVar18);
        auVar117._0_4_ = uVar26 & _LC13;
        auVar117._4_4_ = uVar26 & _UNK_00116654;
        auVar117._8_4_ = uVar26 & _UNK_00116658;
        auVar117._12_4_ = uVar26 & _UNK_0011665c;
        auVar143._0_4_ = ~uVar26 & auVar71._0_4_;
        auVar143._4_4_ = ~uVar26 & auVar71._4_4_;
        auVar143._8_4_ = ~uVar26 & auVar71._8_4_;
        auVar143._12_4_ = ~uVar26 & auVar71._12_4_;
        auVar16._4_4_ = fStack_384;
        auVar16._0_4_ = fStack_388;
        auVar16._8_4_ = fStack_380;
        auVar16._12_4_ = fStack_37c;
        auVar88 = maxps(_auStack_368,auVar16);
        auVar114._0_4_ = uVar25 & _LC13;
        auVar114._4_4_ = uVar25 & _UNK_00116654;
        auVar114._8_4_ = uVar25 & _UNK_00116658;
        auVar114._12_4_ = uVar25 & _UNK_0011665c;
        auVar71 = minps(auVar98 | auVar142,auVar117 | auVar143);
        auVar144._0_4_ = ~uVar25 & auVar88._0_4_;
        auVar144._4_4_ = ~uVar25 & auVar88._4_4_;
        auVar144._8_4_ = ~uVar25 & auVar88._8_4_;
        auVar144._12_4_ = ~uVar25 & auVar88._12_4_;
        auVar14._4_4_ = uStack_414;
        auVar14._0_4_ = uStack_418;
        auVar14._8_4_ = uStack_410;
        auVar14._12_4_ = uStack_40c;
        auVar88 = maxps(auStack_408,auVar14);
        auVar71 = minps(auVar71,auVar114 | auVar144);
        auVar88 = maxps(auVar88,auVar150 | auVar141);
        uVar24 = (int)(-(uint)(fVar55 < fVar132 || fVar67 < fVar55) & uStack_390 |
                       -(uint)(fVar60 < fVar126 || fVar107 < fVar60) & uStack_3a0 |
                       -(uint)((fVar67 < fVar132 || fVar107 < fVar126) ||
                              (auVar71._0_4_ < auVar88._0_4_ || auVar71._0_4_ < 0.0)) |
                      -(uint)(fVar97 < fVar122 || fVar83 < fVar97) & uStack_3b0 |
                      -(uint)(fVar83 < fVar122)) >> 0x1f;
        uVar25 = (int)(-(uint)(fVar55 < fVar136 || fVar76 < fVar55) & uStack_390 |
                       -(uint)(fVar60 < fVar129 || fVar111 < fVar60) & uStack_3a0 |
                       -(uint)((fVar76 < fVar136 || fVar111 < fVar129) ||
                              (auVar71._4_4_ < auVar88._4_4_ || auVar71._4_4_ < 0.0)) |
                      -(uint)(fVar97 < fVar123 || fVar91 < fVar97) & uStack_3b0 |
                      -(uint)(fVar91 < fVar123)) >> 0x1f;
        uVar26 = (int)(-(uint)(fVar55 < fVar137 || fVar78 < fVar55) & uStack_390 |
                       -(uint)(fVar60 < fVar130 || fVar112 < fVar60) & uStack_3a0 |
                       -(uint)((fVar78 < fVar137 || fVar112 < fVar130) ||
                              (auVar71._8_4_ < auVar88._8_4_ || auVar71._8_4_ < 0.0)) |
                      -(uint)(fVar97 < fVar124 || fVar93 < fVar97) & uStack_3b0 |
                      -(uint)(fVar93 < fVar124)) >> 0x1f;
        uVar40 = (int)(-(uint)(fVar55 < fVar138 || fVar81 < fVar55) & uStack_390 |
                       -(uint)(fVar60 < fVar131 || fVar113 < fVar60) & uStack_3a0 |
                       -(uint)((fVar81 < fVar138 || fVar113 < fVar131) ||
                              (auVar71._12_4_ < auVar88._12_4_ || auVar71._12_4_ < 0.0)) |
                      -(uint)(fVar97 < fVar125 || fVar96 < fVar97) & uStack_3b0 |
                      -(uint)(fVar96 < fVar125)) >> 0x1f;
        uVar27 = (int)-(uint)((float)auStack_2d8._4_4_ <= (float)auStack_298._4_4_) >> 0x1f;
        uVar77 = (int)-(uint)(fStack_3c4 <= fVar92) >> 0x1f;
        uVar79 = (int)-(uint)(fStack_2b4 <= fStack_274) >> 0x1f;
        uVar57 = (int)-(uint)(fStack_3bc <= fStack_3cc) >> 0x1f;
        fVar55 = (float)((uVar24 & _LC13 | ~uVar24 & (uint)auVar88._0_4_) & uVar27 | ~uVar27 & _LC13
                        );
        fVar60 = (float)((uVar25 & _UNK_00116654 | ~uVar25 & (uint)auVar88._4_4_) & uVar77 |
                        ~uVar77 & _UNK_00116654);
        fVar97 = (float)((uVar26 & _UNK_00116658 | ~uVar26 & (uint)auVar88._8_4_) & uVar79 |
                        ~uVar79 & _UNK_00116658);
        fVar81 = (float)((uVar40 & _UNK_0011665c | ~uVar40 & (uint)auVar88._12_4_) & uVar57 |
                        ~uVar57 & _UNK_0011665c);
        if (fVar41 <= _LC52) {
          fVar41 = _LC52;
        }
        uVar24 = (int)-(uint)(fVar55 < fVar97) >> 0x1f;
        uVar25 = (int)-(uint)(fVar60 < fVar81) >> 0x1f;
        fVar113 = (float)((uint)fVar97 & uVar24 | ~uVar24 & (uint)fVar55);
        fVar96 = (float)((uint)fVar81 & uVar25 | ~uVar25 & (uint)fVar60);
        fVar97 = (float)((uint)fVar55 & uVar24 | ~uVar24 & (uint)fVar97);
        fVar81 = (float)((uint)fVar60 & uVar25 | ~uVar25 & (uint)fVar81);
        uVar27 = uVar24 & __LC32 | ~uVar24 & __LC49;
        uVar77 = uVar25 & _UNK_001166d4 | ~uVar25 & _UNK_00116664;
        uVar57 = uVar24 & _UNK_001166d8 | ~uVar24 & _UNK_00116668;
        uVar46 = uVar25 & _UNK_001166dc | ~uVar25 & _UNK_0011666c;
        uVar24 = (int)-(uint)(fVar113 < fVar96) >> 0x1f;
        uVar26 = (int)-(uint)(fVar97 < fVar81) >> 0x1f;
        fVar55 = (float)((uint)fVar113 & uVar24 | ~uVar24 & (uint)fVar96);
        fVar60 = (float)((uint)fVar81 & uVar26 | ~uVar26 & (uint)fVar97);
        uVar25 = uVar24 & uVar27 | ~uVar24 & uVar77;
        uVar40 = uVar26 & uVar46 | ~uVar26 & uVar57;
        uVar79 = (int)-(uint)(fVar55 < fVar60) >> 0x1f;
        auVar104._4_4_ = ~uVar79 & (uint)fVar55;
        auVar104._0_4_ = (uint)fVar96 & uVar24 | ~uVar24 & (uint)fVar113;
        auVar104._8_4_ = ~uVar79 & (uint)fVar60;
        auVar104._12_4_ = (uint)fVar97 & uVar26 | ~uVar26 & (uint)fVar81;
        auVar11._4_4_ = (uint)fVar55 & uVar79;
        auVar11._0_4_ = (uint)fVar60 & uVar79;
        auVar11._8_8_ = 0;
        _auStack_368 = auVar11 << 0x20 | auVar104;
        auStack_348._4_4_ = ~uVar79 & uVar25;
        auStack_348._0_4_ = uVar24 & uVar77 | ~uVar24 & uVar27;
        auStack_348._8_4_ = ~uVar79 & uVar40;
        auStack_348._12_4_ = uVar26 & uVar57 | ~uVar26 & uVar46;
        auVar9._4_4_ = uVar79 & uVar25;
        auVar9._0_4_ = uVar79 & uVar40;
        auVar9._8_8_ = 0;
        auStack_348 = auVar9 << 0x20 | auStack_348;
        auVar63._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar41);
        auVar63._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar41);
        auVar63._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar41);
        auVar63._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar41);
        iVar37 = movmskps((int)local_440,auVar63);
        *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10c30a;
        uStack_3ac = uStack_3b0;
        uStack_39c = uStack_3a0;
        uStack_38c = uStack_390;
        uVar24 = __popcountdi2();
        auStack_328 = _auStack_368;
        if (iVar37 != 0) {
          puVar52 = (undefined8 *)auStack_328;
          uVar38 = (ulong)uVar24 << 2;
          auStack_338 = (undefined1  [16])0x0;
          lVar58 = (4 - (long)(int)uVar24) * 4;
          puVar49 = (undefined8 *)auStack_338;
          puVar48 = (undefined8 *)((long)puVar52 + lVar58);
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar49 = *puVar48;
              puVar48 = puVar48 + (ulong)bVar59 * -2 + 1;
              puVar49 = puVar49 + (ulong)bVar59 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar49 = *(undefined4 *)puVar48;
          }
          puVar49 = (undefined8 *)(auStack_348 + lVar58);
          auStack_328 = (undefined1  [16])0x0;
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar52 = *puVar49;
              puVar49 = puVar49 + (ulong)bVar59 * -2 + 1;
              puVar52 = puVar52 + (ulong)bVar59 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar52 = *(undefined4 *)puVar49;
          }
          uVar24 = uVar24 - 1;
          *(undefined1 (*) [16])pVVar54 = auStack_338;
          auStack_348 = auStack_328;
          auStack_368._0_4_ = local_420 + 2;
          pVVar54 = local_440;
          uVar38 = uStack_450;
          do {
            lVar58 = (ulong)*(uint *)(auStack_348 + (ulong)uVar24 * 4) * 0x10;
            fStack_378 = (float)(uVar56 + *(int *)(auStack_318 + lVar58 + 4));
            fVar41 = (float)(*(int *)(auStack_318 + lVar58) + uStack_460);
            fVar55 = (float)(*(int *)(auStack_318 + lVar58 + 8) + (int)fVar41);
            uVar25 = uVar24;
            if ((uint)fStack_378 < (uint)(*(int *)(auStack_318 + lVar58 + 0xc) + (int)fStack_378)) {
              iVar37 = *(int *)(auStack_318 + lVar58 + 4) * local_41c - uStack_460;
              uStack_47c = uVar24;
              uStack_468 = uVar56;
              fStack_444 = (float)(*(int *)(auStack_318 + lVar58 + 0xc) + (int)fStack_378);
              do {
                fVar60 = fVar41;
                if ((uint)fVar41 < (uint)fVar55) {
                  do {
                    fStack_438 = fVar41;
                    pcVar31 = (char *)(uVar38 + (long)((int)fVar60 + iVar37));
                    if (*pcVar31 == '\0') {
                      uVar35 = (ulong)(uint)auStack_368._0_4_;
                      if (pcVar31[uVar35] == '\0') {
                        pfVar53 = pfStack_428 + (long)((int)fVar60 + iVar37) * 4;
                        uVar32 = (ulong)local_41c;
                        if (pcVar31[uVar32] != '\0') goto LAB_0010c60f;
                        uVar24 = 0;
                        uStack_3a8 = *(undefined8 *)(pfVar53 + uVar32 * 4);
                        auStack_3e8._0_8_ = *(undefined8 *)pfVar53;
                        auStack_408._0_8_ = *(undefined8 *)(pfVar53 + uVar32 * 4 + 2);
                        auStack_3f8._0_8_ = *(undefined8 *)(pfVar53 + 2);
                        uStack_3b8 = *(undefined8 *)(pfVar53 + uVar35 * 4);
                        uStack_418 = (uint)*(undefined8 *)(pfVar53 + uVar35 * 4 + 2);
                        uStack_414 = (uint)((ulong)*(undefined8 *)(pfVar53 + uVar35 * 4 + 2) >> 0x20
                                           );
                        fStack_3c8 = fVar55;
                        while( true ) {
                          this_00 = *(HeightFieldShape **)(pVVar54 + 0x1090);
                          iVar29 = 1;
                          iVar36 = *(int *)(this_00 + 0x40);
                          uVar25 = iVar36 - 1;
                          if (uVar25 != 0) {
                            iVar29 = 0x1f;
                            if (uVar25 != 0) {
                              for (; uVar25 >> iVar29 == 0; iVar29 = iVar29 + -1) {
                              }
                            }
                            iVar29 = (int)(1L << ((char)iVar29 * '\x02' + 3U & 0x3f)) + -1;
                          }
                          fStack_388 = SUB84(pVVar54,0);
                          fStack_384 = (float)((ulong)pVVar54 >> 0x20);
                          uStack_398 = (float *)CONCAT44(uStack_398._4_4_,uVar24);
                          uStack_34c = uVar24 + (iVar36 * (int)fStack_378 + (int)fVar60) * 2 <<
                                       ((byte)*(undefined4 *)(pVVar54 + 0x10e4) & 0x1f) |
                                       ~(iVar29 << ((byte)*(undefined4 *)(pVVar54 + 0x10e4) & 0x1f))
                                       & *(uint *)(pVVar54 + 0x10e0);
                          *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10c58d;
                          uStack_3d8 = uVar38;
                          uVar23 = GetEdgeFlags(this_00,(uint)fVar60,(uint)fStack_378,uVar24);
                          *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10c5d3;
                          JPH::CastConvexVsTriangles::Cast
                                    (auStack_3e8._0_8_,auStack_3f8._0_8_,uStack_3a8,
                                     auStack_408._0_8_,uStack_3b8,CONCAT44(uStack_414,uStack_418),
                                     CONCAT44(fStack_384,fStack_388),uVar23,&uStack_34c);
                          pVVar54 = (Visitor *)CONCAT44(fStack_384,fStack_388);
                          piVar42 = (int *)(puVar44 + lVar5);
                          if (*(float *)(*(long *)(pVVar54 + 0x38) + 8) <= _LC19) goto LAB_0010b818;
                          uVar38 = uStack_3d8;
                          fVar55 = fStack_3c8;
                          if ((int)uStack_398 == 1) break;
LAB_0010c60f:
                          if (pcVar31[1] != '\0') break;
                          uStack_3b8 = *(undefined8 *)(pfVar53 + 4);
                          uVar24 = 1;
                          auStack_3e8._0_8_ = *(undefined8 *)pfVar53;
                          auStack_3f8._0_8_ = *(undefined8 *)(pfVar53 + 2);
                          uStack_3a8 = *(undefined8 *)(pfVar53 + uVar35 * 4);
                          auStack_408._0_8_ = *(undefined8 *)(pfVar53 + uVar35 * 4 + 2);
                          uStack_418 = (uint)*(undefined8 *)(pfVar53 + 6);
                          uStack_414 = (uint)((ulong)*(undefined8 *)(pfVar53 + 6) >> 0x20);
                          fStack_3c8 = fVar55;
                        }
                      }
                    }
                    fVar60 = (float)((int)fVar60 + 1);
                    fVar41 = fStack_438;
                  } while (fVar55 != fVar60);
                }
                fStack_378 = (float)((int)fStack_378 + 1);
                iVar37 = iVar37 + local_41c;
                uVar56 = uStack_468;
                uVar25 = uStack_47c;
              } while (fStack_444 != fStack_378);
            }
            fVar41 = *(float *)(*(long *)(pVVar54 + 0x38) + 8);
            lVar58 = (long)(int)(uVar25 - 1);
            fVar55 = (float)(~-(uint)(_LC52 < fVar41) & (uint)_LC52 |
                            (uint)fVar41 & -(uint)(_LC52 < fVar41));
            do {
              uVar24 = (uint)lVar58;
              if (uVar24 == 0xffffffff) goto LAB_0010c706;
              lVar30 = lVar58 * 4;
              lVar58 = lVar58 + -1;
            } while (fVar55 < *(float *)(pVVar54 +
                                        lVar30 + ((long)(int)((uVar25 - 1) + iStack_448) -
                                                 (long)(int)uVar25) * 4 + 0x10ec) ||
                     fVar55 == *(float *)(pVVar54 +
                                         lVar30 + ((long)(int)((uVar25 - 1) + iStack_448) -
                                                  (long)(int)uVar25) * 4 + 0x10ec));
          } while( true );
        }
        *(undefined1 (*) [16])pVVar54 = (undefined1  [16])0x0;
        fVar41 = *(float *)(*(long *)(local_440 + 0x38) + 8);
      }
LAB_0010c706:
      piVar42 = (int *)(puVar44 + lVar5);
      if (fVar41 <= _LC19) break;
      lVar58 = (long)(local_250 + -1);
      fVar55 = (float)(~-(uint)(_LC52 < fVar41) & (uint)_LC52 |
                      (uint)fVar41 & -(uint)(_LC52 < fVar41));
      do {
        iVar37 = (int)lVar58;
        piVar42 = (int *)(puVar44 + lVar5);
        if (iVar37 < 0) goto LAB_0010b818;
        lVar30 = lVar58 * 4;
        lVar58 = lVar58 + -1;
      } while (fVar55 < *(float *)(local_440 + lVar30 + 0x10e8) ||
               fVar55 == *(float *)(local_440 + lVar30 + 0x10e8));
      local_250 = iVar37;
      uVar24 = auStack_24c[iVar37];
    } while( true );
  }
LAB_0010b818:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)piVar42 + -8) = &UNK_0010d2d4;
    __stack_chk_fail();
  }
  return;
}



/* JPH::HeightFieldShape::sCastConvexVsHeightField(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::HeightFieldShape::sCastConvexVsHeightField
               (long param_1,undefined8 param_2,HeightFieldShape *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  Visitor aVStack_1328 [4240];
  HeightFieldShape *local_298;
  undefined1 local_288 [16];
  int local_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastConvexVsTriangles::CastConvexVsTriangles
            ((CastConvexVsTriangles *)aVStack_1328,param_1,param_2,param_5,param_6,param_8);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  auVar2._0_4_ = 0.0 - auVar1._0_4_;
  auVar2._4_4_ = 0.0 - auVar1._4_4_;
  auVar2._8_4_ = 0.0 - auVar1._8_4_;
  auVar2._12_4_ = 0.0 - auVar1._12_4_;
  local_248 = *param_7;
  auVar3 = maxps(auVar2,auVar1);
  local_278 = -(uint)(auVar3._0_4_ <= _LC34);
  iStack_274 = -(uint)(auVar3._4_4_ <= _LC34);
  iStack_270 = -(uint)(auVar3._8_4_ <= _LC34);
  iStack_26c = -(uint)(auVar3._12_4_ <= _LC34);
  auVar5._4_4_ = _LC4;
  auVar5._0_4_ = _LC4;
  auVar5._8_4_ = _LC4;
  auVar5._12_4_ = _LC4;
  auVar4._0_4_ = local_278 >> 0x1f & _LC4;
  auVar4._4_4_ = iStack_274 >> 0x1f & _LC4;
  auVar4._8_4_ = iStack_270 >> 0x1f & _LC4;
  auVar4._12_4_ = iStack_26c >> 0x1f & _LC4;
  auVar3._4_4_ = ~(iStack_274 >> 0x1f) & (uint)auVar1._4_4_;
  auVar3._0_4_ = ~(local_278 >> 0x1f) & (uint)auVar1._0_4_;
  auVar3._8_4_ = ~(iStack_270 >> 0x1f) & (uint)auVar1._8_4_;
  auVar3._12_4_ = ~(iStack_26c >> 0x1f) & (uint)auVar1._12_4_;
  local_288 = divps(auVar5,auVar4 | auVar3);
  local_258 = (*(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x70)) * _LC2;
  fStack_254 = (*(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x74)) * _LC2;
  fStack_250 = (*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x78)) * _LC2;
  fStack_24c = (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x7c)) * _LC2;
  local_268 = (*(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x70)) * _LC2;
  fStack_264 = (*(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x74)) * _LC2;
  fStack_260 = (*(float *)(param_1 + 0x88) + *(float *)(param_1 + 0x78)) * _LC2;
  fStack_25c = (*(float *)(param_1 + 0x8c) + *(float *)(param_1 + 0x7c)) * _LC2;
  local_298 = param_3;
  WalkHeightField<JPH::HeightFieldShape::sCastConvexVsHeightField(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)::Visitor>
            (param_3,aVStack_1328);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::sCastSphereVsHeightField(JPH::ShapeCast
   const&, JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&,
   JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&)::Visitor>(JPH::HeightFieldShape::sCastSphereVsHeightField(JPH::ShapeCast
   const&, JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&,
   JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&)::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::sCastSphereVsHeightField(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  HeightFieldShape HVar1;
  HeightFieldShape HVar2;
  ushort uVar3;
  HeightFieldShape *this_00;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [14];
  undefined1 auVar19 [16];
  undefined1 *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  char *pcVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  float fVar41;
  int *piVar42;
  int *piVar43;
  undefined1 *puVar44;
  uint uVar46;
  int *piVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  float *pfVar50;
  undefined1 (*pauVar51) [16];
  undefined8 *puVar52;
  float *pfVar53;
  Visitor *pVVar54;
  uint uVar55;
  uint uVar56;
  long lVar57;
  long in_FS_OFFSET;
  byte bVar58;
  float fVar59;
  float fVar66;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  undefined1 auVar69 [8];
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar77;
  uint uVar78;
  uint uVar80;
  float fVar82;
  undefined1 auVar73 [16];
  uint uVar83;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar81;
  float fVar84;
  uint uVar85;
  float fVar92;
  float fVar93;
  float fVar96;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar97;
  undefined1 auVar90 [16];
  uint uVar94;
  uint uVar95;
  undefined1 auVar91 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar112;
  float fVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar130;
  float fVar131;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar132;
  float fVar133;
  float fVar137;
  float fVar138;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar139;
  undefined1 auVar136 [16];
  float fVar140;
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
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  uint uStack_480;
  uint uStack_47c;
  uint local_478;
  uint uStack_474;
  uint uStack_470;
  uint uStack_46c;
  uint uStack_468;
  int local_464;
  uint uStack_460;
  uint local_45c;
  uint local_458;
  uint local_454;
  ulong uStack_450;
  int iStack_448;
  float fStack_444;
  Visitor *local_440;
  float fStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  float *pfStack_428;
  uint local_420;
  uint local_41c;
  uint uStack_418;
  uint uStack_414;
  uint uStack_410;
  uint uStack_40c;
  undefined1 auStack_408 [16];
  undefined1 auStack_3f8 [16];
  undefined1 auStack_3e8 [16];
  undefined8 uStack_3d8;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  undefined8 uStack_3b8;
  float fStack_3b0;
  float fStack_3ac;
  undefined8 uStack_3a8;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_398;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [8];
  float fStack_360;
  float fStack_35c;
  uint uStack_34c;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar45;
  
  bVar58 = 0;
  piVar47 = &iStack_4f8;
  piVar42 = &iStack_4f8;
  piVar43 = &iStack_4f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  local_440 = param_1;
  if (*(int *)(this + 0x48) != 0) {
    local_420 = *(uint *)(this + 0x44);
    local_478 = *(uint *)(this + 0x40) - 1;
    local_41c = local_420 + 1;
    uVar24 = *(uint *)(this + 0x40) / local_420;
    local_458 = uVar24 - 1;
    if (local_458 == 0) {
      local_454 = 0;
      local_464 = 0;
    }
    else {
      uVar25 = 0x1f;
      if (local_458 != 0) {
        for (; local_458 >> uVar25 == 0; uVar25 = uVar25 - 1) {
        }
      }
      local_464 = (&sGridOffsets)[0x1f - (uVar25 ^ 0x1f)];
      local_454 = 0x20 - (uVar25 ^ 0x1f);
    }
    local_45c = uVar24 + 1 >> 1;
    uVar38 = (long)(int)(local_41c * local_41c) * 0x10 + 0x10;
    piVar42 = &iStack_4f8;
    while (piVar43 != (int *)((long)&iStack_4f8 - (uVar38 & 0xfffffffffffff000))) {
      piVar47 = (int *)((long)piVar42 + -0x1000);
      *(undefined8 *)((long)piVar42 + -8) = *(undefined8 *)((long)piVar42 + -8);
      piVar43 = (int *)((long)piVar42 + -0x1000);
      piVar42 = (int *)((long)piVar42 + -0x1000);
    }
    uVar38 = (ulong)((uint)uVar38 & 0xfff);
    lVar5 = -uVar38;
    puVar44 = (undefined1 *)((long)piVar47 + lVar5);
    puVar45 = (undefined1 *)((long)piVar47 + lVar5);
    if (uVar38 != 0) {
      *(undefined8 *)((long)piVar47 + -8) = *(undefined8 *)((long)piVar47 + -8);
    }
    uVar38 = (long)(int)(local_41c * local_41c) + 0x17;
    pfStack_428 = (float *)((ulong)((long)piVar47 + lVar5 + 0xf) & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)piVar47 + lVar5);
    while (puVar45 != (undefined1 *)((long)piVar47 + (lVar5 - (uVar38 & 0xfffffffffffff000)))) {
      puVar44 = puVar20 + -0x1000;
      *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
      puVar45 = puVar20 + -0x1000;
      puVar20 = puVar20 + -0x1000;
    }
    uVar38 = (ulong)((uint)uVar38 & 0xff0);
    lVar5 = -uVar38;
    if (uVar38 != 0) {
      *(undefined8 *)(puVar44 + -8) = *(undefined8 *)(puVar44 + -8);
    }
    fStack_498 = *(float *)(this + 0x20);
    fStack_4a8 = *(float *)(this + 0x24);
    fStack_4b8 = *(float *)(this + 0x28);
    uVar24 = 0;
    uStack_450 = (ulong)(puVar44 + lVar5 + 0xf) & 0xfffffffffffffff0;
    fStack_4c8 = *(float *)(this + 0x30);
    fStack_4d8 = *(float *)(this + 0x34);
    fStack_4e8 = *(float *)(this + 0x38);
    fVar41 = *(float *)(*(long *)(param_1 + 0x58) + 8);
    uStack_480 = local_420 * local_41c;
    iStack_4f8 = local_478 - __LC27;
    iStack_4f4 = local_478 - _UNK_00116694;
    iStack_4f0 = local_478 - _UNK_00116698;
    iStack_4ec = local_478 - _UNK_0011669c;
    fStack_4e4 = fStack_4e8;
    fStack_4e0 = fStack_4e8;
    fStack_4dc = fStack_4e8;
    fStack_4d4 = fStack_4d8;
    fStack_4d0 = fStack_4d8;
    fStack_4cc = fStack_4d8;
    fStack_4c4 = fStack_4c8;
    fStack_4c0 = fStack_4c8;
    fStack_4bc = fStack_4c8;
    fStack_4b4 = fStack_4b8;
    fStack_4b0 = fStack_4b8;
    fStack_4ac = fStack_4b8;
    fStack_4a4 = fStack_4a8;
    fStack_4a0 = fStack_4a8;
    fStack_49c = fStack_4a8;
    fStack_494 = fStack_498;
    fStack_490 = fStack_498;
    fStack_48c = fStack_498;
    uStack_474 = local_478;
    uStack_470 = local_478;
    uStack_46c = local_478;
    do {
      iStack_448 = local_250;
      fVar97 = _LC2;
      uVar40 = uVar24 & 0x3fff;
      uVar25 = uVar24 >> 0xe & 0x3fff;
      uVar26 = uVar24 >> 0x1c;
      if (uVar26 < local_454) {
        bVar6 = (byte)(uVar24 >> 0x18);
        uVar24 = 1 << (bVar6 >> 4);
        if (local_45c < uVar24) {
          uVar24 = local_45c;
        }
        uVar55 = local_420 << (((char)local_454 + -1) - (bVar6 >> 4) & 0x1f);
        auVar72 = *(undefined1 (*) [16])
                   ((ulong)(uVar24 * uVar25 + (&sGridOffsets)[uVar26] + uVar40) * 0x10 +
                   *(long *)(local_258 + 0x60));
        iVar37 = uVar40 * 2;
        auVar7._10_2_ = 0;
        auVar7._0_10_ = auVar72._0_10_;
        auVar7._12_2_ = auVar72._6_2_;
        auVar8._8_2_ = auVar72._4_2_;
        auVar8._0_8_ = auVar72._0_8_;
        auVar8._10_4_ = auVar7._10_4_;
        auVar18._6_8_ = 0;
        auVar18._0_6_ = auVar8._8_6_;
        fVar68 = (float)auVar72._8_2_ * fStack_4d8 + fStack_4a8;
        fVar77 = (float)auVar72._10_2_ * fStack_4d4 + fStack_4a4;
        fStack_3d0 = (float)auVar72._12_2_ * fStack_4d0 + fStack_4a0;
        fStack_3cc = (float)auVar72._14_2_ * fStack_4cc + fStack_49c;
        fStack_3c8 = (float)auVar72._0_2_ * fStack_4d8 + fStack_4a8;
        fStack_3c4 = (float)(int)CONCAT82(SUB148(auVar18 << 0x40,6),auVar72._2_2_) * fStack_4d4 +
                     fStack_4a4;
        fStack_3c0 = (float)auVar8._8_4_ * fStack_4d0 + fStack_4a0;
        fStack_3bc = (float)(auVar7._10_4_ >> 0x10) * fStack_4cc + fStack_49c;
        iVar36 = uVar25 * 2;
        auVar63._4_4_ = uVar55;
        auVar63._0_4_ = uVar55;
        auVar63._8_4_ = uVar55;
        auVar63._12_4_ = uVar55;
        auVar90._0_4_ = __LC25 + iVar37;
        auVar90._4_4_ = _UNK_00116674 + iVar37;
        auVar90._8_4_ = _UNK_00116678 + iVar37;
        auVar90._12_4_ = _UNK_0011667c + iVar37;
        iVar29 = (uVar26 + 1) * 0x10000000 + uVar25 * 0x8000 + iVar37;
        auVar73._0_4_ = iVar37 + __LC26;
        auVar73._4_4_ = iVar37 + _UNK_00116684;
        auVar73._8_4_ = iVar37 + _UNK_00116688;
        auVar73._12_4_ = iVar37 + _UNK_0011668c;
        uStack_3d8 = CONCAT44(fVar77,fVar68);
        uVar94 = (uint)((auVar73._8_8_ & 0xffffffff) * (ulong)uVar55);
        uVar46 = (uint)((auVar73._8_8_ >> 0x20) * (ulong)uVar55);
        uVar80 = -(uint)(iStack_4f8 < (int)(auVar73._0_4_ * uVar55 - __LC27));
        uVar56 = -(uint)(iStack_4f4 < (int)(auVar73._4_4_ * uVar55 - _UNK_00116694));
        uVar28 = -(uint)(iStack_4f0 < (int)(uVar94 - _UNK_00116698));
        uVar83 = -(uint)(iStack_4ec < (int)(uVar46 - _UNK_0011669c));
        auVar100._0_4_ = __LC28 + iVar36;
        auVar100._4_4_ = _UNK_001166a4 + iVar36;
        auVar100._8_4_ = _UNK_001166a8 + iVar36;
        auVar100._12_4_ = _UNK_001166ac + iVar36;
        uVar24 = uVar55 * (iVar36 + __LC29);
        uVar85 = (iVar36 + _UNK_001166b4) * uVar55;
        uVar95 = (iVar36 + _UNK_001166b4) * uVar55;
        uVar40 = (uint)((auVar63._8_8_ & 0xffffffff) * (ulong)(uint)(iVar36 + _UNK_001166b8));
        uVar25 = -(uint)(iStack_4f8 < (int)(uVar24 - __LC27));
        uVar26 = -(uint)(iStack_4f4 < (int)(uVar85 - _UNK_00116694));
        uVar27 = -(uint)(iStack_4f0 < (int)(uVar40 - _UNK_00116698));
        uVar78 = -(uint)(iStack_4ec < (int)(uVar95 - _UNK_0011669c));
        auStack_3e8._0_4_ = iVar29 + __LC30;
        auStack_3e8._4_4_ = iVar29 + _UNK_001166c4;
        auStack_3e8._8_4_ = iVar29 + _UNK_001166c8;
        auStack_3e8._12_4_ = iVar29 + _UNK_001166cc;
        fVar97 = *(float *)(local_440 + 0x40);
        fVar59 = *(float *)(local_440 + 0x44);
        fVar66 = *(float *)(local_440 + 0x48);
        auVar91._0_8_ =
             CONCAT44(((float)(int)(auVar90._4_4_ * uVar55) * fStack_4c4 + fStack_494) * fVar97,
                      ((float)(int)(auVar90._0_4_ * uVar55) * fStack_4c8 + fStack_498) * fVar97);
        auVar91._8_4_ =
             ((float)(int)((auVar90._8_8_ & 0xffffffff) * (ulong)uVar55) * fStack_4c0 + fStack_490)
             * fVar97;
        auVar91._12_4_ =
             ((float)(int)((auVar90._8_8_ >> 0x20) * (ulong)uVar55) * fStack_4bc + fStack_48c) *
             fVar97;
        auVar74._0_4_ =
             ((float)(int)(~uVar80 & auVar73._0_4_ * uVar55 | local_478 & uVar80) * fStack_4c8 +
             fStack_498) * fVar97;
        auVar74._4_4_ =
             ((float)(int)(~uVar56 & auVar73._4_4_ * uVar55 | uStack_474 & uVar56) * fStack_4c4 +
             fStack_494) * fVar97;
        auVar74._8_4_ =
             ((float)(int)(~uVar28 & uVar94 | uStack_470 & uVar28) * fStack_4c0 + fStack_490) *
             fVar97;
        auVar74._12_4_ =
             ((float)(int)(~uVar83 & uVar46 | uStack_46c & uVar83) * fStack_4bc + fStack_48c) *
             fVar97;
        auVar136._8_4_ = auVar91._8_4_;
        auVar136._0_8_ = auVar91._0_8_;
        auVar136._12_4_ = auVar91._12_4_;
        auVar135 = minps(auVar136,auVar74);
        auVar89 = maxps(auVar91,auVar74);
        auVar111._0_8_ = CONCAT44(fStack_3c4 * fVar59,fStack_3c8 * fVar59);
        auVar111._8_4_ = fStack_3c0 * fVar59;
        auVar111._12_4_ = fStack_3bc * fVar59;
        auVar75._0_4_ = fVar59 * fVar68;
        auVar75._4_4_ = fVar59 * fVar77;
        auVar75._8_4_ = fVar59 * fStack_3d0;
        auVar75._12_4_ = fVar59 * fStack_3cc;
        auVar102._8_4_ = auVar111._8_4_;
        auVar102._0_8_ = auVar111._0_8_;
        auVar102._12_4_ = auVar111._12_4_;
        auVar104 = minps(auVar102,auVar75);
        auVar129 = maxps(auVar111,auVar75);
        fStack_390 = *(float *)(local_440 + 0x80);
        fStack_3a0 = *(float *)(local_440 + 0x84);
        fStack_3b0 = *(float *)(local_440 + 0x88);
        auVar76._0_8_ =
             CONCAT44(((float)(int)(auVar100._4_4_ * uVar55) * fStack_4e4 + fStack_4b4) * fVar66,
                      ((float)(int)(auVar100._0_4_ * uVar55) * fStack_4e8 + fStack_4b8) * fVar66);
        auVar76._8_4_ =
             ((float)(int)((auVar100._8_8_ & 0xffffffff) * (ulong)uVar55) * fStack_4e0 + fStack_4b0)
             * fVar66;
        auVar76._12_4_ =
             ((float)(int)((auVar100._8_8_ >> 0x20) * (ulong)uVar55) * fStack_4dc + fStack_4ac) *
             fVar66;
        uStack_3b8 = CONCAT44(fStack_3b0,fStack_3b0);
        auVar64._0_4_ =
             ((float)(int)(~uVar25 & uVar24 | local_478 & uVar25) * fStack_4e8 + fStack_4b8) *
             fVar66;
        auVar64._4_4_ =
             ((float)(int)(~uVar26 & uVar85 | uStack_474 & uVar26) * fStack_4e4 + fStack_4b4) *
             fVar66;
        auVar64._8_4_ =
             ((float)(int)(~uVar27 & uVar40 | uStack_470 & uVar27) * fStack_4e0 + fStack_4b0) *
             fVar66;
        auVar64._12_4_ =
             ((float)(int)(~uVar78 & uVar95 | uStack_46c & uVar78) * fStack_4dc + fStack_4ac) *
             fVar66;
        fVar59 = *(float *)local_440;
        fVar66 = *(float *)(local_440 + 4);
        fVar67 = *(float *)(local_440 + 8);
        uStack_398 = (float *)CONCAT44(fStack_390,fStack_390);
        uStack_3a8 = CONCAT44(fStack_3a0,fStack_3a0);
        auVar106._8_4_ = auVar76._8_4_;
        auVar106._0_8_ = auVar76._0_8_;
        auVar106._12_4_ = auVar76._12_4_;
        auVar110 = minps(auVar106,auVar64);
        auVar72 = maxps(auVar76,auVar64);
        fVar97 = *(float *)(local_440 + 0x20);
        fVar98 = *(float *)(local_440 + 0x70);
        fStack_36c = *(float *)(local_440 + 0x74);
        fStack_37c = *(float *)(local_440 + 0x78);
        fVar130 = auVar104._0_4_ - fVar97;
        fVar131 = auVar104._4_4_ - fVar97;
        fVar132 = auVar104._8_4_ - fVar97;
        fVar133 = auVar104._12_4_ - fVar97;
        fVar137 = auVar135._0_4_ - fVar97;
        fVar138 = auVar135._4_4_ - fVar97;
        fVar139 = auVar135._8_4_ - fVar97;
        fVar140 = auVar135._12_4_ - fVar97;
        fVar92 = auVar89._0_4_ + fVar97;
        fVar93 = auVar89._4_4_ + fVar97;
        fVar96 = auVar89._8_4_ + fVar97;
        fVar108 = auVar89._12_4_ + fVar97;
        fVar112 = auVar129._0_4_ + fVar97;
        fVar113 = auVar129._4_4_ + fVar97;
        fVar114 = auVar129._8_4_ + fVar97;
        fVar123 = auVar129._12_4_ + fVar97;
        fVar124 = auVar110._0_4_ - fVar97;
        fVar125 = auVar110._4_4_ - fVar97;
        fVar126 = auVar110._8_4_ - fVar97;
        fVar127 = auVar110._12_4_ - fVar97;
        fVar79 = auVar72._0_4_ + fVar97;
        fVar82 = auVar72._4_4_ + fVar97;
        fVar84 = auVar72._8_4_ + fVar97;
        fVar97 = auVar72._12_4_ + fVar97;
        auVar122._0_8_ = CONCAT44((fVar138 - fVar59) * fVar98,(fVar137 - fVar59) * fVar98);
        auVar122._8_4_ = (fVar139 - fVar59) * fVar98;
        auVar122._12_4_ = (fVar140 - fVar59) * fVar98;
        auStack_3f8._0_8_ =
             CONCAT44((fVar131 - fVar66) * fStack_36c,(fVar130 - fVar66) * fStack_36c);
        auStack_3f8._8_4_ = (fVar132 - fVar66) * fStack_36c;
        auStack_3f8._12_4_ = (fVar133 - fVar66) * fStack_36c;
        auStack_368._4_4_ = (fVar125 - fVar67) * fStack_37c;
        auStack_368._0_4_ = (fVar124 - fVar67) * fStack_37c;
        fStack_360 = (fVar126 - fVar67) * fStack_37c;
        fStack_35c = (fVar127 - fVar67) * fStack_37c;
        auStack_408._0_4_ = (fVar92 - fVar59) * fVar98;
        auStack_408._4_4_ = (fVar93 - fVar59) * fVar98;
        auStack_408._8_4_ = (fVar96 - fVar59) * fVar98;
        auStack_408._12_4_ = (fVar108 - fVar59) * fVar98;
        fStack_378 = (fVar112 - fVar66) * fStack_36c;
        fStack_374 = (fVar113 - fVar66) * fStack_36c;
        fStack_370 = (fVar114 - fVar66) * fStack_36c;
        fStack_36c = (fVar123 - fVar66) * fStack_36c;
        fStack_388 = (fVar79 - fVar67) * fStack_37c;
        fStack_384 = (fVar82 - fVar67) * fStack_37c;
        fStack_380 = (fVar84 - fVar67) * fStack_37c;
        fStack_37c = (fVar97 - fVar67) * fStack_37c;
        auVar119._8_4_ = auVar122._8_4_;
        auVar119._0_8_ = auVar122._0_8_;
        auVar119._12_4_ = auVar122._12_4_;
        auVar89 = maxps(auVar122,auStack_408);
        auVar72 = minps(auVar119,auStack_408);
        uVar24 = (int)fStack_390 >> 0x1f;
        auVar146._8_4_ = auStack_3f8._8_4_;
        auVar146._0_8_ = auStack_3f8._0_8_;
        auVar146._12_4_ = auStack_3f8._12_4_;
        auVar129._4_4_ = fStack_374;
        auVar129._0_4_ = fStack_378;
        auVar129._8_4_ = fStack_370;
        auVar129._12_4_ = fStack_36c;
        auVar104 = minps(auVar146,auVar129);
        uStack_418 = (uint)_LC19 & uVar24 | ~uVar24 & auVar72._0_4_;
        uStack_414 = _UNK_00116644 & uVar24 | ~uVar24 & auVar72._4_4_;
        uStack_410 = _UNK_00116648 & uVar24 | ~uVar24 & auVar72._8_4_;
        uStack_40c = _UNK_0011664c & uVar24 | ~uVar24 & auVar72._12_4_;
        uVar26 = (int)fStack_3a0 >> 0x1f;
        fStack_438 = (float)((uint)_LC19 & uVar26 | ~uVar26 & auVar104._0_4_);
        uStack_434 = _UNK_00116644 & uVar26 | ~uVar26 & auVar104._4_4_;
        uStack_430 = _UNK_00116648 & uVar26 | ~uVar26 & auVar104._8_4_;
        uStack_42c = _UNK_0011664c & uVar26 | ~uVar26 & auVar104._12_4_;
        auVar104._4_4_ = fStack_384;
        auVar104._0_4_ = fStack_388;
        auVar104._8_4_ = fStack_380;
        auVar104._12_4_ = fStack_37c;
        auVar72 = minps(_auStack_368,auVar104);
        uVar25 = (int)fStack_3b0 >> 0x1f;
        auVar147._0_4_ = ~uVar25 & auVar72._0_4_;
        auVar147._4_4_ = ~uVar25 & auVar72._4_4_;
        auVar147._8_4_ = ~uVar25 & auVar72._8_4_;
        auVar147._12_4_ = ~uVar25 & auVar72._12_4_;
        auVar152._0_4_ = (uint)_LC19 & uVar25;
        auVar152._4_4_ = _UNK_00116644 & uVar25;
        auVar152._8_4_ = _UNK_00116648 & uVar25;
        auVar152._12_4_ = _UNK_0011664c & uVar25;
        auVar101._0_4_ = uVar24 & _LC13;
        auVar101._4_4_ = uVar24 & _UNK_00116654;
        auVar101._8_4_ = uVar24 & _UNK_00116658;
        auVar101._12_4_ = uVar24 & _UNK_0011665c;
        auVar148._0_4_ = ~uVar24 & auVar89._0_4_;
        auVar148._4_4_ = ~uVar24 & auVar89._4_4_;
        auVar148._8_4_ = ~uVar24 & auVar89._8_4_;
        auVar148._12_4_ = ~uVar24 & auVar89._12_4_;
        auVar135._4_4_ = fStack_374;
        auVar135._0_4_ = fStack_378;
        auVar135._8_4_ = fStack_370;
        auVar135._12_4_ = fStack_36c;
        auVar72 = maxps(auStack_3f8,auVar135);
        auVar120._0_4_ = uVar26 & _LC13;
        auVar120._4_4_ = uVar26 & _UNK_00116654;
        auVar120._8_4_ = uVar26 & _UNK_00116658;
        auVar120._12_4_ = uVar26 & _UNK_0011665c;
        auVar149._0_4_ = ~uVar26 & auVar72._0_4_;
        auVar149._4_4_ = ~uVar26 & auVar72._4_4_;
        auVar149._8_4_ = ~uVar26 & auVar72._8_4_;
        auVar149._12_4_ = ~uVar26 & auVar72._12_4_;
        auVar110._4_4_ = fStack_384;
        auVar110._0_4_ = fStack_388;
        auVar110._8_4_ = fStack_380;
        auVar110._12_4_ = fStack_37c;
        auVar72 = maxps(_auStack_368,auVar110);
        auVar116._0_4_ = uVar25 & _LC13;
        auVar116._4_4_ = uVar25 & _UNK_00116654;
        auVar116._8_4_ = uVar25 & _UNK_00116658;
        auVar116._12_4_ = uVar25 & _UNK_0011665c;
        auVar104 = minps(auVar101 | auVar148,auVar120 | auVar149);
        auVar150._0_4_ = ~uVar25 & auVar72._0_4_;
        auVar150._4_4_ = ~uVar25 & auVar72._4_4_;
        auVar150._8_4_ = ~uVar25 & auVar72._8_4_;
        auVar150._12_4_ = ~uVar25 & auVar72._12_4_;
        auVar89._4_4_ = uStack_414;
        auVar89._0_4_ = uStack_418;
        auVar89._8_4_ = uStack_410;
        auVar89._12_4_ = uStack_40c;
        auVar72._4_4_ = uStack_434;
        auVar72._0_4_ = fStack_438;
        auVar72._8_4_ = uStack_430;
        auVar72._12_4_ = uStack_42c;
        auVar89 = maxps(auVar89,auVar72);
        auVar72 = minps(auVar104,auVar116 | auVar150);
        auVar89 = maxps(auVar89,auVar152 | auVar147);
        uVar24 = (int)(-(uint)(fVar66 < fVar130 || fVar112 < fVar66) & (uint)fStack_3a0 |
                       -(uint)(fVar59 < fVar137 || fVar92 < fVar59) & (uint)fStack_390 |
                       -(uint)((fVar92 < fVar137 || fVar112 < fVar130) ||
                              (auVar72._0_4_ < auVar89._0_4_ || auVar72._0_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar124 || fVar79 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar79 < fVar124)) >> 0x1f;
        uVar25 = (int)(-(uint)(fVar66 < fVar131 || fVar113 < fVar66) & (uint)fStack_3a0 |
                       -(uint)(fVar59 < fVar138 || fVar93 < fVar59) & (uint)fStack_390 |
                       -(uint)((fVar93 < fVar138 || fVar113 < fVar131) ||
                              (auVar72._4_4_ < auVar89._4_4_ || auVar72._4_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar125 || fVar82 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar82 < fVar125)) >> 0x1f;
        uVar26 = (int)(-(uint)(fVar66 < fVar132 || fVar114 < fVar66) & (uint)fStack_3a0 |
                       -(uint)(fVar59 < fVar139 || fVar96 < fVar59) & (uint)fStack_390 |
                       -(uint)((fVar96 < fVar139 || fVar114 < fVar132) ||
                              (auVar72._8_4_ < auVar89._8_4_ || auVar72._8_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar126 || fVar84 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar84 < fVar126)) >> 0x1f;
        uVar40 = (int)(-(uint)(fVar66 < fVar133 || fVar123 < fVar66) & (uint)fStack_3a0 |
                       -(uint)(fVar59 < fVar140 || fVar108 < fVar59) & (uint)fStack_390 |
                       -(uint)((fVar108 < fVar140 || fVar123 < fVar133) ||
                              (auVar72._12_4_ < auVar89._12_4_ || auVar72._12_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar127 || fVar97 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar97 < fVar127)) >> 0x1f;
        lVar30 = (long)local_250;
        lVar57 = lVar30 * 4;
        uVar55 = (int)-(uint)(fStack_3c8 <= fVar68) >> 0x1f;
        uVar27 = (int)-(uint)(fStack_3c4 <= fVar77) >> 0x1f;
        uVar78 = (int)-(uint)(fStack_3c0 <= fStack_3d0) >> 0x1f;
        uVar80 = (int)-(uint)(fStack_3bc <= fStack_3cc) >> 0x1f;
        pVVar54 = local_440 + lVar57 + 0x98;
        fVar97 = (float)((uVar24 & _LC13 | ~uVar24 & (uint)auVar89._0_4_) & uVar55 | ~uVar55 & _LC13
                        );
        fVar59 = (float)((uVar25 & _UNK_00116654 | ~uVar25 & (uint)auVar89._4_4_) & uVar27 |
                        ~uVar27 & _UNK_00116654);
        fVar66 = (float)((uVar26 & _UNK_00116658 | ~uVar26 & (uint)auVar89._8_4_) & uVar78 |
                        ~uVar78 & _UNK_00116658);
        fVar67 = (float)((uVar40 & _UNK_0011665c | ~uVar40 & (uint)auVar89._12_4_) & uVar80 |
                        ~uVar80 & _UNK_0011665c);
        if (fVar41 <= _LC52) {
          fVar41 = _LC52;
        }
        uVar24 = (int)-(uint)(fVar97 < fVar66) >> 0x1f;
        uVar25 = (int)-(uint)(fVar59 < fVar67) >> 0x1f;
        fVar98 = (float)((uint)fVar66 & uVar24 | ~uVar24 & (uint)fVar97);
        fVar68 = (float)((uint)fVar67 & uVar25 | ~uVar25 & (uint)fVar59);
        fVar66 = (float)((uint)fVar97 & uVar24 | ~uVar24 & (uint)fVar66);
        fVar67 = (float)((uint)fVar59 & uVar25 | ~uVar25 & (uint)fVar67);
        uVar55 = uVar24 & auStack_3e8._8_4_ | ~uVar24 & auStack_3e8._0_4_;
        uVar27 = uVar25 & auStack_3e8._12_4_ | ~uVar25 & auStack_3e8._4_4_;
        uVar80 = uVar24 & auStack_3e8._0_4_ | ~uVar24 & auStack_3e8._8_4_;
        uVar56 = uVar25 & auStack_3e8._4_4_ | ~uVar25 & auStack_3e8._12_4_;
        uVar24 = (int)-(uint)(fVar98 < fVar68) >> 0x1f;
        uVar26 = (int)-(uint)(fVar66 < fVar67) >> 0x1f;
        fVar97 = (float)((uint)fVar98 & uVar24 | ~uVar24 & (uint)fVar68);
        fVar59 = (float)((uint)fVar67 & uVar26 | ~uVar26 & (uint)fVar66);
        uVar25 = uVar24 & uVar55 | ~uVar24 & uVar27;
        uVar40 = uVar26 & uVar56 | ~uVar26 & uVar80;
        uVar78 = (int)-(uint)(fVar97 < fVar59) >> 0x1f;
        auVar107._4_4_ = ~uVar78 & (uint)fVar97;
        auVar107._0_4_ = (uint)fVar68 & uVar24 | ~uVar24 & (uint)fVar98;
        auVar107._8_4_ = ~uVar78 & (uint)fVar59;
        auVar107._12_4_ = (uint)fVar66 & uVar26 | ~uVar26 & (uint)fVar67;
        auVar12._4_4_ = (uint)fVar97 & uVar78;
        auVar12._0_4_ = (uint)fVar59 & uVar78;
        auVar12._8_8_ = 0;
        _auStack_368 = auVar12 << 0x20 | auVar107;
        auStack_318._4_4_ = ~uVar78 & uVar25;
        auStack_318._0_4_ = uVar24 & uVar27 | ~uVar24 & uVar55;
        auStack_318._8_4_ = ~uVar78 & uVar40;
        auStack_318._12_4_ = uVar26 & uVar80 | ~uVar26 & uVar56;
        auVar10._4_4_ = uVar78 & uVar25;
        auVar10._0_4_ = uVar78 & uVar40;
        auVar10._8_8_ = 0;
        auStack_318 = auVar10 << 0x20 | auStack_318;
        auVar65._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar41);
        auVar65._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar41);
        auVar65._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar41);
        auVar65._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar41);
        iVar37 = movmskps((int)local_440,auVar65);
        *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10ea19;
        fStack_3ac = fStack_3b0;
        fStack_39c = fStack_3a0;
        fStack_38c = fStack_390;
        uVar24 = __popcountdi2();
        _auStack_298 = _auStack_368;
        if (iVar37 == 0) {
          _auStack_298 = (undefined1  [16])0x0;
          auVar69 = (undefined1  [8])0x0;
          uVar81 = 0;
        }
        else {
          _auStack_2d8 = (undefined1  [16])0x0;
          puVar52 = (undefined8 *)auStack_298;
          uVar38 = (ulong)uVar24 << 2;
          puVar49 = (undefined8 *)auStack_2d8;
          lVar33 = (4 - (long)(int)uVar24) * 4;
          puVar48 = (undefined8 *)((long)puVar52 + lVar33);
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar49 = *puVar48;
              puVar48 = puVar48 + (ulong)bVar58 * -2 + 1;
              puVar49 = puVar49 + (ulong)bVar58 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar49 = *(undefined4 *)puVar48;
          }
          puVar49 = (undefined8 *)(auStack_318 + lVar33);
          _auStack_298 = (undefined1  [16])0x0;
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar52 = *puVar49;
              puVar49 = puVar49 + (ulong)bVar58 * -2 + 1;
              puVar52 = puVar52 + (ulong)bVar58 * -2 + 1;
            }
          }
          auVar69 = auStack_2d8;
          uVar81 = uStack_2d0;
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar52 = *(undefined4 *)puVar49;
          }
        }
        auStack_318 = _auStack_298;
        uVar22 = uStack_290;
        *(undefined1 (*) [8])pVVar54 = auVar69;
        *(undefined8 *)(pVVar54 + 8) = uVar81;
        *(undefined1 (*) [8])(auStack_24c + lVar30) = auStack_298;
        *(undefined8 *)((long)auStack_244 + lVar57) = uVar22;
        fVar41 = *(float *)(*(long *)(local_440 + 0x58) + 8);
        local_250 = uVar24 + iStack_448;
      }
      else {
        lVar57 = *(long *)(local_258 + 0x60);
        uVar27 = uVar25 * 2 & 2;
        HVar1 = local_258[0x55];
        uVar38 = (ulong)(uVar27 | uVar24 & 1);
        uStack_460 = local_420 * uVar40;
        uVar55 = local_420 * uVar25;
        uVar26 = local_420 + uStack_460;
        auStack_368._0_4_ = local_420 + uVar55;
        iVar37 = (uVar25 >> 1) * local_45c + local_464;
        fVar59 = (float)(byte)HVar1;
        lVar30 = (ulong)((uVar40 >> 1) + iVar37) * 0x10 + lVar57;
        uVar3 = *(ushort *)(lVar30 + 8 + uVar38 * 2);
        uVar80 = (uint)*(ushort *)(lVar30 + uVar38 * 2);
        uVar78 = (uint)(byte)HVar1;
        if (uVar55 < (uint)auStack_368._0_4_) {
          lVar30 = (ulong)(local_420 - 1) + 1;
          uVar38 = uStack_450;
          pfVar53 = pfStack_428;
          uVar56 = uVar55;
          do {
            uVar35 = uVar38;
            if (uStack_460 < uVar26) {
              HVar2 = local_258[0x54];
              lVar33 = *(long *)(local_258 + 0x68);
              fVar66 = *(float *)(local_258 + 0x30);
              fVar67 = *(float *)(local_258 + 0x34);
              fVar98 = *(float *)(local_258 + 0x38);
              fVar68 = *(float *)(local_258 + 0x3c);
              iVar36 = (int)uVar38;
              auVar72 = *(undefined1 (*) [16])(local_258 + 0x20);
              uVar35 = uVar38 + lVar30;
              uVar46 = (*(int *)(local_258 + 0x40) * uVar56 + uStack_460) * (uint)(byte)HVar2;
              pfVar50 = pfVar53;
              do {
                iVar29 = (int)uVar38;
                uVar28 = (int)(uint)*(ushort *)(lVar33 + (ulong)(uVar46 >> 3)) >> ((byte)uVar46 & 7)
                         & uVar78;
                *(bool *)uVar38 = HVar1 == SUB41(uVar28,0);
                uVar38 = uVar38 + 1;
                uVar46 = uVar46 + (byte)HVar2;
                *pfVar50 = (float)((uStack_460 - iVar36) + iVar29) * fVar66 + auVar72._0_4_;
                pfVar50[1] = (((float)uVar28 + fVar97) * ((float)(int)(uVar3 - uVar80) / fVar59) +
                             (float)uVar80) * fVar67 + auVar72._4_4_;
                pfVar50[2] = (float)uVar56 * fVar98 + auVar72._8_4_;
                pfVar50[3] = (float)uVar56 * fVar68 + auVar72._12_4_;
                pfVar50 = pfVar50 + 4;
              } while (uVar38 != uVar35);
              pfVar53 = pfVar53 + lVar30 * 4;
            }
            pfVar53 = pfVar53 + 4;
            uVar38 = uVar35 + 1;
            uVar56 = uVar56 + 1;
          } while (auStack_368._0_4_ != uVar56);
        }
        fVar97 = _LC2;
        iStack_2e0 = 1;
        if (uVar40 < local_458) {
          pfVar53 = pfStack_428 + (ulong)local_420 * 4;
          lVar30 = uStack_450 + local_420;
          uVar38 = (ulong)(uVar40 + 1 & 1 | uVar27);
          lVar33 = (ulong)((uVar40 + 1 >> 1) + iVar37) * 0x10 + lVar57;
          uVar3 = *(ushort *)(lVar33 + 8 + uVar38 * 2);
          uVar27 = (uint)*(ushort *)(lVar33 + uVar38 * 2);
          if (uVar55 < (uint)auStack_368._0_4_) {
            iVar37 = *(int *)(local_258 + 0x40);
            HVar2 = local_258[0x54];
            lVar33 = *(long *)(local_258 + 0x68);
            fVar66 = *(float *)(local_258 + 0x30);
            fVar67 = *(float *)(local_258 + 0x34);
            fVar98 = *(float *)(local_258 + 0x38);
            fVar68 = *(float *)(local_258 + 0x3c);
            fVar77 = *(float *)(local_258 + 0x20);
            fVar79 = *(float *)(local_258 + 0x24);
            fVar82 = *(float *)(local_258 + 0x28);
            fVar84 = *(float *)(local_258 + 0x2c);
            uVar56 = (iVar37 * uVar55 + uVar26) * (uint)(byte)HVar2;
            uVar80 = uVar55;
            do {
              uVar38 = (ulong)uVar80;
              uVar46 = (int)(uint)*(ushort *)(lVar33 + (ulong)(uVar56 >> 3)) >> ((byte)uVar56 & 7) &
                       uVar78;
              *(bool *)lVar30 = HVar1 == SUB41(uVar46,0);
              lVar30 = lVar30 + (ulong)local_41c;
              uVar80 = uVar80 + 1;
              uVar56 = uVar56 + iVar37 * (uint)(byte)HVar2;
              *pfVar53 = (float)uVar26 * fVar66 + fVar77;
              pfVar53[1] = (((float)uVar46 + fVar97) * ((float)(int)(uVar3 - uVar27) / fVar59) +
                           (float)uVar27) * fVar67 + fVar79;
              pfVar53[2] = (float)uVar38 * fVar98 + fVar82;
              pfVar53[3] = (float)uVar38 * fVar68 + fVar84;
              pfVar53 = pfVar53 + (ulong)local_41c * 4;
            } while (auStack_368._0_4_ != uVar80);
          }
          iStack_2e0 = 0;
        }
        fVar97 = _LC2;
        if (uVar25 < local_458) {
          uStack_398 = pfStack_428 + (ulong)uStack_480 * 4;
          lVar30 = uStack_450 + uStack_480;
          uVar27 = (uVar25 + 1) * 2 & 2;
          uVar38 = (ulong)(uVar24 & 1 | uVar27);
          iVar37 = (uVar25 + 1 >> 1) * local_45c + local_464;
          lVar33 = (ulong)(iVar37 + (uVar40 >> 1)) * 0x10 + lVar57;
          uVar3 = *(ushort *)(lVar33 + 8 + uVar38 * 2);
          uVar24 = (uint)*(ushort *)(lVar33 + uVar38 * 2);
          if (uStack_460 < uVar26) {
            HVar2 = local_258[0x54];
            lVar4 = *(long *)(local_258 + 0x68);
            fVar66 = *(float *)(local_258 + 0x30);
            fVar67 = *(float *)(local_258 + 0x34);
            fVar98 = *(float *)(local_258 + 0x38);
            fVar68 = *(float *)(local_258 + 0x3c);
            fVar77 = *(float *)(local_258 + 0x20);
            fVar79 = *(float *)(local_258 + 0x24);
            fVar82 = *(float *)(local_258 + 0x28);
            fVar84 = *(float *)(local_258 + 0x2c);
            iVar36 = (int)lVar30;
            uVar25 = (auStack_368._0_4_ * *(int *)(local_258 + 0x40) + uStack_460) *
                     (uint)(byte)HVar2;
            lVar34 = (ulong)(local_420 - 1) + 1;
            lVar33 = lVar30 + lVar34;
            pfVar53 = uStack_398;
            do {
              uVar80 = (int)(uint)*(ushort *)(lVar4 + (ulong)(uVar25 >> 3)) >> ((byte)uVar25 & 7) &
                       uVar78;
              *(bool *)lVar30 = HVar1 == SUB41(uVar80,0);
              iVar29 = (int)lVar30;
              lVar30 = lVar30 + 1;
              uVar25 = uVar25 + (byte)HVar2;
              *pfVar53 = (float)((uStack_460 - iVar36) + iVar29) * fVar66 + fVar77;
              pfVar53[1] = (((float)uVar80 + fVar97) * ((float)(int)(uVar3 - uVar24) / fVar59) +
                           (float)uVar24) * fVar67 + fVar79;
              pfVar53[2] = (float)(uint)auStack_368._0_4_ * fVar98 + fVar82;
              pfVar53[3] = (float)(uint)auStack_368._0_4_ * fVar68 + fVar84;
              pfVar53 = pfVar53 + 4;
            } while (lVar30 != lVar33);
            uStack_398 = uStack_398 + lVar34 * 4;
            lVar30 = lVar33;
          }
          fVar97 = _LC2;
          if (uVar40 < local_458) {
            uVar38 = (ulong)(uVar40 + 1 & 1 | uVar27);
            lVar57 = lVar57 + (ulong)((uVar40 + 1 >> 1) + iVar37) * 0x10;
            uVar3 = *(ushort *)(lVar57 + 8 + uVar38 * 2);
            uVar25 = (uint)*(ushort *)(lVar57 + uVar38 * 2);
            uVar24 = (*(int *)(local_258 + 0x40) * auStack_368._0_4_ + uVar26) *
                     (uint)(byte)local_258[0x54];
            uVar78 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar24 >> 3)) >>
                     ((byte)uVar24 & 7) & uVar78;
            *(bool *)lVar30 = HVar1 == SUB41(uVar78,0);
            fVar66 = *(float *)(local_258 + 0x34);
            fVar67 = *(float *)(local_258 + 0x38);
            fVar98 = *(float *)(local_258 + 0x3c);
            fVar68 = *(float *)(local_258 + 0x24);
            fVar77 = *(float *)(local_258 + 0x28);
            fVar79 = *(float *)(local_258 + 0x2c);
            *uStack_398 = (float)uVar26 * *(float *)(local_258 + 0x30) +
                          *(float *)(local_258 + 0x20);
            uStack_398[1] =
                 (((float)uVar78 + fVar97) * ((float)(int)(uVar3 - uVar25) / fVar59) + (float)uVar25
                 ) * fVar66 + fVar68;
            uStack_398[2] = (float)(uint)auStack_368._0_4_ * fVar67 + fVar77;
            uStack_398[3] = (float)(uint)auStack_368._0_4_ * fVar98 + fVar79;
          }
        }
        else {
          auStack_368._0_4_ = auStack_368._0_4_ - 1;
        }
        lVar57 = 0;
        uStack_2e4 = local_420 >> 1;
        auStack_304 = SUB1612((undefined1  [16])0x0,4);
        uStack_308 = uStack_2e4;
        iStack_2dc = auStack_368._0_4_ - (uVar55 + uStack_2e4);
        auVar19._4_4_ = uStack_2e4;
        auVar19._0_4_ = uStack_2e4;
        iStack_2e0 = (local_420 - uStack_2e4) - iStack_2e0;
        auStack_304._4_4_ = iStack_2e0;
        auStack_304._8_4_ = uStack_2e4;
        piVar47 = (int *)auStack_318;
        auVar19._8_8_ = 0;
        auStack_318 = auVar19 << 0x40;
        uStack_2f8 = 0;
        uStack_2f4 = CONCAT44(uStack_2e4,uStack_2e4);
        uStack_2ec = CONCAT44(uStack_2e4,iStack_2dc);
        do {
          uVar38 = (ulong)(local_41c * piVar47[1] + *piVar47);
          uVar24 = piVar47[2];
          pauVar51 = (undefined1 (*) [16])(pfStack_428 + uVar38 * 4);
          pcVar31 = (char *)(uVar38 + uStack_450);
          if (piVar47[3] == -1) {
            auVar60._8_4_ = _LC15;
            auVar60._0_8_ = CONCAT44(_LC15,_LC15);
            auVar60._12_4_ = _LC15;
            auVar70._8_4_ = _LC17;
            auVar70._0_8_ = CONCAT44(_LC17,_LC17);
            auVar70._12_4_ = _LC17;
          }
          else {
            auVar60._8_4_ = _LC15;
            auVar60._0_8_ = CONCAT44(_LC15,_LC15);
            auVar60._12_4_ = _LC15;
            auVar70._8_4_ = _LC17;
            auVar70._0_8_ = CONCAT44(_LC17,_LC17);
            auVar70._12_4_ = _LC17;
            iVar37 = 0;
            while( true ) {
              pcVar21 = pcVar31 + (ulong)uVar24 + 1;
              pauVar39 = pauVar51;
              if (uVar24 != 0xffffffff) {
                do {
                  if (*pcVar31 == '\0') {
                    auVar70 = minps(auVar70,*pauVar39);
                    auVar60 = maxps(auVar60,*pauVar39);
                  }
                  pcVar31 = pcVar31 + 1;
                  pauVar39 = pauVar39 + 1;
                } while (pcVar31 != pcVar21);
                pauVar51 = pauVar51 + (ulong)uVar24 + 1;
                pcVar31 = pcVar21;
              }
              if (piVar47[3] == iVar37) break;
              iVar37 = iVar37 + 1;
              pcVar31 = pcVar31 + (local_420 - uVar24);
              pauVar51 = pauVar51 + (local_420 - uVar24);
            }
          }
          *(undefined1 (*) [16])(auStack_2d8 + lVar57) = auVar70;
          piVar47 = piVar47 + 4;
          *(undefined1 (*) [16])(auStack_298 + lVar57) = auVar60;
          lVar57 = lVar57 + 0x10;
        } while (lVar57 != 0x40);
        fVar97 = *(float *)(local_440 + 0x40);
        fVar59 = *(float *)(local_440 + 0x44);
        fVar66 = *(float *)(local_440 + 0x48);
        fStack_3c4 = (float)((ulong)uStack_2c8 >> 0x20);
        fStack_3bc = (float)((ulong)uStack_2a8 >> 0x20);
        fVar96 = (float)((ulong)uStack_288 >> 0x20);
        fStack_3c8 = (float)auStack_2d8._4_4_;
        fStack_3c0 = fStack_2b4;
        auVar71._0_8_ = CONCAT44((float)uStack_2c8 * fVar97,(float)auStack_2d8._0_4_ * fVar97);
        auVar71._8_4_ = fStack_2b8 * fVar97;
        auVar71._12_4_ = (float)uStack_2a8 * fVar97;
        fStack_3cc = (float)((ulong)uStack_268 >> 0x20);
        auVar86._0_4_ = (float)auStack_298._0_4_ * fVar97;
        auVar86._4_4_ = (float)uStack_288 * fVar97;
        auVar86._8_4_ = fStack_278 * fVar97;
        auVar86._12_4_ = (float)uStack_268 * fVar97;
        uStack_3d8 = CONCAT44(fVar96,auStack_298._4_4_);
        fStack_3d0 = fStack_274;
        auVar134._8_4_ = auVar71._8_4_;
        auVar134._0_8_ = auVar71._0_8_;
        auVar134._12_4_ = auVar71._12_4_;
        auVar135 = minps(auVar134,auVar86);
        auVar72 = maxps(auVar71,auVar86);
        auVar109._0_8_ = CONCAT44(fStack_3c4 * fVar59,(float)auStack_2d8._4_4_ * fVar59);
        auVar109._8_4_ = fStack_2b4 * fVar59;
        auVar109._12_4_ = fStack_3bc * fVar59;
        auVar87._0_4_ = fVar59 * (float)auStack_298._4_4_;
        auVar87._4_4_ = fVar59 * fVar96;
        auVar87._8_4_ = fVar59 * fStack_274;
        auVar87._12_4_ = fVar59 * fStack_3cc;
        auVar128._8_4_ = auVar109._8_4_;
        auVar128._0_8_ = auVar109._0_8_;
        auVar128._12_4_ = auVar109._12_4_;
        auVar129 = minps(auVar128,auVar87);
        auVar110 = maxps(auVar109,auVar87);
        auVar88._0_8_ = CONCAT44(fStack_2c0 * fVar66,(float)uStack_2d0 * fVar66);
        auVar88._8_4_ = fStack_2b0 * fVar66;
        auVar88._12_4_ = fStack_2a0 * fVar66;
        auVar61._0_4_ = (float)uStack_290 * fVar66;
        auVar61._4_4_ = fStack_280 * fVar66;
        auVar61._8_4_ = fStack_270 * fVar66;
        auVar61._12_4_ = fStack_260 * fVar66;
        fStack_390 = *(float *)(local_440 + 0x80);
        fStack_3a0 = *(float *)(local_440 + 0x84);
        fStack_3b0 = *(float *)(local_440 + 0x88);
        fVar59 = *(float *)local_440;
        fVar66 = *(float *)(local_440 + 4);
        fVar67 = *(float *)(local_440 + 8);
        fVar98 = *(float *)(local_440 + 0x70);
        fStack_36c = *(float *)(local_440 + 0x74);
        fStack_37c = *(float *)(local_440 + 0x78);
        uStack_3b8 = CONCAT44(fStack_3b0,fStack_3b0);
        auVar103._8_4_ = auVar88._8_4_;
        auVar103._0_8_ = auVar88._0_8_;
        auVar103._12_4_ = auVar88._12_4_;
        uStack_398 = (float *)CONCAT44(fStack_390,fStack_390);
        auVar104 = minps(auVar103,auVar61);
        auVar89 = maxps(auVar88,auVar61);
        fVar97 = *(float *)(local_440 + 0x20);
        uStack_3a8 = CONCAT44(fStack_3a0,fStack_3a0);
        fVar127 = auVar129._0_4_ - fVar97;
        fVar130 = auVar129._4_4_ - fVar97;
        fVar131 = auVar129._8_4_ - fVar97;
        fVar132 = auVar129._12_4_ - fVar97;
        fVar133 = auVar135._0_4_ - fVar97;
        fVar137 = auVar135._4_4_ - fVar97;
        fVar138 = auVar135._8_4_ - fVar97;
        fVar139 = auVar135._12_4_ - fVar97;
        fVar68 = auVar72._0_4_ + fVar97;
        fVar77 = auVar72._4_4_ + fVar97;
        fVar79 = auVar72._8_4_ + fVar97;
        fVar82 = auVar72._12_4_ + fVar97;
        fVar123 = auVar104._0_4_ - fVar97;
        fVar124 = auVar104._4_4_ - fVar97;
        fVar125 = auVar104._8_4_ - fVar97;
        fVar126 = auVar104._12_4_ - fVar97;
        fVar108 = auVar110._0_4_ + fVar97;
        fVar112 = auVar110._4_4_ + fVar97;
        fVar113 = auVar110._8_4_ + fVar97;
        fVar114 = auVar110._12_4_ + fVar97;
        fVar84 = auVar89._0_4_ + fVar97;
        fVar92 = auVar89._4_4_ + fVar97;
        fVar93 = auVar89._8_4_ + fVar97;
        fVar97 = auVar89._12_4_ + fVar97;
        auVar121._0_8_ = CONCAT44((fVar137 - fVar59) * fVar98,(fVar133 - fVar59) * fVar98);
        auVar121._8_4_ = (fVar138 - fVar59) * fVar98;
        auVar121._12_4_ = (fVar139 - fVar59) * fVar98;
        auStack_3e8._0_8_ =
             CONCAT44((fVar130 - fVar66) * fStack_36c,(fVar127 - fVar66) * fStack_36c);
        auStack_3e8._8_4_ = (fVar131 - fVar66) * fStack_36c;
        auStack_3e8._12_4_ = (fVar132 - fVar66) * fStack_36c;
        auStack_368._4_4_ = (fVar124 - fVar67) * fStack_37c;
        auStack_368._0_4_ = (fVar123 - fVar67) * fStack_37c;
        fStack_360 = (fVar125 - fVar67) * fStack_37c;
        fStack_35c = (fVar126 - fVar67) * fStack_37c;
        auStack_3f8._0_4_ = (fVar68 - fVar59) * fVar98;
        auStack_3f8._4_4_ = (fVar77 - fVar59) * fVar98;
        auStack_3f8._8_4_ = (fVar79 - fVar59) * fVar98;
        auStack_3f8._12_4_ = (fVar82 - fVar59) * fVar98;
        fStack_378 = (fVar108 - fVar66) * fStack_36c;
        fStack_374 = (fVar112 - fVar66) * fStack_36c;
        fStack_370 = (fVar113 - fVar66) * fStack_36c;
        fStack_36c = (fVar114 - fVar66) * fStack_36c;
        fStack_388 = (fVar84 - fVar67) * fStack_37c;
        fStack_384 = (fVar92 - fVar67) * fStack_37c;
        fStack_380 = (fVar93 - fVar67) * fStack_37c;
        fStack_37c = (fVar97 - fVar67) * fStack_37c;
        auVar117._8_4_ = auVar121._8_4_;
        auVar117._0_8_ = auVar121._0_8_;
        auVar117._12_4_ = auVar121._12_4_;
        auVar72 = minps(auVar117,auStack_3f8);
        auVar141._8_4_ = auStack_3e8._8_4_;
        auVar141._0_8_ = auStack_3e8._0_8_;
        auVar141._12_4_ = auStack_3e8._12_4_;
        auVar16._4_4_ = fStack_374;
        auVar16._0_4_ = fStack_378;
        auVar16._8_4_ = fStack_370;
        auVar16._12_4_ = fStack_36c;
        auVar104 = minps(auVar141,auVar16);
        auVar89 = maxps(auVar121,auStack_3f8);
        uVar24 = (int)fStack_390 >> 0x1f;
        pVVar54 = local_440 + (long)iStack_448 * 4 + 0x98;
        auStack_408._4_4_ = _UNK_00116644 & uVar24 | ~uVar24 & auVar72._4_4_;
        auStack_408._0_4_ = (uint)_LC19 & uVar24 | ~uVar24 & auVar72._0_4_;
        auStack_408._8_4_ = _UNK_00116648 & uVar24 | ~uVar24 & auVar72._8_4_;
        auStack_408._12_4_ = _UNK_0011664c & uVar24 | ~uVar24 & auVar72._12_4_;
        uVar26 = (int)fStack_3a0 >> 0x1f;
        uStack_418 = (uint)_LC19 & uVar26 | ~uVar26 & auVar104._0_4_;
        uStack_414 = _UNK_00116644 & uVar26 | ~uVar26 & auVar104._4_4_;
        uStack_410 = _UNK_00116648 & uVar26 | ~uVar26 & auVar104._8_4_;
        uStack_40c = _UNK_0011664c & uVar26 | ~uVar26 & auVar104._12_4_;
        auVar14._4_4_ = fStack_384;
        auVar14._0_4_ = fStack_388;
        auVar14._8_4_ = fStack_380;
        auVar14._12_4_ = fStack_37c;
        auVar72 = minps(_auStack_368,auVar14);
        uVar25 = (int)fStack_3b0 >> 0x1f;
        auVar142._0_4_ = ~uVar25 & auVar72._0_4_;
        auVar142._4_4_ = ~uVar25 & auVar72._4_4_;
        auVar142._8_4_ = ~uVar25 & auVar72._8_4_;
        auVar142._12_4_ = ~uVar25 & auVar72._12_4_;
        auVar151._0_4_ = (uint)_LC19 & uVar25;
        auVar151._4_4_ = _UNK_00116644 & uVar25;
        auVar151._8_4_ = _UNK_00116648 & uVar25;
        auVar151._12_4_ = _UNK_0011664c & uVar25;
        auVar99._0_4_ = uVar24 & _LC13;
        auVar99._4_4_ = uVar24 & _UNK_00116654;
        auVar99._8_4_ = uVar24 & _UNK_00116658;
        auVar99._12_4_ = uVar24 & _UNK_0011665c;
        auVar143._0_4_ = ~uVar24 & auVar89._0_4_;
        auVar143._4_4_ = ~uVar24 & auVar89._4_4_;
        auVar143._8_4_ = ~uVar24 & auVar89._8_4_;
        auVar143._12_4_ = ~uVar24 & auVar89._12_4_;
        auVar17._4_4_ = fStack_374;
        auVar17._0_4_ = fStack_378;
        auVar17._8_4_ = fStack_370;
        auVar17._12_4_ = fStack_36c;
        auVar72 = maxps(auStack_3e8,auVar17);
        auVar118._0_4_ = uVar26 & _LC13;
        auVar118._4_4_ = uVar26 & _UNK_00116654;
        auVar118._8_4_ = uVar26 & _UNK_00116658;
        auVar118._12_4_ = uVar26 & _UNK_0011665c;
        auVar144._0_4_ = ~uVar26 & auVar72._0_4_;
        auVar144._4_4_ = ~uVar26 & auVar72._4_4_;
        auVar144._8_4_ = ~uVar26 & auVar72._8_4_;
        auVar144._12_4_ = ~uVar26 & auVar72._12_4_;
        auVar15._4_4_ = fStack_384;
        auVar15._0_4_ = fStack_388;
        auVar15._8_4_ = fStack_380;
        auVar15._12_4_ = fStack_37c;
        auVar89 = maxps(_auStack_368,auVar15);
        auVar115._0_4_ = uVar25 & _LC13;
        auVar115._4_4_ = uVar25 & _UNK_00116654;
        auVar115._8_4_ = uVar25 & _UNK_00116658;
        auVar115._12_4_ = uVar25 & _UNK_0011665c;
        auVar72 = minps(auVar99 | auVar143,auVar118 | auVar144);
        auVar145._0_4_ = ~uVar25 & auVar89._0_4_;
        auVar145._4_4_ = ~uVar25 & auVar89._4_4_;
        auVar145._8_4_ = ~uVar25 & auVar89._8_4_;
        auVar145._12_4_ = ~uVar25 & auVar89._12_4_;
        auVar13._4_4_ = uStack_414;
        auVar13._0_4_ = uStack_418;
        auVar13._8_4_ = uStack_410;
        auVar13._12_4_ = uStack_40c;
        auVar89 = maxps(auStack_408,auVar13);
        auVar72 = minps(auVar72,auVar115 | auVar145);
        auVar89 = maxps(auVar89,auVar151 | auVar142);
        uVar24 = (int)(-(uint)(fVar59 < fVar133 || fVar68 < fVar59) & (uint)fStack_390 |
                       -(uint)(fVar66 < fVar127 || fVar108 < fVar66) & (uint)fStack_3a0 |
                       -(uint)((fVar68 < fVar133 || fVar108 < fVar127) ||
                              (auVar72._0_4_ < auVar89._0_4_ || auVar72._0_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar123 || fVar84 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar84 < fVar123)) >> 0x1f;
        uVar25 = (int)(-(uint)(fVar59 < fVar137 || fVar77 < fVar59) & (uint)fStack_390 |
                       -(uint)(fVar66 < fVar130 || fVar112 < fVar66) & (uint)fStack_3a0 |
                       -(uint)((fVar77 < fVar137 || fVar112 < fVar130) ||
                              (auVar72._4_4_ < auVar89._4_4_ || auVar72._4_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar124 || fVar92 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar92 < fVar124)) >> 0x1f;
        uVar26 = (int)(-(uint)(fVar59 < fVar138 || fVar79 < fVar59) & (uint)fStack_390 |
                       -(uint)(fVar66 < fVar131 || fVar113 < fVar66) & (uint)fStack_3a0 |
                       -(uint)((fVar79 < fVar138 || fVar113 < fVar131) ||
                              (auVar72._8_4_ < auVar89._8_4_ || auVar72._8_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar125 || fVar93 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar93 < fVar125)) >> 0x1f;
        uVar40 = (int)(-(uint)(fVar59 < fVar139 || fVar82 < fVar59) & (uint)fStack_390 |
                       -(uint)(fVar66 < fVar132 || fVar114 < fVar66) & (uint)fStack_3a0 |
                       -(uint)((fVar82 < fVar139 || fVar114 < fVar132) ||
                              (auVar72._12_4_ < auVar89._12_4_ || auVar72._12_4_ < 0.0)) |
                      -(uint)(fVar67 < fVar126 || fVar97 < fVar67) & (uint)fStack_3b0 |
                      -(uint)(fVar97 < fVar126)) >> 0x1f;
        uVar27 = (int)-(uint)((float)auStack_2d8._4_4_ <= (float)auStack_298._4_4_) >> 0x1f;
        uVar78 = (int)-(uint)(fStack_3c4 <= fVar96) >> 0x1f;
        uVar80 = (int)-(uint)(fStack_2b4 <= fStack_274) >> 0x1f;
        uVar56 = (int)-(uint)(fStack_3bc <= fStack_3cc) >> 0x1f;
        fVar97 = (float)((uVar24 & _LC13 | ~uVar24 & (uint)auVar89._0_4_) & uVar27 | ~uVar27 & _LC13
                        );
        fVar59 = (float)((uVar25 & _UNK_00116654 | ~uVar25 & (uint)auVar89._4_4_) & uVar78 |
                        ~uVar78 & _UNK_00116654);
        fVar66 = (float)((uVar26 & _UNK_00116658 | ~uVar26 & (uint)auVar89._8_4_) & uVar80 |
                        ~uVar80 & _UNK_00116658);
        fVar67 = (float)((uVar40 & _UNK_0011665c | ~uVar40 & (uint)auVar89._12_4_) & uVar56 |
                        ~uVar56 & _UNK_0011665c);
        if (fVar41 <= _LC52) {
          fVar41 = _LC52;
        }
        uVar24 = (int)-(uint)(fVar97 < fVar66) >> 0x1f;
        uVar25 = (int)-(uint)(fVar59 < fVar67) >> 0x1f;
        fVar98 = (float)((uint)fVar66 & uVar24 | ~uVar24 & (uint)fVar97);
        fVar68 = (float)((uint)fVar67 & uVar25 | ~uVar25 & (uint)fVar59);
        fVar66 = (float)((uint)fVar97 & uVar24 | ~uVar24 & (uint)fVar66);
        fVar67 = (float)((uint)fVar59 & uVar25 | ~uVar25 & (uint)fVar67);
        uVar27 = uVar24 & __LC32 | ~uVar24 & __LC49;
        uVar78 = uVar25 & _UNK_001166d4 | ~uVar25 & _UNK_00116664;
        uVar56 = uVar24 & _UNK_001166d8 | ~uVar24 & _UNK_00116668;
        uVar46 = uVar25 & _UNK_001166dc | ~uVar25 & _UNK_0011666c;
        uVar24 = (int)-(uint)(fVar98 < fVar68) >> 0x1f;
        uVar26 = (int)-(uint)(fVar66 < fVar67) >> 0x1f;
        fVar97 = (float)((uint)fVar98 & uVar24 | ~uVar24 & (uint)fVar68);
        fVar59 = (float)((uint)fVar67 & uVar26 | ~uVar26 & (uint)fVar66);
        uVar25 = uVar24 & uVar27 | ~uVar24 & uVar78;
        uVar40 = uVar26 & uVar46 | ~uVar26 & uVar56;
        uVar80 = (int)-(uint)(fVar97 < fVar59) >> 0x1f;
        auVar105._4_4_ = ~uVar80 & (uint)fVar97;
        auVar105._0_4_ = (uint)fVar68 & uVar24 | ~uVar24 & (uint)fVar98;
        auVar105._8_4_ = ~uVar80 & (uint)fVar59;
        auVar105._12_4_ = (uint)fVar66 & uVar26 | ~uVar26 & (uint)fVar67;
        auVar11._4_4_ = (uint)fVar97 & uVar80;
        auVar11._0_4_ = (uint)fVar59 & uVar80;
        auVar11._8_8_ = 0;
        _auStack_368 = auVar11 << 0x20 | auVar105;
        auStack_348._4_4_ = ~uVar80 & uVar25;
        auStack_348._0_4_ = uVar24 & uVar78 | ~uVar24 & uVar27;
        auStack_348._8_4_ = ~uVar80 & uVar40;
        auStack_348._12_4_ = uVar26 & uVar56 | ~uVar26 & uVar46;
        auVar9._4_4_ = uVar80 & uVar25;
        auVar9._0_4_ = uVar80 & uVar40;
        auVar9._8_8_ = 0;
        auStack_348 = auVar9 << 0x20 | auStack_348;
        auVar62._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar41);
        auVar62._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar41);
        auVar62._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar41);
        auVar62._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar41);
        iVar37 = movmskps((int)local_440,auVar62);
        *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10df33;
        fStack_3ac = fStack_3b0;
        fStack_39c = fStack_3a0;
        fStack_38c = fStack_390;
        uVar24 = __popcountdi2();
        auStack_328 = _auStack_368;
        if (iVar37 != 0) {
          puVar52 = (undefined8 *)auStack_328;
          uVar38 = (ulong)uVar24 << 2;
          auStack_338 = (undefined1  [16])0x0;
          lVar57 = (4 - (long)(int)uVar24) * 4;
          puVar49 = (undefined8 *)auStack_338;
          puVar48 = (undefined8 *)((long)puVar52 + lVar57);
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar49 = *puVar48;
              puVar48 = puVar48 + (ulong)bVar58 * -2 + 1;
              puVar49 = puVar49 + (ulong)bVar58 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar49 = *(undefined4 *)puVar48;
          }
          puVar49 = (undefined8 *)(auStack_348 + lVar57);
          auStack_328 = (undefined1  [16])0x0;
          if (7 < (uint)uVar38) {
            for (uVar35 = uVar38 >> 3 & 0x1fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
              *puVar52 = *puVar49;
              puVar49 = puVar49 + (ulong)bVar58 * -2 + 1;
              puVar52 = puVar52 + (ulong)bVar58 * -2 + 1;
            }
          }
          if ((uVar38 & 4) != 0) {
            *(undefined4 *)puVar52 = *(undefined4 *)puVar49;
          }
          uVar24 = uVar24 - 1;
          *(undefined1 (*) [16])pVVar54 = auStack_338;
          auStack_348 = auStack_328;
          auStack_368._0_4_ = local_420 + 2;
          pVVar54 = local_440;
          uVar38 = uStack_450;
          do {
            lVar57 = (ulong)*(uint *)(auStack_348 + (ulong)uVar24 * 4) * 0x10;
            fStack_378 = (float)(uVar55 + *(int *)(auStack_318 + lVar57 + 4));
            fVar41 = (float)(*(int *)(auStack_318 + lVar57) + uStack_460);
            fVar97 = (float)(*(int *)(auStack_318 + lVar57 + 8) + (int)fVar41);
            uVar25 = uVar24;
            if ((uint)fStack_378 < (uint)(*(int *)(auStack_318 + lVar57 + 0xc) + (int)fStack_378)) {
              iVar37 = *(int *)(auStack_318 + lVar57 + 4) * local_41c - uStack_460;
              uStack_47c = uVar24;
              uStack_468 = uVar55;
              fStack_444 = (float)(*(int *)(auStack_318 + lVar57 + 0xc) + (int)fStack_378);
              do {
                fVar59 = fVar41;
                if ((uint)fVar41 < (uint)fVar97) {
                  do {
                    fStack_438 = fVar41;
                    pcVar31 = (char *)(uVar38 + (long)((int)fVar59 + iVar37));
                    if (*pcVar31 == '\0') {
                      uVar35 = (ulong)(uint)auStack_368._0_4_;
                      if (pcVar31[uVar35] == '\0') {
                        pfVar53 = pfStack_428 + (long)((int)fVar59 + iVar37) * 4;
                        uVar32 = (ulong)local_41c;
                        if (pcVar31[uVar32] != '\0') goto LAB_0010e234;
                        uVar24 = 0;
                        uStack_3a8 = *(undefined8 *)(pfVar53 + uVar32 * 4);
                        auStack_3e8._0_8_ = *(undefined8 *)pfVar53;
                        auStack_408._0_8_ = *(undefined8 *)(pfVar53 + uVar32 * 4 + 2);
                        auStack_3f8._0_8_ = *(undefined8 *)(pfVar53 + 2);
                        uStack_3b8 = *(undefined8 *)(pfVar53 + uVar35 * 4);
                        uStack_418 = (uint)*(undefined8 *)(pfVar53 + uVar35 * 4 + 2);
                        uStack_414 = (uint)((ulong)*(undefined8 *)(pfVar53 + uVar35 * 4 + 2) >> 0x20
                                           );
                        fStack_3c8 = fVar97;
                        while( true ) {
                          this_00 = *(HeightFieldShape **)(pVVar54 + 0x68);
                          iVar29 = 1;
                          iVar36 = *(int *)(this_00 + 0x40);
                          uVar25 = iVar36 - 1;
                          if (uVar25 != 0) {
                            iVar29 = 0x1f;
                            if (uVar25 != 0) {
                              for (; uVar25 >> iVar29 == 0; iVar29 = iVar29 + -1) {
                              }
                            }
                            iVar29 = (int)(1L << ((char)iVar29 * '\x02' + 3U & 0x3f)) + -1;
                          }
                          fStack_388 = SUB84(pVVar54,0);
                          fStack_384 = (float)((ulong)pVVar54 >> 0x20);
                          uStack_398 = (float *)CONCAT44(uStack_398._4_4_,uVar24);
                          uStack_34c = uVar24 + (iVar36 * (int)fStack_378 + (int)fVar59) * 2 <<
                                       (SUB41(*(float *)(pVVar54 + 0x94),0) & 0x1f) |
                                       ~(iVar29 << (SUB41(*(float *)(pVVar54 + 0x94),0) & 0x1f)) &
                                       (uint)*(float *)(pVVar54 + 0x90);
                          *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10e1b2;
                          uStack_3d8 = uVar38;
                          uVar23 = GetEdgeFlags(this_00,(uint)fVar59,(uint)fStack_378,uVar24);
                          *(undefined8 *)(puVar44 + lVar5 + -8) = 0x10e1f8;
                          JPH::CastSphereVsTriangles::Cast
                                    (auStack_3e8._0_8_,auStack_3f8._0_8_,uStack_3a8,
                                     auStack_408._0_8_,uStack_3b8,CONCAT44(uStack_414,uStack_418),
                                     CONCAT44(fStack_384,fStack_388),uVar23,&uStack_34c);
                          pVVar54 = (Visitor *)CONCAT44(fStack_384,fStack_388);
                          piVar42 = (int *)(puVar44 + lVar5);
                          if (*(float *)(*(long *)(pVVar54 + 0x58) + 8) <= _LC19) goto LAB_0010d458;
                          uVar38 = uStack_3d8;
                          fVar97 = fStack_3c8;
                          if ((int)uStack_398 == 1) break;
LAB_0010e234:
                          if (pcVar31[1] != '\0') break;
                          uStack_3b8 = *(undefined8 *)(pfVar53 + 4);
                          uVar24 = 1;
                          auStack_3e8._0_8_ = *(undefined8 *)pfVar53;
                          auStack_3f8._0_8_ = *(undefined8 *)(pfVar53 + 2);
                          uStack_3a8 = *(undefined8 *)(pfVar53 + uVar35 * 4);
                          auStack_408._0_8_ = *(undefined8 *)(pfVar53 + uVar35 * 4 + 2);
                          uStack_418 = (uint)*(undefined8 *)(pfVar53 + 6);
                          uStack_414 = (uint)((ulong)*(undefined8 *)(pfVar53 + 6) >> 0x20);
                          fStack_3c8 = fVar97;
                        }
                      }
                    }
                    fVar59 = (float)((int)fVar59 + 1);
                    fVar41 = fStack_438;
                  } while (fVar97 != fVar59);
                }
                fStack_378 = (float)((int)fStack_378 + 1);
                iVar37 = iVar37 + local_41c;
                uVar55 = uStack_468;
                uVar25 = uStack_47c;
              } while (fStack_444 != fStack_378);
            }
            fVar41 = *(float *)(*(long *)(pVVar54 + 0x58) + 8);
            lVar57 = (long)(int)(uVar25 - 1);
            fVar97 = (float)(~-(uint)(_LC52 < fVar41) & (uint)_LC52 |
                            (uint)fVar41 & -(uint)(_LC52 < fVar41));
            do {
              uVar24 = (uint)lVar57;
              if (uVar24 == 0xffffffff) goto LAB_0010e326;
              lVar30 = lVar57 * 4;
              lVar57 = lVar57 + -1;
            } while (fVar97 < *(float *)(pVVar54 +
                                        lVar30 + ((long)(int)((uVar25 - 1) + iStack_448) -
                                                 (long)(int)uVar25) * 4 + 0x9c) ||
                     fVar97 == *(float *)(pVVar54 +
                                         lVar30 + ((long)(int)((uVar25 - 1) + iStack_448) -
                                                  (long)(int)uVar25) * 4 + 0x9c));
          } while( true );
        }
        *(undefined1 (*) [16])pVVar54 = (undefined1  [16])0x0;
        fVar41 = *(float *)(*(long *)(local_440 + 0x58) + 8);
      }
LAB_0010e326:
      piVar42 = (int *)(puVar44 + lVar5);
      if (fVar41 <= _LC19) break;
      lVar57 = (long)(local_250 + -1);
      fVar97 = (float)(~-(uint)(_LC52 < fVar41) & (uint)_LC52 |
                      (uint)fVar41 & -(uint)(_LC52 < fVar41));
      do {
        iVar37 = (int)lVar57;
        piVar42 = (int *)(puVar44 + lVar5);
        if (iVar37 < 0) goto LAB_0010d458;
        lVar30 = lVar57 * 4;
        lVar57 = lVar57 + -1;
      } while (fVar97 < *(float *)(local_440 + lVar30 + 0x98) ||
               fVar97 == *(float *)(local_440 + lVar30 + 0x98));
      local_250 = iVar37;
      uVar24 = auStack_24c[iVar37];
    } while( true );
  }
LAB_0010d458:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)piVar42 + -8) = sCastSphereVsHeightField;
    __stack_chk_fail();
  }
  return;
}



/* JPH::HeightFieldShape::sCastSphereVsHeightField(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::HeightFieldShape::sCastSphereVsHeightField
               (long param_1,undefined8 param_2,HeightFieldShape *param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  Visitor aVStack_2d8 [104];
  HeightFieldShape *local_270;
  undefined1 local_268 [16];
  int local_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  undefined8 local_248;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CastSphereVsTriangles::CastSphereVsTriangles
            ((CastSphereVsTriangles *)aVStack_2d8,param_1,param_2,param_5,param_6,param_8);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x60);
  local_248 = *param_7;
  auVar2._0_4_ = 0.0 - auVar1._0_4_;
  auVar2._4_4_ = 0.0 - auVar1._4_4_;
  auVar2._8_4_ = 0.0 - auVar1._8_4_;
  auVar2._12_4_ = 0.0 - auVar1._12_4_;
  auVar3 = maxps(auVar2,auVar1);
  local_258 = -(uint)(auVar3._0_4_ <= _LC34);
  iStack_254 = -(uint)(auVar3._4_4_ <= _LC34);
  iStack_250 = -(uint)(auVar3._8_4_ <= _LC34);
  iStack_24c = -(uint)(auVar3._12_4_ <= _LC34);
  auVar5._4_4_ = _LC4;
  auVar5._0_4_ = _LC4;
  auVar5._8_4_ = _LC4;
  auVar5._12_4_ = _LC4;
  auVar4._0_4_ = local_258 >> 0x1f & _LC4;
  auVar4._4_4_ = iStack_254 >> 0x1f & _LC4;
  auVar4._8_4_ = iStack_250 >> 0x1f & _LC4;
  auVar4._12_4_ = iStack_24c >> 0x1f & _LC4;
  auVar3._4_4_ = ~(iStack_254 >> 0x1f) & (uint)auVar1._4_4_;
  auVar3._0_4_ = ~(local_258 >> 0x1f) & (uint)auVar1._0_4_;
  auVar3._8_4_ = ~(iStack_250 >> 0x1f) & (uint)auVar1._8_4_;
  auVar3._12_4_ = ~(iStack_24c >> 0x1f) & (uint)auVar1._12_4_;
  local_268 = divps(auVar5,auVar4 | auVar3);
  local_270 = param_3;
  WalkHeightField<JPH::HeightFieldShape::sCastSphereVsHeightField(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)::Visitor>
            (param_3,aVStack_2d8);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::sCollideConvexVsHeightField(JPH::Shape
   const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&)::Visitor>(JPH::HeightFieldShape::sCollideConvexVsHeightField(JPH::Shape
   const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&)::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::sCollideConvexVsHeightField(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  HeightFieldShape HVar1;
  HeightFieldShape HVar2;
  ushort uVar3;
  HeightFieldShape *this_00;
  long lVar4;
  byte bVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [14];
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  int *piVar31;
  float *pfVar32;
  uint *puVar33;
  uint *puVar34;
  undefined1 *puVar36;
  uint uVar38;
  undefined1 (*pauVar39) [16];
  ulong uVar40;
  undefined4 uVar41;
  float *pfVar42;
  undefined1 (*pauVar43) [16];
  Visitor *pVVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  long in_FS_OFFSET;
  bool bVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  uint uVar62;
  uint uVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  float fVar86;
  float fVar90;
  float fVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar92;
  float fVar93;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  uint uVar105;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  int iStack_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  uint uStack_3e4;
  uint uStack_3e0;
  int iStack_3dc;
  int local_3d8;
  uint uStack_3d4;
  uint local_3d0;
  uint local_3cc;
  Visitor *local_3c8;
  uint local_3c0;
  uint uStack_3bc;
  ulong uStack_3b8;
  uint local_3b0;
  uint uStack_3ac;
  float *pfStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  uint local_378;
  uint uStack_374;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  Visitor *pVStack_358;
  long lStack_350;
  undefined1 auStack_348 [16];
  uint uStack_32c;
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  uint *puVar35;
  undefined1 *puVar37;
  
  puVar34 = &uStack_468;
  puVar35 = &uStack_468;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  puVar33 = &uStack_468;
  local_3c8 = param_1;
  if (*(int *)(this + 0x48) == 0) {
LAB_0010f003:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)puVar33 + -8) = &UNK_0011027d;
    __stack_chk_fail();
  }
  uStack_468 = *(uint *)(this + 0x40) - 1;
  local_3b0 = *(uint *)(this + 0x44);
  local_378 = local_3b0 + 1;
  uVar15 = *(uint *)(this + 0x40) / local_3b0;
  local_3cc = uVar15 - 1;
  if (local_3cc == 0) {
    local_3c0 = 0;
    local_3d8 = 0;
  }
  else {
    uVar46 = 0x1f;
    if (local_3cc != 0) {
      for (; local_3cc >> uVar46 == 0; uVar46 = uVar46 - 1) {
      }
    }
    local_3d8 = (&sGridOffsets)[0x1f - (uVar46 ^ 0x1f)];
    local_3c0 = 0x20 - (uVar46 ^ 0x1f);
  }
  local_3d0 = uVar15 + 1 >> 1;
  uVar30 = (long)(int)(local_378 * local_378) * 0x10 + 0x10;
  puVar33 = &uStack_468;
  while (puVar35 != (uint *)((long)&uStack_468 - (uVar30 & 0xfffffffffffff000))) {
    puVar34 = (uint *)((long)puVar33 + -0x1000);
    *(undefined8 *)((long)puVar33 + -8) = *(undefined8 *)((long)puVar33 + -8);
    puVar35 = (uint *)((long)puVar33 + -0x1000);
    puVar33 = (uint *)((long)puVar33 + -0x1000);
  }
  uVar30 = (ulong)((uint)uVar30 & 0xfff);
  lVar4 = -uVar30;
  puVar36 = (undefined1 *)((long)puVar34 + lVar4);
  puVar37 = (undefined1 *)((long)puVar34 + lVar4);
  if (uVar30 != 0) {
    *(undefined8 *)((long)puVar34 + -8) = *(undefined8 *)((long)puVar34 + -8);
  }
  uVar30 = (long)(int)(local_378 * local_378) + 0x17;
  pfStack_3a8 = (float *)((ulong)((long)puVar34 + lVar4 + 0xf) & 0xfffffffffffffff0);
  puVar12 = (undefined1 *)((long)puVar34 + lVar4);
  while (puVar37 != (undefined1 *)((long)puVar34 + (lVar4 - (uVar30 & 0xfffffffffffff000)))) {
    puVar36 = puVar12 + -0x1000;
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
    puVar37 = puVar12 + -0x1000;
    puVar12 = puVar12 + -0x1000;
  }
  uVar30 = (ulong)((uint)uVar30 & 0xff0);
  lVar4 = -uVar30;
  if (uVar30 != 0) {
    *(undefined8 *)(puVar36 + -8) = *(undefined8 *)(puVar36 + -8);
  }
  fStack_3f8 = *(float *)(this + 0x20);
  fStack_408 = *(float *)(this + 0x24);
  fStack_418 = *(float *)(this + 0x28);
  uVar15 = 0;
  uStack_3b8 = (ulong)(puVar36 + lVar4 + 0xf) & 0xfffffffffffffff0;
  uStack_3e4 = local_3b0 * local_378;
  fStack_428 = *(float *)(this + 0x30);
  fStack_438 = *(float *)(this + 0x34);
  fStack_448 = *(float *)(this + 0x38);
  iStack_458 = uStack_468 - __LC27;
  iStack_454 = uStack_468 - _UNK_00116694;
  iStack_450 = uStack_468 - _UNK_00116698;
  iStack_44c = uStack_468 - _UNK_0011669c;
  uStack_464 = uStack_468;
  uStack_460 = uStack_468;
  uStack_45c = uStack_468;
  fStack_444 = fStack_448;
  fStack_440 = fStack_448;
  fStack_43c = fStack_448;
  fStack_434 = fStack_438;
  fStack_430 = fStack_438;
  fStack_42c = fStack_438;
  fStack_424 = fStack_428;
  fStack_420 = fStack_428;
  fStack_41c = fStack_428;
  fStack_414 = fStack_418;
  fStack_410 = fStack_418;
  fStack_40c = fStack_418;
  fStack_404 = fStack_408;
  fStack_400 = fStack_408;
  fStack_3fc = fStack_408;
  fStack_3f4 = fStack_3f8;
  fStack_3f0 = fStack_3f8;
  fStack_3ec = fStack_3f8;
  do {
    iVar47 = local_250;
    fVar9 = _LC2;
    uVar46 = uVar15 & 0x3fff;
    uVar16 = uVar15 >> 0xe & 0x3fff;
    uVar17 = uVar15 >> 0x1c;
    if (uVar17 < local_3c0) {
      bVar5 = (byte)(uVar15 >> 0x18);
      uVar15 = 1 << (bVar5 >> 4);
      if (local_3d0 < uVar15) {
        uVar15 = local_3d0;
      }
      auVar54 = *(undefined1 (*) [16])
                 ((ulong)(uVar15 * uVar16 + (&sGridOffsets)[uVar17] + uVar46) * 0x10 +
                 *(long *)(local_258 + 0x60));
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar54._0_10_;
      auVar6._12_2_ = auVar54._6_2_;
      auVar7._8_2_ = auVar54._4_2_;
      auVar7._0_8_ = auVar54._0_8_;
      auVar7._10_4_ = auVar6._10_4_;
      auVar11._6_8_ = 0;
      auVar11._0_6_ = auVar7._8_6_;
      auVar8._4_2_ = auVar54._2_2_;
      auVar8._0_4_ = auVar54._0_4_;
      auVar8._6_8_ = SUB148(auVar11 << 0x40,6);
      uVar15 = local_3b0 << (((char)local_3c0 + -1) - (bVar5 >> 4) & 0x1f);
      iVar29 = uVar16 * 2;
      iVar19 = uVar46 * 2;
      auVar69._4_4_ = uVar15;
      auVar69._0_4_ = uVar15;
      auVar69._8_4_ = uVar15;
      auVar69._12_4_ = uVar15;
      iVar20 = (uVar17 + 1) * 0x10000000 + uVar16 * 0x8000 + iVar19;
      auVar75._0_4_ = __LC25 + iVar19;
      auVar75._4_4_ = _UNK_00116674 + iVar19;
      auVar75._8_4_ = _UNK_00116678 + iVar19;
      auVar75._12_4_ = _UNK_0011667c + iVar19;
      auVar65._0_4_ = iVar19 + __LC26;
      auVar65._4_4_ = iVar19 + _UNK_00116684;
      auVar65._8_4_ = iVar19 + _UNK_00116688;
      auVar65._12_4_ = iVar19 + _UNK_0011668c;
      fVar93 = (float)(auVar54._0_4_ & 0xffff) * fStack_438 + fStack_408;
      fVar97 = (float)auVar8._4_4_ * fStack_434 + fStack_404;
      fVar98 = (float)auVar7._8_4_ * fStack_430 + fStack_400;
      fVar99 = (float)(auVar6._10_4_ >> 0x10) * fStack_42c + fStack_3fc;
      fVar86 = (float)auVar54._8_2_ * fStack_438 + fStack_408;
      fVar90 = (float)auVar54._10_2_ * fStack_434 + fStack_404;
      fVar91 = (float)auVar54._12_2_ * fStack_430 + fStack_400;
      fVar92 = (float)auVar54._14_2_ * fStack_42c + fStack_3fc;
      uVar105 = (uint)((auVar65._8_8_ & 0xffffffff) * (ulong)uVar15);
      uVar38 = (uint)((auVar65._8_8_ >> 0x20) * (ulong)uVar15);
      uVar46 = -(uint)(iStack_458 < (int)(auVar65._0_4_ * uVar15 - __LC27));
      uVar21 = -(uint)(iStack_454 < (int)(auVar65._4_4_ * uVar15 - _UNK_00116694));
      uVar45 = -(uint)(iStack_450 < (int)(uVar105 - _UNK_00116698));
      uVar58 = -(uint)(iStack_44c < (int)(uVar38 - _UNK_0011669c));
      auVar103._0_4_ = __LC28 + iVar29;
      auVar103._4_4_ = _UNK_001166a4 + iVar29;
      auVar103._8_4_ = _UNK_001166a8 + iVar29;
      auVar103._12_4_ = _UNK_001166ac + iVar29;
      uVar62 = uVar15 * (iVar29 + __LC29);
      uVar17 = (iVar29 + _UNK_001166b4) * uVar15;
      uVar18 = (iVar29 + _UNK_001166b4) * uVar15;
      uVar72 = (uint)((auVar69._8_8_ & 0xffffffff) * (ulong)(uint)(iVar29 + _UNK_001166b8));
      uVar48 = -(uint)(iStack_458 < (int)(uVar62 - __LC27));
      uVar28 = -(uint)(iStack_454 < (int)(uVar17 - _UNK_00116694));
      uVar22 = -(uint)(iStack_450 < (int)(uVar72 - _UNK_00116698));
      uVar59 = -(uint)(iStack_44c < (int)(uVar18 - _UNK_0011669c));
      uVar60 = iVar20 + _UNK_001166cc;
      fVar9 = *(float *)(local_3c8 + 0x30);
      fVar50 = *(float *)(local_3c8 + 0x34);
      fVar10 = *(float *)(local_3c8 + 0x38);
      uVar51 = CONCAT44(((float)(int)(auVar75._4_4_ * uVar15) * fStack_424 + fStack_3f4) * fVar9,
                        ((float)(int)(auVar75._0_4_ * uVar15) * fStack_428 + fStack_3f8) * fVar9);
      fVar57 = ((float)(int)((auVar75._8_8_ & 0xffffffff) * (ulong)uVar15) * fStack_420 + fStack_3f0
               ) * fVar9;
      fVar61 = ((float)(int)((auVar75._8_8_ >> 0x20) * (ulong)uVar15) * fStack_41c + fStack_3ec) *
               fVar9;
      auVar78._0_4_ =
           ((float)(int)(~uVar46 & auVar65._0_4_ * uVar15 | uStack_468 & uVar46) * fStack_428 +
           fStack_3f8) * fVar9;
      auVar78._4_4_ =
           ((float)(int)(~uVar21 & auVar65._4_4_ * uVar15 | uStack_464 & uVar21) * fStack_424 +
           fStack_3f4) * fVar9;
      auVar78._8_4_ =
           ((float)(int)(~uVar45 & uVar105 | uStack_460 & uVar45) * fStack_420 + fStack_3f0) * fVar9
      ;
      auVar78._12_4_ =
           ((float)(int)(~uVar58 & uVar38 | uStack_45c & uVar58) * fStack_41c + fStack_3ec) * fVar9;
      auVar108._8_4_ = fVar57;
      auVar108._0_8_ = uVar51;
      auVar108._12_4_ = fVar61;
      auVar84._8_4_ = fVar57;
      auVar84._0_8_ = uVar51;
      auVar84._12_4_ = fVar61;
      auVar111 = minps(auVar108,auVar78);
      auVar95 = maxps(auVar84,auVar78);
      auVar88._0_8_ = CONCAT44(fVar97 * fVar50,fVar93 * fVar50);
      auVar88._8_4_ = fVar98 * fVar50;
      auVar88._12_4_ = fVar99 * fVar50;
      auVar71._4_4_ = -(uint)(fVar97 <= fVar90);
      auVar71._0_4_ = -(uint)(fVar93 <= fVar86);
      auVar71._8_4_ = -(uint)(fVar98 <= fVar91);
      auVar71._12_4_ = -(uint)(fVar99 <= fVar92);
      auVar79._0_4_ = fVar50 * fVar86;
      auVar79._4_4_ = fVar50 * fVar90;
      auVar79._8_4_ = fVar50 * fVar91;
      auVar79._12_4_ = fVar50 * fVar92;
      auVar106._8_4_ = auVar88._8_4_;
      auVar106._0_8_ = auVar88._0_8_;
      auVar106._12_4_ = auVar88._12_4_;
      auVar101 = minps(auVar106,auVar79);
      auVar54 = maxps(auVar88,auVar79);
      auVar80._0_8_ =
           CONCAT44(((float)(int)(auVar103._4_4_ * uVar15) * fStack_444 + fStack_414) * fVar10,
                    ((float)(int)(auVar103._0_4_ * uVar15) * fStack_448 + fStack_418) * fVar10);
      auVar80._8_4_ =
           ((float)(int)((auVar103._8_8_ & 0xffffffff) * (ulong)uVar15) * fStack_440 + fStack_410) *
           fVar10;
      auVar80._12_4_ =
           ((float)(int)((auVar103._8_8_ >> 0x20) * (ulong)uVar15) * fStack_43c + fStack_40c) *
           fVar10;
      auVar112._8_4_ = auVar80._8_4_;
      auVar112._0_8_ = auVar80._0_8_;
      auVar112._12_4_ = auVar80._12_4_;
      auVar70._0_4_ =
           fVar10 * ((float)(int)(~uVar48 & uVar62 | uStack_468 & uVar48) * fStack_448 + fStack_418)
      ;
      auVar70._4_4_ =
           fVar10 * ((float)(int)(~uVar28 & uVar17 | uStack_464 & uVar28) * fStack_444 + fStack_414)
      ;
      auVar70._8_4_ =
           fVar10 * ((float)(int)(~uVar22 & uVar72 | uStack_460 & uVar22) * fStack_440 + fStack_410)
      ;
      auVar70._12_4_ =
           fVar10 * ((float)(int)(~uVar59 & uVar18 | uStack_45c & uVar59) * fStack_43c + fStack_40c)
      ;
      auVar65 = maxps(auVar80,auVar70);
      auVar88 = minps(auVar112,auVar70);
      fVar9 = *(float *)(local_3c8 + 0xe0);
      fVar50 = *(float *)(local_3c8 + 0xe4);
      fVar10 = *(float *)(local_3c8 + 0xe8);
      fVar57 = *(float *)(local_3c8 + 0xf0);
      fVar61 = *(float *)(local_3c8 + 0xf4);
      fVar86 = *(float *)(local_3c8 + 0xf8);
      auVar85._4_4_ = -(uint)(auVar95._4_4_ < fVar9);
      auVar85._0_4_ = -(uint)(auVar95._0_4_ < fVar9);
      auVar85._8_4_ = -(uint)(auVar95._8_4_ < fVar9);
      auVar85._12_4_ = -(uint)(auVar95._12_4_ < fVar9);
      auVar95._4_4_ = -(uint)(auVar54._4_4_ < fVar50);
      auVar95._0_4_ = -(uint)(auVar54._0_4_ < fVar50);
      auVar95._8_4_ = -(uint)(auVar54._8_4_ < fVar50);
      auVar95._12_4_ = -(uint)(auVar54._12_4_ < fVar50);
      auVar109._4_4_ = -(uint)(fVar61 < auVar101._4_4_);
      auVar109._0_4_ = -(uint)(fVar61 < auVar101._0_4_);
      auVar109._8_4_ = -(uint)(fVar61 < auVar101._8_4_);
      auVar109._12_4_ = -(uint)(fVar61 < auVar101._12_4_);
      auVar104._4_4_ = -(uint)(fVar86 < auVar88._4_4_);
      auVar104._0_4_ = -(uint)(fVar86 < auVar88._0_4_);
      auVar104._8_4_ = -(uint)(fVar86 < auVar88._8_4_);
      auVar104._12_4_ = -(uint)(fVar86 < auVar88._12_4_);
      auVar81._4_4_ = -(uint)(auVar65._4_4_ < fVar10);
      auVar81._0_4_ = -(uint)(auVar65._0_4_ < fVar10);
      auVar81._8_4_ = -(uint)(auVar65._8_4_ < fVar10);
      auVar81._12_4_ = -(uint)(auVar65._12_4_ < fVar10);
      auVar54._4_4_ = -(uint)(fVar57 < auVar111._4_4_);
      auVar54._0_4_ = -(uint)(fVar57 < auVar111._0_4_);
      auVar54._8_4_ = -(uint)(fVar57 < auVar111._8_4_);
      auVar54._12_4_ = -(uint)(fVar57 < auVar111._12_4_);
      auVar71 = ~(auVar95 | auVar109 | auVar85 | auVar54 | auVar81 | auVar104) & auVar71;
      uVar41 = movmskps(uVar16 * 0x8000,auVar71);
      uVar15 = auVar71._8_4_ >> 0x1f;
      uVar46 = auVar71._4_4_ >> 0x1f;
      uVar15 = uVar15 & iVar20 + _UNK_001166c8 | ~uVar15 & uVar60;
      auVar101._0_4_ = iVar20 + __LC30 & uVar46;
      auVar101._4_4_ = iVar20 + _UNK_001166c4 & uVar46;
      auVar101._8_4_ = uVar15 & uVar46;
      auVar101._12_4_ = uVar60 & uVar46;
      auVar82._0_4_ = ~uVar46 & iVar20 + __LC30;
      auVar82._4_4_ = ~uVar46 & uVar15;
      auVar82._8_4_ = ~uVar46 & uVar60;
      auVar82._12_4_ = ~uVar46 & uVar60;
      uVar46 = auVar71._0_4_ >> 0x1f;
      auVar101 = auVar101 | auVar82;
      uVar15 = auVar101._12_4_;
      auVar111._0_4_ = auVar101._0_4_ & uVar46;
      auVar111._4_4_ = auVar101._4_4_ & uVar46;
      auVar111._8_4_ = auVar101._8_4_ & uVar46;
      auVar111._12_4_ = uVar15 & uVar46;
      auVar83._0_4_ = ~uVar46 & auVar101._4_4_;
      auVar83._4_4_ = ~uVar46 & auVar101._8_4_;
      auVar83._8_4_ = ~uVar46 & uVar15;
      auVar83._12_4_ = ~uVar46 & uVar15;
      auStack_348 = auVar111 | auVar83;
      *(undefined8 *)(puVar36 + lVar4 + -8) = 0x10fe8f;
      local_250 = __popcountdi2(uVar41);
      local_250 = local_250 + iVar47;
      *(undefined8 *)(auStack_24c + iVar47) = auStack_348._0_8_;
      *(undefined8 *)((long)auStack_244 + (long)iVar47 * 4) = auStack_348._8_8_;
    }
    else {
      lStack_368 = *(long *)(local_258 + 0x60);
      HVar1 = local_258[0x55];
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar15) & 0xffffffff00000001;
      uStack_398 = CONCAT44(uStack_398._4_4_,uVar16 * 2) & 0xffffffff00000002;
      uVar30 = (ulong)(uVar16 * 2 & 2 | uVar15 & 1);
      uStack_3d4 = local_3b0 * uVar46;
      uVar45 = local_3b0 * uVar16;
      uVar17 = local_3b0 + uStack_3d4;
      auStack_348._0_4_ = uVar17;
      iVar47 = local_3d8 + (uVar16 >> 1) * local_3d0;
      uVar28 = uVar46 >> 1;
      uVar48 = local_3b0 + uVar45;
      uStack_390 = CONCAT44(uStack_390._4_4_,uVar28);
      lVar23 = (ulong)(uVar28 + iVar47) * 0x10 + lStack_368;
      uVar3 = *(ushort *)(lVar23 + 8 + uVar30 * 2);
      fVar50 = (float)(byte)HVar1;
      uVar38 = (uint)*(ushort *)(lVar23 + uVar30 * 2);
      uVar21 = (uint)(byte)HVar1;
      if (uVar45 < uVar48) {
        uStack_360 = (ulong)(local_3b0 - 1) + 1;
        uStack_370 = CONCAT44(uStack_370._4_4_,uVar15) & 0xffffffff00003fff;
        uStack_380 = CONCAT44(uStack_380._4_4_,uVar45);
        pVStack_358 = (Visitor *)(uStack_360 * 0x10);
        uStack_388 = CONCAT44(uStack_388._4_4_,iVar47);
        lStack_350 = CONCAT44(lStack_350._4_4_,uVar48);
        uVar30 = uStack_3b8;
        pfVar32 = pfStack_3a8;
        uVar15 = uVar45;
        do {
          uVar40 = uVar30;
          if (uStack_3d4 < uVar17) {
            HVar2 = local_258[0x54];
            lVar23 = *(long *)(local_258 + 0x68);
            auVar54 = *(undefined1 (*) [16])(local_258 + 0x30);
            iVar29 = (int)uVar30;
            auVar65 = *(undefined1 (*) [16])(local_258 + 0x20);
            uVar40 = uVar30 + uStack_360;
            uVar46 = (*(int *)(local_258 + 0x40) * uVar15 + uStack_3d4) * (uint)(byte)HVar2;
            pfVar42 = pfVar32;
            do {
              iVar19 = (int)uVar30;
              uVar18 = (int)(uint)*(ushort *)(lVar23 + (ulong)(uVar46 >> 3)) >> ((byte)uVar46 & 7) &
                       uVar21;
              *(bool *)uVar30 = HVar1 == SUB41(uVar18,0);
              uVar30 = uVar30 + 1;
              uVar46 = uVar46 + (byte)HVar2;
              *pfVar42 = (float)((uStack_3d4 - iVar29) + iVar19) * auVar54._0_4_ + auVar65._0_4_;
              pfVar42[1] = (((float)uVar18 + fVar9) * ((float)(int)(uVar3 - uVar38) / fVar50) +
                           (float)uVar38) * auVar54._4_4_ + auVar65._4_4_;
              pfVar42[2] = (float)uVar15 * auVar54._8_4_ + auVar65._8_4_;
              pfVar42[3] = (float)uVar15 * auVar54._12_4_ + auVar65._12_4_;
              pfVar42 = pfVar42 + 4;
            } while (uVar30 != uVar40);
            pfVar32 = pfVar32 + uStack_360 * 4;
          }
          pfVar32 = pfVar32 + 4;
          uVar30 = uVar40 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar48 != uVar15);
        uVar46 = (uint)uStack_370;
        uStack_374 = uVar16;
      }
      fVar9 = _LC2;
      iStack_2e0 = 1;
      if (uVar46 < local_3cc) {
        pfVar32 = pfStack_3a8 + (ulong)local_3b0 * 4;
        lVar23 = uStack_3b8 + local_3b0;
        uVar30 = (ulong)(uVar46 + 1 & 1 | (uint)uStack_398);
        lVar26 = (ulong)((uVar46 + 1 >> 1) + iVar47) * 0x10 + lStack_368;
        uVar3 = *(ushort *)(lVar26 + 8 + uVar30 * 2);
        uVar15 = (uint)*(ushort *)(lVar26 + uVar30 * 2);
        if (uVar45 < uVar48) {
          pVStack_358 = *(Visitor **)(local_258 + 0x68);
          iVar47 = *(int *)(local_258 + 0x40);
          uVar30 = (ulong)local_378;
          HVar2 = local_258[0x54];
          fVar10 = *(float *)(local_258 + 0x30);
          fVar57 = *(float *)(local_258 + 0x34);
          fVar61 = *(float *)(local_258 + 0x38);
          fVar86 = *(float *)(local_258 + 0x3c);
          fVar90 = *(float *)(local_258 + 0x20);
          fVar91 = *(float *)(local_258 + 0x24);
          fVar92 = *(float *)(local_258 + 0x28);
          fVar93 = *(float *)(local_258 + 0x2c);
          lStack_350 = uVar30 * 0x10;
          uVar18 = (iVar47 * uVar45 + uVar17) * (uint)(byte)HVar2;
          uVar38 = uVar45;
          do {
            uVar40 = (ulong)uVar38;
            uVar22 = (int)(uint)*(ushort *)(pVStack_358 + (uVar18 >> 3)) >> ((byte)uVar18 & 7) &
                     uVar21;
            *(bool *)lVar23 = HVar1 == SUB41(uVar22,0);
            uVar38 = uVar38 + 1;
            lVar23 = lVar23 + uVar30;
            uVar18 = uVar18 + iVar47 * (uint)(byte)HVar2;
            *pfVar32 = (float)uVar17 * fVar10 + fVar90;
            pfVar32[1] = (((float)uVar22 + fVar9) * ((float)(int)(uVar3 - uVar15) / fVar50) +
                         (float)uVar15) * fVar57 + fVar91;
            pfVar32[2] = (float)uVar40 * fVar61 + fVar92;
            pfVar32[3] = (float)uVar40 * fVar86 + fVar93;
            pfVar32 = pfVar32 + uVar30 * 4;
          } while (uVar48 != uVar38);
        }
        iStack_2e0 = 0;
      }
      fVar9 = _LC2;
      if (uVar16 < local_3cc) {
        pVStack_358 = (Visitor *)(pfStack_3a8 + (ulong)uStack_3e4 * 4);
        lVar23 = uStack_3b8 + uStack_3e4;
        uVar15 = (uVar16 + 1) * 2;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar15) & 0xffffffff00000002;
        iVar47 = (uVar16 + 1 >> 1) * local_3d0 + local_3d8;
        uVar30 = (ulong)((uint)uStack_3a0 | uVar15 & 2);
        uStack_370 = CONCAT44(uStack_370._4_4_,iVar47);
        lVar26 = (ulong)(iVar47 + uVar28) * 0x10 + lStack_368;
        uVar3 = *(ushort *)(lVar26 + 8 + uVar30 * 2);
        uVar15 = (uint)*(ushort *)(lVar26 + uVar30 * 2);
        if (uStack_3d4 < uVar17) {
          lStack_350 = *(long *)(local_258 + 0x68);
          HVar2 = local_258[0x54];
          fVar10 = *(float *)(local_258 + 0x30);
          fVar57 = *(float *)(local_258 + 0x34);
          fVar61 = *(float *)(local_258 + 0x38);
          fVar86 = *(float *)(local_258 + 0x3c);
          fVar90 = *(float *)(local_258 + 0x20);
          fVar91 = *(float *)(local_258 + 0x24);
          fVar92 = *(float *)(local_258 + 0x28);
          fVar93 = *(float *)(local_258 + 0x2c);
          iVar29 = (int)lVar23;
          uVar16 = (*(int *)(local_258 + 0x40) * uVar48 + uStack_3d4) * (uint)(byte)HVar2;
          lVar27 = (ulong)(local_3b0 - 1) + 1;
          lVar26 = lVar23 + lVar27;
          pVVar44 = pVStack_358;
          do {
            iVar19 = (int)lVar23;
            uVar28 = (int)(uint)*(ushort *)(lStack_350 + (ulong)(uVar16 >> 3)) >> ((byte)uVar16 & 7)
                     & uVar21;
            *(bool *)lVar23 = HVar1 == SUB41(uVar28,0);
            lVar23 = lVar23 + 1;
            uVar16 = uVar16 + (byte)HVar2;
            *(float *)pVVar44 = (float)((uStack_3d4 - iVar29) + iVar19) * fVar10 + fVar90;
            *(float *)(pVVar44 + 4) =
                 (((float)uVar28 + fVar9) * ((float)(int)(uVar3 - uVar15) / fVar50) + (float)uVar15)
                 * fVar57 + fVar91;
            *(float *)(pVVar44 + 8) = (float)uVar48 * fVar61 + fVar92;
            *(float *)(pVVar44 + 0xc) = (float)uVar48 * fVar86 + fVar93;
            pVVar44 = pVVar44 + 0x10;
          } while (lVar23 != lVar26);
          pVStack_358 = pVStack_358 + lVar27 * 0x10;
          lVar23 = lVar26;
          uStack_374 = uVar46;
        }
        fVar9 = _LC2;
        if (uVar46 < local_3cc) {
          uVar30 = (ulong)(uVar46 + 1 & 1 | (uint)uStack_360);
          lVar26 = lStack_368 + (ulong)((uVar46 + 1 >> 1) + iVar47) * 0x10;
          uVar3 = *(ushort *)(lVar26 + 8 + uVar30 * 2);
          uVar46 = (uint)*(ushort *)(lVar26 + uVar30 * 2);
          uVar15 = (*(int *)(local_258 + 0x40) * uVar48 + uVar17) * (uint)(byte)local_258[0x54];
          uVar21 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar15 >> 3)) >>
                   ((byte)uVar15 & 7) & uVar21;
          *(bool *)lVar23 = HVar1 == SUB41(uVar21,0);
          fVar10 = *(float *)(local_258 + 0x34);
          fVar57 = *(float *)(local_258 + 0x38);
          fVar61 = *(float *)(local_258 + 0x3c);
          fVar86 = *(float *)(local_258 + 0x24);
          fVar90 = *(float *)(local_258 + 0x28);
          fVar91 = *(float *)(local_258 + 0x2c);
          *(float *)pVStack_358 =
               (float)uVar17 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
          *(float *)(pVStack_358 + 4) =
               (((float)uVar21 + fVar9) * ((float)(int)(uVar3 - uVar46) / fVar50) + (float)uVar46) *
               fVar10 + fVar86;
          *(float *)(pVStack_358 + 8) = (float)uVar48 * fVar57 + fVar90;
          *(float *)(pVStack_358 + 0xc) = (float)uVar48 * fVar61 + fVar91;
        }
      }
      else {
        uVar48 = uVar48 - 1;
      }
      lVar23 = 0;
      uStack_2e4 = local_3b0 >> 1;
      lStack_350 = CONCAT44(lStack_350._4_4_,uVar45);
      auStack_304 = SUB1612((undefined1  [16])0x0,4);
      uStack_308 = uStack_2e4;
      iStack_2dc = uVar48 - (uVar45 + uStack_2e4);
      auStack_318._4_4_ = uStack_2e4;
      auStack_318._0_4_ = uStack_2e4;
      iStack_2e0 = (local_3b0 - uStack_2e4) - iStack_2e0;
      auStack_304._4_4_ = iStack_2e0;
      auStack_304._8_4_ = uStack_2e4;
      piVar31 = (int *)auStack_318;
      auStack_318._8_8_ = 0;
      auStack_318 = auStack_318 << 0x40;
      uStack_2f8 = 0;
      uStack_2f4 = CONCAT44(uStack_2e4,uStack_2e4);
      uStack_2ec = CONCAT44(uStack_2e4,iStack_2dc);
      do {
        uVar30 = (ulong)(local_378 * piVar31[1] + *piVar31);
        uVar15 = piVar31[2];
        pauVar43 = (undefined1 (*) [16])(pfStack_3a8 + uVar30 * 4);
        pcVar24 = (char *)(uVar30 + uStack_3b8);
        if (piVar31[3] == -1) {
          auVar52._8_4_ = _LC15;
          auVar52._0_8_ = CONCAT44(_LC15,_LC15);
          auVar52._12_4_ = _LC15;
          auVar63._8_4_ = _LC17;
          auVar63._0_8_ = CONCAT44(_LC17,_LC17);
          auVar63._12_4_ = _LC17;
        }
        else {
          auStack_348._0_8_ = lVar23;
          auVar52._8_4_ = _LC15;
          auVar52._0_8_ = CONCAT44(_LC15,_LC15);
          auVar52._12_4_ = _LC15;
          auVar63._8_4_ = _LC17;
          auVar63._0_8_ = CONCAT44(_LC17,_LC17);
          auVar63._12_4_ = _LC17;
          iVar47 = 0;
          do {
            pcVar13 = pcVar24 + (ulong)uVar15 + 1;
            pauVar39 = pauVar43;
            if (uVar15 != 0xffffffff) {
              do {
                if (*pcVar24 == '\0') {
                  auVar63 = minps(auVar63,*pauVar39);
                  auVar52 = maxps(auVar52,*pauVar39);
                }
                pcVar24 = pcVar24 + 1;
                pauVar39 = pauVar39 + 1;
              } while (pcVar24 != pcVar13);
              pauVar43 = pauVar43 + (ulong)uVar15 + 1;
              pcVar24 = pcVar13;
            }
            pauVar43 = pauVar43 + (local_3b0 - uVar15);
            pcVar24 = pcVar24 + (local_3b0 - uVar15);
            bVar49 = piVar31[3] != iVar47;
            iVar47 = iVar47 + 1;
          } while (bVar49);
        }
        *(undefined1 (*) [16])((long)&fStack_2d8 + lVar23) = auVar63;
        piVar31 = piVar31 + 4;
        *(undefined1 (*) [16])((long)&fStack_298 + lVar23) = auVar52;
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0x40);
      fVar9 = *(float *)(local_3c8 + 0x30);
      fVar50 = *(float *)(local_3c8 + 0x34);
      fVar10 = *(float *)(local_3c8 + 0x38);
      fVar57 = (float)((ulong)uStack_2c8 >> 0x20);
      fVar61 = (float)((ulong)uStack_288 >> 0x20);
      fVar90 = (float)((ulong)uStack_2a8 >> 0x20);
      fVar86 = (float)((ulong)uStack_268 >> 0x20);
      auVar64._0_8_ = CONCAT44((float)uStack_2c8 * fVar9,fStack_2d8 * fVar9);
      auVar64._8_4_ = fStack_2b8 * fVar9;
      auVar64._12_4_ = (float)uStack_2a8 * fVar9;
      auVar73._0_4_ = fStack_298 * fVar9;
      auVar73._4_4_ = (float)uStack_288 * fVar9;
      auVar73._8_4_ = fStack_278 * fVar9;
      auVar73._12_4_ = (float)uStack_268 * fVar9;
      auVar68._4_4_ = -(uint)(fVar57 <= fVar61);
      auVar68._0_4_ = -(uint)(fStack_2d4 <= fStack_294);
      auVar68._8_4_ = -(uint)(fStack_2b4 <= fStack_274);
      auVar68._12_4_ = -(uint)(fVar90 <= fVar86);
      auStack_348._0_4_ = uVar45;
      auVar100._8_4_ = auVar64._8_4_;
      auVar100._0_8_ = auVar64._0_8_;
      auVar100._12_4_ = auVar64._12_4_;
      auVar65 = maxps(auVar64,auVar73);
      auVar101 = minps(auVar100,auVar73);
      auVar87._0_8_ = CONCAT44(fVar57 * fVar50,fStack_2d4 * fVar50);
      auVar87._8_4_ = fStack_2b4 * fVar50;
      auVar87._12_4_ = fVar90 * fVar50;
      auVar66._0_4_ = fVar50 * fStack_294;
      auVar66._4_4_ = fVar50 * fVar61;
      auVar66._8_4_ = fVar50 * fStack_274;
      auVar66._12_4_ = fVar50 * fVar86;
      auVar94._8_4_ = auVar87._8_4_;
      auVar94._0_8_ = auVar87._0_8_;
      auVar94._12_4_ = auVar87._12_4_;
      auVar95 = minps(auVar94,auVar66);
      auVar88 = maxps(auVar87,auVar66);
      auVar53._0_8_ = CONCAT44(fStack_2c0 * fVar10,fStack_2d0 * fVar10);
      auVar53._8_4_ = fStack_2b0 * fVar10;
      auVar53._12_4_ = fStack_2a0 * fVar10;
      auVar67._0_4_ = fStack_290 * fVar10;
      auVar67._4_4_ = fStack_280 * fVar10;
      auVar67._8_4_ = fStack_270 * fVar10;
      auVar67._12_4_ = fStack_260 * fVar10;
      auVar110._8_4_ = auVar53._8_4_;
      auVar110._0_8_ = auVar53._0_8_;
      auVar110._12_4_ = auVar53._12_4_;
      auVar54 = maxps(auVar53,auVar67);
      auVar111 = minps(auVar110,auVar67);
      fVar9 = *(float *)(local_3c8 + 0xe0);
      fVar50 = *(float *)(local_3c8 + 0xe4);
      fVar10 = *(float *)(local_3c8 + 0xe8);
      fVar57 = *(float *)(local_3c8 + 0xf0);
      fVar61 = *(float *)(local_3c8 + 0xf4);
      fVar86 = *(float *)(local_3c8 + 0xf8);
      auVar107._4_4_ = -(uint)(fVar57 < auVar101._4_4_);
      auVar107._0_4_ = -(uint)(fVar57 < auVar101._0_4_);
      auVar107._8_4_ = -(uint)(fVar57 < auVar101._8_4_);
      auVar107._12_4_ = -(uint)(fVar57 < auVar101._12_4_);
      auVar74._4_4_ = -(uint)(auVar65._4_4_ < fVar9);
      auVar74._0_4_ = -(uint)(auVar65._0_4_ < fVar9);
      auVar74._8_4_ = -(uint)(auVar65._8_4_ < fVar9);
      auVar74._12_4_ = -(uint)(auVar65._12_4_ < fVar9);
      auVar102._4_4_ = -(uint)(fVar61 < auVar95._4_4_);
      auVar102._0_4_ = -(uint)(fVar61 < auVar95._0_4_);
      auVar102._8_4_ = -(uint)(fVar61 < auVar95._8_4_);
      auVar102._12_4_ = -(uint)(fVar61 < auVar95._12_4_);
      auVar89._4_4_ = -(uint)(auVar88._4_4_ < fVar50);
      auVar89._0_4_ = -(uint)(auVar88._0_4_ < fVar50);
      auVar89._8_4_ = -(uint)(auVar88._8_4_ < fVar50);
      auVar89._12_4_ = -(uint)(auVar88._12_4_ < fVar50);
      auVar55._4_4_ = -(uint)(fVar86 < auVar111._4_4_);
      auVar55._0_4_ = -(uint)(fVar86 < auVar111._0_4_);
      auVar55._8_4_ = -(uint)(fVar86 < auVar111._8_4_);
      auVar55._12_4_ = -(uint)(fVar86 < auVar111._12_4_);
      auVar96._4_4_ = -(uint)(auVar54._4_4_ < fVar10);
      auVar96._0_4_ = -(uint)(auVar54._0_4_ < fVar10);
      auVar96._8_4_ = -(uint)(auVar54._8_4_ < fVar10);
      auVar96._12_4_ = -(uint)(auVar54._12_4_ < fVar10);
      auVar68 = ~(auVar74 | auVar107 | auVar89 | auVar102 | auVar55 | auVar96) & auVar68;
      uVar41 = movmskps((int)pauVar43,auVar68);
      uVar15 = auVar68._8_4_ >> 0x1f;
      uVar46 = uVar15 & __LC49 | ~uVar15 & __LC51;
      uVar16 = uVar15 & _UNK_00116668 | ~uVar15 & _UNK_00116728;
      uVar17 = uVar15 & _UNK_0011666c | ~uVar15 & _UNK_0011672c;
      uVar48 = auVar68._4_4_ >> 0x1f;
      auVar56._0_4_ = uVar46 & uVar48;
      auVar56._4_4_ = (uVar15 & _UNK_00116664 | ~uVar15 & _UNK_00116724) & uVar48;
      auVar56._8_4_ = uVar16 & uVar48;
      auVar56._12_4_ = uVar17 & uVar48;
      auVar76._0_4_ = ~uVar48 & uVar46;
      auVar76._4_4_ = ~uVar48 & uVar16;
      auVar76._8_4_ = ~uVar48 & uVar17;
      auVar76._12_4_ = ~uVar48 & uVar17;
      uVar46 = auVar68._0_4_ >> 0x1f;
      auVar56 = auVar56 | auVar76;
      uVar15 = auVar56._12_4_;
      auStack_328._0_4_ = auVar56._0_4_ & uVar46;
      auStack_328._4_4_ = auVar56._4_4_ & uVar46;
      auStack_328._8_4_ = auVar56._8_4_ & uVar46;
      auStack_328._12_4_ = uVar15 & uVar46;
      auVar77._0_4_ = ~uVar46 & auVar56._4_4_;
      auVar77._4_4_ = ~uVar46 & auVar56._8_4_;
      auVar77._8_4_ = ~uVar46 & uVar15;
      auVar77._12_4_ = ~uVar46 & uVar15;
      auStack_328 = auStack_328 | auVar77;
      *(undefined8 *)(puVar36 + lVar4 + -8) = 0x10f7d6;
      uVar15 = __popcountdi2(CONCAT44((int)((ulong)pauVar43 >> 0x20),uVar41));
      if (uVar15 != 0) {
        iVar47 = auStack_348._0_4_;
        auStack_348._0_4_ = local_3b0 + 2;
        do {
          uVar15 = uVar15 - 1;
          lVar23 = (ulong)*(uint *)(auStack_328 + (ulong)uVar15 * 4) * 0x10;
          uVar46 = iVar47 + *(int *)(auStack_318 + lVar23 + 4);
          uVar16 = *(int *)(auStack_318 + lVar23) + uStack_3d4;
          lStack_350 = CONCAT44(lStack_350._4_4_,uVar46);
          uVar17 = *(int *)(auStack_318 + lVar23 + 8) + uVar16;
          if (uVar46 < *(int *)(auStack_318 + lVar23 + 0xc) + uVar46) {
            iVar29 = *(int *)(auStack_318 + lVar23 + 4) * local_378 - uStack_3d4;
            uVar30 = uStack_3b8;
            pVVar44 = local_3c8;
            uStack_3e0 = uVar15;
            iStack_3dc = iVar47;
            uStack_3bc = *(int *)(auStack_318 + lVar23 + 0xc) + uVar46;
            do {
              uVar15 = uVar16;
              if (uVar16 < uVar17) {
                do {
                  uStack_3ac = uVar16;
                  pcVar24 = (char *)(uVar30 + (long)(int)(uVar15 + iVar29));
                  if (*pcVar24 == '\0') {
                    uVar40 = (ulong)(uint)auStack_348._0_4_;
                    if (pcVar24[uVar40] == '\0') {
                      pfVar32 = pfStack_3a8 + (long)(int)(uVar15 + iVar29) * 4;
                      uVar25 = (ulong)local_378;
                      if (pcVar24[uVar25] != '\0') goto LAB_0010fa40;
                      uStack_388 = *(undefined8 *)pfVar32;
                      uVar46 = 0;
                      lStack_368 = *(long *)(pfVar32 + uVar25 * 4);
                      uStack_398 = *(ulong *)(pfVar32 + (uVar25 * 2 + 1) * 2);
                      uStack_390 = *(undefined8 *)(pfVar32 + 2);
                      uStack_370 = *(ulong *)(pfVar32 + uVar40 * 4);
                      uStack_3a0 = *(ulong *)(pfVar32 + (uVar40 * 2 + 1) * 2);
                      uStack_374 = uVar17;
                      while( true ) {
                        this_00 = *(HeightFieldShape **)(pVVar44 + 0x21a0);
                        iVar19 = 1;
                        iVar47 = *(int *)(this_00 + 0x40);
                        uVar16 = iVar47 - 1;
                        if (uVar16 != 0) {
                          iVar19 = 0x1f;
                          if (uVar16 != 0) {
                            for (; uVar16 >> iVar19 == 0; iVar19 = iVar19 + -1) {
                            }
                          }
                          iVar19 = (int)(1L << ((char)iVar19 * '\x02' + 3U & 0x3f)) + -1;
                        }
                        uStack_360 = CONCAT44(uStack_360._4_4_,uVar46);
                        uStack_32c = uVar46 + (iVar47 * (uint)lStack_350 + uVar15) * 2 <<
                                     ((byte)*(undefined4 *)(pVVar44 + 0x21ac) & 0x1f) |
                                     ~(iVar19 << ((byte)*(undefined4 *)(pVVar44 + 0x21ac) & 0x1f)) &
                                     *(uint *)(pVVar44 + 0x21a8);
                        *(undefined8 *)(puVar36 + lVar4 + -8) = 0x10f9be;
                        uStack_380 = uVar30;
                        pVStack_358 = pVVar44;
                        uVar14 = GetEdgeFlags(this_00,uVar15,(uint)lStack_350,uVar46);
                        *(undefined8 *)(puVar36 + lVar4 + -8) = 0x10fa04;
                        JPH::CollideConvexVsTriangles::Collide
                                  (uStack_388,uStack_390,lStack_368,uStack_398,uStack_370,uStack_3a0
                                   ,pVStack_358,uVar14,&uStack_32c);
                        puVar33 = (uint *)(puVar36 + lVar4);
                        if (*(float *)(*(long *)(pVStack_358 + 8) + 8) <= _LC19) goto LAB_0010f003;
                        pVVar44 = pVStack_358;
                        uVar30 = uStack_380;
                        uVar17 = uStack_374;
                        if ((uint)uStack_360 == 1) break;
LAB_0010fa40:
                        if (pcVar24[1] != '\0') break;
                        uStack_388 = *(undefined8 *)pfVar32;
                        uStack_370 = *(ulong *)(pfVar32 + 4);
                        uVar46 = 1;
                        uStack_390 = *(undefined8 *)(pfVar32 + 2);
                        lStack_368 = *(long *)(pfVar32 + uVar40 * 4);
                        uStack_398 = *(ulong *)(pfVar32 + (uVar40 * 2 + 1) * 2);
                        uStack_3a0 = *(ulong *)(pfVar32 + 6);
                        uStack_374 = uVar17;
                      }
                    }
                  }
                  uVar15 = uVar15 + 1;
                  uVar16 = uStack_3ac;
                } while (uVar17 != uVar15);
              }
              uVar46 = (uint)lStack_350 + 1;
              lStack_350 = CONCAT44(lStack_350._4_4_,uVar46);
              iVar29 = iVar29 + local_378;
              iVar47 = iStack_3dc;
              uVar15 = uStack_3e0;
            } while (uStack_3bc != uVar46);
          }
        } while (uVar15 != 0);
      }
    }
    puVar33 = (uint *)(puVar36 + lVar4);
    if (*(float *)(*(long *)(local_3c8 + 8) + 8) <= _LC19) goto LAB_0010f003;
    local_250 = local_250 + -1;
    puVar33 = (uint *)(puVar36 + lVar4);
    if (local_250 < 0) goto LAB_0010f003;
    uVar15 = auStack_24c[local_250];
  } while( true );
}



/* JPH::HeightFieldShape::sCollideConvexVsHeightField(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::HeightFieldShape::sCollideConvexVsHeightField
               (undefined8 param_1,HeightFieldShape *param_2)

{
  undefined8 *in_R9;
  long in_FS_OFFSET;
  Visitor aVStack_21d8 [8608];
  HeightFieldShape *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideConvexVsTriangles::CollideConvexVsTriangles
            ((CollideConvexVsTriangles *)aVStack_21d8,param_1);
  local_30 = *in_R9;
  local_38 = param_2;
  WalkHeightField<JPH::HeightFieldShape::sCollideConvexVsHeightField(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)::Visitor>
            (param_2,aVStack_21d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::sCollideSphereVsHeightField(JPH::Shape
   const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&)::Visitor>(JPH::HeightFieldShape::sCollideSphereVsHeightField(JPH::Shape
   const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&)::Visitor&) const */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::sCollideSphereVsHeightField(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  float fVar1;
  HeightFieldShape HVar2;
  HeightFieldShape HVar3;
  ushort uVar4;
  HeightFieldShape *this_00;
  long lVar5;
  byte bVar6;
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  char *pcVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  int *piVar30;
  float *pfVar31;
  uint *puVar32;
  uint *puVar33;
  undefined1 *puVar35;
  uint uVar37;
  undefined1 (*pauVar38) [16];
  ulong uVar39;
  undefined4 uVar40;
  float *pfVar41;
  undefined1 (*pauVar42) [16];
  Visitor *pVVar43;
  uint uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  long in_FS_OFFSET;
  bool bVar48;
  float fVar49;
  float fVar50;
  float fVar56;
  float fVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar82;
  float fVar83;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar85;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar84;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  float fVar95;
  float fVar99;
  float fVar100;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar101;
  float fVar105;
  float fVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  int iStack_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  uint uStack_3e4;
  uint uStack_3e0;
  int iStack_3dc;
  int local_3d8;
  uint uStack_3d4;
  uint local_3d0;
  uint local_3cc;
  Visitor *local_3c8;
  uint local_3c0;
  uint uStack_3bc;
  ulong uStack_3b8;
  uint local_3b0;
  uint uStack_3ac;
  float *pfStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  uint local_378;
  uint uStack_374;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  Visitor *pVStack_358;
  long lStack_350;
  undefined1 auStack_348 [16];
  uint uStack_32c;
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  uint uStack_308;
  undefined1 auStack_304 [12];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  int iStack_2e0;
  int iStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined8 uStack_2c8;
  float fStack_2c0;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined8 uStack_2a8;
  float fStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined8 uStack_288;
  float fStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  undefined8 uStack_268;
  float fStack_260;
  HeightFieldShape *local_258;
  int local_250;
  uint auStack_24c [2];
  undefined8 auStack_244 [64];
  long local_40;
  uint *puVar34;
  undefined1 *puVar36;
  
  puVar33 = &uStack_468;
  puVar34 = &uStack_468;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250 = 0;
  auStack_24c[0] = 0;
  puVar32 = &uStack_468;
  local_3c8 = param_1;
  if (*(int *)(this + 0x48) == 0) {
LAB_00110373:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)puVar32 + -8) = &UNK_001115ca;
    __stack_chk_fail();
  }
  uStack_468 = *(uint *)(this + 0x40) - 1;
  local_3b0 = *(uint *)(this + 0x44);
  local_378 = local_3b0 + 1;
  uVar14 = *(uint *)(this + 0x40) / local_3b0;
  local_3cc = uVar14 - 1;
  if (local_3cc == 0) {
    local_3c0 = 0;
    local_3d8 = 0;
  }
  else {
    uVar45 = 0x1f;
    if (local_3cc != 0) {
      for (; local_3cc >> uVar45 == 0; uVar45 = uVar45 - 1) {
      }
    }
    local_3d8 = (&sGridOffsets)[0x1f - (uVar45 ^ 0x1f)];
    local_3c0 = 0x20 - (uVar45 ^ 0x1f);
  }
  local_3d0 = uVar14 + 1 >> 1;
  uVar29 = (long)(int)(local_378 * local_378) * 0x10 + 0x10;
  puVar32 = &uStack_468;
  while (puVar34 != (uint *)((long)&uStack_468 - (uVar29 & 0xfffffffffffff000))) {
    puVar33 = (uint *)((long)puVar32 + -0x1000);
    *(undefined8 *)((long)puVar32 + -8) = *(undefined8 *)((long)puVar32 + -8);
    puVar34 = (uint *)((long)puVar32 + -0x1000);
    puVar32 = (uint *)((long)puVar32 + -0x1000);
  }
  uVar29 = (ulong)((uint)uVar29 & 0xfff);
  lVar5 = -uVar29;
  puVar35 = (undefined1 *)((long)puVar33 + lVar5);
  puVar36 = (undefined1 *)((long)puVar33 + lVar5);
  if (uVar29 != 0) {
    *(undefined8 *)((long)puVar33 + -8) = *(undefined8 *)((long)puVar33 + -8);
  }
  uVar29 = (long)(int)(local_378 * local_378) + 0x17;
  pfStack_3a8 = (float *)((ulong)((long)puVar33 + lVar5 + 0xf) & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)((long)puVar33 + lVar5);
  while (puVar36 != (undefined1 *)((long)puVar33 + (lVar5 - (uVar29 & 0xfffffffffffff000)))) {
    puVar35 = puVar11 + -0x1000;
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
    puVar36 = puVar11 + -0x1000;
    puVar11 = puVar11 + -0x1000;
  }
  uVar29 = (ulong)((uint)uVar29 & 0xff0);
  lVar5 = -uVar29;
  if (uVar29 != 0) {
    *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
  }
  fStack_3f8 = *(float *)(this + 0x20);
  fStack_408 = *(float *)(this + 0x24);
  fStack_418 = *(float *)(this + 0x28);
  uVar14 = 0;
  uStack_3b8 = (ulong)(puVar35 + lVar5 + 0xf) & 0xfffffffffffffff0;
  uStack_3e4 = local_3b0 * local_378;
  fStack_428 = *(float *)(this + 0x30);
  fStack_438 = *(float *)(this + 0x34);
  fStack_448 = *(float *)(this + 0x38);
  iStack_458 = uStack_468 - __LC27;
  iStack_454 = uStack_468 - _UNK_00116694;
  iStack_450 = uStack_468 - _UNK_00116698;
  iStack_44c = uStack_468 - _UNK_0011669c;
  uStack_464 = uStack_468;
  uStack_460 = uStack_468;
  uStack_45c = uStack_468;
  fStack_444 = fStack_448;
  fStack_440 = fStack_448;
  fStack_43c = fStack_448;
  fStack_434 = fStack_438;
  fStack_430 = fStack_438;
  fStack_42c = fStack_438;
  fStack_424 = fStack_428;
  fStack_420 = fStack_428;
  fStack_41c = fStack_428;
  fStack_414 = fStack_418;
  fStack_410 = fStack_418;
  fStack_40c = fStack_418;
  fStack_404 = fStack_408;
  fStack_400 = fStack_408;
  fStack_3fc = fStack_408;
  fStack_3f4 = fStack_3f8;
  fStack_3f0 = fStack_3f8;
  fStack_3ec = fStack_3f8;
  do {
    iVar46 = local_250;
    fVar1 = _LC2;
    uVar45 = uVar14 & 0x3fff;
    uVar15 = uVar14 >> 0xe & 0x3fff;
    uVar16 = uVar14 >> 0x1c;
    if (uVar16 < local_3c0) {
      bVar6 = (byte)(uVar14 >> 0x18);
      uVar14 = 1 << (bVar6 >> 4);
      if (local_3d0 < uVar14) {
        uVar14 = local_3d0;
      }
      auVar53 = *(undefined1 (*) [16])
                 ((ulong)(uVar14 * uVar15 + (&sGridOffsets)[uVar16] + uVar45) * 0x10 +
                 *(long *)(local_258 + 0x60));
      auVar7._10_2_ = 0;
      auVar7._0_10_ = auVar53._0_10_;
      auVar7._12_2_ = auVar53._6_2_;
      auVar8._8_2_ = auVar53._4_2_;
      auVar8._0_8_ = auVar53._0_8_;
      auVar8._10_4_ = auVar7._10_4_;
      auVar10._6_8_ = 0;
      auVar10._0_6_ = auVar8._8_6_;
      auVar9._4_2_ = auVar53._2_2_;
      auVar9._0_4_ = auVar53._0_4_;
      auVar9._6_8_ = SUB148(auVar10 << 0x40,6);
      uVar14 = local_3b0 << (((char)local_3c0 + -1) - (bVar6 >> 4) & 0x1f);
      iVar28 = uVar15 * 2;
      iVar18 = uVar45 * 2;
      auVar97._4_4_ = uVar14;
      auVar97._0_4_ = uVar14;
      auVar97._8_4_ = uVar14;
      auVar97._12_4_ = uVar14;
      iVar19 = (uVar16 + 1) * 0x10000000 + uVar15 * 0x8000 + iVar18;
      auVar69._0_4_ = __LC25 + iVar18;
      auVar69._4_4_ = _UNK_00116674 + iVar18;
      auVar69._8_4_ = _UNK_00116678 + iVar18;
      auVar69._12_4_ = _UNK_0011667c + iVar18;
      auVar93._0_4_ = iVar18 + __LC26;
      auVar93._4_4_ = iVar18 + _UNK_00116684;
      auVar93._8_4_ = iVar18 + _UNK_00116688;
      auVar93._12_4_ = iVar18 + _UNK_0011668c;
      fVar101 = (float)(auVar53._0_4_ & 0xffff) * fStack_438 + fStack_408;
      fVar105 = (float)auVar9._4_4_ * fStack_434 + fStack_404;
      fVar106 = (float)auVar8._8_4_ * fStack_430 + fStack_400;
      fVar94 = (float)(auVar7._10_4_ >> 0x10) * fStack_42c + fStack_3fc;
      fVar83 = (float)auVar53._8_2_ * fStack_438 + fStack_408;
      fVar89 = (float)auVar53._10_2_ * fStack_434 + fStack_404;
      fVar90 = (float)auVar53._12_2_ * fStack_430 + fStack_400;
      fVar91 = (float)auVar53._14_2_ * fStack_42c + fStack_3fc;
      uVar64 = (uint)((auVar93._8_8_ >> 0x20) * (ulong)uVar14);
      uVar84 = (uint)((auVar93._8_8_ & 0xffffffff) * (ulong)uVar14);
      uVar17 = -(uint)(iStack_458 < (int)(auVar93._0_4_ * uVar14 - __LC27));
      uVar63 = -(uint)(iStack_454 < (int)(auVar93._4_4_ * uVar14 - _UNK_00116694));
      uVar65 = -(uint)(iStack_450 < (int)(uVar84 - _UNK_00116698));
      uVar67 = -(uint)(iStack_44c < (int)(uVar64 - _UNK_0011669c));
      auVar78._0_4_ = __LC28 + iVar28;
      auVar78._4_4_ = _UNK_001166a4 + iVar28;
      auVar78._8_4_ = _UNK_001166a8 + iVar28;
      auVar78._12_4_ = _UNK_001166ac + iVar28;
      uVar45 = uVar14 * (iVar28 + __LC29);
      uVar21 = (iVar28 + _UNK_001166b4) * uVar14;
      uVar66 = (iVar28 + _UNK_001166b4) * uVar14;
      uVar20 = (uint)((auVar97._8_8_ & 0xffffffff) * (ulong)(uint)(iVar28 + _UNK_001166b8));
      uVar16 = -(uint)(iStack_458 < (int)(uVar45 - __LC27));
      uVar47 = -(uint)(iStack_454 < (int)(uVar21 - _UNK_00116694));
      uVar27 = -(uint)(iStack_450 < (int)(uVar20 - _UNK_00116698));
      uVar37 = -(uint)(iStack_44c < (int)(uVar66 - _UNK_0011669c));
      uVar44 = iVar19 + _UNK_001166cc;
      fVar1 = *(float *)(local_3c8 + 0x20);
      fVar49 = *(float *)(local_3c8 + 0x24);
      fVar58 = *(float *)(local_3c8 + 0x28);
      auVar87._0_8_ =
           CONCAT44(((float)(int)(auVar69._4_4_ * uVar14) * fStack_424 + fStack_3f4) * fVar1,
                    ((float)(int)(auVar69._0_4_ * uVar14) * fStack_428 + fStack_3f8) * fVar1);
      auVar87._8_4_ =
           ((float)(int)((auVar69._8_8_ & 0xffffffff) * (ulong)uVar14) * fStack_420 + fStack_3f0) *
           fVar1;
      auVar87._12_4_ =
           ((float)(int)((auVar69._8_8_ >> 0x20) * (ulong)uVar14) * fStack_41c + fStack_3ec) * fVar1
      ;
      auVar70._0_4_ =
           ((float)(int)(~uVar17 & auVar93._0_4_ * uVar14 | uStack_468 & uVar17) * fStack_428 +
           fStack_3f8) * fVar1;
      auVar70._4_4_ =
           ((float)(int)(~uVar63 & auVar93._4_4_ * uVar14 | uStack_464 & uVar63) * fStack_424 +
           fStack_3f4) * fVar1;
      auVar70._8_4_ =
           ((float)(int)(~uVar65 & uVar84 | uStack_460 & uVar65) * fStack_420 + fStack_3f0) * fVar1;
      auVar70._12_4_ =
           ((float)(int)(~uVar67 & uVar64 | uStack_45c & uVar67) * fStack_41c + fStack_3ec) * fVar1;
      auVar113._8_4_ = auVar87._8_4_;
      auVar113._0_8_ = auVar87._0_8_;
      auVar113._12_4_ = auVar87._12_4_;
      auVar93 = minps(auVar113,auVar70);
      auVar74 = maxps(auVar87,auVar70);
      auVar103._0_8_ = CONCAT44(fVar105 * fVar49,fVar101 * fVar49);
      auVar103._8_4_ = fVar106 * fVar49;
      auVar103._12_4_ = fVar94 * fVar49;
      auVar71._0_4_ = fVar49 * fVar83;
      auVar71._4_4_ = fVar49 * fVar89;
      auVar71._8_4_ = fVar49 * fVar90;
      auVar71._12_4_ = fVar49 * fVar91;
      auVar109._8_4_ = auVar103._8_4_;
      auVar109._0_8_ = auVar103._0_8_;
      auVar109._12_4_ = auVar103._12_4_;
      auVar53 = minps(auVar109,auVar71);
      auVar104 = maxps(auVar103,auVar71);
      auVar79._0_8_ =
           CONCAT44(((float)(int)(auVar78._4_4_ * uVar14) * fStack_444 + fStack_414) * fVar58,
                    ((float)(int)(auVar78._0_4_ * uVar14) * fStack_448 + fStack_418) * fVar58);
      auVar79._8_4_ =
           ((float)(int)((auVar78._8_8_ & 0xffffffff) * (ulong)uVar14) * fStack_440 + fStack_410) *
           fVar58;
      auVar79._12_4_ =
           ((float)(int)((auVar78._8_8_ >> 0x20) * (ulong)uVar14) * fStack_43c + fStack_40c) *
           fVar58;
      auVar108._0_4_ =
           ((float)(int)(~uVar16 & uVar45 | uStack_468 & uVar16) * fStack_448 + fStack_418) * fVar58
      ;
      auVar108._4_4_ =
           ((float)(int)(~uVar47 & uVar21 | uStack_464 & uVar47) * fStack_444 + fStack_414) * fVar58
      ;
      auVar108._8_4_ =
           ((float)(int)(~uVar27 & uVar20 | uStack_460 & uVar27) * fStack_440 + fStack_410) * fVar58
      ;
      auVar108._12_4_ =
           ((float)(int)(~uVar37 & uVar66 | uStack_45c & uVar37) * fStack_43c + fStack_40c) * fVar58
      ;
      auVar112._8_4_ = auVar79._8_4_;
      auVar112._0_8_ = auVar79._0_8_;
      auVar112._12_4_ = auVar79._12_4_;
      auVar97 = maxps(auVar79,auVar108);
      auVar108 = minps(auVar112,auVar108);
      fVar49 = *(float *)(local_3c8 + 0x70);
      fVar58 = *(float *)(local_3c8 + 0x74);
      fVar85 = *(float *)(local_3c8 + 0x78);
      auVar111._4_4_ = fVar58;
      auVar111._0_4_ = fVar58;
      auVar98._4_4_ = fVar49;
      auVar98._0_4_ = fVar49;
      auVar98._8_4_ = fVar49;
      auVar98._12_4_ = fVar49;
      auVar93 = maxps(auVar98,auVar93);
      auVar111._8_4_ = fVar58;
      auVar111._12_4_ = fVar58;
      auVar53 = maxps(auVar111,auVar53);
      auVar93 = minps(auVar93,auVar74);
      auVar88._4_4_ = fVar85;
      auVar88._0_4_ = fVar85;
      auVar88._8_4_ = fVar85;
      auVar88._12_4_ = fVar85;
      auVar74 = maxps(auVar88,auVar108);
      auVar53 = minps(auVar53,auVar104);
      fVar95 = auVar93._0_4_ - fVar49;
      fVar99 = auVar93._4_4_ - fVar49;
      fVar100 = auVar93._8_4_ - fVar49;
      fVar49 = auVar93._12_4_ - fVar49;
      auVar97 = minps(auVar74,auVar97);
      fVar50 = auVar53._0_4_ - fVar58;
      fVar56 = auVar53._4_4_ - fVar58;
      fVar57 = auVar53._8_4_ - fVar58;
      fVar58 = auVar53._12_4_ - fVar58;
      fVar86 = auVar97._0_4_ - fVar85;
      fVar72 = auVar97._4_4_ - fVar85;
      fVar82 = auVar97._8_4_ - fVar85;
      fVar85 = auVar97._12_4_ - fVar85;
      fVar1 = *(float *)(local_3c8 + 0x8c);
      auVar104._0_4_ =
           -(uint)(fVar50 * fVar50 + fVar95 * fVar95 + fVar86 * fVar86 <= fVar1 && fVar101 <= fVar83
                  );
      auVar104._4_4_ =
           -(uint)(fVar56 * fVar56 + fVar99 * fVar99 + fVar72 * fVar72 <= fVar1 && fVar105 <= fVar89
                  );
      auVar104._8_4_ =
           -(uint)(fVar57 * fVar57 + fVar100 * fVar100 + fVar82 * fVar82 <= fVar1 &&
                  fVar106 <= fVar90);
      auVar104._12_4_ =
           -(uint)(fVar58 * fVar58 + fVar49 * fVar49 + fVar85 * fVar85 <= fVar1 && fVar94 <= fVar91)
      ;
      uVar40 = movmskps(uVar15 * 0x8000,auVar104);
      uVar45 = auVar104._4_4_ >> 0x1f;
      uVar14 = iVar19 + _UNK_001166c8 & auVar104._8_4_ >> 0x1f | ~(auVar104._8_4_ >> 0x1f) & uVar44;
      auVar53._0_4_ = iVar19 + __LC30 & uVar45;
      auVar53._4_4_ = iVar19 + _UNK_001166c4 & uVar45;
      auVar53._8_4_ = uVar14 & uVar45;
      auVar53._12_4_ = uVar44 & uVar45;
      auVar80._0_4_ = ~uVar45 & iVar19 + __LC30;
      auVar80._4_4_ = ~uVar45 & uVar14;
      auVar80._8_4_ = ~uVar45 & uVar44;
      auVar80._12_4_ = ~uVar45 & uVar44;
      uVar45 = auVar104._0_4_ >> 0x1f;
      auVar53 = auVar53 | auVar80;
      uVar14 = auVar53._12_4_;
      auVar74._0_4_ = auVar53._0_4_ & uVar45;
      auVar74._4_4_ = auVar53._4_4_ & uVar45;
      auVar74._8_4_ = auVar53._8_4_ & uVar45;
      auVar74._12_4_ = uVar14 & uVar45;
      auVar81._0_4_ = ~uVar45 & auVar53._4_4_;
      auVar81._4_4_ = ~uVar45 & auVar53._8_4_;
      auVar81._8_4_ = ~uVar45 & uVar14;
      auVar81._12_4_ = ~uVar45 & uVar14;
      auStack_348 = auVar74 | auVar81;
      *(undefined8 *)(puVar35 + lVar5 + -8) = 0x1111dc;
      local_250 = __popcountdi2(uVar40);
      local_250 = local_250 + iVar46;
      *(undefined8 *)(auStack_24c + iVar46) = auStack_348._0_8_;
      *(undefined8 *)((long)auStack_244 + (long)iVar46 * 4) = auStack_348._8_8_;
    }
    else {
      lStack_368 = *(long *)(local_258 + 0x60);
      HVar2 = local_258[0x55];
      uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar14) & 0xffffffff00000001;
      uStack_398 = CONCAT44(uStack_398._4_4_,uVar15 * 2) & 0xffffffff00000002;
      uVar29 = (ulong)(uVar15 * 2 & 2 | uVar14 & 1);
      uStack_3d4 = local_3b0 * uVar45;
      uVar44 = local_3b0 * uVar15;
      uVar16 = local_3b0 + uStack_3d4;
      auStack_348._0_4_ = uVar16;
      iVar46 = local_3d8 + (uVar15 >> 1) * local_3d0;
      uVar27 = uVar45 >> 1;
      uVar47 = local_3b0 + uVar44;
      uStack_390 = CONCAT44(uStack_390._4_4_,uVar27);
      lVar22 = (ulong)(uVar27 + iVar46) * 0x10 + lStack_368;
      uVar4 = *(ushort *)(lVar22 + 8 + uVar29 * 2);
      fVar49 = (float)(byte)HVar2;
      uVar37 = (uint)*(ushort *)(lVar22 + uVar29 * 2);
      uVar20 = (uint)(byte)HVar2;
      if (uVar44 < uVar47) {
        uStack_360 = (ulong)(local_3b0 - 1) + 1;
        uStack_370 = CONCAT44(uStack_370._4_4_,uVar14) & 0xffffffff00003fff;
        uStack_380 = CONCAT44(uStack_380._4_4_,uVar44);
        pVStack_358 = (Visitor *)(uStack_360 * 0x10);
        uStack_388 = CONCAT44(uStack_388._4_4_,iVar46);
        lStack_350 = CONCAT44(lStack_350._4_4_,uVar47);
        uVar29 = uStack_3b8;
        pfVar31 = pfStack_3a8;
        uVar14 = uVar44;
        do {
          uVar39 = uVar29;
          if (uStack_3d4 < uVar16) {
            HVar3 = local_258[0x54];
            lVar22 = *(long *)(local_258 + 0x68);
            auVar53 = *(undefined1 (*) [16])(local_258 + 0x30);
            iVar28 = (int)uVar29;
            auVar97 = *(undefined1 (*) [16])(local_258 + 0x20);
            uVar39 = uVar29 + uStack_360;
            uVar45 = (*(int *)(local_258 + 0x40) * uVar14 + uStack_3d4) * (uint)(byte)HVar3;
            pfVar41 = pfVar31;
            do {
              iVar18 = (int)uVar29;
              uVar17 = (int)(uint)*(ushort *)(lVar22 + (ulong)(uVar45 >> 3)) >> ((byte)uVar45 & 7) &
                       uVar20;
              *(bool *)uVar29 = HVar2 == SUB41(uVar17,0);
              uVar29 = uVar29 + 1;
              uVar45 = uVar45 + (byte)HVar3;
              *pfVar41 = (float)((uStack_3d4 - iVar28) + iVar18) * auVar53._0_4_ + auVar97._0_4_;
              pfVar41[1] = (((float)uVar17 + fVar1) * ((float)(int)(uVar4 - uVar37) / fVar49) +
                           (float)uVar37) * auVar53._4_4_ + auVar97._4_4_;
              pfVar41[2] = (float)uVar14 * auVar53._8_4_ + auVar97._8_4_;
              pfVar41[3] = (float)uVar14 * auVar53._12_4_ + auVar97._12_4_;
              pfVar41 = pfVar41 + 4;
            } while (uVar29 != uVar39);
            pfVar31 = pfVar31 + uStack_360 * 4;
          }
          pfVar31 = pfVar31 + 4;
          uVar29 = uVar39 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar47 != uVar14);
        uVar45 = (uint)uStack_370;
        uStack_374 = uVar15;
      }
      fVar1 = _LC2;
      iStack_2e0 = 1;
      if (uVar45 < local_3cc) {
        pfVar31 = pfStack_3a8 + (ulong)local_3b0 * 4;
        lVar22 = uStack_3b8 + local_3b0;
        uVar29 = (ulong)(uVar45 + 1 & 1 | (uint)uStack_398);
        lVar25 = (ulong)((uVar45 + 1 >> 1) + iVar46) * 0x10 + lStack_368;
        uVar4 = *(ushort *)(lVar25 + 8 + uVar29 * 2);
        uVar14 = (uint)*(ushort *)(lVar25 + uVar29 * 2);
        if (uVar44 < uVar47) {
          pVStack_358 = *(Visitor **)(local_258 + 0x68);
          iVar46 = *(int *)(local_258 + 0x40);
          uVar29 = (ulong)local_378;
          HVar3 = local_258[0x54];
          fVar58 = *(float *)(local_258 + 0x30);
          fVar85 = *(float *)(local_258 + 0x34);
          fVar50 = *(float *)(local_258 + 0x38);
          fVar56 = *(float *)(local_258 + 0x3c);
          fVar57 = *(float *)(local_258 + 0x20);
          fVar86 = *(float *)(local_258 + 0x24);
          fVar72 = *(float *)(local_258 + 0x28);
          fVar82 = *(float *)(local_258 + 0x2c);
          lStack_350 = uVar29 * 0x10;
          uVar17 = (iVar46 * uVar44 + uVar16) * (uint)(byte)HVar3;
          uVar37 = uVar44;
          do {
            uVar39 = (ulong)uVar37;
            uVar21 = (int)(uint)*(ushort *)(pVStack_358 + (uVar17 >> 3)) >> ((byte)uVar17 & 7) &
                     uVar20;
            *(bool *)lVar22 = HVar2 == SUB41(uVar21,0);
            uVar37 = uVar37 + 1;
            lVar22 = lVar22 + uVar29;
            uVar17 = uVar17 + iVar46 * (uint)(byte)HVar3;
            *pfVar31 = (float)uVar16 * fVar58 + fVar57;
            pfVar31[1] = (((float)uVar21 + fVar1) * ((float)(int)(uVar4 - uVar14) / fVar49) +
                         (float)uVar14) * fVar85 + fVar86;
            pfVar31[2] = (float)uVar39 * fVar50 + fVar72;
            pfVar31[3] = (float)uVar39 * fVar56 + fVar82;
            pfVar31 = pfVar31 + uVar29 * 4;
          } while (uVar47 != uVar37);
        }
        iStack_2e0 = 0;
      }
      fVar1 = _LC2;
      if (uVar15 < local_3cc) {
        pVStack_358 = (Visitor *)(pfStack_3a8 + (ulong)uStack_3e4 * 4);
        lVar22 = uStack_3b8 + uStack_3e4;
        uVar14 = (uVar15 + 1) * 2;
        uStack_360 = CONCAT44(uStack_360._4_4_,uVar14) & 0xffffffff00000002;
        iVar46 = (uVar15 + 1 >> 1) * local_3d0 + local_3d8;
        uVar29 = (ulong)((uint)uStack_3a0 | uVar14 & 2);
        uStack_370 = CONCAT44(uStack_370._4_4_,iVar46);
        lVar25 = (ulong)(iVar46 + uVar27) * 0x10 + lStack_368;
        uVar4 = *(ushort *)(lVar25 + 8 + uVar29 * 2);
        uVar14 = (uint)*(ushort *)(lVar25 + uVar29 * 2);
        if (uStack_3d4 < uVar16) {
          lStack_350 = *(long *)(local_258 + 0x68);
          HVar3 = local_258[0x54];
          fVar58 = *(float *)(local_258 + 0x30);
          fVar85 = *(float *)(local_258 + 0x34);
          fVar50 = *(float *)(local_258 + 0x38);
          fVar56 = *(float *)(local_258 + 0x3c);
          fVar57 = *(float *)(local_258 + 0x20);
          fVar86 = *(float *)(local_258 + 0x24);
          fVar72 = *(float *)(local_258 + 0x28);
          fVar82 = *(float *)(local_258 + 0x2c);
          iVar28 = (int)lVar22;
          uVar15 = (*(int *)(local_258 + 0x40) * uVar47 + uStack_3d4) * (uint)(byte)HVar3;
          lVar26 = (ulong)(local_3b0 - 1) + 1;
          lVar25 = lVar22 + lVar26;
          pVVar43 = pVStack_358;
          do {
            iVar18 = (int)lVar22;
            uVar27 = (int)(uint)*(ushort *)(lStack_350 + (ulong)(uVar15 >> 3)) >> ((byte)uVar15 & 7)
                     & uVar20;
            *(bool *)lVar22 = HVar2 == SUB41(uVar27,0);
            lVar22 = lVar22 + 1;
            uVar15 = uVar15 + (byte)HVar3;
            *(float *)pVVar43 = (float)((uStack_3d4 - iVar28) + iVar18) * fVar58 + fVar57;
            *(float *)(pVVar43 + 4) =
                 (((float)uVar27 + fVar1) * ((float)(int)(uVar4 - uVar14) / fVar49) + (float)uVar14)
                 * fVar85 + fVar86;
            *(float *)(pVVar43 + 8) = (float)uVar47 * fVar50 + fVar72;
            *(float *)(pVVar43 + 0xc) = (float)uVar47 * fVar56 + fVar82;
            pVVar43 = pVVar43 + 0x10;
          } while (lVar22 != lVar25);
          pVStack_358 = pVStack_358 + lVar26 * 0x10;
          lVar22 = lVar25;
          uStack_374 = uVar45;
        }
        fVar1 = _LC2;
        if (uVar45 < local_3cc) {
          uVar29 = (ulong)(uVar45 + 1 & 1 | (uint)uStack_360);
          lVar25 = lStack_368 + (ulong)((uVar45 + 1 >> 1) + iVar46) * 0x10;
          uVar4 = *(ushort *)(lVar25 + 8 + uVar29 * 2);
          uVar45 = (uint)*(ushort *)(lVar25 + uVar29 * 2);
          uVar14 = (*(int *)(local_258 + 0x40) * uVar47 + uVar16) * (uint)(byte)local_258[0x54];
          uVar20 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar14 >> 3)) >>
                   ((byte)uVar14 & 7) & uVar20;
          *(bool *)lVar22 = HVar2 == SUB41(uVar20,0);
          fVar58 = *(float *)(local_258 + 0x34);
          fVar85 = *(float *)(local_258 + 0x38);
          fVar50 = *(float *)(local_258 + 0x3c);
          fVar56 = *(float *)(local_258 + 0x24);
          fVar57 = *(float *)(local_258 + 0x28);
          fVar86 = *(float *)(local_258 + 0x2c);
          *(float *)pVStack_358 =
               (float)uVar16 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
          *(float *)(pVStack_358 + 4) =
               (((float)uVar20 + fVar1) * ((float)(int)(uVar4 - uVar45) / fVar49) + (float)uVar45) *
               fVar58 + fVar56;
          *(float *)(pVStack_358 + 8) = (float)uVar47 * fVar85 + fVar57;
          *(float *)(pVStack_358 + 0xc) = (float)uVar47 * fVar50 + fVar86;
        }
      }
      else {
        uVar47 = uVar47 - 1;
      }
      lVar22 = 0;
      uStack_2e4 = local_3b0 >> 1;
      lStack_350 = CONCAT44(lStack_350._4_4_,uVar44);
      auStack_304 = SUB1612((undefined1  [16])0x0,4);
      uStack_308 = uStack_2e4;
      iStack_2dc = uVar47 - (uVar44 + uStack_2e4);
      auStack_318._4_4_ = uStack_2e4;
      auStack_318._0_4_ = uStack_2e4;
      iStack_2e0 = (local_3b0 - uStack_2e4) - iStack_2e0;
      auStack_304._4_4_ = iStack_2e0;
      auStack_304._8_4_ = uStack_2e4;
      piVar30 = (int *)auStack_318;
      auStack_318._8_8_ = 0;
      auStack_318 = auStack_318 << 0x40;
      uStack_2f8 = 0;
      uStack_2f4 = CONCAT44(uStack_2e4,uStack_2e4);
      uStack_2ec = CONCAT44(uStack_2e4,iStack_2dc);
      do {
        uVar29 = (ulong)(local_378 * piVar30[1] + *piVar30);
        uVar14 = piVar30[2];
        pauVar42 = (undefined1 (*) [16])(pfStack_3a8 + uVar29 * 4);
        pcVar23 = (char *)(uVar29 + uStack_3b8);
        if (piVar30[3] == -1) {
          auVar51._8_4_ = _LC15;
          auVar51._0_8_ = CONCAT44(_LC15,_LC15);
          auVar51._12_4_ = _LC15;
          auVar59._8_4_ = _LC17;
          auVar59._0_8_ = CONCAT44(_LC17,_LC17);
          auVar59._12_4_ = _LC17;
        }
        else {
          auStack_348._0_8_ = lVar22;
          auVar51._8_4_ = _LC15;
          auVar51._0_8_ = CONCAT44(_LC15,_LC15);
          auVar51._12_4_ = _LC15;
          auVar59._8_4_ = _LC17;
          auVar59._0_8_ = CONCAT44(_LC17,_LC17);
          auVar59._12_4_ = _LC17;
          iVar46 = 0;
          do {
            pcVar12 = pcVar23 + (ulong)uVar14 + 1;
            pauVar38 = pauVar42;
            if (uVar14 != 0xffffffff) {
              do {
                if (*pcVar23 == '\0') {
                  auVar59 = minps(auVar59,*pauVar38);
                  auVar51 = maxps(auVar51,*pauVar38);
                }
                pcVar23 = pcVar23 + 1;
                pauVar38 = pauVar38 + 1;
              } while (pcVar23 != pcVar12);
              pauVar42 = pauVar42 + (ulong)uVar14 + 1;
              pcVar23 = pcVar12;
            }
            pauVar42 = pauVar42 + (local_3b0 - uVar14);
            pcVar23 = pcVar23 + (local_3b0 - uVar14);
            bVar48 = piVar30[3] != iVar46;
            iVar46 = iVar46 + 1;
          } while (bVar48);
        }
        *(undefined1 (*) [16])((long)&fStack_2d8 + lVar22) = auVar59;
        piVar30 = piVar30 + 4;
        *(undefined1 (*) [16])((long)&fStack_298 + lVar22) = auVar51;
        lVar22 = lVar22 + 0x10;
      } while (lVar22 != 0x40);
      fVar1 = *(float *)(local_3c8 + 0x20);
      fVar49 = *(float *)(local_3c8 + 0x24);
      fVar58 = *(float *)(local_3c8 + 0x28);
      fVar89 = (float)((ulong)uStack_2c8 >> 0x20);
      fVar91 = (float)((ulong)uStack_2a8 >> 0x20);
      fVar86 = (float)((ulong)uStack_288 >> 0x20);
      auVar73._0_8_ = CONCAT44((float)uStack_2c8 * fVar1,fStack_2d8 * fVar1);
      auVar73._8_4_ = fStack_2b8 * fVar1;
      auVar73._12_4_ = (float)uStack_2a8 * fVar1;
      fVar90 = (float)((ulong)uStack_268 >> 0x20);
      auVar60._0_4_ = fStack_298 * fVar1;
      auVar60._4_4_ = (float)uStack_288 * fVar1;
      auVar60._8_4_ = fStack_278 * fVar1;
      auVar60._12_4_ = (float)uStack_268 * fVar1;
      auStack_348._0_4_ = uVar44;
      auVar107._8_4_ = auVar73._8_4_;
      auVar107._0_8_ = auVar73._0_8_;
      auVar107._12_4_ = auVar73._12_4_;
      auVar108 = minps(auVar107,auVar60);
      auVar74 = maxps(auVar73,auVar60);
      auVar92._0_8_ = CONCAT44(fVar89 * fVar49,fStack_2d4 * fVar49);
      auVar92._8_4_ = fStack_2b4 * fVar49;
      auVar92._12_4_ = fVar91 * fVar49;
      auVar61._0_4_ = fVar49 * fStack_294;
      auVar61._4_4_ = fVar49 * fVar86;
      auVar61._8_4_ = fVar49 * fStack_274;
      auVar61._12_4_ = fVar49 * fVar90;
      auVar96._8_4_ = auVar92._8_4_;
      auVar96._0_8_ = auVar92._0_8_;
      auVar96._12_4_ = auVar92._12_4_;
      auVar97 = minps(auVar96,auVar61);
      auVar93 = maxps(auVar92,auVar61);
      auVar52._0_8_ = CONCAT44(fStack_2c0 * fVar58,fStack_2d0 * fVar58);
      auVar52._8_4_ = fStack_2b0 * fVar58;
      auVar52._12_4_ = fStack_2a0 * fVar58;
      auVar68._0_4_ = fStack_290 * fVar58;
      auVar68._4_4_ = fStack_280 * fVar58;
      auVar68._8_4_ = fStack_270 * fVar58;
      auVar68._12_4_ = fStack_260 * fVar58;
      auVar110._8_4_ = auVar52._8_4_;
      auVar110._0_8_ = auVar52._0_8_;
      auVar110._12_4_ = auVar52._12_4_;
      auVar111 = minps(auVar110,auVar68);
      auVar53 = maxps(auVar52,auVar68);
      fVar49 = *(float *)(local_3c8 + 0x70);
      fVar58 = *(float *)(local_3c8 + 0x74);
      fVar85 = *(float *)(local_3c8 + 0x78);
      auVar75._4_4_ = fVar85;
      auVar75._0_4_ = fVar85;
      auVar102._4_4_ = fVar49;
      auVar102._0_4_ = fVar49;
      auVar102._8_4_ = fVar49;
      auVar102._12_4_ = fVar49;
      auVar54._4_4_ = fVar58;
      auVar54._0_4_ = fVar58;
      auVar54._8_4_ = fVar58;
      auVar54._12_4_ = fVar58;
      auVar108 = maxps(auVar102,auVar108);
      auVar97 = maxps(auVar54,auVar97);
      auVar108 = minps(auVar108,auVar74);
      auVar75._8_4_ = fVar85;
      auVar75._12_4_ = fVar85;
      auVar97 = minps(auVar97,auVar93);
      auVar74 = maxps(auVar75,auVar111);
      fVar50 = auVar97._0_4_ - fVar58;
      fVar56 = auVar97._4_4_ - fVar58;
      fVar57 = auVar97._8_4_ - fVar58;
      fVar58 = auVar97._12_4_ - fVar58;
      fVar101 = auVar108._0_4_ - fVar49;
      fVar105 = auVar108._4_4_ - fVar49;
      fVar106 = auVar108._8_4_ - fVar49;
      fVar49 = auVar108._12_4_ - fVar49;
      auVar53 = minps(auVar74,auVar53);
      fVar72 = auVar53._0_4_ - fVar85;
      fVar82 = auVar53._4_4_ - fVar85;
      fVar83 = auVar53._8_4_ - fVar85;
      fVar85 = auVar53._12_4_ - fVar85;
      fVar1 = *(float *)(local_3c8 + 0x8c);
      auVar55._0_4_ =
           -(uint)(fStack_2d4 <= fStack_294 &&
                  fVar50 * fVar50 + fVar101 * fVar101 + fVar72 * fVar72 <= fVar1);
      auVar55._4_4_ =
           -(uint)(fVar89 <= fVar86 &&
                  fVar56 * fVar56 + fVar105 * fVar105 + fVar82 * fVar82 <= fVar1);
      auVar55._8_4_ =
           -(uint)(fStack_2b4 <= fStack_274 &&
                  fVar57 * fVar57 + fVar106 * fVar106 + fVar83 * fVar83 <= fVar1);
      auVar55._12_4_ =
           -(uint)(fVar91 <= fVar90 && fVar58 * fVar58 + fVar49 * fVar49 + fVar85 * fVar85 <= fVar1)
      ;
      uVar40 = movmskps((int)pauVar42,auVar55);
      uVar14 = auVar55._8_4_ >> 0x1f;
      uVar45 = uVar14 & __LC49 | ~uVar14 & __LC51;
      uVar15 = uVar14 & _UNK_00116668 | ~uVar14 & _UNK_00116728;
      uVar16 = uVar14 & _UNK_0011666c | ~uVar14 & _UNK_0011672c;
      uVar47 = auVar55._4_4_ >> 0x1f;
      auVar62._0_4_ = uVar45 & uVar47;
      auVar62._4_4_ = (uVar14 & _UNK_00116664 | ~uVar14 & _UNK_00116724) & uVar47;
      auVar62._8_4_ = uVar15 & uVar47;
      auVar62._12_4_ = uVar16 & uVar47;
      auVar76._0_4_ = ~uVar47 & uVar45;
      auVar76._4_4_ = ~uVar47 & uVar15;
      auVar76._8_4_ = ~uVar47 & uVar16;
      auVar76._12_4_ = ~uVar47 & uVar16;
      uVar45 = auVar55._0_4_ >> 0x1f;
      auVar62 = auVar62 | auVar76;
      uVar14 = auVar62._12_4_;
      auStack_328._0_4_ = auVar62._0_4_ & uVar45;
      auStack_328._4_4_ = auVar62._4_4_ & uVar45;
      auStack_328._8_4_ = auVar62._8_4_ & uVar45;
      auStack_328._12_4_ = uVar14 & uVar45;
      auVar77._0_4_ = ~uVar45 & auVar62._4_4_;
      auVar77._4_4_ = ~uVar45 & auVar62._8_4_;
      auVar77._8_4_ = ~uVar45 & uVar14;
      auVar77._12_4_ = ~uVar45 & uVar14;
      auStack_328 = auStack_328 | auVar77;
      *(undefined8 *)(puVar35 + lVar5 + -8) = 0x110b42;
      uVar14 = __popcountdi2(CONCAT44((int)((ulong)pauVar42 >> 0x20),uVar40));
      if (uVar14 != 0) {
        iVar46 = auStack_348._0_4_;
        auStack_348._0_4_ = local_3b0 + 2;
        do {
          uVar14 = uVar14 - 1;
          lVar22 = (ulong)*(uint *)(auStack_328 + (ulong)uVar14 * 4) * 0x10;
          uVar45 = iVar46 + *(int *)(auStack_318 + lVar22 + 4);
          uVar15 = *(int *)(auStack_318 + lVar22) + uStack_3d4;
          lStack_350 = CONCAT44(lStack_350._4_4_,uVar45);
          uVar16 = *(int *)(auStack_318 + lVar22 + 8) + uVar15;
          if (uVar45 < *(int *)(auStack_318 + lVar22 + 0xc) + uVar45) {
            iVar28 = *(int *)(auStack_318 + lVar22 + 4) * local_378 - uStack_3d4;
            uVar29 = uStack_3b8;
            pVVar43 = local_3c8;
            uStack_3e0 = uVar14;
            iStack_3dc = iVar46;
            uStack_3bc = *(int *)(auStack_318 + lVar22 + 0xc) + uVar45;
            do {
              uVar14 = uVar15;
              if (uVar15 < uVar16) {
                do {
                  uStack_3ac = uVar15;
                  pcVar23 = (char *)(uVar29 + (long)(int)(uVar14 + iVar28));
                  if (*pcVar23 == '\0') {
                    uVar39 = (ulong)(uint)auStack_348._0_4_;
                    if (pcVar23[uVar39] == '\0') {
                      pfVar31 = pfStack_3a8 + (long)(int)(uVar14 + iVar28) * 4;
                      uVar24 = (ulong)local_378;
                      if (pcVar23[uVar24] != '\0') goto LAB_00110db0;
                      uStack_388 = *(undefined8 *)pfVar31;
                      uVar45 = 0;
                      lStack_368 = *(long *)(pfVar31 + uVar24 * 4);
                      uStack_398 = *(ulong *)(pfVar31 + (uVar24 * 2 + 1) * 2);
                      uStack_390 = *(undefined8 *)(pfVar31 + 2);
                      uStack_370 = *(ulong *)(pfVar31 + uVar39 * 4);
                      uStack_3a0 = *(ulong *)(pfVar31 + (uVar39 * 2 + 1) * 2);
                      uStack_374 = uVar16;
                      while( true ) {
                        this_00 = *(HeightFieldShape **)(pVVar43 + 0x90);
                        iVar18 = 1;
                        iVar46 = *(int *)(this_00 + 0x40);
                        uVar15 = iVar46 - 1;
                        if (uVar15 != 0) {
                          iVar18 = 0x1f;
                          if (uVar15 != 0) {
                            for (; uVar15 >> iVar18 == 0; iVar18 = iVar18 + -1) {
                            }
                          }
                          iVar18 = (int)(1L << ((char)iVar18 * '\x02' + 3U & 0x3f)) + -1;
                        }
                        uStack_360 = CONCAT44(uStack_360._4_4_,uVar45);
                        uStack_32c = uVar45 + (iVar46 * (uint)lStack_350 + uVar14) * 2 <<
                                     ((byte)*(undefined4 *)(pVVar43 + 0x9c) & 0x1f) |
                                     ~(iVar18 << ((byte)*(undefined4 *)(pVVar43 + 0x9c) & 0x1f)) &
                                     *(uint *)(pVVar43 + 0x98);
                        *(undefined8 *)(puVar35 + lVar5 + -8) = 0x110d2e;
                        uStack_380 = uVar29;
                        pVStack_358 = pVVar43;
                        uVar13 = GetEdgeFlags(this_00,uVar14,(uint)lStack_350,uVar45);
                        *(undefined8 *)(puVar35 + lVar5 + -8) = 0x110d74;
                        JPH::CollideSphereVsTriangles::Collide
                                  (uStack_388,uStack_390,lStack_368,uStack_398,uStack_370,uStack_3a0
                                   ,pVStack_358,uVar13,&uStack_32c);
                        puVar32 = (uint *)(puVar35 + lVar5);
                        if (*(float *)(*(long *)(pVStack_358 + 8) + 8) <= _LC19) goto LAB_00110373;
                        pVVar43 = pVStack_358;
                        uVar29 = uStack_380;
                        uVar16 = uStack_374;
                        if ((uint)uStack_360 == 1) break;
LAB_00110db0:
                        if (pcVar23[1] != '\0') break;
                        uStack_388 = *(undefined8 *)pfVar31;
                        uStack_370 = *(ulong *)(pfVar31 + 4);
                        uVar45 = 1;
                        uStack_390 = *(undefined8 *)(pfVar31 + 2);
                        lStack_368 = *(long *)(pfVar31 + uVar39 * 4);
                        uStack_398 = *(ulong *)(pfVar31 + (uVar39 * 2 + 1) * 2);
                        uStack_3a0 = *(ulong *)(pfVar31 + 6);
                        uStack_374 = uVar16;
                      }
                    }
                  }
                  uVar14 = uVar14 + 1;
                  uVar15 = uStack_3ac;
                } while (uVar16 != uVar14);
              }
              uVar45 = (uint)lStack_350 + 1;
              lStack_350 = CONCAT44(lStack_350._4_4_,uVar45);
              iVar28 = iVar28 + local_378;
              iVar46 = iStack_3dc;
              uVar14 = uStack_3e0;
            } while (uStack_3bc != uVar45);
          }
        } while (uVar14 != 0);
      }
    }
    puVar32 = (uint *)(puVar35 + lVar5);
    if (*(float *)(*(long *)(local_3c8 + 8) + 8) <= _LC19) goto LAB_00110373;
    local_250 = local_250 + -1;
    puVar32 = (uint *)(puVar35 + lVar5);
    if (local_250 < 0) goto LAB_00110373;
    uVar14 = auStack_24c[local_250];
  } while( true );
}



/* JPH::HeightFieldShape::sCollideSphereVsHeightField(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::HeightFieldShape::sCollideSphereVsHeightField
               (undefined8 param_1,HeightFieldShape *param_2)

{
  undefined8 *in_R9;
  long in_FS_OFFSET;
  Visitor aVStack_c8 [144];
  HeightFieldShape *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::CollideSphereVsTriangles::CollideSphereVsTriangles
            ((CollideSphereVsTriangles *)aVStack_c8,param_1);
  local_30 = *in_R9;
  local_38 = param_2;
  WalkHeightField<JPH::HeightFieldShape::sCollideSphereVsHeightField(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)::Visitor>
            (param_2,aVStack_c8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::HeightFieldShape::GetTrianglesStart(undefined8 param_1,HSGetTrianglesContext *param_2)

{
  HSGetTrianglesContext::HSGetTrianglesContext(param_2,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HeightFieldShape::sRegister() */

void JPH::HeightFieldShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = &sConvexSubShapeTypes;
  _DAT_001181e8 = sRegister()::{lambda()#1}::_FUN;
  _DAT_001181f0 = (undefined4)Color::sPurple;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x1ba;
    lVar4 = (ulong)bVar1 * 0x110;
    *(code **)(JPH::Shape::CollectTransformedShapes + lVar4) = sCollideConvexVsHeightField;
    *(code **)(JPH::Shape::GetStatsRecursive + lVar4) = sCastConvexVsHeightField;
    (&CollisionDispatch::sCollideShape)[lVar2] = JPH::CollisionDispatch::sReversedCollideShape;
    (&CollisionDispatch::sCastShape)[lVar2] = JPH::CollisionDispatch::sReversedCastShape;
  } while (pbVar3 != (byte *)&DVec3::cTrue);
  _CollectTransformedShapes = sCollideSphereVsHeightField;
  _GetStatsRecursive = sCastSphereVsHeightField;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void 
   JPH::HeightFieldShape::WalkHeightField<JPH::HeightFieldShape::CollideSoftBodyVertices(JPH::Mat44
   const&, JPH::Vec3, JPH::CollideSoftBodyVertexIterator const&, unsigned int, int)
   const::Visitor>(JPH::HeightFieldShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const::Visitor&) const [clone
   .constprop.0] */

void __thiscall
JPH::HeightFieldShape::
WalkHeightField<JPH::HeightFieldShape::CollideSoftBodyVertices(JPH::Mat44_const&,JPH::Vec3,JPH::CollideSoftBodyVertexIterator_const&,unsigned_int,int)const::Visitor>
          (HeightFieldShape *this,Visitor *param_1)

{
  Visitor *pVVar1;
  HeightFieldShape HVar2;
  HeightFieldShape HVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [14];
  undefined1 auVar16 [16];
  undefined1 *puVar17;
  char *pcVar18;
  undefined4 uVar19;
  uint uVar20;
  char *pcVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 *puVar35;
  uint uVar37;
  uint uVar38;
  int *piVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  ulong uVar42;
  uint uVar43;
  undefined1 (*pauVar44) [16];
  undefined8 *puVar45;
  undefined4 uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  int iVar50;
  long lVar51;
  int iVar52;
  long in_FS_OFFSET;
  byte bVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [8];
  float fVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar73;
  float fVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar75;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined8 uVar81;
  float fVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar86;
  float fVar88;
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  uint uVar95;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auStack_4d8 [12];
  uint uStack_4cc;
  int iStack_4c8;
  int iStack_4c4;
  int iStack_4c0;
  int iStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  uint local_458;
  uint uStack_454;
  uint uStack_450;
  uint uStack_44c;
  ulong uStack_448;
  uint uStack_440;
  int local_43c;
  int iStack_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  ulong uStack_428;
  uint local_420;
  uint local_41c;
  uint uStack_418;
  int iStack_414;
  uint uStack_410;
  int iStack_40c;
  uint uStack_408;
  uint uStack_404;
  undefined1 (*pauStack_400) [16];
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined1 auStack_3e8 [16];
  undefined1 auStack_3d8 [16];
  int iStack_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  char *pcStack_3a0;
  undefined8 uStack_398;
  float fStack_390;
  float fStack_38c;
  undefined8 uStack_388;
  float fStack_380;
  float fStack_37c;
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [8];
  undefined8 uStack_360;
  undefined4 uStack_34c;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [16];
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined4 uStack_2f8;
  undefined8 uStack_2f4;
  undefined8 uStack_2ec;
  uint uStack_2e4;
  uint uStack_2e0;
  int iStack_2dc;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_278;
  float fStack_274;
  undefined4 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  HeightFieldShape *local_258;
  undefined1 local_250 [12];
  undefined8 auStack_244 [64];
  long local_40;
  undefined1 *puVar34;
  undefined1 *puVar36;
  
  bVar53 = 0;
  puVar32 = auStack_4d8;
  puVar33 = auStack_4d8;
  puVar34 = auStack_4d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_258 = this;
  local_250._0_8_ = 0;
  if (*(int *)(this + 0x48) != 0) {
    local_41c = *(uint *)(this + 0x44);
    local_458 = *(uint *)(this + 0x40) - 1;
    local_420 = local_41c + 1;
    uVar20 = *(uint *)(this + 0x40) / local_41c;
    local_430 = uVar20 - 1;
    if (local_430 == 0) {
      local_43c = 0;
      local_42c = 0;
    }
    else {
      uVar49 = 0x1f;
      if (local_430 != 0) {
        for (; local_430 >> uVar49 == 0; uVar49 = uVar49 - 1) {
        }
      }
      local_42c = 0x20 - (uVar49 ^ 0x1f);
      local_43c = (&sGridOffsets)[0x1f - (uVar49 ^ 0x1f)];
    }
    local_434 = uVar20 + 1 >> 1;
    uVar28 = (long)(int)(local_420 * local_420) * 0x10 + 0x10;
    puVar35 = auStack_4d8;
    while (puVar34 != auStack_4d8 + -(uVar28 & 0xfffffffffffff000)) {
      puVar33 = puVar35 + -0x1000;
      *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
      puVar34 = puVar35 + -0x1000;
      puVar35 = puVar35 + -0x1000;
    }
    uVar28 = (ulong)((uint)uVar28 & 0xfff);
    lVar7 = -uVar28;
    puVar35 = puVar33 + lVar7;
    puVar36 = puVar33 + lVar7;
    if (uVar28 != 0) {
      *(undefined8 *)(puVar33 + -8) = *(undefined8 *)(puVar33 + -8);
    }
    uVar28 = (long)(int)(local_420 * local_420) + 0x17;
    pauStack_400 = (undefined1 (*) [16])((ulong)(puVar33 + lVar7 + 0xf) & 0xfffffffffffffff0);
    puVar17 = puVar33 + lVar7;
    while (puVar36 != puVar33 + (lVar7 - (uVar28 & 0xfffffffffffff000))) {
      puVar35 = puVar17 + -0x1000;
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      puVar36 = puVar17 + -0x1000;
      puVar17 = puVar17 + -0x1000;
    }
    uVar28 = (ulong)((uint)uVar28 & 0xff0);
    lVar7 = -uVar28;
    puVar32 = puVar35 + lVar7;
    if (uVar28 != 0) {
      *(undefined8 *)(puVar35 + -8) = *(undefined8 *)(puVar35 + -8);
    }
    fStack_468 = *(float *)(this + 0x20);
    fStack_478 = *(float *)(this + 0x24);
    fStack_488 = *(float *)(this + 0x28);
    uVar20 = 0;
    uStack_428 = (ulong)(puVar35 + lVar7 + 0xf) & 0xfffffffffffffff0;
    fStack_498 = *(float *)(this + 0x30);
    fStack_4a8 = *(float *)(this + 0x34);
    fStack_4b8 = *(float *)(this + 0x38);
    uStack_440 = local_41c >> 1;
    uStack_448 = CONCAT44(uStack_440,uStack_440);
    iStack_438 = local_41c - uStack_440;
    iStack_4c8 = local_458 - __LC27;
    iStack_4c4 = local_458 - _UNK_00116694;
    iStack_4c0 = local_458 - _UNK_00116698;
    iStack_4bc = local_458 - _UNK_0011669c;
    fVar56 = *(float *)(param_1 + 0xd4);
    iVar31 = 0;
    uStack_4cc = local_41c * local_420;
    fStack_4b4 = fStack_4b8;
    fStack_4b0 = fStack_4b8;
    fStack_4ac = fStack_4b8;
    fStack_4a4 = fStack_4a8;
    fStack_4a0 = fStack_4a8;
    fStack_49c = fStack_4a8;
    fStack_494 = fStack_498;
    fStack_490 = fStack_498;
    fStack_48c = fStack_498;
    fStack_484 = fStack_488;
    fStack_480 = fStack_488;
    fStack_47c = fStack_488;
    fStack_474 = fStack_478;
    fStack_470 = fStack_478;
    fStack_46c = fStack_478;
    fStack_464 = fStack_468;
    fStack_460 = fStack_468;
    fStack_45c = fStack_468;
    uStack_454 = local_458;
    uStack_450 = local_458;
    uStack_44c = local_458;
    do {
      fVar88 = _LC2;
      uVar37 = uVar20 >> 0x1c;
      uVar49 = uVar20 & 0x3fff;
      uVar22 = uVar20 >> 0xe & 0x3fff;
      if (uVar37 < local_42c) {
        bVar8 = (byte)(uVar20 >> 0x18);
        uVar20 = 1 << (bVar8 >> 4);
        if (local_434 < uVar20) {
          uVar20 = local_434;
        }
        auStack_378._0_8_ = param_1;
        auVar83 = *(undefined1 (*) [16])
                   ((ulong)(uVar20 * uVar22 + (&sGridOffsets)[uVar37] + uVar49) * 0x10 +
                   *(long *)(local_258 + 0x60));
        iVar48 = uVar49 * 2;
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar83._0_10_;
        auVar9._12_2_ = auVar83._6_2_;
        auVar10._8_2_ = auVar83._4_2_;
        auVar10._0_8_ = auVar83._0_8_;
        auVar10._10_4_ = auVar9._10_4_;
        auVar15._6_8_ = 0;
        auVar15._0_6_ = auVar10._8_6_;
        auVar11._4_2_ = auVar83._2_2_;
        auVar11._0_4_ = auVar83._0_4_;
        auVar11._6_8_ = SUB148(auVar15 << 0x40,6);
        uVar20 = local_41c << (((char)local_42c + -1) - (bVar8 >> 4) & 0x1f);
        auVar78._4_4_ = uVar20;
        auVar78._0_4_ = uVar20;
        auVar78._8_4_ = uVar20;
        auVar78._12_4_ = uVar20;
        iVar52 = uVar22 * 2;
        auVar70._0_4_ = __LC25 + iVar48;
        auVar70._4_4_ = _UNK_00116674 + iVar48;
        auVar70._8_4_ = _UNK_00116678 + iVar48;
        auVar70._12_4_ = _UNK_0011667c + iVar48;
        auVar101._0_4_ = iVar48 + __LC26;
        auVar101._4_4_ = iVar48 + _UNK_00116684;
        auVar101._8_4_ = iVar48 + _UNK_00116688;
        auVar101._12_4_ = iVar48 + _UNK_0011668c;
        auVar85._0_4_ = (float)(auVar83._0_4_ & 0xffff) * fStack_4a8 + fStack_478;
        auVar85._4_4_ = (float)auVar11._4_4_ * fStack_4a4 + fStack_474;
        auVar85._8_4_ = (float)auVar10._8_4_ * fStack_4a0 + fStack_470;
        auVar85._12_4_ = (float)(auVar9._10_4_ >> 0x10) * fStack_49c + fStack_46c;
        auVar90._0_4_ = (float)auVar83._8_2_ * fStack_4a8 + fStack_478;
        auVar90._4_4_ = (float)auVar83._10_2_ * fStack_4a4 + fStack_474;
        auVar90._8_4_ = (float)auVar83._12_2_ * fStack_4a0 + fStack_470;
        auVar90._12_4_ = (float)auVar83._14_2_ * fStack_49c + fStack_46c;
        uVar95 = (uint)((auVar101._8_8_ & 0xffffffff) * (ulong)uVar20);
        uVar38 = (uint)((auVar101._8_8_ >> 0x20) * (ulong)uVar20);
        uVar49 = -(uint)(iStack_4c8 < (int)(auVar101._0_4_ * uVar20 - __LC27));
        uVar27 = -(uint)(iStack_4c4 < (int)(auVar101._4_4_ * uVar20 - _UNK_00116694));
        uVar43 = -(uint)(iStack_4c0 < (int)(uVar95 - _UNK_00116698));
        uVar25 = -(uint)(iStack_4bc < (int)(uVar38 - _UNK_0011669c));
        auVar98._0_4_ = (float)(int)(auVar70._0_4_ * uVar20) * fStack_498 + fStack_468;
        auVar98._4_4_ = (float)(int)(auVar70._4_4_ * uVar20) * fStack_494 + fStack_464;
        auVar98._8_4_ =
             (float)(int)((auVar70._8_8_ & 0xffffffff) * (ulong)uVar20) * fStack_490 + fStack_460;
        auVar98._12_4_ =
             (float)(int)((auVar70._8_8_ >> 0x20) * (ulong)uVar20) * fStack_48c + fStack_45c;
        auVar91._0_4_ = __LC28 + iVar52;
        auVar91._4_4_ = _UNK_001166a4 + iVar52;
        auVar91._8_4_ = _UNK_001166a8 + iVar52;
        auVar91._12_4_ = _UNK_001166ac + iVar52;
        uVar26 = uVar20 * (iVar52 + __LC29);
        iVar48 = (uVar37 + 1) * 0x10000000 + uVar22 * 0x8000 + iVar48;
        uVar22 = (iVar52 + _UNK_001166b4) * uVar20;
        uVar47 = (iVar52 + _UNK_001166b4) * uVar20;
        auVar71._0_4_ =
             (float)(int)(~uVar49 & auVar101._0_4_ * uVar20 | local_458 & uVar49) * fStack_498 +
             fStack_468;
        auVar71._4_4_ =
             (float)(int)(~uVar27 & auVar101._4_4_ * uVar20 | uStack_454 & uVar27) * fStack_494 +
             fStack_464;
        auVar71._8_4_ =
             (float)(int)(~uVar43 & uVar95 | uStack_450 & uVar43) * fStack_490 + fStack_460;
        auVar71._12_4_ =
             (float)(int)(~uVar25 & uVar38 | uStack_44c & uVar25) * fStack_48c + fStack_45c;
        uVar25 = (uint)((auVar78._8_8_ & 0xffffffff) * (ulong)(uint)(iVar52 + _UNK_001166b8));
        uVar49 = -(uint)(iStack_4c8 < (int)(uVar26 - __LC27));
        uVar27 = -(uint)(iStack_4c4 < (int)(uVar22 - _UNK_00116694));
        uVar38 = -(uint)(iStack_4c0 < (int)(uVar25 - _UNK_00116698));
        uVar43 = -(uint)(iStack_4bc < (int)(uVar47 - _UNK_0011669c));
        fVar88 = *(float *)(param_1 + 0x80);
        fVar54 = *(float *)(param_1 + 0x84);
        fVar55 = *(float *)(param_1 + 0x88);
        auVar99._4_4_ = fVar55;
        auVar99._0_4_ = fVar55;
        auVar72._4_4_ = fVar54;
        auVar72._0_4_ = fVar54;
        auVar79._4_4_ = fVar88;
        auVar79._0_4_ = fVar88;
        auVar79._8_4_ = fVar88;
        auVar79._12_4_ = fVar88;
        auVar83 = maxps(auVar79,auVar98);
        auVar99._8_4_ = fVar55;
        auVar99._12_4_ = fVar55;
        lVar51 = (long)iVar31 * 4;
        auVar84 = minps(auVar83,auVar71);
        auVar72._8_4_ = fVar54;
        auVar72._12_4_ = fVar54;
        auVar92._0_4_ = (float)(int)(auVar91._0_4_ * uVar20) * fStack_4b8 + fStack_488;
        auVar92._4_4_ = (float)(int)(auVar91._4_4_ * uVar20) * fStack_4b4 + fStack_484;
        auVar92._8_4_ =
             (float)(int)((auVar91._8_8_ & 0xffffffff) * (ulong)uVar20) * fStack_4b0 + fStack_480;
        auVar92._12_4_ =
             (float)(int)((auVar91._8_8_ >> 0x20) * (ulong)uVar20) * fStack_4ac + fStack_47c;
        auVar83 = maxps(auVar72,auVar85);
        auVar101 = maxps(auVar99,auVar92);
        auVar83 = minps(auVar83,auVar90);
        fVar63 = auVar83._0_4_ - fVar54;
        fVar64 = auVar83._4_4_ - fVar54;
        fVar65 = auVar83._8_4_ - fVar54;
        fVar54 = auVar83._12_4_ - fVar54;
        auVar93._0_4_ =
             (float)(int)(~uVar49 & uVar26 | local_458 & uVar49) * fStack_4b8 + fStack_488;
        auVar93._4_4_ =
             (float)(int)(~uVar27 & uVar22 | uStack_454 & uVar27) * fStack_4b4 + fStack_484;
        auVar93._8_4_ =
             (float)(int)(~uVar38 & uVar25 | uStack_450 & uVar38) * fStack_4b0 + fStack_480;
        auVar93._12_4_ =
             (float)(int)(~uVar43 & uVar47 | uStack_44c & uVar43) * fStack_4ac + fStack_47c;
        auVar83 = minps(auVar101,auVar93);
        fVar73 = auVar84._0_4_ - fVar88;
        fVar74 = auVar84._4_4_ - fVar88;
        fVar75 = auVar84._8_4_ - fVar88;
        fVar88 = auVar84._12_4_ - fVar88;
        uVar20 = (int)-(uint)(auVar85._0_4_ <= auVar90._0_4_) >> 0x1f;
        uVar49 = (int)-(uint)(auVar85._4_4_ <= auVar90._4_4_) >> 0x1f;
        uVar22 = (int)-(uint)(auVar85._8_4_ <= auVar90._8_4_) >> 0x1f;
        uVar27 = (int)-(uint)(auVar85._12_4_ <= auVar90._12_4_) >> 0x1f;
        fVar80 = auVar83._0_4_ - fVar55;
        fVar86 = auVar83._4_4_ - fVar55;
        fVar87 = auVar83._8_4_ - fVar55;
        fVar55 = auVar83._12_4_ - fVar55;
        fVar63 = (float)((uint)(fVar63 * fVar63 + fVar73 * fVar73 + fVar80 * fVar80) & uVar20 |
                        ~uVar20 & _LC13);
        fVar64 = (float)((uint)(fVar64 * fVar64 + fVar74 * fVar74 + fVar86 * fVar86) & uVar49 |
                        ~uVar49 & _UNK_00116654);
        fVar65 = (float)((uint)(fVar65 * fVar65 + fVar75 * fVar75 + fVar87 * fVar87) & uVar22 |
                        ~uVar22 & _UNK_00116658);
        fVar88 = (float)((uint)(fVar54 * fVar54 + fVar88 * fVar88 + fVar55 * fVar55) & uVar27 |
                        ~uVar27 & _UNK_0011665c);
        uVar20 = (int)-(uint)(fVar63 < fVar65) >> 0x1f;
        uVar49 = (int)-(uint)(fVar64 < fVar88) >> 0x1f;
        fVar55 = (float)((uint)fVar65 & uVar20 | ~uVar20 & (uint)fVar63);
        fVar73 = (float)((uint)fVar88 & uVar49 | ~uVar49 & (uint)fVar64);
        fVar63 = (float)((uint)fVar63 & uVar20 | ~uVar20 & (uint)fVar65);
        fVar64 = (float)((uint)fVar64 & uVar49 | ~uVar49 & (uint)fVar88);
        uVar38 = uVar20 & iVar48 + _UNK_001166c8 | ~uVar20 & iVar48 + __LC30;
        uVar43 = uVar49 & iVar48 + _UNK_001166cc | ~uVar49 & iVar48 + _UNK_001166c4;
        uVar25 = uVar20 & iVar48 + __LC30 | ~uVar20 & iVar48 + _UNK_001166c8;
        uVar26 = uVar49 & iVar48 + _UNK_001166c4 | ~uVar49 & iVar48 + _UNK_001166cc;
        uVar20 = (int)-(uint)(fVar55 < fVar73) >> 0x1f;
        uVar22 = (int)-(uint)(fVar63 < fVar64) >> 0x1f;
        fVar88 = (float)((uint)fVar55 & uVar20 | ~uVar20 & (uint)fVar73);
        fVar54 = (float)((uint)fVar64 & uVar22 | ~uVar22 & (uint)fVar63);
        uVar49 = uVar20 & uVar38 | ~uVar20 & uVar43;
        uVar27 = uVar22 & uVar26 | ~uVar22 & uVar25;
        uVar47 = (int)-(uint)(fVar88 < fVar54) >> 0x1f;
        auVar94._4_4_ = ~uVar47 & (uint)fVar88;
        auVar94._0_4_ = (uint)fVar73 & uVar20 | ~uVar20 & (uint)fVar55;
        auVar94._8_4_ = ~uVar47 & (uint)fVar54;
        auVar94._12_4_ = (uint)fVar63 & uVar22 | ~uVar22 & (uint)fVar64;
        auVar84._4_4_ = (uint)fVar88 & uVar47;
        auVar84._0_4_ = (uint)fVar54 & uVar47;
        auVar84._8_8_ = 0;
        auStack_318._4_4_ = ~uVar47 & uVar49;
        auStack_318._0_4_ = uVar20 & uVar43 | ~uVar20 & uVar38;
        auStack_318._8_4_ = ~uVar47 & uVar27;
        auStack_318._12_4_ = uVar22 & uVar25 | ~uVar22 & uVar26;
        _auStack_368 = auVar84 << 0x20 | auVar94;
        auVar83._4_4_ = uVar47 & uVar49;
        auVar83._0_4_ = uVar47 & uVar27;
        auVar83._8_8_ = 0;
        auStack_318 = auVar83 << 0x20 | auStack_318;
        auVar62._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar56);
        auVar62._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar56);
        auVar62._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar56);
        auVar62._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar56);
        iVar48 = movmskps(uVar37,auVar62);
        *(undefined8 *)(puVar35 + lVar7 + -8) = 0x1127f7;
        uVar20 = __popcountdi2();
        _auStack_298 = _auStack_368;
        if (iVar48 == 0) {
          _auStack_298 = (undefined1  [16])0x0;
          auVar57 = (undefined1  [8])0x0;
          uVar76 = 0;
        }
        else {
          _auStack_2d8 = (undefined1  [16])0x0;
          puVar45 = (undefined8 *)auStack_298;
          uVar28 = (ulong)uVar20 << 2;
          puVar41 = (undefined8 *)auStack_2d8;
          lVar29 = (4 - (long)(int)uVar20) * 4;
          puVar40 = (undefined8 *)((long)puVar45 + lVar29);
          if (7 < (uint)uVar28) {
            for (uVar24 = uVar28 >> 3 & 0x1fffffff; uVar24 != 0; uVar24 = uVar24 - 1) {
              *puVar41 = *puVar40;
              puVar40 = puVar40 + (ulong)bVar53 * -2 + 1;
              puVar41 = puVar41 + (ulong)bVar53 * -2 + 1;
            }
          }
          if ((uVar28 & 4) != 0) {
            *(undefined4 *)puVar41 = *(undefined4 *)puVar40;
          }
          puVar41 = (undefined8 *)(auStack_318 + lVar29);
          _auStack_298 = (undefined1  [16])0x0;
          if (7 < (uint)uVar28) {
            for (uVar24 = uVar28 >> 3 & 0x1fffffff; uVar24 != 0; uVar24 = uVar24 - 1) {
              *puVar45 = *puVar41;
              puVar41 = puVar41 + (ulong)bVar53 * -2 + 1;
              puVar45 = puVar45 + (ulong)bVar53 * -2 + 1;
            }
          }
          auVar57 = auStack_2d8;
          uVar76 = uStack_2d0;
          if ((uVar28 & 4) != 0) {
            *(undefined4 *)puVar45 = *(undefined4 *)puVar41;
          }
        }
        uVar81 = uStack_290;
        *(undefined1 (*) [8])(param_1 + lVar51 + 0xdc) = auVar57;
        *(undefined8 *)(param_1 + lVar51 + 0xdc + 8) = uVar76;
        iVar31 = iVar31 + uVar20;
        auStack_318 = _auStack_298;
        *(undefined1 (*) [8])(local_250 + lVar51 + 4) = auStack_298;
        *(undefined8 *)((long)auStack_244 + lVar51) = uVar81;
        param_1 = (Visitor *)auStack_378._0_8_;
      }
      else {
        HVar2 = local_258[0x55];
        uStack_418 = local_41c * uVar22;
        uVar47 = local_41c * uVar49;
        uVar37 = local_41c + uVar47;
        uVar38 = local_41c + uStack_418;
        uStack_3a8 = CONCAT44(uStack_3a8._4_4_,uVar47);
        pcStack_3a0 = *(char **)(local_258 + 0x60);
        uStack_3c0 = uVar20 & 1;
        uStack_3bc = uVar22 * 2 & 2;
        uVar43 = uVar49 >> 1;
        iVar48 = local_43c + (uVar22 >> 1) * local_434;
        uStack_3b8 = CONCAT44(uStack_3b8._4_4_,uVar43);
        uVar4 = *(ushort *)
                 (pcStack_3a0 +
                 (ulong)(uStack_3bc | uStack_3c0) * 2 + (ulong)(uVar43 + iVar48) * 0x10);
        uVar5 = *(ushort *)
                 (pcStack_3a0 +
                 (ulong)(uStack_3bc | uStack_3c0) * 2 + (ulong)(uVar43 + iVar48) * 0x10 + 8);
        fVar54 = (float)(byte)HVar2;
        uVar27 = (uint)(byte)HVar2;
        if (uStack_418 < uVar38) {
          uStack_398 = (ulong)(local_41c - 1) + 1;
          auStack_3d8._0_4_ = iVar48;
          auStack_3e8._0_8_ = param_1;
          uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar20) & 0xffffffff00003fff;
          uVar28 = uStack_428;
          pauVar44 = pauStack_400;
          uVar20 = uStack_418;
          do {
            uVar24 = uVar28;
            if (uVar47 < uVar37) {
              HVar3 = local_258[0x54];
              lVar51 = *(long *)(local_258 + 0x68);
              fVar55 = *(float *)(local_258 + 0x20);
              fVar63 = *(float *)(local_258 + 0x24);
              fVar64 = *(float *)(local_258 + 0x28);
              fVar65 = *(float *)(local_258 + 0x2c);
              iVar52 = (int)uVar28;
              auVar83 = *(undefined1 (*) [16])(local_258 + 0x30);
              uVar24 = uVar28 + uStack_398;
              uVar49 = (*(int *)(local_258 + 0x40) * uVar20 + uVar47) * (uint)(byte)HVar3;
              pauVar23 = pauVar44;
              do {
                iVar50 = (int)uVar28;
                uVar25 = (int)(uint)*(ushort *)(lVar51 + (ulong)(uVar49 >> 3)) >> ((byte)uVar49 & 7)
                         & uVar27;
                *(bool *)uVar28 = HVar2 == SUB41(uVar25,0);
                uVar28 = uVar28 + 1;
                uVar49 = uVar49 + (byte)HVar3;
                auVar66._0_4_ = (float)((uVar47 - iVar52) + iVar50) * auVar83._0_4_ + fVar55;
                auVar66._4_4_ =
                     (((float)uVar25 + fVar88) * ((float)(int)((uint)uVar5 - (uint)uVar4) / fVar54)
                     + (float)uVar4) * auVar83._4_4_ + fVar63;
                auVar66._8_4_ = (float)uVar20 * auVar83._8_4_ + fVar64;
                auVar66._12_4_ = (float)uVar20 * auVar83._12_4_ + fVar65;
                *pauVar23 = auVar66;
                pauVar23 = pauVar23 + 1;
              } while (uVar28 != uVar24);
              pauVar44 = pauVar44 + uStack_398;
            }
            pauVar44 = pauVar44 + 1;
            uVar28 = uVar24 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar38 != uVar20);
          uVar49 = (uint)uStack_3b0;
          iStack_3c8 = iVar31;
          uStack_3c4 = uVar22;
        }
        fVar88 = _LC2;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,iStack_438 + -1);
        if (uVar49 < local_430) {
          pauVar44 = pauStack_400 + local_41c;
          lVar51 = uStack_428 + local_41c;
          uVar20 = (uVar49 + 1 >> 1) + iVar48;
          uVar28 = (ulong)(uVar49 + 1 & 1 | uStack_3bc);
          uVar4 = *(ushort *)(pcStack_3a0 + uVar28 * 2 + (ulong)uVar20 * 0x10);
          uVar5 = *(ushort *)(pcStack_3a0 + uVar28 * 2 + (ulong)uVar20 * 0x10 + 8);
          if (uStack_418 < uVar38) {
            uVar28 = (ulong)local_420;
            uStack_3b0 = *(ulong *)(local_258 + 0x68);
            iVar48 = *(int *)(local_258 + 0x40);
            fVar55 = *(float *)(local_258 + 0x30);
            fVar63 = *(float *)(local_258 + 0x34);
            fVar64 = *(float *)(local_258 + 0x38);
            fVar65 = *(float *)(local_258 + 0x3c);
            uStack_398 = uVar28 * 0x10;
            fVar73 = *(float *)(local_258 + 0x20);
            fVar74 = *(float *)(local_258 + 0x24);
            fVar75 = *(float *)(local_258 + 0x28);
            fVar80 = *(float *)(local_258 + 0x2c);
            HVar3 = local_258[0x54];
            uVar25 = (uStack_418 * iVar48 + uVar37) * (uint)(byte)HVar3;
            uVar20 = uStack_418;
            do {
              uVar24 = (ulong)uVar20;
              uVar26 = (int)(uint)*(ushort *)(uStack_3b0 + (uVar25 >> 3)) >> ((byte)uVar25 & 7) &
                       uVar27;
              *(bool *)lVar51 = HVar2 == SUB41(uVar26,0);
              uVar20 = uVar20 + 1;
              uVar25 = uVar25 + iVar48 * (uint)(byte)HVar3;
              *(float *)*pauVar44 = (float)uVar37 * fVar55 + fVar73;
              *(float *)(*pauVar44 + 4) =
                   (((float)uVar26 + fVar88) * ((float)(int)((uint)uVar5 - (uint)uVar4) / fVar54) +
                   (float)uVar4) * fVar63 + fVar74;
              *(float *)(*pauVar44 + 8) = (float)uVar24 * fVar64 + fVar75;
              *(float *)(*pauVar44 + 0xc) = (float)uVar24 * fVar65 + fVar80;
              pauVar44 = pauVar44 + uVar28;
              lVar51 = lVar51 + uVar28;
            } while (uVar38 != uVar20);
          }
          uStack_3b0 = CONCAT44(uStack_3b0._4_4_,iStack_438);
        }
        fVar88 = _LC2;
        if (uVar22 < local_430) {
          pauVar44 = pauStack_400 + uStack_4cc;
          lVar51 = uStack_428 + uStack_4cc;
          uStack_3bc = (uVar22 + 1) * 2 & 2;
          uVar20 = uStack_3c0 | uStack_3bc;
          uStack_3c0 = local_43c + (uVar22 + 1 >> 1) * local_434;
          uVar4 = *(ushort *)(pcStack_3a0 + (ulong)uVar20 * 2 + (ulong)(uVar43 + uStack_3c0) * 0x10)
          ;
          uVar5 = *(ushort *)
                   (pcStack_3a0 + (ulong)uVar20 * 2 + (ulong)(uVar43 + uStack_3c0) * 0x10 + 8);
          if (uVar47 < uVar37) {
            lVar6 = *(long *)(local_258 + 0x68);
            fVar55 = *(float *)(local_258 + 0x30);
            fVar63 = *(float *)(local_258 + 0x34);
            fVar64 = *(float *)(local_258 + 0x38);
            fVar65 = *(float *)(local_258 + 0x3c);
            fVar73 = *(float *)(local_258 + 0x20);
            fVar74 = *(float *)(local_258 + 0x24);
            fVar75 = *(float *)(local_258 + 0x28);
            fVar80 = *(float *)(local_258 + 0x2c);
            uVar20 = (uint)(byte)local_258[0x54];
            uStack_398 = CONCAT44(uStack_398._4_4_,uVar20);
            iVar48 = (int)lVar51;
            uVar22 = uVar20 * (uVar38 * *(int *)(local_258 + 0x40) + uVar47);
            lVar30 = (ulong)(local_41c - 1) + 1;
            lVar29 = lVar51 + lVar30;
            pauVar23 = pauVar44;
            do {
              iVar52 = (int)lVar51;
              uVar43 = (int)(uint)*(ushort *)(lVar6 + (ulong)(uVar22 >> 3)) >> ((byte)uVar22 & 7) &
                       uVar27;
              *(bool *)lVar51 = HVar2 == SUB41(uVar43,0);
              lVar51 = lVar51 + 1;
              uVar22 = uVar22 + uVar20;
              *(float *)*pauVar23 = (float)((uVar47 - iVar48) + iVar52) * fVar55 + fVar73;
              *(float *)(*pauVar23 + 4) =
                   (((float)uVar43 + fVar88) * ((float)(int)((uint)uVar5 - (uint)uVar4) / fVar54) +
                   (float)uVar4) * fVar63 + fVar74;
              *(float *)(*pauVar23 + 8) = (float)uVar38 * fVar64 + fVar75;
              *(float *)(*pauVar23 + 0xc) = (float)uVar38 * fVar65 + fVar80;
              pauVar23 = pauVar23 + 1;
            } while (lVar51 != lVar29);
            pauVar44 = pauVar44 + lVar30;
            lVar51 = lVar29;
          }
          fVar88 = _LC2;
          iStack_2dc = iStack_438;
          if (uVar49 < local_430) {
            uVar28 = (ulong)(uVar49 + 1 & 1 | uStack_3bc);
            uVar20 = (uVar49 + 1 >> 1) + uStack_3c0;
            uVar4 = *(ushort *)(pcStack_3a0 + uVar28 * 2 + (ulong)uVar20 * 0x10 + 8);
            uVar5 = *(ushort *)(pcStack_3a0 + uVar28 * 2 + (ulong)uVar20 * 0x10);
            uVar20 = (*(int *)(local_258 + 0x40) * uVar38 + uVar37) * (uint)(byte)local_258[0x54];
            uVar27 = (int)(uint)*(ushort *)(*(long *)(local_258 + 0x68) + (ulong)(uVar20 >> 3)) >>
                     ((byte)uVar20 & 7) & uVar27;
            *(bool *)lVar51 = HVar2 == SUB41(uVar27,0);
            fVar55 = *(float *)(local_258 + 0x34);
            fVar63 = *(float *)(local_258 + 0x38);
            fVar64 = *(float *)(local_258 + 0x3c);
            fVar65 = *(float *)(local_258 + 0x24);
            fVar73 = *(float *)(local_258 + 0x28);
            fVar74 = *(float *)(local_258 + 0x2c);
            *(float *)*pauVar44 =
                 (float)uVar37 * *(float *)(local_258 + 0x30) + *(float *)(local_258 + 0x20);
            *(float *)(*pauVar44 + 4) =
                 (((float)uVar27 + fVar88) * ((float)(int)((uint)uVar4 - (uint)uVar5) / fVar54) +
                 (float)uVar5) * fVar55 + fVar65;
            *(float *)(*pauVar44 + 8) = (float)uVar38 * fVar63 + fVar73;
            *(float *)(*pauVar44 + 0xc) = (float)uVar38 * fVar64 + fVar74;
          }
        }
        else {
          iStack_2dc = ((uVar38 - uStack_440) + -1) - uStack_418;
        }
        uVar19 = _LC17;
        uVar46 = _LC15;
        lVar51 = 0;
        piVar39 = (int *)auStack_318;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uStack_448;
        auStack_318 = auVar16 << 0x40;
        uVar81 = CONCAT44(_LC15,_LC15);
        uStack_2f8 = 0;
        uVar76 = CONCAT44(_LC17,_LC17);
        auStack_308 = ZEXT416((uint)uStack_3b0) << 0x40;
        uStack_2e0 = (uint)uStack_3b0;
        auStack_308._0_4_ = uStack_440;
        auStack_308._12_4_ = uStack_440;
        uStack_2e4 = uStack_440;
        uStack_2f4 = CONCAT44(uStack_440,uStack_440);
        uStack_2ec = CONCAT44(uStack_440,iStack_2dc);
        do {
          uVar28 = (ulong)(local_420 * piVar39[1] + *piVar39);
          uVar20 = piVar39[2];
          pauVar44 = pauStack_400 + uVar28;
          pcVar21 = (char *)(uVar28 + uStack_428);
          if (piVar39[3] == -1) {
            auVar58._8_4_ = uVar46;
            auVar58._0_8_ = uVar81;
            auVar58._12_4_ = uVar46;
            auVar67._8_4_ = uVar19;
            auVar67._0_8_ = uVar76;
            auVar67._12_4_ = uVar19;
          }
          else {
            auVar58._8_4_ = uVar46;
            auVar58._0_8_ = uVar81;
            auVar58._12_4_ = uVar46;
            auVar67._8_4_ = uVar19;
            auVar67._0_8_ = uVar76;
            auVar67._12_4_ = uVar19;
            iVar48 = 0;
            while( true ) {
              pcVar18 = pcVar21 + (ulong)uVar20 + 1;
              pauVar23 = pauVar44;
              if (uVar20 != 0xffffffff) {
                do {
                  if (*pcVar21 == '\0') {
                    auVar67 = minps(auVar67,*pauVar23);
                    auVar58 = maxps(auVar58,*pauVar23);
                  }
                  pcVar21 = pcVar21 + 1;
                  pauVar23 = pauVar23 + 1;
                } while (pcVar21 != pcVar18);
                pauVar44 = pauVar44 + (ulong)uVar20 + 1;
                pcVar21 = pcVar18;
              }
              pauVar44 = pauVar44 + (local_41c - uVar20);
              if (piVar39[3] == iVar48) break;
              iVar48 = iVar48 + 1;
              pcVar21 = pcVar21 + (local_41c - uVar20);
            }
          }
          *(undefined1 (*) [16])(auStack_298 + lVar51) = auVar58;
          piVar39 = piVar39 + 4;
          *(undefined1 (*) [16])(auStack_2d8 + lVar51) = auVar67;
          lVar51 = lVar51 + 0x10;
        } while (lVar51 != 0x40);
        fVar88 = *(float *)(param_1 + 0x80);
        fVar54 = *(float *)(param_1 + 0x84);
        uStack_388 = *(undefined8 *)(param_1 + 0x80);
        fStack_380 = *(float *)(param_1 + 0x88);
        fStack_37c = *(float *)(param_1 + 0x8c);
        auStack_378._0_8_ = param_1;
        fVar63 = (float)((ulong)uStack_2c8 >> 0x20);
        auVar82._4_4_ = fVar88;
        auVar82._0_4_ = fVar88;
        fVar64 = (float)((ulong)uStack_2a8 >> 0x20);
        auVar77._4_4_ = fVar63;
        auVar77._0_4_ = auStack_2d8._4_4_;
        auVar77._8_4_ = fStack_2b4;
        auVar77._12_4_ = fVar64;
        auVar68._4_4_ = (int)uStack_2c8;
        auVar68._0_4_ = auStack_2d8._0_4_;
        auVar68._8_4_ = uStack_2b8;
        auVar68._12_4_ = (int)uStack_2a8;
        auVar82._8_4_ = fVar88;
        auVar82._12_4_ = fVar88;
        auVar83 = maxps(auVar82,auVar68);
        auVar60._4_4_ = fVar54;
        auVar60._0_4_ = fVar54;
        auVar100._4_4_ = fStack_380;
        auVar100._0_4_ = fStack_380;
        fVar55 = (float)((ulong)uStack_288 >> 0x20);
        fVar65 = (float)((ulong)uStack_268 >> 0x20);
        auVar59._4_4_ = (int)uStack_288;
        auVar59._0_4_ = auStack_298._0_4_;
        auVar59._8_4_ = uStack_278;
        auVar59._12_4_ = (int)uStack_268;
        auVar100._8_4_ = fStack_380;
        auVar100._12_4_ = fStack_380;
        auVar96._4_4_ = fVar55;
        auVar96._0_4_ = auStack_298._4_4_;
        auVar96._8_4_ = fStack_274;
        auVar96._12_4_ = fVar65;
        auVar84 = minps(auVar83,auVar59);
        auVar60._8_4_ = fVar54;
        auVar60._12_4_ = fVar54;
        auVar69._4_4_ = uStack_2c0;
        auVar69._0_4_ = (undefined4)uStack_2d0;
        auVar69._8_4_ = uStack_2b0;
        auVar69._12_4_ = uStack_2a0;
        auVar101 = maxps(auVar100,auVar69);
        auVar83 = maxps(auVar60,auVar77);
        auVar89._4_4_ = uStack_280;
        auVar89._0_4_ = (undefined4)uStack_290;
        auVar89._8_4_ = uStack_270;
        auVar89._12_4_ = uStack_260;
        fVar80 = auVar84._0_4_ - fVar88;
        fVar86 = auVar84._4_4_ - fVar88;
        fVar87 = auVar84._8_4_ - fVar88;
        fVar88 = auVar84._12_4_ - fVar88;
        auVar83 = minps(auVar83,auVar96);
        auVar84 = minps(auVar101,auVar89);
        uVar20 = (int)-(uint)((float)auStack_2d8._4_4_ <= (float)auStack_298._4_4_) >> 0x1f;
        uVar49 = (int)-(uint)(fVar63 <= fVar55) >> 0x1f;
        uVar22 = (int)-(uint)(fStack_2b4 <= fStack_274) >> 0x1f;
        uVar37 = (int)-(uint)(fVar64 <= fVar65) >> 0x1f;
        pVVar1 = param_1 + (long)iVar31 * 4 + 0xdc;
        fVar55 = auVar83._0_4_ - fVar54;
        fVar63 = auVar83._4_4_ - fVar54;
        fVar64 = auVar83._8_4_ - fVar54;
        fVar54 = auVar83._12_4_ - fVar54;
        fVar65 = auVar84._0_4_ - fStack_380;
        fVar73 = auVar84._4_4_ - fStack_380;
        fVar74 = auVar84._8_4_ - fStack_380;
        fVar75 = auVar84._12_4_ - fStack_380;
        fVar55 = (float)((uint)(fVar55 * fVar55 + fVar80 * fVar80 + fVar65 * fVar65) & uVar20 |
                        ~uVar20 & _LC13);
        fVar63 = (float)((uint)(fVar63 * fVar63 + fVar86 * fVar86 + fVar73 * fVar73) & uVar49 |
                        ~uVar49 & _UNK_00116654);
        fVar64 = (float)((uint)(fVar64 * fVar64 + fVar87 * fVar87 + fVar74 * fVar74) & uVar22 |
                        ~uVar22 & _UNK_00116658);
        fVar88 = (float)((uint)(fVar54 * fVar54 + fVar88 * fVar88 + fVar75 * fVar75) & uVar37 |
                        ~uVar37 & _UNK_0011665c);
        uVar20 = (int)-(uint)(fVar55 < fVar64) >> 0x1f;
        uVar49 = (int)-(uint)(fVar63 < fVar88) >> 0x1f;
        fVar65 = (float)(~uVar20 & (uint)fVar55 | (uint)fVar64 & uVar20);
        fVar73 = (float)(~uVar49 & (uint)fVar63 | (uint)fVar88 & uVar49);
        fVar55 = (float)(~uVar20 & (uint)fVar64 | (uint)fVar55 & uVar20);
        fVar63 = (float)(~uVar49 & (uint)fVar88 | (uint)fVar63 & uVar49);
        uVar27 = uVar20 & __LC32 | ~uVar20 & __LC49;
        uVar38 = uVar49 & _UNK_001166d4 | ~uVar49 & _UNK_00116664;
        uVar47 = uVar20 & _UNK_001166d8 | ~uVar20 & _UNK_00116668;
        uVar25 = uVar49 & _UNK_001166dc | ~uVar49 & _UNK_0011666c;
        uVar20 = (int)-(uint)(fVar65 < fVar73) >> 0x1f;
        uVar22 = (int)-(uint)(fVar55 < fVar63) >> 0x1f;
        fVar88 = (float)((uint)fVar65 & uVar20 | ~uVar20 & (uint)fVar73);
        fVar54 = (float)((uint)fVar63 & uVar22 | ~uVar22 & (uint)fVar55);
        uVar49 = uVar20 & uVar27 | ~uVar20 & uVar38;
        uVar37 = uVar22 & uVar25 | ~uVar22 & uVar47;
        uVar43 = (int)-(uint)(fVar88 < fVar54) >> 0x1f;
        auVar97._4_4_ = ~uVar43 & (uint)fVar88;
        auVar97._0_4_ = (uint)fVar73 & uVar20 | ~uVar20 & (uint)fVar65;
        auVar97._8_4_ = ~uVar43 & (uint)fVar54;
        auVar97._12_4_ = (uint)fVar55 & uVar22 | ~uVar22 & (uint)fVar63;
        auVar13._4_4_ = (uint)fVar88 & uVar43;
        auVar13._0_4_ = (uint)fVar54 & uVar43;
        auVar13._8_8_ = 0;
        auStack_348._4_4_ = ~uVar43 & uVar49;
        auStack_348._0_4_ = uVar20 & uVar38 | ~uVar20 & uVar27;
        auStack_348._8_4_ = ~uVar43 & uVar37;
        auStack_348._12_4_ = uVar22 & uVar47 | ~uVar22 & uVar25;
        _auStack_368 = auVar13 << 0x20 | auVar97;
        auVar12._4_4_ = uVar43 & uVar49;
        auVar12._0_4_ = uVar43 & uVar37;
        auVar12._8_8_ = 0;
        auStack_348 = auVar12 << 0x20 | auStack_348;
        auVar61._4_4_ = -(uint)(SUB164(_auStack_368,4) < fVar56);
        auVar61._0_4_ = -(uint)(SUB164(_auStack_368,0) < fVar56);
        auVar61._8_4_ = -(uint)(SUB164(_auStack_368,8) < fVar56);
        auVar61._12_4_ = -(uint)(SUB164(_auStack_368,0xc) < fVar56);
        iVar48 = movmskps((int)pauVar44,auVar61);
        *(undefined8 *)(puVar35 + lVar7 + -8) = 0x111fd6;
        uVar49 = __popcountdi2();
        uVar20 = local_420;
        param_1 = (Visitor *)auStack_378._0_8_;
        auStack_328 = _auStack_368;
        if (iVar48 != 0) {
          uVar28 = (ulong)uVar49 << 2;
          puVar45 = (undefined8 *)auStack_328;
          lVar51 = (4 - (long)(int)uVar49) * 4;
          auStack_338 = (undefined1  [16])0x0;
          puVar41 = (undefined8 *)auStack_338;
          puVar40 = (undefined8 *)((long)puVar45 + lVar51);
          if (7 < (uint)uVar28) {
            for (uVar24 = uVar28 >> 3 & 0x1fffffff; uVar24 != 0; uVar24 = uVar24 - 1) {
              *puVar41 = *puVar40;
              puVar40 = puVar40 + (ulong)bVar53 * -2 + 1;
              puVar41 = puVar41 + (ulong)bVar53 * -2 + 1;
            }
          }
          if ((uVar28 & 4) != 0) {
            *(undefined4 *)puVar41 = *(undefined4 *)puVar40;
          }
          puVar41 = (undefined8 *)(auStack_348 + lVar51);
          auStack_328 = (undefined1  [16])0x0;
          if (7 < (uint)uVar28) {
            for (uVar24 = uVar28 >> 3 & 0x1fffffff; uVar24 != 0; uVar24 = uVar24 - 1) {
              *puVar45 = *puVar41;
              puVar41 = puVar41 + (ulong)bVar53 * -2 + 1;
              puVar45 = puVar45 + (ulong)bVar53 * -2 + 1;
            }
          }
          if ((uVar28 & 4) != 0) {
            *(undefined4 *)puVar45 = *(undefined4 *)puVar41;
          }
          uVar49 = uVar49 - 1;
          *(undefined1 (*) [16])pVVar1 = auStack_338;
          uVar24 = (ulong)(local_41c + 2);
          auStack_348 = auStack_328;
          uVar28 = uStack_428;
          iVar48 = (int)uStack_3a8;
          fVar56 = (float)uStack_388;
          fVar88 = uStack_388._4_4_;
          fVar54 = fStack_380;
          fVar55 = fStack_37c;
          do {
            lVar51 = (ulong)*(uint *)(auStack_348 + (ulong)uVar49 * 4) * 0x10;
            uVar22 = uStack_418 + *(int *)(auStack_318 + lVar51 + 4);
            uVar37 = *(int *)(auStack_318 + lVar51) + iVar48;
            if (uVar22 < *(int *)(auStack_308 + lVar51 + -4) + uVar22) {
              iVar52 = *(int *)(auStack_318 + lVar51 + 4) * uVar20;
              iVar50 = ((*(int *)(auStack_318 + lVar51 + 8) + uVar37) - iVar48) + iVar52;
              iVar52 = iVar52 - iVar48;
              iStack_414 = iVar31;
              uStack_410 = uVar49;
              iStack_40c = iVar48;
              uStack_408 = *(int *)(auStack_308 + lVar51 + -4) + uVar22;
              uStack_404 = *(int *)(auStack_318 + lVar51 + 8) + uVar37;
              do {
                iVar31 = uVar37 + iVar52;
                if (uVar37 < uStack_404) {
                  iStack_3c8 = iVar52;
                  uStack_3c4 = uVar22;
                  uStack_3c0 = uVar37;
                  do {
                    while( true ) {
                      pcVar21 = (char *)(uVar28 + (long)iVar31);
                      if ((*pcVar21 != '\0') || (pcVar21[uVar24] != '\0')) break;
                      pauVar44 = pauStack_400 + iVar31;
                      uVar42 = uVar24;
                      if (pcVar21[uVar20] != '\0') goto LAB_0011233e;
                      auStack_3d8 = *pauVar44;
                      uVar46 = 0;
                      auStack_3e8 = pauVar44[uVar20];
                      pauVar23 = pauVar44 + uVar24;
                      fStack_3f8 = *(float *)*pauVar23;
                      fStack_3f4 = *(float *)(*pauVar23 + 4);
                      fStack_3f0 = *(float *)(*pauVar23 + 8);
                      fStack_3ec = *(float *)(*pauVar23 + 0xc);
                      while( true ) {
                        auStack_378._0_8_ =
                             CONCAT44(auStack_3e8._4_4_ - fVar88,auStack_3e8._0_4_ - fVar56);
                        auStack_378._8_4_ = auStack_3e8._8_4_ - fVar54;
                        auStack_378._12_4_ = auStack_3e8._12_4_ - fVar55;
                        uStack_3bc = (uint)uVar24;
                        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar46);
                        auStack_368._4_4_ = fStack_3f4 - fVar88;
                        auStack_368._0_4_ = fStack_3f8 - fVar56;
                        uStack_360._0_4_ = fStack_3f0 - fVar54;
                        uStack_360._4_4_ = fStack_3ec - fVar55;
                        fStack_380 = auStack_3d8._8_4_ - fVar54;
                        fStack_37c = auStack_3d8._12_4_ - fVar55;
                        uStack_388 = CONCAT44(auStack_3d8._4_4_ - fVar88,auStack_3d8._0_4_ - fVar56)
                        ;
                        uStack_398 = CONCAT44(fVar88,fVar56);
                        *(undefined8 *)(puVar35 + lVar7 + -8) = 0x112272;
                        uStack_3b8 = uVar28;
                        uStack_3a8 = uVar42;
                        pcStack_3a0 = pcVar21;
                        fStack_390 = fVar54;
                        fStack_38c = fVar55;
                        auVar83 = ClosestPoint::GetClosestPointOnTriangle<false>
                                            (uStack_388,CONCAT44(fStack_37c,fStack_380),
                                             auStack_378._0_8_,auStack_378._8_8_,auStack_368,
                                             uStack_360,&uStack_34c);
                        uVar24 = (ulong)uStack_3bc;
                        fVar56 = auVar83._8_4_ * auVar83._8_4_ +
                                 auVar83._4_4_ * auVar83._4_4_ + auVar83._0_4_ * auVar83._0_4_ + 0.0
                        ;
                        if (fVar56 < *(float *)((undefined8)param_1 + 0xd4)) {
                          *(undefined1 (*) [16])((undefined8)param_1 + 0xc0) = auVar83;
                          auVar14._4_4_ = fStack_3f4;
                          auVar14._0_4_ = fStack_3f8;
                          auVar14._8_4_ = fStack_3f0;
                          auVar14._12_4_ = fStack_3ec;
                          *(undefined4 *)((undefined8)param_1 + 0xd8) = uStack_34c;
                          *(undefined1 (*) [16])((undefined8)param_1 + 0x90) = auStack_3d8;
                          *(undefined1 (*) [16])((undefined8)param_1 + 0xa0) = auStack_3e8;
                          *(undefined1 (*) [16])((undefined8)param_1 + 0xb0) = auVar14;
                          *(float *)((undefined8)param_1 + 0xd4) = fVar56;
                        }
                        uVar28 = uStack_3b8;
                        pcVar21 = pcStack_3a0;
                        uVar42 = uStack_3a8;
                        fVar56 = (float)uStack_398;
                        fVar88 = uStack_398._4_4_;
                        fVar54 = fStack_390;
                        fVar55 = fStack_38c;
                        if ((uint)uStack_3b0 == 1) goto LAB_00112170;
LAB_0011233e:
                        if (pcVar21[1] != '\0') break;
                        auStack_3d8 = *pauVar44;
                        fStack_3f8 = *(float *)pauVar44[1];
                        fStack_3f4 = *(float *)(pauVar44[1] + 4);
                        fStack_3f0 = *(float *)(pauVar44[1] + 8);
                        fStack_3ec = *(float *)(pauVar44[1] + 0xc);
                        uVar46 = 1;
                        auStack_3e8 = pauVar44[uVar42];
                      }
                      iVar31 = iVar31 + 1;
                      iVar52 = iStack_3c8;
                      uVar37 = uStack_3c0;
                      uVar22 = uStack_3c4;
                      if (iVar50 == iVar31) goto LAB_00112372;
                    }
LAB_00112170:
                    iVar31 = iVar31 + 1;
                    iVar52 = iStack_3c8;
                    uVar37 = uStack_3c0;
                    uVar22 = uStack_3c4;
                  } while (iVar50 != iVar31);
                }
LAB_00112372:
                uVar22 = uVar22 + 1;
                iVar50 = iVar50 + uVar20;
                iVar52 = iVar52 + uVar20;
                iVar48 = iStack_40c;
                uVar49 = uStack_410;
                iVar31 = iStack_414;
              } while (uStack_408 != uVar22);
            }
            iVar52 = uVar49 - 1;
            iVar50 = iVar52 + iVar31;
            lVar51 = (long)iVar52;
            while( true ) {
              if (iVar52 == -1) goto LAB_001123de;
              if (*(float *)((undefined8)param_1 +
                            lVar51 * 4 + ((long)iVar50 - (long)(int)uVar49) * 4 + 0xe0) <=
                  *(float *)((undefined8)param_1 + 0xd4) &&
                  *(float *)((undefined8)param_1 + 0xd4) !=
                  *(float *)((undefined8)param_1 +
                            lVar51 * 4 + ((long)iVar50 - (long)(int)uVar49) * 4 + 0xe0)) break;
              iVar52 = (int)(lVar51 + -1);
              lVar51 = lVar51 + -1;
            }
            uVar49 = (uint)lVar51;
          } while( true );
        }
        *(undefined1 (*) [16])pVVar1 = (undefined1  [16])0x0;
      }
LAB_001123de:
      lVar51 = (long)(iVar31 + -1);
      do {
        iVar31 = (int)lVar51;
        if (iVar31 < 0) goto LAB_00111770;
        fVar56 = *(float *)(param_1 + 0xd4);
        lVar29 = lVar51 * 4;
        lVar51 = lVar51 + -1;
      } while (fVar56 < *(float *)(param_1 + lVar29 + 0xdc) ||
               fVar56 == *(float *)(param_1 + lVar29 + 0xdc));
      local_250._0_4_ = iVar31;
      uVar20 = *(uint *)(local_250 + (long)iVar31 * 4 + 4);
    } while( true );
  }
LAB_00111770:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar32 + -8) = &UNK_00112ccf;
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HeightFieldShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::HeightFieldShape::CollideSoftBodyVertices
               (HeightFieldShape *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
               undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 (*pauVar8) [16];
  float *pfVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  long in_FS_OFFSET;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar27 [12];
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  undefined8 local_388;
  float fStack_34c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float local_268;
  float fStack_264;
  float fStack_260;
  float local_258;
  float local_254;
  int local_250;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles();
  iVar1 = *(int *)(param_3 + 1);
  pauVar8 = (undefined1 (*) [16])*param_3;
  pfVar9 = (float *)param_3[2];
  iVar2 = *(int *)(param_3 + 3);
  pauVar11 = (undefined1 (*) [16])param_3[4];
  iVar3 = *(int *)(param_3 + 5);
  pfVar10 = (float *)param_3[6];
  iVar4 = *(int *)(param_3 + 7);
  puVar7 = (undefined4 *)param_3[8];
  iVar5 = *(int *)(param_3 + 9);
  puVar6 = *pauVar8;
  if (pauVar8 != (undefined1 (*) [16])(puVar6 + param_4 * iVar1)) {
    do {
      if (0.0 < *pfVar9) {
        auVar18 = *pauVar8;
        fVar16 = auVar18._0_4_;
        fVar19 = auVar18._4_4_;
        fVar20 = auVar18._8_4_;
        local_254 = 3.4028235e+38;
        local_2a8 = fVar16 * local_2e8 + fVar19 * local_2d8 + fVar20 * local_2c8 + local_2b8;
        fStack_2a4 = fVar16 * fStack_2e4 + fVar19 * fStack_2d4 + fVar20 * fStack_2c4 + fStack_2b4;
        fStack_2a0 = fVar16 * fStack_2e0 + fVar19 * fStack_2d0 + fVar20 * fStack_2c0 + fStack_2b0;
        fStack_29c = fVar16 * fStack_2dc + fVar19 * fStack_2cc + fVar20 * fStack_2bc + fStack_2ac;
        WalkHeightField<JPH::HeightFieldShape::CollideSoftBodyVertices(JPH::Mat44_const&,JPH::Vec3,JPH::CollideSoftBodyVertexIterator_const&,unsigned_int,int)const::Visitor>
                  (param_1,(Visitor *)&local_328);
        uVar13 = _LC45;
        if (local_254 < _LC13) {
          fVar21 = local_298 * local_328 + fStack_294 * local_318 + fStack_290 * local_308 +
                   local_2f8;
          fVar24 = local_298 * fStack_324 + fStack_294 * fStack_314 + fStack_290 * fStack_304 +
                   fStack_2f4;
          fVar25 = local_298 * fStack_320 + fStack_294 * fStack_310 + fStack_290 * fStack_300 +
                   fStack_2f0;
          fVar12 = (local_288 * local_328 + fStack_284 * local_318 + fStack_280 * local_308 +
                   local_2f8) - fVar21;
          fVar14 = (local_288 * fStack_324 + fStack_284 * fStack_314 + fStack_280 * fStack_304 +
                   fStack_2f4) - fVar24;
          fVar15 = (local_288 * fStack_320 + fStack_284 * fStack_310 + fStack_280 * fStack_300 +
                   fStack_2f0) - fVar25;
          fVar26 = (local_278 * local_328 + fStack_274 * local_318 + fStack_270 * local_308 +
                   local_2f8) - fVar21;
          fVar29 = (local_278 * fStack_324 + fStack_274 * fStack_314 + fStack_270 * fStack_304 +
                   fStack_2f4) - fVar24;
          fVar30 = (local_278 * fStack_320 + fStack_274 * fStack_310 + fStack_270 * fStack_300 +
                   fStack_2f0) - fVar25;
          fVar31 = fVar29 * fVar12 - fVar14 * fVar26;
          fVar14 = fVar30 * fVar14 - fVar15 * fVar29;
          fVar15 = fVar26 * fVar15 - fVar12 * fVar30;
          fVar12 = fVar31 * fVar31 + fVar15 * fVar15 + fVar14 * fVar14 + 0.0;
          fStack_34c = auVar18._12_4_;
          auVar27 = __LC57;
          if (_LC52 < fVar12) {
            fVar12 = SQRT(fVar12);
            auVar28._4_4_ = fVar15;
            auVar28._0_4_ = fVar14;
            auVar28._8_4_ = fVar31;
            auVar28._12_4_ = fVar31;
            auVar18._4_4_ = fVar12;
            auVar18._0_4_ = fVar12;
            auVar18._8_4_ = fVar12;
            auVar18._12_4_ = fVar12;
            auVar18 = divps(auVar28,auVar18);
            auVar27 = auVar18._0_12_;
          }
          fVar14 = local_258 * auVar27._0_4_;
          fVar15 = local_258 * auVar27._4_4_;
          fVar12 = local_258 * auVar27._8_4_;
          local_388 = CONCAT44(fVar15,fVar14);
          if (local_250 == 7) {
            fVar16 = (fVar25 - fVar20) * fVar12 +
                     (fVar24 - fVar19) * fVar15 + (fVar21 - fVar16) * fVar14 + 0.0;
            if (_LC58 < fVar16) {
              fVar16 = _LC58;
              if (*pfVar10 < _LC58) goto LAB_0011313d;
            }
            else if (*pfVar10 < fVar16) {
LAB_0011313d:
              *pfVar10 = fVar16;
              uVar13 = (uint)(fVar24 * fVar15 + fVar21 * fVar14 + 0.0 + fVar25 * fVar12) ^ _LC45;
              *(float *)*pauVar11 = fVar14;
              *(float *)(*pauVar11 + 4) = fVar15;
              *(float *)(*pauVar11 + 8) = fVar12;
              *(uint *)(*pauVar11 + 0xc) = uVar13;
              *puVar7 = param_5;
            }
          }
          else {
            fVar26 = local_268 + local_2a8;
            fVar29 = fStack_264 + fStack_2a4;
            fVar30 = fStack_260 + fStack_2a0;
            fVar21 = fVar26 * local_328 + fVar29 * local_318 + fVar30 * local_308 + local_2f8;
            fVar24 = fVar26 * fStack_324 + fVar29 * fStack_314 + fVar30 * fStack_304 + fStack_2f4;
            fVar25 = fVar26 * fStack_320 + fVar29 * fStack_310 + fVar30 * fStack_300 + fStack_2f0;
            auVar17._0_4_ = fVar16 - fVar21;
            auVar17._4_4_ = fVar19 - fVar24;
            auVar17._8_4_ = fVar20 - fVar25;
            auVar17._12_4_ =
                 fStack_34c -
                 (fVar26 * fStack_31c + fVar29 * fStack_30c + fVar30 * fStack_2fc + fStack_2ec);
            if (0.0 < fVar12 * auVar17._8_4_ + fVar15 * auVar17._4_4_ + fVar14 * auVar17._0_4_ + 0.0
               ) {
              auVar22._0_4_ =
                   SQRT(auVar17._8_4_ * auVar17._8_4_ +
                        auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_ + 0.0);
              if (*pfVar10 < (float)((uint)auVar22._0_4_ ^ _LC45)) {
                *pfVar10 = (float)((uint)auVar22._0_4_ ^ _LC45);
                if (0.0 < auVar22._0_4_) {
                  auVar22._4_4_ = auVar22._0_4_;
                  auVar22._8_4_ = auVar22._0_4_;
                  auVar22._12_4_ = auVar22._0_4_;
                  auVar18 = divps(auVar17,auVar22);
                  local_388 = auVar18._0_8_;
                  fVar12 = auVar18._8_4_;
                }
                auVar23._12_4_ =
                     (uint)(fVar25 * fVar12 +
                           fVar24 * (float)((ulong)local_388 >> 0x20) +
                           fVar21 * (float)local_388 + 0.0) ^ uVar13;
                auVar23._8_4_ = fVar12;
                auVar23._0_8_ = local_388;
                *pauVar11 = auVar23;
                *puVar7 = param_5;
              }
            }
          }
        }
      }
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + iVar1);
      pfVar9 = (float *)((long)pfVar9 + (long)iVar2);
      puVar7 = (undefined4 *)((long)puVar7 + (long)iVar5);
      pauVar11 = (undefined1 (*) [16])(*pauVar11 + iVar3);
      pfVar10 = (float *)((long)pfVar10 + (long)iVar4);
    } while ((undefined1 (*) [16])(puVar6 + param_4 * iVar1) != pauVar8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::HeightFieldShape::HeightFieldShape(JPH::HeightFieldShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::HeightFieldShape::HeightFieldShape
          (HeightFieldShape *this,HeightFieldShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  HeightFieldShape *pHVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  HeightFieldShape HVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  HeightFieldShape *pHVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  float fVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  long *plVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long *plVar29;
  long *plVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  ushort *puVar33;
  byte bVar34;
  uint uVar35;
  uint uVar36;
  long *plVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  byte *pbVar42;
  ulong uVar43;
  ulong uVar44;
  ushort uVar45;
  uint uVar46;
  int iVar47;
  int iVar48;
  ulong uVar49;
  char *pcVar50;
  ulong uVar51;
  uint uVar52;
  int iVar53;
  ushort *puVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  ushort uVar58;
  ulong *puVar59;
  ushort uVar60;
  long lVar61;
  long in_FS_OFFSET;
  undefined4 uVar62;
  float fVar63;
  float local_e8;
  undefined1 (*local_d0) [16];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  Result *pRStack_68;
  long lStack_60;
  undefined8 auStack_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined2 *)(this + 0x18) = 0xd04;
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = uVar15;
  *(undefined8 *)(this + 0x28) = uVar16;
  iVar53 = *(int *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar20 = *(uint *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x10) = uVar10;
  *(undefined ***)this = &PTR__HeightFieldShape_00116440;
  *(undefined8 *)(this + 0x30) = uVar15;
  *(undefined8 *)(this + 0x38) = uVar16;
  uVar35 = (iVar53 + uVar20) - 1;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  uVar62 = *(undefined4 *)(param_1 + 0x74);
  *(ulong *)(this + 0x40) = CONCAT44(uVar20,uVar35 - uVar35 % uVar20);
  this[0x54] = SUB41(uVar62,0);
  *(undefined4 *)(this + 0x56) = 0xffffffff;
  uVar35 = *(uint *)(param_1 + 0x6c);
  uVar49 = (ulong)uVar35;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  this[200] = (HeightFieldShape)0x0;
  this[0x55] = (HeightFieldShape)((char)(1 << ((byte)SUB41(uVar62,0) & 0x1f)) + -1);
  *(undefined1 (*) [16])(this + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb0) = (undefined1  [16])0x0;
  if (uVar35 == 0) {
    if ((HeightFieldShapeSettings *)(this + 0x78) != param_1 + 0xa8) {
      plVar29 = *(long **)(param_1 + 0xb8);
      uVar49 = 0;
      lVar22 = *(long *)(param_1 + 0xa8) * 8;
      plVar37 = plVar29 + *(long *)(param_1 + 0xa8);
LAB_00113996:
      *(undefined8 *)(this + 0x78) = 0;
      if (uVar49 < (ulong)(lVar22 >> 3)) {
        puVar26 = (undefined8 *)(*Allocate)(lVar22);
        puVar41 = *(undefined8 **)(this + 0x88);
        if (puVar41 != (undefined8 *)0x0) {
          lVar61 = *(long *)(this + 0x78);
          if (puVar26 < puVar41) {
            for (puVar31 = puVar26; puVar31 < puVar26 + lVar61; puVar31 = puVar31 + 1) {
              uVar10 = *puVar41;
              puVar41 = puVar41 + 1;
              *puVar31 = uVar10;
            }
          }
          else {
            puVar41 = puVar41 + lVar61 + -1;
            puVar31 = puVar26 + lVar61 + -1;
            if (!CARRY8(lVar61 * 8 - 8,(ulong)puVar26)) {
              do {
                uVar10 = *puVar41;
                puVar32 = puVar31 + -1;
                puVar41 = puVar41 + -1;
                *puVar31 = uVar10;
                puVar31 = puVar32;
              } while (puVar26 <= puVar32);
            }
          }
          (*Free)();
        }
        *(undefined8 **)(this + 0x88) = puVar26;
        *(long *)(this + 0x80) = lVar22 >> 3;
      }
      for (; plVar29 != plVar37; plVar29 = plVar29 + 1) {
        lVar22 = *(long *)(this + 0x78);
        *(long *)(this + 0x78) = lVar22 + 1;
        lVar61 = *plVar29;
        *(long *)(*(long *)(this + 0x88) + lVar22 * 8) = lVar61;
        if (lVar61 != 0) {
          LOCK();
          *(int *)(lVar61 + 8) = *(int *)(lVar61 + 8) + 1;
          UNLOCK();
        }
      }
      goto LAB_001139e0;
    }
  }
  else {
    plVar25 = (long *)(*Allocate)(uVar49 * 8);
    plVar37 = *(long **)(this + 0x88);
    if (plVar37 != (long *)0x0) {
      lVar22 = *(long *)(this + 0x78);
      if (plVar25 < plVar37) {
        for (plVar29 = plVar25; plVar29 < plVar25 + lVar22; plVar29 = plVar29 + 1) {
          lVar61 = *plVar37;
          plVar37 = plVar37 + 1;
          *plVar29 = lVar61;
        }
      }
      else {
        plVar37 = plVar37 + lVar22 + -1;
        plVar29 = plVar25 + lVar22 + -1;
        if (!CARRY8(lVar22 * 8 - 8,(ulong)plVar25)) {
          do {
            lVar22 = *plVar37;
            plVar30 = plVar29 + -1;
            plVar37 = plVar37 + -1;
            *plVar29 = lVar22;
            plVar29 = plVar30;
          } while (plVar25 <= plVar30);
        }
      }
      (*Free)();
    }
    *(long **)(this + 0x88) = plVar25;
    *(ulong *)(this + 0x80) = uVar49;
    if ((HeightFieldShapeSettings *)(this + 0x78) != param_1 + 0xa8) {
      plVar29 = *(long **)(param_1 + 0xb8);
      lVar22 = *(long *)(param_1 + 0xa8) * 8;
      plVar37 = plVar29 + *(long *)(param_1 + 0xa8);
      if ((*(long *)(this + 0x78) != 0) &&
         (plVar30 = plVar25 + *(long *)(this + 0x78), plVar25 < plVar30)) {
LAB_00113af7:
        do {
          plVar11 = (long *)*plVar25;
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              if (*(code **)(*plVar11 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                (*Free)();
                plVar25 = plVar25 + 1;
                if (plVar30 <= plVar25) break;
                goto LAB_00113af7;
              }
              (**(code **)(*plVar11 + 0x18))();
            }
          }
          plVar25 = plVar25 + 1;
        } while (plVar25 < plVar30);
        uVar49 = *(ulong *)(this + 0x80);
      }
      goto LAB_00113996;
    }
LAB_001139e0:
    uVar20 = *(uint *)(this + 0x44);
  }
  if (6 < uVar20 - 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar50 = "HeightFieldShape: Block size must be in the range [2, 8]!";
LAB_00113a0e:
      Result<JPH::Ref<JPH::Shape>>::SetError((Result<JPH::Ref<JPH::Shape>> *)param_2,pcVar50);
      return;
    }
    goto LAB_0011445c;
  }
  if (7 < *(int *)(param_1 + 0x74) - 1U) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar50 = "HeightFieldShape: Bits per sample must be in the range [1, 8]!";
      goto LAB_00113a0e;
    }
    goto LAB_0011445c;
  }
  uVar20 = *(uint *)(this + 0x40) / uVar20;
  if (uVar20 < 2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar50 = "HeightFieldShape: Sample count too low!";
      goto LAB_00113a0e;
    }
    goto LAB_0011445c;
  }
  if (0x4000 < uVar20) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      pcVar50 = "HeightFieldShape: Sample count too high!";
      goto LAB_00113a0e;
    }
    goto LAB_0011445c;
  }
  uVar35 = *(uint *)(this + 0x40) - 1;
  if (uVar35 != 0) {
    iVar53 = 0x1f;
    if (uVar35 != 0) {
      for (; uVar35 >> iVar53 == 0; iVar53 = iVar53 + -1) {
      }
    }
    if (0x20 < iVar53 * 2 + 3U) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar50 = "HeightFieldShape: Size exceeds the amount of available sub shape ID bits!";
        goto LAB_00113a0e;
      }
      goto LAB_0011445c;
    }
  }
  uVar49 = *(ulong *)(this + 0x78);
  if (uVar49 == 0) {
    if (*(long *)(param_1 + 0x90) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar50 = "No materials present, mMaterialIndices should be empty";
        goto LAB_00113a0e;
      }
      goto LAB_0011445c;
    }
    HeightFieldShapeSettings::DetermineMinAndMaxSample(param_1,&fStack_74,&fStack_70,&fStack_6c);
    local_e8 = fStack_70;
    if (fStack_70 < fStack_74) goto LAB_00114249;
  }
  else {
    if (0x100 < uVar49) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar50 = "Supporting max 256 materials per height field";
        goto LAB_00113a0e;
      }
      goto LAB_0011445c;
    }
    pbVar42 = *(byte **)(param_1 + 0xa0);
    pbVar38 = pbVar42 + *(long *)(param_1 + 0x90);
    if (pbVar42 != pbVar38) {
LAB_00113b7d:
      if (*pbVar42 < uVar49) goto LAB_00113b70;
      JPH::StringFormat_abi_cxx11_
                ((char *)&pRStack_68,"Material %u is beyond material list (size: %u)",
                 (ulong)*pbVar42,uVar49 & 0xffffffff);
      if (param_2[0x20] == (Result)0x1) {
        pHVar13 = *(HeightFieldShape **)param_2;
        if (pHVar13 != (HeightFieldShape *)0x0) {
          LOCK();
          pHVar2 = pHVar13 + 8;
          *(int *)pHVar2 = *(int *)pHVar2 + -1;
          UNLOCK();
          if (*(int *)pHVar2 == 0) {
            if (*(code **)(*(long *)pHVar13 + 8) == ~HeightFieldShape) {
              ~HeightFieldShape(pHVar13);
              (*Free)(pHVar13);
            }
            else {
              (**(code **)(*(long *)pHVar13 + 8))();
            }
          }
        }
      }
      else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
        (*Free)();
      }
      param_2[0x20] = (Result)0x0;
      *(Result **)param_2 = param_2 + 0x10;
      if (pRStack_68 == (Result *)auStack_58) {
        uVar49 = lStack_60 + 1;
        uVar35 = (uint)uVar49;
        if (uVar35 < 8) {
          if ((uVar49 & 4) == 0) {
            if ((uVar35 != 0) && (param_2[0x10] = *pRStack_68, (uVar49 & 2) != 0)) {
              *(undefined2 *)(param_2 + (uVar49 & 0xffffffff) + 0xe) =
                   *(undefined2 *)(pRStack_68 + ((uVar49 & 0xffffffff) - 2));
            }
          }
          else {
            *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pRStack_68;
            *(undefined4 *)(param_2 + (uVar49 & 0xffffffff) + 0xc) =
                 *(undefined4 *)(pRStack_68 + ((uVar49 & 0xffffffff) - 4));
          }
        }
        else {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)pRStack_68;
          *(undefined8 *)(param_2 + (uVar49 & 0xffffffff) + 8) =
               *(undefined8 *)(pRStack_68 + ((uVar49 & 0xffffffff) - 8));
          lVar22 = (long)(param_2 + 0x10) - ((ulong)(param_2 + 0x18) & 0xfffffffffffffff8);
          uVar35 = uVar35 + (int)lVar22 & 0xfffffff8;
          if (7 < uVar35) {
            uVar20 = 0;
            do {
              uVar49 = (ulong)uVar20;
              uVar20 = uVar20 + 8;
              *(undefined8 *)(((ulong)(param_2 + 0x18) & 0xfffffffffffffff8) + uVar49) =
                   *(undefined8 *)(pRStack_68 + (uVar49 - lVar22));
            } while (uVar20 < uVar35);
          }
        }
      }
      else {
        *(Result **)param_2 = pRStack_68;
        *(undefined8 *)(param_2 + 0x10) = auStack_58[0];
      }
      *(long *)(param_2 + 8) = lStack_60;
      param_2[0x20] = (Result)0x2;
      goto LAB_00113c09;
    }
    HeightFieldShapeSettings::DetermineMinAndMaxSample(param_1,&fStack_74,&fStack_70,&fStack_6c);
    local_e8 = fStack_70;
    if (fStack_70 < fStack_74) goto LAB_001142cd;
  }
LAB_001133d4:
  fVar18 = fStack_74;
  lVar22 = 0;
  AllocateBuffers(this);
  uVar49 = (ulong)(uint)(*(int *)(this + 0x40) * *(int *)(this + 0x40));
  if (uVar49 != 0) {
    lVar22 = (*Reallocate)(0,0,uVar49 * 2);
  }
  uVar35 = *(uint *)(param_1 + 0x60);
  uVar43 = 0;
  uVar57 = 0;
  if (uVar35 != 0) {
    do {
      uVar52 = 0;
      uVar44 = uVar43;
      do {
        while( true ) {
          uVar44 = uVar44 + 1;
          fVar63 = *(float *)(*(long *)(param_1 + 0x88) + (ulong)(uVar57 * uVar35 + uVar52) * 4);
          if (fVar63 != _LC13) break;
          if (uVar49 < uVar44) {
            uVar43 = uVar49 * 2;
            uVar49 = uVar43;
            if (uVar43 <= uVar44) {
              uVar49 = uVar44;
            }
            lVar22 = (*Reallocate)(lVar22,uVar43,uVar49 * 2);
            uVar35 = *(uint *)(param_1 + 0x60);
          }
          uVar52 = uVar52 + 1;
          *(undefined2 *)(lVar22 + -2 + uVar44 * 2) = 0xffff;
          if (uVar35 <= uVar52) goto LAB_0011354b;
        }
        fVar63 = (fVar63 - fVar18) * fStack_6c;
        if ((float)(_LC44 & (uint)fVar63) < _LC42) {
          fVar63 = (float)((uint)((float)(int)fVar63 -
                                 (float)(-(uint)(fVar63 < (float)(int)fVar63) & _LC4)) |
                          ~_LC44 & (uint)fVar63);
        }
        iVar53 = (int)fVar63;
        if (0xfffd < iVar53) {
          iVar53 = 0xfffd;
        }
        iVar48 = 0;
        if (-1 < iVar53) {
          iVar48 = iVar53;
        }
        if (uVar49 < uVar44) {
          uVar43 = uVar49 * 2;
          uVar49 = uVar43;
          if (uVar43 <= uVar44) {
            uVar49 = uVar44;
          }
          lVar22 = (*Reallocate)(lVar22,uVar43,uVar49 * 2);
          uVar35 = *(uint *)(param_1 + 0x60);
        }
        uVar52 = uVar52 + 1;
        *(short *)(lVar22 + -2 + uVar44 * 2) = (short)iVar48;
      } while (uVar52 < uVar35);
LAB_0011354b:
      uVar43 = uVar44;
      if (uVar35 < *(uint *)(this + 0x40)) {
        do {
          uVar43 = uVar43 + 1;
          if (uVar49 < uVar43) {
            uVar28 = uVar49 * 2;
            uVar49 = uVar28;
            if (uVar28 <= uVar43) {
              uVar49 = uVar43;
            }
            lVar22 = (*Reallocate)(lVar22,uVar28,uVar49 * 2);
          }
          *(undefined2 *)(lVar22 + -2 + uVar43 * 2) = 0xffff;
        } while ((uVar35 + (int)uVar43) - (int)uVar44 < *(uint *)(this + 0x40));
        uVar35 = *(uint *)(param_1 + 0x60);
      }
      uVar57 = uVar57 + 1;
    } while (uVar57 < uVar35);
  }
  if (uVar35 < *(uint *)(this + 0x40)) {
    uVar43 = uVar43 + 1;
    do {
      uVar57 = 0;
      do {
        if (uVar49 < uVar43) {
          uVar44 = uVar49 * 2;
          uVar49 = uVar44;
          if (uVar44 <= uVar43) {
            uVar49 = uVar43;
          }
          lVar22 = (*Reallocate)(lVar22,uVar44,uVar49 * 2);
        }
        uVar52 = *(uint *)(this + 0x40);
        uVar57 = uVar57 + 1;
        *(undefined2 *)(lVar22 + -2 + uVar43 * 2) = 0xffff;
        uVar43 = uVar43 + 1;
      } while (uVar57 < uVar52);
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar52);
  }
  if (fVar18 <= local_e8) {
    fStack_74 = fVar18 - _LC2 / ((float)(byte)this[0x55] * fStack_6c);
    *(float *)(this + 0x24) = fStack_74 * *(float *)(this + 0x34) + *(float *)(this + 0x24);
  }
  *(float *)(this + 0x34) = *(float *)(this + 0x34) / fStack_6c;
  uVar35 = 0x1f;
  if (uVar20 - 1 != 0) {
    for (; uVar20 - 1 >> uVar35 == 0; uVar35 = uVar35 - 1) {
    }
  }
  uVar49 = (ulong)(0x21 - (uVar35 ^ 0x1f));
  lVar61 = uVar49 * 0x18;
  pauVar23 = (undefined1 (*) [16])(*Allocate)(lVar61);
  for (pauVar24 = pauVar23; pauVar24 < (undefined1 (*) [16])((long)pauVar23 + lVar61);
      pauVar24 = (undefined1 (*) [16])(pauVar24[1] + 8)) {
    *(undefined8 *)pauVar24[1] = 0;
    *pauVar24 = (undefined1  [16])0x0;
  }
  bVar34 = 0x20 - (char)(uVar35 ^ 0x1f);
  puVar59 = (ulong *)((long)pauVar23 + lVar61 + -0x18);
  uVar35 = 1 << (bVar34 & 0x1f);
  puVar33 = (ushort *)puVar59[2];
  uVar43 = (ulong)(uVar35 << (bVar34 & 0x1f));
  if (puVar59[1] < uVar43) {
    puVar33 = (ushort *)(*Reallocate)(puVar33,puVar59[1] * 4,uVar43 * 4);
    puVar59[2] = (ulong)puVar33;
    puVar59[1] = uVar43;
  }
  *puVar59 = uVar43;
  uVar62 = _LC48;
  iVar53 = *(int *)(this + 0x44);
  uVar57 = 0;
  uVar52 = 0;
  do {
    iVar48 = iVar53 + 1;
    if (uVar52 == uVar35 - 1) {
      iVar48 = iVar53;
    }
    uVar55 = 0;
    uVar36 = iVar48 + uVar57;
    uVar56 = 0;
    puVar54 = puVar33;
    do {
      *(undefined4 *)puVar54 = uVar62;
      iVar47 = iVar53 + 1;
      if (uVar55 == uVar35 - 1) {
        iVar47 = iVar53;
      }
      if (iVar48 != 0) {
        uVar40 = uVar57;
        if (iVar47 == 0) {
          do {
            if (uVar36 == uVar40 + 1) break;
            uVar40 = uVar40 + 2;
          } while (uVar36 != uVar40);
        }
        else {
          uVar40 = *(uint *)(this + 0x40);
          uVar39 = uVar57;
          do {
            uVar21 = uVar56;
            do {
              while( true ) {
                uVar46 = uVar21;
                if (uVar21 <= uVar39) {
                  uVar46 = uVar39;
                }
                if ((uVar40 <= uVar46) ||
                   (uVar19 = *(ushort *)(lVar22 + (ulong)(uVar40 * uVar39 + uVar21) * 2),
                   uVar19 == 0xffff)) break;
                uVar45 = *puVar54;
                if (uVar19 < *puVar54) {
                  uVar45 = uVar19;
                }
                *puVar54 = uVar45;
                uVar45 = uVar19 + 1;
                if ((ushort)(uVar19 + 1) < puVar54[1]) {
                  uVar45 = puVar54[1];
                }
                uVar21 = uVar21 + 1;
                puVar54[1] = uVar45;
                if (iVar47 + uVar56 == uVar21) goto LAB_00113820;
              }
              uVar21 = uVar21 + 1;
            } while (iVar47 + uVar56 != uVar21);
LAB_00113820:
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar36);
        }
      }
      uVar55 = uVar55 + 1;
      puVar54 = puVar54 + 2;
      uVar56 = uVar56 + iVar53;
    } while (uVar55 != uVar35);
    uVar57 = uVar57 + iVar53;
    uVar52 = uVar52 + 1;
    puVar33 = puVar33 + (ulong)uVar35 * 2;
  } while (uVar52 != uVar55);
  uVar52 = uVar52 >> 1;
  do {
    uVar43 = puVar59[2];
    uVar44 = (ulong)(uVar52 * uVar52);
    if (puVar59[-2] < uVar44) {
      uVar28 = (*Reallocate)(puVar59[-1],puVar59[-2] * 4,uVar44 * 4);
      puVar59[-2] = uVar44;
      uVar62 = _LC48;
      puVar59[-1] = uVar28;
    }
    uVar28 = puVar59[-1];
    iVar53 = 0;
    uVar51 = 0;
    puVar59[-3] = uVar44;
    do {
      uVar44 = uVar51 & 0xffffffff;
      uVar35 = 0;
      puVar33 = (ushort *)(uVar28 + uVar51);
      do {
        iVar47 = (int)uVar44;
        iVar48 = 2;
        uVar45 = 0;
        *(undefined4 *)puVar33 = uVar62;
        uVar19 = 0xffff;
        while( true ) {
          puVar54 = (ushort *)(uVar43 + uVar44 * 4);
          uVar60 = *puVar54;
          if (uVar19 <= uVar60) {
            uVar60 = uVar19;
          }
          *puVar33 = uVar60;
          uVar58 = puVar54[1];
          if (uVar58 <= uVar45) {
            uVar58 = uVar45;
          }
          puVar54 = (ushort *)(uVar43 + (ulong)((int)uVar44 + 1) * 4);
          puVar33[1] = uVar58;
          uVar19 = *puVar54;
          if (uVar60 <= uVar19) {
            uVar19 = uVar60;
          }
          *puVar33 = uVar19;
          uVar45 = puVar54[1];
          if (uVar45 <= uVar58) {
            uVar45 = uVar58;
          }
          uVar44 = (ulong)((int)uVar44 + uVar52 * 2);
          puVar33[1] = uVar45;
          if (iVar48 == 1) break;
          iVar48 = 1;
        }
        puVar33 = puVar33 + 2;
        uVar44 = (ulong)(iVar47 + 2);
        uVar35 = uVar35 + 1;
      } while (uVar52 != uVar35);
      iVar53 = iVar53 + 2;
      uVar51 = uVar51 + (ulong)uVar52 * 4;
    } while (uVar52 * 2 != iVar53);
    uVar52 = uVar52 >> 1;
    puVar59 = puVar59 + -3;
  } while (uVar52 != 0);
  *(undefined4 *)(this + 0x56) = **(undefined4 **)pauVar23[1];
  *(undefined8 *)*pauVar23 = 0;
  (*Free)();
  uVar49 = uVar49 - 1;
  lVar61 = uVar49 * 0x18;
  pauVar24 = (undefined1 (*) [16])((long)pauVar23 + lVar61);
  uVar35 = uVar20 + 1 >> 1;
  for (pauVar27 = pauVar23; pauVar27 < pauVar24; pauVar27 = (undefined1 (*) [16])(pauVar27[1] + 8))
  {
    uVar10 = *(undefined8 *)(pauVar27[2] + 8);
    *(undefined8 *)*pauVar27 = *(undefined8 *)(pauVar27[1] + 8);
    *(undefined8 *)(*pauVar27 + 8) = *(undefined8 *)pauVar27[2];
    *(undefined8 *)pauVar27[1] = uVar10;
  }
  uVar43 = 0;
  puVar41 = *(undefined8 **)(this + 0x60);
  local_d0 = pauVar23 + 1;
  do {
    bVar14 = (byte)uVar43;
    uVar20 = 1 << (bVar14 & 0x1f);
    iVar53 = 1;
    if (uVar35 < uVar20) {
      uVar20 = uVar35;
    }
    uVar44 = (ulong)uVar20;
    iVar48 = 0;
    lVar12 = *(long *)*local_d0;
    puVar26 = puVar41;
    do {
      uVar57 = 0;
      puVar31 = puVar26;
      do {
        uVar52 = (uVar57 + (iVar48 << (bVar14 & 0x1f))) * 2;
        iVar47 = (iVar53 << (bVar14 & 0x1f)) + uVar57;
        uVar57 = uVar57 + 1;
        puVar3 = (undefined2 *)(lVar12 + (ulong)uVar52 * 4);
        uVar51 = (ulong)(uVar52 + 1);
        uVar52 = iVar47 * 2;
        puVar4 = (undefined2 *)(lVar12 + (ulong)uVar52 * 4);
        uVar28 = (ulong)(uVar52 + 1);
        uVar8 = puVar3[1];
        uVar9 = puVar4[1];
        uVar5 = *(undefined2 *)(lVar12 + 2 + uVar51 * 4);
        uVar6 = *(undefined2 *)(lVar12 + 2 + uVar28 * 4);
        *puVar31 = CONCAT44(CONCAT22(*(undefined2 *)(lVar12 + uVar28 * 4),*puVar4),
                            CONCAT22(*(undefined2 *)(lVar12 + uVar51 * 4),*puVar3));
        *(uint *)(puVar31 + 1) = CONCAT22(uVar5,uVar8);
        *(uint *)((long)puVar31 + 0xc) = CONCAT22(uVar6,uVar9);
        puVar31 = puVar31 + 2;
      } while (uVar57 != uVar20);
      iVar48 = iVar48 + 2;
      puVar26 = puVar26 + uVar44 * 2;
      iVar53 = iVar53 + 2;
    } while (iVar48 != uVar20 * 2);
    uVar43 = uVar43 + 1;
    local_d0 = (undefined1 (*) [16])(local_d0[1] + 8);
    puVar41 = puVar41 + uVar44 * uVar44 * 2;
  } while (uVar43 < uVar49);
  memset(*(void **)(this + 0x68),0,(ulong)*(uint *)(this + 0x48));
  uVar20 = _LC44;
  uVar35 = _LC4;
  fVar18 = _LC42;
  if (*(int *)(this + 0x40) != 0) {
    uVar57 = 0;
    iVar53 = 0;
    do {
      uVar52 = 0;
      do {
        HVar7 = this[0x55];
        uVar36 = uVar52;
        if (uVar52 <= uVar57) {
          uVar36 = uVar57;
        }
        if ((uVar36 < *(uint *)(param_1 + 0x60)) &&
           (fVar63 = *(float *)(*(long *)(param_1 + 0x88) +
                               (ulong)(*(uint *)(param_1 + 0x60) * uVar57 + uVar52) * 4),
           fVar63 != _LC13)) {
          puVar33 = (ushort *)
                    (*(long *)((long)pauVar23 + lVar61 + -8) +
                    (ulong)((uVar57 / *(uint *)(this + 0x44) << (bVar34 & 0x1f)) +
                           uVar52 / *(uint *)(this + 0x44)) * 4);
          uVar36 = (uint)*puVar33;
          fVar63 = ((fVar63 - ((float)uVar36 / fStack_6c + fStack_74)) * (float)(byte)HVar7) /
                   ((float)(int)(puVar33[1] - uVar36) / fStack_6c);
          if ((float)((uint)fVar63 & uVar20) < fVar18) {
            fVar63 = (float)((uint)((float)(int)fVar63 -
                                   (float)(-(uint)(fVar63 < (float)(int)fVar63) & uVar35)) |
                            ~uVar20 & (uint)fVar63);
          }
          uVar36 = (int)fVar63;
          if ((int)fVar63 < 0) {
            uVar36 = 0;
          }
          uVar55 = (byte)HVar7 - 1;
          if ((int)uVar55 < (int)uVar36) {
            uVar36 = uVar55;
          }
        }
        else {
          uVar36 = (uint)(byte)HVar7;
        }
        uVar52 = uVar52 + 1;
        pbVar42 = (byte *)((ulong)(uint)(iVar53 >> 3) + *(long *)(this + 0x68));
        iVar48 = uVar36 << ((byte)iVar53 & 7);
        *pbVar42 = *pbVar42 | (byte)iVar48;
        pbVar42 = (byte *)((ulong)((iVar53 >> 3) + 1) + *(long *)(this + 0x68));
        *pbVar42 = *pbVar42 | (byte)((uint)iVar48 >> 8);
        iVar53 = iVar53 + *(int *)(param_1 + 0x74);
      } while (uVar52 < *(uint *)(this + 0x40));
      uVar57 = uVar57 + 1;
    } while (uVar57 < *(uint *)(this + 0x40));
  }
  CalculateActiveEdges(this,param_1);
  if ((1 < *(ulong *)(this + 0x78)) || (1 < *(uint *)(param_1 + 0x6c))) {
    StoreMaterialIndices(this,param_1);
  }
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  if (param_2[0x20] == (Result)0x1) {
    pHVar13 = *(HeightFieldShape **)param_2;
    if (pHVar13 != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar2 = pHVar13 + 8;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      UNLOCK();
      if (*(int *)pHVar2 == 0) {
        if (*(code **)(*(long *)pHVar13 + 8) == ~HeightFieldShape) {
          ~HeightFieldShape(pHVar13);
          (*Free)(pHVar13);
        }
        else {
          (**(code **)(*(long *)pHVar13 + 8))();
        }
      }
    }
  }
  else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
    (*Free)();
  }
  *(HeightFieldShape **)param_2 = this;
  param_2[0x20] = (Result)0x1;
  pcVar17 = Free;
  for (pauVar27 = pauVar23; Free = pcVar17, pauVar27 < pauVar24;
      pauVar27 = (undefined1 (*) [16])(pauVar27[1] + 8)) {
    if (*(long *)pauVar27[1] != 0) {
      *(undefined8 *)*pauVar27 = 0;
      (*pcVar17)();
    }
    pcVar17 = Free;
  }
  (*pcVar17)(pauVar23);
  if (lVar22 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001141ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(lVar22);
      return;
    }
    goto LAB_0011445c;
  }
  goto LAB_00113c09;
LAB_00113b70:
  pbVar42 = pbVar42 + 1;
  if (pbVar38 == pbVar42) goto LAB_00114287;
  goto LAB_00113b7d;
LAB_00114287:
  HeightFieldShapeSettings::DetermineMinAndMaxSample(param_1,&fStack_74,&fStack_70,&fStack_6c);
  local_e8 = fStack_70;
  if (fStack_74 <= fStack_70) goto LAB_001133d4;
LAB_001142cd:
  plVar25 = *(long **)(this + 0x88);
  plVar37 = plVar25 + uVar49;
  for (; plVar25 < plVar37; plVar25 = plVar25 + 1) {
    plVar29 = (long *)*plVar25;
    if (plVar29 != (long *)0x0) {
      LOCK();
      plVar30 = plVar29 + 1;
      *(int *)plVar30 = (int)*plVar30 + -1;
      UNLOCK();
      if ((int)*plVar30 == 0) {
        if (*(code **)(*plVar29 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
        }
        else {
          (**(code **)(*plVar29 + 0x18))();
        }
      }
    }
  }
LAB_00114249:
  *(undefined8 *)(this + 0x78) = 0;
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  if (param_2[0x20] == (Result)0x1) {
    pHVar13 = *(HeightFieldShape **)param_2;
    if (pHVar13 != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar2 = pHVar13 + 8;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      UNLOCK();
      if (*(int *)pHVar2 == 0) {
        if (*(code **)(*(long *)pHVar13 + 8) == ~HeightFieldShape) {
          ~HeightFieldShape(pHVar13);
          (*Free)(pHVar13);
        }
        else {
          (**(code **)(*(long *)pHVar13 + 8))();
        }
      }
    }
  }
  else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
    (*Free)();
  }
  *(HeightFieldShape **)param_2 = this;
  param_2[0x20] = (Result)0x1;
LAB_00113c09:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011445c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::HeightFieldShapeSettings::Create() const */

void JPH::HeightFieldShapeSettings::Create(void)

{
  HeightFieldShape *pHVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  HeightFieldShapeSettings HVar3;
  HeightFieldShape *this;
  long *__dest;
  HeightFieldShapeSettings *in_RSI;
  long *in_RDI;
  
  HVar3 = in_RSI[0x38];
  if (HVar3 == (HeightFieldShapeSettings)0x0) {
    this = (HeightFieldShape *)(*Allocate)(0xd0);
    HeightFieldShape::HeightFieldShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pHVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pHVar1 = *(int *)pHVar1 + -1;
    UNLOCK();
    if (*(int *)pHVar1 == 0) {
      if (*(code **)(*(long *)this + 8) == HeightFieldShape::~HeightFieldShape) {
        HeightFieldShape::~HeightFieldShape(this);
        (*Free)(this);
        HVar3 = in_RSI[0x38];
        goto LAB_00114649;
      }
      (**(code **)(*(long *)this + 8))();
    }
    HVar3 = in_RSI[0x38];
  }
LAB_00114649:
  *(HeightFieldShapeSettings *)(in_RDI + 4) = HVar3;
  if (HVar3 == (HeightFieldShapeSettings)0x1) {
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
  if (HVar3 != (HeightFieldShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_0011467b;
    }
    if (__n == 0) goto LAB_0011467b;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_0011467b:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
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



/* JPH::HeightFieldShape::MustBeStatic() const */

undefined8 JPH::HeightFieldShape::MustBeStatic(void)

{
  return 1;
}



/* JPH::HeightFieldShape::GetInnerRadius() const */

undefined8 JPH::HeightFieldShape::GetInnerRadius(void)

{
  return 0;
}



/* JPH::HeightFieldShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&,
   float&, float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::HeightFieldShape::GetSubmergedVolume(void)

{
  return;
}



/* JPH::HeightFieldShape::GetVolume() const */

undefined8 JPH::HeightFieldShape::GetVolume(void)

{
  return 0;
}



/* JPH::TempAllocatorMalloc::Allocate(unsigned int) */

undefined8 __thiscall JPH::TempAllocatorMalloc::Allocate(TempAllocatorMalloc *this,uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0011488f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*AlignedAllocate)(param_1,0x10);
    return uVar1;
  }
  return 0;
}



/* JPH::TempAllocatorMalloc::Free(void*, unsigned int) */

void JPH::TempAllocatorMalloc::Free(void *param_1,uint param_2)

{
  undefined4 in_register_00000034;
  
  if (CONCAT44(in_register_00000034,param_2) != 0) {
                    /* WARNING: Could not recover jumptable at 0x001148ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*AlignedFree)(CONCAT44(in_register_00000034,param_2));
    return;
  }
  return;
}



/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
  return;
}



/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
                    /* WARNING: Could not recover jumptable at 0x001148d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001148f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::HeightFieldShape::GetSubShapeIDBitsRecursive() const */

int __thiscall JPH::HeightFieldShape::GetSubShapeIDBitsRecursive(HeightFieldShape *this)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  uVar1 = *(int *)(this + 0x40) - 1;
  if (uVar1 != 0) {
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar2 = iVar2 * 2 + 3;
  }
  return iVar2;
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
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
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
  
  fVar10 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == HeightFieldShape::GetLocalBounds) {
    HeightFieldShape::GetLocalBounds();
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_74 * fStack_64,local_78 * local_68);
  auVar7._8_4_ = (float)param_2 * fStack_60;
  auVar7._12_4_ = fVar10 * fStack_5c;
  lVar6 = 0;
  fStack_50 = (float)param_2 * fStack_50;
  fVar10 = fVar10 * fStack_4c;
  auVar12._8_4_ = auVar7._8_4_;
  auVar12._0_8_ = auVar7._0_8_;
  auVar12._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_74 * fStack_54;
  auVar9._0_4_ = local_78 * local_58;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fVar10;
  local_38 = maxps(auVar12,auVar9);
  auVar20._4_4_ = fStack_74 * fStack_54;
  auVar20._0_4_ = local_78 * local_58;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fVar10;
  local_48 = minps(auVar7,auVar20);
  fVar10 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar11 = fVar10;
  fVar13 = fVar16;
  fVar14 = fVar17;
  fVar15 = fVar18;
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
    fVar11 = fVar11 + auVar20._0_4_;
    fVar13 = fVar13 + auVar20._4_4_;
    fVar14 = fVar14 + auVar20._8_4_;
    fVar15 = fVar15 + auVar20._12_4_;
    fVar10 = fVar10 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar11;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  param_1[3] = fVar15;
  param_1[4] = fVar10;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings() */

void __thiscall
JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings(HeightFieldShapeSettings *this)

{
  long *plVar1;
  HeightFieldShape *pHVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  HeightFieldShape *this_00;
  
  plVar5 = *(long **)(this + 0xb8);
  *(undefined ***)this = &PTR_GetRTTI_00116408;
  if (plVar5 != (long *)0x0) {
    if ((*(long *)(this + 0xa8) != 0) && (plVar3 = plVar5 + *(long *)(this + 0xa8), plVar5 < plVar3)
       ) {
      do {
        while (plVar4 = (long *)*plVar5, plVar4 == (long *)0x0) {
LAB_00114b30:
          plVar5 = plVar5 + 1;
          if (plVar3 <= plVar5) goto LAB_00114b68;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00114b30;
        if (*(code **)(*plVar4 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar4 + 0x18))();
          goto LAB_00114b30;
        }
        (*Free)();
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar3);
LAB_00114b68:
      plVar5 = *(long **)(this + 0xb8);
    }
    *(undefined8 *)(this + 0xa8) = 0;
    (*Free)(plVar5);
  }
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x88) != 0) {
    *(undefined8 *)(this + 0x78) = 0;
    (*Free)();
  }
  *(undefined8 **)this = &Reallocate;
  if (this[0x38] == (HeightFieldShapeSettings)0x1) {
    this_00 = *(HeightFieldShape **)(this + 0x18);
    if (this_00 != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar2 = this_00 + 8;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      UNLOCK();
      if (*(int *)pHVar2 == 0) {
        if (*(code **)(*(long *)this_00 + 8) != HeightFieldShape::~HeightFieldShape) {
                    /* WARNING: Could not recover jumptable at 0x00114bb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)this_00 + 8))();
          return;
        }
        HeightFieldShape::~HeightFieldShape(this_00);
        goto LAB_00114ae5;
      }
    }
  }
  else if ((this[0x38] == (HeightFieldShapeSettings)0x2) &&
          (this_00 = *(HeightFieldShape **)(this + 0x18),
          this_00 != (HeightFieldShape *)(this + 0x28))) {
LAB_00114ae5:
                    /* WARNING: Could not recover jumptable at 0x00114aef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(this_00);
    return;
  }
  return;
}



/* JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings() */

void __thiscall
JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings(HeightFieldShapeSettings *this)

{
  long *plVar1;
  HeightFieldShape *pHVar2;
  long *plVar3;
  long *plVar4;
  HeightFieldShape *this_00;
  long *plVar5;
  
  plVar5 = *(long **)(this + 0xb8);
  *(undefined ***)this = &PTR_GetRTTI_00116408;
  if (plVar5 != (long *)0x0) {
    if ((*(long *)(this + 0xa8) != 0) && (plVar3 = plVar5 + *(long *)(this + 0xa8), plVar5 < plVar3)
       ) {
      do {
        while (plVar4 = (long *)*plVar5, plVar4 == (long *)0x0) {
LAB_00114cb0:
          plVar5 = plVar5 + 1;
          if (plVar3 <= plVar5) goto LAB_00114ce8;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_00114cb0;
        if (*(code **)(*plVar4 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar4 + 0x18))();
          goto LAB_00114cb0;
        }
        (*Free)();
        plVar5 = plVar5 + 1;
      } while (plVar5 < plVar3);
LAB_00114ce8:
      plVar5 = *(long **)(this + 0xb8);
    }
    *(undefined8 *)(this + 0xa8) = 0;
    (*Free)(plVar5);
  }
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x88) != 0) {
    *(undefined8 *)(this + 0x78) = 0;
    (*Free)();
  }
  *(undefined8 **)this = &Reallocate;
  if (this[0x38] == (HeightFieldShapeSettings)0x1) {
    this_00 = *(HeightFieldShape **)(this + 0x18);
    if (this_00 != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar2 = this_00 + 8;
      *(int *)pHVar2 = *(int *)pHVar2 + -1;
      UNLOCK();
      if (*(int *)pHVar2 == 0) {
        if (*(code **)(*(long *)this_00 + 8) == HeightFieldShape::~HeightFieldShape) {
          HeightFieldShape::~HeightFieldShape(this_00);
          (*Free)(this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 8))();
        }
      }
    }
  }
  else if ((this[0x38] == (HeightFieldShapeSettings)0x2) &&
          (*(HeightFieldShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00114c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall
JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles
          (undefined8 param_1_00,undefined8 param_2,CollideSoftBodyVerticesVsTriangles *this,
          float *param_1)

{
  CollideSoftBodyVerticesVsTriangles *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  long lVar16;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float local_68;
  float fStack_64;
  float fStack_5c;
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar15 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar10 = param_1[8];
  fVar11 = param_1[9];
  fVar12 = param_1[10];
  fVar13 = param_1[0xb];
  fVar17 = param_1[0xc];
  fVar18 = param_1[0xd];
  fVar19 = param_1[0xe];
  fVar20 = param_1[0xf];
  local_68 = (float)param_1_00;
  fStack_64 = (float)((ulong)param_1_00 >> 0x20);
  fStack_5c = (float)((ulong)param_2 >> 0x20);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = ZEXT416((uint)(float)param_2) << 0x40;
  lVar16 = 0;
  local_58[0] = local_68;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_48 = ZEXT416((uint)fStack_64) << 0x20;
  local_28 = __LC36;
  uStack_20 = _UNK_001166e8;
  do {
    fVar21 = *(float *)((long)local_58 + lVar16);
    fVar22 = *(float *)((long)local_58 + lVar16 + 4);
    fVar23 = *(float *)((long)local_58 + lVar16 + 8);
    fVar24 = *(float *)(local_48 + lVar16 + -4);
    pCVar1 = this + lVar16;
    *(float *)pCVar1 = fVar24 * fVar17 + fVar21 * fVar15 + fVar22 * fVar6 + fVar23 * fVar10;
    *(float *)(pCVar1 + 4) = fVar24 * fVar18 + fVar21 * fVar2 + fVar22 * fVar7 + fVar23 * fVar11;
    *(float *)(pCVar1 + 8) = fVar24 * fVar19 + fVar21 * fVar3 + fVar22 * fVar8 + fVar23 * fVar12;
    *(float *)(pCVar1 + 0xc) = fVar24 * fVar20 + fVar21 * fVar4 + fVar22 * fVar9 + fVar23 * fVar13;
    lVar16 = lVar16 + 0x10;
  } while (lVar16 != 0x40);
  fVar6 = *(float *)(this + 8);
  fVar7 = *(float *)(this + 0xc);
  fVar15 = *(float *)(this + 0x14);
  fVar3 = *(float *)(this + 0x18);
  fVar8 = *(float *)(this + 0x28);
  fVar9 = *(float *)(this + 0x2c);
  fVar2 = *(float *)(this + 0x34);
  fVar4 = *(float *)(this + 0x38);
  fVar10 = *(float *)this;
  fVar11 = *(float *)(this + 4);
  fVar12 = *(float *)(this + 0x20);
  fVar13 = *(float *)(this + 0x24);
  fVar23 = fVar6 * fVar9;
  fVar25 = fVar3 * fVar2;
  fVar27 = fVar8 * fVar7;
  fVar29 = fVar4 * fVar15;
  fVar19 = (float)*(undefined8 *)(this + 0x10);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fVar31 = (float)*(undefined8 *)(this + 0x30);
  fVar32 = (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20);
  fVar34 = fVar6 * fVar13;
  fVar36 = fVar3 * fVar32;
  fVar38 = fVar8 * fVar11;
  fVar40 = fVar4 * fVar21;
  fVar17 = fVar11 * fVar9;
  fVar18 = fVar21 * fVar2;
  fVar20 = fVar13 * fVar7;
  fVar22 = fVar32 * fVar15;
  fVar46 = fVar10 * fVar9;
  fVar47 = fVar19 * fVar2;
  fVar48 = fVar12 * fVar7;
  fVar49 = fVar31 * fVar15;
  fVar42 = fVar10 * fVar13;
  fVar43 = fVar19 * fVar32;
  fVar44 = fVar12 * fVar11;
  fVar45 = fVar31 * fVar21;
  fVar24 = ((((fVar29 * fVar13 - fVar25 * fVar13) + fVar36 * fVar9) - fVar40 * fVar9) +
           fVar18 * fVar8) - fVar8 * fVar22;
  fVar26 = ((((fVar27 * fVar32 - fVar23 * fVar32) + fVar34 * fVar2) - fVar38 * fVar2) +
           fVar17 * fVar4) - fVar4 * fVar20;
  fVar28 = ((((fVar25 * fVar11 - fVar29 * fVar11) + fVar40 * fVar7) - fVar36 * fVar7) +
           fVar22 * fVar6) - fVar6 * fVar18;
  fVar30 = ((((fVar23 * fVar21 - fVar27 * fVar21) + fVar38 * fVar15) - fVar34 * fVar15) +
           fVar20 * fVar3) - fVar3 * fVar17;
  fVar35 = fVar10 * fVar8;
  fVar37 = fVar19 * fVar4;
  fVar39 = fVar12 * fVar6;
  fVar41 = fVar31 * fVar3;
  fVar33 = _LC4 / (fVar12 * fVar28 + fVar31 * fVar30 + fVar10 * fVar24 + fVar19 * fVar26);
  *(float *)(this + 0x40) = fVar24 * fVar33;
  *(float *)(this + 0x44) = fVar26 * fVar33;
  *(float *)(this + 0x48) = fVar28 * fVar33;
  *(float *)(this + 0x4c) = fVar30 * fVar33;
  *(float *)(this + 0x50) =
       ((((fVar12 * fVar25 - fVar12 * fVar29) - fVar8 * fVar47) + fVar8 * fVar49 + fVar9 * fVar37) -
       fVar9 * fVar41) * fVar33;
  *(float *)(this + 0x54) =
       ((((fVar31 * fVar23 - fVar31 * fVar27) - fVar4 * fVar46) + fVar4 * fVar48 + fVar2 * fVar35) -
       fVar2 * fVar39) * fVar33;
  *(float *)(this + 0x58) =
       ((((fVar10 * fVar29 - fVar10 * fVar25) - fVar6 * fVar49) + fVar6 * fVar47 + fVar7 * fVar41) -
       fVar7 * fVar37) * fVar33;
  *(float *)(this + 0x5c) =
       ((((fVar19 * fVar27 - fVar19 * fVar23) - fVar3 * fVar48) + fVar3 * fVar46 + fVar15 * fVar39)
       - fVar15 * fVar35) * fVar33;
  *(float *)(this + 0x60) =
       ((fVar47 * fVar13 + (fVar9 * fVar45 - ((fVar18 * fVar12 - fVar22 * fVar12) + fVar9 * fVar43))
        ) - fVar49 * fVar13) * fVar33;
  *(float *)(this + 100) =
       ((fVar46 * fVar32 + (fVar2 * fVar44 - ((fVar17 * fVar31 - fVar20 * fVar31) + fVar2 * fVar42))
        ) - fVar48 * fVar32) * fVar33;
  *(float *)(this + 0x68) =
       ((fVar49 * fVar11 + (fVar7 * fVar43 - ((fVar22 * fVar10 - fVar18 * fVar10) + fVar7 * fVar45))
        ) - fVar47 * fVar11) * fVar33;
  *(float *)(this + 0x6c) =
       ((fVar48 * fVar21 +
        (fVar15 * fVar42 - ((fVar20 * fVar19 - fVar17 * fVar19) + fVar15 * fVar44))) -
       fVar46 * fVar21) * fVar33;
  *(float *)(this + 0x70) =
       ((((fVar43 * fVar8 - (fVar12 * fVar36 - fVar12 * fVar40)) - fVar8 * fVar45) - fVar37 * fVar13
        ) + fVar13 * fVar41) * fVar33;
  *(float *)(this + 0x74) =
       ((((fVar42 * fVar4 - (fVar31 * fVar34 - fVar31 * fVar38)) - fVar4 * fVar44) - fVar35 * fVar32
        ) + fVar32 * fVar39) * fVar33;
  *(float *)(this + 0x78) =
       ((((fVar45 * fVar6 - (fVar10 * fVar40 - fVar10 * fVar36)) - fVar6 * fVar43) - fVar41 * fVar11
        ) + fVar11 * fVar37) * fVar33;
  *(float *)(this + 0x7c) =
       ((((fVar44 * fVar3 - (fVar19 * fVar38 - fVar19 * fVar34)) - fVar3 * fVar42) - fVar39 * fVar21
        ) + fVar21 * fVar35) * fVar33;
  auVar5._4_4_ = -(uint)(fStack_64 < 0.0);
  auVar5._0_4_ = -(uint)(local_68 < 0.0);
  auVar5._8_4_ = -(uint)((float)param_2 < 0.0);
  auVar5._12_4_ = -(uint)(fStack_5c < 0.0);
  uVar14 = movmskps(0x40,auVar5);
  fVar15 = _LC4;
  if ((POPCOUNT((byte)uVar14 & 7) & 1U) != 0) {
    fVar15 = _LC35;
  }
  *(float *)(this + 0xd0) = fVar15;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HeightFieldShape::GetEdgeFlags(unsigned int, unsigned int, unsigned int) const */

uint __thiscall
JPH::HeightFieldShape::GetEdgeFlags(HeightFieldShape *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  lVar2 = *(long *)(this + 0x70);
  iVar1 = *(int *)(this + 0x40) + -1;
  iVar5 = param_2 * iVar1;
  uVar4 = (param_1 + iVar5) * 3;
  uVar4 = (int)(uint)*(ushort *)(lVar2 + (ulong)(uVar4 >> 3)) >> ((byte)uVar4 & 7);
  if (param_3 == 0) {
    return uVar4 & 7;
  }
  uVar6 = 2;
  uVar4 = uVar4 >> 2 & 1;
  if (*(int *)(this + 0x40) - 2U != param_1) {
    uVar6 = (iVar5 + 1 + param_1) * 3;
    uVar6 = ((int)(uint)*(ushort *)(lVar2 + (ulong)(uVar6 >> 3)) >> ((byte)uVar6 & 7) & 1U) * 2;
  }
  if (param_2 != 0) {
    uVar3 = ((iVar5 - iVar1) + param_1) * 3;
    return uVar4 | uVar6 |
           ((int)(uint)*(ushort *)(lVar2 + (ulong)(uVar3 >> 3)) >> ((byte)uVar3 & 7)) * 2 & 4U;
  }
  return uVar4 | uVar6 | 4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HeightFieldShape::HSGetTrianglesContext::HSGetTrianglesContext(JPH::HeightFieldShape const*,
   JPH::AABox const&, JPH::Vec3, JPH::Quat, JPH::Vec3) */

void __thiscall
JPH::HeightFieldShape::HSGetTrianglesContext::HSGetTrianglesContext
          (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,HSGetTrianglesContext *this,undefined8 param_1,
          float *param_2)

{
  HSGetTrianglesContext *pHVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  long lVar10;
  long in_FS_OFFSET;
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
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float local_98;
  float fStack_94;
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar28 = (float)((ulong)param_5 >> 0x20);
  fVar26 = (float)((ulong)param_4 >> 0x20);
  fVar22 = (float)param_4;
  fVar21 = (float)((ulong)param_3 >> 0x20);
  fVar20 = (float)param_3;
  fVar11 = (float)((uint)fVar20 ^ __LC53);
  fVar13 = (float)((uint)fVar21 ^ _UNK_00116734);
  fVar14 = (float)((uint)fVar22 ^ _UNK_00116738);
  fVar15 = (float)((uint)fVar26 ^ _UNK_0011673c);
  fVar30 = fVar13 + fVar13;
  fVar23 = fVar11 + fVar11;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 0x210) = param_1;
  fVar8 = _LC4;
  fVar7 = _LC2;
  fVar32 = (fVar14 + fVar14) * fVar14;
  fVar12 = fVar15 * (fVar14 + fVar14);
  fVar33 = fVar14 * fVar30 - fVar23 * fVar15;
  fVar27 = fVar23 * fVar14 + fVar30 * fVar15;
  fVar29 = fVar23 * fVar14 - fVar30 * fVar15;
  fVar16 = fVar14 * fVar30 + fVar23 * fVar15;
  fVar24 = (_LC4 - fVar11 * fVar23) - fVar30 * fVar13;
  fVar34 = fVar13 * fVar23 - fVar12;
  fVar12 = fVar13 * fVar23 + fVar12;
  fVar25 = (_LC4 - fVar32) - fVar11 * fVar23;
  local_98 = (float)param_1_00;
  fVar32 = (_LC4 - fVar30 * fVar13) - fVar32;
  fVar11 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  fVar15 = param_2[3];
  fVar23 = param_2[4];
  fVar30 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  auVar4._4_4_ = fVar25;
  auVar4._0_4_ = fVar34;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x230) = auVar4;
  fStack_94 = (float)((ulong)param_1_00 >> 0x20);
  auVar2._4_4_ = fVar12;
  auVar2._0_4_ = fVar32;
  auVar2._8_4_ = fVar29;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x220) = auVar2;
  fVar17 = (fVar11 + fVar23) * fVar7;
  fVar18 = (fVar13 + fVar30) * fVar7;
  fVar19 = (fVar14 + fVar5) * fVar7;
  auVar3._4_4_ = fVar33;
  auVar3._0_4_ = fVar27;
  auVar3._8_4_ = fVar24;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x240) = auVar3;
  *(float *)(this + 0x260) = (fVar23 - fVar11) * fVar7;
  *(float *)(this + 0x264) = (fVar30 - fVar13) * fVar7;
  *(float *)(this + 0x268) = (fVar5 - fVar14) * fVar7;
  *(float *)(this + 0x26c) = (fVar6 - fVar15) * fVar7;
  *(undefined8 *)(this + 0x270) = param_5;
  *(undefined8 *)(this + 0x278) = param_6;
  *(ulong *)(this + 0x250) =
       CONCAT44(fVar17 * fVar12 + fVar18 * fVar25 + fVar19 * fVar33 +
                (0.0 - (local_98 * fVar12 + fStack_94 * fVar25 + param_2_00 * fVar33)),
                fVar17 * fVar32 + fVar18 * fVar34 + fVar19 * fVar27 +
                (0.0 - (local_98 * fVar32 + fStack_94 * fVar34 + param_2_00 * fVar27)));
  *(float *)(this + 600) =
       fVar17 * fVar29 + fVar18 * fVar16 + fVar19 * fVar24 +
       (0.0 - (local_98 * fVar29 + fStack_94 * fVar16 + param_2_00 * fVar24));
  fVar13 = fVar20 + fVar20;
  local_38 = ZEXT416((uint)(float)param_6) << 0x40;
  local_58[0] = (float)param_5;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_28 = __LC36;
  uStack_20 = _UNK_001166e8;
  local_48 = ZEXT416((uint)fVar28) << 0x20;
  *(float *)(this + 0x25c) = fVar8;
  fVar15 = fVar22 * (fVar22 + fVar22);
  fVar14 = fVar21 + fVar21;
  lVar10 = 0;
  fVar11 = fVar26 * (fVar22 + fVar22);
  do {
    fVar23 = *(float *)((long)local_58 + lVar10);
    fVar30 = *(float *)((long)local_58 + lVar10 + 4);
    fVar5 = *(float *)((long)local_58 + lVar10 + 8);
    fVar6 = *(float *)(local_48 + lVar10 + -4);
    pHVar1 = this + lVar10 + 0x280;
    *(float *)pHVar1 =
         fVar6 * local_98 +
         fVar23 * ((fVar8 - fVar21 * fVar14) - fVar15) + fVar30 * (fVar21 * fVar13 - fVar11) +
         fVar5 * (fVar22 * fVar13 + fVar14 * fVar26);
    *(float *)(pHVar1 + 4) =
         fVar6 * fStack_94 +
         fVar23 * (fVar21 * fVar13 + fVar11) + fVar30 * ((fVar8 - fVar15) - fVar20 * fVar13) +
         fVar5 * (fVar22 * fVar14 - fVar13 * fVar26);
    *(float *)(pHVar1 + 8) =
         fVar6 * param_2_00 +
         fVar23 * (fVar22 * fVar13 - fVar14 * fVar26) + fVar30 * (fVar13 * fVar26 + fVar22 * fVar14)
         + fVar5 * ((fVar8 - fVar20 * fVar13) - fVar21 * fVar14);
    *(float *)(pHVar1 + 0xc) = fVar6 * 1.0 + fVar23 * 0.0 + fVar30 * 0.0 + fVar5 * 0.0;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  auVar31._4_4_ = -(uint)(fVar28 < 0.0);
  auVar31._0_4_ = -(uint)((float)param_5 < 0.0);
  auVar31._8_4_ = -(uint)((float)param_6 < 0.0);
  auVar31._12_4_ = -(uint)((float)((ulong)param_6 >> 0x20) < 0.0);
  uVar9 = movmskps(0x40,auVar31);
  this[0x2e1] = (HSGetTrianglesContext)((POPCOUNT((byte)uVar9 & 7) & 1U) != 0);
  this[0x2e1] = (HSGetTrianglesContext)((byte)this[0x2e1] & 1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar19 = (float)((ulong)param_6 >> 0x20);
  uStack_90._0_4_ = (float)param_6;
  fVar15 = (float)((ulong)param_4 >> 0x20);
  fVar11 = (float)param_4;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  local_98._0_4_ = (undefined4)param_5;
  local_98._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulong)param_1 >> 0x20);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)local_98._0_4_ - local_78;
  fVar16 = (float)local_98._4_4_ - fStack_74;
  fVar17 = (float)uStack_90 - fVar11;
  fVar2 = ((float)uStack_90 - fVar4) * ((float)uStack_90 - fVar4) +
          ((float)local_98._0_4_ - local_88) * ((float)local_98._0_4_ - local_88) + 0.0 +
          ((float)local_98._4_4_ - fStack_84) * ((float)local_98._4_4_ - fStack_84);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  iVar1 = -(uint)(fVar18 < fVar2);
  uVar7 = iVar1 >> 0x1f;
  uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  fVar2 = (float)(local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88);
  fVar32 = (float)(local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84);
  fVar33 = (float)((uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4);
  fVar5 = (float)((uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6);
  fVar28 = local_78 - fVar2;
  fVar30 = fStack_74 - fVar32;
  fVar31 = fVar11 - fVar33;
  fVar29 = (float)(uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_);
  fVar22 = (float)(uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_);
  fVar10 = (float)(uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90);
  fVar13 = (float)(uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19);
  fVar20 = fVar29 - fVar2;
  fVar24 = fVar22 - fVar32;
  fVar26 = fVar10 - fVar33;
  fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
  fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
  fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
  fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
  if (fVar34 < _LC54) {
    fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ +
             (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
             (float)uStack_90 * (float)uStack_90;
    fVar29 = fVar4 * fVar4 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0;
    if (fVar29 < fVar22) {
      iVar1 = 1;
      local_98._0_4_ = local_88;
      local_98._4_4_ = fStack_84;
      uStack_90._0_4_ = fVar4;
      uStack_90._4_4_ = fVar6;
    }
    else {
      iVar1 = 4;
      uStack_90._4_4_ = fVar19;
      fVar29 = fVar22;
    }
    fVar22 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (fVar22 < fVar29) {
      iVar1 = 2;
      local_98._0_4_ = local_78;
      local_98._4_4_ = fStack_74;
      uStack_90._0_4_ = fVar11;
      uStack_90._4_4_ = fVar15;
      fVar29 = fVar22;
    }
    fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
    if (__LC55 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ _LC45) /
               fVar22;
      if (fVar22 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = _LC4;
        if (fVar22 <= _LC4) {
          fVar10 = fVar22;
        }
      }
      fVar2 = fVar10 * fVar20 + fVar2;
      fVar32 = fVar10 * fVar24 + fVar32;
      fVar33 = fVar10 * fVar26 + fVar33;
      fVar22 = fVar33 * fVar33 + fVar32 * fVar32 + fVar2 * fVar2 + 0.0;
      if (fVar22 < fVar29) {
        iVar1 = 5;
        local_98._0_4_ = fVar2;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar10 * (fVar13 - fVar5) + fVar5;
        fVar29 = fVar22;
      }
    }
    if (__LC55 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^
                      _LC45) / fVar18;
      if (fVar18 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = _LC4;
        if (fVar18 <= _LC4) {
          fVar2 = fVar18;
        }
      }
      fVar18 = fVar2 * fVar14 + local_78;
      fVar32 = fVar2 * fVar16 + fStack_74;
      fVar33 = fVar2 * fVar17 + fVar11;
      fVar5 = fVar33 * fVar33 + fVar18 * fVar18 + 0.0 + fVar32 * fVar32;
      if (fVar5 < fVar29) {
        iVar1 = 6;
        local_98._0_4_ = fVar18;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar2 * (fVar19 - fVar15) + fVar15;
        fVar29 = fVar5;
      }
    }
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar11 = fVar11 - fVar4;
    fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (__LC55 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     _LC45) / fVar2;
      if (fVar2 < 0.0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = _LC4;
        if (fVar2 <= _LC4) {
          fVar18 = fVar2;
        }
      }
      local_88 = fVar18 * local_78 + local_88;
      fStack_84 = fVar18 * fStack_74 + fStack_84;
      fVar4 = fVar18 * fVar11 + fVar4;
      if (fVar4 * fVar4 + local_88 * local_88 + 0.0 + fStack_84 * fStack_84 < fVar29) {
        iVar1 = 3;
        local_98._0_4_ = local_88;
        local_98._4_4_ = fStack_84;
        uStack_90._0_4_ = fVar4;
        uStack_90._4_4_ = fVar18 * (fVar15 - fVar6) + fVar6;
      }
    }
    *param_7 = iVar1;
    return _local_98;
  }
  fVar4 = (0.0 - fVar33) * fVar31 + fVar30 * (0.0 - fVar32) + (0.0 - fVar2) * fVar28 + 0.0;
  fVar18 = (0.0 - fVar33) * fVar26 + (0.0 - fVar32) * fVar24 + (0.0 - fVar2) * fVar20 + 0.0;
  if ((fVar4 <= 0.0) && (fVar18 <= 0.0)) {
    local_98._4_4_ = fVar32;
    local_98._0_4_ = fVar2;
    uStack_90._0_4_ = fVar33;
    uStack_90._4_4_ = fVar5;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_98;
  }
  fVar14 = (0.0 - fVar11) * fVar31 + fVar30 * (0.0 - fStack_74) + (0.0 - local_78) * fVar28 + 0.0;
  fVar6 = (0.0 - fVar11) * fVar26 + (0.0 - fStack_74) * fVar24 + (0.0 - local_78) * fVar20 + 0.0;
  if (fVar14 < 0.0) {
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_00115d4c;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_00115d4c:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar4 = fVar4 / (fVar4 - fVar14);
      local_98._4_4_ = fVar4 * fVar30 + fVar32;
      local_98._0_4_ = fVar4 * fVar28 + fVar2;
      uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
      uStack_90._4_4_ = fVar4 * (fVar15 - fVar5) + fVar5;
      return _local_98;
    }
  }
  fVar17 = fVar31 * (0.0 - fVar10) + fVar30 * (0.0 - fVar22) + fVar28 * (0.0 - fVar29) + 0.0;
  fVar16 = (0.0 - fVar10) * fVar26 + (0.0 - fVar22) * fVar24 + fVar20 * (0.0 - fVar29) + 0.0;
  if (fVar16 < 0.0) {
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_00115f0a;
  }
  else {
    if (fVar17 <= fVar16) {
      local_98._4_4_ = fVar22;
      local_98._0_4_ = fVar29;
      uStack_90._4_4_ = fVar13;
      uStack_90._0_4_ = fVar10;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_98;
    }
    if (((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) && (fVar16 == 0.0)) {
LAB_00115f0a:
      *param_7 = 5;
      fVar18 = fVar18 / (fVar18 - fVar16);
      local_98._4_4_ = fVar18 * fVar24 + fVar32;
      local_98._0_4_ = fVar18 * fVar20 + fVar2;
      uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
      uStack_90._4_4_ = fVar18 * (fVar13 - fVar5) + fVar5;
      return _local_98;
    }
  }
  if (((fVar6 * fVar17 < fVar14 * fVar16) || (fVar6 = fVar6 - fVar14, fVar6 < 0.0)) ||
     (fVar17 - fVar16 < 0.0)) {
    *param_7 = 7;
    fVar34 = fVar34 * __LC56;
    fVar2 = (fVar33 + fVar11 + fVar10) * fVar21 +
            fVar27 * (fVar32 + fStack_74 + fVar22) + fVar25 * (fVar2 + local_78 + fVar29) + 0.0;
    auVar23._0_4_ = fVar25 * fVar2;
    auVar23._4_4_ = fVar27 * fVar2;
    auVar23._8_4_ = fVar21 * fVar2;
    auVar23._12_4_ = fVar21 * fVar2;
    auVar3._4_4_ = fVar34;
    auVar3._0_4_ = fVar34;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar34;
    _local_98 = divps(auVar23,auVar3);
  }
  else {
    fVar6 = fVar6 / ((fVar17 - fVar16) + fVar6);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_98._4_4_ = (fVar22 - fStack_74) * fVar6 + fStack_74;
    local_98._0_4_ = (fVar29 - local_78) * fVar6 + local_78;
    uStack_90._0_4_ = (fVar10 - fVar11) * fVar6 + fVar11;
    uStack_90._4_4_ = (fVar13 - fVar15) * fVar6 + fVar15;
  }
  return _local_98;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::Shape> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::Shape>>::SetError(Result<JPH::Ref<JPH::Shape>> *this,char *param_1)

{
  HeightFieldShape *pHVar1;
  HeightFieldShape *this_00;
  size_t __n;
  Result<JPH::Ref<JPH::Shape>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::Shape>>)0x1) {
    this_00 = *(HeightFieldShape **)this;
    if (this_00 != (HeightFieldShape *)0x0) {
      LOCK();
      pHVar1 = this_00 + 8;
      *(int *)pHVar1 = *(int *)pHVar1 + -1;
      UNLOCK();
      if (*(int *)pHVar1 == 0) {
        if (*(code **)(*(long *)this_00 + 8) == HeightFieldShape::~HeightFieldShape) {
          HeightFieldShape::~HeightFieldShape(this_00);
          (*Free)(this_00);
        }
        else {
          (**(code **)(*(long *)this_00 + 8))();
        }
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
      goto LAB_00115fc8;
    }
    if (__n == 0) goto LAB_00115fc8;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::Shape>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::Shape>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::Shape>> **)this;
LAB_00115fc8:
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



/* JPH::HeightFieldShape::sDrawTriangleOutlines */

void JPH::HeightFieldShape::_GLOBAL__sub_I_sDrawTriangleOutlines(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC70;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::HeightFieldShape::HSGetTrianglesContext::HSGetTrianglesContext(JPH::HeightFieldShape const*,
   JPH::AABox const&, JPH::Vec3, JPH::Quat, JPH::Vec3) */

void __thiscall JPH::HeightFieldShape::HSGetTrianglesContext::HSGetTrianglesContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(JPH::Mat44 const&,
   JPH::Vec3) */

void __thiscall JPH::CollideSoftBodyVerticesVsTriangles::CollideSoftBodyVerticesVsTriangles(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings() */

void __thiscall
JPH::HeightFieldShapeSettings::~HeightFieldShapeSettings(HeightFieldShapeSettings *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* JPH::TempAllocatorMalloc::~TempAllocatorMalloc() */

void __thiscall JPH::TempAllocatorMalloc::~TempAllocatorMalloc(TempAllocatorMalloc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



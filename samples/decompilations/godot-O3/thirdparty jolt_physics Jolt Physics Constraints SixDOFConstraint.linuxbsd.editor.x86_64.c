
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SixDOFConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::SixDOFConstraint::NotifyShapeChanged
               (undefined8 param_1_00,undefined8 param_2,long param_1,int *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  fVar1 = (float)((ulong)param_1_00 >> 0x20);
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x70) == *param_4) {
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - (float)param_1_00;
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - fVar1;
    *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - (float)param_2;
    *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - fVar2;
    return;
  }
  if (*param_4 != *(int *)(*(long *)(param_1 + 0x30) + 0x70)) {
    return;
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - (float)param_1_00;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - fVar1;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - (float)param_2;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - fVar2;
  return;
}



/* JPH::SixDOFConstraint::ResetWarmStart() */

void __thiscall JPH::SixDOFConstraint::ResetWarmStart(SixDOFConstraint *this)

{
  *(undefined4 *)(this + 0x630) = 0;
  *(undefined4 *)(this + 0x63c) = 0;
  *(undefined4 *)(this + 0x670) = 0;
  *(undefined4 *)(this + 0x67c) = 0;
  *(undefined4 *)(this + 0x6b0) = 0;
  *(undefined4 *)(this + 0x6bc) = 0;
  *(undefined4 *)(this + 0x6e0) = 0;
  *(undefined4 *)(this + 0x6ec) = 0;
  *(undefined4 *)(this + 0x710) = 0;
  *(undefined4 *)(this + 0x71c) = 0;
  *(undefined4 *)(this + 0x740) = 0;
  *(undefined4 *)(this + 0x74c) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  *(undefined4 *)(this + 0x4cc) = 0;
  *(undefined4 *)(this + 0x4f0) = 0;
  *(undefined4 *)(this + 0x4fc) = 0;
  *(undefined4 *)(this + 0x520) = 0;
  *(undefined4 *)(this + 0x52c) = 0;
  *(undefined4 *)(this + 0x29c) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2e8) = 0;
  *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 0x328) = 0;
  return;
}



/* JPH::SixDOFConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::SixDOFConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::SixDOFConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::SixDOFConstraintSettings::SaveBinaryState(SixDOFConstraintSettings *this,StreamOut *param_1)

{
  StreamOut *pSVar1;
  StreamOut *pSVar2;
  
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xac,0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc4,0x18);
  pSVar2 = (StreamOut *)(this + 0xdc);
  do {
    pSVar1 = pSVar2 + 0xc;
    JPH::SpringSettings::SaveBinaryState(pSVar2);
    pSVar2 = pSVar1;
  } while (pSVar1 != (StreamOut *)(this + 0x100));
  do {
    pSVar2 = pSVar1 + 0x1c;
    JPH::MotorSettings::SaveBinaryState(pSVar1);
    pSVar1 = pSVar2;
  } while (pSVar2 != (StreamOut *)(this + 0x1a8));
  return;
}



/* JPH::SixDOFConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::SixDOFConstraintSettings::RestoreBinaryState(SixDOFConstraintSettings *this,StreamIn *param_1)

{
  StreamIn *pSVar1;
  StreamIn *pSVar2;
  
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x80,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa8,1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xac,0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc4,0x18);
  pSVar2 = (StreamIn *)(this + 0xdc);
  do {
    pSVar1 = pSVar2 + 0xc;
    JPH::SpringSettings::RestoreBinaryState(pSVar2);
    pSVar2 = pSVar1;
  } while (pSVar1 != (StreamIn *)(this + 0x100));
  do {
    pSVar2 = pSVar1 + 0x1c;
    JPH::MotorSettings::RestoreBinaryState(pSVar1);
    pSVar1 = pSVar2;
  } while (pSVar2 != (StreamIn *)(this + 0x1a8));
  return;
}



/* JPH::SixDOFConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::SixDOFConstraint::SaveState(SixDOFConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  SixDOFConstraint *pSVar2;
  SixDOFConstraint *pSVar3;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  pSVar3 = this + 0x2a8;
  do {
    pSVar2 = pSVar3 + 0x40;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,pSVar3,4);
    pSVar3 = pSVar2;
  } while (pSVar2 != this + 0x368);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x410,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x4cc,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x4fc,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x52c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x5f0,0xc);
  pSVar3 = this + 0x63c;
  do {
    pSVar2 = pSVar3 + 0x40;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,pSVar3,4);
    pSVar3 = pSVar2;
  } while (pSVar2 != this + 0x6fc);
  pSVar3 = this + 0x6ec;
  do {
    pSVar2 = pSVar3 + 0x30;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,pSVar3,4);
    pSVar3 = pSVar2;
  } while (this + 0x77c != pSVar2);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x19c,0x18);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1c0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1d0,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1e0,0xc);
                    /* WARNING: Could not recover jumptable at 0x001005eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x1f0,0x10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::GetConstraintSettings() const */

void JPH::SixDOFConstraint::GetConstraintSettings(void)

{
  float fVar1;
  float fVar2;
  ConstraintSettings CVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  puVar11 = (undefined8 *)(*Allocate)(0x1b0);
  uVar8 = _UNK_0010e898;
  uVar7 = __LC4;
  auVar18 = ZEXT416((uint)_LC0);
  *(undefined4 *)(puVar11 + 1) = 0;
  uVar10 = _LC11;
  *(undefined1 *)((long)puVar11 + 0xc) = 1;
  *(undefined1 (*) [16])(puVar11 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0x12) = (undefined1  [16])0x0;
  uVar9 = _LC6;
  puVar11[2] = 0;
  *puVar11 = &PTR_GetRTTI_0010e788;
  *(undefined4 *)((long)puVar11 + 0xac) = uVar9;
  *(undefined4 *)(puVar11 + 0x16) = uVar9;
  *(undefined4 *)((long)puVar11 + 0xb4) = uVar9;
  *(undefined4 *)(puVar11 + 0x17) = uVar9;
  uVar4 = CONCAT44(_UNK_0010e8a4,_LC6);
  uVar5 = CONCAT44(_UNK_0010e8ac,_LC9);
  puVar11[4] = 0;
  *(undefined8 *)((long)puVar11 + 0xbc) = uVar4;
  *(undefined8 *)((long)puVar11 + 0xc4) = uVar5;
  uVar9 = _LC9;
  *(undefined4 *)(puVar11 + 5) = 1;
  puVar11[3] = 0x3f80000000000000;
  *(undefined4 *)((long)puVar11 + 0xcc) = uVar9;
  *(undefined4 *)(puVar11 + 0x1a) = uVar9;
  *(undefined4 *)((long)puVar11 + 0xd4) = uVar9;
  *(undefined4 *)(puVar11 + 0x1b) = uVar9;
  puVar11[0x14] = 0;
  *(undefined1 *)(puVar11 + 0x15) = 0;
  *(undefined4 *)((long)puVar11 + 0xfc) = 0;
  *(undefined1 (*) [16])((long)puVar11 + 0xdc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar11 + 0xec) = (undefined1  [16])0x0;
  uVar5 = _LC11;
  uVar4 = __LC10;
  *(undefined1 (*) [16])(puVar11 + 8) = auVar18;
  puVar11[10] = uVar7;
  puVar11[0xb] = uVar8;
  *(undefined1 (*) [16])(puVar11 + 0xe) = auVar18;
  puVar11[0x10] = uVar7;
  puVar11[0x11] = uVar8;
  puVar12 = puVar11 + 0x20;
  do {
    *(undefined1 *)puVar12 = 0;
    puVar13 = (undefined8 *)((long)puVar12 + 0x1c);
    *(undefined8 *)((long)puVar12 + 4) = uVar4;
    *(undefined8 *)((long)puVar12 + 0xc) = uVar5;
    *(undefined8 *)((long)puVar12 + 0x14) = uVar10;
    puVar12 = puVar13;
  } while (puVar11 + 0x35 != puVar13);
  JPH::Constraint::ToConstraintSettings(in_RSI);
  fVar1 = *(float *)(in_RSI + 0x60);
  fVar17 = *(float *)(in_RSI + 0x6c);
  *(undefined4 *)(puVar11 + 5) = 0;
  uVar4 = *(undefined8 *)(in_RSI + 0x48);
  fVar21 = *(float *)(in_RSI + 0x68);
  CVar3 = in_RSI[0x421];
  fVar20 = fVar1 + fVar1;
  fVar15 = fVar17 + fVar17;
  puVar11[6] = *(undefined8 *)(in_RSI + 0x40);
  puVar11[7] = uVar4;
  fVar6 = _LC0;
  fVar23 = *(float *)(in_RSI + 100);
  fVar22 = fVar21 * fVar20 - fVar23 * fVar15;
  *(float *)(puVar11 + 8) = (fVar1 * fVar20 + fVar17 * fVar15) - _LC0;
  *(float *)((long)puVar11 + 0x44) = fVar20 * fVar23 + fVar21 * fVar15;
  *(float *)(puVar11 + 9) = fVar22;
  *(float *)((long)puVar11 + 0x4c) = fVar22;
  fVar19 = fVar23 + fVar23;
  fVar20 = *(float *)(in_RSI + 0x74);
  fVar16 = fVar15 * fVar1 + fVar21 * fVar19;
  fVar22 = *(float *)(in_RSI + 0x78);
  uVar4 = *(undefined8 *)(in_RSI + 0x58);
  puVar11[0xc] = *(undefined8 *)(in_RSI + 0x50);
  puVar11[0xd] = uVar4;
  fVar2 = *(float *)(in_RSI + 0x7c);
  puVar11[10] = CONCAT44((fVar19 * fVar23 + fVar17 * fVar15) - fVar6,
                         fVar1 * fVar19 - fVar21 * fVar15);
  puVar11[0xb] = CONCAT44(fVar16,fVar16);
  fVar1 = *(float *)(in_RSI + 0x70);
  fVar17 = fVar2 + fVar2;
  *(ConstraintSettings *)(puVar11 + 0x15) = CVar3;
  fVar21 = fVar1 + fVar1;
  fVar23 = fVar22 * fVar21 - fVar20 * fVar17;
  *(float *)(puVar11 + 0xe) = (fVar1 * fVar21 + fVar2 * fVar17) - fVar6;
  *(float *)((long)puVar11 + 0x74) = fVar21 * fVar20 + fVar22 * fVar17;
  *(float *)(puVar11 + 0xf) = fVar23;
  *(float *)((long)puVar11 + 0x7c) = fVar23;
  fVar23 = fVar20 + fVar20;
  fVar21 = fVar17 * fVar1 + fVar22 * fVar23;
  puVar11[0x10] =
       CONCAT44((fVar23 * fVar20 + fVar2 * fVar17) - fVar6,fVar1 * fVar23 - fVar22 * fVar17);
  puVar11[0x11] = CONCAT44(fVar21,fVar21);
  uVar4 = *(undefined8 *)(in_RSI + 0x90);
  *(undefined8 *)((long)puVar11 + 0xac) = *(undefined8 *)(in_RSI + 0x88);
  *(undefined8 *)((long)puVar11 + 0xb4) = uVar4;
  *(undefined8 *)((long)puVar11 + 0xbc) = *(undefined8 *)(in_RSI + 0x98);
  uVar4 = *(undefined8 *)(in_RSI + 0xa8);
  *(undefined8 *)((long)puVar11 + 0xc4) = *(undefined8 *)(in_RSI + 0xa0);
  *(undefined8 *)((long)puVar11 + 0xcc) = uVar4;
  *(undefined8 *)((long)puVar11 + 0xd4) = *(undefined8 *)(in_RSI + 0xb0);
  uVar4 = *(undefined8 *)(in_RSI + 0x18c);
  puVar11[0x12] = *(undefined8 *)(in_RSI + 0x184);
  puVar11[0x13] = uVar4;
  puVar11[0x14] = *(undefined8 *)(in_RSI + 0x194);
  lVar14 = 0;
  do {
    uVar4 = *(undefined8 *)(in_RSI + lVar14 + 0xdc + 8);
    puVar12 = (undefined8 *)((long)puVar11 + lVar14 + 0x100);
    *puVar12 = *(undefined8 *)(in_RSI + lVar14 + 0xdc);
    puVar12[1] = uVar4;
    uVar4 = *(undefined8 *)(in_RSI + lVar14 + 0xe8 + 8);
    puVar12 = (undefined8 *)((long)puVar11 + lVar14 + 0x10c);
    *puVar12 = *(undefined8 *)(in_RSI + lVar14 + 0xe8);
    puVar12[1] = uVar4;
    lVar14 = lVar14 + 0x1c;
  } while (lVar14 != 0xa8);
  *in_RDI = puVar11;
  LOCK();
  *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
  UNLOCK();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&, JPH::Vec3, float, float)
   [clone .isra.0] */

undefined8
JPH::AxisConstraintPart::SolveVelocityConstraint
          (undefined8 param_1_00,undefined8 param_2_00,float param_3,float param_4,float *param_1,
          float *param_2,char param_7,float *param_8,char param_9)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float local_18;
  float fStack_14;
  
  fVar23 = (float)((ulong)param_2_00 >> 0x20);
  fVar19 = (float)param_2_00;
  local_18 = (float)param_1_00;
  fStack_14 = (float)((ulong)param_1_00 >> 0x20);
  if (param_7 == '\x01') {
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_8[0x16];
    fVar27 = param_1[0xf];
    fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
               (param_2[2] - fVar17) * fVar19 +
               (param_2[1] - fVar16) * fStack_14 + (*param_2 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar27;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar26 = fVar26 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar26 * local_18 + fVar14;
    fVar16 = fVar26 * fStack_14 + fVar16;
    fVar17 = fVar26 * fVar19 + fVar17;
    fVar18 = fVar26 * fVar23 + fVar18;
  }
  else {
    if (param_7 == '\x02') {
      if (param_9 == '\x01') {
        fVar14 = *param_2;
        fVar16 = param_2[1];
        fVar17 = param_2[2];
        fVar18 = param_2[3];
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar13 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                    (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                    (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                   (fVar17 - param_8[2]) * fVar19 +
                   (fVar16 - param_8[1]) * fStack_14 + (fVar14 - *param_8) * local_18 + 0.0) -
                  ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                   (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                  (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar13) {
          param_3 = fVar13;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar21._1_3_ = 0;
        auVar21[0] = bVar1;
        auVar21[4] = bVar1;
        auVar21._5_3_ = 0;
        auVar21[8] = bVar1;
        auVar21._9_3_ = 0;
        auVar21[0xc] = bVar1;
        auVar21._13_3_ = 0;
        auVar8._4_4_ = _UNK_0010e8c4;
        auVar8._0_4_ = __LC14;
        auVar8._8_4_ = _UNK_0010e8c8;
        auVar8._12_4_ = _UNK_0010e8cc;
        auVar21 = auVar21 & auVar8;
        bVar2 = auVar21._4_4_ == _UNK_0010e8c4;
        bVar3 = auVar21._8_4_ == _UNK_0010e8c8;
        bVar4 = auVar21._12_4_ == _UNK_0010e8cc;
        *param_2 = (float)((uint)(fVar14 - fVar26 * local_18) & -(uint)(auVar21._0_4_ == __LC14));
        param_2[1] = (float)((uint)(fVar16 - fVar26 * fStack_14) & -(uint)bVar2);
        param_2[2] = (float)((uint)(fVar17 - fVar26 * fVar19) & -(uint)bVar3);
        param_2[3] = (float)((uint)(fVar18 - fVar26 * fVar23) & -(uint)bVar4);
      }
      else {
        if (param_9 == '\x02') {
          fVar16 = *param_2;
          fVar17 = param_2[1];
          fVar18 = param_2[2];
          fVar13 = param_2[3];
          fVar26 = param_8[0x16];
          fVar27 = param_2[0x16];
          fVar14 = param_1[0xf];
          fVar15 = ((((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                      (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                      (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                     (fVar18 - param_8[2]) * fVar19 +
                     (fVar17 - param_8[1]) * fStack_14 + (fVar16 - *param_8) * local_18 + 0.0) -
                    ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
                     (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
                    (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
                   (param_1[0xe] * fVar14 + param_1[0xd])) * param_1[0xc] + fVar14;
          if (param_3 <= fVar15) {
            param_3 = fVar15;
          }
          if (param_3 <= param_4) {
            param_4 = param_3;
          }
          param_1[0xf] = param_4;
          iVar12 = _UNK_0010e8cc;
          iVar11 = _UNK_0010e8c8;
          iVar10 = _UNK_0010e8c4;
          iVar9 = __LC14;
          param_4 = param_4 - fVar14;
          if (param_4 != 0.0) {
            bVar1 = *(byte *)((long)param_2 + 0x7a);
            fVar27 = fVar27 * param_4;
            auVar7._4_4_ = _UNK_0010e8c4;
            auVar7._0_4_ = __LC14;
            auVar7._8_4_ = _UNK_0010e8c8;
            auVar7._12_4_ = _UNK_0010e8cc;
            fVar26 = fVar26 * param_4;
            auVar25._1_3_ = 0;
            auVar25[0] = bVar1;
            auVar25[4] = bVar1;
            auVar25._5_3_ = 0;
            auVar25[8] = bVar1;
            auVar25._9_3_ = 0;
            auVar25[0xc] = bVar1;
            auVar25._13_3_ = 0;
            auVar25 = auVar25 & auVar7;
            bVar2 = auVar25._4_4_ == _UNK_0010e8c4;
            bVar3 = auVar25._8_4_ == _UNK_0010e8c8;
            bVar4 = auVar25._12_4_ == _UNK_0010e8cc;
            *param_2 = (float)((uint)(fVar16 - fVar27 * local_18) & -(uint)(auVar25._0_4_ == __LC14)
                              );
            param_2[1] = (float)((uint)(fVar17 - fVar27 * fStack_14) & -(uint)bVar2);
            param_2[2] = (float)((uint)(fVar18 - fVar27 * fVar19) & -(uint)bVar3);
            param_2[3] = (float)((uint)(fVar13 - fVar27 * fVar23) & -(uint)bVar4);
            fVar27 = param_1[7];
            fVar14 = param_1[8];
            fVar16 = param_1[9];
            param_2[4] = param_2[4] - param_1[6] * param_4;
            param_2[5] = param_2[5] - fVar27 * param_4;
            param_2[6] = param_2[6] - fVar14 * param_4;
            param_2[7] = param_2[7] - fVar16 * param_4;
            bVar1 = *(byte *)((long)param_8 + 0x7a);
            auVar22._1_3_ = 0;
            auVar22[0] = bVar1;
            auVar22[4] = bVar1;
            auVar22._5_3_ = 0;
            auVar22[8] = bVar1;
            auVar22._9_3_ = 0;
            auVar22[0xc] = bVar1;
            auVar22._13_3_ = 0;
            auVar22 = auVar22 & auVar7;
            *param_8 = (float)((uint)(local_18 * fVar26 + *param_8) &
                              -(uint)(auVar22._0_4_ == iVar9));
            param_8[1] = (float)((uint)(fStack_14 * fVar26 + param_8[1]) &
                                -(uint)(auVar22._4_4_ == iVar10));
            param_8[2] = (float)((uint)(fVar19 * fVar26 + param_8[2]) &
                                -(uint)(auVar22._8_4_ == iVar11));
            param_8[3] = (float)((uint)(fVar23 * fVar26 + param_8[3]) &
                                -(uint)(auVar22._12_4_ == iVar12));
            fVar19 = param_1[10];
            fVar23 = param_1[0xb];
            fVar26 = param_1[0xc];
            param_8[4] = param_1[9] * param_4 + param_8[4];
            param_8[5] = fVar19 * param_4 + param_8[5];
            param_8[6] = fVar23 * param_4 + param_8[6];
            param_8[7] = fVar26 * param_4 + param_8[7];
            return 1;
          }
          return 0;
        }
        if (param_9 != '\0') {
          return 0;
        }
        fVar26 = param_2[0x16];
        fVar27 = param_1[0xf];
        fVar14 = (((float)*(undefined8 *)(param_2 + 6) * param_1[2] +
                   (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * param_1[1] +
                   (float)*(undefined8 *)(param_2 + 4) * *param_1 + 0.0 +
                  fVar19 * (float)*(undefined8 *)(param_2 + 2) +
                  fStack_14 * (float)((ulong)*(undefined8 *)param_2 >> 0x20) +
                  local_18 * (float)*(undefined8 *)param_2 + 0.0) -
                 (param_1[0xe] * fVar27 + param_1[0xd])) * param_1[0xc] + fVar27;
        if (param_3 <= fVar14) {
          param_3 = fVar14;
        }
        if (param_3 <= param_4) {
          param_4 = param_3;
        }
        param_1[0xf] = param_4;
        param_4 = param_4 - fVar27;
        if (param_4 == 0.0) {
          return 0;
        }
        fVar26 = fVar26 * param_4;
        bVar1 = *(byte *)((long)param_2 + 0x7a);
        auVar20._1_3_ = 0;
        auVar20[0] = bVar1;
        auVar20[4] = bVar1;
        auVar20._5_3_ = 0;
        auVar20[8] = bVar1;
        auVar20._9_3_ = 0;
        auVar20[0xc] = bVar1;
        auVar20._13_3_ = 0;
        auVar6._4_4_ = _UNK_0010e8c4;
        auVar6._0_4_ = __LC14;
        auVar6._8_4_ = _UNK_0010e8c8;
        auVar6._12_4_ = _UNK_0010e8cc;
        auVar20 = auVar20 & auVar6;
        bVar2 = auVar20._4_4_ == _UNK_0010e8c4;
        bVar3 = auVar20._8_4_ == _UNK_0010e8c8;
        bVar4 = auVar20._12_4_ == _UNK_0010e8cc;
        *param_2 = (float)(-(uint)(auVar20._0_4_ == __LC14) & (uint)(*param_2 - fVar26 * local_18));
        param_2[1] = (float)(-(uint)bVar2 & (uint)(param_2[1] - fVar26 * fStack_14));
        param_2[2] = (float)(-(uint)bVar3 & (uint)(param_2[2] - fVar26 * fVar19));
        param_2[3] = (float)(-(uint)bVar4 & (uint)(param_2[3] - fVar26 * fVar23));
      }
      fVar19 = param_1[7];
      fVar23 = param_1[8];
      fVar26 = param_1[9];
      param_2[4] = param_2[4] - param_1[6] * param_4;
      param_2[5] = param_2[5] - fVar19 * param_4;
      param_2[6] = param_2[6] - fVar23 * param_4;
      param_2[7] = param_2[7] - fVar26 * param_4;
      return 1;
    }
    if (param_7 != '\0') {
      return 0;
    }
    fVar14 = *param_8;
    fVar16 = param_8[1];
    fVar17 = param_8[2];
    fVar18 = param_8[3];
    fVar26 = param_1[0xf];
    fVar27 = param_8[0x16];
    fVar13 = ((((0.0 - fVar17) * fVar19 +
               (0.0 - fVar16) * fStack_14 + (0.0 - fVar14) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(param_8 + 4) >> 0x20) * param_1[4] +
               (float)*(undefined8 *)(param_8 + 4) * param_1[3] + 0.0 +
              (float)*(undefined8 *)(param_8 + 6) * param_1[5])) -
             (param_1[0xe] * fVar26 + param_1[0xd])) * param_1[0xc] + fVar26;
    if (param_3 <= fVar13) {
      param_3 = fVar13;
    }
    if (param_3 <= param_4) {
      param_4 = param_3;
    }
    param_1[0xf] = param_4;
    param_4 = param_4 - fVar26;
    if (param_4 == 0.0) {
      return 0;
    }
    fVar27 = fVar27 * param_4;
    bVar1 = *(byte *)((long)param_8 + 0x7a);
    fVar14 = fVar27 * local_18 + fVar14;
    fVar16 = fVar27 * fStack_14 + fVar16;
    fVar17 = fVar27 * fVar19 + fVar17;
    fVar18 = fVar27 * fVar23 + fVar18;
  }
  auVar24._1_3_ = 0;
  auVar24[0] = bVar1;
  auVar24[4] = bVar1;
  auVar24._5_3_ = 0;
  auVar24[8] = bVar1;
  auVar24._9_3_ = 0;
  auVar24[0xc] = bVar1;
  auVar24._13_3_ = 0;
  auVar5._4_4_ = _UNK_0010e8c4;
  auVar5._0_4_ = __LC14;
  auVar5._8_4_ = _UNK_0010e8c8;
  auVar5._12_4_ = _UNK_0010e8cc;
  auVar24 = auVar24 & auVar5;
  bVar2 = auVar24._4_4_ == _UNK_0010e8c4;
  bVar3 = auVar24._8_4_ == _UNK_0010e8c8;
  bVar4 = auVar24._12_4_ == _UNK_0010e8cc;
  *param_8 = (float)((uint)fVar14 & -(uint)(auVar24._0_4_ == __LC14));
  param_8[1] = (float)((uint)fVar16 & -(uint)bVar2);
  param_8[2] = (float)((uint)fVar17 & -(uint)bVar3);
  param_8[3] = (float)((uint)fVar18 & -(uint)bVar4);
  fVar19 = param_1[10];
  fVar23 = param_1[0xb];
  fVar26 = param_1[0xc];
  param_8[4] = param_1[9] * param_4 + param_8[4];
  param_8[5] = fVar19 * param_4 + param_8[5];
  param_8[6] = fVar23 * param_4 + param_8[6];
  param_8[7] = fVar26 * param_4 + param_8[7];
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar8 = (undefined8 *)(*Allocate)(0x1b0);
  uVar5 = _UNK_0010e898;
  uVar4 = __LC4;
  *(undefined1 (*) [16])(puVar8 + 6) = (undefined1  [16])0x0;
  uVar7 = _LC11;
  uVar3 = _LC0;
  *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar8 + 0x12) = (undefined1  [16])0x0;
  uVar6 = _LC6;
  *puVar8 = &PTR_GetRTTI_0010e788;
  *(undefined4 *)((long)puVar8 + 0xac) = uVar6;
  *(undefined4 *)(puVar8 + 0x16) = uVar6;
  *(undefined4 *)((long)puVar8 + 0xb4) = uVar6;
  *(undefined4 *)(puVar8 + 0x17) = uVar6;
  uVar1 = CONCAT44(_UNK_0010e8a4,_LC6);
  uVar2 = CONCAT44(_UNK_0010e8ac,_LC9);
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined8 *)((long)puVar8 + 0xbc) = uVar1;
  *(undefined8 *)((long)puVar8 + 0xc4) = uVar2;
  uVar6 = _LC9;
  *(undefined1 *)((long)puVar8 + 0xc) = 1;
  puVar8[2] = 0;
  *(undefined4 *)((long)puVar8 + 0xcc) = uVar6;
  *(undefined4 *)(puVar8 + 0x1a) = uVar6;
  *(undefined4 *)((long)puVar8 + 0xd4) = uVar6;
  *(undefined4 *)(puVar8 + 0x1b) = uVar6;
  puVar8[3] = 0x3f80000000000000;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 1;
  puVar8[0x14] = 0;
  *(undefined1 *)(puVar8 + 0x15) = 0;
  *(undefined4 *)((long)puVar8 + 0xfc) = 0;
  *(undefined1 (*) [16])((long)puVar8 + 0xdc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)puVar8 + 0xec) = (undefined1  [16])0x0;
  uVar2 = _LC11;
  uVar1 = __LC10;
  *(undefined1 (*) [16])(puVar8 + 8) = ZEXT416(uVar3);
  puVar8[10] = uVar4;
  puVar8[0xb] = uVar5;
  *(undefined1 (*) [16])(puVar8 + 0xe) = ZEXT416(uVar3);
  puVar8[0x10] = uVar4;
  puVar8[0x11] = uVar5;
  puVar9 = puVar8 + 0x20;
  do {
    *(undefined1 *)puVar9 = 0;
    puVar10 = (undefined8 *)((long)puVar9 + 0x1c);
    *(undefined8 *)((long)puVar9 + 4) = uVar1;
    *(undefined8 *)((long)puVar9 + 0xc) = uVar2;
    *(undefined8 *)((long)puVar9 + 0x14) = uVar7;
    puVar9 = puVar10;
  } while (puVar8 + 0x35 != puVar10);
  return;
}



/* JPH::SixDOFConstraintSettings::GetRTTI() const */

undefined1 * JPH::SixDOFConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti,
                      "SixDOFConstraintSettings",0x1b0,
                      GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::SixDOFConstraint::WarmStartVelocityConstraint(SixDOFConstraint *this,float param_1)

{
  undefined1 auVar1 [16];
  SixDOFConstraint SVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  SixDOFConstraint *pSVar33;
  uint uVar34;
  SixDOFConstraint *pSVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  
  if (this[0x82] != (SixDOFConstraint)0x0) {
    pSVar35 = this + 0x618;
    pSVar33 = this + 0x200;
    do {
      if (*(float *)(pSVar35 + 0x18) != 0.0) {
        fVar36 = *(float *)pSVar33;
        fVar37 = *(float *)(pSVar33 + 4);
        fVar38 = *(float *)(pSVar33 + 8);
        fVar39 = *(float *)(pSVar33 + 0xc);
        pfVar5 = *(float **)(*(long *)(this + 0x30) + 0x48);
        fVar42 = *(float *)(pSVar35 + 0x24) * param_1;
        pfVar6 = *(float **)(*(long *)(this + 0x28) + 0x48);
        if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
          fVar51 = pfVar6[0x16];
          if (*(char *)(*(long *)(this + 0x30) + 0x78) == '\x02') {
            fVar57 = pfVar5[0x16];
            *(float *)(pSVar35 + 0x24) = fVar42;
            iVar32 = _UNK_0010e8cc;
            iVar31 = _UNK_0010e8c8;
            iVar30 = _UNK_0010e8c4;
            iVar29 = __LC14;
            if (fVar42 != 0.0) {
              fVar51 = fVar51 * fVar42;
              bVar3 = *(byte *)((long)pfVar6 + 0x7a);
              auVar28._4_4_ = _UNK_0010e8c4;
              auVar28._0_4_ = __LC14;
              auVar28._8_4_ = _UNK_0010e8c8;
              auVar28._12_4_ = _UNK_0010e8cc;
              auVar55._1_3_ = 0;
              auVar55[0] = bVar3;
              bVar4 = *(byte *)((long)pfVar5 + 0x7a);
              auVar55[4] = bVar3;
              auVar55._5_3_ = 0;
              auVar55[8] = bVar3;
              auVar55._9_3_ = 0;
              auVar55[0xc] = bVar3;
              auVar55._13_3_ = 0;
              auVar55 = auVar55 & auVar28;
              bVar10 = auVar55._4_4_ == _UNK_0010e8c4;
              bVar11 = auVar55._8_4_ == _UNK_0010e8c8;
              bVar12 = auVar55._12_4_ == _UNK_0010e8cc;
              *pfVar6 = (float)(-(uint)(auVar55._0_4_ == __LC14) & (uint)(*pfVar6 - fVar51 * fVar36)
                               );
              pfVar6[1] = (float)(-(uint)bVar10 & (uint)(pfVar6[1] - fVar51 * fVar37));
              pfVar6[2] = (float)(-(uint)bVar11 & (uint)(pfVar6[2] - fVar51 * fVar38));
              pfVar6[3] = (float)(-(uint)bVar12 & (uint)(pfVar6[3] - fVar51 * fVar39));
              fVar51 = *(float *)(pSVar35 + 4);
              fVar13 = *(float *)(pSVar35 + 8);
              fVar14 = *(float *)(pSVar35 + 0xc);
              fVar57 = fVar42 * fVar57;
              pfVar6[4] = pfVar6[4] - *(float *)pSVar35 * fVar42;
              pfVar6[5] = pfVar6[5] - fVar51 * fVar42;
              pfVar6[6] = pfVar6[6] - fVar13 * fVar42;
              pfVar6[7] = pfVar6[7] - fVar14 * fVar42;
              auVar56._1_3_ = 0;
              auVar56[0] = bVar4;
              auVar56[4] = bVar4;
              auVar56._5_3_ = 0;
              auVar56[8] = bVar4;
              auVar56._9_3_ = 0;
              auVar56[0xc] = bVar4;
              auVar56._13_3_ = 0;
              auVar56 = auVar56 & auVar28;
              *pfVar5 = (float)((uint)(fVar57 * fVar36 + *pfVar5) & -(uint)(auVar56._0_4_ == iVar29)
                               );
              pfVar5[1] = (float)((uint)(fVar57 * fVar37 + pfVar5[1]) &
                                 -(uint)(auVar56._4_4_ == iVar30));
              pfVar5[2] = (float)((uint)(fVar57 * fVar38 + pfVar5[2]) &
                                 -(uint)(auVar56._8_4_ == iVar31));
              pfVar5[3] = (float)((uint)(fVar57 * fVar39 + pfVar5[3]) &
                                 -(uint)(auVar56._12_4_ == iVar32));
              auVar49._0_4_ = *(float *)(pSVar35 + 0xc) * fVar42 + pfVar5[4];
              auVar49._4_4_ = *(float *)(pSVar35 + 0x10) * fVar42 + pfVar5[5];
              auVar49._8_4_ = *(float *)(pSVar35 + 0x14) * fVar42 + pfVar5[6];
              auVar49._12_4_ = *(float *)(pSVar35 + 0x18) * fVar42 + pfVar5[7];
              *(undefined1 (*) [16])(pfVar5 + 4) = auVar49;
            }
          }
          else {
            *(float *)(pSVar35 + 0x24) = fVar42;
            if (fVar42 != 0.0) {
              fVar51 = fVar51 * fVar42;
              bVar3 = *(byte *)((long)pfVar6 + 0x7a);
              auVar53._1_3_ = 0;
              auVar53[0] = bVar3;
              auVar53[4] = bVar3;
              auVar53._5_3_ = 0;
              auVar53[8] = bVar3;
              auVar53._9_3_ = 0;
              auVar53[0xc] = bVar3;
              auVar53._13_3_ = 0;
              auVar27._4_4_ = _UNK_0010e8c4;
              auVar27._0_4_ = __LC14;
              auVar27._8_4_ = _UNK_0010e8c8;
              auVar27._12_4_ = _UNK_0010e8cc;
              auVar53 = auVar53 & auVar27;
              bVar10 = auVar53._4_4_ == _UNK_0010e8c4;
              bVar11 = auVar53._8_4_ == _UNK_0010e8c8;
              bVar12 = auVar53._12_4_ == _UNK_0010e8cc;
              *pfVar6 = (float)(-(uint)(auVar53._0_4_ == __LC14) & (uint)(*pfVar6 - fVar51 * fVar36)
                               );
              pfVar6[1] = (float)(-(uint)bVar10 & (uint)(pfVar6[1] - fVar51 * fVar37));
              pfVar6[2] = (float)(-(uint)bVar11 & (uint)(pfVar6[2] - fVar51 * fVar38));
              pfVar6[3] = (float)(-(uint)bVar12 & (uint)(pfVar6[3] - fVar51 * fVar39));
              auVar1 = *(undefined1 (*) [16])pSVar35;
              pfVar6[4] = pfVar6[4] - fVar42 * auVar1._0_4_;
              pfVar6[5] = pfVar6[5] - fVar42 * auVar1._4_4_;
              pfVar6[6] = pfVar6[6] - fVar42 * auVar1._8_4_;
              pfVar6[7] = pfVar6[7] - fVar42 * auVar1._12_4_;
            }
          }
        }
        else {
          fVar51 = pfVar5[0x16];
          *(float *)(pSVar35 + 0x24) = fVar42;
          if (fVar42 != 0.0) {
            fVar51 = fVar51 * fVar42;
            bVar3 = *(byte *)((long)pfVar5 + 0x7a);
            auVar59._1_3_ = 0;
            auVar59[0] = bVar3;
            auVar59[4] = bVar3;
            auVar59._5_3_ = 0;
            auVar59[8] = bVar3;
            auVar59._9_3_ = 0;
            auVar59[0xc] = bVar3;
            auVar59._13_3_ = 0;
            auVar1._4_4_ = _UNK_0010e8c4;
            auVar1._0_4_ = __LC14;
            auVar1._8_4_ = _UNK_0010e8c8;
            auVar1._12_4_ = _UNK_0010e8cc;
            auVar59 = auVar59 & auVar1;
            bVar10 = auVar59._4_4_ == _UNK_0010e8c4;
            bVar11 = auVar59._8_4_ == _UNK_0010e8c8;
            bVar12 = auVar59._12_4_ == _UNK_0010e8cc;
            *pfVar5 = (float)((uint)(fVar51 * fVar36 + *pfVar5) & -(uint)(auVar59._0_4_ == __LC14));
            pfVar5[1] = (float)((uint)(fVar51 * fVar37 + pfVar5[1]) & -(uint)bVar10);
            pfVar5[2] = (float)((uint)(fVar51 * fVar38 + pfVar5[2]) & -(uint)bVar11);
            pfVar5[3] = (float)((uint)(fVar51 * fVar39 + pfVar5[3]) & -(uint)bVar12);
            auVar1 = *(undefined1 (*) [16])(pSVar35 + 0xc);
            auVar46._0_4_ = fVar42 * auVar1._0_4_ + pfVar5[4];
            auVar46._4_4_ = fVar42 * auVar1._4_4_ + pfVar5[5];
            auVar46._8_4_ = fVar42 * auVar1._8_4_ + pfVar5[6];
            auVar46._12_4_ = fVar42 * auVar1._12_4_ + pfVar5[7];
            *(undefined1 (*) [16])(pfVar5 + 4) = auVar46;
          }
        }
      }
      pSVar35 = pSVar35 + 0x40;
      pSVar33 = pSVar33 + 0x10;
    } while (pSVar35 != this + 0x6d8);
  }
  if (this[0x83] != (SixDOFConstraint)0x0) {
    pSVar35 = this + 0x6c0;
    do {
      if (*(float *)(pSVar35 + 0x20) != 0.0) {
        lVar8 = *(long *)(this + 0x30);
        lVar7 = *(long *)(this + 0x28);
        fVar36 = *(float *)(pSVar35 + 0x2c) * param_1;
        *(float *)(pSVar35 + 0x2c) = fVar36;
        if (fVar36 != 0.0) {
          if (*(char *)(lVar7 + 0x78) == '\x02') {
            lVar7 = *(long *)(lVar7 + 0x48);
            fVar37 = *(float *)(pSVar35 + 4);
            fVar38 = *(float *)(pSVar35 + 8);
            fVar39 = *(float *)(pSVar35 + 0xc);
            *(float *)(lVar7 + 0x10) = *(float *)(lVar7 + 0x10) - fVar36 * *(float *)pSVar35;
            *(float *)(lVar7 + 0x14) = *(float *)(lVar7 + 0x14) - fVar36 * fVar37;
            *(float *)(lVar7 + 0x18) = *(float *)(lVar7 + 0x18) - fVar36 * fVar38;
            *(float *)(lVar7 + 0x1c) = *(float *)(lVar7 + 0x1c) - fVar36 * fVar39;
          }
          if (*(char *)(lVar8 + 0x78) == '\x02') {
            lVar8 = *(long *)(lVar8 + 0x48);
            auVar44._0_4_ = fVar36 * *(float *)(pSVar35 + 0x10) + *(float *)(lVar8 + 0x10);
            auVar44._4_4_ = fVar36 * *(float *)(pSVar35 + 0x14) + *(float *)(lVar8 + 0x14);
            auVar44._8_4_ = fVar36 * *(float *)(pSVar35 + 0x18) + *(float *)(lVar8 + 0x18);
            auVar44._12_4_ = fVar36 * *(float *)(pSVar35 + 0x1c) + *(float *)(lVar8 + 0x1c);
            *(undefined1 (*) [16])(lVar8 + 0x10) = auVar44;
          }
        }
      }
      pSVar35 = pSVar35 + 0x30;
    } while (pSVar35 != this + 0x750);
  }
  SVar2 = this[0x81];
  if ((~(byte)SVar2 & 0x38) == 0) {
    lVar8 = *(long *)(this + 0x30);
    fVar36 = param_1 * *(float *)(this + 0x5f0);
    fVar37 = param_1 * *(float *)(this + 0x5f4);
    fVar38 = param_1 * *(float *)(this + 0x5f8);
    auVar47._4_4_ = -(uint)(fVar37 == 0.0);
    auVar47._0_4_ = -(uint)(fVar36 == 0.0);
    auVar47._8_4_ = -(uint)(fVar38 == 0.0);
    auVar47._12_4_ = -(uint)(param_1 * *(float *)(this + 0x5fc) == 0.0);
    *(float *)(this + 0x5f0) = fVar36;
    *(float *)(this + 0x5f4) = fVar37;
    *(float *)(this + 0x5f8) = fVar38;
    *(float *)(this + 0x5fc) = param_1 * *(float *)(this + 0x5fc);
    uVar34 = movmskps(0,auVar47);
    if ((~uVar34 & 7) != 0) {
      if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
        lVar7 = *(long *)(*(long *)(this + 0x28) + 0x48);
        fVar39 = *(float *)(this + 0x534);
        fVar42 = *(float *)(this + 0x538);
        fVar51 = *(float *)(this + 0x53c);
        fVar57 = *(float *)(this + 0x544);
        fVar13 = *(float *)(this + 0x548);
        fVar14 = *(float *)(this + 0x54c);
        fVar15 = *(float *)(this + 0x554);
        fVar16 = *(float *)(this + 0x558);
        fVar17 = *(float *)(this + 0x55c);
        *(float *)(lVar7 + 0x10) =
             *(float *)(lVar7 + 0x10) -
             (fVar36 * *(float *)(this + 0x530) + fVar37 * *(float *)(this + 0x540) +
             fVar38 * *(float *)(this + 0x550));
        *(float *)(lVar7 + 0x14) =
             *(float *)(lVar7 + 0x14) - (fVar36 * fVar39 + fVar37 * fVar57 + fVar38 * fVar15);
        *(float *)(lVar7 + 0x18) =
             *(float *)(lVar7 + 0x18) - (fVar36 * fVar42 + fVar37 * fVar13 + fVar38 * fVar16);
        *(float *)(lVar7 + 0x1c) =
             *(float *)(lVar7 + 0x1c) - (fVar36 * fVar51 + fVar37 * fVar14 + fVar38 * fVar17);
      }
      if (*(char *)(lVar8 + 0x78) == '\x02') {
        lVar8 = *(long *)(lVar8 + 0x48);
        fVar39 = *(float *)(this + 0x574);
        fVar42 = *(float *)(this + 0x578);
        fVar51 = *(float *)(this + 0x57c);
        fVar57 = *(float *)(this + 0x584);
        fVar13 = *(float *)(this + 0x588);
        fVar14 = *(float *)(this + 0x58c);
        fVar15 = *(float *)(this + 0x594);
        fVar16 = *(float *)(this + 0x598);
        fVar17 = *(float *)(this + 0x59c);
        *(float *)(lVar8 + 0x10) =
             fVar38 * *(float *)(this + 0x590) +
             fVar36 * *(float *)(this + 0x570) + fVar37 * *(float *)(this + 0x580) +
             *(float *)(lVar8 + 0x10);
        *(float *)(lVar8 + 0x14) =
             fVar38 * fVar15 + fVar36 * fVar39 + fVar37 * fVar57 + *(float *)(lVar8 + 0x14);
        *(float *)(lVar8 + 0x18) =
             fVar38 * fVar16 + fVar36 * fVar42 + fVar37 * fVar13 + *(float *)(lVar8 + 0x18);
        *(float *)(lVar8 + 0x1c) =
             fVar38 * fVar17 + fVar36 * fVar51 + fVar37 * fVar14 + *(float *)(lVar8 + 0x1c);
      }
    }
  }
  else if ((~(byte)this[0x80] & 0x38) != 0) {
    lVar8 = *(long *)(this + 0x30);
    lVar7 = *(long *)(this + 0x28);
    fVar36 = *(float *)(this + 0x4cc) * param_1;
    *(float *)(this + 0x4cc) = fVar36;
    if (fVar36 != 0.0) {
      if (*(char *)(lVar7 + 0x78) == '\x02') {
        lVar9 = *(long *)(lVar7 + 0x48);
        fVar37 = *(float *)(this + 0x4a4);
        fVar38 = *(float *)(this + 0x4a8);
        fVar39 = *(float *)(this + 0x4ac);
        *(float *)(lVar9 + 0x10) = *(float *)(lVar9 + 0x10) - fVar36 * *(float *)(this + 0x4a0);
        *(float *)(lVar9 + 0x14) = *(float *)(lVar9 + 0x14) - fVar36 * fVar37;
        *(float *)(lVar9 + 0x18) = *(float *)(lVar9 + 0x18) - fVar36 * fVar38;
        *(float *)(lVar9 + 0x1c) = *(float *)(lVar9 + 0x1c) - fVar36 * fVar39;
      }
      if (*(char *)(lVar8 + 0x78) == '\x02') {
        lVar9 = *(long *)(lVar8 + 0x48);
        fVar37 = *(float *)(this + 0x4b4);
        fVar38 = *(float *)(this + 0x4b8);
        fVar39 = *(float *)(this + 0x4bc);
        *(float *)(lVar9 + 0x10) = fVar36 * *(float *)(this + 0x4b0) + *(float *)(lVar9 + 0x10);
        *(float *)(lVar9 + 0x14) = fVar36 * fVar37 + *(float *)(lVar9 + 0x14);
        *(float *)(lVar9 + 0x18) = fVar36 * fVar38 + *(float *)(lVar9 + 0x18);
        *(float *)(lVar9 + 0x1c) = fVar36 * fVar39 + *(float *)(lVar9 + 0x1c);
      }
    }
    fVar36 = *(float *)(this + 0x4fc) * param_1;
    *(float *)(this + 0x4fc) = fVar36;
    if (fVar36 != 0.0) {
      if (*(char *)(lVar7 + 0x78) == '\x02') {
        lVar9 = *(long *)(lVar7 + 0x48);
        fVar37 = *(float *)(this + 0x4d4);
        fVar38 = *(float *)(this + 0x4d8);
        fVar39 = *(float *)(this + 0x4dc);
        *(float *)(lVar9 + 0x10) = *(float *)(lVar9 + 0x10) - fVar36 * *(float *)(this + 0x4d0);
        *(float *)(lVar9 + 0x14) = *(float *)(lVar9 + 0x14) - fVar36 * fVar37;
        *(float *)(lVar9 + 0x18) = *(float *)(lVar9 + 0x18) - fVar36 * fVar38;
        *(float *)(lVar9 + 0x1c) = *(float *)(lVar9 + 0x1c) - fVar36 * fVar39;
      }
      if (*(char *)(lVar8 + 0x78) == '\x02') {
        lVar9 = *(long *)(lVar8 + 0x48);
        fVar37 = *(float *)(this + 0x4e4);
        fVar38 = *(float *)(this + 0x4e8);
        fVar39 = *(float *)(this + 0x4ec);
        *(float *)(lVar9 + 0x10) = fVar36 * *(float *)(this + 0x4e0) + *(float *)(lVar9 + 0x10);
        *(float *)(lVar9 + 0x14) = fVar36 * fVar37 + *(float *)(lVar9 + 0x14);
        *(float *)(lVar9 + 0x18) = fVar36 * fVar38 + *(float *)(lVar9 + 0x18);
        *(float *)(lVar9 + 0x1c) = fVar36 * fVar39 + *(float *)(lVar9 + 0x1c);
      }
    }
    fVar36 = *(float *)(this + 0x52c) * param_1;
    *(float *)(this + 0x52c) = fVar36;
    if (fVar36 != 0.0) {
      if (*(char *)(lVar7 + 0x78) == '\x02') {
        lVar7 = *(long *)(lVar7 + 0x48);
        auVar50._0_4_ = *(float *)(lVar7 + 0x10) - fVar36 * *(float *)(this + 0x500);
        auVar50._4_4_ = *(float *)(lVar7 + 0x14) - fVar36 * *(float *)(this + 0x504);
        auVar50._8_4_ = *(float *)(lVar7 + 0x18) - fVar36 * *(float *)(this + 0x508);
        auVar50._12_4_ = *(float *)(lVar7 + 0x1c) - fVar36 * *(float *)(this + 0x50c);
        *(undefined1 (*) [16])(lVar7 + 0x10) = auVar50;
      }
      if (*(char *)(lVar8 + 0x78) == '\x02') {
        lVar8 = *(long *)(lVar8 + 0x48);
        fVar37 = *(float *)(this + 0x514);
        fVar38 = *(float *)(this + 0x518);
        fVar39 = *(float *)(this + 0x51c);
        *(float *)(lVar8 + 0x10) = fVar36 * *(float *)(this + 0x510) + *(float *)(lVar8 + 0x10);
        *(float *)(lVar8 + 0x14) = fVar36 * fVar37 + *(float *)(lVar8 + 0x14);
        *(float *)(lVar8 + 0x18) = fVar36 * fVar38 + *(float *)(lVar8 + 0x18);
        *(float *)(lVar8 + 0x1c) = fVar36 * fVar39 + *(float *)(lVar8 + 0x1c);
      }
    }
  }
  if (((~(byte)SVar2 & 7) == 0) && (this[0x85] == (SixDOFConstraint)0x0)) {
    lVar8 = *(long *)(this + 0x30);
    fVar36 = param_1 * *(float *)(this + 0x410);
    fVar37 = param_1 * *(float *)(this + 0x414);
    fVar38 = param_1 * *(float *)(this + 0x418);
    fVar39 = param_1 * *(float *)(this + 0x41c);
    auVar40._4_4_ = -(uint)(fVar37 == 0.0);
    auVar40._0_4_ = -(uint)(fVar36 == 0.0);
    auVar40._8_4_ = -(uint)(fVar38 == 0.0);
    auVar40._12_4_ = -(uint)(fVar39 == 0.0);
    *(float *)(this + 0x410) = fVar36;
    *(float *)(this + 0x414) = fVar37;
    *(float *)(this + 0x418) = fVar38;
    *(float *)(this + 0x41c) = fVar39;
    uVar34 = movmskps(0,auVar40);
    if ((~uVar34 & 7) != 0) {
      if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
        pfVar5 = *(float **)(*(long *)(this + 0x28) + 0x48);
        fVar42 = pfVar5[0x16];
        bVar3 = *(byte *)((long)pfVar5 + 0x7a);
        auVar41._1_3_ = 0;
        auVar41[0] = bVar3;
        auVar41[4] = bVar3;
        auVar41._5_3_ = 0;
        auVar41[8] = bVar3;
        auVar41._9_3_ = 0;
        auVar41[0xc] = bVar3;
        auVar41._13_3_ = 0;
        auVar26._4_4_ = _UNK_0010e8c4;
        auVar26._0_4_ = __LC14;
        auVar26._8_4_ = _UNK_0010e8c8;
        auVar26._12_4_ = _UNK_0010e8cc;
        auVar41 = auVar41 & auVar26;
        bVar10 = auVar41._4_4_ == _UNK_0010e8c4;
        bVar11 = auVar41._8_4_ == _UNK_0010e8c8;
        bVar12 = auVar41._12_4_ == _UNK_0010e8cc;
        *pfVar5 = (float)(-(uint)(auVar41._0_4_ == __LC14) & (uint)(*pfVar5 - fVar42 * fVar36));
        pfVar5[1] = (float)(-(uint)bVar10 & (uint)(pfVar5[1] - fVar42 * fVar37));
        pfVar5[2] = (float)(-(uint)bVar11 & (uint)(pfVar5[2] - fVar42 * fVar38));
        pfVar5[3] = (float)(-(uint)bVar12 & (uint)(pfVar5[3] - fVar42 * fVar39));
        fVar42 = *(float *)(this + 0x364);
        fVar51 = *(float *)(this + 0x368);
        fVar57 = *(float *)(this + 0x36c);
        fVar13 = *(float *)(this + 0x354);
        fVar14 = *(float *)(this + 0x358);
        fVar15 = *(float *)(this + 0x35c);
        fVar16 = *(float *)(this + 0x374);
        fVar17 = *(float *)(this + 0x378);
        fVar18 = *(float *)(this + 0x37c);
        fVar19 = *(float *)(this + 900);
        fVar20 = *(float *)(this + 0x388);
        fVar21 = *(float *)(this + 0x38c);
        pfVar5[4] = pfVar5[4] -
                    (fVar36 * *(float *)(this + 0x350) + fVar37 * *(float *)(this + 0x360) +
                     fVar38 * *(float *)(this + 0x370) + *(float *)(this + 0x380));
        pfVar5[5] = pfVar5[5] - (fVar36 * fVar13 + fVar37 * fVar42 + fVar38 * fVar16 + fVar19);
        pfVar5[6] = pfVar5[6] - (fVar36 * fVar14 + fVar37 * fVar51 + fVar38 * fVar17 + fVar20);
        pfVar5[7] = pfVar5[7] - (fVar36 * fVar15 + fVar37 * fVar57 + fVar38 * fVar18 + fVar21);
      }
      if (*(char *)(lVar8 + 0x78) == '\x02') {
        pfVar5 = *(float **)(lVar8 + 0x48);
        bVar3 = *(byte *)((long)pfVar5 + 0x7a);
        fVar42 = pfVar5[0x16];
        auVar45._1_3_ = 0;
        auVar45[0] = bVar3;
        auVar45[4] = bVar3;
        auVar45._5_3_ = 0;
        auVar45[8] = bVar3;
        auVar45._9_3_ = 0;
        auVar45[0xc] = bVar3;
        auVar45._13_3_ = 0;
        auVar25._4_4_ = _UNK_0010e8c4;
        auVar25._0_4_ = __LC14;
        auVar25._8_4_ = _UNK_0010e8c8;
        auVar25._12_4_ = _UNK_0010e8cc;
        auVar45 = auVar45 & auVar25;
        bVar10 = auVar45._4_4_ == _UNK_0010e8c4;
        bVar11 = auVar45._8_4_ == _UNK_0010e8c8;
        bVar12 = auVar45._12_4_ == _UNK_0010e8cc;
        *pfVar5 = (float)((uint)(fVar42 * fVar36 + *pfVar5) & -(uint)(auVar45._0_4_ == __LC14));
        pfVar5[1] = (float)((uint)(fVar42 * fVar37 + pfVar5[1]) & -(uint)bVar10);
        pfVar5[2] = (float)((uint)(fVar42 * fVar38 + pfVar5[2]) & -(uint)bVar11);
        pfVar5[3] = (float)((uint)(fVar42 * fVar39 + pfVar5[3]) & -(uint)bVar12);
        fVar39 = *(float *)(this + 0x3a4);
        fVar42 = *(float *)(this + 0x3a8);
        fVar51 = *(float *)(this + 0x3ac);
        fVar57 = *(float *)(this + 0x394);
        fVar13 = *(float *)(this + 0x398);
        fVar14 = *(float *)(this + 0x39c);
        fVar15 = *(float *)(this + 0x3b4);
        fVar16 = *(float *)(this + 0x3b8);
        fVar17 = *(float *)(this + 0x3bc);
        fVar18 = *(float *)(this + 0x3c4);
        fVar19 = *(float *)(this + 0x3c8);
        fVar20 = *(float *)(this + 0x3cc);
        pfVar5[4] = fVar38 * *(float *)(this + 0x3b0) +
                    fVar36 * *(float *)(this + 0x390) + fVar37 * *(float *)(this + 0x3a0) +
                    *(float *)(this + 0x3c0) + pfVar5[4];
        pfVar5[5] = fVar38 * fVar15 + fVar36 * fVar57 + fVar37 * fVar39 + fVar18 + pfVar5[5];
        pfVar5[6] = fVar38 * fVar16 + fVar36 * fVar13 + fVar37 * fVar42 + fVar19 + pfVar5[6];
        pfVar5[7] = fVar38 * fVar17 + fVar36 * fVar14 + fVar37 * fVar51 + fVar20 + pfVar5[7];
        return;
      }
    }
  }
  else if ((~(byte)this[0x80] & 7) != 0) {
    pSVar35 = this + 0x284;
    pSVar33 = this + 0x200;
    do {
      if (*(float *)(pSVar35 + 0x18) != 0.0) {
        fVar36 = *(float *)pSVar33;
        fVar37 = *(float *)(pSVar33 + 4);
        fVar38 = *(float *)(pSVar33 + 8);
        fVar39 = *(float *)(pSVar33 + 0xc);
        pfVar5 = *(float **)(*(long *)(this + 0x30) + 0x48);
        fVar42 = *(float *)(pSVar35 + 0x24) * param_1;
        pfVar6 = *(float **)(*(long *)(this + 0x28) + 0x48);
        if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
          if (*(char *)(*(long *)(this + 0x30) + 0x78) == '\x02') {
            fVar51 = pfVar5[0x16];
            fVar57 = pfVar6[0x16];
            *(float *)(pSVar35 + 0x24) = fVar42;
            iVar32 = _UNK_0010e8cc;
            iVar31 = _UNK_0010e8c8;
            iVar30 = _UNK_0010e8c4;
            iVar29 = __LC14;
            if (fVar42 != 0.0) {
              fVar57 = fVar57 * fVar42;
              bVar3 = *(byte *)((long)pfVar6 + 0x7a);
              auVar60._1_3_ = 0;
              auVar60[0] = bVar3;
              bVar4 = *(byte *)((long)pfVar5 + 0x7a);
              auVar60[4] = bVar3;
              auVar60._5_3_ = 0;
              auVar60[8] = bVar3;
              auVar60._9_3_ = 0;
              auVar60[0xc] = bVar3;
              auVar60._13_3_ = 0;
              auVar23._4_4_ = _UNK_0010e8c4;
              auVar23._0_4_ = __LC14;
              auVar23._8_4_ = _UNK_0010e8c8;
              auVar23._12_4_ = _UNK_0010e8cc;
              auVar60 = auVar60 & auVar23;
              bVar10 = auVar60._4_4_ == _UNK_0010e8c4;
              bVar11 = auVar60._8_4_ == _UNK_0010e8c8;
              bVar12 = auVar60._12_4_ == _UNK_0010e8cc;
              *pfVar6 = (float)(-(uint)(auVar60._0_4_ == __LC14) & (uint)(*pfVar6 - fVar57 * fVar36)
                               );
              pfVar6[1] = (float)(-(uint)bVar10 & (uint)(pfVar6[1] - fVar57 * fVar37));
              pfVar6[2] = (float)(-(uint)bVar11 & (uint)(pfVar6[2] - fVar57 * fVar38));
              pfVar6[3] = (float)(-(uint)bVar12 & (uint)(pfVar6[3] - fVar57 * fVar39));
              fVar51 = fVar42 * fVar51;
              auVar54._1_3_ = 0;
              auVar54[0] = bVar4;
              auVar54[4] = bVar4;
              auVar54._5_3_ = 0;
              auVar54[8] = bVar4;
              auVar54._9_3_ = 0;
              auVar54[0xc] = bVar4;
              auVar54._13_3_ = 0;
              auVar54 = auVar54 & auVar23;
              auVar61._0_4_ = pfVar6[4] - *(float *)pSVar35 * fVar42;
              auVar61._4_4_ = pfVar6[5] - *(float *)(pSVar35 + 4) * fVar42;
              auVar61._8_4_ = pfVar6[6] - *(float *)(pSVar35 + 8) * fVar42;
              auVar61._12_4_ = pfVar6[7] - *(float *)(pSVar35 + 0xc) * fVar42;
              *(undefined1 (*) [16])(pfVar6 + 4) = auVar61;
              *pfVar5 = (float)((uint)(fVar51 * fVar36 + *pfVar5) & -(uint)(auVar54._0_4_ == iVar29)
                               );
              pfVar5[1] = (float)((uint)(fVar51 * fVar37 + pfVar5[1]) &
                                 -(uint)(auVar54._4_4_ == iVar30));
              pfVar5[2] = (float)((uint)(fVar51 * fVar38 + pfVar5[2]) &
                                 -(uint)(auVar54._8_4_ == iVar31));
              pfVar5[3] = (float)((uint)(fVar51 * fVar39 + pfVar5[3]) &
                                 -(uint)(auVar54._12_4_ == iVar32));
              auVar48._0_4_ = *(float *)(pSVar35 + 0xc) * fVar42 + pfVar5[4];
              auVar48._4_4_ = *(float *)(pSVar35 + 0x10) * fVar42 + pfVar5[5];
              auVar48._8_4_ = *(float *)(pSVar35 + 0x14) * fVar42 + pfVar5[6];
              auVar48._12_4_ = *(float *)(pSVar35 + 0x18) * fVar42 + pfVar5[7];
              *(undefined1 (*) [16])(pfVar5 + 4) = auVar48;
            }
          }
          else {
            fVar51 = pfVar6[0x16];
            *(float *)(pSVar35 + 0x24) = fVar42;
            if (fVar42 != 0.0) {
              fVar51 = fVar51 * fVar42;
              bVar3 = *(byte *)((long)pfVar6 + 0x7a);
              auVar52._1_3_ = 0;
              auVar52[0] = bVar3;
              auVar52[4] = bVar3;
              auVar52._5_3_ = 0;
              auVar52[8] = bVar3;
              auVar52._9_3_ = 0;
              auVar52[0xc] = bVar3;
              auVar52._13_3_ = 0;
              auVar22._4_4_ = _UNK_0010e8c4;
              auVar22._0_4_ = __LC14;
              auVar22._8_4_ = _UNK_0010e8c8;
              auVar22._12_4_ = _UNK_0010e8cc;
              auVar52 = auVar52 & auVar22;
              bVar10 = auVar52._4_4_ == _UNK_0010e8c4;
              bVar11 = auVar52._8_4_ == _UNK_0010e8c8;
              bVar12 = auVar52._12_4_ == _UNK_0010e8cc;
              *pfVar6 = (float)(-(uint)(auVar52._0_4_ == __LC14) & (uint)(*pfVar6 - fVar51 * fVar36)
                               );
              pfVar6[1] = (float)(-(uint)bVar10 & (uint)(pfVar6[1] - fVar51 * fVar37));
              pfVar6[2] = (float)(-(uint)bVar11 & (uint)(pfVar6[2] - fVar51 * fVar38));
              pfVar6[3] = (float)(-(uint)bVar12 & (uint)(pfVar6[3] - fVar51 * fVar39));
              auVar1 = *(undefined1 (*) [16])pSVar35;
              pfVar6[4] = pfVar6[4] - fVar42 * auVar1._0_4_;
              pfVar6[5] = pfVar6[5] - fVar42 * auVar1._4_4_;
              pfVar6[6] = pfVar6[6] - fVar42 * auVar1._8_4_;
              pfVar6[7] = pfVar6[7] - fVar42 * auVar1._12_4_;
            }
          }
        }
        else {
          fVar51 = pfVar5[0x16];
          *(float *)(pSVar35 + 0x24) = fVar42;
          if (fVar42 != 0.0) {
            fVar51 = fVar51 * fVar42;
            bVar3 = *(byte *)((long)pfVar5 + 0x7a);
            auVar58._1_3_ = 0;
            auVar58[0] = bVar3;
            auVar58[4] = bVar3;
            auVar58._5_3_ = 0;
            auVar58[8] = bVar3;
            auVar58._9_3_ = 0;
            auVar58[0xc] = bVar3;
            auVar58._13_3_ = 0;
            auVar24._4_4_ = _UNK_0010e8c4;
            auVar24._0_4_ = __LC14;
            auVar24._8_4_ = _UNK_0010e8c8;
            auVar24._12_4_ = _UNK_0010e8cc;
            auVar58 = auVar58 & auVar24;
            bVar10 = auVar58._4_4_ == _UNK_0010e8c4;
            bVar11 = auVar58._8_4_ == _UNK_0010e8c8;
            bVar12 = auVar58._12_4_ == _UNK_0010e8cc;
            *pfVar5 = (float)((uint)(fVar51 * fVar36 + *pfVar5) & -(uint)(auVar58._0_4_ == __LC14));
            pfVar5[1] = (float)((uint)(fVar51 * fVar37 + pfVar5[1]) & -(uint)bVar10);
            pfVar5[2] = (float)((uint)(fVar51 * fVar38 + pfVar5[2]) & -(uint)bVar11);
            pfVar5[3] = (float)((uint)(fVar51 * fVar39 + pfVar5[3]) & -(uint)bVar12);
            auVar1 = *(undefined1 (*) [16])(pSVar35 + 0xc);
            auVar43._0_4_ = fVar42 * auVar1._0_4_ + pfVar5[4];
            auVar43._4_4_ = fVar42 * auVar1._4_4_ + pfVar5[5];
            auVar43._8_4_ = fVar42 * auVar1._8_4_ + pfVar5[6];
            auVar43._12_4_ = fVar42 * auVar1._12_4_ + pfVar5[7];
            *(undefined1 (*) [16])(pfVar5 + 4) = auVar43;
          }
        }
      }
      pSVar35 = pSVar35 + 0x40;
      pSVar33 = pSVar33 + 0x10;
    } while (this + 0x344 != pSVar35);
  }
  return;
}



/* JPH::SixDOFConstraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void __thiscall
JPH::SixDOFConstraint::DrawConstraintLimits(SixDOFConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long in_FS_OFFSET;
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
  float local_78;
  float fStack_74;
  undefined8 local_68;
  ulong uStack_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_20;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  fVar8 = *(float *)(this + 0x40);
  fVar9 = *(float *)(this + 0x44);
  fVar10 = *(float *)(this + 0x48);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = (float)puVar1[3];
  fVar12 = (float)puVar1[2];
  fVar11 = (float)((ulong)puVar1[2] >> 0x20);
  fVar17 = fVar11 + fVar11;
  fVar16 = fVar12 + fVar12;
  fVar14 = (float)((ulong)puVar1[3] >> 0x20);
  fVar7 = fVar14 * (fVar13 + fVar13);
  fVar18 = fVar13 * (fVar13 + fVar13);
  fStack_2c = _LC0;
  fVar5 = (float)*(undefined8 *)(this + 0x60);
  fVar19 = (float)puVar1[3];
  fVar2 = (float)*(undefined8 *)(this + 0x68);
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar3 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar4 = (float)puVar1[2];
  fVar15 = (float)((ulong)puVar1[2] >> 0x20);
  local_78 = (float)*puVar1;
  fStack_74 = (float)((ulong)*puVar1 >> 0x20);
  local_38 = CONCAT44(fStack_74 +
                      (fVar11 * fVar16 + fVar7) * fVar8 +
                      ((_LC0 - fVar18) - fVar12 * fVar16) * fVar9 +
                      (fVar13 * fVar17 - fVar16 * fVar14) * fVar10,
                      local_78 +
                      ((_LC0 - fVar11 * fVar17) - fVar18) * fVar8 +
                      (fVar11 * fVar16 - fVar7) * fVar9 +
                      (fVar13 * fVar16 + fVar17 * fVar14) * fVar10);
  local_30 = *(float *)(puVar1 + 1) +
             (fVar13 * fVar16 - fVar17 * fVar14) * fVar8 +
             (fVar16 * fVar14 + fVar13 * fVar17) * fVar9 +
             ((_LC0 - fVar12 * fVar16) - fVar11 * fVar17) * fVar10;
  fVar8 = (float)((ulong)puVar1[3] >> 0x20);
  fVar12 = (fVar8 * fVar5 + fVar4 * fVar3 + fVar15 * fVar2) - fVar19 * fVar6;
  fVar10 = (fVar8 * fVar6 - fVar4 * fVar2) + fVar15 * fVar3 + fVar19 * fVar5;
  fVar13 = fVar12 + fVar12;
  fVar14 = ((fVar8 * fVar2 + fVar4 * fVar6) - fVar15 * fVar5) + fVar19 * fVar3;
  fVar7 = fVar10 + fVar10;
  fVar8 = ((fVar8 * fVar3 - fVar4 * fVar5) - fVar15 * fVar6) - fVar19 * fVar2;
  fVar19 = (fVar14 + fVar14) * fVar14;
  fVar9 = fVar8 * (fVar14 + fVar14);
  uStack_60 = (ulong)(uint)(fVar13 * fVar14 - fVar7 * fVar8);
  local_68 = CONCAT44(fVar10 * fVar13 + fVar9,(_LC0 - fVar7 * fVar10) - fVar19);
  uStack_50 = (ulong)(uint)(fVar13 * fVar8 + fVar14 * fVar7);
  local_58 = CONCAT44((_LC0 - fVar19) - fVar12 * fVar13,fVar10 * fVar13 - fVar9);
  local_48 = CONCAT44(fVar14 * fVar7 - fVar13 * fVar8,fVar13 * fVar14 + fVar7 * fVar8);
  uStack_40 = (ulong)(uint)((_LC0 - fVar12 * fVar13) - fVar7 * fVar10);
  if (this[0x421] == (SixDOFConstraint)0x1) {
    JPH::DebugRenderer::DrawSwingPyramidLimits(param_1,&local_68,(undefined4)Color::sGreen,1,0);
  }
  else {
    JPH::DebugRenderer::DrawSwingConeLimits(param_1);
  }
  JPH::DebugRenderer::DrawPie
            (local_38,CONCAT44(fStack_2c,local_30),param_1,(undefined4)Color::sPurple,1,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SolveVelocityConstraint(float) */

uint __thiscall JPH::SixDOFConstraint::SolveVelocityConstraint(SixDOFConstraint *this,float param_1)

{
  float fVar1;
  undefined1 uVar2;
  SixDOFConstraint SVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  SixDOFConstraint *pSVar15;
  long lVar16;
  SixDOFConstraint *pSVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  float fVar33;
  float fVar34;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  
  uVar13 = (uint)(byte)this[0x82];
  if (this[0x82] != (SixDOFConstraint)0x0) {
    pSVar17 = this + 0x600;
    lVar16 = 0;
    uVar13 = 0;
    fVar20 = 0.0;
    do {
      if (fVar20 != *(float *)(pSVar17 + 0x30)) {
        if (*(int *)(this + lVar16 * 4 + 0x19c) == 0) {
          lVar12 = *(long *)(this + 0x30);
          uVar18 = *(undefined8 *)(lVar12 + 0x48);
          uVar2 = *(undefined1 *)(*(long *)(this + 0x28) + 0x78);
          uVar14 = *(undefined8 *)(*(long *)(this + 0x28) + 0x48);
        }
        else {
          if (1 < *(int *)(this + lVar16 * 4 + 0x19c) - 1U) goto LAB_00101f4a;
          lVar12 = *(long *)(this + 0x30);
          uVar18 = *(undefined8 *)(lVar12 + 0x48);
          uVar2 = *(undefined1 *)(*(long *)(this + 0x28) + 0x78);
          uVar14 = *(undefined8 *)(*(long *)(this + 0x28) + 0x48);
        }
        uVar11 = AxisConstraintPart::SolveVelocityConstraint
                           (*(undefined8 *)(this + ((long)(int)lVar16 + 0x20) * 0x10),
                            *(undefined8 *)(this + ((long)(int)lVar16 + 0x20) * 0x10 + 8),pSVar17,
                            uVar14,uVar2,uVar18,*(undefined1 *)(lVar12 + 0x78));
        uVar13 = uVar13 | uVar11;
      }
LAB_00101f4a:
      lVar16 = lVar16 + 1;
      pSVar17 = pSVar17 + 0x40;
    } while (lVar16 != 3);
  }
  SVar3 = this[0x83];
  if (SVar3 != (SixDOFConstraint)0x0) {
    pSVar17 = this + 0x6c0;
    pSVar15 = this + 0x144;
    lVar16 = 0;
    do {
      fVar20 = *(float *)(pSVar17 + 0x20);
      if (fVar20 != 0.0) {
        if (*(int *)(this + lVar16 + 0x1a8) == 0) {
          fVar22 = 0.0;
          fVar21 = 0.0;
          fVar33 = 0.0;
          cVar4 = *(char *)(*(long *)(this + 0x30) + 0x78);
          lVar12 = *(long *)(*(long *)(this + 0x30) + 0x48);
          fVar19 = *(float *)(this + lVar16 + 400) * param_1;
          if (cVar4 != '\0') {
            fVar22 = *(float *)(lVar12 + 0x10);
            fVar21 = *(float *)(lVar12 + 0x14);
            fVar33 = *(float *)(lVar12 + 0x18);
          }
          cVar5 = *(char *)(*(long *)(this + 0x28) + 0x78);
          fVar34 = 0.0;
          fVar25 = 0.0;
          fVar26 = 0.0;
          lVar6 = *(long *)(*(long *)(this + 0x28) + 0x48);
          if (cVar5 != '\0') {
            fVar34 = *(float *)(lVar6 + 0x10);
            fVar25 = *(float *)(lVar6 + 0x14);
            fVar26 = *(float *)(lVar6 + 0x18);
          }
          fVar1 = *(float *)(pSVar17 + 0x2c);
          fVar22 = (((fVar26 - fVar33) * (float)*(undefined8 *)(this + lVar16 * 4 + 0x238) +
                    (fVar25 - fVar21) *
                    (float)((ulong)*(undefined8 *)(this + lVar16 * 4 + 0x230) >> 0x20) +
                    (fVar34 - fVar22) * (float)*(undefined8 *)(this + lVar16 * 4 + 0x230) + 0.0) -
                   (*(float *)(pSVar17 + 0x28) * fVar1 + *(float *)(pSVar17 + 0x24))) * fVar20 +
                   fVar1;
          fVar20 = (float)((uint)fVar19 ^ _LC45);
          if ((float)((uint)fVar19 ^ _LC45) <= fVar22) {
            fVar20 = fVar22;
          }
          if (fVar20 <= fVar19) {
            fVar19 = fVar20;
          }
          *(float *)(pSVar17 + 0x2c) = fVar19;
          fVar19 = fVar19 - fVar1;
        }
        else {
          if (1 < *(int *)(this + lVar16 + 0x1a8) - 1U) goto LAB_00102098;
          fVar19 = 0.0;
          fVar22 = 0.0;
          fVar21 = 0.0;
          cVar4 = *(char *)(*(long *)(this + 0x30) + 0x78);
          lVar12 = *(long *)(*(long *)(this + 0x30) + 0x48);
          if (cVar4 != '\0') {
            fVar19 = *(float *)(lVar12 + 0x10);
            fVar22 = *(float *)(lVar12 + 0x14);
            fVar21 = *(float *)(lVar12 + 0x18);
          }
          cVar5 = *(char *)(*(long *)(this + 0x28) + 0x78);
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar25 = 0.0;
          lVar6 = *(long *)(*(long *)(this + 0x28) + 0x48);
          if (cVar5 != '\0') {
            fVar33 = *(float *)(lVar6 + 0x10);
            fVar34 = *(float *)(lVar6 + 0x14);
            fVar25 = *(float *)(lVar6 + 0x18);
          }
          fVar26 = *(float *)(pSVar17 + 0x2c);
          fVar19 = (((fVar25 - fVar21) * (float)*(undefined8 *)(this + lVar16 * 4 + 0x238) +
                    (fVar34 - fVar22) *
                    (float)((ulong)*(undefined8 *)(this + lVar16 * 4 + 0x230) >> 0x20) +
                    (fVar33 - fVar19) * (float)*(undefined8 *)(this + lVar16 * 4 + 0x230) + 0.0) -
                   (*(float *)(pSVar17 + 0x28) * fVar26 + *(float *)(pSVar17 + 0x24))) * fVar20 +
                   fVar26;
          fVar20 = *(float *)pSVar15 * param_1;
          if (*(float *)pSVar15 * param_1 <= fVar19) {
            fVar20 = fVar19;
          }
          fVar19 = *(float *)(pSVar15 + 4) * param_1;
          if (fVar20 <= *(float *)(pSVar15 + 4) * param_1) {
            fVar19 = fVar20;
          }
          *(float *)(pSVar17 + 0x2c) = fVar19;
          fVar19 = fVar19 - fVar26;
        }
        if (fVar19 != 0.0) {
          if (cVar5 == '\x02') {
            auVar29._0_4_ = *(float *)(lVar6 + 0x10) - fVar19 * *(float *)pSVar17;
            auVar29._4_4_ = *(float *)(lVar6 + 0x14) - fVar19 * *(float *)(pSVar17 + 4);
            auVar29._8_4_ = *(float *)(lVar6 + 0x18) - fVar19 * *(float *)(pSVar17 + 8);
            auVar29._12_4_ = *(float *)(lVar6 + 0x1c) - fVar19 * *(float *)(pSVar17 + 0xc);
            *(undefined1 (*) [16])(lVar6 + 0x10) = auVar29;
          }
          uVar13 = (uint)(byte)SVar3;
          if (cVar4 == '\x02') {
            fVar20 = *(float *)(pSVar17 + 0x14);
            fVar22 = *(float *)(pSVar17 + 0x18);
            fVar21 = *(float *)(pSVar17 + 0x1c);
            *(float *)(lVar12 + 0x10) =
                 fVar19 * *(float *)(pSVar17 + 0x10) + *(float *)(lVar12 + 0x10);
            *(float *)(lVar12 + 0x14) = fVar19 * fVar20 + *(float *)(lVar12 + 0x14);
            *(float *)(lVar12 + 0x18) = fVar19 * fVar22 + *(float *)(lVar12 + 0x18);
            *(float *)(lVar12 + 0x1c) = fVar19 * fVar21 + *(float *)(lVar12 + 0x1c);
          }
        }
      }
LAB_00102098:
      lVar16 = lVar16 + 4;
      pSVar17 = pSVar17 + 0x30;
      pSVar15 = pSVar15 + 0x1c;
    } while (lVar16 != 0xc);
  }
  SVar3 = this[0x81];
  if ((~(byte)SVar3 & 0x38) == 0) {
    lVar16 = *(long *)(this + 0x28);
    auVar23 = SUB1612((undefined1  [16])0x0,0);
    cVar4 = *(char *)(*(long *)(this + 0x30) + 0x78);
    lVar12 = *(long *)(*(long *)(this + 0x30) + 0x48);
    if (cVar4 != '\0') {
      auVar23 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0x10),0);
    }
    cVar5 = *(char *)(lVar16 + 0x78);
    lVar6 = *(long *)(lVar16 + 0x48);
    if (cVar5 == '\0') {
      fVar21 = 0.0 - auVar23._0_4_;
      fVar33 = 0.0 - auVar23._4_4_;
      fVar34 = 0.0 - auVar23._8_4_;
      fVar20 = fVar21 * *(float *)(this + 0x5b0) + fVar33 * *(float *)(this + 0x5c0) +
               fVar34 * *(float *)(this + 0x5d0);
      fVar19 = fVar21 * *(float *)(this + 0x5b4) + fVar33 * *(float *)(this + 0x5c4) +
               fVar34 * *(float *)(this + 0x5d4);
      fVar22 = fVar21 * *(float *)(this + 0x5b8) + fVar33 * *(float *)(this + 0x5c8) +
               fVar34 * *(float *)(this + 0x5d8);
      fVar21 = fVar21 * *(float *)(this + 0x5bc) + fVar33 * *(float *)(this + 0x5cc) +
               fVar34 * *(float *)(this + 0x5dc);
      auVar35._4_4_ = -(uint)(fVar19 == 0.0);
      auVar35._0_4_ = -(uint)(fVar20 == 0.0);
      auVar35._8_4_ = -(uint)(fVar22 == 0.0);
      auVar35._12_4_ = -(uint)(fVar21 == 0.0);
      auVar27._0_4_ = *(float *)(this + 0x5f0) + fVar20;
      auVar27._4_4_ = *(float *)(this + 0x5f4) + fVar19;
      auVar27._8_4_ = *(float *)(this + 0x5f8) + fVar22;
      auVar27._12_4_ = *(float *)(this + 0x5fc) + fVar21;
      uVar11 = movmskps((int)lVar16,auVar35);
      *(undefined1 (*) [16])(this + 0x5f0) = auVar27;
      if ((~uVar11 & 7) == 0) goto joined_r0x001020da;
    }
    else {
      fVar21 = *(float *)(lVar6 + 0x10) - auVar23._0_4_;
      fVar33 = *(float *)(lVar6 + 0x14) - auVar23._4_4_;
      fVar34 = *(float *)(lVar6 + 0x18) - auVar23._8_4_;
      fVar20 = fVar21 * *(float *)(this + 0x5b0) + fVar33 * *(float *)(this + 0x5c0) +
               fVar34 * *(float *)(this + 0x5d0);
      fVar19 = fVar21 * *(float *)(this + 0x5b4) + fVar33 * *(float *)(this + 0x5c4) +
               fVar34 * *(float *)(this + 0x5d4);
      fVar22 = fVar21 * *(float *)(this + 0x5b8) + fVar33 * *(float *)(this + 0x5c8) +
               fVar34 * *(float *)(this + 0x5d8);
      fVar21 = fVar21 * *(float *)(this + 0x5bc) + fVar33 * *(float *)(this + 0x5cc) +
               fVar34 * *(float *)(this + 0x5dc);
      *(float *)(this + 0x5f0) = *(float *)(this + 0x5f0) + fVar20;
      *(float *)(this + 0x5f4) = *(float *)(this + 0x5f4) + fVar19;
      *(float *)(this + 0x5f8) = *(float *)(this + 0x5f8) + fVar22;
      *(float *)(this + 0x5fc) = *(float *)(this + 0x5fc) + fVar21;
      auVar28._4_4_ = -(uint)(fVar19 == 0.0);
      auVar28._0_4_ = -(uint)(fVar20 == 0.0);
      auVar28._8_4_ = -(uint)(fVar22 == 0.0);
      auVar28._12_4_ = -(uint)(fVar21 == 0.0);
      uVar11 = movmskps((int)lVar16,auVar28);
      if ((~uVar11 & 7) == 0) goto joined_r0x001020da;
      if (cVar5 == '\x02') {
        fVar21 = *(float *)(this + 0x534);
        fVar33 = *(float *)(this + 0x538);
        fVar34 = *(float *)(this + 0x53c);
        fVar25 = *(float *)(this + 0x544);
        fVar26 = *(float *)(this + 0x548);
        fVar1 = *(float *)(this + 0x54c);
        fVar8 = *(float *)(this + 0x554);
        fVar9 = *(float *)(this + 0x558);
        fVar10 = *(float *)(this + 0x55c);
        *(float *)(lVar6 + 0x10) =
             *(float *)(lVar6 + 0x10) -
             (fVar20 * *(float *)(this + 0x530) + fVar19 * *(float *)(this + 0x540) +
             fVar22 * *(float *)(this + 0x550));
        *(float *)(lVar6 + 0x14) =
             *(float *)(lVar6 + 0x14) - (fVar20 * fVar21 + fVar19 * fVar25 + fVar22 * fVar8);
        *(float *)(lVar6 + 0x18) =
             *(float *)(lVar6 + 0x18) - (fVar20 * fVar33 + fVar19 * fVar26 + fVar22 * fVar9);
        *(float *)(lVar6 + 0x1c) =
             *(float *)(lVar6 + 0x1c) - (fVar20 * fVar34 + fVar19 * fVar1 + fVar22 * fVar10);
      }
    }
    if (cVar4 == '\x02') {
      fVar21 = *(float *)(this + 0x574);
      fVar33 = *(float *)(this + 0x578);
      fVar34 = *(float *)(this + 0x57c);
      fVar25 = *(float *)(this + 0x584);
      fVar26 = *(float *)(this + 0x588);
      fVar1 = *(float *)(this + 0x58c);
      fVar8 = *(float *)(this + 0x594);
      fVar9 = *(float *)(this + 0x598);
      fVar10 = *(float *)(this + 0x59c);
      *(float *)(lVar12 + 0x10) =
           fVar22 * *(float *)(this + 0x590) +
           fVar20 * *(float *)(this + 0x570) + fVar19 * *(float *)(this + 0x580) +
           *(float *)(lVar12 + 0x10);
      *(float *)(lVar12 + 0x14) =
           fVar22 * fVar8 + fVar20 * fVar21 + fVar19 * fVar25 + *(float *)(lVar12 + 0x14);
      *(float *)(lVar12 + 0x18) =
           fVar22 * fVar9 + fVar20 * fVar33 + fVar19 * fVar26 + *(float *)(lVar12 + 0x18);
      *(float *)(lVar12 + 0x1c) =
           fVar22 * fVar10 + fVar20 * fVar34 + fVar19 * fVar1 + *(float *)(lVar12 + 0x1c);
    }
LAB_0010245e:
    uVar13 = 1;
  }
  else {
    if ((~(byte)this[0x80] & 0x38) == 0) goto joined_r0x001020da;
    lVar16 = *(long *)(this + 0x30);
    lVar12 = *(long *)(this + 0x28);
    uVar11 = 0;
    if (*(float *)(this + 0x4c0) != 0.0) {
      fVar20 = _LC9;
      if (*(float *)(this + 0x444) != *(float *)(this + 0x448)) {
        fVar20 = 0.0;
      }
      cVar4 = *(char *)(lVar16 + 0x78);
      auVar23 = SUB1612((undefined1  [16])0x0,0);
      lVar6 = *(long *)(lVar16 + 0x48);
      if (cVar4 != '\0') {
        auVar23 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
      }
      cVar5 = *(char *)(lVar12 + 0x78);
      lVar7 = *(long *)(lVar12 + 0x48);
      auVar24 = SUB1612((undefined1  [16])0x0,0);
      if (cVar5 != '\0') {
        auVar24 = SUB1612(*(undefined1 (*) [16])(lVar7 + 0x10),0);
      }
      fVar19 = *(float *)(this + 0x4cc);
      fVar21 = (((auVar24._8_4_ - auVar23._8_4_) * (float)*(undefined8 *)(this + 0x478) +
                (auVar24._4_4_ - auVar23._4_4_) *
                (float)((ulong)*(undefined8 *)(this + 0x470) >> 0x20) +
                (auVar24._0_4_ - auVar23._0_4_) * (float)*(undefined8 *)(this + 0x470) + 0.0) -
               (*(float *)(this + 0x4c8) * fVar19 + *(float *)(this + 0x4c4))) *
               *(float *)(this + 0x4c0) + fVar19;
      fVar22 = _LC6;
      if ((_LC6 <= fVar21) && (fVar22 = fVar20, fVar21 <= fVar20)) {
        fVar22 = fVar21;
      }
      *(float *)(this + 0x4cc) = fVar22;
      fVar22 = fVar22 - fVar19;
      uVar11 = 0;
      if (fVar22 != 0.0) {
        if (cVar5 == '\x02') {
          auVar30._0_4_ = *(float *)(lVar7 + 0x10) - fVar22 * *(float *)(this + 0x4a0);
          auVar30._4_4_ = *(float *)(lVar7 + 0x14) - fVar22 * *(float *)(this + 0x4a4);
          auVar30._8_4_ = *(float *)(lVar7 + 0x18) - fVar22 * *(float *)(this + 0x4a8);
          auVar30._12_4_ = *(float *)(lVar7 + 0x1c) - fVar22 * *(float *)(this + 0x4ac);
          *(undefined1 (*) [16])(lVar7 + 0x10) = auVar30;
        }
        if (cVar4 == '\x02') {
          fVar20 = *(float *)(this + 0x4b4);
          fVar19 = *(float *)(this + 0x4b8);
          fVar21 = *(float *)(this + 0x4bc);
          *(float *)(lVar6 + 0x10) = fVar22 * *(float *)(this + 0x4b0) + *(float *)(lVar6 + 0x10);
          *(float *)(lVar6 + 0x14) = fVar22 * fVar20 + *(float *)(lVar6 + 0x14);
          *(float *)(lVar6 + 0x18) = fVar22 * fVar19 + *(float *)(lVar6 + 0x18);
          *(float *)(lVar6 + 0x1c) = fVar22 * fVar21 + *(float *)(lVar6 + 0x1c);
        }
        uVar11 = 1;
      }
    }
    if (*(float *)(this + 0x4f0) != 0.0) {
      fVar20 = _LC9;
      if (*(float *)(this + 0x44c) != *(float *)(this + 0x450)) {
        fVar20 = 0.0;
      }
      cVar4 = *(char *)(lVar16 + 0x78);
      auVar23 = SUB1612((undefined1  [16])0x0,0);
      lVar6 = *(long *)(lVar16 + 0x48);
      if (cVar4 != '\0') {
        auVar23 = SUB1612(*(undefined1 (*) [16])(lVar6 + 0x10),0);
      }
      cVar5 = *(char *)(lVar12 + 0x78);
      lVar7 = *(long *)(lVar12 + 0x48);
      auVar24 = SUB1612((undefined1  [16])0x0,0);
      if (cVar5 != '\0') {
        auVar24 = SUB1612(*(undefined1 (*) [16])(lVar7 + 0x10),0);
      }
      fVar19 = *(float *)(this + 0x4fc);
      fVar21 = (((auVar24._8_4_ - auVar23._8_4_) * (float)*(undefined8 *)(this + 0x488) +
                (auVar24._4_4_ - auVar23._4_4_) *
                (float)((ulong)*(undefined8 *)(this + 0x480) >> 0x20) +
                (auVar24._0_4_ - auVar23._0_4_) * (float)*(undefined8 *)(this + 0x480) + 0.0) -
               (*(float *)(this + 0x4f8) * fVar19 + *(float *)(this + 0x4f4))) *
               *(float *)(this + 0x4f0) + fVar19;
      fVar22 = _LC6;
      if ((_LC6 <= fVar21) && (fVar22 = fVar20, fVar21 <= fVar20)) {
        fVar22 = fVar21;
      }
      *(float *)(this + 0x4fc) = fVar22;
      fVar22 = fVar22 - fVar19;
      if (fVar22 != 0.0) {
        if (cVar5 == '\x02') {
          auVar31._0_4_ = *(float *)(lVar7 + 0x10) - fVar22 * *(float *)(this + 0x4d0);
          auVar31._4_4_ = *(float *)(lVar7 + 0x14) - fVar22 * *(float *)(this + 0x4d4);
          auVar31._8_4_ = *(float *)(lVar7 + 0x18) - fVar22 * *(float *)(this + 0x4d8);
          auVar31._12_4_ = *(float *)(lVar7 + 0x1c) - fVar22 * *(float *)(this + 0x4dc);
          *(undefined1 (*) [16])(lVar7 + 0x10) = auVar31;
        }
        if (cVar4 == '\x02') {
          fVar20 = *(float *)(this + 0x4e4);
          fVar19 = *(float *)(this + 0x4e8);
          fVar21 = *(float *)(this + 0x4ec);
          *(float *)(lVar6 + 0x10) = fVar22 * *(float *)(this + 0x4e0) + *(float *)(lVar6 + 0x10);
          *(float *)(lVar6 + 0x14) = fVar22 * fVar20 + *(float *)(lVar6 + 0x14);
          *(float *)(lVar6 + 0x18) = fVar22 * fVar19 + *(float *)(lVar6 + 0x18);
          *(float *)(lVar6 + 0x1c) = fVar22 * fVar21 + *(float *)(lVar6 + 0x1c);
        }
        uVar11 = 1;
      }
    }
    if (*(float *)(this + 0x520) != 0.0) {
      fVar20 = _LC9;
      if (*(float *)(this + 0x424) != *(float *)(this + 0x428)) {
        fVar20 = 0.0;
      }
      cVar4 = *(char *)(lVar16 + 0x78);
      auVar23 = SUB1612((undefined1  [16])0x0,0);
      lVar16 = *(long *)(lVar16 + 0x48);
      if (cVar4 != '\0') {
        auVar23 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0x10),0);
      }
      cVar5 = *(char *)(lVar12 + 0x78);
      auVar24 = SUB1612((undefined1  [16])0x0,0);
      lVar12 = *(long *)(lVar12 + 0x48);
      if (cVar5 != '\0') {
        auVar24 = SUB1612(*(undefined1 (*) [16])(lVar12 + 0x10),0);
      }
      fVar19 = *(float *)(this + 0x52c);
      fVar21 = (((auVar24._8_4_ - auVar23._8_4_) * (float)*(undefined8 *)(this + 0x498) +
                (auVar24._4_4_ - auVar23._4_4_) *
                (float)((ulong)*(undefined8 *)(this + 0x490) >> 0x20) +
                (auVar24._0_4_ - auVar23._0_4_) * (float)*(undefined8 *)(this + 0x490) + 0.0) -
               (*(float *)(this + 0x528) * fVar19 + *(float *)(this + 0x524))) *
               *(float *)(this + 0x520) + fVar19;
      fVar22 = _LC6;
      if ((_LC6 <= fVar21) && (fVar22 = fVar20, fVar21 <= fVar20)) {
        fVar22 = fVar21;
      }
      *(float *)(this + 0x52c) = fVar22;
      fVar22 = fVar22 - fVar19;
      if (fVar22 != 0.0) {
        if (cVar5 == '\x02') {
          auVar32._0_4_ = *(float *)(lVar12 + 0x10) - fVar22 * *(float *)(this + 0x500);
          auVar32._4_4_ = *(float *)(lVar12 + 0x14) - fVar22 * *(float *)(this + 0x504);
          auVar32._8_4_ = *(float *)(lVar12 + 0x18) - fVar22 * *(float *)(this + 0x508);
          auVar32._12_4_ = *(float *)(lVar12 + 0x1c) - fVar22 * *(float *)(this + 0x50c);
          *(undefined1 (*) [16])(lVar12 + 0x10) = auVar32;
        }
        if (cVar4 == '\x02') {
          fVar20 = *(float *)(this + 0x514);
          fVar19 = *(float *)(this + 0x518);
          fVar21 = *(float *)(this + 0x51c);
          *(float *)(lVar16 + 0x10) = fVar22 * *(float *)(this + 0x510) + *(float *)(lVar16 + 0x10);
          *(float *)(lVar16 + 0x14) = fVar22 * fVar20 + *(float *)(lVar16 + 0x14);
          *(float *)(lVar16 + 0x18) = fVar22 * fVar19 + *(float *)(lVar16 + 0x18);
          *(float *)(lVar16 + 0x1c) = fVar22 * fVar21 + *(float *)(lVar16 + 0x1c);
        }
        goto LAB_0010245e;
      }
    }
    uVar13 = uVar13 | uVar11;
  }
joined_r0x001020da:
  if (((~(byte)SVar3 & 7) == 0) && (this[0x85] == (SixDOFConstraint)0x0)) {
    uVar11 = PointConstraintPart::SolveVelocityConstraint
                       ((PointConstraintPart *)(this + 0x330),*(Body **)(this + 0x28),
                        *(Body **)(this + 0x30));
    return uVar13 | uVar11;
  }
  if ((~(byte)this[0x80] & 7) != 0) {
    pSVar17 = this + 0x26c;
    lVar16 = 0;
    fVar20 = 0.0;
    do {
      if (fVar20 != *(float *)(pSVar17 + 0x30)) {
        uVar11 = AxisConstraintPart::SolveVelocityConstraint
                           (*(undefined8 *)(this + ((long)(int)lVar16 + 0x20) * 0x10),
                            *(undefined8 *)(this + ((long)(int)lVar16 + 0x20) * 0x10 + 8),pSVar17,
                            *(undefined8 *)(*(long *)(this + 0x28) + 0x48),
                            *(undefined1 *)(*(long *)(this + 0x28) + 0x78),
                            *(undefined8 *)(*(long *)(this + 0x30) + 0x48),
                            *(undefined1 *)(*(long *)(this + 0x30) + 0x78));
        uVar13 = uVar13 | uVar11;
      }
      lVar16 = lVar16 + 1;
      pSVar17 = pSVar17 + 0x40;
    } while (lVar16 != 3);
  }
  return uVar13;
}



/* JPH::GetRTTIOfType(JPH::SixDOFConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(SixDOFConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti,
                      "SixDOFConstraintSettings",0x1b0,
                      GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SixDOFConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      SixDOFConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SixDOFConstraintSettings*)::rtti;
}



/* JPH::SixDOFConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::SixDOFConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((SixDOFConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::SixDOFConstraint::SetTranslationLimits(JPH::Vec3, JPH::Vec3) */

void JPH::SixDOFConstraint::SetTranslationLimits
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               long param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  ulong uVar8;
  char cVar9;
  uint uVar10;
  float fVar11;
  
  *(undefined4 *)(param_5 + 0x90) = param_2;
  *(undefined4 *)(param_5 + 0xa8) = param_4;
  pfVar7 = (float *)(param_5 + 0x88);
  *(undefined8 *)(param_5 + 0x88) = param_1;
  *(undefined8 *)(param_5 + 0xa0) = param_3;
  do {
    if (pfVar7[6] <= *pfVar7 && *pfVar7 != pfVar7[6]) {
      pfVar7[6] = 0.0;
      *pfVar7 = 0.0;
    }
    fVar5 = _LC9;
    pfVar7 = pfVar7 + 1;
  } while ((float *)(param_5 + 0x94) != pfVar7);
  uVar10 = 0;
  cVar3 = *(char *)(param_5 + 0x80);
  cVar4 = *(char *)(param_5 + 0x81);
  *(undefined2 *)(param_5 + 0x80) = 0;
  uVar6 = _LC45;
  uVar8 = 0;
  do {
    cVar9 = (char)uVar10;
    fVar11 = fVar5;
    if (2 < uVar8) {
      fVar11 = _LC82;
    }
    fVar1 = *(float *)(param_5 + 0x88 + uVar8 * 4);
    fVar2 = *(float *)(param_5 + 0xa0 + uVar8 * 4);
    if (fVar2 <= fVar1) {
      *(byte *)(param_5 + 0x81) = *(byte *)(param_5 + 0x81) | (byte)(1 << ((byte)uVar8 & 0x1f));
    }
    else if ((fVar1 <= (float)((uint)fVar11 ^ uVar6)) && (fVar11 <= fVar2)) {
      uVar10 = uVar10 | 1 << ((byte)uVar8 & 0x1f);
      cVar9 = (char)uVar10;
      *(char *)(param_5 + 0x80) = cVar9;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 6);
  if ((cVar3 == cVar9) && (cVar4 == *(char *)(param_5 + 0x81))) {
    return;
  }
  *(undefined4 *)(param_5 + 0x29c) = 0;
  *(undefined4 *)(param_5 + 0x2a8) = 0;
  *(undefined4 *)(param_5 + 0x2dc) = 0;
  *(undefined4 *)(param_5 + 0x2e8) = 0;
  *(undefined4 *)(param_5 + 0x31c) = 0;
  *(undefined4 *)(param_5 + 0x328) = 0;
  *(undefined4 *)(param_5 + 0x4c0) = 0;
  *(undefined4 *)(param_5 + 0x4cc) = 0;
  *(undefined4 *)(param_5 + 0x4f0) = 0;
  *(undefined4 *)(param_5 + 0x4fc) = 0;
  *(undefined4 *)(param_5 + 0x520) = 0;
  *(undefined4 *)(param_5 + 0x52c) = 0;
  *(undefined4 *)(param_5 + 0x630) = 0;
  *(undefined4 *)(param_5 + 0x63c) = 0;
  *(undefined4 *)(param_5 + 0x670) = 0;
  *(undefined4 *)(param_5 + 0x67c) = 0;
  *(undefined4 *)(param_5 + 0x6b0) = 0;
  *(undefined4 *)(param_5 + 0x6bc) = 0;
  *(undefined4 *)(param_5 + 0x6e0) = 0;
  *(undefined4 *)(param_5 + 0x6ec) = 0;
  *(undefined4 *)(param_5 + 0x710) = 0;
  *(undefined4 *)(param_5 + 0x71c) = 0;
  *(undefined1 (*) [16])(param_5 + 0x3d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x3e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x3f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x410) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5f0) = (undefined1  [16])0x0;
  *(undefined4 *)(param_5 + 0x740) = 0;
  *(undefined4 *)(param_5 + 0x74c) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SetRotationLimits(JPH::Vec3, JPH::Vec3) */

void JPH::SixDOFConstraint::SetRotationLimits
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,float param_4,long param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  float *pfVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = (float)((ulong)param_3 >> 0x20);
  fVar11 = (float)param_3;
  *(undefined4 *)(param_5 + 0x9c) = param_2;
  pfVar6 = (float *)(param_5 + 0x94);
  *(float *)(param_5 + 0xb4) = param_4;
  *(undefined8 *)(param_5 + 0x94) = param_1;
  *(undefined8 *)(param_5 + 0xac) = param_3;
  if (*(char *)(param_5 + 0x421) == '\0') {
    uVar10 = (uint)fVar13 ^ _LC45;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
      uVar10 = _LC51;
    }
    *(float *)(param_5 + 0xb0) = fVar13;
    uVar9 = (uint)param_4 ^ _LC45;
    if (param_4 <= 0.0) {
      uVar9 = _LC51;
      param_4 = 0.0;
    }
    *(float *)(param_5 + 0xb4) = param_4;
    *(ulong *)(param_5 + 0x98) = CONCAT44(uVar9,uVar10);
  }
  fVar2 = _LC83;
  fVar1 = _LC82;
  fVar13 = *pfVar6;
  if (fVar13 < _LC83) goto LAB_00102e58;
LAB_00102e11:
  if (fVar13 <= _LC82) {
    fVar12 = fVar2;
    if (fVar2 < pfVar6[6] || fVar2 == pfVar6[6]) goto LAB_00102e2f;
LAB_001030b5:
    pfVar6[6] = fVar12;
    if (fVar13 <= fVar12) goto LAB_00102e41;
LAB_001030c3:
    pfVar6[6] = 0.0;
    *pfVar6 = 0.0;
    goto LAB_00102e41;
  }
  *pfVar6 = fVar1;
  fVar13 = fVar1;
  if (pfVar6[6] <= fVar2 && fVar2 != pfVar6[6]) goto LAB_001030c3;
LAB_00102e2f:
  fVar12 = fVar11;
  if (fVar11 <= _LC82) goto LAB_001030b5;
LAB_00102e3c:
  pfVar6[6] = fVar1;
LAB_00102e41:
  while (pfVar6 = pfVar6 + 1, pfVar6 != (float *)(param_5 + 0xa0)) {
    while( true ) {
      fVar13 = *pfVar6;
      fVar11 = pfVar6[6];
      if (fVar2 <= fVar13) goto LAB_00102e11;
LAB_00102e58:
      *pfVar6 = fVar2;
      if (fVar11 < fVar2) break;
      if (_LC82 < fVar11) goto LAB_00102e3c;
      pfVar6 = pfVar6 + 1;
      if (pfVar6 == (float *)(param_5 + 0xa0)) goto LAB_00102e80;
    }
    pfVar6[6] = fVar2;
  }
LAB_00102e80:
  SwingTwistConstraintPart::SetLimits
            ((SwingTwistConstraintPart *)(param_5 + 0x420),*(float *)(param_5 + 0x94),
             *(float *)(param_5 + 0xac),*(float *)(param_5 + 0x98),*(float *)(param_5 + 0xb0),
             *(float *)(param_5 + 0x9c),*(float *)(param_5 + 0xb4));
  uVar10 = _LC45;
  uVar9 = 0;
  cVar3 = *(char *)(param_5 + 0x80);
  cVar4 = *(char *)(param_5 + 0x81);
  *(undefined2 *)(param_5 + 0x80) = 0;
  fVar11 = _LC9;
  uVar7 = 0;
  do {
    while( true ) {
      cVar8 = (char)uVar9;
      bVar5 = (byte)uVar7;
      fVar13 = fVar11;
      if (2 < uVar7) {
        fVar13 = _LC82;
      }
      fVar1 = *(float *)(param_5 + 0x88 + uVar7 * 4);
      fVar2 = *(float *)(param_5 + 0xa0 + uVar7 * 4);
      if (fVar1 < fVar2) break;
      *(byte *)(param_5 + 0x81) = *(byte *)(param_5 + 0x81) | (byte)(1 << (bVar5 & 0x1f));
LAB_00102efa:
      uVar7 = uVar7 + 1;
      if (uVar7 == 6) goto LAB_00102f60;
    }
    if (((float)((uint)fVar13 ^ uVar10) < fVar1) || (fVar2 < fVar13)) goto LAB_00102efa;
    uVar7 = uVar7 + 1;
    uVar9 = uVar9 | 1 << (bVar5 & 0x1f);
    cVar8 = (char)uVar9;
    *(char *)(param_5 + 0x80) = cVar8;
  } while (uVar7 != 6);
LAB_00102f60:
  if ((cVar3 == cVar8) && (cVar4 == *(char *)(param_5 + 0x81))) {
    return;
  }
  *(undefined4 *)(param_5 + 0x29c) = 0;
  *(undefined4 *)(param_5 + 0x2a8) = 0;
  *(undefined4 *)(param_5 + 0x2dc) = 0;
  *(undefined4 *)(param_5 + 0x2e8) = 0;
  *(undefined4 *)(param_5 + 0x31c) = 0;
  *(undefined4 *)(param_5 + 0x328) = 0;
  *(undefined4 *)(param_5 + 0x4c0) = 0;
  *(undefined4 *)(param_5 + 0x4cc) = 0;
  *(undefined4 *)(param_5 + 0x4f0) = 0;
  *(undefined4 *)(param_5 + 0x4fc) = 0;
  *(undefined4 *)(param_5 + 0x520) = 0;
  *(undefined4 *)(param_5 + 0x52c) = 0;
  *(undefined4 *)(param_5 + 0x630) = 0;
  *(undefined4 *)(param_5 + 0x63c) = 0;
  *(undefined4 *)(param_5 + 0x670) = 0;
  *(undefined4 *)(param_5 + 0x67c) = 0;
  *(undefined4 *)(param_5 + 0x6b0) = 0;
  *(undefined4 *)(param_5 + 0x6bc) = 0;
  *(undefined4 *)(param_5 + 0x6e0) = 0;
  *(undefined4 *)(param_5 + 0x6ec) = 0;
  *(undefined4 *)(param_5 + 0x710) = 0;
  *(undefined4 *)(param_5 + 0x71c) = 0;
  *(undefined1 (*) [16])(param_5 + 0x3d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x3e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x3f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x410) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x5f0) = (undefined1  [16])0x0;
  *(undefined4 *)(param_5 + 0x740) = 0;
  *(undefined4 *)(param_5 + 0x74c) = 0;
  return;
}



/* JPH::SixDOFConstraint::SetMaxFriction(JPH::SixDOFConstraintSettings::EAxis, float) */

void __thiscall
JPH::SixDOFConstraint::SetMaxFriction(undefined4 param_1,SixDOFConstraint *this,uint param_3)

{
  SixDOFConstraint SVar1;
  SixDOFConstraint SVar2;
  
  *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x184) = param_1;
  SVar2 = (SixDOFConstraint)0x1;
  if (param_3 < 3) {
    if ((((*(int *)(this + 0x19c) == 0) && (*(long *)(this + 0x1a0) == 0)) &&
        ((SVar1 = this[0x81], ((byte)SVar1 & 1) != 0 || (*(float *)(this + 0x184) <= 0.0)))) &&
       (((((byte)SVar1 & 2) != 0 || (SVar2 = (SixDOFConstraint)0x1, *(float *)(this + 0x188) <= 0.0)
         ) && (SVar2 = (SixDOFConstraint)0x0, ((byte)SVar1 & 4) == 0)))) {
      SVar2 = (SixDOFConstraint)(0.0 < *(float *)(this + 0x18c));
    }
    this[0x82] = SVar2;
    return;
  }
  if ((((*(long *)(this + 0x1a8) == 0) && (*(int *)(this + 0x1b0) == 0)) &&
      ((SVar1 = this[0x81], ((byte)SVar1 & 8) != 0 || (*(float *)(this + 400) <= 0.0)))) &&
     (((((byte)SVar1 & 0x10) != 0 ||
       (SVar2 = (SixDOFConstraint)0x1, *(float *)(this + 0x194) <= 0.0)) &&
      (SVar2 = (SixDOFConstraint)0x0, ((byte)SVar1 & 0x20) == 0)))) {
    SVar2 = (SixDOFConstraint)(0.0 < *(float *)(this + 0x198));
  }
  this[0x83] = SVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SetupVelocityConstraint(float) */

void __thiscall JPH::SixDOFConstraint::SetupVelocityConstraint(SixDOFConstraint *this,float param_1)

{
  SixDOFConstraint SVar1;
  Mat44 MVar2;
  byte bVar3;
  int iVar4;
  Mat44 *pMVar5;
  Mat44 *pMVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  SixDOFConstraint *pSVar14;
  SixDOFConstraint *pSVar15;
  SixDOFConstraint *pSVar16;
  long in_FS_OFFSET;
  float fVar17;
  undefined1 auVar19 [16];
  float fVar18;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  uint uVar38;
  uint uVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  float fVar42;
  undefined1 auVar41 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pMVar5 = *(Mat44 **)(this + 0x28);
  pMVar6 = *(Mat44 **)(this + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar17 = (float)*(undefined8 *)(this + 0x60);
  fVar42 = (float)*(undefined8 *)(this + 0x68);
  uVar7 = *(undefined8 *)(pMVar6 + 0x10);
  uVar8 = *(undefined8 *)(pMVar6 + 0x18);
  fVar51 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  fVar34 = (float)*(undefined8 *)(pMVar5 + 0x18);
  fVar59 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x18) >> 0x20);
  fVar18 = (float)*(undefined8 *)(pMVar5 + 0x10);
  fVar56 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar53 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x10) >> 0x20);
  fVar44 = fVar17 * fVar34 + fVar51 * fVar53 + (fVar59 * fVar56 - fVar42 * fVar18);
  fVar46 = fVar51 * fVar34 + ((fVar56 * fVar18 + fVar59 * fVar42) - fVar17 * fVar53);
  fVar40 = (fVar42 * fVar53 + fVar51 * fVar18 + fVar59 * fVar17) - fVar56 * fVar34;
  fVar42 = ((fVar59 * fVar51 - fVar17 * fVar18) - fVar56 * fVar53) - fVar42 * fVar34;
  fVar17 = fVar44 + fVar44;
  fVar51 = fVar40 + fVar40;
  fVar56 = (fVar46 + fVar46) * fVar42;
  fVar58 = (fVar46 + fVar46) * fVar46;
  auVar23._0_4_ = fVar44 * fVar51 - fVar56;
  auVar19._0_4_ = fVar17 * fVar42 + fVar51 * fVar46;
  auVar23._4_4_ = (_LC0 - fVar58) - fVar40 * fVar51;
  auVar25._4_4_ = fVar56 + fVar44 * fVar51;
  auVar25._0_4_ = (_LC0 - fVar17 * fVar44) - fVar58;
  auVar25._8_4_ = fVar51 * fVar46 - fVar17 * fVar42;
  auVar25._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x200) = auVar25;
  auVar23._8_4_ = fVar46 * fVar17 + fVar51 * fVar42;
  auVar23._12_4_ = 0;
  auVar19._4_4_ = fVar46 * fVar17 - fVar51 * fVar42;
  *(undefined1 (*) [16])(this + 0x210) = auVar23;
  SVar1 = this[0x81];
  uVar13 = (uint)(byte)SVar1;
  auVar19._8_4_ = (_LC0 - fVar40 * fVar51) - fVar17 * fVar44;
  auVar19._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x220) = auVar19;
  if (((~uVar13 & 7) != 0) || (this[0x85] != (SixDOFConstraint)0x0)) {
    if (((~(byte)this[0x80] & 7) != 0) || (this[0x82] != (SixDOFConstraint)0x0)) {
      lVar12 = 0;
      GetPositionConstraintProperties(this,(Vec3 *)&local_d8,local_c8,local_88);
      pSVar16 = this + 0xb8;
      pSVar14 = this;
      pSVar15 = this;
      do {
        uVar38 = (uint)lVar12;
        uVar7 = *(undefined8 *)(this + lVar12 * 0x10 + 0x200);
        uVar8 = *(undefined8 *)(this + lVar12 * 0x10 + 0x208);
        fVar18 = fStack_80 * (float)uVar8 +
                 (float)local_88._4_4_ * (float)((ulong)uVar7 >> 0x20) +
                 (float)local_88._0_4_ * (float)uVar7 + 0.0;
        *(float *)(this + lVar12 * 4 + 0x260) = fVar18;
        if (((uVar13 >> (uVar38 & 0x1f) & 1) != 0) ||
           ((((byte)this[0x80] >> (uVar38 & 0x1f) & 1) == 0 &&
            ((fVar18 <= *(float *)(this + lVar12 * 4 + 0x88) ||
             (*(float *)(this + lVar12 * 4 + 0xa0) <= fVar18)))))) {
          AxisConstraintPart::CalculateConstraintPropertiesWithSettings
                    (pSVar14 + 0x26c,pMVar5,pMVar6,pSVar16);
          iVar4 = *(int *)(this + lVar12 * 4 + 0x19c);
          if (iVar4 != 1) {
            if (iVar4 == 2) goto LAB_00103e10;
            if (iVar4 != 0) goto LAB_00103628;
            if (((byte)this[0x81] >> (uVar38 & 0x1f) & 1) == 0) goto LAB_001036bf;
LAB_00103d98:
            *(undefined4 *)(pSVar14 + 0x630) = 0;
            *(undefined4 *)(pSVar14 + 0x63c) = 0;
            goto LAB_00103628;
          }
LAB_00103dcf:
          AxisConstraintPart::CalculateConstraintProperties
                    (local_d8,local_d0,local_c8._0_8_,local_c8._8_8_,uVar7,uVar8,pSVar14 + 0x600,
                     pMVar5,pMVar6);
        }
        else {
          iVar4 = *(int *)(this + lVar12 * 4 + 0x19c);
          *(undefined4 *)(pSVar14 + 0x29c) = 0;
          *(undefined4 *)(pSVar14 + 0x2a8) = 0;
          if (iVar4 == 1) goto LAB_00103dcf;
          if (iVar4 == 2) {
LAB_00103e10:
            if (*(float *)(pSVar15 + 0xe0) <= 0.0) goto LAB_00103d98;
            AxisConstraintPart::CalculateConstraintPropertiesWithSettings
                      (pSVar14 + 0x600,pMVar5,pMVar6,pSVar15 + 0xdc);
          }
          else if (iVar4 == 0) {
LAB_001036bf:
            if (*(float *)(this + lVar12 * 4 + 0x184) <= 0.0) goto LAB_00103d98;
            goto LAB_00103dcf;
          }
        }
LAB_00103628:
        lVar12 = lVar12 + 1;
        pSVar14 = pSVar14 + 0x40;
        pSVar15 = pSVar15 + 0x1c;
        pSVar16 = pSVar16 + 0xc;
        if (lVar12 == 3) goto LAB_001036e8;
        uVar13 = (uint)(byte)this[0x81];
      } while( true );
    }
    goto LAB_00103703;
  }
  fVar56 = (float)uVar7;
  fVar17 = (float)uVar8;
  fVar58 = (float)((ulong)uVar7 >> 0x20);
  fVar48 = fVar56 + fVar56;
  fVar57 = fVar58 + fVar58;
  fVar51 = (float)((ulong)uVar8 >> 0x20);
  fVar35 = fVar17 * (fVar17 + fVar17);
  fVar54 = (fVar17 + fVar17) * fVar51;
  local_78._0_4_ = fVar58 * fVar48 - fVar54;
  local_88._4_4_ = fVar58 * fVar48 + fVar54;
  local_88._0_4_ = (_LC0 - fVar58 * fVar57) - fVar35;
  local_78._4_4_ = (_LC0 - fVar35) - fVar56 * fVar48;
  fStack_80 = fVar17 * fVar48 - fVar57 * fVar51;
  fStack_7c = 0.0;
  fVar54 = fVar53 + fVar53;
  fVar35 = fVar34 * (fVar34 + fVar34);
  local_78._8_4_ = fVar48 * fVar51 + fVar17 * fVar57;
  local_78._12_4_ = 0;
  local_58 = __LC47;
  uStack_50 = _UNK_0010e8d8;
  local_98 = __LC47;
  uStack_90 = _UNK_0010e8d8;
  local_68._4_4_ = fVar17 * fVar57 - fVar48 * fVar51;
  local_68._0_4_ = fVar17 * fVar48 + fVar57 * fVar51;
  local_68._8_4_ = (_LC0 - fVar56 * fVar48) - fVar58 * fVar57;
  local_68._12_4_ = 0;
  fVar17 = fVar18 + fVar18;
  local_c8._0_4_ = (_LC0 - fVar53 * fVar54) - fVar35;
  fVar51 = (fVar34 + fVar34) * fVar59;
  local_a8._0_4_ = fVar34 * fVar17 + fVar54 * fVar59;
  local_c8._4_4_ = fVar53 * fVar17 + fVar51;
  local_c8._8_4_ = fVar34 * fVar17 - fVar54 * fVar59;
  local_c8._12_4_ = 0;
  local_b8._4_4_ = (_LC0 - fVar35) - fVar18 * fVar17;
  local_b8._0_4_ = fVar53 * fVar17 - fVar51;
  local_a8._4_4_ = fVar34 * fVar54 - fVar17 * fVar59;
  local_b8._8_4_ = fVar17 * fVar59 + fVar34 * fVar54;
  local_b8._12_4_ = 0;
  local_a8._8_4_ = (_LC0 - fVar18 * fVar17) - fVar53 * fVar54;
  local_a8._12_4_ = 0;
  PointConstraintPart::CalculateConstraintProperties
            (*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x58),this + 0x330,pMVar5,local_c8,pMVar6,local_88);
  if ((~(byte)SVar1 & 0x38) == 0) goto LAB_00104170;
LAB_00103710:
  if ((((byte)this[0x80] & 0x38) == 0x38) && (this[0x83] == (SixDOFConstraint)0x0))
  goto LAB_00103d58;
  local_168 = CONCAT44(fVar44,fVar40);
  uStack_160 = CONCAT44(fVar42,fVar46);
  fVar17 = (float)*(undefined8 *)(this + 0x78);
  fVar18 = (float)*(undefined8 *)(pMVar6 + 0x10);
  fVar53 = (float)*(undefined8 *)(this + 0x70);
  fVar51 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  fVar59 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x10) >> 0x20);
  fVar54 = (float)*(undefined8 *)(pMVar6 + 0x18);
  fVar57 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x18) >> 0x20);
  fVar34 = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
  fVar48 = (fVar57 * fVar53 + fVar18 * fVar51 + fVar59 * fVar17) - fVar54 * fVar34;
  fVar56 = (fVar57 * fVar34 - fVar18 * fVar17) + fVar59 * fVar51 + fVar54 * fVar53;
  fVar58 = ((fVar57 * fVar17 + fVar18 * fVar34) - fVar59 * fVar53) + fVar54 * fVar51;
  fVar18 = ((fVar57 * fVar51 - fVar18 * fVar53) - fVar59 * fVar34) - fVar54 * fVar17;
  fVar40 = (float)((uint)fVar40 ^ __LC49);
  fVar44 = (float)((uint)fVar44 ^ _UNK_0010e9b4);
  fVar46 = (float)((uint)fVar46 ^ _UNK_0010e9b8);
  fVar42 = (float)((uint)fVar42 ^ _UNK_0010e9bc);
  fVar17 = (fVar48 * fVar42 + fVar40 * fVar18 + fVar58 * fVar44) - fVar56 * fVar46;
  fVar51 = (fVar56 * fVar42 - fVar40 * fVar58) + fVar18 * fVar44 + fVar48 * fVar46;
  fVar53 = ((fVar58 * fVar42 + fVar40 * fVar56) - fVar48 * fVar44) + fVar18 * fVar46;
  fVar42 = ((fVar42 * fVar18 - fVar40 * fVar48) - fVar44 * fVar56) - fVar46 * fVar58;
  if (((byte)this[0x80] & 0x38) == 0x38) {
    SVar1 = this[0x83];
    *(undefined4 *)(this + 0x4c0) = 0;
    *(undefined4 *)(this + 0x4cc) = 0;
    *(undefined4 *)(this + 0x4f0) = 0;
    *(undefined4 *)(this + 0x4fc) = 0;
    *(undefined4 *)(this + 0x520) = 0;
    *(undefined4 *)(this + 0x52c) = 0;
  }
  else {
    SwingTwistConstraintPart::CalculateConstraintProperties
              (CONCAT44(fVar51,fVar17),CONCAT44(fVar42,fVar53),local_168,uStack_160,this + 0x420,
               pMVar5,pMVar6);
    SVar1 = this[0x83];
  }
  if (SVar1 == (SixDOFConstraint)0x0) goto LAB_00103d58;
  fVar40 = fVar48 + fVar48;
  fVar46 = fVar56 + fVar56;
  fVar59 = fVar58 * (fVar58 + fVar58);
  fVar34 = (fVar58 + fVar58) * fVar18;
  auVar41._0_4_ = fVar56 * fVar40 - fVar34;
  auVar50._0_4_ = (_LC0 - fVar56 * fVar46) - fVar59;
  fVar44 = _LC0 - fVar48 * fVar40;
  auVar50._4_4_ = fVar56 * fVar40 + fVar34;
  auVar50._8_4_ = fVar58 * fVar40 - fVar46 * fVar18;
  auVar50._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x230) = auVar50;
  fVar59 = _LC0 - fVar59;
  *(ulong *)(this + 0x250) =
       CONCAT44(fVar58 * fVar46 - fVar40 * fVar18,fVar58 * fVar40 + fVar46 * fVar18);
  *(ulong *)(this + 600) = (ulong)(uint)(fVar44 - fVar56 * fVar46);
  auVar41._4_4_ = fVar59 - fVar48 * fVar40;
  auVar41._8_4_ = fVar40 * fVar18 + fVar58 * fVar46;
  auVar41._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x240) = auVar41;
  if (fVar17 * *(float *)(this + 0x1f0) + fVar51 * *(float *)(this + 500) +
      fVar53 * *(float *)(this + 0x1f8) + fVar42 * *(float *)(this + 0x1fc) <= 0.0) {
    fVar18 = 0.0 - *(float *)(this + 0x1f0);
    local_168 = (ulong)(uint)(0.0 - *(float *)(this + 500)) << 0x20;
    uStack_160 = CONCAT44(0.0 - *(float *)(this + 0x1fc),0.0 - *(float *)(this + 0x1f8));
  }
  else {
    local_168 = *(long *)(this + 0x1f0);
    uStack_160 = *(undefined8 *)(this + 0x1f8);
    fVar18 = (float)local_168;
  }
  fVar17 = (float)((uint)fVar17 ^ __LC49);
  fVar51 = (float)((uint)fVar51 ^ _UNK_0010e9b4);
  fVar53 = (float)((uint)fVar53 ^ _UNK_0010e9b8);
  fVar42 = (float)((uint)fVar42 ^ _UNK_0010e9bc);
  fVar59 = (float)((ulong)local_168 >> 0x20);
  fVar40 = (float)uStack_160;
  fVar56 = (float)((ulong)uStack_160 >> 0x20);
  fVar48 = (fVar17 * fVar56 + fVar18 * fVar42 + fVar40 * fVar51) - fVar59 * fVar53;
  fVar57 = (fVar59 * fVar42 - fVar17 * fVar40) + fVar56 * fVar51 + fVar18 * fVar53;
  fVar54 = ((fVar17 * fVar59 + fVar40 * fVar42) - fVar18 * fVar51) + fVar56 * fVar53;
  fVar46 = ((fVar56 * fVar42 - fVar17 * fVar18) - fVar59 * fVar51) - fVar40 * fVar53;
  fVar58 = fVar18 * fVar53 + fVar56 * fVar51 + (fVar59 * fVar42 - fVar17 * fVar40);
  fVar34 = fVar56 * fVar53 + ((fVar17 * fVar59 + fVar40 * fVar42) - fVar18 * fVar51);
  fVar44 = (fVar40 * fVar51 + fVar17 * fVar56 + fVar18 * fVar42) - fVar59 * fVar53;
  auVar20._12_4_ = ((fVar56 * fVar42 - fVar17 * fVar18) - fVar59 * fVar51) - fVar40 * fVar53;
  switch(this[0x84]) {
  default:
    local_88._0_4_ = fVar44 * _LC63;
    local_88._4_4_ = fVar58 * _LC63;
    fStack_80 = fVar34 * _LC63;
    fStack_7c = auVar20._12_4_ * _LC63;
    goto LAB_001044d9;
  case (SixDOFConstraint)0x1:
    fVar18 = fVar34 * 0.0 + fVar58 * 0.0 + fVar44 + 0.0;
    auVar22._0_4_ = fVar18 * _LC0;
    auVar22._4_4_ = fVar18 * _UNK_0010e884;
    auVar22._8_4_ = fVar18 * _UNK_0010e888;
    break;
  case (SixDOFConstraint)0x2:
    fVar18 = fVar34 * 0.0 + fVar58 + fVar44 * 0.0 + 0.0;
    auVar22._0_4_ = fVar18 * __LC4;
    auVar22._4_4_ = fVar18 * _UNK_0010e894;
    auVar22._8_4_ = fVar18 * _UNK_0010e898;
    break;
  case (SixDOFConstraint)0x3:
    fVar34 = fVar34 + fVar58 * 0.0 + fVar44 * 0.0 + 0.0;
    auVar30._0_4_ = fVar34 * __LC52;
    auVar30._4_4_ = fVar34 * _UNK_0010e9c4;
    auVar30._8_4_ = fVar34 * _UNK_0010e9c8;
    fVar18 = auVar30._0_4_ * auVar30._0_4_ + auVar30._4_4_ * auVar30._4_4_ +
             auVar30._8_4_ * auVar30._8_4_ + auVar20._12_4_ * auVar20._12_4_;
    if (fVar18 == 0.0) {
      auVar31._8_8_ = _UNK_0010e8d8;
      auVar31._0_8_ = __LC47;
    }
    else {
      fVar18 = SQRT(fVar18);
      auVar30._12_4_ = auVar20._12_4_;
      auVar37._4_4_ = fVar18;
      auVar37._0_4_ = fVar18;
      auVar37._8_4_ = fVar18;
      auVar37._12_4_ = fVar18;
      auVar31 = divps(auVar30,auVar37);
    }
    fVar17 = (float)(auVar31._0_4_ ^ __LC49);
    fVar44 = (float)(auVar31._4_4_ ^ _UNK_0010e9b4);
    fVar51 = (float)(auVar31._8_4_ ^ _UNK_0010e9b8);
    fVar53 = (float)(auVar31._12_4_ ^ _UNK_0010e9bc);
    auVar32._0_4_ = fVar54 * fVar17;
    auVar32._4_4_ = fVar54 * fVar44;
    auVar32._8_4_ = fVar54 * fVar51;
    auVar32._12_4_ = fVar54 * fVar53;
    fVar18 = fVar48 * fVar44 + fVar51 * fVar46;
    fVar40 = fVar53 * fVar46 - fVar48 * fVar17;
    fVar42 = fVar57 * fVar51 + fVar48 * fVar53 + fVar17 * fVar46;
    fVar51 = fVar57 * fVar53 + (fVar44 * fVar46 - fVar48 * fVar51);
    goto LAB_0010472d;
  case (SixDOFConstraint)0x4:
    fVar34 = fVar58 * 0.0 + fVar44 * 0.0 + 0.0 + fVar34;
    auVar22._0_4_ = fVar34 * __LC52;
    auVar22._4_4_ = fVar34 * _UNK_0010e9c4;
    auVar22._8_4_ = fVar34 * _UNK_0010e9c8;
    break;
  case (SixDOFConstraint)0x5:
    fVar18 = fVar58 + fVar44 * 0.0 + 0.0 + fVar34 * 0.0;
    auVar20._0_4_ = fVar18 * __LC4;
    auVar20._4_4_ = fVar18 * _UNK_0010e894;
    auVar20._8_4_ = fVar18 * _UNK_0010e898;
    fVar18 = auVar20._0_4_ * auVar20._0_4_ + auVar20._4_4_ * auVar20._4_4_ +
             auVar20._8_4_ * auVar20._8_4_ + auVar20._12_4_ * auVar20._12_4_;
    if (fVar18 == 0.0) {
      auVar21._8_8_ = _UNK_0010e8d8;
      auVar21._0_8_ = __LC47;
    }
    else {
      auVar33._0_4_ = SQRT(fVar18);
      auVar33._4_4_ = auVar33._0_4_;
      auVar33._8_4_ = auVar33._0_4_;
      auVar33._12_4_ = auVar33._0_4_;
      auVar21 = divps(auVar20,auVar33);
    }
    fVar17 = (float)(auVar21._0_4_ ^ __LC49);
    fVar44 = (float)(auVar21._4_4_ ^ _UNK_0010e9b4);
    fVar51 = (float)(auVar21._8_4_ ^ _UNK_0010e9b8);
    fVar53 = (float)(auVar21._12_4_ ^ _UNK_0010e9bc);
    auVar32._0_4_ = fVar54 * fVar17;
    auVar32._4_4_ = fVar54 * fVar44;
    auVar32._8_4_ = fVar54 * fVar51;
    auVar32._12_4_ = fVar54 * fVar53;
    fVar18 = fVar48 * fVar44 + fVar51 * fVar46;
    fVar40 = fVar53 * fVar46 - fVar48 * fVar17;
    fVar42 = fVar48 * fVar53 + fVar17 * fVar46 + fVar57 * fVar51;
    fVar51 = (fVar44 * fVar46 - fVar48 * fVar51) + fVar57 * fVar53;
LAB_0010472d:
    fVar51 = fVar51 + auVar32._0_4_;
    fVar53 = (fVar18 - fVar57 * fVar17) + auVar32._12_4_;
    fVar42 = fVar42 - auVar32._4_4_;
    fVar18 = (fVar40 - fVar57 * fVar44) - auVar32._8_4_;
LAB_001044c2:
    local_88._0_4_ = fVar42 * _LC63;
    local_88._4_4_ = fVar51 * _LC63;
    fStack_80 = fVar53 * _LC63;
    fStack_7c = fVar18 * _LC63;
    goto LAB_001044d9;
  case (SixDOFConstraint)0x6:
    fVar18 = fVar34 * 0.0 + fVar58 * 0.0 + fVar44 + 0.0;
    auVar27._0_4_ = fVar18 * _LC0;
    auVar27._4_4_ = fVar18 * _UNK_0010e884;
    auVar27._8_4_ = fVar18 * _UNK_0010e888;
    fVar18 = auVar27._0_4_ * auVar27._0_4_ + auVar27._4_4_ * auVar27._4_4_ +
             auVar27._8_4_ * auVar27._8_4_ + auVar20._12_4_ * auVar20._12_4_;
    if (fVar18 == 0.0) {
      auVar28._8_8_ = _UNK_0010e8d8;
      auVar28._0_8_ = __LC47;
    }
    else {
      auVar36._0_4_ = SQRT(fVar18);
      auVar27._12_4_ = auVar20._12_4_;
      auVar36._4_4_ = auVar36._0_4_;
      auVar36._8_4_ = auVar36._0_4_;
      auVar36._12_4_ = auVar36._0_4_;
      auVar28 = divps(auVar27,auVar36);
    }
    fVar18 = (float)(auVar28._0_4_ ^ __LC49);
    fVar17 = (float)(auVar28._4_4_ ^ _UNK_0010e9b4);
    fVar40 = (float)(auVar28._8_4_ ^ _UNK_0010e9b8);
    fVar44 = (float)(auVar28._12_4_ ^ _UNK_0010e9bc);
    fVar51 = (fVar17 * fVar46 - fVar48 * fVar40) + fVar57 * fVar44 + fVar54 * fVar18;
    fVar53 = ((fVar48 * fVar17 + fVar40 * fVar46) - fVar57 * fVar18) + fVar54 * fVar44;
    fVar42 = (fVar48 * fVar44 + fVar18 * fVar46 + fVar57 * fVar40) - fVar54 * fVar17;
    fVar18 = ((fVar44 * fVar46 - fVar48 * fVar18) - fVar57 * fVar17) - fVar54 * fVar40;
    goto LAB_001044c2;
  }
  fVar18 = auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_ +
           auVar22._8_4_ * auVar22._8_4_ + auVar20._12_4_ * auVar20._12_4_;
  local_88._0_4_ = __LC84;
  local_88._4_4_ = _UNK_0010e9f4;
  fStack_80 = _UNK_0010e9f8;
  fStack_7c = _LC63;
  if (fVar18 != 0.0) {
    fVar18 = SQRT(fVar18);
    auVar24._12_4_ = auVar20._12_4_;
    auVar24._0_12_ = auVar22;
    auVar29._4_4_ = fVar18;
    auVar29._0_4_ = fVar18;
    auVar29._8_4_ = fVar18;
    auVar29._12_4_ = fVar18;
    auVar25 = divps(auVar24,auVar29);
    local_88._0_4_ = auVar25._0_4_ * _LC63;
    local_88._4_4_ = auVar25._4_4_ * _LC63;
    fStack_80 = auVar25._8_4_ * _LC63;
    fStack_7c = auVar25._12_4_ * _LC63;
  }
LAB_001044d9:
  pSVar16 = this + 0x6c0;
  pSVar14 = this + 0x130;
  lVar12 = 0;
  do {
    uVar7 = *(undefined8 *)(this + lVar12 * 0x10 + 0x230);
    uVar8 = *(undefined8 *)(this + lVar12 * 0x10 + 0x230 + 8);
    iVar4 = *(int *)(this + lVar12 * 4 + 0x1a8);
    if (iVar4 == 1) {
      AngleConstraintPart::CalculateConstraintProperties(uVar7,uVar8,pSVar16,pMVar5,pMVar6);
    }
    else if (iVar4 == 2) {
      fVar18 = *(float *)(pSVar14 + 4);
      if (fVar18 <= 0.0) {
LAB_00104800:
        *(undefined4 *)(pSVar16 + 0x20) = 0;
        *(undefined4 *)(pSVar16 + 0x2c) = 0;
      }
      else {
        SVar1 = *pSVar14;
        fVar40 = 0.0;
        fVar44 = 0.0;
        fVar46 = 0.0;
        uVar13 = 0;
        fVar17 = *(float *)(local_88 + lVar12 * 4);
        fVar42 = *(float *)(pSVar14 + 8);
        local_168._0_4_ = (float)uVar7;
        local_168._4_4_ = (float)((ulong)uVar7 >> 0x20);
        uStack_160._0_4_ = (float)uVar8;
        if (pMVar5[0x78] == (Mat44)0x2) {
          lVar9 = *(long *)(pMVar5 + 0x48);
          fVar40 = (float)*(undefined8 *)(pMVar5 + 0x18);
          fVar46 = (float)*(undefined8 *)(pMVar5 + 0x10);
          fVar44 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x18) >> 0x20);
          bVar3 = *(byte *)(lVar9 + 0x7a);
          fVar53 = (float)*(undefined8 *)(lVar9 + 0x38);
          fVar59 = (float)*(undefined8 *)(lVar9 + 0x30);
          fVar34 = (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20);
          fVar51 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x10) >> 0x20);
          fVar56 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
          auVar52._1_3_ = 0;
          auVar52[0] = bVar3;
          auVar52[4] = bVar3;
          auVar52._5_3_ = 0;
          auVar52[8] = bVar3;
          auVar52._9_3_ = 0;
          auVar52[0xc] = bVar3;
          auVar52._13_3_ = 0;
          auVar11._4_4_ = _UNK_0010e8e4;
          auVar11._0_4_ = __LC18;
          auVar11._8_4_ = _UNK_0010e8e8;
          auVar11._12_4_ = _UNK_0010e8ec;
          auVar52 = auVar52 & auVar11;
          uVar13 = -(uint)(auVar52._0_4_ == __LC18);
          uVar38 = -(uint)(auVar52._4_4_ == _UNK_0010e8e4);
          uVar39 = -(uint)(auVar52._8_4_ == _UNK_0010e8e8);
          fVar47 = (float)((uint)(float)local_168 & uVar13);
          fVar49 = (float)((uint)local_168._4_4_ & uVar38);
          fVar55 = (float)((uint)(float)uStack_160 & uVar39);
          fVar57 = (fVar51 * fVar53 + fVar44 * fVar59 + fVar46 * fVar34) - fVar40 * fVar56;
          fVar48 = (fVar44 * fVar56 - fVar46 * fVar53) + fVar51 * fVar34 + fVar40 * fVar59;
          fVar61 = fVar48 + fVar48;
          fVar58 = ((fVar44 * fVar53 + fVar46 * fVar56) - fVar51 * fVar59) + fVar40 * fVar34;
          fVar54 = fVar57 + fVar57;
          fVar40 = ((fVar34 * fVar44 - fVar46 * fVar59) - fVar51 * fVar56) - fVar40 * fVar53;
          fVar35 = fVar58 * (fVar58 + fVar58);
          fVar56 = (fVar58 + fVar58) * fVar40;
          fVar45 = fVar58 * fVar61 - fVar54 * fVar40;
          fVar51 = fVar54 * fVar40 + fVar58 * fVar61;
          fVar60 = fVar58 * fVar54 + fVar61 * fVar40;
          fVar43 = fVar48 * fVar54 - fVar56;
          fVar56 = fVar56 + fVar48 * fVar54;
          fVar58 = fVar58 * fVar54 - fVar61 * fVar40;
          fVar46 = (_LC0 - fVar57 * fVar54) - fVar48 * fVar61;
          fVar44 = (_LC0 - fVar35) - fVar57 * fVar54;
          fVar35 = (_LC0 - fVar48 * fVar61) - fVar35;
          fVar53 = *(float *)(lVar9 + 0x20) * (fVar49 * fVar56 + fVar35 * fVar47 + fVar55 * fVar58);
          fVar34 = *(float *)(lVar9 + 0x24) * (fVar49 * fVar44 + fVar43 * fVar47 + fVar55 * fVar51);
          fVar59 = *(float *)(lVar9 + 0x28) * (fVar49 * fVar45 + fVar60 * fVar47 + fVar55 * fVar46);
          fVar40 = (float)(uVar13 & (uint)(fVar53 * fVar35 + fVar34 * fVar43 + fVar59 * fVar60));
          fVar44 = (float)(uVar38 & (uint)(fVar53 * fVar56 + fVar34 * fVar44 + fVar59 * fVar45));
          fVar46 = (float)(uVar39 & (uint)(fVar53 * fVar58 + fVar34 * fVar51 + fVar59 * fVar46));
          uVar13 = -(uint)(auVar52._12_4_ == _UNK_0010e8ec) &
                   (uint)(fVar53 * 0.0 + fVar34 * 0.0 + fVar59 * 0.0);
        }
        MVar2 = pMVar6[0x78];
        *(float *)pSVar16 = fVar40;
        *(float *)(pSVar16 + 4) = fVar44;
        *(float *)(pSVar16 + 8) = fVar46;
        *(uint *)(pSVar16 + 0xc) = uVar13;
        fVar51 = 0.0;
        fVar53 = 0.0;
        fVar34 = 0.0;
        uVar13 = 0;
        if (MVar2 == (Mat44)0x2) {
          lVar9 = *(long *)(pMVar6 + 0x48);
          bVar3 = *(byte *)(lVar9 + 0x7a);
          fVar51 = (float)*(undefined8 *)(pMVar6 + 0x18);
          fVar34 = (float)*(undefined8 *)(pMVar6 + 0x10);
          fVar53 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x18) >> 0x20);
          auVar26._1_3_ = 0;
          auVar26[0] = bVar3;
          fVar56 = (float)*(undefined8 *)(lVar9 + 0x38);
          auVar26[4] = bVar3;
          auVar26._5_3_ = 0;
          auVar26[8] = bVar3;
          auVar26._9_3_ = 0;
          auVar26[0xc] = bVar3;
          auVar26._13_3_ = 0;
          auVar10._4_4_ = _UNK_0010e8e4;
          auVar10._0_4_ = __LC18;
          auVar10._8_4_ = _UNK_0010e8e8;
          auVar10._12_4_ = _UNK_0010e8ec;
          auVar26 = auVar26 & auVar10;
          fVar54 = (float)*(undefined8 *)(lVar9 + 0x30);
          fVar59 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x10) >> 0x20);
          fVar48 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
          fVar58 = (float)((ulong)*(undefined8 *)(lVar9 + 0x38) >> 0x20);
          uVar13 = -(uint)(auVar26._0_4_ == __LC18);
          uVar38 = -(uint)(auVar26._4_4_ == _UNK_0010e8e4);
          uVar39 = -(uint)(auVar26._8_4_ == _UNK_0010e8e8);
          fVar43 = (float)((uint)(float)local_168 & uVar13);
          fVar45 = (float)((uint)local_168._4_4_ & uVar38);
          fVar47 = (float)((uint)(float)uStack_160 & uVar39);
          fVar35 = (fVar59 * fVar56 + fVar53 * fVar54 + fVar34 * fVar58) - fVar51 * fVar48;
          fVar57 = (fVar53 * fVar48 - fVar34 * fVar56) + fVar59 * fVar58 + fVar51 * fVar54;
          fVar49 = fVar57 + fVar57;
          fVar60 = ((fVar53 * fVar56 + fVar34 * fVar48) - fVar59 * fVar54) + fVar51 * fVar58;
          fVar51 = ((fVar58 * fVar53 - fVar34 * fVar54) - fVar59 * fVar48) - fVar51 * fVar56;
          fVar59 = fVar60 * (fVar60 + fVar60);
          fVar56 = fVar35 + fVar35;
          fVar55 = (_LC0 - fVar59) - fVar35 * fVar56;
          fVar61 = (_LC0 - fVar35 * fVar56) - fVar57 * fVar49;
          fVar53 = fVar51 * (fVar60 + fVar60);
          fVar35 = fVar60 * fVar56 + fVar49 * fVar51;
          fVar34 = fVar60 * fVar56 - fVar49 * fVar51;
          fVar48 = fVar60 * fVar49 - fVar56 * fVar51;
          fVar60 = fVar60 * fVar49 + fVar56 * fVar51;
          fVar51 = fVar57 * fVar56 - fVar53;
          fVar53 = fVar53 + fVar57 * fVar56;
          fVar59 = (_LC0 - fVar57 * fVar49) - fVar59;
          fVar56 = (fVar47 * fVar34 + fVar45 * fVar53 + fVar43 * fVar59) * *(float *)(lVar9 + 0x20);
          fVar58 = (fVar47 * fVar60 + fVar45 * fVar55 + fVar43 * fVar51) * *(float *)(lVar9 + 0x24);
          fVar54 = (fVar47 * fVar61 + fVar45 * fVar48 + fVar43 * fVar35) * *(float *)(lVar9 + 0x28);
          fVar51 = (float)(uVar13 & (uint)(fVar59 * fVar56 + fVar58 * fVar51 + fVar54 * fVar35));
          fVar53 = (float)(uVar38 & (uint)(fVar53 * fVar56 + fVar58 * fVar55 + fVar54 * fVar48));
          fVar34 = (float)(uVar39 & (uint)(fVar34 * fVar56 + fVar58 * fVar60 + fVar54 * fVar61));
          uVar13 = -(uint)(auVar26._12_4_ == _UNK_0010e8ec) &
                   (uint)(fVar56 * 0.0 + fVar58 * 0.0 + fVar54 * 0.0);
        }
        *(float *)(pSVar16 + 0x10) = fVar51;
        *(float *)(pSVar16 + 0x14) = fVar53;
        *(float *)(pSVar16 + 0x18) = fVar34;
        *(uint *)(pSVar16 + 0x1c) = uVar13;
        fVar59 = _LC0;
        fVar40 = (float)uStack_160 * (fVar46 + fVar34) +
                 (fVar44 + fVar53) * local_168._4_4_ + (fVar40 + fVar51) * (float)local_168 + 0.0;
        if (fVar40 == 0.0) {
          *(undefined4 *)(pSVar16 + 0x20) = 0;
          *(undefined4 *)(pSVar16 + 0x2c) = 0;
        }
        else if (SVar1 == (SixDOFConstraint)0x0) {
          fVar44 = _LC0 / fVar40;
          fVar18 = _LC48 * fVar18;
          fVar46 = fVar18 * fVar18 * fVar44 * param_1;
          fVar18 = _LC0 / ((fVar18 * (fVar44 + fVar44) * fVar42 + fVar46) * param_1);
          *(float *)(pSVar16 + 0x28) = fVar18;
          *(float *)(pSVar16 + 0x20) = fVar59 / (fVar40 + fVar18);
          *(float *)(pSVar16 + 0x24) = fVar46 * fVar18 * fVar17 + 0.0;
        }
        else {
          fVar42 = _LC0 / ((fVar42 + fVar18 * param_1) * param_1);
          *(float *)(pSVar16 + 0x28) = fVar42;
          *(ulong *)(pSVar16 + 0x20) =
               CONCAT44(fVar18 * param_1 * fVar42 * fVar17 + 0.0,_LC0 / (fVar40 + fVar42));
        }
      }
    }
    else if (iVar4 == 0) {
      if ((((byte)this[0x81] >> ((int)lVar12 + 3U & 0x1f) & 1) != 0) ||
         (*(float *)(this + lVar12 * 4 + 400) <= 0.0)) goto LAB_00104800;
      AngleConstraintPart::CalculateConstraintProperties(uVar7,uVar8,0,pSVar16,pMVar5,pMVar6);
    }
    lVar12 = lVar12 + 1;
    pSVar16 = pSVar16 + 0x30;
    pSVar14 = pSVar14 + 0x1c;
  } while (lVar12 != 3);
LAB_00103d58:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001036e8:
  uVar13 = (uint)(byte)this[0x81];
LAB_00103703:
  if ((~uVar13 & 0x38) == 0) {
LAB_00104170:
    fVar18 = (float)*(undefined8 *)(pMVar6 + 0x10);
    fVar40 = (float)*(undefined8 *)(pMVar6 + 0x18);
    fVar17 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x10) >> 0x20);
    fVar51 = fVar18 + fVar18;
    fVar53 = fVar17 + fVar17;
    fVar44 = (float)((ulong)*(undefined8 *)(pMVar6 + 0x18) >> 0x20);
    fVar46 = fVar44 * (fVar40 + fVar40);
    fVar34 = fVar40 * (fVar40 + fVar40);
    local_88._0_4_ = (_LC0 - fVar17 * fVar53) - fVar34;
    local_88._4_4_ = fVar17 * fVar51 + fVar46;
    fStack_80 = fVar40 * fVar51 - fVar53 * fVar44;
    fStack_7c = 0.0;
    fVar42 = (float)*(undefined8 *)(pMVar5 + 0x10);
    local_78._4_4_ = (_LC0 - fVar34) - fVar18 * fVar51;
    local_78._0_4_ = fVar17 * fVar51 - fVar46;
    local_68._4_4_ = fVar40 * fVar53 - fVar51 * fVar44;
    local_68._0_4_ = fVar40 * fVar51 + fVar53 * fVar44;
    fVar46 = (float)*(undefined8 *)(pMVar5 + 0x18);
    local_78._8_4_ = fVar51 * fVar44 + fVar40 * fVar53;
    local_78._12_4_ = 0;
    fVar44 = fVar42 + fVar42;
    local_58 = __LC47;
    uStack_50 = _UNK_0010e8d8;
    local_98 = __LC47;
    uStack_90 = _UNK_0010e8d8;
    fVar34 = fVar46 * (fVar46 + fVar46);
    fVar40 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x18) >> 0x20);
    local_68._8_4_ = (_LC0 - fVar18 * fVar51) - fVar17 * fVar53;
    local_68._12_4_ = 0;
    fVar18 = (float)((ulong)*(undefined8 *)(pMVar5 + 0x10) >> 0x20);
    fVar51 = fVar18 + fVar18;
    fVar17 = fVar40 * (fVar46 + fVar46);
    local_c8._0_4_ = (_LC0 - fVar18 * fVar51) - fVar34;
    local_c8._4_4_ = fVar18 * fVar44 + fVar17;
    local_c8._8_4_ = fVar46 * fVar44 - fVar51 * fVar40;
    local_c8._12_4_ = 0;
    local_b8._4_4_ = (_LC0 - fVar34) - fVar42 * fVar44;
    local_b8._0_4_ = fVar18 * fVar44 - fVar17;
    local_a8._4_4_ = fVar46 * fVar51 - fVar44 * fVar40;
    local_a8._0_4_ = fVar46 * fVar44 + fVar51 * fVar40;
    local_b8._8_4_ = fVar44 * fVar40 + fVar46 * fVar51;
    local_b8._12_4_ = 0;
    local_a8._8_4_ = (_LC0 - fVar42 * fVar44) - fVar18 * fVar51;
    local_a8._12_4_ = 0;
    RotationEulerConstraintPart::CalculateConstraintProperties
              ((Body *)(this + 0x530),pMVar5,(Body *)local_c8,pMVar6);
    goto LAB_00103d58;
  }
  goto LAB_00103710;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::GetRotationInConstraintSpace() const */

undefined1  [16] __thiscall
JPH::SixDOFConstraint::GetRotationInConstraintSpace(SixDOFConstraint *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
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
  
  uVar1 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar8 = (float)*(undefined8 *)(this + 0x60);
  fVar19 = (float)*(undefined8 *)(this + 0x68);
  fVar20 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  uVar3 = *(undefined8 *)(*(long *)(this + 0x28) + 0x10);
  uVar4 = *(undefined8 *)(*(long *)(this + 0x28) + 0x18);
  fVar13 = (float)uVar4;
  fVar7 = (float)uVar3;
  fVar14 = (float)((ulong)uVar3 >> 0x20);
  fVar15 = (float)((ulong)uVar4 >> 0x20);
  fVar18 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar10 = (float)uVar1;
  fVar6 = (float)uVar2;
  fVar16 = (float)((ulong)uVar1 >> 0x20);
  fVar17 = (float)((ulong)uVar2 >> 0x20);
  fVar9 = (float)((uint)((fVar15 * fVar8 + fVar7 * fVar20 + fVar14 * fVar19) - fVar13 * fVar18) ^
                 __LC49);
  fVar11 = (float)((uint)((fVar15 * fVar18 - fVar7 * fVar19) + fVar14 * fVar20 + fVar13 * fVar8) ^
                  _UNK_0010e9b4);
  fVar12 = (float)((uint)(((fVar15 * fVar19 + fVar7 * fVar18) - fVar14 * fVar8) + fVar13 * fVar20) ^
                  _UNK_0010e9b8);
  fVar13 = (float)((uint)(((fVar15 * fVar20 - fVar7 * fVar8) - fVar14 * fVar18) - fVar13 * fVar19) ^
                  _UNK_0010e9bc);
  fVar18 = (fVar10 * fVar13 + fVar9 * fVar17 + fVar6 * fVar11) - fVar16 * fVar12;
  fVar15 = (fVar16 * fVar13 - fVar9 * fVar6) + fVar17 * fVar11 + fVar10 * fVar12;
  fVar7 = (float)*(undefined8 *)(this + 0x70);
  fVar14 = ((fVar6 * fVar13 + fVar9 * fVar16) - fVar10 * fVar11) + fVar17 * fVar12;
  fVar8 = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
  fVar10 = ((fVar17 * fVar13 - fVar9 * fVar10) - fVar16 * fVar11) - fVar6 * fVar12;
  fVar13 = (float)*(undefined8 *)(this + 0x78);
  fVar6 = (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20);
  auVar5._4_4_ = fVar7 * fVar14 + (fVar8 * fVar10 - fVar13 * fVar18) + fVar6 * fVar15;
  auVar5._0_4_ = (fVar13 * fVar15 + fVar7 * fVar10 + fVar6 * fVar18) - fVar8 * fVar14;
  auVar5._12_4_ = ((fVar6 * fVar10 - fVar7 * fVar18) - fVar8 * fVar15) - fVar13 * fVar14;
  auVar5._8_4_ = ((fVar13 * fVar10 + fVar8 * fVar18) - fVar7 * fVar15) + fVar6 * fVar14;
  return auVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::SixDOFConstraint::DrawConstraint(SixDOFConstraint *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  uint uVar8;
  long in_FS_OFFSET;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar11;
  float extraout_XMM0_Db;
  float fVar12;
  undefined1 auVar10 [16];
  float extraout_XMM1_Da;
  float extraout_XMM1_Db;
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
  float fVar31;
  float fVar32;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d0;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  fVar12 = (float)puVar1[2];
  fVar16 = (float)puVar1[3];
  fVar13 = (float)((ulong)puVar1[2] >> 0x20);
  fVar25 = fVar12 + fVar12;
  fVar18 = (float)((ulong)puVar1[3] >> 0x20);
  fVar26 = fVar13 + fVar13;
  fVar14 = fVar18 * (fVar16 + fVar16);
  fVar29 = fVar16 * (fVar16 + fVar16);
  fVar7 = *(float *)(this + 0x40);
  fVar11 = *(float *)(this + 0x44);
  fVar22 = *(float *)(this + 0x48);
  fVar9 = (float)puVar1[3];
  fVar21 = (float)*(undefined8 *)(this + 0x60);
  fVar28 = (float)puVar1[2];
  fVar27 = (float)((ulong)puVar1[2] >> 0x20);
  fVar23 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
  fVar17 = (float)((ulong)puVar1[3] >> 0x20);
  local_f8._0_4_ = (float)*puVar1;
  local_f8._4_4_ = (float)((ulong)*puVar1 >> 0x20);
  local_f8._0_4_ =
       (fVar13 * fVar25 - fVar14) * fVar11 + ((_LC0 - fVar13 * fVar26) - fVar29) * fVar7 +
       (fVar16 * fVar25 + fVar26 * fVar18) * fVar22 + (float)local_f8;
  local_f8._4_4_ =
       ((_LC0 - fVar29) - fVar12 * fVar25) * fVar11 + (fVar13 * fVar25 + fVar14) * fVar7 +
       (fVar16 * fVar26 - fVar25 * fVar18) * fVar22 + local_f8._4_4_;
  fVar14 = (fVar25 * fVar18 + fVar16 * fVar26) * fVar11 +
           (fVar16 * fVar25 - fVar26 * fVar18) * fVar7 +
           ((_LC0 - fVar12 * fVar25) - fVar13 * fVar26) * fVar22 + *(float *)(puVar1 + 1);
  fVar13 = fVar11 * 0.0 + fVar7 * 0.0 + fVar22 * 0.0 + 1.0;
  uStack_f0 = CONCAT44(fVar13,fVar14);
  uVar3 = *(undefined8 *)(this + 0x70);
  fVar7 = (float)*(undefined8 *)(this + 0x68);
  uVar4 = *(undefined8 *)(this + 0x78);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
  uVar5 = *(undefined8 *)(*(long *)(this + 0x30) + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(this + 0x30) + 0x18);
  fVar18 = (float)uVar3;
  fVar11 = (float)uVar5;
  fVar12 = (float)uVar6;
  fVar16 = (float)uVar4;
  fVar29 = (fVar17 * fVar21 + fVar28 * fVar22 + fVar27 * fVar7) - fVar9 * fVar23;
  fVar26 = (fVar17 * fVar23 - fVar28 * fVar7) + fVar27 * fVar22 + fVar9 * fVar21;
  fVar25 = ((fVar17 * fVar7 + fVar28 * fVar23) - fVar27 * fVar21) + fVar9 * fVar22;
  fVar22 = ((fVar17 * fVar22 - fVar28 * fVar21) - fVar27 * fVar23) - fVar9 * fVar7;
  fVar7 = (float)JPH::DebugRenderer::DrawCoordinateSystem((Mat44 *)param_1,*(float *)(this + 0xc));
  if ((((~(byte)this[0x80] & 0x38) != 0) || (this[0x84] != (SixDOFConstraint)0x0)) &&
     ((~(byte)this[0x81] & 0x38) != 0)) {
    GetRotationInConstraintSpace(this);
    fVar7 = SQRT(extraout_XMM1_Db * extraout_XMM1_Db + extraout_XMM0_Da * extraout_XMM0_Da);
    if (fVar7 == 0.0) {
      fVar30 = 0.0;
      fVar23 = fVar22;
      fVar17 = fVar25;
      fVar9 = fVar29;
      fVar21 = fVar26;
      fVar7 = extraout_XMM1_Db;
      fVar28 = extraout_XMM0_Da;
      fVar27 = extraout_XMM1_Da;
      local_d0 = extraout_XMM0_Db;
    }
    else {
      fVar28 = 0.0;
      fVar21 = extraout_XMM1_Db / fVar7;
      local_d0 = (extraout_XMM0_Db * extraout_XMM1_Db - extraout_XMM1_Da * extraout_XMM0_Da) / fVar7
      ;
      fVar30 = extraout_XMM0_Da / fVar7;
      fVar27 = (extraout_XMM1_Da * extraout_XMM1_Db + extraout_XMM0_Da * extraout_XMM0_Db) / fVar7;
      fVar23 = fVar22 * fVar21;
      fVar17 = fVar21 * fVar25;
      fVar9 = fVar29 * fVar21;
      fVar21 = fVar26 * fVar21;
    }
    fVar24 = (fVar22 * fVar30 + fVar9 + fVar26 * 0.0) - fVar25 * 0.0;
    fVar17 = ((fVar22 * 0.0 + fVar29 * 0.0) - fVar26 * fVar30) + fVar17;
    fVar32 = (fVar22 * 0.0 - fVar29 * 0.0) + fVar21 + fVar25 * fVar30;
    fVar19 = fVar32 + fVar32;
    fVar23 = ((fVar23 - fVar30 * fVar29) - fVar26 * 0.0) - fVar25 * 0.0;
    fVar21 = fVar23 + fVar23;
    fVar30 = fVar21 * fVar24 + fVar19 * fVar17;
    fVar9 = *(float *)(this + 0xc);
    local_e8 = CONCAT44(((fVar21 * fVar23 + fVar19 * fVar32) - _LC0) * fVar9 + local_f8._4_4_,
                        (fVar24 * fVar19 - fVar17 * fVar21) * fVar9 + (float)local_f8);
    uStack_e0 = CONCAT44(fVar30 * fVar9 + fVar13,fVar30 * fVar9 + fVar14);
    (**(code **)(*(long *)param_1 + 0x10))
              (local_f8,uStack_f0,local_e8,uStack_e0,param_1,(undefined4)Color::sWhite);
    fVar9 = (fVar22 * fVar28 + fVar29 * fVar7 + fVar26 * fVar27) - local_d0 * fVar25;
    fVar23 = (local_d0 * fVar22 - fVar29 * fVar27) + fVar26 * fVar7 + fVar25 * fVar28;
    fVar21 = ((fVar22 * fVar27 + local_d0 * fVar29) - fVar26 * fVar28) + fVar25 * fVar7;
    fVar17 = ((fVar7 * fVar22 - fVar28 * fVar29) - local_d0 * fVar26) - fVar27 * fVar25;
    fVar27 = fVar9 + fVar9;
    fVar28 = fVar17 + fVar17;
    fVar7 = *(float *)(this + 0xc);
    fVar30 = fVar27 * fVar21 - fVar28 * fVar23;
    local_e8 = CONCAT44((fVar23 * fVar27 + fVar28 * fVar21) * fVar7 + local_f8._4_4_,
                        ((fVar9 * fVar27 + fVar17 * fVar28) - _LC0) * fVar7 + (float)local_f8);
    uStack_e0 = CONCAT44(fVar30 * fVar7 + fVar13,fVar30 * fVar7 + fVar14);
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x10))
                             (local_f8,uStack_f0,local_e8,uStack_e0,param_1,
                              (undefined4)Color::sWhite);
  }
  fVar21 = *(float *)(this + 0x1f0);
  fVar23 = *(float *)(this + 500);
  fVar17 = *(float *)(this + 0x1f8);
  fVar28 = *(float *)(this + 0x1fc);
  fVar9 = *(float *)(this + 0x1fc);
  fVar19 = SQRT(fVar21 * fVar21 + fVar9 * fVar9);
  fVar27 = __LC47;
  fVar30 = _UNK_0010e8d4;
  fVar24 = _UNK_0010e8d8;
  fVar32 = _UNK_0010e8dc;
  if (fVar19 != 0.0) {
    fVar27 = fVar21 / fVar19;
    fVar17 = (*(float *)(this + 0x1f8) * fVar9 + fVar21 * *(float *)(this + 500)) / fVar19;
    fVar23 = (*(float *)(this + 500) * fVar9 - fVar21 * *(float *)(this + 0x1f8)) / fVar19;
    fVar21 = 0.0;
    fVar28 = fVar19;
    fVar30 = 0.0;
    fVar24 = 0.0;
    fVar32 = fVar9 / fVar19;
  }
  if (*(int *)(this + 0x1a8) == 2) {
    fVar19 = (fVar22 * fVar27 + fVar29 * fVar32 + fVar26 * fVar24) - fVar25 * fVar30;
    fVar15 = (fVar22 * fVar30 - fVar29 * fVar24) + fVar26 * fVar32 + fVar25 * fVar27;
    fVar20 = ((fVar22 * fVar24 + fVar29 * fVar30) - fVar26 * fVar27) + fVar25 * fVar32;
    fVar31 = fVar15 + fVar15;
    fVar9 = ((fVar32 * fVar22 - fVar27 * fVar29) - fVar30 * fVar26) - fVar24 * fVar25;
    fVar27 = fVar9 + fVar9;
    fVar30 = fVar27 * fVar19 + fVar31 * fVar20;
    fVar7 = *(float *)(this + 0xc);
    local_e8 = CONCAT44(((fVar9 * fVar27 + fVar31 * fVar15) - _LC0) * fVar7 + local_f8._4_4_,
                        (fVar19 * fVar31 - fVar20 * fVar27) * fVar7 + (float)local_f8);
    uStack_e0 = CONCAT44(fVar30 * fVar7 + fVar13,fVar30 * fVar7 + fVar14);
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x10))
                             (local_f8,uStack_f0,local_e8,uStack_e0,param_1,
                              (undefined4)Color::sYellow);
  }
  if ((*(int *)(this + 0x1ac) == 2) || (*(int *)(this + 0x1b0) == 2)) {
    fVar9 = (fVar22 * fVar21 + fVar29 * fVar28 + fVar26 * fVar17) - fVar25 * fVar23;
    fVar27 = (fVar22 * fVar23 - fVar29 * fVar17) + fVar26 * fVar28 + fVar25 * fVar21;
    fVar30 = fVar9 + fVar9;
    fVar24 = ((fVar22 * fVar28 - fVar29 * fVar21) - fVar26 * fVar23) - fVar25 * fVar17;
    fVar22 = ((fVar22 * fVar17 + fVar29 * fVar23) - fVar26 * fVar21) + fVar25 * fVar28;
    fVar23 = fVar24 + fVar24;
    fVar7 = *(float *)(this + 0xc);
    fVar21 = fVar30 * fVar22 - fVar23 * fVar27;
    local_e8 = CONCAT44((fVar30 * fVar27 + fVar23 * fVar22) * fVar7 + local_f8._4_4_,
                        ((fVar9 * fVar30 + fVar24 * fVar23) - _LC0) * fVar7 + (float)local_f8);
    uStack_e0 = CONCAT44(fVar21 * fVar7 + fVar13,fVar21 * fVar7 + fVar14);
    fVar7 = (float)(**(code **)(*(long *)param_1 + 0x10))
                             (local_f8,uStack_f0,local_e8,uStack_e0,param_1,
                              (undefined4)Color::sYellow);
  }
  local_e8 = 0;
  if (*(int *)(this + 0x1a8) == 1) {
    fVar7 = *(float *)(this + 0x1d0);
    local_e8 = (ulong)(uint)fVar7;
  }
  if (*(int *)(this + 0x1ac) == 1) {
    local_e8 = local_e8 | (ulong)*(uint *)(this + 0x1d4) << 0x20;
  }
  fVar22 = 0.0;
  if (*(int *)(this + 0x1b0) == 1) {
    fVar7 = *(float *)(this + 0x1d8);
    fVar22 = fVar7;
  }
  auVar10._4_4_ = -(uint)(local_e8._4_4_ == 0.0);
  auVar10._0_4_ = -(uint)((float)local_e8 == 0.0);
  auVar10._8_4_ = -(uint)(fVar22 == 0.0);
  auVar10._12_4_ = 0xffffffff;
  uVar8 = movmskps(fVar7,auVar10);
  if ((~uVar8 & 7) == 0) {
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    fVar21 = (float)((ulong)uVar4 >> 0x20);
    fVar7 = (float)((ulong)uVar5 >> 0x20);
    fVar23 = (float)((ulong)uVar3 >> 0x20);
    fVar9 = (float)((ulong)uVar6 >> 0x20);
    fVar25 = (fVar11 * fVar21 + fVar18 * fVar9 + fVar7 * fVar16) - fVar12 * fVar23;
    fVar26 = ((fVar21 * fVar9 - fVar11 * fVar18) - fVar7 * fVar23) - fVar12 * fVar16;
    fVar17 = (fVar23 * fVar9 - fVar11 * fVar16) + fVar7 * fVar21 + fVar12 * fVar18;
    fVar18 = ((fVar11 * fVar23 + fVar16 * fVar9) - fVar7 * fVar18) + fVar12 * fVar21;
    fVar7 = (float)((uint)fVar25 ^ __LC49);
    fVar11 = (float)((uint)fVar17 ^ _UNK_0010e9b4);
    fVar12 = (float)((uint)fVar18 ^ _UNK_0010e9b8);
    fVar9 = (float)((uint)fVar26 ^ _UNK_0010e9bc);
    fVar23 = ((float)local_e8 * fVar26 + fVar25 * 0.0 + fVar22 * fVar17) - fVar18 * local_e8._4_4_;
    fVar21 = (fVar26 * local_e8._4_4_ - fVar22 * fVar25) + fVar17 * 0.0 + (float)local_e8 * fVar18;
    fVar16 = ((fVar22 * fVar26 + fVar25 * local_e8._4_4_) - (float)local_e8 * fVar17) + fVar18 * 0.0
    ;
    fVar22 = ((fVar26 * 0.0 - (float)local_e8 * fVar25) - fVar17 * local_e8._4_4_) - fVar22 * fVar18
    ;
    local_e8 = CONCAT44(fVar16 * fVar7 + fVar21 * fVar9 + (fVar11 * fVar22 - fVar23 * fVar12) +
                        local_f8._4_4_,
                        ((fVar21 * fVar12 + fVar23 * fVar9 + fVar7 * fVar22) - fVar16 * fVar11) +
                        (float)local_f8);
    uStack_e0 = CONCAT44((((fVar9 * fVar22 - fVar23 * fVar7) - fVar21 * fVar11) - fVar16 * fVar12) +
                         fVar13,fVar16 * fVar9 +
                                ((fVar23 * fVar11 + fVar12 * fVar22) - fVar21 * fVar7) + fVar14);
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      JPH::DebugRenderer::DrawArrow
                (local_f8,uStack_f0,local_e8,uStack_e0,param_1,(undefined4)Color::sRed);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SolvePositionConstraint(float, float) */

uint __thiscall
JPH::SixDOFConstraint::SolvePositionConstraint(SixDOFConstraint *this,float param_1,float param_2)

{
  SixDOFConstraint SVar1;
  byte bVar2;
  Body *pBVar3;
  Body *pBVar4;
  float *pfVar5;
  float *pfVar6;
  Mat44 *pMVar7;
  Mat44 *pMVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  long lVar15;
  SixDOFConstraint *pSVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  float fStack_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  SVar1 = this[0x81];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((~(byte)SVar1 & 0x38) == 0) {
    fVar38 = *(float *)(this + 0x94) * _LC20;
    fVar27 = *(float *)(this + 0x98) * _LC20;
    fVar33 = *(float *)(this + 0x9c) * _LC20;
    pMVar7 = *(Mat44 **)(this + 0x30);
    pMVar8 = *(Mat44 **)(this + 0x28);
    fVar25 = (float)(_LC51 & (uint)fVar38 ^ (uint)fVar38);
    fVar28 = (float)(_UNK_0010e8f4 & (uint)fVar27 ^ (uint)fVar27);
    fVar37 = (float)(_UNK_0010e8f8 & (uint)fVar33 ^ (uint)fVar33);
    iVar29 = (int)(_LC23 * fVar25 + _LC20);
    iVar30 = (int)(_LC23 * fVar28 + _LC20);
    iVar31 = (int)(_LC23 * fVar37 + _LC20);
    fVar17 = (float)iVar29;
    fVar18 = (float)iVar30;
    fVar23 = (float)iVar31;
    fVar25 = ((fVar25 - _LC26 * fVar17) - _LC28 * fVar17) - fVar17 * _LC30;
    fVar36 = ((fVar28 - _LC26 * fVar18) - _LC28 * fVar18) - fVar18 * _LC30;
    fVar37 = ((fVar37 - _LC26 * fVar23) - _LC28 * fVar23) - fVar23 * _LC30;
    fVar18 = fVar25 * fVar25;
    fVar34 = fVar36 * fVar36;
    fVar21 = fVar37 * fVar37;
    fVar17 = (((_LC32 * fVar18 + _LC34) * fVar18 + _LC36) * fVar18 * fVar18 - _LC20 * fVar18) + _LC0
    ;
    fVar23 = (((_LC32 * fVar34 + _LC34) * fVar34 + _LC36) * fVar34 * fVar34 - _LC20 * fVar34) + _LC0
    ;
    fVar28 = (((_LC32 * fVar21 + _LC34) * fVar21 + _LC36) * fVar21 * fVar21 - _LC20 * fVar21) + _LC0
    ;
    uVar14 = (iVar29 << 0x1f) >> 0x1f;
    uVar13 = (iVar30 << 0x1f) >> 0x1f;
    uVar35 = (iVar31 << 0x1f) >> 0x1f;
    fVar25 = ((_LC39 * fVar18 + _LC41) * fVar18 + _LC43) * fVar18 * fVar25 + fVar25;
    fVar36 = ((_LC39 * fVar34 + _LC41) * fVar34 + _LC43) * fVar34 * fVar36 + fVar36;
    fVar37 = ((_LC39 * fVar21 + _LC41) * fVar21 + _LC43) * fVar21 * fVar37 + fVar37;
    fVar38 = (float)(((uint)fVar38 ^ iVar29 << 0x1e) & _LC51 ^
                    ((uint)fVar17 & uVar14 | ~uVar14 & (uint)fVar25));
    fVar27 = (float)(((uint)fVar27 ^ iVar30 << 0x1e) & _UNK_0010e8f4 ^
                    ((uint)fVar23 & uVar13 | ~uVar13 & (uint)fVar36));
    fVar33 = (float)(((uint)fVar33 ^ iVar31 << 0x1e) & _UNK_0010e8f8 ^
                    ((uint)fVar28 & uVar35 | ~uVar35 & (uint)fVar37));
    fVar18 = (float)(((uint)fVar25 & uVar14 | ~uVar14 & (uint)fVar17) ^
                    _LC51 & iVar29 << 0x1e ^ iVar29 << 0x1f);
    fVar25 = (float)(((uint)fVar36 & uVar13 | ~uVar13 & (uint)fVar23) ^
                    _UNK_0010e8f4 & iVar30 << 0x1e ^ iVar30 << 0x1f);
    fVar23 = (float)(((uint)fVar37 & uVar35 | ~uVar35 & (uint)fVar28) ^
                    _UNK_0010e8f8 & iVar31 << 0x1e ^ iVar31 << 0x1f);
    fVar28 = fVar38 * fVar33;
    fVar17 = fVar23 * fVar18;
    fVar23 = fVar23 * fVar38;
    fVar18 = fVar18 * fVar33;
    fVar22 = fVar25 * fVar17 + fVar27 * fVar28;
    fVar21 = fVar28 * fVar25 + fVar17 * fVar27;
    fVar17 = *(float *)(this + 0x60);
    fVar34 = fVar25 * fVar18 - fVar27 * fVar23;
    fVar37 = fVar23 * fVar25 - fVar27 * fVar18;
    fVar23 = *(float *)(this + 100);
    fVar25 = *(float *)(this + 0x68);
    fVar28 = *(float *)(this + 0x6c);
    fVar36 = (float)*(undefined8 *)(pMVar7 + 0x10);
    fVar24 = fVar36 + fVar36;
    fVar18 = *(float *)(this + 0x70);
    fVar38 = (float)((uint)((fVar22 * fVar17 + fVar28 * fVar37 + fVar23 * fVar34) - fVar25 * fVar21)
                    ^ __LC49);
    fVar27 = (float)((uint)(fVar25 * fVar37 + (fVar28 * fVar21 - fVar34 * fVar17) + fVar23 * fVar22)
                    ^ _UNK_0010e9b4);
    fVar33 = (float)((uint)(fVar25 * fVar22 +
                           ((fVar21 * fVar17 + fVar28 * fVar34) - fVar23 * fVar37)) ^ _UNK_0010e9b8)
    ;
    fVar34 = (float)((uint)(((fVar28 * fVar22 - fVar37 * fVar17) - fVar23 * fVar21) -
                           fVar25 * fVar34) ^ _UNK_0010e9bc);
    fVar17 = *(float *)(this + 0x74);
    fVar23 = *(float *)(this + 0x78);
    fVar25 = *(float *)(this + 0x7c);
    fVar28 = (float)*(undefined8 *)(pMVar7 + 0x18);
    fVar21 = fVar28 * (fVar28 + fVar28);
    fVar37 = (float)((ulong)*(undefined8 *)(pMVar7 + 0x18) >> 0x20);
    local_108 = CONCAT44((fVar25 * fVar27 - fVar33 * fVar18) + fVar34 * fVar17 + fVar38 * fVar23,
                         (fVar25 * fVar38 + fVar34 * fVar18 + fVar33 * fVar17) - fVar27 * fVar23);
    uStack_100 = CONCAT44(((fVar25 * fVar34 - fVar38 * fVar18) - fVar27 * fVar17) - fVar33 * fVar23,
                          ((fVar25 * fVar33 + fVar27 * fVar18) - fVar38 * fVar17) + fVar34 * fVar23)
    ;
    fVar17 = (float)((ulong)*(undefined8 *)(pMVar7 + 0x10) >> 0x20);
    fVar23 = fVar17 + fVar17;
    fVar18 = fVar37 * (fVar28 + fVar28);
    local_88._0_4_ = (_LC0 - fVar17 * fVar23) - fVar21;
    local_88._4_4_ = fVar17 * fVar24 + fVar18;
    fStack_80 = fVar28 * fVar24 - fVar23 * fVar37;
    register0x000012cc = 0;
    uStack_70 = (ulong)(uint)(fVar24 * fVar37 + fVar28 * fVar23);
    local_78 = CONCAT44((_LC0 - fVar21) - fVar36 * fVar24,fVar17 * fVar24 - fVar18);
    local_68._4_4_ = fVar28 * fVar23 - fVar24 * fVar37;
    local_68._0_4_ = fVar28 * fVar24 + fVar23 * fVar37;
    local_58 = __LC47;
    uStack_50 = _UNK_0010e8d8;
    local_68._8_4_ = (_LC0 - fVar36 * fVar24) - fVar17 * fVar23;
    local_68._12_4_ = 0;
    local_98 = __LC47;
    uStack_90 = _UNK_0010e8d8;
    fVar17 = (float)*(undefined8 *)(pMVar8 + 0x10);
    fVar23 = (float)*(undefined8 *)(pMVar8 + 0x18);
    fVar18 = (float)((ulong)*(undefined8 *)(pMVar8 + 0x10) >> 0x20);
    fVar28 = fVar17 + fVar17;
    fVar36 = fVar18 + fVar18;
    fVar25 = (float)((ulong)*(undefined8 *)(pMVar8 + 0x18) >> 0x20);
    fVar38 = (fVar23 + fVar23) * fVar25;
    fVar37 = (fVar23 + fVar23) * fVar23;
    local_c8._0_4_ = (_LC0 - fVar36 * fVar18) - fVar37;
    local_c8._4_4_ = fVar18 * fVar28 + fVar38;
    local_c8._8_4_ = fVar28 * fVar23 - fVar36 * fVar25;
    local_c8._12_4_ = 0;
    uStack_a0 = (ulong)(uint)((_LC0 - fVar17 * fVar28) - fVar36 * fVar18);
    local_b8 = CONCAT44((_LC0 - fVar37) - fVar17 * fVar28,fVar18 * fVar28 - fVar38);
    uStack_b0 = (ulong)(uint)(fVar28 * fVar25 + fVar23 * fVar36);
    local_a8 = CONCAT44(fVar23 * fVar36 - fVar28 * fVar25,fVar28 * fVar23 + fVar36 * fVar25);
    RotationEulerConstraintPart::CalculateConstraintProperties
              ((Body *)(this + 0x530),pMVar8,(Body *)local_c8,pMVar7);
    uVar14 = RotationEulerConstraintPart::SolvePositionConstraint
                       (local_108,uStack_100,(Body *)(this + 0x530),pMVar8,pMVar7);
  }
  else {
    uVar14 = 0;
    if ((~(byte)this[0x80] & 0x38) != 0) {
      pSVar16 = this;
      auVar39 = GetRotationInConstraintSpace(this);
      uVar14 = SwingTwistConstraintPart::SolvePositionConstraint
                         (auVar39._0_8_,auVar39._8_8_,*(undefined8 *)(this + 0x60),
                          *(undefined8 *)(this + 0x68),*(undefined8 *)(this + 0x70),
                          *(undefined8 *)(this + 0x78),pSVar16 + 0x420,
                          *(undefined8 *)(pSVar16 + 0x28),*(undefined8 *)(pSVar16 + 0x30));
    }
  }
  if (((~(byte)SVar1 & 7) == 0) && (this[0x85] == (SixDOFConstraint)0x0)) {
    fVar17 = *(float *)(this + 0x60);
    fVar18 = *(float *)(this + 0x6c);
    fVar23 = *(float *)(this + 100);
    fVar25 = *(float *)(this + 0x68);
    fVar37 = (float)*(undefined8 *)(this + 0x88);
    pBVar3 = *(Body **)(this + 0x30);
    pBVar4 = *(Body **)(this + 0x28);
    fVar33 = (float)(*(uint *)(this + 0x60) ^ __LC49);
    fVar34 = (float)(*(uint *)(this + 100) ^ _UNK_0010e9b4);
    fVar21 = (float)(*(uint *)(this + 0x68) ^ _UNK_0010e9b8);
    fVar22 = (float)(*(uint *)(this + 0x6c) ^ _UNK_0010e9bc);
    fVar28 = *(float *)(this + 0x90);
    fVar36 = *(float *)(this + 0x8c);
    fVar26 = (fVar18 * fVar37 + fVar17 * 0.0 + fVar28 * fVar23) - fVar36 * fVar25;
    fVar24 = (fVar36 * fVar18 - fVar28 * fVar17) + fVar23 * 0.0 + fVar25 * fVar37;
    fVar27 = ((fVar18 * 0.0 - fVar17 * fVar37) - fVar36 * fVar23) - fVar28 * fVar25;
    fVar38 = (float)*(undefined8 *)(pBVar3 + 0x10);
    fVar32 = fVar38 + fVar38;
    fVar17 = ((fVar28 * fVar18 + fVar36 * fVar17) - fVar23 * fVar37) + fVar25 * 0.0;
    fVar23 = (float)*(undefined8 *)(pBVar3 + 0x18);
    fVar28 = fVar23 * (fVar23 + fVar23);
    fVar25 = (float)((ulong)*(undefined8 *)(pBVar3 + 0x18) >> 0x20);
    local_108 = CONCAT44((fVar27 * fVar34 - fVar26 * fVar21) + fVar24 * fVar22 + fVar17 * fVar33 +
                         *(float *)(this + 0x44),
                         ((fVar27 * fVar33 + fVar26 * fVar22 + fVar24 * fVar21) - fVar17 * fVar34) +
                         *(float *)(this + 0x40));
    uStack_100 = CONCAT44((((fVar27 * fVar22 - fVar26 * fVar33) - fVar24 * fVar34) - fVar17 * fVar21
                          ) + *(float *)(this + 0x4c),
                          ((fVar27 * fVar21 + fVar26 * fVar34) - fVar24 * fVar33) + fVar17 * fVar22
                          + *(float *)(this + 0x48));
    fVar17 = (float)((ulong)*(undefined8 *)(pBVar3 + 0x10) >> 0x20);
    fVar36 = fVar17 + fVar17;
    fVar18 = fVar25 * (fVar23 + fVar23);
    local_88._0_4_ = (_LC0 - fVar17 * fVar36) - fVar28;
    local_88._4_4_ = fVar17 * fVar32 + fVar18;
    fStack_80 = fVar23 * fVar32 - fVar36 * fVar25;
    register0x0000138c = 0;
    uStack_70 = (ulong)(uint)(fVar32 * fVar25 + fVar23 * fVar36);
    local_78 = CONCAT44((_LC0 - fVar28) - fVar38 * fVar32,fVar17 * fVar32 - fVar18);
    fVar18 = (float)*(undefined8 *)(pBVar4 + 0x10);
    fVar28 = (float)*(undefined8 *)(pBVar4 + 0x18);
    local_68._4_4_ = fVar23 * fVar36 - fVar32 * fVar25;
    local_68._0_4_ = fVar23 * fVar32 + fVar36 * fVar25;
    fVar25 = fVar18 + fVar18;
    fVar37 = fVar28 * (fVar28 + fVar28);
    local_68._8_4_ = (_LC0 - fVar38 * fVar32) - fVar17 * fVar36;
    local_68._12_4_ = 0;
    fVar23 = (float)((ulong)*(undefined8 *)(pBVar4 + 0x18) >> 0x20);
    fVar17 = (float)((ulong)*(undefined8 *)(pBVar4 + 0x10) >> 0x20);
    fVar38 = (fVar28 + fVar28) * fVar23;
    fVar36 = fVar17 + fVar17;
    local_c8._0_4_ = (_LC0 - fVar17 * fVar36) - fVar37;
    local_c8._4_4_ = fVar17 * fVar25 + fVar38;
    local_c8._8_4_ = fVar28 * fVar25 - fVar36 * fVar23;
    local_c8._12_4_ = 0;
    uStack_a0 = (ulong)(uint)((_LC0 - fVar18 * fVar25) - fVar17 * fVar36);
    local_b8 = CONCAT44((_LC0 - fVar37) - fVar18 * fVar25,fVar17 * fVar25 - fVar38);
    uStack_b0 = (ulong)(uint)(fVar25 * fVar23 + fVar28 * fVar36);
    local_a8 = CONCAT44(fVar28 * fVar36 - fVar25 * fVar23,fVar28 * fVar25 + fVar36 * fVar23);
    local_98 = __LC47;
    uStack_90 = _UNK_0010e8d8;
    local_58 = __LC47;
    uStack_50 = _UNK_0010e8d8;
    PointConstraintPart::CalculateConstraintProperties
              (local_108,uStack_100,*(undefined8 *)(this + 0x50),*(undefined8 *)(this + 0x58),
               (PointConstraintPart *)(this + 0x330),pBVar4,local_c8,pBVar3,local_88);
    uVar13 = PointConstraintPart::SolvePositionConstraint
                       ((PointConstraintPart *)(this + 0x330),pBVar4,pBVar3,param_2);
    uVar14 = uVar14 | uVar13;
  }
  else if ((~(byte)this[0x80] & 7) != 0) {
    pSVar16 = this + 0x26c;
    lVar15 = 0;
    do {
      if (*(float *)(this + lVar15 * 0xc + 0xbc) <= 0.0) {
        GetPositionConstraintProperties(this,(Vec3 *)&local_d8,local_c8,local_88);
        pfVar5 = *(float **)(this + 0x28);
        fVar23 = (float)*(undefined8 *)(this + 0x68);
        fVar37 = (float)*(undefined8 *)(this + 0x60);
        fVar25 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
        fVar17 = (float)*(undefined8 *)(pfVar5 + 6);
        fVar28 = (float)*(undefined8 *)(pfVar5 + 4);
        fVar38 = (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20);
        fVar18 = (float)((ulong)*(undefined8 *)(pfVar5 + 6) >> 0x20);
        fVar36 = (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
        fVar27 = (fVar18 * fVar37 + fVar28 * fVar25 + fVar36 * fVar23) - fVar17 * fVar38;
        fVar33 = (fVar18 * fVar38 - fVar28 * fVar23) + fVar36 * fVar25 + fVar17 * fVar37;
        fVar34 = ((fVar18 * fVar23 + fVar28 * fVar38) - fVar36 * fVar37) + fVar17 * fVar25;
        fVar17 = ((fVar18 * fVar25 - fVar28 * fVar37) - fVar36 * fVar38) - fVar17 * fVar23;
        if (lVar15 == 0) {
          fVar18 = fVar27 + fVar27;
          fVar25 = fVar17 + fVar17;
          fVar23 = fVar34 * fVar18 - fVar33 * fVar25;
          fVar28 = (fVar27 * fVar18 + fVar17 * fVar25) - _LC0;
          fVar17 = fVar18 * fVar33 + fVar25 * fVar34;
LAB_00106826:
          local_108 = CONCAT44(fVar17,fVar28);
          uStack_100 = CONCAT44(fVar23,fVar23);
        }
        else {
          if (lVar15 == 1) {
            fVar25 = fVar33 + fVar33;
            fVar18 = fVar17 + fVar17;
            fVar23 = fVar27 * fVar18 + fVar34 * fVar25;
            fVar28 = fVar27 * fVar25 - fVar34 * fVar18;
            fVar17 = (fVar18 * fVar17 + fVar25 * fVar33) - _LC0;
            goto LAB_00106826;
          }
          fVar23 = fVar34 + fVar34;
          fVar18 = fVar17 + fVar17;
          fVar17 = (fVar17 * fVar18 + fVar34 * fVar23) - _LC0;
          uStack_100 = CONCAT44(fVar17,fVar17);
          local_108 = CONCAT44(fVar33 * fVar23 - fVar27 * fVar18,fVar27 * fVar23 + fVar33 * fVar18);
        }
        if (((byte)this[0x81] >> ((uint)lVar15 & 0x1f) & 1) == 0) {
          if (((byte)this[0x80] >> ((uint)lVar15 & 0x1f) & 1) == 0) {
            fVar17 = (float)uStack_100 * fStack_80 +
                     local_108._4_4_ * (float)local_88._4_4_ +
                     (float)local_108 * (float)local_88._0_4_ + 0.0;
            fVar18 = *(float *)(this + lVar15 * 4 + 0x88);
            if ((fVar17 <= fVar18) ||
               (fVar18 = *(float *)(this + lVar15 * 4 + 0xa0), fVar18 <= fVar17)) {
              fVar17 = fVar17 - fVar18;
              goto LAB_001068bd;
            }
          }
        }
        else {
          fVar17 = (fStack_80 * (float)uStack_100 +
                   local_108._4_4_ * (float)local_88._4_4_ +
                   (float)local_108 * (float)local_88._0_4_ + 0.0) -
                   *(float *)(this + lVar15 * 4 + 0x88);
LAB_001068bd:
          if (fVar17 != 0.0) {
            pfVar6 = *(float **)(this + 0x30);
            AxisConstraintPart::CalculateConstraintProperties
                      (local_d8,local_d0,local_c8._0_8_,local_c8._8_8_,local_108,uStack_100,0,
                       pSVar16,pfVar5,pfVar6);
            if (*(float *)(pSVar16 + 0x38) == 0.0) {
              fVar17 = fVar17 * (float)(*(uint *)(pSVar16 + 0x30) ^ _LC45) * param_2;
              if (*(char *)(pfVar5 + 0x1e) == '\x02') {
                bVar2 = *(byte *)(*(long *)(pfVar5 + 0x12) + 0x7a);
                fVar18 = *(float *)(*(long *)(pfVar5 + 0x12) + 0x58) * fVar17;
                auVar19._1_3_ = 0;
                auVar19[0] = bVar2;
                auVar19[4] = bVar2;
                auVar19._5_3_ = 0;
                auVar19[8] = bVar2;
                auVar19._9_3_ = 0;
                auVar19[0xc] = bVar2;
                auVar19._13_3_ = 0;
                auVar39._4_4_ = _UNK_0010e8c4;
                auVar39._0_4_ = __LC14;
                auVar39._8_4_ = _UNK_0010e8c8;
                auVar39._12_4_ = _UNK_0010e8cc;
                auVar19 = auVar19 & auVar39;
                bVar9 = auVar19._4_4_ == _UNK_0010e8c4;
                bVar10 = auVar19._8_4_ == _UNK_0010e8c8;
                bVar11 = auVar19._12_4_ == _UNK_0010e8cc;
                *pfVar5 = *pfVar5 - (float)((uint)(fVar18 * (float)local_108) &
                                           -(uint)(auVar19._0_4_ == __LC14));
                pfVar5[1] = pfVar5[1] - (float)((uint)(fVar18 * local_108._4_4_) & -(uint)bVar9);
                pfVar5[2] = pfVar5[2] - (float)((uint)(fVar18 * (float)uStack_100) & -(uint)bVar10);
                pfVar5[3] = pfVar5[3] - (float)((uint)(fVar18 * uStack_100._4_4_) & -(uint)bVar11);
                Body::SubRotationStep
                          (CONCAT44(fVar17 * *(float *)(pSVar16 + 0x1c),
                                    fVar17 * *(float *)(pSVar16 + 0x18)),
                           CONCAT44(fVar17 * *(float *)(pSVar16 + 0x24),
                                    fVar17 * *(float *)(pSVar16 + 0x20)),pfVar5);
              }
              if (*(char *)(pfVar6 + 0x1e) == '\x02') {
                bVar2 = *(byte *)(*(long *)(pfVar6 + 0x12) + 0x7a);
                fVar18 = *(float *)(*(long *)(pfVar6 + 0x12) + 0x58) * fVar17;
                auVar20._1_3_ = 0;
                auVar20[0] = bVar2;
                auVar20[4] = bVar2;
                auVar20._5_3_ = 0;
                auVar20[8] = bVar2;
                auVar20._9_3_ = 0;
                auVar20[0xc] = bVar2;
                auVar20._13_3_ = 0;
                auVar12._4_4_ = _UNK_0010e8c4;
                auVar12._0_4_ = __LC14;
                auVar12._8_4_ = _UNK_0010e8c8;
                auVar12._12_4_ = _UNK_0010e8cc;
                auVar20 = auVar20 & auVar12;
                bVar9 = auVar20._4_4_ == _UNK_0010e8c4;
                bVar10 = auVar20._8_4_ == _UNK_0010e8c8;
                bVar11 = auVar20._12_4_ == _UNK_0010e8cc;
                *pfVar6 = (float)((uint)(fVar18 * (float)local_108) &
                                 -(uint)(auVar20._0_4_ == __LC14)) + *pfVar6;
                pfVar6[1] = (float)((uint)(fVar18 * local_108._4_4_) & -(uint)bVar9) + pfVar6[1];
                pfVar6[2] = (float)((uint)(fVar18 * (float)uStack_100) & -(uint)bVar10) + pfVar6[2];
                pfVar6[3] = (float)((uint)(fVar18 * uStack_100._4_4_) & -(uint)bVar11) + pfVar6[3];
                local_108 = CONCAT44(fVar17 * *(float *)(pSVar16 + 0x28),
                                     fVar17 * *(float *)(pSVar16 + 0x24));
                uStack_100 = CONCAT44(fVar17 * *(float *)(pSVar16 + 0x30),
                                      fVar17 * *(float *)(pSVar16 + 0x2c));
                Body::AddRotationStep(local_108,uStack_100,pfVar6);
              }
              uVar14 = 1;
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
      pSVar16 = pSVar16 + 0x40;
    } while (lVar15 != 3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* JPH::SixDOFConstraint::CacheTranslationMotorActive() */

void __thiscall JPH::SixDOFConstraint::CacheTranslationMotorActive(SixDOFConstraint *this)

{
  SixDOFConstraint SVar1;
  SixDOFConstraint SVar2;
  
  SVar2 = (SixDOFConstraint)0x1;
  if ((((*(int *)(this + 0x19c) == 0) && (*(long *)(this + 0x1a0) == 0)) &&
      ((SVar1 = this[0x81], ((byte)SVar1 & 1) != 0 || (*(float *)(this + 0x184) <= 0.0)))) &&
     (((((byte)SVar1 & 2) != 0 || (SVar2 = (SixDOFConstraint)0x1, *(float *)(this + 0x188) <= 0.0))
      && (SVar2 = (SixDOFConstraint)0x0, ((byte)SVar1 & 4) == 0)))) {
    SVar2 = (SixDOFConstraint)(0.0 < *(float *)(this + 0x18c));
  }
  this[0x82] = SVar2;
  return;
}



/* JPH::SixDOFConstraint::CacheRotationMotorActive() */

void __thiscall JPH::SixDOFConstraint::CacheRotationMotorActive(SixDOFConstraint *this)

{
  SixDOFConstraint SVar1;
  SixDOFConstraint SVar2;
  
  SVar2 = (SixDOFConstraint)0x1;
  if ((((*(long *)(this + 0x1a8) == 0) && (*(int *)(this + 0x1b0) == 0)) &&
      ((SVar1 = this[0x81], ((byte)SVar1 & 8) != 0 || (*(float *)(this + 400) <= 0.0)))) &&
     (((((byte)SVar1 & 0x10) != 0 ||
       (SVar2 = (SixDOFConstraint)0x1, *(float *)(this + 0x194) <= 0.0)) &&
      (SVar2 = (SixDOFConstraint)0x0, ((byte)SVar1 & 0x20) == 0)))) {
    SVar2 = (SixDOFConstraint)(0.0 < *(float *)(this + 0x198));
  }
  this[0x83] = SVar2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SixDOFConstraint(JPH::Body&, JPH::Body&, JPH::SixDOFConstraintSettings
   const&) */

void __thiscall
JPH::SixDOFConstraint::SixDOFConstraint
          (SixDOFConstraint *this,Body *param_1,Body *param_2,SixDOFConstraintSettings *param_3)

{
  undefined4 uVar1;
  float fVar2;
  SixDOFConstraintSettings SVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  SixDOFConstraint *pSVar12;
  SixDOFConstraint *pSVar13;
  ulong uVar14;
  SixDOFConstraint SVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
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
  
  uVar4 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar4;
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar4,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  *(SixDOFConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  *(Body **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x20) = uVar6;
  *(undefined ***)this = &PTR__SixDOFConstraint_0010e7d0;
  *(undefined2 *)(this + 0x84) = 0;
  *(undefined1 (*) [16])(this + 0xb8) = (undefined1  [16])0x0;
  *(Body **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined1 (*) [16])(this + 200) = (undefined1  [16])0x0;
  uVar9 = _LC11;
  uVar6 = __LC10;
  *(undefined4 *)(this + 0xd8) = 0;
  pSVar13 = this + 0xdc;
  do {
    *pSVar13 = (SixDOFConstraint)0x0;
    pSVar12 = pSVar13 + 0x1c;
    *(undefined8 *)(pSVar13 + 4) = uVar6;
    *(undefined8 *)(pSVar13 + 0xc) = uVar9;
    *(undefined8 *)(pSVar13 + 0x14) = uVar9;
    uVar11 = _UNK_0010e8d8;
    uVar10 = __LC47;
    pSVar13 = pSVar12;
  } while (pSVar12 != this + 0x184);
  SVar3 = param_3[0xa8];
  *(undefined1 (*) [16])(this + 0x19c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x29c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x2dc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x31c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x4f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x520) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x630) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x670) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6b0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x710) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x740) = (undefined1  [16])0x0;
  fVar43 = *(float *)(param_3 + 0x50);
  fVar25 = *(float *)(param_3 + 0x54);
  fVar27 = *(float *)(param_3 + 0x58);
  fVar18 = *(float *)(param_3 + 0x40);
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  fVar19 = *(float *)(param_3 + 0x50);
  fVar32 = *(float *)(param_3 + 0x58);
  *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
  fVar2 = *(float *)(param_3 + 0x48);
  *(undefined8 *)(this + 0x1f0) = uVar10;
  *(undefined8 *)(this + 0x1f8) = uVar11;
  fVar42 = *(float *)(param_3 + 0x40);
  fVar39 = *(float *)(param_3 + 0x44);
  fVar35 = *(float *)(param_3 + 0x48);
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1e0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1ac) = 0;
  fVar44 = *(float *)(param_3 + 0x54);
  *(SixDOFConstraintSettings *)(this + 0x421) = SVar3;
  fVar8 = _LC0;
  fVar17 = fVar25 * fVar42 - fVar39 * fVar43;
  fVar25 = fVar27 * fVar39 - fVar35 * fVar25;
  fVar27 = fVar43 * fVar35 - fVar42 * fVar27;
  fVar43 = *(float *)(param_3 + 0x44);
  fVar42 = fVar18 + fVar44 + fVar17;
  if (0.0 <= fVar42) {
    fVar42 = SQRT(fVar42 + _LC0);
    fVar18 = _LC20 / fVar42;
    fVar42 = fVar42 * _LC20;
    fVar44 = (fVar32 - fVar27) * fVar18;
    fVar39 = (fVar25 - fVar2) * fVar18;
    fVar18 = (fVar43 - fVar19) * fVar18;
  }
  else if (fVar44 <= fVar18) {
    if (fVar18 < fVar17) goto LAB_001073c4;
    fVar44 = (fVar18 - (fVar44 + fVar17)) + _LC0;
    if (fVar44 < 0.0) {
      fVar44 = sqrtf(fVar44);
    }
    else {
      fVar44 = SQRT(fVar44);
    }
    fVar18 = _LC20 / fVar44;
    fVar44 = fVar44 * _LC20;
    fVar39 = (fVar19 + fVar43) * fVar18;
    fVar42 = (fVar32 - fVar27) * fVar18;
    fVar18 = (fVar2 + fVar25) * fVar18;
  }
  else if (fVar17 <= fVar44) {
    fVar39 = (fVar44 - (fVar18 + fVar17)) + _LC0;
    if (fVar39 < 0.0) {
      fVar39 = sqrtf(fVar39);
    }
    else {
      fVar39 = SQRT(fVar39);
    }
    fVar42 = _LC20 / fVar39;
    fVar39 = fVar39 * _LC20;
    fVar44 = (fVar43 + fVar19) * fVar42;
    fVar18 = (fVar27 + fVar32) * fVar42;
    fVar42 = (fVar25 - fVar2) * fVar42;
  }
  else {
LAB_001073c4:
    fVar18 = (fVar17 - (fVar18 + fVar44)) + _LC0;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    fVar42 = _LC20 / fVar18;
    fVar18 = fVar18 * _LC20;
    fVar39 = (fVar32 + fVar27) * fVar42;
    fVar44 = (fVar2 + fVar25) * fVar42;
    fVar42 = (fVar43 - fVar19) * fVar42;
  }
  fVar22 = _LC20;
  fVar27 = *(float *)(param_3 + 0x80);
  fVar35 = *(float *)(param_3 + 0x84);
  fVar17 = *(float *)(param_3 + 0x88);
  fVar46 = *(float *)(param_3 + 0x70);
  fVar31 = *(float *)(param_3 + 0x74);
  fVar21 = *(float *)(param_3 + 0x78);
  *(float *)(this + 0x60) = fVar44;
  *(float *)(this + 100) = fVar39;
  *(float *)(this + 0x68) = fVar18;
  *(float *)(this + 0x6c) = fVar42;
  fVar19 = *(float *)(param_3 + 0x70);
  fVar32 = *(float *)(param_3 + 0x74);
  fVar2 = *(float *)(param_3 + 0x78);
  fVar43 = *(float *)(param_3 + 0x80);
  fVar25 = *(float *)(param_3 + 0x84);
  fVar30 = fVar35 * fVar46 - fVar31 * fVar27;
  fVar35 = fVar17 * fVar31 - fVar21 * fVar35;
  fVar17 = fVar27 * fVar21 - fVar46 * fVar17;
  fVar27 = *(float *)(param_3 + 0x88);
  fVar46 = fVar19 + fVar25 + fVar30;
  if (0.0 <= fVar46) {
    iVar5 = *(int *)(param_3 + 0x28);
    fVar19 = SQRT(fVar46 + fVar8);
    fVar31 = fVar22 / fVar19;
    fVar19 = fVar19 * fVar22;
    fVar25 = (fVar27 - fVar17) * fVar31;
    fVar46 = (fVar35 - fVar2) * fVar31;
    fVar31 = fVar31 * (fVar32 - fVar43);
    *(float *)(this + 0x70) = fVar25;
    *(float *)(this + 0x74) = fVar46;
    *(float *)(this + 0x78) = fVar31;
    *(float *)(this + 0x7c) = fVar19;
    goto joined_r0x001079d7;
  }
  if (fVar25 <= fVar19) {
    if (fVar19 < fVar30) goto LAB_001074b5;
    fVar25 = (fVar19 - (fVar30 + fVar25)) + fVar8;
    if (fVar25 < 0.0) {
      fVar25 = sqrtf(fVar25);
    }
    else {
      fVar25 = SQRT(fVar25);
    }
    fVar19 = fVar22 / fVar25;
    fVar25 = fVar25 * fVar22;
    fVar46 = (fVar43 + fVar32) * fVar19;
    fVar31 = (fVar2 + fVar35) * fVar19;
    fVar19 = (fVar27 - fVar17) * fVar19;
  }
  else if (fVar30 <= fVar25) {
    fVar46 = (fVar25 - (fVar19 + fVar30)) + fVar8;
    if (fVar46 < 0.0) {
      fVar46 = sqrtf(fVar46);
    }
    else {
      fVar46 = SQRT(fVar46);
    }
    fVar19 = fVar22 / fVar46;
    fVar46 = fVar46 * fVar22;
    fVar25 = (fVar32 + fVar43) * fVar19;
    fVar31 = (fVar27 + fVar17) * fVar19;
    fVar19 = (fVar35 - fVar2) * fVar19;
  }
  else {
LAB_001074b5:
    fVar31 = (fVar30 - (fVar19 + fVar25)) + fVar8;
    if (fVar31 < 0.0) {
      fVar31 = sqrtf(fVar31);
    }
    else {
      fVar31 = SQRT(fVar31);
    }
    fVar19 = fVar22 / fVar31;
    fVar31 = fVar31 * fVar22;
    fVar25 = (fVar2 + fVar35) * fVar19;
    fVar46 = (fVar27 + fVar17) * fVar19;
    fVar19 = (fVar32 - fVar43) * fVar19;
  }
  iVar5 = *(int *)(param_3 + 0x28);
  *(float *)(this + 0x70) = fVar25;
  *(float *)(this + 0x74) = fVar46;
  *(float *)(this + 0x78) = fVar31;
  *(float *)(this + 0x7c) = fVar19;
joined_r0x001079d7:
  if (iVar5 == 1) {
    fVar33 = (float)(__LC49 ^ *(uint *)(param_1 + 0x10));
    fVar36 = (float)(_UNK_0010e9b4 ^ *(uint *)(param_1 + 0x14));
    fVar37 = (float)(_UNK_0010e9b8 ^ *(uint *)(param_1 + 0x18));
    fVar38 = (float)(_UNK_0010e9bc ^ *(uint *)(param_1 + 0x1c));
    fVar32 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    fVar43 = *(float *)(param_1 + 8);
    fVar35 = fVar36 + fVar36;
    fVar27 = fVar33 + fVar33;
    fVar47 = fVar37 * (fVar37 + fVar37);
    fVar30 = (fVar37 + fVar37) * fVar38;
    fVar40 = fVar37 * fVar27 - fVar35 * fVar38;
    fVar21 = fVar37 * fVar27 + fVar35 * fVar38;
    fVar45 = (fVar8 - fVar33 * fVar27) - fVar35 * fVar36;
    fVar22 = fVar37 * fVar35 - fVar27 * fVar38;
    fVar34 = fVar27 * fVar38 + fVar37 * fVar35;
    fVar41 = fVar36 * fVar27 + fVar30;
    fVar30 = fVar36 * fVar27 - fVar30;
    fVar23 = (fVar8 - fVar47) - fVar33 * fVar27;
    fVar24 = (float)(__LC49 ^ *(uint *)(param_2 + 0x10));
    fVar26 = (float)(_UNK_0010e9b4 ^ *(uint *)(param_2 + 0x14));
    fVar28 = (float)(_UNK_0010e9b8 ^ *(uint *)(param_2 + 0x18));
    fVar29 = (float)(_UNK_0010e9bc ^ *(uint *)(param_2 + 0x1c));
    fVar47 = (fVar8 - fVar35 * fVar36) - fVar47;
    fVar27 = *(float *)(param_3 + 0x30);
    fVar35 = *(float *)(param_3 + 0x34);
    fVar17 = *(float *)(param_3 + 0x38);
    *(float *)(this + 0x40) =
         fVar17 * fVar21 + fVar27 * fVar47 + fVar35 * fVar30 +
         (0.0 - (fVar32 * fVar47 + fVar2 * fVar30 + fVar43 * fVar21));
    *(float *)(this + 0x44) =
         fVar17 * fVar22 + fVar27 * fVar41 + fVar35 * fVar23 +
         (0.0 - (fVar32 * fVar41 + fVar2 * fVar23 + fVar43 * fVar22));
    *(float *)(this + 0x48) =
         fVar17 * fVar45 + fVar27 * fVar40 + fVar35 * fVar34 +
         (0.0 - (fVar32 * fVar40 + fVar2 * fVar34 + fVar43 * fVar45));
    *(float *)(this + 0x4c) = fVar17 * 0.0 + fVar27 * 0.0 + fVar35 * 0.0 + 1.0;
    *(float *)(this + 0x60) =
         (fVar36 * fVar18 + fVar33 * fVar42 + fVar44 * fVar38) - fVar37 * fVar39;
    *(float *)(this + 100) = fVar37 * fVar44 + fVar36 * fVar42 + (fVar39 * fVar38 - fVar33 * fVar18)
    ;
    *(float *)(this + 0x68) =
         fVar37 * fVar42 + ((fVar33 * fVar39 + fVar18 * fVar38) - fVar36 * fVar44);
    *(float *)(this + 0x6c) =
         ((fVar42 * fVar38 - fVar33 * fVar44) - fVar36 * fVar39) - fVar37 * fVar18;
    fVar18 = *(float *)param_2;
    fVar32 = *(float *)(param_2 + 4);
    fVar2 = *(float *)(param_2 + 8);
    fVar43 = fVar26 + fVar26;
    fVar27 = fVar28 * (fVar28 + fVar28);
    fVar17 = (fVar28 + fVar28) * fVar29;
    fVar44 = fVar24 + fVar24;
    fVar22 = fVar28 * fVar44 - fVar43 * fVar29;
    fVar30 = fVar28 * fVar43 - fVar44 * fVar29;
    fVar21 = fVar28 * fVar44 + fVar43 * fVar29;
    fVar42 = fVar44 * fVar29 + fVar28 * fVar43;
    fVar23 = (fVar8 - fVar24 * fVar44) - fVar26 * fVar43;
    fVar33 = fVar26 * fVar44 - fVar17;
    fVar17 = fVar26 * fVar44 + fVar17;
    fVar35 = (fVar8 - fVar26 * fVar43) - fVar27;
    fVar39 = (fVar8 - fVar27) - fVar24 * fVar44;
    fVar44 = *(float *)(param_3 + 0x60);
    fVar43 = *(float *)(param_3 + 100);
    fVar27 = *(float *)(param_3 + 0x68);
    *(float *)(this + 0x50) =
         fVar27 * fVar21 + fVar44 * fVar35 + fVar43 * fVar33 +
         (0.0 - (fVar18 * fVar35 + fVar32 * fVar33 + fVar2 * fVar21));
    *(float *)(this + 0x54) =
         fVar27 * fVar30 + fVar44 * fVar17 + fVar43 * fVar39 +
         (0.0 - (fVar18 * fVar17 + fVar32 * fVar39 + fVar2 * fVar30));
    *(float *)(this + 0x58) =
         fVar27 * fVar23 + fVar44 * fVar22 + fVar43 * fVar42 +
         (0.0 - (fVar18 * fVar22 + fVar32 * fVar42 + fVar2 * fVar23));
    *(float *)(this + 0x5c) = fVar27 * 0.0 + fVar44 * 0.0 + fVar43 * 0.0 + 1.0;
    *(float *)(this + 0x70) =
         (fVar24 * fVar19 + fVar29 * fVar25 + fVar26 * fVar31) - fVar28 * fVar46;
    *(float *)(this + 0x74) =
         fVar28 * fVar25 + (fVar29 * fVar46 - fVar24 * fVar31) + fVar26 * fVar19;
    *(float *)(this + 0x78) =
         fVar28 * fVar19 + ((fVar24 * fVar46 + fVar29 * fVar31) - fVar26 * fVar25);
    *(float *)(this + 0x7c) =
         ((fVar29 * fVar19 - fVar24 * fVar25) - fVar26 * fVar46) - fVar28 * fVar31;
  }
  else {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar6;
    uVar6 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(this + 0x58) = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0xb4);
  pSVar13 = this + 0x88;
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(param_3 + 0xac);
  *(undefined8 *)(this + 0x90) = uVar6;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_3 + 0xbc);
  uVar6 = *(undefined8 *)(param_3 + 0xcc);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(param_3 + 0xc4);
  *(undefined8 *)(this + 0xa8) = uVar6;
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_3 + 0xd4);
  uVar6 = *(undefined8 *)(param_3 + 0xe4);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(param_3 + 0xdc);
  *(undefined8 *)(this + 0xc0) = uVar6;
  uVar6 = *(undefined8 *)(param_3 + 0xf4);
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_3 + 0xec);
  *(undefined8 *)(this + 0xd0) = uVar6;
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_3 + 0xfc);
  do {
    if (*(float *)(pSVar13 + 0x18) <= *(float *)pSVar13 &&
        *(float *)pSVar13 != *(float *)(pSVar13 + 0x18)) {
      *(float *)(pSVar13 + 0x18) = 0.0;
      *(float *)pSVar13 = 0.0;
    }
    pSVar13 = pSVar13 + 4;
  } while (this + 0x94 != pSVar13);
  if (SVar3 == (SixDOFConstraintSettings)0x0) {
    fVar18 = *(float *)(this + 0xb0);
    uVar20 = (uint)fVar18 ^ _LC45;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
      uVar20 = _LC51;
    }
    *(float *)(this + 0xb0) = fVar18;
    fVar18 = *(float *)(this + 0xb4);
    uVar16 = (uint)fVar18 ^ _LC45;
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
      uVar16 = _LC51;
    }
    *(float *)(this + 0xb4) = fVar18;
    *(ulong *)(this + 0x98) = CONCAT44(uVar16,uVar20);
  }
  fVar19 = _LC83;
  fVar18 = _LC82;
  pSVar13 = this + 0xac;
  do {
    fVar32 = *(float *)(pSVar13 + -0x18);
    fVar2 = *(float *)pSVar13;
    if (fVar32 < fVar19) {
      *(float *)(pSVar13 + -0x18) = fVar19;
      if (fVar2 < fVar19) {
        *(float *)pSVar13 = fVar19;
      }
      else if (_LC82 < fVar2) {
LAB_00107672:
        *(float *)pSVar13 = fVar18;
      }
    }
    else {
      if (fVar32 <= _LC82) {
        fVar44 = fVar19;
        if (fVar19 <= fVar2) goto LAB_00107665;
LAB_00107944:
        *(float *)pSVar13 = fVar44;
        if (fVar32 <= fVar44) goto LAB_00107676;
      }
      else {
        *(float *)(pSVar13 + -0x18) = fVar18;
        fVar32 = fVar18;
        if (fVar19 <= fVar2) {
LAB_00107665:
          fVar44 = fVar2;
          if (_LC82 < fVar2) goto LAB_00107672;
          goto LAB_00107944;
        }
      }
      *(float *)pSVar13 = 0.0;
      *(float *)(pSVar13 + -0x18) = 0.0;
    }
LAB_00107676:
    pSVar13 = pSVar13 + 4;
  } while (pSVar13 != this + 0xb8);
  SwingTwistConstraintPart::SetLimits
            ((SwingTwistConstraintPart *)(this + 0x420),*(float *)(this + 0x94),
             *(float *)(this + 0xac),*(float *)(this + 0x98),*(float *)(this + 0xb0),
             *(float *)(this + 0x9c),*(float *)(this + 0xb4));
  uVar16 = 0;
  *(undefined2 *)(this + 0x80) = 0;
  uVar20 = _LC45;
  fVar18 = _LC9;
  uVar14 = 0;
  do {
    while( true ) {
      SVar15 = SUB41(uVar16,0);
      bVar7 = (byte)uVar14;
      fVar19 = fVar18;
      if (2 < uVar14) {
        fVar19 = _LC82;
      }
      if (*(float *)(this + uVar14 * 4 + 0x88) < *(float *)(this + uVar14 * 4 + 0xa0)) break;
      this[0x81] = (SixDOFConstraint)((byte)this[0x81] | (byte)(1 << (bVar7 & 0x1f)));
LAB_001076ea:
      uVar14 = uVar14 + 1;
      if (uVar14 == 6) goto LAB_00107750;
    }
    if (((float)((uint)fVar19 ^ uVar20) < *(float *)(this + uVar14 * 4 + 0x88)) ||
       (*(float *)(this + uVar14 * 4 + 0xa0) < fVar19)) goto LAB_001076ea;
    uVar14 = uVar14 + 1;
    uVar16 = uVar16 | 1 << (bVar7 & 0x1f);
    SVar15 = SUB41(uVar16,0);
    this[0x80] = SVar15;
  } while (uVar14 != 6);
LAB_00107750:
  if ((SVar15 != (SixDOFConstraint)0x0) || (this[0x81] != (SixDOFConstraint)0x0)) {
    *(undefined4 *)(this + 0x29c) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    *(undefined4 *)(this + 0x2dc) = 0;
    *(undefined4 *)(this + 0x2e8) = 0;
    *(undefined4 *)(this + 0x31c) = 0;
    *(undefined4 *)(this + 0x328) = 0;
    *(undefined4 *)(this + 0x630) = 0;
    *(undefined4 *)(this + 0x63c) = 0;
    *(undefined4 *)(this + 0x670) = 0;
    *(undefined4 *)(this + 0x67c) = 0;
    *(undefined4 *)(this + 0x6b0) = 0;
    *(undefined4 *)(this + 0x6bc) = 0;
    *(undefined4 *)(this + 0x6e0) = 0;
    *(undefined4 *)(this + 0x6ec) = 0;
    *(undefined4 *)(this + 0x710) = 0;
    *(undefined4 *)(this + 0x71c) = 0;
    *(undefined4 *)(this + 0x740) = 0;
    *(undefined4 *)(this + 0x74c) = 0;
    *(undefined1 (*) [16])(this + 0x3d0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x3e0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x3f0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x400) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x5b0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x5c0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x5d0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x5e0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this + 0x5f0) = (undefined1  [16])0x0;
  }
  SVar15 = (SixDOFConstraint)0x1;
  if ((*(float *)(this + 0xbc) <= 0.0) && (*(float *)(this + 200) <= 0.0)) {
    SVar15 = (SixDOFConstraint)(0.0 < *(float *)(this + 0xd4));
  }
  this[0x85] = SVar15;
  uVar6 = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(this + 0x184) = *(undefined8 *)(param_3 + 0x90);
  *(undefined8 *)(this + 0x18c) = uVar6;
  *(undefined8 *)(this + 0x194) = *(undefined8 *)(param_3 + 0xa0);
  memmove(this + 0xdc,param_3 + 0x100,0xa8);
  CacheTranslationMotorActive(this);
  CacheRotationMotorActive(this);
  return;
}



/* JPH::SixDOFConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

SixDOFConstraint * __thiscall
JPH::SixDOFConstraintSettings::Create(SixDOFConstraintSettings *this,Body *param_1,Body *param_2)

{
  SixDOFConstraint *this_00;
  
  this_00 = (SixDOFConstraint *)(*Allocate)(0x750);
  SixDOFConstraint::SixDOFConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* JPH::SixDOFConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::SixDOFConstraint::RestoreState(SixDOFConstraint *this,StateRecorder *param_1)

{
  SixDOFConstraint *pSVar1;
  SixDOFConstraint *pSVar2;
  
  JPH::Constraint::RestoreState((StateRecorder *)this);
  pSVar1 = this + 0x2a8;
  do {
    pSVar2 = pSVar1 + 0x40;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,pSVar1,4);
    pSVar1 = pSVar2;
  } while (this + 0x368 != pSVar2);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x410,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4cc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x4fc,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x52c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x5f0,0xc);
  pSVar1 = this + 0x63c;
  do {
    pSVar2 = pSVar1 + 0x40;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,pSVar1,4);
    pSVar1 = pSVar2;
  } while (pSVar2 != this + 0x6fc);
  pSVar1 = this + 0x6ec;
  do {
    pSVar2 = pSVar1 + 0x30;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,pSVar1,4);
    pSVar1 = pSVar2;
  } while (pSVar2 != this + 0x77c);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x19c,0x18);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1c0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1d0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1e0,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x1f0,0x10);
  pSVar1 = this;
  CacheTranslationMotorActive(this);
  CacheRotationMotorActive(pSVar1);
  this[0x84] = (SixDOFConstraint)0x0;
  if (*(int *)(this + 0x1a8) == 2) {
    this[0x84] = (SixDOFConstraint)0x1;
  }
  if (*(int *)(this + 0x1ac) == 2) {
    this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 2);
  }
  if (*(int *)(this + 0x1b0) == 2) {
    this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 4);
  }
  return;
}



/* JPH::SixDOFConstraint::CacheRotationPositionMotorActive() */

void __thiscall JPH::SixDOFConstraint::CacheRotationPositionMotorActive(SixDOFConstraint *this)

{
  this[0x84] = (SixDOFConstraint)0x0;
  if (*(int *)(this + 0x1a8) == 2) {
    this[0x84] = (SixDOFConstraint)0x1;
  }
  if (*(int *)(this + 0x1ac) == 2) {
    this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 2);
  }
  if (*(int *)(this + 0x1b0) != 2) {
    return;
  }
  this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 4);
  return;
}



/* JPH::SixDOFConstraint::CacheHasSpringLimits() */

void __thiscall JPH::SixDOFConstraint::CacheHasSpringLimits(SixDOFConstraint *this)

{
  if ((*(float *)(this + 0xbc) <= 0.0) && (*(float *)(this + 200) <= 0.0)) {
    this[0x85] = (SixDOFConstraint)(0.0 < *(float *)(this + 0xd4));
    return;
  }
  this[0x85] = (SixDOFConstraint)0x1;
  return;
}



/* JPH::SixDOFConstraint::SetMotorState(JPH::SixDOFConstraintSettings::EAxis, JPH::EMotorState) */

void __thiscall
JPH::SixDOFConstraint::SetMotorState(SixDOFConstraint *this,uint param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)(int)param_2;
  if (*(int *)(this + lVar1 * 4 + 0x19c) != param_3) {
    *(int *)(this + (lVar1 + 100) * 4 + 0xc) = param_3;
    if (param_2 < 3) {
      *(undefined4 *)(this + lVar1 * 0x40 + 0x630) = 0;
      *(undefined4 *)(this + lVar1 * 0x40 + 0x63c) = 0;
      CacheTranslationMotorActive(this);
      return;
    }
    *(undefined4 *)(this + (long)(int)(param_2 - 3) * 0x30 + 0x6e0) = 0;
    *(undefined4 *)(this + (long)(int)(param_2 - 3) * 0x30 + 0x6ec) = 0;
    CacheRotationMotorActive(this);
    this[0x84] = (SixDOFConstraint)0x0;
    if (*(int *)(this + 0x1a8) == 2) {
      this[0x84] = (SixDOFConstraint)0x1;
    }
    if (*(int *)(this + 0x1ac) == 2) {
      this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 2);
    }
    if (*(int *)(this + 0x1b0) == 2) {
      this[0x84] = (SixDOFConstraint)((byte)this[0x84] | 4);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SixDOFConstraint::SetTargetOrientationCS(JPH::Quat) */

void JPH::SixDOFConstraint::SetTargetOrientationCS
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  ulong local_38;
  long lStack_30;
  long local_20;
  
  fVar4 = (float)((ulong)param_2 >> 0x20);
  fVar6 = (float)param_2;
  fVar5 = (float)((ulong)param_1 >> 0x20);
  fVar2 = (float)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar3 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
  if (fVar3 == 0.0) {
    fStack_40 = fVar6;
    local_48 = (undefined1  [8])param_1;
    fStack_3c = fVar4;
    local_38 = __LC47;
    lStack_30 = _UNK_0010e8d8;
  }
  else {
    local_38 = (ulong)(uint)(fVar2 / fVar3);
    lStack_30 = (ulong)(uint)(fVar4 / fVar3) << 0x20;
    auVar1._8_4_ = fVar3;
    auVar1._4_4_ = (fVar6 * fVar4 + fVar2 * fVar5) / fVar3;
    auVar1._0_4_ = (fVar5 * fVar4 - fVar2 * fVar6) / fVar3;
    auVar1._12_4_ = 0;
    _local_48 = auVar1 << 0x20;
  }
  SwingTwistConstraintPart::ClampSwingTwist
            ((SwingTwistConstraintPart *)(param_3 + 0x420),local_48,(Quat *)&local_38,&local_4c);
  if (local_4c == 0) {
    *(float *)(param_3 + 0x1f0) = fVar2;
    *(float *)(param_3 + 500) = fVar5;
    *(float *)(param_3 + 0x1f8) = fVar6;
    *(float *)(param_3 + 0x1fc) = fVar4;
  }
  else {
    fVar2 = (float)local_38;
    fVar3 = (float)(local_38 >> 0x20);
    fVar5 = (float)lStack_30;
    fVar6 = (float)((ulong)lStack_30 >> 0x20);
    *(float *)(param_3 + 0x1f0) =
         ((float)local_48._0_4_ * fVar6 + fStack_3c * fVar2 + (float)local_48._4_4_ * fVar5) -
         fStack_40 * fVar3;
    *(float *)(param_3 + 500) =
         (fStack_3c * fVar3 - (float)local_48._0_4_ * fVar5) + (float)local_48._4_4_ * fVar6 +
         fStack_40 * fVar2;
    *(float *)(param_3 + 0x1f8) =
         (((float)local_48._0_4_ * fVar3 + fStack_3c * fVar5) - (float)local_48._4_4_ * fVar2) +
         fStack_40 * fVar6;
    *(float *)(param_3 + 0x1fc) =
         ((fStack_3c * fVar6 - (float)local_48._0_4_ * fVar2) - (float)local_48._4_4_ * fVar3) -
         fStack_40 * fVar5;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::SixDOFConstraint::GetSubType() const */

undefined8 JPH::SixDOFConstraint::GetSubType(void)

{
  return 7;
}



/* JPH::SixDOFConstraint::GetConstraintToBody1Matrix() const */

void JPH::SixDOFConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long in_RSI;
  float fVar6;
  float fVar7;
  undefined1 (*in_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = _LC0;
  uVar2 = *(undefined8 *)(in_RSI + 0x68);
  fVar4 = (float)*(undefined8 *)(in_RSI + 0x60);
  fVar6 = (float)uVar2;
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x60) >> 0x20);
  fVar11 = fVar4 + fVar4;
  *(undefined8 *)in_RDI[3] = *(undefined8 *)(in_RSI + 0x40);
  fVar12 = fVar5 + fVar5;
  fVar7 = (float)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  *(float *)(in_RDI[3] + 0xc) = fVar3;
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar10 = (fVar6 + fVar6) * fVar7;
  auVar9._0_4_ = (fVar3 - fVar5 * fVar12) - fVar13;
  auVar9._4_4_ = fVar5 * fVar11 + fVar10;
  auVar9._8_4_ = fVar6 * fVar11 - fVar12 * fVar7;
  auVar9._12_4_ = 0;
  *in_RDI = auVar9;
  *(ulong *)in_RDI[1] = CONCAT44((fVar3 - fVar13) - fVar4 * fVar11,fVar5 * fVar11 - fVar10);
  *(ulong *)(in_RDI[1] + 8) = (ulong)(uint)(fVar11 * fVar7 + fVar6 * fVar12);
  auVar8._4_4_ = fVar6 * fVar12 - fVar11 * fVar7;
  auVar8._0_4_ = fVar6 * fVar11 + fVar12 * fVar7;
  auVar8._8_4_ = (fVar3 - fVar4 * fVar11) - fVar5 * fVar12;
  auVar8._12_4_ = 0;
  in_RDI[2] = auVar8;
  return;
}



/* JPH::SixDOFConstraint::GetConstraintToBody2Matrix() const */

void JPH::SixDOFConstraint::GetConstraintToBody2Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long in_RSI;
  float fVar6;
  float fVar7;
  undefined1 (*in_RDI) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = _LC0;
  uVar2 = *(undefined8 *)(in_RSI + 0x78);
  fVar4 = (float)*(undefined8 *)(in_RSI + 0x70);
  fVar6 = (float)uVar2;
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x70) >> 0x20);
  fVar11 = fVar4 + fVar4;
  *(undefined8 *)in_RDI[3] = *(undefined8 *)(in_RSI + 0x50);
  fVar12 = fVar5 + fVar5;
  fVar7 = (float)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  *(float *)(in_RDI[3] + 0xc) = fVar3;
  fVar13 = fVar6 * (fVar6 + fVar6);
  fVar10 = (fVar6 + fVar6) * fVar7;
  auVar9._0_4_ = (fVar3 - fVar5 * fVar12) - fVar13;
  auVar9._4_4_ = fVar5 * fVar11 + fVar10;
  auVar9._8_4_ = fVar6 * fVar11 - fVar12 * fVar7;
  auVar9._12_4_ = 0;
  *in_RDI = auVar9;
  *(ulong *)in_RDI[1] = CONCAT44((fVar3 - fVar13) - fVar4 * fVar11,fVar5 * fVar11 - fVar10);
  *(ulong *)(in_RDI[1] + 8) = (ulong)(uint)(fVar11 * fVar7 + fVar6 * fVar12);
  auVar8._4_4_ = fVar6 * fVar12 - fVar11 * fVar7;
  auVar8._0_4_ = fVar6 * fVar11 + fVar12 * fVar7;
  auVar8._8_4_ = (fVar3 - fVar4 * fVar11) - fVar5 * fVar12;
  auVar8._12_4_ = 0;
  in_RDI[2] = auVar8;
  return;
}



/* JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings() */

void __thiscall
JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings(SixDOFConstraintSettings *this)

{
  return;
}



/* JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings() */

void __thiscall
JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings(SixDOFConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00108b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::SixDOFConstraint::~SixDOFConstraint() */

void __thiscall JPH::SixDOFConstraint::~SixDOFConstraint(SixDOFConstraint *this)

{
  return;
}



/* JPH::SixDOFConstraint::~SixDOFConstraint() */

void __thiscall JPH::SixDOFConstraint::~SixDOFConstraint(SixDOFConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00108b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::TwoBodyConstraint::IsActive() const */

TwoBodyConstraint __thiscall JPH::TwoBodyConstraint::IsActive(TwoBodyConstraint *this)

{
  long lVar1;
  
  if (this[0x1a] != (TwoBodyConstraint)0x0) {
    lVar1 = *(long *)(*(long *)(this + 0x28) + 0x48);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x70) == -1)) {
      lVar1 = *(long *)(*(long *)(this + 0x30) + 0x48);
      if (lVar1 == 0) {
        return (TwoBodyConstraint)0x0;
      }
      if (*(int *)(lVar1 + 0x70) == -1) {
        return (TwoBodyConstraint)0x0;
      }
    }
    if (*(char *)(*(long *)(this + 0x30) + 0x78) != '\x02') {
      return (TwoBodyConstraint)(*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02');
    }
  }
  return this[0x1a];
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float *in_RDX;
  long in_RSI;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar18;
  uint uVar19;
  undefined1 auVar17 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_10;
  
  uVar6 = _UNK_0010e8d8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar10 = (float)*(undefined8 *)(in_RSI + 0x38);
  fVar11 = (float)((ulong)*(undefined8 *)(in_RSI + 0x38) >> 0x20);
  fVar27 = fVar10 * (fVar10 + fVar10);
  fVar7 = (float)*(undefined8 *)(in_RSI + 0x30);
  fVar21 = (fVar10 + fVar10) * fVar11;
  fVar8 = (float)((ulong)*(undefined8 *)(in_RSI + 0x30) >> 0x20);
  lVar9 = 0;
  fVar25 = fVar7 + fVar7;
  fVar26 = fVar8 + fVar8;
  local_58 = (_LC0 - fVar8 * fVar26) - fVar27;
  register0x00001284 = fVar8 * fVar25 + fVar21;
  register0x00001288 = fVar10 * fVar25 - fVar26 * fVar11;
  register0x0000128c = 0;
  local_48._4_4_ = (_LC0 - fVar27) - fVar7 * fVar25;
  local_48._0_4_ = fVar8 * fVar25 - fVar21;
  fVar21 = in_RDX[8];
  fVar27 = in_RDX[9];
  fVar24 = in_RDX[10];
  fVar12 = in_RDX[0xb];
  local_48._8_4_ = fVar25 * fVar11 + fVar10 * fVar26;
  local_48._12_4_ = 0;
  fVar13 = *in_RDX;
  fVar14 = in_RDX[1];
  fVar15 = in_RDX[2];
  fVar22 = in_RDX[3];
  fVar23 = in_RDX[4];
  fVar2 = in_RDX[5];
  fVar3 = in_RDX[6];
  fVar4 = in_RDX[7];
  local_38._4_4_ = fVar10 * fVar26 - fVar25 * fVar11;
  local_38._0_4_ = fVar10 * fVar25 + fVar26 * fVar11;
  local_38._8_4_ = (_LC0 - fVar7 * fVar25) - fVar8 * fVar26;
  local_38._12_4_ = 0;
  do {
    fVar7 = *(float *)(local_58 + lVar9);
    fVar8 = *(float *)(local_58 + lVar9 + 4);
    fVar10 = *(float *)(local_58 + lVar9 + 8);
    *(float *)((long)local_98 + lVar9) = fVar10 * fVar21 + fVar7 * fVar13 + fVar8 * fVar23;
    *(float *)((long)local_98 + lVar9 + 4) = fVar10 * fVar27 + fVar7 * fVar14 + fVar8 * fVar2;
    *(float *)((long)local_98 + lVar9 + 8) = fVar10 * fVar24 + fVar7 * fVar15 + fVar8 * fVar3;
    *(float *)((long)local_98 + lVar9 + 0xc) = fVar10 * fVar12 + fVar7 * fVar22 + fVar8 * fVar4;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x30);
  fVar21 = *(float *)(in_RSI + 0x20);
  fVar27 = *(float *)(in_RSI + 0x24);
  fVar24 = *(float *)(in_RSI + 0x28);
  bVar1 = *(byte *)(in_RSI + 0x7a);
  fVar14 = fVar27 * local_98[4];
  fVar15 = fVar27 * local_98[5];
  fVar27 = fVar27 * local_98[6];
  fVar12 = fVar21 * local_98[0];
  fVar13 = fVar21 * local_98[1];
  fVar21 = fVar21 * local_98[2];
  fVar22 = fVar24 * local_98[8];
  fVar23 = fVar24 * local_98[9];
  fVar24 = fVar24 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC47;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar5._4_4_ = _UNK_0010e8e4;
  auVar5._0_4_ = __LC18;
  auVar5._8_4_ = _UNK_0010e8e8;
  auVar5._12_4_ = _UNK_0010e8ec;
  auVar17 = auVar17 & auVar5;
  uVar16 = -(uint)(auVar17._0_4_ == __LC18);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_0010e8e4);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_0010e8e8);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_0010e8ec);
  *(uint *)param_1 =
       (uint)(fVar14 * local_98[4] + fVar12 * local_98[0] + fVar22 * local_98[8]) & uVar16;
  *(uint *)(param_1 + 4) =
       (uint)(fVar14 * local_98[5] + fVar12 * local_98[1] + fVar22 * local_98[9]) & uVar16 & uVar18;
  *(uint *)(param_1 + 8) =
       (uint)(fVar14 * local_98[6] + fVar12 * local_98[2] + fVar22 * local_98[10]) & uVar16 & uVar19
  ;
  *(uint *)(param_1 + 0xc) =
       (uint)(fVar14 * local_98[7] + fVar12 * local_98[3] + fVar22 * local_98[0xb]) &
       uVar16 & uVar20;
  *(uint *)(param_1 + 0x10) =
       (uint)(fVar15 * local_98[4] + fVar13 * local_98[0] + fVar23 * local_98[8]) & uVar18 & uVar16;
  *(uint *)(param_1 + 0x14) =
       (uint)(fVar15 * local_98[5] + fVar13 * local_98[1] + fVar23 * local_98[9]) & uVar18;
  *(uint *)(param_1 + 0x18) =
       (uint)(fVar15 * local_98[6] + fVar13 * local_98[2] + fVar23 * local_98[10]) & uVar18 & uVar19
  ;
  *(uint *)(param_1 + 0x1c) =
       (uint)(fVar15 * local_98[7] + fVar13 * local_98[3] + fVar23 * local_98[0xb]) &
       uVar18 & uVar20;
  *(uint *)(param_1 + 0x20) =
       (uint)(fVar27 * local_98[4] + fVar21 * local_98[0] + fVar24 * local_98[8]) & uVar19 & uVar16;
  *(uint *)(param_1 + 0x24) =
       (uint)(fVar27 * local_98[5] + fVar21 * local_98[1] + fVar24 * local_98[9]) & uVar19 & uVar18;
  *(uint *)(param_1 + 0x28) =
       (uint)(fVar27 * local_98[6] + fVar21 * local_98[2] + fVar24 * local_98[10]) & uVar19;
  *(uint *)(param_1 + 0x2c) =
       (uint)(fVar27 * local_98[7] + fVar21 * local_98[3] + fVar24 * local_98[0xb]) &
       uVar19 & uVar20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddRotationStep(JPH::Vec3) */

void JPH::Body::AddRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= _LC19) {
    return;
  }
  fVar11 = _LC20 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC51 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_0010e8f4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_0010e8f8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010e8fc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC23 * fVar17 + _LC20);
  iVar14 = (int)(_LC23 * fVar18 + _LC20);
  iVar15 = (int)(_LC23 * fVar19 + _LC20);
  iVar16 = (int)(_LC23 * fVar20 + _LC20);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC26 * fVar4) - _LC28 * fVar4) - fVar4 * _LC30;
  fVar18 = ((fVar18 - _LC26 * fVar6) - _LC28 * fVar6) - fVar6 * _LC30;
  fVar7 = ((fVar19 - _LC26 * fVar7) - _LC28 * fVar7) - fVar7 * _LC30;
  fVar9 = ((fVar20 - _LC26 * fVar9) - _LC28 * fVar9) - fVar9 * _LC30;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC32 * fVar4 + _LC34) * fVar4 + _LC36) * fVar4 * fVar4 - _LC20 * fVar4) + _LC0;
  fVar20 = (((_LC32 * fVar22 + _LC34) * fVar22 + _LC36) * fVar22 * fVar22 - _LC20 * fVar22) + _LC0;
  fVar8 = (((_LC32 * fVar24 + _LC34) * fVar24 + _LC36) * fVar24 * fVar24 - _LC20 * fVar24) + _LC0;
  fVar10 = (((_LC32 * fVar26 + _LC34) * fVar26 + _LC36) * fVar26 * fVar26 - _LC20 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC39 * fVar4 + _LC41) * fVar4 + _LC43) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC39 * fVar22 + _LC41) * fVar22 + _LC43) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC39 * fVar24 + _LC41) * fVar24 + _LC43) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC39 * fVar26 + _LC41) * fVar26 + _LC43) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC44 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC51 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC44 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC51 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_0010e994 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_0010e8f4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_0010e994 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_0010e8f4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_0010e998 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_0010e8f8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_0010e998 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_0010e8f8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010e99c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010e8fc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010e99c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010e8fc ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::SubRotationStep(JPH::Vec3) */

void JPH::Body::SubRotationStep(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  float fVar11;
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  
  fVar2 = (float)param_2;
  fVar4 = (float)((ulong)param_1 >> 0x20);
  auVar5._0_4_ = SQRT(fVar2 * fVar2 + (float)param_1 * (float)param_1 + 0.0 + fVar4 * fVar4);
  if (auVar5._0_4_ <= _LC19) {
    return;
  }
  fVar11 = _LC46 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC51 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_0010e8f4 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_0010e8f8 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010e8fc & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC23 * fVar17 + _LC20);
  iVar14 = (int)(_LC23 * fVar18 + _LC20);
  iVar15 = (int)(_LC23 * fVar19 + _LC20);
  iVar16 = (int)(_LC23 * fVar20 + _LC20);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC26 * fVar4) - _LC28 * fVar4) - fVar4 * _LC30;
  fVar18 = ((fVar18 - _LC26 * fVar6) - _LC28 * fVar6) - fVar6 * _LC30;
  fVar7 = ((fVar19 - _LC26 * fVar7) - _LC28 * fVar7) - fVar7 * _LC30;
  fVar9 = ((fVar20 - _LC26 * fVar9) - _LC28 * fVar9) - fVar9 * _LC30;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC32 * fVar4 + _LC34) * fVar4 + _LC36) * fVar4 * fVar4 - _LC20 * fVar4) + _LC0;
  fVar20 = (((_LC32 * fVar22 + _LC34) * fVar22 + _LC36) * fVar22 * fVar22 - _LC20 * fVar22) + _LC0;
  fVar8 = (((_LC32 * fVar24 + _LC34) * fVar24 + _LC36) * fVar24 * fVar24 - _LC20 * fVar24) + _LC0;
  fVar10 = (((_LC32 * fVar26 + _LC34) * fVar26 + _LC36) * fVar26 * fVar26 - _LC20 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC39 * fVar4 + _LC41) * fVar4 + _LC43) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC39 * fVar22 + _LC41) * fVar22 + _LC43) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC39 * fVar24 + _LC41) * fVar24 + _LC43) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC39 * fVar26 + _LC41) * fVar26 + _LC43) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC44 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC51 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC44 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC51 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_0010e994 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_0010e8f4 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_0010e994 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_0010e8f4 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_0010e998 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_0010e8f8 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_0010e998 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_0010e8f8 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010e99c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010e8fc & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010e99c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010e8fc ^
                              ((uint)fVar10 & uVar27 | ~uVar27 & (uint)fVar9))));
  fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  fVar19 = fVar8 * fVar18 + (fVar22 * fVar9 - fVar2 * fVar4) + fVar6 * fVar7;
  fVar20 = ((fVar2 * fVar22 + fVar4 * fVar9) - fVar6 * fVar18) + fVar8 * fVar7;
  fVar17 = (fVar4 * fVar18 + fVar2 * fVar8 + fVar6 * fVar9) - fVar22 * fVar7;
  fVar4 = ((fVar9 * fVar8 - fVar2 * fVar6) - fVar18 * fVar22) - fVar4 * fVar7;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar17;
  auVar12._8_4_ = fVar20;
  auVar12._12_4_ = fVar4;
  auVar3._0_4_ = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20 + fVar4 * fVar4);
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  auVar5 = divps(auVar12,auVar3);
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44 const&,
   JPH::Vec3, JPH::Body const&, JPH::Mat44 const&, JPH::Vec3) */

void JPH::PointConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,float param_4,
               float *param_1,long param_2,float *param_7,long param_8,float *param_9)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar20;
  undefined1 auVar19 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1a8;
  float fStack_1a4;
  float local_198;
  float fStack_194;
  undefined1 local_178 [4];
  float afStack_174 [3];
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138 [16];
  undefined1 local_f8 [4];
  float afStack_f4 [3];
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_b8 [4];
  float afStack_b4 [3];
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_78 [4];
  float fStack_74;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38 [2];
  long local_30;
  
  local_1a8 = (float)param_1_00;
  fStack_1a4 = (float)((ulong)param_1_00 >> 0x20);
  fVar21 = param_7[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar24 = param_7[7];
  fStack_194 = (float)((ulong)param_3 >> 0x20);
  fVar25 = param_9[4];
  fVar26 = param_9[5];
  fVar27 = param_9[6];
  fVar28 = param_9[7];
  fVar2 = param_7[0xb];
  fVar13 = local_1a8 * *param_7 + fStack_1a4 * param_7[4] + param_2_00 * param_7[8];
  fVar14 = local_1a8 * param_7[1] + fStack_1a4 * param_7[5] + param_2_00 * param_7[9];
  fVar15 = local_1a8 * param_7[2] + fStack_1a4 * param_7[6] + param_2_00 * param_7[10];
  local_198 = (float)param_3;
  fVar3 = *param_9;
  fVar4 = param_9[1];
  fVar5 = param_9[2];
  fVar6 = param_9[3];
  *param_1 = fVar13;
  param_1[1] = fVar14;
  param_1[2] = fVar15;
  param_1[3] = local_1a8 * fVar21 + fStack_1a4 * fVar24 + param_2_00 * fVar2;
  fVar21 = param_9[9];
  fVar24 = param_9[10];
  fVar2 = param_9[0xb];
  cVar1 = *(char *)(param_2 + 0x78);
  param_1[4] = param_4 * param_9[8] + fStack_194 * fVar25 + local_198 * fVar3;
  param_1[5] = param_4 * fVar21 + fStack_194 * fVar26 + local_198 * fVar4;
  param_1[6] = param_4 * fVar24 + fStack_194 * fVar27 + local_198 * fVar5;
  param_1[7] = param_4 * fVar2 + fStack_194 * fVar28 + local_198 * fVar6;
  if (cVar1 == '\x02') {
    lVar10 = *(long *)(param_2 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_f8);
    uVar20 = _UNK_0010e8d8;
    uVar18 = __LC47;
    fVar21 = *(float *)(lVar10 + 0x58);
    fVar25 = (float)((uint)fVar14 ^ _LC45);
    fVar24 = (float)((uint)fVar15 ^ _LC45);
    fVar26 = (float)((uint)fVar13 ^ _LC45);
    local_98 = CONCAT44(fVar26,fVar14);
    uStack_90 = 0;
    local_a8._4_4_ = 0;
    local_a8._0_4_ = fVar24;
    fStack_a0 = fVar13;
    fStack_9c = 0.0;
    auVar17._4_4_ = fVar25;
    auVar17._0_4_ = fVar15;
    auVar17._8_8_ = 0;
    _local_b8 = auVar17 << 0x20;
    lVar10 = 0;
    do {
      fVar27 = *(float *)(local_b8 + lVar10);
      fVar28 = *(float *)(local_b8 + lVar10 + 4);
      fVar2 = *(float *)(local_b8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(local_78 + lVar10) =
           fVar2 * (float)local_d8 + fVar27 * (float)local_f8 + fVar28 * (float)local_e8._0_4_;
      *(float *)(local_78 + lVar10 + 4) =
           fVar2 * local_d8._4_4_ + fVar27 * afStack_f4[0] + fVar28 * (float)local_e8._4_4_;
      *(float *)(local_78 + lVar10 + 8) =
           fVar2 * (float)uStack_d0 + fVar27 * afStack_f4[1] + fVar28 * fStack_e0;
      *(float *)(local_78 + lVar10 + 0xc) =
           fVar2 * uStack_d0._4_4_ + fVar27 * afStack_f4[2] + fVar28 * fStack_dc;
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    *(undefined8 *)(param_1 + 8) = _local_78;
    *(undefined8 *)(param_1 + 10) = uStack_70;
    local_48 = uVar18;
    uStack_40 = uVar20;
    *(undefined1 (*) [8])(param_1 + 0xc) = local_68;
    *(undefined8 *)(param_1 + 0xe) = uStack_60;
    *(undefined1 (*) [8])(param_1 + 0x10) = local_58;
    *(undefined8 *)(param_1 + 0x12) = uStack_50;
    uVar7 = _UNK_0010e8d8;
    *(undefined8 *)(param_1 + 0x14) = __LC47;
    *(undefined8 *)(param_1 + 0x16) = uVar7;
    lVar10 = 0;
    do {
      fVar27 = *(float *)((Mat44 *)local_f8 + lVar10);
      fVar28 = *(float *)(local_f8 + lVar10 + 4);
      fVar2 = *(float *)(local_f8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(local_78 + lVar10) = fVar2 * fVar14 + fVar27 * 0.0 + fVar28 * fVar24;
      *(float *)(local_78 + lVar10 + 4) = fVar2 * fVar26 + fVar27 * fVar15 + fVar28 * 0.0;
      *(float *)(local_78 + lVar10 + 8) = fVar2 * 0.0 + fVar27 * fVar25 + fVar28 * fVar13;
      *(float *)(local_78 + lVar10 + 0xc) = fVar2 * 0.0 + fVar27 * 0.0 + fVar28 * 0.0;
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    local_148._8_8_ = uVar20;
    local_148._0_8_ = uVar18;
    afStack_174[0] =
         fVar14 * (float)local_58._4_4_ + fVar24 * (float)local_68._4_4_ + fStack_74 * 0.0;
    local_178 = (undefined1  [4])
                (fVar14 * (float)local_58._0_4_ +
                fVar24 * (float)local_68._0_4_ + (float)local_78 * 0.0);
    afStack_174[1] = fVar14 * (float)uStack_50 + fVar24 * (float)uStack_60 + (float)uStack_70 * 0.0;
    afStack_174[2] = fVar14 * uStack_50._4_4_ + fVar24 * uStack_60._4_4_ + uStack_70._4_4_ * 0.0;
    local_158._4_4_ =
         fVar13 * (float)local_68._4_4_ + fVar25 * fStack_74 + (float)local_58._4_4_ * 0.0;
    local_158._0_4_ =
         fVar13 * (float)local_68._0_4_ + fVar25 * (float)local_78 + (float)local_58._0_4_ * 0.0;
    fStack_150 = fVar13 * (float)uStack_60 + fVar25 * (float)uStack_70 + (float)uStack_50 * 0.0;
    fStack_14c = fVar13 * uStack_60._4_4_ + fVar25 * uStack_70._4_4_ + uStack_50._4_4_ * 0.0;
    local_168._4_4_ =
         fVar15 * fStack_74 + (float)local_68._4_4_ * 0.0 + fVar26 * (float)local_58._4_4_;
    local_168._0_4_ =
         fVar15 * (float)local_78 + (float)local_68._0_4_ * 0.0 + fVar26 * (float)local_58._0_4_;
    fStack_160 = fVar15 * (float)uStack_70 + (float)uStack_60 * 0.0 + fVar26 * (float)uStack_50;
    fStack_15c = fVar15 * uStack_70._4_4_ + uStack_60._4_4_ * 0.0 + fVar26 * uStack_50._4_4_;
  }
  else {
    fVar21 = 0.0;
    _local_178 = (undefined1  [16])0x0;
    _local_168 = (undefined1  [16])0x0;
    _local_158 = (undefined1  [16])0x0;
    local_148 = (undefined1  [16])0x0;
    uVar18 = __LC47;
    uVar20 = _UNK_0010e8d8;
  }
  pfVar8 = (float *)local_78;
  if (*(char *)(param_8 + 0x78) == '\x02') {
    lVar10 = *(long *)(param_8 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_138);
    local_1a8 = (float)*(undefined8 *)(param_1 + 4);
    fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
    fVar26 = (float)((uint)fVar27 ^ _LC45);
    fVar24 = (float)*(long *)(param_1 + 6);
    fVar28 = (float)((uint)local_1a8 ^ _LC45);
    _local_f8 = *(long *)(param_1 + 6) << 0x20;
    fVar25 = (float)((uint)fVar24 ^ _LC45);
    fVar21 = fVar21 + *(float *)(lVar10 + 0x58);
    local_d8 = CONCAT44(fVar28,fVar27);
    uStack_d0 = 0;
    local_e8._4_4_ = 0;
    local_e8._0_4_ = fVar25;
    fStack_e0 = local_1a8;
    fStack_dc = 0.0;
    afStack_f4[1] = fVar26;
    afStack_f4[2] = 0.0;
    lVar10 = 0;
    do {
      fVar2 = *(float *)(local_f8 + lVar10);
      fVar3 = *(float *)(local_f8 + lVar10 + 4);
      fVar4 = *(float *)(local_f8 + lVar10 + 8);
      lVar9 = lVar10 + 0x10;
      *(float *)(lVar10 + (long)pfVar8) =
           fVar4 * local_138[8] + fVar3 * local_138[4] + fVar2 * local_138[0];
      *(float *)(local_78 + lVar10 + 4) =
           fVar4 * local_138[9] + fVar3 * local_138[5] + fVar2 * local_138[1];
      *(float *)(local_78 + lVar10 + 8) =
           fVar4 * local_138[10] + fVar3 * local_138[6] + fVar2 * local_138[2];
      *(float *)(local_78 + lVar10 + 0xc) =
           fVar4 * local_138[0xb] + fVar3 * local_138[7] + fVar2 * local_138[3];
      lVar10 = lVar9;
    } while (lVar9 != 0x30);
    local_48 = uVar18;
    uStack_40 = uVar20;
    lVar10 = 0;
    *(undefined8 *)(param_1 + 0x24) = uVar18;
    *(undefined8 *)(param_1 + 0x26) = uVar20;
    *(undefined8 *)(param_1 + 0x18) = _local_78;
    *(undefined8 *)(param_1 + 0x1a) = uStack_70;
    *(undefined1 (*) [8])(param_1 + 0x1c) = local_68;
    *(undefined8 *)(param_1 + 0x1e) = uStack_60;
    *(undefined1 (*) [8])(param_1 + 0x20) = local_58;
    *(undefined8 *)(param_1 + 0x22) = uStack_50;
    do {
      fVar2 = *(float *)((Mat44 *)local_138 + lVar10);
      fVar3 = *(float *)((long)local_138 + lVar10 + 4);
      fVar4 = *(float *)((long)local_138 + lVar10 + 8);
      *(float *)(local_b8 + lVar10) = fVar4 * fVar27 + fVar2 * 0.0 + fVar3 * fVar25;
      *(float *)(local_b8 + lVar10 + 4) = fVar4 * fVar28 + fVar2 * fVar24 + fVar3 * 0.0;
      *(float *)(local_b8 + lVar10 + 8) = fVar4 * 0.0 + fVar2 * fVar26 + fVar3 * local_1a8;
      *(float *)(local_b8 + lVar10 + 0xc) = fVar4 * 0.0 + fVar2 * 0.0 + fVar3 * 0.0;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x30);
    fStack_74 = fVar25 * (float)local_a8._4_4_ + afStack_b4[0] * 0.0 + fVar27 * local_98._4_4_;
    local_78 = (undefined1  [4])
               (fVar25 * (float)local_a8._0_4_ + (float)local_b8 * 0.0 + fVar27 * (float)local_98);
    uStack_70._0_4_ = fVar25 * fStack_a0 + afStack_b4[1] * 0.0 + fVar27 * (float)uStack_90;
    uStack_70._4_4_ = fVar25 * fStack_9c + afStack_b4[2] * 0.0 + fVar27 * uStack_90._4_4_;
    local_68._4_4_ = (float)local_a8._4_4_ * 0.0 + fVar24 * afStack_b4[0] + fVar28 * local_98._4_4_;
    local_68._0_4_ =
         (float)local_a8._0_4_ * 0.0 + fVar24 * (float)local_b8 + fVar28 * (float)local_98;
    uStack_60._0_4_ = fStack_a0 * 0.0 + fVar24 * afStack_b4[1] + fVar28 * (float)uStack_90;
    uStack_60._4_4_ = fStack_9c * 0.0 + fVar24 * afStack_b4[2] + fVar28 * uStack_90._4_4_;
    local_58._4_4_ =
         fVar26 * afStack_b4[0] + local_1a8 * (float)local_a8._4_4_ + local_98._4_4_ * 0.0;
    local_58._0_4_ =
         fVar26 * (float)local_b8 + local_1a8 * (float)local_a8._0_4_ + (float)local_98 * 0.0;
    uStack_50._0_4_ = fVar26 * afStack_b4[1] + local_1a8 * fStack_a0 + (float)uStack_90 * 0.0;
    uStack_50._4_4_ = fVar26 * afStack_b4[2] + local_1a8 * fStack_9c + uStack_90._4_4_ * 0.0;
    pfVar11 = (float *)local_178;
    pfVar12 = pfVar8;
    do {
      fVar24 = *pfVar12;
      fVar25 = pfVar12[1];
      fVar26 = pfVar12[2];
      fVar27 = pfVar12[3];
      pfVar12 = pfVar12 + 4;
      *pfVar11 = *pfVar11 + fVar24;
      pfVar11[1] = pfVar11[1] + fVar25;
      pfVar11[2] = pfVar11[2] + fVar26;
      pfVar11[3] = pfVar11[3] + fVar27;
      pfVar11 = pfVar11 + 4;
    } while (local_38 != pfVar12);
  }
  local_48 = uVar18;
  uStack_40 = uVar20;
  _local_78 = ZEXT416((uint)fVar21);
  _local_68 = ZEXT416((uint)fVar21) << 0x20;
  _local_58 = ZEXT416((uint)fVar21) << 0x40;
  pfVar11 = (float *)local_178;
  do {
    fVar21 = *pfVar8;
    fVar24 = pfVar8[1];
    fVar25 = pfVar8[2];
    fVar26 = pfVar8[3];
    pfVar8 = pfVar8 + 4;
    *pfVar11 = *pfVar11 + fVar21;
    pfVar11[1] = pfVar11[1] + fVar24;
    pfVar11[2] = pfVar11[2] + fVar25;
    pfVar11[3] = pfVar11[3] + fVar26;
    pfVar11 = pfVar11 + 4;
  } while (local_38 != pfVar8);
  auVar23._0_4_ =
       ((float)local_158._4_4_ * (float)local_168._0_4_ -
       (float)local_168._4_4_ * (float)local_158._0_4_) * afStack_174[1] +
       ((float)local_158._0_4_ * fStack_160 - (float)local_168._0_4_ * fStack_150) * afStack_174[0]
       + (fStack_150 * (float)local_168._4_4_ - fStack_160 * (float)local_158._4_4_) *
         (float)local_178 + 0.0;
  if (auVar23._0_4_ == 0.0) {
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x2c) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  }
  else {
    auVar23._4_4_ = auVar23._0_4_;
    auVar23._8_4_ = auVar23._0_4_;
    auVar23._12_4_ = auVar23._0_4_;
    *(undefined8 *)(param_1 + 0x34) = uVar18;
    *(undefined8 *)(param_1 + 0x36) = uVar20;
    auVar19._0_4_ = (float)local_168._4_4_ * fStack_150 - (float)local_158._4_4_ * fStack_160;
    auVar19._4_4_ = (float)local_158._4_4_ * afStack_174[1] - afStack_174[0] * fStack_150;
    auVar19._8_4_ = afStack_174[0] * fStack_160 - (float)local_168._4_4_ * afStack_174[1];
    auVar19._12_4_ = 0;
    auVar16._0_4_ =
         (float)local_158._4_4_ * (float)local_168._0_4_ -
         (float)local_168._4_4_ * (float)local_158._0_4_;
    auVar16._4_4_ =
         afStack_174[0] * (float)local_158._0_4_ - (float)local_158._4_4_ * (float)local_178;
    auVar16._8_4_ =
         (float)local_168._4_4_ * (float)local_178 - afStack_174[0] * (float)local_168._0_4_;
    auVar16._12_4_ = 0;
    auVar19 = divps(auVar19,auVar23);
    auVar17 = divps(auVar16,auVar23);
    *(undefined1 (*) [16])(param_1 + 0x28) = auVar19;
    auVar22._0_4_ = fStack_160 * (float)local_158._0_4_ - fStack_150 * (float)local_168._0_4_;
    auVar22._4_4_ = fStack_150 * (float)local_178 - afStack_174[1] * (float)local_158._0_4_;
    auVar22._8_4_ = afStack_174[1] * (float)local_168._0_4_ - fStack_160 * (float)local_178;
    auVar22._12_4_ = 0;
    auVar23 = divps(auVar22,auVar23);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar17;
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar23;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&) */

undefined8 __thiscall
JPH::PointConstraintPart::SolveVelocityConstraint
          (PointConstraintPart *this,Body *param_1,Body *param_2)

{
  Body BVar1;
  Body BVar2;
  byte bVar3;
  float *pfVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  undefined1 auVar31 [16];
  
  BVar1 = param_2[0x78];
  pfVar4 = *(float **)(param_2 + 0x48);
  fVar25 = *(float *)(this + 0x10);
  fVar22 = *(float *)(this + 0x14);
  fVar21 = *(float *)(this + 0x18);
  if (BVar1 == (Body)0x0) {
    fVar24 = 0.0;
    fVar27 = 0.0;
    fVar32 = 0.0;
    fVar19 = fVar25 * 0.0 - fVar22 * 0.0;
    fVar22 = fVar22 * 0.0 - fVar21 * 0.0;
    fVar25 = fVar21 * 0.0 - fVar25 * 0.0;
  }
  else {
    fVar24 = *pfVar4;
    fVar27 = pfVar4[1];
    fVar32 = pfVar4[2];
    fVar19 = fVar25 * pfVar4[5] - fVar22 * pfVar4[4];
    fVar22 = fVar22 * pfVar4[6] - fVar21 * pfVar4[5];
    fVar25 = fVar21 * pfVar4[4] - fVar25 * pfVar4[6];
  }
  fVar21 = *(float *)this;
  fVar9 = *(float *)(this + 4);
  fVar10 = *(float *)(this + 8);
  BVar2 = param_1[0x78];
  pfVar5 = *(float **)(param_1 + 0x48);
  if (BVar2 == (Body)0x0) {
    fVar23 = 0.0;
    fVar26 = 0.0;
    fVar20 = 0.0;
    auVar28._4_4_ = fVar10 * 0.0 - fVar21 * 0.0;
    auVar28._0_4_ = fVar9 * 0.0 - fVar10 * 0.0;
    auVar28._8_4_ = fVar21 * 0.0 - fVar9 * 0.0;
  }
  else {
    fVar20 = *pfVar5;
    fVar23 = pfVar5[1];
    fVar26 = pfVar5[2];
    auVar28._4_4_ = pfVar5[4] * fVar10 - fVar21 * pfVar5[6];
    auVar28._0_4_ = pfVar5[6] * fVar9 - fVar10 * pfVar5[5];
    auVar28._8_4_ = pfVar5[5] * fVar21 - fVar9 * pfVar5[4];
  }
  uVar18 = 0;
  fVar22 = ((fVar20 - auVar28._0_4_) - fVar24) + fVar22;
  fVar25 = ((fVar23 - auVar28._4_4_) - fVar27) + fVar25;
  fVar19 = ((fVar26 - auVar28._8_4_) - fVar32) + fVar19;
  fVar21 = fVar19 * *(float *)(this + 0xc0) +
           fVar22 * *(float *)(this + 0xa0) + fVar25 * *(float *)(this + 0xb0) +
           *(float *)(this + 0xd0);
  fVar24 = fVar19 * *(float *)(this + 0xc4) +
           fVar22 * *(float *)(this + 0xa4) + fVar25 * *(float *)(this + 0xb4) +
           *(float *)(this + 0xd4);
  fVar27 = fVar19 * *(float *)(this + 200) +
           fVar22 * *(float *)(this + 0xa8) + fVar25 * *(float *)(this + 0xb8) +
           *(float *)(this + 0xd8);
  fVar25 = fVar19 * *(float *)(this + 0xcc) +
           fVar22 * *(float *)(this + 0xac) + fVar25 * *(float *)(this + 0xbc) +
           *(float *)(this + 0xdc);
  *(float *)(this + 0xe0) = *(float *)(this + 0xe0) + fVar21;
  *(float *)(this + 0xe4) = *(float *)(this + 0xe4) + fVar24;
  *(float *)(this + 0xe8) = *(float *)(this + 0xe8) + fVar27;
  *(float *)(this + 0xec) = *(float *)(this + 0xec) + fVar25;
  auVar29._4_4_ = -(uint)(fVar24 == 0.0);
  auVar29._0_4_ = -(uint)(fVar21 == 0.0);
  auVar29._8_4_ = -(uint)(fVar27 == 0.0);
  auVar29._12_4_ = -(uint)(fVar25 == 0.0);
  uVar17 = movmskps((int)param_2,auVar29);
  if ((~uVar17 & 7) != 0) {
    if (BVar2 == (Body)0x2) {
      fVar22 = pfVar5[0x16];
      bVar3 = *(byte *)((long)pfVar5 + 0x7a);
      auVar30._1_3_ = 0;
      auVar30[0] = bVar3;
      auVar30[4] = bVar3;
      auVar30._5_3_ = 0;
      auVar30[8] = bVar3;
      auVar30._9_3_ = 0;
      auVar30[0xc] = bVar3;
      auVar30._13_3_ = 0;
      auVar16._4_4_ = _UNK_0010e8c4;
      auVar16._0_4_ = __LC14;
      auVar16._8_4_ = _UNK_0010e8c8;
      auVar16._12_4_ = _UNK_0010e8cc;
      auVar30 = auVar30 & auVar16;
      bVar6 = auVar30._4_4_ == _UNK_0010e8c4;
      bVar7 = auVar30._8_4_ == _UNK_0010e8c8;
      bVar8 = auVar30._12_4_ == _UNK_0010e8cc;
      *pfVar5 = (float)(-(uint)(auVar30._0_4_ == __LC14) & (uint)(*pfVar5 - fVar22 * fVar21));
      pfVar5[1] = (float)(-(uint)bVar6 & (uint)(pfVar5[1] - fVar22 * fVar24));
      pfVar5[2] = (float)(-(uint)bVar7 & (uint)(pfVar5[2] - fVar22 * fVar27));
      pfVar5[3] = (float)(-(uint)bVar8 & (uint)(pfVar5[3] - fVar22 * fVar25));
      fVar22 = *(float *)(this + 0x34);
      fVar32 = *(float *)(this + 0x38);
      fVar19 = *(float *)(this + 0x3c);
      fVar9 = *(float *)(this + 0x24);
      fVar10 = *(float *)(this + 0x28);
      fVar20 = *(float *)(this + 0x2c);
      fVar23 = *(float *)(this + 0x44);
      fVar26 = *(float *)(this + 0x48);
      fVar11 = *(float *)(this + 0x4c);
      fVar12 = *(float *)(this + 0x54);
      fVar13 = *(float *)(this + 0x58);
      fVar14 = *(float *)(this + 0x5c);
      pfVar5[4] = pfVar5[4] -
                  (fVar21 * *(float *)(this + 0x20) + fVar24 * *(float *)(this + 0x30) +
                   fVar27 * *(float *)(this + 0x40) + *(float *)(this + 0x50));
      pfVar5[5] = pfVar5[5] - (fVar21 * fVar9 + fVar24 * fVar22 + fVar27 * fVar23 + fVar12);
      pfVar5[6] = pfVar5[6] - (fVar21 * fVar10 + fVar24 * fVar32 + fVar27 * fVar26 + fVar13);
      pfVar5[7] = pfVar5[7] - (fVar21 * fVar20 + fVar24 * fVar19 + fVar27 * fVar11 + fVar14);
    }
    if (BVar1 == (Body)0x2) {
      bVar3 = *(byte *)((long)pfVar4 + 0x7a);
      fVar22 = pfVar4[0x16];
      uVar18 = 1;
      auVar31._1_3_ = 0;
      auVar31[0] = bVar3;
      auVar31[4] = bVar3;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar3;
      auVar31._9_3_ = 0;
      auVar31[0xc] = bVar3;
      auVar31._13_3_ = 0;
      auVar15._4_4_ = _UNK_0010e8c4;
      auVar15._0_4_ = __LC14;
      auVar15._8_4_ = _UNK_0010e8c8;
      auVar15._12_4_ = _UNK_0010e8cc;
      auVar31 = auVar31 & auVar15;
      bVar6 = auVar31._4_4_ == _UNK_0010e8c4;
      bVar7 = auVar31._8_4_ == _UNK_0010e8c8;
      bVar8 = auVar31._12_4_ == _UNK_0010e8cc;
      *pfVar4 = (float)((uint)(fVar22 * fVar21 + *pfVar4) & -(uint)(auVar31._0_4_ == __LC14));
      pfVar4[1] = (float)((uint)(fVar22 * fVar24 + pfVar4[1]) & -(uint)bVar6);
      pfVar4[2] = (float)((uint)(fVar22 * fVar27 + pfVar4[2]) & -(uint)bVar7);
      pfVar4[3] = (float)((uint)(fVar22 * fVar25 + pfVar4[3]) & -(uint)bVar8);
      fVar25 = *(float *)(this + 0x74);
      fVar22 = *(float *)(this + 0x78);
      fVar32 = *(float *)(this + 0x7c);
      fVar19 = *(float *)(this + 100);
      fVar9 = *(float *)(this + 0x68);
      fVar10 = *(float *)(this + 0x6c);
      fVar20 = *(float *)(this + 0x84);
      fVar23 = *(float *)(this + 0x88);
      fVar26 = *(float *)(this + 0x8c);
      fVar11 = *(float *)(this + 0x94);
      fVar12 = *(float *)(this + 0x98);
      fVar13 = *(float *)(this + 0x9c);
      pfVar4[4] = fVar27 * *(float *)(this + 0x80) +
                  fVar21 * *(float *)(this + 0x60) + fVar24 * *(float *)(this + 0x70) +
                  *(float *)(this + 0x90) + pfVar4[4];
      pfVar4[5] = fVar27 * fVar20 + fVar21 * fVar19 + fVar24 * fVar25 + fVar11 + pfVar4[5];
      pfVar4[6] = fVar27 * fVar23 + fVar21 * fVar9 + fVar24 * fVar22 + fVar12 + pfVar4[6];
      pfVar4[7] = fVar27 * fVar26 + fVar21 * fVar10 + fVar24 * fVar32 + fVar13 + pfVar4[7];
    }
    else {
      uVar18 = 1;
    }
  }
  return uVar18;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PointConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, float) const */

undefined8 __thiscall
JPH::PointConstraintPart::SolvePositionConstraint
          (PointConstraintPart *this,Body *param_1,Body *param_2,float param_3)

{
  PointConstraintPart *pPVar1;
  float fVar2;
  Body BVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long in_FS_OFFSET;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  float local_68 [18];
  long local_20;
  
  fVar2 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar9 = *(float *)(param_1 + 8);
  fVar10 = *(float *)(param_1 + 0xc);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar25 = ((*(float *)param_2 - fVar2) + *(float *)(this + 0x10)) - *(float *)this;
  fVar27 = ((*(float *)(param_2 + 4) - fVar8) + *(float *)(this + 0x14)) - *(float *)(this + 4);
  fVar28 = ((*(float *)(param_2 + 8) - fVar9) + *(float *)(this + 0x18)) - *(float *)(this + 8);
  auVar29._4_4_ = -(uint)(fVar27 == 0.0);
  auVar29._0_4_ = -(uint)(fVar25 == 0.0);
  auVar29._8_4_ = -(uint)(fVar28 == 0.0);
  auVar29._12_4_ =
       -(uint)(((*(float *)(param_2 + 0xc) - fVar10) + *(float *)(this + 0x1c)) -
               *(float *)(this + 0xc) == 0.0);
  uVar20 = movmskps(0,auVar29);
  if ((~uVar20 & 7) == 0) {
    uVar22 = 0;
  }
  else {
    fVar23 = (float)((uint)param_3 ^ _LC45);
    lVar21 = 0;
    do {
      pPVar1 = this + lVar21 + 0xa0;
      fVar30 = *(float *)(pPVar1 + 4);
      fVar31 = *(float *)(pPVar1 + 8);
      fVar11 = *(float *)(pPVar1 + 0xc);
      *(float *)((long)local_68 + lVar21) = *(float *)pPVar1 * fVar23;
      *(float *)((long)local_68 + lVar21 + 4) = fVar30 * fVar23;
      *(float *)((long)local_68 + lVar21 + 8) = fVar31 * fVar23;
      *(float *)((long)local_68 + lVar21 + 0xc) = fVar11 * fVar23;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x40);
    fVar23 = fVar25 * local_68[0] + fVar27 * local_68[4] + fVar28 * local_68[8] + local_68[0xc];
    fVar30 = fVar25 * local_68[1] + fVar27 * local_68[5] + fVar28 * local_68[9] + local_68[0xd];
    fVar31 = fVar25 * local_68[2] + fVar27 * local_68[6] + fVar28 * local_68[10] + local_68[0xe];
    fVar25 = fVar25 * local_68[3] + fVar27 * local_68[7] + fVar28 * local_68[0xb] + local_68[0xf];
    if (param_1[0x78] == (Body)0x2) {
      bVar4 = *(byte *)(*(long *)(param_1 + 0x48) + 0x7a);
      fVar27 = *(float *)(*(long *)(param_1 + 0x48) + 0x58);
      auVar24._1_3_ = 0;
      auVar24[0] = bVar4;
      auVar24[4] = bVar4;
      auVar24._5_3_ = 0;
      auVar24[8] = bVar4;
      auVar24._9_3_ = 0;
      auVar24[0xc] = bVar4;
      auVar24._13_3_ = 0;
      auVar19._4_4_ = _UNK_0010e8c4;
      auVar19._0_4_ = __LC14;
      auVar19._8_4_ = _UNK_0010e8c8;
      auVar19._12_4_ = _UNK_0010e8cc;
      auVar24 = auVar24 & auVar19;
      bVar5 = auVar24._4_4_ == _UNK_0010e8c4;
      bVar6 = auVar24._8_4_ == _UNK_0010e8c8;
      bVar7 = auVar24._12_4_ == _UNK_0010e8cc;
      fVar28 = *(float *)(this + 0x30);
      fVar11 = *(float *)(this + 0x34);
      fVar12 = *(float *)(this + 0x38);
      fVar13 = *(float *)(this + 0x3c);
      fVar14 = *(float *)(this + 0x20);
      fVar15 = *(float *)(this + 0x24);
      fVar16 = *(float *)(this + 0x28);
      fVar17 = *(float *)(this + 0x2c);
      *(float *)param_1 =
           fVar2 - (float)(-(uint)(auVar24._0_4_ == __LC14) & (uint)(fVar27 * fVar23));
      *(float *)(param_1 + 4) = fVar8 - (float)(-(uint)bVar5 & (uint)(fVar27 * fVar30));
      *(float *)(param_1 + 8) = fVar9 - (float)(-(uint)bVar6 & (uint)(fVar27 * fVar31));
      *(float *)(param_1 + 0xc) = fVar10 - (float)(-(uint)bVar7 & (uint)(fVar27 * fVar25));
      Body::SubRotationStep
                (CONCAT44(fVar23 * fVar15 + fVar30 * fVar11 + fVar31 * *(float *)(this + 0x44) +
                          *(float *)(this + 0x54),
                          fVar23 * fVar14 + fVar30 * fVar28 + fVar31 * *(float *)(this + 0x40) +
                          *(float *)(this + 0x50)),
                 CONCAT44(fVar23 * fVar17 + fVar30 * fVar13 + fVar31 * *(float *)(this + 0x4c) +
                          *(float *)(this + 0x5c),
                          fVar23 * fVar16 + fVar30 * fVar12 + fVar31 * *(float *)(this + 0x48) +
                          *(float *)(this + 0x58)),param_1);
      BVar3 = param_2[0x78];
    }
    else {
      BVar3 = param_2[0x78];
    }
    if (BVar3 == (Body)0x2) {
      bVar4 = *(byte *)(*(long *)(param_2 + 0x48) + 0x7a);
      fVar2 = *(float *)(*(long *)(param_2 + 0x48) + 0x58);
      auVar26._1_3_ = 0;
      auVar26[0] = bVar4;
      auVar26[4] = bVar4;
      auVar26._5_3_ = 0;
      auVar26[8] = bVar4;
      auVar26._9_3_ = 0;
      auVar26[0xc] = bVar4;
      auVar26._13_3_ = 0;
      auVar18._4_4_ = _UNK_0010e8c4;
      auVar18._0_4_ = __LC14;
      auVar18._8_4_ = _UNK_0010e8c8;
      auVar18._12_4_ = _UNK_0010e8cc;
      auVar26 = auVar26 & auVar18;
      bVar5 = auVar26._4_4_ == _UNK_0010e8c4;
      bVar6 = auVar26._8_4_ == _UNK_0010e8c8;
      bVar7 = auVar26._12_4_ == _UNK_0010e8cc;
      fVar8 = *(float *)(this + 0x70);
      fVar9 = *(float *)(this + 0x74);
      fVar10 = *(float *)(this + 0x78);
      fVar27 = *(float *)(this + 0x7c);
      *(float *)param_2 =
           (float)((uint)(fVar2 * fVar23) & -(uint)(auVar26._0_4_ == __LC14)) + *(float *)param_2;
      *(float *)(param_2 + 4) =
           (float)((uint)(fVar2 * fVar30) & -(uint)bVar5) + *(float *)(param_2 + 4);
      *(float *)(param_2 + 8) =
           (float)((uint)(fVar2 * fVar31) & -(uint)bVar6) + *(float *)(param_2 + 8);
      *(float *)(param_2 + 0xc) =
           (float)((uint)(fVar2 * fVar25) & -(uint)bVar7) + *(float *)(param_2 + 0xc);
      Body::AddRotationStep
                (CONCAT44(fVar23 * *(float *)(this + 100) + fVar30 * fVar9 +
                          fVar31 * *(float *)(this + 0x84) + *(float *)(this + 0x94),
                          fVar23 * *(float *)(this + 0x60) + fVar30 * fVar8 +
                          fVar31 * *(float *)(this + 0x80) + *(float *)(this + 0x90)),
                 CONCAT44(fVar23 * *(float *)(this + 0x6c) + fVar30 * fVar27 +
                          fVar31 * *(float *)(this + 0x8c) + *(float *)(this + 0x9c),
                          fVar23 * *(float *)(this + 0x68) + fVar30 * fVar10 +
                          fVar31 * *(float *)(this + 0x88) + *(float *)(this + 0x98)),param_2);
      uVar22 = 1;
    }
    else {
      uVar22 = 1;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Vec3, JPH::Body
   const&, JPH::Vec3, JPH::Vec3, float) */

void JPH::AxisConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2,undefined8 param_3,float param_4,
               undefined8 param_5,float param_6,float param_7,float *param_1,long param_9,
               long param_10)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
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
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar7 = _LC0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_9 + 0x78);
  fStack_174 = (float)((ulong)param_5 >> 0x20);
  local_168 = (float)param_1_00;
  fStack_164 = (float)((ulong)param_1_00 >> 0x20);
  fStack_154 = (float)((ulong)param_3 >> 0x20);
  local_178 = (float)param_5;
  local_158 = (float)param_3;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_10 + 0x48);
    fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
    fVar3 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_10 + 0x18);
    fVar14 = fVar4 + fVar4;
    fVar15 = fVar3 + fVar3;
    fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
    fVar16 = fVar5 * (fVar5 + fVar5);
    fVar8 = fVar6 * (fVar5 + fVar5);
    local_78._4_4_ = fVar3 * fVar14 + fVar8;
    local_78._0_4_ = (_LC0 - fVar3 * fVar15) - fVar16;
    local_78._8_4_ = fVar5 * fVar14 - fVar15 * fVar6;
    local_78._12_4_ = 0;
    local_68 = CONCAT44((_LC0 - fVar16) - fVar4 * fVar14,fVar3 * fVar14 - fVar8);
    uStack_60 = (ulong)(uint)(fVar14 * fVar6 + fVar5 * fVar15);
    local_58._4_4_ = fVar5 * fVar15 - fVar14 * fVar6;
    local_58._0_4_ = fVar5 * fVar14 + fVar15 * fVar6;
    local_58._8_4_ = (_LC0 - fVar4 * fVar14) - fVar3 * fVar15;
    local_58._12_4_ = 0;
    local_48 = __LC47;
    uStack_40 = _UNK_0010e8d8;
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
    fVar4 = *(float *)(lVar2 + 0x58);
    fVar3 = local_158 * fStack_174 - fStack_154 * local_178;
    fVar5 = fStack_154 * param_6 - param_4 * fStack_174;
    fVar6 = param_4 * local_178 - local_158 * param_6;
    *param_1 = param_6 * fStack_164 - param_2 * fStack_174;
    param_1[1] = local_178 * param_2 - local_168 * param_6;
    param_1[2] = fStack_174 * local_168 - fStack_164 * local_178;
    param_1[3] = fVar5;
    *(ulong *)(param_1 + 4) = CONCAT44(fVar3,fVar6);
    fVar8 = local_b8 * fVar5 + fVar6 * local_a8 + fVar3 * local_98;
    fVar14 = fStack_b4 * fVar5 + fVar6 * fStack_a4 + fVar3 * fStack_94;
    fVar15 = fStack_b0 * fVar5 + fVar6 * fStack_a0 + fVar3 * fStack_90;
    *(ulong *)(param_1 + 9) = CONCAT44(fVar14,fVar8);
    param_1[0xb] = fVar15;
    fVar4 = fVar3 * fVar15 + fVar14 * fVar6 + fVar5 * fVar8 + 0.0 + fVar4 + 0.0;
LAB_0010a2ff:
    if (fVar4 != 0.0) {
      param_1[0xe] = 0.0;
      fVar7 = fVar7 / fVar4;
      param_1[0xd] = param_7;
      goto LAB_0010a321;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar4 = *(float *)(*(long *)(param_9 + 0x48) + 0x58);
      fVar3 = (float)*(undefined8 *)(param_9 + 0x10);
      fVar6 = (float)*(undefined8 *)(param_9 + 0x18);
      fVar5 = (float)((ulong)*(undefined8 *)(param_9 + 0x10) >> 0x20);
      fVar15 = fVar3 + fVar3;
      fVar16 = fVar5 + fVar5;
      fVar8 = (float)((ulong)*(undefined8 *)(param_9 + 0x18) >> 0x20);
      fVar17 = fVar6 * (fVar6 + fVar6);
      fVar14 = (fVar6 + fVar6) * fVar8;
      local_78._0_4_ = (_LC0 - fVar5 * fVar16) - fVar17;
      local_78._4_4_ = fVar5 * fVar15 + fVar14;
      local_78._8_4_ = fVar6 * fVar15 - fVar16 * fVar8;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar15 * fVar8 + fVar6 * fVar16);
      local_68 = CONCAT44((_LC0 - fVar17) - fVar3 * fVar15,fVar5 * fVar15 - fVar14);
      local_58._4_4_ = fVar6 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar6 * fVar15 + fVar16 * fVar8;
      local_48 = __LC47;
      uStack_40 = _UNK_0010e8d8;
      local_58._8_4_ = (_LC0 - fVar3 * fVar15) - fVar5 * fVar16;
      local_58._12_4_ = 0;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_f8);
      cVar1 = *(char *)(param_10 + 0x78);
      if (cVar1 == '\x01') {
        fVar8 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar14 = fStack_164 * param_6 - param_2 * fStack_174;
        fVar15 = param_2 * local_178 - local_168 * param_6;
        fVar3 = local_f8 * fVar14 + fVar15 * local_e8 + fVar8 * local_d8;
        fVar5 = fStack_f4 * fVar14 + fVar15 * fStack_e4 + fVar8 * fStack_d4;
        fVar6 = fStack_f0 * fVar14 + fVar15 * fStack_e0 + fVar8 * fStack_d0;
        *param_1 = fVar14;
        param_1[1] = fVar15;
        param_1[2] = fVar8;
        param_1[3] = param_6 * fStack_154 - param_4 * fStack_174;
        param_1[4] = local_178 * param_4 - local_158 * param_6;
        param_1[5] = fStack_174 * local_158 - fStack_154 * local_178;
        param_1[6] = fVar3;
        param_1[7] = fVar5;
        param_1[8] = fVar6;
        fVar4 = fVar4 + fVar8 * fVar6 + fVar5 * fVar15 + fVar3 * fVar14 + 0.0;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_10 + 0x48);
        fVar3 = (float)*(undefined8 *)(param_10 + 0x18);
        fVar6 = (float)*(undefined8 *)(param_10 + 0x10);
        fVar14 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
        fVar15 = fVar6 + fVar6;
        fVar16 = fVar14 + fVar14;
        fVar5 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
        fVar17 = (fVar3 + fVar3) * fVar3;
        fVar8 = fVar5 * (fVar3 + fVar3);
        local_78._4_4_ = fVar8 + fVar14 * fVar15;
        local_78._0_4_ = (fVar7 - fVar14 * fVar16) - fVar17;
        local_78._8_4_ = fVar3 * fVar15 - fVar16 * fVar5;
        local_78._12_4_ = 0;
        local_68 = CONCAT44((fVar7 - fVar17) - fVar6 * fVar15,fVar14 * fVar15 - fVar8);
        uStack_60 = (ulong)(uint)(fVar15 * fVar5 + fVar3 * fVar16);
        local_58._4_4_ = fVar3 * fVar16 - fVar15 * fVar5;
        local_58._0_4_ = fVar3 * fVar15 + fVar16 * fVar5;
        local_48 = __LC47;
        uStack_40 = _UNK_0010e8d8;
        local_58._8_4_ = (fVar7 - fVar6 * fVar15) - fVar14 * fVar16;
        local_58._12_4_ = 0;
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
        fVar3 = *(float *)(lVar2 + 0x58);
        fVar11 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar12 = fStack_164 * param_6 - param_2 * fStack_174;
        fVar13 = param_2 * local_178 - local_168 * param_6;
        fVar17 = fStack_174 * local_158 - fStack_154 * local_178;
        fVar9 = param_6 * fStack_154 - param_4 * fStack_174;
        fVar10 = local_178 * param_4 - local_158 * param_6;
        fVar5 = local_f8 * fVar12 + fVar13 * local_e8 + fVar11 * local_d8;
        fVar6 = fStack_f4 * fVar12 + fVar13 * fStack_e4 + fVar11 * fStack_d4;
        fVar8 = fStack_f0 * fVar12 + fVar13 * fStack_e0 + fVar11 * fStack_d0;
        *param_1 = fVar12;
        param_1[1] = fVar13;
        param_1[2] = fVar11;
        param_1[3] = fVar9;
        fVar14 = local_b8 * fVar9 + fVar10 * local_a8 + fVar17 * local_98;
        fVar15 = fStack_b4 * fVar9 + fVar10 * fStack_a4 + fVar17 * fStack_94;
        fVar16 = fStack_b0 * fVar9 + fVar10 * fStack_a0 + fVar17 * fStack_90;
        param_1[4] = fVar10;
        param_1[5] = fVar17;
        param_1[6] = fVar5;
        param_1[7] = fVar6;
        param_1[8] = fVar8;
        param_1[9] = fVar14;
        param_1[10] = fVar15;
        param_1[0xb] = fVar16;
        fVar4 = fVar16 * fVar17 + fVar15 * fVar10 + fVar14 * fVar9 + 0.0 + fVar3 +
                fVar8 * fVar11 + fVar6 * fVar13 + fVar5 * fVar12 + 0.0 + fVar4;
      }
      else {
        if (cVar1 != '\0') goto LAB_0010a588;
        fVar3 = fStack_174 * local_168 - fStack_164 * local_178;
        fVar5 = param_6 * fStack_164 - param_2 * fStack_174;
        fVar6 = local_178 * param_2 - local_168 * param_6;
        param_1[2] = fVar3;
        *(ulong *)param_1 = CONCAT44(fVar6,fVar5);
        fVar8 = local_f8 * fVar5 + fVar6 * local_e8 + fVar3 * local_d8;
        fVar14 = fStack_f4 * fVar5 + fVar6 * fStack_e4 + fVar3 * fStack_d4;
        fVar15 = fStack_f0 * fVar5 + fVar6 * fStack_e0 + fVar3 * fStack_d0;
        *(ulong *)(param_1 + 6) = CONCAT44(fVar14,fVar8);
        param_1[8] = fVar15;
        fVar4 = fVar4 + fVar3 * fVar15 + fVar6 * fVar14 + fVar5 * fVar8 + 0.0;
      }
      goto LAB_0010a2ff;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_10 + 0x48);
      fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
      fVar3 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
      fVar5 = (float)*(undefined8 *)(param_10 + 0x18);
      fVar15 = fVar3 + fVar3;
      fVar14 = fVar4 + fVar4;
      fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
      fVar16 = fVar5 * (fVar5 + fVar5);
      fVar8 = fVar6 * (fVar5 + fVar5);
      local_78._0_4_ = (_LC0 - fVar3 * fVar15) - fVar16;
      local_78._4_4_ = fVar3 * fVar14 + fVar8;
      local_78._8_4_ = fVar5 * fVar14 - fVar15 * fVar6;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar14 * fVar6 + fVar5 * fVar15);
      local_68 = CONCAT44((_LC0 - fVar16) - fVar4 * fVar14,fVar3 * fVar14 - fVar8);
      local_58._4_4_ = fVar5 * fVar15 - fVar14 * fVar6;
      local_58._0_4_ = fVar5 * fVar14 + fVar15 * fVar6;
      local_58._8_4_ = (_LC0 - fVar4 * fVar14) - fVar3 * fVar15;
      local_58._12_4_ = 0;
      local_48 = __LC47;
      uStack_40 = _UNK_0010e8d8;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      fVar4 = *(float *)(lVar2 + 0x58);
      fVar8 = fStack_174 * local_158 - fStack_154 * local_178;
      fVar14 = param_6 * fStack_154 - param_4 * fStack_174;
      fVar15 = local_178 * param_4 - local_158 * param_6;
      param_1[5] = fVar8;
      *(ulong *)(param_1 + 3) = CONCAT44(fVar15,fVar14);
      fVar3 = local_b8 * fVar14 + fVar15 * local_a8 + fVar8 * local_98;
      fVar5 = fStack_b4 * fVar14 + fVar15 * fStack_a4 + fVar8 * fStack_94;
      fVar6 = fStack_b0 * fVar14 + fVar15 * fStack_a0 + fVar8 * fStack_90;
      *(ulong *)(param_1 + 9) = CONCAT44(fVar5,fVar3);
      param_1[0xb] = fVar6;
      fVar4 = fVar8 * fVar6 + fVar15 * fVar5 + fVar3 * fVar14 + 0.0 + fVar4 + 0.0;
      goto LAB_0010a2ff;
    }
  }
LAB_0010a588:
  param_1[0xf] = 0.0;
  fVar7 = 0.0;
LAB_0010a321:
  param_1[0xc] = fVar7;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AxisConstraintPart::CalculateConstraintPropertiesWithSettings(float, JPH::Body const&,
   JPH::Vec3, JPH::Body const&, JPH::Vec3, JPH::Vec3, float, float, JPH::SpringSettings const&) */

void JPH::AxisConstraintPart::CalculateConstraintPropertiesWithSettings
               (float param_1,undefined8 param_2_00,float param_3,undefined8 param_4,float param_5,
               undefined8 param_6,float param_7,float param_8,float *param_2,long param_10,
               long param_11,char *param_12,undefined8 param_13,undefined8 param_14,float param_15)

{
  char cVar1;
  long lVar2;
  float fVar3;
  long in_FS_OFFSET;
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
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  float local_158;
  float fStack_154;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulong uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  fVar3 = _LC0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_10 + 0x78);
  fStack_174 = (float)((ulong)param_6 >> 0x20);
  local_168 = (float)param_2_00;
  fStack_164 = (float)((ulong)param_2_00 >> 0x20);
  fStack_154 = (float)((ulong)param_4 >> 0x20);
  local_178 = (float)param_6;
  local_158 = (float)param_4;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_11 + 0x48);
    fVar5 = (float)*(undefined8 *)(param_11 + 0x10);
    fVar4 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
    fVar6 = (float)*(undefined8 *)(param_11 + 0x18);
    fVar14 = fVar5 + fVar5;
    fVar15 = fVar4 + fVar4;
    fVar7 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
    fVar16 = fVar6 * (fVar6 + fVar6);
    fVar8 = (fVar6 + fVar6) * fVar7;
    local_78._4_4_ = fVar4 * fVar14 + fVar8;
    local_78._0_4_ = (_LC0 - fVar4 * fVar15) - fVar16;
    local_78._8_4_ = fVar6 * fVar14 - fVar15 * fVar7;
    local_78._12_4_ = 0;
    local_68 = CONCAT44((_LC0 - fVar16) - fVar5 * fVar14,fVar4 * fVar14 - fVar8);
    uStack_60 = (ulong)(uint)(fVar14 * fVar7 + fVar6 * fVar15);
    local_58._4_4_ = fVar6 * fVar15 - fVar14 * fVar7;
    local_58._0_4_ = fVar6 * fVar14 + fVar15 * fVar7;
    local_58._8_4_ = (_LC0 - fVar5 * fVar14) - fVar4 * fVar15;
    local_58._12_4_ = 0;
    local_48 = __LC47;
    uStack_40 = _UNK_0010e8d8;
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
    fVar5 = *(float *)(lVar2 + 0x58);
    fVar4 = local_158 * fStack_174 - fStack_154 * local_178;
    fVar6 = fStack_154 * param_7 - param_5 * fStack_174;
    fVar7 = param_5 * local_178 - local_158 * param_7;
    *param_2 = param_7 * fStack_164 - param_3 * fStack_174;
    param_2[1] = local_178 * param_3 - local_168 * param_7;
    param_2[2] = fStack_174 * local_168 - fStack_164 * local_178;
    param_2[3] = fVar6;
    *(ulong *)(param_2 + 4) = CONCAT44(fVar4,fVar7);
    fVar8 = local_b8 * fVar6 + fVar7 * local_a8 + fVar4 * local_98;
    fVar14 = fStack_b4 * fVar6 + fVar7 * fStack_a4 + fVar4 * fStack_94;
    fVar15 = fStack_b0 * fVar6 + fVar7 * fStack_a0 + fVar4 * fStack_90;
    *(ulong *)(param_2 + 9) = CONCAT44(fVar14,fVar8);
    param_2[0xb] = fVar15;
    fVar5 = fVar4 * fVar15 + fVar6 * fVar8 + 0.0 + fVar14 * fVar7 + fVar5 + 0.0;
LAB_0010ada8:
    if (fVar5 != 0.0) {
      fVar4 = *(float *)(param_12 + 8);
      fVar6 = *(float *)(param_12 + 4);
      if (*param_12 == '\0') {
        fVar7 = fVar3 / fVar5;
        param_2[0xc] = fVar7;
        if (fVar6 <= 0.0) {
          param_2[0xe] = 0.0;
          param_2[0xd] = param_8;
        }
        else {
          fVar6 = fVar6 * _LC48;
          fVar8 = fVar6 * fVar6 * fVar7 * param_1;
          fVar4 = fVar3 / ((fVar6 * (fVar7 + fVar7) * fVar4 + fVar8) * param_1);
          param_2[0xe] = fVar4;
          *(ulong *)(param_2 + 0xc) =
               CONCAT44(fVar8 * fVar4 * param_15 + param_8,fVar3 / (fVar5 + fVar4));
        }
      }
      else if (fVar6 <= 0.0) {
        param_2[0xe] = 0.0;
        *(ulong *)(param_2 + 0xc) = CONCAT44(param_8,fVar3 / fVar5);
      }
      else {
        fVar4 = fVar3 / ((fVar4 + fVar6 * param_1) * param_1);
        param_2[0xe] = fVar4;
        *(ulong *)(param_2 + 0xc) =
             CONCAT44(fVar6 * param_1 * fVar4 * param_15 + param_8,fVar3 / (fVar5 + fVar4));
      }
      goto LAB_0010b09e;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar4 = (float)*(undefined8 *)(param_10 + 0x10);
      fVar7 = (float)*(undefined8 *)(param_10 + 0x18);
      fVar6 = (float)((ulong)*(undefined8 *)(param_10 + 0x10) >> 0x20);
      fVar5 = *(float *)(*(long *)(param_10 + 0x48) + 0x58);
      fVar15 = fVar4 + fVar4;
      fVar16 = fVar6 + fVar6;
      fVar8 = (float)((ulong)*(undefined8 *)(param_10 + 0x18) >> 0x20);
      fVar17 = fVar7 * (fVar7 + fVar7);
      fVar14 = (fVar7 + fVar7) * fVar8;
      local_78._0_4_ = (_LC0 - fVar6 * fVar16) - fVar17;
      local_78._4_4_ = fVar6 * fVar15 + fVar14;
      local_78._8_4_ = fVar7 * fVar15 - fVar16 * fVar8;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar15 * fVar8 + fVar7 * fVar16);
      local_68 = CONCAT44((_LC0 - fVar17) - fVar4 * fVar15,fVar6 * fVar15 - fVar14);
      local_58._4_4_ = fVar7 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar7 * fVar15 + fVar16 * fVar8;
      local_48 = __LC47;
      uStack_40 = _UNK_0010e8d8;
      local_58._8_4_ = (_LC0 - fVar4 * fVar15) - fVar6 * fVar16;
      local_58._12_4_ = 0;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_f8);
      cVar1 = *(char *)(param_11 + 0x78);
      if (cVar1 == '\x01') {
        fVar8 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar14 = fStack_164 * param_7 - param_3 * fStack_174;
        fVar15 = param_3 * local_178 - local_168 * param_7;
        fVar4 = local_f8 * fVar14 + fVar15 * local_e8 + fVar8 * local_d8;
        fVar6 = fStack_f4 * fVar14 + fVar15 * fStack_e4 + fVar8 * fStack_d4;
        fVar7 = fStack_f0 * fVar14 + fVar15 * fStack_e0 + fVar8 * fStack_d0;
        *param_2 = fVar14;
        param_2[1] = fVar15;
        param_2[2] = fVar8;
        param_2[3] = param_7 * fStack_154 - param_5 * fStack_174;
        param_2[4] = local_178 * param_5 - local_158 * param_7;
        param_2[5] = fStack_174 * local_158 - fStack_154 * local_178;
        param_2[6] = fVar4;
        param_2[7] = fVar6;
        param_2[8] = fVar7;
        fVar5 = fVar5 + fVar8 * fVar7 + fVar14 * fVar4 + 0.0 + fVar6 * fVar15;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_11 + 0x48);
        fVar4 = (float)*(undefined8 *)(param_11 + 0x18);
        fVar7 = (float)*(undefined8 *)(param_11 + 0x10);
        fVar14 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
        fVar15 = fVar7 + fVar7;
        fVar16 = fVar14 + fVar14;
        fVar6 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
        fVar17 = (fVar4 + fVar4) * fVar4;
        fVar8 = fVar6 * (fVar4 + fVar4);
        local_78._0_4_ = (fVar3 - fVar14 * fVar16) - fVar17;
        local_78._4_4_ = fVar8 + fVar14 * fVar15;
        local_78._8_4_ = fVar4 * fVar15 - fVar16 * fVar6;
        local_78._12_4_ = 0;
        local_68 = CONCAT44((fVar3 - fVar17) - fVar7 * fVar15,fVar14 * fVar15 - fVar8);
        uStack_60 = (ulong)(uint)(fVar15 * fVar6 + fVar4 * fVar16);
        local_58._4_4_ = fVar4 * fVar16 - fVar15 * fVar6;
        local_58._0_4_ = fVar4 * fVar15 + fVar16 * fVar6;
        local_58._8_4_ = (fVar3 - fVar7 * fVar15) - fVar14 * fVar16;
        local_58._12_4_ = 0;
        local_48 = __LC47;
        uStack_40 = _UNK_0010e8d8;
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
        fVar4 = *(float *)(lVar2 + 0x58);
        fVar11 = local_168 * fStack_174 - fStack_164 * local_178;
        fVar12 = fStack_164 * param_7 - param_3 * fStack_174;
        fVar13 = param_3 * local_178 - local_168 * param_7;
        fVar17 = fStack_174 * local_158 - fStack_154 * local_178;
        fVar9 = param_7 * fStack_154 - param_5 * fStack_174;
        fVar10 = local_178 * param_5 - local_158 * param_7;
        fVar14 = local_f8 * fVar12 + fVar13 * local_e8 + fVar11 * local_d8;
        fVar15 = fStack_f4 * fVar12 + fVar13 * fStack_e4 + fVar11 * fStack_d4;
        fVar16 = fStack_f0 * fVar12 + fVar13 * fStack_e0 + fVar11 * fStack_d0;
        fVar6 = local_b8 * fVar9 + fVar10 * local_a8 + fVar17 * local_98;
        fVar7 = fStack_b4 * fVar9 + fVar10 * fStack_a4 + fVar17 * fStack_94;
        fVar8 = fStack_b0 * fVar9 + fVar10 * fStack_a0 + fVar17 * fStack_90;
        *param_2 = fVar12;
        param_2[1] = fVar13;
        param_2[2] = fVar11;
        param_2[3] = fVar9;
        param_2[4] = fVar10;
        param_2[5] = fVar17;
        param_2[6] = fVar14;
        param_2[7] = fVar15;
        param_2[8] = fVar16;
        param_2[9] = fVar6;
        param_2[10] = fVar7;
        param_2[0xb] = fVar8;
        fVar5 = fVar17 * fVar8 + fVar7 * fVar10 + fVar6 * fVar9 + 0.0 + fVar4 +
                fVar16 * fVar11 + fVar15 * fVar13 + fVar14 * fVar12 + 0.0 + fVar5;
      }
      else {
        if (cVar1 != '\0') goto LAB_0010b090;
        fVar4 = fStack_174 * local_168 - fStack_164 * local_178;
        fVar6 = param_7 * fStack_164 - param_3 * fStack_174;
        fVar7 = local_178 * param_3 - local_168 * param_7;
        param_2[2] = fVar4;
        *(ulong *)param_2 = CONCAT44(fVar7,fVar6);
        fVar8 = local_f8 * fVar6 + fVar7 * local_e8 + fVar4 * local_d8;
        fVar14 = fStack_f4 * fVar6 + fVar7 * fStack_e4 + fVar4 * fStack_d4;
        fVar15 = fStack_f0 * fVar6 + fVar7 * fStack_e0 + fVar4 * fStack_d0;
        *(ulong *)(param_2 + 6) = CONCAT44(fVar14,fVar8);
        param_2[8] = fVar15;
        fVar5 = fVar5 + fVar4 * fVar15 + fVar7 * fVar14 + fVar6 * fVar8 + 0.0;
      }
      goto LAB_0010ada8;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_11 + 0x48);
      fVar5 = (float)*(undefined8 *)(param_11 + 0x10);
      fVar4 = (float)((ulong)*(undefined8 *)(param_11 + 0x10) >> 0x20);
      fVar6 = (float)*(undefined8 *)(param_11 + 0x18);
      fVar15 = fVar4 + fVar4;
      fVar14 = fVar5 + fVar5;
      fVar7 = (float)((ulong)*(undefined8 *)(param_11 + 0x18) >> 0x20);
      fVar16 = fVar6 * (fVar6 + fVar6);
      fVar8 = (fVar6 + fVar6) * fVar7;
      local_78._0_4_ = (_LC0 - fVar4 * fVar15) - fVar16;
      local_78._4_4_ = fVar4 * fVar14 + fVar8;
      local_78._8_4_ = fVar6 * fVar14 - fVar15 * fVar7;
      local_78._12_4_ = 0;
      uStack_60 = (ulong)(uint)(fVar14 * fVar7 + fVar6 * fVar15);
      local_68 = CONCAT44((_LC0 - fVar16) - fVar5 * fVar14,fVar4 * fVar14 - fVar8);
      local_58._4_4_ = fVar6 * fVar15 - fVar14 * fVar7;
      local_58._0_4_ = fVar6 * fVar14 + fVar15 * fVar7;
      local_58._8_4_ = (_LC0 - fVar5 * fVar14) - fVar4 * fVar15;
      local_58._12_4_ = 0;
      local_48 = __LC47;
      uStack_40 = _UNK_0010e8d8;
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      fVar5 = *(float *)(lVar2 + 0x58);
      fVar8 = fStack_174 * local_158 - local_178 * fStack_154;
      fVar14 = param_7 * fStack_154 - fStack_174 * param_5;
      fVar15 = local_178 * param_5 - param_7 * local_158;
      param_2[5] = fVar8;
      *(ulong *)(param_2 + 3) = CONCAT44(fVar15,fVar14);
      fVar4 = local_b8 * fVar14 + fVar15 * local_a8 + fVar8 * local_98;
      fVar6 = fStack_b4 * fVar14 + fVar15 * fStack_a4 + fVar8 * fStack_94;
      fVar7 = fStack_b0 * fVar14 + fVar15 * fStack_a0 + fVar8 * fStack_90;
      *(ulong *)(param_2 + 9) = CONCAT44(fVar6,fVar4);
      param_2[0xb] = fVar7;
      fVar5 = fVar6 * fVar15 + fVar4 * fVar14 + 0.0 + fVar8 * fVar7 + fVar5 + 0.0;
      goto LAB_0010ada8;
    }
  }
LAB_0010b090:
  param_2[0xc] = 0.0;
  param_2[0xf] = 0.0;
LAB_0010b09e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::AngleConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body const&,
   JPH::Vec3, float) */

void JPH::AngleConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,float param_2_00,undefined4 param_3,undefined1 (*param_1) [16]
               ,long param_2,long param_6)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  uint uVar26;
  uint uVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_28;
  float fStack_24;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar11 = 0.0;
  local_28 = (float)param_1_00;
  fStack_24 = (float)((ulong)param_1_00 >> 0x20);
  if (*(char *)(param_2 + 0x78) == '\x02') {
    lVar3 = *(long *)(param_2 + 0x48);
    fVar7 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar11 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar9 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar12 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar10 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    cVar1 = *(char *)(param_6 + 0x78);
    auVar24._1_3_ = 0;
    auVar24[0] = bVar2;
    auVar24[4] = bVar2;
    auVar24._5_3_ = 0;
    auVar24[8] = bVar2;
    auVar24._9_3_ = 0;
    auVar24[0xc] = bVar2;
    auVar24._13_3_ = 0;
    auVar6._4_4_ = _UNK_0010e8e4;
    auVar6._0_4_ = __LC18;
    auVar6._8_4_ = _UNK_0010e8e8;
    auVar6._12_4_ = _UNK_0010e8ec;
    auVar24 = auVar24 & auVar6;
    uVar23 = -(uint)(auVar24._0_4_ == __LC18);
    uVar26 = -(uint)(auVar24._4_4_ == _UNK_0010e8e4);
    uVar27 = -(uint)(auVar24._8_4_ == _UNK_0010e8e8);
    bVar4 = auVar24._12_4_ == _UNK_0010e8ec;
    fVar14 = (float)((uint)local_28 & uVar23);
    fVar16 = (float)((uint)fStack_24 & uVar26);
    fVar17 = (float)((uint)param_2_00 & uVar27);
    fVar22 = (fVar8 * fVar13 + fVar11 * fVar10 + fVar12 * fVar9) - fVar7 * fVar15;
    fVar20 = (fVar8 * fVar15 - fVar11 * fVar9) + fVar12 * fVar10 + fVar7 * fVar13;
    fVar21 = fVar20 + fVar20;
    fVar33 = fVar7 * fVar10 + ((fVar8 * fVar9 + fVar11 * fVar15) - fVar12 * fVar13);
    fVar18 = fVar22 + fVar22;
    fVar19 = fVar33 * (fVar33 + fVar33);
    fVar7 = ((fVar8 * fVar10 - fVar11 * fVar13) - fVar12 * fVar15) - fVar7 * fVar9;
    fVar8 = fVar7 * (fVar33 + fVar33);
    fVar11 = (_LC0 - fVar20 * fVar21) - fVar19;
    fVar15 = fVar33 * fVar21 + fVar18 * fVar7;
    fVar12 = fVar33 * fVar21 - fVar18 * fVar7;
    fVar19 = (_LC0 - fVar19) - fVar22 * fVar18;
    fVar28 = fVar20 * fVar18 - fVar8;
    fVar8 = fVar8 + fVar20 * fVar18;
    fVar22 = (_LC0 - fVar22 * fVar18) - fVar20 * fVar21;
    fVar20 = fVar33 * fVar18 - fVar21 * fVar7;
    fVar7 = fVar33 * fVar18 + fVar21 * fVar7;
    fVar9 = (fVar14 * fVar11 + fVar16 * fVar8 + fVar17 * fVar20) * *(float *)(lVar3 + 0x20);
    fVar10 = (fVar14 * fVar28 + fVar16 * fVar19 + fVar17 * fVar15) * *(float *)(lVar3 + 0x24);
    fVar13 = (fVar14 * fVar7 + fVar16 * fVar12 + fVar17 * fVar22) * *(float *)(lVar3 + 0x28);
    fVar7 = (float)((uint)(fVar9 * fVar11 + fVar10 * fVar28 + fVar13 * fVar7) & uVar23);
    fVar8 = (float)((uint)(fVar9 * fVar8 + fVar10 * fVar19 + fVar13 * fVar12) & uVar26);
    fVar11 = (float)((uint)(fVar9 * fVar20 + fVar10 * fVar15 + fVar13 * fVar22) & uVar27);
    *(float *)*param_1 = fVar7;
    *(float *)(*param_1 + 4) = fVar8;
    *(float *)(*param_1 + 8) = fVar11;
    *(uint *)(*param_1 + 0xc) = (uint)(fVar9 * 0.0 + fVar10 * 0.0 + fVar13 * 0.0) & -(uint)bVar4;
  }
  else {
    cVar1 = *(char *)(param_6 + 0x78);
    *param_1 = (undefined1  [16])0x0;
  }
  uVar23 = 0;
  fVar13 = 0.0;
  fVar10 = 0.0;
  fVar9 = 0.0;
  if (cVar1 == '\x02') {
    lVar3 = *(long *)(param_6 + 0x48);
    bVar2 = *(byte *)(lVar3 + 0x7a);
    fVar13 = (float)*(undefined8 *)(param_6 + 0x10);
    fVar9 = (float)*(undefined8 *)(param_6 + 0x18);
    auVar25._1_3_ = 0;
    auVar25[0] = bVar2;
    fVar10 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
    fVar20 = (float)*(undefined8 *)(lVar3 + 0x30);
    fVar15 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar3 + 0x38);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
    auVar25[4] = bVar2;
    auVar25._5_3_ = 0;
    auVar25[8] = bVar2;
    auVar25._9_3_ = 0;
    auVar25[0xc] = bVar2;
    auVar25._13_3_ = 0;
    fVar18 = (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20);
    auVar5._4_4_ = _UNK_0010e8e4;
    auVar5._0_4_ = __LC18;
    auVar5._8_4_ = _UNK_0010e8e8;
    auVar5._12_4_ = _UNK_0010e8ec;
    auVar25 = auVar25 & auVar5;
    uVar23 = -(uint)(auVar25._0_4_ == __LC18);
    uVar26 = -(uint)(auVar25._4_4_ == _UNK_0010e8e4);
    uVar27 = -(uint)(auVar25._8_4_ == _UNK_0010e8e8);
    fVar17 = (float)((uint)local_28 & uVar23);
    fVar19 = (float)((uint)fStack_24 & uVar26);
    fVar21 = (float)((uint)param_2_00 & uVar27);
    fVar16 = (fVar10 * fVar20 + fVar13 * fVar18 + fVar15 * fVar33) - fVar9 * fVar22;
    fVar14 = (fVar10 * fVar22 - fVar13 * fVar33) + fVar15 * fVar18 + fVar9 * fVar20;
    fVar28 = fVar16 + fVar16;
    fVar30 = fVar14 + fVar14;
    fVar12 = ((fVar10 * fVar33 + fVar13 * fVar22) - fVar15 * fVar20) + fVar9 * fVar18;
    fVar9 = ((fVar10 * fVar18 - fVar13 * fVar20) - fVar15 * fVar22) - fVar9 * fVar33;
    fVar33 = fVar12 * (fVar12 + fVar12);
    fVar10 = fVar9 * (fVar12 + fVar12);
    fVar31 = fVar12 * fVar30 - fVar28 * fVar9;
    fVar13 = fVar12 * fVar30 + fVar28 * fVar9;
    fVar29 = (_LC0 - fVar16 * fVar28) - fVar14 * fVar30;
    fVar15 = (_LC0 - fVar14 * fVar30) - fVar33;
    fVar32 = (_LC0 - fVar33) - fVar16 * fVar28;
    fVar16 = fVar12 * fVar28 + fVar30 * fVar9;
    fVar33 = fVar14 * fVar28 - fVar10;
    fVar10 = fVar10 + fVar14 * fVar28;
    fVar12 = fVar12 * fVar28 - fVar30 * fVar9;
    fVar18 = (fVar21 * fVar12 + fVar17 * fVar15 + fVar19 * fVar10) * *(float *)(lVar3 + 0x20);
    fVar20 = (fVar21 * fVar13 + fVar17 * fVar33 + fVar19 * fVar32) * *(float *)(lVar3 + 0x24);
    fVar22 = (fVar21 * fVar29 + fVar17 * fVar16 + fVar19 * fVar31) * *(float *)(lVar3 + 0x28);
    fVar9 = (float)((uint)(fVar18 * fVar15 + fVar20 * fVar33 + fVar16 * fVar22) & uVar23);
    fVar10 = (float)((uint)(fVar18 * fVar10 + fVar20 * fVar32 + fVar31 * fVar22) & uVar26);
    fVar13 = (float)((uint)(fVar18 * fVar12 + fVar20 * fVar13 + fVar29 * fVar22) & uVar27);
    uVar23 = (uint)(fVar18 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0) &
             -(uint)(auVar25._12_4_ == _UNK_0010e8ec);
  }
  *(float *)param_1[1] = fVar9;
  *(float *)(param_1[1] + 4) = fVar10;
  *(float *)(param_1[1] + 8) = fVar13;
  *(uint *)(param_1[1] + 0xc) = uVar23;
  fVar15 = _LC0;
  fVar7 = (fVar11 + fVar13) * param_2_00 +
          (fVar8 + fVar10) * fStack_24 + (fVar7 + fVar9) * local_28 + 0.0;
  if (fVar7 == 0.0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    *(undefined4 *)param_1[2] = 0;
    return;
  }
  *(undefined4 *)(param_1[2] + 8) = 0;
  *(undefined4 *)(param_1[2] + 4) = param_3;
  *(float *)param_1[2] = fVar15 / fVar7;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44
   const&, JPH::Body const&, JPH::Mat44 const&) */

void JPH::RotationEulerConstraintPart::CalculateConstraintProperties
               (Body *param_1,Mat44 *param_2,Body *param_3,Mat44 *param_4)

{
  Body *pBVar1;
  Body *pBVar2;
  Mat44 MVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  Mat44 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  Mat44 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2[0x78] == (Mat44)0x2) {
    MotionProperties::GetInverseInertiaForRotation(local_e8);
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8._0_12_ = ZEXT812(0);
    local_c8._12_4_ = 0;
    local_d8._0_12_ = ZEXT812(0);
    local_d8._12_4_ = 0;
    local_e8._0_12_ = ZEXT812(0);
    local_e8._12_4_ = 0;
  }
  MVar3 = param_4[0x78];
  *(Mat44 (*) [16])param_1 = local_e8;
  *(undefined1 (*) [16])(param_1 + 0x10) = local_d8;
  *(undefined1 (*) [16])(param_1 + 0x20) = local_c8;
  *(undefined8 *)(param_1 + 0x30) = local_b8;
  *(undefined8 *)(param_1 + 0x38) = uStack_b0;
  if (MVar3 == (Mat44)0x2) {
    MotionProperties::GetInverseInertiaForRotation(local_a8);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_88._0_12_ = ZEXT812(0);
    local_88._12_4_ = 0;
    local_98._0_12_ = ZEXT812(0);
    local_98._12_4_ = 0;
    local_a8._0_12_ = ZEXT812(0);
    local_a8._12_4_ = 0;
  }
  *(Mat44 (*) [16])(param_1 + 0x40) = local_a8;
  lVar11 = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = local_98;
  *(undefined1 (*) [16])(param_1 + 0x60) = local_88;
  *(undefined8 *)(param_1 + 0x70) = local_78;
  *(undefined8 *)(param_1 + 0x78) = uStack_70;
  uVar10 = _UNK_0010e8d8;
  do {
    pBVar2 = param_1 + lVar11 + 0x40;
    fVar4 = *(float *)(pBVar2 + 4);
    fVar5 = *(float *)(pBVar2 + 8);
    fVar6 = *(float *)(pBVar2 + 0xc);
    pBVar1 = param_1 + lVar11;
    fVar7 = *(float *)(pBVar1 + 4);
    fVar8 = *(float *)(pBVar1 + 8);
    fVar9 = *(float *)(pBVar1 + 0xc);
    *(float *)((long)local_68 + lVar11) = *(float *)pBVar2 + *(float *)pBVar1;
    *(float *)((long)local_68 + lVar11 + 4) = fVar4 + fVar7;
    *(float *)((long)local_68 + lVar11 + 8) = fVar5 + fVar8;
    *(float *)((long)local_68 + lVar11 + 0xc) = fVar6 + fVar9;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x40);
  auVar13._0_4_ =
       (local_68[9] * local_68[4] - local_68[5] * local_68[8]) * local_68[2] +
       (local_68[8] * local_68[6] - local_68[4] * local_68[10]) * local_68[1] +
       (local_68[10] * local_68[5] - local_68[6] * local_68[9]) * local_68[0] + 0.0;
  if (auVar13._0_4_ == 0.0) {
    *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x90) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xb0) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
  }
  else {
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    *(undefined8 *)(param_1 + 0xb0) = __LC47;
    *(undefined8 *)(param_1 + 0xb8) = uVar10;
    auVar15._0_4_ = local_68[5] * local_68[10] - local_68[9] * local_68[6];
    auVar15._4_4_ = local_68[9] * local_68[2] - local_68[1] * local_68[10];
    auVar15._8_4_ = local_68[1] * local_68[6] - local_68[5] * local_68[2];
    auVar15._12_4_ = 0;
    auVar12._0_4_ = local_68[9] * local_68[4] - local_68[5] * local_68[8];
    auVar12._4_4_ = local_68[1] * local_68[8] - local_68[9] * local_68[0];
    auVar12._8_4_ = local_68[5] * local_68[0] - local_68[1] * local_68[4];
    auVar12._12_4_ = 0;
    auVar14._0_4_ = local_68[6] * local_68[8] - local_68[10] * local_68[4];
    auVar14._4_4_ = local_68[10] * local_68[0] - local_68[2] * local_68[8];
    auVar14._8_4_ = local_68[2] * local_68[4] - local_68[6] * local_68[0];
    auVar14._12_4_ = 0;
    auVar15 = divps(auVar15,auVar13);
    auVar14 = divps(auVar14,auVar13);
    *(undefined1 (*) [16])(param_1 + 0x80) = auVar15;
    auVar13 = divps(auVar12,auVar13);
    *(undefined1 (*) [16])(param_1 + 0x90) = auVar14;
    *(undefined1 (*) [16])(param_1 + 0xa0) = auVar13;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::RotationEulerConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, JPH::Quat,
   float) const */

undefined8
JPH::RotationEulerConstraintPart::SolvePositionConstraint
          (undefined8 param_1_00,undefined8 param_2_00,uint param_3,float *param_1,long param_2,
          long param_6)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar12 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_68 [18];
  long local_20;
  
  fVar13 = (float)((ulong)param_2_00 >> 0x20);
  fVar10 = (float)param_2_00;
  fVar9 = (float)param_1_00;
  fVar16 = (float)((ulong)param_1_00 >> 0x20);
  uVar5 = 0;
  fVar11 = (float)(__LC49 ^ *(uint *)(param_2 + 0x10));
  fVar14 = (float)(_UNK_0010e9b4 ^ *(uint *)(param_2 + 0x14));
  fVar15 = (float)(_UNK_0010e9b8 ^ *(uint *)(param_2 + 0x18));
  fVar17 = (float)(_UNK_0010e9bc ^ *(uint *)(param_2 + 0x1c));
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = (float)*(undefined8 *)(param_6 + 0x18);
  fVar18 = (float)*(undefined8 *)(param_6 + 0x10);
  fVar8 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
  fVar21 = (fVar8 * fVar9 + fVar18 * fVar13 + fVar6 * fVar10) - fVar7 * fVar16;
  fVar20 = (fVar8 * fVar16 - fVar18 * fVar10) + fVar6 * fVar13 + fVar7 * fVar9;
  fVar19 = ((fVar8 * fVar10 + fVar18 * fVar16) - fVar6 * fVar9) + fVar7 * fVar13;
  fVar7 = ((fVar8 * fVar13 - fVar18 * fVar9) - fVar6 * fVar16) - fVar7 * fVar10;
  fVar16 = ((fVar17 * fVar7 - fVar21 * fVar11) - fVar20 * fVar14) - fVar19 * fVar15;
  fVar8 = (float)((uint)((fVar11 * fVar7 + fVar21 * fVar17 + fVar20 * fVar15) - fVar19 * fVar14) ^
                 (uint)fVar16 & _LC51);
  fVar9 = (float)((uint)((fVar14 * fVar7 - fVar21 * fVar15) + fVar20 * fVar17 + fVar19 * fVar11) ^
                 (uint)fVar16 & _LC51);
  fVar7 = (float)((uint)(((fVar15 * fVar7 + fVar21 * fVar14) - fVar20 * fVar11) + fVar19 * fVar17) ^
                 (uint)fVar16 & _LC51);
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & _LC51);
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._0_4_ = -(uint)(fVar8 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar16 + fVar16 == 0.0);
  uVar3 = movmskps(fVar13,auVar12);
  if ((~uVar3 & 7) != 0) {
    fVar16 = (float)(param_3 ^ _LC45);
    lVar4 = 0;
    do {
      pfVar1 = (float *)((long)param_1 + lVar4 + 0x80);
      fVar18 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar10 = pfVar1[3];
      *(float *)((long)local_68 + lVar4) = *pfVar1 * fVar16;
      *(float *)((long)local_68 + lVar4 + 4) = fVar18 * fVar16;
      *(float *)((long)local_68 + lVar4 + 8) = fVar6 * fVar16;
      *(float *)((long)local_68 + lVar4 + 0xc) = fVar10 * fVar16;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x40);
    fVar16 = fVar8 * local_68[0] + fVar9 * local_68[4] + fVar7 * local_68[8] + local_68[0xc];
    fVar18 = fVar8 * local_68[1] + fVar9 * local_68[5] + fVar7 * local_68[9] + local_68[0xd];
    fVar7 = fVar8 * local_68[2] + fVar9 * local_68[6] + fVar7 * local_68[10] + local_68[0xe];
    if (*(char *)(param_2 + 0x78) == '\x02') {
      Body::SubRotationStep
                (CONCAT44(fVar16 * param_1[1] + fVar18 * param_1[5] + fVar7 * param_1[9],
                          fVar16 * *param_1 + fVar18 * param_1[4] + fVar7 * param_1[8]),
                 CONCAT44(fVar16 * param_1[3] + fVar18 * param_1[7] + fVar7 * param_1[0xb],
                          fVar16 * param_1[2] + fVar18 * param_1[6] + fVar7 * param_1[10]));
      cVar2 = *(char *)(param_6 + 0x78);
    }
    else {
      cVar2 = *(char *)(param_6 + 0x78);
    }
    if (cVar2 == '\x02') {
      Body::AddRotationStep
                (CONCAT44(fVar16 * param_1[0x11] + fVar18 * param_1[0x15] + fVar7 * param_1[0x19],
                          fVar16 * param_1[0x10] + fVar18 * param_1[0x14] + fVar7 * param_1[0x18]),
                 CONCAT44(fVar16 * param_1[0x13] + fVar18 * param_1[0x17] + fVar7 * param_1[0x1b],
                          fVar16 * param_1[0x12] + fVar18 * param_1[0x16] + fVar7 * param_1[0x1a]),
                 param_6);
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::SetLimits(float, float, float, float, float, float) */

void __thiscall
JPH::SwingTwistConstraintPart::SetLimits
          (SwingTwistConstraintPart *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  float fVar1;
  undefined8 uVar2;
  SwingTwistConstraintPart SVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = __LC57;
  fVar17 = param_3 * _LC20;
  fVar18 = param_4 * _LC20;
  fVar19 = param_5 * _LC20;
  fVar20 = param_6 * _LC20;
  fVar21 = (float)(_LC51 & (uint)fVar17 ^ (uint)fVar17);
  fVar23 = (float)(_UNK_0010e8f4 & (uint)fVar18 ^ (uint)fVar18);
  fVar25 = (float)(_UNK_0010e8f8 & (uint)fVar19 ^ (uint)fVar19);
  fVar27 = (float)(_UNK_0010e8fc & (uint)fVar20 ^ (uint)fVar20);
  iVar5 = (int)(fVar21 * _LC23 + _LC20);
  iVar6 = (int)(fVar23 * _LC23 + _LC20);
  iVar7 = (int)(fVar25 * _LC23 + _LC20);
  iVar9 = (int)(fVar27 * _LC23 + _LC20);
  fVar11 = (float)iVar5;
  fVar12 = (float)iVar6;
  fVar13 = (float)iVar7;
  fVar14 = (float)iVar9;
  fVar11 = ((fVar21 - fVar11 * _LC26) - _LC28 * fVar11) - fVar11 * _LC30;
  fVar12 = ((fVar23 - fVar12 * _LC26) - _UNK_0010e904 * fVar12) - fVar12 * _UNK_0010e914;
  fVar13 = ((fVar25 - fVar13 * _LC26) - _UNK_0010e908 * fVar13) - fVar13 * _UNK_0010e918;
  fVar14 = ((fVar27 - fVar14 * _LC26) - _UNK_0010e90c * fVar14) - fVar14 * _UNK_0010e91c;
  fVar29 = fVar11 * fVar11;
  fVar30 = fVar12 * fVar12;
  fVar31 = fVar13 * fVar13;
  fVar32 = fVar14 * fVar14;
  fVar21 = (((_LC32 * fVar29 + _LC34) * fVar29 + _LC36) * fVar29 * fVar29 - fVar29 * _LC20) +
           (float)_LC54;
  fVar23 = (((_UNK_0010e924 * fVar30 + _UNK_0010e934) * fVar30 + _UNK_0010e944) * fVar30 * fVar30 -
           fVar30 * _LC20) + _LC54._4_4_;
  fVar25 = (((_UNK_0010e928 * fVar31 + _UNK_0010e938) * fVar31 + _UNK_0010e948) * fVar31 * fVar31 -
           fVar31 * _LC20) + _UNK_0010e958;
  fVar27 = (((_UNK_0010e92c * fVar32 + _UNK_0010e93c) * fVar32 + _UNK_0010e94c) * fVar32 * fVar32 -
           fVar32 * _LC20) + _UNK_0010e95c;
  fVar11 = ((_LC39 * fVar29 + _LC41) * fVar29 + _LC43) * fVar29 * fVar11 + fVar11;
  fVar12 = ((_UNK_0010e964 * fVar30 + _UNK_0010e974) * fVar30 + _UNK_0010e984) * fVar30 * fVar12 +
           fVar12;
  fVar13 = ((_UNK_0010e968 * fVar31 + _UNK_0010e978) * fVar31 + _UNK_0010e988) * fVar31 * fVar13 +
           fVar13;
  fVar14 = ((_UNK_0010e96c * fVar32 + _UNK_0010e97c) * fVar32 + _UNK_0010e98c) * fVar32 * fVar14 +
           fVar14;
  uVar22 = (iVar5 << 0x1f) >> 0x1f;
  uVar24 = (iVar6 << 0x1f) >> 0x1f;
  uVar26 = (iVar7 << 0x1f) >> 0x1f;
  uVar28 = (iVar9 << 0x1f) >> 0x1f;
  uVar4 = CONCAT44(iVar6 << 0x1e & _UNK_0010e8f4 ^ iVar6 << 0x1f ^
                   ((uint)fVar12 & uVar24 | ~uVar24 & (uint)fVar23),
                   iVar5 << 0x1e & _LC51 ^ iVar5 << 0x1f ^
                   ((uint)fVar11 & uVar22 | ~uVar22 & (uint)fVar21));
  uVar8 = iVar7 << 0x1e & _UNK_0010e8f8 ^ iVar7 << 0x1f ^
          ((uint)fVar13 & uVar26 | ~uVar26 & (uint)fVar25);
  uVar10 = iVar9 << 0x1e & _UNK_0010e8fc ^ iVar9 << 0x1f ^
           ((uint)fVar14 & uVar28 | ~uVar28 & (uint)fVar27);
  uVar2 = CONCAT44((iVar6 << 0x1e ^ (uint)fVar18) & _UNK_0010e8f4 ^
                   (~uVar24 & (uint)fVar12 | (uint)fVar23 & uVar24),
                   (iVar5 << 0x1e ^ (uint)fVar17) & _LC51 ^
                   (~uVar22 & (uint)fVar11 | (uint)fVar21 & uVar22));
  uVar24 = (iVar7 << 0x1e ^ (uint)fVar19) & _UNK_0010e8f8 ^
           (~uVar26 & (uint)fVar13 | (uint)fVar25 & uVar26);
  uVar22 = (iVar9 << 0x1e ^ (uint)fVar20) & _UNK_0010e8fc ^
           (~uVar28 & (uint)fVar14 | (uint)fVar27 & uVar28);
  if (param_1 <= __LC57) {
    if ((param_1 < _LC59) && (__LC60 < param_2)) {
      uVar15 = CONCAT44(_UNK_0010e9d4,_LC55);
      SVar3 = (SwingTwistConstraintPart)0x8;
      uVar16 = _UNK_0010e9d8;
      goto LAB_0010c51c;
    }
  }
  else if (param_2 < _LC58) {
    SVar3 = (SwingTwistConstraintPart)0x1;
    uVar15 = __LC52;
    uVar16 = _UNK_0010e9c8;
    goto LAB_0010c51c;
  }
  SVar3 = (SwingTwistConstraintPart)0x0;
  fVar21 = param_1 * _LC20;
  fVar23 = param_2 * _LC20;
  fVar11 = (float)(_LC51 & (uint)fVar21 ^ (uint)fVar21);
  fVar12 = (float)(_UNK_0010e8f4 & (uint)fVar23 ^ (uint)fVar23);
  iVar5 = (int)(_LC23 * fVar11 + _LC20);
  iVar6 = (int)(_LC23 * fVar12 + _LC20);
  fVar13 = (float)iVar5;
  fVar14 = (float)iVar6;
  fVar11 = ((fVar11 - _LC26 * fVar13) - _LC28 * fVar13) - fVar13 * _LC30;
  fVar12 = ((fVar12 - _LC26 * fVar14) - _UNK_0010e904 * fVar14) - fVar14 * _UNK_0010e914;
  fVar25 = fVar11 * fVar11;
  fVar27 = fVar12 * fVar12;
  fVar13 = (((_LC32 * fVar25 + _LC34) * fVar25 + _LC36) * fVar25 * fVar25 - _LC20 * fVar25) +
           (float)_LC54;
  fVar14 = (((_UNK_0010e924 * fVar27 + _UNK_0010e934) * fVar27 + _UNK_0010e944) * fVar27 * fVar27 -
           _LC20 * fVar27) + _LC54._4_4_;
  fVar11 = fVar11 + ((_LC39 * fVar25 + _LC41) * fVar25 + _LC43) * fVar25 * fVar11;
  fVar12 = fVar12 + ((_UNK_0010e964 * fVar27 + _UNK_0010e974) * fVar27 + _UNK_0010e984) * fVar27 *
                    fVar12;
  uVar26 = (iVar5 << 0x1f) >> 0x1f;
  uVar28 = (iVar6 << 0x1f) >> 0x1f;
  uVar15 = CONCAT44(((uint)fVar14 & uVar28 | ~uVar28 & (uint)fVar12) ^
                    ((uint)fVar23 ^ iVar6 << 0x1e) & _UNK_0010e8f4,
                    ((uint)fVar13 & uVar26 | ~uVar26 & (uint)fVar11) ^
                    ((uint)fVar21 ^ iVar5 << 0x1e) & _LC51);
  uVar16 = CONCAT44(((uint)fVar12 & uVar28 | ~uVar28 & (uint)fVar14) ^
                    _UNK_0010e8f4 & iVar6 << 0x1e ^ iVar6 << 0x1f,
                    ((uint)fVar11 & uVar26 | ~uVar26 & (uint)fVar13) ^
                    _LC51 & iVar5 << 0x1e ^ iVar5 << 0x1f);
LAB_0010c51c:
  *this = SVar3;
  *(float *)(this + 0x14) = fVar17;
  *(float *)(this + 0x18) = fVar18;
  *(float *)(this + 0x1c) = fVar19;
  *(float *)(this + 0x20) = fVar20;
  *(undefined8 *)(this + 4) = uVar15;
  *(undefined8 *)(this + 0xc) = uVar16;
  if (param_3 <= fVar1) {
    if ((param_3 < _LC59) && (__LC60 < param_4)) {
      *this = (SwingTwistConstraintPart)((byte)*this | 0x10);
      uVar2 = CONCAT44(_UNK_0010e9d4,_LC55);
      uVar4 = 0;
    }
  }
  else if (param_4 < _LC58) {
    *this = (SwingTwistConstraintPart)((byte)*this | 2);
    uVar4 = CONCAT44(_LC54._4_4_,(float)_LC54);
    uVar2 = 0;
  }
  fVar1 = __LC57;
  *(undefined8 *)(this + 0x24) = uVar2;
  *(undefined8 *)(this + 0x34) = uVar4;
  uVar26 = _LC0;
  if (param_5 <= fVar1) {
    if ((param_5 < _LC59) && (__LC60 < param_6)) {
      uVar8 = 0;
      *this = (SwingTwistConstraintPart)((byte)*this | 0x20);
      uVar10 = 0;
      uVar22 = _LC0;
      uVar24 = _LC55;
    }
  }
  else if (param_6 < _LC58) {
    *this = (SwingTwistConstraintPart)((byte)*this | 4);
    uVar22 = 0;
    uVar10 = uVar26;
    uVar8 = uVar26;
    uVar24 = 0;
  }
  *(uint *)(this + 0x2c) = uVar24;
  *(uint *)(this + 0x30) = uVar22;
  *(uint *)(this + 0x3c) = uVar8;
  *(uint *)(this + 0x40) = uVar10;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::ClampSwingTwist(JPH::Quat&, JPH::Quat&, unsigned int&) const */

void __thiscall
JPH::SwingTwistConstraintPart::ClampSwingTwist
          (SwingTwistConstraintPart *this,Quat *param_1,Quat *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  SwingTwistConstraintPart SVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  undefined1 auVar34 [16];
  int iVar36;
  float fVar37;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar38 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  float fVar62;
  undefined1 extraout_var [12];
  
  fVar1 = *(float *)(param_1 + 0xc);
  *param_3 = 0;
  if (fVar1 < 0.0) {
    *(float *)param_1 = 0.0 - *(float *)param_1;
    *(float *)(param_1 + 4) = 0.0 - *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = 0.0 - *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = 0.0 - *(float *)(param_1 + 0xc);
  }
  fVar2 = *(float *)(param_2 + 0xc);
  if (fVar2 < 0.0) {
    *(float *)param_2 = 0.0 - *(float *)param_2;
    *(float *)(param_2 + 4) = 0.0 - *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) = 0.0 - *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) = 0.0 - *(float *)(param_2 + 0xc);
  }
  uVar15 = _UNK_0010e8d8;
  uVar14 = __LC47;
  SVar4 = *this;
  if (((byte)SVar4 & 1) == 0) {
    if (((byte)SVar4 & 8) == 0) {
      fVar32 = *(float *)(this + 4) - *(float *)param_2;
      fVar19 = *(float *)param_2 - *(float *)(this + 8);
      if ((0.0 < fVar32) || (0.0 < fVar19)) {
        fVar32 = (float)((uint)fVar32 & _LC61);
        if (_LC0 < fVar32) {
          fVar32 = _LC10 - fVar32;
        }
        fVar19 = (float)((uint)fVar19 & _LC61);
        if (_LC0 < fVar19) {
          fVar19 = _LC10 - fVar19;
        }
        if (fVar32 < fVar19) {
          uVar16 = *(uint *)(this + 0xc);
          *(ulong *)param_2 = (ulong)(uint)*(float *)(this + 4);
          *(ulong *)(param_2 + 8) = (ulong)uVar16 << 0x20;
          *param_3 = 1;
          uVar14 = __LC47;
          uVar15 = _UNK_0010e8d8;
        }
        else {
          uVar16 = *(uint *)(this + 0x10);
          *(ulong *)param_2 = (ulong)(uint)*(float *)(this + 8);
          *(ulong *)(param_2 + 8) = (ulong)uVar16 << 0x20;
          *param_3 = 2;
          uVar14 = __LC47;
          uVar15 = _UNK_0010e8d8;
        }
      }
    }
  }
  else {
    uVar16 = 0;
    if (*(float *)param_2 != 0.0) {
      uVar16 = 3;
    }
    *param_3 = uVar16;
    *(undefined8 *)param_2 = uVar14;
    *(undefined8 *)(param_2 + 8) = uVar15;
    uVar14 = __LC47;
    uVar15 = _UNK_0010e8d8;
  }
  __LC47 = uVar14;
  _UNK_0010e8d8 = uVar15;
  if (((byte)SVar4 & 2) == 0) {
    if (((byte)SVar4 & 4) == 0) {
      if (this[1] == (SwingTwistConstraintPart)0x0) {
        fVar19 = *(float *)(param_1 + 8);
        fVar32 = *(float *)(param_1 + 4);
        fVar33 = *(float *)(this + 0x30);
        fVar18 = *(float *)(this + 0x28);
        if (_LC0 < (fVar32 / fVar18) * (fVar32 / fVar18) + (fVar19 / fVar33) * (fVar19 / fVar33)) {
          fVar46 = fVar18 * fVar18;
          fVar47 = fVar33 * fVar33;
          fVar37 = fVar46 + 0.0;
          fVar26 = fVar47 + 0.0;
          fVar27 = (fVar18 * fVar32) / fVar37;
          fVar42 = (fVar33 * fVar19) / fVar26;
          fVar27 = (fVar27 * fVar27 + fVar42 * fVar42) - _LC0;
          if (_LC19 <= (float)((uint)fVar27 & _LC61)) {
            fVar42 = 0.0;
            do {
              fVar42 = fVar42 - fVar27 / (((fVar19 * fVar19 * fVar47) / (fVar26 * fVar26 * fVar26) +
                                          (fVar32 * fVar32 * fVar46) / (fVar37 * fVar37 * fVar37)) *
                                         _LC63);
              fVar37 = fVar46 + fVar42;
              fVar26 = fVar47 + fVar42;
              fVar27 = (fVar18 * fVar32) / fVar37;
              fVar62 = (fVar33 * fVar19) / fVar26;
              fVar27 = (fVar27 * fVar27 + fVar62 * fVar62) - _LC0;
            } while (_LC19 <= (float)((uint)fVar27 & _LC61));
          }
          fVar37 = (fVar32 * fVar46) / fVar37;
          fVar26 = (fVar19 * fVar47) / fVar26;
          fVar19 = (_LC0 - fVar37 * fVar37) - fVar26 * fVar26;
          if (0.0 < fVar19) {
            fVar19 = SQRT(fVar19);
          }
          else {
            fVar19 = 0.0;
          }
          auVar7._8_4_ = fVar19;
          auVar7._4_4_ = fVar26;
          auVar7._0_4_ = fVar37;
          auVar7._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar7 << 0x20;
          *param_3 = *param_3 | 0x3c;
        }
      }
      else {
        uVar16 = *(uint *)(param_1 + 4);
        uVar39 = *(uint *)(param_1 + 8);
        uVar40 = *(uint *)(param_1 + 0xc);
        auVar38._4_12_ = _UNK_0010e8f4;
        auVar38._0_4_ = _LC51;
        auVar43._4_4_ = uVar40;
        auVar43._0_4_ = uVar40;
        auVar43._8_4_ = uVar40;
        auVar43._12_4_ = uVar40;
        auVar45 = auVar38 & auVar43;
        auVar44._4_4_ = uVar16;
        auVar44._0_4_ = uVar16;
        auVar44._8_4_ = uVar39;
        auVar44._12_4_ = uVar39;
        fVar27 = (float)(uVar40 ^ auVar45._0_4_);
        fVar26 = (float)(uVar40 ^ auVar45._4_4_);
        fVar37 = (float)(uVar40 ^ auVar45._8_4_);
        fVar42 = (float)(uVar40 ^ auVar45._12_4_);
        auVar28 = auVar38 & auVar44;
        auVar56._4_4_ = _LC55;
        auVar56._0_4_ = _LC55;
        auVar56._8_4_ = _LC55;
        auVar56._12_4_ = _LC55;
        fVar19 = (float)(auVar28._0_4_ ^ uVar16);
        fVar32 = (float)(auVar28._4_4_ ^ uVar16);
        fVar33 = (float)(auVar28._8_4_ ^ uVar39);
        fVar18 = (float)(auVar28._12_4_ ^ uVar39);
        auVar44 = (auVar43 ^ auVar44) & auVar38;
        uVar16 = (int)-(uint)(fVar27 < fVar19) >> 0x1f;
        uVar39 = (int)-(uint)(fVar26 < fVar32) >> 0x1f;
        uVar40 = (int)-(uint)(fVar37 < fVar33) >> 0x1f;
        uVar41 = (int)-(uint)(fVar42 < fVar18) >> 0x1f;
        auVar21._0_4_ = (uint)fVar27 & uVar16;
        auVar21._4_4_ = (uint)fVar26 & uVar39;
        auVar21._8_4_ = (uint)fVar37 & uVar40;
        auVar21._12_4_ = (uint)fVar42 & uVar41;
        auVar29._0_4_ = (uint)fVar19 & uVar16;
        auVar29._4_4_ = (uint)fVar32 & uVar39;
        auVar29._8_4_ = (uint)fVar33 & uVar40;
        auVar29._12_4_ = (uint)fVar18 & uVar41;
        auVar28._4_4_ = ~uVar39 & (uint)fVar32;
        auVar28._0_4_ = ~uVar16 & (uint)fVar19;
        auVar28._8_4_ = ~uVar40 & (uint)fVar33;
        auVar28._12_4_ = ~uVar41 & (uint)fVar18;
        auVar57._4_4_ = ~uVar39 & (uint)fVar26;
        auVar57._0_4_ = ~uVar16 & (uint)fVar27;
        auVar57._8_4_ = ~uVar40 & (uint)fVar37;
        auVar57._12_4_ = ~uVar41 & (uint)fVar42;
        auVar28 = divps(auVar21 | auVar28,auVar29 | auVar57);
        uVar48 = _LC51 & auVar28._0_4_;
        uVar49 = _LC51 & auVar28._4_4_;
        uVar50 = _LC51 & auVar28._8_4_;
        uVar51 = _LC51 & auVar28._12_4_;
        auVar22._0_4_ = (float)(auVar28._0_4_ ^ uVar48);
        auVar22._4_4_ = (float)(auVar28._4_4_ ^ uVar49);
        auVar22._8_4_ = (float)(auVar28._8_4_ ^ uVar50);
        auVar22._12_4_ = (float)(auVar28._12_4_ ^ uVar51);
        auVar30._0_4_ = auVar22._0_4_ + _LC55;
        auVar30._4_4_ = auVar22._4_4_ + _LC55;
        auVar30._8_4_ = auVar22._8_4_ + _LC55;
        auVar30._12_4_ = auVar22._12_4_ + _LC55;
        auVar57 = divps(auVar56,auVar22);
        uVar58 = (int)-(uint)(_LC65 < auVar22._0_4_) >> 0x1f;
        uVar59 = (int)-(uint)(_LC65 < auVar22._4_4_) >> 0x1f;
        uVar60 = (int)-(uint)(_LC65 < auVar22._8_4_) >> 0x1f;
        uVar61 = (int)-(uint)(_LC65 < auVar22._12_4_) >> 0x1f;
        uVar52 = (int)-(uint)(_LC67 < auVar22._0_4_) >> 0x1f;
        uVar53 = (int)-(uint)(_LC67 < auVar22._4_4_) >> 0x1f;
        uVar54 = (int)-(uint)(_LC67 < auVar22._8_4_) >> 0x1f;
        uVar55 = (int)-(uint)(_LC67 < auVar22._12_4_) >> 0x1f;
        auVar5._4_4_ = auVar22._4_4_ + _LC0;
        auVar5._0_4_ = auVar22._0_4_ + _LC0;
        auVar5._8_4_ = auVar22._8_4_ + _LC0;
        auVar5._12_4_ = auVar22._12_4_ + _LC0;
        auVar28 = divps(auVar30,auVar5);
        fVar19 = (float)(auVar57._0_4_ & uVar52 |
                        ~uVar52 & (auVar28._0_4_ & uVar58 | ~uVar58 & (uint)auVar22._0_4_));
        fVar32 = (float)(auVar57._4_4_ & uVar53 |
                        ~uVar53 & (auVar28._4_4_ & uVar59 | ~uVar59 & (uint)auVar22._4_4_));
        fVar33 = (float)(auVar57._8_4_ & uVar54 |
                        ~uVar54 & (auVar28._8_4_ & uVar60 | ~uVar60 & (uint)auVar22._8_4_));
        fVar18 = (float)(auVar57._12_4_ & uVar55 |
                        ~uVar55 & (auVar28._12_4_ & uVar61 | ~uVar61 & (uint)auVar22._12_4_));
        fVar27 = fVar19 * fVar19;
        fVar26 = fVar32 * fVar32;
        fVar37 = fVar33 * fVar33;
        fVar42 = fVar18 * fVar18;
        fVar19 = (float)((uint)((((_LC74 * fVar27 + _LC76) * fVar27 + _LC78) * fVar27 + _LC80) *
                                fVar27 * fVar19 + fVar19 +
                               (float)(uVar52 & (uint)_LC72 | ~uVar52 & uVar58 & _LC70)) ^ uVar48);
        fVar32 = (float)((uint)((((_LC74 * fVar26 + _LC76) * fVar26 + _LC78) * fVar26 + _LC80) *
                                fVar26 * fVar32 + fVar32 +
                               (float)(uVar53 & (uint)_LC72 | ~uVar53 & uVar59 & _LC70)) ^ uVar49);
        fVar33 = (float)((uint)((((_LC74 * fVar37 + _LC76) * fVar37 + _LC78) * fVar37 + _LC80) *
                                fVar37 * fVar33 + fVar33 +
                               (float)(uVar54 & (uint)_LC72 | ~uVar54 & uVar60 & _LC70)) ^ uVar50);
        fVar18 = (float)((uint)((((_LC74 * fVar42 + _LC76) * fVar42 + _LC78) * fVar42 + _LC80) *
                                fVar42 * fVar18 + fVar18 +
                               (float)(uVar55 & (uint)_LC72 | ~uVar55 & uVar61 & _LC70)) ^ uVar51);
        auVar34._4_4_ = *(undefined4 *)(this + 0x14);
        auVar34._0_4_ = *(undefined4 *)(this + 0x14);
        auVar34._8_4_ = *(undefined4 *)(this + 0x1c);
        auVar34._12_4_ = *(undefined4 *)(this + 0x1c);
        auVar23._4_4_ = *(undefined4 *)(this + 0x18);
        auVar23._0_4_ = *(undefined4 *)(this + 0x18);
        auVar23._8_4_ = *(undefined4 *)(this + 0x20);
        auVar23._12_4_ = *(undefined4 *)(this + 0x20);
        fVar19 = (float)(auVar44._0_4_ ^
                        (uint)((float)((uint)(_LC72 - fVar19) & uVar16 | ~uVar16 & (uint)fVar19) -
                              (float)((int)auVar45._0_4_ >> 0x1f & _LC82)));
        fVar32 = (float)(auVar44._4_4_ ^
                        (uint)((float)((uint)(_LC72 - fVar32) & uVar39 | ~uVar39 & (uint)fVar32) -
                              (float)((int)auVar45._4_4_ >> 0x1f & _LC82)));
        auVar31._4_4_ = fVar32;
        auVar31._0_4_ = fVar19;
        fVar33 = (float)(auVar44._8_4_ ^
                        (uint)((float)((uint)(_LC72 - fVar33) & uVar40 | ~uVar40 & (uint)fVar33) -
                              (float)((int)auVar45._8_4_ >> 0x1f & _LC82)));
        fVar18 = (float)(auVar44._12_4_ ^
                        (uint)((float)((uint)(_LC72 - fVar18) & uVar41 | ~uVar41 & (uint)fVar18) -
                              (float)((int)auVar45._12_4_ >> 0x1f & _LC82)));
        auVar31._8_4_ = fVar33;
        auVar31._12_4_ = fVar18;
        auVar28 = maxps(auVar31,auVar34);
        auVar28 = minps(auVar28,auVar23);
        auVar45._4_4_ = -(uint)(fVar32 == auVar28._4_4_);
        auVar45._0_4_ = -(uint)(fVar19 == auVar28._0_4_);
        auVar45._8_4_ = -(uint)(fVar33 == auVar28._8_4_);
        auVar45._12_4_ = -(uint)(fVar18 == auVar28._12_4_);
        iVar17 = movmskps((byte)SVar4 & 2,auVar45);
        if (iVar17 != 0xf) {
          auVar57 = auVar38 & auVar28;
          fVar33 = (float)(auVar57._4_4_ ^ (uint)auVar28._4_4_);
          fVar18 = (float)(auVar57._8_4_ ^ (uint)auVar28._8_4_);
          iVar17 = (int)(_LC23 * fVar33 + _LC20);
          iVar35 = (int)(_LC23 * fVar18 + _LC20);
          iVar36 = (int)(_LC23 * (float)(auVar57._12_4_ ^ (uint)auVar28._12_4_) + _LC20);
          fVar19 = (float)iVar17;
          fVar32 = (float)iVar35;
          fVar33 = ((fVar33 - _LC26 * fVar19) - _LC28 * fVar19) - fVar19 * _LC30;
          fVar18 = ((fVar18 - _LC26 * fVar32) - _LC28 * fVar32) - fVar32 * _LC30;
          fVar27 = fVar33 * fVar33;
          fVar26 = fVar18 * fVar18;
          fVar32 = (((_LC32 * fVar27 + _LC34) * fVar27 + _LC36) * fVar27 * fVar27 - _LC20 * fVar27)
                   + _LC0;
          fVar19 = (((_LC32 * fVar26 + _LC34) * fVar26 + _LC36) * fVar26 * fVar26 - _LC20 * fVar26)
                   + _LC0;
          auVar11._4_4_ = iVar35 << 0x1f;
          auVar11._0_4_ = iVar17 << 0x1f;
          auVar11._8_4_ = iVar36 << 0x1f;
          auVar12._4_4_ = iVar35 << 0x1e;
          auVar12._0_4_ = iVar17 << 0x1e;
          auVar12._8_4_ = iVar36 << 0x1e;
          auVar13._12_4_ = 0;
          auVar13._0_12_ = auVar12;
          fVar33 = ((_LC39 * fVar27 + _LC41) * fVar27 + _LC43) * fVar27 * fVar33 + fVar33;
          fVar18 = ((_LC39 * fVar26 + _LC41) * fVar26 + _LC43) * fVar26 * fVar18 + fVar18;
          uVar16 = (iVar17 << 0x1f) >> 0x1f;
          uVar39 = (iVar35 << 0x1f) >> 0x1f;
          auVar38 = (auVar28 ^ auVar13 << 0x20) & auVar38;
          auVar11 = _UNK_0010e8f4 & auVar12 ^ auVar11;
          fVar26 = (float)(auVar11._0_4_ ^ ((uint)fVar33 & uVar16 | ~uVar16 & (uint)fVar32));
          fVar27 = (float)(auVar11._4_4_ ^ ((uint)fVar18 & uVar39 | ~uVar39 & (uint)fVar19));
          fVar19 = (float)(((uint)fVar19 & uVar39 | ~uVar39 & (uint)fVar18) ^ auVar38._8_4_) *
                   fVar26;
          fVar32 = (float)(((uint)fVar32 & uVar16 | ~uVar16 & (uint)fVar33) ^ auVar38._4_4_) *
                   fVar27;
          fVar27 = fVar27 * fVar26;
          auVar10._8_4_ = fVar27;
          auVar10._4_4_ = fVar19;
          auVar10._0_4_ = fVar32;
          auVar10._12_4_ = 0;
          auVar24._0_4_ = SQRT(fVar19 * fVar19 + fVar27 * fVar27 + fVar32 * fVar32 + 0.0);
          auVar24._4_4_ = auVar24._0_4_;
          auVar24._8_4_ = auVar24._0_4_;
          auVar24._12_4_ = auVar24._0_4_;
          auVar28 = divps(auVar10 << 0x20,auVar24);
          *(undefined1 (*) [16])param_1 = auVar28;
          *param_3 = *param_3 | 0x3c;
        }
      }
    }
    else {
      uVar16 = 0;
      if (*(float *)(param_1 + 8) != 0.0) {
        uVar16 = 0x30;
      }
      fVar19 = *(float *)(this + 0x24);
      fVar32 = *(float *)(param_1 + 4);
      uVar16 = uVar16 | *param_3;
      fVar33 = *(float *)(this + 0x28);
      *param_3 = uVar16;
      fVar18 = fVar19 - fVar32;
      fVar27 = fVar32 - fVar33;
      if ((0.0 < fVar18) || (0.0 < fVar27)) {
        fVar18 = (float)((uint)fVar18 & _LC61);
        if (_LC0 < fVar18) {
          fVar18 = _LC10 - fVar18;
        }
        fVar27 = (float)((uint)fVar27 & _LC61);
        if (_LC0 < fVar27) {
          fVar27 = _LC10 - fVar27;
        }
        if (fVar27 <= fVar18) {
          auVar8._4_8_ = (ulong)*(uint *)(this + 0x38) << 0x20;
          auVar8._0_4_ = fVar33;
          auVar8._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar8 << 0x20;
          *param_3 = uVar16 | 8;
        }
        else {
          auVar6._4_8_ = (ulong)*(uint *)(this + 0x34) << 0x20;
          auVar6._0_4_ = fVar19;
          auVar6._12_4_ = 0;
          *(undefined1 (*) [16])param_1 = auVar6 << 0x20;
          *param_3 = uVar16 | 4;
        }
      }
      else if ((uVar16 & 0x10) != 0) {
        fVar19 = _LC0 - fVar32 * fVar32;
        if (fVar19 < 0.0) {
          auVar25._0_4_ = sqrtf(fVar19);
          auVar25._4_12_ = extraout_var;
          uVar20 = auVar25._0_8_;
        }
        else {
          uVar20 = (ulong)(uint)SQRT(fVar19);
        }
        auVar9._4_8_ = uVar20 << 0x20;
        auVar9._0_4_ = fVar32;
        auVar9._12_4_ = 0;
        *(undefined1 (*) [16])param_1 = auVar9 << 0x20;
      }
    }
  }
  else if (((byte)SVar4 & 4) == 0) {
    uVar16 = 0;
    if (*(float *)(param_1 + 4) != 0.0) {
      uVar16 = 0xc;
    }
    fVar19 = *(float *)(this + 0x2c);
    fVar32 = *(float *)(param_1 + 8);
    uVar16 = uVar16 | *param_3;
    fVar33 = *(float *)(this + 0x30);
    *param_3 = uVar16;
    fVar18 = fVar19 - fVar32;
    fVar27 = fVar32 - fVar33;
    if ((0.0 < fVar18) || (0.0 < fVar27)) {
      fVar18 = (float)((uint)fVar18 & _LC61);
      if (_LC0 < fVar18) {
        fVar18 = _LC10 - fVar18;
      }
      fVar27 = (float)((uint)fVar27 & _LC61);
      if (_LC0 < fVar27) {
        fVar27 = _LC10 - fVar27;
      }
      if (fVar27 <= fVar18) {
        uVar3 = *(undefined4 *)(this + 0x40);
        *(undefined8 *)param_1 = 0;
        *(ulong *)(param_1 + 8) = CONCAT44(uVar3,fVar33);
        *param_3 = uVar16 | 0x20;
      }
      else {
        uVar3 = *(undefined4 *)(this + 0x3c);
        *(undefined8 *)param_1 = 0;
        *(ulong *)(param_1 + 8) = CONCAT44(uVar3,fVar19);
        *param_3 = uVar16 | 0x10;
      }
    }
    else if ((uVar16 & 4) != 0) {
      fVar19 = _LC0 - fVar32 * fVar32;
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      *(undefined8 *)param_1 = 0;
      *(ulong *)(param_1 + 8) = CONCAT44(fVar19,fVar32);
    }
  }
  else {
    uVar16 = 0;
    if (*(float *)(param_1 + 4) != 0.0) {
      uVar16 = 0xc;
    }
    uVar16 = uVar16 | *param_3;
    if (*(float *)(param_1 + 8) != 0.0) {
      uVar16 = uVar16 | 0x30;
    }
    *param_3 = uVar16;
    *(undefined8 *)param_1 = uVar14;
    *(undefined8 *)(param_1 + 8) = uVar15;
  }
  if (fVar1 < 0.0) {
    *(float *)param_1 = 0.0 - *(float *)param_1;
    *(float *)(param_1 + 4) = 0.0 - *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = 0.0 - *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = 0.0 - *(float *)(param_1 + 0xc);
  }
  if (fVar2 < 0.0) {
    *(float *)param_2 = 0.0 - *(float *)param_2;
    *(float *)(param_2 + 4) = 0.0 - *(float *)(param_2 + 4);
    *(float *)(param_2 + 8) = 0.0 - *(float *)(param_2 + 8);
    *(float *)(param_2 + 0xc) = 0.0 - *(float *)(param_2 + 0xc);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Body const&,
   JPH::Quat, JPH::Quat) */

void JPH::SwingTwistConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               SwingTwistConstraintPart *param_1,undefined8 param_2,undefined8 param_7)

{
  SwingTwistConstraintPart SVar1;
  long lVar2;
  long in_FS_OFFSET;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_98;
  float fStack_94;
  float fStack_8c;
  uint local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulong local_58;
  long lStack_50;
  long local_40;
  
  fVar11 = (float)((ulong)param_4 >> 0x20);
  fVar10 = (float)param_4;
  fVar17 = (float)((ulong)param_3 >> 0x20);
  fVar9 = (float)param_3;
  fVar4 = (float)param_2_00;
  local_98 = (float)param_1_00;
  fStack_94 = (float)((ulong)param_1_00 >> 0x20);
  fStack_8c = (float)((ulong)param_2_00 >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = SQRT(fStack_8c * fStack_8c + local_98 * local_98);
  local_58 = __LC47;
  lStack_50 = _UNK_0010e8d8;
  if (fVar7 != 0.0) {
    fVar6 = fStack_8c / fVar7;
    fVar3 = local_98 / fVar7;
    fVar8 = local_98 * fVar4;
    fVar4 = (fVar4 * fStack_8c + local_98 * fStack_94) / fVar7;
    fStack_94 = (fStack_94 * fStack_8c - fVar8) / fVar7;
    local_98 = 0.0;
    fStack_8c = fVar7;
    local_58 = (ulong)(uint)fVar3;
    lStack_50 = (ulong)(uint)fVar6 << 0x20;
  }
  local_68 = local_98;
  fStack_64 = fStack_94;
  fStack_60 = fVar4;
  fStack_5c = fStack_8c;
  ClampSwingTwist(param_1,(Quat *)&local_68,(Quat *)&local_58,&local_6c);
  fVar7 = _LC0;
  SVar1 = *param_1;
  if (((byte)SVar1 & 2) == 0) {
    if (((byte)SVar1 & 4) != 0) {
      fVar6 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
      fVar15 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
      fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
      fVar12 = fVar15 + fVar15;
      fVar8 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
      fVar19 = fVar8 + fVar8;
      fVar20 = fVar12 * fVar6 - fVar19 * fVar3;
      fVar16 = fVar12 * fVar3 + fVar19 * fVar6;
      fVar12 = (fVar12 * fVar15 + fVar8 * fVar19) - _LC0;
      fVar18 = fVar3 + fVar3;
      *(ulong *)(param_1 + 0x50) = CONCAT44(fVar12,fVar20);
      *(ulong *)(param_1 + 0x58) = CONCAT44(fVar16,fVar16);
      fVar7 = (fVar3 * fVar18 + fVar8 * fVar19) - fVar7;
      *(ulong *)(param_1 + 0x60) =
           CONCAT44(fVar18 * fVar15 - fVar19 * fVar6,fVar6 * fVar18 + fVar19 * fVar15);
      *(ulong *)(param_1 + 0x68) = CONCAT44(fVar7,fVar7);
      if ((local_6c & 0xc) == 0) {
        *(undefined4 *)(param_1 + 0xa0) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      else {
        if ((local_6c & 4) != 0) {
          *(float *)(param_1 + 0x50) = 0.0 - fVar20;
          *(float *)(param_1 + 0x54) = 0.0 - fVar12;
          *(float *)(param_1 + 0x58) = 0.0 - fVar16;
          *(float *)(param_1 + 0x5c) = 0.0 - fVar16;
        }
        AngleConstraintPart::CalculateConstraintProperties
                  (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                   param_2,param_7);
      }
      goto LAB_0010d3a8;
    }
    if (((~(byte)SVar1 & 0x30) != 0) && ((local_6c & 0x3c) != 0)) {
      fVar8 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
      fVar15 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
      fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
      fVar7 = ((fStack_8c * fVar11 - local_98 * fVar9) - fStack_94 * fVar17) - fVar4 * fVar10;
      fVar6 = fVar8 + fVar8;
      fVar12 = fVar7 + fVar7;
      fVar19 = fVar6 * fVar3 - fVar12 * fVar15;
      fVar15 = fVar15 * fVar6 + fVar3 * fVar12;
      fVar6 = (fVar6 * fVar8 + fVar12 * fVar7) - _LC0;
      fVar18 = (local_68 * fVar11 + fStack_5c * fVar9 + fStack_60 * fVar17) - fStack_64 * fVar10;
      fVar7 = (fStack_64 * fVar11 - fStack_60 * fVar9) + fStack_5c * fVar17 + local_68 * fVar10;
      fVar12 = fVar18 + fVar18;
      fVar8 = ((fStack_60 * fVar11 + fStack_64 * fVar9) - local_68 * fVar17) + fStack_5c * fVar10;
      fVar3 = ((fStack_5c * fVar11 - local_68 * fVar9) - fStack_64 * fVar17) - fStack_60 * fVar10;
      fVar20 = fVar3 + fVar3;
      fVar16 = fVar12 * fVar8 - fVar20 * fVar7;
      fVar8 = fVar7 * fVar12 + fVar8 * fVar20;
      fVar12 = (fVar12 * fVar18 + fVar20 * fVar3) - _LC0;
      fVar7 = fVar15 * fVar12 - fVar8 * fVar6;
      fVar3 = fVar19 * fVar8 - fVar16 * fVar15;
      fVar6 = fVar6 * fVar16 - fVar12 * fVar19;
      auVar13._4_4_ = fVar6;
      auVar13._0_4_ = fVar3;
      auVar13._8_4_ = fVar7;
      auVar13._12_4_ = fVar7;
      auVar14._0_4_ = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3 + 0.0);
      if (auVar14._0_4_ != 0.0) {
        auVar14._4_4_ = auVar14._0_4_;
        auVar14._8_4_ = auVar14._0_4_;
        auVar14._12_4_ = auVar14._0_4_;
        auVar14 = divps(auVar13,auVar14);
        *(undefined1 (*) [16])(param_1 + 0x50) = auVar14;
        AngleConstraintPart::CalculateConstraintProperties
                  (auVar14._0_8_,*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,param_2,param_7);
        goto LAB_0010da8e;
      }
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar13;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
LAB_0010da8e:
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    fVar8 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar12 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar6 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar15 = fVar12 + fVar12;
    fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar16 = fVar6 + fVar6;
    fVar19 = fVar15 * fVar3 + fVar16 * fVar8;
    *(ulong *)(param_1 + 0x50) =
         CONCAT44((fVar15 * fVar12 + fVar6 * fVar16) - _LC0,fVar15 * fVar8 - fVar16 * fVar3);
    *(ulong *)(param_1 + 0x58) = CONCAT44(fVar19,fVar19);
    fVar19 = fVar3 + fVar3;
    fVar15 = fVar8 * fVar19 + fVar16 * fVar12;
    fVar8 = fVar19 * fVar12 - fVar16 * fVar8;
    fVar7 = (fVar3 * fVar19 + fVar6 * fVar16) - fVar7;
    *(ulong *)(param_1 + 0x60) = CONCAT44(fVar8,fVar15);
    *(ulong *)(param_1 + 0x68) = CONCAT44(fVar7,fVar7);
    if (((byte)SVar1 & 4) == 0) {
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                 param_2,param_7);
      if ((local_6c & 0x30) == 0) goto LAB_0010da8e;
      if ((local_6c & 0x10) != 0) {
        *(float *)(param_1 + 0x60) = 0.0 - fVar15;
        *(float *)(param_1 + 100) = 0.0 - fVar8;
        *(float *)(param_1 + 0x68) = 0.0 - fVar7;
        *(float *)(param_1 + 0x6c) = 0.0 - fVar7;
      }
    }
    else {
      AngleConstraintPart::CalculateConstraintProperties
                (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),0,param_1 + 0x80,
                 param_2,param_7);
    }
LAB_0010d3a8:
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0,param_1 + 0xb0,
               param_2,param_7);
  }
  if (((byte)SVar1 & 1) == 0) {
    if ((((byte)SVar1 & 8) != 0) || ((local_6c & 3) == 0)) {
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d538;
    }
    fVar7 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar6 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar3 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar4 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar9 = fVar7 + fVar7;
    fVar17 = fVar4 + fVar4;
    auVar5._0_4_ = (fVar4 * fVar17 + fVar7 * fVar9) - _LC0;
    fVar7 = fVar9 * fVar3 - fVar17 * fVar6;
    fVar4 = fVar9 * fVar6 + fVar17 * fVar3;
    auVar5._12_4_ = fVar7;
    auVar5._8_4_ = fVar7;
    auVar5._4_4_ = fVar4;
    if ((local_6c & 1) != 0) {
      auVar5._4_4_ = 0.0 - fVar4;
      auVar5._0_4_ = 0.0 - auVar5._0_4_;
      auVar5._8_4_ = 0.0 - fVar7;
      auVar5._12_4_ = 0.0 - fVar7;
    }
    *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  else {
    fVar3 = (fVar11 * local_98 + fVar9 * fStack_8c + fVar17 * fVar4) - fVar10 * fStack_94;
    fVar8 = (fVar11 * fStack_94 - fVar9 * fVar4) + fVar17 * fStack_8c + fVar10 * local_98;
    fVar6 = fVar3 + fVar3;
    fVar7 = ((fVar11 * fStack_8c - fVar9 * local_98) - fVar17 * fStack_94) - fVar10 * fVar4;
    fVar9 = ((fVar11 * fVar4 + fVar9 * fStack_94) - fVar17 * local_98) + fVar10 * fStack_8c;
    fVar17 = fVar7 + fVar7;
    fVar4 = fVar6 * fVar9 - fVar17 * fVar8;
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar6 * fVar8 + fVar17 * fVar9,(fVar7 * fVar17 + fVar3 * fVar6) - _LC0);
    *(ulong *)(param_1 + 0x78) = CONCAT44(fVar4,fVar4);
    lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  }
  if (local_40 == lVar2) {
    AngleConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),0,param_1 + 0xe0,
               param_2,param_7);
    return;
  }
LAB_0010d538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SwingTwistConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, JPH::Quat,
   JPH::Quat, JPH::Quat, float) const */

undefined8
JPH::SwingTwistConstraintPart::SolvePositionConstraint
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,SwingTwistConstraintPart *param_1,Mat44 *param_2,
          Mat44 *param_9)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long in_FS_OFFSET;
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
  uint local_1bc;
  undefined1 local_1b8 [12];
  float fStack_1ac;
  ulong local_1a8;
  long lStack_1a0;
  Body local_198 [16];
  undefined8 local_188;
  ulong uStack_180;
  undefined8 local_178;
  ulong uStack_170;
  ulong local_168;
  long lStack_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  ulong uStack_140;
  undefined1 local_138 [16];
  ulong local_128;
  long lStack_120;
  Body local_118 [192];
  undefined1 local_58 [16];
  long local_40;
  
  fVar16 = (float)((ulong)param_5 >> 0x20);
  fVar15 = (float)param_5;
  fVar7 = (float)((ulong)param_4 >> 0x20);
  fVar6 = (float)param_4;
  fStack_1ac = (float)((ulong)param_2_00 >> 0x20);
  local_1b8._8_4_ = (undefined4)param_2_00;
  fVar3 = (float)((ulong)param_1_00 >> 0x20);
  fVar2 = (float)param_1_00;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar8 = SQRT(fStack_1ac * fStack_1ac + fVar2 * fVar2);
  if (fVar8 == 0.0) {
    local_1b8._0_8_ = param_1_00;
    local_1a8 = __LC47;
    lStack_1a0 = _UNK_0010e8d8;
  }
  else {
    local_1a8 = (ulong)(uint)(fVar2 / fVar8);
    lStack_1a0 = (ulong)(uint)(fStack_1ac / fVar8) << 0x20;
    auVar1._8_4_ = fVar8;
    auVar1._4_4_ = ((float)local_1b8._8_4_ * fStack_1ac + fVar2 * fVar3) / fVar8;
    auVar1._0_4_ = (fVar3 * fStack_1ac - fVar2 * (float)local_1b8._8_4_) / fVar8;
    auVar1._12_4_ = 0;
    _local_1b8 = auVar1 << 0x20;
  }
  ClampSwingTwist(param_1,local_1b8,(Quat *)&local_1a8,&local_1bc);
  uVar4 = 0;
  if (local_1bc != 0) {
    fVar9 = (float)param_3;
    local_58 = (undefined1  [16])0x0;
    fVar2 = SUB164(_local_1b8,8);
    fVar3 = SUB164(_local_1b8,0);
    fVar8 = SUB164(_local_1b8,0xc);
    fVar10 = (float)((ulong)param_3 >> 0x20);
    fVar5 = SUB164(_local_1b8,4);
    fVar18 = (fVar7 * fVar3 + fVar9 * fVar8 + fVar10 * fVar2) - fVar6 * fVar5;
    fVar17 = (fVar7 * fVar5 - fVar9 * fVar2) + fVar10 * fVar8 + fVar6 * fVar3;
    fVar20 = (float)lStack_1a0;
    fVar21 = (float)((ulong)lStack_1a0 >> 0x20);
    fVar12 = (float)local_1a8;
    fVar14 = (float)(local_1a8 >> 0x20);
    fVar13 = ((fVar7 * fVar8 - fVar9 * fVar3) - fVar10 * fVar5) - fVar6 * fVar2;
    fVar8 = ((fVar7 * fVar2 + fVar9 * fVar5) - fVar10 * fVar3) + fVar6 * fVar8;
    fVar2 = (float)*(undefined8 *)(param_9 + 0x10);
    fVar19 = fVar2 + fVar2;
    fVar9 = (float)((uint)((fVar12 * fVar13 + fVar21 * fVar18 + fVar20 * fVar17) - fVar14 * fVar8) ^
                   __LC49);
    fVar10 = (float)((uint)(fVar12 * fVar8 + (fVar14 * fVar13 - fVar20 * fVar18) + fVar21 * fVar17)
                    ^ _UNK_0010e9b4);
    fVar11 = (float)((uint)(((fVar20 * fVar13 + fVar14 * fVar18) - fVar12 * fVar17) + fVar21 * fVar8
                           ) ^ _UNK_0010e9b8);
    fVar12 = (float)((uint)(((fVar21 * fVar13 - fVar12 * fVar18) - fVar14 * fVar17) - fVar20 * fVar8
                           ) ^ _UNK_0010e9bc);
    fVar7 = (float)param_6;
    fVar5 = (float)((ulong)param_6 >> 0x20);
    fVar3 = (float)*(undefined8 *)(param_9 + 0x18);
    fVar20 = fVar3 * (fVar3 + fVar3);
    fVar6 = (float)((ulong)*(undefined8 *)(param_9 + 0x18) >> 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_9 + 0x10) >> 0x20);
    fVar13 = fVar8 + fVar8;
    fVar14 = fVar6 * (fVar3 + fVar3);
    local_158._0_4_ = (_LC0 - fVar8 * fVar13) - fVar20;
    local_158._4_4_ = fVar8 * fVar19 + fVar14;
    local_158._8_4_ = fVar3 * fVar19 - fVar13 * fVar6;
    local_158._12_4_ = 0;
    uStack_140 = (ulong)(uint)(fVar19 * fVar6 + fVar3 * fVar13);
    local_148 = CONCAT44((_LC0 - fVar20) - fVar2 * fVar19,fVar8 * fVar19 - fVar14);
    local_138._4_4_ = fVar3 * fVar13 - fVar19 * fVar6;
    local_138._0_4_ = fVar3 * fVar19 + fVar13 * fVar6;
    fVar6 = (float)*(undefined8 *)(param_2 + 0x18);
    fVar3 = (float)*(undefined8 *)(param_2 + 0x10);
    fVar14 = fVar3 + fVar3;
    local_128 = __LC47;
    lStack_120 = _UNK_0010e8d8;
    local_168 = __LC47;
    lStack_160 = _UNK_0010e8d8;
    fVar20 = fVar6 * (fVar6 + fVar6);
    local_138._8_4_ = (_LC0 - fVar2 * fVar19) - fVar8 * fVar13;
    local_138._12_4_ = 0;
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar21 = (fVar6 + fVar6) * fVar8;
    fVar13 = fVar2 + fVar2;
    local_198._0_4_ = (_LC0 - fVar2 * fVar13) - fVar20;
    local_198._4_4_ = fVar2 * fVar14 + fVar21;
    local_198._8_4_ = fVar6 * fVar14 - fVar13 * fVar8;
    local_198._12_4_ = 0;
    uStack_170 = (ulong)(uint)((_LC0 - fVar3 * fVar14) - fVar2 * fVar13);
    local_188 = CONCAT44((_LC0 - fVar20) - fVar3 * fVar14,fVar2 * fVar14 - fVar21);
    uStack_180 = (ulong)(uint)(fVar14 * fVar8 + fVar6 * fVar13);
    local_178 = CONCAT44(fVar6 * fVar13 - fVar14 * fVar8,fVar6 * fVar14 + fVar13 * fVar8);
    RotationEulerConstraintPart::CalculateConstraintProperties(local_118,param_2,local_198,param_9);
    uVar4 = RotationEulerConstraintPart::SolvePositionConstraint
                      (CONCAT44((fVar10 * fVar5 - fVar11 * fVar15) + fVar12 * fVar16 + fVar9 * fVar7
                                ,(fVar12 * fVar15 + fVar9 * fVar5 + fVar11 * fVar16) -
                                 fVar10 * fVar7),
                       CONCAT44(((fVar12 * fVar5 - fVar9 * fVar15) - fVar10 * fVar16) -
                                fVar11 * fVar7,
                                ((fVar10 * fVar15 + fVar11 * fVar5) - fVar9 * fVar16) +
                                fVar12 * fVar7),local_118,param_2,param_9);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* JPH::SixDOFConstraint::GetPositionConstraintProperties(JPH::Vec3&, JPH::Vec3&, JPH::Vec3&) const
    */

void __thiscall
JPH::SixDOFConstraint::GetPositionConstraintProperties
          (SixDOFConstraint *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  float *pfVar4;
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
  float fVar29;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  pfVar2 = *(float **)(this + 0x28);
  fVar5 = *(float *)(this + 0x40);
  fVar6 = *(float *)(this + 0x44);
  fVar7 = *(float *)(this + 0x48);
  fVar11 = (float)*(undefined8 *)(pfVar2 + 4);
  uVar3 = *(undefined8 *)pfVar2;
  fVar12 = (float)*(undefined8 *)(pfVar2 + 6);
  fVar25 = (float)((ulong)*(undefined8 *)(pfVar2 + 4) >> 0x20);
  fVar13 = fVar11 + fVar11;
  fVar14 = fVar25 + fVar25;
  fVar1 = pfVar2[2];
  fVar26 = (float)((ulong)*(undefined8 *)(pfVar2 + 6) >> 0x20);
  pfVar4 = *(float **)(this + 0x30);
  fVar17 = (float)*(undefined8 *)(pfVar4 + 4);
  fVar16 = (float)*(undefined8 *)(pfVar4 + 6);
  fVar28 = fVar12 * (fVar12 + fVar12);
  fVar27 = fVar17 + fVar17;
  fVar19 = fVar26 * (fVar12 + fVar12);
  fVar23 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
  fVar15 = fVar23 + fVar23;
  fVar29 = fVar16 * (fVar16 + fVar16);
  fVar21 = fVar24 * (fVar16 + fVar16);
  fVar8 = *(float *)(this + 0x50);
  fVar9 = *(float *)(this + 0x54);
  fVar10 = *(float *)(this + 0x58);
  fVar22 = _LC0 - fVar25 * fVar14;
  fVar18 = _LC0 - fVar11 * fVar13;
  fVar20 = _LC0 - fVar28;
  local_38 = (float)*(undefined8 *)pfVar4;
  fStack_34 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
  local_38 = ((_LC0 - fVar23 * fVar15) - fVar29) * fVar8 + (fVar23 * fVar27 - fVar21) * fVar9 +
             fVar10 * (fVar16 * fVar27 + fVar15 * fVar24) + local_38;
  fStack_34 = (fVar23 * fVar27 + fVar21) * fVar8 + ((_LC0 - fVar29) - fVar17 * fVar27) * fVar9 +
              fVar10 * (fVar16 * fVar15 - fVar27 * fVar24) + fStack_34;
  fVar16 = (fVar16 * fVar27 - fVar15 * fVar24) * fVar8 + (fVar27 * fVar24 + fVar16 * fVar15) * fVar9
           + fVar10 * ((_LC0 - fVar17 * fVar27) - fVar23 * fVar15) + pfVar4[2];
  fVar17 = fVar8 * 0.0 + fVar9 * 0.0 + fVar10 * 0.0 + 1.0;
  fVar8 = pfVar2[1];
  fVar9 = pfVar2[2];
  fVar10 = pfVar2[3];
  *(float *)param_1 = local_38 - *pfVar2;
  *(float *)(param_1 + 4) = fStack_34 - fVar8;
  *(float *)(param_1 + 8) = fVar16 - fVar9;
  *(float *)(param_1 + 0xc) = fVar17 - fVar10;
  fVar8 = pfVar4[1];
  fVar9 = pfVar4[2];
  fVar10 = pfVar4[3];
  *(float *)param_2 = local_38 - *pfVar4;
  *(float *)(param_2 + 4) = fStack_34 - fVar8;
  *(float *)(param_2 + 8) = fVar16 - fVar9;
  *(float *)(param_2 + 0xc) = fVar17 - fVar10;
  local_48 = (float)uVar3;
  fStack_44 = (float)((ulong)uVar3 >> 0x20);
  *(float *)param_3 =
       local_38 -
       ((fVar22 - fVar28) * fVar5 + (fVar25 * fVar13 - fVar19) * fVar6 +
        fVar7 * (fVar12 * fVar13 + fVar14 * fVar26) + local_48);
  *(float *)(param_3 + 4) =
       fStack_34 -
       ((fVar25 * fVar13 + fVar19) * fVar5 + (fVar20 - fVar11 * fVar13) * fVar6 +
        fVar7 * (fVar12 * fVar14 - fVar13 * fVar26) + fStack_44);
  *(float *)(param_3 + 8) =
       fVar16 - ((fVar12 * fVar13 - fVar14 * fVar26) * fVar5 +
                 (fVar13 * fVar26 + fVar12 * fVar14) * fVar6 + fVar7 * (fVar18 - fVar25 * fVar14) +
                fVar1);
  *(float *)(param_3 + 0xc) = fVar17 - (fVar5 * 0.0 + fVar6 * 0.0 + fVar7 * 0.0 + 1.0);
  return;
}



/* JPH::GetRTTIOfType(JPH::SixDOFConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC88;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::SixDOFConstraint::~SixDOFConstraint() */

void __thiscall JPH::SixDOFConstraint::~SixDOFConstraint(SixDOFConstraint *this)

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
/* JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings() */

void __thiscall
JPH::SixDOFConstraintSettings::~SixDOFConstraintSettings(SixDOFConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



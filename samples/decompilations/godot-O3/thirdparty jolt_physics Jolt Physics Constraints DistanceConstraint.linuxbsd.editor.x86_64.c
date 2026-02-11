
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::DistanceConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::DistanceConstraint::NotifyShapeChanged
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



/* JPH::DistanceConstraint::ResetWarmStart() */

void __thiscall JPH::DistanceConstraint::ResetWarmStart(DistanceConstraint *this)

{
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}



/* JPH::DistanceConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::DistanceConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::DistanceConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::DistanceConstraintSettings::SaveBinaryState
          (DistanceConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
  JPH::SpringSettings::SaveBinaryState((StreamOut *)(this + 0x58));
  return;
}



/* JPH::DistanceConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::DistanceConstraintSettings::RestoreBinaryState
          (DistanceConstraintSettings *this,StreamIn *param_1)

{
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
  JPH::SpringSettings::RestoreBinaryState((StreamIn *)(this + 0x58));
  return;
}



/* JPH::DistanceConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall
JPH::DistanceConstraint::DrawConstraint(DistanceConstraint *this,DebugRenderer *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_78;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  long local_20;
  
  fVar3 = *(float *)(this + 0x80);
  fVar4 = *(float *)(this + 0x84);
  fVar5 = *(float *)(this + 0x88);
  fVar6 = *(float *)(this + 0x8c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar12 = *(float *)(this + 0x90) - fVar3;
  fVar13 = *(float *)(this + 0x94) - fVar4;
  fVar14 = *(float *)(this + 0x98) - fVar5;
  pcVar2 = *(code **)(*(long *)param_1 + 0x10);
  fVar1 = *(float *)(this + 0x60);
  fVar15 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12 + 0.0);
  if (fVar1 <= fVar15) {
    fVar1 = *(float *)(this + 100);
    if (fVar15 <= fVar1) {
      (*pcVar2)(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88),
                *(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),param_1,
                (undefined4)Color::sGreen);
    }
    else {
      if (fVar15 <= 0.0) {
        auVar9 = ZEXT416((uint)fVar15) << 0x20;
      }
      else {
        auVar9._0_4_ = fVar1 * fVar12;
        auVar9._4_4_ = fVar1 * fVar13;
        auVar9._8_4_ = fVar1 * fVar14;
        auVar9._12_4_ = fVar1 * (*(float *)(this + 0x9c) - fVar6);
        auVar11._4_4_ = fVar15;
        auVar11._0_4_ = fVar15;
        auVar11._8_4_ = fVar15;
        auVar11._12_4_ = fVar15;
        auVar9 = divps(auVar9,auVar11);
      }
      local_78 = CONCAT44(fVar4 + auVar9._4_4_,fVar3 + auVar9._0_4_);
      uVar7 = CONCAT44(fVar6 + auVar9._12_4_,fVar5 + auVar9._8_4_);
      (*pcVar2)(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88),local_78,uVar7,param_1,
                (undefined4)Color::sGreen);
      (**(code **)(*(long *)param_1 + 0x10))
                (local_78,uVar7,*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),param_1,
                 (undefined4)Color::sRed);
    }
  }
  else {
    if (fVar15 <= 0.0) {
      auVar9 = ZEXT416((uint)fVar15) << 0x20;
    }
    else {
      auVar8._0_4_ = fVar1 * fVar12;
      auVar8._4_4_ = fVar1 * fVar13;
      auVar8._8_4_ = fVar1 * fVar14;
      auVar8._12_4_ = fVar1 * (*(float *)(this + 0x9c) - fVar6);
      auVar10._4_4_ = fVar15;
      auVar10._0_4_ = fVar15;
      auVar10._8_4_ = fVar15;
      auVar10._12_4_ = fVar15;
      auVar9 = divps(auVar8,auVar10);
    }
    local_78 = CONCAT44(fVar4 + auVar9._4_4_,fVar3 + auVar9._0_4_);
    (*pcVar2)(*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88),*(undefined8 *)(this + 0x90)
              ,*(undefined8 *)(this + 0x98),param_1,(undefined4)Color::sGreen);
    (**(code **)(*(long *)param_1 + 0x10))
              (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),local_78,
               CONCAT44(fVar6 + auVar9._12_4_,fVar5 + auVar9._8_4_),param_1,
               (undefined4)Color::sYellow);
  }
  JPH::DebugRenderer::DrawMarker
            (*(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88),param_1,
             (undefined4)Color::sWhite);
  JPH::DebugRenderer::DrawMarker
            (*(undefined8 *)(this + 0x90),*(undefined8 *)(this + 0x98),param_1,
             (undefined4)Color::sWhite);
  pcVar2 = *(code **)(*(long *)param_1 + 0x38);
  JPH::StringFormat_abi_cxx11_((char *)&local_48,(double)fVar15,&_LC6);
  local_58 = local_40;
  local_50 = local_48;
  local_78 = CONCAT44((*(float *)(this + 0x84) + *(float *)(this + 0x94)) * _LC8,
                      (*(float *)(this + 0x80) + *(float *)(this + 0x90)) * _LC8);
  (*pcVar2)(local_78,CONCAT44((*(float *)(this + 0x8c) + *(float *)(this + 0x9c)) * _LC8,
                              (*(float *)(this + 0x88) + *(float *)(this + 0x98)) * _LC8),param_1,
            &local_58,(undefined4)Color::sWhite);
  if (local_48 != local_38) {
    (*Free)();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::DistanceConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::DistanceConstraint::SaveState(DistanceConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0xf4,4);
                    /* WARNING: Could not recover jumptable at 0x00100548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0xa0,0xc);
  return;
}



/* JPH::DistanceConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::DistanceConstraint::RestoreState(DistanceConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xf4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xa0,0xc);
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x70);
  uVar1 = _LC9;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined1 *)((long)puVar2 + 0xc) = 1;
  *puVar2 = &PTR_GetRTTI_001037a8;
  puVar2[2] = 0;
  puVar2[3] = 0x3f80000000000000;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 1;
  puVar2[10] = uVar1;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined1 (*) [16])(puVar2 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar2 + 8) = (undefined1  [16])0x0;
  return;
}



/* JPH::DistanceConstraint::GetConstraintSettings() const */

void JPH::DistanceConstraint::GetConstraintSettings(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ConstraintSettings *in_RSI;
  undefined8 *in_RDI;
  
  puVar5 = (undefined8 *)(*Allocate)(0x70);
  *(undefined4 *)(puVar5 + 1) = 0;
  *(undefined1 *)((long)puVar5 + 0xc) = 1;
  *puVar5 = &PTR_GetRTTI_001037a8;
  puVar5[3] = 0x3f80000000000000;
  uVar1 = _LC9;
  puVar5[2] = 0;
  puVar5[10] = uVar1;
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 1;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  *(undefined8 *)((long)puVar5 + 0x5c) = 0;
  *(undefined1 (*) [16])(puVar5 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar5 + 8) = (undefined1  [16])0x0;
  JPH::Constraint::ToConstraintSettings(in_RSI);
  uVar1 = *(undefined8 *)(in_RSI + 0x40);
  uVar2 = *(undefined8 *)(in_RSI + 0x48);
  uVar3 = *(undefined8 *)(in_RSI + 0x50);
  uVar4 = *(undefined8 *)(in_RSI + 0x58);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[6] = uVar1;
  puVar5[7] = uVar2;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  puVar5[10] = *(undefined8 *)(in_RSI + 0x60);
  puVar5[0xb] = *(undefined8 *)(in_RSI + 0x68);
  *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(in_RSI + 0x70);
  *in_RDI = puVar5;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::SolveVelocityConstraint(float) */

undefined8 JPH::DistanceConstraint::SolveVelocityConstraint(float param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long in_RDI;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar27 [16];
  float fVar26;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar19 = *(float *)(in_RDI + 0xe8);
  if (fVar19 == 0.0) {
    return 0;
  }
  fVar25 = *(float *)(in_RDI + 0xb4);
  pfVar5 = *(float **)(*(long *)(in_RDI + 0x28) + 0x48);
  cVar1 = *(char *)(*(long *)(in_RDI + 0x28) + 0x78);
  pfVar6 = *(float **)(*(long *)(in_RDI + 0x30) + 0x48);
  cVar2 = *(char *)(*(long *)(in_RDI + 0x30) + 0x78);
  fVar32 = *(float *)(in_RDI + 0xb0);
  local_18 = (float)*(undefined8 *)(in_RDI + 0xa0);
  fStack_14 = (float)((ulong)*(undefined8 *)(in_RDI + 0xa0) >> 0x20);
  fStack_10 = (float)*(undefined8 *)(in_RDI + 0xa8);
  fStack_c = (float)((ulong)*(undefined8 *)(in_RDI + 0xa8) >> 0x20);
  if (cVar1 == '\x01') {
    fVar21 = *pfVar6;
    fVar22 = pfVar6[1];
    fVar23 = pfVar6[2];
    fVar24 = pfVar6[3];
    fVar20 = pfVar6[0x16];
    fVar26 = *(float *)(in_RDI + 0xf4);
    fVar19 = ((((pfVar5[2] - fVar23) * fStack_10 +
                (pfVar5[1] - fVar22) * fStack_14 + (*pfVar5 - fVar21) * local_18 + 0.0 +
               (float)*(undefined8 *)(pfVar5 + 6) * *(float *)(in_RDI + 0xc0) +
               (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) * *(float *)(in_RDI + 0xbc) +
               (float)*(undefined8 *)(pfVar5 + 4) * *(float *)(in_RDI + 0xb8) + 0.0) -
              ((float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * *(float *)(in_RDI + 200) +
               (float)*(undefined8 *)(pfVar6 + 4) * *(float *)(in_RDI + 0xc4) + 0.0 +
              (float)*(undefined8 *)(pfVar6 + 6) * *(float *)(in_RDI + 0xcc))) -
             (*(float *)(in_RDI + 0xf0) * fVar26 + *(float *)(in_RDI + 0xec))) * fVar19 + fVar26;
    if (fVar32 <= fVar19) {
      fVar32 = fVar19;
    }
    if (fVar32 <= fVar25) {
      fVar25 = fVar32;
    }
    *(float *)(in_RDI + 0xf4) = fVar25;
    fVar25 = fVar25 - fVar26;
    if (fVar25 == 0.0) {
      return 0;
    }
    bVar3 = *(byte *)((long)pfVar6 + 0x7a);
    fVar20 = fVar20 * fVar25;
    fVar21 = fVar20 * local_18 + fVar21;
    fVar22 = fVar20 * fStack_14 + fVar22;
    fVar23 = fVar20 * fStack_10 + fVar23;
    fVar24 = fVar20 * fStack_c + fVar24;
  }
  else {
    if (cVar1 == '\x02') {
      if (cVar2 == '\x01') {
        fVar21 = *pfVar5;
        fVar22 = pfVar5[1];
        fVar23 = pfVar5[2];
        fVar24 = pfVar5[3];
        fVar20 = pfVar5[0x16];
        fVar26 = *(float *)(in_RDI + 0xf4);
        fVar19 = ((((float)*(undefined8 *)(pfVar5 + 6) * *(float *)(in_RDI + 0xc0) +
                    (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) * *(float *)(in_RDI + 0xbc)
                    + (float)*(undefined8 *)(pfVar5 + 4) * *(float *)(in_RDI + 0xb8) + 0.0 +
                   (fVar23 - pfVar6[2]) * fStack_10 +
                   (fVar22 - pfVar6[1]) * fStack_14 + (fVar21 - *pfVar6) * local_18 + 0.0) -
                  ((float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * *(float *)(in_RDI + 200) +
                   (float)*(undefined8 *)(pfVar6 + 4) * *(float *)(in_RDI + 0xc4) + 0.0 +
                  (float)*(undefined8 *)(pfVar6 + 6) * *(float *)(in_RDI + 0xcc))) -
                 (*(float *)(in_RDI + 0xf0) * fVar26 + *(float *)(in_RDI + 0xec))) * fVar19 + fVar26
        ;
        if (fVar32 <= fVar19) {
          fVar32 = fVar19;
        }
        if (fVar32 <= fVar25) {
          fVar25 = fVar32;
        }
        *(float *)(in_RDI + 0xf4) = fVar25;
        fVar25 = fVar25 - fVar26;
        if (fVar25 == 0.0) {
          return 0;
        }
        bVar3 = *(byte *)((long)pfVar5 + 0x7a);
        fVar20 = fVar20 * fVar25;
        auVar30._1_3_ = 0;
        auVar30[0] = bVar3;
        auVar30[4] = bVar3;
        auVar30._5_3_ = 0;
        auVar30[8] = bVar3;
        auVar30._9_3_ = 0;
        auVar30[0xc] = bVar3;
        auVar30._13_3_ = 0;
        auVar14._4_4_ = _UNK_001038d4;
        auVar14._0_4_ = __LC12;
        auVar14._8_4_ = _UNK_001038d8;
        auVar14._12_4_ = _UNK_001038dc;
        auVar30 = auVar30 & auVar14;
        bVar7 = auVar30._4_4_ == _UNK_001038d4;
        bVar8 = auVar30._8_4_ == _UNK_001038d8;
        bVar9 = auVar30._12_4_ == _UNK_001038dc;
        *pfVar5 = (float)((uint)(fVar21 - fVar20 * local_18) & -(uint)(auVar30._0_4_ == __LC12));
        pfVar5[1] = (float)((uint)(fVar22 - fVar20 * fStack_14) & -(uint)bVar7);
        pfVar5[2] = (float)((uint)(fVar23 - fVar20 * fStack_10) & -(uint)bVar8);
        pfVar5[3] = (float)((uint)(fVar24 - fVar20 * fStack_c) & -(uint)bVar9);
      }
      else {
        if (cVar2 == '\x02') {
          fVar22 = *pfVar5;
          fVar23 = pfVar5[1];
          fVar24 = pfVar5[2];
          fVar10 = pfVar5[3];
          fVar20 = pfVar6[0x16];
          fVar26 = pfVar5[0x16];
          fVar21 = *(float *)(in_RDI + 0xf4);
          fVar19 = ((((float)*(undefined8 *)(pfVar5 + 6) * *(float *)(in_RDI + 0xc0) +
                      (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) *
                      *(float *)(in_RDI + 0xbc) +
                      (float)*(undefined8 *)(pfVar5 + 4) * *(float *)(in_RDI + 0xb8) + 0.0 +
                     (fVar24 - pfVar6[2]) * fStack_10 +
                     (fVar23 - pfVar6[1]) * fStack_14 + (fVar22 - *pfVar6) * local_18 + 0.0) -
                    ((float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * *(float *)(in_RDI + 200)
                     + (float)*(undefined8 *)(pfVar6 + 4) * *(float *)(in_RDI + 0xc4) + 0.0 +
                    (float)*(undefined8 *)(pfVar6 + 6) * *(float *)(in_RDI + 0xcc))) -
                   (*(float *)(in_RDI + 0xf0) * fVar21 + *(float *)(in_RDI + 0xec))) * fVar19 +
                   fVar21;
          if (fVar32 <= fVar19) {
            fVar32 = fVar19;
          }
          if (fVar32 <= fVar25) {
            fVar25 = fVar32;
          }
          *(float *)(in_RDI + 0xf4) = fVar25;
          iVar18 = _UNK_001038dc;
          iVar17 = _UNK_001038d8;
          iVar16 = _UNK_001038d4;
          iVar15 = __LC12;
          fVar25 = fVar25 - fVar21;
          if (fVar25 != 0.0) {
            bVar3 = *(byte *)((long)pfVar5 + 0x7a);
            bVar4 = *(byte *)((long)pfVar6 + 0x7a);
            fVar26 = fVar26 * fVar25;
            auVar13._4_4_ = _UNK_001038d4;
            auVar13._0_4_ = __LC12;
            auVar13._8_4_ = _UNK_001038d8;
            auVar13._12_4_ = _UNK_001038dc;
            fVar20 = fVar25 * fVar20;
            auVar28._1_3_ = 0;
            auVar28[0] = bVar3;
            auVar28[4] = bVar3;
            auVar28._5_3_ = 0;
            auVar28[8] = bVar3;
            auVar28._9_3_ = 0;
            auVar28[0xc] = bVar3;
            auVar28._13_3_ = 0;
            auVar28 = auVar28 & auVar13;
            bVar7 = auVar28._4_4_ == _UNK_001038d4;
            bVar8 = auVar28._8_4_ == _UNK_001038d8;
            bVar9 = auVar28._12_4_ == _UNK_001038dc;
            *pfVar5 = (float)((uint)(fVar22 - fVar26 * local_18) & -(uint)(auVar28._0_4_ == __LC12))
            ;
            pfVar5[1] = (float)((uint)(fVar23 - fVar26 * fStack_14) & -(uint)bVar7);
            pfVar5[2] = (float)((uint)(fVar24 - fVar26 * fStack_10) & -(uint)bVar8);
            pfVar5[3] = (float)((uint)(fVar10 - fVar26 * fStack_c) & -(uint)bVar9);
            fVar19 = *(float *)(in_RDI + 0xd4);
            fVar32 = *(float *)(in_RDI + 0xd8);
            fVar26 = *(float *)(in_RDI + 0xdc);
            pfVar5[4] = pfVar5[4] - *(float *)(in_RDI + 0xd0) * fVar25;
            pfVar5[5] = pfVar5[5] - fVar19 * fVar25;
            pfVar5[6] = pfVar5[6] - fVar32 * fVar25;
            pfVar5[7] = pfVar5[7] - fVar26 * fVar25;
            auVar29._1_3_ = 0;
            auVar29[0] = bVar4;
            auVar29[4] = bVar4;
            auVar29._5_3_ = 0;
            auVar29[8] = bVar4;
            auVar29._9_3_ = 0;
            auVar29[0xc] = bVar4;
            auVar29._13_3_ = 0;
            auVar29 = auVar29 & auVar13;
            *pfVar6 = (float)((uint)(fVar20 * local_18 + *pfVar6) & -(uint)(auVar29._0_4_ == iVar15)
                             );
            pfVar6[1] = (float)((uint)(fVar20 * fStack_14 + pfVar6[1]) &
                               -(uint)(auVar29._4_4_ == iVar16));
            pfVar6[2] = (float)((uint)(fVar20 * fStack_10 + pfVar6[2]) &
                               -(uint)(auVar29._8_4_ == iVar17));
            pfVar6[3] = (float)((uint)(fVar20 * fStack_c + pfVar6[3]) &
                               -(uint)(auVar29._12_4_ == iVar18));
            fVar19 = *(float *)(in_RDI + 0xe0);
            fVar32 = *(float *)(in_RDI + 0xe4);
            fVar20 = *(float *)(in_RDI + 0xe8);
            pfVar6[4] = *(float *)(in_RDI + 0xdc) * fVar25 + pfVar6[4];
            pfVar6[5] = fVar19 * fVar25 + pfVar6[5];
            pfVar6[6] = fVar32 * fVar25 + pfVar6[6];
            pfVar6[7] = fVar20 * fVar25 + pfVar6[7];
            return 1;
          }
          return 0;
        }
        if (cVar2 != '\0') {
          return 0;
        }
        fVar20 = pfVar5[0x16];
        fVar26 = *(float *)(in_RDI + 0xf4);
        fVar19 = (((float)*(undefined8 *)(pfVar5 + 6) * *(float *)(in_RDI + 0xc0) +
                   (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20) * *(float *)(in_RDI + 0xbc) +
                   (float)*(undefined8 *)(pfVar5 + 4) * *(float *)(in_RDI + 0xb8) + 0.0 +
                  fStack_10 * (float)*(undefined8 *)(pfVar5 + 2) +
                  fStack_14 * (float)((ulong)*(undefined8 *)pfVar5 >> 0x20) +
                  local_18 * (float)*(undefined8 *)pfVar5 + 0.0) -
                 (*(float *)(in_RDI + 0xf0) * fVar26 + *(float *)(in_RDI + 0xec))) * fVar19 + fVar26
        ;
        if (fVar32 <= fVar19) {
          fVar32 = fVar19;
        }
        if (fVar32 <= fVar25) {
          fVar25 = fVar32;
        }
        *(float *)(in_RDI + 0xf4) = fVar25;
        fVar25 = fVar25 - fVar26;
        if (fVar25 == 0.0) {
          return 0;
        }
        bVar3 = *(byte *)((long)pfVar5 + 0x7a);
        fVar20 = fVar20 * fVar25;
        auVar27._1_3_ = 0;
        auVar27[0] = bVar3;
        auVar27[4] = bVar3;
        auVar27._5_3_ = 0;
        auVar27[8] = bVar3;
        auVar27._9_3_ = 0;
        auVar27[0xc] = bVar3;
        auVar27._13_3_ = 0;
        auVar12._4_4_ = _UNK_001038d4;
        auVar12._0_4_ = __LC12;
        auVar12._8_4_ = _UNK_001038d8;
        auVar12._12_4_ = _UNK_001038dc;
        auVar27 = auVar27 & auVar12;
        bVar7 = auVar27._4_4_ == _UNK_001038d4;
        bVar8 = auVar27._8_4_ == _UNK_001038d8;
        bVar9 = auVar27._12_4_ == _UNK_001038dc;
        *pfVar5 = (float)(-(uint)(auVar27._0_4_ == __LC12) & (uint)(*pfVar5 - fVar20 * local_18));
        pfVar5[1] = (float)(-(uint)bVar7 & (uint)(pfVar5[1] - fVar20 * fStack_14));
        pfVar5[2] = (float)(-(uint)bVar8 & (uint)(pfVar5[2] - fVar20 * fStack_10));
        pfVar5[3] = (float)(-(uint)bVar9 & (uint)(pfVar5[3] - fVar20 * fStack_c));
      }
      fVar19 = *(float *)(in_RDI + 0xd4);
      fVar32 = *(float *)(in_RDI + 0xd8);
      fVar20 = *(float *)(in_RDI + 0xdc);
      pfVar5[4] = pfVar5[4] - *(float *)(in_RDI + 0xd0) * fVar25;
      pfVar5[5] = pfVar5[5] - fVar19 * fVar25;
      pfVar5[6] = pfVar5[6] - fVar32 * fVar25;
      pfVar5[7] = pfVar5[7] - fVar20 * fVar25;
      return 1;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    fVar21 = *pfVar6;
    fVar22 = pfVar6[1];
    fVar23 = pfVar6[2];
    fVar24 = pfVar6[3];
    fVar20 = pfVar6[0x16];
    fVar26 = *(float *)(in_RDI + 0xf4);
    fVar19 = ((((0.0 - fVar23) * fStack_10 +
               (0.0 - fVar22) * fStack_14 + (0.0 - fVar21) * local_18 + 0.0) -
              ((float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20) * *(float *)(in_RDI + 200) +
               (float)*(undefined8 *)(pfVar6 + 4) * *(float *)(in_RDI + 0xc4) + 0.0 +
              (float)*(undefined8 *)(pfVar6 + 6) * *(float *)(in_RDI + 0xcc))) -
             (*(float *)(in_RDI + 0xf0) * fVar26 + *(float *)(in_RDI + 0xec))) * fVar19 + fVar26;
    if (fVar32 <= fVar19) {
      fVar32 = fVar19;
    }
    if (fVar32 <= fVar25) {
      fVar25 = fVar32;
    }
    *(float *)(in_RDI + 0xf4) = fVar25;
    fVar25 = fVar25 - fVar26;
    if (fVar25 == 0.0) {
      return 0;
    }
    bVar3 = *(byte *)((long)pfVar6 + 0x7a);
    fVar20 = fVar20 * fVar25;
    fVar21 = fVar20 * local_18 + fVar21;
    fVar22 = fVar20 * fStack_14 + fVar22;
    fVar23 = fVar20 * fStack_10 + fVar23;
    fVar24 = fVar20 * fStack_c + fVar24;
  }
  auVar31._1_3_ = 0;
  auVar31[0] = bVar3;
  auVar31[4] = bVar3;
  auVar31._5_3_ = 0;
  auVar31[8] = bVar3;
  auVar31._9_3_ = 0;
  auVar31[0xc] = bVar3;
  auVar31._13_3_ = 0;
  auVar11._4_4_ = _UNK_001038d4;
  auVar11._0_4_ = __LC12;
  auVar11._8_4_ = _UNK_001038d8;
  auVar11._12_4_ = _UNK_001038dc;
  auVar31 = auVar31 & auVar11;
  bVar7 = auVar31._4_4_ == _UNK_001038d4;
  bVar8 = auVar31._8_4_ == _UNK_001038d8;
  bVar9 = auVar31._12_4_ == _UNK_001038dc;
  *pfVar6 = (float)((uint)fVar21 & -(uint)(auVar31._0_4_ == __LC12));
  pfVar6[1] = (float)((uint)fVar22 & -(uint)bVar7);
  pfVar6[2] = (float)((uint)fVar23 & -(uint)bVar8);
  pfVar6[3] = (float)((uint)fVar24 & -(uint)bVar9);
  fVar19 = *(float *)(in_RDI + 0xe0);
  fVar32 = *(float *)(in_RDI + 0xe4);
  fVar20 = *(float *)(in_RDI + 0xe8);
  pfVar6[4] = *(float *)(in_RDI + 0xdc) * fVar25 + pfVar6[4];
  pfVar6[5] = fVar19 * fVar25 + pfVar6[5];
  pfVar6[6] = fVar32 * fVar25 + pfVar6[6];
  pfVar6[7] = fVar20 * fVar25 + pfVar6[7];
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::WarmStartVelocityConstraint(float) */

void __thiscall
JPH::DistanceConstraint::WarmStartVelocityConstraint(DistanceConstraint *this,float param_1)

{
  byte bVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  fVar21 = param_1 * *(float *)(this + 0xf4);
  fVar8 = *(float *)(this + 0xa0);
  fVar9 = *(float *)(this + 0xa4);
  fVar10 = *(float *)(this + 0xa8);
  fVar11 = *(float *)(this + 0xac);
  pfVar3 = *(float **)(*(long *)(this + 0x30) + 0x48);
  pfVar4 = *(float **)(*(long *)(this + 0x28) + 0x48);
  if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
    fVar23 = pfVar4[0x16];
    if (*(char *)(*(long *)(this + 0x30) + 0x78) == '\x02') {
      fVar22 = pfVar3[0x16];
      *(float *)(this + 0xf4) = fVar21;
      iVar20 = _UNK_001038dc;
      iVar19 = _UNK_001038d8;
      iVar18 = _UNK_001038d4;
      iVar17 = __LC12;
      if (fVar21 != 0.0) {
        fVar23 = fVar23 * fVar21;
        bVar2 = *(byte *)((long)pfVar4 + 0x7a);
        auVar24._1_3_ = 0;
        auVar24[0] = bVar2;
        bVar1 = *(byte *)((long)pfVar3 + 0x7a);
        auVar24[4] = bVar2;
        auVar24._5_3_ = 0;
        auVar24[8] = bVar2;
        auVar24._9_3_ = 0;
        auVar24[0xc] = bVar2;
        auVar24._13_3_ = 0;
        auVar15._4_4_ = _UNK_001038d4;
        auVar15._0_4_ = __LC12;
        auVar15._8_4_ = _UNK_001038d8;
        auVar15._12_4_ = _UNK_001038dc;
        auVar24 = auVar24 & auVar15;
        bVar5 = auVar24._4_4_ == _UNK_001038d4;
        bVar6 = auVar24._8_4_ == _UNK_001038d8;
        bVar7 = auVar24._12_4_ == _UNK_001038dc;
        *pfVar4 = (float)(-(uint)(auVar24._0_4_ == __LC12) & (uint)(*pfVar4 - fVar23 * fVar8));
        pfVar4[1] = (float)(-(uint)bVar5 & (uint)(pfVar4[1] - fVar23 * fVar9));
        pfVar4[2] = (float)(-(uint)bVar6 & (uint)(pfVar4[2] - fVar23 * fVar10));
        pfVar4[3] = (float)(-(uint)bVar7 & (uint)(pfVar4[3] - fVar23 * fVar11));
        fVar22 = fVar21 * fVar22;
        fVar23 = *(float *)(this + 0xd4);
        fVar12 = *(float *)(this + 0xd8);
        fVar13 = *(float *)(this + 0xdc);
        pfVar4[4] = pfVar4[4] - *(float *)(this + 0xd0) * fVar21;
        pfVar4[5] = pfVar4[5] - fVar23 * fVar21;
        pfVar4[6] = pfVar4[6] - fVar12 * fVar21;
        pfVar4[7] = pfVar4[7] - fVar13 * fVar21;
        auVar25._1_3_ = 0;
        auVar25[0] = bVar1;
        auVar25[4] = bVar1;
        auVar25._5_3_ = 0;
        auVar25[8] = bVar1;
        auVar25._9_3_ = 0;
        auVar25[0xc] = bVar1;
        auVar25._13_3_ = 0;
        auVar25 = auVar25 & auVar15;
        *pfVar3 = (float)((uint)(fVar22 * fVar8 + *pfVar3) & -(uint)(auVar25._0_4_ == iVar17));
        pfVar3[1] = (float)((uint)(fVar22 * fVar9 + pfVar3[1]) & -(uint)(auVar25._4_4_ == iVar18));
        pfVar3[2] = (float)((uint)(fVar22 * fVar10 + pfVar3[2]) & -(uint)(auVar25._8_4_ == iVar19));
        pfVar3[3] = (float)((uint)(fVar22 * fVar11 + pfVar3[3]) & -(uint)(auVar25._12_4_ == iVar20))
        ;
        fVar8 = *(float *)(this + 0xe0);
        fVar9 = *(float *)(this + 0xe4);
        fVar10 = *(float *)(this + 0xe8);
        pfVar3[4] = *(float *)(this + 0xdc) * fVar21 + pfVar3[4];
        pfVar3[5] = fVar8 * fVar21 + pfVar3[5];
        pfVar3[6] = fVar9 * fVar21 + pfVar3[6];
        pfVar3[7] = fVar10 * fVar21 + pfVar3[7];
        return;
      }
    }
    else {
      *(float *)(this + 0xf4) = fVar21;
      if (fVar21 != 0.0) {
        fVar23 = fVar23 * fVar21;
        bVar2 = *(byte *)((long)pfVar4 + 0x7a);
        auVar26._1_3_ = 0;
        auVar26[0] = bVar2;
        auVar26[4] = bVar2;
        auVar26._5_3_ = 0;
        auVar26[8] = bVar2;
        auVar26._9_3_ = 0;
        auVar26[0xc] = bVar2;
        auVar26._13_3_ = 0;
        auVar14._4_4_ = _UNK_001038d4;
        auVar14._0_4_ = __LC12;
        auVar14._8_4_ = _UNK_001038d8;
        auVar14._12_4_ = _UNK_001038dc;
        auVar26 = auVar26 & auVar14;
        bVar5 = auVar26._4_4_ == _UNK_001038d4;
        bVar6 = auVar26._8_4_ == _UNK_001038d8;
        bVar7 = auVar26._12_4_ == _UNK_001038dc;
        *pfVar4 = (float)(-(uint)(auVar26._0_4_ == __LC12) & (uint)(*pfVar4 - fVar23 * fVar8));
        pfVar4[1] = (float)(-(uint)bVar5 & (uint)(pfVar4[1] - fVar23 * fVar9));
        pfVar4[2] = (float)(-(uint)bVar6 & (uint)(pfVar4[2] - fVar23 * fVar10));
        pfVar4[3] = (float)(-(uint)bVar7 & (uint)(pfVar4[3] - fVar23 * fVar11));
        fVar8 = *(float *)(this + 0xd4);
        fVar9 = *(float *)(this + 0xd8);
        fVar10 = *(float *)(this + 0xdc);
        pfVar4[4] = pfVar4[4] - fVar21 * *(float *)(this + 0xd0);
        pfVar4[5] = pfVar4[5] - fVar21 * fVar8;
        pfVar4[6] = pfVar4[6] - fVar21 * fVar9;
        pfVar4[7] = pfVar4[7] - fVar21 * fVar10;
        return;
      }
    }
  }
  else {
    fVar23 = pfVar3[0x16];
    *(float *)(this + 0xf4) = fVar21;
    if (fVar21 != 0.0) {
      fVar23 = fVar23 * fVar21;
      bVar2 = *(byte *)((long)pfVar3 + 0x7a);
      auVar27._1_3_ = 0;
      auVar27[0] = bVar2;
      auVar27[4] = bVar2;
      auVar27._5_3_ = 0;
      auVar27[8] = bVar2;
      auVar27._9_3_ = 0;
      auVar27[0xc] = bVar2;
      auVar27._13_3_ = 0;
      auVar16._4_4_ = _UNK_001038d4;
      auVar16._0_4_ = __LC12;
      auVar16._8_4_ = _UNK_001038d8;
      auVar16._12_4_ = _UNK_001038dc;
      auVar27 = auVar27 & auVar16;
      bVar5 = auVar27._4_4_ == _UNK_001038d4;
      bVar6 = auVar27._8_4_ == _UNK_001038d8;
      bVar7 = auVar27._12_4_ == _UNK_001038dc;
      *pfVar3 = (float)((uint)(fVar23 * fVar8 + *pfVar3) & -(uint)(auVar27._0_4_ == __LC12));
      pfVar3[1] = (float)((uint)(fVar23 * fVar9 + pfVar3[1]) & -(uint)bVar5);
      pfVar3[2] = (float)((uint)(fVar23 * fVar10 + pfVar3[2]) & -(uint)bVar6);
      pfVar3[3] = (float)((uint)(fVar23 * fVar11 + pfVar3[3]) & -(uint)bVar7);
      fVar8 = *(float *)(this + 0xe0);
      fVar9 = *(float *)(this + 0xe4);
      fVar10 = *(float *)(this + 0xe8);
      pfVar3[4] = fVar21 * *(float *)(this + 0xdc) + pfVar3[4];
      pfVar3[5] = fVar21 * fVar8 + pfVar3[5];
      pfVar3[6] = fVar21 * fVar9 + pfVar3[6];
      pfVar3[7] = fVar21 * fVar10 + pfVar3[7];
      return;
    }
  }
  return;
}



/* JPH::DistanceConstraintSettings::GetRTTI() const */

undefined1 * JPH::DistanceConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti,
                      "DistanceConstraintSettings",0x70,
                      GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::DistanceConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(DistanceConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti,
                      "DistanceConstraintSettings",0x70,
                      GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::DistanceConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      DistanceConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::DistanceConstraintSettings*)::rtti;
}



/* JPH::DistanceConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::DistanceConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((DistanceConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::DistanceConstraint(JPH::Body&, JPH::Body&,
   JPH::DistanceConstraintSettings const&) */

void __thiscall
JPH::DistanceConstraint::DistanceConstraint
          (DistanceConstraint *this,Body *param_1,Body *param_2,DistanceConstraintSettings *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_28;
  float fStack_24;
  
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x18] = SUB41(uVar1,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  fVar18 = *(float *)(param_3 + 0x54);
  fVar8 = *(float *)(param_3 + 0x58);
  *(DistanceConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x6c) = 0;
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar4;
  *(float *)(this + 100) = fVar18;
  *(float *)(this + 0x68) = fVar8;
  *(Body **)(this + 0x28) = param_1;
  *(Body **)(this + 0x30) = param_2;
  *(undefined ***)this = &PTR__DistanceConstraint_001037f0;
  this[0x68] = (DistanceConstraint)0x0;
  *(undefined1 (*) [16])(this + 0xe8) = (undefined1  [16])0x0;
  fVar11 = _LC3;
  if (iVar3 == 1) {
    fVar9 = *(float *)param_1;
    fVar19 = *(float *)(param_1 + 4);
    fVar7 = *(float *)(param_1 + 8);
    fVar10 = (float)(*(uint *)(param_1 + 0x10) ^ __LC44);
    fVar14 = (float)(*(uint *)(param_1 + 0x14) ^ _UNK_00103934);
    fVar12 = (float)(*(uint *)(param_1 + 0x18) ^ _UNK_00103938);
    fVar13 = (float)(*(uint *)(param_1 + 0x1c) ^ _UNK_0010393c);
    fVar32 = (float)(__LC44 ^ *(uint *)(param_2 + 0x10));
    fVar15 = (float)(_UNK_00103934 ^ *(uint *)(param_2 + 0x14));
    fVar16 = (float)(_UNK_00103938 ^ *(uint *)(param_2 + 0x18));
    fVar17 = (float)(_UNK_0010393c ^ *(uint *)(param_2 + 0x1c));
    fVar30 = fVar10 + fVar10;
    fVar31 = fVar14 + fVar14;
    fVar33 = fVar12 * (fVar12 + fVar12);
    fVar25 = fVar13 * (fVar12 + fVar12);
    fVar20 = fVar12 * fVar30 + fVar31 * fVar13;
    fVar29 = fVar12 * fVar30 - fVar31 * fVar13;
    fVar21 = fVar12 * fVar31 - fVar30 * fVar13;
    fVar24 = fVar30 * fVar13 + fVar12 * fVar31;
    fVar27 = (_LC3 - fVar10 * fVar30) - fVar14 * fVar31;
    fVar22 = fVar14 * fVar30 - fVar25;
    fVar25 = fVar25 + fVar14 * fVar30;
    fVar23 = (_LC3 - fVar33) - fVar10 * fVar30;
    fVar33 = (_LC3 - fVar14 * fVar31) - fVar33;
    fVar10 = *(float *)(param_3 + 0x30);
    fVar14 = *(float *)(param_3 + 0x34);
    fVar12 = *(float *)(param_3 + 0x38);
    fVar28 = fVar32 + fVar32;
    fVar26 = fVar15 + fVar15;
    fVar13 = *(float *)param_2;
    fVar30 = *(float *)(param_2 + 4);
    fVar31 = *(float *)(param_2 + 8);
    *(float *)(this + 0x40) =
         fVar12 * fVar20 + fVar10 * fVar33 + fVar22 * fVar14 +
         (0.0 - (fVar9 * fVar33 + fVar19 * fVar22 + fVar7 * fVar20));
    *(float *)(this + 0x44) =
         fVar12 * fVar21 + fVar10 * fVar25 + fVar23 * fVar14 +
         (0.0 - (fVar9 * fVar25 + fVar19 * fVar23 + fVar7 * fVar21));
    *(float *)(this + 0x48) =
         fVar12 * fVar27 + fVar10 * fVar29 + fVar24 * fVar14 +
         (0.0 - (fVar9 * fVar29 + fVar19 * fVar24 + fVar7 * fVar27));
    *(float *)(this + 0x4c) = fVar12 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0 + 1.0;
    fVar9 = fVar16 * (fVar16 + fVar16);
    fVar20 = fVar17 * (fVar16 + fVar16);
    fVar22 = fVar16 * fVar26 - fVar28 * fVar17;
    fVar25 = fVar28 * fVar17 + fVar16 * fVar26;
    fVar23 = (fVar11 - fVar32 * fVar28) - fVar15 * fVar26;
    fVar21 = fVar16 * fVar28 + fVar26 * fVar17;
    fVar17 = fVar16 * fVar28 - fVar26 * fVar17;
    fVar16 = fVar15 * fVar28 - fVar20;
    fVar20 = fVar15 * fVar28 + fVar20;
    fVar12 = (fVar11 - fVar15 * fVar26) - fVar9;
    fVar32 = (fVar11 - fVar9) - fVar32 * fVar28;
    uVar4 = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x88) = uVar4;
    fVar9 = *(float *)(param_3 + 0x40);
    fVar19 = *(float *)(param_3 + 0x44);
    fVar7 = *(float *)(param_3 + 0x48);
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(this + 0x98) = uVar4;
    fVar10 = *(float *)(param_3 + 0x30);
    fVar14 = *(float *)(param_3 + 0x34);
    fVar11 = *(float *)(param_3 + 0x38);
    *(float *)(this + 0x50) =
         fVar7 * fVar21 + fVar9 * fVar12 + fVar19 * fVar16 +
         (0.0 - (fVar13 * fVar12 + fVar30 * fVar16 + fVar31 * fVar21));
    *(float *)(this + 0x54) =
         fVar7 * fVar22 + fVar9 * fVar20 + fVar19 * fVar32 +
         (0.0 - (fVar13 * fVar20 + fVar30 * fVar32 + fVar31 * fVar22));
    *(float *)(this + 0x58) =
         fVar7 * fVar23 + fVar9 * fVar17 + fVar19 * fVar25 +
         (0.0 - (fVar13 * fVar17 + fVar30 * fVar25 + fVar31 * fVar23));
    *(float *)(this + 0x5c) = fVar7 * 0.0 + fVar9 * 0.0 + fVar19 * 0.0 + 1.0;
    local_28 = *(float *)(param_3 + 0x40);
    fStack_24 = *(float *)(param_3 + 0x44);
    fVar9 = *(float *)(param_3 + 0x48);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    fVar32 = (float)uVar4;
    fVar30 = (float)*(undefined8 *)(param_1 + 0x10);
    fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_3 + 0x30);
    *(undefined8 *)(this + 0x48) = uVar6;
    fVar22 = fVar30 + fVar30;
    uVar6 = *(undefined8 *)param_1;
    fVar23 = fVar16 + fVar16;
    fVar20 = (float)((ulong)uVar4 >> 0x20);
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    fVar11 = *(float *)(param_1 + 8);
    fVar27 = fVar32 * (fVar32 + fVar32);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(this + 0x58) = uVar4;
    fVar13 = _LC3;
    fVar14 = fVar20 * (fVar32 + fVar32);
    fVar19 = *(float *)(param_3 + 0x30);
    fVar7 = *(float *)(param_3 + 0x34);
    fVar12 = *(float *)(param_3 + 0x38);
    fVar15 = (float)uVar5;
    fVar31 = (float)*(undefined8 *)(param_2 + 0x10);
    uVar4 = *(undefined8 *)param_2;
    fVar9 = *(float *)(param_2 + 8);
    fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    fVar21 = (float)((ulong)uVar5 >> 0x20);
    fVar25 = fVar31 + fVar31;
    fVar28 = fVar17 + fVar17;
    local_28 = (float)uVar6;
    fStack_24 = (float)((ulong)uVar6 >> 0x20);
    fVar10 = (fVar16 * fVar22 - fVar14) * fVar7 + ((_LC3 - fVar16 * fVar23) - fVar27) * fVar19 +
             (fVar32 * fVar22 + fVar23 * fVar20) * fVar12 + local_28;
    fVar14 = ((_LC3 - fVar27) - fVar30 * fVar22) * fVar7 + (fVar16 * fVar22 + fVar14) * fVar19 +
             (fVar32 * fVar23 - fVar22 * fVar20) * fVar12 + fStack_24;
    fVar11 = (fVar22 * fVar20 + fVar32 * fVar23) * fVar7 +
             (fVar32 * fVar22 - fVar23 * fVar20) * fVar19 +
             ((_LC3 - fVar30 * fVar22) - fVar16 * fVar23) * fVar12 + fVar11;
    *(float *)(this + 0x80) = fVar10;
    *(float *)(this + 0x84) = fVar14;
    *(float *)(this + 0x88) = fVar11;
    *(float *)(this + 0x8c) = fVar7 * 0.0 + fVar19 * 0.0 + fVar12 * 0.0 + 1.0;
    fVar32 = fVar21 * (fVar15 + fVar15);
    fVar30 = fVar15 * (fVar15 + fVar15);
    fVar19 = *(float *)(param_3 + 0x40);
    fVar7 = *(float *)(param_3 + 0x44);
    fVar12 = *(float *)(param_3 + 0x48);
    local_28 = (float)uVar4;
    fStack_24 = (float)((ulong)uVar4 >> 0x20);
    local_28 = ((fVar13 - fVar17 * fVar28) - fVar30) * fVar19 + (fVar17 * fVar25 - fVar32) * fVar7 +
               (fVar15 * fVar25 + fVar28 * fVar21) * fVar12 + local_28;
    fStack_24 = (fVar17 * fVar25 + fVar32) * fVar19 + ((fVar13 - fVar30) - fVar31 * fVar25) * fVar7
                + (fVar15 * fVar28 - fVar25 * fVar21) * fVar12 + fStack_24;
    fVar9 = (fVar15 * fVar25 - fVar28 * fVar21) * fVar19 +
            (fVar25 * fVar21 + fVar15 * fVar28) * fVar7 +
            ((fVar13 - fVar31 * fVar25) - fVar17 * fVar28) * fVar12 + fVar9;
    *(float *)(this + 0x90) = local_28;
    *(float *)(this + 0x94) = fStack_24;
    *(float *)(this + 0x98) = fVar9;
    *(float *)(this + 0x9c) = fVar19 * 0.0 + fVar7 * 0.0 + fVar12 * 0.0 + 1.0;
  }
  uVar5 = _UNK_001038b8;
  uVar4 = __LC1;
  fVar11 = SQRT((fVar9 - fVar11) * (fVar9 - fVar11) +
                (fStack_24 - fVar14) * (fStack_24 - fVar14) +
                (local_28 - fVar10) * (local_28 - fVar10) + 0.0);
  if (fVar18 < 0.0) {
    fVar18 = fVar11;
    fVar9 = fVar11;
    if ((fVar8 < 0.0) || (fVar18 = fVar8, fVar19 = fVar11, fVar9 = fVar8, fVar8 < fVar11))
    goto LAB_001015bc;
  }
  else {
    fVar19 = fVar18;
    if (fVar8 < 0.0) {
      fVar9 = fVar18;
      if (fVar18 <= fVar11) {
        fVar9 = fVar11;
      }
      goto LAB_001015bc;
    }
  }
  fVar18 = fVar19;
  fVar9 = fVar8;
LAB_001015bc:
  uVar6 = *(undefined8 *)(param_3 + 0x58);
  uVar1 = *(undefined4 *)(param_3 + 0x60);
  *(ulong *)(this + 0x60) = CONCAT44(fVar9,fVar18);
  *(undefined8 *)(this + 0x68) = uVar6;
  *(undefined4 *)(this + 0x70) = uVar1;
  *(undefined8 *)(this + 0xa0) = uVar4;
  *(undefined8 *)(this + 0xa8) = uVar5;
  return;
}



/* JPH::DistanceConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

DistanceConstraint * __thiscall
JPH::DistanceConstraintSettings::Create
          (DistanceConstraintSettings *this,Body *param_1,Body *param_2)

{
  DistanceConstraint *this_00;
  
  this_00 = (DistanceConstraint *)(*Allocate)(0x100);
  DistanceConstraint::DistanceConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* JPH::DistanceConstraint::CalculateConstraintProperties(float) */

undefined1  [16] __thiscall
JPH::DistanceConstraint::CalculateConstraintProperties(DistanceConstraint *this,float param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_34 [12];
  undefined8 local_28;
  undefined8 uStack_20;
  
  fVar16 = _LC3;
  pfVar3 = *(float **)(this + 0x28);
  fVar9 = *(float *)(this + 0x40);
  fVar17 = *(float *)(this + 0x44);
  fVar1 = *(float *)(this + 0x48);
  fVar11 = (float)*(undefined8 *)(pfVar3 + 6);
  fVar10 = (float)*(undefined8 *)(pfVar3 + 4);
  fVar19 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
  fVar23 = fVar19 + fVar19;
  fVar22 = fVar10 + fVar10;
  fVar14 = (float)((ulong)*(undefined8 *)(pfVar3 + 6) >> 0x20);
  pfVar4 = *(float **)(this + 0x30);
  fVar12 = fVar14 * (fVar11 + fVar11);
  fVar26 = fVar11 * (fVar11 + fVar11);
  fVar15 = (float)*(undefined8 *)(pfVar4 + 4);
  fVar18 = (float)*(undefined8 *)(pfVar4 + 6);
  fVar24 = fVar15 + fVar15;
  fVar21 = (float)((ulong)*(undefined8 *)(pfVar4 + 4) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(pfVar4 + 6) >> 0x20);
  fVar2 = pfVar4[2];
  fVar25 = fVar21 + fVar21;
  fVar27 = fVar18 * (fVar18 + fVar18);
  local_28._0_4_ = (float)*(undefined8 *)pfVar3;
  local_28._4_4_ = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20);
  fVar8 = (fVar19 * fVar22 - fVar12) * fVar17 + ((_LC3 - fVar19 * fVar23) - fVar26) * fVar9 +
          (fVar11 * fVar22 + fVar23 * fVar14) * fVar1 + (float)local_28;
  fVar12 = ((_LC3 - fVar26) - fVar10 * fVar22) * fVar17 + (fVar19 * fVar22 + fVar12) * fVar9 +
           (fVar11 * fVar23 - fVar22 * fVar14) * fVar1 + local_28._4_4_;
  fVar10 = (fVar22 * fVar14 + fVar11 * fVar23) * fVar17 +
           (fVar11 * fVar22 - fVar23 * fVar14) * fVar9 +
           ((_LC3 - fVar10 * fVar22) - fVar19 * fVar23) * fVar1 + pfVar3[2];
  fVar11 = fVar17 * 0.0 + fVar9 * 0.0 + fVar1 * 0.0 + 1.0;
  *(float *)(this + 0x80) = fVar8;
  *(float *)(this + 0x84) = fVar12;
  *(float *)(this + 0x88) = fVar10;
  *(float *)(this + 0x8c) = fVar11;
  fVar19 = fVar7 * (fVar18 + fVar18);
  fVar14 = (fVar16 - fVar21 * fVar25) - fVar27;
  auVar28._4_4_ = 0;
  auVar28._0_4_ = fVar14;
  fVar9 = *(float *)(this + 0x50);
  fVar17 = *(float *)(this + 0x54);
  fVar1 = *(float *)(this + 0x58);
  local_28._0_4_ = (float)*(undefined8 *)pfVar4;
  local_28._4_4_ = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
  local_28._0_4_ =
       (fVar21 * fVar24 - fVar19) * fVar17 + fVar9 * fVar14 +
       (fVar18 * fVar24 + fVar25 * fVar7) * fVar1 + (float)local_28;
  local_28._4_4_ =
       ((fVar16 - fVar27) - fVar15 * fVar24) * fVar17 + fVar9 * (fVar21 * fVar24 + fVar19) +
       (fVar18 * fVar25 - fVar24 * fVar7) * fVar1 + local_28._4_4_;
  fVar16 = (fVar24 * fVar7 + fVar18 * fVar25) * fVar17 + fVar9 * (fVar18 * fVar24 - fVar25 * fVar7)
           + ((fVar16 - fVar15 * fVar24) - fVar21 * fVar25) * fVar1 + fVar2;
  fVar17 = fVar17 * 0.0 + fVar9 * 0.0 + fVar1 * 0.0 + 1.0;
  *(float *)(this + 0x90) = (float)local_28;
  *(float *)(this + 0x94) = local_28._4_4_;
  *(float *)(this + 0x98) = fVar16;
  *(float *)(this + 0x9c) = fVar17;
  auVar20._0_4_ = (float)local_28 - fVar8;
  auVar20._4_4_ = local_28._4_4_ - fVar12;
  auVar20._8_4_ = fVar16 - fVar10;
  auVar20._12_4_ = fVar17 - fVar11;
  fVar9 = SQRT(auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_ + 0.0 +
               auVar20._8_4_ * auVar20._8_4_);
  if (0.0 < fVar9) {
    auVar13._4_4_ = fVar9;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = fVar9;
    auVar13._12_4_ = fVar9;
    auVar20 = divps(auVar20,auVar13);
    *(undefined1 (*) [16])(this + 0xa0) = auVar20;
  }
  fVar15 = (float)local_28 - *pfVar4;
  fVar11 = local_28._4_4_ - pfVar4[1];
  fVar14 = fVar16 - pfVar4[2];
  fVar18 = fVar17 - pfVar4[3];
  fVar1 = *(float *)(this + 0x60);
  fVar10 = *(float *)(this + 100);
  local_28 = CONCAT44(local_28._4_4_ - pfVar3[1],(float)local_28 - *pfVar3);
  uStack_20 = CONCAT44(fVar17 - pfVar3[3],fVar16 - pfVar3[2]);
  if (fVar1 == fVar10) {
    AxisConstraintPart::CalculateConstraintPropertiesWithSettings
              (param_1,local_28,uStack_20,CONCAT44(fVar11,fVar15),CONCAT44(fVar18,fVar14),
               *(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8),0,this + 0xb8,pfVar3,pfVar4
               ,this + 0x68,fVar2,param_1,fVar9 - fVar1);
    uVar6 = _LC45;
    *(undefined8 *)(this + 0xb0) = _LC45;
    auVar30._8_8_ = extraout_RDX_00;
    auVar30._0_8_ = uVar6;
    return auVar30;
  }
  if (fVar9 <= fVar1) {
    AxisConstraintPart::CalculateConstraintPropertiesWithSettings
              (param_1,local_28,uStack_20,CONCAT44(fVar11,fVar15),CONCAT44(fVar18,fVar14),
               *(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8),0,this + 0xb8,pfVar3,pfVar4
               ,this + 0x68,fVar2,param_1,fVar9 - fVar1);
    uVar6 = _LC46;
    *(undefined8 *)(this + 0xb0) = _LC46;
    auVar29._8_8_ = extraout_RDX;
    auVar29._0_8_ = uVar6;
    return auVar29;
  }
  if (fVar10 <= fVar9) {
    fVar9 = fVar9 - fVar10;
    AxisConstraintPart::CalculateConstraintPropertiesWithSettings
              (param_1,local_28,uStack_20,CONCAT44(fVar11,fVar15),CONCAT44(fVar18,fVar14),
               *(undefined8 *)(this + 0xa0),*(undefined8 *)(this + 0xa8),0,this + 0xb8,pfVar3,pfVar4
               ,this + 0x68);
    *(undefined8 *)(this + 0xb0) = _LC47;
    auVar5._4_12_ = auStack_34;
    auVar5._0_4_ = fVar9;
    return auVar5;
  }
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  auVar28._8_8_ = pfVar4;
  return auVar28;
}



/* JPH::DistanceConstraint::SetupVelocityConstraint(float) */

void __thiscall
JPH::DistanceConstraint::SetupVelocityConstraint(DistanceConstraint *this,float param_1)

{
  CalculateConstraintProperties(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::SolvePositionConstraint(float, float) */

undefined8 __thiscall
JPH::DistanceConstraint::SolvePositionConstraint
          (DistanceConstraint *this,float param_1,float param_2)

{
  byte bVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  
  if (*(float *)(this + 0x6c) <= 0.0) {
    fVar16 = (*(float *)(this + 0x98) - *(float *)(this + 0x88)) * *(float *)(this + 0xa8) +
             (*(float *)(this + 0x94) - *(float *)(this + 0x84)) * *(float *)(this + 0xa4) +
             *(float *)(this + 0xa0) * (*(float *)(this + 0x90) - *(float *)(this + 0x80)) + 0.0;
    fVar17 = *(float *)(this + 0x60);
    if ((((fVar17 <= fVar16) && (fVar17 = *(float *)(this + 100), fVar16 <= fVar17)) ||
        (fVar16 - fVar17 == 0.0)) ||
       (CalculateConstraintProperties(this,param_1), *(float *)(this + 0xf0) != 0.0)) {
      uVar13 = 0;
    }
    else {
      pfVar2 = *(float **)(this + 0x28);
      pfVar3 = *(float **)(this + 0x30);
      fVar7 = *(float *)(this + 0xa0);
      fVar8 = *(float *)(this + 0xa4);
      fVar9 = *(float *)(this + 0xa8);
      fVar10 = *(float *)(this + 0xac);
      fVar17 = (fVar16 - fVar17) * (float)(*(uint *)(this + 0xe8) ^ __LC41) * param_2;
      if (*(char *)(pfVar2 + 0x1e) == '\x02') {
        bVar1 = *(byte *)(*(long *)(pfVar2 + 0x12) + 0x7a);
        fVar16 = *(float *)(*(long *)(pfVar2 + 0x12) + 0x58) * fVar17;
        auVar14._1_3_ = 0;
        auVar14[0] = bVar1;
        auVar14[4] = bVar1;
        auVar14._5_3_ = 0;
        auVar14[8] = bVar1;
        auVar14._9_3_ = 0;
        auVar14[0xc] = bVar1;
        auVar14._13_3_ = 0;
        auVar12._4_4_ = _UNK_001038d4;
        auVar12._0_4_ = __LC12;
        auVar12._8_4_ = _UNK_001038d8;
        auVar12._12_4_ = _UNK_001038dc;
        auVar14 = auVar14 & auVar12;
        bVar4 = auVar14._4_4_ == _UNK_001038d4;
        bVar5 = auVar14._8_4_ == _UNK_001038d8;
        bVar6 = auVar14._12_4_ == _UNK_001038dc;
        *pfVar2 = *pfVar2 - (float)((uint)(fVar16 * fVar7) & -(uint)(auVar14._0_4_ == __LC12));
        pfVar2[1] = pfVar2[1] - (float)((uint)(fVar16 * fVar8) & -(uint)bVar4);
        pfVar2[2] = pfVar2[2] - (float)((uint)(fVar16 * fVar9) & -(uint)bVar5);
        pfVar2[3] = pfVar2[3] - (float)((uint)(fVar16 * fVar10) & -(uint)bVar6);
        Body::SubRotationStep
                  (CONCAT44(fVar17 * *(float *)(this + 0xd4),fVar17 * *(float *)(this + 0xd0)),
                   CONCAT44(fVar17 * *(float *)(this + 0xdc),fVar17 * *(float *)(this + 0xd8)));
      }
      if (*(char *)(pfVar3 + 0x1e) == '\x02') {
        bVar1 = *(byte *)(*(long *)(pfVar3 + 0x12) + 0x7a);
        fVar16 = *(float *)(*(long *)(pfVar3 + 0x12) + 0x58) * fVar17;
        auVar15._1_3_ = 0;
        auVar15[0] = bVar1;
        auVar15[4] = bVar1;
        auVar15._5_3_ = 0;
        auVar15[8] = bVar1;
        auVar15._9_3_ = 0;
        auVar15[0xc] = bVar1;
        auVar15._13_3_ = 0;
        auVar11._4_4_ = _UNK_001038d4;
        auVar11._0_4_ = __LC12;
        auVar11._8_4_ = _UNK_001038d8;
        auVar11._12_4_ = _UNK_001038dc;
        auVar15 = auVar15 & auVar11;
        bVar4 = auVar15._4_4_ == _UNK_001038d4;
        bVar5 = auVar15._8_4_ == _UNK_001038d8;
        bVar6 = auVar15._12_4_ == _UNK_001038dc;
        *pfVar3 = (float)((uint)(fVar16 * fVar7) & -(uint)(auVar15._0_4_ == __LC12)) + *pfVar3;
        pfVar3[1] = (float)((uint)(fVar16 * fVar8) & -(uint)bVar4) + pfVar3[1];
        pfVar3[2] = (float)((uint)(fVar16 * fVar9) & -(uint)bVar5) + pfVar3[2];
        pfVar3[3] = (float)((uint)(fVar16 * fVar10) & -(uint)bVar6) + pfVar3[3];
        Body::AddRotationStep
                  (CONCAT44(*(float *)(this + 0xe0) * fVar17,*(float *)(this + 0xdc) * fVar17),
                   CONCAT44(*(float *)(this + 0xe8) * fVar17,*(float *)(this + 0xe4) * fVar17),
                   pfVar3);
      }
      uVar13 = 1;
    }
    return uVar13;
  }
  return 0;
}



/* JPH::Constraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::DistanceConstraint::GetSubType() const */

undefined8 JPH::DistanceConstraint::GetSubType(void)

{
  return 4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::GetConstraintToBody1Matrix() const */

void JPH::DistanceConstraint::GetConstraintToBody1Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x40);
  uVar1 = *(undefined4 *)(in_RSI + 0x48);
  *in_RDI = ZEXT416(_LC3);
  uVar4 = _UNK_001038b8;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_001038c8;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DistanceConstraint::GetConstraintToBody2Matrix() const */

void JPH::DistanceConstraint::GetConstraintToBody2Matrix(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  uVar1 = *(undefined4 *)(in_RSI + 0x58);
  *in_RDI = ZEXT416(_LC3);
  uVar4 = _UNK_001038b8;
  uVar3 = __LC1;
  *(undefined8 *)in_RDI[3] = uVar2;
  *(undefined8 *)in_RDI[1] = uVar3;
  *(undefined8 *)(in_RDI[1] + 8) = uVar4;
  uVar3 = _UNK_001038c8;
  uVar2 = __LC2;
  *(undefined4 *)(in_RDI[3] + 0xc) = 0x3f800000;
  *(undefined8 *)in_RDI[2] = uVar2;
  *(undefined8 *)(in_RDI[2] + 8) = uVar3;
  *(undefined4 *)(in_RDI[3] + 8) = uVar1;
  return;
}



/* JPH::DistanceConstraintSettings::~DistanceConstraintSettings() */

void __thiscall
JPH::DistanceConstraintSettings::~DistanceConstraintSettings(DistanceConstraintSettings *this)

{
  return;
}



/* JPH::DistanceConstraintSettings::~DistanceConstraintSettings() */

void __thiscall
JPH::DistanceConstraintSettings::~DistanceConstraintSettings(DistanceConstraintSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::DistanceConstraint::~DistanceConstraint() */

void __thiscall JPH::DistanceConstraint::~DistanceConstraint(DistanceConstraint *this)

{
  return;
}



/* JPH::DistanceConstraint::~DistanceConstraint() */

void __thiscall JPH::DistanceConstraint::~DistanceConstraint(DistanceConstraint *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102244. Too many branches */
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
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const [clone .isra.0] */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  float in_XMM0_Da;
  float fVar5;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float fVar6;
  float in_XMM0_Dd;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float fVar7;
  float in_XMM1_Dd;
  float in_XMM2_Da;
  uint uVar8;
  float in_XMM2_Db;
  uint uVar10;
  float in_XMM2_Dc;
  uint uVar11;
  float in_XMM2_Dd;
  undefined1 auVar9 [16];
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98 [16];
  undefined1 local_58 [4];
  float afStack_54 [3];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_10;
  
  uVar3 = _UNK_001038e8;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar14 = (float)*(undefined8 *)(in_RSI + 0x38);
  fVar5 = (float)((ulong)*(undefined8 *)(in_RSI + 0x38) >> 0x20);
  fVar6 = (float)*(undefined8 *)(in_RSI + 0x30);
  fVar18 = fVar14 * (fVar14 + fVar14);
  fVar7 = (float)((ulong)*(undefined8 *)(in_RSI + 0x30) >> 0x20);
  fVar16 = fVar6 + fVar6;
  fVar17 = fVar7 + fVar7;
  fVar15 = (fVar14 + fVar14) * fVar5;
  local_58 = (_LC3 - fVar7 * fVar17) - fVar18;
  lVar4 = 0;
  register0x00001304 = fVar7 * fVar16 + fVar15;
  register0x00001308 = fVar14 * fVar16 - fVar17 * fVar5;
  register0x0000130c = 0;
  local_48._4_4_ = (_LC3 - fVar18) - fVar6 * fVar16;
  local_48._0_4_ = fVar7 * fVar16 - fVar15;
  local_48._8_4_ = fVar16 * fVar5 + fVar14 * fVar17;
  local_48._12_4_ = 0;
  local_38._4_4_ = fVar14 * fVar17 - fVar16 * fVar5;
  local_38._0_4_ = fVar14 * fVar16 + fVar17 * fVar5;
  local_38._8_4_ = (_LC3 - fVar6 * fVar16) - fVar7 * fVar17;
  local_38._12_4_ = 0;
  do {
    fVar6 = *(float *)(local_58 + lVar4);
    fVar7 = *(float *)(local_58 + lVar4 + 4);
    fVar14 = *(float *)(local_58 + lVar4 + 8);
    *(float *)((long)local_98 + lVar4) =
         fVar14 * in_XMM2_Da + fVar6 * in_XMM0_Da + fVar7 * in_XMM1_Da;
    *(float *)((long)local_98 + lVar4 + 4) =
         fVar14 * in_XMM2_Db + fVar6 * in_XMM0_Db + fVar7 * in_XMM1_Db;
    *(float *)((long)local_98 + lVar4 + 8) =
         fVar14 * in_XMM2_Dc + fVar6 * in_XMM0_Dc + fVar7 * in_XMM1_Dc;
    *(float *)((long)local_98 + lVar4 + 0xc) =
         fVar14 * in_XMM2_Dd + fVar6 * in_XMM0_Dd + fVar7 * in_XMM1_Dd;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x30);
  fVar6 = *(float *)(in_RSI + 0x20);
  fVar7 = *(float *)(in_RSI + 0x24);
  fVar14 = *(float *)(in_RSI + 0x28);
  bVar1 = *(byte *)(in_RSI + 0x7a);
  fVar16 = fVar7 * local_98[4];
  fVar17 = fVar7 * local_98[5];
  fVar7 = fVar7 * local_98[6];
  fVar5 = fVar6 * local_98[0];
  fVar15 = fVar6 * local_98[1];
  fVar6 = fVar6 * local_98[2];
  fVar18 = fVar14 * local_98[8];
  fVar13 = fVar14 * local_98[9];
  fVar14 = fVar14 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC13;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  auVar9._1_3_ = 0;
  auVar9[0] = bVar1;
  auVar9[4] = bVar1;
  auVar9._5_3_ = 0;
  auVar9[8] = bVar1;
  auVar9._9_3_ = 0;
  auVar9[0xc] = bVar1;
  auVar9._13_3_ = 0;
  auVar2._4_4_ = _UNK_001038f4;
  auVar2._0_4_ = __LC15;
  auVar2._8_4_ = _UNK_001038f8;
  auVar2._12_4_ = _UNK_001038fc;
  auVar9 = auVar9 & auVar2;
  uVar8 = -(uint)(auVar9._0_4_ == __LC15);
  uVar10 = -(uint)(auVar9._4_4_ == _UNK_001038f4);
  uVar11 = -(uint)(auVar9._8_4_ == _UNK_001038f8);
  uVar12 = -(uint)(auVar9._12_4_ == _UNK_001038fc);
  *(uint *)param_1 =
       (uint)(fVar16 * local_98[4] + fVar5 * local_98[0] + fVar18 * local_98[8]) & uVar8;
  *(uint *)(param_1 + 4) =
       (uint)(fVar16 * local_98[5] + fVar5 * local_98[1] + fVar18 * local_98[9]) & uVar8 & uVar10;
  *(uint *)(param_1 + 8) =
       (uint)(fVar16 * local_98[6] + fVar5 * local_98[2] + fVar18 * local_98[10]) & uVar8 & uVar11;
  *(uint *)(param_1 + 0xc) =
       (uint)(fVar16 * local_98[7] + fVar5 * local_98[3] + fVar18 * local_98[0xb]) & uVar8 & uVar12;
  *(uint *)(param_1 + 0x10) =
       (uint)(fVar17 * local_98[4] + fVar15 * local_98[0] + fVar13 * local_98[8]) & uVar10 & uVar8;
  *(uint *)(param_1 + 0x14) =
       (uint)(fVar17 * local_98[5] + fVar15 * local_98[1] + fVar13 * local_98[9]) & uVar10;
  *(uint *)(param_1 + 0x18) =
       (uint)(fVar17 * local_98[6] + fVar15 * local_98[2] + fVar13 * local_98[10]) & uVar10 & uVar11
  ;
  *(uint *)(param_1 + 0x1c) =
       (uint)(fVar17 * local_98[7] + fVar15 * local_98[3] + fVar13 * local_98[0xb]) &
       uVar10 & uVar12;
  *(uint *)(param_1 + 0x20) =
       (uint)(fVar7 * local_98[4] + fVar6 * local_98[0] + fVar14 * local_98[8]) & uVar11 & uVar8;
  *(uint *)(param_1 + 0x24) =
       (uint)(fVar7 * local_98[5] + fVar6 * local_98[1] + fVar14 * local_98[9]) & uVar11 & uVar10;
  *(uint *)(param_1 + 0x28) =
       (uint)(fVar7 * local_98[6] + fVar6 * local_98[2] + fVar14 * local_98[10]) & uVar11;
  *(uint *)(param_1 + 0x2c) =
       (uint)(fVar7 * local_98[7] + fVar6 * local_98[3] + fVar14 * local_98[0xb]) & uVar11 & uVar12;
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
  if (auVar5._0_4_ <= __LC17) {
    return;
  }
  fVar11 = _LC8 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC18 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00103904 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00103908 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010390c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC20 * fVar17 + _LC8);
  iVar14 = (int)(_LC20 * fVar18 + _LC8);
  iVar15 = (int)(_LC20 * fVar19 + _LC8);
  iVar16 = (int)(_LC20 * fVar20 + _LC8);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC8 * fVar4) + _LC3;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC8 * fVar22) + _LC3;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC8 * fVar24) + _LC3;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC8 * fVar26) + _LC3;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC18 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC18 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00103914 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00103904 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00103914 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00103904 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00103918 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00103908 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00103918 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00103908 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010391c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010390c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010391c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010390c ^
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
  if (auVar5._0_4_ <= __LC17) {
    return;
  }
  fVar11 = _LC42 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(__LC18 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00103904 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00103908 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010390c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC20 * fVar17 + _LC8);
  iVar14 = (int)(_LC20 * fVar18 + _LC8);
  iVar15 = (int)(_LC20 * fVar19 + _LC8);
  iVar16 = (int)(_LC20 * fVar20 + _LC8);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC22 * fVar4) - _LC24 * fVar4) - fVar4 * _LC26;
  fVar18 = ((fVar18 - _LC22 * fVar6) - _LC24 * fVar6) - fVar6 * _LC26;
  fVar7 = ((fVar19 - _LC22 * fVar7) - _LC24 * fVar7) - fVar7 * _LC26;
  fVar9 = ((fVar20 - _LC22 * fVar9) - _LC24 * fVar9) - fVar9 * _LC26;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC28 * fVar4 + _LC30) * fVar4 + _LC32) * fVar4 * fVar4 - _LC8 * fVar4) + _LC3;
  fVar20 = (((_LC28 * fVar22 + _LC30) * fVar22 + _LC32) * fVar22 * fVar22 - _LC8 * fVar22) + _LC3;
  fVar8 = (((_LC28 * fVar24 + _LC30) * fVar24 + _LC32) * fVar24 * fVar24 - _LC8 * fVar24) + _LC3;
  fVar10 = (((_LC28 * fVar26 + _LC30) * fVar26 + _LC32) * fVar26 * fVar26 - _LC8 * fVar26) + _LC3;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC35 * fVar4 + _LC37) * fVar4 + _LC39) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC35 * fVar22 + _LC37) * fVar22 + _LC39) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC35 * fVar24 + _LC37) * fVar24 + _LC39) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC35 * fVar26 + _LC37) * fVar26 + _LC39) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC40 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           __LC18 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC40 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & __LC18 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00103914 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00103904 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00103914 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00103904 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00103918 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00103908 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00103918 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00103908 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010391c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010390c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010391c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010390c ^
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
  float local_128;
  float fStack_124;
  float local_108;
  float fStack_104;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  long local_30;
  
  fVar3 = _LC3;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *(char *)(param_10 + 0x78);
  local_128 = (float)param_2_00;
  fVar6 = local_128;
  fStack_124 = (float)((ulong)param_2_00 >> 0x20);
  fStack_104 = (float)((ulong)param_6 >> 0x20);
  fVar5 = fStack_104;
  fStack_104 = (float)((ulong)param_4 >> 0x20);
  local_128 = (float)param_6;
  local_108 = (float)param_4;
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(param_11 + 0x48);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
    fVar8 = *(float *)(lVar2 + 0x58);
    fVar10 = local_108 * fVar5 - fStack_104 * local_128;
    fVar12 = fStack_104 * param_7 - param_5 * fVar5;
    fVar14 = param_5 * local_128 - local_108 * param_7;
    *param_2 = param_7 * fStack_124 - param_3 * fVar5;
    param_2[1] = local_128 * param_3 - fVar6 * param_7;
    param_2[2] = fVar5 * fVar6 - fStack_124 * local_128;
    param_2[3] = fVar12;
    *(ulong *)(param_2 + 4) = CONCAT44(fVar10,fVar14);
    fVar6 = local_78 * fVar12 + fVar14 * local_68 + fVar10 * local_58;
    fVar5 = fStack_74 * fVar12 + fVar14 * fStack_64 + fVar10 * fStack_54;
    fVar16 = fStack_70 * fVar12 + fVar14 * fStack_60 + fVar10 * fStack_50;
    *(ulong *)(param_2 + 9) = CONCAT44(fVar5,fVar6);
    param_2[0xb] = fVar16;
    fVar8 = fVar10 * fVar16 + fVar12 * fVar6 + 0.0 + fVar5 * fVar14 + fVar8 + 0.0;
LAB_00102e26:
    if (fVar8 != 0.0) {
      fVar6 = *(float *)(param_12 + 8);
      fVar5 = *(float *)(param_12 + 4);
      if (*param_12 == '\0') {
        fVar10 = fVar3 / fVar8;
        param_2[0xc] = fVar10;
        if (fVar5 <= 0.0) {
          param_2[0xe] = 0.0;
          param_2[0xd] = param_8;
        }
        else {
          fVar5 = fVar5 * __LC43;
          fVar12 = fVar5 * fVar5 * fVar10 * param_1;
          fVar6 = fVar3 / ((fVar5 * (fVar10 + fVar10) * fVar6 + fVar12) * param_1);
          param_2[0xe] = fVar6;
          *(ulong *)(param_2 + 0xc) =
               CONCAT44(fVar12 * fVar6 * param_15 + param_8,fVar3 / (fVar8 + fVar6));
        }
      }
      else if (fVar5 <= 0.0) {
        param_2[0xe] = 0.0;
        *(ulong *)(param_2 + 0xc) = CONCAT44(param_8,fVar3 / fVar8);
      }
      else {
        fVar6 = fVar3 / ((fVar6 + fVar5 * param_1) * param_1);
        param_2[0xe] = fVar6;
        *(ulong *)(param_2 + 0xc) =
             CONCAT44(fVar5 * param_1 * fVar6 * param_15 + param_8,fVar3 / (fVar8 + fVar6));
      }
      goto LAB_001030de;
    }
  }
  else {
    if (cVar1 == '\x02') {
      fVar8 = *(float *)(*(long *)(param_10 + 0x48) + 0x58);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      cVar1 = *(char *)(param_11 + 0x78);
      if (cVar1 == '\x01') {
        fVar10 = fVar6 * fVar5 - fStack_124 * local_128;
        fVar12 = fStack_124 * param_7 - param_3 * fVar5;
        fVar6 = param_3 * local_128 - fVar6 * param_7;
        fVar14 = local_b8 * fVar12 + fVar6 * local_a8 + fVar10 * local_98;
        fVar16 = fStack_b4 * fVar12 + fVar6 * fStack_a4 + fVar10 * fStack_94;
        fVar4 = fStack_b0 * fVar12 + fVar6 * fStack_a0 + fVar10 * fStack_90;
        *param_2 = fVar12;
        param_2[1] = fVar6;
        param_2[2] = fVar10;
        param_2[3] = param_7 * fStack_104 - param_5 * fVar5;
        param_2[4] = local_128 * param_5 - local_108 * param_7;
        param_2[5] = fVar5 * local_108 - fStack_104 * local_128;
        param_2[6] = fVar14;
        param_2[7] = fVar16;
        param_2[8] = fVar4;
        fVar8 = fVar10 * fVar4 + fVar12 * fVar14 + 0.0 + fVar6 * fVar16 + fVar8;
      }
      else if (cVar1 == '\x02') {
        lVar2 = *(long *)(param_11 + 0x48);
        MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
        fVar10 = *(float *)(lVar2 + 0x58);
        fVar7 = fVar6 * fVar5 - fStack_124 * local_128;
        fVar9 = fStack_124 * param_7 - param_3 * fVar5;
        fVar11 = param_3 * local_128 - fVar6 * param_7;
        fVar6 = fVar5 * local_108 - fStack_104 * local_128;
        fVar5 = param_7 * fStack_104 - param_5 * fVar5;
        fVar12 = local_128 * param_5 - local_108 * param_7;
        fVar13 = local_b8 * fVar9 + fVar11 * local_a8 + fVar7 * local_98;
        fVar15 = fStack_b4 * fVar9 + fVar11 * fStack_a4 + fVar7 * fStack_94;
        fVar17 = fStack_b0 * fVar9 + fVar11 * fStack_a0 + fVar7 * fStack_90;
        fVar14 = local_78 * fVar5 + fVar12 * local_68 + fVar6 * local_58;
        fVar16 = fStack_74 * fVar5 + fVar12 * fStack_64 + fVar6 * fStack_54;
        fVar4 = fStack_70 * fVar5 + fVar12 * fStack_60 + fVar6 * fStack_50;
        *param_2 = fVar9;
        param_2[1] = fVar11;
        param_2[2] = fVar7;
        param_2[3] = fVar5;
        param_2[4] = fVar12;
        param_2[5] = fVar6;
        param_2[6] = fVar13;
        param_2[7] = fVar15;
        param_2[8] = fVar17;
        param_2[9] = fVar14;
        param_2[10] = fVar16;
        param_2[0xb] = fVar4;
        fVar8 = fVar6 * fVar4 + fVar16 * fVar12 + fVar14 * fVar5 + 0.0 + fVar10 +
                fVar17 * fVar7 + fVar15 * fVar11 + fVar13 * fVar9 + 0.0 + fVar8;
      }
      else {
        if (cVar1 != '\0') goto LAB_001030d0;
        fVar10 = fVar5 * fVar6 - fStack_124 * local_128;
        fVar5 = param_7 * fStack_124 - param_3 * fVar5;
        fVar6 = local_128 * param_3 - fVar6 * param_7;
        param_2[2] = fVar10;
        *(ulong *)param_2 = CONCAT44(fVar6,fVar5);
        fVar12 = local_b8 * fVar5 + fVar6 * local_a8 + fVar10 * local_98;
        fVar14 = fStack_b4 * fVar5 + fVar6 * fStack_a4 + fVar10 * fStack_94;
        fVar16 = fStack_b0 * fVar5 + fVar6 * fStack_a0 + fVar10 * fStack_90;
        *(ulong *)(param_2 + 6) = CONCAT44(fVar14,fVar12);
        param_2[8] = fVar16;
        fVar8 = fVar8 + fVar10 * fVar16 + fVar6 * fVar14 + fVar5 * fVar12 + 0.0;
      }
      goto LAB_00102e26;
    }
    if (cVar1 == '\0') {
      lVar2 = *(long *)(param_11 + 0x48);
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_78);
      fVar6 = *(float *)(lVar2 + 0x58);
      fVar12 = fVar5 * local_108 - fStack_104 * local_128;
      fVar14 = param_7 * fStack_104 - param_5 * fVar5;
      fVar16 = local_128 * param_5 - local_108 * param_7;
      param_2[5] = fVar12;
      *(ulong *)(param_2 + 3) = CONCAT44(fVar16,fVar14);
      fVar5 = local_78 * fVar14 + fVar16 * local_68 + fVar12 * local_58;
      fVar8 = fStack_74 * fVar14 + fVar16 * fStack_64 + fVar12 * fStack_54;
      fVar10 = fStack_70 * fVar14 + fVar16 * fStack_60 + fVar12 * fStack_50;
      *(ulong *)(param_2 + 9) = CONCAT44(fVar8,fVar5);
      param_2[0xb] = fVar10;
      fVar8 = fVar12 * fVar10 + fVar8 * fVar16 + fVar5 * fVar14 + 0.0 + fVar6 + 0.0;
      goto LAB_00102e26;
    }
  }
LAB_001030d0:
  param_2[0xc] = 0.0;
  param_2[0xf] = 0.0;
LAB_001030de:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::DistanceConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC48;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::DistanceConstraint::~DistanceConstraint() */

void __thiscall JPH::DistanceConstraint::~DistanceConstraint(DistanceConstraint *this)

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
/* JPH::DistanceConstraintSettings::~DistanceConstraintSettings() */

void __thiscall
JPH::DistanceConstraintSettings::~DistanceConstraintSettings(DistanceConstraintSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



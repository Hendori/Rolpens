/* JPH::PathConstraint::NotifyShapeChanged(JPH::BodyID const&, JPH::Vec3) */

void JPH::PathConstraint::NotifyShapeChanged
               (undefined8 param_1_00,float param_2,long param_1,int *param_4)

{
  float fVar1;
  
  fVar1 = (float)((ulong)param_1_00 >> 0x20);
  if (*(int *)(*(long *)(param_1 + 0x28) + 0x70) == *param_4) {
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(*(float *)(param_1 + 0x74) - fVar1,*(float *)(param_1 + 0x70) - (float)param_1_00)
    ;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) - param_2;
    return;
  }
  if (*param_4 != *(int *)(*(long *)(param_1 + 0x30) + 0x70)) {
    return;
  }
  *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
  *(ulong *)(param_1 + 0xb0) =
       CONCAT44(*(float *)(param_1 + 0xb4) - fVar1,*(float *)(param_1 + 0xb0) - (float)param_1_00);
  *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) - param_2;
  return;
}



/* JPH::PathConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::PathConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PathConstraintSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PathConstraintSettings::SaveBinaryState(PathConstraintSettings *this,StreamOut *param_1)

{
  JPH::ConstraintSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(**(long **)(this + 0x28) + 0x38))(*(long **)(this + 0x28),param_1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  JPH::MotorSettings::SaveBinaryState((StreamOut *)(this + 0x58));
  return;
}



/* JPH::PathConstraint::SaveState(JPH::StateRecorder&) const */

void __thiscall JPH::PathConstraint::SaveState(PathConstraint *this,StateRecorder *param_1)

{
  StateRecorder *pSVar1;
  
  pSVar1 = param_1 + 8;
  JPH::Constraint::SaveState((StateRecorder *)this);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x200,8);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x24c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x28c,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x370,8);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x440,0xc);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xc4,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 200,0x1c);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe4,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xe8,4);
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0xec,4);
                    /* WARNING: Could not recover jumptable at 0x0010023e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(pSVar1,this + 0x160,4);
  return;
}



/* JPH::PathConstraint::RestoreState(JPH::StateRecorder&) */

void __thiscall JPH::PathConstraint::RestoreState(PathConstraint *this,StateRecorder *param_1)

{
  JPH::Constraint::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x200,8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x24c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28c,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x370,8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x440,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 200,0x1c);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xe8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xec,4);
                    /* WARNING: Could not recover jumptable at 0x00100343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x160,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*Allocate)(0x80);
  uVar3 = __LC3;
  *(undefined1 (*) [16])(puVar4 + 6) = (undefined1  [16])0x0;
  uVar2 = _UNK_00107848;
  uVar1 = __LC1;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[8] = uVar1;
  puVar4[9] = uVar2;
  uVar2 = __LC3;
  uVar1 = __LC2;
  *(undefined1 *)((long)puVar4 + 0xc) = 1;
  *puVar4 = &PTR_GetRTTI_00107740;
  puVar4[2] = 0;
  puVar4[3] = 0x3f80000000000000;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  *(undefined8 *)((long)puVar4 + 0x6c) = uVar3;
  *(undefined4 *)((long)puVar4 + 0x74) = 0;
  *(undefined8 *)((long)puVar4 + 0x5c) = uVar1;
  *(undefined8 *)((long)puVar4 + 100) = uVar2;
  return;
}



/* JPH::PathConstraint::GetConstraintSettings() const */

PathConstraint * __thiscall JPH::PathConstraint::GetConstraintSettings(PathConstraint *this)

{
  *(undefined8 *)this = 0;
  return this;
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
        auVar8._4_4_ = _UNK_00107864;
        auVar8._0_4_ = __LC7;
        auVar8._8_4_ = _UNK_00107868;
        auVar8._12_4_ = _UNK_0010786c;
        auVar21 = auVar21 & auVar8;
        bVar2 = auVar21._4_4_ == _UNK_00107864;
        bVar3 = auVar21._8_4_ == _UNK_00107868;
        bVar4 = auVar21._12_4_ == _UNK_0010786c;
        *param_2 = (float)((uint)(fVar14 - fVar26 * local_18) & -(uint)(auVar21._0_4_ == __LC7));
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
          iVar12 = _UNK_0010786c;
          iVar11 = _UNK_00107868;
          iVar10 = _UNK_00107864;
          iVar9 = __LC7;
          param_4 = param_4 - fVar14;
          if (param_4 != 0.0) {
            bVar1 = *(byte *)((long)param_2 + 0x7a);
            fVar27 = fVar27 * param_4;
            auVar7._4_4_ = _UNK_00107864;
            auVar7._0_4_ = __LC7;
            auVar7._8_4_ = _UNK_00107868;
            auVar7._12_4_ = _UNK_0010786c;
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
            bVar2 = auVar25._4_4_ == _UNK_00107864;
            bVar3 = auVar25._8_4_ == _UNK_00107868;
            bVar4 = auVar25._12_4_ == _UNK_0010786c;
            *param_2 = (float)((uint)(fVar16 - fVar27 * local_18) & -(uint)(auVar25._0_4_ == __LC7))
            ;
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
        auVar6._4_4_ = _UNK_00107864;
        auVar6._0_4_ = __LC7;
        auVar6._8_4_ = _UNK_00107868;
        auVar6._12_4_ = _UNK_0010786c;
        auVar20 = auVar20 & auVar6;
        bVar2 = auVar20._4_4_ == _UNK_00107864;
        bVar3 = auVar20._8_4_ == _UNK_00107868;
        bVar4 = auVar20._12_4_ == _UNK_0010786c;
        *param_2 = (float)(-(uint)(auVar20._0_4_ == __LC7) & (uint)(*param_2 - fVar26 * local_18));
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
  auVar5._4_4_ = _UNK_00107864;
  auVar5._0_4_ = __LC7;
  auVar5._8_4_ = _UNK_00107868;
  auVar5._12_4_ = _UNK_0010786c;
  auVar24 = auVar24 & auVar5;
  bVar2 = auVar24._4_4_ == _UNK_00107864;
  bVar3 = auVar24._8_4_ == _UNK_00107868;
  bVar4 = auVar24._12_4_ == _UNK_0010786c;
  *param_8 = (float)((uint)fVar14 & -(uint)(auVar24._0_4_ == __LC7));
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



/* JPH::PathConstraint::ResetWarmStart() */

void __thiscall JPH::PathConstraint::ResetWarmStart(PathConstraint *this)

{
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x360) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x400) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x430) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x440) = (undefined1  [16])0x0;
  return;
}



/* JPH::PathConstraintSettings::GetRTTI() const */

undefined1 * JPH::PathConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintSettings*)::rtti,
                      "PathConstraintSettings",0x80,
                      GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined ***)param_1 = &PTR_GetRTTI_00107740;
    plVar2 = *(long **)((long)param_1 + 0x28);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraint::WarmStartVelocityConstraint(float) */

void __thiscall JPH::PathConstraint::WarmStartVelocityConstraint(PathConstraint *this,float param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar30;
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar37;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  fVar27 = *(float *)(this + 0x120);
  fVar29 = *(float *)(this + 0x124);
  fVar35 = *(float *)(this + 0x128);
  fVar28 = *(float *)(this + 300);
  cVar1 = *(char *)(*(long *)(this + 0x28) + 0x78);
  pfVar6 = *(float **)(*(long *)(this + 0x28) + 0x48);
  fVar36 = *(float *)(this + 0x28c) * param_1;
  pfVar7 = *(float **)(*(long *)(this + 0x30) + 0x48);
  cVar2 = *(char *)(*(long *)(this + 0x30) + 0x78);
  if (cVar1 == '\x02') {
    fVar30 = pfVar6[0x16];
    if (cVar2 == '\x02') {
      fVar37 = pfVar7[0x16];
      *(float *)(this + 0x28c) = fVar36;
      iVar25 = _UNK_0010786c;
      iVar24 = _UNK_00107868;
      iVar23 = _UNK_00107864;
      iVar5 = __LC7;
      if (fVar36 != 0.0) {
        fVar30 = fVar30 * fVar36;
        bVar4 = *(byte *)((long)pfVar6 + 0x7a);
        fVar37 = fVar37 * fVar36;
        auVar32._1_3_ = 0;
        auVar32[0] = bVar4;
        bVar3 = *(byte *)((long)pfVar7 + 0x7a);
        auVar32[4] = bVar4;
        auVar32._5_3_ = 0;
        auVar32[8] = bVar4;
        auVar32._9_3_ = 0;
        auVar32[0xc] = bVar4;
        auVar32._13_3_ = 0;
        auVar21._4_4_ = _UNK_00107864;
        auVar21._0_4_ = __LC7;
        auVar21._8_4_ = _UNK_00107868;
        auVar21._12_4_ = _UNK_0010786c;
        auVar32 = auVar32 & auVar21;
        bVar8 = auVar32._4_4_ == _UNK_00107864;
        bVar9 = auVar32._8_4_ == _UNK_00107868;
        bVar10 = auVar32._12_4_ == _UNK_0010786c;
        auVar38._1_3_ = 0;
        auVar38[0] = bVar3;
        *pfVar6 = (float)(-(uint)(auVar32._0_4_ == __LC7) & (uint)(*pfVar6 - fVar30 * fVar27));
        pfVar6[1] = (float)(-(uint)bVar8 & (uint)(pfVar6[1] - fVar30 * fVar29));
        pfVar6[2] = (float)(-(uint)bVar9 & (uint)(pfVar6[2] - fVar30 * fVar35));
        pfVar6[3] = (float)(-(uint)bVar10 & (uint)(pfVar6[3] - fVar30 * fVar28));
        fVar30 = *(float *)(this + 0x26c);
        fVar11 = *(float *)(this + 0x270);
        fVar12 = *(float *)(this + 0x274);
        auVar38[4] = bVar3;
        auVar38._5_3_ = 0;
        auVar38[8] = bVar3;
        auVar38._9_3_ = 0;
        auVar38[0xc] = bVar3;
        auVar38._13_3_ = 0;
        auVar38 = auVar38 & auVar21;
        pfVar6[4] = pfVar6[4] - *(float *)(this + 0x268) * fVar36;
        pfVar6[5] = pfVar6[5] - fVar30 * fVar36;
        pfVar6[6] = pfVar6[6] - fVar11 * fVar36;
        pfVar6[7] = pfVar6[7] - fVar12 * fVar36;
        *pfVar7 = (float)((uint)(fVar37 * fVar27 + *pfVar7) & -(uint)(auVar38._0_4_ == iVar5));
        pfVar7[1] = (float)((uint)(fVar37 * fVar29 + pfVar7[1]) & -(uint)(auVar38._4_4_ == iVar23));
        pfVar7[2] = (float)((uint)(fVar37 * fVar35 + pfVar7[2]) & -(uint)(auVar38._8_4_ == iVar24));
        pfVar7[3] = (float)((uint)(fVar37 * fVar28 + pfVar7[3]) & -(uint)(auVar38._12_4_ == iVar25))
        ;
        fVar27 = *(float *)(this + 0x278);
        fVar29 = *(float *)(this + 0x27c);
        fVar35 = *(float *)(this + 0x280);
        pfVar7[4] = *(float *)(this + 0x274) * fVar36 + pfVar7[4];
        pfVar7[5] = fVar27 * fVar36 + pfVar7[5];
        pfVar7[6] = fVar29 * fVar36 + pfVar7[6];
        pfVar7[7] = fVar35 * fVar36 + pfVar7[7];
      }
    }
    else {
      *(float *)(this + 0x28c) = fVar36;
      if (fVar36 != 0.0) {
        fVar30 = fVar30 * fVar36;
        bVar4 = *(byte *)((long)pfVar6 + 0x7a);
        auVar20._4_4_ = _UNK_00107864;
        auVar20._0_4_ = __LC7;
        auVar20._8_4_ = _UNK_00107868;
        auVar20._12_4_ = _UNK_0010786c;
        auVar34._1_3_ = 0;
        auVar34[0] = bVar4;
        auVar34[4] = bVar4;
        auVar34._5_3_ = 0;
        auVar34[8] = bVar4;
        auVar34._9_3_ = 0;
        auVar34[0xc] = bVar4;
        auVar34._13_3_ = 0;
        auVar34 = auVar34 & auVar20;
        bVar8 = auVar34._4_4_ == _UNK_00107864;
        bVar9 = auVar34._8_4_ == _UNK_00107868;
        bVar10 = auVar34._12_4_ == _UNK_0010786c;
        *pfVar6 = (float)(-(uint)(auVar34._0_4_ == __LC7) & (uint)(*pfVar6 - fVar30 * fVar27));
        pfVar6[1] = (float)(-(uint)bVar8 & (uint)(pfVar6[1] - fVar30 * fVar29));
        pfVar6[2] = (float)(-(uint)bVar9 & (uint)(pfVar6[2] - fVar30 * fVar35));
        pfVar6[3] = (float)(-(uint)bVar10 & (uint)(pfVar6[3] - fVar30 * fVar28));
        fVar27 = *(float *)(this + 0x26c);
        fVar29 = *(float *)(this + 0x270);
        fVar35 = *(float *)(this + 0x274);
        pfVar6[4] = pfVar6[4] - fVar36 * *(float *)(this + 0x268);
        pfVar6[5] = pfVar6[5] - fVar36 * fVar27;
        pfVar6[6] = pfVar6[6] - fVar36 * fVar29;
        pfVar6[7] = pfVar6[7] - fVar36 * fVar35;
      }
    }
  }
  else {
    fVar30 = pfVar7[0x16];
    *(float *)(this + 0x28c) = fVar36;
    if (fVar36 != 0.0) {
      fVar30 = fVar30 * fVar36;
      bVar4 = *(byte *)((long)pfVar7 + 0x7a);
      auVar22._4_4_ = _UNK_00107864;
      auVar22._0_4_ = __LC7;
      auVar22._8_4_ = _UNK_00107868;
      auVar22._12_4_ = _UNK_0010786c;
      auVar42._1_3_ = 0;
      auVar42[0] = bVar4;
      auVar42[4] = bVar4;
      auVar42._5_3_ = 0;
      auVar42[8] = bVar4;
      auVar42._9_3_ = 0;
      auVar42[0xc] = bVar4;
      auVar42._13_3_ = 0;
      auVar42 = auVar42 & auVar22;
      bVar8 = auVar42._4_4_ == _UNK_00107864;
      bVar9 = auVar42._8_4_ == _UNK_00107868;
      bVar10 = auVar42._12_4_ == _UNK_0010786c;
      *pfVar7 = (float)((uint)(fVar30 * fVar27 + *pfVar7) & -(uint)(auVar42._0_4_ == __LC7));
      pfVar7[1] = (float)((uint)(fVar30 * fVar29 + pfVar7[1]) & -(uint)bVar8);
      pfVar7[2] = (float)((uint)(fVar30 * fVar35 + pfVar7[2]) & -(uint)bVar9);
      pfVar7[3] = (float)((uint)(fVar30 * fVar28 + pfVar7[3]) & -(uint)bVar10);
      fVar27 = *(float *)(this + 0x278);
      fVar29 = *(float *)(this + 0x27c);
      fVar35 = *(float *)(this + 0x280);
      pfVar7[4] = fVar36 * *(float *)(this + 0x274) + pfVar7[4];
      pfVar7[5] = fVar36 * fVar27 + pfVar7[5];
      pfVar7[6] = fVar36 * fVar29 + pfVar7[6];
      pfVar7[7] = fVar36 * fVar35 + pfVar7[7];
    }
  }
  fVar27 = *(float *)(this + 0x200);
  fVar29 = (float)*(undefined8 *)(this + 0x200) * param_1;
  fVar35 = (float)((ulong)*(undefined8 *)(this + 0x200) >> 0x20) * param_1;
  *(ulong *)(this + 0x200) = CONCAT44(fVar35,fVar29);
  iVar25 = _UNK_0010786c;
  iVar24 = _UNK_00107868;
  iVar23 = _UNK_00107864;
  iVar5 = __LC7;
  if ((fVar27 * param_1 == 0.0) && (*(float *)(this + 0x204) * param_1 == 0.0)) {
    fVar27 = *(float *)(this + 0x120);
    fVar29 = *(float *)(this + 0x124);
    fVar35 = *(float *)(this + 0x128);
    fVar28 = *(float *)(this + 300);
    if (cVar1 != '\x02') {
LAB_00100de0:
      fVar37 = pfVar7[0x16];
LAB_00100de5:
      fVar36 = *(float *)(this + 0x24c) * param_1;
      *(float *)(this + 0x24c) = fVar36;
      if (fVar36 != 0.0) {
        fVar37 = fVar37 * fVar36;
        bVar4 = *(byte *)((long)pfVar7 + 0x7a);
        auVar41._1_3_ = 0;
        auVar41[0] = bVar4;
        auVar41[4] = bVar4;
        auVar41._5_3_ = 0;
        auVar41[8] = bVar4;
        auVar41._9_3_ = 0;
        auVar41[0xc] = bVar4;
        auVar41._13_3_ = 0;
        auVar19._4_4_ = _UNK_00107864;
        auVar19._0_4_ = __LC7;
        auVar19._8_4_ = _UNK_00107868;
        auVar19._12_4_ = _UNK_0010786c;
        auVar41 = auVar41 & auVar19;
        bVar8 = auVar41._4_4_ == _UNK_00107864;
        bVar9 = auVar41._8_4_ == _UNK_00107868;
        bVar10 = auVar41._12_4_ == _UNK_0010786c;
        *pfVar7 = (float)((uint)(fVar37 * fVar27 + *pfVar7) & -(uint)(auVar41._0_4_ == __LC7));
        pfVar7[1] = (float)((uint)(fVar37 * fVar29 + pfVar7[1]) & -(uint)bVar8);
        pfVar7[2] = (float)((uint)(fVar37 * fVar35 + pfVar7[2]) & -(uint)bVar9);
        pfVar7[3] = (float)((uint)(fVar37 * fVar28 + pfVar7[3]) & -(uint)bVar10);
        fVar27 = *(float *)(this + 0x238);
        fVar29 = *(float *)(this + 0x23c);
        fVar35 = *(float *)(this + 0x240);
        pfVar7[4] = fVar36 * *(float *)(this + 0x234) + pfVar7[4];
        pfVar7[5] = fVar36 * fVar27 + pfVar7[5];
        pfVar7[6] = fVar36 * fVar29 + pfVar7[6];
        pfVar7[7] = fVar36 * fVar35 + pfVar7[7];
      }
      goto LAB_00100d2b;
    }
    if (cVar2 != '\x02') {
      fVar37 = pfVar6[0x16];
LAB_00100d04:
      fVar36 = *(float *)(this + 0x24c) * param_1;
      *(float *)(this + 0x24c) = fVar36;
      if (fVar36 != 0.0) {
        fVar37 = fVar37 * fVar36;
        bVar4 = *(byte *)((long)pfVar6 + 0x7a);
        auVar40._1_3_ = 0;
        auVar40[0] = bVar4;
        auVar40[4] = bVar4;
        auVar40._5_3_ = 0;
        auVar40[8] = bVar4;
        auVar40._9_3_ = 0;
        auVar40[0xc] = bVar4;
        auVar40._13_3_ = 0;
        auVar17._4_4_ = _UNK_00107864;
        auVar17._0_4_ = __LC7;
        auVar17._8_4_ = _UNK_00107868;
        auVar17._12_4_ = _UNK_0010786c;
        auVar40 = auVar40 & auVar17;
        bVar8 = auVar40._4_4_ == _UNK_00107864;
        bVar9 = auVar40._8_4_ == _UNK_00107868;
        bVar10 = auVar40._12_4_ == _UNK_0010786c;
        *pfVar6 = (float)(-(uint)(auVar40._0_4_ == __LC7) & (uint)(*pfVar6 - fVar37 * fVar27));
        pfVar6[1] = (float)(-(uint)bVar8 & (uint)(pfVar6[1] - fVar37 * fVar29));
        pfVar6[2] = (float)(-(uint)bVar9 & (uint)(pfVar6[2] - fVar37 * fVar35));
        pfVar6[3] = (float)(-(uint)bVar10 & (uint)(pfVar6[3] - fVar37 * fVar28));
        fVar27 = *(float *)(this + 0x22c);
        fVar29 = *(float *)(this + 0x230);
        fVar35 = *(float *)(this + 0x234);
        pfVar6[4] = pfVar6[4] - *(float *)(this + 0x228) * fVar36;
        pfVar6[5] = pfVar6[5] - fVar27 * fVar36;
        pfVar6[6] = pfVar6[6] - fVar29 * fVar36;
        pfVar6[7] = pfVar6[7] - fVar35 * fVar36;
      }
      goto LAB_00100d2b;
    }
    fVar37 = pfVar7[0x16];
  }
  else {
    fVar27 = *(float *)(this + 0x140) * fVar35 + *(float *)(this + 0x130) * fVar29;
    fVar28 = *(float *)(this + 0x144) * fVar35 + *(float *)(this + 0x134) * fVar29;
    fVar36 = *(float *)(this + 0x148) * fVar35 + *(float *)(this + 0x138) * fVar29;
    fVar30 = *(float *)(this + 0x14c) * fVar35 + *(float *)(this + 0x13c) * fVar29;
    if (cVar1 == '\x02') {
      fVar37 = pfVar6[0x16];
      bVar4 = *(byte *)((long)pfVar6 + 0x7a);
      auVar33._1_3_ = 0;
      auVar33[0] = bVar4;
      auVar33[4] = bVar4;
      auVar33._5_3_ = 0;
      auVar33[8] = bVar4;
      auVar33._9_3_ = 0;
      auVar33[0xc] = bVar4;
      auVar33._13_3_ = 0;
      auVar44._4_4_ = _UNK_00107864;
      auVar44._0_4_ = __LC7;
      auVar44._8_4_ = _UNK_00107868;
      auVar44._12_4_ = _UNK_0010786c;
      auVar33 = auVar33 & auVar44;
      bVar8 = auVar33._4_4_ == _UNK_00107864;
      bVar9 = auVar33._8_4_ == _UNK_00107868;
      bVar10 = auVar33._12_4_ == _UNK_0010786c;
      *pfVar6 = (float)(-(uint)(auVar33._0_4_ == __LC7) & (uint)(*pfVar6 - fVar37 * fVar27));
      pfVar6[1] = (float)(-(uint)bVar8 & (uint)(pfVar6[1] - fVar37 * fVar28));
      pfVar6[2] = (float)(-(uint)bVar9 & (uint)(pfVar6[2] - fVar37 * fVar36));
      pfVar6[3] = (float)(-(uint)bVar10 & (uint)(pfVar6[3] - fVar37 * fVar30));
      fVar11 = *(float *)(this + 0x1c4);
      fVar12 = *(float *)(this + 0x1c8);
      fVar13 = *(float *)(this + 0x1cc);
      fVar14 = *(float *)(this + 0x1b4);
      fVar15 = *(float *)(this + 0x1b8);
      fVar16 = *(float *)(this + 0x1bc);
      pfVar6[4] = pfVar6[4] -
                  (*(float *)(this + 0x1c0) * fVar35 + *(float *)(this + 0x1b0) * fVar29);
      pfVar6[5] = pfVar6[5] - (fVar11 * fVar35 + fVar14 * fVar29);
      pfVar6[6] = pfVar6[6] - (fVar12 * fVar35 + fVar15 * fVar29);
      pfVar6[7] = pfVar6[7] - (fVar13 * fVar35 + fVar16 * fVar29);
      if (cVar2 != '\x02') {
        fVar27 = *(float *)(this + 0x120);
        fVar29 = *(float *)(this + 0x124);
        fVar35 = *(float *)(this + 0x128);
        fVar28 = *(float *)(this + 300);
        goto LAB_00100d04;
      }
    }
    else {
      if (cVar2 != '\x02') {
        fVar27 = *(float *)(this + 0x120);
        fVar29 = *(float *)(this + 0x124);
        fVar35 = *(float *)(this + 0x128);
        fVar28 = *(float *)(this + 300);
        goto LAB_00100de0;
      }
      auVar44._4_4_ = _UNK_00107864;
      auVar44._0_4_ = __LC7;
      auVar44._8_4_ = _UNK_00107868;
      auVar44._12_4_ = _UNK_0010786c;
    }
    fVar37 = pfVar7[0x16];
    bVar4 = *(byte *)((long)pfVar7 + 0x7a);
    auVar45._1_3_ = 0;
    auVar45[0] = bVar4;
    auVar45[4] = bVar4;
    auVar45._5_3_ = 0;
    auVar45[8] = bVar4;
    auVar45._9_3_ = 0;
    auVar45[0xc] = bVar4;
    auVar45._13_3_ = 0;
    auVar44 = auVar44 & auVar45;
    *pfVar7 = (float)((uint)(fVar37 * fVar27 + *pfVar7) & -(uint)(auVar44._0_4_ == iVar5));
    pfVar7[1] = (float)((uint)(fVar37 * fVar28 + pfVar7[1]) & -(uint)(auVar44._4_4_ == iVar23));
    pfVar7[2] = (float)((uint)(fVar37 * fVar36 + pfVar7[2]) & -(uint)(auVar44._8_4_ == iVar24));
    pfVar7[3] = (float)((uint)(fVar37 * fVar30 + pfVar7[3]) & -(uint)(auVar44._12_4_ == iVar25));
    fVar27 = *(float *)(this + 0x1d4);
    fVar28 = *(float *)(this + 0x1d8);
    fVar36 = *(float *)(this + 0x1dc);
    fVar30 = *(float *)(this + 0x1e4);
    fVar11 = *(float *)(this + 0x1e8);
    fVar12 = *(float *)(this + 0x1ec);
    pfVar7[4] = fVar35 * *(float *)(this + 0x1e0) + fVar29 * *(float *)(this + 0x1d0) + pfVar7[4];
    pfVar7[5] = fVar35 * fVar30 + fVar29 * fVar27 + pfVar7[5];
    pfVar7[6] = fVar35 * fVar11 + fVar29 * fVar28 + pfVar7[6];
    pfVar7[7] = fVar35 * fVar12 + fVar29 * fVar36 + pfVar7[7];
    fVar27 = *(float *)(this + 0x120);
    fVar29 = *(float *)(this + 0x124);
    fVar35 = *(float *)(this + 0x128);
    fVar28 = *(float *)(this + 300);
    if (cVar1 != '\x02') goto LAB_00100de5;
  }
  fVar36 = pfVar6[0x16];
  fVar30 = *(float *)(this + 0x24c) * param_1;
  *(float *)(this + 0x24c) = fVar30;
  iVar25 = _UNK_0010786c;
  iVar24 = _UNK_00107868;
  iVar23 = _UNK_00107864;
  iVar5 = __LC7;
  if (fVar30 != 0.0) {
    fVar36 = fVar36 * fVar30;
    bVar4 = *(byte *)((long)pfVar6 + 0x7a);
    auVar18._4_4_ = _UNK_00107864;
    auVar18._0_4_ = __LC7;
    auVar18._8_4_ = _UNK_00107868;
    auVar18._12_4_ = _UNK_0010786c;
    auVar43._1_3_ = 0;
    auVar43[0] = bVar4;
    bVar3 = *(byte *)((long)pfVar7 + 0x7a);
    auVar43[4] = bVar4;
    auVar43._5_3_ = 0;
    auVar43[8] = bVar4;
    auVar43._9_3_ = 0;
    auVar43[0xc] = bVar4;
    auVar43._13_3_ = 0;
    auVar43 = auVar43 & auVar18;
    bVar8 = auVar43._4_4_ == _UNK_00107864;
    bVar9 = auVar43._8_4_ == _UNK_00107868;
    bVar10 = auVar43._12_4_ == _UNK_0010786c;
    *pfVar6 = (float)(-(uint)(auVar43._0_4_ == __LC7) & (uint)(*pfVar6 - fVar36 * fVar27));
    pfVar6[1] = (float)(-(uint)bVar8 & (uint)(pfVar6[1] - fVar36 * fVar29));
    pfVar6[2] = (float)(-(uint)bVar9 & (uint)(pfVar6[2] - fVar36 * fVar35));
    pfVar6[3] = (float)(-(uint)bVar10 & (uint)(pfVar6[3] - fVar36 * fVar28));
    fVar36 = *(float *)(this + 0x22c);
    fVar11 = *(float *)(this + 0x230);
    fVar12 = *(float *)(this + 0x234);
    fVar37 = fVar30 * fVar37;
    auVar39._1_3_ = 0;
    auVar39[0] = bVar3;
    auVar39[4] = bVar3;
    auVar39._5_3_ = 0;
    auVar39[8] = bVar3;
    auVar39._9_3_ = 0;
    auVar39[0xc] = bVar3;
    auVar39._13_3_ = 0;
    auVar39 = auVar39 & auVar18;
    pfVar6[4] = pfVar6[4] - *(float *)(this + 0x228) * fVar30;
    pfVar6[5] = pfVar6[5] - fVar36 * fVar30;
    pfVar6[6] = pfVar6[6] - fVar11 * fVar30;
    pfVar6[7] = pfVar6[7] - fVar12 * fVar30;
    *pfVar7 = (float)((uint)(fVar37 * fVar27 + *pfVar7) & -(uint)(auVar39._0_4_ == iVar5));
    pfVar7[1] = (float)((uint)(fVar37 * fVar29 + pfVar7[1]) & -(uint)(auVar39._4_4_ == iVar23));
    pfVar7[2] = (float)((uint)(fVar37 * fVar35 + pfVar7[2]) & -(uint)(auVar39._8_4_ == iVar24));
    pfVar7[3] = (float)((uint)(fVar37 * fVar28 + pfVar7[3]) & -(uint)(auVar39._12_4_ == iVar25));
    fVar27 = *(float *)(this + 0x238);
    fVar29 = *(float *)(this + 0x23c);
    fVar35 = *(float *)(this + 0x240);
    pfVar7[4] = *(float *)(this + 0x234) * fVar30 + pfVar7[4];
    pfVar7[5] = fVar27 * fVar30 + pfVar7[5];
    pfVar7[6] = fVar29 * fVar30 + pfVar7[6];
    pfVar7[7] = fVar35 * fVar30 + pfVar7[7];
  }
LAB_00100d2b:
  iVar5 = *(int *)(this + 0xc0);
  if (iVar5 < 4) {
    if (iVar5 < 1) {
      return;
    }
    fVar27 = *(float *)(this + 0x370);
    fVar29 = (float)*(undefined8 *)(this + 0x370) * param_1;
    fVar35 = (float)((ulong)*(undefined8 *)(this + 0x370) >> 0x20) * param_1;
    *(ulong *)(this + 0x370) = CONCAT44(fVar35,fVar29);
    if ((param_1 * *(float *)(this + 0x374) != 0.0) || (fVar27 * param_1 != 0.0)) {
      fVar27 = fVar35 * *(float *)(this + 0x350) + fVar29 * *(float *)(this + 0x340);
      fVar28 = fVar35 * *(float *)(this + 0x354) + fVar29 * *(float *)(this + 0x344);
      fVar29 = fVar35 * *(float *)(this + 0x358) + fVar29 * *(float *)(this + 0x348);
      if (cVar1 == '\x02') {
        fVar35 = *(float *)(this + 0x2c4);
        fVar36 = *(float *)(this + 0x2c8);
        fVar30 = *(float *)(this + 0x2cc);
        fVar37 = *(float *)(this + 0x2d4);
        fVar11 = *(float *)(this + 0x2d8);
        fVar12 = *(float *)(this + 0x2dc);
        fVar13 = *(float *)(this + 0x2e4);
        fVar14 = *(float *)(this + 0x2e8);
        fVar15 = *(float *)(this + 0x2ec);
        pfVar6[4] = pfVar6[4] -
                    (fVar27 * *(float *)(this + 0x2c0) + fVar28 * *(float *)(this + 0x2d0) +
                    fVar29 * *(float *)(this + 0x2e0));
        pfVar6[5] = pfVar6[5] - (fVar27 * fVar35 + fVar28 * fVar37 + fVar29 * fVar13);
        pfVar6[6] = pfVar6[6] - (fVar27 * fVar36 + fVar28 * fVar11 + fVar29 * fVar14);
        pfVar6[7] = pfVar6[7] - (fVar27 * fVar30 + fVar28 * fVar12 + fVar29 * fVar15);
      }
      if (cVar2 == '\x02') {
        fVar35 = *(float *)(this + 0x304);
        fVar36 = *(float *)(this + 0x308);
        fVar30 = *(float *)(this + 0x30c);
        fVar37 = *(float *)(this + 0x314);
        fVar11 = *(float *)(this + 0x318);
        fVar12 = *(float *)(this + 0x31c);
        fVar13 = *(float *)(this + 0x324);
        fVar14 = *(float *)(this + 0x328);
        fVar15 = *(float *)(this + 0x32c);
        pfVar7[4] = fVar29 * *(float *)(this + 800) +
                    fVar27 * *(float *)(this + 0x300) + fVar28 * *(float *)(this + 0x310) +
                    pfVar7[4];
        pfVar7[5] = fVar29 * fVar13 + fVar27 * fVar35 + fVar28 * fVar37 + pfVar7[5];
        pfVar7[6] = fVar29 * fVar14 + fVar27 * fVar36 + fVar28 * fVar11 + pfVar7[6];
        pfVar7[7] = fVar29 * fVar15 + fVar27 * fVar30 + fVar28 * fVar12 + pfVar7[7];
        return;
      }
    }
  }
  else {
    if (1 < iVar5 - 4U) {
      return;
    }
    fVar27 = param_1 * *(float *)(this + 0x440);
    fVar29 = param_1 * *(float *)(this + 0x444);
    fVar35 = param_1 * *(float *)(this + 0x448);
    auVar31._4_4_ = -(uint)(fVar29 == 0.0);
    auVar31._0_4_ = -(uint)(fVar27 == 0.0);
    auVar31._8_4_ = -(uint)(fVar35 == 0.0);
    auVar31._12_4_ = -(uint)(param_1 * *(float *)(this + 0x44c) == 0.0);
    *(float *)(this + 0x440) = fVar27;
    *(float *)(this + 0x444) = fVar29;
    *(float *)(this + 0x448) = fVar35;
    *(float *)(this + 0x44c) = param_1 * *(float *)(this + 0x44c);
    uVar26 = movmskps(iVar5 - 4U,auVar31);
    if ((~uVar26 & 7) != 0) {
      if (cVar1 == '\x02') {
        fVar28 = *(float *)(this + 900);
        fVar36 = *(float *)(this + 0x388);
        fVar30 = *(float *)(this + 0x38c);
        fVar37 = *(float *)(this + 0x394);
        fVar11 = *(float *)(this + 0x398);
        fVar12 = *(float *)(this + 0x39c);
        fVar13 = *(float *)(this + 0x3a4);
        fVar14 = *(float *)(this + 0x3a8);
        fVar15 = *(float *)(this + 0x3ac);
        pfVar6[4] = pfVar6[4] -
                    (fVar27 * *(float *)(this + 0x380) + fVar29 * *(float *)(this + 0x390) +
                    fVar35 * *(float *)(this + 0x3a0));
        pfVar6[5] = pfVar6[5] - (fVar27 * fVar28 + fVar29 * fVar37 + fVar35 * fVar13);
        pfVar6[6] = pfVar6[6] - (fVar27 * fVar36 + fVar29 * fVar11 + fVar35 * fVar14);
        pfVar6[7] = pfVar6[7] - (fVar27 * fVar30 + fVar29 * fVar12 + fVar35 * fVar15);
      }
      if (cVar2 == '\x02') {
        fVar28 = *(float *)(this + 0x3c4);
        fVar36 = *(float *)(this + 0x3c8);
        fVar30 = *(float *)(this + 0x3cc);
        fVar37 = *(float *)(this + 0x3d4);
        fVar11 = *(float *)(this + 0x3d8);
        fVar12 = *(float *)(this + 0x3dc);
        fVar13 = *(float *)(this + 0x3e4);
        fVar14 = *(float *)(this + 1000);
        fVar15 = *(float *)(this + 0x3ec);
        pfVar7[4] = fVar35 * *(float *)(this + 0x3e0) +
                    fVar27 * *(float *)(this + 0x3c0) + fVar29 * *(float *)(this + 0x3d0) +
                    pfVar7[4];
        pfVar7[5] = fVar35 * fVar13 + fVar27 * fVar28 + fVar29 * fVar37 + pfVar7[5];
        pfVar7[6] = fVar35 * fVar14 + fVar27 * fVar36 + fVar29 * fVar11 + pfVar7[6];
        pfVar7[7] = fVar35 * fVar15 + fVar27 * fVar30 + fVar29 * fVar12 + pfVar7[7];
        return;
      }
    }
  }
  return;
}



/* JPH::PathConstraintSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PathConstraintSettings::RestoreBinaryState(PathConstraintSettings *this,StreamIn *param_1)

{
  long *plVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long *local_48 [2];
  long local_38 [2];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::ConstraintSettings::RestoreBinaryState((StreamIn *)this);
  JPH::PathConstraintPath::sRestoreFromBinaryState((StreamIn *)local_48);
  if ((local_28 != '\x02') && (plVar2 = *(long **)(this + 0x28), plVar2 != local_48[0])) {
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
    *(long **)(this + 0x28) = local_48[0];
    if (local_48[0] != (long *)0x0) {
      LOCK();
      *(int *)(local_48[0] + 1) = (int)local_48[0][1] + 1;
      UNLOCK();
    }
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x54,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  JPH::MotorSettings::RestoreBinaryState((StreamIn *)(this + 0x58));
  if (local_28 == '\x01') {
    if (local_48[0] != (long *)0x0) {
      LOCK();
      plVar2 = local_48[0] + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_48[0] + 0x18))();
      }
    }
  }
  else if ((local_28 == '\x02') && (local_48[0] != local_38)) {
    (*Free)();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::PathConstraint::DrawConstraint(JPH::DebugRenderer*) const */

void __thiscall JPH::PathConstraint::DrawConstraint(PathConstraint *this,DebugRenderer *param_1)

{
  PathConstraint *pPVar1;
  float fVar2;
  DebugRenderer *pDVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined1 *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  float local_88 [18];
  long local_40;
  
  pDVar3 = *(DebugRenderer **)(this + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pDVar3 != (DebugRenderer *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x28);
    fVar11 = (float)puVar4[2];
    fVar14 = (float)puVar4[3];
    fVar12 = (float)((ulong)puVar4[2] >> 0x20);
    fVar17 = fVar11 + fVar11;
    fVar18 = fVar12 + fVar12;
    fVar15 = (float)((ulong)puVar4[3] >> 0x20);
    fVar2 = *(float *)(puVar4 + 1);
    fVar16 = fVar15 * (fVar14 + fVar14);
    lVar13 = 0;
    fVar22 = fVar14 * (fVar14 + fVar14);
    local_108._0_4_ = (float)*puVar4;
    local_108._4_4_ = (float)((ulong)*puVar4 >> 0x20);
    do {
      pPVar1 = this + lVar13 + 0x40;
      fVar19 = *(float *)pPVar1;
      fVar20 = *(float *)(pPVar1 + 4);
      fVar21 = *(float *)(pPVar1 + 8);
      fVar8 = *(float *)(pPVar1 + 0xc);
      *(float *)((long)local_88 + lVar13) =
           fVar8 * (float)local_108 +
           fVar19 * ((_LC0 - fVar12 * fVar18) - fVar22) + fVar20 * (fVar12 * fVar17 - fVar16) +
           fVar21 * (fVar14 * fVar17 + fVar18 * fVar15);
      *(float *)((long)local_88 + lVar13 + 4) =
           fVar8 * local_108._4_4_ +
           fVar19 * (fVar12 * fVar17 + fVar16) + fVar20 * ((_LC0 - fVar22) - fVar11 * fVar17) +
           fVar21 * (fVar14 * fVar18 - fVar17 * fVar15);
      *(float *)((long)local_88 + lVar13 + 8) =
           fVar8 * fVar2 +
           fVar19 * (fVar14 * fVar17 - fVar18 * fVar15) +
           fVar20 * (fVar17 * fVar15 + fVar14 * fVar18) +
           fVar21 * ((_LC0 - fVar11 * fVar17) - fVar12 * fVar18);
      *(float *)((long)local_88 + lVar13 + 0xc) =
           fVar8 * 1.0 + fVar19 * 0.0 + fVar20 * 0.0 + fVar21 * 0.0;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
    JPH::PathConstraintPath::DrawPath(pDVar3,(Mat44 *)param_1);
    pfVar5 = *(float **)(this + 0x28);
    fVar2 = *(float *)(this + 0x100);
    fVar11 = *(float *)(this + 0x104);
    fVar12 = *(float *)(this + 0x108);
    fVar14 = *(float *)(this + 0x10c);
    pfVar6 = *(float **)(this + 0x30);
    fVar22 = *(float *)(this + 0xf0) + *pfVar5;
    fVar19 = *(float *)(this + 0xf4) + pfVar5[1];
    fVar20 = *(float *)(this + 0xf8) + pfVar5[2];
    fVar21 = *(float *)(this + 0xfc) + pfVar5[3];
    fVar15 = *pfVar6;
    fVar16 = pfVar6[1];
    fVar17 = pfVar6[2];
    fVar18 = pfVar6[3];
    local_108 = CONCAT44(fVar19,fVar22);
    uVar9 = local_108;
    uStack_100 = CONCAT44(fVar21,fVar20);
    uVar10 = uStack_100;
    JPH::DebugRenderer::DrawMarker(local_108,uStack_100,param_1,(undefined4)Color::sYellow);
    JPH::DebugRenderer::DrawMarker
              (CONCAT44(fVar11 + fVar16,fVar2 + fVar15),CONCAT44(fVar14 + fVar18,fVar12 + fVar17),
               param_1,(undefined4)Color::sYellow);
    JPH::DebugRenderer::DrawArrow
              (local_108,uStack_100,
               CONCAT44(fVar19 + *(float *)(this + 0x124),fVar22 + *(float *)(this + 0x120)),
               CONCAT44(fVar21 + *(float *)(this + 300),fVar20 + *(float *)(this + 0x128)),_LC9,
               param_1,(undefined4)Color::sBlue);
    JPH::DebugRenderer::DrawArrow
              (local_108,uStack_100,
               CONCAT44(fVar19 + *(float *)(this + 0x134),fVar22 + *(float *)(this + 0x130)),
               CONCAT44(fVar21 + *(float *)(this + 0x13c),fVar20 + *(float *)(this + 0x138)),_LC9,
               param_1,(undefined4)Color::sRed);
    local_108 = CONCAT44(fVar19 + *(float *)(this + 0x144),fVar22 + *(float *)(this + 0x140));
    uStack_100 = CONCAT44(fVar21 + *(float *)(this + 0x14c),fVar20 + *(float *)(this + 0x148));
    JPH::DebugRenderer::DrawArrow
              (uVar9,uVar10,local_108,uStack_100,_LC9,param_1,(undefined4)Color::sGreen);
    pcVar7 = *(code **)(*(long *)param_1 + 0x38);
    JPH::StringFormat_abi_cxx11_((char *)&local_a8,(double)*(float *)(this + 0x160),&_LC10);
    local_e8 = local_a0;
    local_e0 = local_a8;
    (*pcVar7)(uVar9,uVar10,param_1,&local_e8,(undefined4)Color::sWhite);
    if (local_a8 != local_98) {
      (*Free)();
    }
    if (*(int *)(this + 0xe4) == 1) {
      pfVar5 = *(float **)(this + 0x30);
      fVar2 = *(float *)(this + 0xe8);
      local_108 = CONCAT44(*(float *)(this + 0x104) + pfVar5[1],*(float *)(this + 0x100) + *pfVar5);
      uStack_100 = CONCAT44(*(float *)(this + 0x10c) + pfVar5[3],
                            *(float *)(this + 0x108) + pfVar5[2]);
      JPH::DebugRenderer::DrawArrow
                (local_108,uStack_100,
                 CONCAT44(fVar2 * *(float *)(this + 0x124) + *(float *)(this + 0x104) + pfVar5[1],
                          fVar2 * *(float *)(this + 0x120) + *(float *)(this + 0x100) + *pfVar5),
                 CONCAT44(fVar2 * *(float *)(this + 300) + *(float *)(this + 0x10c) + pfVar5[3],
                          fVar2 * *(float *)(this + 0x128) + *(float *)(this + 0x108) + pfVar5[2]),
                 _LC9,param_1,(undefined4)Color::sRed);
    }
    else if (*(int *)(this + 0xe4) == 2) {
      (**(code **)(**(long **)(this + 0x38) + 0x30))
                (*(long **)(this + 0x38),&local_d8,local_c8,local_b8,&local_a8);
      local_108 = CONCAT44(fStack_d0 * local_88[9] +
                           local_d8 * local_88[1] + fStack_d4 * local_88[5] + local_88[0xd],
                           fStack_d0 * local_88[8] +
                           local_d8 * local_88[0] + fStack_d4 * local_88[4] + local_88[0xc]);
      uStack_100 = CONCAT44(fStack_d0 * local_88[0xb] +
                            local_d8 * local_88[3] + fStack_d4 * local_88[7] + local_88[0xf],
                            fStack_d0 * local_88[10] +
                            local_d8 * local_88[2] + fStack_d4 * local_88[6] + local_88[0xe]);
      JPH::DebugRenderer::DrawMarker(local_108,uStack_100,param_1,(undefined4)Color::sYellow);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraint::SolveVelocityConstraint(float) */

uint JPH::PathConstraint::SolveVelocityConstraint(float param_1)

{
  float fVar1;
  Body BVar2;
  Body BVar3;
  byte bVar4;
  Body *pBVar5;
  Body *pBVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  undefined4 uVar26;
  float *pfVar27;
  undefined8 uVar28;
  long in_RDI;
  long in_FS_OFFSET;
  float fVar29;
  float fVar32;
  undefined1 auVar30 [12];
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  float local_38;
  float fStack_34;
  long local_30;
  
  pBVar5 = *(Body **)(in_RDI + 0x30);
  pBVar6 = *(Body **)(in_RDI + 0x28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar22 = 0;
  if (*(float *)(in_RDI + 0x280) != 0.0) {
    if (*(int *)(in_RDI + 0xe4) == 0) {
      uVar23 = *(undefined8 *)(pBVar5 + 0x48);
      BVar2 = pBVar6[0x78];
      uVar28 = *(undefined8 *)(pBVar6 + 0x48);
    }
    else {
      uVar22 = 0;
      if (1 < *(int *)(in_RDI + 0xe4) - 1U) goto LAB_001019ea;
      uVar23 = *(undefined8 *)(pBVar5 + 0x48);
      BVar2 = pBVar6[0x78];
      uVar28 = *(undefined8 *)(pBVar6 + 0x48);
    }
    uVar22 = AxisConstraintPart::SolveVelocityConstraint
                       (*(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                        in_RDI + 0x250,uVar28,BVar2,uVar23,pBVar5[0x78]);
  }
LAB_001019ea:
  fVar34 = *(float *)(in_RDI + 0x130);
  fVar37 = *(float *)(in_RDI + 0x134);
  fVar38 = *(float *)(in_RDI + 0x138);
  fVar39 = *(float *)(in_RDI + 0x13c);
  fVar1 = *(float *)(in_RDI + 0x140);
  fVar13 = *(float *)(in_RDI + 0x144);
  fVar14 = *(float *)(in_RDI + 0x148);
  fVar15 = *(float *)(in_RDI + 0x14c);
  uVar23 = DualAxisConstraintPart::CalculateLagrangeMultiplier
                     (*(undefined8 *)(in_RDI + 0x130),*(undefined8 *)(in_RDI + 0x138),
                      *(undefined8 *)(in_RDI + 0x140),*(undefined8 *)(in_RDI + 0x148),in_RDI + 0x170
                      ,pBVar6,pBVar5,&local_38);
  pfVar27 = (float *)0x1;
  *(ulong *)(in_RDI + 0x200) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_RDI + 0x200) >> 0x20) + fStack_34,
                (float)*(undefined8 *)(in_RDI + 0x200) + local_38);
  uVar24 = CONCAT71((int7)((ulong)uVar23 >> 8),NAN(fStack_34)) & 0xffffffff;
  if (fStack_34 != 0.0) {
    uVar24 = 1;
  }
  bVar19 = (byte)uVar24 | local_38 != 0.0;
  if (bVar19 != 0) {
    fVar34 = fVar1 * fStack_34 + fVar34 * local_38;
    fVar37 = fVar13 * fStack_34 + fVar37 * local_38;
    fVar38 = fVar14 * fStack_34 + fVar38 * local_38;
    fVar39 = fVar15 * fStack_34 + fVar39 * local_38;
    if (pBVar6[0x78] == (Body)0x2) {
      pfVar9 = *(float **)(pBVar6 + 0x48);
      fVar1 = pfVar9[0x16];
      bVar4 = *(byte *)((long)pfVar9 + 0x7a);
      auVar31._1_3_ = 0;
      auVar31[0] = bVar4;
      auVar31[4] = bVar4;
      auVar31._5_3_ = 0;
      auVar31[8] = bVar4;
      auVar31._9_3_ = 0;
      auVar31[0xc] = bVar4;
      auVar31._13_3_ = 0;
      auVar18._4_4_ = _UNK_00107864;
      auVar18._0_4_ = __LC7;
      auVar18._8_4_ = _UNK_00107868;
      auVar18._12_4_ = _UNK_0010786c;
      auVar31 = auVar31 & auVar18;
      bVar10 = auVar31._4_4_ == _UNK_00107864;
      bVar11 = auVar31._8_4_ == _UNK_00107868;
      bVar12 = auVar31._12_4_ == _UNK_0010786c;
      *pfVar9 = (float)(-(uint)(auVar31._0_4_ == __LC7) & (uint)(*pfVar9 - fVar1 * fVar34));
      pfVar9[1] = (float)(-(uint)bVar10 & (uint)(pfVar9[1] - fVar1 * fVar37));
      pfVar9[2] = (float)(-(uint)bVar11 & (uint)(pfVar9[2] - fVar1 * fVar38));
      pfVar9[3] = (float)(-(uint)bVar12 & (uint)(pfVar9[3] - fVar1 * fVar39));
      fVar1 = *(float *)(in_RDI + 0x1c4);
      fVar13 = *(float *)(in_RDI + 0x1c8);
      fVar14 = *(float *)(in_RDI + 0x1cc);
      fVar15 = *(float *)(in_RDI + 0x1b4);
      fVar16 = *(float *)(in_RDI + 0x1b8);
      fVar29 = *(float *)(in_RDI + 0x1bc);
      pfVar9[4] = pfVar9[4] -
                  (*(float *)(in_RDI + 0x1c0) * fStack_34 + *(float *)(in_RDI + 0x1b0) * local_38);
      pfVar9[5] = pfVar9[5] - (fVar1 * fStack_34 + fVar15 * local_38);
      pfVar9[6] = pfVar9[6] - (fVar13 * fStack_34 + fVar16 * local_38);
      pfVar9[7] = pfVar9[7] - (fVar14 * fStack_34 + fVar29 * local_38);
    }
    uVar22 = (uint)CONCAT71((int7)(uVar24 >> 8),bVar19);
    if (pBVar5[0x78] == (Body)0x2) {
      pfVar27 = *(float **)(pBVar5 + 0x48);
      bVar19 = *(byte *)((long)pfVar27 + 0x7a);
      fVar1 = pfVar27[0x16];
      auVar36._1_3_ = 0;
      auVar36[0] = bVar19;
      auVar36[4] = bVar19;
      auVar36._5_3_ = 0;
      auVar36[8] = bVar19;
      auVar36._9_3_ = 0;
      auVar36[0xc] = bVar19;
      auVar36._13_3_ = 0;
      auVar17._4_4_ = _UNK_00107864;
      auVar17._0_4_ = __LC7;
      auVar17._8_4_ = _UNK_00107868;
      auVar17._12_4_ = _UNK_0010786c;
      auVar36 = auVar36 & auVar17;
      bVar10 = auVar36._4_4_ == _UNK_00107864;
      bVar11 = auVar36._8_4_ == _UNK_00107868;
      bVar12 = auVar36._12_4_ == _UNK_0010786c;
      *pfVar27 = (float)((uint)(fVar1 * fVar34 + *pfVar27) & -(uint)(auVar36._0_4_ == __LC7));
      pfVar27[1] = (float)((uint)(fVar1 * fVar37 + pfVar27[1]) & -(uint)bVar10);
      pfVar27[2] = (float)((uint)(fVar1 * fVar38 + pfVar27[2]) & -(uint)bVar11);
      pfVar27[3] = (float)((uint)(fVar1 * fVar39 + pfVar27[3]) & -(uint)bVar12);
      fVar34 = *(float *)(in_RDI + 0x1e4);
      fVar37 = *(float *)(in_RDI + 0x1e8);
      fVar38 = *(float *)(in_RDI + 0x1ec);
      fVar39 = *(float *)(in_RDI + 0x1d4);
      fVar1 = *(float *)(in_RDI + 0x1d8);
      fVar13 = *(float *)(in_RDI + 0x1dc);
      pfVar27[4] = fStack_34 * *(float *)(in_RDI + 0x1e0) + local_38 * *(float *)(in_RDI + 0x1d0) +
                   pfVar27[4];
      pfVar27[5] = fStack_34 * fVar34 + local_38 * fVar39 + pfVar27[5];
      pfVar27[6] = fStack_34 * fVar37 + local_38 * fVar1 + pfVar27[6];
      pfVar27[7] = fStack_34 * fVar38 + local_38 * fVar13 + pfVar27[7];
    }
  }
  uVar26 = SUB84(pfVar27,0);
  uVar21 = 0;
  if (*(float *)(in_RDI + 0x240) == 0.0) {
LAB_00101a93:
    iVar20 = *(int *)(in_RDI + 0xc0);
    if (iVar20 < 4) goto LAB_00101bdb;
LAB_00101aa2:
    if (iVar20 - 4U < 2) {
      BVar2 = pBVar5[0x78];
      lVar7 = *(long *)(pBVar5 + 0x48);
      auVar30 = SUB1612((undefined1  [16])0x0,0);
      if (BVar2 != (Body)0x0) {
        auVar30 = SUB1612(*(undefined1 (*) [16])(lVar7 + 0x10),0);
      }
      BVar3 = pBVar6[0x78];
      lVar8 = *(long *)(pBVar6 + 0x48);
      if (BVar3 == (Body)0x0) {
        fVar34 = 0.0 - auVar30._0_4_;
        fVar37 = 0.0 - auVar30._4_4_;
        fVar38 = 0.0 - auVar30._8_4_;
        auVar30._0_4_ =
             fVar37 * *(float *)(in_RDI + 0x410) + fVar34 * *(float *)(in_RDI + 0x400) +
             fVar38 * *(float *)(in_RDI + 0x420);
        auVar30._4_4_ =
             fVar37 * *(float *)(in_RDI + 0x414) + fVar34 * *(float *)(in_RDI + 0x404) +
             fVar38 * *(float *)(in_RDI + 0x424);
        auVar30._8_4_ =
             fVar37 * *(float *)(in_RDI + 0x418) + fVar34 * *(float *)(in_RDI + 0x408) +
             fVar38 * *(float *)(in_RDI + 0x428);
        fVar34 = fVar37 * *(float *)(in_RDI + 0x41c) + fVar34 * *(float *)(in_RDI + 0x40c) +
                 fVar38 * *(float *)(in_RDI + 0x42c);
        auVar40._4_4_ = -(uint)(auVar30._4_4_ == 0.0);
        auVar40._0_4_ = -(uint)(auVar30._0_4_ == 0.0);
        auVar40._8_4_ = -(uint)(auVar30._8_4_ == 0.0);
        auVar40._12_4_ = -(uint)(fVar34 == 0.0);
        uVar25 = movmskps(0,auVar40);
        *(float *)(in_RDI + 0x440) = *(float *)(in_RDI + 0x440) + auVar30._0_4_;
        *(float *)(in_RDI + 0x444) = *(float *)(in_RDI + 0x444) + auVar30._4_4_;
        *(float *)(in_RDI + 0x448) = *(float *)(in_RDI + 0x448) + auVar30._8_4_;
        *(float *)(in_RDI + 0x44c) = *(float *)(in_RDI + 0x44c) + fVar34;
        if ((~uVar25 & 7) != 0) goto LAB_00101d62;
      }
      else {
        fVar34 = *(float *)(lVar8 + 0x10) - auVar30._0_4_;
        fVar37 = *(float *)(lVar8 + 0x14) - auVar30._4_4_;
        fVar38 = *(float *)(lVar8 + 0x18) - auVar30._8_4_;
        auVar30._0_4_ =
             fVar34 * *(float *)(in_RDI + 0x400) + fVar37 * *(float *)(in_RDI + 0x410) +
             fVar38 * *(float *)(in_RDI + 0x420);
        auVar30._4_4_ =
             fVar34 * *(float *)(in_RDI + 0x404) + fVar37 * *(float *)(in_RDI + 0x414) +
             fVar38 * *(float *)(in_RDI + 0x424);
        auVar30._8_4_ =
             fVar34 * *(float *)(in_RDI + 0x408) + fVar37 * *(float *)(in_RDI + 0x418) +
             fVar38 * *(float *)(in_RDI + 0x428);
        fVar34 = fVar34 * *(float *)(in_RDI + 0x40c) + fVar37 * *(float *)(in_RDI + 0x41c) +
                 fVar38 * *(float *)(in_RDI + 0x42c);
        *(float *)(in_RDI + 0x440) = *(float *)(in_RDI + 0x440) + auVar30._0_4_;
        *(float *)(in_RDI + 0x444) = *(float *)(in_RDI + 0x444) + auVar30._4_4_;
        *(float *)(in_RDI + 0x448) = *(float *)(in_RDI + 0x448) + auVar30._8_4_;
        *(float *)(in_RDI + 0x44c) = *(float *)(in_RDI + 0x44c) + fVar34;
        auVar35._4_4_ = -(uint)(auVar30._4_4_ == 0.0);
        auVar35._0_4_ = -(uint)(auVar30._0_4_ == 0.0);
        auVar35._8_4_ = -(uint)(auVar30._8_4_ == 0.0);
        auVar35._12_4_ = -(uint)(fVar34 == 0.0);
        uVar25 = movmskps(uVar26,auVar35);
        if ((~uVar25 & 7) != 0) {
          if (BVar3 == (Body)0x2) {
            fVar34 = *(float *)(in_RDI + 900);
            fVar37 = *(float *)(in_RDI + 0x388);
            fVar38 = *(float *)(in_RDI + 0x38c);
            fVar39 = *(float *)(in_RDI + 0x394);
            fVar1 = *(float *)(in_RDI + 0x398);
            fVar13 = *(float *)(in_RDI + 0x39c);
            fVar14 = *(float *)(in_RDI + 0x3a4);
            fVar15 = *(float *)(in_RDI + 0x3a8);
            fVar16 = *(float *)(in_RDI + 0x3ac);
            *(float *)(lVar8 + 0x10) =
                 *(float *)(lVar8 + 0x10) -
                 (auVar30._0_4_ * *(float *)(in_RDI + 0x380) +
                  auVar30._4_4_ * *(float *)(in_RDI + 0x390) +
                 auVar30._8_4_ * *(float *)(in_RDI + 0x3a0));
            *(float *)(lVar8 + 0x14) =
                 *(float *)(lVar8 + 0x14) -
                 (auVar30._0_4_ * fVar34 + auVar30._4_4_ * fVar39 + auVar30._8_4_ * fVar14);
            *(float *)(lVar8 + 0x18) =
                 *(float *)(lVar8 + 0x18) -
                 (auVar30._0_4_ * fVar37 + auVar30._4_4_ * fVar1 + auVar30._8_4_ * fVar15);
            *(float *)(lVar8 + 0x1c) =
                 *(float *)(lVar8 + 0x1c) -
                 (auVar30._0_4_ * fVar38 + auVar30._4_4_ * fVar13 + auVar30._8_4_ * fVar16);
          }
LAB_00101d62:
          if (BVar2 == (Body)0x2) {
            fVar29 = auVar30._0_4_;
            fVar32 = auVar30._4_4_;
            fVar33 = auVar30._8_4_;
            fVar34 = *(float *)(in_RDI + 0x3c4);
            fVar37 = *(float *)(in_RDI + 0x3c8);
            fVar38 = *(float *)(in_RDI + 0x3cc);
            fVar39 = *(float *)(in_RDI + 0x3d4);
            fVar1 = *(float *)(in_RDI + 0x3d8);
            fVar13 = *(float *)(in_RDI + 0x3dc);
            fVar14 = *(float *)(in_RDI + 0x3e4);
            fVar15 = *(float *)(in_RDI + 1000);
            fVar16 = *(float *)(in_RDI + 0x3ec);
            *(float *)(lVar7 + 0x10) =
                 fVar33 * *(float *)(in_RDI + 0x3e0) +
                 fVar29 * *(float *)(in_RDI + 0x3c0) + fVar32 * *(float *)(in_RDI + 0x3d0) +
                 *(float *)(lVar7 + 0x10);
            *(float *)(lVar7 + 0x14) =
                 fVar33 * fVar14 + fVar29 * fVar34 + fVar32 * fVar39 + *(float *)(lVar7 + 0x14);
            *(float *)(lVar7 + 0x18) =
                 fVar33 * fVar15 + fVar29 * fVar37 + fVar32 * fVar1 + *(float *)(lVar7 + 0x18);
            *(float *)(lVar7 + 0x1c) =
                 fVar33 * fVar16 + fVar29 * fVar38 + fVar32 * fVar13 + *(float *)(lVar7 + 0x1c);
          }
          uVar25 = 1;
          goto LAB_00101c22;
        }
      }
    }
  }
  else {
    uVar23 = *(undefined8 *)(pBVar5 + 0x48);
    if (*(float *)(in_RDI + 0x160) <= 0.0) {
      uVar21 = AxisConstraintPart::SolveVelocityConstraint
                         (*(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                          in_RDI + 0x210,*(undefined8 *)(pBVar6 + 0x48),pBVar6[0x78],uVar23,
                          pBVar5[0x78]);
      uVar26 = (undefined4)uVar23;
      goto LAB_00101a93;
    }
    uVar21 = AxisConstraintPart::SolveVelocityConstraint
                       (*(undefined8 *)(in_RDI + 0x120),*(undefined8 *)(in_RDI + 0x128),
                        in_RDI + 0x210,*(undefined8 *)(pBVar6 + 0x48),pBVar6[0x78],uVar23,
                        pBVar5[0x78]);
    uVar26 = (undefined4)uVar23;
    iVar20 = *(int *)(in_RDI + 0xc0);
    if (3 < iVar20) goto LAB_00101aa2;
LAB_00101bdb:
    if (0 < iVar20) {
      uVar25 = HingeRotationConstraintPart::SolveVelocityConstraint
                         ((HingeRotationConstraintPart *)(in_RDI + 0x290),pBVar6,pBVar5);
      goto LAB_00101c22;
    }
  }
  uVar25 = 0;
LAB_00101c22:
  if ((char)uVar22 == '\0') {
    uVar22 = uVar25 | uVar21;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar22;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(PathConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintSettings*)::rtti,
                      "PathConstraintSettings",0x80,
                      GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PathConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      PathConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintSettings*)::rtti;
}



/* JPH::PathConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::PathConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PathConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraint::SetPath(JPH::PathConstraintPath const*, float) */

void __thiscall
JPH::PathConstraint::SetPath(PathConstraint *this,PathConstraintPath *param_1,float param_2)

{
  PathConstraintPath *pPVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  PathConstraintPath *pPVar14;
  long in_FS_OFFSET;
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
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  float afStack_150 [2];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  float local_11c;
  float local_118 [16];
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  undefined8 local_c8;
  ulong uStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  float local_98 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  pPVar14 = *(PathConstraintPath **)(this + 0x38);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != pPVar14) {
    if (pPVar14 == (PathConstraintPath *)0x0) {
LAB_00101fcb:
      *(PathConstraintPath **)(this + 0x38) = param_1;
    }
    else {
      LOCK();
      pPVar1 = pPVar14 + 8;
      *(int *)pPVar1 = *(int *)pPVar1 + -1;
      UNLOCK();
      if (*(int *)pPVar1 != 0) goto LAB_00101fcb;
      (**(code **)(*(long *)pPVar14 + 0x18))();
      *(PathConstraintPath **)(this + 0x38) = param_1;
    }
    if (param_1 == (PathConstraintPath *)0x0) {
      *(float *)(this + 0x160) = param_2;
      goto LAB_0010247c;
    }
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    pPVar14 = *(PathConstraintPath **)(this + 0x38);
  }
  *(float *)(this + 0x160) = param_2;
  if (pPVar14 != (PathConstraintPath *)0x0) {
    (**(code **)(*(long *)pPVar14 + 0x30))(pPVar14,&local_198,&local_188,&local_178,&local_168);
    uVar10 = _UNK_001078cc;
    uVar9 = _UNK_001078c8;
    uVar8 = _UNK_001078c4;
    uVar7 = __LC50;
    fVar11 = *(float *)(this + 0x40);
    fVar12 = *(float *)(this + 0x44);
    fVar17 = *(float *)(this + 0x48);
    fVar15 = *(float *)(this + 0x4c);
    afStack_150[1] = 0.0;
    fVar16 = *(float *)(this + 0x50);
    fVar21 = *(float *)(this + 0x54);
    fVar25 = *(float *)(this + 0x58);
    fVar27 = *(float *)(this + 0x5c);
    local_13c = 0;
    fVar18 = *(float *)(this + 0x60);
    fVar19 = *(float *)(this + 100);
    fVar20 = *(float *)(this + 0x68);
    fVar22 = *(float *)(this + 0x6c);
    fVar23 = *(float *)(this + 0x70);
    fVar24 = *(float *)(this + 0x74);
    fVar26 = *(float *)(this + 0x78);
    fVar28 = *(float *)(this + 0x7c);
    local_158 = local_188;
    afStack_150[0] = local_180;
    local_12c = 0;
    local_148 = local_168;
    local_140 = local_160;
    local_138 = local_178;
    local_130 = local_170;
    local_128 = local_198;
    lVar13 = 0;
    local_120 = local_190;
    local_11c = _LC0;
    do {
      fVar29 = *(float *)((long)&local_158 + lVar13);
      fVar4 = *(float *)((long)&local_158 + lVar13 + 4);
      fVar5 = *(float *)((long)afStack_150 + lVar13);
      fVar6 = *(float *)((long)afStack_150 + lVar13 + 4);
      *(float *)((long)local_118 + lVar13) =
           fVar6 * fVar23 + fVar29 * fVar11 + fVar4 * fVar16 + fVar5 * fVar18;
      *(float *)((long)local_118 + lVar13 + 4) =
           fVar6 * fVar24 + fVar29 * fVar12 + fVar4 * fVar21 + fVar5 * fVar19;
      *(float *)((long)local_118 + lVar13 + 8) =
           fVar6 * fVar26 + fVar29 * fVar17 + fVar4 * fVar25 + fVar5 * fVar20;
      *(float *)((long)local_118 + lVar13 + 0xc) =
           fVar6 * fVar28 + fVar29 * fVar15 + fVar4 * fVar27 + fVar5 * fVar22;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
    puVar2 = *(undefined8 **)(this + 0x28);
    local_9c = _LC0;
    fVar11 = (float)puVar2[2];
    fVar17 = (float)puVar2[3];
    fVar12 = (float)((ulong)puVar2[2] >> 0x20);
    fVar21 = fVar11 + fVar11;
    local_a0 = *(undefined4 *)(puVar2 + 1);
    fVar25 = fVar12 + fVar12;
    local_a8 = *puVar2;
    fVar15 = (float)((ulong)puVar2[3] >> 0x20);
    pfVar3 = *(float **)(this + 0x30);
    fVar27 = fVar17 * (fVar17 + fVar17);
    fVar16 = (fVar17 + fVar17) * fVar15;
    local_d8 = (_LC0 - fVar12 * fVar25) - fVar27;
    register0x00001244 = fVar12 * fVar21 + fVar16;
    register0x00001248 = fVar17 * fVar21 - fVar25 * fVar15;
    register0x0000124c = 0;
    local_c8 = CONCAT44((_LC0 - fVar27) - fVar11 * fVar21,fVar12 * fVar21 - fVar16);
    uStack_c0 = (ulong)(uint)(fVar21 * fVar15 + fVar17 * fVar25);
    local_b8._4_4_ = fVar17 * fVar25 - fVar21 * fVar15;
    local_b8._0_4_ = fVar17 * fVar21 + fVar25 * fVar15;
    local_b8._8_4_ = (_LC0 - fVar11 * fVar21) - fVar12 * fVar25;
    local_b8._12_4_ = 0;
    fVar11 = *pfVar3;
    fVar12 = pfVar3[1];
    fVar17 = pfVar3[2];
    fVar15 = (float)((uint)pfVar3[4] ^ __LC50);
    fVar21 = (float)((uint)pfVar3[5] ^ _UNK_001078c4);
    fVar25 = (float)((uint)pfVar3[6] ^ _UNK_001078c8);
    fVar27 = (float)((uint)pfVar3[7] ^ _UNK_001078cc);
    fVar19 = fVar15 + fVar15;
    fVar26 = fVar21 + fVar21;
    fVar28 = fVar25 * (fVar25 + fVar25);
    fVar16 = fVar27 * (fVar25 + fVar25);
    fVar23 = (_LC0 - fVar15 * fVar19) - fVar21 * fVar26;
    fVar22 = fVar25 * fVar19 + fVar26 * fVar27;
    fVar29 = fVar25 * fVar26 - fVar19 * fVar27;
    fVar20 = fVar19 * fVar27 + fVar25 * fVar26;
    fVar24 = fVar21 * fVar19 - fVar16;
    fVar16 = fVar21 * fVar19 + fVar16;
    fVar18 = (_LC0 - fVar21 * fVar26) - fVar28;
    fVar21 = fVar25 * fVar19 - fVar26 * fVar27;
    fVar15 = (_LC0 - fVar28) - fVar15 * fVar19;
    lVar13 = 0;
    do {
      fVar25 = *(float *)(local_d8 + lVar13);
      fVar27 = *(float *)(local_d8 + lVar13 + 4);
      fVar19 = *(float *)(local_d8 + lVar13 + 8);
      fVar26 = *(float *)(local_d8 + lVar13 + 0xc);
      *(float *)((long)local_98 + lVar13) =
           fVar26 * (0.0 - (fVar11 * fVar18 + fVar12 * fVar24 + fVar17 * fVar22)) +
           fVar25 * fVar18 + fVar27 * fVar24 + fVar19 * fVar22;
      *(float *)((long)local_98 + lVar13 + 4) =
           fVar26 * (0.0 - (fVar11 * fVar16 + fVar12 * fVar15 + fVar17 * fVar29)) +
           fVar25 * fVar16 + fVar27 * fVar15 + fVar19 * fVar29;
      *(float *)((long)local_98 + lVar13 + 8) =
           fVar26 * (0.0 - (fVar11 * fVar21 + fVar12 * fVar20 + fVar17 * fVar23)) +
           fVar25 * fVar21 + fVar27 * fVar20 + fVar19 * fVar23;
      *(float *)((long)local_98 + lVar13 + 0xc) =
           fVar26 * 1.0 + fVar25 * 0.0 + fVar27 * 0.0 + fVar19 * 0.0;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
    lVar13 = 0;
    do {
      fVar11 = *(float *)((long)local_118 + lVar13);
      fVar12 = *(float *)((long)local_118 + lVar13 + 4);
      fVar17 = *(float *)((long)local_118 + lVar13 + 8);
      fVar15 = *(float *)((long)local_118 + lVar13 + 0xc);
      *(float *)((long)&local_58 + lVar13) =
           fVar15 * local_98[0xc] +
           fVar11 * local_98[0] + fVar12 * local_98[4] + fVar17 * local_98[8];
      *(float *)((long)&local_58 + lVar13 + 4) =
           fVar15 * local_98[0xd] +
           fVar11 * local_98[1] + fVar12 * local_98[5] + fVar17 * local_98[9];
      *(float *)((long)&uStack_50 + lVar13) =
           fVar15 * local_98[0xe] +
           fVar11 * local_98[2] + fVar12 * local_98[6] + fVar17 * local_98[10];
      *(float *)((long)&uStack_50 + lVar13 + 4) =
           fVar15 * local_98[0xf] +
           fVar11 * local_98[3] + fVar12 * local_98[7] + fVar17 * local_98[0xb];
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x40);
    *(undefined8 *)(this + 0x80) = local_58;
    *(undefined8 *)(this + 0x88) = uStack_50;
    *(undefined8 *)(this + 0x90) = local_48;
    *(undefined8 *)(this + 0x98) = uStack_40;
    *(undefined8 *)(this + 0xa0) = local_38;
    *(undefined8 *)(this + 0xa8) = uStack_30;
    *(undefined8 *)(this + 0xb0) = local_28;
    *(undefined8 *)(this + 0xb8) = uStack_20;
    if (*(int *)(this + 0xc0) == 5) {
      fVar17 = (float)(uVar7 ^ (uint)pfVar3[4]);
      fVar15 = (float)(uVar8 ^ (uint)pfVar3[5]);
      fVar16 = (float)(uVar9 ^ (uint)pfVar3[6]);
      fVar21 = (float)(uVar10 ^ (uint)pfVar3[7]);
      fVar12 = (float)puVar2[2];
      fVar11 = (float)puVar2[3];
      fVar27 = (float)((ulong)puVar2[2] >> 0x20);
      fVar25 = (float)((ulong)puVar2[3] >> 0x20);
      *(float *)(this + 0x150) =
           (fVar15 * fVar11 + fVar17 * fVar25 + fVar21 * fVar12) - fVar16 * fVar27;
      *(float *)(this + 0x154) =
           fVar16 * fVar12 + fVar15 * fVar25 + (fVar21 * fVar27 - fVar17 * fVar11);
      *(float *)(this + 0x158) =
           fVar16 * fVar25 + ((fVar17 * fVar27 + fVar21 * fVar11) - fVar15 * fVar12);
      *(float *)(this + 0x15c) =
           ((fVar21 * fVar25 - fVar17 * fVar12) - fVar15 * fVar27) - fVar16 * fVar11;
    }
  }
LAB_0010247c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PathConstraint::PathConstraint(JPH::Body&, JPH::Body&, JPH::PathConstraintSettings const&)
    */

void __thiscall
JPH::PathConstraint::PathConstraint
          (PathConstraint *this,Body *param_1,Body *param_2,PathConstraintSettings *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  PathConstraintPath *pPVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(this + 0xc) = uVar1;
  this[0x18] = SUB41(uVar2,0);
  this[0x19] = SUB41(*(undefined4 *)(param_3 + 0x18),0);
  uVar1 = *(undefined4 *)(param_3 + 0x54);
  uVar5 = *(undefined8 *)(param_3 + 0x58);
  uVar6 = *(undefined8 *)(param_3 + 0x60);
  *(PathConstraintSettings *)(this + 0x1a) = param_3[0xc];
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 100);
  uVar8 = *(undefined8 *)(param_3 + 0x6c);
  *(undefined4 *)(this + 0xc4) = uVar1;
  auVar14 = SUB1612((undefined1  [16])0x0,0);
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined ***)this = &PTR__PathConstraint_00107788;
  uVar1 = *(undefined4 *)(param_3 + 0x74);
  *(Body **)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0xc0) = uVar1;
  *(undefined8 *)(this + 200) = uVar5;
  *(undefined8 *)(this + 0xd0) = uVar6;
  *(Body **)(this + 0x28) = param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xd4) = uVar7;
  *(undefined8 *)(this + 0xdc) = uVar8;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x280) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x440) = (undefined1  [16])0x0;
  if (*(code **)(**(long **)(param_1 + 0x40) + 0x18) != Shape::GetCenterOfMass) {
    auVar15 = (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
    auVar14 = auVar15._0_12_;
  }
  fVar9 = _LC0;
  fVar13 = *(float *)(param_3 + 0x30);
  fVar17 = *(float *)(param_3 + 0x34);
  fVar20 = *(float *)(param_3 + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  pPVar4 = *(PathConstraintPath **)(param_3 + 0x28);
  fVar10 = (float)*(undefined8 *)(param_3 + 0x40);
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  fVar12 = (float)uVar3;
  *(float *)(this + 0x7c) = _LC0;
  fVar19 = fVar11 + fVar11;
  fVar18 = fVar10 + fVar10;
  *(ulong *)(this + 0x70) = CONCAT44(fVar17 - auVar14._4_4_,fVar13 - auVar14._0_4_);
  fVar13 = (float)((ulong)uVar3 >> 0x20);
  *(float *)(this + 0x78) = fVar20 - auVar14._8_4_;
  fVar20 = fVar12 * (fVar12 + fVar12);
  fVar17 = (fVar12 + fVar12) * fVar13;
  auVar16._0_4_ = (fVar9 - fVar11 * fVar19) - fVar20;
  auVar16._4_4_ = fVar11 * fVar18 + fVar17;
  auVar16._8_4_ = fVar12 * fVar18 - fVar19 * fVar13;
  auVar16._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x40) = auVar16;
  *(ulong *)(this + 0x50) = CONCAT44((fVar9 - fVar20) - fVar10 * fVar18,fVar11 * fVar18 - fVar17);
  *(ulong *)(this + 0x58) = (ulong)(uint)(fVar18 * fVar13 + fVar12 * fVar19);
  auVar15._4_4_ = fVar12 * fVar19 - fVar18 * fVar13;
  auVar15._0_4_ = fVar12 * fVar18 + fVar19 * fVar13;
  auVar15._8_4_ = (fVar9 - fVar10 * fVar18) - fVar11 * fVar19;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(this + 0x60) = auVar15;
  SetPath(this,pPVar4,*(float *)(param_3 + 0x50));
  return;
}



/* JPH::PathConstraintSettings::Create(JPH::Body&, JPH::Body&) const */

PathConstraint * __thiscall
JPH::PathConstraintSettings::Create(PathConstraintSettings *this,Body *param_1,Body *param_2)

{
  PathConstraint *this_00;
  
  this_00 = (PathConstraint *)(*Allocate)(0x450);
  PathConstraint::PathConstraint(this_00,param_1,param_2,this);
  return this_00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraint::CalculateConstraintProperties(float) */

void __thiscall
JPH::PathConstraint::CalculateConstraintProperties(PathConstraint *this,float param_1)

{
  PathConstraint *pPVar1;
  PathConstraint *pPVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 uVar12;
  float *pfVar13;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 local_308;
  undefined8 uStack_300;
  ulong uStack_2f0;
  ulong uStack_2e0;
  ulong uStack_2d0;
  ulong uStack_2c0;
  ulong uStack_2b0;
  ulong uStack_2a0;
  float local_298;
  float fStack_294;
  float local_238;
  float fStack_234;
  float fStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float local_1f8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  ulong uStack_170;
  undefined8 local_168;
  ulong uStack_160;
  undefined8 local_158;
  ulong uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong uStack_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  ulong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float afStack_b0 [2];
  undefined8 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78 [12];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar6 = *(undefined8 **)(this + 0x30);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar16 = (float)puVar5[2];
  fVar21 = (float)puVar5[3];
  fVar60 = (float)((ulong)puVar5[2] >> 0x20);
  fVar26 = fVar16 + fVar16;
  fVar38 = fVar60 + fVar60;
  fVar52 = (float)((ulong)puVar5[3] >> 0x20);
  fVar17 = *(float *)(puVar5 + 1);
  fVar47 = fVar21 * (fVar21 + fVar21);
  fVar22 = fVar52 * (fVar21 + fVar21);
  fVar54 = fVar21 * fVar26 + fVar38 * fVar52;
  fVar34 = fVar21 * fVar26 - fVar38 * fVar52;
  fVar58 = fVar21 * fVar38 - fVar26 * fVar52;
  fVar40 = (_LC0 - fVar16 * fVar26) - fVar60 * fVar38;
  fVar27 = fVar26 * fVar52 + fVar21 * fVar38;
  uVar62 = CONCAT44(fVar58,fVar54);
  fVar14 = fVar60 * fVar26 + fVar22;
  fVar22 = fVar60 * fVar26 - fVar22;
  fVar55 = (_LC0 - fVar47) - fVar16 * fVar26;
  uVar63 = CONCAT44(fVar55,fVar22);
  fVar47 = (_LC0 - fVar60 * fVar38) - fVar47;
  uVar7 = CONCAT44(fVar14,fVar47);
  fVar60 = (float)puVar6[2];
  fVar52 = (float)puVar6[3];
  fVar21 = (float)((ulong)puVar6[2] >> 0x20);
  fVar56 = (float)((ulong)puVar6[3] >> 0x20);
  fVar26 = fVar60 + fVar60;
  fVar39 = fVar21 + fVar21;
  fVar16 = *(float *)(puVar6 + 1);
  lVar9 = 0;
  fVar41 = fVar52 * (fVar52 + fVar52);
  fVar28 = fVar56 * (fVar52 + fVar52);
  fVar61 = fVar52 * fVar39 - fVar26 * fVar56;
  fVar59 = fVar52 * fVar26 + fVar39 * fVar56;
  fVar38 = fVar26 * fVar56 + fVar52 * fVar39;
  fVar52 = fVar52 * fVar26 - fVar39 * fVar56;
  fVar56 = (_LC0 - fVar60 * fVar26) - fVar21 * fVar39;
  fVar57 = fVar21 * fVar26 - fVar28;
  uVar10 = CONCAT44(fVar61,fVar59);
  fVar28 = fVar21 * fVar26 + fVar28;
  local_308._0_4_ = (float)*puVar6;
  local_308._4_4_ = (float)((ulong)*puVar6 >> 0x20);
  fVar60 = (_LC0 - fVar41) - fVar60 * fVar26;
  uVar12 = CONCAT44(fVar60,fVar57);
  fVar41 = (_LC0 - fVar21 * fVar39) - fVar41;
  local_298 = (float)*puVar5;
  fStack_294 = (float)((ulong)*puVar5 >> 0x20);
  uVar53 = CONCAT44(fVar28,fVar41);
  do {
    pPVar1 = this + lVar9 + 0x40;
    fVar21 = *(float *)pPVar1;
    fVar26 = *(float *)(pPVar1 + 4);
    fVar39 = *(float *)(pPVar1 + 8);
    fVar37 = *(float *)(pPVar1 + 0xc);
    *(float *)((long)local_1f8 + lVar9) =
         fVar37 * local_298 + fVar21 * fVar47 + fVar26 * fVar22 + fVar39 * fVar54;
    *(float *)((long)local_1f8 + lVar9 + 4) =
         fVar37 * fStack_294 + fVar21 * fVar14 + fVar26 * fVar55 + fVar39 * fVar58;
    *(float *)((long)local_1f8 + lVar9 + 8) =
         fVar37 * fVar17 + fVar21 * fVar34 + fVar26 * fVar27 + fVar39 * fVar40;
    *(float *)((long)local_1f8 + lVar9 + 0xc) =
         fVar37 * 1.0 + fVar21 * 0.0 + fVar26 * 0.0 + fVar39 * 0.0;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x40);
  lVar9 = 0;
  do {
    pPVar1 = this + lVar9 + 0x80;
    fVar17 = *(float *)pPVar1;
    fVar21 = *(float *)(pPVar1 + 4);
    fVar14 = *(float *)(pPVar1 + 8);
    fVar26 = *(float *)(pPVar1 + 0xc);
    *(float *)((long)&local_1b8 + lVar9) =
         fVar26 * (float)local_308 + fVar17 * fVar41 + fVar21 * fVar57 + fVar14 * fVar59;
    *(float *)((long)&local_1b8 + lVar9 + 4) =
         fVar26 * local_308._4_4_ + fVar17 * fVar28 + fVar21 * fVar60 + fVar14 * fVar61;
    *(float *)((long)&uStack_1b0 + lVar9) =
         fVar26 * fVar16 + fVar17 * fVar52 + fVar21 * fVar38 + fVar14 * fVar56;
    *(float *)((long)&uStack_1b0 + lVar9 + 4) =
         fVar26 * 1.0 + fVar17 * 0.0 + fVar21 * 0.0 + fVar14 * 0.0;
    lVar9 = lVar9 + 0x10;
  } while (lVar9 != 0x40);
  local_308 = CONCAT44(local_188 * local_1f8[4] + fStack_184 * local_1f8[5] +
                       fStack_180 * local_1f8[6] +
                       (0.0 - (local_1f8[0xc] * local_1f8[4] + local_1f8[0xd] * local_1f8[5] +
                              local_1f8[0xe] * local_1f8[6])),
                       local_188 * local_1f8[0] + fStack_184 * local_1f8[1] +
                       fStack_180 * local_1f8[2] +
                       (0.0 - (local_1f8[0xc] * local_1f8[0] + local_1f8[0xd] * local_1f8[1] +
                              local_1f8[0xe] * local_1f8[2])));
  uStack_300 = CONCAT44(local_188 * 0.0 + fStack_184 * 0.0 + fStack_180 * 0.0 + 1.0,
                        local_188 * local_1f8[8] + fStack_184 * local_1f8[9] +
                        fStack_180 * local_1f8[10] +
                        (0.0 - (local_1f8[0xc] * local_1f8[8] + local_1f8[0xd] * local_1f8[9] +
                               local_1f8[0xe] * local_1f8[10])));
  uVar15 = (**(code **)(**(long **)(this + 0x38) + 0x28))(local_308,uStack_300);
  *(undefined4 *)(this + 0x160) = uVar15;
  (**(code **)(**(long **)(this + 0x38) + 0x30))
            (*(long **)(this + 0x38),&local_238,&local_228,&local_218,&local_208);
  pfVar11 = *(float **)(this + 0x28);
  pfVar13 = *(float **)(this + 0x30);
  fVar17 = pfVar13[3];
  fVar47 = local_188 - *pfVar13;
  fVar54 = fStack_184 - pfVar13[1];
  fVar55 = fStack_180 - pfVar13[2];
  fVar16 = local_238 * local_1f8[0] + fStack_234 * local_1f8[4] + fStack_230 * local_1f8[8] +
           local_1f8[0xc];
  fVar21 = local_238 * local_1f8[1] + fStack_234 * local_1f8[5] + fStack_230 * local_1f8[9] +
           local_1f8[0xd];
  fVar14 = local_238 * local_1f8[2] + fStack_234 * local_1f8[6] + fStack_230 * local_1f8[10] +
           local_1f8[0xe];
  fVar26 = local_238 * local_1f8[3] + fStack_234 * local_1f8[7] + fStack_230 * local_1f8[0xb] +
           local_1f8[0xf];
  fVar39 = local_188 - fVar16;
  fVar58 = fStack_184 - fVar21;
  fVar37 = fStack_180 - fVar14;
  fVar22 = fStack_17c - fVar26;
  fVar16 = fVar16 - *pfVar11;
  fVar21 = fVar21 - pfVar11[1];
  fVar14 = fVar14 - pfVar11[2];
  fVar26 = fVar26 - pfVar11[3];
  *(float *)(this + 0x100) = fVar47;
  *(float *)(this + 0x104) = fVar54;
  *(float *)(this + 0x108) = fVar55;
  *(float *)(this + 0x10c) = fStack_17c - fVar17;
  *(float *)(this + 0x110) = fVar39;
  *(float *)(this + 0x114) = fVar58;
  *(float *)(this + 0x118) = fVar37;
  *(float *)(this + 0x11c) = fVar22;
  fVar39 = fVar39 + fVar16;
  fVar58 = fVar58 + fVar21;
  fVar37 = fVar37 + fVar14;
  *(float *)(this + 0xf0) = fVar16;
  *(float *)(this + 0xf4) = fVar21;
  *(float *)(this + 0xf8) = fVar14;
  *(float *)(this + 0xfc) = fVar26;
  local_308 = CONCAT44(fVar58,fVar39);
  uStack_300 = CONCAT44(fVar22 + fVar26,fVar37);
  fVar48 = local_218 * local_1f8[0] + fStack_214 * local_1f8[4] + fStack_210 * local_1f8[8];
  fVar50 = local_218 * local_1f8[1] + fStack_214 * local_1f8[5] + fStack_210 * local_1f8[9];
  fVar51 = local_218 * local_1f8[2] + fStack_214 * local_1f8[6] + fStack_210 * local_1f8[10];
  *(float *)(this + 0x130) = fVar48;
  *(float *)(this + 0x134) = fVar50;
  *(float *)(this + 0x138) = fVar51;
  *(float *)(this + 0x13c) =
       local_218 * local_1f8[3] + fStack_214 * local_1f8[7] + fStack_210 * local_1f8[0xb];
  fVar42 = fStack_204 * local_1f8[4] + local_208 * local_1f8[0] + fStack_200 * local_1f8[8];
  fVar43 = fStack_204 * local_1f8[5] + local_208 * local_1f8[1] + fStack_200 * local_1f8[9];
  fVar45 = fStack_204 * local_1f8[6] + local_208 * local_1f8[2] + fStack_200 * local_1f8[10];
  *(float *)(this + 0x140) = fVar42;
  *(float *)(this + 0x144) = fVar43;
  *(float *)(this + 0x148) = fVar45;
  *(float *)(this + 0x14c) =
       fStack_204 * local_1f8[7] + local_208 * local_1f8[3] + fStack_200 * local_1f8[0xb];
  afStack_b0[1] = 0.0;
  uStack_9c = 0;
  uStack_8c = 0;
  uStack_80 = CONCAT44(_LC0,_UNK_00107848);
  local_88 = __LC1;
  uStack_2a0 = (ulong)(uint)fVar34;
  uStack_f0 = uStack_2a0;
  uStack_2b0 = (ulong)(uint)fVar27;
  *(float *)(this + 0x120) =
       fStack_224 * local_1f8[4] + local_228 * local_1f8[0] + fStack_220 * local_1f8[8];
  *(float *)(this + 0x124) =
       fStack_224 * local_1f8[5] + local_228 * local_1f8[1] + fStack_220 * local_1f8[9];
  *(float *)(this + 0x128) =
       fStack_224 * local_1f8[6] + local_228 * local_1f8[2] + fStack_220 * local_1f8[10];
  *(float *)(this + 300) =
       fStack_224 * local_1f8[7] + local_228 * local_1f8[3] + fStack_220 * local_1f8[0xb];
  uStack_e0 = uStack_2b0;
  uStack_2c0 = (ulong)(uint)fVar40;
  lVar9 = *(long *)(pfVar11 + 0x12);
  cVar3 = *(char *)(pfVar11 + 0x1e);
  uStack_d0 = uStack_2c0;
  uStack_c0 = CONCAT44(_LC0,_UNK_00107848);
  local_c8 = __LC1;
  fVar14 = fVar39 * fVar50 - fVar48 * fVar58;
  fVar26 = fVar58 * fVar51 - fVar50 * fVar37;
  fVar22 = fVar37 * fVar48 - fVar51 * fVar39;
  *(float *)(this + 0x170) = fVar26;
  *(float *)(this + 0x174) = fVar22;
  *(float *)(this + 0x178) = fVar14;
  *(float *)(this + 0x17c) = fVar14;
  fVar17 = fVar39 * fVar43 - fVar58 * fVar42;
  fVar16 = fVar58 * fVar45 - fVar37 * fVar43;
  fVar21 = fVar37 * fVar42 - fVar39 * fVar45;
  *(float *)(this + 0x180) = fVar16;
  *(float *)(this + 0x184) = fVar21;
  *(float *)(this + 0x188) = fVar17;
  *(float *)(this + 0x18c) = fVar17;
  fVar58 = fVar50 * fVar47 - fVar48 * fVar54;
  fVar37 = fVar51 * fVar54 - fVar50 * fVar55;
  fVar48 = fVar48 * fVar55 - fVar51 * fVar47;
  fVar39 = fVar47 * fVar43 - fVar42 * fVar54;
  fVar54 = fVar54 * fVar45 - fVar43 * fVar55;
  fVar47 = fVar55 * fVar42 - fVar45 * fVar47;
  *(float *)(this + 400) = fVar37;
  *(float *)(this + 0x194) = fVar48;
  *(float *)(this + 0x198) = fVar58;
  *(float *)(this + 0x19c) = fVar58;
  *(float *)(this + 0x1a0) = fVar54;
  *(float *)(this + 0x1a4) = fVar47;
  *(float *)(this + 0x1a8) = fVar39;
  *(float *)(this + 0x1ac) = fVar39;
  local_f8 = uVar7;
  local_e8 = uVar63;
  local_d8 = uVar62;
  local_b8 = uVar53;
  afStack_b0[0] = fVar52;
  local_a8 = uVar12;
  fStack_a0 = fVar38;
  local_98 = uVar10;
  fStack_90 = fVar56;
  if (cVar3 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_78);
    fVar55 = *(float *)(lVar9 + 0x58);
    fVar43 = local_78[0] * fVar26 + fVar22 * local_78[4] + fVar14 * local_78[8];
    fVar45 = local_78[1] * fVar26 + fVar22 * local_78[5] + fVar14 * local_78[9];
    fVar50 = local_78[2] * fVar26 + fVar22 * local_78[6] + fVar14 * local_78[10];
    *(float *)(this + 0x1b0) = fVar43;
    *(float *)(this + 0x1b4) = fVar45;
    *(float *)(this + 0x1b8) = fVar50;
    *(float *)(this + 0x1bc) = local_78[3] * fVar26 + fVar22 * local_78[7] + fVar14 * local_78[0xb];
    fVar51 = local_78[0] * fVar16 + fVar21 * local_78[4] + fVar17 * local_78[8];
    fVar44 = local_78[1] * fVar16 + fVar21 * local_78[5] + fVar17 * local_78[9];
    fVar46 = local_78[2] * fVar16 + fVar21 * local_78[6] + fVar17 * local_78[10];
    *(float *)(this + 0x1c0) = fVar51;
    *(float *)(this + 0x1c4) = fVar44;
    *(float *)(this + 0x1c8) = fVar46;
    *(float *)(this + 0x1cc) = local_78[3] * fVar16 + fVar21 * local_78[7] + fVar17 * local_78[0xb];
    fVar42 = fVar14 * fVar50 + fVar45 * fVar22 + fVar43 * fVar26 + 0.0 + fVar55;
    fVar14 = fVar14 * fVar46 + fVar22 * fVar44 + fVar26 * fVar51 + 0.0;
    fVar26 = fVar50 * fVar17 + fVar45 * fVar21 + fVar43 * fVar16 + 0.0;
    fVar55 = fVar17 * fVar46 + fVar21 * fVar44 + fVar16 * fVar51 + 0.0 + fVar55;
  }
  else {
    fVar55 = 0.0;
    fVar14 = 0.0;
    fVar26 = 0.0;
    fVar42 = 0.0;
  }
  if (*(char *)(pfVar13 + 0x1e) == '\x02') {
    lVar9 = *(long *)(pfVar13 + 0x12);
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_78);
    fVar17 = *(float *)(lVar9 + 0x58);
    fVar43 = local_78[0] * fVar37 + fVar48 * local_78[4] + fVar58 * local_78[8];
    fVar45 = local_78[1] * fVar37 + fVar48 * local_78[5] + fVar58 * local_78[9];
    fVar50 = local_78[2] * fVar37 + fVar48 * local_78[6] + fVar58 * local_78[10];
    *(float *)(this + 0x1d0) = fVar43;
    *(float *)(this + 0x1d4) = fVar45;
    *(float *)(this + 0x1d8) = fVar50;
    *(float *)(this + 0x1dc) = local_78[3] * fVar37 + fVar48 * local_78[7] + fVar58 * local_78[0xb];
    fVar16 = local_78[0] * fVar54 + fVar47 * local_78[4] + fVar39 * local_78[8];
    fVar21 = local_78[1] * fVar54 + fVar47 * local_78[5] + fVar39 * local_78[9];
    fVar22 = local_78[2] * fVar54 + fVar47 * local_78[6] + fVar39 * local_78[10];
    *(float *)(this + 0x1e0) = fVar16;
    *(float *)(this + 0x1e4) = fVar21;
    *(float *)(this + 0x1e8) = fVar22;
    *(float *)(this + 0x1ec) = local_78[3] * fVar54 + fVar47 * local_78[7] + fVar39 * local_78[0xb];
    fVar42 = fVar42 + fVar58 * fVar50 + fVar48 * fVar45 + fVar43 * fVar37 + 0.0 + fVar17;
    fVar14 = fVar14 + fVar58 * fVar22 + fVar48 * fVar21 + fVar37 * fVar16 + 0.0;
    fVar26 = fVar26 + fVar50 * fVar39 + fVar45 * fVar47 + fVar43 * fVar54 + 0.0;
    fVar55 = fVar55 + fVar22 * fVar39 + fVar21 * fVar47 + fVar54 * fVar16 + 0.0 + fVar17;
  }
  auVar19._0_4_ = fVar55 * fVar42 - fVar26 * fVar14;
  if (auVar19._0_4_ == 0.0) {
    *(undefined8 *)(this + 0x200) = 0;
    *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  }
  else {
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_4_ = auVar19._0_4_;
    auVar19._12_4_ = auVar19._0_4_;
    auVar33._12_4_ = fVar42;
    auVar33._8_4_ = (uint)fVar14 ^ _LC39;
    auVar33._4_4_ = (uint)fVar26 ^ _LC39;
    auVar33._0_4_ = fVar55;
    auVar19 = divps(auVar33,auVar19);
    *(undefined1 (*) [16])(this + 0x1f0) = auVar19;
  }
  if (*(char *)((long)*(long **)(this + 0x38) + 0xc) == '\0') {
    fVar17 = *(float *)(this + 0x160);
    if (0.0 < fVar17) {
      fVar16 = (float)(**(code **)(**(long **)(this + 0x38) + 0x20))();
      if (fVar17 < fVar16) goto LAB_0010333e;
      pfVar13 = *(float **)(this + 0x30);
      pfVar11 = *(float **)(this + 0x28);
      local_308 = CONCAT44(*(float *)(this + 0x114) + *(float *)(this + 0xf4),
                           *(float *)(this + 0x110) + *(float *)(this + 0xf0));
      uStack_300 = CONCAT44(*(float *)(this + 0x11c) + *(float *)(this + 0xfc),
                            *(float *)(this + 0x118) + *(float *)(this + 0xf8));
    }
    AxisConstraintPart::CalculateConstraintProperties
              (local_308,uStack_300,*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),
               *(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),0,this + 0x210,pfVar11,
               pfVar13);
  }
  else {
LAB_0010333e:
    *(undefined4 *)(this + 0x240) = 0;
    *(undefined4 *)(this + 0x24c) = 0;
  }
  fVar14 = local_78[0xb];
  fVar21 = local_78[7];
  fVar16 = local_78[3];
  uVar8 = uStack_8c;
  uVar15 = uStack_9c;
  fVar17 = afStack_b0[1];
  local_78[3] = 0.0;
  local_78[7] = 0.0;
  local_78[0xb] = 0.0;
  afStack_b0[1] = 0.0;
  uStack_9c = 0;
  uStack_8c = 0;
  switch(*(undefined4 *)(this + 0xc0)) {
  case 1:
    uStack_40 = CONCAT44(_LC0,_UNK_00107848);
    local_48 = __LC1;
    uStack_80 = CONCAT44(_LC0,_UNK_00107848);
    local_88 = __LC1;
    local_b8 = uVar7;
    afStack_b0[0] = fVar34;
    local_a8 = uVar63;
    fStack_a0 = fVar27;
    local_98 = uVar62;
    fStack_90 = fVar40;
    local_78[0] = fVar41;
    local_78[1] = fVar28;
    local_78[2] = fVar52;
    local_78[4] = fVar57;
    local_78[5] = fVar60;
    local_78[6] = fVar38;
    local_78[8] = fVar59;
    local_78[9] = fVar61;
    local_78[10] = fVar56;
    HingeRotationConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),local_1b8,uStack_1b0,
               this + 0x290,*(undefined8 *)(this + 0x28),&local_b8,*(undefined8 *)(this + 0x30),
               local_78);
    fVar17 = afStack_b0[1];
    uVar15 = uStack_9c;
    uVar8 = uStack_8c;
    fVar16 = local_78[3];
    fVar21 = local_78[7];
    fVar14 = local_78[0xb];
    break;
  case 2:
    uStack_40 = CONCAT44(_LC0,_UNK_00107848);
    local_48 = __LC1;
    uStack_80 = CONCAT44(_LC0,_UNK_00107848);
    local_88 = __LC1;
    local_b8 = uVar7;
    afStack_b0[0] = fVar34;
    local_a8 = uVar63;
    fStack_a0 = fVar27;
    local_98 = uVar62;
    fStack_90 = fVar40;
    local_78[0] = fVar41;
    local_78[1] = fVar28;
    local_78[2] = fVar52;
    local_78[4] = fVar57;
    local_78[5] = fVar60;
    local_78[6] = fVar38;
    local_78[8] = fVar59;
    local_78[9] = fVar61;
    local_78[10] = fVar56;
    HingeRotationConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(this + 0x130),*(undefined8 *)(this + 0x138),local_198,local_190,
               this + 0x290,*(undefined8 *)(this + 0x28),&local_b8,*(undefined8 *)(this + 0x30),
               local_78);
    fVar17 = afStack_b0[1];
    uVar15 = uStack_9c;
    uVar8 = uStack_8c;
    fVar16 = local_78[3];
    fVar21 = local_78[7];
    fVar14 = local_78[0xb];
    break;
  case 3:
    uStack_40 = CONCAT44(_LC0,_UNK_00107848);
    local_48 = __LC1;
    uStack_80 = CONCAT44(_LC0,_UNK_00107848);
    local_88 = __LC1;
    local_b8 = uVar7;
    afStack_b0[0] = fVar34;
    local_a8 = uVar63;
    fStack_a0 = fVar27;
    local_98 = uVar62;
    fStack_90 = fVar40;
    local_78[0] = fVar41;
    local_78[1] = fVar28;
    local_78[2] = fVar52;
    local_78[4] = fVar57;
    local_78[5] = fVar60;
    local_78[6] = fVar38;
    local_78[8] = fVar59;
    local_78[9] = fVar61;
    local_78[10] = fVar56;
    HingeRotationConstraintPart::CalculateConstraintProperties
              (*(undefined8 *)(this + 0x140),*(undefined8 *)(this + 0x148),local_1a8,local_1a0,
               this + 0x290,*(undefined8 *)(this + 0x28),&local_b8,*(undefined8 *)(this + 0x30),
               local_78);
    fVar17 = afStack_b0[1];
    uVar15 = uStack_9c;
    uVar8 = uStack_8c;
    fVar16 = local_78[3];
    fVar21 = local_78[7];
    fVar14 = local_78[0xb];
    break;
  case 4:
    local_b8 = CONCAT44(fStack_224,local_228);
    fVar17 = *(float *)(this + 0x40);
    fVar60 = *(float *)(this + 0x44);
    fVar26 = *(float *)(this + 0x48);
    fVar22 = *(float *)(this + 0x4c);
    afStack_b0[1] = 0.0;
    fVar28 = *(float *)(this + 0x50);
    fVar47 = *(float *)(this + 0x54);
    fVar39 = *(float *)(this + 0x58);
    fVar41 = *(float *)(this + 0x5c);
    fVar54 = *(float *)(this + 0x60);
    fVar55 = *(float *)(this + 100);
    fVar57 = *(float *)(this + 0x68);
    fVar58 = *(float *)(this + 0x6c);
    uStack_9c = 0;
    local_a8 = CONCAT44(fStack_204,local_208);
    uStack_8c = 0;
    afStack_b0[0] = fStack_220;
    local_98 = CONCAT44(fStack_214,local_218);
    fStack_a0 = fStack_200;
    lVar9 = 0;
    fStack_90 = fStack_210;
    local_78[3] = fVar16;
    local_78[7] = fVar21;
    local_78[0xb] = fVar14;
    do {
      fVar16 = *(float *)((long)afStack_b0 + lVar9 + -8);
      fVar21 = *(float *)((long)afStack_b0 + lVar9 + -4);
      fVar14 = *(float *)((long)afStack_b0 + lVar9);
      *(float *)((long)local_78 + lVar9) = fVar14 * fVar54 + fVar16 * fVar17 + fVar21 * fVar28;
      *(float *)((long)local_78 + lVar9 + 4) = fVar14 * fVar55 + fVar16 * fVar60 + fVar21 * fVar47;
      *(float *)((long)local_78 + lVar9 + 8) = fVar14 * fVar57 + fVar16 * fVar26 + fVar21 * fVar39;
      *(float *)((long)local_78 + lVar9 + 0xc) = fVar14 * fVar58 + fVar16 * fVar22 + fVar21 * fVar41
      ;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x30);
    fVar17 = *(float *)(this + 0x90);
    fVar16 = *(float *)(this + 0x94);
    fVar60 = *(float *)(this + 0x98);
    fVar21 = *(float *)(this + 0x80);
    fVar14 = *(float *)(this + 0x84);
    fVar26 = *(float *)(this + 0x88);
    fVar22 = *(float *)(this + 0xa0);
    fVar28 = *(float *)(this + 0xa4);
    fVar47 = *(float *)(this + 0xa8);
    fVar55 = local_78[4] * fVar17 + local_78[0] * fVar21 + local_78[8] * fVar22;
    fVar57 = local_78[4] * fVar16 + local_78[0] * fVar14 + local_78[8] * fVar28;
    fVar58 = local_78[4] * fVar60 + local_78[0] * fVar26 + local_78[8] * fVar47;
    fVar39 = local_78[5] * fVar17 + local_78[1] * fVar21 + local_78[9] * fVar22;
    fVar41 = local_78[5] * fVar16 + local_78[1] * fVar14 + local_78[9] * fVar28;
    fVar54 = local_78[5] * fVar60 + local_78[1] * fVar26 + local_78[9] * fVar47;
    fVar17 = local_78[6] * fVar17 + local_78[2] * fVar21 + local_78[10] * fVar22;
    fVar16 = local_78[6] * fVar16 + local_78[2] * fVar14 + local_78[10] * fVar28;
    fVar60 = local_78[6] * fVar60 + local_78[2] * fVar26 + local_78[10] * fVar47;
    fVar21 = fVar41 + fVar55 + fVar60;
    if (0.0 <= fVar21) {
      fVar21 = SQRT(fVar21 + _LC0);
      fVar60 = _LC11 / fVar21;
      uVar18 = CONCAT44((fVar17 - fVar58) * fVar60,(fVar54 - fVar16) * fVar60);
      uVar29 = CONCAT44(fVar21 * _LC11,(fVar57 - fVar39) * fVar60);
    }
    else if (fVar41 <= fVar55) {
      if (fVar55 < fVar60) goto LAB_00103e9b;
      fVar60 = (fVar55 - (fVar60 + fVar41)) + _LC0;
      if (fVar60 < 0.0) {
        fVar60 = sqrtf(fVar60);
      }
      else {
        fVar60 = SQRT(fVar60);
      }
      fVar21 = _LC11 / fVar60;
      uVar18 = CONCAT44((fVar39 + fVar57) * fVar21,_LC11 * fVar60);
      uVar29 = CONCAT44((fVar54 - fVar16) * fVar21,(fVar58 + fVar17) * fVar21);
    }
    else if (fVar41 < fVar60) {
LAB_00103e9b:
      fVar60 = (fVar60 - (fVar41 + fVar55)) + _LC0;
      if (fVar60 < 0.0) {
        fVar60 = sqrtf(fVar60);
      }
      else {
        fVar60 = SQRT(fVar60);
      }
      fVar21 = _LC11 / fVar60;
      uVar18 = CONCAT44((fVar16 + fVar54) * fVar21,(fVar17 + fVar58) * fVar21);
      uVar29 = CONCAT44((fVar57 - fVar39) * fVar21,fVar60 * _LC11);
    }
    else {
      fVar60 = (fVar41 - (fVar60 + fVar55)) + _LC0;
      if (fVar60 < 0.0) {
        fVar60 = sqrtf(fVar60);
      }
      else {
        fVar60 = SQRT(fVar60);
      }
      fVar21 = _LC11 / fVar60;
      uVar18 = CONCAT44(fVar60 * _LC11,(fVar57 + fVar39) * fVar21);
      uVar29 = CONCAT44((fVar17 - fVar58) * fVar21,(fVar54 + fVar16) * fVar21);
    }
    *(undefined8 *)(this + 0x150) = uVar18;
    *(undefined8 *)(this + 0x158) = uVar29;
    fVar17 = afStack_b0[1];
    uVar15 = uStack_9c;
    uVar8 = uStack_8c;
    fVar16 = local_78[3];
    fVar21 = local_78[7];
    fVar14 = local_78[0xb];
  case 5:
    local_78[0xb] = fVar14;
    local_78[7] = fVar21;
    local_78[3] = fVar16;
    uStack_8c = uVar8;
    uStack_9c = uVar15;
    afStack_b0[1] = fVar17;
    uStack_2d0 = (ulong)(uint)fVar52;
    lVar9 = *(long *)(this + 0x30);
    uStack_130 = uStack_2d0;
    uStack_2e0 = (ulong)(uint)fVar38;
    uStack_120 = uStack_2e0;
    uStack_2f0 = (ulong)(uint)fVar56;
    uStack_110 = uStack_2f0;
    uStack_100 = CONCAT44(_LC0,_UNK_00107848);
    local_108 = __LC1;
    uStack_2a0 = (ulong)(uint)fVar34;
    uStack_170 = uStack_2a0;
    uStack_2b0 = (ulong)(uint)fVar27;
    uStack_160 = uStack_2b0;
    uStack_2c0 = (ulong)(uint)fVar40;
    uStack_150 = uStack_2c0;
    uStack_140 = CONCAT44(_LC0,_UNK_00107848);
    local_148 = __LC1;
    local_178 = uVar7;
    local_168 = uVar63;
    local_158 = uVar62;
    local_138 = uVar53;
    local_128 = uVar12;
    local_118 = uVar10;
    if (*(char *)(*(long *)(this + 0x28) + 0x78) == '\x02') {
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)local_78);
      auVar35._4_4_ = local_78[1];
      auVar35._0_4_ = local_78[0];
      auVar35._8_4_ = local_78[2];
      auVar35._12_4_ = local_78[3];
      auVar30._4_4_ = local_78[5];
      auVar30._0_4_ = local_78[4];
      auVar30._8_4_ = local_78[6];
      auVar30._12_4_ = local_78[7];
      auVar23._4_4_ = local_78[9];
      auVar23._0_4_ = local_78[8];
      auVar23._8_4_ = local_78[10];
      auVar23._12_4_ = local_78[0xb];
      uVar10 = local_48;
      uVar12 = uStack_40;
    }
    else {
      auVar23._0_12_ = ZEXT812(0);
      auVar23._12_4_ = 0;
      auVar30._0_12_ = ZEXT812(0);
      auVar30._12_4_ = 0;
      auVar35._0_12_ = ZEXT812(0);
      auVar35._12_4_ = 0;
      uVar10 = 0;
      uVar12 = 0;
    }
    cVar3 = *(char *)(lVar9 + 0x78);
    *(undefined1 (*) [16])(this + 0x380) = auVar35;
    *(undefined1 (*) [16])(this + 0x390) = auVar30;
    *(undefined1 (*) [16])(this + 0x3a0) = auVar23;
    *(undefined8 *)(this + 0x3b0) = uVar10;
    *(undefined8 *)(this + 0x3b8) = uVar12;
    if (cVar3 == '\x02') {
      MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_b8);
      auVar36._8_4_ = afStack_b0[0];
      auVar36._0_8_ = local_b8;
      auVar36._12_4_ = afStack_b0[1];
      auVar31._8_4_ = fStack_a0;
      auVar31._0_8_ = local_a8;
      auVar31._12_4_ = uStack_9c;
      auVar24._8_4_ = fStack_90;
      auVar24._0_8_ = local_98;
      auVar24._12_4_ = uStack_8c;
      uVar10 = local_88;
      uVar12 = uStack_80;
    }
    else {
      auVar24._0_12_ = ZEXT812(0);
      auVar24._12_4_ = 0;
      auVar31._0_12_ = ZEXT812(0);
      auVar31._12_4_ = 0;
      auVar36._0_12_ = ZEXT812(0);
      auVar36._12_4_ = 0;
      uVar10 = 0;
      uVar12 = 0;
    }
    *(undefined1 (*) [16])(this + 0x3c0) = auVar36;
    lVar9 = 0;
    *(undefined1 (*) [16])(this + 0x3d0) = auVar31;
    *(undefined1 (*) [16])(this + 0x3e0) = auVar24;
    *(undefined8 *)(this + 0x3f0) = uVar10;
    *(undefined8 *)(this + 0x3f8) = uVar12;
    do {
      pPVar1 = this + lVar9 + 0x3c0;
      fVar17 = *(float *)(pPVar1 + 4);
      fVar16 = *(float *)(pPVar1 + 8);
      fVar60 = *(float *)(pPVar1 + 0xc);
      pPVar2 = this + lVar9 + 0x380;
      fVar21 = *(float *)(pPVar2 + 4);
      fVar52 = *(float *)(pPVar2 + 8);
      fVar14 = *(float *)(pPVar2 + 0xc);
      *(float *)((long)&local_f8 + lVar9) = *(float *)pPVar1 + *(float *)pPVar2;
      *(float *)((long)&local_f8 + lVar9 + 4) = fVar17 + fVar21;
      *(float *)((long)&uStack_f0 + lVar9) = fVar16 + fVar52;
      *(float *)((long)&uStack_f0 + lVar9 + 4) = fVar60 + fVar14;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x40);
    auVar20._0_4_ =
         (local_d8._4_4_ * (float)local_e8 - local_e8._4_4_ * (float)local_d8) * (float)uStack_f0 +
         ((float)local_d8 * (float)uStack_e0 - (float)local_e8 * (float)uStack_d0) * local_f8._4_4_
         + ((float)uStack_d0 * local_e8._4_4_ - (float)uStack_e0 * local_d8._4_4_) * (float)local_f8
           + 0.0;
    fVar17 = afStack_b0[1];
    uVar15 = uStack_9c;
    uVar8 = uStack_8c;
    fVar16 = local_78[3];
    fVar21 = local_78[7];
    fVar14 = local_78[0xb];
    if (auVar20._0_4_ == 0.0) {
      *(undefined1 (*) [16])(this + 0x400) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x420) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x430) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0x440) = (undefined1  [16])0x0;
    }
    else {
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_4_ = auVar20._0_4_;
      auVar20._12_4_ = auVar20._0_4_;
      uVar10 = CONCAT44(_LC0,_UNK_00107848);
      *(undefined8 *)(this + 0x430) = __LC1;
      *(undefined8 *)(this + 0x438) = uVar10;
      auVar49._0_4_ = local_e8._4_4_ * (float)uStack_d0 - local_d8._4_4_ * (float)uStack_e0;
      auVar49._4_4_ = local_d8._4_4_ * (float)uStack_f0 - local_f8._4_4_ * (float)uStack_d0;
      auVar49._8_4_ = local_f8._4_4_ * (float)uStack_e0 - local_e8._4_4_ * (float)uStack_f0;
      auVar49._12_4_ = 0;
      auVar25._0_4_ = local_d8._4_4_ * (float)local_e8 - local_e8._4_4_ * (float)local_d8;
      auVar25._4_4_ = local_f8._4_4_ * (float)local_d8 - local_d8._4_4_ * (float)local_f8;
      auVar25._8_4_ = local_e8._4_4_ * (float)local_f8 - local_f8._4_4_ * (float)local_e8;
      auVar25._12_4_ = 0;
      auVar32._0_4_ = (float)uStack_e0 * (float)local_d8 - (float)uStack_d0 * (float)local_e8;
      auVar32._4_4_ = (float)uStack_d0 * (float)local_f8 - (float)uStack_f0 * (float)local_d8;
      auVar32._8_4_ = (float)uStack_f0 * (float)local_e8 - (float)uStack_e0 * (float)local_f8;
      auVar32._12_4_ = 0;
      auVar19 = divps(auVar49,auVar20);
      auVar33 = divps(auVar32,auVar20);
      *(undefined1 (*) [16])(this + 0x400) = auVar19;
      auVar19 = divps(auVar25,auVar20);
      *(undefined1 (*) [16])(this + 0x410) = auVar33;
      *(undefined1 (*) [16])(this + 0x420) = auVar19;
    }
  }
  local_78[0xb] = fVar14;
  local_78[7] = fVar21;
  local_78[3] = fVar16;
  uStack_8c = uVar8;
  uStack_9c = uVar15;
  afStack_b0[1] = fVar17;
  iVar4 = *(int *)(this + 0xe4);
  if (iVar4 == 1) {
    uVar10 = *(undefined8 *)(this + 0x30);
    uVar12 = *(undefined8 *)(this + 0x28);
    local_308 = CONCAT44(*(float *)(this + 0xf4) + *(float *)(this + 0x114),
                         *(float *)(this + 0xf0) + *(float *)(this + 0x110));
    uStack_300 = CONCAT44(*(float *)(this + 0xfc) + *(float *)(this + 0x11c),
                          *(float *)(this + 0xf8) + *(float *)(this + 0x118));
LAB_00103823:
    AxisConstraintPart::CalculateConstraintProperties
              (local_308,uStack_300,*(undefined8 *)(this + 0x100),*(undefined8 *)(this + 0x108),
               *(undefined8 *)(this + 0x120),*(undefined8 *)(this + 0x128),this + 0x250,uVar12,
               uVar10);
  }
  else {
    if (iVar4 == 2) {
      if (0.0 < *(float *)(this + 0xcc)) {
        if (*(char *)((long)*(long **)(this + 0x38) + 0xc) != '\0') {
          fVar16 = (float)(**(code **)(**(long **)(this + 0x38) + 0x20))();
          fVar17 = *(float *)(this + 0x160) - *(float *)(this + 0xec);
          do {
            fVar17 = fVar17 - (fVar17 / fVar16) * fVar16;
          } while ((in_FPUStatusWord & 0x400) != 0);
          if (NAN(fVar17)) {
            fmodf(*(float *)(this + 0x160) - *(float *)(this + 0xec),fVar16);
          }
        }
        local_308 = CONCAT44(*(float *)(this + 0xf4) + *(float *)(this + 0x114),
                             *(float *)(this + 0xf0) + *(float *)(this + 0x110));
        uStack_300 = CONCAT44(*(float *)(this + 0xfc) + *(float *)(this + 0x11c),
                              *(float *)(this + 0xf8) + *(float *)(this + 0x118));
        AxisConstraintPart::CalculateConstraintPropertiesWithSettings
                  (param_1,local_308,uStack_300,*(undefined8 *)(this + 0x100),
                   *(undefined8 *)(this + 0x108),*(undefined8 *)(this + 0x120),
                   *(undefined8 *)(this + 0x128),0,this + 0x250,*(undefined8 *)(this + 0x28),
                   *(undefined8 *)(this + 0x30),this + 200);
        goto LAB_00103682;
      }
    }
    else {
      if (iVar4 != 0) goto LAB_00103682;
      if (0.0 < *(float *)(this + 0xc4)) {
        uVar10 = *(undefined8 *)(this + 0x30);
        uVar12 = *(undefined8 *)(this + 0x28);
        local_308 = CONCAT44(*(float *)(this + 0xf4) + *(float *)(this + 0x114),
                             *(float *)(this + 0xf0) + *(float *)(this + 0x110));
        uStack_300 = CONCAT44(*(float *)(this + 0xfc) + *(float *)(this + 0x11c),
                              *(float *)(this + 0xf8) + *(float *)(this + 0x118));
        goto LAB_00103823;
      }
    }
    *(undefined4 *)(this + 0x280) = 0;
    *(undefined4 *)(this + 0x28c) = 0;
  }
LAB_00103682:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::PathConstraint::SetupVelocityConstraint(float) */

void __thiscall JPH::PathConstraint::SetupVelocityConstraint(PathConstraint *this,float param_1)

{
  CalculateConstraintProperties(this,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraint::SolvePositionConstraint(float, float) */

undefined8 __thiscall
JPH::PathConstraint::SolvePositionConstraint(PathConstraint *this,float param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  Body *pBVar3;
  Body *pBVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_68;
  undefined8 uStack_60;
  float fStack_4c;
  
  CalculateConstraintProperties(this,param_1);
  pBVar3 = *(Body **)(this + 0x30);
  fVar21 = (float)*(undefined8 *)(this + 0x110);
  fVar22 = (float)((ulong)*(undefined8 *)(this + 0x110) >> 0x20);
  fVar14 = (float)*(undefined8 *)(this + 0x130);
  pBVar4 = *(Body **)(this + 0x28);
  fVar27 = (float)((ulong)*(undefined8 *)(this + 0x130) >> 0x20);
  fVar24 = (float)*(undefined8 *)(this + 0x138);
  fVar17 = fVar24 * *(float *)(this + 0x118) + fVar27 * fVar22 + fVar14 * fVar21 + 0.0;
  fVar23 = (float)*(undefined8 *)(this + 0x140);
  fVar25 = (float)((ulong)*(undefined8 *)(this + 0x140) >> 0x20);
  fVar15 = (float)*(undefined8 *)(this + 0x148);
  fVar21 = *(float *)(this + 0x118) * fVar15 + fVar22 * fVar25 + fVar21 * fVar23 + 0.0;
  bVar5 = fVar17 != 0.0 || fVar21 != 0.0;
  if (bVar5) {
    fStack_4c = (float)((ulong)*(undefined8 *)(this + 0x138) >> 0x20);
    uStack_60._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x148) >> 0x20);
    fVar26 = (*(float *)(this + 0x1f8) * fVar21 + *(float *)(this + 0x1f0) * fVar17 + 0.0) *
             (float)((uint)param_2 ^ _LC39);
    fVar21 = (fVar21 * *(float *)(this + 0x1fc) + fVar17 * *(float *)(this + 500) + 0.0) *
             (float)((uint)param_2 ^ _LC39);
    fVar22 = fVar23 * fVar21 + fVar14 * fVar26;
    fVar23 = fVar25 * fVar21 + fVar27 * fVar26;
    fVar24 = fVar15 * fVar21 + fVar24 * fVar26;
    fVar25 = uStack_60._4_4_ * fVar21 + fStack_4c * fVar26;
    if (pBVar4[0x78] == (Body)0x2) {
      bVar1 = *(byte *)(*(long *)(pBVar4 + 0x48) + 0x7a);
      fVar15 = *(float *)(*(long *)(pBVar4 + 0x48) + 0x58);
      auVar16._1_3_ = 0;
      auVar16[0] = bVar1;
      auVar16[4] = bVar1;
      auVar16._5_3_ = 0;
      auVar16[8] = bVar1;
      auVar16._9_3_ = 0;
      auVar16[0xc] = bVar1;
      auVar16._13_3_ = 0;
      auVar12._4_4_ = _UNK_00107864;
      auVar12._0_4_ = __LC7;
      auVar12._8_4_ = _UNK_00107868;
      auVar12._12_4_ = _UNK_0010786c;
      auVar16 = auVar16 & auVar12;
      bVar6 = auVar16._4_4_ == _UNK_00107864;
      bVar8 = auVar16._8_4_ == _UNK_00107868;
      bVar7 = auVar16._12_4_ == _UNK_0010786c;
      *(float *)pBVar4 =
           *(float *)pBVar4 - (float)(-(uint)(auVar16._0_4_ == __LC7) & (uint)(fVar15 * fVar22));
      *(float *)(pBVar4 + 4) =
           *(float *)(pBVar4 + 4) - (float)(-(uint)bVar6 & (uint)(fVar15 * fVar23));
      *(float *)(pBVar4 + 8) =
           *(float *)(pBVar4 + 8) - (float)(-(uint)bVar8 & (uint)(fVar15 * fVar24));
      *(float *)(pBVar4 + 0xc) =
           *(float *)(pBVar4 + 0xc) - (float)(-(uint)bVar7 & (uint)(fVar15 * fVar25));
      local_68 = CONCAT44(fVar21 * *(float *)(this + 0x1c4) + fVar26 * *(float *)(this + 0x1b4),
                          fVar21 * *(float *)(this + 0x1c0) + fVar26 * *(float *)(this + 0x1b0));
      uStack_60 = CONCAT44(fVar21 * *(float *)(this + 0x1cc) + fVar26 * *(float *)(this + 0x1bc),
                           fVar21 * *(float *)(this + 0x1c8) + fVar26 * *(float *)(this + 0x1b8));
      Body::SubRotationStep(local_68,uStack_60,pBVar4);
    }
    if (pBVar3[0x78] == (Body)0x2) {
      bVar1 = *(byte *)(*(long *)(pBVar3 + 0x48) + 0x7a);
      fVar15 = *(float *)(*(long *)(pBVar3 + 0x48) + 0x58);
      auVar18._1_3_ = 0;
      auVar18[0] = bVar1;
      auVar18[4] = bVar1;
      auVar18._5_3_ = 0;
      auVar18[8] = bVar1;
      auVar18._9_3_ = 0;
      auVar18[0xc] = bVar1;
      auVar18._13_3_ = 0;
      auVar11._4_4_ = _UNK_00107864;
      auVar11._0_4_ = __LC7;
      auVar11._8_4_ = _UNK_00107868;
      auVar11._12_4_ = _UNK_0010786c;
      auVar18 = auVar18 & auVar11;
      bVar6 = auVar18._4_4_ == _UNK_00107864;
      bVar8 = auVar18._8_4_ == _UNK_00107868;
      bVar7 = auVar18._12_4_ == _UNK_0010786c;
      *(float *)pBVar3 =
           (float)((uint)(fVar15 * fVar22) & -(uint)(auVar18._0_4_ == __LC7)) + *(float *)pBVar3;
      *(float *)(pBVar3 + 4) =
           (float)((uint)(fVar15 * fVar23) & -(uint)bVar6) + *(float *)(pBVar3 + 4);
      *(float *)(pBVar3 + 8) =
           (float)((uint)(fVar15 * fVar24) & -(uint)bVar8) + *(float *)(pBVar3 + 8);
      *(float *)(pBVar3 + 0xc) =
           (float)((uint)(fVar15 * fVar25) & -(uint)bVar7) + *(float *)(pBVar3 + 0xc);
      local_68 = CONCAT44(fVar21 * *(float *)(this + 0x1e4) + fVar26 * *(float *)(this + 0x1d4),
                          fVar21 * *(float *)(this + 0x1e0) + fVar26 * *(float *)(this + 0x1d0));
      uStack_60 = CONCAT44(fVar21 * *(float *)(this + 0x1ec) + fVar26 * *(float *)(this + 0x1dc),
                           fVar21 * *(float *)(this + 0x1e8) + fVar26 * *(float *)(this + 0x1d8));
      Body::AddRotationStep(local_68,uStack_60,pBVar3);
    }
  }
  if (((*(float *)(this + 0x240) == 0.0) ||
      (fVar21 = (float)((ulong)*(undefined8 *)(this + 0x120) >> 0x20) * *(float *)(this + 0x114) +
                (float)*(undefined8 *)(this + 0x120) * *(float *)(this + 0x110) + 0.0 +
                *(float *)(this + 0x118) * *(float *)(this + 0x128), fVar21 == 0.0)) ||
     (*(float *)(this + 0x248) != 0.0)) {
    iVar2 = *(int *)(this + 0xc0);
    if (iVar2 < 4) {
      if (iVar2 < 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = HingeRotationConstraintPart::SolvePositionConstraint
                           ((HingeRotationConstraintPart *)(this + 0x290),pBVar4,pBVar3,param_2);
      }
      goto LAB_001041a5;
    }
    uVar13 = 0;
    if (1 < iVar2 - 4U) goto LAB_001041a5;
  }
  else {
    fVar22 = *(float *)(this + 0x120);
    fVar24 = *(float *)(this + 0x124);
    fVar23 = *(float *)(this + 0x128);
    fVar25 = *(float *)(this + 300);
    fVar21 = (float)((uint)*(float *)(this + 0x240) ^ _LC39) * param_2 * fVar21;
    if (pBVar4[0x78] == (Body)0x2) {
      bVar1 = *(byte *)(*(long *)(pBVar4 + 0x48) + 0x7a);
      fVar15 = *(float *)(*(long *)(pBVar4 + 0x48) + 0x58) * fVar21;
      auVar20._1_3_ = 0;
      auVar20[0] = bVar1;
      auVar20[4] = bVar1;
      auVar20._5_3_ = 0;
      auVar20[8] = bVar1;
      auVar20._9_3_ = 0;
      auVar20[0xc] = bVar1;
      auVar20._13_3_ = 0;
      auVar10._4_4_ = _UNK_00107864;
      auVar10._0_4_ = __LC7;
      auVar10._8_4_ = _UNK_00107868;
      auVar10._12_4_ = _UNK_0010786c;
      auVar20 = auVar20 & auVar10;
      bVar5 = auVar20._4_4_ == _UNK_00107864;
      bVar6 = auVar20._8_4_ == _UNK_00107868;
      bVar8 = auVar20._12_4_ == _UNK_0010786c;
      *(float *)pBVar4 =
           *(float *)pBVar4 - (float)((uint)(fVar15 * fVar22) & -(uint)(auVar20._0_4_ == __LC7));
      *(float *)(pBVar4 + 4) =
           *(float *)(pBVar4 + 4) - (float)((uint)(fVar15 * fVar24) & -(uint)bVar5);
      *(float *)(pBVar4 + 8) =
           *(float *)(pBVar4 + 8) - (float)((uint)(fVar15 * fVar23) & -(uint)bVar6);
      *(float *)(pBVar4 + 0xc) =
           *(float *)(pBVar4 + 0xc) - (float)((uint)(fVar15 * fVar25) & -(uint)bVar8);
      local_68 = CONCAT44(fVar21 * *(float *)(this + 0x22c),fVar21 * *(float *)(this + 0x228));
      uStack_60 = CONCAT44(fVar21 * *(float *)(this + 0x234),fVar21 * *(float *)(this + 0x230));
      Body::SubRotationStep(local_68,uStack_60,pBVar4);
    }
    if (pBVar3[0x78] == (Body)0x2) {
      bVar1 = *(byte *)(*(long *)(pBVar3 + 0x48) + 0x7a);
      fVar15 = *(float *)(*(long *)(pBVar3 + 0x48) + 0x58) * fVar21;
      auVar19._1_3_ = 0;
      auVar19[0] = bVar1;
      auVar19[4] = bVar1;
      auVar19._5_3_ = 0;
      auVar19[8] = bVar1;
      auVar19._9_3_ = 0;
      auVar19[0xc] = bVar1;
      auVar19._13_3_ = 0;
      auVar9._4_4_ = _UNK_00107864;
      auVar9._0_4_ = __LC7;
      auVar9._8_4_ = _UNK_00107868;
      auVar9._12_4_ = _UNK_0010786c;
      auVar19 = auVar19 & auVar9;
      bVar5 = auVar19._4_4_ == _UNK_00107864;
      bVar6 = auVar19._8_4_ == _UNK_00107868;
      bVar8 = auVar19._12_4_ == _UNK_0010786c;
      *(float *)pBVar3 =
           (float)((uint)(fVar15 * fVar22) & -(uint)(auVar19._0_4_ == __LC7)) + *(float *)pBVar3;
      *(float *)(pBVar3 + 4) =
           (float)((uint)(fVar15 * fVar24) & -(uint)bVar5) + *(float *)(pBVar3 + 4);
      *(float *)(pBVar3 + 8) =
           (float)((uint)(fVar15 * fVar23) & -(uint)bVar6) + *(float *)(pBVar3 + 8);
      *(float *)(pBVar3 + 0xc) =
           (float)((uint)(fVar15 * fVar25) & -(uint)bVar8) + *(float *)(pBVar3 + 0xc);
      local_68 = CONCAT44(fVar21 * *(float *)(this + 0x238),fVar21 * *(float *)(this + 0x234));
      uStack_60 = CONCAT44(fVar21 * *(float *)(this + 0x240),fVar21 * *(float *)(this + 0x23c));
      Body::AddRotationStep(local_68,uStack_60,pBVar3);
    }
    iVar2 = *(int *)(this + 0xc0);
    if (iVar2 < 4) {
      if (iVar2 < 1) {
        return 1;
      }
      HingeRotationConstraintPart::SolvePositionConstraint
                ((HingeRotationConstraintPart *)(this + 0x290),pBVar4,pBVar3,param_2);
      return 1;
    }
    bVar5 = true;
    if (1 < iVar2 - 4U) {
      return 1;
    }
  }
  uVar13 = RotationEulerConstraintPart::SolvePositionConstraint
                     (*(undefined8 *)(this + 0x150),*(undefined8 *)(this + 0x158),this + 0x380,
                      pBVar4,pBVar3);
LAB_001041a5:
  if (bVar5) {
    return 1;
  }
  return uVar13;
}



/* JPH::Constraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* JPH::TwoBodyConstraint::GetType() const */

undefined8 JPH::TwoBodyConstraint::GetType(void)

{
  return 1;
}



/* JPH::PathConstraint::GetSubType() const */

undefined8 JPH::PathConstraint::GetSubType(void)

{
  return 8;
}



/* JPH::PathConstraint::GetConstraintToBody1Matrix() const */

void JPH::PathConstraint::GetConstraintToBody1Matrix(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x48);
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  uVar3 = *(undefined8 *)(in_RSI + 0x58);
  uVar4 = *(undefined8 *)(in_RSI + 0x60);
  uVar5 = *(undefined8 *)(in_RSI + 0x68);
  uVar6 = *(undefined8 *)(in_RSI + 0x70);
  uVar7 = *(undefined8 *)(in_RSI + 0x78);
  *in_RDI = *(undefined8 *)(in_RSI + 0x40);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  in_RDI[6] = uVar6;
  in_RDI[7] = uVar7;
  return;
}



/* JPH::PathConstraint::GetConstraintToBody2Matrix() const */

void JPH::PathConstraint::GetConstraintToBody2Matrix(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x88);
  uVar2 = *(undefined8 *)(in_RSI + 0x90);
  uVar3 = *(undefined8 *)(in_RSI + 0x98);
  uVar4 = *(undefined8 *)(in_RSI + 0xa0);
  uVar5 = *(undefined8 *)(in_RSI + 0xa8);
  uVar6 = *(undefined8 *)(in_RSI + 0xb0);
  uVar7 = *(undefined8 *)(in_RSI + 0xb8);
  *in_RDI = *(undefined8 *)(in_RSI + 0x80);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  in_RDI[4] = uVar4;
  in_RDI[5] = uVar5;
  in_RDI[6] = uVar6;
  in_RDI[7] = uVar7;
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PathConstraint::IsActive() const */

ulong __thiscall JPH::PathConstraint::IsActive(PathConstraint *this)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)(byte)this[0x1a];
  if (this[0x1a] != (PathConstraint)0x0) {
    lVar2 = *(long *)(this + 0x30);
    uVar3 = *(ulong *)(*(long *)(this + 0x28) + 0x48);
    if ((uVar3 == 0) || (*(int *)(uVar3 + 0x70) == -1)) {
      uVar3 = 0;
      if (*(long *)(lVar2 + 0x48) == 0) {
        return 0;
      }
      if (*(int *)(*(long *)(lVar2 + 0x48) + 0x70) == -1) {
        return 0;
      }
      cVar1 = *(char *)(lVar2 + 0x78);
    }
    else {
      cVar1 = *(char *)(lVar2 + 0x78);
    }
    if ((cVar1 == '\x02') || (uVar3 = 0, *(char *)(*(long *)(this + 0x28) + 0x78) == '\x02')) {
      return CONCAT71((int7)(uVar3 >> 8),*(long *)(this + 0x38) != 0);
    }
  }
  return uVar3;
}



/* JPH::PathConstraintSettings::~PathConstraintSettings() */

void __thiscall JPH::PathConstraintSettings::~PathConstraintSettings(PathConstraintSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00107740;
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00104733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::PathConstraint::~PathConstraint() */

void __thiscall JPH::PathConstraint::~PathConstraint(PathConstraint *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__PathConstraint_00107788;
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00104763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::PathConstraint::~PathConstraint() */

void __thiscall JPH::PathConstraint::~PathConstraint(PathConstraint *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__PathConstraint_00107788;
  plVar2 = *(long **)(this + 0x38);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001047aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00104796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PathConstraintSettings::~PathConstraintSettings() */

void __thiscall JPH::PathConstraintSettings::~PathConstraintSettings(PathConstraintSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00107740;
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x001047ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001047d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotionProperties::GetInverseInertiaForRotation(JPH::Mat44 const&) const */

Mat44 * JPH::MotionProperties::GetInverseInertiaForRotation(Mat44 *param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
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
  uVar5 = CONCAT44(_LC0,_UNK_00107848);
  fVar12 = fVar21 * local_98[0];
  fVar13 = fVar21 * local_98[1];
  fVar21 = fVar21 * local_98[2];
  fVar22 = fVar24 * local_98[8];
  fVar23 = fVar24 * local_98[9];
  fVar24 = fVar24 * local_98[10];
  *(undefined8 *)(param_1 + 0x30) = __LC1;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  auVar17._1_3_ = 0;
  auVar17[0] = bVar1;
  auVar17[4] = bVar1;
  auVar17._5_3_ = 0;
  auVar17[8] = bVar1;
  auVar17._9_3_ = 0;
  auVar17[0xc] = bVar1;
  auVar17._13_3_ = 0;
  auVar6._4_4_ = _UNK_00107874;
  auVar6._0_4_ = __LC13;
  auVar6._8_4_ = _UNK_00107878;
  auVar6._12_4_ = _UNK_0010787c;
  auVar17 = auVar17 & auVar6;
  uVar16 = -(uint)(auVar17._0_4_ == __LC13);
  uVar18 = -(uint)(auVar17._4_4_ == _UNK_00107874);
  uVar19 = -(uint)(auVar17._8_4_ == _UNK_00107878);
  uVar20 = -(uint)(auVar17._12_4_ == _UNK_0010787c);
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
  if (auVar5._0_4_ <= _LC14) {
    return;
  }
  fVar11 = _LC11 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC52 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00107884 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00107888 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010788c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC17 * fVar17 + _LC11);
  iVar14 = (int)(_LC17 * fVar18 + _LC11);
  iVar15 = (int)(_LC17 * fVar19 + _LC11);
  iVar16 = (int)(_LC17 * fVar20 + _LC11);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC20 * fVar4) - _LC22 * fVar4) - fVar4 * _LC24;
  fVar18 = ((fVar18 - _LC20 * fVar6) - _LC22 * fVar6) - fVar6 * _LC24;
  fVar7 = ((fVar19 - _LC20 * fVar7) - _LC22 * fVar7) - fVar7 * _LC24;
  fVar9 = ((fVar20 - _LC20 * fVar9) - _LC22 * fVar9) - fVar9 * _LC24;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC26 * fVar4 + _LC28) * fVar4 + _LC30) * fVar4 * fVar4 - _LC11 * fVar4) + _LC0;
  fVar20 = (((_LC26 * fVar22 + _LC28) * fVar22 + _LC30) * fVar22 * fVar22 - _LC11 * fVar22) + _LC0;
  fVar8 = (((_LC26 * fVar24 + _LC28) * fVar24 + _LC30) * fVar24 * fVar24 - _LC11 * fVar24) + _LC0;
  fVar10 = (((_LC26 * fVar26 + _LC28) * fVar26 + _LC30) * fVar26 * fVar26 - _LC11 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC33 * fVar4 + _LC35) * fVar4 + _LC37) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC33 * fVar22 + _LC35) * fVar22 + _LC37) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC33 * fVar24 + _LC35) * fVar24 + _LC37) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC33 * fVar26 + _LC35) * fVar26 + _LC37) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC38 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC52 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC38 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC52 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00107894 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00107884 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00107894 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00107884 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00107898 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00107888 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00107898 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00107888 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010789c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010788c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010789c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010788c ^
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
  if (auVar5._0_4_ <= _LC14) {
    return;
  }
  fVar11 = _LC40 * auVar5._0_4_;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar17 = (float)(_LC52 & (uint)fVar11 ^ (uint)fVar11);
  fVar18 = (float)(_UNK_00107884 & (uint)fVar11 ^ (uint)fVar11);
  fVar19 = (float)(_UNK_00107888 & (uint)fVar11 ^ (uint)fVar11);
  fVar20 = (float)(_UNK_0010788c & (uint)fVar11 ^ (uint)fVar11);
  iVar13 = (int)(_LC17 * fVar17 + _LC11);
  iVar14 = (int)(_LC17 * fVar18 + _LC11);
  iVar15 = (int)(_LC17 * fVar19 + _LC11);
  iVar16 = (int)(_LC17 * fVar20 + _LC11);
  fVar4 = (float)iVar13;
  fVar6 = (float)iVar14;
  fVar7 = (float)iVar15;
  fVar9 = (float)iVar16;
  fVar17 = ((fVar17 - _LC20 * fVar4) - _LC22 * fVar4) - fVar4 * _LC24;
  fVar18 = ((fVar18 - _LC20 * fVar6) - _LC22 * fVar6) - fVar6 * _LC24;
  fVar7 = ((fVar19 - _LC20 * fVar7) - _LC22 * fVar7) - fVar7 * _LC24;
  fVar9 = ((fVar20 - _LC20 * fVar9) - _LC22 * fVar9) - fVar9 * _LC24;
  fVar4 = fVar17 * fVar17;
  fVar22 = fVar18 * fVar18;
  fVar24 = fVar7 * fVar7;
  fVar26 = fVar9 * fVar9;
  fVar19 = (((_LC26 * fVar4 + _LC28) * fVar4 + _LC30) * fVar4 * fVar4 - _LC11 * fVar4) + _LC0;
  fVar20 = (((_LC26 * fVar22 + _LC28) * fVar22 + _LC30) * fVar22 * fVar22 - _LC11 * fVar22) + _LC0;
  fVar8 = (((_LC26 * fVar24 + _LC28) * fVar24 + _LC30) * fVar24 * fVar24 - _LC11 * fVar24) + _LC0;
  fVar10 = (((_LC26 * fVar26 + _LC28) * fVar26 + _LC30) * fVar26 * fVar26 - _LC11 * fVar26) + _LC0;
  uVar21 = (iVar13 << 0x1f) >> 0x1f;
  uVar23 = (iVar14 << 0x1f) >> 0x1f;
  uVar25 = (iVar15 << 0x1f) >> 0x1f;
  uVar27 = (iVar16 << 0x1f) >> 0x1f;
  fVar6 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar17 = ((_LC33 * fVar4 + _LC35) * fVar4 + _LC37) * fVar4 * fVar17 + fVar17;
  fVar18 = ((_LC33 * fVar22 + _LC35) * fVar22 + _LC37) * fVar22 * fVar18 + fVar18;
  fVar7 = ((_LC33 * fVar24 + _LC35) * fVar24 + _LC37) * fVar24 * fVar7 + fVar7;
  fVar9 = ((_LC33 * fVar26 + _LC35) * fVar26 + _LC37) * fVar26 * fVar9 + fVar9;
  auVar1._8_4_ = fVar2;
  auVar1._0_8_ = param_1;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  auVar5 = divps(auVar1,auVar5);
  fVar4 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar2 = (float)(__LC38 & (((uint)fVar17 & uVar21 | ~uVar21 & (uint)fVar19) ^
                           _LC52 & iVar13 << 0x1e ^ iVar13 << 0x1f) |
                 ~__LC38 & (uint)(auVar5._0_4_ *
                                 (float)(((uint)fVar11 ^ iVar13 << 0x1e) & _LC52 ^
                                        ((uint)fVar19 & uVar21 | ~uVar21 & (uint)fVar17))));
  fVar18 = (float)(_UNK_00107894 &
                   (((uint)fVar18 & uVar23 | ~uVar23 & (uint)fVar20) ^
                   _UNK_00107884 & iVar14 << 0x1e ^ iVar14 << 0x1f) |
                  ~_UNK_00107894 &
                  (uint)(auVar5._4_4_ *
                        (float)(((uint)fVar11 ^ iVar14 << 0x1e) & _UNK_00107884 ^
                               ((uint)fVar20 & uVar23 | ~uVar23 & (uint)fVar18))));
  fVar7 = (float)(_UNK_00107898 &
                  (((uint)fVar7 & uVar25 | ~uVar25 & (uint)fVar8) ^
                  _UNK_00107888 & iVar15 << 0x1e ^ iVar15 << 0x1f) |
                 ~_UNK_00107898 &
                 (uint)(auVar5._8_4_ *
                       (float)(((uint)fVar11 ^ iVar15 << 0x1e) & _UNK_00107888 ^
                              ((uint)fVar8 & uVar25 | ~uVar25 & (uint)fVar7))));
  fVar9 = (float)(_UNK_0010789c &
                  (((uint)fVar9 & uVar27 | ~uVar27 & (uint)fVar10) ^
                  _UNK_0010788c & iVar16 << 0x1e ^ iVar16 << 0x1f) |
                 ~_UNK_0010789c &
                 (uint)(auVar5._12_4_ *
                       (float)(((uint)fVar11 ^ iVar16 << 0x1e) & _UNK_0010788c ^
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
    uStack_40 = CONCAT44(_LC0,_UNK_00107848);
    local_48 = __LC1;
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
LAB_0010538f:
    if (fVar4 != 0.0) {
      param_1[0xe] = 0.0;
      fVar7 = fVar7 / fVar4;
      param_1[0xd] = param_7;
      goto LAB_001053b1;
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
      uStack_40 = CONCAT44(_LC0,_UNK_00107848);
      local_58._4_4_ = fVar6 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar6 * fVar15 + fVar16 * fVar8;
      local_48 = __LC1;
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
        uStack_40 = CONCAT44(_LC0,_UNK_00107848);
        local_48 = __LC1;
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
        if (cVar1 != '\0') goto LAB_00105618;
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
      goto LAB_0010538f;
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
      uStack_40 = CONCAT44(_LC0,_UNK_00107848);
      local_48 = __LC1;
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
      goto LAB_0010538f;
    }
  }
LAB_00105618:
  param_1[0xf] = 0.0;
  fVar7 = 0.0;
LAB_001053b1:
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
    uStack_40 = CONCAT44(_LC0,_UNK_00107848);
    local_48 = __LC1;
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
LAB_00105e38:
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
          fVar6 = fVar6 * __LC41;
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
      goto LAB_0010612e;
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
      uStack_40 = CONCAT44(_LC0,_UNK_00107848);
      local_58._4_4_ = fVar7 * fVar16 - fVar15 * fVar8;
      local_58._0_4_ = fVar7 * fVar15 + fVar16 * fVar8;
      local_48 = __LC1;
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
        uStack_40 = CONCAT44(_LC0,_UNK_00107848);
        local_48 = __LC1;
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
        if (cVar1 != '\0') goto LAB_00106120;
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
      goto LAB_00105e38;
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
      uStack_40 = CONCAT44(_LC0,_UNK_00107848);
      local_48 = __LC1;
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
      goto LAB_00105e38;
    }
  }
LAB_00106120:
  param_2[0xc] = 0.0;
  param_2[0xf] = 0.0;
LAB_0010612e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::DualAxisConstraintPart::CalculateLagrangeMultiplier(JPH::Body const&, JPH::Body const&,
   JPH::Vec3, JPH::Vec3, JPH::Vector<2u>&) const */

void JPH::DualAxisConstraintPart::CalculateLagrangeMultiplier
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,float param_4,
               float *param_1,long param_2,long param_7,undefined8 *param_8)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = (float)((ulong)param_1_00 >> 0x20);
  cVar1 = *(char *)(param_7 + 0x78);
  pfVar2 = *(float **)(param_7 + 0x48);
  fVar6 = 0.0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (cVar1 != '\0') {
    fVar6 = *pfVar2;
    fVar7 = pfVar2[1];
    fVar8 = pfVar2[2];
  }
  pfVar3 = *(float **)(param_2 + 0x48);
  if (*(char *)(param_2 + 0x78) == '\0') {
    fVar6 = 0.0 - fVar6;
    fVar7 = 0.0 - fVar7;
    fVar8 = 0.0 - fVar8;
    fVar9 = param_2_00 * fVar8 + fVar9 * fVar7 + (float)param_1_00 * fVar6 + 0.0;
    auVar4 = SUB1612((undefined1  [16])0x0,0);
  }
  else {
    fVar6 = *pfVar3 - fVar6;
    fVar7 = pfVar3[1] - fVar7;
    fVar8 = pfVar3[2] - fVar8;
    fVar9 = param_2_00 * fVar8 + fVar9 * fVar7 + (float)param_1_00 * fVar6 + 0.0;
    auVar4 = SUB1612(*(undefined1 (*) [16])(pfVar3 + 4),0);
  }
  auVar5 = SUB1612((undefined1  [16])0x0,0);
  if (cVar1 != '\0') {
    auVar5 = SUB1612(*(undefined1 (*) [16])(pfVar2 + 4),0);
  }
  fVar9 = (auVar4._8_4_ * param_1[2] + auVar4._4_4_ * param_1[1] + *param_1 * auVar4._0_4_ + 0.0 +
          fVar9) - (auVar5._8_4_ * param_1[10] +
                   auVar5._4_4_ * param_1[9] + param_1[8] * auVar5._0_4_ + 0.0);
  auVar4 = SUB1612((undefined1  [16])0x0,0);
  if (*(char *)(param_2 + 0x78) != '\0') {
    auVar4 = SUB1612(*(undefined1 (*) [16])(pfVar3 + 4),0);
  }
  auVar5 = SUB1612((undefined1  [16])0x0,0);
  if (cVar1 != '\0') {
    auVar5 = SUB1612(*(undefined1 (*) [16])(pfVar2 + 4),0);
  }
  fVar6 = (auVar4._8_4_ * param_1[6] + auVar4._4_4_ * param_1[5] + param_1[4] * auVar4._0_4_ + 0.0 +
          fVar8 * param_4 + (float)((ulong)param_3 >> 0x20) * fVar7 + (float)param_3 * fVar6 + 0.0)
          - (auVar5._8_4_ * param_1[0xe] +
            auVar5._4_4_ * param_1[0xd] + param_1[0xc] * auVar5._0_4_ + 0.0);
  *param_8 = CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(param_1 + 0x22) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * fVar9 + 0.0,
                      fVar6 * (float)*(undefined8 *)(param_1 + 0x22) +
                      (float)*(undefined8 *)(param_1 + 0x20) * fVar9 + 0.0);
  return;
}



/* JPH::HingeRotationConstraintPart::CalculateConstraintProperties(JPH::Body const&, JPH::Mat44
   const&, JPH::Vec3, JPH::Body const&, JPH::Mat44 const&, JPH::Vec3) */

void JPH::HingeRotationConstraintPart::CalculateConstraintProperties
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               float *param_1,long param_2,undefined8 param_7,long param_8)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar25;
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 local_148 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68 [18];
  long local_20;
  
  fVar30 = (float)param_4;
  fVar22 = (float)((ulong)param_3 >> 0x20);
  fVar25 = (float)param_3;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = param_1_00;
  fVar28 = *param_1;
  fVar16 = param_1[1];
  *(undefined8 *)(param_1 + 2) = param_2_00;
  uVar6 = _LC39;
  fVar17 = param_1[2];
  local_148._8_8_ = param_4;
  local_148._0_8_ = param_3;
  fVar18 = *param_1;
  fVar23 = param_1[1];
  fVar24 = param_1[2];
  fVar8 = fVar30 * fVar17 + fVar22 * fVar16 + fVar25 * fVar28 + 0.0;
  if (fVar8 <= _LC42) {
    auVar10._0_4_ = fVar25 - fVar8 * fVar18;
    auVar10._4_4_ = fVar22 - fVar8 * fVar23;
    auVar10._8_4_ = fVar30 - fVar8 * fVar24;
    auVar10._12_4_ = (float)((ulong)param_4 >> 0x20) - fVar8 * param_1[3];
    fVar8 = auVar10._8_4_ * auVar10._8_4_ +
            auVar10._0_4_ * auVar10._0_4_ + 0.0 + auVar10._4_4_ * auVar10._4_4_;
    if (fVar8 < _LC14) {
      if ((float)((uint)fVar16 & _LC43) < (float)((uint)fVar28 & _LC43)) {
        auVar31._4_4_ = 0;
        auVar31._0_4_ = fVar17;
        auVar31._12_4_ = (uint)fVar28 ^ _LC39;
        auVar31._8_4_ = (uint)fVar28 ^ _LC39;
        auVar15._0_4_ = SQRT(fVar28 * fVar28 + fVar17 * fVar17);
        auVar15._4_4_ = auVar15._0_4_;
        auVar15._8_4_ = auVar15._0_4_;
        auVar15._12_4_ = auVar15._0_4_;
        auVar10 = divps(auVar31,auVar15);
      }
      else {
        auVar5._8_4_ = (uint)fVar16 ^ _LC39;
        auVar5._4_4_ = (uint)fVar16 ^ _LC39;
        auVar5._0_4_ = fVar17;
        auVar5._12_4_ = 0;
        auVar14._0_4_ = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
        auVar14._4_4_ = auVar14._0_4_;
        auVar14._8_4_ = auVar14._0_4_;
        auVar14._12_4_ = auVar14._0_4_;
        auVar10 = divps(auVar5 << 0x20,auVar14);
      }
      fVar8 = auVar10._0_4_ * auVar10._0_4_ + 0.0 + auVar10._4_4_ * auVar10._4_4_ +
              auVar10._8_4_ * auVar10._8_4_;
    }
    auVar12._0_4_ = SQRT(fVar8);
    auVar12._4_4_ = auVar12._0_4_;
    auVar12._8_4_ = auVar12._0_4_;
    auVar12._12_4_ = auVar12._0_4_;
    auVar10 = divps(auVar10,auVar12);
    auVar29._0_4_ = auVar10._0_4_ * _LC47 + _LC45 * fVar18;
    auVar29._4_4_ = auVar10._4_4_ * _LC47 + _LC45 * fVar23;
    auVar29._8_4_ = auVar10._8_4_ * _LC47 + _LC45 * fVar24;
    auVar29._12_4_ = auVar10._12_4_ * _LC47 + _LC45 * param_1[3];
    auVar13._0_4_ =
         SQRT(auVar29._8_4_ * auVar29._8_4_ +
              auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_ + 0.0);
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    local_148 = divps(auVar29,auVar13);
    fVar25 = local_148._0_4_;
    fVar22 = local_148._4_4_;
    fVar30 = local_148._8_4_;
  }
  fVar28 = local_148._0_4_;
  fVar16 = local_148._4_4_;
  fVar17 = local_148._8_4_;
  if ((float)(_LC43 & (uint)fVar28) <= (float)((uint)fVar16 & _LC43)) {
    auVar11._0_8_ = local_148._8_8_ << 0x20;
    auVar11._12_4_ = (uint)fVar16 ^ _LC39;
    auVar11._8_4_ = (uint)fVar16 ^ _LC39;
    auVar21._0_4_ = SQRT(fVar16 * fVar16 + fVar17 * fVar17);
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar10 = divps(auVar11,auVar21);
  }
  else {
    auVar9._12_4_ = (uint)fVar28 ^ _LC39;
    auVar9._8_4_ = (uint)fVar28 ^ _LC39;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fVar17;
    fVar28 = SQRT(fVar28 * fVar28 + fVar17 * fVar17);
    auVar19._4_4_ = fVar28;
    auVar19._0_4_ = fVar28;
    auVar19._8_4_ = fVar28;
    auVar19._12_4_ = fVar28;
    auVar10 = divps(auVar9,auVar19);
  }
  fVar28 = auVar10._0_4_;
  fVar16 = auVar10._4_4_;
  fVar17 = auVar10._8_4_;
  cVar3 = *(char *)(param_2 + 0x78);
  *(undefined1 (*) [16])(param_1 + 4) = auVar10;
  fVar8 = fVar16 * fVar25 - fVar22 * fVar28;
  fVar22 = fVar17 * fVar22 - fVar30 * fVar16;
  fVar25 = fVar28 * fVar30 - fVar25 * fVar17;
  param_1[8] = fVar22;
  param_1[9] = fVar25;
  param_1[10] = fVar8;
  param_1[0xb] = fVar8;
  if (cVar3 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_e8);
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0.0;
    fStack_d4 = 0.0;
    fStack_d0 = 0.0;
    local_c8._0_12_ = ZEXT812(0);
    fStack_cc = 0.0;
    local_c8._12_4_ = 0;
    local_e8 = 0.0;
    fStack_e4 = fStack_d4;
    fStack_e0 = fStack_d0;
    fStack_dc = fStack_cc;
  }
  cVar3 = *(char *)(param_8 + 0x78);
  param_1[0xc] = local_e8;
  param_1[0xd] = fStack_e4;
  param_1[0xe] = fStack_e0;
  param_1[0xf] = fStack_dc;
  param_1[0x10] = local_d8;
  param_1[0x11] = fStack_d4;
  param_1[0x12] = fStack_d0;
  param_1[0x13] = fStack_cc;
  *(undefined1 (*) [16])(param_1 + 0x14) = local_c8;
  *(undefined8 *)(param_1 + 0x18) = local_b8;
  *(undefined8 *)(param_1 + 0x1a) = uStack_b0;
  if (cVar3 == '\x02') {
    MotionProperties::GetInverseInertiaForRotation((Mat44 *)&local_a8);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0.0;
    fStack_94 = 0.0;
    fStack_90 = 0.0;
    local_88._0_12_ = ZEXT812(0);
    fStack_8c = 0.0;
    local_88._12_4_ = 0;
    local_a8 = 0.0;
    fStack_a4 = fStack_94;
    fStack_a0 = fStack_90;
    fStack_9c = fStack_8c;
  }
  *(undefined8 *)(param_1 + 0x28) = local_78;
  *(undefined8 *)(param_1 + 0x2a) = uStack_70;
  lVar7 = 0;
  param_1[0x1c] = local_a8;
  param_1[0x1d] = fStack_a4;
  param_1[0x1e] = fStack_a0;
  param_1[0x1f] = fStack_9c;
  param_1[0x20] = local_98;
  param_1[0x21] = fStack_94;
  param_1[0x22] = fStack_90;
  param_1[0x23] = fStack_8c;
  *(undefined1 (*) [16])(param_1 + 0x24) = local_88;
  fVar30 = fVar22 * fVar23 - fVar25 * fVar18;
  fVar25 = fVar25 * fVar24 - fVar8 * fVar23;
  fVar22 = fVar8 * fVar18 - fVar22 * fVar24;
  fVar8 = fVar28 * fVar23 - fVar16 * fVar18;
  fVar16 = fVar16 * fVar24 - fVar17 * fVar23;
  fVar28 = fVar17 * fVar18 - fVar28 * fVar24;
  param_1[0x30] = fVar25;
  param_1[0x31] = fVar22;
  param_1[0x32] = fVar30;
  param_1[0x33] = fVar30;
  param_1[0x2c] = fVar16;
  param_1[0x2d] = fVar28;
  param_1[0x2e] = fVar8;
  param_1[0x2f] = fVar8;
  do {
    pfVar1 = (float *)((long)param_1 + lVar7 + 0x70);
    fVar17 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar23 = pfVar1[3];
    pfVar2 = (float *)((long)param_1 + lVar7 + 0x30);
    fVar24 = pfVar2[1];
    fVar26 = pfVar2[2];
    fVar27 = pfVar2[3];
    *(float *)((long)local_68 + lVar7) = *pfVar1 + *pfVar2;
    *(float *)((long)local_68 + lVar7 + 4) = fVar17 + fVar24;
    *(float *)((long)local_68 + lVar7 + 8) = fVar18 + fVar26;
    *(float *)((long)local_68 + lVar7 + 0xc) = fVar23 + fVar27;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x40);
  fVar17 = local_68[0] * fVar16 + fVar28 * local_68[4] + fVar8 * local_68[8];
  fVar23 = local_68[1] * fVar16 + fVar28 * local_68[5] + fVar8 * local_68[9];
  fVar26 = local_68[2] * fVar16 + fVar28 * local_68[6] + fVar8 * local_68[10];
  fVar32 = fVar8 * fVar26 + fVar23 * fVar28 + fVar16 * fVar17 + 0.0;
  fVar18 = local_68[0] * fVar25 + fVar22 * local_68[4] + fVar30 * local_68[8];
  fVar24 = local_68[1] * fVar25 + fVar22 * local_68[5] + fVar30 * local_68[9];
  fVar27 = local_68[2] * fVar25 + fVar22 * local_68[6] + fVar30 * local_68[10];
  fVar28 = fVar8 * fVar27 + fVar28 * fVar24 + fVar16 * fVar18 + 0.0;
  fVar16 = fVar26 * fVar30 + fVar23 * fVar22 + fVar17 * fVar25 + 0.0;
  auVar20._0_4_ = fVar27 * fVar30 + fVar22 * fVar24 + fVar25 * fVar18 + 0.0;
  fVar17 = auVar20._0_4_ * fVar32 - fVar16 * fVar28;
  if (fVar17 == 0.0) {
    param_1[0x38] = 0.0;
    param_1[0x39] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  }
  else {
    auVar20._12_4_ = fVar32;
    auVar20._8_4_ = (uint)fVar28 ^ uVar6;
    auVar20._4_4_ = (uint)fVar16 ^ uVar6;
    auVar4._4_4_ = fVar17;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar17;
    auVar4._12_4_ = fVar17;
    auVar10 = divps(auVar20,auVar4);
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar10;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::HingeRotationConstraintPart::SolveVelocityConstraint(JPH::Body&, JPH::Body&) */

void __thiscall
JPH::HingeRotationConstraintPart::SolveVelocityConstraint
          (HingeRotationConstraintPart *this,Body *param_1,Body *param_2)

{
  Body BVar1;
  Body BVar2;
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
  float fVar15;
  undefined1 auVar14 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  
  BVar1 = param_2[0x78];
  lVar3 = *(long *)(param_2 + 0x48);
  auVar18 = SUB1612((undefined1  [16])0x0,0);
  if (BVar1 != (Body)0x0) {
    auVar18 = SUB1612(*(undefined1 (*) [16])(lVar3 + 0x10),0);
  }
  BVar2 = param_1[0x78];
  auVar14 = SUB1612((undefined1  [16])0x0,0);
  lVar4 = *(long *)(param_1 + 0x48);
  if (BVar2 != (Body)0x0) {
    auVar14 = SUB1612(*(undefined1 (*) [16])(lVar4 + 0x10),0);
  }
  fVar13 = auVar14._0_4_ - auVar18._0_4_;
  fVar15 = auVar14._4_4_ - auVar18._4_4_;
  fVar16 = auVar14._8_4_ - auVar18._8_4_;
  fVar17 = *(float *)(this + 0xb8) * fVar16 +
           *(float *)(this + 0xb4) * fVar15 + *(float *)(this + 0xb0) * fVar13 + 0.0;
  fVar13 = fVar16 * *(float *)(this + 200) +
           fVar15 * *(float *)(this + 0xc4) + fVar13 * *(float *)(this + 0xc0) + 0.0;
  fVar15 = fVar17 * (float)*(undefined8 *)(this + 0xd0) + 0.0 +
           fVar13 * (float)*(undefined8 *)(this + 0xd8);
  fVar16 = fVar17 * (float)((ulong)*(undefined8 *)(this + 0xd0) >> 0x20) + 0.0 +
           fVar13 * (float)((ulong)*(undefined8 *)(this + 0xd8) >> 0x20);
  *(ulong *)(this + 0xe0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0xe0) >> 0x20) + fVar16,
                (float)*(undefined8 *)(this + 0xe0) + fVar15);
  if (*(float *)(this + 0xd8) * fVar13 + *(float *)(this + 0xd0) * fVar17 + 0.0 != 0.0 ||
      fVar13 * *(float *)(this + 0xdc) + fVar17 * *(float *)(this + 0xd4) + 0.0 != 0.0) {
    fVar13 = fVar16 * *(float *)(this + 0xc0) + fVar15 * *(float *)(this + 0xb0);
    fVar17 = fVar16 * *(float *)(this + 0xc4) + fVar15 * *(float *)(this + 0xb4);
    fVar15 = fVar16 * *(float *)(this + 200) + fVar15 * *(float *)(this + 0xb8);
    if (BVar2 == (Body)0x2) {
      fVar16 = *(float *)(this + 0x34);
      fVar5 = *(float *)(this + 0x38);
      fVar6 = *(float *)(this + 0x3c);
      fVar7 = *(float *)(this + 0x44);
      fVar8 = *(float *)(this + 0x48);
      fVar9 = *(float *)(this + 0x4c);
      fVar10 = *(float *)(this + 0x54);
      fVar11 = *(float *)(this + 0x58);
      fVar12 = *(float *)(this + 0x5c);
      *(float *)(lVar4 + 0x10) =
           *(float *)(lVar4 + 0x10) -
           (fVar13 * *(float *)(this + 0x30) + fVar17 * *(float *)(this + 0x40) +
           fVar15 * *(float *)(this + 0x50));
      *(float *)(lVar4 + 0x14) =
           *(float *)(lVar4 + 0x14) - (fVar13 * fVar16 + fVar17 * fVar7 + fVar15 * fVar10);
      *(float *)(lVar4 + 0x18) =
           *(float *)(lVar4 + 0x18) - (fVar13 * fVar5 + fVar17 * fVar8 + fVar15 * fVar11);
      *(float *)(lVar4 + 0x1c) =
           *(float *)(lVar4 + 0x1c) - (fVar13 * fVar6 + fVar17 * fVar9 + fVar15 * fVar12);
    }
    if (BVar1 == (Body)0x2) {
      fVar16 = *(float *)(this + 0x74);
      fVar5 = *(float *)(this + 0x78);
      fVar6 = *(float *)(this + 0x7c);
      fVar7 = *(float *)(this + 0x84);
      fVar8 = *(float *)(this + 0x88);
      fVar9 = *(float *)(this + 0x8c);
      fVar10 = *(float *)(this + 0x94);
      fVar11 = *(float *)(this + 0x98);
      fVar12 = *(float *)(this + 0x9c);
      *(float *)(lVar3 + 0x10) =
           fVar15 * *(float *)(this + 0x90) +
           fVar13 * *(float *)(this + 0x70) + fVar17 * *(float *)(this + 0x80) +
           *(float *)(lVar3 + 0x10);
      *(float *)(lVar3 + 0x14) =
           fVar15 * fVar10 + fVar13 * fVar16 + fVar17 * fVar7 + *(float *)(lVar3 + 0x14);
      *(float *)(lVar3 + 0x18) =
           fVar15 * fVar11 + fVar13 * fVar5 + fVar17 * fVar8 + *(float *)(lVar3 + 0x18);
      *(float *)(lVar3 + 0x1c) =
           fVar15 * fVar12 + fVar13 * fVar6 + fVar17 * fVar9 + *(float *)(lVar3 + 0x1c);
      return;
    }
  }
  return;
}



/* JPH::HingeRotationConstraintPart::SolvePositionConstraint(JPH::Body&, JPH::Body&, float) const */

ulong __thiscall
JPH::HingeRotationConstraintPart::SolvePositionConstraint
          (HingeRotationConstraintPart *this,Body *param_1,Body *param_2,float param_3)

{
  byte bVar1;
  undefined8 in_RAX;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(this + 0x18) * *(float *)(this + 8) +
          *(float *)(this + 0x14) * *(float *)(this + 4) +
          *(float *)(this + 0x10) * *(float *)this + 0.0;
  fVar3 = *(float *)(this + 8) * *(float *)(this + 0x28) +
          *(float *)(this + 4) * *(float *)(this + 0x24) +
          *(float *)this * *(float *)(this + 0x20) + 0.0;
  uVar2 = CONCAT71((int7)((ulong)in_RAX >> 8),NAN(fVar3)) & 0xffffffff;
  if (fVar3 != 0.0) {
    uVar2 = 1;
  }
  bVar1 = (byte)uVar2 | fVar6 != 0.0;
  uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar1);
  if (bVar1 != 0) {
    fVar4 = (*(float *)(this + 0xd8) * fVar3 + *(float *)(this + 0xd0) * fVar6 + 0.0) *
            (float)((uint)param_3 ^ _LC39);
    fVar3 = (float)((uint)param_3 ^ _LC39) *
            (fVar3 * *(float *)(this + 0xdc) + fVar6 * *(float *)(this + 0xd4) + 0.0);
    fVar6 = fVar4 * *(float *)(this + 0xb0) + fVar3 * *(float *)(this + 0xc0);
    fVar5 = fVar4 * *(float *)(this + 0xb4) + fVar3 * *(float *)(this + 0xc4);
    fVar3 = fVar4 * *(float *)(this + 0xb8) + fVar3 * *(float *)(this + 200);
    if (param_1[0x78] == (Body)0x2) {
      Body::SubRotationStep
                (CONCAT44(fVar6 * *(float *)(this + 0x34) + fVar5 * *(float *)(this + 0x44) +
                          fVar3 * *(float *)(this + 0x54),
                          fVar6 * *(float *)(this + 0x30) + fVar5 * *(float *)(this + 0x40) +
                          fVar3 * *(float *)(this + 0x50)),
                 CONCAT44(fVar6 * *(float *)(this + 0x3c) + fVar5 * *(float *)(this + 0x4c) +
                          fVar3 * *(float *)(this + 0x5c),
                          fVar6 * *(float *)(this + 0x38) + fVar5 * *(float *)(this + 0x48) +
                          fVar3 * *(float *)(this + 0x58)),param_1);
      uVar2 = (ulong)bVar1;
    }
    if (param_2[0x78] == (Body)0x2) {
      Body::AddRotationStep
                (CONCAT44(fVar6 * *(float *)(this + 0x74) + fVar5 * *(float *)(this + 0x84) +
                          fVar3 * *(float *)(this + 0x94),
                          fVar6 * *(float *)(this + 0x70) + fVar5 * *(float *)(this + 0x80) +
                          fVar3 * *(float *)(this + 0x90)),
                 CONCAT44(fVar6 * *(float *)(this + 0x7c) + fVar5 * *(float *)(this + 0x8c) +
                          fVar3 * *(float *)(this + 0x9c),
                          fVar6 * *(float *)(this + 0x78) + fVar5 * *(float *)(this + 0x88) +
                          fVar3 * *(float *)(this + 0x98)),param_2);
      uVar2 = uVar2 & 0xff;
    }
  }
  return uVar2;
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
  fVar11 = (float)(__LC50 ^ *(uint *)(param_2 + 0x10));
  fVar14 = (float)(_UNK_001078c4 ^ *(uint *)(param_2 + 0x14));
  fVar15 = (float)(_UNK_001078c8 ^ *(uint *)(param_2 + 0x18));
  fVar17 = (float)(_UNK_001078cc ^ *(uint *)(param_2 + 0x1c));
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
                 (uint)fVar16 & _LC52);
  fVar9 = (float)((uint)((fVar14 * fVar7 - fVar21 * fVar15) + fVar20 * fVar17 + fVar19 * fVar11) ^
                 (uint)fVar16 & _LC52);
  fVar7 = (float)((uint)(((fVar15 * fVar7 + fVar21 * fVar14) - fVar20 * fVar11) + fVar19 * fVar17) ^
                 (uint)fVar16 & _LC52);
  fVar16 = (float)((uint)fVar16 ^ (uint)fVar16 & _LC52);
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar7 = fVar7 + fVar7;
  auVar12._4_4_ = -(uint)(fVar9 == 0.0);
  auVar12._0_4_ = -(uint)(fVar8 == 0.0);
  auVar12._8_4_ = -(uint)(fVar7 == 0.0);
  auVar12._12_4_ = -(uint)(fVar16 + fVar16 == 0.0);
  uVar3 = movmskps(fVar13,auVar12);
  if ((~uVar3 & 7) != 0) {
    fVar16 = (float)(param_3 ^ _LC39);
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



/* JPH::GetRTTIOfType(JPH::PathConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC54;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PathConstraint::~PathConstraint() */

void __thiscall JPH::PathConstraint::~PathConstraint(PathConstraint *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PathConstraintSettings::~PathConstraintSettings() */

void __thiscall JPH::PathConstraintSettings::~PathConstraintSettings(PathConstraintSettings *this)

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




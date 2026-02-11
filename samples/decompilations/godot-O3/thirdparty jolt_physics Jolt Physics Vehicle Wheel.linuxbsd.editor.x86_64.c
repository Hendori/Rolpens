
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::WheelSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* JPH::WheelSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::WheelSettings::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::WheelSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::WheelSettings::SaveBinaryState(WheelSettings *this,StreamOut *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  JPH::SpringSettings::SaveBinaryState((StreamOut *)(this + 0x7c));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x88,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x8c,4);
                    /* WARNING: Could not recover jumptable at 0x00100134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  return;
}



/* JPH::WheelSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::WheelSettings::RestoreBinaryState(WheelSettings *this,StreamIn *param_1)

{
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x10,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x30,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x40,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x60,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x50,0xc);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x70,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x74,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x78,4);
  JPH::SpringSettings::RestoreBinaryState((StreamIn *)(this + 0x7c));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x88,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x8c,4);
                    /* WARNING: Could not recover jumptable at 0x00100244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x90,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::WheelSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*Allocate)(0xa0);
  uVar3 = _LC3;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar4 + 4) = (undefined1  [16])0x0;
  uVar2 = _UNK_00100ed8;
  uVar1 = __LC0;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  uVar2 = _UNK_00100ee8;
  uVar1 = __LC1;
  *puVar4 = &PTR_GetRTTI_00100e98;
  puVar4[8] = uVar1;
  puVar4[9] = uVar2;
  puVar4[10] = uVar1;
  puVar4[0xb] = uVar2;
  uVar2 = _UNK_00100ef8;
  uVar1 = __LC2;
  puVar4[0xe] = uVar3;
  puVar4[0xc] = uVar1;
  puVar4[0xd] = uVar2;
  uVar2 = _UNK_00100f08;
  uVar1 = __LC5;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  *(undefined1 *)((long)puVar4 + 0x7c) = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0;
  puVar4[0x10] = uVar1;
  puVar4[0x11] = uVar2;
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
        auVar8._4_4_ = _UNK_00100f14;
        auVar8._0_4_ = __LC8;
        auVar8._8_4_ = _UNK_00100f18;
        auVar8._12_4_ = _UNK_00100f1c;
        auVar21 = auVar21 & auVar8;
        bVar2 = auVar21._4_4_ == _UNK_00100f14;
        bVar3 = auVar21._8_4_ == _UNK_00100f18;
        bVar4 = auVar21._12_4_ == _UNK_00100f1c;
        *param_2 = (float)((uint)(fVar14 - fVar26 * local_18) & -(uint)(auVar21._0_4_ == __LC8));
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
          iVar12 = _UNK_00100f1c;
          iVar11 = _UNK_00100f18;
          iVar10 = _UNK_00100f14;
          iVar9 = __LC8;
          param_4 = param_4 - fVar14;
          if (param_4 != 0.0) {
            bVar1 = *(byte *)((long)param_2 + 0x7a);
            fVar27 = fVar27 * param_4;
            auVar7._4_4_ = _UNK_00100f14;
            auVar7._0_4_ = __LC8;
            auVar7._8_4_ = _UNK_00100f18;
            auVar7._12_4_ = _UNK_00100f1c;
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
            bVar2 = auVar25._4_4_ == _UNK_00100f14;
            bVar3 = auVar25._8_4_ == _UNK_00100f18;
            bVar4 = auVar25._12_4_ == _UNK_00100f1c;
            *param_2 = (float)((uint)(fVar16 - fVar27 * local_18) & -(uint)(auVar25._0_4_ == __LC8))
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
        auVar6._4_4_ = _UNK_00100f14;
        auVar6._0_4_ = __LC8;
        auVar6._8_4_ = _UNK_00100f18;
        auVar6._12_4_ = _UNK_00100f1c;
        auVar20 = auVar20 & auVar6;
        bVar2 = auVar20._4_4_ == _UNK_00100f14;
        bVar3 = auVar20._8_4_ == _UNK_00100f18;
        bVar4 = auVar20._12_4_ == _UNK_00100f1c;
        *param_2 = (float)(-(uint)(auVar20._0_4_ == __LC8) & (uint)(*param_2 - fVar26 * local_18));
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
  auVar5._4_4_ = _UNK_00100f14;
  auVar5._0_4_ = __LC8;
  auVar5._8_4_ = _UNK_00100f18;
  auVar5._12_4_ = _UNK_00100f1c;
  auVar24 = auVar24 & auVar5;
  bVar2 = auVar24._4_4_ == _UNK_00100f14;
  bVar3 = auVar24._8_4_ == _UNK_00100f18;
  bVar4 = auVar24._12_4_ == _UNK_00100f1c;
  *param_8 = (float)((uint)fVar14 & -(uint)(auVar24._0_4_ == __LC8));
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



/* JPH::WheelSettings::GetRTTI() const */

undefined1 * JPH::WheelSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettings*)::rtti,"WheelSettings",0xa0,
                      GetRTTIOfType(JPH::WheelSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettings*)::rtti);
      return GetRTTIOfType(JPH::WheelSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettings*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::WheelSettings*) */

undefined1 * JPH::GetRTTIOfType(WheelSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::WheelSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::WheelSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::WheelSettings*)::rtti,"WheelSettings",0xa0,
                      GetRTTIOfType(JPH::WheelSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::WheelSettings*)::{lambda(void*)#1}::_FUN,
                      WheelSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::WheelSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::WheelSettings*)::rtti);
      return GetRTTIOfType(JPH::WheelSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::WheelSettings*)::rtti;
}



/* JPH::WheelSettings::CastTo(JPH::RTTI const*) const */

void JPH::WheelSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((WheelSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::Wheel::Wheel(JPH::WheelSettings const&) */

void __thiscall JPH::Wheel::Wheel(Wheel *this,WheelSettings *param_1)

{
  *(WheelSettings **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__Wheel_00100e78;
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(this + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined1 (*) [16])(this + 0x84) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x104) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x144) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x184) = (undefined1  [16])0x0;
  return;
}



/* JPH::Wheel::SolveLongitudinalConstraintPart(JPH::VehicleConstraint const&, float, float) */

void JPH::Wheel::SolveLongitudinalConstraintPart
               (VehicleConstraint *param_1,float param_2,float param_3)

{
  long in_RSI;
  
  AxisConstraintPart::SolveVelocityConstraint
            (CONCAT44(0.0 - *(float *)(param_1 + 100),0.0 - *(float *)(param_1 + 0x60)),
             CONCAT44(0.0 - *(float *)(param_1 + 0x6c),0.0 - *(float *)(param_1 + 0x68)),param_2,
             param_3,param_1 + 0x114,*(undefined8 *)(*(long *)(in_RSI + 0x50) + 0x48),
             *(undefined1 *)(*(long *)(in_RSI + 0x50) + 0x78),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),
             *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x78));
  return;
}



/* JPH::Wheel::SolveLateralConstraintPart(JPH::VehicleConstraint const&, float, float) */

void JPH::Wheel::SolveLateralConstraintPart(VehicleConstraint *param_1,float param_2,float param_3)

{
  long in_RSI;
  
  AxisConstraintPart::SolveVelocityConstraint
            (CONCAT44(0.0 - *(float *)(param_1 + 0x74),0.0 - *(float *)(param_1 + 0x70)),
             CONCAT44(0.0 - *(float *)(param_1 + 0x7c),0.0 - *(float *)(param_1 + 0x78)),param_2,
             param_3,param_1 + 0x154,*(undefined8 *)(*(long *)(in_RSI + 0x50) + 0x48),
             *(undefined1 *)(*(long *)(in_RSI + 0x50) + 0x78),
             *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48),
             *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x78));
  return;
}



/* JPH::WheelSettings::~WheelSettings() */

void __thiscall JPH::WheelSettings::~WheelSettings(WheelSettings *this)

{
  return;
}



/* JPH::WheelSettings::~WheelSettings() */

void __thiscall JPH::WheelSettings::~WheelSettings(WheelSettings *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00100e78;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00100cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Wheel_00100e78;
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::WheelSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC11;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Wheel::~Wheel() */

void __thiscall JPH::Wheel::~Wheel(Wheel *this)

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
/* JPH::WheelSettings::~WheelSettings() */

void __thiscall JPH::WheelSettings::~WheelSettings(WheelSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



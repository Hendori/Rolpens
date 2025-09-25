/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::MotorcycleControllerSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::MotorcycleControllerSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((VehicleControllerSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::MotorcycleControllerSettings::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::MotorcycleControllerSettings::SaveBinaryState
          (MotorcycleControllerSettings *this,StreamOut *param_1)

{
  JPH::WheeledVehicleControllerSettings::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xac,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb0,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xbc,4);
                    /* WARNING: Could not recover jumptable at 0x001000da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc0,4);
  return;
}



/* JPH::MotorcycleControllerSettings::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::MotorcycleControllerSettings::RestoreBinaryState
          (MotorcycleControllerSettings *this,StreamIn *param_1)

{
  JPH::WheeledVehicleControllerSettings::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xac,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb0,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb4,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xb8,4);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xbc,4);
                    /* WARNING: Could not recover jumptable at 0x0010017a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc0,4);
  return;
}



/* JPH::MotorcycleController::SaveState(JPH::StateRecorder&) const */

void __thiscall
JPH::MotorcycleController::SaveState(MotorcycleController *this,StateRecorder *param_1)

{
  JPH::WheeledVehicleController::SaveState((StateRecorder *)this);
                    /* WARNING: Could not recover jumptable at 0x001001b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,this + 0x140,0xc);
  return;
}



/* JPH::MotorcycleController::RestoreState(JPH::StateRecorder&) */

void __thiscall
JPH::MotorcycleController::RestoreState(MotorcycleController *this,StateRecorder *param_1)

{
  JPH::WheeledVehicleController::RestoreState((StateRecorder *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x140,0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotorcycleController::Draw(JPH::DebugRenderer*) const */

void __thiscall JPH::MotorcycleController::Draw(MotorcycleController *this,DebugRenderer *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  JPH::WheeledVehicleController::Draw((DebugRenderer *)this);
  lVar1 = *(long *)(this + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 0x50);
  fVar14 = (float)*(undefined8 *)(lVar1 + 0x70);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
  fVar6 = *(float *)(lVar1 + 0x78);
  local_38._0_4_ = (float)puVar2[2];
  local_38._4_4_ = (float)((ulong)puVar2[2] >> 0x20);
  uStack_30._0_4_ = (float)puVar2[3];
  uStack_30._4_4_ = (float)((ulong)puVar2[3] >> 0x20);
  fVar8 = (float)((uint)(float)local_38 ^ _LC18);
  fVar9 = (float)((uint)local_38._4_4_ ^ _UNK_00102934);
  fVar10 = (float)((uint)(float)uStack_30 ^ _UNK_00102938);
  fVar11 = (float)((uint)uStack_30._4_4_ ^ _UNK_0010293c);
  fVar12 = (uStack_30._4_4_ * fVar14 + (float)local_38 * 0.0 + fVar6 * local_38._4_4_) -
           (float)uStack_30 * fVar13;
  fVar7 = (uStack_30._4_4_ * fVar13 - fVar6 * (float)local_38) + local_38._4_4_ * 0.0 +
          (float)uStack_30 * fVar14;
  fVar5 = ((uStack_30._4_4_ * 0.0 - (float)local_38 * fVar14) - local_38._4_4_ * fVar13) -
          fVar6 * (float)uStack_30;
  fVar6 = ((fVar6 * uStack_30._4_4_ + (float)local_38 * fVar13) - local_38._4_4_ * fVar14) +
          (float)uStack_30 * 0.0;
  local_48._0_4_ = (float)uVar3;
  local_48._4_4_ = (float)((ulong)uVar3 >> 0x20);
  uStack_40._0_4_ = (float)uVar4;
  uStack_40._4_4_ = (float)((ulong)uVar4 >> 0x20);
  local_38 = CONCAT44(fVar6 * fVar8 + fVar7 * fVar11 + (fVar9 * fVar5 - fVar12 * fVar10) +
                      local_48._4_4_,
                      ((fVar7 * fVar10 + fVar12 * fVar11 + fVar8 * fVar5) - fVar6 * fVar9) +
                      (float)local_48);
  uStack_30 = CONCAT44((((fVar11 * fVar5 - fVar12 * fVar8) - fVar7 * fVar9) - fVar6 * fVar10) +
                       uStack_40._4_4_,
                       fVar6 * fVar11 + ((fVar12 * fVar9 + fVar10 * fVar5) - fVar7 * fVar8) +
                       (float)uStack_40);
  JPH::DebugRenderer::DrawArrow
            (uVar3,uVar4,local_38,uStack_30,_LC2,param_1,(undefined4)Color::sYellow);
  local_48 = CONCAT44(local_48._4_4_ + *(float *)(this + 0x144),
                      (float)local_48 + *(float *)(this + 0x140));
  uStack_40 = CONCAT44(uStack_40._4_4_ + *(float *)(this + 0x14c),
                       (float)uStack_40 + *(float *)(this + 0x148));
  JPH::DebugRenderer::DrawArrow(uVar3,uVar4,local_48,uStack_40,_LC2,param_1,(undefined4)Color::sRed)
  ;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

undefined8 * JPH::GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda()#1}::_FUN(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)(*Allocate)(200);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &Reallocate;
  JPH::VehicleEngineSettings::VehicleEngineSettings((VehicleEngineSettings *)(puVar8 + 2));
  *(undefined1 *)(puVar8 + 8) = 0;
  puVar8[0xb] = 0;
  *(undefined1 (*) [16])(puVar8 + 9) = (undefined1  [16])0x0;
  lVar9 = (*Reallocate)(0,0,0x14);
  lVar10 = puVar8[9];
  lVar11 = 0;
  puVar8[10] = 5;
  puVar8[0xb] = lVar9;
  lVar1 = lVar10 * 4;
  do {
    uVar2 = *(undefined4 *)((long)&C_11_0 + lVar11);
    *(undefined4 *)(lVar9 + lVar1 + lVar11) = uVar2;
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x14);
  puVar8[9] = lVar10 + 5;
  *(undefined4 *)(lVar9 + 0x10 + lVar1) = uVar2;
  *(undefined1 (*) [16])(puVar8 + 0xc) = (undefined1  [16])0x0;
  puVar8[0xe] = 0;
  lVar10 = (*Reallocate)(0,0,4);
  lVar1 = puVar8[0xc];
  puVar8[0xd] = 1;
  puVar8[0xe] = lVar10;
  uVar4 = _UNK_00102948;
  uVar3 = __LC21;
  puVar8[0xc] = lVar1 + 1;
  *(undefined4 *)(lVar10 + lVar1 * 4) = 0xc039999a;
  uVar7 = _LC5;
  *(undefined1 (*) [16])(puVar8 + 0x12) = (undefined1  [16])0x0;
  uVar6 = _UNK_00102958;
  uVar5 = __LC6;
  puVar8[0x11] = uVar7;
  *puVar8 = &PTR_GetRTTI_00102888;
  uVar7 = _LC7;
  puVar8[0x14] = 0;
  puVar8[0x17] = uVar7;
  *(undefined4 *)(puVar8 + 0x18) = 0x3f4ccccd;
  puVar8[0xf] = uVar3;
  puVar8[0x10] = uVar4;
  puVar8[0x15] = uVar5;
  puVar8[0x16] = uVar6;
  return puVar8;
}



/* JPH::MotorcycleControllerSettings::ConstructController(JPH::VehicleConstraint&) const */

WheeledVehicleController * __thiscall
JPH::MotorcycleControllerSettings::ConstructController
          (MotorcycleControllerSettings *this,VehicleConstraint *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  WheeledVehicleController *this_00;
  
  this_00 = (WheeledVehicleController *)(*Allocate)(0x160);
  JPH::WheeledVehicleController::WheeledVehicleController
            (this_00,(WheeledVehicleControllerSettings *)this,param_1);
  uVar2 = *(undefined8 *)(this + 0xac);
  uVar3 = *(undefined8 *)(this + 0xb4);
  *(undefined ***)this_00 = &PTR__MotorcycleController_001028d0;
  *(undefined2 *)(this_00 + 0x124) = 0x101;
  uVar1 = *(undefined8 *)(this + 0xbc);
  *(undefined8 *)(this_00 + 0x150) = 0;
  *(undefined8 *)(this_00 + 0x138) = uVar1;
  *(undefined8 *)(this_00 + 0x128) = uVar2;
  *(undefined8 *)(this_00 + 0x130) = uVar3;
  *(undefined1 (*) [16])(this_00 + 0x140) = (undefined1  [16])0x0;
  return this_00;
}



/* JPH::MotorcycleControllerSettings::GetRTTI() const */

undefined1 * JPH::MotorcycleControllerSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti,
                      "MotorcycleControllerSettings",200,
                      GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotorcycleController::SolveLongitudinalAndLateralConstraints(float) */

uint __thiscall
JPH::MotorcycleController::SolveLongitudinalAndLateralConstraints
          (MotorcycleController *this,float param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  long *plVar11;
  long *plVar12;
  float fVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  uint uVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_68;
  float fStack_64;
  float fStack_60;
  
  uVar10 = JPH::WheeledVehicleController::SolveLongitudinalAndLateralConstraints(param_1);
  if (this[0x124] != (MotorcycleController)0x0) {
    lVar3 = *(long *)(this + 0x10);
    plVar11 = *(long **)(lVar3 + 0xa0);
    plVar1 = plVar11 + *(long *)(lVar3 + 0x90);
    for (plVar12 = plVar11; plVar1 != plVar12; plVar12 = plVar12 + 1) {
      lVar4 = *plVar12;
      if ((*(int *)(lVar4 + 0x10) == -1) ||
         (*(float *)(lVar4 + 0xd0) + *(float *)(lVar4 + 0x110) <= 0.0)) {
        fVar18 = _LC15 - param_1 * *(float *)(this + 0x138);
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        *(float *)(this + 0x150) = fVar18 * *(float *)(this + 0x150);
        return uVar10;
      }
    }
    pfVar5 = *(float **)(lVar3 + 0x50);
    fVar26 = *(float *)(lVar3 + 0x60);
    fVar18 = *(float *)(lVar3 + 0x68);
    fVar13 = *(float *)(lVar3 + 100);
    fVar27 = pfVar5[4];
    fVar19 = (float)((uint)pfVar5[4] ^ _LC18);
    fVar22 = (float)((uint)pfVar5[5] ^ _UNK_00102934);
    fVar23 = (float)((uint)pfVar5[6] ^ _UNK_00102938);
    fVar24 = (float)((uint)pfVar5[7] ^ _UNK_0010293c);
    pfVar6 = *(float **)(pfVar5 + 0x12);
    fVar33 = (float)((ulong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
    fVar34 = (float)*(undefined8 *)(pfVar5 + 6);
    fVar37 = (float)((ulong)*(undefined8 *)(pfVar5 + 6) >> 0x20);
    fVar39 = (fVar37 * fVar26 + fVar27 * 0.0 + fVar18 * fVar33) - fVar34 * fVar13;
    fVar28 = (fVar37 * fVar13 - fVar18 * fVar27) + fVar33 * 0.0 + fVar34 * fVar26;
    fVar25 = ((fVar18 * fVar37 + fVar27 * fVar13) - fVar33 * fVar26) + fVar34 * 0.0;
    fVar43 = ((fVar37 * 0.0 - fVar26 * fVar27) - fVar13 * fVar33) - fVar18 * fVar34;
    fVar18 = *(float *)(lVar3 + 0x78);
    fVar40 = fVar25 * fVar19 + fVar28 * fVar24 + (fVar43 * fVar22 - fVar39 * fVar23);
    fVar42 = fVar25 * fVar24 + ((fVar39 * fVar22 + fVar43 * fVar23) - fVar28 * fVar19);
    fVar31 = (fVar28 * fVar23 + fVar39 * fVar24 + fVar43 * fVar19) - fVar25 * fVar22;
    fVar41 = (float)*(undefined8 *)(lVar3 + 0x70);
    fVar32 = (float)((ulong)*(undefined8 *)(lVar3 + 0x70) >> 0x20);
    fVar26 = (fVar37 * fVar32 - fVar18 * fVar27) + fVar33 * 0.0 + fVar34 * fVar41;
    fVar29 = (fVar37 * fVar41 + fVar27 * 0.0 + fVar18 * fVar33) - fVar34 * fVar32;
    fVar13 = ((fVar37 * fVar18 + fVar27 * fVar32) - fVar33 * fVar41) + fVar34 * 0.0;
    fVar33 = ((fVar37 * 0.0 - fVar27 * fVar41) - fVar33 * fVar32) - fVar18 * fVar34;
    fVar34 = fVar13 * fVar19 + (fVar22 * fVar33 - fVar29 * fVar23) + fVar26 * fVar24;
    fVar37 = fVar13 * fVar24 + ((fVar29 * fVar22 + fVar23 * fVar33) - fVar26 * fVar19);
    fVar27 = (fVar29 * fVar24 + fVar19 * fVar33 + fVar26 * fVar23) - fVar13 * fVar22;
    auVar16._4_4_ = fVar27;
    auVar16._0_4_ = fVar27;
    auVar16._8_4_ = fVar27;
    auVar16._12_4_ = fVar27;
    fVar18 = _LC15;
    if (0.0 <= ((fVar19 * fVar13 + fVar24 * fVar26 + (fVar22 * fVar33 - fVar23 * fVar29)) *
                *(float *)(this + 0x140) - *(float *)(this + 0x144) * fVar27) * fVar42 +
               (((fVar23 * fVar26 + fVar24 * fVar29 + fVar19 * fVar33) - fVar22 * fVar13) *
                *(float *)(this + 0x148) - *(float *)(this + 0x140) * fVar37) * fVar40 +
               ((fVar24 * fVar13 + ((fVar22 * fVar29 + fVar23 * fVar33) - fVar19 * fVar26)) *
                *(float *)(this + 0x144) - *(float *)(this + 0x148) * fVar34) * fVar31 + 0.0) {
      fVar18 = _LC16;
    }
    auVar30._4_12_ = auVar16._4_12_;
    auVar30._0_4_ = fVar27 * *(float *)(this + 0x140);
    auVar35._4_4_ = _LC15;
    auVar35._0_4_ = _LC15;
    auVar35._8_4_ = _LC15;
    auVar35._12_4_ = _LC15;
    fVar13 = fVar37 * *(float *)(this + 0x148) +
             auVar30._0_4_ + 0.0 + fVar34 * *(float *)(this + 0x144);
    auVar15._0_4_ = (uint)fVar13 ^ _LC18 & (uint)fVar13;
    auVar15._4_4_ = (uint)fVar13 ^ _LC18 & (uint)fVar13;
    auVar15._8_4_ = (uint)fVar13 ^ _LC18 & (uint)fVar13;
    auVar15._12_4_ = (uint)fVar13 ^ _LC18 & (uint)fVar13;
    auVar16 = minps(auVar15,auVar35);
    fVar27 = auVar16._0_4_;
    auVar36._0_4_ = (_LC15 - fVar27) * _LC21;
    auVar36._4_4_ = (_LC15 - auVar16._4_4_) * _LC21;
    auVar36._8_4_ = (_LC15 - auVar16._8_4_) * _LC21;
    auVar36._12_4_ = (_LC15 - auVar16._12_4_) * _LC21;
    uVar20 = (int)-(uint)(_LC21 < fVar27) >> 0x1f;
    auVar16 = sqrtps(auVar30,auVar36);
    fVar26 = (float)((uint)auVar36._0_4_ & uVar20 | ~uVar20 & (uint)(fVar27 * fVar27));
    fVar27 = (float)(auVar16._0_4_ & uVar20 | ~uVar20 & (uint)fVar27);
    fVar27 = ((((_LC23 * fVar26 + _LC25) * fVar26 + _LC27) * fVar26 + _LC29) * fVar26 + _LC31) *
             fVar26 * fVar27 + fVar27;
    auVar14 = SUB1612((undefined1  [16])0x0,0);
    if (*(char *)(pfVar5 + 0x1e) != '\0') {
      auVar14 = SUB1612(*(undefined1 (*) [16])(pfVar6 + 4),0);
    }
    uVar7 = *(undefined8 *)(pfVar6 + 4);
    uVar8 = *(undefined8 *)(pfVar6 + 6);
    fVar13 = (((_LC33 - (float)(((uint)(_LC33 - (fVar27 + fVar27)) & uVar20 | ~uVar20 & (uint)fVar27
                                ) ^ _LC18 & (uint)fVar13)) * fVar18 * *(float *)(this + 300) -
              (fVar42 * auVar14._8_4_ + auVar14._4_4_ * fVar40 + fVar31 * auVar14._0_4_ + 0.0) *
              *(float *)(this + 0x130)) + *(float *)(this + 0x134) * *(float *)(this + 0x150)) *
             param_1;
    fVar18 = fVar13 - *(float *)(this + 0x154);
    Body::AddAngularImpulse
              (CONCAT44(fVar18 * fVar40,fVar18 * fVar31),
               CONCAT44(fVar18 * (((fVar43 * fVar24 - fVar39 * fVar19) - fVar28 * fVar22) -
                                 fVar25 * fVar23),fVar18 * fVar42),pfVar5);
    *(float *)(this + 0x154) = fVar13;
    local_68 = (float)uVar7;
    fStack_64 = (float)((ulong)uVar7 >> 0x20);
    fStack_60 = (float)uVar8;
    if (plVar1 == plVar11) {
      auVar17 = (undefined1  [16])0x0;
      fVar13 = 0.0;
    }
    else {
      fVar13 = 0.0;
      fVar27 = 0.0;
      fVar26 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      do {
        lVar3 = *plVar11;
        plVar11 = plVar11 + 1;
        fVar24 = *(float *)(lVar3 + 0xd0) + *(float *)(lVar3 + 0x110);
        fVar19 = *(float *)(lVar3 + 0x30) - *pfVar5;
        fVar22 = *(float *)(lVar3 + 0x34) - pfVar5[1];
        fVar23 = *(float *)(lVar3 + 0x38) - pfVar5[2];
        fVar13 = fVar13 + fVar24;
        fVar37 = fVar22 * (pfVar6[4] - local_68) - fVar19 * (pfVar6[5] - fStack_64);
        fVar27 = fVar27 + (fVar23 * (pfVar6[5] - fStack_64) - fVar22 * (pfVar6[6] - fStack_60)) *
                          fVar24;
        fVar26 = fVar26 + (fVar19 * (pfVar6[6] - fStack_60) - fVar23 * (pfVar6[4] - local_68)) *
                          fVar24;
        fVar33 = fVar33 + fVar37 * fVar24;
        fVar34 = fVar34 + fVar37 * fVar24;
      } while (plVar11 != plVar1);
      auVar17._0_4_ = 0.0 - fVar27;
      auVar17._4_4_ = 0.0 - fVar26;
      auVar17._8_4_ = 0.0 - fVar33;
      auVar17._12_4_ = 0.0 - fVar34;
    }
    fVar27 = pfVar6[0x16];
    bVar2 = *(byte *)((long)pfVar6 + 0x7a);
    auVar38._0_4_ = fVar13 * fVar27;
    auVar21._1_3_ = 0;
    auVar21[0] = bVar2;
    auVar21[4] = bVar2;
    auVar21._5_3_ = 0;
    auVar21[8] = bVar2;
    auVar21._9_3_ = 0;
    auVar21[0xc] = bVar2;
    auVar21._13_3_ = 0;
    auVar9._4_4_ = _UNK_001029d4;
    auVar9._0_4_ = __LC35;
    auVar9._8_4_ = _UNK_001029d8;
    auVar9._12_4_ = _UNK_001029dc;
    auVar21 = auVar21 & auVar9;
    auVar38._4_4_ = auVar38._0_4_;
    auVar38._8_4_ = auVar38._0_4_;
    auVar38._12_4_ = auVar38._0_4_;
    auVar16 = divps(auVar17,auVar38);
    fVar26 = (float)((uint)(auVar16._0_4_ * fVar27 + *pfVar6) & -(uint)(auVar21._0_4_ == __LC35));
    fVar33 = (float)((uint)(auVar16._4_4_ * fVar27 + pfVar6[1]) &
                    -(uint)(auVar21._4_4_ == _UNK_001029d4));
    fVar34 = (float)((uint)(auVar16._8_4_ * fVar27 + pfVar6[2]) &
                    -(uint)(auVar21._8_4_ == _UNK_001029d8));
    fVar27 = (float)((uint)(auVar16._12_4_ * fVar27 + pfVar6[3]) &
                    -(uint)(auVar21._12_4_ == _UNK_001029dc));
    *pfVar6 = fVar26;
    pfVar6[1] = fVar33;
    pfVar6[2] = fVar34;
    pfVar6[3] = fVar27;
    fVar37 = fVar34 * fVar34 + fVar26 * fVar26 + 0.0 + fVar33 * fVar33;
    fVar13 = pfVar6[0x19];
    if (fVar13 * fVar13 < fVar37) {
      fVar13 = fVar13 / SQRT(fVar37);
      *pfVar6 = fVar13 * fVar26;
      pfVar6[1] = fVar13 * fVar33;
      pfVar6[2] = fVar13 * fVar34;
      pfVar6[3] = fVar13 * fVar27;
    }
    uVar20 = (uint)NAN(fVar18);
    if (fVar18 != 0.0) {
      uVar20 = 1;
    }
    uVar10 = uVar10 | uVar20;
  }
  return uVar10;
}



/* JPH::GetRTTIOfType(JPH::MotorcycleControllerSettings*) */

undefined1 * JPH::GetRTTIOfType(MotorcycleControllerSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti,
                      "MotorcycleControllerSettings",200,
                      GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::MotorcycleControllerSettings*)::{lambda(void*)#1}::_FUN,
                      MotorcycleControllerSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti,&__dso_handle
                  );
      __cxa_guard_release(&GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti);
      return GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::MotorcycleControllerSettings*)::rtti;
}



/* JPH::MotorcycleControllerSettings::CastTo(JPH::RTTI const*) const */

void JPH::MotorcycleControllerSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((MotorcycleControllerSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::MotorcycleController::MotorcycleController(JPH::MotorcycleControllerSettings const&,
   JPH::VehicleConstraint&) */

void __thiscall
JPH::MotorcycleController::MotorcycleController
          (MotorcycleController *this,MotorcycleControllerSettings *param_1,
          VehicleConstraint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  JPH::WheeledVehicleController::WheeledVehicleController
            ((WheeledVehicleController *)this,(WheeledVehicleControllerSettings *)param_1,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0xac);
  uVar3 = *(undefined8 *)(param_1 + 0xb4);
  *(undefined ***)this = &PTR__MotorcycleController_001028d0;
  *(undefined2 *)(this + 0x124) = 0x101;
  uVar1 = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = uVar1;
  *(undefined8 *)(this + 0x128) = uVar2;
  *(undefined8 *)(this + 0x130) = uVar3;
  *(undefined1 (*) [16])(this + 0x140) = (undefined1  [16])0x0;
  return;
}



/* JPH::MotorcycleController::GetWheelBase() const */

float __thiscall JPH::MotorcycleController::GetWheelBase(MotorcycleController *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(this + 0x10);
  plVar4 = *(long **)(lVar2 + 0xa0);
  plVar1 = plVar4 + *(long *)(lVar2 + 0x90);
  fVar6 = _LC36;
  fVar9 = _LC37;
  if (plVar1 != plVar4) {
    do {
      lVar3 = *(long *)(*plVar4 + 8);
      if (*(char *)(lVar3 + 0x90) == '\0') {
        fVar7 = *(float *)(lVar3 + 0x74);
        fVar8 = fVar7 * *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0x18);
        uVar5 = CONCAT44(fVar7 * *(float *)(lVar3 + 0x34) + *(float *)(lVar3 + 0x14),
                         fVar7 * *(float *)(lVar3 + 0x30) + *(float *)(lVar3 + 0x10));
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        fVar8 = (float)*(undefined8 *)(lVar3 + 0x28);
      }
      plVar4 = plVar4 + 1;
      fVar7 = fVar8 * (float)*(undefined8 *)(lVar2 + 0x68) +
              (float)((ulong)uVar5 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20)
              + (float)uVar5 * (float)*(undefined8 *)(lVar2 + 0x60) + 0.0;
      fVar8 = fVar7;
      if (fVar7 <= fVar6) {
        fVar8 = fVar6;
      }
      fVar6 = fVar8;
      if (fVar9 <= fVar7) {
        fVar7 = fVar9;
      }
      fVar9 = fVar7;
    } while (plVar1 != plVar4);
  }
  return fVar6 - fVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::MotorcycleController::PreCollide(float, JPH::PhysicsSystem&) */

void __thiscall
JPH::MotorcycleController::PreCollide
          (MotorcycleController *this,float param_1,PhysicsSystem *param_2)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  MotorcycleController MVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  uint uVar28;
  int iVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  int iVar53;
  int iVar54;
  undefined1 auVar50 [16];
  float fVar49;
  int iVar55;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  float fVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar74;
  uint uVar75;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_8c;
  float local_78;
  float fStack_6c;
  float local_68;
  float fStack_5c;
  float local_58;
  float fStack_4c;
  float local_48;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float local_28;
  undefined1 auVar33 [16];
  
  JPH::WheeledVehicleController::PreCollide(param_1,(PhysicsSystem *)this);
  lVar12 = *(long *)(this + 0x10);
  lVar13 = *(long *)(lVar12 + 0x50);
  fVar16 = *(float *)(lVar12 + 0x60);
  fVar15 = *(float *)(lVar12 + 0x68);
  fVar21 = *(float *)(lVar12 + 100);
  local_b8 = (float)*(undefined8 *)(lVar13 + 0x10);
  fStack_b4 = (float)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
  fStack_b0 = (float)*(undefined8 *)(lVar13 + 0x18);
  fStack_ac = (float)((ulong)*(undefined8 *)(lVar13 + 0x18) >> 0x20);
  fVar22 = (float)((uint)local_b8 ^ _LC18);
  fVar24 = (float)((uint)fStack_b4 ^ _UNK_00102934);
  fVar25 = (float)((uint)fStack_b0 ^ _UNK_00102938);
  fVar26 = (float)((uint)fStack_ac ^ _UNK_0010293c);
  fVar42 = (local_b8 * 0.0 + fVar16 * fStack_ac + fStack_b4 * fVar15) - fStack_b0 * fVar21;
  fVar34 = (fStack_ac * fVar21 - local_b8 * fVar15) + fStack_b4 * 0.0 + fVar16 * fStack_b0;
  fVar27 = ((local_b8 * fVar21 + fStack_ac * fVar15) - fVar16 * fStack_b4) + fStack_b0 * 0.0;
  fVar15 = ((fStack_ac * 0.0 - fVar16 * local_b8) - fStack_b4 * fVar21) - fStack_b0 * fVar15;
  fVar62 = fVar27 * fVar22 + fVar34 * fVar26 + (fVar15 * fVar24 - fVar42 * fVar25);
  fVar66 = fVar27 * fVar26 + ((fVar42 * fVar24 + fVar15 * fVar25) - fVar34 * fVar22);
  fVar58 = (fVar34 * fVar25 + fVar42 * fVar26 + fVar15 * fVar22) - fVar27 * fVar24;
  fVar25 = ((fVar15 * fVar26 - fVar42 * fVar22) - fVar34 * fVar24) - fVar27 * fVar25;
  uVar28 = _LC18;
  uVar63 = _UNK_00102934;
  uVar74 = _UNK_00102938;
  uVar75 = _UNK_0010293c;
  fVar21 = fVar58;
  fVar16 = fVar62;
  fVar22 = fVar66;
  fVar24 = (float)GetWheelBase(this);
  fStack_6c = _LC43;
  fVar15 = _LC38;
  pauVar1 = (undefined1 (*) [12])(lVar12 + 0x80);
  uVar3 = *(undefined8 *)*pauVar1;
  uVar4 = *(undefined8 *)(lVar12 + 0x88);
  uStack_8c = (uint)((ulong)uVar4 >> 0x20);
  if (this[0x124] == (MotorcycleController)0x0) {
    *(undefined4 *)(this + 0x150) = 0;
    fStack_5c = _LC45;
    uVar7 = _LC39;
    plVar9 = *(long **)(lVar12 + 0xa0);
    lVar2 = *(long *)(lVar12 + 0x90);
    *(undefined8 *)(this + 0x140) = uVar3;
    *(undefined8 *)(this + 0x148) = uVar4;
    local_28 = *(float *)(this + 0x128);
    plVar11 = plVar9 + lVar2;
    fStack_4c = _LC47;
    uStack_8c = _LC18;
    fStack_3c = _LC49;
    fVar26 = _LC21;
    goto LAB_001019c0;
  }
  plVar9 = *(long **)(lVar12 + 0xa0);
  MVar14 = (MotorcycleController)0x0;
  plVar11 = plVar9 + *(long *)(lVar12 + 0x90);
  plVar10 = plVar9;
  auVar37 = (undefined1  [16])0x0;
  if (plVar11 == plVar9) {
LAB_00101c78:
    auVar37._12_4_ = uStack_8c;
    auVar37._0_12_ = *pauVar1;
    auVar31 = auVar37;
  }
  else {
    do {
      lVar2 = *plVar10;
      auVar52 = auVar37;
      if (*(int *)(lVar2 + 0x10) != -1) {
        fVar27 = *(float *)(lVar2 + 0xd0) + *(float *)(lVar2 + 0x110);
        fVar26 = *(float *)(lVar2 + 400);
        auVar52._0_4_ =
             auVar37._0_4_ + fVar27 * *(float *)(lVar2 + 0x50) + fVar26 * *(float *)(lVar2 + 0x70);
        auVar52._4_4_ =
             auVar37._4_4_ + fVar27 * *(float *)(lVar2 + 0x54) + fVar26 * *(float *)(lVar2 + 0x74);
        auVar52._8_4_ =
             auVar37._8_4_ + fVar27 * *(float *)(lVar2 + 0x58) + fVar26 * *(float *)(lVar2 + 0x78);
        auVar52._12_4_ =
             auVar37._12_4_ + fVar27 * *(float *)(lVar2 + 0x5c) + fVar26 * *(float *)(lVar2 + 0x7c);
        MVar14 = this[0x124];
      }
      plVar10 = plVar10 + 1;
      auVar37 = auVar52;
    } while (plVar11 != plVar10);
    if (MVar14 == (MotorcycleController)0x0) goto LAB_00101c78;
    fVar26 = auVar52._0_4_ * auVar52._0_4_ + 0.0 + auVar52._4_4_ * auVar52._4_4_ +
             auVar52._8_4_ * auVar52._8_4_;
    auVar37._12_4_ = uStack_8c;
    auVar37._0_12_ = *pauVar1;
    auVar31 = auVar37;
    if (_LC38 < fVar26) {
      auVar31._0_4_ = SQRT(fVar26);
      auVar31._4_4_ = auVar31._0_4_;
      auVar31._8_4_ = auVar31._0_4_;
      auVar31._12_4_ = auVar31._0_4_;
      auVar31 = divps(auVar52,auVar31);
    }
  }
  auVar17 = auVar37._0_12_;
  fVar26 = *(float *)(this + 0x13c);
  fVar43 = _LC15 - fVar26;
  fVar27 = fVar26 * *(float *)(this + 0x140) + auVar31._0_4_ * fVar43;
  fVar34 = fVar26 * *(float *)(this + 0x144) + auVar31._4_4_ * fVar43;
  fVar42 = fVar26 * *(float *)(this + 0x148) + auVar31._8_4_ * fVar43;
  fVar35 = fVar66 * fVar42 + fVar34 * fVar62 + fVar58 * fVar27 + 0.0;
  auVar46._0_4_ = fVar27 - fVar35 * fVar21;
  auVar46._4_4_ = fVar34 - fVar35 * fVar16;
  auVar46._8_4_ = fVar42 - fVar35 * fVar22;
  auVar46._12_4_ = (fVar26 * *(float *)(this + 0x14c) + auVar31._12_4_ * fVar43) - fVar35 * fVar25;
  fVar26 = auVar46._8_4_ * auVar46._8_4_ +
           auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_ + 0.0;
  auVar52 = auVar37;
  if (_LC38 < fVar26) {
    auVar41._0_4_ = SQRT(fVar26);
    auVar41._4_4_ = auVar41._0_4_;
    auVar41._8_4_ = auVar41._0_4_;
    auVar41._12_4_ = auVar41._0_4_;
    auVar52 = divps(auVar46,auVar41);
  }
  auVar30 = auVar52._0_12_;
  *(undefined1 (*) [16])(this + 0x140) = auVar52;
  local_48 = _LC49;
  local_58 = _LC47;
  local_68 = _LC45;
  local_78 = _LC43;
  uVar7 = _LC39;
  fVar26 = _LC21;
  uVar8 = _LC18;
  fVar27 = (float)uVar4 * fVar66 +
           (float)((ulong)uVar3 >> 0x20) * fVar62 + (float)uVar3 * fVar58 + 0.0;
  auVar50._0_4_ = auVar37._0_4_ - fVar27 * fVar21;
  auVar50._4_4_ = auVar37._4_4_ - fVar27 * fVar16;
  auVar50._8_4_ = auVar37._8_4_ - fVar27 * fVar22;
  auVar50._12_4_ = auVar37._12_4_ - fVar27 * fVar25;
  fVar27 = auVar50._8_4_ * auVar50._8_4_ +
           auVar50._0_4_ * auVar50._0_4_ + 0.0 + auVar50._4_4_ * auVar50._4_4_;
  if (fVar15 < fVar27) {
    auVar40._0_4_ = SQRT(fVar27);
    auVar40._4_4_ = auVar40._0_4_;
    auVar40._8_4_ = auVar40._0_4_;
    auVar40._12_4_ = auVar40._0_4_;
    auVar37 = divps(auVar50,auVar40);
    auVar17 = auVar37._0_12_;
  }
  fVar27 = auVar17._0_4_;
  fVar34 = auVar17._4_4_;
  fVar42 = auVar17._8_4_;
  fVar35 = auVar52._0_4_;
  fVar43 = auVar52._4_4_;
  fVar44 = auVar52._8_4_;
  local_38 = auVar52._4_8_;
  fStack_30 = fVar35;
  fVar15 = fVar42 * fVar43 - fVar44 * fVar34;
  auVar56._4_4_ = fVar15;
  auVar56._0_4_ = fVar15;
  auVar56._8_4_ = fVar15;
  auVar56._12_4_ = fVar15;
  auVar57._4_12_ = auVar56._4_12_;
  auVar57._0_4_ = fVar15 * fVar58 + 0.0;
  fVar15 = _LC15;
  if (0.0 <= (fVar34 * fVar35 - fVar43 * fVar27) * fVar66 +
             (fVar27 * fVar44 - fVar35 * fVar42) * fVar62 + auVar57._0_4_) {
    fVar15 = _LC16;
  }
  uStack_8c = _LC18;
  fVar35 = fVar44 * fVar42 + fVar43 * fVar34 + fVar27 * fVar35 + 0.0;
  auVar36._0_4_ = (uint)fVar35 ^ _LC18 & (uint)fVar35;
  auVar36._4_4_ = (uint)fVar35 ^ _LC18 & (uint)fVar35;
  auVar36._8_4_ = (uint)fVar35 ^ _LC18 & (uint)fVar35;
  auVar36._12_4_ = (uint)fVar35 ^ _LC18 & (uint)fVar35;
  auVar5._4_4_ = _UNK_00102974;
  auVar5._0_4_ = _LC15;
  auVar5._8_4_ = _UNK_00102978;
  auVar5._12_4_ = _UNK_0010297c;
  auVar37 = minps(auVar36,auVar5);
  fVar43 = auVar37._0_4_;
  auVar47._0_4_ = (_LC15 - fVar43) * _LC21;
  auVar47._4_4_ = (_LC15 - auVar37._4_4_) * _LC21;
  auVar47._8_4_ = (_LC15 - auVar37._8_4_) * _LC21;
  auVar47._12_4_ = (_LC15 - auVar37._12_4_) * _LC21;
  uVar48 = (int)-(uint)(_LC21 < fVar43) >> 0x1f;
  auVar37 = sqrtps(auVar57,auVar47);
  fVar44 = (float)((uint)auVar47._0_4_ & uVar48 | ~uVar48 & (uint)(fVar43 * fVar43));
  fVar43 = (float)(auVar37._0_4_ & uVar48 | ~uVar48 & (uint)fVar43);
  fVar43 = ((((_LC23 * fVar44 + _LC25) * fVar44 + _LC27) * fVar44 + _LC29) * fVar44 + _LC31) *
           fVar44 * fVar43 + fVar43;
  local_28 = *(float *)(this + 0x128);
  fVar15 = (_LC33 - (float)(((uint)(_LC33 - (fVar43 + fVar43)) & uVar48 | ~uVar48 & (uint)fVar43) ^
                           _LC18 & (uint)fVar35)) * fVar15;
  if (local_28 < (float)(_LC39 & (uint)fVar15)) {
    uVar48 = -(uint)(fVar15 < 0.0);
    fVar45 = (float)(((uint)local_28 ^ __LC40) & uVar48 | ~uVar48 & (uint)local_28) * _LC21;
    fVar49 = (float)(__LC41 & (uint)fVar45 ^ (uint)fVar45);
    fVar59 = (float)(_UNK_00102a04 & (uint)fVar45 ^ (uint)fVar45);
    fVar60 = (float)(_UNK_00102a08 & (uint)fVar45 ^ (uint)fVar45);
    fVar61 = (float)(_UNK_00102a0c & (uint)fVar45 ^ (uint)fVar45);
    iVar29 = (int)(_LC43 * fVar49 + _LC21);
    iVar53 = (int)(_LC43 * fVar59 + _LC21);
    iVar54 = (int)(_LC43 * fVar60 + _LC21);
    iVar55 = (int)(_LC43 * fVar61 + _LC21);
    fVar15 = (float)iVar29;
    fVar35 = (float)iVar53;
    fVar43 = (float)iVar54;
    fVar44 = (float)iVar55;
    fVar15 = ((fVar49 - _LC45 * fVar15) - _LC47 * fVar15) - fVar15 * _LC49;
    fVar35 = ((fVar59 - _LC45 * fVar35) - _LC47 * fVar35) - fVar35 * _LC49;
    fVar43 = ((fVar60 - _LC45 * fVar43) - _LC47 * fVar43) - fVar43 * _LC49;
    fVar44 = ((fVar61 - _LC45 * fVar44) - _LC47 * fVar44) - fVar44 * _LC49;
    fVar68 = fVar15 * fVar15;
    fVar69 = fVar35 * fVar35;
    fVar70 = fVar43 * fVar43;
    fVar71 = fVar44 * fVar44;
    fVar49 = (((_LC51 * fVar68 + _LC53) * fVar68 + _LC55) * fVar68 * fVar68 - fVar68 * _LC21) +
             _LC15;
    fVar59 = (((_LC51 * fVar69 + _LC53) * fVar69 + _LC55) * fVar69 * fVar69 - fVar69 * _LC21) +
             _UNK_00102974;
    fVar60 = (((_LC51 * fVar70 + _LC53) * fVar70 + _LC55) * fVar70 * fVar70 - fVar70 * _LC21) +
             _UNK_00102978;
    fVar61 = (((_LC51 * fVar71 + _LC53) * fVar71 + _LC55) * fVar71 * fVar71 - fVar71 * _LC21) +
             _UNK_0010297c;
    uVar48 = (iVar29 << 0x1f) >> 0x1f;
    uVar64 = (iVar53 << 0x1f) >> 0x1f;
    uVar65 = (iVar54 << 0x1f) >> 0x1f;
    uVar67 = (iVar55 << 0x1f) >> 0x1f;
    fVar15 = ((_LC57 * fVar68 + _LC59) * fVar68 + _LC61) * fVar68 * fVar15 + fVar15;
    fVar35 = ((_LC57 * fVar69 + _LC59) * fVar69 + _LC61) * fVar69 * fVar35 + fVar35;
    fVar43 = ((_LC57 * fVar70 + _LC59) * fVar70 + _LC61) * fVar70 * fVar43 + fVar43;
    fVar44 = ((_LC57 * fVar71 + _LC59) * fVar71 + _LC61) * fVar71 * fVar44 + fVar44;
    fVar15 = (float)(__LC62 & (__LC41 & iVar29 << 0x1e ^ iVar29 << 0x1f ^
                              ((uint)fVar15 & uVar48 | ~uVar48 & (uint)fVar49)) |
                    ~__LC62 & (uint)(fVar21 * (float)((~uVar48 & (uint)fVar15 |
                                                      (uint)fVar49 & uVar48) ^
                                                     ((uint)fVar45 ^ iVar29 << 0x1e) & __LC41)));
    fVar16 = (float)(_UNK_00102a14 &
                     (_UNK_00102a04 & iVar53 << 0x1e ^ iVar53 << 0x1f ^
                     ((uint)fVar35 & uVar64 | ~uVar64 & (uint)fVar59)) |
                    ~_UNK_00102a14 &
                    (uint)(fVar16 * (float)((~uVar64 & (uint)fVar35 | (uint)fVar59 & uVar64) ^
                                           ((uint)fVar45 ^ iVar53 << 0x1e) & _UNK_00102a04)));
    fVar22 = (float)(_UNK_00102a18 &
                     (_UNK_00102a08 & iVar54 << 0x1e ^ iVar54 << 0x1f ^
                     ((uint)fVar43 & uVar65 | ~uVar65 & (uint)fVar60)) |
                    ~_UNK_00102a18 &
                    (uint)(fVar22 * (float)((~uVar65 & (uint)fVar43 | (uint)fVar60 & uVar65) ^
                                           ((uint)fVar45 ^ iVar54 << 0x1e) & _UNK_00102a08)));
    fVar25 = (float)(_UNK_00102a1c &
                     (_UNK_00102a0c & iVar55 << 0x1e ^ iVar55 << 0x1f ^
                     ((uint)fVar44 & uVar67 | ~uVar67 & (uint)fVar61)) |
                    ~_UNK_00102a1c &
                    (uint)(fVar25 * (float)((~uVar67 & (uint)fVar44 | (uint)fVar61 & uVar67) ^
                                           ((uint)fVar45 ^ iVar55 << 0x1e) & _UNK_00102a0c)));
    fVar35 = (float)((uint)fVar15 ^ uVar28);
    fVar43 = (float)((uint)fVar16 ^ uVar63);
    fVar44 = (float)((uint)fVar22 ^ uVar74);
    fVar49 = (float)((uint)fVar25 ^ uVar75);
    fVar60 = fVar16 * 0.0 + (fVar34 * fVar25 - fVar42 * fVar15) + fVar27 * fVar22;
    fVar59 = (fVar15 * 0.0 + fVar27 * fVar25 + fVar42 * fVar16) - fVar34 * fVar22;
    fVar21 = ((fVar25 * 0.0 - fVar15 * fVar27) - fVar34 * fVar16) - fVar22 * fVar42;
    fVar15 = ((fVar42 * fVar25 + fVar15 * fVar34) - fVar27 * fVar16) + fVar22 * 0.0;
    local_38._4_4_ = fVar49 * fVar15 + ((fVar43 * fVar59 + fVar44 * fVar21) - fVar35 * fVar60);
    local_38._0_4_ = fVar35 * fVar15 + fVar49 * fVar60 + (fVar43 * fVar21 - fVar44 * fVar59);
    fStack_30 = (fVar44 * fVar60 + fVar49 * fVar59 + fVar35 * fVar21) - fVar43 * fVar15;
    auVar30._4_4_ = fVar60 * fVar49 + (fVar43 * fVar21 - fVar59 * fVar44) + fVar15 * fVar35;
    auVar30._0_4_ = (fVar60 * fVar44 + fVar59 * fVar49 + fVar35 * fVar21) - fVar15 * fVar43;
    auVar30._8_4_ = ((fVar59 * fVar43 + fVar44 * fVar21) - fVar60 * fVar35) + fVar15 * fVar49;
    auVar33._12_4_ = ((fVar49 * fVar21 - fVar59 * fVar35) - fVar60 * fVar43) - fVar15 * fVar44;
    auVar33._0_12_ = auVar30;
    *(undefined1 (*) [16])(this + 0x140) = auVar33;
  }
  fVar21 = *(float *)(lVar12 + 0x70);
  fVar15 = *(float *)(lVar12 + 0x74);
  fVar16 = (float)((uint)local_b8 ^ uVar28);
  fVar22 = (float)((uint)fStack_b4 ^ uVar63);
  fVar25 = (float)((uint)fStack_b0 ^ uVar74);
  fVar27 = (float)((uint)fStack_ac ^ uVar75);
  fVar44 = (local_b8 * 0.0 + fStack_ac * fVar21 + *(float *)(lVar12 + 0x78) * fStack_b4) -
           fStack_b0 * fVar15;
  fVar49 = fStack_b4 * 0.0 + (fStack_ac * fVar15 - *(float *)(lVar12 + 0x78) * local_b8) +
           fStack_b0 * fVar21;
  fVar43 = ((*(float *)(lVar12 + 0x78) * fStack_ac + local_b8 * fVar15) - fStack_b4 * fVar21) +
           fStack_b0 * 0.0;
  fVar34 = ((fStack_ac * 0.0 - fVar21 * local_b8) - fStack_b4 * fVar15) -
           fStack_b0 * *(float *)(lVar12 + 0x78);
  fVar42 = fVar43 * fVar16 + fVar49 * fVar27 + (fVar22 * fVar34 - fVar44 * fVar25);
  fVar35 = fVar43 * fVar27 + ((fVar25 * fVar34 + fVar44 * fVar22) - fVar49 * fVar16);
  fVar21 = (fVar49 * fVar25 + fVar16 * fVar34 + fVar44 * fVar27) - fVar43 * fVar22;
  auVar38._4_4_ = fVar35;
  auVar38._0_4_ = fVar35;
  auVar38._8_4_ = fVar35;
  auVar38._12_4_ = fVar35;
  fVar15 = _LC15;
  if (0.0 <= fVar66 * ((fVar27 * fVar49 + (fVar22 * fVar34 - fVar25 * fVar44) + fVar16 * fVar43) *
                       auVar30._0_4_ - fVar21 * (float)local_38._0_4_) +
             ((((fVar25 * fVar34 + fVar22 * fVar44) - fVar16 * fVar49) + fVar27 * fVar43) *
              auVar30._4_4_ - fVar42 * (float)local_38._4_4_) * fVar58 + 0.0 +
             (((fVar25 * fVar49 + fVar16 * fVar34 + fVar27 * fVar44) - fVar22 * fVar43) *
              auVar30._8_4_ - fVar35 * fStack_30) * fVar62) {
    fVar15 = _LC16;
  }
  auVar39._4_12_ = auVar38._4_12_;
  auVar39._0_4_ =
       fVar35 * *(float *)(this + 0x148) +
       *(float *)(this + 0x144) * fVar42 + *(float *)(this + 0x140) * fVar21 + 0.0;
  auVar18._0_4_ = (uint)auVar39._0_4_ ^ uVar8 & (uint)auVar39._0_4_;
  auVar18._4_4_ = (uint)auVar39._0_4_ ^ uVar8 & (uint)auVar39._0_4_;
  auVar18._8_4_ = (uint)auVar39._0_4_ ^ uVar8 & (uint)auVar39._0_4_;
  auVar18._12_4_ = (uint)auVar39._0_4_ ^ uVar8 & (uint)auVar39._0_4_;
  auVar6._4_4_ = _UNK_00102974;
  auVar6._0_4_ = _LC15;
  auVar6._8_4_ = _UNK_00102978;
  auVar6._12_4_ = _UNK_0010297c;
  auVar37 = minps(auVar18,auVar6);
  fVar21 = auVar37._0_4_;
  auVar23._0_4_ = (_LC15 - fVar21) * fVar26;
  auVar23._4_4_ = (_LC15 - auVar37._4_4_) * fVar26;
  auVar23._8_4_ = (_LC15 - auVar37._8_4_) * fVar26;
  auVar23._12_4_ = (_LC15 - auVar37._12_4_) * fVar26;
  uVar28 = (int)-(uint)(fVar26 < fVar21) >> 0x1f;
  auVar37 = sqrtps(auVar39,auVar23);
  fVar16 = (float)((uint)auVar23._0_4_ & uVar28 | ~uVar28 & (uint)(fVar21 * fVar21));
  fVar21 = (float)(auVar37._0_4_ & uVar28 | ~uVar28 & (uint)fVar21);
  fVar21 = ((((_LC23 * fVar16 + _LC25) * fVar16 + _LC27) * fVar16 + _LC29) * fVar16 + _LC31) *
           fVar16 * fVar21 + fVar21;
  *(float *)(this + 0x150) =
       (_LC33 - (float)(((uint)(_LC33 - (fVar21 + fVar21)) & uVar28 | ~uVar28 & (uint)fVar21) ^
                       uVar8 & (uint)auVar39._0_4_)) * fVar15 * param_1 + *(float *)(this + 0x150);
  fStack_6c = local_78;
  fStack_5c = local_68;
  fStack_4c = local_58;
  fStack_3c = local_48;
LAB_001019c0:
  fVar25 = (float)((uint)local_28 ^ uStack_8c & (uint)local_28);
  fVar27 = (float)((uint)local_28 ^ uStack_8c & (uint)local_28);
  fVar34 = (float)((uint)local_28 ^ uStack_8c & (uint)local_28);
  fVar42 = (float)((uint)local_28 ^ uStack_8c & (uint)local_28);
  iVar29 = (int)(fStack_6c * fVar25 + fVar26);
  fVar15 = (float)iVar29;
  fVar21 = (float)(int)(fStack_6c * fVar27 + fVar26);
  fVar16 = (float)(int)(fStack_6c * fVar34 + fVar26);
  fVar22 = (float)(int)(fStack_6c * fVar42 + fVar26);
  uVar28 = (iVar29 << 0x1f) >> 0x1f;
  fVar15 = ((fVar25 - fStack_5c * fVar15) - fStack_4c * fVar15) - fVar15 * fStack_3c;
  fVar21 = ((fVar27 - fStack_5c * fVar21) - fStack_4c * fVar21) - fVar21 * fStack_3c;
  fVar16 = ((fVar34 - fStack_5c * fVar16) - fStack_4c * fVar16) - fVar16 * fStack_3c;
  fVar22 = ((fVar42 - fStack_5c * fVar22) - fStack_4c * fVar22) - fVar22 * fStack_3c;
  fVar25 = fVar15 * fVar15;
  fVar27 = fVar21 * fVar21;
  fVar34 = fVar16 * fVar16;
  fVar42 = fVar22 * fVar22;
  auVar19._0_4_ =
       (((((_LC64 * fVar25 + _LC66) * fVar25 + _LC68) * fVar25 + _LC70) * fVar25 + _LC72) * fVar25 +
       _LC74) * fVar25 * fVar15 + fVar15;
  auVar19._4_4_ =
       (((((_LC64 * fVar27 + _LC66) * fVar27 + _LC68) * fVar27 + _LC70) * fVar27 + _LC72) * fVar27 +
       _LC74) * fVar27 * fVar21 + fVar21;
  auVar19._8_4_ =
       (((((_LC64 * fVar34 + _LC66) * fVar34 + _LC68) * fVar34 + _LC70) * fVar34 + _LC72) * fVar34 +
       _LC74) * fVar34 * fVar16 + fVar16;
  auVar19._12_4_ =
       (((((_LC64 * fVar42 + _LC66) * fVar42 + _LC68) * fVar42 + _LC70) * fVar42 + _LC72) * fVar42 +
       _LC74) * fVar42 * fVar22 + fVar22;
  auVar32._4_4_ = _LC16;
  auVar32._0_4_ = _LC16;
  auVar32._8_4_ = _LC16;
  auVar32._12_4_ = _LC16;
  auVar37 = divps(auVar32,auVar19);
  if (*(char *)(lVar12 + 0x30) == '\0') {
    fVar21 = (float)*(undefined8 *)(param_2 + 0x400);
    fVar15 = (float)*(undefined8 *)(param_2 + 0x408);
    fVar16 = (float)((ulong)*(undefined8 *)(param_2 + 0x400) >> 0x20);
  }
  else {
    fVar21 = (float)*(undefined8 *)(lVar12 + 0x40);
    fVar15 = (float)*(undefined8 *)(lVar12 + 0x48);
    fVar16 = (float)((ulong)*(undefined8 *)(lVar12 + 0x40) >> 0x20);
  }
  auVar17 = SUB1612((undefined1  [16])0x0,0);
  if (*(char *)(lVar13 + 0x78) != '\0') {
    auVar17 = SUB1612(**(undefined1 (**) [16])(lVar13 + 0x48),0);
  }
  fVar27 = auVar17._8_4_ * fVar66 + auVar17._4_4_ * fVar62 + fVar58 * auVar17._0_4_ + 0.0;
  fVar27 = fVar27 * fVar27;
  fVar22 = *(float *)(this + 0x1c);
  fVar25 = _LC15;
  if (0.0 <= fVar22) {
    fVar25 = _LC16;
  }
  for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
    while( true ) {
      lVar13 = *plVar9;
      lVar2 = *(long *)(lVar13 + 8);
      if (*(float *)(lVar2 + 0x9c) == 0.0) break;
      fVar34 = *(float *)(lVar2 + 0x9c) * (float)(uVar7 & (uint)fVar22);
      if (((this[0x125] == (MotorcycleController)0x0) || (fVar27 <= __LC76)) ||
         (fVar42 = *(float *)(lVar2 + 0x48) * (float)*(undefined8 *)(lVar12 + 0x78) +
                   (float)((ulong)*(undefined8 *)(lVar12 + 0x70) >> 0x20) * *(float *)(lVar2 + 0x44)
                   + (float)*(undefined8 *)(lVar12 + 0x70) * *(float *)(lVar2 + 0x40) + 0.0,
         fVar42 <= __LC76)) {
        *(float *)(lVar13 + 0x88) = fVar34 * fVar25;
      }
      else {
        auVar72._4_4_ = _LC15;
        auVar72._0_4_ = _LC15;
        auVar72._8_4_ = _LC15;
        auVar72._12_4_ = _LC15;
        fVar42 = (fVar24 * (float)(uStack_8c & (uint)local_28 ^
                                  (auVar37._0_4_ & uVar28 | ~uVar28 & (uint)auVar19._0_4_)) *
                 SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar21 * fVar21 + 0.0)) /
                 (fVar42 * fVar27);
        auVar20._0_8_ =
             CONCAT44((uint)fVar42 ^ uStack_8c & (uint)fVar42,
                      (uint)fVar42 ^ uStack_8c & (uint)fVar42);
        auVar20._8_4_ = (uint)fVar42 ^ uStack_8c & (uint)fVar42;
        auVar20._12_4_ = (uint)fVar42 ^ uStack_8c & (uint)fVar42;
        auVar51._8_4_ = auVar20._8_4_;
        auVar51._0_8_ = auVar20._0_8_;
        auVar51._12_4_ = auVar20._12_4_;
        auVar52 = minps(auVar51,auVar72);
        fVar58 = auVar52._0_4_;
        auVar73._0_4_ = (_LC15 - fVar58) * fVar26;
        auVar73._4_4_ = (_LC15 - auVar52._4_4_) * fVar26;
        auVar73._8_4_ = (_LC15 - auVar52._8_4_) * fVar26;
        auVar73._12_4_ = (_LC15 - auVar52._12_4_) * fVar26;
        uVar63 = (int)-(uint)(fVar26 < fVar58) >> 0x1f;
        auVar52 = sqrtps(auVar20,auVar73);
        fVar62 = (float)((uint)auVar73._0_4_ & uVar63 | ~uVar63 & (uint)(fVar58 * fVar58));
        fVar58 = (float)(auVar52._0_4_ & uVar63 | ~uVar63 & (uint)fVar58);
        fVar58 = ((((_LC23 * fVar62 + _LC25) * fVar62 + _LC27) * fVar62 + _LC29) * fVar62 + _LC31) *
                 fVar62 * fVar58 + fVar58;
        fVar42 = (float)(((uint)(_LC33 - (fVar58 + fVar58)) & uVar63 | ~uVar63 & (uint)fVar58) ^
                        uStack_8c & (uint)fVar42);
        if (fVar34 <= fVar42) {
          fVar42 = fVar34;
        }
        *(float *)(lVar13 + 0x88) = fVar42 * fVar25;
      }
      plVar9 = plVar9 + 1;
      if (plVar11 == plVar9) goto LAB_00101c3a;
    }
  }
LAB_00101c3a:
  *(undefined4 *)(this + 0x154) = 0;
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::WheeledVehicleController::ConstructWheel(JPH::WheelSettings const&) const */

WheelWV * __thiscall
JPH::WheeledVehicleController::ConstructWheel(WheeledVehicleController *this,WheelSettings *param_1)

{
  WheelWV *this_00;
  
  this_00 = (WheelWV *)(*Allocate)(0x1b0);
  JPH::WheelWV::WheelWV(this_00,(WheelSettingsWV *)param_1);
  return this_00;
}



/* JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings() */

void __thiscall
JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings(MotorcycleControllerSettings *this)

{
  *(undefined8 **)this = &Reallocate;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x70) != 0) {
    *(undefined8 *)(this + 0x60) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0010229f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings() */

void __thiscall
JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings(MotorcycleControllerSettings *this)

{
  *(undefined8 **)this = &Reallocate;
  if (*(long *)(this + 0xa0) != 0) {
    *(undefined8 *)(this + 0x90) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x70) != 0) {
    *(undefined8 *)(this + 0x60) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x58) != 0) {
    *(undefined8 *)(this + 0x48) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::MotorcycleController::~MotorcycleController() */

void __thiscall JPH::MotorcycleController::~MotorcycleController(MotorcycleController *this)

{
  *(code **)this = JPH::RTTI::RTTI;
  if (*(code **)(this + 0xf8) != (code *)0x0) {
    (**(code **)(this + 0xf8))(this + 0xe8,this + 0xe8,3);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x001023c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::MotorcycleController::~MotorcycleController() */

void __thiscall JPH::MotorcycleController::~MotorcycleController(MotorcycleController *this)

{
  *(code **)this = JPH::RTTI::RTTI;
  if (*(code **)(this + 0xf8) != (code *)0x0) {
    (**(code **)(this + 0xf8))(this + 0xe8,this + 0xe8,3);
  }
  if (*(long *)(this + 0xd8) != 0) {
    *(undefined8 *)(this + 200) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x90) != 0) {
    *(undefined8 *)(this + 0x80) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x78) != 0) {
    *(undefined8 *)(this + 0x68) = 0;
    (*Free)();
  }
  if (*(long *)(this + 0x48) != 0) {
    *(undefined8 *)(this + 0x38) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010247b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::AddAngularImpulse(JPH::Vec3) */

void JPH::Body::AddAngularImpulse(undefined8 param_1,uint param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar11;
  uint uVar12;
  undefined1 auVar10 [16];
  uint uVar13;
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
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar2 = *(long *)(param_3 + 0x48);
  local_18 = (uint)param_1;
  uStack_14 = (uint)((ulong)param_1 >> 0x20);
  bVar1 = *(byte *)(lVar2 + 0x7a);
  fVar23 = (float)*(undefined8 *)(param_3 + 0x18);
  fVar8 = (float)*(undefined8 *)(param_3 + 0x10);
  fVar7 = (float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
  auVar10._1_3_ = 0;
  auVar10[0] = bVar1;
  fVar4 = (float)*(undefined8 *)(lVar2 + 0x30);
  fVar15 = (float)*(undefined8 *)(lVar2 + 0x38);
  fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
  fVar16 = (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
  auVar10[4] = bVar1;
  auVar10._5_3_ = 0;
  auVar10[8] = bVar1;
  auVar10._9_3_ = 0;
  auVar10[0xc] = bVar1;
  auVar10._13_3_ = 0;
  auVar3._4_4_ = _UNK_00102964;
  auVar3._0_4_ = __LC14;
  auVar3._8_4_ = _UNK_00102968;
  auVar3._12_4_ = _UNK_0010296c;
  auVar10 = auVar10 & auVar3;
  uVar9 = -(uint)(auVar10._0_4_ == __LC14);
  uVar11 = -(uint)(auVar10._4_4_ == _UNK_00102964);
  uVar12 = -(uint)(auVar10._8_4_ == _UNK_00102968);
  uVar13 = -(uint)(auVar10._12_4_ == _UNK_0010296c);
  fVar17 = (float)(local_18 & uVar9);
  fVar18 = (float)(uStack_14 & uVar11);
  fVar19 = (float)(param_2 & uVar12);
  fVar22 = (fVar7 * fVar4 + fVar8 * fVar16 + fVar21 * fVar15) - fVar23 * fVar5;
  fVar14 = (fVar7 * fVar5 - fVar8 * fVar15) + fVar21 * fVar16 + fVar23 * fVar4;
  fVar20 = fVar22 + fVar22;
  fVar6 = ((fVar7 * fVar15 + fVar8 * fVar5) - fVar21 * fVar4) + fVar23 * fVar16;
  fVar24 = fVar14 + fVar14;
  fVar4 = ((fVar7 * fVar16 - fVar8 * fVar4) - fVar21 * fVar5) - fVar23 * fVar15;
  fVar5 = fVar4 * (fVar6 + fVar6);
  fVar23 = fVar6 * (fVar6 + fVar6);
  fVar16 = fVar6 * fVar24 - fVar20 * fVar4;
  fVar15 = fVar6 * fVar20 + fVar24 * fVar4;
  fVar21 = fVar20 * fVar4 + fVar6 * fVar24;
  fVar25 = fVar14 * fVar20 - fVar5;
  fVar5 = fVar14 * fVar20 + fVar5;
  fVar6 = fVar6 * fVar20 - fVar24 * fVar4;
  fVar4 = (_LC15 - fVar14 * fVar24) - fVar23;
  fVar26 = (_LC15 - fVar23) - fVar22 * fVar20;
  fVar14 = (_LC15 - fVar22 * fVar20) - fVar14 * fVar24;
  fVar23 = (fVar17 * fVar4 + fVar18 * fVar5 + fVar19 * fVar6) * *(float *)(lVar2 + 0x20);
  fVar7 = (fVar17 * fVar25 + fVar18 * fVar26 + fVar19 * fVar21) * *(float *)(lVar2 + 0x24);
  fVar8 = (fVar17 * fVar15 + fVar18 * fVar16 + fVar19 * fVar14) * *(float *)(lVar2 + 0x28);
  fVar15 = (float)((uint)((float)((uint)(fVar4 * fVar23 + fVar7 * fVar25 + fVar8 * fVar15) & uVar9)
                         + *(float *)(lVar2 + 0x10)) & uVar9);
  fVar5 = (float)((uint)((float)((uint)(fVar5 * fVar23 + fVar7 * fVar26 + fVar8 * fVar16) & uVar11)
                        + *(float *)(lVar2 + 0x14)) & uVar11);
  fVar16 = (float)((uint)((float)((uint)(fVar6 * fVar23 + fVar7 * fVar21 + fVar8 * fVar14) & uVar12)
                         + *(float *)(lVar2 + 0x18)) & uVar12);
  fVar23 = (float)((uint)((float)((uint)(fVar23 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0) & uVar13) +
                         *(float *)(lVar2 + 0x1c)) & uVar13);
  *(float *)(lVar2 + 0x10) = fVar15;
  *(float *)(lVar2 + 0x14) = fVar5;
  *(float *)(lVar2 + 0x18) = fVar16;
  *(float *)(lVar2 + 0x1c) = fVar23;
  fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + 0.0 + fVar5 * fVar5;
  fVar4 = *(float *)(lVar2 + 0x68);
  if (fVar7 <= fVar4 * fVar4) {
    return;
  }
  fVar4 = fVar4 / SQRT(fVar7);
  *(float *)(lVar2 + 0x10) = fVar4 * fVar15;
  *(float *)(lVar2 + 0x14) = fVar4 * fVar5;
  *(float *)(lVar2 + 0x18) = fVar4 * fVar16;
  *(float *)(lVar2 + 0x1c) = fVar4 * fVar23;
  return;
}



/* JPH::GetRTTIOfType(JPH::MotorcycleControllerSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC77;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MotorcycleController::~MotorcycleController() */

void __thiscall JPH::MotorcycleController::~MotorcycleController(MotorcycleController *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings() */

void __thiscall
JPH::MotorcycleControllerSettings::~MotorcycleControllerSettings(MotorcycleControllerSettings *this)

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




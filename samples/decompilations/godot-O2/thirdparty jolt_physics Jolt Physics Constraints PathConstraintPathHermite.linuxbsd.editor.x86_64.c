
/* _FUN() */

void JPH::GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::{lambda()#1}::_FUN(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Allocate)(0x30);
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::PathConstraintPathHermite::Point::sCreateRTTI(JPH::RTTI&) */

void JPH::PathConstraintPathHermite::Point::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::PathConstraintPathHermite::sCreateRTTI(JPH::RTTI&) */

void JPH::PathConstraintPathHermite::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((PathConstraintPath *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PathConstraintPathHermite::GetPointOnPath(float, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&,
   JPH::Vec3&) const */

void __thiscall
JPH::PathConstraintPathHermite::GetPointOnPath
          (PathConstraintPathHermite *this,float param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,
          Vec3 *param_5)

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
  int iVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar19 = (int)*(undefined8 *)(this + 0x10);
  fVar23 = param_1;
  if ((float)((uint)param_1 & _LC9) < _LC3) {
    fVar23 = (float)((uint)(float)(int)param_1 | ~_LC9 & (uint)param_1);
  }
  iVar16 = (int)fVar23;
  fVar23 = param_1 - (float)iVar16;
  if (this[0xc] == (PathConstraintPathHermite)0x0) {
    fVar27 = _LC2;
    if (iVar16 < 0) {
      fVar31 = 0.0;
      lVar17 = 0;
      iVar14 = 1;
      fVar26 = 0.0;
      fVar23 = 0.0;
      fVar29 = 0.0;
      fVar28 = fVar23;
      fVar25 = fVar26;
      fVar32 = _LC1;
      fVar20 = _LC1;
      fVar30 = _LC1;
      goto LAB_00100184;
    }
    iVar14 = iVar19 + -1;
    if (iVar14 <= iVar16) {
      fVar31 = 0.0;
      fVar26 = 0.0;
      lVar17 = (long)(iVar19 + -2) * 0x30;
      fVar23 = _LC1;
      fVar28 = 0.0;
      fVar25 = _LC1;
      fVar32 = fVar26;
      fVar20 = 0.0;
      fVar30 = 0.0;
      fVar29 = _LC1;
      goto LAB_00100184;
    }
    fVar32 = _LC5 * fVar23 * fVar23;
    fVar29 = fVar32 - (fVar23 + fVar23);
    fVar20 = fVar32 - _LC8 * fVar23;
  }
  else {
    if (iVar16 < 0) {
      iVar16 = iVar16 + (-iVar16 / iVar19 + 1) * iVar19;
    }
    iVar16 = iVar16 % iVar19;
    fVar32 = _LC5 * fVar23 * fVar23;
    fVar29 = fVar32 - (fVar23 + fVar23);
    fVar20 = fVar32 - _LC8 * fVar23;
  }
  fVar28 = (fVar23 * fVar23 - fVar23) * _LC6;
  iVar14 = iVar16 + 1;
  fVar27 = fVar23 * fVar23;
  lVar17 = (long)iVar16 * 0x30;
  fVar30 = fVar23 * fVar27;
  fVar31 = fVar30 - fVar27;
  fVar26 = (fVar30 - (fVar27 + fVar27)) + fVar23;
  fVar27 = (float)((uint)fVar28 ^ (uint)_LC2);
  fVar25 = fVar32 - (fVar30 + fVar30);
  fVar32 = ((fVar30 + fVar30) - fVar32) + _LC1;
  fVar20 = fVar20 + _LC1;
  fVar30 = _LC1 - fVar23;
LAB_00100184:
  pfVar18 = (float *)(lVar17 + *(long *)(this + 0x20));
  fVar2 = pfVar18[1];
  fVar3 = pfVar18[2];
  fVar4 = pfVar18[3];
  fVar5 = pfVar18[5];
  fVar6 = pfVar18[6];
  fVar7 = pfVar18[7];
  pfVar15 = (float *)((long)(iVar14 % iVar19) * 0x30 + *(long *)(this + 0x20));
  fVar8 = pfVar15[1];
  fVar9 = pfVar15[2];
  fVar10 = pfVar15[3];
  fVar11 = pfVar15[5];
  fVar12 = pfVar15[6];
  fVar13 = pfVar15[7];
  auVar21._0_4_ = fVar20 * pfVar18[4] + fVar28 * *pfVar18 + fVar27 * *pfVar15 + fVar29 * pfVar15[4];
  auVar21._4_4_ = fVar20 * fVar5 + fVar28 * fVar2 + fVar27 * fVar8 + fVar29 * fVar11;
  auVar21._8_4_ = fVar20 * fVar6 + fVar28 * fVar3 + fVar27 * fVar9 + fVar29 * fVar12;
  auVar21._12_4_ = fVar20 * fVar7 + fVar28 * fVar4 + fVar27 * fVar10 + fVar29 * fVar13;
  *(float *)param_2 =
       fVar26 * pfVar18[4] + fVar32 * *pfVar18 + fVar25 * *pfVar15 + fVar31 * pfVar15[4];
  *(float *)(param_2 + 4) = fVar26 * fVar5 + fVar32 * fVar2 + fVar25 * fVar8 + fVar31 * fVar11;
  *(float *)(param_2 + 8) = fVar26 * fVar6 + fVar32 * fVar3 + fVar25 * fVar9 + fVar31 * fVar12;
  *(float *)(param_2 + 0xc) = fVar26 * fVar7 + fVar32 * fVar4 + fVar25 * fVar10 + fVar31 * fVar13;
  fVar27 = SQRT(auVar21._8_4_ * auVar21._8_4_ +
                auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_ + 0.0);
  auVar1._4_4_ = fVar27;
  auVar1._0_4_ = fVar27;
  auVar1._8_4_ = fVar27;
  auVar1._12_4_ = fVar27;
  auVar22 = divps(auVar21,auVar1);
  *(undefined1 (*) [16])param_3 = auVar22;
  fVar28 = fVar30 * pfVar18[8] + fVar23 * pfVar15[8];
  fVar27 = fVar30 * pfVar18[9] + fVar23 * pfVar15[9];
  fVar25 = fVar30 * pfVar18[10] + fVar23 * pfVar15[10];
  fVar23 = auVar22._4_4_ * fVar28 - fVar27 * auVar22._0_4_;
  fVar27 = auVar22._8_4_ * fVar27 - fVar25 * auVar22._4_4_;
  fVar28 = auVar22._0_4_ * fVar25 - fVar28 * auVar22._8_4_;
  auVar24._4_4_ = fVar28;
  auVar24._0_4_ = fVar27;
  auVar24._8_4_ = fVar23;
  auVar24._12_4_ = fVar23;
  fVar23 = SQRT(fVar23 * fVar23 + fVar28 * fVar28 + fVar27 * fVar27 + 0.0);
  auVar22._4_4_ = fVar23;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = fVar23;
  auVar22._12_4_ = fVar23;
  auVar22 = divps(auVar24,auVar22);
  *(undefined1 (*) [16])param_5 = auVar22;
  fVar23 = *(float *)param_3;
  fVar27 = *(float *)(param_3 + 8);
  fVar28 = auVar22._4_4_ * fVar23 - *(float *)(param_3 + 4) * auVar22._0_4_;
  *(float *)param_4 = auVar22._8_4_ * *(float *)(param_3 + 4) - fVar27 * auVar22._4_4_;
  *(float *)(param_4 + 4) = auVar22._0_4_ * fVar27 - fVar23 * auVar22._8_4_;
  *(float *)(param_4 + 8) = fVar28;
  *(float *)(param_4 + 0xc) = fVar28;
  return;
}



/* JPH::PathConstraintPathHermite::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PathConstraintPathHermite::SaveBinaryState(PathConstraintPathHermite *this,StreamOut *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::PathConstraintPath::SaveBinaryState((StreamOut *)this);
  local_24 = (uint)*(undefined8 *)(this + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,*(undefined8 *)(this + 0x20),(ulong)local_24 * 0x30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PathConstraintPathHermite::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PathConstraintPathHermite::RestoreBinaryState
          (PathConstraintPathHermite *this,StreamIn *param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  JPH::PathConstraintPath::RestoreBinaryState((StreamIn *)this);
  local_24 = (uint)*(undefined8 *)(this + 0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar2 == '\0')) {
    uVar5 = (ulong)local_24;
    uVar4 = *(undefined8 *)(this + 0x20);
    uVar3 = uVar5;
    if (*(ulong *)(this + 0x18) < uVar5) {
      uVar4 = (*Reallocate)(uVar4,*(ulong *)(this + 0x18) * 0x30,uVar5 * 0x30);
      *(ulong *)(this + 0x18) = uVar5;
      *(undefined8 *)(this + 0x20) = uVar4;
      uVar3 = (ulong)local_24;
    }
    lVar1 = *(long *)param_1;
    *(ulong *)(this + 0x10) = uVar5;
    (**(code **)(lVar1 + 0x10))(param_1,uVar4,uVar3 * 0x30);
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x28);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined1 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = &PTR_GetRTTI_00101350;
  puVar1[4] = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(undefined ***)param_1 = &PTR_GetRTTI_00101350;
    if (*(long *)((long)param_1 + 0x20) != 0) {
      *(undefined8 *)((long)param_1 + 0x10) = 0;
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x001005f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::PathConstraintPathHermite::GetRTTI() const */

undefined1 * JPH::PathConstraintPathHermite::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti,
                      "PathConstraintPathHermite",0x28,
                      GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PathConstraintPathHermite::GetClosestPoint(JPH::Vec3, float) const */

void __thiscall
JPH::PathConstraintPathHermite::GetClosestPoint
          (undefined8 param_1,float param_2,PathConstraintPathHermite *this)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
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
  float local_58;
  float fStack_54;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  lVar1 = *(long *)(this + 0x20);
  iVar2 = (int)*(undefined8 *)(this + 0x10);
  local_58 = (float)param_1;
  fStack_54 = (float)((ulong)param_1 >> 0x20);
  pfVar9 = (float *)(lVar1 + (long)(iVar2 + -1) * 0x30);
  iVar10 = iVar2 + -1;
  if (this[0xc] != (PathConstraintPathHermite)0x0) {
    iVar10 = iVar2;
  }
  fVar11 = (pfVar9[2] - param_2) * (pfVar9[2] - param_2) +
           (pfVar9[1] - fStack_54) * (pfVar9[1] - fStack_54) +
           (*pfVar9 - local_58) * (*pfVar9 - local_58) + 0.0;
  if (0 < iVar10) {
    pfVar9 = (float *)(lVar1 + 0x10);
    iVar4 = 0;
    do {
      iVar4 = iVar4 + 1;
      fVar23 = pfVar9[-4] - local_58;
      fVar24 = pfVar9[-3] - fStack_54;
      fVar25 = pfVar9[-2] - param_2;
      pfVar3 = (float *)((long)(iVar4 % iVar2) * 0x30 + lVar1);
      fVar26 = *pfVar3 - local_58;
      fVar27 = pfVar3[1] - fStack_54;
      fVar28 = pfVar3[2] - param_2;
      fVar20 = fVar25 * fVar25 + fVar24 * fVar24 + fVar23 * fVar23 + 0.0;
      if (fVar20 < fVar11) {
        fVar11 = fVar20;
      }
      fVar20 = (float)*(undefined8 *)pfVar9;
      fVar18 = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
      fVar19 = (float)*(undefined8 *)(pfVar9 + 2);
      fVar12 = fVar25 * fVar19 + fVar24 * fVar18 + fVar23 * fVar20 + 0.0;
      if ((float)((uint)fVar12 & _LC9) < _LC12) {
        local_34 = 0.0;
        fVar18 = 0.0;
        fVar19 = 0.0;
        fVar20 = _LC1;
LAB_00100d88:
        fVar23 = local_34 * *pfVar9 + fVar20 * fVar23 + fVar18 * fVar26 + fVar19 * pfVar3[4];
        fVar24 = local_34 * pfVar9[1] + fVar20 * fVar24 + fVar18 * fVar27 + fVar19 * pfVar3[5];
        fVar20 = local_34 * pfVar9[2] + fVar20 * fVar25 + fVar18 * fVar28 + fVar19 * pfVar3[6];
        fVar20 = fVar20 * fVar20 + fVar24 * fVar24 + fVar23 * fVar23 + 0.0;
        if (fVar20 < fVar11) {
          fVar11 = fVar20;
        }
      }
      else {
        fVar5 = (float)*(undefined8 *)(pfVar3 + 4);
        fVar6 = (float)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
        fVar7 = (float)*(undefined8 *)(pfVar3 + 6);
        fVar16 = fVar28 * fVar7 + fVar27 * fVar6 + fVar26 * fVar5 + 0.0;
        if ((float)((uint)fVar16 & _LC9) < _LC12) {
          local_34 = 0.0;
          fVar19 = 0.0;
          fVar20 = 0.0;
          fVar18 = _LC1;
          goto LAB_00100d88;
        }
        if (fVar12 < 0.0 == fVar16 < 0.0) {
          local_2c = _LC5;
          local_30 = 1.0;
          fVar18 = 1.0;
          local_34 = 0.0;
          local_38 = _LC6;
          fVar20 = _LC11;
        }
        else {
          local_30 = 1.0;
          iVar8 = 4;
          local_34 = 0.0;
          local_2c = 3.0;
          local_38 = 6.0;
          do {
            fVar16 = (local_34 + local_30) * _LC11;
            fVar13 = fVar16 * fVar16;
            fVar14 = fVar16 * fVar13;
            fVar21 = _LC5 * fVar13;
            fVar15 = fVar14 - fVar13;
            fVar29 = fVar21 - (fVar14 + fVar14);
            fVar33 = (fVar14 - (fVar13 + fVar13)) + fVar16;
            fVar17 = _LC6 * (fVar13 - fVar16);
            fVar22 = fVar21 - (fVar16 + fVar16);
            fVar14 = ((fVar14 + fVar14) - fVar21) + _LC1;
            fVar21 = (fVar21 - _LC8 * fVar16) + _LC1;
            fVar13 = (float)((uint)fVar17 ^ _LC2);
            fVar14 = (fVar22 * fVar7 + fVar13 * fVar28 + fVar17 * fVar25 + fVar21 * fVar19) *
                     (fVar15 * fVar7 + fVar29 * fVar28 + fVar14 * fVar25 + fVar33 * fVar19) +
                     (fVar22 * fVar6 + fVar13 * fVar27 + fVar17 * fVar24 + fVar21 * fVar18) *
                     (fVar15 * fVar6 + fVar29 * fVar27 + fVar14 * fVar24 + fVar33 * fVar18) +
                     (fVar22 * fVar5 + fVar13 * fVar26 + fVar17 * fVar23 + fVar21 * fVar20) *
                     (fVar15 * fVar5 + fVar29 * fVar26 + fVar14 * fVar23 + fVar33 * fVar20) + 0.0;
            fVar13 = fVar16;
            if ((float)((uint)fVar14 & _LC9) < _LC12) break;
            if (fVar12 < 0.0 != fVar14 < 0.0) {
              fVar13 = local_34;
              local_30 = fVar16;
            }
            local_34 = fVar13;
            iVar8 = iVar8 + -1;
            fVar16 = local_34;
            fVar13 = local_30;
          } while (iVar8 != 0);
          local_30 = fVar13;
          local_34 = fVar16;
          if (local_34 == local_30) {
            fVar12 = local_34 * local_34;
            fVar18 = local_34 * fVar12;
            fVar19 = fVar18 - fVar12;
            local_34 = (fVar18 - (fVar12 + fVar12)) + local_34;
            fVar20 = ((fVar18 + fVar18) - _LC5 * fVar12) + _LC1;
            fVar18 = _LC5 * fVar12 - (fVar18 + fVar18);
            goto LAB_00100d88;
          }
          fVar18 = local_30 - local_34;
          fVar20 = (local_34 + local_30) * _LC11;
        }
        fVar19 = *pfVar9;
        fVar12 = pfVar9[1];
        fVar5 = pfVar9[2];
        fVar6 = pfVar3[4];
        fVar7 = pfVar3[5];
        fVar16 = pfVar3[6];
        iVar8 = 10;
        while( true ) {
          fVar13 = fVar20 * fVar20;
          fVar17 = fVar20 * fVar13;
          fVar15 = local_2c * fVar13;
          fVar22 = fVar17 - fVar13;
          fVar14 = (fVar13 - fVar20) * local_38;
          fVar31 = fVar15 - (fVar17 + fVar17);
          fVar32 = (fVar17 - (fVar13 + fVar13)) + fVar20;
          fVar17 = ((fVar17 + fVar17) - fVar15) + _LC1;
          fVar21 = fVar15 - (fVar20 + fVar20);
          fVar30 = (float)(_LC2 ^ (uint)fVar14);
          fVar13 = (fVar15 - _LC8 * fVar20) + _LC1;
          fVar29 = fVar22 * fVar6 + fVar31 * fVar26 + fVar17 * fVar23 + fVar32 * fVar19;
          fVar33 = fVar22 * fVar7 + fVar31 * fVar27 + fVar17 * fVar24 + fVar32 * fVar12;
          fVar22 = fVar22 * fVar16 + fVar31 * fVar28 + fVar17 * fVar25 + fVar32 * fVar5;
          fVar15 = fVar30 * fVar26 + fVar14 * fVar23 + fVar13 * fVar19 + fVar21 * fVar6;
          fVar17 = fVar30 * fVar27 + fVar14 * fVar24 + fVar13 * fVar12 + fVar21 * fVar7;
          fVar14 = fVar30 * fVar28 + fVar14 * fVar25 + fVar13 * fVar5 + fVar21 * fVar16;
          fVar30 = _LC13 * fVar20 - local_38;
          fVar13 = (float)(_LC2 ^ (uint)fVar30);
          fVar31 = local_38 * fVar20 - _LC8;
          fVar21 = local_38 * fVar20 - __LC14;
          fVar13 = fVar14 * fVar14 + fVar17 * fVar17 + fVar15 * fVar15 + 0.0 +
                   (fVar13 * fVar28 + fVar30 * fVar25 + fVar31 * fVar5 + fVar21 * fVar16) * fVar22 +
                   (fVar13 * fVar26 + fVar30 * fVar23 + fVar31 * fVar19 + fVar21 * fVar6) * fVar29 +
                   0.0 + (fVar13 * fVar27 + fVar30 * fVar24 + fVar31 * fVar12 + fVar21 * fVar7) *
                         fVar33;
          if (fVar13 == 0.0) break;
          fVar13 = (float)((uint)(fVar14 * fVar22 + fVar17 * fVar33 + fVar15 * fVar29 + 0.0) ^ _LC2)
                   / fVar13;
          fVar14 = (float)((uint)fVar18 ^ _LC2);
          if ((float)((uint)fVar18 ^ _LC2) <= fVar13) {
            fVar14 = fVar13;
          }
          fVar13 = fVar18;
          if (fVar14 <= fVar18) {
            fVar13 = fVar14;
          }
          if ((((local_30 < fVar20) && (0.0 < fVar13)) || ((fVar20 < local_34 && (fVar13 < 0.0))))
             || ((fVar20 = fVar20 + fVar13, (float)((uint)fVar13 & _LC9) < _LC15 ||
                 (iVar8 = iVar8 + -1, iVar8 == 0)))) break;
        }
        if ((0.0 <= fVar20) &&
           ((fVar20 <= _LC1 &&
            (fVar20 = fVar22 * fVar22 + fVar33 * fVar33 + fVar29 * fVar29 + 0.0, fVar20 < fVar11))))
        {
          fVar11 = fVar20;
        }
      }
      pfVar9 = pfVar9 + 0xc;
    } while (iVar4 != iVar10);
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintPathHermite::Point*) */

undefined1 * JPH::GetRTTIOfType(Point *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti,
                      "PathConstraintPathHermite::Point",0x30,
                      GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::{lambda(void*)#1}::_FUN
                      ,PathConstraintPathHermite::Point::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintPathHermite::Point*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintPathHermite*) */

undefined1 * JPH::GetRTTIOfType(PathConstraintPathHermite *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti,
                      "PathConstraintPathHermite",0x28,
                      GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PathConstraintPathHermite*)::{lambda(void*)#1}::_FUN,
                      PathConstraintPathHermite::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintPathHermite*)::rtti;
}



/* JPH::PathConstraintPathHermite::CastTo(JPH::RTTI const*) const */

void JPH::PathConstraintPathHermite::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PathConstraintPathHermite *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::PathConstraintPathHermite::GetPathMaxFraction() const */

undefined8 __thiscall
JPH::PathConstraintPathHermite::GetPathMaxFraction(PathConstraintPathHermite *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = *(ulong *)(this + 0x10);
  if (this[0xc] == (PathConstraintPathHermite)0x0) {
    uVar1 = uVar1 - 1;
  }
  if ((long)uVar1 < 0) {
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)uVar1;
    return auVar3._0_8_;
  }
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)(long)uVar1;
  return auVar2._0_8_;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PathConstraintPathHermite::~PathConstraintPathHermite() */

void __thiscall
JPH::PathConstraintPathHermite::~PathConstraintPathHermite(PathConstraintPathHermite *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00101350;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x0010122d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PathConstraintPathHermite::~PathConstraintPathHermite() */

void __thiscall
JPH::PathConstraintPathHermite::~PathConstraintPathHermite(PathConstraintPathHermite *this)

{
  *(undefined ***)this = &PTR_GetRTTI_00101350;
  if (*(long *)(this + 0x20) != 0) {
    *(undefined8 *)(this + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00101262. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(*(long *)(this + 0x20));
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintPathHermite::Point*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC17;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PathConstraintPathHermite::~PathConstraintPathHermite() */

void __thiscall
JPH::PathConstraintPathHermite::~PathConstraintPathHermite(PathConstraintPathHermite *this)

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



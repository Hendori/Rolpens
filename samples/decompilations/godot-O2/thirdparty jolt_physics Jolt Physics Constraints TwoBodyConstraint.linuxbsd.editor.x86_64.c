
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::TwoBodyConstraintSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::TwoBodyConstraintSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ConstraintSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::TwoBodyConstraint::BuildIslands(unsigned int, JPH::IslandBuilder&, JPH::BodyManager&) */

void __thiscall
JPH::TwoBodyConstraint::BuildIslands
          (TwoBodyConstraint *this,uint param_1,IslandBuilder *param_2,BodyManager *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  lVar4 = *(long *)(this + 0x28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(this + 0x30);
  local_28 = 0xffffffffffffffff;
  cVar1 = *(char *)(lVar2 + 0x78);
  if (*(char *)(lVar4 + 0x78) == '\x02') {
    lVar3 = *(long *)(lVar4 + 0x48);
    if ((lVar3 == 0) || (uVar5 = *(uint *)(lVar3 + 0x70), uVar5 == 0xffffffff)) {
      local_28 = CONCAT44(0xffffffff,*(undefined4 *)(lVar4 + 0x70));
      if ((cVar1 == '\x02') &&
         ((*(long *)(lVar2 + 0x48) == 0 || (*(int *)(*(long *)(lVar2 + 0x48) + 0x70) == -1)))) {
        lVar4 = 1;
        goto LAB_00100167;
      }
LAB_00100139:
      JPH::BodyManager::ActivateBodies((BodyID *)param_3,(int)&local_28);
      lVar4 = *(long *)(this + 0x28);
      goto LAB_0010008c;
    }
    lVar4 = *(long *)(lVar2 + 0x48);
    if (cVar1 != '\x02') goto joined_r0x0010011b;
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x70) == -1)) goto LAB_00100160;
  }
  else {
    if (cVar1 == '\x02') {
      if ((*(long *)(lVar2 + 0x48) == 0) || (*(int *)(*(long *)(lVar2 + 0x48) + 0x70) == -1)) {
LAB_00100160:
        lVar4 = 0;
LAB_00100167:
        *(undefined4 *)((long)&local_28 + lVar4 * 4) = *(undefined4 *)(lVar2 + 0x70);
        goto LAB_00100139;
      }
      lVar3 = *(long *)(lVar4 + 0x48);
    }
    else {
LAB_0010008c:
      lVar3 = *(long *)(lVar4 + 0x48);
    }
    uVar5 = 0xffffffff;
    lVar4 = lVar3;
joined_r0x0010011b:
    if (lVar4 == 0) goto LAB_001000ae;
  }
  uVar5 = *(uint *)(lVar3 + 0x70);
LAB_001000ae:
  JPH::IslandBuilder::LinkConstraint((uint)param_2,param_1,uVar5);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::TwoBodyConstraint::BuildIslandSplits(JPH::LargeIslandSplitter&) const */

void __thiscall
JPH::TwoBodyConstraint::BuildIslandSplits(TwoBodyConstraint *this,LargeIslandSplitter *param_1)

{
  JPH::LargeIslandSplitter::AssignSplit((Body *)param_1,*(Body **)(this + 0x28));
  return;
}



/* JPH::TwoBodyConstraintSettings::GetRTTI() const */

undefined1 * JPH::TwoBodyConstraintSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti,
                      "TwoBodyConstraintSettings",0x28,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti;
}



/* JPH::TwoBodyConstraint::DrawConstraintReferenceFrame(JPH::DebugRenderer*) const */

void __thiscall
JPH::TwoBodyConstraint::DrawConstraintReferenceFrame(TwoBodyConstraint *this,DebugRenderer *param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 *puVar3;
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
  float local_108;
  float fStack_104;
  float local_f8 [50];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pfVar1 = local_f8 + 0x20;
  (**(code **)(*(long *)this + 0x98))(pfVar1,this);
  puVar3 = *(undefined8 **)(this + 0x28);
  fVar8 = (float)puVar3[2];
  fVar11 = (float)puVar3[3];
  fVar9 = (float)((ulong)puVar3[2] >> 0x20);
  fVar14 = fVar8 + fVar8;
  fVar15 = fVar9 + fVar9;
  fVar12 = (float)((ulong)puVar3[3] >> 0x20);
  fVar2 = *(float *)(puVar3 + 1);
  lVar10 = 0;
  fVar13 = fVar12 * (fVar11 + fVar11);
  fVar16 = fVar11 * (fVar11 + fVar11);
  local_108 = (float)*puVar3;
  fStack_104 = (float)((ulong)*puVar3 >> 0x20);
  do {
    fVar4 = *(float *)((long)pfVar1 + lVar10);
    fVar5 = *(float *)((long)local_f8 + lVar10 + 0x84);
    fVar6 = *(float *)((long)local_f8 + lVar10 + 0x88);
    fVar7 = *(float *)((long)local_f8 + lVar10 + 0x8c);
    *(float *)((long)local_f8 + lVar10) =
         fVar7 * local_108 +
         fVar4 * ((_LC2 - fVar9 * fVar15) - fVar16) + fVar5 * (fVar9 * fVar14 - fVar13) +
         fVar6 * (fVar11 * fVar14 + fVar15 * fVar12);
    *(float *)((long)local_f8 + lVar10 + 4) =
         fVar7 * fStack_104 +
         fVar4 * (fVar9 * fVar14 + fVar13) + fVar5 * ((_LC2 - fVar16) - fVar8 * fVar14) +
         fVar6 * (fVar11 * fVar15 - fVar14 * fVar12);
    *(float *)((long)local_f8 + lVar10 + 8) =
         fVar7 * fVar2 +
         fVar4 * (fVar11 * fVar14 - fVar15 * fVar12) + fVar5 * (fVar14 * fVar12 + fVar11 * fVar15) +
         fVar6 * ((_LC2 - fVar8 * fVar14) - fVar9 * fVar15);
    *(float *)((long)local_f8 + lVar10 + 0xc) =
         fVar7 * 1.0 + fVar4 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  (**(code **)(*(long *)this + 0xa0))(pfVar1,this);
  puVar3 = *(undefined8 **)(this + 0x30);
  fVar8 = (float)puVar3[2];
  fVar11 = (float)puVar3[3];
  fVar9 = (float)((ulong)puVar3[2] >> 0x20);
  fVar14 = fVar8 + fVar8;
  fVar15 = fVar9 + fVar9;
  fVar12 = (float)((ulong)puVar3[3] >> 0x20);
  fVar2 = *(float *)(puVar3 + 1);
  fVar13 = fVar12 * (fVar11 + fVar11);
  lVar10 = 0;
  fVar16 = fVar11 * (fVar11 + fVar11);
  local_108 = (float)*puVar3;
  fStack_104 = (float)((ulong)*puVar3 >> 0x20);
  do {
    fVar4 = *(float *)((long)pfVar1 + lVar10);
    fVar5 = *(float *)((long)local_f8 + lVar10 + 0x84);
    fVar6 = *(float *)((long)local_f8 + lVar10 + 0x88);
    fVar7 = *(float *)((long)local_f8 + lVar10 + 0x8c);
    *(float *)((long)local_f8 + lVar10 + 0x40) =
         fVar7 * local_108 +
         fVar4 * ((_LC2 - fVar9 * fVar15) - fVar16) + fVar5 * (fVar9 * fVar14 - fVar13) +
         fVar6 * (fVar11 * fVar14 + fVar15 * fVar12);
    *(float *)((long)local_f8 + lVar10 + 0x44) =
         fVar7 * fStack_104 +
         fVar4 * (fVar9 * fVar14 + fVar13) + fVar5 * ((_LC2 - fVar16) - fVar8 * fVar14) +
         fVar6 * (fVar11 * fVar15 - fVar14 * fVar12);
    *(float *)((long)local_f8 + lVar10 + 0x48) =
         fVar7 * fVar2 +
         fVar4 * (fVar11 * fVar14 - fVar15 * fVar12) + fVar5 * (fVar14 * fVar12 + fVar11 * fVar15) +
         fVar6 * ((_LC2 - fVar8 * fVar14) - fVar9 * fVar15);
    *(float *)((long)local_f8 + lVar10 + 0x4c) =
         fVar7 * 1.0 + fVar4 * 0.0 + fVar5 * 0.0 + fVar6 * 0.0;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  JPH::DebugRenderer::DrawCoordinateSystem((Mat44 *)param_1,_LC4 * *(float *)(this + 0xc));
  JPH::DebugRenderer::DrawCoordinateSystem((Mat44 *)param_1,*(float *)(this + 0xc));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::GetRTTIOfType(JPH::TwoBodyConstraintSettings*) */

undefined1 * JPH::GetRTTIOfType(TwoBodyConstraintSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti,
                      "TwoBodyConstraintSettings",0x28,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::{lambda(void*)#1}::_FUN,
                      TwoBodyConstraintSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti);
      return GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::TwoBodyConstraintSettings*)::rtti;
}



/* JPH::TwoBodyConstraintSettings::CastTo(JPH::RTTI const*) const */

void JPH::TwoBodyConstraintSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((TwoBodyConstraintSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
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



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
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



/* JPH::GetRTTIOfType(JPH::TwoBodyConstraintSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC5;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x20);
  uVar1 = _UNK_00101de8;
  *puVar2 = __LC0;
  puVar2[1] = uVar1;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* _FUN() */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::{lambda()#1}::_FUN(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*Allocate)(0x30);
  uVar2 = _UNK_00101de8;
  uVar1 = __LC0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::SkeletalAnimation::sCreateRTTI(JPH::RTTI&) */

void JPH::SkeletalAnimation::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation*)::{lambda()#1}::_FUN(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*Allocate)(0x28);
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::{lambda()#1}::_FUN(void)

{
  long *plVar1;
  
  plVar1 = (long *)(*Allocate)(0x38);
  plVar1[1] = 0;
  *plVar1 = (long)(plVar1 + 2);
  *(undefined1 *)(plVar1 + 2) = 0;
  plVar1[6] = 0;
  *(undefined1 (*) [16])(plVar1 + 4) = (undefined1  [16])0x0;
  return;
}



/* JPH::SkeletalAnimation::AnimatedJoint::sCreateRTTI(JPH::RTTI&) */

void JPH::SkeletalAnimation::AnimatedJoint::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* JPH::SkeletalAnimation::JointState::sCreateRTTI(JPH::RTTI&) */

void JPH::SkeletalAnimation::JointState::sCreateRTTI(RTTI *param_1)

{
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar3 = *(long **)((long)param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    if ((*(long *)((long)param_1 + 8) != 0) &&
       (plVar1 = plVar3 + *(long *)((long)param_1 + 8) * 7, plVar3 < plVar1)) {
      do {
        pcVar2 = Free;
        if (plVar3[6] != 0) {
          plVar3[4] = 0;
          (*pcVar2)();
        }
        if ((long *)*plVar3 != plVar3 + 2) {
          (*Free)();
        }
        plVar3 = plVar3 + 7;
      } while (plVar3 < plVar1);
      plVar3 = *(long **)((long)param_1 + 0x18);
    }
    *(undefined8 *)((long)param_1 + 8) = 0;
    (*Free)(plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x001001f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_1);
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::{lambda(void*)#1}::_FUN
               (void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x30) != 0) {
      *(undefined8 *)((long)param_1 + 0x20) = 0;
      (*Free)();
    }
                    /* WARNING: Load size is inaccurate */
    if (*param_1 != (long)param_1 + 0x10) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x0010024a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::SkeletalAnimation::JointState*) */

undefined1 * JPH::GetRTTIOfType(JointState *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti,
                      "SkeletalAnimation::JointState",0x20,
                      GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::{lambda(void*)#1}::_FUN,
                      SkeletalAnimation::JointState::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti);
      return GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SkeletalAnimation::JointState*)::rtti;
}



/* JPH::SkeletalAnimation::Keyframe::sCreateRTTI(JPH::RTTI&) */

void JPH::SkeletalAnimation::Keyframe::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = GetRTTIOfType((JointState *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*) */

undefined1 * JPH::GetRTTIOfType(Keyframe *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti,
                      "SkeletalAnimation::Keyframe",0x30,
                      GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::{lambda(void*)#1}::_FUN,
                      SkeletalAnimation::Keyframe::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti,&__dso_handle)
      ;
      __cxa_guard_release(&GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti);
      return GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SkeletalAnimation::Keyframe*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*) */

undefined1 * JPH::GetRTTIOfType(AnimatedJoint *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti,
                      "SkeletalAnimation::AnimatedJoint",0x38,
                      GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::{lambda(void*)#1}::_FUN
                      ,SkeletalAnimation::AnimatedJoint::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti,
                   &__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti);
      return GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SkeletalAnimation::AnimatedJoint*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::SkeletalAnimation*) */

undefined1 * JPH::GetRTTIOfType(SkeletalAnimation *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::SkeletalAnimation*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::SkeletalAnimation*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::SkeletalAnimation*)::rtti,"SkeletalAnimation",0x28,
                      GetRTTIOfType(JPH::SkeletalAnimation*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::SkeletalAnimation*)::{lambda(void*)#1}::_FUN,
                      SkeletalAnimation::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::SkeletalAnimation*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::SkeletalAnimation*)::rtti);
      return GetRTTIOfType(JPH::SkeletalAnimation*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::SkeletalAnimation*)::rtti;
}



/* JPH::SkeletalAnimation::JointState::FromMatrix(JPH::Mat44 const&) */

void __thiscall JPH::SkeletalAnimation::JointState::FromMatrix(JointState *this,Mat44 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar2 = _LC8;
  fVar7 = *(float *)param_1;
  fVar11 = *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x28);
  fVar10 = fVar7 + fVar11 + fVar1;
  if (0.0 <= fVar10) {
    fVar7 = *(float *)(param_1 + 0x20);
    fVar11 = *(float *)(param_1 + 8);
    fVar1 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x24);
    fVar13 = SQRT(fVar10 + _LC7);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    fVar10 = *(float *)(param_1 + 4);
    fVar4 = *(float *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x18) = uVar9;
    fVar12 = fVar2 / fVar13;
    *(ulong *)this = CONCAT44((fVar7 - fVar11) * fVar12,(fVar1 - fVar3) * fVar12);
    *(ulong *)(this + 8) = CONCAT44(fVar13 * fVar2,(fVar10 - fVar4) * fVar12);
    return;
  }
  if (fVar11 <= fVar7) {
    if (fVar1 <= fVar7) {
      fVar7 = (fVar7 - (fVar11 + fVar1)) + _LC7;
      if (fVar7 < 0.0) {
        fVar7 = sqrtf(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar11 = _LC8 / fVar7;
      uVar8 = CONCAT44((*(float *)(param_1 + 0x10) + *(float *)(param_1 + 4)) * fVar11,fVar7 * _LC8)
      ;
      uVar9 = CONCAT44((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)) * fVar11,
                       (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x20)) * fVar11);
      goto LAB_001005a6;
    }
  }
  else if (fVar1 <= fVar11) {
    fVar7 = _LC7 + (fVar11 - (fVar7 + fVar1));
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar11 = *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(param_1 + 4);
    fVar10 = *(float *)(param_1 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    fVar13 = _LC8 / fVar7;
    fVar7 = fVar7 * _LC8;
    fVar3 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x18) = uVar9;
    *(ulong *)this = CONCAT44(fVar7,(fVar11 + fVar2) * fVar13);
    *(ulong *)(this + 8) = CONCAT44((fVar1 - fVar10) * fVar13,(fVar3 + fVar4) * fVar13);
    return;
  }
  fVar7 = (fVar1 - (fVar7 + fVar11)) + _LC7;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar11 = _LC8 / fVar7;
  uVar8 = CONCAT44((*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x18)) * fVar11,
                   (*(float *)(param_1 + 8) + *(float *)(param_1 + 0x20)) * fVar11);
  uVar9 = CONCAT44((*(float *)(param_1 + 4) - *(float *)(param_1 + 0x10)) * fVar11,fVar7 * _LC8);
LAB_001005a6:
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)this = uVar8;
  *(undefined8 *)(this + 8) = uVar9;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar6;
  return;
}



/* JPH::SkeletalAnimation::GetDuration() const */

void JPH::SkeletalAnimation::GetDuration(void)

{
  return;
}



/* JPH::SkeletalAnimation::ScaleJoints(float) */

void __thiscall JPH::SkeletalAnimation::ScaleJoints(SkeletalAnimation *this,float param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(this + 0x18);
  lVar1 = lVar3 + *(long *)(this + 8) * 0x38;
  if (lVar1 == lVar3) {
    return;
  }
  do {
    lVar2 = *(long *)(lVar3 + 0x30);
    lVar4 = *(long *)(lVar3 + 0x20) * 0x30 + lVar2;
    for (; lVar4 != lVar2; lVar2 = lVar2 + 0x30) {
      *(float *)(lVar2 + 0x10) = *(float *)(lVar2 + 0x10) * param_1;
      *(float *)(lVar2 + 0x14) = *(float *)(lVar2 + 0x14) * param_1;
      *(float *)(lVar2 + 0x18) = *(float *)(lVar2 + 0x18) * param_1;
      *(float *)(lVar2 + 0x1c) = *(float *)(lVar2 + 0x1c) * param_1;
    }
    lVar3 = lVar3 + 0x38;
  } while (lVar3 != lVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SkeletalAnimation::Sample(float, JPH::SkeletonPose&) const */

void __thiscall
JPH::SkeletalAnimation::Sample(SkeletalAnimation *this,float param_1,SkeletonPose *param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long in_FS_OFFSET;
  ushort in_FPUStatusWord;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  lVar3 = *(long *)(this + 8);
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar3 != 0) {
    lVar15 = *(long *)(this + 0x18);
    fVar29 = param_1;
    if (((*(long *)(lVar15 + 0x20) != 0) &&
        (fVar26 = *(float *)(*(long *)(lVar15 + 0x20) * 0x30 + *(long *)(lVar15 + 0x30) + -0x10),
        0.0 < fVar26)) && (this[0x20] != (SkeletalAnimation)0x0)) {
      do {
        fVar29 = fVar29 - (fVar29 / fVar26) * fVar26;
      } while ((in_FPUStatusWord & 0x400) != 0);
      if (NAN(fVar29)) {
        fmodf(param_1,fVar26);
      }
    }
    lVar3 = lVar15 + lVar3 * 0x38;
    for (; lVar3 != lVar15; lVar15 = lVar15 + 0x38) {
      iVar27 = *(int *)(lVar15 + 0x20);
      iVar14 = -1;
      while (1 < iVar27 - iVar14) {
        iVar7 = (iVar14 + iVar27) / 2;
        pfVar1 = (float *)((long)iVar7 * 0x30 + *(long *)(lVar15 + 0x30) + 0x20);
        if (fVar29 < *pfVar1 || fVar29 == *pfVar1) {
          iVar27 = iVar7;
        }
        if ((!NAN(fVar29) && !NAN(*pfVar1)) && (fVar29 >= *pfVar1 && fVar29 != *pfVar1)) {
          iVar14 = iVar7;
        }
      }
      iVar7 = JPH::Skeleton::GetJointIndex(*(basic_string_view **)param_2);
      fVar26 = _LC7;
      pauVar8 = (undefined1 (*) [16])((long)iVar7 * 0x20 + *(long *)(param_2 + 0x30));
      if (iVar14 == -1) {
        puVar2 = *(undefined8 **)(lVar15 + 0x30);
        uVar5 = puVar2[1];
        *(undefined8 *)*pauVar8 = *puVar2;
        *(undefined8 *)(*pauVar8 + 8) = uVar5;
        uVar5 = puVar2[3];
        *(undefined8 *)pauVar8[1] = puVar2[2];
        *(undefined8 *)(pauVar8[1] + 8) = uVar5;
      }
      else {
        lVar13 = *(long *)(lVar15 + 0x30);
        if (iVar27 == (int)*(long *)(lVar15 + 0x20)) {
          lVar13 = lVar13 + *(long *)(lVar15 + 0x20) * 0x30;
          uVar5 = *(undefined8 *)(lVar13 + -0x28);
          *(undefined8 *)*pauVar8 = *(undefined8 *)(lVar13 + -0x30);
          *(undefined8 *)(*pauVar8 + 8) = uVar5;
          uVar5 = *(undefined8 *)(lVar13 + -0x18);
          *(undefined8 *)pauVar8[1] = *(undefined8 *)(lVar13 + -0x20);
          *(undefined8 *)(pauVar8[1] + 8) = uVar5;
        }
        else {
          pfVar1 = (float *)(lVar13 + (long)iVar14 * 0x30);
          puVar2 = (undefined8 *)(lVar13 + 0x30 + (long)iVar14 * 0x30);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          fVar9 = pfVar1[5];
          fVar10 = pfVar1[6];
          fVar11 = pfVar1[7];
          fVar16 = (fVar29 - pfVar1[8]) / (*(float *)(puVar2 + 4) - pfVar1[8]);
          fVar28 = _LC7 - fVar16;
          fVar12 = *(float *)((long)puVar2 + 0x14);
          fVar20 = *(float *)(puVar2 + 3);
          fVar23 = *(float *)((long)puVar2 + 0x1c);
          *(float *)pauVar8[1] = pfVar1[4] * fVar28 + fVar16 * *(float *)(puVar2 + 2);
          *(float *)(pauVar8[1] + 4) = fVar9 * fVar28 + fVar16 * fVar12;
          *(float *)(pauVar8[1] + 8) = fVar10 * fVar28 + fVar16 * fVar20;
          *(float *)(pauVar8[1] + 0xc) = fVar11 * fVar28 + fVar16 * fVar23;
          fVar9 = (float)uVar5;
          fVar10 = (float)((ulong)uVar5 >> 0x20);
          fVar11 = (float)uVar6;
          fVar12 = (float)((ulong)uVar6 >> 0x20);
          fVar20 = fVar9 * *pfVar1 + fVar10 * pfVar1[1] + fVar11 * pfVar1[2] + fVar12 * pfVar1[3];
          if (fVar20 < 0.0) {
            fVar20 = (float)((uint)fVar20 ^ _LC13);
            fVar26 = _LC9;
          }
          if (__LC11 < _LC7 - fVar20) {
            auVar22._0_4_ = (uint)fVar20 ^ _LC13 & (uint)fVar20;
            auVar22._4_4_ = (uint)fVar20 ^ _LC13 & (uint)fVar20;
            auVar22._8_4_ = (uint)fVar20 ^ _LC13 & (uint)fVar20;
            auVar22._12_4_ = (uint)fVar20 ^ _LC13 & (uint)fVar20;
            auVar18._4_4_ = _LC7;
            auVar18._0_4_ = _LC7;
            auVar18._8_4_ = _LC7;
            auVar18._12_4_ = _LC7;
            auVar18 = minps(auVar22,auVar18);
            fVar23 = auVar18._0_4_;
            auVar25._0_4_ = (_LC7 - fVar23) * _LC8;
            auVar25._4_4_ = (_LC7 - auVar18._4_4_) * _LC8;
            auVar25._8_4_ = (_LC7 - auVar18._8_4_) * _LC8;
            auVar25._12_4_ = (_LC7 - auVar18._12_4_) * _LC8;
            uVar21 = (int)-(uint)(_LC8 < fVar23) >> 0x1f;
            auVar18 = sqrtps(ZEXT416((uint)(_LC7 - fVar20)),auVar25);
            fVar24 = (float)((uint)auVar25._0_4_ & uVar21 | ~uVar21 & (uint)(fVar23 * fVar23));
            fVar23 = (float)(auVar18._0_4_ & uVar21 | ~uVar21 & (uint)fVar23);
            fVar23 = ((((_LC17 * fVar24 + _LC19) * fVar24 + _LC21) * fVar24 + _LC23) * fVar24 +
                     _LC25) * fVar24 * fVar23 + fVar23;
            fVar24 = _LC27 - (float)(((uint)(_LC27 - (fVar23 + fVar23)) & uVar21 |
                                     ~uVar21 & (uint)fVar23) ^ _LC13 & (uint)fVar20);
            fVar20 = (float)(__LC28 & (uint)fVar24 ^ (uint)fVar24);
            iVar27 = (int)(fVar20 * _LC30 + _LC8);
            fVar23 = (float)iVar27;
            uVar21 = (iVar27 << 0x1f) >> 0x1f;
            fVar23 = ((fVar20 - fVar23 * _LC32) - fVar23 * _LC34) - fVar23 * __LC35;
            fVar20 = fVar23 * fVar23;
            fVar20 = (float)(((uint)((((__LC43 * fVar20 + __LC45) * fVar20 + __LC47) * fVar20 *
                                      fVar20 - fVar20 * _LC8) + _LC7) & uVar21 |
                             ~uVar21 & (uint)(((fVar20 * _LC38 + __LC39) * fVar20 + __LC41) * fVar20
                                              * fVar23 + fVar23)) ^
                            ((uint)fVar24 ^ iVar27 << 0x1e) & __LC28);
            fVar28 = fVar24 * fVar28;
            fVar30 = (float)(__LC28 & (uint)fVar28 ^ (uint)fVar28);
            iVar27 = (int)(fVar30 * _LC30 + _LC8);
            fVar23 = (float)iVar27;
            uVar21 = (iVar27 << 0x1f) >> 0x1f;
            fVar30 = ((fVar30 - fVar23 * _LC32) - fVar23 * _LC34) - fVar23 * __LC35;
            fVar23 = fVar30 * fVar30;
            fVar24 = fVar24 * fVar16;
            fVar28 = (float)(((uint)((((__LC43 * fVar23 + __LC45) * fVar23 + __LC47) * fVar23 *
                                      fVar23 - fVar23 * _LC8) + _LC7) & uVar21 |
                             ~uVar21 & (uint)(((fVar23 * _LC38 + __LC39) * fVar23 + __LC41) * fVar23
                                              * fVar30 + fVar30)) ^
                            ((uint)fVar28 ^ iVar27 << 0x1e) & __LC28) / fVar20;
            fVar23 = (float)(__LC28 & (uint)fVar24 ^ (uint)fVar24);
            iVar27 = (int)(_LC30 * fVar23 + _LC8);
            fVar16 = (float)iVar27;
            uVar21 = (iVar27 << 0x1f) >> 0x1f;
            fVar23 = ((fVar23 - _LC32 * fVar16) - _LC34 * fVar16) - fVar16 * __LC35;
            fVar16 = fVar23 * fVar23;
            fVar16 = ((float)(((uint)((((__LC43 * fVar16 + __LC45) * fVar16 + __LC47) * fVar16 *
                                       fVar16 - fVar16 * _LC8) + _LC7) & uVar21 |
                              ~uVar21 & (uint)(((_LC38 * fVar16 + __LC39) * fVar16 + __LC41) *
                                               fVar16 * fVar23 + fVar23)) ^
                             ((uint)fVar24 ^ iVar27 << 0x1e) & __LC28) * fVar26) / fVar20;
          }
          else {
            fVar16 = fVar16 * fVar26;
          }
          auVar17._0_4_ = fVar16 * fVar9 + fVar28 * *pfVar1;
          auVar17._4_4_ = fVar16 * fVar10 + fVar28 * pfVar1[1];
          auVar17._8_4_ = fVar16 * fVar11 + fVar28 * pfVar1[2];
          auVar17._12_4_ = fVar16 * fVar12 + fVar28 * pfVar1[3];
          auVar19._0_4_ =
               SQRT(auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_ +
                    auVar17._8_4_ * auVar17._8_4_ + auVar17._12_4_ * auVar17._12_4_);
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_4_ = auVar19._0_4_;
          auVar19._12_4_ = auVar19._0_4_;
          auVar18 = divps(auVar17,auVar19);
          *pauVar8 = auVar18;
        }
      }
    }
  }
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::SkeletalAnimation::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::SkeletalAnimation::SaveBinaryState(SkeletalAnimation *this,StreamOut *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = (undefined4)*(undefined8 *)(this + 8);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
  puVar5 = *(undefined8 **)(this + 0x18);
  puVar1 = puVar5 + *(long *)(this + 8) * 7;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 7) {
    local_44 = (undefined4)puVar5[1];
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
    cVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (cVar2 == '\0') {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,*puVar5,local_44);
    }
    local_44 = (undefined4)puVar5[4];
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_44,4);
    lVar3 = puVar5[6];
    lVar4 = puVar5[4] * 0x30 + lVar3;
    for (; lVar4 != lVar3; lVar3 = lVar3 + 0x30) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + 0x20,4);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3,0x10);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar3 + 0x10,0xc);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x00101041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::SkeletalAnimation::sRestoreFromBinaryState(JPH::StreamIn&) */

SkeletalAnimation * __thiscall
JPH::SkeletalAnimation::sRestoreFromBinaryState(SkeletalAnimation *this,StreamIn *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int *piVar6;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar10;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar11;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar12;
  ulong uVar13;
  ulong extraout_RDX;
  long *plVar14;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar15;
  uint uVar16;
  SkeletalAnimation *pSVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar21;
  undefined8 *puVar22;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *pbVar23;
  basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this_00;
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x20] = (SkeletalAnimation)0x0;
  piVar6 = (int *)(*Allocate)(0x28);
  *piVar6 = 0;
  piVar6[6] = 0;
  piVar6[7] = 0;
  *(undefined1 *)(piVar6 + 8) = 1;
  *(undefined1 (*) [16])(piVar6 + 2) = (undefined1  [16])0x0;
  LOCK();
  *piVar6 = *piVar6 + 1;
  UNLOCK();
  pbVar23 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_48;
  local_48 = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,pbVar23,4);
  uVar13 = (ulong)local_48;
  uVar20 = *(ulong *)(piVar6 + 2);
  if (uVar13 < uVar20) {
    lVar18 = *(long *)(piVar6 + 6);
    for (plVar14 = (long *)(lVar18 + uVar13 * 0x38); plVar14 < (long *)(lVar18 + uVar20 * 0x38);
        plVar14 = plVar14 + 7) {
      if (plVar14[6] != 0) {
        plVar14[4] = 0;
        (*Free)();
      }
      if ((long *)*plVar14 != plVar14 + 2) {
        (*Free)();
      }
    }
    uVar20 = *(ulong *)(piVar6 + 4);
  }
  else {
    uVar20 = *(ulong *)(piVar6 + 4);
  }
  if (uVar20 < uVar13) {
    pbVar21 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)(uVar13 * 0x38);
    this_00 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
              (*Allocate)(pbVar21);
    pcVar4 = Free;
    pbVar15 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar6 + 6);
    if (pbVar15 == (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0)
    goto LAB_00101541;
    lVar18 = *(long *)(piVar6 + 2) * 0x38;
    pbVar7 = this_00;
    if (this_00 < pbVar15) {
      pbVar10 = this_00 + lVar18;
      if (pbVar10 <= this_00) goto LAB_00101531;
      pbVar11 = pbVar15 + 0x10;
      if (this_00 != (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0)
      goto LAB_001014d4;
      pbVar12 = pbVar11;
      if (*(long *)(pbVar15 + 0x30) == 0) goto LAB_00101909;
      *(undefined8 *)(pbVar15 + 0x20) = 0;
      (*pcVar4)();
      pbVar15 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar15;
      goto LAB_001014b0;
    }
    if (this_00 + lVar18 + -0x38 < this_00) goto LAB_00101531;
    pbVar10 = this_00 + lVar18 + -0x38;
    pbVar15 = pbVar15 + lVar18 + -0x28;
    do {
      pbVar11 = pbVar10 + 0x10;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar10 = pbVar11;
      if (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar15 + -0x10)
          == pbVar15) {
        lVar18 = *(long *)(pbVar15 + -8);
        uVar20 = lVar18 + 1;
        uVar16 = (uint)uVar20;
        if (7 < uVar16) {
          *(undefined8 *)pbVar11 = *(undefined8 *)pbVar15;
          *(undefined8 *)(pbVar10 + (uVar20 & 0xffffffff) + 8) =
               *(undefined8 *)(pbVar15 + ((uVar20 & 0xffffffff) - 8));
          lVar18 = (long)pbVar11 - ((ulong)(pbVar10 + 0x18) & 0xfffffffffffffff8);
          uVar16 = uVar16 + (int)lVar18 & 0xfffffff8;
          if (7 < uVar16) {
            uVar19 = 0;
            do {
              uVar20 = (ulong)uVar19;
              uVar19 = uVar19 + 8;
              *(undefined8 *)(((ulong)(pbVar10 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                   *(undefined8 *)(pbVar15 + (uVar20 - lVar18));
            } while (uVar19 < uVar16);
          }
          goto LAB_00101770;
        }
        if ((uVar20 & 4) == 0) {
          if (uVar16 != 0) {
            *pbVar11 = *pbVar15;
            if ((uVar20 & 2) == 0) goto LAB_00101770;
            *(undefined2 *)(pbVar10 + (uVar20 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(pbVar15 + ((uVar20 & 0xffffffff) - 2));
            lVar18 = *(long *)(pbVar15 + -8);
          }
        }
        else {
          *(uint *)pbVar11 = *(uint *)pbVar15;
          *(undefined4 *)(pbVar10 + (uVar20 & 0xffffffff) + 0xc) =
               *(undefined4 *)(pbVar15 + ((uVar20 & 0xffffffff) - 4));
          lVar18 = *(long *)(pbVar15 + -8);
        }
      }
      else {
        *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar10 =
             *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
              (pbVar15 + -0x10);
        *(undefined8 *)(pbVar10 + 0x10) = *(undefined8 *)pbVar15;
LAB_00101770:
        lVar18 = *(long *)(pbVar15 + -8);
      }
      *(long *)(pbVar10 + 8) = lVar18;
      pbVar11 = pbVar10 + -0x38;
      uVar2 = *(undefined8 *)(pbVar15 + 0x10);
      uVar3 = *(undefined8 *)(pbVar15 + 0x18);
      *(undefined8 *)(pbVar10 + 0x30) = *(undefined8 *)(pbVar15 + 0x20);
      *(undefined8 *)(pbVar10 + 0x20) = uVar2;
      *(undefined8 *)(pbVar10 + 0x28) = uVar3;
      pbVar10 = pbVar11;
      pbVar15 = pbVar15 + -0x38;
      if (pbVar11 < this_00) goto LAB_00101529;
    } while( true );
  }
  this_00 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar6 + 6);
  pbVar15 = pbVar23;
  pbVar23 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)(uVar13 * 0x38);
LAB_00101158:
  pbVar21 = this_00 + (long)pbVar23;
  pbVar7 = this_00 + *(long *)(piVar6 + 2) * 0x38;
  if (pbVar7 < pbVar21) {
    if (pbVar7 == (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x0)
    goto LAB_001011a3;
    do {
      pbVar7[0x10] = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)pbVar7 = pbVar7 + 0x10;
      *(undefined8 *)(pbVar7 + 8) = 0;
      *(undefined8 *)(pbVar7 + 0x30) = 0;
      *(undefined1 (*) [16])(pbVar7 + 0x20) = (undefined1  [16])0x0;
LAB_001011a3:
      pbVar7 = pbVar7 + 0x38;
    } while (pbVar7 < pbVar21);
    this_00 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar6 + 6);
    pbVar21 = this_00 + (long)pbVar23;
  }
  pbVar10 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)&local_44;
  *(ulong *)(piVar6 + 2) = uVar13;
  if (pbVar21 != this_00) {
    do {
      local_44 = 0;
      pbVar12 = pbVar10;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,pbVar10,4);
      cVar5 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
      if ((cVar5 == '\0') &&
         (cVar5 = (**(code **)(*(long *)param_1 + 0x20))(param_1), cVar5 == '\0')) {
        pbVar11 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)
                  (ulong)local_44;
        pbVar23 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                   (this_00 + 8);
        if (pbVar23 < pbVar11) {
          uVar20 = (long)pbVar11 - (long)pbVar23;
          if (0x7fffffffffffffffU - (long)pbVar23 < uVar20) goto LAB_001018fd;
          pbVar7 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this_00;
          if (pbVar7 == this_00 + 0x10) {
            pbVar12 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0xf;
          }
          else {
            pbVar12 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
                       (this_00 + 0x10);
          }
          if (pbVar12 < pbVar11) {
            std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::
            _M_mutate(this_00,(ulong)pbVar23,0,(char *)0x0,uVar20);
            pbVar7 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this_00;
          }
          if (uVar20 == 1) {
            pbVar7[(long)pbVar23] =
                 (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
          }
          else {
            memset(pbVar7 + (long)pbVar23,0,uVar20);
          }
          *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this_00 + 8) =
               pbVar11;
          pbVar11[*(long *)this_00] =
               (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
          (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)this_00,local_44);
        }
        else {
          if (pbVar11 < pbVar23) {
            *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(this_00 + 8) =
                 pbVar11;
            pbVar11[*(long *)this_00] =
                 (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
          }
          (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)this_00,local_44);
        }
      }
      else {
        *(undefined8 *)(this_00 + 8) = 0;
        **(undefined1 **)this_00 = 0;
      }
      local_48 = 0;
      (**(code **)(*(long *)param_1 + 0x10))(param_1,pbVar15,4);
      uVar20 = (ulong)local_48;
      if (*(ulong *)(this_00 + 0x28) < uVar20) {
        puVar9 = (undefined8 *)
                 (*Reallocate)(*(undefined8 *)(this_00 + 0x30),*(ulong *)(this_00 + 0x28) * 0x30,
                               uVar20 * 0x30);
        *(undefined8 **)(this_00 + 0x30) = puVar9;
        *(ulong *)(this_00 + 0x28) = uVar20;
      }
      else {
        puVar9 = *(undefined8 **)(this_00 + 0x30);
      }
      puVar22 = puVar9 + uVar20 * 6;
      puVar8 = puVar9 + *(long *)(this_00 + 0x20) * 6;
      if (puVar8 < puVar22) {
        if (puVar8 == (undefined8 *)0x0) goto LAB_00101299;
        do {
          uVar3 = _UNK_00101de8;
          uVar2 = __LC0;
          *(undefined4 *)(puVar8 + 4) = 0;
          *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
          *puVar8 = uVar2;
          puVar8[1] = uVar3;
LAB_00101299:
          puVar8 = puVar8 + 6;
        } while (puVar8 < puVar22);
      }
      *(ulong *)(this_00 + 0x20) = uVar20;
      for (; puVar22 != puVar9; puVar9 = puVar9 + 6) {
        (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar9 + 4,4);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar9,0x10);
        (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar9 + 2,0xc);
      }
      this_00 = this_00 + 0x38;
      if (pbVar21 == this_00) break;
    } while( true );
  }
  (**(code **)(*(long *)param_1 + 0x10))(param_1,piVar6 + 8,1);
  if (this[0x20] == (SkeletalAnimation)0x1) {
    pSVar17 = *(SkeletalAnimation **)this;
    if (pSVar17 != (SkeletalAnimation *)0x0) {
      LOCK();
      *(int *)pSVar17 = *(int *)pSVar17 + -1;
      UNLOCK();
      if (*(int *)pSVar17 == 0) {
        plVar14 = *(long **)(pSVar17 + 0x18);
        if (plVar14 != (long *)0x0) {
          if ((*(long *)(pSVar17 + 8) != 0) &&
             (plVar1 = plVar14 + *(long *)(pSVar17 + 8) * 7, plVar14 < plVar1)) {
            do {
              pcVar4 = Free;
              if (plVar14[6] != 0) {
                plVar14[4] = 0;
                (*pcVar4)();
              }
              if ((long *)*plVar14 != plVar14 + 2) {
                (*Free)();
              }
              plVar14 = plVar14 + 7;
            } while (plVar14 < plVar1);
            plVar14 = *(long **)(pSVar17 + 0x18);
          }
          *(undefined8 *)(pSVar17 + 8) = 0;
          (*Free)(plVar14);
        }
        goto LAB_00101567;
      }
    }
  }
  else if ((this[0x20] == (SkeletalAnimation)0x2) &&
          (pSVar17 = *(SkeletalAnimation **)this, pSVar17 != this + 0x10)) {
LAB_00101567:
    (*Free)(pSVar17);
    this[0x20] = (SkeletalAnimation)0x0;
    *(int **)this = piVar6;
    goto LAB_0010133a;
  }
  this[0x20] = (SkeletalAnimation)0x0;
  *(int **)this = piVar6;
LAB_0010133a:
  LOCK();
  *piVar6 = *piVar6 + 1;
  UNLOCK();
  this[0x20] = (SkeletalAnimation)0x1;
  LOCK();
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (*piVar6 == 0) {
    plVar14 = *(long **)(piVar6 + 6);
    if (plVar14 != (long *)0x0) {
      if ((*(long *)(piVar6 + 2) != 0) &&
         (plVar1 = plVar14 + *(long *)(piVar6 + 2) * 7, plVar14 < plVar1)) {
        do {
          pcVar4 = Free;
          if (plVar14[6] != 0) {
            plVar14[4] = 0;
            (*pcVar4)();
          }
          if ((long *)*plVar14 != plVar14 + 2) {
            (*Free)();
          }
          plVar14 = plVar14 + 7;
        } while (plVar14 < plVar1);
        plVar14 = *(long **)(piVar6 + 6);
      }
      piVar6[2] = 0;
      piVar6[3] = 0;
      (*Free)(plVar14);
    }
    (*Free)(piVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
LAB_001018fd:
  std::__throw_length_error("basic_string::_M_replace_aux");
  uVar13 = extraout_RDX;
LAB_00101909:
  pbVar15 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar12 + -0x10)
  ;
  pbVar7 = this_00;
LAB_001014b0:
  if (pbVar12 != pbVar15) {
    (*Free)();
  }
  pbVar11 = pbVar11 + 0x38;
  this_00 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x38;
  if ((basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *)0x38 < pbVar10) {
LAB_001014d4:
    do {
      pbVar15 = this_00 + 0x10;
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this_00 = pbVar15;
      if (*(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar11 + -0x10)
          == pbVar11) {
        lVar18 = *(long *)(pbVar11 + -8);
        uVar20 = lVar18 + 1;
        uVar16 = (uint)uVar20;
        if (7 < uVar16) {
          *(undefined8 *)pbVar15 = *(undefined8 *)pbVar11;
          *(undefined8 *)(this_00 + (uVar20 & 0xffffffff) + 8) =
               *(undefined8 *)(pbVar11 + ((uVar20 & 0xffffffff) - 8));
          lVar18 = (long)pbVar15 - ((ulong)(this_00 + 0x18) & 0xfffffffffffffff8);
          uVar16 = (int)lVar18 + uVar16 & 0xfffffff8;
          if (7 < uVar16) {
            uVar20 = 0;
            do {
              uVar19 = (int)uVar20 + 8;
              *(undefined8 *)(((ulong)(this_00 + 0x18) & 0xfffffffffffffff8) + uVar20) =
                   *(undefined8 *)(pbVar11 + (uVar20 - lVar18));
              uVar20 = (ulong)uVar19;
            } while (uVar19 < uVar16);
          }
          goto LAB_001014f3;
        }
        if ((uVar20 & 4) == 0) {
          if (uVar16 != 0) {
            *pbVar15 = *pbVar11;
            if ((uVar20 & 2) == 0) goto LAB_001014f3;
            *(undefined2 *)(this_00 + (uVar20 & 0xffffffff) + 0xe) =
                 *(undefined2 *)(pbVar11 + ((uVar20 & 0xffffffff) - 2));
            lVar18 = *(long *)(pbVar11 + -8);
          }
        }
        else {
          *(uint *)pbVar15 = *(uint *)pbVar11;
          *(undefined4 *)(this_00 + (uVar20 & 0xffffffff) + 0xc) =
               *(undefined4 *)(pbVar11 + ((uVar20 & 0xffffffff) - 4));
          lVar18 = *(long *)(pbVar11 + -8);
        }
      }
      else {
        uVar2 = *(undefined8 *)pbVar11;
        *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this_00 =
             *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)
              (pbVar11 + -0x10);
        *(undefined8 *)(this_00 + 0x10) = uVar2;
LAB_001014f3:
        lVar18 = *(long *)(pbVar11 + -8);
      }
      *(long *)(this_00 + 8) = lVar18;
      uVar2 = *(undefined8 *)(pbVar11 + 0x20);
      pbVar15 = this_00 + 0x38;
      uVar3 = *(undefined8 *)(pbVar11 + 0x18);
      *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(pbVar11 + -0x10) =
           pbVar11;
      *(undefined8 *)(pbVar11 + -8) = 0;
      *pbVar11 = (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>)0x0;
      *(undefined8 *)(this_00 + 0x20) = *(undefined8 *)(pbVar11 + 0x10);
      *(undefined8 *)(this_00 + 0x28) = uVar3;
      *(undefined8 *)(this_00 + 0x30) = uVar2;
      pbVar11 = pbVar11 + 0x38;
      this_00 = pbVar15;
    } while (pbVar15 < pbVar10);
  }
LAB_00101529:
  pbVar15 = *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar6 + 6);
  this_00 = pbVar7;
LAB_00101531:
  (*Free)(pbVar15);
LAB_00101541:
  *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)(piVar6 + 6) = this_00;
  *(ulong *)(piVar6 + 4) = uVar13;
  pbVar15 = pbVar23;
  pbVar23 = pbVar21;
  goto LAB_00101158;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* std::__cxx11::basic_string<char, std::char_traits<char>, JPH::STLAllocator<char>
   >::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>>::_M_mutate
          (basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> *this,ulong param_1,
          ulong param_2,char *param_3,ulong param_4)

{
  undefined1 *__dest;
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined1 *__src;
  
  __n = *(long *)(this + 8) - (param_1 + param_2);
  uVar3 = (param_4 - param_2) + *(long *)(this + 8);
  if (this + 0x10 == *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this) {
    uVar1 = 0xf;
  }
  else {
    uVar1 = *(ulong *)(this + 0x10);
  }
  if (-1 < (long)uVar3) {
    if (uVar1 < uVar3) {
      uVar1 = uVar1 * 2;
      uVar2 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
        uVar2 = uVar1;
      }
      if (uVar3 < uVar1) {
        uVar3 = uVar2;
      }
    }
    __dest = (undefined1 *)(*JPH::Allocate)(uVar3 + 1);
    if (param_1 != 0) {
      if (param_1 == 1) {
        *__dest = **(undefined1 **)this;
      }
      else {
        memcpy(__dest,*(undefined1 **)this,param_1);
      }
    }
    if ((param_3 != (char *)0x0) && (param_4 != 0)) {
      if (param_4 == 1) {
        __dest[param_1] = *param_3;
      }
      else {
        memcpy(__dest + param_1,param_3,param_4);
      }
    }
    if (__n != 0) {
      __src = (undefined1 *)(param_1 + param_2 + *(long *)this);
      if (__n == 1) {
        __dest[param_4 + param_1] = *__src;
      }
      else {
        memcpy(__dest + param_4 + param_1,__src,__n);
      }
    }
    if (this + 0x10 != *(basic_string<char,std::char_traits<char>,JPH::STLAllocator<char>> **)this)
    {
      (*JPH::Free)();
    }
    *(undefined1 **)this = __dest;
    *(ulong *)(this + 0x10) = uVar3;
    return;
  }
  std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* JPH::GetRTTIOfType(JPH::SkeletalAnimation::JointState*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC53;
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



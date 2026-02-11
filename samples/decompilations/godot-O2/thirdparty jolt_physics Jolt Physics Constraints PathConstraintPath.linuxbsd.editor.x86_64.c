
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PathConstraintPath*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::PathConstraintPath::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall
JPH::PathConstraintPath::RestoreBinaryState(PathConstraintPath *this,StreamIn *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010003a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,1);
  return;
}



/* JPH::PathConstraintPath::sCreateRTTI(JPH::RTTI&) */

void JPH::PathConstraintPath::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((SerializableObject *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PathConstraintPath::GetRTTI() const */

undefined1 * JPH::PathConstraintPath::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintPath*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintPath*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintPath*)::rtti,"PathConstraintPath",
                      0x10,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::PathConstraintPath*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintPath*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintPath*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintPath*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintPath*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintPath*) */

undefined1 * JPH::GetRTTIOfType(PathConstraintPath *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PathConstraintPath*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PathConstraintPath*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PathConstraintPath*)::rtti,"PathConstraintPath",
                      0x10,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::PathConstraintPath*)::{lambda(void*)#1}::_FUN,
                      PathConstraintPath::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PathConstraintPath*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PathConstraintPath*)::rtti);
      return GetRTTIOfType(JPH::PathConstraintPath*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PathConstraintPath*)::rtti;
}



/* JPH::PathConstraintPath::CastTo(JPH::RTTI const*) const */

void JPH::PathConstraintPath::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PathConstraintPath *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::PathConstraintPath::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall
JPH::PathConstraintPath::SaveBinaryState(PathConstraintPath *this,StreamOut *param_1)

{
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((code *)**(undefined8 **)this == GetRTTI) {
    GetRTTIOfType((PathConstraintPath *)0x0);
  }
  else {
    (*(code *)**(undefined8 **)this)();
  }
  local_24 = JPH::RTTI::GetHash();
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_24,4);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100251. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0xc,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PathConstraintPath::DrawPath(JPH::DebugRenderer*, JPH::Mat44 const&) const */

void __thiscall
JPH::PathConstraintPath::DrawPath(PathConstraintPath *this,DebugRenderer *param_1,Mat44 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  float fVar27;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [16];
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
  (**(code **)(*(long *)this + 0x30))(0,this,&local_c8,local_b8,&local_a8,&local_98);
  fVar27 = *(float *)param_2;
  fVar21 = *(float *)(param_2 + 4);
  fVar22 = *(float *)(param_2 + 8);
  fVar24 = *(float *)(param_2 + 0xc);
  fVar26 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x24);
  fVar6 = *(float *)(param_2 + 0x28);
  fVar7 = *(float *)(param_2 + 0x2c);
  fVar13 = *(float *)(param_2 + 0x30);
  fVar12 = *(float *)(param_2 + 0x34);
  fVar14 = *(float *)(param_2 + 0x38);
  fVar15 = *(float *)(param_2 + 0x3c);
  fVar16 = local_a8 * fVar21;
  fVar17 = local_a8 * fVar22;
  fVar18 = local_a8 * fVar24;
  fVar23 = fStack_a4 * fVar2;
  fVar25 = fStack_a4 * fVar3;
  fStack_9c = fStack_a0 * fVar7;
  local_a8 = fStack_a0 * fVar4 + local_a8 * fVar27 + fStack_a4 * fVar26;
  fStack_a4 = fStack_a0 * fVar5 + fVar16 + fStack_a4 * fVar1;
  fStack_a0 = fStack_a0 * fVar6 + fVar17 + fVar23;
  fStack_9c = fStack_9c + fVar18 + fVar25;
  fVar16 = local_98 * fVar21;
  fVar17 = local_98 * fVar22;
  fVar18 = local_98 * fVar24;
  fVar23 = fVar2 * fStack_94;
  fVar25 = fVar3 * fStack_94;
  fStack_8c = fStack_90 * fVar7;
  local_98 = fStack_90 * fVar4 + local_98 * fVar27 + fVar26 * fStack_94;
  fStack_94 = fStack_90 * fVar5 + fVar16 + fVar1 * fStack_94;
  fStack_90 = fStack_90 * fVar6 + fVar17 + fVar23;
  fStack_8c = fStack_8c + fVar18 + fVar25;
  fVar17 = (float)(**(code **)(*(long *)this + 0x20))(this);
  fVar16 = _LC1;
  uVar11 = CONCAT44(fStack_c0 * fVar5 + local_c8 * fVar21 + fStack_c4 * fVar1 + fVar12,
                    fStack_c0 * fVar4 + local_c8 * fVar27 + fStack_c4 * fVar26 + fVar13);
  uVar10 = CONCAT44(fStack_c0 * fVar7 + local_c8 * fVar24 + fStack_c4 * fVar3 + fVar15,
                    fStack_c0 * fVar6 + local_c8 * fVar22 + fStack_c4 * fVar2 + fVar14);
  if (_LC1 < fVar17) {
    fVar27 = _LC1;
    do {
      (**(code **)(*(long *)this + 0x30))(this,&local_88,local_78,&local_68,&local_58);
      fVar21 = *(float *)param_2;
      fVar22 = *(float *)(param_2 + 4);
      fVar24 = *(float *)(param_2 + 8);
      fVar26 = *(float *)(param_2 + 0xc);
      fVar1 = *(float *)(param_2 + 0x10);
      fVar2 = *(float *)(param_2 + 0x14);
      fVar3 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(param_2 + 0x1c);
      fVar5 = *(float *)(param_2 + 0x20);
      fVar6 = *(float *)(param_2 + 0x24);
      fVar7 = *(float *)(param_2 + 0x28);
      fVar13 = *(float *)(param_2 + 0x2c);
      fVar12 = fStack_80 * fVar5 + local_88 * fVar21 + fStack_84 * fVar1 +
               *(float *)(param_2 + 0x30);
      fVar14 = fStack_80 * fVar6 + local_88 * fVar22 + fStack_84 * fVar2 +
               *(float *)(param_2 + 0x34);
      fVar15 = fStack_80 * fVar7 + local_88 * fVar24 + fStack_84 * fVar3 +
               *(float *)(param_2 + 0x38);
      fVar18 = fStack_80 * fVar13 + local_88 * fVar26 + fStack_84 * fVar4 +
               *(float *)(param_2 + 0x3c);
      uVar9 = CONCAT44(fVar18,fVar15);
      uVar8 = CONCAT44(fVar14,fVar12);
      fVar23 = local_68 * fVar21 + fStack_64 * fVar1 + fStack_60 * fVar5;
      fVar25 = local_68 * fVar22 + fStack_64 * fVar2 + fStack_60 * fVar6;
      fVar19 = local_68 * fVar24 + fStack_64 * fVar3 + fStack_60 * fVar7;
      fVar20 = local_68 * fVar26 + fStack_64 * fVar4 + fStack_60 * fVar13;
      fVar21 = local_58 * fVar21 + fStack_54 * fVar1 + fStack_50 * fVar5;
      fVar22 = local_58 * fVar22 + fStack_54 * fVar2 + fStack_50 * fVar6;
      fVar24 = local_58 * fVar24 + fStack_54 * fVar3 + fStack_50 * fVar7;
      fVar26 = local_58 * fVar26 + fStack_54 * fVar4 + fStack_50 * fVar13;
      local_68 = fVar23;
      fStack_64 = fVar25;
      fStack_60 = fVar19;
      fStack_5c = fVar20;
      local_58 = fVar21;
      fStack_54 = fVar22;
      fStack_50 = fVar24;
      fStack_4c = fVar26;
      (**(code **)(*(long *)param_1 + 0x10))
                (uVar11,uVar10,uVar8,uVar9,param_1,(undefined4)Color::sWhite);
      JPH::DebugRenderer::DrawArrow
                (uVar8,uVar9,CONCAT44(fVar25 * fVar16 + fVar14,fVar23 * fVar16 + fVar12),
                 CONCAT44(fVar20 * fVar16 + fVar18,fVar19 * fVar16 + fVar15),_LC4,param_1,
                 (undefined4)Color::sRed);
      JPH::DebugRenderer::DrawArrow
                (uVar8,uVar9,CONCAT44(fVar22 * fVar16 + fVar14,fVar21 * fVar16 + fVar12),
                 CONCAT44(fVar26 * fVar16 + fVar18,fVar24 * fVar16 + fVar15),_LC4,param_1,
                 (undefined4)Color::sGreen);
      fVar27 = fVar27 + _LC1;
      uVar11 = CONCAT44(fVar14,fVar12);
      uVar10 = CONCAT44(fVar18,fVar15);
    } while (fVar27 < fVar17);
  }
  (**(code **)(*(long *)this + 0x30))(this,&local_88,local_78,&local_68,&local_58);
  fVar27 = *(float *)param_2;
  fVar21 = *(float *)(param_2 + 4);
  fVar22 = *(float *)(param_2 + 8);
  fVar24 = *(float *)(param_2 + 0xc);
  fVar26 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_2 + 0x18);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = *(float *)(param_2 + 0x20);
  fVar5 = *(float *)(param_2 + 0x24);
  fVar6 = *(float *)(param_2 + 0x28);
  fVar7 = *(float *)(param_2 + 0x2c);
  fVar13 = fStack_80 * fVar4 + local_88 * fVar27 + fStack_84 * fVar26 + *(float *)(param_2 + 0x30);
  fVar12 = fStack_80 * fVar5 + local_88 * fVar21 + fStack_84 * fVar1 + *(float *)(param_2 + 0x34);
  fVar14 = fStack_80 * fVar6 + local_88 * fVar22 + fStack_84 * fVar2 + *(float *)(param_2 + 0x38);
  fVar15 = fStack_80 * fVar7 + local_88 * fVar24 + fStack_84 * fVar3 + *(float *)(param_2 + 0x3c);
  uVar8 = CONCAT44(fVar12,fVar13);
  uVar9 = CONCAT44(fVar15,fVar14);
  fVar17 = local_68 * fVar27 + fStack_64 * fVar26 + fStack_60 * fVar4;
  fVar18 = local_68 * fVar21 + fStack_64 * fVar1 + fStack_60 * fVar5;
  fVar23 = local_68 * fVar22 + fStack_64 * fVar2 + fStack_60 * fVar6;
  fVar25 = local_68 * fVar24 + fStack_64 * fVar3 + fStack_60 * fVar7;
  fVar27 = local_58 * fVar27 + fStack_54 * fVar26 + fStack_50 * fVar4;
  fVar21 = local_58 * fVar21 + fStack_54 * fVar1 + fStack_50 * fVar5;
  fVar22 = local_58 * fVar22 + fStack_54 * fVar2 + fStack_50 * fVar6;
  fVar24 = local_58 * fVar24 + fStack_54 * fVar3 + fStack_50 * fVar7;
  local_68 = fVar17;
  fStack_64 = fVar18;
  fStack_60 = fVar23;
  fStack_5c = fVar25;
  local_58 = fVar27;
  fStack_54 = fVar21;
  fStack_50 = fVar22;
  fStack_4c = fVar24;
  (**(code **)(*(long *)param_1 + 0x10))
            (uVar11,uVar10,uVar8,uVar9,param_1,(undefined4)Color::sWhite);
  JPH::DebugRenderer::DrawArrow
            (uVar8,uVar9,CONCAT44(fVar18 * fVar16 + fVar12,fVar17 * fVar16 + fVar13),
             CONCAT44(fVar25 * fVar16 + fVar15,fVar23 * fVar16 + fVar14),_LC4,param_1,
             (undefined4)Color::sRed);
  JPH::DebugRenderer::DrawArrow
            (uVar8,uVar9,CONCAT44(fVar21 * fVar16 + fVar12,fVar27 * fVar16 + fVar13),
             CONCAT44(fVar24 * fVar16 + fVar15,fVar22 * fVar16 + fVar14),_LC4,param_1,
             (undefined4)Color::sGreen);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::PathConstraintPath::sRestoreFromBinaryState(JPH::StreamIn&) */

PathConstraintPath * __thiscall
JPH::PathConstraintPath::sRestoreFromBinaryState(PathConstraintPath *this,StreamIn *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  StreamUtils::RestoreObject<JPH::PathConstraintPath>
            ((StreamIn *)this,(_func_void_StreamIn_ptr *)param_1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::Result<JPH::Ref<JPH::PathConstraintPath> >::SetError(char const*) */

void __thiscall
JPH::Result<JPH::Ref<JPH::PathConstraintPath>>::SetError
          (Result<JPH::Ref<JPH::PathConstraintPath>> *this,char *param_1)

{
  long *plVar1;
  long *plVar2;
  size_t __n;
  Result<JPH::Ref<JPH::PathConstraintPath>> *__dest;
  
  if (this[0x20] == (Result<JPH::Ref<JPH::PathConstraintPath>>)0x1) {
    plVar2 = *(long **)this;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  else if ((this[0x20] == (Result<JPH::Ref<JPH::PathConstraintPath>>)0x2) &&
          (*(Result<JPH::Ref<JPH::PathConstraintPath>> **)this != this + 0x10)) {
    (*Free)();
  }
  __dest = this + 0x10;
  this[0x20] = (Result<JPH::Ref<JPH::PathConstraintPath>>)0x0;
  *(Result<JPH::Ref<JPH::PathConstraintPath>> **)this = __dest;
  if (param_1 == (char *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = strlen(param_1);
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = (Result<JPH::Ref<JPH::PathConstraintPath>>)*param_1;
      goto LAB_00100914;
    }
    if (__n == 0) goto LAB_00100914;
  }
  else {
    __dest = (Result<JPH::Ref<JPH::PathConstraintPath>> *)(*Allocate)(__n + 1);
    *(size_t *)(this + 0x10) = __n;
    *(Result<JPH::Ref<JPH::PathConstraintPath>> **)this = __dest;
  }
  memcpy(__dest,param_1,__n);
  __dest = *(Result<JPH::Ref<JPH::PathConstraintPath>> **)this;
LAB_00100914:
  *(size_t *)(this + 8) = __n;
  __dest[__n] = (Result<JPH::Ref<JPH::PathConstraintPath>>)0x0;
  this[0x20] = (Result<JPH::Ref<JPH::PathConstraintPath>>)0x2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Result<JPH::Ref<JPH::PathConstraintPath> >
   JPH::StreamUtils::RestoreObject<JPH::PathConstraintPath>(JPH::StreamIn&, void
   (JPH::PathConstraintPath::*)(JPH::StreamIn&)) */

StreamIn *
JPH::StreamUtils::RestoreObject<JPH::PathConstraintPath>
          (StreamIn *param_1,_func_void_StreamIn_ptr *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long in_RCX;
  code *in_RDX;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)param_2;
  param_1[0x20] = (StreamIn)0x0;
  (**(code **)(lVar7 + 0x10))(param_2,local_44,4);
  cVar5 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
  if ((cVar5 == '\0') && (cVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2), cVar5 == '\0')) {
    lVar7 = JPH::Factory::Find((uint)Factory::sInstance);
    if (lVar7 == 0) {
      Result<JPH::Ref<JPH::PathConstraintPath>>::SetError
                ((Result<JPH::Ref<JPH::PathConstraintPath>> *)param_1,
                 "Failed to create instance of type");
    }
    else {
      plVar8 = (long *)JPH::RTTI::CreateObject();
      if (plVar8 != (long *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      if (((ulong)in_RDX & 1) != 0) {
        in_RDX = *(code **)(in_RDX + *(long *)((long)plVar8 + in_RCX) + -1);
      }
      (*in_RDX)((long *)((long)plVar8 + in_RCX),param_2);
      cVar5 = (**(code **)(*(long *)param_2 + 0x18))(param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = (**(code **)(*(long *)param_2 + 0x20))(param_2), cVar5 == '\0')) {
        if (param_1[0x20] == (StreamIn)0x1) {
          plVar2 = *(long **)param_1;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 0x18))();
            }
          }
        }
        else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
          (*Free)();
        }
        param_1[0x20] = (StreamIn)0x0;
        *(long **)param_1 = plVar8;
        if (plVar8 == (long *)0x0) {
          param_1[0x20] = (StreamIn)0x1;
          goto LAB_00100ac6;
        }
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        param_1[0x20] = (StreamIn)0x1;
      }
      else {
        Result<JPH::Ref<JPH::PathConstraintPath>>::SetError
                  ((Result<JPH::Ref<JPH::PathConstraintPath>> *)param_1,"Failed to restore object");
        if (plVar8 == (long *)0x0) goto LAB_00100ac6;
      }
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  else {
    if (param_1[0x20] == (StreamIn)0x1) {
      plVar8 = *(long **)param_1;
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
    }
    else if ((param_1[0x20] == (StreamIn)0x2) && (*(StreamIn **)param_1 != param_1 + 0x10)) {
      (*Free)();
    }
    param_1[0x20] = (StreamIn)0x0;
    *(StreamIn **)param_1 = param_1 + 0x10;
    puVar6 = (undefined8 *)(*Allocate)(0x19);
    uVar4 = _UNK_00100db8;
    uVar3 = __LC8;
    *(undefined8 *)(param_1 + 0x10) = 0x18;
    *(undefined8 **)param_1 = puVar6;
    puVar6[2] = 0x6873616820657079;
    *puVar6 = uVar3;
    puVar6[1] = uVar4;
    *(undefined8 *)(param_1 + 8) = 0x18;
    *(undefined1 *)(*(long *)param_1 + 0x18) = 0;
    param_1[0x20] = (StreamIn)0x2;
  }
LAB_00100ac6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::GetRTTIOfType(JPH::PathConstraintPath*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC9;
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



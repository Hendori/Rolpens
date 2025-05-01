
/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::DecoratedShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::DecoratedShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::DecoratedShape::GetSupportingFace(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010002b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x60))();
  return;
}



/* JPH::DecoratedShape::GetSubShapeUserData(JPH::SubShapeID const&) const */

void JPH::DecoratedShape::GetSubShapeUserData(SubShapeID *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010003b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x68))();
  return;
}



/* JPH::DecoratedShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::DecoratedShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::DecoratedShape::GetStatsRecursive(JPH::UnorderedSet<JPH::Shape const*, JPH::Hash<JPH::Shape
   const*>, std::equal_to<JPH::Shape const*> >&) const */

undefined1  [16] __thiscall
JPH::DecoratedShape::GetStatsRecursive(DecoratedShape *this,UnorderedSet *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  
  auVar1 = JPH::Shape::GetStatsRecursive((UnorderedSet *)this);
  auVar3 = (**(code **)(**(long **)(this + 0x20) + 0x108))(*(long **)(this + 0x20),param_1);
  auVar2._0_8_ = auVar3._0_8_ + auVar1._0_8_;
  auVar2._8_8_ = auVar1._8_8_ & 0xffffffff00000000 | (ulong)(uint)(auVar1._8_4_ + auVar3._8_4_);
  return auVar2;
}



/* JPH::DecoratedShape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void __thiscall JPH::DecoratedShape::SaveSubShapeState(DecoratedShape *this,Array *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (*(long *)param_1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar8 = puVar3 + *(long *)param_1;
    for (; puVar3 < puVar8; puVar3 = puVar3 + 1) {
      plVar7 = (long *)*puVar3;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
  }
  *(undefined8 *)param_1 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar3 = (undefined8 *)(*Allocate)(8);
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    if (puVar8 != (undefined8 *)0x0) {
      lVar4 = *(long *)param_1;
      if (puVar3 < puVar8) {
        for (puVar5 = puVar3; puVar5 < puVar3 + lVar4; puVar5 = puVar5 + 1) {
          uVar2 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar5 = uVar2;
        }
      }
      else {
        puVar8 = puVar8 + lVar4 + -1;
        puVar5 = puVar3 + lVar4 + -1;
        if (!CARRY8(lVar4 * 8 - 8,(ulong)puVar3)) {
          do {
            uVar2 = *puVar8;
            puVar6 = puVar5 + -1;
            puVar8 = puVar8 + -1;
            *puVar5 = uVar2;
            puVar5 = puVar6;
          } while (puVar3 <= puVar6);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)(param_1 + 8) = 1;
    lVar4 = *(long *)param_1 + 1;
    plVar7 = puVar3 + *(long *)param_1;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x10);
    lVar4 = 1;
  }
  *(long *)param_1 = lVar4;
  lVar4 = *(long *)(this + 0x20);
  *plVar7 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



/* JPH::DecoratedShape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::DecoratedShape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 in_register_00000034;
  
  plVar1 = *(long **)(param_1 + 0x20);
  plVar2 = *(long **)CONCAT44(in_register_00000034,param_2);
  if (plVar1 != plVar2) {
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar2 = *(long **)CONCAT44(in_register_00000034,param_2);
    }
    *(long **)(param_1 + 0x20) = plVar2;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  return;
}



/* JPH::DecoratedShapeSettings::GetRTTI() const */

undefined1 * JPH::DecoratedShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti,
                      "DecoratedShapeSettings",0x50,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::DecoratedShapeSettings*)::{lambda(void*)#1}::_FUN,
                      sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti;
}



/* JPH::DecoratedShape::GetMaterial(JPH::SubShapeID const&) const */

void JPH::DecoratedShape::GetMaterial(SubShapeID *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x20) + 0x50);
  if (UNRECOVERED_JUMPTABLE_00 == GetMaterial) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
    if (UNRECOVERED_JUMPTABLE_00 == GetMaterial) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
      if (UNRECOVERED_JUMPTABLE_00 != GetMaterial) goto LAB_00100398;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
      if (UNRECOVERED_JUMPTABLE_00 == GetMaterial) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
        if (UNRECOVERED_JUMPTABLE_00 != GetMaterial) goto LAB_00100398;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
        if (UNRECOVERED_JUMPTABLE_00 == GetMaterial) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
          if (UNRECOVERED_JUMPTABLE_00 != GetMaterial) goto LAB_00100398;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x50);
          if (UNRECOVERED_JUMPTABLE_00 == GetMaterial) {
                    /* WARNING: Could not recover jumptable at 0x00100386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x50))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100398:
                    /* WARNING: Could not recover jumptable at 0x00100398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::GetRTTIOfType(JPH::DecoratedShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(DecoratedShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti,
                      "DecoratedShapeSettings",0x50,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::DecoratedShapeSettings*)::{lambda(void*)#1}::_FUN,
                      DecoratedShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::DecoratedShapeSettings*)::rtti;
}



/* JPH::DecoratedShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::DecoratedShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((DecoratedShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::DecoratedShape::DecoratedShape(JPH::EShapeSubType, JPH::DecoratedShapeSettings const&,
   JPH::Result<JPH::Ref<JPH::Shape> >&) */

void __thiscall
JPH::DecoratedShape::DecoratedShape
          (DecoratedShape *this,DecoratedShape param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long *local_48;
  ulong local_40;
  long local_38 [2];
  char local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  this[0x19] = param_2;
  plVar2 = *(long **)(param_3 + 0x40);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined **)this = &DAT_00100b98;
  lVar3 = *(long *)(param_3 + 0x48);
  *(undefined4 *)(this + 8) = 0;
  this[0x18] = (DecoratedShape)0x2;
  if (plVar2 == (long *)0x0) {
    if (lVar3 == 0) {
      if ((char)param_4[4] == '\x01') {
        plVar2 = (long *)*param_4;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
      }
      else if (((char)param_4[4] == '\x02') && ((long *)*param_4 != param_4 + 2)) {
        (*Free)();
      }
      *(undefined1 *)(param_4 + 4) = 0;
      *param_4 = (long)(param_4 + 2);
      puVar5 = (undefined8 *)(*Allocate)(0x15);
      uVar4 = _UNK_00100cd8;
      uVar1 = __LC2;
      param_4[2] = 0x14;
      *param_4 = (long)puVar5;
      *(undefined4 *)(puVar5 + 2) = 0x216c6c75;
      *puVar5 = uVar1;
      puVar5[1] = uVar4;
      param_4[1] = 0x14;
      *(undefined1 *)(*param_4 + 0x14) = 0;
      *(undefined1 *)(param_4 + 4) = 2;
      goto LAB_00100552;
    }
  }
  else if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x20))(&local_48);
    if (local_28 == '\x01') {
      plVar2 = *(long **)(this + 0x20);
      if (plVar2 == local_48) goto LAB_001005fc;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*plVar2 + 8))(plVar2);
        }
      }
      *(long **)(this + 0x20) = local_48;
      if (local_48 != (long *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
        goto LAB_001005a8;
      }
      if ((local_28 == '\x01') || (local_28 != '\x02')) goto LAB_00100552;
    }
    else {
      if ((char)param_4[4] == '\x01') {
        plVar2 = (long *)*param_4;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar2 + 8))();
          }
          goto LAB_00100515;
        }
LAB_00100620:
        *(char *)(param_4 + 4) = local_28;
      }
      else {
        if (((char)param_4[4] != '\x02') || ((long *)*param_4 == param_4 + 2)) goto LAB_00100620;
        (*Free)();
LAB_00100515:
        *(char *)(param_4 + 4) = local_28;
        if (local_28 == '\x01') {
          *param_4 = (long)local_48;
          if (local_48 == (long *)0x0) goto LAB_00100552;
          LOCK();
          *(int *)(local_48 + 1) = (int)local_48[1] + 1;
          UNLOCK();
          goto LAB_001005a8;
        }
      }
      plVar2 = local_48;
      if (local_28 != '\x02') goto LAB_00100552;
      plVar6 = param_4 + 2;
      *param_4 = (long)plVar6;
      if (local_40 < 0x10) {
        if (local_40 == 1) {
          *(char *)(param_4 + 2) = (char)*local_48;
        }
        else if (local_40 != 0) goto LAB_00100710;
      }
      else {
        if ((long)local_40 < 0) {
          std::__throw_length_error("basic_string::_M_create");
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar6 = (long *)(*Allocate)(local_40 + 1);
        param_4[2] = local_40;
        *param_4 = (long)plVar6;
LAB_00100710:
        memcpy(plVar6,plVar2,local_40);
        plVar6 = (long *)*param_4;
      }
      param_4[1] = local_40;
      *(undefined1 *)((long)plVar6 + local_40) = 0;
LAB_001005a8:
      if (local_28 == '\x01') {
LAB_001005fc:
        if (local_48 != (long *)0x0) {
          LOCK();
          plVar2 = local_48 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*local_48 + 8))();
          }
        }
        goto LAB_00100552;
      }
      if ((local_28 != '\x02') || (local_48 == local_38)) goto LAB_00100552;
    }
    (*Free)();
    goto LAB_00100552;
  }
  *(long *)(this + 0x20) = lVar3;
  LOCK();
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  UNLOCK();
LAB_00100552:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* JPH::Shape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void JPH::Shape::SaveMaterialState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int) */

void JPH::Shape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::DecoratedShape::MustBeStatic() const */

void __thiscall JPH::DecoratedShape::MustBeStatic(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010087b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x10))();
  return;
}



/* JPH::DecoratedShape::GetCenterOfMass() const */

void __thiscall JPH::DecoratedShape::GetCenterOfMass(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010088b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x18))();
  return;
}



/* JPH::DecoratedShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

void JPH::DecoratedShape::GetLeafShape(SubShapeID *param_1,SubShapeID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010089b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* JPH::DecoratedShape::IsValidScale(JPH::Vec3) const */

void JPH::DecoratedShape::IsValidScale(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001008ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x118))();
  return;
}



/* JPH::DecoratedShape::MakeScaleValid(JPH::Vec3) const */

void JPH::DecoratedShape::MakeScaleValid(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001008cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x120))();
  return;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
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
  (**(code **)(*param_4 + 0x20))(&local_68);
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



/* JPH::DecoratedShape::GetSubShapeIDBitsRecursive() const */

void __thiscall JPH::DecoratedShape::GetSubShapeIDBitsRecursive(DecoratedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x28);
  if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
    if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100a68;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100a68;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100a68;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
                    /* WARNING: Could not recover jumptable at 0x00100a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x28))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100a68:
                    /* WARNING: Could not recover jumptable at 0x00100a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JPH::GetRTTIOfType(JPH::DecoratedShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
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



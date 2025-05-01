
/* (anonymous namespace)::construct_override_user_data() */

void (anonymous_namespace)::construct_override_user_data(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*JPH::Allocate)(0x28);
  *(undefined2 *)(puVar1 + 3) = 0xf02;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__JoltCustomUserDataShape_00101b28;
  return;
}



/* (anonymous namespace)::cast_override_user_data_vs_shape(JPH::ShapeCast const&,
   JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44
   const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void (anonymous_namespace)::cast_override_user_data_vs_shape
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long *local_d8 [2];
  long local_c8;
  long local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*param_1 + 0x19) == '\x0f') {
    plVar1 = *(long **)(*param_1 + 0x20);
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    lVar4 = param_1[0xc];
    lVar5 = param_1[0xd];
    (**(code **)(*plVar1 + 0x30))(lVar2,lVar3,&local_f8,plVar1,param_1 + 4);
    local_b8 = param_1[4];
    lStack_b0 = param_1[5];
    local_a8 = param_1[6];
    lStack_a0 = param_1[7];
    local_98 = param_1[8];
    lStack_90 = param_1[9];
    local_88 = param_1[10];
    lStack_80 = param_1[0xb];
    local_68 = local_f8;
    uStack_60 = uStack_f0;
    local_58 = local_e8;
    uStack_50 = uStack_e0;
    local_d8[0] = plVar1;
    local_c8 = lVar2;
    local_c0 = lVar3;
    local_78 = lVar4;
    lStack_70 = lVar5;
    cVar6 = (**(code **)(*param_6 + 0x18))(param_6,plVar1,param_8,param_3,param_9);
    if (cVar6 != '\0') {
      (*(code *)(&JPH::CollisionDispatch::sCastShape)
                [(ulong)*(byte *)(param_3 + 0x19) +
                 (ulong)*(byte *)((long)local_d8[0] + 0x19) * 0x22])
                (param_1_00,param_2_00,local_d8,param_2,param_3,param_6,param_7,param_8,param_9);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("cast_override_user_data_vs_shape",
                     "modules/jolt_physics/shapes/jolt_custom_user_data_shape.cpp",0x3d,
                     "Condition \"p_shape_cast.mShape->GetSubType() != JoltCustomShapeSubType::OVERRIDE_USER_DATA\" is true."
                     ,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::collide_shape_vs_override_user_data(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void (anonymous_namespace)::collide_shape_vs_override_user_data
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  char cVar2;
  
  if (*(char *)(param_2 + 0x19) != '\x0f') {
    _err_print_error("collide_shape_vs_override_user_data",
                     "modules/jolt_physics/shapes/jolt_custom_user_data_shape.cpp",0x35,
                     "Condition \"p_shape2->GetSubType() != JoltCustomShapeSubType::OVERRIDE_USER_DATA\" is true."
                     ,0,0);
    return;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  cVar2 = (**(code **)(*param_13 + 0x18))(param_13,param_1,param_9,lVar1,param_10);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0010036c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&JPH::CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(param_1 + 0x19) * 0x22])
              (param_1_00,param_2_00,param_3,param_4,param_1,lVar1,param_7,param_8,param_9,param_10)
    ;
    return;
  }
  return;
}



/* JoltCustomUserDataShapeSettings::Create() const */

void JoltCustomUserDataShapeSettings::Create(void)

{
  long *plVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  char cVar3;
  DecoratedShape *pDVar4;
  long *plVar5;
  long in_RCX;
  undefined8 extraout_RDX;
  undefined8 unaff_RBP;
  long in_RSI;
  long lVar6;
  long *in_RDI;
  char *pcVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 unaff_R12;
  undefined8 uVar8;
  undefined8 extraout_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  long *unaff_retaddr;
  
  cVar3 = *(char *)(in_RSI + 0x38);
  if (cVar3 == '\0') {
    pDVar4 = (DecoratedShape *)(*JPH::Allocate)(0x28);
    in_RCX = in_RSI + 0x18;
    lVar6 = 0xf;
    JPH::DecoratedShape::DecoratedShape(pDVar4);
    cVar3 = *(char *)(in_RSI + 0x38);
    *(undefined ***)pDVar4 = &PTR__JoltCustomUserDataShape_00101b28;
    if (cVar3 != '\x02') {
      LOCK();
      *(int *)(pDVar4 + 8) = *(int *)(pDVar4 + 8) + 1;
      UNLOCK();
      if (*(char *)(in_RSI + 0x38) == '\x01') {
        plVar5 = *(long **)(in_RSI + 0x18);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      else if ((*(char *)(in_RSI + 0x38) == '\x02') && (*(long *)(in_RSI + 0x18) != in_RSI + 0x28))
      {
        (*JPH::Free)();
      }
      *(DecoratedShape **)(in_RSI + 0x18) = pDVar4;
      *(undefined1 *)(in_RSI + 0x38) = 1;
      *(undefined1 *)(in_RDI + 4) = 1;
LAB_0010049a:
      *in_RDI = (long)pDVar4;
      if (pDVar4 == (DecoratedShape *)0x0) {
        return;
      }
      LOCK();
      *(int *)(pDVar4 + 8) = *(int *)(pDVar4 + 8) + 1;
      UNLOCK();
      return;
    }
    *(undefined1 *)(in_RDI + 4) = 2;
  }
  else {
    *(char *)(in_RDI + 4) = cVar3;
    if (cVar3 == '\x01') {
      pDVar4 = *(DecoratedShape **)(in_RSI + 0x18);
      goto LAB_0010049a;
    }
    lVar6 = in_RSI;
    if (cVar3 != '\x02') {
      return;
    }
  }
  plVar5 = in_RDI + 2;
  *in_RDI = (long)plVar5;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_0010043d;
    }
    if (__n == 0) goto LAB_0010043d;
  }
  else {
    if ((long)__n < 0) {
      pcVar7 = "basic_string::_M_create";
      uVar8 = std::__throw_length_error("basic_string::_M_create");
      if (pcVar7[0x19] != '\x0f') {
        _err_print_error("collide_override_user_data_vs_shape",
                         "modules/jolt_physics/shapes/jolt_custom_user_data_shape.cpp",0x2d,
                         "Condition \"p_shape1->GetSubType() != JoltCustomShapeSubType::OVERRIDE_USER_DATA\" is true."
                         ,0,0);
        return;
      }
      lVar2 = *(long *)(pcVar7 + 0x20);
      cVar3 = (**(code **)(*unaff_retaddr + 0x18))(unaff_retaddr,lVar2,in_R8,lVar6,in_R9);
      if (cVar3 == '\0') {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0010062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&JPH::CollisionDispatch::sCollideShape)
                [(ulong)*(byte *)(lVar6 + 0x19) + (ulong)*(byte *)(lVar2 + 0x19) * 0x22])
                (uVar8,extraout_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,lVar2,lVar6,extraout_RDX,in_RCX,in_R8,
                 in_R9,unaff_RBP,unaff_R12);
      return;
    }
    plVar5 = (long *)(*JPH::Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)plVar5;
  }
  memcpy(plVar5,__src,__n);
  plVar5 = (long *)*in_RDI;
LAB_0010043d:
  in_RDI[1] = __n;
  *(undefined1 *)((long)plVar5 + __n) = 0;
  return;
}



/* (anonymous namespace)::collide_override_user_data_vs_shape(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void (anonymous_namespace)::collide_override_user_data_vs_shape
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x19) != '\x0f') {
    _err_print_error("collide_override_user_data_vs_shape",
                     "modules/jolt_physics/shapes/jolt_custom_user_data_shape.cpp",0x2d,
                     "Condition \"p_shape1->GetSubType() != JoltCustomShapeSubType::OVERRIDE_USER_DATA\" is true."
                     ,0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  cVar2 = (**(code **)(*param_13 + 0x18))(param_13,lVar1,param_9,param_2,param_10);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0010062c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&JPH::CollisionDispatch::sCollideShape)
              [(ulong)*(byte *)(param_2 + 0x19) + (ulong)*(byte *)(lVar1 + 0x19) * 0x22])
              (param_1_00,param_2_00,param_3,param_4,lVar1,param_2,param_7,param_8,param_9,param_10)
    ;
    return;
  }
  return;
}



/* (anonymous namespace)::cast_shape_vs_override_user_data(JPH::ShapeCast const&,
   JPH::ShapeCastSettings const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44
   const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void (anonymous_namespace)::cast_shape_vs_override_user_data
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  char cVar2;
  
  if (*(char *)(param_3 + 0x19) != '\x0f') {
    _err_print_error("cast_shape_vs_override_user_data",
                     "modules/jolt_physics/shapes/jolt_custom_user_data_shape.cpp",0x46,
                     "Condition \"p_shape->GetSubType() != JoltCustomShapeSubType::OVERRIDE_USER_DATA\" is true."
                     ,0,0);
    return;
  }
  lVar1 = *(long *)(param_3 + 0x20);
  cVar2 = (**(code **)(*param_6 + 0x18))(param_6,*param_1,param_8,lVar1,param_9);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&JPH::CollisionDispatch::sCastShape)
              [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(*param_1 + 0x19) * 0x22])
              (param_1_00,param_2_00,param_1,param_2,lVar1,param_6,param_7,param_8);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltCustomUserDataShape::register_type() */

void JoltCustomUserDataShape::register_type(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &JPH::sAllSubShapeTypes;
  _DAT_00103150 = 0x100000;
  _DAT_00103158 = (undefined4)JPH::Color::sCyan;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x1fe;
    (&JPH::CollisionDispatch::sCollideShape)[lVar2] =
         (anonymous_namespace)::collide_override_user_data_vs_shape;
    (&JPH::CollisionDispatch::sCastShape)[lVar2] =
         (anonymous_namespace)::cast_override_user_data_vs_shape;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(JPH::Shape::SaveBinaryState + lVar2) =
         (anonymous_namespace)::collide_shape_vs_override_user_data;
    *(code **)(JPH::DecoratedShape::GetMaterial + lVar2) =
         (anonymous_namespace)::cast_shape_vs_override_user_data;
  } while (pbVar3 != (byte *)0x101cc2);
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
                    /* WARNING: Could not recover jumptable at 0x0010085b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x10))();
  return;
}



/* JPH::DecoratedShape::GetCenterOfMass() const */

void __thiscall JPH::DecoratedShape::GetCenterOfMass(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010086b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x18))();
  return;
}



/* JPH::DecoratedShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

void JPH::DecoratedShape::GetLeafShape(SubShapeID *param_1,SubShapeID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010087b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* JPH::DecoratedShape::IsValidScale(JPH::Vec3) const */

void JPH::DecoratedShape::IsValidScale(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010088b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x118))();
  return;
}



/* JPH::DecoratedShape::MakeScaleValid(JPH::Vec3) const */

void JPH::DecoratedShape::MakeScaleValid(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001008ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x120))();
  return;
}



/* JoltCustomDecoratedShape::GetWorldSpaceBounds(JPH::Mat44 const&, JPH::Vec3) const */

undefined8 JoltCustomDecoratedShape::GetWorldSpaceBounds(undefined8 param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomDecoratedShape::GetSubShapeTransformedShape(JPH::SubShapeID const&, JPH::Vec3,
   JPH::Quat, JPH::Vec3, JPH::SubShapeID&) const */

undefined8 JoltCustomDecoratedShape::GetSubShapeTransformedShape(undefined8 param_1,long param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(param_2 + 0x20) + 0x70))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomDecoratedShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::Vec3, JPH::Color, bool) const */

void JoltCustomDecoratedShape::DrawGetSupportFunction(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
  return;
}



/* JoltCustomDecoratedShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::Vec3) const */

void JoltCustomDecoratedShape::DrawGetSupportingFace(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010098b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  return;
}



/* JoltCustomDecoratedShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JoltCustomDecoratedShape::CollectTransformedShapes(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001009ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))();
  return;
}



/* JoltCustomDecoratedShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void JoltCustomDecoratedShape::TransformShape(Mat44 *param_1,CollisionCollector *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001009cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xc0))();
  return;
}



/* JoltCustomDecoratedShape::GetStats() const */

undefined1  [16] JoltCustomDecoratedShape::GetStats(void)

{
  return ZEXT816(0x28);
}



/* JoltCustomUserDataShape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JoltCustomUserDataShape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* JoltCustomUserDataShape::~JoltCustomUserDataShape() */

void __thiscall JoltCustomUserDataShape::~JoltCustomUserDataShape(JoltCustomUserDataShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &JPH::ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JoltCustomUserDataShape::~JoltCustomUserDataShape() */

void __thiscall JoltCustomUserDataShape::~JoltCustomUserDataShape(JoltCustomUserDataShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined **)this = &JPH::ShapeSettings::vtable;
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00100cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100cd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
  return;
}



/* JoltCustomDecoratedShape::GetVolume() const */

void __thiscall JoltCustomDecoratedShape::GetVolume(JoltCustomDecoratedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x110);
  if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
    if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
      if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100db8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
      if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100db8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100db8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
                    /* WARNING: Could not recover jumptable at 0x00100da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x110))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100db8:
                    /* WARNING: Could not recover jumptable at 0x00100db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
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
      if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100e68;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100e68;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100e68;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
                    /* WARNING: Could not recover jumptable at 0x00100e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x28))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100e68:
                    /* WARNING: Could not recover jumptable at 0x00100e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDecoratedShape::GetInnerRadius() const */

void __thiscall JoltCustomDecoratedShape::GetInnerRadius(JoltCustomDecoratedShape *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x20) + 0x38);
  if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
    plVar1 = (long *)(*(long **)(this + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
    if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100f18;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100f18;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100f18;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
                    /* WARNING: Could not recover jumptable at 0x00100f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x38))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100f18:
                    /* WARNING: Could not recover jumptable at 0x00100f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDecoratedShape::GetLocalBounds() const */

void JoltCustomDecoratedShape::GetLocalBounds(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(**(long **)(in_RSI + 0x20) + 0x20);
  if (pcVar3 == GetLocalBounds) {
    plVar2 = (long *)(*(long **)(in_RSI + 0x20))[4];
    pcVar3 = *(code **)(*plVar2 + 0x20);
    if (pcVar3 == GetLocalBounds) {
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x20);
      if (pcVar3 != GetLocalBounds) goto LAB_00101000;
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x20);
      if (pcVar3 == GetLocalBounds) {
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x20);
        if (pcVar3 != GetLocalBounds) goto LAB_00101000;
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x20);
        if (pcVar3 == GetLocalBounds) {
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x20);
          if (pcVar3 != GetLocalBounds) goto LAB_00101000;
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x20);
          if (pcVar3 == GetLocalBounds) {
            (**(code **)(*(long *)plVar2[4] + 0x20))();
            goto LAB_00100fe5;
          }
        }
      }
    }
    (*pcVar3)();
  }
  else {
LAB_00101000:
    (*pcVar3)();
  }
LAB_00100fe5:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomDecoratedShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

void JoltCustomDecoratedShape::GetSurfaceNormal(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x20) + 0x58);
  if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
    if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
      if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_001010b8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
      if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
        if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_001010b8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
        if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
          if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_001010b8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
          if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
                    /* WARNING: Could not recover jumptable at 0x001010a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x58))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001010b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001010b8:
                    /* WARNING: Could not recover jumptable at 0x001010b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDecoratedShape::GetMassProperties() const */

void JoltCustomDecoratedShape::GetMassProperties(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(**(long **)(in_RSI + 0x20) + 0x40);
  if (pcVar3 == GetMassProperties) {
    plVar2 = (long *)(*(long **)(in_RSI + 0x20))[4];
    pcVar3 = *(code **)(*plVar2 + 0x40);
    if (pcVar3 == GetMassProperties) {
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x40);
      if (pcVar3 != GetMassProperties) goto LAB_001011a0;
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x40);
      if (pcVar3 == GetMassProperties) {
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x40);
        if (pcVar3 != GetMassProperties) goto LAB_001011a0;
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x40);
        if (pcVar3 == GetMassProperties) {
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x40);
          if (pcVar3 != GetMassProperties) goto LAB_001011a0;
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x40);
          if (pcVar3 == GetMassProperties) {
            (**(code **)(*(long *)plVar2[4] + 0x40))();
            goto LAB_00101185;
          }
        }
      }
    }
    (*pcVar3)();
  }
  else {
LAB_001011a0:
    (*pcVar3)();
  }
LAB_00101185:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings() */

void __thiscall
JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings
          (JoltCustomUserDataShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 **)this = &JPH::ShapeFunctions::sRegistry;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(undefined8 **)this = &JPH::Color::sCyan;
  if (this[0x38] == (JoltCustomUserDataShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0010122f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (JoltCustomUserDataShapeSettings)0x2) &&
          (*(JoltCustomUserDataShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*JPH::Free)();
    return;
  }
  return;
}



/* JoltCustomDecoratedShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

void JoltCustomDecoratedShape::CastRay
               (RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
  if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
    plVar1 = (long *)plVar1[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
    if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
      if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_00101330;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
      if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
        if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_00101330;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
        if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
          if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_00101330;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
          if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
                    /* WARNING: Could not recover jumptable at 0x00101319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x98))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101330:
                    /* WARNING: Could not recover jumptable at 0x00101336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
  return;
}



/* JoltCustomDecoratedShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JoltCustomDecoratedShape::CollidePoint(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
  if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
    plVar1 = (long *)plVar1[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
    if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
      if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_00101420;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
      if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
        if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_00101420;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
        if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
          if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_00101420;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
          if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
                    /* WARNING: Could not recover jumptable at 0x00101409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xa8))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101416. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101420:
                    /* WARNING: Could not recover jumptable at 0x00101426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
  return;
}



/* JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings() */

void __thiscall
JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings
          (JoltCustomUserDataShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined8 **)this = &JPH::ShapeFunctions::sRegistry;
  plVar2 = *(long **)(this + 0x48);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)(this + 0x40);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  *(undefined8 **)this = &JPH::Color::sCyan;
  if (this[0x38] == (JoltCustomUserDataShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else if ((this[0x38] == (JoltCustomUserDataShapeSettings)0x2) &&
          (*(JoltCustomUserDataShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*JPH::Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00101483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
  return;
}



/* JoltCustomDecoratedShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void JoltCustomDecoratedShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x20) + 0xa0);
  if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
    if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
      if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001015b8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
      if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
        if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001015b8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
        if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
          if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001015b8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa0);
          if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
                    /* WARNING: Could not recover jumptable at 0x001015a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xa0))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001015b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001015b8:
                    /* WARNING: Could not recover jumptable at 0x001015b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDecoratedShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JoltCustomDecoratedShape::CollideSoftBodyVertices
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
  if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
    plVar1 = (long *)plVar1[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
    if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
      if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101690;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
      if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101690;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
          if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101690;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
          if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
                    /* WARNING: Could not recover jumptable at 0x00101683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xb0))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010168b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101690:
                    /* WARNING: Could not recover jumptable at 0x00101693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
  return;
}



/* JoltCustomDecoratedShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JoltCustomDecoratedShape::GetTrianglesStart(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
  if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
    plVar1 = (long *)plVar1[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
    if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
      if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101770;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
      if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
        if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101770;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
        if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
          if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101770;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
          if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
                    /* WARNING: Could not recover jumptable at 0x00101763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 200))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010176b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101770:
                    /* WARNING: Could not recover jumptable at 0x00101773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
  return;
}



/* JoltCustomDecoratedShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

void JoltCustomDecoratedShape::GetTrianglesNext
               (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  uVar2 = (ulong)param_3 & 0xffffffff;
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
  if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
    plVar1 = (long *)plVar1[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
    if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
      if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101850;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
      if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
        if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101850;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
        if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
          if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101850;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
          if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
                    /* WARNING: Could not recover jumptable at 0x00101843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xd0))((long *)plVar1[4],param_2,uVar2);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010184b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,uVar2);
    return;
  }
LAB_00101850:
                    /* WARNING: Could not recover jumptable at 0x00101853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,uVar2);
  return;
}



/* JoltCustomDecoratedShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color,
   bool, bool) const */

void JoltCustomDecoratedShape::Draw(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x20) + 0x80);
  if (UNRECOVERED_JUMPTABLE_00 == Draw) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
    if (UNRECOVERED_JUMPTABLE_00 == Draw) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
      if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101928;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
      if (UNRECOVERED_JUMPTABLE_00 == Draw) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101928;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 == Draw) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101928;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 == Draw) {
                    /* WARNING: Could not recover jumptable at 0x0010191a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x80))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00101928:
                    /* WARNING: Could not recover jumptable at 0x00101928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDecoratedShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&,
   float&, float&, JPH::Vec3&, JPH::Vec3) const */

void JoltCustomDecoratedShape::GetSubmergedVolume(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x20) + 0x78);
  if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
    plVar1 = (long *)(*(long **)(param_1 + 0x20))[4];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
    if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001019d8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001019d8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001019d8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
                    /* WARNING: Could not recover jumptable at 0x001019c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x78))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001019d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001019d8:
                    /* WARNING: Could not recover jumptable at 0x001019d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomUserDataShapeSettings::Create() const */

void JoltCustomUserDataShapeSettings::_GLOBAL__sub_I_Create(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC11;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings() */

void __thiscall
JoltCustomUserDataShapeSettings::~JoltCustomUserDataShapeSettings
          (JoltCustomUserDataShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCustomUserDataShape::~JoltCustomUserDataShape() */

void __thiscall JoltCustomUserDataShape::~JoltCustomUserDataShape(JoltCustomUserDataShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



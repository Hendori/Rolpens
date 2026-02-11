
/* (anonymous namespace)::construct_double_sided() */

void (anonymous_namespace)::construct_double_sided(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*JPH::Allocate)(0x30);
  *(undefined2 *)(puVar1 + 3) = 0x1002;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR__JoltCustomDoubleSidedShape_00101940;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



/* JoltCustomDoubleSidedShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void JoltCustomDoubleSidedShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  long in_FS_OFFSET;
  undefined2 local_14;
  SubShapeIDCreator local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = *(undefined2 *)param_3;
  local_12 = param_3[2];
  if (param_1[0x28] == (RayCast)0x0) {
    local_14 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x20) + 0xa0))(*(long **)(param_1 + 0x20),param_2,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::cast_shape_vs_double_sided(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void (anonymous_namespace)::cast_shape_vs_double_sided
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 *param_2,
               long param_3,long *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_3 + 0x19) == '\x10') {
    local_78 = *param_2;
    uStack_70 = param_2[1];
    local_68 = param_2[2];
    uStack_60 = param_2[3];
    local_58 = param_2[4];
    uStack_50 = param_2[5];
    if (*(char *)(param_3 + 0x28) != '\0') {
      uVar2 = (ulong)local_58 >> 8;
      local_58 = CONCAT71((int7)uVar2,1);
    }
    lVar1 = *(long *)(param_3 + 0x20);
    cVar3 = (**(code **)(*param_6 + 0x18))(param_6,*param_1,param_8,lVar1,param_9);
    if (cVar3 != '\0') {
      (*(code *)(&JPH::CollisionDispatch::sCastShape)
                [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(*param_1 + 0x19) * 0x22])
                (param_1_00,param_2_00,param_1,&local_78,lVar1,param_6,param_7,param_8,param_9);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("cast_shape_vs_double_sided",
                     "modules/jolt_physics/shapes/jolt_custom_double_sided_shape.cpp",0x49,
                     "Condition \"p_shape->GetSubType() != JoltCustomShapeSubType::DOUBLE_SIDED\" is true."
                     ,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::collide_shape_vs_double_sided(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void (anonymous_namespace)::collide_shape_vs_double_sided
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 *param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_2 + 0x19) == '\x10') {
    local_78 = *param_11;
    uStack_70 = param_11[1];
    local_68 = param_11[2];
    uStack_60 = param_11[3];
    uVar2 = param_11[4];
    uStack_50 = param_11[5];
    local_58 = uVar2;
    if (*(char *)(param_2 + 0x28) != '\0') {
      local_58._5_3_ = (undefined3)((ulong)uVar2 >> 0x28);
      local_58._0_5_ = CONCAT14(1,(int)uVar2);
    }
    lVar1 = *(long *)(param_2 + 0x20);
    cVar3 = (**(code **)(*param_13 + 0x18))(param_13,param_1,param_9,lVar1,param_10);
    if (cVar3 != '\0') {
      (*(code *)(&JPH::CollisionDispatch::sCollideShape)
                [(ulong)*(byte *)(lVar1 + 0x19) + (ulong)*(byte *)(param_1 + 0x19) * 0x22])
                (param_1_00,param_2_00,param_3,param_4,param_1,lVar1,param_7,param_8,param_9,
                 param_10,&local_78,param_12,param_13);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("collide_shape_vs_double_sided",
                     "modules/jolt_physics/shapes/jolt_custom_double_sided_shape.cpp",0x3c,
                     "Condition \"p_shape2->GetSubType() != JoltCustomShapeSubType::DOUBLE_SIDED\" is true."
                     ,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomDoubleSidedShapeSettings::Create() const */

void JoltCustomDoubleSidedShapeSettings::Create(void)

{
  long *plVar1;
  undefined1 *__src;
  ulong __n;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  DecoratedShape *pDVar5;
  long *plVar6;
  long in_RCX;
  undefined8 extraout_RDX;
  undefined8 *unaff_RBP;
  long in_RSI;
  long lVar7;
  long *in_RDI;
  char *pcVar8;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 unaff_R12;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 extraout_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  long *unaff_retaddr;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  ulong uStack_48;
  undefined1 *puStack_40;
  
  cVar4 = *(char *)(in_RSI + 0x38);
  if (cVar4 == '\0') {
    pDVar5 = (DecoratedShape *)(*JPH::Allocate)(0x30);
    in_RCX = in_RSI + 0x18;
    lVar7 = 0x10;
    JPH::DecoratedShape::DecoratedShape(pDVar5);
    cVar4 = *(char *)(in_RSI + 0x38);
    *(undefined ***)pDVar5 = &PTR__JoltCustomDoubleSidedShape_00101940;
    pDVar5[0x28] = *(DecoratedShape *)(in_RSI + 0x50);
    if (cVar4 != '\x02') {
      LOCK();
      *(int *)(pDVar5 + 8) = *(int *)(pDVar5 + 8) + 1;
      UNLOCK();
      if (*(char *)(in_RSI + 0x38) == '\x01') {
        plVar6 = *(long **)(in_RSI + 0x18);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar6 + 8))();
          }
        }
      }
      else if ((*(char *)(in_RSI + 0x38) == '\x02') && (*(long *)(in_RSI + 0x18) != in_RSI + 0x28))
      {
        (*JPH::Free)();
      }
      *(DecoratedShape **)(in_RSI + 0x18) = pDVar5;
      *(undefined1 *)(in_RSI + 0x38) = 1;
      *(undefined1 *)(in_RDI + 4) = 1;
LAB_001004ba:
      *in_RDI = (long)pDVar5;
      if (pDVar5 == (DecoratedShape *)0x0) {
        return;
      }
      LOCK();
      *(int *)(pDVar5 + 8) = *(int *)(pDVar5 + 8) + 1;
      UNLOCK();
      return;
    }
    *(undefined1 *)(in_RDI + 4) = 2;
  }
  else {
    *(char *)(in_RDI + 4) = cVar4;
    if (cVar4 == '\x01') {
      pDVar5 = *(DecoratedShape **)(in_RSI + 0x18);
      goto LAB_001004ba;
    }
    lVar7 = in_RSI;
    if (cVar4 != '\x02') {
      return;
    }
  }
  plVar6 = in_RDI + 2;
  *in_RDI = (long)plVar6;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00100458;
    }
    if (__n == 0) goto LAB_00100458;
  }
  else {
    if ((long)__n < 0) {
      pcVar8 = "basic_string::_M_create";
      uVar9 = std::__throw_length_error("basic_string::_M_create");
      lStack_58 = *(long *)(in_FS_OFFSET + 0x28);
      uStack_48 = __n;
      puStack_40 = __src;
      if (pcVar8[0x19] == '\x10') {
        uStack_90 = *unaff_RBP;
        uStack_88 = unaff_RBP[1];
        uStack_80 = unaff_RBP[2];
        uStack_78 = unaff_RBP[3];
        uVar3 = unaff_RBP[4];
        uStack_68 = unaff_RBP[5];
        uStack_70 = uVar3;
        if (pcVar8[0x28] != '\0') {
          uStack_70._5_3_ = (undefined3)((ulong)uVar3 >> 0x28);
          uStack_70._0_5_ = CONCAT14(1,(int)uVar3);
        }
        lVar2 = *(long *)(pcVar8 + 0x20);
        cVar4 = (**(code **)(*unaff_retaddr + 0x18))(unaff_retaddr,lVar2,in_R8,lVar7,in_R9);
        if (cVar4 != '\0') {
          (*(code *)(&JPH::CollisionDispatch::sCollideShape)
                    [(ulong)*(byte *)(lVar7 + 0x19) + (ulong)*(byte *)(lVar2 + 0x19) * 0x22])
                    (uVar9,extraout_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,lVar2,lVar7,extraout_RDX,in_RCX,
                     in_R8,in_R9,&uStack_90,unaff_R12,unaff_retaddr);
        }
        if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
      else if (lStack_58 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("collide_double_sided_vs_shape",
                         "modules/jolt_physics/shapes/jolt_custom_double_sided_shape.cpp",0x2f,
                         "Condition \"p_shape1->GetSubType() != JoltCustomShapeSubType::DOUBLE_SIDED\" is true."
                         ,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar6 = (long *)(*JPH::Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)plVar6;
  }
  memcpy(plVar6,__src,__n);
  plVar6 = (long *)*in_RDI;
LAB_00100458:
  in_RDI[1] = __n;
  *(undefined1 *)((long)plVar6 + __n) = 0;
  return;
}



/* (anonymous namespace)::collide_double_sided_vs_shape(JPH::Shape const*, JPH::Shape const*,
   JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void (anonymous_namespace)::collide_double_sided_vs_shape
               (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
               long param_1,long param_2,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 *param_11,undefined8 param_12,long *param_13)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x19) == '\x10') {
    local_78 = *param_11;
    uStack_70 = param_11[1];
    local_68 = param_11[2];
    uStack_60 = param_11[3];
    uVar2 = param_11[4];
    uStack_50 = param_11[5];
    local_58 = uVar2;
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_58._5_3_ = (undefined3)((ulong)uVar2 >> 0x28);
      local_58._0_5_ = CONCAT14(1,(int)uVar2);
    }
    lVar1 = *(long *)(param_1 + 0x20);
    cVar3 = (**(code **)(*param_13 + 0x18))(param_13,lVar1,param_9,param_2,param_10);
    if (cVar3 != '\0') {
      (*(code *)(&JPH::CollisionDispatch::sCollideShape)
                [(ulong)*(byte *)(param_2 + 0x19) + (ulong)*(byte *)(lVar1 + 0x19) * 0x22])
                (param_1_00,param_2_00,param_3,param_4,lVar1,param_2,param_7,param_8,param_9,
                 param_10,&local_78,param_12,param_13);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("collide_double_sided_vs_shape",
                     "modules/jolt_physics/shapes/jolt_custom_double_sided_shape.cpp",0x2f,
                     "Condition \"p_shape1->GetSubType() != JoltCustomShapeSubType::DOUBLE_SIDED\" is true."
                     ,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltCustomDoubleSidedShape::register_type() */

void JoltCustomDoubleSidedShape::register_type(void)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = &JPH::sAllSubShapeTypes;
  _DAT_00103160 = 0x100000;
  _DAT_00103168 = (undefined4)JPH::Color::sPurple;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(code **)((ulong)bVar1 * 8 + 0x104120) = (anonymous_namespace)::collide_double_sided_vs_shape;
    *(code **)(JPH::DecoratedShape::GetSupportingFace + (ulong)bVar1 * 0x110) =
         (anonymous_namespace)::collide_shape_vs_double_sided;
  } while (pbVar2 != (byte *)0x101ac2);
  pbVar2 = &JPH::sConvexSubShapeTypes;
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    *(code **)(JPH::DecoratedShapeSettings::CastTo + (ulong)bVar1 * 0x110) =
         (anonymous_namespace)::cast_shape_vs_double_sided;
  } while (pbVar2 != &DAT_00101a90);
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
                    /* WARNING: Could not recover jumptable at 0x001007cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x10))();
  return;
}



/* JPH::DecoratedShape::GetCenterOfMass() const */

void __thiscall JPH::DecoratedShape::GetCenterOfMass(DecoratedShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x001007db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x20) + 0x18))();
  return;
}



/* JPH::DecoratedShape::GetLeafShape(JPH::SubShapeID const&, JPH::SubShapeID&) const */

void JPH::DecoratedShape::GetLeafShape(SubShapeID *param_1,SubShapeID *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001007eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
  return;
}



/* JPH::DecoratedShape::IsValidScale(JPH::Vec3) const */

void JPH::DecoratedShape::IsValidScale(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001007fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x118))();
  return;
}



/* JPH::DecoratedShape::MakeScaleValid(JPH::Vec3) const */

void JPH::DecoratedShape::MakeScaleValid(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010081b. Too many branches */
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



/* JoltCustomDecoratedShape::GetSubShapeUserData(JPH::SubShapeID const&) const */

void JoltCustomDecoratedShape::GetSubShapeUserData(SubShapeID *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010088b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x68))();
  return;
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
                    /* WARNING: Could not recover jumptable at 0x001008f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
  return;
}



/* JoltCustomDecoratedShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&,
   JPH::Vec3) const */

void JoltCustomDecoratedShape::DrawGetSupportingFace(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010090b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  return;
}



/* JoltCustomDecoratedShape::CollectTransformedShapes(JPH::AABox const&, JPH::Vec3, JPH::Quat,
   JPH::Vec3, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&) const */

void JoltCustomDecoratedShape::CollectTransformedShapes(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010092b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xb8))();
  return;
}



/* JoltCustomDecoratedShape::TransformShape(JPH::Mat44 const&,
   JPH::CollisionCollector<JPH::TransformedShape, JPH::CollisionCollectorTraitsCollideShape>&) const
    */

void JoltCustomDecoratedShape::TransformShape(Mat44 *param_1,CollisionCollector *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010094b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0xc0))();
  return;
}



/* JoltCustomDecoratedShape::GetStats() const */

undefined1  [16] JoltCustomDecoratedShape::GetStats(void)

{
  return ZEXT816(0x28);
}



/* JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape() */

void __thiscall
JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape(JoltCustomDoubleSidedShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x00100b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}



/* JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape() */

void __thiscall
JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape(JoltCustomDoubleSidedShape *this)

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
                    /* WARNING: Could not recover jumptable at 0x00100b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(this);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00100b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
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
      if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100c48;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100c48;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubShapeIDBitsRecursive) goto LAB_00100c48;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x28);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubShapeIDBitsRecursive) {
                    /* WARNING: Could not recover jumptable at 0x00100c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x28))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100c48:
                    /* WARNING: Could not recover jumptable at 0x00100c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
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
      if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100d18;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
      if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100d18;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
        if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 != GetVolume) goto LAB_00100d18;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x110);
          if (UNRECOVERED_JUMPTABLE_00 == GetVolume) {
                    /* WARNING: Could not recover jumptable at 0x00100d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x110))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100d18:
                    /* WARNING: Could not recover jumptable at 0x00100d18. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100dc8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
      if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100dc8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
        if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 != GetInnerRadius) goto LAB_00100dc8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x38);
          if (UNRECOVERED_JUMPTABLE_00 == GetInnerRadius) {
                    /* WARNING: Could not recover jumptable at 0x00100db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x38))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100dc8:
                    /* WARNING: Could not recover jumptable at 0x00100dc8. Too many branches */
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
      if (pcVar3 != GetLocalBounds) goto LAB_00100eb0;
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x20);
      if (pcVar3 == GetLocalBounds) {
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x20);
        if (pcVar3 != GetLocalBounds) goto LAB_00100eb0;
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x20);
        if (pcVar3 == GetLocalBounds) {
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x20);
          if (pcVar3 != GetLocalBounds) goto LAB_00100eb0;
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x20);
          if (pcVar3 == GetLocalBounds) {
            (**(code **)(*(long *)plVar2[4] + 0x20))();
            goto LAB_00100e95;
          }
        }
      }
    }
    (*pcVar3)();
  }
  else {
LAB_00100eb0:
    (*pcVar3)();
  }
LAB_00100e95:
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
      if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_00100f68;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
      if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
        if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_00100f68;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
        if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
          if (UNRECOVERED_JUMPTABLE_00 != GetSurfaceNormal) goto LAB_00100f68;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x58);
          if (UNRECOVERED_JUMPTABLE_00 == GetSurfaceNormal) {
                    /* WARNING: Could not recover jumptable at 0x00100f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x58))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00100f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00100f68:
                    /* WARNING: Could not recover jumptable at 0x00100f68. Too many branches */
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
      if (pcVar3 != GetMassProperties) goto LAB_00101050;
      plVar2 = (long *)plVar2[4];
      pcVar3 = *(code **)(*plVar2 + 0x40);
      if (pcVar3 == GetMassProperties) {
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x40);
        if (pcVar3 != GetMassProperties) goto LAB_00101050;
        plVar2 = (long *)plVar2[4];
        pcVar3 = *(code **)(*plVar2 + 0x40);
        if (pcVar3 == GetMassProperties) {
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x40);
          if (pcVar3 != GetMassProperties) goto LAB_00101050;
          plVar2 = (long *)plVar2[4];
          pcVar3 = *(code **)(*plVar2 + 0x40);
          if (pcVar3 == GetMassProperties) {
            (**(code **)(*(long *)plVar2[4] + 0x40))();
            goto LAB_00101035;
          }
        }
      }
    }
    (*pcVar3)();
  }
  else {
LAB_00101050:
    (*pcVar3)();
  }
LAB_00101035:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings() */

void __thiscall
JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings
          (JoltCustomDoubleSidedShapeSettings *this)

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
  *(undefined8 **)this = &JPH::Color::sPurple;
  if (this[0x38] == (JoltCustomDoubleSidedShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001010df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (JoltCustomDoubleSidedShapeSettings)0x2) &&
          (*(JoltCustomDoubleSidedShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001010b6. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001011e0;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
      if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
        if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001011e0;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
        if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
          if (UNRECOVERED_JUMPTABLE_00 != CastRay) goto LAB_001011e0;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x98);
          if (UNRECOVERED_JUMPTABLE_00 == CastRay) {
                    /* WARNING: Could not recover jumptable at 0x001011c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x98))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001011d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_001011e0:
                    /* WARNING: Could not recover jumptable at 0x001011e6. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_001012d0;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
      if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
        if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_001012d0;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
        if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
          if (UNRECOVERED_JUMPTABLE_00 != CollidePoint) goto LAB_001012d0;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xa8);
          if (UNRECOVERED_JUMPTABLE_00 == CollidePoint) {
                    /* WARNING: Could not recover jumptable at 0x001012b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xa8))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001012c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_001012d0:
                    /* WARNING: Could not recover jumptable at 0x001012d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
  return;
}



/* JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings() */

void __thiscall
JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings
          (JoltCustomDoubleSidedShapeSettings *this)

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
  *(undefined8 **)this = &JPH::Color::sPurple;
  if (this[0x38] == (JoltCustomDoubleSidedShapeSettings)0x1) {
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
  else if ((this[0x38] == (JoltCustomDoubleSidedShapeSettings)0x2) &&
          (*(JoltCustomDoubleSidedShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*JPH::Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00101333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::Free)(this);
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
      if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101470;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
      if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101470;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
        if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
          if (UNRECOVERED_JUMPTABLE_00 != CollideSoftBodyVertices) goto LAB_00101470;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xb0);
          if (UNRECOVERED_JUMPTABLE_00 == CollideSoftBodyVertices) {
                    /* WARNING: Could not recover jumptable at 0x00101463. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xb0))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010146b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101470:
                    /* WARNING: Could not recover jumptable at 0x00101473. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101550;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
      if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
        if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101550;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
        if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
          if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesStart) goto LAB_00101550;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 200);
          if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesStart) {
                    /* WARNING: Could not recover jumptable at 0x00101543. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 200))((long *)plVar1[4],param_2,param_3);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010154b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,param_3);
    return;
  }
LAB_00101550:
                    /* WARNING: Could not recover jumptable at 0x00101553. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101630;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
      if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
        if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101630;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
        if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
          if (UNRECOVERED_JUMPTABLE_00 != GetTrianglesNext) goto LAB_00101630;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0xd0);
          if (UNRECOVERED_JUMPTABLE_00 == GetTrianglesNext) {
                    /* WARNING: Could not recover jumptable at 0x00101623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0xd0))((long *)plVar1[4],param_2,uVar2);
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0010162b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar1,param_2,uVar2);
    return;
  }
LAB_00101630:
                    /* WARNING: Could not recover jumptable at 0x00101633. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101708;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
      if (UNRECOVERED_JUMPTABLE_00 == Draw) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101708;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
        if (UNRECOVERED_JUMPTABLE_00 == Draw) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 != Draw) goto LAB_00101708;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 == Draw) {
                    /* WARNING: Could not recover jumptable at 0x001016fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x80))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00101700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00101708:
                    /* WARNING: Could not recover jumptable at 0x00101708. Too many branches */
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
      if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001017b8;
      plVar1 = (long *)plVar1[4];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
      if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001017b8;
        plVar1 = (long *)plVar1[4];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
        if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
          if (UNRECOVERED_JUMPTABLE_00 != GetSubmergedVolume) goto LAB_001017b8;
          plVar1 = (long *)plVar1[4];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x78);
          if (UNRECOVERED_JUMPTABLE_00 == GetSubmergedVolume) {
                    /* WARNING: Could not recover jumptable at 0x001017a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[4] + 0x78))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001017b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001017b8:
                    /* WARNING: Could not recover jumptable at 0x001017b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* JoltCustomDoubleSidedShapeSettings::Create() const */

void JoltCustomDoubleSidedShapeSettings::_GLOBAL__sub_I_Create(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC9;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings() */

void __thiscall
JoltCustomDoubleSidedShapeSettings::~JoltCustomDoubleSidedShapeSettings
          (JoltCustomDoubleSidedShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape() */

void __thiscall
JoltCustomDoubleSidedShape::~JoltCustomDoubleSidedShape(JoltCustomDoubleSidedShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



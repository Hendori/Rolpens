
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::EmptyShape::GetMassProperties() const */

EmptyShape * __thiscall JPH::EmptyShape::GetMassProperties(EmptyShape *this)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = _LC3;
  *(undefined4 *)this = 0x3f800000;
  *(undefined1 (*) [16])(this + 0x10) = ZEXT416(uVar1);
  uVar2 = _UNK_00100ca8;
  *(undefined8 *)(this + 0x20) = __LC4;
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = _UNK_00100cb8;
  *(undefined8 *)(this + 0x30) = __LC5;
  *(undefined8 *)(this + 0x38) = uVar2;
  uVar2 = _UNK_00100cc8;
  *(undefined8 *)(this + 0x40) = __LC6;
  *(undefined8 *)(this + 0x48) = uVar2;
  return this;
}



/* JPH::EmptyShape::sRegister()::{lambda(JPH::Shape const*, JPH::Shape const*, JPH::Vec3, JPH::Vec3,
   JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator
   const&, JPH::CollideShapeSettings const&, JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::ShapeFilter const&)#1}::_FUN(JPH::Shape const*,
   JPH::Shape const*, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void JPH::EmptyShape::sRegister()::
     {lambda(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)#1}
     ::ShapeFilter_const__(void)

{
  return;
}



/* JPH::EmptyShape::sRegister()::{lambda(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&)#1}::_FUN(JPH::ShapeCast const&, JPH::ShapeCastSettings
   const&, JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&,
   JPH::SubShapeIDCreator const&, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::ShapeCastResult, JPH::CollisionCollectorTraitsCastShape>&) */

void JPH::EmptyShape::sRegister()::
     {lambda(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)#1}
     ::CollisionCollectorTraitsCastShape>__(void)

{
  return;
}



/* JPH::EmptyShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::EmptyShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::EmptyShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const */

void JPH::EmptyShape::Draw
               (undefined8 param_1,undefined8 param_2_00,undefined8 param_2,long param_4,
               undefined4 param_5)

{
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_4_ = (float)((uint)param_1 & __LC7);
  auVar1._4_4_ = (uint)((ulong)param_1 >> 0x20) & _UNK_00100cd4;
  auVar1._8_4_ = in_XMM0_Dc & _UNK_00100cd8;
  auVar1._12_4_ = in_XMM0_Dd & _UNK_00100cdc;
  auVar2._4_12_ = auVar1._4_12_;
  auVar2._0_4_ = auVar1._0_4_ * __LC8;
  JPH::DebugRenderer::DrawMarker
            (*(undefined8 *)(param_4 + 0x30),*(undefined8 *)(param_4 + 0x38),auVar2._0_8_,param_2,
             param_5);
  return;
}



/* _FUN() */

void JPH::EmptyShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x30);
  *(undefined2 *)(puVar1 + 3) = 0x210b;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR__EmptyShape_00100b18;
  *(undefined1 (*) [16])(puVar1 + 4) = (undefined1  [16])0x0;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x50);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_GetRTTI_00100ae0;
  *(undefined1 (*) [16])(puVar1 + 8) = (undefined1  [16])0x0;
  return;
}



/* JPH::EmptyShapeSettings::Create() const */

void JPH::EmptyShapeSettings::Create(void)

{
  long *plVar1;
  char cVar2;
  ulong __n;
  undefined1 *__src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long in_RSI;
  long *in_RDI;
  char *pcVar7;
  
  cVar2 = *(char *)(in_RSI + 0x38);
  if (cVar2 != '\0') {
    *(char *)(in_RDI + 4) = cVar2;
    if (cVar2 == '\x01') {
      puVar5 = *(undefined8 **)(in_RSI + 0x18);
      *in_RDI = (long)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      goto LAB_001001ea;
    }
    if (cVar2 != '\x02') {
      return;
    }
    __n = *(ulong *)(in_RSI + 0x20);
    plVar6 = in_RDI + 2;
    *in_RDI = (long)plVar6;
    __src = *(undefined1 **)(in_RSI + 0x18);
    if (__n < 0x10) {
      if (__n == 1) {
        *(undefined1 *)(in_RDI + 2) = *__src;
        goto LAB_00100233;
      }
      if (__n == 0) goto LAB_00100233;
    }
    else {
      if ((long)__n < 0) {
        pcVar7 = "basic_string::_M_create";
        std::__throw_length_error("basic_string::_M_create");
        if (pcVar7 == (char *)0x0) {
          return;
        }
        *(code **)pcVar7 = JPH::RTTI::RTTI;
        if (pcVar7[0x38] == '\x01') {
          plVar6 = *(long **)(pcVar7 + 0x18);
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
        else if ((pcVar7[0x38] == '\x02') && (*(char **)(pcVar7 + 0x18) != pcVar7 + 0x28)) {
          (*Free)();
        }
                    /* WARNING: Could not recover jumptable at 0x0010033e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(pcVar7);
        return;
      }
      plVar6 = (long *)(*Allocate)(__n + 1);
      in_RDI[2] = __n;
      *in_RDI = (long)plVar6;
    }
    memcpy(plVar6,__src,__n);
    plVar6 = (long *)*in_RDI;
LAB_00100233:
    in_RDI[1] = __n;
    *(undefined1 *)((long)plVar6 + __n) = 0;
    return;
  }
  puVar5 = (undefined8 *)(*Allocate)(0x30);
  *(undefined4 *)(puVar5 + 1) = 0;
  puVar5[2] = *(undefined8 *)(in_RSI + 0x10);
  *(undefined2 *)(puVar5 + 3) = 0x210b;
  uVar3 = *(undefined8 *)(in_RSI + 0x40);
  uVar4 = *(undefined8 *)(in_RSI + 0x48);
  *puVar5 = &PTR__EmptyShape_00100b18;
  puVar5[4] = uVar3;
  puVar5[5] = uVar4;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  if (*(char *)(in_RSI + 0x38) == '\x01') {
    plVar6 = *(long **)(in_RSI + 0x18);
    if (plVar6 == (long *)0x0) {
      *(undefined8 **)(in_RSI + 0x18) = puVar5;
      *(undefined1 *)(in_RDI + 4) = 1;
      *in_RDI = (long)puVar5;
      goto LAB_001001ea;
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  else {
    if (*(char *)(in_RSI + 0x38) != '\x02') {
      *(undefined8 **)(in_RSI + 0x18) = puVar5;
      *(undefined1 *)(in_RSI + 0x38) = 1;
      *(undefined1 *)(in_RDI + 4) = 1;
      *in_RDI = (long)puVar5;
      goto LAB_001001ea;
    }
    if (*(long *)(in_RSI + 0x18) != in_RSI + 0x28) {
      (*Free)();
    }
  }
  *(undefined8 **)(in_RSI + 0x18) = puVar5;
  *(undefined1 *)(in_RSI + 0x38) = 1;
  *(undefined1 *)(in_RDI + 4) = 1;
  *in_RDI = (long)puVar5;
LAB_001001ea:
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  return;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(code **)param_1 = JPH::RTTI::RTTI;
    if (*(char *)((long)param_1 + 0x38) == '\x01') {
      plVar2 = *(long **)((long)param_1 + 0x18);
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
    else if ((*(char *)((long)param_1 + 0x38) == '\x02') &&
            (*(long *)((long)param_1 + 0x18) != (long)param_1 + 0x28)) {
      (*Free)();
    }
                    /* WARNING: Could not recover jumptable at 0x0010033e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::EmptyShapeSettings::GetRTTI() const */

undefined1 * JPH::EmptyShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti,"EmptyShapeSettings",
                      0x50,GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti;
}



/* JPH::GetRTTIOfType(JPH::EmptyShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(EmptyShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti,"EmptyShapeSettings",
                      0x50,GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::EmptyShapeSettings*)::{lambda(void*)#1}::_FUN,
                      EmptyShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::EmptyShapeSettings*)::rtti;
}



/* JPH::EmptyShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::EmptyShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((EmptyShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::EmptyShape::sRegister() */

void JPH::EmptyShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  pbVar3 = &sAllSubShapeTypes;
  _DAT_00102290 = sRegister()::{lambda()#1}::_FUN;
  _DAT_00102298 = (undefined4)Color::sBlack;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x462;
    (&CollisionDispatch::sCollideShape)[lVar2] =
         sRegister()::
         {lambda(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)#1}
         ::ShapeFilter_const__;
    (&CollisionDispatch::sCastShape)[lVar2] =
         sRegister()::
         {lambda(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)#1}
         ::CollisionCollectorTraitsCastShape>__;
    lVar2 = (ulong)bVar1 * 0x110;
    *(code **)(lVar2 + 0x102198) =
         sRegister()::
         {lambda(JPH::Shape_const*,JPH::Shape_const*,JPH::Vec3,JPH::Vec3,JPH::Mat44_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollideShapeSettings_const&,JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>&,JPH::ShapeFilter_const&)#1}
         ::ShapeFilter_const__;
    *(code **)(lVar2 + 0x1021a0) =
         sRegister()::
         {lambda(JPH::ShapeCast_const&,JPH::ShapeCastSettings_const&,JPH::Shape_const*,JPH::Vec3,JPH::ShapeFilter_const&,JPH::Mat44_const&,JPH::SubShapeIDCreator_const&,JPH::SubShapeIDCreator_const&,JPH::CollisionCollector<JPH::ShapeCastResult,JPH::CollisionCollectorTraitsCastShape>&)#1}
         ::CollisionCollectorTraitsCastShape>__;
  } while (pbVar3 != (byte *)0x100c82);
  return;
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
}



/* JPH::Shape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::Shape::GetSupportingFace(void)

{
  return;
}



/* JPH::Shape::GetSubShapeUserData(JPH::SubShapeID const&) const */

undefined8 JPH::Shape::GetSubShapeUserData(SubShapeID *param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
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



/* JPH::Shape::SaveSubShapeState(JPH::Array<JPH::RefConst<JPH::Shape>,
   JPH::STLAllocator<JPH::RefConst<JPH::Shape> > >&) const */

void JPH::Shape::SaveSubShapeState(Array *param_1)

{
  return;
}



/* JPH::Shape::RestoreSubShapeState(JPH::RefConst<JPH::Shape> const*, unsigned int) */

void JPH::Shape::RestoreSubShapeState(RefConst *param_1,uint param_2)

{
  return;
}



/* JPH::EmptyShape::GetCenterOfMass() const */

undefined1  [16] __thiscall JPH::EmptyShape::GetCenterOfMass(EmptyShape *this)

{
  return *(undefined1 (*) [16])(this + 0x20);
}



/* JPH::EmptyShape::GetLocalBounds() const */

EmptyShape * __thiscall JPH::EmptyShape::GetLocalBounds(EmptyShape *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return this;
}



/* JPH::EmptyShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::EmptyShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::EmptyShape::GetInnerRadius() const */

undefined8 JPH::EmptyShape::GetInnerRadius(void)

{
  return 0;
}



/* JPH::EmptyShape::GetMaterial(JPH::SubShapeID const&) const */

undefined8 JPH::EmptyShape::GetMaterial(SubShapeID *param_1)

{
  return PhysicsMaterial::sDefault;
}



/* JPH::EmptyShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::EmptyShape::GetSurfaceNormal(void)

{
  return ZEXT816(0);
}



/* JPH::EmptyShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::EmptyShape::GetSubmergedVolume(void)

{
  undefined4 *in_RCX;
  undefined4 *in_R8;
  undefined1 (*in_R9) [16];
  
  *in_RCX = 0;
  *in_R8 = 0;
  *in_R9 = (undefined1  [16])0x0;
  return;
}



/* JPH::EmptyShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&, JPH::RayCastResult&)
   const */

undefined8
JPH::EmptyShape::CastRay(RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  return 0;
}



/* JPH::EmptyShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const */

void JPH::EmptyShape::CastRay
               (RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
               CollisionCollector *param_4,ShapeFilter *param_5)

{
  return;
}



/* JPH::EmptyShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::EmptyShape::CollidePoint(void)

{
  return;
}



/* JPH::EmptyShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::EmptyShape::CollideSoftBodyVertices(void)

{
  return;
}



/* JPH::EmptyShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::EmptyShape::GetTrianglesStart(void)

{
  return;
}



/* JPH::EmptyShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8
JPH::EmptyShape::GetTrianglesNext
          (GetTrianglesContext *param_1,int param_2,Float3 *param_3,PhysicsMaterial **param_4)

{
  return 0;
}



/* JPH::EmptyShape::GetStats() const */

undefined1  [16] JPH::EmptyShape::GetStats(void)

{
  return ZEXT816(0x30);
}



/* JPH::EmptyShape::GetVolume() const */

undefined8 JPH::EmptyShape::GetVolume(void)

{
  return 0;
}



/* JPH::EmptyShape::IsValidScale(JPH::Vec3) const */

undefined8 JPH::EmptyShape::IsValidScale(void)

{
  return 1;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::EmptyShape::~EmptyShape() */

void __thiscall JPH::EmptyShape::~EmptyShape(EmptyShape *this)

{
  return;
}



/* JPH::EmptyShape::~EmptyShape() */

void __thiscall JPH::EmptyShape::~EmptyShape(EmptyShape *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
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
  long lVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  fVar8 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  if (*(code **)(*param_4 + 0x20) != EmptyShape::GetLocalBounds) {
    (**(code **)(*param_4 + 0x20))(&local_68);
    fVar13 = local_68;
    fVar14 = fStack_64;
    fVar15 = fStack_60;
    fVar16 = fStack_5c;
    fVar8 = local_58;
    fVar10 = fStack_54;
    fVar11 = fStack_50;
    fVar12 = fStack_4c;
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  fStack_70 = (float)param_2;
  fStack_6c = (float)((ulong)param_2 >> 0x20);
  auVar6._0_8_ = CONCAT44(fVar14 * fStack_74,fVar13 * local_78);
  auVar6._8_4_ = fVar15 * fStack_70;
  auVar6._12_4_ = fVar16 * fStack_6c;
  lVar4 = 0;
  auVar18._0_4_ = fVar8 * local_78;
  auVar18._4_4_ = fVar10 * fStack_74;
  auVar18._8_4_ = fVar11 * fStack_70;
  auVar18._12_4_ = fVar12 * fStack_6c;
  auVar9._8_4_ = auVar6._8_4_;
  auVar9._0_8_ = auVar6._0_8_;
  auVar9._12_4_ = auVar6._12_4_;
  local_38 = maxps(auVar9,auVar18);
  local_48 = minps(auVar6,auVar18);
  fVar13 = *(float *)(param_5 + 0x30);
  fVar14 = *(float *)(param_5 + 0x34);
  fVar15 = *(float *)(param_5 + 0x38);
  fVar16 = *(float *)(param_5 + 0x3c);
  fVar8 = fVar13;
  fVar10 = fVar14;
  fVar11 = fVar15;
  fVar12 = fVar16;
  do {
    fVar2 = *(float *)(local_48 + lVar4);
    fVar3 = *(float *)(local_38 + lVar4);
    pfVar1 = (float *)(param_5 + lVar4 * 4);
    auVar5._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar5._8_4_ = fVar2 * pfVar1[2];
    auVar5._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = (float *)(param_5 + lVar4 * 4);
    auVar7._0_4_ = fVar3 * *pfVar1;
    auVar7._4_4_ = fVar3 * pfVar1[1];
    auVar7._8_4_ = fVar3 * pfVar1[2];
    auVar7._12_4_ = fVar3 * pfVar1[3];
    lVar4 = lVar4 + 4;
    auVar17._8_4_ = auVar5._8_4_;
    auVar17._0_8_ = auVar5._0_8_;
    auVar17._12_4_ = auVar5._12_4_;
    auVar18 = minps(auVar17,auVar7);
    auVar6 = maxps(auVar5,auVar7);
    fVar8 = fVar8 + auVar18._0_4_;
    fVar10 = fVar10 + auVar18._4_4_;
    fVar11 = fVar11 + auVar18._8_4_;
    fVar12 = fVar12 + auVar18._12_4_;
    fVar13 = fVar13 + auVar6._0_4_;
    fVar14 = fVar14 + auVar6._4_4_;
    fVar15 = fVar15 + auVar6._8_4_;
    fVar16 = fVar16 + auVar6._12_4_;
  } while (lVar4 != 0xc);
  *param_1 = fVar8;
  param_1[1] = fVar10;
  param_1[2] = fVar11;
  param_1[3] = fVar12;
  param_1[4] = fVar13;
  param_1[5] = fVar14;
  param_1[6] = fVar15;
  param_1[7] = fVar16;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::EmptyShapeSettings::~EmptyShapeSettings() */

void __thiscall JPH::EmptyShapeSettings::~EmptyShapeSettings(EmptyShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (EmptyShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else {
    if (this[0x38] != (EmptyShapeSettings)0x2) {
      return;
    }
    if (*(EmptyShapeSettings **)(this + 0x18) != this + 0x28) {
                    /* WARNING: Could not recover jumptable at 0x0010096a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(*(EmptyShapeSettings **)(this + 0x18));
      return;
    }
  }
  return;
}



/* JPH::EmptyShapeSettings::~EmptyShapeSettings() */

void __thiscall JPH::EmptyShapeSettings::~EmptyShapeSettings(EmptyShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(code **)this = JPH::RTTI::RTTI;
  if (this[0x38] == (EmptyShapeSettings)0x1) {
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
  else if ((this[0x38] == (EmptyShapeSettings)0x2) &&
          (*(EmptyShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001009c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::GetRTTIOfType(JPH::EmptyShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC12;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::EmptyShape::~EmptyShape() */

void __thiscall JPH::EmptyShape::~EmptyShape(EmptyShape *this)

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
/* JPH::EmptyShapeSettings::~EmptyShapeSettings() */

void __thiscall JPH::EmptyShapeSettings::~EmptyShapeSettings(EmptyShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



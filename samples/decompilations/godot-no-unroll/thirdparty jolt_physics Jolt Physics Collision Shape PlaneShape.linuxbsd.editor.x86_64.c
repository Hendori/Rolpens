
/* JPH::PlaneShape::GetMassProperties() const */

PlaneShape * __thiscall JPH::PlaneShape::GetMassProperties(PlaneShape *this)

{
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x40) = (undefined1  [16])0x0;
  return this;
}



/* JPH::PlaneShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::PlaneShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* JPH::PlaneShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::PlaneShape::SaveBinaryState(PlaneShape *this,StreamOut *param_1)

{
  JPH::Shape::SaveBinaryState((StreamOut *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0x10);
                    /* WARNING: Could not recover jumptable at 0x00100090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
  return;
}



/* JPH::PlaneShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

undefined8 __thiscall
JPH::PlaneShape::GetTrianglesNext
          (PlaneShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  PhysicsMaterial *pPVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1[0x30] == (GetTrianglesContext)0x0) {
    param_1[0x30] = (GetTrianglesContext)0x1;
    *(undefined8 *)param_3 = *(undefined8 *)param_1;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x24) = *(undefined8 *)param_1;
    *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0x24);
    *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_1 + 0x2c);
    if (param_4 != (PhysicsMaterial **)0x0) {
      pPVar1 = *(PhysicsMaterial **)(this + 0x30);
      if (*(PhysicsMaterial **)(this + 0x30) == (PhysicsMaterial *)0x0) {
        pPVar1 = PhysicsMaterial::sDefault;
      }
      *param_4 = pPVar1;
      param_4[1] = pPVar1;
    }
    uVar2 = 2;
  }
  return uVar2;
}



/* _FUN() */

void JPH::PlaneShape::sRegister()::{lambda()#1}::_FUN(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*Allocate)(0x60);
  uVar1 = _LC3;
  *(undefined2 *)(puVar2 + 3) = 0x1f0a;
  *(undefined4 *)(puVar2 + 8) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x44) = uVar1;
  *(undefined4 *)(puVar2 + 9) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x4c) = uVar1;
  uVar1 = _LC5;
  *(undefined4 *)(puVar2 + 1) = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR__PlaneShape_00102aa8;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 10) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x54) = uVar1;
  *(undefined4 *)(puVar2 + 0xb) = uVar1;
  *(undefined4 *)((long)puVar2 + 0x5c) = uVar1;
  return;
}



/* _FUN() */

void JPH::GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda()#1}::_FUN(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*Allocate)(0x60);
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *puVar1 = &PTR_GetRTTI_00102a70;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0x447a0000;
  return;
}



/* JPH::PlaneShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&, JPH::RayCastResult&)
   const */

undefined8 __thiscall
JPH::PlaneShape::CastRay
          (PlaneShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 8) * *(float *)(this + 0x28) +
          *(float *)(param_1 + 4) * *(float *)(this + 0x24) +
          *(float *)param_1 * *(float *)(this + 0x20) + 0.0 + *(float *)(this + 0x2c);
  if (fVar2 <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(this + 0x28) * *(float *)(param_1 + 0x18) +
            *(float *)(this + 0x24) * *(float *)(param_1 + 0x14) +
            *(float *)(this + 0x20) * *(float *)(param_1 + 0x10) + 0.0;
    if (((fVar3 == 0.0) || (fVar3 = (float)((uint)fVar2 ^ _LC7) / fVar3, fVar3 < 0.0)) ||
       (*(float *)(param_3 + 4) <= fVar3)) {
      return 0;
    }
  }
  uVar1 = *(undefined4 *)param_2;
  *(float *)(param_3 + 4) = fVar3;
  *(undefined4 *)(param_3 + 8) = uVar1;
  return 1;
}



/* JPH::PlaneShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::PlaneShape::CollidePoint
               (undefined8 param_1,float param_2,long param_3,undefined4 *param_4,long *param_5,
               long *param_6)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar1 != '\0') {
    if (param_2 * *(float *)(param_3 + 0x28) +
        (float)((ulong)param_1 >> 0x20) * *(float *)(param_3 + 0x24) +
        (float)param_1 * *(float *)(param_3 + 0x20) + 0.0 + *(float *)(param_3 + 0x2c) < 0.0) {
      local_38 = 0xffffffff;
      if (param_5[2] != 0) {
        local_38 = *(undefined4 *)(param_5[2] + 0x34);
      }
      local_34 = *param_4;
      (**(code **)(*param_5 + 0x28))(param_5,&local_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&, JPH::SubShapeIDCreator
   const&, JPH::CollisionCollector<JPH::RayCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::ShapeFilter const&) const */

void __thiscall
JPH::PlaneShape::CastRay
          (PlaneShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar1 != '\0') {
    fVar3 = *(float *)(this + 0x20);
    fVar4 = *(float *)(this + 0x24);
    fVar2 = *(float *)(this + 0x28);
    fVar5 = *(float *)(param_1 + 8) * fVar2 +
            *(float *)(param_1 + 4) * fVar4 + *(float *)param_1 * fVar3 + 0.0 +
            *(float *)(this + 0x2c);
    if (((param_2[2] != (RayCastSettings)0x0) && (fVar5 <= 0.0)) && (0.0 < *(float *)(param_4 + 8)))
    {
      local_3c = 0xffffffff;
      if (*(long *)(param_4 + 0x10) != 0) {
        local_3c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
      }
      local_34 = *(undefined4 *)param_3;
      local_38 = 0.0;
      (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
      fVar3 = *(float *)(this + 0x20);
      fVar4 = *(float *)(this + 0x24);
      fVar2 = *(float *)(this + 0x28);
    }
    fVar3 = fVar2 * *(float *)(param_1 + 0x18) +
            fVar4 * *(float *)(param_1 + 0x14) + fVar3 * *(float *)(param_1 + 0x10) + 0.0;
    if ((((fVar3 != 0.0) && ((param_2[1] == (RayCastSettings)0x1 || (fVar3 < 0.0)))) &&
        (fVar3 = (float)((uint)fVar5 ^ _LC7) / fVar3, 0.0 <= fVar3)) &&
       (fVar3 < *(float *)(param_4 + 8))) {
      local_3c = 0xffffffff;
      if (*(long *)(param_4 + 0x10) != 0) {
        local_3c = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
      }
      local_34 = *(undefined4 *)param_3;
      local_38 = fVar3;
      (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_3c);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::PlaneShapeSettings::GetRTTI() const */

undefined1 * JPH::PlaneShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti,"PlaneShapeSettings",
                      0x60,GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti;
}



/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (void *)0x0) {
    *(undefined ***)param_1 = &PTR_GetRTTI_00102a70;
    plVar2 = *(long **)((long)param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
          (*Free)();
        }
        else {
          (**(code **)(*plVar2 + 0x18))();
        }
      }
    }
    *(code **)param_1 = JPH::DebugRenderer::DrawWireTriangle;
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
                    /* WARNING: Could not recover jumptable at 0x00100648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)(param_1);
    return;
  }
  return;
}



/* JPH::PlaneShape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int)
    */

void JPH::PlaneShape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 in_register_00000034;
  long *plVar3;
  
  plVar3 = (long *)CONCAT44(in_register_00000034,param_2);
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)*plVar3;
  if (plVar1 == plVar2) {
    return;
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      if (*(code **)(*plVar1 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
        plVar2 = (long *)*plVar3;
        goto LAB_001006f7;
      }
      (**(code **)(*plVar1 + 0x18))();
    }
    plVar2 = (long *)*plVar3;
  }
LAB_001006f7:
  *(long **)(param_1 + 0x30) = plVar2;
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  return;
}



/* JPH::PlaneShape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void __thiscall JPH::PlaneShape::SaveMaterialState(PlaneShape *this,Array *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (*(long *)param_1 != 0) {
    plVar11 = *(long **)(param_1 + 0x10);
    plVar5 = plVar11 + *(long *)param_1;
    for (; plVar11 < plVar5; plVar11 = plVar11 + 1) {
      while (plVar3 = (long *)*plVar11, plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) break;
        if (*(code **)(*plVar3 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar3 + 0x18))();
          break;
        }
        (*Free)();
        plVar11 = plVar11 + 1;
        if (plVar5 <= plVar11) goto LAB_001007d0;
      }
    }
  }
LAB_001007d0:
  *(undefined8 *)param_1 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar6 = (undefined8 *)(*Allocate)(8);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = *(long *)param_1;
      if (puVar6 < puVar10) {
        for (puVar7 = puVar6; puVar7 < puVar6 + lVar9; puVar7 = puVar7 + 1) {
          uVar4 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar7 = uVar4;
        }
      }
      else {
        puVar10 = puVar10 + lVar9 + -1;
        puVar7 = puVar6 + lVar9 + -1;
        if (!CARRY8(lVar9 * 8 - 8,(ulong)puVar6)) {
          do {
            uVar4 = *puVar10;
            puVar8 = puVar7 + -1;
            puVar10 = puVar10 + -1;
            *puVar7 = uVar4;
            puVar7 = puVar8;
          } while (puVar6 <= puVar8);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    *(undefined8 *)(param_1 + 8) = 1;
    lVar9 = *(long *)param_1 + 1;
    plVar5 = puVar6 + *(long *)param_1;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x10);
    lVar9 = 1;
  }
  *(long *)param_1 = lVar9;
  *plVar5 = (long)plVar2;
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      if (*(code **)(*plVar2 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x001008de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0010089f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)();
      return;
    }
  }
  return;
}



/* JPH::PlaneShape::CollideSoftBodyVertices(JPH::Mat44 const&, JPH::Vec3,
   JPH::CollideSoftBodyVertexIterator const&, unsigned int, int) const */

void JPH::PlaneShape::CollideSoftBodyVertices
               (undefined8 param_1_00,undefined8 param_2,long param_1,float *param_4,long *param_5,
               int param_6,undefined4 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar6 = _LC7;
  lVar1 = param_5[1];
  puVar8 = (undefined8 *)*param_5;
  pfVar7 = (float *)param_5[2];
  lVar2 = param_5[3];
  pfVar11 = (float *)param_5[4];
  lVar3 = param_5[5];
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1_00;
  auVar14 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar14);
  lVar4 = param_5[7];
  lVar5 = param_5[9];
  puVar12 = (undefined8 *)((long)(param_6 * (int)lVar1) + (long)puVar8);
  fVar16 = SQRT(auVar14._8_4_ * auVar14._8_4_ +
                auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_ + 0.0);
  auVar15._4_4_ = fVar16;
  auVar15._0_4_ = fVar16;
  auVar15._8_4_ = fVar16;
  auVar15._12_4_ = fVar16;
  auVar15 = divps(auVar14,auVar15);
  fVar19 = auVar15._0_4_;
  fVar20 = auVar15._4_4_;
  fVar13 = auVar15._8_4_;
  fVar17 = fVar19 * *param_4 + fVar20 * param_4[4] + fVar13 * param_4[8];
  fVar18 = fVar19 * param_4[1] + fVar20 * param_4[5] + fVar13 * param_4[9];
  fVar19 = fVar19 * param_4[2] + fVar20 * param_4[6] + fVar13 * param_4[10];
  puVar10 = (undefined4 *)param_5[8];
  pfVar9 = (float *)param_5[6];
  fVar20 = *(float *)(param_1 + 0x2c) / fVar16 -
           (param_4[0xe] * fVar19 + param_4[0xd] * fVar18 + param_4[0xc] * fVar17 + 0.0);
  for (; puVar12 != puVar8; puVar8 = (undefined8 *)((long)puVar8 + (long)(int)lVar1)) {
    if ((0.0 < *pfVar7) &&
       (fVar13 = (float)((uint)((float)puVar8[1] * fVar19 +
                                (float)((ulong)*puVar8 >> 0x20) * fVar18 +
                                (float)*puVar8 * fVar17 + 0.0 + fVar20) ^ uVar6), *pfVar9 < fVar13))
    {
      *pfVar9 = fVar13;
      *pfVar11 = fVar17;
      pfVar11[1] = fVar18;
      pfVar11[2] = fVar19;
      pfVar11[3] = fVar20;
      *puVar10 = param_7;
    }
    pfVar7 = (float *)((long)pfVar7 + (long)(int)lVar2);
    pfVar11 = (float *)((long)pfVar11 + (long)(int)lVar3);
    pfVar9 = (float *)((long)pfVar9 + (long)(int)lVar4);
    puVar10 = (undefined4 *)((long)puVar10 + (long)(int)lVar5);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::sGetSupportingFace(JPH::ConvexShape const*, JPH::Vec3, JPH::Plane const&, JPH::Mat44 const&,
   JPH::StaticArray<JPH::Vec3, 32u>&) [clone .constprop.0] */

void __thiscall
JPH::sGetSupportingFace
          (undefined8 param_1_00,undefined8 param_2,JPH *this,float *param_1,float *param_5,
          undefined4 *param_6)

{
  undefined1 auVar1 [16];
  long in_FS_OFFSET;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar12 [12];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  long local_10;
  
  fVar7 = (float)((ulong)param_1_00 >> 0x20);
  fVar5 = *param_1;
  fVar4 = param_1[1];
  fVar17 = param_1[2];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  fVar2 = fVar5 * *param_5 + fVar4 * param_5[4] + fVar17 * param_5[8];
  fVar3 = fVar5 * param_5[1] + fVar4 * param_5[5] + fVar17 * param_5[9];
  fVar4 = fVar5 * param_5[2] + fVar4 * param_5[6] + fVar17 * param_5[10];
  fVar17 = param_1[3] - (param_5[0xe] * fVar4 + param_5[0xd] * fVar3 + param_5[0xc] * fVar2 + 0.0);
  fVar5 = (float)param_2 * fVar4 + fVar2 * (float)param_1_00 + 0.0 + fVar3 * fVar7 + fVar17;
  fVar6 = (float)param_1_00 - fVar5 * fVar2;
  fVar7 = fVar7 - fVar5 * fVar3;
  fVar8 = (float)param_2 - fVar5 * fVar4;
  fVar9 = (float)((ulong)param_2 >> 0x20) - fVar5 * fVar17;
  fVar5 = 0.0;
  fVar17 = 0.0;
  fVar10 = fVar2 * _LC10 - __LC11 * fVar3;
  fVar13 = fVar3 * 0.0 - _UNK_00102c44 * fVar4;
  fVar15 = fVar4 * 0.0 - _UNK_00102c48 * fVar2;
  fVar18 = fVar10 * fVar10 + fVar15 * fVar15 + fVar13 * fVar13 + 0.0;
  if (_LC12 < fVar18) {
    auVar21._0_4_ = SQRT(fVar18);
    auVar20._4_4_ = fVar15;
    auVar20._0_4_ = fVar13;
    auVar20._8_4_ = fVar10;
    auVar20._12_4_ = fVar10;
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar20 = divps(auVar20,auVar21);
    fVar10 = auVar20._0_4_;
    fVar5 = auVar20._4_4_;
    fVar17 = auVar20._8_4_;
    auVar12._0_8_ = auVar20._4_8_;
    auVar12._8_4_ = fVar10;
  }
  else {
    auVar12 = SUB1612(__LC9,0);
    fVar10 = _LC10;
  }
  fVar10 = fVar10 * fVar3 - auVar12._0_4_ * fVar2;
  fVar5 = fVar5 * fVar4 - auVar12._4_4_ * fVar3;
  fVar17 = fVar17 * fVar2 - auVar12._8_4_ * fVar4;
  auVar19._4_4_ = fVar17;
  auVar19._0_4_ = fVar5;
  auVar19._8_4_ = fVar10;
  auVar19._12_4_ = fVar10;
  fVar5 = SQRT(fVar10 * fVar10 + fVar17 * fVar17 + fVar5 * fVar5 + 0.0);
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar5;
  auVar1._12_4_ = fVar5;
  auVar20 = divps(auVar19,auVar1);
  fVar5 = auVar20._0_4_;
  fVar17 = auVar20._4_4_;
  fVar10 = auVar20._8_4_;
  fVar13 = fVar17 * fVar2 - fVar3 * fVar5;
  if (*(code **)(*(long *)this + 0x20) == PlaneShape::GetLocalBounds) {
    local_38 = *(float *)(this + 0x40);
    fStack_34 = *(float *)(this + 0x44);
    fStack_30 = *(float *)(this + 0x48);
    local_28 = *(float *)(this + 0x50);
    fStack_24 = *(float *)(this + 0x54);
    fStack_20 = *(float *)(this + 0x58);
  }
  else {
    (**(code **)(*(long *)this + 0x20))(&local_38,this,&local_38,0);
  }
  *param_6 = 4;
  fVar15 = SQRT((fStack_20 - fStack_30) * (fStack_20 - fStack_30) +
                (fStack_24 - fStack_34) * (fStack_24 - fStack_34) +
                (local_28 - local_38) * (local_28 - local_38) + 0.0);
  fVar11 = (fVar10 * fVar3 - fVar4 * fVar17) * fVar15;
  fVar14 = (fVar5 * fVar4 - fVar2 * fVar10) * fVar15;
  fVar16 = fVar13 * fVar15;
  fVar13 = fVar13 * fVar15;
  fVar5 = fVar15 * fVar5;
  fVar17 = fVar15 * fVar17;
  fVar10 = fVar15 * fVar10;
  fVar15 = fVar15 * auVar20._12_4_;
  fVar4 = fVar11 + fVar6;
  fVar2 = fVar14 + fVar7;
  fVar3 = fVar16 + fVar8;
  fVar18 = fVar13 + fVar9;
  fVar6 = fVar6 - fVar11;
  fVar7 = fVar7 - fVar14;
  fVar8 = fVar8 - fVar16;
  fVar9 = fVar9 - fVar13;
  param_6[8] = fVar4 - fVar5;
  param_6[9] = fVar2 - fVar17;
  param_6[10] = fVar3 - fVar10;
  param_6[0xb] = fVar18 - fVar15;
  param_6[4] = fVar5 + fVar4;
  param_6[5] = fVar17 + fVar2;
  param_6[6] = fVar10 + fVar3;
  param_6[7] = fVar15 + fVar18;
  param_6[0xc] = fVar6 - fVar5;
  param_6[0xd] = fVar7 - fVar17;
  param_6[0xe] = fVar8 - fVar10;
  param_6[0xf] = fVar9 - fVar15;
  param_6[0x10] = fVar5 + fVar6;
  param_6[0x11] = fVar17 + fVar7;
  param_6[0x12] = fVar10 + fVar8;
  param_6[0x13] = fVar15 + fVar9;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::sCollideConvexVsPlane(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void __thiscall
JPH::PlaneShape::sCollideConvexVsPlane
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          PlaneShape *this,long param_1,float *param_2,long param_8,undefined4 *param_9,
          undefined4 *param_10,long param_11,long *param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  undefined4 uStack_1560;
  undefined4 uStack_155c;
  undefined4 local_14fc;
  undefined1 local_14f8 [16];
  float local_14e8;
  float fStack_14e4;
  float fStack_14e0;
  float fStack_14dc;
  float local_14d8;
  float fStack_14d4;
  float fStack_14d0;
  float fStack_14cc;
  float local_14c8;
  float fStack_14c4;
  float fStack_14c0;
  float fStack_14bc;
  float local_14b8;
  undefined4 local_14b4;
  undefined4 local_14b0;
  undefined4 local_14ac;
  int local_14a8 [132];
  undefined4 local_1298 [132];
  float local_1088 [1042];
  long local_40;
  
  uStack_1560 = (undefined4)param_4;
  uStack_155c = (undefined4)((ulong)param_4 >> 0x20);
  fVar18 = *param_2;
  fVar13 = param_2[1];
  auVar24._8_4_ = uStack_1560;
  auVar24._0_8_ = param_3;
  auVar24._12_4_ = uStack_155c;
  auVar24 = divps(*(undefined1 (*) [16])(param_1 + 0x20),auVar24);
  fVar14 = param_2[2];
  fVar29 = (float)*(undefined8 *)(param_2 + 4);
  fVar30 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar15 = param_2[6];
  auVar16._0_4_ =
       SQRT(auVar24._4_4_ * auVar24._4_4_ + auVar24._0_4_ * auVar24._0_4_ + 0.0 +
            auVar24._8_4_ * auVar24._8_4_);
  fVar32 = *(float *)(param_1 + 0x2c) / auVar16._0_4_;
  auVar16._4_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar16._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  auVar24 = divps(auVar24,auVar16);
  fVar31 = auVar24._4_4_;
  fVar26 = auVar24._8_4_;
  fVar28 = auVar24._0_4_;
  local_14f8._0_12_ = auVar24._0_12_;
  local_14f8._12_4_ = fVar32;
  fVar25 = (float)*(undefined8 *)(param_2 + 8);
  fVar27 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar17 = param_2[10];
  fVar19 = param_2[0xc];
  fVar20 = param_2[0xd];
  fVar23 = param_2[0xe];
  lVar11 = 0;
  do {
    pfVar1 = (float *)(param_8 + lVar11);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    *(float *)((long)local_1088 + lVar11) =
         fVar5 * (0.0 - (fVar19 * fVar18 + fVar20 * fVar13 + fVar23 * fVar14)) +
         fVar2 * fVar18 + fVar3 * fVar13 + fVar4 * fVar14;
    *(float *)((long)local_1088 + lVar11 + 4) =
         fVar5 * (0.0 - (fVar19 * fVar29 + fVar20 * fVar30 + fVar23 * fVar15)) +
         fVar2 * fVar29 + fVar3 * fVar30 + fVar4 * fVar15;
    *(float *)((long)local_1088 + lVar11 + 8) =
         fVar5 * (0.0 - (fVar19 * fVar25 + fVar20 * fVar27 + fVar23 * fVar17)) +
         fVar2 * fVar25 + fVar3 * fVar27 + fVar4 * fVar17;
    *(float *)((long)local_1088 + lVar11 + 0xc) =
         fVar5 * 1.0 + fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0;
    lVar11 = lVar11 + 0x10;
  } while (lVar11 != 0x40);
  fVar23 = fVar26 * local_1088[8] + fVar28 * local_1088[0] + fVar31 * local_1088[4];
  fVar25 = fVar26 * local_1088[9] + fVar28 * local_1088[1] + fVar31 * local_1088[5];
  fVar27 = fVar26 * local_1088[10] + fVar28 * local_1088[2] + fVar31 * local_1088[6];
  fVar32 = fVar32 - (fVar27 * local_1088[0xe] +
                    fVar25 * local_1088[0xd] + fVar23 * local_1088[0xc] + 0.0);
  plVar12 = (long *)(**(code **)(*(long *)this + 0x130))(param_1_00,param_2_00,this,2);
  fVar13 = 0.0 - fVar23;
  fVar17 = 0.0 - fVar25;
  fVar19 = 0.0 - fVar27;
  auVar33 = (**(code **)(*plVar12 + 0x10))(CONCAT44(fVar17,fVar13),CONCAT44(0.0 - fVar32,fVar19));
  fVar20 = auVar33._8_4_;
  fVar15 = auVar33._0_4_;
  fVar18 = auVar33._4_4_;
  fVar28 = fVar27 * fVar20 + fVar25 * fVar18 + fVar23 * fVar15 + 0.0 + fVar32;
  fVar14 = (float)(**(code **)(*plVar12 + 0x18))();
  fVar31 = fVar14 - fVar28;
  if ((float)(*(uint *)(param_11 + 0x20) ^ _LC7) < fVar31) {
    fVar26 = *param_2;
    fVar29 = param_2[1];
    fVar30 = param_2[2];
    fVar2 = param_2[3];
    fVar3 = param_2[4];
    fVar4 = param_2[5];
    fVar5 = param_2[6];
    fVar6 = param_2[7];
    local_14ac = 0xffffffff;
    fVar7 = param_2[8];
    fVar8 = param_2[9];
    fVar9 = param_2[10];
    fVar10 = param_2[0xb];
    fVar21 = fVar15 - fVar14 * fVar23;
    fVar22 = fVar18 - fVar14 * fVar25;
    fVar14 = fVar20 - fVar14 * fVar27;
    fVar15 = fVar15 - fVar28 * fVar23;
    fVar18 = fVar18 - fVar28 * fVar25;
    fVar20 = fVar20 - fVar28 * fVar27;
    local_14e8 = fVar21 * fVar26 + fVar22 * fVar3 + fVar14 * fVar7 + param_2[0xc];
    fStack_14e4 = fVar21 * fVar29 + fVar22 * fVar4 + fVar14 * fVar8 + param_2[0xd];
    fStack_14e0 = fVar21 * fVar30 + fVar22 * fVar5 + fVar14 * fVar9 + param_2[0xe];
    fStack_14dc = fVar21 * fVar2 + fVar22 * fVar6 + fVar14 * fVar10 + param_2[0xf];
    local_14d8 = fVar15 * fVar26 + fVar18 * fVar3 + fVar20 * fVar7 + param_2[0xc];
    fStack_14d4 = fVar15 * fVar29 + fVar18 * fVar4 + fVar20 * fVar8 + param_2[0xd];
    fStack_14d0 = fVar15 * fVar30 + fVar18 * fVar5 + fVar20 * fVar9 + param_2[0xe];
    fStack_14cc = fVar15 * fVar2 + fVar18 * fVar6 + fVar20 * fVar10 + param_2[0xf];
    local_14c8 = fVar19 * fVar7 + fVar17 * fVar3 + fVar13 * fVar26;
    fStack_14c4 = fVar19 * fVar8 + fVar17 * fVar4 + fVar13 * fVar29;
    fStack_14c0 = fVar19 * fVar9 + fVar17 * fVar5 + fVar13 * fVar30;
    fStack_14bc = fVar19 * fVar10 + fVar17 * fVar6 + fVar13 * fVar2;
    if (param_12[2] != 0) {
      local_14ac = *(undefined4 *)(param_12[2] + 0x34);
    }
    local_14b4 = *param_9;
    local_14a8[0] = 0;
    local_14b0 = *param_10;
    local_1298[0] = 0;
    local_14b8 = fVar31;
    if (*(char *)(param_11 + 1) == '\0') {
      local_14fc = 0xffffffff;
      if (*(code **)(*(long *)this + 0x60) != Shape::GetSupportingFace) {
        (**(code **)(*(long *)this + 0x60))
                  (CONCAT44(fVar25,fVar23),CONCAT44(fVar32,fVar27),param_1_00,param_2_00,this,
                   &local_14fc,param_2,local_14a8);
        if (local_14a8[0] != 0) {
          sGetSupportingFace(*(JPH **)(param_2 + 0xc),*(undefined8 *)(param_2 + 0xe),this,local_14f8
                             ,param_8,local_1298);
        }
      }
    }
    (**(code **)(*param_12 + 0x28))(param_12,&local_14e8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::sCastConvexVsPlane(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::PlaneShape::sCastConvexVsPlane
          (undefined8 param_1_00,undefined8 param_2_00,PlaneShape *this,long param_1,long param_2,
          undefined8 param_6,float *param_7,undefined4 *param_8,undefined4 *param_9,long *param_10)

{
  PlaneShape *pPVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [12];
  undefined1 local_15b8 [8];
  undefined8 uStack_15b0;
  undefined4 local_154c;
  undefined1 local_1548 [16];
  float local_1538 [12];
  JPH *local_1508;
  undefined8 local_1500;
  float local_14f8;
  float fStack_14f4;
  float fStack_14f0;
  float fStack_14ec;
  float local_14e8;
  float fStack_14e4;
  float fStack_14e0;
  float fStack_14dc;
  float local_14d8;
  float fStack_14d4;
  float fStack_14d0;
  float fStack_14cc;
  float local_14c8;
  undefined4 local_14c4;
  undefined4 local_14c0;
  undefined4 local_14bc;
  int local_14b8 [132];
  undefined4 local_12a8 [132];
  float local_1098;
  undefined1 local_1094;
  undefined1 local_1088 [4168];
  long local_40;
  
  plVar2 = *(long **)this;
  uStack_15b0 = param_2_00;
  local_15b8 = (undefined1  [8])param_1_00;
  auVar18 = divps(*(undefined1 (*) [16])(param_2 + 0x20),_local_15b8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar19._0_4_ =
       SQRT(auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_ + 0.0 +
            auVar18._8_4_ * auVar18._8_4_);
  fVar26 = *(float *)(param_2 + 0x2c) / auVar19._0_4_;
  auVar19._4_4_ = auVar19._0_4_;
  auVar19._8_4_ = auVar19._0_4_;
  auVar19._12_4_ = auVar19._0_4_;
  auVar19 = divps(auVar18,auVar19);
  fVar12 = auVar19._4_4_;
  fVar15 = auVar19._8_4_;
  fVar9 = auVar19._0_4_;
  local_1548._0_12_ = auVar19._0_12_;
  local_1548._12_4_ = fVar26;
  plVar3 = (long *)(**(code **)(*plVar2 + 0x130))
                             (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),plVar2,2,
                              local_1088);
  fVar7 = *(float *)(this + 0x20) * fVar9 + *(float *)(this + 0x24) * fVar12 +
          *(float *)(this + 0x28) * fVar15;
  fVar10 = (float)*(undefined8 *)(this + 0x30) * fVar9 +
           (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) * fVar12 +
           *(float *)(this + 0x38) * fVar15;
  fVar13 = (float)*(undefined8 *)(this + 0x40) * fVar9 +
           (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) * fVar12 +
           (float)*(undefined8 *)(this + 0x48) * fVar15;
  fVar16 = fVar9 * 0.0 + fVar12 * 0.0 + fVar15 * 0.0;
  local_15b8._4_4_ = 0.0 - fVar10;
  local_15b8._0_4_ = 0.0 - fVar7;
  uStack_15b0._0_4_ = 0.0 - fVar13;
  uStack_15b0._4_4_ = 0.0 - fVar16;
  auVar38 = (**(code **)(*plVar3 + 0x10))(local_15b8,uStack_15b0);
  fVar5 = auVar38._8_4_;
  local_15b8._0_4_ = auVar38._0_4_;
  local_15b8._4_4_ = auVar38._4_4_;
  fVar8 = (float)local_15b8._0_4_ * *(float *)(this + 0x20) +
          *(float *)(this + 0x30) * (float)local_15b8._4_4_ + *(float *)(this + 0x40) * fVar5 +
          *(float *)(this + 0x50);
  fVar11 = (float)local_15b8._0_4_ * *(float *)(this + 0x24) +
           *(float *)(this + 0x34) * (float)local_15b8._4_4_ + *(float *)(this + 0x44) * fVar5 +
           *(float *)(this + 0x54);
  fVar14 = (float)local_15b8._0_4_ * *(float *)(this + 0x28) +
           *(float *)(this + 0x38) * (float)local_15b8._4_4_ + *(float *)(this + 0x48) * fVar5 +
           *(float *)(this + 0x58);
  fVar26 = fVar14 * fVar15 + fVar11 * fVar12 + fVar9 * fVar8 + 0.0 + fVar26;
  fVar5 = (float)(**(code **)(*plVar3 + 0x18))();
  fVar31 = fVar5 - fVar26;
  fVar6 = fVar15 * *(float *)(this + 0x68) +
          fVar12 * *(float *)(this + 100) + fVar9 * *(float *)(this + 0x60) + 0.0;
  if (fVar31 <= 0.0) {
    if ((0.0 <= fVar6) || (fVar31 = fVar31 / fVar6, *(float *)(param_10 + 1) <= fVar31))
    goto LAB_001016d2;
    fVar22 = *param_7;
    fVar23 = param_7[1];
    fVar24 = param_7[2];
    fVar25 = param_7[3];
    fVar32 = param_7[4];
    fVar33 = param_7[5];
    fVar34 = param_7[6];
    fVar35 = param_7[7];
    fVar17 = fVar31 * *(float *)(this + 0x60) + param_7[0xc];
    fVar20 = fVar31 * *(float *)(this + 100) + param_7[0xd];
    fVar21 = fVar31 * *(float *)(this + 0x68) + param_7[0xe];
    fVar27 = param_7[8];
    fVar28 = param_7[9];
    fVar29 = param_7[10];
    fVar30 = param_7[0xb];
    fVar8 = fVar8 - fVar5 * fVar9;
    fVar11 = fVar11 - fVar5 * fVar12;
    fVar14 = fVar14 - fVar5 * fVar15;
    uStack_15b0._4_4_ = 1.0;
    local_14f8 = fVar8 * fVar22 + fVar11 * fVar32 + fVar14 * fVar27 + fVar17;
    fStack_14f4 = fVar8 * fVar23 + fVar11 * fVar33 + fVar14 * fVar28 + fVar20;
    fStack_14f0 = fVar8 * fVar24 + fVar11 * fVar34 + fVar14 * fVar29 + fVar21;
    fStack_14ec = fVar8 * fVar25 + fVar11 * fVar35 + fVar14 * fVar30 + 1.0;
    local_14e8 = local_14f8;
    fStack_14e4 = fStack_14f4;
    fStack_14e0 = fStack_14f0;
    fStack_14dc = fStack_14ec;
  }
  else {
    if (((*(char *)(param_1 + 0x21) == '\0') && (0.0 < fVar6)) ||
       (fVar31 <= (float)(*(uint *)(param_10 + 1) ^ _LC7))) goto LAB_001016d2;
    fVar22 = *param_7;
    fVar23 = param_7[1];
    fVar24 = param_7[2];
    fVar25 = param_7[3];
    fVar32 = param_7[4];
    fVar33 = param_7[5];
    fVar34 = param_7[6];
    fVar35 = param_7[7];
    fVar27 = param_7[8];
    fVar28 = param_7[9];
    fVar29 = param_7[10];
    fVar30 = param_7[0xb];
    fVar17 = param_7[0xc];
    fVar20 = param_7[0xd];
    fVar21 = param_7[0xe];
    uStack_15b0._4_4_ = param_7[0xf];
    fVar36 = fVar8 - fVar5 * fVar9;
    fVar37 = fVar11 - fVar5 * fVar12;
    fVar5 = fVar14 - fVar5 * fVar15;
    fVar8 = fVar8 - fVar26 * fVar9;
    fVar11 = fVar11 - fVar26 * fVar12;
    fVar14 = fVar14 - fVar26 * fVar15;
    fVar31 = 0.0;
    local_14f8 = fVar36 * fVar22 + fVar37 * fVar32 + fVar5 * fVar27 + fVar17;
    fStack_14f4 = fVar36 * fVar23 + fVar37 * fVar33 + fVar5 * fVar28 + fVar20;
    fStack_14f0 = fVar36 * fVar24 + fVar37 * fVar34 + fVar5 * fVar29 + fVar21;
    fStack_14ec = fVar36 * fVar25 + fVar37 * fVar35 + fVar5 * fVar30 + uStack_15b0._4_4_;
    local_14e8 = fVar8 * fVar22 + fVar11 * fVar32 + fVar14 * fVar27 + fVar17;
    fStack_14e4 = fVar8 * fVar23 + fVar11 * fVar33 + fVar14 * fVar28 + fVar20;
    fStack_14e0 = fVar8 * fVar24 + fVar11 * fVar34 + fVar14 * fVar29 + fVar21;
    fStack_14dc = fVar8 * fVar25 + fVar11 * fVar35 + fVar14 * fVar30 + uStack_15b0._4_4_;
  }
  local_14bc = 0xffffffff;
  fVar9 = 0.0 - fVar9;
  fVar12 = 0.0 - fVar12;
  fVar15 = 0.0 - fVar15;
  local_14d8 = fVar9 * fVar22 + fVar12 * fVar32 + fVar15 * fVar27;
  fStack_14d4 = fVar9 * fVar23 + fVar12 * fVar33 + fVar15 * fVar28;
  fStack_14d0 = fVar9 * fVar24 + fVar12 * fVar34 + fVar15 * fVar29;
  fStack_14cc = fVar9 * fVar25 + fVar12 * fVar35 + fVar15 * fVar30;
  local_1094 = 0.0 < fVar6;
  if (param_10[2] != 0) {
    local_14bc = *(undefined4 *)(param_10[2] + 0x34);
  }
  local_14c4 = *param_8;
  local_14b8[0] = 0;
  local_14c0 = *param_9;
  local_12a8[0] = 0;
  local_14c8 = SQRT((fStack_14e0 - fStack_14f0) * (fStack_14e0 - fStack_14f0) +
                    (local_14e8 - local_14f8) * (local_14e8 - local_14f8) + 0.0 +
                    (fStack_14e4 - fStack_14f4) * (fStack_14e4 - fStack_14f4));
  local_1098 = fVar31;
  if (*(char *)(param_1 + 1) == '\0') {
    lVar4 = 0;
    do {
      pPVar1 = this + lVar4 + 0x20;
      fVar5 = *(float *)pPVar1;
      fVar6 = *(float *)(pPVar1 + 4);
      fVar9 = *(float *)(pPVar1 + 8);
      fVar8 = *(float *)(pPVar1 + 0xc);
      *(float *)((long)local_1538 + lVar4) =
           fVar8 * fVar17 + fVar5 * fVar22 + fVar6 * fVar32 + fVar9 * fVar27;
      *(float *)((long)local_1538 + lVar4 + 4) =
           fVar8 * fVar20 + fVar5 * fVar23 + fVar6 * fVar33 + fVar9 * fVar28;
      *(float *)((long)local_1538 + lVar4 + 8) =
           fVar8 * fVar21 + fVar5 * fVar24 + fVar6 * fVar34 + fVar9 * fVar29;
      *(float *)((long)local_1538 + lVar4 + 0xc) =
           fVar8 * uStack_15b0._4_4_ + fVar5 * fVar25 + fVar6 * fVar35 + fVar9 * fVar30;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x40);
    local_154c = 0xffffffff;
    if ((*(code **)(*plVar2 + 0x60) != Shape::GetSupportingFace) &&
       ((**(code **)(*plVar2 + 0x60))
                  (CONCAT44(fVar10,fVar7),CONCAT44(fVar16,fVar13),*(undefined8 *)(this + 0x10),
                   *(undefined8 *)(this + 0x18),plVar2,&local_154c,local_1538,local_14b8),
       local_14b8[0] != 0)) {
      sGetSupportingFace(local_1508,local_1500,plVar2,local_1548,param_7,local_12a8);
    }
  }
  (**(code **)(*param_10 + 0x28))(param_10,&local_14f8);
LAB_001016d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::PlaneShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(PlaneShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti,"PlaneShapeSettings",
                      0x60,GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda()#1}::_FUN,
                      GetRTTIOfType(JPH::PlaneShapeSettings*)::{lambda(void*)#1}::_FUN,
                      PlaneShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::PlaneShapeSettings*)::rtti;
}



/* JPH::PlaneShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::PlaneShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((PlaneShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PlaneShape::GetVertices(JPH::Vec3*) const */

void __thiscall JPH::PlaneShape::GetVertices(PlaneShape *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [12];
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  
  fVar2 = *(float *)(this + 0x20);
  fVar3 = *(float *)(this + 0x24);
  fVar7 = *(float *)(this + 0x28);
  auVar4._4_8_ = 0;
  auVar4._0_4_ = _LC10;
  fVar9 = fVar2 * _LC10 - __LC11 * fVar3;
  fVar10 = fVar3 * 0.0 - _UNK_00102c44 * fVar7;
  fVar12 = fVar7 * 0.0 - _UNK_00102c48 * fVar2;
  fVar14 = fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10 + 0.0;
  fVar1 = __LC9;
  fVar6 = _UNK_00102c24;
  fVar8 = _LC13;
  if (_LC12 < fVar14) {
    auVar18._0_4_ = SQRT(fVar14);
    auVar17._4_4_ = fVar12;
    auVar17._0_4_ = fVar10;
    auVar17._8_4_ = fVar9;
    auVar17._12_4_ = fVar9;
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_4_ = auVar18._0_4_;
    auVar18._12_4_ = auVar18._0_4_;
    auVar17 = divps(auVar17,auVar18);
    auVar4 = auVar17._0_12_;
    fVar1 = auVar17._4_4_;
    fVar6 = auVar17._8_4_;
    fVar8 = auVar17._0_4_;
  }
  fVar1 = auVar4._0_4_ * fVar3 - fVar1 * fVar2;
  fVar6 = auVar4._4_4_ * fVar7 - fVar6 * fVar3;
  fVar8 = auVar4._8_4_ * fVar2 - fVar8 * fVar7;
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar6;
  auVar16._8_4_ = fVar1;
  auVar16._12_4_ = fVar1;
  auVar5._0_4_ = SQRT(fVar1 * fVar1 + fVar8 * fVar8 + fVar6 * fVar6 + 0.0);
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  auVar17 = divps(auVar16,auVar5);
  fVar1 = *(float *)(this + 0x38);
  fVar6 = auVar17._0_4_;
  fVar8 = auVar17._4_4_;
  fVar9 = auVar17._8_4_;
  fVar15 = fVar6 * fVar1;
  fVar19 = fVar8 * fVar1;
  fVar20 = fVar9 * fVar1;
  fVar21 = auVar17._12_4_ * fVar1;
  fVar12 = fVar8 * fVar2 - fVar3 * fVar6;
  fVar14 = (fVar9 * fVar3 - fVar7 * fVar8) * fVar1;
  fVar11 = (fVar6 * fVar7 - fVar2 * fVar9) * fVar1;
  fVar13 = fVar12 * fVar1;
  fVar12 = fVar12 * fVar1;
  fVar1 = *(float *)(this + 0x2c);
  fVar2 = (0.0 - fVar2) * fVar1;
  fVar6 = (0.0 - fVar3) * fVar1;
  fVar8 = (0.0 - fVar7) * fVar1;
  fVar1 = (0.0 - *(float *)(this + 0x2c)) * fVar1;
  fVar3 = fVar2 - fVar14;
  fVar7 = fVar6 - fVar11;
  fVar9 = fVar8 - fVar13;
  fVar10 = fVar1 - fVar12;
  fVar2 = fVar2 + fVar14;
  fVar6 = fVar6 + fVar11;
  fVar8 = fVar8 + fVar13;
  fVar1 = fVar1 + fVar12;
  *(float *)(param_1 + 0x30) = fVar3 + fVar15;
  *(float *)(param_1 + 0x34) = fVar7 + fVar19;
  *(float *)(param_1 + 0x38) = fVar9 + fVar20;
  *(float *)(param_1 + 0x3c) = fVar10 + fVar21;
  *(float *)(param_1 + 0x10) = fVar2 - fVar15;
  *(float *)(param_1 + 0x14) = fVar6 - fVar19;
  *(float *)(param_1 + 0x18) = fVar8 - fVar20;
  *(float *)(param_1 + 0x1c) = fVar1 - fVar21;
  *(float *)param_1 = fVar2 + fVar15;
  *(float *)(param_1 + 4) = fVar6 + fVar19;
  *(float *)(param_1 + 8) = fVar8 + fVar20;
  *(float *)(param_1 + 0xc) = fVar1 + fVar21;
  *(float *)(param_1 + 0x20) = fVar3 - fVar15;
  *(float *)(param_1 + 0x24) = fVar7 - fVar19;
  *(float *)(param_1 + 0x28) = fVar9 - fVar20;
  *(float *)(param_1 + 0x2c) = fVar10 - fVar21;
  return;
}



/* JPH::PlaneShape::Draw(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3, JPH::Color, bool, bool)
   const */

void JPH::PlaneShape::Draw
               (undefined8 param_1_00,undefined8 param_2_00,PlaneShape *param_1,long *param_2,
               float *param_5,undefined4 param_6,char param_7,char param_8)

{
  float *pfVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined4 extraout_EDX;
  undefined4 uVar26;
  long lVar27;
  long *plVar28;
  long in_FS_OFFSET;
  undefined1 auVar29 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  puVar25 = &local_a8;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  GetVertices(param_1,(Vec3 *)puVar25);
  uVar24 = uStack_70;
  uVar23 = local_78;
  uVar22 = uStack_80;
  uVar21 = local_88;
  local_b8 = (float)param_1_00;
  fStack_b4 = (float)((ulong)param_1_00 >> 0x20);
  fStack_b0 = (float)param_2_00;
  fStack_ac = (float)((ulong)param_2_00 >> 0x20);
  auVar29._4_4_ = -(uint)(fStack_b4 < 0.0);
  auVar29._0_4_ = -(uint)(local_b8 < 0.0);
  auVar29._8_4_ = -(uint)(fStack_b0 < 0.0);
  auVar29._12_4_ = -(uint)(fStack_ac < 0.0);
  uVar26 = movmskps(extraout_EDX,auVar29);
  if ((POPCOUNT((byte)uVar26 & 7) & 1U) != 0) {
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_a8 = uVar23;
    uStack_a0 = uVar24;
    local_88 = local_98;
    uStack_80 = uStack_90;
    local_98 = uVar21;
    uStack_90 = uVar22;
  }
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  fVar6 = param_5[0xc];
  fVar7 = param_5[0xd];
  fVar8 = param_5[0xe];
  fVar9 = param_5[0xf];
  fVar10 = param_5[8];
  fVar11 = param_5[9];
  fVar12 = param_5[10];
  fVar13 = param_5[0xb];
  lVar27 = 0;
  fVar14 = param_5[4];
  fVar15 = param_5[5];
  fVar16 = param_5[6];
  fVar17 = param_5[7];
  do {
    pfVar1 = (float *)((long)puVar25 + lVar27);
    fVar18 = *pfVar1;
    fVar19 = pfVar1[1];
    fVar20 = pfVar1[2];
    *(float *)((long)&local_68 + lVar27) =
         fVar20 * fStack_b0 * fVar10 + fVar18 * local_b8 * fVar2 + fVar19 * fStack_b4 * fVar14 +
         fVar6;
    *(float *)((long)&local_68 + lVar27 + 4) =
         fVar20 * fStack_b0 * fVar11 + fVar18 * local_b8 * fVar3 + fVar19 * fStack_b4 * fVar15 +
         fVar7;
    *(float *)((long)&uStack_60 + lVar27) =
         fVar20 * fStack_b0 * fVar12 + fVar18 * local_b8 * fVar4 + fVar19 * fStack_b4 * fVar16 +
         fVar8;
    *(float *)((long)&uStack_60 + lVar27 + 4) =
         fVar20 * fStack_b0 * fVar13 + fVar18 * local_b8 * fVar5 + fVar19 * fStack_b4 * fVar17 +
         fVar9;
    lVar27 = lVar27 + 0x10;
  } while (lVar27 != 0x40);
  if (param_7 != '\0') {
    plVar28 = *(long **)(param_1 + 0x30);
    if (*(long **)(param_1 + 0x30) == (long *)0x0) {
      plVar28 = PhysicsMaterial::sDefault;
    }
    param_6 = (undefined4)Color::sGrey;
    if (*(code **)(*plVar28 + 0x28) != PhysicsMaterial::GetDebugColor) {
      param_6 = (**(code **)(*plVar28 + 0x28))();
    }
  }
  if (param_8 == '\0') {
    (**(code **)(*param_2 + 0x18))
              (local_68,uStack_60,local_58,local_50,local_48,local_40,param_2,param_6,0);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))
                (local_68,uStack_60,local_48,local_40,local_38,local_30,param_2,param_6,0);
      return;
    }
  }
  else {
    JPH::DebugRenderer::DrawWireTriangle
              (local_68,uStack_60,local_58,local_50,local_48,local_40,param_2,param_6);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JPH::DebugRenderer::DrawWireTriangle
                (local_68,uStack_60,local_48,local_40,local_38,local_30,param_2,param_6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::PlaneShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,PlaneShape *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  undefined4 unaff_EBX;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58 [12];
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  long local_10;
  
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar19 = (float)param_5;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_2[3] = 0;
  *param_2 = (undefined1  [16])0x0;
  param_2[1] = (undefined1  [16])0x0;
  param_2[2] = (undefined1  [16])0x0;
  fStack_20 = param_2_00;
  auVar25 = GetVertices(param_1,(Vec3 *)&local_98);
  uVar7 = uStack_60;
  uVar6 = local_68;
  uVar5 = uStack_70;
  uVar4 = local_78;
  pfVar11 = auVar25._8_8_;
  fStack_a0 = (float)param_6;
  fStack_9c = (float)((ulong)param_6 >> 0x20);
  auVar16._4_4_ = -(uint)(fVar20 < 0.0);
  auVar16._0_4_ = -(uint)(fVar19 < 0.0);
  auVar16._8_4_ = -(uint)(fStack_a0 < 0.0);
  auVar16._12_4_ = -(uint)(fStack_9c < 0.0);
  uVar12 = movmskps(unaff_EBX,auVar16);
  if ((POPCOUNT((byte)uVar12 & 7) & 1U) != 0) {
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_98 = uVar6;
    uStack_90 = uVar7;
    local_78 = local_88;
    uStack_70 = uStack_80;
    local_88 = uVar4;
    uStack_80 = uVar5;
  }
  fVar9 = (float)param_3;
  fVar13 = (float)param_4;
  fVar10 = (float)((ulong)param_3 >> 0x20);
  fVar15 = fVar9 + fVar9;
  fVar21 = fVar10 + fVar10;
  fVar14 = (float)((ulong)param_4 >> 0x20);
  fStack_1c = _LC13;
  fVar23 = _LC13 - fVar9 * fVar15;
  fVar22 = fVar13 * (fVar13 + fVar13);
  fVar17 = fVar14 * (fVar13 + fVar13);
  fVar18 = _LC13 - fVar10 * fVar21;
  fVar24 = _LC13 - fVar22;
  local_28._0_4_ = (float)param_1_00;
  local_28._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  pfVar8 = (float *)(auVar25._0_8_ + 8);
  do {
    fVar1 = *pfVar11;
    fVar2 = pfVar11[1];
    fVar3 = pfVar11[2];
    pfVar11 = pfVar11 + 4;
    *(ulong *)(pfVar8 + -2) =
         CONCAT44(fVar1 * (fVar10 * fVar15 + fVar17) * fVar19 +
                  fVar2 * (fVar24 - fVar9 * fVar15) * fVar20 +
                  fVar3 * (fVar13 * fVar21 - fVar15 * fVar14) * fStack_a0 + local_28._4_4_,
                  fVar1 * (fVar18 - fVar22) * fVar19 + fVar2 * (fVar10 * fVar15 - fVar17) * fVar20 +
                  fVar3 * (fVar13 * fVar15 + fVar21 * fVar14) * fStack_a0 + (float)local_28);
    *pfVar8 = fVar1 * (fVar13 * fVar15 - fVar21 * fVar14) * fVar19 +
              fVar2 * (fVar15 * fVar14 + fVar13 * fVar21) * fVar20 +
              fVar3 * (fVar23 - fVar10 * fVar21) * fStack_a0 + fStack_20;
    pfVar8 = pfVar8 + 3;
  } while (local_58 != pfVar11);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  local_28 = param_1_00;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::GetSupportingFace(JPH::SubShapeID const&, JPH::Vec3, JPH::Vec3, JPH::Mat44
   const&, JPH::StaticArray<JPH::Vec3, 32u>&) const */

void JPH::PlaneShape::GetSupportingFace
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               PlaneShape *param_1,undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  float *pfVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  long lVar25;
  float *extraout_RDX;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float local_68;
  float fStack_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar32 = (float)param_4;
  puVar26 = &local_58;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar24 = GetVertices(param_1,(Vec3 *)puVar26);
  uVar23 = uStack_20;
  uVar22 = local_28;
  uVar21 = uStack_30;
  uVar20 = local_38;
  local_68 = (float)param_3;
  fStack_64 = (float)((ulong)param_3 >> 0x20);
  auVar28._4_4_ = -(uint)(fStack_64 < 0.0);
  auVar28._0_4_ = -(uint)(local_68 < 0.0);
  auVar28._8_4_ = -(uint)(fVar32 < 0.0);
  auVar28._12_4_ = -(uint)((float)((ulong)param_4 >> 0x20) < 0.0);
  uVar24 = movmskps(uVar24,auVar28);
  if ((POPCOUNT((byte)uVar24 & 7) & 1U) != 0) {
    local_28 = local_58;
    uStack_20 = uStack_50;
    local_58 = uVar22;
    uStack_50 = uVar23;
    local_38 = local_48;
    uStack_30 = uStack_40;
    local_48 = uVar20;
    uStack_40 = uVar21;
  }
  fVar2 = *extraout_RDX;
  fVar3 = extraout_RDX[1];
  fVar4 = extraout_RDX[2];
  fVar5 = extraout_RDX[3];
  fVar6 = extraout_RDX[0xc];
  fVar7 = extraout_RDX[0xd];
  fVar8 = extraout_RDX[0xe];
  fVar9 = extraout_RDX[0xf];
  fVar10 = extraout_RDX[8];
  fVar11 = extraout_RDX[9];
  fVar12 = extraout_RDX[10];
  fVar13 = extraout_RDX[0xb];
  lVar25 = 0;
  fVar14 = extraout_RDX[4];
  fVar15 = extraout_RDX[5];
  fVar16 = extraout_RDX[6];
  fVar17 = extraout_RDX[7];
  do {
    pfVar1 = (float *)((long)puVar26 + lVar25);
    fVar31 = *pfVar1;
    fVar18 = pfVar1[1];
    fVar19 = pfVar1[2];
    fVar27 = fVar19 * fVar32 * fVar10 + fVar31 * local_68 * fVar2 + fVar18 * fStack_64 * fVar14 +
             fVar6;
    fVar29 = fVar19 * fVar32 * fVar11 + fVar31 * local_68 * fVar3 + fVar18 * fStack_64 * fVar15 +
             fVar7;
    fVar30 = fVar19 * fVar32 * fVar12 + fVar31 * local_68 * fVar4 + fVar18 * fStack_64 * fVar16 +
             fVar8;
    fVar31 = fVar19 * fVar32 * fVar13 + fVar31 * local_68 * fVar5 + fVar18 * fStack_64 * fVar17 +
             fVar9;
    pfVar1 = (float *)((long)param_8 + lVar25 + 0x10);
    *pfVar1 = fVar27;
    pfVar1[1] = fVar29;
    pfVar1[2] = fVar30;
    pfVar1[3] = fVar31;
    lVar25 = lVar25 + 0x10;
  } while (lVar25 != 0x40);
  *param_8 = 4;
  param_8[0x10] = fVar27;
  param_8[0x11] = fVar29;
  param_8[0x12] = fVar30;
  param_8[0x13] = fVar31;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::CalculateLocalBounds() */

void __thiscall JPH::PlaneShape::CalculateLocalBounds(PlaneShape *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Vec3 aVStack_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  auVar11 = GetVertices(this,aVStack_58);
  pauVar4 = auVar11._0_8_;
  fVar1 = *(float *)(this + 0x38);
  auVar9._4_4_ = _LC5;
  auVar9._0_4_ = _LC5;
  auVar9._8_4_ = _LC5;
  auVar9._12_4_ = _LC5;
  auVar10._4_4_ = _LC3;
  auVar10._0_4_ = _LC3;
  auVar10._8_4_ = _LC3;
  auVar10._12_4_ = _LC3;
  do {
    auVar2 = *pauVar4;
    pauVar4 = pauVar4 + 1;
    auVar10 = minps(auVar10,auVar2);
    auVar9 = maxps(auVar9,auVar2);
    fVar5 = auVar2._0_4_ - fVar1 * *(float *)(this + 0x20);
    fVar6 = auVar2._4_4_ - fVar1 * *(float *)(this + 0x24);
    fVar7 = auVar2._8_4_ - fVar1 * *(float *)(this + 0x28);
    fVar8 = auVar2._12_4_ - fVar1 * *(float *)(this + 0x2c);
    auVar2._4_4_ = fVar6;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar7;
    auVar2._12_4_ = fVar8;
    auVar10 = minps(auVar10,auVar2);
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar5;
    auVar3._8_4_ = fVar7;
    auVar3._12_4_ = fVar8;
    auVar9 = maxps(auVar9,auVar3);
  } while (auVar11._8_8_ != pauVar4);
  *(undefined1 (*) [16])(this + 0x40) = auVar10;
  *(undefined1 (*) [16])(this + 0x50) = auVar9;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::PlaneShape::RestoreBinaryState(PlaneShape *this,StreamIn *param_1)

{
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x20,0x10);
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x38,4);
  CalculateLocalBounds(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PlaneShape::PlaneShape(JPH::PlaneShapeSettings const&, JPH::Result<JPH::Ref<JPH::Shape> >&)
    */

void __thiscall
JPH::PlaneShape::PlaneShape(PlaneShape *this,PlaneShapeSettings *param_1,Result *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined2 *)(this + 0x18) = 0x1f0a;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined ***)this = &PTR__PlaneShape_00102aa8;
  lVar3 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x20) = uVar2;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(long *)(this + 0x30) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x58);
  uVar6 = _LC3;
  *(undefined4 *)(this + 0x40) = _LC3;
  *(undefined4 *)(this + 0x44) = uVar6;
  *(undefined4 *)(this + 0x48) = uVar6;
  *(undefined4 *)(this + 0x4c) = uVar6;
  uVar6 = _LC5;
  *(undefined4 *)(this + 0x50) = _LC5;
  *(undefined4 *)(this + 0x54) = uVar6;
  *(undefined4 *)(this + 0x58) = uVar6;
  *(undefined4 *)(this + 0x5c) = uVar6;
  if (_LC16 < (float)((uint)((*(float *)(this + 0x28) * *(float *)(this + 0x28) +
                             *(float *)(this + 0x24) * *(float *)(this + 0x24) +
                             *(float *)(this + 0x20) * *(float *)(this + 0x20) + 0.0) - _LC13) &
                     __LC15)) {
    if (param_2[0x20] == (Result)0x1) {
      plVar4 = *(long **)param_2;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
      (*Free)();
    }
    *(Result **)param_2 = param_2 + 0x10;
    param_2[0x20] = (Result)0x0;
    puVar7 = (undefined8 *)(*Allocate)(0x25);
    uVar5 = _UNK_00102c68;
    uVar2 = __LC17;
    *(undefined8 *)(param_2 + 0x10) = 0x24;
    *(undefined8 **)param_2 = puVar7;
    *puVar7 = uVar2;
    puVar7[1] = uVar5;
    uVar5 = _UNK_00102c78;
    uVar2 = __LC18;
    *(undefined4 *)(puVar7 + 4) = 0x2164657a;
    puVar7[2] = uVar2;
    puVar7[3] = uVar5;
    *(undefined8 *)(param_2 + 8) = 0x24;
    *(undefined1 *)(*(long *)param_2 + 0x24) = 0;
    param_2[0x20] = (Result)0x2;
    return;
  }
  CalculateLocalBounds(this);
  LOCK();
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  UNLOCK();
  if (param_2[0x20] == (Result)0x1) {
    plVar4 = *(long **)param_2;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  else if ((param_2[0x20] == (Result)0x2) && (*(Result **)param_2 != param_2 + 0x10)) {
    (*Free)();
  }
  *(PlaneShape **)param_2 = this;
  param_2[0x20] = (Result)0x1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PlaneShapeSettings::Create() const */

void JPH::PlaneShapeSettings::Create(void)

{
  PlaneShape *pPVar1;
  byte bVar2;
  undefined1 *__src;
  ulong __n;
  PlaneShapeSettings PVar3;
  PlaneShape *this;
  long *__dest;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  PlaneShapeSettings *in_RSI;
  long *in_RDI;
  
  PVar3 = in_RSI[0x38];
  if (PVar3 == (PlaneShapeSettings)0x0) {
    this = (PlaneShape *)(*Allocate)(0x60);
    PlaneShape::PlaneShape(this,in_RSI,(Result *)(in_RSI + 0x18));
    pPVar1 = this + 8;
    LOCK();
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)pPVar1 = *(int *)pPVar1 + -1;
    UNLOCK();
    if (*(int *)pPVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
    PVar3 = in_RSI[0x38];
  }
  *(PlaneShapeSettings *)(in_RDI + 4) = PVar3;
  if (PVar3 == (PlaneShapeSettings)0x1) {
    lVar4 = *(long *)(in_RSI + 0x18);
    *in_RDI = lVar4;
    if (lVar4 == 0) {
      return;
    }
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    return;
  }
  if (PVar3 != (PlaneShapeSettings)0x2) {
    return;
  }
  __dest = in_RDI + 2;
  *in_RDI = (long)__dest;
  __src = *(undefined1 **)(in_RSI + 0x18);
  __n = *(ulong *)(in_RSI + 0x20);
  if (__n < 0x10) {
    if (__n == 1) {
      *(undefined1 *)(in_RDI + 2) = *__src;
      goto LAB_00102347;
    }
    if (__n == 0) goto LAB_00102347;
  }
  else {
    if ((long)__n < 0) {
      std::__throw_length_error("basic_string::_M_create");
      pbVar5 = &sConvexSubShapeTypes;
      _DAT_00104290 = PlaneShape::sRegister()::{lambda()#1}::_FUN;
      _DAT_00104298 = (undefined4)Color::sDarkRed;
      do {
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        lVar4 = (ulong)bVar2 + 0x41e;
        lVar6 = (ulong)bVar2 * 0x110;
        *(code **)(lVar6 + 0x1041a8) = PlaneShape::sCollideConvexVsPlane;
        *(code **)(lVar6 + 0x1041b8) = PlaneShape::sCastConvexVsPlane;
        (&CollisionDispatch::sCollideShape)[lVar4] = JPH::CollisionDispatch::sReversedCollideShape;
        (&CollisionDispatch::sCastShape)[lVar4] = JPH::CollisionDispatch::sReversedCastShape;
      } while (pbVar5 != (byte *)&DVec3::cTrue);
      return;
    }
    __dest = (long *)(*Allocate)(__n + 1);
    in_RDI[2] = __n;
    *in_RDI = (long)__dest;
  }
  memcpy(__dest,__src,__n);
  __dest = (long *)*in_RDI;
LAB_00102347:
  in_RDI[1] = __n;
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::PlaneShape::sRegister() */

void JPH::PlaneShape::sRegister(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = &sConvexSubShapeTypes;
  _DAT_00104290 = sRegister()::{lambda()#1}::_FUN;
  _DAT_00104298 = (undefined4)Color::sDarkRed;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = (ulong)bVar1 + 0x41e;
    lVar4 = (ulong)bVar1 * 0x110;
    *(code **)(lVar4 + 0x1041a8) = sCollideConvexVsPlane;
    *(code **)(lVar4 + 0x1041b8) = sCastConvexVsPlane;
    (&CollisionDispatch::sCollideShape)[lVar2] = JPH::CollisionDispatch::sReversedCollideShape;
    (&CollisionDispatch::sCastShape)[lVar2] = JPH::CollisionDispatch::sReversedCastShape;
  } while (pbVar3 != (byte *)&DVec3::cTrue);
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
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



/* JPH::PhysicsMaterial::GetDebugColor() const */

undefined4 JPH::PhysicsMaterial::GetDebugColor(void)

{
  return (undefined4)Color::sGrey;
}



/* JPH::PlaneShape::MustBeStatic() const */

undefined8 JPH::PlaneShape::MustBeStatic(void)

{
  return 1;
}



/* JPH::PlaneShape::GetLocalBounds() const */

void JPH::PlaneShape::GetLocalBounds(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x48);
  uVar2 = *(undefined8 *)(in_RSI + 0x50);
  uVar3 = *(undefined8 *)(in_RSI + 0x58);
  *in_RDI = *(undefined8 *)(in_RSI + 0x40);
  in_RDI[1] = uVar1;
  in_RDI[2] = uVar2;
  in_RDI[3] = uVar3;
  return;
}



/* JPH::PlaneShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::PlaneShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::PlaneShape::GetInnerRadius() const */

undefined8 JPH::PlaneShape::GetInnerRadius(void)

{
  return 0;
}



/* JPH::PlaneShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::PlaneShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* JPH::PlaneShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JPH::PlaneShape::GetSurfaceNormal(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x20);
}



/* JPH::PlaneShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::PlaneShape::GetSubmergedVolume(void)

{
  return;
}



/* JPH::PlaneShape::GetStats() const */

undefined1  [16] JPH::PlaneShape::GetStats(void)

{
  return ZEXT816(0x60);
}



/* JPH::PlaneShape::GetVolume() const */

undefined8 JPH::PlaneShape::GetVolume(void)

{
  return 0;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00102664. Too many branches */
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
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  float fVar14;
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
  
  fVar15 = (float)((ulong)param_2 >> 0x20);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_4 + 0x20) == PlaneShape::GetLocalBounds) {
    local_68 = *(float *)(param_4 + 8);
    fStack_64 = *(float *)((long)param_4 + 0x44);
    fStack_60 = *(float *)(param_4 + 9);
    fStack_5c = *(float *)((long)param_4 + 0x4c);
    local_58 = *(float *)(param_4 + 10);
    fStack_54 = *(float *)((long)param_4 + 0x54);
    fStack_50 = *(float *)(param_4 + 0xb);
    fStack_4c = *(float *)((long)param_4 + 0x5c);
  }
  else {
    (**(code **)(*param_4 + 0x20))(&local_68);
  }
  local_78 = (float)param_1_00;
  fStack_74 = (float)((ulong)param_1_00 >> 0x20);
  auVar7._0_8_ = CONCAT44(fStack_64 * fStack_74,local_68 * local_78);
  auVar7._8_4_ = fStack_60 * (float)param_2;
  auVar7._12_4_ = fStack_5c * fVar15;
  lVar6 = 0;
  fStack_50 = fStack_50 * (float)param_2;
  fStack_4c = fStack_4c * fVar15;
  auVar11._8_4_ = auVar7._8_4_;
  auVar11._0_8_ = auVar7._0_8_;
  auVar11._12_4_ = auVar7._12_4_;
  auVar9._4_4_ = fStack_54 * fStack_74;
  auVar9._0_4_ = local_58 * local_78;
  auVar9._8_4_ = fStack_50;
  auVar9._12_4_ = fStack_4c;
  local_38 = maxps(auVar11,auVar9);
  auVar20._4_4_ = fStack_54 * fStack_74;
  auVar20._0_4_ = local_58 * local_78;
  auVar20._8_4_ = fStack_50;
  auVar20._12_4_ = fStack_4c;
  local_48 = minps(auVar7,auVar20);
  fVar15 = *(float *)(param_5 + 0x30);
  fVar16 = *(float *)(param_5 + 0x34);
  fVar17 = *(float *)(param_5 + 0x38);
  fVar18 = *(float *)(param_5 + 0x3c);
  fVar10 = fVar15;
  fVar12 = fVar16;
  fVar13 = fVar17;
  fVar14 = fVar18;
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
    fVar10 = fVar10 + auVar20._0_4_;
    fVar12 = fVar12 + auVar20._4_4_;
    fVar13 = fVar13 + auVar20._8_4_;
    fVar14 = fVar14 + auVar20._12_4_;
    fVar15 = fVar15 + auVar9._0_4_;
    fVar16 = fVar16 + auVar9._4_4_;
    fVar17 = fVar17 + auVar9._8_4_;
    fVar18 = fVar18 + auVar9._12_4_;
  } while (lVar6 != 0xc);
  *param_1 = fVar10;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar18;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PlaneShape::~PlaneShape() */

void __thiscall JPH::PlaneShape::~PlaneShape(PlaneShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__PlaneShape_00102aa8;
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
                    /* WARNING: Could not recover jumptable at 0x00102793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x001027a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  return;
}



/* JPH::PlaneShape::~PlaneShape() */

void __thiscall JPH::PlaneShape::~PlaneShape(PlaneShape *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__PlaneShape_00102aa8;
  plVar2 = *(long **)(this + 0x30);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
                    /* WARNING: Could not recover jumptable at 0x001027fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*Free)(this);
        return;
      }
      (**(code **)(*plVar2 + 0x18))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001027d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PlaneShapeSettings::~PlaneShapeSettings() */

void __thiscall JPH::PlaneShapeSettings::~PlaneShapeSettings(PlaneShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00102a70;
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::DebugRenderer::DrawWireTriangle;
  if (this[0x38] == (PlaneShapeSettings)0x1) {
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001028af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  else if ((this[0x38] == (PlaneShapeSettings)0x2) &&
          (*(PlaneShapeSettings **)(this + 0x18) != this + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::PlaneShapeSettings::~PlaneShapeSettings() */

void __thiscall JPH::PlaneShapeSettings::~PlaneShapeSettings(PlaneShapeSettings *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_GetRTTI_00102a70;
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*plVar2 + 0x18) == PhysicsMaterial::~PhysicsMaterial) {
        (*Free)();
      }
      else {
        (**(code **)(*plVar2 + 0x18))();
      }
    }
  }
  *(code **)this = JPH::DebugRenderer::DrawWireTriangle;
  if (this[0x38] == (PlaneShapeSettings)0x1) {
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
  else if ((this[0x38] == (PlaneShapeSettings)0x2) &&
          (*(PlaneShapeSettings **)(this + 0x18) != this + 0x28)) {
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x00102923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::GetRTTIOfType(JPH::PlaneShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC20;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PlaneShape::~PlaneShape() */

void __thiscall JPH::PlaneShape::~PlaneShape(PlaneShape *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

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
/* JPH::PlaneShapeSettings::~PlaneShapeSettings() */

void __thiscall JPH::PlaneShapeSettings::~PlaneShapeSettings(PlaneShapeSettings *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



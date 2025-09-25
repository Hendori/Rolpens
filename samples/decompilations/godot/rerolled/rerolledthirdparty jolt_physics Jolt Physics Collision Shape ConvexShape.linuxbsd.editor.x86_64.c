/* _FUN(void*) */

void JPH::GetRTTIOfType(JPH::ConvexShapeSettings*)::{lambda(void*)#1}::_FUN(void *param_1)

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



/* JPH::ConvexShape::GetTrianglesNext(JPH::Shape::GetTrianglesContext&, int, JPH::Float3*,
   JPH::PhysicsMaterial const**) const */

void __thiscall
JPH::ConvexShape::GetTrianglesNext
          (ConvexShape *this,GetTrianglesContext *param_1,int param_2,Float3 *param_3,
          PhysicsMaterial **param_4)

{
  PhysicsMaterial **ppPVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  PhysicsMaterial *pPVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  PhysicsMaterial **ppPVar13;
  PhysicsMaterial **ppPVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float local_58;
  float fStack_54;
  
  iVar2 = param_2 * 3;
  lVar7 = *(long *)(param_1 + 0x1098);
  iVar12 = sUnitSphereTriangles - (int)lVar7;
  if (iVar12 != iVar2 && SBORROW4(iVar12,iVar2) == iVar12 + param_2 * -3 < 0) {
    iVar12 = iVar2;
  }
  puVar9 = (undefined8 *)(&DAT_00103f10 + lVar7 * 0x10);
  puVar11 = puVar9 + (long)iVar12 * 2;
  if (param_1[0x1090] == (GetTrianglesContext)0x0) {
    if (puVar11 <= puVar9) goto LAB_001001f3;
    do {
      puVar10 = puVar9 + 6;
      auVar16 = (**(code **)(**(long **)(param_1 + 0x1040) + 0x10))(*puVar9,puVar9[1]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      lVar7 = **(long **)(param_1 + 0x1040);
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)param_3 =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 8) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      auVar16 = (**(code **)(lVar7 + 0x10))(puVar9[2],puVar9[3]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      lVar7 = **(long **)(param_1 + 0x1040);
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)(param_3 + 0xc) =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 0x14) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      auVar16 = (**(code **)(lVar7 + 0x10))(puVar9[4],puVar9[5]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)(param_3 + 0x18) =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 0x20) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      puVar9 = puVar10;
      param_3 = param_3 + 0x24;
    } while (puVar10 < puVar11);
  }
  else {
    if (puVar11 <= puVar9) goto LAB_001001f3;
    do {
      puVar10 = puVar9 + 6;
      auVar16 = (**(code **)(**(long **)(param_1 + 0x1040) + 0x10))(*puVar9,puVar9[1]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      lVar7 = **(long **)(param_1 + 0x1040);
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)param_3 =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 8) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      auVar16 = (**(code **)(lVar7 + 0x10))(puVar9[4],puVar9[5]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      lVar7 = **(long **)(param_1 + 0x1040);
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)(param_3 + 0xc) =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 0x14) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      auVar16 = (**(code **)(lVar7 + 0x10))(puVar9[2],puVar9[3]);
      fVar15 = auVar16._8_4_;
      local_58 = auVar16._0_4_;
      fStack_54 = auVar16._4_4_;
      fVar3 = *(float *)(param_1 + 0x1058);
      fVar4 = *(float *)(param_1 + 0x1068);
      fVar5 = *(float *)(param_1 + 0x1078);
      fVar6 = *(float *)(param_1 + 0x1088);
      *(ulong *)(param_3 + 0x18) =
           CONCAT44(local_58 * *(float *)(param_1 + 0x1054) +
                    fStack_54 * *(float *)(param_1 + 0x1064) + fVar15 * *(float *)(param_1 + 0x1074)
                    + *(float *)(param_1 + 0x1084),
                    local_58 * *(float *)(param_1 + 0x1050) +
                    fStack_54 * *(float *)(param_1 + 0x1060) + fVar15 * *(float *)(param_1 + 0x1070)
                    + *(float *)(param_1 + 0x1080));
      *(float *)(param_3 + 0x20) = local_58 * fVar3 + fStack_54 * fVar4 + fVar15 * fVar5 + fVar6;
      puVar9 = puVar10;
      param_3 = param_3 + 0x24;
    } while (puVar10 < puVar11);
  }
  lVar7 = *(long *)(param_1 + 0x1098);
LAB_001001f3:
  *(long *)(param_1 + 0x1098) = lVar7 + iVar12;
  if (param_4 != (PhysicsMaterial **)0x0) {
    ppPVar1 = param_4 + iVar12 / 3;
    pPVar8 = *(PhysicsMaterial **)(this + 0x20);
    if (*(PhysicsMaterial **)(this + 0x20) == (PhysicsMaterial *)0x0) {
      pPVar8 = PhysicsMaterial::sDefault;
    }
    if (param_4 < ppPVar1) {
      *param_4 = pPVar8;
      ppPVar13 = param_4 + 1;
      if (ppPVar13 < ppPVar1) {
        if ((~(ulong)param_4 + (long)ppPVar1 >> 3 & 1) != 0) {
          *ppPVar13 = pPVar8;
          ppPVar13 = param_4 + 2;
          if (ppPVar1 <= ppPVar13) {
            return;
          }
        }
        do {
          *ppPVar13 = pPVar8;
          ppPVar14 = ppPVar13 + 2;
          ppPVar13[1] = pPVar8;
          ppPVar13 = ppPVar14;
        } while (ppPVar14 < ppPVar1);
      }
    }
  }
  return;
}



/* JPH::ConvexShapeSettings::sCreateRTTI(JPH::RTTI&) */

void JPH::ConvexShapeSettings::sCreateRTTI(RTTI *param_1)

{
  int iVar1;
  
  iVar1 = JPH::GetRTTIOfType((ShapeSettings *)0x0);
  JPH::RTTI::AddBaseClass(param_1,iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexShape::GetTrianglesStart(JPH::Shape::GetTrianglesContext&, JPH::AABox const&,
   JPH::Vec3, JPH::Quat, JPH::Vec3) const */

void JPH::ConvexShape::GetTrianglesStart
               (undefined8 param_1_00,float param_2_00,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long *param_1,long param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  long lVar10;
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
  float local_68;
  float fStack_64;
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  fVar17 = (float)((ulong)param_5 >> 0x20);
  fVar16 = (float)((ulong)param_4 >> 0x20);
  fVar13 = (float)param_4;
  fVar7 = (float)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = ZEXT416((uint)(float)param_6) << 0x40;
  local_48 = ZEXT416((uint)fVar17) << 0x20;
  fVar8 = (float)((ulong)param_3 >> 0x20);
  local_58[0] = (float)param_5;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  fVar19 = fVar8 + fVar8;
  local_28 = __LC0;
  uStack_20 = CONCAT44(_LC1,_UNK_0010e678);
  fVar12 = fVar7 + fVar7;
  fVar20 = fVar13 * (fVar13 + fVar13);
  lVar10 = 0;
  fVar14 = fVar16 * (fVar13 + fVar13);
  fVar18 = _LC1 - fVar7 * fVar12;
  fVar21 = _LC1 - fVar20;
  fVar15 = _LC1 - fVar8 * fVar19;
  local_68 = (float)param_1_00;
  fStack_64 = (float)((ulong)param_1_00 >> 0x20);
  do {
    fVar3 = *(float *)((long)local_58 + lVar10);
    fVar4 = *(float *)((long)local_58 + lVar10 + 4);
    fVar5 = *(float *)((long)local_58 + lVar10 + 8);
    fVar6 = *(float *)(local_48 + lVar10 + -4);
    pfVar1 = (float *)(param_2 + 0x1050 + lVar10);
    *pfVar1 = fVar6 * local_68 +
              fVar3 * (fVar15 - fVar20) + fVar4 * (fVar8 * fVar12 - fVar14) +
              fVar5 * (fVar13 * fVar12 + fVar19 * fVar16);
    pfVar1[1] = fVar6 * fStack_64 +
                fVar3 * (fVar8 * fVar12 + fVar14) + fVar4 * (fVar21 - fVar7 * fVar12) +
                fVar5 * (fVar13 * fVar19 - fVar12 * fVar16);
    pfVar1[2] = fVar6 * param_2_00 +
                fVar3 * (fVar13 * fVar12 - fVar19 * fVar16) +
                fVar4 * (fVar12 * fVar16 + fVar13 * fVar19) + fVar5 * (fVar18 - fVar8 * fVar19);
    pfVar1[3] = fVar6 * 1.0 + fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0;
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x40);
  *(undefined8 *)(param_2 + 0x1098) = 0;
  auVar2._4_4_ = -(uint)(fVar17 < 0.0);
  auVar2._0_4_ = -(uint)((float)param_5 < 0.0);
  auVar2._8_4_ = -(uint)((float)param_6 < 0.0);
  auVar2._12_4_ = -(uint)((float)((ulong)param_6 >> 0x20) < 0.0);
  uVar9 = movmskps(0x40,auVar2);
  lVar10 = *param_1;
  *(bool *)(param_2 + 0x1090) = (POPCOUNT((byte)uVar9 & 7) & 1U) != 0;
  *(byte *)(param_2 + 0x1090) = *(byte *)(param_2 + 0x1090) & 1;
  uVar11 = (**(code **)(lVar10 + 0x130))(0x3f8000003f800000,param_1,1,param_2);
  *(undefined8 *)(param_2 + 0x1040) = uVar11;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexShape::CastRay(JPH::RayCast const&, JPH::RayCastSettings const&,
   JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>&, JPH::ShapeFilter const&) const */

void __thiscall
JPH::ConvexShape::CastRay
          (ConvexShape *this,RayCast *param_1,RayCastSettings *param_2,SubShapeIDCreator *param_3,
          CollisionCollector *param_4,ShapeFilter *param_5)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  float fVar4;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
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
  cVar2 = (**(code **)(*(long *)param_5 + 0x10))(param_5,this,param_3);
  if (cVar2 != '\0') {
    local_7c = *(float *)(param_4 + 8);
    local_80 = 0xffffffff;
    local_78 = 0xffffffff;
    cVar2 = (**(code **)(*(long *)this + 0x98))(this,param_1,param_3,&local_80);
    if (cVar2 != '\0') {
      if ((param_2[2] != (RayCastSettings)0x0) || (0.0 < local_7c)) {
        local_80 = 0xffffffff;
        if (*(long *)(param_4 + 0x10) != 0) {
          local_80 = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
        }
        (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_80);
      }
      if ((param_2[1] == (RayCastSettings)0x1) && (fVar1 = *(float *)(param_4 + 8), 0.0 < fVar1)) {
        if (_LC1 <= fVar1) {
          fVar1 = _LC1;
        }
        fVar4 = local_7c - fVar1;
        if (fVar4 < 0.0) {
          local_74 = 0x3f800000ffffffff;
          local_6c = 0xffffffff;
          local_68 = fVar1 * *(float *)(param_1 + 0x10) + *(float *)param_1;
          fStack_64 = fVar1 * *(float *)(param_1 + 0x14) + *(float *)(param_1 + 4);
          fStack_60 = fVar1 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 8);
          fStack_5c = fVar1 * *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0xc);
          local_58 = fVar4 * *(float *)(param_1 + 0x10);
          fStack_54 = fVar4 * *(float *)(param_1 + 0x14);
          fStack_50 = fVar4 * *(float *)(param_1 + 0x18);
          fStack_4c = fVar4 * *(float *)(param_1 + 0x1c);
          cVar2 = (**(code **)(*(long *)this + 0x98))(this,&local_68,param_3,&local_74);
          if ((cVar2 != '\0') && (0.0 < local_74._4_4_)) {
            uVar3 = 0xffffffff;
            if (*(long *)(param_4 + 0x10) != 0) {
              uVar3 = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x34);
            }
            local_74 = CONCAT44((local_74._4_4_ - _LC1) * fVar4 + local_7c,uVar3);
            (**(code **)(*(long *)param_4 + 0x28))(param_4,&local_74);
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* std::_Function_handler<JPH::Vec3 (JPH::Vec3),
   JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const::{lambda(JPH::Vec3)#1}>::_M_manager(std::_Any_data&, std::_Any_data
   const&, std::_Manager_operation) */

undefined8
std::
_Function_handler<JPH::Vec3(JPH::Vec3),JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool)const::{lambda(JPH::Vec3)#1}>
::_M_manager(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  if (param_3 != 0) {
    if (param_3 == 1) {
      *param_1 = param_2;
    }
    else if (param_3 == 2) {
      *param_1 = *param_2;
    }
    return 0;
  }
  *param_1 = &const::{lambda(JPH::Vec3)#1}::typeinfo;
  return 0;
}



/* JPH::ConvexShape::RestoreMaterialState(JPH::RefConst<JPH::PhysicsMaterial> const*, unsigned int)
    */

void JPH::ConvexShape::RestoreMaterialState(RefConst *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 in_register_00000034;
  long *plVar3;
  
  plVar3 = (long *)CONCAT44(in_register_00000034,param_2);
  plVar1 = *(long **)(param_1 + 0x20);
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
        goto LAB_001008c7;
      }
      (**(code **)(*plVar1 + 0x18))();
    }
    plVar2 = (long *)*plVar3;
  }
LAB_001008c7:
  *(long **)(param_1 + 0x20) = plVar2;
  if (plVar2 != (long *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  return;
}



/* JPH::ConvexShape::SaveMaterialState(JPH::Array<JPH::RefConst<JPH::PhysicsMaterial>,
   JPH::STLAllocator<JPH::RefConst<JPH::PhysicsMaterial> > >&) const */

void __thiscall JPH::ConvexShape::SaveMaterialState(ConvexShape *this,Array *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if (*(long *)param_1 != 0) {
    plVar10 = *(long **)(param_1 + 0x10);
    plVar8 = plVar10 + *(long *)param_1;
    for (; plVar10 < plVar8; plVar10 = plVar10 + 1) {
      while (plVar2 = (long *)*plVar10, plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) break;
        if (*(code **)(*plVar2 + 0x18) != PhysicsMaterial::~PhysicsMaterial) {
          (**(code **)(*plVar2 + 0x18))();
          break;
        }
        (*Free)();
        plVar10 = plVar10 + 1;
        if (plVar8 <= plVar10) goto LAB_00100990;
      }
    }
  }
LAB_00100990:
  *(undefined8 *)param_1 = 0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar4 = (undefined8 *)(*Allocate)(8);
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    if (puVar9 != (undefined8 *)0x0) {
      lVar5 = *(long *)param_1;
      if (puVar4 < puVar9) {
        for (puVar6 = puVar4; puVar6 < puVar4 + lVar5; puVar6 = puVar6 + 1) {
          uVar3 = *puVar9;
          puVar9 = puVar9 + 1;
          *puVar6 = uVar3;
        }
      }
      else {
        puVar9 = puVar9 + lVar5 + -1;
        puVar6 = puVar4 + lVar5 + -1;
        if (!CARRY8(lVar5 * 8 - 8,(ulong)puVar4)) {
          do {
            uVar3 = *puVar9;
            puVar7 = puVar6 + -1;
            puVar9 = puVar9 + -1;
            *puVar6 = uVar3;
            puVar6 = puVar7;
          } while (puVar4 <= puVar7);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    *(undefined8 *)(param_1 + 8) = 1;
    lVar5 = *(long *)param_1 + 1;
    plVar8 = puVar4 + *(long *)param_1;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x10);
    lVar5 = 1;
  }
  *(long *)param_1 = lVar5;
  lVar5 = *(long *)(this + 0x20);
  *plVar8 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return;
}



/* JPH::ConvexShapeSettings::GetRTTI() const */

undefined1 * JPH::ConvexShapeSettings::GetRTTI(void)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti,"ConvexShapeSettings",
                      0x50,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::ConvexShapeSettings*)::{lambda(void*)#1}::_FUN,sCreateRTTI)
      ;
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti;
}



/* std::_Function_handler<JPH::Vec3 (JPH::Vec3),
   JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const::{lambda(JPH::Vec3)#1}>::_M_invoke(std::_Any_data const&, JPH::Vec3&&) */

undefined1  [16]
std::
_Function_handler<JPH::Vec3(JPH::Vec3),JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool)const::{lambda(JPH::Vec3)#1}>
::_M_invoke(_Any_data *param_1,Vec3 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  local_28 = (float)uVar2;
  fStack_24 = (float)((ulong)uVar2 >> 0x20);
  fStack_20 = (float)uVar3;
  fStack_1c = (float)((ulong)uVar3 >> 0x20);
  pcVar1 = *(code **)(*(long *)**(undefined8 **)param_1 + 0x10);
  fVar4 = SQRT(fStack_20 * fStack_20 + local_28 * local_28 + 0.0 + fStack_24 * fStack_24);
  if (fVar4 <= 0.0) {
    auVar8 = (*pcVar1)(uVar2,uVar3);
    local_28 = auVar8._0_4_;
    fStack_24 = auVar8._4_4_;
    fStack_20 = auVar8._8_4_;
    fStack_1c = auVar8._12_4_;
  }
  else {
    fVar4 = *(float *)(*(undefined8 **)param_1 + 1) / fVar4;
    fVar5 = fVar4 * local_28;
    fVar6 = fVar4 * fStack_24;
    fVar7 = fVar4 * fStack_20;
    fVar4 = fVar4 * fStack_1c;
    auVar8 = (*pcVar1)(uVar2,uVar3);
    local_28 = auVar8._0_4_;
    fStack_24 = auVar8._4_4_;
    fStack_20 = auVar8._8_4_;
    fStack_1c = auVar8._12_4_;
    local_28 = fVar5 + local_28;
    fStack_24 = fVar6 + fStack_24;
    fStack_20 = fVar7 + fStack_20;
    fStack_1c = fVar4 + fStack_1c;
  }
  auVar8._4_4_ = fStack_24;
  auVar8._0_4_ = local_28;
  auVar8._8_4_ = fStack_20;
  auVar8._12_4_ = fStack_1c;
  return auVar8;
}



/* JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3,
   JPH::Color, bool) const */

void JPH::ConvexShape::DrawGetSupportFunction
               (long *param_1,long *param_2,float *param_3,undefined4 param_4,char param_5)

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
  long *plVar22;
  long lVar23;
  ulong uVar24;
  code *pcVar25;
  long *plVar26;
  long in_FS_OFFSET;
  undefined1 auVar28 [12];
  float fVar27;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  float local_10e8;
  float fStack_10e4;
  int *local_10c0;
  long *local_10b8;
  float local_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined1 local_1088 [4168];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar22 = (long *)(**(code **)(*param_1 + 0x130))(param_1,0,local_1088);
  local_10b0 = (float)(**(code **)(*plVar22 + 0x18))(plVar22);
  local_10a8 = &local_10b8;
  uStack_10a0 = 0;
  local_1098 = std::
               _Function_handler<JPH::Vec3(JPH::Vec3),JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool)const::{lambda(JPH::Vec3)#1}>
               ::_M_manager;
  uStack_1090 = std::
                _Function_handler<JPH::Vec3(JPH::Vec3),JPH::ConvexShape::DrawGetSupportFunction(JPH::DebugRenderer*,JPH::Mat44_const&,JPH::Vec3,JPH::Color,bool)const::{lambda(JPH::Vec3)#1}>
                ::_M_invoke;
  local_10b8 = plVar22;
  JPH::DebugRenderer::CreateTriangleGeometryForConvex(&local_10c0,param_2,&local_10a8);
  if (local_1098 != (code *)0x0) {
    (*local_1098)(&local_10a8,&local_10a8,3);
  }
  fVar35 = param_3[0xc];
  fVar36 = param_3[0xd];
  fVar37 = param_3[0xe];
  fVar38 = param_3[0xf];
  lVar23 = 0;
  fVar39 = fVar35;
  fVar40 = fVar36;
  fVar41 = fVar37;
  fVar42 = fVar38;
  do {
    fVar2 = *(float *)((long)local_10c0 + lVar23 + 0x20);
    fVar3 = *(float *)((long)local_10c0 + lVar23 + 0x30);
    pfVar1 = param_3 + lVar23;
    auVar29._0_8_ = CONCAT44(fVar2 * pfVar1[1],fVar2 * *pfVar1);
    auVar29._8_4_ = fVar2 * pfVar1[2];
    auVar29._12_4_ = fVar2 * pfVar1[3];
    pfVar1 = param_3 + lVar23;
    auVar34._0_4_ = fVar3 * *pfVar1;
    auVar34._4_4_ = fVar3 * pfVar1[1];
    auVar34._8_4_ = fVar3 * pfVar1[2];
    auVar34._12_4_ = fVar3 * pfVar1[3];
    lVar23 = lVar23 + 4;
    auVar43._8_4_ = auVar29._8_4_;
    auVar43._0_8_ = auVar29._0_8_;
    auVar43._12_4_ = auVar29._12_4_;
    auVar43 = minps(auVar43,auVar34);
    auVar29 = maxps(auVar29,auVar34);
    fVar35 = fVar35 + auVar43._0_4_;
    fVar36 = fVar36 + auVar43._4_4_;
    fVar37 = fVar37 + auVar43._8_4_;
    fVar38 = fVar38 + auVar43._12_4_;
    fVar39 = fVar39 + auVar29._0_4_;
    fVar40 = fVar40 + auVar29._4_4_;
    fVar41 = fVar41 + auVar29._8_4_;
    fVar42 = fVar42 + auVar29._12_4_;
  } while (lVar23 != 0xc);
  local_10a8 = (long **)CONCAT44(fVar36,fVar35);
  uStack_10a0 = CONCAT44(fVar38,fVar37);
  local_1098 = (code *)CONCAT44(fVar40,fVar39);
  uStack_1090 = (code *)CONCAT44(fVar42,fVar41);
  fVar35 = ((float)local_10c0[0xc] - (float)local_10c0[8]) * _LC5;
  fVar36 = ((float)local_10c0[0xd] - (float)local_10c0[9]) * _LC5;
  fVar37 = ((float)local_10c0[0xe] - (float)local_10c0[10]) * _LC5;
  auVar30._12_4_ = ((float)local_10c0[0xf] - (float)local_10c0[0xb]) * _LC5;
  auVar30._4_4_ = fVar37;
  auVar30._0_4_ = fVar37;
  auVar30._8_4_ = auVar30._12_4_;
  auVar31._4_12_ = auVar30._4_12_;
  auVar31._0_4_ = fVar37 * fVar37 + fVar35 * fVar35 + 0.0 + fVar36 * fVar36;
  (**(code **)(*param_2 + 0x30))(auVar31._0_8_,param_2,param_3,&local_10a8,param_4,&local_10c0,0,0);
  if (param_5 != '\0') {
    uVar24 = (ulong)(uint)Vec3::sUnitSphere;
    pcVar25 = JPH::DebugRenderer::DrawMarker;
    if (uVar24 != 0) {
      do {
        fVar36 = _LC7 * *(float *)pcVar25;
        fVar37 = _LC7 * *(float *)((long)pcVar25 + 4);
        fVar38 = _LC7 * *(float *)((long)pcVar25 + 8);
        fVar35 = SQRT(fVar38 * fVar38 + fVar37 * fVar37 + fVar36 * fVar36 + 0.0);
        if (0.0 < fVar35) {
          fVar35 = local_10b0 / fVar35;
          auVar44 = (**(code **)(*local_10b8 + 0x10))
                              (CONCAT44(fVar37,fVar36),
                               CONCAT44(_LC7 * *(float *)((long)pcVar25 + 0xc),fVar38));
          local_10e8 = auVar44._0_4_;
          fStack_10e4 = auVar44._4_4_;
          auVar28._0_4_ = local_10e8 + fVar35 * fVar36;
          auVar28._4_4_ = fStack_10e4 + fVar35 * fVar37;
          auVar28._8_4_ = auVar44._8_4_ + fVar35 * fVar38;
        }
        else {
          auVar28 = (**(code **)(*local_10b8 + 0x10))
                              (CONCAT44(fVar37,fVar36),
                               CONCAT44(_LC7 * *(float *)((long)pcVar25 + 0xc),fVar38));
        }
        fVar27 = auVar28._0_4_;
        fVar32 = auVar28._4_4_;
        fVar33 = auVar28._8_4_;
        fVar35 = param_3[2];
        fVar39 = param_3[3];
        pcVar25 = (code *)((long)pcVar25 + 0x10);
        fVar40 = param_3[6];
        fVar41 = param_3[7];
        fVar42 = param_3[10];
        fVar2 = param_3[0xb];
        fVar36 = fVar27 + fVar36;
        fVar37 = fVar32 + fVar37;
        fVar38 = fVar33 + fVar38;
        fVar3 = param_3[0xe];
        fVar4 = param_3[0xf];
        fVar5 = param_3[4];
        fVar6 = param_3[5];
        fVar7 = param_3[6];
        fVar8 = param_3[7];
        uVar21 = CONCAT44(fVar27 * param_3[1] + fVar32 * param_3[5] + fVar33 * param_3[9] +
                          param_3[0xd],
                          fVar27 * *param_3 + fVar32 * param_3[4] + fVar33 * param_3[8] +
                          param_3[0xc]);
        fVar9 = *param_3;
        fVar10 = param_3[1];
        fVar11 = param_3[2];
        fVar12 = param_3[3];
        fVar13 = param_3[8];
        fVar14 = param_3[9];
        fVar15 = param_3[10];
        fVar16 = param_3[0xb];
        fVar17 = param_3[0xc];
        fVar18 = param_3[0xd];
        fVar19 = param_3[0xe];
        fVar20 = param_3[0xf];
        JPH::DebugRenderer::DrawMarker(uVar21,param_2,(undefined4)Color::sWhite);
        JPH::DebugRenderer::DrawArrow
                  (uVar21,CONCAT44(fVar27 * fVar39 + fVar32 * fVar41 + fVar33 * fVar2 + fVar4,
                                   fVar27 * fVar35 + fVar32 * fVar40 + fVar33 * fVar42 + fVar3),
                   CONCAT44(fVar38 * fVar14 + fVar36 * fVar10 + fVar37 * fVar6 + fVar18,
                            fVar38 * fVar13 + fVar36 * fVar9 + fVar37 * fVar5 + fVar17),
                   CONCAT44(fVar38 * fVar16 + fVar36 * fVar12 + fVar37 * fVar8 + fVar20,
                            fVar38 * fVar15 + fVar36 * fVar11 + fVar37 * fVar7 + fVar19),param_2,
                   (undefined4)Color::sWhite);
      } while (JPH::DebugRenderer::DrawMarker + uVar24 * 0x10 != pcVar25);
    }
  }
  if (local_10c0 != (int *)0x0) {
    LOCK();
    *local_10c0 = *local_10c0 + -1;
    UNLOCK();
    if (*local_10c0 == 0) {
      plVar22 = *(long **)(local_10c0 + 6);
      if (plVar22 != (long *)0x0) {
        if ((*(long *)(local_10c0 + 2) != 0) &&
           (plVar26 = plVar22 + *(long *)(local_10c0 + 2) * 2, plVar22 < plVar26)) {
          do {
            if ((long *)*plVar22 != (long *)0x0) {
              (**(code **)(*(long *)*plVar22 + 0x18))();
            }
            plVar22 = plVar22 + 2;
          } while (plVar22 < plVar26);
          plVar22 = *(long **)(local_10c0 + 6);
        }
        local_10c0[2] = 0;
        local_10c0[3] = 0;
        (*Free)(plVar22);
      }
      (*Free)(local_10c0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ClosestPoint::GetBaryCentricCoordinates(JPH::Vec3, JPH::Vec3, JPH::Vec3, float&, float&,
   float&) [clone .isra.0] */

void JPH::ClosestPoint::GetBaryCentricCoordinates
               (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5
               ,float param_6,float *param_7,float *param_8,float *param_9)

{
  float fVar1;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  fVar2 = _LC1;
  fVar12 = (float)((ulong)param_5 >> 0x20);
  fVar11 = (float)param_5;
  local_18 = (float)param_3;
  uStack_14 = (float)((ulong)param_3 >> 0x20);
  local_38 = (float)param_1;
  uStack_34 = (float)((ulong)param_1 >> 0x20);
  fVar8 = local_18 - local_38;
  fVar9 = uStack_14 - uStack_34;
  fVar10 = param_4 - param_2;
  fVar5 = fVar11 - local_38;
  fVar6 = fVar12 - uStack_34;
  fVar7 = param_6 - param_2;
  fVar1 = fVar11 - local_18;
  fVar3 = fVar12 - uStack_14;
  fVar4 = param_6 - param_4;
  fVar15 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
  fVar14 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5 + 0.0;
  fVar13 = fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1 + 0.0;
  if (fVar13 < fVar15) {
    fVar15 = fVar4 * fVar7 + fVar6 * fVar3 + fVar5 * fVar1 + 0.0;
    fVar8 = fVar13 * fVar14 - fVar15 * fVar15;
    if (_LC9 <= fVar8) {
      fVar5 = fVar7 * param_6 + fVar6 * fVar12 + fVar5 * fVar11 + 0.0;
      fVar1 = fVar4 * param_6 + fVar12 * fVar3 + fVar11 * fVar1 + 0.0;
      fVar14 = (fVar1 * fVar14 - fVar15 * fVar5) / fVar8;
      *param_7 = (fVar13 * fVar5 - fVar15 * fVar1) / fVar8;
      *param_8 = fVar14;
      *param_9 = (fVar2 - *param_7) - fVar14;
      return;
    }
    if (fVar14 <= fVar13) {
      if (fVar13 < _LC10) {
        if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <=
            param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0) {
          *param_8 = 0.0;
          *param_9 = 1.0;
        }
        else {
          *param_8 = 1.0;
          *param_9 = 0.0;
        }
      }
      else {
        fVar13 = (float)((uint)(fVar4 * param_4 + uStack_14 * fVar3 + local_18 * fVar1 + 0.0) ^
                        __LC11) / fVar13;
        fVar2 = _LC1 - fVar13;
        *param_9 = fVar13;
        *param_8 = fVar2;
      }
      *param_7 = 0.0;
      return;
    }
    if (fVar14 < _LC10) {
      fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
      goto LAB_0010143a;
    }
    fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
  }
  else {
    fVar2 = fVar7 * fVar10 + fVar6 * fVar9 + fVar5 * fVar8 + 0.0;
    fVar1 = fVar14 * fVar15 - fVar2 * fVar2;
    if (_LC9 <= fVar1) {
      fVar13 = fVar10 * param_2 + fVar9 * uStack_34 + fVar8 * local_38 + 0.0;
      fVar3 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0 + param_2 * fVar7;
      fVar15 = (fVar2 * fVar13 - fVar3 * fVar15) / fVar1;
      *param_8 = (fVar2 * fVar3 - fVar14 * fVar13) / fVar1;
      fVar2 = _LC1;
      *param_9 = fVar15;
      *param_7 = (fVar2 - *param_8) - fVar15;
      return;
    }
    if (fVar14 < fVar15) {
      if (fVar15 < _LC10) {
        if (param_4 * param_4 + uStack_14 * uStack_14 + local_18 * local_18 + 0.0 <=
            param_2 * param_2 + uStack_34 * uStack_34 + local_38 * local_38 + 0.0) {
          *param_7 = 0.0;
          *param_8 = 1.0;
        }
        else {
          *param_7 = 1.0;
          *param_8 = 0.0;
        }
      }
      else {
        fVar15 = (float)((uint)(uStack_34 * fVar9 + local_38 * fVar8 + 0.0 + param_2 * fVar10) ^
                        __LC11) / fVar15;
        fVar2 = _LC1 - fVar15;
        *param_8 = fVar15;
        *param_7 = fVar2;
      }
      *param_9 = 0.0;
      return;
    }
    if (fVar14 < _LC10) {
      fVar2 = uStack_34 * uStack_34 + local_38 * local_38 + 0.0;
LAB_0010143a:
      if (param_6 * param_6 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0 <= param_2 * param_2 + fVar2)
      {
        *param_7 = 0.0;
        *param_9 = 1.0;
      }
      else {
        *param_7 = 1.0;
        *param_9 = 0.0;
      }
      goto LAB_001012fa;
    }
    fVar2 = uStack_34 * fVar6 + local_38 * fVar5 + 0.0;
  }
  fVar14 = (float)((uint)(fVar2 + fVar7 * param_2) ^ __LC11) / fVar14;
  fVar2 = _LC1 - fVar14;
  *param_9 = fVar14;
  *param_7 = fVar2;
LAB_001012fa:
  *param_8 = 0.0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010178a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* JPH::ConvexShape::GetSubmergedVolume(JPH::Mat44 const&, JPH::Vec3, JPH::Plane const&, float&,
   float&, JPH::Vec3&, JPH::Vec3) const */

void JPH::ConvexShape::GetSubmergedVolume
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_1,float *param_6,float *param_7,float *param_8,float *param_9,
               undefined1 (*param_10) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  bool bVar14;
  byte bVar15;
  float *pfVar16;
  uint unaff_EBX;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  float *pfVar21;
  long in_FS_OFFSET;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float afStack_340 [64];
  undefined8 local_240;
  float *local_238;
  float *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [8];
  undefined8 uStack_210;
  float *local_208;
  byte local_200;
  byte local_1ff;
  undefined8 local_1fc;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  float afStack_1c0 [2];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_d0 [2];
  float local_c8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  pfVar21 = local_c8;
  uStack_210 = param_2;
  local_218 = (undefined1  [8])param_1_00;
  auVar30 = _local_218;
  local_218._0_4_ = (undefined4)param_1_00;
  local_218._4_4_ = (undefined4)((ulong)param_1_00 >> 0x20);
  uStack_210._0_4_ = (float)param_2;
  uStack_210._4_4_ = (float)((ulong)param_2 >> 0x20);
  auVar24._0_4_ = 0.0 - (float)local_218._0_4_;
  auVar24._4_4_ = 0.0 - (float)local_218._4_4_;
  auVar24._8_4_ = 0.0 - (float)uStack_210;
  auVar24._12_4_ = 0.0 - uStack_210._4_4_;
  _local_218 = maxps(auVar24,auVar30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_240 = 0x10164a;
  local_238 = param_9;
  local_230 = param_8;
  local_228 = param_4;
  local_220 = param_3;
  (**(code **)(*param_1 + 0x20))(pfVar21);
  fVar22 = ((float)local_b8 - local_c8[0]) * _LC5 * (float)local_218._0_4_;
  fVar25 = (local_b8._4_4_ - local_c8[1]) * _LC5 * (float)local_218._4_4_;
  fVar27 = ((float)uStack_b0 - local_c8[2]) * _LC5 * (float)uStack_210;
  *local_230 = _LC15 * fVar22 * fVar25 * fVar27;
  local_c8[0] = _LC17;
  local_c8[1] = _LC17;
  local_c8[2] = _LC17;
  local_c8[3] = _LC17;
  local_b8 = __LC18;
  uStack_b0 = CONCAT44(_UNK_0010e6bc,_LC17);
  local_a8 = __LC19;
  uStack_a0 = _UNK_0010e6c8;
  local_98 = _LC44;
  uStack_90 = _UNK_0010e6d8;
  local_88 = __LC21;
  uStack_80 = _UNK_0010e6e8;
  local_78 = __LC22;
  uStack_70 = _UNK_0010e6f8;
  local_68 = __LC23;
  uStack_60 = _UNK_0010e708;
  local_58 = _LC1;
  uStack_54 = _LC1;
  uStack_50 = _LC1;
  uStack_4c = _LC1;
  local_148 = __LC25;
  uStack_140 = _UNK_0010e718;
  local_138 = __LC26;
  uStack_130 = _UNK_0010e728;
  local_128 = __LC27;
  uStack_120 = _UNK_0010e738;
  local_118 = __LC28;
  uStack_110 = _UNK_0010e748;
  local_108 = __LC29;
  uStack_100 = _UNK_0010e758;
  local_f8 = __LC30;
  uStack_f0 = _UNK_0010e768;
  local_d8 = _LC32;
  local_e8 = __LC31;
  uStack_e0 = _UNK_0010e778;
  lVar20 = 0;
  fVar31 = *param_6;
  fVar1 = param_6[1];
  fVar2 = param_6[2];
  fVar3 = param_6[3];
  fVar32 = param_6[4];
  fVar5 = param_6[5];
  fVar6 = param_6[6];
  fVar7 = param_6[7];
  fVar23 = param_6[8];
  fVar26 = param_6[9];
  fVar28 = param_6[10];
  fVar29 = param_6[0xb];
  fVar8 = param_6[0xc];
  fVar9 = param_6[0xd];
  fVar10 = param_6[0xe];
  fVar11 = param_6[0xf];
  local_1c8 = (ulong)(uint)fVar22;
  afStack_1c0[0] = 0.0;
  afStack_1c0[1] = 0.0;
  local_208 = afStack_340;
  local_1b8 = ZEXT416((uint)fVar25) << 0x20;
  local_1a8 = ZEXT416((uint)fVar27) << 0x40;
  local_198 = __LC0;
  uStack_190 = CONCAT44(_LC1,_UNK_0010e678);
  do {
    fVar22 = *(float *)((long)&local_1c8 + lVar20);
    fVar25 = *(float *)((long)&local_1c8 + lVar20 + 4);
    fVar27 = *(float *)(local_1b8 + lVar20 + -8);
    fVar12 = *(float *)(local_1b8 + lVar20 + -4);
    *(float *)((long)local_188 + lVar20) =
         fVar12 * fVar8 + fVar22 * fVar31 + fVar25 * fVar32 + fVar27 * fVar23;
    *(float *)((long)local_188 + lVar20 + 4) =
         fVar12 * fVar9 + fVar22 * fVar1 + fVar25 * fVar5 + fVar27 * fVar26;
    *(float *)((long)local_188 + lVar20 + 8) =
         fVar12 * fVar10 + fVar22 * fVar2 + fVar25 * fVar6 + fVar27 * fVar28;
    *(float *)((long)local_188 + lVar20 + 0xc) =
         fVar12 * fVar11 + fVar22 * fVar3 + fVar25 * fVar7 + fVar27 * fVar29;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x40);
  uVar19 = 0;
  bVar14 = false;
  local_200 = 1;
  local_1d8 = local_220;
  local_1ff = 1;
  local_1fc = 0;
  local_1d0 = local_228;
  fVar31 = *param_7;
  fVar1 = param_7[2];
  local_1e8 = (undefined1  [16])0x0;
  fVar2 = param_7[1];
  fVar3 = param_7[3];
  pfVar16 = local_208;
  fVar32 = _LC14;
  do {
    fVar5 = *pfVar21;
    fVar6 = pfVar21[1];
    fVar7 = pfVar21[2];
    fVar23 = fVar5 * local_188[0] + fVar6 * local_188[4] + fVar7 * local_188[8] + local_188[0xc];
    fVar26 = fVar5 * local_188[1] + fVar6 * local_188[5] + fVar7 * local_188[9] + local_188[0xd];
    fVar28 = fVar5 * local_188[2] + fVar6 * local_188[6] + fVar7 * local_188[10] + local_188[0xe];
    fVar29 = fVar28 * fVar1 + fVar26 * fVar2 + fVar23 * fVar31 + 0.0 + fVar3;
    bVar4 = 0.0 <= fVar29;
    local_1ff = local_1ff & bVar4;
    local_200 = local_200 & !bVar4;
    if (fVar29 < fVar32) {
      bVar14 = true;
      fVar32 = fVar29;
      unaff_EBX = uVar19;
    }
    uVar19 = uVar19 + 1;
    *(bool *)(pfVar16 + 5) = bVar4;
    pfVar21 = pfVar21 + 4;
    *pfVar16 = fVar23;
    pfVar16[1] = fVar26;
    pfVar16[2] = fVar28;
    pfVar16[3] = fVar5 * local_188[3] + fVar6 * local_188[7] + fVar7 * local_188[0xb] +
                 local_188[0xf];
    pfVar16[4] = fVar29;
    pfVar16 = pfVar16 + 8;
  } while (uVar19 != 8);
  if (bVar14) {
    local_1fc = (ulong)unaff_EBX;
  }
  if (local_1ff == 0) {
    if (local_200 == 0) {
      bVar15 = (byte)local_1fc;
      piVar17 = (int *)&local_148;
      do {
        while ((1 << (bVar15 & 0x1f) & piVar17[4]) != 0) {
          piVar17 = piVar17 + 5;
          if (local_d0 == piVar17) goto LAB_00101a8c;
        }
        piVar18 = piVar17 + 5;
        PolyhedronSubmergedVolumeCalculator::AddFace
                  ((PolyhedronSubmergedVolumeCalculator *)&local_208,*piVar17,piVar17[1],piVar17[2])
        ;
        PolyhedronSubmergedVolumeCalculator::AddFace
                  ((PolyhedronSubmergedVolumeCalculator *)&local_208,*piVar17,piVar17[2],piVar17[3])
        ;
        piVar17 = piVar18;
      } while (local_d0 != piVar18);
LAB_00101a8c:
      if (local_1fc._4_4_ <= 0.0) {
        auVar30 = (undefined1  [16])0x0;
      }
      else {
        fVar31 = _LC33 * local_1fc._4_4_;
        auVar30._4_4_ = fVar31;
        auVar30._0_4_ = fVar31;
        auVar30._8_4_ = fVar31;
        auVar30._12_4_ = fVar31;
        auVar30 = divps(local_1e8,auVar30);
      }
      *param_10 = auVar30;
      *local_238 = local_1fc._4_4_ / __LC34;
    }
    else {
      *local_238 = *local_230;
      uVar13 = *(undefined8 *)(param_6 + 0xe);
      *(undefined8 *)*param_10 = *(undefined8 *)(param_6 + 0xc);
      *(undefined8 *)(*param_10 + 8) = uVar13;
    }
  }
  else {
    *local_238 = 0.0;
    *param_10 = (undefined1  [16])0x0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::GetRTTIOfType(JPH::ConvexShapeSettings*) */

undefined1 * JPH::GetRTTIOfType(ConvexShapeSettings *param_1)

{
  int iVar1;
  
  if (GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti == '\0') {
    iVar1 = __cxa_guard_acquire(&GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti);
    if (iVar1 != 0) {
      JPH::RTTI::RTTI((RTTI *)GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti,"ConvexShapeSettings",
                      0x50,(_func_void_ptr *)0x0,
                      GetRTTIOfType(JPH::ConvexShapeSettings*)::{lambda(void*)#1}::_FUN,
                      ConvexShapeSettings::sCreateRTTI);
      __cxa_atexit(RTTI::~RTTI,GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti,&__dso_handle);
      __cxa_guard_release(&GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti);
      return GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti;
    }
  }
  return GetRTTIOfType(JPH::ConvexShapeSettings*)::rtti;
}



/* JPH::ConvexShapeSettings::CastTo(JPH::RTTI const*) const */

void JPH::ConvexShapeSettings::CastTo(RTTI *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)GetRTTIOfType((ConvexShapeSettings *)0x0);
  JPH::RTTI::CastTo(pvVar1,param_1);
  return;
}



/* JPH::ConvexShape::sRegister() */

void JPH::ConvexShape::sRegister(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = &DAT_0010e4d1;
  uVar2 = 0;
  while( true ) {
    pbVar4 = &sConvexSubShapeTypes;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      lVar3 = (ulong)bVar1 + uVar2 * 0x22;
      (&CollisionDispatch::sCollideShape)[lVar3] = sCollideConvexVsConvex;
      (&CollisionDispatch::sCastShape)[lVar3] = sCastConvexVsConvex;
    } while (pbVar4 != &ConvexShapeSettings::vtable);
    if (pbVar5 == &ConvexShapeSettings::vtable) break;
    uVar2 = (ulong)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  return;
}



/* JPH::ConvexShape::CastRay(JPH::RayCast const&, JPH::SubShapeIDCreator const&,
   JPH::RayCastResult&) const */

void __thiscall
JPH::ConvexShape::CastRay
          (ConvexShape *this,RayCast *param_1,SubShapeIDCreator *param_2,RayCastResult *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1138 [192];
  undefined4 local_1078;
  undefined1 local_1068 [4168];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x130))(0x3f8000003f800000,this,1,local_1068);
  local_1078 = 0;
  bVar1 = GJKClosestPoint::CastRay<JPH::ConvexShape::Support>
                    (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 8),
                     *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),_LC102,
                     auStack_1138,uVar2,param_3 + 4);
  if (bVar1) {
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)param_2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexShape::CollidePoint(JPH::Vec3, JPH::SubShapeIDCreator const&,
   JPH::CollisionCollector<JPH::CollidePointResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) const */

void JPH::ConvexShape::CollidePoint
               (undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4,
               long *param_5,long *param_6)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  int iVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 local_11a8;
  undefined8 uStack_11a0;
  float local_1188;
  float fStack_1184;
  float fStack_1180;
  float fStack_117c;
  uint local_1160;
  undefined4 local_115c;
  float local_1158 [2];
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  undefined8 local_1120;
  int local_1098;
  float local_1088;
  float fStack_1084;
  float fStack_1080;
  float fStack_107c;
  float local_1078;
  float fStack_1074;
  float fStack_1070;
  float fStack_106c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar8 = (**(code **)(*param_6 + 0x10))(param_6,param_3,param_4);
  if (cVar8 != '\0') {
    uVar9 = (**(code **)(*param_3 + 0x20))(&local_1088,param_3);
    local_11a8._0_4_ = (float)param_1;
    fVar2 = (float)local_11a8;
    local_11a8._4_4_ = (float)((ulong)param_1 >> 0x20);
    fVar3 = local_11a8._4_4_;
    uStack_11a0._0_4_ = (float)param_2;
    fVar4 = (float)uStack_11a0;
    uStack_11a0._4_4_ = (float)((ulong)param_2 >> 0x20);
    fVar6 = uStack_11a0._4_4_;
    auVar22._0_4_ = -(uint)((float)local_11a8 <= local_1078 && local_1088 <= (float)local_11a8);
    auVar22._4_4_ = -(uint)(local_11a8._4_4_ <= fStack_1074 && fStack_1084 <= local_11a8._4_4_);
    auVar22._8_4_ = -(uint)(fStack_1080 <= (float)uStack_11a0 && (float)uStack_11a0 <= fStack_1070);
    auVar22._12_4_ = -(uint)(fStack_107c <= uStack_11a0._4_4_ && uStack_11a0._4_4_ <= fStack_106c);
    uVar10 = movmskps(uVar9,auVar22);
    if ((~uVar10 & 7) == 0) {
      plVar11 = (long *)(**(code **)(*param_3 + 0x130))(0x3f8000003f800000,param_3,1,&local_1088);
      local_1098 = 0;
      fVar21 = _LC14;
      local_11a8 = param_1;
      uStack_11a0 = param_2;
      while( true ) {
        uVar5 = uStack_11a0;
        uVar1 = local_11a8;
        auVar22 = (**(code **)(*plVar11 + 0x10))(local_11a8,uStack_11a0,plVar11);
        iVar7 = local_1098;
        local_11a8._0_4_ = auVar22._0_4_;
        local_11a8._4_4_ = auVar22._4_4_;
        uStack_11a0._0_4_ = auVar22._8_4_;
        uStack_11a0._4_4_ = auVar22._12_4_;
        if (((float)uStack_11a0 - fVar4) * (float)uVar5 +
            (local_11a8._4_4_ - fVar3) * (float)((ulong)uVar1 >> 0x20) +
            ((float)local_11a8 - fVar2) * (float)uVar1 + 0.0 < 0.0) break;
        lVar14 = (long)local_1098;
        iVar15 = local_1098 + 1;
        local_1158[lVar14 * 4] = (float)local_11a8 - fVar2;
        local_1158[lVar14 * 4 + 1] = local_11a8._4_4_ - fVar3;
        *(float *)(&uStack_1150 + lVar14 * 2) = (float)uStack_11a0 - fVar4;
        *(float *)((long)&uStack_1150 + lVar14 * 0x10 + 4) = uStack_11a0._4_4_ - fVar6;
        if (iVar15 == 3) {
          auVar23 = ClosestPoint::GetClosestPointOnTriangle<true>
                              (CONCAT44(local_1158[1],local_1158[0]),
                               CONCAT44(uStack_1150._4_4_,(float)uStack_1150),local_1148,uStack_1140
                               ,&local_1160);
          uStack_11a0._0_4_ = auVar23._8_4_;
        }
        else if (iVar15 < 4) {
          if (iVar15 == 1) {
            local_1160 = 1;
            auVar23._12_4_ = uStack_1150._4_4_;
            auVar23._8_4_ = (float)uStack_1150;
            auVar23._4_4_ = local_1158[1];
            auVar23._0_4_ = local_1158[0];
            uStack_11a0._0_4_ = (float)uStack_1150;
          }
          else {
            if (iVar15 != 2) break;
            local_1188 = (float)local_1148;
            fStack_1184 = (float)((ulong)local_1148 >> 0x20);
            fStack_1180 = (float)uStack_1140;
            fVar16 = local_1188 - local_1158[0];
            fVar17 = fStack_1184 - local_1158[1];
            fVar18 = fStack_1180 - (float)uStack_1150;
            local_11a8 = CONCAT44(local_1158[1],local_1158[0]);
            uStack_11a0 = CONCAT44(uStack_1150._4_4_,(float)uStack_1150);
            fVar20 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 + 0.0;
            if (fVar20 < _LC10) {
              if ((float)uStack_1150 * (float)uStack_1150 +
                  local_1158[1] * local_1158[1] + local_1158[0] * local_1158[0] + 0.0 <
                  fStack_1180 * fStack_1180 +
                  fStack_1184 * fStack_1184 + local_1188 * local_1188 + 0.0) goto LAB_00101f86;
LAB_0010229c:
              local_11a8 = local_1148;
              uStack_11a0 = uStack_1140;
              local_1160 = 2;
            }
            else {
              fVar20 = (float)((uint)(fVar18 * (float)uStack_1150 +
                                     fVar17 * local_1158[1] + fVar16 * local_1158[0] + 0.0) ^ __LC11
                              ) / fVar20;
              if (0.0 < fVar20) {
                fVar16 = _LC1 - fVar20;
                if (fVar16 <= 0.0) goto LAB_0010229c;
                fStack_117c = (float)((ulong)uStack_1140 >> 0x20);
                local_1160 = 3;
                local_11a8 = CONCAT44(fVar20 * fStack_1184 + fVar16 * local_1158[1],
                                      fVar20 * local_1188 + fVar16 * local_1158[0]);
                uStack_11a0 = CONCAT44(fVar20 * fStack_117c + fVar16 * uStack_1150._4_4_,
                                       fVar20 * fStack_1180 + fVar16 * (float)uStack_1150);
              }
              else {
LAB_00101f86:
                local_1160 = 1;
              }
            }
            auVar23._8_8_ = uStack_11a0;
            auVar23._0_8_ = local_11a8;
          }
        }
        else {
          if (iVar15 != 4) break;
          auVar23 = ClosestPoint::GetClosestPointOnTetrahedron<true>
                              (CONCAT44(local_1158[1],local_1158[0]),
                               CONCAT44(uStack_1150._4_4_,(float)uStack_1150),local_1148,uStack_1140
                               ,local_1138,local_1130,local_1128,local_1120,&local_1160);
          uStack_11a0._0_4_ = auVar23._8_4_;
        }
        fVar16 = auVar23._0_4_;
        fVar20 = auVar23._4_4_;
        fVar17 = (float)uStack_11a0 * (float)uStack_11a0 + fVar20 * fVar20 + fVar16 * fVar16 + 0.0;
        if (fVar21 <= fVar17) break;
        if ((local_1160 == 0xf) || (fVar17 <= _LC103)) {
LAB_001022af:
          if (param_5[2] == 0) {
            local_1160 = 0xffffffff;
          }
          else {
            local_1160 = *(uint *)(param_5[2] + 0x34);
          }
          local_115c = *param_4;
          (**(code **)(*param_5 + 0x28))(param_5,&local_1160);
          break;
        }
        fVar18 = (float)uStack_1150 * (float)uStack_1150 +
                 local_1158[1] * local_1158[1] + local_1158[0] * local_1158[0] + 0.0;
        if (iVar15 != 1) {
          pfVar12 = local_1158;
          fVar19 = fVar18;
          do {
            pfVar13 = pfVar12 + 4;
            fVar18 = pfVar12[6] * pfVar12[6] +
                     pfVar12[4] * pfVar12[4] + 0.0 + pfVar12[5] * pfVar12[5];
            if (fVar18 <= fVar19) {
              fVar18 = fVar19;
            }
            pfVar12 = pfVar13;
            fVar19 = fVar18;
          } while (pfVar13 != local_1158 + lVar14 * 4);
        }
        if (fVar17 <= fVar18 * _LC39) goto LAB_001022af;
        local_11a8 = CONCAT44(0.0 - fVar20,0.0 - fVar16);
        uStack_11a0 = CONCAT44(0.0 - auVar23._12_4_,0.0 - (float)uStack_11a0);
        if (fVar21 - fVar17 <= fVar21 * _LC39) break;
        iVar15 = 0;
        pfVar12 = local_1158;
        local_1098 = 0;
        uVar10 = local_1160 & 1;
        while( true ) {
          if (uVar10 != 0) {
            uVar1 = *(undefined8 *)(pfVar12 + 2);
            *(undefined8 *)(local_1158 + (long)local_1098 * 4) = *(undefined8 *)pfVar12;
            (&uStack_1150)[(long)local_1098 * 2] = uVar1;
            local_1098 = local_1098 + 1;
          }
          fVar21 = fVar17;
          if (iVar7 <= iVar15) break;
          iVar15 = iVar15 + 1;
          pfVar12 = pfVar12 + 4;
          uVar10 = 1 << ((byte)iVar15 & 0x1f) & local_1160;
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexShape::sCollideConvexVsConvex(JPH::Shape const*, JPH::Shape const*, JPH::Vec3,
   JPH::Vec3, JPH::Mat44 const&, JPH::Mat44 const&, JPH::SubShapeIDCreator const&,
   JPH::SubShapeIDCreator const&, JPH::CollideShapeSettings const&,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::ShapeFilter const&) */

void __thiscall
JPH::ConvexShape::sCollideConvexVsConvex
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          ConvexShape *this,long *param_1,float *param_2,long param_8,undefined4 *param_9,
          float *param_10,long param_11,long *param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  Support *pSVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [12];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar30;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined8 local_2388;
  undefined8 uStack_2380;
  float local_2378;
  float fStack_2374;
  float fStack_2370;
  float fStack_236c;
  undefined8 local_2368;
  undefined8 uStack_2360;
  undefined8 local_2288;
  undefined4 local_2280;
  float local_2278;
  float fStack_2274;
  float fStack_2270;
  float fStack_226c;
  float local_2268;
  float fStack_2264;
  float fStack_2260;
  float fStack_225c;
  float local_2258;
  float fStack_2254;
  float fStack_2250;
  float fStack_224c;
  float local_2248;
  float fStack_2244;
  float fStack_2240;
  float fStack_223c;
  float local_2238;
  float fStack_2234;
  float fStack_2230;
  float fStack_222c;
  float local_2228 [16];
  TransformedConvexObject local_21e8 [64];
  long *local_21a8;
  GJKClosestPoint local_2198 [192];
  undefined4 local_20d8;
  undefined1 local_20c8 [4160];
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  float local_1068;
  float fStack_1064;
  float fStack_1060;
  float fStack_105c;
  undefined8 local_1058;
  float local_1050;
  undefined4 local_104c;
  float local_1048;
  float fStack_1044;
  float fStack_1040;
  float fStack_103c;
  undefined4 local_e38 [894];
  long local_40;
  
  fVar19 = *param_2;
  fVar22 = param_2[1];
  fVar30 = (float)*(undefined8 *)(param_2 + 4);
  fVar31 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar17 = param_2[2];
  fVar16 = param_2[6];
  fVar11 = (float)*(undefined8 *)(param_2 + 8);
  fVar13 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar14 = param_2[10];
  fVar15 = param_2[0xc];
  fVar20 = param_2[0xd];
  fVar23 = param_2[0xe];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  do {
    pfVar1 = (float *)(param_8 + lVar8);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    *(float *)((long)local_2228 + lVar8) =
         fVar5 * (0.0 - (fVar15 * fVar19 + fVar20 * fVar22 + fVar23 * fVar17)) +
         fVar2 * fVar19 + fVar3 * fVar22 + fVar4 * fVar17;
    *(float *)((long)local_2228 + lVar8 + 4) =
         fVar5 * (0.0 - (fVar15 * fVar30 + fVar20 * fVar31 + fVar23 * fVar16)) +
         fVar2 * fVar30 + fVar3 * fVar31 + fVar4 * fVar16;
    *(float *)((long)local_2228 + lVar8 + 8) =
         fVar5 * (0.0 - (fVar15 * fVar11 + fVar20 * fVar13 + fVar23 * fVar14)) +
         fVar2 * fVar11 + fVar3 * fVar13 + fVar4 * fVar14;
    *(float *)((long)local_2228 + lVar8 + 0xc) =
         fVar5 * 1.0 + fVar2 * 0.0 + fVar3 * 0.0 + fVar4 * 0.0;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x40);
  (**(code **)(*(long *)this + 0x20))((AABox *)&local_1088,this);
  local_2388._0_4_ = (float)param_1_00;
  local_2388._4_4_ = (float)((ulong)param_1_00 >> 0x20);
  uStack_2380._0_4_ = (float)param_2_00;
  uStack_2380._4_4_ = (float)((ulong)param_2_00 >> 0x20);
  auVar12._0_8_ =
       CONCAT44(local_2388._4_4_ * local_1088._4_4_,(float)local_2388 * (float)local_1088);
  auVar12._8_4_ = (float)uStack_2380 * (float)uStack_1080;
  auVar12._12_4_ = uStack_2380._4_4_ * uStack_1080._4_4_;
  auVar33._0_4_ = (float)local_2388 * (float)local_1078;
  auVar33._4_4_ = local_2388._4_4_ * local_1078._4_4_;
  auVar33._8_4_ = (float)uStack_2380 * (float)uStack_1070;
  auVar33._12_4_ = uStack_2380._4_4_ * uStack_1070._4_4_;
  auVar26._8_4_ = auVar12._8_4_;
  auVar26._0_8_ = auVar12._0_8_;
  auVar26._12_4_ = auVar12._12_4_;
  auVar27 = maxps(auVar26,auVar33);
  auVar12 = minps(auVar12,auVar33);
  fStack_222c = *(float *)(param_11 + 0x20);
  local_2248 = auVar12._0_4_ - fStack_222c;
  fStack_2244 = auVar12._4_4_ - fStack_222c;
  fStack_2240 = auVar12._8_4_ - fStack_222c;
  fStack_223c = auVar12._12_4_ - fStack_222c;
  local_2238 = fStack_222c + auVar27._0_4_;
  fStack_2234 = fStack_222c + auVar27._4_4_;
  fStack_2230 = fStack_222c + auVar27._8_4_;
  fStack_222c = fStack_222c + auVar27._12_4_;
  (**(code **)(*param_1 + 0x20))((AABox *)&local_1088,param_1);
  local_2378 = (float)param_3;
  fStack_2374 = (float)((ulong)param_3 >> 0x20);
  fStack_2370 = (float)param_4;
  fStack_236c = (float)((ulong)param_4 >> 0x20);
  auVar29._0_8_ = CONCAT44(fStack_2374 * local_1088._4_4_,local_2378 * (float)local_1088);
  auVar29._8_4_ = fStack_2370 * (float)uStack_1080;
  auVar29._12_4_ = fStack_236c * uStack_1080._4_4_;
  local_104c = 0x3f800000;
  auVar27._0_4_ = local_2378 * (float)local_1078;
  auVar27._4_4_ = fStack_2374 * local_1078._4_4_;
  auVar27._8_4_ = fStack_2370 * (float)uStack_1070;
  auVar27._12_4_ = fStack_236c * uStack_1070._4_4_;
  auVar32._8_4_ = auVar29._8_4_;
  auVar32._0_8_ = auVar29._0_8_;
  auVar32._12_4_ = auVar29._12_4_;
  auVar33 = maxps(auVar32,auVar27);
  auVar12 = minps(auVar29,auVar27);
  local_1088 = CONCAT44(local_2228[1],local_2228[0]);
  uStack_1080 = CONCAT44(local_2228[3],local_2228[2]);
  local_1078 = CONCAT44(local_2228[5],local_2228[4]);
  uStack_1070 = CONCAT44(local_2228[7],local_2228[6]);
  local_1068 = local_2228[8];
  fStack_1064 = local_2228[9];
  fStack_1060 = local_2228[10];
  fStack_105c = local_2228[0xb];
  fVar16 = (auVar33._0_4_ + auVar12._0_4_) * _LC5;
  fVar19 = (auVar33._4_4_ + auVar12._4_4_) * _LC5;
  fVar22 = (auVar33._8_4_ + auVar12._8_4_) * _LC5;
  local_1058 = CONCAT44(fVar16 * local_2228[1] + fVar19 * local_2228[5] + fVar22 * local_2228[9] +
                        local_2228[0xd],
                        fVar16 * local_2228[0] + fVar19 * local_2228[4] + fVar22 * local_2228[8] +
                        local_2228[0xc]);
  local_1050 = fVar16 * local_2228[2] + fVar19 * local_2228[6] + fVar22 * local_2228[10] +
               local_2228[0xe];
  local_1048 = (auVar33._0_4_ - auVar12._0_4_) * _LC5;
  fStack_1044 = (auVar33._4_4_ - auVar12._4_4_) * _LC5;
  fStack_1040 = (auVar33._8_4_ - auVar12._8_4_) * _LC5;
  fStack_103c = (auVar33._12_4_ - auVar12._12_4_) * _LC5;
  cVar6 = JPH::OrientedBox::Overlaps((AABox *)&local_1088,_LC13);
  if (cVar6 != '\0') {
    if (local_2228[0xe] * local_2228[0xe] +
        local_2228[0xc] * local_2228[0xc] + 0.0 + local_2228[0xd] * local_2228[0xd] <= _LC9) {
      local_2228[0xd] = 0.0;
      local_2228[0xe] = 0.0;
      local_2228[0xf] = 0.0;
      local_2228[0xc] = _LC98;
    }
    local_20d8 = 0;
    local_2278 = local_2228[0xc];
    fStack_2274 = local_2228[0xd];
    fStack_2270 = local_2228[0xe];
    fStack_226c = local_2228[0xf];
    pSVar9 = (Support *)
             (**(code **)(*(long *)this + 0x130))(param_1_00,param_2_00,this,0,local_20c8);
    local_21a8 = (long *)(**(code **)(*param_1 + 0x130))
                                   (param_3,param_4,param_1,0,(AABox *)&local_1088);
    fVar16 = *(float *)(param_11 + 4);
    fVar19 = (float)(**(code **)(*local_21a8 + 0x18))(local_21a8);
    fVar22 = (float)(**(code **)(*(long *)pSVar9 + 0x18))(pSVar9);
    fVar22 = *(float *)(param_11 + 0x20) + fVar22;
    fVar17 = fVar19 + fVar22;
    fVar17 = fVar17 * fVar17;
    fVar16 = GJKClosestPoint::
             GetClosestPoints<JPH::ConvexShape::Support,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
                       (local_2198,pSVar9,local_21e8,fVar16,fVar17,(Vec3 *)&local_2278,
                        (Vec3 *)&local_2268,(Vec3 *)&local_2258);
    if (fVar16 <= fVar17) {
      if (0.0 < fVar16) {
        fVar22 = fVar22 / SQRT(fVar16);
        fVar19 = fVar19 / SQRT(fVar16);
        auVar18._0_4_ = fVar22 * local_2278 + local_2268;
        auVar18._4_4_ = fVar22 * fStack_2274 + fStack_2264;
        auVar18._8_4_ = fVar22 * fStack_2270 + fStack_2260;
        local_2258 = local_2258 - fVar19 * local_2278;
        fStack_2254 = fStack_2254 - fVar19 * fStack_2274;
        fStack_2250 = fStack_2250 - fVar19 * fStack_2270;
        fStack_224c = fStack_224c - fVar19 * fStack_226c;
      }
      else {
        uVar10 = (**(code **)(*(long *)this + 0x130))(param_1_00,param_2_00,this,1,local_20c8);
        local_21a8 = (long *)(**(code **)(*param_1 + 0x130))
                                       (param_3,param_4,param_1,1,(AABox *)&local_1088);
        local_2280 = *(undefined4 *)(param_11 + 0x20);
        local_2288 = uVar10;
        bVar7 = EPAPenetrationDepth::
                GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
                          ((EPAPenetrationDepth *)local_2198,(AddConvexRadius *)&local_2288,
                           local_21e8,*(float *)(param_11 + 8),(Vec3 *)&local_2278,
                           (Vec3 *)&local_2268,(Vec3 *)&local_2258);
        if (!bVar7) goto LAB_00102b4f;
        auVar18._4_4_ = fStack_2264;
        auVar18._0_4_ = local_2268;
        auVar18._8_4_ = fStack_2260;
      }
      fVar22 = fStack_2270;
      fVar19 = fStack_2274;
      fVar16 = local_2278;
      fVar17 = local_2258 - auVar18._0_4_;
      fVar20 = auVar18._4_4_;
      fVar14 = fStack_2254 - fVar20;
      fVar23 = auVar18._8_4_;
      fVar15 = fStack_2250 - fVar23;
      fVar17 = SQRT(fVar15 * fVar15 + fVar17 * fVar17 + 0.0 + fVar14 * fVar14) -
               *(float *)(param_11 + 0x20);
      if ((float)((uint)fVar17 ^ __LC11) < *(float *)(param_12 + 1)) {
        fVar14 = SQRT(fStack_2270 * fStack_2270 +
                      local_2278 * local_2278 + 0.0 + fStack_2274 * fStack_2274);
        if (0.0 < fVar14) {
          fVar14 = *(float *)(param_11 + 0x20) / fVar14;
          auVar18._0_4_ = auVar18._0_4_ - fVar14 * local_2278;
          auVar18._4_4_ = fVar20 - fVar14 * fStack_2274;
          auVar18._8_4_ = fVar23 - fVar14 * fStack_2270;
        }
        fVar14 = *param_2;
        fVar15 = param_2[1];
        fVar20 = param_2[2];
        fVar23 = param_2[3];
        fVar11 = param_2[4];
        fVar13 = param_2[5];
        fVar30 = param_2[6];
        fVar31 = param_2[7];
        fVar21 = auVar18._0_4_;
        fVar24 = auVar18._4_4_;
        fVar25 = auVar18._8_4_;
        fVar2 = param_2[8];
        fVar3 = param_2[9];
        fVar4 = param_2[10];
        fVar5 = param_2[0xb];
        local_104c = 0xffffffff;
        local_2268 = fVar25 * fVar2 + fVar21 * fVar14 + fVar24 * fVar11 + param_2[0xc];
        fStack_2264 = fVar25 * fVar3 + fVar21 * fVar15 + fVar24 * fVar13 + param_2[0xd];
        fStack_2260 = fVar25 * fVar4 + fVar21 * fVar20 + fVar24 * fVar30 + param_2[0xe];
        fStack_225c = fVar25 * fVar5 + fVar21 * fVar23 + fVar24 * fVar31 + param_2[0xf];
        fVar34 = fStack_2254 * fVar30;
        fVar35 = fStack_2254 * fVar31;
        fVar21 = local_2258 * fVar15;
        fVar24 = local_2258 * fVar20;
        fVar25 = local_2258 * fVar23;
        fVar28 = fStack_2250 * fVar5;
        local_2258 = local_2258 * fVar14 + fStack_2254 * fVar11 + fStack_2250 * fVar2 + param_2[0xc]
        ;
        fStack_2254 = fVar21 + fStack_2254 * fVar13 + fStack_2250 * fVar3 + param_2[0xd];
        fStack_2250 = fVar24 + fVar34 + fStack_2250 * fVar4 + param_2[0xe];
        fStack_224c = fVar25 + fVar35 + fVar28 + param_2[0xf];
        local_1068 = fVar14 * local_2278 + fVar11 * fStack_2274 + fVar2 * fStack_2270;
        fStack_1064 = fVar15 * local_2278 + fVar13 * fStack_2274 + fVar3 * fStack_2270;
        fStack_1060 = fVar20 * local_2278 + fVar30 * fStack_2274 + fVar4 * fStack_2270;
        fStack_105c = fVar23 * local_2278 + fVar31 * fStack_2274 + fVar5 * fStack_2270;
        if (param_12[2] != 0) {
          local_104c = *(undefined4 *)(param_12[2] + 0x34);
        }
        local_1088 = CONCAT44(fStack_2264,local_2268);
        uStack_1080 = CONCAT44(fStack_225c,fStack_2260);
        local_1078 = CONCAT44(fStack_2254,local_2258);
        uStack_1070 = CONCAT44(fStack_224c,fStack_2250);
        local_1048 = 0.0;
        local_e38[0] = 0;
        local_1050 = *param_10;
        local_1058 = CONCAT44(*param_9,fVar17);
        if (*(char *)(param_11 + 1) == '\0') {
          local_2288._0_4_ = 0xffffffff;
          local_2368 = CONCAT44(0.0 - fStack_2274,0.0 - local_2278);
          uStack_2360 = CONCAT44(0.0 - fStack_226c,0.0 - fStack_2270);
          if (*(code **)(*(long *)this + 0x60) != Shape::GetSupportingFace) {
            (**(code **)(*(long *)this + 0x60))
                      (local_2368,uStack_2360,param_1_00,param_2_00,this,&local_2288,param_2,
                       &local_1048);
          }
          local_2288 = CONCAT44(local_2288._4_4_,0xffffffff);
          local_2388 = CONCAT44(local_2228[4] * fVar16 + local_2228[5] * fVar19 +
                                local_2228[6] * fVar22,
                                local_2228[0] * fVar16 + local_2228[1] * fVar19 +
                                local_2228[2] * fVar22);
          uStack_2380 = CONCAT44(fVar16 * 0.0 + fVar19 * 0.0 + fVar22 * 0.0,
                                 local_2228[8] * fVar16 + local_2228[9] * fVar19 +
                                 local_2228[10] * fVar22);
          if (*(code **)(*param_1 + 0x60) != Shape::GetSupportingFace) {
            (**(code **)(*param_1 + 0x60))
                      (local_2388,uStack_2380,param_3,param_4,param_1,&local_2288,param_8,local_e38)
            ;
          }
        }
        (**(code **)(*param_12 + 0x28))(param_12,(AABox *)&local_1088);
      }
    }
  }
LAB_00102b4f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexShape::sCastConvexVsConvex(JPH::ShapeCast const&, JPH::ShapeCastSettings const&,
   JPH::Shape const*, JPH::Vec3, JPH::ShapeFilter const&, JPH::Mat44 const&, JPH::SubShapeIDCreator
   const&, JPH::SubShapeIDCreator const&, JPH::CollisionCollector<JPH::ShapeCastResult,
   JPH::CollisionCollectorTraitsCastShape>&) */

void __thiscall
JPH::ConvexShape::sCastConvexVsConvex
          (undefined8 param_1_00,undefined8 param_2_00,ConvexShape *this,long param_1,long *param_2,
          undefined8 param_6,float *param_7,undefined4 *param_8,undefined4 *param_9,long *param_10)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  byte bVar21;
  int iVar22;
  long in_FS_OFFSET;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_26dc;
  long *local_26d8;
  float local_26d0;
  long *local_26c8;
  float local_26c0;
  float local_26b8;
  float fStack_26b4;
  float fStack_26b0;
  float fStack_26ac;
  float local_26a8;
  float fStack_26a4;
  float fStack_26a0;
  float fStack_269c;
  undefined8 local_2698;
  undefined8 uStack_2690;
  undefined8 local_2688;
  undefined8 uStack_2680;
  undefined8 local_2678;
  undefined8 uStack_2670;
  undefined8 local_2668;
  undefined8 uStack_2660;
  undefined8 local_2658;
  float local_2650;
  undefined4 local_264c;
  float local_2648 [16];
  EPAPenetrationDepth local_2608 [192];
  undefined4 local_2548;
  undefined8 local_2538;
  undefined8 uStack_2530;
  undefined8 local_2528;
  undefined8 uStack_2520;
  undefined8 local_2518;
  undefined8 uStack_2510;
  undefined8 local_2508;
  undefined8 uStack_2500;
  long **local_24f8 [66];
  undefined4 local_22e8 [132];
  float local_20d8;
  undefined1 local_20d4;
  undefined1 local_20c8 [4160];
  undefined1 local_1088 [4168];
  long local_40;
  
  plVar2 = *(long **)this;
  bVar21 = *(byte *)(param_1 + 0x22) ^ 1;
  iVar22 = (uint)bVar21 + (uint)bVar21;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar17 = (long *)(**(code **)(*plVar2 + 0x130))
                              (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),plVar2,
                               iVar22,local_20c8);
  plVar18 = (long *)(**(code **)(*param_2 + 0x130))(param_1_00,param_2_00,param_2,iVar22,local_1088)
  ;
  local_26dc = *(float *)(param_10 + 1);
  local_2548 = 0;
  cVar1 = *(char *)(param_1 + 0x23);
  fVar23 = (float)(**(code **)(*plVar18 + 0x18))(plVar18);
  fVar24 = (float)(**(code **)(*plVar17 + 0x18))(plVar17);
  uVar3 = *(undefined8 *)(this + 0x60);
  uVar4 = *(undefined8 *)(this + 0x68);
  fVar25 = *(float *)(param_1 + 8);
  fVar36 = *(float *)(param_1 + 4);
  bVar16 = GJKClosestPoint::CastShape<JPH::ConvexShape::Support,JPH::ConvexShape::Support>
                     (uVar3,uVar4,local_2608,this + 0x20,plVar17,plVar18,&local_26dc,&local_26b8,
                      &local_26a8,&local_2698);
  if (bVar16) {
    fVar36 = fVar36 * fVar36;
    fVar31 = (float)uStack_2690 * (float)uStack_2690 +
             local_2698._4_4_ * local_2698._4_4_ + (float)local_2698 * (float)local_2698 + 0.0;
    if ((cVar1 == '\0') || (local_26dc != 0.0)) {
      if (fVar31 <= fVar36) {
        local_2698 = uVar3;
        uStack_2690 = uVar4;
      }
    }
    else if ((fVar23 + fVar24 == 0.0) || (fVar31 <= fVar36)) {
      local_2518 = *(undefined8 *)(this + 0x40);
      uStack_2510 = *(undefined8 *)(this + 0x48);
      local_24f8[0] = &local_26d8;
      local_2538 = *(undefined8 *)(this + 0x20);
      uStack_2530 = *(undefined8 *)(this + 0x28);
      local_2528 = *(undefined8 *)(this + 0x30);
      uStack_2520 = *(undefined8 *)(this + 0x38);
      local_2508 = *(undefined8 *)(this + 0x50);
      uStack_2500 = *(undefined8 *)(this + 0x58);
      local_26d8 = plVar17;
      local_26d0 = fVar24;
      local_26c8 = plVar18;
      local_26c0 = fVar23;
      bVar16 = EPAPenetrationDepth::
               GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
                         (local_2608,(TransformedConvexObject *)&local_2538,
                          (AddConvexRadius *)&local_26c8,fVar25,(Vec3 *)&local_2698,
                          (Vec3 *)&local_26b8,(Vec3 *)&local_26a8);
      if (!bVar16) goto LAB_001031f3;
    }
    if ((*(char *)(param_1 + 0x21) == '\x01') ||
       (0.0 < (float)uStack_2690 * *(float *)(this + 0x68) +
              (float)((ulong)*(undefined8 *)(this + 0x60) >> 0x20) * local_2698._4_4_ +
              (float)*(undefined8 *)(this + 0x60) * (float)local_2698 + 0.0)) {
      uVar20 = 0xffffffff;
      fVar25 = *param_7;
      fVar36 = param_7[1];
      fVar23 = param_7[2];
      fVar24 = param_7[3];
      fVar31 = param_7[4];
      fVar28 = param_7[5];
      fVar32 = param_7[6];
      fVar37 = param_7[7];
      fVar6 = param_7[8];
      fVar7 = param_7[9];
      fVar8 = param_7[10];
      fVar9 = param_7[0xb];
      fVar38 = fStack_26b4 * fVar32;
      fVar39 = fStack_26b4 * fVar37;
      fVar10 = param_7[0xc];
      fVar11 = param_7[0xd];
      fVar12 = param_7[0xe];
      fVar13 = param_7[0xf];
      fVar33 = local_26b8 * fVar36;
      fVar34 = local_26b8 * fVar23;
      fVar35 = local_26b8 * fVar24;
      fVar29 = fStack_26b0 * fVar9;
      fVar41 = fStack_26a4 * fVar32;
      fVar42 = fStack_26a4 * fVar37;
      fVar26 = local_26a8 * fVar36;
      fVar27 = local_26a8 * fVar23;
      fVar30 = local_26a8 * fVar24;
      fVar40 = fStack_26a0 * fVar9;
      local_26b8 = local_26b8 * fVar25 + fStack_26b4 * fVar31 + fStack_26b0 * fVar6 + fVar10;
      fStack_26b4 = fVar33 + fStack_26b4 * fVar28 + fStack_26b0 * fVar7 + fVar11;
      fStack_26b0 = fVar34 + fVar38 + fStack_26b0 * fVar8 + fVar12;
      fStack_26ac = fVar35 + fVar39 + fVar29 + fVar13;
      local_26a8 = local_26a8 * fVar25 + fStack_26a4 * fVar31 + fStack_26a0 * fVar6 + fVar10;
      fStack_26a4 = fVar26 + fStack_26a4 * fVar28 + fStack_26a0 * fVar7 + fVar11;
      fStack_26a0 = fVar27 + fVar41 + fStack_26a0 * fVar8 + fVar12;
      fStack_269c = fVar30 + fVar42 + fVar40 + fVar13;
      if (param_10[2] != 0) {
        uVar20 = *(undefined4 *)(param_10[2] + 0x34);
      }
      local_24f8[0] = (long **)((ulong)local_24f8[0] & 0xffffffff00000000);
      local_22e8[0] = 0;
      local_20d4 = 0;
      local_2518 = CONCAT44((float)local_2698 * fVar36 + local_2698._4_4_ * fVar28 +
                            (float)uStack_2690 * fVar7,
                            (float)local_2698 * fVar25 + local_2698._4_4_ * fVar31 +
                            (float)uStack_2690 * fVar6);
      uStack_2510 = CONCAT44((float)local_2698 * fVar24 + local_2698._4_4_ * fVar37 +
                             (float)uStack_2690 * fVar9,
                             (float)local_2698 * fVar23 + local_2698._4_4_ * fVar32 +
                             (float)uStack_2690 * fVar8);
      local_20d8 = local_26dc;
      uStack_2500 = CONCAT44(uVar20,*param_9);
      local_2538 = CONCAT44(fStack_26b4,local_26b8);
      uStack_2530 = CONCAT44(fStack_26ac,fStack_26b0);
      local_2528 = CONCAT44(fStack_26a4,local_26a8);
      uStack_2520 = CONCAT44(fStack_269c,fStack_26a0);
      fVar26 = SQRT((fStack_26a0 - fStack_26b0) * (fStack_26a0 - fStack_26b0) +
                    (local_26a8 - local_26b8) * (local_26a8 - local_26b8) + 0.0 +
                    (fStack_26a4 - fStack_26b4) * (fStack_26a4 - fStack_26b4));
      local_2508 = CONCAT44(*param_8,fVar26);
      if ((local_26dc != 0.0) || ((float)((uint)fVar26 ^ __LC11) < *(float *)(param_10 + 1))) {
        if (*(char *)(param_1 + 1) == '\0') {
          local_2688 = *(undefined8 *)(this + 0x20);
          uStack_2680 = *(undefined8 *)(this + 0x28);
          local_264c = 0x3f800000;
          uVar3 = local_2688;
          uVar4 = uStack_2680;
          local_2678 = *(undefined8 *)(this + 0x30);
          uStack_2670 = *(undefined8 *)(this + 0x38);
          pcVar5 = *(code **)(*plVar2 + 0x60);
          lVar19 = 0;
          uVar14 = uStack_2670;
          local_2668 = *(undefined8 *)(this + 0x40);
          uStack_2660 = *(undefined8 *)(this + 0x48);
          local_2658 = CONCAT44(local_26dc * *(float *)(this + 100) + *(float *)(this + 0x54),
                                local_26dc * *(float *)(this + 0x60) + *(float *)(this + 0x50));
          uVar15 = uStack_2660;
          local_2650 = local_26dc * *(float *)(this + 0x68) + *(float *)(this + 0x58);
          do {
            fVar26 = *(float *)((long)&local_2688 + lVar19);
            fVar27 = *(float *)((long)&local_2688 + lVar19 + 4);
            fVar29 = *(float *)((long)&uStack_2680 + lVar19);
            fVar30 = *(float *)((long)&uStack_2680 + lVar19 + 4);
            *(float *)((long)local_2648 + lVar19) =
                 fVar30 * fVar10 + fVar26 * fVar25 + fVar27 * fVar31 + fVar29 * fVar6;
            *(float *)((long)local_2648 + lVar19 + 4) =
                 fVar30 * fVar11 + fVar26 * fVar36 + fVar27 * fVar28 + fVar29 * fVar7;
            *(float *)((long)local_2648 + lVar19 + 8) =
                 fVar30 * fVar12 + fVar26 * fVar23 + fVar27 * fVar32 + fVar29 * fVar8;
            *(float *)((long)local_2648 + lVar19 + 0xc) =
                 fVar30 * fVar13 + fVar26 * fVar24 + fVar27 * fVar37 + fVar29 * fVar9;
            lVar19 = lVar19 + 0x10;
          } while (lVar19 != 0x40);
          local_2688._4_4_ = (float)((ulong)local_2688 >> 0x20);
          local_26c8._0_4_ = 0xffffffff;
          fVar25 = 0.0 - (float)local_2698;
          fVar23 = 0.0 - local_2698._4_4_;
          fVar31 = 0.0 - (float)uStack_2690;
          fVar32 = local_2688._4_4_ * fVar23;
          fVar37 = (float)local_2688 * fVar25;
          fVar36 = fVar31 * (float)uStack_2680;
          fVar24 = fVar31 * (float)uStack_2670;
          fVar28 = fVar31 * (float)uStack_2660;
          local_2688 = uVar3;
          uStack_2680 = uVar4;
          uStack_2670 = uVar14;
          uStack_2660 = uVar15;
          if (pcVar5 != Shape::GetSupportingFace) {
            (*pcVar5)(CONCAT44((float)local_2678 * fVar25 +
                               (float)((ulong)local_2678 >> 0x20) * fVar23 + fVar24,
                               fVar37 + fVar32 + fVar36),
                      CONCAT44(fVar25 * 0.0 + fVar23 * 0.0 + fVar31 * 0.0,
                               (float)local_2668 * fVar25 +
                               (float)((ulong)local_2668 >> 0x20) * fVar23 + fVar28),
                      *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),plVar2,&local_26c8,
                      local_2648,local_24f8);
          }
          local_26c8 = (long *)CONCAT44(local_26c8._4_4_,0xffffffff);
          if (*(code **)(*param_2 + 0x60) != Shape::GetSupportingFace) {
            (**(code **)(*param_2 + 0x60))
                      (local_2698,uStack_2690,param_1_00,param_2_00,param_2,&local_26c8,param_7,
                       local_22e8);
          }
        }
        (**(code **)(*param_10 + 0x28))(param_10,&local_2538);
      }
    }
  }
LAB_001031f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::HashTable<JPH::StaticArray<JPH::Vec3, 32u>, std::pair<JPH::StaticArray<JPH::Vec3, 32u>,
   JPH::Array<JPH::Vec3, JPH::STLAllocator<JPH::Vec3> > >,
   JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3, 32u>, JPH::Array<JPH::Vec3,
   JPH::STLAllocator<JPH::Vec3> > >, JPH::Hash<JPH::StaticArray<JPH::Vec3, 32u> >,
   std::equal_to<JPH::StaticArray<JPH::Vec3, 32u> > >::rehash(unsigned int) [clone .isra.0] */

void JPH::
     HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
     ::rehash(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  byte *pbVar3;
  StaticArray *pSVar4;
  StaticArray *pSVar5;
  uint *puVar6;
  byte bVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  uint uVar24;
  undefined4 in_register_0000003c;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 auVar27 [16];
  
  plVar25 = (long *)CONCAT44(in_register_0000003c,param_1);
  uVar17 = (ulong)*(uint *)((long)plVar25 + 0x14);
  puVar26 = (undefined1 *)plVar25[1];
  if (*(uint *)((long)plVar25 + 0x14) != 0) {
    lVar16 = 0;
    do {
      while( true ) {
        pcVar2 = puVar26 + lVar16;
        if (*pcVar2 != '\0') break;
LAB_001033ab:
        lVar16 = lVar16 + 1;
        if ((uint)uVar17 <= (uint)lVar16) goto LAB_001033d6;
      }
      if (*pcVar2 == '\x7f') {
        *pcVar2 = '\0';
        puVar26 = (undefined1 *)plVar25[1];
        uVar17 = (ulong)*(uint *)((long)plVar25 + 0x14);
        goto LAB_001033ab;
      }
      *pcVar2 = '\x7f';
      uVar17 = (ulong)*(uint *)((long)plVar25 + 0x14);
      lVar16 = lVar16 + 1;
      puVar26 = (undefined1 *)plVar25[1];
    } while ((uint)lVar16 < *(uint *)((long)plVar25 + 0x14));
  }
LAB_001033d6:
  puVar26[uVar17] = *puVar26;
  lVar16 = 1;
  do {
    iVar18 = (int)lVar16;
    puVar26 = (undefined1 *)(plVar25[1] + lVar16);
    lVar16 = lVar16 + 1;
    *(undefined1 *)(plVar25[1] + (ulong)(uint)(iVar18 + *(int *)((long)plVar25 + 0x14))) = *puVar26;
  } while (lVar16 != 0xf);
  uVar20 = *(uint *)((long)plVar25 + 0x14);
  uVar1 = uVar20 - 1;
  if (uVar20 != 0) {
    lVar16 = 0;
    do {
      lVar21 = plVar25[1];
      if (*(char *)(lVar21 + lVar16) == '\x7f') {
        iVar18 = (int)lVar16;
        lVar22 = lVar16 * 0x230;
        while( true ) {
          uVar17 = StaticArray<JPH::Vec3,32u>::GetHash
                             ((StaticArray<JPH::Vec3,32u> *)(*plVar25 + lVar22));
          bVar15 = (byte)uVar17 | 0x80;
          uVar24 = uVar20 - 1 & (uint)(uVar17 >> 7);
          auVar27 = *(undefined1 (*) [16])(lVar21 + (ulong)uVar24) & __LC104;
          uVar9 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
          uVar20 = uVar24;
          while (uVar9 == 0xffff) {
            uVar20 = uVar20 + 0x10 & uVar1;
            auVar27 = *(undefined1 (*) [16])(lVar21 + (ulong)uVar20) & __LC104;
            uVar9 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
          }
          iVar10 = 0;
          for (uVar19 = uVar9 ^ 0xffff; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
            iVar10 = iVar10 + 1;
          }
          uVar20 = iVar10 + uVar20 & uVar1;
          if ((uVar1 & 0xfffffff0 & (uVar20 - uVar24 ^ iVar18 - uVar24)) == 0) {
            *(byte *)(lVar21 + lVar16) = bVar15;
            *(byte *)(plVar25[1] +
                     (ulong)((*(int *)((long)plVar25 + 0x14) - 1U & iVar18 - 0xfU) + 0xf)) = bVar15;
            uVar20 = *(uint *)((long)plVar25 + 0x14);
            goto LAB_00103428;
          }
          pbVar3 = (byte *)(lVar21 + (ulong)uVar20);
          lVar21 = (ulong)uVar20 * 0x230;
          bVar7 = *pbVar3;
          *pbVar3 = bVar15;
          if (bVar7 == 0) break;
          *(byte *)(plVar25[1] + (ulong)((uVar20 - 0xf & *(int *)((long)plVar25 + 0x14) - 1U) + 0xf)
                   ) = bVar15;
          pSVar4 = (StaticArray *)(*plVar25 + lVar22);
          pSVar5 = (StaticArray *)(*plVar25 + lVar21);
          std::swap<JPH::StaticArray<JPH::Vec3,32u>>(pSVar4,pSVar5);
          uVar8 = *(undefined8 *)(pSVar4 + 0x220);
          uVar11 = *(undefined8 *)(pSVar4 + 0x210);
          uVar12 = *(undefined8 *)(pSVar4 + 0x218);
          *(undefined8 *)(pSVar4 + 0x220) = 0;
          *(undefined1 (*) [16])(pSVar4 + 0x210) = (undefined1  [16])0x0;
          if (pSVar5 != pSVar4) {
            uVar13 = *(undefined8 *)(pSVar5 + 0x210);
            uVar14 = *(undefined8 *)(pSVar5 + 0x218);
            *(undefined8 *)(pSVar4 + 0x220) = *(undefined8 *)(pSVar5 + 0x220);
            *(undefined8 *)(pSVar4 + 0x210) = uVar13;
            *(undefined8 *)(pSVar4 + 0x218) = uVar14;
          }
          *(undefined8 *)(pSVar5 + 0x220) = uVar8;
          uVar20 = *(uint *)((long)plVar25 + 0x14);
          *(undefined8 *)(pSVar5 + 0x210) = uVar11;
          *(undefined8 *)(pSVar5 + 0x218) = uVar12;
          lVar21 = plVar25[1];
        }
        *(byte *)(plVar25[1] + (ulong)((uVar20 - 0xf & *(int *)((long)plVar25 + 0x14) - 1U) + 0xf))
             = bVar15;
        *(undefined1 *)(plVar25[1] + lVar16) = 0;
        *(undefined1 *)
         (plVar25[1] + (ulong)((*(int *)((long)plVar25 + 0x14) - 1U & iVar18 - 0xfU) + 0xf)) = 0;
        puVar23 = (uint *)(lVar22 + *plVar25);
        puVar6 = (uint *)(*plVar25 + lVar21);
        uVar20 = *puVar23;
        *puVar6 = 0;
        if (uVar20 != 0) {
          memmove(puVar6 + 4,puVar23 + 4,(ulong)uVar20 << 4);
          *puVar6 = uVar20;
        }
        uVar8 = *(undefined8 *)(puVar23 + 0x84);
        uVar11 = *(undefined8 *)(puVar23 + 0x86);
        uVar20 = *(uint *)((long)plVar25 + 0x14);
        *(undefined8 *)(puVar6 + 0x88) = *(undefined8 *)(puVar23 + 0x88);
        *(undefined8 *)(puVar6 + 0x84) = uVar8;
        *(undefined8 *)(puVar6 + 0x86) = uVar11;
      }
LAB_00103428:
      lVar16 = lVar16 + 1;
    } while ((uint)lVar16 < uVar20);
  }
  *(int *)(plVar25 + 3) = (int)((ulong)uVar20 * 7 >> 3) - (int)plVar25[2];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ConvexShape::DrawGetSupportingFace(JPH::DebugRenderer*, JPH::Mat44 const&, JPH::Vec3) const
    */

void JPH::ConvexShape::DrawGetSupportingFace
               (undefined8 param_1_00,undefined8 param_2_00,long *param_1,undefined8 param_2,
               float *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  bool bVar12;
  undefined4 uVar13;
  ulong uVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  uint uVar27;
  long in_FS_OFFSET;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  undefined1 auVar44 [12];
  float fVar45;
  undefined8 local_348;
  float fStack_340;
  float fStack_33c;
  undefined8 local_338;
  undefined8 local_328;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  ulong uStack_300;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  int local_2d0;
  uint local_2bc;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258 [4];
  float local_248;
  float fStack_244;
  float fStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float local_228;
  float fStack_224;
  float fStack_220;
  long local_40;
  
  pcVar21 = JPH::DebugRenderer::DrawMarker;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = (ulong)(uint)Vec3::sUnitSphere;
  local_2b8 = (undefined1  [16])0x0;
  local_2a8 = 0;
  local_2a0 = 0;
  if (uVar14 != 0) {
    do {
      while( true ) {
        local_298 = ZEXT416((uint)_LC98);
        local_258[0] = 0.0;
        local_288 = CONCAT44(_UNK_0010e834,__LC100);
        uStack_280 = CONCAT44(_UNK_0010e83c,_UNK_0010e838);
        local_2bc = 0xffffffff;
        local_278 = CONCAT44(_UNK_0010e864,__LC107);
        uStack_270 = CONCAT44(_UNK_0010e86c,_UNK_0010e868);
        local_268 = __LC0;
        uStack_260 = _UNK_0010e678;
        if (*(code **)(*param_1 + 0x60) != Shape::GetSupportingFace) break;
LAB_001036f8:
        pcVar21 = (code *)((long)pcVar21 + 0x10);
        if (JPH::DebugRenderer::DrawMarker + uVar14 * 0x10 == pcVar21) goto LAB_00103842;
      }
      fVar32 = *(float *)((long)pcVar21 + 8) * _UNK_0010e688;
      fVar37 = *(float *)((long)pcVar21 + 0xc) * _UNK_0010e68c;
      local_348 = CONCAT44(*(float *)((long)pcVar21 + 4) * _UNK_0010e684,*(float *)pcVar21 * _LC7);
      (**(code **)(*param_1 + 0x60))
                (local_348,CONCAT44(fVar37,fVar32),param_1_00,param_2_00,param_1,&local_2bc,
                 local_298,local_258);
      if (local_258[0] == 0.0) goto LAB_001036f8;
      bVar12 = HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
               ::InsertKey<false>((StaticArray *)local_2b8,(uint *)local_258);
      fVar35 = local_258[0];
      pfVar26 = (float *)((ulong)local_2bc * 0x230 + local_2b8._0_8_);
      if (bVar12) {
        *pfVar26 = 0.0;
        if (local_258[0] != 0.0) {
          memmove(pfVar26 + 4,local_258 + 4,(ulong)(uint)local_258[0] << 4);
          *pfVar26 = fVar35;
        }
        lVar19 = 0;
        uVar24 = 0;
        uVar20 = 1;
        pfVar26[0x88] = 0.0;
        pfVar26[0x89] = 0.0;
        *(undefined1 (*) [16])(pfVar26 + 0x84) = (undefined1  [16])0x0;
LAB_00103ce9:
        if (uVar20 <= uVar24 * 2) {
          uVar20 = uVar24 * 2;
        }
        lVar19 = (*Reallocate)(lVar19,uVar24 << 4,uVar20 << 4);
        *(ulong *)(pfVar26 + 0x86) = uVar20;
        *(long *)(pfVar26 + 0x88) = lVar19;
        lVar22 = *(long *)(pfVar26 + 0x84);
        uVar20 = lVar22 + 1;
      }
      else {
        lVar22 = *(long *)(pfVar26 + 0x84);
        uVar24 = *(ulong *)(pfVar26 + 0x86);
        lVar19 = *(long *)(pfVar26 + 0x88);
        uVar20 = lVar22 + 1;
        if (uVar24 < uVar20) goto LAB_00103ce9;
      }
      *(ulong *)(pfVar26 + 0x84) = uVar20;
      puVar25 = (undefined8 *)(lVar19 + lVar22 * 0x10);
      if (puVar25 == (undefined8 *)0x0) goto LAB_001036f8;
      pcVar21 = (code *)((long)pcVar21 + 0x10);
      *puVar25 = local_348;
      puVar25[1] = CONCAT44(fVar37,fVar32);
    } while (JPH::DebugRenderer::DrawMarker + uVar14 * 0x10 != pcVar21);
LAB_00103842:
    uVar11 = local_2a8._4_4_;
    uVar43 = local_2a8;
    if (local_2a8._4_4_ != 0) {
      uVar14 = 0;
      do {
        uVar20 = uVar14;
        uVar14 = uVar20 & 0xffffffff;
        if (*(char *)(local_2b8._8_8_ + uVar20) < '\0') goto LAB_00103886;
        uVar14 = uVar20 + 1;
      } while ((ulong)local_2a8._4_4_ != uVar20 + 1);
      uVar14 = (ulong)((int)uVar20 + 1);
LAB_00103886:
      if ((uint)uVar14 != local_2a8._4_4_) {
        local_2d0 = 0;
        do {
          pfVar26 = (float *)(local_2b8._0_8_ + uVar14 * 0x230);
          uVar13 = JPH::Color::sGetDistinctColor(local_2d0);
          local_258[0] = 0.0;
          fVar32 = *pfVar26;
          if (fVar32 == 0.0) {
            fVar37 = param_5[0xc];
            fVar35 = param_5[0xd];
            auVar39 = SUB1612((undefined1  [16])0x0,0);
            auVar42 = divps((undefined1  [16])0x0,(undefined1  [16])0x0);
            fStack_340 = auVar42._8_4_ + param_5[0xe];
            fStack_33c = auVar42._12_4_ + param_5[0xf];
            local_348 = CONCAT44(auVar42._4_4_ + fVar35,auVar42._0_4_ + fVar37);
LAB_00103d8c:
            uVar43 = CONCAT44(fVar35,fVar37);
            if (fVar32 != 0.0) {
              pfVar15 = local_258 + 4;
              goto LAB_001039f3;
            }
          }
          else {
            uVar20 = (ulong)(uint)fVar32;
            pfVar15 = (float *)memcpy(local_258 + 4,pfVar26 + 4,uVar20 * 0x10);
            auVar44 = SUB1612((undefined1  [16])0x0,0);
            fVar45 = (float)uVar20;
            local_258[0] = fVar32;
            auVar39 = SUB1612(ZEXT816(0),0);
            if (2 < (uint)fVar32) {
              fVar37 = (fStack_244 - fStack_234) * (local_228 - local_238) -
                       (fStack_224 - fStack_234) * (local_248 - local_238);
              fVar35 = (fStack_240 - fStack_230) * (fStack_224 - fStack_234) -
                       (fStack_220 - fStack_230) * (fStack_244 - fStack_234);
              fVar36 = (local_248 - local_238) * (fStack_220 - fStack_230) -
                       (local_228 - local_238) * (fStack_240 - fStack_230);
              auVar40._4_4_ = fVar36;
              auVar40._0_4_ = fVar35;
              auVar40._8_4_ = fVar37;
              auVar40._12_4_ = fVar37;
              auVar42._0_4_ = SQRT(fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35 + 0.0);
              auVar42._4_4_ = auVar42._0_4_;
              auVar42._8_4_ = auVar42._0_4_;
              auVar42._12_4_ = auVar42._0_4_;
              auVar42 = divps(auVar40,auVar42);
              auVar39 = auVar42._0_12_;
              auVar44._0_4_ = _LC8 * auVar42._0_4_;
              auVar44._4_4_ = _LC8 * auVar42._4_4_;
              auVar44._8_4_ = _LC8 * auVar42._8_4_;
            }
            fVar37 = *param_5;
            fVar35 = param_5[1];
            fVar36 = param_5[2];
            fVar2 = param_5[3];
            fVar3 = param_5[4];
            fVar4 = param_5[5];
            fVar5 = param_5[6];
            fVar6 = param_5[7];
            fVar7 = param_5[8];
            fVar8 = param_5[9];
            fVar9 = param_5[10];
            fVar10 = param_5[0xb];
            pfVar16 = pfVar15;
            auVar42 = (undefined1  [16])0x0;
            do {
              pfVar17 = pfVar16 + 4;
              fVar28 = *pfVar16 + auVar44._0_4_;
              fVar30 = pfVar16[1] + auVar44._4_4_;
              fVar33 = pfVar16[2] + auVar44._8_4_;
              fVar29 = fVar33 * fVar7 + fVar28 * fVar37 + fVar30 * fVar3;
              fVar31 = fVar33 * fVar8 + fVar28 * fVar35 + fVar30 * fVar4;
              fVar34 = fVar33 * fVar9 + fVar28 * fVar36 + fVar30 * fVar5;
              fVar28 = fVar33 * fVar10 + fVar28 * fVar2 + fVar30 * fVar6;
              *pfVar16 = fVar29;
              pfVar16[1] = fVar31;
              pfVar16[2] = fVar34;
              pfVar16[3] = fVar28;
              auVar41._0_4_ = auVar42._0_4_ + fVar29;
              auVar41._4_4_ = auVar42._4_4_ + fVar31;
              auVar41._8_4_ = auVar42._8_4_ + fVar34;
              auVar41._12_4_ = auVar42._12_4_ + fVar28;
              pfVar16 = pfVar17;
              auVar42 = auVar41;
            } while (pfVar15 + uVar20 * 4 != pfVar17);
            fVar37 = param_5[0xc];
            fVar35 = param_5[0xd];
            uVar43 = *(undefined8 *)(param_5 + 0xc);
            auVar38._4_4_ = fVar45;
            auVar38._0_4_ = fVar45;
            auVar38._8_4_ = fVar45;
            auVar38._12_4_ = fVar45;
            auVar42 = divps(auVar41,auVar38);
            fStack_340 = auVar42._8_4_ + param_5[0xe];
            fStack_33c = auVar42._12_4_ + param_5[0xf];
            local_348 = CONCAT44(auVar42._4_4_ + fVar35,auVar42._0_4_ + fVar37);
            if ((uint)fVar32 < 3) goto LAB_00103d8c;
            uStack_300 = (ulong)(uint)param_5[0xe] | 0x3f80000000000000;
LAB_001039f3:
            fVar37 = 0.0;
            do {
              fVar37 = (float)((int)fVar37 + 1);
              local_318 = (float)uVar43;
              fStack_314 = (float)((ulong)uVar43 >> 0x20);
              fStack_310 = (float)uStack_300;
              fStack_30c = (float)(uStack_300 >> 0x20);
              uVar20 = (ulong)((uint)fVar37 % (uint)fVar32 + 1);
              fVar35 = local_258[uVar20 * 4];
              fVar45 = local_258[uVar20 * 4 + 1];
              fVar36 = local_258[uVar20 * 4 + 2];
              local_338 = CONCAT44(fVar36 * _UNK_0010e864 +
                                   fVar35 * _UNK_0010e814 + fVar45 * _UNK_0010e834 + fStack_314,
                                   fVar36 * __LC107 + fVar35 * _LC98 + fVar45 * __LC100 + local_318)
              ;
              fVar2 = *pfVar15;
              fVar3 = pfVar15[1];
              fVar4 = pfVar15[2];
              local_328 = CONCAT44(fVar4 * _UNK_0010e864 +
                                   fVar2 * _UNK_0010e814 + fVar3 * _UNK_0010e834 + fStack_314,
                                   fVar4 * __LC107 + fVar2 * _LC98 + fVar3 * __LC100 + local_318);
              JPH::DebugRenderer::DrawArrow
                        (local_328,
                         CONCAT44(fVar4 * _UNK_0010e86c +
                                  fVar2 * _UNK_0010e81c + fVar3 * _UNK_0010e83c + fStack_30c,
                                  fVar4 * _UNK_0010e868 +
                                  fVar2 * _UNK_0010e818 + fVar3 * _UNK_0010e838 + fStack_310),
                         local_338,
                         CONCAT44(fVar36 * _UNK_0010e86c +
                                  fVar35 * _UNK_0010e81c + fVar45 * _UNK_0010e83c + fStack_30c,
                                  fVar36 * _UNK_0010e868 +
                                  fVar35 * _UNK_0010e818 + fVar45 * _UNK_0010e838 + fStack_310),
                         param_2,uVar13);
              pfVar15 = pfVar15 + 4;
            } while (fVar37 != fVar32);
            local_2e8 = auVar39._0_4_;
            fStack_2e4 = auVar39._4_4_;
            fStack_2e0 = auVar39._8_4_;
            if (2 < (uint)fVar37) {
              local_338 = CONCAT44(fStack_2e0 * param_5[9] +
                                   local_2e8 * param_5[1] + fStack_2e4 * param_5[5] +
                                   local_348._4_4_,
                                   fStack_2e0 * param_5[8] +
                                   local_2e8 * *param_5 + fStack_2e4 * param_5[4] + (float)local_348
                                  );
              JPH::DebugRenderer::DrawArrow
                        (local_348,CONCAT44(fStack_33c,fStack_340),local_338,
                         CONCAT44(fStack_2e0 * param_5[0xb] +
                                  local_2e8 * param_5[3] + fStack_2e4 * param_5[7] + fStack_33c,
                                  fStack_2e0 * param_5[10] +
                                  local_2e8 * param_5[2] + fStack_2e4 * param_5[6] + fStack_340),
                         param_2,uVar13);
            }
          }
          pfVar15 = *(float **)(pfVar26 + 0x88);
          pfVar26 = pfVar15 + *(long *)(pfVar26 + 0x84) * 4;
          uVar43 = local_2a8;
          for (; local_2a8 = uVar43, pfVar26 != pfVar15; pfVar15 = pfVar15 + 4) {
            fVar32 = 0.0 - *pfVar15;
            fVar37 = 0.0 - pfVar15[1];
            fVar35 = 0.0 - pfVar15[2];
            local_338 = CONCAT44(fVar35 * param_5[9] + fVar32 * param_5[1] + fVar37 * param_5[5] +
                                 local_348._4_4_,
                                 fVar35 * param_5[8] + fVar32 * *param_5 + fVar37 * param_5[4] +
                                 (float)local_348);
            JPH::DebugRenderer::DrawArrow
                      (local_348,CONCAT44(fStack_33c,fStack_340),local_338,
                       CONCAT44(fVar35 * param_5[0xb] + fVar32 * param_5[3] + fVar37 * param_5[7] +
                                fStack_33c,
                                fVar35 * param_5[10] + fVar32 * param_5[2] + fVar37 * param_5[6] +
                                fStack_340),param_2,uVar13);
            uVar43 = local_2a8;
          }
          uVar14 = (ulong)((int)uVar14 + 1);
          local_2a8._4_4_ = (uint)((ulong)uVar43 >> 0x20);
          pcVar18 = (char *)(uVar14 + local_2b8._8_8_);
          while (uVar27 = (uint)uVar14, uVar27 < local_2a8._4_4_) {
            cVar1 = *pcVar18;
            pcVar18 = pcVar18 + 1;
            if (cVar1 < '\0') break;
            uVar14 = (ulong)(uVar27 + 1);
          }
          local_2d0 = local_2d0 + 1;
        } while (uVar27 != uVar11);
      }
    }
    local_2a8 = uVar43;
    lVar19 = local_2b8._0_8_;
    if (((int)local_2a8 != 0) && (local_2a8._4_4_ != 0)) {
      lVar23 = 0;
      lVar22 = 0;
      do {
        if ((*(char *)(local_2b8._8_8_ + lVar22) < '\0') &&
           (*(long *)(lVar19 + lVar23 + 0x220) != 0)) {
          *(undefined8 *)(lVar19 + lVar23 + 0x210) = 0;
          (*Free)();
          lVar19 = local_2b8._0_8_;
        }
        lVar22 = lVar22 + 1;
        lVar23 = lVar23 + 0x230;
      } while ((uint)lVar22 < local_2a8._4_4_);
    }
    if (lVar19 != 0) {
      (*Free)(lVar19);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConvexShape::SaveBinaryState(JPH::StreamOut&) const */

void __thiscall JPH::ConvexShape::SaveBinaryState(ConvexShape *this,StreamOut *param_1)

{
  JPH::Shape::SaveBinaryState((StreamOut *)this);
                    /* WARNING: Could not recover jumptable at 0x00103eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  return;
}



/* JPH::ConvexShape::RestoreBinaryState(JPH::StreamIn&) */

void __thiscall JPH::ConvexShape::RestoreBinaryState(ConvexShape *this,StreamIn *param_1)

{
  JPH::Shape::RestoreBinaryState((StreamIn *)this);
                    /* WARNING: Could not recover jumptable at 0x00103eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x10))(param_1,this + 0x28,4);
  return;
}



/* JPH::Shape::MustBeStatic() const */

undefined8 JPH::Shape::MustBeStatic(void)

{
  return 0;
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



/* JPH::ConvexShape::GetSubShapeIDBitsRecursive() const */

undefined8 JPH::ConvexShape::GetSubShapeIDBitsRecursive(void)

{
  return 0;
}



/* JPH::ConvexShape::GetMaterial(JPH::SubShapeID const&) const */

long JPH::ConvexShape::GetMaterial(SubShapeID *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = PhysicsMaterial::sDefault;
  }
  return lVar1;
}



/* JPH::RTTI::~RTTI() */

void __thiscall JPH::RTTI::~RTTI(RTTI *this)

{
  return;
}



/* JPH::StaticArray<JPH::Vec3, 384u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,384u>::~StaticArray(StaticArray<JPH::Vec3,384u> *this)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00105844. Too many branches */
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



/* JPH::Vec3
   JPH::EPAPenetrationDepth::SupportPoints::Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support>
   >(JPH::AddConvexRadius<JPH::ConvexShape::Support> const&,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support> const&, JPH::Vec3, int&) [clone .isra.0]
    */

undefined1  [16]
JPH::EPAPenetrationDepth::SupportPoints::
Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
          (float param_1_00,undefined8 param_2_00,undefined8 param_3,uint *param_1,long *param_2,
          float *param_6,uint *param_7)

{
  float *pfVar1;
  uint uVar2;
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
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  fVar5 = (float)param_3;
  fVar4 = (float)((ulong)param_2_00 >> 0x20);
  fVar3 = (float)param_2_00;
  fVar6 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
  if (fVar6 <= 0.0) {
    auVar16 = (**(code **)(*param_2 + 0x10))(param_2);
    local_48._0_4_ = auVar16._0_4_;
    local_48._4_4_ = auVar16._4_4_;
    uStack_40._0_4_ = auVar16._8_4_;
    uStack_40._4_4_ = auVar16._12_4_;
    fVar6 = (float)local_48;
    fVar7 = local_48._4_4_;
    fVar8 = (float)uStack_40;
    fVar9 = uStack_40._4_4_;
  }
  else {
    param_1_00 = param_1_00 / fVar6;
    auVar16 = (**(code **)(*param_2 + 0x10))();
    local_48._0_4_ = auVar16._0_4_;
    local_48._4_4_ = auVar16._4_4_;
    uStack_40._0_4_ = auVar16._8_4_;
    uStack_40._4_4_ = auVar16._12_4_;
    fVar6 = fVar3 * param_1_00 + (float)local_48;
    fVar7 = fVar4 * param_1_00 + local_48._4_4_;
    fVar8 = fVar5 * param_1_00 + (float)uStack_40;
    fVar9 = (float)((ulong)param_3 >> 0x20) * param_1_00 + uStack_40._4_4_;
  }
  fVar3 = 0.0 - fVar3;
  fVar4 = 0.0 - fVar4;
  fVar5 = 0.0 - fVar5;
  fVar10 = *param_6 * fVar3 + param_6[1] * fVar4 + fVar5 * param_6[2];
  local_48 = CONCAT44((float)*(undefined8 *)(param_6 + 4) * fVar3 +
                      (float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20) * fVar4 +
                      fVar5 * param_6[6],fVar10);
  uStack_40 = CONCAT44(fVar3 * 0.0 + fVar4 * 0.0 + fVar5 * 0.0,
                       (float)*(undefined8 *)(param_6 + 8) * fVar3 +
                       (float)((ulong)*(undefined8 *)(param_6 + 8) >> 0x20) * fVar4 +
                       fVar5 * (float)*(undefined8 *)(param_6 + 10));
  auVar15 = (**(code **)(**(long **)(param_6 + 0x10) + 0x10))
                      (local_48,uStack_40,fVar6,fVar10,*(undefined8 *)(param_6 + 10));
  fVar10 = auVar15._8_4_;
  local_48._0_4_ = auVar15._0_4_;
  local_48._4_4_ = auVar15._4_4_;
  fVar3 = fVar10 * param_6[8] + local_48._4_4_ * param_6[4] + (float)local_48 * *param_6 +
          param_6[0xc];
  fVar4 = fVar10 * param_6[9] + local_48._4_4_ * param_6[5] + (float)local_48 * param_6[1] +
          param_6[0xd];
  fVar5 = fVar10 * param_6[10] + local_48._4_4_ * param_6[6] + (float)local_48 * param_6[2] +
          param_6[0xe];
  fVar10 = fVar10 * param_6[0xb] + local_48._4_4_ * param_6[7] + (float)local_48 * param_6[3] +
           param_6[0xf];
  *param_7 = *param_1;
  uVar2 = *param_1;
  fVar11 = fVar6 - fVar3;
  fVar12 = fVar7 - fVar4;
  fVar13 = fVar8 - fVar5;
  fVar14 = fVar9 - fVar10;
  *param_1 = uVar2 + 1;
  pfVar1 = (float *)(param_1 + (ulong)uVar2 * 4 + 4);
  *pfVar1 = fVar11;
  pfVar1[1] = fVar12;
  pfVar1[2] = fVar13;
  pfVar1[3] = fVar14;
  uVar2 = *param_7;
  local_48 = CONCAT44(fVar12,fVar11);
  uStack_40 = CONCAT44(fVar14,fVar13);
  pfVar1 = (float *)(param_1 + (long)(int)uVar2 * 4 + 0x404);
  *pfVar1 = fVar3;
  pfVar1[1] = fVar4;
  pfVar1[2] = fVar5;
  pfVar1[3] = fVar10;
  pfVar1 = (float *)(param_1 + (long)(int)uVar2 * 4 + 0x204);
  *pfVar1 = fVar6;
  pfVar1[1] = fVar7;
  pfVar1[2] = fVar8;
  pfVar1[3] = fVar9;
  auVar16._8_8_ = uStack_40;
  auVar16._0_8_ = local_48;
  return auVar16;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume2(JPH::Vec3, float, JPH::Vec3, float,
   JPH::Vec3, float, JPH::Vec3, float, float&, JPH::Vec3&) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume2
          (undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,float param_6,undefined8 param_7,undefined8 param_8,
          PolyhedronSubmergedVolumeCalculator *this,float *param_10,undefined1 (*param_11) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  float fVar38;
  float fVar39;
  float fVar40;
  float in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_88;
  
  fVar22 = (float)((ulong)param_8 >> 0x20);
  fVar19 = (float)((ulong)param_7 >> 0x20);
  local_d8 = (float)param_1;
  fVar4 = local_d8;
  fStack_d4 = (float)((ulong)param_1 >> 0x20);
  fVar5 = fStack_d4;
  fStack_d0 = (float)param_2;
  fVar6 = fStack_d0;
  fStack_cc = (float)((ulong)param_2 >> 0x20);
  fVar7 = fStack_cc;
  auVar13._0_4_ = param_3 - in_stack_00000008;
  local_b8._0_4_ = (float)param_4;
  fVar8 = (float)local_b8;
  local_b8._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar9 = local_b8._4_4_;
  uStack_b0._0_4_ = (float)param_5;
  fVar10 = (float)uStack_b0;
  uStack_b0._4_4_ = (float)((ulong)param_5 >> 0x20);
  fVar11 = uStack_b0._4_4_;
  fVar31 = local_d8;
  fVar32 = fStack_d4;
  fVar33 = fStack_d0;
  fVar34 = fStack_cc;
  if (_LC13 <= (float)((uint)auVar13._0_4_ & _LC12)) {
    auVar13._4_4_ = auVar13._0_4_;
    auVar13._8_4_ = auVar13._0_4_;
    auVar13._12_4_ = auVar13._0_4_;
    auVar12._0_4_ = ((float)param_7 - local_d8) * param_3;
    auVar12._4_4_ = (fVar19 - fStack_d4) * param_3;
    auVar12._8_4_ = ((float)param_8 - fStack_d0) * param_3;
    auVar12._12_4_ = (fVar22 - fStack_cc) * param_3;
    auVar13 = divps(auVar12,auVar13);
    fVar31 = local_d8 + auVar13._0_4_;
    fVar32 = fStack_d4 + auVar13._4_4_;
    fVar33 = fStack_d0 + auVar13._8_4_;
    fVar34 = fStack_cc + auVar13._12_4_;
  }
  auVar14._0_4_ = param_3 - in_stack_00000028;
  if (_LC13 <= (float)((uint)auVar14._0_4_ & _LC12)) {
    auVar14._4_4_ = auVar14._0_4_;
    auVar14._8_4_ = auVar14._0_4_;
    auVar14._12_4_ = auVar14._0_4_;
    auVar20._0_4_ = param_3 * (fStack0000000000000018 - local_d8);
    auVar20._4_4_ = param_3 * (fStack000000000000001c - fStack_d4);
    auVar20._8_4_ = param_3 * (fStack0000000000000020 - fStack_d0);
    auVar20._12_4_ = param_3 * (fStack0000000000000024 - fStack_cc);
    auVar13 = divps(auVar20,auVar14);
    local_d8 = auVar13._0_4_ + local_d8;
    fStack_d4 = auVar13._4_4_ + fStack_d4;
    fStack_d0 = auVar13._8_4_ + fStack_d0;
    fStack_cc = auVar13._12_4_ + fStack_cc;
  }
  auVar21._0_4_ = param_6 - in_stack_00000028;
  fVar27 = (float)local_b8;
  fVar28 = local_b8._4_4_;
  fVar29 = (float)uStack_b0;
  fVar30 = uStack_b0._4_4_;
  if (_LC13 <= (float)((uint)auVar21._0_4_ & _LC12)) {
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    auVar15._0_4_ = (fStack0000000000000018 - (float)local_b8) * param_6;
    auVar15._4_4_ = (fStack000000000000001c - local_b8._4_4_) * param_6;
    auVar15._8_4_ = (fStack0000000000000020 - (float)uStack_b0) * param_6;
    auVar15._12_4_ = (fStack0000000000000024 - uStack_b0._4_4_) * param_6;
    auVar13 = divps(auVar15,auVar21);
    fVar27 = auVar13._0_4_ + (float)local_b8;
    fVar28 = auVar13._4_4_ + local_b8._4_4_;
    fVar29 = auVar13._8_4_ + (float)uStack_b0;
    fVar30 = auVar13._12_4_ + uStack_b0._4_4_;
  }
  local_c8 = (float)local_b8;
  fStack_c4 = local_b8._4_4_;
  fStack_c0 = (float)uStack_b0;
  fStack_bc = uStack_b0._4_4_;
  auVar16._0_4_ = param_6 - in_stack_00000008;
  if (_LC13 <= (float)(_LC12 & (uint)auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = auVar16._0_4_;
    auVar25._0_4_ = ((float)param_7 - (float)local_b8) * param_6;
    auVar25._4_4_ = (fVar19 - local_b8._4_4_) * param_6;
    auVar25._8_4_ = ((float)param_8 - (float)uStack_b0) * param_6;
    auVar25._12_4_ = (fVar22 - uStack_b0._4_4_) * param_6;
    auVar13 = divps(auVar25,auVar16);
    local_c8 = auVar13._0_4_ + (float)local_b8;
    fStack_c4 = auVar13._4_4_ + local_b8._4_4_;
    fStack_c0 = auVar13._8_4_ + (float)uStack_b0;
    fStack_bc = auVar13._12_4_ + uStack_b0._4_4_;
  }
  if ((char)Shape::sDrawSubmergedVolumes != '\0') {
    fVar19 = *(float *)(this + 0x30);
    fVar22 = *(float *)(this + 0x34);
    fVar23 = *(float *)(this + 0x38);
    fVar24 = *(float *)(this + 0x3c);
    local_88 = CONCAT44(fVar32 + fVar22,fVar31 + fVar19);
    uVar3 = CONCAT44(fVar34 + fVar24,fVar33 + fVar23);
    local_a8 = CONCAT44(fStack_d4 + fVar22,local_d8 + fVar19);
    uVar1 = CONCAT44(fStack_cc + fVar24,fStack_d0 + fVar23);
    local_b8 = CONCAT44(fVar28 + fVar22,fVar27 + fVar19);
    uStack_b0 = CONCAT44(fVar30 + fVar24,fVar29 + fVar23);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_88,uVar3,local_b8,uStack_b0,local_a8,uVar1,DebugRenderer::sInstance,
               (undefined4)Color::sGreen,1);
    uVar2 = CONCAT44(fVar24 + fStack_bc,fVar23 + fStack_c0);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_88,uVar3,CONCAT44(fVar22 + fStack_c4,fVar19 + local_c8),uVar2,local_b8,
               uStack_b0,DebugRenderer::sInstance,(undefined4)Color::sGreen,1);
    JPH::DebugRenderer::DrawWireTriangle
              (local_88,uVar3,local_b8,uStack_b0,local_a8,uVar1,DebugRenderer::sInstance,
               (undefined4)Color::sWhite);
    JPH::DebugRenderer::DrawWireTriangle
              (local_88,uVar3,CONCAT44(fVar22 + fStack_c4,fVar19 + local_c8),uVar2,local_b8,
               uStack_b0,DebugRenderer::sInstance,(undefined4)Color::sWhite);
  }
  fVar38 = fVar8 - fVar31;
  fVar39 = fVar9 - fVar32;
  fVar40 = fVar10 - fVar33;
  fVar22 = fVar27 - fVar31;
  fVar23 = fVar28 - fVar32;
  fVar24 = fVar29 - fVar33;
  fVar19 = ((local_c8 - fVar31) * fVar39 - (fStack_c4 - fVar32) * fVar38) * fVar24 +
           ((fStack_c0 - fVar33) * fVar38 - (local_c8 - fVar31) * fVar40) * fVar23 +
           ((fStack_c4 - fVar32) * fVar40 - (fStack_c0 - fVar33) * fVar39) * fVar22 + 0.0;
  if (fVar19 < 0.0) {
    fVar19 = 0.0;
  }
  fVar35 = fVar4 - fVar31;
  fVar36 = fVar5 - fVar32;
  fVar37 = fVar6 - fVar33;
  fVar17 = ((fStack_d4 - fVar32) * fVar35 - (local_d8 - fVar31) * fVar36) * fVar24 +
           ((local_d8 - fVar31) * fVar37 - (fStack_d0 - fVar33) * fVar35) * fVar23 +
           ((fStack_d0 - fVar33) * fVar36 - (fStack_d4 - fVar32) * fVar37) * fVar22 + 0.0;
  if (fVar17 < 0.0) {
    fVar17 = 0.0;
  }
  fVar22 = (fVar36 * fVar38 - fVar35 * fVar39) * fVar24 +
           (fVar35 * fVar40 - fVar37 * fVar38) * fVar23 +
           (fVar37 * fVar39 - fVar36 * fVar40) * fVar22 + 0.0;
  if (fVar22 < 0.0) {
    fVar22 = 0.0;
  }
  auVar26._0_4_ = fVar17 + fVar19 + fVar22;
  *param_10 = auVar26._0_4_;
  if (auVar26._0_4_ <= 0.0) {
    auVar13 = (undefined1  [16])0x0;
  }
  else {
    auVar26._4_4_ = auVar26._0_4_;
    auVar26._8_4_ = auVar26._0_4_;
    auVar26._12_4_ = auVar26._0_4_;
    auVar18._0_4_ =
         fVar17 * (fVar4 + fVar27 + local_d8 + fVar31) +
         fVar19 * (local_c8 + fVar27 + fVar8 + fVar31) + fVar22 * (fVar27 + fVar8 + fVar4 + fVar31);
    auVar18._4_4_ =
         fVar17 * (fVar5 + fVar28 + fStack_d4 + fVar32) +
         fVar19 * (fStack_c4 + fVar28 + fVar9 + fVar32) + fVar22 * (fVar28 + fVar9 + fVar5 + fVar32)
    ;
    auVar18._8_4_ =
         fVar17 * (fVar6 + fVar29 + fStack_d0 + fVar33) +
         fVar19 * (fStack_c0 + fVar29 + fVar10 + fVar33) +
         fVar22 * (fVar29 + fVar10 + fVar6 + fVar33);
    auVar18._12_4_ =
         fVar17 * (fVar7 + fVar30 + fStack_cc + fVar34) +
         fVar19 * (fStack_bc + fVar30 + fVar11 + fVar34) +
         fVar22 * (fVar30 + fVar11 + fVar7 + fVar34);
    auVar13 = divps(auVar18,auVar26);
  }
  *param_11 = auVar13;
  return;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume3(JPH::Vec3, float, JPH::Vec3, float,
   JPH::Vec3, float, JPH::Vec3, float, float&, JPH::Vec3&) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::sTetrahedronVolume3
          (undefined8 param_1,undefined8 param_2,float param_3,undefined8 param_4,undefined8 param_5
          ,float param_6,undefined8 param_7,undefined8 param_8,
          PolyhedronSubmergedVolumeCalculator *this,float *param_10,undefined1 (*param_11) [16])

{
  float fVar1;
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
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  float in_stack_00000008;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  auVar26._0_4_ = param_3 - in_stack_00000028;
  local_b8._0_4_ = (float)param_1;
  fVar1 = (float)local_b8;
  local_b8._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar2 = local_b8._4_4_;
  uStack_b0._0_4_ = (float)param_2;
  fVar3 = (float)uStack_b0;
  uStack_b0._4_4_ = (float)((ulong)param_2 >> 0x20);
  fVar4 = uStack_b0._4_4_;
  fVar24 = (float)local_b8;
  fVar27 = local_b8._4_4_;
  fVar28 = (float)uStack_b0;
  fVar29 = uStack_b0._4_4_;
  if (_LC13 <= (float)((uint)auVar26._0_4_ & _LC12)) {
    auVar26._4_4_ = auVar26._0_4_;
    auVar26._8_4_ = auVar26._0_4_;
    auVar26._12_4_ = auVar26._0_4_;
    auVar25._0_4_ = (fStack0000000000000018 - (float)local_b8) * param_3;
    auVar25._4_4_ = (fStack000000000000001c - local_b8._4_4_) * param_3;
    auVar25._8_4_ = (fStack0000000000000020 - (float)uStack_b0) * param_3;
    auVar25._12_4_ = (fStack0000000000000024 - uStack_b0._4_4_) * param_3;
    auVar26 = divps(auVar25,auVar26);
    fVar24 = auVar26._0_4_ + (float)local_b8;
    fVar27 = auVar26._4_4_ + local_b8._4_4_;
    fVar28 = auVar26._8_4_ + (float)uStack_b0;
    fVar29 = auVar26._12_4_ + uStack_b0._4_4_;
  }
  local_a8._0_4_ = (float)param_4;
  fVar5 = (float)local_a8;
  local_a8._4_4_ = (float)((ulong)param_4 >> 0x20);
  fVar6 = local_a8._4_4_;
  uStack_a0._0_4_ = (float)param_5;
  fVar7 = (float)uStack_a0;
  uStack_a0._4_4_ = (float)((ulong)param_5 >> 0x20);
  fVar8 = uStack_a0._4_4_;
  auVar15._0_4_ = param_6 - in_stack_00000028;
  fVar35 = (float)local_a8;
  fVar37 = local_a8._4_4_;
  fVar38 = (float)uStack_a0;
  fVar39 = uStack_a0._4_4_;
  if (_LC13 <= (float)((uint)auVar15._0_4_ & _LC12)) {
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_4_ = auVar15._0_4_;
    auVar15._12_4_ = auVar15._0_4_;
    auVar36._0_4_ = (fStack0000000000000018 - (float)local_a8) * param_6;
    auVar36._4_4_ = (fStack000000000000001c - local_a8._4_4_) * param_6;
    auVar36._8_4_ = (fStack0000000000000020 - (float)uStack_a0) * param_6;
    auVar36._12_4_ = (fStack0000000000000024 - uStack_a0._4_4_) * param_6;
    auVar26 = divps(auVar36,auVar15);
    fVar35 = auVar26._0_4_ + (float)local_a8;
    fVar37 = auVar26._4_4_ + local_a8._4_4_;
    fVar38 = auVar26._8_4_ + (float)uStack_a0;
    fVar39 = auVar26._12_4_ + uStack_a0._4_4_;
  }
  local_98._0_4_ = (float)param_7;
  fVar9 = (float)local_98;
  local_98._4_4_ = (float)((ulong)param_7 >> 0x20);
  fVar10 = local_98._4_4_;
  uStack_90._0_4_ = (float)param_8;
  fVar11 = (float)uStack_90;
  uStack_90._4_4_ = (float)((ulong)param_8 >> 0x20);
  fVar12 = uStack_90._4_4_;
  auVar16._0_4_ = in_stack_00000008 - in_stack_00000028;
  fVar30 = (float)local_98;
  fVar32 = local_98._4_4_;
  fVar33 = (float)uStack_90;
  fVar34 = uStack_90._4_4_;
  if (_LC13 <= (float)(_LC12 & (uint)auVar16._0_4_)) {
    auVar16._4_4_ = auVar16._0_4_;
    auVar16._8_4_ = auVar16._0_4_;
    auVar16._12_4_ = auVar16._0_4_;
    auVar31._0_4_ = (fStack0000000000000018 - (float)local_98) * in_stack_00000008;
    auVar31._4_4_ = (fStack000000000000001c - local_98._4_4_) * in_stack_00000008;
    auVar31._8_4_ = (fStack0000000000000020 - (float)uStack_90) * in_stack_00000008;
    auVar31._12_4_ = (fStack0000000000000024 - uStack_90._4_4_) * in_stack_00000008;
    auVar26 = divps(auVar31,auVar16);
    fVar30 = auVar26._0_4_ + (float)local_98;
    fVar32 = auVar26._4_4_ + local_98._4_4_;
    fVar33 = auVar26._8_4_ + (float)uStack_90;
    fVar34 = auVar26._12_4_ + uStack_90._4_4_;
  }
  if ((char)Shape::sDrawSubmergedVolumes != '\0') {
    fVar14 = *(float *)(this + 0x30);
    fVar18 = *(float *)(this + 0x34);
    fVar19 = *(float *)(this + 0x38);
    fVar20 = *(float *)(this + 0x3c);
    local_b8 = CONCAT44(fVar27 + fVar18,fVar24 + fVar14);
    uStack_b0 = CONCAT44(fVar29 + fVar20,fVar28 + fVar19);
    local_a8 = CONCAT44(fVar37 + fVar18,fVar35 + fVar14);
    uStack_a0 = CONCAT44(fVar39 + fVar20,fVar38 + fVar19);
    local_98 = CONCAT44(fVar18 + fVar32,fVar14 + fVar30);
    uStack_90 = CONCAT44(fVar20 + fVar34,fVar19 + fVar33);
    (**(code **)(*DebugRenderer::sInstance + 0x18))
              (local_98,uStack_90,local_a8,uStack_a0,local_b8,DebugRenderer::sInstance,
               (undefined4)Color::sGreen,1);
    JPH::DebugRenderer::DrawWireTriangle
              (local_98,uStack_90,local_a8,uStack_a0,local_b8,uStack_b0,DebugRenderer::sInstance,
               (undefined4)Color::sWhite);
  }
  fVar14 = (fVar28 - fStack0000000000000020) *
           ((fVar32 - fStack000000000000001c) * (fVar35 - fStack0000000000000018) -
           (fVar37 - fStack000000000000001c) * (fVar30 - fStack0000000000000018)) +
           (fVar27 - fStack000000000000001c) *
           ((fVar30 - fStack0000000000000018) * (fVar38 - fStack0000000000000020) -
           (fVar35 - fStack0000000000000018) * (fVar33 - fStack0000000000000020)) +
           (fVar24 - fStack0000000000000018) *
           ((fVar33 - fStack0000000000000020) * (fVar37 - fStack000000000000001c) -
           (fVar38 - fStack0000000000000020) * (fVar32 - fStack000000000000001c)) + 0.0;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  fVar21 = fVar9 - fStack0000000000000018;
  fVar22 = fVar10 - fStack000000000000001c;
  fVar23 = fVar11 - fStack0000000000000020;
  fVar18 = fVar5 - fStack0000000000000018;
  fVar19 = fVar6 - fStack000000000000001c;
  fVar20 = fVar7 - fStack0000000000000020;
  fVar18 = (fVar3 - fStack0000000000000020) * (fVar22 * fVar18 - fVar19 * fVar21) +
           (fVar2 - fStack000000000000001c) * (fVar21 * fVar20 - fVar18 * fVar23) +
           (fVar1 - fStack0000000000000018) * (fVar23 * fVar19 - fVar20 * fVar22) + 0.0;
  if (fVar18 < 0.0) {
    fVar19 = 0.0 - fVar14;
    if (fVar19 < 0.0) goto LAB_001062e4;
  }
  else {
    fVar19 = fVar18 - fVar14;
    if (fVar19 < 0.0) {
LAB_001062e4:
      fVar19 = 0.0;
      auVar26 = (undefined1  [16])0x0;
      goto LAB_001062bd;
    }
    if (0.0 < fVar19) {
      auVar13._0_4_ =
           fVar18 * (fVar5 + fVar1 + fVar9 + fStack0000000000000018) -
           fVar14 * (fVar24 + fVar35 + fVar30 + fStack0000000000000018);
      auVar13._4_4_ =
           fVar18 * (fVar6 + fVar2 + fVar10 + fStack000000000000001c) -
           fVar14 * (fVar27 + fVar37 + fVar32 + fStack000000000000001c);
      auVar13._8_4_ =
           fVar18 * (fVar7 + fVar3 + fVar11 + fStack0000000000000020) -
           fVar14 * (fVar28 + fVar38 + fVar33 + fStack0000000000000020);
      auVar13._12_4_ =
           fVar18 * (fVar8 + fVar4 + fVar12 + fStack0000000000000024) -
           fVar14 * (fVar29 + fVar39 + fVar34 + fStack0000000000000024);
      auVar17._4_4_ = fVar19;
      auVar17._0_4_ = fVar19;
      auVar17._8_4_ = fVar19;
      auVar17._12_4_ = fVar19;
      auVar26 = divps(auVar13,auVar17);
      goto LAB_001062bd;
    }
  }
  auVar26 = (undefined1  [16])0x0;
LAB_001062bd:
  *param_10 = fVar19;
  *param_11 = auVar26;
  return;
}



/* JPH::PolyhedronSubmergedVolumeCalculator::AddFace(int, int, int) */

void __thiscall
JPH::PolyhedronSubmergedVolumeCalculator::AddFace
          (PolyhedronSubmergedVolumeCalculator *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  long in_FS_OFFSET;
  PolyhedronSubmergedVolumeCalculator *pPVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar16;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined8 local_a8;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)this;
  pfVar6 = (float *)((long)param_3 * 0x20 + lVar1);
  pfVar7 = (float *)((long)param_2 * 0x20 + lVar1);
  pfVar8 = (float *)((long)param_1 * 0x20 + lVar1);
  pfVar9 = (float *)((long)*(int *)(this + 0xc) * 0x20 + lVar1);
  switch((uint)(*(byte *)(pfVar7 + 5) ^ 1) * 2 | (uint)(*(byte *)(pfVar6 + 5) ^ 1) << 2 |
         (uint)(*(byte *)(pfVar8 + 5) ^ 1)) {
  default:
    fVar13 = pfVar9[4];
    fVar16 = *pfVar9;
    fVar18 = pfVar9[1];
    fVar28 = pfVar9[2];
    fVar30 = pfVar9[3];
    fVar34 = fVar13 - pfVar6[4];
    fVar24 = fVar16;
    fVar25 = fVar18;
    fVar26 = fVar28;
    fVar27 = fVar30;
    if (_LC13 <= (float)((uint)fVar34 & _LC12)) {
      auVar21._0_4_ = (*pfVar6 - fVar16) * fVar13;
      auVar21._4_4_ = (pfVar6[1] - fVar18) * fVar13;
      auVar21._8_4_ = (pfVar6[2] - fVar28) * fVar13;
      auVar21._12_4_ = (pfVar6[3] - fVar30) * fVar13;
      auVar22._4_4_ = fVar34;
      auVar22._0_4_ = fVar34;
      auVar22._8_4_ = fVar34;
      auVar22._12_4_ = fVar34;
      auVar22 = divps(auVar21,auVar22);
      fVar24 = auVar22._0_4_ + fVar16;
      fVar25 = auVar22._4_4_ + fVar18;
      fVar26 = auVar22._8_4_ + fVar28;
      fVar27 = auVar22._12_4_ + fVar30;
    }
    auVar23._0_4_ = fVar13 - pfVar7[4];
    fVar34 = fVar16;
    fVar17 = fVar18;
    fVar19 = fVar28;
    fVar20 = fVar30;
    if (_LC13 <= (float)((uint)auVar23._0_4_ & _LC12)) {
      auVar23._4_4_ = auVar23._0_4_;
      auVar23._8_4_ = auVar23._0_4_;
      auVar23._12_4_ = auVar23._0_4_;
      auVar14._0_4_ = (*pfVar7 - fVar16) * fVar13;
      auVar14._4_4_ = (pfVar7[1] - fVar18) * fVar13;
      auVar14._8_4_ = (pfVar7[2] - fVar28) * fVar13;
      auVar14._12_4_ = (pfVar7[3] - fVar30) * fVar13;
      auVar22 = divps(auVar14,auVar23);
      fVar34 = auVar22._0_4_ + fVar16;
      fVar17 = auVar22._4_4_ + fVar18;
      fVar19 = auVar22._8_4_ + fVar28;
      fVar20 = auVar22._12_4_ + fVar30;
    }
    auVar15._0_4_ = fVar13 - pfVar8[4];
    fVar29 = fVar16;
    fVar31 = fVar18;
    fVar32 = fVar28;
    fVar33 = fVar30;
    if (_LC13 <= (float)(_LC12 & (uint)auVar15._0_4_)) {
      auVar15._4_4_ = auVar15._0_4_;
      auVar15._8_4_ = auVar15._0_4_;
      auVar15._12_4_ = auVar15._0_4_;
      auVar12._0_4_ = (*pfVar8 - fVar16) * fVar13;
      auVar12._4_4_ = (pfVar8[1] - fVar18) * fVar13;
      auVar12._8_4_ = (pfVar8[2] - fVar28) * fVar13;
      auVar12._12_4_ = (pfVar8[3] - fVar30) * fVar13;
      auVar22 = divps(auVar12,auVar15);
      fVar29 = auVar22._0_4_ + fVar16;
      fVar31 = auVar22._4_4_ + fVar18;
      fVar32 = auVar22._8_4_ + fVar28;
      fVar33 = auVar22._12_4_ + fVar30;
    }
    if ((char)Shape::sDrawSubmergedVolumes != '\0') {
      fVar13 = *(float *)(this + 0x30);
      fVar2 = *(float *)(this + 0x34);
      fVar3 = *(float *)(this + 0x38);
      fVar4 = *(float *)(this + 0x3c);
      local_a8 = CONCAT44(fVar2 + fVar31,fVar13 + fVar29);
      uVar5 = CONCAT44(fVar4 + fVar33,fVar3 + fVar32);
      uVar11 = CONCAT44(fVar4 + fVar20,fVar3 + fVar19);
      (**(code **)(*DebugRenderer::sInstance + 0x18))
                (local_a8,uVar5,CONCAT44(fVar2 + fVar17,fVar13 + fVar34),uVar11,
                 CONCAT44(fVar2 + fVar25,fVar13 + fVar24),DebugRenderer::sInstance,
                 (undefined4)Color::sGreen,1);
      JPH::DebugRenderer::DrawWireTriangle
                (local_a8,uVar5,CONCAT44(fVar2 + fVar17,fVar13 + fVar34),uVar11,
                 CONCAT44(fVar2 + fVar25,fVar13 + fVar24),CONCAT44(fVar4 + fVar27,fVar3 + fVar26),
                 DebugRenderer::sInstance,(undefined4)Color::sWhite);
    }
    local_3c = (fVar28 - fVar32) *
               ((fVar17 - fVar31) * (fVar24 - fVar29) - (fVar25 - fVar31) * (fVar34 - fVar29)) +
               ((fVar34 - fVar29) * (fVar26 - fVar32) - (fVar24 - fVar29) * (fVar19 - fVar32)) *
               (fVar18 - fVar31) +
               ((fVar19 - fVar32) * (fVar25 - fVar31) - (fVar26 - fVar32) * (fVar17 - fVar31)) *
               (fVar16 - fVar29) + 0.0;
    if (local_3c < 0.0) {
      local_3c = 0.0;
    }
    local_38 = fVar24 + fVar16 + fVar34 + fVar29;
    fStack_34 = fVar25 + fVar18 + fVar17 + fVar31;
    fStack_30 = fVar26 + fVar28 + fVar19 + fVar32;
    fStack_2c = fVar27 + fVar30 + fVar20 + fVar33;
    goto LAB_001064a0;
  case 1:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 2:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 3:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    goto LAB_00106597;
  case 4:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    break;
  case 5:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
    goto LAB_00106597;
  case 6:
    pPVar10 = *(PolyhedronSubmergedVolumeCalculator **)pfVar9;
    uVar11 = *(undefined8 *)(pfVar9 + 2);
LAB_00106597:
    sTetrahedronVolume3(pPVar10,uVar11,this,&local_3c,&local_38);
    goto LAB_001064a0;
  case 7:
    local_38 = *pfVar8;
    fStack_34 = pfVar8[1];
    fStack_30 = pfVar8[2];
    fVar28 = *pfVar7 - local_38;
    fVar30 = pfVar7[1] - fStack_34;
    fVar24 = pfVar7[2] - fStack_30;
    fVar13 = *pfVar6 - local_38;
    fVar16 = pfVar6[1] - fStack_34;
    fVar18 = pfVar6[2] - fStack_30;
    local_3c = (fVar30 * fVar13 - fVar16 * fVar28) * (pfVar9[2] - fStack_30) +
               (pfVar9[1] - fStack_34) * (fVar28 * fVar18 - fVar13 * fVar24) +
               (*pfVar9 - local_38) * (fVar24 * fVar16 - fVar18 * fVar30) + 0.0;
    if (local_3c < 0.0) {
      local_3c = 0.0;
    }
    local_38 = *pfVar6 + *pfVar9 + *pfVar7 + local_38;
    fStack_34 = pfVar6[1] + pfVar9[1] + pfVar7[1] + fStack_34;
    fStack_30 = pfVar6[2] + pfVar9[2] + pfVar7[2] + fStack_30;
    fStack_2c = pfVar6[3] + pfVar9[3] + pfVar7[3] + pfVar8[3];
    goto LAB_001064a0;
  }
  sTetrahedronVolume2(pPVar10,uVar11,this,&local_3c,&local_38);
LAB_001064a0:
  *(float *)(this + 0x10) = *(float *)(this + 0x10) + local_3c;
  *(float *)(this + 0x20) = local_3c * local_38 + *(float *)(this + 0x20);
  *(float *)(this + 0x24) = local_3c * fStack_34 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = local_3c * fStack_30 + *(float *)(this + 0x28);
  *(float *)(this + 0x2c) = local_3c * fStack_2c + *(float *)(this + 0x2c);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes(JPH::Vec3, JPH::Vec3, JPH::Vec3, JPH::Vec3)
    */

undefined1  [16]
JPH::ClosestPoint::OriginOutsideOfTetrahedronPlanes
          (undefined8 param_1,float param_2,undefined8 param_3,float param_4,undefined8 param_5,
          float param_6,undefined8 param_7,float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  
  fVar20 = (float)((ulong)param_5 >> 0x20);
  fVar31 = (float)((ulong)param_1 >> 0x20);
  fVar30 = (float)param_1;
  local_48 = (float)param_3;
  uStack_44 = (float)((ulong)param_3 >> 0x20);
  fVar16 = local_48 - fVar30;
  fVar17 = uStack_44 - fVar31;
  fVar18 = param_4 - param_2;
  fVar9 = (float)param_5 - fVar30;
  fVar10 = fVar20 - fVar31;
  fVar11 = param_6 - param_2;
  local_28 = (float)param_7;
  uStack_24 = (float)((ulong)param_7 >> 0x20);
  fVar6 = local_28 - fVar30;
  fVar7 = uStack_24 - fVar31;
  fVar8 = param_8 - param_2;
  fVar19 = (float)param_5 - local_48;
  fVar20 = fVar20 - uStack_44;
  fVar21 = fVar10 * fVar16 - fVar17 * fVar9;
  fVar22 = fVar11 * fVar17 - fVar18 * fVar10;
  fVar23 = fVar9 * fVar18 - fVar16 * fVar11;
  fVar24 = fVar17 * fVar6 - fVar7 * fVar16;
  fVar26 = fVar18 * fVar7 - fVar8 * fVar17;
  fVar27 = fVar16 * fVar8 - fVar6 * fVar18;
  fVar13 = fVar7 * fVar9 - fVar10 * fVar6;
  fVar14 = fVar8 * fVar10 - fVar11 * fVar7;
  fVar15 = fVar6 * fVar11 - fVar9 * fVar8;
  fVar12 = fVar20 * (local_28 - local_48) - (uStack_24 - uStack_44) * fVar19;
  fVar20 = (param_6 - param_4) * (uStack_24 - uStack_44) - (param_8 - param_4) * fVar20;
  fVar19 = fVar19 * (param_8 - param_4) - (local_28 - local_48) * (param_6 - param_4);
  fVar25 = param_2 * fVar13;
  fVar28 = fVar22 * fVar30 + 0.0 + fVar23 * fVar31 + fVar21 * param_2;
  fVar29 = fVar14 * fVar30 + 0.0 + fVar15 * fVar31 + fVar25;
  fVar30 = fVar30 * fVar26 + 0.0 + fVar31 * fVar27 + param_2 * fVar24;
  fVar31 = local_48 * fVar20 + 0.0 + uStack_44 * fVar19 + param_4 * fVar12;
  auVar1._4_4_ = fVar13 * fVar18 + fVar15 * fVar17 + fVar14 * fVar16 + 0.0;
  auVar1._0_4_ = fVar8 * fVar21 + fVar7 * fVar23 + fVar6 * fVar22 + 0.0;
  auVar1._8_4_ = fVar11 * fVar24 + fVar10 * fVar27 + fVar26 * fVar9 + 0.0;
  auVar1._12_4_ = (uint)(fVar12 * fVar18 + fVar17 * fVar19 + fVar16 * fVar20 + 0.0) ^ __LC11;
  iVar5 = movmskps(fVar25,auVar1);
  if (iVar5 == 0) {
    auVar4._4_4_ = -(uint)(_LC37 <= fVar29);
    auVar4._0_4_ = -(uint)(_LC37 <= fVar28);
    auVar4._8_4_ = -(uint)(_LC37 <= fVar30);
    auVar4._12_4_ = -(uint)(_LC37 <= fVar31);
    return auVar4;
  }
  if (iVar5 == 0xf) {
    auVar2._4_4_ = -(uint)(fVar29 <= _LC39);
    auVar2._0_4_ = -(uint)(fVar28 <= _LC39);
    auVar2._8_4_ = -(uint)(fVar30 <= _LC39);
    auVar2._12_4_ = -(uint)(fVar31 <= _LC39);
    return auVar2;
  }
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  return auVar3;
}



/* JPH::EPAConvexHullBuilder::FindEdge(JPH::EPAConvexHullBuilder::Triangle*, JPH::Vec3,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Edge, 128u>&) */

ulong JPH::EPAConvexHullBuilder::FindEdge
                (undefined8 param_1_00,float param_2,long param_1,long param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  ulong unaff_RBP;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_828;
  undefined8 local_820;
  long lStack_818;
  undefined4 auStack_810 [508];
  long local_20;
  
  local_820 = _LC40;
  iVar8 = 0;
  iVar9 = -1;
  lVar12 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 *)(param_4 + 0x5e) = 1;
  local_828 = param_4;
  iVar11 = -1;
LAB_00106cb0:
  do {
    while( true ) {
      iVar9 = iVar9 + 1;
      *(int *)((long)&local_820 + lVar12 * 0x10 + 4) = iVar9;
      if (iVar9 < 3) break;
      plVar10 = (long *)(&local_828)[lVar12 * 2];
      plVar7 = plVar10;
      do {
        if (*plVar7 != 0) {
          *(undefined8 *)(*plVar7 + (long)(int)plVar7[1] * 0x10) = 0;
          *plVar7 = 0;
        }
        plVar7 = plVar7 + 2;
      } while (plVar10 + 6 != plVar7);
      if (*(char *)((long)plVar10 + 0x5f) == '\0') {
        *plVar10 = *(long *)(param_1 + 0x6010);
        *(long **)(param_1 + 0x6010) = plVar10;
      }
      iVar8 = iVar8 + -1;
      if (iVar8 < 0) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2 < *param_5);
LAB_00106e38:
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return unaff_RBP & 0xffffffff;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar12 = (long)iVar8;
      iVar9 = *(int *)((long)&local_820 + lVar12 * 0x10 + 4);
    }
    while( true ) {
      lVar3 = (&local_828)[lVar12 * 2];
      lVar6 = (long)((*(int *)(&local_820 + lVar12 * 2) + iVar9) % 3);
      plVar10 = (long *)(lVar6 * 0x10 + lVar3);
      lVar4 = *plVar10;
      if ((lVar4 == 0) || (unaff_RBP = (ulong)*(byte *)(lVar4 + 0x5e), *(byte *)(lVar4 + 0x5e) != 0)
         ) goto LAB_00106cb0;
      if ((param_2 - *(float *)(lVar4 + 0x48)) * *(float *)(lVar4 + 0x38) +
          ((float)((ulong)param_1_00 >> 0x20) - *(float *)(lVar4 + 0x44)) * *(float *)(lVar4 + 0x34)
          + *(float *)(lVar4 + 0x30) * ((float)param_1_00 - *(float *)(lVar4 + 0x40)) + 0.0 <= 0.0)
      break;
      iVar8 = iVar8 + 1;
      lVar3 = plVar10[1];
      *(undefined1 *)(lVar4 + 0x5e) = 1;
      lVar12 = (long)iVar8;
      *(int *)(&local_820 + lVar12 * 2) = (int)lVar3;
      iVar9 = 1;
      (&local_828)[lVar12 * 2] = lVar4;
      *(undefined4 *)((long)&local_820 + lVar12 * 0x10 + 4) = 1;
    }
    if ((*(int *)((long)plVar10 + 0xc) != iVar11) && (iVar11 != -1)) goto LAB_00106e38;
    iVar11 = *(int *)(lVar4 + 0xc + (long)(int)plVar10[1] * 0x10);
    uVar2 = *param_5;
    *param_5 = uVar2 + 1;
    puVar1 = (undefined8 *)(lVar3 + lVar6 * 0x10);
    uVar5 = puVar1[1];
    *(undefined8 *)(param_5 + (ulong)uVar2 * 4 + 2) = *puVar1;
    *(undefined8 *)(param_5 + (ulong)uVar2 * 4 + 2 + 2) = uVar5;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */

void __thiscall
JPH::EPAConvexHullBuilder::Triangle::Triangle
          (Triangle *this,int param_1,int param_2,int param_3,Vec3 *param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined4 *)(this + 0x50) = 0x7f7fffff;
  uVar25 = _LC42;
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x2c) = param_3;
  uVar4 = *(undefined8 *)(param_4 + (long)param_1 * 0x10);
  uVar5 = *(undefined8 *)((long)(param_4 + (long)param_1 * 0x10) + 8);
  *(int *)(this + 0x1c) = param_2;
  pfVar1 = (float *)(param_4 + (long)param_3 * 0x10);
  fVar9 = *pfVar1;
  fVar12 = pfVar1[1];
  fVar13 = pfVar1[2];
  fVar20 = pfVar1[3];
  *(undefined2 *)(this + 0x5d) = 0;
  uVar6 = *(undefined8 *)(param_4 + (long)param_2 * 0x10);
  uVar7 = *(undefined8 *)((long)(param_4 + (long)param_2 * 0x10) + 8);
  local_28 = (float)uVar4;
  fStack_24 = (float)((ulong)uVar4 >> 0x20);
  fStack_20 = (float)uVar5;
  fStack_1c = (float)((ulong)uVar5 >> 0x20);
  fVar21 = fVar9 - local_28;
  fVar22 = fVar12 - fStack_24;
  fVar23 = fVar13 - fStack_20;
  fVar24 = fVar20 - fStack_1c;
  this[0x5f] = (Triangle)0x0;
  local_18 = (float)uVar6;
  fStack_14 = (float)((ulong)uVar6 >> 0x20);
  fStack_10 = (float)uVar7;
  fStack_c = (float)((ulong)uVar7 >> 0x20);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  auVar14._0_4_ = local_28 + local_18 + fVar9;
  auVar14._4_4_ = fStack_24 + fStack_14 + fVar12;
  auVar14._8_4_ = fStack_20 + fStack_10 + fVar13;
  auVar14._12_4_ = fStack_1c + fStack_c + fVar20;
  *(undefined8 *)(this + 0x20) = 0;
  fVar9 = fVar9 - local_18;
  fVar12 = fVar12 - fStack_14;
  fVar13 = fVar13 - fStack_10;
  auVar15._4_4_ = uVar25;
  auVar15._0_4_ = uVar25;
  auVar15._8_4_ = uVar25;
  auVar15._12_4_ = uVar25;
  auVar15 = divps(auVar14,auVar15);
  fVar16 = local_18 - local_28;
  fVar17 = fStack_14 - fStack_24;
  fVar18 = fStack_10 - fStack_20;
  fStack_1c = fStack_c - fStack_1c;
  fVar26 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21 + 0.0;
  *(undefined1 (*) [16])(this + 0x40) = auVar15;
  fVar19 = fVar13 * fVar13 + fVar12 * fVar12 + fVar9 * fVar9 + 0.0;
  if (fVar19 <= fVar26) {
    fVar21 = fVar12 * fVar16 - fVar17 * fVar9;
    fVar22 = fVar13 * fVar17 - fVar18 * fVar12;
    fVar23 = fVar9 * fVar18 - fVar16 * fVar13;
    *(float *)(this + 0x30) = fVar22;
    *(float *)(this + 0x34) = fVar23;
    *(float *)(this + 0x38) = fVar21;
    *(float *)(this + 0x3c) = fVar21;
    fVar24 = fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
    if (_LC43 < fVar24) {
      fVar21 = fVar21 * auVar15._8_4_ + fVar23 * auVar15._4_4_ + fVar22 * auVar15._0_4_ + 0.0;
      *(float *)(this + 0x50) = ((float)((uint)fVar21 & _LC12) * fVar21) / fVar24;
      fVar21 = fVar9 * fVar16 + 0.0 + fVar12 * fVar17 + fVar13 * fVar18;
      fVar22 = fVar16 * fVar16 + 0.0 + fVar17 * fVar17 + fVar18 * fVar18;
      fVar23 = fVar22 * fVar19 - fVar21 * fVar21;
      if (0.0 < fVar23) {
        uVar25 = (undefined4)_LC44;
        uVar8 = (ulong)_LC44 >> 0x20;
        this[0x5c] = (Triangle)0x0;
        fVar24 = __LC45;
        fVar26 = fVar18 * fStack_10 + fVar17 * fStack_14 + fVar16 * local_18 + 0.0;
        fVar9 = fVar12 * fStack_14 + fVar9 * local_18 + 0.0 + fStack_10 * fVar13;
        auVar11._0_4_ = fVar19 * fVar26 - fVar9 * fVar21;
        auVar11._4_4_ = fVar21 * fVar26 - fVar9 * fVar22;
        auVar11._8_4_ =
             fVar19 * fStack_1c -
             fVar12 * (fVar13 * fVar16 + 0.0 + fVar18 * fVar17 + fVar18 * fVar18);
        auVar11._12_4_ =
             fVar22 * fStack_1c -
             fVar12 * ((fVar20 - fStack_c) * fVar16 + 0.0 + fStack_1c * fVar17 + fStack_1c * fVar18)
        ;
        auVar3._4_4_ = fVar23;
        auVar3._0_4_ = fVar23;
        auVar3._8_4_ = uVar25;
        auVar3._12_4_ = (int)uVar8;
        auVar15 = divps(auVar11,auVar3);
        *(long *)(this + 0x54) = auVar15._0_8_;
        if (((fVar24 < auVar15._0_4_) && (__LC45 < auVar15._4_4_)) &&
           (auVar15._0_4_ + auVar15._4_4_ < _LC46)) goto LAB_0010737c;
      }
    }
  }
  else {
    fVar9 = fVar22 * fVar16 - fVar17 * fVar21;
    fVar12 = fVar23 * fVar17 - fVar18 * fVar22;
    fVar13 = fVar21 * fVar18 - fVar16 * fVar23;
    *(float *)(this + 0x30) = fVar12;
    *(float *)(this + 0x34) = fVar13;
    *(float *)(this + 0x38) = fVar9;
    *(float *)(this + 0x3c) = fVar9;
    fVar20 = fVar13 * fVar13 + fVar12 * fVar12 + 0.0 + fVar9 * fVar9;
    if (_LC43 < fVar20) {
      fVar9 = fVar9 * auVar15._8_4_ + fVar13 * auVar15._4_4_ + auVar15._0_4_ * fVar12 + 0.0;
      *(float *)(this + 0x50) = ((float)((uint)fVar9 & _LC12) * fVar9) / fVar20;
      fVar9 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 + 0.0;
      fVar12 = fVar18 * fVar23 + fVar17 * fVar22 + fVar16 * fVar21 + 0.0;
      fVar13 = fVar9 * fVar26 - fVar12 * fVar12;
      if (0.0 < fVar13) {
        this[0x5c] = (Triangle)0x1;
        fVar20 = __LC45;
        auVar10._0_4_ =
             (fVar21 * local_28 + 0.0 + fVar22 * fStack_24 + fVar23 * fStack_20) * fVar12 -
             (fVar16 * local_28 + 0.0 + fStack_24 * fVar17 + fStack_20 * fVar18) * fVar26;
        auVar10._4_4_ =
             (fVar16 * local_28 + 0.0 + fVar17 * fStack_24 + fVar18 * fStack_20) * fVar12 -
             (fVar21 * local_28 + 0.0 + fStack_24 * fVar22 + fStack_20 * fVar23) * fVar9;
        auVar10._8_4_ =
             (fVar23 * 0.0 + 0.0 + fVar18 * 0.0 + fVar18 * 0.0) * fStack_1c -
             (fVar18 * 0.0 + 0.0 + fVar23 * 0.0 + fVar23 * 0.0) * fVar23;
        auVar10._12_4_ =
             (fVar24 * 0.0 + 0.0 + fStack_1c * 0.0 + fStack_1c * 0.0) * fStack_1c -
             (fStack_1c * 0.0 + 0.0 + fVar24 * 0.0 + fVar24 * 0.0) * fVar18;
        auVar2._4_4_ = fVar13;
        auVar2._0_4_ = fVar13;
        auVar2._8_4_ = (int)_LC44;
        auVar2._12_4_ = (int)((ulong)_LC44 >> 0x20);
        auVar15 = divps(auVar10,auVar2);
        *(long *)(this + 0x54) = auVar15._0_8_;
        if (((fVar20 < auVar15._0_4_) && (__LC45 < auVar15._4_4_)) &&
           (auVar15._4_4_ + auVar15._0_4_ < _LC46)) {
LAB_0010737c:
          this[0x5d] = (Triangle)0x1;
          return;
        }
      }
    }
  }
  return;
}



/* JPH::EPAConvexHullBuilder::AddPoint(JPH::EPAConvexHullBuilder::Triangle*, int, float,
   JPH::StaticArray<JPH::EPAConvexHullBuilder::Triangle*, 128u>&) */

uint __thiscall
JPH::EPAConvexHullBuilder::AddPoint
          (EPAConvexHullBuilder *this,Triangle *param_1,int param_2,float param_3,
          StaticArray *param_4)

{
  float *pfVar1;
  float fVar2;
  Triangle TVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  EPAConvexHullBuilder *this_00;
  ulong uVar22;
  long in_FS_OFFSET;
  int local_848;
  int local_844;
  long local_840;
  int local_838 [510];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_848 = 0;
  puVar15 = (undefined8 *)(((ulong)(uint)param_2 + 1) * 0x10 + *(long *)(this + 0x6020));
  uVar14 = FindEdge(*puVar15,puVar15[1],this,param_1,&local_848);
  iVar13 = local_848;
  if ((char)uVar14 == '\0') {
LAB_00107650:
    uVar14 = 0;
  }
  else if (0 < local_848) {
    uVar20 = (ulong)(local_848 + 1);
    lVar8 = *(long *)(this + 0x6020);
    uVar22 = 1;
    do {
      while( true ) {
        this_00 = *(EPAConvexHullBuilder **)(this + 0x6010);
        iVar4 = (&local_844)[uVar22 * 4];
        iVar5 = local_838[(long)(int)((long)((ulong)(uint)((int)uVar22 >> 0x1f) << 0x20 |
                                            uVar22 & 0xffffffff) % (long)iVar13) * 4 + 1];
        if (this_00 == (EPAConvexHullBuilder *)0x0) {
          iVar7 = *(int *)(this + 0x6018);
          if (0xff < iVar7) goto LAB_00107650;
          *(int *)(this + 0x6018) = iVar7 + 1;
          this_00 = this + (long)iVar7 * 0x60 + 0x10;
        }
        else {
          *(undefined8 *)(this + 0x6010) = *(undefined8 *)this_00;
        }
        Triangle::Triangle((Triangle *)this_00,iVar4,iVar5,param_2,(Vec3 *)(lVar8 + 0x10));
        uVar6 = *(uint *)param_4;
        TVar3 = ((Triangle *)this_00)[0x5d];
        fVar2 = *(float *)((Triangle *)this_00 + 0x50);
        *(uint *)param_4 = uVar6 + 1;
        *(EPAConvexHullBuilder **)(param_4 + (ulong)uVar6 * 8 + 8) = this_00;
        if (((TVar3 == (Triangle)0x0) || (param_3 <= fVar2)) && (0.0 <= fVar2)) break;
        uVar16 = (ulong)*(uint *)(this + 0x6028) + 1;
        *(uint *)(this + 0x6028) = *(uint *)(this + 0x6028) + 1;
        *(EPAConvexHullBuilder **)(this + uVar16 * 8 + 0x6028) = this_00;
        lVar17 = (uVar16 & 0xffffffff) - 1;
        ((Triangle *)this_00)[0x5f] = (Triangle)0x1;
        if (0 < lVar17) {
          lVar19 = lVar17 * 8;
          do {
            lVar12 = lVar19 + 0x6030;
            lVar17 = lVar17 + -1 >> 1;
            lVar9 = *(long *)(this + lVar12);
            lVar19 = lVar17 * 8;
            lVar10 = *(long *)(this + lVar19 + 0x6030);
            fVar2 = *(float *)(lVar10 + 0x50);
            pfVar1 = (float *)(lVar9 + 0x50);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            *(long *)(this + lVar19 + 0x6030) = lVar9;
            *(long *)(this + lVar12) = lVar10;
          } while (lVar17 != 0);
        }
        uVar22 = uVar22 + 1;
        if (uVar20 == uVar22) goto LAB_00107553;
      }
      uVar22 = uVar22 + 1;
    } while (uVar20 != uVar22);
LAB_00107553:
    uVar14 = uVar14 & 0xff;
    uVar22 = 1;
    piVar21 = local_838;
    do {
      plVar11 = *(long **)(param_4 + uVar22 * 8);
      iVar4 = *piVar21;
      lVar8 = *(long *)(piVar21 + -2);
      *(int *)(plVar11 + 1) = iVar4;
      plVar18 = (long *)((long)iVar4 * 0x10 + lVar8);
      *plVar11 = lVar8;
      *plVar18 = (long)plVar11;
      *(undefined4 *)(plVar18 + 1) = 0;
      lVar8 = *(long *)(param_4 +
                       (long)((int)((long)((ulong)(uint)((int)uVar22 >> 0x1f) << 0x20 |
                                          uVar22 & 0xffffffff) % (long)iVar13) + 1) * 8);
      lVar17 = *(long *)(param_4 + uVar22 * 8);
      uVar22 = uVar22 + 1;
      *(long *)(lVar17 + 0x10) = lVar8;
      *(undefined4 *)(lVar17 + 0x18) = 2;
      *(long *)(lVar8 + 0x20) = lVar17;
      *(undefined4 *)(lVar8 + 0x28) = 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != uVar22);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



/* JPH::EPAConvexHullBuilder::Initialize(int, int, int) */

void __thiscall
JPH::EPAConvexHullBuilder::Initialize
          (EPAConvexHullBuilder *this,int param_1,int param_2,int param_3)

{
  Triangle *this_00;
  Triangle *this_01;
  float *pfVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  this_00 = (Triangle *)(this + 0x10);
  this_01 = (Triangle *)(this + 0x70);
  lVar9 = *(long *)(this + 0x6020);
  *(undefined8 *)(this + 0x6010) = 0;
  *(undefined4 *)(this + 0x6018) = 1;
  Triangle::Triangle(this_00,param_1,param_2,param_3,(Vec3 *)(lVar9 + 0x10));
  *(undefined4 *)(this + 0x6018) = 2;
  Triangle::Triangle(this_01,param_1,param_3,param_2,(Vec3 *)(lVar9 + 0x10));
  uVar3 = *(uint *)(this + 0x6028);
  *(Triangle **)(this + 0x70) = this_00;
  *(Triangle **)(this + 0x90) = this_00;
  *(Triangle **)(this + 0x80) = this_00;
  *(uint *)(this + 0x6028) = uVar3 + 1;
  *(Triangle **)(this + 0x10) = this_01;
  *(undefined4 *)(this + 0x18) = 2;
  *(undefined4 *)(this + 0x98) = 0;
  *(Triangle **)(this + 0x20) = this_01;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x88) = 1;
  *(Triangle **)(this + 0x30) = this_01;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x78) = 2;
  *(Triangle **)(this + ((ulong)uVar3 + 1) * 8 + 0x6028) = this_00;
  uVar7 = (ulong)uVar3 + 1 & 0xffffffff;
  lVar8 = uVar7 - 1;
  this[0x6f] = (EPAConvexHullBuilder)0x1;
  lVar9 = lVar8 * 8;
  if (0 < lVar8) {
    do {
      lVar6 = lVar9 + 0x6030;
      lVar8 = lVar8 + -1 >> 1;
      lVar4 = *(long *)(this + lVar6);
      lVar9 = lVar8 * 8;
      lVar5 = *(long *)(this + lVar9 + 0x6030);
      fVar2 = *(float *)(lVar5 + 0x50);
      pfVar1 = (float *)(lVar4 + 0x50);
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
      *(long *)(this + lVar9 + 0x6030) = lVar4;
      *(long *)(this + lVar6) = lVar5;
    } while (lVar8 != 0);
  }
  lVar9 = (ulong)(uVar3 + 2) - 1;
  *(uint *)(this + 0x6028) = uVar3 + 2;
  *(Triangle **)(this + uVar7 * 8 + 0x6030) = this_01;
  lVar8 = lVar9 * 8;
  this[0xcf] = (EPAConvexHullBuilder)0x1;
  if (0 < lVar9) {
    do {
      lVar6 = lVar8 + 0x6030;
      lVar9 = lVar9 + -1 >> 1;
      lVar4 = *(long *)(this + lVar6);
      lVar8 = lVar9 * 8;
      lVar5 = *(long *)(this + lVar8 + 0x6030);
      fVar2 = *(float *)(lVar5 + 0x50);
      pfVar1 = (float *)(lVar4 + 0x50);
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
        return;
      }
      *(long *)(this + lVar8 + 0x6030) = lVar4;
      *(long *)(this + lVar6) = lVar5;
    } while (lVar9 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   JPH::EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support>
   >(JPH::AddConvexRadius<JPH::ConvexShape::Support> const&,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support> const&, float, JPH::Vec3&, JPH::Vec3&,
   JPH::Vec3&) */

bool __thiscall
JPH::EPAPenetrationDepth::
GetPenetrationDepthStepEPA<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
          (EPAPenetrationDepth *this,AddConvexRadius *param_1,TransformedConvexObject *param_2,
          float param_3,Vec3 *param_4,Vec3 *param_5,Vec3 *param_6)

{
  ulong uVar1;
  EPAConvexHullBuilder *this_00;
  long *plVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  char cVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  int iVar21;
  undefined1 *puVar22;
  Triangle *pTVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  Triangle *pTVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined1 auVar34 [12];
  undefined8 extraout_XMM0_Qb;
  float fVar36;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar37;
  float fVar42;
  uint uVar43;
  float fVar44;
  undefined1 auVar38 [16];
  uint uVar41;
  uint uVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 local_8030 [32768];
  
  puVar13 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar13;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar13 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != local_8030);
  uVar29 = *(uint *)(this + 0xc0);
  iVar21 = uVar29 << 4;
  *(Vec3 **)(puVar22 + -0x1498) = param_5;
  *(Vec3 **)(puVar22 + -0x1490) = param_6;
  *(Vec3 **)(puVar22 + -0x14a0) = param_4;
  *(float *)(puVar22 + -0x14a4) = param_3;
  *(undefined8 *)(puVar22 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined1 **)(puVar22 + -0x14c8) = puVar22 + -0x1058;
  *(undefined8 *)(puVar22 + -0x14e0) = 0x1078b1;
  __memcpy_chk(puVar22 + -0x1048,this,iVar21,0x1800);
  *(undefined8 *)(puVar22 + -0x14e0) = 0x1078ca;
  __memcpy_chk(puVar22 + -0x848,this + 0x40,iVar21,0x1000);
  *(undefined8 *)(puVar22 + -0x14e0) = 0x1078e6;
  __memcpy_chk(puVar22 + -0x48,this + 0x80,iVar21,0x800);
  *(uint *)(puVar22 + -0x1058) = uVar29;
  if (uVar29 == 1) {
    uVar4 = *(undefined8 *)(puVar22 + -0x14c8);
    uVar5 = *(undefined8 *)param_1;
    *(undefined4 *)(puVar22 + -0x1058) = 0;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x1080fb;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar4,uVar5,param_2,puVar22 + -0x1478);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x10811e;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar4,uVar5,param_2,puVar22 + -0x1474);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x10814b;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar4,uVar5,param_2,puVar22 + -0x1470);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x108182;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar4,uVar5,param_2,puVar22 + -0x146c);
    uVar29 = *(uint *)(puVar22 + -0x1058);
  }
  else if (uVar29 == 2) {
    auVar54._0_4_ = *(float *)(puVar22 + -0x1038) - *(float *)(puVar22 + -0x1048);
    auVar54._4_4_ = *(float *)(puVar22 + -0x1034) - *(float *)(puVar22 + -0x1044);
    auVar54._8_4_ = *(float *)(puVar22 + -0x1030) - *(float *)(puVar22 + -0x1040);
    auVar54._12_4_ = *(float *)(puVar22 + -0x102c) - *(float *)(puVar22 + -0x103c);
    auVar38._0_4_ =
         SQRT(auVar54._8_4_ * auVar54._8_4_ +
              auVar54._4_4_ * auVar54._4_4_ + auVar54._0_4_ * auVar54._0_4_ + 0.0);
    auVar38._4_4_ = auVar38._0_4_;
    auVar38._8_4_ = auVar38._0_4_;
    auVar38._12_4_ = auVar38._0_4_;
    auVar54 = divps(auVar54,auVar38);
    uVar29 = (__LC74 << 0x1f) >> 0x1f;
    uVar41 = (_UNK_0010e7b4 << 0x1f) >> 0x1f;
    uVar43 = (_UNK_0010e7b8 << 0x1f) >> 0x1f;
    uVar45 = (_UNK_0010e7bc << 0x1f) >> 0x1f;
    fVar36 = auVar54._0_4_;
    fVar31 = auVar54._4_4_;
    fVar46 = auVar54._8_4_;
    *(undefined1 (*) [16])(puVar22 + -0x14d8) = auVar54;
    *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
    *(ulong *)(puVar22 + -0x14d0) =
         *(ulong *)(puVar22 + -0x14d0) & 0xffffffff00000000 | (ulong)(uint)fVar46;
    fVar32 = (float)(__LC71 & ((uVar29 & __LC94 | ~uVar29 & (uint)((float)__LC74 + __LC86)) ^
                              __LC70 & __LC74 << 0x1e ^ __LC74 << 0x1f) |
                    ~__LC71 & (uint)((float)(((uint)((float)__LC74 + __LC86) & uVar29 |
                                             ~uVar29 & __LC94) ^ (__LC69 ^ __LC74 << 0x1e) & __LC70)
                                    * *(float *)(puVar22 + -0x14d8)));
    fVar35 = (float)(_UNK_0010e7a4 &
                     ((uVar41 & _UNK_0010e7d4 |
                      ~uVar41 & (uint)((float)_UNK_0010e7b4 + _UNK_0010e7c4)) ^
                     _UNK_0010e794 & _UNK_0010e7b4 << 0x1e ^ _UNK_0010e7b4 << 0x1f) |
                    ~_UNK_0010e7a4 &
                    (uint)((float)(((uint)((float)_UNK_0010e7b4 + _UNK_0010e7c4) & uVar41 |
                                   ~uVar41 & _UNK_0010e7d4) ^
                                  (_UNK_0010e784 ^ _UNK_0010e7b4 << 0x1e) & _UNK_0010e794) *
                          *(float *)(puVar22 + -0x14d4)));
    fVar37 = (float)((uint)_LC40 &
                     ((uVar43 & _UNK_0010e7d8 |
                      ~uVar43 & (uint)((float)_UNK_0010e7b8 + _UNK_0010e7c8)) ^
                     _UNK_0010e798 & _UNK_0010e7b8 << 0x1e ^ _UNK_0010e7b8 << 0x1f) |
                    ~(uint)_LC40 &
                    (uint)((float)(((uint)((float)_UNK_0010e7b8 + _UNK_0010e7c8) & uVar43 |
                                   ~uVar43 & _UNK_0010e7d8) ^
                                  (_UNK_0010e788 ^ _UNK_0010e7b8 << 0x1e) & _UNK_0010e798) *
                          *(float *)(puVar22 + -0x14d0)));
    fVar42 = (float)(_LC40._4_4_ &
                     ((uVar45 & _UNK_0010e7dc |
                      ~uVar45 & (uint)((float)_UNK_0010e7bc + _UNK_0010e7cc)) ^
                     _UNK_0010e79c & _UNK_0010e7bc << 0x1e ^ _UNK_0010e7bc << 0x1f) |
                    ~_LC40._4_4_ &
                    (uint)((float)(((uint)((float)_UNK_0010e7bc + _UNK_0010e7cc) & uVar45 |
                                   ~uVar45 & _UNK_0010e7dc) ^
                                  (_UNK_0010e78c ^ _UNK_0010e7bc << 0x1e) & _UNK_0010e79c) *
                          *(float *)(puVar22 + -0x14cc)));
    fVar48 = fVar32 + fVar32;
    fVar52 = fVar35 + fVar35;
    fVar53 = (fVar37 + fVar37) * fVar37;
    fVar44 = (fVar37 + fVar37) * fVar42;
    fVar33 = fVar37 * fVar52 - fVar48 * fVar42;
    fVar49 = fVar48 * fVar42 + fVar37 * fVar52;
    fVar50 = fVar48 * fVar37 + fVar52 * fVar42;
    fVar51 = fVar48 * fVar37 - fVar52 * fVar42;
    fVar37 = (_LC1 - fVar32 * fVar48) - fVar52 * fVar35;
    fVar42 = fVar35 * fVar48 - fVar44;
    fVar44 = fVar35 * fVar48 + fVar44;
    fVar35 = (_LC1 - fVar52 * fVar35) - fVar53;
    fVar32 = (_LC1 - fVar53) - fVar32 * fVar48;
    if ((float)((uint)fVar31 & _LC12) < (float)(_LC12 & (uint)fVar36)) {
      auVar47._4_4_ = 0;
      auVar47._0_4_ = fVar46;
      auVar47._12_4_ = (uint)fVar36 ^ __LC11;
      auVar47._8_4_ = (uint)fVar36 ^ __LC11;
      auVar40._0_4_ = SQRT(fVar36 * fVar36 + fVar46 * fVar46);
      auVar40._4_4_ = auVar40._0_4_;
      auVar40._8_4_ = auVar40._0_4_;
      auVar40._12_4_ = auVar40._0_4_;
      auVar54 = divps(auVar47,auVar40);
      *(undefined1 (*) [16])(puVar22 + -0x14b8) = auVar54;
    }
    else {
      auVar8._8_4_ = (uint)fVar31 ^ __LC11;
      auVar8._4_4_ = (uint)fVar31 ^ __LC11;
      auVar8._0_4_ = fVar46;
      auVar8._12_4_ = 0;
      auVar39._0_4_ = SQRT(fVar31 * fVar31 + fVar46 * fVar46);
      auVar39._4_4_ = auVar39._0_4_;
      auVar39._8_4_ = auVar39._0_4_;
      auVar39._12_4_ = auVar39._0_4_;
      auVar54 = divps(auVar8 << 0x20,auVar39);
      *(undefined1 (*) [16])(puVar22 + -0x14b8) = auVar54;
    }
    fVar36 = *(float *)(puVar22 + -0x14b4);
    uVar4 = *(undefined8 *)param_1;
    fVar31 = *(float *)(puVar22 + -0x14b8);
    uVar5 = *(undefined8 *)(puVar22 + -0x14c8);
    fVar46 = *(float *)(puVar22 + -0x14b0);
    fVar48 = fVar36 * fVar32 + fVar31 * fVar44 + fVar46 * fVar33 + _UNK_0010e674;
    *(float *)(puVar22 + -0x14d8) = fVar36 * fVar42 + fVar31 * fVar35 + fVar46 * fVar50 + __LC0;
    *(float *)(puVar22 + -0x14d4) = fVar48;
    *(float *)(puVar22 + -0x14d0) =
         fVar36 * fVar49 + fVar31 * fVar51 + fVar46 * fVar37 + _UNK_0010e678;
    *(float *)(puVar22 + -0x14cc) = fVar36 * 0.0 + fVar31 * 0.0 + fVar46 * 0.0 + _LC1;
    fVar36 = *(float *)(puVar22 + -0x14d8);
    fVar31 = *(float *)(puVar22 + -0x14d0);
    *(float *)(puVar22 + -0x1488) = fVar35 * fVar36 + fVar48 * fVar42 + fVar31 * fVar50 + __LC0;
    *(float *)(puVar22 + -0x1484) =
         fVar44 * fVar36 + fVar48 * fVar32 + fVar31 * fVar33 + _UNK_0010e674;
    *(float *)(puVar22 + -0x1480) =
         fVar51 * fVar36 + fVar48 * fVar49 + fVar31 * fVar37 + _UNK_0010e678;
    *(float *)(puVar22 + -0x147c) = fVar36 * 0.0 + fVar48 * 0.0 + fVar31 * 0.0 + _LC1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x108060;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar5,uVar4,param_2,puVar22 + -0x1474);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x108084;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar5,uVar4,param_2,puVar22 + -0x1470);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x1080a9;
    SupportPoints::
    Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
              (uVar5,uVar4,param_2,puVar22 + -0x146c);
    uVar29 = *(uint *)(puVar22 + -0x1058);
  }
  this_00 = (EPAConvexHullBuilder *)(puVar22 + 0x7b8);
  *(undefined8 *)(puVar22 + 0x67c8) = 0;
  *(undefined8 *)(puVar22 + 0x67d8) = *(undefined8 *)(puVar22 + -0x14c8);
  *(undefined4 *)(puVar22 + 0x67d0) = 0;
  *(undefined4 *)(puVar22 + 0x67e0) = 0;
  *(undefined8 *)(puVar22 + -0x14e0) = 0x107950;
  EPAConvexHullBuilder::Initialize(this_00,0,1,2);
  uVar16 = (ulong)*(uint *)(puVar22 + 0x67e0);
  uVar25 = uVar16;
  if (3 < uVar29) {
    *(TransformedConvexObject **)(puVar22 + -0x14d8) = param_2;
    uVar29 = 3;
    pauVar30 = (undefined1 (*) [16])(puVar22 + -0x1018);
    plVar2 = (long *)(puVar22 + 0x67e8);
    do {
      auVar54 = *pauVar30;
      if (uVar25 != 0) {
        pTVar23 = (Triangle *)0x0;
        fVar36 = 0.0;
        plVar19 = plVar2;
LAB_001079c5:
        do {
          pTVar28 = (Triangle *)*plVar19;
          if (pTVar28[0x5e] == (Triangle)0x0) {
            fVar32 = *(float *)(pTVar28 + 0x30);
            fVar33 = *(float *)(pTVar28 + 0x34);
            fVar35 = *(float *)(pTVar28 + 0x38);
            fVar31 = (auVar54._8_4_ - *(float *)(pTVar28 + 0x48)) * fVar35 +
                     (auVar54._4_4_ - *(float *)(pTVar28 + 0x44)) * fVar33 +
                     (auVar54._0_4_ - *(float *)(pTVar28 + 0x40)) * fVar32 + 0.0;
            if (0.0 < fVar31) {
              fVar32 = (fVar31 * fVar31) /
                       (fVar35 * fVar35 + fVar33 * fVar33 + fVar32 * fVar32 + 0.0);
              if (fVar36 < fVar32) {
                pTVar23 = pTVar28;
                fVar36 = fVar32;
              }
              plVar19 = plVar19 + 1;
              if (plVar2 + uVar25 == plVar19) break;
              goto LAB_001079c5;
            }
          }
          plVar19 = plVar19 + 1;
        } while (plVar2 + uVar25 != plVar19);
        if (pTVar23 != (Triangle *)0x0) {
          *(undefined4 *)(puVar22 + -0x1468) = 0;
          *(undefined8 *)(puVar22 + -0x14e0) = 0x107a73;
          cVar14 = EPAConvexHullBuilder::AddPoint
                             (this_00,pTVar23,uVar29,_LC14,(StaticArray *)(puVar22 + -0x1468));
          if (cVar14 == '\0') goto LAB_00107c58;
          uVar16 = (ulong)*(uint *)(puVar22 + 0x67e0);
          uVar25 = uVar16;
        }
      }
      uVar29 = uVar29 + 1;
      pauVar30 = pauVar30 + 1;
    } while (uVar29 < *(uint *)(puVar22 + -0x1058));
    param_2 = *(TransformedConvexObject **)(puVar22 + -0x14d8);
  }
  uVar4 = *(undefined8 *)(puVar22 + -0x14c8);
  do {
    while( true ) {
      pTVar23 = *(Triangle **)(puVar22 + 0x67e8);
      uVar1 = uVar25 * 8;
      lVar18 = *(long *)(puVar22 + uVar1 + 0x67e0);
      lVar26 = ((long)uVar1 >> 3) + -1;
      if (pTVar23[0x5e] == (Triangle)0x0) break;
      *(Triangle **)(puVar22 + uVar1 + 0x67e0) = pTVar23;
      *(long *)(puVar22 + 0x67e8) = lVar18;
      if (1 < lVar26) {
        fVar36 = *(float *)(lVar18 + 0x50);
        lVar17 = 1;
        lVar24 = 0;
        lVar27 = 0;
        do {
          fVar32 = *(float *)(*(long *)(puVar22 + lVar17 * 8 + 0x67e8) + 0x50);
          lVar24 = lVar24 + 2;
          if (fVar36 <= fVar32) {
            if ((lVar26 <= lVar24) ||
               (lVar20 = lVar24,
               fVar36 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
               fVar36 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) break;
          }
          else {
            lVar20 = lVar17;
            if ((lVar24 < lVar26) &&
               (lVar20 = lVar24,
               fVar32 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
               fVar32 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) {
              lVar20 = lVar17;
            }
          }
          if (lVar20 == lVar27) break;
          *(long *)(puVar22 + lVar27 * 8 + 0x67e8) = *(long *)(puVar22 + lVar20 * 8 + 0x67e8);
          lVar24 = lVar20 * 2;
          *(long *)(puVar22 + lVar20 * 8 + 0x67e8) = lVar18;
          lVar17 = lVar24 + 1;
          lVar27 = lVar20;
        } while (lVar17 < lVar26);
      }
      iVar21 = (int)uVar16 + -1;
      *(int *)(puVar22 + 0x67e0) = iVar21;
      if (iVar21 == 0) goto LAB_00107c58;
      *(undefined8 *)pTVar23 = *(undefined8 *)(puVar22 + 0x67c8);
      uVar16 = (ulong)*(uint *)(puVar22 + 0x67e0);
      *(Triangle **)(puVar22 + 0x67c8) = pTVar23;
      uVar25 = (ulong)*(uint *)(puVar22 + 0x67e0);
    }
    if (0.0 <= *(float *)(pTVar23 + 0x50)) {
      pTVar28 = (Triangle *)0x0;
      fVar36 = _LC14;
      break;
    }
    *(Triangle **)(puVar22 + uVar1 + 0x67e0) = pTVar23;
    *(long *)(puVar22 + 0x67e8) = lVar18;
    if (0x10 < uVar1) {
      fVar36 = *(float *)(lVar18 + 0x50);
      lVar17 = 1;
      lVar24 = 0;
      lVar27 = 0;
      do {
        fVar32 = *(float *)(*(long *)(puVar22 + lVar17 * 8 + 0x67e8) + 0x50);
        lVar24 = lVar24 + 2;
        if (fVar36 <= fVar32) {
          if ((lVar26 <= lVar24) ||
             (lVar20 = lVar24,
             fVar36 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
             fVar36 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) break;
        }
        else {
          lVar20 = lVar17;
          if ((lVar24 < lVar26) &&
             (lVar20 = lVar24,
             fVar32 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
             fVar32 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) {
            lVar20 = lVar17;
          }
        }
        if (lVar27 == lVar20) break;
        *(long *)(puVar22 + lVar27 * 8 + 0x67e8) = *(long *)(puVar22 + lVar20 * 8 + 0x67e8);
        lVar24 = lVar20 * 2;
        *(long *)(puVar22 + lVar20 * 8 + 0x67e8) = lVar18;
        lVar17 = lVar24 + 1;
        lVar27 = lVar20;
      } while (lVar17 < lVar26);
    }
    uVar5 = *(undefined8 *)param_1;
    *(int *)(puVar22 + 0x67e0) = (int)uVar16 + -1;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x107bb5;
    auVar54 = SupportPoints::
              Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
                        (uVar4,uVar5,param_2,puVar22 + -0x146c);
    fVar36 = *(float *)(pTVar23 + 0x30);
    *(undefined4 *)(puVar22 + -0x1468) = 0;
    *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
    *(undefined8 *)(puVar22 + -0x14d0) = extraout_XMM0_Qb;
    *(long *)(puVar22 + -0x14d0) = auVar54._8_8_;
    if ((*(float *)(puVar22 + -0x14d0) - *(float *)(pTVar23 + 0x48)) * *(float *)(pTVar23 + 0x38) +
        (*(float *)(puVar22 + -0x14d4) - *(float *)(pTVar23 + 0x44)) * *(float *)(pTVar23 + 0x34) +
        fVar36 * (*(float *)(puVar22 + -0x14d8) - *(float *)(pTVar23 + 0x40)) + 0.0 <= 0.0)
    goto LAB_00107c58;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x107c1d;
    cVar14 = EPAConvexHullBuilder::AddPoint
                       (this_00,pTVar23,*(int *)(puVar22 + -0x146c),_LC14,
                        (StaticArray *)(puVar22 + -0x1468));
    if (cVar14 == '\0') goto LAB_00107c58;
    *(undefined8 *)pTVar23 = *(undefined8 *)(puVar22 + 0x67c8);
    uVar29 = *(uint *)(puVar22 + 0x67e0);
    uVar16 = (ulong)uVar29;
    *(Triangle **)(puVar22 + 0x67c8) = pTVar23;
    if ((uVar29 == 0) || (0x1f < *(uint *)(puVar22 + -0x1058))) goto LAB_00107c58;
    uVar25 = (ulong)uVar29;
  } while( true );
LAB_001081da:
  lVar18 = uVar25 * 8;
  lVar26 = *(long *)(puVar22 + lVar18 + 0x67e0);
  lVar17 = (lVar18 >> 3) + -1;
  *(Triangle **)(puVar22 + lVar18 + 0x67e0) = pTVar23;
  *(long *)(puVar22 + 0x67e8) = lVar26;
  if (1 < lVar17) {
    fVar32 = *(float *)(lVar26 + 0x50);
    lVar18 = 1;
    lVar24 = 0;
    lVar27 = 0;
    do {
      fVar33 = *(float *)(*(long *)(puVar22 + lVar18 * 8 + 0x67e8) + 0x50);
      lVar24 = lVar24 + 2;
      if (fVar32 <= fVar33) {
        if ((lVar17 <= lVar24) ||
           (lVar20 = lVar24,
           fVar32 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
           fVar32 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) break;
      }
      else {
        lVar20 = lVar18;
        if ((lVar24 < lVar17) &&
           (lVar20 = lVar24,
           fVar33 < *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50) ||
           fVar33 == *(float *)(*(long *)(puVar22 + lVar24 * 8 + 0x67e8) + 0x50))) {
          lVar20 = lVar18;
        }
      }
      if (lVar27 == lVar20) break;
      *(long *)(puVar22 + lVar27 * 8 + 0x67e8) = *(long *)(puVar22 + lVar20 * 8 + 0x67e8);
      lVar24 = lVar20 * 2;
      *(long *)(puVar22 + lVar20 * 8 + 0x67e8) = lVar26;
      lVar18 = lVar24 + 1;
      lVar27 = lVar20;
    } while (lVar18 < lVar17);
  }
  uVar29 = (int)uVar16 - 1;
  pTVar23 = *(Triangle **)(puVar22 + (ulong)uVar29 * 8 + 0x67e8);
  *(uint *)(puVar22 + 0x67e0) = uVar29;
  if (pTVar23[0x5e] == (Triangle)0x0) {
    if (fVar36 <= *(float *)(pTVar23 + 0x50)) goto LAB_001082f3;
    if (pTVar28 != (Triangle *)0x0) {
      *(undefined8 *)pTVar28 = *(undefined8 *)(puVar22 + 0x67c8);
      *(Triangle **)(puVar22 + 0x67c8) = pTVar28;
    }
    uVar4 = *(undefined8 *)param_1;
    *(float *)(puVar22 + -0x14b8) = fVar36;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x1084e1;
    auVar54 = SupportPoints::
              Add<JPH::AddConvexRadius<JPH::ConvexShape::Support>,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
                        (*(undefined8 *)(puVar22 + -0x14c8),uVar4,param_2,puVar22 + -0x146c);
    fVar36 = *(float *)(pTVar23 + 0x30);
    fVar32 = *(float *)(pTVar23 + 0x34);
    *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
    *(undefined8 *)(puVar22 + -0x14d0) = extraout_XMM0_Qb_00;
    fVar33 = *(float *)(pTVar23 + 0x38);
    *(long *)(puVar22 + -0x14d0) = auVar54._8_8_;
    fVar35 = auVar54._8_4_ * fVar33 +
             (float)((ulong)*(undefined8 *)(puVar22 + -0x14d8) >> 0x20) * fVar32 +
             (float)*(undefined8 *)(puVar22 + -0x14d8) * fVar36 + 0.0;
    *(float *)(puVar22 + -0x1488) = fVar35;
    if (fVar35 < 0.0) goto LAB_00107c58;
    fVar35 = (fVar35 * fVar35) / (fVar33 * fVar33 + fVar32 * fVar32 + fVar36 * fVar36 + 0.0);
    pTVar28 = pTVar23;
    if (fVar35 - *(float *)(pTVar23 + 0x50) <
        *(float *)(pTVar23 + 0x50) * *(float *)(puVar22 + -0x14a4)) goto LAB_001082f3;
    if (*(float *)(puVar22 + -0x14b8) <= fVar35) {
      fVar35 = *(float *)(puVar22 + -0x14b8);
    }
    if ((*(float *)(puVar22 + -0x14d0) - *(float *)(pTVar23 + 0x48)) * fVar33 +
        (*(float *)(puVar22 + -0x14d4) - *(float *)(pTVar23 + 0x44)) * fVar32 +
        (*(float *)(puVar22 + -0x14d8) - *(float *)(pTVar23 + 0x40)) * fVar36 + 0.0 <= 0.0)
    goto LAB_001082f3;
    *(undefined4 *)(puVar22 + -0x1468) = 0;
    *(float *)(puVar22 + -0x14d8) = fVar35;
    *(undefined8 *)(puVar22 + -0x14e0) = 0x1085f4;
    cVar14 = EPAConvexHullBuilder::AddPoint
                       (this_00,pTVar23,*(int *)(puVar22 + -0x146c),fVar35,
                        (StaticArray *)(puVar22 + -0x1468));
    if (cVar14 == '\0') goto LAB_001082f3;
    plVar19 = (long *)(puVar22 + -0x1460);
    fVar36 = *(float *)(puVar22 + -0x14d8);
    plVar2 = plVar19 + *(uint *)(puVar22 + -0x1468);
    if ((ulong)*(uint *)(puVar22 + -0x1468) != 0) {
      do {
        lVar18 = *plVar19;
        if ((float)((ulong)*(undefined8 *)(lVar18 + 0x40) >> 0x20) * *(float *)(lVar18 + 0x34) +
            (float)*(undefined8 *)(lVar18 + 0x40) * *(float *)(lVar18 + 0x30) + 0.0 +
            *(float *)(lVar18 + 0x38) * *(float *)(lVar18 + 0x48) < 0.0) {
          fVar32 = *(float *)(pTVar23 + 0x30);
          fVar33 = *(float *)(pTVar23 + 0x34);
          fVar35 = *(float *)(pTVar23 + 0x38);
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          uVar5 = *(undefined8 *)(param_2 + 0x10);
          lVar18 = **(long **)(param_2 + 0x40);
          uVar12 = *(undefined8 *)(param_2 + 0x28);
          fVar36 = *(float *)(param_2 + 0x18);
          *(float *)(puVar22 + -0x14d8) =
               *(float *)param_2 * fVar32 + *(float *)(param_2 + 4) * fVar33 +
               *(float *)(param_2 + 8) * fVar35;
          *(float *)(puVar22 + -0x14d4) =
               (float)uVar5 * fVar32 + (float)((ulong)uVar5 >> 0x20) * fVar33 + fVar36 * fVar35;
          *(float *)(puVar22 + -0x14d0) =
               (float)uVar4 * fVar32 + (float)((ulong)uVar4 >> 0x20) * fVar33 +
               (float)uVar12 * fVar35;
          *(float *)(puVar22 + -0x14cc) = fVar32 * 0.0 + fVar33 * 0.0 + fVar35 * 0.0;
          pcVar7 = *(code **)(lVar18 + 0x10);
          *(undefined8 *)(puVar22 + -0x14e0) = 0x1086e2;
          auVar54 = (*pcVar7)(*(undefined8 *)(puVar22 + -0x14d8),*(undefined8 *)(puVar22 + -0x14d0))
          ;
          plVar2 = *(long **)param_1;
          *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
          *(undefined8 *)(puVar22 + -0x14d0) = extraout_XMM0_Qb_01;
          *(long *)(puVar22 + -0x14d0) = auVar54._8_8_;
          fVar36 = *(float *)(puVar22 + -0x14d8);
          fVar32 = *(float *)(puVar22 + -0x14d4);
          fVar33 = *(float *)(param_2 + 4);
          fVar35 = *(float *)(param_2 + 8);
          fVar31 = *(float *)(param_2 + 0xc);
          fVar46 = *(float *)(param_2 + 0x14);
          fVar37 = *(float *)(param_2 + 0x18);
          fVar42 = *(float *)(param_2 + 0x1c);
          fVar44 = *(float *)(puVar22 + -0x14d0);
          fVar48 = *(float *)(param_2 + 0x24);
          fVar49 = *(float *)(param_2 + 0x28);
          fVar50 = *(float *)(param_2 + 0x2c);
          fVar51 = *(float *)(param_2 + 0x34);
          fVar52 = *(float *)(param_2 + 0x38);
          fVar53 = *(float *)(param_2 + 0x3c);
          *(float *)(puVar22 + -0x14c8) =
               fVar44 * *(float *)(param_2 + 0x20) +
               fVar32 * *(float *)(param_2 + 0x10) + fVar36 * *(float *)param_2 +
               *(float *)(param_2 + 0x30);
          *(float *)(puVar22 + -0x14c4) =
               fVar44 * fVar48 + fVar32 * fVar46 + fVar36 * fVar33 + fVar51;
          *(float *)(puVar22 + -0x14c0) =
               fVar44 * fVar49 + fVar32 * fVar37 + fVar36 * fVar35 + fVar52;
          *(float *)(puVar22 + -0x14bc) =
               fVar44 * fVar50 + fVar32 * fVar42 + fVar36 * fVar31 + fVar53;
          fVar36 = *(float *)(pTVar23 + 0x34);
          fVar32 = *(float *)(pTVar23 + 0x38);
          fVar33 = *(float *)(pTVar23 + 0x3c);
          *(float *)(puVar22 + -0x14d8) = 0.0 - *(float *)(pTVar23 + 0x30);
          *(float *)(puVar22 + -0x14d4) = 0.0 - fVar36;
          *(float *)(puVar22 + -0x14d0) = 0.0 - fVar32;
          *(float *)(puVar22 + -0x14cc) = 0.0 - fVar33;
          fVar36 = SQRT(*(float *)(puVar22 + -0x14d4) * *(float *)(puVar22 + -0x14d4) +
                        *(float *)(puVar22 + -0x14d8) * *(float *)(puVar22 + -0x14d8) + 0.0 +
                        *(float *)(puVar22 + -0x14d0) * *(float *)(puVar22 + -0x14d0));
          if (fVar36 <= 0.0) {
            pcVar7 = *(code **)(*plVar2 + 0x10);
            *(undefined8 *)(puVar22 + -0x14e0) = 0x10886c;
            auVar54 = (*pcVar7)(*(undefined8 *)(puVar22 + -0x14d8),
                                *(undefined8 *)(puVar22 + -0x14d0));
            *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar22 + -0x14d0) = extraout_XMM0_Qb_03;
            *(long *)(puVar22 + -0x14d0) = auVar54._8_8_;
            auVar34 = SUB1612(*(undefined1 (*) [16])(puVar22 + -0x14d8),0);
          }
          else {
            fVar36 = *(float *)(param_1 + 8) / fVar36;
            lVar18 = *plVar2;
            *(float *)(puVar22 + -0x14b8) = *(float *)(puVar22 + -0x14d8) * fVar36;
            *(float *)(puVar22 + -0x14b4) = *(float *)(puVar22 + -0x14d4) * fVar36;
            *(float *)(puVar22 + -0x14b0) = *(float *)(puVar22 + -0x14d0) * fVar36;
            *(float *)(puVar22 + -0x14ac) = *(float *)(puVar22 + -0x14cc) * fVar36;
            pcVar7 = *(code **)(lVar18 + 0x10);
            *(undefined8 *)(puVar22 + -0x14e0) = 0x1087a3;
            auVar54 = (*pcVar7)(*(undefined8 *)(puVar22 + -0x14d8),
                                *(undefined8 *)(puVar22 + -0x14d0));
            *(long *)(puVar22 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar22 + -0x14d0) = extraout_XMM0_Qb_02;
            *(long *)(puVar22 + -0x14d0) = auVar54._8_8_;
            auVar34._0_4_ = *(float *)(puVar22 + -0x14d8) + *(float *)(puVar22 + -0x14b8);
            auVar34._4_4_ = *(float *)(puVar22 + -0x14d4) + *(float *)(puVar22 + -0x14b4);
            auVar34._8_4_ = *(float *)(puVar22 + -0x14d0) + *(float *)(puVar22 + -0x14b0);
          }
          bVar15 = (float)((uint)((auVar34._8_4_ - *(float *)(puVar22 + -0x14c0)) *
                                  *(float *)(pTVar23 + 0x38) +
                                 (auVar34._4_4_ - *(float *)(puVar22 + -0x14c4)) *
                                 *(float *)(pTVar23 + 0x34) +
                                 *(float *)(pTVar23 + 0x30) *
                                 (auVar34._0_4_ - *(float *)(puVar22 + -0x14c8)) + 0.0) ^ __LC11) <
                   *(float *)(puVar22 + -0x1488);
          goto LAB_001082fc;
        }
        plVar19 = plVar19 + 1;
      } while (plVar2 != plVar19);
    }
  }
  else {
    *(undefined8 *)pTVar23 = *(undefined8 *)(puVar22 + 0x67c8);
    *(Triangle **)(puVar22 + 0x67c8) = pTVar23;
    pTVar23 = pTVar28;
  }
  uVar29 = *(uint *)(puVar22 + 0x67e0);
  uVar16 = (ulong)uVar29;
  pTVar28 = pTVar23;
  if ((uVar29 == 0) || (0x7f < *(uint *)(puVar22 + -0x1058))) goto LAB_001082f3;
  pTVar23 = *(Triangle **)(puVar22 + 0x67e8);
  uVar25 = (ulong)uVar29;
  goto LAB_001081da;
LAB_001082f3:
  pTVar23 = pTVar28;
  bVar15 = false;
  if (pTVar23 != (Triangle *)0x0) {
LAB_001082fc:
    pfVar6 = *(float **)(puVar22 + -0x14a0);
    fVar32 = (*(float *)(pTVar23 + 0x48) * *(float *)(pTVar23 + 0x38) +
             (float)((ulong)*(undefined8 *)(pTVar23 + 0x30) >> 0x20) * *(float *)(pTVar23 + 0x44) +
             (float)*(undefined8 *)(pTVar23 + 0x30) * *(float *)(pTVar23 + 0x40) + 0.0) /
             (*(float *)(pTVar23 + 0x38) * *(float *)(pTVar23 + 0x38) +
             *(float *)(pTVar23 + 0x30) * *(float *)(pTVar23 + 0x30) + 0.0 +
             *(float *)(pTVar23 + 0x34) * *(float *)(pTVar23 + 0x34));
    fVar36 = *(float *)(pTVar23 + 0x3c);
    fVar33 = fVar32 * *(float *)(pTVar23 + 0x30);
    fVar35 = fVar32 * *(float *)(pTVar23 + 0x34);
    fVar31 = fVar32 * *(float *)(pTVar23 + 0x38);
    *pfVar6 = fVar33;
    pfVar6[1] = fVar35;
    pfVar6[2] = fVar31;
    pfVar6[3] = fVar32 * fVar36;
    if (_LC9 < fVar31 * fVar31 + fVar33 * fVar33 + 0.0 + fVar35 * fVar35) {
      if (bVar15) {
        *pfVar6 = 0.0 - fVar33;
        pfVar6[1] = 0.0 - fVar35;
        pfVar6[2] = 0.0 - fVar31;
        pfVar6[3] = 0.0 - fVar32 * fVar36;
      }
      fVar36 = *(float *)(pTVar23 + 0x54);
      fVar32 = *(float *)(pTVar23 + 0x58);
      lVar26 = ((long)*(int *)(pTVar23 + 0xc) + 0x81) * 0x10;
      lVar17 = ((long)*(int *)(pTVar23 + 0x1c) + 0x81) * 0x10;
      lVar18 = ((long)*(int *)(pTVar23 + 0x2c) + 0x81) * 0x10;
      pfVar6 = (float *)(puVar22 + lVar26 + -0x1058);
      fVar33 = *pfVar6;
      fVar35 = pfVar6[1];
      fVar31 = pfVar6[2];
      fVar46 = pfVar6[3];
      pfVar6 = (float *)(puVar22 + lVar17 + -0x1058);
      fVar37 = *pfVar6;
      fVar42 = pfVar6[1];
      fVar44 = pfVar6[2];
      fVar48 = pfVar6[3];
      pfVar6 = (float *)(puVar22 + lVar18 + -0x1058);
      pfVar3 = (float *)(puVar22 + lVar26 + -0x858);
      fVar49 = *pfVar3;
      fVar50 = pfVar3[1];
      fVar51 = pfVar3[2];
      fVar52 = pfVar3[3];
      pfVar3 = (float *)(puVar22 + lVar17 + -0x858);
      fVar53 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar11 = pfVar3[3];
      pfVar3 = (float *)(puVar22 + lVar18 + -0x858);
      if (pTVar23[0x5c] == (Triangle)0x0) {
        fVar37 = (fVar33 - fVar37) * fVar36 + fVar37 + (*pfVar6 - fVar37) * fVar32;
        fVar42 = (fVar35 - fVar42) * fVar36 + fVar42 + (pfVar6[1] - fVar42) * fVar32;
        fVar44 = (fVar31 - fVar44) * fVar36 + fVar44 + (pfVar6[2] - fVar44) * fVar32;
        fVar46 = (fVar46 - fVar48) * fVar36 + fVar48 + (pfVar6[3] - fVar48) * fVar32;
        fVar33 = (fVar49 - fVar53) * fVar36 + fVar53 + (*pfVar3 - fVar53) * fVar32;
        fVar35 = (fVar50 - fVar9) * fVar36 + fVar9 + (pfVar3[1] - fVar9) * fVar32;
        fVar31 = (fVar51 - fVar10) * fVar36 + fVar10 + (pfVar3[2] - fVar10) * fVar32;
        fVar36 = (fVar52 - fVar11) * fVar36 + fVar11 + (pfVar3[3] - fVar11) * fVar32;
      }
      else {
        fVar37 = (*pfVar6 - fVar33) * fVar32 + (fVar37 - fVar33) * fVar36 + fVar33;
        fVar42 = (pfVar6[1] - fVar35) * fVar32 + (fVar42 - fVar35) * fVar36 + fVar35;
        fVar44 = (pfVar6[2] - fVar31) * fVar32 + (fVar44 - fVar31) * fVar36 + fVar31;
        fVar46 = (pfVar6[3] - fVar46) * fVar32 + (fVar48 - fVar46) * fVar36 + fVar46;
        fVar33 = (*pfVar3 - fVar49) * fVar32 + (fVar53 - fVar49) * fVar36 + fVar49;
        fVar35 = (pfVar3[1] - fVar50) * fVar32 + (fVar9 - fVar50) * fVar36 + fVar50;
        fVar31 = (pfVar3[2] - fVar51) * fVar32 + (fVar10 - fVar51) * fVar36 + fVar51;
        fVar36 = (pfVar3[3] - fVar52) * fVar32 + (fVar11 - fVar52) * fVar36 + fVar52;
      }
      pfVar6 = *(float **)(puVar22 + -0x1498);
      *pfVar6 = fVar37;
      pfVar6[1] = fVar42;
      pfVar6[2] = fVar44;
      pfVar6[3] = fVar46;
      pfVar6 = *(float **)(puVar22 + -0x1490);
      *pfVar6 = fVar33;
      pfVar6[1] = fVar35;
      pfVar6[2] = fVar31;
      pfVar6[3] = fVar36;
      bVar15 = true;
      goto LAB_00107c5a;
    }
  }
LAB_00107c58:
  bVar15 = false;
LAB_00107c5a:
  if (*(long *)(puVar22 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -0x14e0) = &UNK_00108846;
  __stack_chk_fail();
}



/* void JPH::GetTrianglesContextVertexList::sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,
   384u> >(JPH::StaticArray<JPH::Vec3, 384u>&, JPH::Vec3, JPH::Vec3, JPH::Vec3, int) */

void JPH::GetTrianglesContextVertexList::sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
               (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,uint *param_1,int param_8)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  while( true ) {
    local_88 = (float)param_3;
    fStack_84 = (float)((ulong)param_3 >> 0x20);
    fStack_80 = (float)param_4;
    fStack_7c = (float)((ulong)param_4 >> 0x20);
    local_98 = (float)param_1_00;
    fStack_94 = (float)((ulong)param_1_00 >> 0x20);
    fStack_90 = (float)param_2;
    fStack_8c = (float)((ulong)param_2 >> 0x20);
    auVar2._0_4_ = local_88 + local_98;
    auVar2._4_4_ = fStack_84 + fStack_94;
    auVar2._8_4_ = fStack_80 + fStack_90;
    auVar2._12_4_ = fStack_7c + fStack_8c;
    auVar3._0_4_ = SQRT(auVar2._8_4_ * auVar2._8_4_ +
                        auVar2._4_4_ * auVar2._4_4_ + auVar2._0_4_ * auVar2._0_4_ + 0.0);
    auVar3._4_4_ = auVar3._0_4_;
    auVar3._8_4_ = auVar3._0_4_;
    auVar3._12_4_ = auVar3._0_4_;
    auVar3 = divps(auVar2,auVar3);
    local_78 = (float)param_5;
    fStack_74 = (float)((ulong)param_5 >> 0x20);
    fStack_70 = (float)param_6;
    fStack_6c = (float)((ulong)param_6 >> 0x20);
    auVar4._0_4_ = local_88 + local_78;
    auVar4._4_4_ = fStack_84 + fStack_74;
    auVar4._8_4_ = fStack_80 + fStack_70;
    auVar4._12_4_ = fStack_7c + fStack_6c;
    auVar5._0_4_ = SQRT(auVar4._8_4_ * auVar4._8_4_ +
                        auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0);
    auVar5._4_4_ = auVar5._0_4_;
    auVar5._8_4_ = auVar5._0_4_;
    auVar5._12_4_ = auVar5._0_4_;
    auVar5 = divps(auVar4,auVar5);
    auVar6._0_4_ = local_78 + local_98;
    auVar6._4_4_ = fStack_74 + fStack_94;
    auVar6._8_4_ = fStack_70 + fStack_90;
    auVar6._12_4_ = fStack_6c + fStack_8c;
    auVar7._0_4_ = SQRT(auVar6._8_4_ * auVar6._8_4_ +
                        auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0);
    auVar7._4_4_ = auVar7._0_4_;
    auVar7._8_4_ = auVar7._0_4_;
    auVar7._12_4_ = auVar7._0_4_;
    auVar7 = divps(auVar6,auVar7);
    if (param_8 < 1) break;
    local_48 = auVar7._0_8_;
    local_58 = auVar3._0_8_;
    param_8 = param_8 + -1;
    uStack_40 = auVar7._8_8_;
    uStack_50 = auVar3._8_8_;
    sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
              (param_1_00,param_2,local_58,uStack_50,local_48,uStack_40,param_1,param_8);
    uStack_60 = auVar5._8_8_;
    local_68 = auVar5._0_8_;
    sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
              (local_58,uStack_50,local_68,uStack_60,local_48,uStack_40,param_1,param_8);
    sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
              (local_58,uStack_50,param_3,param_4,local_68,uStack_60,param_1,param_8);
    param_1_00 = local_48;
    param_2 = uStack_40;
    param_3 = local_68;
    param_4 = uStack_60;
  }
  uVar1 = *param_1;
  *(undefined8 *)(param_1 + ((ulong)uVar1 + 1) * 4) = param_1_00;
  *(undefined8 *)(param_1 + ((ulong)uVar1 + 1) * 4 + 2) = param_2;
  *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 4 + 4) = param_3;
  *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 4 + 4 + 2) = param_4;
  *param_1 = uVar1 + 3;
  *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 4 + 4) = param_5;
  *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 4 + 4 + 2) = param_6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void JPH::GetTrianglesContextVertexList::sCreateHalfUnitSphereBottom<JPH::StaticArray<JPH::Vec3,
   384u> >(JPH::StaticArray<JPH::Vec3, 384u>&, int) */

void JPH::GetTrianglesContextVertexList::
     sCreateHalfUnitSphereBottom<JPH::StaticArray<JPH::Vec3,384u>>(StaticArray *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = _UNK_0010e808;
  uVar4 = __LC97;
  uVar3 = _UNK_0010e7f8;
  uVar2 = __LC96;
  if (param_2 < 1) {
    uVar1 = *(uint *)param_1;
    auVar9 = ZEXT416(_LC95);
    auVar8 = ZEXT416(_LC98);
    *(undefined1 (*) [16])(param_1 + ((ulong)uVar1 + 1) * 0x10) = auVar9;
    *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 0x10 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 0x10 + 0x10 + 8) = uVar3;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 0x10 + 0x10 + 8) = uVar5;
    uVar6 = (ulong)(uVar1 + 3) + 1;
    *(undefined8 *)(param_1 + uVar6 * 0x10) = uVar2;
    *(undefined8 *)(param_1 + uVar6 * 0x10 + 8) = uVar3;
    *(undefined1 (*) [16])(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = auVar8;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 5) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 5) * 0x10 + 0x10 + 8) = uVar5;
    uVar6 = (ulong)(uVar1 + 6) + 1;
    *(undefined1 (*) [16])(param_1 + uVar6 * 0x10) = auVar8;
    uVar5 = _UNK_0010e828;
    uVar4 = __LC99;
    *(undefined8 *)(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10 + 8) = uVar3;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 8) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 8) * 0x10 + 0x10 + 8) = uVar5;
    uVar6 = (ulong)(uVar1 + 9) + 1;
    *(undefined8 *)(param_1 + uVar6 * 0x10) = uVar2;
    *(undefined8 *)(param_1 + uVar6 * 0x10 + 8) = uVar3;
    *(undefined1 (*) [16])(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = auVar9;
    *(uint *)param_1 = uVar1 + 0xc;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 0xb) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 0xb) * 0x10 + 0x10 + 8) = uVar5;
    return;
  }
  iVar7 = param_2 + -1;
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf800000,0,0xbf3504f3bf3504f3,0,0xbf3504f3,0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3bf3504f3,0,0xbf3504f300000000,0x3f3504f33f3504f3,0xbf3504f3,
             0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3bf3504f3,0,0xbf80000000000000,0,0xbf3504f300000000,0x3f3504f33f3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3,0x3f3504f33f3504f3,0xbf3504f300000000,0x3f3504f33f3504f3,0,
             0x3f8000003f800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf80000000000000,0,0xbf3504f33f3504f3,0,0xbf3504f300000000,0x3f3504f33f3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f33f3504f3,0,0x3f3504f3,0x3f3504f33f3504f3,0xbf3504f300000000,
             0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f33f3504f3,0,0x3f800000,0,0x3f3504f3,0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f300000000,0x3f3504f33f3504f3,0x3f3504f3,0x3f3504f33f3504f3,0,
             0x3f8000003f800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f800000,0,0xbf3504f33f3504f3,0,0x3f3504f3,0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f33f3504f3,0,0xbf3504f300000000,0xbf3504f3bf3504f3,0x3f3504f3,
             0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f33f3504f3,0,0xbf80000000000000,0,0xbf3504f300000000,0xbf3504f3bf3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3,0xbf3504f3bf3504f3,0xbf3504f300000000,0xbf3504f3bf3504f3,0,
             0xbf800000bf800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf80000000000000,0,0xbf3504f3bf3504f3,0,0xbf3504f300000000,0xbf3504f3bf3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3bf3504f3,0,0xbf3504f3,0xbf3504f3bf3504f3,0xbf3504f300000000,
             0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3bf3504f3,0,0xbf800000,0,0xbf3504f3,0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f300000000,0xbf3504f3bf3504f3,0xbf3504f3,0xbf3504f3bf3504f3,0,
             0xbf800000bf800000,param_1,iVar7);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void JPH::GetTrianglesContextVertexList::sCreateHalfUnitSphereTop<JPH::StaticArray<JPH::Vec3,
   384u> >(JPH::StaticArray<JPH::Vec3, 384u>&, int) */

void JPH::GetTrianglesContextVertexList::sCreateHalfUnitSphereTop<JPH::StaticArray<JPH::Vec3,384u>>
               (StaticArray *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar5 = _UNK_0010e838;
  uVar4 = __LC100;
  uVar3 = _UNK_0010e808;
  uVar2 = __LC97;
  if (param_2 < 1) {
    uVar1 = *(uint *)param_1;
    auVar8 = ZEXT416(_LC98);
    auVar9 = ZEXT416(_LC95);
    *(undefined1 (*) [16])(param_1 + ((ulong)uVar1 + 1) * 0x10) = auVar8;
    *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + ((ulong)uVar1 + 1 & 0xffffffff) * 0x10 + 0x10 + 8) = uVar5;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 0x10 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 2) * 0x10 + 0x10 + 8) = uVar3;
    uVar6 = (ulong)(uVar1 + 3) + 1;
    *(undefined8 *)(param_1 + uVar6 * 0x10) = uVar4;
    *(undefined8 *)(param_1 + uVar6 * 0x10 + 8) = uVar5;
    *(undefined1 (*) [16])(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = auVar9;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 5) * 0x10 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 5) * 0x10 + 0x10 + 8) = uVar3;
    uVar6 = (ulong)(uVar1 + 6) + 1;
    *(undefined8 *)(param_1 + uVar6 * 0x10) = uVar4;
    *(undefined8 *)(param_1 + uVar6 * 0x10 + 8) = uVar5;
    *(undefined1 (*) [16])(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = auVar8;
    uVar3 = _UNK_0010e828;
    uVar2 = __LC99;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 8) * 0x10 + 0x10) = __LC99;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 8) * 0x10 + 0x10 + 8) = uVar3;
    uVar6 = (ulong)(uVar1 + 9) + 1;
    *(undefined1 (*) [16])(param_1 + uVar6 * 0x10) = auVar9;
    *(undefined8 *)(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + (uVar6 & 0xffffffff) * 0x10 + 0x10 + 8) = uVar5;
    *(uint *)param_1 = uVar1 + 0xc;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 0xb) * 0x10 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + (ulong)(uVar1 + 0xb) * 0x10 + 0x10 + 8) = uVar3;
    return;
  }
  iVar7 = param_2 + -1;
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f800000,0,0x3f3504f33f3504f3,0,0x3f3504f3,0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f33f3504f3,0,0x3f3504f300000000,0x3f3504f33f3504f3,0x3f3504f3,
             0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f33f3504f3,0,0x3f80000000000000,0,0x3f3504f300000000,0x3f3504f33f3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3,0x3f3504f33f3504f3,0x3f3504f300000000,0x3f3504f33f3504f3,0,
             0x3f8000003f800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f80000000000000,0,0x3f3504f3bf3504f3,0,0x3f3504f300000000,0x3f3504f33f3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3bf3504f3,0,0xbf3504f3,0x3f3504f33f3504f3,0x3f3504f300000000,
             0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3bf3504f3,0,0xbf800000,0,0xbf3504f3,0x3f3504f33f3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f300000000,0x3f3504f33f3504f3,0xbf3504f3,0x3f3504f33f3504f3,0,
             0x3f8000003f800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f80000000000000,0,0x3f3504f33f3504f3,0,0x3f3504f300000000,0xbf3504f3bf3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f33f3504f3,0,0x3f3504f3,0xbf3504f3bf3504f3,0x3f3504f300000000,
             0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f33f3504f3,0,0x3f800000,0,0x3f3504f3,0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f300000000,0xbf3504f3bf3504f3,0x3f3504f3,0xbf3504f3bf3504f3,0,
             0xbf800000bf800000,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf800000,0,0x3f3504f3bf3504f3,0,0xbf3504f3,0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3bf3504f3,0,0x3f3504f300000000,0xbf3504f3bf3504f3,0xbf3504f3,
             0xbf3504f3bf3504f3,param_1,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0x3f3504f3bf3504f3,0,0x3f80000000000000,0,0x3f3504f300000000,0xbf3504f3bf3504f3,param_1
             ,iVar7);
  sCreateUnitSphereHelper<JPH::StaticArray<JPH::Vec3,384u>>
            (0xbf3504f3,0xbf3504f3bf3504f3,0x3f3504f300000000,0xbf3504f3bf3504f3,0,
             0xbf800000bf800000,param_1,iVar7);
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  fVar19 = (float)((ulong)param_6 >> 0x20);
  uStack_90._0_4_ = (float)param_6;
  fVar15 = (float)((ulong)param_4 >> 0x20);
  fVar11 = (float)param_4;
  fVar6 = (float)((ulong)param_2 >> 0x20);
  fVar4 = (float)param_2;
  local_98._0_4_ = (undefined4)param_5;
  local_98._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_88 = (float)param_1;
  fStack_84 = (float)((ulong)param_1 >> 0x20);
  local_78 = (float)param_3;
  fStack_74 = (float)((ulong)param_3 >> 0x20);
  fVar14 = (float)local_98._0_4_ - local_78;
  fVar16 = (float)local_98._4_4_ - fStack_74;
  fVar17 = (float)uStack_90 - fVar11;
  fVar2 = ((float)uStack_90 - fVar4) * ((float)uStack_90 - fVar4) +
          ((float)local_98._0_4_ - local_88) * ((float)local_98._0_4_ - local_88) + 0.0 +
          ((float)local_98._4_4_ - fStack_84) * ((float)local_98._4_4_ - fStack_84);
  fVar18 = fVar17 * fVar17 + fVar16 * fVar16 + fVar14 * fVar14 + 0.0;
  iVar1 = -(uint)(fVar18 < fVar2);
  uVar7 = iVar1 >> 0x1f;
  uVar8 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar9 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  uVar12 = (int)-(uint)(fVar18 < fVar2) >> 0x1f;
  fVar2 = (float)(local_98._0_4_ & uVar7 | ~uVar7 & (uint)local_88);
  fVar32 = (float)(local_98._4_4_ & uVar8 | ~uVar8 & (uint)fStack_84);
  fVar33 = (float)((uint)(float)uStack_90 & uVar9 | ~uVar9 & (uint)fVar4);
  fVar5 = (float)((uint)fVar19 & uVar12 | ~uVar12 & (uint)fVar6);
  fVar28 = local_78 - fVar2;
  fVar30 = fStack_74 - fVar32;
  fVar31 = fVar11 - fVar33;
  fVar29 = (float)(uVar7 & (uint)local_88 | ~uVar7 & local_98._0_4_);
  fVar22 = (float)(uVar8 & (uint)fStack_84 | ~uVar8 & local_98._4_4_);
  fVar10 = (float)(uVar9 & (uint)fVar4 | ~uVar9 & (uint)(float)uStack_90);
  fVar13 = (float)(uVar12 & (uint)fVar6 | ~uVar12 & (uint)fVar19);
  fVar20 = fVar29 - fVar2;
  fVar24 = fVar22 - fVar32;
  fVar26 = fVar10 - fVar33;
  fVar21 = fVar24 * fVar28 - fVar30 * fVar20;
  fVar25 = fVar26 * fVar30 - fVar31 * fVar24;
  fVar27 = fVar20 * fVar31 - fVar28 * fVar26;
  fVar34 = fVar21 * fVar21 + fVar27 * fVar27 + fVar25 * fVar25 + 0.0;
  if (fVar34 < _LC43) {
    fVar22 = (float)local_98._4_4_ * (float)local_98._4_4_ +
             (float)local_98._0_4_ * (float)local_98._0_4_ + 0.0 +
             (float)uStack_90 * (float)uStack_90;
    fVar29 = fVar4 * fVar4 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0;
    if (fVar29 < fVar22) {
      iVar1 = 1;
      local_98._0_4_ = local_88;
      local_98._4_4_ = fStack_84;
      uStack_90._0_4_ = fVar4;
      uStack_90._4_4_ = fVar6;
    }
    else {
      iVar1 = 4;
      uStack_90._4_4_ = fVar19;
      fVar29 = fVar22;
    }
    fVar22 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (fVar22 < fVar29) {
      iVar1 = 2;
      local_98._0_4_ = local_78;
      local_98._4_4_ = fStack_74;
      uStack_90._0_4_ = fVar11;
      uStack_90._4_4_ = fVar15;
      fVar29 = fVar22;
    }
    fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar20 * fVar20 + 0.0;
    if (_LC10 < fVar22) {
      fVar22 = (float)((uint)(fVar33 * fVar26 + fVar32 * fVar24 + fVar20 * fVar2 + 0.0) ^ __LC11) /
               fVar22;
      if (fVar22 < 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = _LC1;
        if (fVar22 <= _LC1) {
          fVar10 = fVar22;
        }
      }
      fVar2 = fVar10 * fVar20 + fVar2;
      fVar32 = fVar10 * fVar24 + fVar32;
      fVar33 = fVar10 * fVar26 + fVar33;
      fVar22 = fVar33 * fVar33 + fVar32 * fVar32 + fVar2 * fVar2 + 0.0;
      if (fVar22 < fVar29) {
        iVar1 = 5;
        local_98._0_4_ = fVar2;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar10 * (fVar13 - fVar5) + fVar5;
        fVar29 = fVar22;
      }
    }
    if (_LC10 < fVar18) {
      fVar18 = (float)((uint)(fVar17 * fVar11 + fVar16 * fStack_74 + fVar14 * local_78 + 0.0) ^
                      __LC11) / fVar18;
      if (fVar18 < 0.0) {
        fVar2 = 0.0;
      }
      else {
        fVar2 = _LC1;
        if (fVar18 <= _LC1) {
          fVar2 = fVar18;
        }
      }
      fVar18 = fVar2 * fVar14 + local_78;
      fVar32 = fVar2 * fVar16 + fStack_74;
      fVar33 = fVar2 * fVar17 + fVar11;
      fVar5 = fVar33 * fVar33 + fVar18 * fVar18 + 0.0 + fVar32 * fVar32;
      if (fVar5 < fVar29) {
        iVar1 = 6;
        local_98._0_4_ = fVar18;
        local_98._4_4_ = fVar32;
        uStack_90._0_4_ = fVar33;
        uStack_90._4_4_ = fVar2 * (fVar19 - fVar15) + fVar15;
        fVar29 = fVar5;
      }
    }
    local_78 = local_78 - local_88;
    fStack_74 = fStack_74 - fStack_84;
    fVar11 = fVar11 - fVar4;
    fVar2 = fVar11 * fVar11 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0;
    if (_LC10 < fVar2) {
      fVar2 = (float)((uint)(fVar11 * fVar4 + fStack_74 * fStack_84 + local_78 * local_88 + 0.0) ^
                     __LC11) / fVar2;
      if (fVar2 < 0.0) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = _LC1;
        if (fVar2 <= _LC1) {
          fVar18 = fVar2;
        }
      }
      local_88 = fVar18 * local_78 + local_88;
      fStack_84 = fVar18 * fStack_74 + fStack_84;
      fVar4 = fVar18 * fVar11 + fVar4;
      if (fVar4 * fVar4 + local_88 * local_88 + 0.0 + fStack_84 * fStack_84 < fVar29) {
        iVar1 = 3;
        local_98._0_4_ = local_88;
        local_98._4_4_ = fStack_84;
        uStack_90._0_4_ = fVar4;
        uStack_90._4_4_ = fVar18 * (fVar15 - fVar6) + fVar6;
      }
    }
    *param_7 = iVar1;
    return _local_98;
  }
  fVar4 = (0.0 - fVar33) * fVar31 + fVar30 * (0.0 - fVar32) + (0.0 - fVar2) * fVar28 + 0.0;
  fVar18 = (0.0 - fVar33) * fVar26 + (0.0 - fVar32) * fVar24 + (0.0 - fVar2) * fVar20 + 0.0;
  if ((fVar4 <= 0.0) && (fVar18 <= 0.0)) {
    local_98._4_4_ = fVar32;
    local_98._0_4_ = fVar2;
    uStack_90._0_4_ = fVar33;
    uStack_90._4_4_ = fVar5;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_98;
  }
  fVar14 = (0.0 - fVar11) * fVar31 + fVar30 * (0.0 - fStack_74) + (0.0 - local_78) * fVar28 + 0.0;
  fVar6 = (0.0 - fVar11) * fVar26 + (0.0 - fStack_74) * fVar24 + (0.0 - local_78) * fVar20 + 0.0;
  if (fVar14 < 0.0) {
    if ((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) goto LAB_00109bfc;
  }
  else {
    if (fVar6 <= fVar14) {
      *param_7 = 2;
      uStack_90 = param_4;
      local_98 = (undefined1  [8])param_3;
      return _local_98;
    }
    if (((fVar4 * fVar6 <= fVar18 * fVar14) && (0.0 <= fVar4)) && (fVar14 == 0.0)) {
LAB_00109bfc:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar4 = fVar4 / (fVar4 - fVar14);
      local_98._4_4_ = fVar4 * fVar30 + fVar32;
      local_98._0_4_ = fVar4 * fVar28 + fVar2;
      uStack_90._0_4_ = fVar4 * fVar31 + fVar33;
      uStack_90._4_4_ = fVar4 * (fVar15 - fVar5) + fVar5;
      return _local_98;
    }
  }
  fVar17 = fVar31 * (0.0 - fVar10) + fVar30 * (0.0 - fVar22) + fVar28 * (0.0 - fVar29) + 0.0;
  fVar16 = (0.0 - fVar10) * fVar26 + (0.0 - fVar22) * fVar24 + fVar20 * (0.0 - fVar29) + 0.0;
  if (fVar16 < 0.0) {
    if ((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) goto LAB_00109dba;
  }
  else {
    if (fVar17 <= fVar16) {
      local_98._4_4_ = fVar22;
      local_98._0_4_ = fVar29;
      uStack_90._4_4_ = fVar13;
      uStack_90._0_4_ = fVar10;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_98;
    }
    if (((fVar18 * fVar17 <= fVar4 * fVar16) && (0.0 <= fVar18)) && (fVar16 == 0.0)) {
LAB_00109dba:
      *param_7 = 5;
      fVar18 = fVar18 / (fVar18 - fVar16);
      local_98._4_4_ = fVar18 * fVar24 + fVar32;
      local_98._0_4_ = fVar18 * fVar20 + fVar2;
      uStack_90._0_4_ = fVar18 * fVar26 + fVar33;
      uStack_90._4_4_ = fVar18 * (fVar13 - fVar5) + fVar5;
      return _local_98;
    }
  }
  if (((fVar6 * fVar17 < fVar14 * fVar16) || (fVar6 = fVar6 - fVar14, fVar6 < 0.0)) ||
     (fVar17 - fVar16 < 0.0)) {
    *param_7 = 7;
    fVar34 = fVar34 * _LC42;
    fVar2 = (fVar33 + fVar11 + fVar10) * fVar21 +
            fVar27 * (fVar32 + fStack_74 + fVar22) + fVar25 * (fVar2 + local_78 + fVar29) + 0.0;
    auVar23._0_4_ = fVar25 * fVar2;
    auVar23._4_4_ = fVar27 * fVar2;
    auVar23._8_4_ = fVar21 * fVar2;
    auVar23._12_4_ = fVar21 * fVar2;
    auVar3._4_4_ = fVar34;
    auVar3._0_4_ = fVar34;
    auVar3._8_4_ = fVar34;
    auVar3._12_4_ = fVar34;
    _local_98 = divps(auVar23,auVar3);
  }
  else {
    fVar6 = fVar6 / ((fVar17 - fVar16) + fVar6);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_98._4_4_ = (fVar22 - fStack_74) * fVar6 + fStack_74;
    local_98._0_4_ = (fVar29 - local_78) * fVar6 + local_78;
    uStack_90._0_4_ = (fVar10 - fVar11) * fVar6 + fVar11;
    uStack_90._4_4_ = (fVar13 - fVar15) * fVar6 + fVar15;
  }
  return _local_98;
}



/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3, unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTetrahedron<false>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9)

{
  float fVar1;
  uint uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_88;
  int local_80;
  uint local_28;
  uint local_24;
  long local_20;
  
  auVar4 = ZEXT816(0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0xf;
  auVar6 = OriginOutsideOfTetrahedronPlanes();
  local_88 = auVar6._0_4_;
  local_80 = auVar6._8_4_;
  fVar1 = _LC14;
  if (local_88 != 0) {
    auVar4 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_3,param_4,param_5,param_6,&local_28);
    fVar1 = auVar4._8_4_ * auVar4._8_4_ +
            auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0;
  }
  if (auVar6._0_8_ >> 0x20 != 0) {
    auVar5 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_5,param_6,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar1) {
      local_28 = local_24 * 2 & 0xc | local_24 & 1;
      fVar1 = fVar3;
      auVar4 = auVar5;
    }
  }
  if (local_80 != 0) {
    auVar5 = GetClosestPointOnTriangle<false>
                       (param_1,param_2,param_3,param_4,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar1) {
      local_28 = local_24 * 2 & 8 | local_24 & 3;
      fVar1 = fVar3;
      auVar4 = auVar5;
    }
  }
  uVar2 = local_28;
  if ((auVar6._8_8_ >> 0x20 != 0) &&
     (auVar6 = GetClosestPointOnTriangle<false>
                         (param_3,param_4,param_5,param_6,param_7,param_8,&local_24),
     uVar2 = local_28,
     auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0 <
     fVar1)) {
    uVar2 = local_24 * 2;
    auVar4 = auVar6;
  }
  *param_9 = uVar2;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::GJKClosestPoint::CastShape<JPH::ConvexShape::Support,
   JPH::ConvexShape::Support>(JPH::Mat44 const&, JPH::Vec3, float, JPH::ConvexShape::Support const&,
   JPH::ConvexShape::Support const&, float, float, float&, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&) */

bool JPH::GJKClosestPoint::CastShape<JPH::ConvexShape::Support,JPH::ConvexShape::Support>
               (undefined8 param_1_00,undefined8 param_2,float param_3,float param_4,float param_5,
               float *param_1,float *param_7,long *param_8,long *param_9,float *param_10,
               float *param_11,float *param_12,float *param_13)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  long lVar10;
  long in_FS_OFFSET;
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
  float extraout_XMM1_Da;
  float extraout_XMM1_Da_00;
  float fVar21;
  float extraout_XMM1_Db;
  float extraout_XMM1_Db_00;
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
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_c8;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_bc = param_3 * param_3;
  bVar7 = false;
  fVar30 = *param_7;
  fVar31 = param_7[1];
  fVar32 = param_7[2];
  fVar33 = param_7[3];
  fVar34 = param_7[8];
  fVar35 = param_7[9];
  fVar25 = param_7[10];
  fVar12 = param_7[0xb];
  fVar24 = param_4 + param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar15 = param_7[4];
  fVar18 = param_7[5];
  fVar2 = param_7[6];
  fVar3 = param_7[7];
  uVar4 = *(undefined8 *)(param_7 + 0xc);
  uVar5 = *(undefined8 *)(param_7 + 0xe);
  lVar10 = *param_8;
  param_1[0x30] = 0.0;
  auVar36 = (**(code **)(lVar10 + 0x10))
                      (CONCAT44(fVar15 * 0.0 + fVar18 * 0.0 + fVar2 * 0.0,
                                fVar30 * 0.0 + fVar31 * 0.0 + fVar32 * 0.0),
                       fVar34 * 0.0 + fVar35 * 0.0 + fVar25 * 0.0,param_8,param_7,param_8,0);
  fVar26 = auVar36._8_4_;
  local_188._0_4_ = auVar36._0_4_;
  local_188._4_4_ = auVar36._4_4_;
  fVar11 = (float)local_188 * fVar30;
  fVar13 = (float)local_188 * fVar31;
  fVar16 = (float)local_188 * fVar32;
  fVar19 = (float)local_188 * fVar33;
  fVar20 = local_188._4_4_ * fVar15;
  fVar21 = local_188._4_4_ * fVar18;
  fVar22 = local_188._4_4_ * fVar2;
  fVar23 = local_188._4_4_ * fVar3;
  local_128 = (float)uVar4;
  fStack_124 = (float)((ulong)uVar4 >> 0x20);
  fStack_120 = (float)uVar5;
  fStack_11c = (float)((ulong)uVar5 >> 0x20);
  auVar37 = (**(code **)(*param_9 + 0x10))(0,0,param_9);
  fVar27 = 0.0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fStack_15c = 0.0;
  local_188._0_4_ = auVar37._0_4_;
  local_188._4_4_ = auVar37._4_4_;
  uStack_180._0_4_ = auVar37._8_4_;
  uStack_180._4_4_ = auVar37._12_4_;
  local_c8 = 3.4028235e+38;
  local_c0 = 0.0;
  fStack_170 = fVar26 * fVar25 + fVar22 + fVar16 + fStack_120 + (0.0 - (float)uStack_180);
  fStack_16c = fVar26 * fVar12 + fVar23 + fVar19 + fStack_11c + (0.0 - uStack_180._4_4_);
  _local_b8 = (undefined1  [16])0x0;
  local_178 = fVar26 * fVar34 + fVar20 + fVar11 + local_128 + (0.0 - (float)local_188);
  fStack_174 = fVar26 * fVar35 + fVar21 + fVar13 + fStack_124 + (0.0 - local_188._4_4_);
  while( true ) {
    fVar11 = 0.0 - local_178;
    fVar13 = 0.0 - fStack_174;
    fVar16 = 0.0 - fStack_170;
    local_188 = CONCAT44(fVar11 * fVar15 + fVar13 * fVar18 + fVar16 * fVar2,
                         fVar11 * fVar30 + fVar13 * fVar31 + fVar16 * fVar32);
    uStack_180._0_4_ = fVar11 * fVar34 + fVar13 * fVar35 + fVar16 * fVar25;
    uStack_180._4_4_ = fVar11 * 0.0 + fVar13 * 0.0 + fVar16 * 0.0;
    auVar36 = (**(code **)(*param_8 + 0x10))(local_188,uStack_180,param_8);
    fVar11 = auVar36._8_4_;
    local_188._0_4_ = auVar36._0_4_;
    local_188._4_4_ = auVar36._4_4_;
    fVar16 = (float)local_188 * fVar30 + local_188._4_4_ * fVar15 + fVar11 * fVar34 + local_128;
    fVar19 = (float)local_188 * fVar31 + local_188._4_4_ * fVar18 + fVar11 * fVar35 + fStack_124;
    fVar26 = (float)local_188 * fVar32 + local_188._4_4_ * fVar2 + fVar11 * fVar25 + fStack_120;
    fVar20 = (float)local_188 * fVar33 + local_188._4_4_ * fVar3 + fVar11 * fVar12 + fStack_11c;
    auVar37 = (**(code **)(*param_9 + 0x10))
                        (CONCAT44(fStack_174,local_178),CONCAT44(fStack_16c,fStack_170),param_9);
    local_188._0_4_ = auVar37._0_4_;
    local_188._4_4_ = auVar37._4_4_;
    uStack_180._0_4_ = auVar37._8_4_;
    uStack_180._4_4_ = auVar37._12_4_;
    fVar11 = fStack_170 * fStack_170 + fStack_174 * fStack_174 + local_178 * local_178 + 0.0;
    fVar13 = ((fVar29 - ((float)uStack_180 - fVar26)) * fStack_170 +
             (fVar28 - (local_188._4_4_ - fVar19)) * fStack_174 +
             (fVar27 - ((float)local_188 - fVar16)) * local_178 + 0.0) - SQRT(fVar11) * fVar24;
    if (0.0 < fVar13) break;
LAB_0010a47d:
    fVar13 = param_1[0x30];
    lVar10 = (long)(int)fVar13;
    fVar21 = (float)((int)fVar13 + 1);
    param_1[lVar10 * 4 + 0x10] = fVar16;
    param_1[lVar10 * 4 + 0x11] = fVar19;
    param_1[lVar10 * 4 + 0x12] = fVar26;
    param_1[lVar10 * 4 + 0x13] = fVar20;
    *(undefined1 (*) [16])(param_1 + lVar10 * 4 + 0x20) = auVar37;
    param_1[0x30] = fVar21;
    if ((int)fVar21 < 1) {
LAB_0010a6b1:
      if (!bVar7) goto LAB_0010a6c2;
      param_1[0x30] = 1.4013e-45;
      bVar7 = false;
      fStack_170 = fVar29 - (float)uStack_180;
      fStack_16c = fStack_15c - uStack_180._4_4_;
      param_1[0x10] = fVar16;
      param_1[0x11] = fVar19;
      param_1[0x12] = fVar26;
      param_1[0x13] = fVar20;
      local_c8 = 3.4028235e+38;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar37;
      local_178 = fVar27 - (float)local_188;
      fStack_174 = fVar28 - local_188._4_4_;
    }
    else {
      pfVar8 = param_1;
      do {
        pfVar9 = pfVar8 + 4;
        *pfVar8 = fVar27 - (pfVar8[0x20] - pfVar8[0x10]);
        pfVar8[1] = fVar28 - (pfVar8[0x21] - pfVar8[0x11]);
        pfVar8[2] = fVar29 - (pfVar8[0x22] - pfVar8[0x12]);
        pfVar8[3] = fStack_15c - (pfVar8[0x23] - pfVar8[0x13]);
        pfVar8 = pfVar9;
      } while (pfVar9 != param_1 + lVar10 * 4 + 4);
      if (fVar21 == 4.2039e-45) {
        local_158 = ClosestPoint::GetClosestPointOnTriangle<false>
                              (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),
                               *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                               *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),&local_44)
        ;
        uStack_150._0_4_ = extraout_XMM1_Da_00;
        uStack_150._4_4_ = extraout_XMM1_Db_00;
      }
      else if ((int)fVar21 < 4) {
        if (fVar21 == 1.4013e-45) {
          local_44 = 1.4013e-45;
          uStack_150._4_4_ = param_1[3];
          local_158 = *(undefined8 *)param_1;
          uStack_150._0_4_ = param_1[2];
        }
        else {
          uVar4 = *(undefined8 *)param_1;
          uVar5 = *(undefined8 *)(param_1 + 2);
          local_158 = *(undefined8 *)(param_1 + 4);
          uStack_150 = *(undefined8 *)(param_1 + 6);
          local_148 = (float)uVar4;
          fStack_144 = (float)((ulong)uVar4 >> 0x20);
          fStack_140 = (float)uVar5;
          fStack_13c = (float)((ulong)uVar5 >> 0x20);
          local_88 = (float)local_158;
          fStack_84 = (float)((ulong)local_158 >> 0x20);
          fStack_80 = (float)uStack_150;
          fVar22 = local_88 - local_148;
          fVar14 = fStack_84 - fStack_144;
          fVar17 = fStack_80 - fStack_140;
          fVar23 = fVar17 * fVar17 + fVar14 * fVar14 + fVar22 * fVar22 + 0.0;
          if (fVar23 < _LC10) {
            if (fStack_140 * fStack_140 + local_148 * local_148 + 0.0 + fStack_144 * fStack_144 <
                fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0)
            goto LAB_0010a5ad;
LAB_0010ace1:
            local_44 = 2.8026e-45;
          }
          else {
            fVar23 = (float)((uint)(fVar17 * fStack_140 +
                                   fVar14 * fStack_144 + fVar22 * local_148 + 0.0) ^ __LC11) /
                     fVar23;
            if (0.0 < fVar23) {
              fVar22 = _LC1 - fVar23;
              if (fVar22 <= 0.0) goto LAB_0010ace1;
              local_44 = 4.2039e-45;
              fStack_7c = (float)((ulong)uStack_150 >> 0x20);
              local_158 = CONCAT44(fVar23 * fStack_84 + fVar22 * fStack_144,
                                   fVar23 * local_88 + fVar22 * local_148);
              uStack_150 = CONCAT44(fVar23 * fStack_7c + fVar22 * fStack_13c,
                                    fVar23 * fStack_80 + fVar22 * fStack_140);
            }
            else {
LAB_0010a5ad:
              local_44 = 1.4013e-45;
              local_158 = uVar4;
              uStack_150 = uVar5;
            }
          }
        }
      }
      else {
        if (fVar21 != 5.60519e-45) goto LAB_0010a6b1;
        local_158 = ClosestPoint::GetClosestPointOnTetrahedron<false>
                              (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),
                               *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                               *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                               *(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),
                               &local_44);
        uStack_150._0_4_ = extraout_XMM1_Da;
        uStack_150._4_4_ = extraout_XMM1_Db;
      }
      fVar23 = (float)local_158;
      fVar14 = (float)((ulong)local_158 >> 0x20);
      fVar22 = (float)uStack_150 * (float)uStack_150 + fVar14 * fVar14 + fVar23 * fVar23 + 0.0;
      if (local_c8 <= fVar22) goto LAB_0010a6b1;
      local_178 = fVar23;
      fStack_174 = fVar14;
      fStack_170 = (float)uStack_150;
      fStack_16c = uStack_150._4_4_;
      if (local_44 == 2.10195e-44) goto LAB_0010a6cb;
      fVar16 = 0.0;
      pfVar8 = param_1 + 0x10;
      uVar1 = (uint)local_44 & 1;
      fVar11 = 0.0;
      while( true ) {
        fVar21 = fVar11;
        if (uVar1 != 0) {
          uVar4 = *(undefined8 *)(pfVar8 + 2);
          fVar21 = (float)((int)fVar11 + 1);
          *(undefined8 *)(param_1 + (long)(int)fVar11 * 4 + 0x10) = *(undefined8 *)pfVar8;
          *(undefined8 *)(param_1 + (long)(int)fVar11 * 4 + 0x12) = uVar4;
          uVar4 = *(undefined8 *)(pfVar8 + 0x12);
          *(undefined8 *)(param_1 + (long)(int)fVar11 * 4 + 0x20) = *(undefined8 *)(pfVar8 + 0x10);
          *(undefined8 *)(param_1 + (long)(int)fVar11 * 4 + 0x22) = uVar4;
        }
        if (fVar13 == fVar16) break;
        fVar16 = (float)((int)fVar16 + 1);
        pfVar8 = pfVar8 + 4;
        uVar1 = 1 << (SUB41(fVar16,0) & 0x1f) & (uint)local_44;
        fVar11 = fVar21;
      }
      param_1[0x30] = fVar21;
      fVar11 = fVar22;
      if (fVar22 <= local_bc) goto LAB_0010a6c2;
      fStack_b0 = (float)uStack_150;
      local_b8 = (undefined1  [8])local_158;
      fStack_ac = uStack_150._4_4_;
      local_c8 = fVar22;
    }
  }
  fVar21 = (float)((ulong)param_1_00 >> 0x20);
  fVar22 = fStack_170 * (float)param_2 + fStack_174 * fVar21 + local_178 * (float)param_1_00 + 0.0;
  if (fVar22 < 0.0) {
    fVar13 = local_c0 - fVar13 / fVar22;
    if (local_c0 == fVar13) {
      fVar21 = param_1[0x30];
      local_c0 = fVar13;
LAB_0010a6c2:
      fVar22 = fVar11;
      if (0 < (int)fVar21) {
LAB_0010a6cb:
        pfVar8 = param_1;
        do {
          pfVar9 = pfVar8 + 4;
          *pfVar8 = fVar27 - (pfVar8[0x20] - pfVar8[0x10]);
          pfVar8[1] = fVar28 - (pfVar8[0x21] - pfVar8[0x11]);
          pfVar8[2] = fVar29 - (pfVar8[0x22] - pfVar8[0x12]);
          pfVar8[3] = fStack_15c - (pfVar8[0x23] - pfVar8[0x13]);
          pfVar8 = pfVar9;
        } while (pfVar9 != param_1 + (long)(int)fVar21 * 4);
        auVar37 = (undefined1  [16])0x0;
        if (_LC101 < fVar22) {
          fVar22 = SQRT(fVar22);
          auVar6._4_4_ = fStack_174;
          auVar6._0_4_ = local_178;
          auVar6._8_4_ = fStack_170;
          auVar6._12_4_ = fStack_16c;
          auVar37._4_4_ = fVar22;
          auVar37._0_4_ = fVar22;
          auVar37._8_4_ = fVar22;
          auVar37._12_4_ = fVar22;
          auVar37 = divps(auVar6,auVar37);
        }
        fVar33 = param_4 * auVar37._0_4_;
        fVar34 = param_4 * auVar37._4_4_;
        fVar35 = param_4 * auVar37._8_4_;
        param_4 = param_4 * auVar37._12_4_;
        fVar30 = param_5 * auVar37._0_4_;
        fVar31 = param_5 * auVar37._4_4_;
        fVar32 = param_5 * auVar37._8_4_;
        param_5 = param_5 * auVar37._12_4_;
        if (fVar21 == 2.8026e-45) {
          local_168 = (float)*(undefined8 *)(param_1 + 4);
          fStack_164 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
          fStack_160 = (float)*(undefined8 *)(param_1 + 6);
          local_188._0_4_ = (float)*(undefined8 *)param_1;
          local_188._4_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
          uStack_180._0_4_ = (float)*(undefined8 *)(param_1 + 2);
          fVar12 = local_168 - (float)local_188;
          fVar15 = fStack_164 - local_188._4_4_;
          fVar18 = fStack_160 - (float)uStack_180;
          fVar25 = fVar18 * fVar18 + fVar15 * fVar15 + fVar12 * fVar12 + 0.0;
          if (fVar25 < _LC10) {
            if (fStack_160 * fStack_160 + fStack_164 * fStack_164 + local_168 * local_168 + 0.0 <=
                (float)uStack_180 * (float)uStack_180 +
                local_188._4_4_ * local_188._4_4_ + (float)local_188 * (float)local_188 + 0.0) {
              fVar12 = 0.0;
              fVar25 = _LC1;
            }
            else {
              fVar25 = 0.0;
              fVar12 = _LC1;
            }
          }
          else {
            fVar25 = (float)((uint)(fVar18 * (float)uStack_180 +
                                   fVar15 * local_188._4_4_ + fVar12 * (float)local_188 + 0.0) ^
                            __LC11) / fVar25;
            fVar12 = _LC1 - fVar25;
          }
          fVar30 = param_1[0x20] * fVar12 + param_1[0x24] * fVar25 + fVar30;
          fVar31 = param_1[0x21] * fVar12 + param_1[0x25] * fVar25 + fVar31;
          fVar32 = param_1[0x22] * fVar12 + param_1[0x26] * fVar25 + fVar32;
          param_5 = param_1[0x23] * fVar12 + param_1[0x27] * fVar25 + param_5;
          *param_12 = fVar30;
          param_12[1] = fVar31;
          param_12[2] = fVar32;
          param_12[3] = param_5;
          if (local_c0 <= 0.0) {
            fVar30 = (fVar12 * param_1[0x10] + fVar25 * param_1[0x14]) - fVar33;
            fVar31 = (fVar12 * param_1[0x11] + fVar25 * param_1[0x15]) - fVar34;
            fVar32 = (fVar12 * param_1[0x12] + fVar25 * param_1[0x16]) - fVar35;
            param_5 = (fVar12 * param_1[0x13] + fVar25 * param_1[0x17]) - param_4;
          }
          *param_11 = fVar30;
          param_11[1] = fVar31;
          param_11[2] = fVar32;
          param_11[3] = param_5;
        }
        else if ((int)fVar21 < 3) {
          fVar30 = fVar30 + param_1[0x20];
          fVar31 = fVar31 + param_1[0x21];
          fVar32 = fVar32 + param_1[0x22];
          param_5 = param_5 + param_1[0x23];
          *param_12 = fVar30;
          param_12[1] = fVar31;
          param_12[2] = fVar32;
          param_12[3] = param_5;
          if (local_c0 <= 0.0) {
            fVar30 = param_1[0x10] - fVar33;
            fVar31 = param_1[0x11] - fVar34;
            fVar32 = param_1[0x12] - fVar35;
            param_5 = param_1[0x13] - param_4;
          }
          *param_11 = fVar30;
          param_11[1] = fVar31;
          param_11[2] = fVar32;
          param_11[3] = param_5;
        }
        else if ((int)fVar21 - 3U < 2) {
          ClosestPoint::GetBaryCentricCoordinates
                    (*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),
                     *(undefined8 *)(param_1 + 4),*(undefined8 *)(param_1 + 6),
                     *(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),&local_4c,&local_48,
                     &local_44);
          fVar30 = param_1[0x20] * local_4c + param_1[0x24] * local_48 + param_1[0x28] * local_44 +
                   fVar30;
          fVar31 = param_1[0x21] * local_4c + param_1[0x25] * local_48 + param_1[0x29] * local_44 +
                   fVar31;
          fVar32 = param_1[0x22] * local_4c + param_1[0x26] * local_48 + param_1[0x2a] * local_44 +
                   fVar32;
          param_5 = param_1[0x23] * local_4c + param_1[0x27] * local_48 + param_1[0x2b] * local_44 +
                    param_5;
          *param_12 = fVar30;
          param_12[1] = fVar31;
          param_12[2] = fVar32;
          param_12[3] = param_5;
          if (local_c0 <= 0.0) {
            fVar30 = (local_4c * param_1[0x10] + local_48 * param_1[0x14] + local_44 * param_1[0x18]
                     ) - fVar33;
            fVar31 = (local_4c * param_1[0x11] + local_48 * param_1[0x15] + local_44 * param_1[0x19]
                     ) - fVar34;
            fVar32 = (local_4c * param_1[0x12] + local_48 * param_1[0x16] + local_44 * param_1[0x1a]
                     ) - fVar35;
            param_5 = (local_4c * param_1[0x13] + local_48 * param_1[0x17] +
                      local_44 * param_1[0x1b]) - param_4;
          }
          *param_11 = fVar30;
          param_11[1] = fVar31;
          param_11[2] = fVar32;
          param_11[3] = param_5;
        }
      }
      if (fVar24 <= 0.0) {
        fStack_170 = fStack_b0;
        fStack_16c = fStack_ac;
        local_178 = (float)local_b8._0_4_;
        fStack_174 = (float)local_b8._4_4_;
      }
      *param_13 = 0.0 - local_178;
      param_13[1] = 0.0 - fStack_174;
      param_13[2] = 0.0 - fStack_170;
      param_13[3] = 0.0 - fStack_16c;
      *param_10 = local_c0;
      bVar7 = true;
LAB_0010a84c:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (fVar13 < *param_10) {
      local_c8 = 3.4028235e+38;
      bVar7 = true;
      fStack_15c = (float)((ulong)param_2 >> 0x20);
      fVar27 = fVar13 * (float)param_1_00;
      fVar28 = fVar13 * fVar21;
      fVar29 = fVar13 * (float)param_2;
      fStack_15c = fVar13 * fStack_15c;
      local_bc = (param_3 + fVar24) * (param_3 + fVar24);
      local_c0 = fVar13;
      goto LAB_0010a47d;
    }
  }
  bVar7 = false;
  goto LAB_0010a84c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool JPH::GJKClosestPoint::CastRay<JPH::ConvexShape::Support>(JPH::Vec3, JPH::Vec3, float,
   JPH::ConvexShape::Support const&, float&) */

bool JPH::GJKClosestPoint::CastRay<JPH::ConvexShape::Support>
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float param_5,float *param_6,long *param_7,float *param_8)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_60;
  uint local_44;
  long local_40;
  
  bVar11 = false;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar17 = *param_7;
  param_6[0x30] = 0.0;
  auVar26 = (**(code **)(lVar17 + 0x10))(0,0,param_7);
  local_b8._0_4_ = (float)param_1;
  fVar7 = (float)local_b8;
  local_b8._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar8 = local_b8._4_4_;
  uStack_b0._0_4_ = (float)param_2;
  fVar9 = (float)uStack_b0;
  uStack_b0._4_4_ = (float)((ulong)param_2 >> 0x20);
  fVar10 = uStack_b0._4_4_;
  local_60 = 0.0;
  local_98._0_4_ = auVar26._0_4_;
  local_98._4_4_ = auVar26._4_4_;
  uStack_90._0_4_ = auVar26._8_4_;
  uStack_90._4_4_ = auVar26._12_4_;
  local_98 = CONCAT44(local_b8._4_4_ - local_98._4_4_,(float)local_b8 - (float)local_98);
  uStack_90 = CONCAT44(uStack_b0._4_4_ - uStack_90._4_4_,(float)uStack_b0 - (float)uStack_90);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = local_98;
  local_98._0_4_ = 3.4028235e+38;
  fVar23 = (float)local_b8;
  fVar24 = local_b8._4_4_;
  fVar25 = (float)uStack_b0;
  fVar21 = uStack_b0._4_4_;
LAB_0010aef9:
  do {
    auVar27 = (**(code **)(*param_7 + 0x10))(auVar26._0_8_,uStack_90,param_7);
    local_b8._0_4_ = auVar27._0_4_;
    fVar12 = (float)local_b8;
    local_b8._4_4_ = auVar27._4_4_;
    fVar2 = local_b8._4_4_;
    uStack_b0._0_4_ = auVar27._8_4_;
    fVar3 = (float)uStack_b0;
    uStack_b0._4_4_ = auVar27._12_4_;
    fVar4 = uStack_b0._4_4_;
    fVar18 = (fVar25 - (float)uStack_b0) * (float)uStack_90 +
             (fVar24 - local_b8._4_4_) * auVar26._4_4_ +
             (fVar23 - (float)local_b8) * auVar26._0_4_ + 0.0;
    if (0.0 < fVar18) {
      fVar24 = (float)((ulong)param_3 >> 0x20);
      fVar23 = (float)uStack_90 * (float)param_4 +
               auVar26._4_4_ * fVar24 + auVar26._0_4_ * (float)param_3 + 0.0;
      if (fVar23 < 0.0) {
        fVar21 = local_60 - fVar18 / fVar23;
        bVar11 = local_60 == fVar21;
        local_60 = fVar21;
        if (bVar11) goto LAB_0010b164;
        if (fVar21 < *param_8) {
          local_98._0_4_ = 3.4028235e+38;
          bVar11 = true;
          fStack_9c = (float)((ulong)param_4 >> 0x20);
          fVar23 = fVar21 * (float)param_3 + fVar7;
          fVar24 = fVar21 * fVar24 + fVar8;
          fVar25 = fVar21 * (float)param_4 + fVar9;
          fVar21 = fVar21 * fStack_9c + fVar10;
          goto LAB_0010af78;
        }
      }
      bVar11 = false;
      goto LAB_0010b16e;
    }
LAB_0010af78:
    lVar17 = (long)(int)param_6[0x30];
    fVar18 = (float)((int)param_6[0x30] + 1);
    pfVar13 = param_6 + lVar17 * 4 + 0x10;
    *pfVar13 = (float)local_b8;
    pfVar13[1] = local_b8._4_4_;
    pfVar13[2] = (float)uStack_b0;
    pfVar13[3] = uStack_b0._4_4_;
    param_6[0x30] = fVar18;
    if ((int)fVar18 < 1) {
LAB_0010b155:
      local_98._0_4_ = _LC14;
      if (!bVar11) goto LAB_0010b164;
      param_6[0x10] = fVar12;
      param_6[0x11] = fVar2;
      param_6[0x12] = fVar3;
      param_6[0x13] = fVar4;
      bVar11 = false;
      param_6[0x30] = 1.4013e-45;
      local_b8 = CONCAT44(fVar24 - fVar2,fVar23 - fVar12);
      uStack_b0 = CONCAT44(fVar21 - fVar4,fVar25 - fVar3);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = local_b8;
      uStack_90 = uStack_b0;
      goto LAB_0010aef9;
    }
    pfVar13 = param_6;
    do {
      pfVar14 = pfVar13 + 4;
      *pfVar13 = fVar23 - pfVar13[0x10];
      pfVar13[1] = fVar24 - pfVar13[0x11];
      pfVar13[2] = fVar25 - pfVar13[0x12];
      pfVar13[3] = fVar21 - pfVar13[0x13];
      pfVar13 = pfVar14;
    } while (pfVar14 != param_6 + lVar17 * 4 + 4);
    if (fVar18 == 4.2039e-45) {
      auVar27 = ClosestPoint::GetClosestPointOnTriangle<false>
                          (*(ulong *)param_6,*(ulong *)(param_6 + 2),*(ulong *)(param_6 + 4),
                           *(ulong *)(param_6 + 6),*(ulong *)(param_6 + 8),*(ulong *)(param_6 + 10),
                           &local_44);
      uStack_b0 = auVar27._8_8_;
      fVar18 = auVar27._8_4_;
      auVar26._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar26._0_8_ = auVar27._0_8_;
      auVar26._12_4_ = (int)((ulong)extraout_XMM0_Qb_00 >> 0x20);
    }
    else if ((int)fVar18 < 4) {
      if (fVar18 == 1.4013e-45) {
        local_44 = 1;
        uStack_b0 = *(ulong *)(param_6 + 2);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulong *)param_6;
        fVar18 = param_6[2];
      }
      else {
        uVar5 = *(ulong *)param_6;
        uVar6 = *(ulong *)(param_6 + 2);
        local_b8 = *(ulong *)(param_6 + 4);
        uStack_b0 = *(ulong *)(param_6 + 6);
        local_88 = (float)uVar5;
        fStack_84 = (float)(uVar5 >> 0x20);
        fStack_80 = (float)uVar6;
        fStack_7c = (float)(uVar6 >> 0x20);
        local_78 = (float)local_b8;
        fStack_74 = (float)(local_b8 >> 0x20);
        fStack_70 = (float)uStack_b0;
        fVar18 = local_78 - local_88;
        fVar19 = fStack_74 - fStack_84;
        fVar20 = fStack_70 - fStack_80;
        fVar22 = fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18 + 0.0;
        if (fVar22 < _LC10) {
          if (fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0 <
              fStack_70 * fStack_70 + fStack_74 * fStack_74 + local_78 * local_78 + 0.0)
          goto LAB_0010b08c;
LAB_0010b3f5:
          local_44 = 2;
        }
        else {
          fVar22 = (float)((uint)(fVar20 * fStack_80 + fVar19 * fStack_84 + fVar18 * local_88 + 0.0)
                          ^ __LC11) / fVar22;
          if (0.0 < fVar22) {
            fVar18 = _LC1 - fVar22;
            if (fVar18 <= 0.0) goto LAB_0010b3f5;
            fStack_6c = (float)(uStack_b0 >> 0x20);
            local_44 = 3;
            local_b8 = CONCAT44(fVar22 * fStack_74 + fVar18 * fStack_84,
                                fVar22 * local_78 + fVar18 * local_88);
            uStack_b0 = CONCAT44(fVar22 * fStack_6c + fVar18 * fStack_7c,
                                 fVar22 * fStack_70 + fVar18 * fStack_80);
          }
          else {
LAB_0010b08c:
            local_44 = 1;
            local_b8 = uVar5;
            uStack_b0 = uVar6;
          }
        }
        auVar26._8_8_ = 0;
        auVar26._0_8_ = local_b8;
        fVar18 = (float)uStack_b0;
      }
    }
    else {
      if (fVar18 != 5.60519e-45) goto LAB_0010b155;
      auVar27 = ClosestPoint::GetClosestPointOnTetrahedron<false>
                          (*(ulong *)param_6,*(ulong *)(param_6 + 2),*(ulong *)(param_6 + 4),
                           *(ulong *)(param_6 + 6),*(ulong *)(param_6 + 8),*(ulong *)(param_6 + 10),
                           *(ulong *)(param_6 + 0xc),*(ulong *)(param_6 + 0xe),&local_44);
      uStack_b0 = auVar27._8_8_;
      fVar18 = auVar27._8_4_;
      auVar26._8_4_ = (int)extraout_XMM0_Qb;
      auVar26._0_8_ = auVar27._0_8_;
      auVar26._12_4_ = (int)((ulong)extraout_XMM0_Qb >> 0x20);
    }
    fVar22 = auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_ + 0.0 + fVar18 * fVar18;
    if ((float)local_98 <= fVar22) goto LAB_0010b155;
    uStack_90 = uStack_b0 & 0xffffffff00000000 | (ulong)(uint)fVar18;
    if (local_44 == 0xf) goto LAB_0010b164;
    lVar16 = 0;
    fVar12 = 0.0;
    uVar1 = local_44 & 1;
    while( true ) {
      if (uVar1 != 0) {
        lVar15 = (long)(int)fVar12;
        fVar12 = (float)((int)fVar12 + 1);
        pfVar13 = param_6 + lVar16 * 4 + 0x10;
        fVar2 = pfVar13[1];
        fVar3 = pfVar13[2];
        fVar4 = pfVar13[3];
        pfVar14 = param_6 + lVar15 * 4 + 0x10;
        *pfVar14 = *pfVar13;
        pfVar14[1] = fVar2;
        pfVar14[2] = fVar3;
        pfVar14[3] = fVar4;
      }
      if (lVar16 == lVar17) break;
      lVar16 = lVar16 + 1;
      uVar1 = 1 << ((byte)lVar16 & 0x1f) & local_44;
    }
    param_6[0x30] = fVar12;
    local_98._0_4_ = fVar22;
    if (fVar22 <= param_5 * param_5) {
LAB_0010b164:
      *param_8 = local_60;
      bVar11 = true;
LAB_0010b16e:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar11;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTriangle<true>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTriangle<true>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int *param_7)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  uint uVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined1 auVar5 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
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
  undefined1 local_78 [8];
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  fVar18 = (float)((ulong)param_6 >> 0x20);
  fVar29 = (float)param_6;
  local_78._0_4_ = (undefined4)param_5;
  local_78._4_4_ = (undefined4)((ulong)param_5 >> 0x20);
  local_58._0_4_ = (float)param_1;
  local_58._4_4_ = (float)((ulong)param_1 >> 0x20);
  uStack_50._0_4_ = (float)param_2;
  local_68 = (float)param_3;
  fStack_64 = (float)((ulong)param_3 >> 0x20);
  fStack_60 = (float)param_4;
  fStack_5c = (float)((ulong)param_4 >> 0x20);
  fVar26 = (float)local_78._0_4_ - local_68;
  fVar27 = (float)local_78._4_4_ - fStack_64;
  fVar28 = fVar29 - fStack_60;
  fVar2 = (fVar29 - (float)uStack_50) * (fVar29 - (float)uStack_50) +
          ((float)local_78._0_4_ - (float)local_58) * ((float)local_78._0_4_ - (float)local_58) +
          0.0 + ((float)local_78._4_4_ - local_58._4_4_) * ((float)local_78._4_4_ - local_58._4_4_);
  fVar30 = fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26 + 0.0;
  iVar1 = -(uint)(fVar30 < fVar2);
  uVar3 = iVar1 >> 0x1f;
  uVar6 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uVar8 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uVar10 = (int)-(uint)(fVar30 < fVar2) >> 0x1f;
  uStack_50._4_4_ = (uint)((ulong)param_2 >> 0x20);
  fVar4 = (float)(local_78._0_4_ & uVar3 | ~uVar3 & (uint)(float)local_58);
  fVar12 = (float)(local_78._4_4_ & uVar6 | ~uVar6 & (uint)local_58._4_4_);
  fVar13 = (float)((uint)fVar29 & uVar8 | ~uVar8 & (uint)(float)uStack_50);
  fVar14 = (float)((uint)fVar18 & uVar10 | ~uVar10 & uStack_50._4_4_);
  fVar15 = local_68 - fVar4;
  fVar16 = fStack_64 - fVar12;
  fVar17 = fStack_60 - fVar13;
  fVar19 = (float)(uVar3 & (uint)(float)local_58 | ~uVar3 & local_78._0_4_);
  fVar21 = (float)(uVar6 & (uint)local_58._4_4_ | ~uVar6 & local_78._4_4_);
  fVar23 = (float)(uVar8 & (uint)(float)uStack_50 | ~uVar8 & (uint)fVar29);
  fVar25 = (float)(uVar10 & uStack_50._4_4_ | ~uVar10 & (uint)fVar18);
  local_58 = CONCAT44(fVar21,fVar19);
  uStack_50 = CONCAT44(fVar25,fVar23);
  fVar20 = fVar19 - fVar4;
  fVar22 = fVar21 - fVar12;
  fVar24 = fVar23 - fVar13;
  fVar2 = fVar22 * fVar15 - fVar16 * fVar20;
  fVar7 = fVar24 * fVar16 - fVar17 * fVar22;
  fVar9 = fVar20 * fVar17 - fVar15 * fVar24;
  fVar31 = fVar2 * fVar2 + fVar9 * fVar9 + fVar7 * fVar7 + 0.0;
  if (fVar31 < _LC43) {
    iVar1 = 4;
    fVar31 = fVar29 * fVar29 +
             (float)local_78._4_4_ * (float)local_78._4_4_ +
             (float)local_78._0_4_ * (float)local_78._0_4_ + 0.0;
    fVar15 = fVar24 * fVar24 + fVar22 * fVar22 + fVar20 * fVar20 + 0.0;
    fVar2 = (float)local_78._0_4_;
    fVar7 = (float)local_78._4_4_;
    uStack_70._0_4_ = fVar29;
    uStack_70._4_4_ = fVar18;
    fVar9 = fVar31;
    if (_LC10 < fVar15) {
      fVar15 = (float)((uint)(fVar24 * fVar13 + fVar12 * fVar22 + fVar20 * fVar4 + 0.0) ^ __LC11) /
               fVar15;
      if (fVar15 < 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = _LC1;
        if (fVar15 <= _LC1) {
          fVar16 = fVar15;
        }
      }
      iVar1 = 5;
      fVar2 = fVar16 * fVar20 + fVar4;
      fVar7 = fVar16 * fVar22 + fVar12;
      uStack_70._0_4_ = fVar16 * fVar24 + fVar13;
      fVar9 = (float)uStack_70 * (float)uStack_70 + fVar2 * fVar2 + 0.0 + fVar7 * fVar7;
      uStack_70._4_4_ = fVar16 * (fVar25 - fVar14) + fVar14;
      if (fVar31 <= fVar9) {
        iVar1 = 4;
        fVar2 = (float)local_78._0_4_;
        fVar7 = (float)local_78._4_4_;
        uStack_70._0_4_ = fVar29;
        uStack_70._4_4_ = fVar18;
        fVar9 = fVar31;
      }
    }
    if (_LC10 < fVar30) {
      fVar30 = (float)((uint)(fVar28 * fStack_60 + fVar27 * fStack_64 + fVar26 * local_68 + 0.0) ^
                      __LC11) / fVar30;
      if (fVar30 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _LC1;
        if (fVar30 <= _LC1) {
          fVar4 = fVar30;
        }
      }
      local_68 = fVar4 * fVar26 + local_68;
      fStack_64 = fVar4 * fVar27 + fStack_64;
      fStack_60 = fVar4 * fVar28 + fStack_60;
      if (fStack_60 * fStack_60 + local_68 * local_68 + 0.0 + fStack_64 * fStack_64 < fVar9) {
        iVar1 = 6;
        fVar2 = local_68;
        fVar7 = fStack_64;
        uStack_70._0_4_ = fStack_60;
        uStack_70._4_4_ = fVar4 * (fVar18 - fStack_5c) + fStack_5c;
      }
    }
    *param_7 = iVar1;
    local_78._4_4_ = fVar7;
    local_78._0_4_ = fVar2;
    return _local_78;
  }
  fVar29 = (0.0 - fVar13) * fVar17 + fVar16 * (0.0 - fVar12) + fVar15 * (0.0 - fVar4) + 0.0;
  fVar30 = (0.0 - fVar13) * fVar24 + (0.0 - fVar12) * fVar22 + (0.0 - fVar4) * fVar20 + 0.0;
  if ((fVar29 <= 0.0) && (fVar30 <= 0.0)) {
    local_78._4_4_ = fVar12;
    local_78._0_4_ = fVar4;
    uStack_70._0_4_ = fVar13;
    uStack_70._4_4_ = fVar14;
    *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 4;
    return _local_78;
  }
  fVar26 = (0.0 - fStack_60) * fVar17 + fVar16 * (0.0 - fStack_64) + (0.0 - local_68) * fVar15 + 0.0
  ;
  fVar18 = (0.0 - fStack_60) * fVar24 + (0.0 - fStack_64) * fVar22 + (0.0 - local_68) * fVar20 + 0.0
  ;
  if (fVar26 < 0.0) {
    if ((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) goto LAB_0010ba5e;
  }
  else {
    if (fVar18 <= fVar26) {
      *param_7 = 2;
      uStack_70 = param_4;
      local_78 = (undefined1  [8])param_3;
      return _local_78;
    }
    if (((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) && (fVar26 == 0.0)) {
LAB_0010ba5e:
      *param_7 = (-(uint)(iVar1 == 0) & 0xfffffffd) + 6;
      fVar29 = fVar29 / (fVar29 - fVar26);
      local_78._4_4_ = fVar29 * fVar16 + fVar12;
      local_78._0_4_ = fVar29 * fVar15 + fVar4;
      uStack_70._0_4_ = fVar29 * fVar17 + fVar13;
      uStack_70._4_4_ = fVar29 * (fStack_5c - fVar14) + fVar14;
      return _local_78;
    }
  }
  fVar27 = (0.0 - fVar23) * fVar24 + fVar22 * (0.0 - fVar21) + fVar20 * (0.0 - fVar19) + 0.0;
  fVar15 = fVar17 * (0.0 - fVar23) + fVar16 * (0.0 - fVar21) + fVar15 * (0.0 - fVar19) + 0.0;
  if (fVar27 < 0.0) {
    if ((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) goto LAB_0010bc14;
  }
  else {
    if (fVar15 <= fVar27) {
      uStack_70 = uStack_50;
      local_78 = (undefined1  [8])local_58;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_78;
    }
    if (((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) && (fVar27 == 0.0)) {
LAB_0010bc14:
      *param_7 = 5;
      fVar30 = fVar30 / (fVar30 - fVar27);
      local_78._4_4_ = fVar30 * fVar22 + fVar12;
      local_78._0_4_ = fVar30 * fVar20 + fVar4;
      uStack_70._0_4_ = fVar30 * fVar24 + fVar13;
      uStack_70._4_4_ = fVar30 * (fVar25 - fVar14) + fVar14;
      return _local_78;
    }
  }
  if (((fVar26 * fVar27 <= fVar18 * fVar15) && (fVar18 = fVar18 - fVar26, 0.0 <= fVar18)) &&
     (0.0 <= fVar15 - fVar27)) {
    fVar18 = fVar18 / ((fVar15 - fVar27) + fVar18);
    *param_7 = (-(uint)(iVar1 == 0) & 3) + 3;
    local_78._4_4_ = (fVar21 - fStack_64) * fVar18 + fStack_64;
    local_78._0_4_ = (fVar19 - local_68) * fVar18 + local_68;
    uStack_70._0_4_ = (fVar23 - fStack_60) * fVar18 + fStack_60;
    uStack_70._4_4_ = (fVar25 - fStack_5c) * fVar18 + fStack_5c;
    return _local_78;
  }
  *param_7 = 7;
  fVar31 = fVar31 * _LC42;
  fVar30 = (fVar13 + fStack_60 + fVar23) * fVar2 +
           (fVar12 + fStack_64 + fVar21) * fVar9 + (fVar4 + local_68 + fVar19) * fVar7 + 0.0;
  auVar5._0_4_ = fVar7 * fVar30;
  auVar5._4_4_ = fVar9 * fVar30;
  auVar5._8_4_ = fVar2 * fVar30;
  auVar5._12_4_ = fVar2 * fVar30;
  auVar11._4_4_ = fVar31;
  auVar11._0_4_ = fVar31;
  auVar11._8_4_ = fVar31;
  auVar11._12_4_ = fVar31;
  auVar5 = divps(auVar5,auVar11);
  return auVar5;
}



/* JPH::Vec3 JPH::ClosestPoint::GetClosestPointOnTetrahedron<true>(JPH::Vec3, JPH::Vec3, JPH::Vec3,
   JPH::Vec3, unsigned int&) */

undefined1  [16]
JPH::ClosestPoint::GetClosestPointOnTetrahedron<true>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint *param_9)

{
  uint uVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int local_98;
  int local_90;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  auVar6 = OriginOutsideOfTetrahedronPlanes();
  local_98 = auVar6._0_4_;
  local_90 = auVar6._8_4_;
  fVar3 = (float)((ulong)param_1 >> 0x20);
  if (local_98 == 0) {
    uVar1 = 0xf;
    fVar3 = _LC14;
  }
  else {
    local_70 = (float)param_2;
    uVar1 = 1;
    fVar3 = local_70 * local_70 + fVar3 * fVar3 + (float)param_1 * (float)param_1 + 0.0;
    local_80 = param_1;
    local_78 = param_2;
  }
  if (auVar6._0_8_ >> 0x20 != 0) {
    auVar4 = GetClosestPointOnTriangle<true>
                       (param_1,param_2,param_5,param_6,param_7,param_8,&local_24);
    fVar2 = auVar4._8_4_ * auVar4._8_4_ +
            auVar4._4_4_ * auVar4._4_4_ + auVar4._0_4_ * auVar4._0_4_ + 0.0;
    if (fVar2 < fVar3) {
      uVar1 = local_24 * 2 & 0xc | local_24 & 1;
      goto joined_r0x0010bd2d;
    }
  }
  auVar4._8_8_ = local_78;
  auVar4._0_8_ = local_80;
  fVar2 = fVar3;
joined_r0x0010bd2d:
  if (local_90 != 0) {
    auVar5 = GetClosestPointOnTriangle<true>
                       (param_1,param_2,param_3,param_4,param_7,param_8,&local_24);
    fVar3 = auVar5._8_4_ * auVar5._8_4_ +
            auVar5._4_4_ * auVar5._4_4_ + auVar5._0_4_ * auVar5._0_4_ + 0.0;
    if (fVar3 < fVar2) {
      uVar1 = local_24 * 2 & 8 | local_24 & 3;
      fVar2 = fVar3;
      auVar4 = auVar5;
    }
  }
  if ((auVar6._8_8_ >> 0x20 != 0) &&
     (auVar6 = GetClosestPointOnTriangle<true>
                         (param_3,param_4,param_5,param_6,param_7,param_8,&local_24),
     auVar6._8_4_ * auVar6._8_4_ + auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0 <
     fVar2)) {
    uVar1 = local_24 * 2;
    auVar4 = auVar6;
  }
  *param_9 = uVar1;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float JPH::GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support> >(JPH::ConvexShape::Support const&,
   JPH::TransformedConvexObject<JPH::ConvexShape::Support> const&, float, float, JPH::Vec3&,
   JPH::Vec3&, JPH::Vec3&) */

float __thiscall
JPH::GJKClosestPoint::
GetClosestPoints<JPH::ConvexShape::Support,JPH::TransformedConvexObject<JPH::ConvexShape::Support>>
          (GJKClosestPoint *this,Support *param_1,TransformedConvexObject *param_2,float param_3,
          float param_4,Vec3 *param_5,Vec3 *param_6,Vec3 *param_7)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  GJKClosestPoint *pGVar9;
  long lVar10;
  GJKClosestPoint *pGVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_74;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  fVar14 = _LC14;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar13 = *(float *)param_5;
  *(undefined4 *)(this + 0xc0) = 0;
  local_74 = *(float *)(param_5 + 8) * *(float *)(param_5 + 8) +
             *(float *)(param_5 + 4) * *(float *)(param_5 + 4) + fVar13 * fVar13 + 0.0;
  do {
    auVar21 = (**(code **)(*(long *)param_1 + 0x10))
                        (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),param_1);
    fVar13 = 0.0 - *(float *)param_5;
    fVar15 = 0.0 - *(float *)(param_5 + 4);
    fVar16 = 0.0 - *(float *)(param_5 + 8);
    local_a8 = CONCAT44((float)*(undefined8 *)(param_2 + 0x10) * fVar13 +
                        (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar15 +
                        fVar16 * *(float *)(param_2 + 0x18),
                        *(float *)param_2 * fVar13 + *(float *)(param_2 + 4) * fVar15 +
                        fVar16 * *(float *)(param_2 + 8));
    uStack_a0 = CONCAT44(fVar13 * 0.0 + fVar15 * 0.0 + fVar16 * 0.0,
                         (float)*(undefined8 *)(param_2 + 0x20) * fVar13 +
                         (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar15 +
                         fVar16 * (float)*(undefined8 *)(param_2 + 0x28));
    auVar20 = (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(local_a8,uStack_a0);
    fVar17 = auVar20._8_4_;
    local_98 = auVar21._0_4_;
    fStack_94 = auVar21._4_4_;
    fStack_90 = auVar21._8_4_;
    fStack_8c = auVar21._12_4_;
    local_a8._0_4_ = auVar20._0_4_;
    local_a8._4_4_ = auVar20._4_4_;
    fVar13 = fVar17 * *(float *)(param_2 + 0x20) +
             local_a8._4_4_ * *(float *)(param_2 + 0x10) + (float)local_a8 * *(float *)param_2 +
             *(float *)(param_2 + 0x30);
    fVar15 = fVar17 * *(float *)(param_2 + 0x24) +
             local_a8._4_4_ * *(float *)(param_2 + 0x14) + (float)local_a8 * *(float *)(param_2 + 4)
             + *(float *)(param_2 + 0x34);
    fVar16 = fVar17 * *(float *)(param_2 + 0x28) +
             local_a8._4_4_ * *(float *)(param_2 + 0x18) + (float)local_a8 * *(float *)(param_2 + 8)
             + *(float *)(param_2 + 0x38);
    fVar17 = fVar17 * *(float *)(param_2 + 0x2c) +
             local_a8._4_4_ * *(float *)(param_2 + 0x1c) +
             (float)local_a8 * *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x3c);
    local_98 = local_98 - fVar13;
    fStack_94 = fStack_94 - fVar15;
    fStack_90 = fStack_90 - fVar16;
    fVar18 = fStack_90 * *(float *)(param_5 + 8) +
             fStack_94 * *(float *)(param_5 + 4) + *(float *)param_5 * local_98 + 0.0;
    if ((fVar18 < 0.0) && (fVar19 = _LC14, param_4 * local_74 < fVar18 * fVar18)) goto LAB_0010c31a;
    iVar1 = *(int *)(this + 0xc0);
    pGVar9 = this + (long)iVar1 * 0x10;
    iVar12 = iVar1 + 1;
    *(float *)pGVar9 = local_98;
    *(float *)(pGVar9 + 4) = fStack_94;
    *(float *)(pGVar9 + 8) = fStack_90;
    *(float *)(pGVar9 + 0xc) = fStack_8c - fVar17;
    *(undefined1 (*) [16])(pGVar9 + 0x40) = auVar21;
    *(float *)(pGVar9 + 0x80) = fVar13;
    *(float *)(pGVar9 + 0x84) = fVar15;
    *(float *)(pGVar9 + 0x88) = fVar16;
    *(float *)(pGVar9 + 0x8c) = fVar17;
    *(int *)(this + 0xc0) = iVar12;
    if (iVar12 == 3) {
      auVar21 = ClosestPoint::GetClosestPointOnTriangle<true>
                          (*(undefined8 *)this,*(undefined8 *)(this + 8),
                           *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
                           *(undefined8 *)(this + 0x20),&local_44);
      uStack_a0._0_4_ = auVar21._8_4_;
    }
    else if (iVar12 < 4) {
      if (iVar12 == 1) {
        local_44 = 1.4013e-45;
        auVar21 = *(undefined1 (*) [16])this;
        uStack_a0._0_4_ = *(float *)(this + 8);
      }
      else {
        if (iVar12 != 2) goto LAB_0010c810;
        local_a8 = *(undefined8 *)this;
        uStack_a0 = *(undefined8 *)(this + 8);
        uVar5 = *(undefined8 *)(this + 0x10);
        uVar6 = *(undefined8 *)(this + 0x18);
        local_98 = (float)local_a8;
        fStack_94 = (float)((ulong)local_a8 >> 0x20);
        fStack_90 = (float)uStack_a0;
        fStack_8c = (float)((ulong)uStack_a0 >> 0x20);
        local_88 = (float)uVar5;
        fStack_84 = (float)((ulong)uVar5 >> 0x20);
        fStack_80 = (float)uVar6;
        fVar13 = local_88 - local_98;
        fVar16 = fStack_84 - fStack_94;
        fVar17 = fStack_80 - fStack_90;
        fVar15 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13 + 0.0;
        if (fVar15 < _LC10) {
          if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <
              fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0)
          goto LAB_0010c5f7;
LAB_0010c601:
          local_44 = 2.8026e-45;
          local_a8 = uVar5;
          uStack_a0 = uVar6;
        }
        else {
          fVar15 = (float)((uint)(fVar17 * fStack_90 + fVar16 * fStack_94 + fVar13 * local_98 + 0.0)
                          ^ __LC11) / fVar15;
          if (fVar15 <= 0.0) {
LAB_0010c5f7:
            local_44 = 1.4013e-45;
          }
          else {
            fVar13 = _LC1 - fVar15;
            if (fVar13 <= 0.0) goto LAB_0010c601;
            fStack_7c = (float)((ulong)uVar6 >> 0x20);
            local_44 = 4.2039e-45;
            local_a8 = CONCAT44(fVar15 * fStack_84 + fVar13 * fStack_94,
                                fVar15 * local_88 + fVar13 * local_98);
            uStack_a0 = CONCAT44(fVar15 * fStack_7c + fVar13 * fStack_8c,
                                 fVar15 * fStack_80 + fVar13 * fStack_90);
          }
        }
        auVar21._8_8_ = uStack_a0;
        auVar21._0_8_ = local_a8;
      }
    }
    else {
      if (iVar12 != 4) {
LAB_0010c810:
        *(int *)(this + 0xc0) = iVar1;
        fVar19 = local_74;
        goto LAB_0010c31a;
      }
      auVar21 = ClosestPoint::GetClosestPointOnTetrahedron<true>
                          (*(undefined8 *)this,*(undefined8 *)(this + 8),
                           *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
                           *(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                           *(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38),&local_44);
      uStack_a0._0_4_ = auVar21._8_4_;
    }
    fVar19 = (float)uStack_a0 * (float)uStack_a0 +
             auVar21._4_4_ * auVar21._4_4_ + auVar21._0_4_ * auVar21._0_4_ + 0.0;
    if (fVar14 <= fVar19) {
      *(int *)(this + 0xc0) = iVar1;
      iVar12 = iVar1;
      fVar19 = local_74;
LAB_0010c2df:
      if (iVar12 == 2) {
        local_98 = (float)*(undefined8 *)(this + 0x10);
        fStack_94 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
        fStack_90 = (float)*(undefined8 *)(this + 0x18);
        local_a8._0_4_ = (float)*(undefined8 *)this;
        local_a8._4_4_ = (float)((ulong)*(undefined8 *)this >> 0x20);
        uStack_a0._0_4_ = (float)*(undefined8 *)(this + 8);
        fVar14 = local_98 - (float)local_a8;
        fVar15 = fStack_94 - local_a8._4_4_;
        fVar16 = fStack_90 - (float)uStack_a0;
        fVar13 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14 + 0.0;
        if (fVar13 < _LC10) {
          if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <=
              (float)local_a8 * (float)local_a8 + 0.0 + local_a8._4_4_ * local_a8._4_4_ +
              (float)uStack_a0 * (float)uStack_a0) {
            fVar14 = 0.0;
            fVar13 = _LC1;
          }
          else {
            fVar13 = 0.0;
            fVar14 = _LC1;
          }
        }
        else {
          fVar13 = (float)((uint)(fVar16 * (float)uStack_a0 +
                                 fVar15 * local_a8._4_4_ + fVar14 * (float)local_a8 + 0.0) ^ __LC11)
                   / fVar13;
          fVar14 = _LC1 - fVar13;
        }
        fVar15 = *(float *)(this + 0x54);
        fVar16 = *(float *)(this + 0x58);
        fVar17 = *(float *)(this + 0x5c);
        fVar18 = *(float *)(this + 0x44);
        fVar2 = *(float *)(this + 0x48);
        fVar3 = *(float *)(this + 0x4c);
        *(float *)param_6 = *(float *)(this + 0x50) * fVar13 + *(float *)(this + 0x40) * fVar14;
        *(float *)(param_6 + 4) = fVar15 * fVar13 + fVar18 * fVar14;
        *(float *)(param_6 + 8) = fVar16 * fVar13 + fVar2 * fVar14;
        *(float *)(param_6 + 0xc) = fVar17 * fVar13 + fVar3 * fVar14;
        fVar15 = *(float *)(this + 0x94);
        fVar16 = *(float *)(this + 0x98);
        fVar17 = *(float *)(this + 0x9c);
        fVar18 = *(float *)(this + 0x84);
        fVar2 = *(float *)(this + 0x88);
        fVar3 = *(float *)(this + 0x8c);
        *(float *)param_7 = fVar13 * *(float *)(this + 0x90) + fVar14 * *(float *)(this + 0x80);
        *(float *)(param_7 + 4) = fVar13 * fVar15 + fVar14 * fVar18;
        *(float *)(param_7 + 8) = fVar13 * fVar16 + fVar14 * fVar2;
        *(float *)(param_7 + 0xc) = fVar13 * fVar17 + fVar14 * fVar3;
      }
      else if (iVar12 == 3) {
        ClosestPoint::GetBaryCentricCoordinates
                  (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),
                   *(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),
                   *(undefined8 *)(this + 0x28),&local_4c,&local_48,&local_44);
        fVar13 = *(float *)(this + 0x54);
        fVar14 = *(float *)(this + 0x58);
        fVar15 = *(float *)(this + 0x5c);
        fVar16 = *(float *)(this + 0x44);
        fVar17 = *(float *)(this + 0x48);
        fVar18 = *(float *)(this + 0x4c);
        fVar2 = *(float *)(this + 100);
        fVar3 = *(float *)(this + 0x68);
        fVar4 = *(float *)(this + 0x6c);
        *(float *)param_6 =
             *(float *)(this + 0x50) * local_48 + *(float *)(this + 0x40) * local_4c +
             *(float *)(this + 0x60) * local_44;
        *(float *)(param_6 + 4) = fVar13 * local_48 + fVar16 * local_4c + fVar2 * local_44;
        *(float *)(param_6 + 8) = fVar14 * local_48 + fVar17 * local_4c + fVar3 * local_44;
        *(float *)(param_6 + 0xc) = fVar15 * local_48 + fVar18 * local_4c + fVar4 * local_44;
        fVar13 = *(float *)(this + 0x94);
        fVar14 = *(float *)(this + 0x98);
        fVar15 = *(float *)(this + 0x9c);
        fVar16 = *(float *)(this + 0x84);
        fVar17 = *(float *)(this + 0x88);
        fVar18 = *(float *)(this + 0x8c);
        fVar2 = *(float *)(this + 0xa4);
        fVar3 = *(float *)(this + 0xa8);
        fVar4 = *(float *)(this + 0xac);
        *(float *)param_7 =
             local_48 * *(float *)(this + 0x90) + local_4c * *(float *)(this + 0x80) +
             local_44 * *(float *)(this + 0xa0);
        *(float *)(param_7 + 4) = local_48 * fVar13 + local_4c * fVar16 + local_44 * fVar2;
        *(float *)(param_7 + 8) = local_48 * fVar14 + local_4c * fVar17 + local_44 * fVar3;
        *(float *)(param_7 + 0xc) = local_48 * fVar15 + local_4c * fVar18 + local_44 * fVar4;
      }
      else if (iVar12 == 1) {
        uVar5 = *(undefined8 *)(this + 0x48);
        *(undefined8 *)param_6 = *(undefined8 *)(this + 0x40);
        *(undefined8 *)(param_6 + 8) = uVar5;
        uVar5 = *(undefined8 *)(this + 0x88);
        *(undefined8 *)param_7 = *(undefined8 *)(this + 0x80);
        *(undefined8 *)(param_7 + 8) = uVar5;
      }
LAB_0010c31a:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return fVar19;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(long *)param_5 = auVar21._0_8_;
    *(ulong *)(param_5 + 8) = auVar21._8_8_ & 0xffffffff00000000 | (ulong)(uint)(float)uStack_a0;
    if (local_44 == 2.10195e-44) {
      fVar19 = 0.0;
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_0010c2df;
    }
    iVar8 = 0;
    iVar12 = 0;
    pGVar9 = this;
    iVar7 = 0;
    if (((uint)local_44 & 1) == 0) goto joined_r0x0010c3b5;
LAB_0010c37e:
    lVar10 = (long)iVar12;
    uVar5 = *(undefined8 *)(pGVar9 + 8);
    iVar12 = iVar12 + 1;
    pGVar11 = this + lVar10 * 0x10;
    *(undefined8 *)pGVar11 = *(undefined8 *)pGVar9;
    *(undefined8 *)(pGVar11 + 8) = uVar5;
    uVar5 = *(undefined8 *)(pGVar9 + 0x48);
    *(undefined8 *)(pGVar11 + 0x40) = *(undefined8 *)(pGVar9 + 0x40);
    *(undefined8 *)(pGVar11 + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(pGVar9 + 0x88);
    *(undefined8 *)(pGVar11 + 0x80) = *(undefined8 *)(pGVar9 + 0x80);
    *(undefined8 *)(pGVar11 + 0x88) = uVar5;
    iVar7 = iVar8;
joined_r0x0010c3b5:
    if (iVar7 < iVar1) break;
    *(int *)(this + 0xc0) = iVar12;
    if (fVar19 <= param_3 * param_3) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_0010c828;
    }
    fVar13 = *(float *)(this + 8) * *(float *)(this + 8) +
             *(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this + 0.0;
    if (1 < iVar12) {
      pGVar9 = this + 0x10;
      fVar15 = fVar13;
      do {
        pGVar11 = pGVar9 + 0x10;
        fVar13 = *(float *)(pGVar9 + 8) * *(float *)(pGVar9 + 8) +
                 *(float *)pGVar9 * *(float *)pGVar9 + 0.0 +
                 *(float *)(pGVar9 + 4) * *(float *)(pGVar9 + 4);
        if (fVar13 <= fVar15) {
          fVar13 = fVar15;
        }
        pGVar9 = pGVar11;
        fVar15 = fVar13;
      } while (this + (ulong)(iVar12 - 2) * 0x10 + 0x20 != pGVar11);
    }
    if (fVar19 <= fVar13 * _LC39) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
LAB_0010c828:
      fVar19 = 0.0;
      goto LAB_0010c2df;
    }
    *(float *)param_5 = 0.0 - *(float *)param_5;
    *(float *)(param_5 + 4) = 0.0 - *(float *)(param_5 + 4);
    *(float *)(param_5 + 8) = 0.0 - *(float *)(param_5 + 8);
    *(float *)(param_5 + 0xc) = 0.0 - *(float *)(param_5 + 0xc);
    fVar15 = fVar14 * _LC39;
    fVar13 = fVar14 - fVar19;
    fVar14 = fVar19;
    local_74 = fVar19;
    if (fVar13 <= fVar15) goto LAB_0010c2df;
  } while( true );
  pGVar9 = pGVar9 + 0x10;
  iVar8 = iVar7 + 1;
  iVar7 = iVar8;
  if ((1 << ((byte)iVar8 & 0x1f) & (uint)local_44) != 0) goto LAB_0010c37e;
  goto joined_r0x0010c3b5;
}



/* JPH::Vec3
   JPH::EPAPenetrationDepth::SupportPoints::Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >, JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >(JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support> > const&,
   JPH::AddConvexRadius<JPH::ConvexShape::Support> const&, JPH::Vec3, int&) */

undefined1  [16]
JPH::EPAPenetrationDepth::SupportPoints::
Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
          (undefined8 param_1_00,undefined8 param_2_00,uint *param_1,float *param_2,
          undefined8 *param_5,uint *param_6)

{
  float *pfVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  float fVar6;
  undefined1 auVar5 [12];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_58 = (float)param_1_00;
  fVar4 = local_58;
  fStack_54 = (float)((ulong)param_1_00 >> 0x20);
  fVar6 = fStack_54;
  fStack_50 = (float)param_2_00;
  fStack_4c = (float)((ulong)param_2_00 >> 0x20);
  fVar8 = *param_2 * local_58 + param_2[1] * fStack_54 + fStack_50 * param_2[2];
  fVar10 = (float)*(undefined8 *)(param_2 + 4) * local_58 +
           (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) * fStack_54 + fStack_50 * param_2[6]
  ;
  fVar12 = (float)*(undefined8 *)(param_2 + 8) * local_58 +
           (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * fStack_54 +
           fStack_50 * param_2[10];
  fVar14 = local_58 * 0.0 + fStack_54 * 0.0 + fStack_50 * 0.0;
  pcVar3 = *(code **)(*(long *)**(undefined8 **)(param_2 + 0x10) + 0x10);
  fVar7 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8 + 0.0);
  if (fVar7 <= 0.0) {
    auVar5 = (*pcVar3)(CONCAT44(fVar10,fVar8),CONCAT44(fVar14,fVar12));
  }
  else {
    fVar7 = *(float *)(*(undefined8 **)(param_2 + 0x10) + 1) / fVar7;
    auVar15 = (*pcVar3)(CONCAT44(fVar10,fVar8),CONCAT44(fVar14,fVar12));
    local_58 = auVar15._0_4_;
    fStack_54 = auVar15._4_4_;
    auVar5._0_4_ = local_58 + fVar8 * fVar7;
    auVar5._4_4_ = fStack_54 + fVar10 * fVar7;
    auVar5._8_4_ = auVar15._8_4_ + fVar12 * fVar7;
  }
  fVar7 = auVar5._0_4_;
  fVar8 = auVar5._4_4_;
  fVar10 = auVar5._8_4_;
  fVar4 = 0.0 - fVar4;
  fVar6 = 0.0 - fVar6;
  fVar12 = 0.0 - fStack_50;
  fVar14 = 0.0 - fStack_4c;
  fVar9 = fVar7 * *param_2 + fVar8 * param_2[4] + fVar10 * param_2[8] + param_2[0xc];
  fVar11 = fVar7 * param_2[1] + fVar8 * param_2[5] + fVar10 * param_2[9] + param_2[0xd];
  fVar13 = fVar7 * param_2[2] + fVar8 * param_2[6] + fVar10 * param_2[10] + param_2[0xe];
  fVar8 = fVar7 * param_2[3] + fVar8 * param_2[7] + fVar10 * param_2[0xb] + param_2[0xf];
  fVar7 = SQRT(fVar12 * fVar12 + fVar6 * fVar6 + fVar4 * fVar4 + 0.0);
  if (fVar7 <= 0.0) {
    auVar16 = (**(code **)(*(long *)*param_5 + 0x10))(CONCAT44(fVar6,fVar4),CONCAT44(fVar14,fVar12))
    ;
    local_58 = auVar16._0_4_;
    fStack_54 = auVar16._4_4_;
    fStack_50 = auVar16._8_4_;
    fStack_4c = auVar16._12_4_;
  }
  else {
    fVar7 = *(float *)(param_5 + 1) / fVar7;
    auVar16 = (**(code **)(*(long *)*param_5 + 0x10))(CONCAT44(fVar6,fVar4),CONCAT44(fVar14,fVar12))
    ;
    local_58 = auVar16._0_4_;
    fStack_54 = auVar16._4_4_;
    fStack_50 = auVar16._8_4_;
    fStack_4c = auVar16._12_4_;
    local_58 = local_58 + fVar7 * fVar4;
    fStack_54 = fStack_54 + fVar7 * fVar6;
    fStack_50 = fStack_50 + fVar7 * fVar12;
    fStack_4c = fStack_4c + fVar7 * fVar14;
  }
  fVar4 = fVar9 - local_58;
  fVar6 = fVar11 - fStack_54;
  fVar7 = fVar13 - fStack_50;
  fVar10 = fVar8 - fStack_4c;
  *param_6 = *param_1;
  uVar2 = *param_1;
  auVar16._12_4_ = fVar10;
  auVar16._8_4_ = fVar7;
  *param_1 = uVar2 + 1;
  pfVar1 = (float *)(param_1 + (ulong)uVar2 * 4 + 4);
  *pfVar1 = fVar4;
  pfVar1[1] = fVar6;
  pfVar1[2] = fVar7;
  pfVar1[3] = fVar10;
  uVar2 = *param_6;
  pfVar1 = (float *)(param_1 + (long)(int)uVar2 * 4 + 0x404);
  *pfVar1 = local_58;
  pfVar1[1] = fStack_54;
  pfVar1[2] = fStack_50;
  pfVar1[3] = fStack_4c;
  auVar16._4_4_ = fVar6;
  auVar16._0_4_ = fVar4;
  pfVar1 = (float *)(param_1 + (long)(int)uVar2 * 4 + 0x204);
  *pfVar1 = fVar9;
  pfVar1[1] = fVar11;
  pfVar1[2] = fVar13;
  pfVar1[3] = fVar8;
  return auVar16;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* bool 
   JPH::EPAPenetrationDepth::GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >, JPH::AddConvexRadius<JPH::ConvexShape::Support>
   >(JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support> > const&,
   JPH::AddConvexRadius<JPH::ConvexShape::Support> const&, float, JPH::Vec3&, JPH::Vec3&,
   JPH::Vec3&) */

bool __thiscall
JPH::EPAPenetrationDepth::
GetPenetrationDepthStepEPA<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
          (EPAPenetrationDepth *this,TransformedConvexObject *param_1,AddConvexRadius *param_2,
          float param_3,Vec3 *param_4,Vec3 *param_5,Vec3 *param_6)

{
  ulong uVar1;
  undefined1 *puVar2;
  EPAConvexHullBuilder *this_00;
  long *plVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float *pfVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  undefined1 *puVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  Triangle *pTVar28;
  Triangle *pTVar29;
  undefined1 (*pauVar30) [16];
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 extraout_XMM0_Qb;
  float fVar35;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  float fVar36;
  float fVar42;
  float fVar44;
  undefined1 auVar37 [12];
  undefined1 auVar38 [16];
  uint uVar41;
  uint uVar43;
  uint uVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 local_8030 [32768];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar23 = puVar2;
    *(undefined8 *)(puVar23 + -0x1000) = *(undefined8 *)(puVar23 + -0x1000);
    puVar2 = puVar23 + -0x1000;
  } while (puVar23 + -0x1000 != local_8030);
  uVar24 = *(uint *)(this + 0xc0);
  iVar22 = uVar24 << 4;
  *(Vec3 **)(puVar23 + -0x1498) = param_5;
  *(Vec3 **)(puVar23 + -0x1490) = param_6;
  puVar2 = puVar23 + -0x1058;
  *(AddConvexRadius **)(puVar23 + -0x14b8) = param_2;
  *(Vec3 **)(puVar23 + -0x14a0) = param_4;
  *(float *)(puVar23 + -0x14a4) = param_3;
  *(undefined8 *)(puVar23 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar23 + -0x14e0) = 0x10cb9e;
  __memcpy_chk(puVar23 + -0x1048,this,iVar22,0x1800);
  *(undefined8 *)(puVar23 + -0x14e0) = 0x10cbb7;
  __memcpy_chk(puVar23 + -0x848,this + 0x40,iVar22,0x1000);
  *(undefined8 *)(puVar23 + -0x14e0) = 0x10cbd3;
  __memcpy_chk(puVar23 + -0x48,this + 0x80,iVar22,0x800);
  *(uint *)(puVar23 + -0x1058) = uVar24;
  if (uVar24 == 1) {
    uVar7 = *(undefined8 *)(puVar23 + -0x14b8);
    *(undefined4 *)(puVar23 + -0x1058) = 0;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d3d3;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (0x3f80000000000000,0,puVar2,param_1,uVar7,puVar23 + -0x1478);
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d3f0;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (0xbf800000bf800000,0xbf800000bf800000,puVar2,param_1,uVar7,puVar23 + -0x1474);
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d417;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (0xbf8000003f800000,0xbf800000bf800000,puVar2,param_1,uVar7,puVar23 + -0x1470);
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d448;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (0xbf80000000000000,0x3f8000003f800000,puVar2,param_1,uVar7,puVar23 + -0x146c);
    uVar24 = *(uint *)(puVar23 + -0x1058);
  }
  else if (uVar24 == 2) {
    auVar54._0_4_ = *(float *)(puVar23 + -0x1038) - *(float *)(puVar23 + -0x1048);
    auVar54._4_4_ = *(float *)(puVar23 + -0x1034) - *(float *)(puVar23 + -0x1044);
    auVar54._8_4_ = *(float *)(puVar23 + -0x1030) - *(float *)(puVar23 + -0x1040);
    auVar54._12_4_ = *(float *)(puVar23 + -0x102c) - *(float *)(puVar23 + -0x103c);
    auVar38._0_4_ =
         SQRT(auVar54._8_4_ * auVar54._8_4_ +
              auVar54._4_4_ * auVar54._4_4_ + auVar54._0_4_ * auVar54._0_4_ + 0.0);
    auVar38._4_4_ = auVar38._0_4_;
    auVar38._8_4_ = auVar38._0_4_;
    auVar38._12_4_ = auVar38._0_4_;
    auVar54 = divps(auVar54,auVar38);
    uVar24 = (__LC74 << 0x1f) >> 0x1f;
    uVar41 = (_UNK_0010e7b4 << 0x1f) >> 0x1f;
    uVar43 = (_UNK_0010e7b8 << 0x1f) >> 0x1f;
    uVar45 = (_UNK_0010e7bc << 0x1f) >> 0x1f;
    fVar35 = auVar54._0_4_;
    fVar31 = auVar54._4_4_;
    fVar46 = auVar54._8_4_;
    *(undefined1 (*) [16])(puVar23 + -0x14d8) = auVar54;
    *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
    *(ulong *)(puVar23 + -0x14d0) =
         *(ulong *)(puVar23 + -0x14d0) & 0xffffffff00000000 | (ulong)(uint)fVar46;
    fVar32 = (float)(__LC71 & ((uVar24 & __LC94 | ~uVar24 & (uint)((float)__LC74 + __LC86)) ^
                              __LC70 & __LC74 << 0x1e ^ __LC74 << 0x1f) |
                    ~__LC71 & (uint)((float)(((uint)((float)__LC74 + __LC86) & uVar24 |
                                             ~uVar24 & __LC94) ^ (__LC69 ^ __LC74 << 0x1e) & __LC70)
                                    * *(float *)(puVar23 + -0x14d8)));
    fVar34 = (float)(_UNK_0010e7a4 &
                     ((uVar41 & _UNK_0010e7d4 |
                      ~uVar41 & (uint)((float)_UNK_0010e7b4 + _UNK_0010e7c4)) ^
                     _UNK_0010e794 & _UNK_0010e7b4 << 0x1e ^ _UNK_0010e7b4 << 0x1f) |
                    ~_UNK_0010e7a4 &
                    (uint)((float)(((uint)((float)_UNK_0010e7b4 + _UNK_0010e7c4) & uVar41 |
                                   ~uVar41 & _UNK_0010e7d4) ^
                                  (_UNK_0010e784 ^ _UNK_0010e7b4 << 0x1e) & _UNK_0010e794) *
                          *(float *)(puVar23 + -0x14d4)));
    fVar36 = (float)((uint)_LC40 &
                     ((uVar43 & _UNK_0010e7d8 |
                      ~uVar43 & (uint)((float)_UNK_0010e7b8 + _UNK_0010e7c8)) ^
                     _UNK_0010e798 & _UNK_0010e7b8 << 0x1e ^ _UNK_0010e7b8 << 0x1f) |
                    ~(uint)_LC40 &
                    (uint)((float)(((uint)((float)_UNK_0010e7b8 + _UNK_0010e7c8) & uVar43 |
                                   ~uVar43 & _UNK_0010e7d8) ^
                                  (_UNK_0010e788 ^ _UNK_0010e7b8 << 0x1e) & _UNK_0010e798) *
                          *(float *)(puVar23 + -0x14d0)));
    fVar42 = (float)(_LC40._4_4_ &
                     ((uVar45 & _UNK_0010e7dc |
                      ~uVar45 & (uint)((float)_UNK_0010e7bc + _UNK_0010e7cc)) ^
                     _UNK_0010e79c & _UNK_0010e7bc << 0x1e ^ _UNK_0010e7bc << 0x1f) |
                    ~_LC40._4_4_ &
                    (uint)((float)(((uint)((float)_UNK_0010e7bc + _UNK_0010e7cc) & uVar45 |
                                   ~uVar45 & _UNK_0010e7dc) ^
                                  (_UNK_0010e78c ^ _UNK_0010e7bc << 0x1e) & _UNK_0010e79c) *
                          *(float *)(puVar23 + -0x14cc)));
    fVar48 = fVar32 + fVar32;
    fVar52 = fVar34 + fVar34;
    fVar53 = (fVar36 + fVar36) * fVar36;
    fVar44 = (fVar36 + fVar36) * fVar42;
    fVar33 = fVar36 * fVar52 - fVar48 * fVar42;
    fVar49 = fVar48 * fVar42 + fVar36 * fVar52;
    fVar50 = fVar48 * fVar36 + fVar52 * fVar42;
    fVar51 = fVar48 * fVar36 - fVar52 * fVar42;
    fVar36 = (_LC1 - fVar32 * fVar48) - fVar52 * fVar34;
    fVar42 = fVar34 * fVar48 - fVar44;
    fVar44 = fVar34 * fVar48 + fVar44;
    fVar34 = (_LC1 - fVar52 * fVar34) - fVar53;
    fVar32 = (_LC1 - fVar53) - fVar32 * fVar48;
    if ((float)((uint)fVar31 & _LC12) < (float)(_LC12 & (uint)fVar35)) {
      auVar47._4_4_ = 0;
      auVar47._0_4_ = fVar46;
      auVar47._12_4_ = (uint)fVar35 ^ __LC11;
      auVar47._8_4_ = (uint)fVar35 ^ __LC11;
      auVar40._0_4_ = SQRT(fVar35 * fVar35 + fVar46 * fVar46);
      auVar40._4_4_ = auVar40._0_4_;
      auVar40._8_4_ = auVar40._0_4_;
      auVar40._12_4_ = auVar40._0_4_;
      auVar54 = divps(auVar47,auVar40);
      *(undefined1 (*) [16])(puVar23 + -0x14c8) = auVar54;
    }
    else {
      auVar10._8_4_ = (uint)fVar31 ^ __LC11;
      auVar10._4_4_ = (uint)fVar31 ^ __LC11;
      auVar10._0_4_ = fVar46;
      auVar10._12_4_ = 0;
      auVar39._0_4_ = SQRT(fVar31 * fVar31 + fVar46 * fVar46);
      auVar39._4_4_ = auVar39._0_4_;
      auVar39._8_4_ = auVar39._0_4_;
      auVar39._12_4_ = auVar39._0_4_;
      auVar54 = divps(auVar10 << 0x20,auVar39);
      *(undefined1 (*) [16])(puVar23 + -0x14c8) = auVar54;
    }
    fVar35 = *(float *)(puVar23 + -0x14c4);
    fVar31 = *(float *)(puVar23 + -0x14c8);
    uVar7 = *(undefined8 *)(puVar23 + -0x14b8);
    fVar46 = *(float *)(puVar23 + -0x14c0);
    fVar48 = fVar35 * fVar32 + fVar31 * fVar44 + fVar46 * fVar33 + _UNK_0010e674;
    *(float *)(puVar23 + -0x14d8) = fVar35 * fVar42 + fVar31 * fVar34 + fVar46 * fVar50 + __LC0;
    *(float *)(puVar23 + -0x14d4) = fVar48;
    *(float *)(puVar23 + -0x14d0) =
         fVar35 * fVar49 + fVar31 * fVar51 + fVar46 * fVar36 + _UNK_0010e678;
    *(float *)(puVar23 + -0x14cc) = fVar35 * 0.0 + fVar31 * 0.0 + fVar46 * 0.0 + _LC1;
    fVar35 = *(float *)(puVar23 + -0x14d8);
    fVar31 = *(float *)(puVar23 + -0x14d0);
    *(float *)(puVar23 + -0x1488) = fVar34 * fVar35 + fVar48 * fVar42 + fVar31 * fVar50 + __LC0;
    *(float *)(puVar23 + -0x1484) =
         fVar44 * fVar35 + fVar48 * fVar32 + fVar31 * fVar33 + _UNK_0010e674;
    *(float *)(puVar23 + -0x1480) =
         fVar51 * fVar35 + fVar48 * fVar49 + fVar31 * fVar36 + _UNK_0010e678;
    *(float *)(puVar23 + -0x147c) = fVar35 * 0.0 + fVar48 * 0.0 + fVar31 * 0.0 + _LC1;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d34a;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (*(undefined8 *)(puVar23 + -0x14c8),*(undefined8 *)(puVar23 + -0x14c0),puVar2,param_1,
               uVar7,puVar23 + -0x1474);
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d368;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (*(undefined8 *)(puVar23 + -0x14d8),*(undefined8 *)(puVar23 + -0x14d0),puVar2,param_1,
               uVar7,puVar23 + -0x1470);
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d387;
    SupportPoints::
    Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
              (*(undefined8 *)(puVar23 + -0x1488),*(undefined8 *)(puVar23 + -0x1480),puVar2,param_1,
               uVar7,puVar23 + -0x146c);
    uVar24 = *(uint *)(puVar23 + -0x1058);
  }
  this_00 = (EPAConvexHullBuilder *)(puVar23 + 0x7b8);
  *(undefined1 **)(puVar23 + 0x67d8) = puVar2;
  *(undefined8 *)(puVar23 + 0x67c8) = 0;
  *(undefined4 *)(puVar23 + 0x67d0) = 0;
  *(undefined4 *)(puVar23 + 0x67e0) = 0;
  *(undefined8 *)(puVar23 + -0x14e0) = 0x10cc38;
  EPAConvexHullBuilder::Initialize(this_00,0,1,2);
  uVar16 = (ulong)*(uint *)(puVar23 + 0x67e0);
  uVar20 = uVar16;
  if (3 < uVar24) {
    pauVar30 = (undefined1 (*) [16])(puVar23 + -0x1018);
    *(TransformedConvexObject **)(puVar23 + -0x14d8) = param_1;
    uVar24 = 3;
    plVar3 = (long *)(puVar23 + 0x67e8);
    do {
      auVar54 = *pauVar30;
      if (uVar20 != 0) {
        pTVar28 = (Triangle *)0x0;
        fVar35 = 0.0;
        plVar19 = plVar3;
LAB_0010ccb5:
        do {
          pTVar29 = (Triangle *)*plVar19;
          if (pTVar29[0x5e] == (Triangle)0x0) {
            fVar32 = *(float *)(pTVar29 + 0x30);
            fVar33 = *(float *)(pTVar29 + 0x34);
            fVar34 = *(float *)(pTVar29 + 0x38);
            fVar31 = (auVar54._8_4_ - *(float *)(pTVar29 + 0x48)) * fVar34 +
                     (auVar54._4_4_ - *(float *)(pTVar29 + 0x44)) * fVar33 +
                     (auVar54._0_4_ - *(float *)(pTVar29 + 0x40)) * fVar32 + 0.0;
            if (0.0 < fVar31) {
              fVar32 = (fVar31 * fVar31) /
                       (fVar34 * fVar34 + fVar33 * fVar33 + fVar32 * fVar32 + 0.0);
              if (fVar35 < fVar32) {
                pTVar28 = pTVar29;
                fVar35 = fVar32;
              }
              plVar19 = plVar19 + 1;
              if (plVar3 + uVar20 == plVar19) break;
              goto LAB_0010ccb5;
            }
          }
          plVar19 = plVar19 + 1;
        } while (plVar3 + uVar20 != plVar19);
        if (pTVar28 != (Triangle *)0x0) {
          *(undefined4 *)(puVar23 + -0x1468) = 0;
          *(undefined8 *)(puVar23 + -0x14e0) = 0x10cd65;
          cVar14 = EPAConvexHullBuilder::AddPoint
                             (this_00,pTVar28,uVar24,_LC14,(StaticArray *)(puVar23 + -0x1468));
          if (cVar14 == '\0') goto LAB_0010cf40;
          uVar16 = (ulong)*(uint *)(puVar23 + 0x67e0);
          uVar20 = uVar16;
        }
      }
      uVar24 = uVar24 + 1;
      pauVar30 = pauVar30 + 1;
    } while (uVar24 < *(uint *)(puVar23 + -0x1058));
    param_1 = *(TransformedConvexObject **)(puVar23 + -0x14d8);
  }
  uVar7 = *(undefined8 *)(puVar23 + -0x14b8);
  do {
    while( true ) {
      pTVar28 = *(Triangle **)(puVar23 + 0x67e8);
      uVar1 = uVar20 * 8;
      lVar18 = *(long *)(puVar23 + uVar1 + 0x67e0);
      lVar25 = ((long)uVar1 >> 3) + -1;
      if (pTVar28[0x5e] == (Triangle)0x0) break;
      *(Triangle **)(puVar23 + uVar1 + 0x67e0) = pTVar28;
      *(long *)(puVar23 + 0x67e8) = lVar18;
      if (1 < lVar25) {
        fVar35 = *(float *)(lVar18 + 0x50);
        lVar17 = 1;
        lVar26 = 0;
        lVar27 = 0;
        do {
          fVar32 = *(float *)(*(long *)(puVar23 + lVar17 * 8 + 0x67e8) + 0x50);
          lVar26 = lVar26 + 2;
          if (fVar35 <= fVar32) {
            if ((lVar25 <= lVar26) ||
               (lVar21 = lVar26,
               fVar35 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
               fVar35 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) break;
          }
          else {
            lVar21 = lVar17;
            if ((lVar26 < lVar25) &&
               (lVar21 = lVar26,
               fVar32 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
               fVar32 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) {
              lVar21 = lVar17;
            }
          }
          if (lVar21 == lVar27) break;
          *(long *)(puVar23 + lVar27 * 8 + 0x67e8) = *(long *)(puVar23 + lVar21 * 8 + 0x67e8);
          lVar26 = lVar21 * 2;
          *(long *)(puVar23 + lVar21 * 8 + 0x67e8) = lVar18;
          lVar17 = lVar26 + 1;
          lVar27 = lVar21;
        } while (lVar17 < lVar25);
      }
      iVar22 = (int)uVar16 + -1;
      *(int *)(puVar23 + 0x67e0) = iVar22;
      if (iVar22 == 0) goto LAB_0010cf40;
      *(undefined8 *)pTVar28 = *(undefined8 *)(puVar23 + 0x67c8);
      uVar16 = (ulong)*(uint *)(puVar23 + 0x67e0);
      *(Triangle **)(puVar23 + 0x67c8) = pTVar28;
      uVar20 = (ulong)*(uint *)(puVar23 + 0x67e0);
    }
    if (0.0 <= *(float *)(pTVar28 + 0x50)) {
      pTVar29 = (Triangle *)0x0;
      fVar35 = _LC14;
      break;
    }
    *(Triangle **)(puVar23 + uVar1 + 0x67e0) = pTVar28;
    *(long *)(puVar23 + 0x67e8) = lVar18;
    if (0x10 < uVar1) {
      fVar35 = *(float *)(lVar18 + 0x50);
      lVar17 = 1;
      lVar26 = 0;
      lVar27 = 0;
      do {
        fVar32 = *(float *)(*(long *)(puVar23 + lVar17 * 8 + 0x67e8) + 0x50);
        lVar26 = lVar26 + 2;
        if (fVar35 <= fVar32) {
          if ((lVar25 <= lVar26) ||
             (lVar21 = lVar26,
             fVar35 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
             fVar35 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) break;
        }
        else {
          lVar21 = lVar17;
          if ((lVar26 < lVar25) &&
             (lVar21 = lVar26,
             fVar32 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
             fVar32 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) {
            lVar21 = lVar17;
          }
        }
        if (lVar27 == lVar21) break;
        *(long *)(puVar23 + lVar27 * 8 + 0x67e8) = *(long *)(puVar23 + lVar21 * 8 + 0x67e8);
        lVar26 = lVar21 * 2;
        *(long *)(puVar23 + lVar21 * 8 + 0x67e8) = lVar18;
        lVar17 = lVar26 + 1;
        lVar27 = lVar21;
      } while (lVar17 < lVar25);
    }
    uVar5 = *(undefined8 *)(pTVar28 + 0x30);
    uVar6 = *(undefined8 *)(pTVar28 + 0x38);
    *(int *)(puVar23 + 0x67e0) = (int)uVar16 + -1;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10cea1;
    auVar54 = SupportPoints::
              Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
                        (uVar5,uVar6,puVar2,param_1,uVar7,puVar23 + -0x146c);
    fVar35 = *(float *)(pTVar28 + 0x30);
    *(undefined4 *)(puVar23 + -0x1468) = 0;
    *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
    *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb;
    *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
    if ((*(float *)(puVar23 + -0x14d0) - *(float *)(pTVar28 + 0x48)) * *(float *)(pTVar28 + 0x38) +
        (*(float *)(puVar23 + -0x14d4) - *(float *)(pTVar28 + 0x44)) * *(float *)(pTVar28 + 0x34) +
        fVar35 * (*(float *)(puVar23 + -0x14d8) - *(float *)(pTVar28 + 0x40)) + 0.0 <= 0.0)
    goto LAB_0010cf40;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10cf0d;
    cVar14 = EPAConvexHullBuilder::AddPoint
                       (this_00,pTVar28,*(int *)(puVar23 + -0x146c),_LC14,
                        (StaticArray *)(puVar23 + -0x1468));
    if (cVar14 == '\0') goto LAB_0010cf40;
    *(undefined8 *)pTVar28 = *(undefined8 *)(puVar23 + 0x67c8);
    uVar24 = *(uint *)(puVar23 + 0x67e0);
    uVar16 = (ulong)uVar24;
    *(Triangle **)(puVar23 + 0x67c8) = pTVar28;
    if ((uVar24 == 0) || (0x1f < *(uint *)(puVar23 + -0x1058))) goto LAB_0010cf40;
    uVar20 = (ulong)uVar24;
  } while( true );
LAB_0010d4a0:
  lVar18 = uVar20 * 8;
  lVar25 = *(long *)(puVar23 + lVar18 + 0x67e0);
  lVar17 = (lVar18 >> 3) + -1;
  *(Triangle **)(puVar23 + lVar18 + 0x67e0) = pTVar28;
  *(long *)(puVar23 + 0x67e8) = lVar25;
  if (1 < lVar17) {
    fVar32 = *(float *)(lVar25 + 0x50);
    lVar18 = 1;
    lVar26 = 0;
    lVar27 = 0;
    do {
      fVar33 = *(float *)(*(long *)(puVar23 + lVar18 * 8 + 0x67e8) + 0x50);
      lVar26 = lVar26 + 2;
      if (fVar32 <= fVar33) {
        if ((lVar17 <= lVar26) ||
           (lVar21 = lVar26,
           fVar32 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
           fVar32 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) break;
      }
      else {
        lVar21 = lVar18;
        if ((lVar26 < lVar17) &&
           (lVar21 = lVar26,
           fVar33 < *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50) ||
           fVar33 == *(float *)(*(long *)(puVar23 + lVar26 * 8 + 0x67e8) + 0x50))) {
          lVar21 = lVar18;
        }
      }
      if (lVar27 == lVar21) break;
      *(long *)(puVar23 + lVar27 * 8 + 0x67e8) = *(long *)(puVar23 + lVar21 * 8 + 0x67e8);
      lVar26 = lVar21 * 2;
      *(long *)(puVar23 + lVar21 * 8 + 0x67e8) = lVar25;
      lVar18 = lVar26 + 1;
      lVar27 = lVar21;
    } while (lVar18 < lVar17);
  }
  uVar24 = (int)uVar16 - 1;
  pTVar28 = *(Triangle **)(puVar23 + (ulong)uVar24 * 8 + 0x67e8);
  *(uint *)(puVar23 + 0x67e0) = uVar24;
  if (pTVar28[0x5e] == (Triangle)0x0) {
    if (fVar35 <= *(float *)(pTVar28 + 0x50)) goto LAB_0010d5b3;
    if (pTVar29 != (Triangle *)0x0) {
      *(undefined8 *)pTVar29 = *(undefined8 *)(puVar23 + 0x67c8);
      *(Triangle **)(puVar23 + 0x67c8) = pTVar29;
    }
    uVar7 = *(undefined8 *)(pTVar28 + 0x38);
    uVar5 = *(undefined8 *)(pTVar28 + 0x30);
    *(float *)(puVar23 + -0x14c8) = fVar35;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d79e;
    auVar54 = SupportPoints::
              Add<JPH::TransformedConvexObject<JPH::AddConvexRadius<JPH::ConvexShape::Support>>,JPH::AddConvexRadius<JPH::ConvexShape::Support>>
                        (uVar5,uVar7,puVar2,param_1,*(undefined8 *)(puVar23 + -0x14b8),
                         puVar23 + -0x146c);
    fVar35 = *(float *)(pTVar28 + 0x30);
    fVar32 = *(float *)(pTVar28 + 0x34);
    *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
    *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb_00;
    *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
    fVar33 = *(float *)(pTVar28 + 0x38);
    fVar34 = auVar54._8_4_ * fVar33 +
             (float)((ulong)*(undefined8 *)(puVar23 + -0x14d8) >> 0x20) * fVar32 +
             (float)*(undefined8 *)(puVar23 + -0x14d8) * fVar35 + 0.0;
    *(float *)(puVar23 + -0x1488) = fVar34;
    if (fVar34 < 0.0) goto LAB_0010cf40;
    fVar34 = (fVar34 * fVar34) / (fVar33 * fVar33 + fVar32 * fVar32 + fVar35 * fVar35 + 0.0);
    pTVar29 = pTVar28;
    if (fVar34 - *(float *)(pTVar28 + 0x50) <
        *(float *)(pTVar28 + 0x50) * *(float *)(puVar23 + -0x14a4)) goto LAB_0010d5b3;
    if (*(float *)(puVar23 + -0x14c8) <= fVar34) {
      fVar34 = *(float *)(puVar23 + -0x14c8);
    }
    if ((*(float *)(puVar23 + -0x14d0) - *(float *)(pTVar28 + 0x48)) * fVar33 +
        (*(float *)(puVar23 + -0x14d4) - *(float *)(pTVar28 + 0x44)) * fVar32 +
        (*(float *)(puVar23 + -0x14d8) - *(float *)(pTVar28 + 0x40)) * fVar35 + 0.0 <= 0.0)
    goto LAB_0010d5b3;
    *(undefined4 *)(puVar23 + -0x1468) = 0;
    *(float *)(puVar23 + -0x14d8) = fVar34;
    *(undefined8 *)(puVar23 + -0x14e0) = 0x10d8b6;
    cVar14 = EPAConvexHullBuilder::AddPoint
                       (this_00,pTVar28,*(int *)(puVar23 + -0x146c),fVar34,
                        (StaticArray *)(puVar23 + -0x1468));
    if (cVar14 == '\0') goto LAB_0010d5b3;
    plVar19 = (long *)(puVar23 + -0x1460);
    fVar35 = *(float *)(puVar23 + -0x14d8);
    plVar3 = plVar19 + *(uint *)(puVar23 + -0x1468);
    if ((ulong)*(uint *)(puVar23 + -0x1468) != 0) {
      do {
        lVar18 = *plVar19;
        if ((float)((ulong)*(undefined8 *)(lVar18 + 0x40) >> 0x20) * *(float *)(lVar18 + 0x34) +
            (float)*(undefined8 *)(lVar18 + 0x40) * *(float *)(lVar18 + 0x30) + 0.0 +
            *(float *)(lVar18 + 0x38) * *(float *)(lVar18 + 0x48) < 0.0) {
          uVar7 = *(undefined8 *)(pTVar28 + 0x38);
          *(undefined8 *)(puVar23 + -0x14d8) = *(undefined8 *)(pTVar28 + 0x30);
          *(undefined8 *)(puVar23 + -0x14d0) = uVar7;
          uVar7 = *(undefined8 *)(puVar23 + -0x14d8);
          fVar35 = (float)((ulong)uVar7 >> 0x20);
          pcVar9 = *(code **)(*(long *)**(undefined8 **)(puVar23 + -0x14b8) + 0x10);
          fVar35 = SQRT(fVar35 * fVar35 + (float)uVar7 * (float)uVar7 + 0.0 +
                        (float)*(undefined8 *)(puVar23 + -0x14d0) *
                        (float)*(undefined8 *)(puVar23 + -0x14d0));
          if (fVar35 <= 0.0) {
            *(undefined8 *)(puVar23 + -0x14e0) = 0x10db8f;
            auVar54 = (*pcVar9)(uVar7);
            *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb_04;
            *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
            *(undefined8 *)(puVar23 + -0x14c8) = *(undefined8 *)(puVar23 + -0x14d8);
            *(undefined8 *)(puVar23 + -0x14c0) = *(undefined8 *)(puVar23 + -0x14d0);
          }
          else {
            fVar35 = *(float *)(*(undefined8 **)(puVar23 + -0x14b8) + 1) / fVar35;
            *(float *)(puVar23 + -0x14c8) = fVar35 * *(float *)(puVar23 + -0x14d8);
            *(float *)(puVar23 + -0x14c4) = fVar35 * *(float *)(puVar23 + -0x14d4);
            *(float *)(puVar23 + -0x14c0) = fVar35 * *(float *)(puVar23 + -0x14d0);
            *(float *)(puVar23 + -0x14bc) = fVar35 * *(float *)(puVar23 + -0x14cc);
            *(undefined8 *)(puVar23 + -0x14e0) = 0x10d9a9;
            auVar54 = (*pcVar9)(uVar7);
            *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb_01;
            *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
            *(float *)(puVar23 + -0x14c8) =
                 *(float *)(puVar23 + -0x14c8) + *(float *)(puVar23 + -0x14d8);
            *(float *)(puVar23 + -0x14c4) =
                 *(float *)(puVar23 + -0x14c4) + *(float *)(puVar23 + -0x14d4);
            *(float *)(puVar23 + -0x14c0) =
                 *(float *)(puVar23 + -0x14c0) + *(float *)(puVar23 + -0x14d0);
            *(float *)(puVar23 + -0x14bc) =
                 *(float *)(puVar23 + -0x14bc) + *(float *)(puVar23 + -0x14cc);
          }
          fVar34 = 0.0 - *(float *)(pTVar28 + 0x30);
          fVar31 = 0.0 - *(float *)(pTVar28 + 0x34);
          fVar46 = 0.0 - *(float *)(pTVar28 + 0x38);
          uVar7 = *(undefined8 *)(param_1 + 0x20);
          uVar5 = *(undefined8 *)(param_1 + 0x10);
          fVar33 = *(float *)(param_1 + 0x28);
          fVar32 = *(float *)(param_1 + 0x18);
          fVar35 = *(float *)(*(undefined8 **)(param_1 + 0x40) + 1);
          pcVar9 = *(code **)(*(long *)**(undefined8 **)(param_1 + 0x40) + 0x10);
          fVar36 = *(float *)param_1 * fVar34 + *(float *)(param_1 + 4) * fVar31 +
                   fVar46 * *(float *)(param_1 + 8);
          *(float *)(puVar23 + -0x14d8) = fVar36;
          *(float *)(puVar23 + -0x14d4) =
               (float)uVar5 * fVar34 + (float)((ulong)uVar5 >> 0x20) * fVar31 + fVar46 * fVar32;
          *(float *)(puVar23 + -0x14d0) =
               (float)uVar7 * fVar34 + (float)((ulong)uVar7 >> 0x20) * fVar31 + fVar46 * fVar33;
          *(float *)(puVar23 + -0x14cc) = fVar34 * 0.0 + fVar31 * 0.0 + fVar46 * 0.0;
          fVar32 = SQRT(*(float *)(puVar23 + -0x14d4) * *(float *)(puVar23 + -0x14d4) +
                        fVar36 * fVar36 + 0.0 +
                        *(float *)(puVar23 + -0x14d0) * *(float *)(puVar23 + -0x14d0));
          if (fVar32 <= 0.0) {
            *(undefined8 *)(puVar23 + -0x14e0) = 0x10db76;
            auVar54 = (*pcVar9)(*(undefined8 *)(puVar23 + -0x14d8),
                                *(undefined8 *)(puVar23 + -0x14d0));
            *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb_03;
            *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
            auVar37 = SUB1612(*(undefined1 (*) [16])(puVar23 + -0x14d8),0);
          }
          else {
            fVar35 = fVar35 / fVar32;
            *(float *)(puVar23 + -0x14b8) = *(float *)(puVar23 + -0x14d8) * fVar35;
            *(float *)(puVar23 + -0x14b4) = *(float *)(puVar23 + -0x14d4) * fVar35;
            *(float *)(puVar23 + -0x14b0) = *(float *)(puVar23 + -0x14d0) * fVar35;
            *(float *)(puVar23 + -0x14ac) = *(float *)(puVar23 + -0x14cc) * fVar35;
            *(undefined8 *)(puVar23 + -0x14e0) = 0x10da93;
            auVar54 = (*pcVar9)(*(undefined8 *)(puVar23 + -0x14d8),
                                *(undefined8 *)(puVar23 + -0x14d0));
            *(long *)(puVar23 + -0x14d8) = auVar54._0_8_;
            *(undefined8 *)(puVar23 + -0x14d0) = extraout_XMM0_Qb_02;
            *(long *)(puVar23 + -0x14d0) = auVar54._8_8_;
            auVar37._0_4_ = *(float *)(puVar23 + -0x14d8) + *(float *)(puVar23 + -0x14b8);
            auVar37._4_4_ = *(float *)(puVar23 + -0x14d4) + *(float *)(puVar23 + -0x14b4);
            auVar37._8_4_ = *(float *)(puVar23 + -0x14d0) + *(float *)(puVar23 + -0x14b0);
          }
          fVar35 = auVar37._0_4_;
          fVar32 = auVar37._4_4_;
          fVar33 = auVar37._8_4_;
          bVar15 = (float)((uint)(((fVar35 * *(float *)(param_1 + 8) +
                                    fVar32 * *(float *)(param_1 + 0x18) +
                                    fVar33 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38)
                                   ) - *(float *)(puVar23 + -0x14c0)) * *(float *)(pTVar28 + 0x38) +
                                 ((fVar35 * *(float *)(param_1 + 4) +
                                   fVar32 * *(float *)(param_1 + 0x14) +
                                   fVar33 * *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x34))
                                 - *(float *)(puVar23 + -0x14c4)) * *(float *)(pTVar28 + 0x34) +
                                 *(float *)(pTVar28 + 0x30) *
                                 ((fVar35 * *(float *)param_1 + fVar32 * *(float *)(param_1 + 0x10)
                                   + fVar33 * *(float *)(param_1 + 0x20) +
                                  *(float *)(param_1 + 0x30)) - *(float *)(puVar23 + -0x14c8)) + 0.0
                                 ) ^ __LC11) < *(float *)(puVar23 + -0x1488);
          goto LAB_0010d5bc;
        }
        plVar19 = plVar19 + 1;
      } while (plVar3 != plVar19);
    }
  }
  else {
    *(undefined8 *)pTVar28 = *(undefined8 *)(puVar23 + 0x67c8);
    *(Triangle **)(puVar23 + 0x67c8) = pTVar28;
    pTVar28 = pTVar29;
  }
  uVar24 = *(uint *)(puVar23 + 0x67e0);
  uVar16 = (ulong)uVar24;
  pTVar29 = pTVar28;
  if ((uVar24 == 0) || (0x7f < *(uint *)(puVar23 + -0x1058))) goto LAB_0010d5b3;
  pTVar28 = *(Triangle **)(puVar23 + 0x67e8);
  uVar20 = (ulong)uVar24;
  goto LAB_0010d4a0;
LAB_0010d5b3:
  pTVar28 = pTVar29;
  bVar15 = false;
  if (pTVar28 != (Triangle *)0x0) {
LAB_0010d5bc:
    pfVar8 = *(float **)(puVar23 + -0x14a0);
    fVar32 = (*(float *)(pTVar28 + 0x48) * *(float *)(pTVar28 + 0x38) +
             (float)((ulong)*(undefined8 *)(pTVar28 + 0x30) >> 0x20) * *(float *)(pTVar28 + 0x44) +
             (float)*(undefined8 *)(pTVar28 + 0x30) * *(float *)(pTVar28 + 0x40) + 0.0) /
             (*(float *)(pTVar28 + 0x38) * *(float *)(pTVar28 + 0x38) +
             *(float *)(pTVar28 + 0x30) * *(float *)(pTVar28 + 0x30) + 0.0 +
             *(float *)(pTVar28 + 0x34) * *(float *)(pTVar28 + 0x34));
    fVar35 = *(float *)(pTVar28 + 0x3c);
    fVar33 = fVar32 * *(float *)(pTVar28 + 0x30);
    fVar34 = fVar32 * *(float *)(pTVar28 + 0x34);
    fVar31 = fVar32 * *(float *)(pTVar28 + 0x38);
    *pfVar8 = fVar33;
    pfVar8[1] = fVar34;
    pfVar8[2] = fVar31;
    pfVar8[3] = fVar32 * fVar35;
    if (_LC9 < fVar31 * fVar31 + fVar33 * fVar33 + 0.0 + fVar34 * fVar34) {
      if (bVar15) {
        *pfVar8 = 0.0 - fVar33;
        pfVar8[1] = 0.0 - fVar34;
        pfVar8[2] = 0.0 - fVar31;
        pfVar8[3] = 0.0 - fVar32 * fVar35;
      }
      fVar35 = *(float *)(pTVar28 + 0x54);
      fVar32 = *(float *)(pTVar28 + 0x58);
      lVar25 = ((long)*(int *)(pTVar28 + 0xc) + 0x81) * 0x10;
      lVar17 = ((long)*(int *)(pTVar28 + 0x1c) + 0x81) * 0x10;
      lVar18 = ((long)*(int *)(pTVar28 + 0x2c) + 0x81) * 0x10;
      pfVar8 = (float *)(puVar23 + lVar25 + -0x1058);
      fVar33 = *pfVar8;
      fVar34 = pfVar8[1];
      fVar31 = pfVar8[2];
      fVar46 = pfVar8[3];
      pfVar8 = (float *)(puVar23 + lVar17 + -0x1058);
      fVar36 = *pfVar8;
      fVar42 = pfVar8[1];
      fVar44 = pfVar8[2];
      fVar48 = pfVar8[3];
      pfVar8 = (float *)(puVar23 + lVar18 + -0x1058);
      pfVar4 = (float *)(puVar23 + lVar25 + -0x858);
      fVar49 = *pfVar4;
      fVar50 = pfVar4[1];
      fVar51 = pfVar4[2];
      fVar52 = pfVar4[3];
      pfVar4 = (float *)(puVar23 + lVar17 + -0x858);
      fVar53 = *pfVar4;
      fVar11 = pfVar4[1];
      fVar12 = pfVar4[2];
      fVar13 = pfVar4[3];
      pfVar4 = (float *)(puVar23 + lVar18 + -0x858);
      if (pTVar28[0x5c] == (Triangle)0x0) {
        fVar36 = (fVar33 - fVar36) * fVar35 + fVar36 + (*pfVar8 - fVar36) * fVar32;
        fVar42 = (fVar34 - fVar42) * fVar35 + fVar42 + (pfVar8[1] - fVar42) * fVar32;
        fVar44 = (fVar31 - fVar44) * fVar35 + fVar44 + (pfVar8[2] - fVar44) * fVar32;
        fVar46 = (fVar46 - fVar48) * fVar35 + fVar48 + (pfVar8[3] - fVar48) * fVar32;
        fVar33 = (fVar49 - fVar53) * fVar35 + fVar53 + (*pfVar4 - fVar53) * fVar32;
        fVar34 = (fVar50 - fVar11) * fVar35 + fVar11 + (pfVar4[1] - fVar11) * fVar32;
        fVar31 = (fVar51 - fVar12) * fVar35 + fVar12 + (pfVar4[2] - fVar12) * fVar32;
        fVar35 = (fVar52 - fVar13) * fVar35 + fVar13 + (pfVar4[3] - fVar13) * fVar32;
      }
      else {
        fVar36 = (*pfVar8 - fVar33) * fVar32 + (fVar36 - fVar33) * fVar35 + fVar33;
        fVar42 = (pfVar8[1] - fVar34) * fVar32 + (fVar42 - fVar34) * fVar35 + fVar34;
        fVar44 = (pfVar8[2] - fVar31) * fVar32 + (fVar44 - fVar31) * fVar35 + fVar31;
        fVar46 = (pfVar8[3] - fVar46) * fVar32 + (fVar48 - fVar46) * fVar35 + fVar46;
        fVar33 = (*pfVar4 - fVar49) * fVar32 + (fVar53 - fVar49) * fVar35 + fVar49;
        fVar34 = (pfVar4[1] - fVar50) * fVar32 + (fVar11 - fVar50) * fVar35 + fVar50;
        fVar31 = (pfVar4[2] - fVar51) * fVar32 + (fVar12 - fVar51) * fVar35 + fVar51;
        fVar35 = (pfVar4[3] - fVar52) * fVar32 + (fVar13 - fVar52) * fVar35 + fVar52;
      }
      pfVar8 = *(float **)(puVar23 + -0x1498);
      *pfVar8 = fVar36;
      pfVar8[1] = fVar42;
      pfVar8[2] = fVar44;
      pfVar8[3] = fVar46;
      pfVar8 = *(float **)(puVar23 + -0x1490);
      *pfVar8 = fVar33;
      pfVar8[1] = fVar34;
      pfVar8[2] = fVar31;
      pfVar8[3] = fVar35;
      bVar15 = true;
      goto LAB_0010cf42;
    }
  }
LAB_0010cf40:
  bVar15 = false;
LAB_0010cf42:
  if (*(long *)(puVar23 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar23 + -0x14e0) = 0x10db69;
  __stack_chk_fail();
}



/* JPH::StaticArray<JPH::Vec3, 32u>::GetHash() const */

ulong __thiscall JPH::StaticArray<JPH::Vec3,32u>::GetHash(StaticArray<JPH::Vec3,32u> *this)

{
  StaticArray<JPH::Vec3,32u> *pSVar1;
  byte bVar2;
  float *pfVar3;
  ulong uVar4;
  ulong uVar5;
  StaticArray<JPH::Vec3,32u> *pSVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  float local_34;
  long local_30;
  
  uVar7 = 0xcbf29ce484222325;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = *(float *)this;
  pfVar3 = &local_34;
  do {
    bVar2 = *(byte *)pfVar3;
    pfVar3 = (float *)((long)pfVar3 + 1);
    uVar7 = (bVar2 ^ uVar7) * 0x100000001b3;
  } while (pfVar3 != (float *)&local_30);
  pSVar6 = this + 0x10;
  pSVar1 = pSVar6 + (ulong)(uint)*(float *)this * 0x10;
  for (; pSVar6 < pSVar1; pSVar6 = pSVar6 + 0x10) {
    local_34 = *(float *)pSVar6;
    fVar8 = *(float *)(pSVar6 + 8);
    fVar9 = *(float *)(pSVar6 + 4);
    if (local_34 == 0.0) {
      local_34 = 0.0;
    }
    uVar5 = 0xcbf29ce484222325;
    pfVar3 = &local_34;
    do {
      bVar2 = *(byte *)pfVar3;
      pfVar3 = (float *)((long)pfVar3 + 1);
      uVar5 = (uVar5 ^ bVar2) * 0x100000001b3;
    } while (pfVar3 != (float *)&local_30);
    if (fVar9 == 0.0) {
      fVar9 = 0.0;
    }
    local_34 = fVar9;
    uVar10 = 0xcbf29ce484222325;
    pfVar3 = &local_34;
    do {
      bVar2 = *(byte *)pfVar3;
      pfVar3 = (float *)((long)pfVar3 + 1);
      uVar4 = bVar2 ^ uVar10;
      uVar10 = uVar4 * 0x100000001b3;
    } while (pfVar3 != (float *)&local_30);
    uVar4 = uVar4 * 0x21dbf4aaa9ed2837;
    uVar5 = ((uVar4 ^ uVar4 >> 0x27) * -0x415dda0614cbaa93 + uVar5) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x20) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x1d) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x20) * -0x415dda0614cbaa93;
    if (fVar8 == 0.0) {
      fVar8 = 0.0;
    }
    local_34 = fVar8;
    uVar10 = 0xcbf29ce484222325;
    pfVar3 = &local_34;
    do {
      bVar2 = *(byte *)pfVar3;
      pfVar3 = (float *)((long)pfVar3 + 1);
      uVar4 = bVar2 ^ uVar10;
      uVar10 = uVar4 * 0x100000001b3;
    } while (pfVar3 != (float *)&local_30);
    uVar4 = uVar4 * 0x21dbf4aaa9ed2837;
    uVar5 = ((uVar4 ^ uVar4 >> 0x27) * -0x415dda0614cbaa93 + (uVar5 >> 0x1d ^ uVar5)) *
            -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x20) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x1d) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x20) * -0x415dda0614cbaa93;
    uVar5 = (uVar5 ^ uVar5 >> 0x1d) * -0x415dda0614cbaa93;
    uVar7 = ((uVar5 ^ uVar5 >> 0x27) * -0x415dda0614cbaa93 + uVar7) * -0x415dda0614cbaa93;
    uVar7 = (uVar7 ^ uVar7 >> 0x20) * -0x415dda0614cbaa93;
    uVar7 = (uVar7 ^ uVar7 >> 0x1d) * -0x415dda0614cbaa93;
    uVar7 = (uVar7 ^ uVar7 >> 0x20) * -0x415dda0614cbaa93;
    uVar7 = uVar7 >> 0x1d ^ uVar7;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::enable_if<std::__and_<std::__not_<std::__is_tuple_like<JPH::StaticArray<JPH::Vec3, 32u> > >,
   std::is_move_constructible<JPH::StaticArray<JPH::Vec3, 32u> >,
   std::is_move_assignable<JPH::StaticArray<JPH::Vec3, 32u> > >::value, void>::type
   std::swap<JPH::StaticArray<JPH::Vec3, 32u> >(JPH::StaticArray<JPH::Vec3, 32u>&,
   JPH::StaticArray<JPH::Vec3, 32u>&) */

void std::swap<JPH::StaticArray<JPH::Vec3,32u>>(StaticArray *param_1,StaticArray *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *__src;
  long lVar4;
  long in_FS_OFFSET;
  undefined1 local_238 [520];
  long local_30;
  
  uVar1 = *(uint *)param_1;
  uVar2 = *(uint *)param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar1 == 0) {
    if ((param_1 == param_2) || (uVar2 == 0)) goto LAB_0010def8;
LAB_0010dea5:
    lVar4 = 0x10;
    do {
      uVar3 = *(undefined8 *)(param_2 + lVar4 + 8);
      *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
      *(undefined8 *)(param_1 + lVar4 + 8) = uVar3;
      lVar4 = lVar4 + 0x10;
    } while (((ulong)uVar2 + 1) * 0x10 != lVar4);
    *(uint *)param_1 = uVar2;
    *(undefined4 *)param_2 = 0;
    if (uVar1 == 0) goto LAB_0010def8;
    __src = local_238;
  }
  else {
    __src = (undefined1 *)memcpy(local_238,param_1 + 0x10,(ulong)uVar1 << 4);
    if ((param_1 != param_2) && (*(undefined4 *)param_1 = 0, uVar2 != 0)) goto LAB_0010dea5;
  }
  memcpy(param_2 + 0x10,__src,(ulong)uVar1 << 4);
  *(uint *)param_2 = uVar1;
LAB_0010def8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::HashTable<JPH::StaticArray<JPH::Vec3, 32u>, std::pair<JPH::StaticArray<JPH::Vec3, 32u>,
   JPH::Array<JPH::Vec3, JPH::STLAllocator<JPH::Vec3> > >,
   JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3, 32u>, JPH::Array<JPH::Vec3,
   JPH::STLAllocator<JPH::Vec3> > >, JPH::Hash<JPH::StaticArray<JPH::Vec3, 32u> >,
   std::equal_to<JPH::StaticArray<JPH::Vec3, 32u> > >::GrowTable() */

void __thiscall
JPH::
HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
::GrowTable(HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
            *this)

{
  StaticArray<JPH::Vec3,32u> *pSVar1;
  void *__s;
  char *pcVar2;
  StaticArray<JPH::Vec3,32u> *pSVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  StaticArray<JPH::Vec3,32u> *this_00;
  int iVar16;
  uint *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar12 = *(uint *)(this + 0x14);
  uVar9 = (ulong)(uVar12 * 2);
  if (uVar12 * 2 < 0x10) {
    uVar9 = 0x10;
  }
  if (uVar12 <= (uint)uVar9) {
    *(uint *)(this + 0x14) = (uint)uVar9;
    pSVar3 = *(StaticArray<JPH::Vec3,32u> **)this;
    pcVar15 = *(char **)(this + 8);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
    *(int *)(this + 0x18) = (int)(uVar9 * 7 >> 3);
    lVar10 = (*Allocate)(uVar9 * 0x231 + 0xf);
    *(long *)this = lVar10;
    __s = (void *)(lVar10 + (ulong)*(uint *)(this + 0x14) * 0x230);
    *(void **)(this + 8) = __s;
    memset(__s,0,(ulong)(*(uint *)(this + 0x14) + 0xf));
    if (pSVar3 != (StaticArray<JPH::Vec3,32u> *)0x0) {
      if (uVar12 != 0) {
        pcVar14 = pcVar15 + uVar12;
        this_00 = pSVar3;
        do {
          while (-1 < *pcVar15) {
            pcVar15 = pcVar15 + 1;
            this_00 = this_00 + 0x230;
            if (pcVar14 == pcVar15) goto LAB_0010e148;
          }
          iVar16 = *(int *)(this + 0x18);
          if (iVar16 == 0) {
            if ((ulong)*(uint *)(this + 0x14) <
                (ulong)(uint)((int)((ulong)*(uint *)(this + 0x14) * 7 >> 3) - *(int *)(this + 0x10))
                << 3) {
              rehash((uint)this);
              iVar16 = *(int *)(this + 0x18);
            }
            else {
              GrowTable(this);
              iVar16 = *(int *)(this + 0x18);
            }
          }
          uVar9 = StaticArray<JPH::Vec3,32u>::GetHash(this_00);
          bVar8 = (byte)uVar9 | 0x80;
          uVar12 = *(int *)(this + 0x14) - 1;
          lVar10 = *(long *)(this + 8);
          uVar13 = (uint)(uVar9 >> 7) & uVar12;
          pcVar2 = (char *)(lVar10 + (ulong)uVar13);
          auVar18[0] = -(*pcVar2 == '\0');
          auVar18[1] = -(pcVar2[1] == '\0');
          auVar18[2] = -(pcVar2[2] == '\0');
          auVar18[3] = -(pcVar2[3] == '\0');
          auVar18[4] = -(pcVar2[4] == '\0');
          auVar18[5] = -(pcVar2[5] == '\0');
          auVar18[6] = -(pcVar2[6] == '\0');
          auVar18[7] = -(pcVar2[7] == '\0');
          auVar18[8] = -(pcVar2[8] == '\0');
          auVar18[9] = -(pcVar2[9] == '\0');
          auVar18[10] = -(pcVar2[10] == '\0');
          auVar18[0xb] = -(pcVar2[0xb] == '\0');
          auVar18[0xc] = -(pcVar2[0xc] == '\0');
          auVar18[0xd] = -(pcVar2[0xd] == '\0');
          auVar18[0xe] = -(pcVar2[0xe] == '\0');
          auVar18[0xf] = -(pcVar2[0xf] == '\0');
          uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar18[0xf] >> 7) << 0xf;
          while (uVar4 == 0) {
            uVar13 = uVar13 + 0x10 & uVar12;
            pcVar2 = (char *)(lVar10 + (ulong)uVar13);
            auVar19[0] = -(*pcVar2 == '\0');
            auVar19[1] = -(pcVar2[1] == '\0');
            auVar19[2] = -(pcVar2[2] == '\0');
            auVar19[3] = -(pcVar2[3] == '\0');
            auVar19[4] = -(pcVar2[4] == '\0');
            auVar19[5] = -(pcVar2[5] == '\0');
            auVar19[6] = -(pcVar2[6] == '\0');
            auVar19[7] = -(pcVar2[7] == '\0');
            auVar19[8] = -(pcVar2[8] == '\0');
            auVar19[9] = -(pcVar2[9] == '\0');
            auVar19[10] = -(pcVar2[10] == '\0');
            auVar19[0xb] = -(pcVar2[0xb] == '\0');
            auVar19[0xc] = -(pcVar2[0xc] == '\0');
            auVar19[0xd] = -(pcVar2[0xd] == '\0');
            auVar19[0xe] = -(pcVar2[0xe] == '\0');
            auVar19[0xf] = -(pcVar2[0xf] == '\0');
            uVar4 = (ushort)(SUB161(auVar19 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf;
          }
          iVar5 = 0;
          for (uVar11 = (uint)uVar4; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          *(int *)(this + 0x18) = iVar16 + -1;
          uVar12 = iVar5 + uVar13 & uVar12;
          *(byte *)(lVar10 + (ulong)uVar12) = bVar8;
          *(byte *)(*(long *)(this + 8) + (ulong)((*(int *)(this + 0x14) - 1U & uVar12 - 0xf) + 0xf)
                   ) = bVar8;
          puVar17 = (uint *)((ulong)uVar12 * 0x230 + *(long *)this);
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          uVar12 = *(uint *)this_00;
          *puVar17 = 0;
          if (uVar12 != 0) {
            memmove(puVar17 + 4,this_00 + 0x10,(ulong)uVar12 << 4);
            *puVar17 = uVar12;
          }
          uVar6 = *(undefined8 *)(this_00 + 0x210);
          uVar7 = *(undefined8 *)(this_00 + 0x218);
          pSVar1 = this_00 + 0x220;
          pcVar15 = pcVar15 + 1;
          this_00 = this_00 + 0x230;
          *(undefined8 *)(puVar17 + 0x88) = *(undefined8 *)pSVar1;
          *(undefined8 *)(puVar17 + 0x84) = uVar6;
          *(undefined8 *)(puVar17 + 0x86) = uVar7;
        } while (pcVar14 != pcVar15);
      }
LAB_0010e148:
                    /* WARNING: Could not recover jumptable at 0x0010e159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*Free)(pSVar3);
      return;
    }
  }
  return;
}



/* bool JPH::HashTable<JPH::StaticArray<JPH::Vec3, 32u>, std::pair<JPH::StaticArray<JPH::Vec3, 32u>,
   JPH::Array<JPH::Vec3, JPH::STLAllocator<JPH::Vec3> > >,
   JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3, 32u>, JPH::Array<JPH::Vec3,
   JPH::STLAllocator<JPH::Vec3> > >, JPH::Hash<JPH::StaticArray<JPH::Vec3, 32u> >,
   std::equal_to<JPH::StaticArray<JPH::Vec3, 32u> > >::InsertKey<false>(JPH::StaticArray<JPH::Vec3,
   32u> const&, unsigned int&) */

bool JPH::
     HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
     ::InsertKey<false>(StaticArray *param_1,uint *param_2)

{
  uint uVar1;
  float *pfVar2;
  byte *pbVar3;
  float *pfVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  bool bVar24;
  uint uVar25;
  ulong uVar26;
  uint uVar27;
  uint *in_RDX;
  long lVar28;
  uint uVar29;
  uint uVar30;
  ulong in_R8;
  uint uVar31;
  uint *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar36;
  undefined1 auVar37 [16];
  uint local_44;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    if ((ulong)*(uint *)(param_1 + 0x14) <
        (ulong)(uint)((int)((ulong)*(uint *)(param_1 + 0x14) * 7 >> 3) - *(int *)(param_1 + 0x10))
        << 3) {
      rehash((uint)param_1);
    }
    else {
      GrowTable((HashTable<JPH::StaticArray<JPH::Vec3,32u>,std::pair<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::UnorderedMapDetail<JPH::StaticArray<JPH::Vec3,32u>,JPH::Array<JPH::Vec3,JPH::STLAllocator<JPH::Vec3>>>,JPH::Hash<JPH::StaticArray<JPH::Vec3,32u>>,std::equal_to<JPH::StaticArray<JPH::Vec3,32u>>>
                 *)param_1);
    }
  }
  uVar26 = StaticArray<JPH::Vec3,32u>::GetHash((StaticArray<JPH::Vec3,32u> *)param_2);
  local_44 = 0xffffffff;
  uVar1 = *(int *)(param_1 + 0x14) - 1;
  bVar36 = (byte)uVar26 | 0x80;
  uVar25 = (uint)(uVar26 >> 7);
  do {
    uVar25 = uVar25 & uVar1;
    pbVar3 = (byte *)(*(long *)(param_1 + 8) + (ulong)uVar25);
    bVar8 = *pbVar3;
    bVar9 = pbVar3[1];
    bVar10 = pbVar3[2];
    bVar11 = pbVar3[3];
    bVar12 = pbVar3[4];
    bVar13 = pbVar3[5];
    bVar14 = pbVar3[6];
    bVar15 = pbVar3[7];
    bVar16 = pbVar3[8];
    bVar17 = pbVar3[9];
    bVar18 = pbVar3[10];
    bVar19 = pbVar3[0xb];
    bVar20 = pbVar3[0xc];
    bVar21 = pbVar3[0xd];
    bVar22 = pbVar3[0xe];
    bVar23 = pbVar3[0xf];
    auVar33[0] = -(bVar36 == bVar8);
    auVar33[1] = -(bVar36 == bVar9);
    auVar33[2] = -(bVar36 == bVar10);
    auVar33[3] = -(bVar36 == bVar11);
    auVar33[4] = -(bVar36 == bVar12);
    auVar33[5] = -(bVar36 == bVar13);
    auVar33[6] = -(bVar36 == bVar14);
    auVar33[7] = -(bVar36 == bVar15);
    auVar33[8] = -(bVar36 == bVar16);
    auVar33[9] = -(bVar36 == bVar17);
    auVar33[10] = -(bVar36 == bVar18);
    auVar33[0xb] = -(bVar36 == bVar19);
    auVar33[0xc] = -(bVar36 == bVar20);
    auVar33[0xd] = -(bVar36 == bVar21);
    auVar33[0xe] = -(bVar36 == bVar22);
    auVar33[0xf] = -(bVar36 == bVar23);
    uVar6 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
    if (uVar6 != 0) {
      uVar27 = *param_2;
      uVar31 = (uint)uVar6;
      uVar29 = uVar25;
      do {
        iVar7 = 0;
        for (uVar30 = uVar31; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        uVar29 = uVar29 + iVar7 & uVar1;
        puVar32 = (uint *)((ulong)uVar29 * 0x230 + *(long *)param_1);
        if (*puVar32 == uVar27) {
          if (uVar27 == 0) {
LAB_0010e2e8:
            bVar24 = false;
            goto LAB_0010e2ea;
          }
          lVar28 = 0x10;
          while( true ) {
            pfVar4 = (float *)((long)puVar32 + lVar28);
            pfVar2 = (float *)((long)param_2 + lVar28);
            auVar34._4_4_ = -(uint)(pfVar4[1] == pfVar2[1]);
            auVar34._0_4_ = -(uint)(*pfVar4 == *pfVar2);
            auVar34._8_4_ = -(uint)(pfVar4[2] == pfVar2[2]);
            auVar34._12_4_ = -(uint)(pfVar4[3] == pfVar2[3]);
            uVar30 = movmskps((int)in_R8,auVar34);
            in_R8 = (ulong)(~uVar30 & 7);
            if ((~uVar30 & 7) != 0) break;
            lVar28 = lVar28 + 0x10;
            if (((ulong)uVar27 + 1) * 0x10 == lVar28) goto LAB_0010e2e8;
          }
        }
        uVar29 = uVar29 + 1;
        bVar5 = (char)iVar7 + 1U & 0x1f;
        uVar30 = uVar31 >> bVar5;
        uVar31 = uVar31 >> bVar5;
      } while (uVar30 != 0);
    }
    uVar27 = local_44;
    if (local_44 == 0xffffffff) {
      auVar35[0] = -(bVar8 == _LC106);
      auVar35[1] = -(bVar9 == UNK_0010e851);
      auVar35[2] = -(bVar10 == UNK_0010e852);
      auVar35[3] = -(bVar11 == UNK_0010e853);
      auVar35[4] = -(bVar12 == UNK_0010e854);
      auVar35[5] = -(bVar13 == UNK_0010e855);
      auVar35[6] = -(bVar14 == UNK_0010e856);
      auVar35[7] = -(bVar15 == UNK_0010e857);
      auVar35[8] = -(bVar16 == UNK_0010e858);
      auVar35[9] = -(bVar17 == UNK_0010e859);
      auVar35[10] = -(bVar18 == UNK_0010e85a);
      auVar35[0xb] = -(bVar19 == UNK_0010e85b);
      auVar35[0xc] = -(bVar20 == UNK_0010e85c);
      auVar35[0xd] = -(bVar21 == UNK_0010e85d);
      auVar35[0xe] = -(bVar22 == UNK_0010e85e);
      auVar35[0xf] = -(bVar23 == UNK_0010e85f);
      iVar7 = 0;
      uVar29 = (uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar35[0xf] >> 7) << 0xf);
      for (uVar27 = uVar29; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
        iVar7 = iVar7 + 1;
      }
      uVar27 = iVar7 + uVar25;
      if (uVar29 == 0) {
        uVar27 = local_44;
      }
    }
    local_44 = uVar27;
    auVar37[0] = -(bVar8 == 0);
    auVar37[1] = -(bVar9 == 0);
    auVar37[2] = -(bVar10 == 0);
    auVar37[3] = -(bVar11 == 0);
    auVar37[4] = -(bVar12 == 0);
    auVar37[5] = -(bVar13 == 0);
    auVar37[6] = -(bVar14 == 0);
    auVar37[7] = -(bVar15 == 0);
    auVar37[8] = -(bVar16 == 0);
    auVar37[9] = -(bVar17 == 0);
    auVar37[10] = -(bVar18 == 0);
    auVar37[0xb] = -(bVar19 == 0);
    auVar37[0xc] = -(bVar20 == 0);
    auVar37[0xd] = -(bVar21 == 0);
    auVar37[0xe] = -(bVar22 == 0);
    auVar37[0xf] = -(bVar23 == 0);
    uVar6 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
    if (uVar6 != 0) {
      if (local_44 == 0xffffffff) {
        iVar7 = 0;
        for (uVar27 = (uint)uVar6; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          iVar7 = iVar7 + 1;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        local_44 = iVar7 + uVar25;
      }
      uVar29 = uVar1 & local_44;
      *(byte *)(*(long *)(param_1 + 8) + (ulong)uVar29) = bVar36;
      *(byte *)(*(long *)(param_1 + 8) +
               (ulong)((*(int *)(param_1 + 0x14) - 1U & uVar29 - 0xf) + 0xf)) = bVar36;
      bVar24 = true;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
LAB_0010e2ea:
      *in_RDX = uVar29;
      return bVar24;
    }
    uVar25 = uVar25 + 0x10;
  } while( true );
}



/* JPH::GetRTTIOfType(JPH::ConvexShapeSettings*) */

void JPH::_GLOBAL__sub_I_GetRTTIOfType(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC110;
  }
  ConvexShape::sUnitSphereTriangles = 0;
  GetTrianglesContextVertexList::sCreateHalfUnitSphereTop<JPH::StaticArray<JPH::Vec3,384u>>
            ((StaticArray *)&ConvexShape::sUnitSphereTriangles,2);
  GetTrianglesContextVertexList::sCreateHalfUnitSphereBottom<JPH::StaticArray<JPH::Vec3,384u>>
            ((StaticArray *)&ConvexShape::sUnitSphereTriangles,2);
  __cxa_atexit(StaticArray<JPH::Vec3,384u>::~StaticArray,&ConvexShape::sUnitSphereTriangles,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::EPAConvexHullBuilder::Triangle::Triangle(int, int, int, JPH::Vec3 const*) */

void __thiscall
JPH::EPAConvexHullBuilder::Triangle::Triangle
          (Triangle *this,int param_1,int param_2,int param_3,Vec3 *param_4)

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
/* JPH::StaticArray<JPH::Vec3, 384u>::~StaticArray() */

void __thiscall JPH::StaticArray<JPH::Vec3,384u>::~StaticArray(StaticArray<JPH::Vec3,384u> *this)

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




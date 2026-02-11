
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::intersect_point(PhysicsDirectSpaceState3D::PointParameters const&,
   PhysicsDirectSpaceState3D::ShapeResult*, int) */

int __thiscall
JoltPhysicsDirectSpaceState3D::intersect_point
          (JoltPhysicsDirectSpaceState3D *this,PointParameters *param_1,ShapeResult *param_2,
          int param_3)

{
  SubShapeID SVar1;
  SubShapeID *pSVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_238;
  undefined **local_218;
  undefined4 local_210;
  JoltQueryFilter3D local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [32];
  code *local_1d8 [8];
  long local_198;
  undefined **local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined1 local_170 [256];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 *local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) == '\0') {
    if (param_3 != 0) {
      JoltSpace3D::try_optimize();
      JoltQueryFilter3D::JoltQueryFilter3D
                (local_208,this,*(uint *)(param_1 + 0x38),(bool)param_1[0x3c],(bool)param_1[0x3d],
                 (HashSet *)(param_1 + 0x10),false);
      local_188 = &PTR__JoltQueryCollectorAnyMulti_0010f008;
      local_70 = __LC14;
      uStack_68 = _UNK_0010f188;
      local_180 = 0x7f7fffff;
      local_178 = 0;
      local_60 = 0x20;
      local_58 = local_170;
      local_50 = param_3;
      uVar4 = JoltSpace3D::get_narrow_phase_query();
      local_218 = &PTR__ShapeFilter_0010ecc0;
      local_210 = 0xffffffff;
      JPH::NarrowPhaseQuery::CollidePoint
                (*(undefined8 *)param_1,
                 CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8)),uVar4,
                 &local_188,local_208,local_200,local_1f8,&local_218);
      local_238 = (int)uStack_68;
      if (0 < local_238) {
        lVar5 = 0;
        do {
          JoltSpace3D::read_body((BodyID *)local_1d8);
          if ((local_198 == 0) ||
             (pSVar2 = *(SubShapeID **)(local_198 + 0x50), pSVar2 == (SubShapeID *)0x0)) {
            _err_print_error("intersect_point",
                             "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                             0x22b,"Parameter \"object\" is null.",0,0);
LAB_001002d5:
            JoltBodyAccessor3D::release();
            local_1d8[0] = _err_print_error;
            JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_1d8);
            local_238 = 0;
            break;
          }
          SVar1 = pSVar2[0x3c];
          *(undefined4 *)(param_2 + lVar5 * 4 + 0x18) = 0;
          if (SVar1 != (SubShapeID)0x2) {
            iVar3 = JoltShapedObject3D::find_shape_index(pSVar2);
            if (iVar3 == -1) {
              _err_print_error("intersect_point",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x233,"Condition \"shape_index == -1\" is true. Returning: 0",0,0);
              goto LAB_001002d5;
            }
            *(int *)(param_2 + lVar5 * 4 + 0x18) = iVar3;
          }
          uVar4 = *(undefined8 *)(pSVar2 + 0x20);
          *(undefined8 *)(param_2 + lVar5 * 4) = *(undefined8 *)(pSVar2 + 0x18);
          *(undefined8 *)(param_2 + lVar5 * 4 + 8) = uVar4;
          uVar4 = JoltObject3D::get_instance();
          *(undefined8 *)(param_2 + lVar5 * 4 + 0x10) = uVar4;
          lVar5 = lVar5 + 8;
          JoltBodyAccessor3D::release();
          local_1d8[0] = _err_print_error;
          JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_1d8);
        } while ((ulong)(local_238 - 1) * 8 + 8 != lVar5);
      }
      local_188 = &PTR__JoltQueryCollectorAnyMulti_0010f008;
      if (local_58 != (undefined1 *)0x0) {
        uStack_68 = 0;
        if (0xf8 < (ulong)((long)local_58 - (long)local_170)) {
          (*JPH::Free)();
        }
      }
      goto LAB_0010004d;
    }
  }
  else {
    _err_print_error("intersect_point",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x218,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "intersect_point must not be called while the physics space is being stepped.",
                     0,0);
  }
  local_238 = 0;
LAB_0010004d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_238;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* JoltPhysicsDirectSpaceState3D::_try_get_face_index(JPH::Body const&, JPH::SubShapeID const&) */

undefined8 __thiscall
JoltPhysicsDirectSpaceState3D::_try_get_face_index
          (JoltPhysicsDirectSpaceState3D *this,Body *param_1,SubShapeID *param_2)

{
  char cVar1;
  SubShapeID *pSVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = JoltProjectSettings::enable_ray_cast_face_index();
  if (cVar1 != '\0') {
    local_24 = 0xffffffff;
    pSVar2 = (SubShapeID *)
             (**(code **)(**(long **)(param_1 + 0x40) + 0x48))
                       (*(long **)(param_1 + 0x40),param_2,&local_24);
    if (pSVar2[0x18] == (SubShapeID)0x3) {
      uVar3 = JPH::MeshShape::GetTriangleUserData(pSVar2);
      goto LAB_00100447;
    }
  }
  uVar3 = 0xffffffff;
LAB_00100447:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::intersect_ray(PhysicsDirectSpaceState3D::RayParameters const&,
   PhysicsDirectSpaceState3D::RayResult&) */

char __thiscall
JoltPhysicsDirectSpaceState3D::intersect_ray
          (JoltPhysicsDirectSpaceState3D *this,RayParameters *param_1,RayResult *param_2)

{
  SubShapeID SVar1;
  SubShapeID *pSVar2;
  int iVar3;
  undefined4 uVar4;
  RRayCast *pRVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  long in_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  RayParameters local_11b;
  undefined1 local_11a;
  RayParameters local_119;
  undefined **local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  char local_e4;
  JoltQueryFilter3D local_d8 [8];
  BodyFilter local_d0 [8];
  ShapeFilter local_c8 [32];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  code *local_88 [8];
  Body *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) == '\0') {
    JoltSpace3D::try_optimize();
    JoltQueryFilter3D::JoltQueryFilter3D
              (local_d8,this,*(uint *)(param_1 + 0x40),(bool)param_1[0x44],(bool)param_1[0x45],
               (HashSet *)(param_1 + 0x18),(bool)param_1[0x48]);
    local_a8 = *(float *)param_1;
    fStack_a4 = *(float *)(param_1 + 4);
    fStack_a0 = *(float *)(param_1 + 8);
    local_11a = 0;
    local_11b = param_1[0x47];
    local_119 = param_1[0x46];
    local_100 = 0x3f800001;
    local_f8 = 0;
    local_108 = &PTR__JoltQueryCollectorClosest_0010ee30;
    fVar13 = *(float *)(param_1 + 0xc) - local_a8;
    fVar14 = *(float *)(param_1 + 0x10) - fStack_a4;
    fVar15 = *(float *)(param_1 + 0x14) - fStack_a0;
    fStack_8c = *(float *)(param_1 + 0x14) - fStack_a0;
    local_f0 = 0x3f800001ffffffff;
    local_e8 = 0xffffffff;
    local_e4 = '\0';
    fStack_9c = fStack_a0;
    local_98 = fVar13;
    fStack_94 = fVar14;
    fStack_90 = fVar15;
    pRVar5 = (RRayCast *)JoltSpace3D::get_narrow_phase_query();
    local_110 = 0xffffffff;
    local_118 = &PTR__ShapeFilter_0010ecc0;
    JPH::NarrowPhaseQuery::CastRay
              (pRVar5,(RayCastSettings *)&local_a8,(CollisionCollector *)&local_11b,
               (BroadPhaseLayerFilter *)&local_108,(ObjectLayerFilter *)local_d8,local_d0,local_c8);
    cVar8 = local_e4;
    if (local_e4 != '\0') {
      JoltSpace3D::read_body((BodyID *)local_88);
      if ((local_48 == (Body *)0x0) ||
         (pSVar2 = *(SubShapeID **)(local_48 + 0x50), pSVar2 == (SubShapeID *)0x0)) {
        _err_print_error("intersect_ray",
                         "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x1f7,
                         "Parameter \"object\" is null.",0,0);
LAB_00100835:
        cVar8 = '\0';
      }
      else {
        fVar9 = local_f0._4_4_ * local_98 + local_a8;
        fVar11 = local_f0._4_4_ * fStack_94 + fStack_a4;
        fVar12 = local_f0._4_4_ * fStack_90 + fStack_a0;
        if ((param_1[0x46] == (RayParameters)0x0) || (0.0 < local_f0._4_4_)) {
          auVar16 = JPH::Body::GetWorldSpaceSurfaceNormal
                              ((Body *)CONCAT44(fVar11,fVar9),
                               CONCAT44(local_f0._4_4_ * fStack_8c + fStack_9c,fVar12),local_48,
                               &local_e8);
          fVar10 = auVar16._0_4_;
          uVar6 = auVar16._8_8_ << 0x20 | auVar16._0_8_ >> 0x20;
          if (0.0 < fVar15 * auVar16._8_4_ + fVar14 * auVar16._4_4_ + fVar13 * fVar10 + 0.0) {
            fVar10 = 0.0 - fVar10;
            uVar6 = CONCAT44(0.0 - auVar16._8_4_,0.0 - auVar16._4_4_);
          }
        }
        else {
          uVar6 = 0;
          fVar10 = 0.0;
        }
        *(ulong *)(param_2 + 0x10) = uVar6;
        *(float *)param_2 = fVar9;
        *(float *)(param_2 + 4) = fVar11;
        *(float *)(param_2 + 8) = fVar12;
        *(float *)(param_2 + 0xc) = fVar10;
        uVar7 = *(undefined8 *)(pSVar2 + 0x20);
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(pSVar2 + 0x18);
        *(undefined8 *)(param_2 + 0x20) = uVar7;
        uVar7 = JoltObject3D::get_instance();
        SVar1 = pSVar2[0x3c];
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x28) = uVar7;
        if (SVar1 != (SubShapeID)0x2) {
          iVar3 = JoltShapedObject3D::find_shape_index(pSVar2);
          if (iVar3 == -1) {
            _err_print_error("intersect_ray",
                             "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                             0x20f,"Condition \"shape_index == -1\" is true. Returning: false",0,0);
            goto LAB_00100835;
          }
          *(int *)(param_2 + 0x30) = iVar3;
          uVar4 = _try_get_face_index(this,local_48,(SubShapeID *)&local_e8);
          *(undefined4 *)(param_2 + 0x34) = uVar4;
        }
      }
      JoltBodyAccessor3D::release();
      local_88[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_88);
      goto LAB_001005e0;
    }
  }
  else {
    _err_print_error("intersect_ray",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x1d8,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "intersect_ray must not be called while the physics space is being stepped.",0,
                     0);
  }
  cVar8 = '\0';
LAB_001005e0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar8;
}



/* JoltPhysicsDirectSpaceState3D::_generate_manifold(JPH::CollideShapeResult const&,
   JPH::StaticArray<JPH::Vec3, 64u>&, JPH::StaticArray<JPH::Vec3, 64u>&, JPH::Vec3) const */

undefined8
JoltPhysicsDirectSpaceState3D::_generate_manifold
          (undefined8 param_1_00,undefined8 param_2_00,long param_1,undefined8 *param_2,
          uint *param_3,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  auVar2._0_4_ = SQRT(*(float *)(param_2 + 5) * *(float *)(param_2 + 5) +
                      *(float *)(param_2 + 4) * *(float *)(param_2 + 4) + 0.0 +
                      *(float *)((long)param_2 + 0x24) * *(float *)((long)param_2 + 0x24));
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_4_ = auVar2._0_4_;
  auVar2._12_4_ = auVar2._0_4_;
  auVar2 = divps(*(undefined1 (*) [16])(param_2 + 4),auVar2);
  local_48 = auVar2._0_8_;
  uStack_40 = auVar2._8_8_;
  JPH::ManifoldBetweenTwoFaces
            (*param_2,param_2[1],param_2[2],param_2[3],local_48,uStack_40,
             *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x178) + 0x68) + 0x1c8),param_2 + 8,
             param_2 + 0x4a,param_3);
  if (*param_3 < 5) {
    return param_1_00;
  }
  uVar1 = JPH::PruneContactPoints
                    (local_48,uStack_40,param_1_00,param_2_00,param_3,param_6,param_2_00);
  return uVar1;
}



/* JoltPhysicsDirectSpaceState3D::_collide_shape_queries(JPH::Shape const*, JPH::Vec3, JPH::Mat44
   const&, JPH::CollideShapeSettings const&, JPH::Vec3,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&) const */

void JoltPhysicsDirectSpaceState3D::_collide_shape_queries
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = JoltProjectSettings::use_enhanced_internal_edge_removal_for_queries();
  if (cVar2 != '\0') {
    uVar1 = JoltSpace3D::get_narrow_phase_query();
    JPH::NarrowPhaseQuery::CollideShapeWithInternalEdgeRemoval
              (param_1,param_2,param_3,param_4,uVar1,param_6,param_7,param_8,param_9,param_10);
    return;
  }
  uVar1 = JoltSpace3D::get_narrow_phase_query();
  JPH::NarrowPhaseQuery::CollideShape
            (param_1,param_2,param_3,param_4,uVar1,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* JoltPhysicsDirectSpaceState3D::_collide_shape_kinematics(JPH::Shape const*, JPH::Vec3, JPH::Mat44
   const&, JPH::CollideShapeSettings const&, JPH::Vec3,
   JPH::CollisionCollector<JPH::CollideShapeResult, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&,
   JPH::ShapeFilter const&) const */

void JoltPhysicsDirectSpaceState3D::_collide_shape_kinematics
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = JoltProjectSettings::use_enhanced_internal_edge_removal_for_motion_queries();
  if (cVar2 != '\0') {
    uVar1 = JoltSpace3D::get_narrow_phase_query();
    JPH::NarrowPhaseQuery::CollideShapeWithInternalEdgeRemoval
              (param_1,param_2,param_3,param_4,uVar1,param_6,param_7,param_8,param_9,param_10);
    return;
  }
  uVar1 = JoltSpace3D::get_narrow_phase_query();
  JPH::NarrowPhaseQuery::CollideShape
            (param_1,param_2,param_3,param_4,uVar1,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::_body_motion_collide(JoltBody3D const&, Transform3D const&,
   Vector3 const&, float, int, HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >
   const&, HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> > const&,
   PhysicsServer3D::MotionResult*) const [clone .part.0] */

ulong JoltPhysicsDirectSpaceState3D::_body_motion_collide
                (JoltBody3D *param_1,Transform3D *param_2,Vector3 *param_3,float param_4,int param_5
                ,HashSet *param_6,HashSet *param_7,MotionResult *param_8)

{
  long lVar1;
  JoltMotionFilter3D *this;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  long *plVar6;
  HashSet *pHVar7;
  code *pcVar8;
  float *pfVar9;
  SubShapeID *pSVar10;
  undefined8 uVar11;
  JoltBodyAccessor3D *this_00;
  int iVar12;
  int iVar13;
  undefined4 in_register_0000000c;
  long lVar14;
  byte bVar15;
  uint uVar16;
  undefined7 uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  long in_FS_OFFSET;
  undefined8 uVar25;
  undefined4 uVar27;
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined1 local_9030 [36864];
  JoltBodyAccessor3D *pJVar17;
  
  puVar23 = &stack0xffffffffffffffd0;
  do {
    puVar19 = puVar23;
    *(undefined8 *)(puVar19 + -0x1000) = *(undefined8 *)(puVar19 + -0x1000);
    puVar23 = puVar19 + -0x1000;
  } while (puVar19 + -0x1000 != local_9030);
  lVar21 = *(long *)(puVar19 + 0x8040);
  plVar6 = *(long **)(param_2 + 0x90);
  pHVar7 = *(HashSet **)(puVar19 + 0x8038);
  *(ulong *)(puVar19 + -0x1a50) = CONCAT44(in_register_0000000c,param_5);
  *(int *)(puVar19 + -0x1a9c) = (int)param_6;
  *(JoltBody3D **)(puVar19 + -0x1a58) = param_1;
  *(Transform3D **)(puVar19 + -0x1a40) = param_2;
  *(long *)(puVar19 + -0x1a38) = lVar21;
  *(float *)(puVar19 + -0x1a20) = param_4;
  *(undefined8 *)(puVar19 + 0x7ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcVar8 = *(code **)(*plVar6 + 0x18);
  *(undefined8 *)(puVar19 + -0x1ab0) = 0x100c69;
  auVar36 = (*pcVar8)(plVar6);
  this = (JoltMotionFilter3D *)(puVar19 + -0x1a18);
  *(undefined1 (*) [12])(puVar19 + -0x19c8) = auVar36;
  *(undefined8 *)(puVar19 + -0x1ab0) = 0x100caa;
  Transform3D::translated_local((Vector3 *)(puVar19 + -0x1998));
  *(undefined1 (*) [16])(puVar19 + -0x1958) = (undefined1  [16])0x0;
  puVar23 = puVar19 + -0x10a8;
  *(undefined8 *)(puVar19 + -0x1964) = _LC92;
  *(undefined2 *)(puVar19 + -0x1968) = 0;
  puVar19[-0x1944] = 0;
  *(undefined4 *)(puVar19 + -0x1948) = *(undefined4 *)(puVar19 + -0x1a20);
  *(undefined8 *)(puVar19 + -0x1ab0) = 0x100d08;
  JoltMotionFilter3D::JoltMotionFilter3D(this,(JoltBody3D *)param_2,param_7,pHVar7,true);
  *(undefined4 *)(puVar19 + 0x7fd8) = *(undefined4 *)(puVar19 + -0x1a9c);
  *(undefined8 *)(puVar19 + 0x7fb8) = __LC30;
  *(undefined8 *)(puVar19 + 0x7fc0) = _UNK_0010f1a8;
  uVar27 = SUB164(*(undefined1 (*) [16])(puVar19 + -0x1978),0xc);
  *(undefined1 **)(puVar19 + -0x1a30) = puVar19 + -0x14d8;
  *(undefined ***)(puVar19 + -0x10c8) = &PTR__JoltQueryCollectorClosestMulti_0010edf0;
  auVar35._0_12_ = SUB1612(*(undefined1 (*) [16])(puVar19 + -0x1978),4);
  auVar35._12_4_ = uVar27;
  *(undefined4 *)(puVar19 + -0x1a80) = uVar27;
  *(undefined1 (*) [16])(puVar19 + -0x1a68) = auVar35;
  auVar30._4_4_ = *(undefined4 *)(puVar19 + -0x1984);
  auVar30._0_4_ = *(undefined4 *)(puVar19 + -0x1990);
  *(undefined8 *)(puVar19 + -0x1a90) = *(undefined8 *)(puVar19 + -0x1974);
  auVar30._8_4_ = *(undefined4 *)(puVar19 + -0x1978);
  auVar30._12_4_ = 0;
  *(undefined8 *)(puVar19 + -0x14a8) = *(undefined8 *)(puVar19 + -0x1974);
  *(undefined1 (*) [16])(puVar19 + -0x14b8) = auVar30;
  auVar29._4_4_ = *(undefined4 *)(puVar19 + -0x1988);
  auVar29._0_4_ = *(undefined4 *)(puVar19 + -0x1994);
  *(undefined1 **)(puVar19 + 0x7fd0) = puVar23;
  *(undefined4 *)(puVar19 + -0x10c0) = 0x7f7fffff;
  auVar29._8_4_ = *(undefined4 *)(puVar19 + -0x197c);
  auVar29._12_4_ = 0;
  *(undefined1 (*) [16])(puVar19 + -0x14c8) = auVar29;
  auVar32._4_4_ = *(undefined4 *)(puVar19 + -0x198c);
  auVar32._0_4_ = *(undefined4 *)(puVar19 + -0x1998);
  *(undefined8 *)(puVar19 + -0x10b8) = 0;
  *(undefined8 *)(puVar19 + 0x7fc8) = 0x21;
  auVar32._8_4_ = *(undefined4 *)(puVar19 + -0x1980);
  auVar32._12_4_ = 0;
  *(undefined1 (*) [16])(puVar19 + -0x14d8) = auVar32;
  *(undefined4 *)(puVar19 + -0x14a0) = *(undefined4 *)(puVar19 + -0x1a80);
  *(undefined4 *)(puVar19 + -0x149c) = 0x3f800000;
  *(undefined1 **)(puVar19 + -0x1ab8) = puVar19 + -0x1a00;
  *(undefined1 **)(puVar19 + -0x1ac0) = puVar19 + -0x1a08;
  *(undefined1 **)(puVar19 + -0x1ac8) = puVar19 + -0x1a10;
  *(undefined8 *)(puVar19 + -0x1ad0) = 0x100e90;
  _collide_shape_kinematics
            (0x3f8000003f800000,*(undefined8 *)(puVar19 + -0x1a58),plVar6,puVar19 + -0x14d8,
             puVar19 + -0x1968,puVar19 + -0x10c8,this);
  lVar14 = *(long *)(puVar19 + 0x7fc0);
  uVar20 = CONCAT71((int7)((ulong)this >> 8),lVar14 == 0) & 0xffffffff;
  uVar18 = (undefined7)(uVar20 >> 8);
  bVar15 = (byte)uVar20 | lVar21 == 0;
  pJVar17 = (JoltBodyAccessor3D *)CONCAT71(uVar18,bVar15);
  if (bVar15 == 0) {
    *(undefined8 *)(puVar19 + -0x1a70) = 0;
    lVar21 = *(long *)(puVar19 + 0x7fd0);
    uVar20 = 0;
    if (0 < (int)lVar14) {
      *(undefined4 *)(puVar19 + -0x1a94) = 0;
      puVar19[-0x1a19] = 0;
      *(undefined1 **)(puVar19 + -0x1a28) = puVar23;
      do {
        lVar1 = lVar21 + *(long *)(puVar19 + -0x1a70);
        fVar2 = *(float *)(lVar1 + 0x30);
        *(float *)(puVar19 + -0x1a98) = *(float *)(puVar19 + -0x1a20) + fVar2;
        if (0.0 < *(float *)(puVar19 + -0x1a20) + fVar2) {
          pfVar9 = *(float **)(puVar19 + -0x1a50);
          fVar2 = pfVar9[1];
          fVar3 = pfVar9[2];
          auVar26._0_4_ =
               SQRT(*(float *)(lVar1 + 0x28) * *(float *)(lVar1 + 0x28) +
                    *(float *)(lVar1 + 0x20) * *(float *)(lVar1 + 0x20) + 0.0 +
                    *(float *)(lVar1 + 0x24) * *(float *)(lVar1 + 0x24));
          auVar26._4_4_ = auVar26._0_4_;
          auVar26._8_4_ = auVar26._0_4_;
          auVar26._12_4_ = auVar26._0_4_;
          auVar30 = divps(*(undefined1 (*) [16])(lVar1 + 0x20),auVar26);
          fVar4 = *pfVar9;
          fVar31 = 0.0 - auVar30._0_4_;
          fVar33 = 0.0 - auVar30._4_4_;
          fVar34 = 0.0 - auVar30._8_4_;
          *(ulong *)(puVar19 + -0x19b8) = CONCAT44(fVar33,fVar31);
          *(float *)(puVar19 + -0x19b0) = fVar34;
          fVar28 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
          if (0.0 < fVar28) {
            fVar28 = SQRT(fVar28);
            if (__LC31 <= (double)((fVar4 / fVar28) * fVar31 + (fVar2 / fVar28) * fVar33 +
                                  (fVar3 / fVar28) * fVar34)) goto LAB_00100f92;
          }
          *(undefined4 *)(puVar19 + -0x18e8) = 0;
          *(undefined4 *)(puVar19 + -0x14d8) = 0;
          if (*(int *)(puVar19 + -0x1a9c) < 2) {
            auVar30 = *(undefined1 (*) [16])(lVar1 + 0x10);
            *(undefined4 *)(puVar19 + -0x14d8) = 1;
            *(undefined1 (*) [16])(puVar19 + -0x14c8) = auVar30;
          }
          else {
            *(undefined8 *)(puVar19 + -0x1ab0) = 0x1012d6;
            _generate_manifold(*(undefined8 *)(puVar19 + -0x1a68),*(undefined8 *)(puVar19 + -0x1a60)
                               ,*(undefined8 *)(puVar19 + -0x1a58),lVar1,puVar19 + -0x18e8,
                               *(undefined8 *)(puVar19 + -0x1a30));
          }
          *(BodyID **)(puVar19 + -0x1a48) = (BodyID *)(puVar19 + -0x1938);
          *(undefined8 *)(puVar19 + -0x1ab0) = 0x1010c8;
          JoltSpace3D::read_body((BodyID *)(puVar19 + -0x1938));
          if (((*(long *)(puVar19 + -0x18f8) == 0) ||
              (pSVar10 = *(SubShapeID **)(*(long *)(puVar19 + -0x18f8) + 0x50),
              pSVar10 == (SubShapeID *)0x0)) || (pSVar10[0x3c] == (SubShapeID)0x2)) {
            pJVar17 = (JoltBodyAccessor3D *)(ulong)(byte)puVar19[-0x1a19];
            puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
            *(undefined8 *)(puVar19 + -0x1ab0) = 0x101365;
            _err_print_error("_body_motion_collide",
                             "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                             0x16c,"Parameter \"collider\" is null.",0,0);
          }
          else {
            *(undefined8 *)(puVar19 + -0x1ab0) = 0x101100;
            iVar12 = JoltShapedObject3D::find_shape_index(*(SubShapeID **)(puVar19 + -0x1a40));
            if (iVar12 == -1) {
              pJVar17 = (JoltBodyAccessor3D *)(ulong)(byte)puVar19[-0x1a19];
              puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
              *(undefined8 *)(puVar19 + -0x1ab0) = 0x1013d6;
              _err_print_error("_body_motion_collide",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x16f,"Condition \"local_shape == -1\" is true. Returning: false",0,0
                              );
            }
            else {
              *(undefined8 *)(puVar19 + -0x1ab0) = 0x101117;
              iVar13 = JoltShapedObject3D::find_shape_index(pSVar10);
              if (iVar13 != -1) {
                puVar22 = (undefined8 *)(puVar19 + -0x14c8);
                if ((ulong)*(uint *)(puVar19 + -0x14d8) != 0) {
                  uVar16 = (uint)uVar20;
                  *(int *)(puVar19 + -0x1a7c) = iVar12;
                  puVar24 = (undefined8 *)(*(long *)(puVar19 + -0x1a38) + 0x28 + uVar20 * 0x50);
                  *(undefined8 **)(puVar19 + -0x1a78) =
                       puVar22 + (ulong)*(uint *)(puVar19 + -0x14d8) * 2;
                  *(undefined1 **)(puVar19 + -0x1a88) = puVar19 + -0x19a8;
                  do {
                    uVar16 = uVar16 + 1;
                    uVar25 = *puVar22;
                    uVar11 = *(undefined8 *)(puVar19 + -0x1a88);
                    *(float *)(puVar19 + -0x19a0) =
                         *(float *)(puVar19 + -0x1a80) + *(float *)(puVar22 + 1);
                    uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(puVar19 + -0x1a90) >> 0x20),
                                      (float)uVar25 + (float)*(undefined8 *)(puVar19 + -0x1a90));
                    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar19 + -0x19a0);
                    *(undefined8 *)((long)puVar24 + 0xc) = *(undefined8 *)(puVar19 + -0x19b8);
                    *(undefined8 *)(puVar19 + -0x19a8) = uVar25;
                    *(undefined4 *)((long)puVar24 + 0x14) = *(undefined4 *)(puVar19 + -0x19b0);
                    lVar21 = *(long *)pSVar10;
                    *puVar24 = uVar25;
                    pcVar8 = *(code **)(lVar21 + 0x50);
                    *(undefined8 *)(puVar19 + -0x1ab0) = 0x101209;
                    auVar36 = (*pcVar8)(pSVar10,uVar11);
                    *(undefined1 (*) [12])(puVar24 + 3) = auVar36;
                    *(undefined8 *)(puVar19 + -0x1ab0) = 0x10121d;
                    auVar36 = JoltShapedObject3D::get_angular_velocity();
                    uVar27 = *(undefined4 *)(puVar19 + -0x1a98);
                    uVar5 = *(undefined4 *)(puVar19 + -0x1a7c);
                    *(long *)((long)puVar24 + 0x24) = auVar36._0_8_;
                    *(undefined4 *)((long)puVar24 + 0x34) = uVar5;
                    *(undefined4 *)(puVar24 + 6) = uVar27;
                    uVar25 = *(undefined8 *)(pSVar10 + 0x18);
                    uVar11 = *(undefined8 *)(pSVar10 + 0x20);
                    *(int *)((long)puVar24 + 0x2c) = auVar36._8_4_;
                    *(int *)(puVar24 + 9) = iVar13;
                    puVar24[7] = uVar11;
                    puVar24[8] = uVar25;
                    if (*(uint *)(puVar19 + -0x1a9c) == uVar16) {
                      puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
                      uVar20 = (ulong)uVar16;
                      goto LAB_00101265;
                    }
                    puVar22 = puVar22 + 2;
                    puVar24 = puVar24 + 10;
                  } while (*(undefined8 **)(puVar19 + -0x1a78) != puVar22);
                  uVar20 = (ulong)(int)uVar16;
                }
                if (*(int *)(puVar19 + -0x1a9c) != (int)uVar20) {
                  pJVar17 = *(JoltBodyAccessor3D **)(puVar19 + -0x1a48);
                  *(undefined8 *)(puVar19 + -0x1ab0) = 0x1012fa;
                  JoltBodyAccessor3D::release();
                  *(code **)(puVar19 + -0x1938) = _err_print_error;
                  *(undefined8 *)(puVar19 + -0x1ab0) = 0x101311;
                  JoltBodyAccessor3D::~JoltBodyAccessor3D(pJVar17);
                  lVar21 = *(long *)(puVar19 + 0x7fd0);
                  lVar14 = *(long *)(puVar19 + 0x7fc0);
                  goto LAB_00100f92;
                }
                puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
LAB_00101265:
                pJVar17 = *(JoltBodyAccessor3D **)(puVar19 + -0x1a48);
                *(undefined8 *)(puVar19 + -0x1ab0) = 0x101272;
                JoltBodyAccessor3D::release();
                *(code **)(puVar19 + -0x1938) = _err_print_error;
                *(undefined8 *)(puVar19 + -0x1ab0) = 0x101289;
                JoltBodyAccessor3D::~JoltBodyAccessor3D(pJVar17);
                lVar21 = *(long *)(puVar19 + 0x7fd0);
                pJVar17 = (JoltBodyAccessor3D *)
                          CONCAT71((int7)((ulong)pJVar17 >> 8),0 < (int)uVar20);
                goto LAB_00101296;
              }
              pJVar17 = (JoltBodyAccessor3D *)(ulong)(byte)puVar19[-0x1a19];
              puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
              *(undefined8 *)(puVar19 + -0x1ab0) = 0x10140d;
              _err_print_error("_body_motion_collide",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x172,"Condition \"collider_shape == -1\" is true. Returning: false",
                               0,0);
            }
          }
          this_00 = *(JoltBodyAccessor3D **)(puVar19 + -0x1a48);
          *(undefined8 *)(puVar19 + -0x1ab0) = 0x101372;
          JoltBodyAccessor3D::release();
          *(code **)(puVar19 + -0x1938) = _err_print_error;
          *(undefined8 *)(puVar19 + -0x1ab0) = 0x101389;
          JoltBodyAccessor3D::~JoltBodyAccessor3D(this_00);
          lVar21 = *(long *)(puVar19 + 0x7fd0);
          goto LAB_00100ebe;
        }
LAB_00100f92:
        *(int *)(puVar19 + -0x1a94) = *(int *)(puVar19 + -0x1a94) + 1;
        *(long *)(puVar19 + -0x1a70) = *(long *)(puVar19 + -0x1a70) + 0x460;
      } while (*(int *)(puVar19 + -0x1a94) < (int)lVar14);
      puVar23 = *(undefined1 **)(puVar19 + -0x1a28);
      pJVar17 = (JoltBodyAccessor3D *)CONCAT71((int7)((ulong)pJVar17 >> 8),0 < (int)uVar20);
    }
LAB_00101296:
    *(int *)(*(long *)(puVar19 + -0x1a38) + 0xa28) = (int)uVar20;
  }
  else {
    lVar21 = *(long *)(puVar19 + 0x7fd0);
    pJVar17 = (JoltBodyAccessor3D *)CONCAT71(uVar18,lVar14 != 0);
  }
LAB_00100ebe:
  *(undefined ***)(puVar19 + -0x10c8) = &PTR__JoltQueryCollectorClosestMulti_0010edf0;
  if (lVar21 != 0) {
    *(undefined8 *)(puVar19 + 0x7fc0) = 0;
    if (0x8c00 < (ulong)(lVar21 - (long)puVar23)) {
      *(undefined8 *)(puVar19 + -0x1ab0) = 0x10139c;
      (*JPH::Free)();
    }
  }
  if (*(long *)(puVar19 + 0x7ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)pJVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -0x1ab0) = &UNK_00101436;
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::_body_motion_collide(JoltBody3D const&, Transform3D const&,
   Vector3 const&, float, int, HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >
   const&, HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> > const&,
   PhysicsServer3D::MotionResult*) const */

undefined8
JoltPhysicsDirectSpaceState3D::_body_motion_collide
          (JoltBody3D *param_1,Transform3D *param_2,Vector3 *param_3,float param_4,int param_5,
          HashSet *param_6,HashSet *param_7,MotionResult *param_8)

{
  undefined8 uVar1;
  
  if ((int)param_6 != 0) {
    uVar1 = _body_motion_collide(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::_body_motion_recover(JoltBody3D const&, Transform3D const&, float,
   HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> > const&, HashSet<ObjectID,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID> > const&, Vector3&) const */

undefined4 __thiscall
JoltPhysicsDirectSpaceState3D::_body_motion_recover
          (JoltPhysicsDirectSpaceState3D *this,JoltBody3D *param_1,Transform3D *param_2,
          float param_3,HashSet *param_4,HashSet *param_5,Vector3 *param_6)

{
  JoltBodyAccessor3D *this_00;
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined1 *puVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 local_8030 [32768];
  
  puVar7 = &stack0xffffffffffffffd0;
  do {
    puVar12 = puVar7;
    *(undefined8 *)(puVar12 + -0x1000) = *(undefined8 *)(puVar12 + -0x1000);
    puVar7 = puVar12 + -0x1000;
  } while (puVar12 + -0x1000 != local_8030);
  *(float *)(puVar12 + -0x1e78) = param_3;
  *(Vector3 **)(puVar12 + -0x1d88) = param_6;
  *(undefined8 *)(puVar12 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar12 + -0x1e80) = 0x1014d2;
  iVar8 = JoltProjectSettings::get_motion_query_recovery_iterations();
  *(int *)(puVar12 + -0x1d8c) = iVar8;
  *(undefined8 *)(puVar12 + -0x1e80) = 0x1014e1;
  uVar17 = JoltProjectSettings::get_motion_query_recovery_amount();
  plVar3 = *(long **)(param_1 + 0x90);
  *(undefined4 *)(puVar12 + -0x1e04) = uVar17;
  lVar16 = *plVar3;
  *(long **)(puVar12 + -0x1e60) = plVar3;
  pcVar4 = *(code **)(lVar16 + 0x18);
  *(undefined8 *)(puVar12 + -0x1e80) = 0x1014fc;
  auVar28 = (*pcVar4)(plVar3);
  *(undefined1 (*) [12])(puVar12 + -0x1d28) = auVar28;
  *(undefined8 *)(puVar12 + -0x1e80) = 0x10153d;
  Transform3D::translated_local((Vector3 *)(puVar12 + -0x1d18));
  *(undefined8 *)(puVar12 + -0x1e00) = *(undefined8 *)(puVar12 + -0x1cf4);
  *(undefined8 *)(puVar12 + -0x1ce4) = _LC92;
  *(undefined2 *)(puVar12 + -0x1ce8) = 0x100;
  puVar12[-0x1cc4] = 0;
  *(undefined8 *)(puVar12 + -0x1e18) = *(undefined8 *)(puVar12 + -0x1cf4);
  *(ulong *)(puVar12 + -0x1e10) =
       CONCAT44(*(undefined4 *)(puVar12 + -0x1cec),*(undefined4 *)(puVar12 + -0x1cec));
  *(undefined1 (*) [16])(puVar12 + -0x1cd8) = (undefined1  [16])0x0;
  *(JoltMotionFilter3D **)(puVar12 + -0x1dc8) = (JoltMotionFilter3D *)(puVar12 + -0x1d78);
  *(undefined4 *)(puVar12 + -0x1cc8) = *(undefined4 *)(puVar12 + -0x1e78);
  *(undefined8 *)(puVar12 + -0x1e80) = 0x1015d8;
  JoltMotionFilter3D::JoltMotionFilter3D
            ((JoltMotionFilter3D *)(puVar12 + -0x1d78),param_1,param_4,param_5,true);
  *(undefined4 *)(puVar12 + -0x1c60) = 0x7f7fffff;
  *(undefined8 *)(puVar12 + -0x1c58) = 0;
  *(undefined ***)(puVar12 + -0x1c68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
  *(undefined4 *)(puVar12 + 0x6fd8) = 0x20;
  *(undefined1 **)(puVar12 + 0x6fd0) = puVar12 + -0x1c48;
  *(undefined8 *)(puVar12 + 0x6fc8) = 0x20;
  *(undefined8 *)(puVar12 + 0x6fb8) = __LC14;
  *(undefined8 *)(puVar12 + 0x6fc0) = _UNK_0010f188;
  if (iVar8 < 1) {
    uVar17 = 0;
  }
  else {
    *(undefined4 *)(puVar12 + -0x1d90) = 0;
    *(undefined1 **)(puVar12 + -0x1da8) = puVar12 + -0x1c68;
    uVar17 = 0;
    *(undefined1 **)(puVar12 + -0x1db0) = puVar12 + -0x1ce8;
    auVar22._4_4_ = *(undefined4 *)(puVar12 + -0x1d04);
    auVar22._0_4_ = *(undefined4 *)(puVar12 + -0x1d10);
    *(undefined1 **)(puVar12 + -0x1da0) = puVar12 + -0x1d60;
    auVar22._8_4_ = *(undefined4 *)(puVar12 + -0x1cf8);
    auVar22._12_4_ = 0;
    *(undefined1 **)(puVar12 + -0x1db8) = puVar12 + -0x1d68;
    *(undefined1 (*) [16])(puVar12 + -0x1dd8) = auVar22;
    this_00 = (JoltBodyAccessor3D *)(puVar12 + -0x1cb8);
    auVar26._4_4_ = *(undefined4 *)(puVar12 + -0x1d08);
    auVar26._0_4_ = *(undefined4 *)(puVar12 + -0x1d14);
    *(undefined1 **)(puVar12 + -0x1dc0) = puVar12 + -0x1d70;
    auVar26._8_4_ = *(undefined4 *)(puVar12 + -0x1cfc);
    auVar26._12_4_ = 0;
    *(undefined1 **)(puVar12 + -0x1d80) = puVar12 + -0x1c48;
    *(undefined1 (*) [16])(puVar12 + -0x1de8) = auVar26;
    auVar27._4_4_ = *(undefined4 *)(puVar12 + -0x1d0c);
    auVar27._0_4_ = *(undefined4 *)(puVar12 + -0x1d18);
    *(undefined8 *)(puVar12 + -0x1d98) = *(undefined8 *)(puVar12 + -0x1e60);
    auVar27._8_4_ = *(undefined4 *)(puVar12 + -0x1d00);
    auVar27._12_4_ = 0;
    *(undefined1 (*) [16])(puVar12 + -0x1df8) = auVar27;
    fVar18 = *(float *)(puVar12 + -0x1e78);
    do {
      *(float *)(puVar12 + -0x1e78) = fVar18;
      uVar10 = *(undefined8 *)(puVar12 + -0x1e00);
      *(undefined4 *)(puVar12 + -0x1c60) = 0x7f7fffff;
      *(undefined8 *)(puVar12 + 0x6fc0) = 0;
      *(undefined4 *)(puVar12 + -0x1e28) = *(undefined4 *)(puVar12 + -0x1e10);
      *(int *)(puVar12 + -0x1e20) = (int)((ulong)uVar10 >> 0x20);
      *(int *)(puVar12 + -0x1e1c) = (int)uVar10;
      *(undefined8 *)(puVar12 + -0x1cb8) = *(undefined8 *)(puVar12 + -0x1df8);
      *(undefined8 *)(puVar12 + -0x1cb0) = *(undefined8 *)(puVar12 + -0x1df0);
      *(undefined8 *)(puVar12 + -0x1c88) = uVar10;
      *(undefined8 *)(puVar12 + -0x1ca8) = *(undefined8 *)(puVar12 + -0x1de8);
      *(undefined8 *)(puVar12 + -0x1ca0) = *(undefined8 *)(puVar12 + -0x1de0);
      *(undefined4 *)(puVar12 + -0x1c80) = *(undefined4 *)(puVar12 + -0x1e28);
      *(undefined8 *)(puVar12 + -0x1c98) = *(undefined8 *)(puVar12 + -0x1dd8);
      *(undefined8 *)(puVar12 + -0x1c90) = *(undefined8 *)(puVar12 + -0x1dd0);
      *(undefined4 *)(puVar12 + -0x1c7c) = 0x3f800000;
      *(undefined8 *)(puVar12 + -0x1e88) = *(undefined8 *)(puVar12 + -0x1da0);
      *(undefined8 *)(puVar12 + -0x1e90) = *(undefined8 *)(puVar12 + -0x1db8);
      *(undefined8 *)(puVar12 + -0x1e98) = *(undefined8 *)(puVar12 + -0x1dc0);
      *(undefined8 *)(puVar12 + -0x1ea0) = 0x10183f;
      _collide_shape_kinematics
                (0x3f8000003f800000,0x3f8000003f800000,this,*(undefined8 *)(puVar12 + -0x1d98),
                 this_00,*(undefined8 *)(puVar12 + -0x1db0),*(undefined8 *)(puVar12 + -0x1da8),
                 *(undefined8 *)(puVar12 + -0x1dc8));
      lVar16 = *(long *)(puVar12 + 0x6fc0);
      uVar1 = *(undefined4 *)(puVar12 + -0x1e78);
      if (lVar16 == 0) break;
      if ((int)lVar16 < 1) {
        lVar16 = *(long *)(puVar12 + -0x1d80);
        lVar15 = *(long *)(puVar12 + 0x6fd0);
        uVar17 = 1;
        goto LAB_00101cc9;
      }
      *(long *)(puVar12 + -0x1e60) = lVar16;
      lVar15 = 0;
      *(undefined4 *)(puVar12 + -0x1e78) = 0;
      lVar16 = ((ulong)((int)lVar16 - 1) + 1) * 0x460;
      *(undefined4 *)(puVar12 + -0x1e58) = uVar1;
      do {
        *(undefined8 *)(puVar12 + -0x1e80) = 0x1018ec;
        JoltSpace3D::read_body((BodyID *)this_00);
        if (((*(long *)(puVar12 + -0x1c78) == 0) ||
            (lVar5 = *(long *)(*(long *)(puVar12 + -0x1c78) + 0x50), lVar5 == 0)) ||
           (*(char *)(lVar5 + 0x3c) != '\x01')) {
          *(undefined8 *)(puVar12 + -0x1e80) = 0x101929;
          _err_print_error("_body_motion_recover",
                           "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0xd3
                           ,"Condition \"other_body == nullptr\" is true. Continuing.",0,0);
        }
        else {
          *(float *)(puVar12 + -0x1e78) = *(float *)(puVar12 + -0x1e78) + *(float *)(lVar5 + 500);
        }
        lVar15 = lVar15 + 0x460;
        *(undefined8 *)(puVar12 + -0x1e80) = 0x1018b9;
        JoltBodyAccessor3D::release();
        *(code **)(puVar12 + -0x1cb8) = _err_print_error;
        *(undefined8 *)(puVar12 + -0x1e80) = 0x1018c9;
        uVar10 = JoltBodyAccessor3D::~JoltBodyAccessor3D(this_00);
      } while (lVar16 - lVar15 != 0);
      fVar18 = *(float *)(puVar12 + -0x1e58);
      fVar19 = *(float *)(puVar12 + -0x1e78) / (float)(int)*(undefined8 *)(puVar12 + -0x1e60);
      if (*(float *)(puVar12 + -0x1e78) / (float)(int)*(undefined8 *)(puVar12 + -0x1e60) <= _LC37) {
        fVar19 = _LC37;
      }
      lVar15 = 0;
      *(undefined4 *)(puVar12 + -0x1e44) = 0;
      *(undefined1 (*) [16])(puVar12 + -0x1e58) = (undefined1  [16])0x0;
      *(float *)(puVar12 + -0x1e08) = fVar19;
      *(undefined1 (*) [16])(puVar12 + -0x1e78) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar12 + -0x1e60) = 0;
      *(undefined4 *)(puVar12 + -0x1e40) = 0;
      do {
        while( true ) {
          pfVar11 = (float *)(*(long *)(puVar12 + 0x6fd0) + lVar15);
          auVar20._0_4_ =
               SQRT(pfVar11[10] * pfVar11[10] +
                    pfVar11[8] * pfVar11[8] + 0.0 + pfVar11[9] * pfVar11[9]);
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_4_ = auVar20._0_4_;
          auVar20._12_4_ = auVar20._0_4_;
          auVar22 = divps(*(undefined1 (*) [16])(pfVar11 + 8),auVar20);
          fVar19 = *pfVar11;
          fVar25 = pfVar11[4];
          fVar21 = auVar22._0_4_;
          fVar23 = auVar22._4_4_;
          fVar24 = auVar22._8_4_;
          *(undefined1 (*) [16])(puVar12 + -0x1e38) = auVar22;
          fVar19 = ((fVar19 + *(float *)(puVar12 + -0x1e1c) + fVar18 * fVar21 +
                    *(float *)(puVar12 + -0x1e40)) * fVar21 +
                    (pfVar11[1] + *(float *)(puVar12 + -0x1e20) + fVar18 * fVar23 +
                    *(float *)(puVar12 + -0x1e44)) * fVar23 +
                   (pfVar11[2] + *(float *)(puVar12 + -0x1e28) + fVar18 * fVar24 +
                   *(float *)(puVar12 + -0x1e58)) * fVar24) -
                   ((*(float *)(puVar12 + -0x1e1c) + fVar25) * fVar21 +
                    fVar23 * (pfVar11[5] + *(float *)(puVar12 + -0x1e20)) +
                   fVar24 * (pfVar11[6] + *(float *)(puVar12 + -0x1e28)));
          *(float *)(puVar12 + -0x1e3c) = fVar19;
          if (fVar19 <= 0.0) break;
          *(float *)(puVar12 + -0x1e24) = fVar18;
          *(undefined8 *)(puVar12 + -0x1e80) = 0x101b7f;
          JoltSpace3D::read_body((BodyID *)this_00);
          if ((*(long *)(puVar12 + -0x1c78) != 0) &&
             (lVar5 = *(long *)(*(long *)(puVar12 + -0x1c78) + 0x50), lVar5 != 0)) {
            fVar18 = *(float *)(puVar12 + -0x1e3c);
            if (*(char *)(lVar5 + 0x3c) == '\x01') {
              *(undefined4 *)(puVar12 + -0x1e3c) = *(undefined4 *)(puVar12 + -0x1e24);
              fVar18 = fVar18 * *(float *)(puVar12 + -0x1e04) *
                       (*(float *)(lVar5 + 500) / *(float *)(puVar12 + -0x1e08));
              *(ulong *)(puVar12 + -0x1e60) =
                   CONCAT44((float)((ulong)*(undefined8 *)(puVar12 + -0x1e60) >> 0x20) -
                            fVar18 * *(float *)(puVar12 + -0x1e34),
                            (float)*(undefined8 *)(puVar12 + -0x1e60) -
                            fVar18 * *(float *)(puVar12 + -0x1e38));
              *(float *)(puVar12 + -0x1e78) =
                   *(float *)(puVar12 + -0x1e78) - *(float *)(puVar12 + -0x1e38) * fVar18;
              *(float *)(puVar12 + -0x1e74) =
                   *(float *)(puVar12 + -0x1e74) - *(float *)(puVar12 + -0x1e34) * fVar18;
              *(float *)(puVar12 + -0x1e70) =
                   *(float *)(puVar12 + -0x1e70) - *(float *)(puVar12 + -0x1e30) * fVar18;
              *(float *)(puVar12 + -0x1e6c) =
                   *(float *)(puVar12 + -0x1e6c) - *(float *)(puVar12 + -0x1e30) * fVar18;
              *(undefined8 *)(puVar12 + -0x1e80) = 0x1019f7;
              JoltBodyAccessor3D::release();
              *(code **)(puVar12 + -0x1cb8) = _err_print_error;
              *(undefined8 *)(puVar12 + -0x1e80) = 0x101a07;
              uVar10 = JoltBodyAccessor3D::~JoltBodyAccessor3D(this_00);
              *(int *)(puVar12 + -0x1e40) = (int)*(undefined8 *)(puVar12 + -0x1e60);
              *(int *)(puVar12 + -0x1e44) = (int)((ulong)*(undefined8 *)(puVar12 + -0x1e60) >> 0x20)
              ;
              fVar18 = *(float *)(puVar12 + -0x1e3c);
              *(undefined4 *)(puVar12 + -0x1e58) = *(undefined4 *)(puVar12 + -0x1e70);
              *(undefined4 *)(puVar12 + -0x1e54) = *(undefined4 *)(puVar12 + -0x1e70);
              *(undefined4 *)(puVar12 + -0x1e50) = *(undefined4 *)(puVar12 + -0x1e6c);
              *(undefined4 *)(puVar12 + -0x1e4c) = *(undefined4 *)(puVar12 + -0x1e6c);
              break;
            }
          }
          *(undefined4 *)(puVar12 + -0x1e3c) = *(undefined4 *)(puVar12 + -0x1e24);
          lVar15 = lVar15 + 0x460;
          *(undefined8 *)(puVar12 + -0x1e80) = 0x101bde;
          _err_print_error("_body_motion_recover",
                           "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0xf2
                           ,"Condition \"other_body == nullptr\" is true. Continuing.",0,0);
          *(undefined8 *)(puVar12 + -0x1e80) = 0x101be6;
          JoltBodyAccessor3D::release();
          *(code **)(puVar12 + -0x1cb8) = _err_print_error;
          *(undefined8 *)(puVar12 + -0x1e80) = 0x101bf6;
          uVar10 = JoltBodyAccessor3D::~JoltBodyAccessor3D(this_00);
          fVar18 = *(float *)(puVar12 + -0x1e3c);
          if (lVar16 - lVar15 == 0) goto LAB_00101c05;
        }
        lVar15 = lVar15 + 0x460;
      } while (lVar16 - lVar15 != 0);
LAB_00101c05:
      uVar14 = (uint)CONCAT71(0x1073,!NAN(*(float *)(puVar12 + -0x1e40)));
      if (*(float *)(puVar12 + -0x1e40) != 0.0) {
        uVar14 = 0;
      }
      uVar9 = (uint)CONCAT71((int7)((ulong)uVar10 >> 8),!NAN(*(float *)(puVar12 + -0x1e44)));
      if (*(float *)(puVar12 + -0x1e44) != 0.0) {
        uVar9 = 0;
      }
      bVar13 = (byte)(uVar14 & uVar9) & *(float *)(puVar12 + -0x1e58) == 0.0;
      uVar17 = CONCAT31((int3)((uVar14 & uVar9) >> 8),bVar13);
      if (bVar13 != 0) break;
      puVar6 = *(undefined8 **)(puVar12 + -0x1d88);
      uVar10 = *(undefined8 *)(puVar12 + -0x1e00);
      uVar17 = 1;
      *(int *)(puVar12 + -0x1d90) = *(int *)(puVar12 + -0x1d90) + 1;
      uVar2 = *puVar6;
      fVar19 = *(float *)(puVar6 + 1);
      fVar25 = (float)*(undefined8 *)(puVar12 + -0x1e60);
      fVar21 = (float)((ulong)*(undefined8 *)(puVar12 + -0x1e60) >> 0x20);
      *(float *)(puVar12 + -0x1e18) = *(float *)(puVar12 + -0x1e78) + *(float *)(puVar12 + -0x1e18);
      *(float *)(puVar12 + -0x1e14) = *(float *)(puVar12 + -0x1e74) + *(float *)(puVar12 + -0x1e14);
      *(float *)(puVar12 + -0x1e10) = *(float *)(puVar12 + -0x1e70) + *(float *)(puVar12 + -0x1e10);
      *(float *)(puVar12 + -0x1e0c) = *(float *)(puVar12 + -0x1e6c) + *(float *)(puVar12 + -0x1e0c);
      *(float *)(puVar6 + 1) = *(float *)(puVar12 + -0x1e58) + fVar19;
      *(ulong *)(puVar12 + -0x1e00) =
           CONCAT44((float)((ulong)uVar10 >> 0x20) + fVar21,(float)uVar10 + fVar25);
      *puVar6 = CONCAT44((float)((ulong)uVar2 >> 0x20) + fVar21,(float)uVar2 + fVar25);
    } while (*(int *)(puVar12 + -0x1d8c) != *(int *)(puVar12 + -0x1d90));
    lVar16 = *(long *)(puVar12 + -0x1d80);
    lVar15 = *(long *)(puVar12 + 0x6fd0);
LAB_00101cc9:
    *(undefined ***)(puVar12 + -0x1c68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
    if ((lVar15 != 0) && (*(undefined8 *)(puVar12 + 0x6fc0) = 0, 0x87a0 < (ulong)(lVar15 - lVar16)))
    {
      *(undefined8 *)(puVar12 + -0x1e80) = 0x101d24;
      (*JPH::Free)();
    }
  }
  if (*(long *)(puVar12 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x1e80) = &UNK_00101d2f;
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::JoltPhysicsDirectSpaceState3D(JoltSpace3D*) */

void __thiscall
JoltPhysicsDirectSpaceState3D::JoltPhysicsDirectSpaceState3D
          (JoltPhysicsDirectSpaceState3D *this,JoltSpace3D *param_1)

{
  PhysicsDirectSpaceState3D::PhysicsDirectSpaceState3D((PhysicsDirectSpaceState3D *)this);
  *(JoltSpace3D **)(this + 0x178) = param_1;
  *(undefined ***)this = &PTR__initialize_classv_0010ee70;
  return;
}



/* JoltPhysicsDirectSpaceState3D::_cast_motion_impl(JPH::Shape const&, Transform3D const&, Vector3
   const&, Vector3 const&, bool, bool, JPH::CollideShapeSettings const&, JPH::BroadPhaseLayerFilter
   const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&, float&,
   float&) const::{lambda(JPH::Body const&, float)#1}::TEMPNAMEPLACEHOLDERVALUE(JPH::Body const&,
   float) const */

_func__cast_motion_impl_Shape_const_ptr_Transform3D_const_ptr_Vector3_const_ptr_Vector3_const_ptr_bool_bool_CollideShapeSettings_const_ptr_BroadPhaseLayerFilter_const_ptr_ObjectLayerFilter_const_ptr_BodyFilter_const_ptr_ShapeFilter_const_ptr_float_ptr_float_ptr
* __thiscall
const::{lambda(JPH::Body_const&,float)#1}::operator()
          (_lambda_JPH__Body_const__float__1_ *this,Body *param_1,float param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uVar7;
  float *pfVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long *plVar16;
  code *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 *puVar22;
  _func__cast_motion_impl_Shape_const_ptr_Transform3D_const_ptr_Vector3_const_ptr_Vector3_const_ptr_bool_bool_CollideShapeSettings_const_ptr_BroadPhaseLayerFilter_const_ptr_ObjectLayerFilter_const_ptr_BodyFilter_const_ptr_ShapeFilter_const_ptr_float_ptr_float_ptr
  *p_Var23;
  undefined1 *puVar24;
  long lVar25;
  long in_FS_OFFSET;
  undefined1 local_9010 [36864];
  
  puVar22 = &stack0xfffffffffffffff0;
  do {
    puVar24 = puVar22;
    *(undefined8 *)(puVar24 + -0x1000) = *(undefined8 *)(puVar24 + -0x1000);
    puVar22 = puVar24 + -0x1000;
  } while (puVar24 + -0x1000 != local_9010);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(puVar24 + 0x7ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  lVar25 = *(long *)this;
  pfVar8 = *(float **)(this + 8);
  fVar18 = *pfVar8;
  fVar19 = pfVar8[1];
  fVar20 = pfVar8[2];
  fVar21 = pfVar8[3];
  lVar9 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(puVar24 + -0x1938) = uVar10;
  *(undefined8 *)(puVar24 + -0x1930) = uVar12;
  *(long *)(puVar24 + -0x1928) = lVar9;
  *(float *)(lVar25 + 0x1070) = param_2 * fVar18;
  *(float *)(lVar25 + 0x1074) = param_2 * fVar19;
  *(float *)(lVar25 + 0x1078) = param_2 * fVar20;
  *(float *)(lVar25 + 0x107c) = param_2 * fVar21;
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar24 + -0x1948) = *(undefined8 *)param_1;
  *(undefined8 *)(puVar24 + -0x1940) = uVar10;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
    lVar25 = *(long *)this;
  }
  uVar10 = *(undefined8 *)(this + 0x38);
  puVar11 = *(undefined8 **)(this + 0x18);
  puVar24[-0x1488] = 0;
  uVar12 = *(undefined8 *)(this + 0x28);
  *(undefined4 *)(puVar24 + -0x1918) = 0x3f800000;
  *(undefined8 *)(puVar24 + -0x18f8) = 0;
  *(undefined8 *)(puVar24 + -0x1920) = _LC46;
  uVar7 = *(undefined4 *)(param_1 + 0x70);
  puVar13 = *(undefined8 **)(this + 0x20);
  *(undefined ***)(puVar24 + -0x1908) = &PTR__JoltQueryCollectorAny_0010ed70;
  *(undefined4 *)(puVar24 + -0x1914) = uVar7;
  *(undefined4 *)(puVar24 + -0x1698) = 0;
  *(undefined8 *)(puVar24 + -0x1910) = _LC47;
  puVar14 = *(undefined8 **)(this + 0x30);
  pcVar15 = *(char **)(this + 0x10);
  *(undefined8 *)(puVar24 + -0x18b4) = _LC48;
  *(undefined8 *)(puVar24 + -0x18ac) = _LC47;
  *(undefined4 *)(puVar24 + -0x1900) = _LC0;
  if (*pcVar15 == '\0') {
    uVar2 = *puVar14;
    uVar3 = *puVar13;
    uVar4 = puVar14[1];
    uVar5 = puVar13[1];
    *(undefined8 *)(puVar24 + -0x1990) = 0x10202d;
    JPH::TransformedShape::CollideShape
              (uVar3,uVar5,uVar2,uVar4,puVar24 + -0x1948,lVar25,uVar12,puVar11,puVar24 + -0x1908,
               uVar10);
  }
  else {
    uVar2 = *puVar11;
    uVar3 = puVar11[1];
    *(undefined4 *)(puVar24 + -0x1470) = _LC0;
    *(undefined8 *)(puVar24 + -0x1978) = uVar2;
    *(undefined8 *)(puVar24 + -0x1970) = uVar3;
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    *(undefined2 *)(puVar24 + -0x1978) = 1;
    *(undefined8 *)(puVar24 + -0x1968) = uVar2;
    *(undefined8 *)(puVar24 + -0x1960) = uVar3;
    uVar2 = puVar11[4];
    uVar3 = puVar11[5];
    *(undefined1 **)(puVar24 + -0x1460) = puVar24 + -0x1908;
    *(undefined8 *)(puVar24 + -0x1958) = uVar2;
    *(undefined8 *)(puVar24 + -0x1950) = uVar3;
    uVar2 = *puVar14;
    uVar3 = puVar14[1];
    uVar4 = puVar13[1];
    *(undefined1 (*) [16])(puVar24 + -0xc58) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar24 + 0x7fc8) = (undefined1  [16])0x0;
    uVar5 = *puVar13;
    *(undefined8 *)(puVar24 + -0x1468) = 0;
    *(undefined ***)(puVar24 + -0x1478) = &PTR__InternalEdgeRemovingCollector_0010ecf0;
    *(undefined8 *)(puVar24 + -0xc48) = 0;
    *(undefined8 *)(puVar24 + -0xc40) = 0;
    *(undefined8 *)(puVar24 + 0x7fd8) = 0;
    *(undefined8 *)(puVar24 + 0x7fe0) = 0;
    *(undefined8 *)(puVar24 + -0x1990) = 0x101f41;
    JPH::TransformedShape::CollideShape
              (uVar5,uVar4,uVar2,uVar3,puVar24 + -0x1948,lVar25,uVar12,puVar24 + -0x1978,
               (InternalEdgeRemovingCollector *)(puVar24 + -0x1478),uVar10);
    *(undefined8 *)(puVar24 + -0x1990) = 0x101f49;
    JPH::InternalEdgeRemovingCollector::Flush((InternalEdgeRemovingCollector *)(puVar24 + -0x1478));
    *(undefined ***)(puVar24 + -0x1478) = &PTR__InternalEdgeRemovingCollector_0010ecf0;
    if ((*(long *)(puVar24 + 0x7fe0) != 0) &&
       (*(undefined8 *)(puVar24 + 0x7fd0) = 0,
       0x87a0 < (ulong)(*(long *)(puVar24 + 0x7fe0) - (long)(puVar24 + -0xc38)))) {
      *(undefined8 *)(puVar24 + -0x1990) = 0x10204e;
      (*JPH::Free)();
    }
    if ((*(long *)(puVar24 + -0xc40) != 0) &&
       (*(undefined8 *)(puVar24 + -0xc50) = 0,
       0x7f0 < (ulong)(*(long *)(puVar24 + -0xc40) - (long)(puVar24 + -0x1458)))) {
      *(undefined8 *)(puVar24 + -0x1990) = 0x10205e;
      (*JPH::Free)();
    }
  }
  plVar16 = *(long **)(puVar24 + -0x1928);
  bVar6 = puVar24[-0x1488];
  p_Var23 = (_func__cast_motion_impl_Shape_const_ptr_Transform3D_const_ptr_Vector3_const_ptr_Vector3_const_ptr_bool_bool_CollideShapeSettings_const_ptr_BroadPhaseLayerFilter_const_ptr_ObjectLayerFilter_const_ptr_BodyFilter_const_ptr_ShapeFilter_const_ptr_float_ptr_float_ptr
             *)(ulong)bVar6;
  if (plVar16 != (long *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar24[-0x1979] = bVar6;
      pcVar17 = *(code **)(*plVar16 + 8);
      *(undefined8 *)(puVar24 + -0x1990) = 0x10203a;
      (*pcVar17)();
      p_Var23 = (_func__cast_motion_impl_Shape_const_ptr_Transform3D_const_ptr_Vector3_const_ptr_Vector3_const_ptr_bool_bool_CollideShapeSettings_const_ptr_BroadPhaseLayerFilter_const_ptr_ObjectLayerFilter_const_ptr_BodyFilter_const_ptr_ShapeFilter_const_ptr_float_ptr_float_ptr
                 *)(ulong)(byte)puVar24[-0x1979];
    }
  }
  if (*(long *)(puVar24 + 0x7ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar24 + -0x1990) = &UNK_00102068;
    __stack_chk_fail();
  }
  return p_Var23;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::_cast_motion_impl(JPH::Shape const&, Transform3D const&, Vector3
   const&, Vector3 const&, bool, bool, JPH::CollideShapeSettings const&, JPH::BroadPhaseLayerFilter
   const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&, float&,
   float&) const */

byte __thiscall
JoltPhysicsDirectSpaceState3D::_cast_motion_impl
          (JoltPhysicsDirectSpaceState3D *this,Shape *param_1,Transform3D *param_2,Vector3 *param_3,
          Vector3 *param_4,bool param_5,bool param_6,CollideShapeSettings *param_7,
          BroadPhaseLayerFilter *param_8,ObjectLayerFilter *param_9,BodyFilter *param_10,
          ShapeFilter *param_11,float *param_12,float *param_13)

{
  Shape SVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  long *plVar7;
  _func__cast_motion_impl_Shape_const_ptr_Transform3D_const_ptr_Vector3_const_ptr_Vector3_const_ptr_bool_bool_CollideShapeSettings_const_ptr_BroadPhaseLayerFilter_const_ptr_ObjectLayerFilter_const_ptr_BodyFilter_const_ptr_ShapeFilter_const_ptr_float_ptr_float_ptr
  *p_Var8;
  byte bVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 local_224c [16];
  undefined4 local_223c;
  code **local_2238;
  float *pfStack_2230;
  undefined1 *local_2228;
  CollideShapeSettings *local_2220;
  undefined4 *local_2218;
  undefined1 *local_2210;
  undefined8 *local_2208;
  ShapeFilter *local_2200;
  undefined4 local_21f8;
  undefined4 uStack_21f4;
  undefined4 uStack_21f0;
  undefined4 uStack_21ec;
  float local_21e8;
  float fStack_21e4;
  float fStack_21e0;
  float fStack_21dc;
  undefined8 local_21d8;
  undefined8 uStack_21d0;
  undefined1 local_21c8 [8];
  float fStack_21c0;
  float fStack_21bc;
  undefined1 local_21b8 [8];
  float fStack_21b0;
  float fStack_21ac;
  undefined1 local_21a8 [16];
  undefined1 local_2198 [16];
  undefined1 local_2188 [16];
  undefined8 local_2178;
  undefined4 uStack_2170;
  undefined4 uStack_216c;
  code *local_2168 [8];
  Body *local_2128;
  undefined **local_2118;
  undefined4 local_2110;
  undefined8 local_2108;
  undefined1 local_2100 [4096];
  undefined8 local_1100;
  long lStack_10f8;
  undefined8 local_10f0;
  undefined1 *local_10e8;
  undefined4 local_10e0;
  code *local_10d8;
  undefined4 local_10d0;
  undefined8 local_10c8;
  undefined2 local_10c0;
  long *local_10b8;
  float local_10b0;
  undefined1 local_68 [16];
  Shape *local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  SVar1 = param_1[0x18];
  *param_12 = 1.0;
  *param_13 = 1.0;
  local_224c[0] = param_5;
  if (SVar1 == (Shape)0x0) {
    fVar13 = *(float *)param_4;
    fVar15 = *(float *)(param_4 + 4);
    fVar17 = *(float *)(param_4 + 8);
    fVar14 = *(float *)param_4;
    fVar4 = *(float *)(param_4 + 4);
    fVar5 = *(float *)(param_4 + 8);
    fVar18 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar17 * fVar17);
    bVar9 = fVar18 == 0.0 && param_6;
    if (fVar18 != 0.0 || !param_6) {
      local_2178 = *(undefined8 *)(param_2 + 0x24);
      local_21a8._4_4_ = *(float *)(param_2 + 0xc);
      local_21a8._0_4_ = *(float *)param_2;
      local_21a8._8_4_ = *(float *)(param_2 + 0x18);
      local_21a8._12_4_ = 0;
      uStack_2170 = *(undefined4 *)(param_2 + 0x2c);
      local_2198._4_4_ = *(float *)(param_2 + 0x10);
      local_2198._0_4_ = *(float *)(param_2 + 4);
      local_2198._8_4_ = *(float *)(param_2 + 0x1c);
      local_2198._12_4_ = 0;
      local_2188._4_4_ = *(float *)(param_2 + 0x14);
      local_2188._0_4_ = *(float *)(param_2 + 8);
      local_21f8 = *(undefined4 *)param_3;
      uStack_21f4 = *(undefined4 *)(param_3 + 4);
      local_2188._8_4_ = *(float *)(param_2 + 0x20);
      local_2188._12_4_ = 0;
      uStack_21f0 = *(undefined4 *)(param_3 + 8);
      uStack_216c = 0x3f800000;
      local_21e8 = *(float *)param_2 * fVar13 + *(float *)(param_2 + 0xc) * fVar15 +
                   *(float *)(param_2 + 0x18) * fVar17;
      fStack_21e4 = *(float *)(param_2 + 4) * fVar13 + *(float *)(param_2 + 0x10) * fVar15 +
                    *(float *)(param_2 + 0x1c) * fVar17;
      fStack_21e0 = *(float *)(param_2 + 8) * fVar13 + *(float *)(param_2 + 0x14) * fVar15 +
                    *(float *)(param_2 + 0x20) * fVar17;
      fStack_21dc = fVar13 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0;
      uStack_21ec = uStack_21f0;
      (**(code **)(*(long *)param_1 + 0x30))
                (*(undefined8 *)param_3,CONCAT44(uStack_21f0,uStack_21f0),local_21c8,param_1,
                 local_21a8);
      local_2110 = 0x7f7fffff;
      auVar16._0_4_ = (float)local_21c8._0_4_ + fVar14;
      auVar16._4_4_ = (float)local_21c8._4_4_ + fVar4;
      auVar16._8_4_ = fStack_21c0 + fVar5;
      auVar16._12_4_ = fStack_21bc + fVar17;
      local_2108 = 0;
      local_2118 = &PTR__JoltQueryCollectorAnyMulti_0010ed30;
      local_10e0 = 0x400;
      _local_21c8 = minps(_local_21c8,auVar16);
      local_10f0 = 0x400;
      auVar2._4_4_ = fVar4 + (float)local_21b8._4_4_;
      auVar2._0_4_ = fVar14 + (float)local_21b8._0_4_;
      auVar2._8_4_ = fVar5 + fStack_21b0;
      auVar2._12_4_ = fVar17 + fStack_21ac;
      _local_21b8 = maxps(_local_21b8,auVar2);
      local_1100 = __LC56;
      lStack_10f8 = _UNK_0010f1c8;
      local_10e8 = local_2100;
      plVar7 = (long *)JoltSpace3D::get_broad_phase_query();
      (**(code **)(*plVar7 + 0x18))(plVar7,local_21c8,&local_2118,param_8,param_9);
      lVar11 = lStack_10f8;
      if (lStack_10f8 != 0) {
        uStack_21d0 = CONCAT44(uStack_216c,uStack_2170);
        local_10c0 = 0x1800;
        local_10d8 = (code *)&JPH::ConvexShape::vtable;
        local_2238 = &local_10d8;
        local_68 = (undefined1  [16])0x0;
        pfStack_2230 = &local_21e8;
        local_21d8 = local_2178;
        local_2228 = local_224c;
        local_2220 = param_7;
        local_2218 = &local_21f8;
        local_2208 = &local_21d8;
        local_10d0 = 0;
        local_2200 = param_11;
        local_10c8 = 0;
        local_10b8 = (long *)0x0;
        local_10b0 = _LC58;
        local_2210 = local_21a8;
        local_58 = param_1;
        fVar13 = logf(fVar18 * _LC58);
        iVar3 = (int)(fVar13 / __LC59);
        if (0x10 < (int)(fVar13 / __LC59)) {
          iVar3 = 0x10;
        }
        if (iVar3 < 4) {
          iVar3 = 4;
        }
        if (0 < (int)lVar11) {
          lVar11 = 0;
          do {
            local_223c = *(undefined4 *)(local_10e8 + lVar11 * 4);
            cVar6 = (**(code **)(*(long *)param_10 + 0x10))(param_10,&local_223c);
            if (cVar6 != '\0') {
              JoltSpace3D::read_body((BodyID *)local_2168);
              cVar6 = (**(code **)(*(long *)param_10 + 0x18))(param_10,local_2128);
              if (cVar6 != '\0') {
                p_Var8 = const::{lambda(JPH::Body_const&,float)#1}::operator()
                                   ((_lambda_JPH__Body_const__float__1_ *)&local_2238,local_2128,
                                    _LC20);
                if (((char)p_Var8 != '\0') &&
                   ((!param_6 ||
                    (p_Var8 = const::{lambda(JPH::Body_const&,float)#1}::operator()
                                        ((_lambda_JPH__Body_const__float__1_ *)&local_2238,
                                         local_2128,0.0), (char)p_Var8 == '\0')))) {
                  iVar10 = 0;
                  uVar12 = (ulong)bVar9;
                  fVar13 = _LC20;
                  fVar15 = _LC50;
                  fVar17 = 0.0;
LAB_0010271c:
                  do {
                    bVar9 = (byte)uVar12;
                    fVar14 = (fVar13 - fVar17) * fVar15 + fVar17;
                    p_Var8 = const::{lambda(JPH::Body_const&,float)#1}::operator()
                                       ((_lambda_JPH__Body_const__float__1_ *)&local_2238,local_2128
                                        ,fVar14);
                    fVar15 = _LC50;
                    if ((char)p_Var8 == '\0') {
                      fVar17 = fVar14;
                      if (iVar10 == 0) {
                        iVar10 = 1;
                        goto LAB_0010271c;
                      }
                      fVar15 = _LC52;
                      if (fVar13 < _LC20) {
LAB_00102704:
                        fVar14 = fVar13;
                        fVar15 = _LC50;
                        goto LAB_0010270c;
                      }
                    }
                    else {
                      fVar13 = fVar14;
                      if (iVar10 == 0) {
                        uVar12 = (ulong)p_Var8 & 0xffffffff;
                        iVar10 = 1;
                        goto LAB_0010271c;
                      }
                      uVar12 = (ulong)p_Var8 & 0xffffffff;
                      fVar15 = _LC51;
                      if (0.0 < fVar17) goto LAB_00102704;
LAB_0010270c:
                      bVar9 = (byte)uVar12;
                      fVar13 = fVar14;
                      fVar14 = fVar17;
                    }
                    iVar10 = iVar10 + 1;
                    fVar17 = fVar14;
                  } while (iVar3 != iVar10);
                  if (fVar14 < *param_12) {
                    *param_12 = fVar14;
                    *param_13 = fVar13;
                  }
                }
              }
              JoltBodyAccessor3D::release();
              local_2168[0] = _err_print_error;
              JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_2168);
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < (int)lStack_10f8);
          local_10d8 = Variant::Variant;
          if (local_10b8 != (long *)0x0) {
            LOCK();
            plVar7 = local_10b8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              if (*(code **)(*local_10b8 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
                (*JPH::Free)();
              }
              else {
                (**(code **)(*local_10b8 + 0x18))();
              }
            }
          }
        }
      }
      local_2118 = &PTR__JoltQueryCollectorAnyMulti_0010ed30;
      if ((local_10e8 != (undefined1 *)0x0) &&
         (lStack_10f8 = 0, 0xffc < (ulong)((long)local_10e8 - (long)local_2100))) {
        (*JPH::Free)();
      }
      goto LAB_00102404;
    }
  }
  else {
    _err_print_error("_cast_motion_impl",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x3e,
                     "Condition \"p_jolt_shape.GetType() != JPH::EShapeType::Convex\" is true. Returning: false"
                     ,"Shape-casting with non-convex shapes is not supported.",0,0);
  }
  bVar9 = 0;
LAB_00102404:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9;
}



/* JoltPhysicsDirectSpaceState3D::_body_motion_cast(JoltBody3D const&, Transform3D const&, Vector3
   const&, Vector3 const&, bool, HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >
   const&, HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> > const&,
   float&, float&) const */

byte __thiscall
JoltPhysicsDirectSpaceState3D::_body_motion_cast
          (JoltPhysicsDirectSpaceState3D *this,JoltBody3D *param_1,Transform3D *param_2,
          Vector3 *param_3,Vector3 *param_4,bool param_5,HashSet *param_6,HashSet *param_7,
          float *param_8,float *param_9)

{
  Shape *pSVar1;
  float fVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  long *plVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [12];
  byte local_209;
  Shape *local_1d8;
  long local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  JoltMotionFilter3D local_1b8 [8];
  ObjectLayerFilter local_1b0 [8];
  BodyFilter local_1a8 [8];
  ShapeFilter local_1a0 [64];
  undefined1 local_160 [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  Vector3 local_138 [48];
  undefined2 local_108 [2];
  undefined8 local_104;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_d8 [48];
  Vector3 local_a8 [48];
  Transform3D local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Transform3D::scaled_local(local_138);
  local_108[0] = 0x100;
  local_e4 = 0;
  local_e8 = 0;
  local_104 = _LC92;
  local_f8 = (undefined1  [16])0x0;
  JoltMotionFilter3D::JoltMotionFilter3D(local_1b8,param_1,param_6,param_7,param_5);
  if (*(int *)(param_1 + 8) < 1) {
LAB_00102b80:
    local_209 = 0;
  }
  else {
    iVar9 = 0;
    local_209 = 0;
    do {
      cVar5 = JoltShapedObject3D::is_shape_disabled((int)param_1);
      if (cVar5 == '\0') {
        plVar8 = (long *)JoltShapedObject3D::get_shape((int)param_1);
        cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8);
        if (cVar5 != '\0') {
          JoltShape3D::try_build();
          if (local_1d8 == (Shape *)0x0) goto LAB_00102b80;
          auVar10 = (**(code **)(*(long *)local_1d8 + 0x18))();
          local_160 = auVar10;
          JoltShapedObject3D::get_shape_transform_scaled((int)local_d8);
          Transform3D::translated_local(local_a8);
          Transform3D::operator*(local_78,(Transform3D *)local_138);
          local_150._0_8_ = 0;
          local_150._8_4_ = 0;
          JoltMath::decompose((Basis *)local_78,(Vector3 *)local_150);
          auVar10 = JoltShape3D::make_scale_valid(local_1d8,(Vector3 *)local_150);
          local_144 = auVar10;
          cVar5 = JoltShape3D::is_scale_valid((Vector3 *)local_150,(Vector3 *)local_144,_LC66);
          if (cVar5 == '\0') {
            local_1d0 = 0;
            local_1c8 = 
            "%s A scale of %v is not supported by Jolt Physics for this shape/body. The scale will instead be treated as %v."
            ;
            local_1c0 = 0x6f;
            String::parse_latin1((StrRange *)&local_1d0);
            vformat<char_const*,Vector3,Vector3>
                      (local_150._0_8_,local_150._8_4_,local_144._0_8_,local_144._8_4_,&local_1c8,
                       (StrRange *)&local_1d0,
                       "body_test_motion was passed an invalid transform along with body \'%s\'. This results in invalid scaling for shape at index %d."
                      );
            _err_print_error("_body_motion_cast",
                             "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                             0x126,&local_1c8,0,0);
            pcVar4 = local_1c8;
            if (local_1c8 != (char *)0x0) {
              LOCK();
              plVar8 = (long *)(local_1c8 + -0x10);
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (*plVar8 == 0) {
                local_1c8 = (char *)0x0;
                Memory::free_static(pcVar4 + -0x10,false);
              }
            }
            lVar3 = local_1d0;
            if (local_1d0 != 0) {
              LOCK();
              plVar8 = (long *)(local_1d0 + -0x10);
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (*plVar8 == 0) {
                local_1d0 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
          }
          local_1d0 = CONCAT44(local_1d0._4_4_,0x3f800000);
          local_150 = local_144;
          bVar6 = (bool)JoltProjectSettings::use_enhanced_internal_edge_removal_for_motion_queries()
          ;
          bVar7 = _cast_motion_impl(this,local_1d8,local_78,(Vector3 *)local_150,param_4,bVar6,false
                                    ,(CollideShapeSettings *)local_108,
                                    (BroadPhaseLayerFilter *)local_1b8,local_1b0,local_1a8,local_1a0
                                    ,(float *)&local_1d0,(float *)&local_1c8);
          local_209 = local_209 | bVar7;
          fVar2 = *param_8;
          if ((float)local_1d0 <= *param_8) {
            fVar2 = (float)local_1d0;
          }
          *param_8 = fVar2;
          fVar2 = *param_9;
          if (local_1c8._0_4_ <= *param_9) {
            fVar2 = local_1c8._0_4_;
          }
          *param_9 = fVar2;
          if (local_1d8 != (Shape *)0x0) {
            LOCK();
            pSVar1 = local_1d8 + 8;
            *(int *)pSVar1 = *(int *)pSVar1 + -1;
            UNLOCK();
            if (*(int *)pSVar1 == 0) {
              (**(code **)(*(long *)local_1d8 + 8))();
            }
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 8));
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_209;
}



/* JoltPhysicsDirectSpaceState3D::rest_info(PhysicsDirectSpaceState3D::ShapeParameters const&,
   PhysicsDirectSpaceState3D::ShapeRestInfo*) */

char __thiscall
JoltPhysicsDirectSpaceState3D::rest_info
          (JoltPhysicsDirectSpaceState3D *this,ShapeParameters *param_1,ShapeRestInfo *param_2)

{
  Shape *pSVar1;
  undefined **ppuVar2;
  SubShapeID SVar3;
  ulong uVar4;
  SubShapeID *pSVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined **ppuVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  long *plVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined8 uStack_660;
  uint local_658;
  StrRange *local_648;
  Shape *local_630;
  undefined **local_628;
  undefined4 local_620;
  char *local_618;
  undefined8 local_610;
  undefined1 local_608 [40];
  undefined1 local_5e0 [12];
  undefined8 local_5d0;
  float local_5c8;
  undefined1 local_5c4 [12];
  undefined1 local_5b8 [8];
  float fStack_5b0;
  float fStack_5ac;
  undefined1 local_5a8 [8];
  float fStack_5a0;
  float fStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined8 uStack_564;
  float fStack_55c;
  undefined2 local_558 [2];
  undefined8 local_554;
  undefined1 local_548 [16];
  undefined4 local_538;
  undefined1 local_534;
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined8 local_4f8;
  float local_4f0;
  uint local_4ec;
  long local_4e8;
  undefined1 local_4d8 [12];
  undefined8 local_4c8;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_498;
  float fStack_494;
  float fStack_490;
  undefined4 uStack_48c;
  undefined8 local_484;
  undefined8 uStack_47c;
  undefined4 local_268;
  char local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) == '\0') {
    JoltSpace3D::try_optimize();
    uVar4 = *(ulong *)param_1;
    if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(JoltPhysicsServer3D::singleton + 0x2f4))) {
      plVar14 = (long *)(((uVar4 & 0xffffffff) %
                         (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 0x10 +
                        *(long *)(*(long *)(JoltPhysicsServer3D::singleton + 0x2e0) +
                                 ((uVar4 & 0xffffffff) /
                                 (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 8));
      iVar13 = (int)plVar14[1];
      if (iVar13 == (int)(uVar4 >> 0x20)) {
        if (*plVar14 != 0) {
          JoltShape3D::try_build();
          if (local_630 == (Shape *)0x0) {
            cVar12 = '\0';
            _err_print_error("rest_info",
                             "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                             0x2ed,"Parameter \"jolt_shape\" is null.",0,0);
          }
          else {
            uVar7 = *(undefined8 *)(param_1 + 8);
            auVar17 = *(undefined1 (*) [16])(param_1 + 8);
            local_598 = *(undefined8 *)(param_1 + 0x28);
            uStack_590 = *(undefined8 *)(param_1 + 0x30);
            uVar8 = *(undefined8 *)(param_1 + 0x18);
            auVar18 = *(undefined1 (*) [16])(param_1 + 0x18);
            local_5b8._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
            fStack_5b0 = (float)*(undefined8 *)(param_1 + 0x10);
            local_5a8._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
            local_5a8._0_4_ = (undefined4)uVar8;
            fStack_59c = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
            local_5b8._0_4_ = (undefined4)uVar7;
            fStack_5ac = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
            fStack_5a0 = (float)*(undefined8 *)(param_1 + 0x20);
            fVar15 = (((float)local_598 * (float)local_5a8._0_4_ -
                      (float)local_5a8._4_4_ * fStack_59c) * (float)local_5b8._0_4_ -
                     ((float)local_598 * (float)local_5b8._4_4_ - fStack_59c * fStack_5b0) *
                     fStack_5ac) +
                     ((float)local_5b8._4_4_ * (float)local_5a8._4_4_ -
                     (float)local_5a8._0_4_ * fStack_5b0) * fStack_5a0;
            _local_5b8 = auVar17;
            _local_5a8 = auVar18;
            if (NAN(fVar15)) {
              local_658 = _LC20;
            }
            else if (fVar15 == 0.0) {
              local_628 = (undefined **)0x0;
              local_618 = 
              "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
              ;
              local_610 = 0xd1;
              String::parse_latin1((StrRange *)&local_628);
              vformat<char_const*>((String *)&local_618,(char *)&local_628);
              _err_print_error("rest_info",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x2f0,(String *)&local_618,0,1);
              pcVar11 = local_618;
              if (local_618 != (char *)0x0) {
                LOCK();
                plVar14 = (long *)(local_618 + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  local_618 = (char *)0x0;
                  Memory::free_static(pcVar11 + -0x10,false);
                }
              }
              ppuVar10 = local_628;
              if (local_628 != (undefined **)0x0) {
                LOCK();
                ppuVar2 = local_628 + -2;
                *ppuVar2 = *ppuVar2 + -1;
                UNLOCK();
                if (*ppuVar2 == (undefined *)0x0) {
                  local_628 = (undefined **)0x0;
                  Memory::free_static(ppuVar10 + -2,false);
                }
              }
              local_658 = _LC20;
              local_598 = CONCAT44(local_598._4_4_,_LC20);
              _local_5b8 = ZEXT416(_LC20);
              _local_5a8 = ZEXT416(_LC20);
            }
            else {
              local_658 = _LC20;
            }
            local_648 = (StrRange *)&local_628;
            local_5c4._0_8_ = 0;
            local_5c4._8_4_ = 0;
            _LC20 = local_658;
            JoltMath::decompose((Basis *)local_5b8,(Vector3 *)local_5c4);
            local_4d8 = JoltShape3D::make_scale_valid(local_630,(Vector3 *)local_5c4);
            cVar12 = JoltShape3D::is_scale_valid((Vector3 *)local_5c4,(Vector3 *)local_4d8,_LC66);
            if (cVar12 == '\0') {
              local_628 = (undefined **)0x0;
              local_618 = 
              "%s A scale of %v is not supported by Jolt Physics for this shape/body. The scale will instead be treated as %v."
              ;
              local_610 = 0x6f;
              String::parse_latin1(local_648);
              vformat<char_const*,Vector3,Vector3>
                        (local_5c4._0_8_,local_5c4._8_4_,local_4d8._0_8_,local_4d8._8_4_,
                         (JoltQueryFilter3D *)&local_618,local_648,
                         "get_rest_info (maybe from ShapeCast3D?) was passed an invalid transform.")
              ;
              _err_print_error("rest_info",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x2f4,(JoltQueryFilter3D *)&local_618,0,0);
              pcVar11 = local_618;
              if (local_618 != (char *)0x0) {
                LOCK();
                plVar14 = (long *)(local_618 + -0x10);
                *plVar14 = *plVar14 + -1;
                UNLOCK();
                if (*plVar14 == 0) {
                  local_618 = (char *)0x0;
                  Memory::free_static(pcVar11 + -0x10,false);
                }
              }
              ppuVar10 = local_628;
              if (local_628 != (undefined **)0x0) {
                LOCK();
                ppuVar2 = local_628 + -2;
                *ppuVar2 = *ppuVar2 + -1;
                UNLOCK();
                if (*ppuVar2 == (undefined *)0x0) {
                  local_628 = (undefined **)0x0;
                  Memory::free_static(ppuVar10 + -2,false);
                }
              }
            }
            local_5c4 = local_4d8;
            local_5e0 = (**(code **)(*(long *)local_630 + 0x18))();
            Transform3D::translated_local((Vector3 *)&local_588);
            local_558[0] = 0x100;
            local_548 = (undefined1  [16])0x0;
            local_538 = *(undefined4 *)(param_1 + 0x44);
            local_554 = _LC92;
            local_534 = 0;
            JoltQueryFilter3D::JoltQueryFilter3D
                      ((JoltQueryFilter3D *)&local_618,this,*(uint *)(param_1 + 0x70),
                       (bool)param_1[0x74],(bool)param_1[0x75],(HashSet *)(param_1 + 0x48),false);
            local_4d8._8_4_ = 0x7f7fffff;
            local_484 = _LC48;
            uStack_47c = _LC47;
            local_4d8._0_8_ = &PTR__JoltQueryCollectorClosest_0010f048;
            local_508._4_4_ = local_574;
            local_508._0_4_ = local_580;
            local_628 = &PTR__ShapeFilter_0010ecc0;
            local_508._8_4_ = local_568;
            local_508._12_4_ = 0;
            local_4ec = local_658;
            local_518._4_4_ = local_578;
            local_518._0_4_ = local_584;
            auVar17._4_8_ = uStack_564;
            auVar17._0_4_ = local_568;
            auVar17._12_4_ = fStack_55c;
            local_518._8_4_ = local_56c;
            local_518._12_4_ = 0;
            local_4f8 = uStack_564;
            auVar18._0_12_ = auVar17._4_12_;
            auVar18._12_4_ = fStack_55c;
            local_528._4_4_ = local_57c;
            local_528._0_4_ = local_588;
            local_528._8_4_ = local_570;
            local_528._12_4_ = 0;
            local_58 = '\0';
            local_4c8 = 0;
            local_620 = 0xffffffff;
            local_4f0 = fStack_55c;
            local_268 = 0;
            uStack_660 = auVar18._8_8_;
            _collide_shape_queries
                      (local_5c4._0_8_,CONCAT44(local_5c4._8_4_,local_5c4._8_4_),uStack_564,
                       uStack_660,this,local_630,(BodyID *)local_528,local_558,(Vector3 *)local_4d8,
                       (JoltQueryFilter3D *)&local_618,&local_610,local_608,local_648);
            cVar12 = local_58;
            if (local_58 != '\0') {
              JoltSpace3D::read_body((BodyID *)local_528);
              if ((local_4e8 == 0) ||
                 (pSVar5 = *(SubShapeID **)(local_4e8 + 0x50), pSVar5 == (SubShapeID *)0x0)) {
                _err_print_error("rest_info",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x309,"Parameter \"object\" is null.",0,0);
LAB_001035ad:
                cVar12 = '\0';
              }
              else {
                SVar3 = pSVar5[0x3c];
                *(undefined4 *)(param_2 + 0x28) = 0;
                if (SVar3 != (SubShapeID)0x2) {
                  iVar13 = JoltShapedObject3D::find_shape_index(pSVar5);
                  if (iVar13 == -1) {
                    _err_print_error("rest_info",
                                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                     ,0x30f,
                                     "Condition \"shape_index == -1\" is true. Returning: false",0,0
                                    );
                    goto LAB_001035ad;
                  }
                  *(int *)(param_2 + 0x28) = iVar13;
                }
                local_5c8 = fStack_55c + local_4a0;
                local_5d0 = CONCAT44(local_4a4 + (float)((ulong)uStack_564 >> 0x20),
                                     local_4a8 + (float)uStack_564);
                *(undefined8 *)param_2 = local_5d0;
                *(float *)(param_2 + 8) = local_5c8;
                lVar6 = *(long *)pSVar5;
                auVar9._4_4_ = fStack_494;
                auVar9._0_4_ = local_498;
                auVar9._8_4_ = fStack_490;
                auVar9._12_4_ = uStack_48c;
                auVar16._0_4_ =
                     SQRT(fStack_490 * fStack_490 +
                          local_498 * local_498 + 0.0 + fStack_494 * fStack_494);
                auVar16._4_4_ = auVar16._0_4_;
                auVar16._8_4_ = auVar16._0_4_;
                auVar16._12_4_ = auVar16._0_4_;
                auVar17 = divps(auVar9,auVar16);
                *(ulong *)(param_2 + 0xc) = CONCAT44(0.0 - auVar17._4_4_,0.0 - auVar17._0_4_);
                *(float *)(param_2 + 0x14) = 0.0 - auVar17._8_4_;
                uVar7 = *(undefined8 *)(pSVar5 + 0x20);
                *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(pSVar5 + 0x18);
                *(undefined8 *)(param_2 + 0x20) = uVar7;
                auVar19 = (**(code **)(lVar6 + 0x50))(pSVar5,&local_5d0);
                *(undefined1 (*) [12])(param_2 + 0x2c) = auVar19;
              }
              JoltBodyAccessor3D::release();
              local_528._0_8_ = _err_print_error;
              JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_528);
            }
          }
          if (local_630 != (Shape *)0x0) {
            LOCK();
            pSVar1 = local_630 + 8;
            *(int *)pSVar1 = *(int *)pSVar1 + -1;
            UNLOCK();
            if (*(int *)pSVar1 == 0) {
              (**(code **)(*(long *)local_630 + 8))();
            }
          }
          goto LAB_00103110;
        }
      }
      else if (iVar13 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
    _err_print_error("rest_info",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x2ea,
                     "Parameter \"shape\" is null.",0,0);
  }
  else {
    _err_print_error("rest_info",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x2e5,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "get_rest_info must not be called while the physics space is being stepped.",0,
                     0);
  }
  cVar12 = '\0';
LAB_00103110:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::intersect_shape(PhysicsDirectSpaceState3D::ShapeParameters const&,
   PhysicsDirectSpaceState3D::ShapeResult*, int) */

undefined4 __thiscall
JoltPhysicsDirectSpaceState3D::intersect_shape
          (JoltPhysicsDirectSpaceState3D *this,ShapeParameters *param_1,ShapeResult *param_2,
          int param_3)

{
  long *plVar1;
  Vector3 *pVVar2;
  BodyID *this_00;
  ShapeParameters SVar3;
  ShapeParameters SVar4;
  SubShapeID SVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  SubShapeID *pSVar9;
  StrRange *pSVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  char cVar17;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  ShapeResult *pSVar21;
  undefined1 *puVar22;
  JoltQueryFilter3D *this_01;
  long in_FS_OFFSET;
  float fVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 local_8030 [32768];
  
  puVar16 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar16;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar16 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != local_8030);
  *(undefined8 *)(puVar22 + 0x6ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) == '\0') {
    if (param_3 != 0) {
      *(undefined8 *)(puVar22 + -0x1e00) = 0x1036b3;
      JoltSpace3D::try_optimize();
      uVar7 = *(ulong *)param_1;
      if ((uVar7 != 0) && ((uint)uVar7 < *(uint *)(JoltPhysicsServer3D::singleton + 0x2f4))) {
        plVar20 = (long *)(((uVar7 & 0xffffffff) %
                           (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 0x10 +
                          *(long *)(*(long *)(JoltPhysicsServer3D::singleton + 0x2e0) +
                                   ((uVar7 & 0xffffffff) /
                                   (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 8));
        iVar18 = (int)plVar20[1];
        if (iVar18 == (int)(uVar7 >> 0x20)) {
          if (*plVar20 != 0) {
            *(undefined8 *)(puVar22 + -0x1e00) = 0x103714;
            JoltShape3D::try_build();
            if (*(long *)(puVar22 + -0x1db0) == 0) {
              *(undefined8 *)(puVar22 + -0x1e00) = 0x103d87;
              _err_print_error("intersect_shape",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x24c,"Parameter \"jolt_shape\" is null.",0,0);
              *(undefined4 *)(puVar22 + -0x1df8) = 0;
            }
            else {
              uVar19 = *(undefined8 *)(param_1 + 0x20);
              uVar12 = *(undefined8 *)(param_1 + 0x28);
              uVar13 = *(undefined8 *)(param_1 + 0x30);
              uVar14 = *(undefined8 *)(param_1 + 8);
              uVar15 = *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(puVar22 + -0x1d38) = *(undefined8 *)(param_1 + 0x18);
              *(undefined8 *)(puVar22 + -0x1d30) = uVar19;
              *(undefined8 *)(puVar22 + -0x1d28) = uVar12;
              *(undefined8 *)(puVar22 + -0x1d20) = uVar13;
              *(undefined8 *)(puVar22 + -0x1d48) = uVar14;
              *(undefined8 *)(puVar22 + -0x1d40) = uVar15;
              fVar23 = ((*(float *)(puVar22 + -0x1d28) * *(float *)(puVar22 + -0x1d38) -
                        *(float *)(puVar22 + -0x1d34) * *(float *)(puVar22 + -0x1d2c)) *
                        *(float *)(puVar22 + -0x1d48) -
                       (*(float *)(puVar22 + -0x1d28) * *(float *)(puVar22 + -0x1d44) -
                       *(float *)(puVar22 + -0x1d2c) * *(float *)(puVar22 + -0x1d40)) *
                       *(float *)(puVar22 + -0x1d3c)) +
                       (*(float *)(puVar22 + -0x1d44) * *(float *)(puVar22 + -0x1d34) -
                       *(float *)(puVar22 + -0x1d38) * *(float *)(puVar22 + -0x1d40)) *
                       *(float *)(puVar22 + -0x1d30);
              if (NAN(fVar23)) {
                *(undefined1 **)(puVar22 + -0x1dd0) = puVar22 + -0x1da8;
                *(uint *)(puVar22 + -0x1de8) = _LC20;
              }
              else if (fVar23 == 0.0) {
                *(undefined8 *)(puVar22 + -0x1da8) = 0;
                *(char **)(puVar22 + -0x1d98) =
                     "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
                ;
                pSVar10 = (StrRange *)(puVar22 + -0x1da8);
                *(StrRange **)(puVar22 + -0x1dd0) = pSVar10;
                *(undefined8 *)(puVar22 + -0x1d90) = 0xd1;
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103eb6;
                String::parse_latin1(pSVar10);
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103ec8;
                vformat<char_const*>((String *)(puVar22 + -0x1d98),(char *)pSVar10);
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103eec;
                _err_print_error("intersect_shape",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x24f,(String *)(puVar22 + -0x1d98),0,1);
                if (*(long *)(puVar22 + -0x1d98) != 0) {
                  LOCK();
                  plVar20 = (long *)(*(long *)(puVar22 + -0x1d98) + -0x10);
                  *plVar20 = *plVar20 + -1;
                  UNLOCK();
                  if (*plVar20 == 0) {
                    lVar11 = *(long *)(puVar22 + -0x1d98);
                    *(undefined8 *)(puVar22 + -0x1d98) = 0;
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103f17;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
                if (*(long *)(puVar22 + -0x1da8) != 0) {
                  LOCK();
                  plVar20 = (long *)(*(long *)(puVar22 + -0x1da8) + -0x10);
                  *plVar20 = *plVar20 + -1;
                  UNLOCK();
                  if (*plVar20 == 0) {
                    lVar11 = *(long *)(puVar22 + -0x1da8);
                    *(undefined8 *)(puVar22 + -0x1da8) = 0;
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103f42;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
                *(undefined1 (*) [16])(puVar22 + -0x1d48) = ZEXT416(_LC20);
                *(undefined1 (*) [16])(puVar22 + -0x1d38) = ZEXT416(_LC20);
                *(uint *)(puVar22 + -0x1de8) = _LC20;
                *(uint *)(puVar22 + -0x1d28) = _LC20;
              }
              else {
                *(undefined1 **)(puVar22 + -0x1dd0) = puVar22 + -0x1da8;
                *(uint *)(puVar22 + -0x1de8) = _LC20;
              }
              this_01 = (JoltQueryFilter3D *)(puVar22 + -0x1d98);
              pVVar2 = (Vector3 *)(puVar22 + -0x1d54);
              *(undefined8 *)(puVar22 + -0x1d54) = 0;
              *(Basis **)(puVar22 + -0x1df8) = (Basis *)(puVar22 + -0x1d48);
              *(undefined4 *)(puVar22 + -0x1d4c) = 0;
              *(undefined8 *)(puVar22 + -0x1e00) = 0x103833;
              JoltMath::decompose((Basis *)(puVar22 + -0x1d48),pVVar2);
              *(undefined8 *)(puVar22 + -0x1e00) = 0x103840;
              auVar29 = JoltShape3D::make_scale_valid(*(Shape **)(puVar22 + -0x1db0),pVVar2);
              *(long *)(puVar22 + -0x1c68) = auVar29._0_8_;
              *(Vector3 **)(puVar22 + -0x1dc8) = (Vector3 *)(puVar22 + -0x1c68);
              *(int *)(puVar22 + -0x1c60) = auVar29._8_4_;
              *(undefined8 *)(puVar22 + -0x1e00) = 0x103872;
              cVar17 = JoltShape3D::is_scale_valid(pVVar2,(Vector3 *)(puVar22 + -0x1c68),_LC66);
              if (cVar17 == '\0') {
                pSVar10 = *(StrRange **)(puVar22 + -0x1dd0);
                *(undefined8 *)(puVar22 + -0x1da8) = 0;
                *(char **)(puVar22 + -0x1d98) =
                     "%s A scale of %v is not supported by Jolt Physics for this shape/body. The scale will instead be treated as %v."
                ;
                *(undefined8 *)(puVar22 + -0x1d90) = 0x6f;
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103dc1;
                String::parse_latin1(pSVar10);
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103df7;
                vformat<char_const*,Vector3,Vector3>
                          (*(undefined8 *)(puVar22 + -0x1d54),*(undefined4 *)(puVar22 + -0x1d4c),
                           *(undefined8 *)(puVar22 + -0x1c68),*(undefined4 *)(puVar22 + -0x1c60),
                           this_01,pSVar10,"intersect_shape was passed an invalid transform.");
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103e18;
                _err_print_error("intersect_shape",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x253,this_01,0,0);
                if (*(long *)(puVar22 + -0x1d98) != 0) {
                  LOCK();
                  plVar20 = (long *)(*(long *)(puVar22 + -0x1d98) + -0x10);
                  *plVar20 = *plVar20 + -1;
                  UNLOCK();
                  if (*plVar20 == 0) {
                    lVar11 = *(long *)(puVar22 + -0x1d98);
                    *(undefined8 *)(puVar22 + -0x1d98) = 0;
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103e43;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
                if (*(long *)(puVar22 + -0x1da8) != 0) {
                  LOCK();
                  plVar20 = (long *)(*(long *)(puVar22 + -0x1da8) + -0x10);
                  *plVar20 = *plVar20 + -1;
                  UNLOCK();
                  if (*plVar20 == 0) {
                    lVar11 = *(long *)(puVar22 + -0x1da8);
                    *(undefined8 *)(puVar22 + -0x1da8) = 0;
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103e76;
                    Memory::free_static((void *)(lVar11 + -0x10),false);
                  }
                }
              }
              *(undefined8 *)(puVar22 + -0x1d54) = *(undefined8 *)(puVar22 + -0x1c68);
              *(undefined4 *)(puVar22 + -0x1d4c) = *(undefined4 *)(puVar22 + -0x1c60);
              pcVar8 = *(code **)(**(long **)(puVar22 + -0x1db0) + 0x18);
              *(undefined8 *)(puVar22 + -0x1e00) = 0x1038a3;
              auVar29 = (*pcVar8)();
              *(undefined1 (*) [12])(puVar22 + -0x1d60) = auVar29;
              *(undefined8 *)(puVar22 + -0x1e00) = 0x1038dd;
              Transform3D::translated_local((Vector3 *)(puVar22 + -0x1d18));
              uVar6 = *(uint *)(param_1 + 0x70);
              *(undefined2 *)(puVar22 + -0x1ce8) = 0x100;
              *(undefined1 (*) [16])(puVar22 + -0x1cd8) = (undefined1  [16])0x0;
              uVar24 = *(undefined4 *)(param_1 + 0x44);
              SVar3 = param_1[0x74];
              *(undefined8 *)(puVar22 + -0x1ce4) = _LC92;
              SVar4 = param_1[0x75];
              *(undefined4 *)(puVar22 + -0x1cc8) = uVar24;
              puVar22[-0x1cc4] = 0;
              *(undefined8 *)(puVar22 + -0x1e08) = 0;
              *(undefined8 *)(puVar22 + -0x1e10) = 0x10393f;
              JoltQueryFilter3D::JoltQueryFilter3D
                        (this_01,this,uVar6,(bool)SVar3,(bool)SVar4,(HashSet *)(param_1 + 0x48),
                         (bool)puVar22[-0x1e08]);
              *(int *)(puVar22 + 0x6fd8) = param_3;
              *(undefined8 *)(puVar22 + 0x6fb8) = __LC14;
              *(undefined8 *)(puVar22 + 0x6fc0) = _UNK_0010f188;
              auVar25._4_4_ = *(undefined4 *)(puVar22 + -0x1d04);
              auVar25._0_4_ = *(undefined4 *)(puVar22 + -0x1d10);
              uVar24 = SUB164(*(undefined1 (*) [16])(puVar22 + -0x1cf8),0xc);
              auVar25._8_4_ = *(undefined4 *)(puVar22 + -0x1cf8);
              auVar25._12_4_ = 0;
              *(undefined ***)(puVar22 + -0x1c68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
              *(undefined1 **)(puVar22 + -0x1dc0) = puVar22 + -0x1c48;
              this_00 = (BodyID *)(puVar22 + -0x1cb8);
              auVar26._4_4_ = *(undefined4 *)(puVar22 + -0x1d08);
              auVar26._0_4_ = *(undefined4 *)(puVar22 + -0x1d14);
              auVar28._0_12_ = SUB1612(*(undefined1 (*) [16])(puVar22 + -0x1cf8),4);
              auVar28._12_4_ = uVar24;
              *(undefined1 (*) [16])(puVar22 + -0x1df8) = auVar28;
              auVar26._8_4_ = *(undefined4 *)(puVar22 + -0x1cfc);
              auVar26._12_4_ = 0;
              *(undefined1 **)(puVar22 + 0x6fd0) = puVar22 + -0x1c48;
              *(undefined ***)(puVar22 + -0x1da8) = &PTR__ShapeFilter_0010ecc0;
              auVar27._4_4_ = *(undefined4 *)(puVar22 + -0x1d0c);
              auVar27._0_4_ = *(undefined4 *)(puVar22 + -0x1d18);
              auVar27._8_4_ = *(undefined4 *)(puVar22 + -0x1d00);
              auVar27._12_4_ = 0;
              *(undefined1 (*) [16])(puVar22 + -0x1ca8) = auVar26;
              *(undefined8 *)(puVar22 + -0x1c88) = *(undefined8 *)(puVar22 + -0x1cf4);
              *(undefined1 (*) [16])(puVar22 + -0x1cb8) = auVar27;
              *(undefined4 *)(puVar22 + -0x1c80) = uVar24;
              *(undefined4 *)(puVar22 + -0x1c7c) = *(undefined4 *)(puVar22 + -0x1de8);
              *(undefined4 *)(puVar22 + -0x1c60) = 0x7f7fffff;
              *(undefined8 *)(puVar22 + -0x1c58) = 0;
              *(undefined8 *)(puVar22 + 0x6fc8) = 0x20;
              *(undefined4 *)(puVar22 + -0x1da0) = 0xffffffff;
              *(undefined1 (*) [16])(puVar22 + -0x1c98) = auVar25;
              *(ulong *)(puVar22 + -0x1de8) =
                   CONCAT44(*(undefined4 *)(puVar22 + -0x1d50),*(undefined4 *)(puVar22 + -0x1d54));
              *(ulong *)(puVar22 + -0x1de0) =
                   CONCAT44(*(undefined4 *)(puVar22 + -0x1d4c),*(undefined4 *)(puVar22 + -0x1d4c));
              *(undefined8 *)(puVar22 + -0x1e08) = *(undefined8 *)(puVar22 + -0x1dd0);
              *(undefined1 **)(puVar22 + -0x1e10) = puVar22 + -0x1d88;
              *(undefined1 **)(puVar22 + -0x1e18) = puVar22 + -0x1d90;
              *(undefined8 *)(puVar22 + -0x1e20) = 0x103af0;
              _collide_shape_queries
                        (*(undefined8 *)(puVar22 + -0x1de8),*(undefined8 *)(puVar22 + -0x1de0),
                         *(undefined8 *)(puVar22 + -0x1df8),*(undefined8 *)(puVar22 + -0x1df0),this,
                         *(undefined8 *)(puVar22 + -0x1db0),this_00,puVar22 + -0x1ce8,
                         *(undefined8 *)(puVar22 + -0x1dc8),this_01);
              iVar18 = (int)*(undefined8 *)(puVar22 + 0x6fc0);
              *(int *)(puVar22 + -0x1df8) = iVar18;
              if (0 < iVar18) {
                *(ShapeResult **)(puVar22 + -0x1de8) = param_2 + ((ulong)(iVar18 - 1) + 1) * 0x20;
                do {
                  *(undefined8 *)(puVar22 + -0x1e00) = 0x103b3c;
                  JoltSpace3D::read_body(this_00);
                  if ((*(long *)(puVar22 + -0x1c78) == 0) ||
                     (pSVar9 = *(SubShapeID **)(*(long *)(puVar22 + -0x1c78) + 0x50),
                     pSVar9 == (SubShapeID *)0x0)) {
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103c65;
                    _err_print_error("intersect_shape",
                                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                     ,0x266,"Parameter \"object\" is null.",0,0);
LAB_00103c65:
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103c6d;
                    JoltBodyAccessor3D::release();
                    *(code **)(puVar22 + -0x1cb8) = _err_print_error;
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103c84;
                    JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)this_00);
                    *(undefined4 *)(puVar22 + -0x1df8) = 0;
                    break;
                  }
                  pSVar21 = param_2 + 0x20;
                  SVar5 = pSVar9[0x3c];
                  *(undefined4 *)(param_2 + 0x18) = 0;
                  if (SVar5 != (SubShapeID)0x2) {
                    *(undefined8 *)(puVar22 + -0x1e00) = 0x103b78;
                    iVar18 = JoltShapedObject3D::find_shape_index(pSVar9);
                    if (iVar18 == -1) {
                      *(undefined8 *)(puVar22 + -0x1e00) = 0x103cb5;
                      _err_print_error("intersect_shape",
                                       "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                       ,0x26e,
                                       "Condition \"shape_index == -1\" is true. Returning: 0",0,0);
                      goto LAB_00103c65;
                    }
                    *(int *)(param_2 + 0x18) = iVar18;
                  }
                  uVar19 = *(undefined8 *)(pSVar9 + 0x20);
                  *(undefined8 *)param_2 = *(undefined8 *)(pSVar9 + 0x18);
                  *(undefined8 *)(param_2 + 8) = uVar19;
                  *(undefined8 *)(puVar22 + -0x1e00) = 0x103b9d;
                  uVar19 = JoltObject3D::get_instance();
                  *(undefined8 *)(param_2 + 0x10) = uVar19;
                  *(undefined8 *)(puVar22 + -0x1e00) = 0x103ba9;
                  JoltBodyAccessor3D::release();
                  *(code **)(puVar22 + -0x1cb8) = _err_print_error;
                  *(undefined8 *)(puVar22 + -0x1e00) = 0x103bc0;
                  JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)this_00);
                  param_2 = pSVar21;
                } while (pSVar21 != *(ShapeResult **)(puVar22 + -0x1de8));
              }
              *(undefined ***)(puVar22 + -0x1c68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
              if (*(long *)(puVar22 + 0x6fd0) != 0) {
                *(undefined8 *)(puVar22 + 0x6fc0) = 0;
                if (0x87a0 < (ulong)(*(long *)(puVar22 + 0x6fd0) - *(long *)(puVar22 + -0x1dc0))) {
                  *(undefined8 *)(puVar22 + -0x1e00) = 0x103c11;
                  (*JPH::Free)();
                }
              }
            }
            plVar20 = *(long **)(puVar22 + -0x1db0);
            if (plVar20 != (long *)0x0) {
              LOCK();
              plVar1 = plVar20 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                pcVar8 = *(code **)(*plVar20 + 8);
                *(undefined8 *)(puVar22 + -0x1e00) = 0x103c37;
                (*pcVar8)();
              }
            }
            goto LAB_00103676;
          }
        }
        else if (iVar18 + 0x80000000U < 0x7fffffff) {
          *(undefined8 *)(puVar22 + -0x1e08) = 0;
          *(undefined8 *)(puVar22 + -0x1e10) = 0x103d32;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0);
        }
      }
      *(undefined8 *)(puVar22 + -0x1e00) = 0x103d5d;
      _err_print_error("intersect_shape",
                       "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x249,
                       "Parameter \"shape\" is null.",0,0);
    }
  }
  else {
    *(undefined8 *)(puVar22 + -0x1e08) = 0;
    *(undefined8 *)(puVar22 + -0x1e10) = 0x103cef;
    _err_print_error("intersect_shape",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x240,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "intersect_shape must not be called while the physics space is being stepped.",
                     0);
  }
  *(undefined4 *)(puVar22 + -0x1df8) = 0;
LAB_00103676:
  if (*(long *)(puVar22 + 0x6ff0) == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(undefined4 *)(puVar22 + -0x1df8);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -0x1e00) = &UNK_00103f9d;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::collide_shape(PhysicsDirectSpaceState3D::ShapeParameters const&,
   Vector3*, int, int&) */

undefined1 __thiscall
JoltPhysicsDirectSpaceState3D::collide_shape
          (JoltPhysicsDirectSpaceState3D *this,ShapeParameters *param_1,Vector3 *param_2,int param_3
          ,int *param_4)

{
  long *plVar1;
  Vector3 *pVVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  ShapeParameters SVar15;
  ShapeParameters SVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  code *pcVar20;
  StrRange *pSVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  char cVar27;
  float *pfVar28;
  float *pfVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  undefined1 *puVar33;
  long lVar34;
  float *pfVar35;
  undefined1 uVar36;
  int iVar37;
  int iVar38;
  JoltQueryFilter3D *this_00;
  long in_FS_OFFSET;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  undefined1 local_9030 [36864];
  
  puVar26 = &stack0xffffffffffffffd0;
  do {
    puVar33 = puVar26;
    *(undefined8 *)(puVar33 + -0x1000) = *(undefined8 *)(puVar33 + -0x1000);
    puVar26 = puVar33 + -0x1000;
  } while (puVar33 + -0x1000 != local_9030);
  lVar18 = *(long *)(this + 0x178);
  *(Vector3 **)(puVar33 + -0x15e0) = param_2;
  *(int **)(puVar33 + -0x1598) = param_4;
  cVar27 = *(char *)(lVar18 + 0x89);
  *(undefined8 *)(puVar33 + 0x7ff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *param_4 = 0;
  if (cVar27 == '\0') {
    if (param_3 != 0) {
      *(undefined8 *)(puVar33 + -0x1600) = 0x104050;
      JoltSpace3D::try_optimize();
      uVar19 = *(ulong *)param_1;
      if ((uVar19 != 0) && ((uint)uVar19 < *(uint *)(JoltPhysicsServer3D::singleton + 0x2f4))) {
        plVar30 = (long *)(((uVar19 & 0xffffffff) %
                           (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 0x10 +
                          *(long *)(*(long *)(JoltPhysicsServer3D::singleton + 0x2e0) +
                                   ((uVar19 & 0xffffffff) /
                                   (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 8));
        iVar38 = (int)plVar30[1];
        if (iVar38 == (int)(uVar19 >> 0x20)) {
          if (*plVar30 != 0) {
            *(undefined8 *)(puVar33 + -0x1600) = 0x1040b5;
            JoltShape3D::try_build();
            uVar36 = 0;
            if (*(long *)(puVar33 + -0x1580) == 0) {
              *(undefined8 *)(puVar33 + -0x1600) = 0x10483f;
              _err_print_error("collide_shape",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x2a8,"Parameter \"jolt_shape\" is null.",0,0);
            }
            else {
              uVar22 = *(undefined8 *)(param_1 + 0x10);
              uVar23 = *(undefined8 *)(param_1 + 0x28);
              uVar24 = *(undefined8 *)(param_1 + 0x30);
              *(undefined8 *)(puVar33 + -0x1518) = *(undefined8 *)(param_1 + 8);
              *(undefined8 *)(puVar33 + -0x1510) = uVar22;
              uVar22 = *(undefined8 *)(param_1 + 0x18);
              uVar25 = *(undefined8 *)(param_1 + 0x20);
              *(undefined8 *)(puVar33 + -0x14f8) = uVar23;
              *(undefined8 *)(puVar33 + -0x14f0) = uVar24;
              *(undefined8 *)(puVar33 + -0x1508) = uVar22;
              *(undefined8 *)(puVar33 + -0x1500) = uVar25;
              fVar39 = ((*(float *)(puVar33 + -0x1508) * *(float *)(puVar33 + -0x14f8) -
                        *(float *)(puVar33 + -0x1504) * *(float *)(puVar33 + -0x14fc)) *
                        *(float *)(puVar33 + -0x1518) -
                       (*(float *)(puVar33 + -0x14f8) * *(float *)(puVar33 + -0x1514) -
                       *(float *)(puVar33 + -0x14fc) * *(float *)(puVar33 + -0x1510)) *
                       *(float *)(puVar33 + -0x150c)) +
                       (*(float *)(puVar33 + -0x1514) * *(float *)(puVar33 + -0x1504) -
                       *(float *)(puVar33 + -0x1510) * *(float *)(puVar33 + -0x1508)) *
                       *(float *)(puVar33 + -0x1500);
              if (NAN(fVar39)) {
                *(undefined1 **)(puVar33 + -0x15c8) = puVar33 + -0x1578;
                *(uint *)(puVar33 + -0x15d8) = _LC20;
              }
              else if (fVar39 == 0.0) {
                *(undefined8 *)(puVar33 + -0x1578) = 0;
                *(char **)(puVar33 + -0x1568) =
                     "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
                ;
                pSVar21 = (StrRange *)(puVar33 + -0x1578);
                *(StrRange **)(puVar33 + -0x15c8) = pSVar21;
                *(undefined8 *)(puVar33 + -0x1560) = 0xd1;
                *(undefined8 *)(puVar33 + -0x1600) = 0x104991;
                String::parse_latin1(pSVar21);
                *(undefined8 *)(puVar33 + -0x1600) = 0x1049a3;
                vformat<char_const*>((String *)(puVar33 + -0x1568),(char *)pSVar21);
                *(undefined8 *)(puVar33 + -0x1600) = 0x1049c7;
                _err_print_error("collide_shape",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x2ab,(String *)(puVar33 + -0x1568),0,1);
                if (*(long *)(puVar33 + -0x1568) != 0) {
                  LOCK();
                  plVar30 = (long *)(*(long *)(puVar33 + -0x1568) + -0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    lVar18 = *(long *)(puVar33 + -0x1568);
                    *(undefined8 *)(puVar33 + -0x1568) = 0;
                    *(undefined8 *)(puVar33 + -0x1600) = 0x1049fb;
                    Memory::free_static((void *)(lVar18 + -0x10),false);
                  }
                }
                if (*(long *)(puVar33 + -0x1578) != 0) {
                  LOCK();
                  plVar30 = (long *)(*(long *)(puVar33 + -0x1578) + -0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    lVar18 = *(long *)(puVar33 + -0x1578);
                    *(undefined8 *)(puVar33 + -0x1578) = 0;
                    *(undefined8 *)(puVar33 + -0x1600) = 0x104a2f;
                    Memory::free_static((void *)(lVar18 + -0x10),false);
                  }
                }
                *(undefined1 (*) [16])(puVar33 + -0x1518) = ZEXT416(_LC20);
                *(undefined1 (*) [16])(puVar33 + -0x1508) = ZEXT416(_LC20);
                *(uint *)(puVar33 + -0x15d8) = _LC20;
                *(uint *)(puVar33 + -0x14f8) = _LC20;
              }
              else {
                *(undefined1 **)(puVar33 + -0x15c8) = puVar33 + -0x1578;
                *(uint *)(puVar33 + -0x15d8) = _LC20;
              }
              this_00 = (JoltQueryFilter3D *)(puVar33 + -0x1568);
              pVVar2 = (Vector3 *)(puVar33 + -0x1524);
              *(undefined8 *)(puVar33 + -0x1524) = 0;
              *(Basis **)(puVar33 + -0x15f8) = (Basis *)(puVar33 + -0x1518);
              *(undefined4 *)(puVar33 + -0x151c) = 0;
              *(undefined8 *)(puVar33 + -0x1600) = 0x1041da;
              JoltMath::decompose((Basis *)(puVar33 + -0x1518),pVVar2);
              *(undefined8 *)(puVar33 + -0x1600) = 0x1041e7;
              auVar44 = JoltShape3D::make_scale_valid(*(Shape **)(puVar33 + -0x1580),pVVar2);
              *(long *)(puVar33 + -0xc68) = auVar44._0_8_;
              *(Vector3 **)(puVar33 + -0x15b8) = (Vector3 *)(puVar33 + -0xc68);
              *(int *)(puVar33 + -0xc60) = auVar44._8_4_;
              *(undefined8 *)(puVar33 + -0x1600) = 0x104219;
              cVar27 = JoltShape3D::is_scale_valid(pVVar2,(Vector3 *)(puVar33 + -0xc68),_LC66);
              if (cVar27 == '\0') {
                pSVar21 = *(StrRange **)(puVar33 + -0x15c8);
                *(undefined8 *)(puVar33 + -0x1578) = 0;
                *(char **)(puVar33 + -0x1568) =
                     "%s A scale of %v is not supported by Jolt Physics for this shape/body. The scale will instead be treated as %v."
                ;
                *(undefined8 *)(puVar33 + -0x1560) = 0x6f;
                *(undefined8 *)(puVar33 + -0x1600) = 0x10487b;
                String::parse_latin1(pSVar21);
                *(undefined8 *)(puVar33 + -0x1600) = 0x1048b1;
                vformat<char_const*,Vector3,Vector3>
                          (*(undefined8 *)(puVar33 + -0x1524),*(undefined4 *)(puVar33 + -0x151c),
                           *(undefined8 *)(puVar33 + -0xc68),*(undefined4 *)(puVar33 + -0xc60),
                           this_00,pSVar21,"collide_shape was passed an invalid transform.");
                *(undefined8 *)(puVar33 + -0x1600) = 0x1048d2;
                _err_print_error("collide_shape",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x2af,this_00,0,0);
                if (*(long *)(puVar33 + -0x1568) != 0) {
                  LOCK();
                  plVar30 = (long *)(*(long *)(puVar33 + -0x1568) + -0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    lVar18 = *(long *)(puVar33 + -0x1568);
                    *(undefined8 *)(puVar33 + -0x1568) = 0;
                    *(undefined8 *)(puVar33 + -0x1600) = 0x104906;
                    Memory::free_static((void *)(lVar18 + -0x10),false);
                  }
                }
                if (*(long *)(puVar33 + -0x1578) != 0) {
                  LOCK();
                  plVar30 = (long *)(*(long *)(puVar33 + -0x1578) + -0x10);
                  *plVar30 = *plVar30 + -1;
                  UNLOCK();
                  if (*plVar30 == 0) {
                    lVar18 = *(long *)(puVar33 + -0x1578);
                    *(undefined8 *)(puVar33 + -0x1578) = 0;
                    *(undefined8 *)(puVar33 + -0x1600) = 0x104942;
                    Memory::free_static((void *)(lVar18 + -0x10),false);
                  }
                }
              }
              *(undefined8 *)(puVar33 + -0x1524) = *(undefined8 *)(puVar33 + -0xc68);
              *(undefined4 *)(puVar33 + -0x151c) = *(undefined4 *)(puVar33 + -0xc60);
              pcVar20 = *(code **)(**(long **)(puVar33 + -0x1580) + 0x18);
              *(undefined8 *)(puVar33 + -0x1600) = 0x10424a;
              auVar44 = (*pcVar20)();
              *(undefined1 (*) [12])(puVar33 + -0x1530) = auVar44;
              *(undefined8 *)(puVar33 + -0x1600) = 0x104284;
              Transform3D::translated_local((Vector3 *)(puVar33 + -0x14e8));
              SVar15 = param_1[0x74];
              uVar17 = *(uint *)(param_1 + 0x70);
              *(undefined1 (*) [16])(puVar33 + -0x14a8) = (undefined1  [16])0x0;
              uVar3 = *(undefined4 *)(param_1 + 0x44);
              puVar33[-0x1494] = 0;
              SVar16 = param_1[0x75];
              *(undefined8 *)(puVar33 + -0x14b4) = _LC92;
              *(undefined2 *)(puVar33 + -0x14b8) = 0;
              *(undefined4 *)(puVar33 + -0x1498) = uVar3;
              *(undefined8 *)(puVar33 + -0x1608) = 0;
              *(undefined8 *)(puVar33 + -0x1610) = 0x1042e3;
              JoltQueryFilter3D::JoltQueryFilter3D
                        (this_00,this,uVar17,(bool)SVar15,(bool)SVar16,(HashSet *)(param_1 + 0x48),
                         (bool)puVar33[-0x1608]);
              uVar3 = *(undefined4 *)(puVar33 + -0x14c4);
              uVar4 = *(undefined4 *)(puVar33 + -0x14bc);
              *(undefined4 *)(puVar33 + -0x159c) = uVar3;
              *(undefined8 *)(puVar33 + 0x7fb8) = __LC14;
              *(undefined8 *)(puVar33 + 0x7fc0) = _UNK_0010f188;
              *(undefined ***)(puVar33 + -0xc68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
              *(undefined4 *)(puVar33 + -0x15a0) = *(undefined4 *)(puVar33 + -0x14c0);
              *(undefined4 *)(puVar33 + -0x15f8) = *(undefined4 *)(puVar33 + -0x14c4);
              *(undefined4 *)(puVar33 + -0x15f4) = *(undefined4 *)(puVar33 + -0x14c0);
              *(undefined4 *)(puVar33 + -0x15f0) = *(undefined4 *)(puVar33 + -0x14bc);
              *(undefined4 *)(puVar33 + -0x15ec) = uVar4;
              auVar43._4_4_ = *(undefined4 *)(puVar33 + -0x14d4);
              auVar43._0_4_ = *(undefined4 *)(puVar33 + -0x14e0);
              *(undefined1 **)(puVar33 + -0x1590) = puVar33 + -0xc48;
              auVar43._8_4_ = *(undefined4 *)(puVar33 + -0x14c8);
              auVar43._12_4_ = 0;
              *(int *)(puVar33 + 0x7fd8) = param_3;
              *(undefined1 **)(puVar33 + 0x7fd0) = puVar33 + -0xc48;
              auVar41._4_4_ = *(undefined4 *)(puVar33 + -0x14d8);
              auVar41._0_4_ = *(undefined4 *)(puVar33 + -0x14e4);
              *(undefined ***)(puVar33 + -0x1578) = &PTR__ShapeFilter_0010ecc0;
              auVar41._8_4_ = *(undefined4 *)(puVar33 + -0x14cc);
              auVar41._12_4_ = 0;
              *(undefined1 (*) [16])(puVar33 + -0x1058) = auVar43;
              *(undefined1 (*) [16])(puVar33 + -0x1068) = auVar41;
              *(undefined4 *)(puVar33 + -0x1048) = uVar3;
              auVar42._4_4_ = *(undefined4 *)(puVar33 + -0x14dc);
              auVar42._0_4_ = *(undefined4 *)(puVar33 + -0x14e8);
              *(undefined4 *)(puVar33 + -0x1044) = *(undefined4 *)(puVar33 + -0x14c0);
              auVar42._8_4_ = *(undefined4 *)(puVar33 + -0x14d0);
              auVar42._12_4_ = 0;
              *(undefined1 (*) [16])(puVar33 + -0x1078) = auVar42;
              *(undefined4 *)(puVar33 + -0x1040) = uVar4;
              *(undefined4 *)(puVar33 + -0xc60) = 0x7f7fffff;
              *(undefined8 *)(puVar33 + -0xc58) = 0;
              *(undefined8 *)(puVar33 + 0x7fc8) = 0x20;
              *(undefined4 *)(puVar33 + -0x1570) = 0xffffffff;
              *(undefined4 *)(puVar33 + -0x15b0) = uVar4;
              *(undefined1 **)(puVar33 + -0x15c0) = puVar33 + -0x1078;
              *(undefined4 *)(puVar33 + -0x103c) = *(undefined4 *)(puVar33 + -0x15d8);
              *(undefined4 *)(puVar33 + -0x15d8) = *(undefined4 *)(puVar33 + -0x1524);
              *(undefined4 *)(puVar33 + -0x15d4) = *(undefined4 *)(puVar33 + -0x1520);
              *(undefined4 *)(puVar33 + -0x15d0) = *(undefined4 *)(puVar33 + -0x151c);
              *(undefined4 *)(puVar33 + -0x15cc) = *(undefined4 *)(puVar33 + -0x151c);
              *(undefined8 *)(puVar33 + -0x1608) = *(undefined8 *)(puVar33 + -0x15c8);
              *(undefined1 **)(puVar33 + -0x1610) = puVar33 + -0x1558;
              *(undefined1 **)(puVar33 + -0x1618) = puVar33 + -0x1560;
              *(undefined8 *)(puVar33 + -0x1620) = 0x1044cc;
              _collide_shape_queries
                        (*(undefined8 *)(puVar33 + -0x15d8),*(undefined8 *)(puVar33 + -0x15d0),
                         *(undefined8 *)(puVar33 + -0x15f8),*(undefined8 *)(puVar33 + -0x15f0),this,
                         *(undefined8 *)(puVar33 + -0x1580),puVar33 + -0x1078,puVar33 + -0x14b8,
                         *(undefined8 *)(puVar33 + -0x15b8),this_00);
              if (*(long *)(puVar33 + 0x7fc0) != 0) {
                if ((int)*(long *)(puVar33 + 0x7fc0) < 1) {
                  iVar38 = 0;
                }
                else {
                  uVar3 = *(undefined4 *)(puVar33 + -0x15b0);
                  lVar32 = 0;
                  iVar38 = 0;
                  *(JoltPhysicsDirectSpaceState3D **)(puVar33 + -0x15b0) = this;
                  lVar18 = *(long *)(puVar33 + -0x15e0);
                  *(undefined1 **)(puVar33 + -0x15b8) = puVar33 + -0x1488;
                  *(undefined4 *)(puVar33 + -0x15a4) = uVar3;
                  iVar37 = 0;
                  do {
                    *(undefined4 *)(puVar33 + -0x1488) = 0;
                    lVar34 = *(long *)(puVar33 + 0x7fd0) + lVar32;
                    fVar39 = *(float *)(lVar34 + 0x20);
                    auVar43 = *(undefined1 (*) [16])(lVar34 + 0x20);
                    fVar5 = *(float *)(lVar34 + 0x24);
                    fVar6 = *(float *)(lVar34 + 0x28);
                    *(undefined4 *)(puVar33 + -0x1078) = 0;
                    auVar40._0_4_ = SQRT(fVar6 * fVar6 + fVar39 * fVar39 + 0.0 + fVar5 * fVar5);
                    auVar40._4_4_ = auVar40._0_4_;
                    auVar40._8_4_ = auVar40._0_4_;
                    auVar40._12_4_ = auVar40._0_4_;
                    auVar43 = divps(auVar43,auVar40);
                    fVar39 = *(float *)(param_1 + 0x44);
                    *(float *)(puVar33 + -0x15c8) = auVar43._8_4_ * fVar39;
                    *(float *)(puVar33 + -0x15d8) = auVar43._4_4_ * fVar39;
                    *(float *)(puVar33 + -0x15e0) = auVar43._0_4_ * fVar39;
                    *(undefined8 *)(puVar33 + -0x1600) = 0x1045de;
                    _generate_manifold(*(undefined8 *)(puVar33 + -0x15f8),
                                       *(undefined8 *)(puVar33 + -0x15f0),
                                       *(undefined8 *)(puVar33 + -0x15b0),lVar34,
                                       *(undefined8 *)(puVar33 + -0x15b8),
                                       *(undefined8 *)(puVar33 + -0x15c0));
                    if (*(uint *)(puVar33 + -0x1488) == 0) {
                      if (param_3 * 2 <= iVar38) break;
                    }
                    else {
                      pfVar28 = (float *)(puVar33 + -0x1478);
                      fVar39 = *(float *)(puVar33 + -0x15a4);
                      fVar5 = *(float *)(puVar33 + -0x15a0);
                      pfVar35 = pfVar28 + (ulong)*(uint *)(puVar33 + -0x1488) * 4;
                      fVar6 = *(float *)(puVar33 + -0x159c);
                      fVar7 = *(float *)(puVar33 + -0x15c8);
                      fVar8 = *(float *)(puVar33 + -0x15d8);
                      pfVar29 = (float *)(puVar33 + -0x1068);
                      puVar31 = (undefined8 *)(lVar18 + (long)iVar38 * 0xc);
                      fVar9 = *(float *)(puVar33 + -0x15e0);
                      do {
                        fVar10 = *pfVar28;
                        fVar11 = pfVar28[1];
                        iVar38 = iVar38 + 2;
                        fVar12 = pfVar28[2];
                        fVar13 = *pfVar29;
                        fVar14 = pfVar29[2];
                        *(float *)(puVar31 + 2) = pfVar29[1] + fVar5;
                        *(float *)((long)puVar31 + 0x14) = fVar14 + fVar39;
                        *puVar31 = CONCAT44(fVar11 + fVar5 + fVar8,fVar10 + fVar6 + fVar9);
                        puVar31[1] = CONCAT44(fVar13 + fVar6,fVar12 + fVar39 + fVar7);
                        if (param_3 * 2 <= iVar38) goto LAB_001046be;
                        pfVar28 = pfVar28 + 4;
                        pfVar29 = pfVar29 + 4;
                        puVar31 = puVar31 + 3;
                      } while (pfVar35 != pfVar28);
                    }
                    iVar37 = iVar37 + 1;
                    lVar32 = lVar32 + 0x460;
                  } while (iVar37 < *(int *)(puVar33 + 0x7fc0));
LAB_001046be:
                  iVar38 = iVar38 / 2;
                }
                uVar36 = 1;
                **(int **)(puVar33 + -0x1598) = iVar38;
              }
              *(undefined ***)(puVar33 + -0xc68) = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
              if ((*(long *)(puVar33 + 0x7fd0) != 0) &&
                 (*(undefined8 *)(puVar33 + 0x7fc0) = 0,
                 0x87a0 < (ulong)(*(long *)(puVar33 + 0x7fd0) - *(long *)(puVar33 + -0x1590)))) {
                *(undefined8 *)(puVar33 + -0x1600) = 0x104717;
                (*JPH::Free)();
              }
            }
            plVar30 = *(long **)(puVar33 + -0x1580);
            if (plVar30 != (long *)0x0) {
              LOCK();
              plVar1 = plVar30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                pcVar20 = *(code **)(*plVar30 + 8);
                *(undefined8 *)(puVar33 + -0x1600) = 0x10473f;
                (*pcVar20)();
              }
            }
            goto LAB_00104016;
          }
        }
        else if (iVar38 + 0x80000000U < 0x7fffffff) {
          *(undefined8 *)(puVar33 + -0x1608) = 0;
          *(undefined8 *)(puVar33 + -0x1610) = 0x1047e4;
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0);
        }
      }
      *(undefined8 *)(puVar33 + -0x1600) = 0x104815;
      _err_print_error("collide_shape",
                       "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x2a5,
                       "Parameter \"shape\" is null.",0,0);
    }
  }
  else {
    *(undefined8 *)(puVar33 + -0x1608) = 0;
    *(undefined8 *)(puVar33 + -0x1610) = 0x10479e;
    _err_print_error("collide_shape",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x29c,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "collide_shape must not be called while the physics space is being stepped.",0)
    ;
  }
  uVar36 = 0;
LAB_00104016:
  if (*(long *)(puVar33 + 0x7ff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar33 + -0x1600) = &UNK_00104a97;
    __stack_chk_fail();
  }
  return uVar36;
}



/* JoltPhysicsDirectSpaceState3D::cast_motion(PhysicsDirectSpaceState3D::ShapeParameters const&,
   float&, float&, PhysicsDirectSpaceState3D::ShapeRestInfo*) */

undefined1 __thiscall
JoltPhysicsDirectSpaceState3D::cast_motion
          (JoltPhysicsDirectSpaceState3D *this,ShapeParameters *param_1,float *param_2,
          float *param_3,ShapeRestInfo *param_4)

{
  Shape *pSVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined **ppuVar9;
  char *pcVar10;
  char cVar11;
  bool bVar12;
  long *plVar13;
  undefined1 uVar14;
  long in_FS_OFFSET;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  StrRange *local_158;
  Shape *local_140;
  undefined **local_138;
  undefined4 local_130;
  char *local_128;
  undefined8 local_120;
  BodyFilter local_118 [40];
  undefined1 local_f0 [12];
  undefined8 local_e4;
  undefined4 local_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Vector3 local_a8 [48];
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) == '\0') {
    if (param_4 == (ShapeRestInfo *)0x0) {
      JoltSpace3D::try_optimize();
      uVar4 = *(ulong *)param_1;
      if ((uVar4 != 0) && ((uint)uVar4 < *(uint *)(JoltPhysicsServer3D::singleton + 0x2f4))) {
        plVar13 = (long *)(((uVar4 & 0xffffffff) %
                           (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 0x10 +
                          *(long *)(*(long *)(JoltPhysicsServer3D::singleton + 0x2e0) +
                                   ((uVar4 & 0xffffffff) /
                                   (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x2f0)) * 8));
        iVar3 = (int)plVar13[1];
        if (iVar3 == (int)(uVar4 >> 0x20)) {
          if (*plVar13 != 0) {
            JoltShape3D::try_build();
            if (local_140 == (Shape *)0x0) {
              _err_print_error("cast_motion",
                               "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",
                               0x284,"Parameter \"jolt_shape\" is null.",0,0);
              uVar14 = 0;
            }
            else {
              uVar5 = *(undefined8 *)(param_1 + 0x18);
              auVar7 = *(undefined1 (*) [16])(param_1 + 0x18);
              local_b8 = *(undefined8 *)(param_1 + 0x28);
              uStack_b0 = *(undefined8 *)(param_1 + 0x30);
              uVar6 = *(undefined8 *)(param_1 + 8);
              auVar8 = *(undefined1 (*) [16])(param_1 + 8);
              local_c8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
              local_c8._0_4_ = (undefined4)uVar5;
              fStack_bc = (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
              local_d8._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
              fStack_d0 = (float)*(undefined8 *)(param_1 + 0x10);
              local_d8._0_4_ = (undefined4)uVar6;
              fVar15 = ((float)local_b8 * (float)local_c8._0_4_ - (float)local_c8._4_4_ * fStack_bc)
                       * (float)local_d8._0_4_;
              fStack_cc = (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
              fVar17 = ((float)local_b8 * (float)local_d8._4_4_ - fStack_bc * fStack_d0) * fStack_cc
              ;
              fStack_c0 = (float)*(undefined8 *)(param_1 + 0x20);
              fVar16 = ((float)local_c8._4_4_ * (float)local_d8._4_4_ -
                       (float)local_c8._0_4_ * fStack_d0) * fStack_c0;
              _local_d8 = auVar8;
              _local_c8 = auVar7;
              if ((fVar15 - fVar17) + fVar16 == 0.0) {
                local_138 = (undefined **)0x0;
                local_128 = 
                "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
                ;
                local_120 = 0xd1;
                String::parse_latin1((StrRange *)&local_138);
                vformat<char_const*>((String *)&local_128,(char *)&local_138);
                _err_print_error("cast_motion",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x287,(String *)&local_128,0,1);
                pcVar10 = local_128;
                if (local_128 != (char *)0x0) {
                  LOCK();
                  plVar13 = (long *)(local_128 + -0x10);
                  *plVar13 = *plVar13 + -1;
                  UNLOCK();
                  if (*plVar13 == 0) {
                    local_128 = (char *)0x0;
                    Memory::free_static(pcVar10 + -0x10,false);
                  }
                }
                ppuVar9 = local_138;
                if (local_138 != (undefined **)0x0) {
                  LOCK();
                  ppuVar2 = local_138 + -2;
                  *ppuVar2 = *ppuVar2 + -1;
                  UNLOCK();
                  if (*ppuVar2 == (undefined *)0x0) {
                    local_138 = (undefined **)0x0;
                    Memory::free_static(ppuVar9 + -2,false);
                  }
                }
                local_b8 = CONCAT44(local_b8._4_4_,0x3f800000);
                _local_d8 = ZEXT416(_LC20);
                _local_c8 = ZEXT416(_LC20);
              }
              local_158 = (StrRange *)&local_138;
              local_e4 = 0;
              local_dc = 0;
              JoltMath::decompose((Basis *)local_d8,(Vector3 *)&local_e4);
              auVar18 = JoltShape3D::make_scale_valid(local_140,(Vector3 *)&local_e4);
              local_70 = auVar18._8_4_;
              local_78 = auVar18._0_2_;
              uStack_76 = auVar18._2_2_;
              uStack_74 = auVar18._4_4_;
              cVar11 = JoltShape3D::is_scale_valid((Vector3 *)&local_e4,(Vector3 *)&local_78,_LC66);
              if (cVar11 == '\0') {
                local_138 = (undefined **)0x0;
                local_128 = 
                "%s A scale of %v is not supported by Jolt Physics for this shape/body. The scale will instead be treated as %v."
                ;
                local_120 = 0x6f;
                String::parse_latin1(local_158);
                vformat<char_const*,Vector3,Vector3>
                          (local_e4,local_dc,CONCAT44(uStack_74,CONCAT22(uStack_76,local_78)),
                           local_70,(JoltQueryFilter3D *)&local_128,local_158,
                           "cast_motion (maybe from ShapeCast3D?) was passed an invalid transform.")
                ;
                _err_print_error("cast_motion",
                                 "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp"
                                 ,0x28b,(JoltQueryFilter3D *)&local_128,0,0);
                pcVar10 = local_128;
                if (local_128 != (char *)0x0) {
                  LOCK();
                  plVar13 = (long *)(local_128 + -0x10);
                  *plVar13 = *plVar13 + -1;
                  UNLOCK();
                  if (*plVar13 == 0) {
                    local_128 = (char *)0x0;
                    Memory::free_static(pcVar10 + -0x10,false);
                  }
                }
                ppuVar9 = local_138;
                if (local_138 != (undefined **)0x0) {
                  LOCK();
                  ppuVar2 = local_138 + -2;
                  *ppuVar2 = *ppuVar2 + -1;
                  UNLOCK();
                  if (*ppuVar2 == (undefined *)0x0) {
                    local_138 = (undefined **)0x0;
                    Memory::free_static(ppuVar9 + -2,false);
                  }
                }
              }
              local_e4 = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
              local_dc = local_70;
              local_f0 = (**(code **)(*(long *)local_140 + 0x18))();
              Transform3D::translated_local(local_a8);
              local_78 = 0x100;
              local_68 = (undefined1  [16])0x0;
              local_58 = *(undefined4 *)(param_1 + 0x44);
              uStack_74 = (undefined4)_LC92;
              local_70 = (undefined4)((ulong)_LC92 >> 0x20);
              local_54 = 0;
              JoltQueryFilter3D::JoltQueryFilter3D
                        ((JoltQueryFilter3D *)&local_128,this,*(uint *)(param_1 + 0x70),
                         (bool)param_1[0x74],(bool)param_1[0x75],(HashSet *)(param_1 + 0x48),false);
              local_130 = 0xffffffff;
              local_138 = &PTR__ShapeFilter_0010ecc0;
              bVar12 = (bool)JoltProjectSettings::use_enhanced_internal_edge_removal_for_queries();
              uVar14 = 1;
              _cast_motion_impl(this,local_140,(Transform3D *)local_a8,(Vector3 *)&local_e4,
                                (Vector3 *)(param_1 + 0x38),bVar12,true,
                                (CollideShapeSettings *)&local_78,
                                (BroadPhaseLayerFilter *)&local_128,(ObjectLayerFilter *)&local_120,
                                local_118,(ShapeFilter *)local_158,param_2,param_3);
            }
            if (local_140 != (Shape *)0x0) {
              LOCK();
              pSVar1 = local_140 + 8;
              *(int *)pSVar1 = *(int *)pSVar1 + -1;
              UNLOCK();
              if (*(int *)pSVar1 == 0) {
                (**(code **)(*(long *)local_140 + 8))();
              }
            }
            goto LAB_00104ddd;
          }
        }
        else if (iVar3 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      _err_print_error("cast_motion",
                       "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x281,
                       "Parameter \"shape\" is null.",0,0);
    }
    else {
      _err_print_error("cast_motion",
                       "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x27c,
                       "Condition \"r_info != nullptr\" is true. Returning: false",
                       "Providing rest info as part of cast_motion is not supported when using Jolt Physics."
                       ,0,0);
    }
  }
  else {
    _err_print_error("cast_motion",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x27b,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "cast_motion must not be called while the physics space is being stepped.",0,0)
    ;
  }
  uVar14 = 0;
LAB_00104ddd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::body_test_motion(JoltBody3D const&,
   PhysicsServer3D::MotionParameters const&, PhysicsServer3D::MotionResult*) const */

undefined8 __thiscall
JoltPhysicsDirectSpaceState3D::body_test_motion
          (JoltPhysicsDirectSpaceState3D *this,JoltBody3D *param_1,MotionParameters *param_2,
          MotionResult *param_3)

{
  HashSet *pHVar1;
  HashSet *pHVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lVar11;
  char *pcVar12;
  char cVar13;
  char cVar14;
  undefined8 uVar15;
  HashSet *pHVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_13c;
  char **local_138;
  float *local_128;
  float local_120;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  Vector3 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x89) != '\0') {
    _err_print_error("body_test_motion",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x370,
                     "Condition \"space->is_stepping()\" is true. Returning: false",
                     "body_test_motion (maybe from move_and_slide?) must not be called while the physics space is being stepped."
                     ,0,0);
    uVar15 = 0;
    goto LAB_001054ea;
  }
  local_13c = *(float *)(param_2 + 0x3c);
  if (local_13c <= (float)_LC92) {
    local_13c = (float)_LC92;
  }
  auVar9 = *(undefined1 (*) [16])param_2;
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  auVar10 = *(undefined1 (*) [16])(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 0x40);
  fStack_a0 = (float)*(undefined8 *)(param_2 + 8);
  fStack_8c = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  local_98._0_4_ = (undefined4)uVar15;
  local_98._4_4_ = (undefined4)((ulong)uVar15 >> 0x20);
  local_88 = (float)*(undefined8 *)(param_2 + 0x20);
  fStack_84 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  fStack_80 = (float)*(undefined8 *)(param_2 + 0x28);
  fStack_7c = (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
  local_a8._4_4_ = (undefined4)((ulong)*(undefined8 *)param_2 >> 0x20);
  local_a8._0_4_ = (undefined4)*(undefined8 *)param_2;
  fStack_9c = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fStack_90 = (float)*(undefined8 *)(param_2 + 0x18);
  fVar17 = ((local_88 * (float)local_98._0_4_ - fStack_8c * (float)local_98._4_4_) *
            (float)local_a8._0_4_ -
           (local_88 * (float)local_a8._4_4_ - fStack_8c * fStack_a0) * fStack_9c) +
           ((float)local_98._4_4_ * (float)local_a8._4_4_ - (float)local_98._0_4_ * fStack_a0) *
           fStack_90;
  _local_a8 = auVar9;
  _local_98 = auVar10;
  if (NAN(fVar17)) {
    local_120 = _LC20;
  }
  else if (fVar17 == 0.0) {
    JoltObject3D::to_string();
    local_100 = 0;
    local_e8 = 
    "body_test_motion (maybe from move_and_slide?) was passed an invalid transform along with body \'%s\'."
    ;
    local_e0 = 99;
    String::parse_latin1((StrRange *)&local_100);
    vformat<String>(&local_f8,(StrRange *)&local_100,&local_108);
    local_f0 = 0;
    local_e8 = 
    "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity."
    ;
    local_e0 = 0xd1;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<String>(&local_e8,(StrRange *)&local_f0,&local_f8);
    _err_print_error("body_test_motion",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",0x376,
                     &local_e8,0,1);
    pcVar12 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar3 = (long *)(local_e8 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar12 + -0x10,false);
      }
    }
    lVar11 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar3 = (long *)(local_f0 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar3 = (long *)(local_f8 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar3 = (long *)(local_100 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar3 = (long *)(local_108 + -0x10);
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    local_120 = _LC20;
    _local_a8 = ZEXT416((uint)_LC20);
    _local_98 = ZEXT416((uint)_LC20);
    local_88 = local_120;
  }
  else {
    local_120 = _LC20;
  }
  local_128 = (float *)&local_f0;
  local_138 = &local_e8;
  pHVar1 = (HashSet *)(param_2 + 0x70);
  local_b4 = 0;
  pHVar2 = (HashSet *)(param_2 + 0x48);
  local_ac = 0;
  _LC20 = local_120;
  JoltMath::decompose((Basis *)local_a8,(Vector3 *)&local_b4);
  JoltSpace3D::try_optimize();
  local_d0 = 0;
  local_c8 = 0.0;
  cVar13 = _body_motion_recover
                     (this,param_1,(Transform3D *)local_a8,local_13c,pHVar2,pHVar1,
                      (Vector3 *)&local_d0);
  fVar17 = local_c8;
  fVar18 = (float)local_d0;
  fStack_84 = fStack_84 + fVar18;
  fVar19 = (float)((ulong)local_d0 >> 0x20);
  fStack_80 = fStack_80 + fVar19;
  local_f0 = CONCAT44(local_f0._4_4_,local_120);
  local_e8 = (char *)CONCAT44(local_e8._4_4_,local_120);
  fStack_7c = fStack_7c + local_c8;
  cVar14 = _body_motion_cast(this,param_1,(Transform3D *)local_a8,(Vector3 *)&local_b4,
                             (Vector3 *)(param_2 + 0x30),(bool)param_2[0x44],pHVar2,pHVar1,local_128
                             ,(float *)local_138);
  if ((cVar14 == '\0') && ((cVar13 == '\0' || (param_2[0x98] == (MotionParameters)0x0)))) {
LAB_00105518:
    if (param_3 != (MotionResult *)0x0) goto LAB_0010551d;
  }
  else {
    fVar6 = local_e8._0_4_;
    local_b8 = *(float *)(param_2 + 0x38) * local_e8._0_4_;
    local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) * local_e8._0_4_,
                        (float)*(undefined8 *)(param_2 + 0x30) * local_e8._0_4_);
    Transform3D::translated(local_78);
    if (uVar8 == 0) goto LAB_00105518;
    pHVar16 = (HashSet *)0x20;
    if ((int)uVar8 < 0x21) {
      pHVar16 = (HashSet *)(ulong)uVar8;
    }
    uVar15 = _body_motion_collide
                       ((JoltBody3D *)this,(Transform3D *)param_1,local_78,local_13c,
                        (int)(Vector3 *)(param_2 + 0x30),pHVar16,pHVar2,(MotionResult *)pHVar1);
    if (param_3 == (MotionResult *)0x0) goto LAB_001054ea;
    fVar4 = *(float *)(param_2 + 0x34);
    fVar5 = *(float *)(param_2 + 0x30);
    if ((char)uVar15 != '\0') {
      *(float *)(param_3 + 8) = *(float *)(param_2 + 0x38) * (float)local_f0 + fVar17;
      *(float *)param_3 = fVar5 * (float)local_f0 + fVar18;
      *(float *)(param_3 + 4) = fVar4 * (float)local_f0 + fVar19;
      fVar17 = *(float *)(param_2 + 0x30);
      uVar7 = *(undefined8 *)(param_2 + 0x34);
      *(float *)(param_3 + 0x20) = fVar6;
      *(float *)(param_3 + 0xc) = fVar17 - (float)local_f0 * fVar17;
      fVar17 = (float)uVar7;
      fVar18 = (float)((ulong)uVar7 >> 0x20);
      *(ulong *)(param_3 + 0x10) =
           CONCAT44(fVar18 - (float)local_f0 * fVar18,fVar17 - (float)local_f0 * fVar17);
      *(ulong *)(param_3 + 0x18) = CONCAT44((float)local_f0,*(undefined4 *)(param_3 + 0x58));
      goto LAB_001054ea;
    }
LAB_0010551d:
    uVar7 = _LC96;
    uVar15 = *(undefined8 *)(param_2 + 0x30);
    fVar6 = *(float *)(param_2 + 0x38);
    *(undefined8 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x14) = 0;
    *(undefined8 *)(param_3 + 0x18) = uVar7;
    *(undefined4 *)(param_3 + 0xa28) = 0;
    *(ulong *)param_3 = CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar19,(float)uVar15 + fVar18);
    *(float *)(param_3 + 8) = fVar17 + fVar6;
    *(float *)(param_3 + 0x20) = local_120;
  }
  uVar15 = 0;
LAB_001054ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltPhysicsDirectSpaceState3D::get_closest_point_to_object_volume(RID, Vector3) const */

undefined1  [16]
JoltPhysicsDirectSpaceState3D::get_closest_point_to_object_volume
          (undefined8 param_1,float param_2,long param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  Support *pSVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined8 local_1bb8;
  float local_1b4c;
  float local_1b08;
  float fStack_1b04;
  float local_1ae8;
  float fStack_1ae4;
  float fStack_1ae0;
  float fStack_1adc;
  undefined1 local_1ad8 [16];
  undefined1 local_1ac8 [8];
  float fStack_1ac0;
  undefined1 local_1ab8 [16];
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  long *local_1a88;
  undefined8 local_1a80;
  undefined4 local_1a78;
  undefined4 local_1a74;
  undefined8 local_1a70;
  undefined8 local_1a38;
  float fStack_1a30;
  undefined4 uStack_1a2c;
  undefined8 local_19f8;
  float fStack_19f0;
  undefined4 uStack_19ec;
  code *local_19e8 [8];
  Body *local_19a8;
  GJKClosestPoint local_1998 [192];
  undefined4 local_18d8;
  undefined **local_18c8;
  undefined4 local_18c0;
  undefined8 local_18b8;
  undefined1 local_18a8 [2048];
  undefined8 local_10a8;
  long lStack_10a0;
  undefined8 local_1098;
  undefined1 *local_1090;
  undefined1 local_1088 [347] [12];
  long local_40;
  
  auVar33._8_4_ = param_2;
  auVar33._0_8_ = param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(param_3 + 0x178) + 0x89) != '\0') {
    _err_print_error("get_closest_point_to_object_volume",
                     "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",799,
                     "Condition \"space->is_stepping()\" is true. Returning: Vector3()",
                     "get_closest_point_to_object_volume must not be called while the physics space is being stepped."
                     ,0,0);
    local_1088[0] = ZEXT812(0);
    goto LAB_00105f4f;
  }
  JoltSpace3D::try_optimize();
  lVar4 = JoltPhysicsServer3D::singleton;
  if (param_4 == 0) {
LAB_001060a0:
    uVar11 = 0x32a;
    pcVar8 = "Parameter \"object\" is null.";
  }
  else {
    iVar6 = (int)(param_4 >> 0x20);
    if (*(uint *)(JoltPhysicsServer3D::singleton + 0x1ec) <= (uint)param_4) {
LAB_00106053:
      if ((uint)param_4 < *(uint *)(lVar4 + 0x244)) {
        plVar9 = (long *)(((param_4 & 0xffffffff) % (ulong)*(uint *)(lVar4 + 0x240)) * 0x10 +
                         *(long *)(*(long *)(lVar4 + 0x230) +
                                  ((param_4 & 0xffffffff) / (ulong)*(uint *)(lVar4 + 0x240)) * 8));
        iVar2 = (int)plVar9[1];
        if (iVar2 == iVar6) {
          lVar10 = *plVar9;
          if (lVar10 != 0) goto LAB_001058d3;
        }
        else if (iVar2 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
      goto LAB_001060a0;
    }
    plVar9 = (long *)(((param_4 & 0xffffffff) %
                      (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x1e8)) * 0x10 +
                     *(long *)(*(long *)(JoltPhysicsServer3D::singleton + 0x1d8) +
                              ((param_4 & 0xffffffff) /
                              (ulong)*(uint *)(JoltPhysicsServer3D::singleton + 0x1e8)) * 8));
    iVar2 = (int)plVar9[1];
    if (iVar2 != iVar6) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_00106053;
    }
    lVar10 = *plVar9;
    if (lVar10 == 0) goto LAB_00106053;
LAB_001058d3:
    if (*(long *)(param_3 + 0x178) == *(long *)(lVar10 + 0x28)) {
      JoltSpace3D::read_body((JoltObject3D *)local_19e8);
      local_1aa8 = *(undefined8 *)local_19a8;
      uStack_1aa0 = *(undefined8 *)(local_19a8 + 8);
      local_1a98 = *(undefined8 *)(local_19a8 + 0x10);
      uStack_1a90 = *(undefined8 *)(local_19a8 + 0x18);
      local_1a88 = *(long **)(local_19a8 + 0x40);
      if (local_1a88 != (long *)0x0) {
        LOCK();
        *(int *)(local_1a88 + 1) = (int)local_1a88[1] + 1;
        UNLOCK();
      }
      local_1a74 = *(undefined4 *)(local_19a8 + 0x70);
      local_1a78 = 0x3f800000;
      fVar19 = 0.0;
      local_1a80 = _LC46;
      local_1a70 = _LC47;
      local_18c8 = &PTR__JoltQueryCollectorAll_0010f088;
      local_10a8 = __LC14;
      lStack_10a0 = _UNK_0010f188;
      local_18c0 = 0x7f7fffff;
      local_18b8 = 0;
      local_1098 = 0x20;
      local_1090 = local_18a8;
      JPH::TransformedShape::CollectTransformedShapes
                ((AABox *)&local_1aa8,(CollisionCollector *)(local_19a8 + 0x20),
                 (ShapeFilter *)&local_18c8);
      local_1b08 = (float)param_1;
      fStack_1b04 = (float)((ulong)param_1 >> 0x20);
      if ((int)lStack_10a0 < 1) {
LAB_00106010:
        auVar33 = JPH::Body::GetPosition(local_19a8);
      }
      else {
        lVar14 = 0;
        local_1b4c = 3.4028235e+38;
        bVar3 = false;
        lVar4 = lStack_10a0;
        lVar10 = lVar14;
        do {
          while( true ) {
            pfVar7 = (float *)(local_1090 + lVar14 * 0x40);
            plVar9 = *(long **)(pfVar7 + 8);
            if ((char)plVar9[3] != '\0') break;
            local_18d8 = 0;
            pSVar5 = (Support *)
                     (**(code **)(*plVar9 + 0x130))
                               (*(undefined8 *)(pfVar7 + 10),*(undefined8 *)(pfVar7 + 0xc),plVar9,1,
                                local_1088);
            fVar16 = (float)*(undefined8 *)(pfVar7 + 4);
            fVar27 = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20);
            fVar15 = (float)*(undefined8 *)(pfVar7 + 6);
            fVar20 = fVar27 + fVar27;
            fVar23 = fVar16 + fVar16;
            fVar17 = (float)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20);
            fVar30 = fVar15 * (fVar15 + fVar15);
            fVar18 = fVar17 * (fVar15 + fVar15);
            fVar26 = fVar15 * fVar20 - fVar23 * fVar17;
            fVar24 = fVar23 * fVar17 + fVar15 * fVar20;
            fVar29 = fVar15 * fVar23 + fVar20 * fVar17;
            fVar22 = fVar15 * fVar23 - fVar20 * fVar17;
            fVar21 = fVar27 * fVar23 + fVar18;
            fVar25 = (_LC20 - fVar16 * fVar23) - fVar27 * fVar20;
            fVar28 = (_LC20 - fVar30) - fVar16 * fVar23;
            fVar18 = fVar27 * fVar23 - fVar18;
            fVar30 = (_LC20 - fVar27 * fVar20) - fVar30;
            auVar32 = (**(code **)(*plVar9 + 0x18))(plVar9);
            fVar16 = auVar32._8_4_;
            local_1bb8._0_4_ = auVar32._0_4_;
            local_1bb8._4_4_ = auVar32._4_4_;
            uStack_1a2c = 0x3f800000;
            uStack_19ec = 0x3f800000;
            fVar15 = (*pfVar7 -
                     ((float)local_1bb8 * fVar30 + local_1bb8._4_4_ * fVar18 + fVar16 * fVar29)) +
                     __LC104;
            fVar20 = (pfVar7[1] -
                     ((float)local_1bb8 * fVar21 + local_1bb8._4_4_ * fVar28 + fVar16 * fVar26)) +
                     _UNK_0010f1e4;
            local_1a38 = CONCAT44(fVar20,fVar15);
            fVar17 = (pfVar7[2] -
                     ((float)local_1bb8 * fVar22 + local_1bb8._4_4_ * fVar24 + fVar16 * fVar25)) +
                     (float)_LC96;
            local_1ae8 = 0.0 - (fVar15 * fVar30 + fVar20 * fVar21 + fVar17 * fVar22);
            fStack_1ae4 = 0.0 - (fVar15 * fVar18 + fVar20 * fVar28 + fVar17 * fVar24);
            local_19f8 = CONCAT44(fStack_1ae4,local_1ae8);
            fStack_19f0 = 0.0 - (fVar15 * fVar29 + fVar20 * fVar26 + fVar17 * fVar25);
            local_1ae8 = fStack_1b04 * fVar21 + local_1b08 * fVar30 + param_2 * fVar22 + local_1ae8;
            fStack_1ae4 = fStack_1b04 * fVar28 + local_1b08 * fVar18 + param_2 * fVar24 +
                          fStack_1ae4;
            fStack_1ae0 = fStack_1b04 * fVar26 + local_1b08 * fVar29 + param_2 * fVar25 +
                          fStack_19f0;
            fStack_1adc = fStack_1b04 * 0.0 + local_1b08 * 0.0 + param_2 * 0.0 + 1.0;
            local_1ad8 = ZEXT416((uint)_LC20);
            _local_1ac8 = (undefined1  [16])0x0;
            local_1ab8 = (undefined1  [16])0x0;
            fStack_1a30 = fVar17;
            fVar16 = JPH::GJKClosestPoint::
                     GetClosestPoints<JPH::ConvexShape::Support,JPH::PointConvexSupport>
                               (local_1998,pSVar5,(PointConvexSupport *)&local_1ae8,(float)_LC92,
                                _LC0,local_1ad8,local_1ac8,local_1ab8);
            if (fVar16 == 0.0) goto LAB_00105ec3;
            local_1bb8 = lVar10;
            if (fVar16 < local_1b4c) {
              bVar3 = true;
              fVar19 = fStack_1ac0 * fVar25 +
                       (float)local_1ac8._0_4_ * fVar22 + (float)local_1ac8._4_4_ * fVar24 + fVar17;
              local_1bb8 = CONCAT44(fStack_1ac0 * fVar26 +
                                    (float)local_1ac8._0_4_ * fVar21 +
                                    (float)local_1ac8._4_4_ * fVar28 + fVar20,
                                    fStack_1ac0 * fVar29 +
                                    (float)local_1ac8._0_4_ * fVar30 +
                                    (float)local_1ac8._4_4_ * fVar18 + fVar15);
              local_1b4c = fVar16;
            }
            lVar14 = lVar14 + 1;
            lVar4 = lStack_10a0;
            lVar10 = local_1bb8;
            if ((int)lStack_10a0 <= (int)lVar14) goto LAB_00105e82;
          }
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 < (int)lVar4);
LAB_00105e82:
        auVar33._8_4_ = fVar19;
        auVar33._0_8_ = lVar10;
        if (!bVar3) goto LAB_00106010;
      }
LAB_00105ec3:
      local_18c8 = &PTR__JoltQueryCollectorAll_0010f088;
      local_1088[0] = auVar33;
      if (local_1090 != (undefined1 *)0x0) {
        if (lStack_10a0 != 0) {
          puVar13 = local_1090 + lStack_10a0 * 0x40;
          for (puVar12 = local_1090; puVar12 < puVar13; puVar12 = puVar12 + 0x40) {
            while (plVar9 = *(long **)(puVar12 + 0x20), plVar9 != (long *)0x0) {
              LOCK();
              plVar1 = plVar9 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 != 0) break;
              puVar12 = puVar12 + 0x40;
              (**(code **)(*plVar9 + 8))();
              if (puVar13 <= puVar12) goto LAB_00105ef0;
            }
          }
        }
LAB_00105ef0:
        lStack_10a0 = 0;
        if (0x7c0 < (ulong)((long)local_1090 - (long)local_18a8)) {
          (*JPH::Free)(local_1090);
        }
      }
      if (local_1a88 != (long *)0x0) {
        LOCK();
        plVar9 = local_1a88 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)(*local_1a88 + 8))();
        }
      }
      JoltBodyAccessor3D::release();
      local_19e8[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D *)local_19e8);
      goto LAB_00105f4f;
    }
    uVar11 = 0x32b;
    pcVar8 = "Condition \"object->get_space() != space\" is true. Returning: Vector3()";
  }
  _err_print_error("get_closest_point_to_object_volume",
                   "modules/jolt_physics/spaces/jolt_physics_direct_space_state_3d.cpp",uVar11,
                   pcVar8,0,0);
  local_1088[0] = ZEXT812(0);
LAB_00105f4f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  auVar31._12_4_ = 0;
  auVar31._0_12_ = local_1088[0];
  return auVar31;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState3D::is_class_ptr(void*) const */

uint __thiscall
PhysicsDirectSpaceState3D::is_class_ptr(PhysicsDirectSpaceState3D *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* PhysicsDirectSpaceState3D::_getv(StringName const&, Variant&) const */

undefined8 PhysicsDirectSpaceState3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState3D::_setv(StringName const&, Variant const&) */

undefined8 PhysicsDirectSpaceState3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo&) const */

void PhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PhysicsDirectSpaceState3D::_property_can_revertv(StringName const&) const */

undefined8 PhysicsDirectSpaceState3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicsDirectSpaceState3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicsDirectSpaceState3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState3D::_notificationv(int, bool) */

void PhysicsDirectSpaceState3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&) const */

undefined8 JPH::ShapeFilter::ShouldCollide(Shape *param_1,SubShapeID *param_2)

{
  return 1;
}



/* JPH::ShapeFilter::ShouldCollide(JPH::Shape const*, JPH::SubShapeID const&, JPH::Shape const*,
   JPH::SubShapeID const&) const */

undefined8
JPH::ShapeFilter::ShouldCollide
          (Shape *param_1,SubShapeID *param_2,Shape *param_3,SubShapeID *param_4)

{
  return 1;
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  return;
}



/* JoltPhysicsDirectSpaceState3D::is_class_ptr(void*) const */

uint __thiscall
JoltPhysicsDirectSpaceState3D::is_class_ptr(JoltPhysicsDirectSpaceState3D *this,void *param_1)

{
  return (uint)CONCAT71(0x10f0,(undefined4 *)param_1 ==
                               &PhysicsDirectSpaceState3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JoltPhysicsDirectSpaceState3D::_getv(StringName const&, Variant&) const */

undefined8 JoltPhysicsDirectSpaceState3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectSpaceState3D::_setv(StringName const&, Variant const&) */

undefined8 JoltPhysicsDirectSpaceState3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo&) const */

void JoltPhysicsDirectSpaceState3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JoltPhysicsDirectSpaceState3D::_property_can_revertv(StringName const&) const */

undefined8 JoltPhysicsDirectSpaceState3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JoltPhysicsDirectSpaceState3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
JoltPhysicsDirectSpaceState3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JoltPhysicsDirectSpaceState3D::_notificationv(int, bool) */

void JoltPhysicsDirectSpaceState3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JPH::InternalEdgeRemovingCollector::Reset() */

void __thiscall JPH::InternalEdgeRemovingCollector::Reset(InternalEdgeRemovingCollector *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  (**(code **)(**(long **)(this + 0x18) + 0x10))();
  *(undefined8 *)(this + 0x828) = 0;
  *(undefined8 *)(this + 0x9448) = 0;
  return;
}



/* JPH::InternalEdgeRemovingCollector::OnBody(JPH::Body const&) */

void JPH::InternalEdgeRemovingCollector::OnBody(Body *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001063fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorAny() */

void __thiscall
JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorAny
          (JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
           *this)

{
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::Reset() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::Reset(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)(this + 0x8c28) = 0;
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00106464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::Reset() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::Reset(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  this[0x480] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                 )0x0;
  return;
}



/* JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::Reset() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::Reset(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)(this + 0x120) = 0;
  return;
}



/* JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>::
     OnBody(Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>::
     SetUserData(ulong param_1)

{
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::Reset() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
::Reset(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
        *this)

{
  *(undefined4 *)(this + 8) = 0x3f800001;
  this[0x24] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
                )0x0;
  return;
}



/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::OnBody(JPH::Body const&) */

void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::OnBody
               (Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>::SetUserData
               (ulong param_1)

{
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::AddHit(JPH::RayCastResult const&) */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
::AddHit(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
         *this,RayCastResult *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((this[0x24] ==
       (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
        )0x0) || (*(float *)(param_1 + 4) < *(float *)(this + 0x1c))) {
    uVar2 = *(undefined8 *)param_1;
    *(float *)(this + 8) = *(float *)(param_1 + 4);
    *(undefined8 *)(this + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 8);
    this[0x24] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
                  )0x1;
    *(undefined4 *)(this + 0x20) = uVar1;
  }
  return;
}



/* JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::Reset() */

void __thiscall
JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::Reset(JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)(this + 37000) = 0;
  return;
}



/* JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::Reset() */

void __thiscall
JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::Reset(JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  this[0x480] = (JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                 )0x0;
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>, 1024>::Reset() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
::Reset(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
        *this)

{
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)(this + 0x1020) = 0;
  return;
}



/* JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>::OnBody(JPH::Body
   const&) */

void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::OnBody
               (Body *param_1)

{
  return;
}



/* JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>::SetUserData(unsigned long) */

void JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>::SetUserData
               (ulong param_1)

{
  return;
}



/* JoltCustomMotionShape::GetSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined1  [16] JoltCustomMotionShape::GetSurfaceNormal(void)

{
  _err_print_error("GetSurfaceNormal",
                   "modules/jolt_physics/spaces/../shapes/jolt_custom_motion_shape.h",0x46,
                   "Method/function failed. Returning: JPH::Vec3::sZero()","Not implemented.",0,0);
  return ZEXT816(0);
}



/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
  operator_delete(this,0x10);
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
           *this)

{
  operator_delete(this,0x28);
  return;
}



/* JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorAny() */

void __thiscall
JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorAny
          (JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  operator_delete(this,0x490);
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
  operator_delete(this,0x490);
  return;
}



/* JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D() */

void __thiscall
JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D(JoltPhysicsDirectSpaceState3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb28;
  Object::~Object((Object *)this);
  return;
}



/* JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D() */

void __thiscall
JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D(JoltPhysicsDirectSpaceState3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010eb28;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::AddHit(JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
         *this,CollideShapeResult *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  fVar1 = *(float *)(param_1 + 0x30);
  if ((this[0x480] ==
       (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
        )0x0) || (*(float *)(this + 0x50) <= fVar1 && fVar1 != *(float *)(this + 0x50))) {
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    *(uint *)(this + 8) = (uint)fVar1 ^ _LC6;
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x28) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x38) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x48) = uVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(this + 0x54) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x50) = uVar2;
    *(undefined4 *)(this + 0x58) = uVar3;
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(uint *)(param_1 + 0x40);
    if ((param_1 + 0x40 != (CollideShapeResult *)(this + 0x60)) &&
       (*(undefined4 *)(this + 0x60) = 0, uVar4 != 0)) {
      lVar6 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + lVar6 + 0x50 + 8);
        *(undefined8 *)(this + lVar6 + 0x70) = *(undefined8 *)(param_1 + lVar6 + 0x50);
        *(undefined8 *)(this + lVar6 + 0x70 + 8) = uVar5;
        lVar6 = lVar6 + 0x10;
      } while ((ulong)uVar4 << 4 != lVar6);
      *(uint *)(this + 0x60) = uVar4;
    }
    uVar4 = *(uint *)(param_1 + 0x250);
    if ((param_1 + 0x250 != (CollideShapeResult *)(this + 0x270)) &&
       (*(undefined4 *)(this + 0x270) = 0, uVar4 != 0)) {
      lVar6 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + lVar6 + 0x260 + 8);
        *(undefined8 *)(this + lVar6 + 0x280) = *(undefined8 *)(param_1 + lVar6 + 0x260);
        *(undefined8 *)(this + lVar6 + 0x280 + 8) = uVar5;
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != (ulong)uVar4 << 4);
      *(uint *)(this + 0x270) = uVar4;
    }
    this[0x480] = (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                   )0x1;
  }
  return;
}



/* PhysicsDirectSpaceState3D::_get_class_namev() const */

undefined8 * PhysicsDirectSpaceState3D::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_001068b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001068b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsDirectSpaceState3D");
      goto LAB_0010691e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsDirectSpaceState3D");
LAB_0010691e:
  return &_get_class_namev()::_class_name_static;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>, 1024>::AddHit(JPH::BodyID const&) */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
::AddHit(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
         *this,BodyID *param_1)

{
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
  *pJVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
  *pJVar5;
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
  *__src;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(this + 0x1020);
  iVar6 = *(int *)(this + 0x1038);
  uVar4 = uVar9 & 0xffffffff;
  if ((int)uVar9 < iVar6) {
    uVar2 = *(ulong *)(this + 0x1028);
    uVar4 = uVar9 + 1;
    __src = *(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
              **)(this + 0x1030);
    if (uVar2 < uVar4) {
      uVar7 = uVar2 * 2;
      if (uVar2 * 2 < uVar4) {
        uVar7 = uVar4;
      }
      if (__src == (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
                    *)0x0) {
        lVar3 = *(long *)(this + 0x1018);
        uVar2 = lVar3 + uVar7;
        if (uVar2 < 0x401) {
          *(ulong *)(this + 0x1018) = uVar2;
          __src = this + lVar3 * 4 + 0x18;
        }
        else {
          __src = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
                   *)(*JPH::Allocate)(uVar7 * 4);
          uVar9 = *(ulong *)(this + 0x1020);
          uVar4 = uVar9 + 1;
        }
      }
      else {
        pJVar1 = this + 0x18;
        if ((ulong)((long)__src - (long)pJVar1) < 0xffd) {
          if ((pJVar1 + (*(long *)(this + 0x1018) - uVar2) * 4 == __src) &&
             (uVar8 = (*(long *)(this + 0x1018) - uVar2) + uVar7, uVar8 < 0x401)) {
            *(ulong *)(this + 0x1018) = uVar8;
          }
          else {
            __dest = (void *)(*JPH::Allocate)(uVar7 * 4);
            pJVar5 = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
                      *)memcpy(__dest,__src,uVar2 * 4);
            if (__src == pJVar1 + (*(long *)(this + 0x1018) - uVar2) * 4) {
              *(ulong *)(this + 0x1018) = *(long *)(this + 0x1018) - uVar2;
            }
            uVar9 = *(ulong *)(this + 0x1020);
            uVar4 = uVar9 + 1;
            __src = pJVar5;
          }
        }
        else {
          __src = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
                   *)(*JPH::Reallocate)(__src,uVar2 * 4,uVar7 * 4);
          uVar9 = *(ulong *)(this + 0x1020);
          uVar4 = uVar9 + 1;
        }
      }
      *(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
        **)(this + 0x1030) = __src;
      *(ulong *)(this + 0x1028) = uVar7;
    }
    *(ulong *)(this + 0x1020) = uVar4;
    if (__src + uVar9 * 4 !=
        (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
         *)0x0) {
      *(undefined4 *)(__src + uVar9 * 4) = *(undefined4 *)param_1;
    }
    iVar6 = *(int *)(this + 0x1038);
  }
  if (iVar6 == (int)uVar4) {
    *(undefined4 *)(this + 8) = 0xff7fffff;
  }
  return;
}



/* JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::AddHit(JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
         *this,CollideShapeResult *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x38) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x48) = uVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x54) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(this + 0x58) = uVar2;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((param_1 + 0x40 != (CollideShapeResult *)(this + 0x60)) &&
     (*(undefined4 *)(this + 0x60) = 0, uVar3 != 0)) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar5 + 0x50 + 8);
      *(undefined8 *)(this + lVar5 + 0x70) = *(undefined8 *)(param_1 + lVar5 + 0x50);
      *(undefined8 *)(this + lVar5 + 0x70 + 8) = uVar4;
      lVar5 = lVar5 + 0x10;
    } while ((ulong)uVar3 << 4 != lVar5);
    *(uint *)(this + 0x60) = uVar3;
  }
  uVar3 = *(uint *)(param_1 + 0x250);
  if ((param_1 + 0x250 != (CollideShapeResult *)(this + 0x270)) &&
     (*(undefined4 *)(this + 0x270) = 0, uVar3 != 0)) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + lVar5 + 0x260 + 8);
      *(undefined8 *)(this + lVar5 + 0x280) = *(undefined8 *)(param_1 + lVar5 + 0x260);
      *(undefined8 *)(this + lVar5 + 0x280 + 8) = uVar4;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != (ulong)uVar3 << 4);
    *(uint *)(this + 0x270) = uVar3;
  }
  this[0x480] = (JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
                 )0x1;
  *(undefined4 *)(this + 8) = 0xff7fffff;
  return;
}



/* JoltPhysicsDirectSpaceState3D::_get_class_namev() const */

undefined8 * JoltPhysicsDirectSpaceState3D::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106c63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106c63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "JoltPhysicsDirectSpaceState3D");
      goto LAB_00106cce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JoltPhysicsDirectSpaceState3D");
LAB_00106cce:
  return &_get_class_namev()::_class_name_static;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>, 1024>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
           *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010ed30;
  lVar1 = *(long *)(this + 0x1030);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x1020) = 0;
    if (0xffc < (ulong)(lVar1 - (long)(this + 0x18))) {
                    /* WARNING: Could not recover jumptable at 0x00106d53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(lVar1);
      return;
    }
  }
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
  lVar1 = *(long *)(this + 0x8c38);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x8c28) = 0;
    if (0x87a0 < (ulong)(lVar1 - (long)(this + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x00106da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(lVar1);
      return;
    }
  }
  return;
}



/* JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorClosestMulti() */

void __thiscall
JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorClosestMulti
          (JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__JoltQueryCollectorClosestMulti_0010edf0;
  lVar1 = *(long *)(this + 0x9098);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 37000) = 0;
    if (0x8c00 < (ulong)(lVar1 - (long)(this + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x00106df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(lVar1);
      return;
    }
  }
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010f008;
  lVar1 = *(long *)(this + 0x130);
  if (lVar1 != 0) {
    *(undefined8 *)(this + 0x120) = 0;
    if (0xf8 < (ulong)(lVar1 - (long)(this + 0x18))) {
                    /* WARNING: Could not recover jumptable at 0x00106e43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(lVar1);
      return;
    }
  }
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010f008;
  if (*(long *)(this + 0x130) != 0) {
    *(undefined8 *)(this + 0x120) = 0;
    if (0xf8 < (ulong)(*(long *)(this + 0x130) - (long)(this + 0x18))) {
      (*JPH::Free)();
      operator_delete(this,0x140);
      return;
    }
  }
  operator_delete(this,0x140);
  return;
}



/* JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorClosestMulti() */

void __thiscall
JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorClosestMulti
          (JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  *(undefined ***)this = &PTR__JoltQueryCollectorClosestMulti_0010edf0;
  if (*(long *)(this + 0x9098) != 0) {
    *(undefined8 *)(this + 37000) = 0;
    if (0x8c00 < (ulong)(*(long *)(this + 0x9098) - (long)(this + 0x20))) {
      (*JPH::Free)();
      operator_delete(this,0x90b0);
      return;
    }
  }
  operator_delete(this,0x90b0);
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>, 1024>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
           *this)

{
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010ed30;
  if (*(long *)(this + 0x1030) != 0) {
    *(undefined8 *)(this + 0x1020) = 0;
    if (0xffc < (ulong)(*(long *)(this + 0x1030) - (long)(this + 0x18))) {
      (*JPH::Free)();
      operator_delete(this,0x1040);
      return;
    }
  }
  operator_delete(this,0x1040);
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  *(undefined ***)this = &PTR__JoltQueryCollectorAnyMulti_0010edb0;
  if (*(long *)(this + 0x8c38) != 0) {
    *(undefined8 *)(this + 0x8c28) = 0;
    if (0x87a0 < (ulong)(*(long *)(this + 0x8c38) - (long)(this + 0x20))) {
      (*JPH::Free)();
      operator_delete(this,0x8c50);
      return;
    }
  }
  operator_delete(this,0x8c50);
  return;
}



/* JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector() */

void __thiscall
JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector
          (InternalEdgeRemovingCollector *this)

{
  *(undefined ***)this = &PTR__InternalEdgeRemovingCollector_0010ecf0;
  if (*(long *)(this + 0x9458) != 0) {
    *(undefined8 *)(this + 0x9448) = 0;
    if (0x87a0 < (ulong)(*(long *)(this + 0x9458) - (long)(this + 0x840))) {
      (*Free)();
    }
  }
  if ((*(long *)(this + 0x838) != 0) &&
     (*(undefined8 *)(this + 0x828) = 0,
     0x7f0 < (ulong)(*(long *)(this + 0x838) - (long)(this + 0x20)))) {
                    /* WARNING: Could not recover jumptable at 0x00107081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::Reset() */

void __thiscall
JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
::Reset(JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
        *this)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  if (*(long *)(this + 0x828) != 0) {
    uVar3 = *(ulong *)(this + 0x838);
    uVar4 = *(long *)(this + 0x828) * 0x40 + uVar3;
    for (; uVar3 < uVar4; uVar3 = uVar3 + 0x40) {
      plVar2 = *(long **)(uVar3 + 0x20);
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
  }
  *(undefined8 *)(this + 0x828) = 0;
  return;
}



/* JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector() */

void __thiscall
JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector
          (InternalEdgeRemovingCollector *this)

{
  *(undefined ***)this = &PTR__InternalEdgeRemovingCollector_0010ecf0;
  if (*(long *)(this + 0x9458) != 0) {
    *(undefined8 *)(this + 0x9448) = 0;
    if (0x87a0 < (ulong)(*(long *)(this + 0x9458) - (long)(this + 0x840))) {
      (*Free)();
    }
  }
  if (*(long *)(this + 0x838) != 0) {
    *(undefined8 *)(this + 0x828) = 0;
    if (0x7f0 < (ulong)(*(long *)(this + 0x838) - (long)(this + 0x20))) {
      (*Free)();
      operator_delete(this,0x9460);
      return;
    }
  }
  operator_delete(this,0x9460);
  return;
}



/* JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAll() */

void __thiscall
JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAll
          (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x838);
  *(undefined ***)this = &PTR__JoltQueryCollectorAll_0010f088;
  if (uVar3 != 0) {
    if ((*(long *)(this + 0x828) != 0) &&
       (uVar4 = *(long *)(this + 0x828) * 0x40 + uVar3, uVar3 < uVar4)) {
      do {
        while (plVar2 = *(long **)(uVar3 + 0x20), plVar2 == (long *)0x0) {
LAB_001071f0:
          uVar3 = uVar3 + 0x40;
          if (uVar4 <= uVar3) goto LAB_00107220;
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001071f0;
        uVar3 = uVar3 + 0x40;
        (**(code **)(*plVar2 + 8))();
      } while (uVar3 < uVar4);
LAB_00107220:
      uVar3 = *(ulong *)(this + 0x838);
    }
    *(undefined8 *)(this + 0x828) = 0;
    if (0x7c0 < uVar3 - (long)(this + 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x00107257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*JPH::Free)(uVar3);
      return;
    }
  }
  return;
}



/* JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAll() */

void __thiscall
JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAll
          (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x838);
  *(undefined ***)this = &PTR__JoltQueryCollectorAll_0010f088;
  if (uVar3 != 0) {
    if ((*(long *)(this + 0x828) != 0) &&
       (uVar4 = *(long *)(this + 0x828) * 0x40 + uVar3, uVar3 < uVar4)) {
      do {
        while (plVar2 = *(long **)(uVar3 + 0x20), plVar2 == (long *)0x0) {
LAB_001072a0:
          uVar3 = uVar3 + 0x40;
          if (uVar4 <= uVar3) goto LAB_001072d0;
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) goto LAB_001072a0;
        uVar3 = uVar3 + 0x40;
        (**(code **)(*plVar2 + 8))();
      } while (uVar3 < uVar4);
LAB_001072d0:
      uVar3 = *(ulong *)(this + 0x838);
    }
    *(undefined8 *)(this + 0x828) = 0;
    if (0x7c0 < uVar3 - (long)(this + 0x20)) {
      (*JPH::Free)(uVar3);
    }
  }
  operator_delete(this,0x840);
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::AddHit(JPH::CollidePointResult const&) */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::AddHit(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
         *this,CollidePointResult *param_1)

{
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *__dest;
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar5;
  JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
  *__src;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = *(ulong *)(this + 0x120);
  iVar6 = *(int *)(this + 0x138);
  uVar4 = uVar9 & 0xffffffff;
  if ((int)uVar9 < iVar6) {
    uVar2 = *(ulong *)(this + 0x128);
    uVar4 = uVar9 + 1;
    __src = *(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
              **)(this + 0x130);
    if (uVar2 < uVar4) {
      uVar7 = uVar2 * 2;
      if (uVar2 * 2 < uVar4) {
        uVar7 = uVar4;
      }
      if (__src == (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
                    *)0x0) {
        lVar3 = *(long *)(this + 0x118);
        uVar2 = lVar3 + uVar7;
        if (uVar2 < 0x21) {
          *(ulong *)(this + 0x118) = uVar2;
          __src = this + lVar3 * 8 + 0x18;
        }
        else {
          __src = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)(*JPH::Allocate)(uVar7 * 8);
          uVar9 = *(ulong *)(this + 0x120);
          uVar4 = uVar9 + 1;
        }
      }
      else {
        pJVar1 = this + 0x18;
        if ((ulong)((long)__src - (long)pJVar1) < 0xf9) {
          if ((pJVar1 + (*(long *)(this + 0x118) - uVar2) * 8 == __src) &&
             (uVar8 = (*(long *)(this + 0x118) - uVar2) + uVar7, uVar8 < 0x21)) {
            *(ulong *)(this + 0x118) = uVar8;
          }
          else {
            __dest = (void *)(*JPH::Allocate)(uVar7 * 8);
            pJVar5 = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
                      *)memcpy(__dest,__src,uVar2 * 8);
            if (__src == pJVar1 + (*(long *)(this + 0x118) - uVar2) * 8) {
              *(ulong *)(this + 0x118) = *(long *)(this + 0x118) - uVar2;
            }
            uVar9 = *(ulong *)(this + 0x120);
            uVar4 = uVar9 + 1;
            __src = pJVar5;
          }
        }
        else {
          __src = (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)(*JPH::Reallocate)(__src,uVar2 * 8,uVar7 * 8);
          uVar9 = *(ulong *)(this + 0x120);
          uVar4 = uVar9 + 1;
        }
      }
      *(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
        **)(this + 0x130) = __src;
      *(ulong *)(this + 0x128) = uVar7;
    }
    *(ulong *)(this + 0x120) = uVar4;
    if (__src + uVar9 * 8 !=
        (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
         *)0x0) {
      *(undefined8 *)(__src + uVar9 * 8) = *(undefined8 *)param_1;
    }
    iVar6 = *(int *)(this + 0x138);
  }
  if (iVar6 == (int)uVar4) {
    *(undefined4 *)(this + 8) = 0xff7fffff;
  }
  return;
}



/* JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::AddHit(JPH::TransformedShape const&) */

void __thiscall
JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
::AddHit(JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
         *this,TransformedShape *param_1)

{
  long *plVar1;
  ulong uVar2;
  JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar16;
  JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar17;
  JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
  *pJVar18;
  
  lVar13 = *(long *)(this + 0x828);
  uVar2 = *(ulong *)(this + 0x830);
  pJVar3 = *(JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
             **)(this + 0x838);
  uVar12 = lVar13 + 1;
  pJVar11 = pJVar3;
  if (uVar2 < uVar12) {
    uVar14 = uVar2 * 2;
    if (uVar2 * 2 < uVar12) {
      uVar14 = uVar12;
    }
    if (pJVar3 == (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)0x0) {
      lVar6 = *(long *)(this + 0x820);
      uVar2 = lVar6 + uVar14;
      if (uVar2 < 0x21) {
        *(ulong *)(this + 0x820) = uVar2;
        pJVar11 = this + lVar6 * 0x40 + 0x20;
      }
      else {
        pJVar11 = (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)(*JPH::Allocate)(uVar14 << 6);
        lVar13 = *(long *)(this + 0x828);
        uVar12 = lVar13 + 1;
      }
    }
    else {
      pJVar17 = this + 0x20;
      if ((ulong)((long)pJVar3 - (long)pJVar17) < 0x7c1) {
        if ((pJVar3 == pJVar17 + (*(long *)(this + 0x820) - uVar2) * 0x40) &&
           (uVar15 = (*(long *)(this + 0x820) - uVar2) + uVar14, uVar15 < 0x21)) {
          *(ulong *)(this + 0x820) = uVar15;
        }
        else {
          pJVar11 = (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                     *)(*JPH::Allocate)(uVar14 << 6);
          uVar12 = 0;
          pJVar16 = pJVar3;
          pJVar18 = pJVar11;
          if (uVar2 != 0) {
            do {
              if (pJVar18 ==
                  (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)0x0) {
                plVar5 = *(long **)(pJVar16 + 0x20);
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
              else {
                uVar7 = *(undefined8 *)pJVar16;
                uVar8 = *(undefined8 *)(pJVar16 + 8);
                uVar9 = *(undefined8 *)(pJVar16 + 0x10);
                uVar10 = *(undefined8 *)(pJVar16 + 0x18);
                *(undefined8 *)(pJVar18 + 0x20) = *(undefined8 *)(pJVar16 + 0x20);
                uVar4 = *(undefined8 *)(pJVar16 + 0x28);
                *(undefined8 *)pJVar18 = uVar7;
                *(undefined8 *)(pJVar18 + 8) = uVar8;
                *(undefined8 *)(pJVar18 + 0x10) = uVar9;
                *(undefined8 *)(pJVar18 + 0x18) = uVar10;
                *(undefined8 *)(pJVar16 + 0x20) = 0;
                *(undefined8 *)(pJVar18 + 0x28) = uVar4;
                *(undefined4 *)(pJVar18 + 0x30) = *(undefined4 *)(pJVar16 + 0x30);
                *(undefined4 *)(pJVar18 + 0x34) = *(undefined4 *)(pJVar16 + 0x34);
                *(undefined8 *)(pJVar18 + 0x38) = *(undefined8 *)(pJVar16 + 0x38);
              }
              uVar12 = uVar12 + 1;
              pJVar18 = pJVar18 + 0x40;
              pJVar16 = pJVar16 + 0x40;
            } while (uVar2 != uVar12);
          }
          if (pJVar3 == pJVar17 + (*(long *)(this + 0x820) - uVar2) * 0x40) {
            *(ulong *)(this + 0x820) = *(long *)(this + 0x820) - uVar2;
          }
          lVar13 = *(long *)(this + 0x828);
          uVar12 = lVar13 + 1;
        }
      }
      else {
        uVar12 = 0;
        pJVar11 = (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                   *)(*JPH::Allocate)(uVar14 << 6);
        pJVar17 = pJVar3;
        pJVar16 = pJVar11;
        if (uVar2 != 0) {
          do {
            if (pJVar16 ==
                (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
                 *)0x0) {
              plVar5 = *(long **)(pJVar17 + 0x20);
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
            else {
              uVar7 = *(undefined8 *)pJVar17;
              uVar8 = *(undefined8 *)(pJVar17 + 8);
              uVar9 = *(undefined8 *)(pJVar17 + 0x10);
              uVar10 = *(undefined8 *)(pJVar17 + 0x18);
              *(undefined8 *)(pJVar16 + 0x20) = *(undefined8 *)(pJVar17 + 0x20);
              uVar4 = *(undefined8 *)(pJVar17 + 0x28);
              *(undefined8 *)pJVar16 = uVar7;
              *(undefined8 *)(pJVar16 + 8) = uVar8;
              *(undefined8 *)(pJVar16 + 0x10) = uVar9;
              *(undefined8 *)(pJVar16 + 0x18) = uVar10;
              *(undefined8 *)(pJVar17 + 0x20) = 0;
              *(undefined8 *)(pJVar16 + 0x28) = uVar4;
              *(undefined4 *)(pJVar16 + 0x30) = *(undefined4 *)(pJVar17 + 0x30);
              *(undefined4 *)(pJVar16 + 0x34) = *(undefined4 *)(pJVar17 + 0x34);
              *(undefined8 *)(pJVar16 + 0x38) = *(undefined8 *)(pJVar17 + 0x38);
            }
            uVar12 = uVar12 + 1;
            pJVar16 = pJVar16 + 0x40;
            pJVar17 = pJVar17 + 0x40;
          } while (uVar2 != uVar12);
        }
        (*JPH::Free)(pJVar3);
        lVar13 = *(long *)(this + 0x828);
        uVar12 = lVar13 + 1;
      }
    }
    *(JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
      **)(this + 0x838) = pJVar11;
    *(ulong *)(this + 0x830) = uVar14;
  }
  *(ulong *)(this + 0x828) = uVar12;
  pJVar11 = pJVar11 + lVar13 * 0x40;
  if (pJVar11 !=
      (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
       *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    lVar13 = *(long *)(param_1 + 0x20);
    *(undefined8 *)pJVar11 = *(undefined8 *)param_1;
    *(undefined8 *)(pJVar11 + 8) = uVar4;
    *(long *)(pJVar11 + 0x20) = lVar13;
    *(undefined8 *)(pJVar11 + 0x10) = uVar7;
    *(undefined8 *)(pJVar11 + 0x18) = uVar8;
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    *(undefined8 *)(pJVar11 + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(pJVar11 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(pJVar11 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined8 *)(pJVar11 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}



/* JoltPhysicsDirectSpaceState3D::get_class() const */

void JoltPhysicsDirectSpaceState3D::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState3D::get_class() const */

void PhysicsDirectSpaceState3D::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState3D::is_class(String const&) const */

undefined8 __thiscall
PhysicsDirectSpaceState3D::is_class(PhysicsDirectSpaceState3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010857f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010857f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00108633;
  }
  cVar6 = String::operator==(param_1,"PhysicsDirectSpaceState3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001086e3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001086e3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00108633;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108633:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::is_class(String const&) const */

undefined8 __thiscall
JoltPhysicsDirectSpaceState3D::is_class(JoltPhysicsDirectSpaceState3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010880f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010880f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001088c3;
  }
  cVar5 = String::operator==(param_1,"JoltPhysicsDirectSpaceState3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PhysicsDirectSpaceState3D::is_class((PhysicsDirectSpaceState3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001088c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState3D::_initialize_classv() */

void PhysicsDirectSpaceState3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "PhysicsDirectSpaceState3D";
    local_50 = 0;
    local_30 = 0x19;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      PhysicsDirectSpaceState3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void PhysicsDirectSpaceState3D::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicsDirectSpaceState3D";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsDirectSpaceState3D";
  local_98 = 0;
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108c28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108c28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00108c46;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00108c46:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PhysicsDirectSpaceState3D",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
JoltPhysicsDirectSpaceState3D::_get_property_listv
          (JoltPhysicsDirectSpaceState3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    PhysicsDirectSpaceState3D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "JoltPhysicsDirectSpaceState3D";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JoltPhysicsDirectSpaceState3D";
  local_98 = 0;
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109028:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109028;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109045;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109045:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JoltPhysicsDirectSpaceState3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsDirectSpaceState3D::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltPhysicsDirectSpaceState3D::_initialize_classv() */

void JoltPhysicsDirectSpaceState3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00109454;
  if (PhysicsDirectSpaceState3D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicsDirectSpaceState3D";
    local_60 = 0;
    local_40 = 0x19;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010955e:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010956e:
        PhysicsDirectSpaceState3D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010955e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010956e;
    }
    PhysicsDirectSpaceState3D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsDirectSpaceState3D";
  local_58 = 0;
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "JoltPhysicsDirectSpaceState3D";
  local_60 = 0;
  local_40 = 0x1d;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  initialize_class()::initialized = '\x01';
LAB_00109454:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetPosition() const */

undefined1  [16] __thiscall JPH::Body::GetPosition(Body *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [12];
  float local_18;
  float fStack_14;
  
  auVar14 = (**(code **)(**(long **)(this + 0x40) + 0x18))();
  fVar6 = auVar14._8_4_;
  fVar7 = *(float *)(this + 0x10);
  fVar1 = *(float *)(this + 0x1c);
  local_18 = auVar14._0_4_;
  fStack_14 = auVar14._4_4_;
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x14);
  fVar9 = (float)(*(uint *)(this + 0x10) ^ __LC18);
  fVar10 = (float)(*(uint *)(this + 0x14) ^ _UNK_0010f194);
  fVar11 = (float)(*(uint *)(this + 0x18) ^ _UNK_0010f198);
  fVar12 = (float)(*(uint *)(this + 0x1c) ^ _UNK_0010f19c);
  fVar13 = (fVar1 * local_18 + fVar7 * 0.0 + fVar3 * fVar6) - fVar2 * fStack_14;
  fVar8 = (fVar1 * fStack_14 - fVar7 * fVar6) + fVar3 * 0.0 + fVar2 * local_18;
  fVar5 = ((fVar1 * fVar6 + fVar7 * fStack_14) - fVar3 * local_18) + fVar2 * 0.0;
  fVar7 = ((fVar1 * 0.0 - fVar7 * local_18) - fVar3 * fStack_14) - fVar2 * fVar6;
  auVar4._4_4_ = *(float *)(this + 4) -
                 (fVar5 * fVar9 + fVar8 * fVar12 + (fVar10 * fVar7 - fVar13 * fVar11));
  auVar4._0_4_ = *(float *)this -
                 ((fVar8 * fVar11 + fVar9 * fVar7 + fVar13 * fVar12) - fVar5 * fVar10);
  auVar4._8_4_ = *(float *)(this + 8) -
                 (fVar5 * fVar12 + ((fVar11 * fVar7 + fVar13 * fVar10) - fVar8 * fVar9));
  auVar4._12_4_ =
       *(float *)(this + 0xc) -
       (((fVar12 * fVar7 - fVar13 * fVar9) - fVar8 * fVar10) - fVar5 * fVar11);
  return auVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::Body::GetWorldSpaceSurfaceNormal(JPH::SubShapeID const&, JPH::Vec3) const */

undefined8 __thiscall
JPH::Body::GetWorldSpaceSurfaceNormal(undefined8 param_1,float param_2,Body *this)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 extraout_XMM0_Qa;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  float extraout_XMM1_Da;
  float fVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_58;
  undefined8 uStack_50;
  
  fVar4 = (float)(__LC18 ^ *(uint *)(this + 0x10));
  fVar7 = (float)(_UNK_0010f194 ^ *(uint *)(this + 0x14));
  fVar8 = (float)(_UNK_0010f198 ^ *(uint *)(this + 0x18));
  fVar9 = (float)(_UNK_0010f19c ^ *(uint *)(this + 0x1c));
  fVar11 = *(float *)this;
  fVar1 = *(float *)(this + 4);
  fVar2 = *(float *)(this + 8);
  fVar18 = fVar7 + fVar7;
  fVar13 = fVar4 + fVar4;
  fVar19 = fVar8 * (fVar8 + fVar8);
  fVar5 = fVar9 * (fVar8 + fVar8);
  fVar15 = fVar8 * fVar18 - fVar13 * fVar9;
  fVar14 = fVar13 * fVar9 + fVar8 * fVar18;
  fVar16 = (_LC20 - fVar4 * fVar13) - fVar7 * fVar18;
  fVar12 = fVar8 * fVar13 - fVar18 * fVar9;
  fVar17 = fVar8 * fVar13 + fVar18 * fVar9;
  fVar18 = (_LC20 - fVar7 * fVar18) - fVar19;
  fVar20 = fVar7 * fVar13 - fVar5;
  fVar19 = (_LC20 - fVar19) - fVar4 * fVar13;
  fVar5 = fVar7 * fVar13 + fVar5;
  local_58._0_4_ = (float)param_1;
  fVar4 = fVar12 * (float)local_58;
  fVar7 = (float)local_58 * 0.0;
  local_58._4_4_ = (float)((ulong)param_1 >> 0x20);
  fVar8 = local_58._4_4_ * fVar14;
  fVar9 = local_58._4_4_ * 0.0;
  local_58 = CONCAT44(fVar5 * (float)local_58 + local_58._4_4_ * fVar19 + param_2 * fVar15 +
                      (0.0 - (fVar11 * fVar5 + fVar1 * fVar19 + fVar2 * fVar15)),
                      fVar18 * (float)local_58 + local_58._4_4_ * fVar20 + param_2 * fVar17 +
                      (0.0 - (fVar11 * fVar18 + fVar1 * fVar20 + fVar2 * fVar17)));
  uStack_50._0_4_ =
       fVar4 + fVar8 + param_2 * fVar16 +
       (0.0 - (fVar11 * fVar12 + fVar1 * fVar14 + fVar2 * fVar16));
  uStack_50._4_4_ = fVar7 + fVar9 + param_2 * 0.0 + 1.0;
  if (*(code **)(**(long **)(this + 0x40) + 0x58) == JoltCustomMotionShape::GetSurfaceNormal) {
    _err_print_error("GetSurfaceNormal",
                     "modules/jolt_physics/spaces/../shapes/jolt_custom_motion_shape.h",0x46,
                     "Method/function failed. Returning: JPH::Vec3::sZero()","Not implemented.",0);
    uVar3 = 0;
    fVar11 = 0.0;
    local_58._4_4_ = 0.0;
    local_58._0_4_ = 0.0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(this + 0x40) + 0x58))(local_58,uStack_50);
    local_58._0_4_ = (float)extraout_XMM0_Qa;
    local_58._4_4_ = (float)((ulong)extraout_XMM0_Qa >> 0x20);
    fVar11 = extraout_XMM1_Da;
  }
  auVar6._0_4_ = fVar18 * (float)local_58 + fVar5 * local_58._4_4_ + fVar12 * fVar11;
  auVar6._4_4_ = fVar20 * (float)local_58 + fVar19 * local_58._4_4_ + fVar14 * fVar11;
  auVar6._8_4_ = fVar17 * (float)local_58 + fVar15 * local_58._4_4_ + fVar16 * fVar11;
  auVar6._12_4_ = (float)local_58 * 0.0 + local_58._4_4_ * 0.0 + fVar11 * 0.0;
  auVar10._0_4_ =
       SQRT(auVar6._8_4_ * auVar6._8_4_ +
            auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_ + 0.0);
  auVar10._4_4_ = auVar10._0_4_;
  auVar10._8_4_ = auVar10._0_4_;
  auVar10._12_4_ = auVar10._0_4_;
  divps(auVar6,auVar10);
  return uVar3;
}



/* JPH::InternalEdgeRemovingCollector::VoidFeatures(JPH::CollideShapeResult const&) */

void __thiscall
JPH::InternalEdgeRemovingCollector::VoidFeatures
          (InternalEdgeRemovingCollector *this,CollideShapeResult *param_1)

{
  CollideShapeResult *pCVar1;
  float fVar2;
  InternalEdgeRemovingCollector *__src;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  InternalEdgeRemovingCollector *pIVar7;
  void *__dest;
  ulong uVar8;
  InternalEdgeRemovingCollector *pIVar9;
  ulong uVar10;
  CollideShapeResult *pCVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  
  pCVar11 = param_1 + 0x260;
  pCVar1 = pCVar11 + (ulong)*(uint *)(param_1 + 0x250) * 0x10;
  fVar15 = _LC21;
  if ((ulong)*(uint *)(param_1 + 0x250) != 0) {
LAB_00109b30:
    do {
      __src = *(InternalEdgeRemovingCollector **)(this + 0x838);
      fVar2 = *(float *)(param_1 + 0x34);
      uVar6 = *(undefined8 *)pCVar11;
      fVar5 = *(float *)(pCVar11 + 8);
      lVar12 = *(long *)(this + 0x828) * 0x10;
      pIVar9 = __src + lVar12;
      for (pIVar7 = __src; pIVar7 != pIVar9; pIVar7 = pIVar7 + 0x10) {
        if ((fVar2 == *(float *)(pIVar7 + 0xc)) &&
           (fVar14 = *(float *)(pIVar7 + 8) - fVar5,
           fVar14 * fVar14 +
           (*(float *)(pIVar7 + 4) - *(float *)(pCVar11 + 4)) *
           (*(float *)(pIVar7 + 4) - *(float *)(pCVar11 + 4)) +
           (*(float *)pIVar7 - *(float *)pCVar11) * (*(float *)pIVar7 - *(float *)pCVar11) + 0.0 <=
           fVar15)) {
          pCVar11 = pCVar11 + 0x10;
          if (pCVar1 == pCVar11) {
            return;
          }
          goto LAB_00109b30;
        }
      }
      uVar3 = *(ulong *)(this + 0x830);
      uVar8 = *(long *)(this + 0x828) + 1;
      if (uVar3 < uVar8) {
        uVar13 = uVar3 * 2;
        if (uVar3 * 2 < uVar8) {
          uVar13 = uVar8;
        }
        if (__src == (InternalEdgeRemovingCollector *)0x0) {
          lVar4 = *(long *)(this + 0x820);
          uVar3 = lVar4 + uVar13;
          if (0x80 < uVar3) {
            pIVar9 = (InternalEdgeRemovingCollector *)(*Allocate)(uVar13 << 4);
            goto LAB_00109d0f;
          }
          *(ulong *)(this + 0x820) = uVar3;
          pIVar9 = this + lVar4 * 0x10 + 0x20;
        }
        else {
          pIVar7 = this + 0x20;
          if ((ulong)((long)__src - (long)pIVar7) < 0x7f1) {
            pIVar9 = pIVar7 + (*(long *)(this + 0x820) - uVar3) * 0x10;
            if ((__src == pIVar9) &&
               (uVar10 = (*(long *)(this + 0x820) - uVar3) + uVar13, uVar10 < 0x81)) {
              *(ulong *)(this + 0x820) = uVar10;
            }
            else {
              __dest = (void *)(*Allocate)(uVar13 << 4);
              pIVar9 = (InternalEdgeRemovingCollector *)memcpy(__dest,__src,uVar3 << 4);
              fVar15 = _LC21;
              if (__src == pIVar7 + (*(long *)(this + 0x820) - uVar3) * 0x10) {
                *(ulong *)(this + 0x820) = *(long *)(this + 0x820) - uVar3;
              }
              uVar8 = *(long *)(this + 0x828) + 1;
              lVar12 = *(long *)(this + 0x828) << 4;
            }
          }
          else {
            pIVar9 = (InternalEdgeRemovingCollector *)(*Reallocate)(__src,uVar3 << 4,uVar13 << 4);
LAB_00109d0f:
            uVar8 = *(long *)(this + 0x828) + 1;
            lVar12 = *(long *)(this + 0x828) << 4;
            fVar15 = _LC21;
          }
        }
        *(InternalEdgeRemovingCollector **)(this + 0x838) = pIVar9;
        pIVar9 = pIVar9 + lVar12;
        *(ulong *)(this + 0x830) = uVar13;
      }
      pCVar11 = pCVar11 + 0x10;
      *(ulong *)(this + 0x828) = uVar8;
      *(float *)(pIVar9 + 0xc) = fVar2;
      *(undefined8 *)pIVar9 = uVar6;
      *(float *)(pIVar9 + 8) = fVar5;
    } while (pCVar1 != pCVar11);
  }
  return;
}



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
  auVar1._12_4_ = (uint)(fVar12 * fVar18 + fVar17 * fVar19 + fVar16 * fVar20 + 0.0) ^ _LC6;
  iVar5 = movmskps(fVar25,auVar1);
  if (iVar5 == 0) {
    auVar4._4_4_ = -(uint)(_LC23 <= fVar29);
    auVar4._0_4_ = -(uint)(_LC23 <= fVar28);
    auVar4._8_4_ = -(uint)(_LC23 <= fVar30);
    auVar4._12_4_ = -(uint)(_LC23 <= fVar31);
    return auVar4;
  }
  if (iVar5 == 0xf) {
    auVar2._4_4_ = -(uint)(fVar29 <= _LC25);
    auVar2._0_4_ = -(uint)(fVar28 <= _LC25);
    auVar2._8_4_ = -(uint)(fVar30 <= _LC25);
    auVar2._12_4_ = -(uint)(fVar31 <= _LC25);
    return auVar2;
  }
  auVar3._8_4_ = 0xffffffff;
  auVar3._0_8_ = 0xffffffffffffffff;
  auVar3._12_4_ = 0xffffffff;
  return auVar3;
}



/* JPH::Array<JPH::CollideShapeResult, JPH::STLLocalAllocator<JPH::CollideShapeResult, 32ul>
   >::push_back(JPH::CollideShapeResult const&) */

void __thiscall
JPH::Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>::push_back
          (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *this
          ,CollideShapeResult *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *pAVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *pAVar13;
  ulong uVar14;
  ulong uVar15;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *pAVar16;
  long lVar17;
  ulong uVar18;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *pAVar19;
  
  lVar17 = *(long *)(this + 0x8c08);
  uVar4 = *(ulong *)(this + 0x8c10);
  pAVar5 = *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> **)
            (this + 0x8c18);
  uVar14 = lVar17 + 1;
  pAVar13 = pAVar5;
  if (uVar4 < uVar14) {
    uVar18 = uVar4 * 2;
    if (uVar4 * 2 < uVar14) {
      uVar18 = uVar14;
    }
    if (pAVar5 == (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                   *)0x0) {
      lVar6 = *(long *)(this + 0x8c00);
      uVar4 = lVar6 + uVar18;
      if (uVar4 < 0x21) {
        *(ulong *)(this + 0x8c00) = uVar4;
        pAVar13 = this + lVar6 * 0x460;
      }
      else {
        pAVar13 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                   *)(*Allocate)(uVar18 * 0x460);
        lVar17 = *(long *)(this + 0x8c08);
        uVar14 = lVar17 + 1;
      }
    }
    else if ((ulong)((long)pAVar5 - (long)this) < 0x87a1) {
      if ((this + (*(long *)(this + 0x8c00) - uVar4) * 0x460 == pAVar5) &&
         (uVar15 = (*(long *)(this + 0x8c00) - uVar4) + uVar18, uVar15 < 0x21)) {
        *(ulong *)(this + 0x8c00) = uVar15;
      }
      else {
        pAVar13 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                   *)(*Allocate)(uVar18 * 0x460);
        if (uVar4 != 0) {
          pAVar19 = pAVar5 + 0x260;
          pAVar16 = pAVar13;
          do {
            if (pAVar16 !=
                (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                 *)0x0) {
              uVar7 = *(undefined8 *)(pAVar19 + -0x260);
              uVar8 = *(undefined8 *)(pAVar19 + -600);
              uVar9 = *(undefined8 *)(pAVar19 + -0x250);
              uVar10 = *(undefined8 *)(pAVar19 + -0x248);
              uVar11 = *(undefined8 *)(pAVar19 + -0x240);
              uVar12 = *(undefined8 *)(pAVar19 + -0x238);
              uVar1 = *(undefined4 *)(pAVar19 + -0x230);
              *(undefined4 *)(pAVar16 + 0x34) = *(undefined4 *)(pAVar19 + -0x22c);
              uVar2 = *(undefined4 *)(pAVar19 + -0x228);
              *(undefined8 *)pAVar16 = uVar7;
              *(undefined8 *)(pAVar16 + 8) = uVar8;
              *(undefined8 *)(pAVar16 + 0x10) = uVar9;
              *(undefined8 *)(pAVar16 + 0x18) = uVar10;
              *(undefined4 *)(pAVar16 + 0x38) = uVar2;
              uVar2 = *(undefined4 *)(pAVar19 + -0x224);
              *(undefined8 *)(pAVar16 + 0x20) = uVar11;
              *(undefined8 *)(pAVar16 + 0x28) = uVar12;
              *(undefined4 *)(pAVar16 + 0x3c) = uVar2;
              uVar3 = *(uint *)(pAVar19 + -0x220);
              *(undefined4 *)(pAVar16 + 0x40) = 0;
              *(undefined4 *)(pAVar16 + 0x30) = uVar1;
              if (uVar3 != 0) {
                memmove(pAVar16 + 0x50,pAVar19 + -0x210,(ulong)uVar3 << 4);
                *(uint *)(pAVar16 + 0x40) = uVar3;
              }
              *(undefined4 *)(pAVar16 + 0x250) = 0;
              uVar3 = *(uint *)(pAVar19 + -0x10);
              if (uVar3 != 0) {
                memmove(pAVar16 + 0x260,pAVar19,(ulong)uVar3 << 4);
                *(uint *)(pAVar16 + 0x250) = uVar3;
              }
            }
            pAVar16 = pAVar16 + 0x460;
            pAVar19 = pAVar19 + 0x460;
          } while (pAVar5 + uVar4 * 0x460 + 0x260 != pAVar19);
        }
        if (pAVar5 == this + (*(long *)(this + 0x8c00) - uVar4) * 0x460) {
          *(ulong *)(this + 0x8c00) = *(long *)(this + 0x8c00) - uVar4;
        }
        lVar17 = *(long *)(this + 0x8c08);
        uVar14 = lVar17 + 1;
      }
    }
    else {
      pAVar13 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                 *)(*Allocate)(uVar18 * 0x460);
      if (uVar4 != 0) {
        pAVar19 = pAVar5 + 0x260;
        pAVar16 = pAVar13;
        do {
          if (pAVar16 !=
              (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *
              )0x0) {
            uVar7 = *(undefined8 *)(pAVar19 + -0x260);
            uVar8 = *(undefined8 *)(pAVar19 + -600);
            uVar9 = *(undefined8 *)(pAVar19 + -0x240);
            uVar10 = *(undefined8 *)(pAVar19 + -0x238);
            uVar1 = *(undefined4 *)(pAVar19 + -0x230);
            *(undefined4 *)(pAVar16 + 0x34) = *(undefined4 *)(pAVar19 + -0x22c);
            uVar2 = *(undefined4 *)(pAVar19 + -0x228);
            *(undefined8 *)pAVar16 = uVar7;
            *(undefined8 *)(pAVar16 + 8) = uVar8;
            uVar7 = *(undefined8 *)(pAVar19 + -0x250);
            uVar8 = *(undefined8 *)(pAVar19 + -0x248);
            *(undefined4 *)(pAVar16 + 0x38) = uVar2;
            uVar2 = *(undefined4 *)(pAVar19 + -0x224);
            *(undefined8 *)(pAVar16 + 0x10) = uVar7;
            *(undefined8 *)(pAVar16 + 0x18) = uVar8;
            *(undefined4 *)(pAVar16 + 0x3c) = uVar2;
            uVar3 = *(uint *)(pAVar19 + -0x220);
            *(undefined4 *)(pAVar16 + 0x40) = 0;
            *(undefined8 *)(pAVar16 + 0x20) = uVar9;
            *(undefined8 *)(pAVar16 + 0x28) = uVar10;
            *(undefined4 *)(pAVar16 + 0x30) = uVar1;
            if (uVar3 != 0) {
              memmove(pAVar16 + 0x50,pAVar19 + -0x210,(ulong)uVar3 << 4);
              *(uint *)(pAVar16 + 0x40) = uVar3;
            }
            *(undefined4 *)(pAVar16 + 0x250) = 0;
            uVar3 = *(uint *)(pAVar19 + -0x10);
            if (uVar3 != 0) {
              memmove(pAVar16 + 0x260,pAVar19,(ulong)uVar3 << 4);
              *(uint *)(pAVar16 + 0x250) = uVar3;
            }
          }
          pAVar16 = pAVar16 + 0x460;
          pAVar19 = pAVar19 + 0x460;
        } while (pAVar5 + uVar4 * 0x460 + 0x260 != pAVar19);
      }
      (*Free)(pAVar5);
      lVar17 = *(long *)(this + 0x8c08);
      uVar14 = lVar17 + 1;
    }
    *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> **)
     (this + 0x8c18) = pAVar13;
    *(ulong *)(this + 0x8c10) = uVar18;
  }
  *(ulong *)(this + 0x8c08) = uVar14;
  pAVar13 = pAVar13 + lVar17 * 0x460;
  if (pAVar13 !=
      (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *)0x0) {
    uVar7 = *(undefined8 *)param_1;
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(pAVar13 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)pAVar13 = uVar7;
    *(undefined8 *)(pAVar13 + 8) = uVar8;
    *(undefined4 *)(pAVar13 + 0x38) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined8 *)(pAVar13 + 0x10) = uVar9;
    *(undefined8 *)(pAVar13 + 0x18) = uVar10;
    *(undefined4 *)(pAVar13 + 0x3c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x40);
    *(undefined4 *)(pAVar13 + 0x40) = 0;
    *(undefined8 *)(pAVar13 + 0x20) = uVar11;
    *(undefined8 *)(pAVar13 + 0x28) = uVar12;
    *(undefined4 *)(pAVar13 + 0x30) = uVar1;
    if (uVar3 != 0) {
      memmove(pAVar13 + 0x50,param_1 + 0x50,(ulong)uVar3 << 4);
      *(uint *)(pAVar13 + 0x40) = uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x250);
    *(undefined4 *)(pAVar13 + 0x250) = 0;
    if (uVar3 != 0) {
      memmove(pAVar13 + 0x260,param_1 + 0x260,(ulong)uVar3 << 4);
      *(uint *)(pAVar13 + 0x250) = uVar3;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::InternalEdgeRemovingCollector::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JPH::InternalEdgeRemovingCollector::AddHit
          (InternalEdgeRemovingCollector *this,CollideShapeResult *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (2 < *(uint *)(param_1 + 0x250)) {
    fVar2 = (*(float *)(param_1 + 0x284) - *(float *)(param_1 + 0x264)) *
            (*(float *)(param_1 + 0x270) - *(float *)(param_1 + 0x260)) -
            (*(float *)(param_1 + 0x274) - *(float *)(param_1 + 0x264)) *
            (*(float *)(param_1 + 0x280) - *(float *)(param_1 + 0x260));
    fVar3 = (*(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x268)) *
            (*(float *)(param_1 + 0x274) - *(float *)(param_1 + 0x264)) -
            (*(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x268)) *
            (*(float *)(param_1 + 0x284) - *(float *)(param_1 + 0x264));
    fVar4 = (*(float *)(param_1 + 0x280) - *(float *)(param_1 + 0x260)) *
            (*(float *)(param_1 + 0x278) - *(float *)(param_1 + 0x268)) -
            (*(float *)(param_1 + 0x270) - *(float *)(param_1 + 0x260)) *
            (*(float *)(param_1 + 0x288) - *(float *)(param_1 + 0x268));
    fVar5 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3 + 0.0);
    if ((_LC41 <= fVar5) &&
       (fVar2 * (0.0 - *(float *)(param_1 + 0x28)) +
        fVar4 * (0.0 - *(float *)(param_1 + 0x24)) +
        fVar3 * (0.0 - *(float *)(param_1 + 0x20)) + 0.0 <=
        SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
             *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) + 0.0 +
             *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24)) * __LC42 * fVar5)) {
      Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>::push_back
                ((Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>
                  *)(this + 0x840),param_1);
      return;
    }
  }
  plVar1 = *(long **)(this + 0x18);
  plVar1[2] = *(long *)(this + 0x10);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
  *(undefined4 *)(this + 8) = *(undefined4 *)(*(long *)(this + 0x18) + 8);
  VoidFeatures(this,param_1);
  return;
}



/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::AddHit(JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
         *this,CollideShapeResult *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x8c40);
  iVar2 = (int)*(undefined8 *)(this + 0x8c28);
  if (iVar2 < iVar1) {
    JPH::Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>>::
    push_back((Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,32ul>> *
              )(this + 0x20),param_1);
    iVar2 = *(int *)(this + 0x8c28);
    iVar1 = *(int *)(this + 0x8c40);
  }
  if (iVar2 != iVar1) {
    return;
  }
  *(undefined4 *)(this + 8) = 0xff7fffff;
  return;
}



/* void JPH::QuickSort<unsigned int*, JPH::InternalEdgeRemovingCollector::Flush()::{lambda(unsigned
   int, unsigned int)#1}>(unsigned int*, unsigned int*,
   JPH::InternalEdgeRemovingCollector::Flush()::{lambda(unsigned int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::InternalEdgeRemovingCollector::Flush()::_lambda(unsigned_int,unsigned_int)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  float *pfVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = (long)param_2 - (long)param_1;
  if (4 < lVar7) {
    if (0x80 < lVar7) {
      lVar9 = *(long *)(param_3 + 0x9458);
      puVar12 = param_2;
      do {
        uVar6 = *param_1;
        puVar2 = (uint *)(((lVar7 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
        lVar7 = (long)puVar12 + (-4 - (long)param_1) >> 5;
        puVar3 = param_1 + lVar7;
        puVar8 = param_1 + lVar7 * 2;
        fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (fVar13 < *(float *)(lVar9 + 0x30 + (ulong)*puVar3 * 0x460)) {
          *param_1 = *puVar3;
          *puVar3 = uVar6;
          uVar6 = *param_1;
          fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        }
        uVar11 = *puVar8;
        fVar14 = *(float *)(lVar9 + 0x30 + (ulong)uVar11 * 0x460);
        if (fVar13 < fVar14) {
          *param_1 = uVar11;
          *puVar8 = uVar6;
          fVar14 = fVar13;
          uVar11 = uVar6;
        }
        uVar6 = *puVar3;
        pfVar1 = (float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) {
          *puVar3 = uVar11;
          *puVar8 = uVar6;
        }
        puVar8 = puVar2 + lVar7;
        puVar10 = puVar2 + -lVar7;
        uVar6 = *puVar10;
        fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (fVar13 < *(float *)(lVar9 + 0x30 + (ulong)*puVar2 * 0x460)) {
          *puVar10 = *puVar2;
          *puVar2 = uVar6;
          uVar6 = *puVar10;
          fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        }
        uVar11 = *puVar8;
        fVar14 = *(float *)(lVar9 + 0x30 + (ulong)uVar11 * 0x460);
        if (fVar13 < fVar14) {
          *puVar10 = uVar11;
          *puVar8 = uVar6;
          fVar14 = fVar13;
          uVar11 = uVar6;
        }
        uVar6 = *puVar2;
        pfVar1 = (float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) {
          *puVar2 = uVar11;
          *puVar8 = uVar6;
        }
        puVar8 = puVar12 + (-1 - lVar7);
        puVar10 = puVar12 + lVar7 * -2 + -1;
        uVar6 = *puVar10;
        fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (fVar13 < *(float *)(lVar9 + 0x30 + (ulong)*puVar8 * 0x460)) {
          *puVar10 = *puVar8;
          *puVar8 = uVar6;
          uVar6 = *puVar10;
          fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        }
        uVar11 = puVar12[-1];
        fVar14 = *(float *)(lVar9 + 0x30 + (ulong)uVar11 * 0x460);
        if (fVar13 < fVar14) {
          *puVar10 = uVar11;
          puVar12[-1] = uVar6;
          fVar14 = fVar13;
          uVar11 = uVar6;
        }
        uVar6 = *puVar8;
        pfVar1 = (float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) {
          *puVar8 = uVar11;
          puVar12[-1] = uVar6;
        }
        uVar6 = *puVar3;
        fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        if (fVar13 < *(float *)(lVar9 + 0x30 + (ulong)*puVar2 * 0x460)) {
          *puVar3 = *puVar2;
          *puVar2 = uVar6;
          uVar6 = *puVar3;
          fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        }
        uVar11 = *puVar8;
        fVar14 = *(float *)(lVar9 + 0x30 + (ulong)uVar11 * 0x460);
        if (fVar13 < fVar14) {
          *puVar3 = uVar11;
          *puVar8 = uVar6;
          fVar14 = fVar13;
          uVar11 = uVar6;
        }
        uVar6 = *puVar2;
        fVar13 = *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460);
        puVar3 = puVar12;
        puVar10 = param_1;
        if (fVar13 < fVar14) {
          *puVar2 = uVar11;
          *puVar8 = uVar6;
          fVar13 = *(float *)(lVar9 + 0x30 + (ulong)*puVar2 * 0x460);
        }
        while( true ) {
          do {
            puVar8 = puVar10;
            uVar6 = *puVar8;
            puVar10 = puVar8 + 1;
          } while (fVar13 < *(float *)(lVar9 + 0x30 + (ulong)uVar6 * 0x460));
          do {
            param_2 = puVar3;
            puVar3 = param_2 + -1;
            pfVar1 = (float *)(lVar9 + 0x30 + (ulong)param_2[-1] * 0x460);
          } while (*pfVar1 <= fVar13 && fVar13 != *pfVar1);
          if (puVar3 <= puVar8) break;
          *puVar8 = param_2[-1];
          *puVar3 = uVar6;
        }
        lVar4 = (long)puVar12 - (long)param_2;
        lVar7 = (long)param_2 - (long)param_1;
        if (lVar7 < lVar4) {
          QuickSort<unsigned_int*,JPH::InternalEdgeRemovingCollector::Flush()::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_1,param_2,param_3);
          param_1 = param_2;
          param_2 = puVar12;
          lVar7 = lVar4;
        }
        else {
          QuickSort<unsigned_int*,JPH::InternalEdgeRemovingCollector::Flush()::_lambda(unsigned_int,unsigned_int)_1_>
                    (param_2,puVar12,param_3);
        }
        if (lVar7 < 5) {
          return;
        }
        puVar12 = param_2;
      } while (0x80 < lVar7);
    }
    if ((param_1 != param_2) && (puVar12 = param_1 + 1, puVar12 != param_2)) {
      lVar7 = *(long *)(param_3 + 0x9458);
      lVar9 = 0;
      do {
        while( true ) {
          uVar6 = *puVar12;
          fVar13 = *(float *)(lVar7 + 0x30 + (ulong)uVar6 * 0x460);
          pfVar1 = (float *)(lVar7 + 0x30 + (ulong)*param_1 * 0x460);
          if (*pfVar1 <= fVar13 && fVar13 != *pfVar1) break;
          uVar5 = (ulong)puVar12[-1];
          pfVar1 = (float *)(lVar7 + 0x30 + uVar5 * 0x460);
          puVar3 = puVar12;
          if (fVar13 < *pfVar1 || fVar13 == *pfVar1) {
            *puVar12 = uVar6;
          }
          else {
            do {
              puVar8 = puVar3 + -1;
              *puVar3 = (uint)uVar5;
              uVar5 = (ulong)puVar3[-2];
              pfVar1 = (float *)(lVar7 + 0x30 + uVar5 * 0x460);
              puVar3 = puVar8;
            } while (*pfVar1 <= fVar13 && fVar13 != *pfVar1);
            *puVar8 = uVar6;
          }
          puVar12 = puVar12 + 1;
          lVar9 = lVar9 + -4;
          if (puVar12 == param_2) {
            return;
          }
        }
        if (param_1 != puVar12) {
          memmove((void *)((long)puVar12 + lVar9),param_1,4 - lVar9);
        }
        puVar12 = puVar12 + 1;
        *param_1 = uVar6;
        lVar9 = lVar9 + -4;
      } while (puVar12 != param_2);
    }
  }
  return;
}



/* JPH::InternalEdgeRemovingCollector::Flush() */

void __thiscall JPH::InternalEdgeRemovingCollector::Flush(InternalEdgeRemovingCollector *this)

{
  CollideShapeResult *pCVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint uVar9;
  float *pfVar10;
  CollideShapeResult *pCVar11;
  float *pfVar12;
  CollideShapeResult *pCVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined1 local_d8 [128];
  undefined1 local_58 [16];
  ulong local_48;
  undefined1 *local_40;
  long local_30;
  
  uVar4 = *(ulong *)(this + 0x9448);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = 0;
  local_40 = (undefined1 *)0x0;
  if (uVar4 == 0) {
    local_58 = ZEXT816(0);
    puVar7 = (undefined1 *)0x0;
  }
  else {
    if (uVar4 < 0x21) {
      puVar7 = local_d8;
      local_58._8_8_ = uVar4;
      local_58._0_8_ = uVar4;
      uVar14 = uVar4;
    }
    else {
      puVar7 = (undefined1 *)(*Allocate)(uVar4 * 4);
      local_58._8_8_ = uVar4;
      uVar14 = *(ulong *)(this + 0x9448);
      local_48 = uVar4;
      local_40 = puVar7;
      if ((int)*(ulong *)(this + 0x9448) == 0) goto LAB_0010abc1;
    }
    uVar8 = 0;
    local_48 = uVar4;
    local_40 = puVar7;
    do {
      *(int *)(puVar7 + uVar8 * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
    } while ((uVar14 & 0xffffffff) != uVar8);
  }
LAB_0010abc1:
  lVar15 = 0;
  QuickSort<unsigned_int*,JPH::InternalEdgeRemovingCollector::Flush()::_lambda(unsigned_int,unsigned_int)_1_>
            (puVar7,puVar7 + uVar4 * 4,this);
  if (*(int *)(this + 0x9448) == 0) {
LAB_0010af06:
    *(undefined8 *)(this + 0x828) = 0;
    *(undefined8 *)(this + 0x9448) = 0;
    if (local_40 != (undefined1 *)0x0) {
      local_58._8_8_ = 0;
      if (0x7c < (ulong)((long)local_40 - (long)local_d8)) {
        (*Free)();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010abf0:
  pCVar13 = (CollideShapeResult *)
            ((ulong)*(uint *)(local_40 + lVar15 * 4) * 0x460 + *(long *)(this + 0x9458));
  uVar2 = *(uint *)(pCVar13 + 0x250);
  uVar4 = (ulong)(uVar2 - 1);
  pCVar1 = pCVar13 + uVar4 * 0x10 + 0x260;
  if (uVar2 == 0) {
    uVar14 = 0;
    uVar8 = 0;
    lVar5 = 0x10;
  }
  else {
    pCVar11 = pCVar13 + 0x260;
    uVar14 = 0;
    uVar8 = 0;
    fVar24 = _LC0;
    uVar9 = 0;
    local_e8 = *(float *)pCVar1 - *(float *)(pCVar13 + 0x10);
    fStack_e4 = *(float *)(pCVar1 + 4) - *(float *)(pCVar13 + 0x14);
    fStack_e0 = *(float *)(pCVar1 + 8) - *(float *)(pCVar13 + 0x18);
    do {
      fVar20 = *(float *)pCVar11 - *(float *)(pCVar13 + 0x10);
      fVar22 = *(float *)(pCVar11 + 4) - *(float *)(pCVar13 + 0x14);
      fVar23 = *(float *)(pCVar11 + 8) - *(float *)(pCVar13 + 0x18);
      fVar17 = fVar20 - local_e8;
      fVar18 = fVar22 - fStack_e4;
      fVar19 = fVar23 - fStack_e0;
      fVar21 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17 + 0.0;
      if (fVar21 < _LC43) {
        fVar21 = fStack_e0 * fStack_e0 + fStack_e4 * fStack_e4 + local_e8 * local_e8 + 0.0;
        if (fVar21 < fVar24) {
          uVar14 = uVar4;
          uVar8 = uVar4;
          fVar24 = fVar21;
        }
      }
      else {
        fVar21 = (float)((uint)(fVar19 * fStack_e0 + fVar18 * fStack_e4 + fVar17 * local_e8 + 0.0) ^
                        _LC6) / fVar21;
        if (fVar21 < _LC41) {
          fVar21 = fStack_e0 * fStack_e0 + fStack_e4 * fStack_e4 + local_e8 * local_e8 + 0.0;
          if (fVar21 < fVar24) {
            uVar14 = uVar4;
            uVar8 = uVar4;
            fVar24 = fVar21;
          }
        }
        else if ((fVar21 < _LC44) &&
                (local_e8 = fVar21 * fVar17 + local_e8, fStack_e4 = fVar21 * fVar18 + fStack_e4,
                fStack_e0 = fVar21 * fVar19 + fStack_e0,
                fVar21 = fStack_e0 * fStack_e0 + fStack_e4 * fStack_e4 + local_e8 * local_e8 + 0.0,
                fVar21 < fVar24)) {
          uVar14 = (ulong)uVar9;
          uVar8 = uVar4;
          fVar24 = fVar21;
        }
      }
      uVar16 = uVar9 + 1;
      uVar4 = (ulong)uVar9;
      pCVar11 = pCVar11 + 0x10;
      uVar9 = uVar16;
      local_e8 = fVar20;
      fStack_e4 = fVar22;
      fStack_e0 = fVar23;
    } while (uVar16 != uVar2);
    lVar5 = (uVar8 + 1) * 0x10;
  }
  pfVar12 = *(float **)(this + 0x838);
  pCVar1 = pCVar13 + lVar5 + 0x250;
  pfVar10 = pfVar12 + *(long *)(this + 0x828) * 4;
  for (pfVar6 = pfVar12; pfVar6 != pfVar10; pfVar6 = pfVar6 + 4) {
    if ((*(float *)(pCVar13 + 0x34) == pfVar6[3]) &&
       ((pfVar6[2] - *(float *)(pCVar1 + 8)) * (pfVar6[2] - *(float *)(pCVar1 + 8)) +
        (pfVar6[1] - *(float *)(pCVar1 + 4)) * (pfVar6[1] - *(float *)(pCVar1 + 4)) +
        (*pfVar6 - *(float *)pCVar1) * (*pfVar6 - *(float *)pCVar1) + 0.0 <= _LC21)) {
      if ((int)uVar8 == (int)uVar14) goto LAB_0010aed8;
      pCVar1 = pCVar13 + uVar14 * 0x10 + 0x260;
      goto LAB_0010ae9d;
    }
  }
  goto LAB_0010af70;
  while (pfVar12 = pfVar12 + 4, pfVar10 != pfVar12) {
LAB_0010ae9d:
    if ((*(float *)(pCVar13 + 0x34) == pfVar12[3]) &&
       ((pfVar12[2] - *(float *)(pCVar1 + 8)) * (pfVar12[2] - *(float *)(pCVar1 + 8)) +
        (pfVar12[1] - *(float *)(pCVar1 + 4)) * (pfVar12[1] - *(float *)(pCVar1 + 4)) +
        (*pfVar12 - *(float *)pCVar1) * (*pfVar12 - *(float *)pCVar1) + 0.0 <= _LC21))
    goto LAB_0010aed8;
  }
LAB_0010af70:
  plVar3 = *(long **)(this + 0x18);
  plVar3[2] = *(long *)(this + 0x10);
  (**(code **)(*plVar3 + 0x28))(plVar3,pCVar13);
  *(undefined4 *)(this + 8) = *(undefined4 *)(*(long *)(this + 0x18) + 8);
LAB_0010aed8:
  lVar15 = lVar15 + 1;
  VoidFeatures(this,pCVar13);
  if (*(uint *)(this + 0x9448) <= (uint)lVar15) goto LAB_0010af06;
  goto LAB_0010abf0;
}



/* String vformat<char const*, Vector3, Vector3>(String const&, char const* const, Vector3 const,
   Vector3 const) */

long * vformat<char_const*,Vector3,Vector3>
                 (undefined8 param_1_00,undefined4 param_2_00,undefined8 param_3,undefined4 param_4,
                 long *param_1,bool *param_2,char *param_7)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  int iVar5;
  Variant *pVVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  char local_f9;
  Array local_f8 [8];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = param_3;
  local_120 = param_4;
  local_118 = param_1_00;
  local_110 = param_2_00;
  Variant::Variant(local_a8,param_7);
  Variant::Variant(local_90,(Vector3 *)&local_118);
  Variant::Variant(local_78,(Vector3 *)&local_128);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar7 = (int)local_f8;
  Array::resize(iVar7);
  pVVar6 = local_a8;
  do {
    iVar5 = iVar5 + 1;
    pVVar4 = (Variant *)Array::operator[](iVar7);
    Variant::operator=(pVVar4,pVVar6);
    pVVar6 = pVVar6 + 0x18;
  } while (iVar5 != 3);
  local_f9 = '\0';
  String::sprintf((Array *)&local_f0,param_2);
  if (local_f9 == '\0') {
    *param_1 = local_f0;
  }
  else {
    local_c0 = 0;
    local_b8 = ".";
    local_b0 = 1;
    String::parse_latin1((StrRange *)&local_c0);
    local_b8 = "\": ";
    local_d8 = 0;
    local_b0 = 3;
    String::parse_latin1((StrRange *)&local_d8);
    local_b8 = "Formatting error in string \"";
    local_e8 = 0;
    local_b0 = 0x1c;
    String::parse_latin1((StrRange *)&local_e8);
    String::operator+((String *)&local_e0,(String *)&local_e8);
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c8,(String *)&local_d0);
    String::operator+((String *)&local_b8,(String *)&local_c8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String *)&local_b8,0,0);
    pcVar3 = local_b8;
    if (local_b8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar1 = (long *)(local_c8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar1 = (long *)(local_d0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_f0;
    *param_1 = 0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  pVVar6 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar4 = pVVar6 + -0x18;
    pVVar6 = pVVar6 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar6 != local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010b648) */
/* WARNING: Removing unreachable block (ram,0x0010b778) */
/* WARNING: Removing unreachable block (ram,0x0010b940) */
/* WARNING: Removing unreachable block (ram,0x0010b784) */
/* WARNING: Removing unreachable block (ram,0x0010b78e) */
/* WARNING: Removing unreachable block (ram,0x0010b920) */
/* WARNING: Removing unreachable block (ram,0x0010b79a) */
/* WARNING: Removing unreachable block (ram,0x0010b7a4) */
/* WARNING: Removing unreachable block (ram,0x0010b900) */
/* WARNING: Removing unreachable block (ram,0x0010b7b0) */
/* WARNING: Removing unreachable block (ram,0x0010b7ba) */
/* WARNING: Removing unreachable block (ram,0x0010b8e0) */
/* WARNING: Removing unreachable block (ram,0x0010b7c6) */
/* WARNING: Removing unreachable block (ram,0x0010b7d0) */
/* WARNING: Removing unreachable block (ram,0x0010b8c0) */
/* WARNING: Removing unreachable block (ram,0x0010b7dc) */
/* WARNING: Removing unreachable block (ram,0x0010b7e6) */
/* WARNING: Removing unreachable block (ram,0x0010b8a0) */
/* WARNING: Removing unreachable block (ram,0x0010b7f2) */
/* WARNING: Removing unreachable block (ram,0x0010b7fc) */
/* WARNING: Removing unreachable block (ram,0x0010b880) */
/* WARNING: Removing unreachable block (ram,0x0010b804) */
/* WARNING: Removing unreachable block (ram,0x0010b81a) */
/* WARNING: Removing unreachable block (ram,0x0010b826) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ba88) */
/* WARNING: Removing unreachable block (ram,0x0010bbb8) */
/* WARNING: Removing unreachable block (ram,0x0010bd80) */
/* WARNING: Removing unreachable block (ram,0x0010bbc4) */
/* WARNING: Removing unreachable block (ram,0x0010bbce) */
/* WARNING: Removing unreachable block (ram,0x0010bd60) */
/* WARNING: Removing unreachable block (ram,0x0010bbda) */
/* WARNING: Removing unreachable block (ram,0x0010bbe4) */
/* WARNING: Removing unreachable block (ram,0x0010bd40) */
/* WARNING: Removing unreachable block (ram,0x0010bbf0) */
/* WARNING: Removing unreachable block (ram,0x0010bbfa) */
/* WARNING: Removing unreachable block (ram,0x0010bd20) */
/* WARNING: Removing unreachable block (ram,0x0010bc06) */
/* WARNING: Removing unreachable block (ram,0x0010bc10) */
/* WARNING: Removing unreachable block (ram,0x0010bd00) */
/* WARNING: Removing unreachable block (ram,0x0010bc1c) */
/* WARNING: Removing unreachable block (ram,0x0010bc26) */
/* WARNING: Removing unreachable block (ram,0x0010bce0) */
/* WARNING: Removing unreachable block (ram,0x0010bc32) */
/* WARNING: Removing unreachable block (ram,0x0010bc3c) */
/* WARNING: Removing unreachable block (ram,0x0010bcc0) */
/* WARNING: Removing unreachable block (ram,0x0010bc44) */
/* WARNING: Removing unreachable block (ram,0x0010bc5a) */
/* WARNING: Removing unreachable block (ram,0x0010bc66) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JPH::Array<JPH::CollideShapeResult, JPH::STLLocalAllocator<JPH::CollideShapeResult, 33ul>
   >::reallocate(unsigned long) */

void __thiscall
JPH::Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>::reallocate
          (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *this
          ,ulong param_1)

{
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar13;
  ulong uVar14;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar15;
  ulong uVar16;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *local_48;
  
  uVar14 = *(ulong *)(this + 0x9070);
  pAVar5 = *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> **)
            (this + 0x9078);
  if (pAVar5 == (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                 *)0x0) {
    lVar12 = *(long *)(this + 0x9060);
    uVar14 = param_1 + lVar12;
    if (uVar14 < 0x22) {
      *(ulong *)(this + 0x9060) = uVar14;
      local_48 = this + lVar12 * 0x460;
    }
    else {
      local_48 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                  *)(*Allocate)(param_1 * 0x460);
    }
  }
  else if ((ulong)((long)pAVar5 - (long)this) < 0x8c01) {
    lVar12 = *(long *)(this + 0x9060) - uVar14;
    local_48 = this + lVar12 * 0x460;
    if ((pAVar5 == local_48) && (lVar12 + param_1 < 0x22)) {
      *(ulong *)(this + 0x9060) = (*(long *)(this + 0x9060) + param_1) - uVar14;
    }
    else {
      local_48 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                  *)(*Allocate)(param_1 * 0x460);
      uVar16 = uVar14;
      if (param_1 < uVar14) {
        uVar16 = param_1;
      }
      if (uVar16 != 0) {
        pAVar13 = pAVar5 + 0x260;
        pAVar1 = pAVar13 + uVar16 * 0x460;
        pAVar15 = local_48;
        do {
          if (pAVar15 !=
              (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *
              )0x0) {
            uVar6 = *(undefined8 *)(pAVar13 + -0x260);
            uVar7 = *(undefined8 *)(pAVar13 + -600);
            uVar8 = *(undefined8 *)(pAVar13 + -0x250);
            uVar9 = *(undefined8 *)(pAVar13 + -0x248);
            uVar10 = *(undefined8 *)(pAVar13 + -0x240);
            uVar11 = *(undefined8 *)(pAVar13 + -0x238);
            *(undefined4 *)(pAVar15 + 0x34) = *(undefined4 *)(pAVar13 + -0x22c);
            uVar3 = *(undefined4 *)(pAVar13 + -0x228);
            uVar2 = *(undefined4 *)(pAVar13 + -0x230);
            *(undefined8 *)pAVar15 = uVar6;
            *(undefined8 *)(pAVar15 + 8) = uVar7;
            *(undefined4 *)(pAVar15 + 0x38) = uVar3;
            uVar3 = *(undefined4 *)(pAVar13 + -0x224);
            *(undefined8 *)(pAVar15 + 0x10) = uVar8;
            *(undefined8 *)(pAVar15 + 0x18) = uVar9;
            *(undefined4 *)(pAVar15 + 0x3c) = uVar3;
            uVar4 = *(uint *)(pAVar13 + -0x220);
            *(undefined4 *)(pAVar15 + 0x40) = 0;
            *(undefined8 *)(pAVar15 + 0x20) = uVar10;
            *(undefined8 *)(pAVar15 + 0x28) = uVar11;
            *(undefined4 *)(pAVar15 + 0x30) = uVar2;
            if (uVar4 != 0) {
              memmove(pAVar15 + 0x50,pAVar13 + -0x210,(ulong)uVar4 << 4);
              *(uint *)(pAVar15 + 0x40) = uVar4;
            }
            *(undefined4 *)(pAVar15 + 0x250) = 0;
            uVar4 = *(uint *)(pAVar13 + -0x10);
            if (uVar4 != 0) {
              memmove(pAVar15 + 0x260,pAVar13,(ulong)uVar4 << 4);
              *(uint *)(pAVar15 + 0x250) = uVar4;
            }
          }
          pAVar15 = pAVar15 + 0x460;
          pAVar13 = pAVar13 + 0x460;
        } while (pAVar1 != pAVar13);
      }
      if (pAVar5 == this + (*(long *)(this + 0x9060) - uVar14) * 0x460) {
        *(ulong *)(this + 0x9060) = *(long *)(this + 0x9060) - uVar14;
      }
    }
  }
  else {
    local_48 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                *)(*Allocate)(param_1 * 0x460);
    if (param_1 < uVar14) {
      uVar14 = param_1;
    }
    if (uVar14 != 0) {
      pAVar13 = pAVar5 + 0x260;
      pAVar1 = pAVar13 + uVar14 * 0x460;
      pAVar15 = local_48;
      do {
        if (pAVar15 !=
            (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *)
            0x0) {
          uVar6 = *(undefined8 *)(pAVar13 + -0x260);
          uVar7 = *(undefined8 *)(pAVar13 + -600);
          uVar8 = *(undefined8 *)(pAVar13 + -0x250);
          uVar9 = *(undefined8 *)(pAVar13 + -0x248);
          uVar10 = *(undefined8 *)(pAVar13 + -0x240);
          uVar11 = *(undefined8 *)(pAVar13 + -0x238);
          uVar2 = *(undefined4 *)(pAVar13 + -0x230);
          *(undefined4 *)(pAVar15 + 0x34) = *(undefined4 *)(pAVar13 + -0x22c);
          uVar3 = *(undefined4 *)(pAVar13 + -0x228);
          *(undefined8 *)pAVar15 = uVar6;
          *(undefined8 *)(pAVar15 + 8) = uVar7;
          *(undefined8 *)(pAVar15 + 0x10) = uVar8;
          *(undefined8 *)(pAVar15 + 0x18) = uVar9;
          *(undefined4 *)(pAVar15 + 0x38) = uVar3;
          uVar3 = *(undefined4 *)(pAVar13 + -0x224);
          *(undefined8 *)(pAVar15 + 0x20) = uVar10;
          *(undefined8 *)(pAVar15 + 0x28) = uVar11;
          *(undefined4 *)(pAVar15 + 0x3c) = uVar3;
          uVar4 = *(uint *)(pAVar13 + -0x220);
          *(undefined4 *)(pAVar15 + 0x40) = 0;
          *(undefined4 *)(pAVar15 + 0x30) = uVar2;
          if (uVar4 != 0) {
            memmove(pAVar15 + 0x50,pAVar13 + -0x210,(ulong)uVar4 << 4);
            *(uint *)(pAVar15 + 0x40) = uVar4;
          }
          *(undefined4 *)(pAVar15 + 0x250) = 0;
          uVar4 = *(uint *)(pAVar13 + -0x10);
          if (uVar4 != 0) {
            memmove(pAVar15 + 0x260,pAVar13,(ulong)uVar4 << 4);
            *(uint *)(pAVar15 + 0x250) = uVar4;
          }
        }
        pAVar13 = pAVar13 + 0x460;
        pAVar15 = pAVar15 + 0x460;
      } while (pAVar13 != pAVar1);
    }
    (*Free)(pAVar5);
  }
  *(ulong *)(this + 0x9070) = param_1;
  *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> **)
   (this + 0x9078) = local_48;
  return;
}



/* JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::AddHit(JPH::CollideShapeResult const&) */

void __thiscall
JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::AddHit(JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
         *this,CollideShapeResult *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar11;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar12;
  ulong uVar13;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar14;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *pAVar21;
  
  pAVar14 = *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> **
             )(this + 0x9098);
  lVar18 = *(long *)(this + 37000);
  pAVar12 = pAVar14 + lVar18 * 0x460;
  pAVar21 = pAVar12;
  if (pAVar14 != pAVar12) {
    pAVar11 = pAVar14;
    do {
      pAVar21 = pAVar11;
      if (*(float *)(pAVar11 + 0x30) <= *(float *)(param_1 + 0x30) &&
          *(float *)(param_1 + 0x30) != *(float *)(pAVar11 + 0x30)) break;
      pAVar11 = pAVar11 + 0x460;
      pAVar21 = pAVar12;
    } while (pAVar11 != pAVar12);
  }
  pAVar11 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *)
            (this + 0x20);
  uVar16 = *(ulong *)(this + 0x9090);
  uVar19 = lVar18 + 1;
  lVar20 = (long)pAVar21 - (long)pAVar14;
  pAVar12 = pAVar14;
  if (uVar16 < uVar19) {
    uVar17 = uVar16 * 2;
    if (uVar16 * 2 < uVar19) {
      uVar17 = uVar19;
    }
    if (pAVar14 ==
        (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *)0x0)
    {
      lVar4 = *(long *)(this + 0x9080);
      uVar16 = lVar4 + uVar17;
      if (uVar16 < 0x22) {
        *(ulong *)(this + 0x9080) = uVar16;
        pAVar12 = pAVar11 + lVar4 * 0x460;
      }
      else {
        pAVar12 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                   *)(*JPH::Allocate)(uVar17 * 0x460);
        lVar18 = *(long *)(this + 37000);
        uVar19 = lVar18 + 1;
      }
    }
    else if ((ulong)((long)pAVar14 - (long)pAVar11) < 0x8c01) {
      if ((pAVar14 == pAVar11 + (*(long *)(this + 0x9080) - uVar16) * 0x460) &&
         (uVar13 = (*(long *)(this + 0x9080) - uVar16) + uVar17, uVar13 < 0x22)) {
        *(ulong *)(this + 0x9080) = uVar13;
      }
      else {
        pAVar12 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                   *)(*JPH::Allocate)(uVar17 * 0x460);
        if (uVar16 != 0) {
          pAVar21 = pAVar14 + 0x260;
          pAVar15 = pAVar12;
          do {
            if (pAVar15 !=
                (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                 *)0x0) {
              uVar5 = *(undefined8 *)(pAVar21 + -0x260);
              uVar6 = *(undefined8 *)(pAVar21 + -600);
              uVar7 = *(undefined8 *)(pAVar21 + -0x240);
              uVar8 = *(undefined8 *)(pAVar21 + -0x238);
              uVar1 = *(undefined4 *)(pAVar21 + -0x230);
              *(undefined4 *)(pAVar15 + 0x34) = *(undefined4 *)(pAVar21 + -0x22c);
              uVar2 = *(undefined4 *)(pAVar21 + -0x228);
              *(undefined8 *)pAVar15 = uVar5;
              *(undefined8 *)(pAVar15 + 8) = uVar6;
              uVar5 = *(undefined8 *)(pAVar21 + -0x250);
              uVar6 = *(undefined8 *)(pAVar21 + -0x248);
              *(undefined4 *)(pAVar15 + 0x38) = uVar2;
              uVar2 = *(undefined4 *)(pAVar21 + -0x224);
              *(undefined8 *)(pAVar15 + 0x10) = uVar5;
              *(undefined8 *)(pAVar15 + 0x18) = uVar6;
              *(undefined4 *)(pAVar15 + 0x3c) = uVar2;
              uVar3 = *(uint *)(pAVar21 + -0x220);
              *(undefined4 *)(pAVar15 + 0x40) = 0;
              *(undefined8 *)(pAVar15 + 0x20) = uVar7;
              *(undefined8 *)(pAVar15 + 0x28) = uVar8;
              *(undefined4 *)(pAVar15 + 0x30) = uVar1;
              if (uVar3 != 0) {
                memmove(pAVar15 + 0x50,pAVar21 + -0x210,(ulong)uVar3 << 4);
                *(uint *)(pAVar15 + 0x40) = uVar3;
              }
              *(undefined4 *)(pAVar15 + 0x250) = 0;
              uVar3 = *(uint *)(pAVar21 + -0x10);
              if (uVar3 != 0) {
                memmove(pAVar15 + 0x260,pAVar21,(ulong)uVar3 << 4);
                *(uint *)(pAVar15 + 0x250) = uVar3;
              }
            }
            pAVar21 = pAVar21 + 0x460;
            pAVar15 = pAVar15 + 0x460;
          } while (pAVar21 != pAVar14 + uVar16 * 0x460 + 0x260);
        }
        if (pAVar14 == pAVar11 + (*(long *)(this + 0x9080) - uVar16) * 0x460) {
          *(ulong *)(this + 0x9080) = *(long *)(this + 0x9080) - uVar16;
        }
        lVar18 = *(long *)(this + 37000);
        uVar19 = lVar18 + 1;
      }
    }
    else {
      pAVar12 = (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                 *)(*JPH::Allocate)(uVar17 * 0x460);
      if (uVar16 != 0) {
        pAVar21 = pAVar14 + 0x260;
        pAVar15 = pAVar12;
        do {
          if (pAVar15 !=
              (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *
              )0x0) {
            uVar5 = *(undefined8 *)(pAVar21 + -0x260);
            uVar6 = *(undefined8 *)(pAVar21 + -600);
            uVar7 = *(undefined8 *)(pAVar21 + -0x250);
            uVar8 = *(undefined8 *)(pAVar21 + -0x248);
            uVar1 = *(undefined4 *)(pAVar21 + -0x230);
            *(undefined4 *)(pAVar15 + 0x34) = *(undefined4 *)(pAVar21 + -0x22c);
            uVar2 = *(undefined4 *)(pAVar21 + -0x228);
            *(undefined8 *)pAVar15 = uVar5;
            *(undefined8 *)(pAVar15 + 8) = uVar6;
            uVar5 = *(undefined8 *)(pAVar21 + -0x240);
            uVar6 = *(undefined8 *)(pAVar21 + -0x238);
            *(undefined4 *)(pAVar15 + 0x38) = uVar2;
            uVar2 = *(undefined4 *)(pAVar21 + -0x224);
            *(undefined8 *)(pAVar15 + 0x10) = uVar7;
            *(undefined8 *)(pAVar15 + 0x18) = uVar8;
            *(undefined4 *)(pAVar15 + 0x3c) = uVar2;
            uVar3 = *(uint *)(pAVar21 + -0x220);
            *(undefined4 *)(pAVar15 + 0x40) = 0;
            *(undefined8 *)(pAVar15 + 0x20) = uVar5;
            *(undefined8 *)(pAVar15 + 0x28) = uVar6;
            *(undefined4 *)(pAVar15 + 0x30) = uVar1;
            if (uVar3 != 0) {
              memmove(pAVar15 + 0x50,pAVar21 + -0x210,(ulong)uVar3 << 4);
              *(uint *)(pAVar15 + 0x40) = uVar3;
            }
            *(undefined4 *)(pAVar15 + 0x250) = 0;
            uVar3 = *(uint *)(pAVar21 + -0x10);
            if (uVar3 != 0) {
              memmove(pAVar15 + 0x260,pAVar21,(ulong)uVar3 << 4);
              *(uint *)(pAVar15 + 0x250) = uVar3;
            }
          }
          pAVar21 = pAVar21 + 0x460;
          pAVar15 = pAVar15 + 0x460;
        } while (pAVar14 + uVar16 * 0x460 + 0x260 != pAVar21);
      }
      (*JPH::Free)(pAVar14);
      lVar18 = *(long *)(this + 37000);
      uVar19 = lVar18 + 1;
    }
    *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> **)
     (this + 0x9098) = pAVar12;
    *(ulong *)(this + 0x9090) = uVar17;
    pAVar21 = pAVar12 + lVar20;
  }
  lVar18 = (lVar18 + (lVar20 >> 5) * 0x5075075075075075) * 0x460;
  pAVar15 = pAVar21 + lVar18 + -0x460;
  for (pAVar14 = pAVar21 + lVar18; pAVar21 + 0x460 <= pAVar14; pAVar14 = pAVar14 + -0x460) {
    uVar5 = *(undefined8 *)pAVar15;
    uVar6 = *(undefined8 *)(pAVar15 + 8);
    uVar7 = *(undefined8 *)(pAVar15 + 0x10);
    uVar8 = *(undefined8 *)(pAVar15 + 0x18);
    uVar9 = *(undefined8 *)(pAVar15 + 0x20);
    uVar10 = *(undefined8 *)(pAVar15 + 0x28);
    *(undefined4 *)(pAVar14 + 0x34) = *(undefined4 *)(pAVar15 + 0x34);
    uVar2 = *(undefined4 *)(pAVar15 + 0x38);
    uVar1 = *(undefined4 *)(pAVar15 + 0x30);
    *(undefined8 *)pAVar14 = uVar5;
    *(undefined8 *)(pAVar14 + 8) = uVar6;
    *(undefined4 *)(pAVar14 + 0x38) = uVar2;
    uVar2 = *(undefined4 *)(pAVar15 + 0x3c);
    *(undefined8 *)(pAVar14 + 0x10) = uVar7;
    *(undefined8 *)(pAVar14 + 0x18) = uVar8;
    *(undefined4 *)(pAVar14 + 0x3c) = uVar2;
    uVar3 = *(uint *)(pAVar15 + 0x40);
    *(undefined4 *)(pAVar14 + 0x40) = 0;
    *(undefined8 *)(pAVar14 + 0x20) = uVar9;
    *(undefined8 *)(pAVar14 + 0x28) = uVar10;
    *(undefined4 *)(pAVar14 + 0x30) = uVar1;
    if (uVar3 != 0) {
      memmove(pAVar14 + 0x50,pAVar15 + 0x50,(ulong)uVar3 << 4);
      *(uint *)(pAVar14 + 0x40) = uVar3;
    }
    uVar3 = *(uint *)(pAVar15 + 0x250);
    *(undefined4 *)(pAVar14 + 0x250) = 0;
    if (uVar3 != 0) {
      memmove(pAVar14 + 0x260,pAVar15 + 0x260,(ulong)uVar3 << 4);
      *(uint *)(pAVar14 + 0x250) = uVar3;
    }
    pAVar15 = pAVar15 + -0x460;
  }
  if (pAVar21 !=
      (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *)0x0) {
    uVar5 = *(undefined8 *)param_1;
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    *(undefined4 *)(pAVar21 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(undefined8 *)pAVar21 = uVar5;
    *(undefined8 *)(pAVar21 + 8) = uVar6;
    *(undefined4 *)(pAVar21 + 0x38) = uVar2;
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined8 *)(pAVar21 + 0x10) = uVar7;
    *(undefined8 *)(pAVar21 + 0x18) = uVar8;
    *(undefined4 *)(pAVar21 + 0x3c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x40);
    *(undefined4 *)(pAVar21 + 0x40) = 0;
    *(undefined8 *)(pAVar21 + 0x20) = uVar9;
    *(undefined8 *)(pAVar21 + 0x28) = uVar10;
    *(undefined4 *)(pAVar21 + 0x30) = uVar1;
    if (uVar3 != 0) {
      memmove(pAVar21 + 0x50,param_1 + 0x50,(ulong)uVar3 << 4);
      *(uint *)(pAVar21 + 0x40) = uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x250);
    *(undefined4 *)(pAVar21 + 0x250) = 0;
    if (uVar3 != 0) {
      memmove(pAVar21 + 0x260,param_1 + 0x260,(ulong)uVar3 << 4);
      *(uint *)(pAVar21 + 0x250) = uVar3;
    }
  }
  *(ulong *)(this + 37000) = uVar19;
  if ((int)uVar19 <= *(int *)(this + 0x90a0)) {
    return;
  }
  uVar16 = (ulong)*(int *)(this + 0x90a0);
  if (*(ulong *)(this + 0x9090) < uVar16) {
    JPH::Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>::
    reallocate(pAVar11,uVar16);
    pAVar12 = *(Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>>
                **)(this + 0x9098);
    uVar19 = *(ulong *)(this + 37000);
  }
  pAVar21 = pAVar12 + uVar19 * 0x460;
  if (pAVar21 < pAVar12 + uVar16 * 0x460) {
    if (pAVar21 ==
        (Array<JPH::CollideShapeResult,JPH::STLLocalAllocator<JPH::CollideShapeResult,33ul>> *)0x0)
    goto LAB_0010c646;
    do {
      uVar6 = _LC47;
      uVar5 = _LC48;
      *(undefined4 *)(pAVar21 + 0x250) = 0;
      *(undefined8 *)(pAVar21 + 0x34) = uVar5;
      *(undefined8 *)(pAVar21 + 0x3c) = uVar6;
LAB_0010c646:
      pAVar21 = pAVar21 + 0x460;
    } while (pAVar21 < pAVar12 + uVar16 * 0x460);
  }
  *(ulong *)(this + 37000) = uVar16;
  return;
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
  if (fVar31 < _LC97) {
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
    if (_LC43 < fVar15) {
      fVar15 = (float)((uint)(fVar24 * fVar13 + fVar12 * fVar22 + fVar20 * fVar4 + 0.0) ^ _LC6) /
               fVar15;
      if (fVar15 < 0.0) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = _LC20;
        if (fVar15 <= _LC20) {
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
    if (_LC43 < fVar30) {
      fVar30 = (float)((uint)(fVar28 * fStack_60 + fVar27 * fStack_64 + fVar26 * local_68 + 0.0) ^
                      _LC6) / fVar30;
      if (fVar30 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _LC20;
        if (fVar30 <= _LC20) {
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
    if ((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) goto LAB_0010cede;
  }
  else {
    if (fVar18 <= fVar26) {
      *param_7 = 2;
      uStack_70 = param_4;
      local_78 = (undefined1  [8])param_3;
      return _local_78;
    }
    if (((fVar29 * fVar18 <= fVar30 * fVar26) && (0.0 <= fVar29)) && (fVar26 == 0.0)) {
LAB_0010cede:
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
    if ((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) goto LAB_0010d094;
  }
  else {
    if (fVar15 <= fVar27) {
      uStack_70 = uStack_50;
      local_78 = (undefined1  [8])local_58;
      *param_7 = (-(uint)(iVar1 == 0) & 3) + 1;
      return _local_78;
    }
    if (((fVar30 * fVar15 <= fVar29 * fVar27) && (0.0 <= fVar30)) && (fVar27 == 0.0)) {
LAB_0010d094:
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
  fVar31 = fVar31 * __LC98;
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
    fVar3 = _LC0;
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
      goto joined_r0x0010d1ad;
    }
  }
  auVar4._8_8_ = local_78;
  auVar4._0_8_ = local_80;
  fVar2 = fVar3;
joined_r0x0010d1ad:
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



/* float JPH::GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,
   JPH::PointConvexSupport>(JPH::ConvexShape::Support const&, JPH::PointConvexSupport const&, float,
   float, JPH::Vec3&, JPH::Vec3&, JPH::Vec3&) */

float __thiscall
JPH::GJKClosestPoint::GetClosestPoints<JPH::ConvexShape::Support,JPH::PointConvexSupport>
          (GJKClosestPoint *this,Support *param_1,PointConvexSupport *param_2,float param_3,
          float param_4,Vec3 *param_5,Vec3 *param_6,Vec3 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  GJKClosestPoint *pGVar7;
  GJKClosestPoint *pGVar8;
  int iVar9;
  long in_FS_OFFSET;
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
  undefined1 auVar26 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint local_44;
  long local_40;
  
  fVar19 = _LC0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar11 = *(float *)param_5;
  *(undefined4 *)(this + 0xc0) = 0;
  local_88 = *(float *)(param_5 + 8) * *(float *)(param_5 + 8) +
             *(float *)(param_5 + 4) * *(float *)(param_5 + 4) + fVar11 * fVar11 + 0.0;
LAB_0010d498:
  auVar26 = (**(code **)(*(long *)param_1 + 0x10))
                      (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),param_1);
  fVar11 = *(float *)param_2;
  fVar16 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_2 + 8);
  fVar13 = *(float *)(param_2 + 0xc);
  local_a8._0_4_ = auVar26._0_4_;
  local_a8._4_4_ = auVar26._4_4_;
  uStack_a0._0_4_ = auVar26._8_4_;
  uStack_a0._4_4_ = auVar26._12_4_;
  local_a8._0_4_ = (float)local_a8 - fVar11;
  local_a8._4_4_ = local_a8._4_4_ - fVar16;
  uStack_a0._0_4_ = (float)uStack_a0 - fVar12;
  fVar10 = (float)uStack_a0 * *(float *)(param_5 + 8) +
           local_a8._4_4_ * *(float *)(param_5 + 4) + *(float *)param_5 * (float)local_a8 + 0.0;
  if ((fVar10 < 0.0) && (fVar14 = _LC0, param_4 * local_88 < fVar10 * fVar10)) goto LAB_0010d6f2;
  iVar1 = *(int *)(this + 0xc0);
  iVar9 = iVar1 + 1;
  pGVar8 = this + (long)iVar1 * 0x10;
  *(float *)pGVar8 = (float)local_a8;
  *(float *)(pGVar8 + 4) = local_a8._4_4_;
  *(float *)(pGVar8 + 8) = (float)uStack_a0;
  *(float *)(pGVar8 + 0xc) = uStack_a0._4_4_ - fVar13;
  *(undefined1 (*) [16])(pGVar8 + 0x40) = auVar26;
  pGVar8 = this + (long)iVar1 * 0x10 + 0x80;
  *(float *)pGVar8 = fVar11;
  *(float *)(pGVar8 + 4) = fVar16;
  *(float *)(pGVar8 + 8) = fVar12;
  *(float *)(pGVar8 + 0xc) = fVar13;
  *(int *)(this + 0xc0) = iVar9;
  if (iVar9 == 3) {
    auVar26 = ClosestPoint::GetClosestPointOnTriangle<true>
                        (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),
                         *(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),
                         *(undefined8 *)(this + 0x28),&local_44);
    uStack_a0._0_4_ = auVar26._8_4_;
  }
  else if (iVar9 < 4) {
    if (iVar9 == 1) {
      local_44 = 1;
      auVar26 = *(undefined1 (*) [16])this;
      uStack_a0._0_4_ = *(float *)(this + 8);
    }
    else {
      if (iVar9 != 2) goto LAB_0010de70;
      local_a8 = *(undefined8 *)this;
      uStack_a0 = *(undefined8 *)(this + 8);
      uVar2 = *(undefined8 *)(this + 0x10);
      uVar3 = *(undefined8 *)(this + 0x18);
      local_98 = (float)local_a8;
      fStack_94 = (float)((ulong)local_a8 >> 0x20);
      fStack_90 = (float)uStack_a0;
      fStack_8c = (float)((ulong)uStack_a0 >> 0x20);
      local_68 = (float)uVar2;
      fStack_64 = (float)((ulong)uVar2 >> 0x20);
      fStack_60 = (float)uVar3;
      fVar11 = local_68 - local_98;
      fVar12 = fStack_64 - fStack_94;
      fVar13 = fStack_60 - fStack_90;
      fVar16 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 + 0.0;
      if (fVar16 < _LC43) {
        if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <
            fStack_60 * fStack_60 + fStack_64 * fStack_64 + local_68 * local_68 + 0.0)
        goto LAB_0010d9e5;
LAB_0010d9ef:
        local_44 = 2;
        local_a8 = uVar2;
        uStack_a0 = uVar3;
      }
      else {
        fVar16 = (float)((uint)(fVar13 * fStack_90 + fVar12 * fStack_94 + fVar11 * local_98 + 0.0) ^
                        _LC6) / fVar16;
        if (fVar16 <= 0.0) {
LAB_0010d9e5:
          local_44 = 1;
        }
        else {
          fVar11 = _LC20 - fVar16;
          if (fVar11 <= 0.0) goto LAB_0010d9ef;
          fStack_5c = (float)((ulong)uVar3 >> 0x20);
          local_44 = 3;
          local_a8 = CONCAT44(fVar16 * fStack_64 + fVar11 * fStack_94,
                              fVar16 * local_68 + fVar11 * local_98);
          uStack_a0 = CONCAT44(fVar16 * fStack_5c + fVar11 * fStack_8c,
                               fVar16 * fStack_60 + fVar11 * fStack_90);
        }
      }
      auVar26._8_8_ = uStack_a0;
      auVar26._0_8_ = local_a8;
    }
  }
  else {
    if (iVar9 != 4) {
LAB_0010de70:
      *(int *)(this + 0xc0) = iVar1;
      fVar14 = local_88;
      goto LAB_0010d6f2;
    }
    auVar26 = ClosestPoint::GetClosestPointOnTetrahedron<true>
                        (*(undefined8 *)this,*(undefined8 *)(this + 8),*(undefined8 *)(this + 0x10),
                         *(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x20),
                         *(undefined8 *)(this + 0x28),*(undefined8 *)(this + 0x30),
                         *(undefined8 *)(this + 0x38),&local_44);
    uStack_a0._0_4_ = auVar26._8_4_;
  }
  fVar14 = (float)uStack_a0 * (float)uStack_a0 +
           auVar26._0_4_ * auVar26._0_4_ + 0.0 + auVar26._4_4_ * auVar26._4_4_;
  if (fVar14 < fVar19) {
    *(long *)param_5 = auVar26._0_8_;
    *(ulong *)(param_5 + 8) = auVar26._8_8_ & 0xffffffff00000000 | (ulong)(uint)(float)uStack_a0;
    if (local_44 == 0xf) {
      fVar14 = 0.0;
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_0010d6b5;
    }
    iVar5 = 0;
    iVar9 = 0;
    pGVar8 = this;
    iVar4 = 0;
    if ((local_44 & 1) == 0) goto joined_r0x0010d78d;
LAB_0010d756:
    lVar6 = (long)iVar9;
    uVar2 = *(undefined8 *)(pGVar8 + 8);
    iVar9 = iVar9 + 1;
    pGVar7 = this + lVar6 * 0x10;
    *(undefined8 *)pGVar7 = *(undefined8 *)pGVar8;
    *(undefined8 *)(pGVar7 + 8) = uVar2;
    uVar2 = *(undefined8 *)(pGVar8 + 0x48);
    *(undefined8 *)(pGVar7 + 0x40) = *(undefined8 *)(pGVar8 + 0x40);
    *(undefined8 *)(pGVar7 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(pGVar8 + 0x88);
    *(undefined8 *)(pGVar7 + 0x80) = *(undefined8 *)(pGVar8 + 0x80);
    *(undefined8 *)(pGVar7 + 0x88) = uVar2;
    iVar4 = iVar5;
joined_r0x0010d78d:
    if (iVar4 < iVar1) goto LAB_0010d78f;
    *(int *)(this + 0xc0) = iVar9;
    if (fVar14 <= param_3 * param_3) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
      goto LAB_0010de87;
    }
    fVar11 = *(float *)(this + 8) * *(float *)(this + 8) +
             *(float *)(this + 4) * *(float *)(this + 4) + *(float *)this * *(float *)this + 0.0;
    if (1 < iVar9) {
      pGVar8 = this + 0x10;
      fVar16 = fVar11;
      do {
        pGVar7 = pGVar8 + 0x10;
        fVar11 = *(float *)(pGVar8 + 8) * *(float *)(pGVar8 + 8) +
                 *(float *)pGVar8 * *(float *)pGVar8 + 0.0 +
                 *(float *)(pGVar8 + 4) * *(float *)(pGVar8 + 4);
        if (fVar11 <= fVar16) {
          fVar11 = fVar16;
        }
        pGVar8 = pGVar7;
        fVar16 = fVar11;
      } while (this + (ulong)(iVar9 - 2) * 0x10 + 0x20 != pGVar7);
    }
    if (fVar14 <= fVar11 * _LC25) {
      *(undefined1 (*) [16])param_5 = (undefined1  [16])0x0;
LAB_0010de87:
      fVar14 = 0.0;
      goto LAB_0010d6b5;
    }
    *(float *)param_5 = 0.0 - *(float *)param_5;
    *(float *)(param_5 + 4) = 0.0 - *(float *)(param_5 + 4);
    *(float *)(param_5 + 8) = 0.0 - *(float *)(param_5 + 8);
    *(float *)(param_5 + 0xc) = 0.0 - *(float *)(param_5 + 0xc);
    fVar16 = fVar19 * _LC25;
    fVar11 = fVar19 - fVar14;
    fVar19 = fVar14;
    local_88 = fVar14;
    if (fVar11 <= fVar16) goto LAB_0010d6b5;
    goto LAB_0010d498;
  }
  *(int *)(this + 0xc0) = iVar1;
  iVar9 = iVar1;
  fVar14 = local_88;
LAB_0010d6b5:
  if (iVar9 == 2) {
    local_98 = (float)*(undefined8 *)(this + 0x10);
    fStack_94 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
    fStack_90 = (float)*(undefined8 *)(this + 0x18);
    local_a8._0_4_ = (float)*(undefined8 *)this;
    local_a8._4_4_ = (float)((ulong)*(undefined8 *)this >> 0x20);
    uStack_a0._0_4_ = (float)*(undefined8 *)(this + 8);
    fVar19 = local_98 - (float)local_a8;
    fVar16 = fStack_94 - local_a8._4_4_;
    fVar12 = fStack_90 - (float)uStack_a0;
    fVar11 = fVar12 * fVar12 + fVar16 * fVar16 + fVar19 * fVar19 + 0.0;
    if (fVar11 < _LC43) {
      if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <=
          (float)local_a8 * (float)local_a8 + 0.0 + local_a8._4_4_ * local_a8._4_4_ +
          (float)uStack_a0 * (float)uStack_a0) {
        fVar19 = 0.0;
        fVar11 = _LC20;
      }
      else {
        fVar11 = 0.0;
        fVar19 = _LC20;
      }
    }
    else {
      fVar11 = (float)((uint)(fVar12 * (float)uStack_a0 +
                             fVar16 * local_a8._4_4_ + fVar19 * (float)local_a8 + 0.0) ^ _LC6) /
               fVar11;
      fVar19 = _LC20 - fVar11;
    }
    fVar16 = *(float *)(this + 0x54);
    fVar12 = *(float *)(this + 0x58);
    fVar13 = *(float *)(this + 0x5c);
    fVar10 = *(float *)(this + 0x44);
    fVar15 = *(float *)(this + 0x48);
    fVar17 = *(float *)(this + 0x4c);
    *(float *)param_6 = *(float *)(this + 0x50) * fVar11 + *(float *)(this + 0x40) * fVar19;
    *(float *)(param_6 + 4) = fVar16 * fVar11 + fVar10 * fVar19;
    *(float *)(param_6 + 8) = fVar12 * fVar11 + fVar15 * fVar19;
    *(float *)(param_6 + 0xc) = fVar13 * fVar11 + fVar17 * fVar19;
    fVar16 = *(float *)(this + 0x94);
    fVar12 = *(float *)(this + 0x98);
    fVar13 = *(float *)(this + 0x9c);
    fVar10 = *(float *)(this + 0x84);
    fVar15 = *(float *)(this + 0x88);
    fVar17 = *(float *)(this + 0x8c);
    *(float *)param_7 = fVar11 * *(float *)(this + 0x90) + fVar19 * *(float *)(this + 0x80);
    *(float *)(param_7 + 4) = fVar11 * fVar16 + fVar19 * fVar10;
    *(float *)(param_7 + 8) = fVar11 * fVar12 + fVar19 * fVar15;
    *(float *)(param_7 + 0xc) = fVar11 * fVar13 + fVar19 * fVar17;
    goto LAB_0010d6f2;
  }
  if (iVar9 != 3) {
    if (iVar9 == 1) {
      uVar2 = *(undefined8 *)(this + 0x48);
      *(undefined8 *)param_6 = *(undefined8 *)(this + 0x40);
      *(undefined8 *)(param_6 + 8) = uVar2;
      uVar2 = *(undefined8 *)(this + 0x88);
      *(undefined8 *)param_7 = *(undefined8 *)(this + 0x80);
      *(undefined8 *)(param_7 + 8) = uVar2;
    }
    goto LAB_0010d6f2;
  }
  local_88 = (float)*(undefined8 *)(this + 0x10);
  fStack_84 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
  fStack_80 = (float)*(undefined8 *)(this + 0x18);
  local_a8._0_4_ = (float)*(undefined8 *)this;
  local_a8._4_4_ = (float)((ulong)*(undefined8 *)this >> 0x20);
  uStack_a0._0_4_ = (float)*(undefined8 *)(this + 8);
  fVar22 = local_88 - (float)local_a8;
  fVar23 = fStack_84 - local_a8._4_4_;
  fVar24 = fStack_80 - (float)uStack_a0;
  local_98 = (float)*(undefined8 *)(this + 0x20);
  fStack_94 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
  fStack_90 = (float)*(undefined8 *)(this + 0x28);
  fVar18 = local_98 - (float)local_a8;
  fVar20 = fStack_94 - local_a8._4_4_;
  fVar21 = fStack_90 - (float)uStack_a0;
  fVar12 = local_98 - local_88;
  fVar13 = fStack_94 - fStack_84;
  fVar10 = fStack_90 - fStack_80;
  fVar25 = fVar24 * fVar24 + fVar23 * fVar23 + fVar22 * fVar22 + 0.0;
  fVar17 = fVar21 * fVar21 + fVar20 * fVar20 + fVar18 * fVar18 + 0.0;
  fVar15 = fVar10 * fVar10 + fVar13 * fVar13 + fVar12 * fVar12 + 0.0;
  fVar11 = _LC20;
  fVar19 = _LC20;
  fVar16 = _LC20;
  if (fVar25 <= fVar15) {
    fVar12 = fVar21 * fVar24 + fVar23 * fVar20 + fVar22 * fVar18 + 0.0;
    fVar13 = fVar17 * fVar25 - fVar12 * fVar12;
    if (fVar13 < _LC99) {
      if (fVar25 <= fVar17) {
        if (_LC43 <= fVar17) goto LAB_0010df5e;
        if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <=
            local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 + 0.0 +
            (float)uStack_a0 * (float)uStack_a0) goto LAB_0010e1fa;
LAB_0010e107:
        fVar11 = 0.0;
        goto LAB_0010dfa0;
      }
      if (fVar25 < _LC43) {
        if (fStack_80 * fStack_80 + fStack_84 * fStack_84 + local_88 * local_88 + 0.0 <=
            local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 + 0.0 +
            (float)uStack_a0 * (float)uStack_a0) {
          fVar16 = 0.0;
        }
        else {
          fVar19 = 0.0;
        }
      }
      else {
        fVar19 = (float)((uint)((float)uStack_a0 * fVar24 +
                               local_a8._4_4_ * fVar23 + fVar22 * (float)local_a8 + 0.0) ^ _LC6) /
                 fVar25;
        fVar16 = _LC20 - fVar19;
      }
      fVar11 = 0.0;
    }
    else {
      fVar16 = fVar24 * (float)uStack_a0 + fVar23 * local_a8._4_4_ + fVar22 * (float)local_a8 + 0.0;
      fVar11 = (float)uStack_a0 * fVar21 + local_a8._4_4_ * fVar20 + (float)local_a8 * fVar18 + 0.0;
      fVar19 = (fVar12 * fVar11 - fVar17 * fVar16) / fVar13;
      fVar11 = (fVar12 * fVar16 - fVar11 * fVar25) / fVar13;
      fVar16 = (_LC20 - fVar19) - fVar11;
    }
  }
  else {
    fVar23 = fVar10 * fVar21 + fVar13 * fVar20 + fVar12 * fVar18 + 0.0;
    fVar22 = fVar15 * fVar17 - fVar23 * fVar23;
    if (fVar22 < _LC99) {
      if (fVar17 <= fVar15) {
        if (fVar15 < _LC43) {
          if (fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0 <=
              fStack_84 * fStack_84 + local_88 * local_88 + 0.0 + fStack_80 * fStack_80) {
            fVar19 = 0.0;
          }
          else {
            fVar11 = 0.0;
          }
        }
        else {
          fVar11 = (float)((uint)(fStack_80 * fVar10 + fStack_84 * fVar13 + local_88 * fVar12 + 0.0)
                          ^ _LC6) / fVar15;
          fVar19 = _LC20 - fVar11;
        }
        fVar16 = 0.0;
      }
      else {
        if (fVar17 < _LC43) {
          if (local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 + 0.0 +
              (float)uStack_a0 * (float)uStack_a0 <
              fStack_90 * fStack_90 + fStack_94 * fStack_94 + local_98 * local_98 + 0.0)
          goto LAB_0010e107;
LAB_0010e1fa:
          fVar16 = 0.0;
        }
        else {
LAB_0010df5e:
          fVar11 = (float)((uint)((float)uStack_a0 * fVar21 +
                                 local_a8._4_4_ * fVar20 + (float)local_a8 * fVar18 + 0.0) ^ _LC6) /
                   fVar17;
          fVar16 = _LC20 - fVar11;
        }
LAB_0010dfa0:
        fVar19 = 0.0;
      }
    }
    else {
      fVar19 = fVar21 * fStack_90 + fVar20 * fStack_94 + fVar18 * local_98 + 0.0;
      fVar11 = fStack_90 * fVar10 + fStack_94 * fVar13 + local_98 * fVar12 + 0.0;
      fVar16 = (fVar15 * fVar19 - fVar23 * fVar11) / fVar22;
      fVar19 = (fVar11 * fVar17 - fVar23 * fVar19) / fVar22;
      fVar11 = (_LC20 - fVar16) - fVar19;
    }
  }
  fVar12 = *(float *)(this + 0x54);
  fVar13 = *(float *)(this + 0x58);
  fVar10 = *(float *)(this + 0x5c);
  fVar15 = *(float *)(this + 0x44);
  fVar17 = *(float *)(this + 0x48);
  fVar18 = *(float *)(this + 0x4c);
  fVar20 = *(float *)(this + 100);
  fVar21 = *(float *)(this + 0x68);
  fVar22 = *(float *)(this + 0x6c);
  *(float *)param_6 =
       *(float *)(this + 0x50) * fVar19 + *(float *)(this + 0x40) * fVar16 +
       *(float *)(this + 0x60) * fVar11;
  *(float *)(param_6 + 4) = fVar12 * fVar19 + fVar15 * fVar16 + fVar20 * fVar11;
  *(float *)(param_6 + 8) = fVar13 * fVar19 + fVar17 * fVar16 + fVar21 * fVar11;
  *(float *)(param_6 + 0xc) = fVar10 * fVar19 + fVar18 * fVar16 + fVar22 * fVar11;
  fVar12 = *(float *)(this + 0x94);
  fVar13 = *(float *)(this + 0x98);
  fVar10 = *(float *)(this + 0x9c);
  fVar15 = *(float *)(this + 0x84);
  fVar17 = *(float *)(this + 0x88);
  fVar18 = *(float *)(this + 0x8c);
  fVar20 = *(float *)(this + 0xa4);
  fVar21 = *(float *)(this + 0xa8);
  fVar22 = *(float *)(this + 0xac);
  *(float *)param_7 =
       fVar11 * *(float *)(this + 0xa0) +
       fVar19 * *(float *)(this + 0x90) + fVar16 * *(float *)(this + 0x80);
  *(float *)(param_7 + 4) = fVar11 * fVar20 + fVar19 * fVar12 + fVar16 * fVar15;
  *(float *)(param_7 + 8) = fVar11 * fVar21 + fVar19 * fVar13 + fVar16 * fVar17;
  *(float *)(param_7 + 0xc) = fVar11 * fVar22 + fVar19 * fVar10 + fVar16 * fVar18;
LAB_0010d6f2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return fVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010d78f:
  pGVar8 = pGVar8 + 0x10;
  iVar5 = iVar4 + 1;
  iVar4 = iVar5;
  if ((1 << ((byte)iVar5 & 0x1f) & local_44) != 0) goto LAB_0010d756;
  goto joined_r0x0010d78d;
}



/* JoltPhysicsDirectSpaceState3D::_cast_motion_impl(JPH::Shape const&, Transform3D const&, Vector3
   const&, Vector3 const&, bool, bool, JPH::CollideShapeSettings const&, JPH::BroadPhaseLayerFilter
   const&, JPH::ObjectLayerFilter const&, JPH::BodyFilter const&, JPH::ShapeFilter const&, float&,
   float&) const */

void JoltPhysicsDirectSpaceState3D::_GLOBAL__sub_I__cast_motion_impl(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC48;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D() */

void __thiscall
JoltPhysicsDirectSpaceState3D::~JoltPhysicsDirectSpaceState3D(JoltPhysicsDirectSpaceState3D *this)

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
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,
   JPH::CollisionCollectorTraitsCastRay> >::~JoltQueryCollectorClosest() */

void __thiscall
JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
::~JoltQueryCollectorClosest
          (JoltQueryCollectorClosest<JPH::CollisionCollector<JPH::RayCastResult,JPH::CollisionCollectorTraitsCastRay>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape> >::~JoltQueryCollectorAny() */

void __thiscall
JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
::~JoltQueryCollectorAny
          (JoltQueryCollectorAny<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::ShapeFilter::~ShapeFilter() */

void __thiscall JPH::ShapeFilter::~ShapeFilter(ShapeFilter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAll() */

void __thiscall
JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAll
          (JoltQueryCollectorAll<JPH::CollisionCollector<JPH::TransformedShape,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector() */

void __thiscall
JPH::InternalEdgeRemovingCollector::~InternalEdgeRemovingCollector
          (InternalEdgeRemovingCollector *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollidePointResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorClosestMulti() */

void __thiscall
JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorClosestMulti
          (JoltQueryCollectorClosestMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,
   JPH::CollisionCollectorTraitsCollideShape>, 32>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::CollideShapeResult,JPH::CollisionCollectorTraitsCollideShape>,32>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>, 1024>::~JoltQueryCollectorAnyMulti() */

void __thiscall
JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
::~JoltQueryCollectorAnyMulti
          (JoltQueryCollectorAnyMulti<JPH::CollisionCollector<JPH::BodyID,JPH::CollisionCollectorTraitsCollideShape>,1024>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



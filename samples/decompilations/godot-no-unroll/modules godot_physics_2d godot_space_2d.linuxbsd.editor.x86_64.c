
/* GodotSpace2D::_broadphase_pair(GodotCollisionObject2D*, int, GodotCollisionObject2D*, int, void*)
    */

GodotAreaPair2D *
GodotSpace2D::_broadphase_pair
          (GodotCollisionObject2D *param_1,int param_2,GodotCollisionObject2D *param_3,int param_4,
          void *param_5)

{
  int iVar1;
  int iVar2;
  GodotAreaPair2D *this;
  GodotArea2Pair2D *this_00;
  GodotBodyPair2D *this_01;
  int iVar3;
  GodotCollisionObject2D *pGVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 8);
  pGVar4 = param_3;
  iVar5 = param_2;
  iVar3 = iVar1;
  if (iVar1 <= iVar2) {
    pGVar4 = param_1;
    param_1 = param_3;
    iVar5 = param_4;
    param_4 = param_2;
    iVar3 = iVar2;
    iVar2 = iVar1;
  }
  *(int *)((long)param_5 + 0x60f4) = *(int *)((long)param_5 + 0x60f4) + 1;
  if (iVar2 == 0) {
    if (iVar3 != 0) {
      this = (GodotAreaPair2D *)operator_new(0x50,"");
      GodotAreaPair2D::GodotAreaPair2D
                (this,(GodotBody2D *)param_1,iVar5,(GodotArea2D *)pGVar4,param_4);
      return this;
    }
    this_00 = (GodotArea2Pair2D *)operator_new(0x50,"");
    GodotArea2Pair2D::GodotArea2Pair2D
              (this_00,(GodotArea2D *)param_1,iVar5,(GodotArea2D *)pGVar4,param_4);
    return (GodotAreaPair2D *)this_00;
  }
  this_01 = (GodotBodyPair2D *)operator_new(0x130,"");
  GodotBodyPair2D::GodotBodyPair2D
            (this_01,(GodotBody2D *)pGVar4,param_4,(GodotBody2D *)param_1,iVar5);
  return (GodotAreaPair2D *)this_01;
}



/* GodotSpace2D::_broadphase_unpair(GodotCollisionObject2D*, int, GodotCollisionObject2D*, int,
   void*, void*) */

void GodotSpace2D::_broadphase_unpair
               (GodotCollisionObject2D *param_1,int param_2,GodotCollisionObject2D *param_3,
               int param_4,void *param_5,void *param_6)

{
  long lVar1;
  
  if (param_5 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    lVar1 = *param_5;
    *(int *)((long)param_6 + 0x60f4) = *(int *)((long)param_6 + 0x60f4) + -1;
    (**(code **)(lVar1 + 0x18))(param_5);
    Memory::free_static(param_5,false);
    return;
  }
  return;
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



/* GodotPhysicsDirectSpaceState2D::intersect_point(PhysicsDirectSpaceState2D::PointParameters
   const&, PhysicsDirectSpaceState2D::ShapeResult*, int) */

int __thiscall
GodotPhysicsDirectSpaceState2D::intersect_point
          (GodotPhysicsDirectSpaceState2D *this,PointParameters *param_1,ShapeResult *param_2,
          int param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  char cVar13;
  int iVar14;
  ulong uVar15;
  ulong *puVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ShapeResult *pSVar24;
  int iVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  float fVar28;
  int local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  Transform2D local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < param_3) {
    local_80 = _LC7;
    local_88 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                        (float)((ulong)_LC6 >> 0x20),(float)*(undefined8 *)param_1 + (float)_LC6);
    plVar1 = *(long **)(*(long *)(this + 0x178) + 0x38);
    iVar14 = (**(code **)(*plVar1 + 0x40))(plVar1,&local_88,*(long *)(this + 0x178) + 0xd8,0x800);
    if (0 < iVar14) {
      local_a8 = 0;
      iVar25 = 0;
      do {
        while( true ) {
          lVar21 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)iVar25 * 8);
          if ((*(uint *)(param_1 + 0x38) & *(uint *)(lVar21 + 0x7c)) != 0) break;
LAB_001004e8:
          iVar25 = iVar25 + 1;
          if (iVar14 == iVar25) goto LAB_001004f7;
        }
        if (*(int *)(lVar21 + 8) != 0) {
          if ((*(int *)(lVar21 + 8) != 1) || (param_1[0x3c] != (PointParameters)0x0))
          goto LAB_001003a5;
          goto LAB_001004e8;
        }
        if (param_1[0x3d] == (PointParameters)0x0) goto LAB_001004e8;
LAB_001003a5:
        if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
          uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_1 + 0x30) * 4));
          lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x30) * 8);
          uVar15 = *(long *)(lVar21 + 0x10) * 0x3ffff - 1;
          uVar15 = (uVar15 ^ uVar15 >> 0x1f) * 0x15;
          uVar15 = (uVar15 ^ uVar15 >> 0xb) * 0x41;
          uVar15 = uVar15 >> 0x16 ^ uVar15;
          uVar23 = uVar15 & 0xffffffff;
          if ((int)uVar15 == 0) {
            uVar23 = 1;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar23 * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar20;
          lVar18 = SUB168(auVar4 * auVar8,8);
          uVar19 = *(uint *)(*(long *)(param_1 + 0x28) + lVar18 * 4);
          iVar17 = SUB164(auVar4 * auVar8,8);
          if (uVar19 != 0) {
            uVar22 = 0;
            do {
              if (((uint)uVar23 == uVar19) &&
                 (*(long *)(lVar21 + 0x10) ==
                  *(long *)(*(long *)(param_1 + 0x10) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0x18) + lVar18 * 4) * 8)))
              goto LAB_001004e8;
              uVar22 = uVar22 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)(iVar17 + 1) * lVar2;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar20;
              lVar18 = SUB168(auVar5 * auVar9,8);
              uVar19 = *(uint *)(*(long *)(param_1 + 0x28) + lVar18 * 4);
              iVar17 = SUB164(auVar5 * auVar9,8);
            } while ((uVar19 != 0) &&
                    (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar19 * lVar2, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar20, auVar7._8_8_ = 0,
                    auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_1 + 0x30) * 4) + iVar17)
                                          - SUB164(auVar6 * auVar10,8)) * lVar2, auVar11._8_8_ = 0,
                    auVar11._0_8_ = uVar20, uVar22 <= SUB164(auVar7 * auVar11,8)));
          }
        }
        if (((param_1[0x3e] != (PointParameters)0x0) && (*(char *)(lVar21 + 0x28) == '\0')) ||
           (*(long *)(lVar21 + 0x20) != *(long *)(param_1 + 8))) goto LAB_001004e8;
        iVar17 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)iVar25 * 4);
        lVar18 = (long)iVar17;
        lVar2 = *(long *)(lVar21 + 0x38);
        if (iVar17 < 0) {
          if (lVar2 != 0) {
LAB_00100704:
            lVar21 = *(long *)(lVar2 + -8);
            goto LAB_00100708;
          }
LAB_00100746:
          lVar21 = 0;
LAB_00100708:
          _err_print_index_error
                    ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,lVar18,
                     lVar21,"p_index","shapes.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar12 = (code *)invalidInstructionException();
          (*pcVar12)();
        }
        if (lVar2 == 0) goto LAB_00100746;
        if (*(long *)(lVar2 + -8) <= lVar18) goto LAB_00100704;
        plVar1 = *(long **)(lVar2 + lVar18 * 0x58 + 0x48);
        Transform2D::operator*(local_78,(Transform2D *)(lVar21 + 0x48));
        Transform2D::affine_inverse();
        fVar27 = (float)*(undefined8 *)param_1;
        fVar28 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
        local_90 = CONCAT44(fVar27 * SUB84(local_78._32_8_,4) + fVar28 * SUB84(local_78._40_8_,4) +
                            SUB84(local_78._48_8_,4),
                            fVar27 * (float)local_78._32_8_ + fVar28 * (float)local_78._40_8_ +
                            (float)local_78._48_8_);
        cVar13 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_90);
        if ((cVar13 != '\x01') || (param_3 <= local_a8)) goto LAB_001004e8;
        uVar15 = *(ulong *)(lVar21 + 0x18);
        pSVar24 = param_2 + (long)local_a8 * 0x20;
        *(ulong *)(pSVar24 + 8) = uVar15;
        if (uVar15 != 0) {
          uVar19 = (uint)uVar15 & 0xffffff;
          if (uVar19 < (uint)ObjectDB::slot_max) {
            while( true ) {
              LOCK();
              bVar26 = (char)ObjectDB::spin_lock == '\0';
              if (bVar26) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar26) break;
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar16 = (ulong *)((ulong)uVar19 * 0x10 + ObjectDB::object_slots);
            if ((uVar15 >> 0x18 & 0x7fffffffff) == (*puVar16 & 0x7fffffffff)) {
              uVar15 = puVar16[1];
              ObjectDB::spin_lock._0_1_ = '\0';
            }
            else {
              uVar15 = 0;
              ObjectDB::spin_lock._0_1_ = '\0';
            }
          }
          else {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
            uVar15 = 0;
          }
          *(ulong *)(pSVar24 + 0x10) = uVar15;
        }
        uVar3 = *(undefined8 *)(lVar21 + 0x10);
        local_a8 = local_a8 + 1;
        iVar25 = iVar25 + 1;
        *(int *)(pSVar24 + 0x18) = iVar17;
        *(undefined8 *)pSVar24 = uVar3;
      } while (iVar14 != iVar25);
      goto LAB_001004f7;
    }
  }
  local_a8 = 0;
LAB_001004f7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8;
}



/* GodotPhysicsDirectSpaceState2D::intersect_ray(PhysicsDirectSpaceState2D::RayParameters const&,
   PhysicsDirectSpaceState2D::RayResult&) */

undefined8 __thiscall
GodotPhysicsDirectSpaceState2D::intersect_ray
          (GodotPhysicsDirectSpaceState2D *this,RayParameters *param_1,RayResult *param_2)

{
  RayParameters RVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int local_13c;
  undefined8 local_100;
  undefined8 local_f8;
  float local_e4;
  char local_d5;
  int local_d4;
  long local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  Transform2D local_78 [8];
  Vector2 local_70 [24];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(*(long *)(this + 0x178) + 0x60e4) != '\0') {
    _err_print_error("intersect_ray","modules/godot_physics_2d/godot_space_2d.cpp",0x77,
                     "Condition \"space->locked\" is true. Returning: false",0,0);
    uVar15 = 0;
    goto LAB_00100c82;
  }
  local_b8 = *(undefined8 *)param_1;
  local_b0 = *(undefined8 *)(param_1 + 8);
  local_88 = 0;
  local_58[0] = CONCAT44((float)((ulong)local_b0 >> 0x20) - (float)((ulong)local_b8 >> 0x20),
                         (float)local_b0 - (float)local_b8);
  local_88 = Vector2::normalized();
  lVar21 = *(long *)(this + 0x178);
  iVar13 = (**(code **)(**(long **)(lVar21 + 0x38) + 0x38))
                     (*(long **)(lVar21 + 0x38),&local_b8,&local_b0,lVar21 + 0xd8,0x800,
                      lVar21 + 0x40d8);
  local_100 = 0;
  local_f8 = 0;
  if (0 < iVar13) {
    local_13c = 0;
    local_d0 = 0;
    local_d4 = -1;
    local_e4 = _LC16;
    local_d5 = '\0';
LAB_001008d0:
    RVar1 = param_1[0x3d];
    lVar21 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)local_13c * 8);
    if (((*(uint *)(param_1 + 0x38) & *(uint *)(lVar21 + 0x7c)) != 0) &&
       (((*(int *)(lVar21 + 8) != 0 && (RVar1 = param_1[0x3c], *(int *)(lVar21 + 8) != 1)) ||
        (RVar1 != (RayParameters)0x0)))) {
      if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
        uVar20 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x30) * 4)
                         );
        lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x30) * 8);
        uVar14 = *(long *)(lVar21 + 0x10) * 0x3ffff - 1;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = uVar14 >> 0x16 ^ uVar14;
        uVar25 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          uVar25 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar25 * lVar23;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar20;
        lVar17 = SUB168(auVar3 * auVar7,8);
        uVar18 = *(uint *)(*(long *)(param_1 + 0x28) + lVar17 * 4);
        iVar16 = SUB164(auVar3 * auVar7,8);
        if (uVar18 != 0) {
          uVar24 = 0;
          do {
            if (((uint)uVar25 == uVar18) &&
               (*(long *)(lVar21 + 0x10) ==
                *(long *)(*(long *)(param_1 + 0x10) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x18) + lVar17 * 4) * 8)))
            goto LAB_00100a50;
            uVar24 = uVar24 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar23;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar20;
            lVar17 = SUB168(auVar4 * auVar8,8);
            uVar18 = *(uint *)(*(long *)(param_1 + 0x28) + lVar17 * 4);
            iVar16 = SUB164(auVar4 * auVar8,8);
          } while ((uVar18 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar23, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
                  auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(param_1 + 0x30) * 4) + iVar16) -
                                        SUB164(auVar5 * auVar9,8)) * lVar23, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar20, uVar24 <= SUB164(auVar6 * auVar10,8)));
        }
      }
      iVar16 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)local_13c * 4);
      lVar17 = (long)iVar16;
      lVar23 = *(long *)(lVar21 + 0x38);
      if (iVar16 < 0) {
        if (lVar23 != 0) {
LAB_00100e15:
          lVar21 = *(long *)(lVar23 + -8);
          goto LAB_00100e19;
        }
      }
      else if (lVar23 != 0) {
        if (*(long *)(lVar23 + -8) <= lVar17) goto LAB_00100e15;
        Transform2D::operator*(local_78,(Transform2D *)(lVar23 + 0x18 + lVar17 * 0x58));
        lVar23 = *(long *)(lVar21 + 0x38);
        fVar27 = (float)((ulong)local_b8 >> 0x20);
        local_a8 = CONCAT44((float)local_b8 * local_78._4_4_ + fVar27 * SUB84(local_70._0_8_,4) +
                            SUB84(local_70._8_8_,4),
                            (float)local_b8 * local_78._0_4_ + fVar27 * (float)local_70._0_8_ +
                            (float)local_70._8_8_);
        fVar27 = (float)((ulong)local_b0 >> 0x20);
        local_a0 = CONCAT44((float)local_b0 * local_78._4_4_ + fVar27 * SUB84(local_70._0_8_,4) +
                            SUB84(local_70._8_8_,4),
                            (float)local_b0 * local_78._0_4_ + fVar27 * (float)local_70._0_8_ +
                            (float)local_70._8_8_);
        if (lVar23 == 0) {
          lVar22 = 0;
LAB_00100e82:
          _err_print_index_error
                    ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,lVar17,
                     lVar22,"p_index","shapes.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        lVar22 = *(long *)(lVar23 + -8);
        if (lVar22 <= lVar17) goto LAB_00100e82;
        plVar2 = *(long **)(lVar23 + 0x48 + lVar17 * 0x58);
        local_98 = 0;
        local_80 = 0;
        cVar12 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_a8);
        if (cVar12 == '\0') {
          cVar12 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_a8,&local_a0,&local_98);
          if (cVar12 != '\0') {
            if (*(long *)(lVar21 + 0x38) == 0) {
              lVar23 = 0;
LAB_00100f2c:
              _err_print_index_error
                        ("get_shape_transform",
                         "modules/godot_physics_2d/godot_collision_object_2d.h",0x79,lVar17,lVar23,
                         "p_index","shapes.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar11 = (code *)invalidInstructionException();
              (*pcVar11)();
            }
            lVar23 = *(long *)(*(long *)(lVar21 + 0x38) + -8);
            if (lVar23 <= lVar17) goto LAB_00100f2c;
            Transform2D::operator*((Transform2D *)local_58,(Transform2D *)(lVar21 + 0x48));
            fVar27 = (float)((ulong)local_98 >> 0x20);
            local_98 = CONCAT44(fVar27 * (float)((ulong)local_58[1] >> 0x20) +
                                (float)local_98 * (float)((ulong)local_58[0] >> 0x20) +
                                (float)((ulong)local_58[2] >> 0x20),
                                fVar27 * (float)local_58[1] + (float)local_98 * (float)local_58[0] +
                                (float)local_58[2]);
            fVar27 = (float)Vector2::dot((Vector2 *)&local_88);
            if (fVar27 < local_e4) {
              local_100 = local_98;
              uVar28 = Vector2::dot(local_70);
              uVar29 = Vector2::dot((Vector2 *)local_78);
              local_90 = CONCAT44(uVar28,uVar29);
              local_f8 = Vector2::normalized();
              local_e4 = fVar27;
              local_d5 = cVar12;
              local_d4 = iVar16;
              local_d0 = lVar21;
            }
          }
          goto LAB_00100a50;
        }
        if (param_1[0x3e] != (RayParameters)0x0) {
          local_f8 = 0;
          local_100 = local_b8;
          local_d0 = lVar21;
          local_d4 = iVar16;
          goto LAB_00100bd4;
        }
        goto LAB_00100a50;
      }
      lVar21 = 0;
LAB_00100e19:
      _err_print_index_error
                ("get_shape_inv_transform","modules/godot_physics_2d/godot_collision_object_2d.h",
                 0x7d,lVar17,lVar21,"p_index","shapes.size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar11 = (code *)invalidInstructionException();
      (*pcVar11)();
    }
LAB_00100a50:
    local_13c = local_13c + 1;
    if (iVar13 == local_13c) goto code_r0x00100a63;
    goto LAB_001008d0;
  }
  goto LAB_00100a73;
code_r0x00100a63:
  if (local_d5 != '\0') {
LAB_00100bd4:
    if (local_d0 == 0) {
      _err_print_error("intersect_ray","modules/godot_physics_2d/godot_space_2d.cpp",0xc2,
                       "Parameter \"res_obj\" is null.",0,0);
      uVar15 = 0;
    }
    else {
      uVar14 = *(ulong *)(local_d0 + 0x18);
      *(ulong *)(param_2 + 0x18) = uVar14;
      if (uVar14 != 0) {
        uVar18 = (uint)uVar14 & 0xffffff;
        if (uVar18 < (uint)ObjectDB::slot_max) {
          while( true ) {
            LOCK();
            bVar26 = (char)ObjectDB::spin_lock == '\0';
            if (bVar26) {
              ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar26) break;
            do {
            } while ((char)ObjectDB::spin_lock != '\0');
          }
          puVar19 = (ulong *)((ulong)uVar18 * 0x10 + ObjectDB::object_slots);
          if ((uVar14 >> 0x18 & 0x7fffffffff) == (*puVar19 & 0x7fffffffff)) {
            uVar14 = puVar19[1];
            ObjectDB::spin_lock._0_1_ = '\0';
          }
          else {
            uVar14 = 0;
            ObjectDB::spin_lock._0_1_ = '\0';
          }
        }
        else {
          _err_print_error("get_instance","./core/object/object.h",0x418,
                           "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
          uVar14 = 0;
        }
        *(ulong *)(param_2 + 0x20) = uVar14;
      }
      *(undefined8 *)(param_2 + 8) = local_f8;
      *(undefined8 *)param_2 = local_100;
      uVar15 = *(undefined8 *)(local_d0 + 0x10);
      *(int *)(param_2 + 0x28) = local_d4;
      *(undefined8 *)(param_2 + 0x10) = uVar15;
      uVar15 = 1;
    }
    goto LAB_00100c82;
  }
LAB_00100a73:
  uVar15 = 0;
LAB_00100c82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotPhysicsDirectSpaceState2D::rest_info(PhysicsDirectSpaceState2D::ShapeParameters const&,
   PhysicsDirectSpaceState2D::ShapeRestInfo*) */

undefined8 __thiscall
GodotPhysicsDirectSpaceState2D::rest_info
          (GodotPhysicsDirectSpaceState2D *this,ShapeParameters *param_1,ShapeRestInfo *param_2)

{
  GodotShape2D *pGVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Transform2D local_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_54;
  undefined8 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 == 0) {
LAB_001019b0:
    _err_print_error("rest_info","modules/godot_physics_2d/godot_space_2d.cpp",0x1bb,
                     "Parameter \"shape\" is null.",0,0);
  }
  else {
    uVar18 = *(ulong *)param_1;
    if (*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d4) <= (uint)uVar18) goto LAB_001019b0;
    puVar21 = (undefined8 *)
              (((uVar18 & 0xffffffff) %
               (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 0x10 +
              *(long *)(*(long *)(GodotPhysicsServer2D::godot_singleton + 0x1c0) +
                       ((uVar18 & 0xffffffff) /
                       (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 8));
    iVar17 = *(int *)(puVar21 + 1);
    if (iVar17 != (int)(uVar18 >> 0x20)) {
      if (iVar17 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
      goto LAB_001019b0;
    }
    pGVar1 = (GodotShape2D *)*puVar21;
    if (pGVar1 == (GodotShape2D *)0x0) goto LAB_001019b0;
    dVar31 = (double)*(float *)(param_1 + 0x28);
    fVar13 = *(float *)(param_1 + 0x28);
    if (dVar31 <= __LC30) {
      dVar31 = (double)_LC23;
      fVar13 = _LC23;
    }
    fVar33 = (float)*(undefined8 *)(pGVar1 + 0x10);
    fVar16 = (float)*(undefined8 *)(pGVar1 + 0x18);
    fVar35 = (float)((ulong)*(undefined8 *)(pGVar1 + 0x10) >> 0x20);
    fVar32 = (float)((ulong)*(undefined8 *)(pGVar1 + 0x18) >> 0x20);
    fVar34 = *(float *)(param_1 + 0x14) * fVar32;
    fVar30 = fVar33 * *(float *)(param_1 + 8) + fVar35 * *(float *)(param_1 + 0x10) +
             *(float *)(param_1 + 0x18);
    fVar32 = fVar32 * *(float *)(param_1 + 0x10);
    fVar33 = fVar33 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14) * fVar35 +
             *(float *)(param_1 + 0x1c);
    fVar35 = *(float *)(param_1 + 8) * fVar16 + fVar30;
    fVar36 = *(float *)(param_1 + 0xc) * fVar16 + fVar33;
    fVar16 = fVar35;
    if (fVar35 <= fVar30 + 0.0) {
      fVar16 = fVar30 + 0.0;
    }
    fVar14 = fVar35;
    if (fVar30 <= fVar35) {
      fVar14 = fVar30;
    }
    fVar38 = fVar36;
    if (fVar36 <= fVar33 + 0.0) {
      fVar38 = fVar33 + 0.0;
    }
    fVar30 = fVar30 + fVar32;
    fVar12 = fVar36;
    if (fVar33 <= fVar36) {
      fVar12 = fVar33;
    }
    fVar33 = fVar33 + fVar34;
    if ((fVar16 - fVar14 < 0.0) || (fVar38 - fVar12 < 0.0)) {
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
    }
    fVar37 = (fVar16 - fVar14) + fVar14;
    fVar38 = (fVar38 - fVar12) + fVar12;
    fVar16 = fVar30;
    if (fVar14 <= fVar30) {
      fVar16 = fVar14;
    }
    fVar32 = fVar32 + fVar35;
    fVar35 = fVar33;
    if (fVar12 <= fVar33) {
      fVar35 = fVar12;
    }
    fVar34 = fVar34 + fVar36;
    if (fVar30 <= fVar37) {
      fVar30 = fVar37;
    }
    if (fVar33 <= fVar38) {
      fVar33 = fVar38;
    }
    if ((fVar30 - fVar16 < 0.0) || (fVar33 - fVar35 < 0.0)) {
      _err_print_error("expand_to","./core/math/rect2.h",0x100,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
    }
    fVar30 = (fVar30 - fVar16) + fVar16;
    fVar33 = (fVar33 - fVar35) + fVar35;
    local_b8._0_4_ = fVar32;
    if (fVar16 <= fVar32) {
      local_b8._0_4_ = fVar16;
    }
    local_b8._4_4_ = fVar34;
    if (fVar35 <= fVar34) {
      local_b8._4_4_ = fVar35;
    }
    if (fVar32 <= fVar30) {
      fVar32 = fVar30;
    }
    if (fVar34 <= fVar33) {
      fVar34 = fVar33;
    }
    fVar33 = *(float *)(param_1 + 0x24) + local_b8._4_4_;
    fVar32 = fVar32 - (float)local_b8;
    fVar34 = fVar34 - local_b8._4_4_;
    fVar30 = *(float *)(param_1 + 0x20) + (float)local_b8;
    uStack_b0._0_4_ = fVar32;
    uStack_b0._4_4_ = fVar34;
    if ((fVar32 < 0.0) || (fVar34 < 0.0)) {
      _err_print_error("merge","./core/math/rect2.h",0xa8,
                       "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                       ,0,0);
    }
    fVar16 = fVar33;
    if (local_b8._4_4_ <= fVar33) {
      fVar16 = local_b8._4_4_;
    }
    fVar35 = fVar30;
    if ((float)local_b8 <= fVar30) {
      fVar35 = (float)local_b8;
    }
    plVar2 = *(long **)(*(long *)(this + 0x178) + 0x38);
    fVar36 = fVar30 + fVar32;
    if (fVar30 + fVar32 <= (float)local_b8 + (float)uStack_b0) {
      fVar36 = (float)local_b8 + (float)uStack_b0;
    }
    fVar30 = fVar33 + fVar34;
    if (fVar33 + fVar34 <= local_b8._4_4_ + uStack_b0._4_4_) {
      fVar30 = local_b8._4_4_ + uStack_b0._4_4_;
    }
    uStack_b0 = CONCAT44((fVar30 - fVar16) + fVar13 + fVar13,(fVar36 - fVar35) + fVar13 + fVar13);
    local_b8 = CONCAT44(fVar16 - fVar13,fVar35 - fVar13);
    iVar17 = (**(code **)(*plVar2 + 0x40))(plVar2,&local_b8,*(long *)(this + 0x178) + 0xd8,0x800);
    local_88 = (undefined1  [16])0x0;
    iVar23 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0.0;
    local_54 = 0;
    local_4c = 0;
    local_78 = (undefined1  [16])0x0;
    fVar30 = (float)Vector2::length();
    if ((float)(dVar31 * __LC35) <= fVar30) {
      fVar30 = (float)(dVar31 * __LC35);
    }
    local_4c = CONCAT44(fVar30,(undefined4)local_4c);
    if (0 < iVar17) {
      do {
        while( true ) {
          auVar15 = local_78;
          lVar27 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)iVar23 * 8);
          if ((*(uint *)(param_1 + 0x58) & *(uint *)(lVar27 + 0x7c)) != 0) break;
LAB_00101530:
          iVar23 = iVar23 + 1;
          if (iVar17 == iVar23) goto LAB_00101542;
        }
        if (*(int *)(lVar27 + 8) != 0) {
          if ((*(int *)(lVar27 + 8) != 1) || (param_1[0x5c] != (ShapeParameters)0x0))
          goto LAB_001013ea;
          goto LAB_00101530;
        }
        if (param_1[0x5d] == (ShapeParameters)0x0) goto LAB_00101530;
LAB_001013ea:
        if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
          uVar25 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_1 + 0x50) * 4));
          lVar26 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x50) * 8);
          uVar18 = *(long *)(lVar27 + 0x10) * 0x3ffff - 1;
          uVar18 = (uVar18 ^ uVar18 >> 0x1f) * 0x15;
          uVar18 = (uVar18 ^ uVar18 >> 0xb) * 0x41;
          uVar18 = uVar18 >> 0x16 ^ uVar18;
          uVar29 = uVar18 & 0xffffffff;
          if ((int)uVar18 == 0) {
            uVar29 = 1;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar29 * lVar26;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar25;
          lVar22 = SUB168(auVar3 * auVar7,8);
          uVar24 = *(uint *)(*(long *)(param_1 + 0x48) + lVar22 * 4);
          iVar20 = SUB164(auVar3 * auVar7,8);
          if (uVar24 != 0) {
            uVar28 = 0;
            do {
              if (((uint)uVar29 == uVar24) &&
                 (*(long *)(lVar27 + 0x10) ==
                  *(long *)(*(long *)(param_1 + 0x30) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0x38) + lVar22 * 4) * 8)))
              goto LAB_00101530;
              uVar28 = uVar28 + 1;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)(iVar20 + 1) * lVar26;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar25;
              lVar22 = SUB168(auVar4 * auVar8,8);
              uVar24 = *(uint *)(*(long *)(param_1 + 0x48) + lVar22 * 4);
              iVar20 = SUB164(auVar4 * auVar8,8);
            } while ((uVar24 != 0) &&
                    (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar24 * lVar26, auVar9._8_8_ = 0,
                    auVar9._0_8_ = uVar25, auVar6._8_8_ = 0,
                    auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_1 + 0x50) * 4) + iVar20)
                                          - SUB164(auVar5 * auVar9,8)) * lVar26, auVar10._8_8_ = 0,
                    auVar10._0_8_ = uVar25, uVar28 <= SUB164(auVar6 * auVar10,8)));
          }
        }
        local_54 = 0;
        local_88._0_8_ = lVar27;
        iVar20 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)iVar23 * 4);
        lVar22 = (long)iVar20;
        lVar26 = *(long *)(lVar27 + 0x38);
        local_78._0_8_ = local_78._4_8_ << 0x20;
        local_c0 = 0;
        local_78._12_4_ = auVar15._12_4_;
        local_78._8_4_ = iVar20;
        if (iVar20 < 0) {
          if (lVar26 != 0) {
LAB_00101729:
            lVar27 = *(long *)(lVar26 + -8);
            goto LAB_0010172d;
          }
LAB_0010184c:
          lVar27 = 0;
LAB_0010172d:
          _err_print_index_error
                    ("get_shape_transform","modules/godot_physics_2d/godot_collision_object_2d.h",
                     0x79,lVar22,lVar27,"p_index","shapes.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        if (lVar26 == 0) goto LAB_0010184c;
        if (*(long *)(lVar26 + -8) <= lVar22) goto LAB_00101729;
        Transform2D::operator*(local_a8,(Transform2D *)(lVar27 + 0x48));
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) {
          lVar26 = 0;
LAB_0010180b:
          _err_print_index_error
                    ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,lVar22,
                     lVar26,"p_index","shapes.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        lVar26 = *(long *)(lVar27 + -8);
        if (lVar26 <= lVar22) goto LAB_0010180b;
        iVar23 = iVar23 + 1;
        GodotCollisionSolver2D::solve
                  (pGVar1,(Transform2D *)(param_1 + 8),(Vector2 *)(param_1 + 0x20),
                   *(GodotShape2D **)(lVar27 + 0x48 + lVar22 * 0x58),local_a8,(Vector2 *)&local_c0,
                   _rest_cbk_result,local_88,(Vector2 *)0x0,fVar13,0.0);
      } while (iVar17 != iVar23);
    }
LAB_00101542:
    if ((local_58 != 0.0) && (local_88._8_8_ != 0)) {
      iVar17 = *(int *)(local_88._8_8_ + 8);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(local_88._8_8_ + 0x18);
      *(undefined4 *)(param_2 + 0x20) = local_78._12_4_;
      *(undefined8 *)(param_2 + 8) = local_60;
      *(undefined8 *)param_2 = local_68;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(local_88._8_8_ + 0x10);
      if (iVar17 == 1) {
        *(ulong *)(param_2 + 0x24) =
             CONCAT44(*(float *)(local_88._8_8_ + 0xc0) *
                      (*(float *)param_2 -
                      (*(float *)(local_88._8_8_ + 0x58) + *(float *)(local_88._8_8_ + 0x118))) +
                      (float)((ulong)*(undefined8 *)(local_88._8_8_ + 0xb8) >> 0x20),
                      (float)((uint)*(float *)(local_88._8_8_ + 0xc0) ^ __LC36) *
                      (*(float *)(param_2 + 4) -
                      (*(float *)(local_88._8_8_ + 0x5c) + *(float *)(local_88._8_8_ + 0x11c))) +
                      (float)*(undefined8 *)(local_88._8_8_ + 0xb8));
      }
      else {
        *(undefined8 *)(param_2 + 0x24) = 0;
      }
      uVar19 = 1;
      goto LAB_001015b6;
    }
  }
  uVar19 = 0;
LAB_001015b6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectSpaceState2D::cast_motion(PhysicsDirectSpaceState2D::ShapeParameters const&,
   float&, float&) */

undefined8 __thiscall
GodotPhysicsDirectSpaceState2D::cast_motion
          (GodotPhysicsDirectSpaceState2D *this,ShapeParameters *param_1,float *param_2,
          float *param_3)

{
  Transform2D *pTVar1;
  GodotShape2D *pGVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  float fVar14;
  char cVar15;
  float fVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  int iVar29;
  long in_FS_OFFSET;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float local_a4;
  float local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Transform2D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_1 != 0) {
    uVar18 = *(ulong *)param_1;
    if ((uint)uVar18 < *(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d4)) {
      puVar20 = (undefined8 *)
                (((uVar18 & 0xffffffff) %
                 (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 0x10 +
                *(long *)(*(long *)(GodotPhysicsServer2D::godot_singleton + 0x1c0) +
                         ((uVar18 & 0xffffffff) /
                         (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 8));
      iVar17 = *(int *)(puVar20 + 1);
      if (iVar17 == (int)(uVar18 >> 0x20)) {
        pGVar2 = (GodotShape2D *)*puVar20;
        if (pGVar2 != (GodotShape2D *)0x0) {
          fVar32 = (float)*(undefined8 *)(pGVar2 + 0x10);
          fVar40 = (float)*(undefined8 *)(pGVar2 + 0x18);
          fVar37 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x18) >> 0x20);
          fVar16 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x10) >> 0x20);
          fVar36 = fVar37 * *(float *)(param_1 + 0x14);
          fVar33 = fVar37 * *(float *)(param_1 + 0x10);
          fVar31 = fVar32 * *(float *)(param_1 + 8) + fVar16 * *(float *)(param_1 + 0x10) +
                   *(float *)(param_1 + 0x18);
          fVar32 = fVar32 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14) * fVar16 +
                   *(float *)(param_1 + 0x1c);
          fVar38 = fVar40 * *(float *)(param_1 + 8) + fVar31;
          fVar40 = *(float *)(param_1 + 0xc) * fVar40 + fVar32;
          fVar16 = fVar38;
          if (fVar38 <= fVar31 + 0.0) {
            fVar16 = fVar31 + 0.0;
          }
          fVar35 = fVar38;
          if (fVar31 <= fVar38) {
            fVar35 = fVar31;
          }
          fVar42 = fVar40;
          if (fVar40 <= fVar32 + 0.0) {
            fVar42 = fVar32 + 0.0;
          }
          fVar31 = fVar31 + fVar33;
          fVar14 = fVar40;
          if (fVar32 <= fVar40) {
            fVar14 = fVar32;
          }
          fVar32 = fVar32 + fVar36;
          if ((fVar16 - fVar35 < 0.0) || (fVar42 - fVar14 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar37 = 0.0;
          }
          fVar41 = (fVar16 - fVar35) + fVar35;
          fVar42 = (fVar42 - fVar14) + fVar14;
          fVar16 = fVar31;
          if (fVar35 <= fVar31) {
            fVar16 = fVar35;
          }
          fVar33 = fVar33 + fVar38;
          fVar38 = fVar32;
          if (fVar14 <= fVar32) {
            fVar38 = fVar14;
          }
          fVar36 = fVar36 + fVar40;
          if (fVar31 <= fVar41) {
            fVar31 = fVar41;
          }
          if (fVar32 <= fVar42) {
            fVar32 = fVar42;
          }
          if ((fVar31 - fVar16 < 0.0) || (fVar32 - fVar38 < 0.0)) {
            _err_print_error("expand_to","./core/math/rect2.h",0x100,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
            fVar37 = 0.0;
          }
          fVar31 = (fVar31 - fVar16) + fVar16;
          fVar32 = (fVar32 - fVar38) + fVar38;
          local_68._0_4_ = fVar33;
          if (fVar16 <= fVar33) {
            local_68._0_4_ = fVar16;
          }
          auVar39._4_4_ = fVar37;
          auVar39._0_4_ = fVar36;
          auVar39._8_4_ = fVar37;
          auVar39._12_4_ = fVar37;
          if (fVar38 <= fVar36) {
            auVar39._0_4_ = fVar38;
          }
          local_68._4_4_ = auVar39._0_4_;
          if (fVar33 <= fVar31) {
            fVar33 = fVar31;
          }
          if (fVar36 <= fVar32) {
            fVar36 = fVar32;
          }
          fVar33 = fVar33 - (float)local_68;
          fVar36 = fVar36 - local_68._4_4_;
          fVar32 = local_68._4_4_ + *(float *)(param_1 + 0x24);
          fVar31 = *(float *)(param_1 + 0x20) + (float)local_68;
          uStack_60._4_4_ = fVar36;
          uStack_60._0_4_ = fVar33;
          if ((fVar33 < 0.0) || (fVar36 < 0.0)) {
            _err_print_error("merge","./core/math/rect2.h",0xa8,
                             "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                             ,0,0);
          }
          fVar16 = fVar32;
          if (local_68._4_4_ <= fVar32) {
            fVar16 = local_68._4_4_;
          }
          fVar40 = fVar31;
          if ((float)local_68 <= fVar31) {
            fVar40 = (float)local_68;
          }
          fVar37 = *(float *)(param_1 + 0x28);
          fVar38 = fVar32 + fVar36;
          if (fVar32 + fVar36 <= local_68._4_4_ + uStack_60._4_4_) {
            fVar38 = local_68._4_4_ + uStack_60._4_4_;
          }
          plVar3 = *(long **)(*(long *)(this + 0x178) + 0x38);
          fVar32 = fVar31 + fVar33;
          if (fVar31 + fVar33 <= (float)uStack_60 + (float)local_68) {
            fVar32 = (float)uStack_60 + (float)local_68;
          }
          uStack_60 = CONCAT44((fVar38 - fVar16) + fVar37 + fVar37,
                               (fVar32 - fVar40) + fVar37 + fVar37);
          local_68 = CONCAT44(fVar16 - fVar37,fVar40 - fVar37);
          iVar17 = (**(code **)(*plVar3 + 0x40))
                             (plVar3,&local_68,*(long *)(this + 0x178) + 0xd8,0x800);
          local_90 = _LC40;
          local_a4 = _LC40;
          if (0 < iVar17) {
            iVar29 = 0;
            do {
              while( true ) {
                lVar26 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)iVar29 * 8);
                if ((*(uint *)(param_1 + 0x58) & *(uint *)(lVar26 + 0x7c)) != 0) break;
LAB_00101f40:
                iVar29 = iVar29 + 1;
                if (iVar17 == iVar29) goto LAB_00101f65;
              }
              if (*(int *)(lVar26 + 8) != 0) {
                if ((*(int *)(lVar26 + 8) != 1) || (param_1[0x5c] != (ShapeParameters)0x0))
                goto LAB_00101dfa;
                goto LAB_00101f40;
              }
              if (param_1[0x5d] == (ShapeParameters)0x0) goto LAB_00101f40;
LAB_00101dfa:
              if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
                uVar24 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                             (ulong)*(uint *)(param_1 + 0x50) * 4));
                lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0x50) * 8)
                ;
                uVar18 = *(long *)(lVar26 + 0x10) * 0x3ffff - 1;
                uVar18 = (uVar18 ^ uVar18 >> 0x1f) * 0x15;
                uVar18 = (uVar18 ^ uVar18 >> 0xb) * 0x41;
                uVar18 = uVar18 >> 0x16 ^ uVar18;
                uVar28 = uVar18 & 0xffffffff;
                if ((int)uVar18 == 0) {
                  uVar28 = 1;
                }
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar28 * lVar4;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar24;
                lVar21 = SUB168(auVar5 * auVar9,8);
                uVar30 = *(uint *)(*(long *)(param_1 + 0x48) + lVar21 * 4);
                iVar22 = SUB164(auVar5 * auVar9,8);
                if (uVar30 != 0) {
                  uVar27 = 0;
                  do {
                    if ((uVar30 == (uint)uVar28) &&
                       (*(long *)(lVar26 + 0x10) ==
                        *(long *)(*(long *)(param_1 + 0x30) +
                                 (ulong)*(uint *)(*(long *)(param_1 + 0x38) + lVar21 * 4) * 8)))
                    goto LAB_00101f40;
                    uVar27 = uVar27 + 1;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = (ulong)(iVar22 + 1) * lVar4;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = uVar24;
                    lVar21 = SUB168(auVar6 * auVar10,8);
                    uVar30 = *(uint *)(*(long *)(param_1 + 0x48) + lVar21 * 4);
                    iVar22 = SUB164(auVar6 * auVar10,8);
                  } while ((uVar30 != 0) &&
                          (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar30 * lVar4, auVar11._8_8_ = 0
                          , auVar11._0_8_ = uVar24, auVar8._8_8_ = 0,
                          auVar8._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                           (ulong)*(uint *)(param_1 + 0x50) * 4) +
                                                 iVar22) - SUB164(auVar7 * auVar11,8)) * lVar4,
                          auVar12._8_8_ = 0, auVar12._0_8_ = uVar24,
                          uVar27 <= SUB164(auVar8 * auVar12,8)));
                }
              }
              iVar22 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)iVar29 * 4);
              lVar21 = (long)iVar22;
              lVar4 = *(long *)(lVar26 + 0x38);
              if (iVar22 < 0) {
                if (lVar4 != 0) {
LAB_00102311:
                  lVar26 = *(long *)(lVar4 + -8);
                  goto LAB_00102315;
                }
LAB_00102403:
                lVar26 = 0;
LAB_00102315:
                _err_print_index_error
                          ("get_shape_transform",
                           "modules/godot_physics_2d/godot_collision_object_2d.h",0x79,lVar21,lVar26
                           ,"p_index","shapes.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar13 = (code *)invalidInstructionException();
                (*pcVar13)();
              }
              if (lVar4 == 0) goto LAB_00102403;
              if (*(long *)(lVar4 + -8) <= lVar21) goto LAB_00102311;
              lVar23 = lVar21 * 0x58;
              Transform2D::operator*(local_58,(Transform2D *)(lVar26 + 0x48));
              lVar4 = *(long *)(lVar26 + 0x38);
              local_70 = 0;
              if (lVar4 == 0) {
LAB_001022c0:
                lVar25 = 0;
LAB_001022c3:
                local_70 = 0;
                _err_print_index_error
                          ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,
                           lVar21,lVar25,"p_index","shapes.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar13 = (code *)invalidInstructionException();
                (*pcVar13)();
              }
              lVar25 = *(long *)(lVar4 + -8);
              if (lVar25 <= lVar21) goto LAB_001022c3;
              pTVar1 = (Transform2D *)(param_1 + 8);
              cVar15 = GodotCollisionSolver2D::solve
                                 (pGVar2,pTVar1,(Vector2 *)(param_1 + 0x20),
                                  *(GodotShape2D **)(lVar4 + 0x48 + lVar23),local_58,
                                  (Vector2 *)&local_70,
                                  (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,(void *)0x0,
                                  (Vector2 *)0x0,*(float *)(param_1 + 0x28),0.0);
              if (cVar15 == '\0') goto LAB_00101f40;
              lVar4 = *(long *)(lVar26 + 0x38);
              local_70 = 0;
              if (lVar4 == 0) goto LAB_001022c0;
              lVar25 = *(long *)(lVar4 + -8);
              if (lVar25 <= lVar21) goto LAB_001022c3;
              local_78 = 0;
              cVar15 = GodotCollisionSolver2D::solve
                                 (pGVar2,pTVar1,(Vector2 *)&local_78,
                                  *(GodotShape2D **)(lVar4 + 0x48 + lVar23),local_58,
                                  (Vector2 *)&local_70,
                                  (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,(void *)0x0,
                                  (Vector2 *)0x0,*(float *)(param_1 + 0x28),0.0);
              if (cVar15 != '\0') goto LAB_00101f40;
              uVar19 = Vector2::normalized();
              iVar22 = 0;
              auVar34 = (undefined1  [16])0x0;
              fVar31 = _LC40;
              fVar32 = _LC41;
              do {
                while( true ) {
                  local_70 = 0;
                  fVar36 = auVar34._0_4_;
                  lVar4 = *(long *)(lVar26 + 0x38);
                  fVar32 = (fVar31 - fVar36) * fVar32 + fVar36;
                  local_78 = uVar19;
                  if (lVar4 == 0) goto LAB_001022c0;
                  lVar25 = *(long *)(lVar4 + -8);
                  if (lVar25 <= lVar21) goto LAB_001022c3;
                  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) *
                                      fVar32,(float)*(undefined8 *)(param_1 + 0x20) * fVar32);
                  cVar15 = GodotCollisionSolver2D::solve
                                     (pGVar2,pTVar1,(Vector2 *)&local_80,
                                      *(GodotShape2D **)(lVar4 + 0x48 + lVar23),local_58,
                                      (Vector2 *)&local_70,
                                      (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,(void *)0x0
                                      ,(Vector2 *)&local_78,*(float *)(param_1 + 0x28),0.0);
                  if (cVar15 == '\0') break;
                  auVar34 = ZEXT416((uint)fVar36);
                  fVar31 = fVar32;
                  if (iVar22 == 0) {
LAB_00102359:
                    iVar22 = 1;
                    fVar32 = _LC41;
                  }
                  else {
                    fVar32 = _LC42;
                    if (0.0 < fVar36) {
LAB_00102227:
                      fVar32 = _LC41;
                    }
                    iVar22 = iVar22 + 1;
                    if (iVar22 == 8) goto LAB_00102233;
                  }
                }
                if (iVar22 == 0) {
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = CONCAT44(0,fVar32);
                  goto LAB_00102359;
                }
                auVar34._8_8_ = 0;
                auVar34._0_8_ = CONCAT44(0,fVar32);
                if (fVar31 < _LC40) goto LAB_00102227;
                iVar22 = iVar22 + 1;
                fVar32 = _LC43;
              } while (iVar22 != 8);
LAB_00102233:
              uVar30 = -(uint)(auVar34._0_4_ < local_a4);
              if (local_a4 <= auVar34._0_4_) {
                auVar34._4_12_ = auVar34._4_12_;
                auVar34._0_4_ = local_a4;
              }
              iVar29 = iVar29 + 1;
              local_a4 = auVar34._0_4_;
              local_90 = (float)(~uVar30 & (uint)local_90 | (uint)fVar31 & uVar30);
            } while (iVar17 != iVar29);
          }
LAB_00101f65:
          *param_2 = local_a4;
          uVar19 = 1;
          *param_3 = local_90;
          goto LAB_00101f74;
        }
      }
      else if (iVar17 + 0x80000000U < 0x7fffffff) {
        _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                         "Method/function failed. Returning: nullptr",
                         "Attempting to use an uninitialized RID",0,0);
      }
    }
  }
  _err_print_error("cast_motion","modules/godot_physics_2d/godot_space_2d.cpp",0x103,
                   "Parameter \"shape\" is null.",0,0);
  uVar19 = 0;
LAB_00101f74:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}



/* GodotPhysicsDirectSpaceState2D::collide_shape(PhysicsDirectSpaceState2D::ShapeParameters const&,
   Vector2*, int, int&) */

bool __thiscall
GodotPhysicsDirectSpaceState2D::collide_shape
          (GodotPhysicsDirectSpaceState2D *this,ShapeParameters *param_1,Vector2 *param_2,
          int param_3,int *param_4)

{
  ShapeParameters SVar1;
  GodotShape2D *pGVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  float fVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  int iVar28;
  long in_FS_OFFSET;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  bool local_b4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Transform2D local_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  Vector2 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < param_3) {
    if (*(long *)param_1 != 0) {
      uVar18 = *(ulong *)param_1;
      if ((uint)uVar18 < *(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d4)) {
        puVar20 = (undefined8 *)
                  (((uVar18 & 0xffffffff) %
                   (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 0x10 +
                  *(long *)(*(long *)(GodotPhysicsServer2D::godot_singleton + 0x1c0) +
                           ((uVar18 & 0xffffffff) /
                           (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 8));
        iVar17 = *(int *)(puVar20 + 1);
        if (iVar17 == (int)(uVar18 >> 0x20)) {
          pGVar2 = (GodotShape2D *)*puVar20;
          if (pGVar2 != (GodotShape2D *)0x0) {
            fVar30 = (float)*(undefined8 *)(pGVar2 + 0x10);
            fVar34 = (float)*(undefined8 *)(pGVar2 + 0x18);
            fVar16 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x10) >> 0x20);
            fVar31 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x18) >> 0x20);
            fVar32 = *(float *)(param_1 + 0x14) * fVar31;
            fVar29 = fVar30 * *(float *)(param_1 + 8) + fVar16 * *(float *)(param_1 + 0x10) +
                     *(float *)(param_1 + 0x18);
            fVar31 = fVar31 * *(float *)(param_1 + 0x10);
            fVar30 = fVar30 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14) * fVar16 +
                     *(float *)(param_1 + 0x1c);
            fVar33 = fVar34 * *(float *)(param_1 + 8) + fVar29;
            fVar34 = *(float *)(param_1 + 0xc) * fVar34 + fVar30;
            fVar16 = fVar33;
            if (fVar33 <= fVar29 + 0.0) {
              fVar16 = fVar29 + 0.0;
            }
            fVar13 = fVar33;
            if (fVar29 <= fVar33) {
              fVar13 = fVar29;
            }
            fVar36 = fVar34;
            if (fVar34 <= fVar30 + 0.0) {
              fVar36 = fVar30 + 0.0;
            }
            fVar29 = fVar29 + fVar31;
            fVar14 = fVar34;
            if (fVar30 <= fVar34) {
              fVar14 = fVar30;
            }
            fVar30 = fVar30 + fVar32;
            if ((fVar16 - fVar13 < 0.0) || (fVar36 - fVar14 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar35 = (fVar16 - fVar13) + fVar13;
            fVar36 = (fVar36 - fVar14) + fVar14;
            fVar16 = fVar29;
            if (fVar13 <= fVar29) {
              fVar16 = fVar13;
            }
            fVar31 = fVar31 + fVar33;
            fVar33 = fVar30;
            if (fVar14 <= fVar30) {
              fVar33 = fVar14;
            }
            fVar32 = fVar32 + fVar34;
            if (fVar29 <= fVar35) {
              fVar29 = fVar35;
            }
            if (fVar30 <= fVar36) {
              fVar30 = fVar36;
            }
            if ((fVar29 - fVar16 < 0.0) || (fVar30 - fVar33 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar29 = (fVar29 - fVar16) + fVar16;
            fVar30 = (fVar30 - fVar33) + fVar33;
            local_98._0_4_ = fVar31;
            if (fVar16 <= fVar31) {
              local_98._0_4_ = fVar16;
            }
            local_98._4_4_ = fVar32;
            if (fVar33 <= fVar32) {
              local_98._4_4_ = fVar33;
            }
            if (fVar31 <= fVar29) {
              fVar31 = fVar29;
            }
            if (fVar32 <= fVar30) {
              fVar32 = fVar30;
            }
            fVar31 = fVar31 - (float)local_98;
            fVar32 = fVar32 - local_98._4_4_;
            fVar30 = *(float *)(param_1 + 0x24) + local_98._4_4_;
            fVar29 = *(float *)(param_1 + 0x20) + (float)local_98;
            uStack_90._0_4_ = fVar31;
            uStack_90._4_4_ = fVar32;
            if ((fVar31 < 0.0) || (fVar32 < 0.0)) {
              _err_print_error("merge","./core/math/rect2.h",0xa8,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar16 = fVar30;
            if (local_98._4_4_ <= fVar30) {
              fVar16 = local_98._4_4_;
            }
            fVar34 = fVar29;
            if ((float)local_98 <= fVar29) {
              fVar34 = (float)local_98;
            }
            fVar33 = fVar30 + fVar32;
            if (fVar30 + fVar32 <= local_98._4_4_ + uStack_90._4_4_) {
              fVar33 = local_98._4_4_ + uStack_90._4_4_;
            }
            plVar3 = *(long **)(*(long *)(this + 0x178) + 0x38);
            fVar30 = fVar29 + fVar31;
            if (fVar29 + fVar31 <= (float)local_98 + (float)uStack_90) {
              fVar30 = (float)local_98 + (float)uStack_90;
            }
            fVar29 = *(float *)(param_1 + 0x28);
            uStack_90 = CONCAT44((fVar33 - fVar16) + fVar29 + fVar29,
                                 (fVar30 - fVar34) + fVar29 + fVar29);
            local_98 = CONCAT44(fVar16 - fVar29,fVar34 - fVar29);
            iVar17 = (**(code **)(*plVar3 + 0x40))
                               (plVar3,&local_98,*(long *)(this + 0x178) + 0xd8,0x800);
            *param_4 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            local_5c = param_3;
            local_48 = param_2;
            if (iVar17 < 1) {
              local_b4 = false;
              local_58._0_4_ = 0;
            }
            else {
              local_b4 = false;
              iVar28 = 0;
              do {
                SVar1 = param_1[0x5d];
                lVar24 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)iVar28 * 8);
                if (((*(uint *)(param_1 + 0x58) & *(uint *)(lVar24 + 0x7c)) != 0) &&
                   (((*(int *)(lVar24 + 8) != 0 &&
                     (SVar1 = param_1[0x5c], *(int *)(lVar24 + 8) != 1)) ||
                    (SVar1 != (ShapeParameters)0x0)))) {
                  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
                    uVar23 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_1 + 0x50) * 4));
                    lVar25 = *(long *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(param_1 + 0x50) * 8);
                    uVar18 = *(long *)(lVar24 + 0x10) * 0x3ffff - 1;
                    uVar18 = (uVar18 ^ uVar18 >> 0x1f) * 0x15;
                    uVar18 = (uVar18 ^ uVar18 >> 0xb) * 0x41;
                    uVar18 = uVar18 >> 0x16 ^ uVar18;
                    uVar27 = uVar18 & 0xffffffff;
                    if ((int)uVar18 == 0) {
                      uVar27 = 1;
                    }
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = uVar27 * lVar25;
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = uVar23;
                    lVar21 = SUB168(auVar4 * auVar8,8);
                    uVar22 = *(uint *)(*(long *)(param_1 + 0x48) + lVar21 * 4);
                    iVar19 = SUB164(auVar4 * auVar8,8);
                    if (uVar22 != 0) {
                      uVar26 = 0;
                      do {
                        if ((uVar22 == (uint)uVar27) &&
                           (*(long *)(lVar24 + 0x10) ==
                            *(long *)(*(long *)(param_1 + 0x30) +
                                     (ulong)*(uint *)(*(long *)(param_1 + 0x38) + lVar21 * 4) * 8)))
                        goto LAB_00102aa0;
                        uVar26 = uVar26 + 1;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = (ulong)(iVar19 + 1) * lVar25;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar23;
                        lVar21 = SUB168(auVar5 * auVar9,8);
                        uVar22 = *(uint *)(*(long *)(param_1 + 0x48) + lVar21 * 4);
                        iVar19 = SUB164(auVar5 * auVar9,8);
                      } while ((uVar22 != 0) &&
                              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar22 * lVar25,
                              auVar10._8_8_ = 0, auVar10._0_8_ = uVar23, auVar7._8_8_ = 0,
                              auVar7._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                               (ulong)*(uint *)(param_1 + 0x50) * 4)
                                                     + iVar19) - SUB164(auVar6 * auVar10,8)) *
                                             lVar25, auVar11._8_8_ = 0, auVar11._0_8_ = uVar23,
                              uVar26 <= SUB164(auVar7 * auVar11,8)));
                    }
                  }
                  fVar29 = *(float *)(param_1 + 0x28);
                  local_68 = 0;
                  local_60 = 0;
                  iVar19 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)iVar28 * 4);
                  lVar21 = (long)iVar19;
                  lVar25 = *(long *)(lVar24 + 0x38);
                  local_a0 = 0;
                  if (iVar19 < 0) {
                    if (lVar25 != 0) {
LAB_00102c19:
                      lVar24 = *(long *)(lVar25 + -8);
                      goto LAB_00102c1d;
                    }
                  }
                  else if (lVar25 != 0) {
                    if (*(long *)(lVar25 + -8) <= lVar21) goto LAB_00102c19;
                    Transform2D::operator*(local_88,(Transform2D *)(lVar24 + 0x48));
                    lVar24 = *(long *)(lVar24 + 0x38);
                    if (lVar24 == 0) {
                      lVar25 = 0;
LAB_00102d52:
                      _err_print_index_error
                                ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",
                                 0x75,lVar21,lVar25,"p_index","shapes.size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar12 = (code *)invalidInstructionException();
                      (*pcVar12)();
                    }
                    lVar25 = *(long *)(lVar24 + -8);
                    if (lVar25 <= lVar21) goto LAB_00102d52;
                    cVar15 = GodotCollisionSolver2D::solve
                                       (pGVar2,(Transform2D *)(param_1 + 8),
                                        (Vector2 *)(param_1 + 0x20),
                                        *(GodotShape2D **)(lVar24 + 0x48 + lVar21 * 0x58),local_88,
                                        (Vector2 *)&local_a0,
                                        (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)
                                        _GLOBAL_OFFSET_TABLE_,&local_68,(Vector2 *)0x0,fVar29,0.0);
                    if (cVar15 != '\0') {
                      local_b4 = 0 < (int)local_58;
                    }
                    goto LAB_00102aa0;
                  }
                  lVar24 = 0;
LAB_00102c1d:
                  _err_print_index_error
                            ("get_shape_transform",
                             "modules/godot_physics_2d/godot_collision_object_2d.h",0x79,lVar21,
                             lVar24,"p_index","shapes.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar12 = (code *)invalidInstructionException();
                  (*pcVar12)();
                }
LAB_00102aa0:
                iVar28 = iVar28 + 1;
              } while (iVar17 != iVar28);
            }
            *param_4 = (int)local_58;
            goto LAB_00102abf;
          }
        }
        else if (iVar17 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("collide_shape","modules/godot_physics_2d/godot_space_2d.cpp",0x15a,
                     "Parameter \"shape\" is null.",0,0);
  }
  local_b4 = false;
LAB_00102abf:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_b4;
}



/* GodotPhysicsDirectSpaceState2D::intersect_shape(PhysicsDirectSpaceState2D::ShapeParameters
   const&, PhysicsDirectSpaceState2D::ShapeResult*, int) */

int __thiscall
GodotPhysicsDirectSpaceState2D::intersect_shape
          (GodotPhysicsDirectSpaceState2D *this,ShapeParameters *param_1,ShapeResult *param_2,
          int param_3)

{
  ShapeParameters SVar1;
  GodotShape2D *pGVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  float fVar15;
  float fVar16;
  char cVar17;
  float fVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  undefined8 *puVar22;
  long lVar23;
  ShapeResult *pSVar24;
  uint uVar25;
  ulong *puVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  long in_FS_OFFSET;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  int local_d4;
  int local_c8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  Transform2D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < param_3) {
    if (*(long *)param_1 != 0) {
      uVar20 = *(ulong *)param_1;
      if ((uint)uVar20 < *(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d4)) {
        puVar22 = (undefined8 *)
                  (((uVar20 & 0xffffffff) %
                   (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 0x10 +
                  *(long *)(*(long *)(GodotPhysicsServer2D::godot_singleton + 0x1c0) +
                           ((uVar20 & 0xffffffff) /
                           (ulong)*(uint *)(GodotPhysicsServer2D::godot_singleton + 0x1d0)) * 8));
        iVar19 = *(int *)(puVar22 + 1);
        if (iVar19 == (int)(uVar20 >> 0x20)) {
          pGVar2 = (GodotShape2D *)*puVar22;
          if (pGVar2 != (GodotShape2D *)0x0) {
            fVar34 = (float)*(undefined8 *)(pGVar2 + 0x10);
            fVar38 = (float)*(undefined8 *)(pGVar2 + 0x18);
            fVar18 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x10) >> 0x20);
            fVar35 = (float)((ulong)*(undefined8 *)(pGVar2 + 0x18) >> 0x20);
            fVar36 = *(float *)(param_1 + 0x14) * fVar35;
            fVar33 = fVar34 * *(float *)(param_1 + 8) + fVar18 * *(float *)(param_1 + 0x10) +
                     *(float *)(param_1 + 0x18);
            fVar35 = fVar35 * *(float *)(param_1 + 0x10);
            fVar34 = fVar34 * *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x14) * fVar18 +
                     *(float *)(param_1 + 0x1c);
            fVar37 = fVar38 * *(float *)(param_1 + 8) + fVar33;
            fVar38 = *(float *)(param_1 + 0xc) * fVar38 + fVar34;
            fVar18 = fVar37;
            if (fVar37 <= fVar33 + 0.0) {
              fVar18 = fVar33 + 0.0;
            }
            fVar15 = fVar37;
            if (fVar33 <= fVar37) {
              fVar15 = fVar33;
            }
            fVar40 = fVar38;
            if (fVar38 <= fVar34 + 0.0) {
              fVar40 = fVar34 + 0.0;
            }
            fVar33 = fVar33 + fVar35;
            fVar16 = fVar38;
            if (fVar34 <= fVar38) {
              fVar16 = fVar34;
            }
            fVar34 = fVar34 + fVar36;
            if ((fVar18 - fVar15 < 0.0) || (fVar40 - fVar16 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar39 = (fVar18 - fVar15) + fVar15;
            fVar40 = (fVar40 - fVar16) + fVar16;
            fVar18 = fVar33;
            if (fVar15 <= fVar33) {
              fVar18 = fVar15;
            }
            fVar35 = fVar35 + fVar37;
            fVar37 = fVar34;
            if (fVar16 <= fVar34) {
              fVar37 = fVar16;
            }
            fVar36 = fVar36 + fVar38;
            if (fVar33 <= fVar39) {
              fVar33 = fVar39;
            }
            if (fVar34 <= fVar40) {
              fVar34 = fVar40;
            }
            if ((fVar33 - fVar18 < 0.0) || (fVar34 - fVar37 < 0.0)) {
              _err_print_error("expand_to","./core/math/rect2.h",0x100,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar33 = (fVar33 - fVar18) + fVar18;
            fVar34 = (fVar34 - fVar37) + fVar37;
            local_68._0_4_ = fVar35;
            if (fVar18 <= fVar35) {
              local_68._0_4_ = fVar18;
            }
            local_68._4_4_ = fVar36;
            if (fVar37 <= fVar36) {
              local_68._4_4_ = fVar37;
            }
            if (fVar35 <= fVar33) {
              fVar35 = fVar33;
            }
            if (fVar36 <= fVar34) {
              fVar36 = fVar34;
            }
            fVar35 = fVar35 - (float)local_68;
            fVar36 = fVar36 - local_68._4_4_;
            fVar34 = *(float *)(param_1 + 0x24) + local_68._4_4_;
            fVar33 = *(float *)(param_1 + 0x20) + (float)local_68;
            uStack_60._0_4_ = fVar35;
            uStack_60._4_4_ = fVar36;
            if ((fVar35 < 0.0) || (fVar36 < 0.0)) {
              _err_print_error("merge","./core/math/rect2.h",0xa8,
                               "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                               ,0,0);
            }
            fVar18 = fVar34;
            if (local_68._4_4_ <= fVar34) {
              fVar18 = local_68._4_4_;
            }
            fVar38 = fVar33;
            if ((float)local_68 <= fVar33) {
              fVar38 = (float)local_68;
            }
            fVar37 = fVar34 + fVar36;
            if (fVar34 + fVar36 <= local_68._4_4_ + uStack_60._4_4_) {
              fVar37 = local_68._4_4_ + uStack_60._4_4_;
            }
            plVar3 = *(long **)(*(long *)(this + 0x178) + 0x38);
            fVar34 = fVar33 + fVar35;
            if (fVar33 + fVar35 <= (float)local_68 + (float)uStack_60) {
              fVar34 = (float)local_68 + (float)uStack_60;
            }
            fVar33 = *(float *)(param_1 + 0x28);
            uStack_60 = CONCAT44((fVar37 - fVar18) + fVar33 + fVar33,
                                 (fVar34 - fVar38) + fVar33 + fVar33);
            local_68 = CONCAT44(fVar18 - fVar33,fVar38 - fVar33);
            iVar19 = (**(code **)(*plVar3 + 0x40))
                               (plVar3,&local_68,*(long *)(this + 0x178) + 0xd8,0x800);
            if (0 < iVar19) {
              local_d4 = 0;
              local_c8 = 0;
              do {
                SVar1 = param_1[0x5d];
                lVar28 = *(long *)(*(long *)(this + 0x178) + 0xd8 + (long)local_d4 * 8);
                if (((*(uint *)(param_1 + 0x58) & *(uint *)(lVar28 + 0x7c)) != 0) &&
                   (((*(int *)(lVar28 + 8) != 0 &&
                     (SVar1 = param_1[0x5c], *(int *)(lVar28 + 8) != 1)) ||
                    (SVar1 != (ShapeParameters)0x0)))) {
                  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x54) != 0)) {
                    uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_1 + 0x50) * 4));
                    lVar4 = *(long *)(hash_table_size_primes_inv +
                                     (ulong)*(uint *)(param_1 + 0x50) * 8);
                    uVar20 = *(long *)(lVar28 + 0x10) * 0x3ffff - 1;
                    uVar20 = (uVar20 ^ uVar20 >> 0x1f) * 0x15;
                    uVar20 = (uVar20 ^ uVar20 >> 0xb) * 0x41;
                    uVar20 = uVar20 >> 0x16 ^ uVar20;
                    uVar31 = uVar20 & 0xffffffff;
                    if ((int)uVar20 == 0) {
                      uVar31 = 1;
                    }
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar31 * lVar4;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = uVar27;
                    lVar23 = SUB168(auVar6 * auVar10,8);
                    uVar25 = *(uint *)(*(long *)(param_1 + 0x48) + lVar23 * 4);
                    iVar21 = SUB164(auVar6 * auVar10,8);
                    if (uVar25 != 0) {
                      uVar30 = 0;
                      do {
                        if ((uVar25 == (uint)uVar31) &&
                           (*(long *)(lVar28 + 0x10) ==
                            *(long *)(*(long *)(param_1 + 0x30) +
                                     (ulong)*(uint *)(*(long *)(param_1 + 0x38) + lVar23 * 4) * 8)))
                        goto LAB_00103370;
                        uVar30 = uVar30 + 1;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = (ulong)(iVar21 + 1) * lVar4;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = uVar27;
                        lVar23 = SUB168(auVar7 * auVar11,8);
                        uVar25 = *(uint *)(*(long *)(param_1 + 0x48) + lVar23 * 4);
                        iVar21 = SUB164(auVar7 * auVar11,8);
                      } while ((uVar25 != 0) &&
                              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar25 * lVar4,
                              auVar12._8_8_ = 0, auVar12._0_8_ = uVar27, auVar9._8_8_ = 0,
                              auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                               (ulong)*(uint *)(param_1 + 0x50) * 4)
                                                     + iVar21) - SUB164(auVar8 * auVar12,8)) * lVar4
                              , auVar13._8_8_ = 0, auVar13._0_8_ = uVar27,
                              uVar30 <= SUB164(auVar9 * auVar13,8)));
                    }
                  }
                  iVar21 = *(int *)(*(long *)(this + 0x178) + 0x40d8 + (long)local_d4 * 4);
                  lVar23 = (long)iVar21;
                  fVar33 = *(float *)(param_1 + 0x28);
                  local_70 = 0;
                  lVar4 = *(long *)(lVar28 + 0x38);
                  if (iVar21 < 0) {
                    if (lVar4 != 0) {
LAB_00103560:
                      lVar28 = *(long *)(lVar4 + -8);
                      goto LAB_00103564;
                    }
                  }
                  else if (lVar4 != 0) {
                    if (*(long *)(lVar4 + -8) <= lVar23) goto LAB_00103560;
                    Transform2D::operator*(local_58,(Transform2D *)(lVar28 + 0x48));
                    lVar4 = *(long *)(lVar28 + 0x38);
                    if (lVar4 == 0) {
                      lVar29 = 0;
LAB_0010369d:
                      _err_print_index_error
                                ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",
                                 0x75,lVar23,lVar29,"p_index","shapes.size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar14 = (code *)invalidInstructionException();
                      (*pcVar14)();
                    }
                    lVar29 = *(long *)(lVar4 + -8);
                    if (lVar29 <= lVar23) goto LAB_0010369d;
                    cVar17 = GodotCollisionSolver2D::solve
                                       (pGVar2,(Transform2D *)(param_1 + 8),
                                        (Vector2 *)(param_1 + 0x20),
                                        *(GodotShape2D **)(lVar4 + 0x48 + lVar23 * 0x58),local_58,
                                        (Vector2 *)&local_70,
                                        (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,
                                        (void *)0x0,(Vector2 *)0x0,fVar33,0.0);
                    if (cVar17 != '\0') {
                      uVar20 = *(ulong *)(lVar28 + 0x18);
                      pSVar24 = param_2 + (long)local_c8 * 0x20;
                      *(ulong *)(pSVar24 + 8) = uVar20;
                      if (uVar20 != 0) {
                        uVar25 = (uint)uVar20 & 0xffffff;
                        if (uVar25 < (uint)ObjectDB::slot_max) {
                          while( true ) {
                            LOCK();
                            bVar32 = (char)ObjectDB::spin_lock == '\0';
                            if (bVar32) {
                              ObjectDB::spin_lock._0_1_ = '\x01';
                            }
                            UNLOCK();
                            if (bVar32) break;
                            do {
                            } while ((char)ObjectDB::spin_lock != '\0');
                          }
                          puVar26 = (ulong *)((ulong)uVar25 * 0x10 + ObjectDB::object_slots);
                          if ((uVar20 >> 0x18 & 0x7fffffffff) == (*puVar26 & 0x7fffffffff)) {
                            uVar20 = puVar26[1];
                            ObjectDB::spin_lock._0_1_ = '\0';
                          }
                          else {
                            uVar20 = 0;
                            ObjectDB::spin_lock._0_1_ = '\0';
                          }
                        }
                        else {
                          _err_print_error("get_instance","./core/object/object.h",0x418,
                                           "Condition \"slot >= slot_max\" is true. Returning: nullptr"
                                           ,0,0);
                          uVar20 = 0;
                        }
                        *(ulong *)(pSVar24 + 0x10) = uVar20;
                      }
                      uVar5 = *(undefined8 *)(lVar28 + 0x10);
                      local_c8 = local_c8 + 1;
                      *(int *)(pSVar24 + 0x18) = iVar21;
                      *(undefined8 *)pSVar24 = uVar5;
                    }
                    goto LAB_00103370;
                  }
                  lVar28 = 0;
LAB_00103564:
                  _err_print_index_error
                            ("get_shape_transform",
                             "modules/godot_physics_2d/godot_collision_object_2d.h",0x79,lVar23,
                             lVar28,"p_index","shapes.size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar14 = (code *)invalidInstructionException();
                  (*pcVar14)();
                }
LAB_00103370:
                local_d4 = local_d4 + 1;
              } while ((local_d4 < iVar19) && (local_c8 < param_3));
              goto LAB_0010338d;
            }
            goto LAB_00103685;
          }
        }
        else if (iVar19 + 0x80000000U < 0x7fffffff) {
          _err_print_error("get_or_null","./core/templates/rid_owner.h",0x103,
                           "Method/function failed. Returning: nullptr",
                           "Attempting to use an uninitialized RID",0,0);
        }
      }
    }
    _err_print_error("intersect_shape","modules/godot_physics_2d/godot_space_2d.cpp",0xd6,
                     "Parameter \"shape\" is null.",0,0);
  }
LAB_00103685:
  local_c8 = 0;
LAB_0010338d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_c8;
}



/* GodotSpace2D::_cull_aabb_for_body(GodotBody2D*, Rect2 const&) */

int __thiscall
GodotSpace2D::_cull_aabb_for_body(GodotSpace2D *this,GodotBody2D *param_1,Rect2 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  GodotBody2D *pGVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  iVar7 = (**(code **)(**(long **)(this + 0x38) + 0x40))
                    (*(long **)(this + 0x38),param_2,this + 0xd8,0x800,this + 0x40d8);
  if (iVar7 < 1) {
    return iVar7;
  }
  iVar13 = 0;
  lVar12 = 0;
  do {
    while (((pGVar4 = *(GodotBody2D **)(this + lVar12 * 8 + 0xd8), pGVar4 == param_1 ||
            (*(int *)(pGVar4 + 8) == 0)) ||
           ((*(uint *)(pGVar4 + 0x7c) & *(uint *)(param_1 + 0x78)) == 0))) {
LAB_0010389c:
      iVar7 = iVar7 + -1;
      if (iVar7 <= iVar13) {
        return iVar7;
      }
      lVar1 = (long)iVar7 + 0x1a;
      lVar9 = (long)iVar7 + 0x1034;
      *(undefined8 *)(this + lVar12 * 8 + 0xd8) = *(undefined8 *)(this + lVar1 * 8 + 8);
      uVar2 = *(undefined4 *)(this + lVar9 * 4 + 8);
      *(GodotBody2D **)(this + lVar1 * 8 + 8) = pGVar4;
      uVar3 = *(undefined4 *)(this + (lVar12 + 0x1034) * 4 + 8);
      *(undefined4 *)(this + (lVar12 + 0x1034) * 4 + 8) = uVar2;
      *(undefined4 *)(this + lVar9 * 4 + 8) = uVar3;
    }
    lVar1 = *(long *)(pGVar4 + 0x1b0);
    if (lVar1 != 0) {
      lVar9 = *(long *)(lVar1 + -8);
      iVar10 = (int)lVar9 + -1;
      if (lVar9 < 1) goto LAB_001039f0;
      iVar11 = 0;
      if (-1 < iVar10) {
        do {
          while( true ) {
            iVar8 = (iVar11 + iVar10) / 2;
            uVar5 = *(ulong *)(lVar1 + (long)iVar8 * 8);
            if (*(ulong *)(param_1 + 0x10) < uVar5) break;
            if (*(ulong *)(param_1 + 0x10) <= uVar5) {
              if (iVar8 != -1) goto LAB_0010389c;
              goto LAB_00103953;
            }
            iVar11 = iVar8 + 1;
            if (iVar10 < iVar11) goto LAB_00103953;
          }
          iVar10 = iVar8 + -1;
        } while (iVar11 <= iVar10);
      }
    }
LAB_00103953:
    lVar1 = *(long *)(param_1 + 0x1b0);
    if (lVar1 != 0) {
      lVar9 = *(long *)(lVar1 + -8);
      iVar10 = (int)lVar9 + -1;
      if (lVar9 < 1) {
LAB_001039f0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar9,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      iVar11 = 0;
      if (-1 < iVar10) {
        do {
          while( true ) {
            iVar8 = (iVar11 + iVar10) / 2;
            uVar5 = *(ulong *)(lVar1 + (long)iVar8 * 8);
            if (*(ulong *)(pGVar4 + 0x10) < uVar5) break;
            if (*(ulong *)(pGVar4 + 0x10) <= uVar5) {
              if (iVar8 != -1) goto LAB_0010389c;
              goto LAB_001039af;
            }
            iVar11 = iVar8 + 1;
            if (iVar10 < iVar11) goto LAB_001039af;
          }
          iVar10 = iVar8 + -1;
        } while (iVar11 <= iVar10);
      }
    }
LAB_001039af:
    iVar13 = iVar13 + 1;
    if (iVar7 <= iVar13) {
      return iVar7;
    }
    lVar12 = (long)iVar13;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GodotSpace2D::test_body_motion(GodotBody2D*, PhysicsServer2D::MotionParameters const&,
   PhysicsServer2D::MotionResult*) */

char __thiscall
GodotSpace2D::test_body_motion
          (GodotSpace2D *this,GodotBody2D *param_1,MotionParameters *param_2,MotionResult *param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  GodotShape2D *pGVar4;
  GodotShape2D *pGVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  code *pcVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  bool bVar57;
  bool bVar58;
  char cVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  Transform2D *pTVar64;
  undefined8 *puVar65;
  ulong uVar66;
  long lVar67;
  long lVar68;
  int iVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  char cVar73;
  bool bVar74;
  uint uVar75;
  uint uVar76;
  ulong uVar77;
  uint uVar78;
  ulong uVar79;
  Vector2 *pVVar80;
  long lVar81;
  long lVar82;
  long in_FS_OFFSET;
  byte bVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  float fVar87;
  undefined1 auVar86 [16];
  float fVar88;
  float fVar89;
  double dVar90;
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  long local_788;
  long local_780;
  float local_760;
  Rect2 *local_750;
  float local_744;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined1 local_668 [8];
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 local_5f8;
  float local_5f0;
  undefined8 local_5ec;
  undefined8 uStack_5e4;
  Vector2 *local_5d8;
  Transform2D local_5c8 [128];
  long local_548;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  int local_538;
  undefined4 uStack_534;
  int iStack_530;
  undefined4 uStack_52c;
  Vector2 *local_528;
  undefined8 local_520;
  float local_518;
  uint uStack_514;
  uint local_510;
  float fStack_50c;
  float local_508;
  undefined8 local_348 [2];
  int local_338 [6];
  undefined1 auStack_320 [16];
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  long local_40;
  
  bVar83 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (MotionResult *)0x0) {
    lVar67 = *(long *)(param_1 + 0x38);
    _local_668 = ZEXT816(0);
    if (lVar67 != 0) goto LAB_00103aaa;
  }
  else {
    lVar67 = *(long *)(param_1 + 0x38);
    _local_668 = ZEXT816(0);
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined4 *)(param_3 + 0x48) = 0;
    if (lVar67 != 0) {
LAB_00103aaa:
      _local_668 = ZEXT816(0);
      lVar72 = 0;
      lVar82 = 0;
      cVar73 = '\0';
      do {
        lVar71 = *(long *)(lVar67 + -8);
        if ((int)lVar71 <= (int)lVar82) break;
        while( true ) {
          if (lVar82 < lVar71) {
            if (*(char *)(lVar67 + 0x50 + lVar72) != '\0') goto LAB_00104389;
          }
          else {
            _err_print_index_error
                      ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                       0x8b,lVar82,lVar71,"p_idx","shapes.size()","",false,false);
            lVar67 = *(long *)(param_1 + 0x38);
          }
          if (cVar73 != '\0') break;
          if (lVar67 == 0) goto LAB_00104450;
          lVar71 = *(long *)(lVar67 + -8);
          if (lVar71 <= lVar82) goto LAB_00104453;
          _local_668 = *(undefined1 (*) [16])(lVar67 + 0x34 + lVar72);
          lVar71 = *(long *)(lVar67 + -8);
          lVar82 = lVar82 + 1;
          lVar72 = lVar72 + 0x58;
          cVar73 = '\x01';
          if ((int)lVar71 <= (int)lVar82) goto LAB_00103b30;
        }
        if (lVar67 == 0) {
LAB_00104450:
          lVar71 = 0;
LAB_00104453:
          _err_print_index_error
                    ("get_shape_aabb","modules/godot_physics_2d/godot_collision_object_2d.h",0x81,
                     lVar82,lVar71,"p_index","shapes.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar54 = (code *)invalidInstructionException();
          (*pcVar54)();
        }
        lVar71 = *(long *)(lVar67 + -8);
        if (lVar71 <= lVar82) goto LAB_00104453;
        lVar71 = lVar67 + lVar72;
        if (((((float)uStack_660 < 0.0) || (uStack_660._4_4_ < 0.0)) ||
            (fVar3 = *(float *)(lVar71 + 0x3c), fVar3 < 0.0)) ||
           (fVar88 = *(float *)(lVar71 + 0x40), fVar88 < 0.0)) {
          _err_print_error("merge","./core/math/rect2.h",0xa8,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                          );
          fVar88 = *(float *)(lVar71 + 0x40);
          fVar3 = *(float *)(lVar71 + 0x3c);
          lVar67 = *(long *)(param_1 + 0x38);
        }
        fVar92 = *(float *)(lVar71 + 0x38);
        fVar93 = *(float *)(lVar71 + 0x34);
        fVar95 = fVar92;
        if ((float)local_668._4_4_ <= fVar92) {
          fVar95 = (float)local_668._4_4_;
        }
        fVar94 = fVar93;
        if ((float)local_668._0_4_ <= fVar93) {
          fVar94 = (float)local_668._0_4_;
        }
        fVar96 = fVar3 + fVar93;
        if (fVar3 + fVar93 <= (float)uStack_660 + (float)local_668._0_4_) {
          fVar96 = (float)uStack_660 + (float)local_668._0_4_;
        }
        fVar3 = fVar92 + fVar88;
        if (fVar92 + fVar88 <= (float)local_668._4_4_ + uStack_660._4_4_) {
          fVar3 = (float)local_668._4_4_ + uStack_660._4_4_;
        }
        local_668._4_4_ = fVar95;
        local_668._0_4_ = fVar94;
        uStack_660._4_4_ = fVar3 - fVar95;
        uStack_660._0_4_ = fVar96 - fVar94;
LAB_00104389:
        lVar82 = lVar82 + 1;
        lVar72 = lVar72 + 0x58;
      } while (lVar67 != 0);
LAB_00103b30:
      if (cVar73 != '\0') {
        dVar90 = (double)*(float *)(param_2 + 0x20);
        fVar3 = *(float *)(param_2 + 0x20);
        if (dVar90 <= __LC30) {
          dVar90 = (double)_LC23;
          fVar3 = _LC23;
        }
        fVar95 = uStack_660._4_4_ * *(float *)(param_1 + 0x68);
        fVar93 = uStack_660._4_4_ * *(float *)(param_1 + 0x6c);
        fVar88 = *(float *)(param_1 + 0x68) * (float)local_668._4_4_ +
                 (float)local_668._0_4_ * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
        fVar92 = *(float *)(param_1 + 100) * (float)local_668._0_4_ +
                 *(float *)(param_1 + 0x6c) * (float)local_668._4_4_ + *(float *)(param_1 + 0x74);
        fVar96 = (float)uStack_660 * *(float *)(param_1 + 0x60) + fVar88;
        fVar97 = *(float *)(param_1 + 100) * (float)uStack_660 + fVar92;
        fVar94 = fVar96;
        if (fVar96 <= fVar88 + 0.0) {
          fVar94 = fVar88 + 0.0;
        }
        fVar99 = fVar96;
        if (fVar88 <= fVar96) {
          fVar99 = fVar88;
        }
        fVar88 = fVar88 + fVar95;
        fVar100 = fVar97;
        if (fVar97 <= fVar92 + 0.0) {
          fVar100 = fVar92 + 0.0;
        }
        fVar87 = fVar97;
        if (fVar92 <= fVar97) {
          fVar87 = fVar92;
        }
        fVar92 = fVar92 + fVar93;
        if ((fVar94 - fVar99 < 0.0) || (fVar100 - fVar87 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                          );
        }
        fVar98 = (fVar94 - fVar99) + fVar99;
        fVar100 = (fVar100 - fVar87) + fVar87;
        fVar94 = fVar88;
        if (fVar99 <= fVar88) {
          fVar94 = fVar99;
        }
        fVar95 = fVar95 + fVar96;
        fVar96 = fVar92;
        if (fVar87 <= fVar92) {
          fVar96 = fVar87;
        }
        fVar93 = fVar93 + fVar97;
        if (fVar88 <= fVar98) {
          fVar88 = fVar98;
        }
        if (fVar92 <= fVar100) {
          fVar92 = fVar100;
        }
        if ((fVar88 - fVar94 < 0.0) || (fVar92 - fVar96 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                          );
        }
        fVar97 = (fVar92 - fVar96) + fVar96;
        fVar92 = (fVar88 - fVar94) + fVar94;
        fVar88 = fVar93;
        if (fVar96 <= fVar93) {
          fVar88 = fVar96;
        }
        fVar96 = fVar95;
        if (fVar94 <= fVar95) {
          fVar96 = fVar94;
        }
        if (fVar93 <= fVar97) {
          fVar93 = fVar97;
        }
        if (fVar95 <= fVar92) {
          fVar95 = fVar92;
        }
        fVar97 = *(float *)(param_2 + 0xc) * (fVar93 - fVar88);
        fVar94 = (fVar93 - fVar88) * *(float *)(param_2 + 8);
        fVar92 = *(float *)(param_2 + 4) * fVar96 + *(float *)(param_2 + 0xc) * fVar88 +
                 *(float *)(param_2 + 0x14);
        fVar93 = fVar96 * *(float *)param_2 + *(float *)(param_2 + 8) * fVar88 +
                 *(float *)(param_2 + 0x10);
        fVar88 = *(float *)(param_2 + 4) * (fVar95 - fVar96) + fVar92;
        fVar96 = *(float *)param_2 * (fVar95 - fVar96) + fVar93;
        fVar95 = fVar88;
        if (fVar88 <= fVar92 + 0.0) {
          fVar95 = fVar92 + 0.0;
        }
        fVar99 = fVar96;
        if (fVar96 <= fVar93 + 0.0) {
          fVar99 = fVar93 + 0.0;
        }
        fVar100 = fVar96;
        if (fVar93 <= fVar96) {
          fVar100 = fVar93;
        }
        fVar87 = fVar88;
        if (fVar92 <= fVar88) {
          fVar87 = fVar92;
        }
        fVar93 = fVar93 + fVar94;
        fVar92 = fVar92 + fVar97;
        if ((fVar99 - fVar100 < 0.0) || (fVar95 - fVar87 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                          );
        }
        fVar99 = (fVar99 - fVar100) + fVar100;
        fVar98 = (fVar95 - fVar87) + fVar87;
        fVar95 = fVar93;
        if (fVar100 <= fVar93) {
          fVar95 = fVar100;
        }
        fVar88 = fVar88 + fVar97;
        fVar97 = fVar92;
        if (fVar87 <= fVar92) {
          fVar97 = fVar87;
        }
        fVar94 = fVar94 + fVar96;
        if (fVar93 <= fVar99) {
          fVar93 = fVar99;
        }
        if (fVar92 <= fVar98) {
          fVar92 = fVar98;
        }
        if ((fVar93 - fVar95 < 0.0) || (fVar92 - fVar97 < 0.0)) {
          _err_print_error("expand_to","./core/math/rect2.h",0x100,
                           "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size."
                          );
        }
        fVar96 = (fVar92 - fVar97) + fVar97;
        fVar93 = (fVar93 - fVar95) + fVar95;
        fVar92 = fVar94;
        if (fVar95 <= fVar94) {
          fVar92 = fVar95;
        }
        lVar67 = 0x60;
        fVar95 = fVar88;
        if (fVar97 <= fVar88) {
          fVar95 = fVar97;
        }
        if (fVar94 <= fVar93) {
          fVar94 = fVar93;
        }
        puVar65 = local_348;
        if (fVar88 <= fVar96) {
          fVar88 = fVar96;
        }
        for (; lVar67 != 0; lVar67 = lVar67 + -1) {
          *puVar65 = 0;
          puVar65 = puVar65 + (ulong)bVar83 * -2 + 1;
        }
        local_668._4_4_ = fVar95 - fVar3;
        local_668._0_4_ = fVar92 - fVar3;
        fVar93 = (float)(dVar90 * __LC35);
        uStack_660._0_4_ = (fVar94 - fVar92) + fVar3 + fVar3;
        uStack_660._4_4_ = (fVar88 - fVar95) + fVar3 + fVar3;
        fVar88 = (float)Vector2::length();
        local_648 = *(undefined8 *)(param_2 + 0x10);
        lVar67 = 0x40;
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulong *)(param_2 + 0x18);
        auVar91._4_4_ = fVar88;
        auVar91._0_4_ = fVar88;
        auVar91._12_4_ = _UNK_0010a8bc;
        auVar91._8_4_ = _LC40;
        auVar85 = divps(auVar85,auVar91);
        local_658 = *(undefined8 *)param_2;
        uStack_650 = *(undefined8 *)(param_2 + 8);
        iVar62 = 4;
        pVVar80 = (Vector2 *)&local_548;
        for (; lVar67 != 0; lVar67 = lVar67 + -1) {
          *(undefined8 *)pVVar80 = 0;
          pVVar80 = pVVar80 + (ulong)bVar83 * -0x10 + 8;
        }
        local_688 = auVar85._0_8_;
        bVar57 = false;
        while( true ) {
          local_5f8 = 0;
          local_5f0 = 0.0;
          local_5ec = __LC54;
          uStack_5e4 = _UNK_0010a938;
          local_5d8 = (Vector2 *)&local_548;
          iVar60 = _cull_aabb_for_body(this,param_1,(Rect2 *)local_668);
          lVar67 = *(long *)(param_1 + 0x38);
          if (lVar67 == 0) break;
          bVar58 = false;
          lVar72 = 0;
          lVar82 = 0;
          iVar69 = 0;
          iVar1 = 0;
          do {
            lVar71 = *(long *)(lVar67 + -8);
            if ((int)lVar71 <= (int)lVar82) break;
            if (lVar82 < lVar71) {
              if (*(char *)(lVar67 + 0x50 + lVar72) == '\0') goto LAB_0010452a;
            }
            else {
              _err_print_index_error
                        ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                         0x8b,lVar82,lVar71,"p_idx","shapes.size()","",false,false);
              lVar67 = *(long *)(param_1 + 0x38);
LAB_0010452a:
              lVar71 = lVar82;
              if (lVar67 == 0) goto LAB_00104f73;
              lVar70 = *(long *)(lVar67 + -8);
              if (lVar70 <= lVar82) goto LAB_00104a83;
              pGVar4 = *(GodotShape2D **)(lVar67 + lVar72 + 0x48);
              Transform2D::operator*((Transform2D *)&local_638,(Transform2D *)&local_658);
              if (0 < iVar60) {
                local_788 = 0;
LAB_001045a8:
                do {
                  lVar67 = *(long *)(this + local_788 * 2 + 0xd8);
                  if ((*(long *)(param_2 + 0x28) != 0) && (*(int *)(param_2 + 0x4c) != 0)) {
                    uVar77 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x48) * 4));
                    lVar71 = *(long *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(param_2 + 0x48) * 8);
                    uVar66 = *(long *)(lVar67 + 0x10) * 0x3ffff - 1;
                    uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                    uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                    uVar66 = uVar66 >> 0x16 ^ uVar66;
                    uVar79 = uVar66 & 0xffffffff;
                    if ((int)uVar66 == 0) {
                      uVar79 = 1;
                    }
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar79 * lVar71;
                    auVar30._8_8_ = 0;
                    auVar30._0_8_ = uVar77;
                    lVar70 = SUB168(auVar6 * auVar30,8);
                    uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar70 * 4);
                    iVar63 = SUB164(auVar6 * auVar30,8);
                    if (uVar75 != 0) {
                      uVar78 = 0;
                      do {
                        if ((uVar75 == (uint)uVar79) &&
                           (*(long *)(lVar67 + 0x10) ==
                            *(long *)(*(long *)(param_2 + 0x28) +
                                     (ulong)*(uint *)(*(long *)(param_2 + 0x30) + lVar70 * 4) * 8)))
                        goto LAB_001046c8;
                        uVar78 = uVar78 + 1;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = (ulong)(iVar63 + 1) * lVar71;
                        auVar31._8_8_ = 0;
                        auVar31._0_8_ = uVar77;
                        lVar70 = SUB168(auVar7 * auVar31,8);
                        uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar70 * 4);
                        iVar63 = SUB164(auVar7 * auVar31,8);
                      } while ((uVar75 != 0) &&
                              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar75 * lVar71,
                              auVar32._8_8_ = 0, auVar32._0_8_ = uVar77, auVar9._8_8_ = 0,
                              auVar9._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                               (ulong)*(uint *)(param_2 + 0x48) * 4)
                                                     + iVar63) - SUB164(auVar8 * auVar32,8)) *
                                             lVar71, auVar33._8_8_ = 0, auVar33._0_8_ = uVar77,
                              uVar78 <= SUB164(auVar9 * auVar33,8)));
                    }
                  }
                  if ((*(long *)(param_2 + 0x50) != 0) && (*(int *)(param_2 + 0x74) != 0)) {
                    uVar77 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                 (ulong)*(uint *)(param_2 + 0x70) * 4));
                    lVar71 = *(long *)(hash_table_size_primes_inv +
                                      (ulong)*(uint *)(param_2 + 0x70) * 8);
                    uVar66 = *(long *)(lVar67 + 0x18) * 0x3ffff - 1;
                    uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                    uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                    uVar66 = uVar66 >> 0x16 ^ uVar66;
                    uVar79 = uVar66 & 0xffffffff;
                    if ((int)uVar66 == 0) {
                      uVar79 = 1;
                    }
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = uVar79 * lVar71;
                    auVar34._8_8_ = 0;
                    auVar34._0_8_ = uVar77;
                    lVar70 = SUB168(auVar10 * auVar34,8);
                    uVar75 = *(uint *)(*(long *)(param_2 + 0x68) + lVar70 * 4);
                    iVar63 = SUB164(auVar10 * auVar34,8);
                    if (uVar75 != 0) {
                      uVar78 = 0;
                      do {
                        if ((uVar75 == (uint)uVar79) &&
                           (*(long *)(lVar67 + 0x18) ==
                            *(long *)(*(long *)(param_2 + 0x50) +
                                     (ulong)*(uint *)(*(long *)(param_2 + 0x58) + lVar70 * 4) * 8)))
                        goto LAB_001046c8;
                        uVar78 = uVar78 + 1;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = (ulong)(iVar63 + 1) * lVar71;
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = uVar77;
                        lVar70 = SUB168(auVar11 * auVar35,8);
                        uVar75 = *(uint *)(*(long *)(param_2 + 0x68) + lVar70 * 4);
                        iVar63 = SUB164(auVar11 * auVar35,8);
                      } while ((uVar75 != 0) &&
                              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar75 * lVar71,
                              auVar36._8_8_ = 0, auVar36._0_8_ = uVar77, auVar13._8_8_ = 0,
                              auVar13._0_8_ =
                                   (ulong)((*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_2 + 0x70) * 4) + iVar63)
                                          - SUB164(auVar12 * auVar36,8)) * lVar71, auVar37._8_8_ = 0
                              , auVar37._0_8_ = uVar77, uVar78 <= SUB164(auVar13 * auVar37,8)));
                    }
                  }
                  iVar63 = *(int *)(this + local_788 + 0x40d8);
                  lVar71 = (long)iVar63;
                  lVar70 = *(long *)(lVar67 + 0x38);
                  lVar68 = lVar71;
                  if (iVar63 < 0) {
                    if (lVar70 == 0) {
                      lVar67 = 0;
                    }
                    else {
LAB_00104b4d:
                      lVar67 = *(long *)(lVar70 + -8);
                    }
                    goto LAB_00104b78;
                  }
                  if (lVar70 == 0) {
                    lVar67 = 0;
                    goto LAB_00104b78;
                  }
                  if (*(long *)(lVar70 + -8) <= lVar71) goto LAB_00104b4d;
                  lVar81 = lVar71 * 0x58;
                  Transform2D::operator*((Transform2D *)&local_618,(Transform2D *)(lVar67 + 0x48));
                  cVar59 = (**(code **)(*(long *)pGVar4 + 8))();
                  lVar68 = *(long *)(lVar67 + 0x38);
                  iVar61 = (int)uStack_5e4;
                  if (cVar59 == '\0') {
                    local_5f8 = 0;
                    local_5f0 = 0.0;
                    uStack_5e4 = uStack_5e4 & 0xffffffff;
LAB_00104a51:
                    iVar61 = (int)uStack_5e4;
                    if (lVar68 == 0) {
                      lVar70 = 0;
                      goto LAB_00104a83;
                    }
LAB_001048e6:
                    lVar70 = *(long *)(lVar68 + -8);
                    if (lVar70 <= lVar71) goto LAB_00104a83;
                  }
                  else {
                    if (lVar68 == 0) {
                      lVar70 = 0;
                      goto LAB_00104fba;
                    }
                    lVar70 = *(long *)(lVar68 + -8);
                    if (lVar70 <= lVar71) goto LAB_00104fba;
                    if (*(char *)(lVar68 + 0x51 + lVar81) == '\0') {
                      local_5f8 = 0;
                      local_5f0 = 0.0;
                      uStack_5e4 = uStack_5e4 & 0xffffffff;
                      goto LAB_001048e6;
                    }
                    local_5f8 = Vector2::normalized();
                    uVar66 = uStack_5e4;
                    lVar68 = *(long *)(lVar67 + 0x38);
                    if (lVar68 == 0) {
                      lVar70 = 0;
                      goto LAB_00105377;
                    }
                    lVar70 = *(long *)(lVar68 + -8);
                    if (lVar70 <= lVar71) goto LAB_00105377;
                    local_5f0 = *(float *)(lVar68 + 0x54 + lVar81);
                    uStack_5e4 = uStack_5e4 & 0xffffffff;
                    uVar77 = uStack_5e4;
                    if (local_5f0 <= fVar3) {
                      local_5f0 = fVar3;
                    }
                    uStack_5e4._0_4_ = (int)uVar66;
                    iVar61 = (int)uStack_5e4;
                    uStack_5e4 = uVar77;
                    if (*(int *)(lVar67 + 8) == 1) {
                      iVar61 = GodotBody2D::get_mode();
                      if ((iVar61 == 1) || (iVar61 = GodotBody2D::get_mode(), iVar61 == 2)) {
                        local_678 = CONCAT44(*(float *)(this + 0x60e8) *
                                             (float)((ulong)*(undefined8 *)(lVar67 + 0xb8) >> 0x20),
                                             *(float *)(this + 0x60e8) *
                                             (float)*(undefined8 *)(lVar67 + 0xb8));
                        fVar95 = (float)Vector2::length();
                        Vector2::normalize();
                        local_670 = CONCAT44((uint)((ulong)local_5f8 >> 0x20) ^ _LC57._4_4_,
                                             (uint)local_5f8 ^ (uint)_LC57);
                        fVar92 = (float)Vector2::dot((Vector2 *)&local_678);
                        if (fVar92 <= 0.0) {
                          fVar92 = 0.0;
                        }
                        lVar68 = *(long *)(lVar67 + 0x38);
                        local_5f0 = fVar92 * fVar95 + local_5f0;
                      }
                      else {
                        lVar68 = *(long *)(lVar67 + 0x38);
                      }
                      goto LAB_00104a51;
                    }
                  }
                  local_670 = 0;
                  local_678 = 0;
                  cVar59 = GodotCollisionSolver2D::solve
                                     (pGVar4,(Transform2D *)&local_638,(Vector2 *)&local_678,
                                      *(GodotShape2D **)(lVar68 + 0x48 + lVar81),
                                      (Transform2D *)&local_618,(Vector2 *)&local_670,
                                      (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)
                                      _GLOBAL_OFFSET_TABLE_,&local_5f8,(Vector2 *)0x0,fVar3,0.0);
                  if (cVar59 == '\0') {
                    bVar74 = false;
                    if (iVar69 < local_5ec._4_4_) {
LAB_0010496b:
                      uVar2 = *(undefined4 *)(lVar67 + 0x80);
                      lVar71 = (long)iVar69;
                      do {
                        *(undefined4 *)(local_5c8 + lVar71 * 4) = uVar2;
                        lVar71 = lVar71 + 1;
                      } while ((int)lVar71 < local_5ec._4_4_);
                      iVar61 = (local_5ec._4_4_ - iVar69) + -1;
                      if (local_5ec._4_4_ <= iVar69) {
                        iVar61 = 0;
                      }
                      iVar69 = iVar69 + 1 + iVar61;
                      goto LAB_001049b2;
                    }
LAB_00104a10:
                    bVar74 = bVar58;
                    if ((0 < uStack_5e4._4_4_) && (iVar1 < 0x20)) {
                      auVar86._8_8_ = lVar67;
                      auVar86._0_8_ = pGVar4;
                      local_338[(long)iVar1 * 6] = iVar63;
                      *(undefined1 (*) [16])(local_348 + (long)iVar1 * 3) = auVar86;
                      iVar1 = iVar1 + 1;
                    }
                  }
                  else {
                    bVar74 = iVar61 < (int)uStack_5e4;
                    if (iVar69 < local_5ec._4_4_) goto LAB_0010496b;
LAB_001049b2:
                    if (!bVar74) goto LAB_00104a10;
                  }
                  bVar58 = bVar74;
                  local_788 = local_788 + 4;
                } while ((long)iVar60 * 4 != local_788);
              }
LAB_001046fb:
              lVar67 = *(long *)(param_1 + 0x38);
            }
            lVar82 = lVar82 + 1;
            lVar72 = lVar72 + 0x58;
          } while (lVar67 != 0);
          if ((!bVar58) || (bVar57 = bVar58, local_5ec._4_4_ < 1)) goto LAB_00105018;
          fVar92 = 0.0;
          pTVar64 = local_5c8;
          do {
            fVar92 = fVar92 + *(float *)pTVar64;
            pTVar64 = pTVar64 + 4;
          } while (local_5c8 + (long)local_5ec._4_4_ * 4 != pTVar64);
          fVar95 = _LC40;
          if (_LC58 <= ABS(fVar92)) {
            fVar95 = (float)local_5ec._4_4_ / fVar92;
          }
          lVar67 = 0;
          fVar96 = 0.0;
          fVar97 = 0.0;
          fVar94 = 0.0;
          fVar92 = 0.0;
          pVVar80 = (Vector2 *)&local_548;
          do {
            local_670 = *(undefined8 *)(pVVar80 + 8);
            fVar99 = (float)*(undefined8 *)pVVar80;
            fVar87 = (float)((ulong)*(undefined8 *)pVVar80 >> 0x20);
            local_618 = CONCAT44(fVar87 - (float)((ulong)local_670 >> 0x20),
                                 fVar99 - (float)local_670);
            local_638 = Vector2::normalized();
            fVar100 = (float)Vector2::dot((Vector2 *)&local_638);
            local_618 = CONCAT44(fVar97 + fVar87,fVar96 + fVar99);
            fVar99 = (float)Vector2::dot((Vector2 *)&local_638);
            auVar85 = _local_668;
            if (_LC59 + (double)fVar93 < (double)(fVar99 - fVar100)) {
              fVar100 = (fVar99 - fVar100) - fVar93;
              fVar99 = *(float *)(local_5c8 + lVar67 * 4);
              fVar87 = (float)((ulong)local_638 >> 0x20);
              fVar96 = fVar96 - fVar100 * (float)local_638 * (float)_LC61 * fVar99 * fVar95;
              fVar97 = fVar97 - fVar100 * fVar87 * _LC61._4_4_ * fVar99 * fVar95;
              fVar92 = fVar92 - (float)local_638 * fVar100 * (float)_LC61 * fVar99 * fVar95;
              fVar94 = fVar94 - fVar100 * fVar87 * (float)_LC61 * fVar99 * fVar95;
            }
            lVar67 = lVar67 + 1;
            pVVar80 = pVVar80 + 0x10;
          } while ((int)lVar67 < local_5ec._4_4_);
          if ((fVar94 == 0.0) && (fVar92 == 0.0)) goto LAB_00105018;
          iVar62 = iVar62 + -1;
          local_648 = CONCAT44((float)((ulong)local_648 >> 0x20) + fVar97,(float)local_648 + fVar96)
          ;
          fVar92 = SUB164(_local_668,0);
          local_668._4_4_ = SUB164(_local_668,4) + fVar97;
          local_668._0_4_ = fVar92 + fVar96;
          uStack_660 = auVar85._8_8_;
          if (iVar62 == 0) goto LAB_00105018;
        }
        iVar1 = 0;
LAB_00105018:
        local_750 = (Rect2 *)&local_638;
        uStack_630 = uStack_660;
        uVar84 = uStack_630;
        uStack_630._0_4_ = SUB164(_local_668,8);
        local_638._0_4_ = (float)*(undefined8 *)(param_2 + 0x18) + SUB164(_local_668,0);
        local_638._4_4_ =
             (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) + SUB164(_local_668,4);
        if (((((float)uStack_630 < 0.0) ||
             (uStack_630._4_4_ = SUB164(_local_668,0xc), uStack_630._4_4_ < 0.0)) ||
            ((float)uStack_630 < 0.0)) ||
           (uStack_660._0_4_ = (float)uStack_630, uStack_660._4_4_ = uStack_630._4_4_,
           uStack_630._4_4_ < 0.0)) {
          uStack_630 = uVar84;
          _err_print_error("merge","./core/math/rect2.h",0xa8);
        }
        fVar92 = (float)local_668._4_4_;
        if (local_638._4_4_ <= (float)local_668._4_4_) {
          fVar92 = local_638._4_4_;
        }
        fVar95 = (float)local_668._0_4_;
        if ((float)local_638 <= (float)local_668._0_4_) {
          fVar95 = (float)local_638;
        }
        fVar94 = uStack_660._4_4_ + (float)local_668._4_4_;
        if (uStack_660._4_4_ + (float)local_668._4_4_ <= local_638._4_4_ + uStack_630._4_4_) {
          fVar94 = local_638._4_4_ + uStack_630._4_4_;
        }
        fVar96 = (float)uStack_660 + (float)local_668._0_4_;
        if ((float)uStack_660 + (float)local_668._0_4_ <= (float)local_638 + (float)uStack_630) {
          fVar96 = (float)local_638 + (float)uStack_630;
        }
        local_638 = CONCAT44(fVar92,fVar95);
        uStack_630 = CONCAT44(fVar94 - fVar92,fVar96 - fVar95);
        iVar62 = _cull_aabb_for_body(this,param_1,local_750);
        lVar67 = *(long *)(param_1 + 0x38);
        if (lVar67 == 0) {
          if ((param_2[0x78] != (MotionParameters)0x0) && (bVar57)) {
            local_744 = _LC40;
            local_788._0_4_ = -1;
            local_760 = _LC40;
            iVar60 = (int)local_788;
            goto LAB_00105951;
          }
LAB_00105267:
          cVar73 = '\0';
        }
        else {
          local_788._0_4_ = -1;
          lVar72 = 0;
          lVar68 = 0;
          local_744 = 1.0;
          local_760 = 1.0;
          do {
            lVar82 = *(long *)(lVar67 + -8);
            iVar60 = (int)lVar68;
            if ((int)lVar82 <= iVar60) break;
            if (lVar68 < lVar82) {
              if (*(char *)(lVar67 + 0x50 + lVar72) == '\0') goto LAB_001051bc;
            }
            else {
              _err_print_index_error
                        ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                         0x8b,lVar68,lVar82,"p_idx","shapes.size()","",false,false);
              lVar67 = *(long *)(param_1 + 0x38);
LAB_001051bc:
              lVar71 = lVar68;
              if (lVar67 == 0) {
                lVar70 = 0;
LAB_00104a83:
                _err_print_index_error
                          ("get_shape","modules/godot_physics_2d/godot_collision_object_2d.h",0x75,
                           lVar71,lVar70,"p_index","shapes.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar54 = (code *)invalidInstructionException();
                (*pcVar54)();
              }
              lVar70 = *(long *)(lVar67 + -8);
              if (lVar70 <= lVar68) goto LAB_00104a83;
              pGVar4 = *(GodotShape2D **)(lVar67 + 0x48 + lVar72);
              fVar92 = local_744;
              iVar69 = (int)local_788;
              fVar95 = local_760;
              if (param_2[0x24] == (MotionParameters)0x0) {
                iVar63 = (*(code *)**(undefined8 **)pGVar4)(pGVar4);
                if ((iVar63 != 1) || (pGVar4[0x6c] != (GodotShape2D)0x0)) {
                  if (*(long *)(param_1 + 0x38) == 0) {
                    lVar67 = 0;
                  }
                  else {
                    lVar67 = *(long *)(*(long *)(param_1 + 0x38) + -8);
                    if (lVar68 < lVar67) goto LAB_001053ab;
                  }
                  goto LAB_00104b78;
                }
              }
              else {
LAB_001053ab:
                Transform2D::operator*((Transform2D *)&local_5f8,(Transform2D *)&local_658);
                if (0 < iVar62) {
                  local_780 = 0;
                  fVar94 = _LC40;
                  fVar96 = _LC40;
                  do {
                    lVar67 = *(long *)(this + local_780 * 2 + 0xd8);
                    fVar97 = fVar94;
                    fVar99 = fVar96;
                    if ((*(long *)(param_2 + 0x28) != 0) && (*(int *)(param_2 + 0x4c) != 0)) {
                      uVar77 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(param_2 + 0x48) * 4));
                      lVar82 = *(long *)(hash_table_size_primes_inv +
                                        (ulong)*(uint *)(param_2 + 0x48) * 8);
                      uVar66 = *(long *)(lVar67 + 0x10) * 0x3ffff - 1;
                      uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                      uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                      uVar66 = uVar66 >> 0x16 ^ uVar66;
                      uVar79 = uVar66 & 0xffffffff;
                      if ((int)uVar66 == 0) {
                        uVar79 = 1;
                      }
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = uVar79 * lVar82;
                      auVar38._8_8_ = 0;
                      auVar38._0_8_ = uVar77;
                      lVar71 = SUB168(auVar14 * auVar38,8);
                      uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar71 * 4);
                      iVar63 = SUB164(auVar14 * auVar38,8);
                      if (uVar75 != 0) {
                        uVar78 = 0;
                        do {
                          if (((uint)uVar79 == uVar75) &&
                             (*(long *)(lVar67 + 0x10) ==
                              *(long *)(*(long *)(param_2 + 0x28) +
                                       (ulong)*(uint *)(*(long *)(param_2 + 0x30) + lVar71 * 4) * 8)
                             )) goto LAB_00105597;
                          uVar78 = uVar78 + 1;
                          auVar15._8_8_ = 0;
                          auVar15._0_8_ = (ulong)(iVar63 + 1) * lVar82;
                          auVar39._8_8_ = 0;
                          auVar39._0_8_ = uVar77;
                          lVar71 = SUB168(auVar15 * auVar39,8);
                          uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar71 * 4);
                          iVar63 = SUB164(auVar15 * auVar39,8);
                        } while ((uVar75 != 0) &&
                                (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar75 * lVar82,
                                auVar40._8_8_ = 0, auVar40._0_8_ = uVar77, auVar17._8_8_ = 0,
                                auVar17._0_8_ =
                                     (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(param_2 + 0x48) * 4) +
                                             iVar63) - SUB164(auVar16 * auVar40,8)) * lVar82,
                                auVar41._8_8_ = 0, auVar41._0_8_ = uVar77,
                                uVar78 <= SUB164(auVar17 * auVar41,8)));
                      }
                    }
                    if ((*(long *)(param_2 + 0x50) != 0) && (*(int *)(param_2 + 0x74) != 0)) {
                      uVar77 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(param_2 + 0x70) * 4));
                      lVar82 = *(long *)(hash_table_size_primes_inv +
                                        (ulong)*(uint *)(param_2 + 0x70) * 8);
                      uVar66 = *(long *)(lVar67 + 0x18) * 0x3ffff - 1;
                      uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                      uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                      uVar66 = uVar66 >> 0x16 ^ uVar66;
                      uVar79 = uVar66 & 0xffffffff;
                      if ((int)uVar66 == 0) {
                        uVar79 = 1;
                      }
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = uVar79 * lVar82;
                      auVar42._8_8_ = 0;
                      auVar42._0_8_ = uVar77;
                      lVar71 = SUB168(auVar18 * auVar42,8);
                      uVar75 = *(uint *)(*(long *)(param_2 + 0x68) + lVar71 * 4);
                      iVar63 = SUB164(auVar18 * auVar42,8);
                      if (uVar75 != 0) {
                        uVar78 = 0;
                        do {
                          if ((uVar75 == (uint)uVar79) &&
                             (*(long *)(lVar67 + 0x18) ==
                              *(long *)(*(long *)(param_2 + 0x50) +
                                       (ulong)*(uint *)(*(long *)(param_2 + 0x58) + lVar71 * 4) * 8)
                             )) goto LAB_00105597;
                          uVar78 = uVar78 + 1;
                          auVar19._8_8_ = 0;
                          auVar19._0_8_ = (ulong)(iVar63 + 1) * lVar82;
                          auVar43._8_8_ = 0;
                          auVar43._0_8_ = uVar77;
                          lVar71 = SUB168(auVar19 * auVar43,8);
                          uVar75 = *(uint *)(*(long *)(param_2 + 0x68) + lVar71 * 4);
                          iVar63 = SUB164(auVar19 * auVar43,8);
                        } while ((uVar75 != 0) &&
                                (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar75 * lVar82,
                                auVar44._8_8_ = 0, auVar44._0_8_ = uVar77, auVar21._8_8_ = 0,
                                auVar21._0_8_ =
                                     (ulong)((*(uint *)(hash_table_size_primes +
                                                       (ulong)*(uint *)(param_2 + 0x70) * 4) +
                                             iVar63) - SUB164(auVar20 * auVar44,8)) * lVar82,
                                auVar45._8_8_ = 0, auVar45._0_8_ = uVar77,
                                uVar78 <= SUB164(auVar21 * auVar45,8)));
                      }
                    }
                    iVar63 = *(int *)(this + local_780 + 0x40d8);
                    lVar71 = (long)iVar63;
                    lVar82 = *(long *)(lVar67 + 0x38);
                    if (iVar63 < 0) {
                      if (lVar82 == 0) {
LAB_00104f73:
                        lVar70 = 0;
                      }
                      else {
LAB_00105dda:
                        lVar70 = *(long *)(lVar82 + -8);
                      }
                      goto LAB_00104a83;
                    }
                    if (lVar82 == 0) goto LAB_00104f73;
                    if (*(long *)(lVar82 + -8) <= lVar71) goto LAB_00105dda;
                    lVar81 = lVar71 * 0x58;
                    pGVar5 = *(GodotShape2D **)(lVar82 + lVar81 + 0x48);
                    puVar65 = local_348;
                    if (0 < iVar1) {
                      do {
                        if ((((GodotShape2D *)*puVar65 == pGVar4) && (puVar65[1] == lVar67)) &&
                           (*(int *)(puVar65 + 2) == iVar63)) goto LAB_00105597;
                        puVar65 = puVar65 + 3;
                      } while (puVar65 != local_348 + (long)iVar1 * 3);
                    }
                    Transform2D::operator*(local_5c8,(Transform2D *)(lVar67 + 0x48));
                    local_548 = 0;
                    cVar59 = GodotCollisionSolver2D::solve
                                       (pGVar4,(Transform2D *)&local_5f8,(Vector2 *)(param_2 + 0x18)
                                        ,pGVar5,local_5c8,(Vector2 *)&local_548,
                                        (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,
                                        (void *)0x0,(Vector2 *)0x0,0.0,0.0);
                    if (cVar59 != '\0') {
                      local_548 = 0;
                      local_618 = 0;
                      cVar59 = GodotCollisionSolver2D::solve
                                         (pGVar4,(Transform2D *)&local_5f8,(Vector2 *)&local_618,
                                          pGVar5,local_5c8,(Vector2 *)&local_548,
                                          (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,
                                          (void *)0x0,(Vector2 *)0x0,0.0,0.0);
                      if (cVar59 != '\0') {
                        cVar59 = (**(code **)(*(long *)pGVar4 + 8))(pGVar4);
                        if (cVar59 != '\0') {
                          lVar67 = *(long *)(lVar67 + 0x38);
                          if (lVar67 == 0) goto LAB_0010697b;
                          lVar70 = *(long *)(lVar67 + -8);
                          if (lVar70 <= lVar71) goto LAB_00104fba;
                          if (*(char *)(lVar67 + 0x51 + lVar81) != '\0') {
                            local_548 = Vector2::normalized();
                            fVar94 = (float)Vector2::dot((Vector2 *)&local_688);
                            if (fVar94 < 0.0) goto LAB_00105597;
                          }
                        }
                        local_744 = 0.0;
                        local_760 = 0.0;
                        goto LAB_00105951;
                      }
                      iVar63 = 0;
                      fVar98 = 0.0;
                      fVar100 = 1.0;
                      fVar87 = _LC41;
LAB_001064ff:
                      do {
                        local_618 = local_688;
                        local_548 = 0;
                        fVar89 = fVar87 * (fVar100 - fVar98) + fVar98;
                        local_670 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20)
                                             * fVar89,(float)*(undefined8 *)(param_2 + 0x18) *
                                                      fVar89);
                        cVar59 = GodotCollisionSolver2D::solve
                                           (pGVar4,(Transform2D *)&local_5f8,(Vector2 *)&local_670,
                                            pGVar5,local_5c8,(Vector2 *)&local_548,
                                            (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)0x0,
                                            (void *)0x0,(Vector2 *)&local_618,0.0,0.0);
                        fVar87 = _LC41;
                        if (cVar59 == '\0') {
                          fVar98 = fVar89;
                          if (iVar63 == 0) goto LAB_001066a0;
                          if (_LC40 <= fVar100) {
                            fVar87 = _LC43;
                          }
                        }
                        else {
                          fVar100 = fVar89;
                          if (iVar63 == 0) {
LAB_001066a0:
                            iVar63 = 1;
                            goto LAB_001064ff;
                          }
                          fVar87 = (float)((uint)_LC41 & -(uint)(0.0 < fVar98) |
                                          ~-(uint)(0.0 < fVar98) & _LC42);
                        }
                        iVar63 = iVar63 + 1;
                      } while (iVar63 != 8);
                      cVar59 = (**(code **)(*(long *)pGVar4 + 8))(pGVar4);
                      if (cVar59 != '\0') {
                        lVar82 = *(long *)(lVar67 + 0x38);
                        if (lVar82 == 0) {
LAB_0010697b:
                          lVar70 = 0;
LAB_00104fba:
                          _err_print_index_error
                                    ("is_shape_set_as_one_way_collision",
                                     "modules/godot_physics_2d/godot_collision_object_2d.h",0x95,
                                     lVar71,lVar70,"p_idx","shapes.size()","",false,true);
                          _err_flush_stdout();
                    /* WARNING: Does not return */
                          pcVar54 = (code *)invalidInstructionException();
                          (*pcVar54)();
                        }
                        lVar70 = *(long *)(lVar82 + -8);
                        if (lVar70 <= lVar71) goto LAB_00104fba;
                        if (*(char *)(lVar82 + 0x51 + lVar81) != '\0') {
                          uStack_540 = 0;
                          local_618 = 0;
                          uStack_610 = 0;
                          local_548 = 0;
                          uStack_53c = (undefined4)__LC62;
                          local_538 = (int)((ulong)__LC62 >> 0x20);
                          uStack_534 = (undefined4)_UNK_0010a948;
                          iStack_530 = (int)((ulong)_UNK_0010a948 >> 0x20);
                          local_528 = (Vector2 *)&local_618;
                          local_548 = Vector2::normalized();
                          local_678 = local_688;
                          uStack_540 = 0x6258d727;
                          local_670 = 0;
                          lVar67 = *(long *)(lVar67 + 0x38);
                          if (lVar67 == 0) goto LAB_00104f73;
                          lVar70 = *(long *)(lVar67 + -8);
                          if (lVar70 <= lVar71) goto LAB_00104a83;
                          local_680 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x18) >>
                                                      0x20) * (fVar100 + *(float *)(this + 0xcc)),
                                               (float)*(undefined8 *)(param_2 + 0x18) *
                                               (fVar100 + *(float *)(this + 0xcc)));
                          cVar59 = GodotCollisionSolver2D::solve
                                             (pGVar4,(Transform2D *)&local_5f8,(Vector2 *)&local_680
                                              ,*(GodotShape2D **)(lVar67 + 0x48 + lVar81),local_5c8,
                                              (Vector2 *)&local_670,
                                              (_func_void_Vector2_ptr_Vector2_ptr_void_ptr *)
                                              _GLOBAL_OFFSET_TABLE_,(Vector2 *)&local_548,
                                              (Vector2 *)&local_678,0.0,0.0);
                          if ((cVar59 == '\0') || (local_538 == 0)) goto LAB_00105597;
                        }
                      }
                      fVar97 = fVar98;
                      fVar99 = fVar100;
                      if (fVar94 <= fVar98) {
                        fVar97 = fVar94;
                        fVar99 = fVar96;
                      }
                    }
LAB_00105597:
                    fVar96 = fVar99;
                    fVar94 = fVar97;
                    local_780 = local_780 + 4;
                  } while (local_780 != (long)iVar62 << 2);
                  if ((fVar94 != _LC40) &&
                     (fVar92 = fVar96, iVar69 = iVar60, fVar95 = fVar94, local_760 <= fVar94)) {
                    fVar92 = local_744;
                    iVar69 = (int)local_788;
                    fVar95 = local_760;
                  }
                }
              }
              local_760 = fVar95;
              local_788._0_4_ = iVar69;
              local_744 = fVar92;
              lVar67 = *(long *)(param_1 + 0x38);
            }
            lVar68 = lVar68 + 1;
            lVar72 = lVar72 + 0x58;
          } while (lVar67 != 0);
          if ((param_2[0x78] == (MotionParameters)0x0) || (!bVar57)) {
            iVar60 = (int)local_788;
            if (_LC40 <= local_760) goto LAB_00105267;
          }
          else {
            iVar60 = -1;
            if (local_760 < _LC40) {
              iVar60 = (int)local_788;
            }
          }
LAB_00105951:
          local_788._0_4_ = iVar60;
          auVar85 = _local_668;
          fVar92 = (float)*(undefined8 *)(param_2 + 0x18) * local_744;
          fVar95 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * local_744;
          local_508 = fVar88;
          if (fVar93 <= fVar88) {
            local_508 = fVar93;
          }
          local_528 = (Vector2 *)0x0;
          local_608 = CONCAT44((float)((ulong)local_648 >> 0x20) + fVar95,(float)local_648 + fVar92)
          ;
          fVar88 = SUB164(_local_668,0);
          local_668._4_4_ = SUB164(_local_668,4) + fVar95;
          local_668._0_4_ = fVar88 + fVar92;
          local_520 = 0;
          local_518 = 0.0;
          uStack_514 = 0;
          local_510 = 0;
          fStack_50c = 0.0;
          local_548 = 0;
          uStack_540 = 0;
          uStack_53c = 0;
          local_618 = local_658;
          uStack_610 = uStack_650;
          local_538 = 0;
          uStack_534 = 0;
          iStack_530 = 0;
          uStack_52c = 0;
          uStack_660 = auVar85._8_8_;
          iVar62 = _cull_aabb_for_body(this,param_1,(Rect2 *)local_668);
          if ((int)local_788 != -1) {
            iVar60 = (int)local_788 + 1;
            lVar67 = *(long *)(param_1 + 0x38);
LAB_00105a38:
            lVar68 = (long)(int)local_788;
            lVar72 = lVar68 * 0x58;
            if ((int)local_788 < 0) {
              if (lVar67 != 0) goto LAB_001067f2;
              _err_print_index_error
                        ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                         0x8b,lVar68,0,"p_idx","shapes.size()","",false,false);
            }
            else {
              if (lVar67 == 0) goto LAB_00105a88;
LAB_00105a50:
              if (lVar68 < *(long *)(lVar67 + -8)) {
                if (*(char *)(lVar67 + 0x50 + lVar72) == '\0') goto LAB_00105b04;
                goto LAB_00105a66;
              }
LAB_001067f2:
              _err_print_index_error
                        ("is_shape_disabled","modules/godot_physics_2d/godot_collision_object_2d.h",
                         0x8b,lVar68,*(long *)(lVar67 + -8),"p_idx","shapes.size()","",false,false);
              if (-1 < (int)local_788) {
                do {
                  lVar67 = *(long *)(param_1 + 0x38);
                  if (lVar67 == 0) goto LAB_00106905;
                  if (*(long *)(lVar67 + -8) <= lVar68) goto LAB_00106863;
LAB_00105b04:
                  Transform2D::operator*((Transform2D *)&local_5f8,(Transform2D *)&local_618);
                  lVar67 = *(long *)(param_1 + 0x38);
                  lVar71 = lVar68;
                  if (lVar67 == 0) {
                    lVar70 = 0;
                    goto LAB_00104a83;
                  }
                  lVar70 = *(long *)(lVar67 + -8);
                  if (lVar70 <= lVar68) goto LAB_00104a83;
                  pGVar4 = *(GodotShape2D **)(lVar67 + 0x48 + lVar72);
                  if (0 < iVar62) {
                    local_780 = 0;
                    do {
                      lVar67 = *(long *)(this + local_780 * 2 + 0xd8);
                      if ((*(long *)(param_2 + 0x28) != 0) && (*(int *)(param_2 + 0x4c) != 0)) {
                        uVar79 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_2 + 0x48) * 4));
                        lVar82 = *(long *)(hash_table_size_primes_inv +
                                          (ulong)*(uint *)(param_2 + 0x48) * 8);
                        uVar66 = *(long *)(lVar67 + 0x10) * 0x3ffff - 1;
                        uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                        uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                        uVar66 = uVar66 >> 0x16 ^ uVar66;
                        uVar77 = uVar66 & 0xffffffff;
                        if ((int)uVar66 == 0) {
                          uVar77 = 1;
                        }
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ = uVar77 * lVar82;
                        auVar46._8_8_ = 0;
                        auVar46._0_8_ = uVar79;
                        lVar71 = SUB168(auVar22 * auVar46,8);
                        uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar71 * 4);
                        iVar69 = SUB164(auVar22 * auVar46,8);
                        if (uVar75 != 0) {
                          uVar78 = 0;
                          do {
                            if ((uVar75 == (uint)uVar77) &&
                               (*(long *)(lVar67 + 0x10) ==
                                *(long *)(*(long *)(param_2 + 0x28) +
                                         (ulong)*(uint *)(*(long *)(param_2 + 0x30) + lVar71 * 4) *
                                         8))) goto LAB_00105d05;
                            uVar78 = uVar78 + 1;
                            auVar23._8_8_ = 0;
                            auVar23._0_8_ = (ulong)(iVar69 + 1) * lVar82;
                            auVar47._8_8_ = 0;
                            auVar47._0_8_ = uVar79;
                            lVar71 = SUB168(auVar23 * auVar47,8);
                            uVar75 = *(uint *)(*(long *)(param_2 + 0x40) + lVar71 * 4);
                            iVar69 = SUB164(auVar23 * auVar47,8);
                          } while ((uVar75 != 0) &&
                                  (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar75 * lVar82,
                                  auVar48._8_8_ = 0, auVar48._0_8_ = uVar79, auVar25._8_8_ = 0,
                                  auVar25._0_8_ =
                                       (ulong)((*(uint *)(hash_table_size_primes +
                                                         (ulong)*(uint *)(param_2 + 0x48) * 4) +
                                               iVar69) - SUB164(auVar24 * auVar48,8)) * lVar82,
                                  auVar49._8_8_ = 0, auVar49._0_8_ = uVar79,
                                  uVar78 <= SUB164(auVar25 * auVar49,8)));
                        }
                      }
                      if ((*(long *)(param_2 + 0x50) != 0) && (*(int *)(param_2 + 0x74) != 0)) {
                        uVar77 = CONCAT44(0,*(uint *)(hash_table_size_primes +
                                                     (ulong)*(uint *)(param_2 + 0x70) * 4));
                        lVar82 = *(long *)(hash_table_size_primes_inv +
                                          (ulong)*(uint *)(param_2 + 0x70) * 8);
                        uVar66 = *(long *)(lVar67 + 0x18) * 0x3ffff - 1;
                        uVar66 = (uVar66 ^ uVar66 >> 0x1f) * 0x15;
                        uVar66 = (uVar66 ^ uVar66 >> 0xb) * 0x41;
                        uVar78 = (uint)(uVar66 >> 0x16) ^ (uint)uVar66;
                        uVar75 = 1;
                        if (uVar78 != 0) {
                          uVar75 = uVar78;
                        }
                        auVar26._8_8_ = 0;
                        auVar26._0_8_ = (ulong)uVar75 * lVar82;
                        auVar50._8_8_ = 0;
                        auVar50._0_8_ = uVar77;
                        lVar71 = SUB168(auVar26 * auVar50,8);
                        uVar78 = *(uint *)(*(long *)(param_2 + 0x68) + lVar71 * 4);
                        iVar69 = SUB164(auVar26 * auVar50,8);
                        if (uVar78 != 0) {
                          uVar76 = 0;
                          do {
                            if ((uVar75 == uVar78) &&
                               (*(long *)(lVar67 + 0x18) ==
                                *(long *)(*(long *)(param_2 + 0x50) +
                                         (ulong)*(uint *)(*(long *)(param_2 + 0x58) + lVar71 * 4) *
                                         8))) goto LAB_00105d05;
                            uVar76 = uVar76 + 1;
                            auVar27._8_8_ = 0;
                            auVar27._0_8_ = (ulong)(iVar69 + 1) * lVar82;
                            auVar51._8_8_ = 0;
                            auVar51._0_8_ = uVar77;
                            lVar71 = SUB168(auVar27 * auVar51,8);
                            uVar78 = *(uint *)(*(long *)(param_2 + 0x68) + lVar71 * 4);
                            iVar69 = SUB164(auVar27 * auVar51,8);
                          } while ((uVar78 != 0) &&
                                  (auVar28._8_8_ = 0, auVar28._0_8_ = (ulong)uVar78 * lVar82,
                                  auVar52._8_8_ = 0, auVar52._0_8_ = uVar77, auVar29._8_8_ = 0,
                                  auVar29._0_8_ =
                                       (ulong)((*(uint *)(hash_table_size_primes +
                                                         (ulong)*(uint *)(param_2 + 0x70) * 4) +
                                               iVar69) - SUB164(auVar28 * auVar52,8)) * lVar82,
                                  auVar53._8_8_ = 0, auVar53._0_8_ = uVar77,
                                  uVar76 <= SUB164(auVar29 * auVar53,8)));
                        }
                      }
                      iVar69 = *(int *)(this + local_780 + 0x40d8);
                      lVar71 = (long)iVar69;
                      lVar82 = *(long *)(lVar67 + 0x38);
                      if (iVar69 < 0) {
                        if (lVar82 == 0) {
LAB_00106165:
                          lVar70 = 0;
                        }
                        else {
LAB_00106190:
                          lVar70 = *(long *)(lVar82 + -8);
                        }
                        goto LAB_00104a83;
                      }
                      if (lVar82 == 0) goto LAB_00106165;
                      if (*(long *)(lVar82 + -8) <= lVar71) goto LAB_00106190;
                      puVar65 = local_348;
                      if (0 < iVar1) {
                        do {
                          if ((((GodotShape2D *)*puVar65 == pGVar4) && (puVar65[1] == lVar67)) &&
                             (*(int *)(puVar65 + 2) == iVar69)) goto LAB_00105d05;
                          puVar65 = puVar65 + 3;
                        } while (puVar65 != local_348 + (long)iVar1 * 3);
                      }
                      lVar81 = lVar71 * 0x58;
                      pGVar5 = *(GodotShape2D **)(lVar82 + lVar81 + 0x48);
                      Transform2D::operator*(local_5c8,(Transform2D *)(lVar67 + 0x48));
                      cVar59 = (**(code **)(*(long *)pGVar4 + 8))();
                      if (cVar59 == '\0') {
LAB_001060d8:
                        fStack_50c = 0.0;
                        uStack_514 = 0;
                        local_510 = 0;
                      }
                      else {
                        lVar82 = *(long *)(lVar67 + 0x38);
                        if (lVar82 == 0) {
                          lVar70 = 0;
                          goto LAB_00104fba;
                        }
                        lVar70 = *(long *)(lVar82 + -8);
                        if (lVar70 <= lVar71) goto LAB_00104fba;
                        if (*(char *)(lVar82 + 0x51 + lVar81) == '\0') goto LAB_001060d8;
                        uVar84 = Vector2::normalized();
                        lVar82 = *(long *)(lVar67 + 0x38);
                        uStack_514 = (uint)uVar84;
                        local_510 = (uint)((ulong)uVar84 >> 0x20);
                        if (lVar82 == 0) {
                          lVar70 = 0;
LAB_00105377:
                          _err_print_index_error
                                    ("get_shape_one_way_collision_margin",
                                     "modules/godot_physics_2d/godot_collision_object_2d.h",0x9a,
                                     lVar71,lVar70,"p_idx","shapes.size()","",false,true);
                          _err_flush_stdout();
                    /* WARNING: Does not return */
                          pcVar54 = (code *)invalidInstructionException();
                          (*pcVar54)();
                        }
                        lVar70 = *(long *)(lVar82 + -8);
                        if (lVar70 <= lVar71) goto LAB_00105377;
                        fStack_50c = *(float *)(lVar82 + 0x54 + lVar81);
                        if (fStack_50c <= fVar3) {
                          fStack_50c = fVar3;
                        }
                        if ((*(int *)(lVar67 + 8) == 1) &&
                           ((iVar63 = GodotBody2D::get_mode(), iVar63 == 1 ||
                            (iVar63 = GodotBody2D::get_mode(), iVar63 == 2)))) {
                          local_670 = CONCAT44(*(float *)(this + 0x60e8) * *(float *)(lVar67 + 0xbc)
                                               ,*(float *)(lVar67 + 0xb8) *
                                                *(float *)(this + 0x60e8));
                          fVar92 = (float)Vector2::length();
                          Vector2::normalize();
                          local_638 = CONCAT44(local_510 ^ _LC57._4_4_,uStack_514 ^ (uint)_LC57);
                          fVar88 = (float)Vector2::dot((Vector2 *)&local_670);
                          if (fVar88 <= 0.0) {
                            fVar88 = 0.0;
                          }
                          fStack_50c = fVar88 * fVar92 + fStack_50c;
                        }
                      }
                      local_638 = 0;
                      local_538 = (int)local_788;
                      local_670 = 0;
                      local_548 = lVar67;
                      iStack_530 = iVar69;
                      GodotCollisionSolver2D::solve
                                (pGVar4,(Transform2D *)&local_5f8,(Vector2 *)&local_670,pGVar5,
                                 local_5c8,(Vector2 *)local_750,_rest_cbk_result,
                                 (Vector2 *)&local_548,(Vector2 *)0x0,fVar3,0.0);
LAB_00105d05:
                      local_780 = local_780 + 4;
                    } while (local_780 != (long)iVar62 << 2);
                  }
LAB_00105a66:
                  local_788._0_4_ = (int)local_788 + 1;
                  lVar72 = lVar72 + 0x58;
                  lVar68 = lVar68 + 1;
                  if (iVar60 == (int)local_788) goto LAB_00106343;
                  lVar67 = *(long *)(param_1 + 0x38);
                  if (lVar67 != 0) goto LAB_00105a50;
LAB_00105a88:
                  _err_print_index_error
                            ("is_shape_disabled",
                             "modules/godot_physics_2d/godot_collision_object_2d.h",0x8b,lVar68,0,
                             "p_idx","shapes.size()","",false,false);
                } while( true );
              }
            }
            lVar67 = *(long *)(param_1 + 0x38);
LAB_00106863:
            if (lVar67 == 0) {
LAB_00106905:
              lVar67 = 0;
            }
            else {
              lVar67 = *(long *)(lVar67 + -8);
            }
LAB_00104b78:
            _err_print_index_error
                      ("get_shape_transform","modules/godot_physics_2d/godot_collision_object_2d.h",
                       0x79,lVar68,lVar67,"p_index","shapes.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar54 = (code *)invalidInstructionException();
            (*pcVar54)();
          }
          lVar67 = *(long *)(param_1 + 0x38);
          if ((lVar67 != 0) && (iVar60 = (int)*(undefined8 *)(lVar67 + -8), 0 < iVar60)) {
            local_788._0_4_ = 0;
            goto LAB_00105a38;
          }
LAB_00106343:
          if (local_518 == 0.0) goto LAB_00105267;
          if (param_3 != (MotionResult *)0x0) {
            lVar67 = CONCAT44(uStack_53c,uStack_540);
            uVar55 = *(undefined8 *)(lVar67 + 0x10);
            uVar56 = *(undefined8 *)(lVar67 + 0x18);
            *(undefined4 *)(param_3 + 0x48) = uStack_52c;
            *(float *)(param_3 + 0x30) = local_744;
            *(ulong *)(param_3 + 0x28) = CONCAT44(local_760,local_518);
            uVar84 = *(undefined8 *)(lVar67 + 0xb8);
            *(undefined4 *)(param_3 + 0x34) = uStack_534;
            *(undefined8 *)(param_3 + 0x38) = uVar56;
            *(undefined8 *)(param_3 + 0x40) = uVar55;
            fVar3 = *(float *)(lVar67 + 0xc0);
            *(undefined8 *)(param_3 + 0x18) = local_520;
            *(Vector2 **)(param_3 + 0x10) = local_528;
            *(ulong *)(param_3 + 0x20) =
                 CONCAT44(fVar3 * (*(float *)(param_3 + 0x10) -
                                  (*(float *)(lVar67 + 0x58) + *(float *)(lVar67 + 0x118))) +
                          (float)((ulong)uVar84 >> 0x20),
                          (float)((uint)fVar3 ^ __LC36) *
                          (*(float *)(param_3 + 0x14) -
                          (*(float *)(lVar67 + 0x5c) + *(float *)(lVar67 + 0x11c))) + (float)uVar84)
            ;
            fVar88 = (float)*(undefined8 *)(param_2 + 0x18) * local_760;
            fVar92 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * local_760;
            *(float *)param_3 = fVar88;
            *(float *)(param_3 + 4) = fVar92;
            fVar3 = *(float *)(param_2 + 0x18);
            *(float *)(param_3 + 0xc) =
                 *(float *)(param_2 + 0x1c) - local_760 * *(float *)(param_2 + 0x1c);
            *(float *)(param_3 + 8) = fVar3 - local_760 * fVar3;
            *(ulong *)param_3 =
                 CONCAT44(((float)((ulong)local_648 >> 0x20) - *(float *)(param_2 + 0x14)) + fVar92,
                          ((float)local_648 - *(float *)(param_2 + 0x10)) + fVar88);
          }
        }
        if ((cVar73 != '\0') || (param_3 == (MotionResult *)0x0)) goto LAB_001044c0;
        uVar84 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_3 + 8) = 0;
        *(undefined8 *)param_3 = uVar84;
        *(ulong *)param_3 =
             CONCAT44(((float)((ulong)local_648 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20)) +
                      (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                      ((float)local_648 - (float)*(undefined8 *)(param_2 + 0x10)) +
                      (float)*(undefined8 *)param_3);
        goto LAB_001044bd;
      }
      if (param_3 == (MotionResult *)0x0) goto LAB_001044bd;
    }
    local_348[0] = 0;
    local_348[1] = 0;
    uVar84 = *(undefined8 *)(param_2 + 0x18);
    auStack_320 = (undefined1  [16])0x0;
    local_338[0] = 0;
    local_338[1] = 0;
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)(param_3 + 8) = 0;
    local_338[2] = 0;
    local_338[3] = 0;
    local_338[4] = 0;
    local_338[5] = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    uStack_308 = 0;
    uStack_304 = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    local_300 = 0;
    uStack_2fc = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)param_3 = uVar84;
    *(undefined8 *)(param_3 + 0x3c) = 0;
    *(undefined8 *)(param_3 + 0x44) = 0;
  }
LAB_001044bd:
  cVar73 = '\0';
LAB_001044c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar73;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001046c8:
  local_788 = local_788 + 4;
  if ((long)iVar60 * 4 == local_788) goto LAB_001046fb;
  goto LAB_001045a8;
}



/* GodotSpace2D::get_active_body_list() const */

GodotSpace2D * __thiscall GodotSpace2D::get_active_body_list(GodotSpace2D *this)

{
  return this + 0x40;
}



/* GodotSpace2D::body_add_to_active_list(SelfList<GodotBody2D>*) */

void __thiscall GodotSpace2D::body_add_to_active_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC67,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  *(GodotSpace2D **)param_1 = this + 0x40;
  lVar1 = *(long *)(this + 0x40);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)(this + 0x40) = param_1;
    return;
  }
  *(SelfList **)(this + 0x48) = param_1;
  *(SelfList **)(this + 0x40) = param_1;
  return;
}



/* GodotSpace2D::body_remove_from_active_list(SelfList<GodotBody2D>*) */

void __thiscall GodotSpace2D::body_remove_from_active_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(GodotSpace2D **)param_1 != this + 0x40) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (param_1 == *(SelfList **)(this + 0x40)) {
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x10);
    pSVar3 = *(SelfList **)(this + 0x48);
  }
  else {
    pSVar3 = *(SelfList **)(this + 0x48);
  }
  if (param_1 != pSVar3) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  *(long *)(this + 0x48) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* GodotSpace2D::body_add_to_mass_properties_update_list(SelfList<GodotBody2D>*) */

void __thiscall
GodotSpace2D::body_add_to_mass_properties_update_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC67,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  *(GodotSpace2D **)param_1 = this + 0x50;
  lVar1 = *(long *)(this + 0x50);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)(this + 0x50) = param_1;
    return;
  }
  *(SelfList **)(this + 0x58) = param_1;
  *(SelfList **)(this + 0x50) = param_1;
  return;
}



/* GodotSpace2D::body_remove_from_mass_properties_update_list(SelfList<GodotBody2D>*) */

void __thiscall
GodotSpace2D::body_remove_from_mass_properties_update_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(GodotSpace2D **)param_1 != this + 0x50) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (param_1 == *(SelfList **)(this + 0x50)) {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x10);
    pSVar3 = *(SelfList **)(this + 0x58);
  }
  else {
    pSVar3 = *(SelfList **)(this + 0x58);
  }
  if (param_1 != pSVar3) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  *(long *)(this + 0x58) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* GodotSpace2D::get_broadphase() */

undefined8 __thiscall GodotSpace2D::get_broadphase(GodotSpace2D *this)

{
  return *(undefined8 *)(this + 0x38);
}



/* GodotSpace2D::remove_object(GodotCollisionObject2D*) */

ulong __thiscall GodotSpace2D::remove_object(GodotSpace2D *this,GodotCollisionObject2D *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  ulong uVar37;
  int iVar39;
  uint uVar40;
  uint uVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  uint *puVar45;
  ulong uVar46;
  uint uVar47;
  uint uVar48;
  long lVar49;
  uint *puVar50;
  uint *puVar51;
  ulong uVar38;
  
  lVar6 = *(long *)(this + 0x90);
  if ((lVar6 != 0) && (*(int *)(this + 0xb4) != 0)) {
    lVar7 = *(long *)(this + 0xa8);
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4);
    uVar38 = CONCAT44(0,uVar36);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb0) * 8);
    uVar37 = (long)param_1 * 0x3ffff - 1;
    uVar37 = (uVar37 ^ uVar37 >> 0x1f) * 0x15;
    uVar37 = (uVar37 ^ uVar37 >> 0xb) * 0x41;
    uVar37 = uVar37 >> 0x16 ^ uVar37;
    uVar44 = uVar37 & 0xffffffff;
    if ((int)uVar37 == 0) {
      uVar44 = 1;
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar44 * lVar8;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    uVar37 = SUB168(auVar10 * auVar23,8);
    uVar47 = *(uint *)(lVar7 + uVar37 * 4);
    uVar46 = (ulong)uVar47;
    lVar49 = uVar37 * 4;
    if (uVar47 != 0) {
      uVar48 = 0;
      iVar39 = SUB164(auVar10 * auVar23,8);
      lVar42 = lVar49;
      do {
        if (((uint)uVar44 == (uint)uVar46) &&
           (lVar9 = *(long *)(this + 0x98),
           *(GodotCollisionObject2D **)(lVar6 + (ulong)*(uint *)(lVar9 + lVar42) * 8) == param_1)) {
          uVar48 = 0;
          while( true ) {
            if ((uint)uVar44 == uVar47) {
              uVar47 = *(uint *)(lVar9 + lVar49);
              uVar37 = (ulong)uVar47;
              if (*(GodotCollisionObject2D **)(lVar6 + uVar37 * 8) == param_1) {
                lVar42 = *(long *)(this + 0xa0);
                puVar2 = (uint *)(lVar42 + uVar37 * 4);
                uVar48 = *puVar2;
                uVar44 = (ulong)uVar48;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = (ulong)(uVar48 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar38;
                lVar49 = SUB168(auVar17 * auVar30,8) * 4;
                uVar41 = SUB164(auVar17 * auVar30,8);
                uVar46 = (ulong)uVar41;
                puVar45 = (uint *)(lVar7 + lVar49);
                if ((*puVar45 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar45 * lVar8, auVar31._8_8_ = 0,
                   auVar31._0_8_ = uVar38, auVar19._8_8_ = 0,
                   auVar19._0_8_ = (ulong)((uVar36 + uVar41) - SUB164(auVar18 * auVar31,8)) * lVar8,
                   auVar32._8_8_ = 0, auVar32._0_8_ = uVar38, SUB164(auVar19 * auVar32,8) == 0)) {
                  uVar46 = (ulong)uVar48;
                }
                else {
                  while( true ) {
                    puVar50 = (uint *)(lVar49 + lVar9);
                    puVar1 = (uint *)(lVar9 + uVar44 * 4);
                    puVar51 = (uint *)(uVar44 * 4 + lVar7);
                    puVar3 = (undefined4 *)(lVar42 + (ulong)*puVar50 * 4);
                    puVar4 = (undefined4 *)(lVar42 + (ulong)*puVar1 * 4);
                    uVar5 = *puVar4;
                    *puVar4 = *puVar3;
                    *puVar3 = uVar5;
                    uVar48 = *puVar45;
                    *puVar45 = *puVar51;
                    *puVar51 = uVar48;
                    uVar48 = *puVar50;
                    *puVar50 = *puVar1;
                    *puVar1 = uVar48;
                    auVar22._8_8_ = 0;
                    auVar22._0_8_ = (ulong)((int)uVar46 + 1) * lVar8;
                    auVar35._8_8_ = 0;
                    auVar35._0_8_ = uVar38;
                    uVar43 = SUB168(auVar22 * auVar35,8);
                    lVar49 = uVar43 * 4;
                    puVar45 = (uint *)(lVar7 + lVar49);
                    if ((*puVar45 == 0) ||
                       (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)*puVar45 * lVar8,
                       auVar33._8_8_ = 0, auVar33._0_8_ = uVar38, auVar21._8_8_ = 0,
                       auVar21._0_8_ =
                            (ulong)((SUB164(auVar22 * auVar35,8) + uVar36) -
                                   SUB164(auVar20 * auVar33,8)) * lVar8, auVar34._8_8_ = 0,
                       auVar34._0_8_ = uVar38, SUB164(auVar21 * auVar34,8) == 0)) break;
                    uVar44 = uVar46;
                    uVar46 = uVar43 & 0xffffffff;
                  }
                }
                *(undefined4 *)(lVar7 + uVar46 * 4) = 0;
                uVar36 = *(int *)(this + 0xb4) - 1;
                uVar38 = (ulong)uVar36;
                *(uint *)(this + 0xb4) = uVar36;
                if (uVar47 < uVar36) {
                  uVar36 = *(uint *)(lVar42 + uVar38 * 4);
                  *(undefined8 *)(lVar6 + uVar37 * 8) = *(undefined8 *)(lVar6 + uVar38 * 8);
                  *puVar2 = uVar36;
                  uVar38 = (ulong)*(uint *)(lVar42 + (ulong)*(uint *)(this + 0xb4) * 4);
                  *(uint *)(lVar9 + uVar38 * 4) = uVar47;
                }
                return uVar38;
              }
            }
            uVar48 = uVar48 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)(iVar39 + 1) * lVar8;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar38;
            auVar14 = auVar14 * auVar27;
            uVar47 = *(uint *)(lVar7 + auVar14._8_8_ * 4);
            iVar39 = auVar14._8_4_;
            lVar49 = auVar14._8_8_ * 4;
            if (uVar47 == 0) break;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar47 * lVar8;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar38;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)((uVar36 + iVar39) - SUB164(auVar15 * auVar28,8)) * lVar8;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar38;
            if (SUB164(auVar16 * auVar29,8) < uVar48) {
              return SUB168(auVar16 * auVar29,0);
            }
          }
          return auVar14._0_8_;
        }
        uVar48 = uVar48 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)((int)uVar37 + 1) * lVar8;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar38;
        lVar42 = SUB168(auVar11 * auVar24,8);
        uVar41 = *(uint *)(lVar7 + lVar42 * 4);
        uVar46 = (ulong)uVar41;
        uVar40 = SUB164(auVar11 * auVar24,8);
        uVar37 = (ulong)uVar40;
        lVar42 = lVar42 * 4;
      } while ((uVar41 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar46 * lVar8, auVar25._8_8_ = 0,
              auVar25._0_8_ = uVar38, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar36 + uVar40) - SUB164(auVar12 * auVar25,8)) * lVar8,
              auVar26._8_8_ = 0, auVar26._0_8_ = uVar38, uVar48 <= SUB164(auVar13 * auVar26,8)));
    }
  }
  uVar37 = _err_print_error("remove_object","modules/godot_physics_2d/godot_space_2d.cpp",0x43c,
                            "Condition \"!objects.has(p_object)\" is true.",0,0);
  return uVar37;
}



/* GodotSpace2D::get_objects() const */

GodotSpace2D * __thiscall GodotSpace2D::get_objects(GodotSpace2D *this)

{
  return this + 0x90;
}



/* GodotSpace2D::body_add_to_state_query_list(SelfList<GodotBody2D>*) */

void __thiscall GodotSpace2D::body_add_to_state_query_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC67,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  *(GodotSpace2D **)param_1 = this + 0x60;
  lVar1 = *(long *)(this + 0x60);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)(this + 0x60) = param_1;
    return;
  }
  *(SelfList **)(this + 0x68) = param_1;
  *(SelfList **)(this + 0x60) = param_1;
  return;
}



/* GodotSpace2D::body_remove_from_state_query_list(SelfList<GodotBody2D>*) */

void __thiscall
GodotSpace2D::body_remove_from_state_query_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(GodotSpace2D **)param_1 != this + 0x60) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (param_1 == *(SelfList **)(this + 0x60)) {
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x10);
    pSVar3 = *(SelfList **)(this + 0x68);
  }
  else {
    pSVar3 = *(SelfList **)(this + 0x68);
  }
  if (param_1 != pSVar3) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  *(long *)(this + 0x68) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* GodotSpace2D::area_add_to_monitor_query_list(SelfList<GodotArea2D>*) */

void __thiscall GodotSpace2D::area_add_to_monitor_query_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC67,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  *(GodotSpace2D **)param_1 = this + 0x70;
  lVar1 = *(long *)(this + 0x70);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)(this + 0x70) = param_1;
    return;
  }
  *(SelfList **)(this + 0x78) = param_1;
  *(SelfList **)(this + 0x70) = param_1;
  return;
}



/* GodotSpace2D::area_remove_from_monitor_query_list(SelfList<GodotArea2D>*) */

void __thiscall
GodotSpace2D::area_remove_from_monitor_query_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(GodotSpace2D **)param_1 != this + 0x70) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (param_1 == *(SelfList **)(this + 0x70)) {
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x10);
    pSVar3 = *(SelfList **)(this + 0x78);
  }
  else {
    pSVar3 = *(SelfList **)(this + 0x78);
  }
  if (param_1 != pSVar3) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  *(long *)(this + 0x78) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* GodotSpace2D::area_add_to_moved_list(SelfList<GodotArea2D>*) */

void __thiscall GodotSpace2D::area_add_to_moved_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  
  if (*(long *)param_1 != 0) {
    _err_print_error(&_LC67,"./core/templates/self_list.h",0x2e,
                     "Condition \"p_elem->_root\" is true.",0,0);
    return;
  }
  *(GodotSpace2D **)param_1 = this + 0x80;
  lVar1 = *(long *)(this + 0x80);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    *(SelfList **)(lVar1 + 0x18) = param_1;
    *(SelfList **)(this + 0x80) = param_1;
    return;
  }
  *(SelfList **)(this + 0x88) = param_1;
  *(SelfList **)(this + 0x80) = param_1;
  return;
}



/* GodotSpace2D::area_remove_from_moved_list(SelfList<GodotArea2D>*) */

void __thiscall GodotSpace2D::area_remove_from_moved_list(GodotSpace2D *this,SelfList *param_1)

{
  long lVar1;
  long lVar2;
  SelfList *pSVar3;
  
  if (*(GodotSpace2D **)param_1 != this + 0x80) {
    _err_print_error("remove","./core/templates/self_list.h",0x50,
                     "Condition \"p_elem->_root != this\" is true.",0,0);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar1;
  }
  if (param_1 == *(SelfList **)(this + 0x80)) {
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x10);
    pSVar3 = *(SelfList **)(this + 0x88);
  }
  else {
    pSVar3 = *(SelfList **)(this + 0x88);
  }
  if (param_1 != pSVar3) {
    *(undefined8 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    return;
  }
  *(long *)(this + 0x88) = lVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  return;
}



/* GodotSpace2D::get_moved_area_list() const */

GodotSpace2D * __thiscall GodotSpace2D::get_moved_area_list(GodotSpace2D *this)

{
  return this + 0x80;
}



/* GodotSpace2D::call_queries() */

void __thiscall GodotSpace2D::call_queries(GodotSpace2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(this + 0x60);
  while (plVar1 != (long *)0x0) {
    if ((GodotSpace2D *)*plVar1 == this + 0x60) {
      lVar3 = plVar1[2];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = plVar1[3];
      }
      lVar2 = plVar1[3];
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = plVar1[2];
      }
      *(long *)(this + 0x60) = lVar3;
      if (*(long **)(this + 0x68) == plVar1) {
        *(long *)(this + 0x68) = lVar2;
      }
      *plVar1 = 0;
      *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
    }
    else {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
    }
    GodotBody2D::call_queries();
    plVar1 = *(long **)(this + 0x60);
  }
  plVar1 = *(long **)(this + 0x70);
  while (plVar1 != (long *)0x0) {
    if ((GodotSpace2D *)*plVar1 == this + 0x70) {
      lVar3 = plVar1[2];
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = plVar1[3];
      }
      lVar2 = plVar1[3];
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = plVar1[2];
      }
      *(long *)(this + 0x70) = lVar3;
      if (plVar1 == *(long **)(this + 0x78)) {
        *(long *)(this + 0x78) = lVar2;
      }
      *plVar1 = 0;
      *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
    }
    else {
      _err_print_error("remove","./core/templates/self_list.h",0x50,
                       "Condition \"p_elem->_root != this\" is true.",0,0);
    }
    GodotArea2D::call_queries();
    plVar1 = *(long **)(this + 0x70);
  }
  return;
}



/* GodotSpace2D::setup() */

void __thiscall GodotSpace2D::setup(GodotSpace2D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(this + 0x6108) = 0;
  if (*(long *)(this + 0x50) != 0) {
    do {
      GodotBody2D::update_mass_properties();
      plVar1 = *(long **)(this + 0x50);
      if ((GodotSpace2D *)*plVar1 == this + 0x50) {
        lVar3 = plVar1[2];
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x18) = plVar1[3];
        }
        lVar2 = plVar1[3];
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
          lVar3 = plVar1[2];
        }
        *(long *)(this + 0x50) = lVar3;
        if (plVar1 == *(long **)(this + 0x58)) {
          *(long *)(this + 0x58) = lVar2;
        }
        *plVar1 = 0;
        *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
      }
      else {
        _err_print_error("remove","./core/templates/self_list.h",0x50,
                         "Condition \"p_elem->_root != this\" is true.",0,0);
        lVar3 = *(long *)(this + 0x50);
      }
    } while (lVar3 != 0);
    return;
  }
  return;
}



/* GodotSpace2D::update() */

void __thiscall GodotSpace2D::update(GodotSpace2D *this)

{
                    /* WARNING: Could not recover jumptable at 0x0010756b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x38) + 0x58))();
  return;
}



/* GodotSpace2D::set_param(PhysicsServer2D::SpaceParameter, float) */

void __thiscall GodotSpace2D::set_param(float param_1,GodotSpace2D *this,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *(float *)(this + 0xc4) = param_1;
    return;
  case 1:
    *(float *)(this + 200) = param_1;
    return;
  case 2:
    *(float *)(this + 0xcc) = param_1;
    return;
  case 3:
    *(float *)(this + 0xd0) = param_1;
    return;
  case 4:
    *(float *)(this + 0x60d8) = param_1;
    return;
  case 5:
    *(float *)(this + 0x60dc) = param_1;
    return;
  case 6:
    *(float *)(this + 0x60e0) = param_1;
    return;
  case 7:
    *(float *)(this + 0xd4) = param_1;
    return;
  case 8:
    *(int *)(this + 0xc0) = (int)param_1;
  }
  return;
}



/* GodotSpace2D::get_param(PhysicsServer2D::SpaceParameter) const */

float __thiscall GodotSpace2D::get_param(GodotSpace2D *this,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return *(float *)(this + 0xc4);
  case 1:
    return *(float *)(this + 200);
  case 2:
    return *(float *)(this + 0xcc);
  case 3:
    return *(float *)(this + 0xd0);
  case 4:
    return *(float *)(this + 0x60d8);
  case 5:
    return *(float *)(this + 0x60dc);
  case 6:
    return *(float *)(this + 0x60e0);
  case 7:
    return *(float *)(this + 0xd4);
  case 8:
    return (float)*(int *)(this + 0xc0);
  default:
    return 0.0;
  }
}



/* GodotSpace2D::lock() */

void __thiscall GodotSpace2D::lock(GodotSpace2D *this)

{
  this[0x60e4] = (GodotSpace2D)0x1;
  return;
}



/* GodotSpace2D::unlock() */

void __thiscall GodotSpace2D::unlock(GodotSpace2D *this)

{
  this[0x60e4] = (GodotSpace2D)0x0;
  return;
}



/* GodotSpace2D::is_locked() const */

GodotSpace2D __thiscall GodotSpace2D::is_locked(GodotSpace2D *this)

{
  return this[0x60e4];
}



/* GodotSpace2D::get_direct_state() */

undefined8 __thiscall GodotSpace2D::get_direct_state(GodotSpace2D *this)

{
  return *(undefined8 *)(this + 0x28);
}



/* GodotSpace2D::GodotSpace2D() */

void __thiscall GodotSpace2D::GodotSpace2D(GodotSpace2D *this)

{
  int iVar1;
  long *plVar2;
  PhysicsDirectSpaceState2D *this_00;
  long in_FS_OFFSET;
  float fVar3;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc4) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 2;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0x60d8) = 0;
  *(undefined4 *)(this + 0x60e0) = 0;
  this[0x60e4] = (GodotSpace2D)0x0;
  *(undefined8 *)(this + 0x60e8) = 0x3a83126f;
  *(undefined8 *)(this + 0x60f0) = 0;
  *(undefined8 *)(this + 0x6100) = 0;
  *(undefined4 *)(this + 0x6108) = 0;
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/sleep_threshold_linear",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0x60d8) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/sleep_threshold_angular",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0x60dc) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/time_before_sleep",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0x60e0) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/solver/solver_iterations",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0xc0) = iVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/solver/contact_recycle_radius",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0xc4) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/solver/contact_max_separation",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 200) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"physics/2d/solver/contact_max_allowed_penetration",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0xcc) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/solver/default_contact_bias",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0xd0) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/2d/solver/default_constraint_bias",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  fVar3 = Variant::operator_cast_to_float((Variant *)local_48);
  *(float *)(this + 0xd4) = fVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  plVar2 = (long *)(*GodotBroadPhase2D::create_func)();
  *(long **)(this + 0x38) = plVar2;
  (**(code **)(*plVar2 + 0x48))(plVar2,_broadphase_pair,this);
  (**(code **)(**(long **)(this + 0x38) + 0x50))(*(long **)(this + 0x38),_broadphase_unpair,this);
  this_00 = (PhysicsDirectSpaceState2D *)operator_new(0x180,"");
  PhysicsDirectSpaceState2D::PhysicsDirectSpaceState2D(this_00);
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010a540;
  postinitialize_handler((Object *)this_00);
  *(PhysicsDirectSpaceState2D **)(this + 0x28) = this_00;
  *(GodotSpace2D **)(this_00 + 0x178) = this;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotSpace2D::~GodotSpace2D() */

void __thiscall GodotSpace2D::~GodotSpace2D(GodotSpace2D *this)

{
  long *plVar1;
  Object *pOVar2;
  void *pvVar3;
  long lVar4;
  char cVar5;
  
  plVar1 = *(long **)(this + 0x38);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  Memory::free_static(plVar1,false);
  pOVar2 = *(Object **)(this + 0x28);
  cVar5 = predelete_handler(pOVar2);
  if (cVar5 != '\0') {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (*(long *)(this + 0x6100) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x6100) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)(this + 0x6100);
      *(undefined8 *)(this + 0x6100) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      pvVar3 = *(void **)(this + 0x90);
      goto joined_r0x00107dc7;
    }
  }
  pvVar3 = *(void **)(this + 0x90);
joined_r0x00107dc7:
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xb4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4) != 0) {
        memset(*(void **)(this + 0xa8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4) << 2);
      }
      *(undefined4 *)(this + 0xb4) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa0),false);
    Memory::free_static(*(void **)(this + 0x98),false);
    Memory::free_static(*(void **)(this + 0xa8),false);
    return;
  }
  return;
}



/* GodotSpace2D::add_object(GodotCollisionObject2D*) */

void __thiscall GodotSpace2D::add_object(GodotSpace2D *this,GodotCollisionObject2D *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long in_FS_OFFSET;
  GodotCollisionObject2D *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x90) != 0) && (*(int *)(this + 0xb4) != 0)) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb0) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar16 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(*(long *)(this + 0xa8) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar16 == uVar13) &&
           (param_1 ==
            *(GodotCollisionObject2D **)
             (*(long *)(this + 0x90) + (ulong)*(uint *)(*(long *)(this + 0x98) + lVar12 * 4) * 8)))
        {
          _err_print_error("add_object","modules/godot_physics_2d/godot_space_2d.cpp",0x437,
                           "Condition \"objects.has(p_object)\" is true.",0,0,this + 0x90,param_1);
          goto LAB_00107f6e;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(*(long *)(this + 0xa8) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
      } while ((uVar13 != 0) &&
              (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar1, auVar8._8_8_ = 0,
              auVar8._0_8_ = uVar14, auVar5._8_8_ = 0,
              auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                               (ulong)*(uint *)(this + 0xb0) * 4) + iVar11) -
                                    SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, uVar15 <= SUB164(auVar5 * auVar9,8)));
    }
  }
  HashSet<GodotCollisionObject2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotCollisionObject2D*>>
  ::insert(local_58);
LAB_00107f6e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* PhysicsDirectSpaceState2D::is_class_ptr(void*) const */

uint __thiscall
PhysicsDirectSpaceState2D::is_class_ptr(PhysicsDirectSpaceState2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10a6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* PhysicsDirectSpaceState2D::_getv(StringName const&, Variant&) const */

undefined8 PhysicsDirectSpaceState2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState2D::_setv(StringName const&, Variant const&) */

undefined8 PhysicsDirectSpaceState2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState2D::_validate_propertyv(PropertyInfo&) const */

void PhysicsDirectSpaceState2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PhysicsDirectSpaceState2D::_property_can_revertv(StringName const&) const */

undefined8 PhysicsDirectSpaceState2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicsDirectSpaceState2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicsDirectSpaceState2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsDirectSpaceState2D::_notificationv(int, bool) */

void PhysicsDirectSpaceState2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotPhysicsDirectSpaceState2D::is_class_ptr(void*) const */

uint __thiscall
GodotPhysicsDirectSpaceState2D::is_class_ptr(GodotPhysicsDirectSpaceState2D *this,void *param_1)

{
  return (uint)CONCAT71(0x10a6,(undefined4 *)param_1 ==
                               &PhysicsDirectSpaceState2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a6,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a6,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* GodotPhysicsDirectSpaceState2D::_getv(StringName const&, Variant&) const */

undefined8 GodotPhysicsDirectSpaceState2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectSpaceState2D::_setv(StringName const&, Variant const&) */

undefined8 GodotPhysicsDirectSpaceState2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectSpaceState2D::_validate_propertyv(PropertyInfo&) const */

void GodotPhysicsDirectSpaceState2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* GodotPhysicsDirectSpaceState2D::_property_can_revertv(StringName const&) const */

undefined8 GodotPhysicsDirectSpaceState2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* GodotPhysicsDirectSpaceState2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8
GodotPhysicsDirectSpaceState2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* GodotPhysicsDirectSpaceState2D::_notificationv(int, bool) */

void GodotPhysicsDirectSpaceState2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D() */

void __thiscall
GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D
          (GodotPhysicsDirectSpaceState2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a3b0;
  Object::~Object((Object *)this);
  return;
}



/* GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D() */

void __thiscall
GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D
          (GodotPhysicsDirectSpaceState2D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010a3b0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* GodotPhysicsDirectSpaceState2D::_get_class_namev() const */

undefined8 * GodotPhysicsDirectSpaceState2D::_get_class_namev(void)

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
LAB_001083c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001083c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "GodotPhysicsDirectSpaceState2D");
      goto LAB_0010842e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GodotPhysicsDirectSpaceState2D")
  ;
LAB_0010842e:
  return &_get_class_namev()::_class_name_static;
}



/* PhysicsDirectSpaceState2D::_get_class_namev() const */

undefined8 * PhysicsDirectSpaceState2D::_get_class_namev(void)

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
LAB_001084b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001084b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsDirectSpaceState2D");
      goto LAB_0010851e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsDirectSpaceState2D");
LAB_0010851e:
  return &_get_class_namev()::_class_name_static;
}



/* GodotPhysicsDirectSpaceState2D::get_class() const */

void GodotPhysicsDirectSpaceState2D::get_class(void)

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



/* PhysicsDirectSpaceState2D::get_class() const */

void PhysicsDirectSpaceState2D::get_class(void)

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



/* PhysicsDirectSpaceState2D::is_class(String const&) const */

undefined8 __thiscall
PhysicsDirectSpaceState2D::is_class(PhysicsDirectSpaceState2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00108b8f;
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
LAB_00108b8f:
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
    if (cVar6 != '\0') goto LAB_00108c43;
  }
  cVar6 = String::operator==(param_1,"PhysicsDirectSpaceState2D");
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
              if (lVar5 == 0) goto LAB_00108cf3;
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
LAB_00108cf3:
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
      if (cVar6 != '\0') goto LAB_00108c43;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108c43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectSpaceState2D::is_class(String const&) const */

undefined8 __thiscall
GodotPhysicsDirectSpaceState2D::is_class(GodotPhysicsDirectSpaceState2D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00108e1f;
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
LAB_00108e1f:
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
    if (cVar5 != '\0') goto LAB_00108ed3;
  }
  cVar5 = String::operator==(param_1,"GodotPhysicsDirectSpaceState2D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = PhysicsDirectSpaceState2D::is_class((PhysicsDirectSpaceState2D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00108ed3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState2D::_initialize_classv() */

void PhysicsDirectSpaceState2D::_initialize_classv(void)

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
    local_38 = "PhysicsDirectSpaceState2D";
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
    if ((code *)PTR__bind_methods_0010d008 != Object::_bind_methods) {
      PhysicsDirectSpaceState2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsDirectSpaceState2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void PhysicsDirectSpaceState2D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "PhysicsDirectSpaceState2D";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsDirectSpaceState2D";
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
LAB_00109238:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109238;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00109256;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00109256:
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
  StringName::StringName((StringName *)&local_78,"PhysicsDirectSpaceState2D",false);
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



/* GodotPhysicsDirectSpaceState2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
GodotPhysicsDirectSpaceState2D::_get_property_listv
          (GodotPhysicsDirectSpaceState2D *this,List *param_1,bool param_2)

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
    PhysicsDirectSpaceState2D::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GodotPhysicsDirectSpaceState2D";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GodotPhysicsDirectSpaceState2D";
  local_98 = 0;
  local_70 = 0x1e;
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
LAB_00109638:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109638;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109655;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109655:
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
  StringName::StringName((StringName *)&local_78,"GodotPhysicsDirectSpaceState2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsDirectSpaceState2D::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GodotPhysicsDirectSpaceState2D::_initialize_classv() */

void GodotPhysicsDirectSpaceState2D::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_00109a64;
  if (PhysicsDirectSpaceState2D::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "PhysicsDirectSpaceState2D";
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
LAB_00109b6e:
      if ((code *)PTR__bind_methods_0010d008 != Object::_bind_methods) {
LAB_00109b7e:
        PhysicsDirectSpaceState2D::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00109b6e;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010d008 != Object::_bind_methods) goto LAB_00109b7e;
    }
    PhysicsDirectSpaceState2D::initialize_class()::initialized = '\x01';
  }
  local_48 = "PhysicsDirectSpaceState2D";
  local_58 = 0;
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "GodotPhysicsDirectSpaceState2D";
  local_60 = 0;
  local_40 = 0x1e;
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
LAB_00109a64:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GodotSpace2D::get_param(PhysicsServer2D::SpaceParameter) const [clone .cold] */

undefined8 GodotSpace2D::get_param(void)

{
  return 0;
}



/* HashSet<GodotCollisionObject2D*, HashMapHasherDefault,
   HashMapComparatorDefault<GodotCollisionObject2D*> >::insert(GodotCollisionObject2D* const&) */

undefined1  [16]
HashSet<GodotCollisionObject2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotCollisionObject2D*>>
::insert(GodotCollisionObject2D **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  GodotCollisionObject2D *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (GodotCollisionObject2D *)*in_RSI;
  if (local_88 == (GodotCollisionObject2D *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (GodotCollisionObject2D *)*in_RSI;
    if (local_88 != (GodotCollisionObject2D *)0x0) goto LAB_00109d3f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_00109d3f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0010a1e1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * _LC43 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (GodotCollisionObject2D *)*in_RSI;
      goto LAB_0010a1e1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (GodotCollisionObject2D *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0010a1e1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* WARNING: Control flow encountered bad instruction data */
/* GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D() */

void __thiscall
GodotPhysicsDirectSpaceState2D::~GodotPhysicsDirectSpaceState2D
          (GodotPhysicsDirectSpaceState2D *this)

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



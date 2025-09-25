/* PhysicsBody3D::get_axis_lock(PhysicsServer3D::BodyAxis) const */undefined2 PhysicsBody3D::get_axis_lock(PhysicsBody3D *this, ushort param_2) {
   return CONCAT11((char)( *(ushort*)( this + 0x620 ) >> 8 ), ( *(ushort*)( this + 0x620 ) & param_2 ) != 0);
}
/* PhysicsBody3D::get_angular_velocity() const */undefined1[16];PhysicsBody3D::get_angular_velocity(void) {
   long in_FS_OFFSET;
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ZEXT816(0);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody3D::get_inverse_mass() const */undefined8 PhysicsBody3D::get_inverse_mass(void) {
   return 0;
}
/* PhysicsBody3D::set_axis_lock(PhysicsServer3D::BodyAxis, bool) */void PhysicsBody3D::set_axis_lock(PhysicsBody3D *this, undefined4 param_2, char param_3) {
   ushort uVar1;
   long *plVar2;
   uVar1 = ~(ushort)param_2 & *(ushort*)( this + 0x620 );
   if (param_3 != '\0') {
      uVar1 = *(ushort*)( this + 0x620 ) | (ushort)param_2;
   }

   *(ushort*)( this + 0x620 ) = uVar1;
   plVar2 = (long*)PhysicsServer3D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001000c2. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar2 + 0x460 ) )(plVar2, *(undefined8*)( this + 0x538 ), param_2, param_3);
   return;
}
/* PhysicsBody3D::get_gravity() const */undefined1  [16] __thiscallPhysicsBody3D::get_gravity(PhysicsBody3D *this) {
   long lVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)PhysicsServer3D::get_singleton();
   plVar2 = (long*)( **(code**)( *plVar2 + 0x4d0 ) )(plVar2, *(undefined8*)( this + 0x538 ));
   if (plVar2 == (long*)0x0) {
      _err_print_error("get_gravity", "scene/3d/physics/physics_body_3d.cpp", 0xb8, "Parameter \"state\" is null.", 0, 0);
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return ZEXT816(0);
      }

   }
 else if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010012b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      auVar3 = ( **(code**)( *plVar2 + 0x150 ) )();
      return auVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody3D::remove_collision_exception_with(Node*) */void PhysicsBody3D::remove_collision_exception_with(PhysicsBody3D *this, Node *param_1) {
   long lVar1;
   long *plVar2;
   if (param_1 == (Node*)0x0) {
      _err_print_error("remove_collision_exception_with", "scene/3d/physics/physics_body_3d.cpp", 0x50, "Parameter \"p_node\" is null.", 0, 0);
      return;
   }

   lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &CollisionObject3D::typeinfo, 0);
   if (lVar1 != 0) {
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      /* WARNING: Could not recover jumptable at 0x001001d8. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar2 + 0x478 ) )(plVar2, *(undefined8*)( this + 0x538 ), *(undefined8*)( lVar1 + 0x538 ));
      return;
   }

   _err_print_error("remove_collision_exception_with", "scene/3d/physics/physics_body_3d.cpp", 0x52, "Parameter \"collision_object\" is null.", "Collision exception only works between two nodes that inherit from CollisionObject3D (such as Area3D or PhysicsBody3D).", 0, 0);
   return;
}
/* PhysicsBody3D::add_collision_exception_with(Node*) */void PhysicsBody3D::add_collision_exception_with(PhysicsBody3D *this, Node *param_1) {
   long lVar1;
   long *plVar2;
   if (param_1 == (Node*)0x0) {
      _err_print_error("add_collision_exception_with", "scene/3d/physics/physics_body_3d.cpp", 0x49, "Parameter \"p_node\" is null.", 0, 0);
      return;
   }

   lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &CollisionObject3D::typeinfo, 0);
   if (lVar1 != 0) {
      plVar2 = (long*)PhysicsServer3D::get_singleton();
      /* WARNING: Could not recover jumptable at 0x00100298. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar2 + 0x470 ) )(plVar2, *(undefined8*)( this + 0x538 ), *(undefined8*)( lVar1 + 0x538 ));
      return;
   }

   _err_print_error("add_collision_exception_with", "scene/3d/physics/physics_body_3d.cpp", 0x4b, "Parameter \"collision_object\" is null.", "Collision exception only works between two nodes that inherit from CollisionObject3D (such as Area3D or PhysicsBody3D).", 0, 0);
   return;
}
/* PhysicsBody3D::test_move(Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&,
   float, bool, int) */uint PhysicsBody3D::test_move(PhysicsBody3D *this, Transform3D *param_1, Vector3 *param_2, Ref *param_3, float param_4, bool param_5, int param_6) {
   undefined8 uVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long in_FS_OFFSET;
   undefined8 local_af8;
   undefined8 uStack_af0;
   undefined8 local_ae8;
   undefined8 uStack_ae0;
   undefined8 local_ad8;
   undefined8 uStack_ad0;
   undefined8 local_ac8;
   undefined4 local_ac0;
   float local_abc;
   int local_ab8;
   undefined1 local_ab4;
   undefined1 local_ab0[16];
   undefined1 local_aa0[16];
   undefined8 local_a90;
   undefined1 local_a88[16];
   undefined1 local_a78[16];
   undefined8 local_a68;
   undefined1 local_a60;
   undefined8 local_a58;
   undefined4 local_a50;
   undefined8 local_a4c;
   undefined4 local_a44;
   undefined8 local_a40;
   undefined4 local_a38;
   undefined8 local_a30[320];
   undefined4 local_30[4];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = (byte)this[0x2fa] >> 6 & 1;
   if (( (byte)this[0x2fa] >> 6 & 1 ) == 0) {
      _err_print_error("test_move", "scene/3d/physics/physics_body_3d.cpp", 0xa5, "Condition \"!is_inside_tree()\" is true. Returning: false", 0, 0);
   }
 else {
      local_a58 = 0;
      local_a50 = 0;
      local_a4c = 0;
      local_a44 = 0;
      local_a40 = 0;
      local_a38 = 0;
      puVar2 = local_a30;
      do {
         *puVar2 = 0;
         puVar3 = puVar2 + 10;
         *(undefined4*)( puVar2 + 1 ) = 0;
         *(undefined8*)( (long)puVar2 + 0xc ) = 0;
         *(undefined4*)( (long)puVar2 + 0x14 ) = 0;
         puVar2[3] = 0;
         *(undefined4*)( puVar2 + 4 ) = 0;
         *(undefined8*)( (long)puVar2 + 0x24 ) = 0;
         *(undefined4*)( (long)puVar2 + 0x2c ) = 0;
         *(undefined4*)( puVar2 + 6 ) = 0;
         *(undefined4*)( (long)puVar2 + 0x34 ) = 0;
         *(undefined1(*) [16])( puVar2 + 7 ) = (undefined1[16])0x0;
         *(undefined4*)( puVar2 + 9 ) = 0;
         puVar2 = puVar3;
      }
 while ( puVar3 != (undefined8*)local_30 );
      local_af8 = *(undefined8*)param_1;
      uStack_af0 = *(undefined8*)( param_1 + 8 );
      local_ae8 = *(undefined8*)( param_1 + 0x10 );
      uStack_ae0 = *(undefined8*)( param_1 + 0x18 );
      local_ad8 = *(undefined8*)( param_1 + 0x20 );
      uStack_ad0 = *(undefined8*)( param_1 + 0x28 );
      local_ac8 = *(undefined8*)param_2;
      puVar2 = &local_a58;
      if (*(long*)param_3 != 0) {
         puVar2 = (undefined8*)( *(long*)param_3 + 0x188 );
      }

      local_ac0 = *(undefined4*)( param_2 + 8 );
      local_ab0 = (undefined1[16])0x0;
      local_aa0 = (undefined1[16])0x0;
      local_a88 = (undefined1[16])0x0;
      local_a78 = (undefined1[16])0x0;
      local_30[0] = 0;
      local_ab4 = 0;
      local_a90 = _LC11;
      local_a68 = _LC11;
      local_abc = param_4;
      local_ab8 = param_6;
      local_a60 = param_5;
      plVar4 = (long*)PhysicsServer3D::get_singleton();
      uVar5 = ( **(code**)( *plVar4 + 0x4d8 ) )(plVar4, *(undefined8*)( this + 0x538 ), &local_af8, puVar2);
      uVar1 = local_a88._0_8_;
      if ((void*)local_a88._0_8_ != (void*)0x0) {
         if (local_a68._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_a68 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_a78._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a68 & 0xffffffff ) * 4 ) * 4);
            }

            local_a68 = local_a68 & 0xffffffff;
         }

         Memory::free_static((void*)uVar1, false);
         Memory::free_static((void*)local_a78._0_8_, false);
         Memory::free_static((void*)local_a88._8_8_, false);
         Memory::free_static((void*)local_a78._8_8_, false);
      }

      uVar1 = local_ab0._0_8_;
      if ((void*)local_ab0._0_8_ != (void*)0x0) {
         if (local_a90._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_a90 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_aa0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a90 & 0xffffffff ) * 4 ) * 4);
            }

            local_a90 = local_a90 & 0xffffffff;
         }

         Memory::free_static((void*)uVar1, false);
         Memory::free_static((void*)local_aa0._0_8_, false);
         Memory::free_static((void*)local_ab0._8_8_, false);
         Memory::free_static((void*)local_aa0._8_8_, false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)this = 0;
      }

   }

   plVar1 = (long*)( *(long*)param_1 + -0x10 );
   if (*(long*)param_1 != 0) {
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
      }
 while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }

   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* PhysicsBody3D::PhysicsBody3D(PhysicsServer3D::BodyMode) */void PhysicsBody3D::PhysicsBody3D(PhysicsBody3D *this, undefined4 param_2) {
   long *plVar1;
   undefined8 uVar2;
   plVar1 = (long*)PhysicsServer3D::get_singleton();
   uVar2 = ( **(code**)( *plVar1 + 0x2f8 ) )(plVar1);
   CollisionObject3D::CollisionObject3D((CollisionObject3D*)this, uVar2, 0);
   *(undefined***)this = &PTR__initialize_classv_0010c690;
   *(undefined8*)( this + 0x618 ) = 0;
   *(undefined2*)( this + 0x620 ) = 0;
   CollisionObject3D::set_body_mode(this, param_2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* PhysicsBody3D::move_and_collide(PhysicsServer3D::MotionParameters const&,
   PhysicsServer3D::MotionResult&, bool, bool) */undefined4 PhysicsBody3D::move_and_collide(PhysicsBody3D *this, MotionParameters *param_1, MotionResult *param_2, bool param_3, bool param_4) {
   ushort uVar1;
   long lVar2;
   undefined4 uVar3;
   long *plVar4;
   long lVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   undefined8 uVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar4 = (long*)PhysicsServer3D::get_singleton();
   uVar3 = ( **(code**)( *plVar4 + 0x4d8 ) )(plVar4, *(undefined8*)( this + 0x538 ), param_1, param_2);
   if (param_4) {
      fVar7 = *(float*)( param_1 + 0x30 );
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong*)( param_1 + 0x34 );
      fVar6 = (float)( *(ulong*)( param_1 + 0x34 ) >> 0x20 );
      fVar6 = SQRT(fVar7 * fVar7 + *(float*)( param_1 + 0x34 ) * *(float*)( param_1 + 0x34 ) + fVar6 * fVar6);
      if ((char)uVar3 == '\0') {
         fVar12 = *(float*)( param_1 + 0x3c ) + __LC17;
      }
 else {
         fVar12 = *(float*)( param_1 + 0x3c ) + ( *(float*)( param_2 + 0x20 ) - *(float*)( param_2 + 0x1c ) ) * fVar6 + __LC17;
         if (fVar12 < *(float*)( param_2 + 0x58 )) goto LAB_00100838;
      }

      if ((double)fVar6 <= __LC18) {
         uVar9 = 0;
         fVar7 = 0.0;
      }
 else {
         fVar7 = fVar7 / fVar6;
         auVar11._4_4_ = fVar6;
         auVar11._0_4_ = fVar6;
         auVar11._8_8_ = _LC19;
         auVar10 = divps(auVar10, auVar11);
         uVar9 = auVar10._0_8_;
      }

      fVar6 = (float)( (ulong)uVar9 >> 0x20 );
      fVar15 = fVar7 * *(float*)param_2 + (float)uVar9 * *(float*)( param_2 + 4 ) + fVar6 * *(float*)( param_2 + 8 );
      fVar7 = fVar7 * fVar15;
      fVar14 = fVar15 * (float)uVar9;
      fVar15 = fVar15 * fVar6;
      fVar6 = *(float*)param_2 - fVar7;
      fVar13 = *(float*)( param_2 + 4 ) - fVar14;
      fVar8 = *(float*)( param_2 + 8 ) - fVar15;
      if (SQRT(fVar6 * fVar6 + fVar13 * fVar13 + fVar8 * fVar8) < fVar12) {
         *(float*)param_2 = fVar7;
         *(float*)( param_2 + 4 ) = fVar14;
         *(float*)( param_2 + 8 ) = fVar15;
         fVar6 = *(float*)( param_1 + 0x30 );
         *(ulong*)( param_2 + 0x10 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( param_1 + 0x34 ) >> 0x20 ) - fVar15, (float)*(undefined8*)( param_1 + 0x34 ) - fVar14);
         *(float*)( param_2 + 0xc ) = fVar6 - fVar7;
      }

   }

   LAB_00100838:uVar1 = *(ushort*)( this + 0x620 );
   lVar5 = 0;
   do {
      if (( uVar1 >> ( (uint)lVar5 & 0x1f ) & 1 ) != 0) {
         *(undefined4*)( param_2 + lVar5 * 4 ) = 0;
      }

      lVar5 = lVar5 + 1;
   }
 while ( lVar5 != 3 );
   if (!param_3) {
      Node3D::set_global_transform((Transform3D*)this);
   }

   if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* PhysicsBody3D::_move(Vector3 const&, bool, float, bool, int) */Vector3 *PhysicsBody3D::_move(Vector3 *param_1, bool param_2, float param_3, bool param_4, int param_5) {
   undefined8 uVar1;
   char cVar2;
   int iVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   RefCounted *this;
   RefCounted *pRVar6;
   RefCounted *pRVar7;
   long lVar8;
   ulong uVar9;
   undefined7 in_register_00000011;
   undefined7 in_register_00000031;
   PhysicsBody3D *this_00;
   MotionResult *pMVar10;
   Object *pOVar11;
   Object *pOVar12;
   long in_FS_OFFSET;
   byte bVar13;
   undefined8 local_b18[3];
   undefined8 uStack_b00;
   undefined8 uStack_af0;
   undefined8 local_ae8;
   undefined4 local_ae0;
   float local_adc;
   undefined1 local_ad4;
   undefined1 local_ad0[16];
   undefined1 local_ac0[16];
   undefined8 local_ab0;
   undefined1 local_aa8[16];
   undefined1 local_a98[16];
   undefined8 local_a88;
   undefined8 local_a78;
   undefined4 uStack_a70;
   undefined4 uStack_a6c;
   undefined4 uStack_a68;
   undefined4 uStack_a64;
   undefined8 uStack_a60;
   undefined4 local_a58;
   undefined8 auStack_a50[319];
   undefined4 local_54;
   undefined4 auStack_50[4];
   long local_40;
   this_00 = (PhysicsBody3D*)CONCAT71(in_register_00000031, param_2);
   bVar13 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_global_transform();
   uStack_b00 = uStack_a60;
   local_b18[0] = local_a78;
   local_ae8 = *(undefined8*)CONCAT71(in_register_00000011, param_4);
   local_ad4 = 0;
   local_ae0 = *(undefined4*)( (undefined8*)CONCAT71(in_register_00000011, param_4) + 1 );
   local_a78 = 0;
   uStack_a70 = 0;
   uStack_a6c = 0;
   uStack_a68 = 0;
   uStack_a64 = 0;
   uStack_a60 = 0;
   local_a58 = 0;
   local_ab0 = _LC11;
   local_a88 = _LC11;
   uStack_af0 = auStack_a50[0];
   local_ad0 = (undefined1[16])0x0;
   local_ac0 = (undefined1[16])0x0;
   local_aa8 = (undefined1[16])0x0;
   local_a98 = (undefined1[16])0x0;
   puVar4 = auStack_a50;
   do {
      *puVar4 = 0;
      puVar5 = puVar4 + 10;
      *(undefined4*)( puVar4 + 1 ) = 0;
      *(undefined8*)( (long)puVar4 + 0xc ) = 0;
      *(undefined4*)( (long)puVar4 + 0x14 ) = 0;
      puVar4[3] = 0;
      *(undefined4*)( puVar4 + 4 ) = 0;
      *(undefined8*)( (long)puVar4 + 0x24 ) = 0;
      *(undefined4*)( (long)puVar4 + 0x2c ) = 0;
      *(undefined4*)( puVar4 + 6 ) = 0;
      *(undefined4*)( (long)puVar4 + 0x34 ) = 0;
      *(undefined1(*) [16])( puVar4 + 7 ) = (undefined1[16])0x0;
      *(undefined4*)( puVar4 + 9 ) = 0;
      puVar4 = puVar5;
   }
 while ( (undefined8*)auStack_50 != puVar5 );
   auStack_50[0] = 0;
   local_adc = param_3;
   cVar2 = move_and_collide(this_00, (MotionParameters*)local_b18, (MotionResult*)&local_a78, SUB41(param_5, 0), true);
   if (cVar2 != '\0') {
      if (( *(long*)( this_00 + 0x618 ) == 0 ) || ( iVar3 = 1 < iVar3 )) {
         this(RefCounted * operator_new(3000, ""));
         pRVar6 = this;
         for (lVar8 = 0x177; lVar8 != 0; lVar8 = lVar8 + -1) {
            *(undefined8*)pRVar6 = 0;
            pRVar6 = pRVar6 + (ulong)bVar13 * -0x10 + 8;
         }

         RefCounted::RefCounted(this);
         *(undefined8*)( this + 0x180 ) = 0;
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( this + ( 12*i + 392 ) ) = 0;
            *(undefined4*)( this + ( 12*i + 400 ) ) = 0;
         }

         *(undefined***)this = &PTR__initialize_classv_0010c530;
         pRVar6 = this + 0x1b0;
         do {
            *(undefined8*)pRVar6 = 0;
            pRVar7 = pRVar6 + 0x50;
            *(undefined4*)( pRVar6 + 8 ) = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( pRVar6 + ( 12*i + 12 ) ) = 0;
               *(undefined4*)( pRVar6 + ( 12*i + 20 ) ) = 0;
            }

            *(undefined4*)( pRVar6 + 0x30 ) = 0;
            *(undefined4*)( pRVar6 + 0x34 ) = 0;
            *(undefined1(*) [16])( pRVar6 + 0x38 ) = (undefined1[16])0x0;
            *(undefined4*)( pRVar6 + 0x48 ) = 0;
            pRVar6 = pRVar7;
         }
 while ( this + 0xbb0 != pRVar7 );
         *(undefined4*)( this + 0xbb0 ) = 0;
         postinitialize_handler((Object*)this);
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            pOVar11 = *(Object**)( this_00 + 0x618 );
            if (pOVar11 != (Object*)0x0) {
               *(undefined8*)( this_00 + 0x618 ) = 0;
               cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  this(RefCounted * 0x0);
                  cVar2 = predelete_handler(pOVar11);
                  if (cVar2 != '\0') goto LAB_00100fcb;
               }

               goto LAB_00100d87;
            }

         }
 else {
            pOVar11 = *(Object**)( this_00 + 0x618 );
            pOVar12 = pOVar11;
            if (this != (RefCounted*)pOVar11) {
               *(RefCounted**)( this_00 + 0x618 ) = this;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *(undefined8*)( this_00 + 0x618 ) = 0;
               }

               pOVar12 = (Object*)this;
               if (( ( pOVar11 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
                  LAB_00100fcb:( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                  Memory::free_static(pOVar11, false);
                  pOVar12 = (Object*)this;
                  if (this == (RefCounted*)0x0) goto LAB_00100d87;
               }

            }

            cVar2 = RefCounted::unreference();
            if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
               ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
               Memory::free_static(pOVar12, false);
            }

            LAB_00100d87:pOVar11 = *(Object**)( this_00 + 0x618 );
         }

         *(undefined8*)( pOVar11 + 0x180 ) = *(undefined8*)( this_00 + 0x60 );
      }
 else {
         pOVar11 = *(Object**)( this_00 + 0x618 );
      }

      *(undefined8*)( pOVar11 + 0x188 ) = local_a78;
      *(ulong*)( pOVar11 + 0xbac ) = CONCAT44(auStack_50[0], local_54);
      pMVar10 = (MotionResult*)&local_a78 + -(long)(pOVar11 + (0x188 - (long)((ulong)(pOVar11 + 400) & 0xfffffffffffffff8)));
      puVar4 = (undefined8*)( ( ulong )(pOVar11 + 400) & 0xfffffffffffffff8 );
      for (uVar9 = ( ulong )((int)( pOVar11 + ( 0x188 - (long)( ( ulong )(pOVar11 + 400) & 0xfffffffffffffff8 ) ) ) + 0xa2cU >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
         *puVar4 = *(undefined8*)pMVar10;
         pMVar10 = pMVar10 + ( (ulong)bVar13 * -2 + 1 ) * 8;
         puVar4 = puVar4 + (ulong)bVar13 * -2 + 1;
      }

      *(undefined8*)param_1 = 0;
      if (*(long*)( this_00 + 0x618 ) == 0) goto LAB_00100e08;
      *(long*)param_1 = *(long*)( this_00 + 0x618 );
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') goto LAB_00100e08;
   }

   *(undefined8*)param_1 = 0;
   LAB_00100e08:uVar1 = local_aa8._0_8_;
   if ((void*)local_aa8._0_8_ != (void*)0x0) {
      if (local_a88._4_4_ != 0) {
         if (*(uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) != 0) {
            memset((void*)local_a98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) * 4);
         }

         local_a88 = local_a88 & 0xffffffff;
      }

      Memory::free_static((void*)uVar1, false);
      Memory::free_static((void*)local_a98._0_8_, false);
      Memory::free_static((void*)local_aa8._8_8_, false);
      Memory::free_static((void*)local_a98._8_8_, false);
   }

   uVar1 = local_ad0._0_8_;
   if ((void*)local_ad0._0_8_ != (void*)0x0) {
      if (local_ab0._4_4_ != 0) {
         if (*(uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) != 0) {
            memset((void*)local_ac0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) * 4);
         }

         local_ab0 = local_ab0 & 0xffffffff;
      }

      Memory::free_static((void*)uVar1, false);
      Memory::free_static((void*)local_ac0._0_8_, false);
      Memory::free_static((void*)local_ad0._8_8_, false);
      Memory::free_static((void*)local_ac0._8_8_, false);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* PhysicsBody3D::get_collision_exceptions() */Array *PhysicsBody3D::get_collision_exceptions(void) {
   void *pvVar1;
   long lVar2;
   ulong uVar3;
   char cVar4;
   long *plVar5;
   Object *pOVar6;
   ulong uVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   long in_RSI;
   Array *in_RDI;
   long in_FS_OFFSET;
   bool bVar11;
   long *local_80;
   Array local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (long*)0x0;
   plVar5 = (long*)PhysicsServer3D::get_singleton();
   ( **(code**)( *plVar5 + 0x480 ) )(plVar5, *(undefined8*)( in_RSI + 0x538 ), &local_80);
   Array::Array(local_78);
   if (( local_80 != (long*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
      do {
         plVar5 = (long*)PhysicsServer3D::get_singleton();
         uVar7 = ( **(code**)( *plVar5 + 0x370 ) )(plVar5);
         uVar9 = (uint)uVar7 & 0xffffff;
         if (uVar9 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar3 = (ulong)local_68 >> 8;
               local_68 = (char*)( uVar3 << 8 );
               LOCK();
               bVar11 = (char)ObjectDB::spin_lock == '\0';
               if (bVar11) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar11) break;
               local_68 = (char*)( uVar3 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
            if (( uVar7 >> 0x18 & 0x7fffffffff ) == ( *puVar10 & 0x7fffffffff )) {
               uVar7 = puVar10[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (uVar7 == 0) goto LAB_0010132d;
               pOVar6 = (Object*)__dynamic_cast(uVar7, &Object::typeinfo, &typeinfo, 0);
            }
 else {
               pOVar6 = (Object*)0x0;
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            LAB_0010132d:pOVar6 = (Object*)0x0;
         }

         Variant::Variant((Variant*)local_58, pOVar6);
         Array::push_back((Variant*)local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar8 = *(long*)( lVar8 + 8 );
      }
 while ( lVar8 != 0 );
   }

   Array::Array(in_RDI);
   local_50 = (undefined1[16])0x0;
   local_68 = "PhysicsBody3D";
   local_58[0] = 0;
   local_58[1] = 0;
   local_70 = 0;
   local_60 = 0xd;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
   Array::set_typed((uint)in_RDI, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   cVar4 = Array::is_same_typed(in_RDI);
   if (cVar4 == '\0') {
      Array::assign(in_RDI);
   }
 else {
      Array::_ref(in_RDI);
   }

   Array::~Array(local_78);
   if (local_80 != (long*)0x0) {
      do {
         plVar5 = local_80;
         pvVar1 = (void*)*local_80;
         if (pvVar1 == (void*)0x0) {
            if ((int)local_80[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_001012e0;
            }

            break;
         }

         if (*(long**)( (long)pvVar1 + 0x18 ) == local_80) {
            lVar8 = *(long*)( (long)pvVar1 + 8 );
            lVar2 = *(long*)( (long)pvVar1 + 0x10 );
            *local_80 = lVar8;
            if (pvVar1 == (void*)local_80[1]) {
               local_80[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar1 + 8 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x10 ) = lVar2;
            }

            Memory::free_static(pvVar1, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

      }
 while ( (int)local_80[2] != 0 );
      Memory::free_static(local_80, false);
   }

   LAB_001012e0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* PhysicsBody3D::_bind_methods() */void PhysicsBody3D::_bind_methods(void) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   uint uVar7;
   long lVar8;
   long *plVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   undefined8 local_260;
   undefined8 local_258;
   undefined8 local_250;
   long local_248;
   long local_240;
   long local_238;
   long local_230;
   long local_228[2];
   long *local_218;
   undefined *local_1f8;
   undefined *puStack_1f0;
   undefined8 local_1e8;
   char *local_1d8;
   char *pcStack_1d0;
   char *local_1c8;
   char *pcStack_1c0;
   char *local_1b8;
   undefined8 local_1b0;
   Variant *local_1a8;
   undefined1 auStack_1a0[16];
   Variant *pVStack_190;
   char **local_188;
   undefined *local_178;
   char *pcStack_170;
   char *local_168;
   char *pcStack_160;
   char *local_158;
   char *pcStack_150;
   undefined8 local_148;
   undefined *local_138;
   undefined8 local_130;
   Variant local_120[24];
   Variant local_108[24];
   Variant local_f0[24];
   undefined8 local_d8;
   undefined1 local_d0[16];
   Variant local_c0[8];
   Variant *local_b8;
   undefined1 auStack_b0[16];
   Variant *pVStack_a0;
   char **local_98;
   char **ppcStack_90;
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   puVar4 = PTR__LC39_0010cd08;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_1b8 = "max_collisions";
   local_1a8 = (Variant*)&local_1d8;
   local_1c8 = "safe_margin";
   pcStack_1c0 = "recovery_as_collision";
   auStack_1a0._0_8_ = &pcStack_1d0;
   local_1d8 = "motion";
   pcStack_1d0 = "test_only";
   auStack_1a0._8_8_ = &local_1c8;
   pVStack_190 = (Variant*)&pcStack_1c0;
   local_188 = &local_1b8;
   local_1b0 = 0;
   D_METHODP((char*)local_228, (char***)"move_and_collide", (uint)(Variant*)&local_1a8);
   Variant::Variant((Variant*)&local_b8, false);
   Variant::Variant((Variant*)&pVStack_a0, _LC49);
   Variant::Variant(local_88, false);
   pVVar10 = (Variant*)local_40;
   Variant::Variant(local_70, 1);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   auStack_1a0._8_8_ = local_88;
   auStack_1a0._0_8_ = (Variant*)&pVStack_a0;
   local_1a8 = (Variant*)&local_b8;
   pVStack_190 = local_70;
   pMVar6 = create_method_bind<PhysicsBody3D,Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>(_move);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, &local_1a8, 4);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_218;
   }
 while ( pVVar10 != (Variant*)&local_b8 );
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   auStack_1a0 = (undefined1[16])0x0;
   local_158 = "recovery_as_collision";
   pcStack_150 = "max_collisions";
   local_178 = &_LC42;
   pcStack_170 = "motion";
   local_168 = "collision";
   pcStack_160 = "safe_margin";
   local_1a8 = (Variant*)0x0;
   local_148 = 0;
   uVar7 = (uint)(Variant*)&local_b8;
   local_b8 = (Variant*)&local_178;
   pVStack_a0 = (Variant*)&pcStack_160;
   local_98 = &local_158;
   ppcStack_90 = &pcStack_150;
   auStack_b0._0_8_ = &pcStack_170;
   auStack_b0._8_8_ = &local_168;
   D_METHODP((char*)local_228, (char***)"test_move", uVar7);
   Variant::Variant((Variant*)&local_138, (Variant*)&local_1a8);
   Variant::Variant(local_120, _LC49);
   Variant::Variant(local_108, false);
   Variant::Variant(local_f0, 1);
   local_d0 = (undefined1[16])0x0;
   local_d8 = 0;
   auStack_b0._8_8_ = local_108;
   auStack_b0._0_8_ = local_120;
   local_b8 = (Variant*)&local_138;
   pVStack_a0 = local_f0;
   pMVar6 = create_method_bind<PhysicsBody3D,bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>(test_move);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, &local_b8, 4);
   pVVar10 = local_c0;
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      plVar5 = local_218;
   }
 while ( pVVar10 != (Variant*)&local_138 );
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_1a8] != '\0') {
      Variant::_clear_internal();
   }

   D_METHODP((char*)local_228, (char***)"get_gravity", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,Vector3>(get_gravity);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_1e8 = 0;
   local_1f8 = puVar4;
   puStack_1f0 = &_LC40;
   auStack_b0._0_8_ = &puStack_1f0;
   local_b8 = (Variant*)&local_1f8;
   D_METHODP((char*)local_228, (char***)"set_axis_lock", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,PhysicsServer3D::BodyAxis,bool>(set_axis_lock);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_138 = &_LC39;
   local_130 = 0;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)local_228, (char***)"get_axis_lock", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,bool,PhysicsServer3D::BodyAxis>(get_axis_lock);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_228, (char***)"get_collision_exceptions", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,TypedArray<PhysicsBody3D>>(get_collision_exceptions);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_138 = &_LC53;
   local_130 = 0;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)local_228, (char***)"add_collision_exception_with", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,Node*>(add_collision_exception_with);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_138 = &_LC53;
   local_130 = 0;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)local_228, (char***)"remove_collision_exception_with", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<PhysicsBody3D,Node*>(remove_collision_exception_with);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_228, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_218;
   if (local_218 != (long*)0x0) {
      LOCK();
      plVar9 = local_218 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_218 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_218[-1];
         lVar8 = 0;
         local_218 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "axis_lock_");
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Axis Lock");
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_238, (String*)&local_240, false);
   ClassDB::add_property_group((StringName*)&local_238, (String*)&local_230, (String*)local_228, 0);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_linear_x");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 1);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_linear_y");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 2);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_238 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_linear_z");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 4);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_angular_x");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 8);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_angular_y");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 0x10);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_238, true);
   _scs_create((char*)&local_240, true);
   local_248 = 0;
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "");
   local_258 = 0;
   String::parse_latin1((String*)&local_258, "axis_lock_angular_z");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 1, (String*)&local_258, 0, (String*)&local_250, 6, &local_248);
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "PhysicsBody3D");
   StringName::StringName((StringName*)&local_230, (String*)&local_260, false);
   ClassDB::add_property((StringName*)&local_230, (PropertyInfo*)local_228, (StringName*)&local_240, (StringName*)&local_238, 0x20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_258);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_248 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_240 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}
/* Object::_property_can_revert(StringName const&) const */undefined8 Object::_property_can_revert(StringName *param_1) {
   return 0;
}
/* Object::_property_get_revert(StringName const&, Variant&) const */undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}
/* Object::get_save_class() const */void Object::get_save_class(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x48 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Node3D::set_transform_gizmo_visible(bool) */void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
   this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
   return;
}
/* Node3D::is_transform_gizmo_visible() const */byte Node3D::is_transform_gizmo_visible(Node3D *this) {
   return (byte)this[0x518] >> 2 & 1;
}
/* KinematicCollision3D::is_class_ptr(void*) const */uint KinematicCollision3D::is_class_ptr(KinematicCollision3D *this, void *param_1) {
   return (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* KinematicCollision3D::_getv(StringName const&, Variant&) const */undefined8 KinematicCollision3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* KinematicCollision3D::_setv(StringName const&, Variant const&) */undefined8 KinematicCollision3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* KinematicCollision3D::_validate_propertyv(PropertyInfo&) const */void KinematicCollision3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* KinematicCollision3D::_property_can_revertv(StringName const&) const */undefined8 KinematicCollision3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* KinematicCollision3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 KinematicCollision3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* KinematicCollision3D::_notificationv(int, bool) */void KinematicCollision3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* PhysicsBody3D::is_class_ptr(void*) const */uint PhysicsBody3D::is_class_ptr(PhysicsBody3D *this, void *param_1) {
   return (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &CollisionObject3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10cb, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* PhysicsBody3D::_getv(StringName const&, Variant&) const */undefined8 PhysicsBody3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PhysicsBody3D::_setv(StringName const&, Variant const&) */undefined8 PhysicsBody3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MethodBindT<Node*>::_gen_argument_type(int) const */byte MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Node*>::get_argument_meta(int) const */undefined8 MethodBindT<Node*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::_gen_argument_type(int) const */undefined8 MethodBindTR<TypedArray<PhysicsBody3D>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<PhysicsBody3D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::_gen_argument_type(int) const */char MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::_gen_argument_type(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::_gen_argument_type(int) const */char MethodBindT<PhysicsServer3D::BodyAxis,bool>::_gen_argument_type(MethodBindT<PhysicsServer3D::BodyAxis,bool> *this, int param_1) {
   char cVar1;
   cVar1 = ( param_1 == 0 ) + '\x01';
   if (1 < (uint)param_1) {
      cVar1 = '\0';
   }

   return cVar1;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::get_argument_meta(int) const */undefined8 MethodBindT<PhysicsServer3D::BodyAxis,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::get_argument_meta(int) const */char MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::get_argument_meta(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( -1 < param_1 ) && ( cVar1 = param_1 != 3 )) {
      cVar1 = ( param_1 == 5 ) * '\x03';
   }

   return cVar1;
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool,
   int>::get_argument_meta(int) const */char MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::get_argument_meta(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( -1 < param_1 ) && ( cVar1 = param_1 != 2 )) {
      cVar1 = ( param_1 == 4 ) * '\x03';
   }

   return cVar1;
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::_gen_argument_type(int) const */char MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::_gen_argument_type(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x01';
   if (( ( ( (uint)param_1 < 6 ) && ( cVar1 = '\x12' ),param_1 != 0 ) ) && ( cVar1 = param_1 != 1 )) {
      return ( param_1 != 4 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool,
   int>::_gen_argument_type(int) const */char MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::_gen_argument_type(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if (( ( ( (uint)param_1 < 5 ) && ( cVar1 = '\t' ),param_1 != 0 ) ) && ( cVar1 = param_1 != 1 )) {
      return ( param_1 != 3 ) + '\x01';
   }

   return cVar1;
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool, int>::~MethodBindTR()
    */void MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c8b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool, int>::~MethodBindTR()
    */void MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c8b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::~MethodBindTR() */void MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::~MethodBindTR(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c910;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::~MethodBindTR() */void MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::~MethodBindTR(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c910;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c970;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c970;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::~MethodBindT() */void MethodBindT<PhysicsServer3D::BodyAxis,bool>::~MethodBindT(MethodBindT<PhysicsServer3D::BodyAxis,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c9d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::~MethodBindT() */void MethodBindT<PhysicsServer3D::BodyAxis,bool>::~MethodBindT(MethodBindT<PhysicsServer3D::BodyAxis,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010c9d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::~MethodBindTRC() */void MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::~MethodBindTRC(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ca30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::~MethodBindTRC() */void MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::~MethodBindTRC(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ca30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR() */void MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR(MethodBindTR<TypedArray<PhysicsBody3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ca90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR() */void MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR(MethodBindTR<TypedArray<PhysicsBody3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ca90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010caf0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010caf0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010c3d0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010c3d0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* KinematicCollision3D::~KinematicCollision3D() */void KinematicCollision3D::~KinematicCollision3D(KinematicCollision3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010c3d0;
   Object::~Object((Object*)this);
   return;
}
/* KinematicCollision3D::~KinematicCollision3D() */void KinematicCollision3D::~KinematicCollision3D(KinematicCollision3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0010c3d0;
   Object::~Object((Object*)this);
   operator_delete(this, 3000);
   return;
}
/* PhysicsBody3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 PhysicsBody3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Node3D::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* PhysicsBody3D::_property_can_revertv(StringName const&) const */undefined8 PhysicsBody3D::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00110008 != Object::_property_can_revert) {
      uVar1 = Node3D::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* PhysicsBody3D::_validate_propertyv(PropertyInfo&) const */void PhysicsBody3D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   if ((code*)PTR__validate_property_00110010 == Node::_validate_property) {
      return;
   }

   Node3D::_validate_property(param_1);
   return;
}
/* PhysicsBody3D::_notificationv(int, bool) */void PhysicsBody3D::_notificationv(PhysicsBody3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00110018 != Node3D::_notification) {
         CollisionObject3D::_notification(iVar1);
      }

      Node3D::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   Node3D::_notification(iVar1);
   if ((code*)PTR__notification_00110018 == Node3D::_notification) {
      return;
   }

   CollisionObject3D::_notification(iVar1);
   return;
}
/* PhysicsBody3D::~PhysicsBody3D() */void PhysicsBody3D::~PhysicsBody3D(PhysicsBody3D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010c690;
   if (*(long*)( this + 0x618 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x618 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
            return;
         }

      }

   }

   CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
   return;
}
/* PhysicsBody3D::~PhysicsBody3D() */void PhysicsBody3D::~PhysicsBody3D(PhysicsBody3D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0010c690;
   if (*(long*)( this + 0x618 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x618 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
   operator_delete(this, 0x628);
   return;
}
/* PhysicsBody3D::_get_class_namev() const */undefined8 *PhysicsBody3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103883:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103883;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsBody3D");
         goto LAB_001038ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsBody3D");
   LAB_001038ee:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103963:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103963;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001039ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001039ce:return &_get_class_namev();
}
/* KinematicCollision3D::_get_class_namev() const */undefined8 *KinematicCollision3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103a53:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103a53;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "KinematicCollision3D");
         goto LAB_00103abe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "KinematicCollision3D");
   LAB_00103abe:return &_get_class_namev();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (char*)0x0) {
      strlen(param_1);
   }

   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         LAB_00103def:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00103d03;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_50 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      LAB_00103d03:uVar5 = String::operator ==(param_1, (String*)&local_50);
      lVar3 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if ((char)uVar5 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar5;
         }

         goto LAB_00103def;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* PhysicsBody3D::get_class() const */void PhysicsBody3D::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KinematicCollision3D::get_class() const */void KinematicCollision3D::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI);
   }
 else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            strlen(__s);
            String::parse_latin1(in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   lVar2 = *(long*)this;
   *(undefined8*)this = 0;
   Memory::free_static((void*)( lVar2 + -0x10 ), false);
   return;
}
/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC20;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 9;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001041c5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001041c5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x104288);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC22;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0010435a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC22;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010435a:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<PhysicsBody3D>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "PhysicsBody3D";
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x1c;
   puVar1[6] = 0x1f;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(char**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(char**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001045d5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001045d5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_00110020 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KinematicCollision3D::_initialize_classv() */void KinematicCollision3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_68 = 0;
         local_50 = 6;
         local_58 = "Object";
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "RefCounted";
         local_70 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00110030 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "KinematicCollision3D";
      local_70 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)PTR__bind_methods_00110028 != RefCounted::_bind_methods) {
         KinematicCollision3D::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CollisionObject3D::is_class(String const&) const */undefined8 CollisionObject3D::is_class(CollisionObject3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00104afb;
   }

   cVar5 = String::operator ==(param_1, "CollisionObject3D");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00104afb;
      }

      cVar5 = String::operator ==(param_1, "Node3D");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar5 != '\0') goto LAB_00104afb;
         }

         cVar5 = String::operator ==(param_1, "Node");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Object::is_class((Object*)this, param_1);
               return uVar6;
            }

            goto LAB_00104c9e;
         }

      }

   }

   LAB_00104afb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104c9e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicsBody3D::is_class(String const&) const */undefined8 PhysicsBody3D::is_class(PhysicsBody3D *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00104d1f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00104d1f:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00104dd3;
   }

   cVar5 = String::operator ==(param_1, "PhysicsBody3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = CollisionObject3D::is_class((CollisionObject3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00104dd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00104f2b;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00104f2b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00104f2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KinematicCollision3D::is_class(String const&) const */undefined8 KinematicCollision3D::is_class(KinematicCollision3D *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010509f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010509f:cVar5 = String::operator ==(param_1, (String*)&local_60);
      lVar3 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (cVar5 != '\0') goto LAB_00105153;
   }

   cVar5 = String::operator ==(param_1, "KinematicCollision3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00105153:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Node*>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = &_LC37;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_88 = 0;
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001054bc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001054bc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<PhysicsServer3D::BodyAxis,bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_70 = 0x19;
      local_78 = "PhysicsServer3D::BodyAxis";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_88, (String*)&local_90);
      StringName::StringName((StringName*)&local_80, (String*)&local_88, false);
      local_98 = 0;
      local_a0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_a0, 0, (CowData<char32_t>*)&local_98, 0x10006, (StringName*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }
 else {
      if (in_EDX != 1) goto LAB_0010561d;
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   *puVar2 = local_78._0_4_;
   if (*(long*)( puVar2 + 2 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( puVar2 + 2 ) = lVar1;
   }

   if (*(long*)( puVar2 + 4 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( puVar2 + 4 ) = lVar1;
   }

   puVar2[6] = local_60;
   if (*(long*)( puVar2 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( puVar2 + 8 ) = lVar1;
   }

   puVar2[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0010561d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KinematicCollision3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void KinematicCollision3D::_get_property_listv(KinematicCollision3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "KinematicCollision3D";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "KinematicCollision3D";
   local_98 = 0;
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001059e1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001059e1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "KinematicCollision3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   CowData<char32_t> *local_a8;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }

   local_a8 = (CowData<char32_t>*)&local_70;
   local_b0 = local_58;
   local_80 = 0;
   local_88 = 0;
   local_78 = "Node3D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Node3D";
   local_90 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Node3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_b0);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CollisionObject3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CollisionObject3D::_get_property_listv(CollisionObject3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node3D::_get_property_listv((Node3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CollisionObject3D";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CollisionObject3D";
   local_98 = 0;
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001060b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001060b1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CollisionObject3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node3D::_get_property_listv((Node3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PhysicsBody3D::_get_property_listv(PhysicsBody3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CollisionObject3D::_get_property_listv((CollisionObject3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PhysicsBody3D";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PhysicsBody3D";
   local_98 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106361;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106361:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "PhysicsBody3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CollisionObject3D::_get_property_listv((CollisionObject3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar4;
   long in_FS_OFFSET;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   details local_b8[8];
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   undefined *local_78;
   long local_70;
   ulong local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pPVar4 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = 0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_88 = 0;
      local_80 = 6;
      local_c0 = 0;
      String::parse_latin1((String*)&local_c0, "PhysicsServer3D::BodyAxis");
      godot::details::enum_qualified_name_to_class_info_name(local_b8, (String*)&local_c0);
      StringName::StringName((StringName*)&local_b0, (String*)local_b8, false);
      local_c8 = 0;
      local_d0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_d0, 0, (CowData<char32_t>*)&local_c8, 0x10006, (StringName*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
      if (local_a0._0_8_ != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
         local_a0._0_8_ = local_70;
         local_70 = 0;
      }

      if (local_a0._8_8_ != local_68) {
         StringName::unref();
         local_a0._8_8_ = local_68;
         local_68 = 0;
      }

      local_90 = CONCAT44(local_90._4_4_, local_60);
      if (local_88 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_88 = local_58;
         local_58 = 0;
      }

      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      uVar3 = local_a0._8_8_;
      uVar2 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *(undefined4*)pPVar4 = (undefined4)local_a8;
      *(undefined8*)( pPVar4 + 8 ) = uVar2;
      *(undefined8*)( pPVar4 + 0x10 ) = uVar3;
      *(undefined4*)( pPVar4 + 0x18 ) = (undefined4)local_90;
      *(long*)( pPVar4 + 0x20 ) = local_88;
      *(undefined4*)( pPVar4 + 0x28 ) = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
   }
 else {
      local_b0 = 0;
      local_70 = 0;
      local_78 = &_LC20;
      String::parse_latin1((StrRange*)&local_b0);
      local_78 = (undefined*)0x0;
      PropertyInfo::PropertyInfo(pPVar4, 1, (CowData<char32_t>*)&local_78, 0, (StrRange*)&local_b0, 6, &local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
         StringName::unref();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, Ref<KinematicCollision3D>, Vector3 const&, bool,
   float, bool, int>(Ref<KinematicCollision3D> (PhysicsBody3D::*)(Vector3 const&, bool, float, bool,
   int)) */MethodBind *create_method_bind<PhysicsBody3D,Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>(_func_Ref_Vector3_ptr_bool_float_bool_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_Vector3_ptr_bool_float_bool_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c8b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, bool, Transform3D const&, Vector3 const&,
   Ref<KinematicCollision3D> const&, float, bool, int>(bool (PhysicsBody3D::*)(Transform3D const&,
   Vector3 const&, Ref<KinematicCollision3D> const&, float, bool, int)) */MethodBind *create_method_bind<PhysicsBody3D,bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>(_func_bool_Transform3D_ptr_Vector3_ptr_Ref_ptr_float_bool_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool_Transform3D_ptr_Vector3_ptr_Ref_ptr_float_bool_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c910;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, Vector3>(Vector3 (PhysicsBody3D::*)() const) */MethodBind *create_method_bind<PhysicsBody3D,Vector3>(_func_Vector3 *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c970;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, PhysicsServer3D::BodyAxis, bool>(void
   (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis, bool)) */MethodBind *create_method_bind<PhysicsBody3D,PhysicsServer3D::BodyAxis,bool>(_func_void_BodyAxis_bool *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_BodyAxis_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010c9d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, bool, PhysicsServer3D::BodyAxis>(bool
   (PhysicsBody3D::*)(PhysicsServer3D::BodyAxis) const) */MethodBind *create_method_bind<PhysicsBody3D,bool,PhysicsServer3D::BodyAxis>(_func_bool_BodyAxis *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool_BodyAxis**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ca30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D,
   TypedArray<PhysicsBody3D>>(TypedArray<PhysicsBody3D> (PhysicsBody3D::*)()) */MethodBind *create_method_bind<PhysicsBody3D,TypedArray<PhysicsBody3D>>(_func_TypedArray *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ca90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<PhysicsBody3D, Node*>(void (PhysicsBody3D::*)(Node*)) */MethodBind *create_method_bind<PhysicsBody3D,Node*>(_func_void_Node_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010caf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "PhysicsBody3D";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody3D::_bind_methods() [clone .cold] */void PhysicsBody3D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* PhysicsBody3D::_initialize_classv() */void PhysicsBody3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (CollisionObject3D::initialize_class() == '\0') {
         if (Node3D::initialize_class() == '\0') {
            if (Node::initialize_class() == '\0') {
               Object::initialize_class();
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Object");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Node");
               StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if ((code*)PTR__bind_methods_00110030 != Node::_bind_methods) {
                  Node::_bind_methods();
               }

               Node::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Node";
            local_50 = 4;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Node3D";
            local_70 = 0;
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Node3D::_bind_methods();
            Node3D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node3D";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "CollisionObject3D";
         local_70 = 0;
         local_50 = 0x11;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00110038 != Node3D::_bind_methods) {
            CollisionObject3D::_bind_methods();
         }

         CollisionObject3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "CollisionObject3D";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "PhysicsBody3D";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001074b8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<TypedArray<PhysicsBody3D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001077f0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )((Array*)&local_58);
         Variant::Variant((Variant*)local_48, (Array*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Array::~Array((Array*)&local_58);
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_001077f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::validated_call(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107a98;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   param_3[8] = VVar1;
   LAB_00107a98:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::ptrcall(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107c77;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_00107c77:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<PhysicsServer3D::BodyAxis,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107ff1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00107e76. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00107ff1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<PhysicsServer3D::BodyAxis,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001081e1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x0010806a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }

   LAB_001081e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector3>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   undefined1 auVar2[12];
   undefined1 auVar3[12];
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined1 local_54[12];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         auVar3._8_4_ = local_54._8_4_;
         auVar3._0_8_ = local_54._0_8_;
         if (( StringName::configured != '\0' ) && ( local_54 = local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001082c0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   auVar2._8_4_ = local_54._8_4_;
   auVar2._0_8_ = local_54._0_8_;
   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         local_54 = ( *(code*)pVVar4 )();
         Variant::Variant((Variant*)local_48, (Vector3*)local_54);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
         local_54 = auVar2;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_001082c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector3>::validated_call(MethodBindTRC<Vector3> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[12];
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0x35;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001084db;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1(*) [12])( param_3 + 8 ) = auVar3;
   LAB_001084db:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector3>::ptrcall(MethodBindTRC<Vector3> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[12];
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0x35;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010869a;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1(*) [12])param_3 = auVar3;
   LAB_0010869a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Node*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001089e1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010886d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 0x10 ));
      return;
   }

   LAB_001089e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Node*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00108bc9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00108a51. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), plVar1);
      return;
   }

   LAB_00108bc9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<TypedArray<PhysicsBody3D>>::validated_call(MethodBindTR<TypedArray<PhysicsBody3D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x107638;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108c29;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_00108c29:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<PhysicsBody3D>>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<TypedArray<PhysicsBody3D>>::ptrcall(MethodBindTR<TypedArray<PhysicsBody3D>> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x107638;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108dfa;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_00108dfa:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::validated_call(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   long lVar2;
   ulong uVar3;
   Object *pOVar4;
   char cVar5;
   Variant VVar6;
   Object *pOVar7;
   long *plVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar8 = *(long**)( param_1 + 0x118 );
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar8 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_68 == (Object*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x107638;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001090cb;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar9 = *(code**)( this + 0x58 );
   lVar2 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar9 & 1 ) != 0) {
      pcVar9 = *(code**)( pcVar9 + *(long*)( param_1 + lVar2 ) + -1 );
   }

   uVar3 = *(ulong*)( param_2[5] + 8 );
   VVar6 = param_2[4][8];
   dVar1 = *(double*)( param_2[3] + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( param_2[2] + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar7 = (Object*)Variant::get_validated_object();
   pOVar4 = local_68;
   if (pOVar7 != local_68) {
      if (pOVar7 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_00109067:cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               cVar5 = predelete_handler(pOVar4);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

         }

      }
 else {
         pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &KinematicCollision3D::typeinfo, 0);
         if (pOVar4 != pOVar7) {
            local_68 = pOVar7;
            if (pOVar7 != (Object*)0x0) {
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar4 != (Object*)0x0) goto LAB_00109067;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   VVar6 = ( Variant )(*pcVar9)((float)dVar1, param_1 + lVar2, *(undefined8*)( *param_2 + 8 ), param_2[1] + 8, (StringName*)&local_68, VVar6, uVar3 & 0xffffffff);
   param_3[8] = VVar6;
   if (local_68 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_68;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_68);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   LAB_001090cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::ptrcall(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   undefined8 uVar2;
   Object *pOVar3;
   char cVar4;
   undefined1 uVar5;
   char cVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (Object*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x107638;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001093be;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar8 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar2 = *param_2[5];
   /* WARNING: Load size is inaccurate */
   cVar6 = *param_2[4];
   /* WARNING: Load size is inaccurate */
   if (( (long*)param_2[2] == (long*)0x0 ) || ( local_58 = *param_2[2] ),local_58 == (Object*)0x0) {
      LAB_0010938b:local_58 = (Object*)0x0;
   }
 else {
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') goto LAB_0010938b;
   }

   uVar5 = ( *pcVar8 )(param_1 + lVar1, *param_2, param_2[1], (StringName*)&local_58, cVar6 != '\0', uVar2);
   *(undefined1*)param_3 = uVar5;
   if (local_58 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar3 = local_58;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_58);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   LAB_001093be:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool, int>::ptrcall(Object*,
   void const**, void*) const */void MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::ptrcall(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x107638;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109641;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   for (int i = 0; i < 3; i++) {
      /* WARNING: Load size is inaccurate */
   }

   auVar6._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar6._0_4_ = (float)*param_2[2];
   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )(auVar6._0_8_, (StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1] != '\0', *param_2[3] != '\0', *param_2[4]);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00109641;
      *(undefined8*)param_3 = 0;
      goto LAB_00109681;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00109681;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00109681:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00109641;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_00109641:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   long *plVar7;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar7 = (long*)plVar11[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar7 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109a20;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_00109a15:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_00109a20;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00109a70;
      LAB_00109a60:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar9 = *(long*)( pVVar12 + -8 );
      if ((int)lVar9 < (int)( in_R8D ^ 1 )) {
         LAB_00109a70:uVar5 = 4;
         goto LAB_00109a15;
      }

      if (in_R8D == 1) goto LAB_00109a60;
      lVar10 = (long)( (int)lVar9 + -1 );
      if (lVar9 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   if (cVar4 == '\0') {
      LAB_001099c6:uVar3 = _LC78;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
      pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
      if (( ( pOVar8 == (Object*)0x0 ) || ( lVar9 = __dynamic_cast(pOVar8, &Object::typeinfo, &Node::typeinfo, 0) ),lVar9 == 0 )) goto LAB_001099c6;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), pOVar6);
   LAB_00109a20:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109de0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00109e20;
         LAB_00109e10:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109e20:uVar7 = 4;
            goto LAB_00109dd5;
         }

         if (in_R8D == 1) goto LAB_00109e10;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC79;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar8 = Variant::operator_cast_to_long(pVVar12);
      bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), uVar8 & 0xffffffff);
      Variant::Variant((Variant*)local_48, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_00109dd5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00109de0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool, int>::call(Object*,
   Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   undefined1 auVar5[12];
   undefined1 auVar6[12];
   undefined1 auVar7[12];
   undefined8 uVar8;
   Object *pOVar9;
   char cVar10;
   bool bVar11;
   bool bVar12;
   int iVar13;
   undefined4 uVar14;
   long lVar15;
   long *plVar16;
   uint uVar17;
   undefined4 in_register_00000014;
   long *plVar18;
   Variant *pVVar19;
   Variant *pVVar20;
   long lVar21;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_d8;
   undefined8 local_d0;
   Object *local_c8;
   undefined8 local_c0;
   undefined1 local_ac[12];
   undefined1 local_a0[12];
   undefined1 local_94[12];
   undefined1 local_88[12];
   undefined4 uStack_7c;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar18 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar18 != (long*)0x0 ) && ( plVar18[1] != 0 ) ) && ( *(char*)( plVar18[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_c8, (StringName*)( param_2 + 3 ));
      if (plVar18[1] == 0) {
         plVar16 = (long*)plVar18[0x23];
         if (plVar16 == (long*)0x0) {
            plVar16 = (long*)( **(code**)( *plVar18 + 0x40 ) )();
         }

      }
 else {
         plVar16 = (long*)( plVar18[1] + 0x20 );
      }

      if (local_c8 == (Object*)*plVar16) {
         if (( StringName::configured != '\0' ) && ( local_c8 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_c8 = (Object*)0x107638;
         local_d0 = 0;
         local_c0 = 0x35;
         String::parse_latin1((StrRange*)&local_d0);
         vformat<StringName>((StringName*)&local_c8, (StrRange*)&local_d0, &local_d8);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         auVar7._8_4_ = local_88._8_4_;
         auVar7._0_8_ = local_88._0_8_;
         auVar6._8_4_ = local_94._8_4_;
         auVar6._0_8_ = local_94._0_8_;
         auVar5._8_4_ = local_a0._8_4_;
         auVar5._0_8_ = local_a0._0_8_;
         auVar4._8_4_ = local_ac._8_4_;
         auVar4._0_8_ = local_ac._0_8_;
         if (( StringName::configured != '\0' ) && ( local_ac = auVar4 ),local_a0 = auVar5,local_94 = auVar6,local_88 = auVar7,local_d8 != 0) {
            StringName::unref();
         }

         goto LAB_0010a310;
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar20 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar13 = 0;
         lVar21 = 0;
      }
 else {
         lVar21 = *(long*)( pVVar2 + -8 );
         iVar13 = (int)lVar21;
      }

      if ((int)( 5 - in_R8D ) <= iVar13) {
         lVar15 = 0;
         do {
            if ((int)lVar15 < (int)in_R8D) {
               pVVar19 = *(Variant**)( param_4 + lVar15 * 8 );
            }
 else {
               uVar17 = iVar13 + -5 + (int)lVar15;
               if (lVar21 <= (int)uVar17) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar17, lVar21, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar19 = pVVar2 + (ulong)uVar17 * 0x18;
            }

            local_68[lVar15] = pVVar19;
            lVar15 = lVar15 + 1;
         }
 while ( lVar15 != 5 );
         *in_R9 = 0;
         if (( (ulong)pVVar20 & 1 ) != 0) {
            pVVar20 = *(Variant**)( pVVar20 + *(long*)( (long)plVar18 + (long)pVVar1 ) + -1 );
         }

         cVar10 = Variant::can_convert_strict(*(undefined4*)local_68[4], 2);
         uVar8 = _LC80;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         iVar13 = Variant::operator_cast_to_int(local_68[4]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar8 = _LC81;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         bVar11 = Variant::operator_cast_to_bool(local_68[3]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_68[2], 3);
         uVar8 = _LC82;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         Variant::operator_cast_to_float(local_68[2]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_68[1], 1);
         uVar8 = _LC83;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         bVar12 = Variant::operator_cast_to_bool(local_68[1]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_68[0], 9);
         uVar8 = _LC84;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         local_ac = Variant::operator_cast_to_Vector3(local_68[0]);
         local_a0 = local_ac;
         local_94 = local_ac;
         local_88 = local_ac;
         ( *(code*)pVVar20 )(&local_c8, (Variant*)( (long)plVar18 + (long)pVVar1 ), local_ac, bVar12, bVar11, iVar13);
         Variant::Variant((Variant*)local_88, local_c8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_88._0_4_;
         *(ulong*)( param_1 + 8 ) = CONCAT44(uStack_7c, local_88._8_4_);
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         if (local_c8 != (Object*)0x0) {
            cVar10 = RefCounted::unreference();
            pOVar9 = local_c8;
            if (cVar10 != '\0') {
               cVar10 = predelete_handler(local_c8);
               if (cVar10 != '\0') {
                  ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                  Memory::free_static(pOVar9, false);
               }

            }

         }

         goto LAB_0010a310;
      }

      uVar14 = 4;
   }
 else {
      uVar14 = 3;
   }

   *in_R9 = uVar14;
   in_R9[2] = 5;
   LAB_0010a310:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   undefined1 auVar5[12];
   undefined1 auVar6[12];
   undefined1 auVar7[12];
   undefined8 uVar8;
   Object *pOVar9;
   char cVar10;
   bool bVar11;
   int iVar12;
   undefined4 uVar13;
   long lVar14;
   Object *pOVar15;
   long *plVar16;
   uint uVar17;
   undefined4 in_register_00000014;
   long *plVar18;
   Variant *pVVar19;
   long lVar20;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar21;
   long in_FS_OFFSET;
   long local_118;
   undefined8 local_110;
   Object *local_108;
   undefined8 local_100;
   undefined1 local_ec[12];
   undefined1 local_e0[12];
   undefined1 local_d4[12];
   undefined4 local_c8[2];
   undefined8 local_c0;
   undefined8 uStack_b8;
   Variant *local_a8[6];
   undefined1 local_78[4][12];
   long local_40;
   plVar18 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar18 != (long*)0x0 ) && ( plVar18[1] != 0 ) ) && ( *(char*)( plVar18[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_108, (StringName*)( param_2 + 3 ));
      if (plVar18[1] == 0) {
         plVar16 = (long*)plVar18[0x23];
         if (plVar16 == (long*)0x0) {
            plVar16 = (long*)( **(code**)( *plVar18 + 0x40 ) )();
         }

      }
 else {
         plVar16 = (long*)( plVar18[1] + 0x20 );
      }

      if (local_108 == (Object*)*plVar16) {
         if (( StringName::configured != '\0' ) && ( local_108 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_108 = (Object*)0x107638;
         local_110 = 0;
         local_100 = 0x35;
         String::parse_latin1((StrRange*)&local_110);
         vformat<StringName>((StringName*)&local_108, (StrRange*)&local_110, &local_118);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_108, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         auVar7._8_4_ = local_78[0]._8_4_;
         auVar7._0_8_ = local_78[0]._0_8_;
         auVar6._8_4_ = local_d4._8_4_;
         auVar6._0_8_ = local_d4._0_8_;
         auVar5._8_4_ = local_e0._8_4_;
         auVar5._0_8_ = local_e0._0_8_;
         auVar4._8_4_ = local_ec._8_4_;
         auVar4._0_8_ = local_ec._0_8_;
         if (( StringName::configured != '\0' ) && ( local_ec = auVar4 ),local_e0 = auVar5,local_d4 = auVar6,local_78[0] = auVar7,local_118 != 0) {
            StringName::unref();
         }

         goto LAB_0010a60f;
      }

      if (( StringName::configured != '\0' ) && ( local_108 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar21 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 7) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar20 = 0;
      }
 else {
         lVar20 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar20;
      }

      if ((int)( 6 - in_R8D ) <= iVar12) {
         lVar14 = 0;
         do {
            if ((int)lVar14 < (int)in_R8D) {
               pVVar19 = *(Variant**)( param_4 + lVar14 * 8 );
            }
 else {
               uVar17 = iVar12 + -6 + (int)lVar14;
               if (lVar20 <= (int)uVar17) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar17, lVar20, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar19 = pVVar2 + (ulong)uVar17 * 0x18;
            }

            local_a8[lVar14] = pVVar19;
            lVar14 = lVar14 + 1;
         }
 while ( lVar14 != 6 );
         *in_R9 = 0;
         if (( (ulong)pVVar21 & 1 ) != 0) {
            pVVar21 = *(Variant**)( pVVar21 + *(long*)( (long)plVar18 + (long)pVVar1 ) + -1 );
         }

         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[5], 2);
         uVar8 = _LC85;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         iVar12 = Variant::operator_cast_to_int(local_a8[5]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[4], 1);
         uVar8 = _LC86;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         bVar11 = Variant::operator_cast_to_bool(local_a8[4]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[3], 3);
         uVar8 = _LC87;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         Variant::operator_cast_to_float(local_a8[3]);
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[2]);
         uVar8 = _LC88;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         local_108 = (Object*)0x0;
         pOVar15 = (Object*)Variant::get_validated_object();
         pOVar9 = local_108;
         if (pOVar15 != local_108) {
            if (pOVar15 == (Object*)0x0) {
               if (local_108 != (Object*)0x0) {
                  local_108 = (Object*)0x0;
                  LAB_0010a78d:cVar10 = RefCounted::unreference();
                  if (cVar10 != '\0') {
                     cVar10 = predelete_handler(pOVar9);
                     if (cVar10 != '\0') {
                        ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                        Memory::free_static(pOVar9, false);
                     }

                  }

               }

            }
 else {
               pOVar15 = (Object*)__dynamic_cast(pOVar15, &Object::typeinfo, &KinematicCollision3D::typeinfo, 0);
               if (pOVar9 != pOVar15) {
                  local_108 = pOVar15;
                  if (pOVar15 != (Object*)0x0) {
                     cVar10 = RefCounted::reference();
                     if (cVar10 == '\0') {
                        local_108 = (Object*)0x0;
                     }

                  }

                  if (pOVar9 != (Object*)0x0) goto LAB_0010a78d;
               }

            }

         }

         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[1], 9);
         uVar8 = _LC89;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         local_ec = Variant::operator_cast_to_Vector3(local_a8[1]);
         local_e0 = local_ec;
         local_d4 = local_ec;
         local_78[0] = local_ec;
         cVar10 = Variant::can_convert_strict(*(undefined4*)local_a8[0], 0x12);
         uVar8 = _LC90;
         if (cVar10 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         Variant::operator_cast_to_Transform3D((Variant*)local_78);
         bVar11 = (bool)( *(code*)pVVar21 )((Variant*)( (long)plVar18 + (long)pVVar1 ), (Variant*)local_78, local_ec, &local_108, bVar11, iVar12);
         Variant::Variant((Variant*)local_c8, bVar11);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_c8[0];
         *(undefined8*)( param_1 + 8 ) = local_c0;
         *(undefined8*)( param_1 + 0x10 ) = uStack_b8;
         if (local_108 != (Object*)0x0) {
            cVar10 = RefCounted::unreference();
            pOVar9 = local_108;
            if (cVar10 != '\0') {
               cVar10 = predelete_handler(local_108);
               if (cVar10 != '\0') {
                  ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
                  Memory::free_static(pOVar9, false);
               }

            }

         }

         goto LAB_0010a60f;
      }

      uVar13 = 4;
   }
 else {
      uVar13 = 3;
   }

   *in_R9 = uVar13;
   in_R9[2] = 6;
   LAB_0010a60f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool,
   int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::validated_call(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010abe3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   auVar5._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar5._0_4_ = (float)*(double*)( param_2[2] + 8 );
   ( *pcVar3 )(auVar5._0_8_, &local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1][8], param_2[3][8], *(undefined4*)( param_2[4] + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0010abe3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, PhysicsServer3D::BodyAxis,
   bool>(__UnexistingClass*, void (__UnexistingClass::*)(PhysicsServer3D::BodyAxis, bool), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,PhysicsServer3D::BodyAxis,bool>(__UnexistingClass *param_1, _func_void_BodyAxis_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar6 = 3;
      goto LAB_0010aedd;
   }

   lVar7 = *(long*)( in_stack_00000008 + 8 );
   iVar5 = 2 - uVar10;
   if (lVar7 == 0) {
      if (iVar5 == 0) {
         this(Variant * ) * plVar8;
         LAB_0010af0d:this_00 = (Variant*)plVar8[1];
         goto LAB_0010ae45;
      }

   }
 else {
      lVar1 = *(long*)( lVar7 + -8 );
      iVar11 = (int)lVar1;
      if (iVar5 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar1 <= lVar9) goto LAB_0010af28;
            this(Variant * )(lVar7 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0010af0d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar5 ) );
         if (lVar1 <= lVar9) {
            LAB_0010af28:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         this_00 = (Variant*)( lVar7 + lVar9 * 0x18 );
         LAB_0010ae45:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_BodyAxis_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)this_00, 1);
         uVar3 = _LC83;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         Variant::operator_cast_to_bool(this_00);
         cVar4 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar3 = _LC79;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         lVar7 = Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x0010aecc. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), SUB81(lVar7, 0));
         return;
      }

   }

   uVar6 = 4;
   LAB_0010aedd:*(undefined4*)param_6 = uVar6;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<PhysicsServer3D::BodyAxis, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<PhysicsServer3D::BodyAxis,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC73, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010afc6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,PhysicsServer3D::BodyAxis,bool>(p_Var2, (_func_void_BodyAxis_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010afc6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<bool>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC20;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Vector3_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC20;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 9, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<float>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC20;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 3, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC20;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool,
   int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 5) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<Vector3_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      for (int i = 0; i < 4; i++) {
         call_get_argument_type_info_helper<bool>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010b905;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "KinematicCollision3D";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_0010ba07:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_0010ba07;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010b905:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<Transform3D const&, Vector3 const&, Ref<KinematicCollision3D>
   const&, float, bool, int>(int, PropertyInfo&) */void call_get_argument_type_info<Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>(int param_1, PropertyInfo *param_2) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   int local_94;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_94 = 0;
   if (param_1 == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0x12, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar2;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   local_94 = 1;
   call_get_argument_type_info_helper<Vector3_const&>(param_1, &local_94, param_2);
   iVar1 = local_94;
   if (param_1 == local_94) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "KinematicCollision3D";
      local_70 = 0x14;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0x18, (CowData<char32_t>*)&local_90, 0x11, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar2;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   local_94 = iVar1 + 1;
   call_get_argument_type_info_helper<float>(param_1, &local_94, param_2);
   iVar1 = local_94;
   if (param_1 == local_94) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_2 = local_78._0_4_;
      if (*(long*)( param_2 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( param_2 + 8 ) = lVar2;
      }

      if (*(long*)( param_2 + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( param_2 + 0x10 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x18 ) = local_60;
      if (*(long*)( param_2 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( param_2 + 0x20 ) = lVar2;
      }

      *(undefined4*)( param_2 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   local_94 = iVar1 + 1;
   call_get_argument_type_info_helper<int>(param_1, &local_94, param_2);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 6) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info<Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>(in_EDX, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010bf7c;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC20;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0010c05f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0010c05f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_0010bf7c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PhysicsBody3D::~PhysicsBody3D() */void PhysicsBody3D::~PhysicsBody3D(PhysicsBody3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* KinematicCollision3D::~KinematicCollision3D() */void KinematicCollision3D::~KinematicCollision3D(KinematicCollision3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR() */void MethodBindTR<TypedArray<PhysicsBody3D>>::~MethodBindTR(MethodBindTR<TypedArray<PhysicsBody3D>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, PhysicsServer3D::BodyAxis>::~MethodBindTRC() */void MethodBindTRC<bool,PhysicsServer3D::BodyAxis>::~MethodBindTRC(MethodBindTRC<bool,PhysicsServer3D::BodyAxis> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<PhysicsServer3D::BodyAxis, bool>::~MethodBindT() */void MethodBindT<PhysicsServer3D::BodyAxis,bool>::~MethodBindT(MethodBindT<PhysicsServer3D::BodyAxis,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool, Transform3D const&, Vector3 const&, Ref<KinematicCollision3D> const&, float,
   bool, int>::~MethodBindTR() */void MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int>::~MethodBindTR(MethodBindTR<bool,Transform3D_const&,Vector3_const&,Ref<KinematicCollision3D>const&,float,bool,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<KinematicCollision3D>, Vector3 const&, bool, float, bool, int>::~MethodBindTR()
    */void MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,Vector3_const&,bool,float,bool,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


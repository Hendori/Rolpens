/* JoltBody3D::get_velocity_at_position(Vector3 const&) const */undefined1  [16] __thiscallJoltBody3D::get_velocity_at_position(JoltBody3D *this, Vector3 *param_1) {
   undefined8 *puVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   undefined1 auVar6[16];
   undefined8 local_78;
   float local_70;
   code *local_68[8];
   undefined8 *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      local_78 = 0;
      local_70 = 0.0;
   }
 else {
      JoltSpace3D::read_body((BodyID*)local_68);
      if (local_28 == (undefined8*)0x0) {
         _err_print_error("get_velocity_at_position", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x35d, "Condition \"body.is_invalid()\" is true. Returning: Vector3()", 0, 0);
         local_70 = 0.0;
         local_78 = 0;
      }
 else {
         puVar1 = (undefined8*)local_28[9];
         fVar4 = (float)*(undefined8*)( this + 400 ) + (float)( (ulong)puVar1[2] >> 0x20 );
         fVar5 = *(float*)( this + 0x18c ) + (float)puVar1[2];
         fVar2 = (float)*(undefined8*)( param_1 + 4 ) - (float)( ( ulong ) * local_28 >> 0x20 );
         fVar3 = *(float*)param_1 - (float)*local_28;
         local_78 = CONCAT44(( ( (float)( ( ulong ) * (undefined8*)( this + 400 ) >> 0x20 ) + (float)puVar1[3] ) * fVar3 - ( (float)( ( ulong ) * (undefined8*)( param_1 + 4 ) >> 0x20 ) - (float)local_28[1] ) * fVar5 ) + (float)( ( ulong ) * puVar1 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x180 ) >> 0x20 ), ( fVar4 * ( *(float*)( param_1 + 8 ) - (float)local_28[1] ) - fVar2 * ( *(float*)( this + 0x194 ) + (float)puVar1[3] ) ) + (float)*puVar1 + (float)*(undefined8*)( this + 0x180 ));
         local_70 = ( fVar2 * fVar5 - fVar4 * fVar3 ) + (float)puVar1[1] + *(float*)( this + 0x188 );
      }

      JoltBodyAccessor3D::release();
      local_68[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   auVar6._8_4_ = local_70;
   auVar6._0_8_ = local_78;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar6._12_4_ = 0;
      return auVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::can_interact_with(JoltBody3D const&) const */undefined8 JoltBody3D::can_interact_with(JoltBody3D *this, JoltBody3D *param_1) {
   long *plVar1;
   char cVar2;
   long *plVar3;
   cVar2 = JoltObject3D::can_collide_with((JoltObject3D*)this);
   if (( cVar2 == '\0' ) && ( cVar2 = JoltObject3D::can_collide_with((JoltObject3D*)param_1) ),cVar2 == '\0') {
      return 0;
   }

   if (*(uint*)( this + 200 ) != 0) {
      plVar3 = *(long**)( this + 0xd0 );
      plVar1 = plVar3 + *(uint*)( this + 200 );
      do {
         if (*(long*)( param_1 + 0x18 ) == *plVar3) {
            return 0;
         }

         plVar3 = plVar3 + 1;
      }
 while ( plVar1 != plVar3 );
   }

   if (*(uint*)( param_1 + 200 ) != 0) {
      plVar3 = *(long**)( param_1 + 0xd0 );
      plVar1 = plVar3 + *(uint*)( param_1 + 200 );
      do {
         if (*plVar3 == *(long*)( this + 0x18 )) {
            return 0;
         }

         plVar3 = plVar3 + 1;
      }
 while ( plVar3 != plVar1 );
   }

   return 1;
}
/* JoltBody3D::~JoltBody3D() */void JoltBody3D::~JoltBody3D(JoltBody3D *this) {
   Object *this_00;
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   this_00 = *(Object**)( this + 0x1c8 );
   *(undefined***)this = &PTR__get_broad_phase_layer_0010b880;
   if (this_00 != (Object*)0x0) {
      cVar4 = predelete_handler(this_00);
      if (cVar4 != '\0') {
         *(code**)this_00 = Variant::_clear_internal;
         Object::~Object(this_00);
         Memory::free_static(this_00, false);
      }

      *(undefined8*)( this + 0x1c8 ) = 0;
   }

   Callable::~Callable((Callable*)( this + 0x1b8 ));
   Callable::~Callable((Callable*)( this + 0x1a8 ));
   if (Variant::needs_deinit[*(int*)( this + 0x108 )] != '\0') {
      Variant::_clear_internal();
   }

   for (int i = 0; i < 4; i++) {
      if (*(void**)( this + ( -16*i + 256 ) ) != (void*)0) {
         if (*(int*)( this + ( -16*i + 248 ) ) != 0) {
            *(undefined4*)( this + ( -16*i + 248 ) ) = 0;
         }

         Memory::free_static(*(void**)( this + ( -16*i + 256 ) ), false);
      }

   }

   plVar1 = *(long**)( this + 0xa8 );
   if (plVar1 != (long*)0x0) {
      lVar2 = *(long*)( this + 0xb8 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0xc0 );
      }

      lVar3 = *(long*)( this + 0xc0 );
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x10 ) = lVar2;
      }

      if (this + 0xa8 == (JoltBody3D*)*plVar1) {
         *plVar1 = *(long*)( this + 0xb8 );
      }

      if (this + 0xa8 == (JoltBody3D*)plVar1[1]) {
         plVar1[1] = lVar3;
         JoltShapedObject3D::~JoltShapedObject3D((JoltShapedObject3D*)this);
         return;
      }

   }

   JoltShapedObject3D::~JoltShapedObject3D((JoltShapedObject3D*)this);
   return;
}
/* JoltBody3D::~JoltBody3D() */void JoltBody3D::~JoltBody3D(JoltBody3D *this) {
   ~JoltBody3D(this)
   ;;
   operator_delete(this, 0x208);
   return;
}
/* JoltBody3D::_enqueue_call_queries() */void JoltBody3D::_enqueue_call_queries(JoltBody3D *this) {
   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
      return;
   }

   return;
}
/* JoltBody3D::_dequeue_call_queries() */void JoltBody3D::_dequeue_call_queries(JoltBody3D *this) {
   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::dequeue_call_queries(*(SelfList**)( this + 0x28 ));
      return;
   }

   return;
}
/* JoltBody3D::_move_kinematic(float, JPH::Body&) */void JoltBody3D::_move_kinematic(float param_1, Body *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined4 uVar9;
   uint uVar10;
   int iVar11;
   Body *in_RSI;
   long in_FS_OFFSET;
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   float local_78;
   float fStack_74;
   float fStack_70;
   float fStack_6c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   pauVar5 = *(undefined1(**) [16])( in_RSI + 0x48 );
   *pauVar5 = (undefined1[16])0x0;
   pauVar5[1] = (undefined1[16])0x0;
   auVar13 = JPH::Body::GetPosition(in_RSI);
   fVar1 = *(float*)( param_2 + 0x148 );
   uVar6 = *(undefined8*)( in_RSI + 0x10 );
   uVar7 = *(undefined8*)( in_RSI + 0x18 );
   fVar2 = *(float*)( param_2 + 0x14c );
   fVar3 = *(float*)( param_2 + 0x144 );
   uVar8 = *(undefined8*)( param_2 + 0x144 );
   Basis::get_quaternion();
   uVar9 = Quaternion::normalized();
   local_78 = auVar13._0_4_;
   fStack_74 = auVar13._4_4_;
   fStack_70 = auVar13._8_4_;
   fStack_6c = auVar13._12_4_;
   auVar13._4_4_ = -(uint)(fStack_74 == fVar1);
   auVar13._0_4_ = -(uint)(local_78 == fVar3);
   auVar13._8_4_ = -(uint)(fStack_70 == fVar2);
   auVar13._12_4_ = -(uint)(fStack_6c == fVar2);
   uVar10 = movmskps(uVar9, auVar13);
   if (( ( ~uVar10 & 7 ) == 0 ) && ( local_58 = (float)uVar6 ),fStack_54 = (float)( (ulong)uVar6 >> 0x20 ),fStack_50 = (float)uVar7,fStack_4c = (float)( (ulong)uVar7 >> 0x20 ),auVar12._4_4_ = -(uint)(fStack_54 == fStack_44),auVar12._0_4_ = -(uint)(local_58 == local_48),auVar12._8_4_ = -(uint)(fStack_50 == fStack_40),auVar12._12_4_ = -(uint)(fStack_4c == fStack_3c),iVar11 = movmskps(~uVar10, auVar12),iVar11 == 0xf) {
      if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
      JPH::Body::MoveKinematic(uVar8, CONCAT44(fVar2, fVar2), CONCAT44(fStack_44, local_48), CONCAT44(fStack_3c, fStack_40));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_calculate_mass_properties(JPH::Shape const&) const */Shape *JoltBody3D::_calculate_mass_properties(Shape *param_1) {
   float fVar1;
   float fVar2;
   long lVar3;
   long *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   fVar1 = *(float*)( in_RSI + 0x1dc );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(float*)( in_RSI + 0x150 ) <= 0.0 ) || ( *(float*)( in_RSI + 0x154 ) <= 0.0 )) {
      ( **(code**)( *in_RDX + 0x40 ) )(param_1);
      if (fVar1 <= 0.0) goto LAB_001006de;
      fVar1 = *(float*)( in_RSI + 0x1dc );
   }
 else {
      fVar2 = *(float*)( in_RSI + 0x158 );
      ( **(code**)( *in_RDX + 0x40 ) )();
      if (( fVar1 <= 0.0 ) && ( fVar2 <= 0.0 )) goto LAB_001006de;
      fVar1 = *(float*)( in_RSI + 0x1dc );
      if (0.0 < fVar2) {
         *(float*)param_1 = fVar1;
         goto LAB_001006de;
      }

   }

   JPH::MassProperties::ScaleToMass(fVar1);
   LAB_001006de:fVar1 = *(float*)( in_RSI + 0x150 );
   if (0.0 < fVar1) {
      *(undefined8*)( param_1 + 0x14 ) = 0;
      *(float*)( param_1 + 0x10 ) = fVar1;
      *(undefined4*)( param_1 + 0x20 ) = 0;
      *(undefined4*)( param_1 + 0x30 ) = 0;
   }

   if (0.0 < *(float*)( in_RSI + 0x154 )) {
      *(float*)( param_1 + 0x24 ) = *(float*)( in_RSI + 0x154 );
      *(undefined4*)( param_1 + 0x14 ) = 0;
      *(undefined4*)( param_1 + 0x34 ) = 0;
      *(undefined4*)( param_1 + 0x20 ) = 0;
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   fVar1 = *(float*)( in_RSI + 0x158 );
   if (0.0 < fVar1) {
      *(undefined8*)( param_1 + 0x30 ) = 0;
      *(float*)( param_1 + 0x38 ) = fVar1;
      *(undefined4*)( param_1 + 0x18 ) = 0;
      *(undefined4*)( param_1 + 0x28 ) = 0;
   }

   *(undefined4*)( param_1 + 0x4c ) = 0x3f800000;
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_calculate_mass_properties() const */JoltBody3D * __thiscall JoltBody3D::_calculate_mass_properties(JoltBody3D *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _calculate_mass_properties((Shape*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_update_kinematic_transform() */void JoltBody3D::_update_kinematic_transform(JoltBody3D *this) {
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1d0 ) == 1) {
      JoltShapedObject3D::get_transform_unscaled();
      *(undefined8*)( this + 0x120 ) = local_48;
      *(undefined8*)( this + 0x128 ) = uStack_40;
      *(undefined8*)( this + 0x130 ) = local_38;
      *(undefined8*)( this + 0x138 ) = uStack_30;
      *(undefined8*)( this + 0x140 ) = local_28;
      *(undefined8*)( this + 0x148 ) = uStack_20;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_update_joint_constraints() */void JoltBody3D::_update_joint_constraints(JoltBody3D *this) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)( this + 0x100 );
   puVar1 = puVar2 + *(uint*)( this + 0xf8 );
   do {
      if (puVar1 == puVar2) {
         return;
      }

      while (*(code**)( *(long*)*puVar2 + 0x18 ) != JoltJoint3D::rebuild) {
         ( **(code**)( *(long*)*puVar2 + 0x18 ) )();
         puVar2 = puVar2 + 1;
         if (puVar1 == puVar2) {
            return;
         }

      }
;
      puVar2 = puVar2 + 1;
   }
 while ( true );
}
/* JoltBody3D::_update_possible_kinematic_contacts() */void JoltBody3D::_update_possible_kinematic_contacts(JoltBody3D *this) {
   char cVar1;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   cVar1 = '\0';
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xd8 ) != 0) {
      cVar1 = JoltProjectSettings::should_generate_all_kinematic_contacts();
   }

   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      *(char*)( *(long*)( this + 0xa0 ) + 100 ) = cVar1;
   }
 else {
      JoltSpace3D::write_body((BodyID*)local_68);
      if (local_28 == 0) {
         _err_print_error("_update_possible_kinematic_contacts", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x19b, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else if (cVar1 == '\0') {
         LOCK();
         *(byte*)( local_28 + 0x79 ) = *(byte*)( local_28 + 0x79 ) & 0xfd;
         UNLOCK();
      }
 else {
         LOCK();
         *(byte*)( local_28 + 0x79 ) = *(byte*)( local_28 + 0x79 ) | 2;
         UNLOCK();
      }

      JoltBodyAccessor3D::release();
      local_68[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_update_sleep_allowed() */void JoltBody3D::_update_sleep_allowed(JoltBody3D *this) {
   long in_FS_OFFSET;
   JoltBody3D JVar1;
   code *local_68[8];
   long local_28;
   long local_20;
   JVar1 = this[0x200];
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( JVar1 != (JoltBody3D)0x0 ) && ( *(int*)( this + 0x1d0 ) == 1 )) {
      JVar1 = ( JoltBody3D )(*(int*)( this + 0xd8 ) == 0);
   }

   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      *(JoltBody3D*)( *(long*)( this + 0xa0 ) + 0x69 ) = JVar1;
   }
 else {
      JoltSpace3D::write_body((BodyID*)local_68);
      if (local_28 == 0) {
         _err_print_error("_update_sleep_allowed", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x1aa, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         JPH::Body::SetAllowSleeping(SUB81(local_28, 0));
      }

      JoltBodyAccessor3D::release();
      local_68[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_destroy_joint_constraints() */void JoltBody3D::_destroy_joint_constraints(JoltBody3D *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x100 );
   lVar1 = lVar2 + ( ulong ) * (uint*)( this + 0xf8 ) * 8;
   for (; lVar1 != lVar2; lVar2 = lVar2 + 8) {
      JoltJoint3D::destroy();
   }

   return;
}
/* JoltBody3D::_exit_all_areas() */void JoltBody3D::_exit_all_areas(JoltBody3D *this) {
   undefined8 *puVar1;
   BodyID *pBVar2;
   uint uVar3;
   undefined8 *puVar4;
   puVar4 = *(undefined8**)( this + 0xf0 );
   uVar3 = *(uint*)( this + 0xe8 );
   puVar1 = puVar4 + uVar3;
   if (puVar1 != puVar4) {
      do {
         pBVar2 = (BodyID*)*puVar4;
         puVar4 = puVar4 + 1;
         JoltArea3D::body_exited(pBVar2, (bool)( (char)this + '0' ));
      }
 while ( puVar1 != puVar4 );
      uVar3 = *(uint*)( this + 0xe8 );
   }

   if (uVar3 != 0) {
      *(undefined4*)( this + 0xe8 ) = 0;
   }

   return;
}
/* JoltBody3D::_update_group_filter() */void JoltBody3D::_update_group_filter(JoltBody3D *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar4 = (long*)0x0;
   if (*(int*)( this + 200 ) != 0) {
      plVar4 = JoltGroupFilter::instance;
   }

   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      lVar3 = *(long*)( this + 0xa0 );
      plVar2 = *(long**)( lVar3 + 0x50 );
      if (plVar4 != plVar2) {
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
               ( **(code**)( *plVar2 + 0x18 ) )();
            }

         }

         *(long**)( lVar3 + 0x50 ) = plVar4;
         if (plVar4 != (long*)0x0) {
            LOCK();
            *(int*)( plVar4 + 1 ) = (int)plVar4[1] + 1;
            UNLOCK();
         }

      }

   }
 else {
      JoltSpace3D::write_body((BodyID*)local_68);
      if (local_28 == 0) {
         _err_print_error("_update_group_filter", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x1c6, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         plVar2 = *(long**)( local_28 + 0x58 );
         if (plVar4 != plVar2) {
            if (plVar2 != (long*)0x0) {
               LOCK();
               plVar1 = plVar2 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *plVar2 + 0x18 ) )();
               }

            }

            *(long**)( local_28 + 0x58 ) = plVar4;
            if (plVar4 != (long*)0x0) {
               LOCK();
               *(int*)( plVar4 + 1 ) = (int)plVar4[1] + 1;
               UNLOCK();
            }

         }

      }

      JoltBodyAccessor3D::release();
      local_68[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_joints_changed() */void JoltBody3D::_joints_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::_transform_changed() */void JoltBody3D::_transform_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::_motion_changed() */void JoltBody3D::_motion_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::_exceptions_changed() */void JoltBody3D::_exceptions_changed(JoltBody3D *this) {
   _update_group_filter(this);
   return;
}
/* JoltBody3D::_contact_reporting_changed() */void JoltBody3D::_contact_reporting_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   _update_possible_kinematic_contacts(this);
   _update_sleep_allowed(this);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::_sleep_allowed_changed() */void JoltBody3D::_sleep_allowed_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   _update_sleep_allowed(this);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::JoltBody3D() */void JoltBody3D::JoltBody3D(JoltBody3D *this) {
   undefined1 auVar1[16];
   JoltShapedObject3D::JoltShapedObject3D((JoltShapedObject3D*)this, 1);
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined***)this = &PTR__get_broad_phase_layer_0010b880;
   *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
   auVar1 = ZEXT416(_LC9);
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(JoltBody3D**)( this + 0xb0 ) = this;
   for (int i = 0; i < 8; i++) {
      *(undefined8*)( this + ( 8*i + 200 ) ) = 0;
   }

   *(undefined4*)( this + 0x108 ) = 0;
   *(undefined4*)( this + 0x140 ) = 0x3f800000;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 12*i + 324 ) ) = 0;
      *(undefined4*)( this + ( 12*i + 332 ) ) = 0;
   }

   *(undefined8*)( this + 0x18c ) = 0;
   *(undefined1(*) [16])( this + 0x120 ) = auVar1;
   *(undefined1(*) [16])( this + 0x130 ) = auVar1;
   *(undefined4*)( this + 0x194 ) = 0;
   *(undefined8*)( this + 0x1d8 ) = 0x3f80000000000000;
   *(undefined8*)( this + 0x198 ) = 0;
   *(undefined4*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined8*)( this + 0x1b8 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   *(undefined8*)( this + 0x1d0 ) = 2;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined8*)( this + 0x1e8 ) = 0;
   *(undefined8*)( this + 0x1f0 ) = 0x3f8000003f800000;
   *(undefined8*)( this + 0x1f8 ) = 0;
   *(undefined4*)( this + 0x200 ) = 1;
   return;
}
/* JoltBody3D::set_custom_integrator(bool) */void JoltBody3D::set_custom_integrator(JoltBody3D *this, bool param_1) {
   long lVar1;
   long lVar2;
   BodyID *pBVar3;
   long in_FS_OFFSET;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x203] != (JoltBody3D)param_1) {
      this[0x203] = (JoltBody3D)param_1;
      if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
         this[0x201] = (JoltBody3D)0x0;
      }
 else {
         JoltSpace3D::write_body((BodyID*)local_68);
         if (local_28 == 0) {
            _err_print_error("set_custom_integrator", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x2bf, "Condition \"body.is_invalid()\" is true.", 0, 0);
         }
 else {
            lVar1 = *(long*)( local_28 + 0x48 );
            lVar2 = *(long*)( this + 0x28 );
            *(undefined8*)( lVar1 + 0x50 ) = 0;
            *(undefined1(*) [16])( lVar1 + 0x40 ) = (undefined1[16])0x0;
            if (( lVar2 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
               this[0x201] = (JoltBody3D)0x0;
            }
 else {
               pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
               JPH::BodyInterface::ActivateBody(pBVar3);
            }

         }

         JoltBodyAccessor3D::release();
         local_68[0] = JPH::Body::SetAllowSleeping;
         JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::is_sleeping() const */JoltBody3D JoltBody3D::is_sleeping(JoltBody3D *this) {
   long in_FS_OFFSET;
   JoltBody3D JVar1;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      JVar1 = this[0x201];
   }
 else {
      JoltSpace3D::read_body((BodyID*)local_68);
      if (local_28 == 0) {
         JVar1 = (JoltBody3D)0x0;
         _err_print_error("is_sleeping", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x2cd, "Condition \"body.is_invalid()\" is true. Returning: false", 0, 0);
      }
 else {
         JVar1 = (JoltBody3D)0x1;
         if (*(long*)( local_28 + 0x48 ) != 0) {
            JVar1 = ( JoltBody3D )(*(int*)( *(long*)( local_28 + 0x48 ) + 0x70 ) == -1);
         }

      }

      JoltBodyAccessor3D::release();
      local_68[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return JVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::is_sleep_actually_allowed() const */uint JoltBody3D::is_sleep_actually_allowed(JoltBody3D *this) {
   if (( this[0x200] != (JoltBody3D)0x0 ) && ( *(int*)( this + 0x1d0 ) == 1 )) {
      return CONCAT31(( int3 )(( uint ) * (int*)( this + 0xd8 ) >> 8), *(int*)( this + 0xd8 ) == 0);
   }

   return (uint)(byte)this[0x200];
}
/* JoltBody3D::set_is_sleeping(bool) */void JoltBody3D::set_is_sleeping(JoltBody3D *this, bool param_1) {
   BodyID *pBVar1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      if (param_1) {
         JPH::BodyInterface::DeactivateBody(pBVar1);
         return;
      }

      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)param_1;
   return;
}
/* JoltBody3D::set_is_sleep_allowed(bool) */void JoltBody3D::set_is_sleep_allowed(JoltBody3D *this, bool param_1) {
   BodyID *pBVar1;
   if (this[0x200] == (JoltBody3D)param_1) {
      return;
   }

   this[0x200] = (JoltBody3D)param_1;
   _update_sleep_allowed(this);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltBody3D::set_linear_velocity(Vector3 const&) */void JoltBody3D::set_linear_velocity(JoltBody3D *this, Vector3 *param_1) {
   undefined4 uVar1;
   byte bVar2;
   float *pfVar3;
   long lVar4;
   undefined1 auVar5[16];
   BodyID *pBVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   undefined1 auVar12[16];
   float fVar13;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( this + 0x1d0 ) < 2) {
      *(undefined8*)( this + 0x180 ) = *(undefined8*)param_1;
      *(undefined4*)( this + 0x188 ) = *(undefined4*)( param_1 + 8 );
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            JPH::BodyInterface::ActivateBody(pBVar6);
            return;
         }

         goto LAB_0010153a;
      }

      LAB_00101463:this[0x201] = (JoltBody3D)0x0;
   }
 else {
      if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
         uVar1 = *(undefined4*)( param_1 + 8 );
         lVar4 = *(long*)( this + 0xa0 );
         *(undefined8*)( lVar4 + 0x20 ) = *(undefined8*)param_1;
         *(ulong*)( lVar4 + 0x28 ) = CONCAT44(uVar1, uVar1);
         goto LAB_00101463;
      }

      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("set_linear_velocity", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x326, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         pfVar3 = *(float**)( local_38 + 0x48 );
         bVar2 = *(byte*)( (long)pfVar3 + 0x7a );
         auVar12._1_3_ = 0;
         auVar12[0] = bVar2;
         auVar12[4] = bVar2;
         auVar12._5_3_ = 0;
         auVar12[8] = bVar2;
         auVar12._9_3_ = 0;
         auVar12[0xc] = bVar2;
         auVar12._13_3_ = 0;
         auVar5._4_4_ = _UNK_0010ba54;
         auVar5._0_4_ = __LC6;
         auVar5._8_4_ = _UNK_0010ba58;
         auVar5._12_4_ = _UNK_0010ba5c;
         auVar12 = auVar12 & auVar5;
         fVar7 = (float)( *(uint*)param_1 & -(uint)(auVar12._0_4_ == __LC6) );
         fVar8 = (float)( *(uint*)( param_1 + 4 ) & -(uint)(auVar12._4_4_ == _UNK_0010ba54) );
         fVar9 = (float)( *(uint*)( param_1 + 8 ) & -(uint)(auVar12._8_4_ == _UNK_0010ba58) );
         fVar10 = (float)( *(uint*)( param_1 + 8 ) & -(uint)(auVar12._12_4_ == _UNK_0010ba5c) );
         *pfVar3 = fVar7;
         pfVar3[1] = fVar8;
         pfVar3[2] = fVar9;
         pfVar3[3] = fVar10;
         fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + 0.0 + fVar8 * fVar8;
         fVar13 = pfVar3[0x19];
         if (fVar13 * fVar13 < fVar11) {
            fVar13 = fVar13 / SQRT(fVar11);
            *pfVar3 = fVar13 * fVar7;
            pfVar3[1] = fVar13 * fVar8;
            pfVar3[2] = fVar13 * fVar9;
            pfVar3[3] = fVar13 * fVar10;
         }

         if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar6);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010153a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltBody3D::set_angular_velocity(Vector3 const&) */void JoltBody3D::set_angular_velocity(JoltBody3D *this, Vector3 *param_1) {
   undefined4 uVar1;
   byte bVar2;
   long lVar3;
   undefined1 auVar4[16];
   BodyID *pBVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   undefined1 auVar11[16];
   float fVar12;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( this + 0x1d0 ) < 2) {
      *(undefined8*)( this + 0x18c ) = *(undefined8*)param_1;
      *(undefined4*)( this + 0x194 ) = *(undefined4*)( param_1 + 8 );
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar5 = (BodyID*)JoltSpace3D::get_body_iface();
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            JPH::BodyInterface::ActivateBody(pBVar5);
            return;
         }

         goto LAB_0010176a;
      }

      LAB_00101693:this[0x201] = (JoltBody3D)0x0;
   }
 else {
      if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
         uVar1 = *(undefined4*)( param_1 + 8 );
         lVar3 = *(long*)( this + 0xa0 );
         *(undefined8*)( lVar3 + 0x30 ) = *(undefined8*)param_1;
         *(ulong*)( lVar3 + 0x38 ) = CONCAT44(uVar1, uVar1);
         goto LAB_00101693;
      }

      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("set_angular_velocity", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x33b, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         lVar3 = *(long*)( local_38 + 0x48 );
         bVar2 = *(byte*)( lVar3 + 0x7a );
         auVar11._1_3_ = 0;
         auVar11[0] = bVar2;
         auVar11[4] = bVar2;
         auVar11._5_3_ = 0;
         auVar11[8] = bVar2;
         auVar11._9_3_ = 0;
         auVar11[0xc] = bVar2;
         auVar11._13_3_ = 0;
         auVar4._4_4_ = _UNK_0010ba64;
         auVar4._0_4_ = __LC8;
         auVar4._8_4_ = _UNK_0010ba68;
         auVar4._12_4_ = _UNK_0010ba6c;
         auVar11 = auVar11 & auVar4;
         fVar6 = (float)( *(uint*)param_1 & -(uint)(auVar11._0_4_ == __LC8) );
         fVar7 = (float)( *(uint*)( param_1 + 4 ) & -(uint)(auVar11._4_4_ == _UNK_0010ba64) );
         fVar8 = (float)( *(uint*)( param_1 + 8 ) & -(uint)(auVar11._8_4_ == _UNK_0010ba68) );
         fVar9 = (float)( *(uint*)( param_1 + 8 ) & -(uint)(auVar11._12_4_ == _UNK_0010ba6c) );
         *(float*)( lVar3 + 0x10 ) = fVar6;
         *(float*)( lVar3 + 0x14 ) = fVar7;
         *(float*)( lVar3 + 0x18 ) = fVar8;
         *(float*)( lVar3 + 0x1c ) = fVar9;
         fVar10 = fVar8 * fVar8 + fVar6 * fVar6 + 0.0 + fVar7 * fVar7;
         fVar12 = *(float*)( lVar3 + 0x68 );
         if (fVar12 * fVar12 < fVar10) {
            fVar12 = fVar12 / SQRT(fVar10);
            *(float*)( lVar3 + 0x10 ) = fVar12 * fVar6;
            *(float*)( lVar3 + 0x14 ) = fVar12 * fVar7;
            *(float*)( lVar3 + 0x18 ) = fVar12 * fVar8;
            *(float*)( lVar3 + 0x1c ) = fVar12 * fVar9;
         }

         if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar5 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar5);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010176a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JoltBody3D::set_axis_velocity(Vector3 const&) */void JoltBody3D::set_axis_velocity(JoltBody3D *this, Vector3 *param_1) {
   float fVar1;
   ulong uVar2;
   long lVar3;
   long lVar4;
   undefined1 auVar5[16];
   BodyID *pBVar6;
   long in_FS_OFFSET;
   float fVar7;
   undefined8 uVar8;
   float extraout_XMM1_Da;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   float fVar12;
   float fVar13;
   undefined1 auVar14[16];
   float fVar15;
   undefined8 local_78;
   float local_70;
   code *local_68[8];
   long local_28;
   long local_20;
   float fVar9;
   uVar2 = *(ulong*)param_1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar2;
   fVar9 = *(float*)( param_1 + 8 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar12 = *(float*)( param_1 + 4 );
   fVar7 = (float)( uVar2 >> 0x20 );
   fVar7 = (float)uVar2 * (float)uVar2 + fVar7 * fVar7 + fVar9 * fVar9;
   auVar10 = (undefined1[16])0x0;
   uVar8 = 0;
   if (fVar7 != 0.0) {
      fVar7 = SQRT(fVar7);
      auVar11._12_4_ = fVar9;
      auVar11._0_12_ = *(undefined1(*) [12])param_1;
      auVar10._4_4_ = fVar7;
      auVar10._0_4_ = fVar7;
      auVar10._8_4_ = (int)_LC24;
      auVar10._12_4_ = (int)( (ulong)_LC24 >> 0x20 );
      auVar14 = divps(auVar14, auVar10);
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      auVar5._8_4_ = fVar7;
      auVar5._12_4_ = fVar7;
      auVar10 = divps(auVar11, auVar5);
      uVar8 = auVar14._0_8_;
   }

   lVar3 = *(long*)( this + 0x28 );
   fVar7 = auVar10._8_4_;
   fVar13 = (float)uVar8;
   fVar15 = (float)( (ulong)uVar8 >> 0x20 );
   if (( lVar3 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      lVar4 = *(long*)( this + 0xa0 );
      fVar1 = *(float*)( lVar4 + 0x28 );
      fVar13 = fVar13 * *(float*)( lVar4 + 0x20 ) + fVar15 * *(float*)( lVar4 + 0x24 ) + fVar7 * fVar1;
      *(float*)( lVar4 + 0x20 ) = ( *(float*)( lVar4 + 0x20 ) - fVar13 * auVar10._0_4_ ) + *(float*)param_1;
      *(float*)( lVar4 + 0x24 ) = ( *(float*)( lVar4 + 0x24 ) - fVar13 * auVar10._4_4_ ) + fVar12;
      *(float*)( lVar4 + 0x28 ) = ( fVar1 - fVar13 * fVar7 ) + fVar9;
      *(float*)( lVar4 + 0x2c ) = ( fVar1 - fVar13 * auVar10._12_4_ ) + fVar9;
      joined_r0x0010199f:if (( lVar3 != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            JPH::BodyInterface::ActivateBody(pBVar6);
            return;
         }

         goto LAB_00101a56;
      }

      this[0x201] = (JoltBody3D)0x0;
   }
 else {
      JoltSpace3D::write_body((BodyID*)local_68);
      if (local_28 != 0) {
         uVar8 = JoltShapedObject3D::get_linear_velocity();
         fVar9 = (float)( (ulong)uVar8 >> 0x20 );
         fVar12 = fVar13 * (float)uVar8 + fVar9 * fVar15 + extraout_XMM1_Da * fVar7;
         local_70 = ( extraout_XMM1_Da - fVar12 * fVar7 ) + *(float*)( param_1 + 8 );
         local_78 = CONCAT44(( fVar9 - fVar12 * fVar15 ) + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), ( (float)uVar8 - fVar12 * fVar13 ) + (float)*(undefined8*)param_1);
         set_linear_velocity(this, (Vector3*)&local_78);
         JoltBodyAccessor3D::release();
         local_68[0] = JPH::Body::SetAllowSleeping;
         JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
         lVar3 = *(long*)( this + 0x28 );
         goto joined_r0x0010199f;
      }

      _err_print_error("set_axis_velocity", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x34c, "Condition \"body.is_invalid()\" is true.", 0, 0);
      JoltBodyAccessor3D::release();
      local_68[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101a56:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JoltBody3D::set_center_of_mass_custom(Vector3 const&) */void JoltBody3D::set_center_of_mass_custom(JoltBody3D *this, Vector3 *param_1) {
   undefined8 uVar1;
   if (( ( ( this[0x202] != (JoltBody3D)0x0 ) && ( *(float*)param_1 == *(float*)( this + 0x15c ) ) ) && ( *(float*)( param_1 + 4 ) == *(float*)( this + 0x160 ) ) ) && ( *(float*)( param_1 + 8 ) == *(float*)( this + 0x164 ) )) {
      return;
   }

   uVar1 = *(undefined8*)param_1;
   this[0x202] = (JoltBody3D)0x1;
   *(undefined8*)( this + 0x15c ) = uVar1;
   *(undefined4*)( this + 0x164 ) = *(undefined4*)( param_1 + 8 );
   JoltShapedObject3D::_shapes_changed();
   return;
}
/* JoltBody3D::set_max_contacts_reported(int) */void JoltBody3D::set_max_contacts_reported(JoltBody3D *this, int param_1) {
   code *pcVar1;
   int iVar2;
   uint uVar3;
   BodyID *pBVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   uint uVar8;
   if (param_1 < 0) {
      _err_print_error("set_max_contacts_reported", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x374, "Condition \"p_count < 0\" is true.", 0, 0);
      return;
   }

   uVar3 = *(uint*)( this + 0xd8 );
   if (uVar3 == param_1) {
      return;
   }

   if (uVar3 <= (uint)param_1) {
      if ((uint)param_1 <= uVar3) goto LAB_00101af3;
      uVar8 = param_1 - 1;
      if (*(uint*)( this + 0xdc ) < (uint)param_1) {
         uVar3 = uVar8 >> 1 | uVar8;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
         *(uint*)( this + 0xdc ) = uVar3;
         lVar7 = Memory::realloc_static(*(void**)( this + 0xe0 ), (ulong)uVar3 * 0x68, false);
         *(long*)( this + 0xe0 ) = lVar7;
         if (lVar7 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar3 = *(uint*)( this + 0xd8 );
         if ((uint)param_1 <= uVar3) goto LAB_00101aeb;
      }

      lVar7 = *(long*)( this + 0xe0 );
      puVar5 = (undefined8*)( lVar7 + (ulong)uVar3 * 0x68 );
      do {
         *puVar5 = 0;
         puVar6 = puVar5 + 0xd;
         *(undefined4*)( puVar5 + 1 ) = 0;
         *(undefined8*)( (long)puVar5 + 0xc ) = 0;
         *(undefined4*)( (long)puVar5 + 0x14 ) = 0;
         puVar5[3] = 0;
         *(undefined4*)( puVar5 + 4 ) = 0;
         *(undefined8*)( (long)puVar5 + 0x24 ) = 0;
         *(undefined4*)( (long)puVar5 + 0x2c ) = 0;
         puVar5[6] = 0;
         *(undefined4*)( puVar5 + 7 ) = 0;
         *(undefined8*)( (long)puVar5 + 0x3c ) = 0;
         *(undefined4*)( (long)puVar5 + 0x44 ) = 0;
         *(undefined1(*) [16])( puVar5 + 9 ) = (undefined1[16])0x0;
         *(undefined4*)( puVar5 + 0xb ) = 0;
         *(undefined8*)( (long)puVar5 + 0x5c ) = 0;
         puVar5 = puVar6;
      }
 while ( puVar6 != (undefined8*)( lVar7 + 0x68 + ( ( ulong )(uVar8 - uVar3) + (ulong)uVar3 ) * 0x68 ) );
   }

   LAB_00101aeb:*(int*)( this + 0xd8 ) = param_1;
   uVar3 = param_1;
   LAB_00101af3:iVar2 = *(int*)( this + 0x1f8 );
   if (param_1 < *(int*)( this + 0x1f8 )) {
      iVar2 = param_1;
   }

   *(int*)( this + 0x1f8 ) = iVar2;
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      *(bool*)( *(long*)( this + 0xa0 ) + 0x65 ) = uVar3 == 0;
      _update_possible_kinematic_contacts(this);
      _update_sleep_allowed(this);
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar4 = (BodyID*)JoltSpace3D::get_body_iface();
         JPH::BodyInterface::ActivateBody(pBVar4);
         return;
      }

   }
 else {
      pBVar4 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::SetUseManifoldReduction(pBVar4, (bool)( (char)this + '0' ));
      _update_possible_kinematic_contacts(this);
      _update_sleep_allowed(this);
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar4 = (BodyID*)JoltSpace3D::get_body_iface();
         JPH::BodyInterface::ActivateBody(pBVar4);
         return;
      }

   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::reports_all_kinematic_contacts() const */undefined8 JoltBody3D::reports_all_kinematic_contacts(JoltBody3D *this) {
   undefined8 uVar1;
   if (*(int*)( this + 0xd8 ) == 0) {
      return 0;
   }

   uVar1 = JoltProjectSettings::should_generate_all_kinematic_contacts();
   return uVar1;
}
/* JoltBody3D::add_contact(JoltBody3D const*, float, int, int, Vector3 const&, Vector3 const&,
   Vector3 const&, Vector3 const&, Vector3 const&, Vector3 const&) */void JoltBody3D::add_contact(JoltBody3D *this, JoltBody3D *param_1, float param_2, int param_3, int param_4, Vector3 *param_5, Vector3 *param_6, Vector3 *param_7, Vector3 *param_8, Vector3 *param_9, Vector3 *param_10) {
   uint uVar1;
   undefined4 uVar2;
   code *pcVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   uint uVar8;
   uVar1 = *(uint*)( this + 0xd8 );
   if (uVar1 != 0) {
      uVar8 = *(uint*)( this + 0x1f8 );
      if ((int)uVar8 < (int)uVar1) {
         *(uint*)( this + 0x1f8 ) = uVar8 + 1;
         if (uVar1 <= uVar8) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar8, (ulong)uVar1, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar7 = (undefined8*)( *(long*)( this + 0xe0 ) + (ulong)uVar8 * 0x68 );
         if (puVar7 == (undefined8*)0x0) {
            return;
         }

      }
 else {
         puVar7 = *(undefined8**)( this + 0xe0 );
         uVar8 = 1;
         puVar4 = puVar7;
         if (1 < (int)uVar1) {
            do {
               if (*(float*)( puVar4 + 0x18 ) <= *(float*)( puVar7 + 0xb ) && *(float*)( puVar7 + 0xb ) != *(float*)( puVar4 + 0x18 )) {
                  puVar7 = puVar4 + 0xd;
               }

               uVar8 = uVar8 + 1;
               puVar4 = puVar4 + 0xd;
            }
 while ( uVar8 != uVar1 );
         }

         if (param_2 < *(float*)( puVar7 + 0xb ) || param_2 == *(float*)( puVar7 + 0xb )) {
            return;
         }

      }

      uVar5 = *(undefined8*)( param_1 + 0x18 );
      uVar6 = *(undefined8*)( param_1 + 0x20 );
      *puVar7 = *(undefined8*)param_5;
      *(undefined4*)( puVar7 + 1 ) = *(undefined4*)( param_5 + 8 );
      *(undefined8*)( (long)puVar7 + 0xc ) = *(undefined8*)param_6;
      *(undefined4*)( (long)puVar7 + 0x14 ) = *(undefined4*)( param_6 + 8 );
      puVar7[3] = *(undefined8*)param_7;
      *(undefined4*)( puVar7 + 4 ) = *(undefined4*)( param_7 + 8 );
      *(undefined8*)( (long)puVar7 + 0x24 ) = *(undefined8*)param_8;
      *(undefined4*)( (long)puVar7 + 0x2c ) = *(undefined4*)( param_8 + 8 );
      puVar7[6] = *(undefined8*)param_9;
      *(undefined4*)( puVar7 + 7 ) = *(undefined4*)( param_9 + 8 );
      *(undefined8*)( (long)puVar7 + 0x3c ) = *(undefined8*)param_10;
      uVar2 = *(undefined4*)( param_10 + 8 );
      *(int*)( (long)puVar7 + 0x5c ) = param_3;
      *(undefined4*)( (long)puVar7 + 0x44 ) = uVar2;
      *(int*)( puVar7 + 0xc ) = param_4;
      puVar7[9] = uVar6;
      puVar7[10] = uVar5;
   }

   return;
}
/* JoltBody3D::add_constant_central_force(Vector3 const&) */void JoltBody3D::add_constant_central_force(JoltBody3D *this, Vector3 *param_1) {
   BodyID *pBVar1;
   float fVar2;
   float fVar3;
   fVar2 = (float)*(undefined8*)param_1;
   fVar3 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   if (( ( fVar2 == 0.0 ) && ( fVar3 == 0.0 ) ) && ( *(float*)( param_1 + 8 ) == 0.0 )) {
      return;
   }

   *(float*)( this + 0x170 ) = *(float*)( param_1 + 8 ) + *(float*)( this + 0x170 );
   *(ulong*)( this + 0x168 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x168 ) >> 0x20 ) + fVar3, (float)*(undefined8*)( this + 0x168 ) + fVar2);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::add_constant_force(Vector3 const&, Vector3 const&) */void JoltBody3D::add_constant_force(JoltBody3D *this, Vector3 *param_1, Vector3 *param_2) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   BodyID *pBVar7;
   long in_FS_OFFSET;
   undefined1 auVar8[12];
   float local_88;
   float fStack_84;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(float*)param_1 != 0.0 ) || ( *(float*)( param_1 + 4 ) != 0.0 ) ) || ( *(float*)( param_1 + 8 ) != 0.0 )) {
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("add_constant_force", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x447, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         *(ulong*)( this + 0x168 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x168 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*(undefined8*)( this + 0x168 ) + (float)*(undefined8*)param_1);
         *(float*)( this + 0x170 ) = *(float*)( this + 0x170 ) + *(float*)( param_1 + 8 );
         auVar8 = JoltShapedObject3D::get_center_of_mass_relative();
         uVar5 = *(undefined8*)( param_2 + 4 );
         fVar1 = *(float*)( param_2 + 8 );
         fVar2 = *(float*)param_1;
         local_88 = auVar8._0_4_;
         fStack_84 = auVar8._4_4_;
         fStack_84 = (float)uVar5 - fStack_84;
         fVar3 = *(float*)param_2;
         fVar4 = *(float*)( param_1 + 8 );
         uVar6 = *(undefined8*)( param_1 + 4 );
         *(float*)( this + 0x17c ) = ( *(float*)( param_1 + 4 ) * ( fVar3 - local_88 ) - fStack_84 * fVar2 ) + *(float*)( this + 0x17c );
         *(ulong*)( this + 0x174 ) = CONCAT44(( fVar2 * ( (float)( (ulong)uVar5 >> 0x20 ) - auVar8._8_4_ ) - ( fVar3 - local_88 ) * (float)( (ulong)uVar6 >> 0x20 ) ) + (float)( ( ulong ) * (undefined8*)( this + 0x174 ) >> 0x20 ), ( fVar4 * fStack_84 - ( fVar1 - auVar8._8_4_ ) * (float)uVar6 ) + (float)*(undefined8*)( this + 0x174 ));
         if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar7 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar7);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::add_constant_torque(Vector3 const&) */void JoltBody3D::add_constant_torque(JoltBody3D *this, Vector3 *param_1) {
   BodyID *pBVar1;
   float fVar2;
   float fVar3;
   fVar2 = (float)*(undefined8*)param_1;
   fVar3 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   if (( ( fVar2 == 0.0 ) && ( fVar3 == 0.0 ) ) && ( *(float*)( param_1 + 8 ) == 0.0 )) {
      return;
   }

   *(float*)( this + 0x17c ) = *(float*)( param_1 + 8 ) + *(float*)( this + 0x17c );
   *(ulong*)( this + 0x174 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x174 ) >> 0x20 ) + fVar3, (float)*(undefined8*)( this + 0x174 ) + fVar2);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::get_constant_force() const */undefined1  [16] __thiscallJoltBody3D::get_constant_force(JoltBody3D *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x168 );
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_constant_force(Vector3 const&) */void JoltBody3D::set_constant_force(JoltBody3D *this, Vector3 *param_1) {
   BodyID *pBVar1;
   if (( ( *(float*)( this + 0x168 ) == *(float*)param_1 ) && ( *(float*)( this + 0x16c ) == *(float*)( param_1 + 4 ) ) ) && ( *(float*)( this + 0x170 ) == *(float*)( param_1 + 8 ) )) {
      return;
   }

   *(undefined8*)( this + 0x168 ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x170 ) = *(undefined4*)( param_1 + 8 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::get_constant_torque() const */undefined1  [16] __thiscallJoltBody3D::get_constant_torque(JoltBody3D *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x174 );
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_constant_torque(Vector3 const&) */void JoltBody3D::set_constant_torque(JoltBody3D *this, Vector3 *param_1) {
   BodyID *pBVar1;
   if (( ( *(float*)( this + 0x174 ) == *(float*)param_1 ) && ( *(float*)( this + 0x178 ) == *(float*)( param_1 + 4 ) ) ) && ( *(float*)( this + 0x17c ) == *(float*)( param_1 + 8 ) )) {
      return;
   }

   *(undefined8*)( this + 0x174 ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x17c ) = *(undefined4*)( param_1 + 8 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::add_collision_exception(RID const&) */void JoltBody3D::add_collision_exception(JoltBody3D *this, RID *param_1) {
   uint uVar1;
   undefined8 uVar2;
   code *pcVar3;
   void *pvVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 200 );
   uVar2 = *(undefined8*)param_1;
   pvVar4 = *(void**)( this + 0xd0 );
   if (uVar1 == *(uint*)( this + 0xcc )) {
      uVar5 = ( ulong )(uVar1 * 2);
      if (uVar1 * 2 == 0) {
         uVar5 = 1;
      }

      *(int*)( this + 0xcc ) = (int)uVar5;
      pvVar4 = (void*)Memory::realloc_static(pvVar4, uVar5 * 8, false);
      *(void**)( this + 0xd0 ) = pvVar4;
      if (pvVar4 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      uVar1 = *(uint*)( this + 200 );
   }

   *(uint*)( this + 200 ) = uVar1 + 1;
   *(undefined8*)( (long)pvVar4 + (ulong)uVar1 * 8 ) = uVar2;
   _update_group_filter(this);
   return;
}
/* JoltBody3D::remove_collision_exception(RID const&) */void JoltBody3D::remove_collision_exception(JoltBody3D *this, RID *param_1) {
   uint uVar1;
   long lVar2;
   uint uVar3;
   ulong uVar4;
   uVar1 = *(uint*)( this + 200 );
   if (uVar1 != 0) {
      lVar2 = *(long*)( this + 0xd0 );
      uVar4 = 0;
      do {
         if (*(long*)( lVar2 + uVar4 * 8 ) == *(long*)param_1) {
            *(uint*)( this + 200 ) = uVar1 - 1;
            uVar3 = (uint)uVar4;
            if (uVar3 < uVar1 - 1) {
               memmove((void*)( lVar2 + uVar4 * 8 ), (void*)( lVar2 + ( ulong )(uVar3 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar3) * 8 + 8);
            }

            break;
         }

         uVar4 = uVar4 + 1;
      }
 while ( uVar4 != uVar1 );
   }

   _update_group_filter(this);
   return;
}
/* JoltBody3D::has_collision_exception(RID const&) const */undefined8 JoltBody3D::has_collision_exception(JoltBody3D *this, RID *param_1) {
   long *plVar1;
   long *plVar2;
   if (*(uint*)( this + 200 ) != 0) {
      plVar2 = *(long**)( this + 0xd0 );
      plVar1 = plVar2 + *(uint*)( this + 200 );
      do {
         if (*plVar2 == *(long*)param_1) {
            return 1;
         }

         plVar2 = plVar2 + 1;
      }
 while ( plVar2 != plVar1 );
   }

   return 0;
}
/* JoltBody3D::add_joint(JoltJoint3D*) */void JoltBody3D::add_joint(JoltBody3D *this, JoltJoint3D *param_1) {
   uint uVar1;
   code *pcVar2;
   BodyID *pBVar3;
   void *pvVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0xf8 );
   pvVar4 = *(void**)( this + 0x100 );
   if (uVar1 == *(uint*)( this + 0xfc )) {
      uVar5 = ( ulong )(uVar1 * 2);
      if (uVar1 * 2 == 0) {
         uVar5 = 1;
      }

      *(int*)( this + 0xfc ) = (int)uVar5;
      pvVar4 = (void*)Memory::realloc_static(pvVar4, uVar5 * 8, false);
      *(void**)( this + 0x100 ) = pvVar4;
      if (pvVar4 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar1 = *(uint*)( this + 0xf8 );
   }

   *(uint*)( this + 0xf8 ) = uVar1 + 1;
   *(JoltJoint3D**)( (long)pvVar4 + (ulong)uVar1 * 8 ) = param_1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar3);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::remove_joint(JoltJoint3D*) */void JoltBody3D::remove_joint(JoltBody3D *this, JoltJoint3D *param_1) {
   uint uVar1;
   long lVar2;
   BodyID *pBVar3;
   uint uVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0xf8 );
   lVar2 = *(long*)( this + 0x100 );
   if (uVar1 != 0) {
      uVar5 = 0;
      do {
         if (*(JoltJoint3D**)( lVar2 + uVar5 * 8 ) == param_1) {
            uVar4 = (uint)uVar5;
            if (uVar4 < uVar1) {
               *(uint*)( this + 0xf8 ) = uVar1 - 1;
               if (uVar4 < uVar1 - 1) {
                  memmove((void*)( lVar2 + uVar5 * 8 ), (void*)( lVar2 + ( ulong )(uVar4 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar4) * 8 + 8);
               }

            }
 else {
               _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar5, (ulong)uVar1, "p_index", "count", "", false, false);
            }

            break;
         }

         uVar5 = uVar5 + 1;
      }
 while ( uVar5 != uVar1 );
   }

   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar3);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::get_direct_state() */JoltPhysicsDirectBodyState3D * __thiscall JoltBody3D::get_direct_state(JoltBody3D *this){
   JoltPhysicsDirectBodyState3D *this_00;
   if (*(JoltPhysicsDirectBodyState3D**)( this + 0x1c8 ) != (JoltPhysicsDirectBodyState3D*)0x0) {
      return *(JoltPhysicsDirectBodyState3D**)( this + 0x1c8 );
   }

   this_00 = (JoltPhysicsDirectBodyState3D*)operator_new(0x180, "");
   JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D(this_00, this);
   postinitialize_handler((Object*)this_00);
   *(JoltPhysicsDirectBodyState3D**)( this + 0x1c8 ) = this_00;
   return this_00;
}
/* JoltBody3D::is_ccd_enabled() const */bool JoltBody3D::is_ccd_enabled(JoltBody3D *this) {
   char cVar1;
   BodyID *pBVar2;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar2 = (BodyID*)JoltSpace3D::get_body_iface();
      cVar1 = JPH::BodyInterface::GetMotionQuality(pBVar2);
      return cVar1 == '\x01';
   }

   return *(char*)( *(long*)( this + 0xa0 ) + 0x67 ) == '\x01';
}
/* JoltBody3D::set_ccd_enabled(bool) */void JoltBody3D::set_ccd_enabled(JoltBody3D *this, bool param_1) {
   undefined8 uVar1;
   undefined7 in_register_00000031;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      uVar1 = JoltSpace3D::get_body_iface();
      JPH::BodyInterface::SetMotionQuality(uVar1, this + 0x30, CONCAT71(in_register_00000031, param_1) & 0xffffffff);
      return;
   }

   *(bool*)( *(long*)( this + 0xa0 ) + 0x67 ) = param_1;
   return;
}
/* JoltBody3D::get_bounce() const */void JoltBody3D::get_bounce(JoltBody3D *this) {
   long in_FS_OFFSET;
   code *local_58[8];
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      JoltSpace3D::read_body((BodyID*)local_58);
      if (local_18 == 0) {
         _err_print_error("get_bounce", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x532, "Condition \"body.is_invalid()\" is true. Returning: 0.0f", 0, 0);
      }

      JoltBodyAccessor3D::release();
      local_58[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_58);
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::set_bounce(float) */void JoltBody3D::set_bounce(JoltBody3D *this, float param_1) {
   long in_FS_OFFSET;
   code *local_58[8];
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      *(float*)( *(long*)( this + 0xa0 ) + 0x70 ) = param_1;
   }
 else {
      JoltSpace3D::write_body((BodyID*)local_58);
      if (local_18 == 0) {
         _err_print_error("set_bounce", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x53e, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         *(float*)( local_18 + 0x6c ) = param_1;
      }

      JoltBodyAccessor3D::release();
      local_58[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_58);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::get_friction() const */void JoltBody3D::get_friction(JoltBody3D *this) {
   long in_FS_OFFSET;
   code *local_58[8];
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      JoltSpace3D::read_body((BodyID*)local_58);
      if (local_18 == 0) {
         _err_print_error("get_friction", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x549, "Condition \"body.is_invalid()\" is true. Returning: 0.0f", 0, 0);
      }

      JoltBodyAccessor3D::release();
      local_58[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_58);
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::set_friction(float) */void JoltBody3D::set_friction(JoltBody3D *this, float param_1) {
   long in_FS_OFFSET;
   code *local_58[8];
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      *(float*)( *(long*)( this + 0xa0 ) + 0x6c ) = param_1;
   }
 else {
      JoltSpace3D::write_body((BodyID*)local_58);
      if (local_18 == 0) {
         _err_print_error("set_friction", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x555, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         *(float*)( local_18 + 0x68 ) = param_1;
      }

      JoltBodyAccessor3D::release();
      local_58[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_58);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_gravity_scale(float) */void JoltBody3D::set_gravity_scale(JoltBody3D *this, float param_1) {
   BodyID *pBVar1;
   if (param_1 == *(float*)( this + 0x1f0 )) {
      return;
   }

   *(float*)( this + 0x1f0 ) = param_1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::is_axis_locked(PhysicsServer3D::BodyAxis) const */bool JoltBody3D::is_axis_locked(JoltBody3D *this, uint param_2) {
   return ( param_2 & *(uint*)( this + 0x1fc ) ) != 0;
}
/* JoltBody3D::_get_broad_phase_layer() const */undefined1 JoltBody3D::_get_broad_phase_layer(JoltBody3D *this) {
   long *plVar1;
   int iVar2;
   long lVar3;
   char *pcVar4;
   undefined1 uVar5;
   char cVar6;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   iVar2 = *(int*)( this + 0x1d0 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 == 0) {
      cVar6 = JoltShapedObject3D::_is_big();
      uVar5 = JoltBroadPhaseLayer::BODY_STATIC_BIG;
      if (cVar6 == '\0') {
         uVar5 = JoltBroadPhaseLayer::BODY_STATIC;
      }

   }
 else if (iVar2 - 1U < 3) {
      uVar5 = 2;
   }
 else {
      local_40 = 0;
      local_30 = 0x46;
      local_38 = "Unhandled body mode: \'%d\'. This should not happen. Please report this.";
      String::parse_latin1((StrRange*)&local_40);
      vformat<PhysicsServer3D::BodyMode>(&local_38, (StrRange*)&local_40, iVar2);
      _err_print_error("_get_broad_phase_layer", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x58, "Method/function failed. Returning: JoltBroadPhaseLayer::BODY_STATIC", &local_38, 0, 0);
      pcVar4 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar3 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            uVar5 = 0;
            goto LAB_00102bf7;
         }

      }

      uVar5 = 0;
   }

   LAB_00102bf7:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* JoltBody3D::_get_object_layer() const */undefined8 JoltBody3D::_get_object_layer(JoltBody3D *this) {
   undefined4 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   lVar3 = *(long*)( this + 0x28 );
   if (lVar3 != 0) {
      uVar1 = *(undefined4*)( this + 0x38 );
      uVar2 = *(undefined4*)( this + 0x34 );
      uVar4 = _get_broad_phase_layer(this);
      uVar5 = JoltSpace3D::map_to_object_layer(lVar3, uVar4, uVar2, uVar1);
      return uVar5;
   }

   _err_print_error("_get_object_layer", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x5e, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* JoltBody3D::_get_motion_type() const */undefined8 JoltBody3D::_get_motion_type(JoltBody3D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   uVar2 = *(uint*)( this + 0x1d0 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = 1;
   if (uVar2 != 1) {
      if (1 < uVar2) {
         uVar5 = 2;
         if (uVar2 - 2 < 2) goto LAB_00102da0;
         local_40 = 0;
         local_30 = 0x46;
         local_38 = "Unhandled body mode: \'%d\'. This should not happen. Please report this.";
         String::parse_latin1((StrRange*)&local_40);
         vformat<PhysicsServer3D::BodyMode>(&local_38, (StrRange*)&local_40, uVar2);
         _err_print_error("_get_motion_type", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x70, "Method/function failed. Returning: JPH::EMotionType::Static", &local_38, 0, 0);
         pcVar4 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar3 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar1 = (long*)( local_40 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               uVar5 = 0;
               goto LAB_00102da0;
            }

         }

      }

      uVar5 = 0;
   }

   LAB_00102da0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_calculate_allowed_dofs() const */uint JoltBody3D::_calculate_allowed_dofs(JoltBody3D *this) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   char *pcVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   iVar2 = *(int*)( this + 0x1d0 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 != 0) {
      uVar3 = *(uint*)( this + 0x1fc );
      uVar6 = 0x3f - ( uVar3 & 1 );
      if (( uVar3 & 2 ) != 0) {
         uVar6 = uVar6 & 0xfffffffd;
      }

      if (( uVar3 & 4 ) != 0) {
         uVar6 = uVar6 & 0xfffffffb;
      }

      uVar7 = uVar3 & 0x10;
      if (( uVar3 & 8 ) == 0) {
         if (iVar2 == 3) {
            if (uVar7 == 0) goto LAB_00102f76;
            uVar6 = uVar6 & 0xffffffe7;
         }
 else {
            uVar8 = uVar6;
            if (uVar7 != 0) goto LAB_00102f1c;
            LAB_00102f22:if (( ( uVar3 & 0x20 ) == 0 ) && ( uVar7 = iVar2 != 3 )) goto LAB_00102f2c;
         }

      }
 else {
         uVar8 = uVar6 & 0xfffffff7;
         if (uVar7 != 0) {
            LAB_00102f1c:uVar6 = uVar8 & 0xffffffef;
            goto LAB_00102f22;
         }

         if (iVar2 != 3) {
            uVar7 = uVar6 & 0xffffffd7;
            if (( uVar3 & 0x20 ) == 0) {
               uVar7 = uVar6 & 0xfffffff7;
            }

            goto LAB_00102f2c;
         }

         LAB_00102f76:uVar6 = uVar6 & 0xffffffe7;
      }

      uVar7 = uVar6 & 0xdf;
      if (( uVar6 & 0xdf ) != 0) goto LAB_00102f2c;
      JoltObject3D::to_string();
      local_38 = "Invalid axis locks for \'%s\'. Locking all axes is not supported when using Jolt Physics. All axes will be unlocked. Considering freezing the body instead.";
      local_30 = 0x99;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_40);
      vformat<String>(&local_38, (StrRange*)&local_40, &local_48);
      _err_print_error("_calculate_allowed_dofs", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0xf5, "Condition \"allowed_dofs == JPH::EAllowedDOFs::None\" is true. Returning: JPH::EAllowedDOFs::All", &local_38, 0, 0);
      pcVar5 = local_38;
      if (local_38 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar4 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar1 = (long*)( local_40 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }

   uVar7 = 0x3f;
   LAB_00102f2c:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
}
/* JoltBody3D::_update_mass_properties() */void JoltBody3D::_update_mass_properties(JoltBody3D *this) {
   undefined8 uVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   code *local_d8[8];
   long local_98;
   Shape local_88[88];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      JoltSpace3D::write_body((BodyID*)local_d8);
      if (local_98 == 0) {
         _err_print_error("_update_mass_properties", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x12f, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         uVar1 = *(undefined8*)( local_98 + 0x48 );
         _calculate_mass_properties(local_88);
         uVar2 = _calculate_allowed_dofs(this);
         JPH::MotionProperties::SetMassProperties(uVar1, uVar2, local_88);
      }

      JoltBodyAccessor3D::release();
      local_d8[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_d8);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::_axis_lock_changed() */void JoltBody3D::_axis_lock_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   _update_mass_properties(this);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar1);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::reset_mass_properties() */void JoltBody3D::reset_mass_properties(JoltBody3D *this) {
   if (this[0x202] != (JoltBody3D)0x0) {
      this[0x202] = (JoltBody3D)0x0;
      *(undefined4*)( this + 0x164 ) = 0;
      *(undefined8*)( this + 0x15c ) = 0;
      JoltShapedObject3D::_shapes_changed();
   }

   *(undefined4*)( this + 0x158 ) = 0;
   *(undefined8*)( this + 0x150 ) = 0;
   _update_mass_properties(this);
   return;
}
/* JoltBody3D::set_mass(float) */void JoltBody3D::set_mass(JoltBody3D *this, float param_1) {
   if (param_1 != *(float*)( this + 0x1dc )) {
      *(float*)( this + 0x1dc ) = param_1;
      _update_mass_properties(this);
      return;
   }

   return;
}
/* JoltBody3D::set_inertia(Vector3 const&) */void JoltBody3D::set_inertia(JoltBody3D *this, Vector3 *param_1) {
   if (( ( *(float*)param_1 == *(float*)( this + 0x150 ) ) && ( *(float*)( param_1 + 4 ) == *(float*)( this + 0x154 ) ) ) && ( *(float*)( param_1 + 8 ) == *(float*)( this + 0x158 ) )) {
      return;
   }

   *(undefined8*)( this + 0x150 ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x158 ) = *(undefined4*)( param_1 + 8 );
   _update_mass_properties(this);
   return;
}
/* JoltBody3D::_mode_changed() */void JoltBody3D::_mode_changed(JoltBody3D *this) {
   long lVar1;
   BodyID *pBVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined8 local_28;
   undefined8 uStack_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltObject3D::_update_object_layer();
   if (*(int*)( this + 0x1d0 ) == 1) {
      JoltShapedObject3D::get_transform_unscaled();
      *(undefined8*)( this + 0x120 ) = local_48;
      *(undefined8*)( this + 0x128 ) = uStack_40;
      *(undefined8*)( this + 0x130 ) = local_38;
      *(undefined8*)( this + 0x138 ) = uStack_30;
      *(undefined8*)( this + 0x140 ) = local_28;
      *(undefined8*)( this + 0x148 ) = uStack_20;
   }

   _update_mass_properties(this);
   _update_sleep_allowed(this);
   if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
      this[0x201] = (JoltBody3D)0x0;
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      pBVar2 = (BodyID*)JoltSpace3D::get_body_iface();
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         JPH::BodyInterface::ActivateBody(pBVar2);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_mode(PhysicsServer3D::BodyMode) */void JoltBody3D::set_mode(JoltBody3D *this, int param_2) {
   undefined1(*pauVar1)[16];
   undefined4 uVar2;
   BodyID *pBVar3;
   long in_FS_OFFSET;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1d0 ) != param_2) {
      *(int*)( this + 0x1d0 ) = param_2;
      if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _mode_changed(this);
            return;
         }

         goto LAB_0010358a;
      }

      uVar2 = _get_motion_type(this);
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("set_mode", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x4f0, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         if ((char)uVar2 == '\0') {
            if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
               this[0x201] = (JoltBody3D)0x1;
               JPH::Body::SetMotionType(local_38, 0);
            }
 else {
               pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
               JPH::BodyInterface::DeactivateBody(pBVar3);
               JPH::Body::SetMotionType(local_38, 0);
            }

         }
 else {
            JPH::Body::SetMotionType(local_38, uVar2);
            if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
               this[0x201] = (JoltBody3D)0x0;
            }
 else {
               pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
               JPH::BodyInterface::ActivateBody(pBVar3);
            }

            if ((char)uVar2 == '\x01') {
               pauVar1 = *(undefined1(**) [16])( local_38 + 0x48 );
               *pauVar1 = (undefined1[16])0x0;
               pauVar1[1] = (undefined1[16])0x0;
            }

         }

         *(undefined8*)( this + 0x180 ) = 0;
         *(undefined4*)( this + 0x188 ) = 0;
         *(undefined8*)( this + 0x18c ) = 0;
         *(undefined4*)( this + 0x194 ) = 0;
         _mode_changed(this);
      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010358a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JoltBody3D::_shapes_committed() */void JoltBody3D::_shapes_committed(JoltBody3D *this) {
   undefined8 *puVar1;
   BodyID *pBVar2;
   undefined8 *puVar3;
   _update_mass_properties(this);
   puVar3 = *(undefined8**)( this + 0x100 );
   puVar1 = puVar3 + *(uint*)( this + 0xf8 );
   for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      while (*(code**)( *(long*)*puVar3 + 0x18 ) != JoltJoint3D::rebuild) {
         ( **(code**)( *(long*)*puVar3 + 0x18 ) )();
         puVar3 = puVar3 + 1;
         if (puVar1 == puVar3) goto LAB_001035f8;
      }
;
   }

   LAB_001035f8:if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar2 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar2);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::set_axis_lock(PhysicsServer3D::BodyAxis, bool) */void JoltBody3D::set_axis_lock(JoltBody3D *this, uint param_2, char param_3) {
   uint uVar1;
   BodyID *pBVar2;
   uint uVar3;
   uVar1 = *(uint*)( this + 0x1fc );
   uVar3 = ~param_2 & uVar1;
   if (param_3 != '\0') {
      uVar3 = uVar1 | param_2;
   }

   *(uint*)( this + 0x1fc ) = uVar3;
   if (uVar1 == uVar3) {
      return;
   }

   _update_mass_properties(this);
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      pBVar2 = (BodyID*)JoltSpace3D::get_body_iface();
      JPH::BodyInterface::ActivateBody(pBVar2);
      return;
   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::_add_to_space() */void JoltBody3D::_add_to_space(JoltBody3D *this) {
   long *plVar1;
   long *plVar2;
   undefined8 uVar3;
   undefined1 uVar4;
   JoltBody3D JVar5;
   char cVar6;
   undefined2 uVar7;
   int iVar8;
   long *plVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   undefined4 uVar12;
   uint local_84;
   uint local_80;
   undefined4 uStack_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   JoltShapedObject3D::build_shapes(SUB81(&local_80, 0));
   plVar2 = *(long**)( this + 0x90 );
   plVar9 = (long*)CONCAT44(uStack_7c, local_80);
   if (plVar2 == plVar9) {
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar9 = plVar2 + 1;
         *(int*)plVar9 = (int)*plVar9 + -1;
         UNLOCK();
         if ((int)*plVar9 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

      }

   }
 else {
      if (plVar2 != (long*)0x0) {
         LOCK();
         plVar9 = plVar2 + 1;
         *(int*)plVar9 = (int)*plVar9 + -1;
         UNLOCK();
         if ((int)*plVar9 == 0) {
            ( **(code**)( *plVar2 + 8 ) )();
         }

         plVar9 = (long*)CONCAT44(uStack_7c, local_80);
      }

      *(long**)( this + 0x90 ) = plVar9;
   }

   local_84 = 0;
   local_80 = 0;
   JoltGroupFilter::encode_object((JoltObject3D*)this, &local_84, &local_80);
   lVar10 = *(long*)( this + 0xa0 );
   *(JoltBody3D**)( lVar10 + 0x40 ) = this;
   uVar7 = _get_object_layer(this);
   uVar3 = CONCAT44(local_80, local_84);
   *(undefined2*)( lVar10 + 0x48 ) = uVar7;
   lVar10 = *(long*)( this + 0xa0 );
   plVar2 = *(long**)( lVar10 + 0x50 );
   lVar11 = lVar10;
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int*)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

      *(undefined8*)( lVar10 + 0x50 ) = 0;
      lVar11 = *(long*)( this + 0xa0 );
   }

   *(undefined8*)( lVar10 + 0x58 ) = uVar3;
   uVar4 = _get_motion_type(this);
   lVar10 = *(long*)( this + 0xa0 );
   *(undefined1*)( lVar11 + 0x60 ) = uVar4;
   uVar4 = _calculate_allowed_dofs(this);
   lVar11 = *(long*)( this + 0xa0 );
   iVar8 = *(int*)( this + 0xd8 );
   *(undefined1*)( lVar10 + 0x61 ) = uVar4;
   uVar4 = 0;
   *(undefined1*)( lVar11 + 0x62 ) = 1;
   lVar10 = lVar11;
   if (iVar8 != 0) {
      uVar4 = JoltProjectSettings::should_generate_all_kinematic_contacts();
      lVar10 = *(long*)( this + 0xa0 );
      iVar8 = *(int*)( this + 0xd8 );
   }

   *(undefined1*)( lVar11 + 100 ) = uVar4;
   *(bool*)( lVar10 + 0x65 ) = iVar8 == 0;
   JVar5 = this[0x200];
   if (JVar5 != (JoltBody3D)0x0) {
      JVar5 = ( JoltBody3D )(*(int*)( this + 0x1d0 ) != 1 || iVar8 == 0);
   }

   *(JoltBody3D*)( lVar10 + 0x69 ) = JVar5;
   *(undefined8*)( lVar10 + 0x74 ) = 0;
   uVar12 = JoltProjectSettings::get_max_linear_velocity();
   *(undefined4*)( lVar10 + 0x7c ) = uVar12;
   lVar10 = *(long*)( this + 0xa0 );
   uVar12 = JoltProjectSettings::get_max_angular_velocity();
   *(undefined4*)( lVar10 + 0x80 ) = uVar12;
   cVar6 = JoltProjectSettings::use_enhanced_internal_edge_removal_for_bodies();
   lVar10 = *(long*)( this + 0xa0 );
   if (cVar6 != '\0') {
      *(undefined1*)( lVar10 + 0x68 ) = 1;
   }

   *(undefined1*)( lVar10 + 0x90 ) = 2;
   _calculate_mass_properties((Shape*)&local_78);
   *(undefined8*)( lVar10 + 0xa0 ) = local_78;
   *(undefined8*)( lVar10 + 0xa8 ) = uStack_70;
   plVar2 = *(long**)( this + 0x90 );
   *(undefined8*)( lVar10 + 0xb0 ) = local_68;
   *(undefined8*)( lVar10 + 0xb8 ) = uStack_60;
   *(undefined8*)( lVar10 + 0xc0 ) = local_58;
   *(undefined8*)( lVar10 + 200 ) = uStack_50;
   *(undefined8*)( lVar10 + 0xd0 ) = local_48;
   *(undefined8*)( lVar10 + 0xd8 ) = uStack_40;
   *(undefined8*)( lVar10 + 0xe0 ) = local_38;
   *(undefined8*)( lVar10 + 0xe8 ) = uStack_30;
   lVar10 = *(long*)( this + 0xa0 );
   plVar9 = *(long**)( lVar10 + 0xf8 );
   if (plVar2 == plVar9) goto LAB_001038d7;
   if (plVar9 == (long*)0x0) {
      LAB_001038c4:*(long**)( lVar10 + 0xf8 ) = plVar2;
   }
 else {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int*)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_001038c4;
      ( **(code**)( *plVar9 + 8 ) )();
      *(long**)( lVar10 + 0xf8 ) = plVar2;
   }

   if (plVar2 != (long*)0x0) {
      LOCK();
      *(int*)( plVar2 + 1 ) = (int)plVar2[1] + 1;
      UNLOCK();
   }

   LAB_001038d7:plVar2 = *(long**)( lVar10 + 0xf0 );
   if (plVar2 != (long*)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      *(int*)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
         ( **(code**)( *plVar2 + 0x18 ) )();
      }

      *(undefined8*)( lVar10 + 0xf0 ) = 0;
   }

   iVar8 = JoltSpace3D::add_rigid_body(*(JoltObject3D**)( this + 0x28 ), (BodyCreationSettings*)this, SUB81(*(undefined8*)( this + 0xa0 ), 0));
   if (iVar8 != -1) {
      lVar10 = *(long*)( this + 0xa0 );
      *(int*)( this + 0x30 ) = iVar8;
      if (lVar10 != 0) {
         plVar2 = *(long**)( lVar10 + 0xf8 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 8 ) )();
            }

         }

         plVar2 = *(long**)( lVar10 + 0xf0 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 0x18 ) )();
            }

         }

         plVar2 = *(long**)( lVar10 + 0x50 );
         if (plVar2 != (long*)0x0) {
            LOCK();
            plVar9 = plVar2 + 1;
            *(int*)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)*plVar9 == 0) {
               ( **(code**)( *plVar2 + 0x18 ) )();
            }

         }

         ( *JPH::Free )(lVar10);
      }

      *(undefined8*)( this + 0xa0 ) = 0;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_transform(Transform3D) */void JoltBody3D::set_transform(long param_1) {
   long *plVar1;
   undefined8 *puVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   BodyID *pBVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined4 uStack0000000000000008;
   undefined4 uStack000000000000000c;
   undefined4 uStack0000000000000010;
   undefined4 uStack0000000000000014;
   undefined4 uStack0000000000000018;
   undefined4 uStack000000000000001c;
   undefined4 uStack0000000000000020;
   undefined4 uStack0000000000000024;
   float fStack0000000000000028;
   undefined4 uStack000000000000002c;
   undefined4 uStack0000000000000030;
   undefined4 uStack0000000000000034;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_64;
   undefined4 local_5c;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( fStack0000000000000028 * (float)uStack0000000000000018 - (float)uStack0000000000000024 * (float)uStack000000000000001c ) * (float)uStack0000000000000008 - ( fStack0000000000000028 * (float)uStack000000000000000c - (float)uStack0000000000000024 * (float)uStack0000000000000010 ) * (float)uStack0000000000000014 ) + ( (float)uStack000000000000001c * (float)uStack000000000000000c - (float)uStack0000000000000018 * (float)uStack0000000000000010 ) * (float)uStack0000000000000020 == 0.0) {
      JoltObject3D::to_string();
      local_78 = "An invalid transform was passed to physics body \'%s\'.";
      local_90 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      local_78 = "%s The basis of the transform was singular, which is not supported by Jolt Physics. This is likely caused by one or more axes having a scale of zero. The basis (and thus its scale) will be treated as identity.";
      local_80 = 0;
      local_70 = 0xd1;
      String::parse_latin1((StrRange*)&local_80);
      vformat<String>(&local_78, (StrRange*)&local_80, &local_88);
      _err_print_error("set_transform", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x221, &local_78, 0, 1);
      pcVar4 = local_78;
      if (local_78 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar3 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar1 = (long*)( local_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_88;
      if (local_88 != 0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      _uStack0000000000000008 = ZEXT416(_LC9);
      fStack0000000000000028 = 1.0;
      _uStack0000000000000018 = _uStack0000000000000008;
   }

   local_64 = 0;
   local_5c = 0;
   JoltMath::decompose((Basis*)&stack0x00000008, (Vector3*)&local_64);
   cVar5 = Vector3::is_equal_approx((Vector3*)( param_1 + 0x80 ));
   if (cVar5 == '\0') {
      *(undefined8*)( param_1 + 0x80 ) = local_64;
      *(undefined4*)( param_1 + 0x88 ) = local_5c;
      JoltShapedObject3D::_shapes_changed();
   }

   if (( *(long*)( param_1 + 0x28 ) == 0 ) || ( *(int*)( param_1 + 0x30 ) == -1 )) {
      puVar2 = *(undefined8**)( param_1 + 0xa0 );
      *puVar2 = CONCAT44(uStack0000000000000030, uStack000000000000002c);
      puVar2[1] = CONCAT44(uStack0000000000000034, uStack0000000000000034);
      Basis::get_quaternion();
      Quaternion::normalized();
      puVar2[2] = local_58;
      puVar2[3] = uStack_50;
      LAB_00103c0a:if (( *(long*)( param_1 + 0x28 ) == 0 ) || ( *(int*)( param_1 + 0x30 ) == -1 )) {
         *(undefined1*)( param_1 + 0x201 ) = 0;
         goto LAB_00103c37;
      }

   }
 else {
      if (*(int*)( param_1 + 0x1d0 ) != 1) {
         uVar7 = JoltSpace3D::get_body_iface();
         Basis::get_quaternion();
         Quaternion::normalized();
         JPH::BodyInterface::SetPositionAndRotation(CONCAT44(uStack0000000000000030, uStack000000000000002c), CONCAT44(uStack0000000000000034, uStack0000000000000034), local_58, uStack_50, uVar7, param_1 + 0x30, 1);
         goto LAB_00103c0a;
      }

      *(undefined8*)( param_1 + 0x120 ) = _uStack0000000000000008;
      *(undefined8*)( param_1 + 0x128 ) = _uStack0000000000000010;
      *(undefined8*)( param_1 + 0x130 ) = _uStack0000000000000018;
      *(undefined8*)( param_1 + 0x138 ) = _uStack0000000000000020;
      *(ulong*)( param_1 + 0x140 ) = CONCAT44(uStack000000000000002c, fStack0000000000000028);
      *(ulong*)( param_1 + 0x148 ) = CONCAT44(uStack0000000000000034, uStack0000000000000030);
   }

   pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
   JPH::BodyInterface::ActivateBody(pBVar6);
   LAB_00103c37:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::apply_force(Vector3 const&, Vector3 const&) */void JoltBody3D::apply_force(JoltBody3D *this, Vector3 *param_1, Vector3 *param_2) {
   long *plVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   long lVar5;
   long lVar6;
   float fVar7;
   char *pcVar8;
   BodyID *pBVar9;
   long in_FS_OFFSET;
   undefined8 uVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float local_c8;
   float fStack_c4;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   code *local_88[8];
   Body *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_98 = "Failed to apply force to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_a0 = 0;
      local_90 = 0xaf;
      String::parse_latin1((StrRange*)&local_a0);
      vformat<String>(&local_98, (StrRange*)&local_a0, &local_a8);
      _err_print_error("apply_force", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3c6, "Parameter \"space\" is null.", &local_98, 0);
      pcVar8 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar8 + -0x10, false);
         }

      }

      lVar5 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      lVar5 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

   }
 else if (( ( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( this[0x203] == (JoltBody3D)0x0 ) ) && ( ( *(float*)param_1 != 0.0 || ( ( *(float*)( param_1 + 4 ) != 0.0 || ( *(float*)( param_1 + 8 ) != 0.0 ) ) ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_88);
      if (local_48 == (Body*)0x0) {
         _err_print_error("apply_force", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3d1, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         fVar13 = *(float*)( param_2 + 4 );
         fVar11 = *(float*)param_2;
         fVar12 = *(float*)( param_2 + 4 );
         fVar7 = *(float*)( param_2 + 8 );
         uVar10 = JPH::Body::GetPosition(local_48);
         fVar2 = *(float*)( param_1 + 8 );
         fVar3 = *(float*)param_1;
         fVar4 = *(float*)( param_1 + 4 );
         local_c8 = (float)uVar10;
         fStack_c4 = (float)( (ulong)uVar10 >> 0x20 );
         lVar5 = *(long*)( local_48 + 0x48 );
         lVar6 = *(long*)( this + 0x28 );
         *(float*)( lVar5 + 0x40 ) = *(float*)( lVar5 + 0x40 ) + fVar3;
         *(float*)( lVar5 + 0x44 ) = *(float*)( lVar5 + 0x44 ) + fVar4;
         *(float*)( lVar5 + 0x48 ) = *(float*)( lVar5 + 0x48 ) + fVar2;
         fVar11 = ( local_c8 + fVar11 ) - *(float*)local_48;
         fVar12 = ( fStack_c4 + fVar12 ) - *(float*)( local_48 + 4 );
         fVar13 = ( fVar13 + fVar7 ) - *(float*)( local_48 + 8 );
         *(float*)( lVar5 + 0x4c ) = ( fVar2 * fVar12 - fVar13 * fVar4 ) + *(float*)( lVar5 + 0x4c );
         *(ulong*)( lVar5 + 0x50 ) = CONCAT44(( fVar4 * fVar11 - fVar12 * fVar3 ) + *(float*)( lVar5 + 0x54 ), ( fVar3 * fVar13 - fVar11 * fVar2 ) + *(float*)( lVar5 + 0x50 ));
         if (( lVar6 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar9 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar9);
         }

      }

      JoltBodyAccessor3D::release();
      local_88[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::apply_central_force(Vector3 const&) */void JoltBody3D::apply_central_force(JoltBody3D *this, Vector3 *param_1) {
   long *plVar1;
   float fVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   BodyID *pBVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_88 = "Failed to apply central force to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_80 = 0xb7;
      local_90 = 0;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      _err_print_error("apply_central_force", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3d9, "Parameter \"space\" is null.", &local_88, 0, 0);
      pcVar5 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar3 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else if (( ( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( this[0x203] == (JoltBody3D)0x0 ) ) && ( ( *(float*)param_1 != 0.0 || ( ( *(float*)( param_1 + 4 ) != 0.0 || ( *(float*)( param_1 + 8 ) != 0.0 ) ) ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("apply_central_force", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3e4, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         fVar2 = *(float*)( param_1 + 8 );
         lVar3 = *(long*)( local_38 + 0x48 );
         lVar4 = *(long*)( this + 0x28 );
         *(ulong*)( lVar3 + 0x40 ) = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) + *(float*)( lVar3 + 0x44 ), *(float*)param_1 + *(float*)( lVar3 + 0x40 ));
         *(float*)( lVar3 + 0x48 ) = fVar2 + *(float*)( lVar3 + 0x48 );
         if (( lVar4 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar6);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::apply_impulse(Vector3 const&, Vector3 const&) */void JoltBody3D::apply_impulse(JoltBody3D *this, Vector3 *param_1, Vector3 *param_2) {
   long *plVar1;
   float fVar2;
   undefined8 uVar3;
   long lVar4;
   char *pcVar5;
   BodyID *pBVar6;
   long in_FS_OFFSET;
   undefined1 auVar7[16];
   undefined8 local_c8;
   undefined8 uStack_c0;
   float local_b8;
   float fStack_b4;
   undefined8 uStack_b0;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   code *local_88[8];
   Body *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_98 = "Failed to apply impulse to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_a0 = 0;
      local_90 = 0xb1;
      String::parse_latin1((StrRange*)&local_a0);
      vformat<String>(&local_98, (StrRange*)&local_a0, &local_a8);
      _err_print_error("apply_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3ec, "Parameter \"space\" is null.", &local_98, 0);
      pcVar5 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar4 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }
 else if (( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( ( ( *(float*)param_1 != 0.0 || ( *(float*)( param_1 + 4 ) != 0.0 ) ) || ( *(float*)( param_1 + 8 ) != 0.0 ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_88);
      if (local_48 == (Body*)0x0) {
         _err_print_error("apply_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3f7, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         fVar2 = *(float*)( param_2 + 8 );
         uVar3 = *(undefined8*)param_2;
         auVar7 = JPH::Body::GetPosition(local_48);
         local_b8 = (float)uVar3;
         fStack_b4 = (float)( (ulong)uVar3 >> 0x20 );
         local_c8._0_4_ = auVar7._0_4_;
         local_c8._4_4_ = auVar7._4_4_;
         uStack_c0._0_4_ = auVar7._8_4_;
         uStack_c0._4_4_ = auVar7._12_4_;
         local_c8 = CONCAT44(fStack_b4 + local_c8._4_4_, local_b8 + (float)local_c8);
         uStack_c0 = CONCAT44(fVar2 + uStack_c0._4_4_, fVar2 + (float)uStack_c0);
         uStack_b0 = CONCAT44(*(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 8 ));
         JPH::Body::AddImpulse(*(undefined8*)param_1, uStack_b0, local_c8, uStack_c0, local_48);
         if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar6);
         }

      }

      JoltBodyAccessor3D::release();
      local_88[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_88);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltBody3D::apply_central_impulse(Vector3 const&) */void JoltBody3D::apply_central_impulse(JoltBody3D *this, Vector3 *param_1) {
   long *plVar1;
   byte bVar2;
   float *pfVar3;
   long lVar4;
   undefined1 auVar5[16];
   char *pcVar6;
   BodyID *pBVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined1 auVar13[16];
   float fVar14;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_88 = "Failed to apply central impulse to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_80 = 0xb9;
      local_90 = 0;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      _err_print_error("apply_central_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x3ff, "Parameter \"space\" is null.", &local_88, 0, 0);
      pcVar6 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }

      }

      lVar4 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

   }
 else if (( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( ( ( *(float*)param_1 != 0.0 || ( *(float*)( param_1 + 4 ) != 0.0 ) ) || ( *(float*)( param_1 + 8 ) != 0.0 ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("apply_central_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x40a, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         pfVar3 = *(float**)( local_38 + 0x48 );
         bVar2 = *(byte*)( (long)pfVar3 + 0x7a );
         fVar14 = pfVar3[0x16];
         auVar13._1_3_ = 0;
         auVar13[0] = bVar2;
         auVar13[4] = bVar2;
         auVar13._5_3_ = 0;
         auVar13[8] = bVar2;
         auVar13._9_3_ = 0;
         auVar13[0xc] = bVar2;
         auVar13._13_3_ = 0;
         auVar5._4_4_ = _UNK_0010ba54;
         auVar5._0_4_ = __LC6;
         auVar5._8_4_ = _UNK_0010ba58;
         auVar5._12_4_ = _UNK_0010ba5c;
         auVar13 = auVar13 & auVar5;
         fVar8 = (float)( ( uint )(*(float*)param_1 * fVar14 + *pfVar3) & -(uint)(auVar13._0_4_ == __LC6) );
         fVar9 = (float)( ( uint )(*(float*)( param_1 + 4 ) * fVar14 + pfVar3[1]) & -(uint)(auVar13._4_4_ == _UNK_0010ba54) );
         fVar10 = (float)( ( uint )(*(float*)( param_1 + 8 ) * fVar14 + pfVar3[2]) & -(uint)(auVar13._8_4_ == _UNK_0010ba58) );
         fVar11 = (float)( ( uint )(*(float*)( param_1 + 8 ) * fVar14 + pfVar3[3]) & -(uint)(auVar13._12_4_ == _UNK_0010ba5c) );
         *pfVar3 = fVar8;
         pfVar3[1] = fVar9;
         pfVar3[2] = fVar10;
         pfVar3[3] = fVar11;
         fVar12 = fVar10 * fVar10 + fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
         fVar14 = pfVar3[0x19];
         if (fVar14 * fVar14 < fVar12) {
            lVar4 = *(long*)( this + 0x28 );
            fVar14 = fVar14 / SQRT(fVar12);
            *pfVar3 = fVar14 * fVar8;
            pfVar3[1] = fVar14 * fVar9;
            pfVar3[2] = fVar14 * fVar10;
            pfVar3[3] = fVar14 * fVar11;
         }
 else {
            lVar4 = *(long*)( this + 0x28 );
         }

         if (( lVar4 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar7 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar7);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::apply_torque(Vector3 const&) */void JoltBody3D::apply_torque(JoltBody3D *this, Vector3 *param_1) {
   long *plVar1;
   float fVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   BodyID *pBVar6;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_88 = "Failed to apply torque to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_80 = 0xb0;
      local_90 = 0;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      _err_print_error("apply_torque", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x412, "Parameter \"space\" is null.", &local_88, 0, 0);
      pcVar5 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

      lVar3 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else if (( ( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( this[0x203] == (JoltBody3D)0x0 ) ) && ( ( *(float*)param_1 != 0.0 || ( ( *(float*)( param_1 + 4 ) != 0.0 || ( *(float*)( param_1 + 8 ) != 0.0 ) ) ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("apply_torque", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x41d, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         fVar2 = *(float*)( param_1 + 8 );
         lVar3 = *(long*)( local_38 + 0x48 );
         lVar4 = *(long*)( this + 0x28 );
         *(ulong*)( lVar3 + 0x4c ) = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) + *(float*)( lVar3 + 0x50 ), *(float*)param_1 + *(float*)( lVar3 + 0x4c ));
         *(float*)( lVar3 + 0x54 ) = fVar2 + *(float*)( lVar3 + 0x54 );
         if (( lVar4 == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar6);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::apply_torque_impulse(Vector3 const&) */void JoltBody3D::apply_torque_impulse(JoltBody3D *this, Vector3 *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   BodyID *pBVar4;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_88 = "Failed to apply torque impulse to \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_90 = 0;
      local_80 = 0xb8;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      _err_print_error("apply_torque_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x425, "Parameter \"space\" is null.", &local_88, 0, 0);
      pcVar3 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar2 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      lVar2 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else if (( *(int*)( this + 0x1d0 ) - 2U < 2 ) && ( ( ( *(float*)param_1 != 0.0 || ( *(float*)( param_1 + 4 ) != 0.0 ) ) || ( *(float*)( param_1 + 8 ) != 0.0 ) ) )) {
      JoltSpace3D::write_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("apply_torque_impulse", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x430, "Condition \"body.is_invalid()\" is true.", 0, 0);
      }
 else {
         JPH::Body::AddAngularImpulse(*(undefined8*)param_1, CONCAT44(*(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 8 )));
         if (( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 )) {
            this[0x201] = (JoltBody3D)0x0;
         }
 else {
            pBVar4 = (BodyID*)JoltSpace3D::get_body_iface();
            JPH::BodyInterface::ActivateBody(pBVar4);
         }

      }

      JoltBodyAccessor3D::release();
      local_78[0] = JPH::Body::SetAllowSleeping;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::get_principal_inertia_axes() const */void JoltBody3D::get_principal_inertia_axes(void) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   char *pcVar7;
   float fVar8;
   float fVar9;
   long in_RSI;
   Quaternion *in_RDI;
   long in_FS_OFFSET;
   undefined1 auVar10[16];
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_98 = "Failed to retrieve principal inertia axes of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_90 = 0xc3;
      local_a0 = 0;
      String::parse_latin1((StrRange*)&local_a0);
      vformat<String>(&local_98, (StrRange*)&local_a0, &local_a8);
      _err_print_error("get_principal_inertia_axes", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x2f0, "Parameter \"space\" is null.", &local_98, 0, 0);
      pcVar7 = local_98;
      if (local_98 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = (char*)0x0;
            Memory::free_static(pcVar7 + -0x10, false);
         }

      }

      lVar6 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      lVar6 = local_a8;
      if (local_a8 != 0) {
         LOCK();
         plVar1 = (long*)( local_a8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }
 else if (1 < *(uint*)( in_RSI + 0x1d0 )) {
      JoltSpace3D::read_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("get_principal_inertia_axes", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x2f7, "Condition \"body.is_invalid()\" is true. Returning: Basis()", 0, 0);
         auVar10 = ZEXT416(_LC9);
         *(undefined4*)( in_RDI + 0x20 ) = 0x3f800000;
         *(undefined1(*) [16])in_RDI = auVar10;
         *(undefined1(*) [16])( in_RDI + 0x10 ) = auVar10;
      }
 else {
         uVar2 = *(undefined8*)( *(long*)( local_38 + 0x48 ) + 0x30 );
         uVar3 = *(undefined8*)( *(long*)( local_38 + 0x48 ) + 0x38 );
         uVar4 = *(undefined8*)( local_38 + 0x10 );
         uVar5 = *(undefined8*)( local_38 + 0x18 );
         *(undefined4*)( in_RDI + 0x20 ) = 0x3f800000;
         fVar9 = (float)uVar2;
         fVar8 = (float)uVar5;
         fVar11 = (float)uVar4;
         fVar12 = (float)( (ulong)uVar4 >> 0x20 );
         fVar15 = (float)( (ulong)uVar5 >> 0x20 );
         fVar13 = (float)( (ulong)uVar2 >> 0x20 );
         fVar14 = (float)uVar3;
         fVar16 = (float)( (ulong)uVar3 >> 0x20 );
         fStack_84 = fVar12 * fVar16 + ( fVar15 * fVar13 - fVar14 * fVar11 ) + fVar8 * fVar9;
         fStack_80 = ( ( fVar13 * fVar11 + fVar15 * fVar14 ) - fVar12 * fVar9 ) + fVar8 * fVar16;
         local_88 = ( fVar12 * fVar14 + fVar16 * fVar11 + fVar15 * fVar9 ) - fVar8 * fVar13;
         fStack_7c = ( ( fVar15 * fVar16 - fVar9 * fVar11 ) - fVar12 * fVar13 ) - fVar8 * fVar14;
         auVar10 = ZEXT416(_LC9);
         *(undefined1(*) [16])in_RDI = auVar10;
         *(undefined1(*) [16])( in_RDI + 0x10 ) = auVar10;
         Basis::set_quaternion(in_RDI);
      }

      JoltBodyAccessor3D::release();
      local_78[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
      goto LAB_00105138;
   }

   auVar10 = ZEXT416(_LC9);
   *(undefined4*)( in_RDI + 0x20 ) = 0x3f800000;
   *(undefined1(*) [16])in_RDI = auVar10;
   *(undefined1(*) [16])( in_RDI + 0x10 ) = auVar10;
   LAB_00105138:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::get_inverse_inertia() const */undefined1  [16] __thiscallJoltBody3D::get_inverse_inertia(JoltBody3D *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   long in_FS_OFFSET;
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
   undefined1 auVar18[16];
   long local_98;
   long local_90;
   char *local_88;
   undefined8 local_80;
   undefined8 local_78;
   float local_70;
   code *local_68[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_88 = "Failed to retrieve inverse inertia of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_90 = 0;
      local_80 = 0xbc;
      String::parse_latin1((StrRange*)&local_90);
      vformat<String>(&local_88, (StrRange*)&local_90, &local_98);
      _err_print_error("get_inverse_inertia", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x2fd, "Parameter \"space\" is null.", &local_88, 0, 0);
      pcVar3 = local_88;
      if (local_88 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_88 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_88 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar2 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      lVar2 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else if (1 < *(uint*)( this + 0x1d0 )) {
      JoltSpace3D::read_body((BodyID*)local_68);
      if (local_28 == 0) {
         _err_print_error("get_inverse_inertia", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x304, "Condition \"body.is_invalid()\" is true. Returning: Vector3()", 0, 0);
         local_70 = 0.0;
         local_78 = 0;
      }
 else {
         lVar2 = *(long*)( local_28 + 0x48 );
         fVar4 = (float)*(undefined8*)( lVar2 + 0x30 );
         fVar6 = (float)*(undefined8*)( lVar2 + 0x38 );
         fVar5 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x30 ) >> 0x20 );
         fVar11 = fVar4 + fVar4;
         fVar15 = fVar5 + fVar5;
         fVar7 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x38 ) >> 0x20 );
         fVar16 = fVar6 * ( fVar6 + fVar6 );
         fVar9 = fVar7 * ( fVar6 + fVar6 );
         fVar10 = fVar6 * fVar11 + fVar15 * fVar7;
         fVar14 = fVar6 * fVar11 - fVar15 * fVar7;
         fVar17 = fVar6 * fVar15 - fVar11 * fVar7;
         fVar12 = fVar11 * fVar7 + fVar6 * fVar15;
         fVar13 = ( _LC9 - fVar4 * fVar11 ) - fVar5 * fVar15;
         fVar8 = fVar5 * fVar11 + fVar9;
         fVar7 = ( _LC9 - fVar5 * fVar15 ) - fVar16;
         fVar9 = fVar5 * fVar11 - fVar9;
         fVar11 = ( _LC9 - fVar16 ) - fVar4 * fVar11;
         fVar4 = *(float*)( lVar2 + 0x20 );
         fVar5 = *(float*)( lVar2 + 0x24 );
         fVar6 = *(float*)( lVar2 + 0x28 );
         local_78 = CONCAT44(fVar5 * fVar11 * fVar11 + fVar4 * fVar8 * fVar8 + fVar6 * fVar17 * fVar17, fVar6 * fVar10 * fVar10 + fVar5 * fVar9 * fVar9 + fVar4 * fVar7 * fVar7);
         local_70 = fVar5 * fVar12 * fVar12 + fVar4 * fVar14 * fVar14 + fVar6 * fVar13 * fVar13;
      }

      JoltBodyAccessor3D::release();
      local_68[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_68);
      goto LAB_00105518;
   }

   local_78 = 0;
   local_70 = 0.0;
   LAB_00105518:auVar18._8_4_ = local_70;
   auVar18._0_8_ = local_78;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar18._12_4_ = 0;
      return auVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltBody3D::get_inverse_inertia_tensor() const */void JoltBody3D::get_inverse_inertia_tensor(void) {
   long *plVar1;
   byte bVar2;
   long lVar3;
   char *pcVar4;
   float fVar5;
   long lVar6;
   float fVar7;
   long in_RSI;
   undefined1(*in_RDI)[16];
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar11;
   float fVar12;
   undefined1 auVar10[16];
   float fVar13;
   float fVar14;
   float fVar15;
   uint uVar16;
   uint uVar18;
   undefined1 auVar17[16];
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   long local_148;
   long local_140;
   char *local_138;
   undefined8 local_130;
   undefined8 local_128;
   uint local_120;
   undefined8 local_118;
   uint local_110;
   undefined8 local_108;
   uint local_100;
   float local_f8[16];
   undefined8 local_b8;
   ulong uStack_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   ulong uStack_90;
   code *local_78[8];
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x28 ) == 0) {
      JoltObject3D::to_string();
      local_138 = "Failed to retrieve inverse inertia tensor of \'%s\'. Doing so without a physics space is not supported when using Jolt Physics. If this relates to a node, try adding the node to a scene tree first.";
      local_130 = 0xc3;
      local_140 = 0;
      String::parse_latin1((StrRange*)&local_140);
      vformat<String>(&local_138, (StrRange*)&local_140, &local_148);
      _err_print_error("get_inverse_inertia_tensor", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x30c, "Parameter \"space\" is null.", &local_138, 0, 0);
      pcVar4 = local_138;
      if (local_138 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_138 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_138 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar3 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar1 = (long*)( local_140 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar1 = (long*)( local_148 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else if (1 < *(uint*)( in_RSI + 0x1d0 )) {
      JoltSpace3D::read_body((BodyID*)local_78);
      if (local_38 == 0) {
         _err_print_error("get_inverse_inertia_tensor", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x313, "Condition \"body.is_invalid()\" is true. Returning: Basis()", 0, 0);
         auVar10 = ZEXT416((uint)_LC9);
         *(undefined4*)in_RDI[2] = 0x3f800000;
         *in_RDI = auVar10;
         in_RDI[1] = auVar10;
      }
 else {
         lVar3 = *(long*)( local_38 + 0x48 );
         fVar14 = (float)*(undefined8*)( local_38 + 0x10 );
         fVar12 = (float)( ( ulong ) * (undefined8*)( local_38 + 0x10 ) >> 0x20 );
         fVar7 = (float)*(undefined8*)( local_38 + 0x18 );
         fVar19 = fVar14 + fVar14;
         fVar21 = fVar12 + fVar12;
         fVar9 = (float)( ( ulong ) * (undefined8*)( local_38 + 0x18 ) >> 0x20 );
         fVar22 = fVar7 * ( fVar7 + fVar7 );
         fVar15 = fVar9 * ( fVar7 + fVar7 );
         fVar11 = (float)*(undefined8*)( lVar3 + 0x38 );
         fVar20 = (float)*(undefined8*)( lVar3 + 0x30 );
         fVar23 = fVar20 + fVar20;
         fVar5 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x30 ) >> 0x20 );
         fVar24 = fVar5 + fVar5;
         fVar13 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x38 ) >> 0x20 );
         fVar25 = fVar11 * ( fVar11 + fVar11 );
         fVar8 = fVar13 * ( fVar11 + fVar11 );
         lVar6 = 0;
         local_b8 = CONCAT44(fVar5 * fVar23 + fVar8, ( _LC9 - fVar5 * fVar24 ) - fVar25);
         uStack_b0 = ( ulong )(uint)(fVar11 * fVar23 - fVar24 * fVar13);
         local_a8._4_4_ = ( _LC9 - fVar25 ) - fVar20 * fVar23;
         local_a8._0_4_ = fVar5 * fVar23 - fVar8;
         local_a8._8_4_ = fVar23 * fVar13 + fVar11 * fVar24;
         local_a8._12_4_ = 0;
         local_98 = CONCAT44(fVar11 * fVar24 - fVar23 * fVar13, fVar11 * fVar23 + fVar24 * fVar13);
         uStack_90 = ( ulong )(uint)(( _LC9 - fVar20 * fVar23 ) - fVar5 * fVar24);
         do {
            fVar20 = *(float*)( (Transform3D*)&local_b8 + lVar6 );
            fVar5 = *(float*)( (long)&local_b8 + lVar6 + 4 );
            fVar11 = *(float*)( local_a8 + lVar6 + -8 );
            *(float*)( (Vector3*)local_f8 + lVar6 ) = fVar11 * ( fVar7 * fVar19 + fVar21 * fVar9 ) + fVar20 * ( ( _LC9 - fVar12 * fVar21 ) - fVar22 ) + fVar5 * ( fVar12 * fVar19 - fVar15 );
            *(float*)( (long)local_f8 + lVar6 + 4 ) = fVar11 * ( fVar7 * fVar21 - fVar19 * fVar9 ) + fVar20 * ( fVar12 * fVar19 + fVar15 ) + fVar5 * ( ( _LC9 - fVar22 ) - fVar14 * fVar19 );
            *(float*)( (long)local_f8 + lVar6 + 8 ) = fVar11 * ( ( _LC9 - fVar14 * fVar19 ) - fVar12 * fVar21 ) + fVar20 * ( fVar7 * fVar19 - fVar21 * fVar9 ) + fVar5 * ( fVar19 * fVar9 + fVar7 * fVar21 );
            fVar8 = local_f8[2];
            *(float*)( (long)local_f8 + lVar6 + 0xc ) = fVar11 * 0.0 + fVar20 * 0.0 + fVar5 * 0.0;
            lVar6 = lVar6 + 0x10;
         }
 while ( lVar6 != 0x30 );
         fVar14 = *(float*)( lVar3 + 0x20 );
         fVar12 = *(float*)( lVar3 + 0x24 );
         fVar20 = *(float*)( lVar3 + 0x28 );
         fVar5 = local_f8[0];
         fVar7 = local_f8[1];
         bVar2 = *(byte*)( lVar3 + 0x7a );
         fVar9 = fVar12 * local_f8[4];
         fVar11 = fVar12 * local_f8[5];
         fVar12 = fVar12 * local_f8[6];
         auVar17._1_3_ = 0;
         auVar17[0] = bVar2;
         local_f8[0] = 0.0;
         local_f8[1] = 0.0;
         fVar15 = fVar14 * fVar5;
         fVar13 = fVar14 * fVar7;
         fVar14 = fVar14 * local_f8[2];
         auVar17[4] = bVar2;
         auVar17._5_3_ = 0;
         auVar17[8] = bVar2;
         auVar17._9_3_ = 0;
         auVar17[0xc] = bVar2;
         auVar17._13_3_ = 0;
         auVar10._4_4_ = _UNK_0010ba64;
         auVar10._0_4_ = __LC8;
         auVar10._8_4_ = _UNK_0010ba68;
         auVar10._12_4_ = _UNK_0010ba6c;
         auVar17 = auVar17 & auVar10;
         local_f8[2] = 0.0;
         fVar19 = fVar20 * local_f8[8];
         fVar21 = fVar20 * local_f8[9];
         fVar20 = fVar20 * local_f8[10];
         uVar16 = -(uint)(auVar17._0_4_ == __LC8);
         uVar18 = -(uint)(auVar17._4_4_ == _UNK_0010ba64);
         local_100 = -(uint)(auVar17._8_4_ == _UNK_0010ba68);
         local_128 = CONCAT44(( uint )(fVar9 * local_f8[5] + fVar15 * fVar7 + fVar19 * local_f8[9]) & uVar16 & uVar18, ( uint )(fVar9 * local_f8[4] + fVar15 * fVar5 + fVar19 * local_f8[8]) & uVar16);
         local_120 = ( uint )(fVar9 * local_f8[6] + fVar15 * fVar8 + fVar19 * local_f8[10]) & uVar16 & local_100;
         local_110 = ( uint )(fVar11 * local_f8[6] + fVar13 * fVar8 + fVar21 * local_f8[10]) & uVar18 & local_100;
         local_118 = CONCAT44(( uint )(fVar11 * local_f8[5] + fVar13 * fVar7 + fVar21 * local_f8[9]) & uVar18, ( uint )(fVar11 * local_f8[4] + fVar13 * fVar5 + fVar21 * local_f8[8]) & uVar18 & uVar16);
         local_108 = CONCAT44(( uint )(fVar12 * local_f8[5] + fVar14 * fVar7 + fVar20 * local_f8[9]) & local_100 & uVar18, ( uint )(fVar12 * local_f8[4] + fVar14 * fVar5 + fVar20 * local_f8[8]) & local_100 & uVar16);
         local_100 = ( uint )(fVar12 * local_f8[6] + fVar14 * fVar8 + fVar20 * local_f8[10]) & local_100;
         Transform3D::Transform3D((Transform3D*)&local_b8, (Vector3*)&local_128, (Vector3*)&local_118, (Vector3*)&local_108, (Vector3*)local_f8);
         *(undefined4*)in_RDI[2] = (undefined4)local_98;
         *(undefined8*)*in_RDI = local_b8;
         *(ulong*)( *in_RDI + 8 ) = uStack_b0;
         *(undefined8*)in_RDI[1] = local_a8._0_8_;
         *(undefined8*)( in_RDI[1] + 8 ) = local_a8._8_8_;
      }

      JoltBodyAccessor3D::release();
      local_78[0] = _err_print_error;
      JoltBodyAccessor3D::~JoltBodyAccessor3D((JoltBodyAccessor3D*)local_78);
      goto LAB_00105b27;
   }

   auVar10 = ZEXT416((uint)_LC9);
   *(undefined4*)in_RDI[2] = 0x3f800000;
   *in_RDI = auVar10;
   in_RDI[1] = auVar10;
   LAB_00105b27:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* JoltBody3D::set_state(PhysicsServer3D::BodyState, Variant const&) */void JoltBody3D::set_state(JoltBody3D *this, undefined4 param_2, Variant *param_3) {
   long *plVar1;
   undefined1 auVar2[12];
   long lVar3;
   char *pcVar4;
   JoltBody3D JVar5;
   BodyID *pBVar6;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined1 local_58[4][12];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    Variant::operator_cast_to_Transform3D((Variant *)local_58);
    set_transform(this);
    break;
      case 1:
    local_58[0] = Variant::operator_cast_to_Vector3(param_3);
    set_linear_velocity(this,(Vector3 *)local_58);
    break;
      case 2:
    local_58[0] = Variant::operator_cast_to_Vector3(param_3);
    set_angular_velocity(this,(Vector3 *)local_58);
    break;
      case 3:
    JVar5 = (JoltBody3D)Variant::operator_cast_to_bool(param_3);
    if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
      pBVar6 = (BodyID *)JoltSpace3D::get_body_iface();
      if ((bool)JVar5) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          JPH::BodyInterface::DeactivateBody(pBVar6);
          return;
        }
        goto LAB_00105f84;
      }
LAB_00105db9:
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JPH::BodyInterface::ActivateBody(pBVar6);
        return;
      }
      goto LAB_00105f84;
    }
    this[0x201] = JVar5;
    break;
      case 4:
    JVar5 = (JoltBody3D)Variant::operator_cast_to_bool(param_3);
    if (JVar5 != this[0x200]) {
      this[0x200] = JVar5;
      _update_sleep_allowed(this);
      if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
        pBVar6 = (BodyID *)JoltSpace3D::get_body_iface();
        goto LAB_00105db9;
      }
      this[0x201] = (JoltBody3D)0x0;
    }
    break;
      default:
    local_70 = 0;
    local_60 = 0x47;
    local_68 = "Unhandled body state: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_70);
    vformat<PhysicsServer3D::BodyState>(&local_68,(StrRange *)&local_70,param_2);
    _err_print_error("set_state","modules/jolt_physics/objects/jolt_body_3d.cpp",0x261,
                     "Method/function failed.",&local_68,0,0);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_70;
    auVar2._8_4_ = local_58[0]._8_4_;
    auVar2._0_8_ = local_58[0]._0_8_;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_58[0] = auVar2;
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105f84:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JoltBody3D::get_state(PhysicsServer3D::BodyState) const */Variant *JoltBody3D::get_state(Variant *param_1, JoltBody3D *param_2, undefined4 param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   bool bVar4;
   long in_FS_OFFSET;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined1 local_68[4][12];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
    JoltShapedObject3D::get_transform_scaled();
    Variant::Variant(param_1,local_68[0]);
    break;
      case 1:
    local_68[0] = JoltShapedObject3D::get_linear_velocity();
    goto LAB_00106048;
      case 2:
    local_68[0] = JoltShapedObject3D::get_angular_velocity();
LAB_00106048:
    Variant::Variant(param_1,(Vector3 *)local_68);
    break;
      case 3:
    bVar4 = (bool)is_sleeping(param_2);
    Variant::Variant(param_1,bVar4);
    break;
      case 4:
    Variant::Variant(param_1,(bool)param_2[0x200]);
    break;
      default:
    local_80 = 0;
    local_78 = "Unhandled body state: \'%d\'. This should not happen. Please report this.";
    local_70 = 0x47;
    String::parse_latin1((StrRange *)&local_80);
    vformat<PhysicsServer3D::BodyState>(&local_78,(StrRange *)&local_80,param_3);
    _err_print_error("get_state","modules/jolt_physics/objects/jolt_body_3d.cpp",0x24a,
                     "Method/function failed. Returning: Variant()",&local_78,0);
    pcVar3 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* JoltBody3D::get_param(PhysicsServer3D::BodyParameter) const */Variant *JoltBody3D::get_param(Variant *param_1, JoltBody3D *param_2, undefined4 param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long in_FS_OFFSET;
   float fVar4;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_54;
   undefined4 local_4c;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_3c;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
    fVar4 = (float)get_bounce(param_2);
    Variant::Variant(param_1,fVar4);
    break;
      case 1:
    fVar4 = (float)get_friction(param_2);
    Variant::Variant(param_1,fVar4);
    break;
      case 2:
    Variant::Variant(param_1,*(float *)(param_2 + 0x1dc));
    break;
      case 3:
    local_54 = *(undefined8 *)(param_2 + 0x150);
    local_4c = *(undefined4 *)(param_2 + 0x158);
    goto LAB_0010624f;
      case 4:
    local_54 = *(undefined8 *)(param_2 + 0x15c);
    local_4c = *(undefined4 *)(param_2 + 0x164);
LAB_0010624f:
    local_48 = local_54;
    local_40 = local_4c;
    local_3c = local_54;
    local_34 = local_4c;
    Variant::Variant(param_1,(Vector3 *)&local_54);
    break;
      case 5:
    Variant::Variant(param_1,*(float *)(param_2 + 0x1f0));
    break;
      case 6:
    Variant::Variant(param_1,*(int *)(param_2 + 0x1d4));
    break;
      case 7:
    Variant::Variant(param_1,*(int *)(param_2 + 0x1d8));
    break;
      case 8:
    Variant::Variant(param_1,*(float *)(param_2 + 0x1e0));
    break;
      case 9:
    Variant::Variant(param_1,*(float *)(param_2 + 0x1e4));
    break;
      default:
    local_70 = 0;
    local_68 = "Unhandled body parameter: \'%d\'. This should not happen. Please report this.";
    local_60 = 0x4b;
    String::parse_latin1((StrRange *)&local_70);
    vformat<PhysicsServer3D::BodyParameter>(&local_68,(StrRange *)&local_70,param_3);
    _err_print_error("get_param","modules/jolt_physics/objects/jolt_body_3d.cpp",0x287,
                     "Method/function failed. Returning: Variant()",&local_68,0);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* JoltBody3D::call_queries() */void JoltBody3D::call_queries(JoltBody3D *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   Object *pOVar5;
   uint uVar6;
   long in_FS_OFFSET;
   long local_c0;
   long local_b8;
   long local_b0;
   int local_a8;
   undefined8 local_a4;
   char *local_98;
   undefined8 local_90;
   Variant *local_88;
   JoltBody3D *local_80;
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = Callable::is_valid();
   if (cVar4 != '\0') {
      pOVar5 = *(Object**)( this + 0x1c8 );
      if (pOVar5 == (Object*)0x0) {
         pOVar5 = (Object*)operator_new(0x180, "");
         JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D((JoltPhysicsDirectBodyState3D*)pOVar5, this);
         postinitialize_handler(pOVar5);
         *(Object**)( this + 0x1c8 ) = pOVar5;
      }

      Variant::Variant((Variant*)local_78, pOVar5);
      local_80 = this + 0x108;
      uVar6 = 2 - ( *(int*)( this + 0x108 ) == 0 );
      local_a8 = 0;
      local_a4 = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_50 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::callp((Variant**)( this + 0x1b8 ), (int)&local_88, (Variant*)(ulong)uVar6, (CallError*)local_58);
      if (( local_a8 != 0 ) && ( call_queries() )) {
         Variant::get_callable_error_text((Callable*)&local_b8, (Variant**)( this + 0x1b8 ), (int)&local_88, (CallError*)(ulong)uVar6);
         JoltObject3D::to_string();
         local_98 = "Failed to call force integration callback for \'%s\'. It returned the following error: \'%s\'.";
         local_b0 = 0;
         local_90 = 0x5a;
         String::parse_latin1((StrRange*)&local_b0);
         vformat<String,String>(&local_98, (StrRange*)&local_b0, &local_c0, (Callable*)&local_b8);
         _err_print_error("call_queries", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x4af, &local_98, 0, 0);
         pcVar3 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar1 = (long*)( local_b0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_c0;
         if (local_c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_b8;
         if (local_b8 != 0) {
            LOCK();
            plVar1 = (long*)( local_b8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b8 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         call_queries()::first_print =
         '\0';
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   cVar4 = Callable::is_valid();
   if (cVar4 != '\0') {
      pOVar5 = *(Object**)( this + 0x1c8 );
      if (pOVar5 == (Object*)0x0) {
         pOVar5 = (Object*)operator_new(0x180, "");
         JoltPhysicsDirectBodyState3D::JoltPhysicsDirectBodyState3D((JoltPhysicsDirectBodyState3D*)pOVar5, this);
         postinitialize_handler(pOVar5);
         *(Object**)( this + 0x1c8 ) = pOVar5;
      }

      Variant::Variant((Variant*)local_78, pOVar5);
      local_a8 = 0;
      local_a4 = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_50 = (undefined1[16])0x0;
      local_88 = (Variant*)local_78;
      Callable::callp((Variant**)( this + 0x1a8 ), (int)&local_88, (Variant*)0x1, (CallError*)local_58);
      if (( local_a8 != 0 ) && ( call_queries() )) {
         Variant::get_callable_error_text((Callable*)&local_b8, (Variant**)( this + 0x1a8 ), (int)&local_88, (CallError*)0x1);
         JoltObject3D::to_string();
         local_98 = "Failed to call state synchronization callback for \'%s\'. It returned the following error: \'%s\'.";
         local_b0 = 0;
         local_90 = 0x5e;
         String::parse_latin1((StrRange*)&local_b0);
         vformat<String,String>(&local_98, (StrRange*)&local_b0, &local_c0, (Callable*)&local_b8);
         _err_print_error("call_queries", "modules/jolt_physics/objects/jolt_body_3d.cpp", 0x4bc, &local_98, 0, 0);
         pcVar3 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar1 = (long*)( local_b0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_c0;
         if (local_c0 != 0) {
            LOCK();
            plVar1 = (long*)( local_c0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_c0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_b8;
         if (local_b8 != 0) {
            LOCK();
            plVar1 = (long*)( local_b8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b8 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         call_queries()::first_print =
         '\0';
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling *//* JoltBody3D::_update_damp() [clone .part.0] */void JoltBody3D::_update_damp(JoltBody3D *this) {
   long *plVar1;
   long *plVar2;
   undefined4 uVar3;
   bool bVar4;
   bool bVar5;
   long lVar6;
   char *pcVar7;
   BodyID *pBVar8;
   int iVar9;
   int iVar10;
   long *plVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   float fVar14;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   iVar10 = *(int*)( this + 0x1d8 );
   iVar9 = *(int*)( this + 0x1d4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar11 = *(long**)( this + 0xf0 );
   *(undefined8*)( this + 0x1e8 ) = 0;
   bVar13 = iVar10 == 1;
   plVar2 = plVar11 + *(uint*)( this + 0xe8 );
   bVar4 = iVar9 == 1;
   bVar5 = bVar13;
   if (plVar11 == plVar2) {
      LAB_00106c3e:lVar12 = *(long*)( *(long*)( this + 0x28 ) + 0x78 );
      if (!bVar4) {
         *(float*)( this + 0x1e8 ) = *(float*)( this + 0x1e8 ) + *(float*)( lVar12 + 0x164 );
      }

      if (!bVar5) {
         *(float*)( this + 0x1ec ) = *(float*)( this + 0x1ec ) + *(float*)( lVar12 + 0x168 );
      }

      joined_r0x00106c86:if (iVar9 == 0) {
         *(float*)( this + 0x1e8 ) = *(float*)( this + 0x1e8 ) + *(float*)( this + 0x1e0 );
         goto joined_r0x00106b5e;
      }

      if (iVar9 != 1) goto joined_r0x00106b5e;
   }
 else {
      lVar12 = *plVar11;
      if (iVar9 != 1) goto LAB_00106ad5;
      if (iVar10 != 1) {
         LAB_00106a6f:bVar13 = true;
         LAB_00106a75:uVar3 = *(undefined4*)( lVar12 + 0x174 );
         switch (uVar3) {
            case 0:
        break;
            case 1:
        *(float *)(this + 0x1ec) = *(float *)(this + 0x1ec) + *(float *)(lVar12 + 0x168);
        goto joined_r0x00106c29;
            case 2:
        fVar14 = *(float *)(lVar12 + 0x168) + *(float *)(this + 0x1ec);
        goto LAB_00106bc2;
            case 3:
        fVar14 = *(float *)(lVar12 + 0x168);
LAB_00106bc2:
        *(float *)(this + 0x1ec) = fVar14;
        if (!bVar13) {
          plVar11 = plVar11 + 1;
          if (plVar2 != plVar11) goto LAB_00106acc;
LAB_00106be0:
          bVar5 = true;
          bVar13 = false;
          goto LAB_00106c32;
        }
LAB_00106b3b:
        iVar9 = *(int *)(this + 0x1d4);
        iVar10 = *(int *)(this + 0x1d8);
        goto joined_r0x00106c86;
            case 4:
        *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(lVar12 + 0x168);
        break;
            default:
        local_60 = 0;
        local_58 = "Unhandled override mode: \'%d\'. This should not happen. Please report this.";
        local_50 = 0x4a;
        String::parse_latin1((StrRange *)&local_60);
        vformat<PhysicsServer3D::AreaSpaceOverrideMode>(&local_58,(StrRange *)&local_60,uVar3);
        _err_print_error("integrate","modules/jolt_physics/objects/jolt_body_3d.cpp",0x46,
                         "Method/function failed. Returning: false",&local_58,0,0);
        pcVar7 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar7 + -0x10,false);
          }
        }
        lVar12 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar12 + -0x10),false);
          }
        }
         }

         joined_r0x00106c29:if (plVar2 != plVar11 + 1) {
            plVar11 = plVar11 + 1;
            lVar12 = *plVar11;
            if (!bVar13) {
               LAB_00106ad5:uVar3 = *(undefined4*)( lVar12 + 0x170 );
               switch (uVar3) {
                  case 0:
            break;
                  case 1:
            *(float *)(this + 0x1e8) = *(float *)(this + 0x1e8) + *(float *)(lVar12 + 0x164);
            break;
                  case 2:
            *(float *)(this + 0x1e8) = *(float *)(this + 0x1e8) + *(float *)(lVar12 + 0x164);
            if (bVar13) goto LAB_00106b3b;
            goto LAB_00106a6f;
                  case 3:
            *(undefined4 *)(this + 0x1e8) = *(undefined4 *)(lVar12 + 0x164);
            if (!bVar13) goto LAB_00106a6f;
            goto LAB_00106b3b;
                  case 4:
            goto switchD_00106af5_caseD_4;
                  default:
            local_60 = 0;
            local_58 = 
            "Unhandled override mode: \'%d\'. This should not happen. Please report this.";
            local_50 = 0x4a;
            String::parse_latin1((StrRange *)&local_60);
            vformat<PhysicsServer3D::AreaSpaceOverrideMode>(&local_58,(StrRange *)&local_60,uVar3);
            _err_print_error("integrate","modules/jolt_physics/objects/jolt_body_3d.cpp",0x46,
                             "Method/function failed. Returning: false",&local_58,0,0);
            pcVar7 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(local_58 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar7 + -0x10,false);
              }
            }
            lVar6 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar6 + -0x10),false);
              }
            }
               }

               if (!bVar13) goto LAB_00106b17;
               LAB_00106abf:plVar11 = plVar11 + 1;
               if (plVar2 == plVar11) goto LAB_00106be0;
               LAB_00106acc:lVar12 = *plVar11;
               bVar13 = true;
               goto LAB_00106ad5;
            }

            goto LAB_00106a6f;
         }

         bVar5 = false;
         LAB_00106c32:iVar9 = *(int*)( this + 0x1d4 );
         iVar10 = *(int*)( this + 0x1d8 );
         bVar4 = bVar13;
         goto LAB_00106c3e;
      }

   }

   *(undefined4*)( this + 0x1e8 ) = *(undefined4*)( this + 0x1e0 );
   joined_r0x00106b5e:if (iVar10 == 0) {
      iVar10 = *(int*)( this + 0x30 );
      *(float*)( this + 0x1ec ) = *(float*)( this + 0x1ec ) + *(float*)( this + 0x1e4 );
   }
 else if (iVar10 == 1) {
      iVar10 = *(int*)( this + 0x30 );
      *(undefined4*)( this + 0x1ec ) = *(undefined4*)( this + 0x1e4 );
   }
 else {
      iVar10 = *(int*)( this + 0x30 );
   }

   if (iVar10 == -1) {
      this[0x201] = (JoltBody3D)0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      pBVar8 = (BodyID*)JoltSpace3D::get_body_iface();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         JPH::BodyInterface::ActivateBody(pBVar8);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   switchD_00106af5_caseD_4:*(undefined4*)( this + 0x1e8 ) = *(undefined4*)( lVar12 + 0x164 );
   if (bVar13) goto LAB_00106abf;
   LAB_00106b17:bVar13 = false;
   goto LAB_00106a75;
}
/* JoltBody3D::_update_damp() */void JoltBody3D::_update_damp(JoltBody3D *this) {
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      return;
   }

   return;
}
/* JoltBody3D::_areas_changed() */void JoltBody3D::_areas_changed(JoltBody3D *this) {
   BodyID *pBVar1;
   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar1 = (BodyID*)JoltSpace3D::get_body_iface();
         JPH::BodyInterface::ActivateBody(pBVar1);
         return;
      }

   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::set_angular_damp_mode(PhysicsServer3D::BodyDampMode) */void JoltBody3D::set_angular_damp_mode(JoltBody3D *this, int param_2) {
   if (( ( *(int*)( this + 0x1d8 ) != param_2 ) && ( *(int*)( this + 0x1d8 ) = param_2 * (long*)( this + 0x28 ) != 0 ) ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      return;
   }

   return;
}
/* JoltBody3D::set_linear_damp_mode(PhysicsServer3D::BodyDampMode) */void JoltBody3D::set_linear_damp_mode(JoltBody3D *this, int param_2) {
   if (( ( *(int*)( this + 0x1d4 ) != param_2 ) && ( *(int*)( this + 0x1d4 ) = param_2 * (long*)( this + 0x28 ) != 0 ) ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      return;
   }

   return;
}
/* JoltBody3D::_space_changed() */void JoltBody3D::_space_changed(JoltBody3D *this) {
   undefined8 *puVar1;
   long lVar2;
   BodyID *pBVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1d0 ) == 1) {
      JoltShapedObject3D::get_transform_unscaled();
      *(undefined8*)( this + 0x120 ) = local_68;
      *(undefined8*)( this + 0x128 ) = uStack_60;
      *(undefined8*)( this + 0x130 ) = local_58;
      *(undefined8*)( this + 0x138 ) = uStack_50;
      *(undefined8*)( this + 0x140 ) = local_48;
      *(undefined8*)( this + 0x148 ) = uStack_40;
   }

   _update_group_filter(this);
   puVar4 = *(undefined8**)( this + 0x100 );
   puVar1 = puVar4 + *(uint*)( this + 0xf8 );
   for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      while (*(code**)( *(long*)*puVar4 + 0x18 ) != JoltJoint3D::rebuild) {
         ( **(code**)( *(long*)*puVar4 + 0x18 ) )();
         puVar4 = puVar4 + 1;
         if (puVar1 == puVar4) goto LAB_00107010;
      }
;
   }

   LAB_00107010:_update_sleep_allowed(this);
   if (( ( ( *(long*)( this + 0x28 ) == 0 ) || ( *(int*)( this + 0x30 ) == -1 ) ) || ( _update_damp(this),*(long*)( this + 0x28 ) == 0 ) ) || ( *(int*)( this + 0x30 ) == -1 )) {
      this[0x201] = (JoltBody3D)0x0;
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         JPH::BodyInterface::ActivateBody(pBVar3);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::set_linear_damp(float) */void JoltBody3D::set_linear_damp(JoltBody3D *this, float param_1) {
   if (param_1 < 0.0) {
      param_1 = 0.0;
   }

   if (( ( param_1 != *(float*)( this + 0x1e0 ) ) && ( *(float*)( this + 0x1e0 ) = param_1 * (long*)( this + 0x28 ) != 0 ) ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      return;
   }

   return;
}
/* JoltBody3D::set_angular_damp(float) */void JoltBody3D::set_angular_damp(JoltBody3D *this, float param_1) {
   if (param_1 < 0.0) {
      param_1 = 0.0;
   }

   if (( ( param_1 != *(float*)( this + 0x1e4 ) ) && ( *(float*)( this + 0x1e4 ) = param_1 * (long*)( this + 0x28 ) != 0 ) ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      return;
   }

   return;
}
/* JoltBody3D::remove_area(JoltArea3D*) */void JoltBody3D::remove_area(JoltBody3D *this, JoltArea3D *param_1) {
   uint uVar1;
   long lVar2;
   BodyID *pBVar3;
   uint uVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0xe8 );
   lVar2 = *(long*)( this + 0xf0 );
   if (uVar1 != 0) {
      uVar5 = 0;
      do {
         if (*(JoltArea3D**)( lVar2 + uVar5 * 8 ) == param_1) {
            uVar4 = (uint)uVar5;
            if (uVar4 < uVar1) {
               *(uint*)( this + 0xe8 ) = uVar1 - 1;
               if (uVar4 < uVar1 - 1) {
                  memmove((void*)( lVar2 + uVar5 * 8 ), (void*)( lVar2 + ( ulong )(uVar4 + 1) * 8 ), ( ulong )(( uVar1 - 2 ) - uVar4) * 8 + 8);
               }

            }
 else {
               _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar5, (ulong)uVar1, "p_index", "count", "", false, false);
            }

            break;
         }

         uVar5 = uVar5 + 1;
      }
 while ( uVar5 != uVar1 );
   }

   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar3 = (BodyID*)JoltSpace3D::get_body_iface();
         JPH::BodyInterface::ActivateBody(pBVar3);
         return;
      }

   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::add_area(JoltArea3D*) */void JoltBody3D::add_area(JoltBody3D *this, JoltArea3D *param_1) {
   float *pfVar1;
   uint uVar2;
   code *pcVar3;
   uint uVar4;
   long lVar5;
   BodyID *pBVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   void *pvVar9;
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   uVar2 = *(uint*)( this + 0xe8 );
   if ((int)uVar2 < 1) {
      uVar12 = 0;
   }
 else {
      lVar5 = 0;
      uVar12 = 0;
      do {
         if ((uint)uVar12 == uVar2) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar12, uVar12, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pfVar1 = (float*)( *(long*)( *(long*)( this + 0xf0 ) + lVar5 ) + 0x158 );
         if (*pfVar1 <= *(float*)( param_1 + 0x158 ) && *(float*)( param_1 + 0x158 ) != *pfVar1) goto LAB_001072f3;
         uVar10 = (uint)uVar12 + 1;
         uVar12 = (ulong)uVar10;
         lVar5 = lVar5 + 8;
      }
 while ( uVar10 != uVar2 );
      uVar12 = (ulong)uVar10;
   }

   LAB_001072f3:uVar11 = (uint)uVar12;
   uVar10 = uVar2 + 1;
   if (uVar11 < uVar10) {
      pvVar9 = *(void**)( this + 0xf0 );
      if (uVar2 == uVar11) {
         if (uVar11 == *(uint*)( this + 0xec )) {
            uVar12 = ( ulong )(uVar11 * 2);
            if (uVar11 * 2 == 0) {
               uVar12 = 1;
            }

            *(int*)( this + 0xec ) = (int)uVar12;
            pvVar9 = (void*)Memory::realloc_static(pvVar9, uVar12 * 8, false);
            *(void**)( this + 0xf0 ) = pvVar9;
            if (pvVar9 == (void*)0x0) {
               _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            uVar12 = ( ulong ) * (uint*)( this + 0xe8 );
            uVar10 = *(uint*)( this + 0xe8 ) + 1;
         }

         *(uint*)( this + 0xe8 ) = uVar10;
         *(JoltArea3D**)( (long)pvVar9 + uVar12 * 8 ) = param_1;
      }
 else {
         if (*(uint*)( this + 0xec ) < uVar10) {
            uVar4 = uVar2 >> 1 | uVar2;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = uVar4 | uVar4 >> 8;
            uVar4 = ( uVar4 | uVar4 >> 0x10 ) + 1;
            *(uint*)( this + 0xec ) = uVar4;
            pvVar9 = (void*)Memory::realloc_static(pvVar9, (ulong)uVar4 * 8, false);
            *(void**)( this + 0xf0 ) = pvVar9;
            if (pvVar9 == (void*)0x0) {
               _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

         }

         *(uint*)( this + 0xe8 ) = uVar10;
         if (uVar11 < uVar2) {
            lVar5 = (ulong)uVar2 * 8;
            puVar7 = (undefined8*)( (long)pvVar9 + lVar5 );
            do {
               puVar8 = puVar7 + -1;
               *puVar7 = puVar7[( ulong )(uVar2 - 1) - (ulong)uVar2];
               puVar7 = puVar8;
            }
 while ( puVar8 != (undefined8*)( (long)pvVar9 + lVar5 + -8 + ( ulong )(( uVar2 - 1 ) - uVar11) * -8 ) );
         }

         *(JoltArea3D**)( (long)pvVar9 + (long)(int)uVar11 * 8 ) = param_1;
      }

   }
 else {
      _err_print_index_error("insert", "./core/templates/local_vector.h", 0xf7, (long)(int)uVar11, (ulong)uVar10, "p_pos", "count + 1", "", false, false);
   }

   if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
      _update_damp(this);
      if (( *(long*)( this + 0x28 ) != 0 ) && ( *(int*)( this + 0x30 ) != -1 )) {
         pBVar6 = (BodyID*)JoltSpace3D::get_body_iface();
         JPH::BodyInterface::ActivateBody(pBVar6);
         return;
      }

   }

   this[0x201] = (JoltBody3D)0x0;
   return;
}
/* JoltBody3D::set_param(PhysicsServer3D::BodyParameter, Variant const&) */void JoltBody3D::set_param(JoltBody3D *this, undefined4 param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   BodyID *pBVar5;
   long in_FS_OFFSET;
   float fVar6;
   float extraout_XMM1_Da;
   float extraout_XMM1_Da_00;
   long local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_2c;
   float local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      set_bounce(this,fVar6);
      return;
    }
    goto LAB_0010799c;
      case 1:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      set_friction(this,fVar6);
      return;
    }
    goto LAB_0010799c;
      case 2:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (fVar6 != *(float *)(this + 0x1dc)) {
      *(float *)(this + 0x1dc) = fVar6;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_0010787a:
        _update_mass_properties(this);
        return;
      }
      goto LAB_0010799c;
    }
    break;
      case 3:
    local_2c = Variant::operator_cast_to_Vector3(param_3);
    local_24 = extraout_XMM1_Da_00;
    if ((((float)local_2c != *(float *)(this + 0x150)) ||
        ((float)((ulong)local_2c >> 0x20) != *(float *)(this + 0x154))) ||
       (extraout_XMM1_Da_00 != *(float *)(this + 0x158))) {
      *(undefined8 *)(this + 0x150) = local_2c;
      *(float *)(this + 0x158) = extraout_XMM1_Da_00;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010787a;
      goto LAB_0010799c;
    }
    break;
      case 4:
    local_2c = Variant::operator_cast_to_Vector3(param_3);
    local_24 = extraout_XMM1_Da;
    if ((((this[0x202] == (JoltBody3D)0x0) || ((float)local_2c != *(float *)(this + 0x15c))) ||
        ((float)((ulong)local_2c >> 0x20) != *(float *)(this + 0x160))) ||
       (extraout_XMM1_Da != *(float *)(this + 0x164))) {
      this[0x202] = (JoltBody3D)0x1;
      *(undefined8 *)(this + 0x15c) = local_2c;
      *(float *)(this + 0x164) = extraout_XMM1_Da;
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltShapedObject3D::_shapes_changed();
        return;
      }
      goto LAB_0010799c;
    }
    break;
      case 5:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (fVar6 != *(float *)(this + 0x1f0)) {
      *(float *)(this + 0x1f0) = fVar6;
      if ((*(long *)(this + 0x28) != 0) && (*(int *)(this + 0x30) != -1)) {
        pBVar5 = (BodyID *)JoltSpace3D::get_body_iface();
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          JPH::BodyInterface::ActivateBody(pBVar5);
          return;
        }
        goto LAB_0010799c;
      }
      this[0x201] = (JoltBody3D)0x0;
    }
    break;
      case 6:
    iVar4 = Variant::operator_cast_to_int(param_3);
    if (iVar4 != *(int *)(this + 0x1d4)) {
      lVar2 = *(long *)(this + 0x28);
      *(int *)(this + 0x1d4) = iVar4;
joined_r0x00107616:
      if ((lVar2 != 0) && (*(int *)(this + 0x30) != -1)) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_damp(this);
          return;
        }
        goto LAB_0010799c;
      }
    }
    break;
      case 7:
    iVar4 = Variant::operator_cast_to_int(param_3);
    if (iVar4 != *(int *)(this + 0x1d8)) {
      lVar2 = *(long *)(this + 0x28);
      *(int *)(this + 0x1d8) = iVar4;
      goto joined_r0x00107616;
    }
    break;
      case 8:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    if (fVar6 != *(float *)(this + 0x1e0)) {
      lVar2 = *(long *)(this + 0x28);
      *(float *)(this + 0x1e0) = fVar6;
      goto joined_r0x00107616;
    }
    break;
      case 9:
    fVar6 = Variant::operator_cast_to_float(param_3);
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    if (fVar6 != *(float *)(this + 0x1e4)) {
      lVar2 = *(long *)(this + 0x28);
      *(float *)(this + 0x1e4) = fVar6;
      goto joined_r0x00107616;
    }
    break;
      default:
    local_50 = 0;
    local_40 = 0x4b;
    local_48 = "Unhandled body parameter: \'%d\'. This should not happen. Please report this.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<PhysicsServer3D::BodyParameter>(&local_48,(StrRange *)&local_50,param_2);
    _err_print_error("set_param","modules/jolt_physics/objects/jolt_body_3d.cpp",0x2ad,
                     "Method/function failed.",&local_48,0,0);
    pcVar3 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010799c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* JoltBody3D::_update_gravity(JPH::Body&) */void JoltBody3D::_update_gravity(JoltBody3D *this, Body *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   float fVar3;
   undefined4 uVar4;
   Vector3 *pVVar5;
   long lVar6;
   char *pcVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   float fVar9;
   undefined1 auVar10[12];
   undefined1 auVar11[12];
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined1 local_88[12];
   undefined1 local_78[12];
   undefined8 local_68;
   undefined4 local_60;
   undefined1 local_58[12];
   undefined1 local_4c[12];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x198 ) = 0;
   *(undefined4*)( this + 0x1a0 ) = 0;
   local_88 = JPH::Body::GetPosition(param_1);
   auVar10._8_4_ = local_78._8_4_;
   auVar10._0_8_ = local_78._0_8_;
   puVar8 = *(undefined8**)( this + 0xf0 );
   puVar2 = puVar8 + *(uint*)( this + 0xe8 );
   while (local_78 = auVar10,puVar2 != puVar8) {
      pVVar5 = (Vector3*)*puVar8;
      uVar4 = *(undefined4*)( pVVar5 + 0x16c );
      switch (uVar4) {
         case 1:
      auVar10 = JoltArea3D::compute_gravity(pVVar5);
      *(ulong *)(this + 0x198) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x198) >> 0x20) + auVar10._4_4_,
                    (float)*(undefined8 *)(this + 0x198) + auVar10._0_4_);
      *(float *)(this + 0x1a0) = *(float *)(this + 0x1a0) + auVar10._8_4_;
         case 0:
switchD_00107a60_caseD_0:
joined_r0x00107b31:
      puVar8 = puVar8 + 1;
      break;
         case 2:
      auVar10 = JoltArea3D::compute_gravity(pVVar5);
      local_68 = auVar10._0_8_;
      fVar9 = auVar10._8_4_ + *(float *)(this + 0x1a0);
      auVar11._4_4_ = (float)((ulong)*(undefined8 *)(this + 0x198) >> 0x20) + auVar10._4_4_;
      auVar11._0_4_ = (float)*(undefined8 *)(this + 0x198) + auVar10._0_4_;
      auVar11._8_4_ = auVar10._8_4_;
      goto LAB_00107b7b;
         case 3:
      auVar11 = JoltArea3D::compute_gravity(pVVar5);
      local_68 = auVar11._0_8_;
      fVar9 = *(float *)(this + 0x1a0);
      *(undefined1 (*) [12])(this + 0x198) = auVar11;
      local_58 = auVar11;
      goto LAB_00107b7b;
         case 4:
      auVar10 = JoltArea3D::compute_gravity(pVVar5);
      *(undefined1 (*) [12])(this + 0x198) = auVar10;
      local_58 = auVar10;
      local_4c = auVar10;
      auVar10 = local_78;
      goto joined_r0x00107b31;
         default:
      local_a0 = 0;
      local_98 = "Unhandled override mode: \'%d\'. This should not happen. Please report this.";
      local_90 = 0x4a;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<PhysicsServer3D::AreaSpaceOverrideMode>(&local_98,(StrRange *)&local_a0,uVar4);
      _err_print_error("integrate","modules/jolt_physics/objects/jolt_body_3d.cpp",0x46,
                       "Method/function failed. Returning: false",&local_98,0,0);
      pcVar7 = local_98;
      auVar10 = local_78;
      if (local_98 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
          auVar10 = local_78;
        }
      }
      lVar6 = local_a0;
      if (local_a0 == 0) goto switchD_00107a60_caseD_0;
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto switchD_00107a60_caseD_0;
      puVar8 = puVar8 + 1;
      local_a0 = 0;
      local_78 = auVar10;
      Memory::free_static((void *)(lVar6 + -0x10),false);
      auVar10 = local_78;
      }

   }
;
   auVar10 = JoltArea3D::compute_gravity(*(Vector3**)( *(long*)( this + 0x28 ) + 0x78 ));
   fVar9 = *(float*)( this + 0x1a0 ) + auVar10._8_4_;
   auVar11._4_4_ = (float)( ( ulong ) * (undefined8*)( this + 0x198 ) >> 0x20 ) + auVar10._4_4_;
   auVar11._0_4_ = (float)*(undefined8*)( this + 0x198 ) + auVar10._0_4_;
   auVar11._8_4_ = local_60;
   local_58 = auVar10;
   LAB_00107b7b:local_60 = auVar11._8_4_;
   fVar3 = *(float*)( this + 0x1f0 );
   *(float*)( this + 0x1a0 ) = fVar3 * fVar9;
   *(ulong*)( this + 0x198 ) = CONCAT44(auVar11._4_4_ * fVar3, auVar11._0_4_ * fVar3);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltBody3D::_integrate_forces(float, JPH::Body&) */void JoltBody3D::_integrate_forces(JoltBody3D *this, float param_1, Body *param_2) {
   byte bVar1;
   float *pfVar2;
   float fVar3;
   float fVar4;
   float fVar6;
   float fVar7;
   float fVar8;
   undefined1 auVar5[16];
   float fVar9;
   undefined1 auVar10[16];
   float fVar11;
   undefined1 auVar12[16];
   _update_gravity(this, param_2);
   if (this[0x203] == (JoltBody3D)0x0) {
      pfVar2 = *(float**)( param_2 + 0x48 );
      fVar3 = _LC9 - *(float*)( this + 0x1e8 ) * param_1;
      if (fVar3 <= 0.0) {
         fVar3 = 0.0;
      }

      fVar9 = _LC9 - *(float*)( this + 0x1ec ) * param_1;
      if (fVar9 <= 0.0) {
         fVar9 = 0.0;
      }

      bVar1 = *(byte*)( (long)pfVar2 + 0x7a );
      auVar10._1_3_ = 0;
      auVar10[0] = bVar1;
      auVar10[4] = bVar1;
      auVar10._5_3_ = 0;
      auVar10[8] = bVar1;
      auVar10._9_3_ = 0;
      auVar10[0xc] = bVar1;
      auVar10._13_3_ = 0;
      auVar12._4_4_ = _UNK_0010ba54;
      auVar12._0_4_ = __LC6;
      auVar12._8_4_ = _UNK_0010ba58;
      auVar12._12_4_ = _UNK_0010ba5c;
      auVar12 = auVar12 & auVar10;
      fVar4 = (float)( ( uint )(*(float*)( this + 0x198 ) * param_1 + fVar3 * *pfVar2) & -(uint)(auVar12._0_4_ == __LC6) );
      fVar6 = (float)( ( uint )((float)( ( ulong ) * (undefined8*)( this + 0x198 ) >> 0x20 ) * param_1 + fVar3 * pfVar2[1]) & -(uint)(auVar12._4_4_ == _UNK_0010ba54) );
      fVar7 = (float)( ( uint )(*(float*)( this + 0x1a0 ) * param_1 + fVar3 * pfVar2[2]) & -(uint)(auVar12._8_4_ == _UNK_0010ba58) );
      fVar8 = (float)( ( uint )(*(float*)( this + 0x1a0 ) * param_1 + fVar3 * pfVar2[3]) & -(uint)(auVar12._12_4_ == _UNK_0010ba5c) );
      *pfVar2 = fVar4;
      pfVar2[1] = fVar6;
      pfVar2[2] = fVar7;
      pfVar2[3] = fVar8;
      fVar11 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
      fVar3 = pfVar2[0x19];
      if (fVar3 * fVar3 < fVar11) {
         fVar3 = fVar3 / SQRT(fVar11);
         *pfVar2 = fVar3 * fVar4;
         pfVar2[1] = fVar3 * fVar6;
         pfVar2[2] = fVar3 * fVar7;
         pfVar2[3] = fVar3 * fVar8;
      }

      auVar5._4_4_ = _UNK_0010ba64;
      auVar5._0_4_ = __LC8;
      auVar5._8_4_ = _UNK_0010ba68;
      auVar5._12_4_ = _UNK_0010ba6c;
      auVar5 = auVar5 & auVar10;
      fVar4 = (float)( -(uint)(auVar5._0_4_ == __LC8) & ( uint )(fVar9 * pfVar2[4]) );
      fVar6 = (float)( -(uint)(auVar5._4_4_ == _UNK_0010ba64) & ( uint )(fVar9 * pfVar2[5]) );
      fVar7 = (float)( -(uint)(auVar5._8_4_ == _UNK_0010ba68) & ( uint )(fVar9 * pfVar2[6]) );
      fVar9 = (float)( -(uint)(auVar5._12_4_ == _UNK_0010ba6c) & ( uint )(fVar9 * pfVar2[7]) );
      pfVar2[4] = fVar4;
      pfVar2[5] = fVar6;
      pfVar2[6] = fVar7;
      pfVar2[7] = fVar9;
      fVar8 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
      fVar3 = pfVar2[0x1a];
      if (fVar3 * fVar3 < fVar8) {
         fVar3 = fVar3 / SQRT(fVar8);
         pfVar2[4] = fVar3 * fVar4;
         pfVar2[5] = fVar3 * fVar6;
         pfVar2[6] = fVar3 * fVar7;
         pfVar2[7] = fVar3 * fVar9;
      }

      fVar3 = *(float*)( this + 0x16c );
      fVar9 = *(float*)( this + 0x170 );
      pfVar2[0x10] = *(float*)( this + 0x168 ) + pfVar2[0x10];
      pfVar2[0x11] = fVar3 + pfVar2[0x11];
      pfVar2[0x12] = fVar9 + pfVar2[0x12];
      fVar3 = *(float*)( this + 0x17c );
      fVar9 = *(float*)( this + 0x178 );
      pfVar2[0x13] = *(float*)( this + 0x174 ) + pfVar2[0x13];
      *(ulong*)( pfVar2 + 0x14 ) = CONCAT44(fVar3 + pfVar2[0x15], fVar9 + pfVar2[0x14]);
   }

   return;
}
/* JoltBody3D::pre_step(float, JPH::Body&) */void JoltBody3D::pre_step(JoltBody3D *this, float param_1, Body *param_2) {
   char cVar1;
   if (*(int*)( this + 0x1d0 ) == 1) {
      _update_gravity(this, param_2);
      _move_kinematic(param_1, (Body*)this);
      cVar1 = Callable::is_valid();
   }
 else {
      if (*(int*)( this + 0x1d0 ) - 2U < 2) {
         _integrate_forces(this, param_1, param_2);
      }

      cVar1 = Callable::is_valid();
   }

   if (( cVar1 == '\0' ) && ( cVar1 = cVar1 == '\0' )) {
      *(undefined4*)( this + 0x1f8 ) = 0;
      return;
   }

   if (*(SelfList**)( this + 0x28 ) != (SelfList*)0x0) {
      JoltSpace3D::enqueue_call_queries(*(SelfList**)( this + 0x28 ));
   }

   *(undefined4*)( this + 0x1f8 ) = 0;
   return;
}
/* JoltBody3D::_space_changing() */void JoltBody3D::_space_changing(JoltBody3D *this) {
   long lVar1;
   JoltBody3D JVar2;
   long lVar3;
   JoltShapedObject3D::_space_changing();
   JVar2 = (JoltBody3D)is_sleeping(this);
   lVar3 = *(long*)( this + 0x100 );
   this[0x201] = JVar2;
   lVar1 = lVar3 + ( ulong ) * (uint*)( this + 0xf8 ) * 8;
   for (; lVar3 != lVar1; lVar3 = lVar3 + 8) {
      JoltJoint3D::destroy();
   }

   _exit_all_areas(this);
   if (*(SelfList**)( this + 0x28 ) == (SelfList*)0x0) {
      return;
   }

   JoltSpace3D::dequeue_call_queries(*(SelfList**)( this + 0x28 ));
   return;
}
/* JoltBody3D::can_interact_with(JoltSoftBody3D const&) const */void JoltBody3D::can_interact_with(JoltBody3D *this, JoltSoftBody3D *param_1) {
   JoltSoftBody3D::can_interact_with((JoltBody3D*)param_1);
   return;
}
/* JoltBody3D::can_interact_with(JoltArea3D const&) const */void JoltBody3D::can_interact_with(JoltBody3D *this, JoltArea3D *param_1) {
   JoltArea3D::can_interact_with((JoltBody3D*)param_1);
   return;
}
/* JPH::Shape::GetCenterOfMass() const */undefined1[16];JPH::Shape::GetCenterOfMass(void) {
   return ZEXT816(0);
}
/* JoltBody3D::has_custom_center_of_mass() const */JoltBody3D JoltBody3D::has_custom_center_of_mass(JoltBody3D *this) {
   return this[0x202];
}
/* JoltBody3D::get_center_of_mass_custom() const */undefined1  [16] __thiscallJoltBody3D::get_center_of_mass_custom(JoltBody3D *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x15c );
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltBody3D::reports_contacts() const */undefined4 JoltBody3D::reports_contacts(JoltBody3D *this) {
   return CONCAT31(( int3 )(( uint ) * (int*)( this + 0xd8 ) >> 8), *(int*)( this + 0xd8 ) != 0);
}
/* JoltJoint3D::rebuild() */void JoltJoint3D::rebuild(void) {
   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00108144. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::GetPosition() const */undefined1  [16] __thiscallJPH::Body::GetPosition(Body *this) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
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
   undefined1 auVar16[12];
   auVar16 = ZEXT812(0);
   if (*(code**)( **(long**)( this + 0x40 ) + 0x18 ) != Shape::GetCenterOfMass) {
      auVar16 = ( **(code**)( **(long**)( this + 0x40 ) + 0x18 ) )();
   }

   fVar7 = auVar16._8_4_;
   fVar8 = *(float*)( this + 0x1c );
   fVar1 = *(float*)( this + 0x10 );
   fVar5 = auVar16._0_4_;
   fVar15 = auVar16._4_4_;
   fVar2 = *(float*)( this + 0x14 );
   fVar3 = *(float*)( this + 0x18 );
   fVar10 = (float)( *(uint*)( this + 0x10 ) ^ __LC4 );
   fVar11 = (float)( *(uint*)( this + 0x14 ) ^ _UNK_0010ba44 );
   fVar12 = (float)( *(uint*)( this + 0x18 ) ^ _UNK_0010ba48 );
   fVar13 = (float)( *(uint*)( this + 0x1c ) ^ _UNK_0010ba4c );
   fVar14 = ( fVar8 * fVar5 + fVar1 * 0.0 + fVar2 * fVar7 ) - fVar3 * fVar15;
   fVar9 = ( fVar8 * fVar15 - fVar1 * fVar7 ) + fVar2 * 0.0 + fVar3 * fVar5;
   fVar6 = ( ( fVar8 * fVar7 + fVar1 * fVar15 ) - fVar2 * fVar5 ) + fVar3 * 0.0;
   fVar8 = ( ( fVar8 * 0.0 - fVar1 * fVar5 ) - fVar2 * fVar15 ) - fVar3 * fVar7;
   auVar4._4_4_ = *(float*)( this + 4 ) - ( fVar6 * fVar10 + fVar9 * fVar13 + ( fVar11 * fVar8 - fVar14 * fVar12 ) );
   auVar4._0_4_ = *(float*)this - ( ( fVar9 * fVar12 + fVar14 * fVar13 + fVar10 * fVar8 ) - fVar6 * fVar11 );
   auVar4._8_4_ = *(float*)( this + 8 ) - ( fVar6 * fVar13 + ( ( fVar14 * fVar11 + fVar12 * fVar8 ) - fVar9 * fVar10 ) );
   auVar4._12_4_ = *(float*)( this + 0xc ) - ( ( ( fVar13 * fVar8 - fVar14 * fVar10 ) - fVar9 * fVar11 ) - fVar6 * fVar12 );
   return auVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::AddImpulse(JPH::Vec3, JPH::Vec3) */void JPH::Body::AddImpulse(undefined8 param_1, undefined8 param_2, undefined8 param_3, float param_4, float *param_5) {
   byte bVar1;
   float *pfVar2;
   undefined1 auVar3[16];
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined1 auVar10[16];
   float fVar11;
   uint uVar12;
   uint uVar14;
   uint uVar15;
   undefined1 auVar13[16];
   uint uVar16;
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
   float local_28;
   float fStack_24;
   float fStack_20;
   float fStack_1c;
   float local_18;
   float fStack_14;
   pfVar2 = *(float**)( param_5 + 0x12 );
   auVar10._4_4_ = _UNK_0010ba54;
   auVar10._0_4_ = __LC6;
   auVar10._8_4_ = _UNK_0010ba58;
   auVar10._12_4_ = _UNK_0010ba5c;
   local_28 = (float)param_1;
   fStack_24 = (float)( (ulong)param_1 >> 0x20 );
   fStack_20 = (float)param_2;
   fStack_1c = (float)( (ulong)param_2 >> 0x20 );
   bVar1 = *(byte*)( (long)pfVar2 + 0x7a );
   fVar5 = pfVar2[0x16];
   auVar13._1_3_ = 0;
   auVar13[0] = bVar1;
   auVar13[4] = bVar1;
   auVar13._5_3_ = 0;
   auVar13[8] = bVar1;
   auVar13._9_3_ = 0;
   auVar13[0xc] = bVar1;
   auVar13._13_3_ = 0;
   auVar10 = auVar10 & auVar13;
   fVar4 = (float)( ( uint )(fVar5 * local_28 + *pfVar2) & -(uint)(auVar10._0_4_ == __LC6) );
   fVar6 = (float)( ( uint )(fVar5 * fStack_24 + pfVar2[1]) & -(uint)(auVar10._4_4_ == _UNK_0010ba54) );
   fVar7 = (float)( ( uint )(fVar5 * fStack_20 + pfVar2[2]) & -(uint)(auVar10._8_4_ == _UNK_0010ba58) );
   fVar8 = (float)( ( uint )(fVar5 * fStack_1c + pfVar2[3]) & -(uint)(auVar10._12_4_ == _UNK_0010ba5c) );
   *pfVar2 = fVar4;
   pfVar2[1] = fVar6;
   pfVar2[2] = fVar7;
   pfVar2[3] = fVar8;
   fVar9 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
   fVar5 = pfVar2[0x19];
   if (fVar5 * fVar5 < fVar9) {
      fVar5 = fVar5 / SQRT(fVar9);
      *pfVar2 = fVar5 * fVar4;
      pfVar2[1] = fVar5 * fVar6;
      pfVar2[2] = fVar5 * fVar7;
      pfVar2[3] = fVar5 * fVar8;
   }

   local_18 = (float)param_3;
   fStack_14 = (float)( (ulong)param_3 >> 0x20 );
   fVar8 = (float)*(undefined8*)( param_5 + 6 );
   fVar6 = (float)*(undefined8*)( pfVar2 + 0xe );
   fVar21 = (float)*(undefined8*)( param_5 + 4 );
   fVar7 = (float)( ( ulong ) * (undefined8*)( pfVar2 + 0xe ) >> 0x20 );
   fVar5 = (float)*(undefined8*)( pfVar2 + 0xc );
   fVar4 = (float)( ( ulong ) * (undefined8*)( pfVar2 + 0xc ) >> 0x20 );
   auVar3._4_4_ = _UNK_0010ba64;
   auVar3._0_4_ = __LC8;
   auVar3._8_4_ = _UNK_0010ba68;
   auVar3._12_4_ = _UNK_0010ba6c;
   auVar13 = auVar13 & auVar3;
   fVar9 = (float)( ( ulong ) * (undefined8*)( param_5 + 6 ) >> 0x20 );
   uVar12 = -(uint)(auVar13._0_4_ == __LC8);
   uVar14 = -(uint)(auVar13._4_4_ == _UNK_0010ba64);
   uVar15 = -(uint)(auVar13._8_4_ == _UNK_0010ba68);
   uVar16 = -(uint)(auVar13._12_4_ == _UNK_0010ba6c);
   fVar23 = (float)( ( ulong ) * (undefined8*)( param_5 + 4 ) >> 0x20 );
   fVar17 = (float)( ( uint )(fStack_20 * ( fStack_14 - param_5[1] ) - ( param_4 - param_5[2] ) * fStack_24) & uVar12 );
   fVar18 = (float)( ( uint )(local_28 * ( param_4 - param_5[2] ) - ( local_18 - *param_5 ) * fStack_20) & uVar14 );
   fVar19 = (float)( ( uint )(fStack_24 * ( local_18 - *param_5 ) - ( fStack_14 - param_5[1] ) * local_28) & uVar15 );
   fVar24 = ( fVar9 * fVar5 + fVar21 * fVar7 + fVar23 * fVar6 ) - fVar8 * fVar4;
   fVar11 = ( fVar9 * fVar4 - fVar21 * fVar6 ) + fVar23 * fVar7 + fVar8 * fVar5;
   fVar25 = fVar11 + fVar11;
   fVar22 = fVar24 + fVar24;
   fVar20 = ( ( fVar9 * fVar6 + fVar21 * fVar4 ) - fVar23 * fVar5 ) + fVar8 * fVar7;
   fVar5 = ( ( fVar9 * fVar7 - fVar21 * fVar5 ) - fVar23 * fVar4 ) - fVar8 * fVar6;
   fVar8 = fVar20 * ( fVar20 + fVar20 );
   fVar6 = ( fVar20 + fVar20 ) * fVar5;
   fVar21 = fVar20 * fVar25 - fVar22 * fVar5;
   fVar7 = fVar20 * fVar22 + fVar25 * fVar5;
   fVar23 = fVar22 * fVar5 + fVar20 * fVar25;
   fVar4 = ( _LC9 - fVar11 * fVar25 ) - fVar8;
   fVar26 = fVar11 * fVar22 - fVar6;
   fVar6 = fVar11 * fVar22 + fVar6;
   fVar27 = ( _LC9 - fVar8 ) - fVar24 * fVar22;
   fVar20 = fVar20 * fVar22 - fVar25 * fVar5;
   fVar11 = ( _LC9 - fVar24 * fVar22 ) - fVar11 * fVar25;
   fVar5 = ( fVar17 * fVar4 + fVar18 * fVar6 + fVar19 * fVar20 ) * pfVar2[8];
   fVar8 = ( fVar17 * fVar26 + fVar18 * fVar27 + fVar19 * fVar23 ) * pfVar2[9];
   fVar9 = ( fVar17 * fVar7 + fVar18 * fVar21 + fVar19 * fVar11 ) * pfVar2[10];
   fVar4 = (float)( ( uint )((float)( ( uint )(fVar4 * fVar5 + fVar8 * fVar26 + fVar9 * fVar7) & uVar12 ) + pfVar2[4]) & uVar12 );
   fVar6 = (float)( ( uint )((float)( ( uint )(fVar6 * fVar5 + fVar8 * fVar27 + fVar9 * fVar21) & uVar14 ) + pfVar2[5]) & uVar14 );
   fVar7 = (float)( ( uint )((float)( ( uint )(fVar20 * fVar5 + fVar8 * fVar23 + fVar9 * fVar11) & uVar15 ) + pfVar2[6]) & uVar15 );
   fVar8 = (float)( ( uint )((float)( ( uint )(fVar5 * 0.0 + fVar8 * 0.0 + fVar9 * 0.0) & uVar16 ) + pfVar2[7]) & uVar16 );
   pfVar2[4] = fVar4;
   pfVar2[5] = fVar6;
   pfVar2[6] = fVar7;
   pfVar2[7] = fVar8;
   fVar9 = fVar7 * fVar7 + fVar4 * fVar4 + 0.0 + fVar6 * fVar6;
   fVar5 = pfVar2[0x1a];
   if (fVar9 <= fVar5 * fVar5) {
      return;
   }

   fVar5 = fVar5 / SQRT(fVar9);
   pfVar2[4] = fVar5 * fVar4;
   pfVar2[5] = fVar5 * fVar6;
   pfVar2[6] = fVar5 * fVar7;
   pfVar2[7] = fVar5 * fVar8;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JPH::Body::AddAngularImpulse(JPH::Vec3) */void JPH::Body::AddAngularImpulse(undefined8 param_1, uint param_2, long param_3) {
   byte bVar1;
   long lVar2;
   undefined1 auVar3[16];
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   uint uVar9;
   uint uVar11;
   uint uVar12;
   undefined1 auVar10[16];
   uint uVar13;
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
   undefined4 local_18;
   undefined4 uStack_14;
   lVar2 = *(long*)( param_3 + 0x48 );
   local_18 = (uint)param_1;
   uStack_14 = ( uint )((ulong)param_1 >> 0x20);
   bVar1 = *(byte*)( lVar2 + 0x7a );
   fVar23 = (float)*(undefined8*)( param_3 + 0x18 );
   fVar8 = (float)*(undefined8*)( param_3 + 0x10 );
   fVar7 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x18 ) >> 0x20 );
   auVar10._1_3_ = 0;
   auVar10[0] = bVar1;
   fVar4 = (float)*(undefined8*)( lVar2 + 0x30 );
   fVar15 = (float)*(undefined8*)( lVar2 + 0x38 );
   fVar21 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x10 ) >> 0x20 );
   fVar5 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x30 ) >> 0x20 );
   fVar16 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x38 ) >> 0x20 );
   auVar10[4] = bVar1;
   auVar10._5_3_ = 0;
   auVar10[8] = bVar1;
   auVar10._9_3_ = 0;
   auVar10[0xc] = bVar1;
   auVar10._13_3_ = 0;
   auVar3._4_4_ = _UNK_0010ba64;
   auVar3._0_4_ = __LC8;
   auVar3._8_4_ = _UNK_0010ba68;
   auVar3._12_4_ = _UNK_0010ba6c;
   auVar10 = auVar10 & auVar3;
   uVar9 = -(uint)(auVar10._0_4_ == __LC8);
   uVar11 = -(uint)(auVar10._4_4_ == _UNK_0010ba64);
   uVar12 = -(uint)(auVar10._8_4_ == _UNK_0010ba68);
   uVar13 = -(uint)(auVar10._12_4_ == _UNK_0010ba6c);
   fVar17 = (float)( local_18 & uVar9 );
   fVar18 = (float)( uStack_14 & uVar11 );
   fVar19 = (float)( param_2 & uVar12 );
   fVar22 = ( fVar7 * fVar4 + fVar8 * fVar16 + fVar21 * fVar15 ) - fVar23 * fVar5;
   fVar14 = ( fVar7 * fVar5 - fVar8 * fVar15 ) + fVar21 * fVar16 + fVar23 * fVar4;
   fVar20 = fVar22 + fVar22;
   fVar6 = ( ( fVar7 * fVar15 + fVar8 * fVar5 ) - fVar21 * fVar4 ) + fVar23 * fVar16;
   fVar24 = fVar14 + fVar14;
   fVar4 = ( ( fVar7 * fVar16 - fVar8 * fVar4 ) - fVar21 * fVar5 ) - fVar23 * fVar15;
   fVar5 = fVar4 * ( fVar6 + fVar6 );
   fVar23 = fVar6 * ( fVar6 + fVar6 );
   fVar16 = fVar6 * fVar24 - fVar20 * fVar4;
   fVar15 = fVar6 * fVar20 + fVar24 * fVar4;
   fVar21 = fVar20 * fVar4 + fVar6 * fVar24;
   fVar25 = fVar14 * fVar20 - fVar5;
   fVar5 = fVar14 * fVar20 + fVar5;
   fVar6 = fVar6 * fVar20 - fVar24 * fVar4;
   fVar4 = ( _LC9 - fVar14 * fVar24 ) - fVar23;
   fVar26 = ( _LC9 - fVar23 ) - fVar22 * fVar20;
   fVar14 = ( _LC9 - fVar22 * fVar20 ) - fVar14 * fVar24;
   fVar23 = ( fVar17 * fVar4 + fVar18 * fVar5 + fVar19 * fVar6 ) * *(float*)( lVar2 + 0x20 );
   fVar7 = ( fVar17 * fVar25 + fVar18 * fVar26 + fVar19 * fVar21 ) * *(float*)( lVar2 + 0x24 );
   fVar8 = ( fVar17 * fVar15 + fVar18 * fVar16 + fVar19 * fVar14 ) * *(float*)( lVar2 + 0x28 );
   fVar15 = (float)( ( uint )((float)( ( uint )(fVar4 * fVar23 + fVar7 * fVar25 + fVar8 * fVar15) & uVar9 ) + *(float*)( lVar2 + 0x10 )) & uVar9 );
   fVar5 = (float)( ( uint )((float)( ( uint )(fVar5 * fVar23 + fVar7 * fVar26 + fVar8 * fVar16) & uVar11 ) + *(float*)( lVar2 + 0x14 )) & uVar11 );
   fVar16 = (float)( ( uint )((float)( ( uint )(fVar6 * fVar23 + fVar7 * fVar21 + fVar8 * fVar14) & uVar12 ) + *(float*)( lVar2 + 0x18 )) & uVar12 );
   fVar23 = (float)( ( uint )((float)( ( uint )(fVar23 * 0.0 + fVar7 * 0.0 + fVar8 * 0.0) & uVar13 ) + *(float*)( lVar2 + 0x1c )) & uVar13 );
   *(float*)( lVar2 + 0x10 ) = fVar15;
   *(float*)( lVar2 + 0x14 ) = fVar5;
   *(float*)( lVar2 + 0x18 ) = fVar16;
   *(float*)( lVar2 + 0x1c ) = fVar23;
   fVar7 = fVar16 * fVar16 + fVar15 * fVar15 + 0.0 + fVar5 * fVar5;
   fVar4 = *(float*)( lVar2 + 0x68 );
   if (fVar7 <= fVar4 * fVar4) {
      return;
   }

   fVar4 = fVar4 / SQRT(fVar7);
   *(float*)( lVar2 + 0x10 ) = fVar4 * fVar15;
   *(float*)( lVar2 + 0x14 ) = fVar4 * fVar5;
   *(float*)( lVar2 + 0x18 ) = fVar4 * fVar16;
   *(float*)( lVar2 + 0x1c ) = fVar4 * fVar23;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00109b88) *//* WARNING: Removing unreachable block (ram,0x00109cb8) *//* WARNING: Removing unreachable block (ram,0x00109e80) *//* WARNING: Removing unreachable block (ram,0x00109cc4) *//* WARNING: Removing unreachable block (ram,0x00109cce) *//* WARNING: Removing unreachable block (ram,0x00109e60) *//* WARNING: Removing unreachable block (ram,0x00109cda) *//* WARNING: Removing unreachable block (ram,0x00109ce4) *//* WARNING: Removing unreachable block (ram,0x00109e40) *//* WARNING: Removing unreachable block (ram,0x00109cf0) *//* WARNING: Removing unreachable block (ram,0x00109cfa) *//* WARNING: Removing unreachable block (ram,0x00109e20) *//* WARNING: Removing unreachable block (ram,0x00109d06) *//* WARNING: Removing unreachable block (ram,0x00109d10) *//* WARNING: Removing unreachable block (ram,0x00109e00) *//* WARNING: Removing unreachable block (ram,0x00109d1c) *//* WARNING: Removing unreachable block (ram,0x00109d26) *//* WARNING: Removing unreachable block (ram,0x00109de0) *//* WARNING: Removing unreachable block (ram,0x00109d32) *//* WARNING: Removing unreachable block (ram,0x00109d3c) *//* WARNING: Removing unreachable block (ram,0x00109dc0) *//* WARNING: Removing unreachable block (ram,0x00109d44) *//* WARNING: Removing unreachable block (ram,0x00109d5a) *//* WARNING: Removing unreachable block (ram,0x00109d66) *//* String vformat<PhysicsServer3D::BodyMode>(String const&, PhysicsServer3D::BodyMode const) */undefined8 *vformat<PhysicsServer3D::BodyMode>(undefined8 *param_1, bool *param_2, int param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00109fc8) *//* WARNING: Removing unreachable block (ram,0x0010a0f8) *//* WARNING: Removing unreachable block (ram,0x0010a2c0) *//* WARNING: Removing unreachable block (ram,0x0010a104) *//* WARNING: Removing unreachable block (ram,0x0010a10e) *//* WARNING: Removing unreachable block (ram,0x0010a2a0) *//* WARNING: Removing unreachable block (ram,0x0010a11a) *//* WARNING: Removing unreachable block (ram,0x0010a124) *//* WARNING: Removing unreachable block (ram,0x0010a280) *//* WARNING: Removing unreachable block (ram,0x0010a130) *//* WARNING: Removing unreachable block (ram,0x0010a13a) *//* WARNING: Removing unreachable block (ram,0x0010a260) *//* WARNING: Removing unreachable block (ram,0x0010a146) *//* WARNING: Removing unreachable block (ram,0x0010a150) *//* WARNING: Removing unreachable block (ram,0x0010a240) *//* WARNING: Removing unreachable block (ram,0x0010a15c) *//* WARNING: Removing unreachable block (ram,0x0010a166) *//* WARNING: Removing unreachable block (ram,0x0010a220) *//* WARNING: Removing unreachable block (ram,0x0010a172) *//* WARNING: Removing unreachable block (ram,0x0010a17c) *//* WARNING: Removing unreachable block (ram,0x0010a200) *//* WARNING: Removing unreachable block (ram,0x0010a184) *//* WARNING: Removing unreachable block (ram,0x0010a19a) *//* WARNING: Removing unreachable block (ram,0x0010a1a6) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010a408) *//* WARNING: Removing unreachable block (ram,0x0010a538) *//* WARNING: Removing unreachable block (ram,0x0010a700) *//* WARNING: Removing unreachable block (ram,0x0010a544) *//* WARNING: Removing unreachable block (ram,0x0010a54e) *//* WARNING: Removing unreachable block (ram,0x0010a6e0) *//* WARNING: Removing unreachable block (ram,0x0010a55a) *//* WARNING: Removing unreachable block (ram,0x0010a564) *//* WARNING: Removing unreachable block (ram,0x0010a6c0) *//* WARNING: Removing unreachable block (ram,0x0010a570) *//* WARNING: Removing unreachable block (ram,0x0010a57a) *//* WARNING: Removing unreachable block (ram,0x0010a6a0) *//* WARNING: Removing unreachable block (ram,0x0010a586) *//* WARNING: Removing unreachable block (ram,0x0010a590) *//* WARNING: Removing unreachable block (ram,0x0010a680) *//* WARNING: Removing unreachable block (ram,0x0010a59c) *//* WARNING: Removing unreachable block (ram,0x0010a5a6) *//* WARNING: Removing unreachable block (ram,0x0010a660) *//* WARNING: Removing unreachable block (ram,0x0010a5b2) *//* WARNING: Removing unreachable block (ram,0x0010a5bc) *//* WARNING: Removing unreachable block (ram,0x0010a640) *//* WARNING: Removing unreachable block (ram,0x0010a5c4) *//* WARNING: Removing unreachable block (ram,0x0010a5da) *//* WARNING: Removing unreachable block (ram,0x0010a5e6) *//* String vformat<PhysicsServer3D::BodyState>(String const&, PhysicsServer3D::BodyState const) */undefined8 *vformat<PhysicsServer3D::BodyState>(undefined8 *param_1, bool *param_2, int param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010a8f8) *//* WARNING: Removing unreachable block (ram,0x0010aa28) *//* WARNING: Removing unreachable block (ram,0x0010abf0) *//* WARNING: Removing unreachable block (ram,0x0010aa34) *//* WARNING: Removing unreachable block (ram,0x0010aa3e) *//* WARNING: Removing unreachable block (ram,0x0010abd0) *//* WARNING: Removing unreachable block (ram,0x0010aa4a) *//* WARNING: Removing unreachable block (ram,0x0010aa54) *//* WARNING: Removing unreachable block (ram,0x0010abb0) *//* WARNING: Removing unreachable block (ram,0x0010aa60) *//* WARNING: Removing unreachable block (ram,0x0010aa6a) *//* WARNING: Removing unreachable block (ram,0x0010ab90) *//* WARNING: Removing unreachable block (ram,0x0010aa76) *//* WARNING: Removing unreachable block (ram,0x0010aa80) *//* WARNING: Removing unreachable block (ram,0x0010ab70) *//* WARNING: Removing unreachable block (ram,0x0010aa8c) *//* WARNING: Removing unreachable block (ram,0x0010aa96) *//* WARNING: Removing unreachable block (ram,0x0010ab50) *//* WARNING: Removing unreachable block (ram,0x0010aaa2) *//* WARNING: Removing unreachable block (ram,0x0010aaac) *//* WARNING: Removing unreachable block (ram,0x0010ab30) *//* WARNING: Removing unreachable block (ram,0x0010aab4) *//* WARNING: Removing unreachable block (ram,0x0010aaca) *//* WARNING: Removing unreachable block (ram,0x0010aad6) *//* String vformat<PhysicsServer3D::BodyParameter>(String const&, PhysicsServer3D::BodyParameter
   const) */undefined8 *vformat<PhysicsServer3D::BodyParameter>(undefined8 *param_1, bool *param_2, int param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010ad70) *//* WARNING: Removing unreachable block (ram,0x0010aea0) *//* WARNING: Removing unreachable block (ram,0x0010b019) *//* WARNING: Removing unreachable block (ram,0x0010aeac) *//* WARNING: Removing unreachable block (ram,0x0010aeb6) *//* WARNING: Removing unreachable block (ram,0x0010affb) *//* WARNING: Removing unreachable block (ram,0x0010aec2) *//* WARNING: Removing unreachable block (ram,0x0010aecc) *//* WARNING: Removing unreachable block (ram,0x0010afdd) *//* WARNING: Removing unreachable block (ram,0x0010aed8) *//* WARNING: Removing unreachable block (ram,0x0010aee2) *//* WARNING: Removing unreachable block (ram,0x0010afbf) *//* WARNING: Removing unreachable block (ram,0x0010aeee) *//* WARNING: Removing unreachable block (ram,0x0010aef8) *//* WARNING: Removing unreachable block (ram,0x0010afa1) *//* WARNING: Removing unreachable block (ram,0x0010af04) *//* WARNING: Removing unreachable block (ram,0x0010af0e) *//* WARNING: Removing unreachable block (ram,0x0010af83) *//* WARNING: Removing unreachable block (ram,0x0010af16) *//* WARNING: Removing unreachable block (ram,0x0010af20) *//* WARNING: Removing unreachable block (ram,0x0010af68) *//* WARNING: Removing unreachable block (ram,0x0010af28) *//* WARNING: Removing unreachable block (ram,0x0010af3e) *//* WARNING: Removing unreachable block (ram,0x0010af4a) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_88, param_3);
   Variant::Variant(local_70, param_4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010b158) *//* WARNING: Removing unreachable block (ram,0x0010b288) *//* WARNING: Removing unreachable block (ram,0x0010b450) *//* WARNING: Removing unreachable block (ram,0x0010b294) *//* WARNING: Removing unreachable block (ram,0x0010b29e) *//* WARNING: Removing unreachable block (ram,0x0010b430) *//* WARNING: Removing unreachable block (ram,0x0010b2aa) *//* WARNING: Removing unreachable block (ram,0x0010b2b4) *//* WARNING: Removing unreachable block (ram,0x0010b410) *//* WARNING: Removing unreachable block (ram,0x0010b2c0) *//* WARNING: Removing unreachable block (ram,0x0010b2ca) *//* WARNING: Removing unreachable block (ram,0x0010b3f0) *//* WARNING: Removing unreachable block (ram,0x0010b2d6) *//* WARNING: Removing unreachable block (ram,0x0010b2e0) *//* WARNING: Removing unreachable block (ram,0x0010b3d0) *//* WARNING: Removing unreachable block (ram,0x0010b2ec) *//* WARNING: Removing unreachable block (ram,0x0010b2f6) *//* WARNING: Removing unreachable block (ram,0x0010b3b0) *//* WARNING: Removing unreachable block (ram,0x0010b302) *//* WARNING: Removing unreachable block (ram,0x0010b30c) *//* WARNING: Removing unreachable block (ram,0x0010b390) *//* WARNING: Removing unreachable block (ram,0x0010b314) *//* WARNING: Removing unreachable block (ram,0x0010b32a) *//* WARNING: Removing unreachable block (ram,0x0010b336) *//* String vformat<PhysicsServer3D::AreaSpaceOverrideMode>(String const&,
   PhysicsServer3D::AreaSpaceOverrideMode const) */undefined8 *vformat<PhysicsServer3D::AreaSpaceOverrideMode>(undefined8 *param_1, bool *param_2, int param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   long *plVar1;
   long *plVar2;
   long *plVar3;
   long *plVar4;
   if (*(long*)( this + 0x128 ) != 0) {
      *(undefined8*)( this + 0x118 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0x110 ) != 0) {
      *(undefined8*)( this + 0x100 ) = 0;
      ( *Free )();
   }

   if (*(long*)( this + 0xf8 ) != 0) {
      *(undefined8*)( this + 0xe8 ) = 0;
      ( *Free )();
   }

   plVar4 = *(long**)( this + 0xd8 );
   if (plVar4 != (long*)0x0) {
      if (( *(long*)( this + 200 ) != 0 ) && ( plVar2 = plVar4 < plVar2 )) {
         do {
            while (plVar3 = (long*)*plVar4,plVar3 == (long*)0x0) {
               LAB_0010b620:plVar4 = plVar4 + 1;
               if (plVar2 <= plVar4) goto LAB_0010b658;
            }
;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) goto LAB_0010b620;
            if (*(code**)( *plVar3 + 0x18 ) != PhysicsMaterial::~PhysicsMaterial) {
               ( **(code**)( *plVar3 + 0x18 ) )();
               goto LAB_0010b620;
            }

            ( *Free )();
            plVar4 = plVar4 + 1;
         }
 while ( plVar4 < plVar2 );
         LAB_0010b658:plVar4 = *(long**)( this + 0xd8 );
      }

      *(undefined8*)( this + 200 ) = 0;
      ( *Free )(plVar4);
   }

   for (int i = 0; i < 7; i++) {
      if (*(long*)( this + ( -24*i + 192 ) ) != 0) {
         *(undefined8*)( this + ( -24*i + 176 ) ) = 0;
         ( *Free )();
      }

   }

   if (*(long*)( this + 0x18 ) == 0) {
      return;
   }

   *(undefined8*)( this + 8 ) = 0;
   /* WARNING: Could not recover jumptable at 0x0010b5fa. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   uint uVar1;
   SoftBodySharedSettings *this_00;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               this_00 = *(SoftBodySharedSettings**)( (long)pvVar3 + 0x28 );
               if (this_00 != (SoftBodySharedSettings*)0x0) {
                  LOCK();
                  *(int*)this_00 = *(int*)this_00 + -1;
                  UNLOCK();
                  if (*(int*)this_00 == 0) {
                     JPH::SoftBodySharedSettings::~SoftBodySharedSettings(this_00);
                     ( *JPH::Free )(this_00);
                  }

               }

               if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)0x0) {
                  if (*(int*)( (long)pvVar3 + 0x18 ) != 0) {
                     *(undefined4*)( (long)pvVar3 + 0x18 ) = 0;
                  }

                  Memory::free_static(*(void**)( (long)pvVar3 + 0x20 ), false);
               }

               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* JoltBody3D::_get_broad_phase_layer() const */void JoltBody3D::_GLOBAL__sub_I__get_broad_phase_layer(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC102;
   }

   if (JoltSoftBody3D::mesh_to_shared != '\0') {
      return;
   }

   JoltSoftBody3D::mesh_to_shared = 1;
   JoltSoftBody3D::mesh_to_shared._8_16_ = (undefined1[16])0x0;
   JoltSoftBody3D::mesh_to_shared._40_8_ = 2;
   JoltSoftBody3D::mesh_to_shared._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault < RID>, DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>> > ::~HashMap, JoltSoftBody3D::mesh_to_shared, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<RID, JoltSoftBody3D::Shared, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, JoltSoftBody3D::Shared> > >::~HashMap() */void HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>>::~HashMap(HashMap<RID,JoltSoftBody3D::Shared,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,JoltSoftBody3D::Shared>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::SoftBodySharedSettings::~SoftBodySharedSettings() */void JPH::SoftBodySharedSettings::~SoftBodySharedSettings(SoftBodySharedSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


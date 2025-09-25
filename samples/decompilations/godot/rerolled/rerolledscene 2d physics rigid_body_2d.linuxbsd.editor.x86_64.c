/* RigidBody2D::is_lock_rotation_enabled() const */RigidBody2D RigidBody2D::is_lock_rotation_enabled(RigidBody2D *this) {
   return this[0x651];
}
/* RigidBody2D::is_freeze_enabled() const */RigidBody2D RigidBody2D::is_freeze_enabled(RigidBody2D *this) {
   return this[0x652];
}
/* RigidBody2D::get_freeze_mode() const */undefined4 RigidBody2D::get_freeze_mode(RigidBody2D *this) {
   return *(undefined4*)( this + 0x654 );
}
/* RigidBody2D::get_mass() const */undefined4 RigidBody2D::get_mass(RigidBody2D *this) {
   return *(undefined4*)( this + 0x658 );
}
/* RigidBody2D::get_inertia() const */undefined4 RigidBody2D::get_inertia(RigidBody2D *this) {
   return *(undefined4*)( this + 0x65c );
}
/* RigidBody2D::get_center_of_mass_mode() const */undefined4 RigidBody2D::get_center_of_mass_mode(RigidBody2D *this) {
   return *(undefined4*)( this + 0x660 );
}
/* RigidBody2D::get_center_of_mass() const */RigidBody2D * __thiscall RigidBody2D::get_center_of_mass(RigidBody2D *this){
   return this + 0x664;
}
/* RigidBody2D::get_gravity_scale() const */undefined4 RigidBody2D::get_gravity_scale(RigidBody2D *this) {
   return *(undefined4*)( this + 0x678 );
}
/* RigidBody2D::get_linear_damp_mode() const */undefined4 RigidBody2D::get_linear_damp_mode(RigidBody2D *this) {
   return *(undefined4*)( this + 0x67c );
}
/* RigidBody2D::get_angular_damp_mode() const */undefined4 RigidBody2D::get_angular_damp_mode(RigidBody2D *this) {
   return *(undefined4*)( this + 0x680 );
}
/* RigidBody2D::get_linear_damp() const */undefined4 RigidBody2D::get_linear_damp(RigidBody2D *this) {
   return *(undefined4*)( this + 0x684 );
}
/* RigidBody2D::get_angular_damp() const */undefined4 RigidBody2D::get_angular_damp(RigidBody2D *this) {
   return *(undefined4*)( this + 0x688 );
}
/* RigidBody2D::get_linear_velocity() const */undefined8 RigidBody2D::get_linear_velocity(RigidBody2D *this) {
   return *(undefined8*)( this + 0x68c );
}
/* RigidBody2D::get_angular_velocity() const */undefined4 RigidBody2D::get_angular_velocity(RigidBody2D *this) {
   return *(undefined4*)( this + 0x694 );
}
/* RigidBody2D::is_using_custom_integrator() */RigidBody2D RigidBody2D::is_using_custom_integrator(RigidBody2D *this) {
   return this[0x6a4];
}
/* RigidBody2D::is_able_to_sleep() const */RigidBody2D RigidBody2D::is_able_to_sleep(RigidBody2D *this) {
   return this[0x650];
}
/* RigidBody2D::is_sleeping() const */RigidBody2D RigidBody2D::is_sleeping(RigidBody2D *this) {
   return this[0x698];
}
/* RigidBody2D::get_max_contacts_reported() const */undefined4 RigidBody2D::get_max_contacts_reported(RigidBody2D *this) {
   return *(undefined4*)( this + 0x69c );
}
/* RigidBody2D::get_contact_count() const */undefined4 RigidBody2D::get_contact_count(RigidBody2D *this) {
   return *(undefined4*)( this + 0x6a0 );
}
/* RigidBody2D::get_continuous_collision_detection_mode() const */undefined4 RigidBody2D::get_continuous_collision_detection_mode(RigidBody2D *this) {
   return *(undefined4*)( this + 0x6a8 );
}
/* RigidBody2D::is_contact_monitor_enabled() const */bool RigidBody2D::is_contact_monitor_enabled(RigidBody2D *this) {
   return *(long*)( this + 0x6b0 ) != 0;
}
/* RigidBody2D::set_linear_damp_mode(RigidBody2D::DampMode) */void RigidBody2D::set_linear_damp_mode(RigidBody2D *this, undefined4 param_2) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( this + 0x67c ) = param_2;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3c8 );
   Variant::Variant((Variant*)local_48, *(int*)( this + 0x67c ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 6, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_angular_damp_mode(RigidBody2D::DampMode) */void RigidBody2D::set_angular_damp_mode(RigidBody2D *this, undefined4 param_2) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( this + 0x680 ) = param_2;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3c8 );
   Variant::Variant((Variant*)local_48, *(int*)( this + 0x680 ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 7, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_max_contacts_reported(int) */void RigidBody2D::set_max_contacts_reported(RigidBody2D *this, int param_1) {
   long *plVar1;
   *(int*)( this + 0x69c ) = param_1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001002c6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x478 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
   return;
}
/* RigidBody2D::apply_central_impulse(Vector2 const&) */void RigidBody2D::apply_central_impulse(RigidBody2D *this, Vector2 *param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100302. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x3f0 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
   return;
}
/* RigidBody2D::apply_impulse(Vector2 const&, Vector2 const&) */void RigidBody2D::apply_impulse(RigidBody2D *this, Vector2 *param_1, Vector2 *param_2) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100345. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x400 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1, param_2);
   return;
}
/* RigidBody2D::apply_torque_impulse(float) */void RigidBody2D::apply_torque_impulse(RigidBody2D *this, float param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100386. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x3f8 ) )(param_1, plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::apply_central_force(Vector2 const&) */void RigidBody2D::apply_central_force(RigidBody2D *this, Vector2 *param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001003c2. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x408 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
   return;
}
/* RigidBody2D::apply_force(Vector2 const&, Vector2 const&) */void RigidBody2D::apply_force(RigidBody2D *this, Vector2 *param_1, Vector2 *param_2) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100405. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x410 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1, param_2);
   return;
}
/* RigidBody2D::apply_torque(float) */void RigidBody2D::apply_torque(RigidBody2D *this, float param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100446. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x418 ) )(param_1, plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::add_constant_central_force(Vector2 const&) */void RigidBody2D::add_constant_central_force(RigidBody2D *this, Vector2 *param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100482. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x420 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
   return;
}
/* RigidBody2D::add_constant_force(Vector2 const&, Vector2 const&) */void RigidBody2D::add_constant_force(RigidBody2D *this, Vector2 *param_1, Vector2 *param_2) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001004c5. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x428 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1, param_2);
   return;
}
/* RigidBody2D::add_constant_torque(float) */void RigidBody2D::add_constant_torque(RigidBody2D *this, float param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100506. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x430 ) )(param_1, plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::set_constant_force(Vector2 const&) */void RigidBody2D::set_constant_force(RigidBody2D *this, Vector2 *param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100542. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x438 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
   return;
}
/* RigidBody2D::get_constant_force() const */void RigidBody2D::get_constant_force(RigidBody2D *this) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100572. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x440 ) )(plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::set_constant_torque(float) */void RigidBody2D::set_constant_torque(RigidBody2D *this, float param_1) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001005b6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x448 ) )(param_1, plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::get_constant_torque() const */void RigidBody2D::get_constant_torque(RigidBody2D *this) {
   long *plVar1;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001005e2. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x450 ) )(plVar1, *(undefined8*)( this + 0x590 ));
   return;
}
/* RigidBody2D::set_continuous_collision_detection_mode(RigidBody2D::CCDMode) */void RigidBody2D::set_continuous_collision_detection_mode(RigidBody2D *this, undefined4 param_2) {
   long *plVar1;
   *(undefined4*)( this + 0x6a8 ) = param_2;
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   /* WARNING: Could not recover jumptable at 0x00100626. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x388 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_2);
   return;
}
/* RigidBody2D::set_mass(float) */void RigidBody2D::set_mass(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 <= 0.0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_mass", "scene/2d/physics/rigid_body_2d.cpp", 0x13e, "Condition \"p_mass <= 0\" is true.", 0, 0);
         return;
      }

   }
 else {
      *(float*)( this + 0x658 ) = param_1;
      plVar2 = (long*)PhysicsServer2D::get_singleton();
      pcVar1 = *(code**)( *plVar2 + 0x3c8 );
      Variant::Variant((Variant*)local_48, *(float*)( this + 0x658 ));
      ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 2, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_inertia(float) */void RigidBody2D::set_inertia(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0.0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_inertia", "scene/2d/physics/rigid_body_2d.cpp", 0x148, "Condition \"p_inertia < 0\" is true.", 0, 0);
         return;
      }

   }
 else {
      *(float*)( this + 0x65c ) = param_1;
      plVar2 = (long*)PhysicsServer2D::get_singleton();
      pcVar1 = *(code**)( *plVar2 + 0x3c8 );
      Variant::Variant((Variant*)local_48, *(float*)( this + 0x65c ));
      ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 3, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_gravity_scale(float) */void RigidBody2D::set_gravity_scale(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x678 ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3c8 );
   Variant::Variant((Variant*)local_48, *(float*)( this + 0x678 ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 5, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_linear_damp(float) */void RigidBody2D::set_linear_damp(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < _LC6) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_linear_damp", "scene/2d/physics/rigid_body_2d.cpp", 0x1a9, "Condition \"p_linear_damp < -1\" is true.", 0, 0);
         return;
      }

   }
 else {
      *(float*)( this + 0x684 ) = param_1;
      plVar2 = (long*)PhysicsServer2D::get_singleton();
      pcVar1 = *(code**)( *plVar2 + 0x3c8 );
      Variant::Variant((Variant*)local_48, *(float*)( this + 0x684 ));
      ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 8, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_angular_damp(float) */void RigidBody2D::set_angular_damp(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < _LC6) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("set_angular_damp", "scene/2d/physics/rigid_body_2d.cpp", 0x1b3, "Condition \"p_angular_damp < -1\" is true.", 0, 0);
         return;
      }

   }
 else {
      *(float*)( this + 0x688 ) = param_1;
      plVar2 = (long*)PhysicsServer2D::get_singleton();
      pcVar1 = *(code**)( *plVar2 + 0x3c8 );
      Variant::Variant((Variant*)local_48, *(float*)( this + 0x688 ));
      ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 9, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_angular_velocity(float) */void RigidBody2D::set_angular_velocity(RigidBody2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x694 ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3e0 );
   Variant::Variant((Variant*)local_48, *(float*)( this + 0x694 ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 2, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RigidBody2D::_reload_physics_characteristics() */void RigidBody2D::_reload_physics_characteristics(RigidBody2D *this) {
   long *plVar1;
   code *pcVar2;
   long in_FS_OFFSET;
   float fVar3;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x670 ) == 0) {
      plVar1 = (long*)PhysicsServer2D::get_singleton();
      pcVar2 = *(code**)( *plVar1 + 0x3c8 );
      Variant::Variant((Variant*)local_48, 0);
      ( *pcVar2 )(plVar1, *(undefined8*)( this + 0x590 ), 0, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      plVar1 = (long*)PhysicsServer2D::get_singleton();
      pcVar2 = *(code**)( *plVar1 + 0x3c8 );
      Variant::Variant((Variant*)local_48, 1);
   }
 else {
      plVar1 = (long*)PhysicsServer2D::get_singleton();
      pcVar2 = *(code**)( *plVar1 + 0x3c8 );
      fVar3 = *(float*)( *(long*)( this + 0x670 ) + 0x248 );
      if (*(char*)( *(long*)( this + 0x670 ) + 0x24c ) != '\0') {
         fVar3 = (float)( (uint)fVar3 ^ __LC11 );
      }

      Variant::Variant((Variant*)local_48, fVar3);
      ( *pcVar2 )(plVar1, *(undefined8*)( this + 0x590 ), 0, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      plVar1 = (long*)PhysicsServer2D::get_singleton();
      pcVar2 = *(code**)( *plVar1 + 0x3c8 );
      fVar3 = *(float*)( *(long*)( this + 0x670 ) + 0x240 );
      if (*(char*)( *(long*)( this + 0x670 ) + 0x244 ) != '\0') {
         fVar3 = (float)( (uint)fVar3 ^ __LC11 );
      }

      Variant::Variant((Variant*)local_48, fVar3);
   }

   ( *pcVar2 )(plVar1, *(undefined8*)( this + 0x590 ), 1, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_linear_velocity(Vector2 const&) */void RigidBody2D::set_linear_velocity(RigidBody2D *this, Vector2 *param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x68c ) = *(undefined8*)param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3e0 );
   Variant::Variant((Variant*)local_48, (Vector2*)( this + 0x68c ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 1, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_center_of_mass_mode(RigidBody2D::CenterOfMassMode) */void RigidBody2D::set_center_of_mass_mode(RigidBody2D *this, int param_2) {
   long *plVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   code *pcVar4;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x660 ) == param_2) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_00100efb;
   }

   *(int*)( this + 0x660 ) = param_2;
   if (param_2 == 0) {
      *(undefined8*)( this + 0x664 ) = 0;
      plVar1 = (long*)PhysicsServer2D::get_singleton();
      ( **(code**)( *plVar1 + 0x3d8 ) )(plVar1, *(undefined8*)( this + 0x590 ));
      if (*(float*)( this + 0x65c ) != 0.0) {
         plVar1 = (long*)PhysicsServer2D::get_singleton();
         pcVar4 = *(code**)( *plVar1 + 0x3c8 );
         Variant::Variant((Variant*)local_48, *(float*)( this + 0x65c ));
         uVar3 = *(undefined8*)( this + 0x590 );
         uVar2 = 3;
         goto LAB_00100e43;
      }

   }
 else if (param_2 == 1) {
      plVar1 = (long*)PhysicsServer2D::get_singleton();
      pcVar4 = *(code**)( *plVar1 + 0x3c8 );
      Variant::Variant((Variant*)local_48, (Vector2*)( this + 0x664 ));
      uVar3 = *(undefined8*)( this + 0x590 );
      uVar2 = 4;
      LAB_00100e43:( *pcVar4 )(plVar1, uVar3, uVar2, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Object::notify_property_list_changed();
      return;
   }

   LAB_00100efb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RigidBody2D::set_axis_velocity(Vector2 const&) */void RigidBody2D::set_axis_velocity(RigidBody2D *this, Vector2 *param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = Vector2::normalized();
   fVar3 = (float)Vector2::dot((Vector2*)&local_50);
   fVar4 = (float)*(undefined8*)( this + 0x68c ) - fVar3 * (float)local_50;
   fVar3 = (float)( ( ulong ) * (undefined8*)( this + 0x68c ) >> 0x20 ) - fVar3 * (float)( (ulong)local_50 >> 0x20 );
   *(ulong*)( this + 0x68c ) = CONCAT44(fVar3, fVar4);
   *(ulong*)( this + 0x68c ) = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) + fVar3, (float)*(undefined8*)param_1 + fVar4);
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3e0 );
   Variant::Variant((Variant*)local_48, (Vector2*)( this + 0x68c ));
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 1, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_sleeping(bool) */void RigidBody2D::set_sleeping(RigidBody2D *this, bool param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x698] = (RigidBody2D)param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3e0 );
   Variant::Variant((Variant*)local_48, (bool)this[0x698]);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 3, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_can_sleep(bool) */void RigidBody2D::set_can_sleep(RigidBody2D *this, bool param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x650] = (RigidBody2D)param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x3e0 );
   Variant::Variant((Variant*)local_48, param_1);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 4, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_use_custom_integrator(bool) */void RigidBody2D::set_use_custom_integrator(RigidBody2D *this, bool param_1) {
   long *plVar1;
   if (this[0x6a4] != (RigidBody2D)param_1) {
      this[0x6a4] = (RigidBody2D)param_1;
      plVar1 = (long*)PhysicsServer2D::get_singleton();
      /* WARNING: Could not recover jumptable at 0x00101171. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar1 + 0x498 ) )(plVar1, *(undefined8*)( this + 0x590 ), param_1);
      return;
   }

   return;
}
/* RigidBody2D::set_center_of_mass(Vector2 const&) */void RigidBody2D::set_center_of_mass(RigidBody2D *this, Vector2 *param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(float*)( this + 0x664 ) != *(float*)param_1 ) || ( *(float*)( this + 0x668 ) != *(float*)( param_1 + 4 ) )) {
      if (*(int*)( this + 0x660 ) != 1) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("set_center_of_mass", "scene/2d/physics/rigid_body_2d.cpp", 0x172, "Condition \"center_of_mass_mode != CENTER_OF_MASS_MODE_CUSTOM\" is true.", 0, 0);
            return;
         }

         goto LAB_0010128a;
      }

      *(undefined8*)( this + 0x664 ) = *(undefined8*)param_1;
      plVar2 = (long*)PhysicsServer2D::get_singleton();
      pcVar1 = *(code**)( *plVar2 + 0x3c8 );
      Variant::Variant((Variant*)local_48, (Vector2*)( this + 0x664 ));
      ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 4, local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010128a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 4;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
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

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Error Object::emit_signal<Node*>(StringName const&, Node*) [clone .isra.0] */void Object::emit_signal<Node*>(Object *this, StringName *param_1, Node *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_68[2];
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (Object*)param_2);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   local_68[0] = (Variant*)local_58;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, param_1, local_68, 1);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RigidBody2D::get_physics_material_override() const */void RigidBody2D::get_physics_material_override(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x670 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x670 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* RigidBody2D::set_freeze_mode(RigidBody2D::FreezeMode) */void RigidBody2D::set_freeze_mode(RigidBody2D *this, int param_2) {
   if (*(int*)( this + 0x654 ) == param_2) {
      return;
   }

   *(int*)( this + 0x654 ) = param_2;
   if (this[0x652] == (RigidBody2D)0x0) {
      if (this[0x651] != (RigidBody2D)0x0) {
         CollisionObject2D::set_body_mode(this, 3);
         return;
      }

      CollisionObject2D::set_body_mode(this, 2);
      return;
   }

   if (param_2 == 0) {
      CollisionObject2D::set_body_mode(this, 0);
      return;
   }

   if (param_2 != 1) {
      return;
   }

   CollisionObject2D::set_body_mode(this, 1);
   return;
}
/* RigidBody2D::set_freeze_enabled(bool) */void RigidBody2D::set_freeze_enabled(RigidBody2D *this, bool param_1) {
   if (this[0x652] == (RigidBody2D)param_1) {
      return;
   }

   this[0x652] = (RigidBody2D)param_1;
   if (!param_1) {
      if (this[0x651] != (RigidBody2D)0x0) {
         CollisionObject2D::set_body_mode(this, 3);
         return;
      }

      CollisionObject2D::set_body_mode(this, 2);
      return;
   }

   if (*(int*)( this + 0x654 ) == 0) {
      CollisionObject2D::set_body_mode(this, 0);
      return;
   }

   if (*(int*)( this + 0x654 ) != 1) {
      return;
   }

   CollisionObject2D::set_body_mode(this, 1);
   return;
}
/* RigidBody2D::set_lock_rotation_enabled(bool) */void RigidBody2D::set_lock_rotation_enabled(RigidBody2D *this, bool param_1) {
   if (this[0x651] == (RigidBody2D)param_1) {
      return;
   }

   this[0x651] = (RigidBody2D)param_1;
   if (this[0x652] == (RigidBody2D)0x0) {
      if (param_1) {
         CollisionObject2D::set_body_mode(this, 3);
         return;
      }

      CollisionObject2D::set_body_mode(this, 2);
      return;
   }

   if (*(int*)( this + 0x654 ) == 0) {
      CollisionObject2D::set_body_mode(this, 0);
      return;
   }

   if (*(int*)( this + 0x654 ) != 1) {
      return;
   }

   CollisionObject2D::set_body_mode(this, 1);
   return;
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
/* CowData<RigidBody2D::ShapePair>::_copy_on_write() [clone .isra.0] */void CowData<RigidBody2D::ShapePair>::_copy_on_write(CowData<RigidBody2D::ShapePair> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar5 = 0x10;
   __n = lVar2 * 0xc;
   if (__n != 0) {
      uVar5 = __n - 1 | __n - 1 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
   if (puVar4 != (undefined8*)0x0) {
      *puVar4 = 1;
      puVar4[1] = lVar2;
      memcpy(puVar4 + 2, *(void**)this, __n);
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

      }

      *(undefined8**)this = puVar4 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* RigidBody2D::_body_enter_tree(ObjectID) */void RigidBody2D::_body_enter_tree(RigidBody2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   undefined1 *puVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   code *pcVar14;
   RID RVar15;
   Object *pOVar16;
   ulong uVar17;
   long lVar18;
   uint uVar19;
   ulong *puVar20;
   char *pcVar21;
   uint uVar22;
   long lVar23;
   undefined8 uVar24;
   ulong uVar25;
   Variant *pVVar26;
   ulong uVar27;
   uint uVar28;
   long in_FS_OFFSET;
   bool bVar29;
   ulong local_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   int local_b8[6];
   int local_a0[2];
   undefined1 local_98[16];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   uVar19 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar19 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar29 = ObjectDB::spin_lock._0_1_ == (RID)0x0;
         RVar15 = ObjectDB::spin_lock._0_1_;
         if (bVar29) {
            ObjectDB::spin_lock._0_1_ = (RID)0x1;
            RVar15 = (RID)0x0;
         }

         UNLOCK();
         if (bVar29) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = RVar15;
         do {} while ( ObjectDB::spin_lock._0_1_ != (RID)0x0 );
      }
;
      puVar20 = (ulong*)( (ulong)uVar19 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar20 & 0x7fffffffff )) {
         uVar17 = puVar20[1];
         ObjectDB::spin_lock._0_1_ = (RID)0x0;
         if (( uVar17 != 0 ) && ( pOVar16 = (Object*)__dynamic_cast(uVar17, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar16 != (Object*)0x0) {
            puVar4 = *(undefined1**)( this + 0x6b0 );
            if (puVar4 == (undefined1*)0x0) {
               if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101ecb;
               uVar24 = 0x25;
               pcVar21 = "Parameter \"contact_monitor\" is null.";
               goto LAB_00101d89;
            }

            lVar5 = *(long*)( puVar4 + 0x10 );
            if (( lVar5 != 0 ) && ( *(int*)( puVar4 + 0x34 ) != 0 )) {
               uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 4 ));
               lVar18 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 8 );
               uVar17 = param_2 * 0x3ffff - 1;
               uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
               uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
               uVar17 = uVar17 >> 0x16 ^ uVar17;
               uVar25 = uVar17 & 0xffffffff;
               if ((int)uVar17 == 0) {
                  uVar25 = 1;
               }

               auVar6._8_8_ = 0;
               auVar6._0_8_ = uVar25 * lVar18;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar27;
               lVar23 = SUB168(auVar6 * auVar10, 8);
               uVar19 = *(uint*)( *(long*)( puVar4 + 0x18 ) + lVar23 * 4 );
               uVar22 = SUB164(auVar6 * auVar10, 8);
               if (uVar19 != 0) {
                  uVar28 = 0;
                  while (( uVar19 != (uint)uVar25 || ( param_2 != *(ulong*)( *(long*)( lVar5 + lVar23 * 8 ) + 0x10 ) ) )) {
                     uVar28 = uVar28 + 1;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(uVar22 + 1) * lVar18;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar27;
                     lVar23 = SUB168(auVar7 * auVar11, 8);
                     uVar19 = *(uint*)( *(long*)( puVar4 + 0x18 ) + lVar23 * 4 );
                     uVar22 = SUB164(auVar7 * auVar11, 8);
                     if (( uVar19 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar19 * lVar18,auVar12._8_8_ = 0,auVar12._0_8_ = uVar27,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 4 ) + uVar22 ) - SUB164(auVar8 * auVar12, 8)) * lVar18,auVar13._8_8_ = 0,auVar13._0_8_ = uVar27,SUB164(auVar9 * auVar13, 8) < uVar28) goto LAB_00101d60;
                  }
;
                  lVar5 = *(long*)( lVar5 + (ulong)uVar22 * 8 );
                  if (lVar5 != 0) {
                     if (*(char*)( lVar5 + 0x20 ) != '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101ecb;
                        uVar24 = 0x28;
                        pcVar21 = "Condition \"E->value.in_scene\" is true.";
                        goto LAB_00101d89;
                     }

                     *puVar4 = 1;
                     lVar18 = SceneStringNames::singleton;
                     *(undefined1*)( lVar5 + 0x20 ) = 1;
                     Variant::Variant((Variant*)local_b8, pOVar16);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar18 + 0x148, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar18 = *(long*)( lVar5 + 0x30 );
                     if (lVar18 == 0) goto LAB_00101cfb;
                     lVar23 = 0;
                     goto LAB_00101bcb;
                  }

               }

            }

            LAB_00101d60:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar24 = 0x27;
               pcVar21 = "Condition \"!E\" is true.";
               goto LAB_00101d89;
            }

            goto LAB_00101ecb;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = (RID)0x0;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar24 = 0x24;
      pcVar21 = "Parameter \"node\" is null.";
      LAB_00101d89:_err_print_error("_body_enter_tree", "scene/2d/physics/rigid_body_2d.cpp", uVar24, pcVar21, 0, 0);
      return;
   }

   LAB_00101ecb:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00101bcb:do {
      lVar18 = *(long*)( lVar18 + -8 );
      if ((int)lVar18 <= (int)lVar23) break;
      if (lVar18 <= lVar23) {
         LAB_00101db0:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar23, lVar18, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar14 = (code*)invalidInstructionException();
         ( *pcVar14 )();
      }

      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar5 + 0x30 ));
      lVar18 = *(long*)( lVar5 + 0x30 );
      iVar2 = *(int*)( lVar18 + 4 + lVar23 * 0xc );
      if (lVar18 == 0) {
         lVar18 = 0;
         goto LAB_00101db0;
      }

      lVar18 = *(long*)( lVar18 + -8 );
      if (lVar18 <= lVar23) goto LAB_00101db0;
      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar5 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar5 + 0x30 ) + lVar23 * 0xc );
      lVar18 = SceneStringNames::singleton + 0x140;
      local_f0 = *(ulong*)( lVar5 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar16);
      Variant::Variant(local_88, iVar3);
      pVVar26 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar18, &local_e8, 4);
      do {
         pVVar1 = pVVar26 + -0x18;
         pVVar26 = pVVar26 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar26 != (Variant*)local_b8 );
      lVar18 = *(long*)( lVar5 + 0x30 );
      lVar23 = lVar23 + 1;
   }
 while ( lVar18 != 0 );
   LAB_00101cfb:**(undefined1**)( this + 0x6b0 ) = 0;
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_00101ecb;
}
/* RigidBody2D::_body_exit_tree(ObjectID) */void RigidBody2D::_body_exit_tree(RigidBody2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   undefined1 *puVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   code *pcVar14;
   RID RVar15;
   Object *pOVar16;
   ulong uVar17;
   long lVar18;
   uint uVar19;
   ulong *puVar20;
   char *pcVar21;
   uint uVar22;
   long lVar23;
   undefined8 uVar24;
   ulong uVar25;
   Variant *pVVar26;
   ulong uVar27;
   uint uVar28;
   long in_FS_OFFSET;
   bool bVar29;
   ulong local_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   int local_b8[6];
   int local_a0[2];
   undefined1 local_98[16];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   uVar19 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar19 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar29 = ObjectDB::spin_lock._0_1_ == (RID)0x0;
         RVar15 = ObjectDB::spin_lock._0_1_;
         if (bVar29) {
            ObjectDB::spin_lock._0_1_ = (RID)0x1;
            RVar15 = (RID)0x0;
         }

         UNLOCK();
         if (bVar29) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = RVar15;
         do {} while ( ObjectDB::spin_lock._0_1_ != (RID)0x0 );
      }
;
      puVar20 = (ulong*)( (ulong)uVar19 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar20 & 0x7fffffffff )) {
         uVar17 = puVar20[1];
         ObjectDB::spin_lock._0_1_ = (RID)0x0;
         if (( uVar17 != 0 ) && ( pOVar16 = (Object*)__dynamic_cast(uVar17, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar16 != (Object*)0x0) {
            puVar4 = *(undefined1**)( this + 0x6b0 );
            if (puVar4 == (undefined1*)0x0) {
               if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001024db;
               uVar24 = 0x3a;
               pcVar21 = "Parameter \"contact_monitor\" is null.";
               goto LAB_00102399;
            }

            lVar5 = *(long*)( puVar4 + 0x10 );
            if (( lVar5 != 0 ) && ( *(int*)( puVar4 + 0x34 ) != 0 )) {
               uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 4 ));
               lVar18 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 8 );
               uVar17 = param_2 * 0x3ffff - 1;
               uVar17 = ( uVar17 ^ uVar17 >> 0x1f ) * 0x15;
               uVar17 = ( uVar17 ^ uVar17 >> 0xb ) * 0x41;
               uVar17 = uVar17 >> 0x16 ^ uVar17;
               uVar25 = uVar17 & 0xffffffff;
               if ((int)uVar17 == 0) {
                  uVar25 = 1;
               }

               auVar6._8_8_ = 0;
               auVar6._0_8_ = uVar25 * lVar18;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar27;
               lVar23 = SUB168(auVar6 * auVar10, 8);
               uVar19 = *(uint*)( *(long*)( puVar4 + 0x18 ) + lVar23 * 4 );
               uVar22 = SUB164(auVar6 * auVar10, 8);
               if (uVar19 != 0) {
                  uVar28 = 0;
                  while (( uVar19 != (uint)uVar25 || ( param_2 != *(ulong*)( *(long*)( lVar5 + lVar23 * 8 ) + 0x10 ) ) )) {
                     uVar28 = uVar28 + 1;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(uVar22 + 1) * lVar18;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar27;
                     lVar23 = SUB168(auVar7 * auVar11, 8);
                     uVar19 = *(uint*)( *(long*)( puVar4 + 0x18 ) + lVar23 * 4 );
                     uVar22 = SUB164(auVar7 * auVar11, 8);
                     if (( uVar19 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar19 * lVar18,auVar12._8_8_ = 0,auVar12._0_8_ = uVar27,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar4 + 0x30 ) * 4 ) + uVar22 ) - SUB164(auVar8 * auVar12, 8)) * lVar18,auVar13._8_8_ = 0,auVar13._0_8_ = uVar27,SUB164(auVar9 * auVar13, 8) < uVar28) goto LAB_00102370;
                  }
;
                  lVar5 = *(long*)( lVar5 + (ulong)uVar22 * 8 );
                  if (lVar5 != 0) {
                     if (*(char*)( lVar5 + 0x20 ) == '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001024db;
                        uVar24 = 0x3d;
                        pcVar21 = "Condition \"!E->value.in_scene\" is true.";
                        goto LAB_00102399;
                     }

                     *(undefined1*)( lVar5 + 0x20 ) = 0;
                     lVar18 = SceneStringNames::singleton;
                     *puVar4 = 1;
                     Variant::Variant((Variant*)local_b8, pOVar16);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar18 + 0x158, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar18 = *(long*)( lVar5 + 0x30 );
                     if (lVar18 == 0) goto LAB_0010230b;
                     lVar23 = 0;
                     goto LAB_001021db;
                  }

               }

            }

            LAB_00102370:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar24 = 0x3c;
               pcVar21 = "Condition \"!E\" is true.";
               goto LAB_00102399;
            }

            goto LAB_001024db;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = (RID)0x0;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar24 = 0x39;
      pcVar21 = "Parameter \"node\" is null.";
      LAB_00102399:_err_print_error("_body_exit_tree", "scene/2d/physics/rigid_body_2d.cpp", uVar24, pcVar21, 0, 0);
      return;
   }

   LAB_001024db:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_001021db:do {
      lVar18 = *(long*)( lVar18 + -8 );
      if ((int)lVar18 <= (int)lVar23) break;
      if (lVar18 <= lVar23) {
         LAB_001023c0:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar23, lVar18, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar14 = (code*)invalidInstructionException();
         ( *pcVar14 )();
      }

      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar5 + 0x30 ));
      lVar18 = *(long*)( lVar5 + 0x30 );
      iVar2 = *(int*)( lVar18 + 4 + lVar23 * 0xc );
      if (lVar18 == 0) {
         lVar18 = 0;
         goto LAB_001023c0;
      }

      lVar18 = *(long*)( lVar18 + -8 );
      if (lVar18 <= lVar23) goto LAB_001023c0;
      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar5 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar5 + 0x30 ) + lVar23 * 0xc );
      lVar18 = SceneStringNames::singleton + 0x150;
      local_f0 = *(ulong*)( lVar5 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar16);
      Variant::Variant(local_88, iVar3);
      pVVar26 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar18, &local_e8, 4);
      do {
         pVVar1 = pVVar26 + -0x18;
         pVVar26 = pVVar26 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar26 != (Variant*)local_b8 );
      lVar18 = *(long*)( lVar5 + 0x30 );
      lVar23 = lVar23 + 1;
   }
 while ( lVar18 != 0 );
   LAB_0010230b:**(undefined1**)( this + 0x6b0 ) = 0;
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_001024db;
}
/* RigidBody2D::_sync_body_state(PhysicsDirectBodyState2D*) */void RigidBody2D::_sync_body_state(RigidBody2D *this, PhysicsDirectBodyState2D *param_1) {
   long lVar1;
   RigidBody2D RVar2;
   RigidBody2D RVar3;
   long in_FS_OFFSET;
   undefined4 uVar4;
   undefined8 uVar5;
   undefined8 local_38;
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0x652] == (RigidBody2D)0x0 ) || ( *(int*)( this + 0x654 ) != 1 )) {
      CanvasItem::set_block_transform_notify(SUB81(this, 0));
      ( **(code**)( *(long*)param_1 + 0x1b0 ) )(&local_38, param_1);
      Node2D::set_global_transform((Transform2D*)this);
      CanvasItem::set_block_transform_notify(SUB81(this, 0));
   }

   uVar5 = ( **(code**)( *(long*)param_1 + 400 ) )(param_1);
   lVar1 = *(long*)param_1;
   *(undefined8*)( this + 0x68c ) = uVar5;
   uVar4 = ( **(code**)( lVar1 + 0x1a0 ) )(param_1);
   lVar1 = *(long*)param_1;
   *(undefined4*)( this + 0x694 ) = uVar4;
   uVar4 = ( **(code**)( lVar1 + 0x238 ) )(param_1);
   RVar3 = this[0x698];
   *(undefined4*)( this + 0x6a0 ) = uVar4;
   RVar2 = ( RigidBody2D )(**(code**)( *(long*)param_1 + 0x230 ))(param_1);
   if (RVar3 != RVar2) {
      RVar3 = ( RigidBody2D )(**(code**)( *(long*)param_1 + 0x230 ))(param_1);
      this[0x698] = RVar3;
      local_38 = 0;
      local_30 = (undefined1[16])0x0;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, SceneStringNames::singleton + 0x78, 0, 0);
      if (Variant::needs_deinit[(int)local_38] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::_apply_body_mode() */void RigidBody2D::_apply_body_mode(RigidBody2D *this) {
   if (this[0x652] == (RigidBody2D)0x0) {
      if (this[0x651] != (RigidBody2D)0x0) {
         CollisionObject2D::set_body_mode(this, 3);
         return;
      }

      CollisionObject2D::set_body_mode(this, 2);
      return;
   }

   if (*(int*)( this + 0x654 ) != 0) {
      if (*(int*)( this + 0x654 ) != 1) {
         return;
      }

      CollisionObject2D::set_body_mode(this, 1);
      return;
   }

   CollisionObject2D::set_body_mode(this, 0);
   return;
}
/* RigidBody2D::_notification(int) */void RigidBody2D::_notification(RigidBody2D *this, int param_1) {
   long lVar1;
   if (param_1 == 10) {
      lVar1 = Engine::get_singleton();
      if (*(char*)( lVar1 + 0xc0 ) != '\0') {
         CanvasItem::set_notify_local_transform(SUB81(this, 0));
         return;
      }

   }
 else if (param_1 == 0x23) {
      Node::update_configuration_warnings();
      return;
   }

   return;
}
/* RigidBody2D::_validate_property(PropertyInfo&) const */void RigidBody2D::_validate_property(RigidBody2D *this, PropertyInfo *param_1) {
   long lVar1;
   char cVar2;
   if (( *(int*)( this + 0x660 ) == 1 ) || ( cVar2 = String::operator ==((String*)( param_1 + 8 ), "center_of_mass") ),cVar2 == '\0') {
      lVar1 = *(long*)( this + 0x6b0 );
   }
 else {
      lVar1 = *(long*)( this + 0x6b0 );
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   if (( lVar1 == 0 ) && ( cVar2 = String::operator ==((String*)( param_1 + 8 ), "max_contacts_reported") ),cVar2 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   return;
}
/* RigidBody2D::RigidBody2D() */void RigidBody2D::RigidBody2D(RigidBody2D *this) {
   code *pcVar1;
   undefined8 uVar2;
   long *plVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   PhysicsBody2D::PhysicsBody2D((PhysicsBody2D*)this, 2);
   this[0x652] = (RigidBody2D)0x0;
   *(undefined***)this = &PTR__initialize_classv_00121e70;
   *(undefined2*)( this + 0x650 ) = 1;
   *(undefined8*)( this + 0x654 ) = 0x3f80000000000000;
   *(undefined8*)( this + 0x65c ) = 0;
   *(undefined8*)( this + 0x664 ) = 0;
   *(undefined8*)( this + 0x670 ) = 0;
   *(undefined8*)( this + 0x678 ) = 0x3f800000;
   *(undefined8*)( this + 0x680 ) = 0;
   *(undefined8*)( this + 0x688 ) = 0;
   *(undefined8*)( this + 0x690 ) = 0;
   this[0x698] = (RigidBody2D)0x0;
   *(undefined8*)( this + 0x69c ) = 0;
   this[0x6a4] = (RigidBody2D)0x0;
   *(undefined4*)( this + 0x6a8 ) = 0;
   *(undefined8*)( this + 0x6b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x6b8 ), "_integrate_forces", false);
   this[0x6c0] = (RigidBody2D)0x0;
   *(undefined8*)( this + 0x6c8 ) = 0;
   plVar3 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar3 + 0x4a8 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(undefined**)( this_00 + 0x20 ) = &_LC34;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined***)this_00 = &PTR_hash_00122288;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = _body_state_changed;
   *(RigidBody2D**)( this_00 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "RigidBody2D::_body_state_changed";
   Callable::Callable(aCStack_48, this_00);
   ( *pcVar1 )(plVar3, *(undefined8*)( this + 0x590 ), aCStack_48);
   Callable::~Callable(aCStack_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::set_physics_material_override(Ref<PhysicsMaterial> const&) */void RigidBody2D::set_physics_material_override(RigidBody2D *this, Ref *param_1) {
   Callable *pCVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   RigidBody2D aRStack_48[24];
   long local_30;
   pCVar1 = *(Callable**)( this + 0x670 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pCVar1 == (Callable*)0x0) {
      if (*(long*)param_1 == 0) goto LAB_00102a00;
      *(long*)( this + 0x670 ) = *(long*)param_1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         pOVar4 = (Object*)0x0;
         LAB_001029a0:*(undefined8*)( this + 0x670 ) = 0;
         goto LAB_001029ab;
      }

      LAB_001029c0:pOVar4 = *(Object**)( this + 0x670 );
   }
 else {
      create_custom_callable_function_pointer<RigidBody2D>(aRStack_48, (char*)this, (_func_void*)"&RigidBody2D::_reload_physics_characteristics");
      Resource::disconnect_changed(pCVar1);
      Callable::~Callable((Callable*)aRStack_48);
      pOVar2 = *(Object**)param_1;
      pOVar4 = *(Object**)( this + 0x670 );
      if (pOVar2 != pOVar4) {
         *(Object**)( this + 0x670 ) = pOVar2;
         if (pOVar2 == (Object*)0x0) {
            LAB_001029ab:if (pOVar4 == (Object*)0x0) goto LAB_00102a00;
         }
 else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') goto LAB_001029a0;
            if (pOVar4 == (Object*)0x0) goto LAB_001029c0;
         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

         goto LAB_001029c0;
      }

   }

   if (pOVar4 != (Object*)0x0) {
      create_custom_callable_function_pointer<RigidBody2D>(aRStack_48, (char*)this, (_func_void*)"&RigidBody2D::_reload_physics_characteristics");
      Resource::connect_changed((Callable*)pOVar4, (uint)aRStack_48);
      Callable::~Callable((Callable*)aRStack_48);
   }

   LAB_00102a00:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   _reload_physics_characteristics(this);
   return;
}
/* RigidBody2D::set_contact_monitor(bool) */void RigidBody2D::set_contact_monitor(RigidBody2D *this, bool param_1) {
   ulong uVar1;
   code *pcVar2;
   long *plVar3;
   undefined1 *puVar4;
   uint uVar5;
   ulong *puVar6;
   ContactMonitor *pCVar7;
   long *plVar8;
   long in_FS_OFFSET;
   bool bVar9;
   RigidBody2D local_58[24];
   long local_40;
   pCVar7 = *(ContactMonitor**)( this + 0x6b0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == ( pCVar7 != (ContactMonitor*)0x0 )) {
      LAB_00102d0b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (param_1) {
         puVar4 = (undefined1*)operator_new(0x38, "");
         *(undefined8*)( puVar4 + 0x30 ) = 2;
         *(undefined1(*) [16])( puVar4 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar4 + 0x20 ) = (undefined1[16])0x0;
         *(undefined1**)( this + 0x6b0 ) = puVar4;
         *puVar4 = 0;
      }
 else {
         if (*pCVar7 != (ContactMonitor)0x0) {
            _err_print_error("set_contact_monitor", "scene/2d/physics/rigid_body_2d.cpp", 0x256, "Condition \"contact_monitor->locked\" is true.", "Can\'t disable contact monitoring during in/out callback. Use call_deferred(\"set_contact_monitor\", false) instead.", 0, 0);
            goto LAB_00102d0b;
         }

         plVar8 = *(long**)( pCVar7 + 0x20 );
         if (plVar8 != (long*)0x0) {
            do {
               uVar5 = (uint)plVar8[2] & 0xffffff;
               if (uVar5 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     local_58[0] = (RigidBody2D)0x0;
                     LOCK();
                     bVar9 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar9) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar9) break;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
                  if (( (ulong)plVar8[2] >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
                     uVar1 = puVar6[1];
                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (( uVar1 != 0 ) && ( plVar3 = (long*)__dynamic_cast(uVar1, &Object::typeinfo, &Node::typeinfo, 0) ),plVar3 != (long*)0x0) {
                        pcVar2 = *(code**)( *plVar3 + 0x110 );
                        create_custom_callable_function_pointer<RigidBody2D,ObjectID>(local_58, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_enter_tree");
                        ( *pcVar2 )(plVar3, SceneStringNames::singleton + 0x38, local_58);
                        Callable::~Callable((Callable*)local_58);
                        pcVar2 = *(code**)( *plVar3 + 0x110 );
                        create_custom_callable_function_pointer<RigidBody2D,ObjectID>(local_58, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_exit_tree");
                        ( *pcVar2 )(plVar3, SceneStringNames::singleton + 0x40, local_58);
                        Callable::~Callable((Callable*)local_58);
                     }

                  }
 else {
                     ObjectDB::spin_lock._0_1_ = '\0';
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               plVar8 = (long*)*plVar8;
            }
 while ( plVar8 != (long*)0x0 );
            pCVar7 = *(ContactMonitor**)( this + 0x6b0 );
         }

         memdelete<RigidBody2D::ContactMonitor>(pCVar7);
         *(undefined8*)( this + 0x6b0 ) = 0;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Object::notify_property_list_changed();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::~RigidBody2D() */void RigidBody2D::~RigidBody2D(RigidBody2D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00121e70;
   if (*(ContactMonitor**)( this + 0x6b0 ) != (ContactMonitor*)0x0) {
      memdelete<RigidBody2D::ContactMonitor>(*(ContactMonitor**)( this + 0x6b0 ));
   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x6b8 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x670 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x670 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00121b78;
   if (*(long*)( this + 0x648 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x648 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
            return;
         }

      }

   }

   CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
   return;
}
/* RigidBody2D::~RigidBody2D() */void RigidBody2D::~RigidBody2D(RigidBody2D *this) {
   ~RigidBody2D(this)
   ;;
   operator_delete(this, 0x6d0);
   return;
}
/* RigidBody2D::get_colliding_bodies() const */Array *RigidBody2D::get_colliding_bodies(void) {
   Object *pOVar1;
   ulong uVar2;
   Variant *pVVar3;
   uint uVar4;
   ulong *puVar5;
   long in_RSI;
   uint uVar6;
   Array *in_RDI;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   bool bVar8;
   Array local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x6b0 ) == 0) {
      _err_print_error("get_colliding_bodies", "scene/2d/physics/rigid_body_2d.cpp", 0x23f, "Parameter \"contact_monitor\" is null.", 0, 0);
      Array::Array(in_RDI);
      local_50 = (undefined1[16])0x0;
      local_68 = "Node2D";
      local_58 = 0;
      local_70 = 0;
      local_60 = 6;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_68, (StrRange*)&local_70, false);
      Array::set_typed((uint)in_RDI, (StringName*)0x18, (Variant*)&local_68);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      LAB_001030c8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return in_RDI;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Array::Array(local_78);
   local_50 = (undefined1[16])0x0;
   local_68 = "Node2D";
   local_58 = 0;
   local_70 = 0;
   local_60 = 6;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (StrRange*)&local_70, false);
   uVar6 = (uint)local_78;
   Array::set_typed(uVar6, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Array::resize(uVar6);
   puVar7 = *(undefined8**)( *(long*)( in_RSI + 0x6b0 ) + 0x20 );
   joined_r0x00102f66:if (puVar7 != (undefined8*)0x0) {
      do {
         uVar4 = (uint)puVar7[2] & 0xffffff;
         if (uVar4 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar2 = (ulong)local_68 >> 8;
               local_68 = (char*)( uVar2 << 8 );
               LOCK();
               bVar8 = (char)ObjectDB::spin_lock == '\0';
               if (bVar8) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar8) break;
               local_68 = (char*)( uVar2 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar5 = (ulong*)( (ulong)uVar4 * 0x10 + ObjectDB::object_slots );
            if (( (ulong)puVar7[2] >> 0x18 & 0x7fffffffff ) == ( *puVar5 & 0x7fffffffff )) {
               pOVar1 = (Object*)puVar5[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (pOVar1 != (Object*)0x0) goto code_r0x00102fb5;
            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         Array::size();
         Array::resize(uVar6);
         puVar7 = (undefined8*)*puVar7;
         if (puVar7 == (undefined8*)0x0) break;
      }
 while ( true );
   }

   Array::Array(in_RDI, local_78);
   Array::~Array(local_78);
   goto LAB_001030c8;
   code_r0x00102fb5:Variant::Variant((Variant*)&local_58, pOVar1);
   pVVar3 = (Variant*)Array::operator [](uVar6);
   if (pVVar3 == (Variant*)&local_58) {
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = (int)local_58;
      *(undefined8*)( pVVar3 + 8 ) = local_50._0_8_;
      *(undefined8*)( pVVar3 + 0x10 ) = local_50._8_8_;
   }

   puVar7 = (undefined8*)*puVar7;
   goto joined_r0x00102f66;
}
/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (RigidBody2D::*)(float)>(MethodDefinition, void (RigidBody2D::*)(float)) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>(MethodDefinition *param_1, _func_void_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<RigidBody2D,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* ClassDB::bind_method<MethodDefinition, float (RigidBody2D::*)()
   const>(MethodDefinition, float (RigidBody2D::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>(MethodDefinition *param_1, _func_float *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<RigidBody2D,float>(param_2);
   ClassDB::bind_methodfi(1, pMVar2, false, param_1, (Variant**)0x0, 0);
   if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (MethodBind*)0x0;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RigidBody2D::get_configuration_warnings() const */void RigidBody2D::get_configuration_warnings(void) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long *in_RSI;
   long in_FS_OFFSET;
   float fVar4;
   double dVar5;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x290 ) )(local_48);
   CollisionObject2D::get_configuration_warnings();
   fVar4 = (float)Vector2::length();
   dVar5 = (double)fVar4 - __LC91;
   if (dVar5 < 0.0) {
      dVar5 = (double)( (ulong)dVar5 ^ __LC93 );
   }

   if (dVar5 <= __LC94) {
      fVar4 = (float)Vector2::length();
      dVar5 = (double)fVar4 - __LC91;
      if (dVar5 < 0.0) {
         dVar5 = (double)( (ulong)dVar5 ^ __LC93 );
      }

      if (dVar5 <= __LC94) goto LAB_001036c8;
   }

   local_60 = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Size changes to RigidBody2D will be overridden by the physics engine when running.\nChange the size in children collision shapes instead.";
   local_68 = 0;
   local_50 = 0x88;
   String::parse_latin1((StrRange*)&local_68);
   RTR((String*)&local_58, (String*)&local_68);
   Vector<String>::push_back();
   pcVar3 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   LAB_001036c8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* RigidBody2D::_bind_methods() */void RigidBody2D::_bind_methods(void) {
   char cVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined *puVar11;
   MethodBind *pMVar12;
   undefined *puVar13;
   uint uVar14;
   long in_FS_OFFSET;
   undefined8 local_2a0;
   undefined8 local_298;
   undefined8 local_290;
   long local_288;
   undefined8 local_280;
   undefined8 local_278;
   long local_270;
   undefined8 local_268;
   undefined8 local_260;
   long local_258;
   undefined8 local_250;
   undefined8 local_248;
   long local_240;
   undefined8 local_238;
   long local_230;
   long local_228[6];
   long local_1f8[6];
   long local_1c8;
   undefined8 local_1c0[5];
   char *local_198;
   undefined8 local_190;
   StringName local_188[8];
   undefined4 local_180;
   undefined8 local_178;
   undefined4 local_170;
   undefined *local_168;
   long local_160;
   undefined1 local_158[16];
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128[2];
   undefined8 local_118;
   undefined8 local_110;
   Vector<int> local_108[8];
   undefined8 local_100;
   undefined8 local_f0;
   Variant *local_e8[2];
   char *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   char *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Vector2 *local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar11 = PTR__LC102_00122de0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHOD<char_const*>((char*)&local_168, "set_mass");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_mass, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_mass", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_mass, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_inertia", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_inertia, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_inertia");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_inertia, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_center_of_mass_mode");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::CenterOfMassMode>(set_center_of_mass_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_center_of_mass_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::CenterOfMassMode>(get_center_of_mass_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_center_of_mass");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(set_center_of_mass);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_center_of_mass", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(get_center_of_mass);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_physics_material_override");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Ref<PhysicsMaterial>const&>(set_physics_material_override);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_physics_material_override", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Ref<PhysicsMaterial>>(get_physics_material_override);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_gravity_scale");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_gravity_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_gravity_scale", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_gravity_scale, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_linear_damp_mode");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::DampMode>(set_linear_damp_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_linear_damp_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::DampMode>(get_linear_damp_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_angular_damp_mode");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::DampMode>(set_angular_damp_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_angular_damp_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::DampMode>(get_angular_damp_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_linear_damp");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_linear_damp, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_linear_damp", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_linear_damp, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_angular_damp");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_angular_damp, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_angular_damp", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_angular_damp, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_linear_velocity");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(set_linear_velocity);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_linear_velocity", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2>(get_linear_velocity);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_angular_velocity");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_angular_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_angular_velocity", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_angular_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_max_contacts_reported");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,int>(set_max_contacts_reported);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_max_contacts_reported", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,int>(get_max_contacts_reported);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_contact_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,int>(get_contact_count);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_use_custom_integrator");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_use_custom_integrator);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_using_custom_integrator", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_using_custom_integrator);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_contact_monitor");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_contact_monitor);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_contact_monitor_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_contact_monitor_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_continuous_collision_detection_mode");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::CCDMode>(set_continuous_collision_detection_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_continuous_collision_detection_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::CCDMode>(get_continuous_collision_detection_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_axis_velocity");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(set_axis_velocity);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "apply_central_impulse");
   local_f0 = 0;
   Variant::Variant((Variant*)&local_78, (Vector2*)&local_f0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_e8[0] = (Variant*)&local_78;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(apply_central_impulse);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, local_e8, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   local_88 = 0;
   local_98 = (Variant*)puVar11;
   pcStack_90 = "position";
   auStack_70._0_8_ = &pcStack_90;
   uVar14 = (uint)(Variant*)&local_78;
   local_78 = (Vector2*)&local_98;
   D_METHODP((char*)&local_168, (char***)"apply_impulse", uVar14);
   local_e8[0] = (Variant*)0x0;
   Variant::Variant((Variant*)&local_78, (Vector2*)local_e8);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&,Vector2_const&>(apply_impulse);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "apply_torque_impulse");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, apply_torque_impulse, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "apply_central_force");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(apply_central_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   local_a8 = 0;
   local_b8 = "force";
   pcStack_b0 = "position";
   auStack_70._0_8_ = &pcStack_b0;
   local_78 = (Vector2*)&local_b8;
   D_METHODP((char*)&local_168, (char***)"apply_force", uVar14);
   local_b8 = (char*)0x0;
   Variant::Variant((Variant*)&local_78, (Vector2*)&local_b8);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&,Vector2_const&>(apply_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "apply_torque");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, apply_torque, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "add_constant_central_force");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(add_constant_central_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   local_c8 = 0;
   local_d8 = "force";
   pcStack_d0 = "position";
   auStack_70._0_8_ = &pcStack_d0;
   local_78 = (Vector2*)&local_d8;
   D_METHODP((char*)&local_168, (char***)"add_constant_force", uVar14);
   local_b8 = (char*)0x0;
   Variant::Variant((Variant*)&local_78, (Vector2*)&local_b8);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&,Vector2_const&>(add_constant_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "add_constant_torque");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, add_constant_torque, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_constant_force");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2_const&>(set_constant_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_constant_force", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,Vector2>(get_constant_force);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_constant_torque");
   ClassDB::bind_method<MethodDefinition,void(RigidBody2D::*)(float)>((MethodDefinition*)&local_168, set_constant_torque, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_constant_torque", 0);
   ClassDB::bind_method<MethodDefinition,float(RigidBody2D::*)()const>((MethodDefinition*)&local_168, get_constant_torque, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_sleeping");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_sleeping);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_sleeping", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_sleeping);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_can_sleep");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_can_sleep);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_able_to_sleep", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_able_to_sleep);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_lock_rotation_enabled");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_lock_rotation_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_lock_rotation_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_lock_rotation_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_freeze_enabled");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(set_freeze_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"is_freeze_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,bool>(is_freeze_enabled);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHOD<char_const*>((char*)&local_168, "set_freeze_mode");
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::FreezeMode>(set_freeze_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_freeze_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,RigidBody2D::FreezeMode>(get_freeze_mode);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   D_METHODP((char*)&local_168, (char***)"get_colliding_bodies", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Vector2*)0x0;
   pMVar12 = create_method_bind<RigidBody2D,TypedArray<Node2D>>(get_colliding_bodies);
   ClassDB::bind_methodfi(1, pMVar12, false, (MethodDefinition*)&local_168, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_168);
   local_1c0[0] = 0;
   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "state");
   local_198 = (char*)0x0;
   if (local_168 != (undefined*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_198, (CowData*)&local_168);
   }

   Vector<String>::push_back((Vector<String>*)&local_1c8, (CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   local_158 = (undefined1[16])0x0;
   local_168 = (undefined*)0x0;
   local_160 = 0;
   local_148 = 0;
   local_140 = 0;
   local_138 = 6;
   local_130 = 1;
   local_128[0] = 0;
   local_118 = 0;
   local_110 = 0;
   local_100 = 0;
   String::parse_latin1((String*)&local_168, "_integrate_forces");
   local_198 = "PhysicsDirectBodyState2D";
   local_130 = CONCAT44(local_130._4_4_, 8);
   local_1f8[0] = 0;
   local_190 = 0x18;
   String::parse_latin1((StrRange*)local_1f8);
   StringName::StringName((StringName*)local_228, (StrRange*)local_1f8, false);
   local_198 = (char*)CONCAT44(local_198._4_4_, 0x18);
   local_190 = 0;
   StringName::StringName(local_188, (StringName*)local_228);
   local_180 = 0;
   local_178 = 0;
   local_170 = 6;
   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_128, (PropertyInfo*)&local_198);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_198);
   Vector<int>::push_back(local_108, 0);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (StrRange*)local_1f8, false);
   ClassDB::add_virtual_method((StringName*)&local_198, (MethodInfo*)&local_168, true, (Vector*)&local_1c8, false);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<String>::_unref((CowData<String>*)local_1c0);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "0.001,1000,0.001,or_greater,exp,suffix:kg");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "mass");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "PhysicsMaterial");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "physics_material_override");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 0x18, (String*)&local_238, 0x11, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "-8,8,0.001,or_less,or_greater");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "gravity_scale");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Mass Distribution");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Auto,Custom");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "center_of_mass_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 2, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "-1000,1000,0.01,or_less,or_greater,suffix:px");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "center_of_mass");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 5, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   puVar11 = &_LC96;
   do {
      puVar13 = puVar11;
      puVar11 = puVar13 + 4;
   }
 while ( *(int*)( puVar13 + 4 ) != 0 );
   local_168 = &_LC96;
   local_160 = (long)( puVar13 + -0x116a04 ) >> 2;
   String::parse_utf32((StrRange*)&local_230);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "inertia");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Deactivation");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "sleeping");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "can_sleep");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "lock_rotation");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "freeze");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Static,Kinematic");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "freeze_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 2, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Solver");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "custom_integrator");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Disabled,Cast Ray,Cast Shape");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "continuous_cd");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 2, (String*)&local_230, 6, (StringName*)local_228);
   local_198 = "RigidBody2D";
   local_240 = 0;
   local_190 = 0xb;
   String::parse_latin1((StrRange*)&local_240);
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "contact_monitor");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 1, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "0,64,1,or_greater");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "max_contacts_reported");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "linear_");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Linear");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "suffix:px/s");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "linear_velocity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 5, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Combine,Replace");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "linear_damp_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 2, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "-1,100,0.001,or_greater");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "linear_damp");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "angular_");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Angular");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   puVar11 = &_LC97;
   do {
      puVar13 = puVar11;
      puVar11 = puVar13 + 4;
   }
 while ( *(int*)( puVar13 + 4 ) != 0 );
   local_168 = &_LC97;
   local_160 = (long)( puVar13 + -0x116aac ) >> 2;
   String::parse_utf32((StrRange*)&local_230);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "angular_velocity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Combine,Replace");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "angular_damp_mode");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 2, (String*)&local_238, 2, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "-1,100,0.001,or_greater");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "angular_damp");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 1, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_168 = (undefined*)0x0;
   String::parse_latin1((String*)&local_168, "constant_");
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Constant Forces");
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (StrRange*)local_1f8, false);
   ClassDB::add_property_group((StringName*)&local_1c8, (String*)&local_198, (String*)&local_168, 0);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   puVar11 = &_LC98;
   do {
      puVar13 = puVar11;
      puVar11 = puVar13 + 4;
   }
 while ( *(int*)( puVar13 + 4 ) != 0 );
   local_168 = &_LC98;
   local_160 = (long)( puVar13 + -0x116b24 ) >> 2;
   String::parse_utf32((StrRange*)&local_230);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "constant_force");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 5, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_1c8 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_1c8, true);
   _scs_create((char*)local_1f8, true);
   local_228[0] = 0;
   local_230 = 0;
   puVar11 = &_LC99;
   do {
      puVar13 = puVar11;
      puVar11 = puVar13 + 4;
   }
 while ( *(int*)( puVar13 + 4 ) != 0 );
   local_168 = &_LC99;
   local_160 = (long)( puVar13 + -0x116b64 ) >> 2;
   String::parse_utf32((StrRange*)&local_230);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "constant_torque");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_168, 3, (String*)&local_238, 0, (String*)&local_230, 6, (StringName*)local_228);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_240, false);
   ClassDB::add_property((StringName*)&local_198, (PropertyInfo*)&local_168, (StringName*)local_1f8, (StringName*)&local_1c8, -1);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_228[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_1f8[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   local_240 = 0;
   local_248 = 0;
   String::parse_latin1((String*)&local_248, "");
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "local_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_198, 2, (String*)&local_250, 0, (String*)&local_248, 6, (String*)&local_240);
   local_258 = 0;
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "");
   local_268 = 0;
   String::parse_latin1((String*)&local_268, "body_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_1c8, 2, (String*)&local_268, 0, (String*)&local_260, 6, &local_258);
   local_270 = 0;
   local_278 = 0;
   String::parse_latin1((String*)&local_278, "Node");
   local_280 = 0;
   String::parse_latin1((String*)&local_280, "body");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_1f8, 0x18, (String*)&local_280, 0x11, (String*)&local_278, 6, &local_270);
   local_288 = 0;
   local_290 = 0;
   String::parse_latin1((String*)&local_290, "");
   local_298 = 0;
   String::parse_latin1((String*)&local_298, "body_rid");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 0x17, (String*)&local_298, 0, (String*)&local_290, 6, &local_288);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "body_shape_entered");
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_168, (String*)&local_238, (StringName*)local_228, (StrRange*)local_1f8, (StringName*)&local_1c8, (CowData<char32_t>*)&local_198);
   local_2a0 = 0;
   String::parse_latin1((String*)&local_2a0, "RigidBody2D");
   StringName::StringName((StringName*)&local_230, (String*)&local_2a0, false);
   ClassDB::add_signal((StringName*)&local_230, (MethodInfo*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_290);
   if (( StringName::configured != '\0' ) && ( local_288 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_280);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
   if (( StringName::configured != '\0' ) && ( local_270 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_240 != 0 )) {
      StringName::unref();
   }

   local_240 = 0;
   local_248 = 0;
   String::parse_latin1((String*)&local_248, "");
   local_250 = 0;
   String::parse_latin1((String*)&local_250, "local_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_198, 2, (String*)&local_250, 0, (String*)&local_248, 6, (String*)&local_240);
   local_258 = 0;
   local_260 = 0;
   String::parse_latin1((String*)&local_260, "");
   local_268 = 0;
   String::parse_latin1((String*)&local_268, "body_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_1c8, 2, (String*)&local_268, 0, (String*)&local_260, 6, &local_258);
   local_270 = 0;
   local_278 = 0;
   String::parse_latin1((String*)&local_278, "Node");
   local_280 = 0;
   String::parse_latin1((String*)&local_280, "body");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_1f8, 0x18, (String*)&local_280, 0x11, (String*)&local_278, 6, &local_270);
   local_288 = 0;
   local_290 = 0;
   String::parse_latin1((String*)&local_290, "");
   local_298 = 0;
   String::parse_latin1((String*)&local_298, "body_rid");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_228, 0x17, (String*)&local_298, 0, (String*)&local_290, 6, &local_288);
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "body_shape_exited");
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_168, (String*)&local_238, (StringName*)local_228, (StrRange*)local_1f8, (StringName*)&local_1c8, (CowData<char32_t>*)&local_198);
   local_2a0 = 0;
   String::parse_latin1((String*)&local_2a0, "RigidBody2D");
   StringName::StringName((StringName*)&local_230, (String*)&local_2a0, false);
   ClassDB::add_signal((StringName*)&local_230, (MethodInfo*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_290);
   if (( StringName::configured != '\0' ) && ( local_288 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_280);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
   if (( StringName::configured != '\0' ) && ( local_270 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_260);
   if (( StringName::configured != '\0' ) && ( local_258 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_250);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_248);
   if (( StringName::configured != '\0' ) && ( local_240 != 0 )) {
      StringName::unref();
   }

   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Node");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "body");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_198, 0x18, (String*)&local_238, 0x11, (String*)&local_230, 6, (StringName*)local_228);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "body_entered");
   local_158 = (undefined1[16])0x0;
   local_168 = (undefined*)0x0;
   local_160 = 0;
   local_148 = 0;
   local_140 = 0;
   local_138 = 6;
   local_130 = 1;
   local_128[0] = 0;
   local_118 = 0;
   local_110 = 0;
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)local_1f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_128, (PropertyInfo*)&local_198);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (String*)&local_240, false);
   ClassDB::add_signal((StringName*)&local_1c8, (MethodInfo*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_228[0] = 0;
   local_230 = 0;
   String::parse_latin1((String*)&local_230, "Node");
   local_238 = 0;
   String::parse_latin1((String*)&local_238, "body");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_198, 0x18, (String*)&local_238, 0x11, (String*)&local_230, 6, (StringName*)local_228);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "body_exited");
   local_158 = (undefined1[16])0x0;
   local_168 = (undefined*)0x0;
   local_160 = 0;
   local_148 = 0;
   local_140 = 0;
   local_138 = 6;
   local_130 = 1;
   local_128[0] = 0;
   local_118 = 0;
   local_110 = 0;
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)local_1f8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_128, (PropertyInfo*)&local_198);
   local_240 = 0;
   String::parse_latin1((String*)&local_240, "RigidBody2D");
   StringName::StringName((StringName*)&local_1c8, (String*)&local_240, false);
   ClassDB::add_signal((StringName*)&local_1c8, (MethodInfo*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_240);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_198);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_230);
   if (( StringName::configured != '\0' ) && ( local_228[0] != 0 )) {
      StringName::unref();
   }

   local_1c8 = 0;
   String::parse_latin1((String*)&local_1c8, "sleeping_state_changed");
   local_158 = (undefined1[16])0x0;
   local_168 = (undefined*)0x0;
   local_160 = 0;
   local_148 = 0;
   local_140 = 0;
   local_138 = 6;
   local_130 = 1;
   local_128[0] = 0;
   local_118 = 0;
   local_110 = 0;
   local_100 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)&local_1c8);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "RigidBody2D");
   StringName::StringName((StringName*)&local_198, (StrRange*)local_1f8, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   MethodInfo::~MethodInfo((MethodInfo*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   StringName::StringName((StringName*)&local_198, "FREEZE_MODE_STATIC", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "FREEZE_MODE_STATIC");
   GetTypeInfo<RigidBody2D::FreezeMode,void>::get_class_info((GetTypeInfo<RigidBody2D::FreezeMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_158._8_8_;
   local_158 = auVar2 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 0, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "FREEZE_MODE_KINEMATIC", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "FREEZE_MODE_KINEMATIC");
   GetTypeInfo<RigidBody2D::FreezeMode,void>::get_class_info((GetTypeInfo<RigidBody2D::FreezeMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_158._8_8_;
   local_158 = auVar3 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 1, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "CENTER_OF_MASS_MODE_AUTO", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "CENTER_OF_MASS_MODE_AUTO");
   GetTypeInfo<RigidBody2D::CenterOfMassMode,void>::get_class_info((GetTypeInfo<RigidBody2D::CenterOfMassMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_158._8_8_;
   local_158 = auVar4 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 0, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "CENTER_OF_MASS_MODE_CUSTOM", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "CENTER_OF_MASS_MODE_CUSTOM");
   GetTypeInfo<RigidBody2D::CenterOfMassMode,void>::get_class_info((GetTypeInfo<RigidBody2D::CenterOfMassMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = local_158._8_8_;
   local_158 = auVar5 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 1, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "DAMP_MODE_COMBINE", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "DAMP_MODE_COMBINE");
   GetTypeInfo<RigidBody2D::DampMode,void>::get_class_info((GetTypeInfo<RigidBody2D::DampMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_158._8_8_;
   local_158 = auVar6 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 0, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "DAMP_MODE_REPLACE", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "DAMP_MODE_REPLACE");
   GetTypeInfo<RigidBody2D::DampMode,void>::get_class_info((GetTypeInfo<RigidBody2D::DampMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_158._8_8_;
   local_158 = auVar7 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 1, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "CCD_MODE_DISABLED", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "CCD_MODE_DISABLED");
   GetTypeInfo<RigidBody2D::CCDMode,void>::get_class_info((GetTypeInfo<RigidBody2D::CCDMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_158._8_8_;
   local_158 = auVar8 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 0, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "CCD_MODE_CAST_RAY", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "CCD_MODE_CAST_RAY");
   GetTypeInfo<RigidBody2D::CCDMode,void>::get_class_info((GetTypeInfo<RigidBody2D::CCDMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_158._8_8_;
   local_158 = auVar9 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 1, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_198, "CCD_MODE_CAST_SHAPE", false);
   local_1f8[0] = 0;
   String::parse_latin1((String*)local_1f8, "CCD_MODE_CAST_SHAPE");
   GetTypeInfo<RigidBody2D::CCDMode,void>::get_class_info((GetTypeInfo<RigidBody2D::CCDMode,void>*)&local_168);
   local_1c8 = local_158._0_8_;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = local_158._8_8_;
   local_158 = auVar10 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
   local_228[0] = 0;
   String::parse_latin1((String*)local_228, "RigidBody2D");
   StringName::StringName((StringName*)&local_168, (StringName*)local_228, false);
   ClassDB::bind_integer_constant((StringName*)&local_168, (StringName*)&local_1c8, (StringName*)&local_198, 2, false);
   if (( StringName::configured != '\0' ) && ( local_168 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
   if (( StringName::configured != '\0' ) && ( local_1c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_1f8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RigidBody2D::_body_inout(int, RID const&, ObjectID, int, int) */void RigidBody2D::_body_inout(RigidBody2D *this, int param_1, ulong *param_2, ulong param_4, int param_5, int param_6) {
   Variant *pVVar1;
   int *piVar2;
   uint *puVar3;
   long *plVar4;
   int iVar5;
   char cVar6;
   code *pcVar7;
   long lVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   int iVar35;
   ulong uVar36;
   int iVar37;
   char *pcVar38;
   uint uVar39;
   uint uVar40;
   long lVar41;
   ulong uVar42;
   undefined8 uVar43;
   ulong uVar44;
   long lVar45;
   Variant *pVVar46;
   long *plVar47;
   undefined8 *puVar48;
   undefined8 *puVar49;
   uint uVar50;
   int iVar51;
   ulong *puVar52;
   ulong uVar53;
   uint uVar54;
   ulong uVar55;
   long lVar56;
   long lVar57;
   uint *puVar58;
   long in_FS_OFFSET;
   bool bVar59;
   Object *local_150;
   ulong local_120;
   long local_118[2];
   undefined8 local_108;
   undefined1 local_100;
   undefined8 local_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   uVar50 = (uint)param_4 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_120 = param_4;
   if (uVar50 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar36 = local_108 >> 8;
         local_108 = uVar36 << 8;
         LOCK();
         bVar59 = (char)ObjectDB::spin_lock == '\0';
         if (bVar59) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar59) break;
         local_108 = uVar36 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar52 = (ulong*)( (ulong)uVar50 * 0x10 + ObjectDB::object_slots );
      if (( *puVar52 & 0x7fffffffff ) != ( param_4 >> 0x18 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00109329;
      }

      uVar36 = puVar52[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar36 == 0) goto LAB_00109329;
      local_150 = (Object*)__dynamic_cast(uVar36, &Object::typeinfo, &Node::typeinfo, 0);
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00109329:local_150 = (Object*)0x0;
   }

   lVar57 = *(long*)( this + 0x6b0 );
   if (lVar57 == 0) {
      if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar43 = 0x52;
         pcVar38 = "Parameter \"contact_monitor\" is null.";
         LAB_00109369:_err_print_error("_body_inout", "scene/2d/physics/rigid_body_2d.cpp", uVar43, pcVar38, 0, 0);
         return;
      }

      goto LAB_00109a08;
   }

   lVar56 = *(long*)( lVar57 + 0x10 );
   if (( lVar56 != 0 ) && ( *(int*)( lVar57 + 0x34 ) != 0 )) {
      uVar55 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar57 + 0x30 ) * 4 ));
      lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar57 + 0x30 ) * 8 );
      uVar36 = local_120 * 0x3ffff - 1;
      uVar36 = ( uVar36 ^ uVar36 >> 0x1f ) * 0x15;
      uVar36 = ( uVar36 ^ uVar36 >> 0xb ) * 0x41;
      uVar36 = uVar36 >> 0x16 ^ uVar36;
      uVar44 = uVar36 & 0xffffffff;
      if ((int)uVar36 == 0) {
         uVar44 = 1;
      }

      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar44 * lVar45;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar55;
      lVar41 = SUB168(auVar9 * auVar22, 8);
      uVar50 = *(uint*)( *(long*)( lVar57 + 0x18 ) + lVar41 * 4 );
      uVar39 = SUB164(auVar9 * auVar22, 8);
      if (uVar50 != 0) {
         uVar54 = 0;
         do {
            if (( (uint)uVar44 == uVar50 ) && ( local_120 == *(ulong*)( *(long*)( lVar56 + lVar41 * 8 ) + 0x10 ) )) {
               lVar45 = *(long*)( lVar56 + (ulong)uVar39 * 8 );
               if (param_1 == 1) {
                  if (lVar45 == 0) goto LAB_001090b3;
                  if (local_150 != (Object*)0x0) goto LAB_0010902f;
                  goto LAB_00109050;
               }

               if (lVar45 == 0) goto LAB_001099d1;
               lVar41 = *(long*)( lVar45 + 0x30 );
               if (local_150 == (Object*)0x0) {
                  if (lVar41 != 0) goto LAB_0010905a;
                  cVar6 = '\0';
                  lVar45 = *(long*)( lVar45 + 0x10 );
                  goto LAB_00109578;
               }

               if (lVar41 == 0) {
                  cVar6 = *(char*)( lVar45 + 0x20 );
                  goto LAB_001094b3;
               }

               lVar57 = *(long*)( lVar41 + -8 );
               iVar37 = (int)lVar57 + -1;
               if (lVar57 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar57, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar7 = (code*)invalidInstructionException();
                  ( *pcVar7 )();
               }

               iVar51 = 0;
               if (-1 < iVar37) goto LAB_001093ff;
               goto LAB_00109428;
            }

            uVar54 = uVar54 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(uVar39 + 1) * lVar45;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar55;
            lVar41 = SUB168(auVar10 * auVar23, 8);
            uVar50 = *(uint*)( *(long*)( lVar57 + 0x18 ) + lVar41 * 4 );
            uVar39 = SUB164(auVar10 * auVar23, 8);
         }
 while ( ( uVar50 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar50 * lVar45,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar57 + 0x30 ) * 4 ) + uVar39 ) - SUB164(auVar11 * auVar24, 8)) * lVar45,auVar25._8_8_ = 0,auVar25._0_8_ = uVar55,uVar54 <= SUB164(auVar12 * auVar25, 8) );
      }

   }

   if (param_1 != 1) {
      LAB_001099d1:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar43 = 0x55;
         pcVar38 = "Condition \"!body_in && !E\" is true.";
         goto LAB_00109369;
      }

      goto LAB_00109a08;
   }

   LAB_001090b3:local_100 = 0;
   local_108 = 0;
   local_f0 = 0;
   HashMap<ObjectID,RigidBody2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,RigidBody2D::BodyState>>>::insert((RigidBody2D*)local_118, (BodyState*)( lVar57 + 8 ), SUB81(&local_120, 0));
   *(ulong*)( local_118[0] + 0x18 ) = *param_2;
   if (local_150 == (Object*)0x0) {
      *(undefined1*)( local_118[0] + 0x20 ) = 0;
   }
 else {
      *(byte*)( local_118[0] + 0x20 ) = (byte)local_150[0x2fa] >> 6 & 1;
      pcVar7 = *(code**)( *(long*)local_150 + 0x108 );
      create_custom_callable_function_pointer<RigidBody2D,ObjectID>((RigidBody2D*)local_118, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_enter_tree");
      Callable::bind<ObjectID>((Callable*)&local_108, (RigidBody2D*)local_118, local_120);
      ( *pcVar7 )(local_150, SceneStringNames::singleton + 0x38, (Callable*)&local_108, 0);
      Callable::~Callable((Callable*)&local_108);
      Callable::~Callable((Callable*)local_118);
      pcVar7 = *(code**)( *(long*)local_150 + 0x108 );
      create_custom_callable_function_pointer<RigidBody2D,ObjectID>((RigidBody2D*)local_118, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_exit_tree");
      Callable::bind<ObjectID>((Callable*)&local_108, (RigidBody2D*)local_118, local_120);
      ( *pcVar7 )(local_150, SceneStringNames::singleton + 0x40, (Callable*)&local_108, 0);
      Callable::~Callable((Callable*)&local_108);
      Callable::~Callable((Callable*)local_118);
      lVar45 = local_118[0];
      if (*(char*)( local_118[0] + 0x20 ) != '\0') {
         Object::emit_signal<Node*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x148 ), (Node*)local_150);
      }

      LAB_0010902f:local_100 = 0;
      local_108 = CONCAT44(param_6, param_5);
      VSet<RigidBody2D::ShapePair>::insert((VSet<RigidBody2D::ShapePair>*)( lVar45 + 0x28 ), (ShapePair*)&local_108);
      LAB_00109050:if (*(char*)( lVar45 + 0x20 ) != '\0') {
         lVar57 = SceneStringNames::singleton + 0x140;
         local_108 = *param_2;
         Variant::Variant(local_b8, (RID*)&local_108);
         Variant::Variant(local_a0, local_150);
         Variant::Variant(local_88, param_5);
         Variant::Variant(local_70, param_6);
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         pVVar46 = (Variant*)local_40;
         local_e8 = local_b8;
         pVStack_e0 = local_a0;
         local_d8 = local_88;
         pVStack_d0 = local_70;
         ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar57, &local_e8, 4);
         do {
            pVVar1 = pVVar46 + -0x18;
            pVVar46 = pVVar46 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar46 != local_b8 );
      }

   }

   goto LAB_0010905a;
   LAB_001093ff:iVar35 = ( iVar37 + iVar51 ) / 2;
   lVar56 = (long)iVar35;
   piVar2 = (int*)( lVar41 + lVar56 * 0xc );
   iVar5 = *piVar2;
   if (param_5 != iVar5) {
      if (param_5 < iVar5) goto LAB_001093f8;
      LAB_00109421:iVar51 = iVar35 + 1;
      if (iVar37 < iVar51) goto LAB_00109428;
      goto LAB_001093ff;
   }

   iVar5 = piVar2[1];
   if (param_6 < iVar5) goto LAB_001093f8;
   if (iVar5 < param_6) goto LAB_00109421;
   if (iVar37 + iVar51 < -1) goto LAB_00109428;
   if (lVar56 < lVar57) {
      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar45 + 0x30 ));
      lVar57 = *(long*)( lVar45 + 0x30 );
      if (lVar57 == 0) {
         lVar41 = -1;
      }
 else {
         lVar8 = *(long*)( lVar57 + -8 );
         lVar41 = lVar8 + -1;
         if (lVar56 < lVar41) {
            puVar48 = (undefined8*)( lVar56 * 0xc + lVar57 );
            do {
               puVar49 = (undefined8*)( (long)puVar48 + 0xc );
               *puVar48 = *(undefined8*)( (long)puVar48 + 0xc );
               *(undefined1*)( puVar48 + 1 ) = *(undefined1*)( (long)puVar48 + 0x14 );
               puVar48 = puVar49;
            }
 while ( puVar49 != (undefined8*)( lVar57 + -0xc + lVar8 * 0xc ) );
         }

      }

      CowData<RigidBody2D::ShapePair>::resize<false>((CowData<RigidBody2D::ShapePair>*)( lVar45 + 0x30 ), lVar41);
   }
 else {
      _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar56, lVar57, "p_index", "size()", "", false, false);
   }

   cVar6 = *(char*)( lVar45 + 0x20 );
   if (*(long*)( lVar45 + 0x30 ) != 0) goto LAB_001097b4;
   LAB_001094b3:pcVar7 = *(code**)( *(long*)local_150 + 0x110 );
   create_custom_callable_function_pointer<RigidBody2D,ObjectID>((RigidBody2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_enter_tree");
   ( *pcVar7 )(local_150, SceneStringNames::singleton + 0x38, (RigidBody2D*)&local_108);
   Callable::~Callable((Callable*)&local_108);
   pcVar7 = *(code**)( *(long*)local_150 + 0x110 );
   create_custom_callable_function_pointer<RigidBody2D,ObjectID>((RigidBody2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&RigidBody2D::_body_exit_tree");
   ( *pcVar7 )(local_150, SceneStringNames::singleton + 0x40, (RigidBody2D*)&local_108);
   Callable::~Callable((Callable*)&local_108);
   if (cVar6 != '\0') {
      Object::emit_signal<Node*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x158 ), (Node*)local_150);
      lVar57 = *(long*)( this + 0x6b0 );
      lVar45 = *(long*)( lVar45 + 0x10 );
      lVar56 = *(long*)( lVar57 + 0x10 );
      if (( lVar56 != 0 ) && ( *(int*)( lVar57 + 0x34 ) != 0 )) goto LAB_00109578;
      goto LAB_001097c4;
   }

   lVar45 = *(long*)( lVar45 + 0x10 );
   lVar57 = *(long*)( this + 0x6b0 );
   lVar56 = *(long*)( lVar57 + 0x10 );
   if (( lVar56 == 0 ) || ( *(int*)( lVar57 + 0x34 ) == 0 )) goto LAB_0010905a;
   LAB_00109578:lVar41 = *(long*)( lVar57 + 0x18 );
   uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar57 + 0x30 ) * 4 );
   uVar55 = CONCAT44(0, uVar50);
   lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar57 + 0x30 ) * 8 );
   uVar36 = lVar45 * 0x3ffff - 1;
   uVar36 = ( uVar36 ^ uVar36 >> 0x1f ) * 0x15;
   uVar36 = ( uVar36 ^ uVar36 >> 0xb ) * 0x41;
   uVar36 = uVar36 >> 0x16 ^ uVar36;
   uVar44 = 1;
   if ((int)uVar36 != 0) {
      uVar44 = uVar36 & 0xffffffff;
   }

   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar44 * lVar8;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar55;
   uVar36 = SUB168(auVar13 * auVar26, 8);
   uVar39 = *(uint*)( lVar41 + uVar36 * 4 );
   uVar53 = (ulong)SUB164(auVar13 * auVar26, 8);
   if (uVar39 == 0) goto LAB_001097b4;
   uVar54 = 0;
   LAB_0010964d:auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )((int)uVar53 + 1) * lVar8;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar55;
   uVar42 = SUB168(auVar16 * auVar29, 8);
   uVar40 = SUB164(auVar16 * auVar29, 8);
   if (( (uint)uVar44 != uVar39 ) || ( lVar45 != *(long*)( *(long*)( lVar56 + uVar36 * 8 ) + 0x10 ) )) goto LAB_00109610;
   puVar58 = (uint*)( lVar41 + uVar42 * 4 );
   uVar36 = (ulong)uVar40;
   uVar39 = *puVar58;
   if (( uVar39 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar39 * lVar8,auVar30._8_8_ = 0,auVar30._0_8_ = uVar55,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar40 + uVar50 ) - SUB164(auVar17 * auVar30, 8)) * lVar8,auVar31._8_8_ = 0,auVar31._0_8_ = uVar55,SUB164(auVar18 * auVar31, 8) != 0) {
      while (true) {
         puVar3 = (uint*)( lVar41 + uVar53 * 4 );
         *puVar58 = *puVar3;
         puVar48 = (undefined8*)( lVar56 + uVar42 * 8 );
         *puVar3 = uVar39;
         puVar49 = (undefined8*)( lVar56 + uVar53 * 8 );
         uVar43 = *puVar48;
         *puVar48 = *puVar49;
         *puVar49 = uVar43;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = ( ulong )((int)uVar36 + 1) * lVar8;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar55;
         uVar42 = SUB168(auVar21 * auVar34, 8);
         puVar58 = (uint*)( lVar41 + uVar42 * 4 );
         uVar39 = *puVar58;
         uVar53 = uVar36;
         if (( uVar39 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar39 * lVar8,auVar32._8_8_ = 0,auVar32._0_8_ = uVar55,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( SUB164(auVar21 * auVar34, 8) + uVar50 ) - SUB164(auVar19 * auVar32, 8)) * lVar8,auVar33._8_8_ = 0,auVar33._0_8_ = uVar55,SUB164(auVar20 * auVar33, 8) == 0) break;
         uVar36 = uVar42 & 0xffffffff;
      }
;
   }

   plVar4 = (long*)( lVar56 + uVar53 * 8 );
   *(undefined4*)( lVar41 + uVar53 * 4 ) = 0;
   plVar47 = (long*)*plVar4;
   if (*(long**)( lVar57 + 0x20 ) == plVar47) {
      *(long*)( lVar57 + 0x20 ) = *plVar47;
      plVar47 = (long*)*plVar4;
   }

   if (*(long**)( lVar57 + 0x28 ) == plVar47) {
      *(long*)( lVar57 + 0x28 ) = plVar47[1];
      plVar47 = (long*)*plVar4;
   }

   if ((long*)plVar47[1] != (long*)0x0) {
      *(long*)plVar47[1] = *plVar47;
      plVar47 = (long*)*plVar4;
   }

   if (*plVar47 != 0) {
      *(long*)( *plVar47 + 8 ) = plVar47[1];
      plVar47 = (long*)*plVar4;
   }

   if (plVar47[6] != 0) {
      LOCK();
      plVar4 = (long*)( plVar47[6] + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar56 = plVar47[6];
         plVar47[6] = 0;
         Memory::free_static((void*)( lVar56 + -0x10 ), false);
      }

   }

   Memory::free_static(plVar47, false);
   *(undefined8*)( *(long*)( lVar57 + 0x10 ) + uVar53 * 8 ) = 0;
   *(int*)( lVar57 + 0x34 ) = *(int*)( lVar57 + 0x34 ) + -1;
   goto LAB_001097b4;
   LAB_001093f8:iVar37 = iVar35 + -1;
   if (iVar37 < iVar51) goto LAB_00109428;
   goto LAB_001093ff;
   LAB_00109610:uVar39 = *(uint*)( lVar41 + uVar42 * 4 );
   uVar53 = uVar42 & 0xffffffff;
   uVar54 = uVar54 + 1;
   if (( uVar39 == 0 ) || ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar39 * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar55,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar50 + uVar40 ) - SUB164(auVar14 * auVar27, 8)) * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar55,uVar36 = uVar42,SUB164(auVar15 * auVar28, 8) < uVar54) goto LAB_001097b4;
   goto LAB_0010964d;
   LAB_00109428:cVar6 = *(char*)( lVar45 + 0x20 );
   LAB_001097b4:if (cVar6 != '\0') {
      LAB_001097c4:lVar57 = SceneStringNames::singleton + 0x150;
      local_108 = *param_2;
      Variant::Variant(local_b8, (RID*)&local_108);
      Variant::Variant(local_a0, local_150);
      Variant::Variant(local_88, param_5);
      Variant::Variant(local_70, param_6);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      pVVar46 = (Variant*)local_40;
      local_e8 = local_b8;
      pVStack_e0 = local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar57, &local_e8, 4);
      do {
         pVVar1 = pVVar46 + -0x18;
         pVVar46 = pVVar46 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar46 != local_b8 );
   }

   LAB_0010905a:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109a08:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RigidBody2D::_body_state_changed(PhysicsDirectBodyState2D*) */void RigidBody2D::_body_state_changed(RigidBody2D *this, PhysicsDirectBodyState2D *param_1) {
   int *piVar1;
   undefined8 *puVar2;
   int iVar3;
   undefined4 uVar4;
   long lVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   long lVar14;
   undefined1 *puVar15;
   String *pSVar16;
   PhysicsDirectBodyState2D *pPVar17;
   char cVar18;
   undefined4 uVar19;
   int iVar20;
   long *plVar21;
   long *plVar22;
   undefined8 uVar23;
   PhysicsDirectBodyState2D *pPVar24;
   ulong uVar25;
   code *pcVar26;
   long lVar27;
   uint uVar28;
   long lVar29;
   long *plVar30;
   ulong uVar31;
   char **ppcVar32;
   undefined1 *puVar33;
   undefined1 *puVar34;
   undefined1 *puVar36;
   int iVar38;
   uint uVar39;
   int iVar40;
   uint uVar41;
   ulong uVar42;
   int iVar43;
   long lVar44;
   long in_FS_OFFSET;
   char *pcStack_1c8;
   undefined *puStack_1c0;
   undefined8 uStack_1b8;
   undefined8 local_1b0;
   undefined1 auStack_1a8[8];
   ulong local_1a0;
   ulong local_198;
   RigidBody2D *local_190;
   int local_188;
   int local_184;
   StringName *local_180;
   RigidBody2D *local_178;
   String *local_170;
   String *local_168;
   PhysicsDirectBodyState2D *local_160;
   undefined8 local_158;
   long local_150;
   GetTypeInfo<PhysicsDirectBodyState2D*,void> local_148[8];
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   undefined8 local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a0;
   Transform2D local_98[32];
   int local_78[8];
   int *local_58[3];
   long local_40;
   undefined1 *puVar35;
   undefined1 *puVar37;
   puVar33 = auStack_1a8;
   puVar35 = auStack_1a8;
   puVar34 = auStack_1a8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
   plVar21 = *(long**)( this + 0x98 );
   local_160 = param_1;
   if (plVar21 == (long*)0x0) {
      LAB_00109a65:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x6c0] == (RigidBody2D)0x0 )) {
         local_168 = (String*)&local_118;
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_1b0 = 0x10a39b;
         String::parse_latin1(local_168, "_integrate_forces");
         local_e0 = CONCAT44(local_e0._4_4_, 8);
         local_1b0 = 0x10a3ad;
         GetTypeInfo<PhysicsDirectBodyState2D*,void>::get_class_info(local_148);
         local_1b0 = 0x10a3bc;
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         local_1b0 = 0x10a3c4;
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         local_1b0 = 0x10a3d2;
         Vector<int>::push_back(local_b8, 0);
         local_1b0 = 0x10a3da;
         uVar19 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x6c8 ) = 0;
         lVar44 = *(long*)( this + 8 );
         pcVar26 = *(code**)( lVar44 + 0xd8 );
         if (( ( pcVar26 == (code*)0x0 ) || ( *(long*)( lVar44 + 0xe0 ) == 0 ) ) && ( pcVar26 = *(code**)( lVar44 + 0xd0 ) ),pcVar26 == (code*)0x0) {
            local_158 = 0;
            local_1b0 = 0x10a5e4;
            local_170 = (String*)&local_158;
            String::parse_latin1((String*)&local_158, "RigidBody2D");
            local_1b0 = 0x10a602;
            local_180 = (StringName*)&local_150;
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            local_1b0 = 0x10a610;
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
            if (local_140[0] == 0) {
               lVar44 = 0;
               local_1b0 = 0x10a86e;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') goto LAB_0010a639;
               local_1b0 = 0x10a887;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_170);
               LAB_0010a660:lVar44 = *(long*)( this + 8 );
               pcVar26 = *(code**)( lVar44 + 200 );
               if (( ( pcVar26 == (code*)0x0 ) || ( *(long*)( lVar44 + 0xe0 ) == 0 ) ) && ( pcVar26 = *(code**)( lVar44 + 0xc0 ) ),pcVar26 == (code*)0x0) goto LAB_0010a424;
               local_1b0 = 0x10a68e;
               uVar23 = ( *pcVar26 )(*(undefined8*)( lVar44 + 0xa0 ), this + 0x6b8);
               *(undefined8*)( this + 0x6c8 ) = uVar23;
            }
 else {
               lVar44 = *(long*)( local_140[0] + -8 );
               local_1b0 = 0x10a630;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_0010a639:if (local_150 != 0) {
                     local_1b0 = 0x10a64f;
                     StringName::unref();
                  }

               }

               local_1b0 = 0x10a65b;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_170);
               if (lVar44 == 0) goto LAB_0010a660;
            }

            lVar44 = *(long*)( this + 8 );
         }
 else {
            local_1b0 = 0x10a419;
            uVar23 = ( *pcVar26 )(*(undefined8*)( lVar44 + 0xa0 ), this + 0x6b8, uVar19);
            *(undefined8*)( this + 0x6c8 ) = uVar23;
            lVar44 = *(long*)( this + 8 );
         }

         LAB_0010a424:if (*(char*)( lVar44 + 0x29 ) != '\0') {
            local_1b0 = 0x10a7b5;
            plVar21 = (long*)operator_new(0x18, "");
            *plVar21 = (long)( this + 0x6c8 );
            plVar21[1] = (long)( this + 0x6c0 );
            plVar21[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar21;
         }

         this[0x6c0] = (RigidBody2D)0x1;
         local_1b0 = 0x10a442;
         MethodInfo::~MethodInfo((MethodInfo*)local_168);
      }

      if (*(long*)( this + 0x6c8 ) == 0) goto LAB_00109bc4;
   }
 else {
      local_1b0 = 0x109a61;
      cVar18 = ( **(code**)( *plVar21 + 0x50 ) )(plVar21, this + 0x6b8);
      if (cVar18 == '\0') goto LAB_00109a65;
   }

   local_1b0 = 0x109a98;
   _sync_body_state(this, local_160);
   local_1b0 = 0x109aa7;
   ( **(code**)( *(long*)this + 0x298 ) )(local_98, this);
   plVar21 = *(long**)( this + 0x98 );
   if (plVar21 == (long*)0x0) {
      LAB_00109b46:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x6c0] == (RigidBody2D)0x0 )) {
         local_168 = (String*)&local_118;
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_1b0 = 0x109ecb;
         String::parse_latin1(local_168, "_integrate_forces");
         local_e0 = CONCAT44(local_e0._4_4_, 8);
         local_1b0 = 0x109edd;
         GetTypeInfo<PhysicsDirectBodyState2D*,void>::get_class_info(local_148);
         local_1b0 = 0x109eec;
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         local_1b0 = 0x109ef4;
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         local_1b0 = 0x109f02;
         Vector<int>::push_back(local_b8, 0);
         local_1b0 = 0x109f0a;
         uVar19 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x6c8 ) = 0;
         lVar44 = *(long*)( this + 8 );
         pcVar26 = *(code**)( lVar44 + 0xd8 );
         if (( ( pcVar26 == (code*)0x0 ) || ( *(long*)( lVar44 + 0xe0 ) == 0 ) ) && ( pcVar26 = *(code**)( lVar44 + 0xd0 ) ),pcVar26 == (code*)0x0) {
            local_178 = this + 0x6b8;
            local_158 = 0;
            local_1b0 = 0x10a6e2;
            local_170 = (String*)&local_158;
            String::parse_latin1((String*)&local_158, "RigidBody2D");
            local_1b0 = 0x10a700;
            local_180 = (StringName*)&local_150;
            StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
            local_1b0 = 0x10a712;
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
            if (local_140[0] == 0) {
               lVar44 = 0;
               local_1b0 = 0x10a842;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') goto LAB_0010a73b;
               local_1b0 = 0x10a85b;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_170);
               LAB_0010a762:lVar44 = *(long*)( this + 8 );
               pcVar26 = *(code**)( lVar44 + 200 );
               if (( ( pcVar26 == (code*)0x0 ) || ( *(long*)( lVar44 + 0xe0 ) == 0 ) ) && ( pcVar26 = *(code**)( lVar44 + 0xc0 ) ),pcVar26 == (code*)0x0) goto LAB_00109f54;
               local_1b0 = 0x10a794;
               uVar23 = ( *pcVar26 )(*(undefined8*)( lVar44 + 0xa0 ), local_178);
               *(undefined8*)( this + 0x6c8 ) = uVar23;
            }
 else {
               lVar44 = *(long*)( local_140[0] + -8 );
               local_1b0 = 0x10a732;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_0010a73b:if (local_150 != 0) {
                     local_1b0 = 0x10a751;
                     StringName::unref();
                  }

               }

               local_1b0 = 0x10a75d;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_170);
               if (lVar44 == 0) goto LAB_0010a762;
            }

            lVar44 = *(long*)( this + 8 );
         }
 else {
            local_1b0 = 0x109f49;
            uVar23 = ( *pcVar26 )(*(undefined8*)( lVar44 + 0xa0 ), this + 0x6b8, uVar19);
            *(undefined8*)( this + 0x6c8 ) = uVar23;
            lVar44 = *(long*)( this + 8 );
         }

         LAB_00109f54:if (*(char*)( lVar44 + 0x29 ) != '\0') {
            local_1b0 = 0x10a7f2;
            plVar21 = (long*)operator_new(0x18, "");
            *plVar21 = (long)( this + 0x6c8 );
            plVar21[1] = (long)( this + 0x6c0 );
            plVar21[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar21;
         }

         this[0x6c0] = (RigidBody2D)0x1;
         local_1b0 = 0x109f72;
         MethodInfo::~MethodInfo((MethodInfo*)local_168);
      }

      pcVar26 = *(code**)( this + 0x6c8 );
      if (pcVar26 != (code*)0x0) {
         local_58[0] = &local_118;
         local_118 = (int)local_160;
         uStack_114 = ( undefined4 )((ulong)local_160 >> 0x20);
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            local_1b0 = 0x109fa0;
            ( *pcVar26 )(*(undefined8*)( this + 0x10 ), local_58, 0);
         }
 else {
            local_1b0 = 0x109ba2;
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x6b8, pcVar26, local_58, 0);
         }

      }

   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      local_1b0 = 0x109ae3;
      Variant::Variant((Variant*)local_78, (Object*)local_160);
      local_1b0 = 0x109b18;
      local_a0 = (Variant*)local_78;
      ( **(code**)( *plVar21 + 0x60 ) )(local_58, plVar21, this + 0x6b8, &local_a0, 1, &local_118);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         local_1b0 = 0x10a530;
         Variant::_clear_internal();
      }

      if (local_118 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            local_1b0 = 0x10a44f;
            Variant::_clear_internal();
         }

         goto LAB_00109b46;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         local_1b0 = 0x109f90;
         Variant::_clear_internal();
      }

   }

   local_1b0 = 0x109bb1;
   ( **(code**)( *(long*)this + 0x298 ) )((Transform2D*)local_78, this);
   local_1b0 = 0x109bbc;
   cVar18 = Transform2D::operator !=((Transform2D*)local_78, local_98);
   if (cVar18 != '\0') {
      local_1b0 = 0x109c9d;
      plVar21 = (long*)PhysicsServer2D::get_singleton();
      pcVar26 = *(code**)( *plVar21 + 0x3e0 );
      local_1b0 = 0x109cb9;
      Variant::Variant((Variant*)local_58, (Transform2D*)local_78);
      local_1b0 = 0x109ccb;
      ( *pcVar26 )(plVar21, *(undefined8*)( this + 0x590 ), 0, (Variant*)local_58);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         local_1b0 = 0x109ce8;
         Variant::_clear_internal();
      }

   }

   LAB_00109bc4:local_1b0 = 0x109bd3;
   _sync_body_state(this, local_160);
   puVar36 = *(undefined1**)( this + 0x6b0 );
   if (puVar36 != (undefined1*)0x0) {
      plVar21 = *(long**)( puVar36 + 0x20 );
      *puVar36 = 1;
      iVar43 = 0;
      if (plVar21 == (long*)0x0) {
         lVar44 = 0;
      }
 else {
         do {
            lVar44 = plVar21[6];
            if (lVar44 != 0) {
               lVar27 = 0;
               do {
                  lVar44 = *(long*)( lVar44 + -8 );
                  if ((int)lVar44 <= (int)lVar27) break;
                  if (lVar44 <= lVar27) {
                     local_1b0 = 1;
                     uStack_1b8 = 0;
                     puStack_1c0 = &_LC34;
                     ppcVar32 = &pcStack_1c8;
                     pcStack_1c8 = "((Vector<T> *)(this))->_cowdata.size()";
                     goto LAB_00109c6e;
                  }

                  iVar43 = iVar43 + 1;
                  local_1b0 = 0x109c1f;
                  CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( plVar21 + 6 ));
                  lVar44 = plVar21[6];
                  *(undefined1*)( lVar44 + 8 + lVar27 * 0xc ) = 0;
                  lVar27 = lVar27 + 1;
               }
 while ( lVar44 != 0 );
            }

            plVar21 = (long*)*plVar21;
         }
 while ( plVar21 != (long*)0x0 );
         lVar44 = (long)iVar43 << 5;
      }

      local_1b0 = 0x109fbb;
      iVar43 = ( **(code**)( *(long*)local_160 + 0x238 ) )();
      pPVar17 = local_160;
      uVar25 = (long)iVar43 * 0x18 + 0x17;
      puVar36 = auStack_1a8;
      while (puVar35 != auStack_1a8 + -(uVar25 & 0xfffffffffffff000)) {
         puVar34 = puVar36 + -0x1000;
         *(undefined8*)( puVar36 + -8 ) = *(undefined8*)( puVar36 + -8 );
         puVar35 = puVar36 + -0x1000;
         puVar36 = puVar36 + -0x1000;
      }
;
      uVar25 = ( ulong )((uint)uVar25 & 0xff0);
      lVar27 = -uVar25;
      puVar36 = puVar34 + lVar27;
      puVar37 = puVar34 + lVar27;
      if (uVar25 != 0) {
         *(undefined8*)( puVar34 + -8 ) = *(undefined8*)( puVar34 + -8 );
      }

      local_198 = ( ulong )(puVar34 + lVar27 + 0xf) & 0xfffffffffffffff0;
      puVar15 = puVar34 + lVar27;
      while (puVar37 != puVar34 + ( lVar27 - ( lVar44 + 0x10U & 0xfffffffffffff000 ) )) {
         puVar36 = puVar15 + -0x1000;
         *(undefined8*)( puVar15 + -8 ) = *(undefined8*)( puVar15 + -8 );
         puVar37 = puVar15 + -0x1000;
         puVar15 = puVar15 + -0x1000;
      }
;
      uVar25 = ( ulong )(( uint )(lVar44 + 0x10U) & 0xfff);
      lVar14 = -uVar25;
      puVar33 = puVar36 + lVar14;
      if (uVar25 != 0) {
         *(undefined8*)( puVar36 + -8 ) = *(undefined8*)( puVar36 + -8 );
      }

      local_168 = (String*)( (ulong)local_168 & 0xffffffff00000000 );
      local_1a0 = ( ulong )(puVar36 + lVar14 + 0xf) & 0xfffffffffffffff0;
      local_188 = 0;
      local_190 = this;
      LAB_0010a090:pcVar26 = *(code**)( *(long*)pPVar17 + 0x238 );
      *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a09d;
      iVar43 = ( *pcVar26 )(pPVar17);
      pSVar16 = local_168;
      this =
      local_190;
      if ((int)local_168 < iVar43) {
         pcVar26 = *(code**)( *(long*)pPVar17 + 0x260 );
         *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a0c0;
         local_180 = (StringName*)( *pcVar26 )(pPVar17, (ulong)local_168 & 0xffffffff);
         pcVar26 = *(code**)( *(long*)pPVar17 + 0x270 );
         *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a0d6;
         pPVar24 = (PhysicsDirectBodyState2D*)( *pcVar26 )(pPVar17, (ulong)pSVar16 & 0xffffffff);
         pcVar26 = *(code**)( *(long*)pPVar17 + 0x250 );
         *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a0ef;
         local_160 = pPVar24;
         uVar19 = ( *pcVar26 )(pPVar17, (ulong)pSVar16 & 0xffffffff);
         local_170 = (String*)CONCAT44(local_170._4_4_, uVar19);
         pcVar26 = *(code**)( *(long*)pPVar17 + 0x280 );
         *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a104;
         iVar43 = ( *pcVar26 )(pPVar17, (ulong)pSVar16 & 0xffffffff);
         lVar44 = *(long*)( local_190 + 0x6b0 );
         local_178 = *(RigidBody2D**)( lVar44 + 0x10 );
         if (( local_178 != (RigidBody2D*)0x0 ) && ( *(int*)( lVar44 + 0x34 ) != 0 )) {
            uVar31 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar44 + 0x30 ) * 4 ));
            lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar44 + 0x30 ) * 8 );
            uVar25 = (long)pPVar24 * 0x3ffff - 1;
            uVar25 = ( uVar25 ^ uVar25 >> 0x1f ) * 0x15;
            uVar25 = ( uVar25 ^ uVar25 >> 0xb ) * 0x41;
            uVar25 = uVar25 >> 0x16 ^ uVar25;
            uVar42 = uVar25 & 0xffffffff;
            if ((int)uVar25 == 0) {
               uVar42 = 1;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar42 * lVar27;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar31;
            lVar29 = SUB168(auVar6 * auVar10, 8);
            uVar39 = *(uint*)( *(long*)( lVar44 + 0x18 ) + lVar29 * 4 );
            uVar28 = SUB164(auVar6 * auVar10, 8);
            if (uVar39 != 0) {
               uVar41 = 0;
               while (( local_184 = iVar43 ),(uint)uVar42 != uVar39 || ( local_160 != *(PhysicsDirectBodyState2D**)( *(long*)( local_178 + lVar29 * 8 ) + 0x10 ) )) {
                  uVar41 = uVar41 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(uVar28 + 1) * lVar27;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar31;
                  lVar29 = SUB168(auVar7 * auVar11, 8);
                  uVar39 = *(uint*)( *(long*)( lVar44 + 0x18 ) + lVar29 * 4 );
                  uVar28 = SUB164(auVar7 * auVar11, 8);
                  if (( uVar39 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar39 * lVar27,auVar12._8_8_ = 0,auVar12._0_8_ = uVar31,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar44 + 0x30 ) * 4 ) + uVar28 ) - SUB164(auVar8 * auVar12, 8)) * lVar27,auVar13._8_8_ = 0,auVar13._0_8_ = uVar31,SUB164(auVar9 * auVar13, 8) < uVar41) goto LAB_0010a2a8;
               }
;
               lVar29 = *(long*)( local_178 + (ulong)uVar28 * 8 );
               if (( lVar29 != 0 ) && ( lVar5 = lVar5 != 0 )) {
                  lVar44 = *(long*)( lVar5 + -8 );
                  iVar38 = (int)lVar44 + -1;
                  if (lVar44 < 1) {
                     *(undefined8*)( puVar36 + lVar14 + -8 ) = 1;
                     lVar27 = 0;
                     *(undefined8*)( puVar36 + lVar14 + -0x10 ) = 0;
                     *(undefined**)( puVar36 + lVar14 + -0x18 ) = &_LC34;
                     *(char**)( puVar36 + lVar14 + -0x20 ) = "size()";
                     goto LAB_0010a4ff;
                  }

                  iVar40 = 0;
                  if (-1 < iVar38) goto LAB_0010a277;
               }

            }

         }

         goto LAB_0010a2a8;
      }

      iVar43 = 0;
      plVar21 = *(long**)( *(long*)( local_190 + 0x6b0 ) + 0x20 );
      if (plVar21 != (long*)0x0) {
         do {
            plVar22 = (long*)plVar21[6];
            if (plVar22 != (long*)0x0) {
               lVar44 = plVar22[-1];
               lVar27 = 0;
               if (0 < (int)lVar44) {
                  do {
                     if (lVar44 <= lVar27) {
                        *(undefined8*)( puVar36 + lVar14 + -8 ) = 1;
                        *(undefined8*)( puVar36 + lVar14 + -0x10 ) = 0;
                        *(undefined**)( puVar36 + lVar14 + -0x18 ) = &_LC34;
                        *(char**)( puVar36 + lVar14 + -0x20 ) = "size()";
                        LAB_0010a4ff:*(undefined8*)( puVar36 + lVar14 + -0x28 ) = 0x10a517;
                        _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar27, lVar44, "p_index", *(char**)( puVar36 + lVar14 + -0x20 ), *(char**)( puVar36 + lVar14 + -0x18 ), (bool)puVar36[lVar14 + -0x10], (bool)puVar36[lVar14 + -8]);
                        *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a520;
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar26 = (code*)invalidInstructionException();
                        ( *pcVar26 )();
                     }

                     if ((char)plVar22[1] == '\0') {
                        lVar29 = (long)iVar43;
                        iVar43 = iVar43 + 1;
                        plVar30 = (long*)( lVar29 * 0x20 + local_1a0 );
                        *plVar30 = plVar21[3];
                        lVar29 = plVar21[2];
                        *(undefined1*)( plVar30 + 3 ) = 0;
                        plVar30[1] = lVar29;
                        plVar30[2] = *plVar22;
                     }

                     lVar27 = lVar27 + 1;
                     plVar22 = (long*)( (long)plVar22 + 0xc );
                  }
 while ( (int)lVar27 < (int)lVar44 );
               }

            }

            plVar21 = (long*)*plVar21;
         }
 while ( plVar21 != (long*)0x0 );
         if (0 < iVar43) {
            uVar31 = (long)iVar43 * 0x20 + local_1a0;
            uVar25 = local_1a0;
            do {
               uVar23 = *(undefined8*)( uVar25 + 8 );
               uVar19 = *(undefined4*)( uVar25 + 0x14 );
               uVar4 = *(undefined4*)( uVar25 + 0x10 );
               uVar42 = uVar25 + 0x20;
               *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x109d7d;
               _body_inout(this, 0, uVar25, uVar23, uVar4, uVar19);
               uVar25 = uVar42;
            }
 while ( uVar42 != uVar31 );
         }

      }

      if (0 < local_188) {
         uVar25 = local_198 + (long)local_188 * 0x18;
         uVar31 = local_198;
         do {
            uVar23 = *(undefined8*)( uVar31 + 8 );
            uVar19 = *(undefined4*)( uVar31 + 0x14 );
            uVar4 = *(undefined4*)( uVar31 + 0x10 );
            uVar42 = uVar31 + 0x18;
            *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x109dc8;
            _body_inout(this, 1, uVar31, uVar23, uVar4, uVar19);
            uVar31 = uVar42;
         }
 while ( uVar42 != uVar25 );
      }

      **(undefined1**)( this + 0x6b0 ) = 0;
   }

   if (*(int*)( this + 0x598 ) == 0) {
      *(undefined8*)( puVar33 + -8 ) = 0x10a57d;
      _err_print_error("unlock_callback", "./scene/2d/physics/collision_object_2d.h", 0x59, "Condition \"callback_lock == 0\" is true.", 0, 0);
   }
 else {
      *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + -1;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar33 + -8 ) = 0x10a8a6;
   __stack_chk_fail();
   LAB_0010a277:do {
      iVar20 = ( iVar40 + iVar38 ) / 2;
      lVar27 = (long)iVar20;
      piVar1 = (int*)( lVar5 + lVar27 * 0xc );
      iVar3 = *piVar1;
      if (iVar43 == iVar3) {
         iVar3 = piVar1[1];
         if ((int)local_170 < iVar3) goto LAB_0010a270;
         if ((int)local_170 <= iVar3) {
            if (iVar20 != -1) {
               if (( iVar40 + iVar38 < -1 ) || ( lVar44 <= lVar27 )) {
                  *(undefined8*)( puVar36 + lVar14 + -8 ) = 1;
                  *(undefined8*)( puVar36 + lVar14 + -0x10 ) = 0;
                  *(undefined**)( puVar36 + lVar14 + -0x18 ) = &_LC34;
                  ppcVar32 = (char**)( puVar36 + lVar14 + -0x20 );
                  *(char**)( puVar36 + lVar14 + -0x20 ) = "((Vector<T> *)(this))->_cowdata.size()";
                  LAB_00109c6e:ppcVar32[-1] = (char*)0x109c86;
                  _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar27, lVar44, "p_index", *ppcVar32, ppcVar32[1], *(bool*)( ppcVar32 + 2 ), *(bool*)( ppcVar32 + 3 ));
                  ppcVar32[3] = (char*)0x109c8f;
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar26 = (code*)invalidInstructionException();
                  ( *pcVar26 )();
               }

               *(undefined8*)( puVar36 + lVar14 + -8 ) = 0x10a48c;
               CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( lVar29 + 0x30 ));
               *(undefined1*)( lVar27 * 0xc + *(long*)( lVar29 + 0x30 ) + 8 ) = 1;
               goto LAB_0010a495;
            }

            break;
         }

         LAB_0010a29d:iVar40 = iVar20 + 1;
         if (iVar38 < iVar40) break;
         goto LAB_0010a277;
      }

      if (iVar3 <= iVar43) goto LAB_0010a29d;
      LAB_0010a270:iVar38 = iVar20 + -1;
   }
 while ( iVar40 <= iVar38 );
   LAB_0010a2a8:puVar2 = (undefined8*)( local_198 + (long)local_188 * 0x18 );
   local_188 = local_188 + 1;
   *puVar2 = local_180;
   *(int*)( (long)puVar2 + 0x14 ) = (int)local_170;
   puVar2[1] = local_160;
   *(int*)( puVar2 + 2 ) = iVar43;
   LAB_0010a495:local_168 = (String*)CONCAT44(local_168._4_4_, (int)local_168 + 1);
   goto LAB_0010a090;
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
   return;
}
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
   return;
}
/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
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
/* CanvasItem::_edit_get_minimum_size() const */undefined8 CanvasItem::_edit_get_minimum_size(void) {
   return 0xbf800000bf800000;
}
/* CanvasItem::_edit_use_pivot() const */undefined8 CanvasItem::_edit_use_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_set_pivot(Vector2 const&) */void CanvasItem::_edit_set_pivot(Vector2 *param_1) {
   return;
}
/* CanvasItem::_edit_get_pivot() const */undefined8 CanvasItem::_edit_get_pivot(void) {
   return 0;
}
/* CanvasItem::_edit_use_rect() const */undefined8 CanvasItem::_edit_use_rect(void) {
   return 0;
}
/* CanvasItem::_edit_get_rect() const */undefined1[16];CanvasItem::_edit_get_rect(void) {
   return ZEXT816(0);
}
/* CanvasItem::get_anchorable_rect() const */undefined1[16];CanvasItem::get_anchorable_rect(void) {
   return ZEXT816(0);
}
/* PhysicsBody2D::is_class_ptr(void*) const */uint PhysicsBody2D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x122b, in_RSI == &CollisionObject2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* PhysicsBody2D::_property_can_revertv(StringName const&) const */undefined8 PhysicsBody2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PhysicsBody2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 PhysicsBody2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RigidBody2D::_property_can_revertv(StringName const&) const */undefined8 RigidBody2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RigidBody2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 RigidBody2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<RigidBody2D, void,
   PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this) {
   return;
}
/* CallableCustomMethodPointer<RigidBody2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void> *this) {
   return;
}
/* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this) {
   return;
}
/* MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTRC<TypedArray<Node2D>>::get_argument_meta(int) const */undefined8 MethodBindTRC<TypedArray<Node2D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RigidBody2D::FreezeMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<RigidBody2D::FreezeMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<RigidBody2D::FreezeMode>::_gen_argument_type(int) const */char MethodBindT<RigidBody2D::FreezeMode>::_gen_argument_type(MethodBindT<RigidBody2D::FreezeMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<RigidBody2D::FreezeMode>::get_argument_meta(int) const */undefined8 MethodBindT<RigidBody2D::FreezeMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector2 const&, Vector2 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector2_const&,Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&,Vector2_const&> *this, int param_1) {
   return -((uint)param_1 < 2) & 5;
}
/* MethodBindT<Vector2 const&, Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector2_const&,Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<RigidBody2D::CCDMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RigidBody2D::CCDMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<RigidBody2D::CCDMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<RigidBody2D::CCDMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<RigidBody2D::CCDMode>::_gen_argument_type(int) const */char MethodBindT<RigidBody2D::CCDMode>::_gen_argument_type(MethodBindT<RigidBody2D::CCDMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<RigidBody2D::CCDMode>::get_argument_meta(int) const */undefined8 MethodBindT<RigidBody2D::CCDMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool>::_gen_argument_type(int) const */undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTR<bool>::get_argument_meta(int) const */undefined8 MethodBindTR<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<RigidBody2D::DampMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RigidBody2D::DampMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<RigidBody2D::DampMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<RigidBody2D::DampMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<RigidBody2D::DampMode>::_gen_argument_type(int) const */char MethodBindT<RigidBody2D::DampMode>::_gen_argument_type(MethodBindT<RigidBody2D::DampMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<RigidBody2D::DampMode>::get_argument_meta(int) const */undefined8 MethodBindT<RigidBody2D::DampMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<PhysicsMaterial>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<PhysicsMaterial>const&>::_gen_argument_type(MethodBindT<Ref<PhysicsMaterial>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<PhysicsMaterial>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector2 const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2_const&>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector2 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector2_const&>::_gen_argument_type(MethodBindT<Vector2_const&> *this, int param_1) {
   return -(param_1 == 0) & 5;
}
/* MethodBindT<Vector2 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector2_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<RigidBody2D::CenterOfMassMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<RigidBody2D::CenterOfMassMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::_gen_argument_type(int) const */char MethodBindT<RigidBody2D::CenterOfMassMode>::_gen_argument_type(MethodBindT<RigidBody2D::CenterOfMassMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::get_argument_meta(int) const */undefined8 MethodBindT<RigidBody2D::CenterOfMassMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* CallableCustomMethodPointer<RigidBody2D, void,
   PhysicsDirectBodyState2D*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::get_argument_count(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RigidBody2D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RigidBody2D,void>::get_argument_count(CallableCustomMethodPointer<RigidBody2D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::get_argument_count(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RigidBody2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RigidBody2D, void,
   PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT(MethodBindT<RigidBody2D::CenterOfMassMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001223d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT(MethodBindT<RigidBody2D::CenterOfMassMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001223d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CenterOfMassMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CenterOfMassMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001224f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001224f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */void MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */void MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */void MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001225b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */void MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001225b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<RigidBody2D::DampMode>::~MethodBindT() */void MethodBindT<RigidBody2D::DampMode>::~MethodBindT(MethodBindT<RigidBody2D::DampMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<RigidBody2D::DampMode>::~MethodBindT() */void MethodBindT<RigidBody2D::DampMode>::~MethodBindT(MethodBindT<RigidBody2D::DampMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::DampMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::DampMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122738;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122738;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122798;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122798;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122858;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122858;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<RigidBody2D::CCDMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CCDMode>::~MethodBindT(MethodBindT<RigidBody2D::CCDMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122918;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<RigidBody2D::CCDMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CCDMode>::~MethodBindT(MethodBindT<RigidBody2D::CCDMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122918;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CCDMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122978;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CCDMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122978;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector2 const&, Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&,Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001229d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector2 const&, Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&,Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&,Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001229d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001226d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001226d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122318;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122318;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122378;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122378;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001227f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001227f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001228b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001228b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT() */void MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody2D::FreezeMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122a38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT() */void MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody2D::FreezeMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122a38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::FreezeMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122a98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::FreezeMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122a98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122af8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00122af8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* PhysicsBody2D::_getv(StringName const&, Variant&) const */undefined8 PhysicsBody2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RigidBody2D::_getv(StringName const&, Variant&) const */undefined8 RigidBody2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* PhysicsBody2D::_setv(StringName const&, Variant const&) */undefined8 PhysicsBody2D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00129008 != Object::_set) {
      uVar1 = CanvasItem::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RigidBody2D::_setv(StringName const&, Variant const&) */undefined8 RigidBody2D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00129008 != Object::_set) {
      uVar1 = CanvasItem::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* PhysicsBody2D::~PhysicsBody2D() */void PhysicsBody2D::~PhysicsBody2D(PhysicsBody2D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00121b78;
   if (*(long*)( this + 0x648 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x648 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
            return;
         }

      }

   }

   CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RigidBody2D::ShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RigidBody2D::ShapePair>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::get_object() const */undefined8 CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::get_object(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c55d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c55d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c55d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RigidBody2D, void, PhysicsDirectBodyState2D*>::get_object() const */undefined8 CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::get_object(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c65d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c65d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c65d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RigidBody2D, void>::get_object() const */undefined8 CallableCustomMethodPointer<RigidBody2D,void>::get_object(CallableCustomMethodPointer<RigidBody2D,void> *this) {
   long lVar1;
   undefined8 uVar2;
   uint uVar3;
   ulong *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         LOCK();
         bVar5 = (char)ObjectDB::spin_lock == '\0';
         if (bVar5) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar5) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010c75d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c75d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c75d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* PhysicsBody2D::_validate_propertyv(PropertyInfo&) const */void PhysicsBody2D::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   if ((code*)PTR__validate_property_00129010 == Node::_validate_property) {
      return;
   }

   CanvasItem::_validate_property(param_1);
   return;
}
/* PhysicsBody2D::_notificationv(int, bool) */void PhysicsBody2D::_notificationv(PhysicsBody2D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00129018 != Node2D::_notification) {
         CollisionObject2D::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Node2D::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_00129018 == Node2D::_notification) {
      return;
   }

   CollisionObject2D::_notification(iVar1);
   return;
}
/* RigidBody2D::is_class_ptr(void*) const */uint RigidBody2D::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x122b, in_RSI == &CollisionObject2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &PhysicsBody2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x122b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* PhysicsBody2D::~PhysicsBody2D() */void PhysicsBody2D::~PhysicsBody2D(PhysicsBody2D *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00121b78;
   if (*(long*)( this + 0x648 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x648 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
   operator_delete(this, 0x650);
   return;
}
/* RigidBody2D::_validate_propertyv(PropertyInfo&) const */void RigidBody2D::_validate_propertyv(RigidBody2D *this, PropertyInfo *param_1) {
   long lVar1;
   char cVar2;
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00129010 != Node::_validate_property) {
      CanvasItem::_validate_property((PropertyInfo*)this);
   }

   if (( *(int*)( this + 0x660 ) == 1 ) || ( cVar2 = String::operator ==((String*)( param_1 + 8 ), "center_of_mass") ),cVar2 == '\0') {
      lVar1 = *(long*)( this + 0x6b0 );
   }
 else {
      lVar1 = *(long*)( this + 0x6b0 );
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   if (( lVar1 == 0 ) && ( cVar2 = String::operator ==((String*)( param_1 + 8 ), "max_contacts_reported") ),cVar2 != '\0') {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   return;
}
/* RigidBody2D::_notificationv(int, bool) */void RigidBody2D::_notificationv(RigidBody2D *this, int param_1, bool param_2) {
   long lVar1;
   if (param_2) {
      if (param_1 == 10) {
         lVar1 = Engine::get_singleton();
         if (*(char*)( lVar1 + 0xc0 ) != '\0') {
            CanvasItem::set_notify_local_transform(SUB81(this, 0));
         }

      }
 else if (param_1 == 0x23) {
         Node::update_configuration_warnings();
      }

      PhysicsBody2D::_notificationv((PhysicsBody2D*)this, param_1, true);
      return;
   }

   PhysicsBody2D::_notificationv((PhysicsBody2D*)this, param_1, false);
   if (param_1 == 10) {
      lVar1 = Engine::get_singleton();
      if (*(char*)( lVar1 + 0xc0 ) != '\0') {
         CanvasItem::set_notify_local_transform(SUB81(this, 0));
         return;
      }

   }
 else if (param_1 == 0x23) {
      Node::update_configuration_warnings();
      return;
   }

   return;
}
/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
   char *__s;
   long lVar1;
   long in_RSI;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   __s = *(char**)( in_RSI + 0x20 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   if (__s != (char*)0x0) {
      strlen(__s);
   }

   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RigidBody2D::ShapePair>::_ref(CowData<RigidBody2D::ShapePair> const&) [clone .part.0] */void CowData<RigidBody2D::ShapePair>::_ref(CowData<RigidBody2D::ShapePair> *this, CowData *param_1) {
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
/* RigidBody2D::_get_class_namev() const */undefined8 *RigidBody2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010ccd3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010ccd3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RigidBody2D");
         goto LAB_0010cd3e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RigidBody2D");
   LAB_0010cd3e:return &_get_class_namev();
}
/* PhysicsBody2D::_get_class_namev() const */undefined8 *PhysicsBody2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010cdc3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010cdc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsBody2D");
         goto LAB_0010ce2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PhysicsBody2D");
   LAB_0010ce2e:return &_get_class_namev();
}
/* RigidBody2D::get_class() const */void RigidBody2D::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* PhysicsBody2D::get_class() const */void PhysicsBody2D::get_class(void) {
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
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }

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
/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 5;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d14c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d14c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<PhysicsMaterial>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "PhysicsMaterial";
   local_40 = 0xf;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_0010d250;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010d250:lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 3;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d46c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d46c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 5;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d5ec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d5ec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Node2D";
   local_40 = 6;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(char**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(char**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d77c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d77c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010d8fc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d8fc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010da7c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010da7c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC34;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010dbfc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010dbfc:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

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
      StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010decf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010decf:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010df83;
   }

   cVar6 = String::operator ==((String*)param_1, "CanvasItem");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010e05b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010e05b:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010df83;
      }

      cVar6 = String::operator ==((String*)param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_0010e13b;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_0010e13b:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010df83;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==((String*)param_1, "Object");
            return uVar7;
         }

         goto LAB_0010e1e4;
      }

   }

   LAB_0010df83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e1e4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CollisionObject2D::is_class(String const&) const */undefined8 CollisionObject2D::is_class(CollisionObject2D *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010e26f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010e26f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010e323;
   }

   cVar6 = String::operator ==((String*)param_1, "CollisionObject2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010e3e3;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010e3e3:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010e323;
      }

      cVar6 = String::operator ==((String*)param_1, "Node2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar7;
         }

         goto LAB_0010e48c;
      }

   }

   LAB_0010e323:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e48c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicsBody2D::is_class(String const&) const */undefined8 PhysicsBody2D::is_class(PhysicsBody2D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010e50f;
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

      LAB_0010e50f:cVar5 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010e5c3;
   }

   cVar5 = String::operator ==((String*)param_1, "PhysicsBody2D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = CollisionObject2D::is_class((CollisionObject2D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010e5c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::is_class(String const&) const */undefined8 RigidBody2D::is_class(RigidBody2D *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010e68f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010e68f:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010e743;
   }

   cVar6 = String::operator ==((String*)param_1, "RigidBody2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010e803;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010e803:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010e743;
      }

      cVar6 = String::operator ==((String*)param_1, "PhysicsBody2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = CollisionObject2D::is_class((CollisionObject2D*)this, param_1);
            return uVar7;
         }

         goto LAB_0010e8ac;
      }

   }

   LAB_0010e743:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e8ac:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* GetTypeInfo<PhysicsDirectBodyState2D*, void>::get_class_info() */GetTypeInfo<PhysicsDirectBodyState2D*,void> * __thiscall
GetTypeInfo<PhysicsDirectBodyState2D*,void>::get_class_info
          (GetTypeInfo<PhysicsDirectBodyState2D*,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   bool bVar3;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x18;
   local_38 = "PhysicsDirectBodyState2D";
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   *(undefined4*)this = 0x18;
   *(undefined8*)( this + 8 ) = 0;
   StringName::StringName((StringName*)( this + 0x10 ), (StringName*)&local_38);
   bVar3 = StringName::configured != '\0';
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 6;
   if (( bVar3 ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, RigidBody2D::BodyState, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   RigidBody2D::BodyState> > >::insert(ObjectID const&, RigidBody2D::BodyState const&, bool) */ObjectID *
HashMap<ObjectID,RigidBody2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,RigidBody2D::BodyState>>>
::insert(ObjectID *param_1,BodyState *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   undefined1 uVar3;
   long lVar4;
   void *pvVar5;
   void *__s;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1(*pauVar30)[16];
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   undefined8 uVar34;
   void *__s_00;
   undefined8 *puVar35;
   undefined8 *in_RCX;
   int iVar36;
   undefined7 in_register_00000011;
   long *plVar37;
   long lVar38;
   long lVar39;
   uint uVar40;
   long lVar41;
   undefined8 uVar42;
   uint uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   ulong uVar47;
   undefined1(*pauVar48)[16];
   long in_FS_OFFSET;
   undefined1(*pauStack_c0)[16];
   void *local_b8;
   long local_48;
   long local_40;
   plVar37 = (long*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_b8 = *(void**)( param_2 + 8 );
   if (local_b8 == (void*)0x0) {
      uVar46 = (ulong)uVar40;
      uVar33 = uVar46 * 4;
      uVar47 = uVar46 * 8;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      local_b8 = (void*)Memory::alloc_static(uVar47, false);
      *(void**)( param_2 + 8 ) = local_b8;
      if (uVar40 != 0) {
         pvVar5 = *(void**)( param_2 + 0x10 );
         if (( pvVar5 < (void*)( (long)local_b8 + uVar47 ) ) && ( local_b8 < (void*)( (long)pvVar5 + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)pvVar5 + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)local_b8 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar46 != uVar33 );
            goto LAB_0010ef81;
         }

         memset(pvVar5, 0, uVar33);
         memset(local_b8, 0, uVar47);
         lVar41 = *plVar37;
         iVar36 = *(int*)( param_2 + 0x2c );
         goto LAB_0010ef91;
      }

      lVar41 = *plVar37;
      iVar36 = *(int*)( param_2 + 0x2c );
      if (local_b8 != (void*)0x0) goto LAB_0010ef91;
   }
 else {
      LAB_0010ef81:lVar41 = *plVar37;
      iVar36 = *(int*)( param_2 + 0x2c );
      LAB_0010ef91:if (iVar36 != 0) {
         uVar47 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar33 = lVar41 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar46 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar46 = 1;
         }

         uVar45 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar46 * lVar4;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar47;
         lVar38 = SUB168(auVar6 * auVar18, 8);
         uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
         uVar32 = SUB164(auVar6 * auVar18, 8);
         if (uVar43 != 0) {
            do {
               if (( uVar43 == (uint)uVar46 ) && ( lVar41 == *(long*)( *(long*)( (long)local_b8 + lVar38 * 8 ) + 0x10 ) )) {
                  lVar41 = *(long*)( (long)local_b8 + (ulong)uVar32 * 8 );
                  *(undefined8*)( lVar41 + 0x18 ) = *in_RCX;
                  lVar4 = in_RCX[3];
                  *(undefined1*)( lVar41 + 0x20 ) = *(undefined1*)( in_RCX + 1 );
                  if (*(long*)( lVar41 + 0x30 ) != lVar4) {
                     CowData<RigidBody2D::ShapePair>::_ref((CowData<RigidBody2D::ShapePair>*)( lVar41 + 0x30 ), (CowData*)( in_RCX + 3 ));
                  }

                  pauStack_c0 = *(undefined1(**) [16])( *(long*)( param_2 + 8 ) + (ulong)uVar32 * 8 );
                  goto LAB_0010f546;
               }

               uVar45 = uVar45 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar32 + 1) * lVar4;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar47;
               lVar38 = SUB168(auVar7 * auVar19, 8);
               uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
               uVar32 = SUB164(auVar7 * auVar19, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar43 * lVar4,auVar20._8_8_ = 0,auVar20._0_8_ = uVar47,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar32 ) - SUB164(auVar8 * auVar20, 8)) * lVar4,auVar21._8_8_ = 0,auVar21._0_8_ = uVar47,uVar45 <= SUB164(auVar9 * auVar21, 8) );
         }

      }

   }

   if ((float)uVar40 * __LC54 < (float)( iVar36 + 1 )) {
      uVar40 = *(uint*)( param_2 + 0x28 );
      if (uVar40 == 0x1c) {
         pauStack_c0 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010f546;
      }

      uVar33 = ( ulong )(uVar40 + 1);
      uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar40 + 1 < 2) {
         uVar33 = 2;
      }

      uVar40 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( param_2 + 0x28 ) = (int)uVar33;
      pvVar5 = *(void**)( param_2 + 0x10 );
      uVar46 = (ulong)uVar40;
      uVar33 = uVar46 * 4;
      uVar47 = uVar46 * 8;
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar34;
      __s_00 = (void*)Memory::alloc_static(uVar47, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar40 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar47 ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar46 != uVar33 );
         }
 else {
            memset(__s, 0, uVar33);
            memset(__s_00, 0, uVar47);
         }

      }

      uVar33 = 0;
      if (uVar43 != 0) {
         do {
            uVar40 = *(uint*)( (long)pvVar5 + uVar33 * 4 );
            if (uVar40 != 0) {
               uVar44 = 0;
               lVar41 = *(long*)( param_2 + 0x10 );
               uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar47 = CONCAT44(0, uVar32);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar40 * lVar4;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar47;
               lVar38 = SUB168(auVar10 * auVar22, 8);
               puVar2 = (uint*)( lVar41 + lVar38 * 4 );
               iVar36 = SUB164(auVar10 * auVar22, 8);
               uVar45 = *puVar2;
               uVar34 = *(undefined8*)( (long)local_b8 + uVar33 * 8 );
               while (uVar45 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar45 * lVar4;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar47;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar32 + iVar36 ) - SUB164(auVar11 * auVar23, 8)) * lVar4;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar47;
                  uVar31 = SUB164(auVar12 * auVar24, 8);
                  uVar42 = uVar34;
                  if (uVar31 < uVar44) {
                     *puVar2 = uVar40;
                     puVar35 = (undefined8*)( (long)__s_00 + lVar38 * 8 );
                     uVar42 = *puVar35;
                     *puVar35 = uVar34;
                     uVar40 = uVar45;
                     uVar44 = uVar31;
                  }

                  uVar44 = uVar44 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar47;
                  lVar38 = SUB168(auVar13 * auVar25, 8);
                  puVar2 = (uint*)( lVar41 + lVar38 * 4 );
                  iVar36 = SUB164(auVar13 * auVar25, 8);
                  uVar34 = uVar42;
                  uVar45 = *puVar2;
               }
;
               *(undefined8*)( (long)__s_00 + lVar38 * 8 ) = uVar34;
               *puVar2 = uVar40;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar33 = uVar33 + 1;
         }
 while ( uVar33 != uVar43 );
         Memory::free_static(local_b8, false);
         Memory::free_static(pvVar5, false);
      }

   }

   local_48 = 0;
   lVar41 = *plVar37;
   uVar3 = *(undefined1*)( in_RCX + 1 );
   uVar34 = *in_RCX;
   if (in_RCX[3] == 0) {
      pauStack_c0 = (undefined1(*) [16])operator_new(0x38, "");
      *pauStack_c0 = (undefined1[16])0x0;
      pauStack_c0[2][0] = uVar3;
      *(long*)pauStack_c0[1] = lVar41;
      *(undefined8*)pauStack_c0[3] = 0;
      *(undefined8*)( pauStack_c0[1] + 8 ) = uVar34;
      LAB_0010f3ec:puVar35 = *(undefined8**)( param_2 + 0x20 );
      if (puVar35 != (undefined8*)0x0) goto LAB_0010f3fe;
      LAB_0010f5c5:*(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_c0;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_c0;
   }
 else {
      CowData<RigidBody2D::ShapePair>::_ref((CowData<RigidBody2D::ShapePair>*)&local_48, (CowData*)( in_RCX + 3 ));
      lVar4 = local_48;
      pauStack_c0 = (undefined1(*) [16])operator_new(0x38, "");
      *(undefined8*)*pauStack_c0 = 0;
      *(undefined8*)( *pauStack_c0 + 8 ) = 0;
      pauStack_c0[2][0] = uVar3;
      *(long*)pauStack_c0[1] = lVar41;
      *(undefined8*)pauStack_c0[3] = 0;
      *(undefined8*)( pauStack_c0[1] + 8 ) = uVar34;
      if (lVar4 == 0) goto LAB_0010f3ec;
      CowData<RigidBody2D::ShapePair>::_ref((CowData<RigidBody2D::ShapePair>*)( pauStack_c0 + 3 ), (CowData*)&local_48);
      LOCK();
      plVar1 = (long*)( lVar4 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010f3ec;
      Memory::free_static((void*)( local_48 + -0x10 ), false);
      puVar35 = *(undefined8**)( param_2 + 0x20 );
      if (puVar35 == (undefined8*)0x0) goto LAB_0010f5c5;
      LAB_0010f3fe:if (in_R8B == '\0') {
         *puVar35 = pauStack_c0;
         *(undefined8**)( *pauStack_c0 + 8 ) = puVar35;
         *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_c0;
      }
 else {
         lVar41 = *(long*)( param_2 + 0x18 );
         *(undefined1(**) [16])( lVar41 + 8 ) = pauStack_c0;
         *(long*)*pauStack_c0 = lVar41;
         *(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_c0;
      }

   }

   lVar41 = *(long*)( param_2 + 0x10 );
   uVar33 = *plVar37 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar47 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar47 = 1;
   }

   uVar45 = 0;
   uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar33 = CONCAT44(0, uVar40);
   uVar32 = (uint)uVar47;
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar47 * lVar4;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar33;
   lVar39 = SUB168(auVar14 * auVar26, 8);
   lVar38 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar41 + lVar39 * 4 );
   iVar36 = SUB164(auVar14 * auVar26, 8);
   uVar43 = *puVar2;
   pauVar30 = pauStack_c0;
   while (uVar43 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar43 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar33;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar40 + iVar36 ) - SUB164(auVar15 * auVar27, 8)) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar33;
      uVar32 = SUB164(auVar16 * auVar28, 8);
      pauVar48 = pauVar30;
      if (uVar32 < uVar45) {
         *puVar2 = (uint)uVar47;
         uVar47 = (ulong)uVar43;
         puVar35 = (undefined8*)( lVar38 + lVar39 * 8 );
         pauVar48 = (undefined1(*) [16])*puVar35;
         *puVar35 = pauVar30;
         uVar45 = uVar32;
      }

      uVar32 = (uint)uVar47;
      uVar45 = uVar45 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar36 + 1) * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar33;
      lVar39 = SUB168(auVar17 * auVar29, 8);
      puVar2 = (uint*)( lVar41 + lVar39 * 4 );
      iVar36 = SUB164(auVar17 * auVar29, 8);
      pauVar30 = pauVar48;
      uVar43 = *puVar2;
   }
;
   *(undefined1(**) [16])( lVar38 + lVar39 * 8 ) = pauVar30;
   *puVar2 = uVar32;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010f546:*(undefined1(**) [16])param_1 = pauStack_c0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Callable create_custom_callable_function_pointer<RigidBody2D, ObjectID>(RigidBody2D*, char
   const*, void (RigidBody2D::*)(ObjectID)) */RigidBody2D *create_custom_callable_function_pointer<RigidBody2D,ObjectID>(RigidBody2D *param_1, char *param_2, _func_void_ObjectID *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC34;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00122168;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_ObjectID**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable Callable::bind<ObjectID>(ObjectID) const */Variant **Callable::bind<ObjectID>(Variant **param_1, int param_2, undefined8 param_3) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_70;
   Variant *local_68;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_3;
   Variant::Variant((Variant*)local_58, (ObjectID*)&local_70);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   local_68 = (Variant*)local_58;
   Callable::bindp(param_1, param_2);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Callable create_custom_callable_function_pointer<RigidBody2D>(RigidBody2D*, char const*, void
   (RigidBody2D::*)()) */RigidBody2D *create_custom_callable_function_pointer<RigidBody2D>(RigidBody2D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC34;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001221f8;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* void memdelete<RigidBody2D::ContactMonitor>(RigidBody2D::ContactMonitor*) */void memdelete<RigidBody2D::ContactMonitor>(ContactMonitor *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( param_1 + 0x10 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( param_1 + 0x34 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x30 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( param_1 + 0x34 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x20 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x18 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( param_1 + 0x18 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x30 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x30 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x30 );
                        *(undefined8*)( (long)pvVar5 + 0x30 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( param_1 + 0x10 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( param_1 + 0x34 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x20 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010fa9e;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( param_1 + 0x18 ), false);
   }

   LAB_0010fa9e:Memory::free_static(param_1, false);
   return;
}
/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */char *D_METHOD<char_const*>(char *param_1, char *param_2) {
   long in_FS_OFFSET;
   undefined1 local_38[8];
   undefined8 local_30;
   undefined1 *local_28[3];
   long local_10;
   local_28[0] = local_38;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   D_METHODP(param_1, (char***)param_2, (uint)local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
/* CallableCustomMethodPointer<RigidBody2D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RigidBody2D,void>::call(CallableCustomMethodPointer<RigidBody2D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar5 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar5 << 8 );
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         local_48 = (char*)( uVar5 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010fd6f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010fd6f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010fd48. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010fe31;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010fd6f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010fe31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RigidBody2D, void, PhysicsDirectBodyState2D*>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::call(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00110075;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_00110075;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar5 == '\0') {
               LAB_0010ff80:uVar4 = _LC73;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }
 else {
               this_00 = *param_1;
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &PhysicsDirectBodyState2D::typeinfo, 0) ),lVar8 == 0 )) goto LAB_0010ff80;
            }

            pOVar6 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar6 != (Object*)0x0) {
               pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &PhysicsDirectBodyState2D::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010ffe7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar6);
               return;
            }

            goto LAB_00110137;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00110075:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00110137:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::call(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   char cVar4;
   undefined8 uVar5;
   uint uVar6;
   ulong *puVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001102f9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001102f9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar5 = _LC74;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001102a8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5);
               return;
            }

            goto LAB_001103bb;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001102f9:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC72, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001103bb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PhysicsBody2D::_initialize_classv() */void PhysicsBody2D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (CollisionObject2D::initialize_class() == '\0') {
         if (Node2D::initialize_class() == '\0') {
            if (CanvasItem::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_68 = 0;
                  local_50 = 6;
                  local_58 = "Object";
                  String::parse_latin1((StrRange*)&local_68);
                  StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
                  local_58 = "Node";
                  local_70 = 0;
                  local_50 = 4;
                  String::parse_latin1((StrRange*)&local_70);
                  StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  if ((code*)PTR__bind_methods_00129030 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
               local_58 = "CanvasItem";
               local_70 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CanvasItem::_bind_methods();
               if ((code*)PTR__bind_compatibility_methods_00129020 != Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
               }

               CanvasItem::initialize_class()::initialized =
               '\x01';
            }

            local_58 = "CanvasItem";
            local_68 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
            local_58 = "Node2D";
            local_70 = 0;
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Node2D::_bind_methods();
            Node2D::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "Node2D";
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "CollisionObject2D";
         local_70 = 0;
         local_50 = 0x11;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CollisionObject2D::_bind_methods();
         CollisionObject2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "CollisionObject2D";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "PhysicsBody2D";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)PTR__bind_methods_00129028 != CollisionObject2D::_bind_methods) {
         PhysicsBody2D::_bind_methods();
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
/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011098b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC34;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110a80:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110a80;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011098b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Vector2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector2_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00110bcb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC34;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110cc0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110cc0;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00110bcb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<PhysicsMaterial>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00110e0b;
   local_78 = 0;
   local_80 = 0;
   local_68 = "PhysicsMaterial";
   local_60._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110fa5:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_00110fa5;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar4 = local_68._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
   }

   if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar4 + 4 ) = uVar2;
   }

   puVar4[6] = local_50;
   if (*(long*)( puVar4 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( puVar4 + 8 ) = lVar3;
   }

   puVar4[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_00110e0b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011105b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC34;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00111150:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00111150;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011105b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0011129b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC34;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00111390:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00111390;
      StringName::StringName((StringName*)&local_70, (CowData<char32_t>*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011129b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Vector2 const&, Vector2 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector2_const&,Vector2_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   long lVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar6 = 0;
   puVar6[6] = 0;
   *(undefined8*)( puVar6 + 8 ) = 0;
   puVar6[10] = 6;
   *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC34;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 5, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }
 else {
      if (in_EDX != 1) goto LAB_001114ea;
      local_88 = 0;
      local_90 = 0;
      local_78 = &_LC34;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (undefined*)CONCAT44(local_78._4_4_, 5);
      local_60 = 0;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_00111710:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if (local_60 != 0x11) goto LAB_00111710;
         StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
         if (local_70._8_8_ == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_70._8_8_ = local_80;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

   }

   *puVar6 = local_78._0_4_;
   if (*(long*)( puVar6 + 2 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
      uVar4 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( puVar6 + 2 ) = uVar4;
   }

   if (*(long*)( puVar6 + 4 ) != local_70._8_8_) {
      StringName::unref();
      uVar4 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( puVar6 + 4 ) = uVar4;
   }

   puVar6[6] = local_60;
   if (*(long*)( puVar6 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
      lVar5 = local_58;
      local_58 = 0;
      *(long*)( puVar6 + 8 ) = lVar5;
   }

   puVar6[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_001114ea:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar6;
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   CowData<char32_t> *local_c0;
   StringName *local_b8;
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
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   local_b8 = (StringName*)&local_68;
   local_c0 = (CowData<char32_t>*)&local_70;
   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref(local_c0, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00111918:local_50 = 0x80;
      StringName::operator =(local_b8, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111918;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00111933;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00111933:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)local_c0);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_b8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00129038 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (param_2) {
      local_80 = 0;
      local_78 = "Node";
      local_88 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_88);
      local_78 = "Node";
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_c0);
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node2D::_get_property_listv(Node2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Node2D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node2D";
   local_98 = 0;
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00111f3d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111f3d;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00111f5f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00111f5f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "Node2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CollisionObject2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CollisionObject2D::_get_property_listv(CollisionObject2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node2D::_get_property_listv((Node2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CollisionObject2D";
   local_70 = 0x11;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CollisionObject2D";
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
   if (local_90 == 0) {
      LAB_0011231d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011231d;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011233f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011233f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "CollisionObject2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node2D::_get_property_listv((Node2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PhysicsBody2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PhysicsBody2D::_get_property_listv(PhysicsBody2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CollisionObject2D::_get_property_listv((CollisionObject2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PhysicsBody2D";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PhysicsBody2D";
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
   if (local_90 == 0) {
      LAB_001126fd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001126fd;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011271f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011271f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "PhysicsBody2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CollisionObject2D::_get_property_listv((CollisionObject2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RigidBody2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RigidBody2D::_get_property_listv(RigidBody2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      PhysicsBody2D::_get_property_listv((PhysicsBody2D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "RigidBody2D";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RigidBody2D";
   local_98 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_00112add:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00112add;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00112aff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00112aff:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "RigidBody2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PhysicsBody2D::_get_property_listv((PhysicsBody2D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */void MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>(MethodInfo *this, CowData *param_1, PropertyInfo *param_3, undefined4 *param_4, undefined4 *param_5, undefined4 *param_6) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   undefined4 local_168[2];
   undefined8 local_160;
   long local_158;
   undefined4 local_150;
   undefined8 local_148;
   undefined4 local_140;
   undefined4 local_138;
   long local_130;
   long local_128;
   undefined4 local_120;
   long local_118;
   undefined4 local_110;
   undefined4 local_108;
   long local_100;
   long local_f8;
   undefined4 local_f0;
   long local_e8;
   undefined4 local_e0;
   undefined4 local_d8;
   long local_d0;
   long local_c8;
   undefined4 local_c0;
   long local_b8;
   undefined4 local_b0;
   undefined4 local_a8;
   long local_a0;
   long local_98;
   undefined4 local_90;
   long local_88;
   undefined4 local_80;
   undefined4 local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   lVar2 = *(long*)param_1;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x30 ) = 6;
   *(undefined8*)( this + 0x38 ) = 1;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined4*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, param_1);
   }

   local_108 = *param_6;
   local_100 = 0;
   if (*(long*)( param_6 + 2 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)( param_6 + 2 ));
   }

   StringName::StringName((StringName*)&local_f8, (StringName*)( param_6 + 4 ));
   local_f0 = param_6[6];
   local_e8 = 0;
   if (*(long*)( param_6 + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)( param_6 + 8 ));
   }

   local_e0 = param_6[10];
   local_130 = 0;
   local_138 = *param_5;
   if (*(long*)( param_5 + 2 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)( param_5 + 2 ));
   }

   StringName::StringName((StringName*)&local_128, (StringName*)( param_5 + 4 ));
   local_120 = param_5[6];
   local_118 = 0;
   if (*(long*)( param_5 + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)( param_5 + 8 ));
   }

   local_110 = param_5[10];
   local_160 = 0;
   local_168[0] = *param_4;
   if (*(long*)( param_4 + 2 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_160, (CowData*)( param_4 + 2 ));
   }

   StringName::StringName((StringName*)&local_158, (StringName*)( param_4 + 4 ));
   local_150 = param_4[6];
   local_148 = 0;
   if (*(long*)( param_4 + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)( param_4 + 8 ));
   }

   local_140 = param_4[10];
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ), param_3);
   local_a0 = 0;
   local_a8 = local_108;
   if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_100);
   }

   StringName::StringName((StringName*)&local_98, (StringName*)&local_f8);
   local_88 = 0;
   local_90 = local_f0;
   if (local_e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_e8);
   }

   local_d0 = 0;
   local_80 = local_e0;
   local_d8 = local_138;
   if (local_130 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_130);
   }

   StringName::StringName((StringName*)&local_c8, (StringName*)&local_128);
   local_b8 = 0;
   local_c0 = local_120;
   if (local_118 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_118);
   }

   local_b0 = local_110;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ), (PropertyInfo*)local_168);
   local_70 = 0;
   local_78 = local_a8;
   if (local_a0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_a0);
   }

   StringName::StringName((StringName*)&local_68, (StringName*)&local_98);
   local_58 = 0;
   local_60 = local_90;
   if (local_88 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_88);
   }

   local_50 = local_80;
   if (*(long*)( this + 0x40 ) == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x40 ) = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = local_d8;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_d0);
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_c8);
   puVar3[6] = local_c0;
   if (*(long*)( puVar3 + 8 ) != local_b8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_b8);
   }

   puVar3[10] = local_b0;
   plVar1 = *(long**)( this + 0x40 );
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar3;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = local_78;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_68);
   puVar3[6] = local_60;
   if (*(long*)( puVar3 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
   }

   puVar3[10] = local_50;
   plVar1 = *(long**)( this + 0x40 );
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar3;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, float>(void (RigidBody2D::*)(float)) */MethodBind *create_method_bind<RigidBody2D,float>(_func_void_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122318;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, float>(float (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,float>(_func_float *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122378;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::CenterOfMassMode>(void
   (RigidBody2D::*)(RigidBody2D::CenterOfMassMode)) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::CenterOfMassMode>(_func_void_CenterOfMassMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_CenterOfMassMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001223d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D,
   RigidBody2D::CenterOfMassMode>(RigidBody2D::CenterOfMassMode (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::CenterOfMassMode>(_func_CenterOfMassMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_CenterOfMassMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Vector2 const&>(void (RigidBody2D::*)(Vector2
   const&)) */MethodBind *create_method_bind<RigidBody2D,Vector2_const&>(_func_void_Vector2_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Vector2 const&>(Vector2 const& (RigidBody2D::*)()
   const) */MethodBind *create_method_bind<RigidBody2D,Vector2_const&>(_func_Vector2_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001224f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Ref<PhysicsMaterial> const&>(void
   (RigidBody2D::*)(Ref<PhysicsMaterial> const&)) */MethodBind *create_method_bind<RigidBody2D,Ref<PhysicsMaterial>const&>(_func_void_Ref_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Ref<PhysicsMaterial>>(Ref<PhysicsMaterial>
   (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,Ref<PhysicsMaterial>>(_func_Ref *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001225b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::DampMode>(void
   (RigidBody2D::*)(RigidBody2D::DampMode)) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::DampMode>(_func_void_DampMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_DampMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::DampMode>(RigidBody2D::DampMode
   (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::DampMode>(_func_DampMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_DampMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Vector2>(Vector2 (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,Vector2>(_func_Vector2 *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001226d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, int>(void (RigidBody2D::*)(int)) */MethodBind *create_method_bind<RigidBody2D,int>(_func_void_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122738;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, int>(int (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,int>(_func_int *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122798;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, bool>(void (RigidBody2D::*)(bool)) */MethodBind *create_method_bind<RigidBody2D,bool>(_func_void_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001227f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, bool>(bool (RigidBody2D::*)()) */MethodBind *create_method_bind<RigidBody2D,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122858;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, bool>(bool (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,bool>(_func_bool *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001228b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::CCDMode>(void
   (RigidBody2D::*)(RigidBody2D::CCDMode)) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::CCDMode>(_func_void_CCDMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_CCDMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122918;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::CCDMode>(RigidBody2D::CCDMode
   (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::CCDMode>(_func_CCDMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_CCDMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122978;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, Vector2 const&, Vector2 const&>(void
   (RigidBody2D::*)(Vector2 const&, Vector2 const&)) */MethodBind *create_method_bind<RigidBody2D,Vector2_const&,Vector2_const&>(_func_void_Vector2_ptr_Vector2_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector2_ptr_Vector2_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001229d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::FreezeMode>(void
   (RigidBody2D::*)(RigidBody2D::FreezeMode)) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::FreezeMode>(_func_void_FreezeMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_FreezeMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122a38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, RigidBody2D::FreezeMode>(RigidBody2D::FreezeMode
   (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,RigidBody2D::FreezeMode>(_func_FreezeMode *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_FreezeMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122a98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<RigidBody2D, TypedArray<Node2D>>(TypedArray<Node2D>
   (RigidBody2D::*)() const) */MethodBind *create_method_bind<RigidBody2D,TypedArray<Node2D>>(_func_TypedArray *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00122af8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RigidBody2D";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x114eda);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC76;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = 0;
         lVar3 = -2;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00114fab;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = &_LC76;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
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

   LAB_00114fab:CowData<String>::_unref((CowData<String>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RigidBody2D::CenterOfMassMode, void>::get_class_info() */GetTypeInfo<RigidBody2D::CenterOfMassMode,void> * __thiscall
GetTypeInfo<RigidBody2D::CenterOfMassMode,void>::get_class_info
          (GetTypeInfo<RigidBody2D::CenterOfMassMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "RigidBody2D::CenterOfMassMode";
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (details*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RigidBody2D::DampMode, void>::get_class_info() */GetTypeInfo<RigidBody2D::DampMode,void> * __thiscall
GetTypeInfo<RigidBody2D::DampMode,void>::get_class_info
          (GetTypeInfo<RigidBody2D::DampMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "RigidBody2D::DampMode";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (details*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RigidBody2D::CCDMode, void>::get_class_info() */GetTypeInfo<RigidBody2D::CCDMode,void> * __thiscall
GetTypeInfo<RigidBody2D::CCDMode,void>::get_class_info(GetTypeInfo<RigidBody2D::CCDMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "RigidBody2D::CCDMode";
   local_40 = 0x14;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (details*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<RigidBody2D::FreezeMode, void>::get_class_info() */GetTypeInfo<RigidBody2D::FreezeMode,void> * __thiscall
GetTypeInfo<RigidBody2D::FreezeMode,void>::get_class_info
          (GetTypeInfo<RigidBody2D::FreezeMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "RigidBody2D::FreezeMode";
   local_40 = 0x17;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (details*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RigidBody2D::CenterOfMassMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x1d;
   local_38 = "RigidBody2D::CenterOfMassMode";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (StrRange*)&local_40);
   StringName::StringName((StringName*)&local_48, (details*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CCDMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RigidBody2D::CCDMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x14;
   local_38 = "RigidBody2D::CCDMode";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (StrRange*)&local_40);
   StringName::StringName((StringName*)&local_48, (details*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::DampMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RigidBody2D::DampMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x15;
   local_38 = "RigidBody2D::DampMode";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (StrRange*)&local_40);
   StringName::StringName((StringName*)&local_48, (details*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<RigidBody2D::FreezeMode>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x17;
   local_38 = "RigidBody2D::FreezeMode";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (StrRange*)&local_40);
   StringName::StringName((StringName*)&local_48, (details*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::FreezeMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<RigidBody2D::FreezeMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x17;
      local_68 = "RigidBody2D::FreezeMode";
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (StrRange*)&local_80);
      StringName::StringName((StringName*)&local_90, local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar4 = local_68._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::DampMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<RigidBody2D::DampMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x15;
      local_68 = "RigidBody2D::DampMode";
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (StrRange*)&local_80);
      StringName::StringName((StringName*)&local_90, local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar4 = local_68._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<RigidBody2D::CenterOfMassMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x1d;
      local_68 = "RigidBody2D::CenterOfMassMode";
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (StrRange*)&local_80);
      StringName::StringName((StringName*)&local_90, local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar4 = local_68._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CCDMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<RigidBody2D::CCDMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_60._0_8_ = 0x14;
      local_68 = "RigidBody2D::CCDMode";
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (StrRange*)&local_80);
      StringName::StringName((StringName*)&local_90, local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar4 = local_68._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00116690:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00116690;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00116569:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00116569;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_001166e6;
   }

   if (lVar10 == lVar7) {
      LAB_0011660f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001166e6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001165fa;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0011660f;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_001165fa:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_001169b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_001169b0;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_001168c1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001168c1:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RigidBody2D::_initialize_classv() */void RigidBody2D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (PhysicsBody2D::initialize_class() == '\0') {
         if (CollisionObject2D::initialize_class() == '\0') {
            if (Node2D::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
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
                     if ((code*)PTR__bind_methods_00129030 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_58 = "Node";
                  local_68 = 0;
                  local_50 = 4;
                  String::parse_latin1((StrRange*)&local_68);
                  StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
                  local_58 = "CanvasItem";
                  local_70 = 0;
                  local_50 = 10;
                  String::parse_latin1((StrRange*)&local_70);
                  StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00129020 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
               local_58 = "Node2D";
               local_70 = 0;
               local_50 = 6;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Node2D::_bind_methods();
               Node2D::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Node2D";
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
            local_58 = "CollisionObject2D";
            local_70 = 0;
            local_50 = 0x11;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CollisionObject2D::_bind_methods();
            CollisionObject2D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "CollisionObject2D";
         local_68 = 0;
         local_50 = 0x11;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "PhysicsBody2D";
         local_70 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00129028 != CollisionObject2D::_bind_methods) {
            PhysicsBody2D::_bind_methods();
         }

         PhysicsBody2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "PhysicsBody2D";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "RigidBody2D";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<RigidBody2D::ShapePair>::_realloc(long) */undefined8 CowData<RigidBody2D::ShapePair>::_realloc(CowData<RigidBody2D::ShapePair> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }

   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RigidBody2D::ShapePair>::resize<false>(long) */undefined8 CowData<RigidBody2D::ShapePair>::resize<false>(CowData<RigidBody2D::ShapePair> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar11 = 0;
      lVar3 = 0;
   }
 else {
      lVar11 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar11) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar3 = lVar11 * 0xc;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   lVar10 = param_1 * 0xc;
   if (lVar10 == 0) {
      LAB_001174d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = lVar10 - 1U >> 1 | lVar10 - 1U;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_001174d0;
   if (param_1 <= lVar11) {
      if (( lVar9 != lVar3 ) && ( uVar7 = _realloc(this, lVar9) ),(int)uVar7 != 0) {
         return uVar7;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar9 == lVar3) {
      LAB_0011743c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_001173d4;
   }
 else {
      if (lVar11 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0011743c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar3 = 0;
   }

   puVar5 = (undefined8*)( (long)puVar8 + lVar3 * 0xc );
   do {
      *puVar5 = 0;
      puVar6 = (undefined8*)( (long)puVar5 + 0xc );
      *(undefined1*)( puVar5 + 1 ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != (undefined8*)( lVar10 + (long)puVar8 ) );
   LAB_001173d4:puVar8[-1] = param_1;
   return 0;
}
/* VSet<RigidBody2D::ShapePair>::insert(RigidBody2D::ShapePair const&) */void VSet<RigidBody2D::ShapePair>::insert(VSet<RigidBody2D::ShapePair> *this, ShapePair *param_1) {
   int iVar1;
   int iVar2;
   int *piVar3;
   bool bVar4;
   code *pcVar5;
   int iVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   int *piVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   int iVar13;
   int *piVar14;
   long lVar15;
   undefined8 local_34;
   undefined1 local_2c;
   piVar3 = *(int**)( this + 8 );
   if (piVar3 == (int*)0x0) {
      local_34 = *(undefined8*)param_1;
      local_2c = ( undefined1 ) * (undefined4*)( param_1 + 8 );
      iVar11 = CowData<RigidBody2D::ShapePair>::resize<false>((CowData<RigidBody2D::ShapePair>*)( this + 8 ), 1);
      if (iVar11 != 0) goto LAB_001177a0;
      lVar10 = 0;
      CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( this + 8 ));
      lVar12 = *(long*)( this + 8 );
      goto LAB_001176e0;
   }

   lVar12 = *(long*)( piVar3 + -2 );
   iVar11 = (int)lVar12 + -1;
   if (lVar12 < 1) {
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar12, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   if (iVar11 < 0) {
      _err_print_error("_find", "./core/templates/vset.h", 0x36, "low > high, this may be a bug", 0, 0);
      iVar6 = 0;
      piVar14 = *(int**)( this + 8 );
      bVar4 = *piVar3 < *(int*)param_1;
      piVar9 = piVar3;
      if (*piVar3 == *(int*)param_1) goto LAB_00117720;
   }
 else {
      iVar1 = *(int*)param_1;
      iVar13 = 0;
      do {
         while (true) {
            iVar6 = ( iVar13 + iVar11 ) / 2;
            piVar9 = piVar3 + (long)iVar6 * 3;
            iVar2 = *piVar9;
            if (iVar1 != iVar2) break;
            if (*(int*)( param_1 + 4 ) < piVar9[1]) goto LAB_00117608;
            if (*(int*)( param_1 + 4 ) <= piVar9[1]) {
               return;
            }

            LAB_0011763a:iVar13 = iVar6 + 1;
            if (iVar11 < iVar13) goto LAB_0011763e;
         }
;
         if (iVar2 <= iVar1) goto LAB_0011763a;
         LAB_00117608:iVar11 = iVar6 + -1;
      }
 while ( iVar13 <= iVar11 );
      LAB_0011763e:bVar4 = iVar2 < iVar1;
      piVar14 = piVar3;
      if (iVar2 == iVar1) {
         LAB_00117720:bVar4 = piVar9[1] < *(int*)( param_1 + 4 );
      }

   }

   local_34 = *(undefined8*)param_1;
   iVar11 = ( iVar6 + 1 ) - (uint)!bVar4;
   local_2c = ( undefined1 ) * (undefined4*)( param_1 + 8 );
   lVar10 = (long)iVar11;
   if (piVar14 == (int*)0x0) {
      lVar12 = 1;
      lVar15 = 0;
   }
 else {
      lVar15 = *(long*)( piVar14 + -2 );
      lVar12 = lVar15 + 1;
   }

   if (( lVar12 <= lVar10 ) || ( iVar11 >> 7 != 0 )) {
      _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar10, lVar12, "p_pos", "new_size", "", false, false);
      return;
   }

   iVar11 = CowData<RigidBody2D::ShapePair>::resize<false>((CowData<RigidBody2D::ShapePair>*)( this + 8 ), lVar12);
   if (iVar11 != 0) {
      LAB_001177a0:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
      return;
   }

   CowData<RigidBody2D::ShapePair>::_copy_on_write((CowData<RigidBody2D::ShapePair>*)( this + 8 ));
   lVar12 = *(long*)( this + 8 );
   if (lVar10 < lVar15) {
      puVar7 = (undefined8*)( lVar12 + lVar15 * 0xc );
      do {
         puVar8 = (undefined8*)( (long)puVar7 + -0xc );
         *puVar7 = *(undefined8*)( (long)puVar7 + -0xc );
         *(undefined1*)( puVar7 + 1 ) = *(undefined1*)( (long)puVar7 + -4 );
         puVar7 = puVar8;
      }
 while ( puVar8 != (undefined8*)( lVar12 + lVar10 * 0xc ) );
   }

   LAB_001176e0:puVar7 = (undefined8*)( lVar12 + lVar10 * 0xc );
   *puVar7 = local_34;
   *(undefined1*)( puVar7 + 1 ) = local_2c;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00117a08) *//* WARNING: Removing unreachable block (ram,0x00117b9d) *//* WARNING: Removing unreachable block (ram,0x00117ba9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<TypedArray<Node2D>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<TypedArray<Node2D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117db0;
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

   LAB_00117db0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<RigidBody2D::FreezeMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118040;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00118040:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<RigidBody2D::FreezeMode>::validated_call(MethodBindTRC<RigidBody2D::FreezeMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001182e4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_001182e4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::FreezeMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<RigidBody2D::FreezeMode>::ptrcall(MethodBindTRC<RigidBody2D::FreezeMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001184a3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_001184a3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::FreezeMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<RigidBody2D::FreezeMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001187e1;
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
      /* WARNING: Could not recover jumptable at 0x0011866c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001187e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<RigidBody2D::FreezeMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<RigidBody2D::FreezeMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001189c1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011884b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001189c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2 const&, Vector2 const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<Vector2_const&,Vector2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
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

         goto LAB_00118b8f;
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
      /* WARNING: Could not recover jumptable at 0x00118a3a. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8);
      return;
   }

   LAB_00118b8f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2 const&, Vector2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector2_const&,Vector2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00118d79;
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
      /* WARNING: Could not recover jumptable at 0x00118c00. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }

   LAB_00118d79:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CCDMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<RigidBody2D::CCDMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118e40;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00118e40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CCDMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<RigidBody2D::CCDMode>::validated_call(MethodBindTRC<RigidBody2D::CCDMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119054;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00119054:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CCDMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<RigidBody2D::CCDMode>::ptrcall(MethodBindTRC<RigidBody2D::CCDMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119203;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00119203:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CCDMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<RigidBody2D::CCDMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00119541;
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
      /* WARNING: Could not recover jumptable at 0x001193cc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00119541:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CCDMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<RigidBody2D::CCDMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119721;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001195ab. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00119721:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   bool bVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001197f0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_001197f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119a02;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00119a02:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119bb1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_00119bb1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   bool bVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119de0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00119de0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<bool>::validated_call(MethodBindTR<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119ff2;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00119ff2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a1a1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_0011a1a1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011a4e1;
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
      /* WARNING: Could not recover jumptable at 0x0011a36d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011a4e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011a6c9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011a552. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_0011a6c9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a790;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011a790:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a9a4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0011a9a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ab53;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_0011ab53:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011ae91;
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
      /* WARNING: Could not recover jumptable at 0x0011ad1c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011ae91:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011b071;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011aefb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0011b071:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
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
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b150;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
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

         local_50 = ( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, (Vector2*)&local_50);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011b150:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b364;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_0011b364:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b513;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar3;
   LAB_0011b513:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::DampMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<RigidBody2D::DampMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b740;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011b740:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::DampMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<RigidBody2D::DampMode>::validated_call(MethodBindTRC<RigidBody2D::DampMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b954;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0011b954:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::DampMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<RigidBody2D::DampMode>::ptrcall(MethodBindTRC<RigidBody2D::DampMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bb03;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0011bb03:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::DampMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<RigidBody2D::DampMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011be41;
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
      /* WARNING: Could not recover jumptable at 0x0011bccc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011be41:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<RigidBody2D::DampMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<RigidBody2D::DampMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011c021;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011beab. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0011c021:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Vector2 *pVVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c0f0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         pVVar2 = (Vector2*)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, pVVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011c0f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2_const&>::validated_call(MethodBindTRC<Vector2_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   undefined8 *puVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c305;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   puVar1 = (undefined8*)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = *puVar1;
   LAB_0011c305:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2_const&>::ptrcall(MethodBindTRC<Vector2_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined8 *puVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c4b4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   puVar1 = (undefined8*)( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = *puVar1;
   LAB_0011c4b4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector2_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011c7f1;
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
      /* WARNING: Could not recover jumptable at 0x0011c67d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0011c7f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector2 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector2_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011c9d1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011c859. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0011c9d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<RigidBody2D::CenterOfMassMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
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
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011caa0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011caa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<RigidBody2D::CenterOfMassMode>::validated_call(MethodBindTRC<RigidBody2D::CenterOfMassMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ccb4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0011ccb4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<RigidBody2D::CenterOfMassMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<RigidBody2D::CenterOfMassMode>::ptrcall(MethodBindTRC<RigidBody2D::CenterOfMassMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ce63;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0011ce63:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<RigidBody2D::CenterOfMassMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011d1a1;
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
      /* WARNING: Could not recover jumptable at 0x0011d02c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0011d1a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<RigidBody2D::CenterOfMassMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011d381;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0011d20b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0011d381:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   float fVar5;
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d450;
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

         fVar5 = (float)( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, fVar5);
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
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_0011d450:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float>::validated_call(MethodBindTRC<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d668;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_0011d668:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float>::ptrcall(MethodBindTRC<float> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d827;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(double*)param_3 = (double)fVar3;
   LAB_0011d827:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0011db79;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x0011da02. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011db79:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
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

         goto LAB_0011dd59;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**param_3;
      /* WARNING: Could not recover jumptable at 0x0011dbe1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011dd59:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Node2D>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<TypedArray<Node2D>>::validated_call(MethodBindTRC<TypedArray<Node2D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x117bf8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011ddb9;
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
   LAB_0011ddb9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Node2D>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<TypedArray<Node2D>>::ptrcall(MethodBindTRC<TypedArray<Node2D>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x117bf8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011df8a;
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
   LAB_0011df8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Ref<PhysicsMaterial>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x117bf8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011e210;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

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

   LAB_0011e210:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<PhysicsMaterial>>::ptrcall(MethodBindTRC<Ref<PhysicsMaterial>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
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
         local_48 = (Object*)0x117bf8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011e496;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0011e496;
      *(undefined8*)param_3 = 0;
      goto LAB_0011e4d9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011e4d9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011e4d9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011e496;
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

   LAB_0011e496:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<Ref<PhysicsMaterial>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x117bf8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011e798;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_0011e756:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &PhysicsMaterial::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011e756;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011e798:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<PhysicsMaterial>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x117bf8;
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

         goto LAB_0011ea5c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_0011ea38:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011ea38;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011ea5c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long *plVar7;
   long lVar8;
   undefined4 in_register_00000014;
   long *plVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   Variant *pVVar11;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011edb0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011ee00;
         LAB_0011edf0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011ee00:uVar6 = 4;
            goto LAB_0011eda5;
         }

         if (in_R8D == 1) goto LAB_0011edf0;
         lVar8 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar8) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar10 = pVVar10 + lVar8 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar11 & 1 ) != 0) {
         pVVar11 = *(Variant**)( pVVar11 + *(long*)( (long)plVar9 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 5);
      uVar4 = _LC246;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_38 = Variant::operator_cast_to_Vector2(pVVar10);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), &local_38);
   }
 else {
      uVar6 = 3;
      LAB_0011eda5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011edb0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<PhysicsMaterial> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Ref<PhysicsMaterial>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x117bf8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011f160;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011f155:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011f160;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011f1b0;
      LAB_0011f1a0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011f1b0:uVar7 = 4;
         goto LAB_0011f155;
      }

      if (in_R8D == 1) goto LAB_0011f1a0;
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

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC73;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_0011f2cd:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &PhysicsMaterial::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_0011f2cd;
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_0011f160:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<PhysicsMaterial>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<PhysicsMaterial>>::validated_call(MethodBindTRC<Ref<PhysicsMaterial>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   Variant **local_48;
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

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x117bf8;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011f476;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
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

   LAB_0011f476:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, RigidBody2D::FreezeMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(RigidBody2D::FreezeMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,RigidBody2D::FreezeMode>(__UnexistingClass *param_1, _func_void_FreezeMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0011f71d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011f780;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011f780:uVar6 = 4;
         LAB_0011f71d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011f69b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011f69b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_FreezeMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC74;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011f6f6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<RigidBody2D::FreezeMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<RigidBody2D::FreezeMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011f7e6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,RigidBody2D::FreezeMode>(p_Var2, (_func_void_FreezeMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011f7e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, Vector2 const&, Vector2
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector2 const&, Vector2 const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,Vector2_const&,Vector2_const&>(__UnexistingClass *param_1, _func_void_Vector2_ptr_Vector2_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_FS_OFFSET;
   long in_stack_00000008;
   undefined8 local_38;
   long local_30;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = (uint)param_5;
   if (uVar10 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_0011faf8;
         this(Variant * ) * plVar8;
         LAB_0011fb4d:this_00 = (Variant*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar11 < iVar6) {
            LAB_0011faf8:uVar7 = 4;
            goto LAB_0011fafd;
         }

         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0011fb68;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011fb4d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0011fb68:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_Vector2_ptr_Vector2_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 5);
      uVar4 = _LC248;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_Vector2(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 5);
      uVar4 = _LC246;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      local_38 = Variant::operator_cast_to_Vector2(this);
      ( *param_2 )((Vector2*)( param_1 + (long)param_3 ), (Vector2*)&local_38);
   }
 else {
      uVar7 = 3;
      LAB_0011fafd:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector2 const&, Vector2 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Vector2_const&,Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011fc06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Vector2_const&,Vector2_const&>(p_Var2, (_func_void_Vector2_ptr_Vector2_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011fc06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, RigidBody2D::CCDMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(RigidBody2D::CCDMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,RigidBody2D::CCDMode>(__UnexistingClass *param_1, _func_void_CCDMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0011fecd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011ff30;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011ff30:uVar6 = 4;
         LAB_0011fecd:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011fe4b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011fe4b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_CCDMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC74;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011fea6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<RigidBody2D::CCDMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<RigidBody2D::CCDMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011ff96;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,RigidBody2D::CCDMode>(p_Var2, (_func_void_CCDMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011ff96:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0012025d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001202c0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_001202c0:uVar6 = 4;
         LAB_0012025d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_001201db;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001201db:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC249;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00120237. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00120326;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00120326:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_001205ed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00120650;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00120650:uVar6 = 4;
         LAB_001205ed:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0012056b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0012056b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC74;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x001205c6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001206b6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001206b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, RigidBody2D::DampMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(RigidBody2D::DampMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,RigidBody2D::DampMode>(__UnexistingClass *param_1, _func_void_DampMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0012097d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001209e0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_001209e0:uVar6 = 4;
         LAB_0012097d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_001208fb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001208fb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_DampMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC74;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x00120956. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<RigidBody2D::DampMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<RigidBody2D::DampMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00120a46;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,RigidBody2D::DampMode>(p_Var2, (_func_void_DampMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00120a46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   RigidBody2D::CenterOfMassMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(RigidBody2D::CenterOfMassMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,RigidBody2D::CenterOfMassMode>(__UnexistingClass *param_1, _func_void_CenterOfMassMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00120d0d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00120d70;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00120d70:uVar6 = 4;
         LAB_00120d0d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00120c8b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00120c8b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_CenterOfMassMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC74;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x00120ce6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<RigidBody2D::CenterOfMassMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<RigidBody2D::CenterOfMassMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00120dd6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,RigidBody2D::CenterOfMassMode>(p_Var2, (_func_void_CenterOfMassMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00120dd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,float>(__UnexistingClass *param_1, _func_void_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   float fVar9;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0012109d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00121100;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00121100:uVar6 = 4;
         LAB_0012109d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0012101b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0012101b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC250;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x00121074. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(fVar9);
   return;
}
/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC72, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00121166;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var2, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00121166:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */void MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PhysicsBody2D::~PhysicsBody2D() */void PhysicsBody2D::~PhysicsBody2D(PhysicsBody2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::FreezeMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::FreezeMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT() */void MethodBindT<RigidBody2D::FreezeMode>::~MethodBindT(MethodBindT<RigidBody2D::FreezeMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector2 const&, Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&,Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&,Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CCDMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CCDMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<RigidBody2D::CCDMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CCDMode>::~MethodBindT(MethodBindT<RigidBody2D::CCDMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::DampMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::DampMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<RigidBody2D::DampMode>::~MethodBindT() */void MethodBindT<RigidBody2D::DampMode>::~MethodBindT(MethodBindT<RigidBody2D::DampMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC() */void MethodBindTRC<Ref<PhysicsMaterial>>::~MethodBindTRC(MethodBindTRC<Ref<PhysicsMaterial>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<PhysicsMaterial> const&>::~MethodBindT() */void MethodBindT<Ref<PhysicsMaterial>const&>::~MethodBindT(MethodBindT<Ref<PhysicsMaterial>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC() */void MethodBindTRC<RigidBody2D::CenterOfMassMode>::~MethodBindTRC(MethodBindTRC<RigidBody2D::CenterOfMassMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT() */void MethodBindT<RigidBody2D::CenterOfMassMode>::~MethodBindT(MethodBindT<RigidBody2D::CenterOfMassMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RigidBody2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,ObjectID> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RigidBody2D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RigidBody2D, void,
   PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RigidBody2D,void,PhysicsDirectBodyState2D*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


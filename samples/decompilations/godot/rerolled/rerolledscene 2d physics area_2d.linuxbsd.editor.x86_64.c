/* Area2D::get_gravity_space_override_mode() const */undefined4 Area2D::get_gravity_space_override_mode(Area2D *this) {
   return *(undefined4*)( this + 0x648 );
}
/* Area2D::is_gravity_a_point() const */Area2D Area2D::is_gravity_a_point(Area2D *this) {
   return this[0x658];
}
/* Area2D::get_gravity_point_unit_distance() const */undefined4 Area2D::get_gravity_point_unit_distance(Area2D *this) {
   return *(undefined4*)( this + 0x65c );
}
/* Area2D::get_gravity_point_center() const */Area2D * __thiscall Area2D::get_gravity_point_center(Area2D *this){
   return this + 0x64c;
}
/* Area2D::get_gravity() const */undefined4 Area2D::get_gravity(Area2D *this) {
   return *(undefined4*)( this + 0x654 );
}
/* Area2D::get_linear_damp_space_override_mode() const */undefined4 Area2D::get_linear_damp_space_override_mode(Area2D *this) {
   return *(undefined4*)( this + 0x660 );
}
/* Area2D::get_angular_damp_space_override_mode() const */undefined4 Area2D::get_angular_damp_space_override_mode(Area2D *this) {
   return *(undefined4*)( this + 0x664 );
}
/* Area2D::get_linear_damp() const */undefined4 Area2D::get_linear_damp(Area2D *this) {
   return *(undefined4*)( this + 0x668 );
}
/* Area2D::get_angular_damp() const */undefined4 Area2D::get_angular_damp(Area2D *this) {
   return *(undefined4*)( this + 0x66c );
}
/* Area2D::get_priority() const */undefined4 Area2D::get_priority(Area2D *this) {
   return *(undefined4*)( this + 0x670 );
}
/* Area2D::is_monitoring() const */Area2D Area2D::is_monitoring(Area2D *this) {
   return this[0x674];
}
/* Area2D::is_monitorable() const */Area2D Area2D::is_monitorable(Area2D *this) {
   return this[0x675];
}
/* Area2D::set_audio_bus_override(bool) */void Area2D::set_audio_bus_override(Area2D *this, bool param_1) {
   this[0x6d8] = (Area2D)param_1;
   return;
}
/* Area2D::is_overriding_audio_bus() const */Area2D Area2D::is_overriding_audio_bus(Area2D *this) {
   return this[0x6d8];
}
/* Area2D::set_gravity_space_override_mode(Area2D::SpaceOverride) */void Area2D::set_gravity_space_override_mode(Area2D *this, int param_2) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x648 ) = param_2;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_2);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 0, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::set_linear_damp_space_override_mode(Area2D::SpaceOverride) */void Area2D::set_linear_damp_space_override_mode(Area2D *this, int param_2) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x660 ) = param_2;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_2);
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
/* Area2D::set_angular_damp_space_override_mode(Area2D::SpaceOverride) */void Area2D::set_angular_damp_space_override_mode(Area2D *this, int param_2) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x664 ) = param_2;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_2);
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
/* Area2D::set_priority(int) */void Area2D::set_priority(Area2D *this, int param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0x670 ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 9, local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::set_gravity_is_point(bool) */void Area2D::set_gravity_is_point(Area2D *this, bool param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x658] = (Area2D)param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
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
/* Area2D::set_gravity_point_unit_distance(float) */void Area2D::set_gravity_point_unit_distance(Area2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x65c ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 4, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::set_gravity(float) */void Area2D::set_gravity(Area2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x654 ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
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
/* Area2D::set_linear_damp(float) */void Area2D::set_linear_damp(Area2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x668 ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 6, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::set_angular_damp(float) */void Area2D::set_angular_damp(Area2D *this, float param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(float*)( this + 0x66c ) = param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
   ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), 8, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::set_gravity_point_center(Vector2 const&) */void Area2D::set_gravity_point_center(Area2D *this, Vector2 *param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x64c ) = *(undefined8*)param_1;
   plVar2 = (long*)PhysicsServer2D::get_singleton();
   pcVar1 = *(code**)( *plVar2 + 0x290 );
   Variant::Variant((Variant*)local_48, param_1);
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
/* Area2D::set_gravity_direction(Vector2 const&) */void Area2D::set_gravity_direction(Area2D *this, Vector2 *param_1) {
   set_gravity_point_center(this, param_1);
   return;
}
/* Area2D::set_monitorable(bool) */void Area2D::set_monitorable(Area2D *this, bool param_1) {
   char cVar1;
   long *plVar2;
   if (this[0x676] == (Area2D)0x0) {
      if (( (byte)this[0x2fa] & 0x40 ) != 0) {
         plVar2 = (long*)PhysicsServer2D::get_singleton();
         cVar1 = ( **(code**)( *plVar2 + 0x598 ) )(plVar2);
         if (cVar1 != '\0') goto LAB_00100800;
      }

      if (this[0x675] != (Area2D)param_1) {
         this[0x675] = (Area2D)param_1;
         plVar2 = (long*)PhysicsServer2D::get_singleton();
         /* WARNING: Could not recover jumptable at 0x001007d7. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar2 + 0x2d0 ) )(plVar2, *(undefined8*)( this + 0x590 ), this[0x675]);
         return;
      }

   }
 else {
      LAB_00100800:_err_print_error("set_monitorable", "scene/2d/physics/area_2d.cpp", 0x1bd, "Condition \"locked || (is_inside_tree() && PhysicsServer2D::get_singleton()->is_flushing_queries())\" is true.", "Function blocked during in/out signal. Use set_deferred(\"monitorable\", true/false).", 0, 0);
   }

   return;
}
/* Area2D::set_audio_bus_name(StringName const&) */void Area2D::set_audio_bus_name(Area2D *this, StringName *param_1) {
   StringName::operator =((StringName*)( this + 0x6e0 ), param_1);
   return;
}
/* Area2D::has_overlapping_bodies() const */undefined4 Area2D::has_overlapping_bodies(Area2D *this) {
   if (this[0x674] != (Area2D)0x0) {
      return CONCAT31(( int3 )(( uint ) * (int*)( this + 0x6a4 ) >> 8), *(int*)( this + 0x6a4 ) != 0);
   }

   _err_print_error("has_overlapping_bodies", "scene/2d/physics/area_2d.cpp", 0x1ef, "Condition \"!monitoring\" is true. Returning: false", "Can\'t find overlapping bodies when monitoring is off.", 0, 0);
   return 0;
}
/* Area2D::has_overlapping_areas() const */undefined4 Area2D::has_overlapping_areas(Area2D *this) {
   if (this[0x674] != (Area2D)0x0) {
      return CONCAT31(( int3 )(( uint ) * (int*)( this + 0x6d4 ) >> 8), *(int*)( this + 0x6d4 ) != 0);
   }

   _err_print_error("has_overlapping_areas", "scene/2d/physics/area_2d.cpp", 500, "Condition \"!monitoring\" is true. Returning: false", "Can\'t find overlapping areas when monitoring is off.", 0, 0);
   return 0;
}
/* Error Object::emit_signal<Object*>(StringName const&, Object*) [clone .isra.0] */void Object::emit_signal<Object*>(Object *this, StringName *param_1, Object *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_68[2];
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_2);
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
/* Error Object::emit_signal<RID, Node*, int, int>(StringName const&, RID, Node*, int, int) [clone
   .isra.0] */void Object::emit_signal<RID,Node*,int,int>(Object *this, undefined8 param_1, undefined8 param_3, Object *param_4, int param_5, int param_6) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
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
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = param_3;
   Variant::Variant(local_b8, (RID*)&local_f0);
   Variant::Variant(local_a0, param_4);
   Variant::Variant(local_88, param_5);
   Variant::Variant(local_70, param_6);
   local_50 = (undefined1[16])0x0;
   pVVar2 = (Variant*)local_40;
   local_58 = 0;
   local_e8 = local_b8;
   pVStack_e0 = local_a0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, param_1, &local_e8, 4);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Area2D::get_gravity_direction() const */Area2D * __thiscall Area2D::get_gravity_direction(Area2D *this){
   return this + 0x64c;
}
/* Area2D::~Area2D() */void Area2D::~Area2D(Area2D *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   bool bVar6;
   bVar6 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011c528;
   if (( bVar6 ) && ( *(long*)( this + 0x6e0 ) != 0 )) {
      StringName::unref();
   }

   pvVar5 = *(void**)( this + 0x6b0 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x6d4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x6d4 ) = 0;
            *(undefined1(*) [16])( this + 0x6c0 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x6b8 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x6b8 ) + lVar4 ) = 0;
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
                  pvVar5 = *(void**)( this + 0x6b0 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 0x6d4 ) = 0;
            *(undefined1(*) [16])( this + 0x6c0 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00100d07;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x6b8 ), false);
   }

   LAB_00100d07:pvVar5 = *(void**)( this + 0x680 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x6a4 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x6a4 ) = 0;
            *(undefined1(*) [16])( this + 0x690 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x688 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x688 ) + lVar4 ) = 0;
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
                  pvVar5 = *(void**)( this + 0x680 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x6a4 ) = 0;
            *(undefined1(*) [16])( this + 0x690 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00100dcb;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x688 ), false);
      CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
      return;
   }

   LAB_00100dcb:CollisionObject2D::~CollisionObject2D((CollisionObject2D*)this);
   return;
}
/* Area2D::~Area2D() */void Area2D::~Area2D(Area2D *this) {
   ~Area2D(this)
   ;;
   operator_delete(this, 0x6e8);
   return;
}
/* Area2D::get_audio_bus_name() const */void Area2D::get_audio_bus_name(void) {
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long in_RSI;
   StringName *in_RDI;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   iVar5 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      AudioServer::get_singleton();
      iVar4 = AudioServer::get_bus_count();
      if (iVar4 <= iVar5) {
         StringName::StringName(in_RDI, (StringName*)( SceneStringNames::singleton + 0x208 ));
         LAB_00100f2a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      AudioServer::get_singleton();
      AudioServer::get_bus_name((int)&local_38);
      cVar3 = operator == ( (String*)&local_38,(StringName*)( in_RSI + 0x6e0 ) );
      lVar2 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (cVar3 != '\0') {
         StringName::StringName(in_RDI, (StringName*)( in_RSI + 0x6e0 ));
         goto LAB_00100f2a;
      }

      iVar5 = iVar5 + 1;
   }
 while ( true );
}
/* Area2D::overlaps_area(Node*) const */undefined1 Area2D::overlaps_area(Area2D *this, Node *param_1) {
   long lVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   ulong uVar11;
   uint uVar12;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   if (param_1 == (Node*)0x0) {
      _err_print_error("overlaps_area", "scene/2d/physics/area_2d.cpp", 0x1f9, "Parameter \"p_area\" is null.", 0, 0);
   }
 else {
      lVar1 = *(long*)( this + 0x6b0 );
      if (( lVar1 != 0 ) && ( *(int*)( this + 0x6d4 ) != 0 )) {
         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6d0 ) * 8 );
         uVar11 = *(long*)( param_1 + 0x60 ) * 0x3ffff - 1;
         uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
         uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
         uVar11 = uVar11 >> 0x16 ^ uVar11;
         uVar14 = uVar11 & 0xffffffff;
         if ((int)uVar11 == 0) {
            uVar14 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar14 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar15 != 0) {
            uVar17 = 0;
            while (( (uint)uVar14 != uVar15 || ( *(long*)( param_1 + 0x60 ) != *(long*)( *(long*)( lVar1 + lVar13 * 8 ) + 0x10 ) ) )) {
               uVar17 = uVar17 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
               if (uVar15 == 0) {
                  return 0;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar15 * lVar2;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar16;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ) + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar16;
               if (SUB164(auVar6 * auVar10, 8) < uVar17) {
                  return 0;
               }

            }
;
            lVar1 = *(long*)( lVar1 + (ulong)uVar12 * 8 );
            if (lVar1 != 0) {
               return *(undefined1*)( lVar1 + 0x24 );
            }

         }

      }

   }

   return 0;
}
/* Area2D::overlaps_body(Node*) const */undefined1 Area2D::overlaps_body(Area2D *this, Node *param_1) {
   long lVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   ulong uVar11;
   uint uVar12;
   long lVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   if (param_1 == (Node*)0x0) {
      _err_print_error("overlaps_body", "scene/2d/physics/area_2d.cpp", 0x202, "Parameter \"p_body\" is null.", 0, 0);
   }
 else {
      lVar1 = *(long*)( this + 0x680 );
      if (( lVar1 != 0 ) && ( *(int*)( this + 0x6a4 ) != 0 )) {
         uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6a0 ) * 8 );
         uVar11 = *(long*)( param_1 + 0x60 ) * 0x3ffff - 1;
         uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
         uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
         uVar11 = uVar11 >> 0x16 ^ uVar11;
         uVar14 = uVar11 & 0xffffffff;
         if ((int)uVar11 == 0) {
            uVar14 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar14 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x688 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar15 != 0) {
            uVar17 = 0;
            while (( (uint)uVar14 != uVar15 || ( *(long*)( param_1 + 0x60 ) != *(long*)( *(long*)( lVar1 + lVar13 * 8 ) + 0x10 ) ) )) {
               uVar17 = uVar17 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x688 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
               if (uVar15 == 0) {
                  return 0;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar15 * lVar2;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar16;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ) + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar16;
               if (SUB164(auVar6 * auVar10, 8) < uVar17) {
                  return 0;
               }

            }
;
            lVar1 = *(long*)( lVar1 + (ulong)uVar12 * 8 );
            if (lVar1 != 0) {
               return *(undefined1*)( lVar1 + 0x24 );
            }

         }

      }

   }

   return 0;
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
/* CowData<Area2D::AreaShapePair>::_copy_on_write() [clone .isra.0] */void CowData<Area2D::AreaShapePair>::_copy_on_write(CowData<Area2D::AreaShapePair> *this) {
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
   __n = lVar2 * 8;
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
/* CowData<Area2D::ShapePair>::_copy_on_write() [clone .isra.0] */void CowData<Area2D::ShapePair>::_copy_on_write(CowData<Area2D::ShapePair> *this) {
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
   __n = lVar2 * 8;
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
/* Area2D::_area_enter_tree(ObjectID) */void Area2D::_area_enter_tree(Area2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   Object *pOVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   ulong *puVar19;
   char *pcVar20;
   uint uVar21;
   long lVar22;
   undefined8 uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   Variant *pVVar27;
   long in_FS_OFFSET;
   bool bVar28;
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
   uVar18 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar18 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar28 = (char)ObjectDB::spin_lock == '\0';
         cVar14 = (char)ObjectDB::spin_lock;
         if (bVar28) {
            ObjectDB::spin_lock._0_1_ = '\x01';
            cVar14 = '\0';
         }

         UNLOCK();
         if (bVar28) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = cVar14;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar19 & 0x7fffffffff )) {
         uVar16 = puVar19[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar16 != 0 ) && ( pOVar15 = (Object*)__dynamic_cast(uVar16, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar15 != (Object*)0x0) {
            lVar4 = *(long*)( this + 0x6b0 );
            if (( lVar4 != 0 ) && ( *(int*)( this + 0x6d4 ) != 0 )) {
               uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ));
               lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6d0 ) * 8 );
               uVar16 = param_2 * 0x3ffff - 1;
               uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
               uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
               uVar16 = uVar16 >> 0x16 ^ uVar16;
               uVar26 = uVar16 & 0xffffffff;
               if ((int)uVar16 == 0) {
                  uVar26 = 1;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar26 * lVar17;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar24;
               lVar22 = SUB168(auVar5 * auVar9, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar22 * 4 );
               uVar21 = SUB164(auVar5 * auVar9, 8);
               if (uVar18 != 0) {
                  uVar25 = 0;
                  while (( uVar18 != (uint)uVar26 || ( param_2 != *(ulong*)( *(long*)( lVar4 + lVar22 * 8 ) + 0x10 ) ) )) {
                     uVar25 = uVar25 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar17;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar24;
                     lVar22 = SUB168(auVar6 * auVar10, 8);
                     uVar18 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar22 * 4 );
                     uVar21 = SUB164(auVar6 * auVar10, 8);
                     if (( uVar18 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar18 * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ) + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar17,auVar12._8_8_ = 0,auVar12._0_8_ = uVar24,SUB164(auVar8 * auVar12, 8) < uVar25) goto LAB_00101aa0;
                  }
;
                  lVar4 = *(long*)( lVar4 + (ulong)uVar21 * 8 );
                  if (lVar4 != 0) {
                     if (*(char*)( lVar4 + 0x24 ) != '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101bda;
                        uVar23 = 0xfc;
                        pcVar20 = "Condition \"E->value.in_tree\" is true.";
                        goto LAB_00101ac9;
                     }

                     *(undefined1*)( lVar4 + 0x24 ) = 1;
                     lVar17 = SceneStringNames::singleton + 0x1b8;
                     Variant::Variant((Variant*)local_b8, pOVar15);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar17 = *(long*)( lVar4 + 0x30 );
                     if (lVar17 == 0) goto LAB_00101a46;
                     lVar22 = 0;
                     goto LAB_00101918;
                  }

               }

            }

            LAB_00101aa0:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00101bda;
            uVar23 = 0xfb;
            pcVar20 = "Condition \"!E\" is true.";
            goto LAB_00101ac9;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar23 = 0xf8;
      pcVar20 = "Parameter \"node\" is null.";
      LAB_00101ac9:_err_print_error("_area_enter_tree", "scene/2d/physics/area_2d.cpp", uVar23, pcVar20, 0, 0);
      return;
   }

   goto LAB_00101bda;
   LAB_00101918:do {
      lVar17 = *(long*)( lVar17 + -8 );
      if ((int)lVar17 <= (int)lVar22) break;
      if (lVar17 <= lVar22) {
         LAB_00101af0:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar22, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( lVar4 + 0x30 ));
      lVar17 = *(long*)( lVar4 + 0x30 );
      iVar2 = *(int*)( lVar17 + 4 + lVar22 * 8 );
      if (lVar17 == 0) {
         lVar17 = 0;
         goto LAB_00101af0;
      }

      lVar17 = *(long*)( lVar17 + -8 );
      if (lVar17 <= lVar22) goto LAB_00101af0;
      CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( lVar4 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar4 + 0x30 ) + lVar22 * 8 );
      lVar17 = SceneStringNames::singleton + 0x160;
      local_f0 = *(ulong*)( lVar4 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar15);
      Variant::Variant(local_88, iVar3);
      pVVar27 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 4);
      do {
         pVVar1 = pVVar27 + -0x18;
         pVVar27 = pVVar27 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar27 != (Variant*)local_b8 );
      lVar17 = *(long*)( lVar4 + 0x30 );
      lVar22 = lVar22 + 1;
   }
 while ( lVar17 != 0 );
   LAB_00101a46:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101bda:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::_body_enter_tree(ObjectID) */void Area2D::_body_enter_tree(Area2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   Object *pOVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   ulong *puVar19;
   char *pcVar20;
   uint uVar21;
   long lVar22;
   undefined8 uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   Variant *pVVar27;
   long in_FS_OFFSET;
   bool bVar28;
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
   uVar18 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar18 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar28 = (char)ObjectDB::spin_lock == '\0';
         cVar14 = (char)ObjectDB::spin_lock;
         if (bVar28) {
            ObjectDB::spin_lock._0_1_ = '\x01';
            cVar14 = '\0';
         }

         UNLOCK();
         if (bVar28) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = cVar14;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar19 & 0x7fffffffff )) {
         uVar16 = puVar19[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar16 != 0 ) && ( pOVar15 = (Object*)__dynamic_cast(uVar16, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar15 != (Object*)0x0) {
            lVar4 = *(long*)( this + 0x680 );
            if (( lVar4 != 0 ) && ( *(int*)( this + 0x6a4 ) != 0 )) {
               uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ));
               lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6a0 ) * 8 );
               uVar16 = param_2 * 0x3ffff - 1;
               uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
               uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
               uVar16 = uVar16 >> 0x16 ^ uVar16;
               uVar26 = uVar16 & 0xffffffff;
               if ((int)uVar16 == 0) {
                  uVar26 = 1;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar26 * lVar17;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar24;
               lVar22 = SUB168(auVar5 * auVar9, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x688 ) + lVar22 * 4 );
               uVar21 = SUB164(auVar5 * auVar9, 8);
               if (uVar18 != 0) {
                  uVar25 = 0;
                  while (( uVar18 != (uint)uVar26 || ( param_2 != *(ulong*)( *(long*)( lVar4 + lVar22 * 8 ) + 0x10 ) ) )) {
                     uVar25 = uVar25 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar17;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar24;
                     lVar22 = SUB168(auVar6 * auVar10, 8);
                     uVar18 = *(uint*)( *(long*)( this + 0x688 ) + lVar22 * 4 );
                     uVar21 = SUB164(auVar6 * auVar10, 8);
                     if (( uVar18 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar18 * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ) + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar17,auVar12._8_8_ = 0,auVar12._0_8_ = uVar24,SUB164(auVar8 * auVar12, 8) < uVar25) goto LAB_00102060;
                  }
;
                  lVar4 = *(long*)( lVar4 + (ulong)uVar21 * 8 );
                  if (lVar4 != 0) {
                     if (*(char*)( lVar4 + 0x24 ) != '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010219a;
                        uVar23 = 0x8d;
                        pcVar20 = "Condition \"E->value.in_tree\" is true.";
                        goto LAB_00102089;
                     }

                     *(undefined1*)( lVar4 + 0x24 ) = 1;
                     lVar17 = SceneStringNames::singleton + 0x148;
                     Variant::Variant((Variant*)local_b8, pOVar15);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar17 = *(long*)( lVar4 + 0x30 );
                     if (lVar17 == 0) goto LAB_00102006;
                     lVar22 = 0;
                     goto LAB_00101ed8;
                  }

               }

            }

            LAB_00102060:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010219a;
            uVar23 = 0x8c;
            pcVar20 = "Condition \"!E\" is true.";
            goto LAB_00102089;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar23 = 0x89;
      pcVar20 = "Parameter \"node\" is null.";
      LAB_00102089:_err_print_error("_body_enter_tree", "scene/2d/physics/area_2d.cpp", uVar23, pcVar20, 0, 0);
      return;
   }

   goto LAB_0010219a;
   LAB_00101ed8:do {
      lVar17 = *(long*)( lVar17 + -8 );
      if ((int)lVar17 <= (int)lVar22) break;
      if (lVar17 <= lVar22) {
         LAB_001020b0:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar22, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( lVar4 + 0x30 ));
      lVar17 = *(long*)( lVar4 + 0x30 );
      iVar2 = *(int*)( lVar17 + 4 + lVar22 * 8 );
      if (lVar17 == 0) {
         lVar17 = 0;
         goto LAB_001020b0;
      }

      lVar17 = *(long*)( lVar17 + -8 );
      if (lVar17 <= lVar22) goto LAB_001020b0;
      CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( lVar4 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar4 + 0x30 ) + lVar22 * 8 );
      lVar17 = SceneStringNames::singleton + 0x140;
      local_f0 = *(ulong*)( lVar4 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar15);
      Variant::Variant(local_88, iVar3);
      pVVar27 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 4);
      do {
         pVVar1 = pVVar27 + -0x18;
         pVVar27 = pVVar27 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar27 != (Variant*)local_b8 );
      lVar17 = *(long*)( lVar4 + 0x30 );
      lVar22 = lVar22 + 1;
   }
 while ( lVar17 != 0 );
   LAB_00102006:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010219a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::_area_exit_tree(ObjectID) */void Area2D::_area_exit_tree(Area2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   Object *pOVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   ulong *puVar19;
   char *pcVar20;
   uint uVar21;
   long lVar22;
   undefined8 uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   Variant *pVVar27;
   long in_FS_OFFSET;
   bool bVar28;
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
   uVar18 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar18 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar28 = (char)ObjectDB::spin_lock == '\0';
         cVar14 = (char)ObjectDB::spin_lock;
         if (bVar28) {
            ObjectDB::spin_lock._0_1_ = '\x01';
            cVar14 = '\0';
         }

         UNLOCK();
         if (bVar28) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = cVar14;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar19 & 0x7fffffffff )) {
         uVar16 = puVar19[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar16 != 0 ) && ( pOVar15 = (Object*)__dynamic_cast(uVar16, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar15 != (Object*)0x0) {
            lVar4 = *(long*)( this + 0x6b0 );
            if (( lVar4 != 0 ) && ( *(int*)( this + 0x6d4 ) != 0 )) {
               uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ));
               lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6d0 ) * 8 );
               uVar16 = param_2 * 0x3ffff - 1;
               uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
               uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
               uVar16 = uVar16 >> 0x16 ^ uVar16;
               uVar26 = uVar16 & 0xffffffff;
               if ((int)uVar16 == 0) {
                  uVar26 = 1;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar26 * lVar17;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar24;
               lVar22 = SUB168(auVar5 * auVar9, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar22 * 4 );
               uVar21 = SUB164(auVar5 * auVar9, 8);
               if (uVar18 != 0) {
                  uVar25 = 0;
                  while (( uVar18 != (uint)uVar26 || ( param_2 != *(ulong*)( *(long*)( lVar4 + lVar22 * 8 ) + 0x10 ) ) )) {
                     uVar25 = uVar25 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar17;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar24;
                     lVar22 = SUB168(auVar6 * auVar10, 8);
                     uVar18 = *(uint*)( *(long*)( this + 0x6b8 ) + lVar22 * 4 );
                     uVar21 = SUB164(auVar6 * auVar10, 8);
                     if (( uVar18 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar18 * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ) + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar17,auVar12._8_8_ = 0,auVar12._0_8_ = uVar24,SUB164(auVar8 * auVar12, 8) < uVar25) goto LAB_00102620;
                  }
;
                  lVar4 = *(long*)( lVar4 + (ulong)uVar21 * 8 );
                  if (lVar4 != 0) {
                     if (*(char*)( lVar4 + 0x24 ) == '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010275a;
                        uVar23 = 0x10b;
                        pcVar20 = "Condition \"!E->value.in_tree\" is true.";
                        goto LAB_00102649;
                     }

                     *(undefined1*)( lVar4 + 0x24 ) = 0;
                     lVar17 = SceneStringNames::singleton + 0x1c0;
                     Variant::Variant((Variant*)local_b8, pOVar15);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar17 = *(long*)( lVar4 + 0x30 );
                     if (lVar17 == 0) goto LAB_001025c6;
                     lVar22 = 0;
                     goto LAB_00102498;
                  }

               }

            }

            LAB_00102620:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010275a;
            uVar23 = 0x10a;
            pcVar20 = "Condition \"!E\" is true.";
            goto LAB_00102649;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar23 = 0x108;
      pcVar20 = "Parameter \"node\" is null.";
      LAB_00102649:_err_print_error("_area_exit_tree", "scene/2d/physics/area_2d.cpp", uVar23, pcVar20, 0, 0);
      return;
   }

   goto LAB_0010275a;
   LAB_00102498:do {
      lVar17 = *(long*)( lVar17 + -8 );
      if ((int)lVar17 <= (int)lVar22) break;
      if (lVar17 <= lVar22) {
         LAB_00102670:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar22, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( lVar4 + 0x30 ));
      lVar17 = *(long*)( lVar4 + 0x30 );
      iVar2 = *(int*)( lVar17 + 4 + lVar22 * 8 );
      if (lVar17 == 0) {
         lVar17 = 0;
         goto LAB_00102670;
      }

      lVar17 = *(long*)( lVar17 + -8 );
      if (lVar17 <= lVar22) goto LAB_00102670;
      CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( lVar4 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar4 + 0x30 ) + lVar22 * 8 );
      lVar17 = SceneStringNames::singleton + 0x168;
      local_f0 = *(ulong*)( lVar4 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar15);
      Variant::Variant(local_88, iVar3);
      pVVar27 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 4);
      do {
         pVVar1 = pVVar27 + -0x18;
         pVVar27 = pVVar27 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar27 != (Variant*)local_b8 );
      lVar17 = *(long*)( lVar4 + 0x30 );
      lVar22 = lVar22 + 1;
   }
 while ( lVar17 != 0 );
   LAB_001025c6:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010275a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::_body_exit_tree(ObjectID) */void Area2D::_body_exit_tree(Area2D *this, ulong param_2) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   Object *pOVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   ulong *puVar19;
   char *pcVar20;
   uint uVar21;
   long lVar22;
   undefined8 uVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   Variant *pVVar27;
   long in_FS_OFFSET;
   bool bVar28;
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
   uVar18 = (uint)param_2 & 0xffffff;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar18 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_f0 = local_f0 & 0xffffffffffffff00;
         LOCK();
         bVar28 = (char)ObjectDB::spin_lock == '\0';
         cVar14 = (char)ObjectDB::spin_lock;
         if (bVar28) {
            ObjectDB::spin_lock._0_1_ = '\x01';
            cVar14 = '\0';
         }

         UNLOCK();
         if (bVar28) break;
         /* WARNING: Ignoring partial resolution of indirect */
         local_f0._0_1_ = cVar14;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar19 & 0x7fffffffff )) {
         uVar16 = puVar19[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (( uVar16 != 0 ) && ( pOVar15 = (Object*)__dynamic_cast(uVar16, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar15 != (Object*)0x0) {
            lVar4 = *(long*)( this + 0x680 );
            if (( lVar4 != 0 ) && ( *(int*)( this + 0x6a4 ) != 0 )) {
               uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ));
               lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x6a0 ) * 8 );
               uVar16 = param_2 * 0x3ffff - 1;
               uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
               uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
               uVar16 = uVar16 >> 0x16 ^ uVar16;
               uVar26 = uVar16 & 0xffffffff;
               if ((int)uVar16 == 0) {
                  uVar26 = 1;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar26 * lVar17;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar24;
               lVar22 = SUB168(auVar5 * auVar9, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x688 ) + lVar22 * 4 );
               uVar21 = SUB164(auVar5 * auVar9, 8);
               if (uVar18 != 0) {
                  uVar25 = 0;
                  while (( uVar18 != (uint)uVar26 || ( param_2 != *(ulong*)( *(long*)( lVar4 + lVar22 * 8 ) + 0x10 ) ) )) {
                     uVar25 = uVar25 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(uVar21 + 1) * lVar17;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar24;
                     lVar22 = SUB168(auVar6 * auVar10, 8);
                     uVar18 = *(uint*)( *(long*)( this + 0x688 ) + lVar22 * 4 );
                     uVar21 = SUB164(auVar6 * auVar10, 8);
                     if (( uVar18 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar18 * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ) + uVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar17,auVar12._8_8_ = 0,auVar12._0_8_ = uVar24,SUB164(auVar8 * auVar12, 8) < uVar25) goto LAB_00102be0;
                  }
;
                  lVar4 = *(long*)( lVar4 + (ulong)uVar21 * 8 );
                  if (lVar4 != 0) {
                     if (*(char*)( lVar4 + 0x24 ) == '\0') {
                        if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102d1a;
                        uVar23 = 0x9c;
                        pcVar20 = "Condition \"!E->value.in_tree\" is true.";
                        goto LAB_00102c09;
                     }

                     *(undefined1*)( lVar4 + 0x24 ) = 0;
                     lVar17 = SceneStringNames::singleton + 0x158;
                     Variant::Variant((Variant*)local_b8, pOVar15);
                     local_a0[0] = 0;
                     local_a0[1] = 0;
                     local_98 = (undefined1[16])0x0;
                     local_e8 = (Variant*)local_b8;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 1);
                     if (Variant::needs_deinit[local_a0[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_b8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar17 = *(long*)( lVar4 + 0x30 );
                     if (lVar17 == 0) goto LAB_00102b86;
                     lVar22 = 0;
                     goto LAB_00102a58;
                  }

               }

            }

            LAB_00102be0:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00102d1a;
            uVar23 = 0x9b;
            pcVar20 = "Condition \"!E\" is true.";
            goto LAB_00102c09;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar23 = 0x99;
      pcVar20 = "Parameter \"node\" is null.";
      LAB_00102c09:_err_print_error("_body_exit_tree", "scene/2d/physics/area_2d.cpp", uVar23, pcVar20, 0, 0);
      return;
   }

   goto LAB_00102d1a;
   LAB_00102a58:do {
      lVar17 = *(long*)( lVar17 + -8 );
      if ((int)lVar17 <= (int)lVar22) break;
      if (lVar17 <= lVar22) {
         LAB_00102c30:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar22, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar13 = (code*)invalidInstructionException();
         ( *pcVar13 )();
      }

      CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( lVar4 + 0x30 ));
      lVar17 = *(long*)( lVar4 + 0x30 );
      iVar2 = *(int*)( lVar17 + 4 + lVar22 * 8 );
      if (lVar17 == 0) {
         lVar17 = 0;
         goto LAB_00102c30;
      }

      lVar17 = *(long*)( lVar17 + -8 );
      if (lVar17 <= lVar22) goto LAB_00102c30;
      CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( lVar4 + 0x30 ));
      iVar3 = *(int*)( *(long*)( lVar4 + 0x30 ) + lVar22 * 8 );
      lVar17 = SceneStringNames::singleton + 0x150;
      local_f0 = *(ulong*)( lVar4 + 0x18 );
      Variant::Variant((Variant*)local_b8, (RID*)&local_f0);
      Variant::Variant((Variant*)local_a0, pOVar15);
      Variant::Variant(local_88, iVar3);
      pVVar27 = (Variant*)local_40;
      Variant::Variant(local_70, iVar2);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      local_e8 = (Variant*)local_b8;
      pVStack_e0 = (Variant*)local_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar17, &local_e8, 4);
      do {
         pVVar1 = pVVar27 + -0x18;
         pVVar27 = pVVar27 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar27 != (Variant*)local_b8 );
      lVar17 = *(long*)( lVar4 + 0x30 );
      lVar22 = lVar22 + 1;
   }
 while ( lVar17 != 0 );
   LAB_00102b86:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102d1a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::get_overlapping_areas() const */void Area2D::get_overlapping_areas(void) {
   long *plVar1;
   char cVar2;
   undefined8 *puVar3;
   Object *pOVar4;
   ulong uVar5;
   long lVar6;
   Variant *pVVar7;
   uint uVar8;
   ulong *puVar9;
   long in_RSI;
   uint uVar10;
   Array *in_RDI;
   long in_FS_OFFSET;
   bool bVar11;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   local_50 = (undefined1[16])0x0;
   local_68 = "Area2D";
   local_58 = 0;
   local_70 = 0;
   local_60 = 6;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
   uVar10 = (uint)in_RDI;
   Array::set_typed(uVar10, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar6 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[(int)local_58] == '\0') {
      cVar2 = *(char*)( in_RSI + 0x674 );
   }
 else {
      Variant::_clear_internal();
      cVar2 = *(char*)( in_RSI + 0x674 );
   }

   if (cVar2 == '\0') {
      _err_print_error("get_overlapping_areas", "scene/2d/physics/area_2d.cpp", 0x1df, "Condition \"!monitoring\" is true. Returning: ret", "Can\'t find overlapping areas when monitoring is off.", 0, 0);
   }
 else {
      Array::resize(uVar10);
      for (puVar3 = *(undefined8**)( in_RSI + 0x6c0 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         uVar8 = (uint)puVar3[2] & 0xffffff;
         if (uVar8 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_68 >> 8;
               local_68 = (char*)( uVar5 << 8 );
               LOCK();
               bVar11 = (char)ObjectDB::spin_lock == '\0';
               if (bVar11) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar11) break;
               local_68 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
            if (( (ulong)puVar3[2] >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
               pOVar4 = (Object*)puVar9[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (pOVar4 != (Object*)0x0) {
                  Variant::Variant((Variant*)&local_58, pOVar4);
                  pVVar7 = (Variant*)Array::operator [](uVar10);
                  if (pVVar7 == (Variant*)&local_58) {
                     if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 else {
                     if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                        Variant::_clear_internal();
                     }

                     *(undefined4*)pVVar7 = 0;
                     *(int*)pVVar7 = (int)local_58;
                     *(undefined8*)( pVVar7 + 8 ) = local_50._0_8_;
                     *(undefined8*)( pVVar7 + 0x10 ) = local_50._8_8_;
                  }

               }

            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

      }

      Array::resize(uVar10);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Area2D::get_overlapping_bodies() const */void Area2D::get_overlapping_bodies(void) {
   long *plVar1;
   char cVar2;
   undefined8 *puVar3;
   Object *pOVar4;
   ulong uVar5;
   long lVar6;
   Variant *pVVar7;
   uint uVar8;
   ulong *puVar9;
   long in_RSI;
   uint uVar10;
   Array *in_RDI;
   long in_FS_OFFSET;
   bool bVar11;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   local_50 = (undefined1[16])0x0;
   local_68 = "Node2D";
   local_58 = 0;
   local_70 = 0;
   local_60 = 6;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
   uVar10 = (uint)in_RDI;
   Array::set_typed(uVar10, (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar6 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[(int)local_58] == '\0') {
      cVar2 = *(char*)( in_RSI + 0x674 );
   }
 else {
      Variant::_clear_internal();
      cVar2 = *(char*)( in_RSI + 0x674 );
   }

   if (cVar2 == '\0') {
      _err_print_error("get_overlapping_bodies", "scene/2d/physics/area_2d.cpp", 0x1ce, "Condition \"!monitoring\" is true. Returning: ret", "Can\'t find overlapping bodies when monitoring is off.", 0, 0);
   }
 else {
      Array::resize(uVar10);
      for (puVar3 = *(undefined8**)( in_RSI + 0x690 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         uVar8 = (uint)puVar3[2] & 0xffffff;
         if (uVar8 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar5 = (ulong)local_68 >> 8;
               local_68 = (char*)( uVar5 << 8 );
               LOCK();
               bVar11 = (char)ObjectDB::spin_lock == '\0';
               if (bVar11) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar11) break;
               local_68 = (char*)( uVar5 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
            if (( (ulong)puVar3[2] >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
               pOVar4 = (Object*)puVar9[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (pOVar4 != (Object*)0x0) {
                  Variant::Variant((Variant*)&local_58, pOVar4);
                  pVVar7 = (Variant*)Array::operator [](uVar10);
                  if (pVVar7 == (Variant*)&local_58) {
                     if (Variant::needs_deinit[(int)local_58] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 else {
                     if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                        Variant::_clear_internal();
                     }

                     *(undefined4*)pVVar7 = 0;
                     *(int*)pVVar7 = (int)local_58;
                     *(undefined8*)( pVVar7 + 8 ) = local_50._0_8_;
                     *(undefined8*)( pVVar7 + 0x10 ) = local_50._8_8_;
                  }

               }

            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

      }

      Array::resize(uVar10);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Area2D::_validate_property(PropertyInfo&) const */void Area2D::_validate_property(Area2D *this, PropertyInfo *param_1) {
   String *this_00;
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   this_00 = (String*)( param_1 + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = String::operator ==(this_00, "audio_bus_name");
   if (cVar3 == '\0') {
      cVar3 = String::begins_with((char*)this_00);
      if (( cVar3 == '\0' ) || ( cVar3 = String::operator !=(this_00, "gravity_space_override") ),cVar3 == '\0') {
         cVar3 = String::begins_with((char*)this_00);
         if (( cVar3 == '\0' ) || ( cVar3 = String::operator !=(this_00, "linear_damp_space_override") ),cVar3 == '\0') {
            cVar3 = String::begins_with((char*)this_00);
            if (( cVar3 == '\0' ) || ( cVar3 = String::operator !=(this_00, "angular_damp_space_override") ),cVar3 == '\0') goto LAB_00103444;
            iVar4 = *(int*)( this + 0x664 );
         }
 else {
            iVar4 = *(int*)( this + 0x660 );
         }

         if (iVar4 != 0) goto LAB_00103444;
      }
 else if (*(int*)( this + 0x648 ) != 0) {
         if (this[0x658] == (Area2D)0x0) {
            cVar3 = String::begins_with((char*)this_00);
         }
 else {
            cVar3 = String::operator ==(this_00, "gravity_direction");
         }

         if (cVar3 == '\0') goto LAB_00103444;
      }

      *(undefined4*)( param_1 + 0x28 ) = 2;
   }
 else {
      local_40 = 0;
      iVar5 = 0;
      AudioServer::get_singleton();
      iVar4 = AudioServer::get_bus_count();
      if (0 < iVar4) {
         while (true) {
            AudioServer::get_singleton();
            AudioServer::get_bus_name((int)(String*)&local_38);
            String::operator +=((String*)&local_40, (String*)&local_38);
            lVar2 = local_38;
            if (local_38 != 0) {
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            AudioServer::get_singleton();
            iVar5 = iVar5 + 1;
            iVar4 = AudioServer::get_bus_count();
            if (iVar4 <= iVar5) break;
            String::operator +=((String*)&local_40, ",");
         }
;
      }

      if (*(long*)( param_1 + 0x20 ) != local_40) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x20 ), (CowData*)&local_40);
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

   }

   LAB_00103444:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::_bind_methods() */void Area2D::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   int *piVar9;
   undefined *puVar10;
   MethodBind *pMVar11;
   undefined *puVar12;
   int *piVar13;
   long lVar14;
   long in_FS_OFFSET;
   undefined8 local_208;
   undefined8 local_200;
   undefined8 local_1f8;
   long local_1f0;
   undefined8 local_1e8;
   undefined8 local_1e0;
   long local_1d8;
   undefined8 local_1d0;
   undefined8 local_1c8;
   long local_1c0;
   undefined8 local_1b8;
   undefined8 local_1b0;
   long local_1a8;
   undefined8 local_1a0;
   char *local_198;
   undefined8 local_190;
   long local_188[6];
   long local_158[6];
   long local_128[6];
   char *local_f8;
   undefined8 local_f0;
   char *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   int *local_78;
   undefined8 local_70;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity_space_override_mode");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(set_gravity_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_gravity_space_override_mode", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(get_gravity_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity_is_point");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(set_gravity_is_point);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_gravity_a_point", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(is_gravity_a_point);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity_point_unit_distance");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(set_gravity_point_unit_distance);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_gravity_point_unit_distance", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(get_gravity_point_unit_distance);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity_point_center");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Vector2_const&>(set_gravity_point_center);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_gravity_point_center", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Vector2_const&>(get_gravity_point_center);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity_direction");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Vector2_const&>(set_gravity_direction);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_gravity_direction", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Vector2_const&>(get_gravity_direction);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_gravity");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(set_gravity);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_gravity", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(get_gravity);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_linear_damp_space_override_mode");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(set_linear_damp_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_linear_damp_space_override_mode", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(get_linear_damp_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_angular_damp_space_override_mode");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(set_angular_damp_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_angular_damp_space_override_mode", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,Area2D::SpaceOverride>(get_angular_damp_space_override_mode);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_linear_damp");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(set_linear_damp);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_linear_damp", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(get_linear_damp);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_angular_damp");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(set_angular_damp);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_angular_damp", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,float>(get_angular_damp);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_priority");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,int>(set_priority);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_priority", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,int>(get_priority);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_monitoring");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(set_monitoring);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_monitoring", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(is_monitoring);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_monitorable");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(set_monitorable);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_monitorable", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(is_monitorable);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_overlapping_bodies", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,TypedArray<Node2D>>(get_overlapping_bodies);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_overlapping_areas", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,TypedArray<Area2D>>(get_overlapping_areas);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"has_overlapping_bodies", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(has_overlapping_bodies);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"has_overlapping_areas", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(has_overlapping_areas);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "overlaps_body");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool,Node*>(overlaps_body);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "overlaps_area");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool,Node*>(overlaps_area);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_audio_bus_name");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,StringName_const&>(set_audio_bus_name);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_audio_bus_name", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,StringName>(get_audio_bus_name);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_audio_bus_override");
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(set_audio_bus_override);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_overriding_audio_bus", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Area2D,bool>(is_overriding_audio_bus);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_1a8 = 0;
   local_1b0 = 0;
   String::parse_latin1((String*)&local_1b0, "");
   local_1b8 = 0;
   String::parse_latin1((String*)&local_1b8, "local_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_1b8, 0, (String*)&local_1b0, 6, (String*)&local_1a8);
   local_1c0 = 0;
   local_1c8 = 0;
   String::parse_latin1((String*)&local_1c8, "");
   local_1d0 = 0;
   String::parse_latin1((String*)&local_1d0, "body_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_1d0, 0, (String*)&local_1c8, 6, &local_1c0);
   local_1d8 = 0;
   local_1e0 = 0;
   String::parse_latin1((String*)&local_1e0, "Node2D");
   local_1e8 = 0;
   local_c8 = "body";
   local_c0 = 4;
   String::parse_latin1((StrRange*)&local_1e8);
   PropertyInfo::PropertyInfo((PropertyInfo*)local_158, 0x18, (StrRange*)&local_1e8, 0x11, (String*)&local_1e0, 6, &local_1d8);
   local_1f0 = 0;
   local_1f8 = 0;
   String::parse_latin1((String*)&local_1f8, "");
   local_200 = 0;
   local_c8 = "body_rid";
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_200);
   PropertyInfo::PropertyInfo((PropertyInfo*)local_188, 0x17, (StrRange*)&local_200, 0, (String*)&local_1f8, 6, &local_1f0);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "body_shape_entered");
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_c8, (String*)&local_1a0, (PropertyInfo*)local_188, (PropertyInfo*)local_158, (PropertyInfo*)local_128, (PropertyInfo*)&local_f8);
   local_208 = 0;
   local_198 = "Area2D";
   local_190 = 6;
   String::parse_latin1((StrRange*)&local_208);
   StringName::StringName((StringName*)&local_198, (String*)&local_208, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   if (( StringName::configured != '\0' ) && ( local_1f0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   if (( StringName::configured != '\0' ) && ( local_1c0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
      StringName::unref();
   }

   local_1a8 = 0;
   local_1b0 = 0;
   String::parse_latin1((String*)&local_1b0, "");
   local_1b8 = 0;
   String::parse_latin1((String*)&local_1b8, "local_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_1b8, 0, (String*)&local_1b0, 6, (String*)&local_1a8);
   local_1c0 = 0;
   local_1c8 = 0;
   String::parse_latin1((String*)&local_1c8, "");
   local_1d0 = 0;
   String::parse_latin1((String*)&local_1d0, "body_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_1d0, 0, (String*)&local_1c8, 6, &local_1c0);
   local_1d8 = 0;
   local_1e0 = 0;
   String::parse_latin1((String*)&local_1e0, "Node2D");
   local_1e8 = 0;
   String::parse_latin1((String*)&local_1e8, "body");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_158, 0x18, (StrRange*)&local_1e8, 0x11, (String*)&local_1e0, 6, &local_1d8);
   local_1f0 = 0;
   local_1f8 = 0;
   String::parse_latin1((String*)&local_1f8, "");
   local_200 = 0;
   String::parse_latin1((String*)&local_200, "body_rid");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_188, 0x17, (StrRange*)&local_200, 0, (String*)&local_1f8, 6, &local_1f0);
   local_c8 = "body_shape_exited";
   local_1a0 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_1a0);
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_c8, (String*)&local_1a0, (PropertyInfo*)local_188, (PropertyInfo*)local_158, (PropertyInfo*)local_128, (PropertyInfo*)&local_f8);
   local_208 = 0;
   String::parse_latin1((String*)&local_208, "Area2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_208, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   if (( StringName::configured != '\0' ) && ( local_1f0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   if (( StringName::configured != '\0' ) && ( local_1c0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
      StringName::unref();
   }

   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Node2D");
   local_1a0 = 0;
   local_c8 = "body";
   local_c0 = 4;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x18, (String*)&local_1a0, 0x11, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "body_entered");
   local_b8 = (undefined1[16])0x0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = (int*)0x0;
   local_70 = 0;
   local_60 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)local_128, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)local_128, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }

   local_188[0] = 0;
   local_c8 = "Node2D";
   local_198 = (char*)0x0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)&local_198);
   local_c8 = "body";
   local_1a0 = 0;
   local_c0 = 4;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x18, (String*)&local_1a0, 0x11, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_c8 = "body_exited";
   local_158[0] = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)local_158);
   local_b8 = (undefined1[16])0x0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = (int*)0x0;
   local_70 = 0;
   local_60 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)local_128, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)local_128, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }

   local_1a8 = 0;
   local_1b0 = 0;
   String::parse_latin1((String*)&local_1b0, "");
   local_1b8 = 0;
   String::parse_latin1((String*)&local_1b8, "local_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_1b8, 0, (String*)&local_1b0, 6, (String*)&local_1a8);
   local_c8 = "";
   local_1c0 = 0;
   local_1c8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_1c8);
   local_1d0 = 0;
   String::parse_latin1((String*)&local_1d0, "area_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_1d0, 0, (String*)&local_1c8, 6, &local_1c0);
   local_c8 = "Area2D";
   local_1d8 = 0;
   local_1e0 = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)&local_1e0);
   local_1e8 = 0;
   String::parse_latin1((String*)&local_1e8, "area");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_158, 0x18, (StrRange*)&local_1e8, 0x11, (String*)&local_1e0, 6, &local_1d8);
   local_1f0 = 0;
   local_1f8 = 0;
   String::parse_latin1((String*)&local_1f8, "");
   local_200 = 0;
   String::parse_latin1((String*)&local_200, "area_rid");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_188, 0x17, (StrRange*)&local_200, 0, (String*)&local_1f8, 6, &local_1f0);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "area_shape_entered");
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_c8, (String*)&local_1a0, (PropertyInfo*)local_188, (PropertyInfo*)local_158, (PropertyInfo*)local_128, (PropertyInfo*)&local_f8);
   local_198 = "Area2D";
   local_208 = 0;
   local_190 = 6;
   String::parse_latin1((StrRange*)&local_208);
   StringName::StringName((StringName*)&local_198, (String*)&local_208, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   if (( StringName::configured != '\0' ) && ( local_1f0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   if (( StringName::configured != '\0' ) && ( local_1c0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
      StringName::unref();
   }

   local_1a8 = 0;
   local_1b0 = 0;
   String::parse_latin1((String*)&local_1b0, "");
   local_c8 = "local_shape_index";
   local_1b8 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_1b8);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_1b8, 0, (String*)&local_1b0, 6, (String*)&local_1a8);
   local_1c0 = 0;
   local_1c8 = 0;
   String::parse_latin1((String*)&local_1c8, "");
   local_1d0 = 0;
   String::parse_latin1((String*)&local_1d0, "area_shape_index");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_1d0, 0, (String*)&local_1c8, 6, &local_1c0);
   local_1d8 = 0;
   local_1e0 = 0;
   String::parse_latin1((String*)&local_1e0, "Area2D");
   local_1e8 = 0;
   String::parse_latin1((String*)&local_1e8, "area");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_158, 0x18, (StrRange*)&local_1e8, 0x11, (String*)&local_1e0, 6, &local_1d8);
   local_1f0 = 0;
   local_1f8 = 0;
   String::parse_latin1((String*)&local_1f8, "");
   local_200 = 0;
   String::parse_latin1((String*)&local_200, "area_rid");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_188, 0x17, (StrRange*)&local_200, 0, (String*)&local_1f8, 6, &local_1f0);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "area_shape_exited");
   MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>((MethodInfo*)&local_c8, (String*)&local_1a0, (PropertyInfo*)local_188, (PropertyInfo*)local_158, (PropertyInfo*)local_128, (PropertyInfo*)&local_f8);
   local_208 = 0;
   String::parse_latin1((String*)&local_208, "Area2D");
   StringName::StringName((StringName*)&local_198, (String*)&local_208, false);
   ClassDB::add_signal((StringName*)&local_198, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_198 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   if (( StringName::configured != '\0' ) && ( local_1f0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
   if (( StringName::configured != '\0' ) && ( local_1d8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
   if (( StringName::configured != '\0' ) && ( local_1c0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
      StringName::unref();
   }

   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Area2D");
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "area");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x18, (String*)&local_1a0, 0x11, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "area_entered");
   local_b8 = (undefined1[16])0x0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = (int*)0x0;
   local_70 = 0;
   local_60 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)local_128, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)local_128, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
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

   piVar9 = local_78;
   if (local_78 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_78 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_78 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_78 + -2 );
         lVar14 = 0;
         local_78 = (int*)0x0;
         piVar13 = piVar9;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar13] != '\0') {
                  Variant::_clear_internal();
               }

               lVar14 = lVar14 + 1;
               piVar13 = piVar13 + 6;
            }
 while ( lVar2 != lVar14 );
         }

         Memory::free_static(piVar9 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_b8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }

   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "Area2D");
   local_1a0 = 0;
   local_c8 = "area";
   local_c0 = 4;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 0x18, (String*)&local_1a0, 0x11, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "area_exited");
   local_b8 = (undefined1[16])0x0;
   local_c8 = (char*)0x0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = (int*)0x0;
   local_70 = 0;
   local_60 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)local_158);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_88, (PropertyInfo*)&local_f8);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)local_128, (String*)&local_1a8, false);
   ClassDB::add_signal((StringName*)local_128, (MethodInfo*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   local_c8 = "monitoring";
   local_c0 = 10;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (String*)&local_1a0, 0, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "monitorable");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (String*)&local_1a0, 0, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "0,100000,1,or_greater,or_less");
   local_c8 = "priority";
   local_1a0 = 0;
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (String*)&local_1a0, 1, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   local_f8 = (char*)0x0;
   local_c8 = "gravity_";
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "Gravity";
   local_128[0] = 0;
   local_c0 = 7;
   String::parse_latin1((StrRange*)local_128);
   local_c8 = "Area2D";
   local_158[0] = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)local_158);
   StringName::StringName((StringName*)&local_c8, (String*)local_158, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)local_128, (String*)&local_f8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
   local_c0 = 0x38;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "gravity_space_override");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (String*)&local_1a0, 2, (StringName*)&local_198, 0x4006, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_128[0] != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "gravity_point");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (String*)&local_1a0, 0, (StringName*)&local_198, 0x4006, (PropertyInfo*)local_188);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "0,1024,0.001,or_greater,exp,suffix:px";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0x25;
   String::parse_latin1((StrRange*)&local_198);
   local_c8 = "gravity_point_unit_distance";
   local_1a0 = 0;
   local_c0 = 0x1b;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (String*)&local_1a0, 1, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "suffix:px");
   local_c8 = "gravity_point_center";
   local_1a0 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 5, (String*)&local_1a0, 0, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   String::parse_latin1((String*)&local_198, "");
   local_c8 = "gravity_direction";
   local_1a0 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 5, (String*)&local_1a0, 0, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   puVar10 = &_LC73;
   do {
      puVar12 = puVar10;
      puVar10 = puVar12 + 4;
   }
 while ( *(int*)( puVar12 + 4 ) != 0 );
   local_c8 = "-";
   local_c0 = (long)( puVar12 + -0x11320c ) >> 2;
   String::parse_utf32((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "gravity");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (String*)&local_1a0, 1, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   local_f8 = (char*)0x0;
   local_c8 = "linear_damp_";
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_f8);
   local_128[0] = 0;
   String::parse_latin1((String*)local_128, "Linear Damp");
   local_c8 = "Area2D";
   local_158[0] = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)local_158);
   StringName::StringName((StringName*)&local_c8, (String*)local_158, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)local_128, (String*)&local_f8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
   local_c0 = 0x38;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "linear_damp_space_override");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (String*)&local_1a0, 2, (StringName*)&local_198, 0x4006, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_128[0] != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "0,100,0.001,or_greater";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   local_c8 = "linear_damp";
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (String*)&local_1a0, 1, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   local_f8 = (char*)0x0;
   String::parse_latin1((String*)&local_f8, "angular_damp_");
   local_c8 = "Angular Damp";
   local_128[0] = 0;
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)local_128);
   local_c8 = "Area2D";
   local_158[0] = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)local_158);
   StringName::StringName((StringName*)&local_c8, (String*)local_158, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)local_128, (String*)&local_f8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "Disabled,Combine,Combine-Replace,Replace,Replace-Combine";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0x38;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "angular_damp_space_override");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (String*)&local_1a0, 2, (StringName*)&local_198, 0x4006, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_128[0] != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "0,100,0.001,or_greater";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)&local_198);
   local_c8 = "angular_damp";
   local_1a0 = 0;
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_1a0);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (String*)&local_1a0, 1, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   local_f8 = (char*)0x0;
   String::parse_latin1((String*)&local_f8, "audio_bus_");
   local_c8 = "Audio Bus";
   local_128[0] = 0;
   local_c0 = 9;
   String::parse_latin1((StrRange*)local_128);
   local_c8 = "Area2D";
   local_158[0] = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)local_158);
   StringName::StringName((StringName*)&local_c8, (String*)local_158, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)local_128, (String*)&local_f8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "audio_bus_override");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (String*)&local_1a0, 0, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_f8 = "Area2D";
   local_1a8 = 0;
   local_f0 = 6;
   String::parse_latin1((StrRange*)&local_1a8);
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)local_128, true);
   _scs_create((char*)local_158, true);
   local_c8 = "";
   local_188[0] = 0;
   local_198 = (char*)0x0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_198);
   local_1a0 = 0;
   String::parse_latin1((String*)&local_1a0, "audio_bus_name");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 0x15, (String*)&local_1a0, 2, (StringName*)&local_198, 6, (PropertyInfo*)local_188);
   local_1a8 = 0;
   String::parse_latin1((String*)&local_1a8, "Area2D");
   StringName::StringName((StringName*)&local_f8, (String*)&local_1a8, false);
   ClassDB::add_property((StringName*)&local_f8, (PropertyInfo*)&local_c8, (StringName*)local_158, (StringName*)local_128, -1);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_188[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_158[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "SPACE_OVERRIDE_DISABLED", false);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "SPACE_OVERRIDE_DISABLED");
   GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info((GetTypeInfo<Area2D::SpaceOverride,void>*)&local_c8);
   local_128[0] = local_b8._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_b8._8_8_;
   local_b8 = auVar4 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_188[0] = 0;
   String::parse_latin1((String*)local_188, "Area2D");
   StringName::StringName((StringName*)&local_c8, (String*)local_188, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)local_128, (StringName*)&local_f8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_188);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "SPACE_OVERRIDE_COMBINE", false);
   local_158[0] = 0;
   local_c8 = "SPACE_OVERRIDE_COMBINE";
   local_c0 = 0x16;
   String::parse_latin1((StrRange*)local_158);
   GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info((GetTypeInfo<Area2D::SpaceOverride,void>*)&local_c8);
   local_128[0] = local_b8._0_8_;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = local_b8._8_8_;
   local_b8 = auVar5 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_188[0] = 0;
   String::parse_latin1((String*)local_188, "Area2D");
   StringName::StringName((StringName*)&local_c8, (String*)local_188, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)local_128, (StringName*)&local_f8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_188);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "SPACE_OVERRIDE_COMBINE_REPLACE", false);
   local_158[0] = 0;
   local_c8 = "SPACE_OVERRIDE_COMBINE_REPLACE";
   local_c0 = 0x1e;
   String::parse_latin1((StrRange*)local_158);
   GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info((GetTypeInfo<Area2D::SpaceOverride,void>*)&local_c8);
   local_128[0] = local_b8._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_b8._8_8_;
   local_b8 = auVar6 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "Area2D";
   local_188[0] = 0;
   local_c0 = 6;
   String::parse_latin1((StrRange*)local_188);
   StringName::StringName((StringName*)&local_c8, (String*)local_188, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)local_128, (StringName*)&local_f8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_188);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "SPACE_OVERRIDE_REPLACE", false);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "SPACE_OVERRIDE_REPLACE");
   GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info((GetTypeInfo<Area2D::SpaceOverride,void>*)&local_c8);
   local_128[0] = local_b8._0_8_;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_b8._8_8_;
   local_b8 = auVar7 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_188[0] = 0;
   String::parse_latin1((String*)local_188, "Area2D");
   StringName::StringName((StringName*)&local_c8, (String*)local_188, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)local_128, (StringName*)&local_f8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_188);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "SPACE_OVERRIDE_REPLACE_COMBINE", false);
   local_158[0] = 0;
   String::parse_latin1((String*)local_158, "SPACE_OVERRIDE_REPLACE_COMBINE");
   GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info((GetTypeInfo<Area2D::SpaceOverride,void>*)&local_c8);
   local_128[0] = local_b8._0_8_;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_b8._8_8_;
   local_b8 = auVar8 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_188[0] = 0;
   String::parse_latin1((String*)local_188, "Area2D");
   StringName::StringName((StringName*)&local_c8, (String*)local_188, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)local_128, (StringName*)&local_f8, 4, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_188);
   if (( StringName::configured != '\0' ) && ( local_128[0] != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Area2D::_clear_monitoring() */void Area2D::_clear_monitoring(Area2D *this) {
   Variant *pVVar1;
   int *piVar2;
   int iVar3;
   int iVar4;
   Object *pOVar5;
   code *pcVar6;
   void *pvVar7;
   ulong uVar8;
   Object *pOVar9;
   uint uVar10;
   ulong *puVar11;
   void *pvVar12;
   long lVar13;
   long *plVar14;
   long lVar15;
   long lVar16;
   undefined8 *puVar17;
   Variant *pVVar18;
   long in_FS_OFFSET;
   bool bVar19;
   Variant *local_228;
   ulong local_1b8[2];
   BodyState local_1a8[8];
   undefined1 local_1a0[16];
   undefined1 local_190[16];
   undefined8 local_180;
   Variant *local_178[2];
   Variant *local_168;
   Variant *pVStack_160;
   Variant *local_158;
   Variant *pVStack_150;
   undefined1 local_148[16];
   Variant local_138[24];
   Variant local_120[24];
   Variant local_108[24];
   Variant local_f0[24];
   undefined8 local_d8;
   undefined1 local_d0[16];
   Variant local_c0[8];
   Variant *local_b8;
   Variant *pVStack_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   undefined1 local_98[16];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x676] != (Area2D)0x0) {
      _err_print_error("_clear_monitoring", "scene/2d/physics/area_2d.cpp", 0x165, "Condition \"locked\" is true.", "This function can\'t be used during the in/out signal.", 0, 0);
      goto LAB_001090bf;
   }

   local_180 = 0;
   local_1a0 = (undefined1[16])0x0;
   uVar8 = 1;
   local_190 = (undefined1[16])0x0;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar8 * 4 )) {
            local_180 = uVar8 & 0xffffffff;
            goto LAB_001088ff;
         }

         uVar8 = uVar8 + 1;
      }
 while ( uVar8 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_001088ff:if (*(int*)( this + 0x6a4 ) == 0) {
      LAB_00108bb4:if ((void*)local_1a0._0_8_ != (void*)0x0) {
         pvVar12 = (void*)local_1a0._0_8_;
         if (( local_180._4_4_ != 0 ) && ( uVar10 = *(uint*)( hash_table_size_primes + ( local_180 & 0xffffffff ) * 4 ) ),uVar10 != 0) {
            lVar13 = 0;
            do {
               if (*(int*)( local_1a0._8_8_ + lVar13 ) != 0) {
                  *(int*)( local_1a0._8_8_ + lVar13 ) = 0;
                  puVar17 = (undefined8*)( (long)pvVar12 + lVar13 * 2 );
                  pvVar7 = (void*)*puVar17;
                  if (*(long*)( (long)pvVar7 + 0x30 ) != 0) {
                     LOCK();
                     plVar14 = (long*)( *(long*)( (long)pvVar7 + 0x30 ) + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        lVar16 = *(long*)( (long)pvVar7 + 0x30 );
                        *(undefined8*)( (long)pvVar7 + 0x30 ) = 0;
                        Memory::free_static((void*)( lVar16 + -0x10 ), false);
                     }

                     puVar17 = (undefined8*)( local_1a0._0_8_ + lVar13 * 2 );
                     pvVar12 = (void*)local_1a0._0_8_;
                  }

                  Memory::free_static(pvVar7, false);
                  *puVar17 = 0;
               }

               lVar13 = lVar13 + 4;
            }
 while ( lVar13 != (ulong)uVar10 * 4 );
            local_180 = local_180 & 0xffffffff;
            local_190 = (undefined1[16])0x0;
            if (pvVar12 == (void*)0x0) goto LAB_00108cac;
         }

         Memory::free_static(pvVar12, false);
         Memory::free_static((void*)local_1a0._8_8_, false);
      }

   }
 else {
      plVar14 = *(long**)( this + 0x690 );
      if (plVar14 != (long*)0x0) {
         do {
            HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>>::insert((ObjectID*)local_1b8, local_1a8, (bool)( (char)plVar14 + '\x10' ));
            plVar14 = (long*)*plVar14;
         }
 while ( plVar14 != (long*)0x0 );
         if (( *(long*)( this + 0x680 ) != 0 ) && ( *(int*)( this + 0x6a4 ) != 0 )) goto LAB_0010896d;
         LAB_00108a17:if ((long*)local_190._0_8_ != (long*)0x0) {
            plVar14 = (long*)local_190._0_8_;
            do {
               uVar10 = (uint)plVar14[2] & 0xffffff;
               if (uVar10 < (uint)ObjectDB::slot_max) {
                  while (true) {
                     uVar8 = local_1b8[0] >> 8;
                     local_1b8[0] = uVar8 << 8;
                     LOCK();
                     bVar19 = (char)ObjectDB::spin_lock == '\0';
                     if (bVar19) {
                        ObjectDB::spin_lock._0_1_ = '\x01';
                     }

                     UNLOCK();
                     if (bVar19) break;
                     local_1b8[0] = uVar8 << 8;
                     do {} while ( (char)ObjectDB::spin_lock != '\0' );
                  }
;
                  puVar11 = (ulong*)( (ulong)uVar10 * 0x10 + ObjectDB::object_slots );
                  if (( (ulong)plVar14[2] >> 0x18 & 0x7fffffffff ) == ( *puVar11 & 0x7fffffffff )) {
                     pOVar5 = (Object*)puVar11[1];
                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (( pOVar5 != (Object*)0x0 ) && ( pOVar9 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar9 != (Object*)0x0) {
                        pcVar6 = *(code**)( *(long*)pOVar9 + 0x110 );
                        create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_1b8, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_enter_tree");
                        ( *pcVar6 )(pOVar9, SceneStringNames::singleton + 0x38, (Area2D*)local_1b8);
                        Callable::~Callable((Callable*)local_1b8);
                        pcVar6 = *(code**)( *(long*)pOVar9 + 0x110 );
                        create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_1b8, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_exit_tree");
                        ( *pcVar6 )(pOVar9, SceneStringNames::singleton + 0x40, (Area2D*)local_1b8);
                        Callable::~Callable((Callable*)local_1b8);
                        if (*(char*)( (long)plVar14 + 0x24 ) != '\0') {
                           lVar13 = plVar14[6];
                           if (lVar13 != 0) {
                              lVar16 = 0;
                              do {
                                 lVar15 = *(long*)( lVar13 + -8 );
                                 if ((int)lVar15 <= (int)lVar16) break;
                                 if (lVar15 <= lVar16) goto LAB_0010956a;
                                 piVar2 = (int*)( lVar13 + lVar16 * 8 );
                                 iVar3 = piVar2[1];
                                 iVar4 = *piVar2;
                                 lVar13 = SceneStringNames::singleton + 0x150;
                                 local_1b8[0] = plVar14[3];
                                 Variant::Variant(local_138, (Area2D*)local_1b8);
                                 Variant::Variant(local_120, pOVar9);
                                 Variant::Variant(local_108, iVar4);
                                 pVVar18 = local_c0;
                                 Variant::Variant(local_f0, iVar3);
                                 local_d8 = 0;
                                 local_d0 = (undefined1[16])0x0;
                                 local_b8 = local_138;
                                 pVStack_b0 = local_120;
                                 local_a8 = local_108;
                                 pVStack_a0 = local_f0;
                                 ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar13, &local_b8, 4);
                                 do {
                                    pVVar1 = pVVar18 + -0x18;
                                    pVVar18 = pVVar18 + -0x18;
                                    if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                       Variant::_clear_internal();
                                    }

                                 }
 while ( pVVar18 != local_138 );
                                 lVar13 = plVar14[6];
                                 lVar16 = lVar16 + 1;
                              }
 while ( lVar13 != 0 );
                           }

                           lVar13 = SceneStringNames::singleton + 0x158;
                           Variant::Variant((Variant*)&local_b8, pOVar5);
                           pVStack_a0 = (Variant*)0x0;
                           local_98 = (undefined1[16])0x0;
                           local_168 = (Variant*)&local_b8;
                           ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar13, &local_168, 1);
                           if (Variant::needs_deinit[(int)pVStack_a0] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[(int)local_b8] != '\0') {
                              Variant::_clear_internal();
                           }

                        }

                     }

                  }
 else {
                     ObjectDB::spin_lock._0_1_ = '\0';
                  }

               }
 else {
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               }

               plVar14 = (long*)*plVar14;
            }
 while ( plVar14 != (long*)0x0 );
         }

         goto LAB_00108bb4;
      }

      if (*(long*)( this + 0x680 ) != 0) {
         LAB_0010896d:lVar13 = 0;
         uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6a0 ) * 4 );
         if (uVar10 != 0) {
            do {
               if (*(int*)( *(long*)( this + 0x688 ) + lVar13 ) != 0) {
                  *(int*)( *(long*)( this + 0x688 ) + lVar13 ) = 0;
                  pvVar12 = *(void**)( *(long*)( this + 0x680 ) + lVar13 * 2 );
                  if (*(long*)( (long)pvVar12 + 0x30 ) != 0) {
                     LOCK();
                     plVar14 = (long*)( *(long*)( (long)pvVar12 + 0x30 ) + -0x10 );
                     *plVar14 = *plVar14 + -1;
                     UNLOCK();
                     if (*plVar14 == 0) {
                        lVar16 = *(long*)( (long)pvVar12 + 0x30 );
                        *(undefined8*)( (long)pvVar12 + 0x30 ) = 0;
                        Memory::free_static((void*)( lVar16 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar12, false);
                  *(undefined8*)( *(long*)( this + 0x680 ) + lVar13 * 2 ) = 0;
               }

               lVar13 = lVar13 + 4;
            }
 while ( lVar13 != (ulong)uVar10 << 2 );
         }

         *(undefined4*)( this + 0x6a4 ) = 0;
         *(undefined1(*) [16])( this + 0x690 ) = (undefined1[16])0x0;
         goto LAB_00108a17;
      }

   }

   LAB_00108cac:local_180 = 0;
   local_1a0 = (undefined1[16])0x0;
   local_190 = (undefined1[16])0x0;
   uVar8 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar8 * 4 )) {
            local_180 = uVar8 & 0xffffffff;
            goto LAB_00108d39;
         }

         uVar8 = uVar8 + 1;
      }
 while ( uVar8 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00108d39:if (*(int*)( this + 0x6d4 ) == 0) {
      if (*(long*)( this + 0x6b0 ) == 0) goto LAB_001090bf;
   }
 else {
      plVar14 = *(long**)( this + 0x6c0 );
      if (plVar14 == (long*)0x0) {
         if (*(long*)( this + 0x6b0 ) == 0) goto LAB_001090bf;
      }
 else {
         do {
            HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>>::insert((ObjectID*)local_1b8, (AreaState*)local_1a8, (bool)( (char)plVar14 + '\x10' ));
            plVar14 = (long*)*plVar14;
         }
 while ( plVar14 != (long*)0x0 );
         if (( *(long*)( this + 0x6b0 ) == 0 ) || ( *(int*)( this + 0x6d4 ) == 0 )) goto LAB_00108e47;
      }

      lVar13 = 0;
      uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x6d0 ) * 4 );
      if (uVar10 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x6b8 ) + lVar13 ) != 0) {
               *(int*)( *(long*)( this + 0x6b8 ) + lVar13 ) = 0;
               pvVar12 = *(void**)( *(long*)( this + 0x6b0 ) + lVar13 * 2 );
               if (*(long*)( (long)pvVar12 + 0x30 ) != 0) {
                  LOCK();
                  plVar14 = (long*)( *(long*)( (long)pvVar12 + 0x30 ) + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     lVar16 = *(long*)( (long)pvVar12 + 0x30 );
                     *(undefined8*)( (long)pvVar12 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar16 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar12, false);
               *(undefined8*)( *(long*)( this + 0x6b0 ) + lVar13 * 2 ) = 0;
            }

            lVar13 = lVar13 + 4;
         }
 while ( lVar13 != (ulong)uVar10 << 2 );
      }

      *(undefined4*)( this + 0x6d4 ) = 0;
      *(undefined1(*) [16])( this + 0x6c0 ) = (undefined1[16])0x0;
   }

   LAB_00108e47:if ((long*)local_190._0_8_ != (long*)0x0) {
      plVar14 = (long*)local_190._0_8_;
      do {
         uVar10 = (uint)plVar14[2] & 0xffffff;
         if (uVar10 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar8 = local_1b8[0] >> 8;
               local_1b8[0] = uVar8 << 8;
               LOCK();
               bVar19 = (char)ObjectDB::spin_lock == '\0';
               if (bVar19) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar19) break;
               local_1b8[0] = uVar8 << 8;
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar11 = (ulong*)( (ulong)uVar10 * 0x10 + ObjectDB::object_slots );
            if (( (ulong)plVar14[2] >> 0x18 & 0x7fffffffff ) == ( *puVar11 & 0x7fffffffff )) {
               pOVar5 = (Object*)puVar11[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (( pOVar5 != (Object*)0x0 ) && ( pOVar9 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar9 != (Object*)0x0) {
                  pcVar6 = *(code**)( *(long*)pOVar9 + 0x110 );
                  create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_1b8, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_enter_tree");
                  ( *pcVar6 )(pOVar9, SceneStringNames::singleton + 0x38, (Area2D*)local_1b8);
                  Callable::~Callable((Callable*)local_1b8);
                  pcVar6 = *(code**)( *(long*)pOVar9 + 0x110 );
                  create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_1b8, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_exit_tree");
                  ( *pcVar6 )(pOVar9, SceneStringNames::singleton + 0x40, (Area2D*)local_1b8);
                  Callable::~Callable((Callable*)local_1b8);
                  if (*(char*)( (long)plVar14 + 0x24 ) != '\0') {
                     lVar13 = plVar14[6];
                     if (lVar13 != 0) {
                        lVar16 = 0;
                        do {
                           lVar15 = *(long*)( lVar13 + -8 );
                           if ((int)lVar15 <= (int)lVar16) break;
                           if (lVar15 <= lVar16) {
                              LAB_0010956a:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar16, lVar15, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar6 = (code*)invalidInstructionException();
                              ( *pcVar6 )();
                           }

                           piVar2 = (int*)( lVar13 + lVar16 * 8 );
                           iVar3 = piVar2[1];
                           iVar4 = *piVar2;
                           lVar13 = SceneStringNames::singleton + 0x168;
                           local_1b8[0] = plVar14[3];
                           Variant::Variant((Variant*)&local_b8, (Area2D*)local_1b8);
                           Variant::Variant((Variant*)&pVStack_a0, pOVar9);
                           Variant::Variant(local_88, iVar4);
                           pVVar18 = (Variant*)local_40;
                           Variant::Variant(local_70, iVar3);
                           local_58 = 0;
                           local_50 = (undefined1[16])0x0;
                           local_168 = (Variant*)&local_b8;
                           pVStack_160 = (Variant*)&pVStack_a0;
                           local_158 = local_88;
                           pVStack_150 = local_70;
                           ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar13, &local_168, 4);
                           do {
                              pVVar1 = pVVar18 + -0x18;
                              pVVar18 = pVVar18 + -0x18;
                              if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                                 Variant::_clear_internal();
                              }

                           }
 while ( pVVar18 != (Variant*)&local_b8 );
                           lVar13 = plVar14[6];
                           lVar16 = lVar16 + 1;
                        }
 while ( lVar13 != 0 );
                     }

                     local_228 = (Variant*)&local_168;
                     lVar13 = SceneStringNames::singleton + 0x1c0;
                     Variant::Variant(local_228, pOVar5);
                     local_178[0] = local_228;
                     pVStack_150 = (Variant*)0x0;
                     local_148 = (undefined1[16])0x0;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar13, local_178, 1);
                     if (Variant::needs_deinit[(int)pVStack_150] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[(int)local_168] != '\0') {
                        Variant::_clear_internal();
                     }

                  }

               }

            }
 else {
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         plVar14 = (long*)*plVar14;
      }
 while ( plVar14 != (long*)0x0 );
   }

   if ((void*)local_1a0._0_8_ != (void*)0x0) {
      pvVar12 = (void*)local_1a0._0_8_;
      if (( local_180._4_4_ != 0 ) && ( uVar10 = *(uint*)( hash_table_size_primes + ( local_180 & 0xffffffff ) * 4 ) ),uVar10 != 0) {
         lVar13 = 0;
         do {
            if (*(int*)( local_1a0._8_8_ + lVar13 ) != 0) {
               *(int*)( local_1a0._8_8_ + lVar13 ) = 0;
               puVar17 = (undefined8*)( (long)pvVar12 + lVar13 * 2 );
               pvVar7 = (void*)*puVar17;
               if (*(long*)( (long)pvVar7 + 0x30 ) != 0) {
                  LOCK();
                  plVar14 = (long*)( *(long*)( (long)pvVar7 + 0x30 ) + -0x10 );
                  *plVar14 = *plVar14 + -1;
                  UNLOCK();
                  if (*plVar14 == 0) {
                     lVar16 = *(long*)( (long)pvVar7 + 0x30 );
                     *(undefined8*)( (long)pvVar7 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar16 + -0x10 ), false);
                  }

                  puVar17 = (undefined8*)( local_1a0._0_8_ + lVar13 * 2 );
                  pvVar12 = (void*)local_1a0._0_8_;
               }

               Memory::free_static(pvVar7, false);
               *puVar17 = 0;
            }

            lVar13 = lVar13 + 4;
         }
 while ( lVar13 != (ulong)uVar10 * 4 );
         local_180 = local_180 & 0xffffffff;
         local_190 = (undefined1[16])0x0;
         if (pvVar12 == (void*)0x0) goto LAB_001090bf;
      }

      Memory::free_static(pvVar12, false);
      Memory::free_static((void*)local_1a0._8_8_, false);
   }

   LAB_001090bf:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Area2D::_space_changed(RID const&) */void Area2D::_space_changed(Area2D *this, RID *param_1) {
   if (*(long*)param_1 != 0) {
      return;
   }

   _clear_monitoring(this);
   return;
}
/* Area2D::set_monitoring(bool) */void Area2D::set_monitoring(Area2D *this, bool param_1) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x674] != (Area2D)param_1) {
      if (this[0x676] == (Area2D)0x0) {
         this[0x674] = (Area2D)param_1;
         if (!param_1) {
            plVar2 = (long*)PhysicsServer2D::get_singleton();
            local_48 = 0;
            local_40 = 0;
            ( **(code**)( *plVar2 + 0x2e0 ) )(plVar2, *(undefined8*)( this + 0x590 ), &local_48);
            Callable::~Callable((Callable*)&local_48);
            plVar2 = (long*)PhysicsServer2D::get_singleton();
            local_48 = 0;
            local_40 = 0;
            ( **(code**)( *plVar2 + 0x2e8 ) )(plVar2, *(undefined8*)( this + 0x590 ), &local_48);
            Callable::~Callable((Callable*)&local_48);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _clear_monitoring(this);
               return;
            }

            goto LAB_001098bb;
         }

         plVar2 = (long*)PhysicsServer2D::get_singleton();
         pcVar1 = *(code**)( *plVar2 + 0x2e0 );
         create_custom_callable_function_pointer<Area2D,int,RID_const&,ObjectID,int,int>((Area2D*)&local_48, (char*)this, (_func_void_int_RID_ptr_ObjectID_int_int*)"&Area2D::_body_inout");
         ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), &local_48);
         Callable::~Callable((Callable*)&local_48);
         plVar2 = (long*)PhysicsServer2D::get_singleton();
         pcVar1 = *(code**)( *plVar2 + 0x2e8 );
         create_custom_callable_function_pointer<Area2D,int,RID_const&,ObjectID,int,int>((Area2D*)&local_48, (char*)this, (_func_void_int_RID_ptr_ObjectID_int_int*)"&Area2D::_area_inout");
         ( *pcVar1 )(plVar2, *(undefined8*)( this + 0x590 ), &local_48);
         Callable::~Callable((Callable*)&local_48);
      }
 else {
         _err_print_error("set_monitoring", "scene/2d/physics/area_2d.cpp", 0x1aa, "Condition \"locked\" is true.", "Function blocked during in/out signal. Use set_deferred(\"monitoring\", true/false).", 0, 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001098bb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::Area2D() */void Area2D::Area2D(Area2D *this) {
   long *plVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar1 = (long*)PhysicsServer2D::get_singleton();
   uVar2 = ( **(code**)( *plVar1 + 0x210 ) )(plVar1);
   CollisionObject2D::CollisionObject2D((CollisionObject2D*)this, uVar2, 1);
   *(undefined8*)( this + 0x648 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0011c528;
   *(undefined8*)( this + 0x664 ) = 0x3dcccccd00000000;
   *(undefined2*)( this + 0x674 ) = 0;
   uVar2 = _LC168;
   *(undefined8*)( this + 0x650 ) = 0;
   *(undefined8*)( this + 0x6a0 ) = uVar2;
   *(undefined8*)( this + 0x6d0 ) = uVar2;
   this[0x658] = (Area2D)0x0;
   *(undefined8*)( this + 0x65c ) = 0;
   *(undefined8*)( this + 0x66c ) = 0x3f800000;
   this[0x676] = (Area2D)0x0;
   this[0x6d8] = (Area2D)0x0;
   *(undefined8*)( this + 0x6e0 ) = 0;
   *(undefined1(*) [16])( this + 0x680 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x690 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x6b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x6c0 ) = (undefined1[16])0x0;
   set_gravity(this, _LC169);
   local_18 = _LC170;
   set_gravity_point_center(this, (Vector2*)&local_18);
   set_monitoring(this, true);
   set_monitorable(this, true);
   this[0x492] = (Area2D)0x1;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Area2D::_body_inout(int, RID const&, ObjectID, int, int) */void Area2D::_body_inout(Area2D *this, int param_1, ulong *param_2, ulong param_4, int param_5, int param_6) {
   Variant *pVVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   long lVar6;
   int iVar7;
   char cVar8;
   uint uVar9;
   code *pcVar10;
   undefined8 uVar11;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   int iVar38;
   int iVar39;
   uint uVar40;
   ulong uVar41;
   int iVar42;
   long lVar43;
   ulong uVar44;
   long lVar45;
   Variant *pVVar46;
   long *plVar47;
   uint uVar48;
   int iVar49;
   ulong *puVar50;
   uint uVar51;
   ulong uVar52;
   ulong uVar53;
   uint uVar54;
   ulong uVar55;
   long lVar56;
   long lVar57;
   uint *puVar58;
   long in_FS_OFFSET;
   bool bVar59;
   Node *local_150;
   Object *local_140;
   long local_138;
   ulong local_120;
   long local_118[2];
   undefined8 local_108;
   undefined4 local_100;
   undefined1 local_fc;
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
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_120 = param_4;
   if (param_4 == 0) {
      *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
      lVar45 = SceneStringNames::singleton;
      this[0x676] = (Area2D)0x1;
      if (param_1 == 0) {
         Object::emit_signal<RID,Node*,int,int>((Object*)this, lVar45 + 0x140, *param_2, 0);
      }
 else {
         Object::emit_signal<RID,Node*,int,int>((Object*)this, lVar45 + 0x150, *param_2, 0, param_5, param_6);
      }

      goto LAB_00109d62;
   }

   uVar48 = (uint)param_4 & 0xffffff;
   if (uVar48 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar41 = local_108 >> 8;
         local_108 = uVar41 << 8;
         LOCK();
         bVar59 = (char)ObjectDB::spin_lock == '\0';
         if (bVar59) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar59) break;
         local_108 = uVar41 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar50 = (ulong*)( (ulong)uVar48 * 0x10 + ObjectDB::object_slots );
      if (( param_4 >> 0x18 & 0x7fffffffff ) == ( *puVar50 & 0x7fffffffff )) {
         local_140 = (Object*)puVar50[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (local_140 == (Object*)0x0) {
            local_150 = (Node*)0x0;
         }
 else {
            local_150 = (Node*)__dynamic_cast(local_140, &Object::typeinfo, &Node::typeinfo, 0);
            param_4 = local_120;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
         local_140 = (Object*)0x0;
         local_150 = (Node*)0x0;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      local_140 = (Object*)0x0;
      local_150 = (Node*)0x0;
   }

   local_138 = *(long*)( this + 0x680 );
   if (( local_138 != 0 ) && ( *(int*)( this + 0x6a4 ) != 0 )) {
      uVar48 = *(uint*)( this + 0x6a0 );
      lVar57 = *(long*)( this + 0x688 );
      uVar52 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 ));
      lVar45 = *(long*)( hash_table_size_primes_inv + (ulong)uVar48 * 8 );
      uVar41 = param_4 * 0x3ffff - 1;
      uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
      uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
      uVar41 = uVar41 >> 0x16 ^ uVar41;
      uVar55 = uVar41 & 0xffffffff;
      if ((int)uVar41 == 0) {
         uVar55 = 1;
      }

      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar55 * lVar45;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar52;
      lVar43 = SUB168(auVar12 * auVar25, 8);
      uVar51 = *(uint*)( lVar57 + lVar43 * 4 );
      uVar40 = SUB164(auVar12 * auVar25, 8);
      if (uVar51 != 0) {
         uVar54 = 0;
         do {
            if (( uVar51 == (uint)uVar55 ) && ( *(ulong*)( *(long*)( local_138 + lVar43 * 8 ) + 0x10 ) == param_4 )) {
               lVar45 = *(long*)( local_138 + (ulong)uVar40 * 8 );
               if (param_1 == 0) {
                  *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
                  this[0x676] = (Area2D)0x1;
                  if (lVar45 == 0) goto LAB_00109dae;
                  *(int*)( lVar45 + 0x20 ) = *(int*)( lVar45 + 0x20 ) + 1;
                  if (local_150 == (Node*)0x0) goto LAB_00109f4a;
                  goto LAB_00109f24;
               }

               if (lVar45 == 0) goto LAB_00109d00;
               *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
               iVar39 = *(int*)( lVar45 + 0x20 );
               this[0x676] = (Area2D)0x1;
               iVar39 = iVar39 + -1;
               *(int*)( lVar45 + 0x20 ) = iVar39;
               if (local_150 == (Node*)0x0) {
                  cVar8 = *(char*)( lVar45 + 0x24 );
                  if (iVar39 != 0) goto LAB_00109f91;
                  lVar45 = *(long*)( lVar45 + 0x10 );
                  goto LAB_0010a2ad;
               }

               lVar57 = *(long*)( lVar45 + 0x30 );
               if (lVar57 == 0) goto LAB_0010a604;
               lVar43 = *(long*)( lVar57 + -8 );
               iVar42 = (int)lVar43 + -1;
               if (lVar43 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar43, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar10 = (code*)invalidInstructionException();
                  ( *pcVar10 )();
               }

               iVar49 = 0;
               if (-1 < iVar42) goto LAB_00109c9d;
               goto LAB_0010a604;
            }

            uVar54 = uVar54 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar40 + 1) * lVar45;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            lVar43 = SUB168(auVar13 * auVar26, 8);
            uVar51 = *(uint*)( lVar57 + lVar43 * 4 );
            uVar40 = SUB164(auVar13 * auVar26, 8);
         }
 while ( ( uVar51 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar51 * lVar45,auVar27._8_8_ = 0,auVar27._0_8_ = uVar52,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 ) + uVar40 ) - SUB164(auVar14 * auVar27, 8)) * lVar45,auVar28._8_8_ = 0,auVar28._0_8_ = uVar52,uVar54 <= SUB164(auVar15 * auVar28, 8) );
      }

   }

   if (param_1 == 0) {
      *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
      this[0x676] = (Area2D)0x1;
      LAB_00109dae:local_100 = 0;
      local_fc = 0;
      local_108 = 0;
      local_f0 = 0;
      HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>>::insert((Area2D*)local_118, (BodyState*)( this + 0x678 ), SUB81(&local_120, 0));
      uVar41 = *param_2;
      *(undefined4*)( local_118[0] + 0x20 ) = 0;
      *(ulong*)( local_118[0] + 0x18 ) = uVar41;
      if (local_150 == (Node*)0x0) {
         *(undefined1*)( local_118[0] + 0x24 ) = 0;
         *(undefined4*)( local_118[0] + 0x20 ) = 1;
      }
 else {
         *(byte*)( local_118[0] + 0x24 ) = (byte)local_150[0x2fa] >> 6 & 1;
         pcVar10 = *(code**)( *(long*)local_150 + 0x108 );
         create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_118, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_enter_tree");
         Callable::bind<ObjectID>((Callable*)&local_108, (Area2D*)local_118, local_120);
         ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x38, (Callable*)&local_108, 0);
         Callable::~Callable((Callable*)&local_108);
         Callable::~Callable((Callable*)local_118);
         pcVar10 = *(code**)( *(long*)local_150 + 0x108 );
         create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_118, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_exit_tree");
         Callable::bind<ObjectID>((Callable*)&local_108, (Area2D*)local_118, local_120);
         ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x40, (Callable*)&local_108, 0);
         Callable::~Callable((Callable*)&local_108);
         Callable::~Callable((Callable*)local_118);
         if (*(char*)( local_118[0] + 0x24 ) == '\0') {
            iVar39 = *(int*)( local_118[0] + 0x20 );
         }
 else {
            Object::emit_signal<Node*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x148 ), local_150);
            iVar39 = *(int*)( local_118[0] + 0x20 );
         }

         *(int*)( local_118[0] + 0x20 ) = iVar39 + 1;
         lVar45 = local_118[0];
         LAB_00109f24:local_108 = CONCAT44(param_6, param_5);
         VSet<Area2D::ShapePair>::insert((VSet<Area2D::ShapePair>*)( lVar45 + 0x28 ), (ShapePair*)&local_108);
         if (*(char*)( lVar45 + 0x24 ) == '\0') goto LAB_00109d62;
      }

      LAB_00109f4a:Object::emit_signal<RID,Node*,int,int>((Object*)this, SceneStringNames::singleton + 0x140, *param_2, local_150, param_5, param_6);
      goto LAB_00109d62;
   }

   goto LAB_00109d00;
   LAB_0010a340:uVar9 = *(uint*)( lVar57 + uVar44 * 4 );
   uVar53 = (ulong)uVar9;
   uVar55 = uVar44 & 0xffffffff;
   uVar40 = uVar40 + 1;
   if (( uVar9 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar53 * lVar43,auVar30._8_8_ = 0,auVar30._0_8_ = uVar52,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar51 + uVar54 ) - SUB164(auVar17 * auVar30, 8)) * lVar43,auVar31._8_8_ = 0,auVar31._0_8_ = uVar52,uVar41 = uVar44,SUB164(auVar18 * auVar31, 8) < uVar40) goto LAB_0010a4e7;
   goto LAB_0010a37c;
   LAB_00109c9d:do {
      iVar38 = ( iVar42 + iVar49 ) / 2;
      lVar56 = (long)iVar38;
      lVar6 = lVar56 * 8;
      iVar7 = *(int*)( lVar57 + lVar6 );
      if (param_5 == iVar7) {
         iVar7 = ( (int*)( lVar57 + lVar6 ) )[1];
         if (param_6 < iVar7) goto LAB_00109c92;
         if (param_6 <= iVar7) {
            if (-2 < iVar42 + iVar49) {
               if (lVar56 < lVar43) {
                  CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( lVar45 + 0x30 ));
                  lVar57 = *(long*)( lVar45 + 0x30 );
                  if (lVar57 == 0) {
                     lVar43 = -1;
                  }
 else {
                     lVar43 = *(long*)( lVar57 + -8 ) + -1;
                     if (lVar56 < lVar43) {
                        memmove((void*)( lVar57 + lVar6 ), (void*)( lVar57 + 8 + lVar6 ), ( lVar43 - lVar56 ) * 8);
                     }

                  }

                  CowData<Area2D::ShapePair>::resize<false>((CowData<Area2D::ShapePair>*)( lVar45 + 0x30 ), lVar43);
                  iVar39 = *(int*)( lVar45 + 0x20 );
               }
 else {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar56, lVar43, "p_index", "size()", "", false, false);
                  iVar39 = *(int*)( lVar45 + 0x20 );
               }

               cVar8 = *(char*)( lVar45 + 0x24 );
               if (iVar39 != 0) goto LAB_0010a14e;
               local_138 = *(long*)( this + 0x680 );
               lVar45 = *(long*)( lVar45 + 0x10 );
               if (local_138 == 0) goto LAB_0010a1f2;
               goto LAB_0010a1e4;
            }

            break;
         }

         LAB_00109cc9:iVar49 = iVar38 + 1;
      }
 else {
         if (iVar7 <= param_5) goto LAB_00109cc9;
         LAB_00109c92:iVar42 = iVar38 + -1;
      }

   }
 while ( iVar49 <= iVar42 );
   LAB_0010a604:cVar8 = *(char*)( lVar45 + 0x24 );
   if (iVar39 == 0) {
      lVar45 = *(long*)( lVar45 + 0x10 );
      LAB_0010a1e4:if (*(int*)( this + 0x6a4 ) != 0) {
         uVar48 = *(uint*)( this + 0x6a0 );
         lVar57 = *(long*)( this + 0x688 );
         LAB_0010a2ad:uVar51 = *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 );
         uVar52 = CONCAT44(0, uVar51);
         lVar43 = *(long*)( hash_table_size_primes_inv + (ulong)uVar48 * 8 );
         uVar41 = lVar45 * 0x3ffff - 1;
         uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
         uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
         uVar40 = ( uint )(uVar41 >> 0x16) ^ (uint)uVar41;
         uVar48 = 1;
         if (uVar40 != 0) {
            uVar48 = uVar40;
         }

         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar48 * lVar43;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar52;
         uVar41 = SUB168(auVar16 * auVar29, 8);
         uVar40 = *(uint*)( lVar57 + uVar41 * 4 );
         uVar53 = (ulong)uVar40;
         uVar55 = (ulong)SUB164(auVar16 * auVar29, 8);
         if (uVar40 != 0) {
            uVar40 = 0;
            LAB_0010a37c:auVar19._8_8_ = 0;
            auVar19._0_8_ = ( ulong )((int)uVar55 + 1) * lVar43;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar52;
            uVar44 = SUB168(auVar19 * auVar32, 8);
            uVar54 = SUB164(auVar19 * auVar32, 8);
            if (( uVar48 != (uint)uVar53 ) || ( lVar45 != *(long*)( *(long*)( local_138 + uVar41 * 8 ) + 0x10 ) )) goto LAB_0010a340;
            puVar58 = (uint*)( lVar57 + uVar44 * 4 );
            uVar41 = (ulong)uVar54;
            uVar48 = *puVar58;
            if (( uVar48 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar48 * lVar43,auVar33._8_8_ = 0,auVar33._0_8_ = uVar52,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar54 + uVar51 ) - SUB164(auVar20 * auVar33, 8)) * lVar43,auVar34._8_8_ = 0,auVar34._0_8_ = uVar52,SUB164(auVar21 * auVar34, 8) != 0) {
               while (true) {
                  puVar2 = (uint*)( lVar57 + uVar55 * 4 );
                  *puVar58 = *puVar2;
                  puVar3 = (undefined8*)( local_138 + uVar44 * 8 );
                  *puVar2 = uVar48;
                  puVar4 = (undefined8*)( local_138 + uVar55 * 8 );
                  uVar11 = *puVar3;
                  *puVar3 = *puVar4;
                  *puVar4 = uVar11;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = ( ulong )((int)uVar41 + 1) * lVar43;
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = uVar52;
                  uVar44 = SUB168(auVar24 * auVar37, 8);
                  puVar58 = (uint*)( lVar57 + uVar44 * 4 );
                  uVar48 = *puVar58;
                  uVar55 = uVar41;
                  if (( uVar48 == 0 ) || ( auVar22._8_8_ = 0 ),auVar22._0_8_ = (ulong)uVar48 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar52,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( SUB164(auVar24 * auVar37, 8) + uVar51 ) - SUB164(auVar22 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar52,SUB164(auVar23 * auVar36, 8) == 0) break;
                  uVar41 = uVar44 & 0xffffffff;
               }
;
            }

            *(undefined4*)( lVar57 + uVar55 * 4 ) = 0;
            plVar5 = (long*)( local_138 + uVar55 * 8 );
            plVar47 = (long*)*plVar5;
            if (*(long**)( this + 0x690 ) == plVar47) {
               *(long*)( this + 0x690 ) = *plVar47;
               plVar47 = (long*)*plVar5;
            }

            if (*(long**)( this + 0x698 ) == plVar47) {
               *(long*)( this + 0x698 ) = plVar47[1];
               plVar47 = (long*)*plVar5;
            }

            if ((long*)plVar47[1] != (long*)0x0) {
               *(long*)plVar47[1] = *plVar47;
               plVar47 = (long*)*plVar5;
            }

            if (*plVar47 != 0) {
               *(long*)( *plVar47 + 8 ) = plVar47[1];
               plVar47 = (long*)*plVar5;
            }

            if (plVar47[6] != 0) {
               LOCK();
               plVar5 = (long*)( plVar47[6] + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  lVar45 = plVar47[6];
                  plVar47[6] = 0;
                  Memory::free_static((void*)( lVar45 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar47, false);
            *(undefined8*)( *(long*)( this + 0x680 ) + uVar55 * 8 ) = 0;
            *(int*)( this + 0x6a4 ) = *(int*)( this + 0x6a4 ) + -1;
         }

         LAB_0010a4e7:if (local_150 == (Node*)0x0) goto LAB_00109f91;
      }

      LAB_0010a1f2:pcVar10 = *(code**)( *(long*)local_150 + 0x110 );
      create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_enter_tree");
      ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x38, (Area2D*)&local_108);
      Callable::~Callable((Callable*)&local_108);
      pcVar10 = *(code**)( *(long*)local_150 + 0x110 );
      create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&Area2D::_body_exit_tree");
      ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x40, (Area2D*)&local_108);
      Callable::~Callable((Callable*)&local_108);
      if (cVar8 != '\0') {
         Object::emit_signal<Object*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x158 ), local_140);
         LAB_00109f91:lVar45 = SceneStringNames::singleton + 0x150;
         local_108 = *param_2;
         Variant::Variant(local_b8, (RID*)&local_108);
         Variant::Variant(local_a0, local_140);
         Variant::Variant(local_88, param_5);
         Variant::Variant(local_70, param_6);
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         pVVar46 = (Variant*)local_40;
         local_e8 = local_b8;
         pVStack_e0 = local_a0;
         local_d8 = local_88;
         pVStack_d0 = local_70;
         ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar45, &local_e8, 4);
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
 else {
      LAB_0010a14e:if (cVar8 != '\0') goto LAB_00109f91;
   }

   LAB_00109d62:this[0x676] = (Area2D)0x0;
   if (*(int*)( this + 0x598 ) == 0) {
      if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("unlock_callback", "./scene/2d/physics/collision_object_2d.h", 0x59, "Condition \"callback_lock == 0\" is true.", 0, 0);
         return;
      }

      goto LAB_0010a622;
   }

   *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + -1;
   LAB_00109d00:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a622:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::_area_inout(int, RID const&, ObjectID, int, int) */void Area2D::_area_inout(Area2D *this, int param_1, ulong *param_2, ulong param_4, int param_5, int param_6) {
   Variant *pVVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   long lVar6;
   int iVar7;
   char cVar8;
   uint uVar9;
   code *pcVar10;
   undefined8 uVar11;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   int iVar38;
   int iVar39;
   uint uVar40;
   ulong uVar41;
   int iVar42;
   long lVar43;
   ulong uVar44;
   long lVar45;
   Variant *pVVar46;
   long *plVar47;
   uint uVar48;
   int iVar49;
   ulong *puVar50;
   uint uVar51;
   ulong uVar52;
   ulong uVar53;
   uint uVar54;
   ulong uVar55;
   long lVar56;
   long lVar57;
   uint *puVar58;
   long in_FS_OFFSET;
   bool bVar59;
   Node *local_150;
   Object *local_140;
   long local_138;
   ulong local_120;
   long local_118[2];
   undefined8 local_108;
   undefined4 local_100;
   undefined1 local_fc;
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
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_120 = param_4;
   if (param_4 == 0) {
      *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
      lVar45 = SceneStringNames::singleton;
      this[0x676] = (Area2D)0x1;
      if (param_1 == 0) {
         Object::emit_signal<RID,Node*,int,int>((Object*)this, lVar45 + 0x160, *param_2, 0);
      }
 else {
         Object::emit_signal<RID,Node*,int,int>((Object*)this, lVar45 + 0x168, *param_2, 0, param_5, param_6);
      }

      goto LAB_0010a982;
   }

   uVar48 = (uint)param_4 & 0xffffff;
   if (uVar48 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar41 = local_108 >> 8;
         local_108 = uVar41 << 8;
         LOCK();
         bVar59 = (char)ObjectDB::spin_lock == '\0';
         if (bVar59) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar59) break;
         local_108 = uVar41 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar50 = (ulong*)( (ulong)uVar48 * 0x10 + ObjectDB::object_slots );
      if (( param_4 >> 0x18 & 0x7fffffffff ) == ( *puVar50 & 0x7fffffffff )) {
         local_140 = (Object*)puVar50[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (local_140 == (Object*)0x0) {
            local_150 = (Node*)0x0;
         }
 else {
            local_150 = (Node*)__dynamic_cast(local_140, &Object::typeinfo, &Node::typeinfo, 0);
            param_4 = local_120;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
         local_140 = (Object*)0x0;
         local_150 = (Node*)0x0;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      local_140 = (Object*)0x0;
      local_150 = (Node*)0x0;
   }

   local_138 = *(long*)( this + 0x6b0 );
   if (( local_138 != 0 ) && ( *(int*)( this + 0x6d4 ) != 0 )) {
      uVar48 = *(uint*)( this + 0x6d0 );
      lVar57 = *(long*)( this + 0x6b8 );
      uVar52 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 ));
      lVar45 = *(long*)( hash_table_size_primes_inv + (ulong)uVar48 * 8 );
      uVar41 = param_4 * 0x3ffff - 1;
      uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
      uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
      uVar41 = uVar41 >> 0x16 ^ uVar41;
      uVar55 = uVar41 & 0xffffffff;
      if ((int)uVar41 == 0) {
         uVar55 = 1;
      }

      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar55 * lVar45;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar52;
      lVar43 = SUB168(auVar12 * auVar25, 8);
      uVar51 = *(uint*)( lVar57 + lVar43 * 4 );
      uVar40 = SUB164(auVar12 * auVar25, 8);
      if (uVar51 != 0) {
         uVar54 = 0;
         do {
            if (( uVar51 == (uint)uVar55 ) && ( *(ulong*)( *(long*)( local_138 + lVar43 * 8 ) + 0x10 ) == param_4 )) {
               lVar45 = *(long*)( local_138 + (ulong)uVar40 * 8 );
               if (param_1 == 0) {
                  *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
                  this[0x676] = (Area2D)0x1;
                  if (lVar45 == 0) goto LAB_0010a9ce;
                  *(int*)( lVar45 + 0x20 ) = *(int*)( lVar45 + 0x20 ) + 1;
                  if (local_150 == (Node*)0x0) goto LAB_0010ab6a;
                  goto LAB_0010ab44;
               }

               if (lVar45 == 0) goto LAB_0010a920;
               *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
               iVar39 = *(int*)( lVar45 + 0x20 );
               this[0x676] = (Area2D)0x1;
               iVar39 = iVar39 + -1;
               *(int*)( lVar45 + 0x20 ) = iVar39;
               if (local_150 == (Node*)0x0) {
                  cVar8 = *(char*)( lVar45 + 0x24 );
                  if (iVar39 != 0) goto LAB_0010abb1;
                  lVar45 = *(long*)( lVar45 + 0x10 );
                  goto LAB_0010aecd;
               }

               lVar57 = *(long*)( lVar45 + 0x30 );
               if (lVar57 == 0) goto LAB_0010b224;
               lVar43 = *(long*)( lVar57 + -8 );
               iVar42 = (int)lVar43 + -1;
               if (lVar43 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar43, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar10 = (code*)invalidInstructionException();
                  ( *pcVar10 )();
               }

               iVar49 = 0;
               if (-1 < iVar42) goto LAB_0010a8bd;
               goto LAB_0010b224;
            }

            uVar54 = uVar54 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar40 + 1) * lVar45;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar52;
            lVar43 = SUB168(auVar13 * auVar26, 8);
            uVar51 = *(uint*)( lVar57 + lVar43 * 4 );
            uVar40 = SUB164(auVar13 * auVar26, 8);
         }
 while ( ( uVar51 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar51 * lVar45,auVar27._8_8_ = 0,auVar27._0_8_ = uVar52,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 ) + uVar40 ) - SUB164(auVar14 * auVar27, 8)) * lVar45,auVar28._8_8_ = 0,auVar28._0_8_ = uVar52,uVar54 <= SUB164(auVar15 * auVar28, 8) );
      }

   }

   if (param_1 == 0) {
      *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + 1;
      this[0x676] = (Area2D)0x1;
      LAB_0010a9ce:local_100 = 0;
      local_fc = 0;
      local_108 = 0;
      local_f0 = 0;
      HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>>::insert((Area2D*)local_118, (AreaState*)( this + 0x6a8 ), SUB81(&local_120, 0));
      uVar41 = *param_2;
      *(undefined4*)( local_118[0] + 0x20 ) = 0;
      *(ulong*)( local_118[0] + 0x18 ) = uVar41;
      if (local_150 == (Node*)0x0) {
         *(undefined1*)( local_118[0] + 0x24 ) = 0;
         *(undefined4*)( local_118[0] + 0x20 ) = 1;
      }
 else {
         *(byte*)( local_118[0] + 0x24 ) = (byte)local_150[0x2fa] >> 6 & 1;
         pcVar10 = *(code**)( *(long*)local_150 + 0x108 );
         create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_118, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_enter_tree");
         Callable::bind<ObjectID>((Callable*)&local_108, (Area2D*)local_118, local_120);
         ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x38, (Callable*)&local_108, 0);
         Callable::~Callable((Callable*)&local_108);
         Callable::~Callable((Callable*)local_118);
         pcVar10 = *(code**)( *(long*)local_150 + 0x108 );
         create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)local_118, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_exit_tree");
         Callable::bind<ObjectID>((Callable*)&local_108, (Area2D*)local_118, local_120);
         ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x40, (Callable*)&local_108, 0);
         Callable::~Callable((Callable*)&local_108);
         Callable::~Callable((Callable*)local_118);
         if (*(char*)( local_118[0] + 0x24 ) == '\0') {
            iVar39 = *(int*)( local_118[0] + 0x20 );
         }
 else {
            Object::emit_signal<Node*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x1b8 ), local_150);
            iVar39 = *(int*)( local_118[0] + 0x20 );
         }

         *(int*)( local_118[0] + 0x20 ) = iVar39 + 1;
         lVar45 = local_118[0];
         LAB_0010ab44:local_108 = CONCAT44(param_6, param_5);
         VSet<Area2D::AreaShapePair>::insert((VSet<Area2D::AreaShapePair>*)( lVar45 + 0x28 ), (AreaShapePair*)&local_108);
         if (*(char*)( lVar45 + 0x24 ) == '\0') goto LAB_0010a982;
      }

      LAB_0010ab6a:Object::emit_signal<RID,Node*,int,int>((Object*)this, SceneStringNames::singleton + 0x160, *param_2, local_150, param_5, param_6);
      goto LAB_0010a982;
   }

   goto LAB_0010a920;
   LAB_0010af60:uVar9 = *(uint*)( lVar57 + uVar44 * 4 );
   uVar53 = (ulong)uVar9;
   uVar55 = uVar44 & 0xffffffff;
   uVar40 = uVar40 + 1;
   if (( uVar9 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar53 * lVar43,auVar30._8_8_ = 0,auVar30._0_8_ = uVar52,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar51 + uVar54 ) - SUB164(auVar17 * auVar30, 8)) * lVar43,auVar31._8_8_ = 0,auVar31._0_8_ = uVar52,uVar41 = uVar44,SUB164(auVar18 * auVar31, 8) < uVar40) goto LAB_0010b107;
   goto LAB_0010af9c;
   LAB_0010a8bd:do {
      iVar38 = ( iVar42 + iVar49 ) / 2;
      lVar56 = (long)iVar38;
      lVar6 = lVar56 * 8;
      iVar7 = *(int*)( lVar57 + lVar6 );
      if (param_5 == iVar7) {
         iVar7 = ( (int*)( lVar57 + lVar6 ) )[1];
         if (param_6 < iVar7) goto LAB_0010a8b2;
         if (param_6 <= iVar7) {
            if (-2 < iVar42 + iVar49) {
               if (lVar56 < lVar43) {
                  CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( lVar45 + 0x30 ));
                  lVar57 = *(long*)( lVar45 + 0x30 );
                  if (lVar57 == 0) {
                     lVar43 = -1;
                  }
 else {
                     lVar43 = *(long*)( lVar57 + -8 ) + -1;
                     if (lVar56 < lVar43) {
                        memmove((void*)( lVar57 + lVar6 ), (void*)( lVar57 + 8 + lVar6 ), ( lVar43 - lVar56 ) * 8);
                     }

                  }

                  CowData<Area2D::AreaShapePair>::resize<false>((CowData<Area2D::AreaShapePair>*)( lVar45 + 0x30 ), lVar43);
                  iVar39 = *(int*)( lVar45 + 0x20 );
               }
 else {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar56, lVar43, "p_index", "size()", "", false, false);
                  iVar39 = *(int*)( lVar45 + 0x20 );
               }

               cVar8 = *(char*)( lVar45 + 0x24 );
               if (iVar39 != 0) goto LAB_0010ad6e;
               local_138 = *(long*)( this + 0x6b0 );
               lVar45 = *(long*)( lVar45 + 0x10 );
               if (local_138 == 0) goto LAB_0010ae12;
               goto LAB_0010ae04;
            }

            break;
         }

         LAB_0010a8e9:iVar49 = iVar38 + 1;
      }
 else {
         if (iVar7 <= param_5) goto LAB_0010a8e9;
         LAB_0010a8b2:iVar42 = iVar38 + -1;
      }

   }
 while ( iVar49 <= iVar42 );
   LAB_0010b224:cVar8 = *(char*)( lVar45 + 0x24 );
   if (iVar39 == 0) {
      lVar45 = *(long*)( lVar45 + 0x10 );
      LAB_0010ae04:if (*(int*)( this + 0x6d4 ) != 0) {
         uVar48 = *(uint*)( this + 0x6d0 );
         lVar57 = *(long*)( this + 0x6b8 );
         LAB_0010aecd:uVar51 = *(uint*)( hash_table_size_primes + (ulong)uVar48 * 4 );
         uVar52 = CONCAT44(0, uVar51);
         lVar43 = *(long*)( hash_table_size_primes_inv + (ulong)uVar48 * 8 );
         uVar41 = lVar45 * 0x3ffff - 1;
         uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;
         uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;
         uVar40 = ( uint )(uVar41 >> 0x16) ^ (uint)uVar41;
         uVar48 = 1;
         if (uVar40 != 0) {
            uVar48 = uVar40;
         }

         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar48 * lVar43;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar52;
         uVar41 = SUB168(auVar16 * auVar29, 8);
         uVar40 = *(uint*)( lVar57 + uVar41 * 4 );
         uVar53 = (ulong)uVar40;
         uVar55 = (ulong)SUB164(auVar16 * auVar29, 8);
         if (uVar40 != 0) {
            uVar40 = 0;
            LAB_0010af9c:auVar19._8_8_ = 0;
            auVar19._0_8_ = ( ulong )((int)uVar55 + 1) * lVar43;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar52;
            uVar44 = SUB168(auVar19 * auVar32, 8);
            uVar54 = SUB164(auVar19 * auVar32, 8);
            if (( uVar48 != (uint)uVar53 ) || ( lVar45 != *(long*)( *(long*)( local_138 + uVar41 * 8 ) + 0x10 ) )) goto LAB_0010af60;
            puVar58 = (uint*)( lVar57 + uVar44 * 4 );
            uVar41 = (ulong)uVar54;
            uVar48 = *puVar58;
            if (( uVar48 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar48 * lVar43,auVar33._8_8_ = 0,auVar33._0_8_ = uVar52,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar54 + uVar51 ) - SUB164(auVar20 * auVar33, 8)) * lVar43,auVar34._8_8_ = 0,auVar34._0_8_ = uVar52,SUB164(auVar21 * auVar34, 8) != 0) {
               while (true) {
                  puVar2 = (uint*)( lVar57 + uVar55 * 4 );
                  *puVar58 = *puVar2;
                  puVar3 = (undefined8*)( local_138 + uVar44 * 8 );
                  *puVar2 = uVar48;
                  puVar4 = (undefined8*)( local_138 + uVar55 * 8 );
                  uVar11 = *puVar3;
                  *puVar3 = *puVar4;
                  *puVar4 = uVar11;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = ( ulong )((int)uVar41 + 1) * lVar43;
                  auVar37._8_8_ = 0;
                  auVar37._0_8_ = uVar52;
                  uVar44 = SUB168(auVar24 * auVar37, 8);
                  puVar58 = (uint*)( lVar57 + uVar44 * 4 );
                  uVar48 = *puVar58;
                  uVar55 = uVar41;
                  if (( uVar48 == 0 ) || ( auVar22._8_8_ = 0 ),auVar22._0_8_ = (ulong)uVar48 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar52,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( SUB164(auVar24 * auVar37, 8) + uVar51 ) - SUB164(auVar22 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar52,SUB164(auVar23 * auVar36, 8) == 0) break;
                  uVar41 = uVar44 & 0xffffffff;
               }
;
            }

            *(undefined4*)( lVar57 + uVar55 * 4 ) = 0;
            plVar5 = (long*)( local_138 + uVar55 * 8 );
            plVar47 = (long*)*plVar5;
            if (*(long**)( this + 0x6c0 ) == plVar47) {
               *(long*)( this + 0x6c0 ) = *plVar47;
               plVar47 = (long*)*plVar5;
            }

            if (*(long**)( this + 0x6c8 ) == plVar47) {
               *(long*)( this + 0x6c8 ) = plVar47[1];
               plVar47 = (long*)*plVar5;
            }

            if ((long*)plVar47[1] != (long*)0x0) {
               *(long*)plVar47[1] = *plVar47;
               plVar47 = (long*)*plVar5;
            }

            if (*plVar47 != 0) {
               *(long*)( *plVar47 + 8 ) = plVar47[1];
               plVar47 = (long*)*plVar5;
            }

            if (plVar47[6] != 0) {
               LOCK();
               plVar5 = (long*)( plVar47[6] + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  lVar45 = plVar47[6];
                  plVar47[6] = 0;
                  Memory::free_static((void*)( lVar45 + -0x10 ), false);
               }

            }

            Memory::free_static(plVar47, false);
            *(undefined8*)( *(long*)( this + 0x6b0 ) + uVar55 * 8 ) = 0;
            *(int*)( this + 0x6d4 ) = *(int*)( this + 0x6d4 ) + -1;
         }

         LAB_0010b107:if (local_150 == (Node*)0x0) goto LAB_0010abb1;
      }

      LAB_0010ae12:pcVar10 = *(code**)( *(long*)local_150 + 0x110 );
      create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_enter_tree");
      ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x38, (Area2D*)&local_108);
      Callable::~Callable((Callable*)&local_108);
      pcVar10 = *(code**)( *(long*)local_150 + 0x110 );
      create_custom_callable_function_pointer<Area2D,ObjectID>((Area2D*)&local_108, (char*)this, (_func_void_ObjectID*)"&Area2D::_area_exit_tree");
      ( *pcVar10 )(local_150, SceneStringNames::singleton + 0x40, (Area2D*)&local_108);
      Callable::~Callable((Callable*)&local_108);
      if (cVar8 != '\0') {
         Object::emit_signal<Object*>((Object*)this, (StringName*)( SceneStringNames::singleton + 0x1c0 ), local_140);
         LAB_0010abb1:lVar45 = SceneStringNames::singleton + 0x168;
         local_108 = *param_2;
         Variant::Variant(local_b8, (RID*)&local_108);
         Variant::Variant(local_a0, local_140);
         Variant::Variant(local_88, param_5);
         Variant::Variant(local_70, param_6);
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         pVVar46 = (Variant*)local_40;
         local_e8 = local_b8;
         pVStack_e0 = local_a0;
         local_d8 = local_88;
         pVStack_d0 = local_70;
         ( **(code**)( *(long*)this + 0xd0 ) )(this, lVar45, &local_e8, 4);
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
 else {
      LAB_0010ad6e:if (cVar8 != '\0') goto LAB_0010abb1;
   }

   LAB_0010a982:this[0x676] = (Area2D)0x0;
   if (*(int*)( this + 0x598 ) == 0) {
      if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("unlock_callback", "./scene/2d/physics/collision_object_2d.h", 0x59, "Condition \"callback_lock == 0\" is true.", 0, 0);
         return;
      }

      goto LAB_0010b242;
   }

   *(int*)( this + 0x598 ) = *(int*)( this + 0x598 ) + -1;
   LAB_0010a920:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010b242:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* Area2D::is_class_ptr(void*) const */uint Area2D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x11ce, in_RSI == &CollisionObject2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ce, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ce, in_RSI == &Node2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ce, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11cf, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* Area2D::_property_can_revertv(StringName const&) const */undefined8 Area2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Area2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 Area2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this) {
   return;
}
/* CallableCustomMethodPointer<Area2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,ObjectID> *this) {
   return;
}
/* MethodBindTRC<StringName>::_gen_argument_type(int) const */undefined8 MethodBindTRC<StringName>::_gen_argument_type(int param_1) {
   return 0x15;
}
/* MethodBindTRC<StringName>::get_argument_meta(int) const */undefined8 MethodBindTRC<StringName>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, Node*>::_gen_argument_type(int) const */char MethodBindTRC<bool,Node*>::_gen_argument_type(MethodBindTRC<bool,Node*> *this, int param_1) {
   return ( -(param_1 == 0) & 0x17U ) + 1;
}
/* MethodBindTRC<bool, Node*>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,Node*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<TypedArray<Area2D>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<TypedArray<Area2D>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTRC<TypedArray<Area2D>>::get_argument_meta(int) const */undefined8 MethodBindTRC<TypedArray<Area2D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<TypedArray<Node2D>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTRC<TypedArray<Node2D>>::get_argument_meta(int) const */undefined8 MethodBindTRC<TypedArray<Node2D>>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Area2D::SpaceOverride>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Area2D::SpaceOverride>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<Area2D::SpaceOverride>::get_argument_meta(int) const */undefined8 MethodBindTRC<Area2D::SpaceOverride>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Area2D::SpaceOverride>::_gen_argument_type(int) const */char MethodBindT<Area2D::SpaceOverride>::_gen_argument_type(MethodBindT<Area2D::SpaceOverride> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<Area2D::SpaceOverride>::get_argument_meta(int) const */undefined8 MethodBindT<Area2D::SpaceOverride>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int,
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::get_argument_count(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this, bool *param_1) {
   *param_1 = true;
   return 5;
}
/* CallableCustomMethodPointer<Area2D, void, ObjectID>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Area2D,void,ObjectID>::get_argument_count(CallableCustomMethodPointer<Area2D,void,ObjectID> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<Area2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,ObjectID> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cbe0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cbe0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Area2D::SpaceOverride>::~MethodBindT() */void MethodBindT<Area2D::SpaceOverride>::~MethodBindT(MethodBindT<Area2D::SpaceOverride> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c940;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Area2D::SpaceOverride>::~MethodBindT() */void MethodBindT<Area2D::SpaceOverride>::~MethodBindT(MethodBindT<Area2D::SpaceOverride> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c940;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC() */void MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area2D::SpaceOverride> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c9a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC() */void MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area2D::SpaceOverride> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011c9a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cac0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cac0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cb20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cc40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cc40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cca0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cca0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cd00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cd00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cd60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area2D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cd60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, Node*>::~MethodBindTRC() */void MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cdc0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, Node*>::~MethodBindTRC() */void MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011cdc0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ce20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ce20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ce80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ce80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011ca60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* Area2D::_getv(StringName const&, Variant&) const */undefined8 Area2D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* Area2D::_setv(StringName const&, Variant const&) */undefined8 Area2D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00122008 != Object::_set) {
      uVar1 = CanvasItem::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<Area2D, void, ObjectID>::get_object() const */undefined8 CallableCustomMethodPointer<Area2D,void,ObjectID>::get_object(CallableCustomMethodPointer<Area2D,void,ObjectID> *this) {
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
         goto LAB_0010c8dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c8dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c8dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int, int>::get_object()
   const */undefined8 CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::get_object(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this) {
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
         goto LAB_0010c9dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c9dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c9dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* Area2D::_notificationv(int, bool) */void Area2D::_notificationv(Area2D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00122010 != Node2D::_notification) {
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

   if ((code*)PTR__notification_00122010 == Node2D::_notification) {
      return;
   }

   CollisionObject2D::_notification(iVar1);
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
/* CowData<Area2D::ShapePair>::_ref(CowData<Area2D::ShapePair> const&) [clone .part.0] */void CowData<Area2D::ShapePair>::_ref(CowData<Area2D::ShapePair> *this, CowData *param_1) {
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
/* CowData<Area2D::AreaShapePair>::_ref(CowData<Area2D::AreaShapePair> const&) [clone .part.0] */void CowData<Area2D::AreaShapePair>::_ref(CowData<Area2D::AreaShapePair> *this, CowData *param_1) {
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
/* Area2D::_get_class_namev() const */undefined8 *Area2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010ccf3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010ccf3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Area2D");
         goto LAB_0010cd5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Area2D");
   LAB_0010cd5e:return &_get_class_namev();
}
/* Area2D::get_class() const */void Area2D::get_class(void) {
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
/* CowData<Area2D::AreaShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Area2D::AreaShapePair>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Area2D::ShapePair>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Area2D::ShapePair>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Area2D::_bind_methods() [clone .cold] */void Area2D::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
   local_48 = &_LC29;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d00c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d00c:local_58 = lVar2;
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
/* MethodBindTRC<StringName>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<StringName>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC29;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x15;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d18c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d18c:local_58 = lVar2;
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
   local_48 = &_LC29;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d30c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d30c:local_58 = lVar2;
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
   local_48 = &_LC29;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d48c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d48c:local_58 = lVar2;
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
   local_48 = &_LC29;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d60c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d60c:local_58 = lVar2;
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
/* MethodBindTRC<TypedArray<Area2D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<TypedArray<Area2D>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "Area2D";
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d78c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d78c:local_58 = lVar2;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010d91c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d91c:local_58 = lVar2;
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
/* Area2D::_validate_propertyv(PropertyInfo&) const */void Area2D::_validate_propertyv(Area2D *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00122018 != Node::_validate_property) {
      CanvasItem::_validate_property((PropertyInfo*)this);
   }

   _validate_property(this, param_1);
   return;
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
/* Callable create_custom_callable_function_pointer<Area2D, ObjectID>(Area2D*, char const*, void
   (Area2D::*)(ObjectID)) */Area2D *create_custom_callable_function_pointer<Area2D,ObjectID>(Area2D *param_1, char *param_2, _func_void_ObjectID *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011c820;
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
/* Callable create_custom_callable_function_pointer<Area2D, int, RID const&, ObjectID, int,
   int>(Area2D*, char const*, void (Area2D::*)(int, RID const&, ObjectID, int, int)) */Area2D *create_custom_callable_function_pointer<Area2D,int,RID_const&,ObjectID,int,int>(Area2D *param_1, char *param_2, _func_void_int_RID_ptr_ObjectID_int_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011c8b0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_int_RID_ptr_ObjectID_int_int**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10e32d);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC55;
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
            goto LAB_0010e3fd;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC55;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_0010e3fd:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Area2D::SpaceOverride, void>::get_class_info() */GetTypeInfo<Area2D::SpaceOverride,void> * __thiscall
GetTypeInfo<Area2D::SpaceOverride,void>::get_class_info
          (GetTypeInfo<Area2D::SpaceOverride,void> *this){
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
   local_48 = "Area2D::SpaceOverride";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
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
/* MethodBindTRC<Area2D::SpaceOverride>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Area2D::SpaceOverride>::_gen_argument_type_info(int param_1) {
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
   local_38 = "Area2D::SpaceOverride";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
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
/* CallableCustomMethodPointer<Area2D, void, ObjectID>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Area2D,void,ObjectID>::call(CallableCustomMethodPointer<Area2D,void,ObjectID> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010ea69;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010ea69;
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
            uVar5 = _LC64;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010ea18. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5);
               return;
            }

            goto LAB_0010eb2b;
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
      LAB_0010ea69:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC63, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010eb2b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int, int>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::call(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   undefined8 uVar9;
   uint uVar10;
   ulong *puVar11;
   code *pcVar12;
   long in_FS_OFFSET;
   bool bVar13;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar10 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar10 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar13 = (char)ObjectDB::spin_lock == '\0';
         if (bVar13) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar13) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar11 = (ulong*)( (ulong)uVar10 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar11 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar11[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar12 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 6) {
               if (param_2 == 5) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar12 & 1 ) != 0) {
                     pcVar12 = *(code**)( pcVar12 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[4], 2);
                  uVar4 = _LC65;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  iVar6 = Variant::operator_cast_to_int(param_1[4]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[3], 2);
                  uVar4 = _LC66;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  iVar7 = Variant::operator_cast_to_int(param_1[3]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
                  uVar4 = _LC67;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  uVar9 = Variant::operator_cast_to_ObjectID(param_1[2]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0x17);
                  uVar4 = _LC68;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  local_58 = (char*)Variant::operator_cast_to_RID(param_1[1]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
                  uVar4 = _LC64;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  iVar8 = Variant::operator_cast_to_int(*param_1);
                  ( *pcVar12 )((long*)( lVar1 + lVar2 ), iVar8, (String*)&local_58, uVar9, iVar7, iVar6);
               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 5;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 5;
            }

            goto LAB_0010ebfc;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_60 = 0;
   local_58 = "\', can\'t call method.";
   local_50 = 0x15;
   String::parse_latin1((StrRange*)&local_60);
   uitos((ulong)local_70);
   operator+((char *)
   local_68,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_58, (String*)local_68);
   _err_print_error(&_LC63, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref(local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010ebfc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Node2D::is_class(String const&) const */undefined8 Node2D::is_class(Node2D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long in_FS_OFFSET;
   bool bVar9;
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
         pcVar5 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar5 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010eeef;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar4 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar4 + 1;
                     lVar7 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar5);
            local_58 = pcVar5;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010eeef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010efa3;
   }

   cVar6 = String::operator ==(param_1, "Node2D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar3 = *(long*)( lVar2 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar5 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar5 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  do {
                     lVar4 = *plVar1;
                     if (lVar4 == 0) goto LAB_0010f0d3;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar9 = lVar4 == lVar7;
                     if (bVar9) {
                        *plVar1 = lVar4 + 1;
                        lVar7 = lVar4;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar7 != -1) {
                     local_60 = *(long*)( lVar3 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar5);
               local_58 = pcVar5;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010f0d3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010efa3;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar3 = *(long*)( lVar2 + 0x20 );
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pcVar5 = *(char**)( lVar3 + 8 );
               local_60 = 0;
               if (pcVar5 == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar5);
                  local_58 = pcVar5;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010efa3;
         }

         cVar6 = String::operator ==(param_1, "Node");
         if (cVar6 == '\0') {
            for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
               lVar3 = *(long*)( lVar2 + 0x20 );
               if (lVar3 == 0) {
                  local_58 = (char*)0x0;
               }
 else {
                  local_58 = (char*)0x0;
                  if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar3 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( lVar3 + 8 ));
                  }

               }

               cVar6 = String::operator ==(param_1, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               if (cVar6 != '\0') goto LAB_0010efa3;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = String::operator ==(param_1, "Object");
               return uVar8;
            }

            goto LAB_0010f23c;
         }

      }

   }

   LAB_0010efa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010f23c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Area2D::is_class(String const&) const */undefined8 Area2D::is_class(Area2D *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010f2cf;
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

      LAB_0010f2cf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010f383;
   }

   cVar6 = String::operator ==(param_1, "Area2D");
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
                     if (lVar5 == 0) goto LAB_0010f443;
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

         LAB_0010f443:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010f383;
      }

      cVar6 = String::operator ==(param_1, "CollisionObject2D");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Node2D::is_class((Node2D*)this, param_1);
            return uVar7;
         }

         goto LAB_0010f4ec;
      }

   }

   LAB_0010f383:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010f4ec:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   if (in_EDX != 0) goto LAB_0010f54b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC29;
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
      LAB_0010f640:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010f640;
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
   LAB_0010f54b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0010f78b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC29;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010f880:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010f880;
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
   LAB_0010f78b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
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
   if (in_EDX != 0) goto LAB_0010f9cb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC29;
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
      LAB_0010fac0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010fac0;
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
   LAB_0010f9cb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
   if (in_EDX != 0) goto LAB_0010fc0b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC29;
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
      LAB_0010fd00:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010fd00;
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
   LAB_0010fc0b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
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
   if (in_EDX != 0) goto LAB_0010fe4b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC29;
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
      LAB_0010ff40:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ff40;
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
   LAB_0010fe4b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Area2D::SpaceOverride>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Area2D::SpaceOverride>::_gen_argument_type_info(int param_1) {
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
      local_68 = "Area2D::SpaceOverride";
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
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
      LAB_001103c8:local_50 = 0x80;
      StringName::operator =(local_b8, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001103c8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001103e3;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001103e3:if (lVar2 == 0) {
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

   if ((code*)PTR__get_property_list_00122020 != Object::_get_property_list) {
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
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
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
      LAB_001109e0:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001109e0;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00110a02;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00110a02:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
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
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
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
      LAB_00110e00:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110e00;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00110e22;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00110e22:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
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
/* Area2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Area2D::_get_property_listv(Area2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
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
   local_78 = "Area2D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Area2D";
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
      LAB_00111228:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111228;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011124a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011124a:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Area2D", false);
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
/* MethodInfo::MethodInfo<PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo>(String const&,
   PropertyInfo, PropertyInfo, PropertyInfo, PropertyInfo) */void MethodInfo::MethodInfo<PropertyInfo,PropertyInfo,PropertyInfo,PropertyInfo>(MethodInfo *this, CowData *param_1, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5, undefined4 *param_6) {
   undefined4 uVar1;
   long *plVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   long local_160;
   long local_158;
   undefined4 local_150;
   long local_148;
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
   undefined4 local_78[2];
   undefined8 local_70;
   long local_68;
   undefined4 local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   lVar3 = *(long*)param_1;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x30 ) = 6;
   *(undefined8*)( this + 0x38 ) = 1;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined4*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x68 ) = 0;
   if (lVar3 != 0) {
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
   uVar1 = *param_4;
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
   if (*(long*)( this + 0x40 ) == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x40 ) = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   lVar3 = *(long*)( param_3 + 2 );
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = *param_3;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( param_3 + 2 ));
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( param_3 + 4 ));
   puVar4[6] = param_3[6];
   if (*(long*)( puVar4 + 8 ) != *(long*)( param_3 + 8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( param_3 + 8 ));
   }

   puVar4[10] = param_3[10];
   plVar2 = *(long**)( this + 0x40 );
   lVar3 = plVar2[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar2;
   *(long*)( puVar4 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar4;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
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
   if (*(long*)( this + 0x40 ) == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x40 ) = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = uVar1;
   if (local_160 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_160);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_158);
   puVar4[6] = local_150;
   if (*(long*)( puVar4 + 8 ) != local_148) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_148);
   }

   puVar4[10] = local_140;
   plVar2 = *(long**)( this + 0x40 );
   lVar3 = plVar2[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar2;
   *(long*)( puVar4 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar4;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   local_70 = 0;
   local_78[0] = local_a8;
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
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x40 ) = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_d8;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_d0);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_c8);
   puVar4[6] = local_c0;
   if (*(long*)( puVar4 + 8 ) != local_b8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_b8);
   }

   puVar4[10] = local_b0;
   plVar2 = *(long**)( this + 0x40 );
   lVar3 = plVar2[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar2;
   *(long*)( puVar4 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar4;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ), (PropertyInfo*)local_78);
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
/* MethodBindTRC<bool, Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,Node*>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   ulong local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_70 = 6;
      local_68 = &_LC70;
      local_78 = 0;
      local_a8 = 0;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_a8);
      StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_a0);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_00112040;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC29;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 1;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112007:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00112007;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00112040:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Area2D, Area2D::SpaceOverride>(void
   (Area2D::*)(Area2D::SpaceOverride)) */MethodBind *create_method_bind<Area2D,Area2D::SpaceOverride>(_func_void_SpaceOverride *param_1) {
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
   *(_func_void_SpaceOverride**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c940;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, Area2D::SpaceOverride>(Area2D::SpaceOverride (Area2D::*)()
   const) */MethodBind *create_method_bind<Area2D,Area2D::SpaceOverride>(_func_SpaceOverride *param_1) {
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
   *(_func_SpaceOverride**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011c9a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, bool>(void (Area2D::*)(bool)) */MethodBind *create_method_bind<Area2D,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011ca00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, bool>(bool (Area2D::*)() const) */MethodBind *create_method_bind<Area2D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011ca60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, float>(void (Area2D::*)(float)) */MethodBind *create_method_bind<Area2D,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cac0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, float>(float (Area2D::*)() const) */MethodBind *create_method_bind<Area2D,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cb20;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, Vector2 const&>(void (Area2D::*)(Vector2 const&)) */MethodBind *create_method_bind<Area2D,Vector2_const&>(_func_void_Vector2_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cb80;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, Vector2 const&>(Vector2 const& (Area2D::*)() const) */MethodBind *create_method_bind<Area2D,Vector2_const&>(_func_Vector2_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cbe0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, int>(void (Area2D::*)(int)) */MethodBind *create_method_bind<Area2D,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cc40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, int>(int (Area2D::*)() const) */MethodBind *create_method_bind<Area2D,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cca0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, TypedArray<Node2D>>(TypedArray<Node2D> (Area2D::*)()
   const) */MethodBind *create_method_bind<Area2D,TypedArray<Node2D>>(_func_TypedArray *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cd00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, TypedArray<Area2D>>(TypedArray<Area2D> (Area2D::*)()
   const) */MethodBind *create_method_bind<Area2D,TypedArray<Area2D>>(_func_TypedArray *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011cd60;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, bool, Node*>(bool (Area2D::*)(Node*) const) */MethodBind *create_method_bind<Area2D,bool,Node*>(_func_bool_Node_ptr *param_1) {
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
   *(_func_bool_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011cdc0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, StringName const&>(void (Area2D::*)(StringName const&)) */MethodBind *create_method_bind<Area2D,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011ce20;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* MethodBind* create_method_bind<Area2D, StringName>(StringName (Area2D::*)() const) */MethodBind *create_method_bind<Area2D,StringName>(_func_StringName *param_1) {
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
   *(_func_StringName**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011ce80;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Area2D";
   local_30 = 6;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
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
/* Area2D::_initialize_classv() */void Area2D::_initialize_classv(void) {
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
                  StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
                  local_58 = "Node";
                  local_70 = 0;
                  local_50 = 4;
                  String::parse_latin1((StrRange*)&local_70);
                  StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  if ((code*)PTR__bind_methods_00122038 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "CanvasItem";
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
               CanvasItem::_bind_methods();
               if ((code*)PTR__bind_compatibility_methods_00122028 != Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
               }

               CanvasItem::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "CanvasItem";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Node2D";
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
            Node2D::_bind_methods();
            Node2D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node2D";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "CollisionObject2D";
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
         if ((code*)PTR__bind_methods_00122030 != Node2D::_bind_methods) {
            CollisionObject2D::_bind_methods();
         }

         CollisionObject2D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "CollisionObject2D";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "Area2D";
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
/* HashMap<ObjectID, Area2D::BodyState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area2D::BodyState> >
   >::_resize_and_rehash(unsigned int) */void HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>>::_resize_and_rehash(HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, Area2D::BodyState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area2D::BodyState> > >::insert(ObjectID const&,
   Area2D::BodyState const&, bool) */ObjectID *
HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>>
::insert(ObjectID *param_1,BodyState *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   undefined1 uVar3;
   uint uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   void *__s;
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
   undefined1(*pauVar24)[16];
   uint uVar25;
   ulong uVar26;
   undefined8 *puVar27;
   undefined8 uVar28;
   void *__s_00;
   undefined8 *in_RCX;
   int iVar29;
   undefined7 in_register_00000011;
   long *plVar30;
   long lVar31;
   long lVar32;
   uint uVar33;
   char in_R8B;
   uint uVar34;
   ulong uVar35;
   ulong uVar36;
   undefined1(*pauVar37)[16];
   long in_FS_OFFSET;
   long local_b8;
   undefined1(*pauStack_90)[16];
   long local_48;
   long local_40;
   plVar30 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (__s_00 == (void*)0x0) {
      uVar35 = (ulong)uVar4;
      uVar26 = uVar35 * 4;
      uVar36 = uVar35 * 8;
      uVar28 = Memory::alloc_static(uVar26, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar28;
      __s_00 = (void*)Memory::alloc_static(uVar36, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar4 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar36 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
            uVar26 = 0;
            do {
               *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
               uVar26 = uVar26 + 1;
            }
 while ( uVar35 != uVar26 );
            goto LAB_00113b9a;
         }

         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar36);
         iVar29 = *(int*)( param_2 + 0x2c );
         local_b8 = *plVar30;
         goto LAB_00113baa;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar30;
      if (__s_00 != (void*)0x0) goto LAB_00113baa;
   }
 else {
      LAB_00113b9a:iVar29 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar30;
      LAB_00113baa:if (iVar29 != 0) {
         uVar36 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar26 = local_b8 * 0x3ffff - 1;
         uVar26 = ( uVar26 ^ uVar26 >> 0x1f ) * 0x15;
         uVar26 = ( uVar26 ^ uVar26 >> 0xb ) * 0x41;
         uVar26 = uVar26 >> 0x16 ^ uVar26;
         uVar35 = uVar26 & 0xffffffff;
         if ((int)uVar26 == 0) {
            uVar35 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar35 * lVar6;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar36;
         lVar31 = SUB168(auVar8 * auVar16, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar25 = SUB164(auVar8 * auVar16, 8);
         if (uVar33 != 0) {
            uVar34 = 0;
            do {
               if (( uVar33 == (uint)uVar35 ) && ( local_b8 == *(long*)( *(long*)( (long)__s_00 + lVar31 * 8 ) + 0x10 ) )) {
                  lVar6 = *(long*)( (long)__s_00 + (ulong)uVar25 * 8 );
                  *(undefined8*)( lVar6 + 0x18 ) = *in_RCX;
                  *(undefined4*)( lVar6 + 0x20 ) = *(undefined4*)( in_RCX + 1 );
                  *(undefined1*)( lVar6 + 0x24 ) = *(undefined1*)( (long)in_RCX + 0xc );
                  if (*(long*)( lVar6 + 0x30 ) != in_RCX[3]) {
                     CowData<Area2D::ShapePair>::_ref((CowData<Area2D::ShapePair>*)( lVar6 + 0x30 ), (CowData*)( in_RCX + 3 ));
                  }

                  pauStack_90 = *(undefined1(**) [16])( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                  goto LAB_00113f6e;
               }

               uVar34 = uVar34 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar25 + 1) * lVar6;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar36;
               lVar31 = SUB168(auVar9 * auVar17, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar25 = SUB164(auVar9 * auVar17, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar33 * lVar6,auVar18._8_8_ = 0,auVar18._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar25 ) - SUB164(auVar10 * auVar18, 8)) * lVar6,auVar19._8_8_ = 0,auVar19._0_8_ = uVar36,uVar34 <= SUB164(auVar11 * auVar19, 8) );
         }

      }

   }

   if ((float)uVar4 * __LC150 < (float)( iVar29 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         pauStack_90 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00113f6e;
      }

      _resize_and_rehash((HashMap<ObjectID,Area2D::BodyState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::BodyState>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   uVar5 = *(undefined4*)( in_RCX + 1 );
   local_48 = 0;
   uVar3 = *(undefined1*)( (long)in_RCX + 0xc );
   lVar6 = *plVar30;
   uVar28 = *in_RCX;
   if (in_RCX[3] == 0) {
      pauStack_90 = (undefined1(*) [16])operator_new(0x38, "");
      *pauStack_90 = (undefined1[16])0x0;
      *(undefined4*)pauStack_90[2] = uVar5;
      *(long*)pauStack_90[1] = lVar6;
      pauStack_90[2][4] = uVar3;
      *(undefined8*)( pauStack_90[1] + 8 ) = uVar28;
      *(undefined8*)pauStack_90[3] = 0;
      LAB_00113e1a:puVar27 = *(undefined8**)( param_2 + 0x20 );
      if (puVar27 != (undefined8*)0x0) goto LAB_00113e27;
      LAB_00113fe0:*(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_90;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_90;
   }
 else {
      CowData<Area2D::ShapePair>::_ref((CowData<Area2D::ShapePair>*)&local_48, (CowData*)( in_RCX + 3 ));
      lVar31 = local_48;
      pauStack_90 = (undefined1(*) [16])operator_new(0x38, "");
      *(undefined8*)*pauStack_90 = 0;
      *(undefined8*)( *pauStack_90 + 8 ) = 0;
      *(undefined4*)pauStack_90[2] = uVar5;
      *(long*)pauStack_90[1] = lVar6;
      pauStack_90[2][4] = uVar3;
      *(undefined8*)( pauStack_90[1] + 8 ) = uVar28;
      *(undefined8*)pauStack_90[3] = 0;
      if (lVar31 == 0) goto LAB_00113e1a;
      CowData<Area2D::ShapePair>::_ref((CowData<Area2D::ShapePair>*)( pauStack_90 + 3 ), (CowData*)&local_48);
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00113e1a;
      Memory::free_static((void*)( local_48 + -0x10 ), false);
      puVar27 = *(undefined8**)( param_2 + 0x20 );
      if (puVar27 == (undefined8*)0x0) goto LAB_00113fe0;
      LAB_00113e27:if (in_R8B == '\0') {
         *puVar27 = pauStack_90;
         *(undefined8**)( *pauStack_90 + 8 ) = puVar27;
         *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_90;
      }
 else {
         lVar6 = *(long*)( param_2 + 0x18 );
         *(undefined1(**) [16])( lVar6 + 8 ) = pauStack_90;
         *(long*)*pauStack_90 = lVar6;
         *(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_90;
      }

   }

   lVar6 = *(long*)( param_2 + 0x10 );
   uVar26 = *plVar30 * 0x3ffff - 1;
   uVar26 = ( uVar26 ^ uVar26 >> 0x1f ) * 0x15;
   uVar26 = ( uVar26 ^ uVar26 >> 0xb ) * 0x41;
   uVar26 = uVar26 >> 0x16 ^ uVar26;
   uVar36 = uVar26 & 0xffffffff;
   if ((int)uVar26 == 0) {
      uVar36 = 1;
   }

   uVar34 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar25 = (uint)uVar36;
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar26 = CONCAT44(0, uVar4);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar36 * lVar31;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar26;
   lVar32 = SUB168(auVar12 * auVar20, 8);
   lVar7 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar6 + lVar32 * 4 );
   iVar29 = SUB164(auVar12 * auVar20, 8);
   uVar33 = *puVar2;
   pauVar24 = pauStack_90;
   while (uVar33 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar33 * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar26;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( iVar29 + uVar4 ) - SUB164(auVar13 * auVar21, 8)) * lVar31;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar26;
      uVar25 = SUB164(auVar14 * auVar22, 8);
      pauVar37 = pauVar24;
      if (uVar25 < uVar34) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar33;
         puVar27 = (undefined8*)( lVar7 + lVar32 * 8 );
         pauVar37 = (undefined1(*) [16])*puVar27;
         *puVar27 = pauVar24;
         uVar34 = uVar25;
      }

      uVar25 = (uint)uVar36;
      uVar34 = uVar34 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar26;
      lVar32 = SUB168(auVar15 * auVar23, 8);
      puVar2 = (uint*)( lVar6 + lVar32 * 4 );
      iVar29 = SUB164(auVar15 * auVar23, 8);
      pauVar24 = pauVar37;
      uVar33 = *puVar2;
   }
;
   *(undefined1(**) [16])( lVar7 + lVar32 * 8 ) = pauVar24;
   *puVar2 = uVar25;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00113f6e:*(undefined1(**) [16])param_1 = pauStack_90;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<ObjectID, Area2D::AreaState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area2D::AreaState> >
   >::_resize_and_rehash(unsigned int) */void HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>>::_resize_and_rehash(HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, Area2D::AreaState, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, Area2D::AreaState> > >::insert(ObjectID const&,
   Area2D::AreaState const&, bool) */ObjectID *
HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>>
::insert(ObjectID *param_1,AreaState *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   undefined1 uVar3;
   uint uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   void *__s;
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
   undefined1(*pauVar24)[16];
   uint uVar25;
   ulong uVar26;
   undefined8 *puVar27;
   undefined8 uVar28;
   void *__s_00;
   undefined8 *in_RCX;
   int iVar29;
   undefined7 in_register_00000011;
   long *plVar30;
   long lVar31;
   long lVar32;
   uint uVar33;
   char in_R8B;
   uint uVar34;
   ulong uVar35;
   ulong uVar36;
   undefined1(*pauVar37)[16];
   long in_FS_OFFSET;
   long local_b8;
   undefined1(*pauStack_90)[16];
   long local_48;
   long local_40;
   plVar30 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (__s_00 == (void*)0x0) {
      uVar35 = (ulong)uVar4;
      uVar26 = uVar35 * 4;
      uVar36 = uVar35 * 8;
      uVar28 = Memory::alloc_static(uVar26, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar28;
      __s_00 = (void*)Memory::alloc_static(uVar36, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar4 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar36 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
            uVar26 = 0;
            do {
               *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
               uVar26 = uVar26 + 1;
            }
 while ( uVar35 != uVar26 );
            goto LAB_001143ea;
         }

         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar36);
         iVar29 = *(int*)( param_2 + 0x2c );
         local_b8 = *plVar30;
         goto LAB_001143fa;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar30;
      if (__s_00 != (void*)0x0) goto LAB_001143fa;
   }
 else {
      LAB_001143ea:iVar29 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar30;
      LAB_001143fa:if (iVar29 != 0) {
         uVar36 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar26 = local_b8 * 0x3ffff - 1;
         uVar26 = ( uVar26 ^ uVar26 >> 0x1f ) * 0x15;
         uVar26 = ( uVar26 ^ uVar26 >> 0xb ) * 0x41;
         uVar26 = uVar26 >> 0x16 ^ uVar26;
         uVar35 = uVar26 & 0xffffffff;
         if ((int)uVar26 == 0) {
            uVar35 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar35 * lVar6;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar36;
         lVar31 = SUB168(auVar8 * auVar16, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar25 = SUB164(auVar8 * auVar16, 8);
         if (uVar33 != 0) {
            uVar34 = 0;
            do {
               if (( uVar33 == (uint)uVar35 ) && ( local_b8 == *(long*)( *(long*)( (long)__s_00 + lVar31 * 8 ) + 0x10 ) )) {
                  lVar6 = *(long*)( (long)__s_00 + (ulong)uVar25 * 8 );
                  *(undefined8*)( lVar6 + 0x18 ) = *in_RCX;
                  *(undefined4*)( lVar6 + 0x20 ) = *(undefined4*)( in_RCX + 1 );
                  *(undefined1*)( lVar6 + 0x24 ) = *(undefined1*)( (long)in_RCX + 0xc );
                  if (*(long*)( lVar6 + 0x30 ) != in_RCX[3]) {
                     CowData<Area2D::AreaShapePair>::_ref((CowData<Area2D::AreaShapePair>*)( lVar6 + 0x30 ), (CowData*)( in_RCX + 3 ));
                  }

                  pauStack_90 = *(undefined1(**) [16])( *(long*)( param_2 + 8 ) + (ulong)uVar25 * 8 );
                  goto LAB_001147be;
               }

               uVar34 = uVar34 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar25 + 1) * lVar6;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar36;
               lVar31 = SUB168(auVar9 * auVar17, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar25 = SUB164(auVar9 * auVar17, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar33 * lVar6,auVar18._8_8_ = 0,auVar18._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar25 ) - SUB164(auVar10 * auVar18, 8)) * lVar6,auVar19._8_8_ = 0,auVar19._0_8_ = uVar36,uVar34 <= SUB164(auVar11 * auVar19, 8) );
         }

      }

   }

   if ((float)uVar4 * __LC150 < (float)( iVar29 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         pauStack_90 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_001147be;
      }

      _resize_and_rehash((HashMap<ObjectID,Area2D::AreaState,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,Area2D::AreaState>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   uVar5 = *(undefined4*)( in_RCX + 1 );
   local_48 = 0;
   uVar3 = *(undefined1*)( (long)in_RCX + 0xc );
   lVar6 = *plVar30;
   uVar28 = *in_RCX;
   if (in_RCX[3] == 0) {
      pauStack_90 = (undefined1(*) [16])operator_new(0x38, "");
      *pauStack_90 = (undefined1[16])0x0;
      *(undefined4*)pauStack_90[2] = uVar5;
      *(long*)pauStack_90[1] = lVar6;
      pauStack_90[2][4] = uVar3;
      *(undefined8*)( pauStack_90[1] + 8 ) = uVar28;
      *(undefined8*)pauStack_90[3] = 0;
      LAB_0011466a:puVar27 = *(undefined8**)( param_2 + 0x20 );
      if (puVar27 != (undefined8*)0x0) goto LAB_00114677;
      LAB_00114830:*(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_90;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_90;
   }
 else {
      CowData<Area2D::AreaShapePair>::_ref((CowData<Area2D::AreaShapePair>*)&local_48, (CowData*)( in_RCX + 3 ));
      lVar31 = local_48;
      pauStack_90 = (undefined1(*) [16])operator_new(0x38, "");
      *(undefined8*)*pauStack_90 = 0;
      *(undefined8*)( *pauStack_90 + 8 ) = 0;
      *(undefined4*)pauStack_90[2] = uVar5;
      *(long*)pauStack_90[1] = lVar6;
      pauStack_90[2][4] = uVar3;
      *(undefined8*)( pauStack_90[1] + 8 ) = uVar28;
      *(undefined8*)pauStack_90[3] = 0;
      if (lVar31 == 0) goto LAB_0011466a;
      CowData<Area2D::AreaShapePair>::_ref((CowData<Area2D::AreaShapePair>*)( pauStack_90 + 3 ), (CowData*)&local_48);
      LOCK();
      plVar1 = (long*)( lVar31 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0011466a;
      Memory::free_static((void*)( local_48 + -0x10 ), false);
      puVar27 = *(undefined8**)( param_2 + 0x20 );
      if (puVar27 == (undefined8*)0x0) goto LAB_00114830;
      LAB_00114677:if (in_R8B == '\0') {
         *puVar27 = pauStack_90;
         *(undefined8**)( *pauStack_90 + 8 ) = puVar27;
         *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_90;
      }
 else {
         lVar6 = *(long*)( param_2 + 0x18 );
         *(undefined1(**) [16])( lVar6 + 8 ) = pauStack_90;
         *(long*)*pauStack_90 = lVar6;
         *(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_90;
      }

   }

   lVar6 = *(long*)( param_2 + 0x10 );
   uVar26 = *plVar30 * 0x3ffff - 1;
   uVar26 = ( uVar26 ^ uVar26 >> 0x1f ) * 0x15;
   uVar26 = ( uVar26 ^ uVar26 >> 0xb ) * 0x41;
   uVar26 = uVar26 >> 0x16 ^ uVar26;
   uVar36 = uVar26 & 0xffffffff;
   if ((int)uVar26 == 0) {
      uVar36 = 1;
   }

   uVar34 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar25 = (uint)uVar36;
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar26 = CONCAT44(0, uVar4);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar36 * lVar31;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar26;
   lVar32 = SUB168(auVar12 * auVar20, 8);
   lVar7 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar6 + lVar32 * 4 );
   iVar29 = SUB164(auVar12 * auVar20, 8);
   uVar33 = *puVar2;
   pauVar24 = pauStack_90;
   while (uVar33 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar33 * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar26;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( iVar29 + uVar4 ) - SUB164(auVar13 * auVar21, 8)) * lVar31;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar26;
      uVar25 = SUB164(auVar14 * auVar22, 8);
      pauVar37 = pauVar24;
      if (uVar25 < uVar34) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar33;
         puVar27 = (undefined8*)( lVar7 + lVar32 * 8 );
         pauVar37 = (undefined1(*) [16])*puVar27;
         *puVar27 = pauVar24;
         uVar34 = uVar25;
      }

      uVar25 = (uint)uVar36;
      uVar34 = uVar34 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar26;
      lVar32 = SUB168(auVar15 * auVar23, 8);
      puVar2 = (uint*)( lVar6 + lVar32 * 4 );
      iVar29 = SUB164(auVar15 * auVar23, 8);
      pauVar24 = pauVar37;
      uVar33 = *puVar2;
   }
;
   *(undefined1(**) [16])( lVar7 + lVar32 * 8 ) = pauVar24;
   *puVar2 = uVar25;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_001147be:*(undefined1(**) [16])param_1 = pauStack_90;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Area2D::ShapePair>::_realloc(long) */undefined8 CowData<Area2D::ShapePair>::_realloc(CowData<Area2D::ShapePair> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Area2D::ShapePair>::resize<false>(long) */undefined8 CowData<Area2D::ShapePair>::resize<false>(CowData<Area2D::ShapePair> *this, long param_1) {
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
   undefined8 *puVar11;
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
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
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
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00114d40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_00114d40;
   if (param_1 <= lVar10) {
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
      LAB_00114cac:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_00114c40;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00114cac;
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

   puVar11 = puVar8 + param_1;
   puVar5 = puVar8 + lVar3;
   puVar6 = puVar5;
   if (( (int)puVar11 - (int)puVar5 & 8U ) != 0) {
      *puVar5 = 0;
      puVar6 = puVar5 + 1;
      if (puVar5 + 1 == puVar11) goto LAB_00114c40;
   }

   do {
      *puVar6 = 0;
      puVar5 = puVar6 + 2;
      puVar6[1] = 0;
      puVar6 = puVar5;
   }
 while ( puVar5 != puVar11 );
   LAB_00114c40:puVar8[-1] = param_1;
   return 0;
}
/* VSet<Area2D::ShapePair>::insert(Area2D::ShapePair const&) */void VSet<Area2D::ShapePair>::insert(VSet<Area2D::ShapePair> *this, ShapePair *param_1) {
   int iVar1;
   int *piVar2;
   bool bVar3;
   code *pcVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   int *piVar10;
   int *piVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   undefined8 local_30;
   piVar2 = *(int**)( this + 8 );
   if (piVar2 == (int*)0x0) {
      local_30 = *(undefined8*)param_1;
      iVar6 = CowData<Area2D::ShapePair>::resize<false>((CowData<Area2D::ShapePair>*)( this + 8 ), 1);
      if (iVar6 != 0) goto LAB_00114fe1;
      lVar7 = 0;
      CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( this + 8 ));
      lVar9 = *(long*)( this + 8 );
      goto LAB_00114f47;
   }

   lVar9 = *(long*)( piVar2 + -2 );
   iVar6 = (int)lVar9 + -1;
   if (lVar9 < 1) {
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar9, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   if (iVar6 < 0) {
      _err_print_error("_find", "./core/templates/vset.h", 0x36, "low > high, this may be a bug", 0, 0);
      local_30 = *(undefined8*)param_1;
      iVar5 = 0;
      piVar11 = *(int**)( this + 8 );
      bVar3 = *piVar2 < (int)local_30;
      piVar10 = piVar2;
      if ((int)local_30 == *piVar2) goto LAB_00114f60;
   }
 else {
      local_30 = *(undefined8*)param_1;
      iVar8 = 0;
      iVar13 = (int)local_30;
      iVar14 = (int)( (ulong)local_30 >> 0x20 );
      do {
         while (true) {
            iVar5 = ( iVar8 + iVar6 ) / 2;
            piVar10 = piVar2 + (long)iVar5 * 2;
            iVar1 = *piVar10;
            if (iVar1 == iVar13) break;
            if (iVar13 < iVar1) goto LAB_00114e92;
            LAB_00114ec2:iVar8 = iVar5 + 1;
            if (iVar6 < iVar8) goto LAB_00114ec9;
         }
;
         if (piVar10[1] <= iVar14) {
            if (iVar14 <= piVar10[1]) {
               return;
            }

            goto LAB_00114ec2;
         }

         LAB_00114e92:iVar6 = iVar5 + -1;
      }
 while ( iVar8 <= iVar6 );
      LAB_00114ec9:bVar3 = iVar13 != iVar1 && iVar1 <= iVar13;
      piVar11 = piVar2;
      if (iVar13 == iVar1) {
         LAB_00114f60:bVar3 = piVar10[1] < local_30._4_4_;
      }

   }

   iVar6 = ( iVar5 + 1 ) - (uint)!bVar3;
   lVar7 = (long)iVar6;
   if (piVar11 == (int*)0x0) {
      lVar9 = 1;
      lVar12 = 0;
   }
 else {
      lVar12 = *(long*)( piVar11 + -2 );
      lVar9 = lVar12 + 1;
   }

   if (( lVar9 <= lVar7 ) || ( iVar6 >> 7 != 0 )) {
      _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar7, lVar9, "p_pos", "new_size", "", false, false);
      return;
   }

   iVar6 = CowData<Area2D::ShapePair>::resize<false>((CowData<Area2D::ShapePair>*)( this + 8 ), lVar9);
   if (iVar6 != 0) {
      LAB_00114fe1:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
      return;
   }

   CowData<Area2D::ShapePair>::_copy_on_write((CowData<Area2D::ShapePair>*)( this + 8 ));
   lVar9 = *(long*)( this + 8 );
   if (lVar7 < lVar12) {
      memmove((void*)( lVar9 + 8 + lVar7 * 8 ), (void*)( lVar9 + lVar7 * 8 ), ( lVar12 - lVar7 ) * 8);
   }

   LAB_00114f47:*(undefined8*)( lVar9 + lVar7 * 8 ) = local_30;
   return;
}
/* CowData<Area2D::AreaShapePair>::_realloc(long) */undefined8 CowData<Area2D::AreaShapePair>::_realloc(CowData<Area2D::AreaShapePair> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Area2D::AreaShapePair>::resize<false>(long) */undefined8 CowData<Area2D::AreaShapePair>::resize<false>(CowData<Area2D::AreaShapePair> *this, long param_1) {
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
   undefined8 *puVar11;
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
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
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
      lVar3 = lVar10 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_001153a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_001153a0;
   if (param_1 <= lVar10) {
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
      LAB_0011530c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_001152a0;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0011530c;
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

   puVar11 = puVar8 + param_1;
   puVar5 = puVar8 + lVar3;
   puVar6 = puVar5;
   if (( (int)puVar11 - (int)puVar5 & 8U ) != 0) {
      *puVar5 = 0;
      puVar6 = puVar5 + 1;
      if (puVar5 + 1 == puVar11) goto LAB_001152a0;
   }

   do {
      *puVar6 = 0;
      puVar5 = puVar6 + 2;
      puVar6[1] = 0;
      puVar6 = puVar5;
   }
 while ( puVar5 != puVar11 );
   LAB_001152a0:puVar8[-1] = param_1;
   return 0;
}
/* VSet<Area2D::AreaShapePair>::insert(Area2D::AreaShapePair const&) */void VSet<Area2D::AreaShapePair>::insert(VSet<Area2D::AreaShapePair> *this, AreaShapePair *param_1) {
   int iVar1;
   int *piVar2;
   bool bVar3;
   code *pcVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   int iVar8;
   long lVar9;
   int *piVar10;
   int *piVar11;
   long lVar12;
   int iVar13;
   int iVar14;
   undefined8 local_30;
   piVar2 = *(int**)( this + 8 );
   if (piVar2 == (int*)0x0) {
      local_30 = *(undefined8*)param_1;
      iVar6 = CowData<Area2D::AreaShapePair>::resize<false>((CowData<Area2D::AreaShapePair>*)( this + 8 ), 1);
      if (iVar6 != 0) goto LAB_001155c1;
      lVar7 = 0;
      CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( this + 8 ));
      lVar9 = *(long*)( this + 8 );
      goto LAB_00115527;
   }

   lVar9 = *(long*)( piVar2 + -2 );
   iVar6 = (int)lVar9 + -1;
   if (lVar9 < 1) {
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar9, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   if (iVar6 < 0) {
      _err_print_error("_find", "./core/templates/vset.h", 0x36, "low > high, this may be a bug", 0, 0);
      local_30 = *(undefined8*)param_1;
      iVar5 = 0;
      piVar11 = *(int**)( this + 8 );
      bVar3 = *piVar2 < (int)local_30;
      piVar10 = piVar2;
      if ((int)local_30 == *piVar2) goto LAB_00115540;
   }
 else {
      local_30 = *(undefined8*)param_1;
      iVar8 = 0;
      iVar13 = (int)local_30;
      iVar14 = (int)( (ulong)local_30 >> 0x20 );
      do {
         while (true) {
            iVar5 = ( iVar8 + iVar6 ) / 2;
            piVar10 = piVar2 + (long)iVar5 * 2;
            iVar1 = *piVar10;
            if (iVar1 == iVar13) break;
            if (iVar13 < iVar1) goto LAB_00115472;
            LAB_001154a2:iVar8 = iVar5 + 1;
            if (iVar6 < iVar8) goto LAB_001154a9;
         }
;
         if (piVar10[1] <= iVar14) {
            if (iVar14 <= piVar10[1]) {
               return;
            }

            goto LAB_001154a2;
         }

         LAB_00115472:iVar6 = iVar5 + -1;
      }
 while ( iVar8 <= iVar6 );
      LAB_001154a9:bVar3 = iVar13 != iVar1 && iVar1 <= iVar13;
      piVar11 = piVar2;
      if (iVar13 == iVar1) {
         LAB_00115540:bVar3 = piVar10[1] < local_30._4_4_;
      }

   }

   iVar6 = ( iVar5 + 1 ) - (uint)!bVar3;
   lVar7 = (long)iVar6;
   if (piVar11 == (int*)0x0) {
      lVar9 = 1;
      lVar12 = 0;
   }
 else {
      lVar12 = *(long*)( piVar11 + -2 );
      lVar9 = lVar12 + 1;
   }

   if (( lVar9 <= lVar7 ) || ( iVar6 >> 7 != 0 )) {
      _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar7, lVar9, "p_pos", "new_size", "", false, false);
      return;
   }

   iVar6 = CowData<Area2D::AreaShapePair>::resize<false>((CowData<Area2D::AreaShapePair>*)( this + 8 ), lVar9);
   if (iVar6 != 0) {
      LAB_001155c1:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
      return;
   }

   CowData<Area2D::AreaShapePair>::_copy_on_write((CowData<Area2D::AreaShapePair>*)( this + 8 ));
   lVar9 = *(long*)( this + 8 );
   if (lVar7 < lVar12) {
      memmove((void*)( lVar9 + 8 + lVar7 * 8 ), (void*)( lVar9 + lVar7 * 8 ), ( lVar12 - lVar7 ) * 8);
   }

   LAB_00115527:*(undefined8*)( lVar9 + lVar7 * 8 ) = local_30;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00115828) *//* WARNING: Removing unreachable block (ram,0x001159bd) *//* WARNING: Removing unreachable block (ram,0x001159c9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<StringName>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<StringName>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   bool bVar5;
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115be0;
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

         ( *(code*)pVVar2 )((StringName*)&local_58);
         Variant::Variant((Variant*)local_48, (StringName*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         bVar5 = StringName::configured != '\0';
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (( bVar5 ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
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

   LAB_00115be0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<StringName>::validated_call(MethodBindTRC<StringName> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x115a18;
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

         goto LAB_00115eaa;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)( param_3 + 8 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
      StringName::unref();
   }

   LAB_00115eaa:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<StringName>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<StringName>::ptrcall(MethodBindTRC<StringName> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x115a18;
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

         goto LAB_0011608b;
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

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   StringName::operator =((StringName*)param_3, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
      StringName::unref();
   }

   LAB_0011608b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001163d1;
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
      /* WARNING: Could not recover jumptable at 0x0011625d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_001163d1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001165b1;
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
      /* WARNING: Could not recover jumptable at 0x00116439. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_001165b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Area2D>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<TypedArray<Area2D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116690;
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

   LAB_00116690:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116930;
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

   LAB_00116930:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116bc0;
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

   LAB_00116bc0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00116dd4;
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
   LAB_00116dd4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00116f83;
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
   LAB_00116f83:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001172c1;
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
      /* WARNING: Could not recover jumptable at 0x0011714c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001172c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_001174a1;
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
      /* WARNING: Could not recover jumptable at 0x0011732b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001174a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117570;
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

   LAB_00117570:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00117785;
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
   LAB_00117785:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00117934;
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
   LAB_00117934:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00117c71;
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
      /* WARNING: Could not recover jumptable at 0x00117afd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00117c71:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00117e51;
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
      /* WARNING: Could not recover jumptable at 0x00117cd9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00117e51:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117f20;
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

   LAB_00117f20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118138;
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
   LAB_00118138:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001182f7;
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
   LAB_001182f7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118649;
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
      /* WARNING: Could not recover jumptable at 0x001184d2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00118649:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00118829;
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
      /* WARNING: Could not recover jumptable at 0x001186b1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00118829:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001188f0;
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

   LAB_001188f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118b02;
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
   LAB_00118b02:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118cb1;
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
   LAB_00118cb1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118ff1;
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
      /* WARNING: Could not recover jumptable at 0x00118e7d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00118ff1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_001191d9;
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
      /* WARNING: Could not recover jumptable at 0x00119062. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_001191d9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Area2D::SpaceOverride>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Area2D::SpaceOverride>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001192a0;
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

   LAB_001192a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Area2D::SpaceOverride>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Area2D::SpaceOverride>::validated_call(MethodBindTRC<Area2D::SpaceOverride> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001194b4;
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
   LAB_001194b4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Area2D::SpaceOverride>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Area2D::SpaceOverride>::ptrcall(MethodBindTRC<Area2D::SpaceOverride> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119663;
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
   LAB_00119663:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Area2D::SpaceOverride>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Area2D::SpaceOverride>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001199a1;
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
      /* WARNING: Could not recover jumptable at 0x0011982c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_001199a1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Area2D::SpaceOverride>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Area2D::SpaceOverride>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119b81;
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
      /* WARNING: Could not recover jumptable at 0x00119a0b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00119b81:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool, Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool,Node*>::validated_call(MethodBindTRC<bool,Node*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00119bd9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 0x10 ));
   param_3[8] = VVar1;
   LAB_00119bd9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,Node*>::ptrcall(MethodBindTRC<bool,Node*> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119dbd;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   plVar3 = (long*)*param_2;
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   if (plVar3 != (long*)0x0) {
      plVar3 = (long*)*plVar3;
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), plVar3);
   *(undefined1*)param_3 = uVar1;
   LAB_00119dbd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Area2D>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<TypedArray<Area2D>>::validated_call(MethodBindTRC<TypedArray<Area2D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x115a18;
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

         goto LAB_00119fa9;
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
   LAB_00119fa9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Area2D>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<TypedArray<Area2D>>::ptrcall(MethodBindTRC<TypedArray<Area2D>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x115a18;
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

         goto LAB_0011a17a;
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
   LAB_0011a17a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         local_48 = (Variant**)0x115a18;
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

         goto LAB_0011a349;
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
   LAB_0011a349:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
         local_48 = (void**)0x115a18;
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

         goto LAB_0011a51a;
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
   LAB_0011a51a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a830;
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
         if (in_R8D != 1) goto LAB_0011a880;
         LAB_0011a870:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011a880:uVar6 = 4;
            goto LAB_0011a825;
         }

         if (in_R8D == 1) goto LAB_0011a870;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC198;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_0011a825:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011a830:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   bool bVar5;
   undefined4 uVar6;
   Object *pOVar7;
   long *plVar8;
   Object *pOVar9;
   long lVar10;
   long lVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar8 = (long*)plVar12[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
         }

      }
 else {
         plVar8 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011abd0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar6 = 3;
      LAB_0011abc5:*in_R9 = uVar6;
      in_R9[2] = 1;
      goto LAB_0011abd0;
   }

   pVVar13 = param_2[5];
   if (pVVar13 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011ac20;
      LAB_0011ac10:pVVar13 = *(Variant**)param_4;
   }
 else {
      lVar10 = *(long*)( pVVar13 + -8 );
      if ((int)lVar10 < (int)( in_R8D ^ 1 )) {
         LAB_0011ac20:uVar6 = 4;
         goto LAB_0011abc5;
      }

      if (in_R8D == 1) goto LAB_0011ac10;
      lVar11 = (long)( (int)lVar10 + -1 );
      if (lVar10 <= lVar11) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar10, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar13 = pVVar13 + lVar11 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar14 & 1 ) != 0) {
      pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar13, 0x18);
   if (cVar4 == '\0') {
      LAB_0011ab46:uVar3 = _LC200;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
      pOVar9 = Variant::operator_cast_to_Object_(pVVar13);
      if (( ( pOVar9 == (Object*)0x0 ) || ( lVar10 = __dynamic_cast(pOVar9, &Object::typeinfo, &Node::typeinfo, 0) ),lVar10 == 0 )) goto LAB_0011ab46;
   }

   pOVar7 = Variant::operator_cast_to_Object_(pVVar13);
   if (pOVar7 != (Object*)0x0) {
      pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Node::typeinfo, 0);
   }

   bVar5 = (bool)( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), pOVar7);
   Variant::Variant((Variant*)local_58, bVar5);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_58[0];
   *(undefined8*)( param_1 + 8 ) = local_50;
   *(undefined8*)( param_1 + 0x10 ) = uStack_48;
   LAB_0011abd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011af70;
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
         if (in_R8D != 1) goto LAB_0011afc0;
         LAB_0011afb0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011afc0:uVar6 = 4;
            goto LAB_0011af65;
         }

         if (in_R8D == 1) goto LAB_0011afb0;
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
      uVar4 = _LC201;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_38 = Variant::operator_cast_to_Vector2(pVVar10);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), &local_38);
   }
 else {
      uVar6 = 3;
      LAB_0011af65:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011af70:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b27d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b2e0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b2e0:uVar6 = 4;
         LAB_0011b27d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b1fb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b1fb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC64;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x0011b256. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   char *pcVar1;
   long *plVar2;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var3;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011b346;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var3, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b346:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b62d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011b690;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011b690:uVar6 = 4;
         LAB_0011b62d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b5ab;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b5ab:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC202;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x0011b604. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(fVar9);
   return;
}
/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   char *pcVar1;
   long *plVar2;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var3;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011b6f6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var3, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011b6f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011b9dd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011ba40;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011ba40:uVar6 = 4;
         LAB_0011b9dd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011b95b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011b95b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC203;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011b9b7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   char *pcVar1;
   long *plVar2;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var3;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar1 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar2 = (long*)( local_48 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar1 + -0x10, false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011baa6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var3, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011baa6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, Area2D::SpaceOverride>(__UnexistingClass*, void
   (__UnexistingClass::*)(Area2D::SpaceOverride), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,Area2D::SpaceOverride>(__UnexistingClass *param_1, _func_void_SpaceOverride *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011bd8d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011bdf0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011bdf0:uVar6 = 4;
         LAB_0011bd8d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011bd0b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011bd0b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_SpaceOverride**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC64;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011bd66. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<Area2D::SpaceOverride>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<Area2D::SpaceOverride>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   long *plVar2;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var3;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var3 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var3 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var3 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var3 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var3 + 8 ) == 0) {
         plVar2 = *(long**)( p_Var3 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)p_Var3 + 0x40 ) )(p_Var3);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( p_Var3 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar2 = (long*)( local_50 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011be56;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,Area2D::SpaceOverride>(p_Var3, (_func_void_SpaceOverride*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011be56:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<StringName>::~MethodBindTRC() */void MethodBindTRC<StringName>::~MethodBindTRC(MethodBindTRC<StringName> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, Node*>::~MethodBindTRC() */void MethodBindTRC<bool,Node*>::~MethodBindTRC(MethodBindTRC<bool,Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Area2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Area2D>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Node2D>>::~MethodBindTRC(MethodBindTRC<TypedArray<Node2D>> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC() */void MethodBindTRC<Area2D::SpaceOverride>::~MethodBindTRC(MethodBindTRC<Area2D::SpaceOverride> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Area2D::SpaceOverride>::~MethodBindT() */void MethodBindT<Area2D::SpaceOverride>::~MethodBindT(MethodBindT<Area2D::SpaceOverride> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2 const&>::~MethodBindTRC() */void MethodBindTRC<Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector2 const&>::~MethodBindT() */void MethodBindT<Vector2_const&>::~MethodBindT(MethodBindT<Vector2_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Area2D, void, ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,ObjectID> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Area2D, void, int, RID const&, ObjectID, int,
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Area2D,void,int,RID_const&,ObjectID,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


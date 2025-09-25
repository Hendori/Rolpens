/* CharacterBody3D::set_safe_margin(float) */void CharacterBody3D::set_safe_margin(CharacterBody3D *this, float param_1) {
   *(float*)( this + 0x624 ) = param_1;
   return;
}
/* CharacterBody3D::get_safe_margin() const */undefined4 CharacterBody3D::get_safe_margin(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x624 );
}
/* CharacterBody3D::get_velocity() const */CharacterBody3D * __thiscall CharacterBody3D::get_velocity(CharacterBody3D *this){
   return this + 0x670;
}
/* CharacterBody3D::set_velocity(Vector3 const&) */void CharacterBody3D::set_velocity(CharacterBody3D *this, Vector3 *param_1) {
   *(undefined8*)( this + 0x670 ) = *(undefined8*)param_1;
   *(undefined4*)( this + 0x678 ) = *(undefined4*)( param_1 + 8 );
   return;
}
/* CharacterBody3D::is_on_floor() const */CharacterBody3D CharacterBody3D::is_on_floor(CharacterBody3D *this) {
   return this[0x630];
}
/* CharacterBody3D::is_on_floor_only() const */CharacterBody3D CharacterBody3D::is_on_floor_only(CharacterBody3D *this) {
   CharacterBody3D CVar1;
   CVar1 = this[0x630];
   if (( CVar1 != (CharacterBody3D)0x0 ) && ( CVar1 = (CharacterBody3D)0x0 ),this[0x631] == (CharacterBody3D)0x0) {
      CVar1 = ( CharacterBody3D )((byte)this[0x632] ^ 1);
   }

   return CVar1;
}
/* CharacterBody3D::is_on_wall() const */CharacterBody3D CharacterBody3D::is_on_wall(CharacterBody3D *this) {
   return this[0x631];
}
/* CharacterBody3D::is_on_wall_only() const */CharacterBody3D CharacterBody3D::is_on_wall_only(CharacterBody3D *this) {
   CharacterBody3D CVar1;
   CVar1 = this[0x631];
   if (( CVar1 != (CharacterBody3D)0x0 ) && ( CVar1 = (CharacterBody3D)0x0 ),this[0x630] == (CharacterBody3D)0x0) {
      CVar1 = ( CharacterBody3D )((byte)this[0x632] ^ 1);
   }

   return CVar1;
}
/* CharacterBody3D::is_on_ceiling() const */CharacterBody3D CharacterBody3D::is_on_ceiling(CharacterBody3D *this) {
   return this[0x632];
}
/* CharacterBody3D::is_on_ceiling_only() const */CharacterBody3D CharacterBody3D::is_on_ceiling_only(CharacterBody3D *this) {
   CharacterBody3D CVar1;
   CVar1 = this[0x632];
   if (( CVar1 != (CharacterBody3D)0x0 ) && ( CVar1 = (CharacterBody3D)0x0 ),this[0x630] == (CharacterBody3D)0x0) {
      CVar1 = ( CharacterBody3D )((byte)this[0x631] ^ 1);
   }

   return CVar1;
}
/* CharacterBody3D::get_floor_normal() const */CharacterBody3D * __thiscall CharacterBody3D::get_floor_normal(CharacterBody3D *this){
   return this + 0x67c;
}
/* CharacterBody3D::get_wall_normal() const */CharacterBody3D * __thiscall CharacterBody3D::get_wall_normal(CharacterBody3D *this){
   return this + 0x688;
}
/* CharacterBody3D::get_last_motion() const */CharacterBody3D * __thiscall CharacterBody3D::get_last_motion(CharacterBody3D *this){
   return this + 0x6a0;
}
/* CharacterBody3D::get_real_velocity() const */CharacterBody3D * __thiscall CharacterBody3D::get_real_velocity(CharacterBody3D *this){
   return this + 0x6dc;
}
/* CharacterBody3D::get_platform_velocity() const */CharacterBody3D * __thiscall CharacterBody3D::get_platform_velocity(CharacterBody3D *this){
   return this + 0x6ac;
}
/* CharacterBody3D::get_platform_angular_velocity() const */CharacterBody3D * __thiscall CharacterBody3D::get_platform_angular_velocity(CharacterBody3D *this){
   return this + 0x6b8;
}
/* CharacterBody3D::get_linear_velocity() const */undefined1  [16] __thiscallCharacterBody3D::get_linear_velocity(CharacterBody3D *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x6dc );
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CharacterBody3D::get_slide_collision_count() const */undefined4 CharacterBody3D::get_slide_collision_count(CharacterBody3D *this) {
   if (*(long*)( this + 0x6f0 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x6f0 ) + -8 );
   }

   return 0;
}
/* CharacterBody3D::is_floor_stop_on_slope_enabled() const */CharacterBody3D CharacterBody3D::is_floor_stop_on_slope_enabled(CharacterBody3D *this) {
   return this[0x635];
}
/* CharacterBody3D::set_floor_stop_on_slope_enabled(bool) */void CharacterBody3D::set_floor_stop_on_slope_enabled(CharacterBody3D *this, bool param_1) {
   this[0x635] = (CharacterBody3D)param_1;
   return;
}
/* CharacterBody3D::is_floor_constant_speed_enabled() const */CharacterBody3D CharacterBody3D::is_floor_constant_speed_enabled(CharacterBody3D *this) {
   return this[0x634];
}
/* CharacterBody3D::set_floor_constant_speed_enabled(bool) */void CharacterBody3D::set_floor_constant_speed_enabled(CharacterBody3D *this, bool param_1) {
   this[0x634] = (CharacterBody3D)param_1;
   return;
}
/* CharacterBody3D::is_floor_block_on_wall_enabled() const */CharacterBody3D CharacterBody3D::is_floor_block_on_wall_enabled(CharacterBody3D *this) {
   return this[0x636];
}
/* CharacterBody3D::set_floor_block_on_wall_enabled(bool) */void CharacterBody3D::set_floor_block_on_wall_enabled(CharacterBody3D *this, bool param_1) {
   this[0x636] = (CharacterBody3D)param_1;
   return;
}
/* CharacterBody3D::is_slide_on_ceiling_enabled() const */CharacterBody3D CharacterBody3D::is_slide_on_ceiling_enabled(CharacterBody3D *this) {
   return this[0x637];
}
/* CharacterBody3D::set_slide_on_ceiling_enabled(bool) */void CharacterBody3D::set_slide_on_ceiling_enabled(CharacterBody3D *this, bool param_1) {
   this[0x637] = (CharacterBody3D)param_1;
   return;
}
/* CharacterBody3D::get_platform_floor_layers() const */undefined4 CharacterBody3D::get_platform_floor_layers(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x650 );
}
/* CharacterBody3D::set_platform_floor_layers(unsigned int) */void CharacterBody3D::set_platform_floor_layers(CharacterBody3D *this, uint param_1) {
   *(uint*)( this + 0x650 ) = param_1;
   return;
}
/* CharacterBody3D::get_platform_wall_layers() const */undefined4 CharacterBody3D::get_platform_wall_layers(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x654 );
}
/* CharacterBody3D::set_platform_wall_layers(unsigned int) */void CharacterBody3D::set_platform_wall_layers(CharacterBody3D *this, uint param_1) {
   *(uint*)( this + 0x654 ) = param_1;
   return;
}
/* CharacterBody3D::set_motion_mode(CharacterBody3D::MotionMode) */void CharacterBody3D::set_motion_mode(CharacterBody3D *this, undefined4 param_2) {
   *(undefined4*)( this + 0x628 ) = param_2;
   return;
}
/* CharacterBody3D::get_motion_mode() const */undefined4 CharacterBody3D::get_motion_mode(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x628 );
}
/* CharacterBody3D::set_platform_on_leave(CharacterBody3D::PlatformOnLeave) */void CharacterBody3D::set_platform_on_leave(CharacterBody3D *this, undefined4 param_2) {
   *(undefined4*)( this + 0x62c ) = param_2;
   return;
}
/* CharacterBody3D::get_platform_on_leave() const */undefined4 CharacterBody3D::get_platform_on_leave(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x62c );
}
/* CharacterBody3D::get_max_slides() const */undefined4 CharacterBody3D::get_max_slides(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x638 );
}
/* CharacterBody3D::get_floor_max_angle() const */undefined4 CharacterBody3D::get_floor_max_angle(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x65c );
}
/* CharacterBody3D::set_floor_max_angle(float) */void CharacterBody3D::set_floor_max_angle(CharacterBody3D *this, float param_1) {
   *(float*)( this + 0x65c ) = param_1;
   return;
}
/* CharacterBody3D::get_floor_snap_length() */undefined4 CharacterBody3D::get_floor_snap_length(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x658 );
}
/* CharacterBody3D::get_wall_min_slide_angle() const */undefined4 CharacterBody3D::get_wall_min_slide_angle(CharacterBody3D *this) {
   return *(undefined4*)( this + 0x660 );
}
/* CharacterBody3D::set_wall_min_slide_angle(float) */void CharacterBody3D::set_wall_min_slide_angle(CharacterBody3D *this, float param_1) {
   *(float*)( this + 0x660 ) = param_1;
   return;
}
/* CharacterBody3D::get_up_direction() const */CharacterBody3D * __thiscall CharacterBody3D::get_up_direction(CharacterBody3D *this){
   return this + 0x664;
}
/* CharacterBody3D::get_position_delta() const */undefined1  [16] __thiscallCharacterBody3D::get_position_delta(CharacterBody3D *this) {
   long lVar1;
   long in_FS_OFFSET;
   undefined1 auVar2[16];
   undefined8 local_24;
   float local_1c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_global_transform();
   auVar2._4_4_ = (float)( (ulong)local_24 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0x6d0 ) >> 0x20 );
   auVar2._0_4_ = (float)local_24 - (float)*(undefined8*)( this + 0x6d0 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar2._8_4_ = local_1c - *(float*)( this + 0x6d8 );
      auVar2._12_4_ = 0;
      return auVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CharacterBody3D::get_floor_angle(Vector3 const&) const */ulong CharacterBody3D::get_floor_angle(CharacterBody3D *this, Vector3 *param_1) {
   float __x;
   undefined1 auVar1[16];
   undefined1 extraout_var[12];
   if (( ( *(float*)param_1 == 0.0 ) && ( *(float*)( param_1 + 4 ) == 0.0 ) ) && ( *(float*)( param_1 + 8 ) == 0.0 )) {
      _err_print_error("get_floor_angle", "scene/3d/physics/character_body_3d.cpp", 0x2a6, "Condition \"p_up_direction == Vector3()\" is true. Returning: 0", 0, 0);
      return 0;
   }

   __x = *(float*)param_1 * *(float*)( this + 0x67c ) + *(float*)( param_1 + 4 ) * *(float*)( this + 0x680 ) + *(float*)( param_1 + 8 ) * *(float*)( this + 0x684 );
   if (__x < _LC5) {
      return (ulong)_LC1;
   }

   if (__x <= (float)_LC6) {
      auVar1._0_4_ = acosf(__x);
      auVar1._4_12_ = extraout_var;
      return auVar1._0_8_;
   }

   return 0;
}
/* CharacterBody3D::set_up_direction(Vector3 const&) */void CharacterBody3D::set_up_direction(CharacterBody3D *this, Vector3 *param_1) {
   float fVar1;
   ulong uVar2;
   float fVar3;
   undefined1 auVar4[16];
   float fVar6;
   undefined1 auVar5[16];
   uVar2 = *(ulong*)param_1;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar2;
   fVar1 = *(float*)( param_1 + 8 );
   fVar3 = (float)uVar2;
   fVar6 = (float)( uVar2 >> 0x20 );
   if (( ( fVar3 == 0.0 ) && ( fVar6 == 0.0 ) ) && ( fVar1 == 0.0 )) {
      _err_print_error("set_up_direction", "scene/3d/physics/character_body_3d.cpp", 0x33d, "Condition \"p_up_direction == Vector3()\" is true.", "up_direction can\'t be equal to Vector3.ZERO, consider using Floating motion mode instead.", 0, 0);
      return;
   }

   fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar1 * fVar1;
   if (fVar3 != 0.0) {
      fVar3 = SQRT(fVar3);
      auVar4._4_4_ = fVar3;
      auVar4._0_4_ = fVar3;
      auVar4._8_8_ = _LC6;
      auVar5 = divps(auVar5, auVar4);
      *(float*)( this + 0x66c ) = fVar1 / fVar3;
      *(long*)( this + 0x664 ) = auVar5._0_8_;
      return;
   }

   *(undefined8*)( this + 0x664 ) = 0;
   *(undefined4*)( this + 0x66c ) = 0;
   return;
}
/* CharacterBody3D::set_max_slides(int) */void CharacterBody3D::set_max_slides(CharacterBody3D *this, int param_1) {
   if (0 < param_1) {
      *(int*)( this + 0x638 ) = param_1;
      return;
   }

   _err_print_error("set_max_slides", "scene/3d/physics/character_body_3d.cpp", 0x31b, "Condition \"p_max_slides < 1\" is true.", 0, 0);
   return;
}
/* CharacterBody3D::set_floor_snap_length(float) */void CharacterBody3D::set_floor_snap_length(CharacterBody3D *this, float param_1) {
   if (0.0 <= param_1) {
      *(float*)( this + 0x658 ) = param_1;
      return;
   }

   _err_print_error("set_floor_snap_length", "scene/3d/physics/character_body_3d.cpp", 0x32c, "Condition \"p_floor_snap_length < 0\" is true.", 0, 0);
   return;
}
/* CharacterBody3D::_validate_property(PropertyInfo&) const [clone .part.0] */void CharacterBody3D::_validate_property(PropertyInfo *param_1) {
   String *this;
   char cVar1;
   this(String * )(param_1 + 8);
   cVar1 = String::begins_with((char*)this);
   if (( ( cVar1 != '\0' ) || ( cVar1 = String::operator ==(this, "up_direction") ),cVar1 != '\0' )) {
      *(undefined4*)( param_1 + 0x28 ) = 2;
   }

   return;
}
/* CowData<PhysicsServer3D::MotionResult>::_copy_on_write() [clone .isra.0] */void CowData<PhysicsServer3D::MotionResult>::_copy_on_write(CowData<PhysicsServer3D::MotionResult> *this) {
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
   __n = lVar2 * 0xa30;
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
/* CharacterBody3D::_set_collision_direction(PhysicsServer3D::MotionResult const&,
   CharacterBody3D::CollisionState&, CharacterBody3D::CollisionState) */void CharacterBody3D::_set_collision_direction(CharacterBody3D *this, long param_1, char *param_2, undefined4 param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   CharacterBody3D CVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   ulong uVar10;
   char cVar11;
   uint uVar12;
   undefined4 uVar13;
   long lVar14;
   long *plVar15;
   char cVar17;
   ulong *puVar16;
   Vector3 *pVVar18;
   undefined8 uVar19;
   int iVar20;
   Vector3 *pVVar21;
   Vector3 *pVVar22;
   long in_FS_OFFSET;
   bool bVar23;
   float fVar24;
   undefined1 auVar25[16];
   double dVar26;
   undefined1 auVar27[16];
   float fVar28;
   double dVar29;
   undefined8 local_a8;
   undefined8 uStack_a0;
   float local_90;
   float local_8c;
   float local_88;
   char cStack_6e;
   cVar17 = (char)( (uint)param_4 >> 8 );
   lVar8 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 4; i++) {
      param_2[i] = '\0';
   }

   CVar6 = this[0x631];
   uVar9 = *(undefined8*)( this + 0x688 );
   uVar7 = *(undefined4*)( this + 0x690 );
   uVar12 = *(int*)( param_1 + 0xa28 ) - 1;
   if ((int)uVar12 < 0) goto LAB_00100c46;
   local_a8 = 0;
   iVar20 = 0;
   local_88 = -1.0;
   local_8c = -1.0;
   local_90 = 0.0;
   pVVar18 = (Vector3*)( param_1 + -0x1c + (long)(int)uVar12 * 0x50 + (ulong)uVar12 * -0x50 );
   pVVar21 = (Vector3*)( param_1 + 0x34 + (long)(int)uVar12 * 0x50 );
   do {
      while (*(int*)( this + 0x628 ) != 0) {
         LAB_001009b0:param_2[1] = '\x01';
         if (( cVar17 != '\0' ) && ( fVar28 = local_8c < fVar28 )) {
            uVar19 = *(undefined8*)pVVar21;
            this[0x631] = (CharacterBody3D)0x1;
            *(undefined8*)( this + 0x688 ) = uVar19;
            *(undefined4*)( this + 0x690 ) = *(undefined4*)( pVVar21 + 8 );
            uVar12 = ( uint ) * (ulong*)( pVVar21 + 0x2c ) & 0xffffff;
            local_8c = fVar28;
            if (uVar12 < (uint)ObjectDB::slot_max) {
               while (true) {
                  LOCK();
                  bVar23 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar23) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar23) break;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar16 = (ulong*)( (ulong)uVar12 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( pVVar21 + 0x2c ) >> 0x18 & 0x7fffffffff ) == ( *puVar16 & 0x7fffffffff )) {
                  uVar10 = puVar16[1];
                  ObjectDB::spin_lock._0_1_ = '\0';
                  if (( uVar10 != 0 ) && ( lVar14 = lVar14 != 0 )) goto LAB_0010094c;
               }
 else {
                  ObjectDB::spin_lock._0_1_ = '\0';
               }

            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            }

            *(undefined8*)( this + 0x640 ) = *(undefined8*)( pVVar21 + 0x34 );
            *(undefined8*)( this + 0x648 ) = *(undefined8*)( pVVar21 + 0x2c );
            *(undefined8*)( this + 0x6ac ) = *(undefined8*)( pVVar21 + 0xc );
            *(undefined4*)( this + 0x6b4 ) = *(undefined4*)( pVVar21 + 0x14 );
            *(undefined8*)( this + 0x6b8 ) = *(undefined8*)( pVVar21 + 0x18 );
            *(undefined4*)( this + 0x6c0 ) = *(undefined4*)( pVVar21 + 0x20 );
            plVar15 = (long*)PhysicsServer3D::get_singleton();
            uVar13 = ( **(code**)( *plVar15 + 0x390 ) )(plVar15, *(undefined8*)( this + 0x640 ));
            *(undefined4*)( this + 0x63c ) = uVar13;
         }

         LAB_0010094c:cVar11 = Vector3::is_equal_approx(pVVar21);
         if (cVar11 == '\0') {
            iVar20 = iVar20 + 1;
            local_a8 = CONCAT44((float)( (ulong)local_a8 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)pVVar21 >> 0x20 ), (float)local_a8 + (float)*(undefined8*)pVVar21);
            local_90 = local_90 + *(float*)( pVVar21 + 8 );
         }

         LAB_00100994:pVVar21 = pVVar21 + -0x50;
         if (pVVar18 == pVVar21) goto LAB_00100b65;
      }
;
      fVar28 = *(float*)( this + 0x664 );
      fVar1 = *(float*)pVVar21;
      fVar2 = *(float*)( this + 0x668 );
      fVar3 = *(float*)( pVVar21 + 4 );
      fVar4 = *(float*)( this + 0x66c );
      fVar5 = *(float*)( pVVar21 + 8 );
      fVar24 = fVar28 * fVar1 + fVar2 * fVar3 + fVar4 * fVar5;
      dVar26 = _LC29;
      if (( _LC5 <= fVar24 ) && ( dVar26 = fVar24 <= (float)_LC6 )) {
         fVar24 = acosf(fVar24);
         dVar26 = (double)fVar24;
      }

      dVar29 = (double)*(float*)( this + 0x65c ) + _LC31;
      if (dVar29 < dVar26) {
         fVar28 = ( (float)( ( uint )(fVar28 * fVar1) ^ _LC161 ) - fVar2 * fVar3 ) - fVar4 * fVar5;
         dVar26 = _LC29;
         if (( _LC5 <= fVar28 ) && ( dVar26 = fVar28 <= (float)_LC6 )) {
            fVar28 = acosf(fVar28);
            dVar26 = (double)fVar28;
         }

         if (dVar29 < dVar26) goto LAB_001009b0;
         cStack_6e = (char)( (uint)param_4 >> 0x10 );
         param_2[2] = '\x01';
         if (cStack_6e != '\0') {
            *(undefined8*)( this + 0x6c4 ) = *(undefined8*)( pVVar21 + 0xc );
            *(undefined4*)( this + 0x6cc ) = *(undefined4*)( pVVar21 + 0x14 );
            *(undefined8*)( this + 0x694 ) = *(undefined8*)pVVar21;
            uVar13 = *(undefined4*)( pVVar21 + 8 );
            this[0x632] = (CharacterBody3D)0x1;
            *(undefined4*)( this + 0x69c ) = uVar13;
         }

         goto LAB_00100994;
      }

      *param_2 = '\x01';
      if (( (char)param_4 == '\0' ) || ( *(float*)( pVVar21 + 0x24 ) <= local_88 )) goto LAB_00100994;
      uVar19 = *(undefined8*)pVVar21;
      this[0x630] = (CharacterBody3D)0x1;
      pVVar22 = pVVar21 + -0x50;
      *(undefined8*)( this + 0x67c ) = uVar19;
      *(undefined4*)( this + 0x684 ) = *(undefined4*)( pVVar21 + 8 );
      local_88 = *(float*)( pVVar21 + 0x24 );
      *(undefined8*)( this + 0x640 ) = *(undefined8*)( pVVar21 + 0x34 );
      *(undefined8*)( this + 0x648 ) = *(undefined8*)( pVVar21 + 0x2c );
      *(undefined8*)( this + 0x6ac ) = *(undefined8*)( pVVar21 + 0xc );
      *(undefined4*)( this + 0x6b4 ) = *(undefined4*)( pVVar21 + 0x14 );
      *(undefined8*)( this + 0x6b8 ) = *(undefined8*)( pVVar21 + 0x18 );
      *(undefined4*)( this + 0x6c0 ) = *(undefined4*)( pVVar21 + 0x20 );
      plVar15 = (long*)PhysicsServer3D::get_singleton();
      uVar13 = ( **(code**)( *plVar15 + 0x390 ) )(plVar15, *(undefined8*)( this + 0x640 ));
      *(undefined4*)( this + 0x63c ) = uVar13;
      pVVar21 = pVVar22;
   }
 while ( pVVar18 != pVVar22 );
   LAB_00100b65:if (( ( ( param_2[1] == '\0' ) || ( iVar20 < 2 ) ) || ( *param_2 != '\0' ) ) || ( *(int*)( this + 0x628 ) != 0 )) goto LAB_00100c46;
   fVar28 = (float)( (ulong)local_a8 >> 0x20 );
   fVar28 = (float)local_a8 * (float)local_a8 + fVar28 * fVar28 + local_90 * local_90;
   if (fVar28 == 0.0) {
      uVar19 = 0;
      local_90 = 0.0;
      fVar28 = *(float*)( this + 0x664 ) * 0.0 + *(float*)( this + 0x668 ) * 0.0 + *(float*)( this + 0x66c ) * 0.0;
      LAB_00100c0e:fVar28 = acosf(fVar28);
      dVar26 = (double)fVar28;
   }
 else {
      fVar28 = SQRT(fVar28);
      auVar25._8_8_ = uStack_a0;
      auVar25._0_8_ = local_a8;
      auVar27._4_4_ = fVar28;
      auVar27._0_4_ = fVar28;
      auVar27._12_4_ = _LC6._4_4_;
      auVar27._8_4_ = (float)_LC6;
      auVar25 = divps(auVar25, auVar27);
      local_90 = local_90 / fVar28;
      uVar19 = auVar25._0_8_;
      fVar28 = *(float*)( this + 0x66c ) * local_90 + auVar25._0_4_ * *(float*)( this + 0x664 ) + auVar25._4_4_ * *(float*)( this + 0x668 );
      dVar26 = _LC29;
      if (_LC5 <= fVar28) {
         if (fVar28 <= (float)_LC6) goto LAB_00100c0e;
         dVar26 = 0.0;
      }

   }

   if (dVar26 <= (double)*(float*)( this + 0x65c ) + _LC31) {
      param_2[0] = '\x01';
      param_2[1] = '\0';
      if ((char)param_4 != '\0') {
         this[0x630] = (CharacterBody3D)0x1;
         *(undefined8*)( this + 0x67c ) = uVar19;
         *(float*)( this + 0x684 ) = local_90;
      }

      if (cVar17 != '\0') {
         this[0x631] = CVar6;
         *(undefined8*)( this + 0x688 ) = uVar9;
         *(undefined4*)( this + 0x690 ) = uVar7;
      }

   }

   LAB_00100c46:if (lVar8 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CharacterBody3D::apply_floor_snap() [clone .part.0] */void CharacterBody3D::apply_floor_snap(CharacterBody3D *this) {
   undefined8 uVar1;
   char cVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   undefined4 local_b00[2];
   undefined8 local_af8[3];
   undefined8 uStack_ae0;
   float fStack_ad4;
   float fStack_ad0;
   float fStack_acc;
   undefined8 local_ac8;
   undefined8 uStack_ac0;
   undefined4 local_ab8;
   undefined1 local_ab4;
   undefined1 local_ab0[16];
   undefined1 local_aa0[16];
   undefined8 local_a90;
   undefined1 local_a88[16];
   undefined1 local_a78[16];
   undefined8 local_a68;
   undefined1 local_a60;
   undefined8 local_a58;
   float fStack_a50;
   undefined4 uStack_a4c;
   undefined4 uStack_a48;
   undefined4 uStack_a44;
   undefined8 uStack_a40;
   undefined4 local_a38;
   float fStack_a34;
   undefined8 auStack_a30[320];
   undefined4 local_30[4];
   long local_20;
   fVar6 = *(float*)( this + 0x624 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar9 = *(float*)( this + 0x658 );
   if (*(float*)( this + 0x658 ) <= fVar6) {
      fVar9 = fVar6;
   }

   fVar7 = (float)( *(uint*)( this + 0x66c ) ^ _LC161 );
   fVar5 = (float)( *(uint*)( this + 0x664 ) ^ _LC161 );
   fVar8 = (float)( *(uint*)( this + 0x668 ) ^ _LC161 );
   Node3D::get_global_transform();
   uStack_ae0 = uStack_a40;
   local_ab8 = 4;
   local_a60 = 1;
   local_af8[0] = local_a58;
   local_ab4 = 1;
   local_a58 = 0;
   fStack_a50 = 0.0;
   uStack_a4c = 0;
   uStack_a48 = 0;
   uStack_a44 = 0;
   uStack_a40 = 0;
   local_a38 = 0;
   local_a90 = _LC37;
   local_a68 = _LC37;
   fStack_ad4 = fStack_a34;
   fStack_ad0 = (float)auStack_a30[0];
   fStack_acc = (float)( (ulong)auStack_a30[0] >> 0x20 );
   local_ab0 = (undefined1[16])0x0;
   local_aa0 = (undefined1[16])0x0;
   local_a88 = (undefined1[16])0x0;
   local_a78 = (undefined1[16])0x0;
   puVar3 = auStack_a30;
   do {
      *puVar3 = 0;
      puVar4 = puVar3 + 10;
      *(undefined4*)( puVar3 + 1 ) = 0;
      *(undefined8*)( (long)puVar3 + 0xc ) = 0;
      *(undefined4*)( (long)puVar3 + 0x14 ) = 0;
      puVar3[3] = 0;
      *(undefined4*)( puVar3 + 4 ) = 0;
      *(undefined8*)( (long)puVar3 + 0x24 ) = 0;
      *(undefined4*)( (long)puVar3 + 0x2c ) = 0;
      *(undefined4*)( puVar3 + 6 ) = 0;
      *(undefined4*)( (long)puVar3 + 0x34 ) = 0;
      *(undefined1(*) [16])( puVar3 + 7 ) = (undefined1[16])0x0;
      *(undefined4*)( puVar3 + 9 ) = 0;
      puVar3 = puVar4;
   }
 while ( puVar4 != (undefined8*)local_30 );
   local_30[0] = 0;
   local_ac8 = CONCAT44(fVar8 * fVar9, fVar5 * fVar9);
   uStack_ac0 = CONCAT44(fVar6, fVar7 * fVar9);
   cVar2 = PhysicsBody3D::move_and_collide((MotionParameters*)this, (MotionResult*)local_af8, SUB81(&local_a58, 0), true);
   if (cVar2 != '\0') {
      local_b00[0] = 0;
      _set_collision_direction(this, &local_a58, local_b00, 1);
      if ((char)local_b00[0] != '\0') {
         fVar6 = SQRT((float)local_a58 * (float)local_a58 + local_a58._4_4_ * local_a58._4_4_ + fStack_a50 * fStack_a50);
         if (fVar6 < *(float*)( this + 0x624 ) || fVar6 == *(float*)( this + 0x624 )) {
            local_a58 = 0;
            fVar9 = 0.0;
            fVar6 = 0.0;
            fStack_a50 = 0.0;
         }
 else {
            fVar6 = (float)local_a58 * *(float*)( this + 0x664 ) + *(float*)( this + 0x668 ) * local_a58._4_4_ + fStack_a50 * *(float*)( this + 0x66c );
            fStack_a50 = fVar6 * *(float*)( this + 0x66c );
            fVar9 = fVar6 * (float)*(undefined8*)( this + 0x664 );
            fVar6 = fVar6 * (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
            local_a58 = CONCAT44(fVar6, fVar9);
         }

         fStack_acc = fStack_a50 + fStack_acc;
         fStack_ad4 = fStack_ad4 + fVar9;
         fStack_ad0 = fStack_ad0 + fVar6;
         Node3D::set_global_transform((Transform3D*)this);
      }

   }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CharacterBody3D::apply_floor_snap() */void CharacterBody3D::apply_floor_snap(CharacterBody3D *this) {
   if (this[0x630] == (CharacterBody3D)0x0) {
      apply_floor_snap(this);
      return;
   }

   return;
}
/* CharacterBody3D::_snap_on_floor(bool, bool) */void CharacterBody3D::_snap_on_floor(CharacterBody3D *this, bool param_1, bool param_2) {
   if (( ( this[0x630] == (CharacterBody3D)0x0 ) && ( param_1 ) ) && ( !param_2 )) {
      apply_floor_snap(this);
      return;
   }

   return;
}
/* CharacterBody3D::_on_floor_if_snapped(bool, bool) */uint CharacterBody3D::_on_floor_if_snapped(CharacterBody3D *this, bool param_1, bool param_2) {
   float fVar1;
   undefined8 uVar2;
   uint uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   uint local_b00[2];
   undefined8 local_af8[3];
   undefined8 uStack_ae0;
   undefined8 uStack_ad0;
   undefined8 local_ac8;
   undefined8 uStack_ac0;
   undefined4 local_ab8;
   undefined1 local_ab4;
   undefined1 local_ab0[16];
   undefined1 local_aa0[16];
   undefined8 local_a90;
   undefined1 local_a88[16];
   undefined1 local_a78[16];
   undefined8 local_a68;
   undefined1 local_a60;
   undefined8 local_a58;
   undefined4 uStack_a50;
   undefined4 uStack_a4c;
   undefined4 uStack_a48;
   undefined4 uStack_a44;
   undefined8 uStack_a40;
   undefined4 local_a38;
   undefined8 auStack_a30[320];
   undefined4 local_30[4];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(float*)( this + 0x664 ) != 0.0 ) || ( *(float*)( this + 0x668 ) != 0.0 ) ) || ( uVar3 = 0 * (float*)( this + 0x66c ) != 0.0 )) {
      uVar3 = (uint)(byte)this[0x630];
      if (this[0x630] == (CharacterBody3D)0x0) {
         if (( param_1 ) && ( !param_2 )) {
            fVar1 = *(float*)( this + 0x624 );
            fVar6 = (float)( ( uint ) * (float*)( this + 0x664 ) ^ _LC161 );
            fVar9 = *(float*)( this + 0x658 );
            if (*(float*)( this + 0x658 ) <= fVar1) {
               fVar9 = fVar1;
            }

            fVar7 = (float)( *(uint*)( this + 0x66c ) ^ _LC161 );
            fVar8 = (float)( *(uint*)( this + 0x668 ) ^ _LC161 );
            Node3D::get_global_transform();
            uStack_ae0 = uStack_a40;
            local_ab8 = 4;
            local_a60 = 1;
            local_af8[0] = local_a58;
            local_ab4 = 1;
            local_a58 = 0;
            uStack_a50 = 0;
            uStack_a4c = 0;
            uStack_a48 = 0;
            uStack_a44 = 0;
            uStack_a40 = 0;
            local_a38 = 0;
            local_a90 = _LC37;
            local_a68 = _LC37;
            uStack_ad0 = auStack_a30[0];
            local_ab0 = (undefined1[16])0x0;
            local_aa0 = (undefined1[16])0x0;
            local_a88 = (undefined1[16])0x0;
            local_a78 = (undefined1[16])0x0;
            puVar4 = auStack_a30;
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
 while ( (undefined8*)local_30 != puVar5 );
            local_30[0] = 0;
            local_ac8 = CONCAT44(fVar8 * fVar9, fVar6 * fVar9);
            uStack_ac0 = CONCAT44(fVar1, fVar7 * fVar9);
            uVar3 = PhysicsBody3D::move_and_collide((MotionParameters*)this, (MotionResult*)local_af8, SUB81(&local_a58, 0), true);
            if ((char)uVar3 != '\0') {
               local_b00[0] = 0;
               _set_collision_direction(this, &local_a58, local_b00, 0);
               uVar3 = local_b00[0] & 0xff;
            }

            uVar2 = local_a88._0_8_;
            if ((void*)local_a88._0_8_ != (void*)0x0) {
               if (local_a68._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_a68 & 0xffffffff ) * 4 ) != 0) {
                     memset((void*)local_a78._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a68 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_a68 = local_a68 & 0xffffffff;
               }

               Memory::free_static((void*)uVar2, false);
               Memory::free_static((void*)local_a78._0_8_, false);
               Memory::free_static((void*)local_a88._8_8_, false);
               Memory::free_static((void*)local_a78._8_8_, false);
            }

            uVar2 = local_ab0._0_8_;
            if ((void*)local_ab0._0_8_ != (void*)0x0) {
               if (local_a90._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_a90 & 0xffffffff ) * 4 ) != 0) {
                     memset((void*)local_aa0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a90 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_a90 = local_a90 & 0xffffffff;
               }

               Memory::free_static((void*)uVar2, false);
               Memory::free_static((void*)local_aa0._0_8_, false);
               Memory::free_static((void*)local_ab0._8_8_, false);
               Memory::free_static((void*)local_aa0._8_8_, false);
            }

         }

      }
 else {
         uVar3 = 0;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CharacterBody3D::_set_platform_data(PhysicsServer3D::MotionCollision const&) */void CharacterBody3D::_set_platform_data(CharacterBody3D *this, MotionCollision *param_1) {
   undefined4 uVar1;
   long *plVar2;
   *(undefined8*)( this + 0x640 ) = *(undefined8*)( param_1 + 0x40 );
   *(undefined8*)( this + 0x648 ) = *(undefined8*)( param_1 + 0x38 );
   *(undefined8*)( this + 0x6ac ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined4*)( this + 0x6b4 ) = *(undefined4*)( param_1 + 0x20 );
   *(undefined8*)( this + 0x6b8 ) = *(undefined8*)( param_1 + 0x24 );
   *(undefined4*)( this + 0x6c0 ) = *(undefined4*)( param_1 + 0x2c );
   plVar2 = (long*)PhysicsServer3D::get_singleton();
   uVar1 = ( **(code**)( *plVar2 + 0x390 ) )(plVar2, *(undefined8*)( this + 0x640 ));
   *(undefined4*)( this + 0x63c ) = uVar1;
   return;
}
/* CharacterBody3D::get_slide_collision(int) const */undefined8 *CharacterBody3D::get_slide_collision(int param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   int in_EDX;
   undefined8 *puVar4;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined8 *puVar5;
   undefined8 *puVar6;
   byte bVar7;
   puVar5 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   bVar7 = 0;
   lVar1 = (long)in_EDX;
   lVar3 = *(long*)( in_RSI + 0x6f0 );
   if (in_EDX < 0) {
      if (lVar3 != 0) {
         lVar2 = *(long*)( lVar3 + -8 );
         goto LAB_001017ad;
      }

   }
 else if (lVar3 != 0) {
      lVar2 = *(long*)( lVar3 + -8 );
      if (lVar1 < lVar2) {
         puVar4 = (undefined8*)( lVar3 + lVar1 * 0xa30 );
         puVar6 = puVar5;
         for (lVar2 = 0x146; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
         }

         return puVar5;
      }

      goto LAB_001017ad;
   }

   lVar2 = 0;
   LAB_001017ad:_err_print_index_error("get_slide_collision", "scene/3d/physics/character_body_3d.cpp", 699, lVar1, lVar2, "p_bounce", "motion_results.size()", "", false, false);
   puVar4 = puVar5;
   for (lVar3 = 0x146; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (ulong)bVar7 * -2 + 1;
   }

   puVar4 = puVar5 + 5;
   do {
      *puVar4 = 0;
      puVar6 = puVar4 + 10;
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
      puVar4 = puVar6;
   }
 while ( puVar6 != puVar5 + 0x145 );
   *(undefined4*)( puVar5 + 0x145 ) = 0;
   return puVar5;
}
/* CharacterBody3D::_notification(int) */void CharacterBody3D::_notification(CharacterBody3D *this, int param_1) {
   long *plVar1;
   long lVar2;
   if (param_1 != 10) {
      return;
   }

   lVar2 = *(long*)( this + 0x6f0 );
   *(undefined4*)( this + 0x630 ) = 0;
   *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
   if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x6f0 );
         *(undefined8*)( this + 0x6f0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
 else {
         *(undefined8*)( this + 0x6f0 ) = 0;
      }

   }

   *(undefined8*)( this + 0x6ac ) = 0;
   *(undefined4*)( this + 0x6b4 ) = 0;
   *(undefined8*)( this + 0x6b8 ) = 0;
   *(undefined4*)( this + 0x6c0 ) = 0;
   return;
}
/* CharacterBody3D::_validate_property(PropertyInfo&) const */void CharacterBody3D::_validate_property(CharacterBody3D *this, PropertyInfo *param_1) {
   if (*(int*)( this + 0x628 ) != 1) {
      return;
   }

   _validate_property(param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CharacterBody3D::CharacterBody3D() */void CharacterBody3D::CharacterBody3D(CharacterBody3D *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   PhysicsBody3D::PhysicsBody3D((PhysicsBody3D*)this, 1);
   *(undefined4*)( this + 0x624 ) = 0x3a83126f;
   *(undefined***)this = &PTR__initialize_classv_0011efd8;
   *(undefined8*)( this + 0x630 ) = 0x101010000000000;
   uVar1 = _LC44;
   *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
   uVar3 = _UNK_0011fc98;
   uVar2 = __LC162;
   *(undefined8*)( this + 0x628 ) = 0;
   *(undefined8*)( this + 0x638 ) = 6;
   *(undefined8*)( this + 0x650 ) = uVar1;
   *(undefined8*)( this + 0x668 ) = 0x3f800000;
   for (int i = 0; i < 10; i++) {
      *(undefined8*)( this + ( 12*i + 1648 ) ) = 0;
      *(undefined4*)( this + ( 12*i + 1656 ) ) = 0;
   }

   *(undefined8*)( this + 0x6f0 ) = 0;
   *(undefined8*)( this + 0x658 ) = uVar2;
   *(undefined8*)( this + 0x660 ) = uVar3;
   *(undefined8*)( this + 0x700 ) = 0;
   return;
}
/* MethodBind* ClassDB::bind_method<MethodDefinition, Vector3 const& (CharacterBody3D::*)()
   const>(MethodDefinition, Vector3 const& (CharacterBody3D::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>(MethodDefinition *param_1, _func_Vector3_ptr *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<CharacterBody3D,Vector3_const&>(param_2);
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
/* MethodBind* ClassDB::bind_method<MethodDefinition, bool (CharacterBody3D::*)()
   const>(MethodDefinition, bool (CharacterBody3D::*)() const) [clone .isra.0] */MethodBind *ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>(MethodDefinition *param_1, _func_bool *param_2) {
   long lVar1;
   MethodBind *pMVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar2 = create_method_bind<CharacterBody3D,bool>(param_2);
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
/* CharacterBody3D::_bind_methods() */void CharacterBody3D::_bind_methods(void) {
   char cVar1;
   MethodBind *pMVar2;
   uint uVar3;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   char *local_d8;
   undefined8 local_d0;
   char *local_c8;
   undefined8 local_c0;
   long local_b8;
   undefined8 local_98;
   undefined4 local_90;
   Variant *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_c8, (char***)"move_and_slide", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,bool>(move_and_slide);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"apply_floor_snap", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D>(apply_floor_snap);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_velocity");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,Vector3_const&>(set_velocity);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_velocity", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_safe_margin");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(set_safe_margin);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_safe_margin", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(get_safe_margin);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_floor_stop_on_slope_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_floor_stop_on_slope_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_88 = (Variant*)0x10b81f;
   local_80 = 0;
   uVar3 = (uint)(Variant*)&local_78;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_floor_stop_on_slope_enabled", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,bool>(set_floor_stop_on_slope_enabled);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_floor_constant_speed_enabled");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,bool>(set_floor_constant_speed_enabled);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_floor_constant_speed_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_floor_constant_speed_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_floor_block_on_wall_enabled");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,bool>(set_floor_block_on_wall_enabled);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_floor_block_on_wall_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_floor_block_on_wall_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_88 = (Variant*)0x10b81f;
   local_80 = 0;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_slide_on_ceiling_enabled", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,bool>(set_slide_on_ceiling_enabled);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_slide_on_ceiling_enabled", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_slide_on_ceiling_enabled, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_88 = (Variant*)0x10b860;
   local_80 = 0;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_platform_floor_layers", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,unsigned_int>(set_platform_floor_layers);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_platform_floor_layers", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,unsigned_int>(get_platform_floor_layers);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_88 = (Variant*)0x10b860;
   local_80 = 0;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_platform_wall_layers", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,unsigned_int>(set_platform_wall_layers);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_platform_wall_layers", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,unsigned_int>(get_platform_wall_layers);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_max_slides", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,int>(get_max_slides);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_80 = 0;
   local_88 = (Variant*)0x10b8e3;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_max_slides", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,int>(set_max_slides);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_floor_max_angle", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(get_floor_max_angle);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_88 = (Variant*)0x10b902;
   local_80 = 0;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_floor_max_angle", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(set_floor_max_angle);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_floor_snap_length", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(get_floor_snap_length);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_80 = 0;
   local_88 = (Variant*)0x10b934;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_floor_snap_length", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(set_floor_snap_length);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_wall_min_slide_angle", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(get_wall_min_slide_angle);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_wall_min_slide_angle");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,float>(set_wall_min_slide_angle);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_up_direction", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_up_direction, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_up_direction");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,Vector3_const&>(set_up_direction);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHOD<char_const*>((char*)&local_c8, "set_motion_mode");
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,CharacterBody3D::MotionMode>(set_motion_mode);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_motion_mode", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,CharacterBody3D::MotionMode>(get_motion_mode);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_80 = 0;
   local_88 = (Variant*)0x10b9ae;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"set_platform_on_leave", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,CharacterBody3D::PlatformOnLeave>(set_platform_on_leave);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_platform_on_leave", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,CharacterBody3D::PlatformOnLeave>(get_platform_on_leave);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_floor", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_floor, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_floor_only", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_floor_only, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_ceiling", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_ceiling, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_ceiling_only", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_ceiling_only, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_wall", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_wall, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"is_on_wall_only", 0);
   ClassDB::bind_method<MethodDefinition,bool(CharacterBody3D::*)()const>((MethodDefinition*)&local_c8, is_on_wall_only, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_floor_normal", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_floor_normal, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_wall_normal", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_wall_normal, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_last_motion", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_last_motion, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_position_delta", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,Vector3>(get_position_delta);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_real_velocity", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_real_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_80 = 0;
   local_88 = (Variant*)0x10b6f9;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"get_floor_angle", uVar3);
   local_90 = 0;
   local_98 = _LC110;
   Variant::Variant((Variant*)&local_78, (Vector3*)&local_98);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_88 = (Variant*)&local_78;
   pMVar2 = create_method_bind<CharacterBody3D,float,Vector3_const&>(get_floor_angle);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, &local_88, 1);
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

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_platform_velocity", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_platform_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_platform_angular_velocity", 0);
   ClassDB::bind_method<MethodDefinition,Vector3_const & ( CharacterBody3D::* )()const>((MethodDefinition*)&local_c8, get_platform_angular_velocity, 0);
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_slide_collision_count", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,int>(get_slide_collision_count);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   local_80 = 0;
   local_88 = (Variant*)0x10baef;
   local_78 = &local_88;
   D_METHODP((char*)&local_c8, (char***)"get_slide_collision", uVar3);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,Ref<KinematicCollision3D>,int>(_get_slide_collision);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   D_METHODP((char*)&local_c8, (char***)"get_last_slide_collision", 0);
   local_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar2 = create_method_bind<CharacterBody3D,Ref<KinematicCollision3D>>(_get_last_slide_collision);
   ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_c8);
   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_f0 = 0;
   local_c8 = "Grounded,Floating";
   local_f8 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_f8);
   local_100 = 0;
   local_c8 = "motion_mode";
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (StrRange*)&local_100, 2, (StrRange*)&local_f8, 0x4006, (StrRange*)&local_f0);
   local_108 = 0;
   local_d0 = 0xf;
   local_d8 = "CharacterBody3D";
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "up_direction";
   local_100 = 0;
   local_c0 = 0xc;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 9, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "slide_on_ceiling";
   local_100 = 0;
   local_c0 = 0x10;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "suffix:m/s";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 10;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "velocity";
   local_100 = 0;
   local_c0 = 8;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 9, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 2, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e0 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "max_slides";
   local_100 = 0;
   local_c0 = 10;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 2, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "0,180,0.1,radians_as_degrees";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0x1c;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "wall_min_slide_angle";
   local_100 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (StrRange*)&local_100, 1, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   local_d8 = (char*)0x0;
   local_c8 = "floor_";
   local_c0 = 6;
   String::parse_latin1((StrRange*)&local_d8);
   local_c8 = "Floor";
   local_e0 = 0;
   local_c0 = 5;
   String::parse_latin1((StrRange*)&local_e0);
   local_c8 = "CharacterBody3D";
   local_e8 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)&local_e0, (String*)&local_d8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "floor_stop_on_slope";
   local_100 = 0;
   local_c0 = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "floor_constant_speed";
   local_100 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "floor_block_on_wall";
   local_100 = 0;
   local_c0 = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 1, (StrRange*)&local_100, 0, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "0,180,0.1,radians_as_degrees";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0x1c;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "floor_max_angle";
   local_100 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (StrRange*)&local_100, 1, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e0 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "0,1,0.01,or_greater,suffix:m";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0x1c;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "floor_snap_length";
   local_100 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (StrRange*)&local_100, 1, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   local_d8 = (char*)0x0;
   local_c8 = "platform_";
   local_c0 = 9;
   String::parse_latin1((StrRange*)&local_d8);
   local_c8 = "Moving Platform";
   local_e0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_e0);
   local_c8 = "CharacterBody3D";
   local_e8 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)&local_e0, (String*)&local_d8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "Add Velocity,Add Upward Velocity,Do Nothing";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0x2b;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "platform_on_leave";
   local_100 = 0;
   local_c0 = 0x11;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (StrRange*)&local_100, 2, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e0 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "platform_floor_layers";
   local_100 = 0;
   local_c0 = 0x15;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (StrRange*)&local_100, 0xb, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "platform_wall_layers";
   local_100 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (StrRange*)&local_100, 0xb, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   local_d8 = (char*)0x0;
   local_c8 = "";
   local_c0 = 0;
   String::parse_latin1((StrRange*)&local_d8);
   local_c8 = "Collision";
   local_e0 = 0;
   local_c0 = 9;
   String::parse_latin1((StrRange*)&local_e0);
   local_c8 = "CharacterBody3D";
   local_e8 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::add_property_group((StringName*)&local_c8, (String*)&local_e0, (String*)&local_d8, 0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   _scs_create((char*)&local_e0, true);
   _scs_create((char*)&local_e8, true);
   local_c8 = "0.001,256,0.001,suffix:m";
   local_f0 = 0;
   local_f8 = 0;
   local_c0 = 0x18;
   String::parse_latin1((StrRange*)&local_f8);
   local_c8 = "safe_margin";
   local_100 = 0;
   local_c0 = 0xb;
   String::parse_latin1((StrRange*)&local_100);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 3, (StrRange*)&local_100, 1, (StrRange*)&local_f8, 6, (StrRange*)&local_f0);
   local_d8 = "CharacterBody3D";
   local_108 = 0;
   local_d0 = 0xf;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_d8, (String*)&local_108, false);
   ClassDB::add_property((StringName*)&local_d8, (PropertyInfo*)&local_c8, (StringName*)&local_e8, (StringName*)&local_e0, -1);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_f0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_e8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "MOTION_MODE_GROUNDED", false);
   local_c8 = "MOTION_MODE_GROUNDED";
   local_e8 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_e8);
   GetTypeInfo<CharacterBody3D::MotionMode,void>::get_class_info((GetTypeInfo<CharacterBody3D::MotionMode,void>*)&local_c8);
   local_e0 = local_b8;
   local_b8 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "CharacterBody3D";
   local_f0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_e0, (StringName*)&local_d8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "MOTION_MODE_FLOATING", false);
   local_c8 = "MOTION_MODE_FLOATING";
   local_e8 = 0;
   local_c0 = 0x14;
   String::parse_latin1((StrRange*)&local_e8);
   GetTypeInfo<CharacterBody3D::MotionMode,void>::get_class_info((GetTypeInfo<CharacterBody3D::MotionMode,void>*)&local_c8);
   local_e0 = local_b8;
   local_b8 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "CharacterBody3D";
   local_f0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_e0, (StringName*)&local_d8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "PLATFORM_ON_LEAVE_ADD_VELOCITY", false);
   local_c8 = "PLATFORM_ON_LEAVE_ADD_VELOCITY";
   local_e8 = 0;
   local_c0 = 0x1e;
   String::parse_latin1((StrRange*)&local_e8);
   GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>::get_class_info((GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>*)&local_c8);
   local_e0 = local_b8;
   local_b8 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "CharacterBody3D";
   local_f0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_e0, (StringName*)&local_d8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY", false);
   local_c8 = "PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY";
   local_e8 = 0;
   local_c0 = 0x25;
   String::parse_latin1((StrRange*)&local_e8);
   GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>::get_class_info((GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>*)&local_c8);
   local_e0 = local_b8;
   local_b8 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "CharacterBody3D";
   local_f0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_e0, (StringName*)&local_d8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d8, "PLATFORM_ON_LEAVE_DO_NOTHING", false);
   local_c8 = "PLATFORM_ON_LEAVE_DO_NOTHING";
   local_e8 = 0;
   local_c0 = 0x1c;
   String::parse_latin1((StrRange*)&local_e8);
   GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>::get_class_info((GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>*)&local_c8);
   local_e0 = local_b8;
   local_b8 = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_c8 = "CharacterBody3D";
   local_f0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_c8, (String*)&local_f0, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_e0, (StringName*)&local_d8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Ref<KinematicCollision3D> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<KinematicCollision3D>>::_copy_on_write(CowData<Ref<KinematicCollision3D>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* CharacterBody3D::_get_slide_collision(int) */long *CharacterBody3D::_get_slide_collision(int param_1) {
   undefined8 uVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   RefCounted *this;
   RefCounted *pRVar5;
   RefCounted *pRVar6;
   long lVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   int in_EDX;
   long lVar13;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined8 *puVar14;
   Object *pOVar15;
   Object *pOVar16;
   long *plVar17;
   ulong uVar18;
   undefined8 *puVar19;
   byte bVar20;
   Object *local_50;
   CowData<Ref<KinematicCollision3D>> *local_48;
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_0000003c, param_1);
   bVar20 = 0;
   lVar13 = (long)in_EDX;
   lVar10 = *(long*)( in_RSI + 0x6f0 );
   if (in_EDX < 0) {
      if (lVar10 != 0) {
         lVar10 = *(long*)( lVar10 + -8 );
         goto LAB_00105564;
      }

   }
 else if (lVar10 != 0) {
      lVar10 = *(long*)( lVar10 + -8 );
      if (lVar10 <= lVar13) goto LAB_00105564;
      puVar19 = *(undefined8**)( in_RSI + 0x700 );
      if (puVar19 == (undefined8*)0x0) {
         uVar18 = ( ulong )(in_EDX + 1);
         CowData<Ref<KinematicCollision3D>>::_copy_on_write((CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ));
         uVar11 = 0;
         LAB_001054c9:uVar12 = uVar18 * 8 - 1;
         uVar12 = uVar12 | uVar12 >> 1;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 | uVar12 >> 8;
         uVar12 = uVar12 | uVar12 >> 0x10;
         local_50 = (Object*)( ( uVar12 | uVar12 >> 0x20 ) + 1 );
         if ((long)uVar11 < (long)uVar18) {
            LAB_0010551e:local_48 = (CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 );
            if (uVar11 == 0) {
               puVar14 = (undefined8*)Memory::alloc_static((long)local_50 + 0x10, false);
               if (puVar14 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  puVar19 = *(undefined8**)( in_RSI + 0x700 );
                  goto LAB_0010554a;
               }

               puVar19 = puVar14 + 2;
               *puVar14 = 1;
               puVar14[1] = 0;
               *(undefined8**)( in_RSI + 0x700 ) = puVar19;
               lVar10 = 0;
               LAB_001053b0:memset(puVar19 + lVar10, 0, ( uVar18 - lVar10 ) * 8);
               goto LAB_001053cf;
            }

            iVar4 = CowData<Ref<KinematicCollision3D>>::_realloc(local_48, (long)local_50);
            if (iVar4 == 0) {
               LAB_00105397:puVar19 = *(undefined8**)( in_RSI + 0x700 );
               if (puVar19 == (undefined8*)0x0) goto code_r0x0010c4d8;
               lVar10 = puVar19[-1];
               if (lVar10 < (long)uVar18) goto LAB_001053b0;
               goto LAB_001053cf;
            }

            puVar19 = *(undefined8**)( in_RSI + 0x700 );
            LAB_0010554a:uVar11 = 0;
            if (puVar19 == (undefined8*)0x0) goto LAB_001053e0;
         }
 else {
            local_40 = 0;
            LAB_001055c1:puVar19 = *(undefined8**)( in_RSI + 0x700 );
            uVar11 = uVar18;
            if (puVar19 == (undefined8*)0x0) {
               code_r0x0010c4d8:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            while (local_48 = (CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ),uVar11 < (ulong)puVar19[-1]) {
               lVar10 = puVar19[uVar11];
               if (lVar10 == 0) {
                  uVar11 = uVar11 + 1;
               }
 else {
                  cVar3 = RefCounted::unreference();
                  iVar4 = (int)lVar10;
                  if (cVar3 != '\0') {
                     pOVar16 = (Object*)puVar19[uVar11];
                     pOVar15 = pOVar16;
                     cVar3 = predelete_handler(pOVar16);
                     iVar4 = (int)pOVar15;
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar16 + 0x140 ) )(pOVar16);
                        Memory::free_static(pOVar16, false);
                        iVar4 = (int)pOVar16;
                     }

                  }

                  puVar19 = *(undefined8**)( in_RSI + 0x700 );
                  uVar11 = uVar11 + 1;
                  if (puVar19 == (undefined8*)0x0) {
                     plVar9 = (long*)_get_slide_collision(iVar4);
                     return plVar9;
                  }

               }

            }
;
            if ((Object*)local_40 != local_50) {
               iVar4 = CowData<Ref<KinematicCollision3D>>::_realloc(local_48, (long)local_50);
               puVar19 = *(undefined8**)( in_RSI + 0x700 );
               if (iVar4 != 0) goto LAB_0010554a;
               if (puVar19 == (undefined8*)0x0) {
                  plVar9 = (long*)FUN_0010c4e2();
                  return plVar9;
               }

            }

            LAB_001053cf:puVar19[-1] = uVar18;
         }

         uVar11 = puVar19[-1];
         if ((long)uVar11 <= lVar13) goto LAB_001053e0;
      }
 else {
         uVar11 = puVar19[-1];
         if ((long)uVar11 <= lVar13) {
            uVar18 = ( ulong )(in_EDX + 1);
            if (uVar11 == uVar18) goto LAB_001053e0;
            CowData<Ref<KinematicCollision3D>>::_copy_on_write((CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ));
            if (uVar11 * 8 == 0) goto LAB_001054c9;
            uVar12 = uVar18 * 8 - 1;
            uVar8 = uVar11 * 8 - 1;
            uVar12 = uVar12 >> 1 | uVar12;
            uVar12 = uVar12 >> 2 | uVar12;
            uVar12 = uVar12 >> 4 | uVar12;
            uVar12 = uVar12 >> 8 | uVar12;
            uVar12 = uVar12 >> 0x10 | uVar12;
            uVar12 = uVar12 >> 0x20 | uVar12;
            local_50 = (Object*)( uVar12 + 1 );
            uVar8 = uVar8 | uVar8 >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            uVar8 = uVar8 | uVar8 >> 0x20;
            if ((long)uVar11 < (long)uVar18) {
               if (uVar8 != uVar12) goto LAB_0010551e;
               goto LAB_00105397;
            }

            local_40 = uVar8 + 1;
            goto LAB_001055c1;
         }

      }

      if (puVar19[lVar13] == 0) {
         lVar10 = *(long*)( in_RSI + 0x700 );
         LAB_00105037:lVar10 = *(long*)( lVar10 + -8 );
         if (lVar10 <= lVar13) goto LAB_00104feb;
         CowData<Ref<KinematicCollision3D>>::_copy_on_write((CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ));
         lVar10 = *(long*)( in_RSI + 0x700 );
         this(RefCounted * operator_new(3000, ""));
         puVar19 = (undefined8*)( lVar10 + lVar13 * 8 );
         pRVar5 = this;
         for (lVar10 = 0x177; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined8*)pRVar5 = 0;
            pRVar5 = pRVar5 + (ulong)bVar20 * -0x10 + 8;
         }

         RefCounted::RefCounted(this);
         *(undefined8*)( this + 0x180 ) = 0;
         for (int i = 0; i < 3; i++) {
            *(undefined8*)( this + ( 12*i + 392 ) ) = 0;
            *(undefined4*)( this + ( 12*i + 400 ) ) = 0;
         }

         *(undefined***)this = &PTR__initialize_classv_0011ee78;
         pRVar5 = this + 0x1b0;
         do {
            *(undefined8*)pRVar5 = 0;
            pRVar6 = pRVar5 + 0x50;
            *(undefined4*)( pRVar5 + 8 ) = 0;
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( pRVar5 + ( 12*i + 12 ) ) = 0;
               *(undefined4*)( pRVar5 + ( 12*i + 20 ) ) = 0;
            }

            *(undefined4*)( pRVar5 + 0x30 ) = 0;
            *(undefined4*)( pRVar5 + 0x34 ) = 0;
            *(undefined1(*) [16])( pRVar5 + 0x38 ) = (undefined1[16])0x0;
            *(undefined4*)( pRVar5 + 0x48 ) = 0;
            pRVar5 = pRVar6;
         }
 while ( pRVar6 != this + 0xbb0 );
         *(undefined4*)( this + 0xbb0 ) = 0;
         postinitialize_handler((Object*)this);
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') {
            pOVar16 = (Object*)*puVar19;
            if (pOVar16 != (Object*)0x0) {
               *puVar19 = 0;
               cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
                  ( **(code**)( *(long*)pOVar16 + 0x140 ) )(pOVar16);
                  Memory::free_static(pOVar16, false);
               }

            }

         }
 else {
            pOVar16 = (Object*)*puVar19;
            local_50 = pOVar16;
            if (this != (RefCounted*)pOVar16) {
               *puVar19 = this;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *puVar19 = 0;
               }

               local_50 = (Object*)this;
               if (( ( pOVar16 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar16 + 0x140 ))(pOVar16);
               Memory::free_static(pOVar16, false);
            }

         }

         cVar3 = RefCounted::unreference();
         if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
            ( **(code**)( *(long*)local_50 + 0x140 ) )(local_50);
            Memory::free_static(local_50, false);
         }

      }

      uVar1 = *(undefined8*)( in_RSI + 0x60 );
      if (*(long*)( in_RSI + 0x700 ) != 0) {
         lVar10 = *(long*)( *(long*)( in_RSI + 0x700 ) + -8 );
         if (lVar10 <= lVar13) goto LAB_00104feb;
         CowData<Ref<KinematicCollision3D>>::_copy_on_write((CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ));
         *(undefined8*)( *(long*)( *(long*)( in_RSI + 0x700 ) + lVar13 * 8 ) + 0x180 ) = uVar1;
         goto LAB_001051cc;
      }

   }
 else {
      iVar4 = RefCounted::get_reference_count();
      if (iVar4 < 2) {
         LAB_001051cc:lVar10 = *(long*)( in_RSI + 0x6f0 );
         if (lVar10 != 0) {
            uVar11 = *(ulong*)( lVar10 + -8 );
            if ((long)uVar11 <= lVar13) goto LAB_001053e0;
            puVar19 = (undefined8*)( lVar10 + lVar13 * 0xa30 );
            if (*(long*)( in_RSI + 0x700 ) == 0) goto LAB_00104fe8;
            lVar10 = *(long*)( *(long*)( in_RSI + 0x700 ) + -8 );
            if (lVar10 <= lVar13) goto LAB_00104feb;
            CowData<Ref<KinematicCollision3D>>::_copy_on_write((CowData<Ref<KinematicCollision3D>>*)( in_RSI + 0x700 ));
            lVar10 = *(long*)( in_RSI + 0x700 );
            plVar17 = (long*)( lVar13 * 8 + lVar10 );
            lVar7 = *plVar17;
            *(undefined8*)( lVar7 + 0x188 ) = *puVar19;
            *(undefined8*)( lVar7 + 0xbac ) = *(undefined8*)( (long)puVar19 + 0xa24 );
            puVar14 = (undefined8*)( lVar7 + 400U & 0xfffffffffffffff8 );
            lVar7 = ( lVar7 + 0x188 ) - (long)puVar14;
            puVar19 = (undefined8*)( (long)puVar19 - lVar7 );
            for (uVar11 = ( ulong )((int)lVar7 + 0xa2cU >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
               *puVar14 = *puVar19;
               puVar19 = puVar19 + (ulong)bVar20 * -2 + 1;
               puVar14 = puVar14 + (ulong)bVar20 * -2 + 1;
            }

            if (lVar10 != 0) {
               uVar11 = *(ulong*)( lVar10 + -8 );
               if (lVar13 < (long)uVar11) {
                  *plVar9 = 0;
                  lVar10 = *plVar17;
                  if (lVar10 == 0) {
                     return plVar9;
                  }

                  *plVar9 = lVar10;
                  cVar3 = RefCounted::reference();
                  if (cVar3 != '\0') {
                     return plVar9;
                  }

                  *plVar9 = 0;
                  return plVar9;
               }

               goto LAB_001053e0;
            }

         }

         uVar11 = 0;
         LAB_001053e0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, uVar11, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar10 = *(long*)( in_RSI + 0x700 );
      if (lVar10 != 0) goto LAB_00105037;
   }

   LAB_00104fe8:lVar10 = 0;
   LAB_00104feb:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar13, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
lVar10 = 0;LAB_00105564:_err_print_index_error("_get_slide_collision", "scene/3d/physics/character_body_3d.cpp", 0x2c0, lVar13, lVar10, "p_bounce", "motion_results.size()", "", false, false);*plVar9 = 0;return plVar9;}/* CharacterBody3D::_get_last_slide_collision() */void CharacterBody3D::_get_last_slide_collision(void) {
   long lVar1;
   long in_RSI;
   int in_EDI;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x6f0 ) == 0 ) || ( *(long*)( *(long*)( in_RSI + 0x6f0 ) + -8 ) == 0 )) {
      *(undefined8*)CONCAT44(in_register_0000003c, in_EDI) = 0;
   }
 else {
      _get_slide_collision(in_EDI);
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<PhysicsServer3D::MotionResult>::push_back(PhysicsServer3D::MotionResult) [clone .isra.0]
    */void Vector<PhysicsServer3D::MotionResult>::push_back(long param_1) {
   int iVar1;
   undefined8 *puVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   undefined8 *puVar6;
   byte bVar7;
   char *in_stack_00000008;
   undefined *in_stack_00000010;
   undefined8 in_stack_00000a2c;
   bVar7 = 0;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar5 = 1;
   }
 else {
      lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<PhysicsServer3D::MotionResult>::resize<false>((CowData<PhysicsServer3D::MotionResult>*)( param_1 + 8 ), lVar5);
   if (iVar1 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar5 + -1;
         if (-1 < lVar4) {
            CowData<PhysicsServer3D::MotionResult>::_copy_on_write((CowData<PhysicsServer3D::MotionResult>*)( param_1 + 8 ));
            puVar2 = (undefined8*)( lVar4 * 0xa30 + *(long*)( param_1 + 8 ) );
            *puVar2 = in_stack_00000008;
            *(undefined8*)( (long)puVar2 + 0xa24 ) = in_stack_00000a2c;
            lVar5 = (long)puVar2 - (long)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
            puVar6 = (undefined8*)( (long)&stack0x00000008 - lVar5 );
            puVar2 = (undefined8*)( ( ulong )(puVar2 + 1) & 0xfffffffffffffff8 );
            for (uVar3 = ( ulong )((int)lVar5 + 0xa2cU >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
               *puVar2 = *puVar6;
               puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
               puVar2 = puVar2 + (ulong)bVar7 * -2 + 1;
            }

            return;
         }

      }

      in_stack_00000010 = &_LC26;
      in_stack_00000008 = "size()";
      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar5, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CharacterBody3D::_move_and_slide_floating(double) */void CharacterBody3D::_move_and_slide_floating(CharacterBody3D *this, double param_1) {
   undefined4 uVar1;
   bool bVar2;
   undefined8 uVar3;
   char cVar4;
   undefined8 *puVar5;
   long lVar6;
   int iVar7;
   undefined8 *puVar8;
   long in_FS_OFFSET;
   byte bVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   double dVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   undefined8 local_15f8[323];
   undefined8 uStack_be0;
   undefined8 uStack_bd8;
   undefined *puStack_bd0;
   undefined8 *local_bc0;
   MotionResult *local_bb8;
   StrRange *local_bb0;
   Vector3 *local_ba8;
   float local_b9c;
   float local_b98;
   float local_b94;
   float local_b90;
   float local_b8c;
   undefined4 local_b84;
   Vector3 local_b80[8];
   CowData<char32_t> local_b78[8];
   undefined8 local_b70;
   char *local_b68;
   undefined8 local_b60;
   undefined8 local_b58;
   float local_b50;
   undefined8 local_b24;
   float local_b1c;
   undefined8 local_b18;
   undefined8 uStack_b10;
   undefined8 local_b08;
   undefined8 uStack_b00;
   undefined8 local_af8;
   undefined8 uStack_af0;
   undefined8 local_ae8;
   float local_ae0;
   undefined4 local_adc;
   undefined4 local_ad8;
   undefined1 local_ad4;
   undefined1 local_ad0[16];
   undefined1 local_ac0[16];
   undefined8 local_ab0;
   undefined1 local_aa8[16];
   undefined1 local_a98[16];
   undefined8 local_a88;
   undefined1 local_a80;
   undefined8 local_a78;
   float fStack_a70;
   float fStack_a6c;
   float fStack_a68;
   float fStack_a64;
   undefined8 uStack_a60;
   undefined4 local_a58;
   undefined4 uStack_a54;
   undefined8 auStack_a50[320];
   undefined4 local_50[4];
   long local_40;
   bVar9 = 0;
   fVar10 = (float)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x67c ) = 0;
   *(undefined4*)( this + 0x684 ) = 0;
   local_b50 = *(float*)( this + 0x678 ) * fVar10;
   *(undefined8*)( this + 0x6ac ) = 0;
   local_b58 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) * fVar10, (float)*(undefined8*)( this + 0x670 ) * fVar10);
   *(undefined4*)( this + 0x6b4 ) = 0;
   *(undefined8*)( this + 0x6b8 ) = 0;
   *(undefined4*)( this + 0x6c0 ) = 0;
   *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
   if (0 < *(int*)( this + 0x638 )) {
      local_bc0 = auStack_a50;
      iVar7 = 0;
      local_bb8 = (MotionResult*)&local_b18;
      bVar2 = true;
      do {
         uVar1 = *(undefined4*)( this + 0x624 );
         puStack_bd0 = (undefined*)0x1059fb;
         Node3D::get_global_transform();
         uStack_b00 = uStack_a60;
         uStack_b10 = CONCAT44(fStack_a6c, fStack_a70);
         local_b08 = CONCAT44(fStack_a64, fStack_a68);
         local_ae8 = local_b58;
         local_b18 = local_a78;
         local_af8 = CONCAT44(uStack_a54, local_a58);
         local_ae0 = local_b50;
         local_ad8 = 1;
         local_ad4 = 0;
         local_a80 = 1;
         local_a78 = 0;
         fStack_a70 = 0.0;
         fStack_a6c = 0.0;
         fStack_a68 = 0.0;
         fStack_a64 = 0.0;
         uStack_a60 = 0;
         local_a58 = 0;
         local_ab0 = _LC37;
         local_a88 = _LC37;
         uStack_af0 = auStack_a50[0];
         local_ad0 = (undefined1[16])0x0;
         local_ac0 = (undefined1[16])0x0;
         local_aa8 = (undefined1[16])0x0;
         local_a98 = (undefined1[16])0x0;
         puVar5 = local_bc0;
         do {
            *puVar5 = 0;
            puVar8 = puVar5 + 10;
            *(undefined4*)( puVar5 + 1 ) = 0;
            *(undefined8*)( (long)puVar5 + 0xc ) = 0;
            *(undefined4*)( (long)puVar5 + 0x14 ) = 0;
            puVar5[3] = 0;
            *(undefined4*)( puVar5 + 4 ) = 0;
            *(undefined8*)( (long)puVar5 + 0x24 ) = 0;
            *(undefined4*)( (long)puVar5 + 0x2c ) = 0;
            *(undefined4*)( puVar5 + 6 ) = 0;
            *(undefined4*)( (long)puVar5 + 0x34 ) = 0;
            *(undefined1(*) [16])( puVar5 + 7 ) = (undefined1[16])0x0;
            *(undefined4*)( puVar5 + 9 ) = 0;
            puVar5 = puVar8;
         }
 while ( puVar8 != (undefined8*)local_50 );
         local_50[0] = 0;
         puStack_bd0 = (undefined*)0x105b6d;
         local_adc = uVar1;
         cVar4 = PhysicsBody3D::move_and_collide((MotionParameters*)this, local_bb8, SUB81(&local_a78, 0), false);
         *(undefined8*)( this + 0x6a0 ) = local_a78;
         *(float*)( this + 0x6a8 ) = fStack_a70;
         if (cVar4 == '\0') {
            LAB_0010620a:uVar3 = local_aa8._0_8_;
            if ((void*)local_aa8._0_8_ != (void*)0x0) {
               if (local_a88._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) != 0) {
                     puStack_bd0 = (undefined*)0x10624e;
                     memset((void*)local_a98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_a88 = local_a88 & 0xffffffff;
               }

               puStack_bd0 = (undefined*)0x106263;
               Memory::free_static((void*)uVar3, false);
               puStack_bd0 = (undefined*)0x106272;
               Memory::free_static((void*)local_a98._0_8_, false);
               puStack_bd0 = (undefined*)0x106281;
               Memory::free_static((void*)local_aa8._8_8_, false);
               puStack_bd0 = (undefined*)0x106290;
               Memory::free_static((void*)local_a98._8_8_, false);
            }

            uVar3 = local_ad0._0_8_;
            if ((void*)local_ad0._0_8_ != (void*)0x0) {
               if (local_ab0._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) != 0) {
                     puStack_bd0 = (undefined*)0x1062d8;
                     memset((void*)local_ac0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_ab0 = local_ab0 & 0xffffffff;
               }

               puStack_bd0 = (undefined*)0x1062ed;
               Memory::free_static((void*)uVar3, false);
               puStack_bd0 = (undefined*)0x1062fc;
               Memory::free_static((void*)local_ac0._0_8_, false);
               puStack_bd0 = (undefined*)0x10630b;
               Memory::free_static((void*)local_ad0._8_8_, false);
               puStack_bd0 = (undefined*)0x10631a;
               Memory::free_static((void*)local_ac0._8_8_, false);
            }

            break;
         }

         puVar5 = &local_a78;
         puVar8 = local_15f8;
         for (lVar6 = 0x145; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar8 = *puVar5;
            puVar5 = puVar5 + (ulong)bVar9 * -2 + 1;
            puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
         }

         *(undefined4*)puVar8 = *(undefined4*)puVar5;
         Vector<PhysicsServer3D::MotionResult>::push_back(this + 0x6e8);
         local_b84 = 0;
         local_b68 = (char*)CONCAT44(local_b68._4_4_, 0x10101);
         puStack_bd0 = (undefined*)0x105bef;
         _set_collision_direction(this, &local_a78, &local_b84);
         puStack_bd0 = (undefined*)0x105bfc;
         cVar4 = Vector3::is_zero_approx();
         if (cVar4 != '\0') {
            local_b58 = 0;
            local_b50 = 0.0;
            goto LAB_0010620a;
         }

         fVar10 = *(float*)( this + 0x660 );
         fVar12 = *(float*)( this + 0x688 );
         fVar14 = *(float*)( this + 0x68c );
         fVar16 = *(float*)( this + 0x690 );
         if (fVar10 == 0.0) {
            LAB_00105d36:if (bVar2) {
               fVar10 = fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16;
               if (( fVar10 == (float)_LC6 ) || ( ABS(fVar10 - (float)_LC6) < _LC42 )) {
                  fVar13 = fStack_a6c * fVar12 + fStack_a68 * fVar14 + fStack_a64 * fVar16;
                  fVar10 = fStack_a68 - fVar14 * fVar13;
                  fVar14 = fStack_a64 - fVar16 * fVar13;
                  fVar16 = fStack_a6c - fVar13 * fVar12;
                  fVar12 = fVar16 * fVar16 + fVar10 * fVar10 + fVar14 * fVar14;
                  if (fVar12 == 0.0) goto LAB_00105e16;
                  fVar12 = SQRT(fVar12);
                  fVar14 = fVar14 / fVar12;
                  fVar16 = fVar16 / fVar12;
                  fVar10 = fVar10 / fVar12;
               }
 else {
                  local_b70 = 0;
                  local_b68 = " must be normalized.";
                  local_bb0 = (StrRange*)&local_b70;
                  local_b60 = 0x14;
                  puStack_bd0 = (undefined*)0x1064c3;
                  String::parse_latin1(local_bb0);
                  local_ba8 = local_b80;
                  puStack_bd0 = (undefined*)0x1064dd;
                  Vector3::operator_cast_to_String(local_ba8);
                  puStack_bd0 = (undefined*)0x1064f1;
                  operator+((char *)
                  local_b78,(String*)"The normal Vector3 ";
                  puStack_bd0 = (undefined*)0x106501;
                  String::operator +((String*)&local_b68, (String*)local_b78);
                  uStack_bd8 = 0;
                  uStack_be0 = 0x10652c;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", (String*)&local_b68, 0);
                  uStack_be0 = 0x106534;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b68);
                  uStack_be0 = 0x10653c;
                  CowData<char32_t>::_unref(local_b78);
                  uStack_be0 = 0x106546;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_ba8);
                  uStack_be0 = 0x106550;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_bb0);
                  LAB_00105e16:fVar14 = 0.0;
                  fVar10 = 0.0;
                  fVar16 = 0.0;
               }

               fVar12 = SQRT(local_b50 * local_b50 + (float)local_b58 * (float)local_b58 + local_b58._4_4_ * local_b58._4_4_) - SQRT((float)local_a78 * (float)local_a78 + local_a78._4_4_ * local_a78._4_4_ + fStack_a70 * fStack_a70);
               local_b50 = fVar14 * fVar12;
               fVar10 = fVar10 * fVar12;
               fVar12 = fVar12 * fVar16;
            }
 else {
               fVar10 = fVar12 * fVar12 + fVar14 * fVar14 + fVar16 * fVar16;
               if (( fVar10 == (float)_LC6 ) || ( ABS(fVar10 - (float)_LC6) < _LC42 )) {
                  fVar13 = fStack_a6c * fVar12 + fStack_a68 * fVar14 + fStack_a64 * fVar16;
                  local_b50 = fStack_a64 - fVar16 * fVar13;
                  fVar10 = fStack_a68 - fVar14 * fVar13;
                  fVar12 = fStack_a6c - fVar13 * fVar12;
               }
 else {
                  local_b70 = 0;
                  local_b68 = " must be normalized.";
                  local_bb0 = (StrRange*)&local_b70;
                  local_b60 = 0x14;
                  puStack_bd0 = (undefined*)0x1063e7;
                  String::parse_latin1(local_bb0);
                  local_ba8 = local_b80;
                  puStack_bd0 = (undefined*)0x106401;
                  Vector3::operator_cast_to_String(local_ba8);
                  puStack_bd0 = (undefined*)0x106415;
                  operator+((char *)
                  local_b78,(String*)"The normal Vector3 ";
                  puStack_bd0 = (undefined*)0x106425;
                  String::operator +((String*)&local_b68, (String*)local_b78);
                  uStack_bd8 = 0;
                  uStack_be0 = 0x106450;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", (String*)&local_b68, 0);
                  uStack_be0 = 0x106458;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b68);
                  uStack_be0 = 0x106460;
                  CowData<char32_t>::_unref(local_b78);
                  uStack_be0 = 0x10646a;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_ba8);
                  uStack_be0 = 0x106474;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_bb0);
                  local_b50 = 0.0;
                  fVar10 = 0.0;
                  fVar12 = 0.0;
               }

            }

            fVar13 = *(float*)( this + 0x670 );
            fVar18 = *(float*)( this + 0x674 );
            fVar17 = *(float*)( this + 0x678 );
            local_b58 = CONCAT44(fVar10, fVar12);
         }
 else {
            fVar13 = *(float*)( this + 0x670 );
            fVar18 = *(float*)( this + 0x674 );
            fVar17 = *(float*)( this + 0x678 );
            fVar11 = fVar13 * fVar13 + fVar18 * fVar18 + fVar17 * fVar17;
            if (fVar11 == 0.0) {
               fVar11 = fVar14 * _LC161 + fVar12 * _LC161 + _LC161 * fVar16;
               LAB_00105cb2:local_ba8 = (Vector3*)CONCAT44(local_ba8._4_4_, fVar13);
               local_bb0 = (StrRange*)CONCAT44(local_bb0._4_4_, fVar10);
               puStack_bd0 = (undefined*)0x105ce3;
               local_b9c = fVar18;
               local_b98 = fVar17;
               local_b94 = fVar12;
               local_b90 = fVar14;
               local_b8c = fVar16;
               fVar12 = acosf(fVar11);
               fVar17 = local_b98;
               fVar13 = local_ba8._0_4_;
               fVar10 = local_bb0._0_4_;
               dVar15 = (double)fVar12;
               fVar16 = local_b8c;
               fVar14 = local_b90;
               fVar12 = local_b94;
               fVar18 = local_b9c;
            }
 else {
               fVar11 = SQRT(fVar11);
               fVar11 = ( (float)( ( uint )(fVar18 / fVar11) ^ (uint)_LC161 ) * fVar14 - ( fVar13 / fVar11 ) * fVar12 ) - ( fVar17 / fVar11 ) * fVar16;
               dVar15 = _LC29;
               if (_LC5 <= fVar11) {
                  if (fVar11 <= (float)_LC6) goto LAB_00105cb2;
                  dVar15 = 0.0;
               }

            }

            if ((double)fVar10 + _LC31 <= dVar15) goto LAB_00105d36;
            local_b58 = 0;
            local_b50 = 0.0;
            if ((double)SQRT((float)local_a78 * (float)local_a78 + local_a78._4_4_ * local_a78._4_4_ + fStack_a70 * fStack_a70) < (double)*(float*)( this + 0x624 ) + __LC155) {
               puStack_bd0 = (undefined*)0x106332;
               Node3D::get_global_transform();
               local_b24 = CONCAT44((float)( (ulong)local_b24 >> 0x20 ) - (float)( (ulong)local_a78 >> 0x20 ), (float)local_b24 - (float)local_a78);
               local_b1c = local_b1c - fStack_a70;
               puStack_bd0 = (undefined*)0x106375;
               Node3D::set_global_transform((Transform3D*)this);
               fVar13 = *(float*)( this + 0x670 );
               fVar18 = *(float*)( this + 0x674 );
               fVar17 = *(float*)( this + 0x678 );
               fVar10 = local_b58._4_4_;
               fVar12 = (float)local_b58;
            }
 else {
               fVar10 = 0.0;
               fVar12 = 0.0;
            }

         }

         if (fVar12 * fVar13 + fVar10 * fVar18 + local_b50 * fVar17 <= 0.0) {
            local_b58 = 0;
            local_b50 = 0.0;
         }

         puStack_bd0 = (undefined*)0x105efe;
         cVar4 = Vector3::is_zero_approx();
         if (cVar4 != '\0') goto LAB_0010620a;
         uVar3 = local_aa8._0_8_;
         if ((void*)local_aa8._0_8_ != (void*)0x0) {
            if (local_a88._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) != 0) {
                  puStack_bd0 = (undefined*)0x105f4d;
                  memset((void*)local_a98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) * 4);
               }

               local_a88 = local_a88 & 0xffffffff;
            }

            puStack_bd0 = (undefined*)0x105f62;
            Memory::free_static((void*)uVar3, false);
            puStack_bd0 = (undefined*)0x105f71;
            Memory::free_static((void*)local_a98._0_8_, false);
            puStack_bd0 = (undefined*)0x105f80;
            Memory::free_static((void*)local_aa8._8_8_, false);
            puStack_bd0 = (undefined*)0x105f8f;
            Memory::free_static((void*)local_a98._8_8_, false);
         }

         uVar3 = local_ad0._0_8_;
         if ((void*)local_ad0._0_8_ != (void*)0x0) {
            if (local_ab0._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) != 0) {
                  puStack_bd0 = (undefined*)0x105fd3;
                  memset((void*)local_ac0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) * 4);
               }

               local_ab0 = local_ab0 & 0xffffffff;
            }

            puStack_bd0 = (undefined*)0x105fe8;
            Memory::free_static((void*)uVar3, false);
            puStack_bd0 = (undefined*)0x105ff7;
            Memory::free_static((void*)local_ac0._0_8_, false);
            puStack_bd0 = (undefined*)0x106006;
            Memory::free_static((void*)local_ad0._8_8_, false);
            puStack_bd0 = (undefined*)0x106015;
            Memory::free_static((void*)local_ac0._8_8_, false);
         }

         iVar7 = iVar7 + 1;
         bVar2 = false;
      }
 while ( iVar7 < *(int*)( this + 0x638 ) );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      puStack_bd0 = &UNK_0010655e;
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CharacterBody3D::_move_and_slide_grounded(double, bool) */void CharacterBody3D::_move_and_slide_grounded(CharacterBody3D *this, double param_1, bool param_2) {
   bool bVar1;
   ulong uVar2;
   char *pcVar3;
   char cVar4;
   byte bVar5;
   byte bVar6;
   undefined8 *puVar7;
   char *pcVar8;
   long lVar9;
   undefined7 in_register_00000031;
   undefined8 *puVar10;
   CharacterBody3D CVar11;
   int iVar12;
   long in_FS_OFFSET;
   byte bVar13;
   float fVar15;
   undefined1 auVar14[16];
   float fVar16;
   float fVar17;
   CowData<char32_t> *pCVar18;
   undefined8 uVar19;
   undefined1 auVar20[16];
   float fVar21;
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   float fVar24;
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   float fVar29;
   float fVar30;
   float fVar32;
   undefined8 uVar31;
   float fVar33;
   undefined8 local_1678[323];
   undefined8 uStack_c60;
   undefined8 uStack_c58;
   undefined *puStack_c50;
   undefined8 *local_c48;
   CowData<char32_t> *local_c40;
   CowData<char32_t> *local_c38;
   CowData<char32_t> *local_c30;
   MotionResult *local_c28;
   undefined8 *local_c20;
   byte local_c15;
   float local_c14;
   float local_c10;
   float local_c0c;
   CharacterBody3D *local_c08;
   CowData<char32_t> *local_c00;
   String *local_bf8;
   uint local_bf0;
   float local_bec;
   float local_be8;
   float fStack_be4;
   undefined8 local_be0;
   float local_bd8;
   bool local_bd2;
   byte local_bd1;
   float local_bd0;
   float local_bcc;
   float local_bc8;
   float fStack_bc4;
   char *local_bc0;
   float local_bb8;
   undefined4 local_bb4;
   char *local_bb0;
   char *local_ba8;
   char *local_ba0;
   undefined4 local_b8c;
   Vector3 local_b88[8];
   String local_b80[8];
   undefined8 local_b78;
   undefined4 local_b70[2];
   float local_b68;
   float fStack_b64;
   float local_b60;
   undefined8 local_b58;
   float local_b50;
   undefined8 local_b48;
   float local_b40;
   undefined8 local_b24;
   float local_b1c;
   undefined8 local_b18;
   undefined8 uStack_b10;
   undefined8 local_b08;
   undefined8 uStack_b00;
   undefined8 local_af8;
   undefined8 uStack_af0;
   undefined8 local_ae8;
   float local_ae0;
   undefined4 local_adc;
   undefined4 local_ad8;
   undefined1 local_ad4;
   undefined1 local_ad0[16];
   undefined1 local_ac0[16];
   undefined8 local_ab0;
   undefined1 local_aa8[16];
   undefined1 local_a98[16];
   undefined8 local_a88;
   undefined1 local_a80;
   undefined8 local_a78;
   float fStack_a70;
   float fStack_a6c;
   float fStack_a68;
   float fStack_a64;
   undefined8 uStack_a60;
   undefined4 local_a58;
   undefined4 uStack_a54;
   undefined8 uStack_a50;
   float local_a44;
   float fStack_a40;
   float local_a3c;
   undefined4 local_50[4];
   long local_40;
   bVar13 = 0;
   local_b60 = (float)param_1;
   fVar16 = *(float*)( this + 0x66c );
   fVar33 = *(float*)( this + 0x670 );
   fVar29 = *(float*)( this + 0x674 );
   fVar24 = *(float*)( this + 0x668 );
   fVar15 = *(float*)( this + 0x678 );
   local_b68 = local_b60 * fVar33;
   fStack_b64 = local_b60 * fVar29;
   local_bb4 = (undefined4)CONCAT71(in_register_00000031, param_2);
   local_b60 = local_b60 * fVar15;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c08 = this + 0x664;
   fVar17 = *(float*)( this + 0x664 );
   fVar21 = fVar24 * fVar24 + fVar17 * fVar17 + fVar16 * fVar16;
   local_bd2 = param_2;
   if (( fVar21 == (float)_LC6 ) || ( ABS(fVar21 - (float)_LC6) < _LC42 )) {
      fVar21 = local_b68 * fVar17 + fStack_b64 * fVar24 + fVar16 * local_b60;
      local_b50 = local_b60 - fVar21 * fVar16;
      local_b58 = CONCAT44(fStack_b64 - fVar21 * fVar24, local_b68 - fVar21 * *(float*)( this + 0x664 ));
   }
 else {
      local_b78 = 0;
      puStack_c50 = (undefined*)0x1089e8;
      String::parse_latin1((String*)&local_b78, " must be normalized.");
      puStack_c50 = (undefined*)0x1089fd;
      Vector3::operator_cast_to_String(local_b88);
      puStack_c50 = (undefined*)0x108a0f;
      operator+((char *)
      local_b80,(String*)"The normal Vector3 ";
      puStack_c50 = (undefined*)0x108a1d;
      String::operator +((String*)local_b70, local_b80);
      uStack_c58 = 0;
      uStack_c60 = 0x108a48;
      _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", (String*)local_b70, 0);
      uStack_c60 = 0x108a50;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b70);
      uStack_c60 = 0x108a58;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b80);
      uStack_c60 = 0x108a60;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
      uStack_c60 = 0x108a68;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b78);
      local_b58 = 0;
      fVar16 = *(float*)( this + 0x66c );
      local_b50 = 0.0;
      fVar15 = *(float*)( this + 0x678 );
      fVar24 = *(float*)( this + 0x668 );
      fVar29 = *(float*)( this + 0x674 );
      fVar17 = *(float*)( this + 0x664 );
      fVar33 = *(float*)( this + 0x670 );
   }

   fStack_be4 = *(float*)( this + 0x67c );
   local_be8 = *(float*)( this + 0x684 );
   *(undefined8*)( this + 0x6ac ) = 0;
   bVar5 = (byte)this[0x635] ^ 1;
   *(undefined4*)( this + 0x6b4 ) = 0;
   *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x6b8 ) = 0;
   *(undefined4*)( this + 0x6c0 ) = 0;
   *(undefined8*)( this + 0x6c4 ) = 0;
   local_bcc = fVar24 * fVar29 + fVar17 * fVar33 + fVar16 * fVar15;
   *(undefined4*)( this + 0x6cc ) = 0;
   *(undefined8*)( this + 0x67c ) = 0;
   *(undefined4*)( this + 0x684 ) = 0;
   *(undefined8*)( this + 0x688 ) = 0;
   *(undefined4*)( this + 0x690 ) = 0;
   *(undefined8*)( this + 0x694 ) = 0;
   local_bd1 = 0.0 < local_bcc;
   *(undefined4*)( this + 0x69c ) = 0;
   uVar2 = _LC37;
   local_bec = (float)*(undefined8*)( this + 0x680 );
   if (0 < *(int*)( this + 0x638 )) {
      local_c48 = &local_a78;
      local_bf0 = (uint)local_bd1;
      iVar12 = 0;
      bVar1 = true;
      local_c20 = &uStack_a50;
      local_c28 = (MotionResult*)&local_b18;
      local_bd0 = (float)( (uint)local_bd0 & 0xffffff00 );
      local_c0c = 0.0;
      local_c10 = 0.0;
      local_c14 = 0.0;
      local_c15 = bVar5;
      local_be0 = *(undefined8*)( this + 0x680 );
      local_bd8 = fStack_be4;
      do {
         local_c40 = (CowData<char32_t>*)CONCAT44(local_c40._4_4_, *(undefined4*)( this + 0x624 ));
         puStack_c50 = (undefined*)0x10683b;
         Node3D::get_global_transform();
         uStack_b00 = uStack_a60;
         local_ae8 = CONCAT44(fStack_b64, local_b68);
         local_ad4 = 0;
         uStack_b10 = CONCAT44(fStack_a6c, fStack_a70);
         local_ab0 = uVar2;
         local_af8 = CONCAT44(uStack_a54, local_a58);
         local_b18 = local_a78;
         local_b08 = CONCAT44(fStack_a64, fStack_a68);
         local_a88 = uVar2;
         local_ad8 = 6;
         local_a80 = 1;
         local_a78 = 0;
         fStack_a70 = 0.0;
         fStack_a6c = 0.0;
         fStack_a68 = 0.0;
         fStack_a64 = 0.0;
         uStack_a60 = 0;
         local_a58 = 0;
         local_ae0 = local_b60;
         uStack_af0 = uStack_a50;
         local_adc = local_c40._0_4_;
         local_ad0 = (undefined1[16])0x0;
         local_ac0 = (undefined1[16])0x0;
         local_aa8 = (undefined1[16])0x0;
         local_a98 = (undefined1[16])0x0;
         puVar7 = local_c20;
         do {
            *puVar7 = 0;
            puVar10 = puVar7 + 10;
            *(undefined4*)( puVar7 + 1 ) = 0;
            *(undefined8*)( (long)puVar7 + 0xc ) = 0;
            *(undefined4*)( (long)puVar7 + 0x14 ) = 0;
            puVar7[3] = 0;
            *(undefined4*)( puVar7 + 4 ) = 0;
            *(undefined8*)( (long)puVar7 + 0x24 ) = 0;
            *(undefined4*)( (long)puVar7 + 0x2c ) = 0;
            *(undefined4*)( puVar7 + 6 ) = 0;
            *(undefined4*)( (long)puVar7 + 0x34 ) = 0;
            *(undefined1(*) [16])( puVar7 + 7 ) = (undefined1[16])0x0;
            *(undefined4*)( puVar7 + 9 ) = 0;
            puVar7 = puVar10;
         }
 while ( (undefined8*)local_50 != puVar10 );
         local_50[0] = 0;
         puStack_c50 = (undefined*)0x1069be;
         cVar4 = PhysicsBody3D::move_and_collide((MotionParameters*)this, local_c28, SUB81(local_c48, 0), false);
         *(undefined8*)( this + 0x6a0 ) = local_a78;
         *(float*)( this + 0x6a8 ) = fStack_a70;
         if (cVar4 == '\0') {
            if (( this[0x634] != (CharacterBody3D)0x0 ) && ( bVar1 )) {
               puStack_c50 = (undefined*)0x106a0a;
               bVar5 = _on_floor_if_snapped(this, local_bd2, SUB41(local_bf0, 0));
               if (bVar5 != 0) {
                  puStack_c50 = (undefined*)0x106a27;
                  Node3D::get_global_transform();
                  local_b1c = local_b1c - fStack_a70;
                  local_b24 = CONCAT44((float)( (ulong)local_b24 >> 0x20 ) - (float)( (ulong)local_a78 >> 0x20 ), (float)local_b24 - (float)local_a78);
                  puStack_c50 = (undefined*)0x106a6a;
                  Node3D::set_global_transform((Transform3D*)this);
                  fVar16 = (float)*(undefined8*)( this + 0x664 );
                  fVar24 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
                  fVar15 = local_b60 * fVar24 - (float)( ( ulong ) * (undefined8*)( this + 0x668 ) >> 0x20 ) * fStack_b64;
                  fVar17 = *(float*)( this + 0x66c ) * local_b68 - local_b60 * fVar16;
                  auVar28._0_4_ = local_be8 * fVar17 - (float)local_be0 * ( fStack_b64 * fVar16 - (float)*(undefined8*)( this + 0x668 ) * local_b68 );
                  auVar28._4_4_ = fStack_be4 * ( *(float*)( this + 0x664 ) * fStack_b64 - local_b68 * fVar24 ) - (float)( (ulong)local_be0 >> 0x20 ) * fVar15;
                  auVar28._8_8_ = 0;
                  fVar15 = fVar15 * local_bec - fVar17 * local_bd8;
                  fVar17 = auVar28._0_4_ * auVar28._0_4_ + auVar28._4_4_ * auVar28._4_4_ + fVar15 * fVar15;
                  uVar19 = 0;
                  local_b60 = 0.0;
                  if (fVar17 != 0.0) {
                     fVar17 = SQRT(fVar17);
                     local_b60 = fVar15 / fVar17;
                     auVar20._4_4_ = fVar17;
                     auVar20._0_4_ = fVar17;
                     auVar20._12_4_ = _LC6._4_4_;
                     auVar20._8_4_ = (float)_LC6;
                     auVar28 = divps(auVar28, auVar20);
                     uVar19 = auVar28._0_8_;
                  }

                  local_c15 = 0;
                  fStack_b64 = SQRT(local_b50 * local_b50 + (float)local_b58 * (float)local_b58 + local_b58._4_4_ * local_b58._4_4_);
                  local_b60 = local_b60 * fStack_b64;
                  local_b68 = fStack_b64 * (float)uVar19;
                  fStack_b64 = fStack_b64 * (float)( (ulong)uVar19 >> 0x20 );
                  goto LAB_00106b90;
               }

            }

            LAB_00107b38:uVar19 = local_aa8._0_8_;
            if ((void*)local_aa8._0_8_ != (void*)0x0) {
               if (local_a88._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) != 0) {
                     puStack_c50 = (undefined*)0x107b7c;
                     memset((void*)local_a98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_a88 = local_a88 & 0xffffffff;
               }

               puStack_c50 = (undefined*)0x107b91;
               Memory::free_static((void*)uVar19, false);
               puStack_c50 = (undefined*)0x107ba0;
               Memory::free_static((void*)local_a98._0_8_, false);
               puStack_c50 = (undefined*)0x107baf;
               Memory::free_static((void*)local_aa8._8_8_, false);
               puStack_c50 = (undefined*)0x107bbe;
               Memory::free_static((void*)local_a98._8_8_, false);
            }

            uVar19 = local_ad0._0_8_;
            if ((void*)local_ad0._0_8_ != (void*)0x0) {
               if (local_ab0._4_4_ != 0) {
                  if (*(uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) != 0) {
                     puStack_c50 = (undefined*)0x107c06;
                     memset((void*)local_ac0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) * 4);
                  }

                  local_ab0 = local_ab0 & 0xffffffff;
               }

               puStack_c50 = (undefined*)0x107c1b;
               Memory::free_static((void*)uVar19, false);
               puStack_c50 = (undefined*)0x107c2a;
               Memory::free_static((void*)local_ac0._0_8_, false);
               puStack_c50 = (undefined*)0x107c39;
               Memory::free_static((void*)local_ad0._8_8_, false);
               puStack_c50 = (undefined*)0x107c48;
               Memory::free_static((void*)local_ac0._8_8_, false);
               CVar11 = this[0x630];
               goto joined_r0x00107c50;
            }

            break;
         }

         puVar7 = local_c48;
         puVar10 = local_1678;
         for (lVar9 = 0x145; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + (ulong)bVar13 * -2 + 1;
            puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
         }

         *(undefined4*)puVar10 = *(undefined4*)puVar7;
         Vector<PhysicsServer3D::MotionResult>::push_back(this + 0x6e8);
         local_b8c = 0;
         local_b70[0] = 0x10101;
         local_c00 = (CowData<char32_t>*)CONCAT71(local_c00._1_7_, this[0x631]);
         puStack_c50 = (undefined*)0x106da6;
         _set_collision_direction(this, local_c48, &local_b8c);
         CVar11 = this[0x632];
         if (CVar11 != (CharacterBody3D)0x0) {
            if (( ( *(float*)( this + 0x6c4 ) != 0.0 ) || ( *(float*)( this + 0x6c8 ) != 0.0 ) ) || ( *(float*)( this + 0x6cc ) != 0.0 )) {
               fVar15 = *(float*)( this + 0x664 );
               fVar17 = *(float*)( this + 0x66c );
               fVar24 = (float)*(undefined8*)( this + 0x664 );
               fVar29 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
               fVar16 = *(float*)( this + 0x6c4 ) * fVar15 + *(float*)( this + 0x6c8 ) * fVar29 + *(float*)( this + 0x6cc ) * fVar17;
               if (( fVar16 < 0.0 ) && ( ( ( this[0x637] == (CharacterBody3D)0x0 || ( local_b68 * fVar15 + fStack_b64 * fVar29 + local_b60 * fVar17 < 0.0 ) ) || ( (double)SQRT(( *(float*)( this + 0x694 ) + fVar15 ) * ( *(float*)( this + 0x694 ) + fVar15 ) + ( *(float*)( this + 0x698 ) + fVar29 ) * ( *(float*)( this + 0x698 ) + fVar29 ) + ( *(float*)( this + 0x69c ) + fVar17 ) * ( *(float*)( this + 0x69c ) + fVar17 )) < _LC31 ) ) )) {
                  fVar33 = fVar16 * fVar24;
                  fVar21 = fVar16 * fVar29;
                  fVar16 = fVar16 * fVar17;
                  fVar30 = *(float*)( this + 0x670 ) * fVar15 + *(float*)( this + 0x674 ) * fVar29 + fVar17 * *(float*)( this + 0x678 );
                  fVar24 = fVar24 * fVar30;
                  fVar32 = fVar29 * fVar30;
                  fVar30 = fVar30 * fVar17;
                  if (( 0.0 < fVar15 * fVar24 + fVar32 * fVar29 + fVar17 * fVar30 ) || ( fVar24 * fVar24 + fVar32 * fVar32 + fVar30 * fVar30 < fVar33 * fVar33 + fVar21 * fVar21 + fVar16 * fVar16 )) {
                     fVar15 = fVar15 * fVar15 + fVar29 * fVar29 + fVar17 * fVar17;
                     if (( fVar15 == (float)_LC6 ) || ( ABS(fVar15 - (float)_LC6) < _LC42 )) {
                        fVar24 = *(float*)( this + 0x670 ) - fVar24;
                        fVar32 = *(float*)( this + 0x674 ) - fVar32;
                        fVar30 = *(float*)( this + 0x678 ) - fVar30;
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_bf8 = (String*)CONCAT71(local_bf8._1_7_, CVar11);
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x10866a;
                        local_bd0 = fVar16;
                        local_bc8 = fVar33;
                        fStack_bc4 = fVar21;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x108677;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x108696;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x1086b5;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x1086e8;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x1086f2;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x1086fc;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x108704;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x10870e;
                        CowData<char32_t>::_unref(local_c38);
                        fVar24 = 0.0;
                        fVar32 = 0.0;
                        fVar30 = 0.0;
                        CVar11 = local_bf8._0_1_;
                        fVar16 = local_bd0;
                        fVar33 = local_bc8;
                        fVar21 = fStack_bc4;
                     }

                     *(float*)( this + 0x670 ) = fVar33 + fVar24;
                     *(float*)( this + 0x674 ) = fVar21 + fVar32;
                     *(float*)( this + 0x678 ) = fVar30 + fVar16;
                  }

                  local_bd0 = (float)CONCAT31(local_bd0._1_3_, CVar11);
               }

            }

         }

         if (( this[0x630] != (CharacterBody3D)0x0 ) && ( this[0x635] != (CharacterBody3D)0x0 )) {
            fVar15 = *(float*)( this + 0x670 );
            fVar17 = *(float*)( this + 0x674 );
            fVar16 = *(float*)( this + 0x678 );
            fVar24 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
            if (fVar24 == 0.0) {
               fVar16 = 0.0;
               fVar17 = 0.0;
               fVar15 = 0.0;
            }
 else {
               fVar24 = SQRT(fVar24);
               fVar15 = fVar15 / fVar24;
               fVar17 = fVar17 / fVar24;
               fVar16 = fVar16 / fVar24;
            }

            if ((double)SQRT(( fVar15 + *(float*)( this + 0x664 ) ) * ( fVar15 + *(float*)( this + 0x664 ) ) + ( fVar17 + *(float*)( this + 0x668 ) ) * ( fVar17 + *(float*)( this + 0x668 ) ) + ( fVar16 + *(float*)( this + 0x66c ) ) * ( fVar16 + *(float*)( this + 0x66c ) )) < _LC31) {
               puStack_c50 = (undefined*)0x10976d;
               Node3D::get_global_transform();
               fVar15 = (float)( (ulong)local_a78 >> 0x20 );
               if ((double)SQRT((float)local_a78 * (float)local_a78 + fVar15 * fVar15 + fStack_a70 * fStack_a70) <= (double)*(float*)( this + 0x624 ) + __LC155) {
                  local_b24 = CONCAT44((float)( (ulong)local_b24 >> 0x20 ) - fVar15, (float)local_b24 - (float)local_a78);
                  local_b1c = local_b1c - fStack_a70;
               }

               puStack_c50 = (undefined*)0x109801;
               Node3D::set_global_transform((Transform3D*)this);
               *(undefined8*)( this + 0x670 ) = 0;
               *(undefined4*)( this + 0x678 ) = 0;
               local_b68 = 0.0;
               fStack_b64 = 0.0;
               local_b60 = 0.0;
               *(undefined8*)( this + 0x6a0 ) = 0;
               *(undefined4*)( this + 0x6a8 ) = 0;
               goto LAB_00107b38;
            }

         }

         puStack_c50 = (undefined*)0x106eca;
         cVar4 = Vector3::is_zero_approx();
         if (cVar4 != '\0') {
            local_b68 = 0.0;
            fStack_b64 = 0.0;
            local_b60 = 0.0;
            goto LAB_00107b38;
         }

         local_bf8 = (String*)CONCAT71(local_bf8._1_7_, local_b8c._1_1_);
         if (local_b8c._1_1_ == '\0') {
            LAB_00106f2d:if (( bVar5 == 0 ) && ( this[0x630] != (CharacterBody3D)0x0 )) {
               LAB_00106f44:local_b68 = fStack_a6c;
               fStack_b64 = fStack_a68;
               local_b60 = fStack_a64;
               if (( ( local_b8c._2_1_ != '\0' ) && ( this[0x637] == (CharacterBody3D)0x0 ) ) && ( 0.0 < local_bcc )) {
                  LAB_0010735b:local_b60 = fStack_a64;
                  fStack_b64 = fStack_a68;
                  local_b68 = fStack_a6c;
                  uVar19 = *(undefined8*)( this + 0x664 );
                  fVar15 = *(float*)( this + 0x664 );
                  fVar17 = *(float*)( this + 0x66c );
                  fVar24 = (float)( (ulong)uVar19 >> 0x20 );
                  fVar16 = fVar15 * fVar15 + fVar24 * fVar24 + fVar17 * fVar17;
                  if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
                     fVar15 = fVar15 * *(float*)( this + 0x670 ) + *(float*)( this + 0x674 ) * fVar24 + fVar17 * *(float*)( this + 0x678 );
                     fVar29 = *(float*)( this + 0x678 ) - fVar15 * fVar17;
                     uVar31 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) - fVar15 * fVar24, (float)*(undefined8*)( this + 0x670 ) - fVar15 * (float)uVar19);
                  }
 else {
                     local_c38 = (CowData<char32_t>*)&local_b78;
                     local_b78 = 0;
                     puStack_c50 = (undefined*)0x10922d;
                     String::parse_latin1((String*)local_c38, " must be normalized.");
                     puStack_c50 = (undefined*)0x10923a;
                     Vector3::operator_cast_to_String(local_b88);
                     local_c40 = (CowData<char32_t>*)local_b80;
                     puStack_c50 = (undefined*)0x109259;
                     operator+((char *)
                     local_c40,(String*)"The normal Vector3 ";
                     local_c30 = (CowData<char32_t>*)local_b70;
                     puStack_c50 = (undefined*)0x109278;
                     String::operator +((String*)local_c30, (String*)local_c40);
                     uStack_c58 = 0;
                     uStack_c60 = 0x1092ab;
                     _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                     uStack_c60 = 0x1092b5;
                     CowData<char32_t>::_unref(local_c30);
                     uStack_c60 = 0x1092bf;
                     CowData<char32_t>::_unref(local_c40);
                     uStack_c60 = 0x1092c7;
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                     uStack_c60 = 0x1092d1;
                     CowData<char32_t>::_unref(local_c38);
                     fVar29 = 0.0;
                     uVar19 = *(undefined8*)( this + 0x664 );
                     fVar17 = *(float*)( this + 0x66c );
                     fVar24 = (float)( (ulong)uVar19 >> 0x20 );
                     uVar31 = 0;
                     fVar16 = *(float*)( this + 0x664 ) * *(float*)( this + 0x664 ) + fVar24 * fVar24 + fVar17 * fVar17;
                  }

                  bVar1 = fVar16 == (float)_LC6;
                  *(undefined8*)( this + 0x670 ) = uVar31;
                  *(float*)( this + 0x678 ) = fVar29;
                  if (( bVar1 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
                     fVar15 = (float)uVar19 * local_b68 + fStack_b64 * fVar24 + local_b60 * fVar17;
                     local_b60 = local_b60 - fVar15 * fVar17;
                     local_b68 = local_b68 - fVar15 * (float)uVar19;
                     fStack_b64 = fStack_b64 - fVar15 * (float)( (ulong)uVar19 >> 0x20 );
                  }
 else {
                     local_c38 = (CowData<char32_t>*)&local_b78;
                     local_b78 = 0;
                     puStack_c50 = (undefined*)0x109144;
                     String::parse_latin1((String*)local_c38, " must be normalized.");
                     puStack_c50 = (undefined*)0x109151;
                     Vector3::operator_cast_to_String(local_b88);
                     local_c40 = (CowData<char32_t>*)local_b80;
                     puStack_c50 = (undefined*)0x109170;
                     operator+((char *)
                     local_c40,(String*)"The normal Vector3 ";
                     local_c30 = (CowData<char32_t>*)local_b70;
                     puStack_c50 = (undefined*)0x10918f;
                     String::operator +((String*)local_c30, (String*)local_c40);
                     uStack_c58 = 0;
                     uStack_c60 = 0x1091c2;
                     _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                     uStack_c60 = 0x1091cc;
                     CowData<char32_t>::_unref(local_c30);
                     uStack_c60 = 0x1091d6;
                     CowData<char32_t>::_unref(local_c40);
                     uStack_c60 = 0x1091de;
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                     uStack_c60 = 0x1091e8;
                     CowData<char32_t>::_unref(local_c38);
                     local_b68 = 0.0;
                     fStack_b64 = 0.0;
                     local_b60 = 0.0;
                  }

               }

            }
 else if (( this[0x632] == (CharacterBody3D)0x0 ) || ( ( this[0x637] != (CharacterBody3D)0x0 || ( local_bcc <= 0.0 ) ) )) {
               if (local_bd0._0_1_ != '\0') goto LAB_00106f44;
               fVar15 = local_a44 * local_a44 + fStack_a40 * fStack_a40 + local_a3c * local_a3c;
               if (( fVar15 == (float)_LC6 ) || ( ABS(fVar15 - (float)_LC6) < _LC42 )) {
                  fVar17 = local_a44 * fStack_a6c + fStack_a68 * fStack_a40 + local_a3c * fStack_a64;
                  fVar15 = fStack_a64 - fVar17 * local_a3c;
                  pCVar18 = (CowData<char32_t>*)CONCAT44(fStack_a68 - fVar17 * fStack_a40, fStack_a6c - fVar17 * local_a44);
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x1088ff;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x10890f;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x10892e;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x10894d;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x108980;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x10898a;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x108994;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x10899c;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x1089a6;
                  CowData<char32_t>::_unref(local_c38);
                  pCVar18 = (CowData<char32_t>*)0x0;
                  fVar15 = 0.0;
               }

               if (( this[0x630] != (CharacterBody3D)0x0 ) && ( this[0x631] == (CharacterBody3D)0x0 )) {
                  local_c40 = (CowData<char32_t>*)CONCAT44(local_c40._4_4_, fVar15);
                  puStack_c50 = (undefined*)0x108486;
                  local_c38 = pCVar18;
                  cVar4 = Vector3::is_zero_approx();
                  fVar15 = local_c40._0_4_;
                  pCVar18 = local_c38;
                  if (cVar4 == '\0') {
                     fVar15 = (float)( (ulong)local_c38 >> 0x20 );
                     fVar24 = SQRT(SUB84(local_c38, 0) * SUB84(local_c38, 0) + fVar15 * fVar15 + local_c40._0_4_ * local_c40._0_4_);
                     fVar17 = (float)*(undefined8*)( this + 0x664 );
                     fVar16 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
                     fVar33 = fStack_a64 * fVar16 - (float)( ( ulong ) * (undefined8*)( this + 0x668 ) >> 0x20 ) * fStack_a68;
                     fVar15 = (float)*(undefined8*)( this + 0x66c ) * fStack_a6c - fStack_a64 * fVar17;
                     fVar29 = fVar33 * *(float*)( this + 0x680 ) - fVar15 * *(float*)( this + 0x67c );
                     auVar25._0_4_ = *(float*)( this + 0x684 ) * fVar15 - (float)*(undefined8*)( this + 0x680 ) * ( fStack_a68 * fVar17 - (float)*(undefined8*)( this + 0x668 ) * fStack_a6c );
                     auVar25._4_4_ = *(float*)( this + 0x67c ) * ( fVar17 * fStack_a68 - fStack_a6c * fVar16 ) - (float)( ( ulong ) * (undefined8*)( this + 0x680 ) >> 0x20 ) * fVar33;
                     auVar25._8_4_ = ( (float)( ( ulong ) * (undefined8*)( this + 0x66c ) >> 0x20 ) * 0.0 - 0.0 ) * 0.0 - 0.0;
                     auVar25._12_4_ = ( fVar16 * 0.0 - 0.0 ) * 0.0 - 0.0;
                     fVar15 = auVar25._0_4_ * auVar25._0_4_ + auVar25._4_4_ * auVar25._4_4_ + fVar29 * fVar29;
                     fVar17 = 0.0;
                     uVar19 = 0;
                     if (fVar15 != 0.0) {
                        fVar15 = SQRT(fVar15);
                        fVar17 = fVar29 / fVar15;
                        auVar23._4_4_ = fVar15;
                        auVar23._0_4_ = fVar15;
                        auVar23._12_4_ = _LC6._4_4_;
                        auVar23._8_4_ = (float)_LC6;
                        auVar28 = divps(auVar25, auVar23);
                        uVar19 = auVar28._0_8_;
                     }

                     pCVar18 = (CowData<char32_t>*)CONCAT44(fVar24 * (float)( (ulong)uVar19 >> 0x20 ), fVar24 * (float)uVar19);
                     fVar15 = fVar17 * fVar24;
                  }

               }

               local_b60 = fVar15;
               fVar15 = *(float*)( this + 0x670 );
               fVar17 = *(float*)( this + 0x678 );
               fStack_b64 = (float)( (ulong)pCVar18 >> 0x20 );
               local_b68 = SUB84(pCVar18, 0);
               fVar16 = (float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 );
               if (local_b68 * fVar15 + fStack_b64 * fVar16 + local_b60 * fVar17 <= 0.0) {
                  local_b68 = 0.0;
                  fStack_b64 = 0.0;
                  local_b60 = 0.0;
               }

               if (( this[0x637] != (CharacterBody3D)0x0 ) && ( local_b8c._2_1_ != '\0' )) {
                  if (local_bcc <= 0.0) {
                     fVar15 = fVar15 * *(float*)( this + 0x664 ) + *(float*)( this + 0x668 ) * fVar16 + fVar17 * *(float*)( this + 0x66c );
                     *(float*)( this + 0x678 ) = *(float*)( this + 0x66c ) * fVar15;
                     *(ulong*)( this + 0x670 ) = CONCAT44(fVar15 * (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 ), fVar15 * (float)*(undefined8*)( this + 0x664 ));
                  }
 else {
                     fVar24 = local_a44 * local_a44 + fStack_a40 * fStack_a40 + local_a3c * local_a3c;
                     if (( fVar24 == (float)_LC6 ) || ( ABS(fVar24 - (float)_LC6) < _LC42 )) {
                        fVar15 = local_a44 * fVar15 + fStack_a40 * fVar16 + fVar17 * local_a3c;
                        fVar17 = fVar17 - fVar15 * local_a3c;
                        uVar19 = CONCAT44(fVar16 - fVar15 * fStack_a40, (float)*(undefined8*)( this + 0x670 ) - fVar15 * local_a44);
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x109c46;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x109c56;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x109c75;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x109c94;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x109cc7;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x109cd1;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x109cdb;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x109ce3;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x109ced;
                        CowData<char32_t>::_unref(local_c38);
                        uVar19 = 0;
                        fVar17 = 0.0;
                     }

                     *(undefined8*)( this + 0x670 ) = uVar19;
                     *(float*)( this + 0x678 ) = fVar17;
                  }

               }

            }
 else {
               local_b68 = fStack_a6c;
               fStack_b64 = fStack_a68;
               local_b60 = fStack_a64;
               if (local_b8c._2_1_ != '\0') goto LAB_0010735b;
            }

            LAB_00106f7a:local_c0c = local_c0c + (float)local_a78;
            local_c14 = local_c14 + local_a78._4_4_;
            local_c10 = local_c10 + fStack_a70;
            if (local_bd2 == false) goto LAB_00106b90;
         }
 else {
            if (0.0 < (float)local_b58 * *(float*)( this + 0x688 ) + local_b58._4_4_ * *(float*)( this + 0x68c ) + local_b50 * *(float*)( this + 0x690 )) goto LAB_00106f2d;
            local_bc8 = (float)CONCAT31(local_bc8._1_3_, this[0x636]);
            if (this[0x636] == (CharacterBody3D)0x0) {
               if (local_bd2 == false) goto LAB_00106f2d;
               fVar15 = *(float*)( this + 0x660 );
               joined_r0x00107d55:if (fVar15 <= 0.0) goto LAB_00106f2d;
               LAB_00107965:fVar15 = *(float*)( this + 0x664 );
               fVar17 = *(float*)( this + 0x668 );
               fVar16 = *(float*)( this + 0x66c );
               fVar24 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
               if (( fVar24 == (float)_LC6 ) || ( ABS(fVar24 - (float)_LC6) < _LC42 )) {
                  fVar24 = fVar15 * *(float*)( this + 0x688 ) + fVar17 * *(float*)( this + 0x68c ) + fVar16 * *(float*)( this + 0x690 );
                  fVar17 = *(float*)( this + 0x68c ) - fVar17 * fVar24;
                  fVar15 = *(float*)( this + 0x688 ) - fVar15 * fVar24;
                  fVar24 = *(float*)( this + 0x690 ) - fVar16 * fVar24;
                  fVar16 = fVar15 * fVar15 + fVar17 * fVar17 + fVar24 * fVar24;
                  if (fVar16 == 0.0) goto LAB_00107a5c;
                  fVar16 = SQRT(fVar16);
                  fVar17 = fVar17 / fVar16;
                  fVar15 = fVar15 / fVar16;
                  fVar24 = fVar24 / fVar16;
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x10935c;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x109369;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x109388;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x1093a7;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x1093da;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x1093e4;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x1093ee;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x1093f6;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x109400;
                  CowData<char32_t>::_unref(local_c38);
                  LAB_00107a5c:fVar24 = 0.0;
                  fVar17 = 0.0;
                  fVar15 = 0.0;
               }

               fVar16 = (float)local_b58 * (float)local_b58 + local_b58._4_4_ * local_b58._4_4_ + local_b50 * local_b50;
               if (fVar16 == 0.0) {
                  fVar17 = fVar17 * 0.0 + fVar15 * 0.0 + fVar24 * 0.0;
                  LAB_00107ada:puStack_c50 = (undefined*)0x107ae2;
                  fVar15 = acosf((float)( (uint)fVar17 ^ _LC161 ));
                  fVar15 = ABS(fVar15);
               }
 else {
                  fVar16 = SQRT(fVar16);
                  fVar17 = ( local_b50 / fVar16 ) * fVar24 + fVar17 * ( local_b58._4_4_ / fVar16 ) + ( (float)local_b58 / fVar16 ) * fVar15;
                  fVar15 = _LC1;
                  if (fVar17 <= (float)_LC6) {
                     if (_LC5 <= fVar17) goto LAB_00107ada;
                     fVar15 = 0.0;
                  }

               }

               if (fVar15 < *(float*)( this + 0x660 )) {
                  fVar15 = *(float*)( this + 0x66c );
                  fVar16 = (float)*(undefined8*)( this + 0x664 );
                  fVar24 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
                  local_c0c = local_c0c + (float)local_a78;
                  local_c14 = local_c14 + local_a78._4_4_;
                  local_c10 = local_c10 + fStack_a70;
                  fStack_b64 = local_b68 * *(float*)( this + 0x664 ) + fStack_b64 * fVar24 + local_b60 * fVar15;
                  local_b60 = fStack_b64 * fVar15;
                  local_b68 = fStack_b64 * fVar16;
                  fStack_b64 = fStack_b64 * fVar24;
                  fVar17 = *(float*)( this + 0x664 ) * *(float*)( this + 0x670 ) + fVar24 * *(float*)( this + 0x674 ) + *(float*)( this + 0x678 ) * fVar15;
                  *(float*)( this + 0x678 ) = fVar17 * fVar15;
                  *(ulong*)( this + 0x670 ) = CONCAT44(fVar17 * fVar24, fVar17 * fVar16);
                  goto LAB_00106fcc;
               }

               if (local_bf8._0_1_ != (CharacterBody3D)0x0) goto LAB_00106f2d;
               goto LAB_00106f7a;
            }

            fVar15 = *(float*)( this + 0x664 );
            fVar16 = *(float*)( this + 0x668 );
            fVar17 = *(float*)( this + 0x66c );
            fVar24 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
            if (( fVar24 == (float)_LC6 ) || ( ABS(fVar24 - (float)_LC6) < _LC42 )) {
               fVar29 = fVar15 * local_b68 + fVar16 * fStack_b64 + fVar17 * local_b60;
               fVar21 = local_b60 - fVar17 * fVar29;
               fVar33 = fStack_b64 - fVar16 * fVar29;
               fVar29 = local_b68 - fVar29 * fVar15;
            }
 else {
               local_c38 = (CowData<char32_t>*)&local_b78;
               local_b78 = 0;
               puStack_c50 = (undefined*)0x109551;
               String::parse_latin1((String*)local_c38, " must be normalized.");
               puStack_c50 = (undefined*)0x10955e;
               Vector3::operator_cast_to_String(local_b88);
               local_c40 = (CowData<char32_t>*)local_b80;
               puStack_c50 = (undefined*)0x10957d;
               operator+((char *)
               local_c40,(String*)"The normal Vector3 ";
               local_c30 = (CowData<char32_t>*)local_b70;
               puStack_c50 = (undefined*)0x10959c;
               String::operator +((String*)local_c30, (String*)local_c40);
               uStack_c58 = 0;
               uStack_c60 = 0x1095cf;
               _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
               uStack_c60 = 0x1095d9;
               CowData<char32_t>::_unref(local_c30);
               uStack_c60 = 0x1095e3;
               CowData<char32_t>::_unref(local_c40);
               uStack_c60 = 0x1095eb;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
               uStack_c60 = 0x1095f5;
               CowData<char32_t>::_unref(local_c38);
               fVar21 = 0.0;
               fVar15 = *(float*)( this + 0x664 );
               fVar33 = 0.0;
               fVar16 = *(float*)( this + 0x668 );
               fVar17 = *(float*)( this + 0x66c );
               fVar24 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
               fVar29 = 0.0;
            }

            if (( fVar24 == (float)_LC6 ) || ( ABS(fVar24 - (float)_LC6) < _LC42 )) {
               fVar30 = *(float*)( this + 0x688 ) * fVar15 + *(float*)( this + 0x68c ) * fVar16 + *(float*)( this + 0x690 ) * fVar17;
               fVar24 = *(float*)( this + 0x690 ) - fVar17 * fVar30;
               fVar17 = *(float*)( this + 0x68c ) - fVar16 * fVar30;
               fVar15 = *(float*)( this + 0x688 ) - fVar30 * fVar15;
               fVar16 = fVar15 * fVar15 + fVar17 * fVar17 + fVar24 * fVar24;
               if (fVar16 == 0.0) goto LAB_001078bc;
               fVar16 = SQRT(fVar16);
               fVar15 = fVar15 / fVar16;
               fVar17 = fVar17 / fVar16;
               fVar24 = fVar24 / fVar16;
            }
 else {
               local_c38 = (CowData<char32_t>*)&local_b78;
               local_bb0 = (char*)CONCAT44(local_bb0._4_4_, fVar33);
               local_bc0 = (char*)CONCAT44(local_bc0._4_4_, fVar29);
               local_b78 = 0;
               puStack_c50 = (undefined*)0x109692;
               local_bb8 = fVar21;
               String::parse_latin1((String*)local_c38, " must be normalized.");
               puStack_c50 = (undefined*)0x10969f;
               Vector3::operator_cast_to_String(local_b88);
               local_c40 = (CowData<char32_t>*)local_b80;
               puStack_c50 = (undefined*)0x1096be;
               operator+((char *)
               local_c40,(String*)"The normal Vector3 ";
               local_c30 = (CowData<char32_t>*)local_b70;
               puStack_c50 = (undefined*)0x1096dd;
               String::operator +((String*)local_c30, (String*)local_c40);
               uStack_c58 = 0;
               uStack_c60 = 0x109710;
               _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
               uStack_c60 = 0x10971a;
               CowData<char32_t>::_unref(local_c30);
               uStack_c60 = 0x109724;
               CowData<char32_t>::_unref(local_c40);
               uStack_c60 = 0x10972c;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
               uStack_c60 = 0x109736;
               CowData<char32_t>::_unref(local_c38);
               fVar33 = local_bb0._0_4_;
               fVar21 = local_bb8;
               fVar29 = local_bc0._0_4_;
               LAB_001078bc:fVar24 = 0.0;
               fVar17 = 0.0;
               fVar15 = 0.0;
            }

            fVar16 = fVar29 * fVar29 + fVar33 * fVar33 + fVar21 * fVar21;
            if (fVar16 == 0.0) {
               fVar15 = fVar15 * 0.0 + fVar17 * 0.0 + fVar24 * 0.0;
               LAB_0010791c:puStack_c50 = (undefined*)0x107921;
               fVar15 = acosf((float)( (uint)fVar15 ^ _LC161 ));
               if (_LC163 <= (double)ABS(fVar15)) {
                  LAB_00107944:if (local_bd2 == false) goto LAB_00106f2d;
                  fVar15 = *(float*)( this + 0x660 );
                  goto joined_r0x00107d55;
               }

            }
 else {
               fVar16 = SQRT(fVar16);
               fVar15 = fVar15 * ( fVar29 / fVar16 ) + ( fVar33 / fVar16 ) * fVar17 + ( fVar21 / fVar16 ) * fVar24;
               if ((float)_LC6 < fVar15) goto LAB_00107944;
               if (_LC5 <= fVar15) goto LAB_0010791c;
            }

            bVar6 = ( local_bd1 ^ 1 ) & local_bd2;
            local_bb8 = (float)CONCAT31(local_bb8._1_3_, bVar6);
            if (bVar6 == 0) {
               local_b68 = fStack_a6c;
               fStack_b64 = fStack_a68;
               local_b60 = fStack_a64;
            }
 else {
               local_bf8 = (String*)&local_b48;
               puStack_c50 = (undefined*)0x108d1a;
               Node3D::get_global_transform();
               fVar16 = fStack_a70;
               fVar15 = (float)local_a78;
               fVar17 = local_a78._4_4_;
               fVar24 = _LC164 * *(float*)( this + 0x624 );
               fVar29 = SQRT((float)local_a78 * (float)local_a78 + local_a78._4_4_ * local_a78._4_4_ + fStack_a70 * fStack_a70);
               if (__LC165 < (double)fVar24) {
                  fVar24 = _LC162;
               }

               if ((double)fVar29 <= (double)*(float*)( this + 0x624 ) + __LC155) {
                  local_a78 = 0;
                  fStack_a70 = 0.0;
                  local_b24 = CONCAT44((float)( (ulong)local_b24 >> 0x20 ) - fVar17, (float)local_b24 - fVar15);
                  local_b1c = local_b1c - fVar16;
               }
 else {
                  uVar19 = *(undefined8*)( this + 0x664 );
                  fVar15 = *(float*)( this + 0x664 );
                  fVar17 = *(float*)( this + 0x66c );
                  fVar33 = (float)( (ulong)uVar19 >> 0x20 );
                  fVar16 = fVar15 * fVar15 + fVar33 * fVar33 + fVar17 * fVar17;
                  if (fVar24 <= fVar29) {
                     if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
                        fVar15 = (float)local_a78 * fVar15 + fVar33 * local_a78._4_4_ + fStack_a70 * fVar17;
                        fStack_a70 = fStack_a70 - fVar15 * fVar17;
                        local_a78._0_4_ = (float)local_a78 - fVar15 * (float)uVar19;
                        local_a78._4_4_ = local_a78._4_4_ - fVar15 * fVar33;
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x10a2e8;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x10a2f5;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x10a314;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x10a333;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x10a366;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x10a370;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x10a37a;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x10a382;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x10a38c;
                        CowData<char32_t>::_unref(local_c38);
                        local_a78._0_4_ = 0.0;
                        local_a78._4_4_ = 0.0;
                        fStack_a70 = 0.0;
                     }

                     local_b68 = fStack_a6c;
                     fStack_b64 = fStack_a68;
                     local_b60 = fStack_a64;
                  }
 else {
                     if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
                        fVar24 = fVar15 * (float)local_a78 + local_a78._4_4_ * fVar33 + fStack_a70 * fVar17;
                        fVar15 = fStack_a70 - fVar24 * fVar17;
                        fVar29 = (float)local_a78 - fVar24 * (float)uVar19;
                        fVar24 = local_a78._4_4_ - fVar24 * fVar33;
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x10a12e;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x10a13b;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x10a15a;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x10a179;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x10a1ac;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x10a1b6;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x10a1c0;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x10a1c8;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x10a1d2;
                        CowData<char32_t>::_unref(local_c38);
                        fVar29 = 0.0;
                        fVar24 = 0.0;
                        uVar19 = *(undefined8*)( this + 0x664 );
                        fVar17 = *(float*)( this + 0x66c );
                        fVar33 = (float)( (ulong)uVar19 >> 0x20 );
                        fVar16 = *(float*)( this + 0x664 ) * *(float*)( this + 0x664 ) + fVar33 * fVar33 + fVar17 * fVar17;
                        fVar15 = 0.0;
                     }

                     local_b1c = local_b1c - fVar15;
                     local_b24 = CONCAT44((float)( (ulong)local_b24 >> 0x20 ) - fVar24, (float)local_b24 - fVar29);
                     if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
                        fVar15 = (float)uVar19 * local_b68 + fStack_b64 * fVar33 + local_b60 * fVar17;
                        local_b60 = local_b60 - fVar15 * fVar17;
                        local_b68 = local_b68 - fVar15 * (float)uVar19;
                        fStack_b64 = fStack_b64 - fVar15 * (float)( (ulong)uVar19 >> 0x20 );
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x10a046;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x10a053;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x10a072;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x10a091;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x10a0c4;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x10a0ce;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x10a0d8;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x10a0e0;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x10a0ea;
                        CowData<char32_t>::_unref(local_c38);
                        local_b68 = 0.0;
                        fStack_b64 = 0.0;
                        local_b60 = 0.0;
                     }

                     local_a78 = 0;
                     fStack_a70 = 0.0;
                  }

               }

               puStack_c50 = (undefined*)0x108f53;
               Node3D::set_global_transform((Transform3D*)this);
               if (this[0x630] == (CharacterBody3D)0x0) {
                  puStack_c50 = (undefined*)0x108f69;
                  apply_floor_snap(this);
               }

            }

            fVar15 = *(float*)( this + 0x664 );
            fVar17 = *(float*)( this + 0x66c );
            fVar24 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
            fVar16 = fVar15 * fVar15 + fVar24 * fVar24 + fVar17 * fVar17;
            if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
               fVar15 = *(float*)( this + 0x688 ) * fVar15 + *(float*)( this + 0x68c ) * fVar24 + fVar17 * *(float*)( this + 0x690 );
               auVar14._0_4_ = (float)*(undefined8*)( this + 0x688 ) - fVar15 * (float)*(undefined8*)( this + 0x664 );
               auVar14._4_4_ = (float)( ( ulong ) * (undefined8*)( this + 0x688 ) >> 0x20 ) - fVar15 * fVar24;
               auVar14._8_8_ = 0;
               local_b40 = *(float*)( this + 0x690 ) - fVar15 * fVar17;
               fVar15 = auVar14._0_4_ * auVar14._0_4_ + auVar14._4_4_ * auVar14._4_4_ + local_b40 * local_b40;
               if (fVar15 == 0.0) {
                  local_c40 = (CowData<char32_t>*)local_b80;
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_bc0 = "./core/math/vector3.h";
                  local_bb0 = "slide";
                  local_bf8 = (String*)0x10bd0e;
                  local_c30 = (CowData<char32_t>*)local_b70;
                  local_ba8 = "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()";
                  pcVar8 = " must be normalized.";
                  goto LAB_00108073;
               }

               fVar15 = SQRT(fVar15);
               local_b40 = local_b40 / fVar15;
               auVar26._4_4_ = fVar15;
               auVar26._0_4_ = fVar15;
               auVar26._12_4_ = _LC6._4_4_;
               auVar26._8_4_ = (float)_LC6;
               auVar28 = divps(auVar14, auVar26);
               fVar15 = auVar28._0_4_;
               fVar17 = auVar28._4_4_;
               local_b48 = auVar28._0_8_;
               fVar16 = fVar15 * fVar15 + fVar17 * fVar17 + local_b40 * local_b40;
               if (( fVar16 != (float)_LC6 ) && ( _LC42 <= ABS(fVar16 - (float)_LC6) )) {
                  local_c40 = (CowData<char32_t>*)local_b80;
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_bf8 = (String*)0x10bd0e;
                  local_c30 = (CowData<char32_t>*)local_b70;
                  local_bb0 = "slide";
                  pcVar8 = " must be normalized.";
                  local_ba8 = "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()";
                  local_bc0 = "./core/math/vector3.h";
                  goto LAB_0010808a;
               }

               fVar16 = fVar15 * local_b68 + fStack_b64 * fVar17 + local_b60 * local_b40;
               local_b60 = local_b60 - fVar16 * local_b40;
               local_b68 = local_b68 - fVar16 * fVar15;
               fStack_b64 = fStack_b64 - fVar16 * fVar17;
            }
 else {
               local_c38 = (CowData<char32_t>*)&local_b78;
               local_b78 = 0;
               local_ba0 = " must be normalized.";
               puStack_c50 = (undefined*)0x109b23;
               String::parse_latin1((String*)local_c38, " must be normalized.");
               puStack_c50 = (undefined*)0x109b30;
               Vector3::operator_cast_to_String(local_b88);
               local_c40 = (CowData<char32_t>*)local_b80;
               local_bf8 = (String*)0x10bd0e;
               puStack_c50 = (undefined*)0x109b54;
               operator+((char *)
               local_c40,(String*)"The normal Vector3 ";
               local_c30 = (CowData<char32_t>*)local_b70;
               puStack_c50 = (undefined*)0x109b73;
               String::operator +((String*)local_c30, (String*)local_c40);
               uStack_c58 = 0;
               local_ba8 = "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()";
               local_bc0 = "./core/math/vector3.h";
               local_bb0 = "slide";
               uStack_c60 = 0x109bbe;
               _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
               uStack_c60 = 0x109bc8;
               CowData<char32_t>::_unref(local_c30);
               uStack_c60 = 0x109bd2;
               CowData<char32_t>::_unref(local_c40);
               uStack_c60 = 0x109bda;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
               uStack_c60 = 0x109be4;
               CowData<char32_t>::_unref(local_c38);
               pcVar8 = local_ba0;
               LAB_00108073:local_b48 = 0;
               local_b40 = 0.0;
               LAB_0010808a:local_b78 = 0;
               puStack_c50 = (undefined*)0x1080b3;
               pcVar3 = local_bb0;
               local_bb0 = local_ba8;
               local_ba8 = pcVar3;
               String::parse_latin1((String*)local_c38, pcVar8);
               puStack_c50 = (undefined*)0x1080c3;
               Vector3::operator_cast_to_String(local_b88);
               puStack_c50 = (undefined*)0x1080d5;
               operator+((char *)
               local_c40,local_bf8;
               puStack_c50 = (undefined*)0x1080e9;
               String::operator +((String*)local_c30, (String*)local_c40);
               uStack_c58 = 0;
               uStack_c60 = 0x108119;
               _err_print_error(local_ba8, local_bc0, 0x219, local_bb0, local_c30, 0);
               uStack_c60 = 0x108123;
               CowData<char32_t>::_unref(local_c30);
               uStack_c60 = 0x10812d;
               CowData<char32_t>::_unref(local_c40);
               uStack_c60 = 0x108135;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
               uStack_c60 = 0x10813f;
               CowData<char32_t>::_unref(local_c38);
               local_b68 = 0.0;
               fStack_b64 = 0.0;
               local_b60 = 0.0;
            }

            if (local_bcc <= 0.0) {
               fVar17 = (float)( (ulong)local_b48 >> 0x20 );
               fVar15 = (float)local_b48 * (float)local_b48 + fVar17 * fVar17 + local_b40 * local_b40;
               if (( fVar15 == (float)_LC6 ) || ( ABS(fVar15 - (float)_LC6) < _LC42 )) {
                  fVar15 = (float)local_b48 * *(float*)( this + 0x670 ) + *(float*)( this + 0x674 ) * fVar17 + local_b40 * *(float*)( this + 0x678 );
                  fVar16 = *(float*)( this + 0x678 ) - fVar15 * local_b40;
                  uVar19 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) - fVar15 * fVar17, (float)*(undefined8*)( this + 0x670 ) - fVar15 * (float)local_b48);
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x109d55;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x109d65;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x109d84;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x109da3;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x109dd6;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x109de0;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x109dea;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x109df2;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x109dfc;
                  CowData<char32_t>::_unref(local_c38);
                  uVar19 = 0;
                  fVar16 = 0.0;
               }

               *(undefined8*)( this + 0x670 ) = uVar19;
               *(float*)( this + 0x678 ) = fVar16;
               if (local_bb8._0_1_ != '\0') {
                  fVar16 = *(float*)( this + 0x664 );
                  fVar17 = *(float*)( this + 0x668 );
                  fVar15 = *(float*)( this + 0x66c );
                  goto LAB_00108ba5;
               }

               if ((char)local_c00 == '\0') goto LAB_0010835d;
               LAB_00108cc1:if (this[0x630] == (CharacterBody3D)0x0) {
                  fVar16 = *(float*)( this + 0x664 );
                  fVar15 = *(float*)( this + 0x66c );
                  fVar17 = *(float*)( this + 0x668 );
                  LAB_001083a1:if (local_b68 * fVar16 + fVar17 * fStack_b64 + local_b60 * fVar15 < 0.0) {
                     fVar21 = *(float*)( this + 0x68c );
                     fVar24 = *(float*)( this + 0x690 );
                     fVar29 = *(float*)( this + 0x688 );
                     fVar33 = fVar29 * fVar29 + fVar21 * fVar21 + fVar24 * fVar24;
                     if (( fVar33 == (float)_LC6 ) || ( ABS(fVar33 - (float)_LC6) < _LC42 )) {
                        fVar29 = fVar29 * local_b68 + fVar21 * fStack_b64 + local_b60 * fVar24;
                        fVar33 = local_b60 - fVar24 * fVar29;
                        fVar24 = local_b68 - fVar29 * *(float*)( this + 0x688 );
                        fVar29 = fStack_b64 - fVar29 * fVar21;
                        if (fVar16 * fVar24 + fVar17 * fVar29 + fVar15 * fVar33 < 0.0) goto LAB_00108417;
                     }
 else {
                        local_c38 = (CowData<char32_t>*)&local_b78;
                        local_b78 = 0;
                        puStack_c50 = (undefined*)0x109a31;
                        String::parse_latin1((String*)local_c38, " must be normalized.");
                        puStack_c50 = (undefined*)0x109a40;
                        Vector3::operator_cast_to_String(local_b88);
                        local_c40 = (CowData<char32_t>*)local_b80;
                        puStack_c50 = (undefined*)0x109a5f;
                        operator+((char *)
                        local_c40,(String*)"The normal Vector3 ";
                        local_c30 = (CowData<char32_t>*)local_b70;
                        puStack_c50 = (undefined*)0x109a7e;
                        String::operator +((String*)local_c30, (String*)local_c40);
                        uStack_c58 = 0;
                        uStack_c60 = 0x109ab1;
                        _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                        uStack_c60 = 0x109abb;
                        CowData<char32_t>::_unref(local_c30);
                        uStack_c60 = 0x109ac5;
                        CowData<char32_t>::_unref(local_c40);
                        uStack_c60 = 0x109acd;
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                        uStack_c60 = 0x109ad7;
                        CowData<char32_t>::_unref(local_c38);
                     }

                  }

                  fVar24 = local_b68;
                  fVar29 = fStack_b64;
                  fVar33 = local_b60;
                  if (local_bc8._0_1_ == '\0') goto LAB_00108417;
               }

               local_b68 = 0.0;
               fStack_b64 = 0.0;
               local_b60 = 0.0;
               *(undefined8*)( this + 0x670 ) = 0;
               *(undefined4*)( this + 0x678 ) = 0;
               fVar24 = local_b68;
               fVar29 = fStack_b64;
               fVar33 = local_b60;
               LAB_00108417:local_b60 = fVar33;
               fStack_b64 = fVar29;
               local_b68 = fVar24;
               if (local_bd2 == false) {
                  local_c0c = local_c0c + (float)local_a78;
                  local_c14 = local_c14 + local_a78._4_4_;
                  local_c10 = local_c10 + fStack_a70;
                  goto LAB_00106b90;
               }

            }
 else {
               fVar15 = local_a44 * local_a44 + fStack_a40 * fStack_a40 + local_a3c * local_a3c;
               if (( fVar15 == (float)_LC6 ) || ( ABS(fVar15 - (float)_LC6) < _LC42 )) {
                  fVar15 = local_a44 * *(float*)( this + 0x670 ) + *(float*)( this + 0x674 ) * fStack_a40 + local_a3c * *(float*)( this + 0x678 );
                  fVar33 = *(float*)( this + 0x678 ) - fVar15 * local_a3c;
                  fVar24 = (float)*(undefined8*)( this + 0x670 ) - fVar15 * local_a44;
                  fVar29 = (float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) - fVar15 * fStack_a40;
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x109f4d;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x109f5d;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x109f7c;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x109f9b;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x109fce;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x109fd8;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x109fe2;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x109fea;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x109ff4;
                  CowData<char32_t>::_unref(local_c38);
                  fVar24 = 0.0;
                  fVar29 = 0.0;
                  fVar33 = 0.0;
               }

               uVar19 = *(undefined8*)( this + 0x664 );
               fVar16 = *(float*)( this + 0x664 );
               fVar15 = *(float*)( this + 0x66c );
               fVar17 = *(float*)( this + 0x668 );
               fVar30 = (float)( (ulong)uVar19 >> 0x20 );
               fVar21 = fVar16 * fVar16 + fVar30 * fVar30 + fVar15 * fVar15;
               if (( fVar21 == (float)_LC6 ) || ( ABS(fVar21 - (float)_LC6) < _LC42 )) {
                  fVar21 = fVar24 * fVar16 + fVar30 * fVar29 + fVar33 * fVar15;
                  fVar33 = fVar33 - fVar21 * fVar15;
                  fVar24 = fVar24 - fVar21 * (float)uVar19;
                  fVar29 = fVar29 - fVar21 * fVar30;
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x109e40;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x109e4d;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x109e6c;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x109e8b;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x109ebe;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x109ec8;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x109ed2;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x109eda;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x109ee4;
                  CowData<char32_t>::_unref(local_c38);
                  fVar24 = 0.0;
                  fVar29 = 0.0;
                  fVar15 = *(float*)( this + 0x66c );
                  fVar33 = 0.0;
                  uVar19 = *(undefined8*)( this + 0x664 );
                  fVar16 = *(float*)( this + 0x664 );
                  fVar17 = *(float*)( this + 0x668 );
               }

               fVar21 = *(float*)( this + 0x678 ) * fVar15 + *(float*)( this + 0x670 ) * fVar16 + *(float*)( this + 0x674 ) * fVar17;
               *(float*)( this + 0x678 ) = fVar21 * fVar15 + fVar33;
               *(ulong*)( this + 0x670 ) = CONCAT44(fVar21 * (float)( (ulong)uVar19 >> 0x20 ) + fVar29, fVar21 * (float)uVar19 + fVar24);
               if (local_bb8._0_1_ == '\0') {
                  LAB_0010835d:fVar24 = local_b68;
                  fVar29 = fStack_b64;
                  fVar33 = local_b60;
                  if (this[0x630] == (CharacterBody3D)0x0) {
                     fVar16 = *(float*)( this + 0x664 );
                     fVar15 = *(float*)( this + 0x66c );
                     fVar17 = *(float*)( this + 0x668 );
                     goto LAB_00108399;
                  }

                  goto LAB_00108417;
               }

               LAB_00108ba5:if (local_b68 * fVar16 + fStack_b64 * fVar17 + local_b60 * fVar15 <= 0.0) {
                  LAB_00109026:if ((char)local_c00 != '\0') goto LAB_00108cc1;
                  CVar11 = this[0x630];
               }
 else {
                  fVar33 = local_bd8 * *(float*)( this + 0x68c ) - local_bec * *(float*)( this + 0x688 );
                  fVar24 = *(float*)( this + 0x690 ) * (float)local_be0 - (float)*(undefined8*)( this + 0x68c ) * local_be8;
                  fVar29 = *(float*)( this + 0x688 ) * (float)( (ulong)local_be0 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0x68c ) >> 0x20 ) * fStack_be4;
                  if (( fVar29 == 0.0 && fVar24 == 0.0 ) && ( fVar33 == 0.0 )) goto LAB_00109026;
                  fStack_b64 = local_b60 * fVar33 + fVar24 * local_b68 + fStack_b64 * fVar29;
                  local_b60 = fStack_b64 * fVar33;
                  local_b68 = fStack_b64 * fVar24;
                  fStack_b64 = fStack_b64 * fVar29;
                  if ((char)local_c00 != '\0') goto LAB_00108cc1;
                  CVar11 = this[0x630];
               }

               if (CVar11 == (CharacterBody3D)0x0) {
                  LAB_00108399:local_bc8 = (float)( (uint)local_bc8 & 0xffffff00 );
                  goto LAB_001083a1;
               }

            }

            local_bf8 = (String*)( (ulong)local_bf8 & 0xffffffffffffff00 );
            if (0.0 < *(float*)( this + 0x660 )) goto LAB_00107965;
            local_c0c = local_c0c + (float)local_a78;
            local_c14 = local_c14 + local_a78._4_4_;
            local_c10 = local_c10 + fStack_a70;
         }

         LAB_00106fcc:if (( ( this[0x634] != (CharacterBody3D)0x0 ) && ( local_c15 != 0 ) ) && ( this[0x630] != (CharacterBody3D)0x0 )) {
            puStack_c50 = (undefined*)0x107008;
            local_c40 = (CowData<char32_t>*)&local_b68;
            cVar4 = Vector3::is_zero_approx();
            if (cVar4 == '\0') {
               fVar15 = *(float*)( this + 0x664 );
               fVar17 = *(float*)( this + 0x668 );
               fVar16 = *(float*)( this + 0x66c );
               fVar24 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
               if (( fVar24 == (float)_LC6 ) || ( ABS(fVar24 - (float)_LC6) < _LC42 )) {
                  fVar24 = local_c0c * fVar15 + local_c14 * fVar17 + local_c10 * fVar16;
                  fVar29 = local_c14 - fVar17 * fVar24;
                  fVar17 = local_c10 - fVar16 * fVar24;
                  fVar15 = local_c0c - fVar24 * fVar15;
                  fVar15 = SQRT(fVar29 * fVar29 + fVar15 * fVar15 + fVar17 * fVar17);
               }
 else {
                  local_c38 = (CowData<char32_t>*)&local_b78;
                  local_c00 = local_c40;
                  local_b78 = 0;
                  puStack_c50 = (undefined*)0x109945;
                  String::parse_latin1((String*)local_c38, " must be normalized.");
                  puStack_c50 = (undefined*)0x109952;
                  Vector3::operator_cast_to_String(local_b88);
                  local_c40 = (CowData<char32_t>*)local_b80;
                  puStack_c50 = (undefined*)0x109971;
                  operator+((char *)
                  local_c40,(String*)"The normal Vector3 ";
                  local_c30 = (CowData<char32_t>*)local_b70;
                  puStack_c50 = (undefined*)0x109990;
                  String::operator +((String*)local_c30, (String*)local_c40);
                  uStack_c58 = 0;
                  uStack_c60 = 0x1099c3;
                  _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", local_c30, 0);
                  uStack_c60 = 0x1099cd;
                  CowData<char32_t>::_unref(local_c30);
                  uStack_c60 = 0x1099d7;
                  CowData<char32_t>::_unref(local_c40);
                  uStack_c60 = 0x1099df;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
                  uStack_c60 = 0x1099e9;
                  CowData<char32_t>::_unref(local_c38);
                  fVar15 = 0.0;
               }

               fVar15 = SQRT((float)local_b58 * (float)local_b58 + local_b58._4_4_ * local_b58._4_4_ + local_b50 * local_b50) - fVar15;
               if (fVar15 < 0.0) {
                  fVar15 = 0.0;
               }

               auVar22._4_4_ = fStack_b64;
               auVar22._0_4_ = local_b68;
               auVar22._8_8_ = 0;
               fVar17 = local_b68 * local_b68 + fStack_b64 * fStack_b64 + local_b60 * local_b60;
               fVar16 = 0.0;
               uVar19 = 0;
               if (fVar17 != 0.0) {
                  fVar17 = SQRT(fVar17);
                  fVar16 = local_b60 / fVar17;
                  auVar27._4_4_ = fVar17;
                  auVar27._0_4_ = fVar17;
                  auVar27._12_4_ = _LC6._4_4_;
                  auVar27._8_4_ = (float)_LC6;
                  auVar28 = divps(auVar22, auVar27);
                  uVar19 = auVar28._0_8_;
               }

               local_b68 = fVar15 * (float)uVar19;
               fStack_b64 = fVar15 * (float)( (ulong)uVar19 >> 0x20 );
               local_b60 = fVar16 * fVar15;
            }

         }

         LAB_00106b90:puStack_c50 = (undefined*)0x106b98;
         cVar4 = Vector3::is_zero_approx();
         if (cVar4 != '\0') goto LAB_00107b38;
         local_c15 = ( bVar5 | local_c15 ) ^ 1;
         uVar19 = local_aa8._0_8_;
         if ((void*)local_aa8._0_8_ != (void*)0x0) {
            if (local_a88._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) != 0) {
                  puStack_c50 = (undefined*)0x106bf5;
                  memset((void*)local_a98._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a88 & 0xffffffff ) * 4 ) * 4);
               }

               local_a88 = local_a88 & 0xffffffff;
            }

            puStack_c50 = (undefined*)0x106c0a;
            Memory::free_static((void*)uVar19, false);
            puStack_c50 = (undefined*)0x106c19;
            Memory::free_static((void*)local_a98._0_8_, false);
            puStack_c50 = (undefined*)0x106c28;
            Memory::free_static((void*)local_aa8._8_8_, false);
            puStack_c50 = (undefined*)0x106c37;
            Memory::free_static((void*)local_a98._8_8_, false);
         }

         uVar19 = local_ad0._0_8_;
         if ((void*)local_ad0._0_8_ != (void*)0x0) {
            if (local_ab0._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) != 0) {
                  puStack_c50 = (undefined*)0x106c7b;
                  memset((void*)local_ac0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_ab0 & 0xffffffff ) * 4 ) * 4);
               }

               local_ab0 = local_ab0 & 0xffffffff;
            }

            puStack_c50 = (undefined*)0x106c90;
            Memory::free_static((void*)uVar19, false);
            puStack_c50 = (undefined*)0x106c9f;
            Memory::free_static((void*)local_ac0._0_8_, false);
            puStack_c50 = (undefined*)0x106cae;
            Memory::free_static((void*)local_ad0._8_8_, false);
            puStack_c50 = (undefined*)0x106cbd;
            Memory::free_static((void*)local_ac0._8_8_, false);
         }

         iVar12 = iVar12 + 1;
         bVar5 = 1;
         bVar1 = false;
      }
 while ( iVar12 < *(int*)( this + 0x638 ) );
   }

   CVar11 = this[0x630];
   joined_r0x00107c50:if (CVar11 == (CharacterBody3D)0x0) {
      if (( (char)local_bb4 != '\x01' ) || ( local_bd1 != 0 )) goto LAB_00106d08;
      puStack_c50 = (undefined*)0x106cfa;
      apply_floor_snap(this);
      if (this[0x630] == (CharacterBody3D)0x0) goto LAB_00106d08;
   }
 else if (0.0 < local_bcc) goto LAB_00106d08;
   fVar15 = *(float*)( this + 0x664 );
   fVar17 = *(float*)( this + 0x66c );
   fVar24 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
   fVar16 = fVar15 * fVar15 + fVar24 * fVar24 + fVar17 * fVar17;
   if (( fVar16 == (float)_LC6 ) || ( ABS(fVar16 - (float)_LC6) < _LC42 )) {
      fVar15 = fVar15 * *(float*)( this + 0x670 ) + *(float*)( this + 0x674 ) * fVar24 + fVar17 * *(float*)( this + 0x678 );
      fVar17 = *(float*)( this + 0x678 ) - fVar15 * fVar17;
      uVar19 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) - fVar15 * fVar24, (float)*(undefined8*)( this + 0x670 ) - fVar15 * (float)*(undefined8*)( this + 0x664 ));
   }
 else {
      local_b78 = 0;
      puStack_c50 = (undefined*)0x10987c;
      String::parse_latin1((String*)&local_b78, " must be normalized.");
      puStack_c50 = (undefined*)0x109891;
      Vector3::operator_cast_to_String(local_b88);
      puStack_c50 = (undefined*)0x1098a3;
      operator+((char *)
      local_b80,(String*)"The normal Vector3 ";
      puStack_c50 = (undefined*)0x1098b1;
      String::operator +((String*)local_b70, local_b80);
      uStack_c58 = 0;
      uStack_c60 = 0x1098dc;
      _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", (String*)local_b70, 0);
      uStack_c60 = 0x1098e4;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b70);
      uStack_c60 = 0x1098ec;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b80);
      uStack_c60 = 0x1098f4;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b88);
      uStack_c60 = 0x1098fc;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b78);
      uVar19 = 0;
      fVar17 = 0.0;
   }

   *(undefined8*)( this + 0x670 ) = uVar19;
   *(float*)( this + 0x678 ) = fVar17;
   LAB_00106d08:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      puStack_c50 = &UNK_00109ae4;
      __stack_chk_fail();
   }

   return;
}
/* CharacterBody3D::move_and_slide() */undefined8 CharacterBody3D::move_and_slide(CharacterBody3D *this) {
   CharacterBody3D *pCVar1;
   float fVar2;
   CharacterBody3D CVar3;
   ushort uVar4;
   ulong uVar5;
   uint uVar6;
   char cVar7;
   uint uVar8;
   long lVar9;
   undefined8 uVar10;
   long *plVar11;
   float *pfVar12;
   float *pfVar13;
   ulong *puVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   long in_FS_OFFSET;
   bool bVar17;
   byte bVar18;
   double dVar19;
   undefined1 auVar20[16];
   float fVar21;
   undefined1 auVar22[16];
   float fVar23;
   float fVar24;
   undefined1 auVar25[12];
   undefined8 local_15c8[323];
   undefined8 uStack_bb0;
   undefined8 uStack_ba8;
   undefined8 uStack_ba0;
   float local_b8c;
   undefined8 local_b88;
   undefined8 uStack_b80;
   Vector3 local_b70[8];
   CowData<char32_t> local_b68[8];
   undefined8 local_b60;
   uint local_b58;
   undefined4 uStack_b54;
   undefined1 local_b48[8];
   float local_b40;
   undefined8 local_b14;
   float local_b0c;
   undefined8 local_b08;
   undefined8 uStack_b00;
   undefined8 uStack_af0;
   undefined8 local_ad8;
   undefined8 uStack_ad0;
   undefined4 local_ac8;
   undefined1 local_ac4;
   undefined1 local_ac0[16];
   undefined1 local_ab0[16];
   undefined8 local_aa0;
   undefined1 local_a98[16];
   undefined1 local_a88[16];
   undefined8 local_a78;
   undefined1 local_a70;
   undefined8 local_a68;
   undefined4 uStack_a60;
   undefined4 uStack_a5c;
   undefined4 uStack_a58;
   undefined4 uStack_a54;
   undefined8 uStack_a50;
   undefined4 local_a48;
   float fStack_a44;
   float fStack_a40;
   float fStack_a3c;
   float local_40[4];
   long local_30;
   bVar18 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_ba0 = 0x10a45e;
   lVar9 = Engine::get_singleton();
   if (*(char*)( lVar9 + 0x80 ) == '\0') {
      uStack_ba0 = 0x10a7b5;
      dVar19 = (double)Node::get_process_delta_time();
   }
 else {
      uStack_ba0 = 0x10a473;
      dVar19 = (double)Node::get_physics_process_delta_time();
   }

   uVar4 = *(ushort*)( this + 0x620 );
   lVar9 = 0;
   do {
      if (( uVar4 >> ( (uint)lVar9 & 0x1f ) & 1 ) != 0) {
         *(undefined4*)( this + lVar9 * 4 + 0x670 ) = 0;
      }

      lVar9 = lVar9 + 1;
   }
 while ( lVar9 != 3 );
   uStack_ba0 = 0x10a4a8;
   Node3D::get_global_transform();
   *(undefined8*)( this + 0x6d0 ) = local_b14;
   *(float*)( this + 0x6d8 ) = local_b0c;
   pCVar1 = this + 0x6ac;
   local_b48 = *(undefined1(*) [8])pCVar1;
   local_b40 = *(float*)( this + 0x6b4 );
   auVar25 = *(undefined1(*) [12])pCVar1;
   if (this[0x630] == (CharacterBody3D)0x0) {
      auVar25 = *(undefined1(*) [12])pCVar1;
      if (( this[0x631] == (CharacterBody3D)0x0 ) || ( auVar25 = *(undefined1(*) [12])pCVar1 * (long*)( this + 0x640 ) == 0 )) goto LAB_0010a4fd;
      uVar8 = *(uint*)( this + 0x654 ) & *(uint*)( this + 0x63c );
   }
 else {
      if (*(long*)( this + 0x640 ) == 0) goto LAB_0010a4fd;
      uVar8 = *(uint*)( this + 0x650 ) & *(uint*)( this + 0x63c );
   }

   if (uVar8 == 0) {
      auVar25 = ZEXT812(0);
      goto LAB_0010a4fd;
   }

   uVar5 = *(ulong*)( this + 0x648 );
   if (uVar5 == 0) {
      LAB_0010a711:uStack_ba0 = 0x10a716;
      plVar11 = (long*)PhysicsServer3D::get_singleton();
      uStack_ba0 = 0x10a729;
      plVar11 = (long*)( **(code**)( *plVar11 + 0x4d0 ) )(plVar11);
      if (plVar11 != (long*)0x0) {
         uStack_ba0 = 0x10a74c;
         ( **(code**)( *plVar11 + 0x1c0 ) )(&local_a68, plVar11);
         local_b08 = CONCAT44((float)( (ulong)local_b14 >> 0x20 ) - fStack_a40, (float)local_b14 - fStack_a44);
         uStack_b00 = CONCAT44(uStack_b00._4_4_, local_b0c - fStack_a3c);
         uStack_ba0 = 0x10a799;
         auVar25 = ( **(code**)( *plVar11 + 0x1c8 ) )(plVar11);
         goto LAB_0010a4fd;
      }

   }
 else {
      uVar8 = (uint)uVar5 & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar6 = local_b58 >> 8;
            local_b58 = uVar6 << 8;
            LOCK();
            bVar17 = (char)ObjectDB::spin_lock == '\0';
            if (bVar17) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar17) break;
            local_b58 = uVar6 << 8;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar14 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
         if (( uVar5 >> 0x18 & 0x7fffffffff ) == ( *puVar14 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar14[1] != 0) goto LAB_0010a711;
         }
 else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }

      }
 else {
         uStack_ba0 = 0x10ab7f;
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

   }

   *(undefined8*)( this + 0x640 ) = 0;
   auVar25 = ZEXT812(0);
   LAB_0010a4fd:uStack_ba0 = 0x10a50b;
   _local_b48 = auVar25;
   CowData<PhysicsServer3D::MotionResult>::resize<false>((CowData<PhysicsServer3D::MotionResult>*)( this + 0x6f0 ), 0);
   CVar3 = this[0x630];
   *(undefined4*)( this + 0x630 ) = 0;
   *(undefined8*)( this + 0x6a0 ) = 0;
   *(undefined4*)( this + 0x6a8 ) = 0;
   uStack_ba0 = 0x10a53c;
   cVar7 = Vector3::is_zero_approx();
   if (cVar7 == '\0') {
      local_b8c = (float)dVar19;
      local_b88 = CONCAT44((float)local_b48._4_4_ * local_b8c, (float)local_b48._0_4_ * local_b8c);
      uStack_b80 = CONCAT44(*(undefined4*)( this + 0x624 ), local_b8c * local_b40);
      uStack_ba0 = 0x10a816;
      Node3D::get_global_transform();
      uStack_b00 = CONCAT44(uStack_a5c, uStack_a60);
      local_b08 = local_a68;
      local_ad8 = local_b88;
      uStack_ad0 = uStack_b80;
      local_ac8 = 1;
      local_ac4 = 0;
      local_aa0 = _LC37;
      local_a78 = _LC37;
      local_a70 = 1;
      uStack_af0 = uStack_a50;
      local_ac0 = (undefined1[16])0x0;
      local_ab0 = (undefined1[16])0x0;
      local_a98 = (undefined1[16])0x0;
      local_a88 = (undefined1[16])0x0;
      uStack_ba0 = 0x10a8c3;
      HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert((RID*)&local_b58);
      if (*(long*)( this + 0x648 ) != 0) {
         uStack_ba0 = 0x10ac1f;
         HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert((ObjectID*)&local_b58);
      }

      local_a68 = 0;
      uStack_a60 = 0;
      uStack_a5c = 0;
      uStack_a58 = 0;
      uStack_a54 = 0;
      uStack_a50 = 0;
      local_a48 = 0;
      pfVar12 = &fStack_a40;
      do {
         pfVar12[0] = 0.0;
         pfVar12[1] = 0.0;
         pfVar13 = pfVar12 + 0x14;
         for (int i = 0; i < 12; i++) {
            pfVar12[( i + 2 )] = 0;
         }

         *(undefined1(*) [16])( pfVar12 + 0xe ) = (undefined1[16])0x0;
         pfVar12[0x12] = 0.0;
         pfVar12 = pfVar13;
      }
 while ( pfVar13 != local_40 );
      local_40[0] = 0.0;
      uStack_ba0 = 0x10a9b0;
      cVar7 = PhysicsBody3D::move_and_collide((MotionParameters*)this, (MotionResult*)&local_b08, SUB81(&local_a68, 0), false);
      if (cVar7 != '\0') {
         puVar15 = &local_a68;
         puVar16 = local_15c8;
         for (lVar9 = 0x145; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar16 = *puVar15;
            puVar15 = puVar15 + (ulong)bVar18 * -2 + 1;
            puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
         }

         *(undefined4*)puVar16 = *(undefined4*)puVar15;
         Vector<PhysicsServer3D::MotionResult>::push_back(this + 0x6e8);
         local_b60 = (ulong)local_b60._4_4_ << 0x20;
         local_b58 = 0x10101;
         uStack_ba0 = 0x10ac03;
         _set_collision_direction(this, &local_a68, &local_b60, CONCAT44(uStack_b54, 0x10101));
      }

      uVar10 = local_a98._0_8_;
      if ((void*)local_a98._0_8_ != (void*)0x0) {
         if (local_a78._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_a78 & 0xffffffff ) * 4 ) != 0) {
               uStack_ba0 = 0x10a9fc;
               memset((void*)local_a88._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a78 & 0xffffffff ) * 4 ) * 4);
            }

            local_a78 = local_a78 & 0xffffffff;
         }

         uStack_ba0 = 0x10aa11;
         Memory::free_static((void*)uVar10, false);
         uStack_ba0 = 0x10aa20;
         Memory::free_static((void*)local_a88._0_8_, false);
         uStack_ba0 = 0x10aa2f;
         Memory::free_static((void*)local_a98._8_8_, false);
         uStack_ba0 = 0x10aa3e;
         Memory::free_static((void*)local_a88._8_8_, false);
      }

      uVar10 = local_ac0._0_8_;
      if ((void*)local_ac0._0_8_ != (void*)0x0) {
         if (local_aa0._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_aa0 & 0xffffffff ) * 4 ) != 0) {
               uStack_ba0 = 0x10aa86;
               memset((void*)local_ab0._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_aa0 & 0xffffffff ) * 4 ) * 4);
            }

            local_aa0 = local_aa0 & 0xffffffff;
         }

         uStack_ba0 = 0x10aa9b;
         Memory::free_static((void*)uVar10, false);
         uStack_ba0 = 0x10aaaa;
         Memory::free_static((void*)local_ab0._0_8_, false);
         uStack_ba0 = 0x10aab9;
         Memory::free_static((void*)local_ac0._8_8_, false);
         uStack_ba0 = 0x10aac8;
         Memory::free_static((void*)local_ab0._8_8_, false);
      }

   }
 else {
      local_b8c = (float)dVar19;
   }

   if (*(int*)( this + 0x628 ) == 0) {
      uStack_ba0 = 0x10a576;
      _move_and_slide_grounded(this, dVar19, (bool)CVar3);
   }
 else {
      uStack_ba0 = 0x10a64d;
      _move_and_slide_floating(this, dVar19);
   }

   local_b88 = CONCAT44(local_b8c, local_b8c);
   uStack_ba0 = 0x10a590;
   Node3D::get_global_transform();
   auVar22._12_4_ = _LC6._4_4_;
   auVar22._8_4_ = (float)_LC6;
   auVar22._0_8_ = local_b88;
   *(float*)( this + 0x6e4 ) = ( fStack_a3c - *(float*)( this + 0x6d8 ) ) / local_b8c;
   auVar20._0_4_ = fStack_a44 - (float)*(undefined8*)( this + 0x6d0 );
   auVar20._4_4_ = fStack_a40 - (float)( ( ulong ) * (undefined8*)( this + 0x6d0 ) >> 0x20 );
   auVar20._8_8_ = 0;
   auVar20 = divps(auVar20, auVar22);
   *(long*)( this + 0x6dc ) = auVar20._0_8_;
   if (( ( *(int*)( this + 0x62c ) != 2 ) && ( this[0x630] == (CharacterBody3D)0x0 ) ) && ( this[0x631] == (CharacterBody3D)0x0 )) {
      auVar25 = _local_b48;
      if (*(int*)( this + 0x62c ) == 1) {
         fVar23 = *(float*)( this + 0x664 );
         fVar2 = *(float*)( this + 0x66c );
         fVar24 = (float)( ( ulong ) * (undefined8*)( this + 0x664 ) >> 0x20 );
         fVar21 = SUB124(_local_b48, 0) * fVar23 + SUB124(_local_b48, 4) * fVar24 + fVar2 * local_b40;
         if (fVar21 < 0.0) {
            fVar23 = fVar23 * fVar23 + fVar24 * fVar24 + fVar2 * fVar2;
            if (( fVar23 == (float)_LC6 ) || ( ABS(fVar23 - (float)_LC6) < _LC42 )) {
               auVar25._4_4_ = SUB124(_local_b48, 4) - fVar21 * fVar24;
               auVar25._0_4_ = SUB124(_local_b48, 0) - fVar21 * (float)*(undefined8*)( this + 0x664 );
               auVar25._8_4_ = local_b40 - fVar2 * fVar21;
            }
 else {
               local_b60 = 0;
               uStack_ba0 = 0x10ad0c;
               String::parse_latin1((String*)&local_b60, " must be normalized.");
               uStack_ba0 = 0x10ad20;
               Vector3::operator_cast_to_String(local_b70);
               uStack_ba0 = 0x10ad32;
               operator+((char *)
               local_b68,(String*)"The normal Vector3 ";
               uStack_ba0 = 0x10ad40;
               String::operator +((String*)&local_b58, (String*)local_b68);
               uStack_ba8 = 0;
               uStack_bb0 = 0x10ad6b;
               _err_print_error("slide", "./core/math/vector3.h", 0x219, "Condition \"!p_normal.is_normalized()\" is true. Returning: Vector3()", (String*)&local_b58, 0);
               uStack_bb0 = 0x10ad73;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b58);
               uStack_bb0 = 0x10ad7b;
               CowData<char32_t>::_unref(local_b68);
               uStack_bb0 = 0x10ad83;
               CowData<char32_t>::_unref((CowData<char32_t>*)local_b70);
               uStack_bb0 = 0x10ad8b;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b60);
               auVar25 = ZEXT812(0);
            }

         }

      }

      *(float*)( this + 0x678 ) = auVar25._8_4_ + *(float*)( this + 0x678 );
      *(ulong*)( this + 0x670 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x670 ) >> 0x20 ) + auVar25._4_4_, (float)*(undefined8*)( this + 0x670 ) + auVar25._0_4_);
   }

   lVar9 = *(long*)( this + 0x6f0 );
   if (lVar9 == 0) {
      uVar10 = 0;
   }
 else {
      uVar10 = CONCAT71(( int7 )((ulong)lVar9 >> 8), 0 < *(long*)( lVar9 + -8 ));
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      uStack_ba0 = 0x10ad9e;
      __stack_chk_fail();
   }

   return uVar10;
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
   return (uint)CONCAT71(0x11fa, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11fa, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* KinematicCollision3D::is_class_ptr(void*) const */uint KinematicCollision3D::is_class_ptr(KinematicCollision3D *this, void *param_1) {
   return (uint)CONCAT71(0x11fa, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11fa, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11fa, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* Node3D::set_transform_gizmo_visible(bool) */void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
   this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
   return;
}
/* Node3D::is_transform_gizmo_visible() const */byte Node3D::is_transform_gizmo_visible(Node3D *this) {
   return (byte)this[0x518] >> 2 & 1;
}
/* CharacterBody3D::is_class_ptr(void*) const */uint CharacterBody3D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x11f9, in_RSI == &PhysicsBody3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f9, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f9, in_RSI == &CollisionObject3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f9, in_RSI == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f9, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* CharacterBody3D::_getv(StringName const&, Variant&) const */undefined8 CharacterBody3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CharacterBody3D::_setv(StringName const&, Variant const&) */undefined8 CharacterBody3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MethodBindTR<Ref<KinematicCollision3D>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Ref<KinematicCollision3D>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTR<Ref<KinematicCollision3D>>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<KinematicCollision3D>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::_gen_argument_type(int) const */int MethodBindTR<Ref<KinematicCollision3D>,int>::_gen_argument_type(MethodBindTR<Ref<KinematicCollision3D>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::get_argument_meta(int) const */byte MethodBindTR<Ref<KinematicCollision3D>,int>::get_argument_meta(MethodBindTR<Ref<KinematicCollision3D>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<float, Vector3 const&>::_gen_argument_type(int) const */char MethodBindTRC<float,Vector3_const&>::_gen_argument_type(MethodBindTRC<float,Vector3_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 6U ) + 3;
}
/* MethodBindTRC<float, Vector3 const&>::get_argument_meta(int) const */uint MethodBindTRC<float,Vector3_const&>::get_argument_meta(MethodBindTRC<float,Vector3_const&> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::_gen_argument_type(int) const */undefined8 MethodBindTRC<CharacterBody3D::PlatformOnLeave>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::get_argument_meta(int) const */undefined8 MethodBindTRC<CharacterBody3D::PlatformOnLeave>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::_gen_argument_type(int) const */char MethodBindT<CharacterBody3D::PlatformOnLeave>::_gen_argument_type(MethodBindT<CharacterBody3D::PlatformOnLeave> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::get_argument_meta(int) const */undefined8 MethodBindT<CharacterBody3D::PlatformOnLeave>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<CharacterBody3D::MotionMode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<CharacterBody3D::MotionMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<CharacterBody3D::MotionMode>::_gen_argument_type(int) const */char MethodBindT<CharacterBody3D::MotionMode>::_gen_argument_type(MethodBindT<CharacterBody3D::MotionMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<CharacterBody3D::MotionMode>::get_argument_meta(int) const */undefined8 MethodBindT<CharacterBody3D::MotionMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<float>::_gen_argument_type(int) const */undefined8 MethodBindTR<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTR<float>::get_argument_meta(int) const */uint MethodBindTR<float>::get_argument_meta(MethodBindTR<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<unsigned int>::get_argument_meta(int) const */uint MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this, int param_1) {
   return param_1 >> 0x1f & 7;
}
/* MethodBindT<unsigned int>::_gen_argument_type(int) const */char MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<unsigned int>::get_argument_meta(int) const */byte MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this, int param_1) {
   return -(param_1 == 0) & 7;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<Vector3 const&>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3_const&>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3 const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */byte MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool>::_gen_argument_type(int) const */undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTR<bool>::get_argument_meta(int) const */undefined8 MethodBindTR<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ed18;
   Object::~Object((Object*)this);
   return;
}
/* KinematicCollision3D::~KinematicCollision3D() */void KinematicCollision3D::~KinematicCollision3D(KinematicCollision3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ed18;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ed18;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* KinematicCollision3D::~KinematicCollision3D() */void KinematicCollision3D::~KinematicCollision3D(KinematicCollision3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ed18;
   Object::~Object((Object*)this);
   operator_delete(this, 3000);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f1f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f1f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f258;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f258;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f4f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f4f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f618;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f618;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f678;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f678;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f3d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f3d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f378;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f378;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f2b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f2b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT() */void MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT(MethodBindT<CharacterBody3D::MotionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f6d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT() */void MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT(MethodBindT<CharacterBody3D::MotionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f6d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::MotionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f738;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::MotionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f738;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT() */void MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT(MethodBindT<CharacterBody3D::PlatformOnLeave> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f798;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT() */void MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT(MethodBindT<CharacterBody3D::PlatformOnLeave> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f798;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::PlatformOnLeave> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f7f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::PlatformOnLeave> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f7f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f858;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f858;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<float,Vector3_const&>::~MethodBindTRC(MethodBindTRC<float,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f8b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<float,Vector3_const&>::~MethodBindTRC(MethodBindTRC<float,Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f8b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f318;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f318;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f5b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f5b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f918;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f918;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f978;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f978;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CharacterBody3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 CharacterBody3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Node3D::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CharacterBody3D::_property_can_revertv(StringName const&) const */undefined8 CharacterBody3D::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00125008 != Object::_property_can_revert) {
      uVar1 = Node3D::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CowData<PhysicsServer3D::MotionResult>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<PhysicsServer3D::MotionResult>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<KinematicCollision3D> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<KinematicCollision3D>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CharacterBody3D::_get_slide_collision(int) [clone .cold] */void CharacterBody3D::_get_slide_collision(int param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010c4e2(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CharacterBody3D::_validate_propertyv(PropertyInfo&) const */void CharacterBody3D::_validate_propertyv(CharacterBody3D *this, PropertyInfo *param_1) {
   Node::_validate_property((PropertyInfo*)this);
   if ((code*)PTR__validate_property_00125010 != Node::_validate_property) {
      Node3D::_validate_property((PropertyInfo*)this);
   }

   if (*(int*)( this + 0x628 ) == 1) {
      _validate_property(param_1);
      return;
   }

   return;
}
/* CharacterBody3D::_get_class_namev() const */undefined8 *CharacterBody3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010c593:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010c593;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "CharacterBody3D");
         goto LAB_0010c5fe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "CharacterBody3D");
   LAB_0010c5fe:return &_get_class_namev();
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
         LAB_0010c673:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010c673;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010c6de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010c6de:return &_get_class_namev();
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
         LAB_0010c763:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010c763;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "KinematicCollision3D");
         goto LAB_0010c7ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "KinematicCollision3D");
   LAB_0010c7ce:return &_get_class_namev();
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
/* CharacterBody3D::get_class() const */void CharacterBody3D::get_class(void) {
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010cc0f;
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

      LAB_0010cc0f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010ccc3;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_0010cd73;
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

         LAB_0010cd73:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010ccc3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010ccc3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
                  if (lVar4 == 0) goto LAB_0010ce9f;
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

      LAB_0010ce9f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010cf53;
   }

   cVar5 = String::operator ==(param_1, "KinematicCollision3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010cf53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
   local_48 = &_LC26;
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

         goto joined_r0x0010d0ec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d0ec:local_58 = lVar2;
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
   local_48 = &_LC26;
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

         goto joined_r0x0010d26c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d26c:local_58 = lVar2;
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
/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC26;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 9;
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

         goto joined_r0x0010d3ec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d3ec:local_58 = lVar2;
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
/* MethodBindTR<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<float>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC26;
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

         goto joined_r0x0010d56c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d56c:local_58 = lVar2;
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
   local_48 = &_LC26;
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

         goto joined_r0x0010d6ec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d6ec:local_58 = lVar2;
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
   local_48 = &_LC26;
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

         goto joined_r0x0010d86c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d86c:local_58 = lVar2;
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
/* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC26;
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

         goto joined_r0x0010d9ec;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010d9ec:local_58 = lVar2;
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
/* MethodBindTRC<Vector3 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3_const&>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC26;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 9;
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

         goto joined_r0x0010db6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010db6c:local_58 = lVar2;
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
/* MethodBindTR<Ref<KinematicCollision3D>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<KinematicCollision3D>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "KinematicCollision3D";
   local_40 = 0x14;
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
         goto LAB_0010dc60;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010dc60:lVar2 = local_58;
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
/* Node3D::is_class(String const&) const */undefined8 Node3D::is_class(Node3D *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010dfcf;
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

      LAB_0010dfcf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010e083;
   }

   cVar6 = String::operator ==(param_1, "Node3D");
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
                     if (lVar5 == 0) goto LAB_0010e15b;
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

         LAB_0010e15b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010e083;
      }

      cVar6 = String::operator ==(param_1, "Node");
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
                        if (lVar5 == 0) goto LAB_0010e23b;
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

            LAB_0010e23b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010e083;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         goto LAB_0010e2e4;
      }

   }

   LAB_0010e083:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e2e4:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */undefined1[16];HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   undefined1 auVar30[16];
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
   undefined1 auVar45[16];
   ulong uStack_98;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   lVar34 = *in_RSI;
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      local_70 = *in_RDX;
      uVar32 = *(uint*)( in_RSI + 4 );
      if (lVar34 != 0) goto LAB_0010e49f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0010e49f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = local_70 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_0010e951;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC47 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_0010e951;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   lVar36 = *in_RDX;
   *(long*)( lVar34 + uVar42 * 8 ) = lVar36;
   uVar33 = lVar36 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar36 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar6 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar36 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar36 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar36 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar36 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar36 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar36 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0010e951:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */undefined1[16];HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   undefined1 auVar30[16];
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
   undefined1 auVar45[16];
   ulong uStack_98;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   lVar34 = *in_RSI;
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      local_70 = *in_RDX;
      uVar32 = *(uint*)( in_RSI + 4 );
      if (lVar34 != 0) goto LAB_0010eacf;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0010eacf:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = local_70 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_0010ef81;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC47 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_0010ef81;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   lVar36 = *in_RDX;
   *(long*)( lVar34 + uVar42 * 8 ) = lVar36;
   uVar33 = lVar36 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar36 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar6 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar36 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar36 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar36 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar36 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar36 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar36 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0010ef81:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
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
   String::split(local_58, SUB81(param_1, 0), 0x10f14d);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC53;
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
            goto LAB_0010f20a;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   local_60 = 0;
   local_48 = &_LC53;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010f20a:plVar4 = local_50;
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
/* GetTypeInfo<CharacterBody3D::MotionMode, void>::get_class_info() */GetTypeInfo<CharacterBody3D::MotionMode,void> * __thiscall
GetTypeInfo<CharacterBody3D::MotionMode,void>::get_class_info
          (GetTypeInfo<CharacterBody3D::MotionMode,void> *this){
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
   local_48 = "CharacterBody3D::MotionMode";
   local_40 = 0x1b;
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
/* GetTypeInfo<CharacterBody3D::PlatformOnLeave, void>::get_class_info() */GetTypeInfo<CharacterBody3D::PlatformOnLeave,void> * __thiscall
GetTypeInfo<CharacterBody3D::PlatformOnLeave,void>::get_class_info
          (GetTypeInfo<CharacterBody3D::PlatformOnLeave,void> *this){
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
   local_48 = "CharacterBody3D::PlatformOnLeave";
   local_40 = 0x20;
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
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<CharacterBody3D::PlatformOnLeave>::_gen_argument_type_info(int param_1) {
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
   local_30 = 0x20;
   local_38 = "CharacterBody3D::PlatformOnLeave";
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
/* MethodBindTRC<CharacterBody3D::MotionMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<CharacterBody3D::MotionMode>::_gen_argument_type_info(int param_1) {
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
   local_30 = 0x1b;
   local_38 = "CharacterBody3D::MotionMode";
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
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_48;
      if (local_48 != 0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)PTR__bind_methods_00125018 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
         if ((code*)PTR__bind_methods_00125028 != RefCounted::_bind_methods) {
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
      if ((code*)PTR__bind_methods_00125020 != RefCounted::_bind_methods) {
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
/* CharacterBody3D::is_class(String const&) const */undefined8 CharacterBody3D::is_class(CharacterBody3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010fd2f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar3 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar8 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010fd2f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010fde3;
   }

   cVar6 = String::operator ==(param_1, "CharacterBody3D");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  do {
                     lVar3 = *plVar1;
                     if (lVar3 == 0) goto LAB_0010fecb;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar3 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar3 + 1;
                        lVar8 = lVar3;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar5 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010fecb:cVar6 = String::operator ==(param_1, (String*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_0010fde3;
      }

      cVar6 = String::operator ==(param_1, "PhysicsBody3D");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar5 = *(long*)( lVar2 + 0x20 );
            if (lVar5 == 0) {
               local_60 = 0;
            }
 else {
               pcVar4 = *(char**)( lVar5 + 8 );
               local_60 = 0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( lVar5 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010fde3;
         }

         cVar6 = String::operator ==(param_1, "CollisionObject3D");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = Node3D::is_class((Node3D*)this, param_1);
               return uVar7;
            }

            goto LAB_00110005;
         }

      }

   }

   LAB_0010fde3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00110005:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   if (in_EDX != 0) goto LAB_0011005b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC26;
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
      LAB_00110150:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110150;
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
   LAB_0011005b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
   if (in_EDX != 0) goto LAB_0011029b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC26;
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
      LAB_00110390:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110390;
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
   LAB_0011029b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_001104db;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC26;
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
      LAB_001105d0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001105d0;
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
   LAB_001104db:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_0011071b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC26;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 9);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00110810:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110810;
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
   LAB_0011071b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
   if (in_EDX != 0) goto LAB_0011095b;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC26;
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
      LAB_00110a50:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00110a50;
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
   LAB_0011095b:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
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
   if (local_90 == 0) {
      LAB_00110cdd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00110cdd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x00110cff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x00110cff:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
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
   plVar1 = *(long**)pLVar5;
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

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* KinematicCollision3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void KinematicCollision3D::_get_property_listv(KinematicCollision3D *this, List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_0011105d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011105d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011107f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011107f:if (lVar2 == 0) {
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
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<CharacterBody3D::PlatformOnLeave>::_gen_argument_type_info(int param_1) {
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
      local_60._0_8_ = 0x20;
      local_68 = "CharacterBody3D::PlatformOnLeave";
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
/* MethodBindT<CharacterBody3D::MotionMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<CharacterBody3D::MotionMode>::_gen_argument_type_info(int param_1) {
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
      local_60._0_8_ = 0x1b;
      local_68 = "CharacterBody3D::MotionMode";
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
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
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
   local_78 = "Node3D";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Node3D";
   local_98 = 0;
   local_70 = 6;
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
      LAB_00111818:local_50 = 0x80;
      StringName::operator =(local_b8, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111818;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00111833;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00111833:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Node3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
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
/* CollisionObject3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CollisionObject3D::_get_property_listv(CollisionObject3D *this, List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_00111e1d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111e1d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00111e3f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00111e3f:if (lVar2 == 0) {
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
   if (local_90 == 0) {
      LAB_001121fd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001121fd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011221f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011221f:if (lVar2 == 0) {
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
/* CharacterBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CharacterBody3D::_get_property_listv(CharacterBody3D *this, List *param_1, bool param_2) {
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
      PhysicsBody3D::_get_property_listv((PhysicsBody3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CharacterBody3D";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CharacterBody3D";
   local_98 = 0;
   local_70 = 0xf;
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
      LAB_001125dd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001125dd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001125ff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001125ff:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "CharacterBody3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PhysicsBody3D::_get_property_listv((PhysicsBody3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<KinematicCollision3D>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
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
      local_78 = 0;
      local_70 = 6;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 2, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

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
      goto LAB_00112ab4;
   }

   local_a0 = 0;
   local_60 = 0x14;
   local_68 = "KinematicCollision3D";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112ae7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_00112ae7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00112ab4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector3 const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,Vector3_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_b0;
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
      local_78 = 0;
      local_70 = 6;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = &_LC26;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 9, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

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
      goto LAB_00112e1a;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC26;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112ddf:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00112ddf;
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

   LAB_00112e1a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<CharacterBody3D, bool>(bool (CharacterBody3D::*)()) */MethodBind *create_method_bind<CharacterBody3D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f1f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D>(void (CharacterBody3D::*)()) */MethodBind *create_method_bind<CharacterBody3D>(_func_void *param_1) {
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
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_0011f258;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, Vector3 const&>(void (CharacterBody3D::*)(Vector3
   const&)) */MethodBind *create_method_bind<CharacterBody3D,Vector3_const&>(_func_void_Vector3_ptr *param_1) {
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
   *(_func_void_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f2b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, Vector3 const&>(Vector3 const&
   (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,Vector3_const&>(_func_Vector3_ptr *param_1) {
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
   *(_func_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f318;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, float>(void (CharacterBody3D::*)(float)) */MethodBind *create_method_bind<CharacterBody3D,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f378;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, float>(float (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f3d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, bool>(bool (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, bool>(void (CharacterBody3D::*)(bool)) */MethodBind *create_method_bind<CharacterBody3D,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, unsigned int>(void (CharacterBody3D::*)(unsigned
   int)) */MethodBind *create_method_bind<CharacterBody3D,unsigned_int>(_func_void_uint *param_1) {
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
   *(_func_void_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f4f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, unsigned int>(unsigned int (CharacterBody3D::*)()
   const) */MethodBind *create_method_bind<CharacterBody3D,unsigned_int>(_func_uint *param_1) {
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
   *(_func_uint**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, int>(int (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f5b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, int>(void (CharacterBody3D::*)(int)) */MethodBind *create_method_bind<CharacterBody3D,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f618;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, float>(float (CharacterBody3D::*)()) */MethodBind *create_method_bind<CharacterBody3D,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f678;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, CharacterBody3D::MotionMode>(void
   (CharacterBody3D::*)(CharacterBody3D::MotionMode)) */MethodBind *create_method_bind<CharacterBody3D,CharacterBody3D::MotionMode>(_func_void_MotionMode *param_1) {
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
   *(_func_void_MotionMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f6d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D,
   CharacterBody3D::MotionMode>(CharacterBody3D::MotionMode (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,CharacterBody3D::MotionMode>(_func_MotionMode *param_1) {
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
   *(_func_MotionMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f738;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, CharacterBody3D::PlatformOnLeave>(void
   (CharacterBody3D::*)(CharacterBody3D::PlatformOnLeave)) */MethodBind *create_method_bind<CharacterBody3D,CharacterBody3D::PlatformOnLeave>(_func_void_PlatformOnLeave *param_1) {
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
   *(_func_void_PlatformOnLeave**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f798;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D,
   CharacterBody3D::PlatformOnLeave>(CharacterBody3D::PlatformOnLeave (CharacterBody3D::*)() const)
    */MethodBind *create_method_bind<CharacterBody3D,CharacterBody3D::PlatformOnLeave>(_func_PlatformOnLeave *param_1) {
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
   *(_func_PlatformOnLeave**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f7f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, Vector3>(Vector3 (CharacterBody3D::*)() const) */MethodBind *create_method_bind<CharacterBody3D,Vector3>(_func_Vector3 *param_1) {
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
   *(_func_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f858;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, float, Vector3 const&>(float
   (CharacterBody3D::*)(Vector3 const&) const) */MethodBind *create_method_bind<CharacterBody3D,float,Vector3_const&>(_func_float_Vector3_ptr *param_1) {
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
   *(_func_float_Vector3_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f8b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D, Ref<KinematicCollision3D>,
   int>(Ref<KinematicCollision3D> (CharacterBody3D::*)(int)) */MethodBind *create_method_bind<CharacterBody3D,Ref<KinematicCollision3D>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f918;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<CharacterBody3D,
   Ref<KinematicCollision3D>>(Ref<KinematicCollision3D> (CharacterBody3D::*)()) */MethodBind *create_method_bind<CharacterBody3D,Ref<KinematicCollision3D>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f978;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "CharacterBody3D";
   local_30 = 0xf;
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
/* CharacterBody3D::_initialize_classv() */void CharacterBody3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (PhysicsBody3D::initialize_class() == '\0') {
         if (CollisionObject3D::initialize_class() == '\0') {
            if (Node3D::initialize_class() == '\0') {
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
                  if ((code*)PTR__bind_methods_00125028 != Node::_bind_methods) {
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

            local_68 = 0;
            local_58 = "Node3D";
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
            CollisionObject3D::_bind_methods();
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
         if ((code*)PTR__bind_methods_00125030 != CollisionObject3D::_bind_methods) {
            PhysicsBody3D::_bind_methods();
         }

         PhysicsBody3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "PhysicsBody3D";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "CharacterBody3D";
      local_70 = 0;
      local_50 = 0xf;
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
/* CowData<Ref<KinematicCollision3D> >::_unref() */void CowData<Ref<KinematicCollision3D>>::_unref(CowData<Ref<KinematicCollision3D>> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_00114c8d:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_00114c8d;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* CharacterBody3D::~CharacterBody3D() */void CharacterBody3D::~CharacterBody3D(CharacterBody3D *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_0011efd8;
   CowData<Ref<KinematicCollision3D>>::_unref((CowData<Ref<KinematicCollision3D>>*)( this + 0x700 ));
   if (*(long*)( this + 0x6f0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x6f0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x6f0 );
         *(undefined8*)( this + 0x6f0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(code**)this = RefCounted::reference;
   if (*(long*)( this + 0x618 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x618 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
            CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
            return;
         }

      }

   }

   CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
   return;
}
/* CharacterBody3D::~CharacterBody3D() */void CharacterBody3D::~CharacterBody3D(CharacterBody3D *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_0011efd8;
   CowData<Ref<KinematicCollision3D>>::_unref((CowData<Ref<KinematicCollision3D>>*)( this + 0x700 ));
   if (*(long*)( this + 0x6f0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x6f0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x6f0 );
         *(undefined8*)( this + 0x6f0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(code**)this = RefCounted::reference;
   if (*(long*)( this + 0x618 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x618 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   CollisionObject3D::~CollisionObject3D((CollisionObject3D*)this);
   operator_delete(this, 0x708);
   return;
}
/* CowData<Ref<KinematicCollision3D> >::_realloc(long) */undefined8 CowData<Ref<KinematicCollision3D>>::_realloc(CowData<Ref<KinematicCollision3D>> *this, long param_1) {
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
/* CowData<PhysicsServer3D::MotionResult>::_realloc(long) */undefined8 CowData<PhysicsServer3D::MotionResult>::_realloc(CowData<PhysicsServer3D::MotionResult> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<PhysicsServer3D::MotionResult>::resize<false>(long) */undefined8 CowData<PhysicsServer3D::MotionResult>::resize<false>(CowData<PhysicsServer3D::MotionResult> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   long lVar9;
   undefined8 *puVar10;
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
      lVar3 = lVar11 * 0xa30;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xa30 == 0) {
      LAB_0011532b:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0xa30 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_0011532b;
   if (param_1 <= lVar11) {
      if (( lVar9 != lVar3 ) && ( uVar8 = _realloc(this, lVar9) ),(int)uVar8 != 0) {
         return uVar8;
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
      LAB_001152a7:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar10[-1];
      if (param_1 <= lVar3) goto LAB_00115253;
   }
 else {
      if (lVar11 != 0) {
         uVar8 = _realloc(this, lVar9);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_001152a7;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar10;
      lVar3 = 0;
   }

   puVar5 = puVar10 + lVar3 * 0x146 + 0x145;
   do {
      puVar5[-0x145] = 0;
      *(undefined4*)( puVar5 + -0x144 ) = 0;
      *(undefined8*)( (long)puVar5 + -0xa1c ) = 0;
      *(undefined4*)( (long)puVar5 + -0xa14 ) = 0;
      puVar5[-0x142] = 0;
      *(undefined4*)( puVar5 + -0x141 ) = 0;
      puVar6 = puVar5 + -0x140;
      do {
         *puVar6 = 0;
         puVar7 = puVar6 + 10;
         *(undefined4*)( puVar6 + 1 ) = 0;
         *(undefined8*)( (long)puVar6 + 0xc ) = 0;
         *(undefined4*)( (long)puVar6 + 0x14 ) = 0;
         puVar6[3] = 0;
         *(undefined4*)( puVar6 + 4 ) = 0;
         *(undefined8*)( (long)puVar6 + 0x24 ) = 0;
         *(undefined4*)( (long)puVar6 + 0x2c ) = 0;
         *(undefined4*)( puVar6 + 6 ) = 0;
         *(undefined4*)( (long)puVar6 + 0x34 ) = 0;
         *(undefined1(*) [16])( puVar6 + 7 ) = (undefined1[16])0x0;
         *(undefined4*)( puVar6 + 9 ) = 0;
         puVar6 = puVar7;
      }
 while ( puVar7 != puVar5 );
      *(undefined4*)puVar5 = 0;
      puVar5 = puVar5 + 0x146;
   }
 while ( puVar5 != puVar10 + param_1 * 0x146 + 0x145 );
   LAB_00115253:puVar10[-1] = param_1;
   return 0;
}
/* CharacterBody3D::_notificationv(int, bool) */void CharacterBody3D::_notificationv(CharacterBody3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 10) {
         *(undefined4*)( this + 0x630 ) = 0;
         *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
         CowData<PhysicsServer3D::MotionResult>::resize<false>((CowData<PhysicsServer3D::MotionResult>*)( this + 0x6f0 ), 0);
         *(undefined8*)( this + 0x6ac ) = 0;
         *(undefined4*)( this + 0x6b4 ) = 0;
         *(undefined8*)( this + 0x6b8 ) = 0;
         *(undefined4*)( this + 0x6c0 ) = 0;
      }

      if ((code*)PTR__notification_00125038 != Node3D::_notification) {
         CollisionObject3D::_notification(iVar1);
      }

      Node3D::_notification(iVar1);
      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   Node3D::_notification(iVar1);
   if ((code*)PTR__notification_00125038 != Node3D::_notification) {
      CollisionObject3D::_notification(iVar1);
   }

   if (param_1 == 10) {
      *(undefined4*)( this + 0x630 ) = 0;
      *(undefined1(*) [16])( this + 0x640 ) = (undefined1[16])0x0;
      CowData<PhysicsServer3D::MotionResult>::resize<false>((CowData<PhysicsServer3D::MotionResult>*)( this + 0x6f0 ), 0);
      *(undefined8*)( this + 0x6ac ) = 0;
      *(undefined4*)( this + 0x6b4 ) = 0;
      *(undefined8*)( this + 0x6b8 ) = 0;
      *(undefined4*)( this + 0x6c0 ) = 0;
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x001156a8) *//* WARNING: Removing unreachable block (ram,0x0011583d) *//* WARNING: Removing unreachable block (ram,0x00115849) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<float, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,Vector3_const&>::validated_call(MethodBindTRC<float,Vector3_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001159cf;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_001159cf:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, Vector3 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,Vector3_const&>::ptrcall(MethodBindTRC<float,Vector3_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00115bab;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(double*)param_3 = (double)fVar3;
   LAB_00115bab:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         auVar3._8_4_ = local_54._8_4_;
         auVar3._0_8_ = local_54._0_8_;
         if (( StringName::configured != '\0' ) && ( local_54 = local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00115ea0;
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

   LAB_00115ea0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001160bb;
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
   LAB_001160bb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011627a;
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
   LAB_0011627a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<CharacterBody3D::PlatformOnLeave>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001164b0;
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

   LAB_001164b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<CharacterBody3D::PlatformOnLeave>::validated_call(MethodBindTRC<CharacterBody3D::PlatformOnLeave> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001166c4;
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
   LAB_001166c4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<CharacterBody3D::PlatformOnLeave>::ptrcall(MethodBindTRC<CharacterBody3D::PlatformOnLeave> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00116873;
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
   LAB_00116873:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<CharacterBody3D::PlatformOnLeave>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00116bb1;
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
      /* WARNING: Could not recover jumptable at 0x00116a3c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00116bb1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::ptrcall(Object*, void const**, void*) const */void MethodBindT<CharacterBody3D::PlatformOnLeave>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00116d91;
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
      /* WARNING: Could not recover jumptable at 0x00116c1b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00116d91:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<CharacterBody3D::MotionMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116e60;
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

   LAB_00116e60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<CharacterBody3D::MotionMode>::validated_call(MethodBindTRC<CharacterBody3D::MotionMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00117074;
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
   LAB_00117074:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<CharacterBody3D::MotionMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<CharacterBody3D::MotionMode>::ptrcall(MethodBindTRC<CharacterBody3D::MotionMode> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117223;
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
   LAB_00117223:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<CharacterBody3D::MotionMode>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindT<CharacterBody3D::MotionMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00117561;
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
      /* WARNING: Could not recover jumptable at 0x001173ec. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00117561:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<CharacterBody3D::MotionMode>::ptrcall(Object*, void const**, void*) const */void MethodBindT<CharacterBody3D::MotionMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117741;
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
      /* WARNING: Could not recover jumptable at 0x001175cb. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00117741:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117810;
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

   LAB_00117810:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<float>::validated_call(MethodBindTR<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117a28;
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
   LAB_00117a28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<float>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<float>::ptrcall(MethodBindTR<float> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117be7;
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
   LAB_00117be7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00117f31;
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
      /* WARNING: Could not recover jumptable at 0x00117dbc. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00117f31:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00118111;
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
      /* WARNING: Could not recover jumptable at 0x00117f9b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00118111:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001181e0;
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

   LAB_001181e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001183f4;
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
   LAB_001183f4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_001185a3;
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
   LAB_001185a3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   uint uVar2;
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001187d0;
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

         uVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, uVar2);
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

   LAB_001187d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<unsigned_int>::validated_call(MethodBindTRC<unsigned_int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_001189e4;
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
   LAB_001189e4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<unsigned_int>::ptrcall(MethodBindTRC<unsigned_int> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00118b93;
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
   LAB_00118b93:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<unsigned_int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00118ed1;
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
      /* WARNING: Could not recover jumptable at 0x00118d5c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00118ed1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<unsigned_int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001190b1;
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
      /* WARNING: Could not recover jumptable at 0x00118f3b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_001190b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00119291;
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
      /* WARNING: Could not recover jumptable at 0x0011911d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00119291:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00119479;
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
      /* WARNING: Could not recover jumptable at 0x00119302. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_00119479:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119540;
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

   LAB_00119540:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119752;
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
   LAB_00119752:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119901;
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
   LAB_00119901:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119b30;
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

   LAB_00119b30:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119d48;
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
   LAB_00119d48:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00119f07;
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
   LAB_00119f07:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011a259;
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
      /* WARNING: Could not recover jumptable at 0x0011a0e2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011a259:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0011a439;
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
      /* WARNING: Could not recover jumptable at 0x0011a2c1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011a439:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Vector3 *pVVar2;
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a500;
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

         pVVar2 = (Vector3*)( *(code*)pVVar3 )();
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

   LAB_0011a500:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector3_const&>::validated_call(MethodBindTRC<Vector3_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011a71d;
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
   *(undefined4*)( param_3 + 0x10 ) = *(undefined4*)( puVar1 + 1 );
   LAB_0011a71d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector3 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector3_const&>::ptrcall(MethodBindTRC<Vector3_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011a8dc;
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
   *(undefined4*)( (long)param_3 + 8 ) = *(undefined4*)( puVar1 + 1 );
   LAB_0011a8dc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector3_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011ac21;
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
      /* WARNING: Could not recover jumptable at 0x0011aaad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_0011ac21:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector3_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011ae01;
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
      /* WARNING: Could not recover jumptable at 0x0011ac89. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_0011ae01:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011af20;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )();
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

   LAB_0011af20:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011b29f;
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
      /* WARNING: Could not recover jumptable at 0x0011b146. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011b29f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
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

         goto LAB_0011b45f;
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
      /* WARNING: Could not recover jumptable at 0x0011b306. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011b45f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b530;
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

   LAB_0011b530:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011b742;
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
   LAB_0011b742:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011b8f1;
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
   LAB_0011b8f1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<KinematicCollision3D>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x115898;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bb70;
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

   LAB_0011bb70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<KinematicCollision3D>,int>::ptrcall(MethodBindTR<Ref<KinematicCollision3D>,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
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
         local_48 = (Object*)0x115898;
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

         goto LAB_0011bdf9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0011bdf9;
      *(undefined8*)param_3 = 0;
      goto LAB_0011be41;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011be41;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011be41:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011bdf9;
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

   LAB_0011bdf9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<KinematicCollision3D>>::ptrcall(MethodBindTR<Ref<KinematicCollision3D>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x115898;
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

         goto LAB_0011c0d6;
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
      if (pOVar5 == (Object*)0x0) goto LAB_0011c0d6;
      *(undefined8*)param_3 = 0;
      goto LAB_0011c119;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011c119;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011c119:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011c0d6;
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

   LAB_0011c0d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<KinematicCollision3D>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
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
   Object *local_58;
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

      if (local_58 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x115898;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c450;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011c490;
         LAB_0011c480:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c490:uVar8 = 4;
            goto LAB_0011c445;
         }

         if (in_R8D == 1) goto LAB_0011c480;
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

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC179;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar7 = Variant::operator_cast_to_int(pVVar12);
      ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (local_58 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_58;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_58);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }

   }
 else {
      uVar8 = 3;
      LAB_0011c445:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_0011c450:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   char *local_78;
   undefined8 local_70;
   undefined1 local_60[4][12];
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         auVar4._8_4_ = local_60[0]._8_4_;
         auVar4._0_8_ = local_60[0]._0_8_;
         if (( StringName::configured != '\0' ) && ( local_60[0] = local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c7a8;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011c800;
         LAB_0011c7f0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c800:uVar7 = 4;
            goto LAB_0011c79d;
         }

         if (in_R8D == 1) goto LAB_0011c7f0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 9);
      uVar5 = _LC180;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar5;
      }

      local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), local_60);
   }
 else {
      uVar7 = 3;
      LAB_0011c79d:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011c7a8:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<float, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<float,Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[12];
   undefined1 auVar5[12];
   undefined8 uVar6;
   char cVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   float fVar14;
   long local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   undefined1 local_6c[3][12];
   undefined1 local_48[12];
   undefined4 uStack_3c;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         auVar5._8_4_ = local_48._8_4_;
         auVar5._0_8_ = local_48._0_8_;
         auVar4._8_4_ = local_6c[0]._8_4_;
         auVar4._0_8_ = local_6c[0]._0_8_;
         if (( StringName::configured != '\0' ) && ( local_6c[0]= auVar4,local_48 = auVar5,local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011cb10;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar13 = param_2[5];
      if (pVVar13 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011cb50;
         LAB_0011cb40:pVVar13 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar13 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011cb50:uVar8 = 4;
            goto LAB_0011cb05;
         }

         if (in_R8D == 1) goto LAB_0011cb40;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar13 = pVVar13 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar7 = Variant::can_convert_strict(*(undefined4*)pVVar13, 9);
      uVar6 = _LC180;
      if (cVar7 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar6;
      }

      local_6c[0] = Variant::operator_cast_to_Vector3(pVVar13);
      local_48 = local_6c[0];
      fVar14 = (float)( *(code*)pVVar12 )((Variant*)( (long)plVar11 + (long)pVVar1 ), local_6c);
      Variant::Variant((Variant*)local_48, fVar14);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48._0_4_;
      *(ulong*)( param_1 + 8 ) = CONCAT44(uStack_3c, local_48._8_4_);
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar8 = 3;
      LAB_0011cb05:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_0011cb10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>, int>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Ref<KinematicCollision3D>,int>::validated_call(MethodBindTR<Ref<KinematicCollision3D>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
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

         goto LAB_0011cddc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
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

   LAB_0011cddc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<KinematicCollision3D>>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<Ref<KinematicCollision3D>>::validated_call(MethodBindTR<Ref<KinematicCollision3D>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x115898;
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

         goto LAB_0011d026;
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

   LAB_0011d026:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   CharacterBody3D::PlatformOnLeave>(__UnexistingClass*, void
   (__UnexistingClass::*)(CharacterBody3D::PlatformOnLeave), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,CharacterBody3D::PlatformOnLeave>(__UnexistingClass *param_1, _func_void_PlatformOnLeave *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011d2cd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011d330;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011d330:uVar6 = 4;
         LAB_0011d2cd:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011d24b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011d24b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_PlatformOnLeave**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC179;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011d2a6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<CharacterBody3D::PlatformOnLeave>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<CharacterBody3D::PlatformOnLeave>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011d396;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,CharacterBody3D::PlatformOnLeave>(p_Var2, (_func_void_PlatformOnLeave*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011d396:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   CharacterBody3D::MotionMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(CharacterBody3D::MotionMode), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,CharacterBody3D::MotionMode>(__UnexistingClass *param_1, _func_void_MotionMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011d65d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011d6c0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011d6c0:uVar6 = 4;
         LAB_0011d65d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011d5db;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011d5db:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_MotionMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC179;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x0011d636. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<CharacterBody3D::MotionMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<CharacterBody3D::MotionMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011d726;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,CharacterBody3D::MotionMode>(p_Var2, (_func_void_MotionMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011d726:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011d9ed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011da50;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011da50:uVar6 = 4;
         LAB_0011d9ed:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011d96b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011d96b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC179;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x0011d9c6. Too many branches */
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011dab6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011dab6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,unsigned_int>(__UnexistingClass *param_1, _func_void_uint *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      goto LAB_0011dd7d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011dde0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011dde0:uVar6 = 4;
         LAB_0011dd7d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011dcfb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011dcfb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_uint**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC179;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_unsigned_int(this);
   /* WARNING: Could not recover jumptable at 0x0011dd56. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(( uint )(param_1 + (long)param_3));
   return;
}
/* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011de46;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,unsigned_int>(p_Var2, (_func_void_uint*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011de46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011e10d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011e170;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011e170:uVar6 = 4;
         LAB_0011e10d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011e08b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011e08b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC181;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x0011e0e7. Too many branches */
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e1d6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e1d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011e49d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0011e500;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0011e500:uVar6 = 4;
         LAB_0011e49d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011e41b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011e41b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC182;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x0011e474. Too many branches */
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
         _err_print_error(&_LC177, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e566;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var2, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e566:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* CharacterBody3D::~CharacterBody3D() */void CharacterBody3D::~CharacterBody3D(CharacterBody3D *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<KinematicCollision3D>, int>::~MethodBindTR() */void MethodBindTR<Ref<KinematicCollision3D>,int>::~MethodBindTR(MethodBindTR<Ref<KinematicCollision3D>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector3_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, Vector3 const&>::~MethodBindTRC() */void MethodBindTRC<float,Vector3_const&>::~MethodBindTRC(MethodBindTRC<float,Vector3_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::PlatformOnLeave>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::PlatformOnLeave> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT() */void MethodBindT<CharacterBody3D::PlatformOnLeave>::~MethodBindT(MethodBindT<CharacterBody3D::PlatformOnLeave> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC() */void MethodBindTRC<CharacterBody3D::MotionMode>::~MethodBindTRC(MethodBindTRC<CharacterBody3D::MotionMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT() */void MethodBindT<CharacterBody3D::MotionMode>::~MethodBindT(MethodBindT<CharacterBody3D::MotionMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector3 const&>::~MethodBindT() */void MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<float>::~MethodBindTR() */void MethodBindTR<float>::~MethodBindTR(MethodBindTR<float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<unsigned int>::~MethodBindTRC() */void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<unsigned int>::~MethodBindT() */void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool>::~MethodBindTR() */void MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


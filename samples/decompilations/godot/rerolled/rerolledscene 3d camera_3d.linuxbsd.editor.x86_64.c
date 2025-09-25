/* Camera3D::get_camera() const */undefined8 Camera3D::get_camera(Camera3D *this) {
   return *(undefined8*)( this + 0x560 );
}
/* Camera3D::get_keep_aspect_mode() const */undefined4 Camera3D::get_keep_aspect_mode(Camera3D *this) {
   return *(undefined4*)( this + 0x55c );
}
/* Camera3D::get_doppler_tracking() const */undefined4 Camera3D::get_doppler_tracking(Camera3D *this) {
   return *(undefined4*)( this + 0x590 );
}
/* Camera3D::get_fov() const */undefined4 Camera3D::get_fov(Camera3D *this) {
   return *(undefined4*)( this + 0x53c );
}
/* Camera3D::get_size() const */undefined4 Camera3D::get_size(Camera3D *this) {
   return *(undefined4*)( this + 0x540 );
}
/* Camera3D::get_near() const */undefined4 Camera3D::get_near(Camera3D *this) {
   return *(undefined4*)( this + 0x54c );
}
/* Camera3D::get_frustum_offset() const */undefined8 Camera3D::get_frustum_offset(Camera3D *this) {
   return *(undefined8*)( this + 0x544 );
}
/* Camera3D::get_far() const */undefined4 Camera3D::get_far(Camera3D *this) {
   return *(undefined4*)( this + 0x550 );
}
/* Camera3D::get_projection() const */undefined4 Camera3D::get_projection(Camera3D *this) {
   return *(undefined4*)( this + 0x538 );
}
/* Camera3D::get_cull_mask() const */undefined4 Camera3D::get_cull_mask(Camera3D *this) {
   return *(undefined4*)( this + 0x570 );
}
/* Camera3D::get_v_offset() const */undefined4 Camera3D::get_v_offset(Camera3D *this) {
   return *(undefined4*)( this + 0x554 );
}
/* Camera3D::get_h_offset() const */undefined4 Camera3D::get_h_offset(Camera3D *this) {
   return *(undefined4*)( this + 0x558 );
}
/* Camera3D::set_perspective(float, float, float) */void Camera3D::set_perspective(Camera3D *this, float param_1, float param_2, float param_3) {
   long *plVar1;
   if (( ( ( this[0x528] != (Camera3D)0x0 ) || ( param_1 != *(float*)( this + 0x53c ) ) ) || ( param_2 != *(float*)( this + 0x54c ) ) ) || ( ( param_3 != *(float*)( this + 0x550 ) || ( *(int*)( this + 0x538 ) != 0 ) ) )) {
      *(undefined4*)( this + 0x538 ) = 0;
      *(ulong*)( this + 0x54c ) = CONCAT44(param_3, param_2);
      *(float*)( this + 0x53c ) = param_1;
      plVar1 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar1 + 0x948 ) )(*(undefined4*)( this + 0x53c ), *(undefined4*)( this + 0x54c ), *(undefined4*)( this + 0x550 ), plVar1, *(undefined8*)( this + 0x560 ));
      Node3D::update_gizmos();
      this[0x528] = (Camera3D)0x0;
   }

   return;
}
/* Camera3D::set_orthogonal(float, float, float) */void Camera3D::set_orthogonal(Camera3D *this, float param_1, float param_2, float param_3) {
   long *plVar1;
   if (( ( ( this[0x528] == (Camera3D)0x0 ) && ( param_1 == *(float*)( this + 0x540 ) ) ) && ( param_2 == *(float*)( this + 0x54c ) ) ) && ( ( param_3 == *(float*)( this + 0x550 ) && ( *(int*)( this + 0x538 ) == 1 ) ) )) {
      return;
   }

   *(undefined4*)( this + 0x538 ) = 1;
   this[0x528] = (Camera3D)0x0;
   *(float*)( this + 0x540 ) = param_1;
   *(ulong*)( this + 0x54c ) = CONCAT44(param_3, param_2);
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x950 ) )(*(undefined4*)( this + 0x540 ), *(undefined4*)( this + 0x54c ), *(undefined4*)( this + 0x550 ), plVar1, *(undefined8*)( this + 0x560 ));
   Node3D::update_gizmos();
   return;
}
/* Camera3D::set_frustum(float, Vector2, float, float) */void Camera3D::set_frustum(float param_1, undefined8 param_2, float param_3, float param_4, Camera3D *this) {
   long *plVar1;
   float fVar2;
   fVar2 = (float)( (ulong)param_2 >> 0x20 );
   if (( ( ( this[0x528] == (Camera3D)0x0 ) && ( param_1 == *(float*)( this + 0x540 ) ) ) && ( (float)param_2 == *(float*)( this + 0x544 ) ) ) && ( ( ( fVar2 == *(float*)( this + 0x548 ) && ( param_3 == *(float*)( this + 0x54c ) ) ) && ( ( param_4 == *(float*)( this + 0x550 ) && ( *(int*)( this + 0x538 ) == 2 ) ) ) ) )) {
      return;
   }

   *(float*)( this + 0x544 ) = (float)param_2;
   *(float*)( this + 0x548 ) = fVar2;
   *(undefined4*)( this + 0x538 ) = 2;
   this[0x528] = (Camera3D)0x0;
   *(float*)( this + 0x540 ) = param_1;
   *(ulong*)( this + 0x54c ) = CONCAT44(param_4, param_3);
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x958 ) )(*(undefined4*)( this + 0x540 ), *(undefined8*)( this + 0x544 ), *(undefined4*)( this + 0x54c ), *(undefined4*)( this + 0x550 ), plVar1, *(undefined8*)( this + 0x560 ));
   Node3D::update_gizmos();
   return;
}
/* Camera3D::_get_adjusted_camera_transform(Transform3D const&) const */Camera3D * __thiscall Camera3D::_get_adjusted_camera_transform(Camera3D *this,Transform3D *param_1){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Transform3D::orthonormalized();
   fVar2 = (float)*(undefined8*)( param_1 + 0x554 );
   fVar3 = (float)( ( ulong ) * (undefined8*)( param_1 + 0x554 ) >> 0x20 );
   *(float*)( this + 0x2c ) = *(float*)( this + 0x18 ) * fVar3 + *(float*)( this + 0x1c ) * fVar2 + *(float*)( this + 0x2c );
   *(ulong*)( this + 0x24 ) = CONCAT44(*(float*)( this + 0x10 ) * fVar2 + (float)( ( ulong ) * (undefined8*)( this + 0x24 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 8 ) >> 0x20 ) * fVar3, *(float*)( this + 4 ) * fVar2 + (float)*(undefined8*)( this + 0x24 ) + (float)*(undefined8*)this * fVar3);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::get_cull_mask_value(int) const */undefined4 Camera3D::get_cull_mask_value(Camera3D *this, int param_1) {
   uint uVar1;
   undefined4 uVar2;
   if (param_1 < 1) {
      _err_print_error("get_cull_mask_value", "scene/3d/camera_3d.cpp", 0x323, "Condition \"p_layer_number < 1\" is true. Returning: false", "Render layer number must be between 1 and 20 inclusive.", 0, 0);
      uVar2 = 0;
   }
 else if (param_1 < 0x15) {
      uVar1 = 1 << ( (char)param_1 - 1U & 0x1f ) & *(uint*)( this + 0x570 );
      uVar2 = CONCAT31(( int3 )(uVar1 >> 8), uVar1 != 0);
   }
 else {
      _err_print_error("get_cull_mask_value", "scene/3d/camera_3d.cpp", 0x324, "Condition \"p_layer_number > 20\" is true. Returning: false", "Render layer number must be between 1 and 20 inclusive.", 0, 0);
      uVar2 = 0;
   }

   return uVar2;
}
/* Camera3D::is_position_behind(Vector3 const&) const */bool Camera3D::is_position_behind(Camera3D *this, Vector3 *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float local_50;
   float local_44;
   float local_38;
   float local_34;
   float local_30;
   float local_2c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Node3D::get_global_transform();
   fVar2 = local_50 * local_50 + local_44 * local_44 + local_38 * local_38;
   fVar3 = _LC5;
   fVar4 = _LC5;
   fVar5 = _LC5;
   if (fVar2 != 0.0) {
      fVar2 = SQRT(fVar2);
      fVar3 = (float)( ( uint )(local_38 / fVar2) ^ (uint)_LC5 );
      fVar4 = (float)( ( uint )(local_44 / fVar2) ^ (uint)_LC5 );
      fVar5 = (float)( ( uint )(local_50 / fVar2) ^ (uint)_LC5 );
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return ( *(float*)param_1 - local_34 ) * fVar5 + ( *(float*)( param_1 + 4 ) - local_30 ) * fVar4 + fVar3 * ( *(float*)( param_1 + 8 ) - local_2c ) < *(float*)( this + 0x54c );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::project_ray_normal(Vector2 const&) const */undefined1[16];Camera3D::project_ray_normal(Vector2 *param_1) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   float fVar5;
   float fVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[12];
   float local_48;
   float fStack_44;
   undefined8 local_40;
   float local_38;
   float fStack_34;
   float local_30;
   float local_2c;
   float local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar9 = ( **(code**)( *(long*)param_1 + 0x210 ) )();
   fVar3 = auVar9._8_4_;
   ( **(code**)( *(long*)param_1 + 0x1f0 ) )(&local_48, param_1);
   fVar2 = auVar9._0_4_;
   fVar6 = auVar9._4_4_;
   fVar5 = local_30 * fVar2 + local_2c * fVar6 + local_28 * fVar3;
   auVar4._0_4_ = local_48 * fVar2 + fVar6 * fStack_44 + (float)local_40 * fVar3;
   auVar4._4_4_ = (float)( (ulong)local_40 >> 0x20 ) * fVar2 + fVar6 * local_38 + fStack_34 * fVar3;
   auVar4._8_8_ = 0;
   fVar2 = auVar4._0_4_ * auVar4._0_4_ + auVar4._4_4_ * auVar4._4_4_ + fVar5 * fVar5;
   fVar6 = 0.0;
   uVar1 = 0;
   if (fVar2 != 0.0) {
      fVar2 = SQRT(fVar2);
      fVar6 = fVar5 / fVar2;
      auVar7._4_4_ = fVar2;
      auVar7._0_4_ = fVar2;
      auVar7._8_8_ = _LC8;
      auVar4 = divps(auVar4, auVar7);
      uVar1 = auVar4._0_8_;
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   auVar8._8_4_ = fVar6;
   auVar8._0_8_ = uVar1;
   auVar8._12_4_ = 0;
   return auVar8;
}
/* Camera3D::project_ray_origin(Vector2 const&) const */undefined1[16];Camera3D::project_ray_origin(Vector2 *param_1) {
   long in_FS_OFFSET;
   float fVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined1 auVar7[16];
   undefined8 local_68;
   float local_60;
   float local_58;
   float fStack_54;
   undefined8 local_50;
   float local_48;
   float fStack_44;
   float local_40;
   float local_3c;
   float local_38;
   undefined8 local_34;
   float local_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[0x2fa] & 0x40 ) == 0) {
      _err_print_error("project_ray_origin", "scene/3d/camera_3d.cpp", 0x1c0, "Condition \"!is_inside_tree()\" is true. Returning: Vector3()", "Camera is not inside scene.", 0);
      local_60 = 0.0;
      local_68 = 0;
   }
 else {
      uVar2 = Viewport::get_camera_rect_size();
      fVar4 = (float)( (ulong)uVar2 >> 0x20 );
      uVar3 = Viewport::get_camera_coords(*(Vector2**)( param_1 + 600 ));
      if (fVar4 == 0.0) {
         _err_print_error("project_ray_origin", "scene/3d/camera_3d.cpp", 0x1c4, "Condition \"viewport_size.y == 0\" is true. Returning: Vector3()", 0, 0);
         local_60 = 0.0;
         local_68 = 0;
      }
 else if (*(int*)( param_1 + 0x538 ) == 1) {
         fVar1 = *(float*)( param_1 + 0x540 );
         fVar5 = (float)uVar2 / fVar4;
         if (*(int*)( param_1 + 0x55c ) == 0) {
            fVar5 = fVar1 / fVar5;
            fVar6 = fVar1;
         }
 else {
            fVar6 = fVar5 * fVar1;
            fVar5 = fVar1;
         }

         fVar1 = ( (float)uVar3 / (float)uVar2 ) * fVar6 - fVar6 * _LC13;
         fVar6 = (float)( *(uint*)( param_1 + 0x54c ) ^ _LC5 );
         fVar4 = (float)( ( _LC14 - (double)( (float)( (ulong)uVar3 >> 0x20 ) / fVar4 ) ) * (double)fVar5 - (double)( fVar5 * _LC13 ) );
         ( **(code**)( *(long*)param_1 + 0x1f0 ) )(&local_58, param_1);
         local_60 = fVar1 * local_40 + fVar4 * local_3c + fVar6 * local_38 + local_2c;
         local_68 = CONCAT44(local_48 * fVar4 + (float)( (ulong)local_50 >> 0x20 ) * fVar1 + fStack_44 * fVar6 + (float)( (ulong)local_34 >> 0x20 ), fStack_54 * fVar4 + local_58 * fVar1 + (float)local_50 * fVar6 + (float)local_34);
      }
 else {
         ( **(code**)( *(long*)param_1 + 0x1f0 ) )(&local_58, param_1);
         local_68 = local_34;
         local_60 = local_2c;
      }

   }

   auVar7._8_4_ = local_60;
   auVar7._0_8_ = local_68;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   auVar7._12_4_ = 0;
   return auVar7;
}
/* Camera3D::clear_current(bool) */void Camera3D::clear_current(Camera3D *this, bool param_1) {
   Camera3D *pCVar1;
   long lVar2;
   this[0x529] = (Camera3D)0x0;
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      return;
   }

   pCVar1 = (Camera3D*)Viewport::get_camera_3d();
   if (pCVar1 == this) {
      Viewport::_camera_3d_set(*(Camera3D**)( pCVar1 + 600 ));
      if (param_1) {
         lVar2 = Engine::get_singleton();
         if (*(char*)( lVar2 + 0xc0 ) == '\0') {
            Viewport::_camera_3d_make_next_current(*(Camera3D**)( pCVar1 + 600 ));
            return;
         }

      }

   }

   return;
}
/* Camera3D::is_current() const */Camera3D Camera3D::is_current(Camera3D *this) {
   char cVar1;
   Camera3D *pCVar2;
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      cVar1 = Node::is_part_of_edited_scene();
      if (cVar1 == '\0') {
         pCVar2 = (Camera3D*)Viewport::get_camera_3d();
         return ( Camera3D )(this == pCVar2);
      }

   }

   return this[0x529];
}
/* Camera3D::_get_frustum() const */void Camera3D::_get_frustum(void) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long *in_RSI;
   Array *in_RDI;
   long in_FS_OFFSET;
   long local_80;
   Variant local_78[8];
   long local_70;
   int local_68[8];
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x228 ) )(local_78);
   Variant::Variant((Variant*)local_68, (Vector*)local_78);
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

   Variant::operator_cast_to_Array(local_78);
   Array::Array(in_RDI);
   local_48 = 0;
   local_80 = 0;
   local_40 = (undefined1[16])0x0;
   Array::set_typed((uint)in_RDI, (StringName*)0xe, (Variant*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   cVar3 = Array::is_same_typed(in_RDI);
   if (cVar3 == '\0') {
      Array::assign(in_RDI);
   }
 else {
      Array::_ref(in_RDI);
   }

   Array::~Array((Array*)local_78);
   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::set_current(bool) */void Camera3D::set_current(Camera3D *this, bool param_1) {
   if (!param_1) {
      clear_current(this, true);
      return;
   }

   this[0x529] = (Camera3D)0x1;
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      return;
   }

   Viewport::_camera_3d_set(*(Camera3D**)( this + 600 ));
   return;
}
/* Camera3D::make_current() */void Camera3D::make_current(Camera3D *this) {
   this[0x529] = (Camera3D)0x1;
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      return;
   }

   Viewport::_camera_3d_set(*(Camera3D**)( this + 600 ));
   return;
}
/* Camera3D::is_position_in_frustum(Vector3 const&) const */undefined8 Camera3D::is_position_in_frustum(Camera3D *this, Vector3 *param_1) {
   float *pfVar1;
   float *pfVar2;
   long lVar3;
   float *pfVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   float fVar6;
   undefined1 auStack_28[8];
   float *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x228 ) )(auStack_28, this);
   pfVar2 = local_20;
   if (local_20 == (float*)0x0) {
      uVar5 = 1;
   }
 else {
      lVar3 = 0;
      pfVar4 = local_20;
      do {
         if (*(long*)( local_20 + -2 ) <= lVar3) {
            uVar5 = 1;
            goto LAB_00100cd4;
         }

         lVar3 = lVar3 + 1;
         fVar6 = *pfVar4 * *(float*)param_1 + pfVar4[1] * *(float*)( param_1 + 4 ) + pfVar4[2] * *(float*)( param_1 + 8 );
         pfVar1 = pfVar4 + 3;
         pfVar4 = pfVar4 + 4;
      }
 while ( fVar6 < *pfVar1 || fVar6 == *pfVar1 );
      uVar5 = 0;
      LAB_00100cd4:LOCK();
      pfVar4 = local_20 + -4;
      *(long*)pfVar4 = *(long*)pfVar4 + -1;
      UNLOCK();
      if (*(long*)pfVar4 == 0) {
         local_20 = (float*)0x0;
         Memory::free_static(pfVar2 + -4, false);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::get_attributes() const */void Camera3D::get_attributes(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x580 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x580 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* Camera3D::get_environment() const */void Camera3D::get_environment(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x578 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x578 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* Camera3D::get_compositor() const */void Camera3D::get_compositor(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x588 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x588 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

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
/* Camera3D::~Camera3D() */void Camera3D::~Camera3D(Camera3D *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long *plVar4;
   *(undefined***)this = &PTR__initialize_classv_001237d0;
   lVar3 = RenderingServer::get_singleton();
   if (lVar3 == 0) {
      _err_print_error("~Camera3D", "scene/3d/camera_3d.cpp", 0x380, "Parameter \"RenderingServer::get_singleton()\" is null.", 0, 0);
   }
 else {
      plVar4 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar4 + 0x11b0 ) )(plVar4);
      if (*(long*)( this + 0x5a0 ) != 0) {
         lVar3 = PhysicsServer3D::get_singleton();
         if (lVar3 == 0) {
            _err_print_error("~Camera3D", "scene/3d/camera_3d.cpp", 899, "Parameter \"PhysicsServer3D::get_singleton()\" is null.", 0, 0);
         }
 else {
            plVar4 = (long*)PhysicsServer3D::get_singleton();
            ( **(code**)( *plVar4 + 0x6e8 ) )(plVar4);
         }

      }

   }

   if (*(long*)( this + 0x5b0 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x5b0 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x5b0 );
         *(undefined8*)( this + 0x5b0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x598 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x598 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x588 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x588 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x580 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x580 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x578 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x578 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            Node3D::~Node3D((Node3D*)this);
            return;
         }

      }

   }

   Node3D::~Node3D((Node3D*)this);
   return;
}
/* Camera3D::~Camera3D() */void Camera3D::~Camera3D(Camera3D *this) {
   ~Camera3D(this)
   ;;
   operator_delete(this, 0x688);
   return;
}
/* Camera3D::_update_audio_listener_state() */void Camera3D::_update_audio_listener_state(void) {
   return;
}
/* Camera3D::_update_camera_mode() */void Camera3D::_update_camera_mode(Camera3D *this) {
   int iVar1;
   long *plVar2;
   iVar1 = *(int*)( this + 0x538 );
   this[0x528] = (Camera3D)0x1;
   if (iVar1 == 1) {
      this[0x528] = (Camera3D)0x0;
      plVar2 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar2 + 0x950 ) )(*(undefined4*)( this + 0x540 ), plVar2, *(undefined8*)( this + 0x560 ));
      Node3D::update_gizmos();
      return;
   }

   if (iVar1 != 2) {
      if (iVar1 == 0) {
         plVar2 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar2 + 0x948 ) )(*(undefined4*)( this + 0x53c ), plVar2, *(undefined8*)( this + 0x560 ));
         Node3D::update_gizmos();
         this[0x528] = (Camera3D)0x0;
      }

      return;
   }

   this[0x528] = (Camera3D)0x0;
   plVar2 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar2 + 0x958 ) )(*(undefined4*)( this + 0x540 ), *(undefined8*)( this + 0x544 ), *(undefined4*)( this + 0x54c ), *(undefined4*)( this + 0x550 ), plVar2, *(undefined8*)( this + 0x560 ));
   Node3D::update_gizmos();
   return;
}
/* Camera3D::set_projection(Camera3D::ProjectionType) */void Camera3D::set_projection(Camera3D *this, uint param_2) {
   if (2 < param_2) {
      return;
   }

   *(uint*)( this + 0x538 ) = param_2;
   _update_camera_mode(this);
   Object::notify_property_list_changed();
   return;
}
/* Camera3D::set_keep_aspect_mode(Camera3D::KeepAspect) */void Camera3D::set_keep_aspect_mode(Camera3D *this, int param_2) {
   long *plVar1;
   *(int*)( this + 0x55c ) = param_2;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x988 ) )(plVar1, *(undefined8*)( this + 0x560 ), param_2 == 0);
   _update_camera_mode(this);
   Object::notify_property_list_changed();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Camera3D::set_fov(float) */void Camera3D::set_fov(Camera3D *this, float param_1) {
   if (( _LC29 <= param_1 ) && ( param_1 <= __LC30 )) {
      *(float*)( this + 0x53c ) = param_1;
      _update_camera_mode(this);
      return;
   }

   _err_print_error("set_fov", "scene/3d/camera_3d.cpp", 0x2f2, "Condition \"p_fov < 1 || p_fov > 179\" is true.", 0, 0);
   return;
}
/* Camera3D::set_size(float) */void Camera3D::set_size(Camera3D *this, float param_1) {
   if (_LC33 < (double)param_1) {
      *(float*)( this + 0x540 ) = param_1;
      _update_camera_mode(this);
      return;
   }

   _err_print_error("set_size", "scene/3d/camera_3d.cpp", 0x2f8, "Condition \"p_size <= 0.00001\" is true.", 0, 0);
   return;
}
/* Camera3D::set_near(float) */void Camera3D::set_near(Camera3D *this, float param_1) {
   *(float*)( this + 0x54c ) = param_1;
   _update_camera_mode(this);
   return;
}
/* Camera3D::set_frustum_offset(Vector2) */void Camera3D::set_frustum_offset(undefined8 param_1, Camera3D *this) {
   *(undefined8*)( this + 0x544 ) = param_1;
   _update_camera_mode(this);
   return;
}
/* Camera3D::set_far(float) */void Camera3D::set_far(Camera3D *this, float param_1) {
   *(float*)( this + 0x550 ) = param_1;
   _update_camera_mode(this);
   return;
}
/* Camera3D::set_cull_mask(unsigned int) */void Camera3D::set_cull_mask(Camera3D *this, uint param_1) {
   long *plVar1;
   *(uint*)( this + 0x570 ) = param_1;
   plVar1 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar1 + 0x968 ) )(plVar1, *(undefined8*)( this + 0x560 ), *(undefined4*)( this + 0x570 ));
   _update_camera_mode(this);
   return;
}
/* Camera3D::_attributes_changed() */void Camera3D::_attributes_changed(Camera3D *this) {
   long lVar1;
   undefined4 uVar2;
   if (*(long*)( this + 0x580 ) != 0) {
      lVar1 = __dynamic_cast(*(long*)( this + 0x580 ), &Object::typeinfo, &CameraAttributesPhysical::typeinfo, 0);
      if (lVar1 != 0) {
         uVar2 = CameraAttributesPhysical::get_fov();
         *(undefined4*)( this + 0x53c ) = uVar2;
         uVar2 = CameraAttributesPhysical::get_near();
         *(undefined4*)( this + 0x54c ) = uVar2;
         uVar2 = CameraAttributesPhysical::get_far();
         *(undefined4*)( this + 0x55c ) = 1;
         *(undefined4*)( this + 0x550 ) = uVar2;
         _update_camera_mode(this);
         return;
      }

   }

   _err_print_error("_attributes_changed", "scene/3d/camera_3d.cpp", 0x252, "Parameter \"physical_attributes\" is null.", 0, 0);
   return;
}
/* Camera3D::set_doppler_tracking(Camera3D::DopplerTracking) */void Camera3D::set_doppler_tracking(Camera3D *this, int param_2) {
   long lVar1;
   Vector3 *pVVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x590 ) == param_2) {
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      *(int*)( this + 0x590 ) = param_2;
      if (param_2 != 0) {
         VelocityTracker3D::set_track_physics_step(SUB81(*(undefined8*)( this + 0x598 ), 0));
         if (( (byte)this[0x2fa] & 0x40 ) != 0) {
            pVVar2 = *(Vector3**)( this + 0x598 );
            Node3D::get_global_transform();
            VelocityTracker3D::reset(pVVar2);
         }

      }

      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _update_camera_mode(this);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::set_environment(Ref<Environment> const&) */void Camera3D::set_environment(Camera3D *this, Ref *param_1) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long *plVar4;
   undefined8 uVar5;
   Object *pOVar6;
   pOVar1 = *(Object**)param_1;
   pOVar6 = *(Object**)( this + 0x578 );
   if (pOVar1 != pOVar6) {
      *(Object**)( this + 0x578 ) = pOVar1;
      if (pOVar1 == (Object*)0x0) {
         LAB_0010159e:if (pOVar6 == (Object*)0x0) goto LAB_00101600;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            LAB_00101649:cVar3 = predelete_handler(pOVar6);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }
 else {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x578 ) = 0;
            goto LAB_0010159e;
         }

         if (pOVar6 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 == '\0') goto LAB_001015b3;
            goto LAB_00101649;
         }

      }

      LAB_001015b3:pOVar6 = *(Object**)( this + 0x578 );
   }

   if (pOVar6 != (Object*)0x0) {
      plVar4 = (long*)RenderingServer::get_singleton();
      pcVar2 = *(code**)( *plVar4 + 0x970 );
      uVar5 = ( **(code**)( **(long**)( this + 0x578 ) + 0x1c0 ) )();
      ( *pcVar2 )(plVar4, *(undefined8*)( this + 0x560 ), uVar5);
      _update_camera_mode(this);
      return;
   }

   LAB_00101600:plVar4 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar4 + 0x970 ) )(plVar4, *(undefined8*)( this + 0x560 ), 0);
   _update_camera_mode(this);
   return;
}
/* Camera3D::set_compositor(Ref<Compositor> const&) */void Camera3D::set_compositor(Camera3D *this, Ref *param_1) {
   Object *pOVar1;
   code *pcVar2;
   code *pcVar3;
   char cVar4;
   long *plVar5;
   long lVar6;
   Object *pOVar7;
   pOVar1 = *(Object**)param_1;
   pOVar7 = *(Object**)( this + 0x588 );
   if (pOVar1 != pOVar7) {
      *(Object**)( this + 0x588 ) = pOVar1;
      if (pOVar1 == (Object*)0x0) {
         LAB_001016be:if (pOVar7 == (Object*)0x0) goto LAB_00101738;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            LAB_00101779:cVar4 = predelete_handler(pOVar7);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
               Memory::free_static(pOVar7, false);
            }

         }

      }
 else {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x588 ) = 0;
            goto LAB_001016be;
         }

         if (pOVar7 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 == '\0') goto LAB_001016d3;
            goto LAB_00101779;
         }

      }

      LAB_001016d3:pOVar7 = *(Object**)( this + 0x588 );
   }

   if (pOVar7 != (Object*)0x0) {
      plVar5 = (long*)RenderingServer::get_singleton();
      pcVar2 = *(code**)( *plVar5 + 0x980 );
      pcVar3 = *(code**)( **(long**)( this + 0x588 ) + 0x1c0 );
      if (pcVar3 == Compositor::get_rid) {
         lVar6 = ( *(long**)( this + 0x588 ) )[0x48];
      }
 else {
         lVar6 = ( *pcVar3 )();
      }

      ( *pcVar2 )(plVar5, *(undefined8*)( this + 0x560 ), lVar6);
      _update_camera_mode(this);
      return;
   }

   LAB_00101738:plVar5 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar5 + 0x980 ) )(plVar5, *(undefined8*)( this + 0x560 ), 0);
   _update_camera_mode(this);
   return;
}
/* Camera3D::set_cull_mask_value(int, bool) */undefined8 Camera3D::set_cull_mask_value(Camera3D *this, int param_1, bool param_2) {
   uint uVar1;
   uint uVar2;
   long *plVar3;
   undefined8 uVar4;
   if (param_1 < 1) {
      uVar4 = _err_print_error("set_cull_mask_value", "scene/3d/camera_3d.cpp", 0x317, "Condition \"p_layer_number < 1\" is true.", "Render layer number must be between 1 and 20 inclusive.", 0, 0);
      return uVar4;
   }

   if (param_1 < 0x15) {
      uVar1 = 1 << ( (char)param_1 - 1U & 0x1f );
      uVar2 = ~uVar1 & *(uint*)( this + 0x570 );
      if (param_2) {
         uVar2 = uVar1 | *(uint*)( this + 0x570 );
      }

      *(uint*)( this + 0x570 ) = uVar2;
      plVar3 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar3 + 0x968 ) )(plVar3, *(undefined8*)( this + 0x560 ), *(undefined4*)( this + 0x570 ));
      uVar4 = _update_camera_mode(this);
      return uVar4;
   }

   uVar4 = 0;
   _err_print_error("set_cull_mask_value", "scene/3d/camera_3d.cpp", 0x318, "Condition \"p_layer_number > 20\" is true.", "Render layer number must be between 1 and 20 inclusive.", 0);
   return uVar4;
}
/* Camera3D::_validate_property(PropertyInfo&) const */void Camera3D::_validate_property(Camera3D *this, PropertyInfo *param_1) {
   String *this_00;
   char cVar1;
   long lVar2;
   this_00 = (String*)( param_1 + 8 );
   cVar1 = String::operator ==(this_00, "fov");
   if (cVar1 == '\0') {
      cVar1 = String::operator ==(this_00, "size");
      if (cVar1 == '\0') {
         cVar1 = String::operator ==(this_00, "frustum_offset");
         if (( cVar1 == '\0' ) || ( *(int*)( this + 0x538 ) == 2 )) goto LAB_001018c8;
      }
 else if (*(int*)( this + 0x538 ) - 1U < 2) goto LAB_001018c8;
   }
 else if (*(int*)( this + 0x538 ) == 0) goto LAB_001018c8;
   *(undefined4*)( param_1 + 0x28 ) = 2;
   LAB_001018c8:if (( ( *(long*)( this + 0x580 ) != 0 ) && ( lVar2 = __dynamic_cast(*(long*)( this + 0x580 ), &Object::typeinfo, &CameraAttributesPhysical::typeinfo, 0) ),lVar2 != 0 )) &&( ( cVar1 = String::operator ==(this_00, "near") ),cVar1 != '\0' || ( ( ( cVar1 = String::operator ==(this_00, "far") ),cVar1 != '\0' || ( cVar1 = String::operator ==(this_00, "fov") ),cVar1 != '\0' ) ) || ( cVar1 = String::operator ==(this_00, "keep_aspect") ),cVar1 != '\0' ) * (undefined4*)( param_1 + 0x28 ) = 0x1000000c;
}
Node3D::_validate_property((PropertyInfo*)this);return;}/* Camera3D::_physics_interpolation_ensure_data_flipped() */void Camera3D::_physics_interpolation_ensure_data_flipped(Camera3D *this) {
   code *UNRECOVERED_JUMPTABLE;
   long lVar1;
   lVar1 = Engine::get_singleton();
   if (( ulong ) * (uint*)( this + 0x67c ) != *(ulong*)( lVar1 + 0x50 )) {
      *(int*)( this + 0x67c ) = (int)*(ulong*)( lVar1 + 0x50 );
      UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x1d8 );
      for (int i = 0; i < 6; i++) {
         *(undefined8*)( this + ( 8*i + 1516 ) ) = *(undefined8*)( this + ( 8*i + 1468 ) );
      }

      if (UNRECOVERED_JUMPTABLE != physics_interpolation_flip_data) {
         /* WARNING: Could not recover jumptable at 0x00101a34. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(this);
         return;
      }

   }

   return;
}
/* Camera3D::_physics_interpolation_ensure_transform_calculated(bool) const */void Camera3D::_physics_interpolation_ensure_transform_calculated(Camera3D *this, bool param_1) {
   ulong uVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Engine::get_singleton();
   uVar1 = Engine::get_frames_drawn();
   if (( *(uint*)( this + 0x680 ) != uVar1 ) || ( param_1 )) {
      *(int*)( this + 0x680 ) = (int)uVar1;
      lVar2 = Engine::get_singleton();
      TransformInterpolator::interpolate_transform_3d((Transform3D*)( this + 0x5ec ), (Transform3D*)( this + 0x5bc ), (Transform3D*)( this + 0x61c ), (float)*(double*)( lVar2 + 0x60 ));
      ( **(code**)( *(long*)this + 0x1e0 ) )(&local_58, this, (Transform3D*)( this + 0x61c ));
      *(undefined8*)( this + 0x64c ) = local_58;
      *(undefined8*)( this + 0x654 ) = uStack_50;
      *(undefined8*)( this + 0x65c ) = local_48;
      *(undefined8*)( this + 0x664 ) = uStack_40;
      *(undefined8*)( this + 0x66c ) = local_38;
      *(undefined8*)( this + 0x674 ) = uStack_30;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::_update_camera() [clone .part.0] */void Camera3D::_update_camera(Camera3D *this) {
   code *pcVar1;
   char cVar2;
   long *plVar3;
   long lVar4;
   Camera3D *pCVar5;
   long in_FS_OFFSET;
   undefined1 auStack_68[56];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x240 ) == 0) {
      _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
   }

   cVar2 = SceneTree::is_physics_interpolation_enabled();
   if (( cVar2 == '\0' ) || ( ( (byte)this[0x2f9] & 0x20 ) == 0 )) {
      plVar3 = (long*)RenderingServer::get_singleton();
      pcVar1 = *(code**)( *plVar3 + 0x960 );
      ( **(code**)( *(long*)this + 0x1f0 ) )(auStack_68, this);
      ( *pcVar1 )(plVar3, *(undefined8*)( this + 0x560 ), auStack_68);
   }
 else {
      lVar4 = Engine::get_singleton();
      if (( *(char*)( lVar4 + 0x80 ) == '\0' ) && ( *(long*)( this + 0x560 ) != 0 )) {
         _physics_interpolation_ensure_transform_calculated(this, true);
         plVar3 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar3 + 0x960 ) )(plVar3, *(undefined8*)( this + 0x560 ), this + 0x64c);
      }

   }

   cVar2 = Node::is_part_of_edited_scene();
   if (cVar2 == '\0') {
      if (( ( (byte)this[0x2fa] & 0x40 ) == 0 ) || ( cVar2 = Node::is_part_of_edited_scene() ),cVar2 != '\0') {
         if (this[0x529] != (Camera3D)0x0) goto LAB_00101c22;
      }
 else {
         pCVar5 = (Camera3D*)Viewport::get_camera_3d();
         if (this == pCVar5) {
            LAB_00101c22:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Viewport::_camera_3d_transform_changed_notify();
               return;
            }

            goto LAB_00101c9a;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101c9a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Camera3D::_update_camera() */void Camera3D::_update_camera(Camera3D *this) {
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      _update_camera(this);
      return;
   }

   return;
}
/* Camera3D::_request_camera_update() */void Camera3D::_request_camera_update(Camera3D *this) {
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      _update_camera(this);
      return;
   }

   return;
}
/* Camera3D::set_v_offset(float) */void Camera3D::set_v_offset(Camera3D *this, float param_1) {
   *(float*)( this + 0x554 ) = param_1;
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      _update_camera(this);
      return;
   }

   return;
}
/* Camera3D::set_h_offset(float) */void Camera3D::set_h_offset(Camera3D *this, float param_1) {
   *(float*)( this + 0x558 ) = param_1;
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      _update_camera(this);
      return;
   }

   return;
}
/* Camera3D::get_camera_transform() const */void Camera3D::get_camera_transform(void) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   char cVar8;
   long lVar9;
   Camera3D *in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)in_RSI[0x2fa] & 0x40 ) != 0) {
      if (*(long*)( in_RSI + 0x240 ) == 0) {
         _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      }

      cVar8 = SceneTree::is_physics_interpolation_enabled();
      if (( cVar8 != '\0' ) && ( ( (byte)in_RSI[0x2f9] & 0x20 ) != 0 )) {
         lVar9 = Engine::get_singleton();
         if (*(char*)( lVar9 + 0x80 ) == '\0') {
            _physics_interpolation_ensure_transform_calculated(in_RSI, false);
            uVar3 = *(undefined8*)( in_RSI + 0x654 );
            uVar4 = *(undefined8*)( in_RSI + 0x65c );
            uVar5 = *(undefined8*)( in_RSI + 0x664 );
            uVar6 = *(undefined8*)( in_RSI + 0x66c );
            uVar7 = *(undefined8*)( in_RSI + 0x674 );
            *in_RDI = *(undefined8*)( in_RSI + 0x64c );
            in_RDI[1] = uVar3;
            in_RDI[2] = uVar4;
            in_RDI[3] = uVar5;
            in_RDI[4] = uVar6;
            in_RDI[5] = uVar7;
            goto LAB_00101dad;
         }

      }

   }

   pcVar2 = *(code**)( *(long*)in_RSI + 0x1e0 );
   Node3D::get_global_transform();
   ( *pcVar2 )();
   LAB_00101dad:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::_update_process_mode() */void Camera3D::_update_process_mode(Camera3D *this) {
   char cVar1;
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      if (*(long*)( this + 0x240 ) == 0) {
         _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      }

      cVar1 = SceneTree::is_physics_interpolation_enabled();
      if (( ( ( cVar1 != '\0' ) && ( ( (byte)this[0x2f9] & 0x20 ) != 0 ) ) && ( ( (byte)this[0x2fa] & 0x40 ) != 0 ) ) && ( cVar1 = Node::is_part_of_edited_scene() ),cVar1 == '\0') {
         Viewport::get_camera_3d();
      }

   }

   Node::set_process_internal(SUB81(this, 0));
   Node::set_physics_process_internal(SUB81(this, 0));
   return;
}
/* Camera3D::_physics_interpolated_changed() */void Camera3D::_physics_interpolated_changed(Camera3D *this) {
   _update_process_mode(this);
   return;
}
/* Camera3D::set_desired_process_modes(bool, bool) */void Camera3D::set_desired_process_modes(Camera3D *this, bool param_1, bool param_2) {
   this[0x5b8] = (Camera3D)param_1;
   this[0x5b9] = (Camera3D)param_2;
   _update_process_mode(this);
   return;
}
/* Camera3D::_get_camera_projection(float) const */void Camera3D::_get_camera_projection(float param_1) {
   int iVar1;
   long in_RSI;
   Projection *in_RDI;
   float in_XMM1_Da;
   float in_XMM1_Db;
   Viewport::get_visible_rect();
   Projection::Projection(in_RDI);
   iVar1 = *(int*)( in_RSI + 0x538 );
   if (iVar1 == 1) {
      Projection::set_orthogonal(*(float*)( in_RSI + 0x540 ), in_XMM1_Da / in_XMM1_Db, param_1, *(float*)( in_RSI + 0x550 ), SUB81(in_RDI, 0));
      return;
   }

   if (iVar1 != 2) {
      if (iVar1 == 0) {
         Projection::set_perspective(*(float*)( in_RSI + 0x53c ), in_XMM1_Da / in_XMM1_Db, param_1, *(float*)( in_RSI + 0x550 ), SUB81(in_RDI, 0));
      }

      return;
   }

   Projection::set_frustum(*(undefined4*)( in_RSI + 0x540 ), in_XMM1_Da / in_XMM1_Db, *(undefined8*)( in_RSI + 0x544 ), param_1, *(undefined4*)( in_RSI + 0x550 ));
   return;
}
/* Camera3D::get_camera_projection() const */void Camera3D::get_camera_projection(void) {
   long lVar1;
   long in_RSI;
   Projection *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( in_RSI + 0x2fa ) & 0x40 ) == 0) {
      _err_print_error("get_camera_projection", "scene/3d/camera_3d.cpp", 0x13f, "Condition \"!is_inside_tree()\" is true. Returning: Projection()", "Camera is not inside the scene tree.", 0, 0);
      Projection::Projection(in_RDI);
   }
 else {
      _get_camera_projection(*(float*)( in_RSI + 0x54c ));
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::project_local_ray_normal(Vector2 const&) const */undefined1[16];Camera3D::project_local_ray_normal(Vector2 *param_1) {
   float fVar1;
   long in_FS_OFFSET;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   double dVar5;
   undefined1 auVar6[16];
   float fVar7;
   undefined1 auVar8[16];
   double dVar9;
   undefined1 auVar10[16];
   undefined8 local_78;
   float local_70;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1[0x2fa] & 0x40 ) == 0) {
      _err_print_error("project_local_ray_normal", "scene/3d/camera_3d.cpp", 0x1ae, "Condition \"!is_inside_tree()\" is true. Returning: Vector3()", "Camera is not inside scene.", 0, 0);
      local_70 = 0.0;
      local_78 = 0;
   }
 else {
      uVar2 = Viewport::get_camera_rect_size();
      uVar3 = Viewport::get_camera_coords(*(Vector2**)( param_1 + 600 ));
      if (*(int*)( param_1 + 0x538 ) == 1) {
         local_78 = 0;
         local_70 = _LC53;
      }
 else {
         _get_camera_projection(*(float*)( param_1 + 0x54c ));
         uVar4 = Projection::get_viewport_half_extents();
         fVar1 = *(float*)( param_1 + 0x54c );
         dVar5 = (double)( (float)uVar3 / (float)uVar2 );
         dVar9 = _LC14 - (double)( (float)( (ulong)uVar3 >> 0x20 ) / (float)( (ulong)uVar2 >> 0x20 ) );
         auVar6._0_4_ = (float)( ( dVar5 + dVar5 + _LC56 ) * (double)(float)uVar4 );
         auVar6._4_4_ = (float)( ( dVar9 + dVar9 + _LC56 ) * (double)(float)( (ulong)uVar4 >> 0x20 ) );
         auVar6._8_8_ = 0;
         fVar7 = auVar6._0_4_ * auVar6._0_4_ + auVar6._4_4_ * auVar6._4_4_ + fVar1 * fVar1;
         local_70 = 0.0;
         local_78 = 0;
         if (fVar7 != 0.0) {
            fVar7 = SQRT(fVar7);
            local_70 = (float)( (uint)fVar1 ^ _LC5 ) / fVar7;
            auVar8._4_4_ = fVar7;
            auVar8._0_4_ = fVar7;
            auVar8._8_8_ = _LC8;
            auVar6 = divps(auVar6, auVar8);
            local_78 = auVar6._0_8_;
         }

         Projection::~Projection((Projection*)&local_78);
      }

   }

   auVar10._8_4_ = local_70;
   auVar10._0_8_ = local_78;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar10._12_4_ = 0;
      return auVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::unproject_position(Vector3 const&) const */undefined8 Camera3D::unproject_position(Vector3 *param_1) {
   long in_FS_OFFSET;
   ulong uVar1;
   undefined8 extraout_XMM1_Qa;
   float extraout_XMM1_Db;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 local_b8;
   float local_a8;
   undefined1 local_98[48];
   Plane local_68[72];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)param_1[0x2fa] & 0x40 ) == 0) {
      _err_print_error("unproject_position", "scene/3d/camera_3d.cpp", 0x1f5, "Condition \"!is_inside_tree()\" is true. Returning: Vector2()", "Camera is not inside scene.", 0, 0);
      local_b8 = 0;
   }
 else {
      Viewport::get_visible_rect();
      _get_camera_projection(*(float*)( param_1 + 0x54c ));
      ( **(code**)( *(long*)param_1 + 0x1f0 ) )(local_98, param_1);
      uVar1 = Projection::xform4(local_68);
      auVar3._4_4_ = extraout_XMM1_Db;
      auVar3._0_4_ = extraout_XMM1_Db;
      if (extraout_XMM1_Db == 0.0) {
         _err_print_error("unproject_position", "scene/3d/camera_3d.cpp", 0x201, "Condition \"p.d == 0\" is true. Returning: Point2()", 0, 0);
         local_b8 = 0;
      }
 else {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = uVar1;
         auVar3._8_8_ = _LC8;
         local_b8._0_4_ = (float)extraout_XMM1_Qa;
         local_b8._4_4_ = (float)( (ulong)extraout_XMM1_Qa >> 0x20 );
         auVar3 = divps(auVar2, auVar3);
         local_a8 = (float)uVar1;
         local_b8 = CONCAT44((float)( ( (double)(float)( auVar3._4_4_ ^ _LC5 ) * _LC61 + _LC61 ) * (double)local_b8._4_4_ ), (float)( ( (double)( local_a8 / extraout_XMM1_Db ) * _LC61 + _LC61 ) * (double)(float)local_b8 ));
      }

      Projection::~Projection((Projection*)local_68);
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_b8;
}
/* Camera3D::project_position(Vector2 const&, float) const */undefined1  [16] __thiscallCamera3D::project_position(Camera3D *this, Vector2 *param_1, float param_2) {
   long in_FS_OFFSET;
   float fVar1;
   undefined8 extraout_XMM1_Qa;
   double dVar2;
   float fVar3;
   float fVar4;
   undefined1 auVar5[16];
   undefined8 local_c8;
   undefined4 local_c0;
   float fStack_bc;
   undefined8 local_b8;
   float local_b0;
   undefined4 uStack_ac;
   undefined1 local_a8[8];
   undefined8 local_a0;
   float local_98;
   float fStack_94;
   float local_90;
   float local_8c;
   float local_88;
   undefined8 local_84;
   float local_7c;
   Projection local_78[36];
   undefined8 local_54;
   float local_4c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      _err_print_error("project_position", "scene/3d/camera_3d.cpp", 0x20d, "Condition \"!is_inside_tree()\" is true. Returning: Vector3()", "Camera is not inside scene.", 0, 0);
      local_b0 = 0.0;
      local_b8 = 0;
   }
 else if (( param_2 == 0.0 ) && ( *(int*)( this + 0x538 ) != 1 )) {
      Node3D::get_global_transform();
      local_b8 = local_54;
      local_b0 = local_4c;
   }
 else {
      Viewport::get_visible_rect();
      _get_camera_projection(*(float*)( this + 0x54c ));
      fVar4 = (float)( (uint)param_2 ^ _LC5 );
      _local_c0 = CONCAT44(fVar4, 0x3f800000);
      local_c8 = 0;
      _local_a8 = Projection::get_projection_plane(local_78, 3);
      auVar5 = Projection::get_projection_plane(local_78, 4);
      local_b8 = auVar5._0_8_;
      local_b0 = auVar5._8_4_;
      uStack_ac = auVar5._12_4_;
      Plane::intersect_3((Plane*)&local_c8, (Plane*)&local_b8, (Vector3*)local_a8);
      dVar2 = _LC14 - (double)( *(float*)( param_1 + 4 ) / (float)( (ulong)extraout_XMM1_Qa >> 0x20 ) );
      fVar3 = (float)( ( dVar2 + dVar2 ) - _LC14 ) * 0.0;
      dVar2 = (double)( *(float*)param_1 / (float)extraout_XMM1_Qa );
      fVar1 = (float)( ( dVar2 + dVar2 ) - _LC14 ) * 0.0;
      ( **(code**)( *(long*)this + 0x1f0 ) )((Vector3*)local_a8, this);
      local_b0 = fVar1 * local_90 + fVar3 * local_8c + fVar4 * local_88 + local_7c;
      local_b8 = CONCAT44(SUB164(_local_a8, 0xc) * fVar1 + local_98 * fVar3 + fStack_94 * fVar4 + (float)( (ulong)local_84 >> 0x20 ), SUB164(_local_a8, 0) * fVar1 + (float)local_a8._4_4_ * fVar3 + SUB164(_local_a8, 8) * fVar4 + (float)local_84);
      Projection::~Projection(local_78);
   }

   auVar5._8_4_ = local_b0;
   auVar5._0_8_ = local_b8;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   auVar5._12_4_ = 0;
   return auVar5;
}
/* Camera3D::get_frustum() const */void Camera3D::get_frustum(void) {
   long *in_RSI;
   Transform3D *in_RDI;
   long in_FS_OFFSET;
   undefined1 auStack_a8[48];
   Projection local_78[72];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(byte*)( in_RSI + 0x9b ) & 2 ) == 0) {
      _err_print_error("get_frustum", "scene/3d/camera_3d.cpp", 0x329, "Condition \"!is_inside_world()\" is true. Returning: Vector<Plane>()", 0, 0);
      *(undefined8*)( in_RDI + 8 ) = 0;
   }
 else {
      _get_camera_projection(*(float*)( (long)in_RSI + 0x54c ));
      ( **(code**)( *in_RSI + 0x1f0 ) )(auStack_a8);
      Projection::get_projection_planes(in_RDI);
      Projection::~Projection(local_78);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Camera3D::get_doppler_tracked_velocity() const */undefined1  [16] __thiscallCamera3D::get_doppler_tracked_velocity(Camera3D *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(int*)( this + 0x590 ) == 0) {
      if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
         return ZEXT816(0);
      }

   }
 else if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1 = VelocityTracker3D::get_tracked_linear_velocity();
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Camera3D::Camera3D() */void Camera3D::Camera3D(Camera3D *this) {
   undefined8 uVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   uint uVar5;
   char cVar6;
   long *plVar7;
   undefined8 uVar8;
   VelocityTracker3D *this_00;
   Object *pOVar9;
   Object *pOVar10;
   undefined1 auVar11[16];
   Node3D::Node3D((Node3D*)this);
   uVar4 = _UNK_00124868;
   uVar8 = CONCAT44(_LC69, _LC66);
   *(undefined***)this = &PTR__initialize_classv_001237d0;
   uVar5 = _LC29;
   *(undefined2*)( this + 0x528 ) = 0;
   uVar1 = CONCAT44(_UNK_001248ac, _LC71);
   *(undefined8*)( this + 0x54c ) = uVar8;
   *(undefined8*)( this + 0x554 ) = uVar4;
   *(undefined1(*) [16])( this + 0x560 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x578 ) = (undefined1[16])0x0;
   auVar11 = ZEXT416(_LC29);
   *(undefined2*)( this + 0x5b8 ) = 0;
   *(undefined1(*) [16])( this + 0x5bc ) = auVar11;
   *(undefined1(*) [16])( this + 0x5cc ) = auVar11;
   *(uint*)( this + 0x5dc ) = uVar5;
   *(undefined1(*) [16])( this + 0x5ec ) = auVar11;
   *(undefined1(*) [16])( this + 0x5fc ) = auVar11;
   *(uint*)( this + 0x60c ) = uVar5;
   *(undefined1(*) [16])( this + 0x61c ) = auVar11;
   *(undefined8*)( this + 0x53c ) = uVar1;
   *(undefined8*)( this + 0x530 ) = 0;
   *(undefined4*)( this + 0x538 ) = 0;
   *(undefined8*)( this + 0x544 ) = 0;
   *(undefined4*)( this + 0x55c ) = 1;
   *(undefined4*)( this + 0x570 ) = 0xfffff;
   *(undefined8*)( this + 0x588 ) = 0;
   *(undefined4*)( this + 0x590 ) = 0;
   *(undefined8*)( this + 0x598 ) = 0;
   *(undefined8*)( this + 0x5a0 ) = 0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   *(undefined4*)( this + 0x5e8 ) = 0;
   *(undefined8*)( this + 0x610 ) = 0;
   *(undefined4*)( this + 0x618 ) = 0;
   *(undefined1(*) [16])( this + 0x62c ) = auVar11;
   uVar8 = _LC68;
   *(undefined8*)( this + 0x640 ) = 0;
   *(undefined4*)( this + 0x648 ) = 0;
   *(undefined8*)( this + 0x670 ) = 0;
   *(undefined4*)( this + 0x678 ) = 0;
   *(undefined8*)( this + 0x67c ) = uVar8;
   *(uint*)( this + 0x63c ) = uVar5;
   *(undefined1(*) [16])( this + 0x64c ) = auVar11;
   *(undefined1(*) [16])( this + 0x65c ) = auVar11;
   *(uint*)( this + 0x66c ) = uVar5;
   plVar7 = (long*)RenderingServer::get_singleton();
   uVar8 = ( **(code**)( *plVar7 + 0x940 ) )(plVar7);
   fVar3 = _LC69;
   fVar2 = _LC66;
   *(undefined8*)( this + 0x560 ) = uVar8;
   set_perspective(this, _LC71, fVar2, fVar3);
   plVar7 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar7 + 0x968 ) )(plVar7, *(undefined8*)( this + 0x560 ), *(undefined4*)( this + 0x570 ));
   this_00 = (VelocityTracker3D*)operator_new(0x198, "");
   VelocityTracker3D::VelocityTracker3D(this_00);
   postinitialize_handler((Object*)this_00);
   cVar6 = RefCounted::init_ref();
   if (cVar6 == '\0') {
      pOVar10 = *(Object**)( this + 0x598 );
      if (pOVar10 == (Object*)0x0) goto LAB_00102bf1;
      *(undefined8*)( this + 0x598 ) = 0;
      cVar6 = RefCounted::unreference();
      if (cVar6 == '\0') goto LAB_00102bf1;
      this_00 = (VelocityTracker3D*)0x0;
      cVar6 = predelete_handler(pOVar10);
      if (cVar6 == '\0') goto LAB_00102bf1;
      LAB_00102ca3:( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
      Memory::free_static(pOVar10, false);
      pOVar9 = (Object*)this_00;
      if (this_00 == (VelocityTracker3D*)0x0) goto LAB_00102bf1;
   }
 else {
      pOVar10 = *(Object**)( this + 0x598 );
      pOVar9 = pOVar10;
      if (this_00 != (VelocityTracker3D*)pOVar10) {
         *(VelocityTracker3D**)( this + 0x598 ) = this_00;
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            *(undefined8*)( this + 0x598 ) = 0;
         }

         pOVar9 = (Object*)this_00;
         if (( ( pOVar10 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) goto LAB_00102ca3;
      }

   }

   cVar6 = RefCounted::unreference();
   if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
      ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
      Memory::free_static(pOVar9, false);
   }

   LAB_00102bf1:Node3D::set_notify_transform(SUB81(this, 0));
   Node3D::set_disable_scale(SUB81(this, 0));
   return;
}
/* Camera3D::_notification(int) */void Camera3D::_notification(Camera3D *this, int param_1) {
   Vector3 *pVVar1;
   char cVar2;
   int iVar3;
   long *plVar4;
   code *pcVar5;
   long lVar6;
   Camera3D *pCVar7;
   bool bVar8;
   long in_FS_OFFSET;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   Camera3D *local_88[9];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x33 < param_1) {
      if (param_1 == 0x7d1) {
         if (( (byte)this[0x2fa] & 0x40 ) != 0) {
            Node3D::get_global_transform();
            *(undefined8*)( this + 0x5bc ) = local_b8;
            *(undefined8*)( this + 0x5c4 ) = uStack_b0;
            *(undefined8*)( this + 0x5cc ) = local_a8;
            *(undefined8*)( this + 0x5d4 ) = uStack_a0;
            *(undefined8*)( this + 0x5ec ) = local_b8;
            *(undefined8*)( this + 0x5f4 ) = uStack_b0;
            *(undefined8*)( this + 0x5dc ) = local_98;
            *(undefined8*)( this + 0x5e4 ) = uStack_90;
            *(undefined8*)( this + 0x5fc ) = local_a8;
            *(undefined8*)( this + 0x604 ) = uStack_a0;
            *(undefined8*)( this + 0x60c ) = local_98;
            *(undefined8*)( this + 0x614 ) = uStack_90;
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001031ea;
            goto LAB_00103004;
         }

      }
 else {
         if (param_1 == 0x232b) goto switchD_00102d28_caseD_e;
         if (param_1 == 2000) {
            if (( (byte)this[0x2fa] & 0x40 ) == 0) {
               pcVar5 = *(code**)( *(long*)this + 0x1e8 );
               if (pcVar5 != _request_camera_update) goto LAB_00103182;
            }
 else {
               if (*(long*)( this + 0x240 ) == 0) {
                  _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
               }

               cVar2 = SceneTree::is_physics_interpolation_enabled();
               if (( cVar2 != '\0' ) && ( ( (byte)this[0x2f9] & 0x20 ) != 0 )) {
                  _physics_interpolation_ensure_data_flipped(this);
                  Node3D::get_global_transform();
                  *(undefined8*)( this + 0x5bc ) = local_b8;
                  *(undefined8*)( this + 0x5c4 ) = uStack_b0;
                  *(undefined8*)( this + 0x5cc ) = local_a8;
                  *(undefined8*)( this + 0x5d4 ) = uStack_a0;
                  *(undefined8*)( this + 0x5dc ) = local_98;
                  *(undefined8*)( this + 0x5e4 ) = uStack_90;
                  lVar6 = Engine::get_singleton();
                  if (*(char*)( lVar6 + 0x80 ) == '\0') {
                     _physics_interpolation_warning("_notification", "scene/3d/camera_3d.cpp", 0xd6, *(undefined8*)( this + 0x60 ), "Interpolated Camera3D triggered from outside physics process");
                  }

               }

               pcVar5 = *(code**)( *(long*)this + 0x1e8 );
               if (pcVar5 == _request_camera_update) {
                  if (( (byte)this[0x2fa] & 0x40 ) != 0) {
                     _update_camera(this);
                  }

               }
 else {
                  LAB_00103182:( *pcVar5 )(this);
               }

            }

            if (*(int*)( this + 0x590 ) != 0) {
               pVVar1 = *(Vector3**)( this + 0x598 );
               Node3D::get_global_transform();
               VelocityTracker3D::update_position(pVVar1);
            }

            if (( ( (byte)this[0x2f9] & 0x40 ) != 0 ) && ( ( (byte)this[0x2fa] & 0x40 ) != 0 )) {
               _notification(this, 0x7d1);
               this[0x2f9] = ( Camera3D )((byte)this[0x2f9] & 0xbf);
            }

         }

      }

      goto switchD_00102d28_caseD_f;
   }

   if (param_1 < 0xe) goto switchD_00102d28_caseD_f;
   switch (param_1) {
      case 0xe:
switchD_00102d28_caseD_e:
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      cVar2 = SceneTree::is_physics_interpolation_enabled();
      if (((cVar2 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) &&
         ((((byte)this[0x2fa] & 0x40) != 0 && (cVar2 = Node3D::is_visible_in_tree(), cVar2 != '\0'))
         )) {
        bVar8 = true;
LAB_00102f5a:
        _physics_interpolation_ensure_transform_calculated(this,bVar8);
        plVar4 = (long *)RenderingServer::get_singleton();
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x960))(plVar4,*(undefined8 *)(this + 0x560),this + 0x64c);
          return;
        }
        goto LAB_001031ea;
      }
    }
    break;
      case 0x19:
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      cVar2 = SceneTree::is_physics_interpolation_enabled();
      if (((cVar2 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) &&
         (bVar8 = false, *(long *)(this + 0x560) != 0)) goto LAB_00102f5a;
    }
    break;
      case 0x1a:
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      cVar2 = SceneTree::is_physics_interpolation_enabled();
      if ((cVar2 != '\0') && (((byte)this[0x2f9] & 0x20) != 0)) {
        _physics_interpolation_ensure_data_flipped(this);
        Node3D::get_global_transform();
        *(undefined8 *)(this + 0x5bc) = local_b8;
        *(undefined8 *)(this + 0x5c4) = uStack_b0;
        *(undefined8 *)(this + 0x5cc) = local_a8;
        *(undefined8 *)(this + 0x5d4) = uStack_a0;
        *(undefined8 *)(this + 0x5dc) = local_98;
        *(undefined8 *)(this + 0x5e4) = uStack_90;
      }
    }
    break;
      case 0x29:
    pCVar7 = *(Camera3D **)(this + 600);
    *(Camera3D **)(this + 0x530) = pCVar7;
    if (pCVar7 == (Camera3D *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_notification","scene/3d/camera_3d.cpp",0xaf,
                         "Parameter \"viewport\" is null.",0,0);
        return;
      }
      goto LAB_001031ea;
    }
    cVar2 = Viewport::_camera_3d_add(pCVar7);
    if ((this[0x529] != (Camera3D)0x0) || (cVar2 != '\0')) {
      Viewport::_camera_3d_set(*(Camera3D **)(this + 0x530));
    }
    lVar6 = Engine::get_singleton();
    if (*(char *)(lVar6 + 0xc0) != '\0') {
      plVar4 = *(long **)(this + 0x530);
      pcVar5 = *(code **)(*plVar4 + 0x108);
      create_custom_callable_function_pointer<Node3D>
                ((Node3D *)local_88,(char *)this,(_func_void *)"&Camera3D::update_gizmos");
      if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
         iVar3 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
      (*pcVar5)(plVar4,&_notification(int)::{lambda()#1}::operator()()::sname,(Node3D *)local_88,0);
      Callable::~Callable((Callable *)local_88);
    }
    break;
  case 0x2a:
    cVar2 = Node::is_part_of_edited_scene();
    if (cVar2 == '\0') {
      if ((((byte)this[0x2fa] & 0x40) == 0) ||
         (cVar2 = Node::is_part_of_edited_scene(), cVar2 != '\0')) {
        if (this[0x529] != (Camera3D)0x0) goto LAB_00103429;
      }
      else {
        pCVar7 = (Camera3D *)Viewport::get_camera_3d();
        if (this == pCVar7) {
LAB_00103429:
          clear_current(this,true);
          this[0x529] = (Camera3D)0x1;
          goto LAB_0010305d;
        }
      }
      this[0x529] = (Camera3D)0x0;
    }
LAB_0010305d:
    if (*(long *)(this + 0x530) != 0) {
      lVar6 = Engine::get_singleton();
      if (*(char *)(lVar6 + 0xc0) != '\0') {
        plVar4 = *(long **)(this + 0x530);
        pcVar5 = *(code **)(*plVar4 + 0x110);
        create_custom_callable_function_pointer<Node3D>
                  ((Node3D *)local_88,(char *)this,(_func_void *)"&Camera3D::update_gizmos");
        if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
           iVar3 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
        }
        (*pcVar5)(plVar4,&_notification(int)::{lambda()#2}::operator()()::sname,(Node3D *)local_88);
        Callable::~Callable((Callable *)local_88);
      }
      Viewport::_camera_3d_remove(*(Camera3D **)(this + 0x530));
      *(undefined8 *)(this + 0x530) = 0;
    }
    break;
  case 0x32:
    if (*(long *)(this + 0x530) != 0) {
      Viewport::find_world_3d();
      World3D::_register_camera(local_88[0]);
joined_r0x00102fdb:
      if (((local_88[0] != (Camera3D *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0'))
         && (cVar2 = predelete_handler((Object *)local_88[0]), cVar2 != '\0')) {
        (**(code **)(*(long *)local_88[0] + 0x140))(local_88[0]);
        Memory::free_static(local_88[0],false);
      }
    }
    goto LAB_00102ff0;
  case 0x33:
    if (*(long *)(this + 0x530) != 0) {
      Viewport::find_world_3d();
      World3D::_remove_camera(local_88[0]);
      goto joined_r0x00102fdb;
    }
LAB_00102ff0:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00103004:
      _update_process_mode(this);
      return;
    }
    goto LAB_001031ea;
  }
switchD_00102d28_caseD_f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001031ea:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
   }

   /* Camera3D::set_attributes(Ref<CameraAttributes> const&) */
   void Camera3D::set_attributes(Camera3D *this, Ref *param_1) {
      Callable *pCVar1;
      code *pcVar2;
      char cVar3;
      long lVar4;
      long *plVar5;
      undefined8 uVar6;
      Callable *pCVar7;
      long in_FS_OFFSET;
      Camera3D aCStack_48[24];
      long local_30;
      pCVar7 = *(Callable**)( this + 0x580 );
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (pCVar7 == (Callable*)0x0) {
         if (*(long*)param_1 != 0) {
            *(long*)( this + 0x580 ) = *(long*)param_1;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 0x580 ) = 0;
               goto LAB_00103620;
            }

            LAB_00103639:pCVar7 = *(Callable**)( this + 0x580 );
            goto LAB_00103640;
         }

         LAB_00103730:plVar5 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar5 + 0x978 ) )(plVar5, *(undefined8*)( this + 0x560 ), 0);
      }
 else {
         lVar4 = __dynamic_cast(pCVar7, &Object::typeinfo, &CameraAttributesPhysical::typeinfo, 0);
         if (lVar4 == 0) {
            pCVar1 = *(Callable**)param_1;
            if (pCVar7 != pCVar1) {
               *(Callable**)( this + 0x580 ) = pCVar1;
               if (( pCVar1 != (Callable*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
                  LAB_00103612:*(undefined8*)( this + 0x580 ) = 0;
                  goto LAB_00103620;
               }

               goto LAB_00103629;
            }

         }
 else {
            create_custom_callable_function_pointer<Camera3D>(aCStack_48, (char*)this, (_func_void*)"&Camera3D::_attributes_changed");
            Resource::disconnect_changed(pCVar7);
            Callable::~Callable((Callable*)aCStack_48);
            pCVar1 = *(Callable**)param_1;
            pCVar7 = *(Callable**)( this + 0x580 );
            if (pCVar1 != pCVar7) {
               *(Callable**)( this + 0x580 ) = pCVar1;
               if (pCVar1 == (Callable*)0x0) {
                  LAB_00103620:if (pCVar7 == (Callable*)0x0) goto LAB_00103730;
               }
 else {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') goto LAB_00103612;
                  if (pCVar7 == (Callable*)0x0) goto LAB_00103639;
               }

               LAB_00103629:cVar3 = RefCounted::unreference();
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pCVar7) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)pCVar7 + 0x140 ) )(pCVar7);
                  Memory::free_static(pCVar7, false);
               }

               goto LAB_00103639;
            }

            LAB_00103640:if (pCVar7 == (Callable*)0x0) goto LAB_00103730;
            lVar4 = __dynamic_cast(pCVar7, &Object::typeinfo, &CameraAttributesPhysical::typeinfo, 0);
            if (lVar4 != 0) {
               create_custom_callable_function_pointer<Camera3D>(aCStack_48, (char*)this, (_func_void*)"&Camera3D::_attributes_changed");
               Resource::connect_changed(pCVar7, (uint)aCStack_48);
               Callable::~Callable((Callable*)aCStack_48);
               _attributes_changed(this);
            }

         }

         plVar5 = (long*)RenderingServer::get_singleton();
         pcVar2 = *(code**)( *plVar5 + 0x978 );
         uVar6 = ( **(code**)( **(long**)( this + 0x580 ) + 0x1c0 ) )();
         ( *pcVar2 )(plVar5, *(undefined8*)( this + 0x560 ), uVar6);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      Object::notify_property_list_changed();
      return;
   }

   /* Camera3D::_bind_methods() */
   void Camera3D::_bind_methods(void) {
      char cVar1;
      undefined *puVar2;
      undefined *puVar3;
      undefined *puVar4;
      undefined *puVar5;
      MethodBind *pMVar6;
      uint uVar7;
      long in_FS_OFFSET;
      undefined8 local_198;
      undefined8 local_190;
      undefined8 local_188;
      long local_180;
      long local_178;
      long local_170;
      char *local_168;
      undefined8 local_160;
      char *local_158;
      undefined8 local_150;
      long local_148;
      undefined *local_128;
      char *pcStack_120;
      undefined8 local_118;
      char *local_108;
      char *pcStack_100;
      undefined8 local_f8;
      undefined *local_e8;
      char *pcStack_e0;
      char *local_d8;
      undefined8 local_d0;
      undefined *local_c8;
      char *pcStack_c0;
      char *local_b8;
      undefined8 local_b0;
      Variant *local_a8;
      undefined *puStack_a0;
      char *local_98;
      char *pcStack_90;
      undefined8 local_88;
      Variant **local_78;
      undefined1 auStack_70[16];
      char **ppcStack_60;
      undefined1 local_58[16];
      long local_40;
      puVar5 = PTR__LC41_00124938;
      puVar4 = PTR__LC95_00124930;
      puVar3 = PTR__LC42_00124928;
      puVar2 = PTR__LC93_00124920;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      D_METHOD<char_const*>((char*)&local_158, "project_ray_normal");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector3,Vector2_const&>((_func_Vector3_Vector2_ptr*)0x201);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "project_local_ray_normal");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector3,Vector2_const&>((_func_Vector3_Vector2_ptr*)0x211);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "project_ray_origin");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector3,Vector2_const&>((_func_Vector3_Vector2_ptr*)0x209);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "unproject_position");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector2,Vector3_const&>((_func_Vector2_Vector3_ptr*)0x219);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "is_position_behind");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,bool,Vector3_const&>(is_position_behind);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      local_f8 = 0;
      local_108 = "screen_point";
      pcStack_100 = "z_depth";
      auStack_70._0_8_ = &pcStack_100;
      uVar7 = (uint)(Variant*)&local_78;
      local_78 = (Variant**)&local_108;
      D_METHODP((char*)&local_158, (char***)"project_position", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector3,Vector2_const&,float>((_func_Vector3_Vector2_ptr_float*)0x221);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      local_c8 = puVar5;
      pcStack_c0 = "z_near";
      auStack_70._8_8_ = &local_b8;
      auStack_70._0_8_ = &pcStack_c0;
      local_b0 = 0;
      local_b8 = "z_far";
      local_78 = (Variant**)&local_c8;
      D_METHODP((char*)&local_158, (char***)"set_perspective", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float,float,float>(set_perspective);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      local_e8 = puVar3;
      pcStack_e0 = "z_near";
      auStack_70._8_8_ = &local_d8;
      auStack_70._0_8_ = &pcStack_e0;
      local_d0 = 0;
      local_d8 = "z_far";
      local_78 = (Variant**)&local_e8;
      D_METHODP((char*)&local_158, (char***)"set_orthogonal", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float,float,float>(set_orthogonal);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      local_a8 = (Variant*)puVar3;
      puStack_a0 = puVar4;
      local_98 = "z_near";
      pcStack_90 = "z_far";
      auStack_70._8_8_ = &local_98;
      auStack_70._0_8_ = &puStack_a0;
      local_88 = 0;
      local_78 = &local_a8;
      ppcStack_60 = &pcStack_90;
      D_METHODP((char*)&local_158, (char***)"set_frustum", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float,Vector2,float,float>(set_frustum);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"make_current", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D>(make_current);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "clear_current");
      Variant::Variant((Variant*)&local_78, true);
      local_58 = (undefined1[16])0x0;
      ppcStack_60 = (char**)0x0;
      local_a8 = (Variant*)&local_78;
      pMVar6 = create_method_bind<Camera3D,bool>(clear_current);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, &local_a8, 1);
      if (Variant::needs_deinit[(int)ppcStack_60] == '\0') {
         cVar1 = Variant::needs_deinit[(int)local_78];
      }
 else {
         Variant::_clear_internal();
         cVar1 = Variant::needs_deinit[(int)local_78];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_current");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,bool>(set_current);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"is_current", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,bool>(is_current);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_camera_transform", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Transform3D>((_func_Transform3D*)0x1f1);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_camera_projection", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Projection>((_func_Projection*)0x1f9);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_fov", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_fov);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_frustum_offset", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector2>(get_frustum_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_size", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_size);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_far", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_far);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_near", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_near);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_fov");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_fov);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_frustum_offset");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Vector2>(set_frustum_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_size");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_size);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      puStack_a0 = (undefined*)0x0;
      local_a8 = (Variant*)&_LC45;
      local_78 = &local_a8;
      D_METHODP((char*)&local_158, (char***)"set_far", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_far);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_near");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_near);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_projection", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::ProjectionType>(get_projection);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_projection");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::ProjectionType>(set_projection);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_h_offset");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_h_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_h_offset", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_h_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_v_offset");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(set_v_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_v_offset", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,float>(get_v_offset);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_cull_mask");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,unsigned_int>(set_cull_mask);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_cull_mask", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,unsigned_int>(get_cull_mask);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_environment");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<Environment>const&>(set_environment);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_environment", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<Environment>>(get_environment);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_attributes");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<CameraAttributes>const&>(set_attributes);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_attributes", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<CameraAttributes>>(get_attributes);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_compositor");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<Compositor>const&>(set_compositor);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_compositor", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Ref<Compositor>>(get_compositor);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_keep_aspect_mode");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::KeepAspect>(set_keep_aspect_mode);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_keep_aspect_mode", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::KeepAspect>(get_keep_aspect_mode);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "set_doppler_tracking");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::DopplerTracking>(set_doppler_tracking);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_doppler_tracking", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,Camera3D::DopplerTracking>(get_doppler_tracking);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_frustum", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,TypedArray<Plane>>(_get_frustum);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "is_position_in_frustum");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,bool,Vector3_const&>(is_position_in_frustum);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_camera_rid", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,RID>(get_camera);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHODP((char*)&local_158, (char***)"get_pyramid_shape_rid", 0);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,RID>(get_pyramid_shape_rid);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      local_118 = 0;
      auStack_70._0_8_ = &pcStack_120;
      local_128 = puVar2;
      pcStack_120 = "value";
      local_78 = (Variant**)&local_128;
      D_METHODP((char*)&local_158, (char***)"set_cull_mask_value", uVar7);
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,int,bool>(set_cull_mask_value);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      D_METHOD<char_const*>((char*)&local_158, "get_cull_mask_value");
      auStack_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar6 = create_method_bind<Camera3D,bool,int>(get_cull_mask_value);
      ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_158, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_158);
      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "Keep Width,Keep Height";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x16;
      String::parse_latin1((StrRange*)&local_188);
      local_190 = 0;
      local_158 = "keep_aspect";
      local_150 = 0xb;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 2, (StrRange*)&local_190, 2, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "cull_mask";
      local_190 = 0;
      local_150 = 9;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 2, (StrRange*)&local_190, 10, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "Environment";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0xb;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "environment";
      local_190 = 0;
      local_150 = 0xb;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 0x18, (StrRange*)&local_190, 0x11, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "CameraAttributesPractical,CameraAttributesPhysical";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x32;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "attributes";
      local_190 = 0;
      local_150 = 10;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 0x18, (StrRange*)&local_190, 0x11, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_170 != 0 ) ) )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "Compositor";
      local_180 = 0;
      local_188 = 0;
      local_150 = 10;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "compositor";
      local_190 = 0;
      local_150 = 10;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 0x18, (StrRange*)&local_190, 0x11, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "h_offset";
      local_190 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 0, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "v_offset";
      local_190 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 0, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "Disabled,Idle,Physics";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x15;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "doppler_tracking";
      local_190 = 0;
      local_150 = 0x10;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 2, (StrRange*)&local_190, 2, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "Perspective,Orthogonal,Frustum";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x1e;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "projection";
      local_190 = 0;
      local_150 = 10;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 2, (StrRange*)&local_190, 2, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "current";
      local_190 = 0;
      local_150 = 7;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 1, (StrRange*)&local_190, 0, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_170 != 0 ) ) )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "1,179,0.1,degrees";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x11;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "fov";
      local_190 = 0;
      local_150 = 3;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 1, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "0.001,100,0.001,or_greater,suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x23;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "size";
      local_190 = 0;
      local_150 = 4;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 1, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_170 != 0 ) ) )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "frustum_offset";
      local_190 = 0;
      local_150 = 0xe;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 5, (StrRange*)&local_190, 0, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, false);
      _scs_create((char*)&local_178, true);
      local_158 = "0.001,10,0.001,or_greater,exp,suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x26;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "near";
      local_190 = 0;
      local_150 = 4;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 1, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_170, true);
      _scs_create((char*)&local_178, true);
      local_158 = "0.01,4000,0.01,or_greater,exp,suffix:m";
      local_180 = 0;
      local_188 = 0;
      local_150 = 0x26;
      String::parse_latin1((StrRange*)&local_188);
      local_158 = "far";
      local_190 = 0;
      local_150 = 3;
      String::parse_latin1((StrRange*)&local_190);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_158, 3, (StrRange*)&local_190, 1, (StrRange*)&local_188, 6, (StrRange*)&local_180);
      local_168 = "Camera3D";
      local_198 = 0;
      local_160 = 8;
      String::parse_latin1((StrRange*)&local_198);
      StringName::StringName((StringName*)&local_168, (String*)&local_198, false);
      ClassDB::add_property((StringName*)&local_168, (PropertyInfo*)&local_158, (StringName*)&local_178, (StringName*)&local_170, -1);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_180 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_178 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "PROJECTION_PERSPECTIVE", false);
      local_178 = 0;
      local_158 = "PROJECTION_PERSPECTIVE";
      local_150 = 0x16;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::ProjectionType,void>::get_class_info((GetTypeInfo<Camera3D::ProjectionType,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 0, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "PROJECTION_ORTHOGONAL", false);
      local_178 = 0;
      local_158 = "PROJECTION_ORTHOGONAL";
      local_150 = 0x15;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::ProjectionType,void>::get_class_info((GetTypeInfo<Camera3D::ProjectionType,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 1, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "PROJECTION_FRUSTUM", false);
      local_178 = 0;
      local_158 = "PROJECTION_FRUSTUM";
      local_150 = 0x12;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::ProjectionType,void>::get_class_info((GetTypeInfo<Camera3D::ProjectionType,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 2, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "KEEP_WIDTH", false);
      local_178 = 0;
      local_158 = "KEEP_WIDTH";
      local_150 = 10;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::KeepAspect,void>::get_class_info((GetTypeInfo<Camera3D::KeepAspect,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 0, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "KEEP_HEIGHT", false);
      local_178 = 0;
      local_158 = "KEEP_HEIGHT";
      local_150 = 0xb;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::KeepAspect,void>::get_class_info((GetTypeInfo<Camera3D::KeepAspect,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 1, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "DOPPLER_TRACKING_DISABLED", false);
      local_178 = 0;
      local_158 = "DOPPLER_TRACKING_DISABLED";
      local_150 = 0x19;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::DopplerTracking,void>::get_class_info((GetTypeInfo<Camera3D::DopplerTracking,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 0, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "DOPPLER_TRACKING_IDLE_STEP", false);
      local_178 = 0;
      local_158 = "DOPPLER_TRACKING_IDLE_STEP";
      local_150 = 0x1a;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::DopplerTracking,void>::get_class_info((GetTypeInfo<Camera3D::DopplerTracking,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 1, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_168, "DOPPLER_TRACKING_PHYSICS_STEP", false);
      local_178 = 0;
      local_158 = "DOPPLER_TRACKING_PHYSICS_STEP";
      local_150 = 0x1d;
      String::parse_latin1((StrRange*)&local_178);
      GetTypeInfo<Camera3D::DopplerTracking,void>::get_class_info((GetTypeInfo<Camera3D::DopplerTracking,void>*)&local_158);
      local_170 = local_148;
      local_148 = 0;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_158);
      local_158 = "Camera3D";
      local_180 = 0;
      local_150 = 8;
      String::parse_latin1((StrRange*)&local_180);
      StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
      ClassDB::bind_integer_constant((StringName*)&local_158, (StringName*)&local_170, (StringName*)&local_168, 2, false);
      if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
      if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
      if (( StringName::configured != '\0' ) && ( local_168 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Camera3D::get_near_plane_points() const */
   void Camera3D::get_near_plane_points(void) {
      long *plVar1;
      undefined8 *puVar2;
      undefined8 *puVar3;
      long lVar4;
      size_t __n;
      long lVar5;
      undefined8 *__dest;
      long in_RSI;
      long in_RDI;
      ulong uVar6;
      long lVar7;
      long in_FS_OFFSET;
      byte bVar8;
      ulong local_128;
      uint auStack_120[4];
      undefined8 uStack_110;
      undefined4 local_108;
      undefined8 local_104;
      undefined4 local_fc;
      undefined8 local_f8;
      undefined4 local_f0;
      Transform3D local_e8[64];
      undefined8 local_a8[7];
      undefined4 local_70;
      undefined8 local_6c;
      undefined4 local_64;
      undefined8 local_60;
      undefined4 local_58;
      undefined8 local_54;
      undefined4 local_4c;
      long local_40;
      bVar8 = 0;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( *(byte*)( in_RSI + 0x2fa ) & 0x40 ) == 0) {
         _err_print_error("get_near_plane_points", "scene/3d/camera_3d.cpp", 0x1e3, "Condition \"!is_inside_tree()\" is true. Returning: Vector<Vector3>()", "Camera is not inside scene.", 0, 0);
         *(undefined8*)( in_RDI + 8 ) = 0;
      }
 else {
         _get_camera_projection(*(float*)( in_RSI + 0x54c ));
         local_108 = 0x3f800000;
         local_fc = 0;
         puVar2 = local_a8;
         for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar2 = 0;
            puVar2 = puVar2 + (ulong)bVar8 * -2 + 1;
         }

         local_128 = (ulong)_LC29;
         auStack_120[0] = 0;
         auStack_120[1] = 0;
         local_104 = 0;
         auStack_120[2] = _LC29;
         auStack_120[3] = 0;
         uStack_110 = 0;
         Projection::get_endpoints(local_e8, (Vector3*)&local_128);
         local_128 = 0;
         auStack_120[1] = (uint)local_a8[6];
         auStack_120[2] = ( uint )((ulong)local_a8[6] >> 0x20);
         auStack_120[0] = 0;
         auStack_120[3] = local_70;
         uStack_110 = local_6c;
         local_108 = local_64;
         local_104 = local_60;
         local_fc = local_58;
         local_f8 = local_54;
         local_f0 = local_4c;
         puVar2 = (undefined8*)Memory::alloc_static(0x50, false);
         if (puVar2 == (undefined8*)0x0) {
            __dest = (undefined8*)0x0;
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            __dest = puVar2 + 2;
            lVar5 = 0;
            *puVar2 = 1;
            *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar2 + 6 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar2 + 4 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( (long)puVar2 + 0x3c ) = (undefined1[16])0x0;
            puVar2[1] = 5;
            lVar4 = 0;
            do {
               puVar2 = __dest;
               if (__dest == (undefined8*)0x0) {
                  lVar7 = 0;
               }
 else {
                  while (lVar7 = puVar2[-1],__dest = puVar2,lVar4 < lVar7) {
                     plVar1 = puVar2 + -2;
                     if (1 < (ulong)puVar2[-2]) {
                        lVar7 = puVar2[-1];
                        uVar6 = 0x10;
                        __n = lVar7 * 0xc;
                        if (__n != 0) {
                           uVar6 = __n - 1 | __n - 1 >> 1;
                           uVar6 = uVar6 | uVar6 >> 2;
                           uVar6 = uVar6 | uVar6 >> 4;
                           uVar6 = uVar6 | uVar6 >> 8;
                           uVar6 = uVar6 | uVar6 >> 0x10;
                           uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
                        }

                        puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
                        if (puVar3 == (undefined8*)0x0) {
                           _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                        }
 else {
                           __dest = puVar3 + 2;
                           *puVar3 = 1;
                           puVar3[1] = lVar7;
                           memcpy(__dest, puVar2, __n);
                           LOCK();
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              Memory::free_static(plVar1, false);
                           }

                        }

                     }

                     lVar4 = lVar4 + 1;
                     *(undefined8*)( (long)__dest + lVar5 ) = *(undefined8*)( (Vector3*)&local_128 + lVar5 );
                     *(undefined4*)( (long)__dest + lVar5 + 8 ) = *(undefined4*)( (long)auStack_120 + lVar5 );
                     lVar5 = lVar5 + 0xc;
                     puVar2 = __dest;
                     if (lVar5 == 0x3c) goto LAB_001076c3;
                  }
;
               }

               lVar5 = lVar5 + 0xc;
               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar7, "p_index", "size()", "", false, false);
               lVar4 = lVar4 + 1;
            }
 while ( lVar5 != 0x3c );
         }

         LAB_001076c3:*(undefined8**)( in_RDI + 8 ) = __dest;
         Projection::~Projection((Projection*)local_e8);
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Camera3D::get_pyramid_shape_rid() */
   undefined8 Camera3D::get_pyramid_shape_rid(Camera3D *this) {
      float *pfVar1;
      long lVar2;
      long lVar3;
      code *pcVar4;
      undefined8 uVar5;
      long *plVar6;
      long lVar7;
      long lVar8;
      long lVar9;
      long in_FS_OFFSET;
      bool bVar10;
      Vector aVStack_58[8];
      long local_50;
      int local_48[6];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( (byte)this[0x2fa] & 0x40 ) == 0) {
         _err_print_error("get_pyramid_shape_rid", "scene/3d/camera_3d.cpp", 0x35a, "Condition \"!is_inside_tree()\" is true. Returning: RID()", "Camera is not inside scene.", 0, 0);
         uVar5 = 0;
         goto LAB_00107aa8;
      }

      if (*(long*)( this + 0x5a0 ) != 0) {
         get_near_plane_points();
         lVar2 = *(long*)( this + 0x5b0 );
         if (lVar2 == 0) {
            lVar9 = 0;
            lVar7 = 0;
         }
 else {
            lVar3 = *(long*)( lVar2 + -8 );
            if (lVar3 < 1) {
               lVar9 = 0;
               lVar7 = lVar3;
            }
 else if (local_50 == 0) {
               lVar9 = 0;
               lVar7 = 0;
            }
 else {
               lVar9 = 0;
               lVar8 = 0;
               do {
                  lVar7 = *(long*)( local_50 + -8 );
                  if (*(long*)( local_50 + -8 ) <= lVar9) break;
                  pfVar1 = (float*)( local_50 + lVar8 );
                  if (( ( *pfVar1 != *(float*)( lVar2 + lVar8 ) ) || ( pfVar1[1] != *(float*)( lVar2 + 4 + lVar8 ) ) ) || ( pfVar1[2] != *(float*)( lVar2 + 8 + lVar8 ) )) {
                     plVar6 = (long*)PhysicsServer3D::get_singleton();
                     pcVar4 = *(code**)( *plVar6 + 0x1a8 );
                     Variant::Variant((Variant*)local_48, aVStack_58);
                     ( *pcVar4 )(plVar6, *(undefined8*)( this + 0x5a0 ), (Variant*)local_48);
                     if (Variant::needs_deinit[local_48[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     lVar2 = *(long*)( this + 0x5b0 );
                     if (lVar2 == local_50) goto LAB_00107bb0;
                     if (lVar2 != 0) {
                        LOCK();
                        plVar6 = (long*)( lVar2 + -0x10 );
                        *plVar6 = *plVar6 + -1;
                        UNLOCK();
                        if (*plVar6 == 0) {
                           lVar2 = *(long*)( this + 0x5b0 );
                           *(undefined8*)( this + 0x5b0 ) = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                        }
 else {
                           *(undefined8*)( this + 0x5b0 ) = 0;
                        }

                     }

                     plVar6 = (long*)( local_50 + -0x10 );
                     if (local_50 == 0) goto LAB_00107aa1;
                     goto LAB_00107b87;
                  }

                  lVar9 = lVar9 + 1;
                  lVar8 = lVar8 + 0xc;
                  if (lVar9 == 5) goto LAB_00107bb9;
                  lVar7 = lVar3;
               }
 while ( lVar9 < lVar3 );
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      get_near_plane_points();
      lVar2 = *(long*)( this + 0x5b0 );
      if (lVar2 == local_50) {
         if (lVar2 != 0) {
            LOCK();
            plVar6 = (long*)( lVar2 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               Memory::free_static((void*)( local_50 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar2 != 0) {
            LOCK();
            plVar6 = (long*)( lVar2 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               lVar2 = *(long*)( this + 0x5b0 );
               *(undefined8*)( this + 0x5b0 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( this + 0x5b0 ) = local_50;
      }

      plVar6 = (long*)PhysicsServer3D::get_singleton();
      uVar5 = ( **(code**)( *plVar6 + 0x188 ) )(plVar6);
      *(undefined8*)( this + 0x5a0 ) = uVar5;
      plVar6 = (long*)PhysicsServer3D::get_singleton();
      pcVar4 = *(code**)( *plVar6 + 0x1a8 );
      Variant::Variant((Variant*)local_48, (Vector*)( this + 0x5a8 ));
      ( *pcVar4 )(plVar6, *(undefined8*)( this + 0x5a0 ), (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_00107aa1;
      LAB_00107b87:do {
         lVar2 = *plVar6;
         if (lVar2 == 0) goto LAB_00107bb0;
         LOCK();
         lVar7 = *plVar6;
         bVar10 = lVar2 == lVar7;
         if (bVar10) {
            *plVar6 = lVar2 + 1;
            lVar7 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar7 != -1) {
         *(long*)( this + 0x5b0 ) = local_50;
      }

      LAB_00107bb0:if (local_50 != 0) {
         LAB_00107bb9:lVar2 = local_50;
         LOCK();
         plVar6 = (long*)( local_50 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      LAB_00107aa1:uVar5 = *(undefined8*)( this + 0x5a0 );
      LAB_00107aa8:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar5;
   }

   /* DefaultAllocator::alloc(unsigned long) */
   void DefaultAllocator::alloc(ulong param_1) {
      Memory::alloc_static(param_1, false);
      return;
   }

   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      if (( configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* Object::_validate_property(PropertyInfo&) const */
   void Object::_validate_property(PropertyInfo *param_1) {
      return;
   }

   /* Object::_property_can_revert(StringName const&) const */
   undefined8 Object::_property_can_revert(StringName *param_1) {
      return 0;
   }

   /* Object::_property_get_revert(StringName const&, Variant&) const */
   undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Object::_notification(int) */
   void Object::_notification(int param_1) {
      return;
   }

   /* Object::get_save_class() const */
   void Object::get_save_class(void) {
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

   /* MethodBind::is_valid() const */
   undefined8 MethodBind::is_valid(void) {
      return 1;
   }

   /* MethodBind::is_vararg() const */
   undefined8 MethodBind::is_vararg(void) {
      return 0;
   }

   /* Compositor::get_rid() const */
   undefined8 Compositor::get_rid(Compositor *this) {
      return *(undefined8*)( this + 0x240 );
   }

   /* Node3D::set_transform_gizmo_visible(bool) */
   void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
      this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
      return;
   }

   /* Node3D::is_transform_gizmo_visible() const */
   byte Node3D::is_transform_gizmo_visible(Node3D *this) {
      return (byte)this[0x518] >> 2 & 1;
   }

   /* Camera3D::is_class_ptr(void*) const */
   uint Camera3D::is_class_ptr(Camera3D *this, void *param_1) {
      return (uint)CONCAT71(0x1247, (undefined4*)param_1 == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1247, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1248, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1248, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* Camera3D::_getv(StringName const&, Variant&) const */
   undefined8 Camera3D::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Camera3D::_setv(StringName const&, Variant const&) */
   undefined8 Camera3D::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Camera3D::physics_interpolation_flip_data() */
   void Camera3D::physics_interpolation_flip_data(void) {
      return;
   }

   /* CallableCustomMethodPointer<Camera3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Camera3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Camera3D,void> *this) {
      return;
   }

   /* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
      return;
   }

   /* MethodBindTRC<bool, int>::_gen_argument_type(int) const */
   char MethodBindTRC<bool,int>::_gen_argument_type(MethodBindTRC<bool,int> *this, int param_1) {
      return ( param_1 == 0 ) + '\x01';
   }

   /* MethodBindTRC<bool, int>::get_argument_meta(int) const */
   byte MethodBindTRC<bool,int>::get_argument_meta(MethodBindTRC<bool,int> *this, int param_1) {
      return -(param_1 == 0) & 3;
   }

   /* MethodBindT<int, bool>::_gen_argument_type(int) const */
   char MethodBindT<int,bool>::_gen_argument_type(MethodBindT<int,bool> *this, int param_1) {
      char cVar1;
      cVar1 = ( param_1 == 0 ) + '\x01';
      if (1 < (uint)param_1) {
         cVar1 = '\0';
      }

      return cVar1;
   }

   /* MethodBindT<int, bool>::get_argument_meta(int) const */
   byte MethodBindT<int,bool>::get_argument_meta(MethodBindT<int,bool> *this, int param_1) {
      return -(param_1 == 0) & 3;
   }

   /* MethodBindTR<RID>::_gen_argument_type(int) const */
   undefined8 MethodBindTR<RID>::_gen_argument_type(int param_1) {
      return 0x17;
   }

   /* MethodBindTR<RID>::get_argument_meta(int) const */
   undefined8 MethodBindTR<RID>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<RID>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<RID>::_gen_argument_type(int param_1) {
      return 0x17;
   }

   /* MethodBindTRC<RID>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<RID>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<TypedArray<Plane>>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<TypedArray<Plane>>::_gen_argument_type(int param_1) {
      return 0x1c;
   }

   /* MethodBindTRC<TypedArray<Plane>>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<TypedArray<Plane>>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Camera3D::DopplerTracking>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Camera3D::DopplerTracking>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Camera3D::DopplerTracking>::_gen_argument_type(int) const */
   char MethodBindT<Camera3D::DopplerTracking>::_gen_argument_type(MethodBindT<Camera3D::DopplerTracking> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<Camera3D::DopplerTracking>::get_argument_meta(int) const */
   undefined8 MethodBindT<Camera3D::DopplerTracking>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Camera3D::KeepAspect>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Camera3D::KeepAspect>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Camera3D::KeepAspect>::_gen_argument_type(int) const */
   char MethodBindT<Camera3D::KeepAspect>::_gen_argument_type(MethodBindT<Camera3D::KeepAspect> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<Camera3D::KeepAspect>::get_argument_meta(int) const */
   undefined8 MethodBindT<Camera3D::KeepAspect>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Ref<Compositor>>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Ref<Compositor>>::_gen_argument_type(int param_1) {
      return 0x18;
   }

   /* MethodBindTRC<Ref<Compositor>>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Ref<Compositor>>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Ref<Compositor> const&>::_gen_argument_type(int) const */
   byte MethodBindT<Ref<Compositor>const&>::_gen_argument_type(MethodBindT<Ref<Compositor>const&> *this, int param_1) {
      return -(param_1 == 0) & 0x18;
   }

   /* MethodBindT<Ref<Compositor> const&>::get_argument_meta(int) const */
   undefined8 MethodBindT<Ref<Compositor>const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Ref<CameraAttributes>>::_gen_argument_type(int param_1) {
      return 0x18;
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Ref<CameraAttributes>>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::_gen_argument_type(int) const */
   byte MethodBindT<Ref<CameraAttributes>const&>::_gen_argument_type(MethodBindT<Ref<CameraAttributes>const&> *this, int param_1) {
      return -(param_1 == 0) & 0x18;
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::get_argument_meta(int) const */
   undefined8 MethodBindT<Ref<CameraAttributes>const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Ref<Environment>>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Ref<Environment>>::_gen_argument_type(int param_1) {
      return 0x18;
   }

   /* MethodBindTRC<Ref<Environment>>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Ref<Environment>>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Ref<Environment> const&>::_gen_argument_type(int) const */
   byte MethodBindT<Ref<Environment>const&>::_gen_argument_type(MethodBindT<Ref<Environment>const&> *this, int param_1) {
      return -(param_1 == 0) & 0x18;
   }

   /* MethodBindT<Ref<Environment> const&>::get_argument_meta(int) const */
   undefined8 MethodBindT<Ref<Environment>const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<unsigned int>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<unsigned_int>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<unsigned int>::get_argument_meta(int) const */
   uint MethodBindTRC<unsigned_int>::get_argument_meta(MethodBindTRC<unsigned_int> *this, int param_1) {
      return param_1 >> 0x1f & 7;
   }

   /* MethodBindT<unsigned int>::_gen_argument_type(int) const */
   char MethodBindT<unsigned_int>::_gen_argument_type(MethodBindT<unsigned_int> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<unsigned int>::get_argument_meta(int) const */
   byte MethodBindT<unsigned_int>::get_argument_meta(MethodBindT<unsigned_int> *this, int param_1) {
      return -(param_1 == 0) & 7;
   }

   /* MethodBindT<Camera3D::ProjectionType>::_gen_argument_type(int) const */
   char MethodBindT<Camera3D::ProjectionType>::_gen_argument_type(MethodBindT<Camera3D::ProjectionType> *this, int param_1) {
      return ( param_1 == 0 ) * '\x02';
   }

   /* MethodBindT<Camera3D::ProjectionType>::get_argument_meta(int) const */
   undefined8 MethodBindT<Camera3D::ProjectionType>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Camera3D::ProjectionType>::_gen_argument_type(int param_1) {
      return 2;
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Camera3D::ProjectionType>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<Vector2>::_gen_argument_type(int) const */
   byte MethodBindT<Vector2>::_gen_argument_type(MethodBindT<Vector2> *this, int param_1) {
      return -(param_1 == 0) & 5;
   }

   /* MethodBindT<Vector2>::get_argument_meta(int) const */
   undefined8 MethodBindT<Vector2>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<float>::_gen_argument_type(int) const */
   byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
      return -(param_1 == 0) & 3;
   }

   /* MethodBindT<float>::get_argument_meta(int) const */
   byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
      return -(param_1 == 0) & 9;
   }

   /* MethodBindTRC<Vector2>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
      return 5;
   }

   /* MethodBindTRC<Vector2>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<float>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
      return 3;
   }

   /* MethodBindTRC<float>::get_argument_meta(int) const */
   uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
      return param_1 >> 0x1f & 9;
   }

   /* MethodBindTRC<Projection>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Projection>::_gen_argument_type(int param_1) {
      return 0x13;
   }

   /* MethodBindTRC<Projection>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Projection>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Transform3D>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<Transform3D>::_gen_argument_type(int param_1) {
      return 0x12;
   }

   /* MethodBindTRC<Transform3D>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Transform3D>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<bool>::_gen_argument_type(int) const */
   undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
      return 1;
   }

   /* MethodBindTRC<bool>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<bool>::_gen_argument_type(int) const */
   bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
      return param_1 == 0;
   }

   /* MethodBindT<bool>::get_argument_meta(int) const */
   undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<>::_gen_argument_type(int) const */
   undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
      return 0;
   }

   /* MethodBindT<>::_gen_argument_type_info(int) const */
   undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
      undefined4 in_register_0000003c;
      *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
      *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
      *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
      *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
      *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
      return CONCAT44(in_register_0000003c, param_1);
   }

   /* MethodBindT<>::get_argument_meta(int) const */
   undefined8 MethodBindT<>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindT<float, Vector2, float, float>::get_argument_meta(int) const */
   byte MethodBindT<float,Vector2,float,float>::get_argument_meta(MethodBindT<float,Vector2,float,float> *this, int param_1) {
      byte bVar1;
      bVar1 = 9;
      if (param_1 != 0) {
         bVar1 = -(param_1 - 2U < 2) & 9;
      }

      return bVar1;
   }

   /* MethodBindT<float, float, float>::get_argument_meta(int) const */
   byte MethodBindT<float,float,float>::get_argument_meta(MethodBindT<float,float,float> *this, int param_1) {
      return -((uint)param_1 < 3) & 9;
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::_gen_argument_type(int) const */
   char MethodBindTRC<Vector3,Vector2_const&,float>::_gen_argument_type(MethodBindTRC<Vector3,Vector2_const&,float> *this, int param_1) {
      char cVar1;
      cVar1 = '\t';
      if ((uint)param_1 < 2) {
         cVar1 = ( -(param_1 == 0) & 2U ) + 3;
      }

      return cVar1;
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::get_argument_meta(int) const */
   char MethodBindTRC<Vector3,Vector2_const&,float>::get_argument_meta(MethodBindTRC<Vector3,Vector2_const&,float> *this, int param_1) {
      return ( param_1 == 1 ) * '\t';
   }

   /* MethodBindTRC<bool, Vector3 const&>::_gen_argument_type(int) const */
   char MethodBindTRC<bool,Vector3_const&>::_gen_argument_type(MethodBindTRC<bool,Vector3_const&> *this, int param_1) {
      return ( -(param_1 == 0) & 8U ) + 1;
   }

   /* MethodBindTRC<bool, Vector3 const&>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<bool,Vector3_const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::_gen_argument_type(int) const */
   char MethodBindTRC<Vector2,Vector3_const&>::_gen_argument_type(MethodBindTRC<Vector2,Vector3_const&> *this, int param_1) {
      return ( -(param_1 == 0) & 4U ) + 5;
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Vector2,Vector3_const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::_gen_argument_type(int) const */
   int MethodBindTRC<Vector3,Vector2_const&>::_gen_argument_type(MethodBindTRC<Vector3,Vector2_const&> *this, int param_1) {
      return ( -(uint)(param_1 == 0) & 0xfffffffc ) + 9;
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::get_argument_meta(int) const */
   undefined8 MethodBindTRC<Vector3,Vector2_const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* CallableCustomMethodPointer<Camera3D, void>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<Camera3D,void>::get_argument_count(CallableCustomMethodPointer<Camera3D,void> *this, bool *param_1) {
      *param_1 = true;
      return 0;
   }

   /* CallableCustomMethodPointer<Node3D, void>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<Node3D,void>::get_argument_count(CallableCustomMethodPointer<Node3D,void> *this, bool *param_1) {
      *param_1 = true;
      return 0;
   }

   /* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* CallableCustomMethodPointer<Camera3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Camera3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Camera3D,void> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* CallableCustomMethodPointerBase::get_method() const */
   void CallableCustomMethodPointerBase::get_method(void) {
      long in_RSI;
      StringName *in_RDI;
      StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
      return;
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123b30;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123b30;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector2,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector3_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123b90;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector2,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector3_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123b90;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&,float>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123c50;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&,float>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123c50;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<float, float, float>::~MethodBindT() */
   void MethodBindT<float,float,float>::~MethodBindT(MethodBindT<float,float,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123cb0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<float, float, float>::~MethodBindT() */
   void MethodBindT<float,float,float>::~MethodBindT(MethodBindT<float,float,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123cb0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<float, Vector2, float, float>::~MethodBindT() */
   void MethodBindT<float,Vector2,float,float>::~MethodBindT(MethodBindT<float,Vector2,float,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123d10;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<float, Vector2, float, float>::~MethodBindT() */
   void MethodBindT<float,Vector2,float,float>::~MethodBindT(MethodBindT<float,Vector2,float,float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123d10;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123d70;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123d70;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123dd0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123dd0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123e30;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123e30;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Transform3D>::~MethodBindTRC() */
   void MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123e90;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Transform3D>::~MethodBindTRC() */
   void MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123e90;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Projection>::~MethodBindTRC() */
   void MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123ef0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Projection>::~MethodBindTRC() */
   void MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123ef0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Vector2>::~MethodBindTRC() */
   void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123fb0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Vector2>::~MethodBindTRC() */
   void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123fb0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Vector2>::~MethodBindT() */
   void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124070;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Vector2>::~MethodBindT() */
   void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124070;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC(MethodBindTRC<Camera3D::ProjectionType> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001240d0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC(MethodBindTRC<Camera3D::ProjectionType> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001240d0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Camera3D::ProjectionType>::~MethodBindT() */
   void MethodBindT<Camera3D::ProjectionType>::~MethodBindT(MethodBindT<Camera3D::ProjectionType> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124130;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Camera3D::ProjectionType>::~MethodBindT() */
   void MethodBindT<Camera3D::ProjectionType>::~MethodBindT(MethodBindT<Camera3D::ProjectionType> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124130;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<float>::~MethodBindT() */
   void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124010;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<float>::~MethodBindT() */
   void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124010;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<float>::~MethodBindTRC() */
   void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123f50;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<float>::~MethodBindTRC() */
   void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123f50;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<unsigned int>::~MethodBindT() */
   void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124190;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<unsigned int>::~MethodBindT() */
   void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124190;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<unsigned int>::~MethodBindTRC() */
   void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001241f0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<unsigned int>::~MethodBindTRC() */
   void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001241f0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Ref<Environment> const&>::~MethodBindT() */
   void MethodBindT<Ref<Environment>const&>::~MethodBindT(MethodBindT<Ref<Environment>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124250;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Ref<Environment> const&>::~MethodBindT() */
   void MethodBindT<Ref<Environment>const&>::~MethodBindT(MethodBindT<Ref<Environment>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124250;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Ref<Environment>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Environment>>::~MethodBindTRC(MethodBindTRC<Ref<Environment>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001242b0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Ref<Environment>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Environment>>::~MethodBindTRC(MethodBindTRC<Ref<Environment>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001242b0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::~MethodBindT() */
   void MethodBindT<Ref<CameraAttributes>const&>::~MethodBindT(MethodBindT<Ref<CameraAttributes>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124310;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::~MethodBindT() */
   void MethodBindT<Ref<CameraAttributes>const&>::~MethodBindT(MethodBindT<Ref<CameraAttributes>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124310;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC(MethodBindTRC<Ref<CameraAttributes>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124370;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC(MethodBindTRC<Ref<CameraAttributes>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124370;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Ref<Compositor> const&>::~MethodBindT() */
   void MethodBindT<Ref<Compositor>const&>::~MethodBindT(MethodBindT<Ref<Compositor>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001243d0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Ref<Compositor> const&>::~MethodBindT() */
   void MethodBindT<Ref<Compositor>const&>::~MethodBindT(MethodBindT<Ref<Compositor>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001243d0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Ref<Compositor>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Compositor>>::~MethodBindTRC(MethodBindTRC<Ref<Compositor>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124430;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Ref<Compositor>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Compositor>>::~MethodBindTRC(MethodBindTRC<Ref<Compositor>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124430;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Camera3D::KeepAspect>::~MethodBindT() */
   void MethodBindT<Camera3D::KeepAspect>::~MethodBindT(MethodBindT<Camera3D::KeepAspect> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124490;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Camera3D::KeepAspect>::~MethodBindT() */
   void MethodBindT<Camera3D::KeepAspect>::~MethodBindT(MethodBindT<Camera3D::KeepAspect> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124490;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC(MethodBindTRC<Camera3D::KeepAspect> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001244f0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC(MethodBindTRC<Camera3D::KeepAspect> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001244f0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<Camera3D::DopplerTracking>::~MethodBindT() */
   void MethodBindT<Camera3D::DopplerTracking>::~MethodBindT(MethodBindT<Camera3D::DopplerTracking> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124550;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<Camera3D::DopplerTracking>::~MethodBindT() */
   void MethodBindT<Camera3D::DopplerTracking>::~MethodBindT(MethodBindT<Camera3D::DopplerTracking> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124550;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<Camera3D::DopplerTracking> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001245b0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<Camera3D::DopplerTracking> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001245b0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC() */
   void MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC(MethodBindTRC<TypedArray<Plane>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124610;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC() */
   void MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC(MethodBindTRC<TypedArray<Plane>> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124610;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<bool, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<bool,Vector3_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector3_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123bf0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<bool, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<bool,Vector3_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector3_const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00123bf0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<RID>::~MethodBindTRC() */
   void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124670;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<RID>::~MethodBindTRC() */
   void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124670;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTR<RID>::~MethodBindTR() */
   void MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001246d0;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTR<RID>::~MethodBindTR() */
   void MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this) {
      *(undefined***)this = &PTR__gen_argument_type_001246d0;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindT<int, bool>::~MethodBindT() */
   void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124730;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindT<int, bool>::~MethodBindT() */
   void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124730;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* MethodBindTRC<bool, int>::~MethodBindTRC() */
   void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124790;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTRC<bool, int>::~MethodBindTRC() */
   void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00124790;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* Camera3D::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 Camera3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
         uVar1 = Node3D::_property_get_revert(param_1, param_2);
         return uVar1;
      }

      return 0;
   }

   /* Camera3D::_property_can_revertv(StringName const&) const */
   undefined8 Camera3D::_property_can_revertv(StringName *param_1) {
      undefined8 uVar1;
      if ((code*)PTR__property_can_revert_0012b008 != Object::_property_can_revert) {
         uVar1 = Node3D::_property_can_revert(param_1);
         return uVar1;
      }

      return 0;
   }

   /* MethodBindT<float, float, float>::_gen_argument_type(int) const */
   byte MethodBindT<float,float,float>::_gen_argument_type(MethodBindT<float,float,float> *this, int param_1) {
      return -((uint)param_1 < 3) & 3;
   }

   /* MethodBindT<float, Vector2, float, float>::_gen_argument_type(int) const */
   char MethodBindT<float,Vector2,float,float>::_gen_argument_type(MethodBindT<float,Vector2,float,float> *this, int param_1) {
      char cVar1;
      cVar1 = '\0';
      if ((uint)param_1 < 4) {
         cVar1 = ( param_1 == 1 ) * '\x02' + '\x03';
      }

      return cVar1;
   }

   /* CallableCustomMethodPointer<Node3D, void>::get_object() const */
   undefined8 CallableCustomMethodPointer<Node3D,void>::get_object(CallableCustomMethodPointer<Node3D,void> *this) {
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
            goto LAB_00109b3d;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_00109b3d;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_00109b3d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* CallableCustomMethodPointer<Camera3D, void>::get_object() const */
   undefined8 CallableCustomMethodPointer<Camera3D,void>::get_object(CallableCustomMethodPointer<Camera3D,void> *this) {
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
            goto LAB_00109c3d;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_00109c3d;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_00109c3d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* CallableCustomMethodPointerBase::get_as_text() const */
   void CallableCustomMethodPointerBase::get_as_text(void) {
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

   /* Camera3D::_get_class_namev() const */
   undefined8 *Camera3D::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00109d63:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109d63;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Camera3D");
            goto LAB_00109dce;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Camera3D");
      LAB_00109dce:return &_get_class_namev();
   }

   /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
   void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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

   /* Camera3D::get_class() const */
   void Camera3D::get_class(void) {
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

   /* MethodBindTRC<TypedArray<Plane>>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<TypedArray<Plane>>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      long lVar2;
      undefined4 in_register_0000003c;
      undefined4 *puVar3;
      long in_FS_OFFSET;
      long local_38;
      long local_30;
      long local_28;
      long local_20;
      puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      local_30 = 0;
      Variant::get_type_name(&local_38, 0xe);
      *puVar3 = 0x1c;
      puVar3[6] = 0x1f;
      *(undefined8*)( puVar3 + 8 ) = 0;
      *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
      if (local_38 == 0) {
         puVar3[10] = 6;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_38);
         puVar3[10] = 6;
         if (puVar3[6] == 0x11) {
            StringName::StringName((StringName*)&local_28, (String*)( puVar3 + 8 ), false);
            if (*(long*)( puVar3 + 4 ) == local_28) {
               lVar2 = local_38;
               if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
                  StringName::unref();
                  lVar2 = local_38;
               }

            }
 else {
               StringName::unref();
               *(long*)( puVar3 + 4 ) = local_28;
               lVar2 = local_38;
            }

            goto joined_r0x0010a10c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_30);
      lVar2 = local_38;
      joined_r0x0010a10c:local_38 = lVar2;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_30 != 0 )) {
         StringName::unref();
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Transform3D>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Transform3D>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
      *puVar3 = 0x12;
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

            goto joined_r0x0010a28c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010a28c:local_58 = lVar2;
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

   /* MethodBindTRC<RID>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<RID>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
      *puVar3 = 0x17;
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

            goto joined_r0x0010a40c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010a40c:local_58 = lVar2;
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

   /* MethodBindTRC<Ref<Environment>>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Ref<Environment>>::_gen_argument_type_info(int param_1) {
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
      local_48 = "Environment";
      local_40 = 0xb;
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
            goto LAB_0010a510;
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

      LAB_0010a510:lVar2 = local_58;
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

   /* MethodBindTRC<Ref<CameraAttributes>>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Ref<CameraAttributes>>::_gen_argument_type_info(int param_1) {
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
      local_48 = "CameraAttributes";
      local_40 = 0x10;
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
            goto LAB_0010a6b0;
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

      LAB_0010a6b0:lVar2 = local_58;
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

   /* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
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

            goto joined_r0x0010a8cc;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010a8cc:local_58 = lVar2;
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

   /* MethodBindTRC<bool>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
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

            goto joined_r0x0010aa4c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010aa4c:local_58 = lVar2;
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

   /* MethodBindTR<RID>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<RID>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
      *puVar3 = 0x17;
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

            goto joined_r0x0010abcc;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010abcc:local_58 = lVar2;
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

   /* MethodBindTRC<float>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
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

            goto joined_r0x0010ad4c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010ad4c:local_58 = lVar2;
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

   /* MethodBindTRC<Ref<Compositor>>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Ref<Compositor>>::_gen_argument_type_info(int param_1) {
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
      local_48 = "Compositor";
      local_40 = 10;
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
            goto LAB_0010ae50;
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

      LAB_0010ae50:lVar2 = local_58;
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

   /* MethodBindTRC<unsigned int>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<unsigned_int>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
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

            goto joined_r0x0010b06c;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010b06c:local_58 = lVar2;
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

   /* MethodBindTRC<Projection>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Projection>::_gen_argument_type_info(int param_1) {
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
      local_48 = &_LC19;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_58);
      *puVar3 = 0x13;
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

            goto joined_r0x0010b1ec;
         }

      }

      StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
      lVar2 = local_58;
      joined_r0x0010b1ec:local_58 = lVar2;
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

   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
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

   /* Node3D::is_class(String const&) const */
   undefined8 Node3D::is_class(Node3D *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0010b45f;
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

         LAB_0010b45f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010b513;
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
                        if (lVar5 == 0) goto LAB_0010b5eb;
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

            LAB_0010b5eb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010b513;
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
                           if (lVar5 == 0) goto LAB_0010b6cb;
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

               LAB_0010b6cb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_0010b513;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            goto LAB_0010b774;
         }

      }

      LAB_0010b513:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010b774:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Camera3D::is_class(String const&) const */
   undefined8 Camera3D::is_class(Camera3D *this, String *param_1) {
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
                     if (lVar4 == 0) goto LAB_0010b7ef;
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

         LAB_0010b7ef:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar5 != '\0') goto LAB_0010b8a3;
      }

      cVar5 = String::operator ==(param_1, "Camera3D");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Node3D::is_class((Node3D*)this, param_1);
            return uVar7;
         }

      }
 else {
         LAB_0010b8a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Camera3D::_validate_propertyv(PropertyInfo&) const */
   void Camera3D::_validate_propertyv(Camera3D *this, PropertyInfo *param_1) {
      Node::_validate_property((PropertyInfo*)this);
      if ((code*)PTR__validate_property_0012b010 != Node::_validate_property) {
         Node3D::_validate_property((PropertyInfo*)this);
      }

      _validate_property(this, param_1);
      return;
   }

   /* MethodDefinition::~MethodDefinition() */
   void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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

   /* Callable create_custom_callable_function_pointer<Node3D>(Node3D*, char const*, void
   (Node3D::*)()) */
   Node3D *create_custom_callable_function_pointer<Node3D>(Node3D *param_1, char *param_2, _func_void *param_3) {
      undefined8 uVar1;
      CallableCustom *this;
      undefined8 in_RCX;
      undefined8 in_R8;
      this(CallableCustom * operator_new(0x48, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC19;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
      *(undefined8*)( this + 0x40 ) = 0;
      *(undefined***)this = &PTR_hash_00123a10;
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

   /* WARNING: Removing unreachable block (ram,0x0010bba0) */
   /* Camera3D::_notificationv(int, bool) */
   void Camera3D::_notificationv(Camera3D *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (param_2) {
         _notification(this, param_1);
         if ((code*)PTR__notification_0012b018 != Node::_notification) {
            Node3D::_notification(iVar1);
         }

         Node::_notification(iVar1);
         return;
      }

      Node::_notification(iVar1);
      if ((code*)PTR__notification_0012b018 != Node::_notification) {
         Node3D::_notification(iVar1);
      }

      _notification(this, param_1);
      return;
   }

   /* Callable create_custom_callable_function_pointer<Camera3D>(Camera3D*, char const*, void
   (Camera3D::*)()) */
   Camera3D *create_custom_callable_function_pointer<Camera3D>(Camera3D *param_1, char *param_2, _func_void *param_3) {
      undefined8 uVar1;
      CallableCustom *this;
      undefined8 in_RCX;
      undefined8 in_R8;
      this(CallableCustom * operator_new(0x48, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC19;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
      *(undefined8*)( this + 0x40 ) = 0;
      *(undefined***)this = &PTR_hash_00123aa0;
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

   /* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */
   char *D_METHOD<char_const*>(char *param_1, char *param_2) {
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

   /* CowData<char32_t>::_unref() */
   void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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

   /* godot::details::enum_qualified_name_to_class_info_name(String const&) */
   details * __thiscallgodot::details::enum_qualified_name_to_class_info_name(details * this, String * param_1);
   {
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
      String::split(local_58, SUB81(param_1, 0), 0x10bd4d);
      if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
         local_60 = 0;
         local_48 = &_LC80;
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
               goto LAB_0010be3d;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      local_60 = 0;
      local_48 = &_LC80;
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

      LAB_0010be3d:plVar1 = local_50;
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

   /* GetTypeInfo<Camera3D::ProjectionType, void>::get_class_info() */
   GetTypeInfo<Camera3D::ProjectionType,void> * GetTypeInfo<Camera3D::ProjectionType,void>::get_class_info(GetTypeInfo<Camera3D::ProjectionType,void> * this);
   {
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
      local_48 = "Camera3D::ProjectionType";
      local_40 = 0x18;
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

   /* GetTypeInfo<Camera3D::KeepAspect, void>::get_class_info() */
   GetTypeInfo<Camera3D::KeepAspect,void> * GetTypeInfo<Camera3D::KeepAspect,void>::get_class_info(GetTypeInfo<Camera3D::KeepAspect,void> * this);
   {
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
      local_48 = "Camera3D::KeepAspect";
      local_40 = 0x14;
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

   /* GetTypeInfo<Camera3D::DopplerTracking, void>::get_class_info() */
   GetTypeInfo<Camera3D::DopplerTracking,void> * GetTypeInfo<Camera3D::DopplerTracking,void>::get_class_info(GetTypeInfo<Camera3D::DopplerTracking,void> * this);
   {
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
      local_48 = "Camera3D::DopplerTracking";
      local_40 = 0x19;
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

   /* MethodBindTRC<Camera3D::ProjectionType>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Camera3D::ProjectionType>::_gen_argument_type_info(int param_1) {
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
      local_30 = 0x18;
      local_38 = "Camera3D::ProjectionType";
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

   /* MethodBindTRC<Camera3D::KeepAspect>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Camera3D::KeepAspect>::_gen_argument_type_info(int param_1) {
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
      local_38 = "Camera3D::KeepAspect";
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

   /* MethodBindTRC<Camera3D::DopplerTracking>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Camera3D::DopplerTracking>::_gen_argument_type_info(int param_1) {
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
      local_30 = 0x19;
      local_38 = "Camera3D::DopplerTracking";
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

   /* CallableCustomMethodPointer<Camera3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<Camera3D,void>::call(CallableCustomMethodPointer<Camera3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            goto LAB_0010c98f;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] == 0) goto LAB_0010c98f;
         lVar1 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar2 = *(long*)( this + 0x40 );
         if (param_2 == 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010c968. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
               return;
            }

            goto LAB_0010ca51;
         }

         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 0;
      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_0010c98f:local_50 = 0;
         local_48 = "\', can\'t call method.";
         local_40 = 0x15;
         String::parse_latin1((StrRange*)&local_50);
         uitos((ulong)local_60);
         operator+((char *)
         local_58,(String*)"Invalid Object id \'";
         String::operator +((String*)&local_48, (String*)local_58);
         _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref(local_58);
         CowData<char32_t>::_unref(local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0010ca51:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* CallableCustomMethodPointer<Node3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<Node3D,void>::call(CallableCustomMethodPointer<Node3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            goto LAB_0010cbaf;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] == 0) goto LAB_0010cbaf;
         lVar1 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar2 = *(long*)( this + 0x40 );
         if (param_2 == 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010cb88. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
               return;
            }

            goto LAB_0010cc71;
         }

         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 0;
      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_0010cbaf:local_50 = 0;
         local_48 = "\', can\'t call method.";
         local_40 = 0x15;
         String::parse_latin1((StrRange*)&local_50);
         uitos((ulong)local_60);
         operator+((char *)
         local_58,(String*)"Invalid Object id \'";
         String::operator +((String*)&local_48, (String*)local_58);
         _err_print_error(&_LC92, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref(local_58);
         CowData<char32_t>::_unref(local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0010cc71:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Ref<CameraAttributes>const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined8 uVar4;
      long lVar5;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar6;
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
      puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar6 = 0;
      puVar6[6] = 0;
      *(undefined8*)( puVar6 + 8 ) = 0;
      puVar6[10] = 6;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010ccc9;
      local_78 = 0;
      local_68 = "CameraAttributes";
      local_80 = 0;
      local_60._0_8_ = 0x10;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_50 = 0x11;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010ce9d:local_40 = 6;
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
         if (local_50 == 0x11) goto LAB_0010ce9d;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }

      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }

      lVar5 = local_48;
      puVar6[6] = local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      LAB_0010ccc9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar6;
   }

   /* MethodBindT<Ref<Compositor> const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Ref<Compositor>const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined8 uVar4;
      long lVar5;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar6;
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
      puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar6 = 0;
      puVar6[6] = 0;
      *(undefined8*)( puVar6 + 8 ) = 0;
      puVar6[10] = 6;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010cf89;
      local_78 = 0;
      local_68 = "Compositor";
      local_80 = 0;
      local_60._0_8_ = 10;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_50 = 0x11;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d15d:local_40 = 6;
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
         if (local_50 == 0x11) goto LAB_0010d15d;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }

      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }

      lVar5 = local_48;
      puVar6[6] = local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      LAB_0010cf89:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar6;
   }

   /* MethodBindT<unsigned int>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<unsigned_int>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar7;
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
      puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar7 = 0;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      puVar7[10] = 6;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010d249;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d340:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010d340;
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

      *puVar7 = local_68._0_4_;
      if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( puVar7 + 2 ) = uVar5;
      }

      if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar7 + 4 ) = uVar5;
      }

      lVar6 = local_48;
      puVar7[6] = local_50;
      if (*(long*)( puVar7 + 8 ) == local_48) {
         puVar7[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
         *(long*)( puVar7 + 8 ) = local_48;
         puVar7[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      LAB_0010d249:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar7;
   }

   /* MethodBindT<bool>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar7;
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
      puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar7 = 0;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      puVar7[10] = 6;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010d4f9;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d5f0:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010d5f0;
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

      *puVar7 = local_68._0_4_;
      if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( puVar7 + 2 ) = uVar5;
      }

      if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar7 + 4 ) = uVar5;
      }

      lVar6 = local_48;
      puVar7[6] = local_50;
      if (*(long*)( puVar7 + 8 ) == local_48) {
         puVar7[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
         *(long*)( puVar7 + 8 ) = local_48;
         puVar7[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      LAB_0010d4f9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar7;
   }

   /* MethodBindT<Vector2>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Vector2>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar7;
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
      puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar7 = 0;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      puVar7[10] = 6;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010d7a9;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010d8a0:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_0010d8a0;
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

      *puVar7 = local_68._0_4_;
      if (*(long*)( puVar7 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 2 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( puVar7 + 2 ) = uVar5;
      }

      if (*(long*)( puVar7 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar7 + 4 ) = uVar5;
      }

      lVar6 = local_48;
      puVar7[6] = local_50;
      if (*(long*)( puVar7 + 8 ) == local_48) {
         puVar7[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar7 + 8 ));
         *(long*)( puVar7 + 8 ) = local_48;
         puVar7[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      LAB_0010d7a9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar7;
   }

   /* MethodBindT<Ref<Environment> const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Ref<Environment>const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined8 uVar4;
      long lVar5;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar6;
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
      puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *puVar6 = 0;
      puVar6[6] = 0;
      *(undefined8*)( puVar6 + 8 ) = 0;
      puVar6[10] = 6;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (in_EDX != 0) goto LAB_0010da59;
      local_78 = 0;
      local_68 = "Environment";
      local_80 = 0;
      local_60._0_8_ = 0xb;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
      local_50 = 0x11;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_0010dc2d:local_40 = 6;
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
         if (local_50 == 0x11) goto LAB_0010dc2d;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

      *puVar6 = local_68._0_4_;
      if (*(long*)( puVar6 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 2 ));
         uVar4 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( puVar6 + 2 ) = uVar4;
      }

      if (*(long*)( puVar6 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar4 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar6 + 4 ) = uVar4;
      }

      lVar5 = local_48;
      puVar6[6] = local_50;
      if (*(long*)( puVar6 + 8 ) == local_48) {
         puVar6[10] = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar6 + 8 ));
         *(long*)( puVar6 + 8 ) = local_48;
         puVar6[10] = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar4 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_60._8_8_;
            local_60 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      LAB_0010da59:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return puVar6;
   }

   /* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
      long *plVar1;
      long lVar2;
      undefined1(*pauVar3)[16];
      undefined4 *puVar4;
      long in_FS_OFFSET;
      CowData<char32_t> *local_b8;
      StringName *local_b0;
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
         local_88 = 0;
         local_90 = 0;
         local_78 = "Node";
         local_70 = 4;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "Node";
         local_98 = 0;
         local_70 = 4;
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
            LAB_0010e12d:local_50 = 0x80;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 0x80;
            if (local_60 != 0x11) goto LAB_0010e12d;
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

         }

         local_b8 = (CowData<char32_t>*)&local_70;
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref(local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_78, "Node", false);
         ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      local_b0 = (StringName*)&local_68;
      local_b8 = (CowData<char32_t>*)&local_70;
      local_88 = 0;
      local_78 = "Node3D";
      local_90 = 0;
      local_70 = 6;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Node3D";
      local_98 = 0;
      local_70 = 6;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref(local_b8, (CowData*)&local_98);
      }

      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
         LAB_0010de60:local_50 = 0x80;
         StringName::operator =(local_b0, (StringName*)&local_88);
         LAB_0010de6f:lVar2 = *(long*)param_1;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010de60;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010de6f;
         }

         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
      }

      if (lVar2 == 0) {
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
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)local_b8);
      }

      StringName::operator =((StringName*)( puVar4 + 4 ), local_b0);
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

      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node3D", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (!param_2) goto LAB_0010dfdf;
      local_88 = 0;
      local_90 = 0;
      local_78 = "Node";
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Node";
      local_98 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref(local_b8, (CowData*)&local_98);
      }

      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 == 0) {
         LAB_0010e2f0:local_50 = 0x80;
         StringName::operator =(local_b0, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010e2f0;
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

      }

      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      LAB_0010dfdf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Camera3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Camera3D::_get_property_listv(Camera3D *this, List *param_1, bool param_2) {
      long *plVar1;
      long lVar2;
      long lVar3;
      undefined1(*pauVar4)[16];
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
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         Node3D::_get_property_listv((Node3D*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "Camera3D";
      local_70 = 8;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Camera3D";
      local_98 = 0;
      local_70 = 8;
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
         LAB_0010e5b8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010e5b8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x0010e5d5;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x0010e5d5:if (lVar2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }

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

      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
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

      StringName::StringName((StringName*)&local_78, "Camera3D", false);
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

   /* MethodBindT<Camera3D::ProjectionType>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Camera3D::ProjectionType>::_gen_argument_type_info(int param_1) {
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
         local_60._0_8_ = 0x18;
         local_68 = "Camera3D::ProjectionType";
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

   /* MethodBindT<Camera3D::DopplerTracking>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Camera3D::DopplerTracking>::_gen_argument_type_info(int param_1) {
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
         local_60._0_8_ = 0x19;
         local_68 = "Camera3D::DopplerTracking";
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

   /* MethodBindT<Camera3D::KeepAspect>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindT<Camera3D::KeepAspect>::_gen_argument_type_info(int param_1) {
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
         local_68 = "Camera3D::KeepAspect";
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

   /* MethodBindTRC<Vector2, Vector3 const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Vector2,Vector3_const&>::_gen_argument_type_info(int param_1) {
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
         local_68 = &_LC19;
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
         goto LAB_0010f12a;
      }

      local_a0 = 0;
      local_60 = 0;
      local_68 = &_LC19;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar4 = 5;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar4[10] = 6;
         LAB_0010f0ef:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_0010f0ef;
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

      LAB_0010f12a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, Vector3 const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<bool,Vector3_const&>::_gen_argument_type_info(int param_1) {
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
         local_68 = &_LC19;
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
         goto LAB_0010f43a;
      }

      local_a0 = 0;
      local_60 = 0;
      local_68 = &_LC19;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar4 = 1;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar4[10] = 6;
         LAB_0010f3ff:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
         puVar4[10] = 6;
         if (puVar4[6] != 0x11) goto LAB_0010f3ff;
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

      LAB_0010f43a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBind* create_method_bind<Camera3D, Vector3, Vector2 const&>(Vector3 (Camera3D::*)(Vector2
   const&) const) */
   MethodBind *create_method_bind<Camera3D,Vector3,Vector2_const&>(_func_Vector3_Vector2_ptr *param_1) {
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
      *(_func_Vector3_Vector2_ptr**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123b30;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Vector2, Vector3 const&>(Vector2 (Camera3D::*)(Vector3
   const&) const) */
   MethodBind *create_method_bind<Camera3D,Vector2,Vector3_const&>(_func_Vector2_Vector3_ptr *param_1) {
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
      *(_func_Vector2_Vector3_ptr**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123b90;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, bool, Vector3 const&>(bool (Camera3D::*)(Vector3 const&)
   const) */
   MethodBind *create_method_bind<Camera3D,bool,Vector3_const&>(_func_bool_Vector3_ptr *param_1) {
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
      *(_func_bool_Vector3_ptr**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123bf0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Vector3, Vector2 const&, float>(Vector3
   (Camera3D::*)(Vector2 const&, float) const) */
   MethodBind *create_method_bind<Camera3D,Vector3,Vector2_const&,float>(_func_Vector3_Vector2_ptr_float *param_1) {
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
      *(_func_Vector3_Vector2_ptr_float**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123c50;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 2;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, float, float, float>(void (Camera3D::*)(float, float,
   float)) */
   MethodBind *create_method_bind<Camera3D,float,float,float>(_func_void_float_float_float *param_1) {
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
      *(_func_void_float_float_float**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123cb0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 3;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, float, Vector2, float, float>(void (Camera3D::*)(float,
   Vector2, float, float)) */
   MethodBind *create_method_bind<Camera3D,float,Vector2,float,float>(_func_void_float_Vector2_float_float *param_1) {
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
      *(_func_void_float_Vector2_float_float**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123d10;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 4;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D>(void (Camera3D::*)()) */
   MethodBind *create_method_bind<Camera3D>(_func_void *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00123d70;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, bool>(void (Camera3D::*)(bool)) */
   MethodBind *create_method_bind<Camera3D,bool>(_func_void_bool *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00123dd0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, bool>(bool (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,bool>(_func_bool *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00123e30;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Transform3D>(Transform3D (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Transform3D>(_func_Transform3D *param_1) {
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
      *(_func_Transform3D**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123e90;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Projection>(Projection (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Projection>(_func_Projection *param_1) {
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
      *(_func_Projection**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00123ef0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, float>(float (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,float>(_func_float *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00123f50;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Vector2>(Vector2 (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Vector2>(_func_Vector2 *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00123fb0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, float>(void (Camera3D::*)(float)) */
   MethodBind *create_method_bind<Camera3D,float>(_func_void_float *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124010;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Vector2>(void (Camera3D::*)(Vector2)) */
   MethodBind *create_method_bind<Camera3D,Vector2>(_func_void_Vector2 *param_1) {
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
      *(_func_void_Vector2**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124070;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::ProjectionType>(Camera3D::ProjectionType
   (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Camera3D::ProjectionType>(_func_ProjectionType *param_1) {
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
      *(_func_ProjectionType**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_001240d0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::ProjectionType>(void
   (Camera3D::*)(Camera3D::ProjectionType)) */
   MethodBind *create_method_bind<Camera3D,Camera3D::ProjectionType>(_func_void_ProjectionType *param_1) {
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
      *(_func_void_ProjectionType**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124130;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, unsigned int>(void (Camera3D::*)(unsigned int)) */
   MethodBind *create_method_bind<Camera3D,unsigned_int>(_func_void_uint *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124190;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, unsigned int>(unsigned int (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,unsigned_int>(_func_uint *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_001241f0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<Environment> const&>(void
   (Camera3D::*)(Ref<Environment> const&)) */
   MethodBind *create_method_bind<Camera3D,Ref<Environment>const&>(_func_void_Ref_ptr *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124250;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<Environment>>(Ref<Environment> (Camera3D::*)()
   const) */
   MethodBind *create_method_bind<Camera3D,Ref<Environment>>(_func_Ref *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_001242b0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<CameraAttributes> const&>(void
   (Camera3D::*)(Ref<CameraAttributes> const&)) */
   MethodBind *create_method_bind<Camera3D,Ref<CameraAttributes>const&>(_func_void_Ref_ptr *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124310;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<CameraAttributes>>(Ref<CameraAttributes>
   (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Ref<CameraAttributes>>(_func_Ref *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124370;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<Compositor> const&>(void
   (Camera3D::*)(Ref<Compositor> const&)) */
   MethodBind *create_method_bind<Camera3D,Ref<Compositor>const&>(_func_void_Ref_ptr *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_001243d0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Ref<Compositor>>(Ref<Compositor> (Camera3D::*)() const)
    */
   MethodBind *create_method_bind<Camera3D,Ref<Compositor>>(_func_Ref *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124430;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::KeepAspect>(void
   (Camera3D::*)(Camera3D::KeepAspect)) */
   MethodBind *create_method_bind<Camera3D,Camera3D::KeepAspect>(_func_void_KeepAspect *param_1) {
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
      *(_func_void_KeepAspect**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124490;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::KeepAspect>(Camera3D::KeepAspect
   (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Camera3D::KeepAspect>(_func_KeepAspect *param_1) {
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
      *(_func_KeepAspect**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_001244f0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::DopplerTracking>(void
   (Camera3D::*)(Camera3D::DopplerTracking)) */
   MethodBind *create_method_bind<Camera3D,Camera3D::DopplerTracking>(_func_void_DopplerTracking *param_1) {
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
      *(_func_void_DopplerTracking**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124550;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, Camera3D::DopplerTracking>(Camera3D::DopplerTracking
   (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,Camera3D::DopplerTracking>(_func_DopplerTracking *param_1) {
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
      *(_func_DopplerTracking**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_001245b0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, TypedArray<Plane>>(TypedArray<Plane> (Camera3D::*)()
   const) */
   MethodBind *create_method_bind<Camera3D,TypedArray<Plane>>(_func_TypedArray *param_1) {
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
      *(undefined***)this = &PTR__gen_argument_type_00124610;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, RID>(RID (Camera3D::*)() const) */
   MethodBind *create_method_bind<Camera3D,RID>(_func_RID *param_1) {
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
      *(_func_RID**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124670;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, RID>(RID (Camera3D::*)()) */
   MethodBind *create_method_bind<Camera3D,RID>(_func_RID *param_1) {
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
      *(_func_RID**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_001246d0;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 0;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, int, bool>(void (Camera3D::*)(int, bool)) */
   MethodBind *create_method_bind<Camera3D,int,bool>(_func_void_int_bool *param_1) {
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
      *(_func_void_int_bool**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124730;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 2;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* MethodBind* create_method_bind<Camera3D, bool, int>(bool (Camera3D::*)(int) const) */
   MethodBind *create_method_bind<Camera3D,bool,int>(_func_bool_int *param_1) {
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
      *(_func_bool_int**)( this + 0x58 ) = param_1;
      *(undefined***)this = &PTR__gen_argument_type_00124790;
      *(undefined8*)( this + 0x60 ) = in_RSI;
      MethodBind::_set_returns(SUB81(this, 0));
      MethodBind::_set_const(SUB81(this, 0));
      MethodBind::_generate_argument_types((int)this);
      *(undefined4*)( this + 0x34 ) = 1;
      local_40 = 0;
      local_38 = "Camera3D";
      local_30 = 8;
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

   /* Camera3D::_initialize_classv() */
   void Camera3D::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined8 local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
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
               if ((code*)PTR__bind_methods_0012b028 != Node::_bind_methods) {
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
            if ((code*)PTR__bind_methods_0012b020 != Node::_bind_methods) {
               Node3D::_bind_methods();
            }

            Node3D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node3D";
         local_68 = 0;
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Camera3D";
         local_70 = 0;
         local_50 = 8;
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

   /* CowData<Vector3>::_realloc(long) */
   undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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

   /* WARNING: Removing unreachable block (ram,0x001121a8) */
   /* WARNING: Removing unreachable block (ram,0x0011233d) */
   /* WARNING: Removing unreachable block (ram,0x00112349) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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

   /* MethodBindTRC<bool, int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool,int>::validated_call(MethodBindTRC<bool,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001124c8;
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
      LAB_001124c8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool,int>::ptrcall(MethodBindTRC<bool,int> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_001126a7;
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
      LAB_001126a7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<int, bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<int,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00112a21;
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
         /* WARNING: Could not recover jumptable at 0x001128a6. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
         return;
      }

      LAB_00112a21:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<int, bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<int,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00112c11;
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
         /* WARNING: Could not recover jumptable at 0x00112a9a. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(char**)( (long)param_3 + 8 ) != '\0');
         return;
      }

      LAB_00112c11:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTR<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<RID>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00112d80;
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

            local_58 = (char*)( *(code*)pVVar2 )();
            Variant::Variant((Variant*)local_48, (RID*)&local_58);
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

      LAB_00112d80:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<RID>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<RID>::validated_call(MethodBindTR<RID> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 uVar1;
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

            goto LAB_00112f92;
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
      *(undefined8*)( param_3 + 8 ) = uVar1;
      LAB_00112f92:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<RID>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<RID>::ptrcall(MethodBindTR<RID> *this, Object *param_1, void **param_2, void *param_3) {
      undefined8 uVar1;
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

            goto LAB_00113141;
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
      *(undefined8*)param_3 = uVar1;
      LAB_00113141:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<RID>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00113380;
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

            local_58 = (char*)( *(code*)pVVar2 )();
            Variant::Variant((Variant*)local_48, (RID*)&local_58);
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

      LAB_00113380:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<RID>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<RID>::validated_call(MethodBindTRC<RID> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 uVar1;
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

            goto LAB_00113592;
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
      *(undefined8*)( param_3 + 8 ) = uVar1;
      LAB_00113592:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<RID>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<RID>::ptrcall(MethodBindTRC<RID> *this, Object *param_1, void **param_2, void *param_3) {
      undefined8 uVar1;
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

            goto LAB_00113741;
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
      *(undefined8*)param_3 = uVar1;
      LAB_00113741:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TypedArray<Plane>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindTRC<TypedArray<Plane>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00113980;
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

      LAB_00113980:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<Camera3D::DopplerTracking>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00113c10;
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

      LAB_00113c10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTRC<Camera3D::DopplerTracking>::validated_call(MethodBindTRC<Camera3D::DopplerTracking> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00113e24;
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
      LAB_00113e24:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::DopplerTracking>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Camera3D::DopplerTracking>::ptrcall(MethodBindTRC<Camera3D::DopplerTracking> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00113fd3;
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
      LAB_00113fd3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Camera3D::DopplerTracking>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindT<Camera3D::DopplerTracking>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00114311;
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
         /* WARNING: Could not recover jumptable at 0x0011419c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00114311:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Camera3D::DopplerTracking>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Camera3D::DopplerTracking>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_001144f1;
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
         /* WARNING: Could not recover jumptable at 0x0011437b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_001144f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Camera3D::KeepAspect>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_001145c0;
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

      LAB_001145c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Camera3D::KeepAspect>::validated_call(MethodBindTRC<Camera3D::KeepAspect> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001147d4;
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
      LAB_001147d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::KeepAspect>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Camera3D::KeepAspect>::ptrcall(MethodBindTRC<Camera3D::KeepAspect> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00114983;
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
      LAB_00114983:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Camera3D::KeepAspect>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Camera3D::KeepAspect>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00114cc1;
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
         /* WARNING: Could not recover jumptable at 0x00114b4c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00114cc1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Camera3D::KeepAspect>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Camera3D::KeepAspect>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00114ea1;
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
         /* WARNING: Could not recover jumptable at 0x00114d2b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_00114ea1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00114f70;
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

      LAB_00114f70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<unsigned_int>::validated_call(MethodBindTRC<unsigned_int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00115184;
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
      LAB_00115184:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<unsigned int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<unsigned_int>::ptrcall(MethodBindTRC<unsigned_int> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00115333;
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
      LAB_00115333:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<unsigned int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<unsigned_int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00115671;
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
         /* WARNING: Could not recover jumptable at 0x001154fc. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00115671:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<unsigned int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<unsigned_int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00115851;
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
         /* WARNING: Could not recover jumptable at 0x001156db. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_00115851:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Camera3D::ProjectionType>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindT<Camera3D::ProjectionType>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00115a31;
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
         /* WARNING: Could not recover jumptable at 0x001158bc. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00115a31:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Camera3D::ProjectionType>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Camera3D::ProjectionType>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00115c11;
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
         /* WARNING: Could not recover jumptable at 0x00115a9b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_00115c11:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<Camera3D::ProjectionType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00115ce0;
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

      LAB_00115ce0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTRC<Camera3D::ProjectionType>::validated_call(MethodBindTRC<Camera3D::ProjectionType> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00115ef4;
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
      LAB_00115ef4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Camera3D::ProjectionType>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Camera3D::ProjectionType>::ptrcall(MethodBindTRC<Camera3D::ProjectionType> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_001160a3;
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
      LAB_001160a3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Vector2>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Vector2>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001163e1;
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
         /* WARNING: Could not recover jumptable at 0x0011626e. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001163e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<Vector2>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Vector2>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_001165c1;
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
         /* WARNING: Could not recover jumptable at 0x0011644d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(**param_3, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001165c1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001167a9;
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
         /* WARNING: Could not recover jumptable at 0x00116632. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001167a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00116989;
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
         /* WARNING: Could not recover jumptable at 0x00116811. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_00116989:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_00116a60;
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

      LAB_00116a60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00116c74;
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
      LAB_00116c74:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00116e23;
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
      LAB_00116e23:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00117050;
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

      LAB_00117050:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<float>::validated_call(MethodBindTRC<float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00117268;
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
      LAB_00117268:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<float>::ptrcall(MethodBindTRC<float> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00117427;
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
      LAB_00117427:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Projection>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<Projection>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      long *plVar4;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_b8;
      undefined8 local_b0;
      char *local_a8;
      undefined8 local_a0;
      undefined4 local_98[2];
      undefined8 local_90;
      undefined8 uStack_88;
      Projection local_78[72];
      long local_30;
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_a8, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }

         }
 else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }

         if (local_a8 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_b0 = 0;
            local_a0 = 0x35;
            String::parse_latin1((StrRange*)&local_b0);
            vformat<StringName>((StringName*)&local_a8, (StrRange*)&local_b0, &local_b8);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_a8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
               StringName::unref();
            }

            goto LAB_00117680;
         }

         if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
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

            ( *(code*)pVVar2 )(local_78);
            Variant::Variant((Variant*)local_98, local_78);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_98[0];
            *(undefined8*)( param_1 + 8 ) = local_90;
            *(undefined8*)( param_1 + 0x10 ) = uStack_88;
            Projection::~Projection(local_78);
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

      LAB_00117680:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Projection>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Projection>::validated_call(MethodBindTRC<Projection> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 *puVar1;
      code *pcVar2;
      long *plVar3;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_98;
      undefined8 local_90;
      Variant **local_88;
      undefined8 local_80;
      undefined8 local_78;
      undefined8 uStack_70;
      undefined8 local_68;
      undefined8 uStack_60;
      undefined8 local_58;
      undefined8 uStack_50;
      undefined8 local_48;
      undefined8 uStack_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_88 == (Variant**)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_88 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_88 = (Variant**)0x112398;
            local_80 = 0x35;
            local_90 = 0;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }

            goto LAB_001178dd;
         }

         param_2 = local_88;
         if (( StringName::configured != '\0' ) && ( local_88 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
      }

      ( *pcVar2 )((Projection*)&local_78, param_1 + *(long*)( this + 0x60 ), param_2);
      puVar1 = *(undefined8**)( param_3 + 8 );
      *puVar1 = local_78;
      puVar1[1] = uStack_70;
      puVar1[2] = local_68;
      puVar1[3] = uStack_60;
      puVar1[4] = local_58;
      puVar1[5] = uStack_50;
      puVar1[6] = local_48;
      puVar1[7] = uStack_40;
      Projection::~Projection((Projection*)&local_78);
      LAB_001178dd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Projection>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Projection>::ptrcall(MethodBindTRC<Projection> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_98;
      undefined8 local_90;
      void **local_88;
      undefined8 local_80;
      undefined8 local_78;
      undefined8 uStack_70;
      undefined8 local_68;
      undefined8 uStack_60;
      undefined8 local_58;
      undefined8 uStack_50;
      undefined8 local_48;
      undefined8 uStack_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_88 == (void**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_88 != (void**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_88 = (void**)0x112398;
            local_80 = 0x35;
            local_90 = 0;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }

            goto LAB_00117acb;
         }

         param_2 = local_88;
         if (( StringName::configured != '\0' ) && ( local_88 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )((Projection*)&local_78, param_1 + *(long*)( this + 0x60 ), param_2);
      *(undefined8*)param_3 = local_78;
      *(undefined8*)( (long)param_3 + 8 ) = uStack_70;
      *(undefined8*)( (long)param_3 + 0x10 ) = local_68;
      *(undefined8*)( (long)param_3 + 0x18 ) = uStack_60;
      *(undefined8*)( (long)param_3 + 0x20 ) = local_58;
      *(undefined8*)( (long)param_3 + 0x28 ) = uStack_50;
      *(undefined8*)( (long)param_3 + 0x30 ) = local_48;
      *(undefined8*)( (long)param_3 + 0x38 ) = uStack_40;
      Projection::~Projection((Projection*)&local_78);
      LAB_00117acb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Transform3D>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<Transform3D>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      long *plVar4;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_a8;
      undefined8 local_a0;
      char *local_98;
      undefined8 local_90;
      undefined4 local_88[2];
      undefined8 local_80;
      undefined8 uStack_78;
      Transform3D local_68[56];
      long local_30;
      plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
         if (plVar4[1] == 0) {
            plVar3 = (long*)plVar4[0x23];
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
            }

         }
 else {
            plVar3 = (long*)( plVar4[1] + 0x20 );
         }

         if (local_98 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_a0 = 0;
            local_90 = 0x35;
            String::parse_latin1((StrRange*)&local_a0);
            vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            goto LAB_00117d10;
         }

         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
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

            ( *(code*)pVVar2 )(local_68);
            Variant::Variant((Variant*)local_88, local_68);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_88[0];
            *(undefined8*)( param_1 + 8 ) = local_80;
            *(undefined8*)( param_1 + 0x10 ) = uStack_78;
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

      LAB_00117d10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Transform3D>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Transform3D>::validated_call(MethodBindTRC<Transform3D> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined8 *puVar1;
      code *pcVar2;
      long *plVar3;
      Variant **extraout_RDX;
      long in_FS_OFFSET;
      long local_88;
      undefined8 local_80;
      Variant **local_78;
      undefined8 local_70;
      undefined8 local_68;
      undefined8 uStack_60;
      undefined8 local_58;
      undefined8 uStack_50;
      undefined8 local_48;
      undefined8 uStack_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_78, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar3 = *(long**)( param_1 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_78 == (Variant**)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_78 != (Variant**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_78 = (Variant**)0x112398;
            local_70 = 0x35;
            local_80 = 0;
            String::parse_latin1((StrRange*)&local_80);
            vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_78, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

            goto LAB_00117f54;
         }

         param_2 = local_78;
         if (( StringName::configured != '\0' ) && ( local_78 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
      }

      ( *pcVar2 )(&local_68, param_1 + *(long*)( this + 0x60 ), param_2);
      puVar1 = *(undefined8**)( param_3 + 8 );
      *puVar1 = local_68;
      puVar1[1] = uStack_60;
      puVar1[2] = local_58;
      puVar1[3] = uStack_50;
      puVar1[4] = local_48;
      puVar1[5] = uStack_40;
      LAB_00117f54:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Transform3D>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Transform3D>::ptrcall(MethodBindTRC<Transform3D> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      void **extraout_RDX;
      long in_FS_OFFSET;
      long local_88;
      undefined8 local_80;
      void **local_78;
      undefined8 local_70;
      undefined8 local_68;
      undefined8 uStack_60;
      undefined8 local_58;
      undefined8 uStack_50;
      undefined8 local_48;
      undefined8 uStack_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_78, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar2 = *(long**)( param_1 + 0x118 );
            if (plVar2 == (long*)0x0) {
               plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_78 == (void**)*plVar2) {
            if (( StringName::configured != '\0' ) && ( local_78 != (void**)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_78 = (void**)0x112398;
            local_70 = 0x35;
            local_80 = 0;
            String::parse_latin1((StrRange*)&local_80);
            vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_78, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

            goto LAB_00118122;
         }

         param_2 = local_78;
         if (( StringName::configured != '\0' ) && ( local_78 != (void**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
      }

      ( *pcVar1 )(&local_68, param_1 + *(long*)( this + 0x60 ), param_2);
      *(undefined8*)param_3 = local_68;
      *(undefined8*)( (long)param_3 + 8 ) = uStack_60;
      *(undefined8*)( (long)param_3 + 0x10 ) = local_58;
      *(undefined8*)( (long)param_3 + 0x18 ) = uStack_50;
      *(undefined8*)( (long)param_3 + 0x20 ) = local_48;
      *(undefined8*)( (long)param_3 + 0x28 ) = uStack_40;
      LAB_00118122:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00118350;
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

      LAB_00118350:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00118562;
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
      LAB_00118562:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00118711;
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
      LAB_00118711:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00118a51;
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
         /* WARNING: Could not recover jumptable at 0x001188dd. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_00118a51:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_00118c39;
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
         /* WARNING: Could not recover jumptable at 0x00118ac2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
         return;
      }

      LAB_00118c39:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_00118d60;
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

      LAB_00118d60:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_001190df;
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
         /* WARNING: Could not recover jumptable at 0x00118f86. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001190df:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_0011929f;
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
         /* WARNING: Could not recover jumptable at 0x00119146. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0011929f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float, Vector2, float, float>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<float,Vector2,float,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar1;
      long in_FS_OFFSET;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
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

            goto LAB_001194b5;
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
         auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar4._0_4_ = (float)*(double*)( *(long*)( param_3 + 0x18 ) + 8 );
         auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar3._0_4_ = (float)*(double*)( *(long*)( param_3 + 0x10 ) + 8 );
         auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
         /* WARNING: Could not recover jumptable at 0x00119336. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, *(undefined8*)( *(long*)( param_3 + 8 ) + 8 ), auVar3._0_8_, auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001194b5:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float, Vector2, float, float>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<float,Vector2,float,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      long *plVar1;
      long in_FS_OFFSET;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
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

            goto LAB_001196b9;
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
         auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar4._0_4_ = (float)**(double**)( (long)param_3 + 0x18 );
         auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar3._0_4_ = (float)**(double**)( (long)param_3 + 0x10 );
         auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar2._0_4_ = (float)**param_3;
         /* WARNING: Could not recover jumptable at 0x00119542. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, **(undefined8**)( (long)param_3 + 8 ), auVar3._0_8_, auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001196b9:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float, float, float>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<float,float,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      Variant *pVVar1;
      long in_FS_OFFSET;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
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

            goto LAB_001198b1;
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
         auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar4._0_4_ = (float)*(double*)( *(long*)( param_3 + 0x10 ) + 8 );
         auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar3._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
         auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar2._0_4_ = (float)*(double*)( *(long*)param_3 + 8 );
         /* WARNING: Could not recover jumptable at 0x0011973c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, auVar3._0_8_, auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_001198b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float, float, float>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<float,float,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      code *UNRECOVERED_JUMPTABLE;
      long *plVar1;
      long in_FS_OFFSET;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
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

            goto LAB_00119ab1;
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
         auVar4._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar4._0_4_ = (float)**(double**)( (long)param_3 + 0x10 );
         auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar3._0_4_ = (float)**(double**)( (long)param_3 + 8 );
         auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
         auVar2._0_4_ = (float)**param_3;
         /* WARNING: Could not recover jumptable at 0x00119939. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, auVar3._0_8_, auVar4._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_00119ab1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTRC<Vector3,Vector2_const&,float>::validated_call(MethodBindTRC<Vector3,Vector2_const&,float> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
      long in_FS_OFFSET;
      undefined1 auVar3[16];
      undefined1 auVar4[12];
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
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00119b1f;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar3._0_4_ = (float)*(double*)( param_2[1] + 8 );
      auVar4 = ( *pcVar1 )(auVar3._0_8_, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      *(undefined1(*) [12])( param_3 + 8 ) = auVar4;
      LAB_00119b1f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Vector3,Vector2_const&,float>::ptrcall(MethodBindTRC<Vector3,Vector2_const&,float> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
      long in_FS_OFFSET;
      undefined1 auVar3[16];
      undefined1 auVar4[12];
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
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00119d09;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      auVar3._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar3._0_4_ = (float)*param_2[1];
      auVar4 = ( *pcVar1 )(auVar3._0_8_, param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined1(*) [12])param_3 = auVar4;
      LAB_00119d09:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool,Vector3_const&>::validated_call(MethodBindTRC<bool,Vector3_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_00119ee9;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      param_3[8] = VVar1;
      LAB_00119ee9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, Vector3 const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool,Vector3_const&>::ptrcall(MethodBindTRC<bool,Vector3_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_0011a0c5;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined1*)param_3 = uVar1;
      LAB_0011a0c5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTRC<Vector2,Vector3_const&>::validated_call(MethodBindTRC<Vector2,Vector3_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_0011a29b;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      *(undefined8*)( param_3 + 8 ) = uVar3;
      LAB_0011a29b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Vector2,Vector3_const&>::ptrcall(MethodBindTRC<Vector2,Vector3_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_0011a477;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined8*)param_3 = uVar3;
      LAB_0011a477:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTRC<Vector3,Vector2_const&>::validated_call(MethodBindTRC<Vector3,Vector2_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011a662;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      auVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
      *(undefined1(*) [12])( param_3 + 8 ) = auVar3;
      LAB_0011a662:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Vector3,Vector2_const&>::ptrcall(MethodBindTRC<Vector3,Vector2_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011a83c;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      auVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2);
      *(undefined1(*) [12])param_3 = auVar3;
      LAB_0011a83c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TypedArray<Plane>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<TypedArray<Plane>>::validated_call(MethodBindTRC<TypedArray<Plane>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_48 = (Variant**)0x112398;
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

            goto LAB_0011aa29;
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
      LAB_0011aa29:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<TypedArray<Plane>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<TypedArray<Plane>>::ptrcall(MethodBindTRC<TypedArray<Plane>> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (void**)0x112398;
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

            goto LAB_0011abfa;
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
      LAB_0011abfa:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Compositor>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindTRC<Ref<Compositor>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_58 = (Object*)0x112398;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011ae80;
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

      LAB_0011ae80:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Compositor>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Ref<Compositor>>::ptrcall(MethodBindTRC<Ref<Compositor>> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011b106;
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
         if (pOVar5 == (Object*)0x0) goto LAB_0011b106;
         *(undefined8*)param_3 = 0;
         goto LAB_0011b149;
      }

      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_0011b149;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_0011b149:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_0011b106;
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

      LAB_0011b106:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Compositor> const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Ref<Compositor>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_58 = (Object*)0x112398;
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

            goto LAB_0011b408;
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
               LAB_0011b3c6:cVar3 = RefCounted::unreference();
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
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Compositor::typeinfo, 0);
            if (pOVar2 != pOVar4) {
               local_58 = pOVar4;
               if (pOVar4 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_58 = (Object*)0x0;
                  }

               }

               if (pOVar2 != (Object*)0x0) goto LAB_0011b3c6;
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

      LAB_0011b408:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Compositor> const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Ref<Compositor>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011b6cc;
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
         LAB_0011b6a8:local_48 = (Object*)0x0;
      }
 else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_0011b6a8;
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

      LAB_0011b6cc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Ref<CameraAttributes>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_58 = (Object*)0x112398;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011b990;
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

      LAB_0011b990:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Ref<CameraAttributes>>::ptrcall(MethodBindTRC<Ref<CameraAttributes>> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011bc16;
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
         if (pOVar5 == (Object*)0x0) goto LAB_0011bc16;
         *(undefined8*)param_3 = 0;
         goto LAB_0011bc59;
      }

      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_0011bc59;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_0011bc59:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_0011bc16;
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

      LAB_0011bc16:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<Ref<CameraAttributes>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_58 = (Object*)0x112398;
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

            goto LAB_0011bf18;
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
               LAB_0011bed6:cVar3 = RefCounted::unreference();
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
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &CameraAttributes::typeinfo, 0);
            if (pOVar2 != pOVar4) {
               local_58 = pOVar4;
               if (pOVar4 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_58 = (Object*)0x0;
                  }

               }

               if (pOVar2 != (Object*)0x0) goto LAB_0011bed6;
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

      LAB_0011bf18:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Ref<CameraAttributes>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011c1dc;
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
         LAB_0011c1b8:local_48 = (Object*)0x0;
      }
 else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_0011c1b8;
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

      LAB_0011c1dc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Environment>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindTRC<Ref<Environment>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_58 = (Object*)0x112398;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011c4a0;
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

      LAB_0011c4a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Environment>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<Ref<Environment>>::ptrcall(MethodBindTRC<Ref<Environment>> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011c726;
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
         if (pOVar5 == (Object*)0x0) goto LAB_0011c726;
         *(undefined8*)param_3 = 0;
         goto LAB_0011c769;
      }

      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_0011c769;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_0011c769:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_0011c726;
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

      LAB_0011c726:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Environment> const&>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<Ref<Environment>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_58 = (Object*)0x112398;
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

            goto LAB_0011ca28;
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
               LAB_0011c9e6:cVar3 = RefCounted::unreference();
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
            pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Environment::typeinfo, 0);
            if (pOVar2 != pOVar4) {
               local_58 = pOVar4;
               if (pOVar4 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_58 = (Object*)0x0;
                  }

               }

               if (pOVar2 != (Object*)0x0) goto LAB_0011c9e6;
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

      LAB_0011ca28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Environment> const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<Ref<Environment>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x112398;
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

            goto LAB_0011ccec;
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
         LAB_0011ccc8:local_48 = (Object*)0x0;
      }
 else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_0011ccc8;
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

      LAB_0011ccec:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      bool bVar6;
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011cfd0;
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
            if (in_R8D != 1) goto LAB_0011d010;
            LAB_0011d000:pVVar12 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar12 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0011d010:uVar8 = 4;
               goto LAB_0011cfc5;
            }

            if (in_R8D == 1) goto LAB_0011d000;
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
         uVar4 = _LC196;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(pVVar12);
         bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), iVar7);
         Variant::Variant((Variant*)local_48, bVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar8 = 3;
         LAB_0011cfc5:*in_R9 = uVar8;
         in_R9[2] = 1;
      }

      LAB_0011cfd0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Compositor> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Ref<Compositor>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_48 = (Object*)0x112398;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011d3b0;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (1 < in_R8D) {
         uVar7 = 3;
         LAB_0011d3a5:*in_R9 = uVar7;
         in_R9[2] = 1;
         goto LAB_0011d3b0;
      }

      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011d400;
         LAB_0011d3f0:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011d400:uVar7 = 4;
            goto LAB_0011d3a5;
         }

         if (in_R8D == 1) goto LAB_0011d3f0;
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
      uVar4 = _LC198;
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
               LAB_0011d51d:cVar6 = RefCounted::unreference();
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
            pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Compositor::typeinfo, 0);
            if (pOVar5 != pOVar8) {
               local_48 = pOVar8;
               if (pOVar8 != (Object*)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     local_48 = (Object*)0x0;
                  }

               }

               if (pOVar5 != (Object*)0x0) goto LAB_0011d51d;
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

      LAB_0011d3b0:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<CameraAttributes> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<Ref<CameraAttributes>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_48 = (Object*)0x112398;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011d7e0;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (1 < in_R8D) {
         uVar7 = 3;
         LAB_0011d7d5:*in_R9 = uVar7;
         in_R9[2] = 1;
         goto LAB_0011d7e0;
      }

      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011d830;
         LAB_0011d820:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011d830:uVar7 = 4;
            goto LAB_0011d7d5;
         }

         if (in_R8D == 1) goto LAB_0011d820;
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
      uVar4 = _LC198;
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
               LAB_0011d94d:cVar6 = RefCounted::unreference();
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
            pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &CameraAttributes::typeinfo, 0);
            if (pOVar5 != pOVar8) {
               local_48 = pOVar8;
               if (pOVar8 != (Object*)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     local_48 = (Object*)0x0;
                  }

               }

               if (pOVar5 != (Object*)0x0) goto LAB_0011d94d;
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

      LAB_0011d7e0:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Ref<Environment> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Ref<Environment>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            local_48 = (Object*)0x112398;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011dc10;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (1 < in_R8D) {
         uVar7 = 3;
         LAB_0011dc05:*in_R9 = uVar7;
         in_R9[2] = 1;
         goto LAB_0011dc10;
      }

      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011dc60;
         LAB_0011dc50:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011dc60:uVar7 = 4;
            goto LAB_0011dc05;
         }

         if (in_R8D == 1) goto LAB_0011dc50;
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
      uVar4 = _LC198;
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
               LAB_0011dd7d:cVar6 = RefCounted::unreference();
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
            pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Environment::typeinfo, 0);
            if (pOVar5 != pOVar8) {
               local_48 = pOVar8;
               if (pOVar8 != (Object*)0x0) {
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     local_48 = (Object*)0x0;
                  }

               }

               if (pOVar5 != (Object*)0x0) goto LAB_0011dd7d;
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

      LAB_0011dc10:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Vector3,Vector2_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      undefined8 local_5c;
      undefined1 local_54[12];
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_78, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            auVar4._8_4_ = local_54._8_4_;
            auVar4._0_8_ = local_54._0_8_;
            if (( StringName::configured != '\0' ) && ( local_54 = local_88 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011dff0;
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
            if (in_R8D != 1) goto LAB_0011e030;
            LAB_0011e020:pVVar11 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0011e030:uVar7 = 4;
               goto LAB_0011dfe5;
            }

            if (in_R8D == 1) goto LAB_0011e020;
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

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 5);
         uVar5 = _LC199;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         local_5c = Variant::operator_cast_to_Vector2(pVVar11);
         local_54 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), &local_5c);
         Variant::Variant((Variant*)local_48, (Vector3*)local_54);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar7 = 3;
         LAB_0011dfe5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }

      LAB_0011dff0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011e338;
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
            if (in_R8D != 1) goto LAB_0011e390;
            LAB_0011e380:pVVar10 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar10 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0011e390:uVar6 = 4;
               goto LAB_0011e32d;
            }

            if (in_R8D == 1) goto LAB_0011e380;
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
         uVar4 = _LC199;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_Vector2(pVVar10);
         ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ));
      }
 else {
         uVar6 = 3;
         LAB_0011e32d:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_0011e338:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTRC<Vector3,Vector2_const&,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined1 auVar4[12];
      undefined8 uVar5;
      char cVar6;
      int iVar7;
      undefined4 uVar8;
      long *plVar9;
      long lVar10;
      Variant *pVVar11;
      undefined4 in_register_00000014;
      long *plVar12;
      Variant *this;
      int iVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      float fVar15;
      long local_98;
      undefined8 local_90;
      char *local_88;
      undefined8 local_80;
      undefined8 local_6c;
      undefined1 local_64[12];
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
         if (plVar12[1] == 0) {
            plVar9 = (long*)plVar12[0x23];
            if (plVar9 == (long*)0x0) {
               plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
            }

         }
 else {
            plVar9 = (long*)( plVar12[1] + 0x20 );
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            auVar4._8_4_ = local_64._8_4_;
            auVar4._0_8_ = local_64._0_8_;
            if (( StringName::configured != '\0' ) && ( local_64 = local_98 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011e6f0;
         }

         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 3) {
         pVVar11 = param_2[5];
         iVar7 = 2 - in_R8D;
         if (pVVar11 == (Variant*)0x0) {
            if (iVar7 != 0) goto LAB_0011e738;
            this * (Variant**)param_4;
            LAB_0011e74d:pVVar11 = *(Variant**)( param_4 + 8 );
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            iVar13 = (int)lVar2;
            if (iVar13 < iVar7) {
               LAB_0011e738:uVar8 = 4;
               goto LAB_0011e725;
            }

            if (in_R8D == 0) {
               lVar10 = (long)( iVar13 + -2 );
               if (lVar2 <= lVar10) goto LAB_0011e810;
               this =
               pVVar11 + lVar10 * 0x18;
            }
 else {
               this * (Variant**)param_4;
               if (in_R8D == 2) goto LAB_0011e74d;
            }

            lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar7 ) );
            if (lVar2 <= lVar10) {
               LAB_0011e810:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar11 = pVVar11 + lVar10 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar14 & 1 ) != 0) {
            pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 3);
         uVar5 = _LC200;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         fVar15 = Variant::operator_cast_to_float(pVVar11);
         cVar6 = Variant::can_convert_strict(*(undefined4*)this, 5);
         uVar5 = _LC199;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar5;
         }

         local_6c = Variant::operator_cast_to_Vector2(this);
         local_64 = ( *(code*)pVVar14 )(fVar15, (Variant*)( (long)plVar12 + (long)pVVar1 ), &local_6c);
         Variant::Variant((Variant*)local_58, (Vector3*)local_64);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      }
 else {
         uVar8 = 3;
         LAB_0011e725:*in_R9 = uVar8;
         in_R9[2] = 2;
      }

      LAB_0011e6f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<float, Vector2, float, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<float,Vector2,float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      long lVar7;
      long *plVar8;
      uint uVar9;
      int iVar10;
      undefined4 in_register_00000014;
      long *plVar11;
      Variant *pVVar12;
      long lVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      float fVar15;
      float fVar16;
      undefined8 uVar17;
      undefined1 auVar18[16];
      long local_88;
      undefined8 local_80;
      char *local_78;
      undefined8 local_70;
      Variant *local_68[5];
      long local_40;
      undefined1 extraout_var[12];
      plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
         if (plVar11[1] == 0) {
            plVar8 = (long*)plVar11[0x23];
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
            }

         }
 else {
            plVar8 = (long*)( plVar11[1] + 0x20 );
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011eb52;
         }

         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 5) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar10 = 0;
            lVar13 = 0;
         }
 else {
            lVar13 = *(long*)( pVVar2 + -8 );
            iVar10 = (int)lVar13;
         }

         if ((int)( 4 - in_R8D ) <= iVar10) {
            lVar7 = 0;
            do {
               if ((int)lVar7 < (int)in_R8D) {
                  pVVar12 = *(Variant**)( param_4 + lVar7 * 8 );
               }
 else {
                  uVar9 = iVar10 + -4 + (int)lVar7;
                  if (lVar13 <= (int)uVar9) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar9, lVar13, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  pVVar12 = pVVar2 + (ulong)uVar9 * 0x18;
               }

               local_68[lVar7] = pVVar12;
               lVar7 = lVar7 + 1;
            }
 while ( lVar7 != 4 );
            *in_R9 = 0;
            if (( (ulong)pVVar14 & 1 ) != 0) {
               pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 3);
            uVar4 = _LC201;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            fVar15 = Variant::operator_cast_to_float(local_68[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 3);
            uVar4 = _LC202;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            fVar16 = Variant::operator_cast_to_float(local_68[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 5);
            uVar4 = _LC203;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            uVar17 = Variant::operator_cast_to_Vector2(local_68[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 3);
            uVar4 = _LC204;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            auVar18._0_4_ = Variant::operator_cast_to_float(local_68[0]);
            auVar18._4_12_ = extraout_var;
            ( *(code*)pVVar14 )(auVar18._0_8_, uVar17, fVar16, fVar15, (Variant*)( (long)plVar11 + (long)pVVar1 ));
            goto LAB_0011eb52;
         }

         uVar6 = 4;
      }
 else {
         uVar6 = 3;
      }

      *in_R9 = uVar6;
      in_R9[2] = 4;
      LAB_0011eb52:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector2, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<Vector2,Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      long local_98;
      undefined8 local_90;
      char *local_88;
      undefined8 local_80;
      undefined8 local_74;
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            auVar5._8_4_ = local_48._8_4_;
            auVar5._0_8_ = local_48._0_8_;
            auVar4._8_4_ = local_6c[0]._8_4_;
            auVar4._0_8_ = local_6c[0]._0_8_;
            if (( StringName::configured != '\0' ) && ( local_6c[0]= auVar4,local_48 = auVar5,local_98 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011eeb0;
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
            if (in_R8D != 1) goto LAB_0011eef0;
            LAB_0011eee0:pVVar13 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar13 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0011eef0:uVar8 = 4;
               goto LAB_0011eea5;
            }

            if (in_R8D == 1) goto LAB_0011eee0;
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
         uVar6 = _LC205;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar6;
         }

         local_6c[0] = Variant::operator_cast_to_Vector3(pVVar13);
         local_48 = local_6c[0];
         local_74 = ( *(code*)pVVar12 )((Variant*)( (long)plVar11 + (long)pVVar1 ), local_6c);
         Variant::Variant((Variant*)local_48, (Vector2*)&local_74);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48._0_4_;
         *(ulong*)( param_1 + 8 ) = CONCAT44(uStack_3c, local_48._8_4_);
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar8 = 3;
         LAB_0011eea5:*in_R9 = uVar8;
         in_R9[2] = 1;
      }

      LAB_0011eeb0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<bool, Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindTRC<bool,Vector3_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined1 auVar4[12];
      undefined1 auVar5[12];
      undefined8 uVar6;
      char cVar7;
      bool bVar8;
      undefined4 uVar9;
      long *plVar10;
      long lVar11;
      undefined4 in_register_00000014;
      long *plVar12;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar13;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_98;
      undefined8 local_90;
      char *local_88;
      undefined8 local_80;
      undefined1 local_6c[3][12];
      undefined1 local_48[12];
      undefined4 uStack_3c;
      undefined8 uStack_38;
      long local_30;
      plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
         if (plVar12[1] == 0) {
            plVar10 = (long*)plVar12[0x23];
            if (plVar10 == (long*)0x0) {
               plVar10 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
            }

         }
 else {
            plVar10 = (long*)( plVar12[1] + 0x20 );
         }

         if (local_88 == (char*)*plVar10) {
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_90 = 0;
            local_80 = 0x35;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            auVar5._8_4_ = local_48._8_4_;
            auVar5._0_8_ = local_48._0_8_;
            auVar4._8_4_ = local_6c[0]._8_4_;
            auVar4._0_8_ = local_6c[0]._0_8_;
            if (( StringName::configured != '\0' ) && ( local_6c[0]= auVar4,local_48 = auVar5,local_98 != 0 )) {
               StringName::unref();
            }

            goto LAB_0011f240;
         }

         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar13 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar14 = param_2[5];
         if (pVVar14 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_0011f280;
            LAB_0011f270:pVVar14 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar14 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_0011f280:uVar9 = 4;
               goto LAB_0011f235;
            }

            if (in_R8D == 1) goto LAB_0011f270;
            lVar11 = (long)( (int)lVar2 + -1 );
            if (lVar2 <= lVar11) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            pVVar14 = pVVar14 + lVar11 * 0x18;
         }

         *in_R9 = 0;
         if (( (ulong)pVVar13 & 1 ) != 0) {
            pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar7 = Variant::can_convert_strict(*(undefined4*)pVVar14, 9);
         uVar6 = _LC205;
         if (cVar7 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar6;
         }

         local_6c[0] = Variant::operator_cast_to_Vector3(pVVar14);
         local_48 = local_6c[0];
         bVar8 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar12 + (long)pVVar1 ), local_6c);
         Variant::Variant((Variant*)local_48, bVar8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48._0_4_;
         *(ulong*)( param_1 + 8 ) = CONCAT44(uStack_3c, local_48._8_4_);
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar9 = 3;
         LAB_0011f235:*in_R9 = uVar9;
         in_R9[2] = 1;
      }

      LAB_0011f240:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Compositor>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Ref<Compositor>>::validated_call(MethodBindTRC<Ref<Compositor>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_48 = (Variant**)0x112398;
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

            goto LAB_0011f506;
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

      LAB_0011f506:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<CameraAttributes>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Ref<CameraAttributes>>::validated_call(MethodBindTRC<Ref<CameraAttributes>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_48 = (Variant**)0x112398;
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

            goto LAB_0011f736;
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

      LAB_0011f736:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Ref<Environment>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<Ref<Environment>>::validated_call(MethodBindTRC<Ref<Environment>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_48 = (Variant**)0x112398;
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

            goto LAB_0011f966;
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

      LAB_0011f966:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, int, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */
   void call_with_variant_args_dv<__UnexistingClass,int,bool>(__UnexistingClass *param_1, _func_void_int_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
      long in_stack_00000008;
      plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
      uVar10 = (uint)param_5;
      if (2 < uVar10) {
         uVar7 = 3;
         goto LAB_0011fc3d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar10;
      if (lVar1 == 0) {
         if (iVar6 == 0) {
            this(Variant * ) * plVar8;
            LAB_0011fc6d:this_00 = (Variant*)plVar8[1];
            goto LAB_0011fba5;
         }

      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar11 = (int)lVar2;
         if (iVar6 <= iVar11) {
            if (uVar10 == 0) {
               lVar9 = (long)( iVar11 + -2 );
               if (lVar2 <= lVar9) goto LAB_0011fc88;
               this(Variant * )(lVar1 + lVar9 * 0x18);
            }
 else {
               this(Variant * ) * plVar8;
               if (uVar10 == 2) goto LAB_0011fc6d;
            }

            lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
            if (lVar2 <= lVar9) {
               LAB_0011fc88:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
            LAB_0011fba5:*(undefined4*)param_6 = 0;
            if (( (ulong)param_2 & 1 ) != 0) {
               param_2 = *(_func_void_int_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 1);
            uVar4 = _LC206;
            if (cVar5 == '\0') {
               *(undefined4*)param_6 = 2;
               *(undefined8*)( param_6 + 4 ) = uVar4;
            }

            Variant::operator_cast_to_bool(this_00);
            cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
            uVar4 = _LC196;
            if (cVar5 == '\0') {
               *(undefined4*)param_6 = 2;
               *(undefined8*)( param_6 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(this);
            /* WARNING: Could not recover jumptable at 0x0011fc2c. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *param_2 )((int)( param_1 + (long)param_3 ), SUB41(iVar6, 0));
            return;
         }

      }

      uVar7 = 4;
      LAB_0011fc3d:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
      return;
   }

   /* MethodBindT<int, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<int,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_0011fd26;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,int,bool>(p_Var3, (_func_void_int_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_0011fd26:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, Camera3D::DopplerTracking>(__UnexistingClass*,
   void (__UnexistingClass::*)(Camera3D::DopplerTracking), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,Camera3D::DopplerTracking>(__UnexistingClass *param_1, _func_void_DopplerTracking *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0012000d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00120070;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00120070:uVar6 = 4;
            LAB_0012000d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_0011ff8b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0011ff8b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_DopplerTracking**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC196;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x0011ffe6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<Camera3D::DopplerTracking>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Camera3D::DopplerTracking>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_001200d6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,Camera3D::DopplerTracking>(p_Var3, (_func_void_DopplerTracking*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_001200d6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, Camera3D::KeepAspect>(__UnexistingClass*, void
   (__UnexistingClass::*)(Camera3D::KeepAspect), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,Camera3D::KeepAspect>(__UnexistingClass *param_1, _func_void_KeepAspect *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_001203bd;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00120420;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00120420:uVar6 = 4;
            LAB_001203bd:*(undefined4*)param_6 = uVar6;
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
            goto LAB_0012033b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0012033b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_KeepAspect**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC196;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x00120396. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<Camera3D::KeepAspect>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Camera3D::KeepAspect>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_00120486;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,Camera3D::KeepAspect>(p_Var3, (_func_void_KeepAspect*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00120486:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, unsigned int>(__UnexistingClass*, void
   (__UnexistingClass::*)(unsigned int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */
   void call_with_variant_args_dv<__UnexistingClass,unsigned_int>(__UnexistingClass *param_1, _func_void_uint *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0012076d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_001207d0;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_001207d0:uVar6 = 4;
            LAB_0012076d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_001206eb;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_001206eb:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_uint**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC196;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_unsigned_int(this);
      /* WARNING: Could not recover jumptable at 0x00120746. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(( uint )(param_1 + (long)param_3));
      return;
   }

   /* MethodBindT<unsigned int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<unsigned_int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      long lVar1;
      char *pcVar2;
      long *plVar3;
      undefined4 in_register_00000014;
      __UnexistingClass *p_Var4;
      CallError *in_R8;
      Vector *in_R9;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (*(long*)( p_Var4 + 8 ) == 0) {
            plVar3 = *(long**)( p_Var4 + 0x118 );
            if (plVar3 == (long*)0x0) {
               plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
            }

         }
 else {
            plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
         }

         in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar3 = (long*)( local_48 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }

            }

            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar3 = (long*)( local_50 + -0x10 );
               *plVar3 = *plVar3 + -1;
               UNLOCK();
               if (*plVar3 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            *(undefined4*)param_1 = 0;
            *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
            goto LAB_00120836;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,unsigned_int>(p_Var4, (_func_void_uint*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00120836:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, Camera3D::ProjectionType>(__UnexistingClass*,
   void (__UnexistingClass::*)(Camera3D::ProjectionType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,Camera3D::ProjectionType>(__UnexistingClass *param_1, _func_void_ProjectionType *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_00120b3d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00120ba0;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00120ba0:uVar6 = 4;
            LAB_00120b3d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_00120abb;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_00120abb:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_ProjectionType**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC196;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_long(this);
      /* WARNING: Could not recover jumptable at 0x00120b16. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )((char)( param_1 + (long)param_3 ));
      return;
   }

   /* MethodBindT<Camera3D::ProjectionType>::call(Object*, Variant const**, int, Callable::CallError&)
   const */
   Object *MethodBindT<Camera3D::ProjectionType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_00120c06;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,Camera3D::ProjectionType>(p_Var3, (_func_void_ProjectionType*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00120c06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */
   void call_with_variant_args_dv<__UnexistingClass,float>(__UnexistingClass *param_1, _func_void_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_00120eed;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00120f50;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00120f50:uVar6 = 4;
            LAB_00120eed:*(undefined4*)param_6 = uVar6;
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
            goto LAB_00120e6b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_00120e6b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
      uVar4 = _LC204;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      fVar9 = Variant::operator_cast_to_float(this);
      /* WARNING: Could not recover jumptable at 0x00120ec4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(fVar9);
      return;
   }

   /* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_00120fb6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,float>(p_Var3, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00120fb6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */
   void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
         goto LAB_0012129d;
      }

      lVar1 = *(long*)( in_stack_00000008 + 8 );
      if (lVar1 == 0) {
         if (uVar8 != 1) goto LAB_00121300;
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
            LAB_00121300:uVar6 = 4;
            LAB_0012129d:*(undefined4*)param_6 = uVar6;
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
            goto LAB_0012121b;
         }

      }

      this * (Variant**)CONCAT44(in_register_0000000c, param_4);
      LAB_0012121b:*(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC207;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_bool(this);
      /* WARNING: Could not recover jumptable at 0x00121277. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
      return;
   }

   /* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_00121366;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,bool>(p_Var3, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_00121366:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_with_variant_args_dv<__UnexistingClass, float, float, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float, float, float), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */
   void call_with_variant_args_dv<__UnexistingClass,float,float,float>(__UnexistingClass *param_1, _func_void_float_float_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
      long lVar1;
      code *pcVar2;
      undefined8 uVar3;
      char cVar4;
      undefined4 uVar5;
      long lVar6;
      undefined4 in_register_0000000c;
      long lVar7;
      uint uVar8;
      int iVar9;
      uint uVar10;
      Variant *pVVar11;
      long in_FS_OFFSET;
      float fVar12;
      float fVar13;
      float fVar14;
      long in_stack_00000008;
      Variant *local_48[3];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar8 = (uint)param_5;
      uVar5 = 3;
      if (uVar8 < 4) {
         lVar1 = *(long*)( in_stack_00000008 + 8 );
         if (lVar1 == 0) {
            iVar9 = 0;
            lVar7 = 0;
         }
 else {
            lVar7 = *(long*)( lVar1 + -8 );
            iVar9 = (int)lVar7;
         }

         if ((int)( 3 - uVar8 ) <= iVar9) {
            lVar6 = 0;
            do {
               if ((int)lVar6 < (int)uVar8) {
                  pVVar11 = *(Variant**)( CONCAT44(in_register_0000000c, param_4) + lVar6 * 8 );
               }
 else {
                  uVar10 = iVar9 + -3 + (int)lVar6;
                  if (lVar7 <= (int)uVar10) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar7, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  pVVar11 = (Variant*)( lVar1 + (ulong)uVar10 * 0x18 );
               }

               local_48[lVar6] = pVVar11;
               lVar6 = lVar6 + 1;
            }
 while ( lVar6 != 3 );
            *(undefined4*)param_6 = 0;
            if (( (ulong)param_2 & 1 ) != 0) {
               param_2 = *(_func_void_float_float_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)local_48[2], 3);
            uVar3 = _LC202;
            if (cVar4 == '\0') {
               *(undefined4*)param_6 = 2;
               *(undefined8*)( param_6 + 4 ) = uVar3;
            }

            fVar12 = Variant::operator_cast_to_float(local_48[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)local_48[1], 3);
            uVar3 = _LC200;
            if (cVar4 == '\0') {
               *(undefined4*)param_6 = 2;
               *(undefined8*)( param_6 + 4 ) = uVar3;
            }

            fVar13 = Variant::operator_cast_to_float(local_48[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)local_48[0], 3);
            uVar3 = _LC204;
            if (cVar4 == '\0') {
               *(undefined4*)param_6 = 2;
               *(undefined8*)( param_6 + 4 ) = uVar3;
            }

            fVar14 = Variant::operator_cast_to_float(local_48[0]);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001216c3. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *param_2 )(fVar14, fVar13, fVar12);
               return;
            }

            goto LAB_00121792;
         }

         uVar5 = 4;
      }

      *(undefined4*)param_6 = uVar5;
      *(undefined4*)( param_6 + 8 ) = 3;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_00121792:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<float, float, float>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindT<float,float,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
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
            goto LAB_001217f6;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      call_with_variant_args_dv<__UnexistingClass,float,float,float>(p_Var3, (_func_void_float_float_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      LAB_001217f6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int iVar7;
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
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar7 = *param_2;
      if (iVar7 != param_1) goto LAB_00121a17;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00121b10:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00121b10;
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

      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar5;
      }

      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar5;
      }

      lVar6 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      iVar7 = *param_2;
      LAB_00121a17:*param_2 = iVar7 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindTRC<bool, int>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<bool,int>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      undefined8 local_80;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_00121d28;
      }

      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC19;
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
         LAB_00121e0f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_00121e0f;
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

      LAB_00121d28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<int, bool>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<int,bool>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      long lVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar5;
      long in_FS_OFFSET;
      int local_8c;
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
      pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar5 = 0;
      *(undefined4*)( pPVar5 + 0x18 ) = 0;
      *(undefined8*)( pPVar5 + 0x20 ) = 0;
      *(undefined4*)( pPVar5 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
      local_8c = 0;
      call_get_argument_type_info_helper<int>(in_EDX, &local_8c, pPVar5);
      if (in_EDX != local_8c) goto LAB_00121ee6;
      local_78 = 0;
      local_80 = 0;
      local_68 = &_LC19;
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
         LAB_00121fe8:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00121fe8;
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

      *(undefined4*)pPVar5 = local_68._0_4_;
      if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
         uVar3 = local_60._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *(undefined8*)( pPVar5 + 8 ) = uVar3;
      }

      if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar3 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
      }

      *(int*)( pPVar5 + 0x18 ) = local_50;
      if (*(long*)( pPVar5 + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
         lVar4 = local_48;
         local_48 = 0;
         *(long*)( pPVar5 + 0x20 ) = lVar4;
      }

      *(undefined4*)( pPVar5 + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      LAB_00121ee6:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return pPVar5;
   }

   /* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<float>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int iVar7;
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
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar7 = *param_2;
      if (iVar7 != param_1) goto LAB_00122117;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 3);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00122210:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00122210;
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

      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar5;
      }

      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar5;
      }

      lVar6 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      iVar7 = *param_2;
      LAB_00122117:*param_2 = iVar7 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<float, float, float>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<float,float,float>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      long in_FS_OFFSET;
      int local_24;
      long local_20;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      local_24 = 0;
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<float>(in_EDX, &local_24, pPVar1);
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<float, Vector2, float, float>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<float,Vector2,float,float>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      int iVar3;
      undefined8 uVar4;
      long lVar5;
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar6;
      long in_FS_OFFSET;
      int local_9c;
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
      pPVar6 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar6 = 0;
      *(undefined4*)( pPVar6 + 0x18 ) = 0;
      *(undefined8*)( pPVar6 + 0x20 ) = 0;
      *(undefined4*)( pPVar6 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar6 + 8 ) = (undefined1[16])0x0;
      local_9c = 0;
      call_get_argument_type_info_helper<float>(in_EDX, &local_9c, pPVar6);
      iVar3 = local_9c;
      if (in_EDX != local_9c) goto LAB_00122490;
      local_88 = 0;
      local_90 = 0;
      local_78 = &_LC19;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (undefined*)CONCAT44(local_78._4_4_, 5);
      local_60 = 0;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_001225c0:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if (local_60 != 0x11) goto LAB_001225c0;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
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

      *(undefined4*)pPVar6 = local_78._0_4_;
      if (*(long*)( pPVar6 + 8 ) != local_70._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar6 + 8 ));
         uVar4 = local_70._0_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_70._8_8_;
         local_70 = auVar2 << 0x40;
         *(undefined8*)( pPVar6 + 8 ) = uVar4;
      }

      if (*(long*)( pPVar6 + 0x10 ) != local_70._8_8_) {
         StringName::unref();
         uVar4 = local_70._8_8_;
         local_70._8_8_ = 0;
         *(undefined8*)( pPVar6 + 0x10 ) = uVar4;
      }

      *(int*)( pPVar6 + 0x18 ) = local_60;
      if (*(long*)( pPVar6 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar6 + 0x20 ));
         lVar5 = local_58;
         local_58 = 0;
         *(long*)( pPVar6 + 0x20 ) = lVar5;
      }

      *(undefined4*)( pPVar6 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      LAB_00122490:local_9c = iVar3 + 1;
      call_get_argument_type_info_helper<float>(in_EDX, &local_9c, pPVar6);
      call_get_argument_type_info_helper<float>(in_EDX, &local_9c, pPVar6);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return pPVar6;
   }

   /* MethodBindT<float>::_gen_argument_type_info(int) const */
   PropertyInfo *MethodBindT<float>::_gen_argument_type_info(int param_1) {
      int in_EDX;
      undefined4 in_register_0000003c;
      PropertyInfo *pPVar1;
      long in_FS_OFFSET;
      int local_14;
      long local_10;
      pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)pPVar1 = 0;
      *(undefined4*)( pPVar1 + 0x18 ) = 0;
      *(undefined8*)( pPVar1 + 0x20 ) = 0;
      *(undefined4*)( pPVar1 + 0x28 ) = 6;
      *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
      local_14 = 0;
      call_get_argument_type_info_helper<float>(in_EDX, &local_14, pPVar1);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pPVar1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* void call_get_argument_type_info_helper<Vector2 const&>(int, int&, PropertyInfo&) */
   void call_get_argument_type_info_helper<Vector2_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined8 uVar5;
      long lVar6;
      int iVar7;
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
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar7 = *param_2;
      if (iVar7 != param_1) goto LAB_00122767;
      local_78 = 0;
      local_68 = &_LC19;
      local_80 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_80);
      local_88 = 0;
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 5);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1[16])0x0;
      if (local_80 == 0) {
         LAB_00122860:local_40 = 6;
         StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
         local_40 = 6;
         if (local_50 != 0x11) goto LAB_00122860;
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

      *(undefined4*)param_3 = local_68._0_4_;
      if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         uVar5 = local_60._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_60._8_8_;
         local_60 = auVar3 << 0x40;
         *(undefined8*)( param_3 + 8 ) = uVar5;
      }

      if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
         StringName::unref();
         uVar5 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( param_3 + 0x10 ) = uVar5;
      }

      lVar6 = local_48;
      *(int*)( param_3 + 0x18 ) = local_50;
      if (*(long*)( param_3 + 0x20 ) == local_48) {
         *(undefined4*)( param_3 + 0x28 ) = local_40;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         *(long*)( param_3 + 0x20 ) = local_48;
         *(undefined4*)( param_3 + 0x28 ) = local_40;
      }

      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_60._0_8_;
      if (local_60._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_60._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_60._8_8_;
            local_60 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      iVar7 = *param_2;
      LAB_00122767:*param_2 = iVar7 + 1;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindTRC<Vector3, Vector2 const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Vector3,Vector2_const&>::_gen_argument_type_info(int param_1) {
      undefined1 auVar1[16];
      undefined1 auVar2[16];
      undefined8 uVar3;
      undefined8 uVar4;
      int in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar5;
      long in_FS_OFFSET;
      undefined8 local_80;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX == 0) {
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info_helper<Vector2_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
         goto LAB_00122a78;
      }

      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC19;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      *puVar5 = 9;
      puVar5[6] = 0;
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar5[10] = 6;
         LAB_00122b5f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
         puVar5[10] = 6;
         if (puVar5[6] != 0x11) goto LAB_00122b5f;
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

      LAB_00122a78:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar5;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<Vector3, Vector2 const&, float>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTRC<Vector3,Vector2_const&,float>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      undefined1 auVar2[16];
      undefined1 auVar3[16];
      long lVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      uint in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar7;
      long in_FS_OFFSET;
      long local_78;
      ulong local_70;
      undefined *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_60 = (undefined1[16])0x0;
         local_68 = (undefined*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_70 = local_70 & 0xffffffff00000000;
         call_get_argument_type_info_helper<Vector2_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
         call_get_argument_type_info_helper<float>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
         uVar5 = local_60._0_8_;
         uVar6 = local_60._8_8_;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         *puVar7 = local_68._0_4_;
         *(undefined8*)( puVar7 + 2 ) = uVar5;
         *(undefined8*)( puVar7 + 4 ) = uVar6;
         puVar7[6] = (undefined4)local_50;
         *(undefined8*)( puVar7 + 8 ) = local_48;
         puVar7[10] = local_40;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
         goto LAB_00122d44;
      }

      local_70 = 0;
      local_68 = &_LC19;
      local_78 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._0_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange*)&local_78);
      *puVar7 = 9;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_78 == 0) {
         puVar7[10] = 6;
         LAB_00122d77:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_70);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_78);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_00122d77;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }

      }

      lVar4 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      LAB_00122d44:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return puVar7;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodDefinition::~MethodDefinition() */
   void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(void) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool, int>::~MethodBindTRC() */
   void MethodBindTRC<bool,int>::~MethodBindTRC(MethodBindTRC<bool,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<int, bool>::~MethodBindT() */
   void MethodBindT<int,bool>::~MethodBindT(MethodBindT<int,bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<RID>::~MethodBindTR() */
   void MethodBindTR<RID>::~MethodBindTR(MethodBindTR<RID> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<RID>::~MethodBindTRC() */
   void MethodBindTRC<RID>::~MethodBindTRC(MethodBindTRC<RID> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<bool,Vector3_const&>::~MethodBindTRC(MethodBindTRC<bool,Vector3_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC() */
   void MethodBindTRC<TypedArray<Plane>>::~MethodBindTRC(MethodBindTRC<TypedArray<Plane>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::DopplerTracking>::~MethodBindTRC(MethodBindTRC<Camera3D::DopplerTracking> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Camera3D::DopplerTracking>::~MethodBindT() */
   void MethodBindT<Camera3D::DopplerTracking>::~MethodBindT(MethodBindT<Camera3D::DopplerTracking> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::KeepAspect>::~MethodBindTRC(MethodBindTRC<Camera3D::KeepAspect> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Camera3D::KeepAspect>::~MethodBindT() */
   void MethodBindT<Camera3D::KeepAspect>::~MethodBindT(MethodBindT<Camera3D::KeepAspect> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Ref<Compositor>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Compositor>>::~MethodBindTRC(MethodBindTRC<Ref<Compositor>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Ref<Compositor> const&>::~MethodBindT() */
   void MethodBindT<Ref<Compositor>const&>::~MethodBindT(MethodBindT<Ref<Compositor>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<CameraAttributes>>::~MethodBindTRC(MethodBindTRC<Ref<CameraAttributes>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Ref<CameraAttributes> const&>::~MethodBindT() */
   void MethodBindT<Ref<CameraAttributes>const&>::~MethodBindT(MethodBindT<Ref<CameraAttributes>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Ref<Environment>>::~MethodBindTRC() */
   void MethodBindTRC<Ref<Environment>>::~MethodBindTRC(MethodBindTRC<Ref<Environment>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Ref<Environment> const&>::~MethodBindT() */
   void MethodBindT<Ref<Environment>const&>::~MethodBindT(MethodBindT<Ref<Environment>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<unsigned int>::~MethodBindTRC() */
   void MethodBindTRC<unsigned_int>::~MethodBindTRC(MethodBindTRC<unsigned_int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<unsigned int>::~MethodBindT() */
   void MethodBindT<unsigned_int>::~MethodBindT(MethodBindT<unsigned_int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<float>::~MethodBindTRC() */
   void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<float>::~MethodBindT() */
   void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Camera3D::ProjectionType>::~MethodBindT() */
   void MethodBindT<Camera3D::ProjectionType>::~MethodBindT(MethodBindT<Camera3D::ProjectionType> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC() */
   void MethodBindTRC<Camera3D::ProjectionType>::~MethodBindTRC(MethodBindTRC<Camera3D::ProjectionType> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<Vector2>::~MethodBindT() */
   void MethodBindT<Vector2>::~MethodBindT(MethodBindT<Vector2> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Vector2>::~MethodBindTRC() */
   void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Projection>::~MethodBindTRC() */
   void MethodBindTRC<Projection>::~MethodBindTRC(MethodBindTRC<Projection> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Transform3D>::~MethodBindTRC() */
   void MethodBindTRC<Transform3D>::~MethodBindTRC(MethodBindTRC<Transform3D> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<bool>::~MethodBindT() */
   void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<float, Vector2, float, float>::~MethodBindT() */
   void MethodBindT<float,Vector2,float,float>::~MethodBindT(MethodBindT<float,Vector2,float,float> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindT<float, float, float>::~MethodBindT() */
   void MethodBindT<float,float,float>::~MethodBindT(MethodBindT<float,float,float> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Vector3, Vector2 const&, float>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&,float>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&,float> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Vector2, Vector3 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector2,Vector3_const&>::~MethodBindTRC(MethodBindTRC<Vector2,Vector3_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<Vector3, Vector2 const&>::~MethodBindTRC() */
   void MethodBindTRC<Vector3,Vector2_const&>::~MethodBindTRC(MethodBindTRC<Vector3,Vector2_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Node3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Node3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Node3D,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Camera3D, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Camera3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Camera3D,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


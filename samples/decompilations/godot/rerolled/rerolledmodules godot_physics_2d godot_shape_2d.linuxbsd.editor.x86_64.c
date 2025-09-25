/* GodotShape2D::get_support(Vector2 const&) const */undefined8 GodotShape2D::get_support(GodotShape2D *this, Vector2 *param_1) {
   long in_FS_OFFSET;
   undefined1 local_2c[4];
   undefined8 local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   local_20 = 0;
   ( **(code**)( *(long*)this + 0x38 ) )(this, param_1, &local_28, local_2c);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_28;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotWorldBoundaryShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotWorldBoundaryShape2D::get_supports(Vector2 *param_1, Vector2 *param_2, int *param_3) {
   undefined4 *in_RCX;
   *in_RCX = 0;
   return;
}
/* GodotSeparationRayShape2D::get_moment_of_inertia(float, Vector2 const&) const */undefined8 GodotSeparationRayShape2D::get_moment_of_inertia(float param_1, Vector2 *param_2) {
   return 0;
}
/* GodotSegmentShape2D::contains_point(Vector2 const&) const */undefined8 GodotSegmentShape2D::contains_point(Vector2 *param_1) {
   return 0;
}
/* GodotSeparationRayShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&)
   const */undefined8 GodotSeparationRayShape2D::intersect_segment(Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   return 0;
}
/* GodotCircleShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotCircleShape2D::get_supports(GodotCircleShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   float fVar1;
   undefined8 uVar2;
   fVar1 = *(float*)( this + 0x68 );
   uVar2 = *(undefined8*)param_1;
   *param_3 = 1;
   *(ulong*)param_2 = CONCAT44((float)( (ulong)uVar2 >> 0x20 ) * fVar1, (float)uVar2 * fVar1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCircleShape2D::get_moment_of_inertia(float, Vector2 const&) const */float GodotCircleShape2D::get_moment_of_inertia(GodotCircleShape2D *this, float param_1, Vector2 *param_2) {
   float fVar1;
   float fVar2;
   fVar2 = *(float*)param_2 * *(float*)( this + 0x68 );
   fVar1 = *(float*)( this + 0x68 ) * *(float*)( param_2 + 4 );
   return ( fVar2 * fVar2 + fVar1 * fVar1 ) * param_1 * __LC3;
}
/* GodotRectangleShape2D::contains_point(Vector2 const&) const */bool GodotRectangleShape2D::contains_point(GodotRectangleShape2D *this, Vector2 *param_1) {
   if (( (float)( ( uint ) * (float*)( this + 0x68 ) ^ _LC4 ) <= *(float*)param_1 ) && ( *(float*)param_1 < *(float*)( this + 0x68 ) )) {
      if ((float)( _LC4 ^ ( uint ) * (float*)( this + 0x6c ) ) <= *(float*)( param_1 + 4 )) {
         return *(float*)( param_1 + 4 ) < *(float*)( this + 0x6c );
      }

   }

   return false;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCapsuleShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotCapsuleShape2D::get_supports(GodotCapsuleShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   fVar4 = *(float*)( this + 0x68 );
   fVar1 = *(float*)param_1;
   fVar2 = *(float*)( param_1 + 4 );
   fVar3 = (float)( (double)*(float*)( this + 0x6c ) * _LC5 - (double)fVar4 );
   if (( 0.0 < fVar3 ) && ( *(double*)( this + 0x58 ) <= (double)ABS(fVar1) && (double)ABS(fVar1) != *(double*)( this + 0x58 ) )) {
      if (fVar1 <= 0.0) {
         if (fVar1 < 0.0) {
            fVar4 = (float)( (uint)fVar4 ^ _LC4 );
         }
 else {
            fVar4 = fVar4 * 0.0;
         }

      }

      *param_3 = 2;
      *(float*)param_2 = fVar4;
      *(float*)( param_2 + 4 ) = fVar3 + 0.0;
      *(float*)( param_2 + 8 ) = fVar4;
      *(float*)( param_2 + 0xc ) = 0.0 - fVar3;
      return;
   }

   if (fVar4 * fVar2 <= 0.0) {
      fVar3 = (float)( (uint)fVar3 ^ _LC4 );
   }

   *param_3 = 1;
   *(ulong*)param_2 = CONCAT44(fVar3 + fVar4 * fVar2, fVar1 * fVar4);
   return;
}
/* GodotWorldBoundaryShape2D::contains_point(Vector2 const&) const */bool GodotWorldBoundaryShape2D::contains_point(Vector2 *param_1) {
   float fVar1;
   fVar1 = (float)Vector2::dot(param_1 + 0x68);
   return fVar1 < *(float*)( param_1 + 0x70 );
}
/* GodotConvexPolygonShape2D::get_supports(Vector2 const&, Vector2*, int&) const */undefined1  [16] __thiscallGodotConvexPolygonShape2D::get_supports(GodotConvexPolygonShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 extraout_RDX;
   ulong uVar3;
   ulong uVar4;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined8 uStack_58;
   long lStack_50;
   float local_44;
   *param_3 = 0;
   if (0 < *(int*)( this + 0x70 )) {
      uVar3 = 0;
      uVar4 = 0xffffffff;
      local_44 = _LC0;
      do {
         fVar5 = (float)Vector2::dot(param_1);
         if (local_44 < fVar5) {
            uVar4 = uVar3 & 0xffffffff;
            local_44 = fVar5;
         }

         lStack_50 = 0x1002ee;
         fVar5 = (float)Vector2::dot((Vector2*)( *(long*)( this + 0x68 ) + uVar3 * 0x10 + 8 ));
         if (*(double*)( this + 0x58 ) <= (double)fVar5 && (double)fVar5 != *(double*)( this + 0x58 )) {
            lVar1 = *(long*)( this + 0x68 );
            *param_3 = 2;
            *(undefined8*)param_2 = *(undefined8*)( lVar1 + uVar3 * 0x10 );
            lStack_50 = (long)( ( (int)uVar3 + 1 ) % *(int*)( this + 0x70 ) ) * 0x10;
            uStack_58 = *(undefined8*)( lVar1 + lStack_50 );
            *(undefined8*)( param_2 + 8 ) = uStack_58;
            goto LAB_00100328;
         }

         uVar3 = uVar3 + 1;
      }
 while ( (int)uVar3 < *(int*)( this + 0x70 ) );
      if ((int)uVar4 != -1) {
         *param_3 = 1;
         uVar2 = *(undefined8*)( (long)(int)uVar4 * 0x10 + *(long*)( this + 0x68 ) );
         *(undefined8*)param_2 = uVar2;
         auVar7._8_8_ = extraout_RDX;
         auVar7._0_8_ = uVar2;
         return auVar7;
      }

   }

   uStack_58 = 0;
   _err_print_error("get_supports", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x202, "Condition \"support_idx == -1\" is true.", "Convex polygon shape support not found.", 0);
   LAB_00100328:auVar6._8_8_ = lStack_50;
   auVar6._0_8_ = uStack_58;
   return auVar6;
}
/* GodotConvexPolygonShape2D::contains_point(Vector2 const&) const */uint GodotConvexPolygonShape2D::contains_point(Vector2 *param_1) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   float fVar4;
   float fVar5;
   if (*(int*)( param_1 + 0x70 ) < 1) {
      return 0;
   }

   lVar1 = 0;
   uVar3 = 0;
   uVar2 = 0;
   do {
      fVar4 = (float)Vector2::dot((Vector2*)( *(long*)( param_1 + 0x68 ) + lVar1 * 0x10 + 8 ));
      fVar5 = (float)Vector2::dot((Vector2*)( *(long*)( param_1 + 0x68 ) + lVar1 * 0x10 + 8 ));
      if (fVar4 - fVar5 <= 0.0) {
         uVar3 = 1;
      }
 else {
         uVar2 = 1;
      }

      lVar1 = lVar1 + 1;
   }
 while ( (int)lVar1 < *(int*)( param_1 + 0x70 ) );
   return uVar2 ^ uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotRectangleShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotRectangleShape2D::get_supports(GodotRectangleShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   long lVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   uint uVar6;
   uint uVar7;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0x3f800000;
   fVar4 = (float)Vector2::dot((Vector2*)&local_38);
   lVar2 = 0;
   iVar3 = 1;
   if ((double)ABS(fVar4) <= *(double*)( this + 0x58 )) {
      local_38 = 0x3f80000000000000;
      fVar4 = (float)Vector2::dot((Vector2*)&local_38);
      iVar3 = 0;
      lVar2 = 1;
      if ((double)ABS(fVar4) <= *(double*)( this + 0x58 )) {
         fVar4 = *(float*)( param_1 + 4 );
         fVar5 = *(float*)( param_1 + 4 );
         uVar7 = *(uint*)( this + 0x6c );
         *param_3 = 1;
         if (fVar5 <= 0.0 && fVar4 != 0.0) {
            uVar7 = uVar7 ^ _LC4;
         }

         uVar6 = *(uint*)( this + 0x68 );
         if (*(float*)param_1 <= 0.0 && *(float*)param_1 != 0.0) {
            uVar6 = uVar6 ^ _LC4;
         }

         *(ulong*)param_2 = CONCAT44(uVar7, uVar6);
         goto LAB_0010053c;
      }

   }

   fVar5 = _LC16;
   if (fVar4 <= 0.0) {
      fVar5 = _LC17;
   }

   fVar4 = *(float*)( this + lVar2 * 4 + 0x68 );
   lVar1 = (long)iVar3;
   *param_3 = 2;
   *(float*)( param_2 + lVar2 * 4 ) = fVar4 * fVar5;
   *(undefined4*)( param_2 + lVar1 * 4 ) = *(undefined4*)( this + lVar1 * 4 + 0x68 );
   *(float*)( param_2 + lVar2 * 4 + 8 ) = fVar5 * *(float*)( this + lVar2 * 4 + 0x68 );
   *(uint*)( param_2 + lVar1 * 4 + 8 ) = *(uint*)( this + lVar1 * 4 + 0x68 ) ^ _LC4;
   LAB_0010053c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCapsuleShape2D::get_moment_of_inertia(float, Vector2 const&) const */void GodotCapsuleShape2D::get_moment_of_inertia(GodotCapsuleShape2D *this, float param_1, Vector2 *param_2) {
   long in_FS_OFFSET;
   float fVar1;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = CONCAT44(*(float*)( this + 0x6c ) * *(float*)( param_2 + 4 ), ( *(float*)( this + 0x68 ) + *(float*)( this + 0x68 ) ) * *(float*)param_2);
   fVar1 = (float)Vector2::dot((Vector2*)&local_18);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail(( fVar1 * param_1 ) / __LC18);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotWorldBoundaryShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&)
   const */undefined8 GodotWorldBoundaryShape2D::intersect_segment(GodotWorldBoundaryShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   undefined8 uVar1;
   long lVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   double dVar6;
   uVar3 = *(undefined8*)param_1;
   uVar1 = *(undefined8*)param_2;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar4 = (float)Vector2::dot((Vector2*)( this + 0x68 ));
   if (_LC19 < (double)ABS(fVar4)) {
      fVar5 = (float)Vector2::dot((Vector2*)( this + 0x68 ));
      fVar4 = ( fVar5 - *(float*)( this + 0x70 ) ) / fVar4;
      dVar6 = (double)fVar4;
      if (( _LC20 <= dVar6 ) && ( dVar6 <= __LC21 )) {
         fVar4 = (float)( (uint)fVar4 ^ _LC4 );
         *(ulong*)param_3 = CONCAT44(fVar4 * ( (float)( (ulong)uVar3 >> 0x20 ) - (float)( (ulong)uVar1 >> 0x20 ) ) + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), fVar4 * ( (float)uVar3 - (float)uVar1 ) + (float)*(undefined8*)param_1);
         *(undefined8*)param_4 = *(undefined8*)( this + 0x68 );
         uVar3 = 1;
         goto LAB_001006f1;
      }

   }

   uVar3 = 0;
   LAB_001006f1:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotRectangleShape2D::get_moment_of_inertia(float, Vector2 const&) const */undefined8 GodotRectangleShape2D::get_moment_of_inertia(GodotRectangleShape2D *this, float param_1, Vector2 *param_2) {
   float fVar1;
   long in_FS_OFFSET;
   float fVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 local_18;
   long local_10;
   undefined8 extraout_XMM0_Qb;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)*(undefined8*)( this + 0x68 );
   fVar1 = (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 );
   local_18 = CONCAT44(( fVar1 + fVar1 ) * (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ), ( fVar2 + fVar2 ) * (float)*(undefined8*)param_2);
   auVar3._0_8_ = Vector2::dot((Vector2*)&local_18);
   auVar3._8_8_ = extraout_XMM0_Qb;
   auVar4._4_12_ = auVar3._4_12_;
   auVar4._0_4_ = ( (float)auVar3._0_8_ * param_1 ) / __LC18;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar4._0_8_;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotRectangleShape2D::get_data() const */void GodotRectangleShape2D::get_data(void) {
   long in_RSI;
   Variant *in_RDI;
   Variant::Variant(in_RDI, (Vector2*)( in_RSI + 0x68 ));
   return;
}
/* GodotCapsuleShape2D::get_data() const */void GodotCapsuleShape2D::get_data(void) {
   long in_RSI;
   Variant *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = CONCAT44((int)*(undefined8*)( in_RSI + 0x68 ), (int)( ( ulong ) * (undefined8*)( in_RSI + 0x68 ) >> 0x20 ));
   Variant::Variant(in_RDI, (Vector2*)&local_18);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCircleShape2D::get_data() const */void GodotCircleShape2D::get_data(void) {
   long in_RSI;
   Variant *in_RDI;
   Variant::Variant(in_RDI, *(float*)( in_RSI + 0x68 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotSegmentShape2D::get_moment_of_inertia(float, Vector2 const&) const */undefined8 GodotSegmentShape2D::get_moment_of_inertia(GodotSegmentShape2D *this, float param_1, Vector2 *param_2) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   float fVar3;
   float fVar4;
   undefined8 local_20;
   undefined8 local_18;
   long local_10;
   undefined8 extraout_XMM0_Qb;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = (float)*(undefined8*)param_2;
   fVar4 = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 );
   local_20 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 ) * fVar4, (float)*(undefined8*)( this + 0x68 ) * fVar3);
   local_18 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x70 ) >> 0x20 ) * fVar4, (float)*(undefined8*)( this + 0x70 ) * fVar3);
   auVar1._0_8_ = Vector2::distance_squared_to((Vector2*)&local_20);
   auVar1._8_8_ = extraout_XMM0_Qb;
   auVar2._4_12_ = auVar1._4_12_;
   auVar2._0_4_ = ( (float)auVar1._0_8_ * param_1 ) / __LC18;
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return auVar2._0_8_;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSegmentShape2D::get_data() const */void GodotSegmentShape2D::get_data(void) {
   long in_RSI;
   Variant *in_RDI;
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = *(undefined8*)( in_RSI + 0x68 );
   local_20 = *(undefined8*)( in_RSI + 0x70 );
   Variant::Variant(in_RDI, (Rect2*)&local_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCircleShape2D::contains_point(Vector2 const&) const */bool GodotCircleShape2D::contains_point(Vector2 *param_1) {
   float fVar1;
   fVar1 = (float)Vector2::length_squared();
   return fVar1 < *(float*)( param_1 + 0x68 ) * *(float*)( param_1 + 0x68 );
}
/* GodotCapsuleShape2D::contains_point(Vector2 const&) const */bool GodotCapsuleShape2D::contains_point(Vector2 *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   float extraout_XMM0_Da;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Vector2::length_squared();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return extraout_XMM0_Da < *(float*)( param_1 + 0x68 ) * *(float*)( param_1 + 0x68 );
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCircleShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&) const
    */undefined8 GodotCircleShape2D::intersect_segment(GodotCircleShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   float local_38;
   float fStack_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (float)*(undefined8*)param_2 - (float)*(undefined8*)param_1;
   fStack_34 = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   fVar2 = (float)Vector2::dot((Vector2*)&local_38);
   fVar3 = (float)Vector2::dot(param_1);
   fVar3 = fVar3 + fVar3;
   fVar4 = (float)Vector2::dot(param_1);
   uVar1 = 0;
   fVar4 = fVar3 * fVar3 - ( fVar4 - *(float*)( this + 0x68 ) * *(float*)( this + 0x68 ) ) * _LC24 * fVar2;
   if (( ( 0.0 <= fVar4 ) && ( fVar2 = ( (float)( (uint)fVar3 ^ _LC4 ) - SQRT(fVar4) ) / ( fVar2 + fVar2 ) ),0.0 <= fVar2 )) &&( (double)fVar2 <= __LC21 ) * (ulong*)param_3 = CONCAT44(fVar2 * fStack_34 + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), fVar2 * local_38 + (float)*(undefined8*)param_1);
   uVar5 = Vector2::normalized();
   uVar1 = 1;
   *(undefined8*)param_4 = uVar5;
}
if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCapsuleShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&) const
    */char GodotCapsuleShape2D::intersect_segment(GodotCapsuleShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   bool bVar1;
   char cVar2;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   undefined8 uVar7;
   float fVar8;
   double dVar9;
   char local_8d;
   float local_8c;
   float local_78;
   float fStack_74;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_58 = CONCAT44((float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*(undefined8*)param_2 - (float)*(undefined8*)param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = Vector2::normalized();
   local_8d = '\0';
   bVar1 = false;
   fVar6 = *(float*)( this + 0x68 );
   local_8c = _LC1;
   while (true) {
      if (bVar1) {
         dVar9 = (double)*(float*)( this + 0x6c ) * _LC5 - (double)fVar6;
      }
 else {
         dVar9 = (double)(float)( ( uint ) * (float*)( this + 0x6c ) ^ _LC4 ) * _LC5 + (double)*(float*)( this + 0x68 );
      }

      fStack_74 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
      fVar8 = (float)dVar9;
      local_78 = (float)*(undefined8*)param_1;
      local_68._0_4_ = *(float*)param_2 - local_78;
      fStack_74 = fStack_74 + fVar8;
      local_68._4_4_ = ( *(float*)( param_2 + 4 ) + fVar8 ) - fStack_74;
      fVar3 = (float)Vector2::dot((Vector2*)&local_68);
      fVar4 = (float)Vector2::dot((Vector2*)&local_78);
      fVar4 = fVar4 + fVar4;
      fVar5 = (float)Vector2::dot((Vector2*)&local_78);
      fVar6 = *(float*)( this + 0x68 );
      fVar5 = fVar4 * fVar4 - ( fVar5 - fVar6 * fVar6 ) * _LC24 * fVar3;
      if (( ( 0.0 <= fVar5 ) && ( fVar3 = ( (float)( (uint)fVar4 ^ _LC4 ) - SQRT(fVar5) ) / ( fVar3 + fVar3 ) ),0.0 <= fVar3 )) {
         fVar6 = fStack_74 + fVar3 * local_68._4_4_;
         local_60 = CONCAT44(fVar6, local_78 + fVar3 * (float)local_68);
         local_58 = CONCAT44(fVar6 - fVar8, fVar3 * (float)local_68 + local_78);
         fVar6 = (float)Vector2::dot((Vector2*)&local_70);
         if (fVar6 < local_8c) {
            *(undefined8*)param_3 = local_58;
            uVar7 = Vector2::normalized();
            local_8d = '\x01';
            *(undefined8*)param_4 = uVar7;
            local_8c = fVar6;
         }

         fVar6 = *(float*)( this + 0x68 );
      }

      if (bVar1) break;
      bVar1 = true;
   }
;
   local_68 = 0;
   local_60 = 0;
   uStack_50 = CONCAT44(*(float*)( this + 0x6c ) - ( fVar6 + fVar6 ), fVar6 + fVar6);
   local_58 = CONCAT44((float)( (double)(float)( ( uint ) * (float*)( this + 0x6c ) ^ _LC4 ) * _LC5 + (double)fVar6 ), (uint)fVar6 ^ _LC4);
   cVar2 = Rect2::intersects_segment((Vector2*)&local_58, param_1, param_2, (Vector2*)&local_68);
   if (cVar2 != '\0') {
      fVar6 = (float)Vector2::dot((Vector2*)&local_70);
      if (fVar6 < local_8c) {
         *(undefined8*)param_3 = local_68;
         *(undefined8*)param_4 = local_60;
         local_8d = cVar2;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_8d;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotRectangleShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&)
   const */void GodotRectangleShape2D::intersect_segment(Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   long in_FS_OFFSET;
   undefined8 local_28;
   undefined8 uStack_20;
   long local_10;
   local_28 = *(undefined8*)( param_1 + 0x10 );
   uStack_20 = *(undefined8*)( param_1 + 0x18 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   Rect2::intersects_segment((Vector2*)&local_28, param_2, param_3, param_4);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotConcavePolygonShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotConcavePolygonShape2D::get_supports(GodotConcavePolygonShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
   int iVar6;
   ulong uVar7;
   float fVar8;
   float fVar9;
   lVar2 = *(long*)( this + 0x80 );
   if (lVar2 == 0) {
      *param_3 = 1;
   }
 else {
      uVar4 = 0;
      uVar7 = 0xffffffff;
      fVar9 = _LC0;
      do {
         iVar6 = (int)uVar7;
         lVar5 = *(long*)( lVar2 + -8 );
         if (lVar5 <= (long)uVar4) goto LAB_00100ff2;
         fVar8 = (float)Vector2::dot(param_1);
         lVar2 = *(long*)( this + 0x80 );
         if (fVar9 < fVar8) {
            uVar7 = uVar4 & 0xffffffff;
            fVar9 = fVar8;
         }

         iVar6 = (int)uVar7;
         uVar4 = uVar4 + 1;
      }
 while ( lVar2 != 0 );
      lVar5 = 0;
      LAB_00100ff2:*param_3 = 1;
      if (iVar6 != -1) {
         lVar3 = (long)iVar6;
         if (( lVar3 < lVar5 ) && ( -1 < lVar3 )) {
            *(undefined8*)param_2 = *(undefined8*)( lVar2 + lVar3 * 8 );
            return;
         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar5, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

   }

   _err_print_error("get_supports", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x293, "Condition \"idx == -1\" is true.", 0, 0);
   return;
}
/* GodotSeparationRayShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotSeparationRayShape2D::get_supports(GodotSeparationRayShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   float fVar1;
   undefined4 uVar2;
   fVar1 = *(float*)( param_1 + 4 );
   *param_3 = 1;
   if (0.0 < fVar1) {
      uVar2 = *(undefined4*)( this + 0x68 );
      *(undefined4*)param_2 = 0;
      *(undefined4*)( param_2 + 4 ) = uVar2;
      return;
   }

   *(undefined8*)param_2 = 0;
   return;
}
/* GodotSegmentShape2D::get_supports(Vector2 const&, Vector2*, int&) const */void GodotSegmentShape2D::get_supports(GodotSegmentShape2D *this, Vector2 *param_1, Vector2 *param_2, int *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar3 = (float)Vector2::dot(param_1);
   if ((double)ABS(fVar3) < *(double*)( this + 0x58 ) || (double)ABS(fVar3) == *(double*)( this + 0x58 )) {
      fVar3 = (float)Vector2::dot(param_1);
      if (fVar3 <= 0.0) {
         *(undefined8*)param_2 = *(undefined8*)( this + 0x68 );
      }
 else {
         *(undefined8*)param_2 = *(undefined8*)( this + 0x70 );
      }

      iVar2 = 1;
   }
 else {
      *(undefined8*)param_2 = *(undefined8*)( this + 0x68 );
      *(undefined8*)( param_2 + 8 ) = *(undefined8*)( this + 0x70 );
      iVar2 = 2;
   }

   *param_3 = iVar2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GodotConcavePolygonShape2D::Segment>::_copy_on_write() [clone .isra.0] */void CowData<GodotConcavePolygonShape2D::Segment>::_copy_on_write(CowData<GodotConcavePolygonShape2D::Segment> *this) {
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
/* GodotConcavePolygonShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&)
   const */char GodotConcavePolygonShape2D::intersect_segment(GodotConcavePolygonShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   uint *puVar1;
   Vector2 *pVVar2;
   int *piVar3;
   undefined4 *puVar4;
   float *pfVar5;
   undefined4 uVar6;
   code *pcVar7;
   long lVar8;
   Vector2 *pVVar9;
   char cVar10;
   uint uVar11;
   ulong uVar12;
   Vector2 *pVVar13;
   uint uVar14;
   uint uVar15;
   undefined1 *puVar16;
   undefined1 *puVar17;
   long lVar18;
   Vector2 *pVVar19;
   char cVar20;
   Vector2 *pVVar21;
   int iVar22;
   undefined4 *puVar23;
   long in_FS_OFFSET;
   float fVar24;
   undefined8 uVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   undefined1 auStack_c8[7];
   char local_c1;
   Vector2 *local_c0;
   float local_b8;
   float local_b4;
   long local_b0;
   Vector2 *local_a8;
   float local_a0;
   float local_9c;
   long local_98;
   Vector2 *local_90;
   Vector2 *local_88;
   Vector2 *local_80;
   Vector2 *local_78;
   Vector2 *local_70;
   Vector2 *local_68;
   Vector2 *local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   puVar17 = auStack_c8;
   local_68 = param_3;
   local_60 = param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar16 = auStack_c8;
   if (( ( ( *(long*)( this + 0x70 ) == 0 ) || ( puVar16 = auStack_c8 * (long*)( *(long*)( this + 0x70 ) + -8 ) == 0 ) ) || ( puVar16 = auStack_c8 * (long*)( this + 0x80 ) == 0 ) ) || ( puVar16 = auStack_c8 * (long*)( *(long*)( this + 0x80 ) + -8 ) == 0 )) {
      LAB_00101323:cVar20 = '\0';
      LAB_00101326:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return cVar20;
      }

      /* WARNING: Subroutine does not return */
      *(undefined**)( puVar16 + -8 ) = &UNK_00101937;
      __stack_chk_fail();
   }

   uVar12 = (long)*(int*)( this + 0x98 ) * 4 + 0x17;
   for (; puVar17 != auStack_c8 + -(uVar12 & 0xfffffffffffff000); puVar17 = puVar17 + -0x1000) {
      *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
   }

   uVar12 = ( ulong )((uint)uVar12 & 0xff0);
   lVar8 = -uVar12;
   puVar16 = puVar17 + lVar8;
   if (uVar12 != 0) {
      *(undefined8*)( puVar17 + -8 ) = *(undefined8*)( puVar17 + -8 );
   }

   local_a8 = (Vector2*)&local_50;
   local_50 = CONCAT44((float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*(undefined8*)param_2 - (float)*(undefined8*)param_1);
   puVar23 = (undefined4*)( ( ulong )(puVar17 + lVar8 + 0xf) & 0xfffffffffffffff0 );
   local_70 = param_2;
   *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x1013d3;
   local_48 = Vector2::normalized();
   local_9c = _LC1;
   local_b0 = *(long*)( this + 0x70 );
   if (local_b0 != 0) {
      lVar18 = *(long*)( local_b0 + -8 );
      if (lVar18 < 1) goto LAB_001015f3;
      local_98 = *(long*)( this + 0x80 );
      if (local_98 != 0) {
         lVar18 = *(long*)( local_98 + -8 );
         if (lVar18 < 1) goto LAB_001015f3;
         pVVar21 = *(Vector2**)( this + 0x90 );
         if (pVVar21 != (Vector2*)0x0) {
            lVar18 = *(long*)( pVVar21 + -8 );
            if (lVar18 < 1) goto LAB_001015f3;
            uVar15 = 0;
            iVar22 = 0;
            *puVar23 = 0;
            pVVar13 = local_70;
            pVVar19 = (Vector2*)0x0;
            cVar20 = '\0';
            LAB_00101470:while (true) {
               pVVar9 = local_60;
               uVar11 = uVar15 >> 0x1d;
               uVar14 = uVar15 & 0x1fffffff;
               puVar1 = puVar23 + (long)pVVar19;
               pVVar2 = pVVar21 + (ulong)uVar14 * 0x18;
               if (uVar11 != 2) break;
               uVar6 = *(undefined4*)( pVVar2 + 0x14 );
               uVar14 = uVar14 | 0x60000000;
               LAB_001014af:iVar22 = iVar22 + 1;
               *(ulong*)puVar1 = CONCAT44(uVar6, uVar14);
               uVar15 = puVar23[(long)( pVVar19 + 1 )];
               pVVar19 = (Vector2*)(long)iVar22;
            }
;
            if (uVar11 < 3) {
               if (uVar15 >> 0x1d != 0) {
                  uVar6 = *(undefined4*)( pVVar2 + 0x10 );
                  uVar14 = uVar14 | 0x40000000;
                  goto LAB_001014af;
               }

               local_88 = (Vector2*)CONCAT71(local_88._1_7_, cVar20);
               local_90 = pVVar19;
               local_80 = pVVar21;
               local_78 = pVVar13;
               local_70 = pVVar2;
               *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x101564;
               cVar10 = Rect2::intersects_segment(pVVar2, param_1, pVVar13, (Vector2*)0x0);
               pVVar13 = local_78;
               pVVar21 = local_80;
               pVVar2 = local_a8;
               cVar20 = (char)local_88;
               pVVar19 = local_90;
               if (cVar10 == '\0') {
                  LAB_001015c0:uVar15 = uVar14 | 0x60000000;
                  *puVar1 = uVar15;
               }
 else {
                  if (*(int*)( local_70 + 0x10 ) < 0) {
                     local_c0 = *(Vector2**)param_1;
                     local_88 = local_90;
                     local_80 = (Vector2*)CONCAT71(local_80._1_7_, cVar20);
                     local_50 = CONCAT44((float)( ( ulong ) * (undefined8*)local_78 >> 0x20 ) - (float)( (ulong)local_c0 >> 0x20 ), (float)*(undefined8*)local_78 - SUB84(local_c0, 0));
                     local_78 = pVVar21;
                     piVar3 = (int*)( local_b0 + (long)*(int*)( local_70 + 0x14 ) * 8 );
                     local_70 = pVVar13;
                     puVar4 = (undefined4*)( local_98 + (long)*piVar3 * 8 );
                     pfVar5 = (float*)( local_98 + (long)piVar3[1] * 8 );
                     local_a0 = (float)puVar4[1];
                     local_b8 = *pfVar5;
                     local_b4 = pfVar5[1];
                     local_58 = 0;
                     local_90 = (Vector2*)CONCAT44(local_90._4_4_, *puVar4);
                     local_c1 = cVar10;
                     *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x1016e4;
                     fVar24 = (float)Vector2::dot(pVVar2);
                     pVVar21 = local_78;
                     cVar20 = (char)local_80;
                     pVVar13 = local_70;
                     pVVar19 = local_88;
                     if (0.0 < fVar24) {
                        fVar29 = local_50._4_4_ / fVar24;
                        fVar32 = (float)( (ulong)local_c0 >> 0x20 );
                        fVar27 = local_90._0_4_ - SUB84(local_c0, 0);
                        fVar31 = local_a0 - fVar32;
                        fVar30 = local_b8 - SUB84(local_c0, 0);
                        fVar32 = local_b4 - fVar32;
                        fVar24 = (float)local_50 / fVar24;
                        fVar26 = fVar31 * fVar24 - fVar27 * fVar29;
                        fVar28 = fVar32 * fVar24 - fVar30 * fVar29;
                        if (_LC35 <= fVar26) {
                           if (_LC34 < fVar26) {
                              if (fVar28 <= _LC34) goto LAB_001017a3;
                           }
 else if (fVar26 != fVar28) {
                              LAB_001017a3:local_c0 = (Vector2*)CONCAT71(local_c0._1_7_, local_c1);
                              fVar33 = _LC34;
                              if (_LC34 <= ABS(fVar26) * _LC34) {
                                 fVar33 = ABS(fVar26) * _LC34;
                              }

                              if (( ( fVar33 <= ABS(fVar26 - fVar28) ) && ( fVar32 = fVar30 * fVar24 + fVar32 * fVar29 ),fVar32 = ( ( ( fVar27 * fVar24 + fVar31 * fVar29 ) - fVar32 ) * fVar28 ) / ( fVar28 - fVar26 ) + fVar32,0.0 <= fVar32 )) {
                                 local_80 = local_70;
                                 local_78 = (Vector2*)CONCAT71(local_78._1_7_, cVar20);
                                 local_70 = pVVar21;
                                 local_58 = CONCAT44(local_50._4_4_ * fVar32 + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)local_50 * fVar32 + (float)*(undefined8*)param_1);
                                 *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x10186d;
                                 fVar24 = (float)Vector2::dot((Vector2*)&local_48);
                                 pVVar21 = local_70;
                                 pVVar19 = local_88;
                                 pVVar13 = local_80;
                                 cVar20 = (char)local_78;
                                 if (fVar24 < local_9c) {
                                    local_70 = (Vector2*)CONCAT71(local_70._1_7_, local_c0._0_1_);
                                    local_78 = (Vector2*)CONCAT44(local_78._4_4_, fVar24);
                                    local_88 = local_80;
                                    *(undefined8*)local_68 = local_58;
                                    local_c0 = pVVar19;
                                    local_80 = pVVar21;
                                    local_50 = CONCAT44(( uint )(local_b8 - local_90._0_4_) ^ _LC4, local_b4 - local_a0);
                                    *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x1018f2;
                                    uVar25 = Vector2::normalized();
                                    local_9c = local_78._0_4_;
                                    *(undefined8*)local_60 = uVar25;
                                    pVVar13 = local_88;
                                    pVVar19 = local_c0;
                                    pVVar21 = local_80;
                                    cVar20 = (char)local_70;
                                 }

                              }

                           }

                        }
 else if (_LC35 <= fVar28) goto LAB_001017a3;
                     }

                     goto LAB_001015c0;
                  }

                  uVar15 = uVar14 | 0x20000000;
                  *puVar1 = uVar15;
               }

               goto LAB_00101470;
            }

            do {} while ( uVar11 != 3 );
            if (iVar22 != 0) {
               iVar22 = iVar22 + -1;
               uVar15 = puVar23[(long)( pVVar19 + -1 )];
               pVVar19 = (Vector2*)(long)iVar22;
               goto LAB_00101470;
            }

            if (cVar20 != '\0') {
               *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x1014fa;
               fVar24 = (float)Vector2::dot((Vector2*)&local_48);
               puVar16 = puVar17 + lVar8;
               if (0.0 < fVar24) {
                  uVar25 = *(undefined8*)pVVar9;
                  *(ulong*)pVVar9 = CONCAT44(( uint )((ulong)uVar25 >> 0x20) ^ _LC36._4_4_, (uint)uVar25 ^ (uint)_LC36);
                  puVar16 = puVar17 + lVar8;
               }

               goto LAB_00101326;
            }

            goto LAB_00101323;
         }

      }

   }

   lVar18 = 0;
   LAB_001015f3:*(undefined8*)( puVar17 + lVar8 + -8 ) = 1;
   *(undefined8*)( puVar17 + lVar8 + -0x10 ) = 0;
   *(undefined**)( puVar17 + lVar8 + -0x18 ) = &_LC29;
   *(char**)( puVar17 + lVar8 + -0x20 ) = "size()";
   *(undefined8*)( puVar17 + lVar8 + -0x28 ) = 0x101628;
   _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar18, "p_index", *(char**)( puVar17 + lVar8 + -0x20 ), *(char**)( puVar17 + lVar8 + -0x18 ), (bool)puVar17[lVar8 + -0x10], (bool)puVar17[lVar8 + -8]);
   *(undefined8*)( puVar17 + lVar8 + -8 ) = 0x101631;
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar7 = (code*)invalidInstructionException();
   ( *pcVar7 )();
}
/* GodotWorldBoundaryShape2D::get_data() const */void GodotWorldBoundaryShape2D::get_data(void) {
   Variant *pVVar1;
   long in_RSI;
   int iVar2;
   Variant *in_RDI;
   long in_FS_OFFSET;
   Array local_60[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_60);
   iVar2 = (int)local_60;
   Array::resize(iVar2);
   Variant::Variant((Variant*)local_58, (Vector2*)( in_RSI + 0x68 ));
   pVVar1 = (Variant*)Array::operator [](iVar2);
   if (pVVar1 == (Variant*)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar1 = 0;
      *(int*)pVVar1 = local_58[0];
      *(undefined8*)( pVVar1 + 8 ) = local_50;
      *(undefined8*)( pVVar1 + 0x10 ) = uStack_48;
   }

   Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x70 ));
   pVVar1 = (Variant*)Array::operator [](iVar2);
   if (pVVar1 == (Variant*)local_58) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar1 = 0;
      *(int*)pVVar1 = local_58[0];
      *(undefined8*)( pVVar1 + 8 ) = local_50;
      *(undefined8*)( pVVar1 + 0x10 ) = uStack_48;
   }

   Variant::Variant(in_RDI, local_60);
   Array::~Array(local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSeparationRayShape2D::get_data() const */Variant *GodotSeparationRayShape2D::get_data(void) {
   char cVar1;
   Variant *pVVar2;
   long in_RSI;
   Variant *in_RDI;
   long in_FS_OFFSET;
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x68 ));
   Variant::Variant((Variant*)local_78, "length");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, *(bool*)( in_RSI + 0x6c ));
   Variant::Variant((Variant*)local_78, "slide_on_slope");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_58[0];
      *(undefined8*)( pVVar2 + 8 ) = local_50;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant(in_RDI, local_80);
   Dictionary::~Dictionary(local_80);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<GodotConcavePolygonShape2D::BVH, GodotConcavePolygonShape2D::BVH_CompareX,
   true>::introsort(long, long, GodotConcavePolygonShape2D::BVH*, long) const [clone .isra.0] */void SortArray<GodotConcavePolygonShape2D::BVH,GodotConcavePolygonShape2D::BVH_CompareX,true>::introsort(long param_1, long param_2, BVH *param_3, long param_4) {
   BVH *pBVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   double dVar8;
   long lVar9;
   long lVar10;
   BVH *pBVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   BVH *pBVar15;
   long lVar16;
   long lVar17;
   BVH *pBVar18;
   long in_FS_OFFSET;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   long local_b8;
   float local_78;
   float fStack_70;
   dVar8 = _LC5;
   lVar12 = param_2 - param_1;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar12) {
      if (param_4 != 0) {
         pBVar15 = param_3 + param_1 * 0x18;
         lVar17 = param_2;
         local_b8 = param_4;
         LAB_00101d52:local_b8 = local_b8 + -1;
         dVar19 = (double)*(float*)( pBVar15 + 8 ) * dVar8 + (double)*(float*)pBVar15;
         dVar20 = (double)*(float*)( param_3 + ( ( lVar12 >> 1 ) + param_1 ) * 0x18 + 8 ) * dVar8 + (double)*(float*)( param_3 + ( ( lVar12 >> 1 ) + param_1 ) * 0x18 );
         dVar21 = (double)*(float*)( param_3 + lVar17 * 0x18 + -0x18 + 8 ) * dVar8 + (double)*(float*)( param_3 + lVar17 * 0x18 + -0x18 );
         if (dVar20 <= dVar19) {
            dVar22 = dVar19;
            if (( dVar21 <= dVar19 ) && ( dVar22 = dVar21 <= dVar20 )) {
               dVar22 = dVar20;
            }

         }
 else {
            dVar22 = dVar20;
            if (( dVar21 <= dVar20 ) && ( dVar22 = dVar21 <= dVar19 )) {
               dVar22 = dVar19;
            }

         }

         lVar12 = lVar17;
         param_2 = param_1;
         pBVar18 = pBVar15;
         do {
            if ((double)*(float*)( pBVar18 + 8 ) * dVar8 + (double)*(float*)pBVar18 < dVar22) {
               if (lVar17 + -1 == param_2) {
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                  goto LAB_00101e30;
               }

            }
 else {
               LAB_00101e30:lVar12 = lVar12 + -1;
               pBVar11 = param_3 + lVar12 * 0x18;
               if (dVar22 < (double)*(float*)( pBVar11 + 8 ) * dVar8 + (double)*(float*)pBVar11) {
                  pBVar1 = param_3 + lVar12 * 0x18 + -0x18;
                  while (param_1 != lVar12) {
                     lVar12 = lVar12 + -1;
                     pBVar11 = pBVar1;
                     if ((double)*(float*)( pBVar1 + 8 ) * dVar8 + (double)*(float*)pBVar1 <= dVar22) goto LAB_00101eec;
                     pBVar1 = pBVar1 + -0x18;
                  }
;
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
               }

               LAB_00101eec:if (lVar12 <= param_2) goto LAB_00101f30;
               uVar5 = *(undefined8*)( pBVar11 + 8 );
               uVar6 = *(undefined8*)pBVar18;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               uVar3 = *(undefined8*)( pBVar18 + 0x10 );
               *(undefined8*)pBVar18 = *(undefined8*)pBVar11;
               *(undefined8*)( pBVar18 + 8 ) = uVar5;
               *(undefined8*)( pBVar18 + 0x10 ) = *(undefined8*)( pBVar11 + 0x10 );
               *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
               *(undefined8*)pBVar11 = uVar6;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
            }

            pBVar18 = pBVar18 + 0x18;
            param_2 = param_2 + 1;
         }
 while ( true );
      }

      LAB_0010222f:lVar14 = lVar12 + -2 >> 1;
      lVar17 = lVar14 * 2 + 2;
      pBVar15 = param_3 + ( param_1 + lVar14 ) * 0x18;
      do {
         uVar5 = *(undefined8*)pBVar15;
         uVar6 = *(undefined8*)( pBVar15 + 8 );
         uVar3 = *(undefined8*)( pBVar15 + 0x10 );
         local_78 = (float)uVar5;
         fStack_70 = (float)uVar6;
         lVar9 = lVar17;
         lVar16 = lVar14;
         if (lVar17 < lVar12) {
            do {
               pBVar11 = param_3 + ( param_1 + lVar9 ) * 0x18;
               pBVar18 = param_3 + ( param_1 + lVar9 + -1 ) * 0x18;
               lVar10 = lVar9 + -1;
               lVar13 = lVar9;
               if ((double)*(float*)pBVar18 + (double)*(float*)( pBVar18 + 8 ) * dVar8 <= (double)*(float*)( pBVar11 + 8 ) * dVar8 + (double)*(float*)pBVar11) {
                  lVar13 = lVar9 + 1;
                  lVar10 = lVar9;
                  pBVar18 = pBVar11;
               }

               uVar7 = *(undefined8*)( pBVar18 + 8 );
               lVar9 = lVar13 * 2;
               pBVar11 = param_3 + ( param_1 + lVar16 ) * 0x18;
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
               lVar16 = lVar10;
            }
 while ( lVar12 != lVar9 && SBORROW8(lVar12, lVar9) == lVar12 + lVar13 * -2 < 0 );
            pBVar11 = pBVar18;
            if (lVar12 == lVar9) {
               LAB_0010241e:lVar10 = lVar9 + -1;
               pBVar18 = param_3 + ( param_1 + lVar10 ) * 0x18;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
            }

            lVar9 = lVar10 + -1;
            if (lVar10 <= lVar14) goto LAB_001024e8;
            do {
               lVar16 = lVar9 >> 1;
               pBVar18 = param_3 + ( param_1 + lVar16 ) * 0x18;
               pBVar11 = param_3 + ( lVar10 + param_1 ) * 0x18;
               if ((double)fStack_70 * dVar8 + (double)local_78 <= (double)*(float*)( pBVar18 + 8 ) * dVar8 + (double)*(float*)pBVar18) break;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
               lVar9 = ( lVar16 + -1 ) - ( lVar16 + -1 >> 0x3f );
               pBVar11 = pBVar18;
               lVar10 = lVar16;
            }
 while ( lVar14 < lVar16 );
            *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
            *(undefined8*)pBVar11 = uVar5;
            *(undefined8*)( pBVar11 + 8 ) = uVar6;
            if (lVar14 == 0) goto LAB_00101fdd;
         }
 else {
            pBVar11 = pBVar15;
            pBVar18 = pBVar15;
            if (lVar17 == lVar12) goto LAB_0010241e;
            LAB_001024e8:*(undefined8*)( pBVar18 + 0x10 ) = uVar3;
            *(undefined8*)pBVar18 = uVar5;
            *(undefined8*)( pBVar18 + 8 ) = uVar6;
         }

         lVar14 = lVar14 + -1;
         pBVar15 = pBVar15 + -0x18;
         lVar17 = lVar17 + -2;
      }
 while ( true );
   }

   goto LAB_001021e3;
   LAB_00101f30:introsort(param_2, lVar17, param_3, local_b8);
   lVar12 = param_2 - param_1;
   if (lVar12 < 0x11) goto LAB_001021e3;
   lVar17 = param_2;
   if (local_b8 == 0) goto LAB_0010222f;
   goto LAB_00101d52;
   LAB_00101fdd:pBVar15 = param_3 + param_1 * 0x18;
   pBVar18 = param_3 + ( param_2 + -1 ) * 0x18 + -0x18;
   lVar12 = ( param_2 + -1 ) - param_1;
   do {
      uVar5 = *(undefined8*)( pBVar15 + 8 );
      uVar6 = *(undefined8*)( pBVar18 + 0x18 );
      uVar7 = *(undefined8*)( pBVar18 + 0x20 );
      uVar3 = *(undefined8*)( pBVar18 + 0x28 );
      *(undefined8*)( pBVar18 + 0x18 ) = *(undefined8*)pBVar15;
      *(undefined8*)( pBVar18 + 0x20 ) = uVar5;
      *(undefined8*)( pBVar18 + 0x28 ) = *(undefined8*)( pBVar15 + 0x10 );
      local_78 = (float)uVar6;
      fStack_70 = (float)uVar7;
      if (lVar12 < 3) {
         pBVar11 = pBVar15;
         if (lVar12 == 2) goto LAB_00102457;
      }
 else {
         lVar17 = 2;
         lVar14 = 0;
         do {
            pBVar1 = param_3 + ( param_1 + lVar17 ) * 0x18;
            pBVar11 = param_3 + ( param_1 + lVar17 + -1 ) * 0x18;
            lVar9 = lVar17 + -1;
            lVar16 = lVar17;
            if ((double)*(float*)pBVar11 + (double)*(float*)( pBVar11 + 8 ) * dVar8 <= (double)*(float*)( pBVar1 + 8 ) * dVar8 + (double)*(float*)pBVar1) {
               lVar16 = lVar17 + 1;
               lVar9 = lVar17;
               pBVar11 = pBVar1;
            }

            uVar5 = *(undefined8*)( pBVar11 + 8 );
            lVar17 = lVar16 * 2;
            pBVar1 = param_3 + ( param_1 + lVar14 ) * 0x18;
            *(undefined8*)pBVar1 = *(undefined8*)pBVar11;
            *(undefined8*)( pBVar1 + 8 ) = uVar5;
            *(undefined8*)( pBVar1 + 0x10 ) = *(undefined8*)( pBVar11 + 0x10 );
            lVar14 = lVar9;
         }
 while ( lVar12 != lVar17 && SBORROW8(lVar12, lVar17) == lVar12 + lVar16 * -2 < 0 );
         if (lVar12 == lVar17) {
            LAB_00102457:uVar5 = *(undefined8*)( pBVar18 + 8 );
            lVar9 = lVar12 + -1;
            lVar17 = lVar12 + -2;
            *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
            *(undefined8*)( pBVar11 + 8 ) = uVar5;
            *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
         }
 else {
            lVar17 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
            if (lVar9 == 0) goto LAB_001021a8;
         }

         do {
            lVar14 = lVar17 >> 1;
            pBVar1 = param_3 + ( param_1 + lVar14 ) * 0x18;
            pBVar11 = param_3 + ( lVar9 + param_1 ) * 0x18;
            if ((double)fStack_70 * dVar8 + (double)local_78 <= (double)*(float*)( pBVar1 + 8 ) * dVar8 + (double)*(float*)pBVar1) break;
            uVar5 = *(undefined8*)( pBVar1 + 8 );
            *(undefined8*)pBVar11 = *(undefined8*)pBVar1;
            *(undefined8*)( pBVar11 + 8 ) = uVar5;
            *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar1 + 0x10 );
            lVar17 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
            lVar9 = lVar14;
            pBVar11 = pBVar1;
         }
 while ( lVar14 != 0 );
      }

      LAB_001021a8:pBVar18 = pBVar18 + -0x18;
      *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
      *(undefined8*)pBVar11 = uVar6;
      *(undefined8*)( pBVar11 + 8 ) = uVar7;
      bVar4 = 1 < lVar12;
      lVar12 = lVar12 + -1;
   }
 while ( bVar4 );
   LAB_001021e3:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<GodotConcavePolygonShape2D::BVH, GodotConcavePolygonShape2D::BVH_CompareY,
   true>::introsort(long, long, GodotConcavePolygonShape2D::BVH*, long) const [clone .isra.0] */void SortArray<GodotConcavePolygonShape2D::BVH,GodotConcavePolygonShape2D::BVH_CompareY,true>::introsort(long param_1, long param_2, BVH *param_3, long param_4) {
   BVH *pBVar1;
   long lVar2;
   undefined8 uVar3;
   bool bVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   double dVar8;
   long lVar9;
   long lVar10;
   BVH *pBVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   BVH *pBVar15;
   long lVar16;
   long lVar17;
   BVH *pBVar18;
   long in_FS_OFFSET;
   double dVar19;
   double dVar20;
   double dVar21;
   double dVar22;
   long local_b8;
   float fStack_74;
   float fStack_6c;
   dVar8 = _LC5;
   lVar12 = param_2 - param_1;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar12) {
      if (param_4 != 0) {
         pBVar15 = param_3 + param_1 * 0x18;
         lVar17 = param_2;
         local_b8 = param_4;
         LAB_001025b2:lVar12 = ( lVar12 >> 1 ) + param_1;
         local_b8 = local_b8 + -1;
         dVar19 = (double)*(float*)( pBVar15 + 0xc ) * dVar8 + (double)*(float*)( pBVar15 + 4 );
         dVar20 = (double)*(float*)( param_3 + lVar12 * 0x18 + 0xc ) * dVar8 + (double)*(float*)( param_3 + lVar12 * 0x18 + 4 );
         dVar21 = (double)*(float*)( param_3 + lVar17 * 0x18 + -0xc ) * dVar8 + (double)*(float*)( param_3 + lVar17 * 0x18 + -0x14 );
         if (dVar20 <= dVar19) {
            dVar22 = dVar19;
            if (( dVar21 <= dVar19 ) && ( dVar22 = dVar21 <= dVar20 )) {
               dVar22 = dVar20;
            }

         }
 else {
            dVar22 = dVar20;
            if (( dVar21 <= dVar20 ) && ( dVar22 = dVar21 <= dVar19 )) {
               dVar22 = dVar19;
            }

         }

         lVar12 = lVar17;
         param_2 = param_1;
         pBVar18 = pBVar15;
         do {
            if ((double)*(float*)( pBVar18 + 0xc ) * dVar8 + (double)*(float*)( pBVar18 + 4 ) < dVar22) {
               if (lVar17 + -1 == param_2) {
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                  goto LAB_00102690;
               }

            }
 else {
               LAB_00102690:lVar12 = lVar12 + -1;
               pBVar11 = param_3 + lVar12 * 0x18;
               if (dVar22 < (double)*(float*)( pBVar11 + 0xc ) * dVar8 + (double)*(float*)( pBVar11 + 4 )) {
                  pBVar1 = param_3 + lVar12 * 0x18 + -0x18;
                  while (param_1 != lVar12) {
                     lVar12 = lVar12 + -1;
                     pBVar11 = pBVar1;
                     if ((double)*(float*)( pBVar1 + 0xc ) * dVar8 + (double)*(float*)( pBVar1 + 4 ) <= dVar22) goto LAB_0010274d;
                     pBVar1 = pBVar1 + -0x18;
                  }
;
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
               }

               LAB_0010274d:if (lVar12 <= param_2) goto LAB_00102790;
               uVar5 = *(undefined8*)( pBVar11 + 8 );
               uVar6 = *(undefined8*)pBVar18;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               uVar3 = *(undefined8*)( pBVar18 + 0x10 );
               *(undefined8*)pBVar18 = *(undefined8*)pBVar11;
               *(undefined8*)( pBVar18 + 8 ) = uVar5;
               *(undefined8*)( pBVar18 + 0x10 ) = *(undefined8*)( pBVar11 + 0x10 );
               *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
               *(undefined8*)pBVar11 = uVar6;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
            }

            pBVar18 = pBVar18 + 0x18;
            param_2 = param_2 + 1;
         }
 while ( true );
      }

      LAB_00102a90:lVar14 = lVar12 + -2 >> 1;
      lVar17 = lVar14 * 2 + 2;
      pBVar15 = param_3 + ( param_1 + lVar14 ) * 0x18;
      do {
         uVar5 = *(undefined8*)pBVar15;
         uVar6 = *(undefined8*)( pBVar15 + 8 );
         uVar3 = *(undefined8*)( pBVar15 + 0x10 );
         fStack_74 = (float)( (ulong)uVar5 >> 0x20 );
         fStack_6c = (float)( (ulong)uVar6 >> 0x20 );
         lVar9 = lVar17;
         lVar16 = lVar14;
         if (lVar17 < lVar12) {
            do {
               pBVar11 = param_3 + ( param_1 + lVar9 ) * 0x18;
               pBVar18 = param_3 + ( param_1 + lVar9 + -1 ) * 0x18;
               lVar10 = lVar9 + -1;
               lVar13 = lVar9;
               if ((double)*(float*)( pBVar18 + 4 ) + (double)*(float*)( pBVar18 + 0xc ) * dVar8 <= (double)*(float*)( pBVar11 + 0xc ) * dVar8 + (double)*(float*)( pBVar11 + 4 )) {
                  lVar13 = lVar9 + 1;
                  lVar10 = lVar9;
                  pBVar18 = pBVar11;
               }

               uVar7 = *(undefined8*)( pBVar18 + 8 );
               lVar9 = lVar13 * 2;
               pBVar11 = param_3 + ( param_1 + lVar16 ) * 0x18;
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
               lVar16 = lVar10;
            }
 while ( lVar12 != lVar9 && SBORROW8(lVar12, lVar9) == lVar12 + lVar13 * -2 < 0 );
            pBVar11 = pBVar18;
            if (lVar12 == lVar9) {
               LAB_00102c8b:lVar10 = lVar9 + -1;
               pBVar18 = param_3 + ( param_1 + lVar10 ) * 0x18;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
            }

            lVar9 = lVar10 + -1;
            if (lVar10 <= lVar14) goto LAB_00102d55;
            do {
               lVar16 = lVar9 >> 1;
               pBVar18 = param_3 + ( param_1 + lVar16 ) * 0x18;
               pBVar11 = param_3 + ( lVar10 + param_1 ) * 0x18;
               if ((double)fStack_6c * dVar8 + (double)fStack_74 <= (double)*(float*)( pBVar18 + 0xc ) * dVar8 + (double)*(float*)( pBVar18 + 4 )) break;
               uVar7 = *(undefined8*)( pBVar18 + 8 );
               *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
               *(undefined8*)( pBVar11 + 8 ) = uVar7;
               *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
               lVar9 = ( lVar16 + -1 ) - ( lVar16 + -1 >> 0x3f );
               pBVar11 = pBVar18;
               lVar10 = lVar16;
            }
 while ( lVar14 < lVar16 );
            *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
            *(undefined8*)pBVar11 = uVar5;
            *(undefined8*)( pBVar11 + 8 ) = uVar6;
            if (lVar14 == 0) goto LAB_0010283d;
         }
 else {
            pBVar11 = pBVar15;
            pBVar18 = pBVar15;
            if (lVar17 == lVar12) goto LAB_00102c8b;
            LAB_00102d55:*(undefined8*)( pBVar18 + 0x10 ) = uVar3;
            *(undefined8*)pBVar18 = uVar5;
            *(undefined8*)( pBVar18 + 8 ) = uVar6;
         }

         lVar14 = lVar14 + -1;
         pBVar15 = pBVar15 + -0x18;
         lVar17 = lVar17 + -2;
      }
 while ( true );
   }

   goto LAB_00102a44;
   LAB_00102790:introsort(param_2, lVar17, param_3, local_b8);
   lVar12 = param_2 - param_1;
   if (lVar12 < 0x11) goto LAB_00102a44;
   lVar17 = param_2;
   if (local_b8 == 0) goto LAB_00102a90;
   goto LAB_001025b2;
   LAB_0010283d:pBVar15 = param_3 + param_1 * 0x18;
   pBVar18 = param_3 + ( param_2 + -1 ) * 0x18 + -0x18;
   lVar12 = ( param_2 + -1 ) - param_1;
   do {
      uVar5 = *(undefined8*)( pBVar15 + 8 );
      uVar6 = *(undefined8*)( pBVar18 + 0x18 );
      uVar7 = *(undefined8*)( pBVar18 + 0x20 );
      uVar3 = *(undefined8*)( pBVar18 + 0x28 );
      *(undefined8*)( pBVar18 + 0x18 ) = *(undefined8*)pBVar15;
      *(undefined8*)( pBVar18 + 0x20 ) = uVar5;
      *(undefined8*)( pBVar18 + 0x28 ) = *(undefined8*)( pBVar15 + 0x10 );
      fStack_74 = (float)( (ulong)uVar6 >> 0x20 );
      fStack_6c = (float)( (ulong)uVar7 >> 0x20 );
      if (lVar12 < 3) {
         pBVar11 = pBVar15;
         if (lVar12 == 2) goto LAB_00102cc4;
      }
 else {
         lVar17 = 2;
         lVar14 = 0;
         do {
            pBVar1 = param_3 + ( param_1 + lVar17 ) * 0x18;
            pBVar11 = param_3 + ( param_1 + lVar17 + -1 ) * 0x18;
            lVar9 = lVar17 + -1;
            lVar16 = lVar17;
            if ((double)*(float*)( pBVar11 + 4 ) + (double)*(float*)( pBVar11 + 0xc ) * dVar8 <= (double)*(float*)( pBVar1 + 0xc ) * dVar8 + (double)*(float*)( pBVar1 + 4 )) {
               lVar16 = lVar17 + 1;
               lVar9 = lVar17;
               pBVar11 = pBVar1;
            }

            uVar5 = *(undefined8*)( pBVar11 + 8 );
            lVar17 = lVar16 * 2;
            pBVar1 = param_3 + ( param_1 + lVar14 ) * 0x18;
            *(undefined8*)pBVar1 = *(undefined8*)pBVar11;
            *(undefined8*)( pBVar1 + 8 ) = uVar5;
            *(undefined8*)( pBVar1 + 0x10 ) = *(undefined8*)( pBVar11 + 0x10 );
            lVar14 = lVar9;
         }
 while ( lVar12 != lVar17 && SBORROW8(lVar12, lVar17) == lVar12 + lVar16 * -2 < 0 );
         if (lVar12 == lVar17) {
            LAB_00102cc4:uVar5 = *(undefined8*)( pBVar18 + 8 );
            lVar9 = lVar12 + -1;
            lVar17 = lVar12 + -2;
            *(undefined8*)pBVar11 = *(undefined8*)pBVar18;
            *(undefined8*)( pBVar11 + 8 ) = uVar5;
            *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar18 + 0x10 );
         }
 else {
            lVar17 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
            if (lVar9 == 0) goto LAB_00102a09;
         }

         do {
            lVar14 = lVar17 >> 1;
            pBVar1 = param_3 + ( param_1 + lVar14 ) * 0x18;
            pBVar11 = param_3 + ( lVar9 + param_1 ) * 0x18;
            if ((double)fStack_6c * dVar8 + (double)fStack_74 <= (double)*(float*)( pBVar1 + 0xc ) * dVar8 + (double)*(float*)( pBVar1 + 4 )) break;
            uVar5 = *(undefined8*)( pBVar1 + 8 );
            *(undefined8*)pBVar11 = *(undefined8*)pBVar1;
            *(undefined8*)( pBVar11 + 8 ) = uVar5;
            *(undefined8*)( pBVar11 + 0x10 ) = *(undefined8*)( pBVar1 + 0x10 );
            lVar17 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
            lVar9 = lVar14;
            pBVar11 = pBVar1;
         }
 while ( lVar14 != 0 );
      }

      LAB_00102a09:pBVar18 = pBVar18 + -0x18;
      *(undefined8*)( pBVar11 + 0x10 ) = uVar3;
      *(undefined8*)pBVar11 = uVar6;
      *(undefined8*)( pBVar11 + 8 ) = uVar7;
      bVar4 = 1 < lVar12;
      lVar12 = lVar12 + -1;
   }
 while ( bVar4 );
   LAB_00102a44:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotConvexPolygonShape2D::get_moment_of_inertia(float, Vector2 const&) const */undefined8 GodotConvexPolygonShape2D::get_moment_of_inertia(GodotConvexPolygonShape2D *this, float param_1, Vector2 *param_2) {
   undefined8 *puVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float local_58;
   float fStack_54;
   undefined8 uStack_50;
   long local_40;
   undefined8 uVar3;
   undefined8 extraout_XMM0_Qb;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x70 ) == 0) {
      _err_print_error("get_moment_of_inertia", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x231, "Condition \"point_count == 0\" is true. Returning: 0", "Convex polygon shape has no points.", 0, 0);
      uVar3 = 0;
   }
 else {
      puVar1 = *(undefined8**)( this + 0x68 );
      uStack_50 = 0;
      fVar7 = (float)*(undefined8*)param_2;
      fVar6 = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 );
      if (0 < *(int*)( this + 0x70 )) {
         fVar8 = 0.0;
         lVar2 = 0;
         local_58 = (float)*puVar1 * fVar7;
         fStack_54 = (float)( ( ulong ) * puVar1 >> 0x20 ) * fVar6;
         while (true) {
            fVar6 = fVar6 * *(float*)( (long)( puVar1 + lVar2 * 2 ) + 4 );
            fVar7 = fVar7 * *(float*)( puVar1 + lVar2 * 2 );
            if (( fVar8 < 0.0 ) || ( uStack_50._4_4_ < 0.0 )) {
               _err_print_error("expand_to", "./core/math/rect2.h", 0x100, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
               fVar8 = (float)uStack_50;
            }

            lVar2 = lVar2 + 1;
            fVar9 = fVar7;
            if (local_58 <= fVar7) {
               fVar9 = local_58;
            }

            if (fVar7 <= fVar8 + local_58) {
               fVar7 = fVar8 + local_58;
            }

            fVar10 = fVar6;
            if (fStack_54 <= fVar6) {
               fVar10 = fStack_54;
            }

            if (fVar6 <= uStack_50._4_4_ + fStack_54) {
               fVar6 = uStack_50._4_4_ + fStack_54;
            }

            fVar8 = fVar7 - fVar9;
            uStack_50 = CONCAT44(fVar6 - fVar10, fVar8);
            if (*(int*)( this + 0x70 ) <= (int)lVar2) break;
            puVar1 = *(undefined8**)( this + 0x68 );
            fVar6 = *(float*)( param_2 + 4 );
            fVar7 = *(float*)param_2;
            local_58 = fVar9;
            fStack_54 = fVar10;
         }
;
      }

      auVar4._0_8_ = Vector2::dot((Vector2*)&uStack_50);
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar5._4_12_ = auVar4._4_12_;
      auVar5._0_4_ = ( (float)auVar4._0_8_ * param_1 ) / __LC18;
      uVar3 = auVar5._0_8_;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotConvexPolygonShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&)
   const */undefined1 GodotConvexPolygonShape2D::intersect_segment(GodotConvexPolygonShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   undefined8 uVar1;
   float *pfVar2;
   float *pfVar3;
   int iVar4;
   long lVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar14;
   float local_70;
   undefined1 local_69;
   float local_50;
   float fStack_4c;
   undefined8 local_48;
   long local_40;
   local_50 = (float)*(undefined8*)param_2 - (float)*(undefined8*)param_1;
   fStack_4c = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = Vector2::normalized();
   iVar4 = *(int*)( this + 0x70 );
   if (iVar4 < 1) {
      local_69 = 0;
   }
 else {
      lVar5 = 0;
      local_69 = 0;
      local_70 = _LC1;
      do {
         while (true) {
            fVar7 = (float)*(undefined8*)param_1;
            local_50 = (float)*(undefined8*)param_2 - fVar7;
            fVar9 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
            fStack_4c = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - fVar9;
            pfVar2 = (float*)( (long)( ( (int)lVar5 + 1 ) % iVar4 ) * 0x10 + *(long*)( this + 0x68 ) );
            pfVar3 = (float*)( *(long*)( this + 0x68 ) + lVar5 * 0x10 );
            fVar8 = *pfVar3;
            fVar12 = pfVar3[1];
            fVar11 = *pfVar2;
            fVar13 = pfVar2[1];
            fVar6 = (float)Vector2::dot((Vector2*)&local_50);
            if (0.0 < fVar6) break;
            LAB_0010311f:iVar4 = *(int*)( this + 0x70 );
            lVar5 = lVar5 + 1;
            if (iVar4 <= (int)lVar5) goto LAB_00103270;
         }
;
         fVar12 = fVar12 - fVar9;
         fVar13 = fVar13 - fVar9;
         fVar10 = fStack_4c / fVar6;
         fVar8 = fVar8 - fVar7;
         fVar11 = fVar11 - fVar7;
         fVar6 = local_50 / fVar6;
         fVar7 = fVar12 * fVar6 - fVar8 * fVar10;
         fVar9 = fVar13 * fVar6 - fVar11 * fVar10;
         if (fVar7 < _LC35) {
            if (_LC35 <= fVar9) goto LAB_00103039;
            goto LAB_0010311f;
         }

         if (fVar7 <= _LC34) {
            if (fVar7 == fVar9) goto LAB_0010311f;
            LAB_00103039:fVar14 = _LC34;
            if (_LC34 <= ABS(fVar7) * _LC34) {
               fVar14 = ABS(fVar7) * _LC34;
            }

            if (( ( fVar14 <= ABS(fVar7 - fVar9) ) && ( fVar11 = fVar11 * fVar6 + fVar13 * fVar10 ),fVar11 = ( ( ( fVar8 * fVar6 + fVar12 * fVar10 ) - fVar11 ) * fVar9 ) / ( fVar9 - fVar7 ) + fVar11,0.0 <= fVar11 )) {
               fVar12 = local_50 * fVar11;
               fVar11 = fStack_4c * fVar11;
               uVar1 = *(undefined8*)param_1;
               fVar8 = (float)Vector2::dot((Vector2*)&local_48);
               if (fVar8 < local_70) {
                  local_69 = 1;
                  *(ulong*)param_3 = CONCAT44(fVar11 + (float)( (ulong)uVar1 >> 0x20 ), fVar12 + (float)uVar1);
                  *(undefined8*)param_4 = *(undefined8*)( *(long*)( this + 0x68 ) + 8 + lVar5 * 0x10 );
                  local_70 = fVar8;
               }

            }

            goto LAB_0010311f;
         }

         if (fVar9 <= _LC34) goto LAB_00103039;
         iVar4 = *(int*)( this + 0x70 );
         lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < iVar4 );
   }

   LAB_00103270:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_69;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCircleShape2D::set_data(Variant const&) */void GodotCircleShape2D::set_data(GodotCircleShape2D *this, Variant *param_1) {
   undefined8 *puVar1;
   float fVar2;
   uint uVar3;
   if (*(int*)param_1 - 2U < 2) {
      fVar2 = Variant::operator_cast_to_float(param_1);
      this[0x20] = (GodotCircleShape2D)0x1;
      *(float*)( this + 0x68 ) = fVar2;
      uVar3 = (uint)fVar2 ^ _LC4;
      *(uint*)( this + 0x10 ) = uVar3;
      *(uint*)( this + 0x14 ) = uVar3;
      *(float*)( this + 0x18 ) = fVar2 + fVar2;
      *(float*)( this + 0x1c ) = fVar2 + fVar2;
      for (puVar1 = *(undefined8**)( this + 0x40 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
         ( *(code*)**(undefined8**)puVar1[2] )();
      }

      return;
   }

   _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x124, "Condition \"!p_data.is_num()\" is true.", 0, 0);
   return;
}
/* GodotRectangleShape2D::set_data(Variant const&) */void GodotRectangleShape2D::set_data(GodotRectangleShape2D *this, Variant *param_1) {
   float fVar1;
   float fVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   uint uVar5;
   if (*(int*)param_1 == 5) {
      uVar4 = Variant::operator_cast_to_Vector2(param_1);
      uVar5 = _LC4;
      this[0x20] = (GodotRectangleShape2D)0x1;
      *(undefined8*)( this + 0x68 ) = uVar4;
      fVar1 = *(float*)( this + 0x68 );
      fVar2 = *(float*)( this + 0x6c );
      *(uint*)( this + 0x10 ) = (uint)fVar1 ^ uVar5;
      *(uint*)( this + 0x14 ) = uVar5 ^ (uint)fVar2;
      *(float*)( this + 0x18 ) = fVar1 + fVar1;
      *(float*)( this + 0x1c ) = fVar2 + fVar2;
      for (puVar3 = *(undefined8**)( this + 0x40 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         ( *(code*)**(undefined8**)puVar3[2] )();
      }

      return;
   }

   _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x161, "Condition \"p_data.get_type() != Variant::VECTOR2\" is true.", 0, 0);
   return;
}
/* GodotSeparationRayShape2D::set_data(Variant const&) */void GodotSeparationRayShape2D::set_data(Variant *param_1) {
   undefined8 *puVar1;
   Variant VVar2;
   Variant *pVVar3;
   long in_FS_OFFSET;
   float fVar4;
   Variant local_50[8];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(local_50);
   Variant::Variant((Variant*)local_48, "length");
   pVVar3 = (Variant*)Dictionary::operator [](local_50);
   fVar4 = Variant::operator_cast_to_float(pVVar3);
   *(float*)( param_1 + 0x68 ) = fVar4;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "slide_on_slope");
   pVVar3 = (Variant*)Dictionary::operator [](local_50);
   VVar2 = (Variant)Variant::operator_cast_to_bool(pVVar3);
   param_1[0x6c] = VVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined4*)( param_1 + 0x18 ) = 0x3a83126f;
   param_1[0x20] = (Variant)0x1;
   *(undefined4*)( param_1 + 0x1c ) = *(undefined4*)( param_1 + 0x68 );
   for (puVar1 = *(undefined8**)( param_1 + 0x40 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
      ( *(code*)**(undefined8**)puVar1[2] )();
   }

   Dictionary::~Dictionary((Dictionary*)local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotWorldBoundaryShape2D::set_data(Variant const&) */void GodotWorldBoundaryShape2D::set_data(GodotWorldBoundaryShape2D *this, Variant *param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   int iVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   float fVar8;
   Variant aVStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_1 == 0x1c) {
      Variant::operator_cast_to_Array(aVStack_28);
      iVar6 = Array::size();
      if (iVar6 == 2) {
         pVVar7 = (Variant*)Array::operator []((int)aVStack_28);
         uVar2 = Variant::operator_cast_to_Vector2(pVVar7);
         *(undefined8*)( this + 0x68 ) = uVar2;
         pVVar7 = (Variant*)Array::operator []((int)aVStack_28);
         fVar8 = Variant::operator_cast_to_float(pVVar7);
         this[0x20] = (GodotWorldBoundaryShape2D)0x1;
         *(float*)( this + 0x70 ) = fVar8;
         uVar5 = _UNK_0010b28c;
         uVar4 = _UNK_0010b288;
         uVar3 = _UNK_0010b284;
         *(undefined4*)( this + 0x10 ) = __LC54;
         *(undefined4*)( this + 0x14 ) = uVar3;
         *(undefined4*)( this + 0x18 ) = uVar4;
         *(undefined4*)( this + 0x1c ) = uVar5;
         for (puVar1 = *(undefined8**)( this + 0x40 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
            ( *(code*)**(undefined8**)puVar1[2] )();
         }

         Array::~Array((Array*)aVStack_28);
      }
 else {
         _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x7a, "Condition \"arr.size() != 2\" is true.", 0, 0);
         Array::~Array((Array*)aVStack_28);
      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x78, "Condition \"p_data.get_type() != Variant::ARRAY\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCapsuleShape2D::set_data(Variant const&) */void GodotCapsuleShape2D::set_data(GodotCapsuleShape2D *this, Variant *param_1) {
   undefined8 *puVar1;
   uint uVar2;
   int iVar3;
   Variant *pVVar4;
   long in_FS_OFFSET;
   float fVar5;
   float extraout_XMM0_Da;
   float extraout_XMM0_Db;
   float fVar6;
   Variant aVStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_1 == 0x1c) {
      Variant::operator_cast_to_Array(aVStack_28);
      iVar3 = Array::size();
      if (iVar3 == 2) {
         pVVar4 = (Variant*)Array::operator []((int)aVStack_28);
         fVar5 = Variant::operator_cast_to_float(pVVar4);
         *(float*)( this + 0x6c ) = fVar5;
         pVVar4 = (Variant*)Array::operator []((int)aVStack_28);
         fVar5 = Variant::operator_cast_to_float(pVVar4);
         *(float*)( this + 0x68 ) = fVar5;
         Array::~Array((Array*)aVStack_28);
         fVar5 = *(float*)( this + 0x6c );
         fVar6 = *(float*)( this + 0x68 );
         goto LAB_001036e5;
      }

      _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x1d7, "Condition \"arr.size() != 2\" is true.", 0, 0);
      Array::~Array((Array*)aVStack_28);
   }
 else {
      if (*(int*)param_1 != 5) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x1d3, "Condition \"p_data.get_type() != Variant::ARRAY && p_data.get_type() != Variant::VECTOR2\" is true.", 0, 0);
            return;
         }

         goto LAB_001037ee;
      }

      Variant::operator_cast_to_Vector2(param_1);
      *(float*)( this + 0x68 ) = extraout_XMM0_Da;
      *(float*)( this + 0x6c ) = extraout_XMM0_Db;
      fVar5 = extraout_XMM0_Db;
      fVar6 = extraout_XMM0_Da;
      LAB_001036e5:uVar2 = _LC4;
      fVar5 = fVar5 * __LC56;
      this[0x20] = (GodotCapsuleShape2D)0x1;
      *(ulong*)( this + 0x10 ) = CONCAT44(uVar2 ^ (uint)fVar5, (uint)fVar6 ^ uVar2);
      *(ulong*)( this + 0x18 ) = CONCAT44(fVar5 + fVar5, fVar6 + fVar6);
      for (puVar1 = *(undefined8**)( this + 0x40 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
         ( *(code*)**(undefined8**)puVar1[2] )();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001037ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotSegmentShape2D::set_data(Variant const&) */void GodotSegmentShape2D::set_data(Variant *param_1) {
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   undefined8 *puVar5;
   Variant *in_RSI;
   undefined8 uVar6;
   undefined4 in_XMM1_Da;
   undefined4 in_XMM1_Db;
   float fVar7;
   float fVar8;
   if (*(int*)in_RSI != 7) {
      _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0xdc, "Condition \"p_data.get_type() != Variant::RECT2\" is true.", 0, 0);
      return;
   }

   uVar6 = Variant::operator_cast_to_Rect2(in_RSI);
   *(ulong*)( param_1 + 0x70 ) = CONCAT44(in_XMM1_Db, in_XMM1_Da);
   fVar1 = *(float*)( param_1 + 0x74 );
   *(undefined8*)( param_1 + 0x68 ) = uVar6;
   fVar2 = *(float*)( param_1 + 0x70 );
   fVar3 = *(float*)( param_1 + 0x6c );
   fVar4 = *(float*)( param_1 + 0x68 );
   fVar7 = fVar2;
   if (fVar4 <= fVar2) {
      fVar7 = fVar4;
   }

   *(ulong*)( param_1 + 0x78 ) = CONCAT44(( uint )(fVar2 - fVar4) ^ _LC4, fVar1 - fVar3);
   fVar8 = fVar1;
   if (fVar3 <= fVar1) {
      fVar8 = fVar3;
   }

   if (fVar2 <= fVar4 + 0.0) {
      fVar2 = fVar4 + 0.0;
   }

   if (fVar1 <= fVar3 + 0.0) {
      fVar1 = fVar3 + 0.0;
   }

   fVar3 = fVar2 - fVar7;
   if (fVar2 - fVar7 == 0.0) {
      fVar3 = _LC51;
   }

   fVar2 = fVar1 - fVar8;
   if (fVar1 - fVar8 == 0.0) {
      fVar2 = _LC51;
   }

   param_1[0x20] = (Variant)0x1;
   *(float*)( param_1 + 0x10 ) = fVar7;
   *(float*)( param_1 + 0x14 ) = fVar8;
   *(float*)( param_1 + 0x18 ) = fVar3;
   *(float*)( param_1 + 0x1c ) = fVar2;
   for (puVar5 = *(undefined8**)( param_1 + 0x40 ); puVar5 != (undefined8*)0x0; puVar5 = (undefined8*)*puVar5) {
      ( *(code*)**(undefined8**)puVar5[2] )();
   }

   return;
}
/* GodotSegmentShape2D::intersect_segment(Vector2 const&, Vector2 const&, Vector2&, Vector2&) const
    */undefined8 GodotSegmentShape2D::intersect_segment(GodotSegmentShape2D *this, Vector2 *param_1, Vector2 *param_2, Vector2 *param_3, Vector2 *param_4) {
   float fVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
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
   float local_48;
   float fStack_44;
   long local_40;
   fVar4 = *(float*)( this + 0x68 );
   fVar5 = *(float*)( this + 0x6c );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar6 = (float)*(undefined8*)param_1;
   local_48 = (float)*(undefined8*)param_2 - fVar6;
   fVar8 = (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   fStack_44 = (float)( ( ulong ) * (undefined8*)param_2 >> 0x20 ) - fVar8;
   fVar11 = *(float*)( this + 0x70 );
   fVar1 = *(float*)( this + 0x74 );
   fVar3 = (float)Vector2::dot((Vector2*)&local_48);
   if (0.0 < fVar3) {
      fVar10 = fStack_44 / fVar3;
      fVar3 = local_48 / fVar3;
      fVar7 = ( fVar5 - fVar8 ) * fVar3 - ( fVar4 - fVar6 ) * fVar10;
      fVar9 = ( fVar1 - fVar8 ) * fVar3 - ( fVar11 - fVar6 ) * fVar10;
      if (fVar7 < _LC35) {
         if (_LC35 <= fVar9) goto LAB_00103a33;
      }
 else if (fVar7 <= _LC34) {
         if (fVar7 != fVar9) goto LAB_00103a33;
      }
 else if (fVar9 <= _LC34) {
         LAB_00103a33:fVar12 = _LC34;
         if (_LC34 <= ABS(fVar7) * _LC34) {
            fVar12 = ABS(fVar7) * _LC34;
         }

         if (( ( fVar12 <= ABS(fVar7 - fVar9) ) && ( fVar11 = ( fVar11 - fVar6 ) * fVar3 + ( fVar1 - fVar8 ) * fVar10 ),fVar11 = ( ( ( ( fVar4 - fVar6 ) * fVar3 + ( fVar5 - fVar8 ) * fVar10 ) - fVar11 ) * fVar9 ) / ( fVar9 - fVar7 ) + fVar11,0.0 <= fVar11 )) &&( fVar11 <= _LC16 ) * (ulong*)param_3 = CONCAT44(fVar11 * fStack_44 + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), fVar11 * local_48 + (float)*(undefined8*)param_1);
         fVar4 = (float)Vector2::dot((Vector2*)( this + 0x78 ));
         fVar5 = (float)Vector2::dot((Vector2*)( this + 0x78 ));
         if (fVar4 <= fVar5) {
            *(ulong*)param_4 = CONCAT44(( uint )(( ulong ) * (undefined8*)( this + 0x78 ) >> 0x20) ^ _LC36._4_4_, ( uint ) * (undefined8*)( this + 0x78 ) ^ (uint)_LC36);
         }
 else {
            *(undefined8*)param_4 = *(undefined8*)( this + 0x78 );
         }

         uVar2 = 1;
         goto LAB_00103b22;
      }

   }

}
uVar2 = 0;LAB_00103b22:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar2;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write() [clone .isra.0] */void CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write(CowData<GodotConcavePolygonShape2D::BVH> *this) {
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
   __n = lVar2 * 0x18;
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
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */void CowData<Vector2>::_copy_on_write(CowData<Vector2> *this) {
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
/* GodotShape2D::configure(Rect2 const&) */void GodotShape2D::configure(GodotShape2D *this, Rect2 *param_1) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar2 = *(undefined8*)param_1;
   uVar3 = *(undefined8*)( param_1 + 8 );
   puVar1 = *(undefined8**)( this + 0x40 );
   this[0x20] = (GodotShape2D)0x1;
   *(undefined8*)( this + 0x10 ) = uVar2;
   *(undefined8*)( this + 0x18 ) = uVar3;
   for (; puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
      ( *(code*)**(undefined8**)puVar1[2] )();
   }

   return;
}
/* GodotShape2D::remove_owner(GodotShapeOwner2D*) */long GodotShape2D::remove_owner(GodotShape2D *this, GodotShapeOwner2D *param_1) {
   int *piVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
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
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   ulong uVar37;
   long lVar38;
   long lVar39;
   ulong uVar40;
   ulong uVar41;
   ulong uVar42;
   long *plVar43;
   uint uVar44;
   uint uVar45;
   uint uVar46;
   ulong uVar47;
   uint *puVar48;
   lVar38 = *(long*)( this + 0x30 );
   if (( lVar38 != 0 ) && ( *(int*)( this + 0x54 ) != 0 )) {
      lVar7 = *(long*)( this + 0x38 );
      uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 );
      uVar41 = CONCAT44(0, uVar6);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x50 ) * 8 );
      uVar37 = (long)param_1 * 0x3ffff - 1;
      uVar37 = ( uVar37 ^ uVar37 >> 0x1f ) * 0x15;
      uVar37 = ( uVar37 ^ uVar37 >> 0xb ) * 0x41;
      uVar37 = uVar37 >> 0x16 ^ uVar37;
      uVar47 = uVar37 & 0xffffffff;
      if ((int)uVar37 == 0) {
         uVar47 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar47 * lVar8;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar41;
      lVar39 = SUB168(auVar11 * auVar24, 8);
      uVar44 = *(uint*)( lVar7 + lVar39 * 4 );
      uVar46 = SUB164(auVar11 * auVar24, 8);
      if (uVar44 != 0) {
         uVar45 = 0;
         while (( (uint)uVar47 != uVar44 || ( lVar39 = *(long*)( lVar38 + lVar39 * 8 ) * (GodotShapeOwner2D**)( lVar39 + 0x10 ) != param_1 ) )) {
            uVar45 = uVar45 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(uVar46 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar41;
            lVar39 = SUB168(auVar12 * auVar25, 8);
            uVar44 = *(uint*)( lVar7 + lVar39 * 4 );
            uVar46 = SUB164(auVar12 * auVar25, 8);
            if (( uVar44 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar41,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar6 + uVar46 ) - SUB164(auVar13 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar41,SUB164(auVar14 * auVar27, 8) < uVar45) goto LAB_00104140;
         }
;
         lVar9 = *(long*)( lVar38 + (ulong)uVar46 * 8 );
         if (lVar9 != 0) {
            piVar1 = (int*)( lVar9 + 0x18 );
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
               uVar37 = *(long*)( lVar9 + 0x10 ) * 0x3ffff - 1;
               uVar37 = ( uVar37 ^ uVar37 >> 0x1f ) * 0x15;
               uVar37 = ( uVar37 ^ uVar37 >> 0xb ) * 0x41;
               uVar37 = uVar37 >> 0x16 ^ uVar37;
               uVar47 = uVar37 & 0xffffffff;
               if ((int)uVar37 == 0) {
                  uVar47 = 1;
               }

               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar47 * lVar8;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar41;
               auVar15 = auVar15 * auVar28;
               lVar39 = auVar15._0_8_;
               uVar44 = *(uint*)( lVar7 + auVar15._8_8_ * 4 );
               uVar37 = (ulong)auVar15._8_4_;
               if (uVar44 != 0) {
                  uVar46 = 0;
                  uVar42 = auVar15._8_8_;
                  do {
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )((int)uVar37 + 1) * lVar8;
                     auVar31._8_8_ = 0;
                     auVar31._0_8_ = uVar41;
                     auVar18 = auVar18 * auVar31;
                     uVar40 = auVar18._8_8_;
                     lVar39 = auVar18._0_8_;
                     uVar45 = auVar18._8_4_;
                     if (( (uint)uVar47 == uVar44 ) && ( lVar39 = *(long*)( lVar38 + uVar42 * 8 ) * (long*)( lVar9 + 0x10 ) == *(long*)( lVar39 + 0x10 ) )) {
                        puVar48 = (uint*)( lVar7 + uVar40 * 4 );
                        uVar44 = *puVar48;
                        if (( uVar44 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar44 * lVar8,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar6 + uVar45 ) - SUB164(auVar19 * auVar32, 8)) * lVar8,auVar33._8_8_ = 0,auVar33._0_8_ = uVar41,SUB164(auVar20 * auVar33, 8) != 0) {
                           uVar47 = uVar37;
                           uVar37 = (ulong)uVar45;
                           while (true) {
                              puVar2 = (uint*)( lVar7 + uVar47 * 4 );
                              *puVar48 = *puVar2;
                              puVar3 = (undefined8*)( lVar38 + uVar40 * 8 );
                              *puVar2 = uVar44;
                              puVar4 = (undefined8*)( lVar38 + uVar47 * 8 );
                              uVar10 = *puVar3;
                              *puVar3 = *puVar4;
                              *puVar4 = uVar10;
                              auVar23._8_8_ = 0;
                              auVar23._0_8_ = ( ulong )((int)uVar37 + 1) * lVar8;
                              auVar36._8_8_ = 0;
                              auVar36._0_8_ = uVar41;
                              uVar40 = SUB168(auVar23 * auVar36, 8);
                              puVar48 = (uint*)( lVar7 + uVar40 * 4 );
                              uVar44 = *puVar48;
                              if (( uVar44 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar44 * lVar8,auVar34._8_8_ = 0,auVar34._0_8_ = uVar41,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( SUB164(auVar23 * auVar36, 8) + uVar6 ) - SUB164(auVar21 * auVar34, 8)) * lVar8,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,SUB164(auVar22 * auVar35, 8) == 0) break;
                              uVar47 = uVar37;
                              uVar37 = uVar40 & 0xffffffff;
                           }
;
                        }

                        plVar5 = (long*)( lVar38 + uVar37 * 8 );
                        *(undefined4*)( lVar7 + uVar37 * 4 ) = 0;
                        plVar43 = (long*)*plVar5;
                        if (*(long**)( this + 0x40 ) == plVar43) {
                           *(long*)( this + 0x40 ) = *plVar43;
                           plVar43 = (long*)*plVar5;
                        }

                        if (*(long**)( this + 0x48 ) == plVar43) {
                           *(long*)( this + 0x48 ) = plVar43[1];
                           plVar43 = (long*)*plVar5;
                        }

                        if ((long*)plVar43[1] != (long*)0x0) {
                           *(long*)plVar43[1] = *plVar43;
                           plVar43 = (long*)*plVar5;
                        }

                        if (*plVar43 != 0) {
                           *(long*)( *plVar43 + 8 ) = plVar43[1];
                           plVar43 = (long*)*plVar5;
                        }

                        Memory::free_static(plVar43, false);
                        lVar38 = *(long*)( this + 0x30 );
                        *(undefined8*)( lVar38 + uVar37 * 8 ) = 0;
                        *(int*)( this + 0x54 ) = *(int*)( this + 0x54 ) + -1;
                        return lVar38;
                     }

                     uVar44 = *(uint*)( lVar7 + uVar40 * 4 );
                     uVar37 = uVar40 & 0xffffffff;
                     uVar46 = uVar46 + 1;
                  }
 while ( ( uVar44 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar44 * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar41,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar6 + uVar45 ) - SUB164(auVar16 * auVar29, 8)) * lVar8,auVar30._8_8_ = 0,auVar30._0_8_ = uVar41,lVar39 = SUB168(auVar17 * auVar30, 0),uVar42 = uVar40,uVar46 <= SUB164(auVar17 * auVar30, 8) );
               }

            }

            return lVar39;
         }

      }

   }

   LAB_00104140:lVar38 = _err_print_error("remove_owner", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x3e, "Condition \"!E\" is true.", 0, 0);
   return lVar38;
}
/* GodotShape2D::is_owner(GodotShapeOwner2D*) const */undefined8 GodotShape2D::is_owner(GodotShape2D *this, GodotShapeOwner2D *param_1) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   int iVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 0x30 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x54 ) != 0) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x50 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x38 ) + lVar12 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( (uint)uVar13 == uVar14 ) && ( *(GodotShapeOwner2D**)( *(long*)( *(long*)( this + 0x30 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x38 ) + lVar12 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar14 == 0) {
               return 0;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar14 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
         }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* GodotShape2D::get_owners() const */GodotShape2D * __thiscall GodotShape2D::get_owners(GodotShape2D *this){
   return this + 0x28;
}
/* GodotShape2D::~GodotShape2D() */void GodotShape2D::~GodotShape2D(GodotShape2D *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   *(undefined***)this = &PTR___cxa_pure_virtual_0010ac00;
   if (*(int*)( this + 0x54 ) == 0) {
      pvVar3 = *(void**)( this + 0x30 );
   }
 else {
      _err_print_error("~GodotShape2D", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x4e, "Condition \"owners.size()\" is true.", 0, 0);
      pvVar3 = *(void**)( this + 0x30 );
      if (pvVar3 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x54 ) == 0) goto LAB_001042f9;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x54 ) = 0;
         *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
         goto LAB_001042f9;
      }

      lVar2 = 0;
      do {
         if (*(int*)( *(long*)( this + 0x38 ) + lVar2 ) != 0) {
            *(int*)( *(long*)( this + 0x38 ) + lVar2 ) = 0;
            Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
            pvVar3 = *(void**)( this + 0x30 );
            *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
         }

         lVar2 = lVar2 + 4;
      }
 while ( lVar2 != (ulong)uVar1 * 4 );
      *(undefined4*)( this + 0x54 ) = 0;
      *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   }

   if (pvVar3 == (void*)0x0) {
      return;
   }

   LAB_001042f9:Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x38 ), false);
   return;
}
/* GodotConvexPolygonShape2D::~GodotConvexPolygonShape2D() */void GodotConvexPolygonShape2D::~GodotConvexPolygonShape2D(GodotConvexPolygonShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010af80;
   if (*(void**)( this + 0x68 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x68 ), true);
   }

   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotConcavePolygonShape2D::cull(Rect2 const&, bool (*)(void*, GodotShape2D*), void*) const */void GodotConcavePolygonShape2D::cull(GodotConcavePolygonShape2D *this, Rect2 *param_1, _func_bool_void_ptr_GodotShape2D_ptr *param_2, void *param_3) {
   int *piVar1;
   float *pfVar2;
   float *pfVar3;
   float fVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   code *pcVar10;
   long lVar11;
   GodotShape2D **ppGVar12;
   bool bVar13;
   GodotShape2D *pGVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   float fVar18;
   GodotShape2D **ppGVar19;
   long lVar21;
   GodotShape2D *pGVar22;
   GodotShape2D *pGVar23;
   undefined4 *puVar24;
   int iVar25;
   long in_FS_OFFSET;
   GodotShape2D *local_118;
   GodotShape2D *local_110;
   undefined8 local_108;
   float fStack_100;
   float fStack_fc;
   long local_f8;
   long local_f0;
   void *local_e8;
   _func_bool_void_ptr_GodotShape2D_ptr *local_e0;
   undefined8 local_d0;
   undefined **local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   GodotShape2D **ppGVar20;
   ppGVar19 = &local_118;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar16 = (long)*(int*)( this + 0x98 ) * 4 + 0x17;
   ppGVar20 = &local_118;
   ppGVar12 = &local_118;
   while (ppGVar20 != (GodotShape2D**)( (long)&local_118 - ( uVar16 & 0xfffffffffffff000 ) )) {
      ppGVar19 = (GodotShape2D**)( (long)ppGVar12 + -0x1000 );
      *(undefined8*)( (long)ppGVar12 + -8 ) = *(undefined8*)( (long)ppGVar12 + -8 );
      ppGVar20 = (GodotShape2D**)( (long)ppGVar12 + -0x1000 );
      ppGVar12 = (GodotShape2D**)( (long)ppGVar12 + -0x1000 );
   }
;
   uVar16 = ( ulong )((uint)uVar16 & 0xff0);
   lVar11 = -uVar16;
   if (uVar16 != 0) {
      *(undefined8*)( (long)ppGVar19 + -8 ) = *(undefined8*)( (long)ppGVar19 + -8 );
   }

   lVar5 = *(long*)( this + 0x70 );
   puVar24 = (undefined4*)( ( ulong )((long)ppGVar19 + lVar11 + 0xf) & 0xfffffffffffffff0 );
   local_e8 = param_3;
   local_e0 = param_2;
   if (( ( ( ( lVar5 != 0 ) && ( lVar21 = *(long*)( lVar5 + -8 ) ),lVar21 != 0 ) ) && ( lVar6 = *(long*)( this + 0x80 ) ),lVar6 != 0 )) {
      if (lVar21 < 1) {
         *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 1;
         *(undefined8*)( (long)ppGVar19 + lVar11 + -0x10 ) = 0;
         *(undefined**)( (long)ppGVar19 + lVar11 + -0x18 ) = &_LC29;
         *(char**)( (long)ppGVar19 + lVar11 + -0x20 ) = "size()";
      }
 else if (lVar7 < 1) {
         *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 1;
         *(undefined8*)( (long)ppGVar19 + lVar11 + -0x10 ) = 0;
         *(undefined**)( (long)ppGVar19 + lVar11 + -0x18 ) = &_LC29;
         *(char**)( (long)ppGVar19 + lVar11 + -0x20 ) = "size()";
         lVar21 = lVar7;
      }
 else {
         if (0 < lVar9) {
            *puVar24 = 0;
            iVar25 = 0;
            pGVar22 = (GodotShape2D*)0x0;
            fVar18 = 0.0;
            local_f8 = lVar6;
            local_f0 = lVar5;
            LAB_00104520:while (true) {
               uVar15 = (uint)fVar18 >> 0x1d;
               uVar17 = (uint)fVar18 & 0x1fffffff;
               pGVar23 = (GodotShape2D*)( puVar24 + (long)pGVar22 );
               pGVar14 = (GodotShape2D*)( lVar8 + (ulong)uVar17 * 0x18 );
               if (uVar15 != 2) break;
               fVar18 = *(float*)( pGVar14 + 0x14 );
               uVar17 = uVar17 | 0x60000000;
               LAB_00104564:iVar25 = iVar25 + 1;
               *(ulong*)pGVar23 = CONCAT44(fVar18, uVar17);
               pGVar14 = pGVar22 + 1;
               pGVar22 = (GodotShape2D*)(long)iVar25;
               fVar18 = (float)puVar24[(long)pGVar14];
            }
;
            if (2 < uVar15) {
               do {} while ( uVar15 != 3 );
               if (iVar25 == 0) goto LAB_001046c8;
               iVar25 = iVar25 + -1;
               fVar18 = (float)puVar24[(long)( pGVar22 + -1 )];
               pGVar22 = (GodotShape2D*)(long)iVar25;
               goto LAB_00104520;
            }

            if (uVar15 != 0) {
               fVar18 = *(float*)( pGVar14 + 0x10 );
               uVar17 = uVar17 | 0x40000000;
               goto LAB_00104564;
            }

            if (( ( *(float*)( param_1 + 8 ) <= 0.0 && *(float*)( param_1 + 8 ) != 0.0 ) || ( *(float*)( param_1 + 0xc ) <= 0.0 && *(float*)( param_1 + 0xc ) != 0.0 ) ) || ( ( fVar4 = *(float*)( pGVar14 + 8 ) ),fVar4 < 0.0 || ( *(float*)( pGVar14 + 0xc ) <= 0.0 && *(float*)( pGVar14 + 0xc ) != 0.0 ) )) {
               *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x10480a;
               local_118 = pGVar22;
               local_110 = pGVar14;
               local_108 = pGVar23;
               _err_print_error("intersects", "./core/math/rect2.h", 0x39, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
               fVar4 = *(float*)( local_110 + 8 );
               pGVar14 = local_110;
               pGVar22 = local_118;
               pGVar23 = local_108;
            }

            if (( fVar4 + *(float*)pGVar14 <= *(float*)param_1 ) || ( *(float*)param_1 + *(float*)( param_1 + 8 ) <= *(float*)pGVar14 )) {
               LAB_001047c0:fVar18 = (float)( uVar17 | 0x60000000 );
               *(float*)pGVar23 = fVar18;
               goto LAB_00104520;
            }

            if (( *(float*)( pGVar14 + 0xc ) + *(float*)( pGVar14 + 4 ) <= *(float*)( param_1 + 4 ) ) || ( *(float*)( param_1 + 4 ) + *(float*)( param_1 + 0xc ) <= *(float*)( pGVar14 + 4 ) )) goto LAB_001047c0;
            if (-1 < (int)*(float*)( pGVar14 + 0x10 )) {
               *(uint*)pGVar23 = uVar17 | 0x20000000;
               fVar18 = (float)( uVar17 | 0x20000000 );
               goto LAB_00104520;
            }

            piVar1 = (int*)( local_f0 + (long)(int)*(float*)( pGVar14 + 0x14 ) * 8 );
            pfVar2 = (float*)( local_f8 + (long)piVar1[1] * 8 );
            pfVar3 = (float*)( local_f8 + (long)*piVar1 * 8 );
            fStack_100 = *pfVar2;
            fStack_fc = pfVar2[1];
            local_108 = *(GodotShape2D**)pfVar3;
            local_d0 = CONCAT44(( uint )(fStack_100 - *pfVar3) ^ _LC4, fStack_fc - pfVar3[1]);
            *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x104600;
            local_118 = pGVar22;
            local_110 = pGVar23;
            local_50 = Vector2::normalized();
            uStack_58 = CONCAT44(fStack_fc, fStack_100);
            local_c8 = &PTR_get_type_0010ad80;
            local_98 = (undefined1[16])0x0;
            local_88 = (undefined1[16])0x0;
            local_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 0;
            local_78 = 2;
            local_70 = __LC66;
            uStack_68 = _UNK_0010b298;
            local_60 = local_108;
            *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x10468f;
            local_108 = (GodotShape2D*)&local_c8;
            bVar13 = ( *local_e0 )(local_e8, (GodotShape2D*)&local_c8);
            pGVar14 = local_108;
            pGVar22 = local_110;
            if (!bVar13) {
               local_110 = local_118;
               *(uint*)pGVar22 = uVar17 | 0x60000000;
               local_108 = (GodotShape2D*)( CONCAT44(local_108._4_4_, fVar18) & 0xffffffff1fffffff | 0x60000000 );
               local_c8 = &PTR_get_type_0010ad80;
               *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x104855;
               GodotShape2D::~GodotShape2D(pGVar14);
               pGVar22 = local_110;
               fVar18 = (float)local_108;
               goto LAB_00104520;
            }

            local_c8 = &PTR_get_type_0010ad80;
            *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x1046c2;
            GodotShape2D::~GodotShape2D(local_108);
            goto LAB_001046c8;
         }

         *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 1;
         *(undefined8*)( (long)ppGVar19 + lVar11 + -0x10 ) = 0;
         *(undefined**)( (long)ppGVar19 + lVar11 + -0x18 ) = &_LC29;
         *(char**)( (long)ppGVar19 + lVar11 + -0x20 ) = "size()";
         lVar21 = lVar9;
      }

      *(undefined8*)( (long)ppGVar19 + lVar11 + -0x28 ) = 0x1048a8;
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar21, "p_index", *(char**)( (long)ppGVar19 + lVar11 + -0x20 ), *(char**)( (long)ppGVar19 + lVar11 + -0x18 ), *(bool*)( (long)ppGVar19 + lVar11 + -0x10 ), *(bool*)( (long)ppGVar19 + lVar11 + -8 ));
      *(undefined8*)( (long)ppGVar19 + lVar11 + -8 ) = 0x1048b1;
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar10 = (code*)invalidInstructionException();
      ( *pcVar10 )();
   }

   LAB_001046c8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      *(undefined**)( (long)ppGVar19 + lVar11 + -8 ) = &UNK_001048fd;
      __stack_chk_fail();
   }

   return;
}
/* GodotConvexPolygonShape2D::~GodotConvexPolygonShape2D() */void GodotConvexPolygonShape2D::~GodotConvexPolygonShape2D(GodotConvexPolygonShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010af80;
   if (*(void**)( this + 0x68 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x68 ), true);
   }

   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x78);
   return;
}
/* GodotShape2D::~GodotShape2D() */void GodotShape2D::~GodotShape2D(GodotShape2D *this) {
   ~GodotShape2D(this)
   ;;
   operator_delete(this, 0x68);
   return;
}
/* GodotShape2D::add_owner(GodotShapeOwner2D*) */void GodotShape2D::add_owner(GodotShape2D *this, GodotShapeOwner2D *param_1) {
   int *piVar1;
   long lVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   undefined4 *puVar13;
   uint uVar14;
   long lVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   GodotShapeOwner2D *local_40[2];
   lVar2 = *(long*)( this + 0x30 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x54 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ));
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x50 ) * 8 );
      uVar12 = (long)param_1 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar16 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar16 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar16 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      lVar15 = SUB168(auVar4 * auVar8, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x38 ) + lVar15 * 4 );
      uVar14 = SUB164(auVar4 * auVar8, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         while (( (uint)uVar16 != uVar17 || ( param_1 != *(GodotShapeOwner2D**)( *(long*)( lVar2 + lVar15 * 8 ) + 0x10 ) ) )) {
            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar14 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar18;
            lVar15 = SUB168(auVar5 * auVar9, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x38 ) + lVar15 * 4 );
            uVar14 = SUB164(auVar5 * auVar9, 8);
            if (( uVar17 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar17 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ) + uVar14 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,SUB164(auVar7 * auVar11, 8) < uVar19) goto LAB_00104a90;
         }
;
         lVar2 = *(long*)( lVar2 + (ulong)uVar14 * 8 );
         if (lVar2 != 0) {
            piVar1 = (int*)( lVar2 + 0x18 );
            *piVar1 = *piVar1 + 1;
            return;
         }

      }

   }

   LAB_00104a90:local_40[0] = param_1;
   puVar13 = (undefined4*)HashMap<GodotShapeOwner2D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner2D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner2D*,int>>>::operator []((HashMap<GodotShapeOwner2D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner2D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner2D*,int>>>*)( this + 0x28 ), local_40);
   *puVar13 = 1;
   return;
}
/* GodotConvexPolygonShape2D::set_data(Variant const&) */void GodotConvexPolygonShape2D::set_data(GodotConvexPolygonShape2D *this, Variant *param_1) {
   long *plVar1;
   float fVar2;
   Point *pPVar3;
   Point *pPVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 uVar7;
   float *pfVar8;
   int iVar9;
   long lVar10;
   long lVar11;
   Point *pPVar12;
   int iVar13;
   long in_FS_OFFSET;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   Variant local_58[8];
   undefined8 *local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar13 = *(int*)param_1;
   if (( iVar13 != 0x20 ) && ( iVar13 != 0x23 )) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = 0x23f;
         pcVar6 = "Condition \"p_data.get_type() != Variant::PACKED_VECTOR2_ARRAY && p_data.get_type() != Variant::PACKED_FLOAT32_ARRAY\" is true.";
         goto LAB_00104e86;
      }

      goto LAB_00104f7b;
   }

   if (*(void**)( this + 0x68 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x68 ), true);
      iVar13 = *(int*)param_1;
   }

   *(undefined8*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   if (iVar13 == 0x23) {
      Variant::operator_cast_to_Vector(local_58);
      if (local_50 == (undefined8*)0x0) {
         uVar7 = 0x24a;
         pcVar6 = "Condition \"arr.is_empty()\" is true.";
         goto LAB_00104ecc;
      }

      uVar7 = local_50[-1];
      *(int*)( this + 0x70 ) = (int)uVar7;
      pPVar3 = memnew_arr_template<GodotConvexPolygonShape2D::Point>((long)(int)uVar7);
      iVar13 = *(int*)( this + 0x70 );
      *(Point**)( this + 0x68 ) = pPVar3;
      if (0 < iVar13) {
         puVar5 = local_50;
         pPVar12 = pPVar3;
         do {
            uVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            *(undefined8*)pPVar12 = uVar7;
            pPVar12 = pPVar12 + 0x10;
         }
 while ( local_50 + iVar13 != puVar5 );
         lVar11 = 0;
         while (true) {
            pPVar12 = pPVar3 + lVar11 * 0x10;
            local_48 = CONCAT44(( uint )(*(float*)( pPVar3 + (long)( ( (int)lVar11 + 1 ) % iVar13 ) * 0x10 ) - *(float*)pPVar12) ^ _LC4, *(float*)( pPVar3 + (long)( ( (int)lVar11 + 1 ) % iVar13 ) * 0x10 + 4 ) - *(float*)( pPVar12 + 4 ));
            uVar7 = Vector2::normalized();
            iVar13 = *(int*)( this + 0x70 );
            *(undefined8*)( pPVar12 + 8 ) = uVar7;
            if (iVar13 <= (int)( lVar11 + 1 )) break;
            pPVar3 = *(Point**)( this + 0x68 );
            lVar11 = lVar11 + 1;
         }
;
      }

      puVar5 = local_50;
      if (local_50 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_50 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = (undefined8*)0x0;
            Memory::free_static(puVar5 + -2, false);
            iVar13 = *(int*)( this + 0x70 );
         }
 else {
            iVar13 = *(int*)( this + 0x70 );
         }

      }

      LAB_00104bf4:if (iVar13 == 0) {
         LAB_00104e60:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = 0x269;
            pcVar6 = "Condition \"point_count == 0\" is true.";
            LAB_00104e86:_err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", uVar7, pcVar6, 0, 0);
            return;
         }

         goto LAB_00104f7b;
      }

      LAB_00104bfc:pfVar8 = *(float**)( this + 0x68 );
      fVar18 = *pfVar8;
      fVar19 = pfVar8[1];
      if (iVar13 < 2) {
         fVar17 = 0.0;
         fVar14 = 0.0;
      }
 else {
         fVar17 = 0.0;
         lVar11 = 0x10;
         iVar13 = 1;
         fVar14 = 0.0;
         while (true) {
            if (( fVar14 < 0.0 ) || ( fVar17 < 0.0 )) {
               _err_print_error("expand_to", "./core/math/rect2.h", 0x100, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            }

            fVar15 = *(float*)( (long)pfVar8 + lVar11 );
            fVar14 = fVar14 + fVar18;
            iVar13 = iVar13 + 1;
            fVar2 = ( (float*)( (long)pfVar8 + lVar11 ) )[1];
            lVar11 = lVar11 + 0x10;
            fVar16 = fVar15;
            if (fVar18 <= fVar15) {
               fVar16 = fVar18;
            }

            fVar18 = fVar16;
            if (fVar15 <= fVar14) {
               fVar15 = fVar14;
            }

            fVar16 = fVar2;
            if (fVar2 <= fVar17 + fVar19) {
               fVar16 = fVar17 + fVar19;
            }

            if (fVar19 <= fVar2) {
               fVar2 = fVar19;
            }

            fVar19 = fVar2;
            fVar14 = fVar15 - fVar18;
            fVar17 = fVar16 - fVar19;
            if (*(int*)( this + 0x70 ) <= iVar13) break;
            pfVar8 = *(float**)( this + 0x68 );
         }
;
      }

      LAB_00104ca2:puVar5 = *(undefined8**)( this + 0x40 );
      this[0x20] = (GodotConvexPolygonShape2D)0x1;
      *(float*)( this + 0x10 ) = fVar18;
      *(float*)( this + 0x14 ) = fVar19;
      *(float*)( this + 0x18 ) = fVar14;
      *(float*)( this + 0x1c ) = fVar17;
      for (; puVar5 != (undefined8*)0x0; puVar5 = (undefined8*)*puVar5) {
         ( *(code*)**(undefined8**)puVar5[2] )();
      }

   }
 else {
      Variant::operator_cast_to_Vector(local_58);
      if (local_50 == (undefined8*)0x0) {
         *(undefined4*)( this + 0x70 ) = 0;
      }
 else {
         lVar11 = local_50[-1];
         lVar10 = lVar11 + 3;
         if (-1 < lVar11) {
            lVar10 = lVar11;
         }

         iVar13 = (int)( lVar10 >> 2 );
         *(int*)( this + 0x70 ) = iVar13;
         if (iVar13 != 0) {
            pPVar3 = memnew_arr_template<GodotConvexPolygonShape2D::Point>((long)iVar13);
            puVar5 = local_50;
            iVar13 = *(int*)( this + 0x70 );
            *(Point**)( this + 0x68 ) = pPVar3;
            if (0 < iVar13) {
               iVar9 = 0;
               pPVar12 = pPVar3;
               do {
                  lVar10 = (long)iVar9;
                  pPVar4 = pPVar12 + 0x10;
                  iVar9 = iVar9 + 4;
                  lVar11 = lVar10 * 4;
                  *(undefined4*)pPVar12 = *(undefined4*)( (long)local_50 + lVar10 * 4 );
                  for (int i = 0; i < 3; i++) {
                     *(undefined4*)( pPVar12 + ( 4*i + 4 ) ) = *(undefined4*)( (long)local_50 + lVar11 + ( 4*i + 4 ) );
                  }

                  pPVar12 = pPVar4;
               }
 while ( pPVar3 + (long)iVar13 * 0x10 != pPVar4 );
               if (local_50 != (undefined8*)0x0) goto LAB_00104bd0;
               goto LAB_00104bfc;
            }

            if (local_50 != (undefined8*)0x0) {
               LAB_00104bd0:LOCK();
               plVar1 = local_50 + -2;
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_50 = (undefined8*)0x0;
                  Memory::free_static(puVar5 + -2, false);
               }

               iVar13 = *(int*)( this + 0x70 );
               goto LAB_00104bf4;
            }

            if (iVar13 == 0) goto LAB_00104e60;
            fVar17 = 0.0;
            fVar18 = *(float*)pPVar3;
            fVar19 = *(float*)( pPVar3 + 4 );
            fVar14 = 0.0;
            goto LAB_00104ca2;
         }

      }

      uVar7 = 0x25b;
      pcVar6 = "Condition \"point_count == 0\" is true.";
      LAB_00104ecc:_err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", uVar7, pcVar6, 0, 0);
      puVar5 = local_50;
      if (local_50 != (undefined8*)0x0) {
         LOCK();
         plVar1 = local_50 + -2;
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = (undefined8*)0x0;
            Memory::free_static(puVar5 + -2, false);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104f7b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] */void CowData<Vector2>::resize<false>(CowData<Vector2> *this, long param_1) {
   long *plVar1;
   int iVar2;
   CowData<Vector2> *pCVar3;
   ulong uVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined8 uVar7;
   CowData<Vector2> *pCVar8;
   CowData<Vector2> *pCVar9;
   long lVar10;
   long lVar11;
   undefined8 *puVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar10 = *(long*)this;
   if (lVar10 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar11 = 0;
      pCVar3 = (CowData<Vector2>*)0x0;
   }
 else {
      lVar11 = *(long*)( lVar10 + -8 );
      if (param_1 == lVar11) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar10 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar10 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar3 = (CowData<Vector2>*)( lVar11 * 8 );
      if (pCVar3 != (CowData<Vector2>*)0x0) {
         uVar4 = ( ulong )(pCVar3 + -1) | ( ulong )(pCVar3 + -1) >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         pCVar3 = (CowData<Vector2>*)( ( uVar4 | uVar4 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar9 = (CowData<Vector2>*)( uVar4 | uVar4 >> 0x20 );
      pCVar8 = pCVar9 + 1;
      if (pCVar8 != (CowData<Vector2>*)0x0) {
         if (param_1 <= lVar11) {
            if (( pCVar8 != pCVar3 ) && ( iVar2 = iVar2 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_001082f6();
            return;
         }

         if (pCVar8 == pCVar3) {
            LAB_0010512c:puVar12 = *(undefined8**)this;
            if (puVar12 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

            lVar10 = puVar12[-1];
            if (param_1 <= lVar10) goto LAB_001050bd;
         }
 else {
            if (lVar11 != 0) {
               pCVar9 = this;
               iVar2 = _realloc(this, (long)pCVar8);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_0010512c;
            }

            puVar5 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
            if (puVar5 == (undefined8*)0x0) {
               uVar7 = 0x171;
               pcVar6 = "Parameter \"mem_new\" is null.";
               goto LAB_001051d2;
            }

            puVar12 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar12;
            lVar10 = 0;
         }

         memset(puVar12 + lVar10, 0, ( param_1 - lVar10 ) * 8);
         LAB_001050bd:puVar12[-1] = param_1;
         return;
      }

   }

   uVar7 = 0x16a;
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_001051d2:_err_print_error("resize", "./core/templates/cowdata.h", uVar7, pcVar6, 0, 0);
   return;
}
/* GodotConcavePolygonShape2D::get_data() const */void GodotConcavePolygonShape2D::get_data(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   long in_RSI;
   ulong uVar9;
   Variant *in_RDI;
   long lVar10;
   long in_FS_OFFSET;
   Vector aVStack_48[8];
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40[0] = 0;
   if (*(long*)( in_RSI + 0x70 ) == 0) {
      CowData<Vector2>::resize<false>((CowData<Vector2>*)local_40, 0);
      CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_40);
   }
 else {
      iVar6 = (int)*(undefined8*)( *(long*)( in_RSI + 0x70 ) + -8 );
      CowData<Vector2>::resize<false>((CowData<Vector2>*)local_40, (long)( iVar6 * 2 ));
      CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_40);
      if (0 < iVar6) {
         lVar2 = *(long*)( in_RSI + 0x70 );
         if (lVar2 == 0) {
            uVar9 = 0;
            lVar10 = 0;
         }
 else {
            lVar3 = *(long*)( lVar2 + -8 );
            uVar9 = 0;
            uVar7 = 0;
            lVar10 = lVar3;
            if (0 < lVar3) {
               while (true) {
                  uVar9 = ( ulong ) * (int*)( lVar2 + uVar7 * 8 );
                  lVar4 = *(long*)( in_RSI + 0x80 );
                  if ((long)uVar9 < 0) break;
                  if (lVar4 == 0) goto LAB_001053b8;
                  lVar10 = *(long*)( lVar4 + -8 );
                  if (lVar10 <= (long)uVar9) goto LAB_0010532e;
                  lVar8 = (long)( (int)uVar7 * 2 );
                  *(undefined8*)( local_40[0] + lVar8 * 8 ) = *(undefined8*)( lVar4 + uVar9 * 8 );
                  uVar9 = ( ulong ) * (int*)( lVar2 + 4 + uVar7 * 8 );
                  if (( lVar10 <= (long)uVar9 ) || ( (long)uVar9 < 0 )) goto LAB_0010532e;
                  lVar10 = uVar9 * 8;
                  uVar9 = uVar7 + 1;
                  *(undefined8*)( local_40[0] + 8 + lVar8 * 8 ) = *(undefined8*)( lVar4 + lVar10 );
                  if (uVar7 == iVar6 - 1) goto LAB_001053d7;
                  uVar7 = uVar9;
                  lVar10 = lVar3;
                  if (lVar3 <= (long)uVar9) goto LAB_0010532e;
               }
;
               if (lVar4 == 0) {
                  LAB_001053b8:lVar10 = 0;
               }
 else {
                  lVar10 = *(long*)( lVar4 + -8 );
               }

            }

         }

         LAB_0010532e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar9, lVar10, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

   }

   LAB_001053d7:Variant::Variant(in_RDI, aVStack_48);
   lVar2 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_40[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotConvexPolygonShape2D::get_data() const */void GodotConvexPolygonShape2D::get_data(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_RSI;
   Variant *in_RDI;
   long lVar4;
   long in_FS_OFFSET;
   Vector aVStack_48[8];
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40[0] = 0;
   CowData<Vector2>::resize<false>((CowData<Vector2>*)local_40, (long)*(int*)( in_RSI + 0x70 ));
   if (0 < *(int*)( in_RSI + 0x70 )) {
      lVar3 = 0;
      do {
         lVar2 = *(long*)( in_RSI + 0x68 );
         if (local_40[0] == 0) {
            lVar4 = 0;
            LAB_00105503:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
         }
 else {
            lVar4 = *(long*)( local_40[0] + -8 );
            if (lVar4 <= lVar3) goto LAB_00105503;
            CowData<Vector2>::_copy_on_write((CowData<Vector2>*)local_40);
            *(undefined8*)( local_40[0] + lVar3 * 8 ) = *(undefined8*)( lVar3 * 0x10 + lVar2 );
         }

         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 < *(int*)( in_RSI + 0x70 ) );
   }

   Variant::Variant(in_RDI, aVStack_48);
   lVar3 = local_40[0];
   if (local_40[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_40[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40[0] = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<GodotConcavePolygonShape2D::BVH>::push_back(GodotConcavePolygonShape2D::BVH) [clone
   .isra.0] */void Vector<GodotConcavePolygonShape2D::BVH>::push_back(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined8 in_stack_00000018;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<GodotConcavePolygonShape2D::BVH>::resize<false>((CowData<GodotConcavePolygonShape2D::BVH>*)( param_1 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)( param_1 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + lVar4 * 0x18 );
            *puVar1 = in_stack_00000008;
            puVar1[1] = in_stack_00000010;
            puVar1[2] = in_stack_00000018;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* GodotConcavePolygonShape2D::_generate_bvh(GodotConcavePolygonShape2D::BVH*, int, int) */int GodotConcavePolygonShape2D::_generate_bvh(GodotConcavePolygonShape2D *this, BVH *param_1, int param_2, int param_3) {
   float fVar1;
   float fVar2;
   long lVar3;
   undefined8 uVar4;
   code *pcVar5;
   float fVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   double dVar10;
   undefined4 uVar11;
   undefined4 uVar12;
   BVH *pBVar13;
   long lVar14;
   long lVar15;
   long lVar16;
   int iVar17;
   BVH *pBVar18;
   BVH *pBVar19;
   int iVar20;
   int iVar21;
   int iVar22;
   BVH *pBVar23;
   long lVar24;
   BVH *pBVar25;
   BVH *pBVar26;
   long lVar27;
   long in_FS_OFFSET;
   double dVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   float fVar35;
   undefined8 uVar36;
   undefined8 uVar37;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 1) {
      iVar21 = *(int*)( this + 0x98 );
      if (*(int*)( this + 0x98 ) < param_3) {
         iVar21 = param_3;
      }

      *(int*)( this + 0x98 ) = iVar21;
      Vector<GodotConcavePolygonShape2D::BVH>::push_back(this + 0x88);
      if (*(long*)( this + 0x90 ) == 0) {
         iVar21 = -1;
      }
 else {
         iVar21 = (int)*(undefined8*)( *(long*)( this + 0x90 ) + -8 ) + -1;
      }

      goto LAB_00105bee;
   }

   fVar31 = *(float*)param_1;
   fVar33 = *(float*)( param_1 + 4 );
   fVar32 = *(float*)( param_1 + 8 );
   fVar34 = *(float*)( param_1 + 0xc );
   fVar30 = *(float*)( param_1 + 0xc );
   fVar29 = *(float*)( param_1 + 8 );
   if (param_2 < 2) {
      if (fVar29 <= fVar30) {
         if (param_2 != 0) goto LAB_0010579b;
      }
 else {
         fVar29 = fVar32;
         fVar30 = fVar34;
         if (param_2 != 0) goto LAB_001059d3;
      }

   }
 else {
      pBVar23 = param_1 + 0x18;
      fVar32 = *(float*)( param_1 + 4 );
      do {
         if (( ( ( fVar29 < 0.0 ) || ( fVar30 < 0.0 ) ) || ( fVar34 = fVar34 < 0.0 ) ) || ( fVar35 = fVar35 < 0.0 )) {
            _err_print_error("merge", "./core/math/rect2.h", 0xa8, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
            fVar35 = *(float*)( pBVar23 + 0xc );
            fVar34 = *(float*)( pBVar23 + 8 );
         }

         fVar1 = *(float*)( pBVar23 + 4 );
         fVar2 = *(float*)pBVar23;
         pBVar23 = pBVar23 + 0x18;
         fVar33 = fVar1;
         if (fVar32 <= fVar1) {
            fVar33 = fVar32;
         }

         fVar31 = fVar2;
         if (0.0 <= fVar2) {
            fVar31 = 0.0;
         }

         fVar6 = fVar1 + fVar35;
         if (fVar1 + fVar35 <= fVar32 + fVar30) {
            fVar6 = fVar32 + fVar30;
         }

         fVar32 = fVar2 + fVar34;
         if (fVar2 + fVar34 <= fVar29 + 0.0) {
            fVar32 = fVar29 + 0.0;
         }

         fVar30 = fVar6 - fVar33;
         fVar29 = fVar32 - fVar31;
         fVar32 = fVar33;
      }
 while ( param_1 + ( ulong )(param_2 - 2) * 0x18 + 0x30 != pBVar23 );
      fVar32 = fVar29;
      fVar34 = fVar30;
      if (fVar30 < fVar29) {
         LAB_001059d3:lVar27 = (long)param_2;
         pBVar23 = param_1 + 0x18;
         lVar14 = 0;
         lVar24 = lVar27;
         do {
            lVar24 = lVar24 >> 1;
            lVar14 = lVar14 + 1;
         }
 while ( lVar24 != 1 );
         uVar36 = CONCAT44(fVar33, fVar31);
         uVar37 = CONCAT44(fVar30, fVar29);
         SortArray<GodotConcavePolygonShape2D::BVH,GodotConcavePolygonShape2D::BVH_CompareX,true>::introsort(0, lVar27, param_1, lVar14 * 2);
         dVar10 = _LC5;
         if (lVar27 < 0x11) {
            lVar24 = 1;
            pBVar25 = pBVar23;
            do {
               uVar4 = *(undefined8*)( pBVar25 + 0x10 );
               uVar7 = *(undefined8*)pBVar25;
               uVar9 = *(undefined8*)( pBVar25 + 8 );
               dVar28 = (double)*(float*)( pBVar25 + 8 ) * dVar10 + (double)*(float*)pBVar25;
               if (dVar28 < (double)*(float*)( param_1 + 8 ) * dVar10 + (double)*(float*)param_1) {
                  memmove(pBVar23, param_1, (long)pBVar25 - (long)param_1);
                  *(undefined8*)( param_1 + 0x10 ) = uVar4;
                  *(undefined8*)param_1 = uVar7;
                  *(undefined8*)( param_1 + 8 ) = uVar9;
               }
 else {
                  pBVar26 = pBVar25;
                  if (dVar28 < (double)*(float*)( pBVar25 + -0x10 ) * dVar10 + (double)*(float*)( pBVar25 + -0x18 )) {
                     if (lVar24 + -1 != 0) {
                        pBVar26 = pBVar25 + -0x30;
                        lVar14 = lVar24 + -1;
                        pBVar13 = pBVar25;
                        do {
                           uVar8 = *(undefined8*)( pBVar13 + -0x10 );
                           *(undefined8*)( pBVar26 + 0x30 ) = *(undefined8*)( pBVar13 + -0x18 );
                           *(undefined8*)( pBVar26 + 0x38 ) = uVar8;
                           *(undefined8*)( pBVar26 + 0x40 ) = *(undefined8*)( pBVar13 + -8 );
                           lVar16 = lVar14 + -1;
                           if ((double)*(float*)( pBVar26 + 8 ) * dVar10 + (double)*(float*)pBVar26 <= dVar28) {
                              pBVar26 = param_1 + lVar14 * 0x18;
                              goto LAB_00105f1b;
                           }

                           pBVar26 = pBVar26 + -0x18;
                           lVar14 = lVar16;
                           pBVar13 = pBVar13 + -0x18;
                        }
 while ( lVar16 != 0 );
                     }

                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0, uVar36, uVar37);
                     pBVar26 = pBVar23;
                  }

                  LAB_00105f1b:*(undefined8*)pBVar26 = uVar7;
                  *(undefined8*)( pBVar26 + 8 ) = uVar9;
                  *(undefined8*)( pBVar26 + 0x10 ) = uVar4;
               }

               lVar24 = lVar24 + 1;
               pBVar25 = pBVar25 + 0x18;
            }
 while ( lVar24 != lVar27 );
         }
 else {
            lVar24 = 0;
            pBVar25 = pBVar23;
            do {
               lVar14 = lVar24 + 1;
               uVar37 = *(undefined8*)pBVar25;
               uVar4 = *(undefined8*)( pBVar25 + 8 );
               uVar36 = *(undefined8*)( pBVar25 + 0x10 );
               dVar28 = (double)*(float*)( pBVar25 + 8 ) * dVar10 + (double)*(float*)pBVar25;
               if (dVar28 < (double)*(float*)( param_1 + 8 ) * dVar10 + (double)*(float*)param_1) {
                  memmove(pBVar23, param_1, (long)pBVar25 - (long)param_1);
                  *(undefined8*)( param_1 + 0x10 ) = uVar36;
                  *(undefined8*)param_1 = uVar37;
                  *(undefined8*)( param_1 + 8 ) = uVar4;
               }
 else {
                  pBVar26 = pBVar25;
                  if (dVar28 < (double)*(float*)( pBVar25 + -0x10 ) * dVar10 + (double)*(float*)( pBVar25 + -0x18 )) {
                     if (lVar24 != 0) {
                        pBVar26 = pBVar25 + -0x30;
                        pBVar13 = pBVar25;
                        do {
                           uVar7 = *(undefined8*)( pBVar13 + -0x10 );
                           *(undefined8*)( pBVar26 + 0x30 ) = *(undefined8*)( pBVar13 + -0x18 );
                           *(undefined8*)( pBVar26 + 0x38 ) = uVar7;
                           *(undefined8*)( pBVar26 + 0x40 ) = *(undefined8*)( pBVar13 + -8 );
                           lVar16 = lVar24 + -1;
                           if ((double)*(float*)( pBVar26 + 8 ) * dVar10 + (double)*(float*)pBVar26 <= dVar28) {
                              pBVar26 = param_1 + lVar24 * 0x18;
                              goto LAB_00105b83;
                           }

                           pBVar26 = pBVar26 + -0x18;
                           lVar24 = lVar16;
                           pBVar13 = pBVar13 + -0x18;
                        }
 while ( lVar16 != 0 );
                     }

                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pBVar26 = pBVar23;
                  }

                  LAB_00105b83:*(undefined8*)pBVar26 = uVar37;
                  *(undefined8*)( pBVar26 + 8 ) = uVar4;
                  *(undefined8*)( pBVar26 + 0x10 ) = uVar36;
               }

               pBVar25 = pBVar25 + 0x18;
               lVar24 = lVar14;
            }
 while ( lVar14 != 0xf );
            pBVar25 = param_1 + 0x168;
            lVar24 = 0x10;
            pBVar26 = param_1 + 0x180;
            do {
               uVar36 = *(undefined8*)( pBVar26 + 0x10 );
               pBVar13 = pBVar26 + -0x30;
               uVar37 = *(undefined8*)pBVar26;
               uVar4 = *(undefined8*)( pBVar26 + 8 );
               lVar16 = (long)pBVar13 - (long)pBVar25;
               dVar28 = (double)*(float*)( pBVar26 + 8 ) * dVar10 + (double)*(float*)pBVar26;
               lVar14 = lVar24 + -1;
               pBVar18 = pBVar25;
               pBVar19 = pBVar26;
               if (dVar28 < (double)*(float*)( pBVar26 + -0x10 ) * dVar10 + (double)*(float*)( pBVar26 + -0x18 )) {
                  do {
                     uVar7 = *(undefined8*)( pBVar18 + 8 );
                     *(undefined8*)( pBVar13 + 0x30 ) = *(undefined8*)pBVar18;
                     *(undefined8*)( pBVar13 + 0x38 ) = uVar7;
                     pBVar19 = pBVar18 + 0x10;
                     pBVar18 = pBVar18 + lVar16;
                     *(undefined8*)( pBVar13 + 0x40 ) = *(undefined8*)pBVar19;
                     lVar15 = lVar14 + -1;
                     if ((double)*(float*)( pBVar13 + 8 ) * dVar10 + (double)*(float*)pBVar13 <= dVar28) {
                        pBVar19 = param_1 + lVar14 * 0x18;
                        goto LAB_001061de;
                     }

                     pBVar13 = pBVar13 + -0x18;
                     lVar14 = lVar15;
                  }
 while ( lVar15 != 0 );
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pBVar19 = pBVar23;
               }

               LAB_001061de:lVar24 = lVar24 + 1;
               pBVar25 = pBVar25 + 0x18;
               pBVar26 = pBVar26 + 0x18;
               *(undefined8*)pBVar19 = uVar37;
               *(undefined8*)( pBVar19 + 8 ) = uVar4;
               *(undefined8*)( pBVar19 + 0x10 ) = uVar36;
            }
 while ( lVar24 != lVar27 );
         }

      }
 else {
         LAB_0010579b:lVar27 = (long)param_2;
         pBVar23 = param_1 + 0x18;
         lVar14 = 0;
         lVar24 = lVar27;
         do {
            lVar24 = lVar24 >> 1;
            lVar14 = lVar14 + 1;
         }
 while ( lVar24 != 1 );
         uVar36 = CONCAT44(fVar33, fVar31);
         uVar37 = CONCAT44(fVar34, fVar32);
         SortArray<GodotConcavePolygonShape2D::BVH,GodotConcavePolygonShape2D::BVH_CompareY,true>::introsort(0, lVar27, param_1, lVar14 * 2);
         dVar10 = _LC5;
         if (lVar27 < 0x11) {
            lVar24 = 1;
            pBVar25 = pBVar23;
            do {
               uVar4 = *(undefined8*)( pBVar25 + 0x10 );
               uVar7 = *(undefined8*)pBVar25;
               uVar9 = *(undefined8*)( pBVar25 + 8 );
               dVar28 = (double)*(float*)( pBVar25 + 0xc ) * dVar10 + (double)*(float*)( pBVar25 + 4 );
               if (dVar28 < (double)*(float*)( param_1 + 0xc ) * dVar10 + (double)*(float*)( param_1 + 4 )) {
                  memmove(pBVar23, param_1, (long)pBVar25 - (long)param_1);
                  *(undefined8*)( param_1 + 0x10 ) = uVar4;
                  *(undefined8*)param_1 = uVar7;
                  *(undefined8*)( param_1 + 8 ) = uVar9;
               }
 else {
                  pBVar26 = pBVar25;
                  pBVar13 = pBVar25;
                  lVar14 = lVar24;
                  if (dVar28 < (double)*(float*)( pBVar25 + -0xc ) * dVar10 + (double)*(float*)( pBVar25 + -0x14 )) {
                     while (lVar14 = lVar14 + -1,lVar14 != 0) {
                        uVar8 = *(undefined8*)( pBVar13 + -0x10 );
                        *(undefined8*)pBVar26 = *(undefined8*)( pBVar13 + -0x18 );
                        *(undefined8*)( pBVar26 + 8 ) = uVar8;
                        *(undefined8*)( pBVar26 + 0x10 ) = *(undefined8*)( pBVar13 + -8 );
                        if ((double)*(float*)( pBVar26 + -0x24 ) * dVar10 + (double)*(float*)( pBVar26 + -0x2c ) <= dVar28) {
                           pBVar26 = param_1 + lVar14 * 0x18;
                           goto LAB_00105d8b;
                        }

                        pBVar26 = pBVar26 + -0x18;
                        pBVar13 = pBVar13 + -0x18;
                     }
;
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0, uVar36, uVar37);
                     pBVar26 = pBVar23;
                  }

                  LAB_00105d8b:*(undefined8*)pBVar26 = uVar7;
                  *(undefined8*)( pBVar26 + 8 ) = uVar9;
                  *(undefined8*)( pBVar26 + 0x10 ) = uVar4;
               }

               lVar24 = lVar24 + 1;
               pBVar25 = pBVar25 + 0x18;
            }
 while ( lVar27 != lVar24 );
         }
 else {
            lVar24 = 0;
            pBVar25 = pBVar23;
            do {
               lVar14 = lVar24 + 1;
               uVar36 = *(undefined8*)( pBVar25 + 0x10 );
               uVar37 = *(undefined8*)pBVar25;
               uVar4 = *(undefined8*)( pBVar25 + 8 );
               dVar28 = (double)*(float*)( pBVar25 + 0xc ) * dVar10 + (double)*(float*)( pBVar25 + 4 );
               if (dVar28 < (double)*(float*)( param_1 + 0xc ) * dVar10 + (double)*(float*)( param_1 + 4 )) {
                  memmove(pBVar23, param_1, (long)pBVar25 - (long)param_1);
                  *(undefined8*)( param_1 + 0x10 ) = uVar36;
                  *(undefined8*)param_1 = uVar37;
                  *(undefined8*)( param_1 + 8 ) = uVar4;
               }
 else {
                  pBVar26 = pBVar25;
                  pBVar13 = pBVar25;
                  if (dVar28 < (double)*(float*)( pBVar25 + -0xc ) * dVar10 + (double)*(float*)( pBVar25 + -0x14 )) {
                     while (lVar24 != 0) {
                        uVar7 = *(undefined8*)( pBVar13 + -0x10 );
                        *(undefined8*)pBVar26 = *(undefined8*)( pBVar13 + -0x18 );
                        *(undefined8*)( pBVar26 + 8 ) = uVar7;
                        *(undefined8*)( pBVar26 + 0x10 ) = *(undefined8*)( pBVar13 + -8 );
                        if ((double)*(float*)( pBVar26 + -0x24 ) * dVar10 + (double)*(float*)( pBVar26 + -0x2c ) <= dVar28) {
                           pBVar26 = param_1 + lVar24 * 0x18;
                           goto LAB_0010594b;
                        }

                        lVar24 = lVar24 + -1;
                        pBVar26 = pBVar26 + -0x18;
                        pBVar13 = pBVar13 + -0x18;
                     }
;
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pBVar26 = pBVar23;
                  }

                  LAB_0010594b:*(undefined8*)pBVar26 = uVar37;
                  *(undefined8*)( pBVar26 + 8 ) = uVar4;
                  *(undefined8*)( pBVar26 + 0x10 ) = uVar36;
               }

               pBVar25 = pBVar25 + 0x18;
               lVar24 = lVar14;
            }
 while ( lVar14 != 0xf );
            pBVar25 = param_1 + 0x168;
            lVar24 = 0x10;
            pBVar26 = param_1 + 0x180;
            do {
               uVar36 = *(undefined8*)( pBVar26 + 0x10 );
               uVar37 = *(undefined8*)pBVar26;
               uVar4 = *(undefined8*)( pBVar26 + 8 );
               dVar28 = (double)*(float*)( pBVar26 + 0xc ) * dVar10 + (double)*(float*)( pBVar26 + 4 );
               pBVar13 = pBVar26;
               lVar14 = lVar24 + -1;
               pBVar19 = pBVar25;
               if (dVar28 < (double)*(float*)( pBVar26 + -0xc ) * dVar10 + (double)*(float*)( pBVar26 + -0x14 )) {
                  do {
                     uVar7 = *(undefined8*)( pBVar19 + 8 );
                     *(undefined8*)pBVar13 = *(undefined8*)pBVar19;
                     *(undefined8*)( pBVar13 + 8 ) = uVar7;
                     pBVar18 = pBVar19 + 0x10;
                     pBVar19 = pBVar19 + (long)( pBVar26 + ( -0x30 - (long)pBVar25 ) );
                     *(undefined8*)( pBVar13 + 0x10 ) = *(undefined8*)pBVar18;
                     lVar16 = lVar14 + -1;
                     if ((double)*(float*)( pBVar13 + -0x24 ) * dVar10 + (double)*(float*)( pBVar13 + -0x2c ) <= dVar28) {
                        pBVar13 = param_1 + lVar14 * 0x18;
                        goto LAB_0010632e;
                     }

                     pBVar13 = pBVar13 + -0x18;
                     lVar14 = lVar16;
                  }
 while ( lVar16 != 0 );
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pBVar13 = pBVar23;
               }

               LAB_0010632e:lVar24 = lVar24 + 1;
               pBVar26 = pBVar26 + 0x18;
               pBVar25 = pBVar25 + 0x18;
               *(undefined8*)pBVar13 = uVar37;
               *(undefined8*)( pBVar13 + 8 ) = uVar4;
               *(undefined8*)( pBVar13 + 0x10 ) = uVar36;
            }
 while ( lVar27 != lVar24 );
         }

      }

   }

   iVar17 = param_2 >> 1;
   lVar24 = (long)iVar17;
   iVar20 = param_2 - iVar17;
   iVar22 = param_3 + 1;
   if (*(long*)( this + 0x90 ) == 0) {
      iVar21 = 0;
      lVar14 = 0;
      Vector<GodotConcavePolygonShape2D::BVH>::push_back(this + 0x88);
      uVar11 = _generate_bvh(this, param_1, iVar17, iVar22);
      uVar12 = _generate_bvh(this, param_1 + lVar24 * 0x18, iVar20, iVar22);
      LAB_00105fed:if (*(long*)( this + 0x90 ) != 0) {
         lVar24 = *(long*)( *(long*)( this + 0x90 ) + -8 );
         if (lVar24 <= lVar14) goto LAB_00106070;
         CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)( this + 0x90 ));
         lVar24 = *(long*)( this + 0x90 );
         *(undefined4*)( lVar24 + 0x10 + (long)iVar21 * 0x18 ) = uVar11;
         if (lVar24 != 0) {
            lVar24 = *(long*)( lVar24 + -8 );
            if (lVar14 < lVar24) {
               CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)( this + 0x90 ));
               *(undefined4*)( *(long*)( this + 0x90 ) + 0x14 + (long)iVar21 * 0x18 ) = uVar12;
               LAB_00105bee:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return iVar21;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            goto LAB_00106070;
         }

      }

   }
 else {
      iVar21 = (int)*(undefined8*)( *(long*)( this + 0x90 ) + -8 );
      lVar14 = (long)iVar21;
      Vector<GodotConcavePolygonShape2D::BVH>::push_back(this + 0x88);
      uVar11 = _generate_bvh(this, param_1, iVar17, iVar22);
      uVar12 = _generate_bvh(this, param_1 + lVar24 * 0x18, iVar20, iVar22);
      if (-1 < lVar14) goto LAB_00105fed;
      if (*(long*)( this + 0x90 ) != 0) {
         lVar24 = *(long*)( *(long*)( this + 0x90 ) + -8 );
         goto LAB_00106070;
      }

   }

   lVar24 = 0;
   LAB_00106070:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar14, lVar24, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotConcavePolygonShape2D::set_data(Variant const&) */void GodotConcavePolygonShape2D::set_data(GodotConcavePolygonShape2D *this, Variant *param_1) {
   CowData<GodotConcavePolygonShape2D::Segment> *this_00;
   long *plVar1;
   BVH *pBVar2;
   CowData<Vector2> *this_01;
   BVH *pBVar3;
   float *pfVar4;
   int *piVar5;
   long lVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   code *pcVar11;
   char cVar12;
   int iVar13;
   undefined4 *puVar14;
   ulong uVar15;
   long *plVar16;
   int *piVar17;
   uint uVar18;
   undefined4 uVar19;
   undefined8 *puVar20;
   long lVar21;
   undefined4 uVar22;
   undefined8 *puVar23;
   ulong uVar24;
   long lVar25;
   long in_FS_OFFSET;
   float fVar26;
   undefined8 uVar27;
   undefined8 uVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float fVar33;
   float fVar34;
   Variant local_a8[8];
   undefined8 *local_a0;
   uint local_98[2];
   BVH *local_90;
   HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>> local_88[8];
   undefined1 local_80[16];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_1 == 0x23) {
      Variant::operator_cast_to_Vector(local_a8);
      if (local_a0 == (undefined8*)0x0) {
         CowData<GodotConcavePolygonShape2D::Segment>::resize<false>((CowData<GodotConcavePolygonShape2D::Segment>*)( this + 0x70 ), 0);
         CowData<Vector2>::resize<false>((CowData<Vector2>*)( this + 0x80 ), 0);
         CowData<GodotConcavePolygonShape2D::BVH>::resize<false>((CowData<GodotConcavePolygonShape2D::BVH>*)( this + 0x90 ), 0);
         *(undefined4*)( this + 0x98 ) = 1;
         LAB_00106dd2:puVar20 = *(undefined8**)( this + 0x40 );
         this[0x20] = (GodotConcavePolygonShape2D)0x1;
         *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
         for (; puVar20 != (undefined8*)0x0; puVar20 = (undefined8*)*puVar20) {
            ( *(code*)**(undefined8**)puVar20[2] )();
         }

      }
 else {
         uVar18 = (uint)local_a0[-1];
         if (( local_a0[-1] & 1 ) == 0) {
            this_00 = (CowData<GodotConcavePolygonShape2D::Segment>*)( this + 0x70 );
            this_01 = (CowData<Vector2>*)( this + 0x80 );
            CowData<GodotConcavePolygonShape2D::Segment>::resize<false>(this_00, 0);
            CowData<Vector2>::resize<false>(this_01, 0);
            CowData<GodotConcavePolygonShape2D::BVH>::resize<false>((CowData<GodotConcavePolygonShape2D::BVH>*)( this + 0x90 ), 0);
            *(undefined4*)( this + 0x98 ) = 1;
            if (uVar18 != 0) {
               local_60 = 2;
               local_80 = (undefined1[16])0x0;
               local_70 = (undefined1[16])0x0;
               if ((int)uVar18 < 1) {
                  CowData<Vector2>::resize<false>(this_01, 0);
                  fVar30 = 0.0;
                  fVar26 = 0.0;
                  fVar33 = _DAT_00000010;
                  fVar34 = _DAT_00000014;
               }
 else {
                  puVar20 = local_a0 + ( ulong )(uVar18 - 1 >> 1) * 2 + 2;
                  puVar23 = local_a0;
                  do {
                     while (true) {
                        local_50 = *puVar23;
                        local_98[0] = 0;
                        local_48 = puVar23[1];
                        cVar12 = HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::_lookup_pos(local_88, (Vector2*)&local_50, local_98);
                        if (cVar12 == '\0') {
                           uVar22 = local_60._4_4_;
                           puVar14 = (undefined4*)HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::operator [](local_88, (Vector2*)&local_50);
                           *puVar14 = uVar22;
                        }
 else {
                           puVar14 = (undefined4*)HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::operator [](local_88, (Vector2*)&local_50);
                           uVar22 = *puVar14;
                        }

                        local_98[0] = 0;
                        cVar12 = HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::_lookup_pos(local_88, (Vector2*)&local_48, local_98);
                        if (cVar12 == '\0') break;
                        puVar14 = (undefined4*)HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::operator [](local_88, (Vector2*)&local_48);
                        uVar19 = *puVar14;
                        lVar21 = *(long*)( this + 0x70 );
                        if (lVar21 == 0) goto LAB_001066a3;
                        LAB_001065c5:iVar13 = CowData<GodotConcavePolygonShape2D::Segment>::resize<false>(this_00, *(long*)( lVar21 + -8 ) + 1);
                        if (iVar13 != 0) goto LAB_001066c0;
                        LAB_001065df:if (*(long*)( this + 0x70 ) == 0) {
                           lVar25 = -1;
                           lVar21 = 0;
                           LAB_00106cea:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar25, lVar21, "p_index", "size()", "", false, false);
                        }
 else {
                           lVar21 = *(long*)( *(long*)( this + 0x70 ) + -8 );
                           lVar25 = lVar21 + -1;
                           if (lVar25 < 0) goto LAB_00106cea;
                           CowData<GodotConcavePolygonShape2D::Segment>::_copy_on_write(this_00);
                           puVar14 = (undefined4*)( *(long*)( this + 0x70 ) + lVar25 * 8 );
                           *puVar14 = uVar22;
                           puVar14[1] = uVar19;
                        }

                        puVar23 = puVar23 + 2;
                        if (puVar20 == puVar23) goto LAB_001066f8;
                     }
;
                     uVar19 = local_60._4_4_;
                     puVar14 = (undefined4*)HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::operator [](local_88, (Vector2*)&local_48);
                     *puVar14 = uVar19;
                     lVar21 = *(long*)( this + 0x70 );
                     if (lVar21 != 0) goto LAB_001065c5;
                     LAB_001066a3:iVar13 = CowData<GodotConcavePolygonShape2D::Segment>::resize<false>(this_00, 1);
                     if (iVar13 == 0) goto LAB_001065df;
                     LAB_001066c0:puVar23 = puVar23 + 2;
                     _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  }
 while ( puVar20 != puVar23 );
                  LAB_001066f8:plVar16 = (long*)local_70._0_8_;
                  CowData<Vector2>::resize<false>(this_01, local_60 >> 0x20);
                  fVar30 = 0.0;
                  fVar33 = *(float*)( (undefined8)plVar16 + 2 );
                  fVar34 = *(float*)( (long)plVar16 + 0x14 );
                  fVar26 = 0.0;
                  do {
                     if (( fVar26 < 0.0 ) || ( fVar30 < 0.0 )) {
                        _err_print_error("expand_to", "./core/math/rect2.h", 0x100, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
                     }

                     fVar31 = *(float*)( plVar16 + 2 );
                     fVar26 = fVar26 + fVar33;
                     uVar24 = (ulong)(int)plVar16[3];
                     fVar32 = *(float*)( (long)plVar16 + 0x14 );
                     lVar21 = *(long*)( this + 0x80 );
                     fVar29 = fVar31;
                     if (fVar33 <= fVar31) {
                        fVar29 = fVar33;
                     }

                     fVar33 = fVar29;
                     if (fVar31 <= fVar26) {
                        fVar31 = fVar26;
                     }

                     fVar29 = fVar32;
                     if (fVar32 <= fVar30 + fVar34) {
                        fVar29 = fVar30 + fVar34;
                     }

                     if (fVar34 <= fVar32) {
                        fVar32 = fVar34;
                     }

                     fVar34 = fVar32;
                     fVar26 = fVar31 - fVar33;
                     fVar30 = fVar29 - fVar34;
                     if ((long)uVar24 < 0) {
                        if (lVar21 == 0) {
                           LAB_00106d30:lVar21 = 0;
                        }
 else {
                           LAB_00106c99:lVar21 = *(long*)( lVar21 + -8 );
                        }

                        goto LAB_00106cbb;
                     }

                     if (lVar21 == 0) goto LAB_00106d30;
                     if (*(long*)( lVar21 + -8 ) <= (long)uVar24) goto LAB_00106c99;
                     CowData<Vector2>::_copy_on_write(this_01);
                     plVar1 = plVar16 + 2;
                     plVar16 = (long*)*plVar16;
                     *(long*)( *(long*)( this + 0x80 ) + uVar24 * 8 ) = *plVar1;
                  }
 while ( plVar16 != (long*)0x0 );
               }

               local_90 = (BVH*)0x0;
               if (*(long*)( this + 0x70 ) == 0) {
                  lVar21 = 0;
               }
 else {
                  lVar21 = *(long*)( *(long*)( this + 0x70 ) + -8 );
               }

               CowData<GodotConcavePolygonShape2D::BVH>::resize<false>((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90, lVar21);
               uVar24 = ( ulong )(uVar18 & 1);
               while (local_90 != (BVH*)0x0) {
                  if (*(long*)( local_90 + -8 ) <= (long)uVar24) {
                     iVar13 = (int)*(long*)( local_90 + -8 );
                     goto LAB_00106a45;
                  }

                  lVar21 = *(long*)( this + 0x70 );
                  if (lVar21 == 0) {
                     LAB_00106eca:lVar25 = 0;
                     uVar15 = uVar24;
                     goto LAB_00106ea7;
                  }

                  lVar25 = *(long*)( lVar21 + -8 );
                  uVar15 = uVar24;
                  if (lVar25 <= (long)uVar24) goto LAB_00106ea7;
                  uVar15 = ( ulong ) * (int*)( lVar21 + uVar24 * 8 );
                  lVar21 = *(long*)( this + 0x80 );
                  if ((long)uVar15 < 0) {
                     LAB_00106f13:if (lVar21 != 0) {
                        LAB_00106e88:lVar25 = *(long*)( lVar21 + -8 );
                        goto LAB_00106ea7;
                     }

                     LAB_00106f1c:lVar25 = 0;
                     LAB_00106ea7:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar15, lVar25, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar11 = (code*)invalidInstructionException();
                     ( *pcVar11 )();
                  }

                  if (lVar21 == 0) goto LAB_00106f1c;
                  if (*(long*)( lVar21 + -8 ) <= (long)uVar15) goto LAB_00106e88;
                  CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90);
                  lVar6 = uVar24 * 0x18;
                  *(undefined8*)( local_90 + uVar24 * 0x18 ) = *(undefined8*)( lVar21 + uVar15 * 8 );
                  if (local_90 == (BVH*)0x0) goto LAB_00106eed;
                  lVar21 = *(long*)( local_90 + -8 );
                  if (lVar21 <= (long)uVar24) goto LAB_00106cbb;
                  CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90);
                  pBVar2 = local_90;
                  lVar21 = *(long*)( this + 0x70 );
                  if (lVar21 == 0) goto LAB_00106eca;
                  lVar25 = *(long*)( lVar21 + -8 );
                  uVar15 = uVar24;
                  if (lVar25 <= (long)uVar24) goto LAB_00106ea7;
                  uVar15 = ( ulong ) * (int*)( lVar21 + 4 + uVar24 * 8 );
                  lVar21 = *(long*)( this + 0x80 );
                  if ((long)uVar15 < 0) goto LAB_00106f13;
                  if (lVar21 == 0) goto LAB_00106f1c;
                  if (*(long*)( lVar21 + -8 ) <= (long)uVar15) goto LAB_00106e88;
                  pBVar3 = local_90 + lVar6;
                  pfVar4 = (float*)( lVar21 + uVar15 * 8 );
                  fVar31 = *(float*)( pBVar3 + 8 );
                  if (( fVar31 < 0.0 ) || ( fVar32 = fVar32 < 0.0 )) {
                     _err_print_error("expand_to", "./core/math/rect2.h", 0x100, "Rect2 size is negative, this is not supported. Use Rect2.abs() to get a Rect2 with a positive size.", 0, 0);
                     fVar32 = *(float*)( pBVar3 + 0xc );
                     fVar31 = *(float*)( pBVar3 + 8 );
                  }

                  fVar29 = *(float*)( pBVar3 + 4 );
                  fVar7 = *(float*)pBVar3;
                  fVar8 = *pfVar4;
                  fVar9 = pfVar4[1];
                  fVar10 = fVar8;
                  if (fVar7 <= fVar8) {
                     fVar10 = fVar7;
                  }

                  if (fVar8 <= fVar31 + fVar7) {
                     fVar8 = fVar31 + fVar7;
                  }

                  fVar31 = fVar9;
                  if (fVar9 <= fVar32 + fVar29) {
                     fVar31 = fVar32 + fVar29;
                  }

                  if (fVar29 <= fVar9) {
                     fVar9 = fVar29;
                  }

                  *(ulong*)pBVar3 = CONCAT44(fVar9, fVar10);
                  *(ulong*)( pBVar3 + 8 ) = CONCAT44(fVar31 - fVar9, fVar8 - fVar10);
                  if (pBVar2 == (BVH*)0x0) {
                     LAB_00106eed:lVar21 = 0;
                     LAB_00106cbb:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar24, lVar21, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar11 = (code*)invalidInstructionException();
                     ( *pcVar11 )();
                  }

                  lVar21 = *(long*)( pBVar2 + -8 );
                  if (lVar21 <= (long)uVar24) goto LAB_00106cbb;
                  CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90);
                  *(undefined4*)( local_90 + lVar6 + 0x10 ) = 0xffffffff;
                  if (local_90 == (BVH*)0x0) goto LAB_00106eed;
                  lVar21 = *(long*)( local_90 + -8 );
                  if (lVar21 <= (long)uVar24) goto LAB_00106cbb;
                  CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90);
                  *(int*)( local_90 + lVar6 + 0x14 ) = (int)uVar24;
                  uVar24 = uVar24 + 1;
               }
;
               iVar13 = 0;
               LAB_00106a45:CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write((CowData<GodotConcavePolygonShape2D::BVH>*)&local_90);
               pBVar2 = local_90;
               _generate_bvh(this, local_90, iVar13, 1);
               if (pBVar2 != (BVH*)0x0) {
                  LOCK();
                  pBVar2 = pBVar2 + -0x10;
                  *(long*)pBVar2 = *(long*)pBVar2 + -1;
                  UNLOCK();
                  if (*(long*)pBVar2 == 0) {
                     Memory::free_static(local_90 + -0x10, false);
                  }

               }

               uVar27 = local_80._0_8_;
               if ((undefined8*)local_80._0_8_ != (undefined8*)0x0) {
                  uVar28 = local_80._8_8_;
                  if (( local_60._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) != 0 )) {
                     piVar5 = (int*)( local_80._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) * 4 );
                     piVar17 = (int*)local_80._8_8_;
                     puVar20 = (undefined8*)local_80._0_8_;
                     do {
                        if (*piVar17 != 0) {
                           *piVar17 = 0;
                           Memory::free_static((void*)*puVar20, false);
                           *puVar20 = 0;
                        }

                        piVar17 = piVar17 + 1;
                        puVar20 = puVar20 + 1;
                     }
 while ( piVar5 != piVar17 );
                  }

                  Memory::free_static((void*)uVar27, false);
                  Memory::free_static((void*)uVar28, false);
               }

               if (local_a0 != (undefined8*)0x0) {
                  LOCK();
                  plVar16 = local_a0 + -2;
                  *plVar16 = *plVar16 + -1;
                  UNLOCK();
                  if (*plVar16 == 0) {
                     puVar20 = local_a0 + -2;
                     local_a0 = (undefined8*)0x0;
                     Memory::free_static(puVar20, false);
                  }

               }

               uVar27 = CONCAT44(fVar30, fVar26);
               uVar28 = CONCAT44(fVar34, fVar33);
               goto LAB_00106d4d;
            }

            goto LAB_00106dd2;
         }

         _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x339, "Condition \"len % 2\" is true.", 0, 0);
      }

      puVar20 = local_a0;
      if (local_a0 != (undefined8*)0x0) {
         LOCK();
         plVar16 = local_a0 + -2;
         *plVar16 = *plVar16 + -1;
         UNLOCK();
         if (*plVar16 == 0) {
            local_a0 = (undefined8*)0x0;
            Memory::free_static(puVar20 + -2, false);
         }

      }

   }
 else {
      uVar28 = 0;
      uVar27 = 0;
      if (*(int*)param_1 != 0x20) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("set_data", "modules/godot_physics_2d/godot_shape_2d.cpp", 0x331, "Condition \"p_data.get_type() != Variant::PACKED_VECTOR2_ARRAY && p_data.get_type() != Variant::PACKED_FLOAT32_ARRAY\" is true.", 0, 0);
            return;
         }

         goto LAB_00106fd7;
      }

      LAB_00106d4d:puVar20 = *(undefined8**)( this + 0x40 );
      this[0x20] = (GodotConcavePolygonShape2D)0x1;
      *(undefined8*)( this + 0x10 ) = uVar28;
      *(undefined8*)( this + 0x18 ) = uVar27;
      for (; puVar20 != (undefined8*)0x0; puVar20 = (undefined8*)*puVar20) {
         ( *(code*)**(undefined8**)puVar20[2] )();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00106fd7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotShape2D::allows_one_way_collision() const */undefined8 GodotShape2D::allows_one_way_collision(void) {
   return 1;
}
/* GodotShape2D::is_concave() const */undefined8 GodotShape2D::is_concave(void) {
   return 0;
}
/* GodotWorldBoundaryShape2D::get_type() const */undefined8 GodotWorldBoundaryShape2D::get_type(void) {
   return 0;
}
/* GodotWorldBoundaryShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&)
   const */void GodotWorldBoundaryShape2D::project_rangev(Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   undefined4 *in_R8;
   *param_4 = -1e+10;
   *in_R8 = 0x501502f9;
   return;
}
/* GodotWorldBoundaryShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D
   const&, float&, float&) const */void GodotWorldBoundaryShape2D::project_range_castv(Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   undefined4 *in_R9;
   *param_5 = -1e+10;
   *in_R9 = 0x501502f9;
   return;
}
/* GodotSeparationRayShape2D::get_type() const */undefined8 GodotSeparationRayShape2D::get_type(void) {
   return 1;
}
/* GodotSeparationRayShape2D::allows_one_way_collision() const */undefined8 GodotSeparationRayShape2D::allows_one_way_collision(void) {
   return 0;
}
/* GodotSegmentShape2D::get_type() const */undefined8 GodotSegmentShape2D::get_type(void) {
   return 2;
}
/* GodotCircleShape2D::get_type() const */undefined8 GodotCircleShape2D::get_type(void) {
   return 3;
}
/* GodotRectangleShape2D::get_type() const */undefined8 GodotRectangleShape2D::get_type(void) {
   return 4;
}
/* GodotCapsuleShape2D::get_type() const */undefined8 GodotCapsuleShape2D::get_type(void) {
   return 5;
}
/* GodotConvexPolygonShape2D::get_type() const */undefined8 GodotConvexPolygonShape2D::get_type(void) {
   return 6;
}
/* GodotConcaveShape2D::is_concave() const */undefined8 GodotConcaveShape2D::is_concave(void) {
   return 1;
}
/* GodotConcavePolygonShape2D::get_type() const */undefined8 GodotConcavePolygonShape2D::get_type(void) {
   return 7;
}
/* GodotConcavePolygonShape2D::get_moment_of_inertia(float, Vector2 const&) const */undefined8 GodotConcavePolygonShape2D::get_moment_of_inertia(float param_1, Vector2 *param_2) {
   return 0;
}
/* GodotConcavePolygonShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&)
   const */void GodotConcavePolygonShape2D::project_rangev(Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   undefined4 *in_R8;
   *param_4 = 0.0;
   *in_R8 = 0;
   _err_print_error("project_rangev", "modules/godot_physics_2d/godot_shape_2d.h", 0x201, "Method/function failed.", "Unsupported call to project_rangev in GodotConcavePolygonShape2D", 0, 0);
   return;
}
/* GodotConcavePolygonShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D
   const&, float&, float&) const */undefined1[16];GodotConcavePolygonShape2D::project_range_castv(Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   undefined1 auVar1[16];
   undefined4 *in_R9;
   uint uVar2;
   undefined8 uStack_30;
   _err_print_error("project_range", "modules/godot_physics_2d/godot_shape_2d.h", 0x207, "Method/function failed.", "Unsupported call to project_range in GodotConcavePolygonShape2D", 0, 0);
   uVar2 = 0;
   _err_print_error("project_range", "modules/godot_physics_2d/godot_shape_2d.h", 0x207, "Method/function failed.", "Unsupported call to project_range in GodotConcavePolygonShape2D", 0);
   *param_5 = 0.0;
   *in_R9 = 0;
   auVar1._4_4_ = 0;
   auVar1._0_4_ = uVar2;
   auVar1._8_8_ = uStack_30;
   return auVar1;
}
/* GodotRectangleShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&) const
    */void GodotRectangleShape2D::project_rangev(GodotRectangleShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   float fVar3;
   iVar2 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = -1e+20;
   *param_3 = 1e+20;
   do {
      fVar3 = (float)Vector2::dot(param_1);
      if (*param_4 <= fVar3 && fVar3 != *param_4) {
         *param_4 = fVar3;
      }

      if (fVar3 < *param_3) {
         *param_3 = fVar3;
      }

      iVar2 = iVar2 + 1;
   }
 while ( iVar2 != 4 );
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotRectangleShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D const&,
   float&, float&) const */void GodotRectangleShape2D::project_range_castv(GodotRectangleShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   float fVar3;
   undefined8 extraout_XMM0_Qb;
   undefined1 auVar4[16];
   float fVar5;
   undefined1 auVar6[16];
   float fVar7;
   float fVar8;
   float local_78;
   float local_74;
   iVar2 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_74 = 1e+20;
   local_78 = -1e+20;
   do {
      iVar2 = iVar2 + 1;
      fVar3 = (float)Vector2::dot(param_2);
      fVar8 = fVar3;
      if (local_74 <= fVar3) {
         fVar8 = local_74;
      }

      if (fVar3 <= local_78) {
         fVar3 = local_78;
      }

      local_78 = fVar3;
      local_74 = fVar8;
   }
 while ( iVar2 != 4 );
   auVar4 = ZEXT416(_LC23);
   auVar6 = ZEXT416(_LC22);
   iVar2 = 0;
   do {
      fVar7 = auVar4._0_4_;
      fVar5 = auVar6._0_4_;
      iVar2 = iVar2 + 1;
      auVar4._0_8_ = Vector2::dot(param_2);
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar6._8_4_ = (int)extraout_XMM0_Qb;
      auVar6._0_8_ = auVar4._0_8_;
      auVar6._12_4_ = (int)( (ulong)extraout_XMM0_Qb >> 0x20 );
      if ((float)auVar4._0_8_ <= fVar5) {
         auVar6._0_4_ = fVar5;
      }

      if (fVar7 <= (float)auVar4._0_8_) {
         auVar4._0_4_ = fVar7;
      }

   }
 while ( iVar2 != 4 );
   if (auVar4._0_4_ <= fVar8) {
      fVar8 = auVar4._0_4_;
   }

   if (fVar3 <= auVar6._0_4_) {
      fVar3 = auVar6._0_4_;
   }

   *param_4 = fVar8;
   *param_5 = fVar3;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotConvexPolygonShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&)
   const */void GodotConvexPolygonShape2D::project_rangev(GodotConvexPolygonShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   float fVar4;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x68 ) == 0 ) || ( *(int*)( this + 0x70 ) < 1 )) {
      *param_4 = 0.0;
      *param_3 = 0.0;
   }
 else {
      fVar4 = (float)Vector2::dot(param_1);
      iVar2 = *(int*)( this + 0x70 );
      *param_4 = fVar4;
      *param_3 = fVar4;
      if (1 < iVar2) {
         iVar2 = 0;
         do {
            fVar4 = (float)Vector2::dot(param_1);
            if (*param_4 <= fVar4 && fVar4 != *param_4) {
               *param_4 = fVar4;
            }

            if (fVar4 < *param_3) {
               *param_3 = fVar4;
            }

            iVar3 = iVar2 + 2;
            iVar2 = iVar2 + 1;
         }
 while ( iVar3 < *(int*)( this + 0x70 ) );
      }

   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotConvexPolygonShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D
   const&, float&, float&) const */void GodotConvexPolygonShape2D::project_range_castv(GodotConvexPolygonShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long lVar1;
   float fVar2;
   int iVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   float local_80;
   float local_7c;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x68 ) == 0) {
      *param_4 = 0.0;
   }
 else {
      if (0 < *(int*)( this + 0x70 )) {
         local_80 = (float)Vector2::dot(param_2);
         local_7c = local_80;
         if (1 < *(int*)( this + 0x70 )) {
            iVar3 = 1;
            local_7c = local_80;
            do {
               iVar3 = iVar3 + 1;
               fVar4 = (float)Vector2::dot(param_2);
               fVar5 = fVar4;
               if (local_7c <= fVar4) {
                  fVar5 = local_7c;
               }

               if (fVar4 <= local_80) {
                  fVar4 = local_80;
               }

               local_80 = fVar4;
               local_7c = fVar5;
            }
 while ( iVar3 < *(int*)( this + 0x70 ) );
         }

         if (( *(long*)( this + 0x68 ) == 0 ) || ( *(int*)( this + 0x70 ) < 1 )) {
            fVar4 = 0.0;
            fVar5 = 0.0;
         }
 else {
            fVar4 = (float)Vector2::dot(param_2);
            fVar5 = fVar4;
            if (1 < *(int*)( this + 0x70 )) {
               iVar3 = 1;
               fVar6 = fVar4;
               do {
                  iVar3 = iVar3 + 1;
                  fVar5 = (float)Vector2::dot(param_2);
                  fVar2 = fVar5;
                  if (fVar5 <= fVar4) {
                     fVar2 = fVar4;
                  }

                  fVar4 = fVar2;
                  if (fVar6 <= fVar5) {
                     fVar5 = fVar6;
                  }

                  fVar6 = fVar5;
               }
 while ( iVar3 < *(int*)( this + 0x70 ) );
            }

         }

         if (fVar5 <= local_7c) {
            local_7c = fVar5;
         }

         if (local_80 <= fVar4) {
            local_80 = fVar4;
         }

         *param_4 = local_7c;
         goto LAB_00108014;
      }

      *param_4 = 0.0;
   }

   local_80 = 0.0;
   LAB_00108014:*param_5 = local_80;
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotCircleShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&) const */void GodotCircleShape2D::project_rangev(GodotCircleShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)Vector2::dot(param_1);
   Vector2::dot((Vector2*)( param_2 + 8 ));
   Vector2::dot((Vector2*)param_2);
   fVar3 = (float)Vector2::length();
   *param_3 = fVar2 - *(float*)( this + 0x68 ) * fVar3;
   *param_4 = fVar3 * *(float*)( this + 0x68 ) + fVar2;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCircleShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D const&,
   float&, float&) const */void GodotCircleShape2D::project_range_castv(GodotCircleShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long in_FS_OFFSET;
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = *(undefined8*)param_3;
   uStack_50 = *(undefined8*)( param_3 + 8 );
   local_48 = CONCAT44((float)( ( ulong ) * (undefined8*)( param_3 + 0x10 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ), (float)*(undefined8*)( param_3 + 0x10 ) + (float)*(undefined8*)param_1);
   fVar1 = (float)Vector2::dot(param_2);
   Vector2::dot((Vector2*)( param_3 + 8 ));
   Vector2::dot((Vector2*)param_3);
   fVar2 = (float)Vector2::length();
   fVar5 = fVar1 - fVar2 * *(float*)( this + 0x68 );
   fVar1 = fVar1 + fVar2 * *(float*)( this + 0x68 );
   fVar3 = (float)Vector2::dot(param_2);
   Vector2::dot((Vector2*)&uStack_50);
   Vector2::dot((Vector2*)&local_58);
   fVar2 = (float)Vector2::length();
   fVar4 = fVar3 - fVar2 * *(float*)( this + 0x68 );
   fVar3 = fVar2 * *(float*)( this + 0x68 ) + fVar3;
   if (fVar4 <= fVar5) {
      fVar5 = fVar4;
   }

   if (fVar1 <= fVar3) {
      fVar1 = fVar3;
   }

   *param_4 = fVar5;
   *param_5 = fVar1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GodotConcavePolygonShape2D::Segment>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotConcavePolygonShape2D::Segment>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotConcavePolygonShape2D::BVH>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector2>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<Vector2>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Vector2>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001082f6(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotCapsuleShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D const&,
   float&, float&) const */void GodotCapsuleShape2D::project_range_castv(GodotCapsuleShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long in_FS_OFFSET;
   float fVar1;
   float fVar2;
   float fVar3;
   float local_8c;
   float local_78;
   undefined8 local_58;
   undefined8 uStack_50;
   float local_48;
   float fStack_44;
   long local_40;
   local_58 = *(undefined8*)param_3;
   uStack_50 = *(undefined8*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = (float)*(undefined8*)( param_3 + 0x10 ) + (float)*(undefined8*)param_1;
   fStack_44 = (float)( ( ulong ) * (undefined8*)( param_3 + 0x10 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   Vector2::dot((Vector2*)( param_3 + 8 ));
   Vector2::dot((Vector2*)param_3);
   Vector2::normalized();
   fVar1 = (float)Vector2::dot(param_2);
   local_78 = (float)Vector2::dot(param_2);
   local_8c = fVar1;
   if (fVar1 < local_78) {
      local_8c = local_78;
      local_78 = fVar1;
   }

   Vector2::dot((Vector2*)&uStack_50);
   Vector2::dot((Vector2*)&local_58);
   Vector2::normalized();
   fVar2 = (float)Vector2::dot(param_2);
   fVar3 = (float)Vector2::dot(param_2);
   fVar1 = fVar2;
   if (fVar2 < fVar3) {
      fVar1 = fVar3;
      fVar3 = fVar2;
   }

   if (fVar3 <= local_78) {
      local_78 = fVar3;
   }

   if (local_8c <= fVar1) {
      local_8c = fVar1;
   }

   *param_4 = local_78;
   *param_5 = local_8c;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSeparationRayShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&)
   const */void GodotSeparationRayShape2D::project_rangev(GodotSeparationRayShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)Vector2::dot(param_1);
   *param_4 = fVar2;
   fVar3 = (float)Vector2::dot(param_1);
   *param_3 = fVar3;
   fVar2 = *param_4;
   if (fVar2 < fVar3) {
      *param_4 = fVar3;
      *param_3 = fVar2;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSeparationRayShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D
   const&, float&, float&) const */void GodotSeparationRayShape2D::project_range_castv(GodotSeparationRayShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   undefined4 local_64;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_64 = (float)Vector2::dot(param_2);
   fVar2 = (float)Vector2::dot(param_2);
   fVar5 = fVar2;
   if (local_64 < fVar2) {
      fVar5 = local_64;
      local_64 = fVar2;
   }

   fVar3 = (float)Vector2::dot(param_2);
   fVar4 = (float)Vector2::dot(param_2);
   fVar2 = fVar3;
   if (fVar3 < fVar4) {
      fVar2 = fVar4;
      fVar4 = fVar3;
   }

   if (fVar4 <= fVar5) {
      fVar5 = fVar4;
   }

   if (local_64 <= fVar2) {
      local_64 = fVar2;
   }

   *param_4 = fVar5;
   *param_5 = local_64;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSegmentShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&) const */void GodotSegmentShape2D::project_rangev(GodotSegmentShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar2 = (float)Vector2::dot(param_1);
   *param_4 = fVar2;
   fVar3 = (float)Vector2::dot(param_1);
   *param_3 = fVar3;
   fVar2 = *param_4;
   if (fVar2 < fVar3) {
      *param_4 = fVar3;
      *param_3 = fVar2;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSegmentShape2D::project_range_castv(Vector2 const&, Vector2 const&, Transform2D const&,
   float&, float&) const */void GodotSegmentShape2D::project_range_castv(GodotSegmentShape2D *this, Vector2 *param_1, Vector2 *param_2, Transform2D *param_3, float *param_4, float *param_5) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   undefined4 local_50;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = (float)Vector2::dot(param_2);
   fVar2 = (float)Vector2::dot(param_2);
   fVar5 = fVar2;
   if (local_50 < fVar2) {
      fVar5 = local_50;
      local_50 = fVar2;
   }

   fVar3 = (float)Vector2::dot(param_2);
   fVar4 = (float)Vector2::dot(param_2);
   fVar2 = fVar3;
   if (fVar3 < fVar4) {
      fVar2 = fVar4;
      fVar4 = fVar3;
   }

   if (fVar4 <= fVar5) {
      fVar5 = fVar4;
   }

   if (local_50 <= fVar2) {
      local_50 = fVar2;
   }

   *param_4 = fVar5;
   *param_5 = local_50;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCapsuleShape2D::project_rangev(Vector2 const&, Transform2D const&, float&, float&) const */void GodotCapsuleShape2D::project_rangev(GodotCapsuleShape2D *this, Vector2 *param_1, Transform2D *param_2, float *param_3, float *param_4) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Vector2::dot((Vector2*)( param_2 + 8 ));
   Vector2::dot((Vector2*)param_2);
   Vector2::normalized();
   fVar2 = (float)Vector2::dot(param_1);
   *param_4 = fVar2;
   fVar3 = (float)Vector2::dot(param_1);
   *param_3 = fVar3;
   fVar2 = *param_4;
   if (fVar2 < fVar3) {
      *param_4 = fVar3;
      *param_3 = fVar2;
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotSegmentShape2D::~GodotSegmentShape2D() */void GodotSegmentShape2D::~GodotSegmentShape2D(GodotSegmentShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ad80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotSegmentShape2D::~GodotSegmentShape2D() */void GodotSegmentShape2D::~GodotSegmentShape2D(GodotSegmentShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ad80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x80);
   return;
}
/* GodotCapsuleShape2D::~GodotCapsuleShape2D() */void GodotCapsuleShape2D::~GodotCapsuleShape2D(GodotCapsuleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010af00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotCapsuleShape2D::~GodotCapsuleShape2D() */void GodotCapsuleShape2D::~GodotCapsuleShape2D(GodotCapsuleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010af00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x70);
   return;
}
/* GodotRectangleShape2D::~GodotRectangleShape2D() */void GodotRectangleShape2D::~GodotRectangleShape2D(GodotRectangleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ae80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotRectangleShape2D::~GodotRectangleShape2D() */void GodotRectangleShape2D::~GodotRectangleShape2D(GodotRectangleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ae80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x70);
   return;
}
/* GodotCircleShape2D::~GodotCircleShape2D() */void GodotCircleShape2D::~GodotCircleShape2D(GodotCircleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ae00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotCircleShape2D::~GodotCircleShape2D() */void GodotCircleShape2D::~GodotCircleShape2D(GodotCircleShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ae00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x70);
   return;
}
/* GodotSeparationRayShape2D::~GodotSeparationRayShape2D() */void GodotSeparationRayShape2D::~GodotSeparationRayShape2D(GodotSeparationRayShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ad00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotSeparationRayShape2D::~GodotSeparationRayShape2D() */void GodotSeparationRayShape2D::~GodotSeparationRayShape2D(GodotSeparationRayShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ad00;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x70);
   return;
}
/* GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D() */void GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D(GodotWorldBoundaryShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ac80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D() */void GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D(GodotWorldBoundaryShape2D *this) {
   *(undefined***)this = &PTR_get_type_0010ac80;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0x78);
   return;
}
/* GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D() */void GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D(GodotConcavePolygonShape2D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_get_type_0010b000;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -16*i + 144 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -16*i + 144 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -16*i + 144 ) );
            *(undefined8*)( this + ( -16*i + 144 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR___cxa_pure_virtual_0010ab78;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   return;
}
/* GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D() */void GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D(GodotConcavePolygonShape2D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_get_type_0010b000;
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -16*i + 144 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -16*i + 144 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + ( -16*i + 144 ) );
            *(undefined8*)( this + ( -16*i + 144 ) ) = 0;
            Memory::free_static((void*)( lVar2 + -16 ), false);
         }

      }

   }

   *(undefined***)this = &PTR___cxa_pure_virtual_0010ab78;
   GodotShape2D::~GodotShape2D((GodotShape2D*)this);
   operator_delete(this, 0xa0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<GodotShapeOwner2D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotShapeOwner2D*>,
   DefaultTypedAllocator<HashMapElement<GodotShapeOwner2D*, int> > >::operator[](GodotShapeOwner2D*
   const&) */undefined1[16];HashMap<GodotShapeOwner2D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner2D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner2D*,int>>>::operator [](HashMap<GodotShapeOwner2D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotShapeOwner2D*>,DefaultTypedAllocator<HashMapElement<GodotShapeOwner2D*,int>>>
             *this,GodotShapeOwner2D**param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
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
  undefined1 auVar30[16];
  undefined1 auVar31[16];
  undefined1 auVar32[16];
  undefined1 auVar33[16];
  undefined1 auVar34[16];
  undefined1 auVar35[16];
  undefined1 auVar36[16](*, pauVar37)[16](*, pauVar42)[16](*, pauVar57)[16];
  undefined1 auVar58[16];
  undefined1 auVar59[16](ulong)(local_70 = = (void*)0x0) {
   uVar40 = uVar55 * 4;
   uVar39 = uVar55 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   lStack_90 = 0x109782;
   local_70 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      pGVar56 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_001092ab;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_70 + uVar39 ) ) && ( local_70 < (void*)( (long)pvVar4 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar55 != uVar40 );
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar40);
         lStack_90 = 0x1097ca;
         memset(local_70, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         pGVar56 = *param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_00109653;
   }

}
else{iVar43 = *(int*)( this + 0x2c );if (iVar43 != 0) {
   lVar52 = *(long*)( this + 0x10 );
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar54 * lVar3;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar55;
   lVar45 = SUB168(auVar5 * auVar21, 8);
   uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar53 = SUB164(auVar5 * auVar21, 8);
   if (uVar44 != 0) {
      uVar50 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar44 ) && ( pGVar56 == *(GodotShapeOwner2D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) )) {
            auVar58._0_8_ = *(long*)( (long)local_70 + (ulong)uVar53 * 8 ) + 0x18;
            auVar58._8_8_ = lVar46;
            return auVar58;
         }

         uVar50 = uVar50 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar55;
         lVar45 = SUB168(auVar6 * auVar22, 8);
         uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar53 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar7 * auVar23, 8)) * lVar3,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,lVar46 = SUB168(auVar8 * auVar24, 8),uVar50 <= SUB164(auVar8 * auVar24, 8) );
   }

   LAB_00109653:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
   lVar3 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
   uVar39 = (long)pGVar56 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar54 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar54 = 1;
   }

   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar54 * lVar3;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar51;
   lVar45 = SUB168(auVar17 * auVar33, 8);
   uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
   uVar44 = SUB164(auVar17 * auVar33, 8);
   if (uVar47 != 0) {
      uVar53 = 0;
      lVar46 = lVar45;
      do {
         if (( (uint)uVar54 == uVar47 ) && ( *(GodotShapeOwner2D**)( *(long*)( (long)local_70 + lVar45 * 8 ) + 0x10 ) == pGVar56 )) {
            pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar44 * 8 );
            *(undefined4*)( pauVar42[1] + 8 ) = 0;
            lStack_90 = lVar46;
            goto LAB_00109634;
         }

         uVar53 = uVar53 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(uVar44 + 1) * lVar3;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar51;
         lVar45 = SUB168(auVar18 * auVar34, 8);
         uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar44 = SUB164(auVar18 * auVar34, 8);
      }
 while ( ( uVar47 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar47 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar44 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar51,lVar46 = SUB168(auVar20 * auVar36, 8),uVar53 <= SUB164(auVar20 * auVar36, 8) );
   }

}
}LAB_001092ab:if ((float)uVar55 * __LC68 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00109634;
   }

   uVar40 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar40 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar55 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar44 != 0) {
      uVar40 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar4 + uVar40 * 4 );
         if (uVar47 != 0) {
            lVar52 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            lVar45 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar52 + lVar45 * 4 );
            iVar43 = SUB164(auVar9 * auVar25, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar50 * lVar3;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar53 + iVar43 ) - SUB164(auVar10 * auVar26, 8)) * lVar3;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               uVar38 = SUB164(auVar11 * auVar27, 8);
               uVar48 = uVar41;
               if (uVar38 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar41;
                  uVar47 = uVar50;
                  uVar49 = uVar38;
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar55;
               lVar45 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar52 + lVar45 * 4 );
               iVar43 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar44 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar4, false);
   }

}
pGVar56 = *param_1;pauVar42 = (undefined1(*) [16])operator_new(0x20, "");*(GodotShapeOwner2D**)pauVar42[1] = pGVar56;*(undefined4*)( pauVar42[1] + 8 ) = 0;*pauVar42 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
lVar52 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = (long)*param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar55 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar47);auVar13._8_8_ = 0;auVar13._0_8_ = uVar55 * lVar3;auVar29._8_8_ = 0;auVar29._0_8_ = uVar40;lStack_90 = SUB168(auVar13 * auVar29, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar52 + lStack_90 * 4 );iVar43 = SUB164(auVar13 * auVar29, 8);uVar44 = *puVar1;pauVar37 = pauVar42;while (uVar44 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar44 * lVar3;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar47 + iVar43 ) - SUB164(auVar14 * auVar30, 8)) * lVar3;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   uVar53 = SUB164(auVar15 * auVar31, 8);
   pauVar57 = pauVar37;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar45 + lStack_90 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar43 + 1) * lVar3;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar40;
   lStack_90 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar43 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar57;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar45 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00109634:auVar59._8_8_ = lStack_90;auVar59._0_8_ = pauVar42[1] + 8;return auVar59;}/* GodotConvexPolygonShape2D::Point* memnew_arr_template<GodotConvexPolygonShape2D::Point>(unsigned
   long) */Point *memnew_arr_template<GodotConvexPolygonShape2D::Point>(ulong param_1) {
   Point *pPVar1;
   Point *pPVar2;
   Point *pPVar3;
   if (param_1 != 0) {
      pPVar1 = (Point*)Memory::alloc_static(param_1 * 0x10, true);
      if (pPVar1 == (Point*)0x0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         pPVar1 = (Point*)0x0;
      }
 else {
         *(ulong*)( pPVar1 + -8 ) = param_1;
         pPVar2 = pPVar1;
         do {
            *(undefined8*)pPVar2 = 0;
            pPVar3 = pPVar2 + 0x10;
            *(undefined8*)( pPVar2 + 8 ) = 0;
            pPVar2 = pPVar3;
         }
 while ( pPVar3 != pPVar1 + param_1 * 0x10 );
      }

      return pPVar1;
   }

   return (Point*)0x0;
}
/* HashMap<Vector2, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2>,
   DefaultTypedAllocator<HashMapElement<Vector2, int> > >::_lookup_pos(Vector2 const&, unsigned
   int&) const */undefined8 HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>::_lookup_pos(HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>> *this, Vector2 *param_1, uint *param_2) {
   float fVar1;
   float fVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   uint uVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   float fVar19;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) == 0) {
      return 0;
   }

   fVar1 = *(float*)param_1;
   uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar13 = 0x3413905a;
   if (fVar1 == 0.0) {
      LAB_00109a11:fVar19 = *(float*)( param_1 + 4 );
      if (fVar19 != 0.0) {
         LAB_00109b5c:if (NAN(fVar19)) {
            uVar13 = uVar13 ^ 0x2db3efa0;
         }
 else {
            uVar13 = uVar13 ^ ( (int)fVar19 * 0x16a88000 | ( uint )((int)fVar19 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }

         goto LAB_00109b76;
      }

      uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      uVar13 = ( uVar13 >> 0x10 ^ uVar13 ) * -0x7a143595;
      uVar13 = ( uVar13 >> 0xd ^ uVar13 ) * -0x3d4d51cb;
      uVar13 = uVar13 >> 0x10 ^ uVar13;
   }
 else {
      if (NAN(fVar1)) {
         uVar13 = 0x22afa5cc;
         goto LAB_00109a11;
      }

      fVar19 = *(float*)( param_1 + 4 );
      uVar13 = ( (int)fVar1 * 0x16a88000 | ( uint )((int)fVar1 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      if (fVar19 != 0.0) goto LAB_00109b5c;
      LAB_00109b76:uVar13 = ( uVar13 << 0xd | uVar13 >> 0x13 ) * 5 + 0xe6546b64;
      uVar13 = ( uVar13 >> 0x10 ^ uVar13 ) * -0x7a143595;
      uVar12 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar13 = uVar12 ^ uVar12 >> 0x10;
      if (uVar12 == uVar12 >> 0x10) {
         uVar13 = 1;
         uVar15 = uVar3;
         goto LAB_00109a5a;
      }

   }

   uVar15 = uVar13 * uVar3;
   LAB_00109a5a:uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar17;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar15;
   lVar16 = SUB168(auVar4 * auVar8, 8);
   uVar12 = *(uint*)( *(long*)( this + 0x10 ) + lVar16 * 4 );
   uVar14 = SUB164(auVar4 * auVar8, 8);
   if (uVar12 != 0) {
      uVar18 = 0;
      do {
         if (uVar13 == uVar12) {
            lVar16 = *(long*)( *(long*)( this + 8 ) + lVar16 * 8 );
            fVar2 = *(float*)( lVar16 + 0x10 );
            if (( ( fVar1 == fVar2 ) || ( ( NAN(fVar2) && ( NAN(fVar1) ) ) ) ) && ( ( fVar2 = *(float*)( lVar16 + 0x14 ) ),fVar2 == fVar19 || ( ( NAN(fVar2) && ( NAN(fVar19) ) ) ) )) {
               *param_2 = uVar14;
               return 1;
            }

         }

         uVar18 = uVar18 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( uVar14 + 1 ) * uVar3;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar17;
         lVar16 = SUB168(auVar5 * auVar9, 8);
         uVar12 = *(uint*)( *(long*)( this + 0x10 ) + lVar16 * 4 );
         uVar14 = SUB164(auVar5 * auVar9, 8);
      }
 while ( ( uVar12 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar12 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar14 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,uVar18 <= SUB164(auVar7 * auVar11, 8) );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Vector2, int, HashMapHasherDefault, HashMapComparatorDefault<Vector2>,
   DefaultTypedAllocator<HashMapElement<Vector2, int> > >::operator[](Vector2 const&) */undefined1 * __thiscall
HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
::operator[](HashMap<Vector2,int,HashMapHasherDefault,HashMapComparatorDefault<Vector2>,DefaultTypedAllocator<HashMapElement<Vector2,int>>>
             *this,Vector2 *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   float fVar3;
   uint uVar4;
   void *pvVar5;
   void *__s;
   long lVar6;
   long lVar7;
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
   char cVar25;
   uint uVar26;
   ulong uVar27;
   undefined8 uVar28;
   void *__s_00;
   undefined1(*pauVar29)[16];
   void *pvVar30;
   int iVar31;
   uint uVar32;
   long lVar33;
   long lVar34;
   ulong uVar35;
   undefined8 uVar36;
   uint uVar37;
   uint uVar38;
   ulong uVar39;
   undefined1(*pauVar40)[16];
   long in_FS_OFFSET;
   float fVar41;
   uint local_c8;
   uint local_70;
   uint local_6c[5];
   undefined8 local_58;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   cVar25 = _lookup_pos(this, param_1, &local_70);
   if (cVar25 != '\0') {
      pauVar29 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_70 * 8 );
      goto LAB_0010a067;
   }

   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      uVar35 = (ulong)uVar32;
      uVar27 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar28 = Memory::alloc_static(uVar27, false);
      *(undefined8*)( this + 0x10 ) = uVar28;
      pvVar30 = (void*)Memory::alloc_static(uVar39, false);
      *(void**)( this + 8 ) = pvVar30;
      if (uVar32 != 0) {
         pvVar5 = *(void**)( this + 0x10 );
         if (( pvVar5 < (void*)( (long)pvVar30 + uVar39 ) ) && ( pvVar30 < (void*)( (long)pvVar5 + uVar27 ) )) {
            uVar27 = 0;
            do {
               *(undefined4*)( (long)pvVar5 + uVar27 * 4 ) = 0;
               *(undefined8*)( (long)pvVar30 + uVar27 * 8 ) = 0;
               uVar27 = uVar27 + 1;
            }
 while ( uVar35 != uVar27 );
         }
 else {
            memset(pvVar5, 0, uVar27);
            memset(pvVar30, 0, uVar39);
         }

      }

   }

   local_6c[0] = 0;
   cVar25 = _lookup_pos(this, param_1, local_6c);
   if (cVar25 != '\0') {
      pauVar29 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_6c[0] * 8 );
      *(undefined4*)( pauVar29[1] + 8 ) = 0;
      goto LAB_0010a067;
   }

   if ((float)uVar32 * __LC68 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar32 = *(uint*)( this + 0x28 );
      if (uVar32 == 0x1c) {
         pauVar29 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010a067;
      }

      uVar27 = ( ulong )(uVar32 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar26 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
      if (uVar32 + 1 < 2) {
         uVar27 = 2;
      }

      uVar32 = *(uint*)( hash_table_size_primes + uVar27 * 4 );
      uVar35 = (ulong)uVar32;
      *(int*)( this + 0x28 ) = (int)uVar27;
      pvVar30 = *(void**)( this + 8 );
      uVar27 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      pvVar5 = *(void**)( this + 0x10 );
      uVar28 = Memory::alloc_static(uVar27, false);
      *(undefined8*)( this + 0x10 ) = uVar28;
      __s_00 = (void*)Memory::alloc_static(uVar39, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar32 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar27 ) )) {
            uVar27 = 0;
            do {
               *(undefined4*)( (long)__s + uVar27 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar27 * 8 ) = 0;
               uVar27 = uVar27 + 1;
            }
 while ( uVar35 != uVar27 );
         }
 else {
            memset(__s, 0, uVar27);
            memset(__s_00, 0, uVar39);
         }

      }

      if (uVar26 != 0) {
         uVar27 = 0;
         do {
            uVar32 = *(uint*)( (long)pvVar5 + uVar27 * 4 );
            if (uVar32 != 0) {
               lVar6 = *(long*)( this + 0x10 );
               uVar37 = 0;
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar39 = CONCAT44(0, uVar4);
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar32 * lVar7;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar39;
               lVar33 = SUB168(auVar8 * auVar16, 8);
               puVar1 = (uint*)( lVar6 + lVar33 * 4 );
               iVar31 = SUB164(auVar8 * auVar16, 8);
               uVar38 = *puVar1;
               uVar28 = *(undefined8*)( (long)pvVar30 + uVar27 * 8 );
               while (uVar38 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar38 * lVar7;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar39;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar4 + iVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar7;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar39;
                  local_c8 = SUB164(auVar10 * auVar18, 8);
                  uVar36 = uVar28;
                  if (local_c8 < uVar37) {
                     *puVar1 = uVar32;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar33 * 8 );
                     uVar36 = *puVar2;
                     *puVar2 = uVar28;
                     uVar32 = uVar38;
                     uVar37 = local_c8;
                  }

                  uVar37 = uVar37 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar31 + 1) * lVar7;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar39;
                  lVar33 = SUB168(auVar11 * auVar19, 8);
                  puVar1 = (uint*)( lVar6 + lVar33 * 4 );
                  iVar31 = SUB164(auVar11 * auVar19, 8);
                  uVar28 = uVar36;
                  uVar38 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar33 * 8 ) = uVar28;
               *puVar1 = uVar32;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar27 = uVar27 + 1;
         }
 while ( uVar27 != uVar26 );
         Memory::free_static(pvVar30, false);
         Memory::free_static(pvVar5, false);
      }

   }

   local_58 = *(undefined8*)param_1;
   pauVar29 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar29 = (undefined1[16])0x0;
   *(undefined4*)( pauVar29[1] + 8 ) = 0;
   *(undefined8*)pauVar29[1] = local_58;
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar29;
   }
 else {
      *puVar2 = pauVar29;
      *(undefined8**)( *pauVar29 + 8 ) = puVar2;
   }

   fVar3 = *(float*)param_1;
   *(undefined1(**) [16])( this + 0x20 ) = pauVar29;
   uVar32 = 0x3413905a;
   if (fVar3 == 0.0) {
      LAB_00109f24:fVar41 = *(float*)( param_1 + 4 );
      if (fVar41 != 0.0) {
         LAB_0010a0cd:if (NAN(fVar41) || NAN(fVar41)) {
            uVar32 = uVar32 ^ 0x2db3efa0;
         }
 else {
            uVar32 = uVar32 ^ ( (int)fVar41 * 0x16a88000 | ( uint )((int)fVar41 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
         }

         goto LAB_0010a0d7;
      }

      uVar32 = ( uVar32 << 0xd | uVar32 >> 0x13 ) * 5 + 0xe6546b64;
      uVar32 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
      uVar32 = ( uVar32 >> 0xd ^ uVar32 ) * -0x3d4d51cb;
      uVar32 = uVar32 >> 0x10 ^ uVar32;
      LAB_00109f6c:uVar27 = (ulong)uVar32;
   }
 else {
      if (NAN(fVar3)) {
         uVar32 = 0x22afa5cc;
         goto LAB_00109f24;
      }

      fVar41 = *(float*)( param_1 + 4 );
      uVar32 = ( (int)fVar3 * 0x16a88000 | ( uint )((int)fVar3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
      uVar32 = ( uVar32 << 0xd | uVar32 >> 0x13 ) * 5 + 0xe6546b64;
      if (fVar41 != 0.0) goto LAB_0010a0cd;
      LAB_0010a0d7:uVar32 = ( uVar32 << 0xd | uVar32 >> 0x13 ) * 5 + 0xe6546b64;
      uVar32 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
      uVar26 = ( uVar32 ^ uVar32 >> 0xd ) * -0x3d4d51cb;
      uVar32 = uVar26 ^ uVar26 >> 0x10;
      if (uVar26 != uVar26 >> 0x10) goto LAB_00109f6c;
      uVar27 = 1;
      uVar32 = 1;
   }

   uVar38 = 0;
   lVar6 = *(long*)( this + 0x10 );
   lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar39 = CONCAT44(0, uVar26);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar27 * lVar7;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar39;
   lVar34 = SUB168(auVar12 * auVar20, 8);
   lVar33 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar6 + lVar34 * 4 );
   iVar31 = SUB164(auVar12 * auVar20, 8);
   uVar4 = *puVar1;
   pauVar24 = pauVar29;
   while (uVar4 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar4 * lVar7;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar39;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar26 + iVar31 ) - SUB164(auVar13 * auVar21, 8)) * lVar7;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar39;
      local_c8 = SUB164(auVar14 * auVar22, 8);
      pauVar40 = pauVar24;
      if (local_c8 < uVar38) {
         *puVar1 = uVar32;
         puVar2 = (undefined8*)( lVar33 + lVar34 * 8 );
         pauVar40 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar24;
         uVar32 = uVar4;
         uVar38 = local_c8;
      }

      uVar38 = uVar38 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar31 + 1) * lVar7;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar39;
      lVar34 = SUB168(auVar15 * auVar23, 8);
      puVar1 = (uint*)( lVar6 + lVar34 * 4 );
      iVar31 = SUB164(auVar15 * auVar23, 8);
      pauVar24 = pauVar40;
      uVar4 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar33 + lVar34 * 8 ) = pauVar24;
   *puVar1 = uVar32;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0010a067:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pauVar29[1] + 8;
}
/* CowData<Vector2>::_realloc(long) */undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
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
/* CowData<GodotConcavePolygonShape2D::BVH>::_realloc(long) */undefined8 CowData<GodotConcavePolygonShape2D::BVH>::_realloc(CowData<GodotConcavePolygonShape2D::BVH> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GodotConcavePolygonShape2D::BVH>::resize<false>(long) */undefined8 CowData<GodotConcavePolygonShape2D::BVH>::resize<false>(CowData<GodotConcavePolygonShape2D::BVH> *this, long param_1) {
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
      lVar3 = lVar10 * 0x18;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_0010a5d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0x18 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar9 = uVar4 + 1;
   if (lVar9 == 0) goto LAB_0010a5d0;
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
      LAB_0010a53c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar8[-1];
      if (param_1 <= lVar3) goto LAB_0010a4d0;
   }
 else {
      if (lVar10 != 0) {
         uVar7 = _realloc(this, lVar9);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_0010a53c;
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

   puVar5 = puVar8 + lVar3 * 3;
   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 3;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 3 );
   LAB_0010a4d0:puVar8[-1] = param_1;
   return 0;
}
/* CowData<GodotConcavePolygonShape2D::Segment>::_realloc(long) */undefined8 CowData<GodotConcavePolygonShape2D::Segment>::_realloc(CowData<GodotConcavePolygonShape2D::Segment> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GodotConcavePolygonShape2D::Segment>::resize<false>(long) */undefined8 CowData<GodotConcavePolygonShape2D::Segment>::resize<false>(CowData<GodotConcavePolygonShape2D::Segment> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
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
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
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
      lVar3 = lVar8 * 8;
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
      LAB_0010a8f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_0010a8f0;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
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

   if (lVar7 == lVar3) {
      LAB_0010a85c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010a7f1;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010a85c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_0010a7f1:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D() */void GodotConcavePolygonShape2D::~GodotConcavePolygonShape2D(GodotConcavePolygonShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D() */void GodotWorldBoundaryShape2D::~GodotWorldBoundaryShape2D(GodotWorldBoundaryShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotSeparationRayShape2D::~GodotSeparationRayShape2D() */void GodotSeparationRayShape2D::~GodotSeparationRayShape2D(GodotSeparationRayShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotCircleShape2D::~GodotCircleShape2D() */void GodotCircleShape2D::~GodotCircleShape2D(GodotCircleShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotRectangleShape2D::~GodotRectangleShape2D() */void GodotRectangleShape2D::~GodotRectangleShape2D(GodotRectangleShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotCapsuleShape2D::~GodotCapsuleShape2D() */void GodotCapsuleShape2D::~GodotCapsuleShape2D(GodotCapsuleShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GodotSegmentShape2D::~GodotSegmentShape2D() */void GodotSegmentShape2D::~GodotSegmentShape2D(GodotSegmentShape2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

